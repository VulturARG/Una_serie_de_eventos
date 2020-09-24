/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

params["_marker"];

private _vehiclesPosition = [];
private _vehiclesDirection = [];
private _vehiclesInBase = VUL_VEHICLES_CONVOY inAreaArray _marker;
private _vehiclesMoving = VUL_VEHICLES_CONVOY - _vehiclesInBase;

{
	_vehiclesPosition append [getPos _x];
    _vehiclesDirection append [direction _x];
    _x execVM "scripts\mobileAmbush\explodeVehicles.sqf";

} forEach (_vehiclesMoving call BIS_fnc_arrayShuffle); 

{
    deletevehicle _x;
    
} forEach _vehiclesInBase;

[_vehiclesPosition,_vehiclesDirection] execVM 'scripts\mobileAmbush\putEnemiesAmbush.sqf';

["_vehiclesPosition:", _vehiclesPosition] call MIV_fnc_log;
["_vehiclesDirection:", _vehiclesDirection] call MIV_fnc_log;

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/
//["_vehiclesMoving:", _vehiclesMoving] call MIV_fnc_log;