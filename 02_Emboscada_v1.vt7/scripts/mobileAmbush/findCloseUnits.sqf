/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

params ["_positions"];

_positions = [[9802.21,9172.91,-0.0174561],[8502.02,13194.3,-0.0183372],[9897.33,9610.24,-0.0158825],[8738.31,13257.8,-0.0173836],[9831.27,9297.11,0.05585],[8299.55,13123.1,-0.0115585],[10081,9716.21,-0.0216923],[9690.46,9030.87,0.00582504],[9068.47,13313,-0.0198288],[9486.67,9041.35,-0.0085535],[9886.76,9417.36,-0.0139809],[9006.65,13306.6,-0.0194244]];

private _auxiliarPositions = _positions;
private _maximunDistance = 300;
private _convoys = [];

_startVehicle = _auxiliarPositions select 0;
_convoys append [_startVehicle];
_auxiliarPositions = _auxiliarPositions - _convoys;
_auxiliarPositions = [_auxiliarPositions, [], { _startVehicle distance _x }, "ASCEND"] call BIS_fnc_sortBy;
{
    //["_x:", _x] call MIV_fnc_log;
    //["_startVehicle:", _startVehicle] call MIV_fnc_log;

    if (_x distance _startVehicle <= _maximunDistance) then {
        _convoys append [_x];
    }; 
    
} forEach _auxiliarPositions;


["_convoys:", _convoys] call MIV_fnc_log;
//[[9802.21,9172.91,-0.0174561],[9831.27,9297.11,0.05585],[9690.46,9030.87,0.00582504],[9886.76,9417.36,-0.0139809]]




/*//////////////////////////////////////

vehiculos = [v1,v2,v3...]
vehiculoBase = select random vehiculos
convoys = [[vehiculoBase]]
vehiculos = sort vehiculos // <- sortear por distancia a vehiculoBase (menor a mayor)
for vehiculo in vehiculos:
    analizar_si_añadir(vehiculo)

la funcion analizar_si_añadir tendria que hacer lo de recorrer todos los convoys y ver si en alguno hay un vehiculo que cumpla la distancia minima
me olvide quitar vehiculoBase de vehiculos

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

