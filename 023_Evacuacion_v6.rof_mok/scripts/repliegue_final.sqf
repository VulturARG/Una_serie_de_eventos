/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/

private _text = "<t align='left'>";
_text = format["%1<t color='#00B3FF' align='left' size = '.6'>Atento ARGA, Mando llama</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Todo el personal ha evacuado exitosamente la peninsula</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Redespliegue inmediatamente a las posiciones:</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>ROMEO HOTEL para evacuación aérea</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>ROMEO BRAVO para evacuación marítima</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Felicitaciones por su labor</t><br/>",_text];
_text = format["%1<t color='#ffffff' size = '.6'>Saque su famosa foto en el punto de evacuación</t><br/>",_text];
_text = format["%1<t color='#00B3FF' size = '.6'>Corto y fuera</t>",_text];
_text = format["%1</t>",_text];

for "_i" from 1 to 2 do {
	//playsound "Beeper2";
	[_text,0.3,0.4,14,1,0] spawn bis_fnc_dynamictext;
	sleep 60;
};

/*******************************************************************************
                          Realizado por |ArgA|Vultur|Cbo¹
*******************************************************************************/