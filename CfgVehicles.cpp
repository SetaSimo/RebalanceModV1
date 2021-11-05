class CfgVehicles
{
	class Land;
	class Man : Land
	{
		class ViewPilot; // External class reference

		class HitPoints
		{
			class HitHead
			{
			};

			class HitBody
			{
			};

			class HitHands
			{
			};

			class HitLegs
			{
			};
		};
	};

	class CAManBase : Man
	{
		class ViewPilot : ViewPilot
		{
			minFov = 0.5;
			maxFov = 0.7;
			initFov = 0.7;
		};
		class HitPoints; // External class reference
		class HitHead;	 // External class reference
		class HitBody;	 // External class reference
		class HitHands;	 // External class reference
		class HitLegs;	 // External class reference

		class ACE_SelfActions
		{
			class po_Canteen_Actions
			{
				displayName = $STR_Cateen;
				condition = "";
				exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
				statement = "";
				showDisabled = 1;
				priority = 2.1;
				icon = "\RebalanceMod\pics\canteen_action_icon.paa";

				class po_Canteen_Drink
				{
					displayName = $STR_Drink_Cateen;
					condition = " 'ACE_WaterBottle_Half' in items _player || 'ACE_WaterBottle' in items _player || 'ACE_Canteen' in items _player || 'ACE_Canteen_Half' in items _player || 'ACE_Can_RedGull' in items _player || 'ACE_Can_Franta' in items _player || 'ACE_Can_Spirit' in items _player";
					exceptions[] = {};
					icon = "\po_canteen\canteen_action_icon.paa";
					statement = "[player] call po_canteen_fnc_canteenDrink";
					//icon = "\RebalanceMod\pics\canteen_action_icon_2.paa";
				}
			}
		};
		class ACE_Actions
		{
			class ACE_Head
			{
				class po_Pour_Water
				{
					displayName = $STR_Water_Heal;
					distance = 2.0;
					condition = "('ACE_WaterBottle_Half' in items _player || 'ACE_WaterBottle' in items _player || 'ACE_Canteen' in items _player || 'ACE_Canteen_Half' in items _player) && _target getVariable ['ACE_isUnconscious',false]";
					statement = "[player, _target] call po_canteen_fnc_pourWater";
					exceptions[] = {};
					showDisabled = 1;
					priority = 1;
					icon = "\RebalanceMod\pics\canteen_action_icon.paa";
				}
			}
		}
	};
};