/*******************************************************************************
                          Realizado por |ArgA|Vultur|Sgt
*******************************************************************************/

params["_teleport_data","_callObject","_time"];

if(isNil "_callObject") exitWith {};

removeAllActions _callObject;
							// Camello              Ignacio              Jhon               Shaggy				  Vultur
private _authorizedUID = ["76561198197706543", "76561198026915573","76561198192306746","76561198030188168","76561198010777357"];

if (hasInterface && (getPlayerUID player in _authorizedUID)) then {
		_callObject addAction [
		"<t color='#00FF00'>Iniciar transporte</t>",
		{
			params ["_target", "_caller", "_actionId", "_arguments"];
			_arguments params ["_teleport_data","_callObject","_time"];
			
			hint "Transporte en camino";
			
			[[_target, _teleport_data, _callObject,_time], "scripts\teleport\teleport_server.sqf"] remoteExec ["BIS_fnc_execVM", 2, false];

		}, [_teleport_data, _callObject, _time], 1.5, true, true, "", "true", 50, false, "", ""
	];
}



/*******************************************************************************
                          Realizado por |ArgA|Vultur|Sgt
*******************************************************************************/