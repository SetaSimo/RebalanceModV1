_role = gettext (configFile >> "Cfgvehicles" >> typeOf _unit >> "_role");

_backpack='';
//VTN_SANSUMKA_HAKI clips in some vests
switch (_role) do {
    case "Medic": {
        _backpack = selectRandom[
            'rhs_medic_bag', 'rhs_medic_bag'
        ];
    };
    case "radioOperator": {
        _backpack = selectRandom[
            'VTN_BP_R168KNE_FLorA', 'rhs_r148', 'VTN_BP_PRC150_ILBE_DES'
        ];
    };
    default {
        _backpack= selectRandom[
            'rhs_sidor', 'YuE_RD54', 'rhs_assault_umbts',
            'rhs_tortila_olive', 'rhs_rk_sht_30_olive'
        ];
    };
};

_unit addbackpack _backpack;