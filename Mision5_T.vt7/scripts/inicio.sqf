/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

private _Nro_Jugadores = 0;
//Cuento los jugadores a los 10 minutos de iniciado la partida
//TODO poner el tiempo en 600
//waitUntil { time > 600};
/*
_Nro_Jugadores = call MIV_fnc_countAlivePlayers;
*/

// Activo la zona EOS
//_markers,_waves,_jugadores,_angle
["",0,_Nro_Jugadores,90] execVM "scripts\eos\OpenMe.sqf";


//execVM "scripts\timeOrderFinish.sqf";

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/
