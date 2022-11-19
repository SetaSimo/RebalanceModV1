_role = gettext (configFile >> "Cfgvehicles" >> typeOf _unit >> "_role");

switch (_role) do {
    case "Squadleader": {
        for '_i' from 1 to 2 do {
            _unit addItemtovest selectRandom ['VTN_RDG2B', 'VTN_RDG2B', 'VTN_RDG2CH'];
            _unit addItemtovest 'rhs_mag_f1';
            _unit addItemtovest 'rhs_mag_rgd5';
        };
    };
    case "Medic": {
        for '_i' from 1 to 2 do {
            _unit addItemtovest selectRandom ['VTN_RDG2B', 'VTN_RDG2B', 'VTN_RDG2CH'];
            _unit addItemtovest 'rhs_mag_f1';
            _unit addItemtovest 'rhs_mag_rgd5';
        };
    };
    default {
        for '_i' from 1 to 2 do {
            _unit addItemtovest 'rhs_mag_rgd5';
        };
        _unit addItemtovest 'rhs_mag_f1';
    };
};