/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

private _text = "<t align='left'>";
_text = format["%1<t color='#00B3FF' align='left' size = '.6'>Atento ARGA, Mando llama</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Mantenga sus posiciones, se aproximan refuerzos para relevarlos y finalizar la tarea</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Rompa contacto si tuviese</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Fije punto de reunión de sus tropas/t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>SAQUE FOTO DE PERSONAL SUPERVIVIENTE</t><br/>",_text];
_text = format["%1<t color='#00B3FF' size = '.6'>Corto</t>",_text];
_text = format["%1</t>",_text];

for "_i" from 1 to 2 do {
	playsound "Beeper2";
	//[_text,-0.65,1.1,14,1,0] spawn BIS_fnc_dynamicText;
	[_text,0.3,0.4,14,1,0] spawn bis_fnc_dynamictext;
	sleep 60;
};

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/