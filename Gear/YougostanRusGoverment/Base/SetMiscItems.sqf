_role = gettext (configFile >> "Cfgvehicles" >> typeOf _unit >> "_role");

for '_i' from 1 to 5 do {
    _unit addItemtouniform 'ACE_packingBandage';
};
for '_i' from 1 to 5 do {
    _unit addItemtouniform 'ACE_elasticBandage';
};

for '_i' from 1 to 2 do {
    _unit addItemtouniform 'ACE_tourniquet';
};
_unit addItemtouniform 'ACE_epinephrine';

for '_i' from 1 to 2 do {
    _unit addItemtouniform 'ACE_morphine';
};
_unit addItemtouniform 'ACE_splint';
_unit addItemtouniform 'ACE_EarPlugs';
_unit addItemtobackpack 'ACE_Entrenchingtool';

_unit linkItem 'ItemCompass';
_unit linkItem 'ItemWatch';

_unit addWeapon selectRandom['av_bandage_white', 'av_bandage_green'];

switch (_role) do {
    case "Medic": {
        for '_i' from 1 to 15 do {
            _unit addItemtobackpack 'ACE_elasticBandage';
        };
        for '_i' from 1 to 15 do {
            _unit addItemtobackpack 'ACE_packingBandage';
        };
        for '_i' from 1 to 4 do {
            _unit addItemtobackpack 'ACE_epinephrine';
        };
        for '_i' from 1 to 2 do {
            _unit addItemtobackpack 'ACE_morphine';
        };
        for '_i' from 1 to 5 do {
            _unit addItemtobackpack 'ACE_salineIV';
        };
        for '_i' from 1 to 2 do {
            _unit addItemtobackpack 'ACE_splint';
        };
        
        case "Squadleader": {
            _unit linkItem "binocular";
            _unit linkItem "ItemMap";
        };
    };
    default {};
};