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
#include "levels/totwc/header.h"
extern u8 _totwc_segment_ESegmentRomStart[]; 
extern u8 _totwc_segment_ESegmentRomEnd[];
const LevelScript level_totwc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _totwcSegmentRomStart, _totwcSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160),
// LOAD_MODEL_FROM_GEO(3,0x0e000160),
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
JUMP_LINK(local_area_totwc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,90,-4095,2935,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x4c2888),
TERRAIN(col_totwc_1_0x7007a18),
SET_BACKGROUND_MUSIC(0,9),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
MACRO_OBJECTS('local_macro_objects_totwc_1_')END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,-4095,2935,0,0,90,0,0xa0000, bhvFlyingWarp,31),
OBJECT_WITH_ACTS(0,800,-1700,0,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(85,0,-2047,10,0,0,0,0x0, bhvCapSwitch,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,29,1,10,0),
WARP_NODE(243,6,1,32,0),
WARP_NODE(240,6,1,38,0),
WARP_NODE(241,6,1,35,0),
const MacroObject local_macro_objects_totwc_1_[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,0,63776,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,0,64536,3000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,62036,65336,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,4500,1400,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,0,600,61536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65436,800,61536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62036,0,100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,100,64736,3000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4500,1600,65436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,100,800,61536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62036,0,65436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65436,64736,3000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4500,1600,100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,2913,1200,62595,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,3954,1400,63719,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1554,1000,61856,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,62879,400,62794,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,64051,600,61908,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,62305,200,64022,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,63339,65136,2142,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,62480,65336,1310,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,64392,64936,2742,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,3680,1800,1439,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,2080,2000,2080,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,920,2200,1920,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,65496,2400,1520,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,64576,2600,1040,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,63776,2800,600,0),
MACRO_OBJECT_END(),
};RETURN()
};
