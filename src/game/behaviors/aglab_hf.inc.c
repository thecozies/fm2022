
extern Vtx hf_boo_boo_mesh_layer_1_vtx_0[26];
extern Vtx hf_boo_boo_mesh_layer_1_vtx_0_backup[26];
extern Vtx hf_boo_boo_mesh_layer_1_vtx_1[7];
extern Vtx hf_boo_boo_mesh_layer_1_vtx_1_backup[7];
extern Vtx hf_boo_boo_mesh_layer_1_vtx_2[26];
extern Vtx hf_boo_boo_mesh_layer_1_vtx_2_backup[26];
extern Vtx hf_boo_boo_mesh_layer_1_vtx_3[6];
extern Vtx hf_boo_boo_mesh_layer_1_vtx_3_backup[6];

#define SIGN(x) ((x) < 0 ? -1 : 1)

static void hf_alter_boo_vtx(f32 xoff, f32 zoff, Vtx* vs, Vtx* vb, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        f32 l = sqrtf(vb[i].v.ob[0] * vb[i].v.ob[0] + vb[i].v.ob[1] + vb[i].v.ob[1]) / 30.f;
        f32 zs = 1.f + sins(vb[i].v.ob[1]) / 10.f;
        vs[i].v.ob[0] = vb[i].v.ob[0] + SIGN(vb[i].v.ob[0]) * l * xoff * zs;
        vs[i].v.ob[2] = vb[i].v.ob[2] + SIGN(vb[i].v.ob[2]) * l * zoff * zs;
    }
}

void hf_boo_loop_ctl()
{
    f32 xoff = sins(0x1134 * o->oTimer);
    f32 zoff = sins(0x1027 * o->oTimer);

    {
        Vtx* vs = segmented_to_virtual(hf_boo_boo_mesh_layer_1_vtx_0);
        Vtx* vb = segmented_to_virtual(hf_boo_boo_mesh_layer_1_vtx_0_backup);
        hf_alter_boo_vtx(xoff, zoff, vs, vb, 26);
    }
    {
        Vtx* vs = segmented_to_virtual(hf_boo_boo_mesh_layer_1_vtx_1);
        Vtx* vb = segmented_to_virtual(hf_boo_boo_mesh_layer_1_vtx_1_backup);
        hf_alter_boo_vtx(xoff, zoff, vs, vb, 7);
    }
    {
        Vtx* vs = segmented_to_virtual(hf_boo_boo_mesh_layer_1_vtx_2);
        Vtx* vb = segmented_to_virtual(hf_boo_boo_mesh_layer_1_vtx_2_backup);
        hf_alter_boo_vtx(xoff, zoff, vs, vb, 26);
    }
    {
        Vtx* vs = segmented_to_virtual(hf_boo_boo_mesh_layer_1_vtx_3);
        Vtx* vb = segmented_to_virtual(hf_boo_boo_mesh_layer_1_vtx_3_backup);
        hf_alter_boo_vtx(xoff, zoff, vs, vb, 6);
    }
}

void hf_boo_init()
{
    o->oTimer = random_u16();
}

void hf_boo_loop()
{
    o->oOpacity = 100;
    obj_scale_xyz(o, 0.7f, 0.7f + 0.05 * sins(o->oTimer * 0x678), 0.7f);

    s16 realFaceAngle = o->oFaceAngleYaw + 0x4000;
    s16 dist = realFaceAngle - gMarioStates->faceAngle[1];
    s32 angleDist = ABS((s32) dist);

    if (angleDist < 0x4000)
    {
        o->oOpacity = 255;
    }
    else if (angleDist > 0x5000)
    {
        o->oOpacity = 120;
    }
    else
    {
        o->oOpacity = 120 + (0x5000 - angleDist) / 31;
    }
    if (angleDist > 0x5000)
        return;

    if (o->oPosY - 50.f > gMarioStates->pos[1])
        return;

    if (o->oDistanceToMario < 300.f)
    {
        drop_and_set_mario_action(gMarioStates, ACT_JUMP, 0);
        gMarioStates->vel[1] = 45.f;
        gMarioStates->forwardVel = 45.f;
        gMarioStates->faceAngle[1] = o->oFaceAngleYaw + 0x4000;
    }
}

void hf_goo_init()
{
    o->oTimer = random_u16();
}

void hf_goo_loop()
{
    obj_scale_xyz(o, 1.f, 1.f + 0.1 * sins(o->oTimer * 0x678), 1.f);
    if (o->oDistanceToMario < 300.f)
    {
        drop_and_set_mario_action(gMarioStates, ACT_JUMP, 0);
        gMarioStates->vel[1] = 45.f;
        gMarioStates->forwardVel = 45.f;
    }

    if (1 == o->oBehParams2ndByte)
    {
        o->oPosZ = o->oHomeZ + 300.f * sins(o->oTimer * 0x678 / 2);
    }
}

void hf_crystal_init()
{
    o->parentObj = cur_obj_find_object_with_behavior_and_bparam(bhvHfCrystal, o->oBehParams2ndByte);
}

static void hf_spawn_phase0()
{
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 3; j++)
    {
        struct Object* block = spawn_object(o, MODEL_HF_CRYSTAL_PLAT, bhvHfCrystalBlock);
        block->oFaceAngleYaw = 0;
        block->oMoveAngleYaw = 0;
        block->oPosX = (12.f/13.f) * (4500.f + 1200.f * i);
        block->oPosY = (12.f/13.f) * (500.f + 1508.f);
        block->oPosZ = (12.f/13.f) * (-4000.f + 1200.f * j);
    }

    struct Object* nc0 = spawn_object(o, MODEL_HF_CRYSTAL, bhvHfCrystal);
    nc0->oBehParams2ndByte = o->oBehParams2ndByte + 1;
    nc0->oPosX = (12.f/13.f) * (4500.f + 1200.f * 0);
    nc0->oPosY = (12.f/13.f) * (1508.f + 1150.f);
    nc0->oPosZ = (12.f/13.f) * (-4000.f + 1200.f * 0);
    nc0->oHomeX = nc0->oPosX;
    nc0->oHomeY = nc0->oPosY;
    nc0->oHomeZ = nc0->oPosZ;
    struct Object* nc1 = spawn_object(o, MODEL_HF_CRYSTAL, bhvHfCrystal);
    nc1->oBehParams2ndByte = o->oBehParams2ndByte + 1;
    nc1->oPosX = (12.f/13.f) * (4500.f + 1200.f * 4);
    nc1->oPosY = (12.f/13.f) * (1508.f + 1150.f);
    nc1->oPosZ = (12.f/13.f) * (-4000.f + 1200.f * 2);
    nc1->oHomeX = nc1->oPosX;
    nc1->oHomeY = nc1->oPosY;
    nc1->oHomeZ = nc1->oPosZ;
}

static void hf_spawn_phase1()
{
    for (int i = 4; i < 6; i++)
    for (int j = 1; j < 4; j++)
    {
        struct Object* block = spawn_object(o, MODEL_HF_CRYSTAL_PLAT, bhvHfCrystalBlock);
        block->oFaceAngleYaw = 0;
        block->oMoveAngleYaw = 0;
        block->oPosX = (12.f/13.f) * (4500.f + 1200.f * i);
        block->oPosY = (12.f/13.f) * (1000.f + 1508.f + 300.f * ((i % 2) ^ (j % 2)));
        block->oPosZ = (12.f/13.f) * (-4000.f + 1200.f * j);
    }

    struct Object* nc0 = spawn_object(o, MODEL_HF_CRYSTAL, bhvHfCrystal);
    nc0->oBehParams2ndByte = o->oBehParams2ndByte + 1;
    nc0->oPosX = (12.f/13.f) * (4500.f + 1200.f * 4);
    nc0->oPosY = (12.f/13.f) * (1508.f + 2000.f);
    nc0->oPosZ = (12.f/13.f) * (-4000.f + 1200.f * 1);
    nc0->oHomeX = nc0->oPosX;
    nc0->oHomeY = nc0->oPosY;
    nc0->oHomeZ = nc0->oPosZ;
    struct Object* nc1 = spawn_object(o, MODEL_HF_CRYSTAL, bhvHfCrystal);
    nc1->oBehParams2ndByte = o->oBehParams2ndByte + 1;
    nc1->oPosX = (12.f/13.f) * (4500.f + 1200.f * 6);
    nc1->oPosY = (12.f/13.f) * (1508.f + 2000.f);
    nc1->oPosZ = (12.f/13.f) * (-4000.f + 1200.f * 3);
    nc1->oHomeX = nc1->oPosX;
    nc1->oHomeY = nc1->oPosY;
    nc1->oHomeZ = nc1->oPosZ;
}

static void hf_spawn_phase2()
{
    for (int i = 6; i < 8; i++)
    for (int j = 2; j < 5; j++)
    {
        struct Object* block = spawn_object(o, MODEL_HF_CRYSTAL_PLAT, bhvHfCrystalBlock);
        block->oFaceAngleYaw = 0;
        block->oMoveAngleYaw = 0;
        block->oPosX = (12.f/13.f) * (4500.f + 1200.f * i);
        block->oPosY = (12.f/13.f) * (1500.f + 1508.f + 300.f * ((i % 2) + (j % 2)));
        block->oPosZ = (12.f/13.f) * (-4000.f + 1200.f * j);
    }
    
    /*
    struct Object* nc0 = spawn_object(o, MODEL_HF_CRYSTAL, bhvHfCrystal);
    nc0->oBehParams2ndByte = o->oBehParams2ndByte + 1;
    nc0->oPosX = 4500.f + 1200.f * 4;
    nc0->oPosY = 1508.f + 2100.f;
    nc0->oPosZ = -4000.f + 1200.f * 1;
    struct Object* nc1 = spawn_object(o, MODEL_HF_CRYSTAL, bhvHfCrystal);
    nc1->oBehParams2ndByte = o->oBehParams2ndByte + 1;
    nc1->oPosX = 4500.f + 1200.f * 6;
    nc1->oPosY = 1508.f + 2100.f;
    nc1->oPosZ = -4000.f + 1200.f * 4;
    */
}

void hf_crystal_loop()
{
    o->oFaceAngleYaw += 0x189;
    o->oPosY = o->oHomeY + 25.f * sins(gGlobalTimer * 343);
    if (o->oAction == 0)
    {
        if (gControllers->buttonPressed & L_TRIG)
        {
            o->oPosX = o->oHomeX;
            o->oPosY = o->oHomeY;
            o->oPosZ = o->oHomeZ;
            return;
        } 

        struct Surface* ceil = gMarioStates->ceil;
        if (!ceil || ceil->type != SURFACE_HARD_SLIPPERY)
            return;
    
        f32 d = gMarioStates->ceilHeight - gMarioStates->pos[1];
        if (d > 300.f)
            return;

        f32 dx = gMarioStates->pos[0] - o->oPosX;
        f32 dz = gMarioStates->pos[2] - o->oPosZ;
        if (ABS(dx) > 300.f || ABS(dz) > 300.f)
            return;

        o->oDfDirection = 0;
        if (dx > 80.f)
            o->oDfDirection |= 1;
        if (dz > 80.f)
            o->oDfDirection |= 2;
        if (dx < -80.f)
            o->oDfDirection |= 4;
        if (dz < -80.f)
            o->oDfDirection |= 8;

        if (o->oDfDirection)
        {
            cur_obj_play_sound_2(SOUND_GENERAL_HAUNTED_CHAIR_SWISH_AIR);
            o->oAction = 1;
        }
    }
    else if (o->oAction == 1)
    {
        if (gControllers->buttonPressed & L_TRIG)
        {
            o->oPosX = o->oHomeX;
            o->oPosY = o->oHomeY;
            o->oPosZ = o->oHomeZ;
            o->oAction = 0;
            return;
        } 

        if (o->oDfDirection & 1)
        {
            o->oPosX -= 12.f/13.f * 30.f;
        }
        if (o->oDfDirection & 2)
        {
            o->oPosZ -= 12.f/13.f *30.f;
        }
        if (o->oDfDirection & 4)
        {
            o->oPosX += 12.f/13.f *30.f;
        }
        if (o->oDfDirection & 8)
        {
            o->oPosZ += 12.f/13.f *30.f;
        }

        if (o->oTimer >= 40)
        {
            o->oDfDirection = 0;
            o->oAction = 0;
        }

        f32 parentDx = o->oPosX - o->parentObj->oPosX;
        f32 parentDz = o->oPosZ - o->parentObj->oPosZ;
        if (ABS(parentDx) < 500.f && ABS(parentDz) < 500.f)
        {
            cur_obj_play_sound_2(SOUND_GENERAL_MOVING_WATER);
            o->oAction = 2;
            o->parentObj->oAction = 2;
            if (0 == o->oBehParams2ndByte)
                hf_spawn_phase0();
            if (1 == o->oBehParams2ndByte)
                hf_spawn_phase1();
            if (2 == o->oBehParams2ndByte)
                hf_spawn_phase2();
        }
    }
    else if (o->oAction == 2)
    {
        if (o->oTimer < 30)
            obj_scale(o, 1.f - o->oTimer / 30.f);
        else
            cur_obj_become_intangible();
    }
}

void hf_crystal_block_loop()
{
    if (o->oTimer <= 30)
        obj_scale(o, o->oTimer / 30.f);
}

extern const Collision hf_ice_collision[];
extern const Collision hf_ice_collision_backup[];

extern const Vtx hf_ice_Plane_002_mesh_layer_1_vtx_0[45];
extern const Vtx hf_ice_Plane_002_mesh_layer_1_vtx_0_backup[45];

struct IceQuad
{
	/*
	 -       +
    tA - - - B
	 |       |
	bC - - - D
    */
    int tm;
    int tp;
    int bm;
    int bp;
};

static struct IceQuad sIceQuads[] = 
{
    { 18, 17, 19, 16 }, // -2
    { 21, 13, 20, 12 }, // -1
    { 23, 14, 22, 15 }, // -0

    { 1 , 0 , 6 , 7  }, // +0 
    { 2 , 3,  9 , 8  }, // +1
    { 4 , 5, 11 , 10 }, // +2
};

static void sync_coll_tri_to_visual(const s16* cb, const s16* cv, const Vtx* vb, Vtx* vv, int sz)
{
    // Need to find all instances of cb in vb and replace stuff in vv accordingly to be cv
    for (int i = 0; i < sz; i++)
    {
        if (vb[i].n.ob[0] == cb[0]
         && vb[i].n.ob[1] == cb[1]
         && vb[i].n.ob[2] == cb[2])
        {
            vv[i].n.ob[0] = cv[0];
            vv[i].n.ob[1] = cv[1];
            vv[i].n.ob[2] = cv[2];
        }
    }
}

static void lerp_quads(const s16* cb, s16* cv, const Vtx* vb, Vtx* vv, f32 t, int idx0, int idx1)
{
    for (int i = 0; i < 4; i++)
    {
        int* q0 = &sIceQuads[idx0].tm;
        int* q1 = &sIceQuads[idx1].tm;

        // alter all quads of -0 to be correct as lerp from -1 to -0
        int q0idx = q0[i];
        int q1idx = q1[i];
        const s16* q0b = &cb[3 * q0idx];
        const s16* q1b = &cb[3 * q1idx];
        s16* q1v  = &cv[2 + 3 * q1idx];
        q1v[0] = q0b[0] * t + q1b[0] * (1.f - t);
        q1v[1] = q0b[1] * t + q1b[1] * (1.f - t);
        q1v[2] = q0b[2] * t + q1b[2] * (1.f - t);
        sync_coll_tri_to_visual(q1b, q1v, vb, vv, 45);
    }
}

static void eq_quad(const s16* cb, s16* cv, const Vtx* vb, Vtx* vv, int idx0, int idx1)
{
    for (int i = 0; i < 4; i++)
    {
        int* q0 = &sIceQuads[idx0].tm;
        int* q1 = &sIceQuads[idx1].tm;
        int q0idx = q0[i];
        int q1idx = q1[i];
        const s16* q1b = &cb[3 * q1idx];
        s16* q0v  = &cv[2 + 3 * q0idx];
        s16* q1v  = &cv[2 + 3 * q1idx];
        q1v[0] = q0v[0];
        q1v[1] = q0v[1];
        q1v[2] = q0v[2];
        sync_coll_tri_to_visual(q1b, q1v, vb, vv, 45);
    }
}

void hf_ice_loop()
{
    Collision* cv = segmented_to_virtual(hf_ice_collision);
    Collision* cb = segmented_to_virtual(hf_ice_collision_backup);
    Vtx* vv = segmented_to_virtual(hf_ice_Plane_002_mesh_layer_1_vtx_0);
    Vtx* vb = segmented_to_virtual(hf_ice_Plane_002_mesh_layer_1_vtx_0_backup);

    obj_scale_xyz(o, 0.9f + 0.1f * sins(o->oTimer * 0x663), 1.f, 1.f);
    f32 t = 0.9f * sins(o->oTimer * 0x183) + 0.1f * sins(o->oTimer * 0xA63);
    if (t < 0)
    {
        lerp_quads(cb, cv, vb, vv, -t, 0 /*-2*/, 1 /*-1*/);
        eq_quad   (cb, cv, vb, vv,     1 /*-1*/, 2 /*-0*/);
        lerp_quads(cb, cv, vb, vv, -t, 5 /*+2*/, 4 /*+1*/);
        eq_quad   (cb, cv, vb, vv,     4 /*+1*/, 3 /*+0*/);
    }
    else
    {
        // all quads are active
        lerp_quads(cb, cv, vb, vv, 1.f-t, 1 /*-1*/, 2 /*-0*/);
        lerp_quads(cb, cv, vb, vv, 1.f-t, 4 /*+1*/, 3 /*+0*/);
    }
}

void hf_ice_pole_loop()
{
    obj_scale_xyz(o, 0.9f + 0.1f * sins(o->oTimer * 0x663), 0.65f + 0.4f * (0.9f * sins(o->oTimer * 0x183) + 0.1f * sins(o->oTimer * 0xA63)), 0.9f + 0.1f * sins(o->oTimer * 0x1b3));
}

void hf_ice_pole2_loop()
{
    obj_scale_xyz(o, 0.7f + 0.4f * (0.9f * sins(o->oTimer * 0x183) + 0.1f * sins(o->oTimer * 0xA63)), 1.1f + 0.1f * sins(o->oTimer * 0x1b3), 0.9f + 0.1f * sins(o->oTimer * 0x663));
}

void hf_ice_bridge_ctl()
{
    if (0 == (o->oTimer % 100))
    {
        struct Object* mover = spawn_object(o, MODEL_HF_ICE_BRIDGE, bhvHfBridgeMover);
        f32 d = o->oBehParams2ndByte ? 0.f : 80.f;
        mover->oPosZ += (o->oTimer % 200) ? -d : d;
        mover->oBehParams2ndByte = o->oBehParams2ndByte;
    }
}

void hf_ice_bridge_mover_loop()
{
    if (o->oBehParams2ndByte)
    {
        o->oMoveAngleYaw -= 369;
        o->oHomeX -= 8.f;   
    }
    else
    {
        o->oMoveAngleYaw += 169;
        o->oHomeX += 8.f;
    }

    o->oPosX = o->oHomeX;
    o->oPosY = find_floor_height(o->oHomeX, o->oPosY + 100.f, o->oHomeZ);
    if (o->oPosY < 3500.f)
    {
        o->oPosY = 5378.f;
    }

    f32 scale = 0.8f;

    if (o->oTimer <= 30)
    {
        obj_scale(o, scale * o->oTimer / 30.f);
    }

    if (o->oTimer > 370)
    {
        obj_scale(o, scale * (400 - o->oTimer) / 30.f);
    }

    if (o->oTimer >= 400)
    {
        o->activeFlags = 0;
    }
}


void hf_bridge_init()
{
    o->oDfAngleYaw = 0x4000;
    o->oDfAngleVel = 0;
}

extern Collision hf_bridge1_collision[];
extern Vtx hf_bridge1_c5_005_mesh_layer_4_vtx_0[40];
// coll 10, 11 - 21, 22
// visu 16, 19 - 33, 34

// around (-1565, 5825) & (-1959, 5842)
void hf_bridge_loop()
{
    Collision* col = segmented_to_virtual(hf_bridge1_collision);
    col += 2;
    Vtx* vtx = segmented_to_virtual(hf_bridge1_c5_005_mesh_layer_4_vtx_0);

    if (0 == o->oAction)
    {
        if (gMarioStates->pos[1] > (12.f/13.f) *5700.f && gMarioStates->pos[0] <  (12.f/13.f) * (-200.f))
        {
            play_sound(SOUND_GENERAL_OPEN_CHEST, gMarioStates->marioObj->header.gfx.cameraToObject);
            o->oAction = 1;
            o->oDfAngleVel = 40.f;
        }
    }
    else
    {
        o->oDfAngleVel += sins(o->oDfAngleYaw) * 25;
        o->oDfAngleVel += -o->oDfAngleVel * 0.04f;
        o->oDfAngleYaw += o->oDfAngleVel;
    }

    {
        f32 x = (12.f/13.f) * (-1565 + 400 * sins(o->oDfAngleYaw));
        f32 y = (12.f/13.f) * ( 5825 + 400 * coss(o->oDfAngleYaw));
        col[3 * 10     + 0] = x;
        col[3 * 10     + 1] = y;
        vtx[    16].n.ob[0] = x;
        vtx[    16].n.ob[1] = y;
        col[3 * 11     + 0] = x;
        col[3 * 11     + 1] = y;
        vtx[    19].n.ob[0] = x;
        vtx[    19].n.ob[1] = y;
    }
    {
        f32 x = (12.f/13.f) * (-778 + 400 * sins(-o->oDfAngleYaw));
        f32 y = (12.f/13.f) * (5842 + 400 * coss(-o->oDfAngleYaw));
        col[3 * 21     + 0] = x;
        col[3 * 21     + 1] = y;
        vtx[    33].n.ob[0] = x;
        vtx[    33].n.ob[1] = y;
        col[3 * 22     + 0] = x;
        col[3 * 22     + 1] = y;
        vtx[    34].n.ob[0] = x;
        vtx[    34].n.ob[1] = y;
    }
}

void hf_bridge2_init()
{

}

void hf_bridge2_loop()
{
    if (0 == o->oAction)
    {
        struct Surface* floor = gMarioStates->floor;
        if (floor && floor->type == SURFACE_HARD_NOT_SLIPPERY && gMarioStates->floorHeight == gMarioStates->pos[1])
        {
            o->oAction = 1;
        }
    }
    else
    {
        o->oFaceAnglePitch = (9000 * sins(o->oTimer * 0x183) + 1000 * sins(o->oTimer * 0xA63));
        if (gMarioStates->pos[1] < 8500.f)
        {
            o->oAction = 0;
        }
    }
}

void hf_checkpoint_loop()
{
    spawn_object(o, MODEL_NONE, bhvSparkleSpawn);
    if (o->oDistanceToMario < 150.f)
    {
        print_text_centered(160, 20, "PRESS L TO WARP BACK HERE");
    }
    if (0 == o->oAction)
    {
        if (o->oDistanceToMario < 150.f)
        {
            o->oAction = 1;
        }
    }
    else
    {
        if (gControllers->buttonPressed & L_TRIG && gMarioStates->action != 0x00880898)
        {
            gMarioStates->pos[0] = o->oPosX;
            gMarioStates->pos[1] = o->oPosY;
            gMarioStates->pos[2] = o->oPosZ;
            set_camera_mode(gCamera, CAMERA_MODE_8_DIRECTIONS, 1);
        } 
    }
}

void hf_joel_loop()
{
    obj_scale(o, 0.5f);

    if (gMarioStates->pos[2] > -4500.f)
    {
        cur_obj_hide();
    }
    else
    {
        cur_obj_unhide();
    }
    
    if (o->oBehParams2ndByte == 1)
    {
        obj_scale(o, 0.7f);
        o->oMoveAngleYaw += 0x546;
        o->oPosY = o->oHomeY - CLAMP(gMarioStates->pos[2], -5500.f, -4500.f) / 2 - 5500.f / 2;
    }
    else if (o->oBehParams2ndByte == 2)
    {
        o->oMoveAnglePitch = 0x4000;
        o->oMoveAngleYaw = 0x1200 * sins(o->oTimer * 400);
        o->oPosY = o->oHomeY - CLAMP(gMarioStates->pos[2], -5500.f, -4500.f) / 2 - 5500.f / 2;
    }
    else if (o->oBehParams2ndByte == 3)
    {
        obj_scale(o, 0.6f);
        o->oMoveAnglePitch = 0x2000;
        o->oMoveAngleYaw -= 0x146;
    }
    else if (o->oBehParams2ndByte == 4)
    {
        obj_scale_xyz(o, 0.3f, 0.8f, 3.f);
        o->oMoveAngleYaw -= 0x346;
    }
    else
    {
        o->oMoveAngleYaw += 0x346;
    }
}

extern void spawn_mist_particles_variable(s32 count, s32 offsetY, f32 size);
void hf_wind_loop()
{
    if (gMarioStates->pos[0] < 12000.f)
        return;
        
    spawn_mist_particles_variable(0, 0, 46.0f);

    struct Surface* floor = gMarioStates->floor;
    if (floor && floor->type == SURFACE_NOISE_DEFAULT)
    {
        drop_and_set_mario_action(gMarioStates, ACT_VERTICAL_WIND, 0);
        if (gMarioStates->pos[1] < 4244.f)
            gMarioStates->vel[1] = 20.f;
    }
}

// +19
extern Gfx mat_hf_scary_boo0_boom[];
extern Gfx mat_hf_scary_boo1_boom[];
extern Gfx mat_hf_scary_boo2_boom[];
extern Gfx mat_hf_scary_boo3_boom[];
extern Gfx mat_hf_scary_boo4_boom[];
extern Gfx mat_hf_scary_boo5_boom[];
extern Gfx mat_hf_scary_boo6_boom[];
extern Gfx mat_hf_scary_boo7_boom[];
extern Gfx mat_hf_scary_boo_lines_boom_layer1[]; // +14
extern Gfx mat_hf_scary_jerma_boom[]; // +12

static void set_scary_bool_alpha(u8 val)
{
    u8* a;
    a = (u8*) segmented_to_virtual(mat_hf_scary_boo0_boom) + 19*8 + 7;
    *a = val * 2;
    a = (u8*) segmented_to_virtual(mat_hf_scary_boo1_boom) + 19*8 + 7;
    *a = val * 2;
    a = (u8*) segmented_to_virtual(mat_hf_scary_boo2_boom) + 19*8 + 7;
    *a = val * 2;
    a = (u8*) segmented_to_virtual(mat_hf_scary_boo3_boom) + 19*8 + 7;
    *a = val * 2;
    a = (u8*) segmented_to_virtual(mat_hf_scary_boo4_boom) + 19*8 + 7;
    *a = val * 2;
    a = (u8*) segmented_to_virtual(mat_hf_scary_boo5_boom) + 19*8 + 7;
    *a = val * 2;
    a = (u8*) segmented_to_virtual(mat_hf_scary_boo6_boom) + 19*8 + 7;
    *a = val * 2;
    a = (u8*) segmented_to_virtual(mat_hf_scary_boo7_boom) + 19*8 + 7;
    *a = val * 2;
    a = (u8*) segmented_to_virtual(mat_hf_scary_boo_lines_boom_layer1) + 14*8 + 7;
    *a = val * 2;
    a = (u8*) segmented_to_virtual(mat_hf_scary_jerma_boom) + 12*8 + 7;
    *a = val * 4;
}

void hf_scary_boo_loop()
{
    if (0 == o->oTimer)
    {
        obj_scale(o, 0.55f);
        o->oAnimState = random_u16() % 8;
        if (0 == (random_u16() % 254))
            o->oAnimState = 8;

        o->oPosX = 12.f / 13.f * (-4120.f + 5000.f * random_float());
        o->oPosY = CLAMP(gMarioStates->pos[1], 12.f / 13.f * 1590.f, 12.f / 13.f * 11000.f) + random_f32_around_zero(2000.f) - 800.f; 
        o->oPosZ = 12.f / 13.f * (-3420.f + 6000.f * random_float());
    }

    if (o->oTimer < 30)
    {
        set_scary_bool_alpha(o->oTimer);
    }
    else if (o->oTimer < 70)
    {
        set_scary_bool_alpha(30);
    }
    else
    {
        set_scary_bool_alpha(100 - o->oTimer);
    }

    if (100 == o->oTimer)
    {
        o->oTimer = -1;
    }
}
