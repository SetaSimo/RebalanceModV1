_Armor = selectRandom [
    "6b23_SAKt_FOf", "6b23_SAKt_FO", "6b23_SAKd_FOf",
    "6b23_SAKt_FOd", "6b23_SAKd_FOd", "6b23_SAKt_FO",
    "6b23_Tarzan_Flora", "6b23_Tarzan_G", "6b23EMP_pioneer_F",
    "6b23EMP_pioneer_G"
];
_unit addvest _Armor;

_caliber = selectRandom["5.45", "7.62"];

switch (_caliber) do {
    case "5.45": {
        _weapon=selectRandom[
            "VTN_AK74_1976", "VTN_AK74_1989", "VTN_AK74N_1976",
            "VTN_AK74N_1989", "VTN_AKS74", "VTN_AKS74_1976",
            "VTN_AKS74N_1976", "VTN_AKS74N"
        ];
        
        _unit addWeapon _weapon;
        _unit addprimaryWeaponItem selectRandom['VTN_AK74_30b_SC', 'VTN_AK74_30p_SC'];
        
        for '_i' from 1 to 8 do {
            _unit addItemtovest selectRandom['VTN_AK74_30b_SC', 'VTN_AK74_30p_SC'];
        };
        for '_i' from 1 to 6 do {
            _unit addItemtovest selectRandom['VTN_AK74_30pv_TRC', 'VTN_AK74_30b_TRC'];
        };
    };
    case "7.62": {
        _weapon=selectRandom[
            "VTN_AKM", "VTN_AKMB", "VTN_AKMN",
            "VTN_AKMS", "VTN_AKMSN",
            "VTN_AKMS_SAWEDOFF"
        ];
        _unit addWeapon _weapon;
        _unit addprimaryWeaponItem 'VTN_AKM_30s_SC';
        for '_i' from 1 to 6 do {
            _unit addItemtovest selectRandom['VTN_AKM_30s_SC', 'VTN_AKM_30b_SC'];
        };
        for '_i' from 1 to 4 do {
            _unit addItemtovest selectRandom['VTN_AKM_30b_TRC', 'VTN_AKM_30s_TRC'];
        };
    };
    default {
        hint "Oops, for some reasons you don't have gear";
    };
};
