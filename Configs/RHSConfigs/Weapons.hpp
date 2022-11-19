/*
todo

mk18
Снайперские винтовки US
Дробовики
*/

/*
Вот так создаются макросы
https://community.bistudio.com/wiki/PreProcessor_Commands#Multi-line
*/

#define CREATECLASS(BASECLASS, HOLDCLASS, FOLDCLASS, NPZCLASS)                                      \
	class HOLDCLASS : BASECLASS                                                                     \
	{                                                                                               \
		scope = 1;                                                                                  \
		handAnim[] = {"OFP2_ManSkeleton", "\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"}; \
		rhs_fold = FOLDCLASS;                                                                       \
		rhs_npz = NPZCLASS;                                                                         \
	};

	class rhs_ammo_base_penetrator;

	class rhsusf_acc_sniper_base;
	class rhs_acc_sniper_base;

	class rhs_weap_fnfal_base : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};

	class rhs_weap_M1garand_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};

	class rhs_weap_m38_Base_F : Rifle_Base_F
	{
	};

	class rhs_weap_m70_base : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};

	class rhs_weap_m4_Base : arifle_MX_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "m16_recoil";
		WeaponLength= 1.8;

		class WeaponSlotsInfo;
	};

	class rhs_weap_ak74m_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
		WeaponLength= 1.88;

		magazines[] =
			{
				"rhs_30Rnd_545x39_AK",
				"rhs_30Rnd_545x39_7N6_AK",
				"rhs_30Rnd_545x39_AK_green",
				"rhs_30Rnd_545x39_AK_plum_green",
				"rhs_30Rnd_545x39_7N6M_AK",
				"rhs_30Rnd_545x39_7N10_AK",
				"rhs_30Rnd_545x39_7N22_Bakelite_AK",
				"rhs_30Rnd_545x39_7N24_Bakelite_AK",
				"rhs_30Rnd_545x39_7U1_Bakelite_AK",
				"rhs_30Rnd_545x39_7N6_green_AK",
				"rhs_30Rnd_545x39_7N10_AK_Green",
				"rhs_30Rnd_545x39_7N22_AK_Green",
				"rhs_30Rnd_545x39_7N24_AK_Green",
				"rhs_30Rnd_545x39_7U1_AK_Green",
				"rhs_30Rnd_545x39_7T3M_AK_Green",
				"rhs_30Rnd_545x39_7N6M_plum_AK",
				"rhs_30Rnd_545x39_7N10_AK",
				"rhs_30Rnd_545x39_7N10_plum_AK",
				"rhs_30Rnd_545x39_7N10_desert_AK",
				"rhs_30Rnd_545x39_7N6_AK_Deser",
				"rhs_30Rnd_545x39_7N24_AK_Deser",
				"rhs_30Rnd_545x39_7U1_AK_Deser",
				"rhs_30Rnd_545x39_7N10_camo_AK",
				"rhs_30Rnd_545x39_7N6_camo_AK",
				"rhs_30Rnd_545x39_7N24_camo_AK",
				"rhs_30Rnd_545x39_7U1_camo_AK",
				"rhs_30Rnd_545x39_7T3M_camo_AK",
				"rhs_30Rnd_545x39_7N22_AK",
				"rhs_30Rnd_545x39_7N22_plum_AK",
				"rhs_30Rnd_545x39_7N22_desert_AK",
				"rhs_30Rnd_545x39_7N22_camo_AK",
				"rhs_30Rnd_545x39_7U1_AK",
				"rhs_30Rnd_545x39_7N10_2mag_AK",
				"rhs_30Rnd_545x39_7N6_2mag_plum_AK",
				"rhs_30Rnd_545x39_7N10_2mag_plum_AK",
				"rhs_30Rnd_545x39_7N22_2mag_plum_AK",
				"rhs_30Rnd_545x39_7N24_2mag_plum_AK",
				"rhs_30Rnd_545x39_7NU1_2mag_plum_AK",
				"rhs_30Rnd_545x39_7T3M_2mag_plum_AK",
				"rhs_30Rnd_545x39_7N6_2mag_desert_AK",
				"rhs_30Rnd_545x39_7N10_2mag_desert_AK",
				"rhs_30Rnd_545x39_7N22_2mag_desert_AK",
				"rhs_30Rnd_545x39_7N24_2mag_desert_AK",
				"rhs_30Rnd_545x39_7NU1_2mag_desert_AK",
				"rhs_30Rnd_545x39_7T3M_2mag_desert_AK",
				"rhs_30Rnd_545x39_7N6_2mag_camo_AK",
				"rhs_30Rnd_545x39_7N10_2mag_camo_AK",
				"rhs_30Rnd_545x39_7N22_2mag_camo_AK",
				"rhs_30Rnd_545x39_7N24_2mag_camo_AK",
				"rhs_30Rnd_545x39_7NU1_2mag_camo_AK",
				"rhs_30Rnd_545x39_7N6_HP_2mag_camo_AK",
				"rhs_30Rnd_545x39_7N6_HP_2mag_desert_AK",
				"rhs_30Rnd_545x39_7N6_HP_2mag_plum_AK",
				"rhs_30Rnd_545x39_7N6_HP_2mag_AK",
				"rhs_30Rnd_545x39_7N6_HP_camo_AK",
				"rhs_30Rnd_545x39_7N6_HP_AK_Deser",
				"rhs_30Rnd_545x39_7N6_HP_AK_Green",
				"rhs_30Rnd_545x39_7N6_HP_AK"
			};
	};

	class rhs_weap_t5000{
		recoil = "m1garand_recoil";
		WeaponLength= 2.2;
	};

	// ww2
	class rhs_weap_m1garand_sa43 : rhs_weap_M1garand_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "m1garand_recoil";
		WeaponLength= 2;

		
	};

	class rhs_weap_m38 : rhs_weap_m38_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.5386;
		recoil = "m38_recoil";
		WeaponLength= 2;
	};

	class rhs_weap_m38_rail : rhs_weap_m38
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.5386;
		recoil = "m38_recoil";
		WeaponLength= 2;
	};

	class rhs_weap_m3a1_base : Rifle_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "m16_recoil";
		WeaponLength= 1.5; 
	};
	class rhs_weap_m3a1 : rhs_weap_m3a1_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "m16_recoil";
	};

	class rhs_weap_m3a1_specops : rhs_weap_m3a1_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "m16_recoil";
		WeaponLength= 1.6; 		
	};

	// sov
	class rhs_weap_ak74m : rhs_weap_ak74m_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";


	};

	class rhs_weap_ak74mr : rhs_weap_ak74m
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74m_zenitco01 : rhs_weap_ak74m_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74m_npz : rhs_weap_ak74m
	{
	};

	class rhs_weap_ak74m_gp25 : rhs_weap_ak74m
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74m_fullplum_gp25 : rhs_weap_ak74m_gp25
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74m_gp25_npz : rhs_weap_ak74m_gp25
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74m_fullplum_gp25_npz : rhs_weap_ak74m_gp25_npz
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74 : rhs_weap_ak74m
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74n_npz : rhs_weap_ak74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74n_2_npz : rhs_weap_ak74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74_2 : rhs_weap_ak74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74n : rhs_weap_ak74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74n_2 : rhs_weap_ak74n
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74_gp25 : rhs_weap_ak74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74n_gp25_npz : rhs_weap_ak74_gp25
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74n_2_gp25_npz : rhs_weap_ak74_gp25
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74n_gp25 : rhs_weap_ak74_gp25
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_ak74n_2_gp25 : rhs_weap_ak74n_gp25
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_aks74 : rhs_weap_ak74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};
	class rhs_weap_aks74_gp25 : rhs_weap_aks74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_aks74n_gp25 : rhs_weap_aks74_gp25
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_aks74n_gp25_npz : rhs_weap_aks74n_gp25
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_aks74_2 : rhs_weap_aks74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_aks74n : rhs_weap_aks74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_aks74n_2_npz : rhs_weap_aks74n
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_aks74n_npz : rhs_weap_aks74n
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};

	class rhs_weap_aks74n_2 : rhs_weap_aks74n
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak74_recoil";

		
	};
	class rhs_weap_aks74u : rhs_weap_aks74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "aks74u_recoil";

		
	};

	class rhs_weap_aks74un : rhs_weap_aks74u
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "aks74u_recoil";

		
	};

	class rhs_weap_ak105 : rhs_weap_ak74m
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak100_recoil";

		
	};

	class rhs_weap_ak105_npz : rhs_weap_ak105
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak100_recoil";

		
	};

	class rhs_weap_ak105_zenitco01 : rhs_weap_ak105
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak100_recoil";

		
	};

	class rhs_weap_ak105_zenitco01_b33 : rhs_weap_ak105_zenitco01
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "ak100_recoil";

		
	};

	class rhs_weap_akm : rhs_weap_ak74m
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akmm_recoil";
		WeaponLength= 1.81;
	};

	class rhs_weap_akm_gp25 : rhs_weap_akm
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akmm_recoil";

		
	};

	class rhs_weap_akmn : rhs_weap_akm
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akmm_recoil";

		
	};

	class rhs_weap_akm_zenitco01_b33 : rhs_weap_akmn
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akmm_recoil";

		
	};

	class rhs_weap_akmn_npz : rhs_weap_akmn
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akmm_recoil";

		
	};

	class rhs_weap_akmn_gp25 : rhs_weap_akmn
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akmm_recoil";

		
	};

	class rhs_weap_akmn_gp25_npz : rhs_weap_akmn_gp25
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akmm_recoil";

		
	};

	class rhs_weap_akms : rhs_weap_akm
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akmm_recoil";

		
	};

	class rhs_weap_akms_gp25 : rhs_weap_akm
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akmm_recoil";

		
	};

	class rhs_weap_pm63 : rhs_weap_akm
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akmm_recoil";	
	};

	class rhs_weap_ak103_base : rhs_weap_akm
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akm100_recoil";
		WeaponLength= 1.88;	
	};

	class rhs_weap_ak103 : rhs_weap_ak103_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akm100_recoil";

		
	};

	class rhs_weap_ak103_1 : rhs_weap_ak103_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akm100_recoil";

		
	};

	class rhs_weap_ak103_2 : rhs_weap_ak103_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akm100_recoil";

		
	};

	class rhs_weap_ak103_npz : rhs_weap_ak103_base
	{
		scope = 1;

		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akm100_recoil";

		
	};

	class rhs_weap_ak103_gp25 : rhs_weap_ak103_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akm100_recoil";

		
	};

	class rhs_weap_ak103_gp25_npz : rhs_weap_ak103_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akm100_recoil";

		
	};

	class rhs_weap_ak103_zenitco01 : rhs_weap_ak103_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akm100_recoil";

		
	};

	class rhs_weap_ak103_zenitco01_b33 : rhs_weap_ak103_zenitco01
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akm100_recoil";

		
	};

	class rhs_weap_ak104 : rhs_weap_ak103_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akmm_recoil";
		WeaponLength= 1.88;		
	};
	class rhs_weap_ak104_npz : rhs_weap_ak104
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akm100_recoil";

		
	};

	class rhs_weap_ak104_zenitco01 : rhs_weap_ak104
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akm100_recoil";

		
	};

	class rhs_weap_ak104_zenitco01_b33 : rhs_weap_ak104_zenitco01
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7541;
		recoil = "akm100_recoil";

		
	};

	class rhs_weap_rpk_base : Rifle_Long_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 1.6986;

		aimTransitionSpeed = 0.6999;
		recoil = "rpk74_recoil";
		WeaponLength= 1.99;	
	
		magazines[] =
			{
				"rhs_30Rnd_545x39_AK",
				"rhs_30Rnd_545x39_7N6_AK",
				"rhs_30Rnd_545x39_AK_green",
				"rhs_30Rnd_545x39_AK_plum_green",
				"rhs_30Rnd_545x39_7N6M_AK",
				"rhs_30Rnd_545x39_7N10_AK",
				"rhs_30Rnd_545x39_7N22_Bakelite_AK",
				"rhs_30Rnd_545x39_7N24_Bakelite_AK",
				"rhs_30Rnd_545x39_7U1_Bakelite_AK",
				"rhs_30Rnd_545x39_7N6_green_AK",
				"rhs_30Rnd_545x39_7N10_AK_Green",
				"rhs_30Rnd_545x39_7N22_AK_Green",
				"rhs_30Rnd_545x39_7N24_AK_Green",
				"rhs_30Rnd_545x39_7U1_AK_Green",
				"rhs_30Rnd_545x39_7T3M_AK_Green",
				"rhs_30Rnd_545x39_7N6M_plum_AK",
				"rhs_30Rnd_545x39_7N10_AK",
				"rhs_30Rnd_545x39_7N10_plum_AK",
				"rhs_30Rnd_545x39_7N10_desert_AK",
				"rhs_30Rnd_545x39_7N6_AK_Deser",
				"rhs_30Rnd_545x39_7N24_AK_Deser",
				"rhs_30Rnd_545x39_7U1_AK_Deser",
				"rhs_30Rnd_545x39_7N10_camo_AK",
				"rhs_30Rnd_545x39_7N6_camo_AK",
				"rhs_30Rnd_545x39_7N24_camo_AK",
				"rhs_30Rnd_545x39_7U1_camo_AK",
				"rhs_30Rnd_545x39_7T3M_camo_AK",
				"rhs_30Rnd_545x39_7N22_AK",
				"rhs_30Rnd_545x39_7N22_plum_AK",
				"rhs_30Rnd_545x39_7N22_desert_AK",
				"rhs_30Rnd_545x39_7N22_camo_AK",
				"rhs_30Rnd_545x39_7U1_AK",
				"rhs_30Rnd_545x39_7N10_2mag_AK",
				"rhs_30Rnd_545x39_7N6_2mag_plum_AK",
				"rhs_30Rnd_545x39_7N10_2mag_plum_AK",
				"rhs_30Rnd_545x39_7N22_2mag_plum_AK",
				"rhs_30Rnd_545x39_7N24_2mag_plum_AK",
				"rhs_30Rnd_545x39_7NU1_2mag_plum_AK",
				"rhs_30Rnd_545x39_7T3M_2mag_plum_AK",
				"rhs_30Rnd_545x39_7N6_2mag_desert_AK",
				"rhs_30Rnd_545x39_7N10_2mag_desert_AK",
				"rhs_30Rnd_545x39_7N22_2mag_desert_AK",
				"rhs_30Rnd_545x39_7N24_2mag_desert_AK",
				"rhs_30Rnd_545x39_7NU1_2mag_desert_AK",
				"rhs_30Rnd_545x39_7T3M_2mag_desert_AK",
				"rhs_30Rnd_545x39_7N6_2mag_camo_AK",
				"rhs_30Rnd_545x39_7N10_2mag_camo_AK",
				"rhs_30Rnd_545x39_7N22_2mag_camo_AK",
				"rhs_30Rnd_545x39_7N24_2mag_camo_AK",
				"rhs_30Rnd_545x39_7NU1_2mag_camo_AK",
				"rhs_30Rnd_545x39_7N6_HP_2mag_camo_AK",
				"rhs_30Rnd_545x39_7N6_HP_2mag_desert_AK",
				"rhs_30Rnd_545x39_7N6_HP_2mag_plum_AK",
				"rhs_30Rnd_545x39_7N6_HP_2mag_AK",
				"rhs_30Rnd_545x39_7N6_HP_camo_AK",
				"rhs_30Rnd_545x39_7N6_HP_AK_Deser",
				"rhs_30Rnd_545x39_7N6_HP_AK_Green",
				"rhs_30Rnd_545x39_7N6_HP_AK"
			};
	};

	class rhs_weap_rpk74_base : rhs_weap_rpk_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 1.6986;

		aimTransitionSpeed = 0.6999;
		recoil = "rpk74_recoil";

		
	};

	class rhs_weap_rpk74 : rhs_weap_rpk74_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 1.6986;

		aimTransitionSpeed = 0.6999;
		recoil = "rpk74_recoil";

		
	};

	class rhs_weap_rpk74n : rhs_weap_rpk74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 1.6986;

		aimTransitionSpeed = 0.6999;
		recoil = "rpk74_recoil";

		
	};

	class rhs_weap_rpk74m : rhs_weap_rpk74n
	{
		inertia = 1.3003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "rpk74_recoil";

		
	};

	class rhs_weap_rpk74m_npz : rhs_weap_rpk74m
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "rpk74_recoil";

		
	};

	class rhs_pkp_base : Rifle_Long_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6;
		recoil = "pkm_recoil";
		WeaponLength= 2;	
		
	};

	class rhs_weap_pkp : rhs_pkp_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6;
		recoil = "pkm_recoil";

		
	};

	class rhs_weap_pkm : rhs_weap_pkp
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6;
		recoil = "pkm_recoil";

		
	};

	class rhs_weap_svd : rhs_weap_ak74m
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.9006;
		recoil = "svds_recoil";
		WeaponLength= 2.1;	
		
	};
	class rhs_weap_svdp : rhs_weap_svd
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.9006;
		recoil = "svds_recoil";

		
	};

	class rhs_weap_svdp_npz : rhs_weap_svdp
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.9006;
		recoil = "svds_recoil";

		
	};

	class rhs_weap_svds : rhs_weap_svdp
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.9006;
		recoil = "svds_recoil";

		
	};

	class rhs_weap_svds_npz : rhs_weap_svds
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.9006;
		recoil = "svds_recoil";

		
	};

	class CUP_srifle_SVD : Rifle_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.9006;
		recoil = "svds_recoil";

		
	};
	class CUP_srifle_SVD_top_rail : CUP_srifle_SVD
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.9006;
		recoil = "svds_recoil";

		
	};

	class CUP_srifle_SVD_des : CUP_srifle_SVD
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.9006;
		recoil = "svds_recoil";

		
	};

	class CUP_srifle_SVD_wdl : CUP_srifle_SVD
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.9006;
		recoil = "svds_recoil";

		
	};

	class CUP_srifle_SVD_des_top_rail : CUP_srifle_SVD_top_rail
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.9006;
		recoil = "svds_recoil";

		
	};

	class CUP_srifle_SVD_wdl_top_rail : CUP_srifle_SVD_top_rail
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.9006;
		recoil = "svds_recoil";

		
	};

	class rhs_weap_t5000_woodland : rhs_weap_t5000
	{
		author = "Potato";
		baseWeapon = "rhs_weap_t5000_woodland";
		scope = 2;
		displayName = $STR_T_5000_Woodland;
		model = "\rhsafrf\addons\rhs_weapons3\orsis\rhs_t5000.p3d";
		hiddenSelectionsTextures[] = {"\RebalanceMod\textures\t5000woodland_co.paa"};
	};
	class rhs_weap_t5000_winter : rhs_weap_t5000
	{
		author = "Potato";
		baseWeapon = "rhs_weap_t5000_winter";
		scope = 2;
		displayName = $STR_T_5000_Winter;
		model = "\rhsafrf\addons\rhs_weapons3\orsis\rhs_t5000.p3d";
		hiddenSelectionsTextures[] = {"\RebalanceMod\textures\t5000winter_co.paa"};
	};

	class rhs_weap_asval : rhs_weap_ak74m
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		aimTransitionSpeed = 0.7006;
		inertia = 2.4003;
		dexterity = 2.1129;

		
	};
	class rhs_weap_asval_grip : rhs_weap_asval
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		aimTransitionSpeed = 0.7006;
		inertia = 2.4003;
		dexterity = 2.1129;

		
	};

	class rhs_weap_asval_grip_npz : rhs_weap_asval_grip
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		aimTransitionSpeed = 0.7006;
		inertia = 2.4003;
		dexterity = 2.1129;

		
	};

	class rhs_weap_asval_npz : rhs_weap_asval
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		aimTransitionSpeed = 0.7006;
		inertia = 2.4003;
		dexterity = 2.1129;

		
	};

	class rhs_weap_vss : rhs_weap_asval
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		aimTransitionSpeed = 0.7006;
		inertia = 2.4003;
		dexterity = 2.1129;

		
	};

	class rhs_weap_vss_npz : rhs_weap_vss
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		aimTransitionSpeed = 0.7006;
		inertia = 2.4003;
		dexterity = 2.1129;

		
	};

	////////////// folded
	class rhs_weap_rpk74m_folded : rhs_weap_rpk74m
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6986;
		recoil = "akmm_recoil";

		
	};

	class rhs_weap_aks74u_folded : rhs_weap_aks74u
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "aks74uFolded_recoil";

		
	};

	class rhs_weap_aks74un_folded : rhs_weap_aks74un
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "aks74uFolded_recoil";

		
	};
	class rhs_weap_ak74m_folded : rhs_weap_ak74m
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_ak74m_gp25_folded : rhs_weap_ak74m_folded
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_ak74mr_folded : rhs_weap_ak74mr
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_ak74mr_folded_grip1 : rhs_weap_ak74mr_folded
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};
	class rhs_weap_ak74mr_folded_afg : rhs_weap_ak74mr_folded
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_ak105_folded : rhs_weap_ak105
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_akms_folded : rhs_weap_akms
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "akmmFolded_recoil";

		
	};

	class rhs_weap_ak103_folded : rhs_weap_ak103
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_ak103_zenitco01_folded : rhs_weap_ak103_zenitco01
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_ak103_zenitco01_folded_grip1 : rhs_weap_ak103_zenitco01_folded
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_ak103_zenitco01_folded_afg : rhs_weap_ak103_zenitco01_folded
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_ak103_1_folded : rhs_weap_ak103_1
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_ak103_2_folded : rhs_weap_ak103_2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_ak104_folded : rhs_weap_ak104
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_aks74_folded : rhs_weap_aks74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_aks74_2_folded : rhs_weap_aks74_folded
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_aks74n_folded : rhs_weap_aks74
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_aks74n_2_folded : rhs_weap_aks74n_folded
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;
		recoil = "ak74Folded_recoil";

		
	};

	class rhs_weap_asval_folded : rhs_weap_asval
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;

		
	};

	class rhs_weap_asval_grip_folded : rhs_weap_asval_grip
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;

		
	};

	class rhs_weap_asval_folded_grip1 : rhs_weap_asval_grip_folded
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;

		
	};

	class rhs_weap_asval_folded_afg : rhs_weap_asval_grip_folded
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6006;

		
	};

	class rhs_weap_savz58_base : Rifle_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "akmm_recoil";

		WeaponLength= 1.8;
		
		ace_overheating_mrbs = 3000;
		aimTransitionSpeed = 0.4386;
	};

	class rhs_weap_savz58_ris_base : rhs_weap_savz58_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "akmm_recoil";

		
		ace_overheating_mrbs = 3000;
		aimTransitionSpeed = 0.4386;
	};

	class rhs_weap_savz58v_ris : rhs_weap_savz58_ris_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "akmm_recoil";

		
		ace_overheating_mrbs = 3000;
		aimTransitionSpeed = 0.4386;
	};

	class rhs_weap_savz58_rail_base : rhs_weap_savz58_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "akmm_recoil";

		
		ace_overheating_mrbs = 3000;
		aimTransitionSpeed = 0.4386;
	};

	class rhs_weap_savz58p : rhs_weap_savz58_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "akmm_recoil";

		
		ace_overheating_mrbs = 3000;
		aimTransitionSpeed = 0.4386;
	};

	class rhs_weap_savz58p_rail : rhs_weap_savz58_rail_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "akmm_recoil";

		
		ace_overheating_mrbs = 3000;
		aimTransitionSpeed = 0.4386;
	};

	class rhs_weap_savz58p_black : rhs_weap_savz58p
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "akmm_recoil";

		
		ace_overheating_mrbs = 3000;
		aimTransitionSpeed = 0.4386;
	};

	class rhs_weap_savz58p_rail_black : rhs_weap_savz58p_rail
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "akmm_recoil";

		
		ace_overheating_mrbs = 3000;
		aimTransitionSpeed = 0.4386;
	};

	class rhs_weap_savz58v : rhs_weap_savz58_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "akmm_recoil";

		
		ace_overheating_mrbs = 3000;
		aimTransitionSpeed = 0.4386;
	};

	class rhs_weap_savz58v_rail : rhs_weap_savz58_rail_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "akmm_recoil";

		
		ace_overheating_mrbs = 3000;
		aimTransitionSpeed = 0.4386;
	};

	class rhs_weap_savz58v_black : rhs_weap_savz58p
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "akmm_recoil";

		
		ace_overheating_mrbs = 3000;
		aimTransitionSpeed = 0.4386;
	};

	class rhs_weap_savz58v_rail_black : rhs_weap_savz58v_rail
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		recoil = "akmm_recoil";

		
		ace_overheating_mrbs = 3000;
		aimTransitionSpeed = 0.4386;
	};

	class rhs_weap_rpg7 : Launcher_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 4.0003;
		dexterity = 1.96129;
	};

	// NATO

	class rhs_weap_m16a4 : rhs_weap_m4_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";		
	};

	class rhs_weap_m16a4_imod : rhs_weap_m16a4
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m16a4_carryhandle : rhs_weap_m16a4
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		 //
	};

	class rhs_weap_m16a4_carryhandle_M203 : rhs_weap_m16a4
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m16a4_imod_M203 : rhs_weap_m16a4_carryhandle_M203
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m4 : rhs_weap_m4_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m4_mstock : rhs_weap_m4
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		 //
	};

	class rhs_weap_m4_carryhandle : rhs_weap_m4
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m4_carryhandle_mstock : rhs_weap_m4_carryhandle
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m4_m320 : rhs_weap_m4
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m4_m203 : rhs_weap_m4_m320
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		 //
	};

	class rhs_weap_m4_m203S : rhs_weap_m4_m203
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m4_carryhandle_m203 : rhs_weap_m4_m203
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m4_carryhandle_m203S : rhs_weap_m4_carryhandle_m203
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.799;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m21_base : rhs_weap_m70_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m21a : rhs_weap_m21_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m21a_pr : rhs_weap_m21_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m21a_pbg40 : rhs_weap_m21a
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m21a_pr_pbg40 : rhs_weap_m21_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m21s : rhs_weap_m21_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m21s_pr : rhs_weap_m21a_pr
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_l1a1_base : rhs_weap_fnfal_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "l1a1_recoil";

		
	};

	class rhs_weap_l1a1_wood_base : rhs_weap_l1a1_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "l1a1_recoil";

		
	};

	class rhs_weap_l1a1_wood : rhs_weap_l1a1_wood_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "l1a1_recoil";

		
	};

	class rhs_weap_l1a1 : rhs_weap_l1a1_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "l1a1_recoil";

		
	};

	class rhs_weap_m76 : rhs_weap_m70_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "svds_recoil";

		
	};

	class rhs_weap_mg42_base : Rifle_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "mg42_recoil";

		
	};

	class rhs_weap_mg42 : rhs_weap_mg42_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "mg42_recoil";

		
	};

	class rhs_weap_kar98k_Base_F : Rifle_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "l1a1_recoil";

		
	};

	class rhs_weap_kar98k : rhs_weap_kar98k_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "l1a1_recoil";

		
	};

	class rhs_weap_MP44_base : Rifle_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "l1a1_recoil";

		
	};

	class rhs_weap_MP44 : rhs_weap_MP44_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "l1a1_recoil";

		
	};

	class LMG_Mk200_F : Rifle_Long_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.88;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_M249_base : LMG_Mk200_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";
		WeaponLength= 2.12;
		
	};

	class rhs_weap_saw_base : Rifle_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";
		WeaponLength= 1.9;	
	};

	class rhs_weap_lmg_minimipara : rhs_weap_saw_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_lmg_minimi_railed : rhs_weap_lmg_minimipara
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m249 : rhs_weap_lmg_minimi_railed
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m249_pip : rhs_weap_lmg_minimi_railed
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "m16_recoil";

		
	};

	class rhs_weap_m240_base : rhs_weap_M249_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "aks74u_recoil";		
	};

	class rhs_weap_m240B : rhs_weap_m240_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "aks74u_recoil";

		
	};

	class rhs_weap_m240G : rhs_weap_m240_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "aks74u_recoil";

		
	};

	class rhs_weap_fnmag_base : rhs_weap_m240_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "aks74u_recoil";
		WeaponLength= 2.13;
		
	};

	class rhs_weap_fnmag : rhs_weap_fnmag_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6999;
		recoil = "aks74u_recoil";

		
	};

	class rhs_weap_vhs2_base : Rifle_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "m16_recoil";	
	};

	class rhs_weap_vhsd2_ct15x : rhs_weap_vhs2_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "m16_recoil";
	};

	class rhs_weap_vhsd2_bg_ct15x : rhs_weap_vhsd2_ct15x
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "m16_recoil";

		
	};

	class EBR_base_F : Rifle_Long_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.74;
		recoil = "m14_recoil";
		WeaponLength= 2.15;
		
	};

	class srifle_EBR_F : EBR_base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.74;
		recoil = "m14_recoil";
		WeaponLength= 2.1;
	};

	class rhs_weap_m14_base : srifle_EBR_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.74;
		recoil = "m14_recoil";

		
	};

	class rhs_weap_m14 : rhs_weap_m14_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.74;
		recoil = "m14_recoil";

		
	};

	class rhs_weap_m14_fiberglass : rhs_weap_m14
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.74;
		recoil = "m14_recoil";

		
	};

	class rhs_weap_SCAR_Base : arifle_MX_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarML_recoil";
		
	};

	class rhs_weap_SCAR_H_Base : rhs_weap_SCAR_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarML_recoil";

		
	};

	class rhs_weap_SCAR_H_STD_Base : rhs_weap_SCAR_H_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarML_recoil";

		
	};

	class rhs_weap_SCARH_STD : rhs_weap_SCAR_H_STD_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarML_recoil";

		
	};

	class rhs_weap_SCARH_FDE_STD : rhs_weap_SCAR_H_STD_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarML_recoil";

		
	};

	class rhs_weap_mk17_STD : rhs_weap_SCAR_H_STD_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarML_recoil";
		WeaponLength= 1.8;		
	};

	class rhs_weap_SCAR_H_LB_Base : rhs_weap_SCAR_H_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarLR_recoil";
		WeaponLength= 2;
		
	};

	class rhs_weap_mk17_LB : rhs_weap_SCAR_H_LB_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarLR_recoil";

		
	};

	class rhs_weap_SCARH_LB : rhs_weap_SCAR_H_LB_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarLR_recoil";		
	};

	class rhs_weap_SCARH_FDE_LB : rhs_weap_SCARH_LB
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarLR_recoil";

		
	};

	class rhs_weap_SCAR_H_CQC_Base : rhs_weap_SCAR_H_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarSqb_recoil";
		WeaponLength= 1.5;	
	};

	class rhs_weap_SCARH_CQC : rhs_weap_SCAR_H_CQC_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarSqb_recoil";

		
	};

	class rhs_weap_SCARH_FDE_CQC : rhs_weap_SCARH_CQC
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.96;
		recoil = "ScarSqb_recoil";

		
	};

	class rhs_weap_mk17_CQC : rhs_weap_SCAR_H_CQC_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.84;
		recoil = "ScarSqb_recoil";

		
	};

	class rhs_weap_m4a1 : rhs_weap_m4_Base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.84;
		recoil = "m16_recoil";

		 //
	};

	class rhs_weap_m4a1_carryhandle : rhs_weap_m4a1
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.84;
		recoil = "m16_recoil";

		 //
	};

	class rhs_weap_m4a1_carryhandle_mstock : rhs_weap_m4a1_carryhandle
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.84;
		recoil = "m16_recoil";

		 //
	};

	class rhs_weap_m4a1_m203 : rhs_weap_m4a1
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.84;
		recoil = "m16_recoil";

		 //
	};

	class rhs_weap_m4a1_carryhandle_m203 : rhs_weap_m4a1_m203
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.84;
		recoil = "m16_recoil";

		 //
	};

	class rhs_weap_m4a1_carryhandle_m203S : rhs_weap_m4a1_carryhandle_m203
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.84;
		recoil = "m16_recoil";

		 //
	};

	class rhs_weap_m4a1_m203s : rhs_weap_m4a1_m203
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.84;
		recoil = "m16_recoil";

		 //
	};

	class rhs_weap_m4a1_m320 : rhs_weap_m4a1
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.84;
		recoil = "m16_recoil";

		 //
	};

	class rhs_weap_m27iar : rhs_weap_m4a1
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.84;
		recoil = "m14_recoil";
		WeaponLength= 1.8;	
	};

	class rhs_weap_XM2010_Base_F : Rifle_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.84;
		recoil = "m24_recoil";
		
		// todo
	};

	class rhs_weap_XM2010 : rhs_weap_XM2010_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.84;
		recoil = "m24_recoil";
	};

	class rhs_weap_m24sws : rhs_weap_XM2010_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m24_recoil";
		WeaponLength= 2;
	};

	class rhs_weap_m24sws_d : rhs_weap_m24sws
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m24_recoil";
	};

	class rhs_weap_m24sws_wd : rhs_weap_m24sws
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m24_recoil";
	};

	class rhs_weap_m24sws_blk : rhs_weap_m24sws
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m24_recoil";
	};

	class rhs_weap_m24sws_ghillie : rhs_weap_m24sws
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m24_recoil";
	};

	class rhs_weap_m40a5 : rhs_weap_XM2010_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m40_recoil";
		WeaponLength= 2;	
	};

	class rhs_weap_m40a5_d : rhs_weap_m40a5
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m40_recoil";
	};

	class rhs_weap_m40a5_wd : rhs_weap_m40a5
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m40_recoil";
	};

	class rhs_weap_m14_rail_base : rhs_weap_m14_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m14_recoil";

		
	};

	class rhs_weap_m14_ris_base : rhs_weap_m14_rail_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m14_recoil";

		
	};

	class rhs_weap_m14_socom_base : rhs_weap_m14_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m14_recoil";

		
	};

	class rhs_weap_m14_socom_rail_base : rhs_weap_m14_socom_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m14_recoil";

		
	};

	class rhs_weap_m14ebrri_base : rhs_weap_m14_rail_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m14_recoil";

		
	};

	class rhs_weap_m14ebrri : rhs_weap_m14ebrri_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "m14_recoil";

		
	};

	class rhs_weap_sr25 : rhs_weap_m14ebrri
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "sr25_recoil";

		
	};

	class rhs_weap_sr25_ec : rhs_weap_sr25
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "sr25_recoil";

		
	};

	class rhs_weap_sr25_wd : rhs_weap_sr25
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "sr25_recoil";

		
	};

	class rhs_weap_sr25_ec_wd : rhs_weap_sr25_wd
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "sr25_recoil";

		
	};

	class rhs_weap_sr25_d : rhs_weap_sr25_wd
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "sr25_recoil";

		
	};

	class rhs_weap_sr25_ec_d : rhs_weap_sr25_d
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "sr25_recoil";

		
	};

	class rhs_weap_m110 : rhs_weap_sr25
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "sr25_recoil";

		
	};

	class GM6_base_F : Rifle_Long_Base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "sr25_recoil";

		
	};

	class rhs_weap_hk416d10 : rhs_weap_m4a1
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";
		WeaponLength= 1.8;	
	};

	class rhs_weap_hk416d10_grip : rhs_weap_hk416d10
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_grip2 : rhs_weap_hk416d10_grip
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_grip3 : rhs_weap_hk416d10_grip2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145 : rhs_weap_hk416d10
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_grip : rhs_weap_hk416d145
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_grip2 : rhs_weap_hk416d145_grip
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_grip3 : rhs_weap_hk416d145_grip2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_LMT : rhs_weap_hk416d10
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_LMT_grip : rhs_weap_hk416d10_LMT
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_LMT_grip2 : rhs_weap_hk416d10_LMT_grip
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_LMT_grip3 : rhs_weap_hk416d10_LMT_grip2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_m320 : rhs_weap_hk416d10
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_m320 : rhs_weap_hk416d145
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_LMT_d : rhs_weap_hk416d10_LMT
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_LMT_d_grip : rhs_weap_hk416d10_LMT_d
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_LMT_d_grip2 : rhs_weap_hk416d10_LMT_d_grip
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_LMT_d_grip3 : rhs_weap_hk416d10_LMT_d_grip2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_LMT_wd : rhs_weap_hk416d10_LMT
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_LMT_wd_grip : rhs_weap_hk416d10_LMT_wd
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_LMT_wd_grip2 : rhs_weap_hk416d10_LMT_wd_grip
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d10_LMT_wd_grip3 : rhs_weap_hk416d10_LMT_wd_grip2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_d : rhs_weap_hk416d145
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_d_grip : rhs_weap_hk416d145_d
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_d_grip2 : rhs_weap_hk416d145_d_grip
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_d_grip3 : rhs_weap_hk416d145_d_grip2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_d_2 : rhs_weap_hk416d145
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_d_2_grip : rhs_weap_hk416d145_d_2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_d_2_grip2 : rhs_weap_hk416d145_d_2_grip
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_d_2_grip3 : rhs_weap_hk416d145_d_2_grip2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_wd : rhs_weap_hk416d145
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_wd_grip : rhs_weap_hk416d145_wd
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_wd_grip2 : rhs_weap_hk416d145_wd_grip
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_wd_grip3 : rhs_weap_hk416d145_wd_grip2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_wd_2 : rhs_weap_hk416d145
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_wd_2_grip : rhs_weap_hk416d145_wd_2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_wd_2_grip2 : rhs_weap_hk416d145_wd_2_grip
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class rhs_weap_hk416d145_wd_2_grip3 : rhs_weap_hk416d145_wd_2_grip2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.8;
		recoil = "hk416_recoil";

		
	};

	class SMG_02_base_F : Rifle_Short_Base_F
	{
	};
	// todo
	class rhsusf_weap_MP7A1_base_f : SMG_02_base_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};

	class rhsusf_weap_MP7A2 : rhsusf_weap_MP7A1_base_f
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};

	class rhsusf_weap_MP7A2_grip1 : rhsusf_weap_MP7A2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};

	class rhsusf_weap_MP7A2_grip2 : rhsusf_weap_MP7A2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};

	class rhsusf_weap_MP7A2_grip3 : rhsusf_weap_MP7A2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};
	class rhsusf_weap_MP7A2_winter : rhsusf_weap_MP7A2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};

	class rhsusf_weap_MP7A2_winter_grip1 : rhsusf_weap_MP7A2_winter
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};
	class rhsusf_weap_MP7A2_winter_grip2 : rhsusf_weap_MP7A2_winter
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};
	class rhsusf_weap_MP7A2_winter_grip3 : rhsusf_weap_MP7A2_winter
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};

	class rhsusf_weap_MP7A2_desert : rhsusf_weap_MP7A2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};

	class rhsusf_weap_MP7A2_desert_grip1 : rhsusf_weap_MP7A2_desert
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};
	class rhsusf_weap_MP7A2_desert_grip2 : rhsusf_weap_MP7A2_desert
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};
	class rhsusf_weap_MP7A2_desert_grip3 : rhsusf_weap_MP7A2_desert
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};

	class rhsusf_weap_MP7A2_aor1 : rhsusf_weap_MP7A2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};
	class rhsusf_weap_MP7A2_aor1_grip1 : rhsusf_weap_MP7A2_aor1
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};
	class rhsusf_weap_MP7A2_aor1_grip2 : rhsusf_weap_MP7A2_aor1
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};
	class rhsusf_weap_MP7A2_aor1_grip3 : rhsusf_weap_MP7A2_aor1
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7006;
		recoil = "mp7_recoil";
	};

	// serb

	class rhs_weap_m70ab2 : rhs_weap_m70_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "akmm_recoil";	
		WeaponLength= 1.8;
	};

	class rhs_weap_m70ab2_fold : rhs_weap_m70ab2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "akmm_recoil";
		
	};

	class rhs_weap_m70b1 : rhs_weap_m70ab2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "akmm_recoil";
		
	};

	class rhs_weap_m70b1n : rhs_weap_m70ab2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "akmm_recoil";
		
	};

	class rhs_weap_m70b3n : rhs_weap_m70ab2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "akmm_recoil";
		
	};

	class rhs_weap_m70b3n_pbg40 : rhs_weap_m70ab2
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "akmm_recoil";
		
	};

	class rhs_weap_m92 : rhs_weap_m70_base
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "akmm_recoil";	
		WeaponLength= 1.8;
	};

	class rhs_weap_m92_fold : rhs_weap_m92
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.699;
		recoil = "akmm_recoil";
	};

	// GP/VOG/40mm

	class GP25_Base : UGL_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.7986;
		recoil = "vog_recoil";
	};

	class M203_GL : UGL_F
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6986;
		recoil = "M203_recoil";
	};

	class M320_GL : M203_GL
	{
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;

		inertia = 2.4003;
		dexterity = 2.1129;

		aimTransitionSpeed = 0.6986;
		recoil = "M203_recoil";
	};

	CREATECLASS(rhs_weap_ak74m, rhs_weap_ak74m_maghold, "rhs_weap_ak74m_folded_maghold", "rhs_weap_ak74m_npz_maghold");
	CREATECLASS(rhs_weap_ak74m_npz, rhs_weap_ak74m_npz_maghold, "rhs_weap_ak74m_folded_maghold", "rhs_weap_ak74m_maghold");
	CREATECLASS(rhs_weap_ak74m_folded, rhs_weap_ak74m_folded_maghold, "rhs_weap_ak74m_maghold", "rhs_weap_ak74m_npz_maghold");
	CREATECLASS(rhs_weap_ak74m_gp25, rhs_weap_ak74m_gp25_maghold, "rhs_weap_ak74m_gp25_folded_maghold", "rhs_weap_ak74m_gp25_npz_maghold");
	CREATECLASS(rhs_weap_ak74m_gp25_npz, rhs_weap_ak74m_gp25_npz_maghold, "rhs_weap_ak74m_gp25_folded_maghold", "rhs_weap_ak74m_gp25_maghold");
	CREATECLASS(rhs_weap_ak74m_gp25_folded, rhs_weap_ak74m_gp25_folded_maghold, "rhs_weap_ak74m_gp25_maghold", "rhs_weap_ak74m_gp25_npz_maghold");

	class rhs_weap_ak74m_gp25_pkas;
	class rhs_weap_ak74m_gp25_1p63;
	class rhs_weap_ak74m_gp25_pso1m2;
	class rhs_weap_ak74m_gp25_1p29;
	CREATECLASS(rhs_weap_ak74m_gp25_pkas, rhs_weap_ak74m_gp25_pkas_maghold, "rhs_weap_ak74m_gp25_folded_maghold", "rhs_weap_ak74m_gp25_maghold");
	CREATECLASS(rhs_weap_ak74m_gp25_1p63, rhs_weap_ak74m_gp25_1p63_maghold, "rhs_weap_ak74m_gp25_folded_maghold", "rhs_weap_ak74m_gp25_maghold");
	CREATECLASS(rhs_weap_ak74m_gp25_pso1m2, rhs_weap_ak74m_gp25_pso1m2_maghold, "rhs_weap_ak74m_gp25_folded_maghold", "rhs_weap_ak74m_gp25_maghold");
	CREATECLASS(rhs_weap_ak74m_gp25_1p29, rhs_weap_ak74m_gp25_1p29_maghold, "rhs_weap_ak74m_gp25_folded_maghold", "rhs_weap_ak74m_gp25_maghold");

	class rhs_weap_ak74m_camo;
	class rhs_weap_ak74m_camo_npz;
	class rhs_weap_ak74m_camo_folded;
	class rhs_weap_ak74m_camo_pkas;
	class rhs_weap_ak74m_camo_1p63;
	class rhs_weap_ak74m_camo_pso1m2;
	class rhs_weap_ak74m_camo_1p29;
	CREATECLASS(rhs_weap_ak74m_camo, rhs_weap_ak74m_camo_maghold, "rhs_weap_ak74m_camo_folded_maghold", "rhs_weap_ak74m_camo_npz_maghold");
	CREATECLASS(rhs_weap_ak74m_camo_npz, rhs_weap_ak74m_camo_npz_maghold, "rhs_weap_ak74m_camo_folded_maghold", "rhs_weap_ak74m_camo_maghold");
	CREATECLASS(rhs_weap_ak74m_camo_folded, rhs_weap_ak74m_camo_folded_maghold, "rhs_weap_ak74m_camo_maghold", "rhs_weap_ak74m_camo_npz_maghold");
	CREATECLASS(rhs_weap_ak74m_camo_pkas, rhs_weap_ak74m_camo_pkas_maghold, "rhs_weap_ak74m_camo_folded_maghold", "rhs_weap_ak74m_camo_maghold");
	CREATECLASS(rhs_weap_ak74m_camo_1p63, rhs_weap_ak74m_camo_1p63_maghold, "rhs_weap_ak74m_camo_folded_maghold", "rhs_weap_ak74m_camo_maghold");
	CREATECLASS(rhs_weap_ak74m_camo_pso1m2, rhs_weap_ak74m_camo_pso1m2_maghold, "rhs_weap_ak74m_camo_folded_maghold", "rhs_weap_ak74m_camo_maghold");
	CREATECLASS(rhs_weap_ak74m_camo_1p29, rhs_weap_ak74m_camo_1p29_maghold, "rhs_weap_ak74m_camo_folded_maghold", "rhs_weap_ak74m_camo_maghold");

	class rhs_weap_ak74m_desert;
	class rhs_weap_ak74m_desert_npz;
	class rhs_weap_ak74m_desert_folded;
	CREATECLASS(rhs_weap_ak74m_desert, rhs_weap_ak74m_desert_maghold, "rhs_weap_ak74m_desert_folded_maghold", "rhs_weap_ak74m_desert_npz_maghold");
	CREATECLASS(rhs_weap_ak74m_desert_npz, rhs_weap_ak74m_desert_npz_maghold, "rhs_weap_ak74m_desert_folded_maghold", "rhs_weap_ak74m_desert_maghold");
	CREATECLASS(rhs_weap_ak74m_desert_folded, rhs_weap_ak74m_desert_folded_maghold, "rhs_weap_ak74m_desert_maghold", "rhs_weap_ak74m_desert_npz_maghold");

	class rhs_weap_ak74m_fullplum;
	class rhs_weap_ak74m_fullplum_npz;
	class rhs_weap_ak74m_fullplum_folded;
	class rhs_weap_ak74m_fullplum_gp25_folded;
	CREATECLASS(rhs_weap_ak74m_fullplum, rhs_weap_ak74m_fullplum_maghold, "rhs_weap_ak74m_fullplum_folded_maghold", "rhs_weap_ak74m_fullplum_npz_maghold");
	CREATECLASS(rhs_weap_ak74m_fullplum_npz, rhs_weap_ak74m_fullplum_npz_maghold, "rhs_weap_ak74m_fullplum_folded_maghold", "rhs_weap_ak74m_fullplum_npz_maghold");
	CREATECLASS(rhs_weap_ak74m_fullplum_folded, rhs_weap_ak74m_fullplum_folded_maghold, "rhs_weap_ak74m_fullplum_maghold", "rhs_weap_ak74m_fullplum_npz_maghold");
	CREATECLASS(rhs_weap_ak74m_fullplum_gp25, rhs_weap_ak74m_fullplum_gp25_maghold, "rhs_weap_ak74m_fullplum_gp25_folded_maghold", "rhs_weap_ak74m_fullplum_gp25_npz_maghold");
	CREATECLASS(rhs_weap_ak74m_fullplum_gp25_npz, rhs_weap_ak74m_fullplum_gp25_npz_maghold, "rhs_weap_ak74m_fullplum_gp25_folded_maghold", "rhs_weap_ak74m_fullplum_gp25_maghold");
	CREATECLASS(rhs_weap_ak74m_fullplum_gp25_folded, rhs_weap_ak74m_fullplum_gp25_folded_maghold, "rhs_weap_ak74m_fullplum_gp25_maghold", "rhs_weap_ak74m_fullplum_gp25_npz_maghold");

	class rhs_weap_ak74m_zenitco01_grip1;
	class rhs_weap_ak74m_zenitco01_afg;
	class rhs_weap_ak74m_zenitco01_npz_grip1;
	class rhs_weap_ak74m_zenitco01_npz_afg;
	class rhs_weap_ak74m_zenitco01_b33_grip1;
	class rhs_weap_ak74m_zenitco01_b33_afg;
	CREATECLASS(rhs_weap_ak74m_zenitco01_grip1, rhs_weap_ak74m_zenitco01_grip1_maghold, "rhs_weap_ak74m_zenitco01_grip1_maghold", "rhs_weap_ak74m_zenitco01_npz_grip1_maghold");
	CREATECLASS(rhs_weap_ak74m_zenitco01_afg, rhs_weap_ak74m_zenitco01_afg_maghold, "rhs_weap_ak74m_zenitco01_afg_maghold", "rhs_weap_ak74m_zenitco01_npz_afg_maghold");
	CREATECLASS(rhs_weap_ak74m_zenitco01_npz_grip1, rhs_weap_ak74m_zenitco01_npz_grip1_maghold, "rhs_weap_ak74m_zenitco01_npz_grip1_maghold", "rhs_weap_ak74m_zenitco01_grip1_maghold");
	CREATECLASS(rhs_weap_ak74m_zenitco01_npz_afg, rhs_weap_ak74m_zenitco01_npz_afg_maghold, "rhs_weap_ak74m_zenitco01_npz_afg_maghold", "rhs_weap_ak74m_zenitco01_afg_maghold");
	CREATECLASS(rhs_weap_ak74m_zenitco01_b33_grip1, rhs_weap_ak74m_zenitco01_b33_grip1_maghold, "rhs_weap_ak74m_zenitco01_b33_grip1_maghold", "rhs_weap_ak74m_zenitco01_b33_grip1_maghold");
	CREATECLASS(rhs_weap_ak74m_zenitco01_b33_afg, rhs_weap_ak74m_zenitco01_b33_afg_maghold, "rhs_weap_ak74m_zenitco01_b33_afg_maghold", "rhs_weap_ak74m_zenitco01_b33_afg_maghold");