/* 
 * This file contains config parameters and a function call to start the civilian script.
 * The parameters in this file may be edited by the mission developer.
 *
 * See file Engima\Civilians\Documentation.txt for documentation and a full reference of 
 * how to customize and use Engima's Civilians.
 */
 
private ["_parameters"];

// Set civilian parameters.
_parameters = [
	["UNIT_CLASSES", ["LOP_CHR_CIV_RANDOM"]],
	["UNITS_PER_BUILDING", 0.1],
	["MAX_GROUPS_COUNT", 15],
	["MIN_SPAWN_DISTANCE", 200],
	["MAX_SPAWN_DISTANCE", 600],
	["BLACKLIST_MARKERS", ["marker_50", "marker_51", "marker_52", "marker_53", "marker_54"]],
	["HIDE_BLACKLIST_MARKERS", true],
	["ON_UNIT_SPAWNED_CALLBACK", {}],
	["ON_UNIT_REMOVE_CALLBACK", { true }],
	["DEBUG", false]
];

// Start the script
_parameters spawn ENGIMA_CIVILIANS_StartCivilians;
