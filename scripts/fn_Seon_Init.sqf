if (isDedicated) exitwith {};

#include "\a3\ui_f\hpp\defineDIKCodes.inc"

Whistle_radius= 15;
Whistle_max_radius= 600;
Whistle_step= 5;

_character = selectRandom["1","2"];
_GasMasks = "U_B_CBRN_Suit_01_Wdl_F";

Whistle={
    _sound = selectRandom ["Rebalancemod\sounds\whistle\whistle1.ogg", "Rebalancemod\sounds\whistle\whistle2.ogg"];
    playSound3D [ _sound, player, false, getPosASL player, 1, 1, Whistle_radius];
};

Whistle_Pl={
    if (Whistle_radius + Whistle_step < Whistle_max_radius) then {
        Whistle_radius = Whistle_radius + Whistle_step;
        hint format["Текущая дистанция свиста: %1", Whistle_radius];
    } else {
        hint "вы не можете свистеть на такую дистанцию";
    };
};

Whistle_Mn={
    if (Whistle_radius - Whistle_step < 0) then {
        hint "Нельзя свистеть на отрицательную дистанцию";
    } else {
        Whistle_radius = Whistle_radius - Whistle_step;
        hint format["Текущая дистанция свиста: %1", Whistle_radius];
    };
};

UiOff = {
    showHUD [false, false, false, false, false, false, false, false, false];
    showVehcrew = 0;
};

UiOn = {
    showHUD [true, true, true, true, true, true, true, true, true];
    showVehcrew = 1;
};

openClock={
    if (L_pReady_reloaddone) then {
        [player, "Gesturearmst_clockl" ]remoteExec ["playAction", 0];
    }
};

openCompas={
    if (L_pReady_reloaddone) then {
        [player, "Gesturecompass" ]remoteExec ["playAction", 0];
    }
};

RockPaperScissors={
    GameAnim=selectRandom ["GestureRock", "GesturePaper", "GestureScissors"];
    [player, GameAnim ]remoteExec ["playAction", 0];
};

/* CBA settings ======================= */

[
    "Дистанция свиста",
    "Editbox",
    ["Дистанция свиста", " "],
    "Seon Whistle",
    "15",
    nil,
    {
        params ["_value"];
        Whistle_radius = parseNumber _value;
    }
] call CBA_settings_fnc_init;

[
    "Максимальная дистанция свиста",
    "Editbox",
    ["Максимальная дистанция свиста", " "],
    "Seon Whistle",
    "600",
    2,
    {
        params ["_value"];
        Whistle_max_radius = parseNumber _value;
    }
] call CBA_settings_fnc_init;

[
    "Шаг увеличения/уменьшения дистанции",
    "Editbox",
    ["Шаг увеличения/уменьшения дистанции", " "],
    "Seon Whistle",
    "5",
    nil,
    {
        params ["_value"];
        Whistle_step = parseNumber _value;
    }
] call CBA_settings_fnc_init;

/* CBA Keybinds ======================= */
["Seon Animations", "Камень Ножницы Бумага", ["камень ножницы бумага", " "], {
    call RockPaperScissors
}, {}, [DIK_F1, [false, true, false]]] call CBA_fnc_addKeybind;
["Seon Animations", "Часы", ["Достать часы", " "], {
    call OpenClock
}, {}, [DIK_O, [false, false, false]]] call CBA_fnc_addKeybind;
["Seon Animations", "Компас", ["Достать Компас", " "], {
    call OpenCompas
}, {}, [DIK_K, [false, false, false]]] call CBA_fnc_addKeybind;
// передачи

// UI
["Seon Hud", "Спрятать интерфейс", ["Спрятать интерфейс", " "], {
    call UiOff
}, {}, [DIK_F2, [true, true, false]]] call CBA_fnc_addKeybind;
["Seon Hud", "Вернуть интерфейс", ["Вернуть интерфейс", " "], {
    call UiOn
}, {}, [DIK_F3, [true, true, false]]] call CBA_fnc_addKeybind;
// свист

["Seon Whistle", "Свист", ["Cвистнуть", "Персонаж свиснет после нажатия этой кнопки"], {
    call Whistle
}, {}, [DIK_1, [false, true, false]]] call CBA_fnc_addKeybind;
["Seon Whistle", "Сделать свист громче", ["Сделать свист громче", "Персонаж будет свистеть на большую дистанцию, после нажатия этой кнопки"], {
    call Whistle_Pl
}, {}, [DIK_2, [false, true, false]]] call CBA_fnc_addKeybind;
["Seon Whistle", "Сделать свист тише", ["Сделать свист тише", "Персонаж будет свистеть на меньшую дистанцию, после нажатия этой кнопки"], {
    call Whistle_Mn
}, {}, [DIK_3, [false, true, false]]] call CBA_fnc_addKeybind;


/* EventHandlers ======================= */
/*
player addEventHandler ["fired",
    {
        params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
        if ((_this select 4) isKindOf "SmokeShell") then {

            //_trg settriggerStatements ["this", "[_this select 0,_character] call po_canteen_fnc_PlayerCough",""];
            //_trg settriggerStatements ["this", "hint 'trigger on'", "hint 'trigger off'"];
            //windDir
            //windStr
            _trg =createTrigger ["EmptyDetector",getPos (_this select 6),true];
            _trg settriggerArea [100, 50, 45, false];
            _trg settriggerActivation ["ANY", "PRESENT", true];
            _trg settriggerStatements ["this", "[this,_character] execVM '\Rebalancemod\scripts\smoke\fn_PlayerCough.sqf'",""];

            _trg setTriggerInterval 1;




        };
    }];*/
    
    // if (goggles player!=_GasMasks)
    
    /* пояснения для игроков ======================= */
    
[] execVM '\Rebalancemod\scripts\AddtoBreafing.sqf';
