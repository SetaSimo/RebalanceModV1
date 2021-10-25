/*
	IFA3 Liberation
	Эффект контузия

	Код: Shvetz
	правки: PIONEER 
*/

// Проверка настроек CBA
if (!ifa3lib_damage_cba_kontuzia_gr) exitwith {};

if (!(isDedicated)) then 
{
	if (local player) then 
	{
		_pos = [(_this select 0), (_this select 1), ((_this select 2)+0.3)];
		_range = 17;

		if ((((getpos player) distance _pos) <= _range)and (((vehicle player) == player)or(isTurnedOut player)) and ((damage player) < 0.9)) then
		{
				[_pos,_range] spawn 
				{
					_pos = _this select 0;
					_range = _this select 1;
					_set_time = (2 + floor(random 2));
					_radio = radioVolume;
					_sound = soundVolume;
					_offset = ((1-(((getposatl player) distance _pos)/_range))/5);
					_force = ((1-(((getposatl player) distance _pos)/_range))/100);

					addCamShake [15, (4 + random 4), 7];
					PlaySound ["ifa3_kontuzia",true];

					0 fadeRadio 0.03;
					0 fadeSound 0.03;

					"DynamicBlur" ppEffectEnable true;				
					"DynamicBlur" ppEffectAdjust [4.75];
					"DynamicBlur" ppEffectCommit 0.2;
					
					"RadialBlur" ppEffectEnable true; 			
					"RadialBlur" ppEffectAdjust [_force,_force,_offset,_offset];  
					"RadialBlur" ppEffectCommit 0; 


					[{
					params ["_offset"];
					"DynamicBlur" ppEffectAdjust [0.001];
					"DynamicBlur" ppEffectCommit (0.5+(_offset*10));
					
					"RadialBlur" ppEffectAdjust [0,0,0,0]; 
					"RadialBlur" ppEffectCommit (0.5+(_offset*10));
					}, [_offset],_set_time] call CBA_fnc_waitAndExecute;

					[{
					params ["_set_time","_sound","_radio"];
					_set_time fadeRadio _radio;
					_set_time fadeSound _sound;
					}, [_set_time,_sound,_radio],15] call CBA_fnc_waitAndExecute;
				};			
		};

	};
};
