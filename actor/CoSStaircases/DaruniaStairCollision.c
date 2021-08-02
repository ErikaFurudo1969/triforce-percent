#include "ultra64.h"
#include "z64.h"
#include "macros.h"

u32 DaruniaStairCollision_polygonTypes[] = {
	 0x00000000, 0x0000000c,
};

CollisionPoly DaruniaStairCollision_polygons[] = {
	{ 0x0000, 0x0000, 0x0001, 0x0002, 0x0007, 0x7fff, 0xfffc, 0x0000 },
	{ 0x0000, 0x0003, 0x0000, 0x0004, 0x92f7, 0x0000, 0x430d, 0x04ce },
	{ 0x0000, 0x0000, 0x0004, 0x0001, 0x0008, 0x7fff, 0xfffb, 0x0000 },
	{ 0x0000, 0x0005, 0x0003, 0x0000, 0x92f7, 0x0000, 0x430d, 0x04ce },
	{ 0x0000, 0x0005, 0x0000, 0x0002, 0xbf8e, 0x0000, 0x9168, 0xfde3 },
	{ 0x0000, 0x0003, 0x0004, 0x0001, 0x409b, 0x0000, 0x6e80, 0xfda6 },
	{ 0x0000, 0x0006, 0x0007, 0x0008, 0x0007, 0x7fff, 0xfffd, 0xff9c },
	{ 0x0000, 0x0001, 0x0006, 0x0009, 0x8f13, 0x0000, 0x3c43, 0x063b },
	{ 0x0000, 0x0006, 0x0009, 0x0007, 0x0008, 0x7fff, 0xfffb, 0xff9c },
	{ 0x0000, 0x0002, 0x0001, 0x0006, 0x8f13, 0x0000, 0x3c43, 0x063b },
	{ 0x0000, 0x0002, 0x0006, 0x0008, 0xc66e, 0x0000, 0x8dad, 0xfd81 },
	{ 0x0000, 0x0001, 0x0009, 0x0007, 0x39bc, 0x0000, 0x723d, 0xfe07 },
	{ 0x0000, 0x000a, 0x000b, 0x000c, 0x0007, 0x7fff, 0xfffd, 0xff38 },
	{ 0x0000, 0x0007, 0x000a, 0x000d, 0x8b9a, 0x0000, 0x3540, 0x07a2 },
	{ 0x0000, 0x000a, 0x000d, 0x000b, 0x0009, 0x7fff, 0xfffc, 0xff37 },
	{ 0x0000, 0x0008, 0x0007, 0x000a, 0x8b9a, 0x0000, 0x3540, 0x07a2 },
	{ 0x0000, 0x0008, 0x000a, 0x000c, 0xcd86, 0x0000, 0x8a5f, 0xfd09 },
	{ 0x0000, 0x0007, 0x000d, 0x000b, 0x32a6, 0x0000, 0x758e, 0xfe7e },
	{ 0x0000, 0x000e, 0x000f, 0x0010, 0x0008, 0x7fff, 0xfffe, 0xfed3 },
	{ 0x0000, 0x000b, 0x000e, 0x0011, 0x8891, 0x0000, 0x2e0a, 0x0902 },
	{ 0x0000, 0x000e, 0x0011, 0x000f, 0x0009, 0x7fff, 0xfffd, 0xfed3 },
	{ 0x0000, 0x000c, 0x000b, 0x000e, 0x8891, 0x0000, 0x2e0a, 0x0902 },
	{ 0x0000, 0x000c, 0x000e, 0x0010, 0xd4ce, 0x0000, 0x8782, 0xfc7c },
	{ 0x0000, 0x000b, 0x0011, 0x000f, 0x2b5f, 0x0000, 0x786e, 0xff0b },
	{ 0x0000, 0x0012, 0x0013, 0x0014, 0x0008, 0x7fff, 0xfffe, 0xfe6f },
	{ 0x0000, 0x000f, 0x0012, 0x0015, 0x85fa, 0x0000, 0x26a8, 0x0a58 },
	{ 0x0000, 0x0012, 0x0015, 0x0013, 0x0009, 0x7fff, 0xfffd, 0xfe6f },
	{ 0x0000, 0x0010, 0x000f, 0x0012, 0x85fa, 0x0000, 0x26a8, 0x0a58 },
	{ 0x0000, 0x0010, 0x0012, 0x0014, 0xdc40, 0x0000, 0x8518, 0xfbda },
	{ 0x0000, 0x000f, 0x0015, 0x0013, 0x23ee, 0x0000, 0x7adb, 0xffad },
	{ 0x0000, 0x0016, 0x0017, 0x0018, 0x0008, 0x7fff, 0xffff, 0xfe0b },
	{ 0x0000, 0x0013, 0x0016, 0x0019, 0x83d8, 0x0000, 0x1f21, 0x0ba5 },
	{ 0x0000, 0x0016, 0x0019, 0x0017, 0x0009, 0x7fff, 0xfffe, 0xfe0b },
	{ 0x0000, 0x0014, 0x0013, 0x0016, 0x83d8, 0x0000, 0x1f21, 0x0ba5 },
	{ 0x0000, 0x0014, 0x0016, 0x0018, 0xe3d3, 0x0000, 0x8324, 0xfb23 },
	{ 0x0000, 0x0013, 0x0019, 0x0017, 0x1c5b, 0x0000, 0x7cd2, 0x0063 },
	{ 0x0000, 0x001a, 0x001b, 0x001c, 0x0008, 0x7fff, 0xffff, 0xfda7 },
	{ 0x0000, 0x0017, 0x001a, 0x001d, 0x822c, 0x0000, 0x177c, 0x0ce7 },
	{ 0x0000, 0x001a, 0x001d, 0x001b, 0x0009, 0x7fff, 0xfffe, 0xfda7 },
	{ 0x0000, 0x0018, 0x0017, 0x001a, 0x822c, 0x0000, 0x177c, 0x0ce7 },
	{ 0x0000, 0x0018, 0x001a, 0x001c, 0xeb82, 0x0000, 0x81a7, 0xfa59 },
	{ 0x0000, 0x0017, 0x001d, 0x001b, 0x14ad, 0x0000, 0x7e52, 0x012d },
	{ 0x0000, 0x001e, 0x001f, 0x0020, 0x0008, 0x7fff, 0x0000, 0xfd43 },
	{ 0x0000, 0x001b, 0x001e, 0x0021, 0x80f9, 0x0000, 0x0fc0, 0x0e1b },
	{ 0x0000, 0x001e, 0x0021, 0x001f, 0x000a, 0x7fff, 0xffff, 0xfd43 },
	{ 0x0000, 0x001c, 0x001b, 0x001e, 0x80f9, 0x0000, 0x0fc0, 0x0e1b },
	{ 0x0000, 0x001c, 0x001e, 0x0020, 0xf344, 0x0000, 0x80a3, 0xf97b },
	{ 0x0000, 0x001b, 0x0021, 0x001f, 0x0cec, 0x0000, 0x7f59, 0x020a },
	{ 0x0000, 0x0022, 0x0023, 0x0024, 0x0008, 0x7fff, 0x0000, 0xfcdf },
	{ 0x0000, 0x001f, 0x0022, 0x0025, 0x803f, 0x0000, 0x07f6, 0x0f43 },
	{ 0x0000, 0x0022, 0x0025, 0x0023, 0x000a, 0x7fff, 0xffff, 0xfcdf },
	{ 0x0000, 0x0020, 0x001f, 0x0022, 0x803f, 0x0000, 0x07f6, 0x0f43 },
	{ 0x0000, 0x0020, 0x0022, 0x0024, 0xfb12, 0x0000, 0x8018, 0xf88c },
	{ 0x0000, 0x001f, 0x0025, 0x0023, 0x051e, 0x0000, 0x7fe6, 0x02f9 },
	{ 0x0000, 0x0026, 0x0027, 0x0028, 0x0008, 0x7fff, 0x0000, 0xfc7b },
	{ 0x0000, 0x0023, 0x0026, 0x0029, 0x8000, 0x0000, 0x0024, 0x105b },
	{ 0x0000, 0x0026, 0x0029, 0x0027, 0x000a, 0x7fff, 0x0000, 0xfc7b },
	{ 0x0000, 0x0024, 0x0023, 0x0026, 0x8000, 0x0000, 0x0024, 0x105b },
	{ 0x0000, 0x0024, 0x0026, 0x0028, 0x02e5, 0x0000, 0x8008, 0xf78b },
	{ 0x0000, 0x0023, 0x0029, 0x0027, 0xfd4b, 0x0000, 0x7ff9, 0x03fa },
	{ 0x0000, 0x002a, 0x002b, 0x002c, 0x0008, 0x7fff, 0x0001, 0xfc17 },
	{ 0x0000, 0x0027, 0x002a, 0x002d, 0x803b, 0x0000, 0xf852, 0x1164 },
	{ 0x0000, 0x002a, 0x002d, 0x002b, 0x000a, 0x7fff, 0x0001, 0xfc17 },
	{ 0x0000, 0x0028, 0x0027, 0x002a, 0x803b, 0x0000, 0xf852, 0x1164 },
	{ 0x0000, 0x0028, 0x002a, 0x002c, 0x0ab5, 0x0000, 0x8073, 0xf67a },
	{ 0x0000, 0x0027, 0x002d, 0x002b, 0xf57a, 0x0000, 0x7f91, 0x050b },
	{ 0x0000, 0x002e, 0x002f, 0x0030, 0x0008, 0x7fff, 0x0001, 0xfbb3 },
	{ 0x0000, 0x002b, 0x002e, 0x0031, 0x80f0, 0x0000, 0xf087, 0x125c },
	{ 0x0000, 0x002e, 0x0031, 0x002f, 0x000a, 0x7fff, 0x0001, 0xfbb3 },
	{ 0x0000, 0x002c, 0x002b, 0x002e, 0x80f0, 0x0000, 0xf087, 0x125c },
	{ 0x0000, 0x002c, 0x002e, 0x0030, 0x127b, 0x0000, 0x8157, 0xf559 },
	{ 0x0000, 0x002b, 0x0031, 0x002f, 0xedb4, 0x0000, 0x7eaf, 0x062b },
	{ 0x0000, 0x0032, 0x0033, 0x0034, 0x0008, 0x7fff, 0x0002, 0xfb4f },
	{ 0x0000, 0x002f, 0x0032, 0x0035, 0x821f, 0x0000, 0xe8cb, 0x1342 },
	{ 0x0000, 0x0032, 0x0035, 0x0033, 0x0009, 0x7fff, 0x0002, 0xfb4f },
	{ 0x0000, 0x0030, 0x002f, 0x0032, 0x821f, 0x0000, 0xe8cb, 0x1342 },
	{ 0x0000, 0x0030, 0x0032, 0x0034, 0x1a30, 0x0000, 0x82b5, 0xf42b },
	{ 0x0000, 0x002f, 0x0035, 0x0033, 0xe5ff, 0x0000, 0x7d55, 0x0759 },
	{ 0x0000, 0x0036, 0x0037, 0x0038, 0x0008, 0x7fff, 0x0002, 0xfaeb },
	{ 0x0000, 0x0033, 0x0036, 0x0039, 0x83c6, 0x0000, 0xe125, 0x1415 },
	{ 0x0000, 0x0036, 0x0039, 0x0037, 0x0009, 0x7fff, 0x0002, 0xfaea },
	{ 0x0000, 0x0034, 0x0033, 0x0036, 0x83c6, 0x0000, 0xe125, 0x1415 },
	{ 0x0000, 0x0034, 0x0036, 0x0038, 0x21cb, 0x0000, 0x848b, 0xf2ef },
	{ 0x0000, 0x0033, 0x0039, 0x0037, 0xde63, 0x0000, 0x7b82, 0x0894 },
	{ 0x0000, 0x003a, 0x003b, 0x003c, 0x0007, 0x7fff, 0x0003, 0xfa87 },
	{ 0x0000, 0x0037, 0x003a, 0x003d, 0x85e4, 0x0000, 0xd99c, 0x14d5 },
	{ 0x0000, 0x003a, 0x003d, 0x003b, 0x0009, 0x7fff, 0x0003, 0xfa86 },
	{ 0x0000, 0x0038, 0x0037, 0x003a, 0x85e4, 0x0000, 0xd99c, 0x14d5 },
	{ 0x0000, 0x0038, 0x003a, 0x003c, 0x2946, 0x0000, 0x86d6, 0xf1a8 },
	{ 0x0000, 0x0037, 0x003d, 0x003b, 0xd6e7, 0x0000, 0x7939, 0x09db },
	{ 0x0000, 0x003e, 0x003f, 0x0040, 0x0007, 0x7fff, 0x0003, 0xfa23 },
	{ 0x0000, 0x003b, 0x003e, 0x0041, 0x8877, 0x0000, 0xd239, 0x1582 },
	{ 0x0000, 0x003e, 0x0041, 0x003f, 0x0009, 0x7fff, 0x0003, 0xfa22 },
	{ 0x0000, 0x003c, 0x003b, 0x003e, 0x8877, 0x0000, 0xd239, 0x1582 },
	{ 0x0000, 0x003c, 0x003e, 0x0040, 0x3099, 0x0000, 0x8996, 0xf055 },
	{ 0x0000, 0x003b, 0x0041, 0x003f, 0xcf93, 0x0000, 0x767c, 0x0b2d },
	{ 0x0000, 0x0042, 0x0043, 0x0044, 0x0007, 0x7fff, 0x0004, 0xf9bf },
	{ 0x0000, 0x003f, 0x0042, 0x0045, 0x8b7c, 0x0000, 0xcb01, 0x1619 },
	{ 0x0000, 0x0042, 0x0045, 0x0043, 0x0009, 0x7fff, 0x0004, 0xf9be },
	{ 0x0000, 0x0040, 0x003f, 0x0042, 0x8b7c, 0x0000, 0xcb01, 0x1619 },
	{ 0x0000, 0x0040, 0x0042, 0x0044, 0x37be, 0x0000, 0x8cc7, 0xeefa },
	{ 0x0000, 0x003f, 0x0045, 0x0043, 0xc86d, 0x0000, 0x734e, 0x0c89 },
	{ 0x0000, 0x0046, 0x0047, 0x0048, 0x015a, 0x7ffd, 0x0142, 0xf91d },
	{ 0x0000, 0x0043, 0x0048, 0x0049, 0x8ef1, 0x0000, 0xc3fc, 0x169b },
	{ 0x0000, 0x0046, 0x0048, 0x0049, 0x0377, 0x7ff1, 0x01d7, 0xf8ac },
	{ 0x0000, 0x0044, 0x0043, 0x0048, 0x8ef1, 0x0000, 0xc3fc, 0x169b },
	{ 0x0000, 0x0044, 0x0047, 0x0048, 0x42a5, 0x0000, 0x92b8, 0xecce },
	{ 0x0000, 0x0043, 0x0046, 0x0049, 0xbb9e, 0x0000, 0x6c34, 0x0f17 },
};

Vec3s DaruniaStairCollision_vertices[74] = {
	{ 779, 0, -1080 },
	{ 1662, 0, -274 },
	{ 1124, 0, -1281 },
	{ 1377, -100, -108 },
	{ 1377, 0, -108 },
	{ 779, -100, -1080 },
	{ 1124, 100, -1281 },
	{ 1955, 100, -423 },
	{ 1481, 100, -1461 },
	{ 1662, 100, -274 },
	{ 1481, 200, -1461 },
	{ 2258, 200, -553 },
	{ 1847, 200, -1618 },
	{ 1955, 200, -423 },
	{ 1847, 300, -1618 },
	{ 2568, 300, -665 },
	{ 2223, 300, -1753 },
	{ 2258, 300, -553 },
	{ 2223, 400, -1753 },
	{ 2884, 400, -757 },
	{ 2606, 400, -1864 },
	{ 2568, 400, -665 },
	{ 2606, 500, -1864 },
	{ 3205, 500, -830 },
	{ 2995, 500, -1952 },
	{ 2884, 500, -757 },
	{ 2995, 600, -1952 },
	{ 3530, 600, -883 },
	{ 3389, 600, -2016 },
	{ 3205, 600, -830 },
	{ 3389, 700, -2016 },
	{ 3857, 700, -916 },
	{ 3786, 700, -2056 },
	{ 3530, 700, -883 },
	{ 3786, 800, -2056 },
	{ 4186, 800, -929 },
	{ 4185, 800, -2071 },
	{ 3857, 800, -916 },
	{ 4185, 900, -2071 },
	{ 4515, 900, -923 },
	{ 4584, 900, -2062 },
	{ 4186, 900, -929 },
	{ 4584, 1000, -2062 },
	{ 4843, 1000, -895 },
	{ 4981, 1000, -2029 },
	{ 4515, 1000, -923 },
	{ 4981, 1100, -2029 },
	{ 5169, 1100, -848 },
	{ 5376, 1100, -1971 },
	{ 4843, 1100, -895 },
	{ 5376, 1200, -1971 },
	{ 5492, 1200, -782 },
	{ 5767, 1200, -1889 },
	{ 5169, 1200, -848 },
	{ 5767, 1300, -1889 },
	{ 5809, 1300, -695 },
	{ 6152, 1300, -1784 },
	{ 5492, 1300, -782 },
	{ 6152, 1400, -1784 },
	{ 6121, 1400, -589 },
	{ 6529, 1400, -1655 },
	{ 5809, 1400, -695 },
	{ 6529, 1500, -1655 },
	{ 6426, 1500, -465 },
	{ 6899, 1500, -1504 },
	{ 6121, 1500, -589 },
	{ 6899, 1600, -1504 },
	{ 6723, 1600, -322 },
	{ 7258, 1600, -1330 },
	{ 6426, 1600, -465 },
	{ 6942, 1692, -183 },
	{ 7547, 1695, -1154 },
	{ 7258, 1700, -1330 },
	{ 6723, 1700, -322 },
};

CollisionHeader DaruniaStairCollision_collisionHeader = { 779, -100, -2071, 7547, 1700, -108, 74, DaruniaStairCollision_vertices, 108, DaruniaStairCollision_polygons, DaruniaStairCollision_polygonTypes, 0, 0, 0 };

