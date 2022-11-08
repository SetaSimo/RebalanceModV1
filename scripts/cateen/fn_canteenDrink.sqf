params ["_unit"];

_IsUsed=true;

if ("ACE_Canteen" in items _unit) then {
    _unit say3D "canteen_drink";
    _unit playActionNow "Medic";
    ["$str_Half_Cateen", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Canteen";
    _unit addItem "ACE_Canteen_Half";
    //GVAR(anFatigue) = 1;
    _IsUsed=false;
};

if ("ACE_Canteen_Half" in items _unit && _IsUsed) then {
    _unit say3D "canteen_drink";
    _unit playActionNow "Medic";
    ["$str_Empty_Cateen", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Canteen_Half";
    _unit addItem "ACE_Canteen_Empty";
    //GVAR(anFatigue) = 1;
    _IsUsed=false;
};

if ("ACE_WaterBottle" in items _unit && _IsUsed) then {
    _unit say3D "canteen_drink";
    _unit playActionNow "Medic";
    ["$str_Half_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_WaterBottle";
    _unit addItem "ACE_WaterBottle_Half";
    //GVAR(anFatigue) = 1;
    _IsUsed=false;
};

if ("ACE_WaterBottle_Half" in items _unit && _IsUsed) then {
    _unit say3D "canteen_drink";
    _unit playActionNow "Medic";
    ["$str_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_WaterBottle_Half";
    _unit addItem "ACE_WaterBottle_Empty";
    //GVAR(anFatigue) = 1;
    _IsUsed=false;
};

if ("ACE_Can_RedGull" in items _unit && _IsUsed) then {
    _unit say3D "canteen_drink";
    _unit playActionNow "Medic";
    ["$str_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Can_RedGull";
    //GVAR(anFatigue) = 1;
    _IsUsed=false;
};

if ("ACE_Can_Franta" in items _unit && _IsUsed) then {
    _unit say3D "canteen_drink";
    _unit playActionNow "Medic";
    ["$str_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Can_Franta";
    //GVAR(anFatigue) = 1;
    _IsUsed=false;
};

if ("ACE_Can_Spirit" in items _unit && _IsUsed) then {
    _unit say3D "canteen_drink";
    _unit playActionNow "Medic";
    ["$str_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Can_Spirit";
    //GVAR(anFatigue) = 1;
};

if ("ACE_Canteen" in items _unit) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Half_Cateen", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Canteen";
    _unit addItem "ACE_Canteen_Half";
    //GVAR(anFatigue) = 1;
    _IsUsed=false;
};

if ("ACE_Canteen_Half" in items _unit && _IsUsed) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Empty_Cateen", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Canteen_Half";
    _unit addItem "ACE_Canteen_Empty";
    //GVAR(anFatigue) = 1;
    _IsUsed=false;
};

if ("ACE_WaterBottle" in items _unit && _IsUsed) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Half_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_WaterBottle";
    _unit addItem "ACE_WaterBottle_Half";
    //GVAR(anFatigue) = 1;
    _IsUsed=false;
};

if ("ACE_WaterBottle_Half" in items _unit && _IsUsed) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_WaterBottle_Half";
    _unit addItem "ACE_WaterBottle_Empty";
    //GVAR(anFatigue) = 1;
    _IsUsed=false;
};

if ("ACE_Can_RedGull" in items _unit && _IsUsed) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Can_RedGull";
    //GVAR(anFatigue) = 1;
    _IsUsed=false;
};

if ("ACE_Can_Franta" in items _unit && _IsUsed) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Can_Franta";
    //GVAR(anFatigue) = 1;
    _IsUsed=false;
};

if ("ACE_Can_Spirit" in items _unit && _IsUsed) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Can_Spirit";
    //GVAR(anFatigue) = 1;
};