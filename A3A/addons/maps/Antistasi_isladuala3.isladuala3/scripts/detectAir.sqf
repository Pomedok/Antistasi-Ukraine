private _radius = 15000; // Радиус поиска авиации (в метрах)
private _lastAlertTime = 0; // Время последнего предупреждения
private _alertTriggered = false; // Флаг для отслеживания предупреждения
private _cleanTriggered = false; // Флаг для сообщения "Наразі чисто!"
private _iconActive = false; // Флаг отображения красной иконки
private _knownEnemies = []; // Массив известных врагов
private _mapCenter = [5180.840, 5115.481, 0]; // Центр карты (пример для Altis)

hint "Скрипт запущен. Ожидаю вражескую авиацию..."; // Для отладки

// Проверяем, является ли объект активным воздушным судном
private _isActiveAircraft = {
    params ["_aircraft"];
    alive _aircraft && (speed _aircraft > 1.39)
};

private _iconRedActive = false; // Флаг для красной иконки

while {true} do {
    private _aircrafts = nearestObjects [_mapCenter, ["Air"], _radius];
    private _enemyUnits = _aircrafts select {side _x in [blufor, opfor] && [_x] call _isActiveAircraft};

    diag_log format ["Обнаружено вражеских объектов: %1", count _enemyUnits];

    if (count _enemyUnits > 0) then {
        // Удаляем уничтоженные объекты из списка известных
        _enemyUnits = _enemyUnits select {alive _x && !isNull _x};
        diag_log format ["После фильтрации: %1", count _enemyUnits];

        private _newEnemies = _enemyUnits select {!(_knownEnemies find _x != -1)};
        _knownEnemies = _knownEnemies + _newEnemies;

        // Если обнаружена новая авиация
        if (count _newEnemies > 0) then {
            // Если авиация появляется впервые, выводим сообщение о ней
            if (!_alertTriggered) then {
                _alertTriggered = true;
                _lastAlertTime = time;

                // Сообщение о новой авиации
                private _message = format ["Здійснено виліт ворожої авіації. Приблизно %1 одиниць", count _enemyUnits];
                systemChat _message;
                playSound "siren_sound";
                sleep 1;
                playSound "voice_alert";
                0 cutRsc ["AlarmRed", "PLAIN", 2];  // Появляется иконка
                sleep 1;
                _iconRedActive = true; // Устанавливаем флаг
            } else {
                // Сообщение о дополнительной авиации
                private _messageNew = format ["В наш простір заходить ще авіація! Загалом приблизно %1", count _knownEnemies];
                systemChat _messageNew;
            }
        };

        // Включаем красную иконку, если она еще не активирована
        if (!_iconRedActive) then {
            0 cutRsc ["AlarmRed", "PLAIN", 2];  // Появляется иконка
            sleep 1;
            _iconRedActive = true; // Устанавливаем флаг
            sleep 5; // Держим иконку на экране 5 секунд
            cutRsc ["AlarmRed", "PLAIN", 0];  // Скрываем иконку
            _iconRedActive = false; // Сбрасываем флаг
        };

        _cleanTriggered = false; // Сбрасываем "чисто", если появились враги
    } else {
        _alertTriggered = false;

        // Очищаем список известных врагов
        _knownEnemies = _knownEnemies select {alive _x && _mapCenter distance _x <= _radius};

        // Если нет врагов и иконка активна, выключаем красную иконку
        if (count _knownEnemies == 0 && _iconRedActive) then {
            0 cutRsc ["AlarmRed", "PLAIN", 0]; // Выключаем красную иконку
            _iconRedActive = false; // Сбрасываем флаг
        };

        if (count _knownEnemies == 0 && !_cleanTriggered) then {
            // Очищаем экран и показываем сообщения
            0 cutRsc ["AlarmRed", "PLAIN", 0]; // Выключаем красную иконку
            _iconRedActive = false; // Сбрасываем флаг
            _iconActive = false;
            cutText ["", "PLAIN"];

            // Показ сообщения "Дорозвідка" и желтой иконки
            [] spawn {
                private _reconMessage = "Дорозвідка!";
                systemChat _reconMessage;

                for "_i" from 1 to 5 do {
                    0 cutRsc ["AlarmYellow", "PLAIN", 2]; // Включаем желтую иконку
                    sleep 1.5; // Держим иконку 1.5 секунды
                    cutText ["", "PLAIN"]; // Отключаем иконку
                    sleep 1.5; // Пауза перед следующим включением
                };

                // После моргания показываем "Наразі чисто!"
                private _cleanMessage = "Наразі чисто!";
                systemChat _cleanMessage;

                // Показ зелёной иконки
                0 cutRsc ["AlarmGreen", "PLAIN", 2];
                sleep 5;
                cutText ["", "PLAIN"];
            };

            _cleanTriggered = true;
        };
    };

    sleep 10; // Пауза между проверками
};
