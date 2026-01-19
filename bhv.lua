-- Custom Behavior Helpers --

-- Copied from the Star Road Port (thx to who made the function)
--- Replacement for DROP_TO_FLOOR()
function object_drop_to_floor(obj)
    local x = obj.oPosX
    local y = obj.oPosY
    local z = obj.oPosZ

    local floorHeight = find_floor_height(x, y + 200, z)
    obj.oPosY = floorHeight
    obj.oMoveFlags = (obj.oMoveFlags | OBJ_MOVE_ON_GROUND)
end

-- Custom Behaviors --

--Monkey that dies

local function monkey_npcthatdies_init(o)
    o.oFlags = OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_HOLDABLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oAnimations = gObjectAnimations.ukiki_seg5_anims_05015784
    o.oInteractType = INTERACT_TEXT
    object_drop_to_floor(o)
    obj_set_hitbox_radius_and_height(o, 100, 60)
    obj_init_animation(o, 0)
    o.oBobombBuddyRole = 0
    cur_obj_set_home_once()
    bhv_bobomb_buddy_init()
    o.oIntangibleTimer = 0
	
	if get_star_count() >= 15 then 
        o.activeFlags = ACTIVE_FLAG_DEACTIVATED
    end
	
end

--Monkey that doesn't die

local function monkey_npc_init(o)
    o.oFlags = OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO | OBJ_FLAG_HOLDABLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oAnimations = gObjectAnimations.ukiki_seg5_anims_05015784
    o.oInteractType = INTERACT_TEXT
    object_drop_to_floor(o)
    obj_set_hitbox_radius_and_height(o, 100, 60)
    obj_init_animation(o, 0)
    o.oBobombBuddyRole = 0
    cur_obj_set_home_once()
    bhv_bobomb_buddy_init()
    o.oIntangibleTimer = 0
	
end

local function monkey_npc_loop(o)
    bhv_bobomb_buddy_loop() -- Generates script errors if used as the loop function for some reason
end

function bhv_custom_star_door_wall_loop(o)
    if get_star_count() >= 15 then
        o.activeFlags = ACTIVE_FLAG_DEACTIVATED
    end
end

function bhv_custom_red_coin_loop(o)

if o.oBehParams2ndByte == 12 then

    bhv_ssl_moving_pyramid_wall_loop()

end

end

--- @param o Object
local function bhv_custom_bowser_loop(o)
    local np = gNetworkPlayers[0]
    if np.currAreaSyncValid and np.currLevelSyncValid and np.currLevelNum == LEVEL_BOWSER_1 then
        -- force bowser into do nothing action when not displaying cutscene 
        -- they dont want you to know this but a lot of old hacks like this actually take a bit from star road
        if o.oAction ~= 5 and o.oAction ~= 6 and o.oAction ~= 20 then
            o.oAction = 4
            o.oSubAction = 11
        end
    end
end

--- @param o Object
function skipviewcheck(o)

    o.header.gfx.skipInViewCheck = true

end

function tellmeaction(o)

    djui_chat_message_create("action: "..tostring(o.oAction))
    djui_chat_message_create("timer: "..tostring(o.oTimer))

end



function bhv_koopa_update_custom(o)


    bhv_koopa_update()
    
    local m = gMarioStates[0]
	local shell = obj_get_nearest_object_with_behavior_id(o, id_bhvKoopaShell)     
    local np = gNetworkPlayers[m.playerIndex]
    local courseIndex = np.currCourseNum - COURSE_MIN
    local saveSlot = get_current_save_file_num() - 1
    local starFlags = save_file_get_star_flags(saveSlot, courseIndex)
    if courseIndex < 0 then return end
        

   

    if o.oAction == 0 then

        if (starFlags & (1 << 5)) ~= 0 then
            obj_set_model_extended(o, E_MODEL_TRANSPARENT_STAR)
        else
            obj_set_model_extended(o, E_MODEL_STAR)
        end
        cur_obj_init_animation(0)
        

    end

    if o.oAction >= 1 then

    obtained = true       
    obj_mark_for_deletion(shell)
    o.activeFlags = ACTIVE_FLAG_DEACTIVATED

    end

end



hook_behavior(id_bhvRedCoin, OBJ_LIST_LEVEL, false, nil, bhv_custom_red_coin_loop)
hook_behavior(id_bhvBowser, OBJ_LIST_GENACTOR, false, nil, bhv_custom_bowser_loop, "bhvBowser")
hook_behavior(id_bhvWfBreakableWallRight, OBJ_LIST_GENACTOR, true, monkey_npcthatdies_init, monkey_npc_loop)
hook_behavior(id_bhvKoopaShellUnderwater, OBJ_LIST_GENACTOR, true, monkey_npc_init, monkey_npc_loop)

