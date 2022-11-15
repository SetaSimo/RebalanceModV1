class CfgFactionClasses
{
	class Seon_Yougustan_Pro_Nato
	{
		displayName = "Republic of Yougustan";
		priority = 8;
		side = 1;
	};

	class Seon_Yougustan_Pro_Rus
	{
		displayName = "Yougustan Federation";
		priority = 8;
		side = 0;
	};
};

class CfgVehicleClasses
{
	class Seon_Yougustan_ProNato_Infantry
	{
		displayname = "Infantry";
	};

	class Seon_Yougustan_ProRus_Infantry
	{
		displayname = "Infantry";
	};
};

class CfgEditorSubcategories
{
	class Seon_Yougustan_Pro_Nato_Infantry_Conscripts
	{
		displayname = "Conscripts";
	};

	class Seon_Yougustan_Pro_Rus_Infantry_Conscripts
	{
		displayname = "Conscripts";
	};
};

class UniformSlotInfo;
class CfgVehicles
{
#include "NoZoomBase.cpp"
	class B_Soldier_F;
	class Seon_YougostanEuropeGoverment_Base : B_Soldier_F
	{
		scope = 0;
		side = 1;
		faction = "Seon_Yougustan_Pro_Nato";
		genericNames = "RussianMen";
		identitytypes[] =
			{
				"LanguageRUS",
				"Head_Euro"};
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG : UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba : UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles : UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear : UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
		modelSides[] = {6};
		linkedItems[] =
			{
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"};
		respawnLinkedItems[] =
			{
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"};
	};

	class Seon_YougostanEuropeGoverment_SquadLeader : Seon_YougostanEuropeGoverment_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Seon_Yougustan_ProNato_Infantry";
		editorSubcategory = "Seon_Yougustan_Pro_Nato_Infantry_Conscripts";
		displayName = "SquadLeader";
		class EventHandlers
		{
			init = "(_this) call compile preprocessfilelinenumbers 'Rebalancemod\Gear\YougostanEuropeGoverment\Conscripts\SetSquadLeaderKit.sqf';";
		};
	};
	class Seon_YougostanEuropeGoverment_LightMg : Seon_YougostanEuropeGoverment_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Seon_Yougustan_ProNato_Infantry";
		editorSubcategory = "Seon_Yougustan_Pro_Nato_Infantry_Conscripts";
		displayName = "Light Machine gunner";
		class EventHandlers
		{
			init = "(_this) call compile preprocessfilelinenumbers 'Rebalancemod\Gear\YougostanEuropeGoverment\Conscripts\SetLightMgKit.sqf';";
		};
	};
	class Seon_YougostanEuropeGoverment_Rifleman : Seon_YougostanEuropeGoverment_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Seon_Yougustan_ProNato_Infantry";
		editorSubcategory = "Seon_Yougustan_Pro_Nato_Infantry_Conscripts";
		displayName = "Rifleman";
		class EventHandlers
		{
			init = "(_this) call compile preprocessfilelinenumbers 'Rebalancemod\Gear\YougostanEuropeGoverment\Conscripts\SetRiflemanKit.sqf';";
		};
	};
	class Seon_YougostanEuropeGoverment_RiflemanWithRpg : Seon_YougostanEuropeGoverment_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Seon_Yougustan_ProNato_Infantry";
		editorSubcategory = "Seon_Yougustan_Pro_Nato_Infantry_Conscripts";
		displayName = "At gunner";
		class EventHandlers
		{
			init = "(_this) call compile preprocessfilelinenumbers 'Rebalancemod\Gear\YougostanEuropeGoverment\Conscripts\SetRpgRiflemanKit.sqf';";
		};
	};
	class Seon_YougostanEuropeGoverment_Medic : Seon_YougostanEuropeGoverment_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Seon_Yougustan_ProNato_Infantry";
		editorSubcategory = "Seon_Yougustan_Pro_Nato_Infantry_Conscripts";
		displayName = "Medic";
		class EventHandlers
		{
			init = "(_this) call compile preprocessfilelinenumbers 'Rebalancemod\Gear\YougostanEuropeGoverment\Conscripts\SetMedicKit.sqf';";
		};
	};

	class Seon_YougostanRusGoverment_Base : B_Soldier_F
	{
		scope = 0;
		side = 0;
		faction = "Seon_Yougustan_Pro_Rus";
		genericNames = "RussianMen";
		identitytypes[] =
			{
				"LanguageRUS",
				"Head_Euro"};
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG : UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba : UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles : UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear : UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
		modelSides[] = {6};
		linkedItems[] =
			{
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"};
		respawnLinkedItems[] =
			{
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"};
	};

	class Seon_YougostanRusGoverment_SquadLeader : Seon_YougostanRusGoverment_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Seon_Yougustan_ProRus_Infantry";
		editorSubcategory = "Seon_Yougustan_Pro_Rus_Infantry_Conscripts";
		displayName = "SquadLeader";
		class EventHandlers
		{
			init = "(_this) call compile preprocessfilelinenumbers 'Rebalancemod\Gear\YougostanRusGoverment\Conscripts\SetSquadLeaderKit.sqf';";
		};
	};
	class Seon_YougostanRusGoverment_LightMg : Seon_YougostanRusGoverment_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Seon_Yougustan_ProRus_Infantry";
		editorSubcategory = "Seon_Yougustan_Pro_Rus_Infantry_Conscripts";
		displayName = "Light Machine gunner";
		class EventHandlers
		{
			init = "(_this) call compile preprocessfilelinenumbers 'Rebalancemod\Gear\YougostanRusGoverment\Conscripts\SetLightMgKit.sqf';";
		};
	};
	class Seon_YougostanRusGoverment_Rifleman : Seon_YougostanRusGoverment_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Seon_Yougustan_ProRus_Infantry";
		editorSubcategory = "Seon_Yougustan_Pro_Rus_Infantry_Conscripts";
		displayName = "Rifleman";
		class EventHandlers
		{
			init = "(_this) call compile preprocessfilelinenumbers 'Rebalancemod\Gear\YougostanRusGoverment\Conscripts\SetRiflemanKit.sqf';";
		};
	};
	class Seon_YougostanRusGoverment_RiflemanWithRpg : Seon_YougostanRusGoverment_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Seon_Yougustan_ProRus_Infantry";
		editorSubcategory = "Seon_Yougustan_Pro_Rus_Infantry_Conscripts";
		displayName = "At gunner";
		class EventHandlers
		{
			init = "(_this) call compile preprocessfilelinenumbers 'Rebalancemod\Gear\YougostanRusGoverment\Conscripts\SetRpgRiflemanKit.sqf';";
		};
	};
	class Seon_YougostanRusGoverment_Medic : Seon_YougostanRusGoverment_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Seon_Yougustan_ProRus_Infantry";
		editorSubcategory = "Seon_Yougustan_Pro_Rus_Infantry_Conscripts";
		displayName = "Medic";
		class EventHandlers
		{
			init = "(_this) call compile preprocessfilelinenumbers 'Rebalancemod\Gear\YougostanRusGoverment\Conscripts\SetMedicKit.sqf';";
		};
	};
};