#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "TriforceRoom_scene.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

SCmdSoundSettings TriforceRoom_scene_header00_cmd00 = { 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x71 };

SCmdRoomList TriforceRoom_scene_header00_cmd01 = { 0x04, 1, (u32)&TriforceRoom_scene_roomList };

SCmdMiscSettings TriforceRoom_scene_header00_cmd02 = { 0x19, 0x00, 0x0E };

SCmdColHeader TriforceRoom_scene_header00_cmd03 = { 0x03, 0x00, (u32)&TriforceRoom_collisionHeader };

SCmdEntranceList TriforceRoom_scene_header00_cmd04 = { 0x06, 0x00, (u32)&TriforceRoom_scene_header00_entranceList };

SCmdSpecialFiles TriforceRoom_scene_header00_cmd05 = { 0x07, 0x00, 0x0002 };

SCmdSpawnList TriforceRoom_scene_header00_cmd06 = { 0x00, 1, (u32)&TriforceRoom_scene_header00_startPositionList };

SCmdSkyboxSettings TriforceRoom_scene_header00_cmd07 = { 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 };

SCmdLightSettingList TriforceRoom_scene_header00_cmd08 = { 0x0F, 2, (u32)&TriforceRoom_scene_header00_lightSettings };

SCmdCutsceneData TriforceRoom_scene_header00_cmd09 = { 0x17, 0x00, (u32)&TriforceRoom_scene_header00_cutscene };

SCmdEndMarker TriforceRoom_scene_header00_cmd10 = { 0x14, 0x00, 0x00 };


ActorEntry TriforceRoom_scene_header00_startPositionList[] = {
	{ ACTOR_PLAYER, 0, -48, 460, 0, 32768, 0, 0x0FFF },
};

RomFile TriforceRoom_scene_roomList[] = {
	{ (u32)_TriforceRoom_room_0SegmentRomStart, (u32)_TriforceRoom_room_0SegmentRomEnd },
};

EntranceEntry TriforceRoom_scene_header00_entranceList[1] = {
	{ 0, 0 },
};

LightSettings TriforceRoom_scene_header00_lightSettings[2] = {
	{ 57, 64, 117, 73, 73, 73, 134, 130, 219, 183, 183, 183, 70, 107, 133, 125, 124, 167, 0x7bcf, 12800 },
	{ 60, 62, 143, 73, 73, 73, 223, 217, 161, 183, 183, 183, 69, 103, 133, 192, 176, 101, 0x3fa2, 12800 },
};

u32 TriforceRoom_polygonTypes[] = {
	 0x00000000, 0x00000000,
};

CollisionPoly TriforceRoom_polygons[] = {
	{ 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7fff, 0xff42 },
	{ 0x0000, 0x0003, 0x0004, 0x0005, 0x0000, 0x0000, 0x7fff, 0xff9b },
	{ 0x0000, 0x0006, 0x0007, 0x0004, 0x0000, 0x7fff, 0x0000, 0x000a },
	{ 0x0000, 0x0005, 0x0008, 0x0003, 0x0000, 0x7fff, 0x0000, 0x0000 },
	{ 0x0000, 0x0009, 0x000a, 0x0007, 0x0000, 0x0000, 0x7fff, 0xff7d },
	{ 0x0000, 0x000b, 0x000c, 0x000a, 0x0000, 0x7fff, 0x0000, 0x0014 },
	{ 0x0000, 0x000d, 0x000e, 0x0001, 0x0000, 0x7fff, 0x0000, 0x0028 },
	{ 0x0000, 0x000f, 0x0010, 0x000c, 0x0000, 0x0000, 0x7fff, 0xff60 },
	{ 0x0000, 0x0011, 0x0002, 0x0010, 0x0000, 0x7fff, 0x0000, 0x001e },
	{ 0x0000, 0x0012, 0x0013, 0x000e, 0x0000, 0x0000, 0x7fff, 0xff25 },
	{ 0x0000, 0x0014, 0x0015, 0x0013, 0x0000, 0x7fff, 0x0000, 0x0032 },
	{ 0x0000, 0x0013, 0x0015, 0x0016, 0x0000, 0x7fff, 0x0000, 0x0032 },
	{ 0x0000, 0x0014, 0x0017, 0x0015, 0x0000, 0x7fff, 0x0000, 0x0032 },
	{ 0x0000, 0x0014, 0x0018, 0x0017, 0x0000, 0x7fff, 0x0000, 0x0032 },
	{ 0x0000, 0x0000, 0x000d, 0x0001, 0x0000, 0x0000, 0x7fff, 0xff42 },
	{ 0x0000, 0x0003, 0x0006, 0x0004, 0x0000, 0x0000, 0x7fff, 0xff9b },
	{ 0x0000, 0x0006, 0x0009, 0x0007, 0x0000, 0x7fff, 0x0000, 0x000a },
	{ 0x0000, 0x0005, 0x0019, 0x0008, 0x0000, 0x7fff, 0x0000, 0x0000 },
	{ 0x0000, 0x0009, 0x000b, 0x000a, 0x0000, 0x0000, 0x7fff, 0xff7d },
	{ 0x0000, 0x000b, 0x000f, 0x000c, 0x0000, 0x7fff, 0x0000, 0x0014 },
	{ 0x0000, 0x000d, 0x0012, 0x000e, 0x0000, 0x7fff, 0x0000, 0x0028 },
	{ 0x0000, 0x000f, 0x0011, 0x0010, 0x0000, 0x0000, 0x7fff, 0xff60 },
	{ 0x0000, 0x0011, 0x0000, 0x0002, 0x0000, 0x7fff, 0x0000, 0x001e },
	{ 0x0000, 0x0012, 0x0014, 0x0013, 0x0000, 0x0000, 0x7fff, 0xff25 },
};

Vec3s TriforceRoom_vertices[26] = {
	{ -103, -30, 190 },
	{ 103, -40, 190 },
	{ 103, -30, 190 },
	{ -103, 0, 101 },
	{ 103, -10, 101 },
	{ 103, 0, 101 },
	{ -103, -10, 101 },
	{ 103, -10, 131 },
	{ -103, 0, -56 },
	{ -103, -10, 131 },
	{ 103, -20, 131 },
	{ -103, -20, 131 },
	{ 103, -20, 160 },
	{ -103, -40, 190 },
	{ 103, -40, 219 },
	{ -103, -20, 160 },
	{ 103, -30, 160 },
	{ -103, -30, 160 },
	{ -103, -40, 219 },
	{ 103, -50, 219 },
	{ -103, -50, 219 },
	{ 275, -50, 649 },
	{ 275, -50, 219 },
	{ -275, -50, 649 },
	{ -275, -50, 219 },
	{ 103, 0, -56 },
};

CollisionHeader TriforceRoom_collisionHeader = { -275, -50, -56, 275, 0, 649, 26, TriforceRoom_vertices, 24, TriforceRoom_polygons, TriforceRoom_polygonTypes, 0, 0, 0 };

s32 TriforceRoom_scene_header00_cutscene[] = {
	CS_BEGIN_CUTSCENE(13, 500),
	CS_TEXT_LIST(1),
		CS_TEXT_DISPLAY_TEXTBOX(0x0900, 445, 500, 0x0000, 0x0000, 0x0000),
	CS_LIGHTING_LIST(2),
		CS_LIGHTING(2, 88, 89, 0, 0, 0, 0, 0, 0, 0, 0),
		CS_LIGHTING(1, 392, 393, 0, 0, 0, 0, 0, 0, 0, 0),
	CS_SCENE_TRANS_FX(1, 377, 382),
	CS_SCENE_TRANS_FX(5, 382, 389),
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
	CS_PLAYER_ACTION_LIST(6),
		CS_PLAYER_ACTION(0x0001, 0, 50, 0x0, 0xffff8000, 0x0, 0, -49, 442, 0, 0, 47, 0, 0, 0),
		CS_PLAYER_ACTION(0x0034, 50, 90, 0x0, 0xffff8000, 0x0, 0, 0, 47, 0, 0, 55, 0, 0, 0),
		CS_PLAYER_ACTION(0x004B, 90, 335, 0x0, 0xffff8000, 0x0, 0, 0, 55, 0, 0, 55, 0, 0, 0),
		CS_PLAYER_ACTION(0x004E, 335, 410, 0x0, 0xffff8000, 0x0, 0, 0, 55, 0, 0, 55, 0, 0, 0),
		CS_PLAYER_ACTION(0x0007, 410, 420, 0x0, 0xffff8000, 0x0, 0, 0, 55, 0, 0, 55, 0, 0, 0),
		CS_PLAYER_ACTION(0x0008, 420, 540, 0x0, 0x0, 0x0, 0, 0, 55, 0, 0, 55, 0, 0, 0),
	CS_END(),
};
