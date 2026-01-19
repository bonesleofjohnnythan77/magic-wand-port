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
#include "levels/wmotr/header.h"
extern u8 _wmotr_segment_ESegmentRomStart[]; 
extern u8 _wmotr_segment_ESegmentRomEnd[];
#include "levels/totwc/header.h"
const LevelScript level_wmotr_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _totwcSegmentRomStart, _totwcSegmentRomEnd),
LOAD_RAW(0x0E, _wmotr_segment_ESegmentRomStart, _wmotr_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_wmotr_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,270,-67,1669,-16),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wmotr_1_[] = {
AREA(1,Geo_wmotr_1_0x4cdb20),
TERRAIN(col_wmotr_1_0x7010688),
SET_BACKGROUND_MUSIC(0,9),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_wmotr_1_),
JUMP_LINK(local_warps_wmotr_1_),
MACRO_OBJECTS('local_macro_objects_wmotr_1_')END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_1_[] = {
OBJECT_WITH_ACTS(0,-67,2669,-16,0,270,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,3996,-2739,5477,0,0,0,0x520000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-2911,3564,-3967,0,0,0,0x540000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-3258,3359,-3946,0,0,0,0x690000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-2639,3154,-4369,0,0,0,0x7d0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-2980,4048,-4248,0,0,0,0x240000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-3290,3636,-4477,0,0,0,0x4d0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-160,1950,-470,0,0,0,0x0, bhvHiddenRedCoinStar,31),
RETURN()
};
const LevelScript local_warps_wmotr_1_[] = {
WARP_NODE(10,31,1,10,0),
WARP_NODE(240,6,2,56,0),
WARP_NODE(241,6,2,109,0),
WARP_NODE(243,16,1,10,0),
const MacroObject local_macro_objects_wmotr_1_[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,61080,827,191,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,3712,62796,5200,128),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb_buddy_opens_cannon,0,3684,62824,4660,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,62486,2100,61336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,62792,4899,61097,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,3995,63686,5478,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62556,3990,61288,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2735,3140,62451,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61896,4600,61336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4400,240,80,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3440,62856,5240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64936,64176,5040,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,65136,1960,65416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,65296,64456,4520,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,3600,63056,5440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,3960,520,440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,62336,4880,61496,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,62776,2320,61456,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,61906,65106,3180,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,320,1725,40,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62976,4600,60736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,65486,2180,1900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,39,62686,1550,2280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,84,1710,64886,4850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,2350,2300,240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,62276,3370,61591,0),
MACRO_OBJECT_END(),
};RETURN()
};
