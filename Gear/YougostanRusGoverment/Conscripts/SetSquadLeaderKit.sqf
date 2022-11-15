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
_unit setRank "SERGEANT";

_unit call compile preprocessFileLineNumbers "Rebalancemod\Gear\YougostanRusGoverment\Base\setBaseUnitgear.sqf";
_unit call compile preprocessFileLineNumbers "Rebalancemod\Gear\YougostanRusGoverment\Base\setbackpack.sqf";
_unit call compile preprocessFileLineNumbers "Rebalancemod\Gear\YougostanRusGoverment\Base\setRiflewithUnderbarrel.sqf";