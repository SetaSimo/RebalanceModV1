switch (selectRandom ["1", "2"]) do {
    case "1": {
        _Mask = selectRandom [
            "YuEBalaklavaW2Bl", "YuEBalaklavaW1Bl", "YuEBalaklavaW2O",
            "YuEBalaklavaW1O", "G_Balaclava_blk", "rhsusf_shemagh2_grn",
            ""
        ];
        
        _Helmet = selectRandom [
            "H_Booniehat_oli", "H_Booniehat_mgrn", "YuEPanama1bg",
            "YuEPanama1Ol", "YuE6b7", "rhs_6b7_1m", "rhs_6b27m_green",
            "rhs_6b28_green"
        ];
        
        _this addgoggles _Mask;
        _this addheadgear _Helmet;
    };
    case "2": {
        _Mask = selectRandom [
            "rhsusf_shemagh2_grn", ""
        ];
        
        _Helmet = selectRandom [
            "H_Bandanna_gry", "H_Bandanna_khk", "H_Bandanna_sgg",
            "H_Booniehat_oli", "H_Cap_oli", "H_Booniehat_mgrn",
            "H_Cap_Bandanna_F", "rhs_beanie_green", "rhs_beanie",
            "YuEBandana_Bl", "YuEBandana_O", "YuEPanama1bg",
            "YuEPanama1Ol", "YuE6b7", "rhs_6b7_1m",
            "rhs_6b27m_green", "rhs_6b28_green"
        ];
        
        _this addgoggles _Mask;
        _this addheadgear _Helmet;
    };
};