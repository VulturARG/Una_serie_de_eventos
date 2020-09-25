/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

params["_marker"];

private _vehiclesPosition = [];
private _vehiclesDirection = [];
private _vehiclesInBase = VUL_VEHICLES_CONVOY inAreaArray _marker;
private _vehiclesMoving = VUL_VEHICLES_CONVOY - _vehiclesInBase;

private _angle 		     = 40;
private _spawnDistance   = 125 + random 25;
private _enemySize       = [2,4];
private _side            = east;
private _delayStartWaves = 60;//60;
private _delayWaves      = 180;//180;
private _numberOfWaves   = 5;
private _desviationAngle = 90;
private _sideAttack      = 2;

{
	_vehiclesPosition append [getPos _x];
    _vehiclesDirection append [direction _x];
    _x execVM "scripts\mobileAmbush\explodeVehicles.sqf";

} forEach (_vehiclesMoving call BIS_fnc_arrayShuffle); 

{
    deletevehicle _x;
    
} forEach _vehiclesInBase;

//hint "Emboscada";
sleep 15;
[_vehiclesPosition,_vehiclesDirection,_side,_enemySize,_spawnDistance,_angle,_desviationAngle,_sideAttack] execVM 'scripts\mobileAmbush\putEnemiesAmbush.sqf';

sleep _delayStartWaves;

/*////////////////////////////////
hint "Refuerzos";
_unitsIA = allUnits select {!isPlayer _x && (side _x == _side)};
{
    deletevehicle _x;
} forEach _unitsIA;
sleep 10;
/*//////////////////////////*/
_spawnDistance = 250 + random 50;
_enemySize     = [4,8];
_desviationAngle = 0;
_sideAttack      = 1;

for "_i" from 0 to _numberOfWaves do  {
    //hint format["Wave: %1",_i+1];
    [_vehiclesPosition,_vehiclesDirection,_side,_enemySize,_spawnDistance,_angle,_desviationAngle,_sideAttack] execVM 'scripts\mobileAmbush\putEnemiesAmbush.sqf';
    sleep _delayWaves;
};



/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/
//["_vehiclesMoving:", _vehiclesMoving] call MIV_fnc_log;
//["_vehiclesPosition:", _vehiclesPosition] call MIV_fnc_log;
//["_vehiclesDirection:", _vehiclesDirection] call MIV_fnc_log;