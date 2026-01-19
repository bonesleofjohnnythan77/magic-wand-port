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
#include "levels/pss/header.h"
extern u8 _pss_segment_ESegmentRomStart[]; 
extern u8 _pss_segment_ESegmentRomEnd[];
#include "levels/castle_courtyard/header.h"
const LevelScript level_pss_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_courtyardSegmentRomStart, _castle_courtyardSegmentRomEnd),
LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE,  spiky_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,     castle_courtyard_geo_000200),
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
JUMP_LINK(local_area_pss_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,270,5632,6451,-5631),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x4b8010),
TERRAIN(col_pss_1_0x700e490),
SET_BACKGROUND_MUSIC(0,9),
TERRAIN_TYPE(6),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
MACRO_OBJECTS('local_macro_objects_pss_1_')END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(0,5632,6751,-5631,0,270,0,0xa0000, bhvAirborneWarp,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,27,1,10,0),
WARP_NODE(243,6,1,32,0),
WARP_NODE(240,6,1,38,0),
WARP_NODE(241,6,1,35,0),
const MacroObject local_macro_objects_pss_1_[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62303,4688,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59900,4331,60482,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59556,3453,945,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62666,2837,2300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3930,274,2425,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5174,61,3200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5707,65408,4565,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5194,65226,5845,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3640,64993,6450,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2550,64836,6050,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1821,64615,4616,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,65516,62994,59232,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64339,62607,60844,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62971,62268,62011,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,60627,61903,61318,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59246,61599,62991,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,90,3580,6140,60356,149),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,3000,6180,59896,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,5423,6140,58996,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,780,5613,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,2360,5979,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,1880,64096,60,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,1860,63776,63816,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,1860,64336,1680,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,1860,64316,1700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,1880,64076,80,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,1860,63716,63856,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,59156,60986,6320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,59156,61036,5980,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up_sliding,180,1847,64575,3863,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,260,2580,2280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,64656,2880,2280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64727,5245,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,63127,4877,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59136,61390,64946,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59136,61201,1409,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59136,61006,3481,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,61091,4490,60000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,59273,4150,61527,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1854,63404,61246,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_1,0,59151,61336,5770,0),
MACRO_OBJECT_END(),
};RETURN()
};
