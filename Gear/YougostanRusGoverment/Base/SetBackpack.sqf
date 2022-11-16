_is_unitMedic = _unit getUnitTrait "Medic";

if (_is_unitMedic) then {
    _backpack = selectRandom[
        'rhs_medic_bag', 'rhs_medic_bag'
    ];
    _unit addbackpack _backpack;
} else {
    _backpack= selectRandom[
        "Taloon_BLK", "Taloon_MCT", "Taloon_OD",
        'rhs_assault_umbts', 'rhs_tortila_olive', 'rhs_rk_sht_30_olive',
        'rhs_tortila_khaki'
    ];
    _unit addbackpack _backpack;
};