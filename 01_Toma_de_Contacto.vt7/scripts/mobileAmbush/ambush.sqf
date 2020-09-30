/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

params["_marker"];

private _vehiclesPosition  = [];
private _vehiclesDirection = [];
private _vehiclesData      = [];
private _vehiclesInBase    = VUL_VEHICLES_CONVOY inAreaArray _marker;
private _vehiclesMoving    = VUL_VEHICLES_CONVOY - _vehiclesInBase;
private _angle 		       = 40;
private _spawnDistance     = 150 + random 50;
private _enemySize         = [2,3];
private _side              = east;
private _delayStartWaves   = 600;
private _delayWaves        = 180;
private _numberOfWaves     = 1;
private _desviationAngle   = 90;
private _sideAttack        = 2;

 execVM "scripts\eos\OpenMeAttack.sqf";

{
    _x setCaptive 0;
    
} forEach allPlayers;

{
	_vehiclesPosition append [getPos _x];
    _vehiclesDirection append [direction _x];
    _vehiclesData = _x execVM "scripts\mobileAmbush\explodeVehicles.sqf";
} forEach (_vehiclesMoving call BIS_fnc_arrayShuffle); 

{
    deletevehicle _x;
    
} forEach _vehiclesInBase;

sleep 30;
private _vehiclesPositionAux  = [];
private _vehiclesDirectionAux = [];
{
	if (!isNil "_x") then {
        _vehiclesPositionAux  append [getPos _x];
        _vehiclesDirectionAux append [direction _x];    
    };

} forEach _vehiclesMoving; 

if (count _vehiclesPosition  <= count _vehiclesPositionAux)  then { _vehiclesPosition  = _vehiclesPositionAux  };
if (count _vehiclesDirection <= count _vehiclesDirectionAux) then { _vehiclesDirection = _vehiclesDirectionAux };
 
[_vehiclesPosition,_vehiclesDirection,_side,_enemySize,_spawnDistance,_angle,_desviationAngle,_sideAttack] execVM 'scripts\mobileAmbush\putEnemiesAmbush.sqf';

execVM "scripts\screenOrderAmbush.sqf";

sleep _delayStartWaves;

/*////////////////////////////////
// Borro la primera oleada para ver bien la segunda
hint "Refuerzos";
_unitsIA = allUnits select {!isPlayer _x && (side _x == _side)};
{
    deletevehicle _x;
} forEach _unitsIA;
sleep 10;
/*//////////////////////////*/
_spawnDistance = 300 + random 101;
_enemySize     = [4,6];
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


