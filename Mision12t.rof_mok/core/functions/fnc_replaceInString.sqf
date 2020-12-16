/*******************************************************************************
                            Realizado por |ArgA|MIV
*******************************************************************************/

// https://forums.bohemia.net/forums/topic/216673-quick-stringreplace/?tab=comments#comment-3290402

params["_str", "_find", "_replace"];

private["_return", "_len", "_pos"];

if (!(_find isEqualType [])) then {
	_find = [_find];
};

{
	_return = "";
	_len = count _x;        
	_pos = _str find _x;
	
	while {(_pos != -1) && (count _str > 0)} do {
		_return = _return + (_str select [0, _pos]) + _replace;
		
		_str = (_str select [_pos+_len]);
		_pos = _str find _x;
	};    
	_str = _return + _str;
} forEach _find;

_str;


/*******************************************************************************
                            Realizado por |ArgA|MIV
*******************************************************************************/