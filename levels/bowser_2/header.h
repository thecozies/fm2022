#ifndef BOWSER_2_HEADER_H
#define BOWSER_2_HEADER_H

#include "types.h"

// geo
extern const GeoLayout bowser_2_geo_000170[];
extern const GeoLayout bowser_2_geo_000188[];

// leveldata
extern const Gfx bowser_2_seg7_dl_07000D30[];
extern const Gfx bowser_2_seg7_dl_07000FE0[];
extern const Gfx bowser_2_seg7_dl_07001930[];
extern const Collision bowser_2_seg7_collision_lava[];
extern const Collision bowser_2_seg7_collision_tilting_platform[];

// script
extern const LevelScript level_bowser_2_entry[];


#include "levels/bowser_2/header.inc.h"

#include "levels/bowser_2/fight_platform/geo_header.h"

#include "levels/bowser_2/fight_platform/collision_header.h"

#include "levels/bowser_2/fight_bomb/geo_header.h"

#include "levels/bowser_2/fight_plat_shadow/geo_header.h"

#include "levels/bowser_2/fight_spikes/geo_header.h"

#include "levels/bowser_2/fight_spikes/collision_header.h"

#include "levels/bowser_2/fight_arrow/geo_header.h"

#include "levels/bowser_2/fight_roped/geo_header.h"

#endif
