/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/
AMBUSH_enemiesPosition = {
	params ["_spawnPosition","_direction","_spawnDistance","_angle","_desviationAngle"];

	private _dir_attack = _direction + _desviationAngle + (random _angle) - _angle/2;
	
	_spawnPosition = [_spawnPosition, _spawnDistance, _dir_attack] call BIS_fnc_relPos;

	_spawnPosition
};

AMBUSH_waypoints ={
	params ["_group","_position",["_wpType","SAD"],["_wpSpeed","LIMITED"],["_wpBehaviour","COMBAT"],["_wpFormation","LINE"],["_wpCombatMode","RED"]];
				
	_getToMarker = _group addWaypoint [_position, 0];
	_getToMarker setWaypointType       _wpType;
	_getToMarker setWaypointSpeed      _wpSpeed;
	_getToMarker setWaypointBehaviour  _wpBehaviour;
	_getToMarker setWaypointFormation  _wpFormation;
	_getToMarker setWaypointCombatMode _wpCombatMode;
	_getToMarker setWaypointPosition [_position, 50];
	_getToMarker
};

params["_vehiclesPosition","_vehiclesDirection","_side","_enemySize","_spawnDistance","_angle","_desviationAngle","_sideAttack"];

{
	private _positionVehicle = _vehiclesPosition select _forEachIndex;
	private _ambushData      = [];
	private _spawnPosition   = [];
	private _grp             = [];

    for "_sideAtt" from 1 to _sideAttack do {
		if (_sideAtt == 2) then { _desviationAngle = -1 * _desviationAngle;};
		_ambushData    = [_positionVehicle,_x,_spawnDistance,_angle,_desviationAngle,_sideAttack];
		_spawnPosition = _ambushData call AMBUSH_enemiesPosition;
		
		private _safeDistance = _spawnDistance;
		while { count (allPlayers select { _x distance _spawnPosition <= _spawnDistance}) > 0} do {
			_safeDistance  = _safeDistance + 25;
			_ambushData    = [_positionVehicle,_x,_safeDistance,_angle,_desviationAngle,_sideAttack];
			_spawnPosition = _ambushData call AMBUSH_enemiesPosition;
		};
		while {surfaceiswater _spawnPosition} do {
			_spawnPosition = _ambushData call AMBUSH_enemiesPosition;
		};		
		for "_counter" from 0 to 20 do {
			_newPosition = [_spawnPosition,0,50,5,0,20,0] call BIS_fnc_findSafePos;
			if ((_spawnPosition distance _newPosition) < 55) exitWith {
				_spawnPosition = _newPosition;
			};
		};
		_grp = [_spawnPosition,_enemySize,_side] call compile preprocessFileLineNumbers 'scripts\mobileAmbush\spawnUnits.sqf';
		[_grp,_positionVehicle] call AMBUSH_waypoints;
	};

} forEach _vehiclesDirection;

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/
//["_spawnPosition WATER:", _spawnPosition] call MIV_fnc_log;