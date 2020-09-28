/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

waitUntil { time > 300};

private _text = "<t align='left'>";
_text = format["%1<t color='#ff0000' align='left' size = '.6'>Atento ARGA, Mando llama</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Regrese a Base inmediatamente</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>No dispare contra civiles si no le disparan primero</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>En pueblos aliados podrá encontrar suministros</t><br/>",_text];
_text = format["%1<t color='#ff0000' size = '.6'>Corto</t>",_text];
_text = format["%1</t>",_text];

for "_i" from 1 to 2 do {
	[_text,-0.65,1.1,14,1,0,789] spawn BIS_fnc_dynamicText;
	sleep 30;
};

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/