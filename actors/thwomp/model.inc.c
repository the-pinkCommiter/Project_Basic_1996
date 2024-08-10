/********************************************************************************
		RCP_HmsDosun
														[ Oct 23, 1995 ]
*********************************************************************************/

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"
#pragma GCC diagnostic ignored "-Woverflow"

#define SCALE 2
#define ShapeColor_dosun(R,G,B) {{R/SCALE ,G/SCALE ,B/SCALE ,0 ,R/SCALE ,G/SCALE ,B/SCALE ,0 },{ R, G, B, 0, R, G, B, 0, LIGHT_X, LIGHT_Y, LIGHT_Z, 0}}
#define LIGHT_X 40
#define LIGHT_Y 40
#define LIGHT_Z 40

static Lights1 light_dosun[] = {
	ShapeColor_dosun(255,255,255),
	ShapeColor_dosun(149,203,255),
};

/********************************************************************************/
/*	Texture data of Dosun.														*/
/********************************************************************************/
// 0x05009900
ALIGNED8 static const u8 dosun_face_txt[] = {
#include "actors/thwomp/dosun_face_txt.rgba16.inc.c"
};

// 0x0500A900
ALIGNED8 static const u8 dosun_skin_txt[] = {
#include "actors/thwomp/dosun_skin_txt.rgba16.inc.c"
};

// 0x0500A900
ALIGNED8 static const u8 dosun_skin3_txt[] = {
#include "actors/thwomp/dosun_skin3_txt.rgba16.inc.c"
};

/********************************************************************************/
/*	Vertex data.																*/
/********************************************************************************/
static Vtx vtx_dosun_0[] = {
	{     83,      0,    -82,     0,   990,   990,    30,  140,  215,  255}, 
	{    -82,      0,     83,     0,     0,     0,   226,  140,   41,  255}, 
	{    -82,      0,    -82,     0,     0,   990,   201,  146,  226,  255}, 
	{     83,      0,     83,     0,   990,     0,    55,  146,   30,  255}, 
};

static Vtx vtx_dosun_1[] = {
	{    -97,     52,   -141,     0,   980,  1944,   206,  203,  153,  255}, 
	{   -105,    252,   -156,     0,  1004,    -4,   208,   70,  163,  255}, 
	{    106,    252,   -156,     0,   -66,     0,    41,   57,  151,  255}, 
	{     98,     52,   -141,     0,   -10,  1948,    69,  208,  162,  255}, 
	{      0,    302,    102,     0,   474,   772,     0,  112,   58,  255}, 
	{    106,    252,    157,     0,   982,  1292,    48,   70,   93,  255}, 
	{     93,    330,      0,     0,   916,    16,    44,  118,    0,  255}, 
	{    -92,    330,      0,     0,    34,    16,   212,  118,    0,  255}, 
	{   -105,    252,    157,     0,     0,  1292,   215,   57,  105,  255}, 
	{    142,     52,    -72,     0,   972,  2012,   112,  201,  234,  255}, 
	{    157,    252,     79,     0,   -72,     0,   119,   26,   34,  255}, 
	{    142,     52,     73,     0,     0,  2012,   109,  202,   33,  255}, 
	{    157,    252,    -78,     0,  1014,     0,   115,   34,  215,  255}, 
	{   -141,     52,     73,     0,   990,  2012,   144,  201,   22,  255}, 
	{   -156,    252,     79,     0,  1032,     0,   141,   34,   41,  255}, 
	{   -156,    252,    -78,     0,   -72,     0,   137,   26,  222,  255}, 
	{   -141,     52,     73,     0,   990,  2012,   144,  201,   22,  255}, 
	{   -156,    252,    -78,     0,   -72,     0,   137,   26,  222,  255}, 
	{   -141,     52,    -72,     0,     0,  2012,   147,  202,  223,  255}, 
	{    -97,     52,   -141,     0,   -22,   992,   206,  203,  153,  255}, 
	{    -82,      0,    -82,     0,   496,  2052,   201,  146,  226,  255}, 
	{   -141,     52,    -72,     0,   990,   992,   147,  202,  223,  255}, 
	{      0,    302,   -101,     0,   480,   772,     0,  112,  198,  255}, 
	{     93,    330,      0,     0,    42,    24,    44,  118,    0,  255}, 
	{    106,    252,   -156,     0,   -24,  1288,    41,   57,  151,  255}, 
	{   -105,    252,   -156,     0,   984,  1288,   208,   70,  163,  255}, 
	{    -92,    330,      0,     0,   918,    24,   212,  118,    0,  255}, 
	{    142,     52,    -72,     0,   -22,   964,   112,  201,  234,  255}, 
	{     83,      0,    -82,     0,   458,  2012,    30,  140,  215,  255}, 
	{     98,     52,   -141,     0,   974,   968,    69,  208,  162,  255}, 
	{     98,     52,    142,     0,   -28,   960,    50,  203,  103,  255}, 
	{     83,      0,     83,     0,   482,  2012,    55,  146,   30,  255}, 
	{    142,     52,     73,     0,   976,   968,   109,  202,   33,  255}, 
	{   -141,     52,     73,     0,   -22,   988,   144,  201,   22,  255}, 
	{    -82,      0,     83,     0,   472,  2052,   226,  140,   41,  255}, 
	{    -97,     52,    142,     0,   990,   988,   187,  208,   94,  255}, 
	{     83,      0,     83,     0,     0,  2012,    55,  146,   30,  255}, 
	{    142,     52,    -72,     0,   930,   924,   112,  201,  234,  255}, 
	{    142,     52,     73,     0,    28,   924,   109,  202,   33,  255}, 
	{     83,      0,    -82,     0,   990,  2012,    30,  140,  215,  255}, 
	{    -82,      0,    -82,     0,     0,  2012,   201,  146,  226,  255}, 
	{   -141,     52,     73,     0,   930,   924,   144,  201,   22,  255}, 
	{   -141,     52,    -72,     0,    28,   924,   147,  202,  223,  255}, 
	{    -82,      0,     83,     0,   990,  2012,   226,  140,   41,  255}, 
	{     98,     52,    142,     0,  1086,   924,    50,  203,  103,  255}, 
	{    -82,      0,     83,     0,     0,  2012,   226,  140,   41,  255}, 
	{     83,      0,     83,     0,   990,  2012,    55,  146,   30,  255}, 
	{    -97,     52,   -141,     0,  1086,   924,   206,  203,  153,  255}, 
	{     83,      0,    -82,     0,     0,  2012,    30,  140,  215,  255}, 
	{    -82,      0,    -82,     0,   990,  2012,   201,  146,  226,  255}, 
	{     98,     52,   -141,     0,  -126,   924,    69,  208,  162,  255}, 
	{    -97,     52,   -141,     0,   -38,  2012,   206,  203,  153,  255}, 
	{   -141,     52,    -72,     0,   990,  2012,   147,  202,  223,  255}, 
	{   -156,    252,    -78,     0,   990,     0,   137,   26,  222,  255}, 
	{   -105,    252,   -156,     0,  -170,   -28,   208,   70,  163,  255}, 
	{     98,     52,   -141,     0,   530,  2012,    69,  208,  162,  255}, 
	{    106,    252,   -156,     0,   602,   -20,    41,   57,  151,  255}, 
	{    157,    252,    -78,     0,     0,   -20,   115,   34,  215,  255}, 
	{    142,     52,    -72,     0,     0,  2012,   112,  201,  234,  255}, 
	{   -156,    252,     79,     0,   938,  1084,   141,   34,   41,  255}, 
	{    -92,    330,      0,     0,   430,     8,   212,  118,    0,  255}, 
	{   -156,    252,    -78,     0,   -54,  1132,   137,   26,  222,  255}, 
	{     98,     52,    142,     0,  1086,   924,    50,  203,  103,  255}, 
	{    -97,     52,    142,     0,  -126,   924,   187,  208,   94,  255}, 
	{    -82,      0,     83,     0,     0,  2012,   226,  140,   41,  255}, 
	{     98,     52,    142,     0,     0,  2012,    50,  203,  103,  255}, 
	{    142,     52,     73,     0,   530,  2012,   109,  202,   33,  255}, 
	{    157,    252,     79,     0,   544,     0,   119,   26,   34,  255}, 
	{    106,    252,    157,     0,   -88,   -28,    48,   70,   93,  255}, 
	{    -97,     52,    142,     0,   974,  1972,   187,  208,   94,  255}, 
	{   -105,    252,    157,     0,  1012,     4,   215,   57,  105,  255}, 
	{   -156,    252,     79,     0,   374,     8,   141,   34,   41,  255}, 
	{   -141,     52,     73,     0,   410,  1976,   144,  201,   22,  255}, 
	{   -105,    252,    157,     0,  1422,   716,   215,   57,  105,  255}, 
	{   -105,    252,   -156,     0,  -546,   808,   208,   70,  163,  255}, 
	{    106,    252,   -156,     0,  1414,   680,    41,   57,  151,  255}, 
	{     93,    330,      0,     0,   472,    -8,    44,  118,    0,  255}, 
	{    157,    252,    -78,     0,   946,  1020,   115,   34,  215,  255}, 
	{    157,    252,     79,     0,    -6,  1044,   119,   26,   34,  255}, 
	{    106,    252,    157,     0,  -470,   724,    48,   70,   93,  255}, 
};

static Vtx vtx_dosun_2[] = {
	{     98,     52,    142,     0,   968,  1976,    50,  203,  103,  255}, 
	{   -105,    252,    157,     0,   -54,   -12,   215,   57,  105,  255}, 
	{    -97,     52,    142,     0,   -16,  1964,   187,  208,   94,  255}, 
	{    106,    252,    157,     0,  1010,     0,    48,   70,   93,  255}, 
};
/********************************************************************************/
/*	Graphic display list.														*/
/********************************************************************************/
static Gfx gfx_dosun_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dosun_skin3_txt),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPLight((&light_dosun[0].l[0]),1 ),
	gsSPLight((&light_dosun[0].a   ),2 ),
    gsSPVertex(vtx_dosun_0,  4, 0), 
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};


static Gfx gfx_dosun_2[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dosun_face_txt),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(vtx_dosun_2, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};

static Gfx gfx_dosun_1[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dosun_skin_txt),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPLight((&light_dosun[1].l[0]),1 ),
	gsSPLight((&light_dosun[1].a   ),2 ),
	gsSPVertex(&vtx_dosun_1[0], 16, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),
	gsSP1Triangle( 4, 5, 6, 0),
	gsSP1Triangle( 6, 7, 4, 0),
	gsSP1Triangle( 7, 8, 4, 0),
	gsSP1Triangle( 8, 5, 4, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle( 9,12,10, 0),
	gsSP1Triangle(13,14,15, 0),
	gsSPVertex(&vtx_dosun_1[16], 14, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 8, 9, 6, 0),
	gsSP1Triangle( 6, 9,10, 0),
	gsSP1Triangle( 6,10, 7, 0),
	gsSP1Triangle(11,12,13, 0),
	gsSPVertex(&vtx_dosun_1[30], 14, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 6, 9, 7, 0),
	gsSP1Triangle(10,11,12, 0),
	gsSP1Triangle(10,13,11, 0),
	gsSPVertex(&vtx_dosun_1[44], 15, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 3, 6, 4, 0),
	gsSP1Triangle( 7, 8, 9, 0),
	gsSP1Triangle(10, 7, 9, 0),
	gsSP1Triangle(11,12,13, 0),
	gsSP1Triangle(11,13,14, 0),
	gsSPVertex(&vtx_dosun_1[59], 16, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9, 6, 8, 0),
	gsSP1Triangle(10,11,12, 0),
	gsSP1Triangle(10,12,13, 0),
	gsSP1Triangle( 0,14, 1, 0),
	gsSP1Triangle( 2, 1,15, 0),
	gsSPVertex(&vtx_dosun_1[75],  5, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 2, 1, 3, 0),
	gsSP1Triangle( 3, 1, 4, 0),
	gsSPEndDisplayList() 
};


Gfx gfx_dosun[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(gfx_dosun_0),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(gfx_dosun_2),
    gsSPDisplayList(gfx_dosun_1),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};
