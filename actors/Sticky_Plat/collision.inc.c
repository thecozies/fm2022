const Collision Sticky_Plat_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(10),
	COL_VERTEX(-146, -146, 67),
	COL_VERTEX(-146, 146, 67),
	COL_VERTEX(-172, 172, 0),
	COL_VERTEX(-172, -172, 0),
	COL_VERTEX(172, 172, 0),
	COL_VERTEX(146, 146, 67),
	COL_VERTEX(172, -172, 0),
	COL_VERTEX(146, -146, 67),
	COL_VERTEX(0, 0, 232),
	COL_VERTEX(0, 0, 0),
	COL_TRI_INIT(SURFACE_HARD_SLIPPERY, 8),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 2, 1),
	COL_TRI(4, 1, 5),
	COL_TRI(3, 6, 7),
	COL_TRI(3, 7, 0),
	COL_TRI(6, 4, 5),
	COL_TRI(6, 5, 7),
	COL_TRI_INIT(SURFACE_DEFAULT, 4),
	COL_TRI(7, 5, 8),
	COL_TRI(0, 7, 8),
	COL_TRI(5, 1, 8),
	COL_TRI(8, 1, 0),
	COL_TRI_INIT(SURFACE_STICKY, 4),
	COL_TRI(3, 2, 9),
	COL_TRI(2, 4, 9),
	COL_TRI(4, 6, 9),
	COL_TRI(6, 3, 9),
	COL_TRI_STOP(),
	COL_END()
};
