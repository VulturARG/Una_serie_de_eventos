/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

//TODO Sacar V_V y CV_V. Borrar vehiculo V_V
VUL_VEHICLES_CONVOY = [V_V,V_1,V_2,V_3,V_4,V_5,V_6,V_7,V_8,V_9,V_10,V_11,V_12,V_13,V_14,V_15,V_16];
VUL_ACTIVE_TRIGGER  = true; 
//VUL_VEHICLES_CONVOY = [V_V,V_4];
private _drivers = [CV_V,CV_1,CV_2,CV_3,CV_4,CV_5,CV_6,CV_7,CV_8,CV_9,CV_10,CV_11,CV_12,CV_13,CV_14,CV_15,CV_16];

private _Nro_Jugadores = 0;
//Cuento los jugadores a los 10 minutos de iniciado la partida
//TODO poner el tiempo en 600
waitUntil { time > 6};
/*
private _headlessClients = entities "HeadlessClient_F";
private _humanPlayers = allPlayers - _headlessClients;
_Nro_Jugadores = count _humanPlayers;
*/

//[_vehiclesConvoy] execVM 'scripts\mobileAmbush\getInVehicles.sqf';
//[_vehiclesConvoy] call compile preprocessFileLineNumbers 'scripts\mobileAmbush\getInVehicles.sqf';

[_drivers] execVM "scripts\deleteCivilianDrivers.sqf";

// Activo la zona EOS
//_markers,_waves,_jugadores,_angle
["M_Panagia_EOS",0,_Nro_Jugadores,90] execVM "scripts\eos\OpenMe.sqf";


/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/
