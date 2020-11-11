/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

DETONADO = false;

private _Nro_Jugadores = 0;

//TODO poner el tiempo en 600
//waitUntil { time > 900};

private _enemy_units = [blanco_1,  blanco_2,  blanco_3,  blanco_4,  blanco_5,  blanco_6,  blanco_7,  blanco_8,  blanco_9,  blanco_10, blanco_11, blanco_12, blanco_13, blanco_14, blanco_15, blanco_16, blanco_17, blanco_18, blanco_19, blanco_20, blanco_21, blanco_22, blanco_23, blanco_24, blanco_25, blanco_26, blanco_27, blanco_28, blanco_29, blanco_30, blanco_31, blanco_32, blanco_33, blanco_34, blanco_35, blanco_36 /*, blanco_27, blanco_28, blanco_29, blanco_30*/]; 

{
    _x addEventHandler ["Killed", { "scripts\alarma.sqf" remoteExec ["execVM", 0]; }];
    
} forEach _enemy_units;

/*
_Nro_Jugadores = call MIV_fnc_countAlivePlayers;
*/

// Activo la zona EOS
//_markers,_waves,_jugadores,_angle
["",0,_Nro_Jugadores,90] execVM "scripts\eos\OpenMe.sqf";

//["scripts\screenOrder.sqf"] remoteExec ["BIS_fnc_execVM", 0, false];

//sleep 120;
//west setFriend [resistance, 0];
//resistance setFriend [west, 0];

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/
