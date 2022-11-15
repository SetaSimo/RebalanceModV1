class cfgRecoils
{
	//impulse[]={0.029999999,0.02,0.2,0.079999998,0.079999998,0.80000001,0.1,0.029999999,-0.1,0.30000001,0,0};

    #include "\RebalanceMod\Configs\RHSConfigs\Recoil.hpp"
};

class cfgAmmo
{
    class BulletBase;
    class FlareCore;	
	class RocketBase;
	class GrenadeHand_stone;
	class VehicleMagazine;
	class FlareBase: FlareCore {
        timeToLive = 90;
        brightness = 150000;
		intensity = 200000;
        flareSize = 50;
    };

    class F_40mm_White: FlareBase {
        timeToLive = 90;
        brightness = 150000;
		intensity = 200000;
        flareSize = 50;
    };

    class Flare_82mm_AMOS_White: FlareCore {
        timeToLive = 90;
        brightness = 80000;
		intensity = 200000;
        flareSize = 50;
    };

	class F_40mm_Green;
	class F_40mm_Red;
	class MissileCore;
	
	class B_9x21_Ball;
	class B_556x45_Ball;
	class B_762x51_Ball;
	class B_762x54_Ball;
	class B_127x99_Ball;
	class B_127x108_Ball;
	class SubmunitionBase;
	
	class SmokeShell;
	class GrenadeHand;

	class MissileBase : MissileCore
	{
		class Components;
	};

    #include "\RebalanceMod\Configs\RHSConfigs\Ammo.hpp"
    #include "\RebalanceMod\Configs\VeteranConfigs\Ammo.hpp"
};

class CfgWeapons
{
    class Land;
	class Pistol_Base_F;
	class Launcher;
	class Launcher_Base_F : Launcher
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;

	class launch_O_Titan_F;

	class Default;

	class ItemCore;
	class InventoryOpticsItem_Base_F;

	class Rifle;

	class Rifle_Base_F : Rifle
	{

		class WeaponSlotsInfo;
	};

	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};

	class Rifle_Short_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};

	class arifle_MX_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
    class LRR_base_F: Rifle_Long_Base_F
	{
	};
	
    #include "\RebalanceMod\Configs\VeteranConfigs\Weapons.hpp"
    #include "\RebalanceMod\Configs\RHSConfigs\Weapons.hpp"
    #include "\RebalanceMod\Configs\RHSConfigs\Scopes.hpp"
};