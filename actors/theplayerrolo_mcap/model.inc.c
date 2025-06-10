Lights1 theplayerrolo_mcap_Metal__CAP__lights = gdSPDefLights1(
	0xFF, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 theplayerrolo_mcap_Metal__METAL__lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Texture theplayerrolo_mcap_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/theplayerrolo_mcap/Metal_Shade.rgba16.inc.c"
};

Texture theplayerrolo_mcap_Metal_Light_rgba16_rgba16[] = {
	#include "actors/theplayerrolo_mcap/Metal_Light.rgba16.inc.c"
};

Texture theplayerrolo_mcap_Metal_Shade_rgba16_rgba16_copy[] = {
	#include "actors/theplayerrolo_mcap/Metal_Shade.rgba16.inc.c"
};

Texture theplayerrolo_mcap_Metal_Light_rgba16_rgba16_copy[] = {
	#include "actors/theplayerrolo_mcap/Metal_Light.rgba16.inc.c"
};

Vtx theplayerrolo_mcap_Metal_Cap_DL_mesh_layer_1_vtx_0[76] = {
	{{{-6, 314, 10}, 0, {889, 29}, {0xFC, 0x7F, 0x09, 0xFF}}},
	{{{-108, 259, 10}, 0, {1762, 122}, {0x9E, 0x50, 0x08, 0xFF}}},
	{{{-69, 259, 68}, 0, {1670, -262}, {0xBB, 0x4F, 0x47, 0xFF}}},
	{{{-69, 259, 68}, 0, {1340, 399}, {0xBB, 0x4F, 0x47, 0xFF}}},
	{{{-6, 259, 107}, 0, {1762, 122}, {0xFC, 0x50, 0x63, 0xFF}}},
	{{{-6, 259, 107}, 0, {660, 465}, {0xFC, 0x50, 0x63, 0xFF}}},
	{{{73, 259, 68}, 0, {1340, 399}, {0x42, 0x51, 0x49, 0xFF}}},
	{{{73, 259, 68}, 0, {68, 334}, {0x42, 0x51, 0x49, 0xFF}}},
	{{{112, 259, 10}, 0, {660, 465}, {0x60, 0x53, 0x08, 0xFF}}},
	{{{112, 259, 10}, 0, {-234, -169}, {0x60, 0x53, 0x08, 0xFF}}},
	{{{73, 259, -84}, 0, {64, 332}, {0x45, 0x54, 0xBE, 0xFF}}},
	{{{73, 259, -84}, 0, {342, -498}, {0x45, 0x54, 0xBE, 0xFF}}},
	{{{-6, 259, -123}, 0, {-194, -153}, {0xFC, 0x54, 0xA1, 0xFF}}},
	{{{-6, 259, -123}, 0, {960, -521}, {0xFC, 0x54, 0xA1, 0xFF}}},
	{{{-69, 259, -84}, 0, {343, -501}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-69, 259, -84}, 0, {1670, -262}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-108, 259, 10}, 0, {960, -521}, {0x9E, 0x50, 0x08, 0xFF}}},
	{{{-163, 132, 10}, 0, {842, -488}, {0x81, 0x04, 0x09, 0xFF}}},
	{{{-108, -22, 10}, 0, {-70, -258}, {0x9B, 0xB3, 0x09, 0xFF}}},
	{{{-69, -22, 68}, 0, {-62, 265}, {0xB9, 0xB4, 0x49, 0xFF}}},
	{{{-108, 132, 107}, 0, {782, 481}, {0xA7, 0x04, 0x5B, 0xFF}}},
	{{{-108, 259, 10}, 0, {1707, -284}, {0x9E, 0x50, 0x08, 0xFF}}},
	{{{-69, 259, 68}, 0, {1699, 353}, {0xBB, 0x4F, 0x47, 0xFF}}},
	{{{-108, 132, 107}, 0, {842, -488}, {0xA7, 0x04, 0x5B, 0xFF}}},
	{{{-69, -22, 68}, 0, {-70, -258}, {0xB9, 0xB4, 0x49, 0xFF}}},
	{{{-6, -22, 107}, 0, {-62, 265}, {0xFC, 0xB4, 0x66, 0xFF}}},
	{{{-6, 132, 162}, 0, {782, 481}, {0xFC, 0x04, 0x7F, 0xFF}}},
	{{{-69, 259, 68}, 0, {1707, -284}, {0xBB, 0x4F, 0x47, 0xFF}}},
	{{{-6, 259, 107}, 0, {1699, 353}, {0xFC, 0x50, 0x63, 0xFF}}},
	{{{-6, 132, 162}, 0, {842, -488}, {0xFC, 0x04, 0x7F, 0xFF}}},
	{{{-6, -22, 107}, 0, {-70, -258}, {0xFC, 0xB4, 0x66, 0xFF}}},
	{{{73, -22, 68}, 0, {-62, 265}, {0x43, 0xB2, 0x4B, 0xFF}}},
	{{{112, 132, 107}, 0, {782, 481}, {0x55, 0x04, 0x5E, 0xFF}}},
	{{{-6, 259, 107}, 0, {1707, -284}, {0xFC, 0x50, 0x63, 0xFF}}},
	{{{73, 259, 68}, 0, {1699, 353}, {0x42, 0x51, 0x49, 0xFF}}},
	{{{112, 132, 107}, 0, {842, 294}, {0x55, 0x04, 0x5E, 0xFF}}},
	{{{73, -22, 68}, 0, {-70, 251}, {0x43, 0xB2, 0x4B, 0xFF}}},
	{{{112, -22, 10}, 0, {-62, -271}, {0x63, 0xB1, 0x08, 0xFF}}},
	{{{167, 132, 10}, 0, {782, -488}, {0x7F, 0x04, 0x09, 0xFF}}},
	{{{73, 259, 68}, 0, {1707, 278}, {0x42, 0x51, 0x49, 0xFF}}},
	{{{112, 259, 10}, 0, {1699, -359}, {0x60, 0x53, 0x08, 0xFF}}},
	{{{167, 132, 10}, 0, {842, -488}, {0x7F, 0x04, 0x09, 0xFF}}},
	{{{112, -22, 10}, 0, {-70, -258}, {0x63, 0xB1, 0x08, 0xFF}}},
	{{{73, -22, -84}, 0, {-62, 265}, {0x47, 0xAF, 0xBC, 0xFF}}},
	{{{112, 132, -123}, 0, {782, 481}, {0x5C, 0x04, 0xA8, 0xFF}}},
	{{{112, 259, 10}, 0, {1707, -284}, {0x60, 0x53, 0x08, 0xFF}}},
	{{{73, 259, -84}, 0, {1699, 353}, {0x45, 0x54, 0xBE, 0xFF}}},
	{{{112, 132, -123}, 0, {842, -488}, {0x5C, 0x04, 0xA8, 0xFF}}},
	{{{73, -22, -84}, 0, {-70, -258}, {0x47, 0xAF, 0xBC, 0xFF}}},
	{{{-6, -22, -123}, 0, {-62, 265}, {0xFC, 0xAF, 0x9E, 0xFF}}},
	{{{-6, 132, -178}, 0, {803, 343}, {0xFC, 0x04, 0x81, 0xFF}}},
	{{{73, 259, -84}, 0, {1707, -284}, {0x45, 0x54, 0xBE, 0xFF}}},
	{{{-6, 259, -123}, 0, {1699, 353}, {0xFC, 0x54, 0xA1, 0xFF}}},
	{{{-6, 132, -178}, 0, {842, 481}, {0xFC, 0x04, 0x81, 0xFF}}},
	{{{-6, -22, -123}, 0, {-70, 251}, {0xFC, 0xAF, 0x9E, 0xFF}}},
	{{{-69, -22, -84}, 0, {-62, -271}, {0xB6, 0xB1, 0xBE, 0xFF}}},
	{{{-108, 132, -123}, 0, {782, -488}, {0xA1, 0x04, 0xAC, 0xFF}}},
	{{{-6, 259, -123}, 0, {1707, 278}, {0xFC, 0x54, 0xA1, 0xFF}}},
	{{{-69, 259, -84}, 0, {1699, -359}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-108, 132, -123}, 0, {855, -488}, {0xA1, 0x04, 0xAC, 0xFF}}},
	{{{-69, -22, -84}, 0, {-62, -359}, {0xB6, 0xB1, 0xBE, 0xFF}}},
	{{{-108, -22, 10}, 0, {-70, 278}, {0x9B, 0xB3, 0x09, 0xFF}}},
	{{{-163, 132, 10}, 0, {795, 481}, {0x81, 0x04, 0x09, 0xFF}}},
	{{{-69, 259, -84}, 0, {1699, -271}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-69, 259, -84}, 0, {1699, -271}, {0xB8, 0x53, 0xC0, 0xFF}}},
	{{{-163, 132, 10}, 0, {795, 481}, {0x81, 0x04, 0x09, 0xFF}}},
	{{{-108, 259, 10}, 0, {1707, 251}, {0x9E, 0x50, 0x08, 0xFF}}},
	{{{-108, -22, 10}, 0, {1670, -262}, {0x9B, 0xB3, 0x09, 0xFF}}},
	{{{-6, -77, 10}, 0, {889, 29}, {0xFC, 0x81, 0x09, 0xFF}}},
	{{{-69, -22, 68}, 0, {1762, 122}, {0xB9, 0xB4, 0x49, 0xFF}}},
	{{{-69, -22, -84}, 0, {960, -521}, {0xB6, 0xB1, 0xBE, 0xFF}}},
	{{{-6, -22, -123}, 0, {408, -500}, {0xFC, 0xAF, 0x9E, 0xFF}}},
	{{{73, -22, -84}, 0, {-194, -153}, {0x47, 0xAF, 0xBC, 0xFF}}},
	{{{112, -22, 10}, 0, {68, 334}, {0x63, 0xB1, 0x08, 0xFF}}},
	{{{73, -22, 68}, 0, {660, 465}, {0x43, 0xB2, 0x4B, 0xFF}}},
	{{{-6, -22, 107}, 0, {1340, 399}, {0xFC, 0xB4, 0x66, 0xFF}}},
};

Gfx theplayerrolo_mcap_Metal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(theplayerrolo_mcap_Metal_Cap_DL_mesh_layer_1_vtx_0 + 0, 64, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
	gsSP2Triangles(0, 5, 6, 0, 0, 7, 8, 0),
	gsSP2Triangles(0, 9, 10, 0, 0, 11, 12, 0),
	gsSP2Triangles(0, 13, 14, 0, 0, 15, 16, 0),
	gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
	gsSP2Triangles(21, 17, 20, 0, 21, 20, 22, 0),
	gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
	gsSP2Triangles(27, 23, 26, 0, 27, 26, 28, 0),
	gsSP2Triangles(29, 30, 31, 0, 29, 31, 32, 0),
	gsSP2Triangles(33, 29, 32, 0, 33, 32, 34, 0),
	gsSP2Triangles(35, 36, 37, 0, 35, 37, 38, 0),
	gsSP2Triangles(39, 35, 38, 0, 39, 38, 40, 0),
	gsSP2Triangles(41, 42, 43, 0, 41, 43, 44, 0),
	gsSP2Triangles(45, 41, 44, 0, 45, 44, 46, 0),
	gsSP2Triangles(47, 48, 49, 0, 47, 49, 50, 0),
	gsSP2Triangles(51, 47, 50, 0, 51, 50, 52, 0),
	gsSP2Triangles(53, 54, 55, 0, 53, 55, 56, 0),
	gsSP2Triangles(57, 53, 56, 0, 57, 56, 58, 0),
	gsSP2Triangles(59, 60, 61, 0, 59, 61, 62, 0),
	gsSP1Triangle(63, 59, 62, 0),
	gsSPVertex(theplayerrolo_mcap_Metal_Cap_DL_mesh_layer_1_vtx_0 + 64, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 4, 3, 0, 7, 4, 6, 0),
	gsSP2Triangles(8, 4, 7, 0, 9, 4, 8, 0),
	gsSP2Triangles(10, 4, 9, 0, 11, 4, 10, 0),
	gsSP1Triangle(5, 4, 11, 0),
	gsSPEndDisplayList(),
};


Gfx mat_theplayerrolo_mcap_Metal__CAP_[] = {
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPLight(&theplayerrolo_mcap_Metal__CAP__lights.l, 1),
    gsSPLight(&theplayerrolo_mcap_Metal__CAP__lights.a, 2),
    gsSPCopyLightEXT(2, 13),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, theplayerrolo_mcap_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, theplayerrolo_mcap_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_theplayerrolo_mcap_Metal__CAP_[] = {
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_theplayerrolo_mcap_Metal__METAL_[] = {
	gsSPGeometryMode(G_CULL_BACK, G_TEXTURE_GEN),
	gsSPLight(&theplayerrolo_mcap_Metal__METAL__lights.l, 1),
    gsSPLight(&theplayerrolo_mcap_Metal__METAL__lights.a, 2),
    gsSPCopyLightEXT(2, 15),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, theplayerrolo_mcap_Metal_Shade_rgba16_rgba16_copy),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, theplayerrolo_mcap_Metal_Light_rgba16_rgba16_copy),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_theplayerrolo_mcap_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx theplayerrolo_mcap_Metal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_theplayerrolo_mcap_Metal__CAP_),
	gsSPDisplayList(theplayerrolo_mcap_Metal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_theplayerrolo_mcap_Metal__CAP_),
	gsSPEndDisplayList(),
};

Gfx theplayerrolo_mcap_Metal_Cap_DL_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_theplayerrolo_mcap_Metal__METAL_),
	gsSPDisplayList(theplayerrolo_mcap_Metal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_theplayerrolo_mcap_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx theplayerrolo_mcap_material_revert_render_settings[] = {
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

