Gfx BTHealthEffect1_HeartTexture_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 BTHealthEffect1_HeartTexture_rgba16[] = {
	#include "actors/BTHealthEffect1/HeartTexture.rgba16.inc.c"
};

Vtx BTHealthEffect1_000_displaylist_mesh_layer_4_vtx_0[4] = {
	{{{31, 31, 0}, 0, {1008, -16}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-30, 31, 0}, 0, {-16, -16}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-30, -30, 0}, 0, {-16, 1008}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{31, -30, 0}, 0, {1008, 1008}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx BTHealthEffect1_000_displaylist_mesh_layer_4_tri_0[] = {
	gsSPVertex(BTHealthEffect1_000_displaylist_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_BTHealthEffect1_Posion1UP[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetCombineLERP(ENVIRONMENT, 0, TEXEL0, 0, TEXEL0, 0, ENVIRONMENT, 0, ENVIRONMENT, 0, TEXEL0, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, BTHealthEffect1_HeartTexture_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_BTHealthEffect1_Posion1UP[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx BTHealthEffect1_000_displaylist_mesh_layer_4[] = {
	gsSPDisplayList(mat_BTHealthEffect1_Posion1UP),
	gsSPDisplayList(BTHealthEffect1_000_displaylist_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_BTHealthEffect1_Posion1UP),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

