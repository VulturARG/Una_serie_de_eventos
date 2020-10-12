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
EOS_KILLCOUNTER=FALSE;		// Counts killed units

// Facciones
// 5: OPFOR
// 6: Independientes
// 7: Civiles

private _civilMarkers       = ["Civil_1","Civil_2","Civil_3","Civil_4","Civil_5","Civil_6","Civil_7"];
private _unknownMarkers     = ["Indecisos_1","Indecisos_10","Indecisos_11","Indecisos_2","Indecisos_3","Indecisos_4","Indecisos_5","Indecisos_6","Indecisos_7","Indecisos_8","Indecisos_9"];
private _unknownSide        = [EAST,EAST,CIVILIAN];
private _enemyMarkers       = ["Enemigos_10","Enemigos_14","Enemigos_18","Enemigos_19","Enemigos_20","Enemigos_4","Enemigos_5","Enemigos_6","Enemigos_9","Enemigos_1","Enemigos_11","Enemigos_12","Enemigos_13","Enemigos_15","Enemigos_16","Enemigos_17","Enemigos_2","Enemigos_3"];
private _fewEnemyMarkers    = ["few_enemies_1","few_enemies_2","few_enemies_3","few_enemies_4","few_enemies_5","few_enemies_6","few_enemies_7","few_enemies_8","few_enemies_9","few_enemies_10"];
private _randomSide         = EAST;
private _randomFaction      = 5;
private _activationDistance = 400;

// Aliados
[_civilMarkers,[0,4,100],[4,1,100],[0,0,0],[0,0],[0],[0,0,00],[7,1,_activationDistance,CIVILIAN,false]] call EOS_Spawn;

// Indecisos

{
  _randomSide = _unknownSide call BIS_fnc_selectRandom;
  _randomFaction = if (_randomSide == EAST) then { 5 } else { 7 };
  [[_x],[0,2,100],[10,1,100],[0,0,0],[0,0],[0],[0,0,00],[_randomFaction,1,_activationDistance,_randomSide,false]] call EOS_Spawn;

} forEach _unknownMarkers;

// Ciudad principal en la frontera (Virojoki)
[["Enemigos_1"],[0,2,100],[15,3,100],[0,0,0],[0,0],[0],[0,0,00],[5,1,_activationDistance,EAST,false]] call EOS_Spawn;

//Ciudades enemigas
[_enemyMarkers,[1,3,100],[4,3,100],[0,0,0],[0,0],[0],[0,0,00],[5,1,_activationDistance,EAST,false]] call EOS_Spawn;

//Sectores pequeños a proteger
[_fewEnemyMarkers,[0,3,100],[6,1,100],[0,0,0],[0,0],[0],[0,0,00],[5,1,_activationDistance,EAST,false]] call EOS_Spawn;

// Potencia
[["Potencia_1"],[0,2,100],[15,3,100],[0,0,0],[0,0],[0],[0,0,00],[5,1,_activationDistance,EAST,false]] call EOS_Spawn;
[["Potencia_2"],[0,4,100],[6,2,100],[0,0,0],[0,0],[0],[0,0,00],[5,1,_activationDistance,EAST,false]] call EOS_Spawn;

_unknownSide = [EAST,EAST,EAST,EAST,CIVILIAN];
private _enemyMarkers = ["Bosques_1","Bosques_2","Bosques_3","Bosques_4","Bosques_5","Bosques_6","Bosques_7","Bosques_8","Bosques_9","Bosques_10","Bosques_11","Bosques_12","Bosques_13","Bosques_14","Bosques_15","Bosques_16","Bosques_17","Bosques_18","Bosques_19","Bosques_20","Bosques_21","Bosques_22","Bosques_23","Bosques_24","Bosques_25","Bosques_26","Bosques_27","Bosques_28","Bosques_29","Bosques_30","Bosques_31","Bosques_32","Bosques_33"];
private _angle = 100;

// Bosque
{
  _randomSide = _unknownSide call BIS_fnc_selectRandom;
  _randomFaction = if (_randomSide == EAST) then { 5 } else { 7 };
  [[_x],[3,1,250+random 150],[0,2,500],[0,1500],[0,1,1500],[0,3,1500,600],[0,3,300,5000],[_randomFaction,1,_randomSide,FALSE,FALSE],[10,1,300,FALSE,FALSE],_angle] call Bastion_Spawn;
  //["MARKER:", _x,"SIDE:",_randomSide,_randomFaction] call MIV_fnc_log;
} forEach _enemyMarkers;

/*******************************************************************************
                            Modify by |ArgA|Vultur|Sgt
*******************************************************************************/
//["MARKER:", _x,"SIDE:",_randomSide] call MIV_fnc_log;
