const Collision castle_gate_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(6),
	COL_VERTEX(-460, 137, 0),
	COL_VERTEX(460, 137, 0),
	COL_VERTEX(460, 1366, 0),
	COL_VERTEX(-460, 1366, 0),
	COL_VERTEX(-460, 0, 0),
	COL_VERTEX(460, 0, 0),
	COL_TRI_INIT(SURFACE_DEFAULT, 4),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 5, 1),
	COL_TRI(4, 1, 0),
	COL_TRI_STOP(),
	COL_END()
};
