/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

private _text = "<t align='left'>";
_text = format["%1<t color='#00B3FF' align='left' size = '.6'>Atento ARGA, Mando llama</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Se reciben multiples reportes de actividad militar Duecia</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Extraiga a los diplomáticos hasta punto seguro en Portsson y brinde seguridad allí</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>El resto de ArgA proteja puntos fronterisos /t><br/>",_text];
//_text = format["%1<t color='#ffffff' size = '.6'>SAQUE FOTO DE PERSONAL SUPERVIVIENTE</t><br/>",_text];
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