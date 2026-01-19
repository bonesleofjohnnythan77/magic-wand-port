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
#include "levels/bowser_3/header.h"
extern u8 _bowser_3_segment_ESegmentRomStart[]; 
extern u8 _bowser_3_segment_ESegmentRomEnd[];
const LevelScript level_bowser_3_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bowser_3_segment_7SegmentRomStart, _bowser_3_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bowser_3SegmentRomStart, _bowser_3SegmentRomEnd),
LOAD_RAW(0x0E, _bowser_3_segment_ESegmentRomStart, _bowser_3_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(6,_group12_mio0SegmentRomStart,_group12_mio0SegmentRomEnd),
LOAD_RAW(13,_group12_geoSegmentRomStart,_group12_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_1,  bowser_3_geo_000290),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_2,  bowser_3_geo_0002A8),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_3,  bowser_3_geo_0002C0),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_4,  bowser_3_geo_0002D8),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_5,  bowser_3_geo_0002F0),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_6,  bowser_3_geo_000308),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_7,  bowser_3_geo_000320),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_8,  bowser_3_geo_000338),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_9,  bowser_3_geo_000350),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_10, bowser_3_geo_000368),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,            bowser_3_geo_000380),
// LOAD_MODEL_FROM_GEO(54,0x0e000290),
// LOAD_MODEL_FROM_GEO(55,0x0e0002a8),
// LOAD_MODEL_FROM_GEO(56,0x0e0002c0),
// LOAD_MODEL_FROM_GEO(57,0x0e0002d8),
// LOAD_MODEL_FROM_GEO(58,0x0e0002f0),
// LOAD_MODEL_FROM_GEO(59,0x0e000308),
// LOAD_MODEL_FROM_GEO(60,0x0e000320),
// LOAD_MODEL_FROM_GEO(61,0x0e000338),
// LOAD_MODEL_FROM_GEO(62,0x0e000350),
// LOAD_MODEL_FROM_GEO(63,0x0e000368),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
JUMP_LINK(script_func_global_13),
JUMP_LINK(local_area_bowser_3_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,183,0,307,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_3_1_[] = {
AREA(1,Geo_bowser_3_1_0x4d1888),
TERRAIN(col_bowser_3_1_0x70049c8),
SET_BACKGROUND_MUSIC(0,25),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_bowser_3_1_),
JUMP_LINK(local_warps_bowser_3_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_3_1_[] = {
OBJECT_WITH_ACTS(0,0,1307,0,0,183,0,0xa0000, bhvSpinAirborneCircleWarp,31),
OBJECT_WITH_ACTS(54,0,0,0,0,0,0,0x10000, bhvFallingBowserPlatform,31),
OBJECT_WITH_ACTS(55,0,0,0,0,0,0,0x20000, bhvFallingBowserPlatform,31),
OBJECT_WITH_ACTS(56,0,0,0,0,0,0,0x30000, bhvFallingBowserPlatform,31),
OBJECT_WITH_ACTS(57,0,0,0,0,0,0,0x40000, bhvFallingBowserPlatform,31),
OBJECT_WITH_ACTS(58,0,0,0,0,0,0,0x50000, bhvFallingBowserPlatform,31),
OBJECT_WITH_ACTS(59,0,0,0,0,0,0,0x60000, bhvFallingBowserPlatform,31),
OBJECT_WITH_ACTS(60,0,0,0,0,0,0,0x70000, bhvFallingBowserPlatform,31),
OBJECT_WITH_ACTS(61,0,0,0,0,0,0,0x80000, bhvFallingBowserPlatform,31),
OBJECT_WITH_ACTS(62,0,0,0,0,0,0,0x90000, bhvFallingBowserPlatform,31),
OBJECT_WITH_ACTS(63,0,0,0,0,0,0,0xa0000, bhvFallingBowserPlatform,31),
OBJECT_WITH_ACTS(179,-2122,512,-2912,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(179,-3362,512,1121,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(179,0,512,3584,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(179,3363,512,1121,0,0,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(179,2123,512,-2912,0,0,0,0x0, bhvBowserBomb,31),
RETURN()
};
const LevelScript local_warps_bowser_3_1_[] = {
WARP_NODE(0,25,1,10,0),
WARP_NODE(10,34,1,10,0),
WARP_NODE(241,21,1,12,0),
RETURN()
};
