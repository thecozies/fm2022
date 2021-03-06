#include "src/game/envfx_snow.h"

const GeoLayout blinking_platform_geo[] = {
	GEO_CULLING_RADIUS(300),
	GEO_OPEN_NODE(),
		GEO_ASM(LAYER_TRANSPARENT, geo_set_blinking_platform_prim_alpha),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, blinking_platform_Cube_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, blinking_platform_Cube_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, blinking_platform_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, blinking_platform_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
