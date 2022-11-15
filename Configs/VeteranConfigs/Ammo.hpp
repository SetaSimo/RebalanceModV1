	//todo update prs,ins config 5.56
    class VTN_545x39_Ball_SC: B_556x45_Ball
	{		
        model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		ACE_bulletMass=3.62;
		ACE_caliber = 5.6;
    };

	class VTN_545x39_Ball_SC2: VTN_545x39_Ball_SC
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		ACE_bulletMass=3.62;
	};

	class VTN_545x39_Ball_TRC: VTN_545x39_Ball_SC
	{		
        model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		ACE_bulletMass=3.23;
    };

	class VTN_545x39_Ball_TRC2: VTN_545x39_Ball_TRC
	{
		model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		ACE_bulletMass=3.62;
    };

	class VTN_545x39_Ball_AP: VTN_545x39_Ball_TRC
	{
        model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		ACE_bulletMass=4.1;
    };

	class VTN_545x39_Ball_AP2: VTN_545x39_Ball_AP
	{
         model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		ACE_bulletMass=4.1;
    };

	class VTN_545x39_Ball_SS: VTN_545x39_Ball_SC
	{
        model = "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.11;
		ACE_bulletMass=3.62;
    };

	class VTN_762x25_Ball_FMJ: B_762x51_Ball
	{
		ACE_caliber = 7.94;
	};

	class VTN_762x25_Ball_FMJ1: VTN_762x25_Ball_FMJ
	{};
	
	class VTN_762x25_Ball_SC: VTN_762x25_Ball_FMJ
	{};

	class VTN_762x25_Ball_TRC: VTN_762x25_Ball_FMJ
	{};

	class VTN_762x39_Ball_SC: B_762x51_Ball
	{
        model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		ACE_bulletMass= 7.9;
    };

	class VTN_762x39_Ball_TRC: VTN_762x39_Ball_SC
	{
        model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		ACE_bulletMass=7.6;
    };

	class VTN_762x39_Ball_AP: VTN_762x39_Ball_SC
	{
        model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		ACE_bulletMass=12.55;
    };

	class VTN_762x39_Ball_INC: VTN_762x39_Ball_AP
	{
		model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		ACE_bulletMass=7.9;
    };

	class VTN_762x39_Ball_API: VTN_762x39_Ball_INC
	{		
        model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		ACE_bulletMass=7.9;
    };

	class VTN_762x39_Ball_SS: VTN_762x39_Ball_SC
	{
        model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		ACE_bulletMass= 7.9;
    };

	class VTN_762x39_Ball_PRS: VTN_762x39_Ball_SC
	{
        model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		ACE_bulletMass=12.55;
    };

	class VTN_762x41_Ball_SS: B_762x51_Ball
	{};

	class VTN_762x54_Ball_SC: VTN_762x39_Ball_SC
	{	
        model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		ACE_bulletMass=9.6;
		ACE_caliber = 8.53;
    };

	class VTN_762x54_Ball_SC2: VTN_762x54_Ball_SC
	{
        model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		ACE_bulletMass=9.6;
    };

	class VTN_762x54_Ball_SC3: VTN_762x54_Ball_SC
	{        
        model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		ACE_bulletMass=9.6;
    };

	class VTN_762x54_Ball_TRC: VTN_762x54_Ball_SC
	{
        model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		ACE_bulletMass=9.65;
    };

	class VTN_762x54_Ball_TRC2: VTN_762x54_Ball_TRC
	{
        model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		ACE_bulletMass=9.65;
    };

	class VTN_762x54_Ball_AP: VTN_762x54_Ball_SC
	{
        model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		ACE_bulletMass=9.4;
    };

	class VTN_762x54_Ball_AP2: VTN_762x54_Ball_AP
	{
        model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		ACE_bulletMass=9.8;
    };

	class VTN_762x54_Ball_INC: VTN_762x54_Ball_AP
	{
        model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		ACE_bulletMass=9.8;
    };
	
	class VTN_762x54_Ball_API: VTN_762x54_Ball_INC
	{        
        model	 = "\vtn_tracer_md\vtn_tracer_green_long";
		tracerScale=1.382;
		ACE_bulletMass=9.8;
    };

	class VTN_9x18_57N181S: B_9x21_Ball
	{};

	class VTN_9x18_PT: VTN_9x18_57N181S
	{};

	class VTN_9x18_7N16: VTN_9x18_57N181S
	{};

	class VTN_9x18_7N25: VTN_9x18_57N181S
	{};

	class VTN_9x18_RG028: VTN_9x18_57N181S
	{};

	class VTN_9x18_SP7: VTN_9x18_57N181S
	{};

	class VTN_9x18_SP8: VTN_9x18_57N181S
	{};

	class VTN_9x18_PRS: VTN_9x18_57N181S
	{};

	class VTN_9x19_7N21: VTN_9x18_57N181S
	{};

	class VTN_9x19_7N31: VTN_9x19_7N21
	{};


	class VTN_9x39_Ball_SC: B_9x21_Ball
	{};

	class VTN_9x39_Ball_AP: VTN_9x39_Ball_SC
	{};

	class VTN_9x39_Ball_SC2: VTN_9x39_Ball_SC
	{};

	class VTN_9x39_Ball_AP2: VTN_9x39_Ball_AP
	{};

	class VTN_127x108_Ball_AP: B_127x108_Ball
	{		
        model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
		ACE_caliber =  25.5;
    };

	class VTN_127x108_Ball_APT: VTN_127x108_Ball_AP
	{
        model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
    };

	class VTN_127x108_Ball_API: VTN_127x108_Ball_AP
	{
        model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
    };

	class VTN_127x108_Ball_API2: VTN_127x108_Ball_API
	{		
        model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
    };

	class VTN_127x108_Ball_INC: VTN_127x108_Ball_API
	{		
        model 	= "\vtn_tracer_md\vtn_tracer_green";
		tracerScale=1.1981;
    };
	
	class VTN_145x114_Ball_APT: B_127x108_Ball
	{};

	//vog and 40 mm
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
	
	class VTN_VOG17M_HE: VTN_VOG17A_HE
	{
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