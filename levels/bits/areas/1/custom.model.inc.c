#include "custom.model.inc.h"
Vtx VB_bits_1_0x7002800[] = {
{{{ 5570, 3242, -3991 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ 5468, 3242, -3991 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ 5570, 3160, -3930 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ 5468, 3160, -3930 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ 6517, 3791, -1836 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ 6414, 3791, -1836 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ 6517, 3709, -1774 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ 6414, 3709, -1774 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
{{{ 5966, 3777, -3991 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
{{{ 5864, 3777, -3991 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
{{{ 5966, 3695, -3930 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
{{{ 5864, 3695, -3930 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
};

Gfx DL_bits_1_0x7002918[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0,0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bits_1_0x70028c0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE,0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_bits_1_0x70028c0[] = {
gsDPSetTextureImage(0, 2, 1, bits_1__texture_09006800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bits_1_0x7002800, 12, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 2, 0),
gsSP2Triangles(4, 5, 6, 0,5, 7, 6, 0),
gsSP2Triangles(8, 9, 10, 0,9, 11, 10, 0),
gsSPEndDisplayList(),
};

