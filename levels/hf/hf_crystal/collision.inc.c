const Collision hf_crystal_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(6),
	COL_VERTEX(324, 0, 0),
	COL_VERTEX(0, 453, 0),
	COL_VERTEX(0, 0, 324),
	COL_VERTEX(0, 0, -324),
	COL_VERTEX(0, -453, 0),
	COL_VERTEX(-324, 0, 0),
	COL_TRI_INIT(SURFACE_HARD_SLIPPERY, 8),
	COL_TRI(0, 1, 2),
	COL_TRI(1, 0, 3),
	COL_TRI(0, 4, 3),
	COL_TRI(4, 0, 2),
	COL_TRI(5, 4, 2),
	COL_TRI(4, 5, 3),
	COL_TRI(5, 1, 3),
	COL_TRI(1, 5, 2),
	COL_TRI_STOP(),
	COL_END()
};
