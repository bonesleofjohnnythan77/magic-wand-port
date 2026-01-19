#include "custom.model.inc.h"
Vtx VB_bitfs_1_0x7002000[] = {
{{{ 1280, 348, -293 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ 1178, 348, -293 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ 1280, 266, -231 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ 1178, 266, -231 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ -1330, 3625, -703 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -1433, 3625, -703 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -1330, 3543, -642 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ -1433, 3543, -642 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ -3173, 3625, -707 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ -3276, 3625, -707 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ -3173, 3543, -646 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ -3276, 3543, -646 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
};

Gfx DL_bitfs_1_0x7002118[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0,TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bitfs_1_0x70020c0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE,0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_bitfs_1_0x70020c0[] = {
gsDPSetTextureImage(0, 2, 1, bitfs_1__texture_09006800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bitfs_1_0x7002000, 12, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 2, 0),
gsSP2Triangles(4, 5, 6, 0,5, 7, 6, 0),
gsSP2Triangles(8, 9, 10, 0,9, 11, 10, 0),
gsSPEndDisplayList(),
};

