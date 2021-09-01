class CfgMagazines
{
	class CA_Magazine;



    	class rhs_30Rnd_545x39_AK : CA_Magazine 
	{

		tracersEvery=3;
		lastRoundsTracer=3;
    };

	class rhs_30Rnd_545x39_7N6_AK : rhs_30Rnd_545x39_AK
	{

		tracersEvery=3;
		lastRoundsTracer=3;
    };        
	class rhs_30Rnd_545x39_7N10_AK : rhs_30Rnd_545x39_7N6_AK
	{

		tracersEvery=3;
		lastRoundsTracer=3;
    };




	class rhs_30Rnd_545x39_7N22_Bakelite_AK : rhs_30Rnd_545x39_7N6_AK
	{

		displayName					= $STR_Bak7N22;
		displayNameShort			= "7N22";
		ammo						= rhs_B_545x39_7N22_Ball;

		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class rhs_30Rnd_545x39_7N24_Bakelite_AK : rhs_30Rnd_545x39_7N6_AK
	{

		displayName					= $STR_Bak7N24;
		displayNameShort			= "7N24";
		ammo						= rhs_B_545x39_7N24_Ball;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7U1_Bakelite_AK : rhs_30Rnd_545x39_7N6_AK
	{

		displayName					= $STR_Bak7U1;
		displayNameShort			= "7U1";
		ammo						= rhs_B_545x39_7U1_Ball;

		tracersEvery=3;
		lastRoundsTracer=3;
	};



	//Бакелит зеленый


	class rhs_30Rnd_545x39_7N6_green_AK : rhs_30Rnd_545x39_7N6_AK
	{

		tracersEvery=3;
		lastRoundsTracer=3;
	};
	
	class rhs_30Rnd_545x39_7N10_AK_Green : rhs_30Rnd_545x39_AK
	{

		displayName					= $STR_Bak7N10;
		displayNameShort			= "7N10";
		ammo						= rhs_B_545x39_7N10_Ball;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N22_AK_Green : rhs_30Rnd_545x39_7N6_green_AK
	{

		displayName					= $STR_BakGreen7N22;
		displayNameShort			= "7N22";
		ammo						= rhs_B_545x39_7N22_Ball;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N24_AK_Green : rhs_30Rnd_545x39_7N6_green_AK
	{

		displayName					= $STR_BakGreen7N24;
		displayNameShort			= "7N24";
		ammo						= rhs_B_545x39_7N24_Ball;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7U1_AK_Green : rhs_30Rnd_545x39_7N6_green_AK
	{

		displayName					= $STR_BakGreen7U1;
		displayNameShort			= "7U1";
		ammo						= rhs_B_545x39_7U1_Ball;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7T3M_AK_Green : rhs_30Rnd_545x39_7N6_green_AK
	{

		displayName					= $STR_BakGreen7T3M;
		displayNameShort			= "7T3M Tracer";
		ammo						=rhs_B_545x39_Ball_Tracer_Green;
		tracersEvery				= 1;
	};

 




	// песчанный 
	class rhs_30Rnd_545x39_7N10_desert_AK : rhs_30Rnd_545x39_7N10_AK
	{

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N6_AK_Deser : rhs_30Rnd_545x39_7N10_desert_AK
	{

		displayName					= $STR_BakDesert7N6;
		displayNameShort			= "7N6";
		ammo						= rhs_B_545x39_7N6_Ball;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N24_AK_Deser : rhs_30Rnd_545x39_7N10_desert_AK
	{

		displayName					= $STR_BakDesert7N24;
		displayNameShort			= "7N24";
		ammo						= rhs_B_545x39_7N24_Ball;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7U1_AK_Deser : rhs_30Rnd_545x39_7N10_desert_AK
	{

		displayName					= $STR_BakDesert7U1;
		displayNameShort			= "7U1";
		ammo						= rhs_B_545x39_7U1_Ball;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7T3M_AK_Deser : rhs_30Rnd_545x39_7N10_desert_AK
	{

		displayName					= $STR_BakDesert7T3M;
		displayNameShort			= "7T3M Tracer";
		ammo						=rhs_B_545x39_Ball_Tracer_Green;
		tracersEvery				= 1;
	};


	//камуфляж



	class rhs_30Rnd_545x39_7N10_camo_AK : rhs_30Rnd_545x39_7N10_AK
	{

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N6_camo_AK : rhs_30Rnd_545x39_7N10_camo_AK
	{
		displayName					= $STR_BakCamo7N6;
		displayNameShort			= "7N6";
		ammo						= rhs_B_545x39_7N6_Ball;
		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N24_camo_AK : rhs_30Rnd_545x39_7N10_camo_AK
	{
		displayName					= $STR_BakCamo7N24;		
		displayNameShort			= "7N24";
		ammo						= rhs_B_545x39_7N24_Ball;
		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7U1_camo_AK : rhs_30Rnd_545x39_7N10_camo_AK
	{


		displayName					= $STR_BakCamo7U1;		
		displayNameShort			= "7U1";
		ammo						= rhs_B_545x39_7U1_Ball;
		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7T3M_camo_AK : rhs_30Rnd_545x39_7N10_camo_AK
	{
		displayName					= $STR_BakCamo7T3M;		
		displayNameShort			= "7T3M Tracer";
		ammo						=rhs_B_545x39_Ball_Tracer_Green;
		tracersEvery				= 1;

	};

		//

	class rhs_30Rnd_545x39_7N22_AK : rhs_30Rnd_545x39_7N10_AK
	{
		tracersEvery=3;
		lastRoundsTracer=3;
	};
		//


	class rhs_30Rnd_545x39_7N22_plum_AK : rhs_30Rnd_545x39_7N22_AK
	{
		tracersEvery=3;
		lastRoundsTracer=3;
	};



	class rhs_30Rnd_545x39_7N6_plum_AK : rhs_30Rnd_545x39_7N22_plum_AK
	{
		displayName					= $STR_BakPlum7N6;
		displayNameShort			= "7N6";
		ammo						= rhs_B_545x39_7N6_Ball;
		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N24_plum_AK : rhs_30Rnd_545x39_7N22_plum_AK
	{
		displayName					= $STR_BakPlum7N24;		
		displayNameShort			= "7N24";
		ammo						= rhs_B_545x39_7N24_Ball;
		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7U1_plum_AK : rhs_30Rnd_545x39_7N22_plum_AK
	{


		displayName					= $STR_BakPlum7U1;		
		displayNameShort			= "7U1";
		ammo						= rhs_B_545x39_7U1_Ball;
		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7T3M_plum_AK : rhs_30Rnd_545x39_7N22_plum_AK
	{
		displayName					= $STR_BakPlum7T3M;		
		displayNameShort			= "7T3M Tracer";
		ammo						=rhs_B_545x39_Ball_Tracer_Green;
		tracersEvery				= 1;

	};












	// спарки

	class rhs_30Rnd_545x39_7N10_2mag_AK : rhs_30Rnd_545x39_7N10_AK
	{
		mass						= 6,95;
		tracersEvery=3;
		lastRoundsTracer=3;
	};


	class rhs_30Rnd_545x39_7N6_2mag_AK : rhs_30Rnd_545x39_7N10_2mag_AK
	{

		displayName					= $STR_Spar7N6;
		displayNameShort			= "7N6";
		ammo						= rhs_B_545x39_7N6_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N22_2mag_AK : rhs_30Rnd_545x39_7N10_2mag_AK
	{

		displayName					= $STR_Spar7N22;
		displayNameShort			= "7N22";
		ammo						= rhs_B_545x39_7N22_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N24_2mag_AK : rhs_30Rnd_545x39_7N10_2mag_AK
	{

		displayName					= $STR_Spar7N24;
		displayNameShort			= "7N24";
		ammo						= rhs_B_545x39_7N24_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7NU1_2mag_AK : rhs_30Rnd_545x39_7N10_2mag_AK
	{

		displayName					= $STR_Spar7N6;
		displayNameShort			= "7U1";
		ammo						= rhs_B_545x39_7U1_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7T3M_2mag_AK : rhs_30Rnd_545x39_7N10_2mag_AK
	{

		displayName					= $STR_Spar7T3M;
		displayNameShort			= "7T3M Tracer";
		ammo						=rhs_B_545x39_Ball_Tracer_Green;
		tracersEvery				= 1;
		mass						= 6,95;



	};




	class rhs_30Rnd_545x39_7N10_2mag_plum_AK : rhs_30Rnd_545x39_7N10_2mag_AK
	{
		mass						= 6,95;
		tracersEvery=3;
		lastRoundsTracer=3;
	};






	class rhs_30Rnd_545x39_7N6_2mag_plum_AK : rhs_30Rnd_545x39_7N10_2mag_plum_AK
	{

		displayName					= $STR_Spar7N6Plum;
		displayNameShort			= "7N6";
		ammo						= rhs_B_545x39_7N6_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N22_2mag_plum_AK : rhs_30Rnd_545x39_7N10_2mag_plum_AK
	{

		displayName					= $STR_Spar7N22Plum;
		displayNameShort			= "7N22";
		ammo						= rhs_B_545x39_7N22_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N24_2mag_plum_AK : rhs_30Rnd_545x39_7N10_2mag_plum_AK
	{

		displayName					= $STR_Spar7N24Plum;
		displayNameShort			= "7N24";
		ammo						= rhs_B_545x39_7N24_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7NU1_2mag_plum_AK : rhs_30Rnd_545x39_7N10_2mag_plum_AK
	{

		displayName					= $STR_Spar7N6Plum;
		displayNameShort			= "7U1";
		ammo						= rhs_B_545x39_7U1_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7T3M_2mag_plum_AK : rhs_30Rnd_545x39_7N10_2mag_plum_AK
	{

		displayName					= $STR_Spar7T3MPlum;
		displayNameShort			= "7T3M Tracer";
		ammo						=rhs_B_545x39_Ball_Tracer_Green;
		tracersEvery				= 1;
		mass						= 6,95;


	};







	class rhs_30Rnd_545x39_7N10_2mag_desert_AK : rhs_30Rnd_545x39_7N10_AK
	{
		mass						= 6,95;
		tracersEvery=3;
		lastRoundsTracer=3;
	};





	class rhs_30Rnd_545x39_7N6_2mag_desert_AK : rhs_30Rnd_545x39_7N10_2mag_desert_AK
	{

		displayName					= $STR_Spar7N6Des;
		displayNameShort			= "7N6";
		ammo						= rhs_B_545x39_7N6_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N22_2mag_desert_AK : rhs_30Rnd_545x39_7N10_2mag_desert_AK
	{

		displayName					= $STR_Spar7N22Des;
		displayNameShort			= "7N22";
		ammo						= rhs_B_545x39_7N22_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N24_2mag_desert_AK : rhs_30Rnd_545x39_7N10_2mag_desert_AK
	{

		displayName					= $STR_Spar7N24Des;
		displayNameShort			= "7N24";
		ammo						= rhs_B_545x39_7N24_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7NU1_2mag_desert_AK : rhs_30Rnd_545x39_7N10_2mag_desert_AK
	{

		displayName					= $STR_Spar7N6Des;
		displayNameShort			= "7U1";
		ammo						= rhs_B_545x39_7U1_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7T3M_2mag_desert_AK : rhs_30Rnd_545x39_7N10_2mag_desert_AK
	{

		displayName					= $STR_Spar7T3MDes;
		displayNameShort			= "7T3M Tracer";
		ammo						=rhs_B_545x39_Ball_Tracer_Green;
		tracersEvery				= 1;
		mass						= 6,95;


	};












	class rhs_30Rnd_545x39_7N10_2mag_camo_AK : rhs_30Rnd_545x39_7N10_2mag_plum_AK
	{
		mass						= 6,95;
		tracersEvery=3;
		lastRoundsTracer=3;
	};




	class rhs_30Rnd_545x39_7N6_2mag_camo_AK : rhs_30Rnd_545x39_7N10_2mag_camo_AK
	{

		displayName					= $STR_Spar7N6Camo;
		displayNameShort			= "7N6";
		ammo						= rhs_B_545x39_7N6_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N22_2mag_camo_AK : rhs_30Rnd_545x39_7N10_2mag_camo_AK
	{

		displayName					= $STR_Spar7N22Camo;
		displayNameShort			= "7N22";
		ammo						= rhs_B_545x39_7N22_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7N24_2mag_camo_AK : rhs_30Rnd_545x39_7N10_2mag_camo_AK
	{

		displayName					= $STR_Spar7N24Camo;
		displayNameShort			= "7N24";
		ammo						= rhs_B_545x39_7N24_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7NU1_2mag_camo_AK : rhs_30Rnd_545x39_7N10_2mag_camo_AK
	{

		displayName					= $STR_Spar7U1Camo;
		displayNameShort			= "7U1";
		ammo						= rhs_B_545x39_7U1_Ball;
		mass						= 6,95;

		tracersEvery=3;
		lastRoundsTracer=3;
	};

	class rhs_30Rnd_545x39_7T3M_2mag_camo_AK : rhs_30Rnd_545x39_7N10_2mag_camo_AK
	{

		displayName					= $STR_Spar7T3MCamo;
		displayNameShort			= "7T3M Tracer";
		ammo						=rhs_B_545x39_Ball_Tracer_Green;
		tracersEvery				= 1;
		mass						= 6,95;


	};









	


};