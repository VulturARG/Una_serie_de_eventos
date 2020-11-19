/*******************************************************************************
                             Realizado por |ArgA|MIV
*******************************************************************************/

private _position = getPosATL player;

if (_position select 2 < 1000) exitWith { };

sleep 50;

player linkItem "ACE_Altimeter";

private _inv = name player;// Get Unique name for Unit's loadout.
[player, [missionNamespace, format["%1%2", "Inventory",_inv]]] call BIS_fnc_saveInventory;// Save Loadout
removeBackpack player;
player addBackPack "B_parachute";
unassignvehicle player;
waitUntil { isTouchingGround player};
removeBackpack player;
[player, [missionNamespace, format["%1%2", "Inventory",_inv]]] call BIS_fnc_loadInventory;// Reload Loadout.

/*******************************************************************************
                             Realizado por |ArgA|MIV
*******************************************************************************/