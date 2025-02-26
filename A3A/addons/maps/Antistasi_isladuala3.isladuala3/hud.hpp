class RscPicture;
class AlarmHUD {
    idd = -1;
    movingEnable = false;
    duration = 10e10;
    fadeIn = 0;
    fadeOut = 0;
    name = "AlarmHUD";
    onLoad = "uiNamespace setVariable ['AlarmHUD', _this select 0];";
    onUnload = "uiNamespace setVariable ['AlarmHUD', displayNull];";

    class Controls {
        class AlarmIcon: RscPicture {
            idc = 1001;
            text = "icons\red.paa"; // Красная иконка (Тревога)
            x = 0.85; y = 0.4;
            w = 0.1; h = 0.1;
        };
        class ReconIcon: RscPicture {
            idc = 1002;
            text = "icons\yellow.paa"; // Желтая иконка (Дорозвідка)
            x = 0.85; y = 0.4;
            w = 0.1; h = 0.1;
        };
        class ClearIcon: RscPicture {
            idc = 1003;
            text = "icons\green.paa"; // Зеленая иконка (Чисто)
            x = 0.85; y = 0.4;
            w = 0.1; h = 0.1;
        };
    };
};
