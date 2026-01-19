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
#include "levels/bowser_2/header.h"
extern u8 _bowser_2_segment_ESegmentRomStart[]; 
extern u8 _bowser_2_segment_ESegmentRomEnd[];
const LevelScript level_bowser_2_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bowser_2_segment_7SegmentRomStart, _bowser_2_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bowser_2SegmentRomStart, _bowser_2SegmentRomEnd),
LOAD_RAW(0x0E, _bowser_2_segment_ESegmentRomStart, _bowser_2_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(6,_group12_mio0SegmentRomStart,_group12_mio0SegmentRomEnd),
LOAD_RAW(13,_group12_geoSegmentRomStart,_group12_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BOWSER_2_TILTING_ARENA, bowser_2_geo_000170),
// LOAD_MODEL_FROM_GEO(54,0x0e000170),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
JUMP_LINK(script_func_global_13),
JUMP_LINK(local_area_bowser_2_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,180,0,1229,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_2_1_[] = {
AREA(1,Geo_bowser_2_1_0x4ceb78),
TERRAIN(col_bowser_2_1_0x70019f0),
SET_BACKGROUND_MUSIC(0,7),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_bowser_2_1_),
JUMP_LINK(local_warps_bowser_2_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_2_1_[] = {
OBJECT_WITH_ACTS(0,0,2229,0,0,180,0,0xa0000, bhvSpinAirborneCircleWarp,31),
OBJECT_WITH_ACTS(54,0,0,0,0,90,0,0x0, bhvTiltingBowserLavaPlatform,31),
OBJECT_WITH_ACTS(179,4,1329,3598,0,90,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(179,3584,1329,0,0,90,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(179,0,1329,-3583,0,90,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(179,-3583,1329,0,0,90,0,0x0, bhvBowserBomb,31),
RETURN()
};
const LevelScript local_warps_bowser_2_1_[] = {
WARP_NODE(10,33,1,10,0),
WARP_NODE(240,6,3,54,0),
WARP_NODE(241,19,1,12,0),
RETURN()
};
