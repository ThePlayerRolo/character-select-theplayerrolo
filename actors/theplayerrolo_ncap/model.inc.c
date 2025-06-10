Lights1 theplayerrolo_ncap_SFOTHEggTop_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 theplayerrolo_ncap_SFOTHEggMiddle_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 theplayerrolo_ncap_Metal__METAL__lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Texture theplayerrolo_ncap_SFOTHEggTop_rgba16[] = {
	#include "actors/theplayerrolo_ncap/SFOTHEggTop.rgba16.inc.c"
};

Texture theplayerrolo_ncap_SFOTHEggMiddle_rgba16[] = {
	#include "actors/theplayerrolo_ncap/SFOTHEggMiddle.rgba16.inc.c"
};

Texture theplayerrolo_ncap_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/theplayerrolo_ncap/Metal_Shade.rgba16.inc.c"
};

Texture theplayerrolo_ncap_Metal_Light_rgba16_rgba16[] = {
	#include "actors/theplayerrolo_ncap/Metal_Light.rgba16.inc.c"
};

Vtx theplayerrolo_ncap_Normal_Cap_DL_mesh_layer_1_vtx_0[26] = {
	{{{-6, 328, 17}, 0, {702, 681}, {0xFC, 0x7F, 0x09, 0xFF}}},
	{{{-108, 273, 17}, 0, {1248, 798}, {0x9E, 0x50, 0x08, 0xFF}}},
	{{{-69, 273, 75}, 0, {1190, 317}, {0xBB, 0x4F, 0x47, 0xFF}}},
	{{{-69, 273, 75}, 0, {984, 1143}, {0xBB, 0x4F, 0x47, 0xFF}}},
	{{{-6, 273, 114}, 0, {1248, 798}, {0xFC, 0x50, 0x63, 0xFF}}},
	{{{-6, 273, 114}, 0, {559, 1226}, {0xFC, 0x50, 0x63, 0xFF}}},
	{{{73, 273, 75}, 0, {984, 1143}, {0x42, 0x51, 0x49, 0xFF}}},
	{{{73, 273, 75}, 0, {189, 1063}, {0x42, 0x51, 0x49, 0xFF}}},
	{{{112, 273, 17}, 0, {559, 1226}, {0x60, 0x53, 0x08, 0xFF}}},
	{{{112, 273, 17}, 0, {0, 434}, {0x60, 0x53, 0x08, 0xFF}}},
	{{{73, 273, -77}, 0, {186, 1060}, {0x45, 0x54, 0xBE, 0xFF}}},
	{{{73, 273, -77}, 0, {360, 22}, {0x45, 0x54, 0xBE, 0xFF}}},
	{{{-6, 273, -115}, 0, {25, 454}, {0xFC, 0x54, 0xA1, 0xFF}}},
	{{{-6, 273, -115}, 0, {746, -6}, {0xFC, 0x54, 0xA1, 0xFF}}},
	{{{-69, 273, -77}, 0, {361, 18}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-69, 273, -77}, 0, {1190, 317}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-108, 273, 17}, 0, {746, -6}, {0x9E, 0x50, 0x08, 0xFF}}},
	{{{-108, -9, 17}, 0, {1190, 317}, {0x9B, 0xB3, 0x09, 0xFF}}},
	{{{-6, -64, 17}, 0, {702, 681}, {0xFC, 0x81, 0x09, 0xFF}}},
	{{{-69, -9, 75}, 0, {1248, 798}, {0xB9, 0xB4, 0x49, 0xFF}}},
	{{{-69, -9, -77}, 0, {746, -6}, {0xB6, 0xB1, 0xBE, 0xFF}}},
	{{{-6, -9, -115}, 0, {401, 19}, {0xFC, 0xAF, 0x9E, 0xFF}}},
	{{{73, -9, -77}, 0, {25, 454}, {0x47, 0xAF, 0xBC, 0xFF}}},
	{{{112, -9, 17}, 0, {189, 1063}, {0x63, 0xB1, 0x08, 0xFF}}},
	{{{73, -9, 75}, 0, {559, 1226}, {0x43, 0xB2, 0x4B, 0xFF}}},
	{{{-6, -9, 114}, 0, {984, 1143}, {0xFC, 0xB4, 0x66, 0xFF}}},
};

Gfx theplayerrolo_ncap_Normal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(theplayerrolo_ncap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 0, 26, 0),
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

Vtx theplayerrolo_ncap_Normal_Cap_DL_mesh_layer_1_vtx_1[48] = {
	{{{-163, 145, 17}, 0, {810, 26}, {0x81, 0x04, 0x09, 0xFF}}},
	{{{-108, -9, 17}, 0, {126, 263}, {0x9B, 0xB3, 0x09, 0xFF}}},
	{{{-69, -9, 75}, 0, {133, 802}, {0xB9, 0xB4, 0x49, 0xFF}}},
	{{{-108, 145, 114}, 0, {766, 1025}, {0xA7, 0x04, 0x5B, 0xFF}}},
	{{{-108, 273, 17}, 0, {1460, 236}, {0x9E, 0x50, 0x08, 0xFF}}},
	{{{-69, 273, 75}, 0, {1453, 893}, {0xBB, 0x4F, 0x47, 0xFF}}},
	{{{-108, 145, 114}, 0, {810, 26}, {0xA7, 0x04, 0x5B, 0xFF}}},
	{{{-69, -9, 75}, 0, {126, 263}, {0xB9, 0xB4, 0x49, 0xFF}}},
	{{{-6, -9, 114}, 0, {133, 802}, {0xFC, 0xB4, 0x66, 0xFF}}},
	{{{-6, 145, 169}, 0, {766, 1025}, {0xFC, 0x04, 0x7F, 0xFF}}},
	{{{-69, 273, 75}, 0, {1460, 236}, {0xBB, 0x4F, 0x47, 0xFF}}},
	{{{-6, 273, 114}, 0, {1453, 893}, {0xFC, 0x50, 0x63, 0xFF}}},
	{{{-6, 145, 169}, 0, {810, 26}, {0xFC, 0x04, 0x7F, 0xFF}}},
	{{{-6, -9, 114}, 0, {126, 263}, {0xFC, 0xB4, 0x66, 0xFF}}},
	{{{73, -9, 75}, 0, {133, 802}, {0x43, 0xB2, 0x4B, 0xFF}}},
	{{{112, 145, 114}, 0, {766, 1025}, {0x55, 0x04, 0x5E, 0xFF}}},
	{{{-6, 273, 114}, 0, {1460, 236}, {0xFC, 0x50, 0x63, 0xFF}}},
	{{{73, 273, 75}, 0, {1453, 893}, {0x42, 0x51, 0x49, 0xFF}}},
	{{{112, 145, 114}, 0, {810, 832}, {0x55, 0x04, 0x5E, 0xFF}}},
	{{{73, -9, 75}, 0, {126, 788}, {0x43, 0xB2, 0x4B, 0xFF}}},
	{{{112, -9, 17}, 0, {133, 250}, {0x63, 0xB1, 0x08, 0xFF}}},
	{{{167, 145, 17}, 0, {766, 26}, {0x7F, 0x04, 0x09, 0xFF}}},
	{{{73, 273, 75}, 0, {1460, 816}, {0x42, 0x51, 0x49, 0xFF}}},
	{{{112, 273, 17}, 0, {1453, 159}, {0x60, 0x53, 0x08, 0xFF}}},
	{{{167, 145, 17}, 0, {810, 26}, {0x7F, 0x04, 0x09, 0xFF}}},
	{{{112, -9, 17}, 0, {126, 263}, {0x63, 0xB1, 0x08, 0xFF}}},
	{{{73, -9, -77}, 0, {133, 802}, {0x47, 0xAF, 0xBC, 0xFF}}},
	{{{112, 145, -115}, 0, {766, 1025}, {0x5C, 0x04, 0xA8, 0xFF}}},
	{{{112, 273, 17}, 0, {1460, 236}, {0x60, 0x53, 0x08, 0xFF}}},
	{{{73, 273, -77}, 0, {1453, 893}, {0x45, 0x54, 0xBE, 0xFF}}},
	{{{112, 145, -115}, 0, {810, 26}, {0x5C, 0x04, 0xA8, 0xFF}}},
	{{{73, -9, -77}, 0, {126, 263}, {0x47, 0xAF, 0xBC, 0xFF}}},
	{{{-6, -9, -115}, 0, {133, 802}, {0xFC, 0xAF, 0x9E, 0xFF}}},
	{{{-6, 145, -170}, 0, {782, 883}, {0xFC, 0x04, 0x81, 0xFF}}},
	{{{73, 273, -77}, 0, {1460, 236}, {0x45, 0x54, 0xBE, 0xFF}}},
	{{{-6, 273, -115}, 0, {1453, 893}, {0xFC, 0x54, 0xA1, 0xFF}}},
	{{{-6, 145, -170}, 0, {810, 1025}, {0xFC, 0x04, 0x81, 0xFF}}},
	{{{-6, -9, -115}, 0, {126, 788}, {0xFC, 0xAF, 0x9E, 0xFF}}},
	{{{-69, -9, -77}, 0, {133, 250}, {0xB6, 0xB1, 0xBE, 0xFF}}},
	{{{-108, 145, -115}, 0, {766, 26}, {0xA1, 0x04, 0xAC, 0xFF}}},
	{{{-6, 273, -115}, 0, {1460, 816}, {0xFC, 0x54, 0xA1, 0xFF}}},
	{{{-69, 273, -77}, 0, {1453, 159}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-108, 145, -115}, 0, {820, 26}, {0xA1, 0x04, 0xAC, 0xFF}}},
	{{{-69, -9, -77}, 0, {133, 159}, {0xB6, 0xB1, 0xBE, 0xFF}}},
	{{{-108, -9, 17}, 0, {126, 816}, {0x9B, 0xB3, 0x09, 0xFF}}},
	{{{-163, 145, 17}, 0, {775, 1025}, {0x81, 0x04, 0x09, 0xFF}}},
	{{{-69, 273, -77}, 0, {1453, 250}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-108, 273, 17}, 0, {1460, 788}, {0x9E, 0x50, 0x08, 0xFF}}},
};

Gfx theplayerrolo_ncap_Normal_Cap_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(theplayerrolo_ncap_Normal_Cap_DL_mesh_layer_1_vtx_1 + 0, 48, 0),
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


Gfx mat_theplayerrolo_ncap_SFOTHEggTop[] = {
	gsSPSetLights1(theplayerrolo_ncap_SFOTHEggTop_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, theplayerrolo_ncap_SFOTHEggTop_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1599, 205),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 10, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 156, 156),
	gsSPEndDisplayList(),
};

Gfx mat_revert_theplayerrolo_ncap_SFOTHEggTop[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_theplayerrolo_ncap_SFOTHEggMiddle[] = {
	gsSPSetLights1(theplayerrolo_ncap_SFOTHEggMiddle_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, theplayerrolo_ncap_SFOTHEggMiddle_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1583, 171),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 12, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 188, 128),
	gsSPEndDisplayList(),
};

Gfx mat_revert_theplayerrolo_ncap_SFOTHEggMiddle[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_theplayerrolo_ncap_Metal__METAL_[] = {
	gsSPGeometryMode(G_CULL_BACK, G_TEXTURE_GEN),
	gsSPLight(&theplayerrolo_ncap_Metal__METAL__lights.l, 1),
    gsSPLight(&theplayerrolo_ncap_Metal__METAL__lights.a, 2),
    gsSPCopyLightEXT(2, 15),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, theplayerrolo_ncap_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, theplayerrolo_ncap_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_theplayerrolo_ncap_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx theplayerrolo_ncap_Normal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_theplayerrolo_ncap_SFOTHEggTop),
	gsSPDisplayList(theplayerrolo_ncap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_theplayerrolo_ncap_SFOTHEggTop),
	gsSPDisplayList(mat_theplayerrolo_ncap_SFOTHEggMiddle),
	gsSPDisplayList(theplayerrolo_ncap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_theplayerrolo_ncap_SFOTHEggMiddle),
	gsSPEndDisplayList(),
};

Gfx theplayerrolo_ncap_Normal_Cap_DL_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_theplayerrolo_ncap_Metal__METAL_),
	gsSPDisplayList(theplayerrolo_ncap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(theplayerrolo_ncap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_theplayerrolo_ncap_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx theplayerrolo_ncap_material_revert_render_settings[] = {
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

