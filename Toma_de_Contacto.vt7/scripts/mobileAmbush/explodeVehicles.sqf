/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

params ["_vehicle"];

if (typeName _vehicle != "OBJECT") exitWith { };

sleep random [2,7,16];
"M_Mo_82mm_AT_LG" createVehicle getPos _vehicle;
sleep 0.5;
private _fireAndSmoke = "test_EmptyObjectForFireBig" createVehicle getPos _vehicle; 
_fireAndSmoke attachTo [_vehicle, [0, 2, 0]];
sleep random [1,3,5];
_vehicle setDamage 0.9;
sleep 10;
deletevehicle _fireAndSmoke;

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/
//["VEHICULOS:",typeName _x, _x] call MIV_fnc_log;