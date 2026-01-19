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
#include "areas/2/custom.model.inc.h"
#include "levels/ddd/header.h"
extern u8 _ddd_segment_ESegmentRomStart[]; 
extern u8 _ddd_segment_ESegmentRomEnd[];
const LevelScript level_ddd_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _dddSegmentRomStart, _dddSegmentRomEnd),
LOAD_RAW(0x0E, _ddd_segment_ESegmentRomStart, _ddd_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group4_mio0SegmentRomStart,_group4_mio0SegmentRomEnd),
LOAD_RAW(12,_group4_geoSegmentRomStart,_group4_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB_DOOR, ddd_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB,      ddd_geo_0004A0),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_POLE,            ddd_geo_000450),
// LOAD_MODEL_FROM_GEO(54,0x0e000478),
// LOAD_MODEL_FROM_GEO(55,0x0e0004a0),
// LOAD_MODEL_FROM_GEO(56,0x0e000450),
// LOAD_MODEL_FROM_GEO(84,0x05008d14),
// LOAD_MODEL_FROM_DL(87,0x05013cb8,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_5),
JUMP_LINK(script_func_global_14),
JUMP_LINK(local_area_ddd_1_),
JUMP_LINK(local_area_ddd_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,180,-3071,3000,500),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ddd_1_[] = {
AREA(1,Geo_ddd_1_0x495f20),
TERRAIN(col_ddd_1_0x700d310),
SET_BACKGROUND_MUSIC(0,5),
TERRAIN_TYPE(5),
JUMP_LINK(local_objects_ddd_1_),
JUMP_LINK(local_warps_ddd_1_),
MACRO_OBJECTS('local_macro_objects_ddd_1_')END_AREA(),
RETURN()
};
const LevelScript local_objects_ddd_1_[] = {
OBJECT_WITH_ACTS(0,-3071,3000,0,0,7,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(86,-3071,-270,0,0,0,0,0x0, bhvSushiShark,31),
OBJECT_WITH_ACTS(86,-3071,-4270,0,0,0,0,0x0, bhvSushiShark,31),
OBJECT_WITH_ACTS(0,-3071,-130,0,0,0,0,0x0, bhvFish3,31),
OBJECT_WITH_ACTS(0,-3071,-4270,0,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(0,-3071,-2000,0,0,0,0,0x0, bhvChirpChirp,31),
OBJECT_WITH_ACTS(0,-3071,-3000,0,0,0,0,0x0, bhvChirpChirp,31),
OBJECT_WITH_ACTS(87,-3174,-4915,102,0,0,0,0x0, bhvWhirlpool,31),
OBJECT_WITH_ACTS(0,-2400,-4607,125,0,0,0,0x1000000, bhvTreasureChests,63),
OBJECT_WITH_ACTS(84,-4640,-1380,40,0,0,0,0x4000000, bhvMantaRay,62),
RETURN()
};
const LevelScript local_warps_ddd_1_[] = {
WARP_NODE(10,23,1,10,0),
WARP_NODE(240,6,3,53,0),
WARP_NODE(241,6,3,103,0),
const MacroObject local_macro_objects_ddd_1_[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,62656,60416,63686,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,90,60776,60416,580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,62026,60416,1950,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,60776,60436,580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,60776,60456,580,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,64536,61286,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,60890,60921,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,63732,62976,1292,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,61776,60976,660,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,61296,60750,1180,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,315,60696,64399,1860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63356,60417,1720,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64076,60417,1300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64216,60417,840,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,61956,63256,64416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,63516,62076,65416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,0,61286,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,63536,61286,0,0),
MACRO_OBJECT_END(),
};RETURN()
};
const LevelScript local_area_ddd_2_[] = {
AREA(2,Geo_ddd_2_0x495fd0),
TERRAIN(col_ddd_2_0x700de70),
SET_BACKGROUND_MUSIC(0,5),
TERRAIN_TYPE(5),
JUMP_LINK(local_objects_ddd_2_),
JUMP_LINK(local_warps_ddd_2_),
MACRO_OBJECTS('local_macro_objects_ddd_2_')END_AREA(),
RETURN()
};
const LevelScript local_objects_ddd_2_[] = {
OBJECT_WITH_ACTS(54,0,0,0,0,0,0,0x0, bhvBowserSubDoor,31),
OBJECT_WITH_ACTS(55,0,0,0,0,0,0,0x0, bhvBowsersSub,31),
OBJECT_WITH_ACTS(56,5120,1005,3584,0,180,0,0x1e0000, bhvDDDPole,31),
OBJECT_WITH_ACTS(56,5605,1005,3380,0,270,0,0x150000, bhvDDDPole,31),
OBJECT_WITH_ACTS(56,1800,1005,1275,0,0,0,0xb0000, bhvDDDPole,31),
OBJECT_WITH_ACTS(56,4000,1005,1075,0,180,0,0xb0000, bhvDDDPole,31),
OBJECT_WITH_ACTS(56,1830,1005,520,0,270,0,0x140000, bhvDDDPole,31),
OBJECT_WITH_ACTS(56,4000,1005,1275,0,0,0,0xb0000, bhvDDDPole,31),
OBJECT_WITH_ACTS(56,5760,1005,360,0,270,0,0x170000, bhvDDDPole,31),
OBJECT_WITH_ACTS(56,3310,1005,-1945,0,0,0,0x170000, bhvDDDPole,31),
OBJECT_WITH_ACTS(56,3550,1005,-2250,0,0,0,0xd0000, bhvDDDPole,31),
OBJECT_WITH_ACTS(0,3404,-3319,-489,0,0,0,0x0, bhvJetStream,31),
OBJECT_WITH_ACTS(122,3900,850,-600,0,0,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(0,5513,1200,900,0,0,0,0x2000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(0,3404,-3319,-489,0,0,0,0x3000000, bhvJetStreamRingSpawner,63),
OBJECT_WITH_ACTS(122,2030,-3700,-2780,0,0,0,0x5000000, bhvStar,63),
RETURN()
};
const LevelScript local_warps_ddd_2_[] = {
WARP_NODE(240,6,3,53,0),
WARP_NODE(241,6,3,103,0),
WARP_NODE(243,16,1,30,0),
const MacroObject local_macro_objects_ddd_2_[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,6800,500,64686,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,6800,500,65386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,6800,110,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6075,65436,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5875,100,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5675,100,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5475,300,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5275,300,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5075,500,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,4875,500,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6275,65436,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6475,65436,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4680,1155,63336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3525,1155,63286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3850,1111,3550,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4400,1288,3595,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2974,1015,3584,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5550,1015,3575,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3300,1111,63636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2100,1025,63936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,2061,62213,2246,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,5661,62613,64121,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,90,1273,61430,2320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,180,3086,110,6120,53),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,6420,61430,63510,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,6340,61430,64123,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,135,1966,61430,3226,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,180,3886,61530,5130,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5740,710,3900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5740,510,4100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5740,310,4300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5740,110,4500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,2999,61444,4430,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,4876,61449,4430,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,3892,61506,61706,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,3923,110,5953,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,938,153,4107,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5940,110,4500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,1614,928,922,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1414,1020,622,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1814,1020,622,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1814,1020,1222,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1414,1020,1222,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1414,1020,922,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1814,1020,922,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_koopa_shell_underwater,0,3886,61486,5100,0),
MACRO_OBJECT_END(),
};RETURN()
};
