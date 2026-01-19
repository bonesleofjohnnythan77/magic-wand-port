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
#include "levels/bowser_1/header.h"
extern u8 _bowser_1_segment_ESegmentRomStart[]; 
extern u8 _bowser_1_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bowser_1_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bowser_1_segment_ESegmentRomStart, _bowser_1_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom43482816_skybox_mio0SegmentRomStart,_SkyboxCustom43482816_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
LOAD_MODEL_FROM_GEO(58, purple_star_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bowser_1_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,0,4096,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_1_1_[] = {
AREA(1,Geo_bowser_1_1_0x28c1700),
TERRAIN(col_bowser_1_1_0xe012810),
SET_BACKGROUND_MUSIC(0,25),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bowser_1_1_),
JUMP_LINK(local_warps_bowser_1_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_1_1_[] = {
OBJECT_WITH_ACTS(0,-1731,-735,2640,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-3123,151,3887,0,-154,0,0xb0000, bhvBowser,31),
OBJECT_WITH_ACTS(88,-2238,2084,2068,0,-219,0,0x0, bhvOneThwomp,31),
OBJECT_WITH_ACTS(88,-3726,-1566,4292,0,129,0,0x50000, bhvChainChompGate,31),
OBJECT_WITH_ACTS(88,359,109,-1029,0,-33,0,0x50000, bhvChainChompGate,31),
OBJECT_WITH_ACTS(88,-1371,-760,-1070,0,0,0,0x50000, bhvChainChompGate,31),
OBJECT_WITH_ACTS(88,740,417,-39,0,0,0,0x0, bhvOneThwomp,31),
OBJECT_WITH_ACTS(88,240,687,807,0,-135,0,0x0, bhvThwomp2,31),
OBJECT_WITH_ACTS(128,-3529,-760,-2035,0,-23,0,0x0, bhvCannon,31),
OBJECT_WITH_ACTS(88,2241,-760,-512,0,133,0,0x0, bhvBooInCastle,31),
OBJECT_WITH_ACTS(58,-3754,-1484,4316,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(58,-2537,2243,-2320,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(58,2327,2240,-2465,0,42,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(58,403,209,-1102,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(58,1913,-625,-1008,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(88,1878,-760,-997,0,116,0,0x0, bhvWfBreakableWallLeft,31),
OBJECT_WITH_ACTS(88,-2529,2084,-2336,0,44,0,0x0, bhvWfBreakableWallLeft,31),
OBJECT_WITH_ACTS(88,2310,2084,-2469,0,-40,0,0x0, bhvWfBreakableWallLeft,31),
OBJECT_WITH_ACTS(0,-696,2553,-79,0,0,0,0x0, bhvHiddenStar,31),
OBJECT_WITH_ACTS(128,3400,-760,-1850,0,-141,0,0x0, bhvCannon,31),
OBJECT_WITH_ACTS(128,-111,-760,-4003,0,-84,0,0x0, bhvCannon,31),
OBJECT_WITH_ACTS(128,3297,-760,1847,0,0,0,0x0, bhvCannon,31),
OBJECT_WITH_ACTS(128,-3476,-760,1883,0,22,0,0x0, bhvCannon,31),
OBJECT_WITH_ACTS(128,-111,-760,3854,0,0,0,0x0, bhvCannon,31),
OBJECT_WITH_ACTS(88,-1441,-760,153,0,0,0,0x0, bhvPillarBase,31),
OBJECT_WITH_ACTS(88,-2978,-1901,2705,0,0,0,0x0, bhvPillarBase,31),
OBJECT_WITH_ACTS(88,-2053,2084,-551,0,0,0,0x0, bhvPillarBase,31),
OBJECT_WITH_ACTS(88,877,2084,-985,0,0,0,0x0, bhvPillarBase,31),
OBJECT_WITH_ACTS(88,1135,-760,155,0,0,0,0x0, bhvPillarBase,31),
OBJECT_WITH_ACTS(88,-1815,-1901,3218,0,-40,0,0x0, bhvOneThwomp,31),
OBJECT_WITH_ACTS(88,91,-760,2155,0,183,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(88,-2688,-760,184,0,139,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(88,589,2204,-368,0,0,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(88,-838,2084,373,0,0,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(88,2142,2084,2313,0,-135,0,0x0, bhvOneThwomp,31),
OBJECT_WITH_ACTS(128,-124,2204,-80,0,0,0,0x0, bhvCannon,31),
OBJECT_WITH_ACTS(88,-250,-760,-562,0,-161,0,0x0, bhvThwomp2,31),
OBJECT_WITH_ACTS(88,-122,2084,-1058,0,1,0,0x50000, bhvChainChompGate,31),
OBJECT_WITH_ACTS(88,920,-760,-2518,0,-59,0,0x50000, bhvChainChompGate,31),
OBJECT_WITH_ACTS(88,-3490,-760,-2019,0,59,0,0x50000, bhvChainChompGate,31),
RETURN()
};
const LevelScript local_warps_bowser_1_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,7,1,14,0),
WARP_NODE(241,7,1,3,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
