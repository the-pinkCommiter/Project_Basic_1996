
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"

/**************************************************************/
/*	shape data wallman_base_data (skeleton & animation) */
/**************************************************************/

#define LIGHT_X 40
#define LIGHT_Y 40
#define LIGHT_Z 40
#define	SCALE	4
#define ShapeColor_wallman(R,G,B) {{R/SCALE ,G/SCALE ,B/SCALE ,0 ,R/SCALE ,G/SCALE ,B/SCALE ,0 },{ R, G, B, 0, R, G, B, 0, LIGHT_X, LIGHT_Y, LIGHT_Z, 0}}


/*-------------------------------------------------------------*/
/*	light data                                                 */
/*-------------------------------------------------------------*/
static Lights1 light_wallman[] = {
	ShapeColor_wallman(255,255,255),
};

/*-------------------------------------------------------------*/
/*	texture data                                               */
/*-------------------------------------------------------------*/
ALIGNED8 static const u8 wallman_back_txt[] = {
#include "actors/whomp/wallman_back_txt.rgba16.inc.c"
};

ALIGNED8 static const u8 wallman_face_txt[] = {
#include "actors/whomp/wallman_face_txt.rgba16.inc.c"
};

ALIGNED8 static const u8 wallman_hand_txt[] = {
#include "actors/whomp/wallman_hand_txt.rgba16.inc.c"
};

ALIGNED8 static const u8 wallman_side_txt[] = {
#include "actors/whomp/wallman_side_txt.rgba16.inc.c"
};
/***************************************************************************************************
		Convert from NINGEN		(wall_body) 																
****************************************************************************************************/
static Vtx vtx_wall_body_0[] = {
	{    -51,    596,    197,     0,     0,  2012,     0,    0,  127,  255}, 
	{    -59,   -584,    197,     0,   990,  2012,     0,    0,  127,  255}, 
	{   1515,   -595,    197,     0,   990,     0,     0,    0,  127,  255}, 
	{   1523,    586,    197,     0,     0,     0,     0,    0,  127,  255}, 
};

static Vtx vtx_wall_body_1[] = {
	{    -59,   -584,   -196,     0,     0,  2012,     0,    0, -127,  255}, 
	{   1523,    586,   -196,     0,   990,     0,     0,    0, -127,  255}, 
	{   1515,   -595,   -196,     0,     0,     0,     0,    0, -127,  255}, 
	{    -51,    596,   -196,     0,   990,  2012,     0,    0, -127,  255}, 
};

static Vtx vtx_wall_body_2[] = {
	{    -51,    596,   -196,     0,   480,  2012,     0,  126,    0,  255}, 
	{    -51,    596,    197,     0,   -24,  2012,     0,  126,    0,  255}, 
	{   1523,    586,    197,     0,   -24,     0,     0,  126,    0,  255}, 
	{   1523,    586,   -196,     0,   990,   992,   126,    0,    0,  255}, 
	{   1515,   -595,    197,     0, -1020,   -16,   126,    0,    0,  255}, 
	{   1515,   -595,   -196,     0, -1020,   992,   126,    0,    0,  255}, 
	{   1523,    586,    197,     0,   990,   -16,   126,    0,    0,  255}, 
	{    -59,   -584,   -196,     0,   958,     0,  -126,    0,    0,  255}, 
	{    -51,    596,    197,     0, -1052,   972,  -126,    0,    0,  255}, 
	{    -51,    596,   -196,     0, -1052,     0,  -126,    0,    0,  255}, 
	{    -59,   -584,    197,     0,   958,   972,  -126,    0,    0,  255}, 
	{    -59,   -584,    197,     0,   -24,  2012,     0, -126,    0,  255}, 
	{    -59,   -584,   -196,     0,   478,  2012,     0, -126,    0,  255}, 
	{   1515,   -595,   -196,     0,   478,     0,     0, -126,    0,  255}, 
	{   1515,   -595,    197,     0,   -24,     0,     0, -126,    0,  255}, 
	{   1523,    586,   -196,     0,   480,     0,     0,  126,    0,  255}, 
};

static Gfx gfx_wall_body_2[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wallman_side_txt),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPLight((&light_wallman[0].l[0]),1 ),
	gsSPLight((&light_wallman[0].a   ),2 ),
	gsSPVertex(&vtx_wall_body_2[0], 16, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 3, 6, 4, 0),
	gsSP1Triangle( 7, 8, 9, 0),
	gsSP1Triangle( 7,10, 8, 0),
	gsSP1Triangle(11,12,13, 0),
	gsSP1Triangle(11,13,14, 0),
	gsSP1Triangle( 0, 2,15, 0),
	gsSPEndDisplayList() 
};

static Gfx gfx_wall_body_1[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wallman_back_txt),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPVertex(&vtx_wall_body_1[0],  4, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 3, 1, 0),
	gsSPEndDisplayList() 
};

static Gfx gfx_wall_body_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wallman_face_txt),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPVertex(&vtx_wall_body_0[0],  4, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),
	gsSPEndDisplayList() 
};

// 0x0601F5E0 - 0x0601F678
const Gfx whomp_seg6_dl_0601F5E0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
	gsSPDisplayList(gfx_wall_body_2),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
	gsSPDisplayList(gfx_wall_body_0),
	gsSPDisplayList(gfx_wall_body_1),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

/***************************************************************************************************
		Convert from NINGEN		(wall_Larm) 																
****************************************************************************************************/
static Vtx vtx_wall_Larm_0[] = {
	{     -9,      0,    -36,     0,   246,  1984,   -16,   73, -102,  255}, 
	{    283,     78,    -26,     0,   952,     0,   -16,   73, -102,  255}, 
	{    283,      0,    -82,     0,     0,     0,   -16,   73, -102,  255}, 
	{     -9,     34,    -11,     0,   246,  1984,   -16,  119,   39,  255}, 
	{    283,     48,     65,     0,   952,     0,   -16,  119,   39,  255}, 
	{    283,     78,    -26,     0,     0,     0,   -16,  119,   39,  255}, 
	{     -9,     34,    -11,     0,   246,  1984,   -16,  119,   40,  255}, 
	{     -9,     21,     27,     0,   672,  1984,   -16,  119,   40,  255}, 
	{    283,     48,     65,     0,   952,     0,   -16,  119,   40,  255}, 
	{     -9,     21,     27,     0,   246,  1984,   -16,    0,  125,  255}, 
	{    283,    -47,     65,     0,   952,     0,   -16,    0,  125,  255}, 
	{    283,     48,     65,     0,     0,     0,   -16,    0,  125,  255}, 
	{     -9,    -20,     27,     0,   672,  1984,   -16,    0,  125,  255}, 
	{     -9,    -33,    -11,     0,   246,  1984,   -15,  -76, -100,  255}, 
	{     -9,      0,    -36,     0,   672,  1984,   -15,  -76, -100,  255}, 
	{    283,      0,    -82,     0,   952,     0,   -15,  -76, -100,  255}, 
	{     -9,    -33,    -11,     0,   246,  1984,   -16,  -74, -101,  255}, 
	{    283,      0,    -82,     0,   952,     0,   -16,  -74, -101,  255}, 
	{    283,    -77,    -26,     0,     0,     0,   -16,  -74, -101,  255}, 
	{     -9,    -20,     27,     0,   246,  1984,   -15, -119,   40,  255}, 
	{     -9,    -33,    -11,     0,   672,  1984,   -15, -119,   40,  255}, 
	{    283,    -77,    -26,     0,   952,     0,   -15, -119,   40,  255}, 
	{     -9,      0,    -36,     0,   246,  1984,   -16,   74, -101,  255}, 
	{     -9,     34,    -11,     0,   672,  1984,   -16,   74, -101,  255}, 
	{    283,     78,    -26,     0,   952,     0,   -16,   74, -101,  255}, 
	{     -9,    -20,     27,     0,   246,  1984,   -16, -119,   39,  255}, 
	{    283,    -77,    -26,     0,   952,     0,   -16, -119,   39,  255}, 
	{    283,    -47,     65,     0,     0,     0,   -16, -119,   39,  255}, 
};

static Gfx gfx_wall_Larm_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wallman_side_txt),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPLight((&light_wallman[0].l[0]),1 ),
	gsSPLight((&light_wallman[0].a   ),2 ),
	gsSPVertex(&vtx_wall_Larm_0[0], 16, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle( 9,12,10, 0),
	gsSP1Triangle(13,14,15, 0),
	gsSPVertex(&vtx_wall_Larm_0[16], 12, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSPEndDisplayList() 
};

// 0x0601F880 - 0x0601F8E0
const Gfx whomp_seg6_dl_0601F880[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
	gsSPDisplayList(gfx_wall_Larm_0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

/***************************************************************************************************
		Convert from NINGEN		(wall_Rarm) 																
****************************************************************************************************/
static Vtx vtx_wall_Rarm_0[] = {
	{    283,      0,     83,     0,   952,     0,   -16,   72,  102,  255}, 
	{     -9,     34,     13,     0,   246,  1984,   -16,   72,  102,  255}, 
	{     -9,      0,     37,     0,   672,  1984,   -16,   72,  102,  255}, 
	{    283,     78,     27,     0,   952,     0,   -16,  119,  -39,  255}, 
	{     -9,     21,    -26,     0,   246,  1984,   -16,  119,  -39,  255}, 
	{     -9,     34,     13,     0,   672,  1984,   -16,  119,  -39,  255}, 
	{    283,     48,    -64,     0,     0,     0,   -16,  119,  -39,  255}, 
	{    283,     48,    -64,     0,   952,     0,   -16,    0, -125,  255}, 
	{     -9,    -20,    -26,     0,   246,  1984,   -16,    0, -125,  255}, 
	{     -9,     21,    -26,     0,   672,  1984,   -16,    0, -125,  255}, 
	{    283,    -47,    -64,     0,     0,     0,   -16,    0, -125,  255}, 
	{    283,    -77,     27,     0,   952,     0,   -16,  -74,  101,  255}, 
	{    283,      0,     83,     0,     0,     0,   -16,  -74,  101,  255}, 
	{     -9,      0,     37,     0,   246,  1984,   -16,  -74,  101,  255}, 
	{     -9,    -33,     13,     0,   672,  1984,   -16,  -74,  101,  255}, 
	{    283,    -47,    -64,     0,   952,     0,   -16, -119,  -39,  255}, 
	{    283,    -77,     27,     0,     0,     0,   -16, -119,  -39,  255}, 
	{     -9,    -33,     13,     0,   246,  1984,   -16, -119,  -39,  255}, 
	{    283,      0,     83,     0,   952,     0,   -15,   73,  102,  255}, 
	{    283,     78,     27,     0,     0,     0,   -15,   73,  102,  255}, 
	{     -9,     34,     13,     0,   246,  1984,   -15,   73,  102,  255}, 
	{     -9,    -20,    -26,     0,   672,  1984,   -16, -119,  -39,  255}, 
};

static Gfx gfx_wall_Rarm_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wallman_side_txt),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPLight((&light_wallman[0].l[0]),1 ),
	gsSPLight((&light_wallman[0].a   ),2 ),
	gsSPVertex(&vtx_wall_Rarm_0[0], 15, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 3, 6, 4, 0),
	gsSP1Triangle( 7, 8, 9, 0),
	gsSP1Triangle( 7,10, 8, 0),
	gsSP1Triangle(11,12,13, 0),
	gsSP1Triangle(11,13,14, 0),
	gsSPVertex(&vtx_wall_Rarm_0[15],  7, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 0, 2, 6, 0),
	gsSPEndDisplayList() 
};

// 0x0601FAE8 - 0x0601FB48
const Gfx whomp_seg6_dl_0601FAE8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
	gsSPDisplayList(gfx_wall_Rarm_0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

/***************************************************************************************************
		Convert from NINGEN		(wall_Lfoot) 																
****************************************************************************************************/
static Vtx vtx_wall_Lfoot_0[] = {
	{    150,   -254,     -2,     0,   470,  2028,   126,   -6,   -1,  255}, 
	{    170,    179,   -172,     0,  -110,   260,   126,   -6,   -1,  255}, 
	{    175,    251,     -1,     0,   472,   -36,   126,   -6,   -1,  255}, 
	{    150,   -254,     -2,     0,   470,  2028,   126,   -5,    0,  255}, 
	{    155,   -140,   -195,     0,  -188,  1568,   126,   -5,    0,  255}, 
	{    170,    179,   -172,     0,  -110,   260,   126,   -5,    0,  255}, 
	{     22,    155,     -1,     0,   472,   356,   -63,  101,  -41,  255}, 
	{    175,    251,     -1,     0,   472,   -36,   -63,  101,  -41,  255}, 
	{    170,    179,   -172,     0,  -110,   260,   -63,  101,  -41,  255}, 
	{    170,    179,   -172,     0,  -110,   260,   -96,   19,  -80,  255}, 
	{    -28,    -87,     -1,     0,   472,  1348,   -96,   19,  -80,  255}, 
	{     22,    155,     -1,     0,   472,   356,   -96,   19,  -80,  255}, 
	{    170,    179,   -172,     0,  -110,   260,   -90,   10,  -88,  255}, 
	{    155,   -140,   -195,     0,  -188,  1568,   -90,   10,  -88,  255}, 
	{    -28,    -87,     -1,     0,   472,  1348,   -90,   10,  -88,  255}, 
	{    -28,    -87,     -1,     0,   472,  1348,   -79,  -84,  -51,  255}, 
	{    155,   -140,   -195,     0,  -188,  1568,   -79,  -84,  -51,  255}, 
	{    150,   -254,     -2,     0,   470,  2028,   -79,  -84,  -51,  255}, 
	{     22,    155,     -1,     0,   472,   356,   -94,   19,   82,  255}, 
	{    -28,    -87,     -1,     0,   472,  1348,   -94,   19,   82,  255}, 
	{    173,    178,    168,     0,  1050,   264,   -94,   19,   82,  255}, 
	{    150,   -254,     -2,     0,   470,  2028,   -79,  -85,   50,  255}, 
	{    157,   -148,    186,     0,  1112,  1600,   -79,  -85,   50,  255}, 
	{    -28,    -87,     -1,     0,   472,  1348,   -79,  -85,   50,  255}, 
	{    -28,    -87,     -1,     0,   472,  1348,   -88,    9,   90,  255}, 
	{    157,   -148,    186,     0,  1112,  1600,   -88,    9,   90,  255}, 
	{    173,    178,    168,     0,  1050,   264,   -88,    9,   90,  255}, 
	{    173,    178,    168,     0,  1050,   264,   -63,  101,   42,  255}, 
	{    175,    251,     -1,     0,   472,   -36,   -63,  101,   42,  255}, 
	{     22,    155,     -1,     0,   472,   356,   -63,  101,   42,  255}, 
	{    150,   -254,     -2,     0,   470,  2028,   126,   -6,   -1,  255}, 
	{    175,    251,     -1,     0,   472,   -36,   126,   -6,   -1,  255}, 
	{    173,    178,    168,     0,  1050,   264,   126,   -6,   -1,  255}, 
	{    157,   -148,    186,     0,  1112,  1600,   126,   -6,   -1,  255}, 
};

static Gfx gfx_wall_Lfoot_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wallman_side_txt),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPLight((&light_wallman[0].l[0]),1 ),
	gsSPLight((&light_wallman[0].a   ),2 ),
	gsSPVertex(&vtx_wall_Lfoot_0[0], 15, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle(12,13,14, 0),
	gsSPVertex(&vtx_wall_Lfoot_0[15], 15, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle(12,13,14, 0),
	gsSPVertex(&vtx_wall_Lfoot_0[30],  4, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),
	gsSPEndDisplayList() 
};

// 0x0601FEA8 - 0x0601FF08
const Gfx whomp_seg6_dl_0601FEA8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
	gsSPDisplayList(gfx_wall_Lfoot_0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

/***************************************************************************************************
		Convert from NINGEN		(wall_Rfoot) 																
****************************************************************************************************/
static Vtx vtx_wall_Rfoot_0[] = {
	{    170,    179,    173,     0,  1364,   260,   -63,  101,   41,  255}, 
	{    175,    251,      2,     0,   490,   -36,   -63,  101,   41,  255}, 
	{     22,    155,      2,     0,   490,   356,   -63,  101,   41,  255}, 
	{     22,    155,      2,     0,   490,   356,   -96,   19,   80,  255}, 
	{    -28,    -87,      2,     0,   490,  1348,   -96,   19,   80,  255}, 
	{    170,    179,    173,     0,  1364,   260,   -96,   19,   80,  255}, 
	{     22,    155,      2,     0,   490,   356,   -63,  101,  -42,  255}, 
	{    175,    251,      2,     0,   490,   -36,   -63,  101,  -42,  255}, 
	{    173,    178,   -167,     0,  -376,   264,   -63,  101,  -42,  255}, 
	{    173,    178,   -167,     0,  -376,   264,   -94,   19,  -82,  255}, 
	{    -28,    -87,      2,     0,   490,  1348,   -94,   19,  -82,  255}, 
	{     22,    155,      2,     0,   490,   356,   -94,   19,  -82,  255}, 
	{    150,   -254,      3,     0,   492,  2028,   -79,  -84,   51,  255}, 
	{    155,   -140,    196,     0,  1482,  1568,   -79,  -84,   51,  255}, 
	{    -28,    -87,      2,     0,   490,  1348,   -79,  -84,   51,  255}, 
	{    -28,    -87,      2,     0,   490,  1348,   -90,   10,   88,  255}, 
	{    155,   -140,    196,     0,  1482,  1568,   -90,   10,   88,  255}, 
	{    170,    179,    173,     0,  1364,   260,   -90,   10,   88,  255}, 
	{    -28,    -87,      2,     0,   490,  1348,   -79,  -85,  -50,  255}, 
	{    157,   -148,   -185,     0,  -470,  1600,   -79,  -85,  -50,  255}, 
	{    150,   -254,      3,     0,   492,  2028,   -79,  -85,  -50,  255}, 
	{    173,    178,   -167,     0,  -376,   264,   -88,    9,  -90,  255}, 
	{    157,   -148,   -185,     0,  -470,  1600,   -88,    9,  -90,  255}, 
	{    -28,    -87,      2,     0,   490,  1348,   -88,    9,  -90,  255}, 
	{    157,   -148,   -185,     0,    -2,  1580,   126,   -5,    0,  255}, 
	{    170,    179,    173,     0,   916,   240,   126,   -5,    0,  255}, 
	{    155,   -140,    196,     0,   974,  1544,   126,   -5,    0,  255}, 
	{    157,   -148,   -185,     0,    -2,  1580,   126,   -6,    1,  255}, 
	{    175,    251,      2,     0,   478,   -60,   126,   -6,    1,  255}, 
	{    170,    179,    173,     0,   916,   240,   126,   -6,    1,  255}, 
	{    173,    178,   -167,     0,    44,   240,   126,   -6,    1,  255}, 
	{    157,   -148,   -185,     0,    -2,  1580,   126,   -6,    0,  255}, 
	{    155,   -140,    196,     0,   974,  1544,   126,   -6,    0,  255}, 
	{    150,   -254,      3,     0,   480,  2012,   126,   -6,    0,  255}, 
};

static Gfx gfx_wall_Rfoot_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wallman_side_txt),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPLight((&light_wallman[0].l[0]),1 ),
	gsSPLight((&light_wallman[0].a   ),2 ),
	gsSPVertex(&vtx_wall_Rfoot_0[0], 15, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle(12,13,14, 0),
	gsSPVertex(&vtx_wall_Rfoot_0[15], 16, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle(12,13,14, 0),
	gsSP1Triangle(12,15,13, 0),
	gsSPVertex(&vtx_wall_Rfoot_0[31],  3, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSPEndDisplayList() 
};

// 0x06020038 - 0x06020098
const Gfx whomp_seg6_dl_06020038[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64- 1) << G_TEXTURE_IMAGE_FRAC),
	gsSPDisplayList(gfx_wall_Rfoot_0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

/***************************************************************************************************
		Convert from NINGEN		(wall_Lhand) 																
****************************************************************************************************/
static Vtx vtx_wall_Lhand_0[] = {
	{   -148/4,   -148/4,      0,     0,     0,   990,     0,    0,  127,  255}, 
	{    149/4,   -148/4,      0,     0,   990,   990,     0,    0,  127,  255}, 
	{    149/4,    149/4,      0,     0,   990,     0,     0,    0,  127,  255}, 
	{   -148/4,    149/4,      0,     0,     0,     0,     0,    0,  127,  255}, 
};

static Gfx gfx_wall_Lhand_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wallman_hand_txt),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPLight((&light_wallman[0].l[0]),1 ),
	gsSPLight((&light_wallman[0].a   ),2 ),
	gsSPVertex(&vtx_wall_Lhand_0[0],  4, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),
	gsSPEndDisplayList() 
};

// 0x0601FBC0 - 0x0601FC30
const Gfx whomp_seg6_dl_0601FBC0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
	gsSPDisplayList(gfx_wall_Lhand_0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

/***************************************************************************************************
		Convert from NINGEN		(wall_Rhand) 																
****************************************************************************************************/
static Vtx vtx_wall_Rhand_0[] = {
	{   -148/4,   -148/4,      0,     0,     0,   990,     0,    0,  127,  255}, 
	{    149/4,   -148/4,      0,     0,   990,   990,     0,    0,  127,  255}, 
	{    149/4,    149/4,      0,     0,   990,     0,     0,    0,  127,  255}, 
	{   -148/4,    149/4,      0,     0,     0,     0,     0,    0,  127,  255}, 
};

static Gfx gfx_wall_Rhand_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wallman_hand_txt),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPLight((&light_wallman[0].l[0]),1 ),
	gsSPLight((&light_wallman[0].a   ),2 ),
	gsSPVertex(&vtx_wall_Rhand_0[0],  4, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),
	gsSPEndDisplayList() 
};

// 0x0601FCA8 - 0x0601FD18
const Gfx whomp_seg6_dl_0601FCA8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
	gsSPDisplayList(gfx_wall_Rhand_0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};
