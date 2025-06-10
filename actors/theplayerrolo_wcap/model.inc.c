Lights1 theplayerrolo_wcap_SFOTHEggTop_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 theplayerrolo_wcap_SFOTHEggMiddle_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 theplayerrolo_wcap_Metal__METAL__lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Texture theplayerrolo_wcap_SFOTHEggTop_rgba16[] = {
	#include "actors/theplayerrolo_wcap/SFOTHEggTop.rgba16.inc.c"
};

Texture theplayerrolo_wcap_SFOTHEggMiddle_rgba16[] = {
	#include "actors/theplayerrolo_wcap/SFOTHEggMiddle.rgba16.inc.c"
};

Texture theplayerrolo_wcap_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/theplayerrolo_wcap/Metal_Shade.rgba16.inc.c"
};

Texture theplayerrolo_wcap_Metal_Light_rgba16_rgba16[] = {
	#include "actors/theplayerrolo_wcap/Metal_Light.rgba16.inc.c"
};

Texture theplayerrolo_wcap_wing_2_ia8[] = {
	#include "actors/theplayerrolo_wcap/wing_2.ia8.inc.c"
};

Texture theplayerrolo_wcap_wing1_ia8[] = {
	#include "actors/theplayerrolo_wcap/wing1.ia8.inc.c"
};

Vtx theplayerrolo_wcap_Wing_Cap_mesh_layer_1_vtx_0[26] = {
	{{{-10, 327, 10}, 0, {702, 681}, {0xFC, 0x7F, 0x09, 0xFF}}},
	{{{-111, 272, 10}, 0, {1248, 798}, {0x9E, 0x50, 0x08, 0xFF}}},
	{{{-72, 272, 68}, 0, {1190, 317}, {0xBB, 0x4F, 0x47, 0xFF}}},
	{{{-72, 272, 68}, 0, {984, 1143}, {0xBB, 0x4F, 0x47, 0xFF}}},
	{{{-10, 272, 107}, 0, {1248, 798}, {0xFC, 0x50, 0x63, 0xFF}}},
	{{{-10, 272, 107}, 0, {559, 1226}, {0xFC, 0x50, 0x63, 0xFF}}},
	{{{70, 272, 68}, 0, {984, 1143}, {0x42, 0x51, 0x49, 0xFF}}},
	{{{70, 272, 68}, 0, {189, 1063}, {0x42, 0x51, 0x49, 0xFF}}},
	{{{109, 272, 10}, 0, {559, 1226}, {0x60, 0x53, 0x08, 0xFF}}},
	{{{109, 272, 10}, 0, {0, 434}, {0x60, 0x53, 0x08, 0xFF}}},
	{{{70, 272, -84}, 0, {186, 1060}, {0x45, 0x54, 0xBE, 0xFF}}},
	{{{70, 272, -84}, 0, {360, 22}, {0x45, 0x54, 0xBE, 0xFF}}},
	{{{-10, 272, -123}, 0, {25, 454}, {0xFC, 0x54, 0xA1, 0xFF}}},
	{{{-10, 272, -123}, 0, {746, -6}, {0xFC, 0x54, 0xA1, 0xFF}}},
	{{{-72, 272, -84}, 0, {361, 18}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-72, 272, -84}, 0, {1190, 317}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-111, 272, 10}, 0, {746, -6}, {0x9E, 0x50, 0x08, 0xFF}}},
	{{{-111, -9, 10}, 0, {1190, 317}, {0x9B, 0xB3, 0x09, 0xFF}}},
	{{{-10, -64, 10}, 0, {702, 681}, {0xFC, 0x81, 0x09, 0xFF}}},
	{{{-72, -9, 68}, 0, {1248, 798}, {0xB9, 0xB4, 0x49, 0xFF}}},
	{{{-72, -9, -84}, 0, {746, -6}, {0xB6, 0xB1, 0xBE, 0xFF}}},
	{{{-10, -9, -123}, 0, {401, 19}, {0xFC, 0xAF, 0x9E, 0xFF}}},
	{{{70, -9, -84}, 0, {25, 454}, {0x47, 0xAF, 0xBC, 0xFF}}},
	{{{109, -9, 10}, 0, {189, 1063}, {0x63, 0xB1, 0x08, 0xFF}}},
	{{{70, -9, 68}, 0, {559, 1226}, {0x43, 0xB2, 0x4B, 0xFF}}},
	{{{-10, -9, 107}, 0, {984, 1143}, {0xFC, 0xB4, 0x66, 0xFF}}},
};

Gfx theplayerrolo_wcap_Wing_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(theplayerrolo_wcap_Wing_Cap_mesh_layer_1_vtx_0 + 0, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
	gsSP2Triangles(0, 5, 6, 0, 0, 7, 8, 0),
	gsSP2Triangles(0, 9, 10, 0, 0, 11, 12, 0),
	gsSP2Triangles(0, 13, 14, 0, 0, 15, 16, 0),
	gsSP2Triangles(17, 18, 19, 0, 20, 18, 17, 0),
	gsSP2Triangles(21, 18, 20, 0, 22, 18, 21, 0),
	gsSP2Triangles(23, 18, 22, 0, 24, 18, 23, 0),
	gsSP2Triangles(25, 18, 24, 0, 19, 18, 25, 0),
	gsSPEndDisplayList(),
};

Vtx theplayerrolo_wcap_Wing_Cap_mesh_layer_1_vtx_1[48] = {
	{{{-166, 145, 10}, 0, {810, 26}, {0x81, 0x04, 0x09, 0xFF}}},
	{{{-111, -9, 10}, 0, {126, 263}, {0x9B, 0xB3, 0x09, 0xFF}}},
	{{{-72, -9, 68}, 0, {133, 802}, {0xB9, 0xB4, 0x49, 0xFF}}},
	{{{-111, 145, 107}, 0, {766, 1025}, {0xA7, 0x04, 0x5B, 0xFF}}},
	{{{-111, 272, 10}, 0, {1460, 236}, {0x9E, 0x50, 0x08, 0xFF}}},
	{{{-72, 272, 68}, 0, {1453, 893}, {0xBB, 0x4F, 0x47, 0xFF}}},
	{{{-111, 145, 107}, 0, {810, 26}, {0xA7, 0x04, 0x5B, 0xFF}}},
	{{{-72, -9, 68}, 0, {126, 263}, {0xB9, 0xB4, 0x49, 0xFF}}},
	{{{-10, -9, 107}, 0, {133, 802}, {0xFC, 0xB4, 0x66, 0xFF}}},
	{{{-10, 145, 162}, 0, {766, 1025}, {0xFC, 0x04, 0x7F, 0xFF}}},
	{{{-72, 272, 68}, 0, {1460, 236}, {0xBB, 0x4F, 0x47, 0xFF}}},
	{{{-10, 272, 107}, 0, {1453, 893}, {0xFC, 0x50, 0x63, 0xFF}}},
	{{{-10, 145, 162}, 0, {810, 26}, {0xFC, 0x04, 0x7F, 0xFF}}},
	{{{-10, -9, 107}, 0, {126, 263}, {0xFC, 0xB4, 0x66, 0xFF}}},
	{{{70, -9, 68}, 0, {133, 802}, {0x43, 0xB2, 0x4B, 0xFF}}},
	{{{109, 145, 107}, 0, {766, 1025}, {0x55, 0x04, 0x5E, 0xFF}}},
	{{{-10, 272, 107}, 0, {1460, 236}, {0xFC, 0x50, 0x63, 0xFF}}},
	{{{70, 272, 68}, 0, {1453, 893}, {0x42, 0x51, 0x49, 0xFF}}},
	{{{109, 145, 107}, 0, {810, 832}, {0x55, 0x04, 0x5E, 0xFF}}},
	{{{70, -9, 68}, 0, {126, 788}, {0x43, 0xB2, 0x4B, 0xFF}}},
	{{{109, -9, 10}, 0, {133, 250}, {0x63, 0xB1, 0x08, 0xFF}}},
	{{{164, 145, 10}, 0, {766, 26}, {0x7F, 0x04, 0x09, 0xFF}}},
	{{{70, 272, 68}, 0, {1460, 816}, {0x42, 0x51, 0x49, 0xFF}}},
	{{{109, 272, 10}, 0, {1453, 159}, {0x60, 0x53, 0x08, 0xFF}}},
	{{{164, 145, 10}, 0, {810, 26}, {0x7F, 0x04, 0x09, 0xFF}}},
	{{{109, -9, 10}, 0, {126, 263}, {0x63, 0xB1, 0x08, 0xFF}}},
	{{{70, -9, -84}, 0, {133, 802}, {0x47, 0xAF, 0xBC, 0xFF}}},
	{{{109, 145, -123}, 0, {766, 1025}, {0x5C, 0x04, 0xA8, 0xFF}}},
	{{{109, 272, 10}, 0, {1460, 236}, {0x60, 0x53, 0x08, 0xFF}}},
	{{{70, 272, -84}, 0, {1453, 893}, {0x45, 0x54, 0xBE, 0xFF}}},
	{{{109, 145, -123}, 0, {810, 26}, {0x5C, 0x04, 0xA8, 0xFF}}},
	{{{70, -9, -84}, 0, {126, 263}, {0x47, 0xAF, 0xBC, 0xFF}}},
	{{{-10, -9, -123}, 0, {133, 802}, {0xFC, 0xAF, 0x9E, 0xFF}}},
	{{{-10, 145, -178}, 0, {782, 883}, {0xFC, 0x04, 0x81, 0xFF}}},
	{{{70, 272, -84}, 0, {1460, 236}, {0x45, 0x54, 0xBE, 0xFF}}},
	{{{-10, 272, -123}, 0, {1453, 893}, {0xFC, 0x54, 0xA1, 0xFF}}},
	{{{-10, 145, -178}, 0, {810, 1025}, {0xFC, 0x04, 0x81, 0xFF}}},
	{{{-10, -9, -123}, 0, {126, 788}, {0xFC, 0xAF, 0x9E, 0xFF}}},
	{{{-72, -9, -84}, 0, {133, 250}, {0xB6, 0xB1, 0xBE, 0xFF}}},
	{{{-111, 145, -123}, 0, {766, 26}, {0xA1, 0x04, 0xAC, 0xFF}}},
	{{{-10, 272, -123}, 0, {1460, 816}, {0xFC, 0x54, 0xA1, 0xFF}}},
	{{{-72, 272, -84}, 0, {1453, 159}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-111, 145, -123}, 0, {820, 26}, {0xA1, 0x04, 0xAC, 0xFF}}},
	{{{-72, -9, -84}, 0, {133, 159}, {0xB6, 0xB1, 0xBE, 0xFF}}},
	{{{-111, -9, 10}, 0, {126, 816}, {0x9B, 0xB3, 0x09, 0xFF}}},
	{{{-166, 145, 10}, 0, {775, 1025}, {0x81, 0x04, 0x09, 0xFF}}},
	{{{-72, 272, -84}, 0, {1453, 250}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-111, 272, 10}, 0, {1460, 788}, {0x9E, 0x50, 0x08, 0xFF}}},
};

Gfx theplayerrolo_wcap_Wing_Cap_mesh_layer_1_tri_1[] = {
	gsSPVertex(theplayerrolo_wcap_Wing_Cap_mesh_layer_1_vtx_1 + 0, 48, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSP2Triangles(10, 6, 9, 0, 10, 9, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
	gsSP2Triangles(22, 18, 21, 0, 22, 21, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 24, 27, 0, 28, 27, 29, 0),
	gsSP2Triangles(30, 31, 32, 0, 30, 32, 33, 0),
	gsSP2Triangles(34, 30, 33, 0, 34, 33, 35, 0),
	gsSP2Triangles(36, 37, 38, 0, 36, 38, 39, 0),
	gsSP2Triangles(40, 36, 39, 0, 40, 39, 41, 0),
	gsSP2Triangles(42, 43, 44, 0, 42, 44, 45, 0),
	gsSP2Triangles(46, 42, 45, 0, 46, 45, 47, 0),
	gsSPEndDisplayList(),
};

Vtx theplayerrolo_wcap_Wings_mesh_layer_4_vtx_0[8] = {
	{{{-180, 0, -104}, 0, {1008, 2032}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-113, 26, -30}, 0, {-16, 2032}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{-238, 194, -122}, 0, {1008, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-172, 221, -48}, 0, {-16, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{239, 194, -122}, 0, {1008, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{114, 26, -30}, 0, {-16, 2032}, {0x59, 0xED, 0x58, 0xFF}}},
	{{{180, 0, -104}, 0, {1008, 2032}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{173, 221, -48}, 0, {-16, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
};

Gfx theplayerrolo_wcap_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(theplayerrolo_wcap_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx theplayerrolo_wcap_Wings_mesh_layer_4_vtx_1[8] = {
	{{{-113, 26, -30}, 0, {1008, 2032}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{-47, 52, 42}, 0, {-16, 2032}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{-172, 221, -48}, 0, {1008, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-107, 247, 24}, 0, {-16, -16}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{173, 221, -48}, 0, {1008, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{48, 52, 42}, 0, {-16, 2032}, {0x59, 0xED, 0x58, 0xFF}}},
	{{{114, 26, -30}, 0, {1008, 2032}, {0x59, 0xED, 0x58, 0xFF}}},
	{{{107, 247, 24}, 0, {-16, -16}, {0x59, 0xED, 0x58, 0xFF}}},
};

Gfx theplayerrolo_wcap_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(theplayerrolo_wcap_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_theplayerrolo_wcap_SFOTHEggTop[] = {
	gsSPSetLights1(theplayerrolo_wcap_SFOTHEggTop_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, theplayerrolo_wcap_SFOTHEggTop_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1599, 205),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 10, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 156, 156),
	gsSPEndDisplayList(),
};

Gfx mat_revert_theplayerrolo_wcap_SFOTHEggTop[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_theplayerrolo_wcap_SFOTHEggMiddle[] = {
	gsSPSetLights1(theplayerrolo_wcap_SFOTHEggMiddle_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, theplayerrolo_wcap_SFOTHEggMiddle_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1583, 171),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 12, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 188, 128),
	gsSPEndDisplayList(),
};

Gfx mat_revert_theplayerrolo_wcap_SFOTHEggMiddle[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_theplayerrolo_wcap_Metal__METAL_[] = {
	gsSPGeometryMode(G_CULL_BACK, G_TEXTURE_GEN),
	gsSPLight(&theplayerrolo_wcap_Metal__METAL__lights.l, 1),
    gsSPLight(&theplayerrolo_wcap_Metal__METAL__lights.a, 2),
    gsSPCopyLightEXT(2, 15),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, theplayerrolo_wcap_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, theplayerrolo_wcap_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_theplayerrolo_wcap_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_theplayerrolo_wcap_Wing_Tip[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, theplayerrolo_wcap_wing_2_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_theplayerrolo_wcap_Wing_Tip[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_theplayerrolo_wcap_Wing_Base[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, theplayerrolo_wcap_wing1_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_theplayerrolo_wcap_Wing_Base[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx theplayerrolo_wcap_Wing_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_theplayerrolo_wcap_SFOTHEggTop),
	gsSPDisplayList(theplayerrolo_wcap_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_theplayerrolo_wcap_SFOTHEggTop),
	gsSPDisplayList(mat_theplayerrolo_wcap_SFOTHEggMiddle),
	gsSPDisplayList(theplayerrolo_wcap_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_theplayerrolo_wcap_SFOTHEggMiddle),
	gsSPEndDisplayList(),
};

Gfx theplayerrolo_wcap_Wing_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_theplayerrolo_wcap_Metal__METAL_),
	gsSPDisplayList(theplayerrolo_wcap_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(theplayerrolo_wcap_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_theplayerrolo_wcap_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx theplayerrolo_wcap_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_theplayerrolo_wcap_Wing_Tip),
	gsSPDisplayList(theplayerrolo_wcap_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_theplayerrolo_wcap_Wing_Tip),
	gsSPDisplayList(mat_theplayerrolo_wcap_Wing_Base),
	gsSPDisplayList(theplayerrolo_wcap_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_theplayerrolo_wcap_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx theplayerrolo_wcap_Wings_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_theplayerrolo_wcap_Metal__METAL_),
	gsSPDisplayList(theplayerrolo_wcap_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(theplayerrolo_wcap_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_theplayerrolo_wcap_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx theplayerrolo_wcap_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP  | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

