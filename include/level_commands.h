#ifndef LEVEL_COMMANDS_H
#define LEVEL_COMMANDS_H

#include "command_macros_base.h"
#include "level_table.h"

/********************************************************************************
	seqlang.h: Ultra 64 MARIO Brothers include file

	Copyright (c) 1996 Nintendo co., ltd.  All rights reserved

	July 7, 2024
 ********************************************************************************/

#define	ShapePlayer1		1
#define	ShapePlayer2		2 // loogie

#define uchar unsigned char

#define	SEQ_WIPE_FADEIN				0
#define	SEQ_WIPE_FADEOUT			1

#define	WIPE_FADE_IN				0
#define	WIPE_FADE_OUT				1

#define	WIPE_TRI_SCR_OPEN			2
#define	WIPE_TRI_SCR_CLOSE			3

#define	WIPE_RECT_SCR_OPEN			4
#define	WIPE_RECT_SCR_CLOSE			5

#define	WIPE_R_DITHER_IN			6
#define	WIPE_R_DITHER_OUT			7

#define	WIPE_STAR_WIN_OPEN			8
#define	WIPE_STAR_WIN_CLOSE			9

#define	WIPE_CIRCLE_WIN_OPEN		10
#define	WIPE_CIRCLE_WIN_CLOSE		11

#define	WIPE_POLY_STAR_OPEN			12
#define	WIPE_POLY_STAR_CLOSE		13


#define	SEQ_MESG_ENTRANT			0


#define	SEQ_WATER_IN		0
#define	SEQ_WATER_OUT		1

#define	SEQ_KOOPA_NON		0
#define	SEQ_KOOPA_LIVE		1
#define	SEQ_KOOPA_DIED		2
#define	SEQ_STAR_LEVEL		3


#define	ENV_SNOW					2

#define	ENV_PLAIN					0x00
#define	ENV_ROCKMT					0x01
#define	ENV_SNOWMT					0x02
#define	ENV_DESERT					0x03
#define	ENV_HOUSE					0x04
#define	ENV_WATER					0x05
#define	ENV_SLIDER					0x06
#define	ENV_CODEMASK				0x07


#define	SEQ_AND		0
#define	SEQ_NAND	1
#define	SEQ_EQ		2
#define	SEQ_NE		3
#define	SEQ_GT		4
#define	SEQ_GE		5
#define	SEQ_LT		6
#define	SEQ_LE		7

#define	PAD			0


#define	STAR_00001		0x01
#define	STAR_00010		0x02
#define	STAR_00011		0x03
#define	STAR_00100		0x04
#define	STAR_00101		0x05
#define	STAR_00110		0x06
#define	STAR_00111		0x07
#define	STAR_01000		0x08
#define	STAR_01001		0x09
#define	STAR_01010		0x0A
#define	STAR_01011		0x0B
#define	STAR_01100		0x0C
#define	STAR_01101		0x0D
#define	STAR_01110		0x0E
#define	STAR_01111		0x0F
#define	STAR_10000		0x10
#define	STAR_10001		0x11
#define	STAR_10010		0x12
#define	STAR_10011		0x13
#define	STAR_10100		0x14
#define	STAR_10101		0x15
#define	STAR_10110		0x16
#define	STAR_10111		0x17
#define	STAR_11000		0x18
#define	STAR_11001		0x19
#define	STAR_11010		0x1A
#define	STAR_11011		0x1B
#define	STAR_11100		0x1C
#define	STAR_11101		0x1D
#define	STAR_11110		0x1E
#define	STAR_11111		0x1F

#define	GMODE_PLAYER	0
#define	GMODE_COURSE	1
#define	GMODE_LEVEL		2
#define	GMODE_STAGE		3
#define	GMODE_SCENE		4

#define OP_AND   0
#define OP_NAND  1
#define OP_EQ    2
#define OP_NEQ   3
#define OP_LT    4
#define OP_LEQ   5
#define OP_GT    6
#define OP_GEQ   7

#define OP_SET   0
#define OP_GET   1

#define VAR_CURR_SAVE_FILE_NUM  0
#define VAR_CURR_COURSE_NUM     1
#define VAR_CURR_ACT_NUM        2
#define VAR_CURR_LEVEL_NUM      3
#define VAR_CURR_AREA_INDEX     4

#define WARP_CHECKPOINT 0x80
#define WARP_NO_CHECKPOINT 0x00

#define WHIRLPOOL_COND_ALWAYS 0
#define WHIRLPOOL_COND_BOWSER2_BEATEN 2
#define WHIRLPOOL_COND_AT_LEAST_SECOND_STAR 3

// Head defines
#define REGULAR_FACE 0x0002
#define DIZZY_FACE 0x0003

/********************************************************************************/
/*	Sequence language command ID.												*/
/********************************************************************************/

#define	_seqExecute_id				 0
#define	_seqChain_id				 1
#define	_seqExit_id					 2
#define	_seqWait_id					 3
#define	_seqFreeze_id				 4
#define	_seqJump_id					 5
#define	_seqCall_id					 6
#define	_seqReturn_id				 7
#define	_seqDo_id					 8
#define	_seqNext_id					 9
#define	_seqRepeat_id				10
#define	_seqUntil_id				11
#define	_seqTstJump_id				12
#define	_seqTstCall_id				13
#define	_seqIf_id					14
#define	_seqElse_id					15
#define	_seqEndif_id				16
#define	_seqCProgram_id				17
#define	_seqRunning_id				18
#define	_seqSetResult_id			19

#define	_seqLinkMemory_id			20
#define	_seqUnlinkMemory_id			21
#define	_seqLoadCode_id				22
#define	_seqLoadData_id				23
#define	_seqLoadPres_id				24
#define	_seqLoadFace_id				25
#define	_seqLoadText_id				26

#define	_seqInitStage_id			27
#define	_seqDestroyStage_id			28
#define	_seqBeginConstruction_id	29
#define	_seqEndConstruction_id		30
#define	_seqBeginScene_id			31
#define	_seqEndScene_id				32
#define	_seqGfxShape_id				33
#define	_seqHmsShape_id				34
#define	_seqSclShape_id				35
#define	_seqActor_id				36
#define	_seqStarring_id				37
#define	_seqPort_id					38
#define	_seqBGPort_id				39
#define	_seqConnect_id				40

#define	_seqOpenScene_id			41
#define	_seqCloseScene_id			42
#define	_seqEnterPlayer_id			43
#define	_seqExitPlayer_id			44
#define	_seqExecStrategy_id			45

#define	_seqMapInfo_id				46
#define	_seqAreaInfo_id				47
#define	_seqMessage_id				48
#define	_seqEnvironment_id			49
#define	_seqBlankColor_id			50

#define	_seqWipe_id					51
#define	_seqBlanking_id				52
#define	_seqGamma_id				53

#define	_seqSetMusic_id				54
#define	_seqPlayMusic_id			55
#define	_seqStopMusic_id			56

#define	_seqTagInfo_id				57
#define	_seqWindZone_id				58
#define	_seqWaterJet_id				59

#define	_seqGameMode_id				60
#define _seqGround_id				NULL

//#ifdef ASSEMBLER

#define	RGBA16(r,g,b,a)		(((r)<<11) | ((g)<<6) | ((b)<<1) | (a))
#define	AudFrame(n)			((n)*8-2)

/*  temporarity */
#define	temp1(shapeNo, gfxlist, mode, scale) \
    CMD_BBH(_seqSclShape_id, 0x08, mode*4096+shapeNo), \
    CMD_PTR(gfxlist), \
    CMD_W(scale)
#define	temp2(shapeNo, posx, posy, posz, angx, angy, angz, code1, code2, flags, strategy) \
    CMD_BBBB(_seqActor_id, 24, 0x1f, shapeNo), \
    CMD_HHHHHH(posx, posy, posz, angx, angy, angz), \
    CMD_HH(code1, code2), \
	CMD_W(flags), \
    CMD_PTR(strategy)
#define	temp3(level, shapeNo, posx, posy, posz, angx, angy, angz, code1, code2, flags, strategy) \
    CMD_BBBB(_seqActor_id, 24, level, shapeNo), \
    CMD_HHHHHH(posx, posy, posz, angx, angy, angz), \
    CMD_HH(code1, code2), \
	CMD_W(flags), \
    CMD_PTR(strategy)

/*===============================================================================
 *
 *	Sequence control command
 */

#define	seqExecute(segment, romStart, romEnd, procedure) 						EXECUTE(segment, romStart, romEnd, procedure),
#define	seqChain(segment, romStart, romEnd, procedure) 							EXIT_AND_EXECUTE(segment, romStart, romEnd, procedure),
#define	seqExit() 																CMD_BBH(_seqExit_id, 0x04, 0x0000)
#define	seqEnd																	CMD_BBH(_seqWait_id, 0x04, 0x0000)
#define	seqWait(nframes) 														CMD_BBH(_seqWait_id, 0x04, nframes)
#define	seqFreeze(nframes) 														CMD_BBH(_seqFreeze_id, 0x04, nframes)
#define	seqJump(procedure) 														JUMP(procedure),
#define	seqCall(procedure) 														JUMP_LINK(procedure),
#define	seqReturn 																CMD_BBH(_seqReturn_id, 0x04, 0x0000)
#define	seqDo(nrounds) 															CMD_BBH(_seqDo_id, 0x04, nrounds)
#define	seqNext																	CMD_BBH(_seqNext_id, 0x04, 0x0000)
#define	seqRepeat 																CMD_BBH(_seqRepeat_id, 0x04, 0x0000)
#define	seqUntil(condition, value) 												LOOP_UNTIL(condition, value),
#define	seqTstJump(condition, value, procedure) 								JUMP_IF(condition, value, procedure),
#define	seqTstCall(condition, value, procedure) 								JUMP_LINK_IF(condition, value, procedure),
#define	seqIf(condition, index, value) 											SKIP_IF(condition, index),
#define	seqElse 																CMD_BBH(_seqElse_id, 0x04, 0x0000)
#define	seqEndif 																CMD_BBH(_seqEndif_id, 0x04, 0x0000)
#define	seqCProgram(program, code) 												CALL(program, code),
#define	seqRunning(program, code) 												CALL_LOOP(program, code),
#define	seqSetResult(code) 														CMD_BBH(code, 0x04, value)

/*===============================================================================
 *
 *	Memory allocation command
 */

#define	seqLinkMemory()		   													CMD_BBH(_seqLinkMemory_id, 0x04, 0x0000)
#define	seqUnlinkMemory()		 												CMD_BBH(_seqUnlinkMemory_id, 0x04, 0x0000)
#define	seqLoadCode(ramAddr, romStart, romEnd) 									FIXED_LOAD(ramAddr, romStart, romEnd),
#define	seqLoadData(segment, romStart, romEnd) 									LOAD_RAW(segment, romStart, romEnd),
#define	seqLoadPres(segment, romStart, romEnd) 									LOAD_MIO0(segment, romStart, romEnd),
#define	seqLoadFace(number)  										 			LOAD_MARIO_HEAD(number),
#define	seqLoadText(segment, romStart, romEnd) 									LOAD_MIO0_TEXTURE(segment, romStart, romEnd),

/*================================================================================
 *
 *	Stage construction command
 */

#define seqInitStage() 															CMD_BBH(_seqInitStage_id, 0x04, 0x0000)
#define seqDestroyStage()		 												CMD_BBH(_seqDestroyStage_id, 0x04, 0x0000)
#define	seqBeginConstruction()		  											CMD_BBH(_seqBeginConstruction_id, 0x04, 0x0000)
#define	seqEndConstruction()  													CMD_BBH(_seqEndConstruction_id, 0x04, 0x0000)
#define seqBeginScene(sceneNo, hierarchy) 										AREA(sceneNo, hierarchy),
#define seqEndScene() 															CMD_BBH(_seqEndScene_id, 0x04, 0x0000)
#define	seqGfxShape(shapeNo, gfxlist, mode) 									LOAD_MODEL_FROM_DL(shapeNo, gfxlist, mode),
#define	seqHmsShape(shapeNo, hierarchy) 										LOAD_MODEL_FROM_GEO(shapeNo, hierarchy),
#define	seqSclShape(shapeNo, gfxlist, mode, scale)                              temp1(shapeNo, gfxlist, mode, scale),
#define	seqHmsMario(shapeNo, code, strategy) 									MARIO(shapeNo, code, strategy),
#define	seqHmsLuigi(shapeNo, code, strategy) 									MARIO(shapeNo, code, strategy), // same shit but with different function
/*  it's not perfect, it's just a reconstruction of how it look like.  */ /*    tested, it did works but crashes after loading into levels  >*/
#define	seqActor(shapeNo, posx, posy, posz, angx, angy, angz, code1, code2, flags, strategy) temp2(shapeNo, posx, posy, posz, angx, angy, angz, code1, code2, flags, strategy),
#define	seqLevelActor(level, shapeNo, posx, posy, posz, angx, angy, angz, code1, code2, flags, strategy) temp3(level, shapeNo, posx, posy, posz, angx, angy, angz, code1, code2, flags, strategy),
/*<  end   */
#define	seqGameClear(stage, scene, port)										seqPort(0xf0,stage,scene,port)
#define	seqGameOver(stage, scene, port)											seqPort(0xf1,stage,scene,port)
#define	seqViewRoof(stage, scene, port)											seqPort(0xf2,stage,scene,port)
#define	seqCourseOut(stage, scene, port)										seqPort(0xf3,stage,scene,port)
#define	seqPort(number, stage, scene, port) 									WARP_NODE(number, stage, scene, port, 0x00),
#define	seqMidPort(number, stage, scene, port) 									WARP_NODE(number, stage, scene, port, 0x80),
#define	seqBGPort(bgattr, stage, scene, port) 									PAINTING_WARP_NODE(bgattr, stage, scene, port, 0x00),
#define	seqMidBGPort(bgattr, stage, scene, port) 								PAINTING_WARP_NODE(bgattr, stage, scene, port, 0x80),
#define	seqConnect(number, scene, offsetx, offsety, offsetz) 					INSTANT_WARP(number, scene, offsetx, offsety, offsetz),
#define	seqGround(address) 														CMD_BBBB(_seqGround_id, 0x08, address, 0x00) // unknown id, set to 0
#define	seqMapInfo(address) 													TERRAIN(address),
#define	seqAreaInfo(address) 													ROOMS(surfaceRooms),
#define	seqTagInfo(address) 													MACRO_OBJECTS(address),

/*===============================================================================
 *
 *	Scene control command
 */

#define	seqOpenScene(scene)   													LOAD_AREA(scene),
#define	seqCloseScene(scene)   													CMD_BBBB(_seqCloseScene_id, 0x08, scene, 0x00)
#define	seqEnterMario(scene, angle, posx, posy, posz) 							MARIO_POS(scene, angle, posx, posy, posz),
#define	seqEnterLuigi(scene, angle, posx, posy, posz) 							MARIO_POS(scene, angle, posx, posy, posz), // same shit but with different function
#define	seqExitMario()		   													CMD_BBH(_seqExitPlayer_id, 0x04, 0x0000)
#define	seqExitLuigi()		   													CMD_BBH(_seqExitPlayer_id, 0x04, 0x0000)
#define	seqExecStrategy()		 												CMD_BBH(_seqExecStrategy_id, 0x04, 0x0000)
#define	seqWipe(mode, nframes, r, g, b) 										TRANSITION(mode, nframes, r, g, b),
#define	seqBlanking(blankSw) 													CMD_BBBB(_seqBlanking_id, 0x04, blankSw, 0x00)
#define	seqGammaCorrection(gammaSw) 											CMD_BBBB(_seqGamma_id, 0x04, gammaSw, 0x00)
#define	seqEnvironment(flags)													CMD_BBH(_seqEnvironment_id, 0x04, flags)
#define	seqBlankColor(color) 													CMD_BBH(_seqBlankColor_id, 0x04, 0x0000)
#define	seqMessage(type, message) 												SHOW_DIALOG(type, message),
#define	seqSetMusic(type, music) 												SET_BACKGROUND_MUSIC(type, music),
#define	seqPlayMusic(music, fade) 												CMD_BBH(_seqPlayMusic_id, 0x04, music)
#define	seqStopMusic(fade) 														CMD_BBH(_seqStopMusic_id, 0x04, fade)
#define	seqWindZone(px1, pz1, px2, pz2, angle)  								CMD3A(px1, pz1, px2, pz2, angle),
#define	seqWaterJet(number, posx, posy, posz, force, koopa2)    				WHIRLPOOL(number, koopa2, posX, posY, posZ, force)
#define	seqSetGameMode(type) 													CMD_BBBB(_seqGameMode_id, 0x04, 0, type),
#define	seqGetGameMode(type) 													CMD_BBBB(_seqGameMode_id, 0x04, 1, type),

// GEO commands

#ifdef NO_SEGMENTED_MEMORY
#define EXECUTE(seg, script, scriptEnd, entry) \
    CMD_BBH(0x00, 0x10, 0x0000), \
    CMD_PTR(NULL), \
    CMD_PTR(NULL), \
    CMD_PTR(entry)

#define EXIT_AND_EXECUTE(seg, script, scriptEnd, entry) \
    CMD_BBH(0x01, 0x10, 0x0000), \
    CMD_PTR(NULL), \
    CMD_PTR(NULL), \
    CMD_PTR(entry)
#else
#define EXECUTE(seg, script, scriptEnd, entry) \
    CMD_BBH(0x00, 0x10, seg), \
    CMD_PTR(script), \
    CMD_PTR(scriptEnd), \
    CMD_PTR(entry)

#define EXIT_AND_EXECUTE(seg, script, scriptEnd, entry) \
    CMD_BBH(0x01, 0x10, seg), \
    CMD_PTR(script), \
    CMD_PTR(scriptEnd), \
    CMD_PTR(entry)
#endif

#define EXIT() \
    CMD_BBH(0x02, 0x04, 0x0000)

#define SLEEP(frames) \
    CMD_BBH(0x03, 0x04, frames)

#define SLEEP_BEFORE_EXIT(frames) \
    CMD_BBH(0x04, 0x04, frames)

#define JUMP(target) \
    CMD_BBH(0x05, 0x08, 0x0000), \
    CMD_PTR(target)

#define JUMP_LINK(target) \
    CMD_BBH(0x06, 0x08, 0x0000), \
    CMD_PTR(target)

#define RETURN() \
    CMD_BBH(0x07, 0x04, 0x0000)

#define JUMP_LINK_PUSH_ARG(arg) \
    CMD_BBH(0x08, 0x04, arg)

#define JUMP_N_TIMES() \
    CMD_BBH(0x09, 0x04, 0x0000)

#define LOOP_BEGIN() \
    CMD_BBH(0x0A, 0x04, 0x0000)

#define LOOP_UNTIL(op, arg) \
    CMD_BBBB(0x0B, 0x08, op, 0x00), \
    CMD_W(arg)

#define JUMP_IF(op, arg, target) \
    CMD_BBBB(0x0C, 0x0C, op, 0x00), \
    CMD_W(arg), \
    CMD_PTR(target)

#define JUMP_LINK_IF(op, arg, target) \
    CMD_BBBB(0x0D, 0x0C, op, 0x00), \
    CMD_W(arg), \
    CMD_PTR(target)


#define SKIP_IF(op, arg) \
    CMD_BBBB(0x0E, 0x08, op, 0) \
    CMD_W(arg)

#define SKIP() \
    CMD_BBH(0x0F, 0x04, 0x0000)

#define SKIP_NOP() \
    CMD_BBH(0x10, 0x04, 0x0000)

#define CALL(arg, func) \
    CMD_BBH(0x11, 0x08, arg), \
    CMD_PTR(func)

// Calls func in a loop until it returns nonzero
#define CALL_LOOP(arg, func) \
    CMD_BBH(0x12, 0x08, arg), \
    CMD_PTR(func)

#define SET_REG(value) \
    CMD_BBH(0x13, 0x04, value)

#define PUSH_POOL() \
    CMD_BBH(0x14, 0x04, 0x0000)

#define POP_POOL() \
    CMD_BBH(0x15, 0x04, 0x0000)

#ifdef NO_SEGMENTED_MEMORY
#define FIXED_LOAD(loadAddr, romStart, romEnd) \
    CMD_BBH(0x16, 0x10, 0x0000), \
    CMD_PTR(NULL), \
    CMD_PTR(NULL), \
    CMD_PTR(NULL)

#define LOAD_RAW(seg, romStart, romEnd) \
    CMD_BBH(0x17, 0x0C, 0x0000), \
    CMD_PTR(NULL), \
    CMD_PTR(NULL)

#define LOAD_MIO0(seg, romStart, romEnd) \
    CMD_BBH(0x18, 0x0C, 0x0000), \
    CMD_PTR(NULL), \
    CMD_PTR(NULL)
#else
#define FIXED_LOAD(loadAddr, romStart, romEnd) \
    CMD_BBH(0x16, 0x10, 0x0000), \
    CMD_PTR(loadAddr), \
    CMD_PTR(romStart), \
    CMD_PTR(romEnd)

#define LOAD_RAW(seg, romStart, romEnd) \
    CMD_BBH(0x17, 0x0C, seg), \
    CMD_PTR(romStart), \
    CMD_PTR(romEnd)

#define LOAD_MIO0(seg, romStart, romEnd) \
    CMD_BBH(0x18, 0x0C, seg), \
    CMD_PTR(romStart), \
    CMD_PTR(romEnd)
#endif

#define LOAD_MARIO_HEAD(sethead) \
    CMD_BBH(0x19, 0x04, sethead)

#ifdef NO_SEGMENTED_MEMORY
#define LOAD_MIO0_TEXTURE(seg, romStart, romEnd) \
    CMD_BBH(0x1A, 0x0C, 0x0000), \
    CMD_PTR(NULL), \
    CMD_PTR(NULL)
#else
#define LOAD_MIO0_TEXTURE(seg, romStart, romEnd) \
    CMD_BBH(0x1A, 0x0C, seg), \
    CMD_PTR(romStart), \
    CMD_PTR(romEnd)
#endif

#define INIT_LEVEL() \
    CMD_BBH(0x1B, 0x04, 0x0000)

#define CLEAR_LEVEL() \
    CMD_BBH(0x1C, 0x04, 0x0000)

#define ALLOC_LEVEL_POOL() \
    CMD_BBH(0x1D, 0x04, 0x0000)

#define FREE_LEVEL_POOL() \
    CMD_BBH(0x1E, 0x04, 0x0000)

#define AREA(index, geo) \
    CMD_BBBB(0x1F, 0x08, index, 0), \
    CMD_PTR(geo)

#define END_AREA() \
    CMD_BBH(0x20, 0x04, 0x0000)

#define LOAD_MODEL_FROM_DL(model, dl, layer) \
    CMD_BBH(0x21, 0x08, ((layer << 12) | model)), \
    CMD_PTR(dl)

#define LOAD_MODEL_FROM_GEO(model, geo) \
    CMD_BBH(0x22, 0x08, model), \
    CMD_PTR(geo)

// unk8 is float, but doesn't really matter since CMD23 is unused
#define CMD23(model, unk4, unk8) \
    CMD_BBH(0x22, 0x08, model), \
    CMD_PTR(unk4), \
    CMD_W(unk8)

#define OBJECT_WITH_ACTS(model, posX, posY, posZ, angleX, angleY, angleZ, behParam, beh, acts) \
    CMD_BBBB(0x24, 0x18, acts, model), \
    CMD_HHHHHH(posX, posY, posZ, angleX, angleY, angleZ), \
    CMD_W(behParam), \
    CMD_PTR(beh)

#define OBJECT(model, posX, posY, posZ, angleX, angleY, angleZ, behParam, beh) \
    OBJECT_WITH_ACTS(model, posX, posY, posZ, angleX, angleY, angleZ, behParam, beh, 0x1F)

#define MARIO(unk3, behArg, beh) \
    CMD_BBBB(0x25, 0x0C, 0x00, unk3), \
    CMD_W(behArg), \
    CMD_PTR(beh)

#define WARP_NODE(id, destLevel, destArea, destNode, flags) \
    CMD_BBBB(0x26, 0x08, id, destLevel), \
    CMD_BBBB(destArea, destNode, flags, 0x00)

#define PAINTING_WARP_NODE(id, destLevel, destArea, destNode, flags) \
    CMD_BBBB(0x27, 0x08, id, destLevel), \
    CMD_BBBB(destArea, destNode, flags, 0x00)

#define INSTANT_WARP(index, destArea, displaceX, displaceY, displaceZ) \
    CMD_BBBB(0x28, 0x0C, index, destArea), \
    CMD_HH(displaceX, displaceY), \
    CMD_HH(displaceZ, 0x0000)

#define LOAD_AREA(area) \
    CMD_BBBB(0x29, 0x04, area, 0x00)

#define CMD2A(unk2) \
    CMD_BBBB(0x2A, 0x04, unk2, 0x00)

#define MARIO_POS(area, yaw, posX, posY, posZ) \
    CMD_BBBB(0x2B, 0x0C, area, 0x00), \
    CMD_HH(yaw, posX), \
    CMD_HH(posY, posZ)

// unused
#define CMD2C() \
    CMD_BBH(0x2C, 0x04, 0x0000)

// unused
#define CMD2D() \
    CMD_BBH(0x2D, 0x04, 0x0000)

#define TERRAIN(terrainData) \
    CMD_BBH(0x2E, 0x08, 0x0000), \
    CMD_PTR(terrainData)

#define ROOMS(surfaceRooms) \
    CMD_BBH(0x2F, 0x08, 0x0000), \
    CMD_PTR(surfaceRooms)

#define SHOW_DIALOG(index, dialogId) \
    CMD_BBBB(0x30, 0x04, index, dialogId)

#define TERRAIN_TYPE(terrainType) \
    CMD_BBH(0x31, 0x04, terrainType)

#define NOP() \
    CMD_BBH(0x32, 0x04, 0x0000)

#define TRANSITION(transType, time, colorR, colorG, colorB) \
    CMD_BBBB(0x33, 0x08, transType, time), \
    CMD_BBBB(colorR, colorG, colorB, 0x00)

#define BLACKOUT(active) \
    CMD_BBBB(0x34, 0x04, active, 0x00)

#define GAMMA(enabled) \
    CMD_BBBB(0x35, 0x04, enabled, 0x00)

#define SET_BACKGROUND_MUSIC(settingsPreset, seq) \
    CMD_BBH(0x36, 0x08, settingsPreset), \
    CMD_HH(seq, 0x0000)

#define SET_MENU_MUSIC(seq) \
    CMD_BBH(0x37, 0x04, seq)

#define STOP_MUSIC(fadeOutTime) \
    CMD_BBH(0x38, 0x04, fadeOutTime)

#define MACRO_OBJECTS(objList) \
    CMD_BBH(0x39, 0x08, 0x0000), \
    CMD_PTR(objList)

// unused
#define CMD3A(unk2, unk4, unk6, unk8, unk10) \
    CMD_BBH(0x3A, 0x0C, unk2), \
    CMD_HH(unk6, unk8), \
    CMD_HH(unk10, 0x0000)

#define WHIRLPOOL(index, condition, posX, posY, posZ, strength) \
    CMD_BBBB(0x3B, 0x0C, index, condition), \
    CMD_HH(posX, posY), \
    CMD_HH(posZ, strength)

#define GET_OR_SET(op, var) \
    CMD_BBBB(0x3C, 0x04, op, var)

#endif // LEVEL_COMMANDS_H
