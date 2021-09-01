


if (isDedicated) exitWith {};


#include "\a3\ui_f\hpp\defineDIKCodes.inc"
  





UiOff = {
		showHUD [false,false,false,false,false,false,false,false,false];
		showVehCrew = 0;
};

UiOn = {
		showHUD [true,true,true,true,true,true,true,true,true];
		showVehCrew = 1;
};


openClock={	
	[player,"Gesturearmst_clockl" ]remoteExec ["playActionNow",0];
};

openCompas={	
    [player,"Gesturecompass" ]remoteExec ["playActionNow",0];
};











 















/* CBA Settings ======================= */




/* CBA Keybinds ======================= */

["Seon Animations", "Часы", ["Достать часы", " "],{call OpenClock}, {}, [DIK_O, [false, false, false]]] call CBA_fnc_addKeybind; 
["Seon Animations", "Компас", ["Достать Компас", " "],{call OpenCompas}, {}, [DIK_K, [false, false, false]]] call CBA_fnc_addKeybind; 
// передачи

// UI
["Seon Hud", "Спрятать интерфейс", ["Спрятать интерфейс", " "],{call UiOff}, {}, [DIK_F2, [true, true, false]]] call CBA_fnc_addKeybind; 
["Seon Hud", "Вернуть интерфейс", ["Вернуть интерфейс", " "],{call UiOn}, {}, [DIK_F3, [true, true, false]]] call CBA_fnc_addKeybind; 
