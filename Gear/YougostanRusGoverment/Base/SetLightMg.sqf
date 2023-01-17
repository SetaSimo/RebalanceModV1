_Armor = selectRandom [
    "RPS_Smersh12_b", "RPS_Smersh12_sh", "RPS_Smersh12",
    "RPS_Smersh12_d", "RS_Tarzan_b", "RS_Tarzan_g",
    "RS_Tarzan_f"
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
            _unit addItemtovest selectRandom ['VTN_RPK_40b_TRC', 'VTN_RPK_40s_TRC'];
        };
    };
    
    default {
        hint "Oops, for some reasons you don't have gear";
    };
};