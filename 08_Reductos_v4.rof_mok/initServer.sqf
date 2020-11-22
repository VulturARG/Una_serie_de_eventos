/*******************************************************************************
                          Realizado por |ArgA|MIV
*******************************************************************************/

call compile preprocessFileLineNumbers "core\events\initServer.sqf";

/*******************************************************************************
                          Realizado por |ArgA|MIV
*******************************************************************************/

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

execVM "scripts\inicio.sqf";

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

{
    if (!(isPlayer  _x))then
    {
        _x setSkill ["aimingAccuracy",0.10];
        _x setSkill ["aimingShake",0.90];
        _x setSkill ["aimingSpeed",0.10];
        _x setSkill ["spotDistance",0.80];
        _x setSkill ["spotTime",0.70];
        _x setSkill ["courage",0.30];
        _x setSkill ["reloadSpeed",0.30];
        _x setSkill ["commanding",0.70];
    }
}forEach allUnits;