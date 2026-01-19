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
#include "levels/castle_courtyard/header.h"
extern u8 _castle_courtyard_segment_ESegmentRomStart[]; 
extern u8 _castle_courtyard_segment_ESegmentRomEnd[];
const LevelScript level_castle_courtyard_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_courtyardSegmentRomStart, _castle_courtyardSegmentRomEnd),
LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE,  spiky_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,     castle_courtyard_geo_000200),
// LOAD_MODEL_FROM_GEO(3,0x0e000200),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(39, wooden_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,-14,0,-201),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x4af888),
TERRAIN(col_castle_courtyard_1_0x70059a8),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
MACRO_OBJECTS('local_macro_objects_castle_courtyard_1_')END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(84,-2360,-100,-2712,0,0,0,0x1050000, bhvBooWithCage,31),
OBJECT_WITH_ACTS(0,0,51,-1000,0,180,0,0xa0000, bhvLaunchStarCollectWarp,31),
OBJECT_WITH_ACTS(0,0,51,-1000,0,180,0,0xb0000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(0,0,200,-1652,0,0,0,0x0, bhvAmbientSounds,31),
OBJECT_WITH_ACTS(0,-2700,0,-1652,0,0,0,0x0, bhvBirdsSoundLoop,31),
OBJECT_WITH_ACTS(0,2700,0,-1652,0,0,0,0x10000, bhvBirdsSoundLoop,31),
OBJECT_WITH_ACTS(84,-3217,100,-101,0,0,0,0x0, bhvCourtyardBooTriplet,31),
OBJECT_WITH_ACTS(84,3317,100,-1701,0,0,0,0x0, bhvCourtyardBooTriplet,31),
OBJECT_WITH_ACTS(84,-71,1,-1387,0,0,0,0x0, bhvCourtyardBooTriplet,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(5,4,1,10,0),
WARP_NODE(10,26,1,10,0),
WARP_NODE(11,26,1,11,0),
WARP_NODE(1,6,1,2,0),
WARP_NODE(241,16,1,3,0),
const MacroObject local_macro_objects_castle_courtyard_1_[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,225,3180,20,330,158),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,135,62356,20,330,159),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,300,0,61936,102),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,65236,0,61936,160),
MACRO_OBJECT_END(),
};RETURN()
};
