params["_pos","_grpSize","_faction","_side"];

if (!isServer) exitWith {};
// SINGLE INFANTRY GROUP
private ["_grp","_unit","_pool"];

_grpSize params["_grpMin","_grpMax"];
_d = _grpMax-_grpMin;
_r = floor(random _d);
_grpSize = _r + _grpMin;
/*
if (surfaceiswater _pos) then {
	_pool=[_faction,1] call eos_fnc_getunitpool;
}else{
	_pool=[_faction,0] call eos_fnc_getunitpool;
};
*/

_pool=[_faction,0] call eos_fnc_getunitpool;

_grp=createGroup _side;

for "_x" from 1 to _grpSize do {
	_unitType = _pool select (floor(random(count _pool)));
	_unit     = _grp createUnit [_unitType, _pos, [], 6, "FORM"];
	_unit addEventHandler ["Killed", {_this execVM "scripts\eos\functions\AES_garbage_collector.sqf"}];
	
	_unit removeMagazines "HandGrenade";
	_unit removeMagazines "MiniGrenade";
	
	_unit = [_unit,_unitType] call eos_fnc_infInv;
};

[_grp] call compile preprocessFileLineNumbers 'scripts\eos\functions\AES_transferGroups.sqf';

_grp


//["INF_FNC:","_unit out:", _unit] call MIV_fnc_log;