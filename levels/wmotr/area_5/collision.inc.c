const Collision wmotr_area_5_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-3139, -253, 994),
	COL_VERTEX(-1126, -253, 994),
	COL_VERTEX(-1126, -253, -1019),
	COL_VERTEX(-3139, -253, -1019),
	COL_VERTEX(-3576, -253, -1456),
	COL_VERTEX(-3576, -253, 1431),
	COL_VERTEX(-689, -253, -1456),
	COL_VERTEX(-689, -253, 1431),
	COL_TRI_INIT(SURFACE_DEFAULT, 10),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 4, 5),
	COL_TRI(3, 5, 0),
	COL_TRI(2, 6, 4),
	COL_TRI(2, 4, 3),
	COL_TRI(0, 5, 7),
	COL_TRI(0, 7, 1),
	COL_TRI(1, 7, 6),
	COL_TRI(1, 6, 2),
	COL_TRI_STOP(),
	COL_END()
};