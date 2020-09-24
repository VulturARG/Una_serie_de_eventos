/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/
AMBUSH_enemiesPosition = {
	params ["_position","_direction","_spawnDistance","_angle"];

	private _dir_attack_1 = _direction + 90 + (random _angle) - _angle/2;
	private _dir_attack_2 = _direction - 90 + (random _angle) - _angle/2;
	private _spawnPosition = [];
	
	_spawnPosition append [[_position, _spawnDistance, _dir_attack_1] call BIS_fnc_relPos];
	_spawnPosition append [[_position, _spawnDistance, _dir_attack_2] call BIS_fnc_relPos];

	_spawnPosition
};

AMBUSH_waypoints ={
	params ["_group","_position",["_wpType","SAD"],["_wpSpeed","LIMITED"],["_wpBehaviour","COMBAT"],["_wpFormation","LINE"],["_wpCombatMode","RED"]];
				
	_getToMarker = _group addWaypoint [_position, 0];
	_getToMarker setWaypointType _wpType;
	_getToMarker setWaypointSpeed _wpSpeed;
	_getToMarker setWaypointBehaviour _wpBehaviour;
	_getToMarker setWaypointFormation _wpFormation;
	_getToMarker setWaypointCombatMode _wpCombatMode;
	_getToMarker
};

params["_vehiclesPosition","_vehiclesDirection"];

private _angle 		   = 40;
private _spawnDistance = 100 + random 25;
private _enemySize     = [2,4];
private _side          = east;

{
	private _position        = [];
	private _positionVehicle = _vehiclesPosition select _forEachIndex;
	private _ambushData      = [_positionVehicle,_x,_spawnDistance,_angle];
	private _spawnPosition   = _ambushData call AMBUSH_enemiesPosition;
	private _grp             = [];

	//["_ambushData:", _ambushData] call MIV_fnc_log;
	//["_spawnPosition:", _spawnPosition] call MIV_fnc_log;

    {
		//["_x:", _x] call MIV_fnc_log;
		_position = _x;
		while {(surfaceiswater _x)} do {
			_position = _ambushData call AMBUSH_enemiesPosition;
			//["_position:", _position] call MIV_fnc_log;
		};		
		for "_counter" from 0 to 20 do {
			_newPosition = [_position,0,50,5,0,20,0] call BIS_fnc_findSafePos;
			if ((_position distance _newPosition) < 55) exitWith {
				_x = _newPosition;
			};
		};
		_grp = [_x,_enemySize,_side] call compile preprocessFileLineNumbers 'scripts\mobileAmbush\spawnUnits.sqf';
		[_grp,_positionVehicle] call AMBUSH_waypoints;
		
	} forEach _spawnPosition;
	
} forEach _vehiclesDirection;

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/