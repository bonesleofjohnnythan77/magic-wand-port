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
#include "levels/sa/header.h"
extern u8 _sa_segment_ESegmentRomStart[]; 
extern u8 _sa_segment_ESegmentRomEnd[];
#include "levels/bits/header.h"
const LevelScript level_sa_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bitsSegmentRomStart, _bitsSegmentRomEnd),
LOAD_RAW(0x0E, _sa_segment_ESegmentRomStart, _sa_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(5,_group4_mio0SegmentRomStart,_group4_mio0SegmentRomEnd),
LOAD_RAW(12,_group4_geoSegmentRomStart,_group4_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           bits_geo_000430),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           bits_geo_000448),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           bits_geo_000460),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           bits_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           bits_geo_000490),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           bits_geo_0004A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           bits_geo_0004C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           bits_geo_0004D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           bits_geo_0004F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           bits_geo_000508),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           bits_geo_000520),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           bits_geo_000538),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           bits_geo_000550),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           bits_geo_000568),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           bits_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           bits_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           bits_geo_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           bits_geo_0005C8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SLIDING_PLATFORM,       bits_geo_0005E0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TWIN_SLIDING_PLATFORMS, bits_geo_0005F8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_OCTAGONAL_PLATFORM,     bits_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_BLUE_PLATFORM,          bits_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_FERRIS_WHEEL_AXLE,      bits_geo_000640),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_ARROW_PLATFORM,         bits_geo_000658),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SEESAW_PLATFORM,        bits_geo_000670),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TILTING_W_PLATFORM,     bits_geo_000688),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE,              bits_geo_0006A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME1,       bits_geo_0006B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME2,       bits_geo_0006D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME3,       bits_geo_0006E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME4,       bits_geo_000700),
// LOAD_MODEL_FROM_GEO(84,0x05008d14),
// LOAD_MODEL_FROM_DL(87,0x05013cb8,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
JUMP_LINK(script_func_global_5),
JUMP_LINK(script_func_global_14),
JUMP_LINK(local_area_sa_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,90,0,-1535,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sa_1_[] = {
AREA(1,Geo_sa_1_0x46c310),
TERRAIN(col_sa_1_0x7003000),
SET_BACKGROUND_MUSIC(0,133),
TERRAIN_TYPE(5),
JUMP_LINK(local_objects_sa_1_),
JUMP_LINK(local_warps_sa_1_),
MACRO_OBJECTS('local_macro_objects_sa_1_')END_AREA(),
RETURN()
};
const LevelScript local_objects_sa_1_[] = {
OBJECT_WITH_ACTS(0,0,-1535,0,0,90,0,0xa0000, bhvSwimmingWarp,31),
OBJECT_WITH_ACTS(0,0,-1000,0,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,0,-1000,0,0,0,0,0x20000, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,0,-4250,0,0,0,0,0x0, bhvHiddenRedCoinStar,31),
RETURN()
};
const LevelScript local_warps_sa_1_[] = {
WARP_NODE(10,20,1,10,0),
WARP_NODE(240,6,1,39,0),
WARP_NODE(241,6,1,40,0),
const MacroObject local_macro_objects_sa_1_[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63136,60929,63136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63136,60929,2400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2400,60929,2400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2400,60929,63136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,0,63336,64036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64036,63336,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,0,63336,1500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1500,63336,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,1927,62627,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,0,63136,64036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,64036,63136,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,0,63136,1500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,1500,63136,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,0,62036,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,0,61736,0,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,0,62036,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,64536,61456,63796,0),
MACRO_OBJECT_END(),
};RETURN()
};
