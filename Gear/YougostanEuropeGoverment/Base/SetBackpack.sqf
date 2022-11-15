_is_unitMedic = _unit getUnitTrait "Medic";

if (_is_unitMedic) then {
    _backpack = selectRandom[
        'rhs_medic_bag', 'rhs_medic_bag'
    ];
    _unit addbackpack _backpack;
} else {
    _backpack= selectRandom[
        'rhs_sidor', 'YuE_RD54', 'rhs_assault_umbts',
        'rhs_tortila_olive', 'rhs_rk_sht_30_olive'
    ];
    _unit addbackpack _backpack;
};