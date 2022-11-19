
if (!local _unit) exitwith {};

_unit = _this select 0;

removeAllweapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeuniform _unit;
removevest _unit;
removeBackpack _unit;
removeHeadgear _unit;
removeGoggles _unit;

_unit setRank "private";

_unit setUnitTrait ["Medic", true];
//_unit setVariable ["ace_medical_medicclass", 1, true];

_unit call compile preprocessFileLineNumbers "Rebalancemod\Gear\YougostanRusGoverment\Base\setBaseUnitgear.sqf";
_unit call compile preprocessFileLineNumbers "Rebalancemod\Gear\YougostanRusGoverment\Base\SetBackpack.sqf";
_unit call compile preprocessFileLineNumbers "Rebalancemod\Gear\YougostanRusGoverment\Base\SetRifle.sqf";