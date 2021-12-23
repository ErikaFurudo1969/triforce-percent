#include "ultra64.h"
#include "global.h"

#define G_CELSHADING 0x00400000

u64 TestCelShadingMesh_blue_ci4[] = {
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000001222222222, 0x2222222222222222, 0x2222222222222222, 0x2222222222222200, 0x0000322100000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0003210000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0002100002230000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0012000000420000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0021000200020000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0020020000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0020024000230000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0020032200320000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0020000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	
};

u64 TestCelShadingMesh_blue_ci4_pal_rgba16[] = {
	0x057f3dffffff15bf, 0x5e7f000000000000
};

u64 TestCelShadingMesh_brown_rgba16[] = {
	0x8185818581858185, 0x8185818581858185, 0x8185818581858185, 0x8185818581858185, 0x818589c589c58185, 0x81858185818581c7, 0x8a49818581858185, 0x8185818581858185, 
	0x8185818581858185, 0x8185818581859203, 0xb2c3aac381858185, 0x8185818581858185, 0x89c59a439a439205, 0x818581c79b0b9b0b, 0x9b0b8a4981838185, 0x8185818581858183, 
	0x8185818581858185, 0x89c589c59205a283, 0xaac3aac381858185, 0x89c5818589c59a45, 0xb3099a87a285aa85, 0x8a07a34da34da34d, 0x9b0b9205920581c7, 0x81c589c591c389c5, 
	0x8185818581858185, 0xaac3a2839a439a43, 0x9205aac389c59289, 0xb411aac3aac3ab0b, 0xb411928b9a459a87, 0xa30ba38fa38fa38f, 0xa30ba34da34d9289, 0x92059a0592478a07, 
	0x8185818581858185, 0xa283aa85a2859249, 0x9205b2c39289d557, 0xab8d9205a34fbc95, 0xbc959a89aac39249, 0x9a47898392899207, 0x92499a47a30ba2c9, 0x9a47a2cb924989c7, 
	0x8185818581858185, 0xa285bb059acbd559, 0x9ac9aac3b389d50f, 0xcc43ab8dccd7dd99, 0xbc13aa8399c19a87, 0x9acb92c992899a47, 0xa2c9ab0ba2cba2cb, 0xa30b9a898a078185, 
	0x8185818581858185, 0xaa83bb03cd17dd99, 0x9247c3c3dd03dc87, 0xbc4fc48fdd95ccd5, 0xa241918391839183, 0x924991c5a2c9ab4d, 0xab09ab0b9ac9a2cb, 0x9acb924981c58185, 
	0x81858185818589c5, 0xbb03aa83cd17d557, 0x9b0ddd11c40dc383, 0xc44bd489dd11aa83, 0x9183a181a1819981, 0x9183a2c9ab4bab4b, 0xab4ba30bab4dab4b, 0x9a8989c581858185, 
	0x8185818581c5a283, 0xc345a2cbb411bc53, 0xc493c3899a45b2c3, 0xab85cc41b3059981, 0xa181a181a1819183, 0x99c5b34db38d9acb, 0xab4ba2c9b34da2c9, 0x9205898381838185, 
	0x8185818581859a43, 0xc3439247bc0fd4d3, 0xc405d483aa83a283, 0xa243b2c3a181a181, 0xa181a181a18199c5, 0xab0bb38da30b9a89, 0xab4db38da30b8185, 0x89c3898381838185, 
	0x8185818589c5aa83, 0xbb05bb47cc8fd4cf, 0xccd1bbcfb303aa41, 0xaa839983a1819981, 0x9183998391c3a289, 0xb38dab4b9a89ab4d, 0xab4d8a0781858185, 0x89c3818381858185, 
	0x8185818589c59205, 0x9a85b349c44fc491, 0xbc11bb05b303a283, 0x8207824782478247, 0x82478a478289a30b, 0xab0ba30ba30b9289, 0x8185818581858183, 0x8983818381858185, 
	0x8185818581859205, 0xaac5b349b38bb38d, 0xb349bb03a2c78287, 0x8289828982898289, 0x82c982c982898289, 0x8ac98a8981858185, 0x8185818581838983, 0x8983818381858185, 
	0x8185818581c59a45, 0xaac5ab07aac7a287, 0x89c581c5a2c78247, 0x8289828982898289, 0x8289828982898289, 0x8289828981858185, 0x8185818581838983, 0x8983818381858185, 
	0x8185818589c5a283, 0xaac5a28792458a05, 0x8185818581858185, 0x8185818581858207, 0x8247820782078207, 0x81c5818581858185, 0x8185818581858183, 0x8185818581858185, 
	0x8185818589c59a43, 0x9a45920589c58185, 0x8185818581858185, 0x8185818581858185, 0x8185818581858185, 0x8185818581858185, 0x8185818581858185, 0x8185818581858185, 
	
};

Vtx TestCelShadingMesh_Torso_mesh_layer_Opaque_vtx_0[45] = {
	{{{124, 268, -40},0, {1224, 564},{0xA3, 0x56, 0xF6, 0xFF}}},
	{{{126, 214, -97},0, {1348, 576},{0x52, 0x33, 0xAD, 0xFF}}},
	{{{0, 214, -97},0, {1388, 279},{0x0, 0x1A, 0x84, 0xFF}}},
	{{{-126, -100, -97},0, {-9, 2020},{0xDF, 0x0, 0x85, 0xFF}}},
	{{{-126, 214, -97},0, {2022, 2020},{0xE2, 0x30, 0x8E, 0xFF}}},
	{{{126, -100, -97},0, {-9, -10},{0x21, 0x0, 0x85, 0xFF}}},
	{{{0, 214, -97},0, {2022, 753},{0x0, 0x1A, 0x84, 0xFF}}},
	{{{126, 214, -97},0, {2022, -10},{0x52, 0x33, 0xAD, 0xFF}}},
	{{{-126, 214, -97},0, {912, 651},{0xE2, 0x30, 0x8E, 0xFF}}},
	{{{-124, 268, -40},0, {928, 605},{0xD8, 0x65, 0xBF, 0xFF}}},
	{{{0, 214, -97},0, {839, 623},{0x0, 0x1A, 0x84, 0xFF}}},
	{{{126, 214, 97},0, {1189, 652},{0x24, 0x2E, 0x71, 0xFF}}},
	{{{126, -100, 97},0, {1212, 846},{0x21, 0x0, 0x7B, 0xFF}}},
	{{{171, -100, 71},0, {1244, 842},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{171, 116, 71},0, {1228, 706},{0x5C, 0xFD, 0x57, 0xFF}}},
	{{{197, -100, 26},0, {1276, 839},{0x7B, 0x2, 0x20, 0xFF}}},
	{{{180, 86, 40},0, {1250, 716},{0x7A, 0xFF, 0x22, 0xFF}}},
	{{{193, 77, 0},0, {1275, 716},{0x76, 0x30, 0x0, 0xFF}}},
	{{{197, -100, -26},0, {1312, 837},{0x7B, 0x4, 0xDF, 0xFF}}},
	{{{180, 86, -40},0, {1298, 702},{0x3F, 0x96, 0xE2, 0xFF}}},
	{{{171, -100, -71},0, {1349, 834},{0x5B, 0x2, 0xA7, 0xFF}}},
	{{{171, 116, -71},0, {1317, 675},{0x73, 0x32, 0xEB, 0xFF}}},
	{{{126, -100, -97},0, {1388, 831},{0x21, 0x0, 0x85, 0xFF}}},
	{{{126, -100, 97},0, {-11, 2013},{0x21, 0x0, 0x7B, 0xFF}}},
	{{{126, 214, 97},0, {2015, 2013},{0x24, 0x2E, 0x71, 0xFF}}},
	{{{0, 214, 97},0, {2015, 1033},{0x0, 0x1A, 0x7C, 0xFF}}},
	{{{-126, 214, 97},0, {2015, -3},{0xE3, 0x30, 0x72, 0xFF}}},
	{{{-126, -100, 97},0, {-11, -3},{0xDF, 0x0, 0x7B, 0xFF}}},
	{{{124, 268, 40},0, {1205, 607},{0x30, 0x65, 0x3C, 0xFF}}},
	{{{0, 214, 97},0, {1117, 625},{0x0, 0x1A, 0x7C, 0xFF}}},
	{{{-126, 214, 97},0, {1072, 576},{0xE3, 0x30, 0x72, 0xFF}}},
	{{{-171, -100, 71},0, {1075, 835},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-126, -100, 97},0, {1117, 828},{0xDF, 0x0, 0x7B, 0xFF}}},
	{{{-171, 116, 71},0, {1042, 675},{0xD3, 0xE8, 0x74, 0xFF}}},
	{{{-197, -100, 26},0, {1037, 839},{0x85, 0x2, 0x20, 0xFF}}},
	{{{-180, 86, 40},0, {1022, 702},{0xB8, 0xBC, 0x50, 0xFF}}},
	{{{-193, 77, 0},0, {999, 716},{0xCD, 0x8C, 0x0, 0xFF}}},
	{{{-197, -100, -26},0, {1002, 841},{0x85, 0x4, 0xDF, 0xFF}}},
	{{{-180, 86, -40},0, {974, 716},{0xBD, 0xBA, 0xAE, 0xFF}}},
	{{{-171, -100, -71},0, {968, 843},{0xA5, 0x2, 0xA7, 0xFF}}},
	{{{-171, 116, -71},0, {952, 705},{0xD2, 0xE8, 0x8C, 0xFF}}},
	{{{-126, -100, -97},0, {935, 846},{0xDF, 0x0, 0x85, 0xFF}}},
	{{{-126, 214, -97},0, {912, 651},{0xE2, 0x30, 0x8E, 0xFF}}},
	{{{0, 214, 97},0, {1117, 277},{0x0, 0x1A, 0x7C, 0xFF}}},
	{{{-124, 268, 40},0, {948, 562},{0xD8, 0x65, 0x42, 0xFF}}},
};

Gfx TestCelShadingMesh_Torso_mesh_layer_Opaque_tri_0_cel0[] = {
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
	gsSP2Triangles(11, 13, 14, 0, 14, 13, 15, 0),
	gsSP2Triangles(16, 14, 15, 0, 15, 17, 16, 0),
	gsSP2Triangles(18, 17, 15, 0, 19, 17, 18, 0),
	gsSP2Triangles(19, 18, 20, 0, 20, 21, 19, 0),
	gsSP2Triangles(21, 20, 22, 0, 21, 22, 1, 0),
	gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
	gsSP2Triangles(23, 26, 27, 0, 11, 28, 29, 0),
	gsSPEndDisplayList(),
};

Gfx TestCelShadingMesh_Torso_mesh_layer_Opaque_tri_0_cel1[] = {
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
	gsSP2Triangles(8, 7, 6, 0, 8, 9, 7, 0),
	gsSP2Triangles(9, 8, 10, 0, 10, 11, 9, 0),
	gsSP2Triangles(10, 12, 11, 0, 0, 13, 14, 0),
	gsSPEndDisplayList(),
};

Gfx TestCelShadingMesh_Torso_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(TestCelShadingMesh_Torso_mesh_layer_Opaque_vtx_0 + 0, 30, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0, TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 140),
	gsDPSetBlendColor(255, 255, 255, 127),
	gsSPDisplayList(TestCelShadingMesh_Torso_mesh_layer_Opaque_tri_0_cel0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0, 1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 86),
	gsDPSetBlendColor(255, 255, 255, 128),
	gsSPDisplayList(TestCelShadingMesh_Torso_mesh_layer_Opaque_tri_0_cel0),
	gsSPVertex(TestCelShadingMesh_Torso_mesh_layer_Opaque_vtx_0 + 30, 15, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0, TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 140),
	gsDPSetBlendColor(255, 255, 255, 127),
	gsSPDisplayList(TestCelShadingMesh_Torso_mesh_layer_Opaque_tri_0_cel1),
	gsDPPipeSync(),
	gsDPSetCombineLERP(1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0, 1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 86),
	gsDPSetBlendColor(255, 255, 255, 128),
	gsSPDisplayList(TestCelShadingMesh_Torso_mesh_layer_Opaque_tri_0_cel1),
	gsSPEndDisplayList(),
};

Vtx TestCelShadingMesh_LArm_mesh_layer_Opaque_vtx_0[42] = {
	{{{-17, -24, -69},0, {1286, 599},{0xF1, 0x82, 0xF5, 0xFF}}},
	{{{17, 9, -80},0, {1307, 633},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{64, 65, -69},0, {1301, 678},{0x4F, 0xDD, 0xA3, 0xFF}}},
	{{{109, 264, 0},0, {1686, -57},{0x7F, 0x1, 0x1, 0xFF}}},
	{{{99, 265, 40},0, {1601, -57},{0x6D, 0xFD, 0x41, 0xFF}}},
	{{{69, 265, 69},0, {1515, -57},{0x40, 0xFC, 0x6E, 0xFF}}},
	{{{64, 65, 69},0, {1507, 1029},{0x42, 0xF6, 0x6C, 0xFF}}},
	{{{29, 267, 80},0, {1430, -57},{0x0, 0xFF, 0x7F, 0xFF}}},
	{{{17, 9, 80},0, {1409, 1336},{0xE, 0xDA, 0x78, 0xFF}}},
	{{{-11, 268, 69},0, {1345, -57},{0xB7, 0xE, 0x67, 0xFF}}},
	{{{-17, -24, 69},0, {1337, 1515},{0xDF, 0xB7, 0x63, 0xFF}}},
	{{{-40, 269, 40},0, {1259, -57},{0x93, 0x15, 0x3D, 0xFF}}},
	{{{-51, 269, 0},0, {1174, -57},{0x84, 0x1C, 0x1, 0xFF}}},
	{{{-40, 269, -40},0, {1089, -57},{0x95, 0x1A, 0xC1, 0xFF}}},
	{{{-17, -24, -69},0, {1011, 1515},{0xF1, 0x82, 0xF5, 0xFF}}},
	{{{-11, 268, -69},0, {1003, -57},{0xB7, 0xD, 0x99, 0xFF}}},
	{{{29, 267, -80},0, {918, -57},{0x0, 0x0, 0x81, 0xFF}}},
	{{{17, 9, -80},0, {939, 1336},{0x1E, 0x95, 0xC3, 0xFF}}},
	{{{69, 265, -69},0, {833, -57},{0x3F, 0xFE, 0x92, 0xFF}}},
	{{{64, 65, -69},0, {841, 1029},{0x4F, 0xDD, 0xA3, 0xFF}}},
	{{{99, 265, -40},0, {748, -57},{0x6D, 0xFE, 0xBF, 0xFF}}},
	{{{109, 264, 0},0, {662, -57},{0x7F, 0x1, 0x1, 0xFF}}},
	{{{124, 268, -40},0, {1224, 564},{0xA3, 0x56, 0xF6, 0xFF}}},
	{{{126, 214, -97},0, {1348, 576},{0x52, 0x33, 0xAD, 0xFF}}},
	{{{171, 116, -71},0, {1317, 675},{0x73, 0x32, 0xEB, 0xFF}}},
	{{{180, 86, -40},0, {1298, 702},{0x3F, 0x96, 0xE2, 0xFF}}},
	{{{180, 86, 40},0, {1592, 1034},{0x7A, 0xFF, 0x22, 0xFF}}},
	{{{193, 77, 0},0, {1676, 954},{0x76, 0x30, 0x0, 0xFF}}},
	{{{124, 268, 40},0, {1259, 1776},{0x30, 0x65, 0x3C, 0xFF}}},
	{{{129, 277, 0},0, {1174, 1775},{0x7E, 0x2, 0xF, 0xFF}}},
	{{{124, 268, -40},0, {1089, 1776},{0xA3, 0x56, 0xF6, 0xFF}}},
	{{{180, 86, -40},0, {756, 1034},{0x3F, 0x96, 0xE2, 0xFF}}},
	{{{180, 86, -40},0, {756, 1034},{0x3F, 0x96, 0xE2, 0xFF}}},
	{{{193, 77, 0},0, {673, 954},{0x76, 0x30, 0x0, 0xFF}}},
	{{{180, 86, 40},0, {1250, 716},{0x7A, 0xFF, 0x22, 0xFF}}},
	{{{171, 116, 71},0, {1228, 706},{0x5C, 0xFD, 0x57, 0xFF}}},
	{{{126, 214, 97},0, {1189, 652},{0x24, 0x2E, 0x71, 0xFF}}},
	{{{124, 268, 40},0, {1205, 607},{0x30, 0x65, 0x3C, 0xFF}}},
	{{{109, 264, 0},0, {662, -57},{0x7F, 0x1, 0x1, 0xFF}}},
	{{{64, 65, 69},0, {1238, 703},{0x42, 0xF6, 0x6C, 0xFF}}},
	{{{17, 9, 80},0, {1220, 671},{0xE, 0xDA, 0x78, 0xFF}}},
	{{{-17, -24, 69},0, {1212, 643},{0xDF, 0xB7, 0x63, 0xFF}}},
};

Gfx TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_0_cel0[] = {
	gsSP2Triangles(22, 0, 23, 0, 1, 23, 0, 0),
	gsSP2Triangles(24, 23, 1, 0, 1, 2, 24, 0),
	gsSP2Triangles(2, 25, 24, 0, 3, 26, 27, 0),
	gsSP2Triangles(3, 4, 26, 0, 26, 4, 5, 0),
	gsSP2Triangles(26, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
	gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
	gsSP2Triangles(10, 11, 28, 0, 28, 11, 12, 0),
	gsSP2Triangles(28, 12, 29, 0, 29, 12, 13, 0),
	gsSP2Triangles(29, 13, 30, 0, 13, 14, 30, 0),
	gsSP2Triangles(13, 15, 14, 0, 14, 15, 16, 0),
	gsSP2Triangles(14, 16, 17, 0, 17, 16, 18, 0),
	gsSP2Triangles(17, 18, 19, 0, 19, 18, 20, 0),
	gsSP2Triangles(19, 20, 31, 0, 31, 20, 21, 0),
	gsSPEndDisplayList(),
};

Gfx TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_0_cel1[] = {
	gsSP2Triangles(0, 6, 1, 0, 2, 7, 3, 0),
	gsSP2Triangles(7, 8, 3, 0, 4, 3, 8, 0),
	gsSP2Triangles(9, 4, 8, 0, 5, 4, 9, 0),
	gsSPEndDisplayList(),
};

Gfx TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(TestCelShadingMesh_LArm_mesh_layer_Opaque_vtx_0 + 0, 22, 0),
	gsSPMatrix(0x0d000000, G_MTX_LOAD),
	gsSPVertex(TestCelShadingMesh_LArm_mesh_layer_Opaque_vtx_0 + 22, 10, 22),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0, TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 140),
	gsDPSetBlendColor(255, 255, 255, 127),
	gsSPDisplayList(TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_0_cel0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0, 1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 86),
	gsDPSetBlendColor(255, 255, 255, 128),
	gsSPDisplayList(TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_0_cel0),
	gsSPVertex(TestCelShadingMesh_LArm_mesh_layer_Opaque_vtx_0 + 32, 6, 0),
	gsSPMatrix(0x0d000040, G_MTX_LOAD),
	gsSPVertex(TestCelShadingMesh_LArm_mesh_layer_Opaque_vtx_0 + 38, 4, 6),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0, TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 140),
	gsDPSetBlendColor(255, 255, 255, 127),
	gsSPDisplayList(TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_0_cel1),
	gsDPPipeSync(),
	gsDPSetCombineLERP(1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0, 1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 86),
	gsDPSetBlendColor(255, 255, 255, 128),
	gsSPDisplayList(TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_0_cel1),
	gsSPEndDisplayList(),
};

Vtx TestCelShadingMesh_LArm_mesh_layer_Opaque_vtx_1[10] = {
	{{{-11, 268, -69},0, {999, -7},{0xB7, 0xD, 0x99, 0xFF}}},
	{{{-10, 343, -40},0, {752, 482},{0x9A, 0x28, 0xC0, 0xFF}}},
	{{{19, 342, -69},0, {999, 482},{0xAA, 0x22, 0xA9, 0xFF}}},
	{{{-40, 269, -40},0, {752, -7},{0x95, 0x1A, 0xC1, 0xFF}}},
	{{{-21, 343, 0},0, {499, 482},{0x8A, 0x2F, 0xFF, 0xFF}}},
	{{{-51, 269, 0},0, {499, -7},{0x84, 0x1C, 0x1, 0xFF}}},
	{{{-40, 269, 40},0, {245, -7},{0x93, 0x15, 0x3D, 0xFF}}},
	{{{-10, 343, 40},0, {245, 482},{0x9A, 0x29, 0x40, 0xFF}}},
	{{{-11, 268, 69},0, {-2, -7},{0xB7, 0xE, 0x67, 0xFF}}},
	{{{19, 342, 69},0, {-2, 482},{0xAA, 0x22, 0x57, 0xFF}}},
};

Gfx TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_1_cel0[] = {
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
	gsSP2Triangles(6, 4, 5, 0, 6, 7, 4, 0),
	gsSP2Triangles(8, 7, 6, 0, 8, 9, 7, 0),
	gsSPEndDisplayList(),
};

Gfx TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(TestCelShadingMesh_LArm_mesh_layer_Opaque_vtx_1 + 0, 10, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0, TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 143),
	gsDPSetBlendColor(255, 255, 255, 127),
	gsSPDisplayList(TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_1_cel0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0, 1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 81),
	gsDPSetBlendColor(255, 255, 255, 128),
	gsSPDisplayList(TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_1_cel0),
	gsSPEndDisplayList(),
};

Vtx TestCelShadingMesh_RArm_mesh_layer_Opaque_vtx_0[10] = {
	{{{13, 288, -69},0, {36, -23},{0x48, 0xB, 0x98, 0xFF}}},
	{{{-11, 375, -69},0, {36, 492},{0x57, 0x18, 0xA7, 0xFF}}},
	{{{18, 377, -40},0, {268, 492},{0x6A, 0x1D, 0xC0, 0xFF}}},
	{{{42, 290, -40},0, {268, -23},{0x6E, 0x11, 0xC2, 0xFF}}},
	{{{28, 378, 0},0, {503, 492},{0x7A, 0x22, 0x0, 0xFF}}},
	{{{53, 291, 0},0, {503, -23},{0x7D, 0x14, 0x0, 0xFF}}},
	{{{42, 290, 40},0, {738, -23},{0x6E, 0x11, 0x3E, 0xFF}}},
	{{{18, 377, 40},0, {738, 492},{0x6A, 0x1D, 0x40, 0xFF}}},
	{{{13, 288, 69},0, {970, -23},{0x48, 0xB, 0x68, 0xFF}}},
	{{{-11, 375, 69},0, {970, 492},{0x57, 0x18, 0x59, 0xFF}}},
};

Gfx TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_0_cel0[] = {
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 4, 7, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
	gsSPEndDisplayList(),
};

Gfx TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(TestCelShadingMesh_RArm_mesh_layer_Opaque_vtx_0 + 0, 10, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0, TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 143),
	gsDPSetBlendColor(255, 255, 255, 127),
	gsSPDisplayList(TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_0_cel0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0, 1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 81),
	gsDPSetBlendColor(255, 255, 255, 128),
	gsSPDisplayList(TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_0_cel0),
	gsSPEndDisplayList(),
};

Vtx TestCelShadingMesh_RArm_mesh_layer_Opaque_vtx_1[42] = {
	{{{30, -3, -69},0, {935, 642},{0x58, 0xD, 0xA5, 0xFF}}},
	{{{-5, 29, -80},0, {943, 670},{0x15, 0x16, 0x85, 0xFF}}},
	{{{-54, 83, -69},0, {963, 701},{0xC7, 0x7, 0x8F, 0xFF}}},
	{{{-107, 280, 0},0, {637, -55},{0x81, 0xF7, 0x0, 0xFF}}},
	{{{-96, 281, 40},0, {722, -55},{0x92, 0xF8, 0x3F, 0xFF}}},
	{{{-67, 283, 69},0, {808, -55},{0xC1, 0xFC, 0x6E, 0xFF}}},
	{{{-54, 83, 69},0, {816, 1023},{0xC7, 0x6, 0x71, 0xFF}}},
	{{{-27, 285, 80},0, {893, -55},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-5, 29, 80},0, {914, 1327},{0x13, 0x16, 0x7C, 0xFF}}},
	{{{13, 288, 69},0, {978, -55},{0x48, 0xB, 0x68, 0xFF}}},
	{{{30, -3, 69},0, {986, 1505},{0x58, 0xD, 0x5B, 0xFF}}},
	{{{42, 290, 40},0, {1064, -55},{0x6E, 0x11, 0x3E, 0xFF}}},
	{{{53, 291, 0},0, {1149, -55},{0x7D, 0x14, 0x0, 0xFF}}},
	{{{42, 290, -40},0, {1234, -55},{0x6E, 0x11, 0xC2, 0xFF}}},
	{{{30, -3, -69},0, {1312, 1505},{0x58, 0xD, 0xA5, 0xFF}}},
	{{{13, 288, -69},0, {1320, -55},{0x48, 0xB, 0x98, 0xFF}}},
	{{{-27, 285, -80},0, {1405, -55},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-5, 29, -80},0, {1384, 1327},{0x15, 0x16, 0x85, 0xFF}}},
	{{{-67, 283, -69},0, {1490, -55},{0xC1, 0xFB, 0x92, 0xFF}}},
	{{{-54, 83, -69},0, {1482, 1023},{0xC7, 0x7, 0x8F, 0xFF}}},
	{{{-96, 281, -40},0, {1576, -55},{0x92, 0xF8, 0xC1, 0xFF}}},
	{{{-107, 280, 0},0, {1661, -55},{0x81, 0xF7, 0x0, 0xFF}}},
	{{{-124, 268, -40},0, {928, 605},{0xD8, 0x65, 0xBF, 0xFF}}},
	{{{-126, 214, -97},0, {912, 651},{0xE2, 0x30, 0x8E, 0xFF}}},
	{{{-171, 116, -71},0, {952, 705},{0xD2, 0xE8, 0x8C, 0xFF}}},
	{{{-180, 86, -40},0, {974, 716},{0xBD, 0xBA, 0xAE, 0xFF}}},
	{{{-193, 77, 0},0, {648, 948},{0xCD, 0x8C, 0x0, 0xFF}}},
	{{{-180, 86, 40},0, {731, 1027},{0xB8, 0xBC, 0x50, 0xFF}}},
	{{{-124, 268, 40},0, {1064, 1764},{0xD8, 0x65, 0x42, 0xFF}}},
	{{{-129, 277, 0},0, {1149, 1762},{0xC4, 0x70, 0x0, 0xFF}}},
	{{{-124, 268, -40},0, {1234, 1764},{0xD8, 0x65, 0xBF, 0xFF}}},
	{{{-180, 86, -40},0, {1567, 1027},{0xBD, 0xBA, 0xAE, 0xFF}}},
	{{{-180, 86, -40},0, {1567, 1027},{0xBD, 0xBA, 0xAE, 0xFF}}},
	{{{-193, 77, 0},0, {1650, 948},{0xCD, 0x8C, 0x0, 0xFF}}},
	{{{-180, 86, 40},0, {1022, 702},{0xB8, 0xBC, 0x50, 0xFF}}},
	{{{-171, 116, 71},0, {1042, 675},{0xD3, 0xE8, 0x74, 0xFF}}},
	{{{-126, 214, 97},0, {1072, 576},{0xE3, 0x30, 0x72, 0xFF}}},
	{{{-124, 268, 40},0, {948, 562},{0xD8, 0x65, 0x42, 0xFF}}},
	{{{-107, 280, 0},0, {1661, -55},{0x81, 0xF7, 0x0, 0xFF}}},
	{{{-54, 83, 69},0, {1026, 678},{0xC7, 0x6, 0x71, 0xFF}}},
	{{{-5, 29, 80},0, {1031, 633},{0x13, 0x16, 0x7C, 0xFF}}},
	{{{30, -3, 69},0, {1010, 598},{0x58, 0xD, 0x5B, 0xFF}}},
};

Gfx TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_1_cel0[] = {
	gsSP2Triangles(22, 23, 0, 0, 1, 0, 23, 0),
	gsSP2Triangles(24, 1, 23, 0, 1, 24, 2, 0),
	gsSP2Triangles(2, 24, 25, 0, 3, 26, 27, 0),
	gsSP2Triangles(3, 27, 4, 0, 27, 5, 4, 0),
	gsSP2Triangles(27, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
	gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
	gsSP2Triangles(10, 28, 11, 0, 28, 12, 11, 0),
	gsSP2Triangles(28, 29, 12, 0, 29, 13, 12, 0),
	gsSP2Triangles(29, 30, 13, 0, 13, 30, 14, 0),
	gsSP2Triangles(13, 14, 15, 0, 14, 16, 15, 0),
	gsSP2Triangles(14, 17, 16, 0, 17, 18, 16, 0),
	gsSP2Triangles(17, 19, 18, 0, 19, 20, 18, 0),
	gsSP2Triangles(19, 31, 20, 0, 31, 21, 20, 0),
	gsSPEndDisplayList(),
};

Gfx TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_1_cel1[] = {
	gsSP2Triangles(0, 1, 6, 0, 2, 3, 7, 0),
	gsSP2Triangles(7, 3, 8, 0, 4, 8, 3, 0),
	gsSP2Triangles(9, 8, 4, 0, 5, 9, 4, 0),
	gsSPEndDisplayList(),
};

Gfx TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(TestCelShadingMesh_RArm_mesh_layer_Opaque_vtx_1 + 0, 22, 0),
	gsSPMatrix(0x0d000000, G_MTX_LOAD),
	gsSPVertex(TestCelShadingMesh_RArm_mesh_layer_Opaque_vtx_1 + 22, 10, 22),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0, TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 140),
	gsDPSetBlendColor(255, 255, 255, 127),
	gsSPDisplayList(TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_1_cel0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0, 1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 86),
	gsDPSetBlendColor(255, 255, 255, 128),
	gsSPDisplayList(TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_1_cel0),
	gsSPVertex(TestCelShadingMesh_RArm_mesh_layer_Opaque_vtx_1 + 32, 6, 0),
	gsSPMatrix(0x0d000080, G_MTX_LOAD),
	gsSPVertex(TestCelShadingMesh_RArm_mesh_layer_Opaque_vtx_1 + 38, 4, 6),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0, TEXEL0, 0, PRIMITIVE_ALPHA, 0, 1, SHADE, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 140),
	gsDPSetBlendColor(255, 255, 255, 127),
	gsSPDisplayList(TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_1_cel1),
	gsDPPipeSync(),
	gsDPSetCombineLERP(1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0, 1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, SHADE, 0, TEXEL0, 0),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 86),
	gsDPSetBlendColor(255, 255, 255, 128),
	gsSPDisplayList(TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_1_cel1),
	gsSPEndDisplayList(),
};

Gfx mat_TestCelShadingMesh_blue_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH | G_CELSHADING),
	gsSPClearGeometryMode(G_CULL_FRONT | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_DISABLE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_THRESHOLD | G_ZS_PIXEL | AA_EN | Z_CMP | Z_UPD | CVG_DST_CLAMP | ZMODE_OPA | GBL_c1(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1) | GBL_c2(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, TestCelShadingMesh_blue_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 4),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, TestCelShadingMesh_blue_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_TestCelShadingMesh_brown_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH | G_CELSHADING),
	gsSPClearGeometryMode(G_CULL_FRONT | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_DISABLE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_THRESHOLD | G_ZS_PIXEL | AA_EN | Z_CMP | Z_UPD | CVG_DST_CLAMP | ZMODE_OPA | GBL_c1(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1) | GBL_c2(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_NONE),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, TestCelShadingMesh_brown_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 60),
	gsSPEndDisplayList(),
};

Gfx TestCelShadingMesh_Torso_mesh_layer_Opaque[] = {
	gsSPDisplayList(mat_TestCelShadingMesh_blue_layerOpaque),
	gsSPDisplayList(TestCelShadingMesh_Torso_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx TestCelShadingMesh_LArm_mesh_layer_Opaque[] = {
	gsSPDisplayList(TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_TestCelShadingMesh_brown_layerOpaque),
	gsSPDisplayList(TestCelShadingMesh_LArm_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

Gfx TestCelShadingMesh_RArm_mesh_layer_Opaque[] = {
	gsSPDisplayList(TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_TestCelShadingMesh_blue_layerOpaque),
	gsSPDisplayList(TestCelShadingMesh_RArm_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

StandardLimb TestCelShadingMeshLimb_000 = { { 0, 0, 0 }, 1, 255, TestCelShadingMesh_Torso_mesh_layer_Opaque };
StandardLimb TestCelShadingMeshLimb_001 = { { 168, 198, 0 }, 255, 2, TestCelShadingMesh_LArm_mesh_layer_Opaque };
StandardLimb TestCelShadingMeshLimb_002 = { { -144, 196, 0 }, 255, 255, TestCelShadingMesh_RArm_mesh_layer_Opaque };

void* TestCelShadingMeshLimbs[3] = {
	&TestCelShadingMeshLimb_000,
	&TestCelShadingMeshLimb_001,
	&TestCelShadingMeshLimb_002,
};

FlexSkeletonHeader TestCelShadingMesh = { TestCelShadingMeshLimbs, 3, 3 };

