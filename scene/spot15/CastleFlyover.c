#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"

#include "CastleFlyover.h"

s32 Something[] = {
	CS_BEGIN_CUTSCENE(4, 271),
	CS_TERMINATOR(93, 99, 100),
	CS_TEXT_LIST(3),
		CS_TEXT_DISPLAY_TEXTBOX(0x00F90, 15, 85, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0F91, 105, 185, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0F92, 200, 270, 0x0000, 0x0000, 0x0000),
	CS_CAM_POS_LIST(0, 481),
		CS_CAM_POS(0, 0, 0, 0x42700000, -528, 0, 420, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 205, 276, -71, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 2253, -294, 445, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 3108, -38, 211, 0),
		CS_CAM_POS(0, 0, 0, 0x42f00000, 2183, -72, -2404, 0),
		CS_CAM_POS(0, 0, 0, 0x42f00000, 1999, 242, -2920, 0),
		CS_CAM_POS(0, 0, 0, 0x42f00000, 1995, 143, -3109, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(0, 550),
		CS_CAM_FOCUS_POINT(0, 0, 50, 0x42700000, -484, 0, 386, 0),
		CS_CAM_FOCUS_POINT(0, 0, 60, 0x42700000, 221, 232, -102, 0),
		CS_CAM_FOCUS_POINT(0, 0, 70, 0x42700000, 2205, -294, 415, 0),
		CS_CAM_FOCUS_POINT(0, 0, 90, 0x42700000, 3079, -38, 163, 0),
		CS_CAM_FOCUS_POINT(0, 0, 70, 0x42f00000, 2229, -41, -2409, 0),
		CS_CAM_FOCUS_POINT(0, 0, 70, 0x42f00000, 2046, 223, -2897, 0),
		CS_CAM_FOCUS_POINT(0, 0, 70, 0x42f00000, 2024, 124, -3065, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_END(),
};
