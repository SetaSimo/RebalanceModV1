
#include "CfgMagazines.cpp" 
#include "Animations.cpp" 
#include "Effects.cpp"
#include "CfgWeapons.cpp" 
#include "CfgRecoil.cpp" 
#include "CfgVehicles.cpp" 
#include "CfgAmmo.hpp" 
#include "CfgMoves.hpp" 
#include "CfgSounds.cpp" 




class CfgPatches
{
	class recoilV2
	{
		name = "RebalanceMod";
		author = "AIR Team";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.1;
		requiredAddons[] = {
			"A3_Weapons_F",
			"A3_UI_F_Tank",
			"a3_ui_f",
			"A3_3den",
			"rhs_weapons",
			"rhs_main",
			"rhs_c_heavyweapons",
			"rhs_c_troops",
			"rhs_c_weapons",
			"rhsgref_c_weapons",
			"rhsusf_c_weapons",
			"ace_noidle",
			"ace_compat_rhs_afrf3"
		};
	};
};

class CfgFunctions{
	class Seon_INIT {
		tag = "Seon_INIT";
		class script {
			file = "\RebalanceMod\scripts";
			class Seon_Init {
				postInit = 1;
			};
		};
    };
	class po_canteen
	{
		class functions
		{
			file="\RebalanceMod\scripts\cateen";
			class canteenDrink
			{
			};
			class pourWater
			{
			};
		};
	};

=======
	class Seon_Smoke
	{
		class functions
		{
			file="\RebalanceMod\scripts\smoke";
			class PlayerCough
			{
			};
		};
	};
	class Kot
    {
        class WeaponInteractions
        {
            file = "\RebalanceMod\scripts\maghold";
            
            class addWeapon {};
        };
    };
};


class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
	enableDisplay = 0;
	delete Spotlight;
	class controls {
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
	};
};



class RscMapControl
{
	maxSatelliteAlpha=0.5;
	colorBackground[]={0.89999998,0.89999998,0.89999998,1};
	colorCountlines[]={0.64999998,0.52999997,0.30000001,1};
	colorMainCountlines[]={0.85000002,0,0};
	colorLevels[]={0,0,0,1};
	sizeExLevel=0.029999999;
	colorTracks[]={1,0,0,1};
	colorTracksFill[]={1,1,0,1};
	colorRoads[]={0,0,0,1};
	colorRoadsFill[]={1,1,0,1};
	colorMainRoads[]={0,0,0,1};
	colorMainRoadsFill[]={1,0.60000002,0.40000001,1};
};

class RscObject;
class RscDisplayMainMap {
	class objects {
		class Compass : RscObject {
			scale = 0.400 * (SafeZoneW Min SafeZoneH);
			zoomDuration=0;
		};
	};
};