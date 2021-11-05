params ["_unit"];

_IsUsed=true;

/* ACE_WaterBottle_Empty,ACE_WaterBottle_Half,ACE_WaterBottle/ACE_Canteen,ACE_Canteen_Half,ACE_Canteen_Empty,
ACE_Can_RedGull,ACE_Can_Franta,ACE_Can_Spirit
Stringable
*/

if("ACE_Canteen" in items _unit) then
{
	_unit say3D "canteen_drink";
	_unit playActionNow "Medic";
	["$STR_Half_Cateen", 2.5, _unit] spawn ace_common_fnc_displayTextStructured;
	_unit removeItem "ACE_Canteen";
	_unit addItem "ACE_Canteen_Half";	
    _unit setfatigue 0;
	_IsUsed=false;
};

if("ACE_Canteen_Half" in items _unit && _IsUsed) then
{
	_unit say3D "canteen_drink";
	_unit playActionNow "Medic";
	["$STR_Empty_Cateen", 2.5, _unit] spawn ace_common_fnc_displayTextStructured;
	_unit removeItem "ACE_Canteen_Half";
	_unit addItem "ACE_Canteen_Empty";	
    _unit setfatigue 0;
	_IsUsed=false;
};
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
if("ACE_WaterBottle" in items _unit && _IsUsed) then
{
	_unit say3D "canteen_drink";
	_unit playActionNow "Medic";
	["$STR_Half_Bottle", 2.5, _unit] spawn ace_common_fnc_displayTextStructured;
	_unit removeItem "ACE_WaterBottle";
	_unit addItem "ACE_WaterBottle_Half";	
    _unit setfatigue 0;
	_IsUsed=false;
};

if("ACE_WaterBottle_Half" in items _unit && _IsUsed) then
{
	_unit say3D "canteen_drink";
	_unit playActionNow "Medic";
	["$STR_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displayTextStructured;
	_unit removeItem "ACE_WaterBottle_Half";
	_unit addItem "ACE_WaterBottle_Empty";	
    _unit setfatigue 0;
	_IsUsed=false;
};

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
if("ACE_Can_RedGull" in items _unit && _IsUsed) then
{
	_unit say3D "canteen_drink";
	_unit playActionNow "Medic";
	["$STR_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displayTextStructured;
	_unit removeItem "ACE_Can_RedGull";
    _unit setfatigue 0;
	_IsUsed=false;
};

if("ACE_Can_Franta" in items _unit && _IsUsed) then
{
	_unit say3D "canteen_drink";
	_unit playActionNow "Medic";
	["$STR_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displayTextStructured;
	_unit removeItem "ACE_Can_Franta";
    _unit setfatigue 0;
	_IsUsed=false;
};

if("ACE_Can_Spirit" in items _unit && _IsUsed) then
{
	_unit say3D "canteen_drink";
	_unit playActionNow "Medic";
	["$STR_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displayTextStructured;
	_unit removeItem "ACE_Can_Spirit";
    _unit setfatigue 0;

=======
/*
ACE_WaterBottle_Empty, ACE_WaterBottle_Half, ACE_WaterBottle/ACE_Canteen, ACE_Canteen_Half, ACE_Canteen_Empty,
ACE_Can_RedGull, ACE_Can_Franta, ACE_Can_Spirit
*/

if ("ACE_Canteen" in items _unit) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Half_Cateen", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Canteen";
    _unit addItem "ACE_Canteen_Half";
    _unit setFatigue 0;
    _unit setStamina 600;
    _IsUsed=false;
};

if ("ACE_Canteen_Half" in items _unit && _IsUsed) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Empty_Cateen", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Canteen_Half";
    _unit addItem "ACE_Canteen_Empty";
    _unit setFatigue 0;
    _unit setStamina 600;
    _IsUsed=false;
};
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
if ("ACE_WaterBottle" in items _unit && _IsUsed) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Half_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_WaterBottle";
    _unit addItem "ACE_WaterBottle_Half";
    _unit setFatigue 0;
    _unit setStamina 600;
    _IsUsed=false;
};

if ("ACE_WaterBottle_Half" in items _unit && _IsUsed) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_WaterBottle_Half";
    _unit addItem "ACE_WaterBottle_Empty";
    _unit setFatigue 0;
    _unit setStamina 600;
    _IsUsed=false;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
if ("ACE_Can_RedGull" in items _unit && _IsUsed) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Can_RedGull";
    _unit setFatigue 0;
    _unit setStamina 600;
    _IsUsed=false;
};

if ("ACE_Can_Franta" in items _unit && _IsUsed) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Can_Franta";
    _unit setFatigue 0;
    _unit setStamina 600;
    _IsUsed=false;
};

if ("ACE_Can_Spirit" in items _unit && _IsUsed) then {
    playSound3D [("\Rebalancemod\drink\drinking_"+selectRandom["1", "2", "3", "4", "5", "6"]+".ogg"), _unit];
    ["$str_Empty_Bottle", 2.5, _unit] spawn ace_common_fnc_displaytextstructured;
    _unit removeItem "ACE_Can_Spirit";
    _unit setFatigue 0;
    _unit setStamina 600;

};
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//