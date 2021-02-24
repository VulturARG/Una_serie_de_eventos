/*******************************************************************************
                          Realizado por |ArgA|Vultur|Sgt
*******************************************************************************/

params["_teleport_data","_callObject"];

if(isNil "_callObject") exitWith {};

removeAllActions _callObject;
							// Camello              Ignacio              Jhon               Shaggy				  Vultur
private _authorizedUID = ["76561198197706543", "76561198026915573","76561198192306746","76561198030188168","76561198010777357"];

if (hasInterface && (getPlayerUID player in _authorizedUID)) then {
		_callObject addAction [
		"<t color='#00FF00'>Iniciar transporte</t>",
		{
			params ["_target", "_caller", "_actionId", "_arguments"];
			_arguments params ["_teleport_data","_startTrigger"];
			
			hint "Transporte en camino";
			
			{
				_x params["_startTrigger","_destinationMarker"];

				private _startPosition = getPos _startTrigger;
				private _newPosition   = getMarkerPos _destinationMarker;
				
				[[_startTrigger], "scripts\teleport\teleport_sound.sqf"]   remoteExec ["BIS_fnc_execVM", 0, false];
				[[_startTrigger], "scripts\teleport\teleport_message.sqf"] remoteExec ["BIS_fnc_execVM", 0, false];

				sleep 5;
				{
					_x setPos 
						[
							(_startPosition select 0) - ((getPos _x) select 0) + (_newPosition select 0),
							(_startPosition select 1) - ((getPos _x) select 1) + (_newPosition select 1),
							(_startPosition select 2) - ((getPos _x) select 2) + (_newPosition select 2)
						];
				} forEach (playableUnits inAreaArray _startTrigger);

			} forEach _teleport_data;
			[[2021,8,22,18,48]] remoteExec ["setDate"];
			[[], "scripts\delayTime.sqf"] remoteExec ["BIS_fnc_execVM", 0, false];
			removeAllActions VUL_MASTIL;

		}, [_teleport_data, _startTrigger], 1.5, true, true, "", "true", 50, false, "", ""
	];
}



/*******************************************************************************
                          Realizado por |ArgA|Vultur|Sgt
*******************************************************************************/