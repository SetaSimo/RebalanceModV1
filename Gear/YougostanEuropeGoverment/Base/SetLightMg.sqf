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
            "VTN_RPK74", "VTN_RPK74_1984", "VTN_RPK74N_1984",
            "VTN_RPK74N"
        ];
        
        _unit addWeapon _weapon;
        _unit addprimaryWeaponItem selectRandom['VTN_RPK74_45b_SC', 'VTN_RPK74_45p_SC'];
        
        for '_i' from 1 to 5 do {
            _unit addItemtovest selectRandom['VTN_RPK74_45b_SC', 'VTN_RPK74_45p_SC'];
        };
        for '_i' from 1 to 3 do {
            _unit addItemtovest selectRandom['VTN_RPK74_45b_TRC', 'VTN_RPK74_45p_TRC'];
        };
    };
    case "7.62": {
        _weapon=selectRandom[
            "VTN_RPK"
        ];
        _unit addWeapon _weapon;
        _unit addprimaryWeaponItem selectRandom['VTN_RPK_40s_SC', 'VTN_RPK_40b_SC'];
        
        for '_i' from 1 to 5 do {
            _unit addItemtovest selectRandom['VTN_RPK_40s_SC', 'VTN_RPK_40b_SC'];
        };
        for '_i' from 1 to 3 do {
            _unit addItemtovest ['VTN_RPK_40b_TRC', 'VTN_RPK_40s_TRC'];
        };
    };
    
    default {
        hint "Oops, for some reasons you don't have gear";
    };
};