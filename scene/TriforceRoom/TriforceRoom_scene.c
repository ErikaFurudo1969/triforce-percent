#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "TriforceRoom_scene.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

SCmdBase TriforceRoom_scene_header00[] = {
	SCENE_CMD_SOUND_SETTINGS(0x00, 0x13, 0x71),
	SCENE_CMD_ROOM_LIST(1, &TriforceRoom_scene_roomList),
	SCENE_CMD_MISC_SETTINGS(0x00, 0x0E),
	SCENE_CMD_COL_HEADER(&TriforceRoom_collisionHeader),
	SCENE_CMD_ENTRANCE_LIST(&TriforceRoom_scene_header00_entranceList),
	SCENE_CMD_SPECIAL_FILES(0x00, 0x0002),
	SCENE_CMD_SPAWN_LIST(1, &TriforceRoom_scene_header00_startPositionList),
	SCENE_CMD_SKYBOX_SETTINGS(0x00, 0x00, 0x01),
	SCENE_CMD_ENV_LIGHT_SETTINGS(2, &TriforceRoom_scene_header00_lightSettings),
	SCENE_CMD_CUTSCENE_DATA(&TriforceRoom_scene_header00_cutscene),
	SCENE_CMD_END(),
};

ActorEntry TriforceRoom_scene_header00_startPositionList[] = {
	{ ACTOR_PLAYER, 0, -48, 460, 0, 32768, 0, 0x0FFF },
};

extern u8 _TriforceRoom_room_0SegmentRomStart[];
extern u8 _TriforceRoom_room_0SegmentRomEnd[];

RomFile TriforceRoom_scene_roomList[] = {
	{ (u32)_TriforceRoom_room_0SegmentRomStart, (u32)_TriforceRoom_room_0SegmentRomEnd },
};

EntranceEntry TriforceRoom_scene_header00_entranceList[] = {
	{ 0, 0 },
};

LightSettings TriforceRoom_scene_header00_lightSettings[2] = {
	{ 0x39, 0x40, 0x75, 0x49, 0x49, 0x49, 0x86, 0x82, 0xDB, 0xB7, 0xB7, 0xB7, 0x46, 0x6B, 0x85, 0x7D, 0x7C, 0xA7, 0x7BCF, 0x3200 },
	{ 0x3C, 0x3E, 0x8F, 0x49, 0x49, 0x49, 0xDF, 0xD9, 0xA1, 0xB7, 0xB7, 0xB7, 0x45, 0x67, 0x85, 0xC0, 0xB0, 0x65, 0x3FA2, 0x3200 },
};

SurfaceType TriforceRoom_polygonTypes[] = {
	{ 0x00000000, 0x00000002 },
};

CollisionPoly TriforceRoom_polygons[] = {
	{ 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7fff, 0xff63 },
	{ 0x0000, 0x0003, 0x0004, 0x0005, 0x0000, 0x0000, 0x7fff, 0xffa2 },
	{ 0x0000, 0x0006, 0x0007, 0x0003, 0x0000, 0x7fff, 0x0000, 0x000a },
	{ 0x0000, 0x0005, 0x0008, 0x0004, 0x0000, 0x7fff, 0x0000, 0x0000 },
	{ 0x0000, 0x0009, 0x000a, 0x0007, 0x0000, 0x0000, 0x7fff, 0xff8d },
	{ 0x0000, 0x000b, 0x000c, 0x0009, 0x0000, 0x7fff, 0x0000, 0x0014 },
	{ 0x0000, 0x000d, 0x000e, 0x0000, 0x0000, 0x7fff, 0x0000, 0x0028 },
	{ 0x0000, 0x000f, 0x0010, 0x000c, 0x0000, 0x0000, 0x7fff, 0xff78 },
	{ 0x0000, 0x0011, 0x0002, 0x000f, 0x0000, 0x7fff, 0x0000, 0x001e },
	{ 0x0000, 0x0012, 0x0013, 0x000e, 0x0000, 0x0000, 0x7fff, 0xff4d },
	{ 0x0000, 0x0014, 0x0015, 0x0012, 0x0000, 0x7fff, 0x0000, 0x0032 },
	{ 0x0000, 0x0012, 0x0015, 0x0016, 0x0000, 0x7fff, 0x0000, 0x0032 },
	{ 0x0000, 0x0014, 0x0017, 0x0015, 0x0000, 0x7fff, 0x0000, 0x0032 },
	{ 0x0000, 0x0014, 0x0018, 0x0017, 0x0000, 0x7fff, 0x0000, 0x0032 },
	{ 0x0000, 0x000d, 0x0000, 0x0001, 0x0000, 0x0000, 0x7fff, 0xff63 },
	{ 0x0000, 0x0006, 0x0003, 0x0004, 0x0000, 0x0000, 0x7fff, 0xffa2 },
	{ 0x0000, 0x0006, 0x000a, 0x0007, 0x0000, 0x7fff, 0x0000, 0x000a },
	{ 0x0000, 0x0005, 0x0019, 0x0008, 0x0000, 0x7fff, 0x0000, 0x0000 },
	{ 0x0000, 0x000b, 0x0009, 0x000a, 0x0000, 0x0000, 0x7fff, 0xff8d },
	{ 0x0000, 0x000b, 0x0010, 0x000c, 0x0000, 0x7fff, 0x0000, 0x0014 },
	{ 0x0000, 0x000d, 0x0013, 0x000e, 0x0000, 0x7fff, 0x0000, 0x0028 },
	{ 0x0000, 0x0011, 0x000f, 0x0010, 0x0000, 0x0000, 0x7fff, 0xff78 },
	{ 0x0000, 0x0011, 0x0001, 0x0002, 0x0000, 0x7fff, 0x0000, 0x001e },
	{ 0x0000, 0x0014, 0x0012, 0x0013, 0x0000, 0x0000, 0x7fff, 0xff4d },
};

Vec3s TriforceRoom_vertices[26] = {
	{ 88, -40, 157 },
	{ -88, -30, 157 },
	{ 88, -30, 157 },
	{ 88, -10, 94 },
	{ -88, 0, 94 },
	{ 88, 0, 94 },
	{ -88, -10, 94 },
	{ 88, -10, 115 },
	{ -88, 0, -56 },
	{ 88, -20, 115 },
	{ -88, -10, 115 },
	{ -88, -20, 115 },
	{ 88, -20, 136 },
	{ -88, -40, 157 },
	{ 88, -40, 179 },
	{ 88, -30, 136 },
	{ -88, -20, 136 },
	{ -88, -30, 136 },
	{ 88, -50, 179 },
	{ -88, -40, 179 },
	{ -88, -50, 179 },
	{ 275, -50, 822 },
	{ 277, -50, 179 },
	{ -292, -50, 822 },
	{ -276, -50, 179 },
	{ 88, 0, -56 },
};

CollisionHeader TriforceRoom_collisionHeader = {
	-292,
	-50,
	-56,
	277,
	0,
	822,
	26,
	TriforceRoom_vertices,
	24,
	TriforceRoom_polygons,
	TriforceRoom_polygonTypes,
	0,
	0,
	0
};

s32 TriforceRoom_scene_header00_cutscene[] = {
	CS_BEGIN_CUTSCENE(28, 2000),
	CS_TERMINATOR(81, 1850, 1851),
	CS_TEXT_LIST(10),
		CS_TEXT_DISPLAY_TEXTBOX(0x0ACE, 445, 490, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0E00, 520, 574, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0E00, 605, 654, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0E01, 705, 729, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0E02, 755, 985, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0E03, 990, 1220, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0E04, 1225, 1410, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0E05, 1420, 1519, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0E06, 1530, 1600, 0x0000, 0xFFFF, 0xFFFF),
		CS_TEXT_DISPLAY_TEXTBOX(0x0E07, 1640, 1700, 0x0000, 0x0000, 0x0000),
	CS_SCENE_TRANS_FX(1, 377, 382),
	CS_SCENE_TRANS_FX(5, 382, 389),
	CS_LIGHTING_LIST(2),
		CS_LIGHTING(2, 88, 89, 0, 0, 0, 0, 0, 0, 0, 0),
		CS_LIGHTING(1, 392, 393, 0, 0, 0, 0, 0, 0, 0, 0),
	CS_MISC_LIST(1),
		CS_MISC(10, 1710, 1711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
	CS_PLAY_BGM_LIST(1),
		CS_PLAY_BGM(0x0072 + 1, 525, 1, 0, 0, 0, 0, 0, 0, 0, 0),
	CS_FADE_BGM_LIST(1),
		CS_FADE_BGM(0x0000, 1605, 1645, 0, 0, 0, 0, 0, 0, 0, 0),
	CS_CAM_POS_LIST(0, 266),
		CS_CAM_POS(0, 0, 0, 0x42960000, 481, -41, 349, 0),
		CS_CAM_POS(0, 0, 0, 0x42960000, 281, -43, 349, 0),
		CS_CAM_POS(0, 0, 0, 0x42820000, -119, -47, 348, 0),
		CS_CAM_POS(0, 0, 0, 0x42820000, -196, 3, 308, 0),
		CS_CAM_POS(0, 0, 0, 0x42820000, -207, 23, 238, 0),
		CS_CAM_POS(0, 0, 0, 0x42820000, -172, 39, 128, 0),
		CS_CAM_POS(0, 0, 0, 0x42820000, -121, 53, 58, 0),
		CS_CAM_POS(0, 0, 0, 0x42820000, -77, 68, 17, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_POS_LIST(175, 346),
		CS_CAM_POS(0, 0, 0, 0x42700000, 31, 55, 60, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 20, 55, 30, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -26, 55, 31, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -35, 54, 62, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_POS_LIST(220, 541),
		CS_CAM_POS(0, 0, 0, 0x42700000, 67, 36, 239, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 63, 40, 183, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 80, 46, 116, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 133, 48, 76, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 112, 47, 41, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 56, 53, 34, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 36, 52, 34, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_POS_LIST(407, 492),
		CS_CAM_POS(0, 0, 0, 0x428c0000, 0, -44, 782, 0),
		CS_CAM_POS(0, 0, 0, 0x428c0000, 0, -44, 507, 0),
		CS_CAM_POS(0, 0, 0, 0x428c0000, 0, -44, 356, 0),
		CS_CAM_POS(0, 0, 0, 0x42340000, 0, 78, 287, 0),
		CS_CAM_POS(0, 0, 0, 0x42200000, 0, 89, 153, 0),
		CS_CAM_POS(0, 0, 0, 0x42200000, 0, 98, 5, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_POS_LIST(500, 811),
		CS_CAM_POS(0, 0, 0, 0x42340000, -268, 0, 261, 0),
		CS_CAM_POS(0, 0, 0, 0x42340000, -268, 0, 261, 0),
		CS_CAM_POS(0, 0, 0, 0x42340000, -268, 0, 261, 0),
		CS_CAM_POS(0, 0, 0, 0x42340000, -268, 0, 261, 0),
		CS_CAM_POS(0, 0, 0, 0x42340000, -268, 0, 261, 0),
		CS_CAM_POS(0, 0, 0, 0x42340000, -173, -3, 278, 0),
		CS_CAM_POS(0, 0, 0, 0x42340000, -44, -29, 300, 0),
		CS_CAM_POS(0, 0, 0, 0x42340000, -44, -29, 300, 0),
		CS_CAM_POS(0, 0, 0, 0x42340000, -44, -29, 300, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_POS_LIST(740, 1131),
		CS_CAM_POS(0, 0, 0, 0x420c0000, -61, -10, 251, 0),
		CS_CAM_POS(0, 0, 0, 0x420c0000, -53, -10, 271, 0),
		CS_CAM_POS(0, 0, 0, 0x420c0000, -39, -10, 288, 0),
		CS_CAM_POS(0, 0, 0, 0x420c0000, -20, -10, 298, 0),
		CS_CAM_POS(0, 0, 0, 0x420c0000, 1, -10, 302, 0),
		CS_CAM_POS(0, 0, 0, 0x420c0000, 22, -10, 298, 0),
		CS_CAM_POS(0, 0, 0, 0x420c0000, 41, -10, 287, 0),
		CS_CAM_POS(0, 0, 0, 0x420c0000, 41, -10, 287, 0),
		CS_CAM_POS(0, 0, 0, 0x420c0000, 41, -10, 287, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_POS_LIST(990, 1591),
		CS_CAM_POS(0, 0, 0, 0x42700000, -290, -51, 187, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -262, -49, 115, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -204, -28, -164, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 146, -46, -229, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 244, -45, -38, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 251, -39, 166, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 219, -32, 320, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 112, -39, 332, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 36, -11, 275, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 0, -9, 257, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 0, -10, 257, 0),
		CS_CAM_POS(0, 0, 0, 0x425c0000, 0, -10, 296, 0),
		CS_CAM_POS(0, 0, 0, 0x42480000, 0, -22, 336, 0),
		CS_CAM_POS(0, 0, 0, 0x42480000, 0, -22, 335, 0),
		CS_CAM_POS(0, 0, 0, 0x42480000, 0, -22, 335, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_POS_LIST(1520, 1601),
		CS_CAM_POS(0, 0, 0, 0x42700000, -22, -5, 266, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -22, -5, 266, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -22, -5, 266, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -22, -5, 266, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_POS_LIST(1700, 1941),
		CS_CAM_POS(0, 0, 0, 0x42700000, -156, 0, 161, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -158, 0, 167, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -171, 0, 268, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -112, 8, 353, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, -29, 16, 354, 0),
		CS_CAM_POS(0, 0, 0, 0x42820000, 0, 23, 308, 0),
		CS_CAM_POS(0, 0, 0, 0x42900000, 0, 58, 217, 0),
		CS_CAM_POS(0, 0, 0, 0x42a00000, 0, 89, 136, 0),
		CS_CAM_POS(0, 0, 0, 0x42a00000, 0, 89, 136, 0),
		CS_CAM_POS(0, 0, 0, 0x42a00000, 0, 89, 136, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(0, 285),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42960000, -1, 28, 56, 0),
		CS_CAM_FOCUS_POINT(0, 0, 35, 0x42960000, -1, 28, 56, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42820000, 3, 57, 34, 0),
		CS_CAM_FOCUS_POINT(0, 0, 25, 0x42820000, -1, 73, 25, 0),
		CS_CAM_FOCUS_POINT(0, 0, 35, 0x42820000, -1, 83, 0, 0),
		CS_CAM_FOCUS_POINT(0, 0, 50, 0x42820000, 0, 88, -1, 0),
		CS_CAM_FOCUS_POINT(0, 0, 60, 0x42820000, 0, 91, -1, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42820000, 0, 94, -1, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(175, 365),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42700000, 2, 50, 62, 0),
		CS_CAM_FOCUS_POINT(0, 0, 65, 0x42700000, 1, 50, 62, 0),
		CS_CAM_FOCUS_POINT(0, 0, 65, 0x42700000, -1, 50, 62, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42700000, 0, 50, 62, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(220, 560),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42700000, 0, 95, 13, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42700000, 0, 92, 13, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42700000, 1, 87, 13, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42700000, 1, 79, 23, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42700000, 0, 58, 24, 0),
		CS_CAM_FOCUS_POINT(0, 0, 120, 0x42700000, 0, 55, 31, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42700000, 0, 54, 37, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(407, 511),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x428c0000, 0, -44, 715, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x428c0000, 0, -39, 441, 0),
		CS_CAM_FOCUS_POINT(0, 0, 12, 0x428c0000, 0, -39, 289, 0),
		CS_CAM_FOCUS_POINT(0, 0, 7, 0x42340000, 0, 59, 221, 0),
		CS_CAM_FOCUS_POINT(0, 0, 5, 0x42200000, 0, 71, 86, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42200000, 0, 80, -62, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(500, 830),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42340000, 2, 43, 53, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42340000, 2, 43, 53, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42340000, 2, 43, 53, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42340000, 0, -16, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 30, 0x42340000, 0, -16, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42340000, 0, -8, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 60, 0x42340000, 0, -6, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 80, 0x42340000, 0, -6, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42340000, 0, -6, 237, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(740, 1170),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x420c0000, 0, 0, 239, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x420c0000, 0, 0, 239, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x420c0000, 0, 0, 239, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x420c0000, 0, 0, 239, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x420c0000, 0, 0, 239, 0),
		CS_CAM_FOCUS_POINT(0, 0, 50, 0x420c0000, 0, 0, 239, 0),
		CS_CAM_FOCUS_POINT(0, 0, 60, 0x420c0000, 0, 0, 239, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x420c0000, 0, 0, 239, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x420c0000, 0, 0, 239, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(990, 1630),
		CS_CAM_FOCUS_POINT(0, 1, 20, 0x42700000, -268, -59, 135, 0),
		CS_CAM_FOCUS_POINT(0, 1, 30, 0x42700000, -240, -53, 63, 0),
		CS_CAM_FOCUS_POINT(0, -10, 40, 0x42700000, -167, -37, -206, 0),
		CS_CAM_FOCUS_POINT(0, -10, 40, 0x42700000, 186, -52, -189, 0),
		CS_CAM_FOCUS_POINT(0, -3, 40, 0x42700000, 243, -37, 18, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42700000, 207, -24, 201, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42700000, 165, -19, 303, 0),
		CS_CAM_FOCUS_POINT(0, 0, 30, 0x42700000, 66, -26, 298, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42700000, 0, 4, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42700000, 0, 4, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42700000, 0, 4, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x425c0000, 0, 5, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 80, 0x42480000, 0, -19, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42480000, 0, -19, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 40, 0x42480000, 0, -19, 237, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(1520, 1620),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42700000, 0, 0, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42700000, 0, 0, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42700000, 0, 0, 237, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42700000, 0, 0, 237, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(1700, 1965),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42700000, 0, -7, 238, 0),
		CS_CAM_FOCUS_POINT(0, 0, 25, 0x42700000, 0, -7, 238, 0),
		CS_CAM_FOCUS_POINT(0, 0, 20, 0x42700000, 0, -7, 238, 0),
		CS_CAM_FOCUS_POINT(0, 0, 25, 0x42700000, 0, -7, 238, 0),
		CS_CAM_FOCUS_POINT(0, 0, 25, 0x42700000, 0, -7, 238, 0),
		CS_CAM_FOCUS_POINT(0, 0, 25, 0x42820000, 0, 6, 227, 0),
		CS_CAM_FOCUS_POINT(0, 0, 25, 0x42900000, 0, 40, 159, 0),
		CS_CAM_FOCUS_POINT(0, 0, 25, 0x42a00000, 0, 62, 94, 0),
		CS_CAM_FOCUS_POINT(0, 0, 25, 0x42a00000, 0, 62, 94, 0),
		CS_CAM_FOCUS_POINT(0, 0, 25, 0x42a00000, 0, 62, 94, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_PLAYER_ACTION_LIST(13),
		CS_PLAYER_ACTION(0x0001, 0, 50, 0x0, 0xffff8000, 0x0, 0, -49, 442, 0, 0, 47, 0, 0, 0),
		CS_PLAYER_ACTION(0x0034, 50, 90, 0x0, 0xffff8000, 0x0, 0, 0, 47, 0, 0, 55, 0, 0, 0),
		CS_PLAYER_ACTION(0x004B, 90, 335, 0x0, 0xffff8000, 0x0, 0, 0, 55, 0, 0, 55, 0, 0, 0),
		CS_PLAYER_ACTION(0x004E, 335, 410, 0x0, 0xffff8000, 0x0, 0, 0, 55, 0, 0, 55, 0, 0, 0),
		CS_PLAYER_ACTION(0x0007, 410, 420, 0x0, 0xffff8000, 0x0, 0, 0, 55, 0, 0, 55, 0, 0, 0),
		CS_PLAYER_ACTION(0x0008, 420, 495, 0x0, 0x0, 0x0, 0, 0, 55, 0, 0, 55, 0, 0, 0),
		CS_PLAYER_ACTION(0x0005, 495, 515, 0x0, 0x0, 0x0, 0, 0, 55, 0, 0, 55, 0, 0, 0),
		CS_PLAYER_ACTION(0x0001, 515, 545, 0x0, 0x0, 0x0, 0, 0, 55, 0, -50, 237, 0, 0, 0),
		CS_PLAYER_ACTION(0x0031, 545, 670, 0x0, 0x0, 0x0, 0, -50, 237, 0, -50, 237, 0, 0, 0),
		CS_PLAYER_ACTION(0x004F, 670, 680, 0x0, 0x0, 0x0, 0, -50, 237, 0, -50, 237, 0, 0, 0),
		CS_PLAYER_ACTION(0x0050, 680, 1710, 0x0, 0x0, 0x0, 0, -50, 237, 0, -50, 237, 0, 0, 0),
		CS_PLAYER_ACTION(0x0005, 1710, 1730, 0x0, 0x0, 0x0, 0, -50, 237, 0, -50, 237, 0, 0, 0),
		CS_PLAYER_ACTION(0x0027, 1730, 2000, 0x0, 0x0, 0x0, 0, -50, 237, 0, -50, 237, 0, 0, 0),
	CS_NPC_ACTION_LIST(40, 2),
		CS_NPC_ACTION(0x0000, 0, 494, 0x0, 0x0, 0x0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
		CS_NPC_ACTION(0x0001, 494, 2000, 0x0, 0x0, 0x0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
	CS_END(),
};

