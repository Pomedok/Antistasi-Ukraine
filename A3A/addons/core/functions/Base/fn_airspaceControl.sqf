#define CIV_HELI        0
#define MIL_HELI        1
#define JET             2

params ["_vehicle"];
#include "..\..\script_component.hpp"
FIX_LINE_NUMBERS()

// Проверка, есть ли уже скрипт контроля воздушного пространства
if (_vehicle getVariable ["airspaceControl", false]) exitWith {};
_vehicle setVariable ["airspaceControl", true, true];

// Определение типа аппарата
private _airType = -1;
if (_vehicle isKindOf "Helicopter") then
{
    if ((typeOf _vehicle) in (FactionGet(reb,"vehiclesCivHeli"))) then
    {
        _airType = CIV_HELI;
    }
    else
    {
        _airType = MIL_HELI;
    };
}
else
{
    _airType = JET;
};

// Параметры обнаружения для аванпостов
private _outpostDetectionRange = [300, 500, 750] select _airType;
private _outpostDetectionHeight = [150, 250, 500] select _airType;

// Параметры обнаружения для военных баз
private _milbaseDetectionRange = [450, 600, 1000] select _airType;
private _milbaseDetectionHeight = [350, 350, 1500] select _airType;

// Параметры обнаружения для аэропортов
private _airportDetectionRange = [500, 750, 1500] select _airType;
private _airportDetectionHeight = [500, 500, 2500] select _airType;

// Параметры предупреждения
private _outpostWarningRange = 500;
private _outpostWarningHeight = 250;
private _milbaseWarningRange = 600;
private _milbaseWarningHeight = 350;
private _airportWarningRange = 750;
private _airportWarningHeight = 750;

// Инициализация переменных
private _inWarningRangeOutpost = [];
private _inDetectionRangeOutpost = [];
private _inWarningRangeMilbase = [];
private _inDetectionRangeMilbase = [];
private _inWarningRangeAirport = [];
private _inDetectionRangeAirport = [];
private _vehicleIsUndercover = false;
private _supportCallAt = -1;
private _vehPos = [];

private _fn_sendSupport =
{
    params ["_vehicle", "_marker"];

    private _markerSide = sidesX getVariable [_marker, sideUnknown];
    private _revealValue = [getMarkerPos _marker, _markerSide] call A3A_fnc_calculateSupportCallReveal;

    // Раскрытие для всех групп врага
    {
        if (side _x == _markerSide) then
        {
            _x reveal [_vehicle, 4];
        };
    } forEach allGroups;

    // Реакция в зависимости от типа аппарата
    switch (_airType) do
    {
        case (MIL_HELI):
        {
            Debug_3("Rebel military helicopter %1 detected by %2 (side %3), sending support now!", _vehicle, _marker, _markerSide);
            [_markerSide, _vehicle, markerPos _marker, 4, _revealValue] remoteExec ["A3A_fnc_requestSupport", 2];
        };
        case (JET):
        {
            Debug_3("Rebel jet %1 detected by %2 (side %3), sending support now!", _vehicle, _marker, _markerSide);
            [_vehicle, 4, ["ASF", "SAM"], _markerSide, _revealValue] remoteExec ["A3A_fnc_sendSupport", 2];
        };
        default
        {
            Debug_3("Rebel civil helicopter %1 detected by %2 (side %3), revealed for all groups!", _vehicle, _marker, _markerSide);
        };
    };
};

private _fn_checkNoFlyZone =
{
    params ["_vehicle", "_vehPos", "_markerPos", "_detectionRange", "_detectionHeight"];
    private _heightDiff = (_vehPos select 2) - (_markerPos select 2);
    if (_heightDiff < _detectionHeight && {_markerPos distance2D _vehPos < _detectionRange}) exitWith
    {
        _vehicle setVariable ["NoFlyZoneDetected", _x, true];
        _vehicleIsUndercover = false;
        true;
    };
    false;
};

private _fn_getMarkersInRange =
{
    params ["_markers", "_vehPos", "_range", "_height"];
    private _inRange = _markers select
    {
        private _markerPos = AGLToASL (getMarkerPos _x);
        private _heightDiff = (_vehPos select 2) - (_markerPos select 2);
        _heightDiff < _height && {_markerPos distance2D _vehPos < _range}
    };
    _inRange;
};

// Основной цикл
while {!(isNull _vehicle) && {alive _vehicle && {count (crew _vehicle) != 0}}} do
{
    _vehicleIsUndercover = captive ((crew _vehicle) select 0);
    _vehPos = getPosASL _vehicle;

    private _enemyAirports = airportsX select {sidesX getVariable [_x, sideUnknown] != teamPlayer};
    private _enemyOutposts = (outposts + seaports) select {sidesX getVariable [_x, sideUnknown] != teamPlayer};
    private _enemyMilbases = milbases select {sidesX getVariable [_x, sideUnknown] != teamPlayer};

    if (_vehicleIsUndercover && {_vehicle getVariable ["NoFlyZoneDetected", ""] == ""}) then
    {
        private _airportsInWarningRange = [_enemyAirports, _vehPos, _airportWarningRange, _airportWarningHeight] call _fn_getMarkersInRange;
        private _newAirports = _airportsInWarningRange - _inWarningRangeAirport;
        _inWarningRangeAirport = _airportsInWarningRange;

        private _outpostsInWarningRange = [_enemyOutposts, _vehPos, _outpostWarningRange, _outpostWarningHeight] call _fn_getMarkersInRange;
        private _newOutposts = _outpostsInWarningRange - _inWarningRangeOutpost;
        _inWarningRangeOutpost = _outpostsInWarningRange;

        private _milbasesInWarningRange = [_enemyMilbases, _vehPos, _milbaseWarningRange, _milbaseWarningHeight] call _fn_getMarkersInRange;
        private _newMilbases = _milbasesInWarningRange - _inWarningRangeMilbase;
        _inWarningRangeMilbase = _milbasesInWarningRange;

        {
            private _warningText = format [localize "STR_A3A_base_airspace_control_warning", [_x] call A3A_fnc_localizar];
            [localize "STR_info_bar_undercover_break_title", _warningText] remoteExec ["A3A_fnc_customHint", (crew _vehicle)];
        } forEach (_newAirports + _newOutposts + _newMilbases);

        {
            if ([_vehicle, _vehPos, AGLToASL (getMarkerPos _x), _airportDetectionRange, _airportDetectionHeight] call _fn_checkNoFlyZone) exitWith
            {
                _vehicleIsUndercover = false;
            };
        } forEach _inWarningRangeAirport;

        if (_vehicleIsUndercover) then
        {
            {
                if ([_vehicle, _vehPos, AGLToASL (getMarkerPos _x), _outpostDetectionRange, _outpostDetectionHeight] call _fn_checkNoFlyZone) exitWith
                {
                    _vehicleIsUndercover = false;
                };
            } forEach _inWarningRangeOutpost;
        };

        if (_vehicleIsUndercover) then
        {
            {
                if ([_vehicle, _vehPos, AGLToASL (getMarkerPos _x), _milbaseDetectionRange, _milbaseDetectionHeight] call _fn_checkNoFlyZone) exitWith
                {
                    _vehicleIsUndercover = false;
                };
            } forEach _inWarningRangeMilbase;
        };
    }
    else
    {
        private _airportsInRange = [_enemyAirports, _vehPos, _airportDetectionRange, _airportDetectionHeight] call _fn_getMarkersInRange;
        private _milbasesInRange = [_enemyMilbases, _vehPos, _milbaseDetectionRange, _milbaseDetectionHeight] call _fn_getMarkersInRange;

        private _newAirports = _airportsInRange - _inDetectionRangeAirport;
        _inDetectionRangeAirport = _airportsInRange;

        private _newMilbases = _milbasesInRange - _inDetectionRangeMilbase;
        _inDetectionRangeMilbase = _milbasesInRange;

        switch (true) do
        {
            case (count _newAirports > 0):
            {
                [_vehicle, _newAirports select 0] call _fn_sendSupport;
                _supportCallAt = time + 300;
            };
            case (count _newMilbases > 0):
            {
                [_vehicle, _newMilbases select 0] call _fn_sendSupport;
                _supportCallAt = time + 450;
            };
            default
            {
                if (time > _supportCallAt) then
                {
                    private _outpostsInRange = [_enemyOutposts, _vehPos, _outpostDetectionRange, _outpostDetectionHeight] call _fn_getMarkersInRange;
                    private _newOutposts = _outpostsInRange - _inDetectionRangeOutpost;
                    _inDetectionRangeOutpost = _outpostsInRange;

                    if (count _newOutposts > 0) then
                    {
                        [_vehicle, _newOutposts select 0] call _fn_sendSupport;
                        _supportCallAt = time + 300;
                    };
                };
            };
        };
    };
    sleep 1;
};

_vehicle setVariable ["airspaceControl", nil, true];