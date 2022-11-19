class CfgMovesBasic {
	class StandBase;
	class default;
	class DefaultDie;
	class ManActions{
			GestureRock[]={
				"GestureRock",
				"Gesture"
			};
			GesturePaper[]={
				"GesturePaper",
				"Gesture"
			};
			GestureScissors[]={
				"GestureScissors",
				"Gesture"
			};
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
			disableWeaponsLong=0;
			canReload = 1;
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
			disableWeaponsLong=0;
			canReload = 1;
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


		class GestureRock: Default
		{
			file="RebalanceMod\animations\stp_rock.rtm";
			looped=0;
			speed=0.55000001;
			enableOptics=1;
			canPullTrigger=1;
			canReload = 1;
			mask="leftHand";
			leftHandIKBeg=0;
			leftHandIKEnd=0;
			leftHandIKCurve[]={0.050000001};
			rightHandIKCurve[]={1};
		};
		class GesturePaper: GestureRock
		{
			file="RebalanceMod\animations\stp_paper.rtm";
		};
		class GestureScissors: GestureRock
		{
			file="RebalanceMod\animations\stp_scissors.rtm";
		};

	};
};