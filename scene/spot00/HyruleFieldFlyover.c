#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"

#include "HyruleFieldFlyover.h"

s32 HyruleFieldFlyover[] = {
	CS_BEGIN_CUTSCENE(7, 5000),
	CS_TERMINATOR(84, 260, 261),
	CS_TEXT_LIST(3),
		CS_TEXT_DISPLAY_TEXTBOX(0x0F00, 15, 85, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0F01, 100, 170, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0F02, 185, 260, 0x0000, 0x0000, 0x0000),
	CS_PLAY_BGM_LIST(1),
		CS_PLAY_BGM(0x76 + 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0),
	CS_CAM_POS_LIST(0, 421),
		CS_CAM_POS(0, 0, 0, 0x42700000, -6045, -133, 957, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -4999, -163, 1382, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -4540, -90, 1827, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -2530, 225, 1351, 0),
		CS_CAM_POS(0, 0, 0, 0x42480000, -2315, 349, 1357, 0),
		CS_CAM_POS(0, 0, 0, 0x42480000, -1535, 422, 1177, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_POS_LIST(175, 576),
		CS_CAM_POS(0, 0, 0, 0x42700000, -807, -354, 12900, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -603, -217, 12811, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 547, -97, 10664, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 429, -114, 10128, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(0, 490),
		CS_CAM_FOCUS_POINT(0, 0, 70, 0x42700000, -6044, -127, 902, 0),
		CS_CAM_FOCUS_POINT(0, 0, 70, 0x42700000, -5003, -151, 1328, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42700000, -4518, -90, 1775, 0),
		CS_CAM_FOCUS_POINT(0, 0, 70, 0x42700000, -2571, 222, 1313, 0),
		CS_CAM_FOCUS_POINT(0, 0, 100, 0x42480000, -2362, 331, 1334, 0),
		CS_CAM_FOCUS_POINT(0, 0, 70, 0x42480000, -1591, 422, 1174, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(175, 675),
		CS_CAM_FOCUS_POINT(0, 0, 100, 0x42700000, -773, -355, 12944, 0),
		CS_CAM_FOCUS_POINT(0, 0, 100, 0x42700000, -568, -200, 12851, 0),
		CS_CAM_FOCUS_POINT(0, 0, 100, 0x42700000, 582, -100, 10707, 0),
		CS_CAM_FOCUS_POINT(0, 0, 100, 0x42700000, 477, -114, 10167, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_END(),
};

