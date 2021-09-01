class cfgAmmo
{
	class SmokeShell;
	class rhs_ammo_rdg2_white: SmokeShell
	{
		effectsSmoke="RHS_SmokeShell_RGD2_White";
	};
	class rhs_ammo_rdg2_black: SmokeShell
	{
		effectsSmoke="RHS_SmokeShell_RGD2_White";
	};
	class rhs_ammo_m18_green: SmokeShell
	{
		effectsSmoke="RHS_SmokeShell_M18_Green";
	};


	// rifle ammo

	class BulletBase;
	class rhs_ammo_base_penetrator;

	class B_556x45_Ball;
	class B_762x51_Ball;
	class B_762x54_Ball;
	class B_127x99_Ball;

	






	class RocketBase;
	class GrenadeHand_stone;
	class F_40mm_White;
	class F_40mm_Green;
	class F_40mm_Red;
	class G_40mm_HE;
	class MissileCore;
	class MissileBase : MissileCore
	{
		class Components;
	};


	//5.45
	class rhs_B_545x39_Ball: B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.12;

	};
	class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.12;
	};
	class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.12;
	};
	class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.12;
	};
	class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.12;
	};

	// 5.56


	class rhs_B_762x54_Ball: B_762x51_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.401;
	};
	class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.401;
	};
	class rhs_B_762x54_7N13_Ball: rhs_B_762x54_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.401;
	};
	class rhs_B_762x54_7N26_Ball: rhs_B_762x54_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.401;
	};
	class rhs_B_762x39_Ball: B_762x51_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.2081;
	};
	class rhs_B_762x39_Ball_89: rhs_B_762x39_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.2081;
	};
	class rhs_B_762x39_Tracer: rhs_B_762x39_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.2081;
	};

	class rhs_ammo_556x45_M193_Ball: B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;
	};
	class rhs_ammo_556x45_M196_Ball_Red: rhs_ammo_556x45_M193_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;
	};
	class rhs_ammo_556x45_M855_Ball: B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;
	};
	class rhs_ammo_556x45_M855_Ball_Red: rhs_ammo_556x45_M855_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;
	};
	class rhs_ammo_556x45_M995_AP: B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;
	};
	class rhs_ammo_762x51_M80_Ball: BulletBase
	{
		model = "\vtn_tracer_md\vtn_tracer_red_long";
		tracerScale=1.14;
	};
	class rhs_ammo_762x51_M993_Ball: rhs_ammo_762x51_M80_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red_long";
		tracerScale=1.14;
	};



	class rhs_ammo_762x63_M1T_tracer: BulletBase
	{
		model 	= "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.3001;
	};


	class rhsusf_B_300winmag: B_762x54_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red_ball";
		tracerScale=1.14;

	};

	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red_ball";
		tracerScale=1.14;

	};
	class rhsusf_ammo_127x99_mk211 : rhsusf_ammo_127x99_M33_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red_ball";
		tracerScale=1.14;

	};







/*
	class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.12;
	};

	class rhs_B_762x39_Tracer : rhs_B_762x39_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.2081;

	};

	class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.401;

	};



	// us


	class rhs_ammo_556x45_M193_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};


	class rhssaf_ammo_556x45_EPR: B_556x45_Ball 
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};
	class rhssaf_ammo_556x45_EPR_Tracer: rhssaf_ammo_556x45_EPR
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};
	class rhssaf_ammo_556x45_SOST: B_556x45_Ball 
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};
	class rhssaf_ammo_556x45_SPR: B_556x45_Ball 
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};

	class rhs_ammo_556x45_M855A1_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};


	class rhs_ammo_556x45_M995_AP : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};

	class rhs_ammo_556x45_M196_Ball_Red : rhs_ammo_556x45_M193_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};



	class rhs_ammo_556x45_Mk262_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};

	class rhs_ammo_556x45_Mk318_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};

	class rhs_ammo_556x45_M855_Ball : B_556x45_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};

	class rhs_ammo_556x45_M855_Ball_Red : rhs_ammo_556x45_M855_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};


	class rhs_ammo_556x45_M855_Ball_Green : rhs_ammo_556x45_M855_Ball_Red
	{

		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.14;

	};

	class rhs_ammo_556x45_M855_Ball_Yellow : rhs_ammo_556x45_M855_Ball_Red
	{

		model = "\vtn_tracer_md\vtn_tracer_yellow";
		tracerScale=1.14;

	};

	class rhs_ammo_556x45_M855_Ball_Orange : rhs_ammo_556x45_M855_Ball_Red
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.14;

	};










	class rhs_ammo_792x57_Ball: BulletBase
	{

		model = "\vtn_tracer_md\vtn_tracer_red_long";
		tracerScale=1.411;

	};









	//serb ?

	class rhssaf_ammo_762x39_m82_api: rhs_B_762x39_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.3001;

	};

	class rhs_ammo_792x33_SmE_ball : BulletBase
	{

		model 	= "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.3001;

	};

	class rhs_ammo_762x63_M1T_tracer: BulletBase
	{

		model 	= "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.3001;

	};

	class rhs_ammo_762x63_M2B_ball: BulletBase
	{

		model 	= "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.3001;

	};


	// idk


	class rhsusf_B_300winmag: B_762x54_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red_ball";
		tracerScale=1.14;

	};

	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red_ball";
		tracerScale=1.14;

	};
	class rhsusf_ammo_127x99_mk211 : rhsusf_ammo_127x99_M33_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red_ball";
		tracerScale=1.14;

	};

	class rhs_ammo_762x51_M80_Ball: BulletBase
	{


		model = "\vtn_tracer_md\vtn_tracer_red_long";
		tracerScale=1.14;

	};

*/








};