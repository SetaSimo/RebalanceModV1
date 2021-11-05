params ["_unit", "_character"];
["_unit", "_character"] spawn {
    _count=0;
    switch (_character) do {
        case "1": {
            while {_count<6} do {
                _sound="ch_1_cough_"+selectRandom ["1", "2", "3", "4", "5", "6", "7", "8"];
                
                _unit say3D [_sound, 100, 1, true];
                
                sleep (random [1, 2, 3]);
                _count=_count+1;
            };
        };
        case "2": {
            while {_count<6} do {
                _sound="ch_2_cough_"+selectRandom ["1", "2", "3", "4", "5", "6", "7"];
                
                _unit say3D [_sound, 100, 1, true];
                
                sleep (random [1, 2, 3]);
                _count=_count+1;
            };
        };
        default {
            hint "dafe";
        };
    };
    
    // _sound="Rebalancemod\sounds\cough\character_"+_character+"\cough_"+selectRandom["1", "2", "3", "4", "5", "6", "7"]+".ogg";
    
    // playSound3D [_sound, _unit, false, getPosASL _unit, 1, 1, 0, (random [1, 2, 3])];