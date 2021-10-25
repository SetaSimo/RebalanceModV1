
    class rhs_weap_rpg26: Launcher_Base_F {
        class OpticsModes {
            class ironsight {
				opticsZoomMin = 0.4;
				opticsZoomMax = 0.71;
				opticsZoomInit = 0.71;
            };
        };
    };
    class rhs_weap_strela: launch_O_Titan_F {
        class OpticsModes {
            class StepScope {
				opticsZoomMin = 0.4;
				opticsZoomMax = 0.71;
				opticsZoomInit = 0.71;
            };
        };
    };




    class rhs_acc_1p29: rhs_acc_sniper_base {
                inertia = -0.6;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class rhs_1p29_iron {
            		opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhs_acc_1p78: rhs_acc_1p29 {
                inertia = -0.6;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class rhs_above_sight {
            		opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhs_acc_pkas: rhs_acc_sniper_base {
        inertia = -0.6;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ACO {
            		opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
                class rhs_1p29_iron {
            		opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhs_acc_1p63: rhs_acc_pkas {
        inertia = -0.6;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ACO {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhs_acc_nita: rhs_acc_pkas {
        
        inertia = -0.6;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class rhs_nita_scope {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
                class rhs_nita_iron {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhs_acc_pgo7v: rhs_acc_sniper_base {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class rhs_pgo7v_iron {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhs_acc_pgo7v_ak: rhs_acc_pgo7v {
        class ItemInfo: ItemInfo {
            class OpticsModes: OpticsModes {
                class rhs_pgo7v_iron {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhs_acc_1pn93_base: rhs_acc_sniper_base {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class rhs_1p29_iron {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhs_acc_1pn34: rhs_acc_1pn93_base {
        inertia = -0.8;
        class ItemInfo: ItemInfo {
            class OpticsModes {

			class 1pn34_scope
			{
				opticsZoomMin = 0.4;
				opticsZoomMax = 0.71;
				opticsZoomInit = 0.71;
				visionMode[]= {"NVG"};
			};
			class 1pn34_scope_not_nvg
			{
				opticsID						= 3;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[]				= {100};
				discreteDistanceInitIndex		= 0;
				opticsZoomMin = 0.4;
				opticsZoomMax = 0.71;
				opticsZoomInit = 0.71;
				memoryPointCamera				= "opticView";
				visionMode[]					= {"Normal"};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 200;
				distanceZoomMax					= 1000;
				cameraDir						= "";
			};
                class rhs_1pn34_iron {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhs_acc_rakursPM : rhs_acc_1p63 {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class rhs_rakurs_collimator {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };


//************************** rhsusf_weap_rifle_scar **************************



//************************** rhsusf_weap_launchers **************************
    class rhs_weap_smaw: Launcher_Base_F {
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;
    };
    class rhs_weap_smaw_SR: Launcher_Base_F {
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;
    };
    class rhs_weap_maaws: Launcher_Base_F {
		opticsZoomMin = 0.4;
		opticsZoomMax = 0.71;
		opticsZoomInit = 0.71;
    };
    class rhs_weap_M136: Launcher_Base_F {
        class OpticsModes {
            class ironsight {
				opticsZoomMin = 0.4;
				opticsZoomMax = 0.71;
				opticsZoomInit = 0.71;
            };
        };
    };
    class rhs_weap_m72a7 : rhs_weap_M136 {
        class OpticsModes {
            class ironsight {
				opticsZoomMin = 0.4;
				opticsZoomMax = 0.71;
				opticsZoomInit = 0.71;
            };
        };
    };
    class rhs_weap_fim92: launch_O_Titan_F {
        class OpticsModes {
            class StepScope {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
            };
        };
    };

//****************************** rhsusf_weap_acc ******************************
    class rhsusf_acc_compm4: ItemCore {
        inertia = -0.8;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ACO {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsusf_acc_anpvs27: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class PVS27 {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class optic_holosight: ItemCore {
        inertia = -0.8;
        class iteminfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ACO;
            };
        };
    };
    class rhsusf_acc_EOTECH: optic_holosight {
        inertia = -0.8;
        class ItemInfo: ItemInfo {
            class OpticsModes: OpticsModes {
                class ACO: ACO {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsusf_acc_eotech_xps3: optic_Holosight {
        inertia = -0.8;
        class ItemInfo: ItemInfo {
            class OpticsModes: OpticsModes {
                class ACO: ACO {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsusf_acc_ELCAN: rhsusf_acc_sniper_base {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes;
        };
    };
    class rhsusf_acc_ELCAN_pip: rhsusf_acc_ELCAN {
        class ItemInfo: ItemInfo {
            class OpticsModes: OpticsModes {
                class elcan_scope {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsusf_acc_su230_base: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Elcan_x1 {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
                class Elcan_iron {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsusf_acc_ACOG: rhsusf_acc_sniper_base {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class alternative_view {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsusf_acc_ACOG_pip: rhsusf_acc_ACOG {
        class ItemInfo: ItemInfo {
            class OpticsModes: OpticsModes {
                class elcan_scope {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsusf_acc_LEUPOLDMK4_2: rhsusf_acc_sniper_base {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes;
        };
    };
    class rhsusf_acc_LEUPOLDMK4_2_mrds: rhsusf_acc_LEUPOLDMK4_2 {
        class ItemInfo: ItemInfo {
            class OpticsModes: OpticsModes {
                class Mrds {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsusf_acc_premier: rhsusf_acc_LEUPOLDMK4_2 {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes;
        };
    };
    class rhsusf_acc_premier_mrds: rhsusf_acc_premier {
        class ItemInfo: ItemInfo {
            class OpticsModes: OpticsModes {
                class Mrds {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsusf_acc_M8541: rhsusf_acc_premier {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes;
        };
    };
    class rhsusf_acc_M8541_mrds: rhsusf_acc_M8541 {
        class ItemInfo: ItemInfo {
            class OpticsModes: OpticsModes {
                class Mrds {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsusf_acc_ACOG_MDO: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class RMR {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };


//************************** rhsgref_weap_launchers **************************
    class rhs_weap_rpg75: Launcher_Base_F {
        class OpticsModes {
            class ironsight {
        		opticsZoomMin = 0.4;
				opticsZoomMax = 0.71;
				opticsZoomInit = 0.71;
            };
        };
    };
    class rhs_weap_panzerfaust60: Launcher_Base_F {
        class OpticsModes {
            class ironsight {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
            };
        };
    };

//****************************** rhsgref_weap_acc ******************************
    class rhs_acc_scope_base: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class rhs_1p29_iron {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsgref_mg42_acc_AAsight: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ACO {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsgref_acc_l2a2: rhs_acc_scope_base {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class rhs_iron {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };
    class rhsgref_acc_anpvs2_base: rhs_acc_scope_base {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class rhs_1p29_iron {
					opticsZoomMin = 0.4;
					opticsZoomMax = 0.71;
					opticsZoomInit = 0.71;
                };
            };
        };
    };





