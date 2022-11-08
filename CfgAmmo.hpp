class cfgAmmo
{
	// rifle ammo

	class BulletBase;
    class FlareCore;	
	class RocketBase;
	class GrenadeHand_stone;

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
	
	class rhs_ammo_base_penetrator;

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

	//5.45
	class rhs_B_545x39_Ball: B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		caliber = 1.1;
		ACE_bulletMass=3.62;
	};
	class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		caliber = 1.2;
		ACE_bulletMass=3.62;
	};
	class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		caliber = 1.6;
		ACE_bulletMass=3.65;
	};
	class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball
	{

		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		caliber = 1.65;
		ACE_bulletMass=4.1;
	};
	class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		ACE_bulletMass=3.23;
	};

	//x54
	class rhs_B_762x54_Ball: B_762x51_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		caliber = 1.55;
		ACE_bulletMass=9.6;
	};
	class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		caliber = 1.55;
		ACE_bulletMass=9.65;
	};
	class rhs_B_762x54_7N13_Ball: rhs_B_762x54_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		caliber = 1.55;
		ACE_bulletMass=9.4;
	};
	class rhs_B_762x54_7N26_Ball: rhs_B_762x54_Ball
	{
		model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		caliber = 1.75;
		ACE_bulletMass=9.8;
	};

	//762x39
	class rhs_B_762x39_Ball: B_762x51_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 1.6;
		ACE_bulletMass= 7.9;
	};
	class rhs_B_762x39_Ball_89: rhs_B_762x39_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 1.6;
		ACE_bulletMass=7.9;
	};
	class rhs_B_762x39_Tracer: rhs_B_762x39_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 1.6;
		ACE_bulletMass=7.6;
	};

	class rhs_B_762x39_U_Ball : rhs_B_762x39_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 1;
		ACE_bulletMass=12.55;
	};

	//12,7х108
	class rhs_ammo_127x107mm : B_127x108_Ball
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 2.79;	
		//ACE_bulletMass=290 ;

	};

	class rhs_ammo_127x108mm : rhs_ammo_127x107mm
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 2.79;	
	};

	class rhs_ammo_127x108mm_notracer : rhs_ammo_127x108mm {
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 2.79;	
	};

	class rhs_ammo_127x108mm_x5: SubmunitionBase
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 2.79;	
	};

	class rhs_ammo_127x108mm_1SLT : rhs_ammo_127x108mm_x5
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 2.79;	
	};

	class rhs_ammo_127x108mm_1SLT_x5 : rhs_ammo_127x108mm_x5
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		caliber = 2.79;	
	};

	// 5.56
	class rhs_ammo_556x45_M855A1_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.25;
	};

	class rhs_ammo_556x45_M855A1_Ball_Red : rhs_ammo_556x45_M855A1_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.25;
	};

	class rhs_ammo_556x45_M855A1_Ball_Green : rhs_ammo_556x45_M855A1_Ball_Red
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.25;
	};

	class rhs_ammo_556x45_M855A1_Ball_Yellow : rhs_ammo_556x45_M855A1_Ball_Red
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.25;
	};
	class rhs_ammo_556x45_M855A1_Ball_Orange : rhs_ammo_556x45_M855A1_Ball_Red
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.25;
	};

	class rhs_ammo_556x45_M855_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.3;
	};

	class rhs_ammo_556x45_M855_Ball_Red : rhs_ammo_556x45_M855_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.3;
	};

	class rhs_ammo_556x45_M855_Ball_Green : rhs_ammo_556x45_M855_Ball_Red
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.25;
	};

	class rhs_ammo_556x45_M855_Ball_Yellow : rhs_ammo_556x45_M855_Ball_Red
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.3;
	};

	class rhs_ammo_556x45_M855_Ball_Orange : rhs_ammo_556x45_M855_Ball_Red
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.3;
	};

	class rhs_ammo_556x45_Mk318_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.25;
	};

	class rhs_ammo_556x45_Mk262_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.25;
	};

	class rhs_ammo_556x45_M193_Ball : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.25;
	};

	class rhs_ammo_556x45_M196_Ball_Red : rhs_ammo_556x45_M193_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.25;
	};

	class rhs_ammo_556x45_M995_AP : B_556x45_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.13;
		caliber = 1.65;
	};


	//51

	class rhs_ammo_762x51_M80_Ball: BulletBase
	{
		model = "\vtn_tracer_md\vtn_tracer_red_long";
		tracerScale=1.13;
		caliber = 1.575;
	};

	// M61  AP used against light vehicles (mainly by CAAT platoons)
	class rhs_ammo_762x51_M61_AP: rhs_ammo_762x51_M80_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red_long";
		tracerScale=1.13;
		caliber = 1.725;
	};

	// M62 tracer / signal
	class rhs_ammo_762x51_M62_tracer: rhs_ammo_762x51_M80_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red_long";
		tracerScale=1.13;
		caliber = 1.575;
	};

	// M80A1EPR ball standard
	class rhs_ammo_762x51_M80A1EPR_Ball: rhs_ammo_762x51_M80_Ball
	{
		model = "\vtn_tracer_md\vtn_tracer_red_long";
		tracerScale=1.13;
		caliber = 1.670;
	};








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

	class rhs_ammo_792x57_Ball: BulletBase
	{

		model = "\vtn_tracer_md\vtn_tracer_red_long";
		tracerScale=1.411;

	};

	class rhs_ammo_762x63_M2B_ball: BulletBase
	{

		model 	= "\vtn_tracer_md\vtn_tracer_red";
		tracerScale=1.3001;

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
	//грамы/грамы
	class rhs_ammo_rgd5 : GrenadeHand
	{
		ace_frag_enabled = 1;
        ace_frag_metal = 310;
        ace_frag_charge = 110;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_small_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
	};

		class rhs_ammo_f1: GrenadeHand{
        ace_frag_enabled = 1;
        ace_frag_metal = 600;
        ace_frag_charge = 60;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_small_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
		};


	class rhs_ammo_rgn : rhs_ammo_rgd5
	{
	};
	class rhs_ammo_rgo : rhs_ammo_rgn
	{  
	};

	/*class rhs_ammo_rgn_impact : rhs_ammo_rgn
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

	class rhs_ammo_rgo_impact : rhs_ammo_rgo
	{
        ace_frag_enabled = 1;
        ace_frag_metal = 300;
        ace_frag_charge = 130;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_small_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
	};*/


	class rhs_grenade_vog17_ammo: GrenadeHand{		
		indirectHit = 5;
		indirectHitRange = 1.5;
		ace_frag_metal = 244;     
		ace_frag_charge = 36;    
		ace_frag_gurney_c = 2830 ; 
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
	};
	//placeholder
	class rhs_grenade_vog25_ammo: GrenadeHand 
	{
		indirectHit = 6;
		indirectHitRange = 1.9;
		ace_frag_metal = 235;    
		ace_frag_charge = 40;   
		ace_frag_gurney_c = 2830 ; 
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
	};


	class rhs_ammo_m67: GrenadeHand
	{
		ace_frag_metal = 400;    
		ace_frag_charge = 180;   
		ace_frag_gurney_c = 2700; 
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
	};


	class rhs_ammo_mk3a2: GrenadeHand
	{
		ace_frag_metal = 443;    
		ace_frag_charge = 225;   
		ace_frag_gurney_c = 2700; 
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
	};

	//Gp
	class G_40mm_HE;
	/*class G_40mm_HE{
		airFriction = -0.00046; 
		timeToLive = 60;
		ace_frag_metal = 190;     
		ace_frag_charge = 32;   
		ace_frag_gurney_c = 2700;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
		indirectHit = 5;
		indirectHitRange = 1.4;
	};*/
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

	class rhsusf_40mm_HE: G_40mm_HE {
		airFriction = -0.00046; 
		timeToLive = 60;
		ace_frag_metal = 190;     
		ace_frag_charge = 32;   
		ace_frag_gurney_c = 2700;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
		indirectHit = 5;
		indirectHitRange = 1.4;
	};

	class rhsusf_40mm_HEDP : rhsusf_40mm_HE
	{
		airFriction = -0.00046; 
		timeToLive = 60;
		ace_frag_metal = 230;     
		ace_frag_charge = 45;   
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
		indirectHit = 6;
		indirectHitRange = 1.8;
	};

	//Rockets
    class R_PG32V_F: RocketBase {};
    class rhs_rpg26_rocket: R_PG32V_F {};
    class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket {};
    class rhs_rpg7v2_tbg7v: rhs_rpg7v2_pg7vl {
        ace_frag_enabled = 1;
        ace_frag_metal = 4500;
        ace_frag_charge = 1800;
        ace_frag_gurney_c = 2900;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
	};

	class rhs_rshg2_rocket : rhs_rpg7v2_tbg7v{
        ace_frag_enabled = 1;
        ace_frag_metal = 3200;
        ace_frag_charge = 300;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
	};

    class rhs_rpg7v2_og7v: rhs_rpg7v2_pg7vl {
        ace_frag_enabled = 1;
        ace_frag_metal = 2000;
        ace_frag_charge = 400;
        ace_frag_gurney_c = 2900;
        ace_frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
        ace_frag_skip = 0;
        ace_frag_force = 1;
    };

	// mortars and artylleru
	/*class 8Rnd_82mm_Mo_shells{

	};

	class 32Rnd_155mm_Mo_shells{

	};*/

	//vtn
	class VTN_VOG25_HE: G_40mm_HE 
	{
		indirectHit = 6;
		indirectHitRange = 1.9;
		ace_frag_metal = 235;    
		ace_frag_charge = 40;   
		ace_frag_gurney_c = 2830 ; 
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
	};

	class VTN_VOG17A_HE: VTN_VOG25_HE{		
		indirectHit = 5;
		indirectHitRange = 1.5;
		ace_frag_metal = 244;     
		ace_frag_charge = 36;    
		ace_frag_gurney_c = 2830 ; 
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
	};

	class VTN_VOG30_HE: VTN_VOG17M_HE 
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

};