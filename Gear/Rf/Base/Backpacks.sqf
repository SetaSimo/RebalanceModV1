// backpack type randomization
if (_specialist == 'none') then {
    if ((_year >= 1991) and (_year <= 1998)) then {
        _bNumber = floor random 4;
        if (_bNumber <= 2) then {
            _backpacklist = [
                "rhs_sidor",
                "YE_RD54"
            ];
        };
    };
    if ((_year >= 1998) and (_year <= 2002)) then {
        _bNumber = floor random 4;
        if (_bNumber <= 2) then {
            _backpacklist = [
                "rhs_sidor",
                "YE_RD54",
            ];
        };
    };
    if ((_year >= 2003) and (_year <= 2012)) then {
        _list6b23 = [
            "6b23_6sh92Fl",
            "6b23_6sh92Fld",
            "6b23_6sh92Fl2",
            "6b23_6sh92Fl2",
            "6b23_6sh92gpFld",
            "6b23_6sh92gpFl",
            "6b23_6sh92gpFl2",
            "rhs_6b23_6sh92",
            "rhs_6b23_6sh92_headset",
            "rhs_6b23_6sh92_headset_mapcase",
            "rhs_6b23_6sh92_radio",
            "rhs_6b23_6sh92_vog",
            "rhs_6b23_6sh92_vog_headset",
            "rhs_6b23_digi_6sh92",
            "rhs_6b23_digi_6sh92_headset",
            "rhs_6b23_digi_6sh92_headset_mapcase",
            "rhs_6b23_digi_6sh92_headset_spetsnaz",
            "rhs_6b23_digi_6sh92_radio",
            "rhs_6b23_digi_6sh92_Spetsnaz",
            "rhs_6b23_digi_6sh92_spetsnaz2",
            "rhs_6b23_digi_6sh92_vog",
            "rhs_6b23_digi_6sh92_vog_headset",
            "rhs_6b23_digi_6sh92_Vog_radio_Spetsnaz",
            "rhs_6b23_digi_6sh92_Vog_Spetsnaz",
            "6b23_6sh92EMPFld",
            "6b23_6sh92EMPFl",
            "6b23_6sh92EMPFl2",
            "6b23_6sh92gpEMPFld",
            "6b23_6sh92gpEMPFl",
            "6b23_6sh92gpEMPFl2"
        ];
        
        if (_vestclass in _list6b23) then {
            _backpacklist = [
                "YuE_6sh92rFl",
                "YuE_6sh92rFl6b23",
                "YuE_6sh92rFl26b23",
                "YuE_6sh92rFl2"
            ];
        } else {
            _bNumber = floor random 4;
            if (_bNumber <= 2) then {
                _backpacklist = [
                    "rhs_sidor",
                    "YE_RD54"
                ];
            };
        };
    };
    if ((_year >= 2013) and (_year <= 2014)) then {
        _backpacklist = [
            "YuE_6sh92rFl",
            "YuE_6sh92rFl6b23",
            "YuE_6sh92rFl26b23",
            "YuE_6sh92rFl2"
        ];
    };
    if ((_year >= 2015) and (_year <= 2025)) then {
        _backpacklist = [
            "YuE_6sh92rFl",
            "YuE_6sh92rFl6b23",
            "YuE_6sh92rFl26b23",
            "YuE_6sh92rFl2"
        ];
    };
    _unit addbackpack (selectRandom _backpacklist);
};

if (_specialist == 'antitank') then {
    if ((_year >= 1991) and (_year <= 2014)) then {
        _backpacklist = [
            "rhs_rpg_2"
        ];
    };
    if ((_year >= 2015) and (_year <= 2020)) then {
        if ((uniform _unit) == "rhs_uniform_msv_emr") then {
            _backpacklist = [
                "rhs_rpg_2"
            ];
        };
        if ((uniform _unit) == "CUP_U_O_RUS_Ratnik_Summer") then {
            _backpacklist = [
                "YuE_6sh92rFl",
                "YuE_6sh92rFl6b23",
                "YuE_6sh92rFl26b23",
                "YuE_6sh92rFl2"
            ];
        };
    };
    if ((_year >= 2021) and (_year <= 2025)) then {
        _backpacklist = [
            "YuE_6sh92rFl",
            "YuE_6sh92rFl6b23",
            "YuE_6sh92rFl26b23",
            "YuE_6sh92rFl2"
        ];
    };
    _unit addbackpack (selectRandom _backpacklist);
};

if (_specialist == 'assistant_antitank') then {
    if ((_year >= 1991) and (_year <= 2014)) then {
        _backpacklist = [
            "rhs_rpg_empty"
        ];
    };
    if ((_year >= 2015) and (_year <= 2020)) then {
        if ((uniform _unit) == "rhs_uniform_msv_emr") then {
            _backpacklist = [
                "rhs_rpg_empty"
            ];
        };
        if ((uniform _unit) == "CUP_U_O_RUS_Ratnik_Summer") then {
            _backpacklist = [
                "YuE_6sh92rFl",
                "YuE_6sh92rFl6b23",
                "YuE_6sh92rFl26b23",
                "YuE_6sh92rFl2"
            ];
        };
    };
    if ((_year >= 2021) and (_year <= 2025)) then {
        _backpacklist = [
            "YuE_6sh92rFl",
            "YuE_6sh92rFl6b23",
            "YuE_6sh92rFl26b23",
            "YuE_6sh92rFl2"
        ];
    };
    _unit addbackpack (selectRandom _backpacklist);
};

if ((_specialist == 'marksman') or (_specialist == 'machinegunner')) then {
    if ((_year >= 1991) and (_year <= 1998)) then {
        _backpacklist = [
            "rhs_sidor",
            "YE_RD54"
        ];
    };
    if ((_year >= 1998) and (_year <= 2002)) then {
        _backpacklist = [
            "rhs_sidor",
            "YE_RD54"
        ];
    };
    if ((_year >= 2003) and (_year <= 2012)) then {
        _list6b23 = [
            "6b23_6sh92Fl",
            "6b23_6sh92Fld",
            "6b23_6sh92Fl2",
            "6b23_6sh92Fl2",
            "6b23_6sh92gpFld",
            "6b23_6sh92gpFl",
            "6b23_6sh92gpFl2",
            "rhs_6b23_6sh92",
            "rhs_6b23_6sh92_headset",
            "rhs_6b23_6sh92_headset_mapcase",
            "rhs_6b23_6sh92_radio",
            "rhs_6b23_6sh92_vog",
            "rhs_6b23_6sh92_vog_headset",
            "rhs_6b23_digi_6sh92",
            "rhs_6b23_digi_6sh92_headset",
            "rhs_6b23_digi_6sh92_headset_mapcase",
            "rhs_6b23_digi_6sh92_headset_spetsnaz",
            "rhs_6b23_digi_6sh92_radio",
            "rhs_6b23_digi_6sh92_Spetsnaz",
            "rhs_6b23_digi_6sh92_spetsnaz2",
            "rhs_6b23_digi_6sh92_vog",
            "rhs_6b23_digi_6sh92_vog_headset",
            "rhs_6b23_digi_6sh92_Vog_radio_Spetsnaz",
            "rhs_6b23_digi_6sh92_Vog_Spetsnaz",
            "6b23_6sh92EMPFld",
            "6b23_6sh92EMPFl",
            "6b23_6sh92EMPFl2",
            "6b23_6sh92gpEMPFld",
            "6b23_6sh92gpEMPFl",
            "6b23_6sh92gpEMPFl2"
        ];
        
        if (_vestclass in _list6b23) then {
            _backpacklist = [
                "YuE_6sh92rFl",
                "YuE_6sh92rFl6b23",
                "YuE_6sh92rFl26b23",
                "YuE_6sh92rFl2"
            ];
        } else {
            _backpacklist = [
                "rhs_sidor",
                "YE_RD54"
            ];
        };
    };
    
    if ((_year >= 2013) and (_year <= 2014)) then {
        _backpacklist = [
            "YuE_6sh92rFl",
            "YuE_6sh92rFl6b23",
            "YuE_6sh92rFl26b23",
            "YuE_6sh92rFl2"
        ];
    };
    if ((_year >= 2015) and (_year <= 2020)) then {
        if ((uniform _unit) == "rhs_uniform_msv_emr") then {
            _backpacklist = [
                "YuE_6sh92rFl",
                "YuE_6sh92rFl6b23",
                "YuE_6sh92rFl26b23",
                "YuE_6sh92rFl2"
            ];
        };
    };
    if ((_year >= 2021) and (_year <= 2025)) then {
        _backpacklist = [
            "YuE_6sh92rFl",
            "YuE_6sh92rFl6b23",
            "YuE_6sh92rFl26b23",
            "YuE_6sh92rFl2"
        ];
    };
    _unit addbackpack (selectRandom _backpacklist);
};

if (_specialist == "medic") then {
    if ((_year >= 1991) and (_year <= 1998)) then {
        _backpacklist = [
            "YE_RD54"
        ];
    };
    if ((_year >= 1998) and (_year <= 2002)) then {
        _backpacklist = [
            "rhs_sidor",
            "YE_RD54"
        ];
    };
    if ((_year >= 2003) and (_year <= 2012)) then {
        _list6b23 = [
            "6b23_6sh92Fl",
            "6b23_6sh92Fld",
            "6b23_6sh92Fl2",
            "6b23_6sh92Fl2",
            "6b23_6sh92gpFld",
            "6b23_6sh92gpFl",
            "6b23_6sh92gpFl2",
            "rhs_6b23_6sh92",
            "rhs_6b23_6sh92_headset",
            "rhs_6b23_6sh92_headset_mapcase",
            "rhs_6b23_6sh92_radio",
            "rhs_6b23_6sh92_vog",
            "rhs_6b23_6sh92_vog_headset",
            "rhs_6b23_digi_6sh92",
            "rhs_6b23_digi_6sh92_headset",
            "rhs_6b23_digi_6sh92_headset_mapcase",
            "rhs_6b23_digi_6sh92_headset_spetsnaz",
            "rhs_6b23_digi_6sh92_radio",
            "rhs_6b23_digi_6sh92_Spetsnaz",
            "rhs_6b23_digi_6sh92_spetsnaz2",
            "rhs_6b23_digi_6sh92_vog",
            "rhs_6b23_digi_6sh92_vog_headset",
            "rhs_6b23_digi_6sh92_Vog_radio_Spetsnaz",
            "rhs_6b23_digi_6sh92_Vog_Spetsnaz",
            "6b23_6sh92EMPFld",
            "6b23_6sh92EMPFl",
            "6b23_6sh92EMPFl2",
            "6b23_6sh92gpEMPFld",
            "6b23_6sh92gpEMPFl",
            "6b23_6sh92gpEMPFl2"
        ];
        
        if (_vestclass in _list6b23) then {
            _backpacklist = [
                "YuE_6sh92rFl",
                "YuE_6sh92rFl6b23",
                "YuE_6sh92rFl26b23",
                "YuE_6sh92rFl2"
            ];
        } else {
            _backpacklist = [
                "rhs_sidor",
                "YE_RD54"
            ];
        };
    };
    
    if ((_year >= 2013) and (_year <= 2014)) then {
        _backpacklist = [
            "YuE_6sh92rFl",
            "YuE_6sh92rFl6b23",
            "YuE_6sh92rFl26b23",
            "YuE_6sh92rFl2"
        ];
    };
    if ((_year >= 2015) and (_year <= 2020)) then {
        if ((uniform _unit) == "rhs_uniform_msv_emr") then {
            _backpacklist = [
                "YuE_6sh92rFl",
                "YuE_6sh92rFl6b23",
                "YuE_6sh92rFl26b23",
                "YuE_6sh92rFl2"
            ];
        };
        if ((uniform _unit) == "CUP_U_O_RUS_Ratnik_Summer") then {
            _backpacklist = [
                "YuE_6sh92rFl",
                "YuE_6sh92rFl6b23",
                "YuE_6sh92rFl26b23",
                "YuE_6sh92rFl2"
            ];
        };
    };
    if ((_year >= 2021) and (_year <= 2025)) then {
        _backpacklist = [
            "YuE_6sh92rFl",
            "YuE_6sh92rFl6b23",
            "YuE_6sh92rFl26b23",
            "YuE_6sh92rFl2"
        ];
    };
    _selected_backpack = selectRandom _backpacklist;
    _unit addbackpack _selected_backpack;
};