const BehaviorScript Bhv_Custom_0x13003f48[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvNewId),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(ttm_seg7_collision_pitoune_2),
SET_HOME(),
SET_FLOAT(oDrawingDistance,19455),
CALL_NATIVE( bhv_custom_star_door_wall_loop),
BEGIN_LOOP(),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvSeesawPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvSeesawPlatform),
OR_INT(oFlags,8265),
LOAD_COLLISION_DATA(lll_seg7_collision_hexagonal_platform),
BEGIN_LOOP(),
CALL_NATIVE( bhv_seesaw_platform_update),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvInSunkenShip3[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvInSunkenShip3),
LOAD_COLLISION_DATA(lll_seg7_collision_hexagonal_platform),
SET_HOME(),
SET_FLOAT(oDrawingDistance,19455),
CALL_NATIVE( bhv_platform_normals_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_tilting_inverted_pyramid_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvThwomp2[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvThwomp2),
SCALE(0,140),
LOAD_COLLISION_DATA(thwomp_seg5_collision_0500B7D0),
OR_INT(oFlags,73),
BEGIN(OBJ_LIST_PLAYER),
ADD_FLOAT(oPosY,1),
SET_HOME(),
SET_FLOAT(oDrawingDistance,4000),
BEGIN_LOOP(),
CALL_NATIVE( bhv_grindel_thwomp_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};


const BehaviorScript bhvThiHugeIslandTop[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvThiHugeIslandTop),
LOAD_COLLISION_DATA(wooden_boat_collision),
OR_INT(oFlags,1),
ADD_FLOAT(oPosY,1),
SET_HOME(),
SCALE(0,140),
SET_FLOAT(oDrawingDistance,19455),
BEGIN_LOOP(),
CALL_NATIVE( load_object_collision_model),
CALL_NATIVE( bhv_sl_walking_penguin_loop),
END_LOOP(),
};

const BehaviorScript bhvOneThwomp[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvNewId),
LOAD_COLLISION_DATA(thwomp_seg5_collision_0500B7D0),
OR_INT(oFlags,73),
SCALE(0,255),
ADD_FLOAT(oPosY,1),
SET_HOME(),
SET_FLOAT(oDrawingDistance,4000),
BEGIN_LOOP(),
CALL_NATIVE( bhv_grindel_thwomp_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x13000b94[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvNewId),
LOAD_COLLISION_DATA(thwomp_seg5_collision_0500B7D0),
OR_INT(oFlags,73),
//SCALE(0,255),
ADD_FLOAT(oPosY,1),
SET_HOME(),
SET_FLOAT(oDrawingDistance,4000),
BEGIN_LOOP(),
CALL_NATIVE( bhv_grindel_thwomp_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvChainChompGate[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvChainChompGate),
LOAD_COLLISION_DATA(thwomp_seg5_collision_0500B7D0),
OR_INT(oFlags,73),
SET_HOME(),
SET_FLOAT(oDrawingDistance,19455),
BEGIN_LOOP(),
CALL_NATIVE( bhv_exclamation_box_loop),
CALL_NATIVE( bhv_pushable_loop),
END_LOOP(),
};

const BehaviorScript bhvHiddenStarTrigger[] = {
BEGIN(OBJ_LIST_LEVEL),
ID(id_bhvHiddenStarTrigger),
OR_INT(oFlags,1),
SET_HITBOX(100,100),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hidden_star_trigger_loop),
CALL_NATIVE( bhv_collect_star_loop),
END_LOOP(),
};

const BehaviorScript bhvWfBreakableWallLeft[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvWfBreakableWallLeft),
LOAD_COLLISION_DATA(thwomp_seg5_collision_0500B7D0),
OR_INT(oFlags,201),
SET_HITBOX(300,400),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_wf_breakable_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvPillarBase[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvPillarBase),
LOAD_COLLISION_DATA(thwomp_seg5_collision_0500B7D0),
OR_INT(oFlags,1033),
SET_HOME(),
SCALE(0,140),
SET_FLOAT(oDrawingDistance,19455),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_moving_octagonal_mesh_platform_loop),
CALL_NATIVE( bhv_squarish_path_moving_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvThwomp[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvThwomp),
LOAD_COLLISION_DATA(thwomp_seg5_collision_0500B7D0),
OR_INT(oFlags,73),
SET_FLOAT(oDrawingDistance,19455),
CALL_NATIVE( bhv_butterfly_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_butterfly_loop),
CALL_NATIVE( bhv_butterfly_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvRotatingPlatform[] = {
BEGIN(OBJ_LIST_GENACTOR),
ID(id_bhvRotatingPlatform),
OR_INT(oFlags,9289),
LOAD_ANIMATIONS(oAnimations, skeeter_seg6_anims_06007DE0),
SET_INTERACT_TYPE(8388608),
DROP_TO_FLOOR(),
SET_HITBOX(100,60),
ANIMATE(0),
SET_INT(oYoshiChosenHome,0),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
};

const BehaviorScript bhvLllRotatingHexagonalPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvLllRotatingHexagonalPlatform),
OR_INT(oFlags,9),
LOAD_COLLISION_DATA(c3_platform_collision),
SET_HOME(),
CALL_NATIVE( skipviewcheck),
BEGIN_LOOP(),
SET_INT(oAngleVelYaw,256),
ADD_INT(oMoveAngleYaw,256),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvCirclingAmp[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvCirclingAmp),
OR_INT(oFlags,73),
LOAD_COLLISION_DATA(c3_wood_collision),
SET_HOME(),
SCALE(0,170),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x13000004[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvNewId),
LOAD_COLLISION_DATA(c3_wood_collision),
SET_HOME(),
SCALE(0,173),
SET_FLOAT(oDrawingDistance,19455),
CALL_NATIVE( bhv_custom_star_door_wall_loop),
BEGIN_LOOP(),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript bhvLllDrawbridge[] = {
BEGIN(OBJ_LIST_GENACTOR),
ID(id_bhvLllDrawbridge),
OR_INT(oFlags,9289),
LOAD_ANIMATIONS(oAnimations, skeeter_seg6_anims_06007DE0),
SET_INTERACT_TYPE(8388608),
DROP_TO_FLOOR(),
SET_HITBOX(100,60),
ANIMATE(0),
SET_INT(oYoshiChosenHome,0),
SET_HOME(),
CALL_NATIVE( skipviewcheck),
CALL_NATIVE( bhv_custom_star_door_wall_loop),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
};

const BehaviorScript bhvTowerDoor[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvTowerDoor),
OR_INT(oFlags,193),
LOAD_COLLISION_DATA(c3_platform_collision),
SET_HITBOX(100,100),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_tower_door_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x13002420[] = {
BEGIN(OBJ_LIST_GENACTOR),
ID(id_bhvNewId),
OR_INT(oFlags,9289),
LOAD_ANIMATIONS(oAnimations, ukiki_seg5_anims_05015784),
CALL_NATIVE( bhv_collect_star_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ukiki_loop),
END_LOOP(),
};

const BehaviorScript bhvRockSolid[] = {
BEGIN(OBJ_LIST_SURFACE),
ID(id_bhvRockSolid),
OR_INT(oFlags,65),
SET_FLOAT(oDrawingDistance,19455),
LOAD_COLLISION_DATA(breakable_box_seg8_collision_08012D70),
BEGIN_LOOP(),
CALL_NATIVE( bhv_exclamation_box_loop),
END_LOOP(),
};

const BehaviorScript bhvUkiki[] = {
BEGIN(OBJ_LIST_PUSHABLE),
ID(id_bhvUkiki),
OR_INT(oFlags,8257),
LOAD_ANIMATIONS(oAnimations, koopa_seg6_anims_06011364),
ANIMATE(9),
SET_HOME(),
SET_FLOAT(oDrawingDistance,19455),
SET_FLOAT(oCollisionDistance,19455),
SCALE(0,160),
CALL_NATIVE( bhv_collect_star_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_koopa_update_custom),
END_LOOP(),
};