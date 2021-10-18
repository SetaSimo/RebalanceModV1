class cfgAmmo
{



	// rifle ammo

	class BulletBase;
	class rhs_ammo_base_penetrator;

	class B_556x45_Ball;
	class B_762x51_Ball;
	class B_762x54_Ball;
	class B_127x99_Ball;
	class B_127x108_Ball;
	class SubmunitionBase;
	

	class SmokeShell;
	class GrenadeHand;





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
		tracerScale=1.11;

	};
	class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		caliber = 1.2;
	};
	class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		caliber = 1.6;

	};
	class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		caliber = 1.65;
	};
	class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
	};

	class rhs_B_545x39_HP: rhs_B_545x39_Ball
	{
		caliber = 0.000000001;
		hit = 30;
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;

	};




	//x54
	class rhs_B_762x54_Ball: B_762x51_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		caliber = 1.55;
	};
	class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		caliber = 1.55;
	};
	class rhs_B_762x54_7N13_Ball: rhs_B_762x54_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		caliber = 1.55;
	};
	class rhs_B_762x54_7N26_Ball: rhs_B_762x54_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		caliber = 1.75;
	};
	class rhs_B_762x39_Ball: B_762x51_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 1.6;
	};
	class rhs_B_762x39_Ball_89: rhs_B_762x39_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 1.6;
	};
	class rhs_B_762x39_Tracer: rhs_B_762x39_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 1.6;
	};


//12,7х108


	class rhs_ammo_127x107mm : B_127x108_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 2.65;	

	};

	class rhs_ammo_127x108mm : rhs_ammo_127x107mm
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 2.65;	
	};
	class rhs_ammo_127x108mm_notracer : rhs_ammo_127x108mm {
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 2.65;	
	};
	class rhs_ammo_127x108mm_x5: SubmunitionBase
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 2.65;	
	};
	class rhs_ammo_127x108mm_1SLT : rhs_ammo_127x108mm_x5
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 2.65;	
	};
	class rhs_ammo_127x108mm_1SLT_x5 : rhs_ammo_127x108mm_x5
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 2.65;	
	};
	// 5.56


	class rhs_ammo_556x45_M193_Ball: B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.25;
	};

	class rhs_ammo_556x45_M196_Ball_Red: rhs_ammo_556x45_M193_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.25;
	};
	class rhs_ammo_556x45_M855_Ball: B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
	};
	class rhs_ammo_556x45_M855_Ball_Red: rhs_ammo_556x45_M855_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.3;
	};
	class rhs_ammo_556x45_M995_AP: B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.65;
	};


	//x51
	class rhs_ammo_762x51_M80_Ball: BulletBase
	{
		model = "\vtn_tracer_md\vtn_tracer_red_long";
		tracerScale=1.13;
		caliber = 1.575;
	};
	class rhs_ammo_762x51_M993_Ball: rhs_ammo_762x51_M80_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red_long";
		tracerScale=1.13;
		caliber = 1.725;
	};



	class rhs_ammo_762x63_M1T_tracer: BulletBase
	{
		model 	= "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.3001;
		caliber = 1.435;
	};

	//127x99
	class rhsusf_B_300winmag: B_762x54_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red_ball";
		tracerScale=1.13;
		caliber = 1.725;

	};

	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red_ball";
		tracerScale=1.13;
		caliber = 2.65;


	};
	class rhsusf_ammo_127x99_mk211 : rhsusf_ammo_127x99_M33_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red_ball";
		tracerScale=1.13;
		caliber = 2.65;		

	};





	//explosives and smokes

	class rhs_ammo_rgd5 : GrenadeHand
	{
	};
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

		class rhs_ammo_f1: GrenadeHand{
        ace_frag_enabled = 1;
        ace_frag_metal = 300;
        ace_frag_charge = 130;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_small_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
		};

	class rhs_ammo_rgn : rhs_ammo_rgd5
	{
        ace_frag_enabled = 1;
        ace_frag_metal = 190;
        ace_frag_charge = 100;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_small_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
	};

	class rhs_ammo_rgo : rhs_ammo_rgn
	{
        ace_frag_enabled = 1;
        ace_frag_metal = 300;
        ace_frag_charge = 130;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_small_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
	};




	class BN_G_40mm_HE: G_40mm_HE {
		airFriction = -0.00046; 
		timeToLive = 60;
		ace_frag_metal = 190;     
		ace_frag_charge = 45;   
		ace_frag_gurney_c = 2830 ;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
		indirectHit = 5;
		indirectHitRange = 1.4;
	};

	class rhs_ammo_VOG30: G_40mm_HE
	{
		indirectHit = 6;
		indirectHitRange = 1.9;
		airFriction = -0.00049;
		timeToLive = 60;
		ace_frag_metal = 235;    
		ace_frag_charge = 40;   
		ace_frag_gurney_c = 2830 ; 
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
	};
	class rhs_ammo_GPD30: rhs_ammo_VOG30
	{
		indirectHit = 6;
		indirectHitRange = 2;
		airFriction = -0.00049;
	};
	class rhs_ammo_VOG17m: rhs_ammo_VOG30 {
		indirectHit = 5;
		indirectHitRange = 1.5;
		airFriction = -0.00049;
		timeToLive = 60;
		ace_frag_metal = 244;     
		ace_frag_charge = 36;    
		ace_frag_gurney_c = 2830 ; 
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
		
	};

	//Rockets

    class R_PG32V_F: RocketBase {};
    class rhs_rpg26_rocket: R_PG32V_F {};
    class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket {};
    class rhs_rpg7v2_tbg7v: rhs_rpg7v2_pg7vl {};


	class rhs_rshg2_rocket : rhs_rpg7v2_tbg7v{
        ace_frag_enabled = 1;
        ace_frag_metal = 700;
        ace_frag_charge = 210;
        ace_frag_gurney_c = 3500;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;

	};

    class rhs_rpg7v2_og7v: rhs_rpg7v2_pg7vl {
        ace_frag_enabled = 1;
        ace_frag_metal = 1000;
        ace_frag_charge = 210;
        ace_frag_gurney_c = 2900;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };

/*
	class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
	};

	class rhs_B_762x39_Tracer : rhs_B_762x39_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;

	};

	class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;

	};



	// us


	class rhs_ammo_556x45_M193_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

	};


	class rhssaf_ammo_556x45_EPR: B_556x45_Ball 
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

	};
	class rhssaf_ammo_556x45_EPR_Tracer: rhssaf_ammo_556x45_EPR
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

	};
	class rhssaf_ammo_556x45_SOST: B_556x45_Ball 
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

	};
	class rhssaf_ammo_556x45_SPR: B_556x45_Ball 
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

	};

	class rhs_ammo_556x45_M855A1_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

	};


	class rhs_ammo_556x45_M995_AP : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

	};

	class rhs_ammo_556x45_M196_Ball_Red : rhs_ammo_556x45_M193_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

	};



	class rhs_ammo_556x45_Mk262_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

	};

	class rhs_ammo_556x45_Mk318_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

	};

	class rhs_ammo_556x45_M855_Ball : B_556x45_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

	};

	class rhs_ammo_556x45_M855_Ball_Red : rhs_ammo_556x45_M855_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

	};


	class rhs_ammo_556x45_M855_Ball_Green : rhs_ammo_556x45_M855_Ball_Red
	{

		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.13;

	};

	class rhs_ammo_556x45_M855_Ball_Yellow : rhs_ammo_556x45_M855_Ball_Red
	{

		model = "\vtn_tracer_md\vtn_tracer_yellow";
		tracerScale=1.13;

	};

	class rhs_ammo_556x45_M855_Ball_Orange : rhs_ammo_556x45_M855_Ball_Red
	{

		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;

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
		tracerScale=1.13;

	};

	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red_ball";
		tracerScale=1.13;

	};
	class rhsusf_ammo_127x99_mk211 : rhsusf_ammo_127x99_M33_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_red_ball";
		tracerScale=1.13;

	};

	class rhs_ammo_762x51_M80_Ball: BulletBase
	{


		model = "\vtn_tracer_md\vtn_tracer_red_long";
		tracerScale=1.13;

	};

*/








};