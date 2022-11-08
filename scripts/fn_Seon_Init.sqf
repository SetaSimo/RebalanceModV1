if (isDedicated) exitwith {};

#include "\a3\ui_f\hpp\defineDIKCodes.inc"

Whistle_radius= 15;
Whistle_max_radius= 600;
Whistle_step= 5;

fnc_Whistle={
    _sound = selectRandom ["Rebalancemod\sounds\whistle\whistle1.ogg", "Rebalancemod\sounds\whistle\whistle2.ogg"];
    playSound3D [ _sound, player, false, getPosASL player, 1, 1, Whistle_radius];
};

fnc_Whistle_Pl={
    if (Whistle_radius + Whistle_step < Whistle_max_radius) then {
        Whistle_radius = Whistle_radius + Whistle_step;
        hint format["Текущая дистанция свиста: %1", Whistle_radius];
    } else {
        hint "вы не можете свистеть на такую дистанцию";
    };
};

fnc_Whistle_Mn={
    if (Whistle_radius - Whistle_step < 0) then {
        hint "Нельзя свистеть на отрицательную дистанцию";
    } else {
        Whistle_radius = Whistle_radius - Whistle_step;
        hint format["Текущая дистанция свиста: %1", Whistle_radius];
    };
};

fnc_UiOff = {
    showHUD [false, false, false, false, false, false, false, false, false];
    showVehcrew = 0;
};

fnc_UiOn = {
    showHUD [true, true, true, true, true, true, true, true, true];
    showVehcrew = 1;
};

fnc_openClock={
    if (L_pReady_reloaddone) then {
        [player, "Gesturearmst_clockl" ]remoteExec ["playAction", 0];
    }
};

fnc_openCompas={
    if (L_pReady_reloaddone) then {
        [player, "Gesturecompass" ]remoteExec ["playAction", 0];
    }
};

fnc_RockPaperScissors={
    gameAnim=selectRandom ["GestureRock", "GesturePaper", "GestureScissors"];
    [player, gameAnim ]remoteExec ["playAction", 0];
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

/* пояснения для игроков ======================= */

// [] execVM '\Rebalancemod\scripts\AddtoBreafing.sqf';

player addEventHandler ["GetinMan", {
    params ["_unit", "_role", "_vehicle", "_turret"];
    if (_vehicle isKindOf "tank") then {
        if (count crew _vehicle >= 1) then {
            _as = _vehicle spawn fn_peredacha_con;
        };
        _vehicle setVariable ["peredacha", 0, true];
    };
}];

player addEventHandler ["GetoutMan", {
    params ["_unit", "_role", "_vehicle", "_turret"];
    if (_vehicle isKindOf "tank") then {
        _vehicle setVariable ["peredacha", 0, true];
    };
}];