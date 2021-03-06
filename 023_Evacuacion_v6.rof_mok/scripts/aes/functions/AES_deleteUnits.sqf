/*******************************************************************************
                            Created by |ArgA|Vultur|Cbo¹
*******************************************************************************/

params ["_side","_debugLog","_marker","_waves"];

private _unconscious = [];
private _enemies     = [];
private _markerPos = getMarkerPos _marker;

_unconscious = allUnits select {_x getVariable "ACE_isUnconscious" isEqualTo true && !isPlayer _x && (side _x == _side)};
if (_debugLog) then {[["[AES_log]",_marker,"Wave", _waves,"Inconscientes",count _unconscious,_side]] call AES_log;};

//_enemies = allUnits select {side _x == _side && _marker in (groupID group _x) && (_markerPos distance2D _x) > AES_DELETE_DISTANCE};
_enemies = allUnits select { (_marker in ((group _x) getVariable "AES_GROUP_NAME")) && (_markerPos distance2D _x) > AES_DELETE_DISTANCE};
if (_debugLog) then {[["[AES_log]",_marker,"Wave", _waves,"IAs>AES_DELETE_DISTANCE",count _enemies,_side]] call AES_log;};

{ 
	if (!(isPlayer _x))then { 
		deletevehicle _x;
	} 
}foreach (_enemies + _unconscious);

if (_debugLog) then {
	_unconscious = allUnits select {_x getVariable "ACE_isUnconscious" isEqualTo true && !isPlayer _x && (side _x == _side)};
	[["[AES_log]",_marker,"Wave", _waves,"Inconscientes(Post)",count _unconscious,_side]] call AES_log;
};

if (_debugLog) then {
	//_enemies = allUnits select {side _x == _side && _marker in (groupID group _x) && (_markerPos distance2D _x) > AES_DELETE_DISTANCE};
	_enemies = allUnits select { (_marker in ((group _x) getVariable "AES_GROUP_NAME")) && (_markerPos distance2D _x) > AES_DELETE_DISTANCE};
	[["[AES_log]",_marker,"Wave", _waves,"IAs>AES_DELETE_DISTANCE(Post)",count _enemies,_side]] call AES_log;
}

/*******************************************************************************
                            Created by |ArgA|Vultur|Cbo¹
*******************************************************************************/