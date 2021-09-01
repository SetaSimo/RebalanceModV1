class CfgVehicles {
	class Land;	
	class Man : Land {
		class ViewPilot;	// External class reference
		
		class HitPoints {
			class HitHead {};
			
			class HitBody {};
			
			class HitHands {};
			
			class HitLegs {};
		};
	};

	class CAManBase : Man {
		class ViewPilot : ViewPilot {
			minFov=0.5;
			maxFov=0.7;
			initFov=0.7;
		};
		class HitPoints;	// External class reference
		class HitHead;	// External class reference
		class HitBody;	// External class reference
		class HitHands;	// External class reference
		class HitLegs;	// External class reference
	};




};