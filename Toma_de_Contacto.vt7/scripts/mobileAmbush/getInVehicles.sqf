/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

/*params[["_convoy",[]]];
{
	["Type name _x",typeName _x,_x] call MIV_fnc_log;
	_x addEventHandler ["GetIn", {
		params ["_vehicle", "_role", "_unit", "_turret"];
		_unit setCaptive 1;
		_unit allowDamage false;
		["Unit:",_unit] call MIV_fnc_log;

	}];
	
} forEach _convoy;
*/
params ["_convoyVehicle"];

_convoyVehicle addEventHandler ["GetIn", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	
	_unit setCaptive 1;
	_unit allowDamage false;
}];

_convoyVehicle addEventHandler ["GetOut", {
	params ["_vehicle", "_role", "_unit", "_turret"];

	_unit execVM 'scripts\mobileAmbush\getOutVehicle.sqf';
}];

	

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/
//["Unit:",_unit] call MIV_fnc_log;