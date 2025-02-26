///////////////////////////
//   Rebel Information   //
///////////////////////////

["name", "UA"] call _fnc_saveToTemplate;

["flag", "Flag_Ukraine_battle"] call _fnc_saveToTemplate;
["flagTexture", "ua_factions_rhs\data\flags\flag_ukraine_03.paa"] call _fnc_saveToTemplate;
["flagMarkerType", "FlagUkraine"] call _fnc_saveToTemplate;

["vehiclesBasic", ["UK3CB_NAP_I_YAVA", "b_afougf_quadbike_01"]] call _fnc_saveToTemplate;
["vehiclesLightUnarmed", ["b_afougf_yt_m1152_base"]] call _fnc_saveToTemplate;
["vehiclesLightArmed", ["b_afougf_kozak5_turret_armored_F", "CUP_B_nM1151_ogpk_mk19_AFU", "CUP_B_nM1151_ogpk_m2_DF_AFU", "CUP_B_nM1151_ogpk_m2_AFU"]] call _fnc_saveToTemplate;
["vehiclesTruck", ["UA_2020_CUP_KRAZ_6322_BORT"]] call _fnc_saveToTemplate;
["vehiclesAT", ["UA_2020_cup_Hilux_metis_01"]] call _fnc_saveToTemplate;
["vehiclesAA", ["UA_2020_cup_Hilux_zu23_01"]] call _fnc_saveToTemplate;

["vehiclesBoat", ["b_uapolice_boat_01"]] call _fnc_saveToTemplate;

["vehiclesPlane", ["b_afougf_an2", "b_uapolice_plane01_01"]] call _fnc_saveToTemplate;

["vehiclesCivCar", ["b_afougf_kozak5_unarmed_F", "CUP_C_Golf4_whiteblood_Civ"]] call _fnc_saveToTemplate;
["vehiclesCivTruck", ["b_afougf_old_Open_Flat"]] call _fnc_saveToTemplate;
["vehiclesCivHeli", ["b_afougf_Mi8MTV3_Cargo"]] call _fnc_saveToTemplate;
["vehiclesCivBoat", ["C_Scooter_Transport_01_F,", "C_Rubberboat"]] call _fnc_saveToTemplate;

["staticMGs", ["UA_2020_CUP_DSHKM_01"]] call _fnc_saveToTemplate;
["staticAT", ["UA_2020_CUP_Metis_01"]] call _fnc_saveToTemplate;
["staticAA", ["UA_2020_CUP_ZU23_01"]] call _fnc_saveToTemplate;
["staticAA", ["rhsgref_ins_g_Igla_AA_pod"]] call _fnc_saveToTemplate;
["staticMortars", ["UA_2020_CUP_2b14_82mm_01"]] call _fnc_saveToTemplate;
["staticMortarMagHE", "rhs_mag_3vo18_10"] call _fnc_saveToTemplate;
["staticMortarMagSmoke", "rhs_mag_d832du_10"] call _fnc_saveToTemplate;

["minesAT", [
	"ATMine_Range_Mag",
	"rhs_mine_tm62m_mag",
	"rhs_mine_M19_mag",
	"rhs_mag_mine_ptm1",
	"SLAMDirectionalMine_Wire_Mag",
	"rhssaf_mine_tma4_mag",
	"rhs_mine_TM43_mag"
]] call _fnc_saveToTemplate;
["minesAPERS", [
	"rhs_mine_M7A2_mag",
	"APERSMine_Range_Mag",
	"rhs_mine_pmn2_mag",
	"APERSBoundingMine_Range_Mag",
	"rhs_mag_mine_pfm1",
	"rhsusf_mine_m14_mag",
	"ClaymoreDirectionalMine_Remote_Mag",
	"APERSTripMine_Wire_Mag",
	"rhssaf_tm100_mag",
	"rhssaf_tm200_mag",
	"rhssaf_tm500_mag",
	"rhssaf_mine_pma3_mag",
	"rhssaf_mine_mrud_a_mag",
	"rhssaf_mine_mrud_b_mag",
	"rhssaf_mine_mrud_c_mag",
	"rhssaf_mine_mrud_d_mag",
	"rhs_mine_smine35_press_mag",
	"rhs_mine_smine44_press_mag",
	"rhs_mine_stockmine43_2m_mag",
	"rhs_mine_stockmine43_4m_mag",
	"rhs_mine_M3_tripwire_mag",
	"rhs_mine_Mk2_tripwire_mag",
	"rhs_mine_mk2_pressure_mag",
	"rhs_mine_m3_pressure_mag",
	"rhs_mine_glasmine43_hz_mag",
	"rhs_mine_glasmine43_bz_mag",
	"rhs_mine_m2a3b_press_mag",
	"rhs_mine_m2a3b_trip_mag",
	"rhs_mine_a200_bz_mag",
	"rhs_mine_a200_dz35_mag",
	"rhs_mine_m2a3b_press_mag",
	"rhs_mine_m2a3b_trip_mag",
	"rhs_mine_smine35_trip_mag",
	"rhs_mine_smine44_trip_mag"
]] call _fnc_saveToTemplate;

["breachingExplosivesAPC", [["rhs_ec75_mag", 2], ["rhs_ec75_sand_mag", 2], ["rhs_ec200_mag", 1], ["rhs_ec200_sand_mag", 1], ["rhsusf_m112_mag", 1], ["DemoCharge_Remote_Mag", 1]]] call _fnc_saveToTemplate;
["breachingExplosivesTank", [["rhs_ec75_mag", 4], ["rhs_ec75_sand_mag", 4], ["rhs_ec200_mag", 2], ["rhs_ec200_sand_mag", 2], ["rhs_ec400_mag", 1], ["rhs_ec400_sand_mag", 1],["DemoCharge_Remote_Mag", 2], ["rhsusf_m112_mag", 2], ["rhsusf_m112x4_mag", 1], ["rhs_charge_M2tet_x2_mag", 1], ["SatchelCharge_Remote_Mag", 1]]] call _fnc_saveToTemplate;

//////////////////////////////////////
//       Antistasi Ukraine Stuff       //
//////////////////////////////////////

["blackMarketStock", [
    ["rhsgref_nat_Igla_AA_pod", 3000, "STATICAA", {tierWar > 3}],
    ["UK3CB_LNM_I_Metis", 3000, "STATICAT", {tierWar > 3}],
    ["rhsgref_nat_AGS30_TriPod", 3000, "STATICMG", {tierWar > 3}],

    ["UA_2020_CUP_BRDM2_01", 2500, "CAR", {true}],
    ["UK3CB_I_G_BRDM2_ATGM", 3500, "CAR", {tierWar > 3}],
    ["UA_2020_cup_HMMWV_AGS_01", 2500, "CAR", {tierWar > 2}],

    ["CUP_B_Ural_Reammo_AFU", 3000, "CAR", {tierWar > 3}],
    ["CUP_B_Ural_Repair_AFU", 3000, "CAR", {tierWar > 3}],
    ["UA_2020_CUP_KRAZ_6322_PALN", 3000, "CAR", {tierWar > 3}],

    ["UK3CB_I_G_MTLB_PKT", 2000, "APC", {true}],
    ["UA_2020_CUP_BMP2_01", 3000, "APC", {true}],
    ["b_afougf_yt_btr70", 5000, "APC", {true}],
    ["UA_2020_CUP_B_BTR80_01", 5000, "APC", {true}],
    
    ["CUP_B_Leopard_1A3GRNCROSS_UA", 10000, "TANK", {true}],
    ["b_afougf_yt_t72bb", 13000, "TANK", {{sidesX getVariable [_x,sideUnknown] isEqualTo teamPlayer} count (milbases + airportsX) > 0}],
    ["CUP_B_Leopard2A6Green_UA", 20000, "TANK", {tierWar > 7 && {{sidesX getVariable [_x,sideUnknown] isEqualTo teamPlayer} count (milbases + airportsX) > 0}}],
    ["CUP_B_M1A1_AFU", 21000, "TANK", {tierWar > 7 && {{sidesX getVariable [_x,sideUnknown] isEqualTo teamPlayer} count (milbases + airportsX) > 0}}],
    
    ["CUP_B_nM1097_AVENGER_AFU", 7000, "AA", {tierWar > 3}],
    ["UA_2020_CUP_2S6_01", 7000, "AA", {{sidesX getVariable [_x,sideUnknown] isEqualTo teamPlayer} count (milbases + airportsX) > 0}],

    ["b_afougf_l39za", 35000, "PLANE", {tierWar > 7 && {{sidesX getVariable [_x,sideUnknown] isEqualTo teamPlayer} count airportsX > 0}}],
    ["b_afougf_mig29sm", 35000, "PLANE", {tierWar > 7 && {{sidesX getVariable [_x,sideUnknown] isEqualTo teamPlayer} count airportsX > 0}}],
    ["b_afougf_Su25SM", 25000, "PLANE", {tierWar > 6 && {{sidesX getVariable [_x,sideUnknown] isEqualTo teamPlayer} count airportsX > 0}}],

    ["b_afougf_Mi8MTV3_Cargo", 17500, "HELI", {tierWar > 5 &&{ {sidesX getVariable [_x,sideUnknown] isEqualTo teamPlayer} count airportsX > 0}}],
    ["b_afougf_Mi24V_AT", 17500, "HELI", {tierWar > 5 &&{ {sidesX getVariable [_x,sideUnknown] isEqualTo teamPlayer} count airportsX > 0}}],
    ["b_afougf_Mi8MTV3_FAB", 25000, "HELI", {tierWar > 5 &&{ {sidesX getVariable [_x,sideUnknown] isEqualTo teamPlayer} count airportsX > 0}}]
]] call _fnc_saveToTemplate;

["variants", [
    ["UA_2020_cup_HMMWV_AGS_01", ["Desert", 1]], ["UK3CB_I_G_BRDM2_ATGM", ["AD", 1]], ["UK3CB_KDF_I_MIG21_CAS", ["SIL", 1]], ["UK3CB_I_G_MTLB_PKT", ["ADM",1]], ["b_afougf_yt_t72bb", ["ZSUCAMO6",1]]
]] call _fnc_saveToTemplate;


#include "UA_Reb_Vehicle_Attributes.sqf"

///////////////////////////
//  Rebel Starting Gear  //
///////////////////////////

private _initialRebelEquipment = [
    "afou_weapons_fort_14_F", "AFOU_15Rnd_9x18_Mag",
    "afou_weap_m14_scoped_01", "rhsusf_20Rnd_762x51_m80_Mag", "UK3CB_M14_20rnd_762x51_GT", "UK3CB_M14_20rnd_762x51_RT", "UK3CB_M14_20rnd_762x51_YT", "UK3CB_M14_20rnd_762x51_WT",
    "rhs_grenade_khattabka_vog17_mag", "rhs_grenade_khattabka_vog25_mag", "rhsgref_mag_rkg3em", "rhs_mag_rdg2_black", "rhs_mag_rdg2_white",
    ["IEDUrbanSmall_Remote_Mag", 10], ["IEDLandSmall_Remote_Mag", 10], ["IEDUrbanBig_Remote_Mag", 3], ["IEDLandBig_Remote_Mag", 3],
    "Binocular",
    "bp_civilian_tba",
    "rhs_weap_rsp30_white","rhs_mag_rsp30_white",
    "rhs_weap_rsp30_green","rhs_mag_rsp30_green",
    "rhs_weap_rsp30_red", "rhs_mag_rsp30_red",
    "rhs_mag_nspd", "rhs_mag_nspn_yellow", "rhs_mag_nspn_green", "rhs_mag_nspn_red",
    "UA_vest_2","UA_vest_1","vest_afougf_gl_mm14", "vest_afou_spcs_multi01",
    "bp_afougf_eagle_mm14", "bp_afougf_eagle_mm14_eng", "bp_afougf_eagle_medic"
];

if (A3A_hasTFAR) then {_initialRebelEquipment append ["tf_microdagr","tf_anprc154"]};
if (A3A_hasTFAR && startWithLongRangeRadio) then {_initialRebelEquipment append ["tf_anprc155","tf_anprc155_coyote"]};
if (A3A_hasTFARBeta) then {_initialRebelEquipment append ["TFAR_microdagr","TFAR_anprc154"]};
if (A3A_hasTFARBeta && startWithLongRangeRadio) then {_initialRebelEquipment append ["TFAR_anprc155","TFAR_anprc155_coyote"]};
_initialRebelEquipment append ["Chemlight_blue","Chemlight_green","Chemlight_red","Chemlight_yellow"];
["initialRebelEquipment", _initialRebelEquipment] call _fnc_saveToTemplate;

private _rebUniforms = [
    "U_B_afougf_yt_m88str_multi_dpm01",
    "U_B_afou_FullGhillie_sard",
    "U_C_civil_poloshirt_01",
    "U_C_civil_polopants_04",
    "UA_CUP_combat_uniform",
    "UA_CUP_ubacs_uniform_tshirt",
    "U_B_afougf_yt_m88str_multi_dpm01",
    "U_B_afougf_yt_m88str_multi_dpm01",
    "U_B_afougf_yt_m88str_multi_dpm01",
    "U_B_afougf_yt_m88str_multi_dpm01"
];

["uniforms", _rebUniforms] call _fnc_saveToTemplate;

["headgear", [
    "UA_2020_CUP_helmet_2",
    "UA_2020_CUP_helmet_3",
    "UA_2020_CUP_helmet_1",
    "UA_CUP_mm14_H_booniehat_H",
    "UA_CUP_mm14_H_booniehat",
    "h_boonie_ua_desert_01",
    "h_afou_achcamo_001",
    "h_afou_patrolcap_mm14",
    "h_afou_pasgt_desert_01"
]] call _fnc_saveToTemplate;

/////////////////////
///  Identities   ///
/////////////////////

["faces", [
    "LivonianHead_1", "LivonianHead_2", "LivonianHead_3", "LivonianHead_4",
    "LivonianHead_5", "LivonianHead_6", "LivonianHead_7", "LivonianHead_8",
    "LivonianHead_9", "LivonianHead_10",
    "RussianHead_1", "RussianHead_2", "RussianHead_3", "RussianHead_4", "RussianHead_5"
]] call _fnc_saveToTemplate;
["voices", ["Male01RUS", "Male02RUS", "Male03RUS"]] call _fnc_saveToTemplate;

//////////////////////////
//       Loadouts       //
//////////////////////////

private _loadoutData = call _fnc_createLoadoutData;
_loadoutData set ["maps", ["ItemMap"]];
_loadoutData set ["watches", ["ItemWatch"]];
_loadoutData set ["compasses", ["ItemCompass"]];
_loadoutData set ["binoculars", ["Binocular"]];

_loadoutData set ["uniforms", _rebUniforms];

_loadoutData set ["glasses", ["G_Shades_Black", "G_Shades_Blue", "G_Shades_Green", "G_Shades_Red", "G_Aviator", "G_Spectacles", "G_Spectacles_Tinted", "G_Sport_BlackWhite", "G_Sport_Blackyellow", "G_Sport_Greenblack", "G_Sport_Checkered", "G_Sport_Red", "G_Squares", "G_Squares_Tinted"]];
_loadoutData set ["goggles", ["G_Lowprofile"]];
_loadoutData set ["facemask", ["rhs_scarf", "UK3CB_G_Balaclava_CHD", "G_Bandanna_blk", "G_Bandanna_oli", "G_Bandanna_khk", "G_Bandanna_tan", "G_Bandanna_beast", "G_Bandanna_shades", "G_Bandanna_sport", "G_Bandanna_aviator"]];

_loadoutData set ["items_medical_basic", ["BASIC"] call A3A_fnc_itemset_medicalSupplies];
_loadoutData set ["items_medical_standard", ["STANDARD"] call A3A_fnc_itemset_medicalSupplies];
_loadoutData set ["items_medical_medic", ["MEDIC"] call A3A_fnc_itemset_medicalSupplies];
_loadoutData set ["items_miscEssentials", [] call A3A_fnc_itemset_miscEssentials];

////////////////////////
//  Rebel Unit Types  //
///////////////////////.

private _squadLeaderTemplate = {
    ["uniforms"] call _fnc_setUniform;
    [selectRandomWeighted [[], 1.25, "glasses", 1, "goggles", 0.75, "facemask", 1]] call _fnc_setFacewear;

    ["items_medical_standard"] call _fnc_addItemSet;
    ["items_miscEssentials"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
    ["binoculars"] call _fnc_addBinoculars;
};

private _riflemanTemplate = {
    ["uniforms"] call _fnc_setUniform;
    [selectRandomWeighted [[], 1.25, "glasses", 1, "goggles", 0.75, "facemask", 1]] call _fnc_setFacewear;
    
    ["items_medical_standard"] call _fnc_addItemSet;
    ["items_miscEssentials"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
};

private _prefix = "militia";
private _unitTypes = [
    ["Petros", _squadLeaderTemplate],
    ["SquadLeader", _squadLeaderTemplate],
    ["Rifleman", _riflemanTemplate],
    ["staticCrew", _riflemanTemplate],
    ["Medic", _riflemanTemplate, [["medic", true]]],
    ["Engineer", _riflemanTemplate, [["engineer", true]]],
    ["ExplosivesExpert", _riflemanTemplate, [["explosiveSpecialist", true]]],
    ["Grenadier", _riflemanTemplate],
    ["LAT", _riflemanTemplate],
    ["AT", _riflemanTemplate],
    ["AA", _riflemanTemplate],
    ["MachineGunner", _riflemanTemplate],
    ["Marksman", _riflemanTemplate],
    ["Sniper", _riflemanTemplate],
    ["Unarmed", _riflemanTemplate]
];

[_prefix, _unitTypes, _loadoutData] call _fnc_generateAndSaveUnitsToTemplate;
