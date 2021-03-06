#include "src/game/envfx_snow.h"

const GeoLayout hf_boo_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 130),
   GEO_OPEN_NODE(),
		GEO_ASM(GEO_TRANSPARENCY_MODE_NORMAL, geo_update_layer_transparency),
		GEO_SWITCH_CASE(2, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, 	    hf_boo_boo_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, hf_boo_boo_mesh_layer_1),
		GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
   /*
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hf_boo_boo_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hf_boo_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
	*/
};
