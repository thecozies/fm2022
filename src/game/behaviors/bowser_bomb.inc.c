// bowser_bomb.inc.c

extern void fight_set_lines_alpha(u8 a);
void bhv_bowser_bomb_loop(void) {
    if (obj_check_if_collided_with_object(o, gMarioObject) == TRUE) {
        o->oInteractStatus &= ~INT_STATUS_INTERACTED;
        if (1 == o->oBehParams2ndByte)
        {
            f32 velX = gMarioStates->vel[0];
            f32 velZ = gMarioStates->vel[2];
            f32 vel = sqrtf(velX * velX + velZ * velZ);
            o->oVelX = velX + 20.f * velX / vel;
            o->oVelZ = velZ + 20.f * velZ / vel;
            o->parentObj->oSubAction = 1;
        }
    }

    if (2 == o->oBehParams2ndByte)
    {
        if (o->oTimer > 30)
        {
            o->oPosY -= (30 - o->oTimer);
        }

        if (60 == o->oTimer)
        {
            o->activeFlags = 0;
        }
    }

    if (ABS(o->oPosX) > 1400.f || ABS(o->oPosZ) > 1400.f)
    {
        spawn_object(o, MODEL_EXPLOSION, bhvExplosion);
        o->parentObj->oFightCtlBomb = NULL;
        o->parentObj->oFightCtlBombCooldown = 100;
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        return;
    }

    o->oVelX = 0.96f * o->oVelX;
    o->oVelZ = 0.96f * o->oVelZ;
    o->oPosX += o->oVelX;
    o->oPosZ += o->oVelZ;

    if (o->oInteractStatus & INT_STATUS_HIT_MINE) {
        spawn_object(o, MODEL_BOWSER_FLAMES, bhvBowserBombExplosion);
        create_sound_spawner(SOUND_GENERAL_BOWSER_BOMB_EXPLOSION);
        set_camera_shake_from_point(SHAKE_POS_LARGE, o->oPosX, o->oPosY, o->oPosZ);
        o->parentObj->oFightCtlBomb = NULL;
        o->parentObj->oFightCtlBombCooldown = 100;
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        fight_set_lines_alpha(200);
    }

    set_object_visibility(o, 7000);
}

void bhv_bowser_bomb_explosion_loop(void) {
    cur_obj_scale((f32) o->oTimer / 14.0f * 9.0f + 1.0f);

    if ((o->oTimer % 4 == 0) && (o->oTimer < 20)) {
        struct Object *mineSmoke = spawn_object(o, MODEL_BOWSER_SMOKE, bhvBowserBombSmoke);
        mineSmoke->oPosX += random_float() * 600.0f - 400.0f;
        mineSmoke->oPosZ += random_float() * 600.0f - 400.0f;
        mineSmoke->oVelY += random_float() * 10.0f;
    }

    if (o->oTimer % 2 == 0) {
        o->oAnimState++;
    }

    if (o->oTimer == 28) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}

void bhv_bowser_bomb_smoke_loop(void) {
    cur_obj_scale((f32) o->oTimer / 14.0f * 9.0 + 1.0);

    if (o->oTimer % 2 == 0) {
        o->oAnimState++;
    }

    o->oOpacity -= 10;

    if (o->oOpacity < 10) {
        o->oOpacity = 0;
    }

    o->oPosY += o->oVelY;

    if (o->oTimer == 28) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}
