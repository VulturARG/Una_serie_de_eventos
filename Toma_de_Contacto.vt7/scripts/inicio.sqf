/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/


private _Nro_Jugadores = 0;
//Cuento los jugadores a los 10 minutos de iniciado la partida
//TODO poner el tiempo en 600
waitUntil { time > 6};
private _headlessClients = entities "HeadlessClient_F";
private _humanPlayers = allPlayers - _headlessClients;
_Nro_Jugadores = count _humanPlayers;

VUL_VEHICLES_CONVOY = [V_1,V_2,V_3,V_4];

//[_vehiclesConvoy] execVM 'scripts\mobileAmbush\getInVehicles.sqf';
//[_vehiclesConvoy] call compile preprocessFileLineNumbers 'scripts\mobileAmbush\getInVehicles.sqf';


// Activo la zona EOS
//_markers,_waves,_jugadores,_angle
//["M_Panagia_EOS",0,_Nro_Jugadores,90] execVM "scripts\eos\OpenMe.sqf";


/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/
