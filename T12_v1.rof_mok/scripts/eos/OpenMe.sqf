/*******************************************************************************
                            Modify by |ArgA|Vultur|Sgt
*******************************************************************************/
/* EOS 1.98 by BangaBob
GROUP SIZES
 0 = 1
 1 = 2,4
 2 = 4,8
 3 = 8,12
 4 = 12,16
 5 = 16,20

EXAMPLE CALL - EOS
 null = [["MARKERNAME","MARKERNAME2"],[2,1,70],[0,1],[1,2,30],[2,60],[2],[1,1,10],[1,1,250,WEST]] call EOS_Spawn;
 
 null=
 [["M1","M2","M3"],
 [HOUSE GROUPS,SIZE OF GROUPS,PROBABILITY],
 [PATROL GROUPS,SIZE OF GROUPS,PROBABILITY],
 [LIGHT VEHICLES,SIZE OF CARGO,PROBABILITY],
 [ARMOURED VEHICLES,PROBABILITY],
 [STATIC VEHICLES,PROBABILITY],
 [HELICOPTERS,SIZE OF HELICOPTER CARGO,PROBABILITY],
 [FACTION,MARKERTYPE,DISTANCE,SIDE,HEIGHTLIMIT,hint_DEBUG,BIS_fnc_logFormat_DEBUG]] call EOS_Spawn;

//EXAMPLE CALL - BASTION
null=
[["M1","M2","M3"],
[PATROL GROUPS,SIZE OF GROUPS,DISTANCIA APARICION],
[LIGHT VEHICLES,SIZE OF CARGO,DISTANCIA APARICION],
[ARMOURED VEHICLES,DISTANCIA APARICION],
[HELICOPTERS,SIZE OF HELICOPTER CARGO,DISTANCIA APARICION], //Si SIZE OF HELICOPTER es cero aparecen helis de ataque
[PARACAIDISTAS,SIZE OF HELICOPTER CARGO,DISTANCIA APARICION,ALTURA SALTO],
[HALO,SIZE OF GROUPS,DISTANCIA APARICION,ALTURA SALTO],
[FACTION,MARKERTYPE,SIDE,HEIGHTLIMIT,hint_DEBUG,BIS_fnc_logFormat_DEBUG],
[INITIAL PAUSE, NUMBER OF WAVES, DELAY BETWEEN WAVES, INTEGRATE EOS, SHOW HINTS],
[angulo]] call Bastion_Spawn;

//EXAMPLE CALL - REDIRECT WP BASTION
//Borra todos los WP de las unidades del bando y luego crea otros

[["M1","M2","M3"], //Marcadores _angle donde redirigir las unidades
[["E1",% redirigido,"ND"],["E2",% redirigido,"ND"]],  // ["E1"] -> Nombre de las unidades parcialmente redirigidas. Puede ser vacio
                                                      // % redirigido [0 _angle 100] -> % del grupo que se redirige al nuevo WP
                                                      // ["ND"] -> Nombre del marcador que será el nuevo destino de las unidades remanentes (opcional)
[Bando]                                               // Bando
] call Redirect_WP_Bastion_Spawn;

*/
params ["_marker",["_waves",0],["_jugadores",1],["_angle",360]];
//_marker: Nombre del marker _angle activar
//_waves: Número de oleadas
//_jugadores: Número de jugadores
//_angle: Ángulo del arco de ataque

//systemChat format ["_marker %1 _waves  %2 _jugadores %3 _angle %4",_marker,_waves,_jugadores,_angle];
/////////////////////////////////////////////////////////////////*/

EOS_Spawn = compile preprocessfilelinenumbers "scripts\eos\core\eos_launch.sqf";
Bastion_Spawn = compile preprocessfilelinenumbers "scripts\eos\core\b_launch.sqf";
//Bastion_Redirect_WP = compile preprocessfilelinenumbers "scripts\eos\core\b_redirijoUnidades.sqf";
null=[] execVM "scripts\eos\core\spawn_fnc.sqf";

onplayerConnected {[] execVM "scripts\eos\Functions\EOS_Markers.sqf";};

IsVCOM_MOD = false;
publicVariable "IsVCOM_MOD";

VictoryColor="colorBLUFOR";	// Colour of marker after completion
hostileColor="colorOPFOR";	// Default colour when enemies active
bastionColor="colorBLUFOR";	// Colour for bastion marker

EOS_DAMAGE_MULTIPLIER=1;	// 1 is default
EOS_KILLCOUNTER=false;		// Counts killed units

// Facciones
// 5: OPFOR
// 6: Independientes
// 7: Civiles

private _activationAlfaCharly = 900;
private _activationBravo = 700;

// Insurgentes
private _charlie         = ["charlie_1" ,"charlie_2" ,"charlie_3" ,"charlie_4" ,"charlie_5" ,"charlie_6" ,"charlie_7" ,"charlie_8"/* ,"charlie_9" ,"charlie_10"*/];
_charlie = _charlie + ["charlie_11"/*,"charlie_12","charlie_13","charlie_14","charlie_15","charlie_16","charlie_17","charlie_18","charlie_19","charlie_20"*/];

[_charlie,[1,3,100],[4,2,100],[0,0,0],[0,0],[0],[0,0,00],[5,1,_activationAlfaCharly,east,false]] call EOS_Spawn;

// Potencia

private _alfa          = ["alfa_1" ,"alfa_2" ,"alfa_3" ,"alfa_4"/* ,"alfa_5" ,"alfa_6" ,"alfa_7" ,"alfa_8" ,"alfa_9" ,"alfa_10"*/];
//_alfa = _alfa   + ["alfa_11","alfa_12"/*,"alfa_13","alfa_14","alfa_15","alfa_16","alfa_17","alfa_18","alfa_19","alfa_20"*/];

[_alfa,[1,2,100],[4,3,100],[0,0,0],[0,0],[0],[0,0,00],[6,1,_activationAlfaCharly,independent,false]] call EOS_Spawn;

private _bravo          = ["bravo_1" ,"bravo_2" ,"bravo_3" ,"bravo_4" ,"bravo_5" ,"bravo_6" ,"bravo_7" ,"bravo_8" ,"bravo_9" ,"bravo_10"];
_bravo   = _bravo + ["bravo_11"/*,"bravo_12","bravo_13","bravo_14","bravo_15","bravo_16","bravo_17","bravo_18","bravo_19","bravo_20"*/];

[_bravo,[0,0,100],[6,2,100],[0,0,0],[0,0],[0],[0,0,00],[6,1,_activationBravo,independent,false]] call EOS_Spawn;

/*******************************************************************************
                            Modify by |ArgA|Vultur|Sgt
*******************************************************************************/
//["MARKER:", _x,"SIDE:",_randomSide] call MIV_fnc_log;
