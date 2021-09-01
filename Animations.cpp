class CfgMovesBasic {
	class default;
	class DefaultDie;
	class ManActions{
		Gesturearmst_clockl[]= {
			"Gesturearmst_clockl",
			"gesture"
		};
		Gesturecompass[]= {
			"Gesturecompass",
			"gesture"
		};
	};
};

class CfgGesturesMale {
	skeletonName="OFP2_ManSkeleton";
	class default;
	class States {
		class Gesturearmst_clockl: Default 
		{	
			canPullTrigger=1;
			disableWeapons=0;
			disableWeaponsLong=1;
			canReload=0;
			enableBinocular=0;
			enableMissile=0;
			headBobMode=2;
			headBobStrength=0;
			onLadder = 0;
			showHandGun = 0;
			looped=0;
			preload=1;
			showItemInHand=1;
			showItemInRightHand=0;
			showWeaponAim=0;
			terminal=0;
			rightHandIKCurve[] = {1, 1, 0.05, 1, 0.95, 1, 1, 1};
			leftHandIKCurve[] = {0.1};
			file="RebalanceMod\animations\armst_clockl.rtm";
			speed = 1;
			mask="LeftHand";			
		};
		class Gesturecompass: Default 
		{	
			canPullTrigger=1;
			disableWeapons=0;
			disableWeaponsLong=1;
			canReload=0;
			enableBinocular=0;
			enableMissile=0;
			headBobMode=2;
			headBobStrength=0;
			onLadder = 0;
			showHandGun = 0;
			looped=0;
			preload=1;
			showItemInHand=1;
			showItemInRightHand=0;
			showWeaponAim=0;
			terminal=0;
			rightHandIKCurve[] = {1, 1, 0.05, 1, 0.95, 1, 1, 1};
			leftHandIKCurve[] = {0.1};
			file="RebalanceMod\animations\armst_compass.rtm";
			speed = 1;
			mask="LeftHand";			
		};

	};
};










// class DefaultEventhandlers;
// class CfgMovesBasic
// {


// 	class Actions
// 	{
// 		class ManActions{

// 		Gesturearmst_clockl="Gesturearmst_clockl";
// 		Gesturecompass = "Gesturecompass";

// 		};


// 		class NoActions: ManActions
// 			{

// 				Gesturearmst_clockl[] = {"Gesturearmst_clockl", "Gesture"};
// 				Gesturecompass[] = {"Gesturecompass", "Gesture"};

// 		};

// 	};

// };

// class CfgGesturesMale
// {
// 	skeletonName="OFP2_ManSkeleton";

// 	class Default;
// 	class States
// 	{


// 		class Gesturearmst_clockl : Default
// 		{
// 			looped = 0;
// 			file = "RebalanceMod\animations\armst_clockl.rtm";
// 			speed = 1;
// 			mask = "LeftHand";
// 			rightHandIKCurve[] = {1, 1, 0.05, 1, 0.95, 1, 1, 1};
// 			leftHandIKCurve[] = {0.1};
// 		};

// 		class Gesturecompass : Default
// 		{
// 			looped = 0;
// 			file = "RebalanceMod\animations\armst_compass.rtm";
// 			speed = 1;
// 			mask = "LeftHand";
// 			rightHandIKCurve[] = {1, 1, 0.05, 1, 0.95, 1, 1, 1};
// 			leftHandIKCurve[] = {0.1};
// 		};
// 	};
// };