/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

//private _Nro_Jugadores = 0;

//TODO poner el tiempo en 600
waitUntil { time > 900};

LANZAR_ATAQUE = true;

/*
_Nro_Jugadores = call MIV_fnc_countAlivePlayers;
*/

// Activo la zona EOS
//_markers,_waves,_jugadores,_angle
//["",0,_Nro_Jugadores,90] execVM "scripts\eos\OpenMe.sqf";

["scripts\screenOrder.sqf"] remoteExec ["BIS_fnc_execVM", 0, false];

sleep 120;
west setFriend [resistance, 0];
resistance setFriend [west, 0];

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/
