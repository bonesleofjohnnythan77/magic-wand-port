#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/vcutm/header.h"
extern u8 _vcutm_segment_ESegmentRomStart[]; 
extern u8 _vcutm_segment_ESegmentRomEnd[];
const LevelScript level_vcutm_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _vcutmSegmentRomStart, _vcutmSegmentRomEnd),
LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_VCUTM_SEESAW_PLATFORM, vcutm_geo_0001F0),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
// LOAD_MODEL_FROM_GEO(54,0x0e0001f0),
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(local_area_vcutm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,-6143,5734,-6143),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_vcutm_1_[] = {
AREA(1,Geo_vcutm_1_0x461428),
TERRAIN(col_vcutm_1_0x7009750),
SET_BACKGROUND_MUSIC(0,9),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
MACRO_OBJECTS('local_macro_objects_vcutm_1_')END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,-6143,6734,-6143,0,0,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,4600,250,-4500,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(54,154,-1919,-6256,0,270,0,0x70000, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(54,-2047,-3378,-2047,0,0,0,0x70000, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(55,3251,-1082,-6256,0,270,0,0x14b0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(55,2355,-1901,-6256,0,270,0,0x14b0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(55,1459,-1594,-6256,0,90,0,0x14b0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(55,-1151,-2413,-6256,0,270,0,0x14b0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(85,4506,26,-6246,0,0,0,0x20000, bhvCapSwitch,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,18,1,10,0),
WARP_NODE(243,16,1,7,0),
WARP_NODE(240,16,1,8,0),
WARP_NODE(241,16,1,6,0),
const MacroObject local_macro_objects_vcutm_1_[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,62102,2951,62460,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,60825,1594,63004,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,59584,65143,64395,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,3980,300,59316,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,4200,0,60596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,4740,0,60596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,4740,0,61136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,4460,0,60836,3),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,4200,0,60596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,4740,0,60596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,4740,0,61136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,63436,62260,20,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,63436,62736,61670,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,63391,63376,59573,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,59616,4575,60918,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60796,3581,61682,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60809,65309,64375,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62118,64977,64700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64936,64136,59236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,900,64136,59236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2750,64736,59236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4509,0,60009,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63796,62296,1580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63136,62296,600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63796,62296,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63136,62296,64457,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,62616,62296,880,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,61536,62296,1600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,59516,62560,1240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63436,62696,61670,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,60936,5760,59396,0),
MACRO_OBJECT_END(),
};RETURN()
};
