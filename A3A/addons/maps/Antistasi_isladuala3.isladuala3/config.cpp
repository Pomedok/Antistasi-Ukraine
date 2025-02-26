class CfgPatches {
    class EnemyAirAlert {
        name = "Enemy Air Alert";
        author = "Prometey";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {};
    };
};

class CfgSounds {
    sounds[] = {siren_sound, voice_alert};

    class siren_sound {
        name = "Siren Sound";
        sound[] = {"\sound\siren_sound.ogg", 1, 1};
        titles[] = {};
    };

    class voice_alert {
        name = "Voice Alert";
        sound[] = {"\sound\voice_alert.ogg", 1, 1};
        titles[] = {};
    };
};
