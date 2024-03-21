SixIsland_AlteringCave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_AlteringCave_OnTransition
	.byte 0

SixIsland_AlteringCave_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_ALTERING_CAVE
	end

SixIsland_AlteringCave_EventScript_Sign::
	lockall
	msgbox SixIsland_AlteringCave_Sign_Text
	releaseall
	return

SixIsland_AlteringCave_Sign_Text:
	.string "In these halls lie the Summoning\n"
	.string "Stones, used by the Ancients to call\l"
	.string "upon the gods of Land, Sea and Sky in\n"
	.string "their time of need.\p"
    .string "Three Guardians were left behind to\n"
    .string "protect the Stones from the unworthy.$"
