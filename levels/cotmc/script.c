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
#include "levels/cotmc/header.h"
extern u8 _cotmc_segment_ESegmentRomStart[]; 
extern u8 _cotmc_segment_ESegmentRomEnd[];
#include "levels/totwc/header.h"
const LevelScript level_cotmc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _totwcSegmentRomStart, _totwcSegmentRomEnd),
LOAD_RAW(0x0E, _cotmc_segment_ESegmentRomStart, _cotmc_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160),
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
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_cotmc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,90,-4185,20,-47),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_cotmc_1_[] = {
AREA(1,Geo_cotmc_1_0x4beb80),
TERRAIN(col_cotmc_1_0x700a508),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_cotmc_1_),
JUMP_LINK(local_warps_cotmc_1_),
MACRO_OBJECTS('local_macro_objects_cotmc_1_')END_AREA(),
RETURN()
};
const LevelScript local_objects_cotmc_1_[] = {
OBJECT_WITH_ACTS(0,-4185,1020,-47,0,90,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,0,-200,-7000,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(85,0,363,-6144,0,0,0,0x10000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,0,500,-7373,0,0,0,0x0, bhvWaterfallSoundLoop,31),
OBJECT_WITH_ACTS(0,0,500,3584,0,0,0,0x0, bhvWaterfallSoundLoop,31),
RETURN()
};
const LevelScript local_warps_cotmc_1_[] = {
WARP_NODE(10,28,1,10,0),
WARP_NODE(240,6,3,52,0),
WARP_NODE(241,6,3,102,0),
WARP_NODE(243,16,1,20,0),
const MacroObject local_macro_objects_cotmc_1_[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,62616,220,65516,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,64156,240,740,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,65176,300,65336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,360,200,64416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,400,256,61236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,300,620,60256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,65196,260,62916,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,0,65086,58536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,900,260,61916,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,0,65366,63876,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,65516,65325,61596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,270,65465,20,720,123),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,200,65245,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,980,260,62106,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64996,65184,59596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65236,450,59296,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65336,65136,58856,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,250,450,59136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,540,65175,59196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,980,260,61726,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,65516,180,2060,0),
MACRO_OBJECT_END(),
};RETURN()
};
