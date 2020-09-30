/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

sleep 240;

private _text = "<t align='left'>";
_text = format["%1<t color='#ff0000' align='left' size = '.6'>Atento ARGA, Mando llama</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Regrese a Base inmediatamente</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Pese a esta emboscada hay civiles aliados</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>No dispare si no le disparan primero</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Encontrará suministros en los pueblos</t><br/>",_text];
_text = format["%1<t color='#ff0000' size = '.6'>Corto</t>",_text];
_text = format["%1</t>",_text];

for "_i" from 1 to 2 do {
	playsound "Beeper2";
	[_text,-0.65,1.1,14,1,0,789] spawn BIS_fnc_dynamicText;
	sleep 45;
};

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/