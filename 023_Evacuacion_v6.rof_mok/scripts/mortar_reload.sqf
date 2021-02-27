/*******************************************************************************
                          Realizado por |ArgA|Vultur|Sgt
*******************************************************************************/

params ["_morter", "_ammunition"];

_morter setVehicleAmmo 0.0;

{
	_morter addMagazine _ammunition;

} forEach [1,2,3,4];