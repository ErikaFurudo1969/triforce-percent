#include "ultra64.h"
#include "z64.h"
#include "macros.h"

u32 RauruStairCollision_polygonTypes[] = {
	 0x00000000, 0x0000000c,
};

CollisionPoly RauruStairCollision_polygons[] = {
	{ 0x0000, 0x0000, 0x0001, 0x0002, 0xfffb, 0x7fff, 0x0000, 0x00cf },
	{ 0x0000, 0x0000, 0x0003, 0x0001, 0xfffb, 0x7fff, 0x0000, 0x00cf },
	{ 0x0000, 0x0004, 0x0005, 0x0006, 0xfffc, 0x7fff, 0xffff, 0x006b },
	{ 0x0000, 0x0004, 0x0007, 0x0005, 0xfffa, 0x7fff, 0xffff, 0x006a },
	{ 0x0000, 0x0008, 0x0009, 0x000a, 0xfffd, 0x7fff, 0xfffe, 0x0007 },
	{ 0x0000, 0x0008, 0x000b, 0x0009, 0xfffb, 0x7fff, 0xfffe, 0x0006 },
	{ 0x0000, 0x000c, 0x000d, 0x000e, 0xfffd, 0x7fff, 0xfffd, 0xffa3 },
	{ 0x0000, 0x000c, 0x000f, 0x000d, 0xfffb, 0x7fff, 0xfffd, 0xffa2 },
	{ 0x0000, 0x0010, 0x0011, 0x0012, 0xfffe, 0x7fff, 0xfffd, 0xff3f },
	{ 0x0000, 0x0010, 0x0013, 0x0011, 0xfffc, 0x7fff, 0xfffc, 0xff3e },
	{ 0x0000, 0x0014, 0x0015, 0x0016, 0xfffe, 0x7fff, 0xfffc, 0xfedb },
	{ 0x0000, 0x0014, 0x0017, 0x0015, 0xfffd, 0x7fff, 0xfffb, 0xfeda },
	{ 0x0000, 0x0018, 0x0019, 0x001a, 0xffff, 0x7fff, 0xfffc, 0xfe77 },
	{ 0x0000, 0x0018, 0x001b, 0x0019, 0xfffe, 0x7fff, 0xfffb, 0xfe76 },
	{ 0x0000, 0x001c, 0x001d, 0x001e, 0x0000, 0x7fff, 0xfffc, 0xfe13 },
	{ 0x0000, 0x001c, 0x001f, 0x001d, 0xffff, 0x7fff, 0xfffb, 0xfe12 },
	{ 0x0000, 0x0020, 0x0021, 0x0022, 0x0001, 0x7fff, 0xfffc, 0xfdaf },
	{ 0x0000, 0x0020, 0x0023, 0x0021, 0x0000, 0x7fff, 0xfffa, 0xfdae },
	{ 0x0000, 0x0024, 0x0025, 0x0026, 0x0002, 0x7fff, 0xfffc, 0xfd4b },
	{ 0x0000, 0x0024, 0x0027, 0x0025, 0x0001, 0x7fff, 0xfffb, 0xfd4b },
	{ 0x0000, 0x0028, 0x0029, 0x002a, 0x0002, 0x7fff, 0xfffc, 0xfce7 },
	{ 0x0000, 0x0028, 0x002b, 0x0029, 0x0002, 0x7fff, 0xfffb, 0xfce7 },
	{ 0x0000, 0x002c, 0x002d, 0x002e, 0x0001, 0x7fff, 0xfffe, 0xfc83 },
	{ 0x0000, 0x002c, 0x002f, 0x002d, 0x0001, 0x7fff, 0xfffe, 0xfc83 },
};

Vec3s RauruStairCollision_vertices[48] = {
	{ -2420, -207, 550 },
	{ -2991, -207, -589 },
	{ -3111, -207, 550 },
	{ -2399, -207, -590 },
	{ -3111, -107, 550 },
	{ -3546, -107, -706 },
	{ -3900, -107, 383 },
	{ -2991, -107, -589 },
	{ -3900, -7, 383 },
	{ -4063, -7, -937 },
	{ -4637, -7, 54 },
	{ -3546, -7, -706 },
	{ -4637, 93, 54 },
	{ -4522, 93, -1270 },
	{ -5290, 93, -420 },
	{ -4063, 93, -937 },
	{ -5290, 193, -420 },
	{ -4901, 193, -1692 },
	{ -5829, 193, -1021 },
	{ -4522, 193, -1270 },
	{ -5829, 293, -1021 },
	{ -5183, 293, -2183 },
	{ -6231, 293, -1720 },
	{ -4901, 293, -1692 },
	{ -6231, 393, -1720 },
	{ -5357, 393, -2722 },
	{ -6478, 393, -2488 },
	{ -5183, 393, -2183 },
	{ -6478, 493, -2488 },
	{ -5415, 493, -3286 },
	{ -6560, 493, -3291 },
	{ -5357, 493, -2722 },
	{ -6560, 593, -3291 },
	{ -5354, 593, -3850 },
	{ -6473, 593, -4093 },
	{ -5415, 593, -3286 },
	{ -6473, 693, -4093 },
	{ -5176, 693, -4388 },
	{ -6221, 693, -4859 },
	{ -5354, 693, -3850 },
	{ -6221, 793, -4859 },
	{ -4890, 793, -4925 },
	{ -5876, 793, -5481 },
	{ -5176, 793, -4388 },
	{ -5876, 893, -5481 },
	{ -4291, 893, -5941 },
	{ -5265, 893, -6512 },
	{ -4890, 893, -4925 },
};

CollisionHeader RauruStairCollision_collisionHeader = { -6560, -207, -6512, -2399, 893, 550, 48, RauruStairCollision_vertices, 24, RauruStairCollision_polygons, RauruStairCollision_polygonTypes, 0, 0, 0 };

