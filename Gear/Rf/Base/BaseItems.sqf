//Medecine
if (_medical_training == 0) then {
    if (_unit_rank == "PRIVATE") then {
        if ((_year >= 1991) and (_year <= 2015)) then {
            for '_i' from 1 to 2 do {
                _unit addItemToUniform 'ACE_fieldDressing';
                _unit addItemToUniform 'ACE_packingBandage';
            };
            _unit addItemToUniform 'ACE_morphine';
            _unit addItemToUniform 'ACE_tourniquet';
        };
        if ((_year >= 2016) and (_year <= 2025)) then {
            for '_i' from 1 to 2 do {
                _unit addItemToUniform 'ACE_fieldDressing';
                _unit addItemToUniform 'ACE_packingBandage';
                _unit addItemToUniform 'ACE_morphine';
            };
            _unit addItemToUniform 'ACE_tourniquet';
            _unit addItemToUniform 'ACE_elasticBandage';
            _unit addItemToUniform 'ACE_elasticBandage';
        };
    };
    if (_unit_rank == "CORPORAL") then {
        if ((_year >= 1991) and (_year <= 2015)) then {
            for '_i' from 1 to 2 do {
                _unit addItemToUniform 'ACE_fieldDressing';
                _unit addItemToUniform 'ACE_packingBandage';
                _unit addItemToUniform 'ACE_morphine';
            };
            _unit addItemToUniform 'ACE_tourniquet';
        };
        if ((_year >= 2016) and (_year <= 2025)) then {
            for '_i' from 1 to 2 do {
                _unit addItemToUniform 'ACE_fieldDressing';
                _unit addItemToUniform 'ACE_packingBandage';
                _unit addItemToUniform 'ACE_morphine';
            };
            _unit addItemToUniform 'ACE_tourniquet';
            _unit addItemToUniform 'ACE_elasticBandage';
            _unit addItemToUniform 'ACE_elasticBandage';
        };
    };
    if (_unit_rank == "SERGEANT") then {
        if ((_year >= 1991) and (_year <= 2015)) then {
            for '_i' from 1 to 2 do {
                _unit addItemToUniform 'ACE_fieldDressing';
                _unit addItemToUniform 'ACE_packingBandage';
                _unit addItemToUniform 'ACE_morphine';
            };
            _unit addItemToUniform 'ACE_elasticBandage';
            _unit addItemToUniform 'ACE_tourniquet';
        };
        if ((_year >= 2016) and (_year <= 2025)) then {
            for '_i' from 1 to 2 do {
                _unit addItemToUniform 'ACE_fieldDressing';
                _unit addItemToUniform 'ACE_packingBandage';
                _unit addItemToUniform 'ACE_morphine';
                _unit addItemToUniform 'ACE_elasticBandage';
            };
            _unit addItemToUniform 'ACE_tourniquet';
            _unit addItemToUniform 'ACE_elasticBandage';
            _unit addItemToUniform 'ACE_elasticBandage';
        };
    };
    if (_unit_rank == "LIEUTENANT") then {
        if ((_year >= 1991) and (_year <= 2015)) then {
            for '_i' from 1 to 2 do {
                _unit addItemToUniform 'ACE_fieldDressing';
                _unit addItemToUniform 'ACE_packingBandage';
                _unit addItemToUniform 'ACE_morphine';
                _unit addItemToUniform 'ACE_tourniquet';
            };
            _unit addItemToUniform 'ACE_elasticBandage';
        };
        if ((_year >= 2016) and (_year <= 2025)) then {
            for '_i' from 1 to 2 do {
                _unit addItemToUniform 'ACE_fieldDressing';
                _unit addItemToUniform 'ACE_packingBandage';
                _unit addItemToUniform 'ACE_morphine';
                _unit addItemToUniform 'ACE_elasticBandage';
            };
            _unit addItemToUniform 'ACE_tourniquet';
            _unit addItemToUniform 'ACE_elasticBandage';
            _unit addItemToUniform 'ACE_elasticBandage';
        };
    };
    if ((_unit_rank == "CAPTAIN") or (_unit_rank == "MAJOR") or (_unit_rank == "COLONEL")) then {
        if ((_year >= 1991) and (_year <= 2015)) then {
            for '_i' from 1 to 2 do {
                _unit addItemToUniform 'ACE_fieldDressing';
                _unit addItemToUniform 'ACE_packingBandage';
                _unit addItemToUniform 'ACE_morphine';
                _unit addItemToUniform 'ACE_tourniquet';
            };
            _unit addItemToUniform 'ACE_elasticBandage';
        };
        if ((_year >= 2016) and (_year <= 2025)) then {
            for '_i' from 1 to 2 do {
                _unit addItemToUniform 'ACE_fieldDressing';
                _unit addItemToUniform 'ACE_packingBandage';
                _unit addItemToUniform 'ACE_morphine';
                _unit addItemToUniform 'ACE_elasticBandage';
            };
            _unit addItemToUniform 'ACE_tourniquet';
            _unit addItemToUniform 'ACE_elasticBandage';
            _unit addItemToUniform 'ACE_elasticBandage';
        };
    };
};


if (_medical_training == 1) then {
    _unit addItemToUniform 'ACE_surgicalKit';
    _unit addItemToUniform 'FSGm_ItemMedicBagMil';

    for '_i' from 1 to 2 do {
        _unit addItemToBackpack 'ACE_morphine';
        _unit addItemToBackpack 'ACE_splint';
        _unit addItemToBackpack 'ACE_epinephrine';
        _unit addItemToBackpack 'ACE_bloodIV_250';
    };

    for '_i' from 1 to 8 do {
        _unit addItemToBackpack 'ACE_fieldDressing';
        _unit addItemToBackpack 'ACE_packingBandage';
        _unit addItemToBackpack 'ACE_elasticBandage';
    };
    for '_i' from 1 to 3 do {
        _unit addItemToBackpack 'ACE_tourniquet';
    };

    for '_i' from 1 to 2 do {
        _unit addItemToBackpack 'ACE_salineIV';
        _unit addItemToBackpack 'ACE_salineIV_500';
        _unit addItemToBackpack 'ACE_bloodIV';
        _unit addItemToBackpack 'ACE_bloodIV_250';
        _unit addItemToBackpack 'ACE_bloodIV_500';
    };
};

if (_medical_training == 2) then {
    _unit addItemToUniform 'ACE_surgicalKit';
    _unit addItemToUniform 'FSGm_ItemMedicBagMil';

    for '_i' from 1 to 4 do {
        _unit addItemToBackpack 'ACE_morphine';
        _unit addItemToBackpack 'ACE_splint';
        _unit addItemToBackpack 'ACE_epinephrine';
        _unit addItemToBackpack 'ACE_bloodIV_250';
    };

    for '_i' from 1 to 8 do {
        _unit addItemToBackpack 'ACE_fieldDressing';
        _unit addItemToBackpack 'ACE_packingBandage';
        _unit addItemToBackpack 'ACE_elasticBandage';
    };
    for '_i' from 1 to 3 do {
        _unit addItemToBackpack 'ACE_tourniquet';
    };

    for '_i' from 1 to 3 do {
        _unit addItemToBackpack 'ACE_salineIV';
        _unit addItemToBackpack 'ACE_salineIV_500';
        _unit addItemToBackpack 'ACE_bloodIV';
        _unit addItemToBackpack 'ACE_bloodIV_250';
        _unit addItemToBackpack 'ACE_bloodIV_500';
    };
};
//end