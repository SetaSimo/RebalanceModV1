params ["_unit", "_target"];
_IsUsed=true;

if ("ACE_Canteen" in items _unit) then {
    _unit playActionNow "Medic";
    _unit removeItem "ACE_Canteen";
    _unit addItem "ACE_Canteen_Half";
    
    _pulse = _target getVariable "ACE_medical_heartrate";
    _pain = _target getVariable "ACE_medical_pain";
    _blood = _target getVariable "ACE_medical_bloodvolume";
    _IsUsed=false;
    if (_pulse > 70 && _pain < 0.3 && _blood > 80) then {
        ["$str_Water_Wake_Up", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
        [_target, false] call ace_medical_fnc_setUnconscious;
    } else {
        ["$str_Water_No_Result", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    }
};

if ("ACE_Canteen_Half" in items _unit && _IsUsed) then {
    _unit playActionNow "Medic";
    _unit removeItem "ACE_Canteen_Half";
    _unit addItem "ACE_Canteen_Empty";
    
    _pulse = _target getVariable "ACE_medical_heartrate";
    _pain = _target getVariable "ACE_medical_pain";
    _blood = _target getVariable "ACE_medical_bloodvolume";
    _IsUsed=false;
    if (_pulse > 70 && _pain < 0.3 && _blood > 80) then {
        ["$str_Water_Wake_Up", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
        [_target, false] call ace_medical_fnc_setUnconscious;
    } else {
        ["$str_Water_No_Result", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    }
};

if ("ACE_WaterBottle" in items _unit && _IsUsed) then {
    _unit playActionNow "Medic";
    _unit removeItem "ACE_WaterBottle";
    _unit addItem "ACE_WaterBottle_Half";
    
    _pulse = _target getVariable "ACE_medical_heartrate";
    _pain = _target getVariable "ACE_medical_pain";
    _blood = _target getVariable "ACE_medical_bloodvolume";
    _IsUsed=false;
    if (_pulse > 70 && _pain < 0.3 && _blood > 80) then {
        ["$str_Water_Wake_Up", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
        [_target, false] call ace_medical_fnc_setUnconscious;
    } else {
        ["$str_Water_No_Result", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    }
};

if ("ACE_WaterBottle_Half" in items _unit && _IsUsed) then {
    _unit playActionNow "Medic";
    _unit removeItem "ACE_WaterBottle_Half";
    _unit addItem "ACE_WaterBottle_Empty";
    
    _pulse = _target getVariable "ACE_medical_heartrate";
    _pain = _target getVariable "ACE_medical_pain";
    _blood = _target getVariable "ACE_medical_bloodvolume";
    
    if (_pulse > 70 && _pain < 0.3 && _blood > 80) then {
        ["$str_Water_Wake_Up", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
        [_target, false] call ace_medical_fnc_setUnconscious;
    } else {
        ["$str_Water_No_Result", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    }
};