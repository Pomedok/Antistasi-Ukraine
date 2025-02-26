
class Templates
{
    class Base
    {
        description = "";
    };

    // ************************************** Western Sahara *******************************************************

    class WS_Base : Base
    {
        requiredAddons[] = {"Weapons_1_F_lxWS"};
        logo = "\lxWS\data_f_lxWS\Logos\arma3_lxws_logo_ca.paa";
        basepath = QPATHTOFOLDER(Templates\Templates\WS); //the path to the template folder
        priority = 1;
        equipFlags[] = {"vanilla"};
    };

    class WS_Tura : WS_Base
    {
        side = "Reb";
        flagTexture = "\lxws\data_f_lxws\img\Flags\flag_Argana_CO.paa";
        basepath = QPATHTOFOLDER(Templates\Templates\WS);
        name = "Tura";
        file = "WS_Reb_Tura";
        maps[] = {"SefrouRamal", "takistan", "isladuala3"};
        forceDLC[] = {"ws"};
        description = $STR_A3AP_setupFactionsTab_ws_tura;
    };

    class WS_Exegermenos : WS_Base
    {
        side = "Riv";
        flagTexture = "\A3\Data_F\Flags\Flag_red_CO.paa";
        name = "WS Exegerménos";
        file = "WS_Riv_Exegermenos";
        description = $STR_A3AP_setupFactionsTab_exegermenos;
    };

    // ************************************** Vanilla *******************************************************

    class Vanilla_Base : Base
    {
        requiredAddons[] = {};
        logo = "a3\ui_f\data\logos\arma3_white_ca.paa";
        basepath = QPATHTOFOLDER(Templates\Templates\Vanilla); //the path to the template folder
        priority = 10;
        equipFlags[] = {"vanilla"};
        description = $STR_A3AP_setupFactionsTab_vanilla_generic;
    };

    class Vanilla_CSAT_Arid : Vanilla_Base
    {
        side = "Inv";
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa";
        name = "A3 CSAT Arid";
        file = "Vanilla_AI_CSAT_Arid";
        climate[] = {"arid", "arctic"};
        description = $STR_A3AP_setupFactionsTab_csat;
    };

    class Vanilla_CSAT_Temperate : Vanilla_CSAT_Arid
    {
        name = "A3 CSAT Temperate";
        file = "Vanilla_AI_CSAT_Temperate";
        climate[] = {"temperate","tropical"};
    };

    class Vanilla_NATO_Arid : Vanilla_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\Flag_NATO_CO.paa";
        name = "A3 NATO Arid";
        file = "Vanilla_AI_NATO_Arid";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_nato;
    };

    class Vanilla_NATO_Temperate : Vanilla_NATO_Arid
    {
        name = "A3 NATO Temperate";
        file = "Vanilla_AI_NATO_Temperate";
        climate[] = {"temperate"};
    };

    class Vanilla_NATO_Tropical : Vanilla_NATO_Arid
    {
        name = "A3 NATO Tropical";
        file = "Vanilla_AI_NATO_Tropical";
        climate[] = {"tropical"};
    };


    class Vanilla_AAF : Vanilla_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_aaf_co.paa";
        name = "A3 AAF";
        file = "Vanilla_AI_AAF";
        maps[] = {"altis", "malden"};
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_aaf;
    };

    class Vanilla_FIA : Vanilla_Base
    {
        side = "Reb";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        name = "A3 FIA";
        file = "Vanilla_Reb_FIA";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_fia;
    };

    class Vanilla_SDK : Vanilla_Base
    {
        side = "Reb";
        flagTexture = "\A3\Data_F_Exp\Flags\flag_SYND_CO.paa";
        name = "A3 SDK";
        file = "Vanilla_Reb_SDK";
        climate[] = {"tropical"};
        description = $STR_A3AP_setupFactionsTab_sdk;
    };

    class Vanilla_LL : Vanilla_Base
    {
        side = "Reb";
        flagTexture = "\A3\Data_F\Flags\Flag_green_CO.paa";
        name = "A3 LL";
        file = "Vanilla_Reb_LL";
        climate[] = {"temperate"};
        description = $STR_A3AP_setupFactionsTab_ll;
    };

    class Vanilla_Exegermenos : Vanilla_Base
    {
        side = "Riv";
        flagTexture = "\A3\Data_F\Flags\Flag_red_CO.paa";
        name = "A3 Exegerménos";
        file = "Vanilla_Riv_Exegermenos";
        climate[] = {"arid", "temperate"};
        description = $STR_A3AP_setupFactionsTab_exegermenos;
    };

    class Vanilla_LE : Vanilla_Base
    {
        side = "Riv";
        flagTexture = "\A3\Data_F_Exp\Flags\flag_SYND_CO.paa";
        name = "A3 L'Ensemble";
        file = "Vanilla_Riv_LE";
        climate[] = {"tropical"};
        description = $STR_A3AP_setupFactionsTab_le;
    };

    class Vanilla_Civ : Vanilla_Base
    {
        side = "Civ";
        flagTexture = "\A3\Data_F\Flags\Flag_Altis_CO.paa";
        name = "Vanilla";
        file = "Vanilla_Civ";
        description = $STR_A3AP_setupFactionsTab_vanilla_civ;
    };

    // ************************************** Aegis *******************************************************

    class Aegis_Base : Base
    {
        requiredAddons[] = {"Weapons_1_F_lxWS","A3_Aegis_Armor_F_Aegis_APC_Tracked_02", "A3_Atlas_Armor_F_Atlas_APC_Tracked_02", "A3_Opf_Armor_F_Opf_APC_Tracked_02"};
        logo = "A3_Aegis\data_f_aegis\logos\arma3_aegis_logo_ca.paa";
        basepath = QPATHTOFOLDER(Templates\Templates\Aegis); //the path to the template folder
        priority = 20;
        equipFlags[] = {"vanilla"};
    };

    class Aegis_AUKUS_Arid : Aegis_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\flag_uk_CO.paa";
        name = "Aegis AUKUS Arid";
        file = "Aegis_AI_AUKUS_Arid";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_aegis_aukus;
    };
    class Aegis_AUKUS_Temperate : Aegis_AUKUS_Arid
    {
        name = "Aegis AUKUS Temperate";
        file = "Aegis_AI_AUKUS_Temperate";
        climate[] = {"temperate"};
    };
    class Aegis_AUKUS_Tropical : Aegis_AUKUS_Arid
    {
        name = "Aegis AUKUS Tropical";
        file = "Aegis_AI_AUKUS_Tropical";
        climate[] = {"tropical"};
    };

    class Aegis_AFRF_Arid : Aegis_Base
    {
        side = "Inv";
        flagTexture = "\A3_Aegis\Data_F_Aegis\Flags\flag_RUS_CO.paa";
        name = "Aegis AFRF Arid";
        file = "Aegis_AI_AFRF_Arid";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_aegis_afrf;
    };

    class Aegis_AFRF_Temperate : Aegis_Base
    {
        side = "Inv";
        flagTexture = "\A3_Aegis\Data_F_Aegis\Flags\flag_RUS_CO.paa";
        name = "Aegis AFRF Temperate";
        file = "Aegis_AI_AFRF_Temperate";
        climate[] = {"temperate"};
        description = $STR_A3AP_setupFactionsTab_aegis_afrf;
    };

    class Aegis_AAF : Aegis_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_aaf_co.paa";
        name = "Aegis AAF";
        file = "Aegis_AI_AAF";
        maps[] = {"altis", "malden"};
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_aaf;
    };

    class Aegis_CSAT_Arid : Aegis_Base
    {
        side = "Inv";
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa";
        name = "Aegis CSAT Arid";
        file = "Aegis_AI_CSAT_Arid";
        climate[] = {"arid", "arctic"};
        description = $STR_A3AP_setupFactionsTab_csat;
    };
    class Aegis_CSAT_Temperate : Aegis_CSAT_Arid
    {
        name = "Aegis CSAT Temperate";
        file = "Aegis_AI_CSAT_Temperate";
        climate[] = {"temperate"};
    };

    class Aegis_NATO_Arid : Aegis_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\Flag_NATO_CO.paa";
        name = "Aegis NATO Arid";
        file = "Aegis_AI_NATO_Arid";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_nato;
    };
    class Aegis_NATO_Temperate : Aegis_NATO_Arid
    {
        name = "Aegis NATO Temperate";
        file = "Aegis_AI_NATO_Temperate";
        climate[] = {"temperate"};
    };
    class Aegis_NATO_Tropical : Aegis_NATO_Arid
    {
        name = "Aegis NATO Tropical";
        file = "Aegis_AI_NATO_Tropical";
        climate[] = {"tropical"};
    };

    class Aegis_FIA : Aegis_Base
    {
        side = "Reb";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        name = "Aegis FIA";
        file = "Aegis_Reb_FIA";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_fia;
    };

    class Aegis_SDK : Aegis_Base
    {
        side = "Reb";
        flagTexture = "\A3\Data_F_Exp\Flags\flag_SYND_CO.paa";
        name = "Aegis SDK";
        file = "Aegis_Reb_SDK";
        climate[] = {"tropical"};
        description = $STR_A3AP_setupFactionsTab_sdk;
    };

    class Aegis_LM : Aegis_Base
    {
        side = "Reb";
        flagTexture = "\A3_Aegis\Data_F_Aegis\Flags\flag_Looters_CO.paa";
        name = "Aegis LM";
        file = "Aegis_Reb_LM";
        climate[] = {"temperate"};
        description = $STR_A3AP_setupFactionsTab_lm;
    };

    class Aegis_CHDKZ : Aegis_Base
    {
        side = "Riv";
        flagTexture = "A3_Opf\Data_F_Opf\Flags\flag_ChDKZ_CO.paa";
        name = "Aegis CHDKZ";
        file = "Aegis_Riv_CHDKZ";
        description = $STR_A3AP_setupFactionsTab_chdkz;
    };

    class Aegis_Ion : Aegis_Base
    {
        side = "Riv";
        flagTexture = "A3_Aegis\Data_F_Aegis\Flags\flag_ION_CO.paa";
        name = "Aegis Ion PMC";
        file = "Aegis_Riv_Ion";
        description = $STR_A3AP_setupFactionsTab_ion;
    };

    class Aegis_Civ : Aegis_Base
    {
        side = "Civ";
        flagTexture = "\A3\Data_F\Flags\Flag_Altis_CO.paa";
        name = "Aegis";
        file = "Aegis_Civ";
        description = $STR_A3AP_setupFactionsTab_vanilla_civ;
    };

    // ************************************** RHS Factions *******************************************************

    class RHS_Base : Base
    {
        requiredAddons[] = {"rhsgref_main"};
        basepath = QPATHTOFOLDER(Templates\Templates\RHS);
        logo = "\rhsusf\addons\rhsusf_main\data\rhs_logo_ca.paa";
        priority = 30;
        equipFlags[] = {"specialRHS"};
    };

    class RHS_AFRF_Arid : RHS_Base
    {
        side = "Inv";
        flagTexture = "rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
        logo = "\rhsafrf\addons\rhs_main\data\rhs_logo_ca.paa";
        name = "RHS AFRF Arid";
        file = "RHS_AI_AFRF_Arid";
        climate[] = {"arid"};
        shortName = "AFRF";
        description = $STR_A3A_templates_lore_AFRF;
    };
    class RHS_AFRF_Temperate : RHS_AFRF_Arid
    {
        name = "RHS AFRF Temperate";
        file = "RHS_AI_AFRF_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class RHS_VDV_Temperate : RHS_Base
    {
        side = "Inv"; 
        flagTexture = "rhsafrf\addons\rhs_main\data\Flag_vdv_CO.paa"; 
        name = "RHS VDV Temperate"; 
        file = "RHS_AI_VDV_Temperate"; 
        climate[] = {"temperate","tropical","arctic"};
        logo = "\rhsafrf\addons\rhs_main\data\rhs_logo_ca.paa";
        shortName = "VDV";
        description = $STR_A3A_templates_lore_VDV;
    };

    class RHS_VDV_Arid : RHS_VDV_Temperate
    {
        name = "RHS VDV Arid"; 
        file = "RHS_AI_VDV_Arid"; 
        climate[] = {"arid"};
    };

    class RHS_HIDF : RHS_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F_Exp\Flags\flag_GEN_CO.paa";
        name = "RHS HIDF";
        file = "RHS_AI_HIDF";
        logo = "\rhsgref\addons\rhsgref_main\data\rhs_logo_ca.paa";
        shortName = "HIDF";
        description = $STR_A3A_templates_lore_3CB_AI_HIDF;
    };


    class RHS_SAF_Base
    {
        requiredAddons[] = {"rhssaf_main"};
        basepath = QPATHTOFOLDER(Templates\Templates\RHS);
        logo = "\rhssaf\addons\rhssaf_main\data\rhs_logo_ca.paa";
        priority = 30;
    };
    class RHS_SAF : RHS_SAF_Base
    {
        side = "Inv";
        flagTexture = "rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
        name = "RHS SAF";
        file = "RHS_AI_SAF";
        shortName = "SAF";
        description = $STR_A3A_templates_lore_RHS_AI_SAF;
    };

    class RHS_USAF_Army_Arid : RHS_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "RHS US Army Arid";
        file = "RHS_AI_USAF_Army_Arid";
        climate[] = {"arid"};
        shortName = "US Army";
        description = $STR_A3A_templates_lore_USAF;
    };
    class RHS_USAF_Army_Temperate : RHS_USAF_Army_Arid
    {
        name = "RHS US Army Temperate";
        file = "RHS_AI_USAF_Army_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };
    class RHS_USAF_Marines_Arid : RHS_USAF_Army_Arid
    {
        name = "RHS USMC Arid";
        file = "RHS_AI_USAF_Marines_Arid";
        shortName = "US Marines";
        description = $STR_A3A_templates_lore_USMC;
    };
    class RHS_USAF_Marines_Temperate : RHS_USAF_Army_Temperate
    {
        name = "RHS USMC Temperate";
        file = "RHS_AI_USAF_Marines_Temperate";
    };


    // =================================== OLD RHS ==================================================================
    class RHS_NAPA : RHS_Base
    {
        side = "Reb";
        flagTexture = "\rhsgref\addons\rhsgref_main\data\Flags\flag_NAPA_co.paa";
        logo = "rhsgref\addons\rhsgref_main\data\rhs_logo_ca.paa";
        name = "RHS NAPA";
        file = "RHS_Reb_NAPA";
        description = $STR_A3AP_setupFactionsTab_napa_3cbf;
    };

    class RHS_CDF : RHS_Base
    {
        side = "Occ";
        flagTexture = "\rhsgref\addons\rhsgref_main\data\Flags\flag_cdf_co.paa";
        name = "RHS CDF";
        file = "RHS_AI_CDF";
        maps[] = {"cup_chernarus_A3", "brf_sumava"};
        climate[] = {"temperate"};
        description = $STR_A3AP_setupFactionsTab_cdf;
    };

    class RHS_AFRF : RHS_Base
    {
        side = "Inv";
        flagTexture = "rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
        logo = "rhsafrf\addons\rhs_main\data\rhs_logo_ca.paa";
        name = "RHS AFRF";
        file = "RHS_AI_AFRF";
        description = $STR_A3AP_setupFactionsTab_aegis_afrf;
    };

    class RHS_US_Army_Arid : RHS_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "RHS US Army Arid";
        file = "RHS_AI_US_Army_Arid";
        description = $STR_A3AP_setupFactionsTab_usaf;
        climate[] = {"arid"};
    };
    class RHS_US_Army_Temperate : RHS_US_Army_Arid
    {
        name = "RHS US Army Temperate";
        file = "RHS_AI_US_Army_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class RHS_USMC_Arid : RHS_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "RHS USMC Arid";
        file = "RHS_AI_USMC_Arid";
        description = $STR_A3AP_setupFactionsTab_usmc;
        climate[] = {"arid"};
    };
    class RHS_USMC_Temperate : RHS_USMC_Arid
    {
        name = "RHS USMC Temperate";
        file = "RHS_AI_USMC_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class RHS_CHDKZ : RHS_Base
    {
        side = "Riv";
        flagTexture = "\rhsgref\addons\rhsgref_main\data\flag_chdkz_co.paa";
        logo = "rhsgref\addons\rhsgref_main\data\rhs_logo_ca.paa";
        name = "RHS CHDKZ";
        file = "RHS_Riv_CHDKZ";
        description = $STR_A3AP_setupFactionsTab_chdkz;
    };

    class RHS_Civ : RHS_Base
    {
        side = "Civ";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        logo = "rhsgref\addons\rhsgref_main\data\rhs_logo_ca.paa";
        name = "RHS";
        file = "RHS_Civ";
    };

    // ************************************** CUP *******************************************************

    class CUP_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core"};        // units, weapons, vehicles
        //requiredAddons[] = {"CUP_AirVehicles_Core"};        // vehicles requires units & weapons
        basepath = QPATHTOFOLDER(Templates\Templates\CUP);
        logo = "\CUP\Creatures\People\CUP_Creatures_People_Core\ui\logo_cup_ca_small.paa";
        priority = 60;
    };

    class CUP_ACR_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "cup\baseconfigs\cup_baseconfigs\data\flags\flag_cz_co.paa";
        name = "CUP ACR Arid";
        file = "CUP_AI_ACR_Arid";
        climate[] = {"arid"};
        shortName = "ACR";
        description = $STR_A3A_templates_lore_ACR;
    };
    class CUP_ACR_Temperate : CUP_ACR_Arid
    {
        name = "CUP ACR Temperate";
        file = "CUP_AI_ACR_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class CUP_AFRF_Arid : CUP_Base
    {
        side = "Inv";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_rus_co.paa";
        name = "CUP AFRF Arid";
        file = "CUP_AI_AFRF_Arid";
        climate[] = {"arid"};
        shortName = "AFRF";
        description = $STR_A3A_templates_lore_AFRF;
    };
    class CUP_AFRF_Temperate : CUP_AFRF_Arid
    {
        name = "CUP AFRF Temperate";
        file = "CUP_AI_AFRF_Temperate";
        climate[] = {"temperate","tropical"};
    };
    class CUP_AFRF_Arctic : CUP_AFRF_Arid
    {
        name = "CUP AFRF Arctic";
        file = "CUP_AI_AFRF_Arctic";
        climate[] = {"arctic"};
    };
    class CUP_AFRF_Desert : CUP_AFRF_Arid
    {
        name = "CUP AFRF Desert";
        file = "CUP_AI_AFRF_Desert";
        climate[] = {"arid"};
    };

    class CUP_BAF_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\flag_uk_co.paa";
        name = "CUP BAF Arid";
        file = "CUP_AI_BAF_Arid";
        climate[] = {"arid"};
        shortName = "BAF";
        description = $STR_A3A_templates_lore_BAF;
    };
    class CUP_BAF_Temperate : CUP_BAF_Arid
    {
        name = "CUP BAF Temperate";
        file = "CUP_AI_BAF_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class CUP_CDF_Arctic : CUP_Base
    {
        side = "Occ";
        flagTexture = "cup\baseconfigs\cup_baseconfigs\data\flags\flag_cdf_co.paa";
        name = "CUP CDF Arctic";
        file = "CUP_AI_CDF_Arctic";
        climate[] = {"arctic"};
        maps[] = {"chernarus_winter"};
        shortName = "CDF";
        description = $STR_A3A_templates_lore_CDF;
    };
    class CUP_CDF_Temperate : CUP_CDF_Arctic
    {
        name = "CUP CDF Temperate";
        file = "CUP_AI_CDF_Temperate";
        climate[] = {"temperate"};
        maps[] = {"chernarus_summer","chernarus"};
    };

    class CUP_RACS_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_racs_co.paa";
        name = "CUP RACS Arid";
        file = "CUP_AI_RACS_Arid";
        climate[] = {"arid"};
        maps[] = {"sara"};
        shortName = "RACS";
        description = $STR_A3A_templates_lore_CUP_AI_RACS;
    };
    class CUP_RACS_Tropical : CUP_RACS_Arid
    {
        name = "CUP RACS Tropical";
        file = "CUP_AI_RACS_Tropical";
        climate[] = {"tropical"};
        maps[] = {"tanoa"};
    };

    class CUP_SLA : CUP_Base
    {
        side = "Inv";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_sla_co.paa";
        name = "CUP SLA";
        file = "CUP_AI_SLA_Temperate";          // Sahrani is a bit weird
        climate[] = {"arid","temperate"};
        maps[] = {"sara"};
        shortName = "SLA";
        description = $STR_A3A_templates_lore_CUP_AI_SLA;
    };

    class CUP_TKA : CUP_Base
    {
        side = "Occ";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_tka_co.paa";
        name = "CUP TKA";
        file = "CUP_AI_TKA_Arid";
        climate[] = {"arid"};
        maps[] = {"takistan","kunduz"};
        shortName = "TKA";
        description = $STR_A3A_templates_lore_CUP_AI_TKA;
    };

    class CUP_USAF_Arid : CUP_Base
    {
        side = "Inv";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "CUP US Army Arid";
        file = "CUP_AI_US_Army_Arid";
        climate[] = {"arid"};
        shortName = "US Army";
        description = $STR_A3A_templates_lore_USAF;
    };
    class CUP_USAF_Temperate : CUP_USAF_Arid
    {
        name = "CUP US Army Temperate";
        file = "CUP_AI_US_Army_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class CUP_USMC_Arid : CUP_Base
    {
        side = "Inv";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "CUP USMC Arid";
        file = "CUP_AI_US_Marine_Arid";
        climate[] = {"arid"};
        shortName = "US Marines";
        description = $STR_A3A_templates_lore_USMC;
    };
    class CUP_USMC_Temperate : CUP_USMC_Arid
    {
        name = "CUP USMC Temperate";
        file = "CUP_AI_US_Marine_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class CUP_ION_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\flag_ion_CO.paa";
        name = "CUP ION Arid";
        file = "CUP_AI_ION_Arid";
        climate[] = {"arid","temperate","tropical"};
        shortName = "ION";
        description = $STR_A3A_templates_lore_ION;
    };
    class CUP_ION_Temperate : CUP_ION_Arid
    {
        name = "CUP ION Arctic";
        file = "CUP_AI_ION_Arctic";
        climate[] = {"arctic"};
    };

    class CUP_BW_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "cup\baseconfigs\cup_baseconfigs\data\flags\flag_ger_co.paa";
        name = "CUP BW Arid";
        file = "CUP_AI_BW_Arid";
        climate[] = {"arid"};
        shortName = "BW";
        description = $STR_A3A_templates_lore_CUP_AI_BW;
    };
        class CUP_BW_Temperate : CUP_BW_Arid
    {
        name = "CUP BW Temperate";
        file = "CUP_AI_BW_Temperate";
        climate[] = {"arctic","temperate","tropical"};
    };
        class CUP_HIL : CUP_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f_exp\flags\flag_tanoa_co.paa";
        name = "CUP HIL";
        file = "CUP_AI_HIL";
        climate[] = {"temperate","tropical"};
        shortName = "HIL";
        description = $STR_A3A_templates_lore_CUP_AI_HIL;
    };
    class CUP_TKM : CUP_Base
    {
        side = "Reb";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_tka_co.paa";
        name = "CUP TKM";
        file = "CUP_Reb_TKM";
        shortName = "TKM";
        description = $STR_A3A_templates_lore_TKM;
    };
    class CUP_Reb : CUP_Base
    {   // why is this just Reb?
        side = "Reb"; 
        flagTexture = "cup\baseconfigs\cup_baseconfigs\data\flags\flag_napa_co.paa";
        name = "CUP NAPA";
        file = "CUP_Reb_NAPA";
        shortName = "NAPA";
        description = $STR_A3A_templates_lore_NAPA;
    };
    class CUP_TKC : CUP_Base
    {
        side = "Civ";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_tka_co.paa";
        name = "CUP TKC";
        file = "CUP_Civ_TKC";
        shortName = "Civilian";
        description = $STR_A3A_templates_lore_TKC;
    };
    class CUP_Civ : CUP_Base
    {
        side = "Civ";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_chernarus_co.paa";
        name = "CUP CH";
        file = "CUP_Civ_CHC";
        shortName = "Civilian";
        description = $STR_A3A_templates_lore_CHC;
    };

    // ************************************** UA Factions *******************************************************

    class UA_Base : Base
    {
        requiredAddons[] = {"UA_2020_CUP_Vehicles"};
        logo = QPATHTOFOLDER(Pictures\antistasi_plus_logo_small.paa);
        basepath = QPATHTOFOLDER(Templates\Templates\UA);
        priority = 40;
        equipFlags[] = {"vanilla"};
    };

    class UA_UA : UA_Base
    {
        side = "Reb";
        flagTexture = "ua_factions_rhs\data\flags\flag_ukraine_01.paa";
        name = "Ukraine";
        file = "UA_Reb_UA";
        description = $STR_A3AP_setupFactionsTab_ua;
    };
    // ************************************** 3CB Factions *******************************************************

    class 3CBF_Base : Base
    {
        requiredAddons[] = {"UK3CB_Factions_Vehicles_SUV"};
        logo = "UK3CB_Factions\addons\UK3CB_Factions_Common\editor\logo_3cb_ca.paa";
        basepath = QPATHTOFOLDER(Templates\Templates\3CBF);
        priority = 40;
        equipFlags[] = {"specialRHS"};
    };

    class 3CBF_FIA : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        name = "3CBF FIA";
        file = "3CBF_Reb_FIA";
        description = $STR_A3AP_setupFactionsTab_fia_3cbf;
    };

    class 3CBF_NAPA : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_NAP\Flag\nap_flag_co.paa";
        name = "3CBF NAPA";
        file = "3CBF_Reb_NAPA";
        description = $STR_A3AP_setupFactionsTab_napa_3cbf;
    };

    class 3CBF_CCM : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_CCM\Flag\ccm_o_flag_co.paa";
        name = "3CBF CCM";
        file = "3CBF_Reb_CCM";
        description = $STR_A3AP_setupFactionsTab_ccm_3cbf;
    };

    class 3CBF_TKM : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_tkm\flag\tkm_b_flag_co.paa";
        name = "3CBF TKM";
        file = "3CBF_Reb_TKM";
        maps[] = {"takistan", "SefrouRamal", "isladuala3"};
        description = $STR_A3AP_setupFactionsTab_tkm_3cbf;
    };

    class 3CBF_CHDKZ : 3CBF_Base
    {
        side = "Riv";
        flagTexture = "\rhsgref\addons\rhsgref_main\data\flag_chdkz_co.paa";
        name = "3CBF CHDKZ";
        file = "3CBF_Riv_CHDKZ";
        description = $STR_A3AP_setupFactionsTab_chdkz;
    };

    class 3CBF_CHDKZ_CW : 3CBF_CHDKZ
    {
        name = "3CBF CHDKZ (Cold War)";
        file = "3CBF_Riv_CHDKZ_CW";
        priority = 39;
    };

    class 3CBF_TI : 3CBF_Base
    {
        side = "Riv";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_TKC\Flag\tkc_flag_co.paa";
        name = "3CBF TI";
        file = "3CBF_Riv_TI";
        maps[] = {"takistan", "SefrouRamal", "isladuala3"};
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_ti;
    };

    class 3CBF_CHC : 3CBF_Base
    {
        side = "Civ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_CHC\Flag\CHC_flag_co.paa";
        name = "3CBF Eastern European";
        file = "3CBF_Civ_CHC";
        description = $STR_A3AP_setupFactionsTab_easterneuropean;
        climate[] = {"temperate"};
    };

    class 3CBF_A : 3CBF_Base
    {
        side = "Civ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_ADC\Flag\ADC_flag_co.paa";
        name = "3CBF Arid";
        file = "3CBF_Civ_A";
        description = $STR_A3AP_setupFactionsTab_a;
        climate[] = {"arid"};
    };

    class 3CBF_TKC: 3CBF_Base
    {
        side = "Civ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_TKA\Flag\tka_flag_co.paa";
        name = "3CBF Takistan";
        file = "3CBF_Civ_TKC";
        climate[] = {"arid"};
        maps[] = {"takistan", "SefrouRamal", "isladuala3"};
        description = $STR_A3AP_setupFactionsTab_takistan;
    };

    class 3CBF_LDF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f_enoch\flags\flag_enoch_co.paa";
        name = "3CBF LDF";
        file = "3CBF_AI_LDF";
        description = $STR_A3AP_setupFactionsTab_ldf;
        climate[] = {"temperate"};
        maps[] = {"Enoch"};
    };

    class 3CBF_CDF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_CHC\Flag\CHC_flag_co.paa";
        name = "3CBF CDF";
        file = "3CBF_AI_CDF";
        description = $STR_A3AP_setupFactionsTab_cdf;
        climate[] = {"temperate"};
        maps[] = {"cup_chernarus_A3", "brf_sumava"};
    };

    class 3CBF_HIDF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f_exp\flags\flag_tanoa_co.paa";
        name = "3CBF HIDF";
        file = "3CBF_AI_HIDF";
        description = $STR_A3AP_setupFactionsTab_hil;
        maps[] = {"tanoa"};
        climate[] = {"tropical"};
    };

    class 3CBF_AAF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_aaf_co.paa";
        name = "3CBF AAF";
        file = "3CBF_AI_AAF";
        maps[] = {"altis", "malden"};
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_aaf_3cbf;
    };

    class 3CBF_TKA : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_TKA\Flag\tka_flag_co.paa";
        name = "3CBF TKA";
        file = "3CBF_AI_TKA";
        maps[] = {"takistan", "SefrouRamal", "isladuala3"};
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_tka;
    };

    class 3CBF_ARD : 3CBF_Base
    {
        side = "Inv";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_ARD\Flag\ARD_flag_co.paa";
        name = "3CBF ARD";
        file = "3CBF_AI_ARD";
        maps[] = {"takistan", "SefrouRamal", "isladuala3"};
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_ard;
    };

    class 3CBF_AFRF : 3CBF_Base
    {
        side = "Inv";
        flagTexture = "rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
        name = "3CBF AFRF";
        file = "3CBF_AI_AFRF";
        climate[] = {"arid","temperate","tropical","arctic"};
        description = $STR_A3AP_setupFactionsTab_aegis_afrf;
    };
    
    class 3CBF_AFRFS : 3CBF_Base
    {
        side = "Inv";
        flagTexture = "rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
        name = "3CBF AFRFS";
        file = "3CBF_AI_AFRFS";
        maps[] = {"takistan", "SefrouRamal", "isladuala3"};
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_aegis_afrf;
    };

    class 3CBF_US_Army_Arid : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "3CBF US Army Arid";
        file = "3CBF_AI_US_Army_Arid";
        description = $STR_A3AP_setupFactionsTab_usaf;
        climate[] = {"arid"};
    };
    class 3CBF_US_Army_Temperate : 3CBF_US_Army_Arid
    {
        name = "3CBF US Army Temperate";
        file = "3CBF_AI_US_Army_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class 3CBF_USMC_Arid : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_CW_US\Flag\cw_US_Marines_flag_co.paa";
        name = "3CBF USMC Arid";
        file = "3CBF_AI_USMC_Arid";
        description = $STR_A3AP_setupFactionsTab_usmc;
        climate[] = {"arid"};
    };
    class 3CBF_USMC_Temperate : 3CBF_USMC_Arid
    {
        name = "3CBF USMC Temperate";
        file = "3CBF_AI_USMC_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class 3CBF_SOV_CW : 3CBF_Base
    {
        priority = 39;
        side = "Inv";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_CW_SOV\Flag\cw_sov_flag_co.paa";
        name = "3CBF Red Army (Cold War)";
        file = "3CBF_AI_SOV_CW";
        description = $STR_A3AP_setupFactionsTab_ra;
        equipFlags[] = {"specialRHS", "coldWar"};
    };

    class 3CBF_US_Army_CW : 3CBF_Base
    {
        priority = 39;
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "3CBF US Army (Cold War)";
        file = "3CBF_AI_US_Army_CW";
        description = $STR_A3AP_setupFactionsTab_us_cw;
        equipFlags[] = {"specialRHS", "coldWar"};
    };

    //************* VN ********************************************************

    class VN_Base : Base
    {
        requiredAddons[] = {"vn_weapons"};
        logo = "\vn\data_f_vietnam\logos\vn_sml_ca.paa";
        basepath = QPATHTOFOLDER(Templates\Templates\VN);
        priority = 50;
        equipFlags[] = {"lowTech","replaceCompass","replaceWatch"};
        forceDLC[] = {"vn"};
    };

    class VN_MACV : VN_Base
    {
        priority = 51;
        side = "Occ";
        flagTexture = "\vn\objects_f_vietnam\flags\data\vn_flag_01_usa_co.paa";
        name = "VN MACV";
        file = "VN_AI_MACV";
        description = $STR_A3AP_setupFactionsTab_macv;
    };

    class VN_ARVN : VN_Base
    {
        side = "Inv";
        flagTexture = "\vn\objects_f_vietnam\flags\data\vn_flag_01_arvn_co.paa";
        name = "VN ARVN";
        file = "VN_AI_ARVN";
        description = $STR_A3AP_setupFactionsTab_arvn;
    };

    class VN_PAVN : VN_Base
    {
        side = "Inv";
        flagTexture = "vn\objects_f_vietnam\flags\data\vn_flag_01_pavn_co.paa";
        name = "VN PAVN";
        file = "VN_AI_PAVN";
        description = $STR_A3AP_setupFactionsTab_pavn;
    };

    class VN_VM : VN_Base
    {
        priority = 51;
        side = "Reb";
        flagTexture = "\vn\objects_f_vietnam\flags\data\vn_flag_01_lao_dmg_ca.paa";
        name = "VN VM";
        file = "VN_Reb_VM";
        description = $STR_A3AP_setupFactionsTab_vm;
    };

    class VN_VC : VN_Base
    {
        side = "Reb";
        flagTexture = "\vn\objects_f_vietnam\flags\data\vn_flag_01_vc_co.paa";
        name = "VN VC";
        file = "VN_Reb_VC";
        description = $STR_A3AP_setupFactionsTab_vc;
    };

    class VN_Riv_PL : VN_Base
    {
        side = "Riv";
        flagTexture = "\vn\objects_f_vietnam\flags\data\vn_flag_01_pl_co.paa";
        name = "VN PL";
        file = "VN_Riv_PL";
        description = $STR_A3AP_setupFactionsTab_pl;
    };

    class VN_Civ : VN_Base
    {
        side = "Civ";
        flagTexture = "\vn\objects_f_vietnam\flags\vn_flag_01_lao_co.paa";
        name = "Vietnam";
        file = "VN_Civ";
        description = $STR_A3AP_setupFactionsTab_vietcivs;
    };
};
