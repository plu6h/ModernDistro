use uo;
use os;

var dirt_tiles := {
						0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15,
						0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 0x7B, 0x7C,
						0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D,
						0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99,
						0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5,
						0xA6, 0xA7, 0xDC, 0xDD, 0xDE, 0xDF, 0xE0, 0xE1, 0xE2, 0xE3, 0xE8, 0xE9,
						0xEA, 0xEB, 0x141, 0x142, 0x143, 0x144, 0x14C, 0x14D, 0x14E, 0x14F, 0x150,
						0x151, 0x152, 0x153, 0x154, 0x155, 0x156, 0x157, 0x158, 0x159, 0x15A, 0x15B,
						0x15C, 0x169, 0x16A, 0x16B, 0x16C, 0x16D, 0x16E, 0x16F, 0x170, 0x171, 0x172,
						0x173, 0x174, 0x1DC, 0x1DD, 0x1DE, 0x1DF, 0x1E0, 0x1E1, 0x1E2, 0x1E3, 0x1E4,
						0x1E5, 0x1E6, 0x1E7, 0x1E8, 0x1E9, 0x1EA, 0x1EB, 0x1EC, 0x1ED, 0x1EE, 0x1EF,
						0x272, 0x273, 0x274, 0x275, 0x27E, 0x27F, 0x280, 0x281, 0x2D0, 0x2D1, 0x2D2,
						0x2D3, 0x2D4, 0x2D5, 0x2D6, 0x2D7, 0x2E5, 0x2E6, 0x2E7, 0x2E8, 0x2E9, 0x2EA,
						0x2EB, 0x2EC, 0x2ED, 0x2EE, 0x2EF, 0x2F0, 0x2F1, 0x2F2, 0x2F3, 0x2F4, 0x2F5,
						0x2F6, 0x2F7, 0x2F8, 0x2F9, 0x2FA, 0x2FB, 0x2FC, 0x2FD, 0x2FE, 0x2FF, 0x303,
						0x304, 0x305, 0x306, 0x307, 0x308, 0x309, 0x30A, 0x30B, 0x30C, 0x30D, 0x30E,
						0x30F, 0x310, 0x311, 0x312, 0x313, 0x314, 0x315, 0x316, 0x317, 0x318, 0x319,
						0x31A, 0x31B, 0x31C, 0x31D, 0x31E, 0x31F, 0x32C, 0x32D, 0x32E, 0x32F, 0x33D,
						0x33E, 0x33F, 0x340, 0x345, 0x346, 0x347, 0x348, 0x349, 0x34A, 0x34B, 0x34C,
						0x355, 0x356, 0x357, 0x358, 0x367, 0x368, 0x369, 0x36A, 0x36B, 0x36C, 0x36D,
						0x36E, 0x377, 0x378, 0x379, 0x37A, 0x38D, 0x38E, 0x38F, 0x390, 0x395, 0x396,
						0x397, 0x398, 0x399, 0x39A, 0x39B, 0x39C, 0x3A5, 0x3A6, 0x3A7, 0x3A8, 0x3F6,
						0x3F7, 0x3F8, 0x3F9, 0x3FA, 0x3FB, 0x3FC, 0x3FD, 0x3FE, 0x3FF, 0x400, 0x401,
						0x402, 0x403, 0x404, 0x405, 0x547, 0x548, 0x549, 0x54A, 0x54B, 0x54C, 0x54D,
						0x54E, 0x553, 0x554, 0x555, 0x556, 0x597, 0x598, 0x599, 0x59A, 0x59B, 0x59C,
						0x59D, 0x59E, 0x623, 0x624, 0x625, 0x626, 0x627, 0x628, 0x629, 0x62A, 0x62B,
						0x62C, 0x62D, 0x62E, 0x62F, 0x630, 0x631, 0x632, 0x633, 0x634, 0x635, 0x636,
						0x637, 0x638, 0x639, 0x63A, 0x6F3, 0x6F4, 0x6F5, 0x6F6, 0x6F7, 0x6F8, 0x6F9,
						0x6FA, 0x777, 0x778, 0x779, 0x77A, 0x77B, 0x77C, 0x77D, 0x77E, 0x77F, 0x780,
						0x781, 0x782, 0x783, 0x784, 0x785, 0x786, 0x787, 0x788, 0x789, 0x78A, 0x78B,
						0x78C, 0x78D, 0x78E, 0x78F, 0x790, 0x791, 0x79A, 0x79B, 0x79C, 0x79D, 0x79E,
						0x79F, 0x7A0, 0x7A1, 0x7A2, 0x7A3, 0x7A4, 0x7A5, 0x7A6, 0x7A7, 0x7A8, 0x7A9,
						0x7AE, 0x7AF, 0x7B0, 0x7B1, 0x98C, 0x98D, 0x98E, 0x98F, 0x990, 0x991, 0x992,
						0x993, 0x994, 0x995, 0x996, 0x997, 0x998, 0x999, 0x99A, 0x99B, 0x99C, 0x99D,
						0x99E, 0x99F, 0x9AC, 0x9AD, 0x9AE, 0x9AF, 0x9B0, 0x9B1, 0x9B2, 0x9B3, 0x9B4,
						0x9B5, 0x9B6, 0x9B7, 0x9B8, 0x9B9, 0x9BA, 0x9BB, 0x9BC, 0x9BD, 0x9BE, 0x9BF,
						0x5B27, 0x5B28, 0x5B29, 0x5B2A, 0x5B2B, 0x5B2C, 0x5B2D, 0x5B2E, 0x5B2F, 0x5B30,
						0x5B31, 0x5B32, 0x5B33, 0x5B34, 0x5B35, 0x5B36, 0x5B37, 0x5B38, 0x5B39, 0x5B3A,
						0x5B3B, 0x5B3C, 0x5B3D, 0x5B3E, 0x71F4, 0x71F5, 0x71F6, 0x71F7, 0x71F8, 0x71F9,
						0x71FA, 0x71FB, 0x72C9, 0x72CA
					};

var mountain_tiles := {
						0xDC, 0xDD, 0xDE, 0xDF, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5,
						0xE6, 0xE7, 0xEC, 0xED, 0xEE, 0xEF, 0xF0, 0xF1, 0xF2, 0xF3,
						0xF4, 0xF5, 0xF6, 0xF7, 0xFC, 0xFD, 0xFE, 0xFF, 0x100, 0x101,
						0x102, 0x103, 0x104, 0x105, 0x106, 0x107, 0x10C, 0x10D, 0x10E, 0x10F,
						0x110, 0x111, 0x112, 0x113, 0x114, 0x115, 0x116, 0x117, 0x11E, 0x11F,
						0x120, 0x121, 0x122, 0x123, 0x124, 0x125, 0x126, 0x128, 0x128, 0x129,
						0x141, 0x142, 0x143, 0x144, 0x1D3, 0x1D4, 0x1D5, 0x1D6, 0x1D7, 0x1D8,
						0x1D9, 0x1DA, 0x1DC, 0x1DD, 0x1DE, 0x1DF, 0x1E0, 0x1E1, 0x1E2, 0x1E3,
						0x1E4, 0x1E5, 0x1E6, 0x1E7, 0x1EC, 0x1ED, 0x1EE, 0x1EF, 0x21F, 0x220,
						0x221, 0x222, 0x223, 0x224, 0x225, 0x226, 0x227, 0x228, 0x229, 0x22A,
						0x22B, 0x22C, 0x22D, 0x22E, 0x22F, 0x230, 0x231, 0x232, 0x233, 0x234,
						0x235, 0x236, 0x237, 0x238, 0x239, 0x23A, 0x23B, 0x23C, 0x23D, 0x23E,
						0x23F, 0x240, 0x241, 0x242, 0x243, 0x245, 0x246, 0x247, 0x248, 0x249,
						0x24A, 0x24B, 0x24C, 0x24D, 0x24E, 0x24F, 0x250, 0x251, 0x252, 0x253,
						0x254, 0x255, 0x256, 0x257, 0x258, 0x259, 0x262, 0x263, 0x264, 0x265,
						0x3F2, 0x6CD, 0x6CE, 0x6CF, 0x6D0, 0x6D1, 0x6D2, 0x6D3, 0x6D4, 0x6D5,
						0x6D6, 0x6D7, 0x6D8, 0x6D9, 0x6DA, 0x6DB, 0x6DC, 0x6DD, 0x6EB, 0x6EC,
						0x6ED, 0x6EE, 0x6EF, 0x6F0, 0x6F1, 0x6F2, 0x6F3, 0x6F4, 0x6F5, 0x6F6,
						0x6F7, 0x6F8, 0x6F9, 0x6FA, 0x6FB, 0x6FC, 0x6FD, 0x6FE, 0x709, 0x70A,
						0x70B, 0x70C, 0x70D, 0x70E, 0x70F, 0x710, 0x711, 0x713, 0x714, 0x715,
						0x716, 0x717, 0x718, 0x719, 0x71A, 0x71B, 0x71C, 0x71D, 0x71E, 0x71F,
						0x720, 0x727, 0x728, 0x729, 0x72A, 0x72B, 0x72C, 0x72D, 0x72E, 0x72F,
						0x730, 0x731, 0x732, 0x733, 0x734, 0x735, 0x736, 0x737, 0x738, 0x739,
						0x73A, 0x73B, 0x73C, 0x73D, 0x73E, 0x745, 0x746, 0x747, 0x748, 0x749,
						0x74A, 0x74B, 0x74C, 0x74D, 0x74E, 0x74F, 0x750, 0x751, 0x752, 0x753,
						0x754, 0x755, 0x756, 0x757, 0x758, 0x759, 0x75A, 0x75B, 0x75C, 0x7BD,
						0x7BE, 0x7BF, 0x7C0, 0x7C1, 0x7C2, 0x7C3, 0x7C4, 0x7C5, 0x7C6, 0x7C7,
						0x7C8, 0x7C9, 0x7CA, 0x7CB, 0x7CC, 0x7CD, 0x7CE, 0x7CF, 0x7D0, 0x7D1,
						0x7D2, 0x7D3, 0x7D4, 0x7EC, 0x7ED, 0x7EE, 0x7EF, 0x7F0, 0x7F1, 0x834,
						0x835, 0x836, 0x837, 0x838, 0x839,
						0x453B, 0x453C, 0x453D, 0x453E, 0x453F, 0x4540, 0x4541,
						0x4542, 0x4543, 0x4544, 0x4545, 0x4546, 0x4547, 0x4548,
						0x4549, 0x454A, 0x454B, 0x454C, 0x454D, 0x454E, 0x454F
					};

var sand_tiles := {
					0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,
					0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29,
					0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 0x30, 0x31, 0x32, 0x33,
					0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D,
					0x3E, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B,
					0x11E, 0x11F, 0x120, 0x121, 0x122, 0x123, 0x124, 0x125, 0x126, 0x127,
					0x128, 0x129, 0x12A, 0x12B, 0x12C, 0x12D, 0x192, 0x1A8, 0x1A9, 0x1AA,
					0x1AB, 0x1B9, 0x1BA, 0x1BB, 0x1BC, 0x1BD, 0x1BE, 0x1BF, 0x1C0, 0x1C1,
					0x1C2, 0x1C3, 0x1C4, 0x1C5, 0x1C6, 0x1C7, 0x1C8, 0x1C9, 0x1CA, 0x1CB,
					0x1CC, 0x1CD, 0x1CE, 0x1CF, 0x1D0, 0x1D1, 0x282, 0x283, 0x284, 0x285,
					0x28A, 0x28B, 0x28C, 0x28D, 0x28E, 0x28F, 0x290, 0x291, 0x335, 0x336,
					0x337, 0x338, 0x339, 0x33A, 0x33B, 0x33C, 0x341, 0x342, 0x343, 0x344,
					0x34D, 0x34E, 0x34F, 0x350, 0x351, 0x352, 0x353, 0x354, 0x359, 0x35A,
					0x35B, 0x35C, 0x3B7, 0x3B8, 0x3B9, 0x3BA, 0x3BB, 0x3BC, 0x3BD, 0x3BE,
					0x3C7, 0x3C8, 0x3C9, 0x3CA,
					0x5A7, 0x5A8, 0x5A9, 0x5AA, 0x5AB, 0x5AC, 0x5AD, 0x5AE, 0x5AF,
					0x5B0, 0x5B1, 0x5B2, 0x64B, 0x64C, 0x64D, 0x64E, 0x64F, 0x650,
					0x651, 0x652, 0x657, 0x658, 0x659, 0x65A, 0x663, 0x664, 0x665,
					0x666, 0x667, 0x668, 0x669, 0x66A, 0x66F, 0x670, 0x671, 0x672
				};

var swamp_tiles := {
					0x9C4, 0x9C5, 0x9C6, 0x9C7, 0x9C8, 0x9C9, 0x9CA,
					0x9CB, 0x9CC, 0x9CD, 0x9CE, 0x9CF, 0x9D0, 0x9D1,
					0x9D2, 0x9D3, 0x9D4, 0x9D5, 0x9D6, 0x9D7, 0x9D8,
					0x9D9, 0x9DA, 0x9DB, 0x9DC, 0x9DD, 0x9DE, 0x9DF,
					0x9E0, 0x9E1, 0x9E2, 0x9E3, 0x9E4, 0x9E5, 0x9E6,
					0x9E7, 0x9E8, 0x9E9, 0x9EA, 0x9EB,
					0x3D65, 0x3DC0, 0x3DC1, 0x3DC2, 0x3DC3, 0x3DC4,
					0x3DC5, 0x3DC6, 0x3DC7, 0x3DC8, 0x3DC9, 0x3DCA,
					0x3DCB, 0x3DCC, 0x3DCD, 0x3DCE, 0x3DCF, 0x3DD0,
					0x3DD1, 0x3DD2, 0x3DD3, 0x3DD4, 0x3DD5, 0x3DD6,
					0x3DD7, 0x3DD8, 0x3DD9, 0x3DDA, 0x3DDB, 0x3DDC,
					0x3DDD, 0x3DDE, 0x3DDF, 0x3DE0, 0x3DE1, 0x3DE2,
					0x3DE3, 0x3DE4, 0x3DE5, 0x3DE6, 0x3DE7, 0x3DE8,
					0x3DE9, 0x3DEA, 0x3DEB, 0x3DEC, 0x3DED, 0x3DEE,
					0x3DEF, 0x3DF0, 0x3DF1, 0x3EF0, 0x3FF6, 0x3FFC,
					0x3FFD, 0x3FFE
				}; // Clay

// var water_tiles := ; // maybe needed...

function RC_IsDirtPatch( byref use_on )

	var tile_id := 0;
	if( use_on.objtype )
		tile_id := ( use_on.objtype & 0x3FFF ) | 0x4000;
	elseif( use_on.item )
		tile_id := ( use_on.item & 0x3FFF ) | 0x4000;
	elseif( GetMapInfo( use_on.x, use_on.y, use_on.realm ).landtile )
		tile_id := GetMapInfo( use_on.x, use_on.y, use_on.realm ).landtile;
	else
		return 0;
	endif

	return ( tile_id in dirt_tiles );
endfunction

function RC_IsSandPatch( byref use_on )

	var tile_id := 0;
	if( use_on.objtype )
		tile_id := ( use_on.objtype & 0x3FFF ) | 0x4000;
	elseif( use_on.item )
		tile_id := ( use_on.item & 0x3FFF ) | 0x4000;
	elseif( GetMapInfo( use_on.x, use_on.y, use_on.realm ).landtile )
		tile_id := GetMapInfo( use_on.x, use_on.y, use_on.realm ).landtile;
	else
		return 0;
	endif

	return ( tile_id in sand_tiles );
endfunction

function RC_IsSwampPatch( byref use_on )

	var tile_id := 0;
	if( use_on.objtype )
		tile_id := ( use_on.objtype & 0x3FFF ) | 0x4000;
	elseif( use_on.item )
		tile_id := ( use_on.item & 0x3FFF ) | 0x4000;
	elseif( GetMapInfo( use_on.x, use_on.y, use_on.realm ).landtile )
		tile_id := GetMapInfo( use_on.x, use_on.y, use_on.realm ).landtile;
	else
		return 0;
	endif

	return ( tile_id in swamp_tiles );
endfunction
