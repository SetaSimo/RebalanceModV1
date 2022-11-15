_Armor = selectRandom [
    "RPS_Smersh10_sh", "RPS_Smersh8_sh", "RPS_Smersh2_sh",
    "RPS_Smersh4_sh", "RPS_Smersh10_d", "RPS_Smersh8_d",
    "RPS_Smersh2_d", "RPS_Smersh4_d", "RPS_Smersh10_b",
    "RPS_Smersh8_b", "RPS_Smersh2_b", "RPS_Smersh4_b"
];
_unit addvest _Armor;

_caliber = selectRandom["5.45", "7.62"];

switch (_caliber) do {
    case "5.45": {
        _weapon=selectRandom[
            "VTN_AK74_1976_GP25", "VTN_AK74_1989_GP25", "VTN_AK74N_1976_GP25",
            "VTN_AK74N_1989_GP25", "VTN_AKS74_GP25", "VTN_AKS74_1976_GP25",
            "VTN_AKS74N_1976_GP25", "VTN_AKS74N_GP25"
        ];
        
        _unit addWeapon _weapon;
        _unit addprimaryWeaponItem selectRandom['VTN_AK74_30b_SC', 'VTN_AK74_30p_SC'];
        _unit addprimaryWeaponItem 'VTN_VOG25';
        
        for '_i' from 1 to 5 do {
            _unit addItemtovest selectRandom['VTN_AK74_30b_SC', 'VTN_AK74_30p_SC'];
        };
        for '_i' from 1 to 4 do {
            _unit addItemtovest selectRandom['VTN_AK74_30pv_TRC', 'VTN_AK74_30b_TRC'];
        };
    };
    case "7.62": {
        _weapon=selectRandom[
            "VTN_AKM_GP25", "VTN_AKMN_GP25", "VTN_AKMS_GP25",
            "VTN_AKMSN_GP25"
        ];
        _unit addWeapon _weapon;
        _unit addprimaryWeaponItem 'VTN_AKM_30s_SC';
        _unit addprimaryWeaponItem 'VTN_VOG25';
        for '_i' from 1 to 4 do {
            _unit addItemtovest selectRandom['VTN_AKM_30s_SC', 'VTN_AKM_30b_SC'];
        };
        for '_i' from 1 to 3 do {
            _unit addItemtovest selectRandom['VTN_AKM_30b_TRC', 'VTN_AKM_30s_TRC'];
        };
    };
    default {
        hint "Oops, for some reasons you don't have gear";
    };
};

for '_i' from 1 to 10 do {
    _unit addItemtovest 'VTN_VOG25';
};