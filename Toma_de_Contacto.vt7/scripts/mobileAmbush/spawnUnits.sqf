/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

params["_pos","_grpSize","_side"];

if (!isServer) exitWith {};

private ["_grp","_unit","_pool"];

_grpSize params["_grpMin","_grpMax"];
_difference = _grpMax-_grpMin;
_randomDifference = floor(random _difference);
_grpSize = _randomDifference + _grpMin;

private _tempArray=[];
private _InfPool=	["LOP_IRA_Infantry_SL","LOP_IRA_Infantry_Rifleman","LOP_IRA_Infantry_AR","LOP_IRA_Infantry_Rifleman","LOP_IRA_Infantry_Rifleman","LOP_IRA_Infantry_Rifleman"];

for "_i" from 0 to 5 do {
	_unit = _InfPool select(floor(random(count _InfPool)));
	_tempArray set[count _tempArray, _unit];
};

_pool = _tempArray;


_grp=createGroup _side;

for "_x" from 1 to _grpSize do {
	_unitType=_pool select (floor(random(count _pool)));
	_unit = _grp createUnit [_unitType, _pos, [], 6, "FORM"];
	
	_unit removeMagazines "HandGrenade";
	_unit removeMagazines "MiniGrenade";
	
	//TODO Hacer bien esta funcion
	//_unit=[_unit,_unitType] call compile preprocessFileLineNumbers 'scripts\mobileAmbush\spawnUnits.sqf';

};

_grp

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/