
// Address range: 0xb37e0 - 0xb3864
int32_t ObjIndex(int32_t a1, int32_t a2)
{
	int32_t v1 = g10;                                    // 0xb37e0
	int32_t v2 = *(int32_t *)(g23 - 0x7688);             // 0xb37f0
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7194); // 0xb37fc
	if (v3 < 1) {
		// 0xb3844
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5830));
		// branch -> 0xb3854
	} else {
		int32_t v4 = *(int32_t *)(g23 - 0x7190); // 0xb383c
		while (true) {
			int32_t result = *(int32_t *)v4; // 0xb3810
			int32_t v5 = 120 * result;       // 0xb3814
			if (a1 == *(int32_t *)((v5 || 4) + v2)) {
				// 0xb3828
				if (a2 == *(int32_t *)(v5 + 8 + v2)) {
					// 0xb3854
					// branch -> 0xb3854
					// 0xb3854
					g10 = v1;
					return result;
				}
			}
			int32_t v6 = v3 - 1; // 0xb3840
			if (v6 == 0) {
				// break -> 0xb3844
				break;
			}
			v3 = v6;
			v4 += 4;
			// continue -> 0xb3810
		}
		// 0xb3844
		// branch -> 0xb3844
		// 0xb3844
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5830));
		// branch -> 0xb3854
	}
	// 0xb3854
	g10 = v1;
	return -1;
}

// Address range: 0xb3864 - 0xb3958
int32_t AddSKingObjs(int32_t a1)
{
	// 0xb3864
	SetObjMapRange(ObjIndex(64, 34), 20, 7, 23, 10, 1);
	SetObjMapRange(ObjIndex(64, 59), 20, 14, 21, 16, 2);
	SetObjMapRange(ObjIndex(27, 37), 8, 1, 15, 11, 3);
	SetObjMapRange(ObjIndex(46, 35), 8, 1, 15, 11, 3);
	SetObjMapRange(ObjIndex(49, 53), 8, 1, 15, 11, 3);
	return SetObjMapRange(ObjIndex(27, 53), 8, 1, 15, 11, 3);
}

// Address range: 0xb3958 - 0xb39bc
int32_t AddSChamObjs(int32_t a1)
{
	// 0xb3958
	SetObjMapRange(ObjIndex(37, 30), 17, 0, 21, 5, 1);
	return SetObjMapRange(ObjIndex(37, 46), 13, 0, 16, 5, 2);
}

// Address range: 0xb39bc - 0xb3a44
int32_t AddVileObjs(int32_t a1)
{
	// 0xb39bc
	SetObjMapRange(ObjIndex(26, 45), 1, 1, 9, 10, 1);
	SetObjMapRange(ObjIndex(45, 46), 11, 1, 20, 10, 2);
	int32_t v1 = ObjIndex(35, 36); // 0xb3a18
	return SetObjMapRange(v1, 7, 11, 13, 18, 3);
}

// Address range: 0xb3a44 - 0xb3bf8
int32_t DRLG_SetMapTrans(int32_t a1)
{
	// 0xb3a44
	g36 = *(int32_t *)(g23 - 0x7588);
	int32_t v1 = LoadFileInMem(0, NULL); // 0xb3a5c
	int32_t v2 = v1;                     // bp-20
	g34 = v1;
	int32_t v3 = function_c9948();                        // 0xb3a68
	int32_t v4 = v3 + 2;                                  // 0xb3a6c
	int32_t v5 = (int32_t) * (char *)v3;                  // 0xb3a70
	unsigned char v6 = *(char *)v4;                       // 0xb3a74
	int32_t v7 = v6;                                      // 0xb3a74
	int32_t v8 = 0;                                       // r6
	int32_t v9 = 2 * v5;                                  // 0xb3a80
	int32_t v10 = 2 * v7;                                 // 0xb3a84
	int32_t v11 = v9 - 8;                                 // r3
	int32_t v12 = (12 * v5 * v10 | 2) + 2 * v5 * v7 + v4; // r8
	if (v6 == 0) {
		// 0xb3bc8
		function_c9acc(v1);
		return MemFreeDbg(&v2);
	}
	while (true) {
		// 0xb3aac
		int32_t v13; // 0xb3bbc
		if (v9 >= 1) {
			int32_t v14 = v9; // 0xb3b8c
			int32_t v15 = 0;  // 0xb3bdc
			int32_t v16;      // ctr
			int32_t v17;      // 0xb3ba8
			if (v9 >= 9) {
				// 0xb3ac0
				v16 = (v11 + 7) / 8;
				int32_t v18 = 0; // r4
				if (v11 >= 1) {
					int32_t v19 = 0; // 0xb3aec
					int32_t v20 = 0; // 0xb3ae4
					int32_t v21 = 0; // 0xb3adc
					while (true) {
						char v22 = *(char *)v12; // 0xb3ae0
						*(char *)(v20 + 1808 + *(int32_t *)g36 + v19) = v22;
						int32_t v23 = *(int32_t *)g36; // 0xb3af0
						char v24 = *(char *)(v12 + 2); // 0xb3af4
						*(char *)(v8 + v23 + 1920 + v18) = v24;
						int32_t v25 = *(int32_t *)g36; // 0xb3b04
						char v26 = *(char *)(v12 + 4); // 0xb3b08
						*(char *)(v8 + v25 + 2032 + v18) = v26;
						int32_t v27 = *(int32_t *)g36; // 0xb3b18
						char v28 = *(char *)(v12 + 6); // 0xb3b1c
						*(char *)(v8 + v27 + 2144 + v18) = v28;
						int32_t v29 = *(int32_t *)g36; // 0xb3b2c
						char v30 = *(char *)(v12 + 8); // 0xb3b30
						*(char *)(v8 + v29 + 2256 + v18) = v30;
						int32_t v31 = *(int32_t *)g36;  // 0xb3b40
						char v32 = *(char *)(v12 + 10); // 0xb3b44
						*(char *)(v8 + v31 + 2368 + v18) = v32;
						int32_t v33 = *(int32_t *)g36;  // 0xb3b54
						char v34 = *(char *)(v12 + 12); // 0xb3b58
						*(char *)(v8 + v33 + 2480 + v18) = v34;
						int32_t v35 = v12;              // 0xb3b6c
						char v36 = *(char *)(v35 + 14); // 0xb3b6c
						v12 = v35 + 16;
						int32_t v37 = v18; // 0xb3b74
						v18 = v37 + 896;
						*(char *)(v8 + *(int32_t *)g36 + 2592 + v37) = v36;
						int32_t v38 = v16 - 1; // 0xb3b84
						v16 = v38;
						int32_t v39 = v21 + 8;
						if (v38 == 0) {
							// 0xb3bdc
							v14 = v9;
							v15 = v39;
							// branch -> 0xb3bdc
							// 0xb3bdc
							v16 = v14 - v15;
							if (v14 > v15) {
								v17 = 112 * v15;
							lab_0xb3b9c:
								while (true) {
									int32_t v40 = v12;                // 0xb3ba0
									unsigned char v41 = *(char *)v40; // 0xb3ba0
									v12 = v40 + 2;
									*(char *)(v8 + v17 + 1808 + *(int32_t *)g36) = v41;
									int32_t v42 = v16 - 1; // 0xb3bb8
									v16 = v42;
									if (v42 != 0) {
										// 0xb3b9c
										v17 += 112;
										// branch -> 0xb3b9c
										continue;
									}
								}
							}
						lab_0xb3bbc:
							// 0xb3bbc
							v13 = v8 + 1;
							v8 = v13;
							if (v13 < v10) {
							lab_0xb3bbc_2:
								// 0xb3bbc
								// branch -> 0xb3aac
								break;
							}
							// 0xb3bc0
							// branch -> 0xb3bc8
							// 0xb3bc8
							function_c9acc(v2);
							return MemFreeDbg(&v2);
						}
						// 0xb3ad8
						v19 = v8;
						v20 = v18;
						v21 = v39;
						// branch -> 0xb3ad8
					}
				} else {
					v14 = v9;
					v15 = 0;
				}
			}
			// 0xb3bdc
			v16 = v14 - v15;
			if (v14 > v15) {
				v17 = 112 * v15;
				goto lab_0xb3b9c;
			}
			goto lab_0xb3bbc;
		}
		// 0xb3bbc
		v13 = v8 + 1;
		v8 = v13;
		if (v13 < v10) {
			goto lab_0xb3bbc_2;
		}
		// 0xb3bc0
		// branch -> 0xb3bc8
		// 0xb3bc8
		function_c9acc(v2);
		return MemFreeDbg(&v2);
	}
}

// Address range: 0xb3bf8 - 0xb3e80
int32_t LoadSetMap(int32_t a1, int32_t a2)
{
	int32_t v1 = g36;                        // 0xb3bf8
	int32_t v2 = g10;                        // 0xb3bfc
	int32_t v3 = g35;                        // 0xb3c04
	int32_t v4 = *(int32_t *)(g23 - 0x5868); // 0xb3c08
	g35 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x5874); // 0xb3c10
	g33 = v5;
	g32 = *(int32_t *)(g23 - 0x587c);
	g36 = *(int32_t *)(g23 - 0x583c);
	unsigned char v6 = *(char *)*(int32_t *)(g23 - 0x77e0); // 0xb3c28
	int32_t v7 = *(int32_t *)(g23 - 0x7604);                // 0xb3c2c
	if (v6 == 3) {
		// 0xb3d60
		LoadPreL1Dungeon(v4, 20, 50);
		LoadL1Dungeon(*(int32_t *)(g23 - 0x586c), 20, 50);
		LoadPalette(*(int32_t *)(g23 - 0x5870));
		AddL1Objs(0, 0, 112, 112);
		int32_t result = DRLG_SetMapTrans(g35); // 0xb3da0
		// branch -> 0xb3e60
		// 0xb3e60
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result;
	}
	// 0xb3c38
	int32_t result2; // 0xb3e7c
	if (v6 > 3) {
		// 0xb3c4c
		if (v6 == 5) {
			char v8 = *(char *)(v7 + 362); // 0xb3dec
			if (v8 == 3) {
				// 0xb3df8
				*(char *)(v7 + 376) = 4;
				// branch -> 0xb3e14
			} else {
				// 0xb3e04
				if (v8 == 2) {
					// 0xb3e0c
					*(char *)(v7 + 376) = 3;
					// branch -> 0xb3e14
				}
			}
			// 0xb3e14
			LoadPreL1Dungeon(g32, 35, 36);
			LoadL1Dungeon(*(int32_t *)(g23 - 0x5880), 35, 36);
			LoadPalette(g36);
			AddVileObjs(AddL1Objs(0, 0, 112, 112));
			result2 = InitNoTriggers(DRLG_SetMapTrans(g32));
			// branch -> 0xb3e60
		} else {
			// 0xb3c54
			if (v6 <= 5) {
				char *v9 = (char *)(v7 + 314); // 0xb3da8
				if (*v9 == 1) {
					// 0xb3db4
					*v9 = 2;
					v5 = g33;
					// branch -> 0xb3dbc
				}
				// 0xb3dbc
				LoadPreL3Dungeon(v5, 19, 50);
				LoadL3Dungeon(g33, 20, 50);
				int32_t v10 = LoadPalette(*(int32_t *)(g23 - 0x5878)); // 0xb3de0
				result2 = InitPWaterTriggers(v10);
				// branch -> 0xb3e60
			} else {
				result2 = v7;
			}
		}
		// 0xb3e60
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result2;
	}
	// 0xb3c3c
	if (v6 == 1) {
		char *v11 = (char *)(v7 + 290); // 0xb3c60
		if (*v11 == 1) {
			// 0xb3c6c
			*v11 = 2;
			*(char *)(v7 + 303) = 1;
			// branch -> 0xb3c7c
		}
		// 0xb3c7c
		LoadPreL1Dungeon(*(int32_t *)(g23 - 0x5834), 83, 45);
		LoadL1Dungeon(*(int32_t *)(g23 - 0x5838), 83, 45);
		LoadPalette(g36);
		DRLG_AreaTrans(2, (char *)*(int32_t *)(g23 - 0x5840));
		DRLG_ListTrans(2, (char *)*(int32_t *)(g23 - 0x5844));
		DRLG_AreaTrans(5, (char *)*(int32_t *)(g23 - 0x5848));
		DRLG_ListTrans(7, (char *)*(int32_t *)(g23 - 0x584c));
		int32_t v12 = AddL1Objs(0, 0, 112, 112); // 0xb3ce4
		result2 = InitSKingTriggers(AddSKingObjs(v12));
		// branch -> 0xb3e60
	} else {
		// 0xb3c44
		if (v6 != 0) {
			// 0xb3cf4
			LoadPreL2Dungeon(*(int32_t *)(g23 - 0x5850), 69, 39);
			LoadL2Dungeon(*(int32_t *)(g23 - 0x5854), 69, 39);
			LoadPalette(*(int32_t *)(g23 - 0x5858));
			DRLG_ListTrans(5, (char *)*(int32_t *)(g23 - 0x585c));
			DRLG_AreaTrans(2, (char *)*(int32_t *)(g23 - 0x5860));
			DRLG_ListTrans(9, (char *)*(int32_t *)(g23 - 0x5864));
			int32_t v13 = AddL2Objs(0, 0, 112, 112); // 0xb3d50
			result2 = InitSChambTriggers(AddSChamObjs(v13));
			// branch -> 0xb3e60
		} else {
			result2 = v7;
		}
	}
	// 0xb3e60
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result2;
}
