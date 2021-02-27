/*******************************************************************************
                          Realizado por |ArgA|Vultur|Sgt
*******************************************************************************/

private _text = "<t align='left'>";
_text = format["%1<t color='#00B3FF' align='left' size = '.6'>Atento ARGA, Mando llama</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>El puesto INDIA ALFA a iniciado la retirada a INDIA BRAVO</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Puesto CHARLIE ALFA redespliegue inmediatamente a la posición CHARLIE BRAVO</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Puesto DELTA ALFA redespliegue inmediatamente a la posición DELTA BRAVO</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Hay 2 vehículos en punto EVAC, para una rápida extracción</t><br/>",_text];
_text = format["%1<t color='#00B3FF' size = '.6'>Corto</t>",_text];
_text = format["%1</t>",_text];

for "_i" from 1 to 2 do {
	//playsound "Beeper2";
	[_text,0.3,0.4,14,1,0] spawn bis_fnc_dynamictext;
	sleep 60;
};

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Sgt
*******************************************************************************/