/*******************************************************************************
                             Realizado por |ArgA|MIV
*******************************************************************************/
["Entro Halo",player] call MIV_fnc_log;
private _minimunAltutudeActivationHALO  = getMissionConfigValue ["HALO_ALTURA_MINIMA_ACTIVACION",  1000];

private _position = getPosATL player;

if (_position select 2 < _minimunAltutudeActivationHALO) exitWith { };
["Paso if",player] call MIV_fnc_log;
//sleep 15;

player linkItem "ACE_Altimeter";

private _inv = name player;// Get Unique name for Unit's loadout.
[player, [missionNamespace, format["%1%2", "Inventory",_inv]]] call BIS_fnc_saveInventory;// Save Loadout
removeBackpack player;
player addBackpack "B_parachute";
["Espero tierra"] call MIV_fnc_log;
waitUntil { isTouchingGround player};
removeBackpack player;
[player, [missionNamespace, format["%1%2", "Inventory",_inv]]] call BIS_fnc_loadInventory;// Reload Loadout.

/*******************************************************************************
                             Realizado por |ArgA|MIV
*******************************************************************************/