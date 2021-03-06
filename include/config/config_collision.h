#pragma once

/**********************
 * COLLISION SETTINGS *
 **********************/

// Reduces some find_floor calls, at the cost of some barely noticeable smoothness in Mario's visual movement in a few actions at higher speeds.
// The defined number is the forward speed threshold before the change is active, since it's only noticeable at lower speeds.
#define FAST_FLOOR_ALIGN 10

// Automatically calculate the optimal collision distance for an object based on its vertices.
#define AUTO_COLLISION_DISTANCE

// Allow all surfaces types to have force, (doesn't require setting force, just allows it to be optional).
#define ALL_SURFACES_HAVE_FORCE

// Number of walls that can push Mario at once. Vanilla is 4.
#define MAX_REFERENCED_WALLS 4

// Collision data is the type that the collision system uses. All data by default is stored as an s16, but you may change it to s32.
// Naturally, that would double the size of all collision data, but would allow you to use 32 bit values instead of 16.
// Rooms are s8 in vanilla, but if you somehow have more than 255 rooms, you may raise this number.
// Currently, they *must* say as s8, because the room tables generated by literally anything are explicitly u8 and don't use a macro, making this currently infeasable.
#define COLLISION_DATA_TYPE s16
#define ROOM_DATA_TYPE s8

// Mario's normal hitbox height. Vanilla is 160.
#define MARIO_HITBOX_HEIGHT 160

// Vanilla is(MARIO_HITBOX_HEIGHT / 2).
#define MARIO_COLLISION_OFFSET_DEBUG_FREE_MOVE (MARIO_HITBOX_HEIGHT / 2)

// Vanilla is 50.
#define MARIO_COLLISION_RADIUS_UPPER 50

// Vanilla is 10.
#define MARIO_COLLISION_OFFSET_WATER 10

// Vanilla is 60.
#define MARIO_COLLISION_OFFSET_GROUND_UPPER 60

// Vanilla is 150.
#define MARIO_COLLISION_OFFSET_AIR_UPPER 150

// #define RAYCAST_WALL_COLLISION
