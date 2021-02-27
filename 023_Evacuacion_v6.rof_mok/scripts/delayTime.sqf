/*******************************************************************************
                          Realizado por |ArgA|Vultur|Sgt
*******************************************************************************/

private _initialTime = time;
private _inicioDelay =  6;//600;
private _bravoDelay  = 3060; 
private _baseDelay   = 4930;
private _finalDelay  = 8290;

waitUntil { time > _initialTime + _inicioDelay};
VUL_ALFA = true;

waitUntil { time > _initialTime + _bravoDelay};
["scripts\repliegue_a_bravo.sqf"] remoteExec ["BIS_fnc_execVM", 0, false];

waitUntil { time > _initialTime + _bravoDelay + _inicioDelay};
VUL_CHARLY_BRAVO = true;
VUL_DELTA_BRAVO  = true;

waitUntil { time > _initialTime + _baseDelay};
["scripts\repliegue_a_base.sqf"] remoteExec ["BIS_fnc_execVM", 0, false];

waitUntil { time > _initialTime + _baseDelay + _inicioDelay};
VUL_MIKE_TANGO = true;

waitUntil { time > _initialTime + _finalDelay};
["scripts\repliegue_final.sqf"] remoteExec ["BIS_fnc_execVM", 0, false];

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Sgt
*******************************************************************************/
