_rpg=selectRandom[
    'VTN_RPG7V', 'VTN_RPG7V2_PG7V'
];
_unit addWeapon _rpg;

_optic=selectRandom[
    '', '', 'VTN_OPTIC_PGO7V',
    'VTN_OPTIC_PGO7V2', 'VTN_OPTIC_PGO7V3'
];
_unit addsecondaryWeaponItem _optic;

_unit addsecondaryWeaponItem 'VTN_PG7V';

for '_i' from 1 to 2 do {
    _unit addItemtobackpack 'VTN_OG7V';
};
_unit addItemtobackpack 'VTN_PG7V';
_unit addItemtobackpack 'VTN_PG7VM';