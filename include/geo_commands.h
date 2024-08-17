#ifndef GEO_COMMANDS_H
#define GEO_COMMANDS_H

#include "command_macros_base.h"

#include "game/shadow.h"
#include "game/object_helpers.h"
#include "game/behavior_actions.h"
#include "game/segment2.h"
#include "game/mario_misc.h"
#include "game/mario_actions_cutscene.h"
#include "gigleak_misc.h"
//#include "RCPtoGEO.h" Define it first.
// Maplang Mixed
// sky background params
#define BACKGROUND_OCEAN_SKY        0
#define BACKGROUND_FLAMING_SKY      1
#define BACKGROUND_UNDERWATER_CITY  2
#define BACKGROUND_BELOW_CLOUDS     3
#define BACKGROUND_SNOW_MOUNTAINS   4
#define BACKGROUND_DESERT           5
#define BACKGROUND_HAUNTED          6
#define BACKGROUND_GREEN_SKY        7
#define BACKGROUND_ABOVE_CLOUDS     8
#define BACKGROUND_PURPLE_SKY       9

#ifndef RGBA16
#define	RGBA16(r,g,b,a)		(((r)<<11) | ((g)<<6) | ((b)<<1) | (a))
#endif

// hms id
#define	_hmsExec_id			 0
#define	_hmsExit_id			 1
#define	_hmsJump_id			 2
#define	_hmsReturn_id		 3

#define	_hmsBegin_id		 4
#define	_hmsEnd_id			 5
#define	_hmsStorage_id		 6
#define	_hmsPutFlag_id		 7

#define	_hmsScene_id		 8
#define	_hmsOrtho_id		 9
#define	_hmsPersp_id		10
#define	_hmsGroup_id		11
#define	_hmsLayer_id		12
#define	_hmsLod_id			13
#define	_hmsSelect_id		14
#define	_hmsCamera_id		15
#define	_hmsCoord_id		16
#define	_hmsTrans_id		17
#define	_hmsRotate_id		18
#define	_hmsJoint_id		19
#define	_hmsBboard_id		20

#define	_hmsGfx_id			21
#define	_hmsShadow_id		22
#define	_hmsObject_id		23
#define	_hmsCProg_id		24
#define	_hmsClear_id		25
#define	_hmsPrint_id		26
#define	_hmsBranch_id		27
#define	_hmsSucker_id		28

#define	_hmsScale_id		29
#define	_hmsMatrix_id		30
#define	_hmsArea_id			31
#define	_hmsHeader_id		32


//	Map hierarcky command macro.
#define	hmsExec(addr)							_msCmd(_hmsExec_id	,0,0),_msAdr(addr),
#define	hmsExit()								_msCmd(_hmsExit_id	,0,0),
#define	hmsJump(addr)							_msCmd(_hmsJump_id	,0,0),_msAdr(addr),
#define	hmsCall(addr)							_msCmd(_hmsJump_id	,1,0),_msAdr(addr),
#define	hmsReturn()								_msCmd(_hmsReturn_id	,0,0),

#define	hmsBegin()								_msCmd(_hmsBegin_id	,0,0),
#define	hmsEnd()								_msCmd(_hmsEnd_id	,0,0),
#define	hmsStorage(n)							_msCmd(_hmsStorage_id,0,n),



/* Scene node	*/

#define	hmsScene(centh, centv, ofsh, ofsv, nstrages)  \
			_msCmd(_hmsScene_id, 0, nstrages), \
			_msPac(centh, centv), \
			_msPac(ofsh , ofsv ),


#define	hmsOrtho(scale)  \
			_msCmd(_hmsOrtho_id, 0, scale), \

#define	hmsPersp(angle, near, far)  \
			_msCmd(_hmsPersp_id, 0, angle), \
			_msPac(near, far),

#define	hmsPerspective(angle, near, far, proc)  \
			_msCmd(_hmsPersp_id, 1, angle), \
			_msPac(near, far), \
 			_msAdr(proc),


/* Group node	*/

#define	hmsGroup()  \
			_msCmd(_hmsGroup_id, 0, 0),



/* Group node	*/

#define	hmsArea(x1, y1, z1, x2, y2, z2)  \
			_msCmd(_hmsArea_id, 0, 0), \
			_msPac(x1, y1), \
			_msPac(z1, x2), \
			_msPac(y2, z2),


/* Layer node	*/

#define	hmsLayer(zbuf)  \
			_msCmd(_hmsLayer_id, zbuf, 0),


/* LOD node		*/

#define	hmsLOD(near, far)  \
			_msCmd(_hmsLod_id, 0, 0), \
			_msPac(near, far),


/* Select node		*/

#define	hmsSelect(code, proc)  \
			_msCmd(_hmsSelect_id, 0, code), \
			_msAdr(proc),

/* Camera node	*/

#define	hmsCamera(mode, posx, posy, posz, lookx, looky, lookz, proc)  \
			_msCmd(_hmsCamera_id, 0, mode), \
			_msPac(posx , posy ), \
			_msPac(posz , lookx), \
			_msPac(looky, lookz), \
			_msAdr(proc),

/* Coord node	*/

#define	hmsCoord(px,py,pz,ax,ay,az)  \
			_msCmd(_hmsCoord_id, 0x00, 0), \
			_msPac(px,py), \
			_msPac(pz,ax), \
			_msPac(ay,az),

#define	hmsCoordT(px,py,pz)  \
			_msCmd(_hmsCoord_id, 0x10,px), \
			_msPac(py,pz),

#define	hmsCoordR(ax,ay,az)  \
			_msCmd(_hmsCoord_id, 0x20,ax), \
			_msPac(ay,az),

#define	hmsCoordY(ay)  \
			_msCmd(_hmsCoord_id, 0x30,ay),

#define	hmsGfxCoord(mode,gfx,px,py,pz,ax,ay,az)  \
			_msCmd(_hmsCoord_id, 0x80+mode, 0), \
			_msPac(px,py), \
			_msPac(pz,ax), \
			_msPac(ay,az), \
			_msAdr(gfx),

#define	hmsGfxCoordT(mode,gfx,px,py,pz)  \
			_msCmd(_hmsCoord_id, 0x90+mode,px), \
			_msPac(py,pz), \
			_msAdr(gfx),

#define	hmsGfxCoordR(mode,gfx,ax,ay,az)  \
			_msCmd(_hmsCoord_id, 0xA0+mode,ax), \
			_msPac(ay,az), \
			_msAdr(gfx),

#define	hmsGfxCoordY(mode,gfx,ay)  \
			_msCmd(_hmsCoord_id, 0xB0+mode,ay), \
			_msAdr(gfx),


/* Trans node	*/

#define	hmsTrans(px,py,pz)  \
			_msCmd(_hmsTrans_id, 0x00, px), \
			_msPac(py,pz),

#define	hmsGfxTrans(mode,gfx,px,py,pz)  \
			_msCmd(_hmsTrans_id, 0x80+mode, px), \
			_msPac(py,pz), \
			_msAdr(gfx),


/* Rotate node	*/

#define	hmsRotate(ax,ay,az)  \
			_msCmd(_hmsRotate_id, 0x00, ax), \
			_msPac(ay,az),

#define	hmsGfxRotate(mode,gfx,ax,ay,az)  \
			_msCmd(_hmsRotate_id, 0x80+mode, ax), \
			_msPac(ay,az), \
			_msAdr(gfx),



/* Scale node	*/

#define	hmsScale(scaling)  \
			_msCmd(_hmsScale_id, 0x00, 0), \
			_msU32(scaling),

#define	hmsGfxScale(mode,gfx,scaling)  \
			_msCmd(_hmsScale_id, 0x80+mode, 0), \
			_msU32(scaling), \
			_msAdr(gfx),



/* Matrix node	*/

#define	hmsMatrix(matrix)  \
			_msCmd(_hmsMatrix_id, 0x00, 0), \
			_msAdr(matrix),

#define	hmsGfxMatrix(mode,gfx,matrix)  \
			_msCmd(_hmsMatrix_id, 0x80+mode, 0), \
			_msAdr(matrix), \
			_msAdr(gfx),



/* Joint node	*/

#define	hmsJoint(mode,gfx,px,py,pz)  \
			_msCmd(_hmsJoint_id, mode, px), \
			_msPac(py,pz), \
			_msAdr(gfx),


/* Bboard node	*/

#define	hmsBboard(px,py,pz)  \
			_msCmd(_hmsBboard_id, 0x00, px), \
			_msPac(py,pz),

#define	hmsGfxBboard(mode,gfx,px,py,pz)  \
			_msCmd(_hmsBboard_id, 0x80+mode, px), \
			_msPac(py,pz), \
			_msAdr(gfx),


/* Gfx node		*/

#define	hmsGfx(mode,gfx)  \
			_msCmd(_hmsGfx_id, mode, 0), \
			_msAdr(gfx),



/* Shape header node	*/

#define	hmsHeader(radius)  \
			_msCmd(_hmsHeader_id, 0, radius),


/* Shadow node	*/

#define	hmsShadowOn(size)  \
			_msCmd(_hmsShadow_id, 0, 1), \
			_msPac(128, size),


#define	hmsShadow(size, level, flag)  \
			_msCmd(_hmsShadow_id, 0, flag), \
			_msPac(level, size),

/* Object node	*/

#define	hmsObject()  \
			_msCmd(_hmsObject_id, 0, 0),


/* CProg node	*/

#define	hmsCProg(code, proc)  \
			_msCmd(_hmsCProg_id, 0, code), \
			_msAdr(proc),

/* Clear node	*/

#define	hmsClear(color, proc)  \
			_msCmd(_hmsClear_id, 0, color), \
			_msAdr(proc),


/* Print node	*/

#define	hmsPrint(string, width, height, length)  \
			_msCmd(_hmsPrint_id, length, (width)*256+(height)), \
			_msAdr(string),


/* sucker node	*/

#define	hmsSucker(posx, posy, posz, code, proc)  \
			_msCmd(_hmsSucker_id, code, posx), \
			_msPac(posy,posz), \
			_msAdr(proc),



#define	hmsPutFlags(flag)						_msCmd(_hmsPutFlag_id, 0, flag),
#define	hmsSetFlags(flag)						_msCmd(_hmsPutFlag_id, 1, flag),
#define	hmsClrFlags(flag)						_msCmd(_hmsPutFlag_id, 2, flag),


#define	hmsBranch(storage)  \
			_msCmd(_hmsBranch_id, 0, storage),

// geo layout macros

/**
 * 0x00: Branch and store return address
 *   0x04: scriptTarget, segment address of geo layout
 */
#define GEO_BRANCH_AND_LINK(scriptTarget) \
    CMD_BBH(0x00, 0x00, 0x0000), \
    CMD_PTR(scriptTarget)

/**
 * 0x01: Terminate geo layout
 *   0x01-0x03: unused
 */
#define GEO_END() \
    CMD_BBH(0x01, 0x00, 0x0000)

/**
 * 0x02: Branch
 *   0x01: if 1, store next geo layout address on stack
 *   0x02-0x03: unused
 *   0x04: scriptTarget, segment address of geo layout
 */
#define GEO_BRANCH(type, scriptTarget) \
    CMD_BBH(0x02, type, 0x0000), \
    CMD_PTR(scriptTarget)

/**
 * 0x03: Return from branch
 *   0x01-0x03: unused
 */
#define GEO_RETURN() \
    CMD_BBH(0x03, 0x00, 0x0000)

/**
 * 0x04: Open node
 *   0x01-0x03: unused
 */
#define GEO_OPEN_NODE() \
    CMD_BBH(0x04, 0x00, 0x0000)

/**
 * 0x05: Close node
 *   0x01-0x03: unused
 */
#define GEO_CLOSE_NODE() \
    CMD_BBH(0x05, 0x00, 0x0000)

/**
 * 0x06: Register the current node at the given index in the gGeoViews array
 *   0x01: unused
 *   0x02: s16 index
 */
#define GEO_ASSIGN_AS_VIEW(index) \
    CMD_BBH(0x06, 0x00, index)

/**
 * 0x07: Update current scene graph node flags
 *   0x01: u8 operation (0 = reset, 1 = set, 2 = clear)
 *   0x02: s16 bits
 */
#define GEO_UPDATE_NODE_FLAGS(operation, flagBits) \
    CMD_BBH(0x07, operation, flagBits)

/**
 * 0x08: Create screen area scene graph node
 *   0x01: unused
 *   0x02: s16 num entries (+2) to allocate
 *   0x04: s16 x
 *   0x06: s16 y
 *   0x08: s16 width
 *   0x0A: s16 height
 */
#define GEO_NODE_SCREEN_AREA(numEntries, x, y, width, height) \
    CMD_BBH(0x08, 0x00, numEntries), \
    CMD_HH(x, y), \
    CMD_HH(width, height)

/**
 * 0x09: Create orthographic projection scene graph node
 *   0x02: s16 scale as percentage
 */
#define GEO_NODE_ORTHO(scale) \
    CMD_BBH(0x09, 0x00, scale)

/**
 * 0x0A: Create camera frustum scene graph node
 *   0x01: u8  if nonzero, enable function field
 *   0x02: s16 field of view
 *   0x04: s16 near
 *   0x06: s16 far
 *   0x08: [GraphNodeFunc function]
*/
#define GEO_CAMERA_FRUSTUM(fov, near, far) \
    CMD_BBH(0x0A, 0x00, fov), \
    CMD_HH(near, far)
#define GEO_CAMERA_FRUSTUM_WITH_FUNC(fov, near, far, func) \
    CMD_BBH(0x0A, 0x01, fov), \
    CMD_HH(near, far), \
    CMD_PTR(func)

/**
 * 0x0B: Create a root scene graph node
 *   0x01-0x03: unused
 */
#define GEO_NODE_START() \
    CMD_BBH(0x0B, 0x00, 0x0000)

/**
 * 0x0C: Create zbuffer-toggling scene graph node
 *   0x01: u8 enableZBuffer (1 = on, 0 = off)
 *   0x02-0x03: unused
 */
#define GEO_ZBUFFER(enable) \
    CMD_BBH(0x0C, enable, 0x0000)

/**
 * 0x0D: Create render range scene graph node
 *   0x01-0x03: unused
 *   0x04: s16 minDistance
 *   0x06: s16 maxDistance
 */
#define GEO_RENDER_RANGE(minDistance, maxDistance) \
    CMD_BBH(0x0D, 0x00, 0x0000), \
    CMD_HH(minDistance, maxDistance)

/**
 * 0x0E: Create switch-case scene graph node
 *   0x01: unused
 *   0x02: s16 numCases
 *   0x04: GraphNodeFunc caseSelectorFunc
 */
#define GEO_SWITCH_CASE(count, function) \
    CMD_BBH(0x0E, 0x00, count), \
    CMD_PTR(function)

/**
 * 0x0F: Create a camera scene graph node.
 *   0x01: unused
 *   0x02: s16 camera type
 *   0x04: s16 posX
 *   0x06: s16 posY
 *   0x08: s16 posZ
 *   0x0A: s16 focusX
 *   0x0C: s16 focusY
 *   0x0E: s16 focusZ
 *   0x10: GraphNodeFunc function
 */
#define GEO_CAMERA(type, x1, y1, z1, x2, y2, z2, function) \
    CMD_BBH(0x0F, 0x00, type), \
    CMD_HHHHHH(x1, y1, z1, x2, y2, z2), \
    CMD_PTR(function)

/**
 * 0x10: Create translation & rotation scene graph node with optional display list
 * Four different versions of 0x10
 *   cmd+0x01: u8 params
 *     0b1000_0000: if set, enable displayList field and drawingLayer
 *     0b0111_0000: fieldLayout (determines how rest of data is formatted
 *     0b0000_1111: drawingLayer
 *
 *   fieldLayout = 0: Translate & Rotate
 *     0x04: s16 xTranslation
 *     0x06: s16 yTranslation
 *     0x08: s16 zTranslation
 *     0x0A: s16 xRotation
 *     0x0C: s16 yRotation
 *     0x0E: s16 zRotation
 *     0x10: [u32 displayList: if MSbit of params set, display list segmented address]
 */
#define GEO_TRANSLATE_ROTATE(layer, tx, ty, tz, rx, ry, rz) \
    CMD_BBH(0x10, (0x00 | layer), 0x0000), \
    CMD_HHHHHH(tx, ty, tz, rx, ry, rz)
#define GEO_TRANSLATE_ROTATE_WITH_DL(layer, tx, ty, tz, rx, ry, rz, displayList) \
    CMD_BBH(0x10, (0x00 | layer | 0x80), 0x0000), \
    CMD_HHHHHH(tx, ty, tz, rx, ry, rz), \
    CMD_PTR(displayList)

/**
 *   fieldLayout = 1: Translate
 *     0x02: s16 xTranslation
 *     0x04: s16 yTranslation
 *     0x06: s16 zTranslation
 *     0x08: [u32 displayList: if MSbit of params set, display list segmented address]
 */
#define GEO_TRANSLATE(layer, tx, ty, tz) \
    CMD_BBH(0x10, (0x10 | layer), tx), \
    CMD_HH(ty, tz)
#define GEO_TRANSLATE_WITH_DL(layer, tx, ty, tz, displayList) \
    CMD_BBH(0x10, (0x10 | layer | 0x80), tx), \
    CMD_HH(ty, tz), \
    CMD_PTR(displayList)

/**
 *   fieldLayout = 2: Rotate
 *     0x02: s16 xRotation
 *     0x04: s16 yRotation
 *     0x06: s16 zRotation
 *     0x08: [u32 displayList: if MSbit of params set, display list segmented address]
 */
#define GEO_ROTATE(layer, rx, ry, rz) \
    CMD_BBH(0x10, (0x20 | layer), rx), \
    CMD_HH(ry, rz)
#define GEO_ROTATE_WITH_DL(layer, rx, ry, rz, displayList) \
    CMD_BBH(0x10, (0x20 | layer | 0x80), rx), \
    CMD_HH(ry, rz), \
    CMD_PTR(displayList)

/**
 *   fieldLayout = 3: Rotate Y
 *     0x02: s16 yRotation
 *     0x04: [u32 displayList: if MSbit of params set, display list segmented address]
 */
#define GEO_ROTATE_Y(layer, ry) \
    CMD_BBH(0x10, (0x30 | layer), ry)
#define GEO_ROTATE_Y_WITH_DL(layer, ry, displayList) \
    CMD_BBH(0x10, (0x30 | layer | 0x80), ry), \
    CMD_PTR(displayList)

/**
 * 0x11: Create translation scene graph node with optional display list
 *   0x01: u8 params
 *     0b1000_0000: if set, enable displayList field and drawingLayer
 *     0b0000_1111: drawingLayer
 *   0x02: s16 translationX
 *   0x04: s16 translationY
 *   0x06: s16 translationZ
 *   0x08: [u32 displayList: if MSbit of params set, display list segmented address]
 */
#define GEO_TRANSLATE_NODE(layer, ux, uy, uz) \
    CMD_BBH(0x11, layer, ux), \
    CMD_HH(uy, uz)
#define GEO_TRANSLATE_NODE_WITH_DL(layer, ux, uy, uz, displayList) \
    CMD_BBH(0x11, (layer | 0x80), ux), \
    CMD_HH(uy, uz), \
    CMD_PTR(displayList)

/**
 * 0x12: Create rotation scene graph node with optional display list
 *   0x01: u8 params
 *      0b1000_0000: if set, enable displayList field and drawingLayer
 *      0b0000_1111: drawingLayer
 *   0x02: s16 rotationX
 *   0x04: s16 rotationY
 *   0x06: s16 rotationZ
 *   0x08: [u32 displayList: if MSbit of params set, display list segmented address]
 */
#define GEO_ROTATION_NODE(layer, ux, uy, uz) \
    CMD_BBH(0x12, layer, ux), \
    CMD_HH(uy, uz)
#define GEO_ROTATION_NODE_WITH_DL(layer, ux, uy, uz, displayList) \
    CMD_BBH(0x12, (layer | 0x80), ux), \
    CMD_HH(uy, uz), \
    CMD_PTR(displayList)

/**
 * 0x13: Create a scene graph node that is rotated by the object's animation.
 *   0x01: u8 drawingLayer
 *   0x02: s16 xTranslation
 *   0x04: s16 yTranslation
 *   0x06: s16 zTranslation
 *   0x08: u32 displayList: dislay list segmented address
 */
#define GEO_ANIMATED_PART(layer, x, y, z, displayList) \
    CMD_BBH(0x13, layer, x), \
    CMD_HH(y, z), \
    CMD_PTR(displayList)

/**
 * 0x14: Create billboarding node with optional display list
 *   0x01: u8 params
 *      0b1000_0000: if set, enable displayList field and drawingLayer
 *      0b0000_1111: drawingLayer
 *   0x02: s16 xTranslation
 *   0x04: s16 yTranslation
 *   0x06: s16 zTranslation
 *   0x08: [u32 displayList: if MSbit of params is set, display list segmented address]
 */
#define GEO_BILLBOARD_WITH_PARAMS(layer, tx, ty, tz) \
    CMD_BBH(0x14, layer, tx), \
    CMD_HH(ty, tz)
#define GEO_BILLBOARD_WITH_PARAMS_AND_DL(layer, tx, ty, tz, displayList) \
    CMD_BBH(0x14, (layer | 0x80), tx), \
    CMD_HH(ty, tz), \
    CMD_PTR(displayList)
#define GEO_BILLBOARD() \
    GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0)

/**
 * 0x15: Create plain display list scene graph node
 *   0x01: u8 drawingLayer
 *   0x02-0x03: unused
 *   0x04: u32 displayList: display list segmented address
 */
#define GEO_DISPLAY_LIST(layer, displayList) \
    CMD_BBH(0x15, layer, 0x0000), \
    CMD_PTR(displayList)

/**
 * 0x16: Create shadow scene graph node
 *   0x01: unused
 *   0x02: s16 shadowType (cast to u8)
 *   0x04: s16 shadowSolidity (cast to u8)
 *   0x06: s16 shadowScale
 */
#define GEO_SHADOW(type, solidity, scale) \
    CMD_BBH(0x16, 0x00, type), \
    CMD_HH(solidity, scale)

/**
 * 0x17: Create render object scene graph node
 *   0x01-0x03: unused
 */
#define GEO_RENDER_OBJ() \
    CMD_BBH(0x17, 0x00, 0x0000)

/**
 * 0x18: Create dynamically generated displaylist scene graph node
 *   0x01: unused
 *   0x02: s16 parameter
 *   0x04: GraphNodeFunc function
 */
#define GEO_ASM(param, function) \
    CMD_BBH(0x18, 0x00, param), \
    CMD_PTR(function)

/**
 * 0x19: Create background scene graph node
 *   0x02: s16 background: background ID, or RGBA5551 color if backgroundFunc is null
 *   0x04: GraphNodeFunc backgroundFunc
 */
#define GEO_BACKGROUND(background, function) \
    CMD_BBH(0x19, 0x00, background), \
    CMD_PTR(function)
#define GEO_BACKGROUND_COLOR(background) \
    GEO_BACKGROUND(background, NULL)

/**
 * 0x1A: No operation
 */
#define GEO_NOP_1A() \
    CMD_BBH(0x1A, 0x00, 0x0000), \
    CMD_HH(0x0000, 0x0000)

/**
 * 0x1B: Copy the shared children from an object parent node from a specific view
 * to a newly created object parent.
 *   0x02: s16 index of array
 */
#define GEO_COPY_VIEW(index) \
    CMD_BBH(0x1B, 0x00, index)

/**
 * 0x1C: Create a held object scene graph node
 *  cmd+0x01: u8 unused
 *  cmd+0x02: s16 offsetX
 *  cmd+0x04: s16 offsetY
 *  cmd+0x06: s16 offsetZ
 *  cmd+0x08: GraphNodeFunc nodeFunc
 */
#define GEO_HELD_OBJECT(param, ux, uy, uz, nodeFunc) \
    CMD_BBH(0x1C, param, ux), \
    CMD_HH(uy, uz), \
    CMD_PTR(nodeFunc)

/**
 * 0x1D: Create scale scene graph node with optional display list
 *   0x01: u8 params
 *     0b1000_0000: if set, enable displayList field and drawingLayer
 *     0b0000_1111: drawingLayer
 *   0x02-0x03: unused
 *   0x04: u32 scale (0x10000 = 1.0)
 *   0x08: [u32 displayList: if MSbit of params is set, display list segment address]
 */
#define GEO_SCALE(layer, scale) \
    CMD_BBH(0x1D, layer, 0x0000), \
    CMD_W(scale)
#define GEO_SCALE_WITH_DL(layer, scale, displayList) \
    CMD_BBH(0x1D, (layer | 0x80), 0x0000), \
    CMD_W(scale), \
    CMD_PTR(displayList)

/**
 * 0x1E: No operation
 */
#define GEO_NOP_1E() \
    CMD_BBH(0x1E, 0x00, 0x0000), \
    CMD_HH(0x0000, 0x0000)

/**
 * 0x1F: No operation
 */
#define GEO_NOP_1F() \
    CMD_BBH(0x1F, 0x00, 0x0000), \
    CMD_HH(0x0000, 0x0000), \
    CMD_HH(0x0000, 0x0000), \
    CMD_HH(0x0000, 0x0000)

/**
 * 0x20: Create a scene graph node that specifies for an object the radius that
 * is used for frustum culling.
 *   0x01: unused
 *   0x02: s16 cullingRadius
 */
#define GEO_CULLING_RADIUS(cullingRadius) \
    CMD_BBH(0x20, 0x00, cullingRadius)

#endif // GEO_COMMANDS_H
