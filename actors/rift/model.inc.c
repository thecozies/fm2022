Lights1 rift_grid_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx rift_grid_i8_aligner[] = {gsSPEndDisplayList()};
u8 rift_grid_i8[] = {
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 
	0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 0xA5, 0x80, 
	0xA5, 
};

Vtx rift_Plane_mesh_vtx_0[99] = {
	{{{-453, 226, 0},0, {498, 2030},{0x95, 0xB, 0xE4, 0x1}}},
	{{{-226, 453, 0},0, {-13, 1522},{0x92, 0xD, 0xE0, 0x5E}}},
	{{{-453, 453, 0},0, {-12, 2032},{0x90, 0x20, 0xDC, 0x37}}},
	{{{-226, 226, 0},0, {497, 1520},{0xA9, 0xC, 0xEB, 0x8E}}},
	{{{-453, 0, 0},0, {1008, 2030},{0x9D, 0xC, 0xF2, 0x4}}},
	{{{-226, 0, 0},0, {1008, 1519},{0xA5, 0xB, 0xE6, 0xB7}}},
	{{{-453, -226, 0},0, {1519, 2029},{0xA1, 0xD, 0xF4, 0x2F}}},
	{{{-226, -226, 0},0, {1519, 1519},{0xA6, 0xA, 0xE7, 0xBD}}},
	{{{-453, -453, 0},0, {2029, 2029},{0x9E, 0xA, 0xF2, 0x20}}},
	{{{-226, -453, 0},0, {2029, 1519},{0xA4, 0x10, 0xE0, 0x36}}},
	{{{-53, -453, 0},0, {2029, 1127},{0x74, 0x8, 0xAA, 0xAF}}},
	{{{0, -226, 0},0, {1519, 1008},{0x89, 0xC, 0xBC, 0xDE}}},
	{{{0, -298, 0},0, {1681, 1008},{0x80, 0x9, 0xA5, 0xDE}}},
	{{{25, -226, 0},0, {1519, 953},{0x81, 0xB, 0xB2, 0xDE}}},
	{{{47, -161, 0},0, {1370, 902},{0x73, 0xB, 0xA0, 0xDE}}},
	{{{0, -114, 0},0, {1265, 1008},{0x6A, 0xB, 0x99, 0xDE}}},
	{{{0, -226, 0},0, {1519, 1008},{0x89, 0xC, 0xBC, 0xDE}}},
	{{{0, -114, 0},0, {1265, 1008},{0x6A, 0xB, 0x99, 0xDE}}},
	{{{-120, 0, 0},0, {1008, 1280},{0x74, 0x6, 0xA4, 0xDE}}},
	{{{-226, 0, 0},0, {1008, 1519},{0xA5, 0xB, 0xE6, 0xB7}}},
	{{{-63, 226, 0},0, {496, 1151},{0x6F, 0xB, 0x98, 0xDE}}},
	{{{-226, 226, 0},0, {497, 1520},{0xA9, 0xC, 0xEB, 0x8E}}},
	{{{-1, 453, 0},0, {-16, 1015},{0x73, 0xB, 0x9F, 0x61}}},
	{{{-226, 453, 0},0, {-13, 1522},{0x92, 0xD, 0xE0, 0x5E}}},
	{{{-226, -226, 0},0, {1519, 1519},{0xA6, 0xA, 0xE7, 0xBD}}},
	{{{226, -453, 0},0, {2029, 498},{0x8D, 0xD, 0xDA, 0x69}}},
	{{{453, -453, 0},0, {2029, -13},{0x9E, 0x3E, 0xE9, 0x0}}},
	{{{453, -226, 0},0, {1519, -13},{0x9E, 0xF, 0xDD, 0x0}}},
	{{{226, -226, 0},0, {1519, 498},{0xA3, 0xB, 0xD2, 0x91}}},
	{{{453, 0, 0},0, {1009, -13},{0xA3, 0xC, 0xDB, 0x0}}},
	{{{226, 0, 0},0, {1008, 497},{0x94, 0xB, 0xBF, 0x8E}}},
	{{{453, 226, 0},0, {498, -14},{0xAB, 0x11, 0xDA, 0x3E}}},
	{{{226, 0, 0},0, {1008, 497},{0x94, 0xB, 0xBF, 0x8E}}},
	{{{453, 226, 0},0, {498, -14},{0xAB, 0x11, 0xDA, 0x3E}}},
	{{{226, 226, 0},0, {497, 496},{0x94, 0xC, 0xCA, 0x91}}},
	{{{453, 453, 0},0, {-13, -16},{0xA3, 0xD, 0xDF, 0x2}}},
	{{{226, 453, 0},0, {-14, 495},{0xA0, 0xD, 0xDF, 0x5A}}},
	{{{0, 226, 0},0, {496, 1008},{0x8B, 0xD, 0xBE, 0xDE}}},
	{{{-1, 453, 0},0, {-16, 1006},{0x73, 0xB, 0x9F, 0x61}}},
	{{{-21, 226, 0},0, {496, 1055},{0x8C, 0xB, 0xBE, 0xDE}}},
	{{{0, 0, 0},0, {1008, 1008},{0x78, 0xB, 0x9C, 0xDE}}},
	{{{-39, 29, 0},0, {943, 1096},{0x79, 0xB, 0x9F, 0xDA}}},
	{{{-13, 0, 0},0, {1008, 1037},{0x76, 0xB, 0x9E, 0xDE}}},
	{{{0, -14, 0},0, {1040, 1008},{0x76, 0xB, 0x9D, 0xDE}}},
	{{{140, -169, 0},0, {1389, 693},{0x7C, 0x7, 0xA3, 0xDE}}},
	{{{226, -226, 0},0, {1519, 498},{0xA3, 0xB, 0xD2, 0x91}}},
	{{{101, -226, 0},0, {1519, 781},{0x71, 0xB, 0xA3, 0xDE}}},
	{{{226, -453, 0},0, {2029, 498},{0x8D, 0xD, 0xDA, 0x69}}},
	{{{226, -453, 0},0, {2029, 498},{0x8D, 0xD, 0xDA, 0x69}}},
	{{{101, -226, 0},0, {1519, 781},{0x71, 0xB, 0xA3, 0xDE}}},
	{{{0, -375, 0},0, {1854, 1008},{0x7B, 0xB, 0x9E, 0xDE}}},
	{{{0, -453, 0},0, {2029, 1008},{0x86, 0x9, 0xC6, 0xAF}}},
	{{{-53, -453, 0},0, {2029, 1127},{0x74, 0x8, 0xAA, 0xAF}}},
	{{{226, -226, 0},0, {1519, 498},{0xA3, 0xB, 0xD2, 0x91}}},
	{{{226, 0, 0},0, {1008, 497},{0x94, 0xB, 0xBF, 0x8E}}},
	{{{0, 0, 0},0, {1008, 1008},{0x78, 0xB, 0x9C, 0xDE}}},
	{{{226, 226, 0},0, {497, 496},{0x94, 0xC, 0xCA, 0x91}}},
	{{{0, 226, 0},0, {496, 1008},{0x8B, 0xD, 0xBE, 0xDE}}},
	{{{140, -169, 0},0, {621, 1269},{0x7C, 0x7, 0xA3, 0xDE}}},
	{{{0, -14, 0},0, {647, 1037},{0x76, 0xB, 0x9D, 0xDE}}},
	{{{-13, 0, 0},0, {649, 1016},{0x76, 0xB, 0x9E, 0xDE}}},
	{{{-59, 21, -130},0, {957, 994},{0x44, 0x0, 0x57, 0xC4}}},
	{{{-39, 29, 0},0, {654, 973},{0x79, 0xB, 0x9F, 0xDA}}},
	{{{-1, 453, -130},0, {941, 11},{0x3A, 0x0, 0x50, 0x7C}}},
	{{{-1, 453, -130},0, {941, 11},{0x3A, 0x0, 0x50, 0x7C}}},
	{{{-39, 29, 0},0, {654, 973},{0x79, 0xB, 0x9F, 0xDA}}},
	{{{-21, 226, 0},0, {648, 529},{0x8C, 0xB, 0xBE, 0xDE}}},
	{{{-1, 453, 0},0, {642, 21},{0x73, 0xB, 0x9F, 0x61}}},
	{{{-59, 21, -130},0, {957, 994},{0x44, 0x0, 0x57, 0xC4}}},
	{{{-1, 453, -261},0, {1240, 1},{0x0, 0x0, 0x0, 0xD6}}},
	{{{-40, 234, -261},0, {1251, 508},{0x0, 0x0, 0x0, 0xCD}}},
	{{{-79, 14, -261},0, {1261, 1015},{0x0, 0x0, 0x0, 0xC2}}},
	{{{93, -165, -261},0, {1229, 1275},{0xA, 0xA, 0xA, 0xBF}}},
	{{{117, -167, -130},0, {925, 1272},{0x48, 0x0, 0x63, 0xC3}}},
	{{{-53, -453, -261},0, {1261, 2013},{0x0, 0x0, 0xC, 0x89}}},
	{{{-53, -453, -130},0, {961, 2022},{0x40, 0x0, 0x5A, 0xAA}}},
	{{{-53, -453, 0},0, {662, 2032},{0x74, 0x8, 0xAA, 0xAF}}},
	{{{101, -226, 0},0, {629, 1424},{0x71, 0xB, 0xA3, 0xDE}}},
	{{{0, -375, 0},0, {651, 1823},{0x7B, 0xB, 0x9E, 0xDE}}},
	{{{140, -169, 0},0, {621, 1269},{0x7C, 0x7, 0xA3, 0xDE}}},
	{{{-53, -453, -130},0, {322, 2020},{0x40, 0x0, 0x5A, 0xAA}}},
	{{{-53, -453, -261},0, {22, 2032},{0x0, 0x0, 0xC, 0x89}}},
	{{{93, -165, -261},0, {-16, 1298},{0xA, 0xA, 0xA, 0xBF}}},
	{{{70, -163, -130},0, {288, 1298},{0x65, 0x6, 0x81, 0xE0}}},
	{{{-79, 14, -261},0, {14, 1025},{0x0, 0x0, 0x0, 0xC2}}},
	{{{-100, 7, -130},0, {317, 1043},{0x60, 0x7, 0x83, 0xE2}}},
	{{{-40, 234, -261},0, {-1, 516},{0x0, 0x0, 0x0, 0xCD}}},
	{{{-1, 453, -261},0, {-16, 8},{0x0, 0x0, 0x0, 0xD6}}},
	{{{-1, 453, -130},0, {284, -4},{0x3A, 0x0, 0x50, 0x7C}}},
	{{{-120, 0, 0},0, {621, 1061},{0x74, 0x6, 0xA4, 0xDE}}},
	{{{-1, 453, 0},0, {583, -16},{0x73, 0xB, 0x9F, 0x61}}},
	{{{-63, 226, 0},0, {603, 524},{0x6F, 0xB, 0x98, 0xDE}}},
	{{{0, -114, 0},0, {600, 1228},{0x6A, 0xB, 0x99, 0xDE}}},
	{{{47, -161, 0},0, {592, 1298},{0x73, 0xB, 0xA0, 0xDE}}},
	{{{25, -226, 0},0, {598, 1457},{0x81, 0xB, 0xB2, 0xDE}}},
	{{{0, -298, 0},0, {606, 1633},{0x80, 0x9, 0xA5, 0xDE}}},
	{{{0, -298, 0},0, {606, 1633},{0x80, 0x9, 0xA5, 0xDE}}},
	{{{-53, -453, 0},0, {621, 2008},{0x74, 0x8, 0xAA, 0xAF}}},
	{{{-53, -453, -130},0, {322, 2020},{0x40, 0x0, 0x5A, 0xAA}}},
};

Gfx rift_Plane_mesh_tri_0[] = {
	gsSPVertex(rift_Plane_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(10, 11, 7, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSP1Triangle(11, 14, 15, 0),
	gsSPVertex(rift_Plane_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(3, 8, 0, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(rift_Plane_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(5, 2, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(8, 5, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSP1Triangle(8, 11, 12, 0),
	gsSP1Triangle(13, 8, 12, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(rift_Plane_mesh_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(rift_Plane_mesh_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(8, 4, 7, 0),
	gsSP1Triangle(8, 9, 4, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(12, 13, 9, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(13, 15, 9, 0),
	gsSP1Triangle(4, 9, 15, 0),
	gsSPVertex(rift_Plane_mesh_vtx_0 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(9, 5, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(3, 5, 9, 0),
	gsSP1Triangle(3, 9, 12, 0),
	gsSP1Triangle(12, 13, 3, 0),
	gsSP1Triangle(0, 3, 13, 0),
	gsSP1Triangle(0, 13, 14, 0),
	gsSP1Triangle(14, 15, 0, 0),
	gsSPVertex(rift_Plane_mesh_vtx_0 + 96, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};




Gfx mat_rift_grid[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b, 64, rift_grid_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPSetLights1(rift_grid_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_rift_grid[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};


Gfx rift_Plane_mesh[] = {
	gsSPDisplayList(mat_rift_grid),
	gsSPDisplayList(rift_Plane_mesh_tri_0),
	gsSPDisplayList(mat_revert_rift_grid),
	gsSPEndDisplayList(),
};

Gfx rift_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
