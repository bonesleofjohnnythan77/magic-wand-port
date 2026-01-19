#This file is provided only as a reference for manually recoding functions.

#This function is called from Behavior  bhvFishGroup
#It has virtual address 0x802A8CDC and rom address 0x63CDC
 bhv_fish_group_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lh	$t6, 0x1250($t6)
	addiu	$at, $zero, 0xf
	beq	$t6, $at, 0x28
	nop	
	addiu	$at, $zero, 7
	bne	$t6, $at, 0x54
	nop	
	lui	$t7, 0x8033
	lw	$t7, -0x2a2c($t7)
	andi	$t8, $t7, 1
	beqz	$t8, 0x54
	nop	
	lui	$a0, 0x8036
	lui	$a2, 0x1300
	addiu	$a2, $a2, 0x46c
	lw	$a0, 0x1160($a0)
	jal	 spawn_object
	addiu	$a1, $zero, 0xa4
	b	0x5c
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvTankFishGroup
#It has virtual address 0x802B9790 and rom address 0x74790
 bhv_tank_fish_group_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x2c($sp)
	sw	$s0, 0x28($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
	addiu	$at, $zero, 1
	beq	$s0, $at, 0xd8
	nop	
	addiu	$at, $zero, 2
	beq	$s0, $at, 0x114
	nop	
	b	0x128
	nop	
	lui	$t7, 0x8036
	lh	$t7, 0x1250($t7)
	addiu	$at, $zero, 0xf
	beq	$t7, $at, 0x60
	nop	
	addiu	$at, $zero, 7
	bne	$t7, $at, 0xd0
	nop	
	sw	$zero, 0x38($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x802A4120 and rom address 0x5F120
 bhv_init_room:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x14
	jal	 is_item_in_array
	lh	$a0, -0x2208($a0)
	beqz	$v0, 0xc8
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $sp, 0x1c
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 find_floor
	lw	$a2, 0xa8($t6)
	swc1	$f0, 0x18($sp)
	lw	$t7, 0x1c($sp)
	beqz	$t7, 0xc0
	nop	
	lw	$t8, 0x1c($sp)
	lb	$t9, 5($t8)
	beqz	$t9, 0x78
	nop	
	lw	$t0, 0x1c($sp)
	lui	$t2, 0x8036
	lw	$t2, 0x1160($t2)
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x80276910 and rom address 0x31910
 bhv_toad_message_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 save_file_get_flags
	nop	
	sw	$v0, 0x34($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
	jal	 save_file_get_total_star_count
	addiu	$a0, $a0, -1
	sw	$v0, 0x30($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x18
	andi	$t9, $t8, 0xff
	sw	$t9, 0x2c($sp)
	addiu	$t0, $zero, 1
	sw	$t0, 0x28($sp)
	lw	$s0, 0x2c($sp)
	addiu	$at, $zero, 0x4c
	beq	$s0, $at, 0xb8
	nop	
	addiu	$at, $zero, 0x52
	beq	$s0, $at, 0x84
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x8027684C and rom address 0x3184C
 bhv_toad_message_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 2($t6)
	andi	$t8, $t7, 1
	beqz	$t8, 0xac
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	sw	$zero, 0x190($t9)
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
	lw	$t1, 0x110($t0)
	sltiu	$at, $t1, 5
	beqz	$at, 0xac
	nop	
	sll	$t1, $t1, 2
	lui	$at, 0x8033
	addu	$at, $at, $t1
	lw	$t1, 0x6f40($at)
	jr	$t1
	nop	
#This function is called from Behavior  bhvStarDoor
#It has virtual address 0x802F09F0 and rom address 0xAB9F0
 bhv_castle_cannon_grate_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
	jal	 save_file_get_total_star_count
	addiu	$a0, $a0, -1
	slti	$at, $v0, 0xf
	bnez	$at, 0x38
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	sh	$zero, 0x74($t6)
	b	0x40
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvStarDoor
#It has virtual address 0x803839CC and rom address 0x13E9CC
 load_object_collision_model:
	beq	$gp, $v1, 0x10e00
	bne	$a2, $a1, -0x1011c
	andi	$s5, $at, 0xf001
	beql	$zero, $s3, 0x7eb4
#This function is called from Behavior  Bhv_Custom_0x13000b14
#It has virtual address 0x802ACC3C and rom address 0x67C3C
 bhv_door_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x24($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lwc1	$f6, 0xa8($t7)
	swc1	$f6, 0x20($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lwc1	$f12, 0x24($sp)
	lw	$a2, 0x20($sp)
	addiu	$a3, $sp, 0x1c
	jal	 find_floor
	lwc1	$f14, 0xa4($t8)
	lw	$t9, 0x1c($sp)
	beqz	$t9, 0x64
	nop	
#This function is called from Behavior  Bhv_Custom_0x13000b14
#It has virtual address 0x802ACAC8 and rom address 0x67AC8
 bhv_door_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	sw	$zero, 0x1c($sp)
	lw	$t6, 0x1c($sp)
	lui	$t8, 0x8033
	addiu	$at, $zero, -1
	sll	$t7, $t6, 3
	addu	$t8, $t8, $t7
	lw	$t8, 0x260($t8)
	beq	$t8, $at, 0x98
	nop	
	lw	$t9, 0x1c($sp)
	lui	$a0, 0x8033
	sll	$t0, $t9, 3
	addu	$a0, $a0, $t0
	jal	 cur_obj_clear_interact_status_flag
	lw	$a0, 0x260($a0)
	beqz	$v0, 0x6c
	nop	
	jal	 set_door_camera_event
#This function is called from Behavior  bhvWarp
#It has virtual address 0x802AAA60 and rom address 0x65A60
 bhv_warp_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0xd8
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0x188($t8)
	sra	$t0, $t9, 0x18
	andi	$t1, $t0, 0xff
	sh	$t1, 6($sp)
	lhu	$t2, 6($sp)
	bnez	$t2, 0x54
	nop	
	lui	$at, 0x4248
	lui	$t3, 0x8036
	lw	$t3, 0x1160($t3)
	mtc1	$at, $f4
	b	0xc0
#This function is called from Behavior  Bhv_Custom_0x13001c94
#It has virtual address 0x802BA608 and rom address 0x75608
 bhv_rotating_clock_arm_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd8($t6)
	sh	$t7, 0x1a($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1158($t8)
	addiu	$a3, $sp, 0x1c
	lwc1	$f12, 0xa0($t8)
	lwc1	$f14, 0xa4($t8)
	jal	 find_floor
	lw	$a2, 0xa8($t8)
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	swc1	$f0, 0xe8($t9)
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
	lw	$t1, 0x14c($t0)
	bnez	$t1, 0x98
#This function is called from Behavior  bhvDecorativePendulum
#It has virtual address 0x802F7978 and rom address 0xB2978
 bhv_decorative_pendulum_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	addiu	$t6, $zero, 0x100
	sw	$t6, 0x11c($t7)
	jal	 bhv_init_room
	nop	
	b	0x28
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvDecorativePendulum
#It has virtual address 0x802F79B0 and rom address 0xB29B0
 bhv_decorative_pendulum_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd8($t6)
	blez	$t7, 0x34
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0x11c($t8)
	addiu	$t0, $t9, -8
	b	0x48
	sw	$t0, 0x11c($t8)
	lui	$t1, 0x8036
#This function is called from Behavior  bhvCameraLakitu
#It has virtual address 0x80303984 and rom address 0xBE984
 bhv_camera_lakitu_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	beqz	$t7, 0x44
	nop	
	lui	$t8, 0x8034
	lb	$t8, -0x4d92($t8)
	addiu	$at, $zero, 1
	beq	$t8, $at, 0x3c
	nop	
	lui	$a0, 0x8036
	jal	 obj_mark_for_deletion
#This function is called from Behavior  bhvCameraLakitu
#It has virtual address 0x80303F64 and rom address 0xBEF64
 bhv_camera_lakitu_update:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x24($sp)
	sw	$s0, 0x20($sp)
	sdc1	$f20, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
	bnez	$t8, 0x220
	nop	
	lui	$a0, 0x8036
	lw	$a0, 0x1160($a0)
	addiu	$a1, $zero, 0x14
	addiu	$a2, $zero, 0x28
#This function is called from Behavior  bhvWaterLevelPillar
#It has virtual address 0x802BA19C and rom address 0x7519C
 bhv_water_level_pillar_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0x200
	beqz	$t6, 0x2c
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	addiu	$t7, $zero, 1
	sw	$t7, 0xf8($t8)
	b	0x34
	nop	
	lw	$ra, 0x14($sp)
#This function is called from Behavior  bhvWaterLevelPillar
#It has virtual address 0x802BA1E0 and rom address 0x751E0
 bhv_water_level_pillar_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf8($t6)
	beqz	$t7, 0x2c
	nop	
	jal	 water_level_pillar_drained
	nop	
	b	0x34
	nop	
	jal	 water_level_pillar_undrained
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvDddWarp
#It has virtual address 0x802B9E94 and rom address 0x74E94
 bhv_ddd_warp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lb	$t6, 0x131c($t6)
	andi	$t7, $t6, 2
	beqz	$t7, 0x38
	nop	
	lui	$a0, 0x707
	jal	 segmented_to_virtual
	addiu	$a0, $a0, 0x768c
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	b	0x50
	sw	$v0, 0x218($t8)
#This function is called from Behavior  bhvMips
#It has virtual address 0x802F8490 and rom address 0xB3490
 bhv_mips_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	addiu	$a1, $zero, -1
	jal	 save_file_get_star_flags
	addiu	$a0, $a0, -1
	sb	$v0, 0x1f($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
	jal	 save_file_get_total_star_count
	addiu	$a0, $a0, -1
#This function is called from Behavior  bhvMips
#It has virtual address 0x802F8DAC and rom address 0xB3DAC
 bhv_mips_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
	beqz	$s0, 0x4c
	nop	
	addiu	$at, $zero, 1
	beq	$s0, $at, 0x5c
	nop	
	addiu	$at, $zero, 2
	beq	$s0, $at, 0x6c
	nop	
#This function is called from Behavior  bhvFadingWarp
#It has virtual address 0x802AAB54 and rom address 0x65B54
 bhv_fading_warp_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0xd8
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0x188($t8)
	sra	$t0, $t9, 0x18
	andi	$t1, $t0, 0xff
	sh	$t1, 6($sp)
	lhu	$t2, 6($sp)
	bnez	$t2, 0x54
#This function is called from Behavior  bhvCannonClosed
#It has virtual address 0x802E7C90 and rom address 0xA2C90
 bhv_cannon_closed_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 save_file_is_cannon_unlocked
	nop	
	addiu	$at, $zero, 1
	bne	$v0, $at, 0xa4
	nop	
	lui	$a0, 0x8036
	lui	$a2, 0x1300
	addiu	$a2, $a2, 0x4a8
	lw	$a0, 0x1160($a0)
	jal	 spawn_object
	addiu	$a1, $zero, 0x80
	sw	$v0, 0x1c($sp)
#This function is called from Behavior  bhvCannonClosed
#It has virtual address 0x802E7E54 and rom address 0xA2E54
 bhv_cannon_closed_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
	addiu	$at, $zero, 1
	beq	$s0, $at, 0xac
	nop	
	addiu	$at, $zero, 2
	beq	$s0, $at, 0xf0
	nop	
#This function is called from Behavior  Bhv_Custom_0x13002bd4
#It has virtual address 0x802C79D8 and rom address 0x829D8
 bhv_whomp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0xce4
	jal	 cur_obj_move_standard
	addiu	$a0, $zero, -0x14
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 9
	lw	$t7, 0x14c($t6)
	beq	$t7, $at, 0x80
#This function is called from Behavior  bhvPitBowlingBall
#It has virtual address 0x802EF21C and rom address 0xAA21C
 bhv_bob_pit_bowling_ball_init:
	lui	$at, 0x4140
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
	lui	$at, 0x3f80
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	mtc1	$at, $f6
	nop	
	swc1	$f6, 0x170($t7)
	lui	$at, 0x4000
	lui	$t8, 0x8036
#This function is called from Behavior  bhvPitBowlingBall
#It has virtual address 0x802EF274 and rom address 0xAA274
 bhv_bob_pit_bowling_ball_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 object_step
	nop	
	sh	$v0, 0x1a($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $sp, 0x1c
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 find_floor_height_and_data
	lw	$a2, 0xa8($t6)
	lw	$t7, 0x1c($sp)
	mtc1	$zero, $f6
#This function is called from Behavior  bhvChainChomp
#It has virtual address 0x80300E40 and rom address 0xBBE40
 bhv_chain_chomp_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
	addiu	$at, $zero, 1
	beq	$s0, $at, 0x50
	nop	
	addiu	$at, $zero, 2
	beq	$s0, $at, 0x60
	nop	
#This function is called from Behavior  bhvBobBowlingBallSpawner
#It has virtual address 0x802EEEB4 and rom address 0xA9EB4
 bhv_generic_bowling_ball_spawner_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x144($t6)
	beqz	$a0, 0x38
	nop	
	addiu	$at, $zero, 1
	beq	$a0, $at, 0x6c
	nop	
	addiu	$at, $zero, 2
	beq	$a0, $at, 0xa4
	nop	
	b	0xd8
	nop	
#This function is called from Behavior  bhvBobBowlingBallSpawner
#It has virtual address 0x802EEF9C and rom address 0xA9F9C
 bhv_generic_bowling_ball_spawner_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sdc1	$f20, 0x10($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 0x100
	lw	$t7, 0x154($t6)
	bne	$t7, $at, 0x30
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	sw	$zero, 0x154($t8)
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
#This function is called from Behavior  bhvHiddenStarTrigger
#It has virtual address 0x802F31BC and rom address 0xAE1BC
 bhv_hidden_star_trigger_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
	jal	 obj_check_if_collided_with_object
	lw	$a0, 0x1160($a0)
	addiu	$at, $zero, 1
	bne	$v0, $at, 0xb8
	nop	
	lui	$a0, 0x1300
	jal	 cur_obj_nearest_object_with_behavior
	addiu	$a0, $a0, 0x3efc
	sw	$v0, 0x1c($sp)
#This function is called from Behavior  bhvHiddenStarTrigger
#It has virtual address 0x802F25B0 and rom address 0xAD5B0
 bhv_collect_star_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	addiu	$t8, $t7, 0x800
	sw	$t8, 0xd4($t6)
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	lw	$t0, 0x134($t9)
	andi	$t1, $t0, 0x8000
	beqz	$t1, 0x4c
	nop	
	lui	$a0, 0x8036
#This function is called from Behavior  bhvHiddenStar
#It has virtual address 0x802F3014 and rom address 0xAE014
 bhv_hidden_star_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$a0, 0x1300
	jal	 count_objects_with_behavior
	addiu	$a0, $a0, 0x3f1c
	sh	$v0, 0x36($sp)
	lh	$t6, 0x36($sp)
	bnez	$t6, 0xac
	nop	
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$a3, 0x1300
	addiu	$a3, $a3, 0x3e3c
	lwc1	$f4, 0xa0($t7)
#This function is called from Behavior  bhvHiddenStar
#It has virtual address 0x802F30F0 and rom address 0xAE0F0
 bhv_hidden_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x34
	nop	
	addiu	$at, $zero, 1
	beq	$s0, $at, 0x64
	nop	
	b	0xb0
	nop	
	lui	$t7, 0x8036
#This function is called from Behavior  bhvThwomp2
#It has virtual address 0x802AD34C and rom address 0x6834C
 bhv_grindel_thwomp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x298
	b	0x1c
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvGoomba
#It has virtual address 0x802FF408 and rom address 0xBA408
 bhv_goomba_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	andi	$t8, $t7, 3
	sw	$t8, 0xf4($t6)
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	lui	$at, 0x8033
	lw	$t0, 0xf4($t9)
#This function is called from Behavior  bhvGoomba
#It has virtual address 0x802FF96C and rom address 0xBA96C
 bhv_goomba_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	jal	0x802fb87c
	lwc1	$f12, 0xf8($t6)
	beqz	$v0, 0x1a0
	nop	
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
#This function is called from Behavior  bhvExclamationBox
#It has virtual address 0x802C19C0 and rom address 0x7C9C0
 bhv_exclamation_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4000
	mtc1	$at, $f12
	jal	 cur_obj_scale
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0xc20
	b	0x2c
	nop	
#This function is called from Behavior  bhvBobombBuddy
#It has virtual address 0x802E76AC and rom address 0xA26AC
 bhv_bobomb_buddy_init:
	lui	$at, 0x4020
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
	lui	$at, 0x8034
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lwc1	$f6, -0x7b14($at)
	swc1	$f6, 0x170($t7)
#This function is called from Behavior  bhvBobombBuddy
#It has virtual address 0x802E7C4C and rom address 0xA2C4C
 bhv_bobomb_buddy_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bobomb_buddy_actions
	nop	
	lui	$a0, 0x8036
	lw	$a0, 0x1160($a0)
	jal	 curr_obj_random_blink
	addiu	$a0, $a0, 0xf4
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	sw	$zero, 0x134($t6)
#This function is called from Behavior  bhvStar
#It has virtual address 0x802F24F4 and rom address 0xAD4F4
 bhv_collect_star_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x18
	andi	$t9, $t8, 0xff
	sb	$t9, 0x1f($sp)
	lui	$a0, 0x8033
	lui	$a1, 0x8034
	lh	$a1, -0x453a($a1)
#This function is called from Behavior  bhvHiddenRedCoinStar
#It has virtual address 0x802F2C84 and rom address 0xADC84
 bhv_hidden_red_coin_star_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$t6, 0x8034
	lh	$t6, -0x453a($t6)
	addiu	$at, $zero, 3
	beq	$t6, $at, 0x34
	nop	
	lui	$a0, 0x8036
	lui	$a2, 0x1300
	addiu	$a2, $a2, 0x556c
	lw	$a0, 0x1160($a0)
#This function is called from Behavior  bhvHiddenRedCoinStar
#It has virtual address 0x802F2D8C and rom address 0xADD8C
 bhv_hidden_red_coin_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8036
	lw	$t7, 0xf4($t6)
	sb	$t7, 0x13fe($at)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$s0, 0x14c($t8)
#This function is called from Behavior  bhvUkiki
#It has virtual address 0x802FD7F8 and rom address 0xB87F8
 bhv_koopa_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5063
	ori	$t6, $t6, 0xb081
	sw	$t6, 0x1c4($t7)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0xf8($t8)
#This function is called from Behavior  bhvRedCoin
#It has virtual address 0x802F2E6C and rom address 0xADE6C
 bhv_red_coin_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $sp, 0x24
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 find_floor
	lw	$a2, 0xa8($t6)
	swc1	$f0, 0x20($sp)
	lui	$a0, 0x1300
#This function is called from Behavior  bhvRedCoin
#It has virtual address 0x802F2F2C and rom address 0xADF2C
 bhv_red_coin_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x134($t6)
	andi	$t8, $t7, 0x8000
	beqz	$t8, 0xd0
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	lw	$t0, 0x68($t9)
#This function is called from Behavior  bhvBlueCoinSwitch
#It has virtual address 0x802C242C and rom address 0x7D42C
 bhv_blue_coin_switch_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x4040
	mtc1	$at, $f12
	jal	 cur_obj_scale
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x50
#This function is called from Behavior  bhvHiddenBlueCoin
#It has virtual address 0x802C22B8 and rom address 0x7D2B8
 bhv_hidden_blue_coin_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
	addiu	$at, $zero, 1
	beq	$s0, $at, 0x98
	nop	
#This function is called from Behavior  bhvBobomb
#It has virtual address 0x802E6A2C and rom address 0xA1A2C
 bhv_bobomb_init:
	lui	$at, 0x4020
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
	lui	$at, 0x8034
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lwc1	$f6, -0x7b20($at)
	swc1	$f6, 0x170($t7)
#This function is called from Behavior  bhvBobomb
#It has virtual address 0x802E742C and rom address 0xA242C
 bhv_bobomb_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $zero, 0xfa0
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 is_point_within_radius_of_mario
	lw	$a2, 0xa8($t6)
	beqz	$v0, 0x158
#This function is called from Behavior  bhvCoinFormation
#It has virtual address 0x802ABEE4 and rom address 0x66EE4
 bhv_coin_formation_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 8
	andi	$t9, $t8, 0xff
	sw	$t9, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvCoinFormation
#It has virtual address 0x802ABF0C and rom address 0x66F0C
 bhv_coin_formation_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
#This function is called from Behavior  bhvTree
#It has virtual address 0x802C63E8 and rom address 0x813E8
 bhv_pole_base_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x4120
	mtc1	$at, $f6
	lwc1	$f4, 0xa4($t6)
	lui	$t7, 0x8036
#This function is called from Behavior  bhv1Up
#It has virtual address 0x802F3D30 and rom address 0xAED30
 bhv_1up_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_1up_common_init
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 1
	lw	$t7, 0x144($t6)
#This function is called from Behavior  bhv1Up
#It has virtual address 0x802F45B8 and rom address 0xAF5B8
 bhv_1up_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_1up_interact
	nop	
	lui	$a0, 0x8036
	lw	$a0, 0x1160($a0)
	jal	 set_object_visibility
	addiu	$a1, $zero, 0xbb8
#This function is called from Behavior  bhvJumpingBox
#It has virtual address 0x802B288C and rom address 0x6D88C
 bhv_jumping_box_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
	beqz	$s0, 0x4c
	nop	
#This function is called from Behavior  bhvHidden1upInPoleSpawner
#It has virtual address 0x802F4B78 and rom address 0xAFB78
 bhv_1up_hidden_in_pole_spawner_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $zero, 0x2bc
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 is_point_within_radius_of_mario
#This function is called from Behavior  bhvPillarBase
#It has virtual address 0x802BC0F0 and rom address 0x770F0
 bhv_lll_moving_octagonal_mesh_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x40
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvPillarBase
#It has virtual address 0x802B0BEC and rom address 0x6BBEC
 bhv_squarish_path_moving_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4120
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xb8($t6)
#This function is called from Behavior  bhvChainChompGate
#It has virtual address 0x802B15E8 and rom address 0x6C5E8
 bhv_pushable_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x3a0
	jal	 obj_set_hitbox
	lw	$a0, 0x1160($a0)
	lui	$t6, 0x8036
#This function is called from Behavior  bhvGoombaTripletSpawner
#It has virtual address 0x802FF214 and rom address 0xBA214
 bhv_goomba_triplet_spawner_update:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x1ac
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvPlatformOnTrack
#It has virtual address 0x80305100 and rom address 0xC0100
 bhv_platform_on_track_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
	bnez	$t8, 0x114
	nop	
#This function is called from Behavior  bhvPlatformOnTrack
#It has virtual address 0x80305A58 and rom address 0xC0A58
 bhv_platform_on_track_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
	beqz	$at, 0x88
	nop	
#This function is called from Behavior  bhvSmallPenguin
#It has virtual address 0x802BFA88 and rom address 0x7AA88
 bhv_small_penguin_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
	beqz	$s0, 0x4c
	nop	
#This function is called from Behavior  bhvMrBlizzard
#It has virtual address 0x8030803C and rom address 0xC303C
 bhv_mr_blizzard_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 1
	lw	$t7, 0x144($t6)
	bne	$t7, $at, 0x5c
	nop	
#This function is called from Behavior  bhvMrBlizzard
#It has virtual address 0x80308D6C and rom address 0xC3D6C
 bhv_mr_blizzard_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sdc1	$f20, 0x10($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
#This function is called from Behavior  bhvSnowmansBottom
#It has virtual address 0x802F0A40 and rom address 0xABA40
 bhv_snowmans_bottom_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x164($t6)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
#This function is called from Behavior  bhvSnowmansBottom
#It has virtual address 0x802F105C and rom address 0xAC05C
 bhv_snowmans_bottom_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
	beqz	$at, 0x154
	nop	
#This function is called from Behavior  bhvCcmTouchedStarSpawn
#It has virtual address 0x802B2340 and rom address 0x6D340
 bhv_ccm_touched_star_spawn_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lh	$t6, 0x125c($t6)
	andi	$t7, $t6, 1
	beqz	$t7, 0x88
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvTuxiesMother
#It has virtual address 0x802BF3C0 and rom address 0x7A3C0
 bhv_tuxies_mother_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	ori	$t8, $t7, 0x400
	sh	$t8, 0x74($t6)
	jal	 cur_obj_update_floor_and_walls
#This function is called from Behavior  bhvSnowmansHead
#It has virtual address 0x802F120C and rom address 0xAC20C
 bhv_snowmans_head_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$a0, 0x8033
	lui	$a1, 0x8034
	lh	$a1, -0x453a($a1)
	lh	$a0, -0x220c($a0)
	addiu	$a1, $a1, -1
	jal	 save_file_get_star_flags
#This function is called from Behavior  bhvSnowmansHead
#It has virtual address 0x802F1370 and rom address 0xAC370
 bhv_snowmans_head_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
	beqz	$at, 0x17c
	nop	
#This function is called from Behavior  bhvRacingPenguin
#It has virtual address 0x803118E4 and rom address 0xCC8E4
 bhv_racing_penguin_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8033
	lw	$t6, -0x26c4($t6)
	addiu	$at, $zero, 0x78
	lh	$t7, 0xaa($t6)
	bne	$t7, $at, 0x58
	nop	
#This function is called from Behavior  bhvRacingPenguin
#It has virtual address 0x80312070 and rom address 0xCD070
 bhv_racing_penguin_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 6
#This function is called from Behavior  bhvPenguinRaceFinishLine
#It has virtual address 0x80312168 and rom address 0xCD168
 bhv_penguin_race_finish_line_update:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	lh	$t8, 0x1b0($t7)
	bnez	$t8, 0x5c
	nop	
	lui	$at, 0x447a
	mtc1	$at, $f6
#This function is called from Behavior  bhvPenguinRaceShortcutCheck
#It has virtual address 0x80312200 and rom address 0xCD200
 bhv_penguin_race_shortcut_check_update:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x43fa
	mtc1	$at, $f6
	lwc1	$f4, 0x15c($t6)
	c.lt.s	$f4, $f6
	nop	
	bc1f	0x38
#This function is called from Behavior  bhvPlaysMusicTrackWhenTouched
#It has virtual address 0x802C5FDC and rom address 0x80FDC
 bhv_play_music_track_when_touched_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x5c
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvSeesawPlatform
#It has virtual address 0x80305C90 and rom address 0xC0C90
 bhv_seesaw_platform_update:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x1c($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	sw	$t7, 0x2c($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
#This function is called from Behavior  bhvInSunkenShip3
#It has virtual address 0x802BCF40 and rom address 0x77F40
 bhv_platform_normals_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$t7, $t6, 0x21c
	sw	$t7, 0x1c($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
#This function is called from Behavior  bhvInSunkenShip3
#It has virtual address 0x802BD058 and rom address 0x78058
 bhv_tilting_inverted_pyramid_loop:
	addiu	$sp, $sp, -0x80
	sw	$ra, 0x14($sp)
	sw	$zero, 0x3c($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$t7, $t6, 0x21c
	sw	$t7, 0x34($sp)
	lui	$t8, 0x8036
#This function is called from Behavior  bhvScuttlebugSpawn
#It has virtual address 0x802C6B6C and rom address 0x81B6C
 bhv_scuttlebug_spawn_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0xf0
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvLllRollingLog
#It has virtual address 0x802F3B98 and rom address 0xAEB98
 bhv_lll_rolling_log_init:
	lui	$at, 0x45a0
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xf8($t6)
	lui	$at, 0x45bc
	lui	$t7, 0x8036
#This function is called from Behavior  bhvLllRollingLog
#It has virtual address 0x802F36A4 and rom address 0xAE6A4
 bhv_rolling_log_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x1c($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
#This function is called from Behavior  bhvHeaveHo
#It has virtual address 0x802B2278 and rom address 0x6D278
 bhv_heave_ho_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x4000
	mtc1	$at, $f12
	jal	 cur_obj_scale
	nop	
	lui	$t6, 0x8036
#This function is called from Behavior  bhvLllSinkingRockBlock
#It has virtual address 0x802BC22C and rom address 0x7722C
 bhv_lll_sinking_rock_block_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a2, $zero, 0x7c
	addiu	$a3, $zero, -0x6e
	addiu	$a0, $t6, 0x104
	jal	 lll_octagonal_mesh_find_y_offset
#This function is called from Behavior  bhvScuttlebug
#It has virtual address 0x802C65C0 and rom address 0x815C0
 bhv_scuttlebug_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x150($t6)
	beqz	$t7, 0x54
#This function is called from Behavior  bhvSwoop
#It has virtual address 0x802FE8B4 and rom address 0xB98B4
 bhv_swoop_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
	bnez	$t8, 0xb8
#This function is called from Behavior  bhvSnufit
#It has virtual address 0x8030DC70 and rom address 0xC8C70
 bhv_snufit_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
	bnez	$t8, 0x338
#This function is called from Behavior  bhvHiddenObject
#It has virtual address 0x802B1AE0 and rom address 0x6CAE0
 bhv_hidden_object_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	bnez	$t7, 0x2c
	nop	
	jal	 hidden_breakable_box_actions
#This function is called from Behavior  Bhv_Custom_0x13001488
#It has virtual address 0x802B1278 and rom address 0x6C278
 bhv_purple_switch_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
	beqz	$at, 0x264
	nop	
#This function is called from Behavior  bhvBulletBill
#It has virtual address 0x802B3810 and rom address 0x6E810
 bhv_bullet_bill_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	sw	$t7, 0xf8($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvBulletBill
#It has virtual address 0x802B3BE0 and rom address 0x6EBE0
 bhv_bullet_bill_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x43c
	jal	 cur_obj_check_interacted
#This function is called from Behavior  bhvEyerokBoss
#It has virtual address 0x8030EA9C and rom address 0xC9A9C
 bhv_eyerok_boss_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvMontyMoleHole
#It has virtual address 0x803043F8 and rom address 0xBF3F8
 bhv_monty_mole_hole_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	bne	$t7, $t6, 0x3c
#This function is called from Behavior  bhvMontyMole
#It has virtual address 0x803044C0 and rom address 0xBF4C0
 bhv_monty_mole_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	sw	$zero, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvMontyMole
#It has virtual address 0x80304BA8 and rom address 0xBFBA8
 bhv_monty_mole_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5024
#This function is called from Behavior  bhvCheckerboardElevatorGroup
#It has virtual address 0x802B98FC and rom address 0x748FC
 bhv_checkerboard_elevator_group_init:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
#This function is called from Behavior  bhvCheckerboardElevatorGroup
#It has virtual address 0x802B9BB4 and rom address 0x74BB4
 bhv_checkerboard_platform_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	lw	$t8, 0x144($t7)
	sw	$t8, 0xfc($t6)
#This function is called from Behavior  bhvCheckerboardElevatorGroup
#It has virtual address 0x802B9BD8 and rom address 0x74BD8
 bhv_checkerboard_platform_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvChuckya
#It has virtual address 0x802AA0AC and rom address 0x650AC
 bhv_chuckya_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x41a0
	mtc1	$at, $f4
#This function is called from Behavior  bhvTripletButterfly
#It has virtual address 0x80313FC0 and rom address 0xCEFC0
 bhv_triplet_butterfly_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
#This function is called from Behavior  bhvButterfly
#It has virtual address 0x802E8F68 and rom address 0xA3F68
 bhv_butterfly_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	addiu	$a0, $zero, 1
	jal	 random_float
#This function is called from Behavior  bhvButterfly
#It has virtual address 0x802E96C8 and rom address 0xA46C8
 bhv_butterfly_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvBirdsSoundLoop
#It has virtual address 0x802F0898 and rom address 0xAB898
 bhv_birds_sound_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8034
	lw	$t6, -0x3430($t6)
#This function is called from Behavior  bhvWoodenPost
#It has virtual address 0x80300ECC and rom address 0xBBECC
 bhv_wooden_post_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvBreakableBox
#It has virtual address 0x802B1B2C and rom address 0x6CB2C
 bhv_breakable_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x3b0
#This function is called from Behavior  bhvFirePiranhaPlant
#It has virtual address 0x8030CDDC and rom address 0xC7DDC
 bhv_fire_piranha_plant_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8033
#This function is called from Behavior  bhvFirePiranhaPlant
#It has virtual address 0x8030D2F0 and rom address 0xC82F0
 bhv_fire_piranha_plant_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvCloud
#It has virtual address 0x8030369C and rom address 0xBE69C
 bhv_cloud_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvFlyGuy
#It has virtual address 0x802FF040 and rom address 0xBA040
 bhv_fly_guy_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvKoopa
#It has virtual address 0x802FBC4C and rom address 0xB6C4C
 bhv_koopa_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvSnowMoundSpawn
#It has virtual address 0x802F6448 and rom address 0xB1448
 bhv_snow_mound_spawn_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $zero, 0x1770
#This function is called from Behavior  bhvSLWalkingPenguin
#It has virtual address 0x802C863C and rom address 0x8363C
 bhv_sl_walking_penguin_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x42c8
	mtc1	$at, $f4
#This function is called from Behavior  bhvSLSnowmanWind
#It has virtual address 0x802C834C and rom address 0x8334C
 bhv_sl_snowman_wind_loop:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$zero, 0x34($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvBigChillBully
#It has virtual address 0x802EB104 and rom address 0xA6104
 bhv_big_bully_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	move	$a0, $zero
	lui	$t6, 0x8036
#This function is called from Behavior  bhvBigChillBully
#It has virtual address 0x802EB9D0 and rom address 0xA69D0
 bhv_bully_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	sw	$s0, 0x20($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvWdwSquareFloatingPlatform
#It has virtual address 0x802F6984 and rom address 0xB1984
 bhv_floating_platform_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 floating_platform_find_home_y
	nop	
#This function is called from Behavior  bhvArrowLift
#It has virtual address 0x802F6C0C and rom address 0xB1C0C
 bhv_arrow_lift_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvInitializeChangingWaterLevel
#It has virtual address 0x802C2930 and rom address 0x7D930
 bhv_init_changing_water_level_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x40
	nop	
#This function is called from Behavior  bhvWaterLevelDiamond
#It has virtual address 0x802C2A24 and rom address 0x7DA24
 bhv_water_level_diamond_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1184($t6)
#This function is called from Behavior  bhvWdwExpressElevator
#It has virtual address 0x802C08A8 and rom address 0x7B8A8
 bhv_wdw_express_elevator_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$zero, $f4
#This function is called from Behavior  bhvSkeeter
#It has virtual address 0x80313110 and rom address 0xCE110
 bhv_skeeter_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
#This function is called from Behavior  bhvPoleGrabbing
#It has virtual address 0x802A6C20 and rom address 0x61C20
 bhv_pole_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x10
#This function is called from Behavior  bhvWaterBombSpawner
#It has virtual address 0x80306084 and rom address 0xC1084
 bhv_water_bomb_spawner_update:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x4348
#This function is called from Behavior  bhvCirclingAmp
#It has virtual address 0x802EFD8C and rom address 0xAAD8C
 bhv_ssl_moving_pyramid_wall_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x14c($t6)
	beqz	$a0, 0x2c
#This function is called from Behavior  bhvTowerDoor
#It has virtual address 0x802AA700 and rom address 0x65700
 bhv_tower_door_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
#This function is called from Behavior  Bhv_Custom_0x13002420
#It has virtual address 0x802BBC0C and rom address 0x76C0C
 bhv_ukiki_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvKingBobomb
#It has virtual address 0x802A8064 and rom address 0x63064
 bhv_king_bobomb_loop:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x41a0
	mtc1	$at, $f4
#This function is called from Behavior  bhvYellowCoin
#It has virtual address 0x802AB650 and rom address 0x66650
 bhv_yellow_coin_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_set_behavior
	addiu	$a0, $a0, 0x91c
#This function is called from Behavior  bhvYellowCoin
#It has virtual address 0x802AB70C and rom address 0x6670C
 bhv_yellow_coin_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_coin_sparkles_init
	nop	
	lui	$t6, 0x8036
#This function is called from Behavior  bhvKoopaRaceEndpoint
#It has virtual address 0x802FD950 and rom address 0xB8950
 bhv_koopa_race_endpoint_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf4($t6)
#This function is called from Behavior  bhvThiBowlingBallSpawner
#It has virtual address 0x802EF0E8 and rom address 0xAA0E8
 bhv_thi_bowling_ball_spawner_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 0x100
#This function is called from Behavior  bhvBubba
#It has virtual address 0x803145D4 and rom address 0xCF5D4
 bhv_bubba_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x2c($sp)
	sw	$s0, 0x28($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvWigglerHead
#It has virtual address 0x80302154 and rom address 0xBD154
 bhv_wiggler_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvSlidingPlatform2
#It has virtual address 0x803091E0 and rom address 0xC41E0
 bhv_sliding_plat_2_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
#This function is called from Behavior  bhvSlidingPlatform2
#It has virtual address 0x80309354 and rom address 0xC4354
 bhv_sliding_plat_2_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
#This function is called from Behavior  bhvOctagonalPlatformRotating
#It has virtual address 0x80309454 and rom address 0xC4454
 bhv_rotating_octagonal_plat_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$a0, 0x8033
#This function is called from Behavior  bhvOctagonalPlatformRotating
#It has virtual address 0x803094D0 and rom address 0xC44D0
 bhv_rotating_octagonal_plat_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	lw	$t8, 0x118($t6)
	addu	$t9, $t7, $t8
#This function is called from Behavior  bhvRrRotatingBridgePlatform
#It has virtual address 0x802AF3FC and rom address 0x6A3FC
 bhv_rr_rotating_bridge_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
#This function is called from Behavior  bhvRrCruiserWing
#It has virtual address 0x802EF63C and rom address 0xAA63C
 bhv_rr_cruiser_wing_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	sw	$t7, 0xf4($t6)
	lui	$t8, 0x8036
#This function is called from Behavior  bhvRrCruiserWing
#It has virtual address 0x802EF66C and rom address 0xAA66C
 bhv_rr_cruiser_wing_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
#This function is called from Behavior  bhvSwingPlatform
#It has virtual address 0x8031326C and rom address 0xCE26C
 bhv_swing_platform_init:
	lui	$at, 0x4600
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
#This function is called from Behavior  bhvSwingPlatform
#It has virtual address 0x80313294 and rom address 0xCE294
 bhv_swing_platform_update:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd8($t6)
	sw	$t7, 4($sp)
#This function is called from Behavior  bhvDonutPlatformSpawner
#It has virtual address 0x80313354 and rom address 0xCE354
 bhv_donut_platform_spawner_update:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	addiu	$t6, $zero, 1
	sw	$t6, 0x38($sp)
	sw	$zero, 0x3c($sp)
#This function is called from Behavior  bhvRrElevatorPlatform
#It has virtual address 0x802ADDF8 and rom address 0x68DF8
 bhv_elevator_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$t0, 0x8033
#This function is called from Behavior  bhvRrElevatorPlatform
#It has virtual address 0x802ADF6C and rom address 0x68F6C
 bhv_elevator_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x318
#This function is called from Behavior  bhvAnimatesOnFloorSwitchPress
#It has virtual address 0x803094F8 and rom address 0xC44F8
 bhv_animates_on_floor_switch_press_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_nearest_object_with_behavior
	addiu	$a0, $a0, 0x1468
#This function is called from Behavior  bhvAnimatesOnFloorSwitchPress
#It has virtual address 0x80309530 and rom address 0xC4530
 bhv_animates_on_floor_switch_press_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x100($t6)
#This function is called from Behavior  bhvFlamethrower
#It has virtual address 0x802AF1E8 and rom address 0x6A1E8
 bhv_flamethrower_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
#This function is called from Behavior  bhvBreakableBoxSmall
#It has virtual address 0x802F5CD4 and rom address 0xB0CD4
 bhv_breakable_box_small_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4020
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvBreakableBoxSmall
#It has virtual address 0x802F6228 and rom address 0xB1228
 bhv_breakable_box_small_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvFireSpitter
#It has virtual address 0x8030D598 and rom address 0xC8598
 bhv_fire_spitter_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvBowserCourseRedCoinStar
#It has virtual address 0x802F328C and rom address 0xAE28C
 bhv_bowser_course_red_coin_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvBowserBomb
#It has virtual address 0x802ECC14 and rom address 0xA7C14
 bhv_bowser_bomb_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
#This function is called from Behavior  bhvSmallBully
#It has virtual address 0x802EB05C and rom address 0xA605C
 bhv_small_bully_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	move	$a0, $zero
	lui	$t6, 0x8036
#This function is called from Behavior  bhvCapSwitch
#It has virtual address 0x802A7170 and rom address 0x62170
 bhv_cap_switch_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0xac
#This function is called from Behavior  bhvBitfsSinkingPlatforms
#It has virtual address 0x802AEC40 and rom address 0x69C40
 bhv_bitfs_sinking_platform_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8038
	lhu	$t7, 0xf6($t6)
	lwc1	$f16, 0xa4($t6)
#This function is called from Behavior  bhvBitfsSinkingCagePlatform
#It has virtual address 0x802AECDC and rom address 0x69CDC
 bhv_bitfs_sinking_cage_platform_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	beqz	$t7, 0x84
	nop	
#This function is called from Behavior  bhvActivatedBackAndForthPlatform
#It has virtual address 0x803097A4 and rom address 0xC47A4
 bhv_activated_back_and_forth_platform_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
#This function is called from Behavior  bhvActivatedBackAndForthPlatform
#It has virtual address 0x803098C0 and rom address 0xC48C0
 bhv_activated_back_and_forth_platform_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1158($t6)
	lui	$t8, 0x8036
#This function is called from Behavior  bhvSquishablePlatform
#It has virtual address 0x802AEBC8 and rom address 0x69BC8
 bhv_squishable_platform_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8038
	mtc1	$zero, $f8
	lhu	$t7, 0xf6($t6)
#This function is called from Behavior  bhvWfTumblingBridge
#It has virtual address 0x802AD890 and rom address 0x68890
 bhv_tumbling_bridge_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x2dc
#This function is called from Behavior  bhvFerrisWheelAxle
#It has virtual address 0x80305E2C and rom address 0xC0E2C
 bhv_ferris_wheel_axle_init:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$a0, 0x8033
#This function is called from Behavior  bhvLllDrawbridgeSpawner
#It has virtual address 0x802ED498 and rom address 0xA8498
 bhv_lll_drawbridge_spawner_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a2, 0x1300
	addiu	$a2, $a2, 0x38e8
#This function is called from Behavior  bhvLllRotatingBlockWithFireBars
#It has virtual address 0x802BC618 and rom address 0x77618
 bhv_lll_rotating_block_fire_bars_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x830
#This function is called from Behavior  bhvLllRotatingHexagonalRing
#It has virtual address 0x802BCA74 and rom address 0x77A74
 bhv_lll_rotating_hexagonal_ring_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$at, 0x457a
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvLllSinkingRectangularPlatform
#It has virtual address 0x802BCDA8 and rom address 0x77DA8
 bhv_lll_sinking_rectangular_platform_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$at, 0x8033
	lwc1	$f4, 0x7c84($at)
	swc1	$f4, 0x1c($sp)
#This function is called from Behavior  bhvLllSinkingSquarePlatforms
#It has virtual address 0x802BCE58 and rom address 0x77E58
 bhv_lll_sinking_square_platforms_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$at, 0x3f00
	mtc1	$at, $f4
	nop	
#This function is called from Behavior  bhvLllFloatingWoodBridge
#It has virtual address 0x802BC728 and rom address 0x77728
 bhv_lll_floating_wood_bridge_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x2c($sp)
	sw	$s0, 0x28($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvMrI
#It has virtual address 0x802A6B7C and rom address 0x61B7C
 bhv_mr_i_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x84
#This function is called from Behavior  bhvBigBullyWithMinions
#It has virtual address 0x802EBC00 and rom address 0xA6C00
 bhv_big_bully_with_minions_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	addiu	$a0, $zero, 0x1166
	addiu	$a1, $zero, 0x133
	addiu	$a2, $zero, -0x1532
#This function is called from Behavior  bhvBigBullyWithMinions
#It has virtual address 0x802EBCE0 and rom address 0xA6CE0
 bhv_big_bully_with_minions_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	sw	$s0, 0x20($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvLllVolcanoFallingTrap
#It has virtual address 0x802F3A30 and rom address 0xAEA30
 bhv_volcano_trap_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvVolcanoSoundLoop
#It has virtual address 0x802F0820 and rom address 0xAB820
 bhv_volcano_sound_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x4103
	jal	 cur_obj_play_sound_1
	ori	$a0, $a0, 1
#This function is called from Behavior  bhvSushiShark
#It has virtual address 0x802C1A90 and rom address 0x7CA90
 bhv_sushi_shark_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f12, 0xa0($t6)
#This function is called from Behavior  bhvWhirlpool
#It has virtual address 0x802E7F70 and rom address 0xA2F70
 bhv_whirlpool_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	sw	$t7, 0xf4($t6)
	lui	$t8, 0x8036
#This function is called from Behavior  bhvWhirlpool
#It has virtual address 0x802E80DC and rom address 0xA30DC
 bhv_whirlpool_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8034
#This function is called from Behavior  bhvTreasureChests
#It has virtual address 0x802F82F8 and rom address 0xB32F8
 bhv_treasure_chest_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x1c($sp)
	addiu	$t6, $zero, -0x6001
	sw	$t6, 0x10($sp)
	addiu	$a0, $zero, 1
#This function is called from Behavior  bhvTreasureChests
#It has virtual address 0x802F83A4 and rom address 0xB33A4
 bhv_treasure_chest_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvMantaRay
#It has virtual address 0x802F6E40 and rom address 0xB1E40
 bhv_manta_ray_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a2, 0x1300
	addiu	$a2, $a2, 0x37e0
#This function is called from Behavior  bhvMantaRay
#It has virtual address 0x802F7264 and rom address 0xB2264
 bhv_manta_ray_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvBowsersSub
#It has virtual address 0x802C1A40 and rom address 0x7CA40
 bhv_bowsers_sub_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0xa0
#This function is called from Behavior  bhvDDDPole
#It has virtual address 0x803136CC and rom address 0xCE6CC
 bhv_ddd_pole_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0xa0
#This function is called from Behavior  bhvDDDPole
#It has virtual address 0x80313754 and rom address 0xCE754
 bhv_ddd_pole_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
#This function is called from Behavior  bhvJetStream
#It has virtual address 0x802E82B0 and rom address 0xA32B0
 bhv_jet_stream_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8034
#This function is called from Behavior  bhvJetStreamRingSpawner
#It has virtual address 0x802EC908 and rom address 0xA7908
 bhv_jet_stream_ring_spawner_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvBooWithCage
#It has virtual address 0x802C515C and rom address 0x8015C
 bhv_boo_with_cage_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	lh	$t6, -0x4d9c($t6)
	slti	$at, $t6, 0xc
#This function is called from Behavior  bhvBooWithCage
#It has virtual address 0x802C51D4 and rom address 0x801D4
 bhv_boo_with_cage_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
#This function is called from Behavior  bhvAmbientSounds
#It has virtual address 0x802F0950 and rom address 0xAB950
 bhv_ambient_sounds_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	lw	$t6, -0x3430($t6)
	addiu	$at, $zero, 3
#This function is called from Behavior  bhvWaterfallSoundLoop
#It has virtual address 0x802F07F4 and rom address 0xAB7F4
 bhv_waterfall_sound_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x4001
	jal	 cur_obj_play_sound_1
	ori	$a0, $a0, 1
#This function is called from Behavior  bhvBowser
#It has virtual address 0x802B7878 and rom address 0x72878
 bhv_bowser_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	addiu	$t6, $zero, 1
#This function is called from Behavior  bhvBowser
#It has virtual address 0x802B75A4 and rom address 0x725A4
 bhv_bowser_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvCannon
#It has virtual address 0x802A9498 and rom address 0x64498
 bhv_cannon_base_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x140
#This function is called from Behavior  bhvWfBreakableWallLeft
#It has virtual address 0x802AA1B8 and rom address 0x651B8
 bhv_wf_breakable_wall_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	addiu	$t6, $t6, -0x4e90
	lw	$t7, 0xc($t6)
#This function is called from Behavior  bhvTiltingBowserLavaPlatform
#It has virtual address 0x802A2BC4 and rom address 0x5DBC4
 cur_obj_rotate_face_angle_using_vel:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	lw	$t8, 0x114($t6)
	addu	$t9, $t7, $t8
#This function is called from Behavior  bhvFallingBowserPlatform
#It has virtual address 0x802B8384 and rom address 0x73384
 bhv_falling_bowser_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x67c
