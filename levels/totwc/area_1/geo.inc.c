#include "src/game/envfx_snow.h"

const GeoLayout totwc_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 1000, 0, totwc_dl_A1_Canvas_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT_DECAL, 0, 1000, 0, totwc_dl_A2_Reference_mesh_layer_6),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 1300, -150, totwc_dl_Desk_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 1000, 0, totwc_dl_DSi_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, totwc_dl_DSi_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 1000, -2000, totwc_dl_Safezone_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 750, -145, totwc_dl_Sticky_Note_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 1000, -2500, totwc_dl_Undo_State_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout totwc_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 218, 65535, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, totwc_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, totwc_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, totwc_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, totwc_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
