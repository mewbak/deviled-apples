
// Address range: 0x55f04 - 0x55f28
int32_t FreeInvGFX(int32_t a1)
{
	int32_t result = MemFreeDbg((int32_t *)(g23 - 0x4e14)); // 0x55f14
	return result;
}

// Address range: 0x55f28 - 0x55fc4
int32_t InitInv(int32_t a1)
{
	int32_t v1 = g10;                                                  // 0x55f28
	int32_t v2 = *(int32_t *)(g23 - 0x77ac);                           // 0x55f2c
	int32_t v3 = 0x55ec * *(int32_t *)v2 + *(int32_t *)(g23 - 0x77a8); // 0x55f44
	unsigned char v4 = *(char *)(v3 + 348);                            // 0x55f48
	int32_t result;                                                    // r3
	int32_t v5;                                                        // 0x55fa0
	if (v4 == 0) {
		// 0x55f54
		*(int32_t *)(g23 - 0x4e14) = LoadFileInMem(*(int32_t *)(g23 - 0x6144), NULL);
		// branch -> 0x55fa0
		// 0x55fa0
		v5 = g23;
		result = *(int32_t *)(v5 - 0x7670);
		*(int32_t *)*(int32_t *)(v5 - 0x77bc) = 0;
		*(int32_t *)result = 0;
		g10 = v1;
		return result;
	}
	// 0x55f68
	if (v4 == 1) {
		// 0x55f74
		*(int32_t *)(g23 - 0x4e14) = LoadFileInMem(*(int32_t *)(g23 - 0x6148), NULL);
		// branch -> 0x55fa0
	} else {
		// 0x55f88
		if (v4 == 2) {
			// 0x55f90
			*(int32_t *)(g23 - 0x4e14) = LoadFileInMem(*(int32_t *)(g23 - 0x614c), NULL);
			// branch -> 0x55fa0
		}
	}
	// 0x55fa0
	v5 = g23;
	result = *(int32_t *)(v5 - 0x7670);
	*(int32_t *)*(int32_t *)(v5 - 0x77bc) = 0;
	*(int32_t *)result = 0;
	g10 = v1;
	return result;
}

// Address range: 0x55fc4 - 0x56034
int32_t InvDrawSlotBack(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7698);                      // 0x55fc4
	int32_t v2 = *(int32_t *)(g23 - 0x7804);                      // 0x55fcc
	int32_t v3 = *(int32_t *)(v1 + 4 * a2) + a1 + *(int32_t *)v2; // 0x55fdc
	// branch -> 0x55fe0
	int32_t result; // r3
	while (true) {
		int32_t v4 = a3; // r4
		int32_t v5 = v3; // 0x56010
		// branch -> 0x55fe4
		int32_t v6; // 0x56018
		while (true) {
			char *v7 = (char *)v5;  // 0x55fe4
			unsigned char v8 = *v7; // 0x55fe4
			result = v8;
			int32_t v9;  // 0x56014
			int32_t v10; // 0x56018
			if (v8 >= 176) {
				// 0x55ff0
				if (v8 > 191) {
					// 0x56004
					if (v8 >= 240) {
						// 0x5600c
						*v7 = v8 - 80;
						// branch -> 0x56014
					}
				} else {
					// 0x55ff8
					*v7 = v8 - 16;
					// branch -> 0x56014
				}
				// 0x56014
				v9 = v4 - 1;
				v4 = v9;
				v6 = v3;
				v10 = v6 + 1;
				v3 = v10;
				if (v9 == 0) {
					// break -> 0x56020
					break;
				}
				v5 = v10;
				// continue -> 0x55fe4
				continue;
			}
			// 0x56014
			v9 = v4 - 1;
			v4 = v9;
			v6 = v3;
			v10 = v6 + 1;
			v3 = v10;
			if (v9 == 0) {
				// break -> 0x56020
				break;
			}
			v5 = v10;
			// continue -> 0x55fe4
		}
		int32_t v11 = g39 - 1; // 0x56020
		g39 = v11;
		if (v11 == 0) {
			// break -> 0x56030
			break;
		}
		v3 = v6 - 767 - a3;
		// continue -> 0x55fe0
	}
	// 0x56030
	return result;
}

// Address range: 0x56034 - 0x56a18
int32_t DrawInv(int32_t a1)
{
	// 0x56034
	g27 = g23 + 0x35ec;
	g29 = g23 - 0x2718;
	CelDecodeOnly(384, 511, *(int32_t *)(g23 - 0x4e14), 1, 320);
	int32_t v1;
	int32_t v2;
	int32_t v3;
	int32_t v4;
	int32_t v5;  // 0x561b0
	int32_t v6;  // 0x561bc
	int32_t v7;  // 0x56210
	int32_t v8;  // 0x5621014
	int32_t v9;  // 0x56228
	int32_t v10; // 0x56230
	int32_t v11; // 0x56268
	int32_t v12; // 0x5626c
	int32_t v13; // 0x562b4
	int32_t v14; // 0x562c0
	int32_t v15; // 0x56314
	int32_t v16; // 0x5631420
	int32_t v17; // 0x5632c
	int32_t v18; // 0x56334
	int32_t v19; // 0x5636c
	int32_t v20; // 0x56370
	int32_t v21; // 0x563b8
	int32_t v22; // 0x563c4
	int32_t v23; // 0x56418
	int32_t v24; // 0x5641826
	int32_t v25; // 0x56430
	int32_t v26; // 0x56438
	int32_t v27; // 0x56470
	int32_t v28; // 0x56474
	int32_t v29; // 0x56490
	int32_t v30; // 0x56498
	int32_t v31; // 0x564bc
	int32_t v32; // 0x564c4
	int32_t v33; // 0x56554
	int32_t v34; // 0x5655432
	int32_t v35; // 0x56564
	int32_t v36; // 0x5656c
	int32_t v37; // 0x565a4
	int32_t v38; // 0x565a8
	int32_t v39; // 0x565ac
	int32_t v40; // 0x565b0
	int32_t v41; // 0x565c4
	int32_t v42; // 0x565cc
	int32_t v43; // 0x56648
	int32_t v44; // 0x56650
	int32_t v45; // 0x56674
	int32_t v46; // 0x5667c
	int32_t v47; // 0x5670c
	int32_t v48; // 0x5670c42
	int32_t v49; // 0x5671c
	int32_t v50; // 0x56724
	int32_t v51; // 0x5675c
	int32_t v52; // 0x56760
	int32_t v53; // 0x56764
	int32_t v54; // 0x56768
	int32_t v55; // 0x567a8
	int32_t v56; // 0x567b4
	int32_t v57; // 0x56808
	int32_t v58; // 0x5680850
	int32_t v59; // 0x56820
	int32_t v60; // 0x56828
	int32_t v61; // 0x56860
	int32_t v62; // 0x56864
	int32_t v63; // 0x561cc
	int32_t v64; // 0x562d0
	int32_t v65; // 0x563d4
	int32_t v66; // 0x564cc
	int32_t v67; // 0x564d0
	int32_t v68; // 0x56684
	int32_t v69; // 0x56688
	int32_t v70; // 0x567c4
	int32_t v71; // 0x561bc
	int32_t v72; // 0x56264
	int32_t v73; // 0x562c0
	int32_t v74; // 0x56368
	int32_t v75; // 0x563c4
	int32_t v76; // 0x5646c
	int32_t v77; // 0x564c4
	int32_t v78; // 0x565a0
	int32_t v79; // 0x5667c
	int32_t v80; // 0x56758
	int32_t v81; // 0x567b4
	int32_t v82; // 0x5685c
	int32_t v83; // 0x561d4
	int32_t v84; // 0x562d8
	int32_t v85; // 0x563dc
	int32_t v86; // 0x564d4
	int32_t v87; // 0x5668c
	int32_t v88; // 0x567cc
	if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 1184) != -1) {
		// 0x56098
		g39 = 56;
		InvDrawSlotBack(517, 219, 56, 56);
		int32_t v89 = g36 + 0x55ec * *(int32_t *)g35; // 0x560b8
		int32_t v90 = *(int32_t *)(v89 + 1368) + 12;  // 0x560c4
		int32_t v91 = *(int32_t *)(g32 + 4 * v90);    // 0x560cc
		g26 = v91;
		g25 = v90;
		int32_t v92 = v91; // 0x56168
		int32_t v93 = v90; // 0x56164
		if (*(char *)g31 == 0) {
			int32_t v94 = 197; // 0x5610c8
			if (*(char *)(v89 + 1236) != 0) {
				// 0x560e8
				v94 = 181;
				// branch -> 0x560ec
			}
			if (*(int32_t *)(v89 + 1532) == 0) {
				// 0x560fc
				v94 = 229;
				// branch -> 0x56100
			}
			// 0x56100
			g40 = v90;
			g41 = v91;
			g37 = 517;
			g38 = 219;
			g42 = 0;
			g13 = 8;
			CelDecodeClr(v94 % 256, 517, 219, *(int32_t *)g30, v90, v91, 0);
			v92 = g26;
			v93 = g25;
			// branch -> 0x56124
		}
		int32_t v95 = *(int32_t *)g30; // 0x56160
		g39 = v93;
		g40 = v92;
		g37 = 219;
		g41 = 0;
		g42 = 8;
		if (*(int32_t *)(0x55ec * *(int32_t *)g35 + g36 + 1532) == 0) {
			// 0x56160
			g13 = 1;
			CelDrawHdrLightRed_part(517, 219, v95, v93, v92, 0, 8);
			// branch -> 0x56184
		} else {
			// 0x5613c
			CelDrawHdrOnly(517, 219, v95, v93, v92, 0, 8);
			// branch -> 0x56184
		}
		// 0x56184
		int32_t v96;  // 0x56888
		int32_t v97;  // 0x568a8
		int32_t v98;  // 0x568c4
		int32_t v99;  // 0x568c8
		int32_t v100; // 0x56894
		if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 1552) != -1) {
			// 0x5619c
			g39 = 28;
			InvDrawSlotBack(432, 365, 28, 28);
			v5 = g35;
			v6 = g36;
			v71 = v6 + 0x55ec * *(int32_t *)v5;
			v63 = *(int32_t *)(v71 + 1736) + 12;
			g26 = v63;
			v83 = *(int32_t *)(g32 + 4 * v63);
			g25 = v83;
			v12 = v83;
			v11 = v63;
			v10 = v6;
			v9 = v5;
			if (*(char *)g31 == 1) {
				// 0x561dc
				v8 = 197;
				if (*(char *)(v71 + 1604) != 0) {
					// 0x561ec
					v8 = 181;
					// branch -> 0x561f0
				}
				// 0x561f0
				v7 = v8;
				if (*(int32_t *)(v71 + 1900) == 0) {
					// 0x56200
					v7 = 229;
					// branch -> 0x56204
				}
				// 0x56204
				g40 = v63;
				g41 = v83;
				g37 = 432;
				g38 = 365;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v7 % 256, 432, 365, *(int32_t *)g30, v63, v83, 0);
				v12 = g25;
				v11 = g26;
				v10 = g36;
				v9 = g35;
				// branch -> 0x56228
			}
			// 0x56228
			v72 = *(int32_t *)g30;
			g39 = v11;
			g40 = v12;
			g37 = 365;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v9 + v10 + 1900) == 0) {
				// 0x56264
				g13 = 1;
				CelDrawHdrLightRed_part(432, 365, v72, v11, v12, 0, 8);
				// branch -> 0x56288
			} else {
				// 0x56240
				CelDrawHdrOnly(432, 365, v72, v11, v12, 0, 8);
				// branch -> 0x56288
			}
			// 0x56288
			if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 1920) != -1) {
				// 0x562a0
				g39 = 28;
				InvDrawSlotBack(633, 365, 28, 28);
				v13 = g35;
				v14 = g36;
				v73 = v14 + 0x55ec * *(int32_t *)v13;
				v64 = *(int32_t *)(v73 + 2104) + 12;
				g26 = v64;
				v84 = *(int32_t *)(g32 + 4 * v64);
				g25 = v84;
				v20 = v84;
				v19 = v64;
				v18 = v14;
				v17 = v13;
				if (*(char *)g31 == 2) {
					// 0x562e0
					v16 = 197;
					if (*(char *)(v73 + 1972) != 0) {
						// 0x562f0
						v16 = 181;
						// branch -> 0x562f4
					}
					// 0x562f4
					v15 = v16;
					if (*(int32_t *)(v73 + 2268) == 0) {
						// 0x56304
						v15 = 229;
						// branch -> 0x56308
					}
					// 0x56308
					g40 = v64;
					g41 = v84;
					g37 = 633;
					g38 = 365;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v15 % 256, 633, 365, *(int32_t *)g30, v64, v84, 0);
					v20 = g25;
					v19 = g26;
					v18 = g36;
					v17 = g35;
					// branch -> 0x5632c
				}
				// 0x5632c
				v74 = *(int32_t *)g30;
				g39 = v19;
				g40 = v20;
				g37 = 365;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v17 + v18 + 2268) == 0) {
					// 0x56368
					g13 = 1;
					CelDrawHdrLightRed_part(633, 365, v74, v19, v20, 0, 8);
					// branch -> 0x5638c
				} else {
					// 0x56344
					CelDrawHdrOnly(633, 365, v74, v19, v20, 0, 8);
					// branch -> 0x5638c
				}
				// 0x5638c
				if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 2288) != -1) {
					// 0x563a4
					g39 = 28;
					InvDrawSlotBack(589, 220, 28, 28);
					v21 = g35;
					v22 = g36;
					v75 = v22 + 0x55ec * *(int32_t *)v21;
					v65 = *(int32_t *)(v75 + 2472) + 12;
					g26 = v65;
					v85 = *(int32_t *)(g32 + 4 * v65);
					g25 = v85;
					v28 = v85;
					v27 = v65;
					v26 = v22;
					v25 = v21;
					if (*(char *)g31 == 3) {
						// 0x563e4
						v24 = 197;
						if (*(char *)(v75 + 2340) != 0) {
							// 0x563f4
							v24 = 181;
							// branch -> 0x563f8
						}
						// 0x563f8
						v23 = v24;
						if (*(int32_t *)(v75 + 2636) == 0) {
							// 0x56408
							v23 = 229;
							// branch -> 0x5640c
						}
						// 0x5640c
						g40 = v65;
						g41 = v85;
						g37 = 589;
						g38 = 220;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v23 % 256, 589, 220, *(int32_t *)g30, v65, v85, 0);
						v28 = g25;
						v27 = g26;
						v26 = g36;
						v25 = g35;
						// branch -> 0x56430
					}
					// 0x56430
					v76 = *(int32_t *)g30;
					g39 = v27;
					g40 = v28;
					g37 = 220;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v25 + v26 + 2636) == 0) {
						// 0x5646c
						g13 = 1;
						CelDrawHdrLightRed_part(589, 220, v76, v27, v28, 0, 8);
						// branch -> 0x56490
					} else {
						// 0x56448
						CelDrawHdrOnly(589, 220, v76, v27, v28, 0, 8);
						// branch -> 0x56490
					}
					// 0x56490
					v29 = g35;
					v30 = g36;
					v44 = v30;
					v43 = v29;
					if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
						// 0x564a8
						g39 = 84;
						InvDrawSlotBack(401, 320, 56, 84);
						v31 = g35;
						v32 = g36;
						v77 = v32 + 0x55ec * *(int32_t *)v31;
						v66 = *(int32_t *)(v77 + 2840) + 12;
						g26 = v66;
						v67 = 4 * v66;
						v86 = *(int32_t *)(g32 + v67);
						g25 = v86;
						v1 = v86 == 28 ? 415 : 401;
						g24 = v1;
						v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
						g22 = v4;
						v40 = v86;
						v39 = v66;
						v38 = v4;
						v37 = v1;
						v36 = v32;
						v35 = v31;
						if (*(char *)g31 == 4) {
							// 0x56514
							v34 = 197;
							if (*(char *)(v77 + 2708) != 0) {
								// 0x56528
								v34 = 181;
								// branch -> 0x5652c
							}
							// 0x5652c
							v33 = v34;
							if (*(int32_t *)(v77 + 3004) == 0) {
								// 0x5653c
								v33 = 229;
								// branch -> 0x56540
							}
							// 0x56540
							g37 = v1;
							g38 = v4;
							g40 = v66;
							g41 = v86;
							g42 = 0;
							g13 = 8;
							CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
							v40 = g25;
							v39 = g26;
							v38 = g22;
							v37 = g24;
							v36 = g36;
							v35 = g35;
							// branch -> 0x56564
						}
						// 0x56564
						v78 = *(int32_t *)g30;
						g37 = v38;
						g39 = v39;
						g40 = v40;
						g41 = 0;
						g42 = 8;
						if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
							// 0x565a0
							g13 = 1;
							CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
							// branch -> 0x565c4
						} else {
							// 0x5657c
							CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
							// branch -> 0x565c4
						}
						// 0x565c4
						v41 = g35;
						v42 = g36;
						if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
							// 0x565dc
							g39 = 84;
							InvDrawSlotBack(631, 320, 56, 84);
							*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
							*(int32_t *)g28 = 1;
							g41 = 8;
							CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
							*(int32_t *)g28 = 0;
							v44 = g36;
							v43 = g35;
							// branch -> 0x56648
						} else {
							v44 = v42;
							v43 = v41;
						}
					}
					// 0x56648
					if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
						// 0x56660
						g39 = 84;
						InvDrawSlotBack(631, 320, 56, 84);
						v45 = g35;
						v46 = g36;
						v79 = v46 + 0x55ec * *(int32_t *)v45;
						v68 = *(int32_t *)(v79 + 3208) + 12;
						v69 = 4 * v68;
						v87 = *(int32_t *)(g32 + v69);
						g26 = v87;
						v2 = v87 == 28 ? 645 : 633;
						g25 = v2;
						v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
						v54 = v87;
						v53 = v68;
						v52 = v3;
						v51 = v2;
						v50 = v46;
						v49 = v45;
						if (*(char *)g31 == 5) {
							// 0x566cc
							v48 = 197;
							if (*(char *)(v79 + 3076) != 0) {
								// 0x566e0
								v48 = 181;
								// branch -> 0x566e4
							}
							// 0x566e4
							v47 = v48;
							if (*(int32_t *)(v79 + 3372) == 0) {
								// 0x566f4
								v47 = 229;
								// branch -> 0x566f8
							}
							// 0x566f8
							g37 = v2;
							g38 = v3;
							g40 = v68;
							g41 = v87;
							g42 = 0;
							g13 = 8;
							CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
							v54 = g26;
							v53 = g28;
							v52 = g29;
							v51 = g25;
							v50 = g36;
							v49 = g35;
							// branch -> 0x5671c
						}
						// 0x5671c
						v80 = *(int32_t *)g30;
						g37 = v52;
						g39 = v53;
						g40 = v54;
						g41 = 0;
						g42 = 8;
						if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
							// 0x56758
							g13 = 1;
							CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
							// branch -> 0x5677c
						} else {
							// 0x56734
							CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
							// branch -> 0x5677c
						}
						// 0x5677c
						if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
							// 0x56794
							g39 = 84;
							InvDrawSlotBack(517, 320, 56, 84);
							v55 = g35;
							v56 = g36;
							v81 = v56 + 0x55ec * *(int32_t *)v55;
							v70 = *(int32_t *)(v81 + 3576) + 12;
							g22 = v70;
							v88 = *(int32_t *)(g32 + 4 * v70);
							g24 = v88;
							v62 = v88;
							v61 = v70;
							v60 = v56;
							v59 = v55;
							if (*(char *)g31 == 6) {
								// 0x567d4
								v58 = 197;
								if (*(char *)(v81 + 3444) != 0) {
									// 0x567e4
									v58 = 181;
									// branch -> 0x567e8
								}
								// 0x567e8
								v57 = v58;
								if (*(int32_t *)(v81 + 3740) == 0) {
									// 0x567f8
									v57 = 229;
									// branch -> 0x567fc
								}
								// 0x567fc
								g40 = v70;
								g41 = v88;
								g37 = 517;
								g38 = 320;
								g42 = 0;
								g13 = 8;
								CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
								v62 = g24;
								v61 = g22;
								v60 = g36;
								v59 = g35;
								// branch -> 0x56820
							}
							// 0x56820
							v82 = *(int32_t *)g30;
							g39 = v61;
							g40 = v62;
							g37 = 320;
							g41 = 0;
							g42 = 8;
							if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
								// 0x5685c
								g13 = 1;
								CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
								// branch -> 0x56880
							} else {
								// 0x56838
								CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
								// branch -> 0x56880
							}
							// 0x56880
							g24 = 0;
							v96 = g27;
							g22 = v96;
							v97 = v96;
							v100 = 0;
							// branch -> 0x5688c
							while (true) {
								// 0x5688c
								v99 = v97;
								v98 = v100;
								if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) != 0) {
								lab_0x568a8_24:;
									int32_t v101 = *(int32_t *)(v97 + 204); // 0x568b0
									g39 = 28;
									InvDrawSlotBack(*(int32_t *)(v97 + 200) + 64, v101 + 159, 28, 28);
									v99 = g22;
									v98 = g24;
									// branch -> 0x568c4
								}
							lab_0x568c4_24:;
								int32_t v102 = v98 + 1; // 0x568c4
								g24 = v102;
								int32_t v103 = v99 + 8; // 0x568c8
								g22 = v103;
								if (v102 >= 40) {
									// break -> 0x568d4
									break;
								}
								v97 = v103;
								v100 = v102;
								// continue -> 0x5688c
							}
							// 0x568d4
							g25 = 0;
							int32_t v104 = 0; // 0x568e4
							// branch -> 0x568e0
							int32_t result; // 0x56a14
							while (true) {
								int32_t v105 = g36 + 0x55ec * *(int32_t *)g35;        // 0x568ec
								unsigned char v106 = *(char *)(v105 + v104 + 0x482c); // 0x568f0
								int32_t v107 = v106;                                  // 0x568f4
								result = v106;
								int32_t v108; // 0x569f4
								if (v106 >= 1) {
									int32_t v109 = 368 * v107 - 368;               // 0x56908
									int32_t v110 = v109 + v105;                    // 0x56910
									int32_t v111 = *(int32_t *)(v110 + 3944) + 12; // 0x56920
									int32_t v112 = *(int32_t *)(g32 + 4 * v111);   // 0x56928
									g26 = v112;
									int32_t v113 = v112; // 0x569d4
									int32_t v114 = v111; // 0x569cc
									if ((int32_t) * (char *)g31 == v107 + 6) {
										int32_t v115 = 197; // 0x5696861
										if (*(char *)(v110 + 3812) != 0) {
											// 0x56940
											v115 = 181;
											// branch -> 0x56944
										}
										if (*(int32_t *)(v110 + 0x100c) == 0) {
											// 0x56950
											v115 = 229;
											// branch -> 0x56954
										}
										int32_t v116 = g27; // 0x56954
										g40 = v111;
										g41 = v112;
										int32_t v117 = *(int32_t *)(v116 + 200) + 64; // 0x5696c
										g37 = v117;
										int32_t v118 = *(int32_t *)(v116 + 204) + 159; // 0x56970
										g38 = v118;
										g42 = 0;
										g13 = 8;
										CelDecodeClr(v115 % 256, v117, v118, *(int32_t *)g30, v111, v112, 0);
										v113 = g26;
										v114 = g29;
										v109 = g28;
										// branch -> 0x56980
									}
									int32_t v119 = g27; // 0x569c8
									g39 = v114;
									g40 = v113;
									int32_t v120 = *(int32_t *)g30;                // 0x569d8
									int32_t v121 = *(int32_t *)(v119 + 200) + 64;  // 0x569dc
									int32_t v122 = *(int32_t *)(v119 + 204) + 159; // 0x569e0
									g37 = v122;
									g41 = 0;
									g42 = 8;
									if (*(int32_t *)(0x55ec * *(int32_t *)g35 + v109 + 0x100c + g36) == 0) {
										// 0x569c8
										g13 = 1;
										result = CelDrawHdrLightRed_part(v121, v122, v120, v114, v113, 0, 8);
										// branch -> 0x569f4
									} else {
										// 0x5699c
										result = CelDrawHdrOnly(v121, v122, v120, v114, v113, 0, 8);
										// branch -> 0x569f4
									}
									// 0x569f4
									v108 = g25 + 1;
									g25 = v108;
									g27 += 8;
									if (v108 >= 40) {
										// break -> 0x56a04
										break;
									}
									v104 = v108;
									// continue -> 0x568e0
									continue;
								}
								// 0x569f4
								v108 = g25 + 1;
								g25 = v108;
								g27 += 8;
								if (v108 >= 40) {
									// break -> 0x56a04
									break;
								}
								v104 = v108;
								// continue -> 0x568e0
							}
							// 0x56a04
							return result;
						}
						// 0x56880
						g24 = 0;
						v96 = g27;
						g22 = v96;
						v97 = v96;
						v100 = 0;
						// branch -> 0x5688c
						while (true) {
							// 0x5688c
							if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
								v99 = v97;
								v98 = v100;
								goto lab_0x568c4_24;
							}
							goto lab_0x568a8_24;
						}
					}
					// 0x5677c
					if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
						// 0x56794
						g39 = 84;
						InvDrawSlotBack(517, 320, 56, 84);
						v55 = g35;
						v56 = g36;
						v81 = v56 + 0x55ec * *(int32_t *)v55;
						v70 = *(int32_t *)(v81 + 3576) + 12;
						g22 = v70;
						v88 = *(int32_t *)(g32 + 4 * v70);
						g24 = v88;
						v62 = v88;
						v61 = v70;
						v60 = v56;
						v59 = v55;
						if (*(char *)g31 == 6) {
							// 0x567d4
							v58 = 197;
							if (*(char *)(v81 + 3444) != 0) {
								// 0x567e4
								v58 = 181;
								// branch -> 0x567e8
							}
							// 0x567e8
							v57 = v58;
							if (*(int32_t *)(v81 + 3740) == 0) {
								// 0x567f8
								v57 = 229;
								// branch -> 0x567fc
							}
							// 0x567fc
							g40 = v70;
							g41 = v88;
							g37 = 517;
							g38 = 320;
							g42 = 0;
							g13 = 8;
							CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
							v62 = g24;
							v61 = g22;
							v60 = g36;
							v59 = g35;
							// branch -> 0x56820
						}
						// 0x56820
						v82 = *(int32_t *)g30;
						g39 = v61;
						g40 = v62;
						g37 = 320;
						g41 = 0;
						g42 = 8;
						if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
							// 0x5685c
							g13 = 1;
							CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
							// branch -> 0x56880
						} else {
							// 0x56838
							CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
							// branch -> 0x56880
						}
						// 0x56880
						g24 = 0;
						v96 = g27;
						g22 = v96;
						v97 = v96;
						v100 = 0;
						// branch -> 0x5688c
						while (true) {
							// 0x5688c
							if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
								v99 = v97;
								v98 = v100;
								goto lab_0x568c4_24;
							}
							goto lab_0x568a8_24;
						}
					}
					// 0x56880
					g24 = 0;
					v96 = g27;
					g22 = v96;
					v97 = v96;
					v100 = 0;
					// branch -> 0x5688c
					while (true) {
						// 0x5688c
						if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
							v99 = v97;
							v98 = v100;
							goto lab_0x568c4_24;
						}
						goto lab_0x568a8_24;
					}
				}
				// 0x56490
				v29 = g35;
				v30 = g36;
				v44 = v30;
				v43 = v29;
				if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
					// 0x564a8
					g39 = 84;
					InvDrawSlotBack(401, 320, 56, 84);
					v31 = g35;
					v32 = g36;
					v77 = v32 + 0x55ec * *(int32_t *)v31;
					v66 = *(int32_t *)(v77 + 2840) + 12;
					g26 = v66;
					v67 = 4 * v66;
					v86 = *(int32_t *)(g32 + v67);
					g25 = v86;
					v1 = v86 == 28 ? 415 : 401;
					g24 = v1;
					v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
					g22 = v4;
					v40 = v86;
					v39 = v66;
					v38 = v4;
					v37 = v1;
					v36 = v32;
					v35 = v31;
					if (*(char *)g31 == 4) {
						// 0x56514
						v34 = 197;
						if (*(char *)(v77 + 2708) != 0) {
							// 0x56528
							v34 = 181;
							// branch -> 0x5652c
						}
						// 0x5652c
						v33 = v34;
						if (*(int32_t *)(v77 + 3004) == 0) {
							// 0x5653c
							v33 = 229;
							// branch -> 0x56540
						}
						// 0x56540
						g37 = v1;
						g38 = v4;
						g40 = v66;
						g41 = v86;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
						v40 = g25;
						v39 = g26;
						v38 = g22;
						v37 = g24;
						v36 = g36;
						v35 = g35;
						// branch -> 0x56564
					}
					// 0x56564
					v78 = *(int32_t *)g30;
					g37 = v38;
					g39 = v39;
					g40 = v40;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
						// 0x565a0
						g13 = 1;
						CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
						// branch -> 0x565c4
					} else {
						// 0x5657c
						CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
						// branch -> 0x565c4
					}
					// 0x565c4
					v41 = g35;
					v42 = g36;
					if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
						// 0x565dc
						g39 = 84;
						InvDrawSlotBack(631, 320, 56, 84);
						*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
						*(int32_t *)g28 = 1;
						g41 = 8;
						CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
						*(int32_t *)g28 = 0;
						v44 = g36;
						v43 = g35;
						// branch -> 0x56648
					} else {
						v44 = v42;
						v43 = v41;
					}
				}
				// 0x56648
				if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
					// 0x56660
					g39 = 84;
					InvDrawSlotBack(631, 320, 56, 84);
					v45 = g35;
					v46 = g36;
					v79 = v46 + 0x55ec * *(int32_t *)v45;
					v68 = *(int32_t *)(v79 + 3208) + 12;
					v69 = 4 * v68;
					v87 = *(int32_t *)(g32 + v69);
					g26 = v87;
					v2 = v87 == 28 ? 645 : 633;
					g25 = v2;
					v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
					v54 = v87;
					v53 = v68;
					v52 = v3;
					v51 = v2;
					v50 = v46;
					v49 = v45;
					if (*(char *)g31 == 5) {
						// 0x566cc
						v48 = 197;
						if (*(char *)(v79 + 3076) != 0) {
							// 0x566e0
							v48 = 181;
							// branch -> 0x566e4
						}
						// 0x566e4
						v47 = v48;
						if (*(int32_t *)(v79 + 3372) == 0) {
							// 0x566f4
							v47 = 229;
							// branch -> 0x566f8
						}
						// 0x566f8
						g37 = v2;
						g38 = v3;
						g40 = v68;
						g41 = v87;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
						v54 = g26;
						v53 = g28;
						v52 = g29;
						v51 = g25;
						v50 = g36;
						v49 = g35;
						// branch -> 0x5671c
					}
					// 0x5671c
					v80 = *(int32_t *)g30;
					g37 = v52;
					g39 = v53;
					g40 = v54;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
						// 0x56758
						g13 = 1;
						CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
						// branch -> 0x5677c
					} else {
						// 0x56734
						CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
						// branch -> 0x5677c
					}
					// 0x5677c
					if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
						// 0x56794
						g39 = 84;
						InvDrawSlotBack(517, 320, 56, 84);
						v55 = g35;
						v56 = g36;
						v81 = v56 + 0x55ec * *(int32_t *)v55;
						v70 = *(int32_t *)(v81 + 3576) + 12;
						g22 = v70;
						v88 = *(int32_t *)(g32 + 4 * v70);
						g24 = v88;
						v62 = v88;
						v61 = v70;
						v60 = v56;
						v59 = v55;
						if (*(char *)g31 == 6) {
							// 0x567d4
							v58 = 197;
							if (*(char *)(v81 + 3444) != 0) {
								// 0x567e4
								v58 = 181;
								// branch -> 0x567e8
							}
							// 0x567e8
							v57 = v58;
							if (*(int32_t *)(v81 + 3740) == 0) {
								// 0x567f8
								v57 = 229;
								// branch -> 0x567fc
							}
							// 0x567fc
							g40 = v70;
							g41 = v88;
							g37 = 517;
							g38 = 320;
							g42 = 0;
							g13 = 8;
							CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
							v62 = g24;
							v61 = g22;
							v60 = g36;
							v59 = g35;
							// branch -> 0x56820
						}
						// 0x56820
						v82 = *(int32_t *)g30;
						g39 = v61;
						g40 = v62;
						g37 = 320;
						g41 = 0;
						g42 = 8;
						if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
							// 0x5685c
							g13 = 1;
							CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
							// branch -> 0x56880
						} else {
							// 0x56838
							CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
							// branch -> 0x56880
						}
						// 0x56880
						g24 = 0;
						v96 = g27;
						g22 = v96;
						v97 = v96;
						v100 = 0;
						// branch -> 0x5688c
						while (true) {
							// 0x5688c
							if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
								v99 = v97;
								v98 = v100;
								goto lab_0x568c4_24;
							}
							goto lab_0x568a8_24;
						}
					}
					// 0x56880
					g24 = 0;
					v96 = g27;
					g22 = v96;
					v97 = v96;
					v100 = 0;
					// branch -> 0x5688c
					while (true) {
						// 0x5688c
						if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
							v99 = v97;
							v98 = v100;
							goto lab_0x568c4_24;
						}
						goto lab_0x568a8_24;
					}
				}
				// 0x5677c
				if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
					// 0x56794
					g39 = 84;
					InvDrawSlotBack(517, 320, 56, 84);
					v55 = g35;
					v56 = g36;
					v81 = v56 + 0x55ec * *(int32_t *)v55;
					v70 = *(int32_t *)(v81 + 3576) + 12;
					g22 = v70;
					v88 = *(int32_t *)(g32 + 4 * v70);
					g24 = v88;
					v62 = v88;
					v61 = v70;
					v60 = v56;
					v59 = v55;
					if (*(char *)g31 == 6) {
						// 0x567d4
						v58 = 197;
						if (*(char *)(v81 + 3444) != 0) {
							// 0x567e4
							v58 = 181;
							// branch -> 0x567e8
						}
						// 0x567e8
						v57 = v58;
						if (*(int32_t *)(v81 + 3740) == 0) {
							// 0x567f8
							v57 = 229;
							// branch -> 0x567fc
						}
						// 0x567fc
						g40 = v70;
						g41 = v88;
						g37 = 517;
						g38 = 320;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
						v62 = g24;
						v61 = g22;
						v60 = g36;
						v59 = g35;
						// branch -> 0x56820
					}
					// 0x56820
					v82 = *(int32_t *)g30;
					g39 = v61;
					g40 = v62;
					g37 = 320;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
						// 0x5685c
						g13 = 1;
						CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					} else {
						// 0x56838
						CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					}
					// 0x56880
					g24 = 0;
					v96 = g27;
					g22 = v96;
					v97 = v96;
					v100 = 0;
					// branch -> 0x5688c
					while (true) {
						// 0x5688c
						if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
							v99 = v97;
							v98 = v100;
							goto lab_0x568c4_24;
						}
						goto lab_0x568a8_24;
					}
				}
				// 0x56880
				g24 = 0;
				v96 = g27;
				g22 = v96;
				v97 = v96;
				v100 = 0;
				// branch -> 0x5688c
				while (true) {
					// 0x5688c
					if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
						v99 = v97;
						v98 = v100;
						goto lab_0x568c4_24;
					}
					goto lab_0x568a8_24;
				}
			}
			// 0x5638c
			if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 2288) != -1) {
				// 0x563a4
				g39 = 28;
				InvDrawSlotBack(589, 220, 28, 28);
				v21 = g35;
				v22 = g36;
				v75 = v22 + 0x55ec * *(int32_t *)v21;
				v65 = *(int32_t *)(v75 + 2472) + 12;
				g26 = v65;
				v85 = *(int32_t *)(g32 + 4 * v65);
				g25 = v85;
				v28 = v85;
				v27 = v65;
				v26 = v22;
				v25 = v21;
				if (*(char *)g31 == 3) {
					// 0x563e4
					v24 = 197;
					if (*(char *)(v75 + 2340) != 0) {
						// 0x563f4
						v24 = 181;
						// branch -> 0x563f8
					}
					// 0x563f8
					v23 = v24;
					if (*(int32_t *)(v75 + 2636) == 0) {
						// 0x56408
						v23 = 229;
						// branch -> 0x5640c
					}
					// 0x5640c
					g40 = v65;
					g41 = v85;
					g37 = 589;
					g38 = 220;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v23 % 256, 589, 220, *(int32_t *)g30, v65, v85, 0);
					v28 = g25;
					v27 = g26;
					v26 = g36;
					v25 = g35;
					// branch -> 0x56430
				}
				// 0x56430
				v76 = *(int32_t *)g30;
				g39 = v27;
				g40 = v28;
				g37 = 220;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v25 + v26 + 2636) == 0) {
					// 0x5646c
					g13 = 1;
					CelDrawHdrLightRed_part(589, 220, v76, v27, v28, 0, 8);
					// branch -> 0x56490
				} else {
					// 0x56448
					CelDrawHdrOnly(589, 220, v76, v27, v28, 0, 8);
					// branch -> 0x56490
				}
				// 0x56490
				v29 = g35;
				v30 = g36;
				v44 = v30;
				v43 = v29;
				if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
					// 0x564a8
					g39 = 84;
					InvDrawSlotBack(401, 320, 56, 84);
					v31 = g35;
					v32 = g36;
					v77 = v32 + 0x55ec * *(int32_t *)v31;
					v66 = *(int32_t *)(v77 + 2840) + 12;
					g26 = v66;
					v67 = 4 * v66;
					v86 = *(int32_t *)(g32 + v67);
					g25 = v86;
					v1 = v86 == 28 ? 415 : 401;
					g24 = v1;
					v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
					g22 = v4;
					v40 = v86;
					v39 = v66;
					v38 = v4;
					v37 = v1;
					v36 = v32;
					v35 = v31;
					if (*(char *)g31 == 4) {
						// 0x56514
						v34 = 197;
						if (*(char *)(v77 + 2708) != 0) {
							// 0x56528
							v34 = 181;
							// branch -> 0x5652c
						}
						// 0x5652c
						v33 = v34;
						if (*(int32_t *)(v77 + 3004) == 0) {
							// 0x5653c
							v33 = 229;
							// branch -> 0x56540
						}
						// 0x56540
						g37 = v1;
						g38 = v4;
						g40 = v66;
						g41 = v86;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
						v40 = g25;
						v39 = g26;
						v38 = g22;
						v37 = g24;
						v36 = g36;
						v35 = g35;
						// branch -> 0x56564
					}
					// 0x56564
					v78 = *(int32_t *)g30;
					g37 = v38;
					g39 = v39;
					g40 = v40;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
						// 0x565a0
						g13 = 1;
						CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
						// branch -> 0x565c4
					} else {
						// 0x5657c
						CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
						// branch -> 0x565c4
					}
					// 0x565c4
					v41 = g35;
					v42 = g36;
					if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
						// 0x565dc
						g39 = 84;
						InvDrawSlotBack(631, 320, 56, 84);
						*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
						*(int32_t *)g28 = 1;
						g41 = 8;
						CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
						*(int32_t *)g28 = 0;
						v44 = g36;
						v43 = g35;
						// branch -> 0x56648
					} else {
						v44 = v42;
						v43 = v41;
					}
				}
				// 0x56648
				if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
					// 0x56660
					g39 = 84;
					InvDrawSlotBack(631, 320, 56, 84);
					v45 = g35;
					v46 = g36;
					v79 = v46 + 0x55ec * *(int32_t *)v45;
					v68 = *(int32_t *)(v79 + 3208) + 12;
					v69 = 4 * v68;
					v87 = *(int32_t *)(g32 + v69);
					g26 = v87;
					v2 = v87 == 28 ? 645 : 633;
					g25 = v2;
					v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
					v54 = v87;
					v53 = v68;
					v52 = v3;
					v51 = v2;
					v50 = v46;
					v49 = v45;
					if (*(char *)g31 == 5) {
						// 0x566cc
						v48 = 197;
						if (*(char *)(v79 + 3076) != 0) {
							// 0x566e0
							v48 = 181;
							// branch -> 0x566e4
						}
						// 0x566e4
						v47 = v48;
						if (*(int32_t *)(v79 + 3372) == 0) {
							// 0x566f4
							v47 = 229;
							// branch -> 0x566f8
						}
						// 0x566f8
						g37 = v2;
						g38 = v3;
						g40 = v68;
						g41 = v87;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
						v54 = g26;
						v53 = g28;
						v52 = g29;
						v51 = g25;
						v50 = g36;
						v49 = g35;
						// branch -> 0x5671c
					}
					// 0x5671c
					v80 = *(int32_t *)g30;
					g37 = v52;
					g39 = v53;
					g40 = v54;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
						// 0x56758
						g13 = 1;
						CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
						// branch -> 0x5677c
					} else {
						// 0x56734
						CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
						// branch -> 0x5677c
					}
					// 0x5677c
					if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
						// 0x56794
						g39 = 84;
						InvDrawSlotBack(517, 320, 56, 84);
						v55 = g35;
						v56 = g36;
						v81 = v56 + 0x55ec * *(int32_t *)v55;
						v70 = *(int32_t *)(v81 + 3576) + 12;
						g22 = v70;
						v88 = *(int32_t *)(g32 + 4 * v70);
						g24 = v88;
						v62 = v88;
						v61 = v70;
						v60 = v56;
						v59 = v55;
						if (*(char *)g31 == 6) {
							// 0x567d4
							v58 = 197;
							if (*(char *)(v81 + 3444) != 0) {
								// 0x567e4
								v58 = 181;
								// branch -> 0x567e8
							}
							// 0x567e8
							v57 = v58;
							if (*(int32_t *)(v81 + 3740) == 0) {
								// 0x567f8
								v57 = 229;
								// branch -> 0x567fc
							}
							// 0x567fc
							g40 = v70;
							g41 = v88;
							g37 = 517;
							g38 = 320;
							g42 = 0;
							g13 = 8;
							CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
							v62 = g24;
							v61 = g22;
							v60 = g36;
							v59 = g35;
							// branch -> 0x56820
						}
						// 0x56820
						v82 = *(int32_t *)g30;
						g39 = v61;
						g40 = v62;
						g37 = 320;
						g41 = 0;
						g42 = 8;
						if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
							// 0x5685c
							g13 = 1;
							CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
							// branch -> 0x56880
						} else {
							// 0x56838
							CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
							// branch -> 0x56880
						}
						// 0x56880
						g24 = 0;
						v96 = g27;
						g22 = v96;
						v97 = v96;
						v100 = 0;
						// branch -> 0x5688c
						while (true) {
							// 0x5688c
							if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
								v99 = v97;
								v98 = v100;
								goto lab_0x568c4_24;
							}
							goto lab_0x568a8_24;
						}
					}
					// 0x56880
					g24 = 0;
					v96 = g27;
					g22 = v96;
					v97 = v96;
					v100 = 0;
					// branch -> 0x5688c
					while (true) {
						// 0x5688c
						if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
							v99 = v97;
							v98 = v100;
							goto lab_0x568c4_24;
						}
						goto lab_0x568a8_24;
					}
				}
				// 0x5677c
				if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
					// 0x56794
					g39 = 84;
					InvDrawSlotBack(517, 320, 56, 84);
					v55 = g35;
					v56 = g36;
					v81 = v56 + 0x55ec * *(int32_t *)v55;
					v70 = *(int32_t *)(v81 + 3576) + 12;
					g22 = v70;
					v88 = *(int32_t *)(g32 + 4 * v70);
					g24 = v88;
					v62 = v88;
					v61 = v70;
					v60 = v56;
					v59 = v55;
					if (*(char *)g31 == 6) {
						// 0x567d4
						v58 = 197;
						if (*(char *)(v81 + 3444) != 0) {
							// 0x567e4
							v58 = 181;
							// branch -> 0x567e8
						}
						// 0x567e8
						v57 = v58;
						if (*(int32_t *)(v81 + 3740) == 0) {
							// 0x567f8
							v57 = 229;
							// branch -> 0x567fc
						}
						// 0x567fc
						g40 = v70;
						g41 = v88;
						g37 = 517;
						g38 = 320;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
						v62 = g24;
						v61 = g22;
						v60 = g36;
						v59 = g35;
						// branch -> 0x56820
					}
					// 0x56820
					v82 = *(int32_t *)g30;
					g39 = v61;
					g40 = v62;
					g37 = 320;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
						// 0x5685c
						g13 = 1;
						CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					} else {
						// 0x56838
						CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					}
					// 0x56880
					g24 = 0;
					v96 = g27;
					g22 = v96;
					v97 = v96;
					v100 = 0;
					// branch -> 0x5688c
					while (true) {
						// 0x5688c
						if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
							v99 = v97;
							v98 = v100;
							goto lab_0x568c4_24;
						}
						goto lab_0x568a8_24;
					}
				}
				// 0x56880
				g24 = 0;
				v96 = g27;
				g22 = v96;
				v97 = v96;
				v100 = 0;
				// branch -> 0x5688c
				while (true) {
					// 0x5688c
					if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
						v99 = v97;
						v98 = v100;
						goto lab_0x568c4_24;
					}
					goto lab_0x568a8_24;
				}
			}
			// 0x56490
			v29 = g35;
			v30 = g36;
			v44 = v30;
			v43 = v29;
			if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
				// 0x564a8
				g39 = 84;
				InvDrawSlotBack(401, 320, 56, 84);
				v31 = g35;
				v32 = g36;
				v77 = v32 + 0x55ec * *(int32_t *)v31;
				v66 = *(int32_t *)(v77 + 2840) + 12;
				g26 = v66;
				v67 = 4 * v66;
				v86 = *(int32_t *)(g32 + v67);
				g25 = v86;
				v1 = v86 == 28 ? 415 : 401;
				g24 = v1;
				v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
				g22 = v4;
				v40 = v86;
				v39 = v66;
				v38 = v4;
				v37 = v1;
				v36 = v32;
				v35 = v31;
				if (*(char *)g31 == 4) {
					// 0x56514
					v34 = 197;
					if (*(char *)(v77 + 2708) != 0) {
						// 0x56528
						v34 = 181;
						// branch -> 0x5652c
					}
					// 0x5652c
					v33 = v34;
					if (*(int32_t *)(v77 + 3004) == 0) {
						// 0x5653c
						v33 = 229;
						// branch -> 0x56540
					}
					// 0x56540
					g37 = v1;
					g38 = v4;
					g40 = v66;
					g41 = v86;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
					v40 = g25;
					v39 = g26;
					v38 = g22;
					v37 = g24;
					v36 = g36;
					v35 = g35;
					// branch -> 0x56564
				}
				// 0x56564
				v78 = *(int32_t *)g30;
				g37 = v38;
				g39 = v39;
				g40 = v40;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
					// 0x565a0
					g13 = 1;
					CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
					// branch -> 0x565c4
				} else {
					// 0x5657c
					CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
					// branch -> 0x565c4
				}
				// 0x565c4
				v41 = g35;
				v42 = g36;
				if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
					// 0x565dc
					g39 = 84;
					InvDrawSlotBack(631, 320, 56, 84);
					*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
					*(int32_t *)g28 = 1;
					g41 = 8;
					CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
					*(int32_t *)g28 = 0;
					v44 = g36;
					v43 = g35;
					// branch -> 0x56648
				} else {
					v44 = v42;
					v43 = v41;
				}
			}
			// 0x56648
			if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
				// 0x56660
				g39 = 84;
				InvDrawSlotBack(631, 320, 56, 84);
				v45 = g35;
				v46 = g36;
				v79 = v46 + 0x55ec * *(int32_t *)v45;
				v68 = *(int32_t *)(v79 + 3208) + 12;
				v69 = 4 * v68;
				v87 = *(int32_t *)(g32 + v69);
				g26 = v87;
				v2 = v87 == 28 ? 645 : 633;
				g25 = v2;
				v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
				v54 = v87;
				v53 = v68;
				v52 = v3;
				v51 = v2;
				v50 = v46;
				v49 = v45;
				if (*(char *)g31 == 5) {
					// 0x566cc
					v48 = 197;
					if (*(char *)(v79 + 3076) != 0) {
						// 0x566e0
						v48 = 181;
						// branch -> 0x566e4
					}
					// 0x566e4
					v47 = v48;
					if (*(int32_t *)(v79 + 3372) == 0) {
						// 0x566f4
						v47 = 229;
						// branch -> 0x566f8
					}
					// 0x566f8
					g37 = v2;
					g38 = v3;
					g40 = v68;
					g41 = v87;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
					v54 = g26;
					v53 = g28;
					v52 = g29;
					v51 = g25;
					v50 = g36;
					v49 = g35;
					// branch -> 0x5671c
				}
				// 0x5671c
				v80 = *(int32_t *)g30;
				g37 = v52;
				g39 = v53;
				g40 = v54;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
					// 0x56758
					g13 = 1;
					CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
					// branch -> 0x5677c
				} else {
					// 0x56734
					CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
					// branch -> 0x5677c
				}
				// 0x5677c
				if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
					// 0x56794
					g39 = 84;
					InvDrawSlotBack(517, 320, 56, 84);
					v55 = g35;
					v56 = g36;
					v81 = v56 + 0x55ec * *(int32_t *)v55;
					v70 = *(int32_t *)(v81 + 3576) + 12;
					g22 = v70;
					v88 = *(int32_t *)(g32 + 4 * v70);
					g24 = v88;
					v62 = v88;
					v61 = v70;
					v60 = v56;
					v59 = v55;
					if (*(char *)g31 == 6) {
						// 0x567d4
						v58 = 197;
						if (*(char *)(v81 + 3444) != 0) {
							// 0x567e4
							v58 = 181;
							// branch -> 0x567e8
						}
						// 0x567e8
						v57 = v58;
						if (*(int32_t *)(v81 + 3740) == 0) {
							// 0x567f8
							v57 = 229;
							// branch -> 0x567fc
						}
						// 0x567fc
						g40 = v70;
						g41 = v88;
						g37 = 517;
						g38 = 320;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
						v62 = g24;
						v61 = g22;
						v60 = g36;
						v59 = g35;
						// branch -> 0x56820
					}
					// 0x56820
					v82 = *(int32_t *)g30;
					g39 = v61;
					g40 = v62;
					g37 = 320;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
						// 0x5685c
						g13 = 1;
						CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					} else {
						// 0x56838
						CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					}
					// 0x56880
					g24 = 0;
					v96 = g27;
					g22 = v96;
					v97 = v96;
					v100 = 0;
					// branch -> 0x5688c
					while (true) {
						// 0x5688c
						if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
							v99 = v97;
							v98 = v100;
							goto lab_0x568c4_24;
						}
						goto lab_0x568a8_24;
					}
				}
				// 0x56880
				g24 = 0;
				v96 = g27;
				g22 = v96;
				v97 = v96;
				v100 = 0;
				// branch -> 0x5688c
				while (true) {
					// 0x5688c
					if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
						v99 = v97;
						v98 = v100;
						goto lab_0x568c4_24;
					}
					goto lab_0x568a8_24;
				}
			}
			// 0x5677c
			if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
				// 0x56794
				g39 = 84;
				InvDrawSlotBack(517, 320, 56, 84);
				v55 = g35;
				v56 = g36;
				v81 = v56 + 0x55ec * *(int32_t *)v55;
				v70 = *(int32_t *)(v81 + 3576) + 12;
				g22 = v70;
				v88 = *(int32_t *)(g32 + 4 * v70);
				g24 = v88;
				v62 = v88;
				v61 = v70;
				v60 = v56;
				v59 = v55;
				if (*(char *)g31 == 6) {
					// 0x567d4
					v58 = 197;
					if (*(char *)(v81 + 3444) != 0) {
						// 0x567e4
						v58 = 181;
						// branch -> 0x567e8
					}
					// 0x567e8
					v57 = v58;
					if (*(int32_t *)(v81 + 3740) == 0) {
						// 0x567f8
						v57 = 229;
						// branch -> 0x567fc
					}
					// 0x567fc
					g40 = v70;
					g41 = v88;
					g37 = 517;
					g38 = 320;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
					v62 = g24;
					v61 = g22;
					v60 = g36;
					v59 = g35;
					// branch -> 0x56820
				}
				// 0x56820
				v82 = *(int32_t *)g30;
				g39 = v61;
				g40 = v62;
				g37 = 320;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
					// 0x5685c
					g13 = 1;
					CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				} else {
					// 0x56838
					CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				}
				// 0x56880
				g24 = 0;
				v96 = g27;
				g22 = v96;
				v97 = v96;
				v100 = 0;
				// branch -> 0x5688c
				while (true) {
					// 0x5688c
					if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
						v99 = v97;
						v98 = v100;
						goto lab_0x568c4_24;
					}
					goto lab_0x568a8_24;
				}
			}
			// 0x56880
			g24 = 0;
			v96 = g27;
			g22 = v96;
			v97 = v96;
			v100 = 0;
			// branch -> 0x5688c
			while (true) {
				// 0x5688c
				if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
					v99 = v97;
					v98 = v100;
					goto lab_0x568c4_24;
				}
				goto lab_0x568a8_24;
			}
		}
		// 0x56288
		if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 1920) != -1) {
			// 0x562a0
			g39 = 28;
			InvDrawSlotBack(633, 365, 28, 28);
			v13 = g35;
			v14 = g36;
			v73 = v14 + 0x55ec * *(int32_t *)v13;
			v64 = *(int32_t *)(v73 + 2104) + 12;
			g26 = v64;
			v84 = *(int32_t *)(g32 + 4 * v64);
			g25 = v84;
			v20 = v84;
			v19 = v64;
			v18 = v14;
			v17 = v13;
			if (*(char *)g31 == 2) {
				// 0x562e0
				v16 = 197;
				if (*(char *)(v73 + 1972) != 0) {
					// 0x562f0
					v16 = 181;
					// branch -> 0x562f4
				}
				// 0x562f4
				v15 = v16;
				if (*(int32_t *)(v73 + 2268) == 0) {
					// 0x56304
					v15 = 229;
					// branch -> 0x56308
				}
				// 0x56308
				g40 = v64;
				g41 = v84;
				g37 = 633;
				g38 = 365;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v15 % 256, 633, 365, *(int32_t *)g30, v64, v84, 0);
				v20 = g25;
				v19 = g26;
				v18 = g36;
				v17 = g35;
				// branch -> 0x5632c
			}
			// 0x5632c
			v74 = *(int32_t *)g30;
			g39 = v19;
			g40 = v20;
			g37 = 365;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v17 + v18 + 2268) == 0) {
				// 0x56368
				g13 = 1;
				CelDrawHdrLightRed_part(633, 365, v74, v19, v20, 0, 8);
				// branch -> 0x5638c
			} else {
				// 0x56344
				CelDrawHdrOnly(633, 365, v74, v19, v20, 0, 8);
				// branch -> 0x5638c
			}
			// 0x5638c
			if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 2288) != -1) {
				// 0x563a4
				g39 = 28;
				InvDrawSlotBack(589, 220, 28, 28);
				v21 = g35;
				v22 = g36;
				v75 = v22 + 0x55ec * *(int32_t *)v21;
				v65 = *(int32_t *)(v75 + 2472) + 12;
				g26 = v65;
				v85 = *(int32_t *)(g32 + 4 * v65);
				g25 = v85;
				v28 = v85;
				v27 = v65;
				v26 = v22;
				v25 = v21;
				if (*(char *)g31 == 3) {
					// 0x563e4
					v24 = 197;
					if (*(char *)(v75 + 2340) != 0) {
						// 0x563f4
						v24 = 181;
						// branch -> 0x563f8
					}
					// 0x563f8
					v23 = v24;
					if (*(int32_t *)(v75 + 2636) == 0) {
						// 0x56408
						v23 = 229;
						// branch -> 0x5640c
					}
					// 0x5640c
					g40 = v65;
					g41 = v85;
					g37 = 589;
					g38 = 220;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v23 % 256, 589, 220, *(int32_t *)g30, v65, v85, 0);
					v28 = g25;
					v27 = g26;
					v26 = g36;
					v25 = g35;
					// branch -> 0x56430
				}
				// 0x56430
				v76 = *(int32_t *)g30;
				g39 = v27;
				g40 = v28;
				g37 = 220;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v25 + v26 + 2636) == 0) {
					// 0x5646c
					g13 = 1;
					CelDrawHdrLightRed_part(589, 220, v76, v27, v28, 0, 8);
					// branch -> 0x56490
				} else {
					// 0x56448
					CelDrawHdrOnly(589, 220, v76, v27, v28, 0, 8);
					// branch -> 0x56490
				}
				// 0x56490
				v29 = g35;
				v30 = g36;
				v44 = v30;
				v43 = v29;
				if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
					// 0x564a8
					g39 = 84;
					InvDrawSlotBack(401, 320, 56, 84);
					v31 = g35;
					v32 = g36;
					v77 = v32 + 0x55ec * *(int32_t *)v31;
					v66 = *(int32_t *)(v77 + 2840) + 12;
					g26 = v66;
					v67 = 4 * v66;
					v86 = *(int32_t *)(g32 + v67);
					g25 = v86;
					v1 = v86 == 28 ? 415 : 401;
					g24 = v1;
					v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
					g22 = v4;
					v40 = v86;
					v39 = v66;
					v38 = v4;
					v37 = v1;
					v36 = v32;
					v35 = v31;
					if (*(char *)g31 == 4) {
						// 0x56514
						v34 = 197;
						if (*(char *)(v77 + 2708) != 0) {
							// 0x56528
							v34 = 181;
							// branch -> 0x5652c
						}
						// 0x5652c
						v33 = v34;
						if (*(int32_t *)(v77 + 3004) == 0) {
							// 0x5653c
							v33 = 229;
							// branch -> 0x56540
						}
						// 0x56540
						g37 = v1;
						g38 = v4;
						g40 = v66;
						g41 = v86;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
						v40 = g25;
						v39 = g26;
						v38 = g22;
						v37 = g24;
						v36 = g36;
						v35 = g35;
						// branch -> 0x56564
					}
					// 0x56564
					v78 = *(int32_t *)g30;
					g37 = v38;
					g39 = v39;
					g40 = v40;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
						// 0x565a0
						g13 = 1;
						CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
						// branch -> 0x565c4
					} else {
						// 0x5657c
						CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
						// branch -> 0x565c4
					}
					// 0x565c4
					v41 = g35;
					v42 = g36;
					if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
						// 0x565dc
						g39 = 84;
						InvDrawSlotBack(631, 320, 56, 84);
						*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
						*(int32_t *)g28 = 1;
						g41 = 8;
						CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
						*(int32_t *)g28 = 0;
						v44 = g36;
						v43 = g35;
						// branch -> 0x56648
					} else {
						v44 = v42;
						v43 = v41;
					}
				}
				// 0x56648
				if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
					// 0x56660
					g39 = 84;
					InvDrawSlotBack(631, 320, 56, 84);
					v45 = g35;
					v46 = g36;
					v79 = v46 + 0x55ec * *(int32_t *)v45;
					v68 = *(int32_t *)(v79 + 3208) + 12;
					v69 = 4 * v68;
					v87 = *(int32_t *)(g32 + v69);
					g26 = v87;
					v2 = v87 == 28 ? 645 : 633;
					g25 = v2;
					v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
					v54 = v87;
					v53 = v68;
					v52 = v3;
					v51 = v2;
					v50 = v46;
					v49 = v45;
					if (*(char *)g31 == 5) {
						// 0x566cc
						v48 = 197;
						if (*(char *)(v79 + 3076) != 0) {
							// 0x566e0
							v48 = 181;
							// branch -> 0x566e4
						}
						// 0x566e4
						v47 = v48;
						if (*(int32_t *)(v79 + 3372) == 0) {
							// 0x566f4
							v47 = 229;
							// branch -> 0x566f8
						}
						// 0x566f8
						g37 = v2;
						g38 = v3;
						g40 = v68;
						g41 = v87;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
						v54 = g26;
						v53 = g28;
						v52 = g29;
						v51 = g25;
						v50 = g36;
						v49 = g35;
						// branch -> 0x5671c
					}
					// 0x5671c
					v80 = *(int32_t *)g30;
					g37 = v52;
					g39 = v53;
					g40 = v54;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
						// 0x56758
						g13 = 1;
						CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
						// branch -> 0x5677c
					} else {
						// 0x56734
						CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
						// branch -> 0x5677c
					}
					// 0x5677c
					if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
						// 0x56794
						g39 = 84;
						InvDrawSlotBack(517, 320, 56, 84);
						v55 = g35;
						v56 = g36;
						v81 = v56 + 0x55ec * *(int32_t *)v55;
						v70 = *(int32_t *)(v81 + 3576) + 12;
						g22 = v70;
						v88 = *(int32_t *)(g32 + 4 * v70);
						g24 = v88;
						v62 = v88;
						v61 = v70;
						v60 = v56;
						v59 = v55;
						if (*(char *)g31 == 6) {
							// 0x567d4
							v58 = 197;
							if (*(char *)(v81 + 3444) != 0) {
								// 0x567e4
								v58 = 181;
								// branch -> 0x567e8
							}
							// 0x567e8
							v57 = v58;
							if (*(int32_t *)(v81 + 3740) == 0) {
								// 0x567f8
								v57 = 229;
								// branch -> 0x567fc
							}
							// 0x567fc
							g40 = v70;
							g41 = v88;
							g37 = 517;
							g38 = 320;
							g42 = 0;
							g13 = 8;
							CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
							v62 = g24;
							v61 = g22;
							v60 = g36;
							v59 = g35;
							// branch -> 0x56820
						}
						// 0x56820
						v82 = *(int32_t *)g30;
						g39 = v61;
						g40 = v62;
						g37 = 320;
						g41 = 0;
						g42 = 8;
						if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
							// 0x5685c
							g13 = 1;
							CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
							// branch -> 0x56880
						} else {
							// 0x56838
							CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
							// branch -> 0x56880
						}
						// 0x56880
						g24 = 0;
						v96 = g27;
						g22 = v96;
						v97 = v96;
						v100 = 0;
						// branch -> 0x5688c
						while (true) {
							// 0x5688c
							if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
								v99 = v97;
								v98 = v100;
								goto lab_0x568c4_24;
							}
							goto lab_0x568a8_24;
						}
					}
					// 0x56880
					g24 = 0;
					v96 = g27;
					g22 = v96;
					v97 = v96;
					v100 = 0;
					// branch -> 0x5688c
					while (true) {
						// 0x5688c
						if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
							v99 = v97;
							v98 = v100;
							goto lab_0x568c4_24;
						}
						goto lab_0x568a8_24;
					}
				}
				// 0x5677c
				if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
					// 0x56794
					g39 = 84;
					InvDrawSlotBack(517, 320, 56, 84);
					v55 = g35;
					v56 = g36;
					v81 = v56 + 0x55ec * *(int32_t *)v55;
					v70 = *(int32_t *)(v81 + 3576) + 12;
					g22 = v70;
					v88 = *(int32_t *)(g32 + 4 * v70);
					g24 = v88;
					v62 = v88;
					v61 = v70;
					v60 = v56;
					v59 = v55;
					if (*(char *)g31 == 6) {
						// 0x567d4
						v58 = 197;
						if (*(char *)(v81 + 3444) != 0) {
							// 0x567e4
							v58 = 181;
							// branch -> 0x567e8
						}
						// 0x567e8
						v57 = v58;
						if (*(int32_t *)(v81 + 3740) == 0) {
							// 0x567f8
							v57 = 229;
							// branch -> 0x567fc
						}
						// 0x567fc
						g40 = v70;
						g41 = v88;
						g37 = 517;
						g38 = 320;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
						v62 = g24;
						v61 = g22;
						v60 = g36;
						v59 = g35;
						// branch -> 0x56820
					}
					// 0x56820
					v82 = *(int32_t *)g30;
					g39 = v61;
					g40 = v62;
					g37 = 320;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
						// 0x5685c
						g13 = 1;
						CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					} else {
						// 0x56838
						CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					}
					// 0x56880
					g24 = 0;
					v96 = g27;
					g22 = v96;
					v97 = v96;
					v100 = 0;
					// branch -> 0x5688c
					while (true) {
						// 0x5688c
						if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
							v99 = v97;
							v98 = v100;
							goto lab_0x568c4_24;
						}
						goto lab_0x568a8_24;
					}
				}
				// 0x56880
				g24 = 0;
				v96 = g27;
				g22 = v96;
				v97 = v96;
				v100 = 0;
				// branch -> 0x5688c
				while (true) {
					// 0x5688c
					if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
						v99 = v97;
						v98 = v100;
						goto lab_0x568c4_24;
					}
					goto lab_0x568a8_24;
				}
			}
			// 0x56490
			v29 = g35;
			v30 = g36;
			v44 = v30;
			v43 = v29;
			if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
				// 0x564a8
				g39 = 84;
				InvDrawSlotBack(401, 320, 56, 84);
				v31 = g35;
				v32 = g36;
				v77 = v32 + 0x55ec * *(int32_t *)v31;
				v66 = *(int32_t *)(v77 + 2840) + 12;
				g26 = v66;
				v67 = 4 * v66;
				v86 = *(int32_t *)(g32 + v67);
				g25 = v86;
				v1 = v86 == 28 ? 415 : 401;
				g24 = v1;
				v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
				g22 = v4;
				v40 = v86;
				v39 = v66;
				v38 = v4;
				v37 = v1;
				v36 = v32;
				v35 = v31;
				if (*(char *)g31 == 4) {
					// 0x56514
					v34 = 197;
					if (*(char *)(v77 + 2708) != 0) {
						// 0x56528
						v34 = 181;
						// branch -> 0x5652c
					}
					// 0x5652c
					v33 = v34;
					if (*(int32_t *)(v77 + 3004) == 0) {
						// 0x5653c
						v33 = 229;
						// branch -> 0x56540
					}
					// 0x56540
					g37 = v1;
					g38 = v4;
					g40 = v66;
					g41 = v86;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
					v40 = g25;
					v39 = g26;
					v38 = g22;
					v37 = g24;
					v36 = g36;
					v35 = g35;
					// branch -> 0x56564
				}
				// 0x56564
				v78 = *(int32_t *)g30;
				g37 = v38;
				g39 = v39;
				g40 = v40;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
					// 0x565a0
					g13 = 1;
					CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
					// branch -> 0x565c4
				} else {
					// 0x5657c
					CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
					// branch -> 0x565c4
				}
				// 0x565c4
				v41 = g35;
				v42 = g36;
				if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
					// 0x565dc
					g39 = 84;
					InvDrawSlotBack(631, 320, 56, 84);
					*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
					*(int32_t *)g28 = 1;
					g41 = 8;
					CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
					*(int32_t *)g28 = 0;
					v44 = g36;
					v43 = g35;
					// branch -> 0x56648
				} else {
					v44 = v42;
					v43 = v41;
				}
			}
			// 0x56648
			if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
				// 0x56660
				g39 = 84;
				InvDrawSlotBack(631, 320, 56, 84);
				v45 = g35;
				v46 = g36;
				v79 = v46 + 0x55ec * *(int32_t *)v45;
				v68 = *(int32_t *)(v79 + 3208) + 12;
				v69 = 4 * v68;
				v87 = *(int32_t *)(g32 + v69);
				g26 = v87;
				v2 = v87 == 28 ? 645 : 633;
				g25 = v2;
				v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
				v54 = v87;
				v53 = v68;
				v52 = v3;
				v51 = v2;
				v50 = v46;
				v49 = v45;
				if (*(char *)g31 == 5) {
					// 0x566cc
					v48 = 197;
					if (*(char *)(v79 + 3076) != 0) {
						// 0x566e0
						v48 = 181;
						// branch -> 0x566e4
					}
					// 0x566e4
					v47 = v48;
					if (*(int32_t *)(v79 + 3372) == 0) {
						// 0x566f4
						v47 = 229;
						// branch -> 0x566f8
					}
					// 0x566f8
					g37 = v2;
					g38 = v3;
					g40 = v68;
					g41 = v87;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
					v54 = g26;
					v53 = g28;
					v52 = g29;
					v51 = g25;
					v50 = g36;
					v49 = g35;
					// branch -> 0x5671c
				}
				// 0x5671c
				v80 = *(int32_t *)g30;
				g37 = v52;
				g39 = v53;
				g40 = v54;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
					// 0x56758
					g13 = 1;
					CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
					// branch -> 0x5677c
				} else {
					// 0x56734
					CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
					// branch -> 0x5677c
				}
				// 0x5677c
				if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
					// 0x56794
					g39 = 84;
					InvDrawSlotBack(517, 320, 56, 84);
					v55 = g35;
					v56 = g36;
					v81 = v56 + 0x55ec * *(int32_t *)v55;
					v70 = *(int32_t *)(v81 + 3576) + 12;
					g22 = v70;
					v88 = *(int32_t *)(g32 + 4 * v70);
					g24 = v88;
					v62 = v88;
					v61 = v70;
					v60 = v56;
					v59 = v55;
					if (*(char *)g31 == 6) {
						// 0x567d4
						v58 = 197;
						if (*(char *)(v81 + 3444) != 0) {
							// 0x567e4
							v58 = 181;
							// branch -> 0x567e8
						}
						// 0x567e8
						v57 = v58;
						if (*(int32_t *)(v81 + 3740) == 0) {
							// 0x567f8
							v57 = 229;
							// branch -> 0x567fc
						}
						// 0x567fc
						g40 = v70;
						g41 = v88;
						g37 = 517;
						g38 = 320;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
						v62 = g24;
						v61 = g22;
						v60 = g36;
						v59 = g35;
						// branch -> 0x56820
					}
					// 0x56820
					v82 = *(int32_t *)g30;
					g39 = v61;
					g40 = v62;
					g37 = 320;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
						// 0x5685c
						g13 = 1;
						CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					} else {
						// 0x56838
						CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					}
					// 0x56880
					g24 = 0;
					v96 = g27;
					g22 = v96;
					v97 = v96;
					v100 = 0;
					// branch -> 0x5688c
					while (true) {
						// 0x5688c
						if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
							v99 = v97;
							v98 = v100;
							goto lab_0x568c4_24;
						}
						goto lab_0x568a8_24;
					}
				}
				// 0x56880
				g24 = 0;
				v96 = g27;
				g22 = v96;
				v97 = v96;
				v100 = 0;
				// branch -> 0x5688c
				while (true) {
					// 0x5688c
					if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
						v99 = v97;
						v98 = v100;
						goto lab_0x568c4_24;
					}
					goto lab_0x568a8_24;
				}
			}
			// 0x5677c
			if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
				// 0x56794
				g39 = 84;
				InvDrawSlotBack(517, 320, 56, 84);
				v55 = g35;
				v56 = g36;
				v81 = v56 + 0x55ec * *(int32_t *)v55;
				v70 = *(int32_t *)(v81 + 3576) + 12;
				g22 = v70;
				v88 = *(int32_t *)(g32 + 4 * v70);
				g24 = v88;
				v62 = v88;
				v61 = v70;
				v60 = v56;
				v59 = v55;
				if (*(char *)g31 == 6) {
					// 0x567d4
					v58 = 197;
					if (*(char *)(v81 + 3444) != 0) {
						// 0x567e4
						v58 = 181;
						// branch -> 0x567e8
					}
					// 0x567e8
					v57 = v58;
					if (*(int32_t *)(v81 + 3740) == 0) {
						// 0x567f8
						v57 = 229;
						// branch -> 0x567fc
					}
					// 0x567fc
					g40 = v70;
					g41 = v88;
					g37 = 517;
					g38 = 320;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
					v62 = g24;
					v61 = g22;
					v60 = g36;
					v59 = g35;
					// branch -> 0x56820
				}
				// 0x56820
				v82 = *(int32_t *)g30;
				g39 = v61;
				g40 = v62;
				g37 = 320;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
					// 0x5685c
					g13 = 1;
					CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				} else {
					// 0x56838
					CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				}
				// 0x56880
				g24 = 0;
				v96 = g27;
				g22 = v96;
				v97 = v96;
				v100 = 0;
				// branch -> 0x5688c
				while (true) {
					// 0x5688c
					if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
						v99 = v97;
						v98 = v100;
						goto lab_0x568c4_24;
					}
					goto lab_0x568a8_24;
				}
			}
			// 0x56880
			g24 = 0;
			v96 = g27;
			g22 = v96;
			v97 = v96;
			v100 = 0;
			// branch -> 0x5688c
			while (true) {
				// 0x5688c
				if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
					v99 = v97;
					v98 = v100;
					goto lab_0x568c4_24;
				}
				goto lab_0x568a8_24;
			}
		}
		// 0x5638c
		if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 2288) != -1) {
			// 0x563a4
			g39 = 28;
			InvDrawSlotBack(589, 220, 28, 28);
			v21 = g35;
			v22 = g36;
			v75 = v22 + 0x55ec * *(int32_t *)v21;
			v65 = *(int32_t *)(v75 + 2472) + 12;
			g26 = v65;
			v85 = *(int32_t *)(g32 + 4 * v65);
			g25 = v85;
			v28 = v85;
			v27 = v65;
			v26 = v22;
			v25 = v21;
			if (*(char *)g31 == 3) {
				// 0x563e4
				v24 = 197;
				if (*(char *)(v75 + 2340) != 0) {
					// 0x563f4
					v24 = 181;
					// branch -> 0x563f8
				}
				// 0x563f8
				v23 = v24;
				if (*(int32_t *)(v75 + 2636) == 0) {
					// 0x56408
					v23 = 229;
					// branch -> 0x5640c
				}
				// 0x5640c
				g40 = v65;
				g41 = v85;
				g37 = 589;
				g38 = 220;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v23 % 256, 589, 220, *(int32_t *)g30, v65, v85, 0);
				v28 = g25;
				v27 = g26;
				v26 = g36;
				v25 = g35;
				// branch -> 0x56430
			}
			// 0x56430
			v76 = *(int32_t *)g30;
			g39 = v27;
			g40 = v28;
			g37 = 220;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v25 + v26 + 2636) == 0) {
				// 0x5646c
				g13 = 1;
				CelDrawHdrLightRed_part(589, 220, v76, v27, v28, 0, 8);
				// branch -> 0x56490
			} else {
				// 0x56448
				CelDrawHdrOnly(589, 220, v76, v27, v28, 0, 8);
				// branch -> 0x56490
			}
			// 0x56490
			v29 = g35;
			v30 = g36;
			v44 = v30;
			v43 = v29;
			if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
				// 0x564a8
				g39 = 84;
				InvDrawSlotBack(401, 320, 56, 84);
				v31 = g35;
				v32 = g36;
				v77 = v32 + 0x55ec * *(int32_t *)v31;
				v66 = *(int32_t *)(v77 + 2840) + 12;
				g26 = v66;
				v67 = 4 * v66;
				v86 = *(int32_t *)(g32 + v67);
				g25 = v86;
				v1 = v86 == 28 ? 415 : 401;
				g24 = v1;
				v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
				g22 = v4;
				v40 = v86;
				v39 = v66;
				v38 = v4;
				v37 = v1;
				v36 = v32;
				v35 = v31;
				if (*(char *)g31 == 4) {
					// 0x56514
					v34 = 197;
					if (*(char *)(v77 + 2708) != 0) {
						// 0x56528
						v34 = 181;
						// branch -> 0x5652c
					}
					// 0x5652c
					v33 = v34;
					if (*(int32_t *)(v77 + 3004) == 0) {
						// 0x5653c
						v33 = 229;
						// branch -> 0x56540
					}
					// 0x56540
					g37 = v1;
					g38 = v4;
					g40 = v66;
					g41 = v86;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
					v40 = g25;
					v39 = g26;
					v38 = g22;
					v37 = g24;
					v36 = g36;
					v35 = g35;
					// branch -> 0x56564
				}
				// 0x56564
				v78 = *(int32_t *)g30;
				g37 = v38;
				g39 = v39;
				g40 = v40;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
					// 0x565a0
					g13 = 1;
					CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
					// branch -> 0x565c4
				} else {
					// 0x5657c
					CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
					// branch -> 0x565c4
				}
				// 0x565c4
				v41 = g35;
				v42 = g36;
				if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
					// 0x565dc
					g39 = 84;
					InvDrawSlotBack(631, 320, 56, 84);
					*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
					*(int32_t *)g28 = 1;
					g41 = 8;
					CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
					*(int32_t *)g28 = 0;
					v44 = g36;
					v43 = g35;
					// branch -> 0x56648
				} else {
					v44 = v42;
					v43 = v41;
				}
			}
			// 0x56648
			if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
				// 0x56660
				g39 = 84;
				InvDrawSlotBack(631, 320, 56, 84);
				v45 = g35;
				v46 = g36;
				v79 = v46 + 0x55ec * *(int32_t *)v45;
				v68 = *(int32_t *)(v79 + 3208) + 12;
				v69 = 4 * v68;
				v87 = *(int32_t *)(g32 + v69);
				g26 = v87;
				v2 = v87 == 28 ? 645 : 633;
				g25 = v2;
				v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
				v54 = v87;
				v53 = v68;
				v52 = v3;
				v51 = v2;
				v50 = v46;
				v49 = v45;
				if (*(char *)g31 == 5) {
					// 0x566cc
					v48 = 197;
					if (*(char *)(v79 + 3076) != 0) {
						// 0x566e0
						v48 = 181;
						// branch -> 0x566e4
					}
					// 0x566e4
					v47 = v48;
					if (*(int32_t *)(v79 + 3372) == 0) {
						// 0x566f4
						v47 = 229;
						// branch -> 0x566f8
					}
					// 0x566f8
					g37 = v2;
					g38 = v3;
					g40 = v68;
					g41 = v87;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
					v54 = g26;
					v53 = g28;
					v52 = g29;
					v51 = g25;
					v50 = g36;
					v49 = g35;
					// branch -> 0x5671c
				}
				// 0x5671c
				v80 = *(int32_t *)g30;
				g37 = v52;
				g39 = v53;
				g40 = v54;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
					// 0x56758
					g13 = 1;
					CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
					// branch -> 0x5677c
				} else {
					// 0x56734
					CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
					// branch -> 0x5677c
				}
				// 0x5677c
				if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
					// 0x56794
					g39 = 84;
					InvDrawSlotBack(517, 320, 56, 84);
					v55 = g35;
					v56 = g36;
					v81 = v56 + 0x55ec * *(int32_t *)v55;
					v70 = *(int32_t *)(v81 + 3576) + 12;
					g22 = v70;
					v88 = *(int32_t *)(g32 + 4 * v70);
					g24 = v88;
					v62 = v88;
					v61 = v70;
					v60 = v56;
					v59 = v55;
					if (*(char *)g31 == 6) {
						// 0x567d4
						v58 = 197;
						if (*(char *)(v81 + 3444) != 0) {
							// 0x567e4
							v58 = 181;
							// branch -> 0x567e8
						}
						// 0x567e8
						v57 = v58;
						if (*(int32_t *)(v81 + 3740) == 0) {
							// 0x567f8
							v57 = 229;
							// branch -> 0x567fc
						}
						// 0x567fc
						g40 = v70;
						g41 = v88;
						g37 = 517;
						g38 = 320;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
						v62 = g24;
						v61 = g22;
						v60 = g36;
						v59 = g35;
						// branch -> 0x56820
					}
					// 0x56820
					v82 = *(int32_t *)g30;
					g39 = v61;
					g40 = v62;
					g37 = 320;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
						// 0x5685c
						g13 = 1;
						CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					} else {
						// 0x56838
						CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					}
					// 0x56880
					g24 = 0;
					v96 = g27;
					g22 = v96;
					v97 = v96;
					v100 = 0;
					// branch -> 0x5688c
					while (true) {
						// 0x5688c
						if (*(char *)(g36 + 0x55ec * *(int32_t *)g35 + v100 + 0x482c) == 0) {
							v99 = v97;
							v98 = v100;
							goto lab_0x568c4_24;
						}
						goto lab_0x568a8_24;
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x5677c
			if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
				// 0x56794
				g39 = 84;
				InvDrawSlotBack(517, 320, 56, 84);
				v55 = g35;
				v56 = g36;
				v81 = v56 + 0x55ec * *(int32_t *)v55;
				v70 = *(int32_t *)(v81 + 3576) + 12;
				g22 = v70;
				v88 = *(int32_t *)(g32 + 4 * v70);
				g24 = v88;
				v62 = v88;
				v61 = v70;
				v60 = v56;
				v59 = v55;
				if (*(char *)g31 == 6) {
					// 0x567d4
					v58 = 197;
					if (*(char *)(v81 + 3444) != 0) {
						// 0x567e4
						v58 = 181;
						// branch -> 0x567e8
					}
					// 0x567e8
					v57 = v58;
					if (*(int32_t *)(v81 + 3740) == 0) {
						// 0x567f8
						v57 = 229;
						// branch -> 0x567fc
					}
					// 0x567fc
					g40 = v70;
					g41 = v88;
					g37 = 517;
					g38 = 320;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
					v62 = g24;
					v61 = g22;
					v60 = g36;
					v59 = g35;
					// branch -> 0x56820
				}
				// 0x56820
				v82 = *(int32_t *)g30;
				g39 = v61;
				g40 = v62;
				g37 = 320;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
					// 0x5685c
					g13 = 1;
					CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				} else {
					// 0x56838
					CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x56490
		v29 = g35;
		v30 = g36;
		v44 = v30;
		v43 = v29;
		if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
			// 0x564a8
			g39 = 84;
			InvDrawSlotBack(401, 320, 56, 84);
			v31 = g35;
			v32 = g36;
			v77 = v32 + 0x55ec * *(int32_t *)v31;
			v66 = *(int32_t *)(v77 + 2840) + 12;
			g26 = v66;
			v67 = 4 * v66;
			v86 = *(int32_t *)(g32 + v67);
			g25 = v86;
			v1 = v86 == 28 ? 415 : 401;
			g24 = v1;
			v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
			g22 = v4;
			v40 = v86;
			v39 = v66;
			v38 = v4;
			v37 = v1;
			v36 = v32;
			v35 = v31;
			if (*(char *)g31 == 4) {
				// 0x56514
				v34 = 197;
				if (*(char *)(v77 + 2708) != 0) {
					// 0x56528
					v34 = 181;
					// branch -> 0x5652c
				}
				// 0x5652c
				v33 = v34;
				if (*(int32_t *)(v77 + 3004) == 0) {
					// 0x5653c
					v33 = 229;
					// branch -> 0x56540
				}
				// 0x56540
				g37 = v1;
				g38 = v4;
				g40 = v66;
				g41 = v86;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
				v40 = g25;
				v39 = g26;
				v38 = g22;
				v37 = g24;
				v36 = g36;
				v35 = g35;
				// branch -> 0x56564
			}
			// 0x56564
			v78 = *(int32_t *)g30;
			g37 = v38;
			g39 = v39;
			g40 = v40;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
				// 0x565a0
				g13 = 1;
				CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
				// branch -> 0x565c4
			} else {
				// 0x5657c
				CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
				// branch -> 0x565c4
			}
			// 0x565c4
			v41 = g35;
			v42 = g36;
			if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
				// 0x565dc
				g39 = 84;
				InvDrawSlotBack(631, 320, 56, 84);
				*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
				*(int32_t *)g28 = 1;
				g41 = 8;
				CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
				*(int32_t *)g28 = 0;
				v44 = g36;
				v43 = g35;
				// branch -> 0x56648
			} else {
				v44 = v42;
				v43 = v41;
			}
		}
		// 0x56648
		if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
			// 0x56660
			g39 = 84;
			InvDrawSlotBack(631, 320, 56, 84);
			v45 = g35;
			v46 = g36;
			v79 = v46 + 0x55ec * *(int32_t *)v45;
			v68 = *(int32_t *)(v79 + 3208) + 12;
			v69 = 4 * v68;
			v87 = *(int32_t *)(g32 + v69);
			g26 = v87;
			v2 = v87 == 28 ? 645 : 633;
			g25 = v2;
			v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
			v54 = v87;
			v53 = v68;
			v52 = v3;
			v51 = v2;
			v50 = v46;
			v49 = v45;
			if (*(char *)g31 == 5) {
				// 0x566cc
				v48 = 197;
				if (*(char *)(v79 + 3076) != 0) {
					// 0x566e0
					v48 = 181;
					// branch -> 0x566e4
				}
				// 0x566e4
				v47 = v48;
				if (*(int32_t *)(v79 + 3372) == 0) {
					// 0x566f4
					v47 = 229;
					// branch -> 0x566f8
				}
				// 0x566f8
				g37 = v2;
				g38 = v3;
				g40 = v68;
				g41 = v87;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
				v54 = g26;
				v53 = g28;
				v52 = g29;
				v51 = g25;
				v50 = g36;
				v49 = g35;
				// branch -> 0x5671c
			}
			// 0x5671c
			v80 = *(int32_t *)g30;
			g37 = v52;
			g39 = v53;
			g40 = v54;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
				// 0x56758
				g13 = 1;
				CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
				// branch -> 0x5677c
			} else {
				// 0x56734
				CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
				// branch -> 0x5677c
			}
			// 0x5677c
			if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
				// 0x56794
				g39 = 84;
				InvDrawSlotBack(517, 320, 56, 84);
				v55 = g35;
				v56 = g36;
				v81 = v56 + 0x55ec * *(int32_t *)v55;
				v70 = *(int32_t *)(v81 + 3576) + 12;
				g22 = v70;
				v88 = *(int32_t *)(g32 + 4 * v70);
				g24 = v88;
				v62 = v88;
				v61 = v70;
				v60 = v56;
				v59 = v55;
				if (*(char *)g31 == 6) {
					// 0x567d4
					v58 = 197;
					if (*(char *)(v81 + 3444) != 0) {
						// 0x567e4
						v58 = 181;
						// branch -> 0x567e8
					}
					// 0x567e8
					v57 = v58;
					if (*(int32_t *)(v81 + 3740) == 0) {
						// 0x567f8
						v57 = 229;
						// branch -> 0x567fc
					}
					// 0x567fc
					g40 = v70;
					g41 = v88;
					g37 = 517;
					g38 = 320;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
					v62 = g24;
					v61 = g22;
					v60 = g36;
					v59 = g35;
					// branch -> 0x56820
				}
				// 0x56820
				v82 = *(int32_t *)g30;
				g39 = v61;
				g40 = v62;
				g37 = 320;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
					// 0x5685c
					g13 = 1;
					CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				} else {
					// 0x56838
					CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x5677c
		if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
			// 0x56794
			g39 = 84;
			InvDrawSlotBack(517, 320, 56, 84);
			v55 = g35;
			v56 = g36;
			v81 = v56 + 0x55ec * *(int32_t *)v55;
			v70 = *(int32_t *)(v81 + 3576) + 12;
			g22 = v70;
			v88 = *(int32_t *)(g32 + 4 * v70);
			g24 = v88;
			v62 = v88;
			v61 = v70;
			v60 = v56;
			v59 = v55;
			if (*(char *)g31 == 6) {
				// 0x567d4
				v58 = 197;
				if (*(char *)(v81 + 3444) != 0) {
					// 0x567e4
					v58 = 181;
					// branch -> 0x567e8
				}
				// 0x567e8
				v57 = v58;
				if (*(int32_t *)(v81 + 3740) == 0) {
					// 0x567f8
					v57 = 229;
					// branch -> 0x567fc
				}
				// 0x567fc
				g40 = v70;
				g41 = v88;
				g37 = 517;
				g38 = 320;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
				v62 = g24;
				v61 = g22;
				v60 = g36;
				v59 = g35;
				// branch -> 0x56820
			}
			// 0x56820
			v82 = *(int32_t *)g30;
			g39 = v61;
			g40 = v62;
			g37 = 320;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
				// 0x5685c
				g13 = 1;
				CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
				// branch -> 0x56880
			} else {
				// 0x56838
				CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
				// branch -> 0x56880
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x56184
	if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 1552) != -1) {
		// 0x5619c
		g39 = 28;
		InvDrawSlotBack(432, 365, 28, 28);
		v5 = g35;
		v6 = g36;
		v71 = v6 + 0x55ec * *(int32_t *)v5;
		v63 = *(int32_t *)(v71 + 1736) + 12;
		g26 = v63;
		v83 = *(int32_t *)(g32 + 4 * v63);
		g25 = v83;
		v12 = v83;
		v11 = v63;
		v10 = v6;
		v9 = v5;
		if (*(char *)g31 == 1) {
			// 0x561dc
			v8 = 197;
			if (*(char *)(v71 + 1604) != 0) {
				// 0x561ec
				v8 = 181;
				// branch -> 0x561f0
			}
			// 0x561f0
			v7 = v8;
			if (*(int32_t *)(v71 + 1900) == 0) {
				// 0x56200
				v7 = 229;
				// branch -> 0x56204
			}
			// 0x56204
			g40 = v63;
			g41 = v83;
			g37 = 432;
			g38 = 365;
			g42 = 0;
			g13 = 8;
			CelDecodeClr(v7 % 256, 432, 365, *(int32_t *)g30, v63, v83, 0);
			v12 = g25;
			v11 = g26;
			v10 = g36;
			v9 = g35;
			// branch -> 0x56228
		}
		// 0x56228
		v72 = *(int32_t *)g30;
		g39 = v11;
		g40 = v12;
		g37 = 365;
		g41 = 0;
		g42 = 8;
		if (*(int32_t *)(0x55ec * *(int32_t *)v9 + v10 + 1900) == 0) {
			// 0x56264
			g13 = 1;
			CelDrawHdrLightRed_part(432, 365, v72, v11, v12, 0, 8);
			// branch -> 0x56288
		} else {
			// 0x56240
			CelDrawHdrOnly(432, 365, v72, v11, v12, 0, 8);
			// branch -> 0x56288
		}
		// 0x56288
		if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 1920) != -1) {
			// 0x562a0
			g39 = 28;
			InvDrawSlotBack(633, 365, 28, 28);
			v13 = g35;
			v14 = g36;
			v73 = v14 + 0x55ec * *(int32_t *)v13;
			v64 = *(int32_t *)(v73 + 2104) + 12;
			g26 = v64;
			v84 = *(int32_t *)(g32 + 4 * v64);
			g25 = v84;
			v20 = v84;
			v19 = v64;
			v18 = v14;
			v17 = v13;
			if (*(char *)g31 == 2) {
				// 0x562e0
				v16 = 197;
				if (*(char *)(v73 + 1972) != 0) {
					// 0x562f0
					v16 = 181;
					// branch -> 0x562f4
				}
				// 0x562f4
				v15 = v16;
				if (*(int32_t *)(v73 + 2268) == 0) {
					// 0x56304
					v15 = 229;
					// branch -> 0x56308
				}
				// 0x56308
				g40 = v64;
				g41 = v84;
				g37 = 633;
				g38 = 365;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v15 % 256, 633, 365, *(int32_t *)g30, v64, v84, 0);
				v20 = g25;
				v19 = g26;
				v18 = g36;
				v17 = g35;
				// branch -> 0x5632c
			}
			// 0x5632c
			v74 = *(int32_t *)g30;
			g39 = v19;
			g40 = v20;
			g37 = 365;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v17 + v18 + 2268) == 0) {
				// 0x56368
				g13 = 1;
				CelDrawHdrLightRed_part(633, 365, v74, v19, v20, 0, 8);
				// branch -> 0x5638c
			} else {
				// 0x56344
				CelDrawHdrOnly(633, 365, v74, v19, v20, 0, 8);
				// branch -> 0x5638c
			}
			// 0x5638c
			if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 2288) != -1) {
				// 0x563a4
				g39 = 28;
				InvDrawSlotBack(589, 220, 28, 28);
				v21 = g35;
				v22 = g36;
				v75 = v22 + 0x55ec * *(int32_t *)v21;
				v65 = *(int32_t *)(v75 + 2472) + 12;
				g26 = v65;
				v85 = *(int32_t *)(g32 + 4 * v65);
				g25 = v85;
				v28 = v85;
				v27 = v65;
				v26 = v22;
				v25 = v21;
				if (*(char *)g31 == 3) {
					// 0x563e4
					v24 = 197;
					if (*(char *)(v75 + 2340) != 0) {
						// 0x563f4
						v24 = 181;
						// branch -> 0x563f8
					}
					// 0x563f8
					v23 = v24;
					if (*(int32_t *)(v75 + 2636) == 0) {
						// 0x56408
						v23 = 229;
						// branch -> 0x5640c
					}
					// 0x5640c
					g40 = v65;
					g41 = v85;
					g37 = 589;
					g38 = 220;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v23 % 256, 589, 220, *(int32_t *)g30, v65, v85, 0);
					v28 = g25;
					v27 = g26;
					v26 = g36;
					v25 = g35;
					// branch -> 0x56430
				}
				// 0x56430
				v76 = *(int32_t *)g30;
				g39 = v27;
				g40 = v28;
				g37 = 220;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v25 + v26 + 2636) == 0) {
					// 0x5646c
					g13 = 1;
					CelDrawHdrLightRed_part(589, 220, v76, v27, v28, 0, 8);
					// branch -> 0x56490
				} else {
					// 0x56448
					CelDrawHdrOnly(589, 220, v76, v27, v28, 0, 8);
					// branch -> 0x56490
				}
				// 0x56490
				v29 = g35;
				v30 = g36;
				v44 = v30;
				v43 = v29;
				if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
					// 0x564a8
					g39 = 84;
					InvDrawSlotBack(401, 320, 56, 84);
					v31 = g35;
					v32 = g36;
					v77 = v32 + 0x55ec * *(int32_t *)v31;
					v66 = *(int32_t *)(v77 + 2840) + 12;
					g26 = v66;
					v67 = 4 * v66;
					v86 = *(int32_t *)(g32 + v67);
					g25 = v86;
					v1 = v86 == 28 ? 415 : 401;
					g24 = v1;
					v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
					g22 = v4;
					v40 = v86;
					v39 = v66;
					v38 = v4;
					v37 = v1;
					v36 = v32;
					v35 = v31;
					if (*(char *)g31 == 4) {
						// 0x56514
						v34 = 197;
						if (*(char *)(v77 + 2708) != 0) {
							// 0x56528
							v34 = 181;
							// branch -> 0x5652c
						}
						// 0x5652c
						v33 = v34;
						if (*(int32_t *)(v77 + 3004) == 0) {
							// 0x5653c
							v33 = 229;
							// branch -> 0x56540
						}
						// 0x56540
						g37 = v1;
						g38 = v4;
						g40 = v66;
						g41 = v86;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
						v40 = g25;
						v39 = g26;
						v38 = g22;
						v37 = g24;
						v36 = g36;
						v35 = g35;
						// branch -> 0x56564
					}
					// 0x56564
					v78 = *(int32_t *)g30;
					g37 = v38;
					g39 = v39;
					g40 = v40;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
						// 0x565a0
						g13 = 1;
						CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
						// branch -> 0x565c4
					} else {
						// 0x5657c
						CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
						// branch -> 0x565c4
					}
					// 0x565c4
					v41 = g35;
					v42 = g36;
					if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
						// 0x565dc
						g39 = 84;
						InvDrawSlotBack(631, 320, 56, 84);
						*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
						*(int32_t *)g28 = 1;
						g41 = 8;
						CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
						*(int32_t *)g28 = 0;
						v44 = g36;
						v43 = g35;
						// branch -> 0x56648
					} else {
						v44 = v42;
						v43 = v41;
					}
				}
				// 0x56648
				if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
					// 0x56660
					g39 = 84;
					InvDrawSlotBack(631, 320, 56, 84);
					v45 = g35;
					v46 = g36;
					v79 = v46 + 0x55ec * *(int32_t *)v45;
					v68 = *(int32_t *)(v79 + 3208) + 12;
					v69 = 4 * v68;
					v87 = *(int32_t *)(g32 + v69);
					g26 = v87;
					v2 = v87 == 28 ? 645 : 633;
					g25 = v2;
					v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
					v54 = v87;
					v53 = v68;
					v52 = v3;
					v51 = v2;
					v50 = v46;
					v49 = v45;
					if (*(char *)g31 == 5) {
						// 0x566cc
						v48 = 197;
						if (*(char *)(v79 + 3076) != 0) {
							// 0x566e0
							v48 = 181;
							// branch -> 0x566e4
						}
						// 0x566e4
						v47 = v48;
						if (*(int32_t *)(v79 + 3372) == 0) {
							// 0x566f4
							v47 = 229;
							// branch -> 0x566f8
						}
						// 0x566f8
						g37 = v2;
						g38 = v3;
						g40 = v68;
						g41 = v87;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
						v54 = g26;
						v53 = g28;
						v52 = g29;
						v51 = g25;
						v50 = g36;
						v49 = g35;
						// branch -> 0x5671c
					}
					// 0x5671c
					v80 = *(int32_t *)g30;
					g37 = v52;
					g39 = v53;
					g40 = v54;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
						// 0x56758
						g13 = 1;
						CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
						// branch -> 0x5677c
					} else {
						// 0x56734
						CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
						// branch -> 0x5677c
					}
					// 0x5677c
					if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
						// 0x56794
						g39 = 84;
						InvDrawSlotBack(517, 320, 56, 84);
						v55 = g35;
						v56 = g36;
						v81 = v56 + 0x55ec * *(int32_t *)v55;
						v70 = *(int32_t *)(v81 + 3576) + 12;
						g22 = v70;
						v88 = *(int32_t *)(g32 + 4 * v70);
						g24 = v88;
						v62 = v88;
						v61 = v70;
						v60 = v56;
						v59 = v55;
						if (*(char *)g31 == 6) {
							// 0x567d4
							v58 = 197;
							if (*(char *)(v81 + 3444) != 0) {
								// 0x567e4
								v58 = 181;
								// branch -> 0x567e8
							}
							// 0x567e8
							v57 = v58;
							if (*(int32_t *)(v81 + 3740) == 0) {
								// 0x567f8
								v57 = 229;
								// branch -> 0x567fc
							}
							// 0x567fc
							g40 = v70;
							g41 = v88;
							g37 = 517;
							g38 = 320;
							g42 = 0;
							g13 = 8;
							CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
							v62 = g24;
							v61 = g22;
							v60 = g36;
							v59 = g35;
							// branch -> 0x56820
						}
						// 0x56820
						v82 = *(int32_t *)g30;
						g39 = v61;
						g40 = v62;
						g37 = 320;
						g41 = 0;
						g42 = 8;
						if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
							// 0x5685c
							g13 = 1;
							CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
							// branch -> 0x56880
						} else {
							// 0x56838
							CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
							// branch -> 0x56880
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x5677c
				if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
					// 0x56794
					g39 = 84;
					InvDrawSlotBack(517, 320, 56, 84);
					v55 = g35;
					v56 = g36;
					v81 = v56 + 0x55ec * *(int32_t *)v55;
					v70 = *(int32_t *)(v81 + 3576) + 12;
					g22 = v70;
					v88 = *(int32_t *)(g32 + 4 * v70);
					g24 = v88;
					v62 = v88;
					v61 = v70;
					v60 = v56;
					v59 = v55;
					if (*(char *)g31 == 6) {
						// 0x567d4
						v58 = 197;
						if (*(char *)(v81 + 3444) != 0) {
							// 0x567e4
							v58 = 181;
							// branch -> 0x567e8
						}
						// 0x567e8
						v57 = v58;
						if (*(int32_t *)(v81 + 3740) == 0) {
							// 0x567f8
							v57 = 229;
							// branch -> 0x567fc
						}
						// 0x567fc
						g40 = v70;
						g41 = v88;
						g37 = 517;
						g38 = 320;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
						v62 = g24;
						v61 = g22;
						v60 = g36;
						v59 = g35;
						// branch -> 0x56820
					}
					// 0x56820
					v82 = *(int32_t *)g30;
					g39 = v61;
					g40 = v62;
					g37 = 320;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
						// 0x5685c
						g13 = 1;
						CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					} else {
						// 0x56838
						CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x56490
			v29 = g35;
			v30 = g36;
			v44 = v30;
			v43 = v29;
			if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
				// 0x564a8
				g39 = 84;
				InvDrawSlotBack(401, 320, 56, 84);
				v31 = g35;
				v32 = g36;
				v77 = v32 + 0x55ec * *(int32_t *)v31;
				v66 = *(int32_t *)(v77 + 2840) + 12;
				g26 = v66;
				v67 = 4 * v66;
				v86 = *(int32_t *)(g32 + v67);
				g25 = v86;
				v1 = v86 == 28 ? 415 : 401;
				g24 = v1;
				v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
				g22 = v4;
				v40 = v86;
				v39 = v66;
				v38 = v4;
				v37 = v1;
				v36 = v32;
				v35 = v31;
				if (*(char *)g31 == 4) {
					// 0x56514
					v34 = 197;
					if (*(char *)(v77 + 2708) != 0) {
						// 0x56528
						v34 = 181;
						// branch -> 0x5652c
					}
					// 0x5652c
					v33 = v34;
					if (*(int32_t *)(v77 + 3004) == 0) {
						// 0x5653c
						v33 = 229;
						// branch -> 0x56540
					}
					// 0x56540
					g37 = v1;
					g38 = v4;
					g40 = v66;
					g41 = v86;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
					v40 = g25;
					v39 = g26;
					v38 = g22;
					v37 = g24;
					v36 = g36;
					v35 = g35;
					// branch -> 0x56564
				}
				// 0x56564
				v78 = *(int32_t *)g30;
				g37 = v38;
				g39 = v39;
				g40 = v40;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
					// 0x565a0
					g13 = 1;
					CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
					// branch -> 0x565c4
				} else {
					// 0x5657c
					CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
					// branch -> 0x565c4
				}
				// 0x565c4
				v41 = g35;
				v42 = g36;
				if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
					// 0x565dc
					g39 = 84;
					InvDrawSlotBack(631, 320, 56, 84);
					*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
					*(int32_t *)g28 = 1;
					g41 = 8;
					CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
					*(int32_t *)g28 = 0;
					v44 = g36;
					v43 = g35;
					// branch -> 0x56648
				} else {
					v44 = v42;
					v43 = v41;
				}
			}
			// 0x56648
			if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
				// 0x56660
				g39 = 84;
				InvDrawSlotBack(631, 320, 56, 84);
				v45 = g35;
				v46 = g36;
				v79 = v46 + 0x55ec * *(int32_t *)v45;
				v68 = *(int32_t *)(v79 + 3208) + 12;
				v69 = 4 * v68;
				v87 = *(int32_t *)(g32 + v69);
				g26 = v87;
				v2 = v87 == 28 ? 645 : 633;
				g25 = v2;
				v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
				v54 = v87;
				v53 = v68;
				v52 = v3;
				v51 = v2;
				v50 = v46;
				v49 = v45;
				if (*(char *)g31 == 5) {
					// 0x566cc
					v48 = 197;
					if (*(char *)(v79 + 3076) != 0) {
						// 0x566e0
						v48 = 181;
						// branch -> 0x566e4
					}
					// 0x566e4
					v47 = v48;
					if (*(int32_t *)(v79 + 3372) == 0) {
						// 0x566f4
						v47 = 229;
						// branch -> 0x566f8
					}
					// 0x566f8
					g37 = v2;
					g38 = v3;
					g40 = v68;
					g41 = v87;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
					v54 = g26;
					v53 = g28;
					v52 = g29;
					v51 = g25;
					v50 = g36;
					v49 = g35;
					// branch -> 0x5671c
				}
				// 0x5671c
				v80 = *(int32_t *)g30;
				g37 = v52;
				g39 = v53;
				g40 = v54;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
					// 0x56758
					g13 = 1;
					CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
					// branch -> 0x5677c
				} else {
					// 0x56734
					CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
					// branch -> 0x5677c
				}
				// 0x5677c
				if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
					// 0x56794
					g39 = 84;
					InvDrawSlotBack(517, 320, 56, 84);
					v55 = g35;
					v56 = g36;
					v81 = v56 + 0x55ec * *(int32_t *)v55;
					v70 = *(int32_t *)(v81 + 3576) + 12;
					g22 = v70;
					v88 = *(int32_t *)(g32 + 4 * v70);
					g24 = v88;
					v62 = v88;
					v61 = v70;
					v60 = v56;
					v59 = v55;
					if (*(char *)g31 == 6) {
						// 0x567d4
						v58 = 197;
						if (*(char *)(v81 + 3444) != 0) {
							// 0x567e4
							v58 = 181;
							// branch -> 0x567e8
						}
						// 0x567e8
						v57 = v58;
						if (*(int32_t *)(v81 + 3740) == 0) {
							// 0x567f8
							v57 = 229;
							// branch -> 0x567fc
						}
						// 0x567fc
						g40 = v70;
						g41 = v88;
						g37 = 517;
						g38 = 320;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
						v62 = g24;
						v61 = g22;
						v60 = g36;
						v59 = g35;
						// branch -> 0x56820
					}
					// 0x56820
					v82 = *(int32_t *)g30;
					g39 = v61;
					g40 = v62;
					g37 = 320;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
						// 0x5685c
						g13 = 1;
						CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					} else {
						// 0x56838
						CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x5677c
			if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
				// 0x56794
				g39 = 84;
				InvDrawSlotBack(517, 320, 56, 84);
				v55 = g35;
				v56 = g36;
				v81 = v56 + 0x55ec * *(int32_t *)v55;
				v70 = *(int32_t *)(v81 + 3576) + 12;
				g22 = v70;
				v88 = *(int32_t *)(g32 + 4 * v70);
				g24 = v88;
				v62 = v88;
				v61 = v70;
				v60 = v56;
				v59 = v55;
				if (*(char *)g31 == 6) {
					// 0x567d4
					v58 = 197;
					if (*(char *)(v81 + 3444) != 0) {
						// 0x567e4
						v58 = 181;
						// branch -> 0x567e8
					}
					// 0x567e8
					v57 = v58;
					if (*(int32_t *)(v81 + 3740) == 0) {
						// 0x567f8
						v57 = 229;
						// branch -> 0x567fc
					}
					// 0x567fc
					g40 = v70;
					g41 = v88;
					g37 = 517;
					g38 = 320;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
					v62 = g24;
					v61 = g22;
					v60 = g36;
					v59 = g35;
					// branch -> 0x56820
				}
				// 0x56820
				v82 = *(int32_t *)g30;
				g39 = v61;
				g40 = v62;
				g37 = 320;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
					// 0x5685c
					g13 = 1;
					CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				} else {
					// 0x56838
					CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x5638c
		if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 2288) != -1) {
			// 0x563a4
			g39 = 28;
			InvDrawSlotBack(589, 220, 28, 28);
			v21 = g35;
			v22 = g36;
			v75 = v22 + 0x55ec * *(int32_t *)v21;
			v65 = *(int32_t *)(v75 + 2472) + 12;
			g26 = v65;
			v85 = *(int32_t *)(g32 + 4 * v65);
			g25 = v85;
			v28 = v85;
			v27 = v65;
			v26 = v22;
			v25 = v21;
			if (*(char *)g31 == 3) {
				// 0x563e4
				v24 = 197;
				if (*(char *)(v75 + 2340) != 0) {
					// 0x563f4
					v24 = 181;
					// branch -> 0x563f8
				}
				// 0x563f8
				v23 = v24;
				if (*(int32_t *)(v75 + 2636) == 0) {
					// 0x56408
					v23 = 229;
					// branch -> 0x5640c
				}
				// 0x5640c
				g40 = v65;
				g41 = v85;
				g37 = 589;
				g38 = 220;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v23 % 256, 589, 220, *(int32_t *)g30, v65, v85, 0);
				v28 = g25;
				v27 = g26;
				v26 = g36;
				v25 = g35;
				// branch -> 0x56430
			}
			// 0x56430
			v76 = *(int32_t *)g30;
			g39 = v27;
			g40 = v28;
			g37 = 220;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v25 + v26 + 2636) == 0) {
				// 0x5646c
				g13 = 1;
				CelDrawHdrLightRed_part(589, 220, v76, v27, v28, 0, 8);
				// branch -> 0x56490
			} else {
				// 0x56448
				CelDrawHdrOnly(589, 220, v76, v27, v28, 0, 8);
				// branch -> 0x56490
			}
			// 0x56490
			v29 = g35;
			v30 = g36;
			v44 = v30;
			v43 = v29;
			if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
				// 0x564a8
				g39 = 84;
				InvDrawSlotBack(401, 320, 56, 84);
				v31 = g35;
				v32 = g36;
				v77 = v32 + 0x55ec * *(int32_t *)v31;
				v66 = *(int32_t *)(v77 + 2840) + 12;
				g26 = v66;
				v67 = 4 * v66;
				v86 = *(int32_t *)(g32 + v67);
				g25 = v86;
				v1 = v86 == 28 ? 415 : 401;
				g24 = v1;
				v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
				g22 = v4;
				v40 = v86;
				v39 = v66;
				v38 = v4;
				v37 = v1;
				v36 = v32;
				v35 = v31;
				if (*(char *)g31 == 4) {
					// 0x56514
					v34 = 197;
					if (*(char *)(v77 + 2708) != 0) {
						// 0x56528
						v34 = 181;
						// branch -> 0x5652c
					}
					// 0x5652c
					v33 = v34;
					if (*(int32_t *)(v77 + 3004) == 0) {
						// 0x5653c
						v33 = 229;
						// branch -> 0x56540
					}
					// 0x56540
					g37 = v1;
					g38 = v4;
					g40 = v66;
					g41 = v86;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
					v40 = g25;
					v39 = g26;
					v38 = g22;
					v37 = g24;
					v36 = g36;
					v35 = g35;
					// branch -> 0x56564
				}
				// 0x56564
				v78 = *(int32_t *)g30;
				g37 = v38;
				g39 = v39;
				g40 = v40;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
					// 0x565a0
					g13 = 1;
					CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
					// branch -> 0x565c4
				} else {
					// 0x5657c
					CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
					// branch -> 0x565c4
				}
				// 0x565c4
				v41 = g35;
				v42 = g36;
				if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
					// 0x565dc
					g39 = 84;
					InvDrawSlotBack(631, 320, 56, 84);
					*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
					*(int32_t *)g28 = 1;
					g41 = 8;
					CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
					*(int32_t *)g28 = 0;
					v44 = g36;
					v43 = g35;
					// branch -> 0x56648
				} else {
					v44 = v42;
					v43 = v41;
				}
			}
			// 0x56648
			if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
				// 0x56660
				g39 = 84;
				InvDrawSlotBack(631, 320, 56, 84);
				v45 = g35;
				v46 = g36;
				v79 = v46 + 0x55ec * *(int32_t *)v45;
				v68 = *(int32_t *)(v79 + 3208) + 12;
				v69 = 4 * v68;
				v87 = *(int32_t *)(g32 + v69);
				g26 = v87;
				v2 = v87 == 28 ? 645 : 633;
				g25 = v2;
				v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
				v54 = v87;
				v53 = v68;
				v52 = v3;
				v51 = v2;
				v50 = v46;
				v49 = v45;
				if (*(char *)g31 == 5) {
					// 0x566cc
					v48 = 197;
					if (*(char *)(v79 + 3076) != 0) {
						// 0x566e0
						v48 = 181;
						// branch -> 0x566e4
					}
					// 0x566e4
					v47 = v48;
					if (*(int32_t *)(v79 + 3372) == 0) {
						// 0x566f4
						v47 = 229;
						// branch -> 0x566f8
					}
					// 0x566f8
					g37 = v2;
					g38 = v3;
					g40 = v68;
					g41 = v87;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
					v54 = g26;
					v53 = g28;
					v52 = g29;
					v51 = g25;
					v50 = g36;
					v49 = g35;
					// branch -> 0x5671c
				}
				// 0x5671c
				v80 = *(int32_t *)g30;
				g37 = v52;
				g39 = v53;
				g40 = v54;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
					// 0x56758
					g13 = 1;
					CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
					// branch -> 0x5677c
				} else {
					// 0x56734
					CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
					// branch -> 0x5677c
				}
				// 0x5677c
				if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
					// 0x56794
					g39 = 84;
					InvDrawSlotBack(517, 320, 56, 84);
					v55 = g35;
					v56 = g36;
					v81 = v56 + 0x55ec * *(int32_t *)v55;
					v70 = *(int32_t *)(v81 + 3576) + 12;
					g22 = v70;
					v88 = *(int32_t *)(g32 + 4 * v70);
					g24 = v88;
					v62 = v88;
					v61 = v70;
					v60 = v56;
					v59 = v55;
					if (*(char *)g31 == 6) {
						// 0x567d4
						v58 = 197;
						if (*(char *)(v81 + 3444) != 0) {
							// 0x567e4
							v58 = 181;
							// branch -> 0x567e8
						}
						// 0x567e8
						v57 = v58;
						if (*(int32_t *)(v81 + 3740) == 0) {
							// 0x567f8
							v57 = 229;
							// branch -> 0x567fc
						}
						// 0x567fc
						g40 = v70;
						g41 = v88;
						g37 = 517;
						g38 = 320;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
						v62 = g24;
						v61 = g22;
						v60 = g36;
						v59 = g35;
						// branch -> 0x56820
					}
					// 0x56820
					v82 = *(int32_t *)g30;
					g39 = v61;
					g40 = v62;
					g37 = 320;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
						// 0x5685c
						g13 = 1;
						CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					} else {
						// 0x56838
						CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x5677c
			if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
				// 0x56794
				g39 = 84;
				InvDrawSlotBack(517, 320, 56, 84);
				v55 = g35;
				v56 = g36;
				v81 = v56 + 0x55ec * *(int32_t *)v55;
				v70 = *(int32_t *)(v81 + 3576) + 12;
				g22 = v70;
				v88 = *(int32_t *)(g32 + 4 * v70);
				g24 = v88;
				v62 = v88;
				v61 = v70;
				v60 = v56;
				v59 = v55;
				if (*(char *)g31 == 6) {
					// 0x567d4
					v58 = 197;
					if (*(char *)(v81 + 3444) != 0) {
						// 0x567e4
						v58 = 181;
						// branch -> 0x567e8
					}
					// 0x567e8
					v57 = v58;
					if (*(int32_t *)(v81 + 3740) == 0) {
						// 0x567f8
						v57 = 229;
						// branch -> 0x567fc
					}
					// 0x567fc
					g40 = v70;
					g41 = v88;
					g37 = 517;
					g38 = 320;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
					v62 = g24;
					v61 = g22;
					v60 = g36;
					v59 = g35;
					// branch -> 0x56820
				}
				// 0x56820
				v82 = *(int32_t *)g30;
				g39 = v61;
				g40 = v62;
				g37 = 320;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
					// 0x5685c
					g13 = 1;
					CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				} else {
					// 0x56838
					CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x56490
		v29 = g35;
		v30 = g36;
		v44 = v30;
		v43 = v29;
		if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
			// 0x564a8
			g39 = 84;
			InvDrawSlotBack(401, 320, 56, 84);
			v31 = g35;
			v32 = g36;
			v77 = v32 + 0x55ec * *(int32_t *)v31;
			v66 = *(int32_t *)(v77 + 2840) + 12;
			g26 = v66;
			v67 = 4 * v66;
			v86 = *(int32_t *)(g32 + v67);
			g25 = v86;
			v1 = v86 == 28 ? 415 : 401;
			g24 = v1;
			v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
			g22 = v4;
			v40 = v86;
			v39 = v66;
			v38 = v4;
			v37 = v1;
			v36 = v32;
			v35 = v31;
			if (*(char *)g31 == 4) {
				// 0x56514
				v34 = 197;
				if (*(char *)(v77 + 2708) != 0) {
					// 0x56528
					v34 = 181;
					// branch -> 0x5652c
				}
				// 0x5652c
				v33 = v34;
				if (*(int32_t *)(v77 + 3004) == 0) {
					// 0x5653c
					v33 = 229;
					// branch -> 0x56540
				}
				// 0x56540
				g37 = v1;
				g38 = v4;
				g40 = v66;
				g41 = v86;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
				v40 = g25;
				v39 = g26;
				v38 = g22;
				v37 = g24;
				v36 = g36;
				v35 = g35;
				// branch -> 0x56564
			}
			// 0x56564
			v78 = *(int32_t *)g30;
			g37 = v38;
			g39 = v39;
			g40 = v40;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
				// 0x565a0
				g13 = 1;
				CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
				// branch -> 0x565c4
			} else {
				// 0x5657c
				CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
				// branch -> 0x565c4
			}
			// 0x565c4
			v41 = g35;
			v42 = g36;
			if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
				// 0x565dc
				g39 = 84;
				InvDrawSlotBack(631, 320, 56, 84);
				*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
				*(int32_t *)g28 = 1;
				g41 = 8;
				CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
				*(int32_t *)g28 = 0;
				v44 = g36;
				v43 = g35;
				// branch -> 0x56648
			} else {
				v44 = v42;
				v43 = v41;
			}
		}
		// 0x56648
		if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
			// 0x56660
			g39 = 84;
			InvDrawSlotBack(631, 320, 56, 84);
			v45 = g35;
			v46 = g36;
			v79 = v46 + 0x55ec * *(int32_t *)v45;
			v68 = *(int32_t *)(v79 + 3208) + 12;
			v69 = 4 * v68;
			v87 = *(int32_t *)(g32 + v69);
			g26 = v87;
			v2 = v87 == 28 ? 645 : 633;
			g25 = v2;
			v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
			v54 = v87;
			v53 = v68;
			v52 = v3;
			v51 = v2;
			v50 = v46;
			v49 = v45;
			if (*(char *)g31 == 5) {
				// 0x566cc
				v48 = 197;
				if (*(char *)(v79 + 3076) != 0) {
					// 0x566e0
					v48 = 181;
					// branch -> 0x566e4
				}
				// 0x566e4
				v47 = v48;
				if (*(int32_t *)(v79 + 3372) == 0) {
					// 0x566f4
					v47 = 229;
					// branch -> 0x566f8
				}
				// 0x566f8
				g37 = v2;
				g38 = v3;
				g40 = v68;
				g41 = v87;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
				v54 = g26;
				v53 = g28;
				v52 = g29;
				v51 = g25;
				v50 = g36;
				v49 = g35;
				// branch -> 0x5671c
			}
			// 0x5671c
			v80 = *(int32_t *)g30;
			g37 = v52;
			g39 = v53;
			g40 = v54;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
				// 0x56758
				g13 = 1;
				CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
				// branch -> 0x5677c
			} else {
				// 0x56734
				CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
				// branch -> 0x5677c
			}
			// 0x5677c
			if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
				// 0x56794
				g39 = 84;
				InvDrawSlotBack(517, 320, 56, 84);
				v55 = g35;
				v56 = g36;
				v81 = v56 + 0x55ec * *(int32_t *)v55;
				v70 = *(int32_t *)(v81 + 3576) + 12;
				g22 = v70;
				v88 = *(int32_t *)(g32 + 4 * v70);
				g24 = v88;
				v62 = v88;
				v61 = v70;
				v60 = v56;
				v59 = v55;
				if (*(char *)g31 == 6) {
					// 0x567d4
					v58 = 197;
					if (*(char *)(v81 + 3444) != 0) {
						// 0x567e4
						v58 = 181;
						// branch -> 0x567e8
					}
					// 0x567e8
					v57 = v58;
					if (*(int32_t *)(v81 + 3740) == 0) {
						// 0x567f8
						v57 = 229;
						// branch -> 0x567fc
					}
					// 0x567fc
					g40 = v70;
					g41 = v88;
					g37 = 517;
					g38 = 320;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
					v62 = g24;
					v61 = g22;
					v60 = g36;
					v59 = g35;
					// branch -> 0x56820
				}
				// 0x56820
				v82 = *(int32_t *)g30;
				g39 = v61;
				g40 = v62;
				g37 = 320;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
					// 0x5685c
					g13 = 1;
					CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				} else {
					// 0x56838
					CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
					// branch -> 0x56880
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x5677c
		if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
			// 0x56794
			g39 = 84;
			InvDrawSlotBack(517, 320, 56, 84);
			v55 = g35;
			v56 = g36;
			v81 = v56 + 0x55ec * *(int32_t *)v55;
			v70 = *(int32_t *)(v81 + 3576) + 12;
			g22 = v70;
			v88 = *(int32_t *)(g32 + 4 * v70);
			g24 = v88;
			v62 = v88;
			v61 = v70;
			v60 = v56;
			v59 = v55;
			if (*(char *)g31 == 6) {
				// 0x567d4
				v58 = 197;
				if (*(char *)(v81 + 3444) != 0) {
					// 0x567e4
					v58 = 181;
					// branch -> 0x567e8
				}
				// 0x567e8
				v57 = v58;
				if (*(int32_t *)(v81 + 3740) == 0) {
					// 0x567f8
					v57 = 229;
					// branch -> 0x567fc
				}
				// 0x567fc
				g40 = v70;
				g41 = v88;
				g37 = 517;
				g38 = 320;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
				v62 = g24;
				v61 = g22;
				v60 = g36;
				v59 = g35;
				// branch -> 0x56820
			}
			// 0x56820
			v82 = *(int32_t *)g30;
			g39 = v61;
			g40 = v62;
			g37 = 320;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
				// 0x5685c
				g13 = 1;
				CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
				// branch -> 0x56880
			} else {
				// 0x56838
				CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
				// branch -> 0x56880
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x56288
	if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 1920) != -1) {
		// 0x562a0
		g39 = 28;
		InvDrawSlotBack(633, 365, 28, 28);
		v13 = g35;
		v14 = g36;
		v73 = v14 + 0x55ec * *(int32_t *)v13;
		v64 = *(int32_t *)(v73 + 2104) + 12;
		g26 = v64;
		v84 = *(int32_t *)(g32 + 4 * v64);
		g25 = v84;
		v20 = v84;
		v19 = v64;
		v18 = v14;
		v17 = v13;
		if (*(char *)g31 == 2) {
			// 0x562e0
			v16 = 197;
			if (*(char *)(v73 + 1972) != 0) {
				// 0x562f0
				v16 = 181;
				// branch -> 0x562f4
			}
			// 0x562f4
			v15 = v16;
			if (*(int32_t *)(v73 + 2268) == 0) {
				// 0x56304
				v15 = 229;
				// branch -> 0x56308
			}
			// 0x56308
			g40 = v64;
			g41 = v84;
			g37 = 633;
			g38 = 365;
			g42 = 0;
			g13 = 8;
			CelDecodeClr(v15 % 256, 633, 365, *(int32_t *)g30, v64, v84, 0);
			v20 = g25;
			v19 = g26;
			v18 = g36;
			v17 = g35;
			// branch -> 0x5632c
		}
		// 0x5632c
		v74 = *(int32_t *)g30;
		g39 = v19;
		g40 = v20;
		g37 = 365;
		g41 = 0;
		g42 = 8;
		if (*(int32_t *)(0x55ec * *(int32_t *)v17 + v18 + 2268) == 0) {
			// 0x56368
			g13 = 1;
			CelDrawHdrLightRed_part(633, 365, v74, v19, v20, 0, 8);
			// branch -> 0x5638c
		} else {
			// 0x56344
			CelDrawHdrOnly(633, 365, v74, v19, v20, 0, 8);
			// branch -> 0x5638c
		}
		// 0x5638c
		if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 2288) != -1) {
			// 0x563a4
			g39 = 28;
			InvDrawSlotBack(589, 220, 28, 28);
			v21 = g35;
			v22 = g36;
			v75 = v22 + 0x55ec * *(int32_t *)v21;
			v65 = *(int32_t *)(v75 + 2472) + 12;
			g26 = v65;
			v85 = *(int32_t *)(g32 + 4 * v65);
			g25 = v85;
			v28 = v85;
			v27 = v65;
			v26 = v22;
			v25 = v21;
			if (*(char *)g31 == 3) {
				// 0x563e4
				v24 = 197;
				if (*(char *)(v75 + 2340) != 0) {
					// 0x563f4
					v24 = 181;
					// branch -> 0x563f8
				}
				// 0x563f8
				v23 = v24;
				if (*(int32_t *)(v75 + 2636) == 0) {
					// 0x56408
					v23 = 229;
					// branch -> 0x5640c
				}
				// 0x5640c
				g40 = v65;
				g41 = v85;
				g37 = 589;
				g38 = 220;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v23 % 256, 589, 220, *(int32_t *)g30, v65, v85, 0);
				v28 = g25;
				v27 = g26;
				v26 = g36;
				v25 = g35;
				// branch -> 0x56430
			}
			// 0x56430
			v76 = *(int32_t *)g30;
			g39 = v27;
			g40 = v28;
			g37 = 220;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v25 + v26 + 2636) == 0) {
				// 0x5646c
				g13 = 1;
				CelDrawHdrLightRed_part(589, 220, v76, v27, v28, 0, 8);
				// branch -> 0x56490
			} else {
				// 0x56448
				CelDrawHdrOnly(589, 220, v76, v27, v28, 0, 8);
				// branch -> 0x56490
			}
			// 0x56490
			v29 = g35;
			v30 = g36;
			v44 = v30;
			v43 = v29;
			if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
				// 0x564a8
				g39 = 84;
				InvDrawSlotBack(401, 320, 56, 84);
				v31 = g35;
				v32 = g36;
				v77 = v32 + 0x55ec * *(int32_t *)v31;
				v66 = *(int32_t *)(v77 + 2840) + 12;
				g26 = v66;
				v67 = 4 * v66;
				v86 = *(int32_t *)(g32 + v67);
				g25 = v86;
				v1 = v86 == 28 ? 415 : 401;
				g24 = v1;
				v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
				g22 = v4;
				v40 = v86;
				v39 = v66;
				v38 = v4;
				v37 = v1;
				v36 = v32;
				v35 = v31;
				if (*(char *)g31 == 4) {
					// 0x56514
					v34 = 197;
					if (*(char *)(v77 + 2708) != 0) {
						// 0x56528
						v34 = 181;
						// branch -> 0x5652c
					}
					// 0x5652c
					v33 = v34;
					if (*(int32_t *)(v77 + 3004) == 0) {
						// 0x5653c
						v33 = 229;
						// branch -> 0x56540
					}
					// 0x56540
					g37 = v1;
					g38 = v4;
					g40 = v66;
					g41 = v86;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
					v40 = g25;
					v39 = g26;
					v38 = g22;
					v37 = g24;
					v36 = g36;
					v35 = g35;
					// branch -> 0x56564
				}
				// 0x56564
				v78 = *(int32_t *)g30;
				g37 = v38;
				g39 = v39;
				g40 = v40;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
					// 0x565a0
					g13 = 1;
					CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
					// branch -> 0x565c4
				} else {
					// 0x5657c
					CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
					// branch -> 0x565c4
				}
				// 0x565c4
				v41 = g35;
				v42 = g36;
				if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
					// 0x565dc
					g39 = 84;
					InvDrawSlotBack(631, 320, 56, 84);
					*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
					*(int32_t *)g28 = 1;
					g41 = 8;
					CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
					*(int32_t *)g28 = 0;
					v44 = g36;
					v43 = g35;
					// branch -> 0x56648
				} else {
					v44 = v42;
					v43 = v41;
				}
			}
			// 0x56648
			if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
				// 0x56660
				g39 = 84;
				InvDrawSlotBack(631, 320, 56, 84);
				v45 = g35;
				v46 = g36;
				v79 = v46 + 0x55ec * *(int32_t *)v45;
				v68 = *(int32_t *)(v79 + 3208) + 12;
				v69 = 4 * v68;
				v87 = *(int32_t *)(g32 + v69);
				g26 = v87;
				v2 = v87 == 28 ? 645 : 633;
				g25 = v2;
				v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
				v54 = v87;
				v53 = v68;
				v52 = v3;
				v51 = v2;
				v50 = v46;
				v49 = v45;
				if (*(char *)g31 == 5) {
					// 0x566cc
					v48 = 197;
					if (*(char *)(v79 + 3076) != 0) {
						// 0x566e0
						v48 = 181;
						// branch -> 0x566e4
					}
					// 0x566e4
					v47 = v48;
					if (*(int32_t *)(v79 + 3372) == 0) {
						// 0x566f4
						v47 = 229;
						// branch -> 0x566f8
					}
					// 0x566f8
					g37 = v2;
					g38 = v3;
					g40 = v68;
					g41 = v87;
					g42 = 0;
					g13 = 8;
					CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
					v54 = g26;
					v53 = g28;
					v52 = g29;
					v51 = g25;
					v50 = g36;
					v49 = g35;
					// branch -> 0x5671c
				}
				// 0x5671c
				v80 = *(int32_t *)g30;
				g37 = v52;
				g39 = v53;
				g40 = v54;
				g41 = 0;
				g42 = 8;
				if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
					// 0x56758
					g13 = 1;
					CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
					// branch -> 0x5677c
				} else {
					// 0x56734
					CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
					// branch -> 0x5677c
				}
				// 0x5677c
				if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 3392) != -1) {
					// 0x56794
					g39 = 84;
					InvDrawSlotBack(517, 320, 56, 84);
					v55 = g35;
					v56 = g36;
					v81 = v56 + 0x55ec * *(int32_t *)v55;
					v70 = *(int32_t *)(v81 + 3576) + 12;
					g22 = v70;
					v88 = *(int32_t *)(g32 + 4 * v70);
					g24 = v88;
					v62 = v88;
					v61 = v70;
					v60 = v56;
					v59 = v55;
					if (*(char *)g31 == 6) {
						// 0x567d4
						v58 = 197;
						if (*(char *)(v81 + 3444) != 0) {
							// 0x567e4
							v58 = 181;
							// branch -> 0x567e8
						}
						// 0x567e8
						v57 = v58;
						if (*(int32_t *)(v81 + 3740) == 0) {
							// 0x567f8
							v57 = 229;
							// branch -> 0x567fc
						}
						// 0x567fc
						g40 = v70;
						g41 = v88;
						g37 = 517;
						g38 = 320;
						g42 = 0;
						g13 = 8;
						CelDecodeClr(v57 % 256, 517, 320, *(int32_t *)g30, v70, v88, 0);
						v62 = g24;
						v61 = g22;
						v60 = g36;
						v59 = g35;
						// branch -> 0x56820
					}
					// 0x56820
					v82 = *(int32_t *)g30;
					g39 = v61;
					g40 = v62;
					g37 = 320;
					g41 = 0;
					g42 = 8;
					if (*(int32_t *)(0x55ec * *(int32_t *)v59 + v60 + 3740) == 0) {
						// 0x5685c
						g13 = 1;
						CelDrawHdrLightRed_part(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					} else {
						// 0x56838
						CelDrawHdrOnly(517, 320, v82, v61, v62, 0, 8);
						// branch -> 0x56880
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x56490
		v29 = g35;
		v30 = g36;
		v44 = v30;
		v43 = v29;
		if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
			// 0x564a8
			g39 = 84;
			InvDrawSlotBack(401, 320, 56, 84);
			v31 = g35;
			v32 = g36;
			v77 = v32 + 0x55ec * *(int32_t *)v31;
			v66 = *(int32_t *)(v77 + 2840) + 12;
			g26 = v66;
			v67 = 4 * v66;
			v86 = *(int32_t *)(g32 + v67);
			g25 = v86;
			v1 = v86 == 28 ? 415 : 401;
			g24 = v1;
			v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
			g22 = v4;
			v40 = v86;
			v39 = v66;
			v38 = v4;
			v37 = v1;
			v36 = v32;
			v35 = v31;
			if (*(char *)g31 == 4) {
				// 0x56514
				v34 = 197;
				if (*(char *)(v77 + 2708) != 0) {
					// 0x56528
					v34 = 181;
					// branch -> 0x5652c
				}
				// 0x5652c
				v33 = v34;
				if (*(int32_t *)(v77 + 3004) == 0) {
					// 0x5653c
					v33 = 229;
					// branch -> 0x56540
				}
				// 0x56540
				g37 = v1;
				g38 = v4;
				g40 = v66;
				g41 = v86;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
				v40 = g25;
				v39 = g26;
				v38 = g22;
				v37 = g24;
				v36 = g36;
				v35 = g35;
				// branch -> 0x56564
			}
			// 0x56564
			v78 = *(int32_t *)g30;
			g37 = v38;
			g39 = v39;
			g40 = v40;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
				// 0x565a0
				g13 = 1;
				CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
				// branch -> 0x565c4
			} else {
				// 0x5657c
				CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
				// branch -> 0x565c4
			}
			// 0x565c4
			v41 = g35;
			v42 = g36;
			if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
				// 0x565dc
				g39 = 84;
				InvDrawSlotBack(631, 320, 56, 84);
				*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
				*(int32_t *)g28 = 1;
				g41 = 8;
				CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
				*(int32_t *)g28 = 0;
				v44 = g36;
				v43 = g35;
				// branch -> 0x56648
			} else {
				v44 = v42;
				v43 = v41;
			}
		}
		// 0x56648
		if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
			// 0x56660
			g39 = 84;
			InvDrawSlotBack(631, 320, 56, 84);
			v45 = g35;
			v46 = g36;
			v79 = v46 + 0x55ec * *(int32_t *)v45;
			v68 = *(int32_t *)(v79 + 3208) + 12;
			v69 = 4 * v68;
			v87 = *(int32_t *)(g32 + v69);
			g26 = v87;
			v2 = v87 == 28 ? 645 : 633;
			g25 = v2;
			v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
			v54 = v87;
			v53 = v68;
			v52 = v3;
			v51 = v2;
			v50 = v46;
			v49 = v45;
			if (*(char *)g31 == 5) {
				// 0x566cc
				v48 = 197;
				if (*(char *)(v79 + 3076) != 0) {
					// 0x566e0
					v48 = 181;
					// branch -> 0x566e4
				}
				// 0x566e4
				v47 = v48;
				if (*(int32_t *)(v79 + 3372) == 0) {
					// 0x566f4
					v47 = 229;
					// branch -> 0x566f8
				}
				// 0x566f8
				g37 = v2;
				g38 = v3;
				g40 = v68;
				g41 = v87;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
				v54 = g26;
				v53 = g28;
				v52 = g29;
				v51 = g25;
				v50 = g36;
				v49 = g35;
				// branch -> 0x5671c
			}
			// 0x5671c
			v80 = *(int32_t *)g30;
			g37 = v52;
			g39 = v53;
			g40 = v54;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
				// 0x56758
				g13 = 1;
				CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
				// branch -> 0x5677c
			} else {
				// 0x56734
				CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
				// branch -> 0x5677c
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x5638c
	if (*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 2288) != -1) {
		// 0x563a4
		g39 = 28;
		InvDrawSlotBack(589, 220, 28, 28);
		v21 = g35;
		v22 = g36;
		v75 = v22 + 0x55ec * *(int32_t *)v21;
		v65 = *(int32_t *)(v75 + 2472) + 12;
		g26 = v65;
		v85 = *(int32_t *)(g32 + 4 * v65);
		g25 = v85;
		v28 = v85;
		v27 = v65;
		v26 = v22;
		v25 = v21;
		if (*(char *)g31 == 3) {
			// 0x563e4
			v24 = 197;
			if (*(char *)(v75 + 2340) != 0) {
				// 0x563f4
				v24 = 181;
				// branch -> 0x563f8
			}
			// 0x563f8
			v23 = v24;
			if (*(int32_t *)(v75 + 2636) == 0) {
				// 0x56408
				v23 = 229;
				// branch -> 0x5640c
			}
			// 0x5640c
			g40 = v65;
			g41 = v85;
			g37 = 589;
			g38 = 220;
			g42 = 0;
			g13 = 8;
			CelDecodeClr(v23 % 256, 589, 220, *(int32_t *)g30, v65, v85, 0);
			v28 = g25;
			v27 = g26;
			v26 = g36;
			v25 = g35;
			// branch -> 0x56430
		}
		// 0x56430
		v76 = *(int32_t *)g30;
		g39 = v27;
		g40 = v28;
		g37 = 220;
		g41 = 0;
		g42 = 8;
		if (*(int32_t *)(0x55ec * *(int32_t *)v25 + v26 + 2636) == 0) {
			// 0x5646c
			g13 = 1;
			CelDrawHdrLightRed_part(589, 220, v76, v27, v28, 0, 8);
			// branch -> 0x56490
		} else {
			// 0x56448
			CelDrawHdrOnly(589, 220, v76, v27, v28, 0, 8);
			// branch -> 0x56490
		}
		// 0x56490
		v29 = g35;
		v30 = g36;
		v44 = v30;
		v43 = v29;
		if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
			// 0x564a8
			g39 = 84;
			InvDrawSlotBack(401, 320, 56, 84);
			v31 = g35;
			v32 = g36;
			v77 = v32 + 0x55ec * *(int32_t *)v31;
			v66 = *(int32_t *)(v77 + 2840) + 12;
			g26 = v66;
			v67 = 4 * v66;
			v86 = *(int32_t *)(g32 + v67);
			g25 = v86;
			v1 = v86 == 28 ? 415 : 401;
			g24 = v1;
			v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
			g22 = v4;
			v40 = v86;
			v39 = v66;
			v38 = v4;
			v37 = v1;
			v36 = v32;
			v35 = v31;
			if (*(char *)g31 == 4) {
				// 0x56514
				v34 = 197;
				if (*(char *)(v77 + 2708) != 0) {
					// 0x56528
					v34 = 181;
					// branch -> 0x5652c
				}
				// 0x5652c
				v33 = v34;
				if (*(int32_t *)(v77 + 3004) == 0) {
					// 0x5653c
					v33 = 229;
					// branch -> 0x56540
				}
				// 0x56540
				g37 = v1;
				g38 = v4;
				g40 = v66;
				g41 = v86;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
				v40 = g25;
				v39 = g26;
				v38 = g22;
				v37 = g24;
				v36 = g36;
				v35 = g35;
				// branch -> 0x56564
			}
			// 0x56564
			v78 = *(int32_t *)g30;
			g37 = v38;
			g39 = v39;
			g40 = v40;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
				// 0x565a0
				g13 = 1;
				CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
				// branch -> 0x565c4
			} else {
				// 0x5657c
				CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
				// branch -> 0x565c4
			}
			// 0x565c4
			v41 = g35;
			v42 = g36;
			if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
				// 0x565dc
				g39 = 84;
				InvDrawSlotBack(631, 320, 56, 84);
				*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
				*(int32_t *)g28 = 1;
				g41 = 8;
				CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
				*(int32_t *)g28 = 0;
				v44 = g36;
				v43 = g35;
				// branch -> 0x56648
			} else {
				v44 = v42;
				v43 = v41;
			}
		}
		// 0x56648
		if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
			// 0x56660
			g39 = 84;
			InvDrawSlotBack(631, 320, 56, 84);
			v45 = g35;
			v46 = g36;
			v79 = v46 + 0x55ec * *(int32_t *)v45;
			v68 = *(int32_t *)(v79 + 3208) + 12;
			v69 = 4 * v68;
			v87 = *(int32_t *)(g32 + v69);
			g26 = v87;
			v2 = v87 == 28 ? 645 : 633;
			g25 = v2;
			v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
			v54 = v87;
			v53 = v68;
			v52 = v3;
			v51 = v2;
			v50 = v46;
			v49 = v45;
			if (*(char *)g31 == 5) {
				// 0x566cc
				v48 = 197;
				if (*(char *)(v79 + 3076) != 0) {
					// 0x566e0
					v48 = 181;
					// branch -> 0x566e4
				}
				// 0x566e4
				v47 = v48;
				if (*(int32_t *)(v79 + 3372) == 0) {
					// 0x566f4
					v47 = 229;
					// branch -> 0x566f8
				}
				// 0x566f8
				g37 = v2;
				g38 = v3;
				g40 = v68;
				g41 = v87;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
				v54 = g26;
				v53 = g28;
				v52 = g29;
				v51 = g25;
				v50 = g36;
				v49 = g35;
				// branch -> 0x5671c
			}
			// 0x5671c
			v80 = *(int32_t *)g30;
			g37 = v52;
			g39 = v53;
			g40 = v54;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
				// 0x56758
				g13 = 1;
				CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
				// branch -> 0x5677c
			} else {
				// 0x56734
				CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
				// branch -> 0x5677c
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x56490
	v29 = g35;
	v30 = g36;
	v44 = v30;
	v43 = v29;
	if (*(int32_t *)(v30 + 0x55ec * *(int32_t *)v29 + 2656) != -1) {
		// 0x564a8
		g39 = 84;
		InvDrawSlotBack(401, 320, 56, 84);
		v31 = g35;
		v32 = g36;
		v77 = v32 + 0x55ec * *(int32_t *)v31;
		v66 = *(int32_t *)(v77 + 2840) + 12;
		g26 = v66;
		v67 = 4 * v66;
		v86 = *(int32_t *)(g32 + v67);
		g25 = v86;
		v1 = v86 == 28 ? 415 : 401;
		g24 = v1;
		v4 = *(int32_t *)(g29 + v67) == 84 ? 320 : 306;
		g22 = v4;
		v40 = v86;
		v39 = v66;
		v38 = v4;
		v37 = v1;
		v36 = v32;
		v35 = v31;
		if (*(char *)g31 == 4) {
			// 0x56514
			v34 = 197;
			if (*(char *)(v77 + 2708) != 0) {
				// 0x56528
				v34 = 181;
				// branch -> 0x5652c
			}
			// 0x5652c
			v33 = v34;
			if (*(int32_t *)(v77 + 3004) == 0) {
				// 0x5653c
				v33 = 229;
				// branch -> 0x56540
			}
			// 0x56540
			g37 = v1;
			g38 = v4;
			g40 = v66;
			g41 = v86;
			g42 = 0;
			g13 = 8;
			CelDecodeClr(v33 % 256, v1, v4, *(int32_t *)g30, v66, v86, 0);
			v40 = g25;
			v39 = g26;
			v38 = g22;
			v37 = g24;
			v36 = g36;
			v35 = g35;
			// branch -> 0x56564
		}
		// 0x56564
		v78 = *(int32_t *)g30;
		g37 = v38;
		g39 = v39;
		g40 = v40;
		g41 = 0;
		g42 = 8;
		if (*(int32_t *)(0x55ec * *(int32_t *)v35 + v36 + 3004) == 0) {
			// 0x565a0
			g13 = 1;
			CelDrawHdrLightRed_part(v37, v38, v78, v39, v40, 0, 8);
			// branch -> 0x565c4
		} else {
			// 0x5657c
			CelDrawHdrOnly(v37, v38, v78, v39, v40, 0, 8);
			// branch -> 0x565c4
		}
		// 0x565c4
		v41 = g35;
		v42 = g36;
		if (*(char *)(v42 + 0x55ec * *(int32_t *)v41 + 2837) == 2) {
			// 0x565dc
			g39 = 84;
			InvDrawSlotBack(631, 320, 56, 84);
			*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
			*(int32_t *)g28 = 1;
			g41 = 8;
			CelDecodeHdrLightTrans(*(int32_t *)g30, g26, g25, 0, 8);
			*(int32_t *)g28 = 0;
			v44 = g36;
			v43 = g35;
			// branch -> 0x56648
		} else {
			v44 = v42;
			v43 = v41;
		}
	}
	// 0x56648
	if (*(int32_t *)(0x55ec * *(int32_t *)v43 + v44 + 3024) != -1) {
		// 0x56660
		g39 = 84;
		InvDrawSlotBack(631, 320, 56, 84);
		v45 = g35;
		v46 = g36;
		v79 = v46 + 0x55ec * *(int32_t *)v45;
		v68 = *(int32_t *)(v79 + 3208) + 12;
		v69 = 4 * v68;
		v87 = *(int32_t *)(g32 + v69);
		g26 = v87;
		v2 = v87 == 28 ? 645 : 633;
		g25 = v2;
		v3 = *(int32_t *)(g29 + v69) == 84 ? 320 : 306;
		v54 = v87;
		v53 = v68;
		v52 = v3;
		v51 = v2;
		v50 = v46;
		v49 = v45;
		if (*(char *)g31 == 5) {
			// 0x566cc
			v48 = 197;
			if (*(char *)(v79 + 3076) != 0) {
				// 0x566e0
				v48 = 181;
				// branch -> 0x566e4
			}
			// 0x566e4
			v47 = v48;
			if (*(int32_t *)(v79 + 3372) == 0) {
				// 0x566f4
				v47 = 229;
				// branch -> 0x566f8
			}
			// 0x566f8
			g37 = v2;
			g38 = v3;
			g40 = v68;
			g41 = v87;
			g42 = 0;
			g13 = 8;
			CelDecodeClr(v47 % 256, v2, v3, *(int32_t *)g30, v68, v87, 0);
			v54 = g26;
			v53 = g28;
			v52 = g29;
			v51 = g25;
			v50 = g36;
			v49 = g35;
			// branch -> 0x5671c
		}
		// 0x5671c
		v80 = *(int32_t *)g30;
		g37 = v52;
		g39 = v53;
		g40 = v54;
		g41 = 0;
		g42 = 8;
		if (*(int32_t *)(0x55ec * *(int32_t *)v49 + v50 + 3372) == 0) {
			// 0x56758
			g13 = 1;
			CelDrawHdrLightRed_part(v51, v52, v80, v53, v54, 0, 8);
			// branch -> 0x5677c
		} else {
			// 0x56734
			CelDrawHdrOnly(v51, v52, v80, v53, v54, 0, 8);
			// branch -> 0x5677c
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x56a18 - 0x56c68
int32_t DrawInvBelt(void)
{
	int32_t v1 = g10;                            // 0x56a1c
	int32_t result = *(int32_t *)(g23 - 0x76d0); // 0x56a20
	g26 = g23 - 0x2da0;
	g27 = g23 - 0x2e20;
	g28 = g23 - 0x2ae8;
	g29 = g23 + 0x3858;
	g30 = *(int32_t *)(g23 - 0x7634);
	g31 = *(int32_t *)(g23 - 0x772c);
	g32 = g23 - 0x29e8;
	g35 = *(int32_t *)(g23 - 0x77ac);
	g36 = *(int32_t *)(g23 - 0x77a8);
	if (*(int32_t *)result != 0) {
		// 0x56c54
		g10 = v1;
		return result;
	}
	// 0x56a60
	g39 = 28;
	function_2dc34(205, 21, 232, 28, 269, 517);
	g22 = 0;
	int32_t v2 = g23 + 0x35ec; // 0x56a80
	g24 = v2;
	g25 = 0;
	int32_t v3 = 0; // 0x56a98
	// branch -> 0x56a90
	int32_t result2; // 0x56c6412
	while (true) {
		int32_t v4 = 0x55ec * *(int32_t *)g35 + v3; // 0x56a98
		result2 = v4;
		int32_t v5 = v3; // 0x56c4c
		if (*(int32_t *)(g36 + v4 + 0x485c) != -1) {
			int32_t v6 = *(int32_t *)(v2 + 524); // 0x56ab4
			g39 = 28;
			InvDrawSlotBack(*(int32_t *)(v2 + 520) + 64, v6 + 159, 28, 28);
			int32_t v7 = g25 + 0x55ec * *(int32_t *)g35 + g36; // 0x56adc
			int32_t v8 = *(int32_t *)(v7 + 0x4914) + 12;       // 0x56aec
			int32_t v9 = *(int32_t *)(g32 + 4 * v8);           // 0x56af4
			g20 = v9;
			g21 = v8;
			int32_t v10 = v9; // 0x56ba4
			int32_t v11 = v8; // 0x56b9c
			if ((int32_t) * (char *)g31 == g22 + 47) {
				int32_t v12 = 197; // 0x56b384
				if (*(char *)(v7 + 0x4890) != 0) {
					// 0x56b10
					v12 = 181;
					// branch -> 0x56b14
				}
				if (*(int32_t *)(v7 + 0x49b8) == 0) {
					// 0x56b20
					v12 = 229;
					// branch -> 0x56b24
				}
				int32_t v13 = g24; // 0x56b24
				g40 = v8;
				g41 = v9;
				int32_t v14 = *(int32_t *)(v13 + 520) + 64; // 0x56b3c
				g37 = v14;
				int32_t v15 = *(int32_t *)(v13 + 524) + 159; // 0x56b40
				g38 = v15;
				g42 = 0;
				g13 = 8;
				CelDecodeClr(v12 % 256, v14, v15, *(int32_t *)g30, v8, v9, 0);
				v10 = g20;
				v11 = g21;
				// branch -> 0x56b50
			}
			int32_t v16 = g24; // 0x56b98
			g39 = v11;
			g40 = v10;
			int32_t v17 = *(int32_t *)g30;               // 0x56ba8
			int32_t v18 = *(int32_t *)(v16 + 520) + 64;  // 0x56bac
			int32_t v19 = *(int32_t *)(v16 + 524) + 159; // 0x56bb0
			g37 = v19;
			g41 = 0;
			g42 = 8;
			if (*(int32_t *)(0x55ec * *(int32_t *)g35 + g25 + 0x49b8 + g36) == 0) {
				// 0x56b98
				g13 = 1;
				CelDrawHdrLightRed_part(v18, v19, v17, v11, v10, 0, 8);
				// branch -> 0x56bc4
			} else {
				// 0x56b6c
				CelDrawHdrOnly(v18, v19, v17, v11, v10, 0, 8);
				// branch -> 0x56bc4
			}
			int32_t v20 = g25;                                  // 0x56bcc
			int32_t v21 = v20 + 0x55ec * *(int32_t *)g35 + g36; // 0x56bd0
			g37 = v21;
			int32_t v22 = 76 * *(int32_t *)(v21 + 0x49bc); // 0x56bd8
			if (*(int32_t *)(g29 + v22 + 64) != 0) {
				// 0x56bec
				if (*(int32_t *)(v21 + 0x49b8) != 0) {
					// 0x56bf8
					if (*(int32_t *)(v21 + 0x485c) != 11) {
						int32_t v23 = g24;                                                   // 0x56c08
						int32_t v24 = *(int32_t *)(v23 + 520);                               // 0x56c10
						unsigned char v25 = *(char *)(g28 + (g22 + 49) % 256);               // 0x56c14
						int32_t v26 = *(int32_t *)(g33 + 4 * *(int32_t *)(v23 + 524) + 636); // 0x56c20
						int32_t v27 = (int32_t) * (char *)(g27 + (int32_t)v25);              // 0x56c28
						unsigned char v28 = *(char *)(g26 + v27);                            // 0x56c30
						result2 = function_2d918(v26 + 92 + v24 - (int32_t)v28, v27, 0);
						v5 = g25;
						// branch -> 0x56c40
					} else {
						result2 = v22;
						v5 = v20;
					}
				} else {
					result2 = v22;
					v5 = v20;
				}
			} else {
				result2 = v22;
				v5 = v20;
			}
		}
		int32_t v29 = g22 + 1; // 0x56c40
		g22 = v29;
		int32_t v30 = g24 + 8; // 0x56c44
		g24 = v30;
		int32_t v31 = v5 + 368; // 0x56c4c
		g25 = v31;
		if (v29 >= 8) {
			// break -> 0x56c54
			break;
		}
		v2 = v30;
		v3 = v31;
		// continue -> 0x56a90
	}
	// 0x56c54
	g10 = v1;
	return result2;
}

// Address range: 0x56c68 - 0x56e60
int32_t function_56c68(int32_t a1, int64_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	g34 = a1;
	int32_t v1 = g10;                                                          // 0x56c74
	int32_t v2 = a2;                                                           // 0x56c78
	uint64_t v3 = 0x66666667 * (int64_t)v2;                                    // 0x56c78
	int32_t v4 = (int32_t)(v3 / 0x100000000) >> 31;                            // 0x56c7c
	int32_t v5 = v4 < 0;                                                       // 0x56c80
	int32_t v6 = *(int32_t *)(g23 - 0x77a8);                                   // 0x56c8c
	int32_t v7 = 10 * ((v4 & -0x40000000 | (int32_t)(v3 / 0x400000000)) + v5); // 0x56c90
	int32_t v8 = v7;                                                           // r9
	int32_t v9 = v7;                                                           // r10
	g36 = 1;
	int32_t v10 = v7; // 0x56cd0
	if (v7 <= 0xffffffff) {
		// 0x56ca8
		v9 = 0;
		v10 = 0;
		// branch -> 0x56cac
	}
	int32_t v11 = 0x55ec * g34; // 0x56cc8
	g33 = v11;
	int32_t v12 = v11 + v6;  // 0x56ccc
	int32_t v13 = v12 + v10; // 0x56cd0
	g35 = v13;
	int32_t v14 = v2 - v7; // r4
	g31 = 0;
	int32_t result = 1; // 0x56d64
	int32_t v15;        // ctr
	int32_t v16;        // r11
	int32_t v17;        // 0x56d98
	int32_t v18;        // 0x56dc8
	int32_t v19;        // 0x56dd4
	int32_t v20;        // 0x56de4
	int32_t v21;        // 0x56dec
	int32_t v22;        // 0x56df8
	int32_t v23;        // 0x56e34
	int32_t v24;        // 0x56e38
	int32_t v25;        // 0x56d78
	int32_t v26;        // 0x56d98
	int32_t v27;        // 0x56da0
	int32_t v28;        // 0x56da8
	int32_t *v29;       // 0x56dac
	int32_t v30;        // 0x56dc4
	int32_t v31;        // 0x56e3c
	int32_t v32;        // 0x56cfc
	int32_t v33;        // 0x56d74
	int32_t v34;        // 0x56da0
	int32_t v35;        // 0x56dc4
	int32_t v36;        // 0x56dec
	int32_t v37;        // 0x56e10
	if (a4 > 0) {
		int32_t v38 = 1; // 0x56d6455
		int32_t v39 = 1; // 0x56d5c
		while (true) {
			// 0x56d5c
			if (v39 != 0) {
				int32_t v40 = v38; // 0x56d6454
				int32_t v41 = v39; // 0x56d5c38
				if (v10 >= 40) {
					// 0x56ce8
					g36 = 0;
					v40 = 0;
					v41 = 0;
					// branch -> 0x56cec
				}
				int32_t v42 = v14 < 0 ? 0 : v14;
				g30 = v42;
				v32 = v42 + v13;
				g32 = 0;
				int32_t v43; // 0x56d48
				int32_t v44; // 0x56d4c
				int32_t v45; // 0x56d50
				if (a3 > 0) {
					int32_t v46 = a3; // 0x56d3849
					int32_t v47 = 0;  // 0x56d3447
					while (true) {
						// 0x56d40
						if (v41 != 0) {
							int32_t v48 = v46; // 0x56d38
							int32_t v49 = v47; // 0x56d34
							int32_t v50 = v42; // 0x56d30
							int32_t v51 = 0;
							if (v42 < 10) {
								int32_t v52 = llvm_ctlz_i32(-(int32_t) * (char *)(v32 + 0x482c), true); // 0x56d24
								v48 = a3;
								v49 = g32;
								v50 = g30;
								v51 = __asm_rlwinm(v52, 27, 24, 31);
								// branch -> 0x56d2c
							}
							// 0x56d2c
							g36 = v51;
							int32_t v53 = v32 + 1; // 0x56d2c
							int32_t v54 = v50 + 1; // 0x56d30
							g30 = v54;
							int32_t v55 = v49 + 1; // 0x56d34
							g32 = v55;
							if (v55 >= v48) {
								v40 = v51;
								v41 = v51;
								// break -> 0x56d48
								break;
							}
							v41 = v51;
							v40 = v51;
							v46 = v48;
							v47 = v55;
							v32 = v53;
							v42 = v54;
							// continue -> 0x56d40
							continue;
						} else {
							v41 = 0;
						}
					}
					// 0x56d48
					v43 = g35 + 10;
					g35 = v43;
					v44 = v9 + 10;
					v9 = v44;
					v45 = g31 + 1;
					g31 = v45;
					if (v45 >= a4) {
						result = v40;
						// break -> 0x56d64
						break;
					}
					v38 = v40;
					v13 = v43;
					v10 = v44;
					v39 = v41;
					// continue -> 0x56d5c
					continue;
				}
				// 0x56d48
				v43 = g35 + 10;
				g35 = v43;
				v44 = v9 + 10;
				v9 = v44;
				v45 = g31 + 1;
				g31 = v45;
				if (v45 >= a4) {
					result = v40;
					// break -> 0x56d64
					break;
				}
				v38 = v40;
				v13 = v43;
				v10 = v44;
				v39 = v41;
				// continue -> 0x56d5c
				continue;
			} else {
				result = v38;
			}
			// 0x56d64
			if (result == 0) {
				// 0x56e48
				g10 = v1;
				return 0;
			}
			// 0x56d6c
			if (a5 == 0) {
				// 0x56e48
				g10 = v1;
				return result;
			}
			// 0x56d74
			v33 = g33 + v6;
			v25 = v33 + 0x4828;
			v15 = 46;
			v27 = 368 * *(int32_t *)v25 + v33 + 3744;
			v17 = v33 + 0x53cc;
			// branch -> 0x56d98
			while (true) {
				// 0x56d98
				v26 = v17 + 8;
				v34 = v27 + 8;
				*(int32_t *)v34 = *(int32_t *)v26;
				*(int32_t *)(v27 + 12) = *(int32_t *)(v17 + 12);
				v28 = v15 - 1;
				v15 = v28;
				if (v28 == 0) {
					// 0x56dac
					v29 = (int32_t *)v25;
					*v29 = *v29 + 1;
					if (v8 > -1) {
						// 0x56dac
						v30 = v8;
						// branch -> 0x56dc4
					} else {
						// 0x56dc0
						v30 = 0;
						// branch -> 0x56dc4
					}
					// 0x56dc4
					v35 = v12 + v30;
					v9 = v35;
					v18 = a4;
					v16 = 0;
					if (v18 <= 0) {
						// 0x56e44
						function_5ca38();
						// branch -> 0x56e48
						// 0x56e48
						g10 = v1;
						return g36;
					}
					int32_t v56 = v18; // 0x56e3c64
					int32_t v57 = 0;   // 0x56e3862
					v21 = v35;
					while (true) {
						// 0x56dd4
						v19 = v14;
						v20 = a3;
						v15 = v20;
						v36 = (v19 < 0 ? 0 : v19) + v21;
						v8 = v36;
						v32 = 0;
						v31 = v56;
						v24 = v57;
						v23 = v21;
						if (v20 >= 1) {
							v37 = v36;
							v22 = 0;
						lab_0x56df8:
							while (true) {
								// 0x56df8
								if (v22 == 0) {
									// 0x56e00
									if (v16 == v18 - 1) {
										int32_t v58 = 0x1000000 * *(int32_t *)(v12 + 0x4828) / 0x1000000; // 0x56e0c
										*(char *)(v37 + 0x482c) = (char)v58;
										// branch -> 0x56e28
									lab_0x56e28:;
										int32_t v59 = v8 + 1; // 0x56e28
										v8 = v59;
										int32_t v60 = v32 + 1; // 0x56e2c
										v32 = v60;
										int32_t v61 = v15 - 1; // 0x56e30
										v15 = v61;
										if (v61 == 0) {
											// break -> 0x56e34
											break;
										}
										v37 = v59;
										v22 = v60;
										// continue -> 0x56df8
										continue;
									}
								}
								int32_t v62 = -0x1000000 * *(int32_t *)(v12 + 0x4828) / 0x1000000; // 0x56e20
								*(char *)(v37 + 0x482c) = (char)v62;
								// branch -> 0x56e28
								goto lab_0x56e28;
							}
							// 0x56e34
							v31 = a4;
							v24 = v16;
							v23 = v9;
							// branch -> 0x56e34
						}
					lab_0x56e34:;
						int32_t v63 = v23 + 10; // 0x56e34
						v9 = v63;
						int32_t v64 = v24 + 1; // 0x56e38
						v16 = v64;
						if (v64 >= v31) {
							// break -> 0x56e44
							break;
						}
						v56 = v31;
						v57 = v64;
						v21 = v63;
						// continue -> 0x56dd4
					}
					// 0x56e44
					function_5ca38();
					// branch -> 0x56e48
					// 0x56e48
					g10 = v1;
					return g36;
				}
			lab_0x56d98:
				// 0x56d98
				v27 = v34;
				v17 = v26;
				// branch -> 0x56d98
			}
		}
	}
	// 0x56d64
	if (result == 0) {
		// 0x56e48
		g10 = v1;
		return 0;
	}
	// 0x56d6c
	if (a5 == 0) {
		// 0x56e48
		g10 = v1;
		return result;
	}
	// 0x56d74
	v33 = g33 + v6;
	v25 = v33 + 0x4828;
	v27 = 368 * *(int32_t *)v25 + v33 + 3744;
	v17 = v33 + 0x53cc;
	// branch -> 0x56d98
	while (true) {
		// 0x56d98
		v26 = v17 + 8;
		v34 = v27 + 8;
		*(int32_t *)v34 = *(int32_t *)v26;
		*(int32_t *)(v27 + 12) = *(int32_t *)(v17 + 12);
		v28 = 45;
		v15 = v28;
		if (v28 != 0) {
			goto lab_0x56d98;
		}
		// 0x56dac
		v29 = (int32_t *)v25;
		*v29 = *v29 + 1;
		if (v8 > -1) {
			// 0x56dac
			v30 = v8;
			// branch -> 0x56dc4
		} else {
			// 0x56dc0
			v30 = 0;
			// branch -> 0x56dc4
		}
		// 0x56dc4
		v35 = v12 + v30;
		v9 = v35;
		v18 = a4;
		v16 = 0;
		if (v18 > 0) {
			v21 = v35;
			while (true) {
				// 0x56dd4
				v19 = v14;
				v20 = a3;
				v15 = v20;
				v36 = (v19 < 0 ? 0 : v19) + v21;
				v8 = v36;
				v32 = 0;
				if (v20 < 1) {
					v31 = v18;
					v24 = 0;
					v23 = v21;
					goto lab_0x56e34;
				}
				v37 = v36;
				v22 = 0;
				goto lab_0x56df8;
			}
		}
		// 0x56e44
		function_5ca38();
		// branch -> 0x56e48
		// 0x56e48
		g10 = v1;
		return g36;
	}
}

// Address range: 0x56e60 - 0x5712c
int32_t function_56e60(int32_t a1, int64_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	g34 = a1;
	int32_t v1 = g10;                                                          // 0x56e6c
	int32_t v2 = a2;                                                           // 0x56e70
	uint64_t v3 = 0x66666667 * (int64_t)v2;                                    // 0x56e70
	int32_t v4 = (int32_t)(v3 / 0x100000000) >> 31;                            // 0x56e74
	int32_t v5 = v4 < 0;                                                       // 0x56e78
	int32_t v6 = *(int32_t *)(g23 - 0x77a8);                                   // 0x56e84
	int32_t v7 = 10 * ((v4 & -0x40000000 | (int32_t)(v3 / 0x400000000)) + v5); // 0x56e88
	int32_t v8 = v7;                                                           // r9
	int32_t v9 = v7;                                                           // r10
	g36 = 1;
	int32_t v10 = v7; // 0x56ec8
	if (v7 <= 0xffffffff) {
		// 0x56ea0
		v9 = 0;
		v10 = 0;
		// branch -> 0x56ea4
	}
	int32_t v11 = 0x55ec * g34; // 0x56ec0
	g33 = v11;
	int32_t v12 = v11 + v6;  // 0x56ec4
	int32_t v13 = v12 + v10; // 0x56ec8
	g35 = v13;
	int32_t v14 = v2 - v7; // r4
	g31 = 0;
	int32_t v15 = a4; // 0x56f6c
	int32_t v16 = 1;
	int32_t v17;    // ctr
	int32_t v18;    // r11
	int32_t v19;    // 0x56f7c
	int32_t result; // 0x57030
	int32_t v20;    // 0x57064
	int32_t v21;    // 0x57094
	int32_t v22;    // 0x570a0
	int32_t v23;    // 0x570b0
	int32_t v24;    // 0x570b8
	int32_t v25;    // 0x570c4
	int32_t v26;    // 0x57100
	int32_t v27;    // 0x57104
	int32_t v28;    // 0x57044
	int32_t v29;    // 0x57064
	int32_t v30;    // 0x5706c
	int32_t v31;    // 0x57074
	int32_t *v32;   // 0x57078
	int32_t v33;    // 0x57090
	int32_t v34;    // 0x57108
	int32_t v35;    // 0x56ef4
	int32_t v36;    // 0x57040
	int32_t v37;    // 0x5706c
	int32_t v38;    // 0x57090
	int32_t v39;    // 0x570b8
	int32_t v40;    // 0x570dc
	if (a4 > 0) {
		int32_t v41 = a4; // 0x56f6c57
		int32_t v42 = 1;  // 0x56f5c55
		int32_t v43 = 1;  // 0x56f54
		while (true) {
			// 0x56f54
			if (v43 != 0) {
				int32_t v44 = v42; // 0x56f5c54
				int32_t v45 = v43; // 0x56f5438
				if (v10 >= 40) {
					// 0x56ee0
					g36 = 0;
					v44 = 0;
					v45 = 0;
					// branch -> 0x56ee4
				}
				int32_t v46 = v14 < 0 ? 0 : v14;
				int32_t v47 = v46; // r26
				v35 = v46 + v13;
				g32 = 0;
				int32_t v48; // 0x56f40
				int32_t v49; // 0x56f44
				int32_t v50; // 0x56f48
				int32_t v51; // 0x56f4c
				if (a3 > 0) {
					int32_t v52 = a3; // 0x56f3049
					int32_t v53 = 0;  // 0x56f2c47
					while (true) {
						// 0x56f38
						if (v45 != 0) {
							int32_t v54 = v52; // 0x56f30
							int32_t v55 = v53; // 0x56f2c
							int32_t v56 = v46; // 0x56f28
							int32_t v57 = 0;
							if (v46 < 10) {
								int32_t v58 = llvm_ctlz_i32(-(int32_t) * (char *)(v35 + 0x482c), true); // 0x56f1c
								v54 = a3;
								v55 = g32;
								v56 = v47;
								v57 = __asm_rlwinm(v58, 27, 24, 31);
								// branch -> 0x56f24
							}
							// 0x56f24
							g36 = v57;
							int32_t v59 = v35 + 1; // 0x56f24
							int32_t v60 = v56 + 1; // 0x56f28
							v47 = v60;
							int32_t v61 = v55 + 1; // 0x56f2c
							g32 = v61;
							if (v61 >= v54) {
								v44 = v57;
								v45 = v57;
								// break -> 0x56f40
								break;
							}
							v45 = v57;
							v44 = v57;
							v52 = v54;
							v53 = v61;
							v35 = v59;
							v46 = v60;
							// continue -> 0x56f38
							continue;
						} else {
							v45 = 0;
						}
					}
					// 0x56f40
					v48 = g35 + 10;
					g35 = v48;
					v49 = v9 + 10;
					v9 = v49;
					v50 = g31 + 1;
					g31 = v50;
					v51 = a4;
					if (v50 >= v51) {
						v15 = v51;
						v16 = v44;
						// break -> 0x56f5c
						break;
					}
					v41 = v51;
					v42 = v44;
					v13 = v48;
					v10 = v49;
					v43 = v45;
					// continue -> 0x56f54
					continue;
				}
				// 0x56f40
				v48 = g35 + 10;
				g35 = v48;
				v49 = v9 + 10;
				v9 = v49;
				v50 = g31 + 1;
				g31 = v50;
				v51 = a4;
				if (v50 >= v51) {
					v15 = v51;
					v16 = v44;
					// break -> 0x56f5c
					break;
				}
				v41 = v51;
				v42 = v44;
				v13 = v48;
				v10 = v49;
				v43 = v45;
				// continue -> 0x56f54
				continue;
			} else {
				v16 = v42;
			}
			// 0x56f5c
			result = v16;
			if (v16 == 0) {
				// 0x56f64
				if (a3 <= 1) {
					// 0x56f6c
					if (v41 < 2) {
						// 0x56f7c
						v19 = v12;
						if (*(int32_t *)(v19 + 0x485c) == -1) {
							// 0x56f88
							g36 = 1;
							result = 1;
							// branch -> 0x57030
						} else {
							// 0x56f90
							if (*(int32_t *)(v19 + 0x49cc) == -1) {
								// 0x56fa0
								g36 = 1;
								result = 1;
								// branch -> 0x57030
							} else {
								// 0x56fa8
								if (*(int32_t *)(v19 + 0x4b3c) == -1) {
									// 0x56fb8
									g36 = 1;
									result = 1;
									// branch -> 0x57030
								} else {
									// 0x56fc0
									if (*(int32_t *)(v19 + 0x4cac) == -1) {
										// 0x56fd0
										g36 = 1;
										result = 1;
										// branch -> 0x57030
									} else {
										// 0x56fd8
										if (*(int32_t *)(v19 + 0x4e1c) == -1) {
											// 0x56fe8
											g36 = 1;
											result = 1;
											// branch -> 0x57030
										} else {
											// 0x56ff0
											if (*(int32_t *)(v19 + 0x4f8c) == -1) {
												// 0x57000
												g36 = 1;
												result = 1;
												// branch -> 0x57030
											} else {
												// 0x57008
												if (*(int32_t *)(v19 + 0x50fc) == -1) {
													// 0x57018
													g36 = 1;
													result = 1;
													// branch -> 0x57030
												} else {
													// 0x57020
													if (*(int32_t *)(v19 + 0x526c) == -1) {
														// 0x5702c
														g36 = 1;
														result = 1;
														// branch -> 0x57030
													} else {
														result = 0;
													}
												}
												// 0x57030
												if (result == 0) {
													// 0x57114
													g10 = v1;
													return 0;
												}
												// 0x57038
												if (a5 == 0) {
													// 0x57114
													g10 = v1;
													return result;
												}
												// 0x57040
												v36 = g33 + v6;
												v28 = v36 + 0x4828;
												v17 = 46;
												v30 = 368 * *(int32_t *)v28 + v36 + 3744;
												v20 = v36 + 0x53cc;
												// branch -> 0x57064
												while (true) {
													// 0x57064
													v29 = v20 + 8;
													v37 = v30 + 8;
													*(int32_t *)v37 = *(int32_t *)v29;
													*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
													v31 = v17 - 1;
													v17 = v31;
													if (v31 == 0) {
														// 0x57078
														v32 = (int32_t *)v28;
														*v32 = *v32 + 1;
														if (v8 > -1) {
															// 0x57078
															v33 = v8;
															// branch -> 0x57090
														} else {
															// 0x5708c
															v33 = 0;
															// branch -> 0x57090
														}
														// 0x57090
														v38 = v12 + v33;
														v9 = v38;
														v21 = a4;
														v18 = 0;
														if (v21 <= 0) {
															// 0x57110
															function_5ca38();
															// branch -> 0x57114
															// 0x57114
															g10 = v1;
															return g36;
														}
														int32_t v62 = v21; // 0x5710866
														int32_t v63 = 0;   // 0x5710464
														v24 = v38;
														while (true) {
															// 0x570a0
															v22 = v14;
															v23 = a3;
															v17 = v23;
															v39 = (v22 < 0 ? 0 : v22) + v24;
															v8 = v39;
															v35 = 0;
															v34 = v62;
															v27 = v63;
															v26 = v24;
															if (v23 >= 1) {
																v40 = v39;
																v25 = 0;
															lab_0x570c4_15:
																while (true) {
																	// 0x570c4
																	if (v25 == 0) {
																		// 0x570cc
																		if (v18 == v21 - 1) {
																			int32_t v64 = 0x1000000 * *(int32_t *)(v12 + 0x4828) / 0x1000000; // 0x570d8
																			*(char *)(v40 + 0x482c) = (char)v64;
																			// branch -> 0x570f4
																		lab_0x570f4:;
																			int32_t v65 = v8 + 1; // 0x570f4
																			v8 = v65;
																			int32_t v66 = v35 + 1; // 0x570f8
																			v35 = v66;
																			int32_t v67 = v17 - 1; // 0x570fc
																			v17 = v67;
																			if (v67 == 0) {
																				// break -> 0x57100
																				break;
																			}
																			v40 = v65;
																			v25 = v66;
																			// continue -> 0x570c4
																			continue;
																		}
																	}
																	int32_t v68 = -0x1000000 * *(int32_t *)(v12 + 0x4828) / 0x1000000; // 0x570ec
																	*(char *)(v40 + 0x482c) = (char)v68;
																	// branch -> 0x570f4
																	goto lab_0x570f4;
																}
																// 0x57100
																v34 = a4;
																v27 = v18;
																v26 = v9;
																// branch -> 0x57100
															}
														lab_0x57100_15:;
															int32_t v69 = v26 + 10; // 0x57100
															v9 = v69;
															int32_t v70 = v27 + 1; // 0x57104
															v18 = v70;
															if (v70 >= v34) {
																// break -> 0x57110
																break;
															}
															v62 = v34;
															v63 = v70;
															v24 = v69;
															// continue -> 0x570a0
														}
														// 0x57110
														function_5ca38();
														// branch -> 0x57114
														// 0x57114
														g10 = v1;
														return g36;
													}
												lab_0x57064_15:
													// 0x57064
													v30 = v37;
													v20 = v29;
													// branch -> 0x57064
												}
											}
											// 0x57030
											if (result == 0) {
												// 0x57114
												g10 = v1;
												return 0;
											}
											// 0x57038
											if (a5 == 0) {
												// 0x57114
												g10 = v1;
												return result;
											}
											// 0x57040
											v36 = g33 + v6;
											v28 = v36 + 0x4828;
											v30 = 368 * *(int32_t *)v28 + v36 + 3744;
											v20 = v36 + 0x53cc;
											// branch -> 0x57064
											while (true) {
												// 0x57064
												v29 = v20 + 8;
												v37 = v30 + 8;
												*(int32_t *)v37 = *(int32_t *)v29;
												*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
												v31 = 45;
												v17 = v31;
												if (v31 != 0) {
													goto lab_0x57064_15;
												}
												// 0x57078
												v32 = (int32_t *)v28;
												*v32 = *v32 + 1;
												if (v8 > -1) {
													// 0x57078
													v33 = v8;
													// branch -> 0x57090
												} else {
													// 0x5708c
													v33 = 0;
													// branch -> 0x57090
												}
												// 0x57090
												v38 = v12 + v33;
												v9 = v38;
												v21 = a4;
												v18 = 0;
												if (v21 > 0) {
													v24 = v38;
													while (true) {
														// 0x570a0
														v22 = v14;
														v23 = a3;
														v17 = v23;
														v39 = (v22 < 0 ? 0 : v22) + v24;
														v8 = v39;
														v35 = 0;
														if (v23 < 1) {
															v34 = v21;
															v27 = 0;
															v26 = v24;
															goto lab_0x57100_15;
														}
														v40 = v39;
														v25 = 0;
														goto lab_0x570c4_15;
													}
												}
												// 0x57110
												function_5ca38();
												// branch -> 0x57114
												// 0x57114
												g10 = v1;
												return g36;
											}
										}
										// 0x57030
										if (result == 0) {
											// 0x57114
											g10 = v1;
											return 0;
										}
										// 0x57038
										if (a5 == 0) {
											// 0x57114
											g10 = v1;
											return result;
										}
										// 0x57040
										v36 = g33 + v6;
										v28 = v36 + 0x4828;
										v30 = 368 * *(int32_t *)v28 + v36 + 3744;
										v20 = v36 + 0x53cc;
										// branch -> 0x57064
										while (true) {
											// 0x57064
											v29 = v20 + 8;
											v37 = v30 + 8;
											*(int32_t *)v37 = *(int32_t *)v29;
											*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
											v31 = 45;
											v17 = v31;
											if (v31 != 0) {
												goto lab_0x57064_15;
											}
											// 0x57078
											v32 = (int32_t *)v28;
											*v32 = *v32 + 1;
											if (v8 > -1) {
												// 0x57078
												v33 = v8;
												// branch -> 0x57090
											} else {
												// 0x5708c
												v33 = 0;
												// branch -> 0x57090
											}
											// 0x57090
											v38 = v12 + v33;
											v9 = v38;
											v21 = a4;
											v18 = 0;
											if (v21 > 0) {
												v24 = v38;
												while (true) {
													// 0x570a0
													v22 = v14;
													v23 = a3;
													v17 = v23;
													v39 = (v22 < 0 ? 0 : v22) + v24;
													v8 = v39;
													v35 = 0;
													if (v23 < 1) {
														v34 = v21;
														v27 = 0;
														v26 = v24;
														goto lab_0x57100_15;
													}
													v40 = v39;
													v25 = 0;
													goto lab_0x570c4_15;
												}
											}
											// 0x57110
											function_5ca38();
											// branch -> 0x57114
											// 0x57114
											g10 = v1;
											return g36;
										}
									}
									// 0x57030
									if (result == 0) {
										// 0x57114
										g10 = v1;
										return 0;
									}
									// 0x57038
									if (a5 == 0) {
										// 0x57114
										g10 = v1;
										return result;
									}
									// 0x57040
									v36 = g33 + v6;
									v28 = v36 + 0x4828;
									v30 = 368 * *(int32_t *)v28 + v36 + 3744;
									v20 = v36 + 0x53cc;
									// branch -> 0x57064
									while (true) {
										// 0x57064
										v29 = v20 + 8;
										v37 = v30 + 8;
										*(int32_t *)v37 = *(int32_t *)v29;
										*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
										v31 = 45;
										v17 = v31;
										if (v31 != 0) {
											goto lab_0x57064_15;
										}
										// 0x57078
										v32 = (int32_t *)v28;
										*v32 = *v32 + 1;
										if (v8 > -1) {
											// 0x57078
											v33 = v8;
											// branch -> 0x57090
										} else {
											// 0x5708c
											v33 = 0;
											// branch -> 0x57090
										}
										// 0x57090
										v38 = v12 + v33;
										v9 = v38;
										v21 = a4;
										v18 = 0;
										if (v21 > 0) {
											v24 = v38;
											while (true) {
												// 0x570a0
												v22 = v14;
												v23 = a3;
												v17 = v23;
												v39 = (v22 < 0 ? 0 : v22) + v24;
												v8 = v39;
												v35 = 0;
												if (v23 < 1) {
													v34 = v21;
													v27 = 0;
													v26 = v24;
													goto lab_0x57100_15;
												}
												v40 = v39;
												v25 = 0;
												goto lab_0x570c4_15;
											}
										}
										// 0x57110
										function_5ca38();
										// branch -> 0x57114
										// 0x57114
										g10 = v1;
										return g36;
									}
								}
								// 0x57030
								if (result == 0) {
									// 0x57114
									g10 = v1;
									return 0;
								}
								// 0x57038
								if (a5 == 0) {
									// 0x57114
									g10 = v1;
									return result;
								}
								// 0x57040
								v36 = g33 + v6;
								v28 = v36 + 0x4828;
								v30 = 368 * *(int32_t *)v28 + v36 + 3744;
								v20 = v36 + 0x53cc;
								// branch -> 0x57064
								while (true) {
									// 0x57064
									v29 = v20 + 8;
									v37 = v30 + 8;
									*(int32_t *)v37 = *(int32_t *)v29;
									*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
									v31 = 45;
									v17 = v31;
									if (v31 != 0) {
										goto lab_0x57064_15;
									}
									// 0x57078
									v32 = (int32_t *)v28;
									*v32 = *v32 + 1;
									if (v8 > -1) {
										// 0x57078
										v33 = v8;
										// branch -> 0x57090
									} else {
										// 0x5708c
										v33 = 0;
										// branch -> 0x57090
									}
									// 0x57090
									v38 = v12 + v33;
									v9 = v38;
									v21 = a4;
									v18 = 0;
									if (v21 > 0) {
										v24 = v38;
										while (true) {
											// 0x570a0
											v22 = v14;
											v23 = a3;
											v17 = v23;
											v39 = (v22 < 0 ? 0 : v22) + v24;
											v8 = v39;
											v35 = 0;
											if (v23 < 1) {
												v34 = v21;
												v27 = 0;
												v26 = v24;
												goto lab_0x57100_15;
											}
											v40 = v39;
											v25 = 0;
											goto lab_0x570c4_15;
										}
									}
									// 0x57110
									function_5ca38();
									// branch -> 0x57114
									// 0x57114
									g10 = v1;
									return g36;
								}
							}
							// 0x57030
							if (result == 0) {
								// 0x57114
								g10 = v1;
								return 0;
							}
							// 0x57038
							if (a5 == 0) {
								// 0x57114
								g10 = v1;
								return result;
							}
							// 0x57040
							v36 = g33 + v6;
							v28 = v36 + 0x4828;
							v30 = 368 * *(int32_t *)v28 + v36 + 3744;
							v20 = v36 + 0x53cc;
							// branch -> 0x57064
							while (true) {
								// 0x57064
								v29 = v20 + 8;
								v37 = v30 + 8;
								*(int32_t *)v37 = *(int32_t *)v29;
								*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
								v31 = 45;
								v17 = v31;
								if (v31 != 0) {
									goto lab_0x57064_15;
								}
								// 0x57078
								v32 = (int32_t *)v28;
								*v32 = *v32 + 1;
								if (v8 > -1) {
									// 0x57078
									v33 = v8;
									// branch -> 0x57090
								} else {
									// 0x5708c
									v33 = 0;
									// branch -> 0x57090
								}
								// 0x57090
								v38 = v12 + v33;
								v9 = v38;
								v21 = a4;
								v18 = 0;
								if (v21 > 0) {
									v24 = v38;
									while (true) {
										// 0x570a0
										v22 = v14;
										v23 = a3;
										v17 = v23;
										v39 = (v22 < 0 ? 0 : v22) + v24;
										v8 = v39;
										v35 = 0;
										if (v23 < 1) {
											v34 = v21;
											v27 = 0;
											v26 = v24;
											goto lab_0x57100_15;
										}
										v40 = v39;
										v25 = 0;
										goto lab_0x570c4_15;
									}
								}
								// 0x57110
								function_5ca38();
								// branch -> 0x57114
								// 0x57114
								g10 = v1;
								return g36;
							}
						}
						// 0x57030
						if (result == 0) {
							// 0x57114
							g10 = v1;
							return 0;
						}
						// 0x57038
						if (a5 == 0) {
							// 0x57114
							g10 = v1;
							return result;
						}
						// 0x57040
						v36 = g33 + v6;
						v28 = v36 + 0x4828;
						v30 = 368 * *(int32_t *)v28 + v36 + 3744;
						v20 = v36 + 0x53cc;
						// branch -> 0x57064
						while (true) {
							// 0x57064
							v29 = v20 + 8;
							v37 = v30 + 8;
							*(int32_t *)v37 = *(int32_t *)v29;
							*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
							v31 = 45;
							v17 = v31;
							if (v31 != 0) {
								goto lab_0x57064_15;
							}
							// 0x57078
							v32 = (int32_t *)v28;
							*v32 = *v32 + 1;
							if (v8 > -1) {
								// 0x57078
								v33 = v8;
								// branch -> 0x57090
							} else {
								// 0x5708c
								v33 = 0;
								// branch -> 0x57090
							}
							// 0x57090
							v38 = v12 + v33;
							v9 = v38;
							v21 = a4;
							v18 = 0;
							if (v21 > 0) {
								v24 = v38;
								while (true) {
									// 0x570a0
									v22 = v14;
									v23 = a3;
									v17 = v23;
									v39 = (v22 < 0 ? 0 : v22) + v24;
									v8 = v39;
									v35 = 0;
									if (v23 < 1) {
										v34 = v21;
										v27 = 0;
										v26 = v24;
										goto lab_0x57100_15;
									}
									v40 = v39;
									v25 = 0;
									goto lab_0x570c4_15;
								}
							}
							// 0x57110
							function_5ca38();
							// branch -> 0x57114
							// 0x57114
							g10 = v1;
							return g36;
						}
					}
				}
				// 0x56f74
				g36 = 0;
				result = 0;
				// branch -> 0x57030
			}
			// 0x57030
			if (result == 0) {
				// 0x57114
				g10 = v1;
				return 0;
			}
			// 0x57038
			if (a5 == 0) {
				// 0x57114
				g10 = v1;
				return result;
			}
			// 0x57040
			v36 = g33 + v6;
			v28 = v36 + 0x4828;
			v30 = 368 * *(int32_t *)v28 + v36 + 3744;
			v20 = v36 + 0x53cc;
			// branch -> 0x57064
			while (true) {
				// 0x57064
				v29 = v20 + 8;
				v37 = v30 + 8;
				*(int32_t *)v37 = *(int32_t *)v29;
				*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
				v31 = 45;
				v17 = v31;
				if (v31 != 0) {
					goto lab_0x57064_15;
				}
				// 0x57078
				v32 = (int32_t *)v28;
				*v32 = *v32 + 1;
				if (v8 > -1) {
					// 0x57078
					v33 = v8;
					// branch -> 0x57090
				} else {
					// 0x5708c
					v33 = 0;
					// branch -> 0x57090
				}
				// 0x57090
				v38 = v12 + v33;
				v9 = v38;
				v21 = a4;
				v18 = 0;
				if (v21 > 0) {
					v24 = v38;
					while (true) {
						// 0x570a0
						v22 = v14;
						v23 = a3;
						v17 = v23;
						v39 = (v22 < 0 ? 0 : v22) + v24;
						v8 = v39;
						v35 = 0;
						if (v23 < 1) {
							v34 = v21;
							v27 = 0;
							v26 = v24;
							goto lab_0x57100_15;
						}
						v40 = v39;
						v25 = 0;
						goto lab_0x570c4_15;
					}
				}
				// 0x57110
				function_5ca38();
				// branch -> 0x57114
				// 0x57114
				g10 = v1;
				return g36;
			}
		}
	}
	// 0x56f5c
	result = v16;
	if (v16 == 0) {
		// 0x56f64
		if (a3 <= 1) {
			// 0x56f6c
			if (v15 < 2) {
				// 0x56f7c
				v19 = v12;
				if (*(int32_t *)(v19 + 0x485c) == -1) {
					// 0x56f88
					g36 = 1;
					// branch -> 0x57030
				} else {
					// 0x56f90
					if (*(int32_t *)(v19 + 0x49cc) == -1) {
						// 0x56fa0
						g36 = 1;
						// branch -> 0x57030
					} else {
						// 0x56fa8
						if (*(int32_t *)(v19 + 0x4b3c) == -1) {
							// 0x56fb8
							g36 = 1;
							// branch -> 0x57030
						} else {
							// 0x56fc0
							if (*(int32_t *)(v19 + 0x4cac) == -1) {
								// 0x56fd0
								g36 = 1;
								// branch -> 0x57030
							} else {
								// 0x56fd8
								if (*(int32_t *)(v19 + 0x4e1c) == -1) {
									// 0x56fe8
									g36 = 1;
									// branch -> 0x57030
								} else {
									// 0x56ff0
									if (*(int32_t *)(v19 + 0x4f8c) == -1) {
										// 0x57000
										g36 = 1;
										// branch -> 0x57030
									} else {
										// 0x57008
										if (*(int32_t *)(v19 + 0x50fc) == -1) {
											// 0x57018
											g36 = 1;
											result = 1;
											// branch -> 0x57030
										} else {
											// 0x57020
											if (*(int32_t *)(v19 + 0x526c) == -1) {
												// 0x5702c
												g36 = 1;
												result = 1;
												// branch -> 0x57030
											} else {
												result = 0;
											}
										}
										// 0x57030
										if (result == 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x57038
										if (a5 == 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x57040
										v36 = g33 + v6;
										v28 = v36 + 0x4828;
										v17 = 46;
										v30 = 368 * *(int32_t *)v28 + v36 + 3744;
										v20 = v36 + 0x53cc;
										// branch -> 0x57064
										while (true) {
											// 0x57064
											v29 = v20 + 8;
											v37 = v30 + 8;
											*(int32_t *)v37 = *(int32_t *)v29;
											*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
											v31 = v17 - 1;
											v17 = v31;
											if (v31 != 0) {
												goto lab_0x57064_15;
											}
											// 0x57078
											v32 = (int32_t *)v28;
											*v32 = *v32 + 1;
											if (v8 > -1) {
												// 0x57078
												v33 = v8;
												// branch -> 0x57090
											} else {
												// 0x5708c
												v8 = 0;
												v33 = 0;
												// branch -> 0x57090
											}
											// 0x57090
											v38 = v12 + v33;
											v9 = v38;
											v21 = a4;
											v18 = 0;
											if (v21 > 0) {
												v24 = v38;
												while (true) {
													// 0x570a0
													v22 = v14;
													v23 = a3;
													v17 = v23;
													v39 = (v22 < 0 ? 0 : v22) + v24;
													v8 = v39;
													v35 = 0;
													if (v23 < 1) {
														v34 = v21;
														v27 = 0;
														v26 = v24;
														goto lab_0x57100_15;
													}
													v40 = v39;
													v25 = 0;
													goto lab_0x570c4_15;
												}
											}
											// 0x57110
											function_5ca38();
											// branch -> 0x57114
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x57038
									if (a5 == 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0x57040
									v36 = g33 + v6;
									v28 = v36 + 0x4828;
									v17 = 46;
									v30 = 368 * *(int32_t *)v28 + v36 + 3744;
									v20 = v36 + 0x53cc;
									// branch -> 0x57064
									while (true) {
										// 0x57064
										v29 = v20 + 8;
										v37 = v30 + 8;
										*(int32_t *)v37 = *(int32_t *)v29;
										*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
										v31 = v17 - 1;
										v17 = v31;
										if (v31 != 0) {
											goto lab_0x57064_15;
										}
										// 0x57078
										v32 = (int32_t *)v28;
										*v32 = *v32 + 1;
										if (v8 > -1) {
											// 0x57078
											v33 = v8;
											// branch -> 0x57090
										} else {
											// 0x5708c
											v8 = 0;
											v33 = 0;
											// branch -> 0x57090
										}
										// 0x57090
										v38 = v12 + v33;
										v9 = v38;
										v21 = a4;
										v18 = 0;
										if (v21 > 0) {
											v24 = v38;
											while (true) {
												// 0x570a0
												v22 = v14;
												v23 = a3;
												v17 = v23;
												v39 = (v22 < 0 ? 0 : v22) + v24;
												v8 = v39;
												v35 = 0;
												if (v23 < 1) {
													v34 = v21;
													v27 = 0;
													v26 = v24;
													goto lab_0x57100_15;
												}
												v40 = v39;
												v25 = 0;
												goto lab_0x570c4_15;
											}
										}
										// 0x57110
										function_5ca38();
										// branch -> 0x57114
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x57038
								if (a5 == 0) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x57040
								v36 = g33 + v6;
								v28 = v36 + 0x4828;
								v17 = 46;
								v30 = 368 * *(int32_t *)v28 + v36 + 3744;
								v20 = v36 + 0x53cc;
								// branch -> 0x57064
								while (true) {
									// 0x57064
									v29 = v20 + 8;
									v37 = v30 + 8;
									*(int32_t *)v37 = *(int32_t *)v29;
									*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
									v31 = v17 - 1;
									v17 = v31;
									if (v31 != 0) {
										goto lab_0x57064_15;
									}
									// 0x57078
									v32 = (int32_t *)v28;
									*v32 = *v32 + 1;
									if (v8 > -1) {
										// 0x57078
										v33 = v8;
										// branch -> 0x57090
									} else {
										// 0x5708c
										v8 = 0;
										v33 = 0;
										// branch -> 0x57090
									}
									// 0x57090
									v38 = v12 + v33;
									v9 = v38;
									v21 = a4;
									v18 = 0;
									if (v21 > 0) {
										v24 = v38;
										while (true) {
											// 0x570a0
											v22 = v14;
											v23 = a3;
											v17 = v23;
											v39 = (v22 < 0 ? 0 : v22) + v24;
											v8 = v39;
											v35 = 0;
											if (v23 < 1) {
												v34 = v21;
												v27 = 0;
												v26 = v24;
												goto lab_0x57100_15;
											}
											v40 = v39;
											v25 = 0;
											goto lab_0x570c4_15;
										}
									}
									// 0x57110
									function_5ca38();
									// branch -> 0x57114
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x57038
							if (a5 == 0) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x57040
							v36 = g33 + v6;
							v28 = v36 + 0x4828;
							v17 = 46;
							v30 = 368 * *(int32_t *)v28 + v36 + 3744;
							v20 = v36 + 0x53cc;
							// branch -> 0x57064
							while (true) {
								// 0x57064
								v29 = v20 + 8;
								v37 = v30 + 8;
								*(int32_t *)v37 = *(int32_t *)v29;
								*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
								v31 = v17 - 1;
								v17 = v31;
								if (v31 != 0) {
									goto lab_0x57064_15;
								}
								// 0x57078
								v32 = (int32_t *)v28;
								*v32 = *v32 + 1;
								if (v8 > -1) {
									// 0x57078
									v33 = v8;
									// branch -> 0x57090
								} else {
									// 0x5708c
									v8 = 0;
									v33 = 0;
									// branch -> 0x57090
								}
								// 0x57090
								v38 = v12 + v33;
								v9 = v38;
								v21 = a4;
								v18 = 0;
								if (v21 > 0) {
									v24 = v38;
									while (true) {
										// 0x570a0
										v22 = v14;
										v23 = a3;
										v17 = v23;
										v39 = (v22 < 0 ? 0 : v22) + v24;
										v8 = v39;
										v35 = 0;
										if (v23 < 1) {
											v34 = v21;
											v27 = 0;
											v26 = v24;
											goto lab_0x57100_15;
										}
										v40 = v39;
										v25 = 0;
										goto lab_0x570c4_15;
									}
								}
								// 0x57110
								function_5ca38();
								// branch -> 0x57114
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x57038
						if (a5 == 0) {
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0x57040
						v36 = g33 + v6;
						v28 = v36 + 0x4828;
						v17 = 46;
						v30 = 368 * *(int32_t *)v28 + v36 + 3744;
						v20 = v36 + 0x53cc;
						// branch -> 0x57064
						while (true) {
							// 0x57064
							v29 = v20 + 8;
							v37 = v30 + 8;
							*(int32_t *)v37 = *(int32_t *)v29;
							*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
							v31 = v17 - 1;
							v17 = v31;
							if (v31 != 0) {
								goto lab_0x57064_15;
							}
							// 0x57078
							v32 = (int32_t *)v28;
							*v32 = *v32 + 1;
							if (v8 > -1) {
								// 0x57078
								v33 = v8;
								// branch -> 0x57090
							} else {
								// 0x5708c
								v8 = 0;
								v33 = 0;
								// branch -> 0x57090
							}
							// 0x57090
							v38 = v12 + v33;
							v9 = v38;
							v21 = a4;
							v18 = 0;
							if (v21 > 0) {
								v24 = v38;
								while (true) {
									// 0x570a0
									v22 = v14;
									v23 = a3;
									v17 = v23;
									v39 = (v22 < 0 ? 0 : v22) + v24;
									v8 = v39;
									v35 = 0;
									if (v23 < 1) {
										v34 = v21;
										v27 = 0;
										v26 = v24;
										goto lab_0x57100_15;
									}
									v40 = v39;
									v25 = 0;
									goto lab_0x570c4_15;
								}
							}
							// 0x57110
							function_5ca38();
							// branch -> 0x57114
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x57038
					if (a5 == 0) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x57040
					v36 = g33 + v6;
					v28 = v36 + 0x4828;
					v17 = 46;
					v30 = 368 * *(int32_t *)v28 + v36 + 3744;
					v20 = v36 + 0x53cc;
					// branch -> 0x57064
					while (true) {
						// 0x57064
						v29 = v20 + 8;
						v37 = v30 + 8;
						*(int32_t *)v37 = *(int32_t *)v29;
						*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
						v31 = v17 - 1;
						v17 = v31;
						if (v31 != 0) {
							goto lab_0x57064_15;
						}
						// 0x57078
						v32 = (int32_t *)v28;
						*v32 = *v32 + 1;
						if (v8 > -1) {
							// 0x57078
							v33 = v8;
							// branch -> 0x57090
						} else {
							// 0x5708c
							v8 = 0;
							v33 = 0;
							// branch -> 0x57090
						}
						// 0x57090
						v38 = v12 + v33;
						v9 = v38;
						v21 = a4;
						v18 = 0;
						if (v21 > 0) {
							v24 = v38;
							while (true) {
								// 0x570a0
								v22 = v14;
								v23 = a3;
								v17 = v23;
								v39 = (v22 < 0 ? 0 : v22) + v24;
								v8 = v39;
								v35 = 0;
								if (v23 < 1) {
									v34 = v21;
									v27 = 0;
									v26 = v24;
									goto lab_0x57100_15;
								}
								v40 = v39;
								v25 = 0;
								goto lab_0x570c4_15;
							}
						}
						// 0x57110
						function_5ca38();
						// branch -> 0x57114
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0x57038
				if (a5 == 0) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x57040
				v36 = g33 + v6;
				v28 = v36 + 0x4828;
				v17 = 46;
				v30 = 368 * *(int32_t *)v28 + v36 + 3744;
				v20 = v36 + 0x53cc;
				// branch -> 0x57064
				while (true) {
					// 0x57064
					v29 = v20 + 8;
					v37 = v30 + 8;
					*(int32_t *)v37 = *(int32_t *)v29;
					*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
					v31 = v17 - 1;
					v17 = v31;
					if (v31 != 0) {
						goto lab_0x57064_15;
					}
					// 0x57078
					v32 = (int32_t *)v28;
					*v32 = *v32 + 1;
					if (v8 > -1) {
						// 0x57078
						v33 = v8;
						// branch -> 0x57090
					} else {
						// 0x5708c
						v8 = 0;
						v33 = 0;
						// branch -> 0x57090
					}
					// 0x57090
					v38 = v12 + v33;
					v9 = v38;
					v21 = a4;
					v18 = 0;
					if (v21 > 0) {
						v24 = v38;
						while (true) {
							// 0x570a0
							v22 = v14;
							v23 = a3;
							v17 = v23;
							v39 = (v22 < 0 ? 0 : v22) + v24;
							v8 = v39;
							v35 = 0;
							if (v23 < 1) {
								v34 = v21;
								v27 = 0;
								v26 = v24;
								goto lab_0x57100_15;
							}
							v40 = v39;
							v25 = 0;
							goto lab_0x570c4_15;
						}
					}
					// 0x57110
					function_5ca38();
					// branch -> 0x57114
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x56f74
		g36 = 0;
		result = 0;
		// branch -> 0x57030
	}
	// 0x57030
	if (result == 0) {
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x57038
	if (a5 == 0) {
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x57040
	v36 = g33 + v6;
	v28 = v36 + 0x4828;
	v17 = 46;
	v30 = 368 * *(int32_t *)v28 + v36 + 3744;
	v20 = v36 + 0x53cc;
	// branch -> 0x57064
	while (true) {
		// 0x57064
		v29 = v20 + 8;
		v37 = v30 + 8;
		*(int32_t *)v37 = *(int32_t *)v29;
		*(int32_t *)(v30 + 12) = *(int32_t *)(v20 + 12);
		v31 = v17 - 1;
		v17 = v31;
		if (v31 != 0) {
			goto lab_0x57064_15;
		}
		// 0x57078
		v32 = (int32_t *)v28;
		*v32 = *v32 + 1;
		if (v8 > -1) {
			// 0x57078
			v33 = v8;
			// branch -> 0x57090
		} else {
			// 0x5708c
			v8 = 0;
			v33 = 0;
			// branch -> 0x57090
		}
		// 0x57090
		v38 = v12 + v33;
		v9 = v38;
		v21 = a4;
		v18 = 0;
		if (v21 > 0) {
			v24 = v38;
			while (true) {
				// 0x570a0
				v22 = v14;
				v23 = a3;
				v17 = v23;
				v39 = (v22 < 0 ? 0 : v22) + v24;
				v8 = v39;
				v35 = 0;
				if (v23 < 1) {
					v34 = v21;
					v27 = 0;
					v26 = v24;
					goto lab_0x57100_15;
				}
				v40 = v39;
				v25 = 0;
				goto lab_0x570c4_15;
			}
		}
		// 0x57110
		function_5ca38();
		// branch -> 0x57114
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
}

// Address range: 0x5712c - 0x573bc
int32_t function_5712c(int32_t a1)
{
	int32_t v1 = g10;                                      // 0x57130
	int32_t v2 = 0;                                        // r31
	int32_t v3 = a1;                                       // r28
	int32_t v4 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0x57158
	int32_t v5 = v4;                                       // r30
	int32_t v6 = v4;                                       // r29
	int32_t v7 = v4;                                       // 0x571f0
	int32_t v8 = 0;                                        // 0x571e8
	int32_t v9;                                            // 0x57214
	int32_t v10;                                           // 0x5726c43
	int32_t result3;                                       // 0x57284
	int32_t v11;                                           // 0x5728449
	int32_t v12;                                           // 0x57394
	int32_t result;                                        // 0x573b8
	int32_t result2;                                       // 0x573b859
	int32_t v13;                                           // 0x57228
	int32_t v14;                                           // 0x572c0
	if (*(int32_t *)(v4 + 0x4828) <= 0) {
		// 0x571e8
		result3 = v8;
		if (v8 == 0) {
			// 0x571f0
			v6 = v7;
			v2 = 0;
			if (*(int32_t *)(v7 + 0x4828) > 0) {
				v11 = 0;
				v10 = 0;
				v9 = v7;
				v13 = v7;
				while (true) {
					goto lab_0x571fc;
					result3 = v11;
					// 0x57284
					if (result3 == 0) {
						// 0x5728c
						v6 = 39;
						result2 = 0;
						v14 = 39;
						// branch -> 0x57394
						while (true) {
							goto lab_0x5729c_3;
							// 0x5739c
							g10 = v1;
							return result2;
						}
					}
					// 0x5739c
					g10 = v1;
					return result3;
				}
			} else {
				result3 = 0;
			}
		}
		// 0x57284
		result = result3;
		if (result3 == 0) {
			// 0x5728c
			v6 = 39;
			result2 = 0;
			v14 = 39;
			v12 = 0;
			// branch -> 0x57394
		lab_0x57394:
			while (true) {
				// 0x57394
				if (v12 == 0) {
					goto lab_0x5729c_3;
				}
				// 0x5739c
				g10 = v1;
				return result2;
			}
		}
	lab_0x5739c:
		// 0x5739c
		g10 = v1;
		return result;
	}
	int32_t v57 = 0; // 0x571e836
	int32_t v58 = 0; // 0x571d031
	int32_t v59 = 0; // 0x571e0
	int32_t v22;     // r0
	while (true) {
		// 0x571e0
		if (v59 == 0) {
			int32_t v60 = v57; // 0x571e835
			int32_t v61 = v4;  // 0x571d4
			int32_t v62;       // 0x571cc
			int32_t v63;       // 0x571d0
			if (*(int32_t *)(v4 + 3760) == 11) {
				int32_t *v64 = (int32_t *)(v4 + 3948);          // 0x57178
				int32_t v65 = *v64 + *(int32_t *)(v4 + 0x5498); // 0x5717c
				v22 = v65;
				if (v65 <= 0x1388) {
					// 0x57188
					*v64 = v65;
					if (v65 < 2500) {
						// 0x571a0
						if (v22 > 1000) {
							// 0x571b4
							*(int32_t *)(v6 + 3944) = 5;
							// branch -> 0x571bc
						} else {
							// 0x571a8
							*(int32_t *)(v6 + 3944) = 4;
							// branch -> 0x571bc
						}
					lab_0x571bc:
						// 0x571bc
						*(int32_t *)(v5 + 456) = function_5b990(v3);
						v60 = 1;
						v61 = v5;
						// branch -> 0x571cc
					lab_0x571cc:
						// 0x571cc
						v62 = v6 + 368;
						v6 = v62;
						v63 = v2 + 1;
						v2 = v63;
						if (v63 >= *(int32_t *)(v61 + 0x4828)) {
							v7 = v61;
							v8 = v60;
							// break -> 0x571e8
							break;
						}
						v57 = v60;
						v58 = v63;
						v4 = v62;
						v59 = 1;
						// continue -> 0x571e0
						continue;
					} else {
						// 0x57194
						*(int32_t *)(v6 + 3944) = 6;
						// branch -> 0x571bc
						goto lab_0x571bc;
					}
				} else {
					v60 = v57;
					v61 = v4;
				}
			}
			// 0x571cc
			v62 = v4 + 368;
			v6 = v62;
			v63 = v58 + 1;
			v2 = v63;
			if (v63 >= *(int32_t *)(v61 + 0x4828)) {
				v7 = v61;
				v8 = v60;
				// break -> 0x571e8
				break;
			}
			v57 = v60;
			v58 = v63;
			v4 = v62;
			v59 = 0;
			// continue -> 0x571e0
			continue;
		} else {
			v7 = v4;
			v8 = v57;
		}
	}
	// 0x571e8
	result3 = v8;
	if (v8 == 0) {
		// 0x571f0
		v6 = v7;
		v2 = 0;
		if (*(int32_t *)(v7 + 0x4828) > 0) {
			v11 = 0;
			v10 = 0;
			v9 = v7;
			v13 = v7;
			int32_t v23 = 0; // 0x5727c
			while (true) {
				// 0x5727c
				if (v23 == 0) {
				lab_0x571fc:;
					int32_t v15 = v11; // 0x5728448
					int32_t v16 = v9;  // 0x57270
					int32_t v17;       // 0x57268
					int32_t v18;       // 0x5726c
					if (*(int32_t *)(v13 + 3760) == 11) {
						int32_t *v19 = (int32_t *)(v13 + 3948); // 0x57208
						uint32_t v20 = *v19;                    // 0x57208
						if (v20 <= 0x1387) {
							int32_t v21 = *(int32_t *)(v9 + 0x5498) + v20; // 0x57218
							v22 = v21;
							if (v21 <= 0x1388) {
								// 0x57224
								*v19 = v21;
								if (v21 < 2500) {
									// 0x5723c
									if (v22 > 1000) {
										// 0x57250
										*(int32_t *)(v6 + 3944) = 5;
										// branch -> 0x57258
									} else {
										// 0x57244
										*(int32_t *)(v6 + 3944) = 4;
										// branch -> 0x57258
									}
								lab_0x57258:
									// 0x57258
									*(int32_t *)(v5 + 456) = function_5b990(v3);
									v15 = 1;
									v16 = v5;
									// branch -> 0x57268
								lab_0x57268:
									// 0x57268
									v17 = v6 + 368;
									v6 = v17;
									v18 = v2 + 1;
									v2 = v18;
									if (v18 >= *(int32_t *)(v16 + 0x4828)) {
										result3 = v15;
										// break -> 0x57284
										break;
									}
									v11 = v15;
									v10 = v18;
									v9 = v16;
									v13 = v17;
									v23 = 1;
									// continue -> 0x5727c
									continue;
								} else {
									// 0x57230
									*(int32_t *)(v6 + 3944) = 6;
									// branch -> 0x57258
									goto lab_0x57258;
								}
								int32_t v24 = v3;                  // 0x57258
								int32_t v25 = function_5b990(v24); // 0x5725c
								int32_t v26 = v5;                  // 0x57260
								*(int32_t *)(v26 + 456) = v25;
								int32_t v27 = v5;
								v15 = 1;
								v16 = v27;
								// branch -> 0x57268
								goto lab_0x57268;
							} else {
								v15 = v11;
								v16 = v9;
							}
						} else {
							v15 = v11;
							v16 = v9;
						}
					}
					// 0x57268
					v17 = v13 + 368;
					v6 = v17;
					v18 = v10 + 1;
					v2 = v18;
					if (v18 >= *(int32_t *)(v16 + 0x4828)) {
						result3 = v15;
						// break -> 0x57284
						break;
					}
					v11 = v15;
					v10 = v18;
					v9 = v16;
					v13 = v17;
					v23 = 0;
					// continue -> 0x5727c
					continue;
				} else {
					result3 = v11;
				}
			}
			// 0x57284
			if (result3 != 0) {
				// 0x5739c
				g10 = v1;
				return result3;
			}
			// 0x5728c
			v6 = 39;
			result2 = 0;
			v14 = 39;
			// branch -> 0x57394
			while (true) {
			lab_0x5729c_3:;
				uint64_t v28 = (int64_t)0x66666667 * (int64_t)v14;              // 0x5729c
				int32_t v29 = (int32_t)(v28 / 0x100000000) >> 31;               // 0x572a0
				int32_t v30 = v29 & -0x40000000 | (int32_t)(v28 / 0x400000000); // 0x572a0
				int32_t v31 = v30 + (int32_t)(v29 < 0);                         // 0x572b0
				int32_t v32 = 10 * v31;                                         // 0x572bc
				int32_t v33 = v32;                                              // r7
				int32_t v34 = -10 * v31 + v14;                                  // 0x572c0
				int32_t v35 = v34;                                              // r6
				int32_t v36 = result2;                                          // 0x573b858
				int32_t v37 = v14;                                              // 0x57388
				int32_t v38;                                                    // 0x57388
				if (*(char *)(v34 + v32 + 0x482c + v5) == 0) {
					int32_t v39 = *(int32_t *)(v5 + 0x4828); // 0x572d8
					int32_t v40 = v39;                       // r8
					int32_t v41 = 46;                        // ctr
					int32_t v42 = v5 + 3744 + 368 * v39;     // 0x57300
					int32_t v43 = v5 + 0x53cc;               // 0x572f8
					// branch -> 0x572f8
					while (true) {
						int32_t v44 = v43 + 8; // 0x572f8
						int32_t v45 = v44;     // r4
						int32_t v46 = v42 + 8; // 0x57300
						*(int32_t *)v46 = *(int32_t *)v44;
						*(int32_t *)(v42 + 12) = *(int32_t *)(v43 + 12);
						int32_t v47 = v41 - 1; // 0x57308
						v41 = v47;
						if (v47 == 0) {
							int32_t *v48 = (int32_t *)(v5 + 0x4828); // 0x5730c
							*v48 = *v48 + 1;
							int32_t v49 = 0x1000000 * *(int32_t *)(v5 + 0x4828) / 0x1000000; // 0x57324
							int32_t v50 = v35 + 0x482c + v33;                                // 0x57328
							*(char *)(v50 + v5) = (char)v49;
							int32_t v51 = *(int32_t *)(v5 + 0x5498); // 0x5732c
							if (v51 < 2500) {
								int32_t v52 = 368 * v40 + 3944; // 0x5736c
								if (v51 > 1000) {
									// 0x57368
									*(int32_t *)(v52 + v5) = 5;
									// branch -> 0x57378
								} else {
									// 0x57354
									*(int32_t *)(v52 + v5) = 4;
									// branch -> 0x57378
								}
							lab_0x57378:
								// 0x57378
								*(int32_t *)(v5 + 456) = function_5b990(v3);
								v36 = 1;
								// branch -> 0x57388
							lab_0x57388:
								// 0x57388
								v38 = v6 - 1;
								v6 = v38;
								if (v38 < 0) {
									result = v36;
									// break (via goto) -> 0x5739c
									goto lab_0x5739c;
								}
								result2 = v36;
								v14 = v38;
								v12 = 1;
								// continue (via goto) -> 0x57394
								goto lab_0x57394;
							} else {
								// 0x57338
								*(int32_t *)(368 * v40 + 3944 + v5) = 6;
								// branch -> 0x57378
								goto lab_0x57378;
							}
							int32_t v53 = v3;                  // 0x57378
							int32_t v54 = function_5b990(v53); // 0x5737c
							int32_t v55 = v5;                  // 0x57380
							*(int32_t *)(v55 + 456) = v54;
							int32_t v56 = v6;
							v36 = 1;
							v37 = v56;
							// branch -> 0x57388
							goto lab_0x57388;
						} else {
							// 0x572f8
							v42 = v46;
							v43 = v45;
							// branch -> 0x572f8
							continue;
						}
					}
					// 0x5739c
					v22 = v1;
					g10 = v1;
					return result;
				}
				// 0x57388
				v38 = v37 - 1;
				v6 = v38;
				if (v38 < 0) {
					result = v36;
					// break -> 0x5739c
					break;
				}
				result2 = v36;
				v14 = v38;
				// continue -> 0x57394
				continue;
			}
			// 0x5739c
			g10 = v1;
			return result;
		}
		result3 = 0;
	}
	// 0x57284
	if (result3 == 0) {
		// 0x5728c
		v6 = 39;
		result2 = 0;
		v14 = 39;
		// branch -> 0x57394
		while (true) {
			goto lab_0x5729c_3;
			// 0x5739c
			g10 = v1;
			return result2;
		}
	}
	// 0x5739c
	g10 = v1;
	return result3;
}

// Address range: 0x573bc - 0x5753c
int32_t function_573bc(int32_t a1)
{
	int32_t v1 = g10;                        // 0x573c0
	int32_t v2 = g35;                        // 0x573c4
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0x573c8
	g35 = v3;
	int32_t v4 = g33;         // 0x573cc
	int32_t v5 = 0x55ec * a1; // 0x573d0
	g33 = v5;
	int32_t v6 = v5 + v3; // 0x573d8
	g36 = v6;
	int32_t v7 = *(int32_t *)(v6 + 2656); // 0x574cc
	int32_t v8;                           // ctr
	if (*(char *)(v6 + 0x5491) == 2) {
		// 0x574cc
		if (v7 == -1) {
			// 0x574d8
			if (*(int32_t *)(v6 + 3024) == -1) {
				// 0x574ec
				function_8bc38(1, 4);
				int32_t v9 = g36; // 0x574fc
				v8 = 46;
				int32_t v10 = v9 + 2640;   // 0x57510
				int32_t v11 = v9 + 0x53cc; // 0x57508
				// branch -> 0x57508
				while (true) {
					int32_t v12 = v11 + 8; // 0x57508
					int32_t v13 = v10 + 8; // 0x57510
					*(int32_t *)v13 = *(int32_t *)v12;
					*(int32_t *)(v10 + 12) = *(int32_t *)(v11 + 12);
					int32_t v14 = v8 - 1; // 0x57518
					v8 = v14;
					if (v14 == 0) {
						// 0x5751c
						// branch -> 0x57520
						// 0x57520
						g10 = v1;
						g35 = v2;
						g33 = v4;
						return 1;
					}
					// 0x57508
					v10 = v13;
					v11 = v12;
					// branch -> 0x57508
				}
			}
		}
		// 0x574e4
		// branch -> 0x57520
		// 0x57520
		g10 = v1;
		g35 = v2;
		g33 = v4;
		return 0;
	}
	// 0x573ec
	if (v7 != -1) {
		// 0x573f8
		if (*(char *)(v6 + 2838) == 1) {
			// 0x57404
			// branch -> 0x57520
			// 0x57520
			g10 = v1;
			g35 = v2;
			g33 = v4;
			return 0;
		}
	}
	int32_t v15 = *(int32_t *)(v6 + 3024); // 0x57410
	if (v15 != -1) {
		// 0x5741c
		if (*(char *)(v6 + 3206) == 1) {
			// 0x57428
			// branch -> 0x57520
			// 0x57520
			g10 = v1;
			g35 = v2;
			g33 = v4;
			return 0;
		}
	}
	// 0x57430
	if (v7 == -1) {
		// 0x57438
		function_8bc38(1, 4);
		int32_t v16 = g33 + g35; // 0x57448
		v8 = 46;
		int32_t v17 = v16 + 2640;   // 0x57460
		int32_t v18 = v16 + 0x53cc; // 0x57458
		// branch -> 0x57458
		while (true) {
			int32_t v19 = v18 + 8; // 0x57458
			int32_t v20 = v17 + 8; // 0x57460
			*(int32_t *)v20 = *(int32_t *)v19;
			*(int32_t *)(v17 + 12) = *(int32_t *)(v18 + 12);
			int32_t v21 = v8 - 1; // 0x57468
			v8 = v21;
			if (v21 == 0) {
				// 0x574c4
				// branch -> 0x57520
				// 0x57520
				g10 = v1;
				g35 = v2;
				g33 = v4;
				return 1;
			}
			// 0x57458
			v17 = v20;
			v18 = v19;
			// branch -> 0x57458
		}
	} else {
		// 0x57470
		if (v15 == -1) {
			// 0x57478
			g36 = v6;
			if (*(char *)(v6 + 2837) != 2) {
				// 0x57488
				function_8bc38(1, 5);
				int32_t v22 = g36; // 0x57498
				v8 = 46;
				int32_t v23 = v22 + 3008;   // 0x574ac
				int32_t v24 = v22 + 0x53cc; // 0x574a4
				// branch -> 0x574a4
				while (true) {
					int32_t v25 = v24 + 8; // 0x574a4
					int32_t v26 = v23 + 8; // 0x574ac
					*(int32_t *)v26 = *(int32_t *)v25;
					*(int32_t *)(v23 + 12) = *(int32_t *)(v24 + 12);
					int32_t v27 = v8 - 1; // 0x574b4
					v8 = v27;
					if (v27 == 0) {
						// 0x574c4
						// branch -> 0x57520
						// 0x57520
						g10 = v1;
						g35 = v2;
						g33 = v4;
						return 1;
					}
					// 0x574a4
					v23 = v26;
					v24 = v25;
					// branch -> 0x574a4
				}
			}
		}
		// 0x574bc
		// branch -> 0x57520
	}
	// 0x57520
	g10 = v1;
	g35 = v2;
	g33 = v4;
	return 0;
}

// Address range: 0x5753c - 0x575bc
int32_t function_5753c(int32_t a1, int32_t a2)
{
	int32_t v1 = 46;     // ctr
	int32_t v2;          // bp-376
	int32_t v3 = &v2;    // 0x5754c
	int32_t v4 = a1 - 8; // 0x57550
	// branch -> 0x57550
	while (true) {
		int32_t v5 = v4 + 8; // 0x57550
		int32_t v6 = v3 + 8; // 0x57558
		*(int32_t *)v6 = *(int32_t *)v5;
		*(int32_t *)(v3 + 12) = *(int32_t *)(v4 + 12);
		int32_t v7 = v1 - 1; // 0x57560
		v1 = v7;
		if (v7 == 0) {
			// 0x57564
			v1 = 46;
			int32_t v8 = a1 - 8; // 0x5757c
			int32_t v9 = a2 - 8; // 0x57574
			// branch -> 0x57574
			while (true) {
				int32_t v10 = v9 + 8; // 0x57574
				int32_t v11 = v8 + 8; // 0x5757c
				*(int32_t *)v11 = *(int32_t *)v10;
				*(int32_t *)(v8 + 12) = *(int32_t *)(v9 + 12);
				int32_t v12 = v1 - 1; // 0x57584
				v1 = v12;
				if (v12 == 0) {
					int32_t v13 = a2 - 8;  // 0x575a0
					int32_t v14 = v3 + 8;  // 0x57598
					int32_t v15 = v13 + 8; // 0x575a0
					*(int32_t *)v15 = *(int32_t *)v14;
					*(int32_t *)(v13 + 12) = *(int32_t *)(v3 + 12);
					int32_t v16 = 45; // 0x575a8
					// branch -> 0x57598
					while (v16 != 0) {
						// 0x57598
						// 0x57598
						v13 = v15;
						v3 = v14;
						v14 = v3 + 8;
						v15 = v13 + 8;
						*(int32_t *)v15 = *(int32_t *)v14;
						*(int32_t *)(v13 + 12) = *(int32_t *)(v3 + 12);
						v16--;
						// branch -> 0x57598
					}
					// 0x575ac
					int32_t v17;
					return v17 + 12;
				} else {
					// 0x57574
					v8 = v11;
					v9 = v10;
					// branch -> 0x57574
					continue;
				}
			}
		} else {
			// 0x57550
			v3 = v6;
			v4 = v5;
			// branch -> 0x57550
			continue;
		}
	}
}

// Address range: 0x575bc - 0x58838
int32_t CheckInvPaste(int32_t a1, int32_t a2, int32_t a3)
{
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x575c8
	g32 = v1;
	int32_t v2 = 0x55ec * a1; // 0x575cc
	int32_t v3 = v2;          // r25
	g25 = a3;
	g35 = *(int32_t *)(g23 - 0x77ac);
	int32_t v4 = v1 + v2 + 0x5494; // 0x575f4
	g28 = v4;
	g34 = *(int32_t *)v4 + 12;
	function_32430();
	int32_t v5 = g23;                                     // 0x57600
	uint32_t v6 = *(int32_t *)*(int32_t *)(v5 - 0x7638);  // 0x57610
	uint32_t v7 = *(int32_t *)*(int32_t *)(v5 - 0x7640);  // 0x57614
	uint32_t v8 = *(int32_t *)*(int32_t *)(g23 - 0x7648); // 0x5761c
	int32_t v9 = *(int32_t *)*(int32_t *)(g23 - 0x764c);  // 0x57620
	int32_t v10 = a2 + (v6 / 2 | v6 & -0x80000000);
	int32_t v11 = g25 + (v7 / 2 | v7 & -0x80000000);
	int32_t v12 = v9 % 2;
	int32_t v13 = 0;
	int32_t v14 = 0;
	// branch -> 0x5763c
lab_0x5763c:
	while (true) {
		int32_t v15 = v14;
		int32_t v16 = v10; // 0x5768c222
		int32_t v17 = v11; // 0x57698221
		int32_t v18 = v12; // 0x57690220
		int32_t v19 = v13; // 0x576c446219
		// branch -> 0x5763c
		while (true) {
			int32_t v20 = g23 + 0x35ec + 8 * v15; // 0x57640
			int32_t v21 = *(int32_t *)v20;        // 0x57644
			int32_t v22 = v19;                    // 0x576c447
			int32_t v23 = v15;                    // 0x576b0
			int32_t v24 = 0;                      // 0x576bc25
			if (v16 >= v21) {
				// 0x57650
				if (v16 < v21 + 28) {
					int32_t v25 = *(int32_t *)(v20 + 4); // 0x5765c
					if (v17 < v25 == v17 >= v25 - 29) {
						// 0x57674
						v22 = 1;
						v23 = v15 - 1;
						v24 = 1;
						// branch -> 0x5767c
					} else {
						v22 = v19;
						v23 = v15;
						v24 = 0;
					}
				} else {
					v22 = v19;
					v23 = v15;
					v24 = 0;
				}
			}
			int32_t v26 = v18; // 0x5769040
			int32_t v27 = v17; // 0x576ac
			int32_t v28 = v16; // 0x5764829
			if (v23 == 24) {
				int32_t v29 = v16; // 0x5764830
				if (v8 % 2 == 0) {
					// 0x5768c
					v29 = v16 - 14;
					// branch -> 0x57690
				}
				// 0x57690
				if (v18 == 0) {
					// 0x57698
					v26 = 0;
					v27 = v17 - 14;
					v28 = v29;
					// branch -> 0x5769c
				} else {
					v26 = v18;
					v27 = v17;
					v28 = v29;
				}
			}
			// 0x5769c
			int32_t v30;
			int32_t v31;
			int32_t v32;  // 0x5775050
			int32_t v33;  // 0x5775051
			int32_t v34;  // 0x5775052
			int32_t v35;  // 0x5775053
			int32_t v36;  // 0x5775054
			int32_t v37;  // 0x5775c
			uint32_t v38; // 0x577f8
			int32_t v39;
			int32_t v40;  // 0x5794470
			int32_t v41;  // 0x5797c
			int32_t v42;  // 0x57980
			int32_t v43;  // 0x57984
			int32_t v44;  // 0x57990
			int32_t v45;  // 0x57998
			int32_t v46;  // 0x5799884
			int32_t v47;  // 0x5799885
			int32_t v48;  // 0x5799886
			int32_t v49;  // 0x5799887
			int32_t v50;  // 0x5799888
			int32_t v51;  // 0x5799889
			int32_t v52;  // 0x579a8
			int32_t v53;  // 0x57a10
			uint32_t v54; // 0x57a34
			int32_t v55;  // 0x587e4
			int32_t v56;  // 0x577f8
			uint32_t v57; // 0x57888
			int32_t v58;  // 0x578a8
			uint32_t v59; // 0x578bc
			int32_t v60;  // 0x578c4
			int32_t v61;  // 0x57740
			int32_t v62;  // 0x5774c
			int32_t v63;
			int32_t v64;       // 0x5784c
			int32_t v65;       // 0x578a0
			int32_t v66;       // 0x578cc
			int32_t v67;       // 0x578e8
			uint32_t v68;      // 0x587f0
			uint32_t v69;      // 0x587f8
			int32_t v70;       // 0x5880c
			unsigned char v71; // 0x57744
			unsigned char v72; // 0x579c0
			int32_t v73;       // 0x57a10
			int32_t v74;       // 0x587f4
			unsigned char v75; // 0x57848
			uint64_t v76;      // 0x57890
			unsigned char v77; // 0x57a1c
			int32_t v78;       // 0x57a2c
			int32_t v79;       // 0x57848
			int32_t v80;       // 0x57898
			int32_t v81;       // 0x587fc
			if (v23 == 64) {
				// 0x576a4
				if (v12 == 0) {
					int32_t v82 = v27 + 14; // 0x576ac
					g24 = 65;
					if (v24 != 0) {
						v38 = 65;
						// break (via goto) -> 0x576c4
						goto lab_0x576c4;
					}
					v10 = v28;
					v11 = v82;
					v12 = 0;
					v13 = v22;
					v14 = 65;
					// continue (via goto) -> 0x5763c
					goto lab_0x5763c;
				} else {
					// 0x576b0
					g24 = 65;
					v31 = 65;
					// branch -> 0x576bc
				lab_0x576bc:
					// 0x576bc
					if (v24 != 0) {
						// break -> 0x576c4
						break;
					}
					v15 = v31;
					v16 = v28;
					v17 = v27;
					v18 = v12;
					v19 = v22;
					// continue -> 0x5763c
					continue;
				}
				// 0x576c4
				int32_t result; // 0x58834
				if (v22 == 0) {
					int32_t v83; // 0x5883494
					result = v83;
					// 0x58824
					return result;
				}
				// 0x576cc
				g22 = 7;
				v36 = 7;
				if (v38 >= 0) {
					// 0x576d8
					if (v38 <= 3) {
						// 0x576e0
						g22 = 4;
						v36 = 4;
						// branch -> 0x576e4
					} else {
						v36 = 7;
					}
				}
				// 0x576e4
				v35 = v36;
				if (v38 >= 4) {
					// 0x576ec
					if (v38 <= 5) {
						// 0x576f4
						g22 = 5;
						v35 = 5;
						// branch -> 0x576f8
					} else {
						v35 = v36;
					}
				}
				// 0x576f8
				v34 = v35;
				if (v38 == 6) {
					// 0x57700
					g22 = 6;
					v34 = 6;
					// branch -> 0x57704
				}
				// 0x57704
				v33 = v34;
				if (v38 >= 7) {
					// 0x5770c
					if (v38 <= 18) {
						// 0x57714
						g22 = 1;
						v33 = 1;
						// branch -> 0x57718
					} else {
						v33 = v34;
					}
				}
				// 0x57718
				v32 = v33;
				if (v38 >= 19) {
					// 0x57720
					if (v38 <= 24) {
						// 0x57728
						g22 = 3;
						v32 = 3;
						// branch -> 0x5772c
					} else {
						v32 = v33;
					}
				}
				// 0x5772c
				v37 = v32;
				if (v38 >= 65) {
					// 0x57734
					if (v38 <= 72) {
						// 0x5773c
						g22 = 8;
						v37 = 8;
						// branch -> 0x57740
					} else {
						v37 = v32;
					}
				}
				int32_t v84 = g32; // 0x57740
				int32_t v85 = v3;  // 0x57740
				v61 = v85 + v84;
				v71 = *(char *)(v61 + 0x5491);
				int32_t v86 = v71; // 0x57744
				v62 = v71;
				v30 = 0;
				v49 = 0;
				if (v37 == v62) {
					// 0x57758
					v30 = 1;
					v49 = 1;
					// branch -> 0x5775c
				}
				// 0x5775c
				g25 = v30;
				v63 = v62;
				v48 = v49;
				v52 = v37;
				if (v37 == 1) {
					// 0x57764
					if (v71 == 2) {
						// 0x57770
						g22 = 2;
						g25 = 1;
						v63 = 2;
						v48 = 1;
						v52 = 2;
						// branch -> 0x57778
					} else {
						v63 = v62;
						v48 = v49;
						v52 = 1;
					}
				}
				int32_t v87 = v86; // 0x5883498
				v47 = v48;
				if (v63 == 7) {
					// 0x57784
					if (v52 == 8) {
						// 0x5778c
						if (v8 == 1) {
							// 0x57794
							if (v9 == 1) {
								int32_t v88 = v5 + 0x3858;                // 0x577a0
								int32_t v89 = *(int32_t *)(v61 + 0x553c); // 0x577a4
								g25 = 1;
								int32_t v90 = 76 * v89 + v88;         // 0x577b0
								int32_t v91 = *(int32_t *)(v90 + 64); // 0x577b4
								v51 = 1;
								if (v91 == 0) {
									// 0x577c0
									g25 = 0;
									v51 = 0;
									// branch -> 0x577c4
								}
								int32_t v92 = *(int32_t *)(v61 + 0x5538); // 0x577c8
								v50 = v51;
								if (v92 == 0) {
									// 0x577d4
									g25 = 0;
									v50 = 0;
									// branch -> 0x577d8
								}
								int32_t v93 = *(int32_t *)(v61 + 0x53dc); // 0x577dc
								if (v93 == 11) {
									// 0x577e8
									g25 = 0;
									v87 = v61;
									v47 = 0;
									// branch -> 0x577ec
								} else {
									v87 = v61;
									v47 = v50;
								}
							} else {
								v87 = v86;
								v47 = v48;
							}
						} else {
							v87 = v86;
							v47 = v48;
						}
					} else {
						v87 = v86;
						v47 = v48;
					}
				}
				int32_t v94 = v87; // 0x5883497
				v45 = v47;
				int32_t v95;  // 0x57a04
				int32_t v96;  // 0x57a0c
				int32_t v97;  // 0x57a14
				int32_t v98;  // 0x57a18
				int32_t v99;  // 0x57a40
				int32_t v100; // 0x587c4
				int32_t v101; // 0x587d0
				int32_t v102; // 0x587d4
				int32_t v103; // 0x587dc
				int32_t v104; // 0x5881c
				int32_t v105;
				int32_t result5; // 0x58820
				int32_t result6; // 0x5883496
				int32_t result3; // 0x579d4
				int32_t v106;    // 0x579ec
				int32_t v107;    // 0x57a00
				int32_t v108;    // 0x57a30
				int32_t v109;    // 0x57a40
				int32_t v110;    // 0x57a0c
				int32_t v111;    // 0x57a14
				int32_t result4; // 0x587cc
				int32_t v112;    // 0x587d0
				int32_t v113;    // 0x58800
				int32_t v114;    // 0x58804
				int32_t v115;    // 0x58810
				int32_t v116;    // 0x58814
				int32_t v117;    // 0x579b4
				int32_t v118;    // 0x57a24
				int32_t v119;    // 0x587e4
				int32_t v120;    // 0x587e8
				int32_t v121;    // 0x587ec
				int32_t v122;    // 0x579c0
				int32_t result2; // 0x57a48
				if (v52 == 7) {
					// 0x577f4
					v56 = v38 - 25;
					int32_t v123 = *(int32_t *)(v61 + 0x53dc); // 0x577fc
					g33 = 0;
					g25 = 1;
					if (v123 == 11) {
						int32_t v124 = v61 + 0x482c; // 0x57814
						v75 = *(char *)(v124 + v56);
						v79 = v75;
						v64 = v75;
						if (v75 != 0) {
							// 0x57854
							if (0x1000000 * v79 < 0) {
								// 0x5787c
								g33 = -v64;
								v94 = v61;
								v45 = 1;
								// branch -> 0x57998
							} else {
								int32_t v125 = 368 * v64 + v61;           // 0x57864
								int32_t v126 = *(int32_t *)(v125 + 3392); // 0x57868
								if (v126 != 11) {
									// 0x57874
									g33 = v64;
									v94 = v125;
									v45 = 1;
									// branch -> 0x57998
								} else {
									v94 = v125;
									v45 = 1;
								}
							}
							// 0x57998
							result6 = v94;
							if (v45 != 0) {
								// 0x579a0
								if (v52 != 7) {
									// 0x579a8
									if (v52 != 8) {
										// 0x579b0
										v117 = *(int32_t *)(v61 + 0x5538);
										if (v117 == 0) {
											// 0x579c0
											v72 = *(char *)(v61 + 348);
											v122 = v72;
											g25 = 0;
											if (v72 == 0) {
												// 0x579d0
												g34 = 726;
												result3 = PlaySFX(726);
												result6 = result3;
												// branch -> 0x57a04
												// 0x57a04
												v95 = g25;
												if (v95 == 0) {
													result = result6;
													// 0x58824
													return result;
												}
												// 0x57a0c
												v96 = g35;
												v110 = *(int32_t *)v96;
												v53 = g23;
												v73 = *(int32_t *)(v53 - 0x71d0);
												v97 = g28;
												v111 = *(int32_t *)v97;
												v98 = g36;
												if (v98 == v110) {
													// 0x57a24
													v77 = *(char *)(v111 + v73);
													v118 = *(int32_t *)(v53 - 0x71d4);
													v78 = *(int32_t *)(v118 + 4 * (int32_t)v77);
													g34 = v78;
													v108 = PlaySFX(v78);
													// branch -> 0x57a34
												}
												// 0x57a34
												v54 = g22;
												g25 = 1;
												if (v54 <= 8) {
													// 0x57a40
													v99 = g23;
													v109 = v99 + 0x3834;
													result2 = *(int32_t *)(v109 + 4 * v54);
													return result2;
												}
												// 0x587c4
												v100 = g36;
												result4 = function_5cfd4(v100, 1);
												v101 = g35;
												v112 = *(int32_t *)v101;
												v102 = g36;
												result = result4;
												if (v102 != v112) {
													// 0x58824
													return result;
												}
												// 0x587dc
												v103 = g25;
												v104 = v103;
												if (v103 != 1) {
													// 0x5881c
													g34 = v104;
													result5 = SetCursor_();
													result = result5;
													// branch -> 0x58824
													// 0x58824
													return result;
												}
												// 0x587e4
												v55 = g23;
												v119 = *(int32_t *)(v55 - 0x7650);
												v120 = *(int32_t *)(v55 - 0x7654);
												v121 = *(int32_t *)(v55 - 0x76a8);
												v68 = *(int32_t *)v119;
												v74 = *(int32_t *)(v55 - 0x76ac);
												v69 = *(int32_t *)v120;
												v81 = v68 / 2 | v68 & -0x80000000;
												v113 = *(int32_t *)v121;
												v114 = *(int32_t *)v74;
												v70 = v113 + v81;
												g34 = v70;
												v115 = v114 + (v69 / 2 | v69 & -0x80000000);
												v116 = function_ebc50(v70, v115);
												v105 = g25;
												v104 = v105;
												// branch -> 0x5881c
												// 0x5881c
												g34 = v104;
												result5 = SetCursor_();
												result = result5;
												// branch -> 0x58824
												// 0x58824
												return result;
											}
											// 0x579dc
											if (v72 == 1) {
												// 0x579e8
												g34 = 623;
												v106 = PlaySFX(623);
												result6 = v106;
												// branch -> 0x57a04
											} else {
												// 0x579f4
												if (v72 == 2) {
													// 0x579fc
													g34 = 520;
													v107 = PlaySFX(520);
													result6 = v107;
													// branch -> 0x57a04
												} else {
													result6 = v122;
												}
											}
											// 0x57a04
											v95 = g25;
											if (v95 == 0) {
												result = result6;
												// 0x58824
												return result;
											}
											// 0x57a0c
											v96 = g35;
											v110 = *(int32_t *)v96;
											v53 = g23;
											v73 = *(int32_t *)(v53 - 0x71d0);
											v97 = g28;
											v111 = *(int32_t *)v97;
											v98 = g36;
											if (v98 == v110) {
												// 0x57a24
												v77 = *(char *)(v111 + v73);
												v118 = *(int32_t *)(v53 - 0x71d4);
												v78 = *(int32_t *)(v118 + 4 * (int32_t)v77);
												g34 = v78;
												v108 = PlaySFX(v78);
												// branch -> 0x57a34
											}
											// 0x57a34
											v54 = g22;
											g25 = 1;
											if (v54 <= 8) {
												// 0x57a40
												v99 = g23;
												v109 = v99 + 0x3834;
												result2 = *(int32_t *)(v109 + 4 * v54);
												return result2;
											}
											// 0x587c4
											v100 = g36;
											result4 = function_5cfd4(v100, 1);
											v101 = g35;
											v112 = *(int32_t *)v101;
											v102 = g36;
											result = result4;
											if (v102 != v112) {
												// 0x58824
												return result;
											}
											// 0x587dc
											v103 = g25;
											v104 = v103;
											if (v103 != 1) {
												// 0x5881c
												g34 = v104;
												result5 = SetCursor_();
												result = result5;
												// branch -> 0x58824
												// 0x58824
												return result;
											}
											// 0x587e4
											v55 = g23;
											v119 = *(int32_t *)(v55 - 0x7650);
											v120 = *(int32_t *)(v55 - 0x7654);
											v121 = *(int32_t *)(v55 - 0x76a8);
											v68 = *(int32_t *)v119;
											v74 = *(int32_t *)(v55 - 0x76ac);
											v69 = *(int32_t *)v120;
											v81 = v68 / 2 | v68 & -0x80000000;
											v113 = *(int32_t *)v121;
											v114 = *(int32_t *)v74;
											v70 = v113 + v81;
											g34 = v70;
											v115 = v114 + (v69 / 2 | v69 & -0x80000000);
											v116 = function_ebc50(v70, v115);
											v105 = g25;
											v104 = v105;
											// branch -> 0x5881c
											// 0x5881c
											g34 = v104;
											result5 = SetCursor_();
											result = result5;
											// branch -> 0x58824
											// 0x58824
											return result;
										}
										result6 = v61;
									} else {
										result6 = v94;
									}
								} else {
									result6 = v94;
								}
							}
							// 0x57a04
							v95 = g25;
							if (v95 == 0) {
								result = result6;
								// 0x58824
								return result;
							}
							// 0x57a0c
							v96 = g35;
							v110 = *(int32_t *)v96;
							v53 = g23;
							v73 = *(int32_t *)(v53 - 0x71d0);
							v97 = g28;
							v111 = *(int32_t *)v97;
							v98 = g36;
							if (v98 == v110) {
								// 0x57a24
								v77 = *(char *)(v111 + v73);
								v118 = *(int32_t *)(v53 - 0x71d4);
								v78 = *(int32_t *)(v118 + 4 * (int32_t)v77);
								g34 = v78;
								v108 = PlaySFX(v78);
								// branch -> 0x57a34
							}
							// 0x57a34
							v54 = g22;
							g25 = 1;
							if (v54 <= 8) {
								// 0x57a40
								v99 = g23;
								v109 = v99 + 0x3834;
								result2 = *(int32_t *)(v109 + 4 * v54);
								return result2;
							}
							// 0x587c4
							v100 = g36;
							result4 = function_5cfd4(v100, 1);
							v101 = g35;
							v112 = *(int32_t *)v101;
							v102 = g36;
							result = result4;
							if (v102 != v112) {
								// 0x58824
								return result;
							}
							// 0x587dc
							v103 = g25;
							v104 = v103;
							if (v103 != 1) {
								// 0x5881c
								g34 = v104;
								result5 = SetCursor_();
								result = result5;
								// branch -> 0x58824
								// 0x58824
								return result;
							}
							// 0x587e4
							v55 = g23;
							v119 = *(int32_t *)(v55 - 0x7650);
							v120 = *(int32_t *)(v55 - 0x7654);
							v121 = *(int32_t *)(v55 - 0x76a8);
							v68 = *(int32_t *)v119;
							v74 = *(int32_t *)(v55 - 0x76ac);
							v69 = *(int32_t *)v120;
							v81 = v68 / 2 | v68 & -0x80000000;
							v113 = *(int32_t *)v121;
							v114 = *(int32_t *)v74;
							v70 = v113 + v81;
							g34 = v70;
							v115 = v114 + (v69 / 2 | v69 & -0x80000000);
							v116 = function_ebc50(v70, v115);
							v105 = g25;
							v104 = v105;
							// branch -> 0x5881c
							// 0x5881c
							g34 = v104;
							result5 = SetCursor_();
							result = result5;
							// branch -> 0x58824
							// 0x58824
							return result;
						}
						v94 = v61;
						v45 = 1;
					} else {
						// 0x57884
						v57 = v9 - 1;
						v76 = 0x66666667 * (int64_t)v56;
						int32_t v127 = v57 / 2 | v57 & -0x80000000; // 0x57894
						v80 = (int32_t)(v76 / 0x100000000) >> 31;
						v65 = (v80 & -0x40000000 | (int32_t)(v76 / 0x400000000)) + (int32_t)(v80 < 0);
						int32_t v128 = v65 - v127; // 0x578a4
						v58 = 10 * v128;
						v60 = v58;
						if (v58 <= 0xffffffff) {
							// 0x578b4
							v60 = 0;
							// branch -> 0x578b8
						}
						// 0x578b8
						v59 = v8 - 1;
						v66 = v61 + v60;
						int32_t v129 = 10 * v65; // 0x578e0
						v67 = v56 - v129 - (v59 / 2 | v59 & -0x80000000);
						if (v9 > 0) {
							// 0x57990
							v39 = v67 < 0 ? 0 : v67;
							v46 = 1;
							v43 = 0;
							v40 = 0;
							v41 = v66;
							v42 = v60;
							v44 = 1;
							// branch -> 0x57990
							while (true) {
								// 0x57990
								if (v44 != 0) {
								lab_0x578f4_7:;
									int32_t v130 = v46; // 0x5799883
									int32_t v131 = v44; // 0x5799058
									if (v42 >= 40) {
										// 0x578fc
										g25 = 0;
										v130 = 0;
										v131 = 0;
										// branch -> 0x57900
									}
									int32_t v132 = v41 + v39; // 0x57910
									int32_t v133 = v40;       // 0x5794471
									int32_t v134;             // 0x5797c
									int32_t v135;             // 0x57984
									if (v8 > 0) {
										int32_t v136 = 0;   // 0x57968
										int32_t v137 = v40; // 0x5794c
										int32_t v138 = v39; // 0x57964
										while (true) {
											// 0x57974
											if (v131 != 0) {
												// 0x5791c
												int32_t v139; // 0x5794473
												int32_t v140; // 0x5799059
												int32_t v141; // 0x5799881
												int32_t v142; // 0x57960
												int32_t v143; // 0x57964
												int32_t v144; // 0x57968
												if (v138 < 10) {
													unsigned char v145 = *(char *)(v132 + 0x482c); // 0x5792c
													int32_t v146 = v145;                           // 0x57930
													if (v145 != 0) {
														int32_t v147 = v146; // 0x5795c
														if (0x1000000 * (int32_t)v145 <= 0) {
															// 0x57940
															v147 = -v146;
															// branch -> 0x57944
														}
														// 0x57944
														if (v137 == 0) {
															// 0x5795c
															g33 = v147;
															v141 = v130;
															v139 = v147;
															v140 = v131;
															// branch -> 0x57960
														} else {
															// 0x5794c
															if (v137 != v147) {
																// 0x57954
																g25 = 0;
																v141 = 0;
																v139 = v137;
																v140 = 0;
																// branch -> 0x57960
															} else {
																v141 = v130;
																v139 = v137;
																v140 = v131;
															}
														}
													lab_0x57960:
														// 0x57960
														v142 = v132 + 1;
														v143 = v138 + 1;
														v144 = v136 + 1;
														if (v144 >= v8) {
															v130 = v141;
															v133 = v139;
															v131 = v140;
															// break -> 0x5797c
															break;
														}
														v130 = v141;
														v136 = v144;
														v137 = v139;
														v132 = v142;
														v138 = v143;
														v131 = v140;
														// continue -> 0x57974
														continue;
													} else {
														v141 = v130;
														v139 = v137;
														v140 = v131;
													}
												} else {
													// 0x57924
													g25 = 0;
													v141 = 0;
													v139 = v137;
													v140 = 0;
													// branch -> 0x57960
													goto lab_0x57960;
												}
												// 0x57960
												v142 = v132 + 1;
												v143 = v138 + 1;
												v144 = v136 + 1;
												if (v144 >= v8) {
													v130 = v141;
													v133 = v139;
													v131 = v140;
													// break -> 0x5797c
													break;
												}
												v130 = v141;
												v136 = v144;
												v137 = v139;
												v132 = v142;
												v138 = v143;
												v131 = v140;
												// continue -> 0x57974
												continue;
											} else {
												v133 = v137;
												v131 = 0;
											}
										}
										// 0x5797c
										v134 = v41 + 10;
										v135 = v43 + 1;
										if (v135 >= v9) {
											v94 = v134;
											v45 = v130;
											// break -> 0x57998
											break;
										}
										v46 = v130;
										v43 = v135;
										v40 = v133;
										v41 = v134;
										v42 += 10;
										v44 = v131;
										// continue -> 0x57990
										continue;
									}
									// 0x5797c
									v134 = v41 + 10;
									v135 = v43 + 1;
									if (v135 >= v9) {
										v94 = v134;
										v45 = v130;
										// break -> 0x57998
										break;
									}
									v46 = v130;
									v43 = v135;
									v40 = v133;
									v41 = v134;
									v42 += 10;
									v44 = v131;
									// continue -> 0x57990
									continue;
								} else {
									v94 = v41;
									v45 = v46;
								}
							}
							// 0x57998
							result6 = v94;
							if (v45 != 0) {
								// 0x579a0
								if (v52 != 7) {
									// 0x579a8
									if (v52 != 8) {
										// 0x579b0
										if (*(int32_t *)(v61 + 0x5538) == 0) {
											// 0x579c0
											v72 = *(char *)(v61 + 348);
											g25 = 0;
											if (v72 == 0) {
												// 0x579d0
												g34 = 726;
												result3 = PlaySFX(726);
												// branch -> 0x57a04
												// 0x57a04
												if (g25 == 0) {
													// 0x58824
													return result3;
												}
												// 0x57a0c
												v53 = g23;
												if (g36 == *(int32_t *)g35) {
													// 0x57a24
													v77 = *(char *)(*(int32_t *)g28 + *(int32_t *)(v53 - 0x71d0));
													v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
													g34 = v78;
													PlaySFX(v78);
													// branch -> 0x57a34
												}
												// 0x57a34
												v54 = g22;
												g25 = 1;
												if (v54 <= 8) {
													// 0x57a40
													return *(int32_t *)(g23 + 0x3834 + 4 * v54);
												}
												// 0x587c4
												result4 = function_5cfd4(g36, 1);
												if (g36 != *(int32_t *)g35) {
													// 0x58824
													return result4;
												}
												// 0x587dc
												v103 = g25;
												if (v103 != 1) {
													// 0x5881c
													g34 = v103;
													result5 = SetCursor_();
													// branch -> 0x58824
													// 0x58824
													return result5;
												}
												// 0x587e4
												v55 = g23;
												v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
												v74 = *(int32_t *)(v55 - 0x76ac);
												v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
												v81 = v68 / 2 | v68 & -0x80000000;
												v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
												g34 = v70;
												function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
												// branch -> 0x5881c
												// 0x5881c
												g34 = g25;
												result5 = SetCursor_();
												// branch -> 0x58824
												// 0x58824
												return result5;
											}
											// 0x579dc
											if (v72 == 1) {
												// 0x579e8
												g34 = 623;
												result6 = PlaySFX(623);
												// branch -> 0x57a04
											} else {
												// 0x579f4
												if (v72 == 2) {
													// 0x579fc
													g34 = 520;
													result6 = PlaySFX(520);
													// branch -> 0x57a04
												} else {
													result6 = v72;
												}
											}
											// 0x57a04
											if (g25 == 0) {
												// 0x58824
												return result6;
											}
											// 0x57a0c
											v53 = g23;
											if (g36 == *(int32_t *)g35) {
												// 0x57a24
												v77 = *(char *)(*(int32_t *)g28 + *(int32_t *)(v53 - 0x71d0));
												v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
												g34 = v78;
												PlaySFX(v78);
												// branch -> 0x57a34
											}
											// 0x57a34
											v54 = g22;
											g25 = 1;
											if (v54 <= 8) {
												// 0x57a40
												return *(int32_t *)(g23 + 0x3834 + 4 * v54);
											}
											// 0x587c4
											result4 = function_5cfd4(g36, 1);
											if (g36 != *(int32_t *)g35) {
												// 0x58824
												return result4;
											}
											// 0x587dc
											v103 = g25;
											if (v103 != 1) {
												// 0x5881c
												g34 = v103;
												result5 = SetCursor_();
												// branch -> 0x58824
												// 0x58824
												return result5;
											}
											// 0x587e4
											v55 = g23;
											v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
											v74 = *(int32_t *)(v55 - 0x76ac);
											v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
											v81 = v68 / 2 | v68 & -0x80000000;
											v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
											g34 = v70;
											function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
											// branch -> 0x5881c
											// 0x5881c
											g34 = g25;
											result5 = SetCursor_();
											// branch -> 0x58824
											// 0x58824
											return result5;
										}
										result6 = v61;
									} else {
										result6 = v94;
									}
								} else {
									result6 = v94;
								}
							}
							// 0x57a04
							if (g25 == 0) {
								// 0x58824
								return result6;
							}
							// 0x57a0c
							v53 = g23;
							if (g36 == *(int32_t *)g35) {
								// 0x57a24
								v77 = *(char *)(*(int32_t *)g28 + *(int32_t *)(v53 - 0x71d0));
								v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
								g34 = v78;
								PlaySFX(v78);
								// branch -> 0x57a34
							}
							// 0x57a34
							v54 = g22;
							g25 = 1;
							if (v54 <= 8) {
								// 0x57a40
								return *(int32_t *)(g23 + 0x3834 + 4 * v54);
							}
							// 0x587c4
							result4 = function_5cfd4(g36, 1);
							if (g36 != *(int32_t *)g35) {
								// 0x58824
								return result4;
							}
							// 0x587dc
							v103 = g25;
							if (v103 != 1) {
								// 0x5881c
								g34 = v103;
								result5 = SetCursor_();
								// branch -> 0x58824
								// 0x58824
								return result5;
							}
							// 0x587e4
							v55 = g23;
							v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
							v74 = *(int32_t *)(v55 - 0x76ac);
							v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
							v81 = v68 / 2 | v68 & -0x80000000;
							v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
							g34 = v70;
							function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
							// branch -> 0x5881c
							// 0x5881c
							g34 = g25;
							result5 = SetCursor_();
							// branch -> 0x58824
							// 0x58824
							return result5;
						}
						v94 = v66;
						v45 = 1;
					}
					// 0x57998
					result6 = v94;
					if (v45 != 0) {
						// 0x579a0
						if (v52 != 7) {
							// 0x579a8
							if (v52 != 8) {
								// 0x579b0
								v117 = *(int32_t *)(v61 + 0x5538);
								if (v117 == 0) {
									// 0x579c0
									v72 = *(char *)(v61 + 348);
									v122 = v72;
									g25 = 0;
									if (v72 == 0) {
										// 0x579d0
										g34 = 726;
										result3 = PlaySFX(726);
										result6 = result3;
										// branch -> 0x57a04
									} else {
										// 0x579dc
										if (v72 == 1) {
											// 0x579e8
											g34 = 623;
											v106 = PlaySFX(623);
											result6 = v106;
											// branch -> 0x57a04
										} else {
											// 0x579f4
											if (v72 == 2) {
												// 0x579fc
												g34 = 520;
												v107 = PlaySFX(520);
												result6 = v107;
												// branch -> 0x57a04
											} else {
												result6 = v122;
											}
										}
										// 0x57a04
										v95 = g25;
										if (v95 == 0) {
											result = result6;
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x57a0c
										v96 = g35;
										v110 = *(int32_t *)v96;
										v53 = g23;
										v73 = *(int32_t *)(v53 - 0x71d0);
										v97 = g28;
										v111 = *(int32_t *)v97;
										v98 = g36;
										if (v98 == v110) {
											// 0x57a24
											v77 = *(char *)(v111 + v73);
											v118 = *(int32_t *)(v53 - 0x71d4);
											v78 = *(int32_t *)(v118 + 4 * (int32_t)v77);
											g34 = v78;
											v108 = PlaySFX(v78);
											// branch -> 0x57a34
										}
										// 0x57a34
										v54 = g22;
										g25 = 1;
										if (v54 <= 8) {
											// 0x57a40
											v99 = g23;
											v109 = v99 + 0x3834;
											result2 = *(int32_t *)(v109 + 4 * v54);
											return result2;
										}
										// 0x587c4
										v100 = g36;
										result4 = function_5cfd4(v100, 1);
										v101 = g35;
										v112 = *(int32_t *)v101;
										v102 = g36;
										result = result4;
										if (v102 == v112) {
											// 0x587dc
											v103 = g25;
											v104 = v103;
											if (v103 == 1) {
												// 0x587e4
												v55 = g23;
												v119 = *(int32_t *)(v55 - 0x7650);
												v120 = *(int32_t *)(v55 - 0x7654);
												v121 = *(int32_t *)(v55 - 0x76a8);
												v68 = *(int32_t *)v119;
												v74 = *(int32_t *)(v55 - 0x76ac);
												v69 = *(int32_t *)v120;
												v81 = v68 / 2 | v68 & -0x80000000;
												v113 = *(int32_t *)v121;
												v114 = *(int32_t *)v74;
												v70 = v113 + v81;
												g34 = v70;
												v115 = v114 + (v69 / 2 | v69 & -0x80000000);
												v116 = function_ebc50(v70, v115);
												v105 = g25;
												v104 = v105;
												// branch -> 0x5881c
												// 0x5881c
												g34 = v104;
												result5 = SetCursor_();
												result = result5;
												// branch -> 0x58824
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// 0x5881c
											g34 = v104;
											result5 = SetCursor_();
											result = result5;
											// branch -> 0x58824
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0x57a04
									v95 = g25;
									if (v95 == 0) {
										result = result6;
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0x57a0c
									v96 = g35;
									v110 = *(int32_t *)v96;
									v53 = g23;
									v73 = *(int32_t *)(v53 - 0x71d0);
									v97 = g28;
									v111 = *(int32_t *)v97;
									v98 = g36;
									if (v98 == v110) {
										// 0x57a24
										v77 = *(char *)(v111 + v73);
										v118 = *(int32_t *)(v53 - 0x71d4);
										v78 = *(int32_t *)(v118 + 4 * (int32_t)v77);
										g34 = v78;
										v108 = PlaySFX(v78);
										// branch -> 0x57a34
									}
									// 0x57a34
									v54 = g22;
									g25 = 1;
									if (v54 <= 8) {
										// 0x57a40
										v99 = g23;
										v109 = v99 + 0x3834;
										result2 = *(int32_t *)(v109 + 4 * v54);
										return result2;
									}
									// 0x587c4
									v100 = g36;
									result4 = function_5cfd4(v100, 1);
									v101 = g35;
									v112 = *(int32_t *)v101;
									v102 = g36;
									result = result4;
									if (v102 == v112) {
										// 0x587dc
										v103 = g25;
										v104 = v103;
										if (v103 == 1) {
											// 0x587e4
											v55 = g23;
											v119 = *(int32_t *)(v55 - 0x7650);
											v120 = *(int32_t *)(v55 - 0x7654);
											v121 = *(int32_t *)(v55 - 0x76a8);
											v68 = *(int32_t *)v119;
											v74 = *(int32_t *)(v55 - 0x76ac);
											v69 = *(int32_t *)v120;
											v81 = v68 / 2 | v68 & -0x80000000;
											v113 = *(int32_t *)v121;
											v114 = *(int32_t *)v74;
											v70 = v113 + v81;
											g34 = v70;
											v115 = v114 + (v69 / 2 | v69 & -0x80000000);
											v116 = function_ebc50(v70, v115);
											v105 = g25;
											v104 = v105;
											// branch -> 0x5881c
											// 0x5881c
											g34 = v104;
											result5 = SetCursor_();
											result = result5;
											// branch -> 0x58824
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x5881c
										g34 = v104;
										result5 = SetCursor_();
										result = result5;
										// branch -> 0x58824
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									result6 = v61;
								}
							} else {
								result6 = v94;
							}
						} else {
							result6 = v94;
						}
					}
					// 0x57a04
					v95 = g25;
					if (v95 == 0) {
						result = result6;
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x57a0c
					v96 = g35;
					v110 = *(int32_t *)v96;
					v53 = g23;
					v73 = *(int32_t *)(v53 - 0x71d0);
					v97 = g28;
					v111 = *(int32_t *)v97;
					v98 = g36;
					if (v98 == v110) {
						// 0x57a24
						v77 = *(char *)(v111 + v73);
						v118 = *(int32_t *)(v53 - 0x71d4);
						v78 = *(int32_t *)(v118 + 4 * (int32_t)v77);
						g34 = v78;
						v108 = PlaySFX(v78);
						// branch -> 0x57a34
					}
					// 0x57a34
					v54 = g22;
					g25 = 1;
					if (v54 <= 8) {
						// 0x57a40
						v99 = g23;
						v109 = v99 + 0x3834;
						result2 = *(int32_t *)(v109 + 4 * v54);
						return result2;
					}
					// 0x587c4
					v100 = g36;
					result4 = function_5cfd4(v100, 1);
					v101 = g35;
					v112 = *(int32_t *)v101;
					v102 = g36;
					result = result4;
					if (v102 == v112) {
						// 0x587dc
						v103 = g25;
						v104 = v103;
						if (v103 == 1) {
							// 0x587e4
							v55 = g23;
							v119 = *(int32_t *)(v55 - 0x7650);
							v120 = *(int32_t *)(v55 - 0x7654);
							v121 = *(int32_t *)(v55 - 0x76a8);
							v68 = *(int32_t *)v119;
							v74 = *(int32_t *)(v55 - 0x76ac);
							v69 = *(int32_t *)v120;
							v81 = v68 / 2 | v68 & -0x80000000;
							v113 = *(int32_t *)v121;
							v114 = *(int32_t *)v74;
							v70 = v113 + v81;
							g34 = v70;
							v115 = v114 + (v69 / 2 | v69 & -0x80000000);
							v116 = function_ebc50(v70, v115);
							v105 = g25;
							v104 = v105;
							// branch -> 0x5881c
							// 0x5881c
							g34 = v104;
							result5 = SetCursor_();
							result = result5;
							// branch -> 0x58824
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0x5881c
						g34 = v104;
						result5 = SetCursor_();
						result = result5;
						// branch -> 0x58824
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x57998
				result6 = v94;
				if (v45 != 0) {
					// 0x579a0
					if (v52 != 7) {
						// 0x579a8
						if (v52 != 8) {
							// 0x579b0
							v117 = *(int32_t *)(v61 + 0x5538);
							if (v117 == 0) {
								// 0x579c0
								v72 = *(char *)(v61 + 348);
								v122 = v72;
								g25 = 0;
								if (v72 == 0) {
									// 0x579d0
									g34 = 726;
									result3 = PlaySFX(726);
									result6 = result3;
									// branch -> 0x57a04
								} else {
									// 0x579dc
									if (v72 == 1) {
										// 0x579e8
										g34 = 623;
										v106 = PlaySFX(623);
										result6 = v106;
										// branch -> 0x57a04
									} else {
										// 0x579f4
										if (v72 == 2) {
											// 0x579fc
											g34 = 520;
											v107 = PlaySFX(520);
											result6 = v107;
											// branch -> 0x57a04
										} else {
											result6 = v122;
										}
									}
									// 0x57a04
									v95 = g25;
									if (v95 == 0) {
										result = result6;
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0x57a0c
									v96 = g35;
									v110 = *(int32_t *)v96;
									v53 = g23;
									v73 = *(int32_t *)(v53 - 0x71d0);
									v97 = g28;
									v111 = *(int32_t *)v97;
									v98 = g36;
									if (v98 == v110) {
										// 0x57a24
										v77 = *(char *)(v111 + v73);
										v118 = *(int32_t *)(v53 - 0x71d4);
										v78 = *(int32_t *)(v118 + 4 * (int32_t)v77);
										g34 = v78;
										v108 = PlaySFX(v78);
										// branch -> 0x57a34
									}
									// 0x57a34
									v54 = g22;
									g25 = 1;
									if (v54 <= 8) {
										// 0x57a40
										v99 = g23;
										v109 = v99 + 0x3834;
										result2 = *(int32_t *)(v109 + 4 * v54);
										return result2;
									}
									// 0x587c4
									v100 = g36;
									result4 = function_5cfd4(v100, 1);
									v101 = g35;
									v112 = *(int32_t *)v101;
									v102 = g36;
									result = result4;
									if (v102 == v112) {
										// 0x587dc
										v103 = g25;
										v104 = v103;
										if (v103 == 1) {
											// 0x587e4
											v55 = g23;
											v119 = *(int32_t *)(v55 - 0x7650);
											v120 = *(int32_t *)(v55 - 0x7654);
											v121 = *(int32_t *)(v55 - 0x76a8);
											v68 = *(int32_t *)v119;
											v74 = *(int32_t *)(v55 - 0x76ac);
											v69 = *(int32_t *)v120;
											v81 = v68 / 2 | v68 & -0x80000000;
											v113 = *(int32_t *)v121;
											v114 = *(int32_t *)v74;
											v70 = v113 + v81;
											g34 = v70;
											v115 = v114 + (v69 / 2 | v69 & -0x80000000);
											v116 = function_ebc50(v70, v115);
											v105 = g25;
											v104 = v105;
											// branch -> 0x5881c
											// 0x5881c
											g34 = v104;
											result5 = SetCursor_();
											result = result5;
											// branch -> 0x58824
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x5881c
										g34 = v104;
										result5 = SetCursor_();
										result = result5;
										// branch -> 0x58824
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x57a04
								v95 = g25;
								if (v95 == 0) {
									result = result6;
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x57a0c
								v96 = g35;
								v110 = *(int32_t *)v96;
								v53 = g23;
								v73 = *(int32_t *)(v53 - 0x71d0);
								v97 = g28;
								v111 = *(int32_t *)v97;
								v98 = g36;
								if (v98 == v110) {
									// 0x57a24
									v77 = *(char *)(v111 + v73);
									v118 = *(int32_t *)(v53 - 0x71d4);
									v78 = *(int32_t *)(v118 + 4 * (int32_t)v77);
									g34 = v78;
									v108 = PlaySFX(v78);
									// branch -> 0x57a34
								}
								// 0x57a34
								v54 = g22;
								g25 = 1;
								if (v54 <= 8) {
									// 0x57a40
									v99 = g23;
									v109 = v99 + 0x3834;
									result2 = *(int32_t *)(v109 + 4 * v54);
									return result2;
								}
								// 0x587c4
								v100 = g36;
								result4 = function_5cfd4(v100, 1);
								v101 = g35;
								v112 = *(int32_t *)v101;
								v102 = g36;
								result = result4;
								if (v102 == v112) {
									// 0x587dc
									v103 = g25;
									v104 = v103;
									if (v103 == 1) {
										// 0x587e4
										v55 = g23;
										v119 = *(int32_t *)(v55 - 0x7650);
										v120 = *(int32_t *)(v55 - 0x7654);
										v121 = *(int32_t *)(v55 - 0x76a8);
										v68 = *(int32_t *)v119;
										v74 = *(int32_t *)(v55 - 0x76ac);
										v69 = *(int32_t *)v120;
										v81 = v68 / 2 | v68 & -0x80000000;
										v113 = *(int32_t *)v121;
										v114 = *(int32_t *)v74;
										v70 = v113 + v81;
										g34 = v70;
										v115 = v114 + (v69 / 2 | v69 & -0x80000000);
										v116 = function_ebc50(v70, v115);
										v105 = g25;
										v104 = v105;
										// branch -> 0x5881c
										// 0x5881c
										g34 = v104;
										result5 = SetCursor_();
										result = result5;
										// branch -> 0x58824
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0x5881c
									g34 = v104;
									result5 = SetCursor_();
									result = result5;
									// branch -> 0x58824
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								result6 = v61;
							}
						} else {
							result6 = v94;
						}
					} else {
						result6 = v94;
					}
				}
				// 0x57a04
				v95 = g25;
				if (v95 == 0) {
					result = result6;
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x57a0c
				v96 = g35;
				v110 = *(int32_t *)v96;
				v53 = g23;
				v73 = *(int32_t *)(v53 - 0x71d0);
				v97 = g28;
				v111 = *(int32_t *)v97;
				v98 = g36;
				if (v98 == v110) {
					// 0x57a24
					v77 = *(char *)(v111 + v73);
					v118 = *(int32_t *)(v53 - 0x71d4);
					v78 = *(int32_t *)(v118 + 4 * (int32_t)v77);
					g34 = v78;
					v108 = PlaySFX(v78);
					// branch -> 0x57a34
				}
				// 0x57a34
				v54 = g22;
				g25 = 1;
				if (v54 <= 8) {
					// 0x57a40
					v99 = g23;
					v109 = v99 + 0x3834;
					result2 = *(int32_t *)(v109 + 4 * v54);
					return result2;
				}
				// 0x587c4
				v100 = g36;
				result4 = function_5cfd4(v100, 1);
				v101 = g35;
				v112 = *(int32_t *)v101;
				v102 = g36;
				result = result4;
				if (v102 == v112) {
					// 0x587dc
					v103 = g25;
					v104 = v103;
					if (v103 == 1) {
						// 0x587e4
						v55 = g23;
						v119 = *(int32_t *)(v55 - 0x7650);
						v120 = *(int32_t *)(v55 - 0x7654);
						v121 = *(int32_t *)(v55 - 0x76a8);
						v68 = *(int32_t *)v119;
						v74 = *(int32_t *)(v55 - 0x76ac);
						v69 = *(int32_t *)v120;
						v81 = v68 / 2 | v68 & -0x80000000;
						v113 = *(int32_t *)v121;
						v114 = *(int32_t *)v74;
						v70 = v113 + v81;
						g34 = v70;
						v115 = v114 + (v69 / 2 | v69 & -0x80000000);
						v116 = function_ebc50(v70, v115);
						v105 = g25;
						v104 = v105;
						// branch -> 0x5881c
						// 0x5881c
						g34 = v104;
						result5 = SetCursor_();
						result = result5;
						// branch -> 0x58824
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x5881c
					g34 = v104;
					result5 = SetCursor_();
					result = result5;
					// branch -> 0x58824
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				int32_t v148 = v23 + 1; // 0x576b0
				g24 = v148;
				if (v148 <= 72) {
					v12 = v26;
					v31 = v148;
					goto lab_0x576bc;
				}
				v38 = v148;
				// 0x576c4
				if (v22 == 0) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x576cc
				g22 = 7;
				v36 = 7;
				if (v38 >= 0) {
					// 0x576d8
					if (v38 <= 3) {
						// 0x576e0
						g22 = 4;
						v36 = 4;
						// branch -> 0x576e4
					} else {
						v36 = 7;
					}
				}
				// 0x576e4
				v35 = v36;
				if (v38 >= 4) {
					// 0x576ec
					if (v38 <= 5) {
						// 0x576f4
						g22 = 5;
						v35 = 5;
						// branch -> 0x576f8
					} else {
						v35 = v36;
					}
				}
				// 0x576f8
				v34 = v35;
				if (v38 == 6) {
					// 0x57700
					g22 = 6;
					v34 = 6;
					// branch -> 0x57704
				}
				// 0x57704
				v33 = v34;
				if (v38 >= 7) {
					// 0x5770c
					if (v38 <= 18) {
						// 0x57714
						g22 = 1;
						v33 = 1;
						// branch -> 0x57718
					} else {
						v33 = v34;
					}
				}
				// 0x57718
				v32 = v33;
				if (v38 >= 19) {
					// 0x57720
					if (v38 <= 24) {
						// 0x57728
						g22 = 3;
						v32 = 3;
						// branch -> 0x5772c
					} else {
						v32 = v33;
					}
				}
				// 0x5772c
				v37 = v32;
				if (v38 >= 65) {
					// 0x57734
					if (v38 <= 72) {
						// 0x5773c
						g22 = 8;
						v37 = 8;
						// branch -> 0x57740
					} else {
						v37 = v32;
					}
				}
				// 0x57740
				v61 = v3 + g32;
				v71 = *(char *)(v61 + 0x5491);
				v62 = v71;
				v30 = 0;
				v49 = 0;
				if (v37 == v62) {
					// 0x57758
					v30 = 1;
					v49 = 1;
					// branch -> 0x5775c
				}
				// 0x5775c
				g25 = v30;
				v63 = v62;
				v48 = v49;
				v52 = v37;
				if (v37 == 1) {
					// 0x57764
					if (v71 == 2) {
						// 0x57770
						g22 = 2;
						g25 = 1;
						v63 = 2;
						v48 = 1;
						v52 = 2;
						// branch -> 0x57778
					} else {
						v63 = v62;
						v48 = v49;
						v52 = 1;
					}
				}
				// 0x57778
				v47 = v48;
				if (v63 == 7) {
					// 0x57784
					if (v52 == 8) {
						// 0x5778c
						if (v8 == 1) {
							// 0x57794
							if (v9 == 1) {
								// 0x5779c
								g25 = 1;
								v51 = 1;
								if (*(int32_t *)(76 * *(int32_t *)(v61 + 0x553c) + v5 + 0x3858 + 64) == 0) {
									// 0x577c0
									g25 = 0;
									v51 = 0;
									// branch -> 0x577c4
								}
								// 0x577c4
								v50 = v51;
								if (*(int32_t *)(v61 + 0x5538) == 0) {
									// 0x577d4
									g25 = 0;
									v50 = 0;
									// branch -> 0x577d8
								}
								// 0x577d8
								if (*(int32_t *)(v61 + 0x53dc) == 11) {
									// 0x577e8
									g25 = 0;
									v47 = 0;
									// branch -> 0x577ec
								} else {
									v47 = v50;
								}
							} else {
								v47 = v48;
							}
						} else {
							v47 = v48;
						}
					} else {
						v47 = v48;
					}
				}
				// 0x577ec
				v45 = v47;
				if (v52 == 7) {
					// 0x577f4
					v56 = v38 - 25;
					g33 = 0;
					g25 = 1;
					if (*(int32_t *)(v61 + 0x53dc) == 11) {
						// 0x57810
						v75 = *(char *)(v61 + 0x482c + v56);
						v79 = v75;
						v64 = v75;
						if (v75 != 0) {
							// 0x57854
							if (0x1000000 * v79 < 0) {
								// 0x5787c
								g33 = -v64;
								v45 = 1;
								// branch -> 0x57998
							} else {
								// 0x57860
								if (*(int32_t *)(368 * v64 + v61 + 3392) != 11) {
									// 0x57874
									g33 = v64;
									v45 = 1;
									// branch -> 0x57998
								} else {
									v45 = 1;
								}
							}
							// 0x57998
							if (v45 != 0) {
								// 0x579a0
								if (v52 != 7) {
									// 0x579a8
									if (v52 != 8) {
										// 0x579b0
										if (*(int32_t *)(v61 + 0x5538) == 0) {
											// 0x579c0
											v72 = *(char *)(v61 + 348);
											g25 = 0;
											if (v72 == 0) {
												// 0x579d0
												g34 = 726;
												PlaySFX(726);
												// branch -> 0x57a04
											} else {
												// 0x579dc
												if (v72 == 1) {
													// 0x579e8
													g34 = 623;
													PlaySFX(623);
													// branch -> 0x57a04
												} else {
													// 0x579f4
													if (v72 == 2) {
														// 0x579fc
														g34 = 520;
														PlaySFX(520);
														// branch -> 0x57a04
													}
												}
												// 0x57a04
												if (g25 == 0) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// 0x57a0c
												v53 = g23;
												v73 = *(int32_t *)(v53 - 0x71d0);
												if (g36 == *(int32_t *)g35) {
													// 0x57a24
													v77 = *(char *)(*(int32_t *)g28 + v73);
													v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
													g34 = v78;
													PlaySFX(v78);
													// branch -> 0x57a34
												}
												// 0x57a34
												v54 = g22;
												g25 = 1;
												if (v54 <= 8) {
													// 0x57a40
													return *(int32_t *)(g23 + 0x3834 + 4 * v54);
												}
												// 0x587c4
												function_5cfd4(g36, 1);
												if (g36 == *(int32_t *)g35) {
													// 0x587dc
													if (g25 == 1) {
														// 0x587e4
														v55 = g23;
														v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
														v74 = *(int32_t *)(v55 - 0x76ac);
														v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
														v81 = v68 / 2 | v68 & -0x80000000;
														v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
														g34 = v70;
														function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
														// branch -> 0x5881c
														// 0x5881c
														g34 = g25;
														SetCursor_();
														// branch -> 0x58824
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// 0x57a04
											if (g25 == 0) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// 0x57a0c
											v53 = g23;
											v73 = *(int32_t *)(v53 - 0x71d0);
											if (g36 == *(int32_t *)g35) {
												// 0x57a24
												v77 = *(char *)(*(int32_t *)g28 + v73);
												v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
												g34 = v78;
												PlaySFX(v78);
												// branch -> 0x57a34
											}
											// 0x57a34
											v54 = g22;
											g25 = 1;
											if (v54 <= 8) {
												// 0x57a40
												return *(int32_t *)(g23 + 0x3834 + 4 * v54);
											}
											// 0x587c4
											function_5cfd4(g36, 1);
											if (g36 == *(int32_t *)g35) {
												// 0x587dc
												if (g25 == 1) {
													// 0x587e4
													v55 = g23;
													v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
													v74 = *(int32_t *)(v55 - 0x76ac);
													v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
													v81 = v68 / 2 | v68 & -0x80000000;
													v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
													g34 = v70;
													function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
													// branch -> 0x5881c
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
							}
							// 0x57a04
							if (g25 == 0) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x57a0c
							v53 = g23;
							v73 = *(int32_t *)(v53 - 0x71d0);
							if (g36 == *(int32_t *)g35) {
								// 0x57a24
								v77 = *(char *)(*(int32_t *)g28 + v73);
								v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
								g34 = v78;
								PlaySFX(v78);
								// branch -> 0x57a34
							}
							// 0x57a34
							v54 = g22;
							g25 = 1;
							if (v54 <= 8) {
								// 0x57a40
								return *(int32_t *)(g23 + 0x3834 + 4 * v54);
							}
							// 0x587c4
							function_5cfd4(g36, 1);
							if (g36 == *(int32_t *)g35) {
								// 0x587dc
								if (g25 == 1) {
									// 0x587e4
									v55 = g23;
									v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
									v74 = *(int32_t *)(v55 - 0x76ac);
									v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
									v81 = v68 / 2 | v68 & -0x80000000;
									v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
									g34 = v70;
									function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
									// branch -> 0x5881c
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							v45 = 1;
						}
					} else {
						// 0x57884
						v57 = v9 - 1;
						v76 = 0x66666667 * (int64_t)v56;
						v80 = (int32_t)(v76 / 0x100000000) >> 31;
						v65 = (v80 & -0x40000000 | (int32_t)(v76 / 0x400000000)) + (int32_t)(v80 < 0);
						v58 = 10 * (v65 - (v57 / 2 | v57 & -0x80000000));
						v60 = v58;
						if (v58 <= 0xffffffff) {
							// 0x578b4
							v60 = 0;
							// branch -> 0x578b8
						}
						// 0x578b8
						v59 = v8 - 1;
						v66 = v61 + v60;
						v67 = v56 - 10 * v65 - (v59 / 2 | v59 & -0x80000000);
						if (v9 > 0) {
							// 0x57990
							v39 = v67 < 0 ? 0 : v67;
							v46 = 1;
							v43 = 0;
							v40 = 0;
							v41 = v66;
							v42 = v60;
							v44 = 1;
							// branch -> 0x57990
							while (true) {
								// 0x57990
								if (v44 != 0) {
									goto lab_0x578f4_7;
								}
								// 0x57998
								if (v46 != 0) {
									// 0x579a0
									if (v52 != 7) {
										// 0x579a8
										if (v52 != 8) {
											// 0x579b0
											if (*(int32_t *)(v61 + 0x5538) == 0) {
												// 0x579c0
												v72 = *(char *)(v61 + 348);
												g25 = 0;
												if (v72 == 0) {
													// 0x579d0
													g34 = 726;
													PlaySFX(726);
													// branch -> 0x57a04
												} else {
													// 0x579dc
													if (v72 == 1) {
														// 0x579e8
														g34 = 623;
														PlaySFX(623);
														// branch -> 0x57a04
													} else {
														// 0x579f4
														if (v72 == 2) {
															// 0x579fc
															g34 = 520;
															PlaySFX(520);
															// branch -> 0x57a04
														}
													}
													// 0x57a04
													if (g25 == 0) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// 0x57a0c
													v53 = g23;
													v73 = *(int32_t *)(v53 - 0x71d0);
													if (g36 == *(int32_t *)g35) {
														// 0x57a24
														v77 = *(char *)(*(int32_t *)g28 + v73);
														v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
														g34 = v78;
														PlaySFX(v78);
														// branch -> 0x57a34
													}
													// 0x57a34
													v54 = g22;
													g25 = 1;
													if (v54 <= 8) {
														// 0x57a40
														return *(int32_t *)(g23 + 0x3834 + 4 * v54);
													}
													// 0x587c4
													function_5cfd4(g36, 1);
													if (g36 == *(int32_t *)g35) {
														// 0x587dc
														if (g25 == 1) {
															// 0x587e4
															v55 = g23;
															v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
															v74 = *(int32_t *)(v55 - 0x76ac);
															v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
															v81 = v68 / 2 | v68 & -0x80000000;
															v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
															g34 = v70;
															function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
															// branch -> 0x5881c
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// 0x57a04
												if (g25 == 0) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// 0x57a0c
												v53 = g23;
												v73 = *(int32_t *)(v53 - 0x71d0);
												if (g36 == *(int32_t *)g35) {
													// 0x57a24
													v77 = *(char *)(*(int32_t *)g28 + v73);
													v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
													g34 = v78;
													PlaySFX(v78);
													// branch -> 0x57a34
												}
												// 0x57a34
												v54 = g22;
												g25 = 1;
												if (v54 <= 8) {
													// 0x57a40
													return *(int32_t *)(g23 + 0x3834 + 4 * v54);
												}
												// 0x587c4
												function_5cfd4(g36, 1);
												if (g36 == *(int32_t *)g35) {
													// 0x587dc
													if (g25 == 1) {
														// 0x587e4
														v55 = g23;
														v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
														v74 = *(int32_t *)(v55 - 0x76ac);
														v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
														v81 = v68 / 2 | v68 & -0x80000000;
														v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
														g34 = v70;
														function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
														// branch -> 0x5881c
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
								}
								// 0x57a04
								if (g25 == 0) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x57a0c
								v53 = g23;
								v73 = *(int32_t *)(v53 - 0x71d0);
								if (g36 == *(int32_t *)g35) {
									// 0x57a24
									v77 = *(char *)(*(int32_t *)g28 + v73);
									v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
									g34 = v78;
									PlaySFX(v78);
									// branch -> 0x57a34
								}
								// 0x57a34
								v54 = g22;
								g25 = 1;
								if (v54 <= 8) {
									// 0x57a40
									return *(int32_t *)(g23 + 0x3834 + 4 * v54);
								}
								// 0x587c4
								function_5cfd4(g36, 1);
								if (g36 == *(int32_t *)g35) {
									// 0x587dc
									if (g25 == 1) {
										// 0x587e4
										v55 = g23;
										v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
										v74 = *(int32_t *)(v55 - 0x76ac);
										v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
										v81 = v68 / 2 | v68 & -0x80000000;
										v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
										g34 = v70;
										function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
										// branch -> 0x5881c
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						} else {
							v45 = 1;
						}
					}
					// 0x57998
					if (v45 != 0) {
						// 0x579a0
						if (v52 != 7) {
							// 0x579a8
							if (v52 != 8) {
								// 0x579b0
								if (*(int32_t *)(v61 + 0x5538) == 0) {
									// 0x579c0
									v72 = *(char *)(v61 + 348);
									g25 = 0;
									if (v72 == 0) {
										// 0x579d0
										g34 = 726;
										PlaySFX(726);
										// branch -> 0x57a04
									} else {
										// 0x579dc
										if (v72 == 1) {
											// 0x579e8
											g34 = 623;
											PlaySFX(623);
											// branch -> 0x57a04
										} else {
											// 0x579f4
											if (v72 == 2) {
												// 0x579fc
												g34 = 520;
												PlaySFX(520);
												// branch -> 0x57a04
											}
										}
										// 0x57a04
										if (g25 == 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x57a0c
										v53 = g23;
										v73 = *(int32_t *)(v53 - 0x71d0);
										if (g36 == *(int32_t *)g35) {
											// 0x57a24
											v77 = *(char *)(*(int32_t *)g28 + v73);
											v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
											g34 = v78;
											PlaySFX(v78);
											// branch -> 0x57a34
										}
										// 0x57a34
										v54 = g22;
										g25 = 1;
										if (v54 <= 8) {
											// 0x57a40
											return *(int32_t *)(g23 + 0x3834 + 4 * v54);
										}
										// 0x587c4
										function_5cfd4(g36, 1);
										if (g36 == *(int32_t *)g35) {
											// 0x587dc
											if (g25 == 1) {
												// 0x587e4
												v55 = g23;
												v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
												v74 = *(int32_t *)(v55 - 0x76ac);
												v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
												v81 = v68 / 2 | v68 & -0x80000000;
												v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
												g34 = v70;
												function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
												// branch -> 0x5881c
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0x57a04
									if (g25 == 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0x57a0c
									v53 = g23;
									v73 = *(int32_t *)(v53 - 0x71d0);
									if (g36 == *(int32_t *)g35) {
										// 0x57a24
										v77 = *(char *)(*(int32_t *)g28 + v73);
										v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
										g34 = v78;
										PlaySFX(v78);
										// branch -> 0x57a34
									}
									// 0x57a34
									v54 = g22;
									g25 = 1;
									if (v54 <= 8) {
										// 0x57a40
										return *(int32_t *)(g23 + 0x3834 + 4 * v54);
									}
									// 0x587c4
									function_5cfd4(g36, 1);
									if (g36 == *(int32_t *)g35) {
										// 0x587dc
										if (g25 == 1) {
											// 0x587e4
											v55 = g23;
											v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
											v74 = *(int32_t *)(v55 - 0x76ac);
											v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
											v81 = v68 / 2 | v68 & -0x80000000;
											v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
											g34 = v70;
											function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
											// branch -> 0x5881c
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
					}
					// 0x57a04
					if (g25 == 0) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x57a0c
					v53 = g23;
					v73 = *(int32_t *)(v53 - 0x71d0);
					if (g36 == *(int32_t *)g35) {
						// 0x57a24
						v77 = *(char *)(*(int32_t *)g28 + v73);
						v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
						g34 = v78;
						PlaySFX(v78);
						// branch -> 0x57a34
					}
					// 0x57a34
					v54 = g22;
					g25 = 1;
					if (v54 <= 8) {
						// 0x57a40
						return *(int32_t *)(g23 + 0x3834 + 4 * v54);
					}
					// 0x587c4
					function_5cfd4(g36, 1);
					if (g36 == *(int32_t *)g35) {
						// 0x587dc
						if (g25 == 1) {
							// 0x587e4
							v55 = g23;
							v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
							v74 = *(int32_t *)(v55 - 0x76ac);
							v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
							v81 = v68 / 2 | v68 & -0x80000000;
							v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
							g34 = v70;
							function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
							// branch -> 0x5881c
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x57998
				if (v45 != 0) {
					// 0x579a0
					if (v52 != 7) {
						// 0x579a8
						if (v52 != 8) {
							// 0x579b0
							if (*(int32_t *)(v61 + 0x5538) == 0) {
								// 0x579c0
								v72 = *(char *)(v61 + 348);
								g25 = 0;
								if (v72 == 0) {
									// 0x579d0
									g34 = 726;
									PlaySFX(726);
									// branch -> 0x57a04
								} else {
									// 0x579dc
									if (v72 == 1) {
										// 0x579e8
										g34 = 623;
										PlaySFX(623);
										// branch -> 0x57a04
									} else {
										// 0x579f4
										if (v72 == 2) {
											// 0x579fc
											g34 = 520;
											PlaySFX(520);
											// branch -> 0x57a04
										}
									}
									// 0x57a04
									if (g25 == 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0x57a0c
									v53 = g23;
									v73 = *(int32_t *)(v53 - 0x71d0);
									if (g36 == *(int32_t *)g35) {
										// 0x57a24
										v77 = *(char *)(*(int32_t *)g28 + v73);
										v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
										g34 = v78;
										PlaySFX(v78);
										// branch -> 0x57a34
									}
									// 0x57a34
									v54 = g22;
									g25 = 1;
									if (v54 <= 8) {
										// 0x57a40
										return *(int32_t *)(g23 + 0x3834 + 4 * v54);
									}
									// 0x587c4
									function_5cfd4(g36, 1);
									if (g36 == *(int32_t *)g35) {
										// 0x587dc
										if (g25 == 1) {
											// 0x587e4
											v55 = g23;
											v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
											v74 = *(int32_t *)(v55 - 0x76ac);
											v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
											v81 = v68 / 2 | v68 & -0x80000000;
											v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
											g34 = v70;
											function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
											// branch -> 0x5881c
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x57a04
								if (g25 == 0) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x57a0c
								v53 = g23;
								v73 = *(int32_t *)(v53 - 0x71d0);
								if (g36 == *(int32_t *)g35) {
									// 0x57a24
									v77 = *(char *)(*(int32_t *)g28 + v73);
									v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
									g34 = v78;
									PlaySFX(v78);
									// branch -> 0x57a34
								}
								// 0x57a34
								v54 = g22;
								g25 = 1;
								if (v54 <= 8) {
									// 0x57a40
									return *(int32_t *)(g23 + 0x3834 + 4 * v54);
								}
								// 0x587c4
								function_5cfd4(g36, 1);
								if (g36 == *(int32_t *)g35) {
									// 0x587dc
									if (g25 == 1) {
										// 0x587e4
										v55 = g23;
										v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
										v74 = *(int32_t *)(v55 - 0x76ac);
										v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
										v81 = v68 / 2 | v68 & -0x80000000;
										v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
										g34 = v70;
										function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
										// branch -> 0x5881c
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
				}
				// 0x57a04
				if (g25 == 0) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x57a0c
				v53 = g23;
				v73 = *(int32_t *)(v53 - 0x71d0);
				if (g36 == *(int32_t *)g35) {
					// 0x57a24
					v77 = *(char *)(*(int32_t *)g28 + v73);
					v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
					g34 = v78;
					PlaySFX(v78);
					// branch -> 0x57a34
				}
				// 0x57a34
				v54 = g22;
				g25 = 1;
				if (v54 <= 8) {
					// 0x57a40
					return *(int32_t *)(g23 + 0x3834 + 4 * v54);
				}
				// 0x587c4
				function_5cfd4(g36, 1);
				if (g36 == *(int32_t *)g35) {
					// 0x587dc
					if (g25 == 1) {
						// 0x587e4
						v55 = g23;
						v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
						v74 = *(int32_t *)(v55 - 0x76ac);
						v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
						v81 = v68 / 2 | v68 & -0x80000000;
						v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
						g34 = v70;
						function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
						// branch -> 0x5881c
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		lab_0x576c4:
			// 0x576c4
			if (v22 == 0) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x576cc
			g22 = 7;
			v36 = 7;
			if (v38 >= 0) {
				// 0x576d8
				if (v38 <= 3) {
					// 0x576e0
					g22 = 4;
					v36 = 4;
					// branch -> 0x576e4
				} else {
					v36 = 7;
				}
				// 0x576e4
				v35 = v36;
				if (v38 >= 4) {
					// 0x576ec
					if (v38 <= 5) {
						// 0x576f4
						g22 = 5;
						v35 = 5;
						// branch -> 0x576f8
					} else {
						v35 = v36;
					}
				}
				// 0x576f8
				v34 = v35;
				if (v38 == 6) {
					// 0x57700
					g22 = 6;
					v34 = 6;
					// branch -> 0x57704
				}
				// 0x57704
				v33 = v34;
				if (v38 >= 7) {
					// 0x5770c
					if (v38 <= 18) {
						// 0x57714
						g22 = 1;
						v33 = 1;
						// branch -> 0x57718
					} else {
						v33 = v34;
					}
				}
				// 0x57718
				v32 = v33;
				if (v38 >= 19) {
					// 0x57720
					if (v38 <= 24) {
						// 0x57728
						g22 = 3;
						v32 = 3;
						// branch -> 0x5772c
					} else {
						v32 = v33;
					}
				}
				// 0x5772c
				v37 = v32;
				if (v38 >= 65) {
					// 0x57734
					if (v38 <= 72) {
						// 0x5773c
						g22 = 8;
						v37 = 8;
						// branch -> 0x57740
					} else {
						v37 = v32;
					}
				}
				// 0x57740
				v61 = v3 + g32;
				v71 = *(char *)(v61 + 0x5491);
				v62 = v71;
				v30 = 0;
				v49 = 0;
				if (v37 == v62) {
					// 0x57758
					v30 = 1;
					v49 = 1;
					// branch -> 0x5775c
				}
				// 0x5775c
				g25 = v30;
				v63 = v62;
				v48 = v49;
				v52 = v37;
				if (v37 == 1) {
					// 0x57764
					if (v71 == 2) {
						// 0x57770
						g22 = 2;
						g25 = 1;
						v63 = 2;
						v48 = 1;
						v52 = 2;
						// branch -> 0x57778
					} else {
						v63 = v62;
						v48 = v49;
						v52 = 1;
					}
				}
				// 0x57778
				v47 = v48;
				if (v63 == 7) {
					// 0x57784
					if (v52 == 8) {
						// 0x5778c
						if (v8 == 1) {
							// 0x57794
							if (v9 == 1) {
								// 0x5779c
								g25 = 1;
								v51 = 1;
								if (*(int32_t *)(76 * *(int32_t *)(v61 + 0x553c) + v5 + 0x3858 + 64) == 0) {
									// 0x577c0
									g25 = 0;
									v51 = 0;
									// branch -> 0x577c4
								}
								// 0x577c4
								v50 = v51;
								if (*(int32_t *)(v61 + 0x5538) == 0) {
									// 0x577d4
									g25 = 0;
									v50 = 0;
									// branch -> 0x577d8
								}
								// 0x577d8
								if (*(int32_t *)(v61 + 0x53dc) == 11) {
									// 0x577e8
									g25 = 0;
									v47 = 0;
									// branch -> 0x577ec
								} else {
									v47 = v50;
								}
							} else {
								v47 = v48;
							}
						} else {
							v47 = v48;
						}
					} else {
						v47 = v48;
					}
				}
				// 0x577ec
				v45 = v47;
				if (v52 == 7) {
					// 0x577f4
					v56 = v38 - 25;
					g33 = 0;
					g25 = 1;
					if (*(int32_t *)(v61 + 0x53dc) == 11) {
						// 0x57810
						v75 = *(char *)(v61 + 0x482c + v56);
						v79 = v75;
						v64 = v75;
						if (v75 != 0) {
							// 0x57854
							if (0x1000000 * v79 < 0) {
								// 0x5787c
								g33 = -v64;
								v45 = 1;
								// branch -> 0x57998
							} else {
								// 0x57860
								if (*(int32_t *)(368 * v64 + v61 + 3392) != 11) {
									// 0x57874
									g33 = v64;
									v45 = 1;
									// branch -> 0x57998
								} else {
									v45 = 1;
								}
							}
							// 0x57998
							if (v45 != 0) {
								// 0x579a0
								if (v52 != 7) {
									// 0x579a8
									if (v52 != 8) {
										// 0x579b0
										if (*(int32_t *)(v61 + 0x5538) == 0) {
											// 0x579c0
											v72 = *(char *)(v61 + 348);
											g25 = 0;
											if (v72 == 0) {
												// 0x579d0
												g34 = 726;
												PlaySFX(726);
												// branch -> 0x57a04
											} else {
												// 0x579dc
												if (v72 == 1) {
													// 0x579e8
													g34 = 623;
													PlaySFX(623);
													// branch -> 0x57a04
												} else {
													// 0x579f4
													if (v72 == 2) {
														// 0x579fc
														g34 = 520;
														PlaySFX(520);
														// branch -> 0x57a04
													}
												}
												// 0x57a04
												if (g25 == 0) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// 0x57a0c
												v53 = g23;
												v73 = *(int32_t *)(v53 - 0x71d0);
												if (g36 == *(int32_t *)g35) {
													// 0x57a24
													v77 = *(char *)(*(int32_t *)g28 + v73);
													v78 = *(int32_t *)(*(int32_t *)(v53 - 0x71d4) + 4 * (int32_t)v77);
													g34 = v78;
													PlaySFX(v78);
													// branch -> 0x57a34
												}
												// 0x57a34
												v54 = g22;
												g25 = 1;
												if (v54 <= 8) {
													// 0x57a40
													return *(int32_t *)(g23 + 0x3834 + 4 * v54);
												}
												// 0x587c4
												function_5cfd4(g36, 1);
												if (g36 == *(int32_t *)g35) {
													// 0x587dc
													if (g25 == 1) {
														// 0x587e4
														v55 = g23;
														v68 = *(int32_t *)*(int32_t *)(v55 - 0x7650);
														v74 = *(int32_t *)(v55 - 0x76ac);
														v69 = *(int32_t *)*(int32_t *)(v55 - 0x7654);
														v81 = v68 / 2 | v68 & -0x80000000;
														v70 = *(int32_t *)*(int32_t *)(v55 - 0x76a8) + v81;
														g34 = v70;
														function_ebc50(v70, *(int32_t *)v74 + (v69 / 2 | v69 & -0x80000000));
														// branch -> 0x5881c
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							v45 = 1;
						}
					} else {
						// 0x57884
						v57 = v9 - 1;
						v76 = 0x66666667 * (int64_t)v56;
						v80 = (int32_t)(v76 / 0x100000000) >> 31;
						v65 = (v80 & -0x40000000 | (int32_t)(v76 / 0x400000000)) + (int32_t)(v80 < 0);
						v58 = 10 * (v65 - (v57 / 2 | v57 & -0x80000000));
						v60 = v58;
						if (v58 <= 0xffffffff) {
							// 0x578b4
							v60 = 0;
							// branch -> 0x578b8
						}
						// 0x578b8
						v59 = v8 - 1;
						v66 = v61 + v60;
						v67 = v56 - 10 * v65 - (v59 / 2 | v59 & -0x80000000);
						if (v9 > 0) {
							// 0x57990
							v39 = v67 < 0 ? 0 : v67;
							v46 = 1;
							v43 = 0;
							v40 = 0;
							v41 = v66;
							v42 = v60;
							v44 = 1;
							// branch -> 0x57990
							while (true) {
								// 0x57990
								if (v44 != 0) {
									goto lab_0x578f4_7;
								}
								// 0x57998
								if (v46 != 0) {
									// 0x579a0
									if (v52 != 7) {
										// 0x579a8
										if (v52 != 8) {
											// 0x579b0
											if (*(int32_t *)(v61 + 0x5538) == 0) {
												// 0x579c0
												v72 = *(char *)(v61 + 348);
												g25 = 0;
												if (v72 == 0) {
													// 0x579d0
													g34 = 726;
													PlaySFX(726);
													// branch -> 0x57a04
												} else {
													// 0x579dc
													if (v72 == 1) {
														// 0x579e8
														g34 = 623;
														PlaySFX(623);
														// branch -> 0x57a04
													} else {
														// 0x579f4
														if (v72 == 2) {
															// 0x579fc
															g34 = 520;
															PlaySFX(520);
															// branch -> 0x57a04
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						} else {
							v45 = 1;
						}
					}
					// 0x57998
					if (v45 != 0) {
						// 0x579a0
						if (v52 != 7) {
							// 0x579a8
							if (v52 != 8) {
								// 0x579b0
								if (*(int32_t *)(v61 + 0x5538) == 0) {
									// 0x579c0
									v72 = *(char *)(v61 + 348);
									g25 = 0;
									if (v72 == 0) {
										// 0x579d0
										g34 = 726;
										PlaySFX(726);
										// branch -> 0x57a04
									} else {
										// 0x579dc
										if (v72 == 1) {
											// 0x579e8
											g34 = 623;
											PlaySFX(623);
											// branch -> 0x57a04
										} else {
											// 0x579f4
											if (v72 == 2) {
												// 0x579fc
												g34 = 520;
												PlaySFX(520);
												// branch -> 0x57a04
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x57998
				if (v45 != 0) {
					// 0x579a0
					if (v52 != 7) {
						// 0x579a8
						if (v52 != 8) {
							// 0x579b0
							if (*(int32_t *)(v61 + 0x5538) == 0) {
								// 0x579c0
								v72 = *(char *)(v61 + 348);
								g25 = 0;
								if (v72 == 0) {
									// 0x579d0
									g34 = 726;
									PlaySFX(726);
									// branch -> 0x57a04
								} else {
									// 0x579dc
									if (v72 == 1) {
										// 0x579e8
										g34 = 623;
										PlaySFX(623);
										// branch -> 0x57a04
									} else {
										// 0x579f4
										if (v72 == 2) {
											// 0x579fc
											g34 = 520;
											PlaySFX(520);
											// branch -> 0x57a04
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x576e4
			v35 = v36;
			if (v38 >= 4) {
				// 0x576ec
				if (v38 <= 5) {
					// 0x576f4
					g22 = 5;
					v35 = 5;
					// branch -> 0x576f8
				} else {
					v35 = v36;
				}
				// 0x576f8
				v34 = v35;
				if (v38 == 6) {
					// 0x57700
					g22 = 6;
					v34 = 6;
					// branch -> 0x57704
				}
				// 0x57704
				v33 = v34;
				if (v38 >= 7) {
					// 0x5770c
					if (v38 <= 18) {
						// 0x57714
						g22 = 1;
						v33 = 1;
						// branch -> 0x57718
					} else {
						v33 = v34;
					}
				}
				// 0x57718
				v32 = v33;
				if (v38 >= 19) {
					// 0x57720
					if (v38 <= 24) {
						// 0x57728
						g22 = 3;
						v32 = 3;
						// branch -> 0x5772c
					} else {
						v32 = v33;
					}
				}
				// 0x5772c
				v37 = v32;
				if (v38 >= 65) {
					// 0x57734
					if (v38 <= 72) {
						// 0x5773c
						g22 = 8;
						v37 = 8;
						// branch -> 0x57740
					} else {
						v37 = v32;
					}
				}
				// 0x57740
				v61 = v3 + g32;
				v71 = *(char *)(v61 + 0x5491);
				v62 = v71;
				v30 = 0;
				v49 = 0;
				if (v37 == v62) {
					// 0x57758
					v30 = 1;
					v49 = 1;
					// branch -> 0x5775c
				}
				// 0x5775c
				g25 = v30;
				v63 = v62;
				v48 = v49;
				v52 = v37;
				if (v37 == 1) {
					// 0x57764
					if (v71 == 2) {
						// 0x57770
						g22 = 2;
						g25 = 1;
						v63 = 2;
						v48 = 1;
						v52 = 2;
						// branch -> 0x57778
					} else {
						v63 = v62;
						v48 = v49;
						v52 = 1;
					}
				}
				// 0x57778
				v47 = v48;
				if (v63 == 7) {
					// 0x57784
					if (v52 == 8) {
						// 0x5778c
						if (v8 == 1) {
							// 0x57794
							if (v9 == 1) {
								// 0x5779c
								g25 = 1;
								v51 = 1;
								if (*(int32_t *)(76 * *(int32_t *)(v61 + 0x553c) + v5 + 0x3858 + 64) == 0) {
									// 0x577c0
									g25 = 0;
									v51 = 0;
									// branch -> 0x577c4
								}
								// 0x577c4
								v50 = v51;
								if (*(int32_t *)(v61 + 0x5538) == 0) {
									// 0x577d4
									g25 = 0;
									v50 = 0;
									// branch -> 0x577d8
								}
								// 0x577d8
								if (*(int32_t *)(v61 + 0x53dc) == 11) {
									// 0x577e8
									g25 = 0;
									v47 = 0;
									// branch -> 0x577ec
								} else {
									v47 = v50;
								}
							} else {
								v47 = v48;
							}
						} else {
							v47 = v48;
						}
					} else {
						v47 = v48;
					}
				}
				// 0x577ec
				v45 = v47;
				if (v52 == 7) {
					// 0x577f4
					v56 = v38 - 25;
					g33 = 0;
					g25 = 1;
					if (*(int32_t *)(v61 + 0x53dc) == 11) {
						// 0x57810
						v75 = *(char *)(v61 + 0x482c + v56);
						v79 = v75;
						v64 = v75;
						if (v75 != 0) {
							// 0x57854
							if (0x1000000 * v79 < 0) {
								// 0x5787c
								g33 = -v64;
								v45 = 1;
								// branch -> 0x57998
							} else {
								// 0x57860
								if (*(int32_t *)(368 * v64 + v61 + 3392) != 11) {
									// 0x57874
									g33 = v64;
									v45 = 1;
									// branch -> 0x57998
								} else {
									v45 = 1;
								}
							}
							// 0x57998
							if (v45 != 0) {
								// 0x579a0
								if (v52 != 7) {
									// 0x579a8
									if (v52 != 8) {
										// 0x579b0
										if (*(int32_t *)(v61 + 0x5538) == 0) {
											// 0x579c0
											v72 = *(char *)(v61 + 348);
											g25 = 0;
											if (v72 == 0) {
												// 0x579d0
												g34 = 726;
												PlaySFX(726);
												// branch -> 0x57a04
											} else {
												// 0x579dc
												if (v72 == 1) {
													// 0x579e8
													g34 = 623;
													PlaySFX(623);
													// branch -> 0x57a04
												} else {
													// 0x579f4
													if (v72 == 2) {
														// 0x579fc
														g34 = 520;
														PlaySFX(520);
														// branch -> 0x57a04
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							v45 = 1;
						}
					} else {
						// 0x57884
						v57 = v9 - 1;
						v76 = 0x66666667 * (int64_t)v56;
						v80 = (int32_t)(v76 / 0x100000000) >> 31;
						v65 = (v80 & -0x40000000 | (int32_t)(v76 / 0x400000000)) + (int32_t)(v80 < 0);
						v58 = 10 * (v65 - (v57 / 2 | v57 & -0x80000000));
						v60 = v58;
						if (v58 <= 0xffffffff) {
							// 0x578b4
							v60 = 0;
							// branch -> 0x578b8
						}
						// 0x578b8
						v59 = v8 - 1;
						v66 = v61 + v60;
						v67 = v56 - 10 * v65 - (v59 / 2 | v59 & -0x80000000);
						if (v9 > 0) {
							// 0x57990
							v39 = v67 < 0 ? 0 : v67;
							v46 = 1;
							v43 = 0;
							v40 = 0;
							v41 = v66;
							v42 = v60;
							v44 = 1;
							// branch -> 0x57990
							while (true) {
								// 0x57990
								if (v44 != 0) {
									goto lab_0x578f4_7;
								}
								// 0x57998
								if (v46 != 0) {
									// 0x579a0
									if (v52 != 7) {
										// 0x579a8
										if (v52 != 8) {
											// 0x579b0
											if (*(int32_t *)(v61 + 0x5538) == 0) {
												// 0x579c0
												v72 = *(char *)(v61 + 348);
												g25 = 0;
												if (v72 == 0) {
													// 0x579d0
													g34 = 726;
													PlaySFX(726);
													// branch -> 0x57a04
												} else {
													// 0x579dc
													if (v72 == 1) {
														// 0x579e8
														g34 = 623;
														PlaySFX(623);
														// branch -> 0x57a04
													} else {
														// 0x579f4
														if (v72 == 2) {
															// 0x579fc
															g34 = 520;
															PlaySFX(520);
															// branch -> 0x57a04
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						} else {
							v45 = 1;
						}
					}
					// 0x57998
					if (v45 != 0) {
						// 0x579a0
						if (v52 != 7) {
							// 0x579a8
							if (v52 != 8) {
								// 0x579b0
								if (*(int32_t *)(v61 + 0x5538) == 0) {
									// 0x579c0
									v72 = *(char *)(v61 + 348);
									g25 = 0;
									if (v72 == 0) {
										// 0x579d0
										g34 = 726;
										PlaySFX(726);
										// branch -> 0x57a04
									} else {
										// 0x579dc
										if (v72 == 1) {
											// 0x579e8
											g34 = 623;
											PlaySFX(623);
											// branch -> 0x57a04
										} else {
											// 0x579f4
											if (v72 == 2) {
												// 0x579fc
												g34 = 520;
												PlaySFX(520);
												// branch -> 0x57a04
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x57998
				if (v45 != 0) {
					// 0x579a0
					if (v52 != 7) {
						// 0x579a8
						if (v52 != 8) {
							// 0x579b0
							if (*(int32_t *)(v61 + 0x5538) == 0) {
								// 0x579c0
								v72 = *(char *)(v61 + 348);
								g25 = 0;
								if (v72 == 0) {
									// 0x579d0
									g34 = 726;
									PlaySFX(726);
									// branch -> 0x57a04
								} else {
									// 0x579dc
									if (v72 == 1) {
										// 0x579e8
										g34 = 623;
										PlaySFX(623);
										// branch -> 0x57a04
									} else {
										// 0x579f4
										if (v72 == 2) {
											// 0x579fc
											g34 = 520;
											PlaySFX(520);
											// branch -> 0x57a04
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x576f8
			v34 = v35;
			if (v38 == 6) {
				// 0x57700
				g22 = 6;
				v34 = 6;
				// branch -> 0x57704
			}
			// 0x57704
			v33 = v34;
			if (v38 >= 7) {
				// 0x5770c
				if (v38 <= 18) {
					// 0x57714
					g22 = 1;
					v33 = 1;
					// branch -> 0x57718
				} else {
					v33 = v34;
				}
				// 0x57718
				v32 = v33;
				if (v38 >= 19) {
					// 0x57720
					if (v38 <= 24) {
						// 0x57728
						g22 = 3;
						v32 = 3;
						// branch -> 0x5772c
					} else {
						v32 = v33;
					}
				}
				// 0x5772c
				v37 = v32;
				if (v38 >= 65) {
					// 0x57734
					if (v38 <= 72) {
						// 0x5773c
						g22 = 8;
						v37 = 8;
						// branch -> 0x57740
					} else {
						v37 = v32;
					}
				}
				// 0x57740
				v61 = v3 + g32;
				v71 = *(char *)(v61 + 0x5491);
				v62 = v71;
				v30 = 0;
				v49 = 0;
				if (v37 == v62) {
					// 0x57758
					v30 = 1;
					v49 = 1;
					// branch -> 0x5775c
				}
				// 0x5775c
				g25 = v30;
				v63 = v62;
				v48 = v49;
				v52 = v37;
				if (v37 == 1) {
					// 0x57764
					if (v71 == 2) {
						// 0x57770
						g22 = 2;
						g25 = 1;
						v63 = 2;
						v48 = 1;
						v52 = 2;
						// branch -> 0x57778
					} else {
						v63 = v62;
						v48 = v49;
						v52 = 1;
					}
				}
				// 0x57778
				v47 = v48;
				if (v63 == 7) {
					// 0x57784
					if (v52 == 8) {
						// 0x5778c
						if (v8 == 1) {
							// 0x57794
							if (v9 == 1) {
								// 0x5779c
								g25 = 1;
								v51 = 1;
								if (*(int32_t *)(76 * *(int32_t *)(v61 + 0x553c) + v5 + 0x3858 + 64) == 0) {
									// 0x577c0
									g25 = 0;
									v51 = 0;
									// branch -> 0x577c4
								}
								// 0x577c4
								v50 = v51;
								if (*(int32_t *)(v61 + 0x5538) == 0) {
									// 0x577d4
									g25 = 0;
									v50 = 0;
									// branch -> 0x577d8
								}
								// 0x577d8
								if (*(int32_t *)(v61 + 0x53dc) == 11) {
									// 0x577e8
									g25 = 0;
									v47 = 0;
									// branch -> 0x577ec
								} else {
									v47 = v50;
								}
							} else {
								v47 = v48;
							}
						} else {
							v47 = v48;
						}
					} else {
						v47 = v48;
					}
				}
				// 0x577ec
				v45 = v47;
				if (v52 == 7) {
					// 0x577f4
					v56 = v38 - 25;
					g33 = 0;
					g25 = 1;
					if (*(int32_t *)(v61 + 0x53dc) == 11) {
						// 0x57810
						v75 = *(char *)(v61 + 0x482c + v56);
						v79 = v75;
						v64 = v75;
						if (v75 != 0) {
							// 0x57854
							if (0x1000000 * v79 < 0) {
								// 0x5787c
								g33 = -v64;
								v45 = 1;
								// branch -> 0x57998
							} else {
								// 0x57860
								if (*(int32_t *)(368 * v64 + v61 + 3392) != 11) {
									// 0x57874
									g33 = v64;
									v45 = 1;
									// branch -> 0x57998
								} else {
									v45 = 1;
								}
							}
							// 0x57998
							if (v45 != 0) {
								// 0x579a0
								if (v52 != 7) {
									// 0x579a8
									if (v52 != 8) {
										// 0x579b0
										if (*(int32_t *)(v61 + 0x5538) == 0) {
											// 0x579c0
											v72 = *(char *)(v61 + 348);
											g25 = 0;
											if (v72 == 0) {
												// 0x579d0
												g34 = 726;
												PlaySFX(726);
												// branch -> 0x57a04
											} else {
												// 0x579dc
												if (v72 == 1) {
													// 0x579e8
													g34 = 623;
													PlaySFX(623);
													// branch -> 0x57a04
												} else {
													// 0x579f4
													if (v72 == 2) {
														// 0x579fc
														g34 = 520;
														PlaySFX(520);
														// branch -> 0x57a04
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							v45 = 1;
						}
					} else {
						// 0x57884
						v57 = v9 - 1;
						v76 = 0x66666667 * (int64_t)v56;
						v80 = (int32_t)(v76 / 0x100000000) >> 31;
						v65 = (v80 & -0x40000000 | (int32_t)(v76 / 0x400000000)) + (int32_t)(v80 < 0);
						v58 = 10 * (v65 - (v57 / 2 | v57 & -0x80000000));
						v60 = v58;
						if (v58 <= 0xffffffff) {
							// 0x578b4
							v60 = 0;
							// branch -> 0x578b8
						}
						// 0x578b8
						v59 = v8 - 1;
						v66 = v61 + v60;
						v67 = v56 - 10 * v65 - (v59 / 2 | v59 & -0x80000000);
						if (v9 > 0) {
							// 0x57990
							v39 = v67 < 0 ? 0 : v67;
							v46 = 1;
							v43 = 0;
							v40 = 0;
							v41 = v66;
							v42 = v60;
							v44 = 1;
							// branch -> 0x57990
							while (true) {
								// 0x57990
								if (v44 != 0) {
									goto lab_0x578f4_7;
								}
								// 0x57998
								if (v46 != 0) {
									// 0x579a0
									if (v52 != 7) {
										// 0x579a8
										if (v52 != 8) {
											// 0x579b0
											if (*(int32_t *)(v61 + 0x5538) == 0) {
												// 0x579c0
												v72 = *(char *)(v61 + 348);
												g25 = 0;
												if (v72 == 0) {
													// 0x579d0
													g34 = 726;
													PlaySFX(726);
													// branch -> 0x57a04
												} else {
													// 0x579dc
													if (v72 == 1) {
														// 0x579e8
														g34 = 623;
														PlaySFX(623);
														// branch -> 0x57a04
													} else {
														// 0x579f4
														if (v72 == 2) {
															// 0x579fc
															g34 = 520;
															PlaySFX(520);
															// branch -> 0x57a04
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						} else {
							v45 = 1;
						}
					}
					// 0x57998
					if (v45 != 0) {
						// 0x579a0
						if (v52 != 7) {
							// 0x579a8
							if (v52 != 8) {
								// 0x579b0
								if (*(int32_t *)(v61 + 0x5538) == 0) {
									// 0x579c0
									v72 = *(char *)(v61 + 348);
									g25 = 0;
									if (v72 == 0) {
										// 0x579d0
										g34 = 726;
										PlaySFX(726);
										// branch -> 0x57a04
									} else {
										// 0x579dc
										if (v72 == 1) {
											// 0x579e8
											g34 = 623;
											PlaySFX(623);
											// branch -> 0x57a04
										} else {
											// 0x579f4
											if (v72 == 2) {
												// 0x579fc
												g34 = 520;
												PlaySFX(520);
												// branch -> 0x57a04
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x57998
				if (v45 != 0) {
					// 0x579a0
					if (v52 != 7) {
						// 0x579a8
						if (v52 != 8) {
							// 0x579b0
							if (*(int32_t *)(v61 + 0x5538) == 0) {
								// 0x579c0
								v72 = *(char *)(v61 + 348);
								g25 = 0;
								if (v72 == 0) {
									// 0x579d0
									g34 = 726;
									PlaySFX(726);
									// branch -> 0x57a04
								} else {
									// 0x579dc
									if (v72 == 1) {
										// 0x579e8
										g34 = 623;
										PlaySFX(623);
										// branch -> 0x57a04
									} else {
										// 0x579f4
										if (v72 == 2) {
											// 0x579fc
											g34 = 520;
											PlaySFX(520);
											// branch -> 0x57a04
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x57718
			v32 = v33;
			if (v38 >= 19) {
				// 0x57720
				if (v38 <= 24) {
					// 0x57728
					g22 = 3;
					v32 = 3;
					// branch -> 0x5772c
				} else {
					v32 = v33;
				}
				// 0x5772c
				v37 = v32;
				if (v38 >= 65) {
					// 0x57734
					if (v38 <= 72) {
						// 0x5773c
						g22 = 8;
						v37 = 8;
						// branch -> 0x57740
					} else {
						v37 = v32;
					}
				}
				// 0x57740
				v61 = v3 + g32;
				v71 = *(char *)(v61 + 0x5491);
				v62 = v71;
				v30 = 0;
				v49 = 0;
				if (v37 == v62) {
					// 0x57758
					v30 = 1;
					v49 = 1;
					// branch -> 0x5775c
				}
				// 0x5775c
				g25 = v30;
				v63 = v62;
				v48 = v49;
				v52 = v37;
				if (v37 == 1) {
					// 0x57764
					if (v71 == 2) {
						// 0x57770
						g22 = 2;
						g25 = 1;
						v63 = 2;
						v48 = 1;
						v52 = 2;
						// branch -> 0x57778
					} else {
						v63 = v62;
						v48 = v49;
						v52 = 1;
					}
				}
				// 0x57778
				v47 = v48;
				if (v63 == 7) {
					// 0x57784
					if (v52 == 8) {
						// 0x5778c
						if (v8 == 1) {
							// 0x57794
							if (v9 == 1) {
								// 0x5779c
								g25 = 1;
								v51 = 1;
								if (*(int32_t *)(76 * *(int32_t *)(v61 + 0x553c) + v5 + 0x3858 + 64) == 0) {
									// 0x577c0
									g25 = 0;
									v51 = 0;
									// branch -> 0x577c4
								}
								// 0x577c4
								v50 = v51;
								if (*(int32_t *)(v61 + 0x5538) == 0) {
									// 0x577d4
									g25 = 0;
									v50 = 0;
									// branch -> 0x577d8
								}
								// 0x577d8
								if (*(int32_t *)(v61 + 0x53dc) == 11) {
									// 0x577e8
									g25 = 0;
									v47 = 0;
									// branch -> 0x577ec
								} else {
									v47 = v50;
								}
							} else {
								v47 = v48;
							}
						} else {
							v47 = v48;
						}
					} else {
						v47 = v48;
					}
				}
				// 0x577ec
				v45 = v47;
				if (v52 == 7) {
					// 0x577f4
					v56 = v38 - 25;
					g33 = 0;
					g25 = 1;
					if (*(int32_t *)(v61 + 0x53dc) == 11) {
						// 0x57810
						v75 = *(char *)(v61 + 0x482c + v56);
						v79 = v75;
						v64 = v75;
						if (v75 != 0) {
							// 0x57854
							if (0x1000000 * v79 < 0) {
								// 0x5787c
								g33 = -v64;
								v45 = 1;
								// branch -> 0x57998
							} else {
								// 0x57860
								if (*(int32_t *)(368 * v64 + v61 + 3392) != 11) {
									// 0x57874
									g33 = v64;
									v45 = 1;
									// branch -> 0x57998
								} else {
									v45 = 1;
								}
							}
							// 0x57998
							if (v45 != 0) {
								// 0x579a0
								if (v52 != 7) {
									// 0x579a8
									if (v52 != 8) {
										// 0x579b0
										if (*(int32_t *)(v61 + 0x5538) == 0) {
											// 0x579c0
											v72 = *(char *)(v61 + 348);
											g25 = 0;
											if (v72 == 0) {
												// 0x579d0
												g34 = 726;
												PlaySFX(726);
												// branch -> 0x57a04
											} else {
												// 0x579dc
												if (v72 == 1) {
													// 0x579e8
													g34 = 623;
													PlaySFX(623);
													// branch -> 0x57a04
												} else {
													// 0x579f4
													if (v72 == 2) {
														// 0x579fc
														g34 = 520;
														PlaySFX(520);
														// branch -> 0x57a04
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							v45 = 1;
						}
					} else {
						// 0x57884
						v57 = v9 - 1;
						v76 = 0x66666667 * (int64_t)v56;
						v80 = (int32_t)(v76 / 0x100000000) >> 31;
						v65 = (v80 & -0x40000000 | (int32_t)(v76 / 0x400000000)) + (int32_t)(v80 < 0);
						v58 = 10 * (v65 - (v57 / 2 | v57 & -0x80000000));
						v60 = v58;
						if (v58 <= 0xffffffff) {
							// 0x578b4
							v60 = 0;
							// branch -> 0x578b8
						}
						// 0x578b8
						v59 = v8 - 1;
						v66 = v61 + v60;
						v67 = v56 - 10 * v65 - (v59 / 2 | v59 & -0x80000000);
						if (v9 > 0) {
							// 0x57990
							v39 = v67 < 0 ? 0 : v67;
							v46 = 1;
							v43 = 0;
							v40 = 0;
							v41 = v66;
							v42 = v60;
							v44 = 1;
							// branch -> 0x57990
							while (true) {
								// 0x57990
								if (v44 != 0) {
									goto lab_0x578f4_7;
								}
								// 0x57998
								if (v46 != 0) {
									// 0x579a0
									if (v52 != 7) {
										// 0x579a8
										if (v52 != 8) {
											// 0x579b0
											if (*(int32_t *)(v61 + 0x5538) == 0) {
												// 0x579c0
												v72 = *(char *)(v61 + 348);
												g25 = 0;
												if (v72 == 0) {
													// 0x579d0
													g34 = 726;
													PlaySFX(726);
													// branch -> 0x57a04
												} else {
													// 0x579dc
													if (v72 == 1) {
														// 0x579e8
														g34 = 623;
														PlaySFX(623);
														// branch -> 0x57a04
													} else {
														// 0x579f4
														if (v72 == 2) {
															// 0x579fc
															g34 = 520;
															PlaySFX(520);
															// branch -> 0x57a04
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						} else {
							v45 = 1;
						}
					}
					// 0x57998
					if (v45 != 0) {
						// 0x579a0
						if (v52 != 7) {
							// 0x579a8
							if (v52 != 8) {
								// 0x579b0
								if (*(int32_t *)(v61 + 0x5538) == 0) {
									// 0x579c0
									v72 = *(char *)(v61 + 348);
									g25 = 0;
									if (v72 == 0) {
										// 0x579d0
										g34 = 726;
										PlaySFX(726);
										// branch -> 0x57a04
									} else {
										// 0x579dc
										if (v72 == 1) {
											// 0x579e8
											g34 = 623;
											PlaySFX(623);
											// branch -> 0x57a04
										} else {
											// 0x579f4
											if (v72 == 2) {
												// 0x579fc
												g34 = 520;
												PlaySFX(520);
												// branch -> 0x57a04
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x57998
				if (v45 != 0) {
					// 0x579a0
					if (v52 != 7) {
						// 0x579a8
						if (v52 != 8) {
							// 0x579b0
							if (*(int32_t *)(v61 + 0x5538) == 0) {
								// 0x579c0
								v72 = *(char *)(v61 + 348);
								g25 = 0;
								if (v72 == 0) {
									// 0x579d0
									g34 = 726;
									PlaySFX(726);
									// branch -> 0x57a04
								} else {
									// 0x579dc
									if (v72 == 1) {
										// 0x579e8
										g34 = 623;
										PlaySFX(623);
										// branch -> 0x57a04
									} else {
										// 0x579f4
										if (v72 == 2) {
											// 0x579fc
											g34 = 520;
											PlaySFX(520);
											// branch -> 0x57a04
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x5772c
			v37 = v32;
			if (v38 >= 65) {
				// 0x57734
				if (v38 <= 72) {
					// 0x5773c
					g22 = 8;
					v37 = 8;
					// branch -> 0x57740
				} else {
					v37 = v32;
				}
				// 0x57740
				v61 = v3 + g32;
				v71 = *(char *)(v61 + 0x5491);
				v62 = v71;
				v30 = 0;
				if (v37 == v62) {
					// 0x57758
					v30 = 1;
					// branch -> 0x5775c
				}
				// 0x5775c
				g25 = v30;
				v63 = v62;
				v52 = v37;
				if (v37 == 1) {
					// 0x57764
					if (v71 == 2) {
						// 0x57770
						g22 = 2;
						g25 = 1;
						v63 = 2;
						v52 = 2;
						// branch -> 0x57778
					} else {
						v63 = v62;
						v52 = 1;
					}
				}
				// 0x57778
				if (v63 == 7) {
					// 0x57784
					if (v52 == 8) {
						// 0x5778c
						if (v8 == 1) {
							// 0x57794
							if (v9 == 1) {
								// 0x5779c
								g25 = 1;
								if (*(int32_t *)(76 * *(int32_t *)(v61 + 0x553c) + v5 + 0x3858 + 64) == 0) {
									// 0x577c0
									g25 = 0;
									// branch -> 0x577c4
								}
								// 0x577c4
								if (*(int32_t *)(v61 + 0x5538) == 0) {
									// 0x577d4
									g25 = 0;
									// branch -> 0x577d8
								}
								// 0x577d8
								if (*(int32_t *)(v61 + 0x53dc) == 11) {
									// 0x577e8
									g25 = 0;
									// branch -> 0x577ec
								}
							}
						}
					}
				}
				// 0x577ec
				if (v52 == 7) {
					// 0x577f4
					v56 = v38 - 25;
					g33 = 0;
					g25 = 1;
					if (*(int32_t *)(v61 + 0x53dc) == 11) {
						// 0x57810
						v75 = *(char *)(v61 + 0x482c + v56);
						v79 = v75;
						v64 = v75;
						if (v75 != 0) {
							// 0x57854
							if (0x1000000 * v79 < 0) {
								// 0x5787c
								g33 = -v64;
								// branch -> 0x57998
							} else {
								// 0x57860
								if (*(int32_t *)(368 * v64 + v61 + 3392) != 11) {
									// 0x57874
									g33 = v64;
									// branch -> 0x57998
								}
							}
							// 0x579a0
							if (v52 != 7) {
								// 0x579a8
								if (v52 != 8) {
									// 0x579b0
									if (*(int32_t *)(v61 + 0x5538) == 0) {
										// 0x579c0
										v72 = *(char *)(v61 + 348);
										g25 = 0;
										if (v72 == 0) {
											// 0x579d0
											g34 = 726;
											PlaySFX(726);
											// branch -> 0x57a04
										} else {
											// 0x579dc
											if (v72 == 1) {
												// 0x579e8
												g34 = 623;
												PlaySFX(623);
												// branch -> 0x57a04
											} else {
												// 0x579f4
												if (v72 == 2) {
													// 0x579fc
													g34 = 520;
													PlaySFX(520);
													// branch -> 0x57a04
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					} else {
						// 0x57884
						v57 = v9 - 1;
						v76 = 0x66666667 * (int64_t)v56;
						v80 = (int32_t)(v76 / 0x100000000) >> 31;
						v65 = (v80 & -0x40000000 | (int32_t)(v76 / 0x400000000)) + (int32_t)(v80 < 0);
						v58 = 10 * (v65 - (v57 / 2 | v57 & -0x80000000));
						v60 = v58;
						if (v58 <= 0xffffffff) {
							// 0x578b4
							v60 = 0;
							// branch -> 0x578b8
						}
						// 0x578b8
						v59 = v8 - 1;
						v66 = v61 + v60;
						v67 = v56 - 10 * v65 - (v59 / 2 | v59 & -0x80000000);
						if (v9 > 0) {
							// 0x57990
							v39 = v67 < 0 ? 0 : v67;
							v46 = 1;
							v43 = 0;
							v40 = 0;
							v41 = v66;
							v42 = v60;
							v44 = 1;
							// branch -> 0x57990
							while (true) {
								// 0x57990
								if (v44 != 0) {
									goto lab_0x578f4_7;
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x57740
			v61 = v3 + g32;
			v71 = *(char *)(v61 + 0x5491);
			v62 = v71;
			v30 = 0;
			if (v37 == v62) {
				// 0x57758
				v30 = 1;
				// branch -> 0x5775c
			}
			// 0x5775c
			g25 = v30;
			v63 = v62;
			v52 = v37;
			if (v37 == 1) {
				// 0x57764
				if (v71 == 2) {
					// 0x57770
					g22 = 2;
					g25 = 1;
					v63 = 2;
					v52 = 2;
					// branch -> 0x57778
				} else {
					v63 = v62;
					v52 = 1;
				}
			}
			// 0x57778
			if (v63 == 7) {
				// 0x57784
				if (v52 == 8) {
					// 0x5778c
					if (v8 == 1) {
						// 0x57794
						if (v9 == 1) {
							// 0x5779c
							g25 = 1;
							if (*(int32_t *)(76 * *(int32_t *)(v61 + 0x553c) + v5 + 0x3858 + 64) == 0) {
								// 0x577c0
								g25 = 0;
								// branch -> 0x577c4
							}
							// 0x577c4
							if (*(int32_t *)(v61 + 0x5538) == 0) {
								// 0x577d4
								g25 = 0;
								// branch -> 0x577d8
							}
							// 0x577d8
							if (*(int32_t *)(v61 + 0x53dc) == 11) {
								// 0x577e8
								g25 = 0;
								// branch -> 0x577ec
							}
						}
					}
				}
			}
			// 0x577ec
			if (v52 == 7) {
				// 0x577f4
				v56 = v38 - 25;
				g33 = 0;
				g25 = 1;
				if (*(int32_t *)(v61 + 0x53dc) == 11) {
					// 0x57810
					v75 = *(char *)(v61 + 0x482c + v56);
					v79 = v75;
					v64 = v75;
					if (v75 != 0) {
						// 0x57854
						if (0x1000000 * v79 < 0) {
							// 0x5787c
							g33 = -v64;
							// branch -> 0x57998
						} else {
							// 0x57860
							if (*(int32_t *)(368 * v64 + v61 + 3392) != 11) {
								// 0x57874
								g33 = v64;
								// branch -> 0x57998
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				} else {
					// 0x57884
					v57 = v9 - 1;
					v76 = 0x66666667 * (int64_t)v56;
					v80 = (int32_t)(v76 / 0x100000000) >> 31;
					v65 = (v80 & -0x40000000 | (int32_t)(v76 / 0x400000000)) + (int32_t)(v80 < 0);
					v58 = 10 * (v65 - (v57 / 2 | v57 & -0x80000000));
					v60 = v58;
					if (v58 <= 0xffffffff) {
						// 0x578b4
						v60 = 0;
						// branch -> 0x578b8
					}
					// 0x578b8
					v59 = v8 - 1;
					v66 = v61 + v60;
					v67 = v56 - 10 * v65 - (v59 / 2 | v59 & -0x80000000);
					if (v9 > 0) {
						// 0x57990
						v39 = v67 < 0 ? 0 : v67;
						v46 = 1;
						v43 = 0;
						v40 = 0;
						v41 = v66;
						v42 = v60;
						v44 = 1;
						// branch -> 0x57990
						while (true) {
							// 0x57990
							if (v44 != 0) {
								goto lab_0x578f4_7;
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
}

// Address range: 0x58838 - 0x5895c
int32_t function_58838(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	// 0x58838
	g36 = a2;
	g35 = a1;
	g33 = g41;
	function_60590(127, a3, (int16_t)a4, a5, 0);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * g35;                    // 0x58884
	int32_t v2 = 46;                                                           // ctr
	int32_t v3 = v1 + 0x53cc;                                                  // 0x588a0
	int32_t v4 = *(int32_t *)(g23 - 0x7690) + (int32_t) "MoveWindow" - 0x4978; // 0x58898
	// branch -> 0x58898
	while (true) {
		int32_t v5 = v4 + 8; // 0x58898
		int32_t v6 = v3 + 8; // 0x588a0
		*(int32_t *)v6 = *(int32_t *)v5;
		*(int32_t *)(v3 + 12) = *(int32_t *)(v4 + 12);
		int32_t v7 = v2 - 1; // 0x588a8
		v2 = v7;
		if (v7 == 0) {
			// 0x588ac
			if (g33 != 0) {
				// 0x588b4
				*(int32_t *)(v1 + 0x540c) = 1;
				// branch -> 0x588bc
			}
			uint32_t v8 = g36 % 256; // 0x588bc
			if (v8 > 6) {
				// 0x58934
				return function_5cfd4(g35, 1);
			}
			// 0x588c8
			v2 = 46;
			int32_t v9 = v1 + 368 * v8 + 1168; // 0x588e8
			int32_t v10 = v1 + 0x53cc;         // 0x588e0
			// branch -> 0x588e0
			while (true) {
				int32_t v11 = v10 + 8; // 0x588e0
				int32_t v12 = v9 + 8;  // 0x588e8
				*(int32_t *)v12 = *(int32_t *)v11;
				*(int32_t *)(v9 + 12) = *(int32_t *)(v10 + 12);
				int32_t v13 = v2 - 1; // 0x588f0
				v2 = v13;
				if (v13 == 0) {
					int32_t v14 = g36 % 256; // 0x588f4
					if (v14 == 4) {
						// 0x58900
						if (*(char *)(v1 + 0x5491) == 2) {
							// 0x5890c
							*(int32_t *)(v1 + 3024) = -1;
							// branch -> 0x58934
							// 0x58934
							return function_5cfd4(g35, 1);
						}
					} else {
						// 0x58918
						if (v14 == 5) {
							// 0x58920
							if (*(char *)(v1 + 0x5491) == 2) {
								// 0x5892c
								*(int32_t *)(v1 + 2656) = -1;
								// branch -> 0x58934
								// 0x58934
								return function_5cfd4(g35, 1);
							}
						}
					}
					// 0x58934
					return function_5cfd4(g35, 1);
				}
				// 0x588e0
				v9 = v12;
				v10 = v11;
				// branch -> 0x588e0
			}
		} else {
			// 0x58898
			v3 = v6;
			v4 = v5;
			// branch -> 0x58898
			continue;
		}
	}
}

// Address range: 0x5895c - 0x59170
int32_t CheckInvCut(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = result; // 0x58964
	g28 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0x58968
	g36 = v2;
	int32_t v3 = 0x55ec * v1; // 0x5896c
	g35 = v3;
	int32_t v4 = g23 + 0x35ec; // r6
	int32_t v5 = v2 + v3;      // 0x58980
	g33 = v5;
	if (*(int32_t *)v5 > 3) {
		// 0x5915c
		return result;
	}
	int32_t *v6 = (int32_t *)*(int32_t *)(g23 - 0x7704); // 0x58998
	if (*v6 != 0) {
		// 0x589a4
		result = *(int32_t *)(g23 - 0x7708);
		*v6 = 0;
		*(int32_t *)result = 0;
		// branch -> 0x589b4
	}
	// 0x589b4
	g31 = 0;
	int32_t v7 = 0; // 0x58a149
	int32_t v8 = 0; // 0x589fc
	int32_t v9 = 0; // 0x58a0c
	// branch -> 0x58a0c
	while (true) {
		int32_t v10 = v8; // 0x58a1c
		int32_t v11 = v7; // 0x58a14
		if (v9 == 0) {
			int32_t v12 = v4 + 8 * v8;      // 0x589c4
			uint32_t v13 = *(int32_t *)v12; // 0x589c8
			result = v13;
			int32_t v14 = a2; // 0x589cc
			int32_t v15 = v7; // 0x58a1411
			int32_t v16 = v8; // 0x58a00
			int32_t v17 = 0;  // 0x58a0c5
			if (v14 >= v13) {
				// 0x589d4
				if (v14 < v13 + 29) {
					int32_t v18 = *(int32_t *)(v12 + 4); // 0x589e0
					result = v18;
					int32_t v19 = a3; // 0x589e8
					if (v19 >= v18 - 29 == v19 < v18) {
						// 0x589f8
						v15 = 1;
						v16 = v8 - 1;
						v17 = 1;
						// branch -> 0x58a00
					} else {
						v15 = v7;
						v16 = v8;
						v17 = 0;
					}
				} else {
					v15 = v7;
					v16 = v8;
					v17 = 0;
				}
			}
			int32_t v20 = v16 + 1; // 0x58a00
			g31 = v20;
			if (v20 > 72) {
				// break -> 0x58a14
				break;
			}
			v7 = v15;
			v8 = v20;
			v9 = v17;
			// continue -> 0x58a0c
			continue;
		}
		// 0x58a14
		if (v11 == 0) {
			// 0x5915c
			return result;
		}
		int32_t v21 = g36 + 0x53dc + g35; // 0x58a28
		*(int32_t *)v21 = -1;
		g32 = v21;
		int32_t v22; // ctr
		int32_t v23; // r0
		int32_t v24; // r4
		int32_t v25; // r7
		int32_t v26;
		int32_t v27;
		int32_t v28;     // 0x58a84
		int32_t v29;     // 0x58abc
		int32_t v30;     // 0x58ad8
		int32_t v31;     // 0x58b10
		int32_t v32;     // 0x58b2c
		int32_t v33;     // 0x58b64
		int32_t v34;     // 0x58b88
		int32_t v35;     // 0x58bc0
		int32_t v36;     // 0x58be4
		int32_t v37;     // 0x58c1c
		int32_t v38;     // 0x58c40
		int32_t v39;     // 0x58c78
		int32_t v40;     // 0x58ca8
		int32_t v41;     // 0x58ce0
		int32_t v42;     // 0x58cfc
		uint32_t v43;    // 0x59058
		int32_t v44;     // 0x59094
		int32_t v45;     // 0x5911c
		int32_t v46;     // 0x58a90
		int32_t v47;     // 0x58abc
		int32_t v48;     // 0x58ac4
		int32_t v49;     // 0x58acc
		int32_t v50;     // 0x58ae4
		int32_t v51;     // 0x58b10
		int32_t v52;     // 0x58b18
		int32_t v53;     // 0x58b20
		int32_t v54;     // 0x58b38
		int32_t v55;     // 0x58b64
		int32_t v56;     // 0x58b6c
		int32_t v57;     // 0x58b74
		int32_t v58;     // 0x58b94
		int32_t v59;     // 0x58bc0
		int32_t v60;     // 0x58bc8
		int32_t v61;     // 0x58bd0
		int32_t v62;     // 0x58bf0
		int32_t v63;     // 0x58c1c
		int32_t v64;     // 0x58c24
		int32_t v65;     // 0x58c2c
		int32_t v66;     // 0x58c4c
		int32_t v67;     // 0x58c78
		int32_t v68;     // 0x58c80
		int32_t v69;     // 0x58c88
		int32_t v70;     // 0x58ca8
		int32_t v71;     // 0x58cac
		int32_t v72;     // 0x59068
		int32_t v73;     // 0x5906c
		int32_t v74;     // 0x59094
		int32_t v75;     // 0x5909c
		int32_t v76;     // 0x590a4
		int32_t v77;     // 0x58a70
		int32_t v78;     // 0x58aac
		int32_t v79;     // 0x58ac4
		int32_t v80;     // 0x58b00
		int32_t v81;     // 0x58b18
		int32_t v82;     // 0x58b54
		int32_t v83;     // 0x58b6c
		int32_t v84;     // 0x58bb0
		int32_t v85;     // 0x58bc8
		int32_t v86;     // 0x58c0c
		int32_t v87;     // 0x58c24
		int32_t v88;     // 0x58c68
		int32_t v89;     // 0x58c80
		int32_t v90;     // 0x58cc4
		char *v91;       // 0x58cf4
		int32_t v92;     // 0x58cf8
		int32_t v93;     // 0x58d0c
		int32_t v94;     // 0x59064
		int32_t v95;     // 0x5909c
		int32_t v96;     // 0x590bc
		uint32_t v97;    // 0x59124
		uint32_t v98;    // 0x59128
		int32_t v99;     // 0x59134
		int32_t v100;    // 0x59138
		int32_t result2; // 0x590f4
		char v101;       // 0x58cc0
		if (v10 >= 0) {
			// 0x58a30
			if (g31 <= 3) {
				int32_t v102 = g35 + g36 + 1184; // 0x58a3c
				g27 = v102;
				if (*(int32_t *)v102 != -1) {
					// 0x58a48
					function_8bce4(0, 0);
					int32_t v103 = g35 + g36; // 0x58a58
					v22 = 46;
					int32_t v104 = v103 + 0x53cc; // 0x58a70
					int32_t v105 = v103 + 1168;   // 0x58a68
					// branch -> 0x58a68
					while (true) {
						int32_t v106 = v105 + 8; // 0x58a68
						v24 = v106;
						v77 = v104 + 8;
						*(int32_t *)v77 = *(int32_t *)v106;
						*(int32_t *)(v104 + 12) = *(int32_t *)(v105 + 12);
						int32_t v107 = v22 - 1; // 0x58a78
						v22 = v107;
						if (v107 == 0) {
							// 0x58a7c
							*(int32_t *)g27 = -1;
							// branch -> 0x58a84
							// 0x58a84
							v28 = g31;
							v30 = v28;
							if (v28 == 4) {
								// 0x58a8c
								v46 = g35 + g36 + 1552;
								g27 = v46;
								if (*(int32_t *)v46 != -1) {
									// 0x58a9c
									function_8bce4(0, 1);
									v78 = g35 + g36;
									v22 = 46;
									v48 = v78 + 0x53cc;
									v29 = v78 + 1536;
									// branch -> 0x58abc
									while (true) {
										// 0x58abc
										v47 = v29 + 8;
										v79 = v48 + 8;
										*(int32_t *)v79 = *(int32_t *)v47;
										*(int32_t *)(v48 + 12) = *(int32_t *)(v29 + 12);
										v49 = v22 - 1;
										v22 = v49;
										if (v49 == 0) {
											// 0x58ad0
											*(int32_t *)g27 = -1;
											v30 = g31;
											// branch -> 0x58ad8
											// 0x58ad8
											v32 = v30;
											if (v30 == 5) {
												// 0x58ae0
												v50 = g35 + g36 + 1920;
												g27 = v50;
												if (*(int32_t *)v50 != -1) {
													// 0x58af0
													function_8bce4(0, 2);
													v80 = g35 + g36;
													v22 = 46;
													v52 = v80 + 0x53cc;
													v31 = v80 + 1904;
													// branch -> 0x58b10
													while (true) {
														// 0x58b10
														v51 = v31 + 8;
														int32_t v108 = *(int32_t *)v51; // 0x58b10
														result = v108;
														v81 = v52 + 8;
														*(int32_t *)v81 = v108;
														*(int32_t *)(v52 + 12) = *(int32_t *)(v31 + 12);
														v53 = v22 - 1;
														v22 = v53;
														if (v53 == 0) {
															// 0x58b24
															*(int32_t *)g27 = -1;
															v32 = g31;
															// branch -> 0x58b2c
															// 0x58b2c
															v34 = v32;
															int32_t v109; // 0x58cb0
															if (v32 == 6) {
																// 0x58b34
																v54 = g35 + g36 + 2288;
																g27 = v54;
																if (*(int32_t *)v54 != -1) {
																	// 0x58b44
																	function_8bce4(0, 3);
																	v82 = g35 + g36;
																	v22 = 46;
																	v56 = v82 + 0x53cc;
																	v33 = v82 + 2272;
																	// branch -> 0x58b64
																	while (true) {
																		// 0x58b64
																		v55 = v33 + 8;
																		int32_t v110 = *(int32_t *)v55; // 0x58b64
																		result = v110;
																		v83 = v56 + 8;
																		*(int32_t *)v83 = v110;
																		*(int32_t *)(v56 + 12) = *(int32_t *)(v33 + 12);
																		v57 = v22 - 1;
																		v22 = v57;
																		if (v57 == 0) {
																			// 0x58b78
																			*(int32_t *)g27 = -1;
																			v34 = g31;
																			// branch -> 0x58b80
																			// 0x58b80
																			v36 = v34;
																			if (v34 >= 7) {
																				// 0x58b88
																				if (v34 <= 12) {
																					// 0x58b90
																					v58 = g35 + g36 + 2656;
																					g27 = v58;
																					if (*(int32_t *)v58 != -1) {
																						// 0x58ba0
																						function_8bce4(0, 4);
																						v84 = g35 + g36;
																						v22 = 46;
																						v60 = v84 + 0x53cc;
																						v35 = v84 + 2640;
																						// branch -> 0x58bc0
																						while (true) {
																							// 0x58bc0
																							v59 = v35 + 8;
																							int32_t v111 = *(int32_t *)v59; // 0x58bc0
																							result = v111;
																							v85 = v60 + 8;
																							*(int32_t *)v85 = v111;
																							*(int32_t *)(v60 + 12) = *(int32_t *)(v35 + 12);
																							v61 = v22 - 1;
																							v22 = v61;
																							if (v61 == 0) {
																								// 0x58bd4
																								*(int32_t *)g27 = -1;
																								v36 = g31;
																								// branch -> 0x58bdc
																								// 0x58bdc
																								v38 = v36;
																								if (v36 >= 13) {
																									// 0x58be4
																									if (v36 <= 18) {
																										// 0x58bec
																										v62 = g35 + g36 + 3024;
																										g27 = v62;
																										if (*(int32_t *)v62 != -1) {
																											// 0x58bfc
																											function_8bce4(0, 5);
																											v86 = g35 + g36;
																											v22 = 46;
																											v64 = v86 + 0x53cc;
																											v37 = v86 + 3008;
																											// branch -> 0x58c1c
																											while (true) {
																												// 0x58c1c
																												v63 = v37 + 8;
																												int32_t v112 = *(int32_t *)v63; // 0x58c1c
																												result = v112;
																												v87 = v64 + 8;
																												*(int32_t *)v87 = v112;
																												*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
																												v65 = v22 - 1;
																												v22 = v65;
																												if (v65 == 0) {
																													// 0x58c30
																													*(int32_t *)g27 = -1;
																													v38 = g31;
																													// branch -> 0x58c38
																													// 0x58c38
																													v40 = v38;
																													if (v38 >= 19) {
																														// 0x58c40
																														if (v38 <= 24) {
																															// 0x58c48
																															v66 = g35 + g36 + 3392;
																															g27 = v66;
																															if (*(int32_t *)v66 != -1) {
																																// 0x58c58
																																function_8bce4(0, 6);
																																v88 = g35 + g36;
																																v22 = 46;
																																v68 = v88 + 0x53cc;
																																v39 = v88 + 3376;
																																// branch -> 0x58c78
																																while (true) {
																																	// 0x58c78
																																	v67 = v39 + 8;
																																	int32_t v113 = *(int32_t *)v67; // 0x58c78
																																	result = v113;
																																	v89 = v68 + 8;
																																	*(int32_t *)v89 = v113;
																																	*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
																																	v69 = v22 - 1;
																																	v22 = v69;
																																	if (v69 == 0) {
																																		// 0x58c8c
																																		*(int32_t *)g27 = -1;
																																		v40 = g31;
																																		// branch -> 0x58c94
																																		// 0x58c94
																																		if (v40 >= 25) {
																																			// 0x58c9c
																																			if (v40 <= 64) {
																																				// 0x58ca4
																																				v71 = g36 + 0x482c + g35;
																																				v109 = v71 + v40;
																																				result = v109;
																																				if (*(char *)(v109 - 25) != 0) {
																																					// 0x58cc0
																																					v101 = *(char *)(v71 + v40 - 25);
																																					v90 = v101;
																																					v26 = v90;
																																					if (v101 < 1) {
																																						// 0x58cd4
																																						v26 = -v90;
																																						// branch -> 0x58cdc
																																					}
																																					// 0x58cdc
																																					result = v26;
																																					v41 = g33;
																																					v77 = v41;
																																					v22 = 4;
																																					v23 = -v26;
																																					v25 = 0;
																																					v24 = 0;
																																					v42 = v26;
																																					v93 = v41;
																																					// branch -> 0x58cf4
																																					int32_t v114; // 0x58e5c
																																					while (true) {
																																						// 0x58cf4
																																						v91 = (char *)(v93 + 0x482c);
																																						v92 = (int32_t)*v91;
																																						int32_t v115; // 0x58d10
																																						int32_t v116; // 0x58d1c
																																						if (v42 != v92) {
																																						lab_0x58d04_18:
																																							// 0x58d04
																																							if (v23 != v92) {
																																								v116 = v42;
																																								v115 = v93;
																																							lab_0x58d10:;
																																								char *v117 = (char *)(v115 + 0x482d); // 0x58d10
																																								int32_t v118 = v115 + 1;              // 0x58d14
																																								v77 = v118;
																																								int32_t v119 = (int32_t)*v117; // 0x58d18
																																								int32_t v120;                  // 0x58d40
																																								if (v116 != v119) {
																																									// 0x58d24
																																									if (v23 != v119) {
																																										v120 = v116;
																																									lab_0x58d30:;
																																										char *v121 = (char *)(v118 + 0x482d); // 0x58d30
																																										int32_t v122 = v25 + 1;               // 0x58d34
																																										v25 = v122;
																																										int32_t v123 = v118 + 1; // 0x58d38
																																										v77 = v123;
																																										int32_t v124 = (int32_t)*v121; // 0x58d3c
																																										int32_t v125;                  // 0x58d64
																																										if (v120 != v124) {
																																											// 0x58d48
																																											if (v23 != v124) {
																																												v125 = v120;
																																											lab_0x58d54:;
																																												char *v126 = (char *)(v123 + 0x482d); // 0x58d54
																																												int32_t v127 = v122 + 1;              // 0x58d58
																																												v25 = v127;
																																												int32_t v128 = v123 + 1; // 0x58d5c
																																												v77 = v128;
																																												int32_t v129 = (int32_t)*v126; // 0x58d60
																																												int32_t v130;                  // 0x58d88
																																												if (v125 != v129) {
																																													// 0x58d6c
																																													if (v23 != v129) {
																																														v130 = v125;
																																													lab_0x58d78:;
																																														char *v131 = (char *)(v128 + 0x482d); // 0x58d78
																																														int32_t v132 = v127 + 1;              // 0x58d7c
																																														v25 = v132;
																																														int32_t v133 = v128 + 1; // 0x58d80
																																														v77 = v133;
																																														int32_t v134 = (int32_t)*v131; // 0x58d84
																																														int32_t v135;                  // 0x58dac
																																														if (v130 != v134) {
																																															// 0x58d90
																																															if (v23 != v134) {
																																																v135 = v130;
																																															lab_0x58d9c:;
																																																char *v136 = (char *)(v133 + 0x482d); // 0x58d9c
																																																int32_t v137 = v132 + 1;              // 0x58da0
																																																v25 = v137;
																																																int32_t v138 = v133 + 1; // 0x58da4
																																																v77 = v138;
																																																int32_t v139 = (int32_t)*v136; // 0x58da8
																																																int32_t v140;                  // 0x58dd0
																																																if (v135 != v139) {
																																																	// 0x58db4
																																																	if (v23 != v139) {
																																																		v140 = v135;
																																																	lab_0x58dc0:;
																																																		char *v141 = (char *)(v138 + 0x482d); // 0x58dc0
																																																		int32_t v142 = v137 + 1;              // 0x58dc4
																																																		v25 = v142;
																																																		int32_t v143 = v138 + 1; // 0x58dc8
																																																		v77 = v143;
																																																		int32_t v144 = (int32_t)*v141; // 0x58dcc
																																																		int32_t v145;                  // 0x58df4
																																																		if (v140 != v144) {
																																																			// 0x58dd8
																																																			if (v23 != v144) {
																																																				v145 = v140;
																																																			lab_0x58de4:;
																																																				char *v146 = (char *)(v143 + 0x482d); // 0x58de4
																																																				int32_t v147 = v142 + 1;              // 0x58de8
																																																				v25 = v147;
																																																				int32_t v148 = v143 + 1; // 0x58dec
																																																				v77 = v148;
																																																				int32_t v149 = (int32_t)*v146; // 0x58df0
																																																				int32_t v150;                  // 0x58e18
																																																				if (v145 != v149) {
																																																					// 0x58dfc
																																																					if (v23 != v149) {
																																																						v150 = v145;
																																																					lab_0x58e08:;
																																																						char *v151 = (char *)(v148 + 0x482d); // 0x58e08
																																																						int32_t v152 = v147 + 1;              // 0x58e0c
																																																						v25 = v152;
																																																						int32_t v153 = v148 + 1; // 0x58e10
																																																						v77 = v153;
																																																						int32_t v154 = (int32_t)*v151; // 0x58e14
																																																						int32_t v155;                  // 0x58e3c
																																																						if (v150 != v154) {
																																																							// 0x58e20
																																																							if (v23 != v154) {
																																																								v155 = v150;
																																																							lab_0x58e2c:;
																																																								char *v156 = (char *)(v153 + 0x482d); // 0x58e2c
																																																								int32_t v157 = v152 + 1;              // 0x58e30
																																																								v25 = v157;
																																																								int32_t v158 = v153 + 1; // 0x58e34
																																																								v77 = v158;
																																																								int32_t v159 = (int32_t)*v156; // 0x58e38
																																																								if (v155 != v159) {
																																																									// 0x58e44
																																																									if (v23 != v159) {
																																																										v114 = v155;
																																																									lab_0x58e50:;
																																																										int32_t v160 = v158 + 1; // 0x58e50
																																																										v77 = v160;
																																																										v25 = v157 + 1;
																																																										int32_t v161 = v22 - 1; // 0x58e58
																																																										v22 = v161;
																																																										if (v161 == 0) {
																																																											// break -> 0x58e5c
																																																											break;
																																																										}
																																																										v42 = v114;
																																																										v93 = v160;
																																																										// continue -> 0x58cf4
																																																										continue;
																																																									}
																																																								}
																																																								// 0x58e4c
																																																								*v156 = (char)v24;
																																																								v114 = result;
																																																								v157 = v25;
																																																								v158 = v77;
																																																								// branch -> 0x58e50
																																																								goto lab_0x58e50;
																																																							}
																																																						}
																																																						// 0x58e28
																																																						*v151 = (char)v24;
																																																						v155 = result;
																																																						v152 = v25;
																																																						v153 = v77;
																																																						// branch -> 0x58e2c
																																																						goto lab_0x58e2c;
																																																					}
																																																				}
																																																				// 0x58e04
																																																				*v146 = (char)v24;
																																																				v150 = result;
																																																				v147 = v25;
																																																				v148 = v77;
																																																				// branch -> 0x58e08
																																																				goto lab_0x58e08;
																																																			}
																																																		}
																																																		// 0x58de0
																																																		*v141 = (char)v24;
																																																		v145 = result;
																																																		v142 = v25;
																																																		v143 = v77;
																																																		// branch -> 0x58de4
																																																		goto lab_0x58de4;
																																																	}
																																																}
																																																// 0x58dbc
																																																*v136 = (char)v24;
																																																v140 = result;
																																																v137 = v25;
																																																v138 = v77;
																																																// branch -> 0x58dc0
																																																goto lab_0x58dc0;
																																															}
																																														}
																																														// 0x58d98
																																														*v131 = (char)v24;
																																														v135 = result;
																																														v132 = v25;
																																														v133 = v77;
																																														// branch -> 0x58d9c
																																														goto lab_0x58d9c;
																																													}
																																												}
																																												// 0x58d74
																																												*v126 = (char)v24;
																																												v130 = result;
																																												v127 = v25;
																																												v128 = v77;
																																												// branch -> 0x58d78
																																												goto lab_0x58d78;
																																											}
																																										}
																																										// 0x58d50
																																										*v121 = (char)v24;
																																										v125 = result;
																																										v122 = v25;
																																										v123 = v77;
																																										// branch -> 0x58d54
																																										goto lab_0x58d54;
																																									}
																																								}
																																								// 0x58d2c
																																								*v117 = (char)v24;
																																								v120 = result;
																																								v118 = v77;
																																								// branch -> 0x58d30
																																								goto lab_0x58d30;
																																							}
																																						}
																																					lab_0x58d0c_18:
																																						// 0x58d0c
																																						*v91 = (char)v24;
																																						v116 = result;
																																						v115 = v77;
																																						// branch -> 0x58d10
																																						goto lab_0x58d10;
																																					}
																																					int32_t v162 = g35 + g36;               // 0x58e60
																																					int32_t v163 = v162 + 3752;             // 0x58e70
																																					int32_t v164 = v163 + 368 * v114 - 368; // 0x58e78
																																					v22 = 46;
																																					int32_t v165 = v162 + 0x53cc; // 0x58e8c
																																					int32_t v166 = v164 - 8;      // 0x58e84
																																					// branch -> 0x58e84
																																					while (true) {
																																						int32_t v167 = v166 + 8; // 0x58e84
																																						int32_t v168 = v165 + 8; // 0x58e8c
																																						*(int32_t *)v168 = *(int32_t *)v167;
																																						*(int32_t *)(v165 + 12) = *(int32_t *)(v166 + 12);
																																						int32_t v169 = v22 - 1; // 0x58e94
																																						v22 = v169;
																																						if (v169 == 0) {
																																							int32_t v170 = g35 + g36;                   // 0x58e98
																																							int32_t *v171 = (int32_t *)(v170 + 0x4828); // 0x58e9c
																																							*v171 = *v171 - 1;
																																							uint32_t v172 = *(int32_t *)(v170 + 0x4828); // 0x58ea8
																																							if (v172 >= 1) {
																																								// 0x58eb4
																																								if (result - 1 != v172) {
																																									// 0x58ec0
																																									v22 = 46;
																																									int32_t v173 = v164 - 8;              // 0x58ee0
																																									int32_t v174 = 368 * v172 - 8 + v163; // 0x58ed8
																																									// branch -> 0x58ed8
																																									while (true) {
																																										int32_t v175 = v174 + 8; // 0x58ed8
																																										int32_t v176 = v173 + 8; // 0x58ee0
																																										*(int32_t *)v176 = *(int32_t *)v175;
																																										*(int32_t *)(v173 + 12) = *(int32_t *)(v174 + 12);
																																										int32_t v177 = v22 - 1; // 0x58ee8
																																										v22 = v177;
																																										if (v177 == 0) {
																																											// 0x58eec
																																											v22 = 8;
																																											int32_t v178 = g33; // 0x58ef4
																																											v4 = v178;
																																											v77 = 0x1000000 * result / 0x1000000;
																																											v23 = 0x1000000 * v23 / 0x1000000;
																																											v25 = 0;
																																											// branch -> 0x58f04
																																											while (true) {
																																												char *v179 = (char *)(v178 + 0x482c); // 0x58f04
																																												int32_t v180 = v178;                  // 0x58f3c
																																												int32_t v181 = v178;                  // 0x58f20
																																												if ((int32_t)*v179 == *(int32_t *)(v178 + 0x4828) + 1) {
																																													// 0x58f1c
																																													*v179 = (char)v77;
																																													v180 = v4;
																																													v181 = g33;
																																													// branch -> 0x58f20
																																												}
																																												char *v182 = (char *)(v180 + 0x482c); // 0x58f24
																																												int32_t v183 = v181;                  // 0x58f48
																																												if ((int32_t)*v182 == -1 - *(int32_t *)(v181 + 0x4828)) {
																																													// 0x58f3c
																																													*v182 = (char)v23;
																																													v183 = g33;
																																													v180 = v4;
																																													// branch -> 0x58f40
																																												}
																																												char *v184 = (char *)(v180 + 0x482d); // 0x58f40
																																												int32_t v185 = v180 + 1;              // 0x58f44
																																												v4 = v185;
																																												int32_t v186 = v183; // 0x58f60
																																												if ((int32_t)*v184 == *(int32_t *)(v183 + 0x4828) + 1) {
																																													// 0x58f5c
																																													*v184 = (char)v77;
																																													v185 = v4;
																																													v186 = g33;
																																													// branch -> 0x58f60
																																												}
																																												char *v187 = (char *)(v185 + 0x482c); // 0x58f64
																																												int32_t v188 = v186;                  // 0x58f88
																																												if ((int32_t)*v187 == -1 - *(int32_t *)(v186 + 0x4828)) {
																																													// 0x58f7c
																																													*v187 = (char)v23;
																																													v188 = g33;
																																													v185 = v4;
																																													// branch -> 0x58f80
																																												}
																																												char *v189 = (char *)(v185 + 0x482d); // 0x58f80
																																												int32_t v190 = v185 + 1;              // 0x58f84
																																												v4 = v190;
																																												int32_t v191 = v188; // 0x58fa4
																																												if ((int32_t)*v189 == *(int32_t *)(v188 + 0x4828) + 1) {
																																													// 0x58fa0
																																													*v189 = (char)v77;
																																													v190 = v4;
																																													v191 = g33;
																																													// branch -> 0x58fa4
																																												}
																																												char *v192 = (char *)(v190 + 0x482c); // 0x58fa8
																																												int32_t v193 = v191;                  // 0x58fcc
																																												if ((int32_t)*v192 == -1 - *(int32_t *)(v191 + 0x4828)) {
																																													// 0x58fc0
																																													*v192 = (char)v23;
																																													v193 = g33;
																																													v190 = v4;
																																													// branch -> 0x58fc4
																																												}
																																												char *v194 = (char *)(v190 + 0x482d); // 0x58fc4
																																												int32_t v195 = v190 + 1;              // 0x58fc8
																																												v4 = v195;
																																												int32_t v196 = v193; // 0x58fe8
																																												if ((int32_t)*v194 == *(int32_t *)(v193 + 0x4828) + 1) {
																																													// 0x58fe4
																																													*v194 = (char)v77;
																																													v195 = v4;
																																													v196 = g33;
																																													// branch -> 0x58fe8
																																												}
																																												char *v197 = (char *)(v195 + 0x482c); // 0x58fec
																																												int32_t v198 = v196;                  // 0x59010
																																												if ((int32_t)*v197 == -1 - *(int32_t *)(v196 + 0x4828)) {
																																													// 0x59004
																																													*v197 = (char)v23;
																																													v198 = g33;
																																													v195 = v4;
																																													// branch -> 0x59008
																																												}
																																												char *v199 = (char *)(v195 + 0x482d); // 0x59008
																																												int32_t v200 = v195 + 1;              // 0x5900c
																																												v4 = v200;
																																												int32_t v201 = v198; // 0x5902c
																																												if ((int32_t)*v199 == *(int32_t *)(v198 + 0x4828) + 1) {
																																													// 0x59028
																																													*v199 = (char)v77;
																																													v200 = v4;
																																													v201 = g33;
																																													// branch -> 0x5902c
																																												}
																																												char *v202 = (char *)(v200 + 0x482c);            // 0x59030
																																												int32_t v203 = -1 - *(int32_t *)(v201 + 0x4828); // 0x5903c
																																												result = v203;
																																												if ((int32_t)*v202 == v203) {
																																													// 0x59048
																																													*v202 = (char)v23;
																																													v200 = v4;
																																													// branch -> 0x5904c
																																												}
																																												int32_t v204 = v200 + 1; // 0x5904c
																																												v4 = v204;
																																												v25 += 4;
																																												int32_t v205 = v22 - 1; // 0x59054
																																												v22 = v205;
																																												if (v205 == 0) {
																																													// 0x59058
																																													v43 = g31;
																																													if (v43 >= 65) {
																																														// 0x59060
																																														v94 = g35 + g36;
																																														v72 = 368 * (v43 - 65);
																																														v73 = v94 + 0x485c;
																																														if (*(int32_t *)(v73 + v72) != -1) {
																																															// 0x5907c
																																															v22 = 46;
																																															v75 = v94 + 0x53cc;
																																															v44 = v94 + v72 + 0x484c;
																																															// branch -> 0x59094
																																															while (true) {
																																																// 0x59094
																																																v74 = v44 + 8;
																																																v95 = v75 + 8;
																																																*(int32_t *)v95 = *(int32_t *)v74;
																																																*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
																																																v76 = v22 - 1;
																																																v22 = v76;
																																																if (v76 == 0) {
																																																	// 0x590a8
																																																	result = *(int32_t *)(g23 - 0x7670);
																																																	*(int32_t *)(v72 + v73) = -1;
																																																	*(int32_t *)result = 1;
																																																	// branch -> 0x590bc
																																																	// 0x590bc
																																																	v96 = *(int32_t *)g32;
																																																	if (v96 == -1) {
																																																		// 0x5915c
																																																		return result;
																																																	}
																																																	// 0x590c8
																																																	if (v96 == 11) {
																																																		// 0x590d0
																																																		*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
																																																		// branch -> 0x590e0
																																																	}
																																																	// 0x590e0
																																																	function_5cfd4(g28, 1);
																																																	function_59724(g28);
																																																	result2 = *(int32_t *)(g23 - 0x77ac);
																																																	if (g28 != *(int32_t *)result2) {
																																																		// 0x5915c
																																																		return result2;
																																																	}
																																																	// 0x59104
																																																	g34 = 50;
																																																	PlaySFX(50);
																																																	g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
																																																	SetCursor_();
																																																	v45 = g23;
																																																	v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
																																																	v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
																																																	v99 = g29 - (v97 / 2 | v97 & -0x80000000);
																																																	v100 = g30 - (v98 / 2 | v98 & -0x80000000);
																																																	g34 = v99;
																																																	function_ebc50(v99, v100);
																																																	result = *(int32_t *)(v27 - 0x76ac);
																																																	*(int32_t *)*(int32_t *)(v27 - 0x76a8) = v99;
																																																	*(int32_t *)result = v100;
																																																	// branch -> 0x5915c
																																																	// 0x5915c
																																																	return result;
																																																}
																																															lab_0x59094_22:
																																																// 0x59094
																																																v75 = v95;
																																																v44 = v74;
																																																// branch -> 0x59094
																																															}
																																														}
																																													}
																																													// 0x590bc
																																													v96 = *(int32_t *)g32;
																																													if (v96 == -1) {
																																														// 0x5915c
																																														return result;
																																													}
																																													// 0x590c8
																																													if (v96 == 11) {
																																														// 0x590d0
																																														*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
																																														// branch -> 0x590e0
																																													}
																																													// 0x590e0
																																													function_5cfd4(g28, 1);
																																													function_59724(g28);
																																													result2 = *(int32_t *)(g23 - 0x77ac);
																																													if (g28 != *(int32_t *)result2) {
																																														// 0x5915c
																																														return result2;
																																													}
																																													// 0x59104
																																													g34 = 50;
																																													PlaySFX(50);
																																													g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
																																													SetCursor_();
																																													v45 = g23;
																																													v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
																																													v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
																																													v99 = g29 - (v97 / 2 | v97 & -0x80000000);
																																													v100 = g30 - (v98 / 2 | v98 & -0x80000000);
																																													g34 = v99;
																																													function_ebc50(v99, v100);
																																													result = *(int32_t *)(v27 - 0x76ac);
																																													*(int32_t *)*(int32_t *)(v27 - 0x76a8) = v99;
																																													*(int32_t *)result = v100;
																																													// branch -> 0x5915c
																																													// 0x5915c
																																													return result;
																																												}
																																												// 0x5904c
																																												v178 = v204;
																																												// branch -> 0x58f04
																																											}
																																										} else {
																																											// 0x58ed8
																																											v173 = v176;
																																											v174 = v175;
																																											// branch -> 0x58ed8
																																											continue;
																																										}
																																									}
																																								}
																																							}
																																							// 0x59058
																																							v43 = g31;
																																							if (v43 >= 65) {
																																								// 0x59060
																																								v94 = g35 + g36;
																																								v72 = 368 * (v43 - 65);
																																								v73 = v94 + 0x485c;
																																								if (*(int32_t *)(v73 + v72) != -1) {
																																									// 0x5907c
																																									v22 = 46;
																																									v75 = v94 + 0x53cc;
																																									v44 = v94 + v72 + 0x484c;
																																									// branch -> 0x59094
																																									while (true) {
																																										// 0x59094
																																										v74 = v44 + 8;
																																										v95 = v75 + 8;
																																										*(int32_t *)v95 = *(int32_t *)v74;
																																										*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
																																										v76 = v22 - 1;
																																										v22 = v76;
																																										if (v76 != 0) {
																																											goto lab_0x59094_22;
																																										}
																																										// 0x590a8
																																										*(int32_t *)(v72 + v73) = -1;
																																										*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
																																										// branch -> 0x590bc
																																									}
																																								}
																																							}
																																							// 0x590bc
																																							v96 = *(int32_t *)g32;
																																							if (v96 == -1) {
																																								// 0x5915c
																																								return result;
																																							}
																																							// 0x590c8
																																							if (v96 == 11) {
																																								// 0x590d0
																																								*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
																																								// branch -> 0x590e0
																																							}
																																							// 0x590e0
																																							function_5cfd4(g28, 1);
																																							function_59724(g28);
																																							result2 = *(int32_t *)(g23 - 0x77ac);
																																							if (g28 != *(int32_t *)result2) {
																																								// 0x5915c
																																								return result2;
																																							}
																																							// 0x59104
																																							g34 = 50;
																																							PlaySFX(50);
																																							g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
																																							SetCursor_();
																																							v45 = g23;
																																							v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
																																							v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
																																							v99 = g29 - (v97 / 2 | v97 & -0x80000000);
																																							v100 = g30 - (v98 / 2 | v98 & -0x80000000);
																																							g34 = v99;
																																							function_ebc50(v99, v100);
																																							result = *(int32_t *)(v27 - 0x76ac);
																																							*(int32_t *)*(int32_t *)(v27 - 0x76a8) = v99;
																																							*(int32_t *)result = v100;
																																							// branch -> 0x5915c
																																							// 0x5915c
																																							return result;
																																						}
																																						// 0x58e84
																																						v165 = v168;
																																						v166 = v167;
																																						// branch -> 0x58e84
																																					}
																																				}
																																			}
																																		}
																																		// 0x59058
																																		v43 = g31;
																																		if (v43 >= 65) {
																																			// 0x59060
																																			v94 = g35 + g36;
																																			v72 = 368 * (v43 - 65);
																																			v73 = v94 + 0x485c;
																																			if (*(int32_t *)(v73 + v72) != -1) {
																																				// 0x5907c
																																				v22 = 46;
																																				v75 = v94 + 0x53cc;
																																				v44 = v94 + v72 + 0x484c;
																																				// branch -> 0x59094
																																				while (true) {
																																					// 0x59094
																																					v74 = v44 + 8;
																																					v95 = v75 + 8;
																																					*(int32_t *)v95 = *(int32_t *)v74;
																																					*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
																																					v76 = v22 - 1;
																																					v22 = v76;
																																					if (v76 != 0) {
																																						goto lab_0x59094_22;
																																					}
																																					// 0x590a8
																																					*(int32_t *)(v72 + v73) = -1;
																																					*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
																																					// branch -> 0x590bc
																																				}
																																			}
																																		}
																																		// 0x590bc
																																		v96 = *(int32_t *)g32;
																																		if (v96 == -1) {
																																			// 0x5915c
																																			return result;
																																		}
																																		// 0x590c8
																																		if (v96 == 11) {
																																			// 0x590d0
																																			*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
																																			// branch -> 0x590e0
																																		}
																																		// 0x590e0
																																		function_5cfd4(g28, 1);
																																		function_59724(g28);
																																		result2 = *(int32_t *)(g23 - 0x77ac);
																																		if (g28 != *(int32_t *)result2) {
																																			// 0x5915c
																																			return result2;
																																		}
																																		// 0x59104
																																		g34 = 50;
																																		PlaySFX(50);
																																		g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
																																		SetCursor_();
																																		v45 = g23;
																																		v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
																																		v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
																																		v99 = g29 - (v97 / 2 | v97 & -0x80000000);
																																		v100 = g30 - (v98 / 2 | v98 & -0x80000000);
																																		g34 = v99;
																																		function_ebc50(v99, v100);
																																		result = *(int32_t *)(v27 - 0x76ac);
																																		*(int32_t *)*(int32_t *)(v27 - 0x76a8) = v99;
																																		*(int32_t *)result = v100;
																																		// branch -> 0x5915c
																																		// 0x5915c
																																		return result;
																																	}
																																lab_0x58c78_15:
																																	// 0x58c78
																																	v68 = v89;
																																	v39 = v67;
																																	// branch -> 0x58c78
																																}
																															} else {
																																v40 = v38;
																															}
																														} else {
																															v40 = v38;
																														}
																													}
																													// 0x58c94
																													if (v40 >= 25) {
																														// 0x58c9c
																														if (v40 <= 64) {
																															// 0x58ca4
																															v71 = g36 + 0x482c + g35;
																															v109 = v71 + v40;
																															result = v109;
																															if (*(char *)(v109 - 25) != 0) {
																																// 0x58cc0
																																v101 = *(char *)(v71 + v40 - 25);
																																v90 = v101;
																																v26 = v90;
																																if (v101 < 1) {
																																	// 0x58cd4
																																	v26 = -v90;
																																	// branch -> 0x58cdc
																																}
																																// 0x58cdc
																																result = v26;
																																v41 = g33;
																																v77 = v41;
																																v22 = 4;
																																v23 = -v26;
																																v25 = 0;
																																v24 = 0;
																																v42 = v26;
																																v93 = v41;
																																// branch -> 0x58cf4
																																while (true) {
																																	// 0x58cf4
																																	v91 = (char *)(v93 + 0x482c);
																																	v92 = (int32_t)*v91;
																																	if (v42 == v92) {
																																		goto lab_0x58d0c_18;
																																	}
																																	goto lab_0x58d04_18;
																																}
																															}
																														}
																													}
																													// 0x59058
																													v43 = g31;
																													if (v43 >= 65) {
																														// 0x59060
																														v94 = g35 + g36;
																														v72 = 368 * (v43 - 65);
																														v73 = v94 + 0x485c;
																														if (*(int32_t *)(v73 + v72) != -1) {
																															// 0x5907c
																															v22 = 46;
																															v75 = v94 + 0x53cc;
																															v44 = v94 + v72 + 0x484c;
																															// branch -> 0x59094
																															while (true) {
																																// 0x59094
																																v74 = v44 + 8;
																																v95 = v75 + 8;
																																*(int32_t *)v95 = *(int32_t *)v74;
																																*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
																																v76 = v22 - 1;
																																v22 = v76;
																																if (v76 != 0) {
																																	goto lab_0x59094_22;
																																}
																																// 0x590a8
																																*(int32_t *)(v72 + v73) = -1;
																																*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
																																// branch -> 0x590bc
																															}
																														}
																													}
																													// 0x590bc
																													v96 = *(int32_t *)g32;
																													if (v96 == -1) {
																														// 0x5915c
																														return result;
																													}
																													// 0x590c8
																													if (v96 == 11) {
																														// 0x590d0
																														*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
																														// branch -> 0x590e0
																													}
																													// 0x590e0
																													function_5cfd4(g28, 1);
																													function_59724(g28);
																													result2 = *(int32_t *)(g23 - 0x77ac);
																													if (g28 != *(int32_t *)result2) {
																														// 0x5915c
																														return result2;
																													}
																													// 0x59104
																													g34 = 50;
																													PlaySFX(50);
																													g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
																													SetCursor_();
																													v45 = g23;
																													v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
																													v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
																													v99 = g29 - (v97 / 2 | v97 & -0x80000000);
																													v100 = g30 - (v98 / 2 | v98 & -0x80000000);
																													g34 = v99;
																													function_ebc50(v99, v100);
																													result = *(int32_t *)(v27 - 0x76ac);
																													*(int32_t *)*(int32_t *)(v27 - 0x76a8) = v99;
																													*(int32_t *)result = v100;
																													// branch -> 0x5915c
																													// 0x5915c
																													return result;
																												}
																											lab_0x58c1c_12:
																												// 0x58c1c
																												v64 = v87;
																												v37 = v63;
																												// branch -> 0x58c1c
																											}
																										} else {
																											v38 = v36;
																										}
																									} else {
																										v38 = v36;
																									}
																								}
																								// 0x58c38
																								v40 = v38;
																								if (v38 >= 19) {
																									// 0x58c40
																									if (v38 <= 24) {
																										// 0x58c48
																										v66 = g35 + g36 + 3392;
																										g27 = v66;
																										if (*(int32_t *)v66 != -1) {
																											// 0x58c58
																											function_8bce4(0, 6);
																											v88 = g35 + g36;
																											v22 = 46;
																											v68 = v88 + 0x53cc;
																											v39 = v88 + 3376;
																											// branch -> 0x58c78
																											while (true) {
																												// 0x58c78
																												v67 = v39 + 8;
																												v89 = v68 + 8;
																												*(int32_t *)v89 = *(int32_t *)v67;
																												*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
																												v69 = v22 - 1;
																												v22 = v69;
																												if (v69 != 0) {
																													goto lab_0x58c78_15;
																												}
																												// 0x58c8c
																												*(int32_t *)g27 = -1;
																												// branch -> 0x58c94
																											}
																										} else {
																											v40 = v38;
																										}
																									} else {
																										v40 = v38;
																									}
																								}
																								// 0x58c94
																								if (v40 >= 25) {
																									// 0x58c9c
																									if (v40 <= 64) {
																										// 0x58ca4
																										v71 = g36 + 0x482c + g35;
																										v109 = v71 + v40;
																										result = v109;
																										if (*(char *)(v109 - 25) != 0) {
																											// 0x58cc0
																											v101 = *(char *)(v71 + v40 - 25);
																											v90 = v101;
																											v26 = v90;
																											if (v101 < 1) {
																												// 0x58cd4
																												v26 = -v90;
																												// branch -> 0x58cdc
																											}
																											// 0x58cdc
																											result = v26;
																											v41 = g33;
																											v77 = v41;
																											v22 = 4;
																											v23 = -v26;
																											v25 = 0;
																											v24 = 0;
																											v42 = v26;
																											v93 = v41;
																											// branch -> 0x58cf4
																											while (true) {
																												// 0x58cf4
																												v91 = (char *)(v93 + 0x482c);
																												v92 = (int32_t)*v91;
																												if (v42 == v92) {
																													goto lab_0x58d0c_18;
																												}
																												goto lab_0x58d04_18;
																											}
																										}
																									}
																								}
																								// 0x59058
																								v43 = g31;
																								if (v43 >= 65) {
																									// 0x59060
																									v94 = g35 + g36;
																									v72 = 368 * (v43 - 65);
																									v73 = v94 + 0x485c;
																									if (*(int32_t *)(v73 + v72) != -1) {
																										// 0x5907c
																										v22 = 46;
																										v75 = v94 + 0x53cc;
																										v44 = v94 + v72 + 0x484c;
																										// branch -> 0x59094
																										while (true) {
																											// 0x59094
																											v74 = v44 + 8;
																											v95 = v75 + 8;
																											*(int32_t *)v95 = *(int32_t *)v74;
																											*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
																											v76 = v22 - 1;
																											v22 = v76;
																											if (v76 != 0) {
																												goto lab_0x59094_22;
																											}
																											// 0x590a8
																											*(int32_t *)(v72 + v73) = -1;
																											*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
																											// branch -> 0x590bc
																										}
																									}
																								}
																								// 0x590bc
																								v96 = *(int32_t *)g32;
																								if (v96 == -1) {
																									// 0x5915c
																									return result;
																								}
																								// 0x590c8
																								if (v96 == 11) {
																									// 0x590d0
																									*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
																									// branch -> 0x590e0
																								}
																								// 0x590e0
																								function_5cfd4(g28, 1);
																								function_59724(g28);
																								result2 = *(int32_t *)(g23 - 0x77ac);
																								if (g28 != *(int32_t *)result2) {
																									// 0x5915c
																									return result2;
																								}
																								// 0x59104
																								g34 = 50;
																								PlaySFX(50);
																								g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
																								SetCursor_();
																								v45 = g23;
																								v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
																								v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
																								v99 = g29 - (v97 / 2 | v97 & -0x80000000);
																								v100 = g30 - (v98 / 2 | v98 & -0x80000000);
																								g34 = v99;
																								function_ebc50(v99, v100);
																								result = *(int32_t *)(v27 - 0x76ac);
																								*(int32_t *)*(int32_t *)(v27 - 0x76a8) = v99;
																								*(int32_t *)result = v100;
																								// branch -> 0x5915c
																								// 0x5915c
																								return result;
																							}
																						lab_0x58bc0_9:
																							// 0x58bc0
																							v60 = v85;
																							v35 = v59;
																							// branch -> 0x58bc0
																						}
																					} else {
																						v36 = v34;
																					}
																				} else {
																					v36 = v34;
																				}
																			}
																			// 0x58bdc
																			v38 = v36;
																			if (v36 >= 13) {
																				// 0x58be4
																				if (v36 <= 18) {
																					// 0x58bec
																					v62 = g35 + g36 + 3024;
																					g27 = v62;
																					if (*(int32_t *)v62 != -1) {
																						// 0x58bfc
																						function_8bce4(0, 5);
																						v86 = g35 + g36;
																						v22 = 46;
																						v64 = v86 + 0x53cc;
																						v37 = v86 + 3008;
																						// branch -> 0x58c1c
																						while (true) {
																							// 0x58c1c
																							v63 = v37 + 8;
																							v87 = v64 + 8;
																							*(int32_t *)v87 = *(int32_t *)v63;
																							*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
																							v65 = v22 - 1;
																							v22 = v65;
																							if (v65 != 0) {
																								goto lab_0x58c1c_12;
																							}
																							// 0x58c30
																							*(int32_t *)g27 = -1;
																							// branch -> 0x58c38
																						}
																					} else {
																						v38 = v36;
																					}
																				} else {
																					v38 = v36;
																				}
																			}
																			// 0x58c38
																			v40 = v38;
																			if (v38 >= 19) {
																				// 0x58c40
																				if (v38 <= 24) {
																					// 0x58c48
																					v66 = g35 + g36 + 3392;
																					g27 = v66;
																					if (*(int32_t *)v66 != -1) {
																						// 0x58c58
																						function_8bce4(0, 6);
																						v88 = g35 + g36;
																						v22 = 46;
																						v68 = v88 + 0x53cc;
																						v39 = v88 + 3376;
																						// branch -> 0x58c78
																						while (true) {
																							// 0x58c78
																							v67 = v39 + 8;
																							v89 = v68 + 8;
																							*(int32_t *)v89 = *(int32_t *)v67;
																							*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
																							v69 = v22 - 1;
																							v22 = v69;
																							if (v69 != 0) {
																								goto lab_0x58c78_15;
																							}
																							// 0x58c8c
																							*(int32_t *)g27 = -1;
																							// branch -> 0x58c94
																						}
																					} else {
																						v40 = v38;
																					}
																				} else {
																					v40 = v38;
																				}
																			}
																			// 0x58c94
																			if (v40 >= 25) {
																				// 0x58c9c
																				if (v40 <= 64) {
																					// 0x58ca4
																					v71 = g36 + 0x482c + g35;
																					v109 = v71 + v40;
																					result = v109;
																					if (*(char *)(v109 - 25) != 0) {
																						// 0x58cc0
																						v101 = *(char *)(v71 + v40 - 25);
																						v90 = v101;
																						v26 = v90;
																						if (v101 < 1) {
																							// 0x58cd4
																							v26 = -v90;
																							// branch -> 0x58cdc
																						}
																						// 0x58cdc
																						result = v26;
																						v41 = g33;
																						v77 = v41;
																						v22 = 4;
																						v23 = -v26;
																						v25 = 0;
																						v24 = 0;
																						v42 = v26;
																						v93 = v41;
																						// branch -> 0x58cf4
																						while (true) {
																							// 0x58cf4
																							v91 = (char *)(v93 + 0x482c);
																							v92 = (int32_t)*v91;
																							if (v42 == v92) {
																								goto lab_0x58d0c_18;
																							}
																							goto lab_0x58d04_18;
																						}
																					}
																				}
																			}
																			// 0x59058
																			v43 = g31;
																			if (v43 >= 65) {
																				// 0x59060
																				v94 = g35 + g36;
																				v72 = 368 * (v43 - 65);
																				v73 = v94 + 0x485c;
																				if (*(int32_t *)(v73 + v72) != -1) {
																					// 0x5907c
																					v22 = 46;
																					v75 = v94 + 0x53cc;
																					v44 = v94 + v72 + 0x484c;
																					// branch -> 0x59094
																					while (true) {
																						// 0x59094
																						v74 = v44 + 8;
																						v95 = v75 + 8;
																						*(int32_t *)v95 = *(int32_t *)v74;
																						*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
																						v76 = v22 - 1;
																						v22 = v76;
																						if (v76 != 0) {
																							goto lab_0x59094_22;
																						}
																						// 0x590a8
																						*(int32_t *)(v72 + v73) = -1;
																						*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
																						// branch -> 0x590bc
																					}
																				}
																			}
																			// 0x590bc
																			v96 = *(int32_t *)g32;
																			if (v96 == -1) {
																				// 0x5915c
																				return result;
																			}
																			// 0x590c8
																			if (v96 == 11) {
																				// 0x590d0
																				*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
																				// branch -> 0x590e0
																			}
																			// 0x590e0
																			function_5cfd4(g28, 1);
																			function_59724(g28);
																			result2 = *(int32_t *)(g23 - 0x77ac);
																			if (g28 != *(int32_t *)result2) {
																				// 0x5915c
																				return result2;
																			}
																			// 0x59104
																			g34 = 50;
																			PlaySFX(50);
																			g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
																			SetCursor_();
																			v45 = g23;
																			v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
																			v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
																			v99 = g29 - (v97 / 2 | v97 & -0x80000000);
																			v100 = g30 - (v98 / 2 | v98 & -0x80000000);
																			g34 = v99;
																			function_ebc50(v99, v100);
																			result = *(int32_t *)(v27 - 0x76ac);
																			*(int32_t *)*(int32_t *)(v27 - 0x76a8) = v99;
																			*(int32_t *)result = v100;
																			// branch -> 0x5915c
																			// 0x5915c
																			return result;
																		}
																	lab_0x58b64_7:
																		// 0x58b64
																		v56 = v83;
																		v33 = v55;
																		// branch -> 0x58b64
																	}
																} else {
																	v34 = 6;
																}
															}
															// 0x58b80
															v36 = v34;
															if (v34 >= 7) {
																// 0x58b88
																if (v34 <= 12) {
																	// 0x58b90
																	v58 = g35 + g36 + 2656;
																	g27 = v58;
																	if (*(int32_t *)v58 != -1) {
																		// 0x58ba0
																		function_8bce4(0, 4);
																		v84 = g35 + g36;
																		v22 = 46;
																		v60 = v84 + 0x53cc;
																		v35 = v84 + 2640;
																		// branch -> 0x58bc0
																		while (true) {
																			// 0x58bc0
																			v59 = v35 + 8;
																			v85 = v60 + 8;
																			*(int32_t *)v85 = *(int32_t *)v59;
																			*(int32_t *)(v60 + 12) = *(int32_t *)(v35 + 12);
																			v61 = v22 - 1;
																			v22 = v61;
																			if (v61 != 0) {
																				goto lab_0x58bc0_9;
																			}
																			// 0x58bd4
																			*(int32_t *)g27 = -1;
																			// branch -> 0x58bdc
																		}
																	} else {
																		v36 = v34;
																	}
																} else {
																	v36 = v34;
																}
															}
															// 0x58bdc
															v38 = v36;
															if (v36 >= 13) {
																// 0x58be4
																if (v36 <= 18) {
																	// 0x58bec
																	v62 = g35 + g36 + 3024;
																	g27 = v62;
																	if (*(int32_t *)v62 != -1) {
																		// 0x58bfc
																		function_8bce4(0, 5);
																		v86 = g35 + g36;
																		v22 = 46;
																		v64 = v86 + 0x53cc;
																		v37 = v86 + 3008;
																		// branch -> 0x58c1c
																		while (true) {
																			// 0x58c1c
																			v63 = v37 + 8;
																			v87 = v64 + 8;
																			*(int32_t *)v87 = *(int32_t *)v63;
																			*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
																			v65 = v22 - 1;
																			v22 = v65;
																			if (v65 != 0) {
																				goto lab_0x58c1c_12;
																			}
																			// 0x58c30
																			*(int32_t *)g27 = -1;
																			// branch -> 0x58c38
																		}
																	} else {
																		v38 = v36;
																	}
																} else {
																	v38 = v36;
																}
															}
															// 0x58c38
															v40 = v38;
															if (v38 >= 19) {
																// 0x58c40
																if (v38 <= 24) {
																	// 0x58c48
																	v66 = g35 + g36 + 3392;
																	g27 = v66;
																	if (*(int32_t *)v66 != -1) {
																		// 0x58c58
																		function_8bce4(0, 6);
																		v88 = g35 + g36;
																		v22 = 46;
																		v68 = v88 + 0x53cc;
																		v39 = v88 + 3376;
																		// branch -> 0x58c78
																		while (true) {
																			// 0x58c78
																			v67 = v39 + 8;
																			v89 = v68 + 8;
																			*(int32_t *)v89 = *(int32_t *)v67;
																			*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
																			v69 = v22 - 1;
																			v22 = v69;
																			if (v69 != 0) {
																				goto lab_0x58c78_15;
																			}
																			// 0x58c8c
																			*(int32_t *)g27 = -1;
																			// branch -> 0x58c94
																		}
																	} else {
																		v40 = v38;
																	}
																} else {
																	v40 = v38;
																}
															}
															// 0x58c94
															if (v40 >= 25) {
																// 0x58c9c
																if (v40 <= 64) {
																	// 0x58ca4
																	v70 = v40 - 25;
																	v71 = g36 + 0x482c + g35;
																	v109 = v71 + v40;
																	result = v109;
																	if (*(char *)(v109 - 25) != 0) {
																		// 0x58cc0
																		v101 = *(char *)(v71 + v70);
																		v90 = v101;
																		v26 = v90;
																		if (v101 < 1) {
																			// 0x58cd4
																			v26 = -v90;
																			// branch -> 0x58cdc
																		}
																		// 0x58cdc
																		result = v26;
																		v41 = g33;
																		v77 = v41;
																		v22 = 4;
																		v23 = -v26;
																		v25 = 0;
																		v24 = 0;
																		v42 = v26;
																		v93 = v41;
																		// branch -> 0x58cf4
																		while (true) {
																			// 0x58cf4
																			v91 = (char *)(v93 + 0x482c);
																			v92 = (int32_t)*v91;
																			if (v42 == v92) {
																				goto lab_0x58d0c_18;
																			}
																			goto lab_0x58d04_18;
																		}
																	}
																}
															}
															// 0x59058
															v43 = g31;
															if (v43 >= 65) {
																// 0x59060
																v94 = g35 + g36;
																v72 = 368 * (v43 - 65);
																v4 = v72;
																v73 = v94 + 0x485c;
																v25 = v73;
																if (*(int32_t *)(v73 + v72) != -1) {
																	// 0x5907c
																	v22 = 46;
																	v75 = v94 + 0x53cc;
																	v44 = v94 + v72 + 0x484c;
																	// branch -> 0x59094
																	while (true) {
																		// 0x59094
																		v74 = v44 + 8;
																		v95 = v75 + 8;
																		*(int32_t *)v95 = *(int32_t *)v74;
																		*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
																		v76 = v22 - 1;
																		v22 = v76;
																		if (v76 != 0) {
																			goto lab_0x59094_22;
																		}
																		// 0x590a8
																		*(int32_t *)(v4 + v25) = -1;
																		*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
																		// branch -> 0x590bc
																	}
																}
															}
															// 0x590bc
															v96 = *(int32_t *)g32;
															if (v96 == -1) {
																// 0x5915c
																return result;
															}
															// 0x590c8
															if (v96 == 11) {
																// 0x590d0
																*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
																// branch -> 0x590e0
															}
															// 0x590e0
															function_5cfd4(g28, 1);
															function_59724(g28);
															if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
																// 0x59104
																g34 = 50;
																PlaySFX(50);
																g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
																SetCursor_();
																v45 = g23;
																v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
																v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
																v99 = g29 - (v97 / 2 | v97 & -0x80000000);
																v100 = g30 - (v98 / 2 | v98 & -0x80000000);
																g34 = v99;
																function_ebc50(v99, v100);
																result = *(int32_t *)(v27 - 0x76ac);
																*(int32_t *)*(int32_t *)(v27 - 0x76a8) = v99;
																*(int32_t *)result = v100;
																// branch -> 0x5915c
																// 0x5915c
																return result;
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														} else {
														lab_0x58b10_5:
															// 0x58b10
															v52 = v81;
															v31 = v51;
															// branch -> 0x58b10
															continue;
														}
													}
												} else {
													v32 = 5;
												}
											}
											// 0x58b2c
											v34 = v32;
											if (v32 == 6) {
												// 0x58b34
												v54 = g35 + g36 + 2288;
												g27 = v54;
												if (*(int32_t *)v54 != -1) {
													// 0x58b44
													function_8bce4(0, 3);
													v82 = g35 + g36;
													v22 = 46;
													v56 = v82 + 0x53cc;
													v33 = v82 + 2272;
													// branch -> 0x58b64
													while (true) {
														// 0x58b64
														v55 = v33 + 8;
														v83 = v56 + 8;
														*(int32_t *)v83 = *(int32_t *)v55;
														*(int32_t *)(v56 + 12) = *(int32_t *)(v33 + 12);
														v57 = v22 - 1;
														v22 = v57;
														if (v57 != 0) {
															goto lab_0x58b64_7;
														}
														// 0x58b78
														*(int32_t *)g27 = -1;
														// branch -> 0x58b80
													}
												} else {
													v34 = 6;
												}
											}
											// 0x58b80
											v36 = v34;
											if (v34 >= 7) {
												// 0x58b88
												if (v34 <= 12) {
													// 0x58b90
													v58 = g35 + g36 + 2656;
													g27 = v58;
													if (*(int32_t *)v58 != -1) {
														// 0x58ba0
														function_8bce4(0, 4);
														v84 = g35 + g36;
														v22 = 46;
														v60 = v84 + 0x53cc;
														v35 = v84 + 2640;
														// branch -> 0x58bc0
														while (true) {
															// 0x58bc0
															v59 = v35 + 8;
															v85 = v60 + 8;
															*(int32_t *)v85 = *(int32_t *)v59;
															*(int32_t *)(v60 + 12) = *(int32_t *)(v35 + 12);
															v61 = v22 - 1;
															v22 = v61;
															if (v61 != 0) {
																goto lab_0x58bc0_9;
															}
															// 0x58bd4
															*(int32_t *)g27 = -1;
															// branch -> 0x58bdc
														}
													} else {
														v36 = v34;
													}
												} else {
													v36 = v34;
												}
											}
											// 0x58bdc
											v38 = v36;
											if (v36 >= 13) {
												// 0x58be4
												if (v36 <= 18) {
													// 0x58bec
													v62 = g35 + g36 + 3024;
													g27 = v62;
													if (*(int32_t *)v62 != -1) {
														// 0x58bfc
														function_8bce4(0, 5);
														v86 = g35 + g36;
														v22 = 46;
														v64 = v86 + 0x53cc;
														v37 = v86 + 3008;
														// branch -> 0x58c1c
														while (true) {
															// 0x58c1c
															v63 = v37 + 8;
															v87 = v64 + 8;
															*(int32_t *)v87 = *(int32_t *)v63;
															*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
															v65 = v22 - 1;
															v22 = v65;
															if (v65 != 0) {
																goto lab_0x58c1c_12;
															}
															// 0x58c30
															*(int32_t *)g27 = -1;
															// branch -> 0x58c38
														}
													} else {
														v38 = v36;
													}
												} else {
													v38 = v36;
												}
											}
											// 0x58c38
											v40 = v38;
											if (v38 >= 19) {
												// 0x58c40
												if (v38 <= 24) {
													// 0x58c48
													v66 = g35 + g36 + 3392;
													g27 = v66;
													if (*(int32_t *)v66 != -1) {
														// 0x58c58
														function_8bce4(0, 6);
														v88 = g35 + g36;
														v22 = 46;
														v68 = v88 + 0x53cc;
														v39 = v88 + 3376;
														// branch -> 0x58c78
														while (true) {
															// 0x58c78
															v67 = v39 + 8;
															v89 = v68 + 8;
															*(int32_t *)v89 = *(int32_t *)v67;
															*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
															v69 = v22 - 1;
															v22 = v69;
															if (v69 != 0) {
																goto lab_0x58c78_15;
															}
															// 0x58c8c
															*(int32_t *)g27 = -1;
															// branch -> 0x58c94
														}
													} else {
														v40 = v38;
													}
												} else {
													v40 = v38;
												}
											}
											// 0x58c94
											if (v40 >= 25) {
												// 0x58c9c
												if (v40 <= 64) {
													// 0x58ca4
													v70 = v40 - 25;
													v71 = g36 + 0x482c + g35;
													if (*(char *)(v71 + v40 - 25) != 0) {
														// 0x58cc0
														v101 = *(char *)(v71 + v70);
														v90 = v101;
														v26 = v90;
														if (v101 < 1) {
															// 0x58cd4
															v26 = -v90;
															// branch -> 0x58cdc
														}
														// 0x58cdc
														result = v26;
														v41 = g33;
														v77 = v41;
														v22 = 4;
														v23 = -v26;
														v25 = 0;
														v24 = 0;
														v42 = v26;
														v93 = v41;
														// branch -> 0x58cf4
														while (true) {
															// 0x58cf4
															v91 = (char *)(v93 + 0x482c);
															v92 = (int32_t)*v91;
															if (v42 == v92) {
																goto lab_0x58d0c_18;
															}
															goto lab_0x58d04_18;
														}
													}
												}
											}
											// 0x59058
											v43 = g31;
											if (v43 >= 65) {
												// 0x59060
												v94 = g35 + g36;
												v72 = 368 * (v43 - 65);
												v4 = v72;
												v73 = v94 + 0x485c;
												v25 = v73;
												if (*(int32_t *)(v73 + v72) != -1) {
													// 0x5907c
													v22 = 46;
													v75 = v94 + 0x53cc;
													v44 = v94 + v72 + 0x484c;
													// branch -> 0x59094
													while (true) {
														// 0x59094
														v74 = v44 + 8;
														v95 = v75 + 8;
														*(int32_t *)v95 = *(int32_t *)v74;
														*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
														v76 = v22 - 1;
														v22 = v76;
														if (v76 != 0) {
															goto lab_0x59094_22;
														}
														// 0x590a8
														*(int32_t *)(v4 + v25) = -1;
														*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
														// branch -> 0x590bc
													}
												}
											}
											// 0x590bc
											v96 = *(int32_t *)g32;
											if (v96 == -1) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// 0x590c8
											if (v96 == 11) {
												// 0x590d0
												*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
												// branch -> 0x590e0
											}
											// 0x590e0
											function_5cfd4(g28, 1);
											function_59724(g28);
											if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
												// 0x59104
												g34 = 50;
												PlaySFX(50);
												g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
												SetCursor_();
												v45 = g23;
												v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
												v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
												v99 = g29 - (v97 / 2 | v97 & -0x80000000);
												a2 = v99;
												v100 = g30 - (v98 / 2 | v98 & -0x80000000);
												a3 = v100;
												g34 = v99;
												function_ebc50(v99, v100);
												*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
												*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
												// branch -> 0x5915c
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
										lab_0x58abc_3:
											// 0x58abc
											v48 = v79;
											v29 = v47;
											// branch -> 0x58abc
											continue;
										}
									}
								} else {
									v30 = 4;
								}
							}
							// 0x58ad8
							v32 = v30;
							if (v30 == 5) {
								// 0x58ae0
								v50 = g35 + g36 + 1920;
								g27 = v50;
								if (*(int32_t *)v50 != -1) {
									// 0x58af0
									function_8bce4(0, 2);
									v80 = g35 + g36;
									v22 = 46;
									v52 = v80 + 0x53cc;
									v31 = v80 + 1904;
									// branch -> 0x58b10
									while (true) {
										// 0x58b10
										v51 = v31 + 8;
										v81 = v52 + 8;
										*(int32_t *)v81 = *(int32_t *)v51;
										*(int32_t *)(v52 + 12) = *(int32_t *)(v31 + 12);
										v53 = v22 - 1;
										v22 = v53;
										if (v53 != 0) {
											goto lab_0x58b10_5;
										}
										// 0x58b24
										*(int32_t *)g27 = -1;
										// branch -> 0x58b2c
									}
								} else {
									v32 = 5;
								}
							}
							// 0x58b2c
							v34 = v32;
							if (v32 == 6) {
								// 0x58b34
								v54 = g35 + g36 + 2288;
								g27 = v54;
								if (*(int32_t *)v54 != -1) {
									// 0x58b44
									function_8bce4(0, 3);
									v82 = g35 + g36;
									v22 = 46;
									v56 = v82 + 0x53cc;
									v33 = v82 + 2272;
									// branch -> 0x58b64
									while (true) {
										// 0x58b64
										v55 = v33 + 8;
										v83 = v56 + 8;
										*(int32_t *)v83 = *(int32_t *)v55;
										*(int32_t *)(v56 + 12) = *(int32_t *)(v33 + 12);
										v57 = v22 - 1;
										v22 = v57;
										if (v57 != 0) {
											goto lab_0x58b64_7;
										}
										// 0x58b78
										*(int32_t *)g27 = -1;
										// branch -> 0x58b80
									}
								} else {
									v34 = 6;
								}
							}
							// 0x58b80
							v36 = v34;
							if (v34 >= 7) {
								// 0x58b88
								if (v34 <= 12) {
									// 0x58b90
									v58 = g35 + g36 + 2656;
									g27 = v58;
									if (*(int32_t *)v58 != -1) {
										// 0x58ba0
										function_8bce4(0, 4);
										v84 = g35 + g36;
										v22 = 46;
										v60 = v84 + 0x53cc;
										v35 = v84 + 2640;
										// branch -> 0x58bc0
										while (true) {
											// 0x58bc0
											v59 = v35 + 8;
											v85 = v60 + 8;
											*(int32_t *)v85 = *(int32_t *)v59;
											*(int32_t *)(v60 + 12) = *(int32_t *)(v35 + 12);
											v61 = v22 - 1;
											v22 = v61;
											if (v61 != 0) {
												goto lab_0x58bc0_9;
											}
											// 0x58bd4
											*(int32_t *)g27 = -1;
											// branch -> 0x58bdc
										}
									} else {
										v36 = v34;
									}
								} else {
									v36 = v34;
								}
							}
							// 0x58bdc
							v38 = v36;
							if (v36 >= 13) {
								// 0x58be4
								if (v36 <= 18) {
									// 0x58bec
									v62 = g35 + g36 + 3024;
									g27 = v62;
									if (*(int32_t *)v62 != -1) {
										// 0x58bfc
										function_8bce4(0, 5);
										v86 = g35 + g36;
										v22 = 46;
										v64 = v86 + 0x53cc;
										v37 = v86 + 3008;
										// branch -> 0x58c1c
										while (true) {
											// 0x58c1c
											v63 = v37 + 8;
											v87 = v64 + 8;
											*(int32_t *)v87 = *(int32_t *)v63;
											*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
											v65 = v22 - 1;
											v22 = v65;
											if (v65 != 0) {
												goto lab_0x58c1c_12;
											}
											// 0x58c30
											*(int32_t *)g27 = -1;
											// branch -> 0x58c38
										}
									} else {
										v38 = v36;
									}
								} else {
									v38 = v36;
								}
							}
							// 0x58c38
							v40 = v38;
							if (v38 >= 19) {
								// 0x58c40
								if (v38 <= 24) {
									// 0x58c48
									v66 = g35 + g36 + 3392;
									g27 = v66;
									if (*(int32_t *)v66 != -1) {
										// 0x58c58
										function_8bce4(0, 6);
										v88 = g35 + g36;
										v22 = 46;
										v68 = v88 + 0x53cc;
										v39 = v88 + 3376;
										// branch -> 0x58c78
										while (true) {
											// 0x58c78
											v67 = v39 + 8;
											v89 = v68 + 8;
											*(int32_t *)v89 = *(int32_t *)v67;
											*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
											v69 = v22 - 1;
											v22 = v69;
											if (v69 != 0) {
												goto lab_0x58c78_15;
											}
											// 0x58c8c
											*(int32_t *)g27 = -1;
											// branch -> 0x58c94
										}
									} else {
										v40 = v38;
									}
								} else {
									v40 = v38;
								}
							}
							// 0x58c94
							if (v40 >= 25) {
								// 0x58c9c
								if (v40 <= 64) {
									// 0x58ca4
									v70 = v40 - 25;
									v71 = g36 + 0x482c + g35;
									if (*(char *)(v71 + v40 - 25) != 0) {
										// 0x58cc0
										v101 = *(char *)(v71 + v70);
										v90 = v101;
										v26 = v90;
										if (v101 < 1) {
											// 0x58cd4
											v26 = -v90;
											// branch -> 0x58cdc
										}
										// 0x58cdc
										result = v26;
										v41 = g33;
										v77 = v41;
										v22 = 4;
										v23 = -v26;
										v25 = 0;
										v24 = 0;
										v42 = v26;
										v93 = v41;
										// branch -> 0x58cf4
										while (true) {
											// 0x58cf4
											v91 = (char *)(v93 + 0x482c);
											v92 = (int32_t)*v91;
											if (v42 == v92) {
												goto lab_0x58d0c_18;
											}
											goto lab_0x58d04_18;
										}
									}
								}
							}
							// 0x59058
							v43 = g31;
							if (v43 >= 65) {
								// 0x59060
								v94 = g35 + g36;
								v72 = 368 * (v43 - 65);
								v4 = v72;
								v73 = v94 + 0x485c;
								v25 = v73;
								if (*(int32_t *)(v73 + v72) != -1) {
									// 0x5907c
									v22 = 46;
									v75 = v94 + 0x53cc;
									v44 = v94 + v72 + 0x484c;
									// branch -> 0x59094
									while (true) {
										// 0x59094
										v74 = v44 + 8;
										v95 = v75 + 8;
										*(int32_t *)v95 = *(int32_t *)v74;
										*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
										v76 = v22 - 1;
										v22 = v76;
										if (v76 != 0) {
											goto lab_0x59094_22;
										}
										// 0x590a8
										*(int32_t *)(v4 + v25) = -1;
										*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
										// branch -> 0x590bc
									}
								}
							}
							// 0x590bc
							v96 = *(int32_t *)g32;
							if (v96 == -1) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x590c8
							if (v96 == 11) {
								// 0x590d0
								*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
								// branch -> 0x590e0
							}
							// 0x590e0
							function_5cfd4(g28, 1);
							function_59724(g28);
							if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
								// 0x59104
								g34 = 50;
								PlaySFX(50);
								g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
								SetCursor_();
								v45 = g23;
								v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
								v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
								v99 = g29 - (v97 / 2 | v97 & -0x80000000);
								a2 = v99;
								v100 = g30 - (v98 / 2 | v98 & -0x80000000);
								a3 = v100;
								g34 = v99;
								function_ebc50(v99, v100);
								*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
								*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
								// branch -> 0x5915c
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x58a68
							v104 = v77;
							v105 = v24;
							// branch -> 0x58a68
							continue;
						}
					}
				}
				// 0x58a84
				v28 = g31;
				v30 = v28;
				if (v28 == 4) {
					// 0x58a8c
					v46 = g35 + g36 + 1552;
					g27 = v46;
					if (*(int32_t *)v46 != -1) {
						// 0x58a9c
						function_8bce4(0, 1);
						v78 = g35 + g36;
						v22 = 46;
						v48 = v78 + 0x53cc;
						v29 = v78 + 1536;
						// branch -> 0x58abc
						while (true) {
							// 0x58abc
							v47 = v29 + 8;
							v79 = v48 + 8;
							*(int32_t *)v79 = *(int32_t *)v47;
							*(int32_t *)(v48 + 12) = *(int32_t *)(v29 + 12);
							v49 = v22 - 1;
							v22 = v49;
							if (v49 != 0) {
								goto lab_0x58abc_3;
							}
							// 0x58ad0
							*(int32_t *)g27 = -1;
							// branch -> 0x58ad8
						}
					} else {
						v30 = 4;
					}
				}
				// 0x58ad8
				v32 = v30;
				if (v30 == 5) {
					// 0x58ae0
					v50 = g35 + g36 + 1920;
					g27 = v50;
					if (*(int32_t *)v50 != -1) {
						// 0x58af0
						function_8bce4(0, 2);
						v80 = g35 + g36;
						v22 = 46;
						v52 = v80 + 0x53cc;
						v31 = v80 + 1904;
						// branch -> 0x58b10
						while (true) {
							// 0x58b10
							v51 = v31 + 8;
							v81 = v52 + 8;
							*(int32_t *)v81 = *(int32_t *)v51;
							*(int32_t *)(v52 + 12) = *(int32_t *)(v31 + 12);
							v53 = v22 - 1;
							v22 = v53;
							if (v53 != 0) {
								goto lab_0x58b10_5;
							}
							// 0x58b24
							*(int32_t *)g27 = -1;
							// branch -> 0x58b2c
						}
					} else {
						v32 = 5;
					}
				}
				// 0x58b2c
				v34 = v32;
				if (v32 == 6) {
					// 0x58b34
					v54 = g35 + g36 + 2288;
					g27 = v54;
					if (*(int32_t *)v54 != -1) {
						// 0x58b44
						function_8bce4(0, 3);
						v82 = g35 + g36;
						v22 = 46;
						v56 = v82 + 0x53cc;
						v33 = v82 + 2272;
						// branch -> 0x58b64
						while (true) {
							// 0x58b64
							v55 = v33 + 8;
							v83 = v56 + 8;
							*(int32_t *)v83 = *(int32_t *)v55;
							*(int32_t *)(v56 + 12) = *(int32_t *)(v33 + 12);
							v57 = v22 - 1;
							v22 = v57;
							if (v57 != 0) {
								goto lab_0x58b64_7;
							}
							// 0x58b78
							*(int32_t *)g27 = -1;
							// branch -> 0x58b80
						}
					} else {
						v34 = 6;
					}
				}
				// 0x58b80
				v36 = v34;
				if (v34 >= 7) {
					// 0x58b88
					if (v34 <= 12) {
						// 0x58b90
						v58 = g35 + g36 + 2656;
						g27 = v58;
						if (*(int32_t *)v58 != -1) {
							// 0x58ba0
							function_8bce4(0, 4);
							v84 = g35 + g36;
							v22 = 46;
							v60 = v84 + 0x53cc;
							v35 = v84 + 2640;
							// branch -> 0x58bc0
							while (true) {
								// 0x58bc0
								v59 = v35 + 8;
								v85 = v60 + 8;
								*(int32_t *)v85 = *(int32_t *)v59;
								*(int32_t *)(v60 + 12) = *(int32_t *)(v35 + 12);
								v61 = v22 - 1;
								v22 = v61;
								if (v61 != 0) {
									goto lab_0x58bc0_9;
								}
								// 0x58bd4
								*(int32_t *)g27 = -1;
								// branch -> 0x58bdc
							}
						} else {
							v36 = v34;
						}
					} else {
						v36 = v34;
					}
				}
				// 0x58bdc
				v38 = v36;
				if (v36 >= 13) {
					// 0x58be4
					if (v36 <= 18) {
						// 0x58bec
						v62 = g35 + g36 + 3024;
						g27 = v62;
						if (*(int32_t *)v62 != -1) {
							// 0x58bfc
							function_8bce4(0, 5);
							v86 = g35 + g36;
							v22 = 46;
							v64 = v86 + 0x53cc;
							v37 = v86 + 3008;
							// branch -> 0x58c1c
							while (true) {
								// 0x58c1c
								v63 = v37 + 8;
								v87 = v64 + 8;
								*(int32_t *)v87 = *(int32_t *)v63;
								*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
								v65 = v22 - 1;
								v22 = v65;
								if (v65 != 0) {
									goto lab_0x58c1c_12;
								}
								// 0x58c30
								*(int32_t *)g27 = -1;
								// branch -> 0x58c38
							}
						} else {
							v38 = v36;
						}
					} else {
						v38 = v36;
					}
				}
				// 0x58c38
				v40 = v38;
				if (v38 >= 19) {
					// 0x58c40
					if (v38 <= 24) {
						// 0x58c48
						v66 = g35 + g36 + 3392;
						g27 = v66;
						if (*(int32_t *)v66 != -1) {
							// 0x58c58
							function_8bce4(0, 6);
							v88 = g35 + g36;
							v22 = 46;
							v68 = v88 + 0x53cc;
							v39 = v88 + 3376;
							// branch -> 0x58c78
							while (true) {
								// 0x58c78
								v67 = v39 + 8;
								v89 = v68 + 8;
								*(int32_t *)v89 = *(int32_t *)v67;
								*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
								v69 = v22 - 1;
								v22 = v69;
								if (v69 != 0) {
									goto lab_0x58c78_15;
								}
								// 0x58c8c
								*(int32_t *)g27 = -1;
								// branch -> 0x58c94
							}
						} else {
							v40 = v38;
						}
					} else {
						v40 = v38;
					}
				}
				// 0x58c94
				if (v40 >= 25) {
					// 0x58c9c
					if (v40 <= 64) {
						// 0x58ca4
						v70 = v40 - 25;
						v71 = g36 + 0x482c + g35;
						if (*(char *)(v71 + v40 - 25) != 0) {
							// 0x58cc0
							v101 = *(char *)(v71 + v70);
							v90 = v101;
							v26 = v90;
							if (v101 < 1) {
								// 0x58cd4
								v26 = -v90;
								// branch -> 0x58cdc
							}
							// 0x58cdc
							result = v26;
							v41 = g33;
							v77 = v41;
							v22 = 4;
							v23 = -v26;
							v25 = 0;
							v24 = 0;
							v42 = v26;
							v93 = v41;
							// branch -> 0x58cf4
							while (true) {
								// 0x58cf4
								v91 = (char *)(v93 + 0x482c);
								v92 = (int32_t)*v91;
								if (v42 == v92) {
									goto lab_0x58d0c_18;
								}
								goto lab_0x58d04_18;
							}
						}
					}
				}
				// 0x59058
				v43 = g31;
				if (v43 >= 65) {
					// 0x59060
					v94 = g35 + g36;
					v72 = 368 * (v43 - 65);
					v4 = v72;
					v73 = v94 + 0x485c;
					v25 = v73;
					if (*(int32_t *)(v73 + v72) != -1) {
						// 0x5907c
						v22 = 46;
						v75 = v94 + 0x53cc;
						v44 = v94 + v72 + 0x484c;
						// branch -> 0x59094
						while (true) {
							// 0x59094
							v74 = v44 + 8;
							v95 = v75 + 8;
							*(int32_t *)v95 = *(int32_t *)v74;
							*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
							v76 = v22 - 1;
							v22 = v76;
							if (v76 != 0) {
								goto lab_0x59094_22;
							}
							// 0x590a8
							*(int32_t *)(v4 + v25) = -1;
							*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
							// branch -> 0x590bc
						}
					}
				}
				// 0x590bc
				v96 = *(int32_t *)g32;
				if (v96 == -1) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x590c8
				if (v96 == 11) {
					// 0x590d0
					*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
					// branch -> 0x590e0
				}
				// 0x590e0
				function_5cfd4(g28, 1);
				function_59724(g28);
				if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
					// 0x59104
					g34 = 50;
					PlaySFX(50);
					g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
					SetCursor_();
					v45 = g23;
					v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
					v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
					v99 = g29 - (v97 / 2 | v97 & -0x80000000);
					a2 = v99;
					v100 = g30 - (v98 / 2 | v98 & -0x80000000);
					a3 = v100;
					g34 = v99;
					function_ebc50(v99, v100);
					*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
					*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
					// branch -> 0x5915c
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x58a84
			v28 = g31;
			v30 = v28;
			if (v28 == 4) {
				// 0x58a8c
				v46 = g35 + g36 + 1552;
				g27 = v46;
				if (*(int32_t *)v46 != -1) {
					// 0x58a9c
					function_8bce4(0, 1);
					v78 = g35 + g36;
					v22 = 46;
					v48 = v78 + 0x53cc;
					v29 = v78 + 1536;
					// branch -> 0x58abc
					while (true) {
						// 0x58abc
						v47 = v29 + 8;
						v79 = v48 + 8;
						*(int32_t *)v79 = *(int32_t *)v47;
						*(int32_t *)(v48 + 12) = *(int32_t *)(v29 + 12);
						v49 = v22 - 1;
						v22 = v49;
						if (v49 != 0) {
							goto lab_0x58abc_3;
						}
						// 0x58ad0
						*(int32_t *)g27 = -1;
						// branch -> 0x58ad8
					}
				} else {
					v30 = 4;
				}
			}
			// 0x58ad8
			v32 = v30;
			if (v30 == 5) {
				// 0x58ae0
				v50 = g35 + g36 + 1920;
				g27 = v50;
				if (*(int32_t *)v50 != -1) {
					// 0x58af0
					function_8bce4(0, 2);
					v80 = g35 + g36;
					v22 = 46;
					v52 = v80 + 0x53cc;
					v31 = v80 + 1904;
					// branch -> 0x58b10
					while (true) {
						// 0x58b10
						v51 = v31 + 8;
						v81 = v52 + 8;
						*(int32_t *)v81 = *(int32_t *)v51;
						*(int32_t *)(v52 + 12) = *(int32_t *)(v31 + 12);
						v53 = v22 - 1;
						v22 = v53;
						if (v53 != 0) {
							goto lab_0x58b10_5;
						}
						// 0x58b24
						*(int32_t *)g27 = -1;
						// branch -> 0x58b2c
					}
				} else {
					v32 = 5;
				}
			}
			// 0x58b2c
			v34 = v32;
			if (v32 == 6) {
				// 0x58b34
				v54 = g35 + g36 + 2288;
				g27 = v54;
				if (*(int32_t *)v54 != -1) {
					// 0x58b44
					function_8bce4(0, 3);
					v82 = g35 + g36;
					v22 = 46;
					v56 = v82 + 0x53cc;
					v33 = v82 + 2272;
					// branch -> 0x58b64
					while (true) {
						// 0x58b64
						v55 = v33 + 8;
						v83 = v56 + 8;
						*(int32_t *)v83 = *(int32_t *)v55;
						*(int32_t *)(v56 + 12) = *(int32_t *)(v33 + 12);
						v57 = v22 - 1;
						v22 = v57;
						if (v57 != 0) {
							goto lab_0x58b64_7;
						}
						// 0x58b78
						*(int32_t *)g27 = -1;
						// branch -> 0x58b80
					}
				} else {
					v34 = 6;
				}
			}
			// 0x58b80
			v36 = v34;
			if (v34 >= 7) {
				// 0x58b88
				if (v34 <= 12) {
					// 0x58b90
					v58 = g35 + g36 + 2656;
					g27 = v58;
					if (*(int32_t *)v58 != -1) {
						// 0x58ba0
						function_8bce4(0, 4);
						v84 = g35 + g36;
						v22 = 46;
						v60 = v84 + 0x53cc;
						v35 = v84 + 2640;
						// branch -> 0x58bc0
						while (true) {
							// 0x58bc0
							v59 = v35 + 8;
							v85 = v60 + 8;
							*(int32_t *)v85 = *(int32_t *)v59;
							*(int32_t *)(v60 + 12) = *(int32_t *)(v35 + 12);
							v61 = v22 - 1;
							v22 = v61;
							if (v61 != 0) {
								goto lab_0x58bc0_9;
							}
							// 0x58bd4
							*(int32_t *)g27 = -1;
							// branch -> 0x58bdc
						}
					} else {
						v36 = v34;
					}
				} else {
					v36 = v34;
				}
			}
			// 0x58bdc
			v38 = v36;
			if (v36 >= 13) {
				// 0x58be4
				if (v36 <= 18) {
					// 0x58bec
					v62 = g35 + g36 + 3024;
					g27 = v62;
					if (*(int32_t *)v62 != -1) {
						// 0x58bfc
						function_8bce4(0, 5);
						v86 = g35 + g36;
						v22 = 46;
						v64 = v86 + 0x53cc;
						v37 = v86 + 3008;
						// branch -> 0x58c1c
						while (true) {
							// 0x58c1c
							v63 = v37 + 8;
							v87 = v64 + 8;
							*(int32_t *)v87 = *(int32_t *)v63;
							*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
							v65 = v22 - 1;
							v22 = v65;
							if (v65 != 0) {
								goto lab_0x58c1c_12;
							}
							// 0x58c30
							*(int32_t *)g27 = -1;
							// branch -> 0x58c38
						}
					} else {
						v38 = v36;
					}
				} else {
					v38 = v36;
				}
			}
			// 0x58c38
			v40 = v38;
			if (v38 >= 19) {
				// 0x58c40
				if (v38 <= 24) {
					// 0x58c48
					v66 = g35 + g36 + 3392;
					g27 = v66;
					if (*(int32_t *)v66 != -1) {
						// 0x58c58
						function_8bce4(0, 6);
						v88 = g35 + g36;
						v22 = 46;
						v68 = v88 + 0x53cc;
						v39 = v88 + 3376;
						// branch -> 0x58c78
						while (true) {
							// 0x58c78
							v67 = v39 + 8;
							v89 = v68 + 8;
							*(int32_t *)v89 = *(int32_t *)v67;
							*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
							v69 = v22 - 1;
							v22 = v69;
							if (v69 != 0) {
								goto lab_0x58c78_15;
							}
							// 0x58c8c
							*(int32_t *)g27 = -1;
							// branch -> 0x58c94
						}
					} else {
						v40 = v38;
					}
				} else {
					v40 = v38;
				}
			}
			// 0x58c94
			if (v40 >= 25) {
				// 0x58c9c
				if (v40 <= 64) {
					// 0x58ca4
					v70 = v40 - 25;
					v71 = g36 + 0x482c + g35;
					if (*(char *)(v71 + v40 - 25) != 0) {
						// 0x58cc0
						v101 = *(char *)(v71 + v70);
						v90 = v101;
						v26 = v90;
						if (v101 < 1) {
							// 0x58cd4
							v26 = -v90;
							// branch -> 0x58cdc
						}
						// 0x58cdc
						result = v26;
						v41 = g33;
						v77 = v41;
						v22 = 4;
						v23 = -v26;
						v25 = 0;
						v24 = 0;
						v42 = v26;
						v93 = v41;
						// branch -> 0x58cf4
						while (true) {
							// 0x58cf4
							v91 = (char *)(v93 + 0x482c);
							v92 = (int32_t)*v91;
							if (v42 == v92) {
								goto lab_0x58d0c_18;
							}
							goto lab_0x58d04_18;
						}
					}
				}
			}
			// 0x59058
			v43 = g31;
			if (v43 >= 65) {
				// 0x59060
				v94 = g35 + g36;
				v72 = 368 * (v43 - 65);
				v4 = v72;
				v73 = v94 + 0x485c;
				v25 = v73;
				if (*(int32_t *)(v73 + v72) != -1) {
					// 0x5907c
					v22 = 46;
					v75 = v94 + 0x53cc;
					v44 = v94 + v72 + 0x484c;
					// branch -> 0x59094
					while (true) {
						// 0x59094
						v74 = v44 + 8;
						v95 = v75 + 8;
						*(int32_t *)v95 = *(int32_t *)v74;
						*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
						v76 = v22 - 1;
						v22 = v76;
						if (v76 != 0) {
							goto lab_0x59094_22;
						}
						// 0x590a8
						*(int32_t *)(v4 + v25) = -1;
						*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
						// branch -> 0x590bc
					}
				}
			}
			// 0x590bc
			v96 = *(int32_t *)g32;
			if (v96 == -1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x590c8
			if (v96 == 11) {
				// 0x590d0
				*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
				// branch -> 0x590e0
			}
			// 0x590e0
			function_5cfd4(g28, 1);
			function_59724(g28);
			if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x59104
				g34 = 50;
				PlaySFX(50);
				g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
				SetCursor_();
				v45 = g23;
				v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
				v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
				v99 = g29 - (v97 / 2 | v97 & -0x80000000);
				a2 = v99;
				v100 = g30 - (v98 / 2 | v98 & -0x80000000);
				a3 = v100;
				g34 = v99;
				function_ebc50(v99, v100);
				*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
				*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
				// branch -> 0x5915c
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x58a84
		v28 = g31;
		v30 = v28;
		if (v28 == 4) {
			// 0x58a8c
			v46 = g35 + g36 + 1552;
			g27 = v46;
			if (*(int32_t *)v46 != -1) {
				// 0x58a9c
				function_8bce4(0, 1);
				v78 = g35 + g36;
				v22 = 46;
				v48 = v78 + 0x53cc;
				v29 = v78 + 1536;
				// branch -> 0x58abc
				while (true) {
					// 0x58abc
					v47 = v29 + 8;
					v79 = v48 + 8;
					*(int32_t *)v79 = *(int32_t *)v47;
					*(int32_t *)(v48 + 12) = *(int32_t *)(v29 + 12);
					v49 = v22 - 1;
					v22 = v49;
					if (v49 != 0) {
						goto lab_0x58abc_3;
					}
					// 0x58ad0
					*(int32_t *)g27 = -1;
					// branch -> 0x58ad8
				}
			} else {
				v30 = 4;
			}
			// 0x58ad8
			v32 = v30;
			if (v30 == 5) {
				// 0x58ae0
				v50 = g35 + g36 + 1920;
				g27 = v50;
				if (*(int32_t *)v50 != -1) {
					// 0x58af0
					function_8bce4(0, 2);
					v80 = g35 + g36;
					v22 = 46;
					v52 = v80 + 0x53cc;
					v31 = v80 + 1904;
					// branch -> 0x58b10
					while (true) {
						// 0x58b10
						v51 = v31 + 8;
						v81 = v52 + 8;
						*(int32_t *)v81 = *(int32_t *)v51;
						*(int32_t *)(v52 + 12) = *(int32_t *)(v31 + 12);
						v53 = v22 - 1;
						v22 = v53;
						if (v53 != 0) {
							goto lab_0x58b10_5;
						}
						// 0x58b24
						*(int32_t *)g27 = -1;
						// branch -> 0x58b2c
					}
				} else {
					v32 = 5;
				}
			}
			// 0x58b2c
			v34 = v32;
			if (v32 == 6) {
				// 0x58b34
				v54 = g35 + g36 + 2288;
				g27 = v54;
				if (*(int32_t *)v54 != -1) {
					// 0x58b44
					function_8bce4(0, 3);
					v82 = g35 + g36;
					v22 = 46;
					v56 = v82 + 0x53cc;
					v33 = v82 + 2272;
					// branch -> 0x58b64
					while (true) {
						// 0x58b64
						v55 = v33 + 8;
						v83 = v56 + 8;
						*(int32_t *)v83 = *(int32_t *)v55;
						*(int32_t *)(v56 + 12) = *(int32_t *)(v33 + 12);
						v57 = v22 - 1;
						v22 = v57;
						if (v57 != 0) {
							goto lab_0x58b64_7;
						}
						// 0x58b78
						*(int32_t *)g27 = -1;
						// branch -> 0x58b80
					}
				} else {
					v34 = 6;
				}
			}
			// 0x58b80
			v36 = v34;
			if (v34 >= 7) {
				// 0x58b88
				if (v34 <= 12) {
					// 0x58b90
					v58 = g35 + g36 + 2656;
					g27 = v58;
					if (*(int32_t *)v58 != -1) {
						// 0x58ba0
						function_8bce4(0, 4);
						v84 = g35 + g36;
						v22 = 46;
						v60 = v84 + 0x53cc;
						v35 = v84 + 2640;
						// branch -> 0x58bc0
						while (true) {
							// 0x58bc0
							v59 = v35 + 8;
							v85 = v60 + 8;
							*(int32_t *)v85 = *(int32_t *)v59;
							*(int32_t *)(v60 + 12) = *(int32_t *)(v35 + 12);
							v61 = v22 - 1;
							v22 = v61;
							if (v61 != 0) {
								goto lab_0x58bc0_9;
							}
							// 0x58bd4
							*(int32_t *)g27 = -1;
							// branch -> 0x58bdc
						}
					} else {
						v36 = v34;
					}
				} else {
					v36 = v34;
				}
			}
			// 0x58bdc
			v38 = v36;
			if (v36 >= 13) {
				// 0x58be4
				if (v36 <= 18) {
					// 0x58bec
					v62 = g35 + g36 + 3024;
					g27 = v62;
					if (*(int32_t *)v62 != -1) {
						// 0x58bfc
						function_8bce4(0, 5);
						v86 = g35 + g36;
						v22 = 46;
						v64 = v86 + 0x53cc;
						v37 = v86 + 3008;
						// branch -> 0x58c1c
						while (true) {
							// 0x58c1c
							v63 = v37 + 8;
							v87 = v64 + 8;
							*(int32_t *)v87 = *(int32_t *)v63;
							*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
							v65 = v22 - 1;
							v22 = v65;
							if (v65 != 0) {
								goto lab_0x58c1c_12;
							}
							// 0x58c30
							*(int32_t *)g27 = -1;
							// branch -> 0x58c38
						}
					} else {
						v38 = v36;
					}
				} else {
					v38 = v36;
				}
			}
			// 0x58c38
			v40 = v38;
			if (v38 >= 19) {
				// 0x58c40
				if (v38 <= 24) {
					// 0x58c48
					v66 = g35 + g36 + 3392;
					g27 = v66;
					if (*(int32_t *)v66 != -1) {
						// 0x58c58
						function_8bce4(0, 6);
						v88 = g35 + g36;
						v22 = 46;
						v68 = v88 + 0x53cc;
						v39 = v88 + 3376;
						// branch -> 0x58c78
						while (true) {
							// 0x58c78
							v67 = v39 + 8;
							v89 = v68 + 8;
							*(int32_t *)v89 = *(int32_t *)v67;
							*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
							v69 = v22 - 1;
							v22 = v69;
							if (v69 != 0) {
								goto lab_0x58c78_15;
							}
							// 0x58c8c
							*(int32_t *)g27 = -1;
							// branch -> 0x58c94
						}
					} else {
						v40 = v38;
					}
				} else {
					v40 = v38;
				}
			}
			// 0x58c94
			if (v40 >= 25) {
				// 0x58c9c
				if (v40 <= 64) {
					// 0x58ca4
					v70 = v40 - 25;
					v71 = g36 + 0x482c + g35;
					if (*(char *)(v71 + v40 - 25) != 0) {
						// 0x58cc0
						v101 = *(char *)(v71 + v70);
						v90 = v101;
						v26 = v90;
						if (v101 < 1) {
							// 0x58cd4
							v26 = -v90;
							// branch -> 0x58cdc
						}
						// 0x58cdc
						result = v26;
						v41 = g33;
						v77 = v41;
						v22 = 4;
						v23 = -v26;
						v25 = 0;
						v24 = 0;
						v42 = v26;
						v93 = v41;
						// branch -> 0x58cf4
						while (true) {
							// 0x58cf4
							v91 = (char *)(v93 + 0x482c);
							v92 = (int32_t)*v91;
							if (v42 == v92) {
								goto lab_0x58d0c_18;
							}
							goto lab_0x58d04_18;
						}
					}
				}
			}
			// 0x59058
			v43 = g31;
			if (v43 >= 65) {
				// 0x59060
				v94 = g35 + g36;
				v72 = 368 * (v43 - 65);
				v4 = v72;
				v73 = v94 + 0x485c;
				v25 = v73;
				if (*(int32_t *)(v73 + v72) != -1) {
					// 0x5907c
					v22 = 46;
					v75 = v94 + 0x53cc;
					v44 = v94 + v72 + 0x484c;
					// branch -> 0x59094
					while (true) {
						// 0x59094
						v74 = v44 + 8;
						v95 = v75 + 8;
						*(int32_t *)v95 = *(int32_t *)v74;
						*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
						v76 = v22 - 1;
						v22 = v76;
						if (v76 != 0) {
							goto lab_0x59094_22;
						}
						// 0x590a8
						*(int32_t *)(v4 + v25) = -1;
						*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
						// branch -> 0x590bc
					}
				}
			}
			// 0x590bc
			v96 = *(int32_t *)g32;
			if (v96 == -1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x590c8
			if (v96 == 11) {
				// 0x590d0
				*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
				// branch -> 0x590e0
			}
			// 0x590e0
			function_5cfd4(g28, 1);
			function_59724(g28);
			if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x59104
				g34 = 50;
				PlaySFX(50);
				g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
				SetCursor_();
				v45 = g23;
				v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
				v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
				v99 = g29 - (v97 / 2 | v97 & -0x80000000);
				a2 = v99;
				v100 = g30 - (v98 / 2 | v98 & -0x80000000);
				a3 = v100;
				g34 = v99;
				function_ebc50(v99, v100);
				*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
				*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
				// branch -> 0x5915c
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x58ad8
		v32 = v30;
		if (v30 == 5) {
			// 0x58ae0
			v50 = g35 + g36 + 1920;
			g27 = v50;
			if (*(int32_t *)v50 != -1) {
				// 0x58af0
				function_8bce4(0, 2);
				v80 = g35 + g36;
				v22 = 46;
				v52 = v80 + 0x53cc;
				v31 = v80 + 1904;
				// branch -> 0x58b10
				while (true) {
					// 0x58b10
					v51 = v31 + 8;
					v81 = v52 + 8;
					*(int32_t *)v81 = *(int32_t *)v51;
					*(int32_t *)(v52 + 12) = *(int32_t *)(v31 + 12);
					v53 = v22 - 1;
					v22 = v53;
					if (v53 != 0) {
						goto lab_0x58b10_5;
					}
					// 0x58b24
					*(int32_t *)g27 = -1;
					// branch -> 0x58b2c
				}
			} else {
				v32 = 5;
			}
			// 0x58b2c
			v34 = v32;
			if (v32 == 6) {
				// 0x58b34
				v54 = g35 + g36 + 2288;
				g27 = v54;
				if (*(int32_t *)v54 != -1) {
					// 0x58b44
					function_8bce4(0, 3);
					v82 = g35 + g36;
					v22 = 46;
					v56 = v82 + 0x53cc;
					v33 = v82 + 2272;
					// branch -> 0x58b64
					while (true) {
						// 0x58b64
						v55 = v33 + 8;
						v83 = v56 + 8;
						*(int32_t *)v83 = *(int32_t *)v55;
						*(int32_t *)(v56 + 12) = *(int32_t *)(v33 + 12);
						v57 = v22 - 1;
						v22 = v57;
						if (v57 != 0) {
							goto lab_0x58b64_7;
						}
						// 0x58b78
						*(int32_t *)g27 = -1;
						// branch -> 0x58b80
					}
				} else {
					v34 = 6;
				}
			}
			// 0x58b80
			v36 = v34;
			if (v34 >= 7) {
				// 0x58b88
				if (v34 <= 12) {
					// 0x58b90
					v58 = g35 + g36 + 2656;
					g27 = v58;
					if (*(int32_t *)v58 != -1) {
						// 0x58ba0
						function_8bce4(0, 4);
						v84 = g35 + g36;
						v22 = 46;
						v60 = v84 + 0x53cc;
						v35 = v84 + 2640;
						// branch -> 0x58bc0
						while (true) {
							// 0x58bc0
							v59 = v35 + 8;
							v85 = v60 + 8;
							*(int32_t *)v85 = *(int32_t *)v59;
							*(int32_t *)(v60 + 12) = *(int32_t *)(v35 + 12);
							v61 = v22 - 1;
							v22 = v61;
							if (v61 != 0) {
								goto lab_0x58bc0_9;
							}
							// 0x58bd4
							*(int32_t *)g27 = -1;
							// branch -> 0x58bdc
						}
					} else {
						v36 = v34;
					}
				} else {
					v36 = v34;
				}
			}
			// 0x58bdc
			v38 = v36;
			if (v36 >= 13) {
				// 0x58be4
				if (v36 <= 18) {
					// 0x58bec
					v62 = g35 + g36 + 3024;
					g27 = v62;
					if (*(int32_t *)v62 != -1) {
						// 0x58bfc
						function_8bce4(0, 5);
						v86 = g35 + g36;
						v22 = 46;
						v64 = v86 + 0x53cc;
						v37 = v86 + 3008;
						// branch -> 0x58c1c
						while (true) {
							// 0x58c1c
							v63 = v37 + 8;
							v87 = v64 + 8;
							*(int32_t *)v87 = *(int32_t *)v63;
							*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
							v65 = v22 - 1;
							v22 = v65;
							if (v65 != 0) {
								goto lab_0x58c1c_12;
							}
							// 0x58c30
							*(int32_t *)g27 = -1;
							// branch -> 0x58c38
						}
					} else {
						v38 = v36;
					}
				} else {
					v38 = v36;
				}
			}
			// 0x58c38
			v40 = v38;
			if (v38 >= 19) {
				// 0x58c40
				if (v38 <= 24) {
					// 0x58c48
					v66 = g35 + g36 + 3392;
					g27 = v66;
					if (*(int32_t *)v66 != -1) {
						// 0x58c58
						function_8bce4(0, 6);
						v88 = g35 + g36;
						v22 = 46;
						v68 = v88 + 0x53cc;
						v39 = v88 + 3376;
						// branch -> 0x58c78
						while (true) {
							// 0x58c78
							v67 = v39 + 8;
							v89 = v68 + 8;
							*(int32_t *)v89 = *(int32_t *)v67;
							*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
							v69 = v22 - 1;
							v22 = v69;
							if (v69 != 0) {
								goto lab_0x58c78_15;
							}
							// 0x58c8c
							*(int32_t *)g27 = -1;
							// branch -> 0x58c94
						}
					} else {
						v40 = v38;
					}
				} else {
					v40 = v38;
				}
			}
			// 0x58c94
			if (v40 >= 25) {
				// 0x58c9c
				if (v40 <= 64) {
					// 0x58ca4
					v70 = v40 - 25;
					v71 = g36 + 0x482c + g35;
					if (*(char *)(v71 + v40 - 25) != 0) {
						// 0x58cc0
						v101 = *(char *)(v71 + v70);
						v90 = v101;
						v26 = v90;
						if (v101 < 1) {
							// 0x58cd4
							v26 = -v90;
							// branch -> 0x58cdc
						}
						// 0x58cdc
						result = v26;
						v41 = g33;
						v77 = v41;
						v22 = 4;
						v23 = -v26;
						v25 = 0;
						v24 = 0;
						v42 = v26;
						v93 = v41;
						// branch -> 0x58cf4
						while (true) {
							// 0x58cf4
							v91 = (char *)(v93 + 0x482c);
							v92 = (int32_t)*v91;
							if (v42 == v92) {
								goto lab_0x58d0c_18;
							}
							goto lab_0x58d04_18;
						}
					}
				}
			}
			// 0x59058
			v43 = g31;
			if (v43 >= 65) {
				// 0x59060
				v94 = g35 + g36;
				v72 = 368 * (v43 - 65);
				v4 = v72;
				v73 = v94 + 0x485c;
				v25 = v73;
				if (*(int32_t *)(v73 + v72) != -1) {
					// 0x5907c
					v22 = 46;
					v75 = v94 + 0x53cc;
					v44 = v94 + v72 + 0x484c;
					// branch -> 0x59094
					while (true) {
						// 0x59094
						v74 = v44 + 8;
						v95 = v75 + 8;
						*(int32_t *)v95 = *(int32_t *)v74;
						*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
						v76 = v22 - 1;
						v22 = v76;
						if (v76 != 0) {
							goto lab_0x59094_22;
						}
						// 0x590a8
						*(int32_t *)(v4 + v25) = -1;
						*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
						// branch -> 0x590bc
					}
				}
			}
			// 0x590bc
			v96 = *(int32_t *)g32;
			if (v96 == -1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x590c8
			if (v96 == 11) {
				// 0x590d0
				*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
				// branch -> 0x590e0
			}
			// 0x590e0
			function_5cfd4(g28, 1);
			function_59724(g28);
			if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x59104
				g34 = 50;
				PlaySFX(50);
				g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
				SetCursor_();
				v45 = g23;
				v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
				v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
				v99 = g29 - (v97 / 2 | v97 & -0x80000000);
				a2 = v99;
				v100 = g30 - (v98 / 2 | v98 & -0x80000000);
				a3 = v100;
				g34 = v99;
				function_ebc50(v99, v100);
				*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
				*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
				// branch -> 0x5915c
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x58b2c
		v34 = v32;
		if (v32 == 6) {
			// 0x58b34
			v54 = g35 + g36 + 2288;
			g27 = v54;
			if (*(int32_t *)v54 != -1) {
				// 0x58b44
				function_8bce4(0, 3);
				v82 = g35 + g36;
				v22 = 46;
				v56 = v82 + 0x53cc;
				v33 = v82 + 2272;
				// branch -> 0x58b64
				while (true) {
					// 0x58b64
					v55 = v33 + 8;
					v83 = v56 + 8;
					*(int32_t *)v83 = *(int32_t *)v55;
					*(int32_t *)(v56 + 12) = *(int32_t *)(v33 + 12);
					v57 = v22 - 1;
					v22 = v57;
					if (v57 != 0) {
						goto lab_0x58b64_7;
					}
					// 0x58b78
					*(int32_t *)g27 = -1;
					// branch -> 0x58b80
				}
			} else {
				v34 = 6;
			}
			// 0x58b80
			v36 = v34;
			if (v34 >= 7) {
				// 0x58b88
				if (v34 <= 12) {
					// 0x58b90
					v58 = g35 + g36 + 2656;
					g27 = v58;
					if (*(int32_t *)v58 != -1) {
						// 0x58ba0
						function_8bce4(0, 4);
						v84 = g35 + g36;
						v22 = 46;
						v60 = v84 + 0x53cc;
						v35 = v84 + 2640;
						// branch -> 0x58bc0
						while (true) {
							// 0x58bc0
							v59 = v35 + 8;
							v85 = v60 + 8;
							*(int32_t *)v85 = *(int32_t *)v59;
							*(int32_t *)(v60 + 12) = *(int32_t *)(v35 + 12);
							v61 = v22 - 1;
							v22 = v61;
							if (v61 != 0) {
								goto lab_0x58bc0_9;
							}
							// 0x58bd4
							*(int32_t *)g27 = -1;
							// branch -> 0x58bdc
						}
					} else {
						v36 = v34;
					}
				} else {
					v36 = v34;
				}
			}
			// 0x58bdc
			v38 = v36;
			if (v36 >= 13) {
				// 0x58be4
				if (v36 <= 18) {
					// 0x58bec
					v62 = g35 + g36 + 3024;
					g27 = v62;
					if (*(int32_t *)v62 != -1) {
						// 0x58bfc
						function_8bce4(0, 5);
						v86 = g35 + g36;
						v22 = 46;
						v64 = v86 + 0x53cc;
						v37 = v86 + 3008;
						// branch -> 0x58c1c
						while (true) {
							// 0x58c1c
							v63 = v37 + 8;
							v87 = v64 + 8;
							*(int32_t *)v87 = *(int32_t *)v63;
							*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
							v65 = v22 - 1;
							v22 = v65;
							if (v65 != 0) {
								goto lab_0x58c1c_12;
							}
							// 0x58c30
							*(int32_t *)g27 = -1;
							// branch -> 0x58c38
						}
					} else {
						v38 = v36;
					}
				} else {
					v38 = v36;
				}
			}
			// 0x58c38
			v40 = v38;
			if (v38 >= 19) {
				// 0x58c40
				if (v38 <= 24) {
					// 0x58c48
					v66 = g35 + g36 + 3392;
					g27 = v66;
					if (*(int32_t *)v66 != -1) {
						// 0x58c58
						function_8bce4(0, 6);
						v88 = g35 + g36;
						v22 = 46;
						v68 = v88 + 0x53cc;
						v39 = v88 + 3376;
						// branch -> 0x58c78
						while (true) {
							// 0x58c78
							v67 = v39 + 8;
							v89 = v68 + 8;
							*(int32_t *)v89 = *(int32_t *)v67;
							*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
							v69 = v22 - 1;
							v22 = v69;
							if (v69 != 0) {
								goto lab_0x58c78_15;
							}
							// 0x58c8c
							*(int32_t *)g27 = -1;
							// branch -> 0x58c94
						}
					} else {
						v40 = v38;
					}
				} else {
					v40 = v38;
				}
			}
			// 0x58c94
			if (v40 >= 25) {
				// 0x58c9c
				if (v40 <= 64) {
					// 0x58ca4
					v70 = v40 - 25;
					v71 = g36 + 0x482c + g35;
					if (*(char *)(v71 + v40 - 25) != 0) {
						// 0x58cc0
						v101 = *(char *)(v71 + v70);
						v90 = v101;
						v26 = v90;
						if (v101 < 1) {
							// 0x58cd4
							v26 = -v90;
							// branch -> 0x58cdc
						}
						// 0x58cdc
						result = v26;
						v41 = g33;
						v77 = v41;
						v22 = 4;
						v23 = -v26;
						v25 = 0;
						v24 = 0;
						v42 = v26;
						v93 = v41;
						// branch -> 0x58cf4
						while (true) {
							// 0x58cf4
							v91 = (char *)(v93 + 0x482c);
							v92 = (int32_t)*v91;
							if (v42 == v92) {
								goto lab_0x58d0c_18;
							}
							goto lab_0x58d04_18;
						}
					}
				}
			}
			// 0x59058
			v43 = g31;
			if (v43 >= 65) {
				// 0x59060
				v94 = g35 + g36;
				v72 = 368 * (v43 - 65);
				v4 = v72;
				v73 = v94 + 0x485c;
				v25 = v73;
				if (*(int32_t *)(v73 + v72) != -1) {
					// 0x5907c
					v22 = 46;
					v75 = v94 + 0x53cc;
					v44 = v94 + v72 + 0x484c;
					// branch -> 0x59094
					while (true) {
						// 0x59094
						v74 = v44 + 8;
						v95 = v75 + 8;
						*(int32_t *)v95 = *(int32_t *)v74;
						*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
						v76 = v22 - 1;
						v22 = v76;
						if (v76 != 0) {
							goto lab_0x59094_22;
						}
						// 0x590a8
						*(int32_t *)(v4 + v25) = -1;
						*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
						// branch -> 0x590bc
					}
				}
			}
			// 0x590bc
			v96 = *(int32_t *)g32;
			if (v96 == -1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x590c8
			if (v96 == 11) {
				// 0x590d0
				*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
				// branch -> 0x590e0
			}
			// 0x590e0
			function_5cfd4(g28, 1);
			function_59724(g28);
			if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x59104
				g34 = 50;
				PlaySFX(50);
				g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
				SetCursor_();
				v45 = g23;
				v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
				v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
				v99 = g29 - (v97 / 2 | v97 & -0x80000000);
				a2 = v99;
				v100 = g30 - (v98 / 2 | v98 & -0x80000000);
				a3 = v100;
				g34 = v99;
				function_ebc50(v99, v100);
				*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
				*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
				// branch -> 0x5915c
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x58b80
		v36 = v34;
		if (v34 >= 7) {
			// 0x58b88
			if (v34 <= 12) {
				// 0x58b90
				v58 = g35 + g36 + 2656;
				g27 = v58;
				if (*(int32_t *)v58 != -1) {
					// 0x58ba0
					function_8bce4(0, 4);
					v84 = g35 + g36;
					v22 = 46;
					v60 = v84 + 0x53cc;
					v35 = v84 + 2640;
					// branch -> 0x58bc0
					while (true) {
						// 0x58bc0
						v59 = v35 + 8;
						v85 = v60 + 8;
						*(int32_t *)v85 = *(int32_t *)v59;
						*(int32_t *)(v60 + 12) = *(int32_t *)(v35 + 12);
						v61 = v22 - 1;
						v22 = v61;
						if (v61 != 0) {
							goto lab_0x58bc0_9;
						}
						// 0x58bd4
						*(int32_t *)g27 = -1;
						// branch -> 0x58bdc
					}
				} else {
					v36 = v34;
				}
				// 0x58bdc
				v38 = v36;
				if (v36 >= 13) {
					// 0x58be4
					if (v36 <= 18) {
						// 0x58bec
						v62 = g35 + g36 + 3024;
						g27 = v62;
						if (*(int32_t *)v62 != -1) {
							// 0x58bfc
							function_8bce4(0, 5);
							v86 = g35 + g36;
							v22 = 46;
							v64 = v86 + 0x53cc;
							v37 = v86 + 3008;
							// branch -> 0x58c1c
							while (true) {
								// 0x58c1c
								v63 = v37 + 8;
								v87 = v64 + 8;
								*(int32_t *)v87 = *(int32_t *)v63;
								*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
								v65 = v22 - 1;
								v22 = v65;
								if (v65 != 0) {
									goto lab_0x58c1c_12;
								}
								// 0x58c30
								*(int32_t *)g27 = -1;
								// branch -> 0x58c38
							}
						} else {
							v38 = v36;
						}
					} else {
						v38 = v36;
					}
				}
				// 0x58c38
				v40 = v38;
				if (v38 >= 19) {
					// 0x58c40
					if (v38 <= 24) {
						// 0x58c48
						v66 = g35 + g36 + 3392;
						g27 = v66;
						if (*(int32_t *)v66 != -1) {
							// 0x58c58
							function_8bce4(0, 6);
							v88 = g35 + g36;
							v22 = 46;
							v68 = v88 + 0x53cc;
							v39 = v88 + 3376;
							// branch -> 0x58c78
							while (true) {
								// 0x58c78
								v67 = v39 + 8;
								v89 = v68 + 8;
								*(int32_t *)v89 = *(int32_t *)v67;
								*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
								v69 = v22 - 1;
								v22 = v69;
								if (v69 != 0) {
									goto lab_0x58c78_15;
								}
								// 0x58c8c
								*(int32_t *)g27 = -1;
								// branch -> 0x58c94
							}
						} else {
							v40 = v38;
						}
					} else {
						v40 = v38;
					}
				}
				// 0x58c94
				if (v40 >= 25) {
					// 0x58c9c
					if (v40 <= 64) {
						// 0x58ca4
						v70 = v40 - 25;
						v71 = g36 + 0x482c + g35;
						if (*(char *)(v71 + v40 - 25) != 0) {
							// 0x58cc0
							v101 = *(char *)(v71 + v70);
							v90 = v101;
							v26 = v90;
							if (v101 < 1) {
								// 0x58cd4
								v26 = -v90;
								// branch -> 0x58cdc
							}
							// 0x58cdc
							result = v26;
							v41 = g33;
							v77 = v41;
							v22 = 4;
							v23 = -v26;
							v25 = 0;
							v24 = 0;
							v42 = v26;
							v93 = v41;
							// branch -> 0x58cf4
							while (true) {
								// 0x58cf4
								v91 = (char *)(v93 + 0x482c);
								v92 = (int32_t)*v91;
								if (v42 == v92) {
									goto lab_0x58d0c_18;
								}
								goto lab_0x58d04_18;
							}
						}
					}
				}
				// 0x59058
				v43 = g31;
				if (v43 >= 65) {
					// 0x59060
					v94 = g35 + g36;
					v72 = 368 * (v43 - 65);
					v4 = v72;
					v73 = v94 + 0x485c;
					v25 = v73;
					if (*(int32_t *)(v73 + v72) != -1) {
						// 0x5907c
						v22 = 46;
						v75 = v94 + 0x53cc;
						v44 = v94 + v72 + 0x484c;
						// branch -> 0x59094
						while (true) {
							// 0x59094
							v74 = v44 + 8;
							v95 = v75 + 8;
							*(int32_t *)v95 = *(int32_t *)v74;
							*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
							v76 = v22 - 1;
							v22 = v76;
							if (v76 != 0) {
								goto lab_0x59094_22;
							}
							// 0x590a8
							*(int32_t *)(v4 + v25) = -1;
							*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
							// branch -> 0x590bc
						}
					}
				}
				// 0x590bc
				v96 = *(int32_t *)g32;
				if (v96 == -1) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x590c8
				if (v96 == 11) {
					// 0x590d0
					*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
					// branch -> 0x590e0
				}
				// 0x590e0
				function_5cfd4(g28, 1);
				function_59724(g28);
				if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
					// 0x59104
					g34 = 50;
					PlaySFX(50);
					g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
					SetCursor_();
					v45 = g23;
					v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
					v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
					v99 = g29 - (v97 / 2 | v97 & -0x80000000);
					a2 = v99;
					v100 = g30 - (v98 / 2 | v98 & -0x80000000);
					a3 = v100;
					g34 = v99;
					function_ebc50(v99, v100);
					*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
					*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
					// branch -> 0x5915c
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				v36 = v34;
			}
			// 0x58bdc
			v38 = v36;
			if (v36 >= 13) {
				// 0x58be4
				if (v36 <= 18) {
					// 0x58bec
					v62 = g35 + g36 + 3024;
					g27 = v62;
					if (*(int32_t *)v62 != -1) {
						// 0x58bfc
						function_8bce4(0, 5);
						v86 = g35 + g36;
						v22 = 46;
						v64 = v86 + 0x53cc;
						v37 = v86 + 3008;
						// branch -> 0x58c1c
						while (true) {
							// 0x58c1c
							v63 = v37 + 8;
							v87 = v64 + 8;
							*(int32_t *)v87 = *(int32_t *)v63;
							*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
							v65 = v22 - 1;
							v22 = v65;
							if (v65 != 0) {
								goto lab_0x58c1c_12;
							}
							// 0x58c30
							*(int32_t *)g27 = -1;
							// branch -> 0x58c38
						}
					} else {
						v38 = v36;
					}
				} else {
					v38 = v36;
				}
			}
			// 0x58c38
			v40 = v38;
			if (v38 >= 19) {
				// 0x58c40
				if (v38 <= 24) {
					// 0x58c48
					v66 = g35 + g36 + 3392;
					g27 = v66;
					if (*(int32_t *)v66 != -1) {
						// 0x58c58
						function_8bce4(0, 6);
						v88 = g35 + g36;
						v22 = 46;
						v68 = v88 + 0x53cc;
						v39 = v88 + 3376;
						// branch -> 0x58c78
						while (true) {
							// 0x58c78
							v67 = v39 + 8;
							v89 = v68 + 8;
							*(int32_t *)v89 = *(int32_t *)v67;
							*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
							v69 = v22 - 1;
							v22 = v69;
							if (v69 != 0) {
								goto lab_0x58c78_15;
							}
							// 0x58c8c
							*(int32_t *)g27 = -1;
							// branch -> 0x58c94
						}
					} else {
						v40 = v38;
					}
				} else {
					v40 = v38;
				}
			}
			// 0x58c94
			if (v40 >= 25) {
				// 0x58c9c
				if (v40 <= 64) {
					// 0x58ca4
					v70 = v40 - 25;
					v71 = g36 + 0x482c + g35;
					if (*(char *)(v71 + v40 - 25) != 0) {
						// 0x58cc0
						v101 = *(char *)(v71 + v70);
						v90 = v101;
						v26 = v90;
						if (v101 < 1) {
							// 0x58cd4
							v26 = -v90;
							// branch -> 0x58cdc
						}
						// 0x58cdc
						result = v26;
						v41 = g33;
						v77 = v41;
						v22 = 4;
						v23 = -v26;
						v25 = 0;
						v24 = 0;
						v42 = v26;
						v93 = v41;
						// branch -> 0x58cf4
						while (true) {
							// 0x58cf4
							v91 = (char *)(v93 + 0x482c);
							v92 = (int32_t)*v91;
							if (v42 == v92) {
								goto lab_0x58d0c_18;
							}
							goto lab_0x58d04_18;
						}
					}
				}
			}
			// 0x59058
			v43 = g31;
			if (v43 >= 65) {
				// 0x59060
				v94 = g35 + g36;
				v72 = 368 * (v43 - 65);
				v4 = v72;
				v73 = v94 + 0x485c;
				v25 = v73;
				if (*(int32_t *)(v73 + v72) != -1) {
					// 0x5907c
					v22 = 46;
					v75 = v94 + 0x53cc;
					v44 = v94 + v72 + 0x484c;
					// branch -> 0x59094
					while (true) {
						// 0x59094
						v74 = v44 + 8;
						v95 = v75 + 8;
						*(int32_t *)v95 = *(int32_t *)v74;
						*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
						v76 = v22 - 1;
						v22 = v76;
						if (v76 != 0) {
							goto lab_0x59094_22;
						}
						// 0x590a8
						*(int32_t *)(v4 + v25) = -1;
						*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
						// branch -> 0x590bc
					}
				}
			}
			// 0x590bc
			v96 = *(int32_t *)g32;
			if (v96 == -1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x590c8
			if (v96 == 11) {
				// 0x590d0
				*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
				// branch -> 0x590e0
			}
			// 0x590e0
			function_5cfd4(g28, 1);
			function_59724(g28);
			if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x59104
				g34 = 50;
				PlaySFX(50);
				g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
				SetCursor_();
				v45 = g23;
				v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
				v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
				v99 = g29 - (v97 / 2 | v97 & -0x80000000);
				a2 = v99;
				v100 = g30 - (v98 / 2 | v98 & -0x80000000);
				a3 = v100;
				g34 = v99;
				function_ebc50(v99, v100);
				*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
				*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
				// branch -> 0x5915c
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x58bdc
		v38 = v36;
		if (v36 >= 13) {
			// 0x58be4
			if (v36 <= 18) {
				// 0x58bec
				v62 = g35 + g36 + 3024;
				g27 = v62;
				if (*(int32_t *)v62 != -1) {
					// 0x58bfc
					function_8bce4(0, 5);
					v86 = g35 + g36;
					v22 = 46;
					v64 = v86 + 0x53cc;
					v37 = v86 + 3008;
					// branch -> 0x58c1c
					while (true) {
						// 0x58c1c
						v63 = v37 + 8;
						v87 = v64 + 8;
						*(int32_t *)v87 = *(int32_t *)v63;
						*(int32_t *)(v64 + 12) = *(int32_t *)(v37 + 12);
						v65 = v22 - 1;
						v22 = v65;
						if (v65 != 0) {
							goto lab_0x58c1c_12;
						}
						// 0x58c30
						*(int32_t *)g27 = -1;
						// branch -> 0x58c38
					}
				} else {
					v38 = v36;
				}
				// 0x58c38
				v40 = v38;
				if (v38 >= 19) {
					// 0x58c40
					if (v38 <= 24) {
						// 0x58c48
						v66 = g35 + g36 + 3392;
						g27 = v66;
						if (*(int32_t *)v66 != -1) {
							// 0x58c58
							function_8bce4(0, 6);
							v88 = g35 + g36;
							v22 = 46;
							v68 = v88 + 0x53cc;
							v39 = v88 + 3376;
							// branch -> 0x58c78
							while (true) {
								// 0x58c78
								v67 = v39 + 8;
								v89 = v68 + 8;
								*(int32_t *)v89 = *(int32_t *)v67;
								*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
								v69 = v22 - 1;
								v22 = v69;
								if (v69 != 0) {
									goto lab_0x58c78_15;
								}
								// 0x58c8c
								*(int32_t *)g27 = -1;
								// branch -> 0x58c94
							}
						} else {
							v40 = v38;
						}
					} else {
						v40 = v38;
					}
				}
				// 0x58c94
				if (v40 >= 25) {
					// 0x58c9c
					if (v40 <= 64) {
						// 0x58ca4
						v70 = v40 - 25;
						v71 = g36 + 0x482c + g35;
						if (*(char *)(v71 + v40 - 25) != 0) {
							// 0x58cc0
							v101 = *(char *)(v71 + v70);
							v90 = v101;
							v26 = v90;
							if (v101 < 1) {
								// 0x58cd4
								v26 = -v90;
								// branch -> 0x58cdc
							}
							// 0x58cdc
							result = v26;
							v41 = g33;
							v77 = v41;
							v22 = 4;
							v23 = -v26;
							v25 = 0;
							v24 = 0;
							v42 = v26;
							v93 = v41;
							// branch -> 0x58cf4
							while (true) {
								// 0x58cf4
								v91 = (char *)(v93 + 0x482c);
								v92 = (int32_t)*v91;
								if (v42 == v92) {
									goto lab_0x58d0c_18;
								}
								goto lab_0x58d04_18;
							}
						}
					}
				}
				// 0x59058
				v43 = g31;
				if (v43 >= 65) {
					// 0x59060
					v94 = g35 + g36;
					v72 = 368 * (v43 - 65);
					v4 = v72;
					v73 = v94 + 0x485c;
					v25 = v73;
					if (*(int32_t *)(v73 + v72) != -1) {
						// 0x5907c
						v22 = 46;
						v75 = v94 + 0x53cc;
						v44 = v94 + v72 + 0x484c;
						// branch -> 0x59094
						while (true) {
							// 0x59094
							v74 = v44 + 8;
							v95 = v75 + 8;
							*(int32_t *)v95 = *(int32_t *)v74;
							*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
							v76 = v22 - 1;
							v22 = v76;
							if (v76 != 0) {
								goto lab_0x59094_22;
							}
							// 0x590a8
							*(int32_t *)(v4 + v25) = -1;
							*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
							// branch -> 0x590bc
						}
					}
				}
				// 0x590bc
				v96 = *(int32_t *)g32;
				if (v96 == -1) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x590c8
				if (v96 == 11) {
					// 0x590d0
					*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
					// branch -> 0x590e0
				}
				// 0x590e0
				function_5cfd4(g28, 1);
				function_59724(g28);
				if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
					// 0x59104
					g34 = 50;
					PlaySFX(50);
					g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
					SetCursor_();
					v45 = g23;
					v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
					v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
					v99 = g29 - (v97 / 2 | v97 & -0x80000000);
					a2 = v99;
					v100 = g30 - (v98 / 2 | v98 & -0x80000000);
					a3 = v100;
					g34 = v99;
					function_ebc50(v99, v100);
					*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
					*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
					// branch -> 0x5915c
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				v38 = v36;
			}
			// 0x58c38
			v40 = v38;
			if (v38 >= 19) {
				// 0x58c40
				if (v38 <= 24) {
					// 0x58c48
					v66 = g35 + g36 + 3392;
					g27 = v66;
					if (*(int32_t *)v66 != -1) {
						// 0x58c58
						function_8bce4(0, 6);
						v88 = g35 + g36;
						v22 = 46;
						v68 = v88 + 0x53cc;
						v39 = v88 + 3376;
						// branch -> 0x58c78
						while (true) {
							// 0x58c78
							v67 = v39 + 8;
							v89 = v68 + 8;
							*(int32_t *)v89 = *(int32_t *)v67;
							*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
							v69 = v22 - 1;
							v22 = v69;
							if (v69 != 0) {
								goto lab_0x58c78_15;
							}
							// 0x58c8c
							*(int32_t *)g27 = -1;
							// branch -> 0x58c94
						}
					} else {
						v40 = v38;
					}
				} else {
					v40 = v38;
				}
			}
			// 0x58c94
			if (v40 >= 25) {
				// 0x58c9c
				if (v40 <= 64) {
					// 0x58ca4
					v70 = v40 - 25;
					v71 = g36 + 0x482c + g35;
					if (*(char *)(v71 + v40 - 25) != 0) {
						// 0x58cc0
						v101 = *(char *)(v71 + v70);
						v90 = v101;
						v26 = v90;
						if (v101 < 1) {
							// 0x58cd4
							v26 = -v90;
							// branch -> 0x58cdc
						}
						// 0x58cdc
						result = v26;
						v41 = g33;
						v77 = v41;
						v22 = 4;
						v23 = -v26;
						v25 = 0;
						v24 = 0;
						v42 = v26;
						v93 = v41;
						// branch -> 0x58cf4
						while (true) {
							// 0x58cf4
							v91 = (char *)(v93 + 0x482c);
							v92 = (int32_t)*v91;
							if (v42 == v92) {
								goto lab_0x58d0c_18;
							}
							goto lab_0x58d04_18;
						}
					}
				}
			}
			// 0x59058
			v43 = g31;
			if (v43 >= 65) {
				// 0x59060
				v94 = g35 + g36;
				v72 = 368 * (v43 - 65);
				v4 = v72;
				v73 = v94 + 0x485c;
				v25 = v73;
				if (*(int32_t *)(v73 + v72) != -1) {
					// 0x5907c
					v22 = 46;
					v75 = v94 + 0x53cc;
					v44 = v94 + v72 + 0x484c;
					// branch -> 0x59094
					while (true) {
						// 0x59094
						v74 = v44 + 8;
						v95 = v75 + 8;
						*(int32_t *)v95 = *(int32_t *)v74;
						*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
						v76 = v22 - 1;
						v22 = v76;
						if (v76 != 0) {
							goto lab_0x59094_22;
						}
						// 0x590a8
						*(int32_t *)(v4 + v25) = -1;
						*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
						// branch -> 0x590bc
					}
				}
			}
			// 0x590bc
			v96 = *(int32_t *)g32;
			if (v96 == -1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x590c8
			if (v96 == 11) {
				// 0x590d0
				*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
				// branch -> 0x590e0
			}
			// 0x590e0
			function_5cfd4(g28, 1);
			function_59724(g28);
			if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x59104
				g34 = 50;
				PlaySFX(50);
				g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
				SetCursor_();
				v45 = g23;
				v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
				v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
				v99 = g29 - (v97 / 2 | v97 & -0x80000000);
				a2 = v99;
				v100 = g30 - (v98 / 2 | v98 & -0x80000000);
				a3 = v100;
				g34 = v99;
				function_ebc50(v99, v100);
				*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
				*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
				// branch -> 0x5915c
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x58c38
		v40 = v38;
		if (v38 >= 19) {
			// 0x58c40
			if (v38 <= 24) {
				// 0x58c48
				v66 = g35 + g36 + 3392;
				g27 = v66;
				if (*(int32_t *)v66 != -1) {
					// 0x58c58
					function_8bce4(0, 6);
					v88 = g35 + g36;
					v22 = 46;
					v68 = v88 + 0x53cc;
					v39 = v88 + 3376;
					// branch -> 0x58c78
					while (true) {
						// 0x58c78
						v67 = v39 + 8;
						v89 = v68 + 8;
						*(int32_t *)v89 = *(int32_t *)v67;
						*(int32_t *)(v68 + 12) = *(int32_t *)(v39 + 12);
						v69 = v22 - 1;
						v22 = v69;
						if (v69 != 0) {
							goto lab_0x58c78_15;
						}
						// 0x58c8c
						*(int32_t *)g27 = -1;
						// branch -> 0x58c94
					}
				} else {
					v40 = v38;
				}
				// 0x58c94
				if (v40 >= 25) {
					// 0x58c9c
					if (v40 <= 64) {
						// 0x58ca4
						v70 = v40 - 25;
						v71 = g36 + 0x482c + g35;
						if (*(char *)(v71 + v40 - 25) != 0) {
							// 0x58cc0
							v101 = *(char *)(v71 + v70);
							v90 = v101;
							v26 = v90;
							if (v101 < 1) {
								// 0x58cd4
								v26 = -v90;
								// branch -> 0x58cdc
							}
							// 0x58cdc
							result = v26;
							v41 = g33;
							v77 = v41;
							v22 = 4;
							v23 = -v26;
							v25 = 0;
							v24 = 0;
							v42 = v26;
							v93 = v41;
							// branch -> 0x58cf4
							while (true) {
								// 0x58cf4
								v91 = (char *)(v93 + 0x482c);
								v92 = (int32_t)*v91;
								if (v42 == v92) {
									goto lab_0x58d0c_18;
								}
								goto lab_0x58d04_18;
							}
						}
					}
				}
				// 0x59058
				v43 = g31;
				if (v43 >= 65) {
					// 0x59060
					v94 = g35 + g36;
					v72 = 368 * (v43 - 65);
					v4 = v72;
					v73 = v94 + 0x485c;
					v25 = v73;
					if (*(int32_t *)(v73 + v72) != -1) {
						// 0x5907c
						v22 = 46;
						v75 = v94 + 0x53cc;
						v44 = v94 + v72 + 0x484c;
						// branch -> 0x59094
						while (true) {
							// 0x59094
							v74 = v44 + 8;
							v95 = v75 + 8;
							*(int32_t *)v95 = *(int32_t *)v74;
							*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
							v76 = v22 - 1;
							v22 = v76;
							if (v76 != 0) {
								goto lab_0x59094_22;
							}
							// 0x590a8
							*(int32_t *)(v4 + v25) = -1;
							*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
							// branch -> 0x590bc
						}
					}
				}
				// 0x590bc
				v96 = *(int32_t *)g32;
				if (v96 == -1) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x590c8
				if (v96 == 11) {
					// 0x590d0
					*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
					// branch -> 0x590e0
				}
				// 0x590e0
				function_5cfd4(g28, 1);
				function_59724(g28);
				if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
					// 0x59104
					g34 = 50;
					PlaySFX(50);
					g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
					SetCursor_();
					v45 = g23;
					v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
					v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
					v99 = g29 - (v97 / 2 | v97 & -0x80000000);
					a2 = v99;
					v100 = g30 - (v98 / 2 | v98 & -0x80000000);
					a3 = v100;
					g34 = v99;
					function_ebc50(v99, v100);
					*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
					*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
					// branch -> 0x5915c
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				v40 = v38;
			}
			// 0x58c94
			if (v40 >= 25) {
				// 0x58c9c
				if (v40 <= 64) {
					// 0x58ca4
					v70 = v40 - 25;
					v71 = g36 + 0x482c + g35;
					if (*(char *)(v71 + v40 - 25) != 0) {
						// 0x58cc0
						v101 = *(char *)(v71 + v70);
						v90 = v101;
						v26 = v90;
						if (v101 < 1) {
							// 0x58cd4
							v26 = -v90;
							// branch -> 0x58cdc
						}
						// 0x58cdc
						result = v26;
						v41 = g33;
						v77 = v41;
						v22 = 4;
						v23 = -v26;
						v25 = 0;
						v24 = 0;
						v42 = v26;
						v93 = v41;
						// branch -> 0x58cf4
						while (true) {
							// 0x58cf4
							v91 = (char *)(v93 + 0x482c);
							v92 = (int32_t)*v91;
							if (v42 == v92) {
								goto lab_0x58d0c_18;
							}
							goto lab_0x58d04_18;
						}
					}
				}
			}
			// 0x59058
			v43 = g31;
			if (v43 >= 65) {
				// 0x59060
				v94 = g35 + g36;
				v72 = 368 * (v43 - 65);
				v4 = v72;
				v73 = v94 + 0x485c;
				v25 = v73;
				if (*(int32_t *)(v73 + v72) != -1) {
					// 0x5907c
					v22 = 46;
					v75 = v94 + 0x53cc;
					v44 = v94 + v72 + 0x484c;
					// branch -> 0x59094
					while (true) {
						// 0x59094
						v74 = v44 + 8;
						v95 = v75 + 8;
						*(int32_t *)v95 = *(int32_t *)v74;
						*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
						v76 = v22 - 1;
						v22 = v76;
						if (v76 != 0) {
							goto lab_0x59094_22;
						}
						// 0x590a8
						*(int32_t *)(v4 + v25) = -1;
						*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
						// branch -> 0x590bc
					}
				}
			}
			// 0x590bc
			v96 = *(int32_t *)g32;
			if (v96 == -1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x590c8
			if (v96 == 11) {
				// 0x590d0
				*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
				// branch -> 0x590e0
			}
			// 0x590e0
			function_5cfd4(g28, 1);
			function_59724(g28);
			if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x59104
				g34 = 50;
				PlaySFX(50);
				g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
				SetCursor_();
				v45 = g23;
				v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
				v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
				v99 = g29 - (v97 / 2 | v97 & -0x80000000);
				a2 = v99;
				v100 = g30 - (v98 / 2 | v98 & -0x80000000);
				a3 = v100;
				g34 = v99;
				function_ebc50(v99, v100);
				*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
				*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
				// branch -> 0x5915c
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x58c94
		if (v40 >= 25) {
			// 0x58c9c
			if (v40 <= 64) {
				// 0x58ca4
				v70 = v40 - 25;
				v71 = g36 + 0x482c + g35;
				if (*(char *)(v71 + v40 - 25) != 0) {
					// 0x58cc0
					v101 = *(char *)(v71 + v70);
					v90 = v101;
					v26 = v90;
					if (v101 < 1) {
						// 0x58cd4
						v26 = -v90;
						// branch -> 0x58cdc
					}
					// 0x58cdc
					result = v26;
					v41 = g33;
					v77 = v41;
					v22 = 4;
					v23 = -v26;
					v25 = 0;
					v24 = 0;
					v42 = v26;
					v93 = v41;
					// branch -> 0x58cf4
					while (true) {
						// 0x58cf4
						v91 = (char *)(v93 + 0x482c);
						v92 = (int32_t)*v91;
						if (v42 == v92) {
							goto lab_0x58d0c_18;
						}
						goto lab_0x58d04_18;
					}
				}
				// 0x59058
				v43 = g31;
				if (v43 >= 65) {
					// 0x59060
					v94 = g35 + g36;
					v72 = 368 * (v43 - 65);
					v4 = v72;
					v73 = v94 + 0x485c;
					v25 = v73;
					if (*(int32_t *)(v73 + v72) != -1) {
						// 0x5907c
						v22 = 46;
						v75 = v94 + 0x53cc;
						v44 = v94 + v72 + 0x484c;
						// branch -> 0x59094
						while (true) {
							// 0x59094
							v74 = v44 + 8;
							v95 = v75 + 8;
							*(int32_t *)v95 = *(int32_t *)v74;
							*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
							v76 = v22 - 1;
							v22 = v76;
							if (v76 != 0) {
								goto lab_0x59094_22;
							}
							// 0x590a8
							*(int32_t *)(v4 + v25) = -1;
							*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
							// branch -> 0x590bc
						}
					}
				}
				// 0x590bc
				v96 = *(int32_t *)g32;
				if (v96 == -1) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x590c8
				if (v96 == 11) {
					// 0x590d0
					*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
					// branch -> 0x590e0
				}
				// 0x590e0
				function_5cfd4(g28, 1);
				function_59724(g28);
				if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
					// 0x59104
					g34 = 50;
					PlaySFX(50);
					g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
					SetCursor_();
					v45 = g23;
					v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
					v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
					v99 = g29 - (v97 / 2 | v97 & -0x80000000);
					a2 = v99;
					v100 = g30 - (v98 / 2 | v98 & -0x80000000);
					a3 = v100;
					g34 = v99;
					function_ebc50(v99, v100);
					*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
					*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
					// branch -> 0x5915c
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x59058
			v43 = g31;
			if (v43 >= 65) {
				// 0x59060
				v94 = g35 + g36;
				v72 = 368 * (v43 - 65);
				v4 = v72;
				v73 = v94 + 0x485c;
				v25 = v73;
				if (*(int32_t *)(v73 + v72) != -1) {
					// 0x5907c
					v22 = 46;
					v75 = v94 + 0x53cc;
					v44 = v94 + v72 + 0x484c;
					// branch -> 0x59094
					while (true) {
						// 0x59094
						v74 = v44 + 8;
						v95 = v75 + 8;
						*(int32_t *)v95 = *(int32_t *)v74;
						*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
						v76 = v22 - 1;
						v22 = v76;
						if (v76 != 0) {
							goto lab_0x59094_22;
						}
						// 0x590a8
						*(int32_t *)(v4 + v25) = -1;
						*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
						// branch -> 0x590bc
					}
				}
			}
			// 0x590bc
			v96 = *(int32_t *)g32;
			if (v96 == -1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x590c8
			if (v96 == 11) {
				// 0x590d0
				*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
				// branch -> 0x590e0
			}
			// 0x590e0
			function_5cfd4(g28, 1);
			function_59724(g28);
			if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x59104
				g34 = 50;
				PlaySFX(50);
				g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
				SetCursor_();
				v45 = g23;
				v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
				v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
				v99 = g29 - (v97 / 2 | v97 & -0x80000000);
				a2 = v99;
				v100 = g30 - (v98 / 2 | v98 & -0x80000000);
				a3 = v100;
				g34 = v99;
				function_ebc50(v99, v100);
				*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
				*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
				// branch -> 0x5915c
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x59058
		v43 = g31;
		if (v43 >= 65) {
			// 0x59060
			v94 = g35 + g36;
			v72 = 368 * (v43 - 65);
			v4 = v72;
			v73 = v94 + 0x485c;
			v25 = v73;
			if (*(int32_t *)(v73 + v72) != -1) {
				// 0x5907c
				v22 = 46;
				v75 = v94 + 0x53cc;
				v44 = v94 + v72 + 0x484c;
				// branch -> 0x59094
				while (true) {
					// 0x59094
					v74 = v44 + 8;
					v95 = v75 + 8;
					*(int32_t *)v95 = *(int32_t *)v74;
					*(int32_t *)(v75 + 12) = *(int32_t *)(v44 + 12);
					v76 = v22 - 1;
					v22 = v76;
					if (v76 != 0) {
						goto lab_0x59094_22;
					}
					// 0x590a8
					*(int32_t *)(v4 + v25) = -1;
					*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
					// branch -> 0x590bc
				}
			}
			// 0x590bc
			v96 = *(int32_t *)g32;
			if (v96 == -1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x590c8
			if (v96 == 11) {
				// 0x590d0
				*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
				// branch -> 0x590e0
			}
			// 0x590e0
			function_5cfd4(g28, 1);
			function_59724(g28);
			if (g28 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x59104
				g34 = 50;
				PlaySFX(50);
				g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
				SetCursor_();
				v45 = g23;
				v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
				v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
				v99 = g29 - (v97 / 2 | v97 & -0x80000000);
				a2 = v99;
				v100 = g30 - (v98 / 2 | v98 & -0x80000000);
				a3 = v100;
				g34 = v99;
				function_ebc50(v99, v100);
				*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
				*(int32_t *)*(int32_t *)(v27 - 0x76ac) = a3;
				// branch -> 0x5915c
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x590bc
		v96 = *(int32_t *)g32;
		if (v96 == -1) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x590c8
		if (v96 == 11) {
			// 0x590d0
			*(int32_t *)(g35 + g36 + 456) = function_5b990(g28);
			// branch -> 0x590e0
		}
		// 0x590e0
		function_5cfd4(g28, 1);
		function_59724(g28);
		result2 = *(int32_t *)(g23 - 0x77ac);
		result = result2;
		if (g28 == *(int32_t *)result2) {
			// 0x59104
			g34 = 50;
			PlaySFX(50);
			g34 = *(int32_t *)(g35 + g36 + 0x5494) + 12;
			SetCursor_();
			v45 = g23;
			v97 = *(int32_t *)*(int32_t *)(v45 - 0x7650);
			v98 = *(int32_t *)*(int32_t *)(v45 - 0x7654);
			v99 = g29 - (v97 / 2 | v97 & -0x80000000);
			a2 = v99;
			v100 = g30 - (v98 / 2 | v98 & -0x80000000);
			a3 = v100;
			g34 = v99;
			function_ebc50(v99, v100);
			result = *(int32_t *)(v27 - 0x76ac);
			*(int32_t *)*(int32_t *)(v27 - 0x76a8) = a2;
			*(int32_t *)result = a3;
			// branch -> 0x5915c
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
}

// Address range: 0x59170 - 0x591d8
int32_t function_59170(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x59174
	uint32_t v2 = a2 % 256;                  // 0x5917c
	if (v2 <= 6) {
		// 0x5918c
		*(int32_t *)(368 * v2 + v1 + 0x55ec * a1 + 1184) = -1;
		// branch -> 0x591a4
	}
	// 0x591a4
	int32_t result;
	if (*(int32_t *)(0x55ec * a1 + v1) == 8) {
		// 0x591c0
		result = function_5cfd4(0, 0);
		// branch -> 0x591c8
	} else {
		// 0x591b4
		result = function_5cfd4(1, 1);
		// branch -> 0x591c8
	}
	// 0x591c8
	return result;
}

// Address range: 0x591d8 - 0x595cc
int32_t function_591d8(int32_t a1)
{
	// 0x591d8
	g34 = a1;
	int32_t v1 = g36;                        // 0x591d8
	int32_t v2 = g37;                        // 0x591dc
	int32_t v3 = v2 + 1;                     // 0x591dc
	int32_t v4 = g10;                        // 0x591e0
	int32_t v5 = *(int32_t *)(g23 - 0x77a8); // 0x591e4
	int32_t v6 = g35;                        // 0x591e8
	int32_t v7 = 0x55ec * g34;               // 0x591ec
	int32_t v8 = v7 + v5;                    // 0x591f8
	int32_t v9 = 4;                          // ctr
	int32_t v10 = -1 - v2;                   // r9
	int32_t v11 = 0;                         // r10
	int32_t v12 = 0;                         // r0
	// branch -> 0x59214
	while (true) {
		char *v13 = (char *)(v8 + 0x482c); // 0x59214
		int32_t v14 = (int32_t)*v13;       // 0x59218
		int32_t v15;                       // 0x59230
		int32_t v16;                       // 0x5923c
		if (v3 != v14) {
			// 0x59224
			if (v10 != v14) {
				v16 = v3;
				v15 = v8;
			lab_0x59230_2:;
				char *v17 = (char *)(v15 + 0x482d); // 0x59230
				int32_t v18 = v15 + 1;              // 0x59234
				v8 = v18;
				int32_t v19 = (int32_t)*v17; // 0x59238
				int32_t v20;                 // 0x59260
				if (v16 != v19) {
					// 0x59244
					if (v10 != v19) {
						v20 = v16;
					lab_0x59250:;
						char *v21 = (char *)(v18 + 0x482d); // 0x59250
						int32_t v22 = v11 + 1;              // 0x59254
						v11 = v22;
						int32_t v23 = v18 + 1; // 0x59258
						v8 = v23;
						int32_t v24 = (int32_t)*v21; // 0x5925c
						int32_t v25;                 // 0x59284
						if (v20 != v24) {
							// 0x59268
							if (v10 != v24) {
								v25 = v20;
							lab_0x59274:;
								char *v26 = (char *)(v23 + 0x482d); // 0x59274
								int32_t v27 = v22 + 1;              // 0x59278
								v11 = v27;
								int32_t v28 = v23 + 1; // 0x5927c
								v8 = v28;
								int32_t v29 = (int32_t)*v26; // 0x59280
								int32_t v30;                 // 0x592a8
								if (v25 != v29) {
									// 0x5928c
									if (v10 != v29) {
										v30 = v25;
									lab_0x59298:;
										char *v31 = (char *)(v28 + 0x482d); // 0x59298
										int32_t v32 = v27 + 1;              // 0x5929c
										v11 = v32;
										int32_t v33 = v28 + 1; // 0x592a0
										v8 = v33;
										int32_t v34 = (int32_t)*v31; // 0x592a4
										int32_t v35;                 // 0x592cc
										if (v30 != v34) {
											// 0x592b0
											if (v10 != v34) {
												v35 = v30;
											lab_0x592bc:;
												char *v36 = (char *)(v33 + 0x482d); // 0x592bc
												int32_t v37 = v32 + 1;              // 0x592c0
												v11 = v37;
												int32_t v38 = v33 + 1; // 0x592c4
												v8 = v38;
												int32_t v39 = (int32_t)*v36; // 0x592c8
												int32_t v40;                 // 0x592f0
												if (v35 != v39) {
													// 0x592d4
													if (v10 != v39) {
														v40 = v35;
													lab_0x592e0:;
														char *v41 = (char *)(v38 + 0x482d); // 0x592e0
														int32_t v42 = v37 + 1;              // 0x592e4
														v11 = v42;
														int32_t v43 = v38 + 1; // 0x592e8
														v8 = v43;
														int32_t v44 = (int32_t)*v41; // 0x592ec
														int32_t v45;                 // 0x59314
														if (v40 != v44) {
															// 0x592f8
															if (v10 != v44) {
																v45 = v40;
															lab_0x59304:;
																char *v46 = (char *)(v43 + 0x482d); // 0x59304
																int32_t v47 = v42 + 1;              // 0x59308
																v11 = v47;
																int32_t v48 = v43 + 1; // 0x5930c
																v8 = v48;
																int32_t v49 = (int32_t)*v46; // 0x59310
																int32_t v50;                 // 0x59338
																if (v45 != v49) {
																	// 0x5931c
																	if (v10 != v49) {
																		v50 = v45;
																	lab_0x59328:;
																		char *v51 = (char *)(v48 + 0x482d); // 0x59328
																		int32_t v52 = v47 + 1;              // 0x5932c
																		v11 = v52;
																		int32_t v53 = v48 + 1; // 0x59330
																		v8 = v53;
																		int32_t v54 = (int32_t)*v51; // 0x59334
																		int32_t v55;                 // 0x5935c
																		if (v50 != v54) {
																			// 0x59340
																			if (v10 != v54) {
																				v55 = v50;
																			lab_0x5934c:;
																				char *v56 = (char *)(v53 + 0x482d); // 0x5934c
																				int32_t v57 = v52 + 1;              // 0x59350
																				v11 = v57;
																				int32_t v58 = v53 + 1; // 0x59354
																				v8 = v58;
																				int32_t v59 = (int32_t)*v56; // 0x59358
																				if (v55 != v59) {
																					// 0x59364
																					if (v10 != v59) {
																					lab_0x59370:
																						// 0x59370
																						v11 = v57 + 1;
																						int32_t v60 = v9 - 1; // 0x59378
																						v9 = v60;
																						if (v60 == 0) {
																							int32_t v61 = v7 + v5;                    // 0x5937c
																							int32_t *v62 = (int32_t *)(v61 + 0x4828); // 0x59380
																							*v62 = *v62 - 1;
																							uint32_t v63 = *(int32_t *)(v61 + 0x4828); // 0x5938c
																							int32_t v64;                               // 0x59548
																							int32_t result2;                           // 0x595c8
																							int32_t v65;                               // 0x5954c
																							int32_t *v66;                              // 0x59560
																							uint32_t v67;                              // 0x5957c
																							int32_t v68;                               // 0x59560
																							int32_t v69;                               // 0x59570
																							int32_t v70;                               // 0x59578
																							int32_t v71;                               // 0x5957c
																							int32_t result;                            // 0x595a8
																							if (v63 >= 1) {
																								int32_t v72 = g37; // 0x59398
																								if (v72 != v63) {
																									int32_t v73 = v5 + 3752 + v7; // 0x593a8
																									v9 = 46;
																									int32_t v74 = 368 * v72 - 8 + v73; // 0x593d0
																									int32_t v75 = 368 * v63 - 8 + v73; // 0x593c8
																									// branch -> 0x593c8
																									while (true) {
																										int32_t v76 = v75 + 8; // 0x593c8
																										int32_t v77 = v74 + 8; // 0x593d0
																										*(int32_t *)v77 = *(int32_t *)v76;
																										*(int32_t *)(v74 + 12) = *(int32_t *)(v75 + 12);
																										int32_t v78 = v9 - 1; // 0x593d8
																										v9 = v78;
																										if (v78 == 0) {
																											// 0x593dc
																											v8 = g37 + 1;
																											v9 = 8;
																											int32_t v79 = v8; // 0x593e8
																											v12 = 0x1000000 * v10 / 0x1000000;
																											v10 = 0;
																											// branch -> 0x593f4
																											while (true) {
																												char *v80 = (char *)(v79 + 0x482c); // 0x593f4
																												int32_t v81 = v79;                  // 0x5942c
																												int32_t v82 = v79;                  // 0x59410
																												if ((int32_t)*v80 == *(int32_t *)(v79 + 0x4828) + 1) {
																													// 0x5940c
																													*v80 = (char)v8;
																													v81 = v79;
																													v82 = v8;
																													// branch -> 0x59410
																												}
																												char *v83 = (char *)(v81 + 0x482c); // 0x59414
																												int32_t v84 = v82;                  // 0x59438
																												if ((int32_t)*v83 == -1 - *(int32_t *)(v82 + 0x4828)) {
																													// 0x5942c
																													*v83 = (char)v12;
																													v84 = v8;
																													v81 = v79;
																													// branch -> 0x59430
																												}
																												char *v85 = (char *)(v81 + 0x482d); // 0x59430
																												int32_t v86 = v81 + 1;              // 0x59434
																												v79 = v86;
																												int32_t v87 = v84; // 0x59450
																												if ((int32_t)*v85 == *(int32_t *)(v84 + 0x4828) + 1) {
																													// 0x5944c
																													*v85 = (char)v8;
																													v86 = v79;
																													v87 = v8;
																													// branch -> 0x59450
																												}
																												char *v88 = (char *)(v86 + 0x482c); // 0x59454
																												int32_t v89 = v87;                  // 0x59478
																												if ((int32_t)*v88 == -1 - *(int32_t *)(v87 + 0x4828)) {
																													// 0x5946c
																													*v88 = (char)v12;
																													v89 = v8;
																													v86 = v79;
																													// branch -> 0x59470
																												}
																												char *v90 = (char *)(v86 + 0x482d); // 0x59470
																												int32_t v91 = v86 + 1;              // 0x59474
																												v79 = v91;
																												int32_t v92 = v89; // 0x59494
																												if ((int32_t)*v90 == *(int32_t *)(v89 + 0x4828) + 1) {
																													// 0x59490
																													*v90 = (char)v8;
																													v91 = v79;
																													v92 = v8;
																													// branch -> 0x59494
																												}
																												char *v93 = (char *)(v91 + 0x482c); // 0x59498
																												int32_t v94 = v92;                  // 0x594bc
																												if ((int32_t)*v93 == -1 - *(int32_t *)(v92 + 0x4828)) {
																													// 0x594b0
																													*v93 = (char)v12;
																													v94 = v8;
																													v91 = v79;
																													// branch -> 0x594b4
																												}
																												char *v95 = (char *)(v91 + 0x482d); // 0x594b4
																												int32_t v96 = v91 + 1;              // 0x594b8
																												v79 = v96;
																												int32_t v97 = v94; // 0x594d8
																												if ((int32_t)*v95 == *(int32_t *)(v94 + 0x4828) + 1) {
																													// 0x594d4
																													*v95 = (char)v8;
																													v96 = v79;
																													v97 = v8;
																													// branch -> 0x594d8
																												}
																												char *v98 = (char *)(v96 + 0x482c); // 0x594dc
																												int32_t v99 = v97;                  // 0x59500
																												if ((int32_t)*v98 == -1 - *(int32_t *)(v97 + 0x4828)) {
																													// 0x594f4
																													*v98 = (char)v12;
																													v99 = v8;
																													v96 = v79;
																													// branch -> 0x594f8
																												}
																												char *v100 = (char *)(v96 + 0x482d); // 0x594f8
																												int32_t v101 = v96 + 1;              // 0x594fc
																												v79 = v101;
																												int32_t v102 = v99; // 0x5951c
																												if ((int32_t)*v100 == *(int32_t *)(v99 + 0x4828) + 1) {
																													// 0x59518
																													*v100 = (char)v8;
																													v101 = v79;
																													v102 = v8;
																													// branch -> 0x5951c
																												}
																												char *v103 = (char *)(v101 + 0x482c); // 0x59520
																												if ((int32_t)*v103 == -1 - *(int32_t *)(v102 + 0x4828)) {
																													// 0x59538
																													*v103 = (char)v12;
																													v101 = v79;
																													// branch -> 0x5953c
																												}
																												// 0x5953c
																												v10 += 4;
																												int32_t v104 = v9 - 1; // 0x59544
																												v9 = v104;
																												if (v104 == 0) {
																													// 0x59548
																													v64 = function_5ca38();
																													v65 = g35 + g36;
																													result2 = v64;
																													if (*(char *)(v65 + 184) == 2) {
																														// 0x5955c
																														v66 = (int32_t *)(v65 + 180);
																														v68 = *v66;
																														if (v68 != -1) {
																															// 0x5956c
																															v69 = *(int32_t *)(v65 + 276);
																															v70 = *(int32_t *)(v65 + 280);
																															v67 = (v68 - 1) % 64;
																															v71 = 1 << v67;
																															if ((v70 & v71 || v69 & (v71 >> 31 & -2 | (int32_t)(v67 == 31))) != 0) {
																																// 0x595a8
																																result = *(int32_t *)(g23 - 0x76bc);
																																*(int32_t *)result = 255;
																																// branch -> 0x595b4
																																// 0x595b4
																																g36 = v1;
																																g10 = v4;
																																g35 = v6;
																																return result;
																															}
																															// 0x595a0
																															*v66 = -1;
																															// branch -> 0x595a8
																															// 0x595a8
																															result = *(int32_t *)(g23 - 0x76bc);
																															*(int32_t *)result = 255;
																															// branch -> 0x595b4
																															// 0x595b4
																															g36 = v1;
																															g10 = v4;
																															g35 = v6;
																															return result;
																														}
																														result2 = -1;
																													}
																													// 0x595b4
																													g36 = v1;
																													g10 = v4;
																													g35 = v6;
																													return result2;
																												}
																												// 0x5953c
																												v79 = v101 + 1;
																												// branch -> 0x593f4
																											}
																										} else {
																											// 0x593c8
																											v74 = v77;
																											v75 = v76;
																											// branch -> 0x593c8
																											continue;
																										}
																									}
																								}
																							}
																							// 0x59548
																							v64 = function_5ca38();
																							v65 = g35 + g36;
																							result2 = v64;
																							if (*(char *)(v65 + 184) == 2) {
																								// 0x5955c
																								v66 = (int32_t *)(v65 + 180);
																								v68 = *v66;
																								if (v68 != -1) {
																									// 0x5956c
																									v69 = *(int32_t *)(v65 + 276);
																									v70 = *(int32_t *)(v65 + 280);
																									v67 = (v68 - 1) % 64;
																									v71 = 1 << v67;
																									if ((v70 & v71 || v69 & (v71 >> 31 & -2 | (int32_t)(v67 == 31))) != 0) {
																										// 0x595a8
																										result = *(int32_t *)(g23 - 0x76bc);
																										*(int32_t *)result = 255;
																										// branch -> 0x595b4
																										// 0x595b4
																										g36 = v1;
																										g10 = v4;
																										g35 = v6;
																										return result;
																									}
																									// 0x595a0
																									*v66 = -1;
																									// branch -> 0x595a8
																									// 0x595a8
																									result = *(int32_t *)(g23 - 0x76bc);
																									*(int32_t *)result = 255;
																									// branch -> 0x595b4
																									// 0x595b4
																									g36 = v1;
																									g10 = v4;
																									g35 = v6;
																									return result;
																								}
																								result2 = -1;
																							}
																							// 0x595b4
																							g36 = v1;
																							g10 = v4;
																							g35 = v6;
																							return result2;
																						}
																						// 0x59370
																						v8 = v58 + 1;
																						// branch -> 0x59214
																						continue;
																					}
																				}
																				// 0x5936c
																				*v56 = (char)v12;
																				v57 = v11;
																				v58 = v8;
																				// branch -> 0x59370
																				goto lab_0x59370;
																			}
																		}
																		// 0x59348
																		*v51 = (char)v12;
																		v55 = v3;
																		v52 = v11;
																		v53 = v8;
																		// branch -> 0x5934c
																		goto lab_0x5934c;
																	}
																}
																// 0x59324
																*v46 = (char)v12;
																v50 = v3;
																v47 = v11;
																v48 = v8;
																// branch -> 0x59328
																goto lab_0x59328;
															}
														}
														// 0x59300
														*v41 = (char)v12;
														v45 = v3;
														v42 = v11;
														v43 = v8;
														// branch -> 0x59304
														goto lab_0x59304;
													}
												}
												// 0x592dc
												*v36 = (char)v12;
												v40 = v3;
												v37 = v11;
												v38 = v8;
												// branch -> 0x592e0
												goto lab_0x592e0;
											}
										}
										// 0x592b8
										*v31 = (char)v12;
										v35 = v3;
										v32 = v11;
										v33 = v8;
										// branch -> 0x592bc
										goto lab_0x592bc;
									}
								}
								// 0x59294
								*v26 = (char)v12;
								v30 = v3;
								v27 = v11;
								v28 = v8;
								// branch -> 0x59298
								goto lab_0x59298;
							}
						}
						// 0x59270
						*v21 = (char)v12;
						v25 = v3;
						v22 = v11;
						v23 = v8;
						// branch -> 0x59274
						goto lab_0x59274;
					}
				}
				// 0x5924c
				*v17 = (char)v12;
				v20 = v3;
				v18 = v8;
				// branch -> 0x59250
				goto lab_0x59250;
			}
			// 0x5922c
			*v13 = (char)v12;
			v16 = v3;
			v15 = v8;
			// branch -> 0x59230
			goto lab_0x59230_2;
		}
		// 0x5922c
		*v13 = (char)v12;
		v16 = v3;
		v15 = v8;
		// branch -> 0x59230
		goto lab_0x59230_2;
	}
}

// Address range: 0x595cc - 0x59678
int32_t function_595cc(int32_t a1)
{
	// 0x595cc
	g34 = a1;
	int32_t v1 = g36; // 0x595cc
	int32_t v2 = g10; // 0x595d0
	int32_t v3 = g35; // 0x595dc
	*(int32_t *)(368 * g37 + *(int32_t *)(g23 - 0x77a8) + 0x55ec * g34 + 0x485c) = -1;
	function_5ca38();
	int32_t v4 = g36; // 0x59600
	int32_t result;   // 0x59654
	if (*(char *)(v4 + 184) != 2) {
		// 0x59654
		result = *(int32_t *)(g23 - 0x76bc);
		*(int32_t *)result = 255;
		g10 = v2;
		g36 = v1;
		g35 = v3;
		return result;
	}
	int32_t *v5 = (int32_t *)(v4 + 180); // 0x59610
	int32_t v6 = *v5;                    // 0x59610
	if (v6 != -1) {
		int32_t v7 = *(int32_t *)(v4 + 276);       // 0x59620
		uint32_t v8 = (v6 - 1) % 64;               // 0x5962c
		int32_t v9 = 1 << v8;                      // 0x5962c
		int32_t v10 = *(int32_t *)(v4 + 280) & v9; // 0x59634
		if ((v10 || v7 & (v9 >> 31 & -2 | (int32_t)(v8 == 31))) == 0) {
			// 0x59650
			*v5 = g35;
			// branch -> 0x59654
		}
	}
	// 0x59654
	result = *(int32_t *)(g23 - 0x76bc);
	*(int32_t *)result = 255;
	g10 = v2;
	g36 = v1;
	g35 = v3;
	return result;
}

// Address range: 0x59678 - 0x596d4
int32_t function_59678(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x596b4
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x76a8); // 0x596b8
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x76ac); // 0x596bc
	int32_t result;
	if (*(int32_t *)*(int32_t *)(g23 - 0x7744) < 12) {
		// 0x596b4
		result = CheckInvCut(v1, v2, v3);
		// branch -> 0x596c4
	} else {
		// 0x596a0
		result = CheckInvPaste(v1, v2, v3);
		// branch -> 0x596c4
	}
	// 0x596c4
	return result;
}

// Address range: 0x596d4 - 0x59724
int32_t function_596d4(int32_t a1)
{
	int32_t v1 = g10;                            // 0x596d4
	int32_t result = *(int32_t *)(g23 - 0x76a8); // 0x596d8
	int32_t v2 = *(int32_t *)result;             // 0x596e4
	if (v2 < 191 || v2 > 436) {
		// 0x59714
		g10 = v1;
		return result;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x76ac); // 0x596f8
	uint32_t v3 = *(int32_t *)result2;            // 0x596fc
	if (v3 < 353) {
		// 0x59714
		g10 = v1;
		return result2;
	}
	// 0x59708
	int32_t result3; // 0x59720
	if (v3 <= 384) {
		// 0x59710
		result3 = function_59678(result2);
		// branch -> 0x59714
	} else {
		result3 = result2;
	}
	// 0x59714
	g10 = v1;
	return result3;
}

// Address range: 0x59724 - 0x59780
int32_t function_59724(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0x5972c
	int32_t v2 = v1 + 0x53d4;                              // r5
	*(int32_t *)(v1 + 0x5538) = 0;
	int32_t result = *(int32_t *)(v1 + 352); // 0x59740
	if (result < (int32_t) * (char *)(v1 + 0x5534)) {
		// bb
		return result;
	}
	int32_t result2 = *(int32_t *)(v1 + 360); // 0x59750
	if (result2 < (int32_t) * (char *)(v2 + 353)) {
		// bb
		return result2;
	}
	int32_t result3 = *(int32_t *)(v1 + 368); // 0x59764
	if (result3 < (int32_t) * (char *)(v2 + 354)) {
		// bb
		return result3;
	}
	// 0x59774
	*(int32_t *)(v2 + 356) = 1;
	return result3;
}

// Address range: 0x59780 - 0x5982c
int32_t function_59780(int32_t a1)
{
	int32_t result = 0x55ec * a1;                     // 0x59780
	int32_t v1 = *(int32_t *)(g23 - 0x77a8) + result; // 0x59788
	if (*(int32_t *)(v1 + 0x54b0) != 24) {
		// 0x59828
		return result;
	}
	int32_t v2 = 0x51eb851f;                                                  // r5
	int32_t v3 = *(int32_t *)(g23 - 0x769c) + 56 * *(int32_t *)(v1 + 0x54b4); // 0x597ac
	*(char *)(v1 + 0x5535) = (char)*(int32_t *)(v3 + 28);
	int32_t result3 = *(int32_t *)(v1 + 0x54b4) + v1; // 0x597c0
	char v4 = *(char *)(result3 + 193);               // 0x597c4
	if (v4 != 0) {
		int32_t v5 = v4; // 0x597d4
		while (true) {
			char *v6 = (char *)(v1 + 0x5535);                                                          // 0x597d0
			int32_t v7 = (int32_t)*v6;                                                                 // 0x597d0
			int32_t v8 = v5 - 1;                                                                       // r8
			uint64_t v9 = (int64_t)v2 * (int64_t)(20 * v7);                                            // 0x597dc
			int32_t v10 = (int32_t)(v9 / 0x100000000) >> 31;                                           // 0x597e0
			int32_t v11 = (int32_t)(v10 < 0) + v7 + (v10 & -0x8000000 | (int32_t)(v9 / 0x2000000000)); // 0x597ec
			*v6 = (char)v11;
			char *v12 = (char *)(v1 + 0x5535);                                                           // 0x597f4
			int32_t v13 = (int32_t)*v12;                                                                 // 0x597f4
			uint64_t v14 = (int64_t)v2 * (int64_t)(20 * v13);                                            // 0x597fc
			int32_t v15 = (int32_t)(v14 / 0x100000000) >> 31;                                            // 0x59800
			int32_t v16 = (int32_t)(v15 < 0) + v13 + (v15 & -0x8000000 | (int32_t)(v14 / 0x2000000000)); // 0x5980c
			int32_t result2 = v16;                                                                       // r3
			if (v16 < 256) {
				// branch -> 0x59820
			} else {
				// 0x59818
				*v12 = (char)255;
				v8 = 0;
				// branch -> 0x59820
			}
			// 0x59820
			if (v8 == 0) {
				// 0x59820
				// branch -> 0x59828
				// 0x59828
				return result2;
			}
			// 0x59820
			v5 = v8;
			// branch -> 0x597d0
		}
	}
	// 0x59828
	return result3;
}

// Address range: 0x5982c - 0x59aa8
int32_t function_5982c(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = 0x55ec * a1;                    // 0x5982c
	int32_t v2 = *(int32_t *)(g23 - 0x77a8);     // 0x59830
	int32_t v3 = *(int32_t *)(g23 - 0x71dc);     // r6
	int32_t v4 = *(int32_t *)(g23 - 0x71d8);     // r5
	int32_t v5 = *(int32_t *)(v2 + v1 + 0x553c); // 0x59840
	int32_t v6 = *(int32_t *)(g23 - 0x7604);     // 0x59844
	int32_t v7 = v6;                             // r4
	int32_t result = *(int32_t *)(g23 - 0x77ac); // r3
	int32_t v8 = v5;                             // 0x5985c
	if (v5 == 10) {
		// 0x59854
		*(char *)(v6 + 194) = 3;
		v8 = v5;
		// branch -> 0x5985c
	}
	int32_t v9 = v8; // 0x598d4
	int32_t v10;     // 0x598dc
	int32_t v11;     // 0x598fc
	int32_t v12;     // 0x599c0
	int32_t v13;     // 0x599e0
	char *v14;       // 0x598e0
	char *v15;       // 0x599c4
	char v16;        // 0x5991c
	char v17;        // 0x59978
	char v18;        // 0x59a00
	if (v8 == 17) {
		// 0x59864
		if (*(char *)(v7 + 26) == 2) {
			int32_t v19 = v7 + 39; // 0x59870
			if (*(char *)v19 == 3) {
				// 0x59880
				*(int32_t *)v4 = 10;
				char v20 = *(char *)(v1 + v2 + 348); // 0x5988c
				if (v20 == 0) {
					// 0x59898
					*(int32_t *)v3 = 815;
					// branch -> 0x598cc
				} else {
					// 0x598a4
					if (v20 == 1) {
						// 0x598b0
						*(int32_t *)v3 = 706;
						// branch -> 0x598cc
					} else {
						// 0x598bc
						if (v20 == 2) {
							// 0x598c4
							*(int32_t *)v3 = 603;
							// branch -> 0x598cc
						}
					}
					// 0x598cc
					*(char *)v19 = 4;
					// branch -> 0x598d4
					// 0x598d4
					unsigned char v21; // 0x59a64
					int32_t result2;   // 0x59a64
					if (v5 == 16) {
						// 0x598dc
						v10 = v7;
						v14 = (char *)(v10 + 242);
						v11 = v10;
						if (*v14 == 1) {
							// 0x598ec
							*v14 = 2;
							*(char *)(v7 + 255) = 1;
							v11 = v7;
							// branch -> 0x598fc
						}
						// 0x598fc
						if (*(int32_t *)(v11 + 260) == 1) {
							// 0x59908
							*(int32_t *)v4 = 10;
							v16 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
							if (v16 == 0) {
								// 0x59928
								*(int32_t *)v3 = 809;
								// branch -> 0x5995c
								// 0x5995c
								if (v5 != 15) {
									// 0x599b8
									if (v5 == 9) {
										// 0x599c0
										v12 = v7;
										v15 = (char *)(v12 + 2);
										v13 = v12;
										if (*v15 == 1) {
											// 0x599d0
											*v15 = 2;
											*(char *)(v7 + 15) = 1;
											v13 = v7;
											// branch -> 0x599e0
										}
										// 0x599e0
										if (*(int32_t *)(v13 + 20) == 1) {
											// 0x599ec
											*(int32_t *)v4 = 10;
											v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
											if (v18 == 0) {
												// 0x59a0c
												*(int32_t *)v3 = 807;
												// branch -> 0x59a40
												// 0x59a40
												if (v5 != 28) {
													// bb
													return result;
												}
												// 0x59a48
												*(char *)(v7 + 218) = 3;
												*(int32_t *)v4 = 20;
												v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
												result2 = v21;
												result = result2;
												if (v21 == 0) {
													// 0x59a70
													*(int32_t *)v3 = 811;
													return result;
												}
												// 0x59a7c
												if (v21 == 1) {
													// 0x59a88
													*(int32_t *)v3 = 702;
													return result;
												}
												// 0x59a94
												if (v21 != 2) {
													// bb5
													return result2;
												}
												// 0x59a9c
												*(int32_t *)v3 = 599;
												return result;
											}
											// 0x59a18
											if (v18 == 1) {
												// 0x59a24
												*(int32_t *)v3 = 698;
												// branch -> 0x59a40
											} else {
												// 0x59a30
												if (v18 == 2) {
													// 0x59a38
													*(int32_t *)v3 = 595;
													// branch -> 0x59a40
												}
											}
											// 0x59a40
											if (v5 != 28) {
												// bb
												return result;
											}
											// 0x59a48
											*(char *)(v7 + 218) = 3;
											*(int32_t *)v4 = 20;
											v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
											result2 = v21;
											result = result2;
											if (v21 == 0) {
												// 0x59a70
												*(int32_t *)v3 = 811;
												return result;
											}
											// 0x59a7c
											if (v21 == 1) {
												// 0x59a88
												*(int32_t *)v3 = 702;
												return result;
											}
											// 0x59a94
											if (v21 != 2) {
												// bb5
												return result2;
											}
											// 0x59a9c
											*(int32_t *)v3 = 599;
											return result;
										}
									}
									// 0x59a40
									if (v5 != 28) {
										// bb
										return result;
									}
									// 0x59a48
									*(char *)(v7 + 218) = 3;
									*(int32_t *)v4 = 20;
									v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
									result2 = v21;
									result = result2;
									if (v21 == 0) {
										// 0x59a70
										*(int32_t *)v3 = 811;
										return result;
									}
									// 0x59a7c
									if (v21 == 1) {
										// 0x59a88
										*(int32_t *)v3 = 702;
										return result;
									}
									// 0x59a94
									if (v21 != 2) {
										// bb5
										return result2;
									}
									// 0x59a9c
									*(int32_t *)v3 = 599;
									return result;
								}
								// 0x59964
								*(int32_t *)v4 = 30;
								v17 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
								if (v17 == 0) {
									// 0x59984
									*(int32_t *)v3 = 808;
									// branch -> 0x599b8
									// 0x599b8
									if (v5 == 9) {
										// 0x599c0
										v12 = v7;
										v15 = (char *)(v12 + 2);
										v13 = v12;
										if (*v15 == 1) {
											// 0x599d0
											*v15 = 2;
											*(char *)(v7 + 15) = 1;
											v13 = v7;
											// branch -> 0x599e0
										}
										// 0x599e0
										if (*(int32_t *)(v13 + 20) == 1) {
											// 0x599ec
											*(int32_t *)v4 = 10;
											v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
											if (v18 == 0) {
												// 0x59a0c
												*(int32_t *)v3 = 807;
												// branch -> 0x59a40
												// 0x59a40
												if (v5 != 28) {
													// bb
													return result;
												}
												// 0x59a48
												*(char *)(v7 + 218) = 3;
												*(int32_t *)v4 = 20;
												v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
												result2 = v21;
												result = result2;
												if (v21 == 0) {
													// 0x59a70
													*(int32_t *)v3 = 811;
													return result;
												}
												// 0x59a7c
												if (v21 == 1) {
													// 0x59a88
													*(int32_t *)v3 = 702;
													return result;
												}
												// 0x59a94
												if (v21 != 2) {
													// bb5
													return result2;
												}
												// 0x59a9c
												*(int32_t *)v3 = 599;
												return result;
											}
											// 0x59a18
											if (v18 == 1) {
												// 0x59a24
												*(int32_t *)v3 = 698;
												// branch -> 0x59a40
											} else {
												// 0x59a30
												if (v18 == 2) {
													// 0x59a38
													*(int32_t *)v3 = 595;
													// branch -> 0x59a40
												}
											}
											// 0x59a40
											if (v5 != 28) {
												// bb
												return result;
											}
											// 0x59a48
											*(char *)(v7 + 218) = 3;
											*(int32_t *)v4 = 20;
											v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
											result2 = v21;
											result = result2;
											if (v21 == 0) {
												// 0x59a70
												*(int32_t *)v3 = 811;
												return result;
											}
											// 0x59a7c
											if (v21 == 1) {
												// 0x59a88
												*(int32_t *)v3 = 702;
												return result;
											}
											// 0x59a94
											if (v21 != 2) {
												// bb5
												return result2;
											}
											// 0x59a9c
											*(int32_t *)v3 = 599;
											return result;
										}
									}
									// 0x59a40
									if (v5 != 28) {
										// bb
										return result;
									}
									// 0x59a48
									*(char *)(v7 + 218) = 3;
									*(int32_t *)v4 = 20;
									v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
									result2 = v21;
									result = result2;
									if (v21 == 0) {
										// 0x59a70
										*(int32_t *)v3 = 811;
										return result;
									}
									// 0x59a7c
									if (v21 == 1) {
										// 0x59a88
										*(int32_t *)v3 = 702;
										return result;
									}
									// 0x59a94
									if (v21 != 2) {
										// bb5
										return result2;
									}
									// 0x59a9c
									*(int32_t *)v3 = 599;
									return result;
								}
								// 0x59990
								if (v17 == 1) {
									// 0x5999c
									*(int32_t *)v3 = 699;
									// branch -> 0x599b8
								} else {
									// 0x599a8
									if (v17 == 2) {
										// 0x599b0
										*(int32_t *)v3 = 596;
										// branch -> 0x599b8
									}
								}
								// 0x599b8
								if (v5 == 9) {
									// 0x599c0
									v12 = v7;
									v15 = (char *)(v12 + 2);
									v13 = v12;
									if (*v15 == 1) {
										// 0x599d0
										*v15 = 2;
										*(char *)(v7 + 15) = 1;
										v13 = v7;
										// branch -> 0x599e0
									}
									// 0x599e0
									if (*(int32_t *)(v13 + 20) == 1) {
										// 0x599ec
										*(int32_t *)v4 = 10;
										v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
										if (v18 == 0) {
											// 0x59a0c
											*(int32_t *)v3 = 807;
											// branch -> 0x59a40
											// 0x59a40
											if (v5 != 28) {
												// bb
												return result;
											}
											// 0x59a48
											*(char *)(v7 + 218) = 3;
											*(int32_t *)v4 = 20;
											v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
											result2 = v21;
											result = result2;
											if (v21 == 0) {
												// 0x59a70
												*(int32_t *)v3 = 811;
												return result;
											}
											// 0x59a7c
											if (v21 == 1) {
												// 0x59a88
												*(int32_t *)v3 = 702;
												return result;
											}
											// 0x59a94
											if (v21 != 2) {
												// bb5
												return result2;
											}
											// 0x59a9c
											*(int32_t *)v3 = 599;
											return result;
										}
										// 0x59a18
										if (v18 == 1) {
											// 0x59a24
											*(int32_t *)v3 = 698;
											// branch -> 0x59a40
										} else {
											// 0x59a30
											if (v18 == 2) {
												// 0x59a38
												*(int32_t *)v3 = 595;
												// branch -> 0x59a40
											}
										}
										// 0x59a40
										if (v5 != 28) {
											// bb
											return result;
										}
										// 0x59a48
										*(char *)(v7 + 218) = 3;
										*(int32_t *)v4 = 20;
										v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
										result2 = v21;
										result = result2;
										if (v21 == 0) {
											// 0x59a70
											*(int32_t *)v3 = 811;
											return result;
										}
										// 0x59a7c
										if (v21 == 1) {
											// 0x59a88
											*(int32_t *)v3 = 702;
											return result;
										}
										// 0x59a94
										if (v21 != 2) {
											// bb5
											return result2;
										}
										// 0x59a9c
										*(int32_t *)v3 = 599;
										return result;
									}
								}
								// 0x59a40
								if (v5 != 28) {
									// bb
									return result;
								}
								// 0x59a48
								*(char *)(v7 + 218) = 3;
								*(int32_t *)v4 = 20;
								v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
								result2 = v21;
								result = result2;
								if (v21 == 0) {
									// 0x59a70
									*(int32_t *)v3 = 811;
									return result;
								}
								// 0x59a7c
								if (v21 == 1) {
									// 0x59a88
									*(int32_t *)v3 = 702;
									return result;
								}
								// 0x59a94
								if (v21 != 2) {
									// bb5
									return result2;
								}
								// 0x59a9c
								*(int32_t *)v3 = 599;
								return result;
							}
							// 0x59934
							if (v16 == 1) {
								// 0x59940
								*(int32_t *)v3 = 700;
								// branch -> 0x5995c
							} else {
								// 0x5994c
								if (v16 == 2) {
									// 0x59954
									*(int32_t *)v3 = 597;
									// branch -> 0x5995c
								}
							}
							// 0x5995c
							if (v5 != 15) {
								// 0x599b8
								if (v5 == 9) {
									// 0x599c0
									v12 = v7;
									v15 = (char *)(v12 + 2);
									v13 = v12;
									if (*v15 == 1) {
										// 0x599d0
										*v15 = 2;
										*(char *)(v7 + 15) = 1;
										v13 = v7;
										// branch -> 0x599e0
									}
									// 0x599e0
									if (*(int32_t *)(v13 + 20) == 1) {
										// 0x599ec
										*(int32_t *)v4 = 10;
										v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
										if (v18 == 0) {
											// 0x59a0c
											*(int32_t *)v3 = 807;
											// branch -> 0x59a40
											// 0x59a40
											if (v5 != 28) {
												// bb
												return result;
											}
											// 0x59a48
											*(char *)(v7 + 218) = 3;
											*(int32_t *)v4 = 20;
											v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
											result2 = v21;
											result = result2;
											if (v21 == 0) {
												// 0x59a70
												*(int32_t *)v3 = 811;
												return result;
											}
											// 0x59a7c
											if (v21 == 1) {
												// 0x59a88
												*(int32_t *)v3 = 702;
												return result;
											}
											// 0x59a94
											if (v21 != 2) {
												// bb5
												return result2;
											}
											// 0x59a9c
											*(int32_t *)v3 = 599;
											return result;
										}
										// 0x59a18
										if (v18 == 1) {
											// 0x59a24
											*(int32_t *)v3 = 698;
											// branch -> 0x59a40
										} else {
											// 0x59a30
											if (v18 == 2) {
												// 0x59a38
												*(int32_t *)v3 = 595;
												// branch -> 0x59a40
											}
										}
										// 0x59a40
										if (v5 != 28) {
											// bb
											return result;
										}
										// 0x59a48
										*(char *)(v7 + 218) = 3;
										*(int32_t *)v4 = 20;
										v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
										result2 = v21;
										result = result2;
										if (v21 == 0) {
											// 0x59a70
											*(int32_t *)v3 = 811;
											return result;
										}
										// 0x59a7c
										if (v21 == 1) {
											// 0x59a88
											*(int32_t *)v3 = 702;
											return result;
										}
										// 0x59a94
										if (v21 != 2) {
											// bb5
											return result2;
										}
										// 0x59a9c
										*(int32_t *)v3 = 599;
										return result;
									}
								}
								// 0x59a40
								if (v5 != 28) {
									// bb
									return result;
								}
								// 0x59a48
								*(char *)(v7 + 218) = 3;
								*(int32_t *)v4 = 20;
								v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
								result2 = v21;
								result = result2;
								if (v21 == 0) {
									// 0x59a70
									*(int32_t *)v3 = 811;
									return result;
								}
								// 0x59a7c
								if (v21 == 1) {
									// 0x59a88
									*(int32_t *)v3 = 702;
									return result;
								}
								// 0x59a94
								if (v21 != 2) {
									// bb5
									return result2;
								}
								// 0x59a9c
								*(int32_t *)v3 = 599;
								return result;
							}
							// 0x59964
							*(int32_t *)v4 = 30;
							v17 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
							if (v17 == 0) {
								// 0x59984
								*(int32_t *)v3 = 808;
								// branch -> 0x599b8
								// 0x599b8
								if (v5 == 9) {
									// 0x599c0
									v12 = v7;
									v15 = (char *)(v12 + 2);
									v13 = v12;
									if (*v15 == 1) {
										// 0x599d0
										*v15 = 2;
										*(char *)(v7 + 15) = 1;
										v13 = v7;
										// branch -> 0x599e0
									}
									// 0x599e0
									if (*(int32_t *)(v13 + 20) == 1) {
										// 0x599ec
										*(int32_t *)v4 = 10;
										v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
										if (v18 == 0) {
											// 0x59a0c
											*(int32_t *)v3 = 807;
											// branch -> 0x59a40
											// 0x59a40
											if (v5 != 28) {
												// bb
												return result;
											}
											// 0x59a48
											*(char *)(v7 + 218) = 3;
											*(int32_t *)v4 = 20;
											v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
											result2 = v21;
											result = result2;
											if (v21 == 0) {
												// 0x59a70
												*(int32_t *)v3 = 811;
												return result;
											}
											// 0x59a7c
											if (v21 == 1) {
												// 0x59a88
												*(int32_t *)v3 = 702;
												return result;
											}
											// 0x59a94
											if (v21 != 2) {
												// bb5
												return result2;
											}
											// 0x59a9c
											*(int32_t *)v3 = 599;
											return result;
										}
										// 0x59a18
										if (v18 == 1) {
											// 0x59a24
											*(int32_t *)v3 = 698;
											// branch -> 0x59a40
										} else {
											// 0x59a30
											if (v18 == 2) {
												// 0x59a38
												*(int32_t *)v3 = 595;
												// branch -> 0x59a40
											}
										}
										// 0x59a40
										if (v5 != 28) {
											// bb
											return result;
										}
										// 0x59a48
										*(char *)(v7 + 218) = 3;
										*(int32_t *)v4 = 20;
										v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
										result2 = v21;
										result = result2;
										if (v21 == 0) {
											// 0x59a70
											*(int32_t *)v3 = 811;
											return result;
										}
										// 0x59a7c
										if (v21 == 1) {
											// 0x59a88
											*(int32_t *)v3 = 702;
											return result;
										}
										// 0x59a94
										if (v21 != 2) {
											// bb5
											return result2;
										}
										// 0x59a9c
										*(int32_t *)v3 = 599;
										return result;
									}
								}
								// 0x59a40
								if (v5 != 28) {
									// bb
									return result;
								}
								// 0x59a48
								*(char *)(v7 + 218) = 3;
								*(int32_t *)v4 = 20;
								v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
								result2 = v21;
								result = result2;
								if (v21 == 0) {
									// 0x59a70
									*(int32_t *)v3 = 811;
									return result;
								}
								// 0x59a7c
								if (v21 == 1) {
									// 0x59a88
									*(int32_t *)v3 = 702;
									return result;
								}
								// 0x59a94
								if (v21 != 2) {
									// bb5
									return result2;
								}
								// 0x59a9c
								*(int32_t *)v3 = 599;
								return result;
							}
							// 0x59990
							if (v17 == 1) {
								// 0x5999c
								*(int32_t *)v3 = 699;
								// branch -> 0x599b8
							} else {
								// 0x599a8
								if (v17 == 2) {
									// 0x599b0
									*(int32_t *)v3 = 596;
									// branch -> 0x599b8
								}
							}
							// 0x599b8
							if (v5 == 9) {
								// 0x599c0
								v12 = v7;
								v15 = (char *)(v12 + 2);
								v13 = v12;
								if (*v15 == 1) {
									// 0x599d0
									*v15 = 2;
									*(char *)(v7 + 15) = 1;
									v13 = v7;
									// branch -> 0x599e0
								}
								// 0x599e0
								if (*(int32_t *)(v13 + 20) == 1) {
									// 0x599ec
									*(int32_t *)v4 = 10;
									v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
									if (v18 == 0) {
										// 0x59a0c
										*(int32_t *)v3 = 807;
										// branch -> 0x59a40
										// 0x59a40
										if (v5 != 28) {
											// bb
											return result;
										}
										// 0x59a48
										*(char *)(v7 + 218) = 3;
										*(int32_t *)v4 = 20;
										v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
										result2 = v21;
										result = result2;
										if (v21 == 0) {
											// 0x59a70
											*(int32_t *)v3 = 811;
											return result;
										}
										// 0x59a7c
										if (v21 == 1) {
											// 0x59a88
											*(int32_t *)v3 = 702;
											return result;
										}
										// 0x59a94
										if (v21 != 2) {
											// bb5
											return result2;
										}
										// 0x59a9c
										*(int32_t *)v3 = 599;
										return result;
									}
									// 0x59a18
									if (v18 == 1) {
										// 0x59a24
										*(int32_t *)v3 = 698;
										// branch -> 0x59a40
									} else {
										// 0x59a30
										if (v18 == 2) {
											// 0x59a38
											*(int32_t *)v3 = 595;
											// branch -> 0x59a40
										}
									}
									// 0x59a40
									if (v5 != 28) {
										// bb
										return result;
									}
									// 0x59a48
									*(char *)(v7 + 218) = 3;
									*(int32_t *)v4 = 20;
									v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
									result2 = v21;
									result = result2;
									if (v21 == 0) {
										// 0x59a70
										*(int32_t *)v3 = 811;
										return result;
									}
									// 0x59a7c
									if (v21 == 1) {
										// 0x59a88
										*(int32_t *)v3 = 702;
										return result;
									}
									// 0x59a94
									if (v21 != 2) {
										// bb5
										return result2;
									}
									// 0x59a9c
									*(int32_t *)v3 = 599;
									return result;
								}
							}
							// 0x59a40
							if (v5 != 28) {
								// bb
								return result;
							}
							// 0x59a48
							*(char *)(v7 + 218) = 3;
							*(int32_t *)v4 = 20;
							v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
							result2 = v21;
							result = result2;
							if (v21 == 0) {
								// 0x59a70
								*(int32_t *)v3 = 811;
								return result;
							}
							// 0x59a7c
							if (v21 == 1) {
								// 0x59a88
								*(int32_t *)v3 = 702;
								return result;
							}
							// 0x59a94
							if (v21 != 2) {
								// bb5
								return result2;
							}
							// 0x59a9c
							*(int32_t *)v3 = 599;
							return result;
						}
					}
					// 0x5995c
					if (v5 == 15) {
						// 0x59964
						*(int32_t *)v4 = 30;
						v17 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
						if (v17 == 0) {
							// 0x59984
							*(int32_t *)v3 = 808;
							// branch -> 0x599b8
							// 0x599b8
							if (v5 == 9) {
								// 0x599c0
								v12 = v7;
								v15 = (char *)(v12 + 2);
								v13 = v12;
								if (*v15 == 1) {
									// 0x599d0
									*v15 = 2;
									*(char *)(v7 + 15) = 1;
									v13 = v7;
									// branch -> 0x599e0
								}
								// 0x599e0
								if (*(int32_t *)(v13 + 20) == 1) {
									// 0x599ec
									*(int32_t *)v4 = 10;
									v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
									if (v18 == 0) {
										// 0x59a0c
										*(int32_t *)v3 = 807;
										// branch -> 0x59a40
										// 0x59a40
										if (v5 != 28) {
											// bb
											return result;
										}
										// 0x59a48
										*(char *)(v7 + 218) = 3;
										*(int32_t *)v4 = 20;
										v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
										result2 = v21;
										result = result2;
										if (v21 == 0) {
											// 0x59a70
											*(int32_t *)v3 = 811;
											return result;
										}
										// 0x59a7c
										if (v21 == 1) {
											// 0x59a88
											*(int32_t *)v3 = 702;
											return result;
										}
										// 0x59a94
										if (v21 != 2) {
											// bb5
											return result2;
										}
										// 0x59a9c
										*(int32_t *)v3 = 599;
										return result;
									}
									// 0x59a18
									if (v18 == 1) {
										// 0x59a24
										*(int32_t *)v3 = 698;
										// branch -> 0x59a40
									} else {
										// 0x59a30
										if (v18 == 2) {
											// 0x59a38
											*(int32_t *)v3 = 595;
											// branch -> 0x59a40
										}
									}
									// 0x59a40
									if (v5 != 28) {
										// bb
										return result;
									}
									// 0x59a48
									*(char *)(v7 + 218) = 3;
									*(int32_t *)v4 = 20;
									v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
									result2 = v21;
									result = result2;
									if (v21 == 0) {
										// 0x59a70
										*(int32_t *)v3 = 811;
										return result;
									}
									// 0x59a7c
									if (v21 == 1) {
										// 0x59a88
										*(int32_t *)v3 = 702;
										return result;
									}
									// 0x59a94
									if (v21 != 2) {
										// bb5
										return result2;
									}
									// 0x59a9c
									*(int32_t *)v3 = 599;
									return result;
								}
							}
							// 0x59a40
							if (v5 != 28) {
								// bb
								return result;
							}
							// 0x59a48
							*(char *)(v7 + 218) = 3;
							*(int32_t *)v4 = 20;
							v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
							result2 = v21;
							result = result2;
							if (v21 == 0) {
								// 0x59a70
								*(int32_t *)v3 = 811;
								return result;
							}
							// 0x59a7c
							if (v21 == 1) {
								// 0x59a88
								*(int32_t *)v3 = 702;
								return result;
							}
							// 0x59a94
							if (v21 != 2) {
								// bb5
								return result2;
							}
							// 0x59a9c
							*(int32_t *)v3 = 599;
							return result;
						}
						// 0x59990
						if (v17 == 1) {
							// 0x5999c
							*(int32_t *)v3 = 699;
							// branch -> 0x599b8
						} else {
							// 0x599a8
							if (v17 == 2) {
								// 0x599b0
								*(int32_t *)v3 = 596;
								// branch -> 0x599b8
							}
						}
						// 0x599b8
						if (v5 == 9) {
							// 0x599c0
							v12 = v7;
							v15 = (char *)(v12 + 2);
							v13 = v12;
							if (*v15 == 1) {
								// 0x599d0
								*v15 = 2;
								*(char *)(v7 + 15) = 1;
								v13 = v7;
								// branch -> 0x599e0
							}
							// 0x599e0
							if (*(int32_t *)(v13 + 20) == 1) {
								// 0x599ec
								*(int32_t *)v4 = 10;
								v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
								if (v18 == 0) {
									// 0x59a0c
									*(int32_t *)v3 = 807;
									// branch -> 0x59a40
									// 0x59a40
									if (v5 != 28) {
										// bb
										return result;
									}
									// 0x59a48
									*(char *)(v7 + 218) = 3;
									*(int32_t *)v4 = 20;
									v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
									result2 = v21;
									result = result2;
									if (v21 == 0) {
										// 0x59a70
										*(int32_t *)v3 = 811;
										return result;
									}
									// 0x59a7c
									if (v21 == 1) {
										// 0x59a88
										*(int32_t *)v3 = 702;
										return result;
									}
									// 0x59a94
									if (v21 != 2) {
										// bb5
										return result2;
									}
									// 0x59a9c
									*(int32_t *)v3 = 599;
									return result;
								}
								// 0x59a18
								if (v18 == 1) {
									// 0x59a24
									*(int32_t *)v3 = 698;
									// branch -> 0x59a40
								} else {
									// 0x59a30
									if (v18 == 2) {
										// 0x59a38
										*(int32_t *)v3 = 595;
										// branch -> 0x59a40
									}
								}
								// 0x59a40
								if (v5 != 28) {
									// bb
									return result;
								}
								// 0x59a48
								*(char *)(v7 + 218) = 3;
								*(int32_t *)v4 = 20;
								v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
								result2 = v21;
								result = result2;
								if (v21 == 0) {
									// 0x59a70
									*(int32_t *)v3 = 811;
									return result;
								}
								// 0x59a7c
								if (v21 == 1) {
									// 0x59a88
									*(int32_t *)v3 = 702;
									return result;
								}
								// 0x59a94
								if (v21 != 2) {
									// bb5
									return result2;
								}
								// 0x59a9c
								*(int32_t *)v3 = 599;
								return result;
							}
						}
						// 0x59a40
						if (v5 != 28) {
							// bb
							return result;
						}
						// 0x59a48
						*(char *)(v7 + 218) = 3;
						*(int32_t *)v4 = 20;
						v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
						result2 = v21;
						result = result2;
						if (v21 == 0) {
							// 0x59a70
							*(int32_t *)v3 = 811;
							return result;
						}
						// 0x59a7c
						if (v21 == 1) {
							// 0x59a88
							*(int32_t *)v3 = 702;
							return result;
						}
						// 0x59a94
						if (v21 != 2) {
							// bb5
							return result2;
						}
						// 0x59a9c
						*(int32_t *)v3 = 599;
						return result;
					}
					// 0x599b8
					if (v5 == 9) {
						// 0x599c0
						v12 = v7;
						v15 = (char *)(v12 + 2);
						v13 = v12;
						if (*v15 == 1) {
							// 0x599d0
							*v15 = 2;
							*(char *)(v7 + 15) = 1;
							v13 = v7;
							// branch -> 0x599e0
						}
						// 0x599e0
						if (*(int32_t *)(v13 + 20) == 1) {
							// 0x599ec
							*(int32_t *)v4 = 10;
							v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
							if (v18 != 0) {
								// 0x59a18
								if (v18 == 1) {
									// 0x59a24
									*(int32_t *)v3 = 698;
									// branch -> 0x59a40
								} else {
									// 0x59a30
									if (v18 == 2) {
										// 0x59a38
										*(int32_t *)v3 = 595;
										// branch -> 0x59a40
									}
								}
								// 0x59a40
								if (v5 != 28) {
									// bb
									return result;
								}
								// 0x59a48
								*(char *)(v7 + 218) = 3;
								*(int32_t *)v4 = 20;
								v21 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
								result2 = v21;
								result = result2;
								if (v21 == 0) {
									// 0x59a70
									*(int32_t *)v3 = 811;
									return result;
								}
								// 0x59a7c
								if (v21 == 1) {
									// 0x59a88
									*(int32_t *)v3 = 702;
									return result;
								}
								// 0x59a94
								if (v21 != 2) {
									// bb5
									return result2;
								}
								// 0x59a9c
								*(int32_t *)v3 = 599;
								return result;
							}
							// 0x59a0c
							*(int32_t *)v3 = 807;
							// branch -> 0x59a40
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x598cc
				*(char *)v19 = 4;
				v9 = v5;
				// branch -> 0x598d4
			} else {
				v9 = 17;
			}
		} else {
			v9 = 17;
		}
	}
	// 0x598d4
	if (v9 == 16) {
		// 0x598dc
		v10 = v7;
		v14 = (char *)(v10 + 242);
		v11 = v10;
		if (*v14 == 1) {
			// 0x598ec
			*v14 = 2;
			*(char *)(v7 + 255) = 1;
			v11 = v7;
			// branch -> 0x598fc
		}
		// 0x598fc
		if (*(int32_t *)(v11 + 260) == 1) {
			// 0x59908
			*(int32_t *)v4 = 10;
			v16 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
			if (v16 == 0) {
				// 0x59928
				*(int32_t *)v3 = 809;
				// branch -> 0x5995c
			} else {
				// 0x59934
				if (v16 == 1) {
					// 0x59940
					*(int32_t *)v3 = 700;
					// branch -> 0x5995c
				} else {
					// 0x5994c
					if (v16 == 2) {
						// 0x59954
						*(int32_t *)v3 = 597;
						// branch -> 0x5995c
					}
				}
				// 0x5995c
				if (v5 == 15) {
					// 0x59964
					*(int32_t *)v4 = 30;
					v17 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
					if (v17 == 0) {
						// 0x59984
						*(int32_t *)v3 = 808;
						// branch -> 0x599b8
					} else {
						// 0x59990
						if (v17 == 1) {
							// 0x5999c
							*(int32_t *)v3 = 699;
							// branch -> 0x599b8
						} else {
							// 0x599a8
							if (v17 == 2) {
								// 0x599b0
								*(int32_t *)v3 = 596;
								// branch -> 0x599b8
							}
						}
						// 0x599b8
						if (v5 == 9) {
							// 0x599c0
							v12 = v7;
							v15 = (char *)(v12 + 2);
							v13 = v12;
							if (*v15 == 1) {
								// 0x599d0
								*v15 = 2;
								*(char *)(v7 + 15) = 1;
								v13 = v7;
								// branch -> 0x599e0
							}
							// 0x599e0
							if (*(int32_t *)(v13 + 20) == 1) {
								// 0x599ec
								*(int32_t *)v4 = 10;
								v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
								if (v18 == 0) {
									// 0x59a0c
									*(int32_t *)v3 = 807;
									// branch -> 0x59a40
								} else {
									// 0x59a18
									if (v18 == 1) {
										// 0x59a24
										*(int32_t *)v3 = 698;
										// branch -> 0x59a40
									} else {
										// 0x59a30
										if (v18 == 2) {
											// 0x59a38
											*(int32_t *)v3 = 595;
											// branch -> 0x59a40
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x599b8
					if (v5 == 9) {
						// 0x599c0
						v12 = v7;
						v15 = (char *)(v12 + 2);
						v13 = v12;
						if (*v15 == 1) {
							// 0x599d0
							*v15 = 2;
							*(char *)(v7 + 15) = 1;
							v13 = v7;
							// branch -> 0x599e0
						}
						// 0x599e0
						if (*(int32_t *)(v13 + 20) == 1) {
							// 0x599ec
							*(int32_t *)v4 = 10;
							v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
							if (v18 == 0) {
								// 0x59a0c
								*(int32_t *)v3 = 807;
								// branch -> 0x59a40
							} else {
								// 0x59a18
								if (v18 == 1) {
									// 0x59a24
									*(int32_t *)v3 = 698;
									// branch -> 0x59a40
								} else {
									// 0x59a30
									if (v18 == 2) {
										// 0x59a38
										*(int32_t *)v3 = 595;
										// branch -> 0x59a40
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x599b8
				if (v5 == 9) {
					// 0x599c0
					v12 = v7;
					v15 = (char *)(v12 + 2);
					v13 = v12;
					if (*v15 == 1) {
						// 0x599d0
						*v15 = 2;
						*(char *)(v7 + 15) = 1;
						v13 = v7;
						// branch -> 0x599e0
					}
					// 0x599e0
					if (*(int32_t *)(v13 + 20) == 1) {
						// 0x599ec
						*(int32_t *)v4 = 10;
						v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
						if (v18 == 0) {
							// 0x59a0c
							*(int32_t *)v3 = 807;
							// branch -> 0x59a40
						} else {
							// 0x59a18
							if (v18 == 1) {
								// 0x59a24
								*(int32_t *)v3 = 698;
								// branch -> 0x59a40
							} else {
								// 0x59a30
								if (v18 == 2) {
									// 0x59a38
									*(int32_t *)v3 = 595;
									// branch -> 0x59a40
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x5995c
			if (v5 == 15) {
				// 0x59964
				*(int32_t *)v4 = 30;
				v17 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
				if (v17 == 0) {
					// 0x59984
					*(int32_t *)v3 = 808;
					// branch -> 0x599b8
				} else {
					// 0x59990
					if (v17 == 1) {
						// 0x5999c
						*(int32_t *)v3 = 699;
						// branch -> 0x599b8
					} else {
						// 0x599a8
						if (v17 == 2) {
							// 0x599b0
							*(int32_t *)v3 = 596;
							// branch -> 0x599b8
						}
					}
					// 0x599b8
					if (v5 == 9) {
						// 0x599c0
						v12 = v7;
						v15 = (char *)(v12 + 2);
						v13 = v12;
						if (*v15 == 1) {
							// 0x599d0
							*v15 = 2;
							*(char *)(v7 + 15) = 1;
							v13 = v7;
							// branch -> 0x599e0
						}
						// 0x599e0
						if (*(int32_t *)(v13 + 20) == 1) {
							// 0x599ec
							*(int32_t *)v4 = 10;
							v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
							if (v18 == 0) {
								// 0x59a0c
								*(int32_t *)v3 = 807;
								// branch -> 0x59a40
							} else {
								// 0x59a18
								if (v18 == 1) {
									// 0x59a24
									*(int32_t *)v3 = 698;
									// branch -> 0x59a40
								} else {
									// 0x59a30
									if (v18 == 2) {
										// 0x59a38
										*(int32_t *)v3 = 595;
										// branch -> 0x59a40
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x599b8
				if (v5 == 9) {
					// 0x599c0
					v12 = v7;
					v15 = (char *)(v12 + 2);
					v13 = v12;
					if (*v15 == 1) {
						// 0x599d0
						*v15 = 2;
						*(char *)(v7 + 15) = 1;
						v13 = v7;
						// branch -> 0x599e0
					}
					// 0x599e0
					if (*(int32_t *)(v13 + 20) == 1) {
						// 0x599ec
						*(int32_t *)v4 = 10;
						v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
						if (v18 == 0) {
							// 0x59a0c
							*(int32_t *)v3 = 807;
							// branch -> 0x59a40
						} else {
							// 0x59a18
							if (v18 == 1) {
								// 0x59a24
								*(int32_t *)v3 = 698;
								// branch -> 0x59a40
							} else {
								// 0x59a30
								if (v18 == 2) {
									// 0x59a38
									*(int32_t *)v3 = 595;
									// branch -> 0x59a40
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x599b8
			if (v5 == 9) {
				// 0x599c0
				v12 = v7;
				v15 = (char *)(v12 + 2);
				v13 = v12;
				if (*v15 == 1) {
					// 0x599d0
					*v15 = 2;
					*(char *)(v7 + 15) = 1;
					v13 = v7;
					// branch -> 0x599e0
				}
				// 0x599e0
				if (*(int32_t *)(v13 + 20) == 1) {
					// 0x599ec
					*(int32_t *)v4 = 10;
					v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
					if (v18 == 0) {
						// 0x59a0c
						*(int32_t *)v3 = 807;
						// branch -> 0x59a40
					} else {
						// 0x59a18
						if (v18 == 1) {
							// 0x59a24
							*(int32_t *)v3 = 698;
							// branch -> 0x59a40
						} else {
							// 0x59a30
							if (v18 == 2) {
								// 0x59a38
								*(int32_t *)v3 = 595;
								// branch -> 0x59a40
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// 0x5995c
	if (v5 == 15) {
		// 0x59964
		*(int32_t *)v4 = 30;
		v17 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
		if (v17 == 0) {
			// 0x59984
			*(int32_t *)v3 = 808;
			// branch -> 0x599b8
		} else {
			// 0x59990
			if (v17 == 1) {
				// 0x5999c
				*(int32_t *)v3 = 699;
				// branch -> 0x599b8
			} else {
				// 0x599a8
				if (v17 == 2) {
					// 0x599b0
					*(int32_t *)v3 = 596;
					// branch -> 0x599b8
				}
			}
			// 0x599b8
			if (v5 == 9) {
				// 0x599c0
				v12 = v7;
				v15 = (char *)(v12 + 2);
				v13 = v12;
				if (*v15 == 1) {
					// 0x599d0
					*v15 = 2;
					*(char *)(v7 + 15) = 1;
					v13 = v7;
					// branch -> 0x599e0
				}
				// 0x599e0
				if (*(int32_t *)(v13 + 20) == 1) {
					// 0x599ec
					*(int32_t *)v4 = 10;
					v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
					if (v18 == 0) {
						// 0x59a0c
						*(int32_t *)v3 = 807;
						// branch -> 0x59a40
					} else {
						// 0x59a18
						if (v18 == 1) {
							// 0x59a24
							*(int32_t *)v3 = 698;
							// branch -> 0x59a40
						} else {
							// 0x59a30
							if (v18 == 2) {
								// 0x59a38
								*(int32_t *)v3 = 595;
								// branch -> 0x59a40
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x599b8
		if (v5 == 9) {
			// 0x599c0
			v12 = v7;
			v15 = (char *)(v12 + 2);
			v13 = v12;
			if (*v15 == 1) {
				// 0x599d0
				*v15 = 2;
				*(char *)(v7 + 15) = 1;
				v13 = v7;
				// branch -> 0x599e0
			}
			// 0x599e0
			if (*(int32_t *)(v13 + 20) == 1) {
				// 0x599ec
				*(int32_t *)v4 = 10;
				v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
				if (v18 == 0) {
					// 0x59a0c
					*(int32_t *)v3 = 807;
					// branch -> 0x59a40
				} else {
					// 0x59a18
					if (v18 == 1) {
						// 0x59a24
						*(int32_t *)v3 = 698;
						// branch -> 0x59a40
					} else {
						// 0x59a30
						if (v18 == 2) {
							// 0x59a38
							*(int32_t *)v3 = 595;
							// branch -> 0x59a40
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x599b8
	if (v5 == 9) {
		// 0x599c0
		v12 = v7;
		v15 = (char *)(v12 + 2);
		v13 = v12;
		if (*v15 == 1) {
			// 0x599d0
			*v15 = 2;
			*(char *)(v7 + 15) = 1;
			v13 = v7;
			// branch -> 0x599e0
		}
		// 0x599e0
		if (*(int32_t *)(v13 + 20) == 1) {
			// 0x599ec
			*(int32_t *)v4 = 10;
			v18 = *(char *)(v2 + 0x55ec * *(int32_t *)result + 348);
			if (v18 == 0) {
				// 0x59a0c
				*(int32_t *)v3 = 807;
				// branch -> 0x59a40
			} else {
				// 0x59a18
				if (v18 == 1) {
					// 0x59a24
					*(int32_t *)v3 = 698;
					// branch -> 0x59a40
				} else {
					// 0x59a30
					if (v18 == 2) {
						// 0x59a38
						*(int32_t *)v3 = 595;
						// branch -> 0x59a40
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x59aa8 - 0x59c3c
int32_t function_59aa8(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x59aac
	g26 = a1;
	g31 = *(int32_t *)(g23 - 0x71e4);
	g32 = *(int32_t *)(g23 - 0x71e0);
	g27 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x768c); // 0x59ac4
	g33 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7690); // 0x59ac8
	g35 = v3;
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t *v4 = (int32_t *)*(int32_t *)(g23 - 0x7704); // 0x59ad8
	if (*v4 != 0) {
		// 0x59ae4
		*v4 = 0;
		*(int32_t *)*(int32_t *)(g23 - 0x7708) = 0;
		v3 = g35;
		v2 = g33;
		a2 = g27;
		// branch -> 0x59af4
	}
	int32_t v5 = 368 * a2; // 0x59af4
	g30 = v5;
	int32_t v6 = v5 + v3; // 0x59afc
	int32_t v7 = v6 + 12; // 0x59b00
	g28 = v7;
	int32_t v8 = v6 + 16; // 0x59b08
	g29 = v8;
	int32_t result = 112 * *(int32_t *)v7; // 0x59b0c
	int32_t v9 = *(int32_t *)v8 + result;  // 0x59b10
	if (*(char *)(v9 + *(int32_t *)v2) == 0) {
		// 0x59c28
		g10 = v1;
		return result;
	}
	int32_t v10 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x59b24
	int32_t v11 = g26;                                    // 0x59b28
	int32_t v12;                                          // ctr
	int32_t v13;                                          // r26
	int32_t v14;                                          // r4
	int32_t v15;                                          // r5
	int32_t v16;                                          // 0x59b8c
	int32_t v17;                                          // 0x59bfc
	int32_t v18;                                          // 0x59c001
	int32_t v19;                                          // 0x59c0016
	int32_t v20;                                          // 0x59c044
	int32_t v21;                                          // 0x59b68
	int32_t v22;                                          // 0x59b8c
	int32_t v23;                                          // 0x59b94
	int32_t v24;                                          // 0x59b9c
	int32_t v25;                                          // 0x59c20
	int32_t result2;                                      // 0x59c24
	int32_t v26;                                          // 0x59b64
	int16_t *v27;                                         // 0x59b6c
	int32_t v28;                                          // 0x59b94
	int32_t v29;                                          // 0x59bd0
	int32_t v30;                                          // 0x59be0
	if (v10 == v11) {
		// 0x59b30
		int32_t v31; // 0x59b64
		int32_t v32; // 0x59b68
		int32_t v33; // 0x59b64
		if (*(int32_t *)*(int32_t *)(g23 - 0x7744) >= 12) {
			int32_t v34 = g36 + 0x55ec * v10;      // 0x59b44
			uint32_t v35 = *(int32_t *)(v34 + 60); // 0x59b50
			function_8ba58(1, 86, *(int32_t *)(v34 + 56) % 256, v35 % 256);
			v32 = g26;
			v33 = g30;
			v31 = g35;
			// branch -> 0x59b64
		} else {
			v32 = v10;
			v33 = v5;
			v31 = v3;
		}
		// 0x59b64
		v26 = v31 + v33;
		v21 = 0x55ec * v32;
		v13 = v21;
		v27 = (int16_t *)(v26 + 4);
		v14 = v26 - 8;
		*v27 = *v27 % 0x8000;
		v12 = 46;
		v23 = g36 + v21 + 0x53cc;
		// branch -> 0x59b8c
		while (true) {
			// 0x59b8c
			v16 = v14;
			v22 = v16 + 8;
			v14 = v22;
			v28 = v23 + 8;
			*(int32_t *)v28 = *(int32_t *)v22;
			v15 = v28;
			*(int32_t *)(v23 + 12) = *(int32_t *)(v16 + 12);
			v24 = v12 - 1;
			v12 = v24;
			if (v24 == 0) {
				// 0x59ba0
				function_5982c(g26, v14, v15);
				function_59780(g26);
				function_59724(g26);
				g37 = 0;
				v29 = *(int32_t *)g29 + 112 * *(int32_t *)g28;
				*(char *)(*(int32_t *)g33 + v29) = 0;
				v18 = g31;
				v20 = g37;
				if (v20 >= *(int32_t *)v18) {
					// 0x59c0c
					*(char *)*(int32_t *)(g23 - 0x7748) = -1;
					v25 = *(int32_t *)(v13 + g36 + 0x5494) + 12;
					g34 = v25;
					result2 = function_324ec(v25);
					// branch -> 0x59c28
					// 0x59c28
					g10 = v1;
					return result2;
				}
				v19 = v18;
				v17 = v20;
				while (true) {
					// 0x59bdc
					v30 = *(int32_t *)(g32 + 4 * v17);
					g34 = v30;
					int32_t v36;
					int32_t v37; // 0x59c00
					if (v30 == g27) {
					lab_0x59bf0:
						// 0x59bf0
						function_60bd4();
						v37 = g31;
						v36 = 0;
						// branch -> 0x59c00
					} else {
					lab_0x59bfc:
						// 0x59bfc
						v37 = v19;
						v36 = v17 + 1;
						// branch -> 0x59c00
					}
					// 0x59c00
					g37 = v36;
					if (v36 >= *(int32_t *)v37) {
						// break -> 0x59c0c
						break;
					}
					v19 = v37;
					v17 = v36;
					// continue -> 0x59bdc
				}
				// 0x59c0c
				*(char *)*(int32_t *)(g23 - 0x7748) = -1;
				v25 = *(int32_t *)(v13 + g36 + 0x5494) + 12;
				g34 = v25;
				result2 = function_324ec(v25);
				// branch -> 0x59c28
				// 0x59c28
				g10 = v1;
				return result2;
			}
		lab_0x59b8c:
			// 0x59b8c
			v23 = v15;
			// branch -> 0x59b8c
		}
	}
	// 0x59b64
	v26 = v3 + v5;
	v21 = 0x55ec * v11;
	v13 = v21;
	v27 = (int16_t *)(v26 + 4);
	*v27 = *v27 % 0x8000;
	v23 = g36 + v21 + 0x53cc;
	// branch -> 0x59b8c
	while (true) {
		// 0x59b8c
		v16 = v26 - 8;
		v22 = v16 + 8;
		v14 = v22;
		v28 = v23 + 8;
		*(int32_t *)v28 = *(int32_t *)v22;
		v15 = v28;
		*(int32_t *)(v23 + 12) = *(int32_t *)(v16 + 12);
		v24 = 45;
		v12 = v24;
		if (v24 != 0) {
			goto lab_0x59b8c;
		}
		// 0x59ba0
		function_5982c(g26, v14, v15);
		function_59780(g26);
		function_59724(g26);
		g37 = 0;
		v29 = *(int32_t *)g29 + 112 * *(int32_t *)g28;
		*(char *)(*(int32_t *)g33 + v29) = 0;
		v18 = g31;
		v20 = g37;
		if (v20 < *(int32_t *)v18) {
			v19 = v18;
			v17 = v20;
			while (true) {
				// 0x59bdc
				v30 = *(int32_t *)(g32 + 4 * v17);
				g34 = v30;
				if (v30 == g27) {
					goto lab_0x59bf0;
				}
				goto lab_0x59bfc;
			}
		}
		// 0x59c0c
		*(char *)*(int32_t *)(g23 - 0x7748) = -1;
		v25 = *(int32_t *)(v13 + g36 + 0x5494) + 12;
		g34 = v25;
		result2 = function_324ec(v25);
		// branch -> 0x59c28
		// 0x59c28
		g10 = v1;
		return result2;
	}
}

// Address range: 0x59c3c - 0x5a318
int32_t AutoGetItem(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x59c40
	g35 = a1;
	g24 = *(int32_t *)(g23 - 0x71e4);
	g22 = *(int32_t *)(g23 - 0x71e0);
	g26 = a2;
	g16 = *(int32_t *)(g23 - 0x7690);
	g25 = *(int32_t *)(g23 - 0x7670);
	g20 = *(int32_t *)(g23 - 0x77a8);
	int32_t *v2 = (int32_t *)*(int32_t *)(g23 - 0x7704); // 0x59c6c
	if (*v2 != 0) {
		// 0x59c78
		*v2 = 0;
		*(int32_t *)*(int32_t *)(g23 - 0x7708) = 0;
		a2 = g26;
		// branch -> 0x59c88
	}
	// 0x59c88
	int32_t v3; // 0x59cc0
	int32_t v4;
	if (a2 == 127) {
		// 0x59c88
		v4 = 0xb690;
		v3 = g16;
		// branch -> 0x59cbc
	} else {
		int32_t v5 = 368 * a2;              // 0x59c90
		int32_t v6 = g16;                   // 0x59c9c
		int32_t v7 = v6 + v5;               // 0x59c9c
		int32_t v8 = *(int32_t *)(v7 + 16); // 0x59ca4
		g34 = v8;
		int32_t v9 = v8 + 112 * *(int32_t *)(v7 + 12); // 0x59cac
		if (*(char *)(v9 + *(int32_t *)*(int32_t *)(g23 - 0x768c)) == 0) {
			// 0x5a304
			g10 = v1;
			return g34;
		}
		v4 = v5;
		v3 = v6;
	}
	// 0x59cbc
	g17 = v4;
	int32_t v10 = v3 + v4; // 0x59cc0
	g19 = v10;
	int32_t v11 = 0x55ec * g35; // 0x59cc4
	g21 = v11;
	int16_t *v12 = (int16_t *)(v10 + 4); // 0x59cc8
	int32_t v13 = v10 - 8;               // r3
	int32_t v14 = g20 + v11;             // r15
	*v12 = *v12 % 0x8000;
	int32_t v15 = 46; // ctr
	g18 = v14 + 0x53d4;
	int32_t v16 = v14 + 0x53cc; // 0x59cf4
	// branch -> 0x59cec
	while (true) {
		int32_t v17 = v13;             // 0x59cec
		int32_t v18 = v17 + 8;         // 0x59cec
		int32_t v19 = *(int32_t *)v18; // 0x59cec
		v13 = v18;
		int32_t v20 = v16 + 8; // 0x59cf4
		*(int32_t *)v20 = v19;
		*(int32_t *)(v16 + 12) = *(int32_t *)(v17 + 12);
		int32_t v21 = v15 - 1; // 0x59cfc
		v15 = v21;
		if (v21 == 0) {
			// 0x59d00
			function_5982c(g35, v20, v19);
			function_59780(g35);
			function_59724(g35);
			int32_t v22 = g21 + g20; // 0x59d18
			int32_t v23 = v22;       // r23
			g34 = *(int32_t *)(v22 + 0x5494) + 12;
			function_32430();
			int32_t v24 = v23;             // 0x59d28
			int32_t v25 = v24 + 0x53dc;    // 0x59d28
			int32_t *v26 = (int32_t *)v25; // 0x59d34
			int32_t v27;                   // 0x5a21c
			int32_t v28;                   // 0x5a22014
			int32_t v29;                   // 0x5a22090
			int32_t v30;                   // 0x5a22417
			int32_t v31;                   // 0x5a230
			int32_t v32;                   // 0x59d44
			int32_t v33;                   // 0x5a1f0
			int32_t v34;                   // 0x5a25c
			int32_t v35;                   // 0x5a280
			int32_t v36;                   // 0x5a2a0
			int32_t v37;                   // 0x5a1d8
			int32_t v38;                   // 0x5a1f4
			unsigned char v39;             // 0x5a244
			int32_t v40;                   // 0x5a204
			if (*v26 == 11) {
				// 0x59d40
				v32 = function_5712c(g35);
				g36 = v32;
				// branch -> 0x5a1cc
			} else {
				// 0x59d50
				g36 = 0;
				int32_t v41 = *(int32_t *)(v24 + 120) % 16; // 0x59d58
				int32_t v42;                                // r24
				int32_t v43;                                // r5
				int32_t v44;                                // 0x59dac
				int32_t v45;                                // 0x59db4
				int32_t v46;                                // 0x59e28
				int32_t v47;                                // 0x59e5831
				int32_t v48;                                // 0x59e64
				int32_t v49;                                // 0x59e78
				int32_t v50;                                // 0x59e9c
				int32_t v51;                                // 0x59e9c36
				int32_t v52;                                // 0x59e9c37
				int32_t v53;                                // 0x59eb0
				int32_t v54;                                // 0x59ed4
				int32_t v55;                                // 0x59ee8
				int32_t v56;                                // 0x59f0c43
				int32_t v57;                                // 0x59f20
				int32_t v58;                                // 0x59f4446
				int32_t v59;                                // 0x59f4c
				int32_t v60;                                // 0x59f68
				int32_t v61;                                // 0x59f8c
				int32_t v62;                                // 0x59f8c50
				int32_t v63;                                // 0x59fa0
				int32_t v64;                                // 0x59fc455
				int32_t v65;                                // 0x59fd8
				int32_t v66;                                // 0x5a004
				int32_t v67;                                // 0x5a020
				int32_t v68;                                // 0x5a04462
				int32_t v69;                                // 0x5a04c
				int32_t v70;                                // 0x5a070
				int32_t v71;                                // 0x5a09c
				int32_t v72;                                // 0x5a09c67
				int32_t v73;                                // 0x5a0b0
				int32_t v74;                                // 0x5a0d471
				int32_t v75;                                // 0x5a0e8
				int32_t v76;                                // 0x5a10c74
				int32_t v77;                                // 0x5a120
				int32_t v78;                                // 0x5a14c
				int32_t v79;                                // 0x5a168
				int32_t v80;                                // 0x5a18c
				int32_t v81;                                // 0x5a18c81
				int32_t v82;                                // 0x5a1a0
				int32_t v83;                                // 0x5a1c485
				int32_t v84;                                // 0x5a2b8
				int32_t v85;                                // 0x5a060
				int32_t v86;                                // 0x5a2b8
				int32_t v87;                                // 0x5a2c0
				int32_t v88;                                // 0x5a2c8
				int32_t v89;                                // 0x59dbc
				int32_t v90;                                // 0x59dc0
				int32_t v91;                                // 0x59dd8
				int32_t v92;                                // 0x5a2c0
				int32_t v93;                                // 0x5a2d8
				uint32_t v94;                               // 0x5a2e4
				if (v41 != 0) {
					// 0x59d60
					if (v41 != 1) {
						v44 = 0;
						// 0x59dac
						v32 = v44;
						if (v44 == 0) {
							// 0x59db4
							v45 = g23;
							v89 = *(int32_t *)*(int32_t *)(v45 - 0x7648);
							v90 = *(int32_t *)*(int32_t *)(v45 - 0x764c);
							g33 = v90;
							g32 = v89;
							v62 = 0;
							v59 = v89;
							if (v89 == 1) {
								// 0x59dd0
								if (v90 == 1) {
									// 0x59dd8
									v91 = g21 + g20;
									if (*(int32_t *)(v91 + 0x5538) != 0) {
										// 0x59dec
										if (*(int32_t *)(76 * *(int32_t *)(v91 + 0x553c) + v45 + 0x3858 + 64) != 0) {
											// 0x59e04
											v42 = 46;
											v23 = 1;
											v51 = 0;
											v47 = 0;
											v46 = v91;
											v48 = 0;
											// branch -> 0x59e64
											while (true) {
												// 0x59e64
												if (v48 == 0) {
												lab_0x59e18:;
													int32_t v95 = v51; // 0x59e9c35
													int32_t v96 = v47; // 0x59e58
													int32_t v97 = v46; // 0x59e54
													int32_t v98 = 0;   // 0x59e6425
													int32_t v99;       // 0x59e58
													if (*(int32_t *)(v46 + 0x485c) == -1) {
														// 0x59e24
														v15 = v42;
														int32_t v100 = v46 + 0x484c; // 0x59e38
														int32_t v101 = v91 + 0x53cc; // 0x59e30
														// branch -> 0x59e30
														while (true) {
															int32_t v102 = v101 + 8; // 0x59e30
															v13 = v102;
															int32_t v103 = v100 + 8; // 0x59e38
															*(int32_t *)v103 = *(int32_t *)v102;
															v20 = v103;
															*(int32_t *)(v100 + 12) = *(int32_t *)(v101 + 12);
															int32_t v104 = v15 - 1; // 0x59e40
															v15 = v104;
															if (v104 == 0) {
																// 0x59e44
																g34 = g35;
																function_5ca38();
																*(int32_t *)g25 = v23;
																g36 = 1;
																v95 = 1;
																v96 = g30;
																v97 = g31;
																v98 = 1;
																// branch -> 0x59e54
																int32_t v105 = v97 + 368; // 0x59e54
																v99 = v96 + 1;
																if (v99 > 7) {
																	v52 = v95;
																	// break (via goto) -> 0x59e94
																	goto lab_0x59e94;
																}
																v51 = v95;
																v47 = v99;
																v46 = v105;
																v48 = v98;
																// continue (via goto) -> 0x59e64
																goto lab_0x59e64;
															} else {
																// 0x59e30
																v100 = v20;
																v101 = v13;
																// branch -> 0x59e30
																continue;
															}
														}
														// 0x59e94
														v49 = 30;
														v50 = v52;
														// branch -> 0x59e9c
														while (true) {
															int32_t v106 = v50; // 0x59ed440
															if (v50 == 0) {
															lab_0x59e74_4:;
																int32_t v107 = function_56c68(g35, (int64_t)v49, g32, g33, 1); // 0x59e88
																g36 = v107;
																int32_t v108 = g31 + 1; // 0x59e90
																if (v108 > 39) {
																	// break -> 0x59ecc
																	break;
																}
																v49 = v108;
																v50 = v107;
																// continue -> 0x59e9c
																continue;
															}
															// 0x59ecc
															v53 = 20;
															v54 = v106;
															// branch -> 0x59ed4
															while (true) {
																// 0x59ed4
																v56 = v54;
																if (v54 == 0) {
																lab_0x59eac_4:;
																	int32_t v109 = function_56c68(g35, (int64_t)v53, g32, g33, 1); // 0x59ec0
																	g36 = v109;
																	int32_t v110 = g31 + 1; // 0x59ec8
																	if (v110 > 29) {
																		// break -> 0x59f04
																		break;
																	}
																	v53 = v110;
																	v54 = v109;
																	// continue -> 0x59ed4
																	continue;
																}
																// 0x59f04
																v55 = 10;
																// branch -> 0x59f0c
																while (true) {
																	// 0x59f0c
																	v58 = v56;
																	if (v56 == 0) {
																	lab_0x59ee4_4:;
																		int32_t v111 = function_56c68(g35, (int64_t)v55, g32, g33, 1); // 0x59ef8
																		g36 = v111;
																		int32_t v112 = g31 + 1; // 0x59f00
																		if (v112 > 19) {
																			// break -> 0x59f3c
																			break;
																		}
																		v55 = v112;
																		v56 = v111;
																		// continue -> 0x59f0c
																		continue;
																	}
																	// 0x59f3c
																	v57 = 0;
																	// branch -> 0x59f44
																	while (true) {
																		int32_t v113 = v58; // 0x59f8c52
																		if (v58 == 0) {
																		lab_0x59f1c_4:;
																			int32_t v114 = function_56c68(g35, (int64_t)v57, g32, g33, 1); // 0x59f30
																			g36 = v114;
																			int32_t v115 = g31 + 1; // 0x59f38
																			if (v115 > 9) {
																				// break -> 0x59f4c
																				break;
																			}
																			v57 = v115;
																			v58 = v114;
																			// continue -> 0x59f44
																			continue;
																		}
																		// 0x59f4c
																		v62 = v113;
																		v59 = g32;
																		// branch -> 0x59f4c
																		// 0x59f4c
																		v68 = v62;
																		v66 = v59;
																		if (v59 == 1) {
																			// 0x59f54
																			if (g33 == 2) {
																				// 0x59f84
																				v60 = 29;
																				v61 = v62;
																				// branch -> 0x59f8c
																				while (true) {
																					// 0x59f8c
																					v64 = v61;
																					if (v61 == 0) {
																					lab_0x59f64_4:;
																						int32_t v116 = function_56c68(g35, (int64_t)v60, g32, g33, 1); // 0x59f78
																						g36 = v116;
																						int32_t v117 = g31 - 1; // 0x59f80
																						if (v117 < 20) {
																							// break -> 0x59fbc
																							break;
																						}
																						v60 = v117;
																						v61 = v116;
																						// continue -> 0x59f8c
																						continue;
																					}
																					// 0x59fbc
																					v63 = 9;
																					// branch -> 0x59fc4
																					while (true) {
																						int32_t v118 = v64; // 0x59ffc58
																						if (v64 == 0) {
																						lab_0x59f9c_4:;
																							int32_t v119 = function_56c68(g35, (int64_t)v63, g32, g33, 1); // 0x59fb0
																							g36 = v119;
																							int32_t v120 = g31 - 1; // 0x59fb8
																							if (v120 < 0) {
																								// break -> 0x59ff4
																								break;
																							}
																							v63 = v120;
																							v64 = v119;
																							// continue -> 0x59fc4
																							continue;
																						}
																						// 0x59ff4
																						v65 = 19;
																						// branch -> 0x59ffc
																						int32_t v121; // 0x59fe8
																						while (true) {
																							// 0x59ffc
																							if (v118 == 0) {
																							lab_0x59fd4_4:
																								// 0x59fd4
																								v121 = function_56c68(g35, (int64_t)v65, g32, g33, 1);
																								g36 = v121;
																								int32_t v122 = g31 - 1; // 0x59ff0
																								if (v122 < 10) {
																									// break -> 0x5a004
																									break;
																								}
																								v65 = v122;
																								v118 = v121;
																								// continue -> 0x59ffc
																								continue;
																							}
																							// 0x5a004
																							// branch -> 0x5a004
																						}
																						// 0x5a004
																						v68 = v121;
																						v66 = g32;
																						// branch -> 0x5a004
																					}
																				}
																			} else {
																				v68 = v62;
																				v66 = 1;
																			}
																		}
																		// 0x5a004
																		v72 = v68;
																		v69 = v66;
																		if (v66 == 1) {
																			// 0x5a00c
																			if (g33 == 3) {
																				// 0x5a03c
																				v67 = 0;
																				int32_t v123 = v68; // 0x5a044
																				// branch -> 0x5a044
																				int32_t v124; // 0x5a030
																				while (true) {
																					// 0x5a044
																					if (v123 == 0) {
																					lab_0x5a01c_4:
																						// 0x5a01c
																						v124 = function_56c68(g35, (int64_t)v67, g32, g33, 1);
																						g36 = v124;
																						int32_t v125 = g31 + 1; // 0x5a038
																						if (v125 > 19) {
																							// break -> 0x5a04c
																							break;
																						}
																						v67 = v125;
																						v123 = v124;
																						// continue -> 0x5a044
																						continue;
																					}
																					// 0x5a04c
																					// branch -> 0x5a04c
																				}
																				// 0x5a04c
																				v72 = v124;
																				v69 = g32;
																				// branch -> 0x5a04c
																			} else {
																				v72 = v68;
																				v69 = 1;
																			}
																		}
																		// 0x5a04c
																		v81 = v72;
																		v78 = v69;
																		if (v69 == 2) {
																			// 0x5a054
																			if (g33 == 2) {
																				// 0x5a05c
																				v85 = g23 + 0x35c4;
																				g30 = v85;
																				v70 = v85;
																				v71 = v72;
																				// branch -> 0x5a09c
																				while (true) {
																					// 0x5a09c
																					v74 = v71;
																					if (v71 == 0) {
																					lab_0x5a070_4:;
																						int32_t v126 = function_56c68(g35, (int64_t) * (int32_t *)v70, g32, g33, 1); // 0x5a084
																						g36 = v126;
																						int32_t v127 = g30 + 4; // 0x5a090
																						g30 = v127;
																						if (g31 > 8) {
																							// break -> 0x5a0cc
																							break;
																						}
																						v70 = v127;
																						v71 = v126;
																						// continue -> 0x5a09c
																						continue;
																					}
																					// 0x5a0cc
																					v73 = 21;
																					// branch -> 0x5a0d4
																					while (true) {
																						// 0x5a0d4
																						v76 = v74;
																						if (v74 == 0) {
																						lab_0x5a0ac_4:;
																							int32_t v128 = function_56c68(g35, (int64_t)v73, g32, g33, 1); // 0x5a0c0
																							g36 = v128;
																							int32_t v129 = g31 + 2; // 0x5a0c8
																							if (v129 > 28) {
																								// break -> 0x5a104
																								break;
																							}
																							v73 = v129;
																							v74 = v128;
																							// continue -> 0x5a0d4
																							continue;
																						}
																						// 0x5a104
																						v75 = 1;
																						// branch -> 0x5a10c
																						while (true) {
																							int32_t v130 = v76; // 0x5a14477
																							if (v76 == 0) {
																							lab_0x5a0e4_4:;
																								int32_t v131 = function_56c68(g35, (int64_t)v75, g32, g33, 1); // 0x5a0f8
																								g36 = v131;
																								int32_t v132 = g31 + 2; // 0x5a100
																								if (v132 > 8) {
																									// break -> 0x5a13c
																									break;
																								}
																								v75 = v132;
																								v76 = v131;
																								// continue -> 0x5a10c
																								continue;
																							}
																							// 0x5a13c
																							v77 = 10;
																							// branch -> 0x5a144
																							int32_t v133; // 0x5a130
																							while (true) {
																								// 0x5a144
																								if (v130 == 0) {
																								lab_0x5a11c_4:
																									// 0x5a11c
																									v133 = function_56c68(g35, (int64_t)v77, g32, g33, 1);
																									g36 = v133;
																									int32_t v134 = g31 + 1; // 0x5a138
																									if (v134 > 18) {
																										// break -> 0x5a14c
																										break;
																									}
																									v77 = v134;
																									v130 = v133;
																									// continue -> 0x5a144
																									continue;
																								}
																								// 0x5a14c
																								// branch -> 0x5a14c
																							}
																							// 0x5a14c
																							v81 = v133;
																							v78 = g32;
																							// branch -> 0x5a14c
																						}
																					}
																				}
																			} else {
																				v81 = v72;
																				v78 = 2;
																			}
																		}
																		// 0x5a14c
																		v32 = v81;
																		if (v78 == 2) {
																			// 0x5a154
																			if (g33 == 3) {
																				// 0x5a184
																				v79 = 0;
																				v80 = v81;
																				// branch -> 0x5a18c
																				while (true) {
																					// 0x5a18c
																					v83 = v80;
																					if (v80 == 0) {
																					lab_0x5a164_4:;
																						int32_t v135 = function_56c68(g35, (int64_t)v79, g32, g33, 1); // 0x5a178
																						g36 = v135;
																						int32_t v136 = g31 + 1; // 0x5a180
																						if (v136 > 8) {
																							// break -> 0x5a1bc
																							break;
																						}
																						v79 = v136;
																						v80 = v135;
																						// continue -> 0x5a18c
																						continue;
																					}
																					// 0x5a1bc
																					v82 = 10;
																					// branch -> 0x5a1c4
																					while (true) {
																						// 0x5a1c4
																						if (v83 == 0) {
																						lab_0x5a19c_4:;
																							int32_t v137 = function_56c68(g35, (int64_t)v82, g32, g33, 1); // 0x5a1b0
																							g36 = v137;
																							int32_t v138 = g31 + 1; // 0x5a1b8
																							if (v138 > 18) {
																								v32 = v137;
																								// break -> 0x5a1cc
																								break;
																							}
																							v82 = v138;
																							v83 = v137;
																							// continue -> 0x5a1c4
																							continue;
																						} else {
																							v32 = v83;
																						}
																					}
																					// 0x5a1cc
																					v31 = g23;
																					if (v32 == 0) {
																						// 0x5a230
																						if (g35 == *(int32_t *)*(int32_t *)(v31 - 0x77ac)) {
																							// 0x5a240
																							v39 = *(char *)(g21 + g20 + 348);
																							if (v39 == 0) {
																								// 0x5a250
																								g37 = 3;
																								v34 = random(0) + 727;
																								g34 = v34;
																								PlaySFX(v34);
																								// branch -> 0x5a2a8
																							} else {
																								// 0x5a268
																								if (v39 == 1) {
																									// 0x5a274
																									g37 = 3;
																									v35 = random(0) + 624;
																									g34 = v35;
																									PlaySFX(v35);
																									// branch -> 0x5a2a8
																								} else {
																									// 0x5a28c
																									if (v39 == 2) {
																										// 0x5a294
																										g37 = 3;
																										v36 = random(0) + 521;
																										g34 = v36;
																										PlaySFX(v36);
																										// branch -> 0x5a2a8
																									}
																								}
																								// 0x5a2a8
																								v15 = 46;
																								v87 = g18 - 8;
																								v84 = g19 - 8;
																								// branch -> 0x5a2b8
																								while (true) {
																									// 0x5a2b8
																									v86 = v84 + 8;
																									v92 = v87 + 8;
																									*(int32_t *)v92 = *(int32_t *)v86;
																									v43 = v92;
																									*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																									v88 = v15 - 1;
																									v15 = v88;
																									if (v88 == 0) {
																										// 0x5a2cc
																										function_60abc(g26, 1, v43);
																										v93 = g17 + g16;
																										v94 = *(int32_t *)(v93 + 16);
																										function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																										g34 = v25;
																										*v26 = -1;
																										// branch -> 0x5a304
																										// 0x5a304
																										g10 = v1;
																										return g34;
																									}
																								lab_0x5a2b8_24:
																									// 0x5a2b8
																									v87 = v43;
																									v84 = v86;
																									// branch -> 0x5a2b8
																								}
																							}
																							// 0x5a2a8
																							v87 = g18 - 8;
																							v84 = g19 - 8;
																							// branch -> 0x5a2b8
																							while (true) {
																								// 0x5a2b8
																								v86 = v84 + 8;
																								v92 = v87 + 8;
																								*(int32_t *)v92 = *(int32_t *)v86;
																								v43 = v92;
																								*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																								v88 = 45;
																								v15 = v88;
																								if (v88 != 0) {
																									goto lab_0x5a2b8_24;
																								}
																								// 0x5a2cc
																								function_60abc(g26, 1, v43);
																								v93 = g17 + g16;
																								v94 = *(int32_t *)(v93 + 16);
																								function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																								g34 = v25;
																								*v26 = -1;
																								// branch -> 0x5a304
																								// 0x5a304
																								g10 = v1;
																								return g34;
																							}
																						}
																						// 0x5a2a8
																						v87 = g18 - 8;
																						v84 = g19 - 8;
																						// branch -> 0x5a2b8
																						while (true) {
																							// 0x5a2b8
																							v86 = v84 + 8;
																							v92 = v87 + 8;
																							*(int32_t *)v92 = *(int32_t *)v86;
																							v43 = v92;
																							*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																							v88 = 45;
																							v15 = v88;
																							if (v88 != 0) {
																								goto lab_0x5a2b8_24;
																							}
																							// 0x5a2cc
																							function_60abc(g26, 1, v43);
																							v93 = g17 + g16;
																							v94 = *(int32_t *)(v93 + 16);
																							function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																							g34 = v25;
																							*v26 = -1;
																							// branch -> 0x5a304
																							// 0x5a304
																							g10 = v1;
																							return g34;
																						}
																					} else {
																						// 0x5a1d4
																						v37 = g17 + g16;
																						g37 = 0;
																						v33 = 112 * *(int32_t *)(v37 + 12);
																						g34 = v33;
																						v38 = v33 + *(int32_t *)(v37 + 16);
																						*(char *)(v38 + *(int32_t *)*(int32_t *)(v31 - 0x768c)) = 0;
																						v28 = g24;
																						v30 = g37;
																						if (v30 < *(int32_t *)v28) {
																							v29 = v28;
																							v27 = v30;
																							while (true) {
																								// 0x5a200
																								v40 = *(int32_t *)(g22 + 4 * v27);
																								g34 = v40;
																								int32_t v139;
																								int32_t v140; // 0x5a220
																								if (v40 == g26) {
																								lab_0x5a210_9:
																									// 0x5a210
																									g34 = function_60bd4();
																									v140 = g24;
																									v139 = 0;
																									// branch -> 0x5a220
																								} else {
																								lab_0x5a21c_9:
																									// 0x5a21c
																									v140 = v29;
																									v139 = v27 + 1;
																									// branch -> 0x5a220
																								}
																								// 0x5a220
																								g37 = v139;
																								if (v139 >= *(int32_t *)v140) {
																									// break -> 0x5a304
																									break;
																								}
																								v29 = v140;
																								v27 = v139;
																								// continue -> 0x5a200
																							}
																							// 0x5a304
																							g10 = v1;
																							return g34;
																						}
																					}
																					// 0x5a304
																					g10 = v1;
																					return g34;
																				}
																			} else {
																				v32 = v81;
																			}
																		}
																		// 0x5a1cc
																		v31 = g23;
																		if (v32 == 0) {
																			// 0x5a230
																			if (g35 == *(int32_t *)*(int32_t *)(v31 - 0x77ac)) {
																				// 0x5a240
																				v39 = *(char *)(g21 + g20 + 348);
																				if (v39 == 0) {
																					// 0x5a250
																					g37 = 3;
																					v34 = random(0) + 727;
																					g34 = v34;
																					PlaySFX(v34);
																					// branch -> 0x5a2a8
																				} else {
																					// 0x5a268
																					if (v39 == 1) {
																						// 0x5a274
																						g37 = 3;
																						v35 = random(0) + 624;
																						g34 = v35;
																						PlaySFX(v35);
																						// branch -> 0x5a2a8
																					} else {
																						// 0x5a28c
																						if (v39 == 2) {
																							// 0x5a294
																							g37 = 3;
																							v36 = random(0) + 521;
																							g34 = v36;
																							PlaySFX(v36);
																							// branch -> 0x5a2a8
																						}
																					}
																					// 0x5a2a8
																					v87 = g18 - 8;
																					v84 = g19 - 8;
																					// branch -> 0x5a2b8
																					while (true) {
																						// 0x5a2b8
																						v86 = v84 + 8;
																						v92 = v87 + 8;
																						*(int32_t *)v92 = *(int32_t *)v86;
																						v43 = v92;
																						*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																						v88 = 45;
																						v15 = v88;
																						if (v88 != 0) {
																							goto lab_0x5a2b8_24;
																						}
																						// 0x5a2cc
																						function_60abc(g26, 1, v43);
																						v93 = g17 + g16;
																						v94 = *(int32_t *)(v93 + 16);
																						function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																						g34 = v25;
																						*v26 = -1;
																						// branch -> 0x5a304
																						// 0x5a304
																						g10 = v1;
																						return g34;
																					}
																				}
																				// 0x5a2a8
																				v87 = g18 - 8;
																				v84 = g19 - 8;
																				// branch -> 0x5a2b8
																				while (true) {
																					// 0x5a2b8
																					v86 = v84 + 8;
																					v92 = v87 + 8;
																					*(int32_t *)v92 = *(int32_t *)v86;
																					v43 = v92;
																					*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																					v88 = 45;
																					v15 = v88;
																					if (v88 != 0) {
																						goto lab_0x5a2b8_24;
																					}
																					// 0x5a2cc
																					function_60abc(g26, 1, v43);
																					v93 = g17 + g16;
																					v94 = *(int32_t *)(v93 + 16);
																					function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																					g34 = v25;
																					*v26 = -1;
																					// branch -> 0x5a304
																					// 0x5a304
																					g10 = v1;
																					return g34;
																				}
																			}
																			// 0x5a2a8
																			v87 = g18 - 8;
																			v84 = g19 - 8;
																			// branch -> 0x5a2b8
																			while (true) {
																				// 0x5a2b8
																				v86 = v84 + 8;
																				v92 = v87 + 8;
																				*(int32_t *)v92 = *(int32_t *)v86;
																				v43 = v92;
																				*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																				v88 = 45;
																				v15 = v88;
																				if (v88 != 0) {
																					goto lab_0x5a2b8_24;
																				}
																				// 0x5a2cc
																				function_60abc(g26, 1, v43);
																				v93 = g17 + g16;
																				v94 = *(int32_t *)(v93 + 16);
																				function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																				g34 = v25;
																				*v26 = -1;
																				// branch -> 0x5a304
																				// 0x5a304
																				g10 = v1;
																				return g34;
																			}
																		} else {
																			// 0x5a1d4
																			v37 = g17 + g16;
																			g37 = 0;
																			v33 = 112 * *(int32_t *)(v37 + 12);
																			g34 = v33;
																			v38 = v33 + *(int32_t *)(v37 + 16);
																			*(char *)(v38 + *(int32_t *)*(int32_t *)(v31 - 0x768c)) = 0;
																			v28 = g24;
																			v30 = g37;
																			if (v30 < *(int32_t *)v28) {
																				v29 = v28;
																				v27 = v30;
																				while (true) {
																					// 0x5a200
																					v40 = *(int32_t *)(g22 + 4 * v27);
																					g34 = v40;
																					if (v40 == g26) {
																						goto lab_0x5a210_9;
																					}
																					goto lab_0x5a21c_9;
																				}
																			}
																		}
																		// 0x5a304
																		g10 = v1;
																		return g34;
																	}
																}
															}
														}
													}
													// 0x59e54
													v99 = v96 + 1;
													if (v99 > 7) {
														v52 = v95;
														// break -> 0x59e94
														break;
													}
													v51 = v95;
													v47 = v99;
													v46 = v97 + 368;
													v48 = v98;
													// continue -> 0x59e64
													continue;
												} else {
													v52 = v51;
												}
											}
											// 0x59e94
											v49 = 30;
											v50 = v52;
											// branch -> 0x59e9c
											while (true) {
												// 0x59e9c
												if (v50 == 0) {
													goto lab_0x59e74_4;
												}
												// 0x59ecc
												v53 = 20;
												v54 = v50;
												// branch -> 0x59ed4
												while (true) {
													// 0x59ed4
													if (v54 == 0) {
														goto lab_0x59eac_4;
													}
													// 0x59f04
													v55 = 10;
													v56 = v54;
													// branch -> 0x59f0c
													while (true) {
														// 0x59f0c
														if (v56 == 0) {
															goto lab_0x59ee4_4;
														}
														// 0x59f3c
														v57 = 0;
														v58 = v56;
														// branch -> 0x59f44
														while (true) {
															// 0x59f44
															if (v58 == 0) {
																goto lab_0x59f1c_4;
															}
															// 0x59f4c
															v62 = v58;
															v59 = g32;
															// branch -> 0x59f4c
															// 0x59f4c
															v68 = v62;
															v66 = v59;
															if (v59 == 1) {
																// 0x59f54
																if (g33 == 2) {
																	// 0x59f84
																	v60 = 29;
																	v61 = v62;
																	// branch -> 0x59f8c
																	while (true) {
																		// 0x59f8c
																		if (v61 == 0) {
																			goto lab_0x59f64_4;
																		}
																		// 0x59fbc
																		v63 = 9;
																		v64 = v61;
																		// branch -> 0x59fc4
																		while (true) {
																			// 0x59fc4
																			if (v64 == 0) {
																				goto lab_0x59f9c_4;
																			}
																			// 0x59ff4
																			v65 = 19;
																			// branch -> 0x59ffc
																			while (true) {
																				// 0x59ffc
																				if (v64 == 0) {
																					goto lab_0x59fd4_4;
																				}
																				// 0x5a004
																				// branch -> 0x5a004
																			}
																		}
																	}
																} else {
																	v68 = v62;
																	v66 = 1;
																}
															}
															// 0x5a004
															v72 = v68;
															v69 = v66;
															if (v66 == 1) {
																// 0x5a00c
																if (g33 == 3) {
																	// 0x5a03c
																	v67 = 0;
																	// branch -> 0x5a044
																	while (true) {
																		// 0x5a044
																		if (v68 == 0) {
																			goto lab_0x5a01c_4;
																		}
																		// 0x5a04c
																		// branch -> 0x5a04c
																	}
																} else {
																	v72 = v68;
																	v69 = 1;
																}
															}
															// 0x5a04c
															v81 = v72;
															v78 = v69;
															if (v69 == 2) {
																// 0x5a054
																if (g33 == 2) {
																	// 0x5a05c
																	v85 = g23 + 0x35c4;
																	g30 = v85;
																	v70 = v85;
																	v71 = v72;
																	// branch -> 0x5a09c
																	while (true) {
																		// 0x5a09c
																		if (v71 == 0) {
																			goto lab_0x5a070_4;
																		}
																		// 0x5a0cc
																		v73 = 21;
																		v74 = v71;
																		// branch -> 0x5a0d4
																		while (true) {
																			// 0x5a0d4
																			if (v74 == 0) {
																				goto lab_0x5a0ac_4;
																			}
																			// 0x5a104
																			v75 = 1;
																			v76 = v74;
																			// branch -> 0x5a10c
																			while (true) {
																				// 0x5a10c
																				if (v76 == 0) {
																					goto lab_0x5a0e4_4;
																				}
																				// 0x5a13c
																				v77 = 10;
																				// branch -> 0x5a144
																				while (true) {
																					// 0x5a144
																					if (v76 == 0) {
																						goto lab_0x5a11c_4;
																					}
																					// 0x5a14c
																					// branch -> 0x5a14c
																				}
																			}
																		}
																	}
																} else {
																	v81 = v72;
																	v78 = 2;
																}
															}
															// 0x5a14c
															v32 = v81;
															if (v78 == 2) {
																// 0x5a154
																if (g33 == 3) {
																	// 0x5a184
																	v79 = 0;
																	v80 = v81;
																	// branch -> 0x5a18c
																	while (true) {
																		// 0x5a18c
																		if (v80 == 0) {
																			goto lab_0x5a164_4;
																		}
																		// 0x5a1bc
																		v82 = 10;
																		v83 = v80;
																		// branch -> 0x5a1c4
																		while (true) {
																			// 0x5a1c4
																			if (v83 == 0) {
																				goto lab_0x5a19c_4;
																			}
																			// 0x5a1cc
																			v31 = g23;
																			if (v83 == 0) {
																				// 0x5a230
																				if (g35 == *(int32_t *)*(int32_t *)(v31 - 0x77ac)) {
																					// 0x5a240
																					v39 = *(char *)(g21 + g20 + 348);
																					if (v39 == 0) {
																						// 0x5a250
																						g37 = 3;
																						v34 = random(0) + 727;
																						g34 = v34;
																						PlaySFX(v34);
																						// branch -> 0x5a2a8
																					} else {
																						// 0x5a268
																						if (v39 == 1) {
																							// 0x5a274
																							g37 = 3;
																							v35 = random(0) + 624;
																							g34 = v35;
																							PlaySFX(v35);
																							// branch -> 0x5a2a8
																						} else {
																							// 0x5a28c
																							if (v39 == 2) {
																								// 0x5a294
																								g37 = 3;
																								v36 = random(0) + 521;
																								g34 = v36;
																								PlaySFX(v36);
																								// branch -> 0x5a2a8
																							}
																						}
																						// 0x5a2a8
																						v87 = g18 - 8;
																						v84 = g19 - 8;
																						// branch -> 0x5a2b8
																						while (true) {
																							// 0x5a2b8
																							v86 = v84 + 8;
																							v92 = v87 + 8;
																							*(int32_t *)v92 = *(int32_t *)v86;
																							v43 = v92;
																							*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																							v88 = 45;
																							v15 = v88;
																							if (v88 != 0) {
																								goto lab_0x5a2b8_24;
																							}
																							// 0x5a2cc
																							function_60abc(g26, 1, v43);
																							v93 = g17 + g16;
																							v94 = *(int32_t *)(v93 + 16);
																							function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																							g34 = v25;
																							*v26 = -1;
																							// branch -> 0x5a304
																							// 0x5a304
																							g10 = v1;
																							return g34;
																						}
																					}
																					// 0x5a2a8
																					v87 = g18 - 8;
																					v84 = g19 - 8;
																					// branch -> 0x5a2b8
																					while (true) {
																						// 0x5a2b8
																						v86 = v84 + 8;
																						v92 = v87 + 8;
																						*(int32_t *)v92 = *(int32_t *)v86;
																						v43 = v92;
																						*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																						v88 = 45;
																						v15 = v88;
																						if (v88 != 0) {
																							goto lab_0x5a2b8_24;
																						}
																						// 0x5a2cc
																						function_60abc(g26, 1, v43);
																						v93 = g17 + g16;
																						v94 = *(int32_t *)(v93 + 16);
																						function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																						g34 = v25;
																						*v26 = -1;
																						// branch -> 0x5a304
																						// 0x5a304
																						g10 = v1;
																						return g34;
																					}
																				}
																				// 0x5a2a8
																				v87 = g18 - 8;
																				v84 = g19 - 8;
																				// branch -> 0x5a2b8
																				while (true) {
																					// 0x5a2b8
																					v86 = v84 + 8;
																					v92 = v87 + 8;
																					*(int32_t *)v92 = *(int32_t *)v86;
																					v43 = v92;
																					*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																					v88 = 45;
																					v15 = v88;
																					if (v88 != 0) {
																						goto lab_0x5a2b8_24;
																					}
																					// 0x5a2cc
																					function_60abc(g26, 1, v43);
																					v93 = g17 + g16;
																					v94 = *(int32_t *)(v93 + 16);
																					function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																					g34 = v25;
																					*v26 = -1;
																					// branch -> 0x5a304
																					// 0x5a304
																					g10 = v1;
																					return g34;
																				}
																			} else {
																				// 0x5a1d4
																				v37 = g17 + g16;
																				g37 = 0;
																				v33 = 112 * *(int32_t *)(v37 + 12);
																				g34 = v33;
																				v38 = v33 + *(int32_t *)(v37 + 16);
																				*(char *)(v38 + *(int32_t *)*(int32_t *)(v31 - 0x768c)) = 0;
																				v28 = g24;
																				v30 = g37;
																				if (v30 < *(int32_t *)v28) {
																					v29 = v28;
																					v27 = v30;
																					while (true) {
																						// 0x5a200
																						v40 = *(int32_t *)(g22 + 4 * v27);
																						g34 = v40;
																						if (v40 == g26) {
																							goto lab_0x5a210_9;
																						}
																						goto lab_0x5a21c_9;
																					}
																				}
																			}
																			// 0x5a304
																			g10 = v1;
																			return g34;
																		}
																	}
																}
															}
															// 0x5a1cc
															v31 = g23;
															if (v81 == 0) {
																// 0x5a230
																if (g35 == *(int32_t *)*(int32_t *)(v31 - 0x77ac)) {
																	// 0x5a240
																	v39 = *(char *)(g21 + g20 + 348);
																	if (v39 == 0) {
																		// 0x5a250
																		g37 = 3;
																		v34 = random(0) + 727;
																		g34 = v34;
																		PlaySFX(v34);
																		// branch -> 0x5a2a8
																	} else {
																		// 0x5a268
																		if (v39 == 1) {
																			// 0x5a274
																			g37 = 3;
																			v35 = random(0) + 624;
																			g34 = v35;
																			PlaySFX(v35);
																			// branch -> 0x5a2a8
																		} else {
																			// 0x5a28c
																			if (v39 == 2) {
																				// 0x5a294
																				g37 = 3;
																				v36 = random(0) + 521;
																				g34 = v36;
																				PlaySFX(v36);
																				// branch -> 0x5a2a8
																			}
																		}
																		// 0x5a2a8
																		v87 = g18 - 8;
																		v84 = g19 - 8;
																		// branch -> 0x5a2b8
																		while (true) {
																			// 0x5a2b8
																			v86 = v84 + 8;
																			v92 = v87 + 8;
																			*(int32_t *)v92 = *(int32_t *)v86;
																			v43 = v92;
																			*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																			v88 = 45;
																			v15 = v88;
																			if (v88 != 0) {
																				goto lab_0x5a2b8_24;
																			}
																			// 0x5a2cc
																			function_60abc(g26, 1, v43);
																			v93 = g17 + g16;
																			v94 = *(int32_t *)(v93 + 16);
																			function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																			g34 = v25;
																			*v26 = -1;
																			// branch -> 0x5a304
																			// 0x5a304
																			g10 = v1;
																			return g34;
																		}
																	}
																	// 0x5a2a8
																	v87 = g18 - 8;
																	v84 = g19 - 8;
																	// branch -> 0x5a2b8
																	while (true) {
																		// 0x5a2b8
																		v86 = v84 + 8;
																		v92 = v87 + 8;
																		*(int32_t *)v92 = *(int32_t *)v86;
																		v43 = v92;
																		*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																		v88 = 45;
																		v15 = v88;
																		if (v88 != 0) {
																			goto lab_0x5a2b8_24;
																		}
																		// 0x5a2cc
																		function_60abc(g26, 1, v43);
																		v93 = g17 + g16;
																		v94 = *(int32_t *)(v93 + 16);
																		function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																		g34 = v25;
																		*v26 = -1;
																		// branch -> 0x5a304
																		// 0x5a304
																		g10 = v1;
																		return g34;
																	}
																}
																// 0x5a2a8
																v87 = g18 - 8;
																v84 = g19 - 8;
																// branch -> 0x5a2b8
																while (true) {
																	// 0x5a2b8
																	v86 = v84 + 8;
																	v92 = v87 + 8;
																	*(int32_t *)v92 = *(int32_t *)v86;
																	v43 = v92;
																	*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																	v88 = 45;
																	v15 = v88;
																	if (v88 != 0) {
																		goto lab_0x5a2b8_24;
																	}
																	// 0x5a2cc
																	function_60abc(g26, 1, v43);
																	v93 = g17 + g16;
																	v94 = *(int32_t *)(v93 + 16);
																	function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																	g34 = v25;
																	*v26 = -1;
																	// branch -> 0x5a304
																	// 0x5a304
																	g10 = v1;
																	return g34;
																}
															} else {
																// 0x5a1d4
																v37 = g17 + g16;
																g37 = 0;
																v33 = 112 * *(int32_t *)(v37 + 12);
																g34 = v33;
																v38 = v33 + *(int32_t *)(v37 + 16);
																*(char *)(v38 + *(int32_t *)*(int32_t *)(v31 - 0x768c)) = 0;
																v28 = g24;
																v30 = g37;
																if (v30 < *(int32_t *)v28) {
																	v29 = v28;
																	v27 = v30;
																	while (true) {
																		// 0x5a200
																		v40 = *(int32_t *)(g22 + 4 * v27);
																		g34 = v40;
																		if (v40 == g26) {
																			goto lab_0x5a210_9;
																		}
																		goto lab_0x5a21c_9;
																	}
																}
															}
															// 0x5a304
															g10 = v1;
															return g34;
														}
													}
												}
											}
										}
									}
									// 0x59e94
									v49 = 30;
									v50 = 0;
									// branch -> 0x59e9c
									while (true) {
										// 0x59e9c
										if (v50 == 0) {
											goto lab_0x59e74_4;
										}
										// 0x59ecc
										v53 = 20;
										v54 = v50;
										// branch -> 0x59ed4
										while (true) {
											// 0x59ed4
											if (v54 == 0) {
												goto lab_0x59eac_4;
											}
											// 0x59f04
											v55 = 10;
											v56 = v54;
											// branch -> 0x59f0c
											while (true) {
												// 0x59f0c
												if (v56 == 0) {
													goto lab_0x59ee4_4;
												}
												// 0x59f3c
												v57 = 0;
												// branch -> 0x59f44
												while (true) {
													// 0x59f44
													if (v56 == 0) {
														goto lab_0x59f1c_4;
													}
													// 0x59f4c
													// branch -> 0x59f4c
												}
											}
										}
									}
								} else {
									v62 = 0;
									v59 = 1;
								}
							}
							// 0x59f4c
							v68 = v62;
							v66 = v59;
							if (v59 == 1) {
								// 0x59f54
								if (g33 == 2) {
									// 0x59f84
									v60 = 29;
									v61 = v62;
									// branch -> 0x59f8c
									while (true) {
										// 0x59f8c
										if (v61 == 0) {
											goto lab_0x59f64_4;
										}
										// 0x59fbc
										v63 = 9;
										v64 = v61;
										// branch -> 0x59fc4
										while (true) {
											// 0x59fc4
											if (v64 == 0) {
												goto lab_0x59f9c_4;
											}
											// 0x59ff4
											v65 = 19;
											// branch -> 0x59ffc
											while (true) {
												// 0x59ffc
												if (v64 == 0) {
													goto lab_0x59fd4_4;
												}
												// 0x5a004
												// branch -> 0x5a004
											}
										}
									}
								} else {
									v68 = v62;
									v66 = 1;
								}
							}
							// 0x5a004
							v72 = v68;
							v69 = v66;
							if (v66 == 1) {
								// 0x5a00c
								if (g33 == 3) {
									// 0x5a03c
									v67 = 0;
									// branch -> 0x5a044
									while (true) {
										// 0x5a044
										if (v68 == 0) {
											goto lab_0x5a01c_4;
										}
										// 0x5a04c
										// branch -> 0x5a04c
									}
								} else {
									v72 = v68;
									v69 = 1;
								}
							}
							// 0x5a04c
							v81 = v72;
							v78 = v69;
							if (v69 == 2) {
								// 0x5a054
								if (g33 == 2) {
									// 0x5a05c
									v85 = g23 + 0x35c4;
									g30 = v85;
									v70 = v85;
									v71 = v72;
									// branch -> 0x5a09c
									while (true) {
										// 0x5a09c
										if (v71 == 0) {
											goto lab_0x5a070_4;
										}
										// 0x5a0cc
										v73 = 21;
										v74 = v71;
										// branch -> 0x5a0d4
										while (true) {
											// 0x5a0d4
											if (v74 == 0) {
												goto lab_0x5a0ac_4;
											}
											// 0x5a104
											v75 = 1;
											v76 = v74;
											// branch -> 0x5a10c
											while (true) {
												// 0x5a10c
												if (v76 == 0) {
													goto lab_0x5a0e4_4;
												}
												// 0x5a13c
												v77 = 10;
												// branch -> 0x5a144
												while (true) {
													// 0x5a144
													if (v76 == 0) {
														goto lab_0x5a11c_4;
													}
													// 0x5a14c
													// branch -> 0x5a14c
												}
											}
										}
									}
								} else {
									v81 = v72;
									v78 = 2;
								}
							}
							// 0x5a14c
							if (v78 == 2) {
								// 0x5a154
								if (g33 == 3) {
									// 0x5a184
									v79 = 0;
									v80 = v81;
									// branch -> 0x5a18c
									while (true) {
										// 0x5a18c
										if (v80 == 0) {
											goto lab_0x5a164_4;
										}
										// 0x5a1bc
										v82 = 10;
										v83 = v80;
										// branch -> 0x5a1c4
										while (true) {
											// 0x5a1c4
											if (v83 == 0) {
												goto lab_0x5a19c_4;
											}
											// 0x5a1cc
											v31 = g23;
											if (v83 == 0) {
												// 0x5a230
												if (g35 == *(int32_t *)*(int32_t *)(v31 - 0x77ac)) {
													// 0x5a240
													v39 = *(char *)(g21 + g20 + 348);
													if (v39 == 0) {
														// 0x5a250
														g37 = 3;
														v34 = random(0) + 727;
														g34 = v34;
														PlaySFX(v34);
														// branch -> 0x5a2a8
													} else {
														// 0x5a268
														if (v39 == 1) {
															// 0x5a274
															g37 = 3;
															v35 = random(0) + 624;
															g34 = v35;
															PlaySFX(v35);
															// branch -> 0x5a2a8
														} else {
															// 0x5a28c
															if (v39 == 2) {
																// 0x5a294
																g37 = 3;
																v36 = random(0) + 521;
																g34 = v36;
																PlaySFX(v36);
																// branch -> 0x5a2a8
															}
														}
														// 0x5a2a8
														v87 = g18 - 8;
														v84 = g19 - 8;
														// branch -> 0x5a2b8
														while (true) {
															// 0x5a2b8
															v86 = v84 + 8;
															v92 = v87 + 8;
															*(int32_t *)v92 = *(int32_t *)v86;
															v43 = v92;
															*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
															v88 = 45;
															v15 = v88;
															if (v88 != 0) {
																goto lab_0x5a2b8_24;
															}
															// 0x5a2cc
															function_60abc(g26, 1, v43);
															v93 = g17 + g16;
															v94 = *(int32_t *)(v93 + 16);
															function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
															g34 = v25;
															*v26 = -1;
															// branch -> 0x5a304
															// 0x5a304
															g10 = v1;
															return g34;
														}
													}
													// 0x5a2a8
													v87 = g18 - 8;
													v84 = g19 - 8;
													// branch -> 0x5a2b8
													while (true) {
														// 0x5a2b8
														v86 = v84 + 8;
														v92 = v87 + 8;
														*(int32_t *)v92 = *(int32_t *)v86;
														v43 = v92;
														*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
														v88 = 45;
														v15 = v88;
														if (v88 != 0) {
															goto lab_0x5a2b8_24;
														}
														// 0x5a2cc
														function_60abc(g26, 1, v43);
														v93 = g17 + g16;
														v94 = *(int32_t *)(v93 + 16);
														function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
														g34 = v25;
														*v26 = -1;
														// branch -> 0x5a304
														// 0x5a304
														g10 = v1;
														return g34;
													}
												}
												// 0x5a2a8
												v87 = g18 - 8;
												v84 = g19 - 8;
												// branch -> 0x5a2b8
												while (true) {
													// 0x5a2b8
													v86 = v84 + 8;
													v92 = v87 + 8;
													*(int32_t *)v92 = *(int32_t *)v86;
													v43 = v92;
													*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
													v88 = 45;
													v15 = v88;
													if (v88 != 0) {
														goto lab_0x5a2b8_24;
													}
													// 0x5a2cc
													function_60abc(g26, 1, v43);
													v93 = g17 + g16;
													v94 = *(int32_t *)(v93 + 16);
													function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
													g34 = v25;
													*v26 = -1;
													// branch -> 0x5a304
													// 0x5a304
													g10 = v1;
													return g34;
												}
											} else {
												// 0x5a1d4
												v37 = g17 + g16;
												g37 = 0;
												v33 = 112 * *(int32_t *)(v37 + 12);
												g34 = v33;
												v38 = v33 + *(int32_t *)(v37 + 16);
												*(char *)(v38 + *(int32_t *)*(int32_t *)(v31 - 0x768c)) = 0;
												v28 = g24;
												v30 = g37;
												if (v30 < *(int32_t *)v28) {
													v29 = v28;
													v27 = v30;
													while (true) {
														// 0x5a200
														v40 = *(int32_t *)(g22 + 4 * v27);
														g34 = v40;
														if (v40 == g26) {
															goto lab_0x5a210_9;
														}
														goto lab_0x5a21c_9;
													}
												}
											}
											// 0x5a304
											g10 = v1;
											return g34;
										}
									}
								} else {
									v32 = v81;
								}
							} else {
								v32 = v81;
							}
						}
						// 0x5a1cc
						v31 = g23;
						if (v32 == 0) {
							// 0x5a230
							if (g35 == *(int32_t *)*(int32_t *)(v31 - 0x77ac)) {
								// 0x5a240
								v39 = *(char *)(g21 + g20 + 348);
								if (v39 == 0) {
									// 0x5a250
									g37 = 3;
									v34 = random(0) + 727;
									g34 = v34;
									PlaySFX(v34);
									// branch -> 0x5a2a8
								} else {
									// 0x5a268
									if (v39 == 1) {
										// 0x5a274
										g37 = 3;
										v35 = random(0) + 624;
										g34 = v35;
										PlaySFX(v35);
										// branch -> 0x5a2a8
									} else {
										// 0x5a28c
										if (v39 == 2) {
											// 0x5a294
											g37 = 3;
											v36 = random(0) + 521;
											g34 = v36;
											PlaySFX(v36);
											// branch -> 0x5a2a8
										}
									}
									// 0x5a2a8
									v87 = g18 - 8;
									v84 = g19 - 8;
									// branch -> 0x5a2b8
									while (true) {
										// 0x5a2b8
										v86 = v84 + 8;
										v92 = v87 + 8;
										*(int32_t *)v92 = *(int32_t *)v86;
										v43 = v92;
										*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
										v88 = 45;
										v15 = v88;
										if (v88 != 0) {
											goto lab_0x5a2b8_24;
										}
										// 0x5a2cc
										function_60abc(g26, 1, v43);
										v93 = g17 + g16;
										v94 = *(int32_t *)(v93 + 16);
										function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
										g34 = v25;
										*v26 = -1;
										// branch -> 0x5a304
										// 0x5a304
										g10 = v1;
										return g34;
									}
								}
								// 0x5a2a8
								v87 = g18 - 8;
								v84 = g19 - 8;
								// branch -> 0x5a2b8
								while (true) {
									// 0x5a2b8
									v86 = v84 + 8;
									v92 = v87 + 8;
									*(int32_t *)v92 = *(int32_t *)v86;
									v43 = v92;
									*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
									v88 = 45;
									v15 = v88;
									if (v88 != 0) {
										goto lab_0x5a2b8_24;
									}
									// 0x5a2cc
									function_60abc(g26, 1, v43);
									v93 = g17 + g16;
									v94 = *(int32_t *)(v93 + 16);
									function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
									g34 = v25;
									*v26 = -1;
									// branch -> 0x5a304
									// 0x5a304
									g10 = v1;
									return g34;
								}
							}
							// 0x5a2a8
							v87 = g18 - 8;
							v84 = g19 - 8;
							// branch -> 0x5a2b8
							while (true) {
								// 0x5a2b8
								v86 = v84 + 8;
								v92 = v87 + 8;
								*(int32_t *)v92 = *(int32_t *)v86;
								v43 = v92;
								*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
								v88 = 45;
								v15 = v88;
								if (v88 != 0) {
									goto lab_0x5a2b8_24;
								}
								// 0x5a2cc
								function_60abc(g26, 1, v43);
								v93 = g17 + g16;
								v94 = *(int32_t *)(v93 + 16);
								function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
								g34 = v25;
								*v26 = -1;
								// branch -> 0x5a304
								// 0x5a304
								g10 = v1;
								return g34;
							}
						} else {
							// 0x5a1d4
							v37 = g17 + g16;
							g37 = 0;
							v33 = 112 * *(int32_t *)(v37 + 12);
							g34 = v33;
							v38 = v33 + *(int32_t *)(v37 + 16);
							*(char *)(v38 + *(int32_t *)*(int32_t *)(v31 - 0x768c)) = 0;
							v28 = g24;
							v30 = g37;
							if (v30 < *(int32_t *)v28) {
								v29 = v28;
								v27 = v30;
								while (true) {
									// 0x5a200
									v40 = *(int32_t *)(g22 + 4 * v27);
									g34 = v40;
									if (v40 == g26) {
										goto lab_0x5a210_9;
									}
									goto lab_0x5a21c_9;
								}
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				int32_t v141 = g21 + g20; // 0x59d68
				v44 = 0;
				if (*(int32_t *)v141 <= 3) {
					// 0x59d74
					if (*(int32_t *)(v141 + 0x5538) != 0) {
						// 0x59d84
						if (*(char *)(v141 + 0x5492) == 1) {
							int32_t v142 = function_573bc(g35); // 0x59d94
							g36 = v142;
							if (v142 != 0) {
								// 0x59da0
								function_5cfd4(g35, 1);
								v44 = g36;
								// branch -> 0x59dac
							} else {
								v44 = 0;
							}
						} else {
							v44 = 0;
						}
					} else {
						v44 = 0;
					}
				}
				// 0x59dac
				if (v44 == 0) {
					// 0x59db4
					v45 = g23;
					v89 = *(int32_t *)*(int32_t *)(v45 - 0x7648);
					v90 = *(int32_t *)*(int32_t *)(v45 - 0x764c);
					g33 = v90;
					g32 = v89;
					v62 = 0;
					v59 = v89;
					if (v89 == 1) {
						// 0x59dd0
						if (v90 == 1) {
							// 0x59dd8
							v91 = g21 + g20;
							int32_t v143 = *(int32_t *)(v91 + 0x553c); // 0x59de0
							v52 = 0;
							if (*(int32_t *)(v91 + 0x5538) != 0) {
								// 0x59dec
								if (*(int32_t *)(76 * v143 + v45 + 0x3858 + 64) != 0) {
									// 0x59e04
									v42 = 46;
									v23 = 1;
									v51 = 0;
									v47 = 0;
									v46 = v91;
									v48 = 0;
									// branch -> 0x59e64
								lab_0x59e64:
									while (true) {
										// 0x59e64
										if (v48 == 0) {
											goto lab_0x59e18;
										}
										// 0x59e94
										v49 = 30;
										v50 = v51;
										// branch -> 0x59e9c
										while (true) {
											// 0x59e9c
											if (v50 == 0) {
												goto lab_0x59e74_4;
											}
											// 0x59ecc
											v53 = 20;
											v54 = v50;
											// branch -> 0x59ed4
											while (true) {
												// 0x59ed4
												if (v54 == 0) {
													goto lab_0x59eac_4;
												}
												// 0x59f04
												v55 = 10;
												v56 = v54;
												// branch -> 0x59f0c
												while (true) {
													// 0x59f0c
													if (v56 == 0) {
														goto lab_0x59ee4_4;
													}
													// 0x59f3c
													v57 = 0;
													v58 = v56;
													// branch -> 0x59f44
													while (true) {
														// 0x59f44
														if (v58 == 0) {
															goto lab_0x59f1c_4;
														}
														// 0x59f4c
														v62 = v58;
														v59 = g32;
														// branch -> 0x59f4c
														// 0x59f4c
														v68 = v62;
														v66 = v59;
														if (v59 == 1) {
															// 0x59f54
															if (g33 == 2) {
																// 0x59f84
																v60 = 29;
																v61 = v62;
																// branch -> 0x59f8c
																while (true) {
																	// 0x59f8c
																	if (v61 == 0) {
																		goto lab_0x59f64_4;
																	}
																	// 0x59fbc
																	v63 = 9;
																	v64 = v61;
																	// branch -> 0x59fc4
																	while (true) {
																		// 0x59fc4
																		if (v64 == 0) {
																			goto lab_0x59f9c_4;
																		}
																		// 0x59ff4
																		v65 = 19;
																		// branch -> 0x59ffc
																		while (true) {
																			// 0x59ffc
																			if (v64 == 0) {
																				goto lab_0x59fd4_4;
																			}
																			// 0x5a004
																			// branch -> 0x5a004
																		}
																	}
																}
															} else {
																v68 = v62;
																v66 = 1;
															}
														}
														// 0x5a004
														v72 = v68;
														v69 = v66;
														if (v66 == 1) {
															// 0x5a00c
															if (g33 == 3) {
																// 0x5a03c
																v67 = 0;
																// branch -> 0x5a044
																while (true) {
																	// 0x5a044
																	if (v68 == 0) {
																		goto lab_0x5a01c_4;
																	}
																	// 0x5a04c
																	// branch -> 0x5a04c
																}
															} else {
																v72 = v68;
																v69 = 1;
															}
														}
														// 0x5a04c
														v81 = v72;
														v78 = v69;
														if (v69 == 2) {
															// 0x5a054
															if (g33 == 2) {
																// 0x5a05c
																v85 = g23 + 0x35c4;
																g30 = v85;
																v70 = v85;
																v71 = v72;
																// branch -> 0x5a09c
																while (true) {
																	// 0x5a09c
																	if (v71 == 0) {
																		goto lab_0x5a070_4;
																	}
																	// 0x5a0cc
																	v73 = 21;
																	v74 = v71;
																	// branch -> 0x5a0d4
																	while (true) {
																		// 0x5a0d4
																		if (v74 == 0) {
																			goto lab_0x5a0ac_4;
																		}
																		// 0x5a104
																		v75 = 1;
																		v76 = v74;
																		// branch -> 0x5a10c
																		while (true) {
																			// 0x5a10c
																			if (v76 == 0) {
																				goto lab_0x5a0e4_4;
																			}
																			// 0x5a13c
																			v77 = 10;
																			// branch -> 0x5a144
																			while (true) {
																				// 0x5a144
																				if (v76 == 0) {
																					goto lab_0x5a11c_4;
																				}
																				// 0x5a14c
																				// branch -> 0x5a14c
																			}
																		}
																	}
																}
															} else {
																v81 = v72;
																v78 = 2;
															}
														}
														// 0x5a14c
														v32 = v81;
														if (v78 == 2) {
															// 0x5a154
															if (g33 == 3) {
																// 0x5a184
																v79 = 0;
																v80 = v81;
																// branch -> 0x5a18c
																while (true) {
																	// 0x5a18c
																	if (v80 == 0) {
																		goto lab_0x5a164_4;
																	}
																	// 0x5a1bc
																	v82 = 10;
																	v83 = v80;
																	// branch -> 0x5a1c4
																	while (true) {
																		// 0x5a1c4
																		if (v83 == 0) {
																			goto lab_0x5a19c_4;
																		}
																		// 0x5a1cc
																		v31 = g23;
																		if (v83 == 0) {
																			// 0x5a230
																			if (g35 == *(int32_t *)*(int32_t *)(v31 - 0x77ac)) {
																				// 0x5a240
																				v39 = *(char *)(g21 + g20 + 348);
																				if (v39 == 0) {
																					// 0x5a250
																					g37 = 3;
																					v34 = random(0) + 727;
																					g34 = v34;
																					PlaySFX(v34);
																					// branch -> 0x5a2a8
																				} else {
																					// 0x5a268
																					if (v39 == 1) {
																						// 0x5a274
																						g37 = 3;
																						v35 = random(0) + 624;
																						g34 = v35;
																						PlaySFX(v35);
																						// branch -> 0x5a2a8
																					} else {
																						// 0x5a28c
																						if (v39 == 2) {
																							// 0x5a294
																							g37 = 3;
																							v36 = random(0) + 521;
																							g34 = v36;
																							PlaySFX(v36);
																							// branch -> 0x5a2a8
																						}
																					}
																					// 0x5a2a8
																					v15 = 46;
																					v87 = g18 - 8;
																					v84 = g19 - 8;
																					// branch -> 0x5a2b8
																					while (true) {
																						// 0x5a2b8
																						v86 = v84 + 8;
																						v92 = v87 + 8;
																						*(int32_t *)v92 = *(int32_t *)v86;
																						v43 = v92;
																						*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																						v88 = v15 - 1;
																						v15 = v88;
																						if (v88 != 0) {
																							goto lab_0x5a2b8_24;
																						}
																						// 0x5a2cc
																						function_60abc(g26, 1, v43);
																						v93 = g17 + g16;
																						v94 = *(int32_t *)(v93 + 16);
																						function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																						g34 = v25;
																						*v26 = -1;
																						// branch -> 0x5a304
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					}
																				}
																				// 0x5a2a8
																				v15 = 46;
																				v87 = g18 - 8;
																				v84 = g19 - 8;
																				// branch -> 0x5a2b8
																				while (true) {
																					// 0x5a2b8
																					v86 = v84 + 8;
																					v92 = v87 + 8;
																					*(int32_t *)v92 = *(int32_t *)v86;
																					v43 = v92;
																					*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																					v88 = v15 - 1;
																					v15 = v88;
																					if (v88 != 0) {
																						goto lab_0x5a2b8_24;
																					}
																					// 0x5a2cc
																					function_60abc(g26, 1, v43);
																					v93 = g17 + g16;
																					v94 = *(int32_t *)(v93 + 16);
																					function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																					g34 = v25;
																					*v26 = -1;
																					// branch -> 0x5a304
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				}
																			}
																			// 0x5a2a8
																			v15 = 46;
																			v87 = g18 - 8;
																			v84 = g19 - 8;
																			// branch -> 0x5a2b8
																			while (true) {
																				// 0x5a2b8
																				v86 = v84 + 8;
																				v92 = v87 + 8;
																				*(int32_t *)v92 = *(int32_t *)v86;
																				v43 = v92;
																				*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																				v88 = v15 - 1;
																				v15 = v88;
																				if (v88 != 0) {
																					goto lab_0x5a2b8_24;
																				}
																				// 0x5a2cc
																				function_60abc(g26, 1, v43);
																				v93 = g17 + g16;
																				v94 = *(int32_t *)(v93 + 16);
																				function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																				g34 = v25;
																				*v26 = -1;
																				// branch -> 0x5a304
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			}
																		} else {
																			// 0x5a1d4
																			v37 = g17 + g16;
																			g37 = 0;
																			v33 = 112 * *(int32_t *)(v37 + 12);
																			g34 = v33;
																			v38 = v33 + *(int32_t *)(v37 + 16);
																			*(char *)(v38 + *(int32_t *)*(int32_t *)(v31 - 0x768c)) = 0;
																			v28 = g24;
																			v30 = g37;
																			if (v30 < *(int32_t *)v28) {
																				v29 = v28;
																				v27 = v30;
																				while (true) {
																					// 0x5a200
																					v40 = *(int32_t *)(g22 + 4 * v27);
																					g34 = v40;
																					if (v40 == g26) {
																						goto lab_0x5a210_9;
																					}
																					goto lab_0x5a21c_9;
																				}
																			}
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																}
															}
														}
														// 0x5a1cc
														v31 = g23;
														if (v81 == 0) {
															// 0x5a230
															if (g35 == *(int32_t *)*(int32_t *)(v31 - 0x77ac)) {
																// 0x5a240
																v39 = *(char *)(g21 + g20 + 348);
																if (v39 == 0) {
																	// 0x5a250
																	g37 = 3;
																	v34 = random(0) + 727;
																	g34 = v34;
																	PlaySFX(v34);
																	// branch -> 0x5a2a8
																} else {
																	// 0x5a268
																	if (v39 == 1) {
																		// 0x5a274
																		g37 = 3;
																		v35 = random(0) + 624;
																		g34 = v35;
																		PlaySFX(v35);
																		// branch -> 0x5a2a8
																	} else {
																		// 0x5a28c
																		if (v39 == 2) {
																			// 0x5a294
																			g37 = 3;
																			v36 = random(0) + 521;
																			g34 = v36;
																			PlaySFX(v36);
																			// branch -> 0x5a2a8
																		}
																	}
																	// 0x5a2a8
																	v15 = 46;
																	v87 = g18 - 8;
																	v84 = g19 - 8;
																	// branch -> 0x5a2b8
																	while (true) {
																		// 0x5a2b8
																		v86 = v84 + 8;
																		v92 = v87 + 8;
																		*(int32_t *)v92 = *(int32_t *)v86;
																		v43 = v92;
																		*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																		v88 = v15 - 1;
																		v15 = v88;
																		if (v88 != 0) {
																			goto lab_0x5a2b8_24;
																		}
																		// 0x5a2cc
																		function_60abc(g26, 1, v43);
																		v93 = g17 + g16;
																		v94 = *(int32_t *)(v93 + 16);
																		function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																		g34 = v25;
																		*v26 = -1;
																		// branch -> 0x5a304
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																}
																// 0x5a2a8
																v15 = 46;
																v87 = g18 - 8;
																v84 = g19 - 8;
																// branch -> 0x5a2b8
																while (true) {
																	// 0x5a2b8
																	v86 = v84 + 8;
																	v92 = v87 + 8;
																	*(int32_t *)v92 = *(int32_t *)v86;
																	v43 = v92;
																	*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																	v88 = v15 - 1;
																	v15 = v88;
																	if (v88 != 0) {
																		goto lab_0x5a2b8_24;
																	}
																	// 0x5a2cc
																	function_60abc(g26, 1, v43);
																	v93 = g17 + g16;
																	v94 = *(int32_t *)(v93 + 16);
																	function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																	g34 = v25;
																	*v26 = -1;
																	// branch -> 0x5a304
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
															// 0x5a2a8
															v15 = 46;
															v87 = g18 - 8;
															v84 = g19 - 8;
															// branch -> 0x5a2b8
															while (true) {
																// 0x5a2b8
																v86 = v84 + 8;
																v92 = v87 + 8;
																*(int32_t *)v92 = *(int32_t *)v86;
																v43 = v92;
																*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
																v88 = v15 - 1;
																v15 = v88;
																if (v88 != 0) {
																	goto lab_0x5a2b8_24;
																}
																// 0x5a2cc
																function_60abc(g26, 1, v43);
																v93 = g17 + g16;
																v94 = *(int32_t *)(v93 + 16);
																function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
																g34 = v25;
																*v26 = -1;
																// branch -> 0x5a304
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														} else {
															// 0x5a1d4
															v37 = g17 + g16;
															g37 = 0;
															v33 = 112 * *(int32_t *)(v37 + 12);
															g34 = v33;
															v38 = v33 + *(int32_t *)(v37 + 16);
															*(char *)(v38 + *(int32_t *)*(int32_t *)(v31 - 0x768c)) = 0;
															v28 = g24;
															v30 = g37;
															if (v30 < *(int32_t *)v28) {
																v29 = v28;
																v27 = v30;
																while (true) {
																	// 0x5a200
																	v40 = *(int32_t *)(g22 + 4 * v27);
																	g34 = v40;
																	if (v40 == g26) {
																		goto lab_0x5a210_9;
																	}
																	goto lab_0x5a21c_9;
																}
															}
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											}
										}
									}
								} else {
									v52 = 0;
								}
							}
						lab_0x59e94:
							// 0x59e94
							v49 = 30;
							v50 = v52;
							// branch -> 0x59e9c
							while (true) {
								// 0x59e9c
								if (v50 == 0) {
									goto lab_0x59e74_4;
								}
								// 0x59ecc
								v53 = 20;
								v54 = v50;
								// branch -> 0x59ed4
								while (true) {
									// 0x59ed4
									if (v54 == 0) {
										goto lab_0x59eac_4;
									}
									// 0x59f04
									v55 = 10;
									v56 = v54;
									// branch -> 0x59f0c
									while (true) {
										// 0x59f0c
										if (v56 == 0) {
											goto lab_0x59ee4_4;
										}
										// 0x59f3c
										v57 = 0;
										// branch -> 0x59f44
										while (true) {
											// 0x59f44
											if (v56 == 0) {
												goto lab_0x59f1c_4;
											}
											// 0x59f4c
											// branch -> 0x59f4c
										}
									}
								}
							}
						} else {
							v62 = 0;
							v59 = 1;
						}
					}
					// 0x59f4c
					v68 = v62;
					v66 = v59;
					if (v59 == 1) {
						// 0x59f54
						if (g33 == 2) {
							// 0x59f84
							v60 = 29;
							v61 = v62;
							// branch -> 0x59f8c
							while (true) {
								// 0x59f8c
								if (v61 == 0) {
									goto lab_0x59f64_4;
								}
								// 0x59fbc
								v63 = 9;
								v64 = v61;
								// branch -> 0x59fc4
								while (true) {
									// 0x59fc4
									if (v64 == 0) {
										goto lab_0x59f9c_4;
									}
									// 0x59ff4
									v65 = 19;
									// branch -> 0x59ffc
									while (true) {
										// 0x59ffc
										if (v64 == 0) {
											goto lab_0x59fd4_4;
										}
										// 0x5a004
										// branch -> 0x5a004
									}
								}
							}
						} else {
							v68 = v62;
							v66 = 1;
						}
					}
					// 0x5a004
					v72 = v68;
					v69 = v66;
					if (v66 == 1) {
						// 0x5a00c
						if (g33 == 3) {
							// 0x5a03c
							v67 = 0;
							// branch -> 0x5a044
							while (true) {
								// 0x5a044
								if (v68 == 0) {
									goto lab_0x5a01c_4;
								}
								// 0x5a04c
								// branch -> 0x5a04c
							}
						} else {
							v72 = v68;
							v69 = 1;
						}
					}
					// 0x5a04c
					v81 = v72;
					v78 = v69;
					if (v69 == 2) {
						// 0x5a054
						if (g33 == 2) {
							// 0x5a05c
							v85 = g23 + 0x35c4;
							g30 = v85;
							v70 = v85;
							v71 = v72;
							// branch -> 0x5a09c
							while (true) {
								// 0x5a09c
								if (v71 == 0) {
									goto lab_0x5a070_4;
								}
								// 0x5a0cc
								v73 = 21;
								v74 = v71;
								// branch -> 0x5a0d4
								while (true) {
									// 0x5a0d4
									if (v74 == 0) {
										goto lab_0x5a0ac_4;
									}
									// 0x5a104
									v75 = 1;
									v76 = v74;
									// branch -> 0x5a10c
									while (true) {
										// 0x5a10c
										if (v76 == 0) {
											goto lab_0x5a0e4_4;
										}
										// 0x5a13c
										v77 = 10;
										// branch -> 0x5a144
										while (true) {
											// 0x5a144
											if (v76 == 0) {
												goto lab_0x5a11c_4;
											}
											// 0x5a14c
											// branch -> 0x5a14c
										}
									}
								}
							}
						} else {
							v81 = v72;
							v78 = 2;
						}
					}
					// 0x5a14c
					if (v78 == 2) {
						// 0x5a154
						if (g33 == 3) {
							// 0x5a184
							v79 = 0;
							v80 = v81;
							// branch -> 0x5a18c
							while (true) {
								// 0x5a18c
								if (v80 == 0) {
									goto lab_0x5a164_4;
								}
								// 0x5a1bc
								v82 = 10;
								v83 = v80;
								// branch -> 0x5a1c4
								while (true) {
									// 0x5a1c4
									if (v83 == 0) {
										goto lab_0x5a19c_4;
									}
									// 0x5a1cc
									v31 = g23;
									if (v83 == 0) {
										// 0x5a230
										if (g35 == *(int32_t *)*(int32_t *)(v31 - 0x77ac)) {
											// 0x5a240
											v39 = *(char *)(g21 + g20 + 348);
											if (v39 == 0) {
												// 0x5a250
												g37 = 3;
												v34 = random(0) + 727;
												g34 = v34;
												PlaySFX(v34);
												// branch -> 0x5a2a8
											} else {
												// 0x5a268
												if (v39 == 1) {
													// 0x5a274
													g37 = 3;
													v35 = random(0) + 624;
													g34 = v35;
													PlaySFX(v35);
													// branch -> 0x5a2a8
												} else {
													// 0x5a28c
													if (v39 == 2) {
														// 0x5a294
														g37 = 3;
														v36 = random(0) + 521;
														g34 = v36;
														PlaySFX(v36);
														// branch -> 0x5a2a8
													}
												}
												// 0x5a2a8
												v15 = 46;
												v87 = g18 - 8;
												v84 = g19 - 8;
												// branch -> 0x5a2b8
												while (true) {
													// 0x5a2b8
													v86 = v84 + 8;
													v92 = v87 + 8;
													*(int32_t *)v92 = *(int32_t *)v86;
													v43 = v92;
													*(int32_t *)(v87 + 12) = *(int32_t *)(v84 + 12);
													v88 = v15 - 1;
													v15 = v88;
													if (v88 != 0) {
														goto lab_0x5a2b8_24;
													}
													// 0x5a2cc
													function_60abc(g26, 1, v43);
													v93 = g17 + g16;
													v94 = *(int32_t *)(v93 + 16);
													function_8ba58(1, 11, *(int32_t *)(v93 + 12) % 256, v94 % 256);
													g34 = v25;
													*v26 = -1;
													// branch -> 0x5a304
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x5a1d4
										v37 = g17 + g16;
										g37 = 0;
										v33 = 112 * *(int32_t *)(v37 + 12);
										g34 = v33;
										v38 = v33 + *(int32_t *)(v37 + 16);
										*(char *)(v38 + *(int32_t *)*(int32_t *)(v31 - 0x768c)) = 0;
										v28 = g24;
										v30 = g37;
										if (v30 < *(int32_t *)v28) {
											v29 = v28;
											v27 = v30;
											while (true) {
												// 0x5a200
												v40 = *(int32_t *)(g22 + 4 * v27);
												g34 = v40;
												if (v40 == g26) {
													goto lab_0x5a210_9;
												}
												goto lab_0x5a21c_9;
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						} else {
							v32 = v81;
						}
					} else {
						v32 = v81;
					}
				} else {
					v32 = v44;
				}
			}
			// 0x5a1cc
			v31 = g23;
			if (v32 == 0) {
				// 0x5a230
				if (g35 == *(int32_t *)*(int32_t *)(v31 - 0x77ac)) {
					// 0x5a240
					v39 = *(char *)(g21 + g20 + 348);
					if (v39 == 0) {
						// 0x5a250
						g37 = 3;
						v34 = random(0) + 727;
						g34 = v34;
						PlaySFX(v34);
						// branch -> 0x5a2a8
					} else {
						// 0x5a268
						if (v39 == 1) {
							// 0x5a274
							g37 = 3;
							v35 = random(0) + 624;
							g34 = v35;
							PlaySFX(v35);
							// branch -> 0x5a2a8
						} else {
							// 0x5a28c
							if (v39 == 2) {
								// 0x5a294
								g37 = 3;
								v36 = random(0) + 521;
								g34 = v36;
								PlaySFX(v36);
								// branch -> 0x5a2a8
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x5a1d4
				v37 = g17 + g16;
				g37 = 0;
				v33 = 112 * *(int32_t *)(v37 + 12);
				g34 = v33;
				v38 = v33 + *(int32_t *)(v37 + 16);
				*(char *)(v38 + *(int32_t *)*(int32_t *)(v31 - 0x768c)) = 0;
				v28 = g24;
				v30 = g37;
				if (v30 < *(int32_t *)v28) {
					v29 = v28;
					v27 = v30;
					while (true) {
						// 0x5a200
						v40 = *(int32_t *)(g22 + 4 * v27);
						g34 = v40;
						if (v40 == g26) {
							goto lab_0x5a210_9;
						}
						goto lab_0x5a21c_9;
					}
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			// 0x59cec
			v16 = v20;
			// branch -> 0x59cec
			continue;
		}
	}
}

// Address range: 0x5a318 - 0x5a384
int32_t function_5a318(int32_t a1, uint32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7690);             // 0x5a320
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x71e4); // 0x5a324
	if (v2 < 1) {
		// 0x5a37c
		return -1;
	}
	int32_t v3 = *(int32_t *)(g23 - 0x71e0); // 0x5a374
	while (true) {
		int32_t result = *(int32_t *)v3; // 0x5a338
		int32_t v4 = 368 * result;       // 0x5a33c
		if (*(int32_t *)(v4 + 360 + v1) == a1) {
			int32_t v5 = v4 + v1; // 0x5a350
			if (*(int32_t *)v5 == a3) {
				// 0x5a360
				if (a2 % 0x10000 == (int32_t) * (int16_t *)(v5 + 4)) {
					// 0x5a36c
					return result;
				}
			}
		}
		int32_t v6 = v2 - 1; // 0x5a378
		if (v6 == 0) {
			// break -> 0x5a37c
			break;
		}
		v2 = v6;
		v3 += 4;
		// continue -> 0x5a338
	}
	// 0x5a37c
	// branch -> 0x5a37c
	// 0x5a37c
	return -1;
}

// Address range: 0x5a384 - 0x5a4d0
int32_t function_5a384(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = g10;                        // 0x5a388
	int32_t v2 = *(int32_t *)(g23 - 0x768c); // 0x5a38c
	g36 = v2;
	g29 = a3;
	g33 = *(int32_t *)(g23 - 0x71e4);
	g35 = *(int32_t *)(g23 - 0x71e0);
	g30 = a4;
	int32_t v3 = *(int32_t *)(g23 - 0x7690); // 0x5a3a0
	g28 = v3;
	g31 = a5;
	unsigned char v4 = *(char *)(*(int32_t *)v2 + a2 + 112 * a1); // 0x5a3c0
	int32_t v5;                                                   // 0x5a4ac
	int32_t v6;                                                   // 0x5a4b01
	int32_t v7;                                                   // 0x5a4b09
	int32_t v8;                                                   // 0x5a4b44
	int32_t result2;                                              // 0x5a46c
	int32_t v9;                                                   // 0x5a458
	int32_t result4;                                              // 0x5a440
	int32_t v10;                                                  // 0x5a480
	if (v4 == 0) {
		// 0x5a434
		result4 = function_5a318(a3, a4, a5);
		g32 = result4;
		// branch -> 0x5a448
	} else {
		int32_t v11 = (int32_t)v4 - 1; // 0x5a3d0
		int32_t v12 = 368 * v11 + v3;  // 0x5a3d8
		g32 = v11;
		if (a3 == *(int32_t *)(v12 + 360)) {
			// 0x5a3ec
			if (a5 == *(int32_t *)v12) {
				// 0x5a3f8
				if (a4 % 0x10000 == (int32_t) * (int16_t *)(v12 + 4)) {
					int32_t result = function_5a318(a3, a4, a5); // 0x5a42c
					result4 = g32;
					// branch -> 0x5a448
					// 0x5a448
					if (result4 == -1) {
						// 0x5a4bc
						g10 = v1;
						return result;
					}
					// 0x5a450
					v9 = g28 + 368 * result4;
					g37 = 0;
					result2 = 112 * *(int32_t *)(v9 + 12);
					*(char *)(*(int32_t *)(v9 + 16) + result2 + *(int32_t *)g36) = 0;
					v6 = g33;
					v8 = g37;
					if (v8 >= *(int32_t *)v6) {
						// 0x5a450
						// branch -> 0x5a4bc
						// 0x5a4bc
						g10 = v1;
						return result2;
					}
					v7 = v6;
					v5 = v8;
					int32_t result3;
					while (true) {
						// 0x5a47c
						v10 = *(int32_t *)(g35 + 4 * v5);
						g34 = v10;
						int32_t v13;
						int32_t v14; // 0x5a4b0
						if (v10 == g32) {
						lab_0x5a490:
							// 0x5a490
							function_60bd4();
							result3 = function_5a318(g29, g30, g31);
							v14 = g33;
							v13 = 0;
							// branch -> 0x5a4b0
						} else {
						lab_0x5a4ac:
							// 0x5a4ac
							result3 = v10;
							v14 = v7;
							v13 = v5 + 1;
							// branch -> 0x5a4b0
						}
						// 0x5a4b0
						g37 = v13;
						if (v13 >= *(int32_t *)v14) {
							// break -> 0x5a4bc
							break;
						}
						v7 = v14;
						v5 = v13;
						// continue -> 0x5a47c
					}
					// 0x5a4bc
					g10 = v1;
					return result3;
				}
			}
		}
		int32_t v15 = function_5a318(a3, a4, a5); // 0x5a414
		g32 = v15;
		result4 = v15;
		// branch -> 0x5a448
	}
	// 0x5a448
	if (result4 == -1) {
		// 0x5a4bc
		g10 = v1;
		return result4;
	}
	// 0x5a450
	v9 = g28 + 368 * result4;
	g37 = 0;
	result2 = 112 * *(int32_t *)(v9 + 12);
	*(char *)(*(int32_t *)(v9 + 16) + result2 + *(int32_t *)g36) = 0;
	v6 = g33;
	v8 = g37;
	if (v8 < *(int32_t *)v6) {
		v7 = v6;
		v5 = v8;
		while (true) {
			// 0x5a47c
			v10 = *(int32_t *)(g35 + 4 * v5);
			g34 = v10;
			if (v10 == g32) {
				goto lab_0x5a490;
			}
			goto lab_0x5a4ac;
		}
	}
	// 0x5a4bc
	g10 = v1;
	return result2;
}

// Address range: 0x5a4d0 - 0x5a694
int32_t function_5a4d0(int32_t a1, int32_t a2)
{
	int32_t v1 = 112 * a1;                   // 0x5a4d0
	int32_t v2 = *(int32_t *)(g23 - 0x767c); // 0x5a4d8
	int32_t v3 = v1 + a2;                    // 0x5a4e0
	int32_t v4 = *(int32_t *)(g23 - 0x7688); // 0x5a4e8
	if (*(char *)(*(int32_t *)*(int32_t *)(g23 - 0x768c) + v3) != 0) {
		// 0x5a4f4
		return 0;
	}
	int32_t v5 = 224 * a1;                                                  // 0x5a500
	int32_t v6 = 2 * a2;                                                    // 0x5a50c
	int32_t v7 = v6 + v5;                                                   // 0x5a510
	int16_t v8 = *(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x757c) + v7); // 0x5a514
	if (*(char *)((int32_t)v8 + *(int32_t *)(g23 - 0x722c)) != 0) {
		// 0x5a524
		return 0;
	}
	int32_t v9 = *(int32_t *)*(int32_t *)(g23 - 0x7684); // 0x5a530
	char v10 = *(char *)(v9 + v3);                       // 0x5a534
	int32_t v11 = v10;                                   // 0x5a538
	int32_t v12;                                         // 0x5a608
	int32_t *v13;                                        // 0x5a650
	int32_t v14;                                         // 0x5a580
	int32_t v15;                                         // 0x5a588
	unsigned char v16;                                   // 0x5a584
	unsigned char v17;                                   // 0x5a5ec
	unsigned char v18;                                   // 0x5a5f8
	if (v10 != 0) {
		// 0x5a540
		if (*(int32_t *)(v4 - 120 + 120 * (v10 < 0 ? -v11 : v11) + 56) != 0) {
			// 0x5a574
			return 0;
		}
		// 0x5a57c
		v14 = v9 + v1 + a2;
		v16 = *(char *)(v14 + 113);
		v15 = v16;
		if (v16 >= 1) {
			// 0x5a590
			if (*(char *)(v4 - 120 + 120 * v15 + 64) != 0) {
				// 0x5a5ac
				return 0;
			}
		}
		// 0x5a5b4
		if (v16 != 0 && 0x1000000 * (int32_t)v16 <= 0) {
			// 0x5a5bc
			if (*(char *)(120 * (-1 - v15) + v4 + 64) != 0) {
				// 0x5a5dc
				return 0;
			}
		}
		// 0x5a5e4
		v17 = *(char *)(v14 + 112);
		if (v17 >= 1) {
			// 0x5a5f8
			v18 = *(char *)(v14 + 1);
			if (v18 >= 1) {
				// 0x5a604
				v12 = v4 + 64;
				if (*(char *)(120 * (int32_t)v17 - 120 + v12) != 0) {
					// 0x5a620
					if (*(char *)(120 * (int32_t)v18 - 120 + v12) != 0) {
						// 0x5a638
						return 0;
					}
				}
			}
		}
		// 0x5a640
		if (*(char *)*(int32_t *)(g23 - 0x77e4) != 0) {
			// 0x5a664
			// branch -> 0x5a68c
			// 0x5a68c
			return 1;
		}
		// 0x5a650
		v13 = (int32_t *)v2;
		if (*(int16_t *)(*v13 + v7) == 0) {
			// 0x5a66c
			if (*(int16_t *)(*v13 + v5 + v6 + 226) == 0) {
				// 0x5a68c
				return 1;
			}
		}
		// 0x5a684
		return 0;
	}
	// 0x5a57c
	v14 = v9 + v1 + a2;
	v16 = *(char *)(v14 + 113);
	int32_t v19 = v16; // 0x5a584
	v15 = v16;
	if (v16 >= 1) {
		// 0x5a590
		if (*(char *)(v4 - 120 + 120 * v15 + 64) != 0) {
			// 0x5a5ac
			return 0;
		}
		// 0x5a5b4
		if (v16 != 0 && 0x1000000 * v19 <= 0) {
			// 0x5a5bc
			if (*(char *)(120 * (-1 - v15) + v4 + 64) != 0) {
				// 0x5a5dc
				return 0;
			}
		}
		// 0x5a5e4
		v17 = *(char *)(v14 + 112);
		if (v17 >= 1) {
			// 0x5a5f8
			v18 = *(char *)(v14 + 1);
			if (v18 >= 1) {
				// 0x5a604
				v12 = v4 + 64;
				if (*(char *)(120 * (int32_t)v17 - 120 + v12) != 0) {
					// 0x5a620
					if (*(char *)(120 * (int32_t)v18 - 120 + v12) != 0) {
						// 0x5a638
						return 0;
					}
				}
			}
		}
		// 0x5a640
		if (*(char *)*(int32_t *)(g23 - 0x77e4) != 0) {
			// 0x5a664
			// branch -> 0x5a68c
			// 0x5a68c
			return 1;
		}
		// 0x5a650
		v13 = (int32_t *)v2;
		if (*(int16_t *)(*v13 + v7) == 0) {
			// 0x5a66c
			if (*(int16_t *)(*v13 + v5 + v6 + 226) == 0) {
				// 0x5a68c
				return 1;
			}
		}
		// 0x5a684
		return 0;
	}
	// 0x5a5b4
	if (v16 != 0 && 0x1000000 * v19 <= 0) {
		// 0x5a5bc
		if (*(char *)(120 * (-1 - v15) + v4 + 64) != 0) {
			// 0x5a5dc
			return 0;
		}
		// 0x5a5e4
		v17 = *(char *)(v14 + 112);
		if (v17 >= 1) {
			// 0x5a5f8
			v18 = *(char *)(v14 + 1);
			if (v18 >= 1) {
				// 0x5a604
				v12 = v4 + 64;
				if (*(char *)(120 * (int32_t)v17 - 120 + v12) != 0) {
					// 0x5a620
					if (*(char *)(120 * (int32_t)v18 - 120 + v12) != 0) {
						// 0x5a638
						return 0;
					}
				}
			}
		}
		// 0x5a640
		if (*(char *)*(int32_t *)(g23 - 0x77e4) != 0) {
			// 0x5a664
			// branch -> 0x5a68c
			// 0x5a68c
			return 1;
		}
		// 0x5a650
		v13 = (int32_t *)v2;
		if (*(int16_t *)(*v13 + v7) == 0) {
			// 0x5a66c
			if (*(int16_t *)(*v13 + v5 + v6 + 226) == 0) {
				// 0x5a68c
				return 1;
			}
		}
		// 0x5a684
		return 0;
	}
	// 0x5a5e4
	v17 = *(char *)(v14 + 112);
	if (v17 < 1) {
		// 0x5a640
		if (*(char *)*(int32_t *)(g23 - 0x77e4) != 0) {
			// 0x5a664
			// branch -> 0x5a68c
			// 0x5a68c
			return 1;
		}
		// 0x5a650
		v13 = (int32_t *)v2;
		if (*(int16_t *)(*v13 + v7) == 0) {
			// 0x5a66c
			if (*(int16_t *)(*v13 + v5 + v6 + 226) == 0) {
				// 0x5a68c
				return 1;
			}
		}
		// 0x5a684
		return 0;
	}
	// 0x5a5f8
	v18 = *(char *)(v14 + 1);
	if (v18 < 1) {
		// 0x5a640
		if (*(char *)*(int32_t *)(g23 - 0x77e4) != 0) {
			// 0x5a664
			// branch -> 0x5a68c
			// 0x5a68c
			return 1;
		}
		// 0x5a650
		v13 = (int32_t *)v2;
		if (*(int16_t *)(*v13 + v7) == 0) {
			// 0x5a66c
			if (*(int16_t *)(*v13 + v5 + v6 + 226) == 0) {
				// 0x5a68c
				return 1;
			}
		}
		// 0x5a684
		return 0;
	}
	// 0x5a604
	v12 = v4 + 64;
	if (*(char *)(120 * (int32_t)v17 - 120 + v12) == 0) {
		// 0x5a640
		if (*(char *)*(int32_t *)(g23 - 0x77e4) != 0) {
			// 0x5a664
			// branch -> 0x5a68c
			// 0x5a68c
			return 1;
		}
		// 0x5a650
		v13 = (int32_t *)v2;
		if (*(int16_t *)(*v13 + v7) == 0) {
			// 0x5a66c
			if (*(int16_t *)(*v13 + v5 + v6 + 226) == 0) {
				// 0x5a68c
				return 1;
			}
		}
		// 0x5a684
		return 0;
	}
	// 0x5a620
	if (*(char *)(120 * (int32_t)v18 - 120 + v12) != 0) {
		// 0x5a638
		return 0;
	}
	// 0x5a640
	if (*(char *)*(int32_t *)(g23 - 0x77e4) != 0) {
		// 0x5a664
		// branch -> 0x5a68c
		// 0x5a68c
		return 1;
	}
	// 0x5a650
	v13 = (int32_t *)v2;
	if (*(int16_t *)(*v13 + v7) == 0) {
		// 0x5a66c
		if (*(int16_t *)(*v13 + v5 + v6 + 226) == 0) {
			// 0x5a68c
			return 1;
		}
	}
	// 0x5a684
	return 0;
}

// Address range: 0x5a694 - 0x5a7d8
int32_t function_5a694(void)
{
	int32_t v1 = g10; // 0x5a698
	g33 = *(int32_t *)(g23 - 0x71f0);
	g35 = *(int32_t *)(g23 - 0x71ec);
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0x5a6a8
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0x5a6ac
	if (*(int32_t *)*(int32_t *)(g23 - 0x71e4) >= 127) {
		// 0x5a6c4
		// branch -> 0x5a7c4
		// 0x5a7c4
		g10 = v1;
		return 0;
	}
	int32_t v4 = v3 + 56; // 0x5a6d0
	g32 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x7658); // 0x5a6d4
	int32_t v6 = v3 + 60;                    // 0x5a6d8
	g31 = v6;
	int32_t v7 = 0x55ec * *(int32_t *)v2;                    // 0x5a6dc
	int32_t v8 = *(int32_t *)(v7 + v4);                      // 0x5a6e8
	int32_t v9 = *(int32_t *)(v7 + v6);                      // 0x5a6ec
	int32_t v10 = *(int32_t *)*(int32_t *)(g23 - 0x765c);    // 0x5a6f0
	int32_t v11 = GetDirection(v8, v9, *(int32_t *)v5, v10); // 0x5a6f4
	int32_t v12 = 4 * v11;                                   // 0x5a6fc
	g30 = v11;
	int32_t v13 = 0x55ec * *(int32_t *)g36; // 0x5a708
	int32_t v14 = *(int32_t *)(g33 + v12);  // 0x5a70c
	int32_t v15 = *(int32_t *)(g32 + v13);  // 0x5a710
	int32_t v16 = *(int32_t *)(g31 + v13);  // 0x5a714
	if (function_5a4d0(v15 + *(int32_t *)(g35 + v12), v16 + v14) != 0) {
		// 0x5a72c
		// branch -> 0x5a7c4
		// 0x5a7c4
		g10 = v1;
		return 1;
	}
	uint32_t v17 = g30 - 1; // 0x5a738
	g30 = v17 % 8;
	int32_t v18 = 0x55ec * *(int32_t *)g36;     // 0x5a740
	int32_t v19 = __asm_rlwinm(v17, 2, 27, 29); // 0x5a744
	int32_t v20 = *(int32_t *)(v18 + g32);      // 0x5a748
	int32_t v21 = *(int32_t *)(g31 + v18);      // 0x5a750
	int32_t v22 = *(int32_t *)(g33 + v19);      // 0x5a754
	if (function_5a4d0(*(int32_t *)(g35 + v19) + v20, v22 + v21) != 0) {
		// 0x5a76c
		// branch -> 0x5a7c4
		// 0x5a7c4
		g10 = v1;
		return 1;
	}
	int32_t v23 = 0x55ec * *(int32_t *)g36;         // 0x5a77c
	int32_t v24 = __asm_rlwinm(g30 + 2, 2, 27, 29); // 0x5a780
	int32_t v25 = *(int32_t *)(v23 + g32);          // 0x5a784
	int32_t v26 = *(int32_t *)(g31 + v23);          // 0x5a78c
	int32_t v27 = *(int32_t *)(g33 + v24);          // 0x5a790
	int32_t result;                                 // 0x5a7d4
	if (function_5a4d0(*(int32_t *)(g35 + v24) + v25, v27 + v26) == 0) {
		int32_t v28 = 0x55ec * *(int32_t *)g36; // 0x5a7b4
		result = function_5a4d0(*(int32_t *)(g32 + v28), *(int32_t *)(g31 + v28));
		// branch -> 0x5a7c4
	} else {
		// 0x5a7a8
		result = 1;
		// branch -> 0x5a7c4
	}
	// 0x5a7c4
	g10 = v1;
	return result;
}

// Address range: 0x5a7d8 - 0x5a824
int32_t function_5a7d8(int32_t a1)
{
	// 0x5a7d8
	g34 = a1;
	g36 = g34;
	int32_t v1 = GetTickCount(); // 0x5a7ec
	int32_t v2;
	int32_t *v3 = (int32_t *)(v2 - 0x4e18); // 0x5a7f4
	int32_t result;                         // 0x5a820
	if (v1 - *v3 >= 0x1388) {
		// 0x5a804
		*v3 = v1;
		result = function_ab774(g36);
		// branch -> 0x5a810
	} else {
		result = v1;
	}
	// 0x5a810
	return result;
}

// Address range: 0x5a824 - 0x5aae8
int32_t function_5a824(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10;                        // 0x5a828
	int32_t v2 = *(int32_t *)(g23 - 0x71e4); // 0x5a82c
	g32 = v2;
	g29 = *(int32_t *)(g23 - 0x71f4);
	g30 = *(int32_t *)(g23 - 0x71f0);
	g24 = a3;
	g31 = *(int32_t *)(g23 - 0x71ec);
	g33 = *(int32_t *)(g23 - 0x7690);
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0x5a848
	g35 = v3;
	int32_t result; // 0x5aae4
	if (*(int32_t *)v2 < 127) {
		int32_t v4 = 0x55ec * a1; // 0x5a868
		g28 = v4;
		int32_t v5 = v4 + v3;                   // 0x5a86c
		int32_t v6 = v5 + 0x553c;               // 0x5a878
		int32_t v7 = v5 + 0x53d8;               // 0x5a87c
		int32_t v8 = (int32_t) * (int16_t *)v7; // 0x5a87c
		int32_t v9 = v5 + 0x53d4;               // 0x5a880
		if (function_5a318(*(int32_t *)v6, v8, *(int32_t *)v9) != -1) {
			// 0x5a890
			function_5a7d8(*(int32_t *)(g23 - 0x6158));
			int32_t v10 = (int32_t) * (int16_t *)v7; // 0x5a8a0
			function_5a384(a2, g24, *(int32_t *)v6, v10, *(int32_t *)v9, 1);
			// branch -> 0x5a8b4
		}
		int32_t v11 = g28 + g35; // 0x5a8b4
		int32_t v12 = v11 + 56;  // 0x5a8bc
		int32_t v13 = v12;       // r22
		int32_t v14 = v11 + 60;  // 0x5a8c4
		g36 = GetDirection(*(int32_t *)v12, *(int32_t *)v14, a2, g24);
		int32_t v15 = g24; // 0x5a8dc
		g34 = a2 - *(int32_t *)v13;
		int32_t v16;  // r18
		int32_t v17;  // r24
		int32_t v18;  // 0x5a9ac
		int32_t v19;  // 0x5aa24
		int32_t v20;  // 0x5aa78
		int32_t v21;  // 0x5aa90
		int32_t v22;  // 0x5a930
		int32_t v23;  // 0x5a940
		int32_t v24;  // 0x5a970
		int32_t v25;  // 0x5aa5c
		int32_t v26;  // 0x5aa90
		int32_t v27;  // 0x5aa98
		int32_t v28;  // 0x5aaa0
		int32_t *v29; // 0x5aabc
		int32_t v30;  // 0x5a94c
		int32_t v31;  // 0x5a950
		int32_t v32;  // 0x5a980
		int32_t v33;  // 0x5a984
		int32_t v34;  // 0x5aa44
		int32_t v35;  // 0x5aa4c
		int32_t v36;  // 0x5aa64
		int32_t v37;  // 0x5aa98
		int32_t v38;  // 0x5aaa4
		if (abs() <= 1) {
			// 0x5a8f0
			g34 = v15 - *(int32_t *)v14;
			if (abs() < 2) {
				// 0x5a8f0
				// branch -> 0x5a91c
				// 0x5a91c
				if (function_5a4d0(a2, g24) == 0) {
					// 0x5a930
					v22 = g36 - 1;
					g36 = v22 % 8;
					v23 = __asm_rlwinm(v22, 2, 27, 29);
					v30 = *(int32_t *)v13 + *(int32_t *)(g31 + v23);
					a2 = v30;
					v31 = *(int32_t *)v14 + *(int32_t *)(g30 + v23);
					g24 = v31;
					if (function_5a4d0(v30, v31) == 0) {
						// 0x5a968
						v24 = __asm_rlwinm(g36 + 2, 2, 27, 29);
						v32 = *(int32_t *)v13 + *(int32_t *)(g31 + v24);
						a2 = v32;
						v33 = *(int32_t *)(g30 + v24) + *(int32_t *)v14;
						g24 = v33;
						if (function_5a4d0(v32, v33) == 0) {
							// 0x5a99c
							g25 = g28 + g35;
							v16 = 0;
							v17 = 1;
							v18 = 1;
							v19 = 0;
							// branch -> 0x5aa24
							int32_t v39;
							while (true) {
								int32_t v40 = v19; // 0x5aa2c
								if (v19 == 0) {
								lab_0x5a9ac:;
									int32_t v41 = -v18; // 0x5a9ac
									v39 = 0;
									int32_t v42 = v18; // 0x5aa18
									if (v18 >= v41) {
										int32_t v43 = v18; // 0x5a9f4358
										// branch -> 0x5a9b8
										while (true) {
											// 0x5a9b8
											g35 = v41;
											int32_t v44 = *(int32_t *)(g25 + 60) + v41; // 0x5a9c0
											int32_t v45 = v43;                          // 0x5aa08
											if (v41 <= v43) {
												int32_t v46 = v41; // 0x5a9d057
												// branch -> 0x5a9c8
												while (true) {
													int32_t v47 = *(int32_t *)(g25 + 56) + v46; // 0x5a9d0
													g36 = v47;
													if (function_5a4d0(v47, v44) != 0) {
														// 0x5a9e4
														g24 = v44;
														v16 = 1;
														// branch -> 0x5a9f0
													}
													int32_t v48 = g35 + 1; // 0x5a9f0
													g35 = v48;
													if (v48 <= v17) {
														// 0x5a9f0
														if (v16 == 0) {
															// 0x5a9f0
															v46 = v48;
															// branch -> 0x5a9c8
															continue;
														}
													}
													// 0x5aa04
													// branch -> 0x5aa04
												}
											}
											int32_t v49 = v41 + 1; // 0x5aa04
											int32_t v50 = v16;
											if (v49 <= v45) {
												// 0x5aa04
												if (v50 == 0) {
													// 0x5aa04
													v41 = v49;
													v43 = v45;
													// branch -> 0x5a9b8
													continue;
												} else {
													v39 = v50;
													v42 = v45;
												}
											} else {
												v39 = v50;
												v42 = v45;
											}
										}
									}
									int32_t v51 = v42 + 1; // 0x5aa18
									v17 = v51;
									if (v51 > 49) {
										// break -> 0x5aa2c
										break;
									}
									v18 = v51;
									v19 = v39;
									// continue -> 0x5aa24
									continue;
								}
								// 0x5aa2c
								if (v40 == 0) {
									// 0x5aa34
									// branch -> 0x5aad4
									// 0x5aad4
									g10 = v1;
									return -1;
								}
							}
							// 0x5aa2c
							if (v39 == 0) {
								// 0x5aa34
								// branch -> 0x5aad4
								// 0x5aad4
								g10 = v1;
								return -1;
							}
						}
					}
				}
				// 0x5aa3c
				v34 = *(int32_t *)g29;
				g25 = v34;
				v35 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
				*(char *)(g24 + 112 * a2 + v35) = (char)(v34 + 1);
				v25 = 368 * g25;
				v36 = *(int32_t *)g32;
				v20 = g29;
				*(int32_t *)v20 = *(int32_t *)(v20 + 4 * (126 - v36));
				*(int32_t *)(4 * v36 + *(int32_t *)(g23 - 0x71e0)) = g25;
				v21 = v9 - 8;
				v26 = v21 + 8;
				v27 = v25 - 8 + g33;
				v37 = v27 + 8;
				*(int32_t *)v37 = *(int32_t *)v26;
				*(int32_t *)(v27 + 12) = *(int32_t *)(v21 + 12);
				v28 = 45;
				// branch -> 0x5aa90
				while (v28 != 0) {
					// 0x5aa90
					v21 = v26;
					v26 = v21 + 8;
					v27 = v37;
					v37 = v27 + 8;
					*(int32_t *)v37 = *(int32_t *)v26;
					*(int32_t *)(v27 + 12) = *(int32_t *)(v21 + 12);
					v28--;
					// continue -> 0x5aa90
				}
				// 0x5aaa4
				v38 = v25 + g33;
				*(int32_t *)(v38 + 12) = a2;
				*(int32_t *)(v38 + 16) = g24;
				function_60abc(g25, 1, v38);
				v29 = (int32_t *)g32;
				g34 = 1;
				*v29 = *v29 + 1;
				function_324ec(1);
				// branch -> 0x5aad4
				// 0x5aad4
				g10 = v1;
				return g25;
			}
		}
		int32_t v52 = 4 * g36;                                   // 0x5a900
		int32_t v53 = *(int32_t *)(g31 + v52) + *(int32_t *)v13; // 0x5a914
		a2 = v53;
		int32_t v54 = *(int32_t *)(g30 + v52) + *(int32_t *)v14; // 0x5a918
		g24 = v54;
		// branch -> 0x5a91c
		// 0x5a91c
		if (function_5a4d0(v53, v54) == 0) {
			// 0x5a930
			v22 = g36 - 1;
			g36 = v22 % 8;
			v23 = __asm_rlwinm(v22, 2, 27, 29);
			v30 = *(int32_t *)v13 + *(int32_t *)(g31 + v23);
			a2 = v30;
			v31 = *(int32_t *)v14 + *(int32_t *)(g30 + v23);
			g24 = v31;
			if (function_5a4d0(v30, v31) == 0) {
				// 0x5a968
				v24 = __asm_rlwinm(g36 + 2, 2, 27, 29);
				v32 = *(int32_t *)v13 + *(int32_t *)(g31 + v24);
				a2 = v32;
				v33 = *(int32_t *)(g30 + v24) + *(int32_t *)v14;
				g24 = v33;
				if (function_5a4d0(v32, v33) == 0) {
					// 0x5a99c
					g25 = g28 + g35;
					v16 = 0;
					v17 = 1;
					v18 = 1;
					v19 = 0;
					// branch -> 0x5aa24
					while (true) {
						// 0x5aa24
						if (v19 == 0) {
							goto lab_0x5a9ac;
						}
						// 0x5aa2c
						if (v19 == 0) {
							// 0x5aa34
							// branch -> 0x5aad4
							// 0x5aad4
							g10 = v1;
							return -1;
						}
					}
				}
			}
		}
		// 0x5aa3c
		v34 = *(int32_t *)g29;
		g25 = v34;
		v35 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
		*(char *)(g24 + 112 * a2 + v35) = (char)(v34 + 1);
		v25 = 368 * g25;
		v36 = *(int32_t *)g32;
		v20 = g29;
		*(int32_t *)v20 = *(int32_t *)(v20 + 4 * (126 - v36));
		*(int32_t *)(4 * v36 + *(int32_t *)(g23 - 0x71e0)) = g25;
		v21 = v9 - 8;
		v26 = v21 + 8;
		v27 = v25 - 8 + g33;
		v37 = v27 + 8;
		*(int32_t *)v37 = *(int32_t *)v26;
		*(int32_t *)(v27 + 12) = *(int32_t *)(v21 + 12);
		v28 = 45;
		// branch -> 0x5aa90
		while (v28 != 0) {
			// 0x5aa90
			v21 = v26;
			v26 = v21 + 8;
			v27 = v37;
			v37 = v27 + 8;
			*(int32_t *)v37 = *(int32_t *)v26;
			*(int32_t *)(v27 + 12) = *(int32_t *)(v21 + 12);
			v28--;
			// continue -> 0x5aa90
		}
		// 0x5aaa4
		v38 = v25 + g33;
		*(int32_t *)(v38 + 12) = a2;
		*(int32_t *)(v38 + 16) = g24;
		function_60abc(g25, 1, v38);
		v29 = (int32_t *)g32;
		g34 = 1;
		*v29 = *v29 + 1;
		function_324ec(1);
		result = g25;
		// branch -> 0x5aad4
	} else {
		// 0x5a860
		result = -1;
		// branch -> 0x5aad4
	}
	// 0x5aad4
	g10 = v1;
	return result;
}

// Address range: 0x5aae8 - 0x5ae34
int32_t function_5aae8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12)
{
	int32_t v1 = g10;                        // 0x5aaec
	int32_t v2 = *(int32_t *)(g23 - 0x71e4); // 0x5aaf0
	g21 = v2;
	g32 = *(int32_t *)(g23 - 0x71f0);
	g35 = *(int32_t *)(g23 - 0x71ec);
	g29 = a2;
	g36 = *(int32_t *)(g23 - 0x77a8);
	g28 = a3;
	g25 = a4;
	g24 = a5;
	int32_t v3 = g13; // 0x5ab1c
	int32_t result;   // 0x5ae30
	if (*(int32_t *)v2 < 127) {
		// 0x5ab50
		if (function_5a318(a4, a5, a6) != -1) {
			// 0x5ab68
			function_5a7d8(*(int32_t *)(g23 - 0x615c));
			function_5a384(g29, g28, g25, g24, a6, 2);
			// branch -> 0x5ab8c
		}
		int32_t v4 = 0x55ec * a1;                                             // 0x5ab8c
		int32_t v5 = v4;                                                      // r26
		int32_t v6 = g36 + v4;                                                // 0x5ab94
		int32_t v7 = v6 + 56;                                                 // 0x5ab9c
		int32_t v8 = v6 + 60;                                                 // 0x5aba4
		int32_t v9 = v8;                                                      // r22
		int32_t v10 = GetDirection(*(int32_t *)v7, *(int32_t *)v8, g29, g28); // 0x5aba8
		g33 = g28 - *(int32_t *)v8;
		g34 = g29 - *(int32_t *)v7;
		int32_t v11;  // r3
		int32_t v12;  // 0x5ac88
		int32_t v13;  // 0x5ad00
		int32_t v14;  // 0x5ad18
		int32_t v15;  // 0x5ad3c
		int32_t v16;  // 0x5adf0
		uint32_t v17; // 0x5ac0c
		int32_t v18;  // 0x5ac1c
		int32_t v19;  // 0x5ac4c
		int32_t *v20; // 0x5ae10
		int32_t v21;  // 0x5ac28
		int32_t v22;  // 0x5ac2c
		int32_t v23;  // 0x5ac5c
		int32_t v24;  // 0x5ac60
		int32_t v25;  // 0x5ad28
		int32_t v26;  // 0x5ad2c
		int32_t *v27; // 0x5ad3c
		int32_t v28;  // 0x5ad40
		int32_t v29;  // 0x5addc
		int32_t v30;  // 0x5adf8
		if (abs() <= 1) {
			// 0x5abcc
			g34 = g33;
			if (abs() < 2) {
				// 0x5abcc
				// branch -> 0x5abf8
				// 0x5abf8
				if (function_5a4d0(g29, g28) == 0) {
					// 0x5ac0c
					v17 = v10 - 1;
					v18 = __asm_rlwinm(v17, 2, 27, 29);
					v21 = *(int32_t *)v7 + *(int32_t *)(g35 + v18);
					g29 = v21;
					v22 = *(int32_t *)v9 + *(int32_t *)(g32 + v18);
					g28 = v22;
					if (function_5a4d0(v21, v22) == 0) {
						// 0x5ac44
						v19 = __asm_rlwinm(v17 % 8 + 2, 2, 27, 29);
						v23 = *(int32_t *)v7 + *(int32_t *)(g35 + v19);
						g29 = v23;
						v24 = *(int32_t *)(g32 + v19) + *(int32_t *)v9;
						g28 = v24;
						if (function_5a4d0(v23, v24) == 0) {
							// 0x5ac78
							v5 += g36;
							g32 = 0;
							v10 = 1;
							v12 = 1;
							v13 = 0;
							// branch -> 0x5ad00
							int32_t v31;
							while (true) {
								int32_t v32 = v13; // 0x5ad08
								if (v13 == 0) {
								lab_0x5ac88:;
									int32_t v33 = -v12; // 0x5ac88
									v31 = 0;
									int32_t v34 = v12; // 0x5acf4
									if (v12 >= v33) {
										int32_t v35 = v12; // 0x5acd0376
										// branch -> 0x5ac94
										while (true) {
											// 0x5ac94
											g36 = v33;
											int32_t v36 = *(int32_t *)(v5 + 60) + v33; // 0x5ac9c
											g33 = v36;
											int32_t v37 = v35; // 0x5ace4
											if (v33 <= v35) {
												int32_t v38 = v33; // 0x5acac75
												// branch -> 0x5aca4
												while (true) {
													int32_t v39 = *(int32_t *)(v5 + 56) + v38; // 0x5acac
													g35 = v39;
													if (function_5a4d0(v39, v36) != 0) {
														// 0x5acc0
														g29 = g35;
														g28 = g33;
														g32 = 1;
														// branch -> 0x5accc
													}
													int32_t v40 = g36 + 1; // 0x5accc
													g36 = v40;
													if (v40 <= v10) {
														// 0x5accc
														if (g32 == 0) {
															// 0x5accc
															v36 = g33;
															v38 = v40;
															// branch -> 0x5aca4
															continue;
														}
													}
													// 0x5ace0
													// branch -> 0x5ace0
												}
											}
											int32_t v41 = v33 + 1; // 0x5ace0
											int32_t v42 = g32;
											if (v41 <= v37) {
												// 0x5ace0
												if (v42 == 0) {
													// 0x5ace0
													v33 = v41;
													v35 = v37;
													// branch -> 0x5ac94
													continue;
												} else {
													v31 = v42;
													v34 = v37;
												}
											} else {
												v31 = v42;
												v34 = v37;
											}
										}
									}
									int32_t v43 = v34 + 1; // 0x5acf4
									v10 = v43;
									if (v43 > 49) {
										// break -> 0x5ad08
										break;
									}
									v12 = v43;
									v13 = v31;
									// continue -> 0x5ad00
									continue;
								}
								// 0x5ad08
								if (v32 == 0) {
									// 0x5ad10
									// branch -> 0x5ae20
									// 0x5ae20
									g10 = v1;
									return -1;
								}
							}
							// 0x5ad08
							if (v31 == 0) {
								// 0x5ad10
								// branch -> 0x5ae20
								// 0x5ae20
								g10 = v1;
								return -1;
							}
						}
					}
				}
				// 0x5ad18
				v14 = g23;
				v25 = *(int32_t *)*(int32_t *)(v14 - 0x71f4);
				g26 = v25;
				v26 = *(int32_t *)*(int32_t *)(v14 - 0x768c);
				*(char *)(g28 + 112 * g29 + v26) = (char)(v25 + 1);
				v15 = g23;
				v27 = (int32_t *)(v15 - 0x71f4);
				v28 = *(int32_t *)g21;
				*(int32_t *)*v27 = *(int32_t *)(4 * (126 - v28) + *v27);
				*(int32_t *)(4 * v28 + *(int32_t *)(v15 - 0x71e0)) = g26;
				if (g25 == 23) {
					// 0x5ad68
					g13 = a10;
					function_606f0(g26, (int16_t)g24, a6, a7, v3, a8, a9, a11, a12);
					// branch -> 0x5adf0
				} else {
					// 0x5ada0
					function_60590(g26, g25, (int16_t)g24, a6, a11);
					if (a7 != 0) {
						// 0x5adc0
						*(int32_t *)(*(int32_t *)(g23 - 0x7690) + 368 * g26 + 56) = 1;
						// branch -> 0x5add4
					}
					// 0x5add4
					v29 = *(int32_t *)(g23 - 0x7690) + 368 * g26;
					v11 = v29;
					*(int32_t *)(v29 + 236) = v3;
					*(int32_t *)(v11 + 240) = a8;
					*(int32_t *)(v11 + 228) = a9;
					*(int32_t *)(v11 + 232) = a10;
					// branch -> 0x5adf0
				}
				// 0x5adf0
				v16 = g26;
				v30 = *(int32_t *)(g23 - 0x7690) + 368 * v16;
				*(int32_t *)(v30 + 12) = g29;
				*(int32_t *)(v30 + 16) = g28;
				function_60abc(v16, 1, v30);
				v20 = (int32_t *)g21;
				*v20 = *v20 + 1;
				// branch -> 0x5ae20
				// 0x5ae20
				g10 = v1;
				return g26;
			}
		}
		int32_t v44 = 4 * v10;                                  // 0x5abdc
		int32_t v45 = *(int32_t *)(g35 + v44) + *(int32_t *)v7; // 0x5abf0
		g29 = v45;
		int32_t v46 = *(int32_t *)(g32 + v44) + *(int32_t *)v9; // 0x5abf4
		g28 = v46;
		// branch -> 0x5abf8
		// 0x5abf8
		if (function_5a4d0(v45, v46) == 0) {
			// 0x5ac0c
			v17 = v10 - 1;
			v18 = __asm_rlwinm(v17, 2, 27, 29);
			v21 = *(int32_t *)v7 + *(int32_t *)(g35 + v18);
			g29 = v21;
			v22 = *(int32_t *)v9 + *(int32_t *)(g32 + v18);
			g28 = v22;
			if (function_5a4d0(v21, v22) == 0) {
				// 0x5ac44
				v19 = __asm_rlwinm(v17 % 8 + 2, 2, 27, 29);
				v23 = *(int32_t *)v7 + *(int32_t *)(g35 + v19);
				g29 = v23;
				v24 = *(int32_t *)(g32 + v19) + *(int32_t *)v9;
				g28 = v24;
				if (function_5a4d0(v23, v24) == 0) {
					// 0x5ac78
					v5 += g36;
					g32 = 0;
					v10 = 1;
					v12 = 1;
					v13 = 0;
					// branch -> 0x5ad00
					while (true) {
						// 0x5ad00
						if (v13 == 0) {
							goto lab_0x5ac88;
						}
						// 0x5ad08
						if (v13 == 0) {
							// 0x5ad10
							// branch -> 0x5ae20
							// 0x5ae20
							g10 = v1;
							return -1;
						}
					}
				}
			}
		}
		// 0x5ad18
		v14 = g23;
		v25 = *(int32_t *)*(int32_t *)(v14 - 0x71f4);
		g26 = v25;
		v26 = *(int32_t *)*(int32_t *)(v14 - 0x768c);
		*(char *)(g28 + 112 * g29 + v26) = (char)(v25 + 1);
		v15 = g23;
		v27 = (int32_t *)(v15 - 0x71f4);
		v28 = *(int32_t *)g21;
		*(int32_t *)*v27 = *(int32_t *)(4 * (126 - v28) + *v27);
		*(int32_t *)(4 * v28 + *(int32_t *)(v15 - 0x71e0)) = g26;
		if (g25 == 23) {
			// 0x5ad68
			g13 = a10;
			function_606f0(g26, (int16_t)g24, a6, a7, v3, a8, a9, a11, a12);
			// branch -> 0x5adf0
		} else {
			// 0x5ada0
			function_60590(g26, g25, (int16_t)g24, a6, a11);
			if (a7 != 0) {
				// 0x5adc0
				*(int32_t *)(*(int32_t *)(g23 - 0x7690) + 368 * g26 + 56) = 1;
				// branch -> 0x5add4
			}
			// 0x5add4
			v29 = *(int32_t *)(g23 - 0x7690) + 368 * g26;
			v11 = v29;
			*(int32_t *)(v29 + 236) = v3;
			*(int32_t *)(v11 + 240) = a8;
			*(int32_t *)(v11 + 228) = a9;
			*(int32_t *)(v11 + 232) = a10;
			// branch -> 0x5adf0
		}
		// 0x5adf0
		v16 = g26;
		v30 = *(int32_t *)(g23 - 0x7690) + 368 * v16;
		*(int32_t *)(v30 + 12) = g29;
		*(int32_t *)(v30 + 16) = g28;
		function_60abc(v16, 1, v30);
		v20 = (int32_t *)g21;
		*v20 = *v20 + 1;
		result = g26;
		// branch -> 0x5ae20
	} else {
		// 0x5ab48
		result = -1;
		// branch -> 0x5ae20
	}
	// 0x5ae20
	g10 = v1;
	return result;
}

// Address range: 0x5ae34 - 0x5b0f4
int32_t function_5ae34(void)
{
	// 0x5ae34
	g33 = 0;
	g35 = *(int32_t *)(g23 - 0x76a4);
	int32_t v1 = *(int32_t *)(g23 - 0x7728); // 0x5ae4c
	g36 = v1;
	uint32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x76a8); // 0x5ae64
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x76ac);  // 0x5ae68
	int32_t v4 = 73;                                      // 0x5aea4
	int32_t v5 = 0;                                       // 0x5aea0
	int32_t v6 = g23 + 0x35ec;                            // 0x5ae9c
	// branch -> 0x5ae6c
	int32_t v7;  // r26
	uint32_t v8; // 0x5aee0
	int32_t v9;  // 0x5af64
	int32_t v10; // 0x5afcc
	int32_t v11; // 0x5b01c
	int32_t v12; // 0x5b054
	int32_t v13; // 0x5b0b0
	int32_t v14; // 0x5aea0
	int32_t v15; // 0x5aef0
	int32_t v16; // 0x5af04
	int32_t v17; // 0x5af18
	int32_t v18; // 0x5af2c
	int32_t v19; // 0x5af48
	int32_t v20; // 0x5af68
	int32_t v21; // 0x5af88
	int32_t v22; // 0x5afa4
	int32_t v23; // 0x5aff0
	int32_t v24; // 0x5aec8
	int32_t v25; // 0x5b038
	int32_t v26; // 0x5b054
	char v27;    // 0x5b078
	while (true) {
		uint32_t v28 = *(int32_t *)v6; // 0x5ae6c
		if (v2 >= v28) {
			// 0x5ae78
			if (v2 < v28 + 29) {
				int32_t v29 = *(int32_t *)(v6 + 4); // 0x5ae84
				if (v3 < v29 == v3 >= v29 - 29) {
					// 0x5aea8
					if (v5 < 73) {
						// 0x5aeb8
						*(char *)v1 = 0;
						g31 = -1;
						v24 = *(int32_t *)(g23 - 0x77a8);
						g32 = 0;
						v7 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v24;
						function_2dc1c();
						v8 = g33;
						if (v8 >= 0) {
							// 0x5aee8
							if (v8 <= 3) {
								// 0x5aef0
								v15 = v7 + 1176;
								g32 = v15;
								g31 = 0;
								v12 = v15;
								// branch -> 0x5b038
								// 0x5b038
								v25 = *(int32_t *)(v12 + 8);
								if (v25 == -1) {
									// 0x5b044
									// branch -> 0x5b0e0
									// 0x5b0e0
									return -1;
								}
								// 0x5b04c
								if (v25 == 11) {
									// 0x5b054
									v26 = *(int32_t *)(v12 + 196);
									function_314d0(v26);
									g37 = *(int32_t *)(g23 - 0x6160);
									g38 = v26;
									sprintf();
									// branch -> 0x5b0dc
									// 0x5b0dc
									// branch -> 0x5b0e0
									// 0x5b0e0
									return g31;
								}
								// 0x5b078
								v27 = *(char *)(v12 + 60);
								if (v27 == 1) {
									// 0x5b088
									*(char *)g36 = 1;
									// branch -> 0x5b0a4
								} else {
									// 0x5b094
									if (v27 == 2) {
										// 0x5b09c
										*(char *)g36 = 3;
										// branch -> 0x5b0a4
									}
								}
								// 0x5b0a4
								g34 = g35;
								g37 = g32 + 61;
								strcpy();
								v13 = g32;
								if (*(int32_t *)(v13 + 56) == 0) {
									// 0x5b0d4
									function_62584(v13);
									// branch -> 0x5b0dc
									// 0x5b0dc
									// branch -> 0x5b0e0
									// 0x5b0e0
									return g31;
								}
								// 0x5b0bc
								g34 = g35;
								g37 = v13 + 125;
								strcpy();
								function_62320(g32);
								// branch -> 0x5b0dc
								// 0x5b0dc
								// branch -> 0x5b0e0
								// 0x5b0e0
								return g31;
							}
						}
						// 0x5aefc
						if (v8 == 4) {
							// 0x5af04
							v16 = v7 + 1544;
							g32 = v16;
							g31 = 1;
							v12 = v16;
							// branch -> 0x5b038
						} else {
							// 0x5af10
							if (v8 == 5) {
								// 0x5af18
								v17 = v7 + 1912;
								g32 = v17;
								g31 = 2;
								v12 = v17;
								// branch -> 0x5b038
							} else {
								// 0x5af24
								if (v8 == 6) {
									// 0x5af2c
									v18 = v7 + 2280;
									g32 = v18;
									g31 = 3;
									v12 = v18;
									// branch -> 0x5b038
								} else {
									// 0x5af38
									if (v8 >= 7) {
										// 0x5af40
										if (v8 <= 12) {
											// 0x5af48
											v19 = v7 + 2648;
											g32 = v19;
											g31 = 4;
											v12 = v19;
											// branch -> 0x5b038
											// 0x5b038
											v25 = *(int32_t *)(v12 + 8);
											if (v25 == -1) {
												// 0x5b044
												// branch -> 0x5b0e0
												// 0x5b0e0
												return -1;
											}
											// 0x5b04c
											if (v25 == 11) {
												// 0x5b054
												v26 = *(int32_t *)(v12 + 196);
												function_314d0(v26);
												g37 = *(int32_t *)(g23 - 0x6160);
												g38 = v26;
												sprintf();
												// branch -> 0x5b0dc
												// 0x5b0dc
												// branch -> 0x5b0e0
												// 0x5b0e0
												return g31;
											}
											// 0x5b078
											v27 = *(char *)(v12 + 60);
											if (v27 == 1) {
												// 0x5b088
												*(char *)g36 = 1;
												// branch -> 0x5b0a4
											} else {
												// 0x5b094
												if (v27 == 2) {
													// 0x5b09c
													*(char *)g36 = 3;
													// branch -> 0x5b0a4
												}
											}
											// 0x5b0a4
											g34 = g35;
											g37 = g32 + 61;
											strcpy();
											v13 = g32;
											if (*(int32_t *)(v13 + 56) == 0) {
												// 0x5b0d4
												function_62584(v13);
												// branch -> 0x5b0dc
												// 0x5b0dc
												// branch -> 0x5b0e0
												// 0x5b0e0
												return g31;
											}
											// 0x5b0bc
											g34 = g35;
											g37 = v13 + 125;
											strcpy();
											function_62320(g32);
											// branch -> 0x5b0dc
											// 0x5b0dc
											// branch -> 0x5b0e0
											// 0x5b0e0
											return g31;
										}
									}
									// 0x5af54
									if (v8 >= 13) {
										// 0x5af5c
										if (v8 <= 18) {
											// 0x5af64
											v9 = v7;
											v20 = v9 + 2648;
											g32 = v20;
											if (*(int32_t *)(v9 + 2656) != -1) {
												// 0x5af74
												if (*(char *)(v9 + 2837) == 2) {
													// 0x5af80
													g31 = 4;
													v12 = v20;
													// branch -> 0x5b038
													// 0x5b038
													v25 = *(int32_t *)(v12 + 8);
													if (v25 == -1) {
														// 0x5b044
														// branch -> 0x5b0e0
														// 0x5b0e0
														return -1;
													}
													// 0x5b04c
													if (v25 == 11) {
														// 0x5b054
														v26 = *(int32_t *)(v12 + 196);
														function_314d0(v26);
														g37 = *(int32_t *)(g23 - 0x6160);
														g38 = v26;
														sprintf();
														// branch -> 0x5b0dc
														// 0x5b0dc
														// branch -> 0x5b0e0
														// 0x5b0e0
														return g31;
													}
													// 0x5b078
													v27 = *(char *)(v12 + 60);
													if (v27 == 1) {
														// 0x5b088
														*(char *)g36 = 1;
														// branch -> 0x5b0a4
													} else {
														// 0x5b094
														if (v27 == 2) {
															// 0x5b09c
															*(char *)g36 = 3;
															// branch -> 0x5b0a4
														}
													}
													// 0x5b0a4
													g34 = g35;
													g37 = g32 + 61;
													strcpy();
													v13 = g32;
													if (*(int32_t *)(v13 + 56) == 0) {
														// 0x5b0d4
														function_62584(v13);
														// branch -> 0x5b0dc
														// 0x5b0dc
														// branch -> 0x5b0e0
														// 0x5b0e0
														return g31;
													}
													// 0x5b0bc
													g34 = g35;
													g37 = v13 + 125;
													strcpy();
													function_62320(g32);
													// branch -> 0x5b0dc
													// 0x5b0dc
													// branch -> 0x5b0e0
													// 0x5b0e0
													return g31;
												}
											}
											// 0x5af88
											v21 = v9 + 3016;
											g32 = v21;
											g31 = 5;
											v12 = v21;
											// branch -> 0x5b038
											// 0x5b038
											v25 = *(int32_t *)(v12 + 8);
											if (v25 == -1) {
												// 0x5b044
												// branch -> 0x5b0e0
												// 0x5b0e0
												return -1;
											}
											// 0x5b04c
											if (v25 == 11) {
												// 0x5b054
												v26 = *(int32_t *)(v12 + 196);
												function_314d0(v26);
												g37 = *(int32_t *)(g23 - 0x6160);
												g38 = v26;
												sprintf();
												// branch -> 0x5b0dc
												// 0x5b0dc
												// branch -> 0x5b0e0
												// 0x5b0e0
												return g31;
											}
											// 0x5b078
											v27 = *(char *)(v12 + 60);
											if (v27 == 1) {
												// 0x5b088
												*(char *)g36 = 1;
												// branch -> 0x5b0a4
											} else {
												// 0x5b094
												if (v27 == 2) {
													// 0x5b09c
													*(char *)g36 = 3;
													// branch -> 0x5b0a4
												}
											}
											// 0x5b0a4
											g34 = g35;
											g37 = g32 + 61;
											strcpy();
											v13 = g32;
											if (*(int32_t *)(v13 + 56) == 0) {
												// 0x5b0d4
												function_62584(v13);
												// branch -> 0x5b0dc
												// 0x5b0dc
												// branch -> 0x5b0e0
												// 0x5b0e0
												return g31;
											}
											// 0x5b0bc
											g34 = g35;
											g37 = v13 + 125;
											strcpy();
											function_62320(g32);
											// branch -> 0x5b0dc
											// 0x5b0dc
											// branch -> 0x5b0e0
											// 0x5b0e0
											return g31;
										}
									}
									// 0x5af94
									if (v8 >= 19) {
										// 0x5af9c
										if (v8 <= 24) {
											// 0x5afa4
											v22 = v7 + 3384;
											g32 = v22;
											g31 = 6;
											v12 = v22;
											// branch -> 0x5b038
											// 0x5b038
											v25 = *(int32_t *)(v12 + 8);
											if (v25 == -1) {
												// 0x5b044
												// branch -> 0x5b0e0
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x5b04c
												if (v25 == 11) {
													// 0x5b054
													v26 = *(int32_t *)(v12 + 196);
													v7 = v26;
													function_314d0(v26);
													g37 = *(int32_t *)(g23 - 0x6160);
													g38 = v7;
													sprintf();
													// branch -> 0x5b0dc
													// 0x5b0dc
													// branch -> 0x5b0e0
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x5b078
													v27 = *(char *)(v12 + 60);
													if (v27 == 1) {
														// 0x5b088
														*(char *)g36 = 1;
														// branch -> 0x5b0a4
													} else {
														// 0x5b094
														if (v27 == 2) {
															// 0x5b09c
															*(char *)g36 = 3;
															// branch -> 0x5b0a4
														}
													}
													// 0x5b0a4
													g34 = g35;
													g37 = g32 + 61;
													strcpy();
													v13 = g32;
													if (*(int32_t *)(v13 + 56) == 0) {
														// 0x5b0d4
														function_62584(v13);
														// branch -> 0x5b0dc
														// 0x5b0dc
														// branch -> 0x5b0e0
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x5b0bc
														g34 = g35;
														g37 = v13 + 125;
														strcpy();
														function_62320(g32);
														// branch -> 0x5b0dc
														// 0x5b0dc
														// branch -> 0x5b0e0
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// 0x5b0dc
													// branch -> 0x5b0e0
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// 0x5b0dc
												// branch -> 0x5b0e0
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x5afb0
									if (v8 >= 25) {
										// 0x5afb8
										if (v8 <= 64) {
											// 0x5afc0
											g34 = (int32_t) * (char *)(v7 + v8 + 0x4813);
											v10 = abs();
											if (v10 == 0) {
												// 0x5afd8
												// branch -> 0x5b0e0
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x5afe0
												g31 = v10 + 6;
												v23 = 368 * v10 + 3384 + v7;
												g32 = v23;
												v12 = v23;
												// branch -> 0x5b038
												// 0x5b038
												v25 = *(int32_t *)(v12 + 8);
												if (v25 == -1) {
													// 0x5b044
													// branch -> 0x5b0e0
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x5b04c
													if (v25 == 11) {
														// 0x5b054
														v26 = *(int32_t *)(v12 + 196);
														v7 = v26;
														function_314d0(v26);
														g37 = *(int32_t *)(g23 - 0x6160);
														g38 = v7;
														sprintf();
														// branch -> 0x5b0dc
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x5b078
														v27 = *(char *)(v12 + 60);
														if (v27 == 1) {
															// 0x5b088
															*(char *)g36 = 1;
															// branch -> 0x5b0a4
														} else {
															// 0x5b094
															if (v27 == 2) {
																// 0x5b09c
																*(char *)g36 = 3;
																// branch -> 0x5b0a4
															}
														}
														// 0x5b0a4
														g34 = g35;
														g37 = g32 + 61;
														strcpy();
														v13 = g32;
														if (*(int32_t *)(v13 + 56) == 0) {
															// 0x5b0d4
															function_62584(v13);
															// branch -> 0x5b0dc
															// Detected a possible infinite recursion (goto support failed); quitting...
														} else {
															// 0x5b0bc
															g34 = g35;
															g37 = v13 + 125;
															strcpy();
															function_62320(g32);
															// branch -> 0x5b0dc
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x5aff8
									if (v8 < 65) {
										// 0x5aff8
										v12 = g32;
										// branch -> 0x5b038
										// 0x5b038
										v25 = *(int32_t *)(v12 + 8);
										if (v25 == -1) {
											// 0x5b044
											// branch -> 0x5b0e0
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x5b04c
											if (v25 == 11) {
												// 0x5b054
												v26 = *(int32_t *)(v12 + 196);
												function_314d0(v26);
												g37 = *(int32_t *)(g23 - 0x6160);
												g38 = v26;
												sprintf();
												// branch -> 0x5b0dc
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x5b078
												v27 = *(char *)(v12 + 60);
												if (v27 == 1) {
													// 0x5b088
													*(char *)g36 = 1;
													// branch -> 0x5b0a4
												} else {
													// 0x5b094
													if (v27 == 2) {
														// 0x5b09c
														*(char *)g36 = 3;
														// branch -> 0x5b0a4
													}
												}
												// 0x5b0a4
												g34 = g35;
												g37 = g32 + 61;
												strcpy();
												v13 = g32;
												if (*(int32_t *)(v13 + 56) == 0) {
													// 0x5b0d4
													function_62584(v13);
													// branch -> 0x5b0dc
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x5b0bc
													g34 = g35;
													g37 = v13 + 125;
													strcpy();
													function_62320(g32);
													// branch -> 0x5b0dc
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x5b000
										*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
										v11 = 368 * v8 - 0x151c + v7;
										g32 = v11;
										if (*(int32_t *)(v11 + 8) == -1) {
											// 0x5b02c
											// branch -> 0x5b0e0
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x5b034
											g31 = g33 - 18;
											v12 = v11;
											// branch -> 0x5b038
											// 0x5b038
											v25 = *(int32_t *)(v12 + 8);
											if (v25 == -1) {
												// 0x5b044
												// branch -> 0x5b0e0
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x5b04c
												if (v25 == 11) {
													// 0x5b054
													v26 = *(int32_t *)(v12 + 196);
													function_314d0(v26);
													g37 = *(int32_t *)(g23 - 0x6160);
													g38 = v26;
													sprintf();
													// branch -> 0x5b0dc
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x5b078
													v27 = *(char *)(v12 + 60);
													if (v27 == 1) {
														// 0x5b088
														*(char *)g36 = 1;
														// branch -> 0x5b0a4
													} else {
														// 0x5b094
														if (v27 == 2) {
															// 0x5b09c
															*(char *)g36 = 3;
															// branch -> 0x5b0a4
														}
													}
													// 0x5b0a4
													g34 = g35;
													g37 = g32 + 61;
													strcpy();
													v13 = g32;
													if (*(int32_t *)(v13 + 56) == 0) {
														// 0x5b0d4
														function_62584(v13);
														// branch -> 0x5b0dc
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x5b0bc
														g34 = g35;
														g37 = v13 + 125;
														strcpy();
														function_62320(g32);
														// branch -> 0x5b0dc
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x5b038
								v25 = *(int32_t *)(v12 + 8);
								if (v25 == -1) {
									// 0x5b044
									// branch -> 0x5b0e0
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x5b04c
									if (v25 == 11) {
										// 0x5b054
										v26 = *(int32_t *)(v12 + 196);
										function_314d0(v26);
										g37 = *(int32_t *)(g23 - 0x6160);
										g38 = v26;
										sprintf();
										// branch -> 0x5b0dc
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x5b078
										v27 = *(char *)(v12 + 60);
										if (v27 == 1) {
											// 0x5b088
											*(char *)g36 = 1;
											// branch -> 0x5b0a4
										} else {
											// 0x5b094
											if (v27 == 2) {
												// 0x5b09c
												*(char *)g36 = 3;
												// branch -> 0x5b0a4
											}
										}
										// 0x5b0a4
										g34 = g35;
										g37 = g32 + 61;
										strcpy();
										v13 = g32;
										if (*(int32_t *)(v13 + 56) == 0) {
											// 0x5b0d4
											function_62584(v13);
											// branch -> 0x5b0dc
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x5b0bc
											g34 = g35;
											g37 = v13 + 125;
											strcpy();
											function_62320(g32);
											// branch -> 0x5b0dc
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x5b038
							v25 = *(int32_t *)(v12 + 8);
							if (v25 == -1) {
								// 0x5b044
								// branch -> 0x5b0e0
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x5b04c
								if (v25 == 11) {
									// 0x5b054
									v26 = *(int32_t *)(v12 + 196);
									function_314d0(v26);
									g37 = *(int32_t *)(g23 - 0x6160);
									g38 = v26;
									sprintf();
									// branch -> 0x5b0dc
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x5b078
									v27 = *(char *)(v12 + 60);
									if (v27 == 1) {
										// 0x5b088
										*(char *)g36 = 1;
										// branch -> 0x5b0a4
									} else {
										// 0x5b094
										if (v27 == 2) {
											// 0x5b09c
											*(char *)g36 = 3;
											// branch -> 0x5b0a4
										}
									}
									// 0x5b0a4
									g34 = g35;
									g37 = g32 + 61;
									strcpy();
									v13 = g32;
									if (*(int32_t *)(v13 + 56) == 0) {
										// 0x5b0d4
										function_62584(v13);
										// branch -> 0x5b0dc
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x5b0bc
										g34 = g35;
										g37 = v13 + 125;
										strcpy();
										function_62320(g32);
										// branch -> 0x5b0dc
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0x5b038
						v25 = *(int32_t *)(v12 + 8);
						if (v25 == -1) {
							// 0x5b044
							// branch -> 0x5b0e0
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x5b04c
							if (v25 == 11) {
								// 0x5b054
								v26 = *(int32_t *)(v12 + 196);
								function_314d0(v26);
								g37 = *(int32_t *)(g23 - 0x6160);
								g38 = v26;
								sprintf();
								// branch -> 0x5b0dc
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x5b078
								v27 = *(char *)(v12 + 60);
								if (v27 == 1) {
									// 0x5b088
									*(char *)g36 = 1;
									// branch -> 0x5b0a4
								} else {
									// 0x5b094
									if (v27 == 2) {
										// 0x5b09c
										*(char *)g36 = 3;
										// branch -> 0x5b0a4
									}
								}
								// 0x5b0a4
								g34 = g35;
								g37 = g32 + 61;
								strcpy();
								v13 = g32;
								if (*(int32_t *)(v13 + 56) == 0) {
									// 0x5b0d4
									function_62584(v13);
									// branch -> 0x5b0dc
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x5b0bc
									g34 = g35;
									g37 = v13 + 125;
									strcpy();
									function_62320(g32);
									// branch -> 0x5b0dc
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x5ae9c
		v14 = v5 + 1;
		g33 = v14;
		int32_t v30 = v4 - 1; // 0x5aea4
		if (v30 == 0) {
			// break -> 0x5aea8
			break;
		}
		v4 = v30;
		v5 = v14;
		v6 += 8;
		// continue -> 0x5ae6c
	}
	// 0x5aea8
	if (v14 < 73) {
		// 0x5aeb8
		*(char *)v1 = 0;
		g31 = -1;
		v24 = *(int32_t *)(g23 - 0x77a8);
		g32 = 0;
		v7 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v24;
		function_2dc1c();
		v8 = g33;
		if (v8 >= 0) {
			// 0x5aee8
			if (v8 <= 3) {
				// 0x5aef0
				v15 = v7 + 1176;
				g32 = v15;
				g31 = 0;
				v12 = v15;
				// branch -> 0x5b038
				// 0x5b038
				v25 = *(int32_t *)(v12 + 8);
				if (v25 == -1) {
					// 0x5b044
					// branch -> 0x5b0e0
				} else {
					// 0x5b04c
					if (v25 == 11) {
						// 0x5b054
						v26 = *(int32_t *)(v12 + 196);
						v7 = v26;
						function_314d0(v26);
						g37 = *(int32_t *)(g23 - 0x6160);
						g38 = v7;
						sprintf();
						// branch -> 0x5b0dc
					} else {
						// 0x5b078
						v27 = *(char *)(v12 + 60);
						if (v27 == 1) {
							// 0x5b088
							*(char *)g36 = 1;
							// branch -> 0x5b0a4
						} else {
							// 0x5b094
							if (v27 == 2) {
								// 0x5b09c
								*(char *)g36 = 3;
								// branch -> 0x5b0a4
							}
						}
						// 0x5b0a4
						g34 = g35;
						g37 = g32 + 61;
						strcpy();
						v13 = g32;
						if (*(int32_t *)(v13 + 56) == 0) {
							// 0x5b0d4
							function_62584(v13);
							// branch -> 0x5b0dc
						} else {
							// 0x5b0bc
							g34 = g35;
							g37 = v13 + 125;
							strcpy();
							function_62320(g32);
							// branch -> 0x5b0dc
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0x5aefc
		if (v8 == 4) {
			// 0x5af04
			v16 = v7 + 1544;
			g32 = v16;
			g31 = 1;
			v12 = v16;
			// branch -> 0x5b038
		} else {
			// 0x5af10
			if (v8 == 5) {
				// 0x5af18
				v17 = v7 + 1912;
				g32 = v17;
				g31 = 2;
				v12 = v17;
				// branch -> 0x5b038
			} else {
				// 0x5af24
				if (v8 == 6) {
					// 0x5af2c
					v18 = v7 + 2280;
					g32 = v18;
					g31 = 3;
					v12 = v18;
					// branch -> 0x5b038
				} else {
					// 0x5af38
					if (v8 >= 7) {
						// 0x5af40
						if (v8 <= 12) {
							// 0x5af48
							v19 = v7 + 2648;
							g32 = v19;
							g31 = 4;
							v12 = v19;
							// branch -> 0x5b038
							// 0x5b038
							v25 = *(int32_t *)(v12 + 8);
							if (v25 == -1) {
								// 0x5b044
								// branch -> 0x5b0e0
							} else {
								// 0x5b04c
								if (v25 == 11) {
									// 0x5b054
									v26 = *(int32_t *)(v12 + 196);
									v7 = v26;
									function_314d0(v26);
									g37 = *(int32_t *)(g23 - 0x6160);
									g38 = v7;
									sprintf();
									// branch -> 0x5b0dc
								} else {
									// 0x5b078
									v27 = *(char *)(v12 + 60);
									if (v27 == 1) {
										// 0x5b088
										*(char *)g36 = 1;
										// branch -> 0x5b0a4
									} else {
										// 0x5b094
										if (v27 == 2) {
											// 0x5b09c
											*(char *)g36 = 3;
											// branch -> 0x5b0a4
										}
									}
									// 0x5b0a4
									g34 = g35;
									g37 = g32 + 61;
									strcpy();
									v13 = g32;
									if (*(int32_t *)(v13 + 56) == 0) {
										// 0x5b0d4
										function_62584(v13);
										// branch -> 0x5b0dc
									} else {
										// 0x5b0bc
										g34 = g35;
										g37 = v13 + 125;
										strcpy();
										function_62320(g32);
										// branch -> 0x5b0dc
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x5af54
					if (v8 >= 13) {
						// 0x5af5c
						if (v8 <= 18) {
							// 0x5af64
							v9 = v7;
							v20 = v9 + 2648;
							g32 = v20;
							if (*(int32_t *)(v9 + 2656) != -1) {
								// 0x5af74
								if (*(char *)(v9 + 2837) == 2) {
									// 0x5af80
									g31 = 4;
									v12 = v20;
									// branch -> 0x5b038
									// 0x5b038
									v25 = *(int32_t *)(v12 + 8);
									if (v25 == -1) {
										// 0x5b044
										// branch -> 0x5b0e0
									} else {
										// 0x5b04c
										if (v25 == 11) {
											// 0x5b054
											v26 = *(int32_t *)(v12 + 196);
											v7 = v26;
											function_314d0(v26);
											g37 = *(int32_t *)(g23 - 0x6160);
											g38 = v7;
											sprintf();
											// branch -> 0x5b0dc
										} else {
											// 0x5b078
											v27 = *(char *)(v12 + 60);
											if (v27 == 1) {
												// 0x5b088
												*(char *)g36 = 1;
												// branch -> 0x5b0a4
											} else {
												// 0x5b094
												if (v27 == 2) {
													// 0x5b09c
													*(char *)g36 = 3;
													// branch -> 0x5b0a4
												}
											}
											// 0x5b0a4
											g34 = g35;
											g37 = g32 + 61;
											strcpy();
											v13 = g32;
											if (*(int32_t *)(v13 + 56) == 0) {
												// 0x5b0d4
												function_62584(v13);
												// branch -> 0x5b0dc
											} else {
												// 0x5b0bc
												g34 = g35;
												g37 = v13 + 125;
												strcpy();
												function_62320(g32);
												// branch -> 0x5b0dc
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x5af88
							v21 = v9 + 3016;
							g32 = v21;
							g31 = 5;
							v12 = v21;
							// branch -> 0x5b038
							// 0x5b038
							v25 = *(int32_t *)(v12 + 8);
							if (v25 == -1) {
								// 0x5b044
								// branch -> 0x5b0e0
							} else {
								// 0x5b04c
								if (v25 == 11) {
									// 0x5b054
									v26 = *(int32_t *)(v12 + 196);
									v7 = v26;
									function_314d0(v26);
									g37 = *(int32_t *)(g23 - 0x6160);
									g38 = v7;
									sprintf();
									// branch -> 0x5b0dc
								} else {
									// 0x5b078
									v27 = *(char *)(v12 + 60);
									if (v27 == 1) {
										// 0x5b088
										*(char *)g36 = 1;
										// branch -> 0x5b0a4
									} else {
										// 0x5b094
										if (v27 == 2) {
											// 0x5b09c
											*(char *)g36 = 3;
											// branch -> 0x5b0a4
										}
									}
									// 0x5b0a4
									g34 = g35;
									g37 = g32 + 61;
									strcpy();
									v13 = g32;
									if (*(int32_t *)(v13 + 56) == 0) {
										// 0x5b0d4
										function_62584(v13);
										// branch -> 0x5b0dc
									} else {
										// 0x5b0bc
										g34 = g35;
										g37 = v13 + 125;
										strcpy();
										function_62320(g32);
										// branch -> 0x5b0dc
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x5af94
					if (v8 >= 19) {
						// 0x5af9c
						if (v8 <= 24) {
							// 0x5afa4
							v22 = v7 + 3384;
							g32 = v22;
							g31 = 6;
							v12 = v22;
							// branch -> 0x5b038
							// 0x5b038
							v25 = *(int32_t *)(v12 + 8);
							if (v25 == -1) {
								// 0x5b044
								// branch -> 0x5b0e0
							} else {
								// 0x5b04c
								if (v25 == 11) {
									// 0x5b054
									v26 = *(int32_t *)(v12 + 196);
									v7 = v26;
									function_314d0(v26);
									g37 = *(int32_t *)(g23 - 0x6160);
									g38 = v7;
									sprintf();
									// branch -> 0x5b0dc
								} else {
									// 0x5b078
									v27 = *(char *)(v12 + 60);
									if (v27 == 1) {
										// 0x5b088
										*(char *)g36 = 1;
										// branch -> 0x5b0a4
									} else {
										// 0x5b094
										if (v27 == 2) {
											// 0x5b09c
											*(char *)g36 = 3;
											// branch -> 0x5b0a4
										}
									}
									// 0x5b0a4
									g34 = g35;
									g37 = g32 + 61;
									strcpy();
									v13 = g32;
									if (*(int32_t *)(v13 + 56) == 0) {
										// 0x5b0d4
										function_62584(v13);
										// branch -> 0x5b0dc
									} else {
										// 0x5b0bc
										g34 = g35;
										g37 = v13 + 125;
										strcpy();
										function_62320(g32);
										// branch -> 0x5b0dc
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x5afb0
					if (v8 >= 25) {
						// 0x5afb8
						if (v8 <= 64) {
							// 0x5afc0
							g34 = (int32_t) * (char *)(v7 + v8 + 0x4813);
							v10 = abs();
							if (v10 == 0) {
								// 0x5afd8
								// branch -> 0x5b0e0
							} else {
								// 0x5afe0
								g31 = v10 + 6;
								v23 = 368 * v10 + 3384 + v7;
								g32 = v23;
								v12 = v23;
								// branch -> 0x5b038
								// 0x5b038
								v25 = *(int32_t *)(v12 + 8);
								if (v25 == -1) {
									// 0x5b044
									// branch -> 0x5b0e0
								} else {
									// 0x5b04c
									if (v25 == 11) {
										// 0x5b054
										v26 = *(int32_t *)(v12 + 196);
										v7 = v26;
										function_314d0(v26);
										g37 = *(int32_t *)(g23 - 0x6160);
										g38 = v7;
										sprintf();
										// branch -> 0x5b0dc
									} else {
										// 0x5b078
										v27 = *(char *)(v12 + 60);
										if (v27 == 1) {
											// 0x5b088
											*(char *)g36 = 1;
											// branch -> 0x5b0a4
										} else {
											// 0x5b094
											if (v27 == 2) {
												// 0x5b09c
												*(char *)g36 = 3;
												// branch -> 0x5b0a4
											}
										}
										// 0x5b0a4
										g34 = g35;
										g37 = g32 + 61;
										strcpy();
										v13 = g32;
										if (*(int32_t *)(v13 + 56) == 0) {
											// 0x5b0d4
											function_62584(v13);
											// branch -> 0x5b0dc
										} else {
											// 0x5b0bc
											g34 = g35;
											g37 = v13 + 125;
											strcpy();
											function_62320(g32);
											// branch -> 0x5b0dc
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x5aff8
					if (v8 < 65) {
						// 0x5aff8
						v12 = g32;
						// branch -> 0x5b038
						// 0x5b038
						v25 = *(int32_t *)(v12 + 8);
						if (v25 == -1) {
							// 0x5b044
							// branch -> 0x5b0e0
						} else {
							// 0x5b04c
							if (v25 == 11) {
								// 0x5b054
								v26 = *(int32_t *)(v12 + 196);
								function_314d0(v26);
								g37 = *(int32_t *)(g23 - 0x6160);
								g38 = v26;
								sprintf();
								// branch -> 0x5b0dc
							} else {
								// 0x5b078
								v27 = *(char *)(v12 + 60);
								if (v27 == 1) {
									// 0x5b088
									*(char *)g36 = 1;
									// branch -> 0x5b0a4
								} else {
									// 0x5b094
									if (v27 == 2) {
										// 0x5b09c
										*(char *)g36 = 3;
										// branch -> 0x5b0a4
									}
								}
								// 0x5b0a4
								g34 = g35;
								g37 = g32 + 61;
								strcpy();
								v13 = g32;
								if (*(int32_t *)(v13 + 56) == 0) {
									// 0x5b0d4
									function_62584(v13);
									// branch -> 0x5b0dc
								} else {
									// 0x5b0bc
									g34 = g35;
									g37 = v13 + 125;
									strcpy();
									function_62320(g32);
									// branch -> 0x5b0dc
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x5b000
						*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
						v11 = 368 * v8 - 0x151c + v7;
						g32 = v11;
						if (*(int32_t *)(v11 + 8) == -1) {
							// 0x5b02c
							// branch -> 0x5b0e0
						} else {
							// 0x5b034
							g31 = g33 - 18;
							v12 = v11;
							// branch -> 0x5b038
							// 0x5b038
							v25 = *(int32_t *)(v12 + 8);
							if (v25 == -1) {
								// 0x5b044
								// branch -> 0x5b0e0
							} else {
								// 0x5b04c
								if (v25 == 11) {
									// 0x5b054
									v26 = *(int32_t *)(v12 + 196);
									function_314d0(v26);
									g37 = *(int32_t *)(g23 - 0x6160);
									g38 = v26;
									sprintf();
									// branch -> 0x5b0dc
								} else {
									// 0x5b078
									v27 = *(char *)(v12 + 60);
									if (v27 == 1) {
										// 0x5b088
										*(char *)g36 = 1;
										// branch -> 0x5b0a4
									} else {
										// 0x5b094
										if (v27 == 2) {
											// 0x5b09c
											*(char *)g36 = 3;
											// branch -> 0x5b0a4
										}
									}
									// 0x5b0a4
									g34 = g35;
									g37 = g32 + 61;
									strcpy();
									v13 = g32;
									if (*(int32_t *)(v13 + 56) == 0) {
										// 0x5b0d4
										function_62584(v13);
										// branch -> 0x5b0dc
									} else {
										// 0x5b0bc
										g34 = g35;
										g37 = v13 + 125;
										strcpy();
										function_62320(g32);
										// branch -> 0x5b0dc
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x5b038
				v25 = *(int32_t *)(v12 + 8);
				if (v25 == -1) {
					// 0x5b044
					// branch -> 0x5b0e0
				} else {
					// 0x5b04c
					if (v25 == 11) {
						// 0x5b054
						v26 = *(int32_t *)(v12 + 196);
						function_314d0(v26);
						g37 = *(int32_t *)(g23 - 0x6160);
						g38 = v26;
						sprintf();
						// branch -> 0x5b0dc
					} else {
						// 0x5b078
						v27 = *(char *)(v12 + 60);
						if (v27 == 1) {
							// 0x5b088
							*(char *)g36 = 1;
							// branch -> 0x5b0a4
						} else {
							// 0x5b094
							if (v27 == 2) {
								// 0x5b09c
								*(char *)g36 = 3;
								// branch -> 0x5b0a4
							}
						}
						// 0x5b0a4
						g34 = g35;
						g37 = g32 + 61;
						strcpy();
						v13 = g32;
						if (*(int32_t *)(v13 + 56) == 0) {
							// 0x5b0d4
							function_62584(v13);
							// branch -> 0x5b0dc
						} else {
							// 0x5b0bc
							g34 = g35;
							g37 = v13 + 125;
							strcpy();
							function_62320(g32);
							// branch -> 0x5b0dc
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x5b038
			v25 = *(int32_t *)(v12 + 8);
			if (v25 == -1) {
				// 0x5b044
				// branch -> 0x5b0e0
			} else {
				// 0x5b04c
				if (v25 == 11) {
					// 0x5b054
					v26 = *(int32_t *)(v12 + 196);
					function_314d0(v26);
					g37 = *(int32_t *)(g23 - 0x6160);
					g38 = v26;
					sprintf();
					// branch -> 0x5b0dc
				} else {
					// 0x5b078
					v27 = *(char *)(v12 + 60);
					if (v27 == 1) {
						// 0x5b088
						*(char *)g36 = 1;
						// branch -> 0x5b0a4
					} else {
						// 0x5b094
						if (v27 == 2) {
							// 0x5b09c
							*(char *)g36 = 3;
							// branch -> 0x5b0a4
						}
					}
					// 0x5b0a4
					g34 = g35;
					g37 = g32 + 61;
					strcpy();
					v13 = g32;
					if (*(int32_t *)(v13 + 56) == 0) {
						// 0x5b0d4
						function_62584(v13);
						// branch -> 0x5b0dc
					} else {
						// 0x5b0bc
						g34 = g35;
						g37 = v13 + 125;
						strcpy();
						function_62320(g32);
						// branch -> 0x5b0dc
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x5b038
		v25 = *(int32_t *)(v12 + 8);
		if (v25 == -1) {
			// 0x5b044
			// branch -> 0x5b0e0
		} else {
			// 0x5b04c
			if (v25 == 11) {
				// 0x5b054
				v26 = *(int32_t *)(v12 + 196);
				function_314d0(v26);
				g37 = *(int32_t *)(g23 - 0x6160);
				g38 = v26;
				sprintf();
				// branch -> 0x5b0dc
			} else {
				// 0x5b078
				v27 = *(char *)(v12 + 60);
				if (v27 == 1) {
					// 0x5b088
					*(char *)g36 = 1;
					// branch -> 0x5b0a4
				} else {
					// 0x5b094
					if (v27 == 2) {
						// 0x5b09c
						*(char *)g36 = 3;
						// branch -> 0x5b0a4
					}
				}
				// 0x5b0a4
				g34 = g35;
				g37 = g32 + 61;
				strcpy();
				v13 = g32;
				if (*(int32_t *)(v13 + 56) == 0) {
					// 0x5b0d4
					function_62584(v13);
					// branch -> 0x5b0dc
				} else {
					// 0x5b0bc
					g34 = g35;
					g37 = v13 + 125;
					strcpy();
					function_62320(g32);
					// branch -> 0x5b0dc
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x5b0f4 - 0x5b1e8
int32_t function_5b0f4(int32_t a1, int32_t a2)
{
	// 0x5b0f4
	g36 = a1;
	int32_t result2 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0x5b110
	uint32_t v1 = *(int32_t *)(result2 + 0x4828);               // 0x5b114
	int32_t v2 = *(int32_t *)(result2 + 164);                   // 0x5b11c
	g37 = 0;
	int32_t result; // 0x5b1e4
	if (v1 >= 1) {
		int32_t v3 = 0; // 0x5b174
		int32_t v4;     // 0x5b170
		while (true) {
			// 0x5b130
			int32_t v5; // 0x5b174
			int32_t v6; // 0x5b178
			if (*(int32_t *)(result2 + 3760) != -1) {
				int32_t v7 = *(int32_t *)(result2 + 3972); // 0x5b13c
				if (v7 != 21) {
					// 0x5b148
					if (v7 != 22) {
					lab_0x5b170:
						// 0x5b170
						v4 = result2 + 368;
						v5 = v3 + 1;
						g37 = v5;
						v6 = v1 - 1;
						if (v6 == 0) {
							// break -> 0x5b17c
							break;
						}
						v1 = v6;
						v3 = v5;
						result2 = v4;
						// continue -> 0x5b130
						continue;
					}
				}
				// 0x5b150
				if (*(int32_t *)(result2 + 3976) != v2) {
					goto lab_0x5b170;
				}
				// 0x5b15c
				function_591d8(a1);
				g34 = g36;
				result = function_5ca38();
				// branch -> 0x5b1d4
				// 0x5b1d4
				return result;
			}
			// 0x5b170
			v4 = result2 + 368;
			v5 = v3 + 1;
			g37 = v5;
			v6 = v1 - 1;
			if (v6 == 0) {
				// break -> 0x5b17c
				break;
			}
			v1 = v6;
			v3 = v5;
			result2 = v4;
			// continue -> 0x5b130
		}
		// 0x5b17c
		result2 = v4;
		// branch -> 0x5b17c
	}
	// 0x5b17c
	g37 = 0;
	int32_t v8 = 8; // 0x5b1d0
	int32_t v9 = 0; // 0x5b1cc
	// branch -> 0x5b188
	while (true) {
		// 0x5b188
		int32_t v10; // 0x5b1cc
		int32_t v11; // 0x5b1d0
		if (*(int32_t *)(result2 + 0x485c) != -1) {
			int32_t v12 = *(int32_t *)(result2 + 0x4930); // 0x5b194
			if (v12 != 21) {
				// 0x5b1a0
				if (v12 != 22) {
				lab_0x5b1c8:
					// 0x5b1c8
					v10 = v9 + 1;
					g37 = v10;
					v11 = v8 - 1;
					if (v11 == 0) {
						// break -> 0x5b1d4
						break;
					}
					v8 = v11;
					v9 = v10;
					result2 += 368;
					// continue -> 0x5b188
					continue;
				}
			}
			// 0x5b1a8
			if (*(int32_t *)(result2 + 0x4934) != v2) {
				goto lab_0x5b1c8;
			}
			// 0x5b1b4
			function_595cc(a1);
			g34 = g36;
			result = function_5ca38();
			// branch -> 0x5b1d4
			// 0x5b1d4
			return result;
		}
		// 0x5b1c8
		v10 = v9 + 1;
		g37 = v10;
		v11 = v8 - 1;
		if (v11 == 0) {
			// break -> 0x5b1d4
			break;
		}
		v8 = v11;
		v9 = v10;
		result2 += 368;
		// continue -> 0x5b188
	}
	// 0x5b1d4
	// branch -> 0x5b1d4
	// 0x5b1d4
	return result2;
}

// Address range: 0x5b1e8 - 0x5b3ac
int32_t function_5b1e8(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x5b1f4
	if (*(int32_t *)*(int32_t *)(g23 - 0x7744) != 1) {
		// 0x5b200
		return 0;
	}
	int32_t *v2 = (int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x5b218
	if (*(char *)*(int32_t *)(g23 - 0x7794) == 0) {
		int32_t v3 = *(int32_t *)(0x55ec * *v2 + v1 + 180); // 0x5b228
		if (*(int32_t *)(56 * v3 + *(int32_t *)(g23 - 0x769c) + 24) == 0) {
			// 0x5b240
			return 0;
		}
	}
	int32_t v4 = 0x55ec * *v2 + v1;          // 0x5b250
	uint32_t v5 = *(int32_t *)(v4 + 0x4828); // 0x5b254
	int32_t v6 = *(int32_t *)(v4 + 180);     // 0x5b25c
	if (v5 >= 1) {
		while (true) {
			// 0x5b26c
			int32_t v7; // 0x5b2a4
			if (*(int32_t *)(v4 + 3760) != -1) {
				int32_t v8 = *(int32_t *)(v4 + 3972); // 0x5b278
				if (v8 != 21) {
					// 0x5b284
					if (v8 != 22) {
					lab_0x5b2a0:
						// 0x5b2a0
						v7 = v5 - 1;
						if (v7 == 0) {
							// break -> 0x5b2a8
							break;
						}
						v5 = v7;
						v4 += 368;
						// continue -> 0x5b26c
						continue;
					}
				}
				// 0x5b28c
				if (*(int32_t *)(v4 + 3976) != v6) {
					goto lab_0x5b2a0;
				}
				// 0x5b298
				return 1;
			}
			// 0x5b2a0
			v7 = v5 - 1;
			if (v7 == 0) {
				// break -> 0x5b2a8
				break;
			}
			v5 = v7;
			v4 += 368;
			// continue -> 0x5b26c
		}
		// 0x5b2a8
		// branch -> 0x5b2a8
	}
	int32_t v9 = 2; // 0x5b3a0
	// branch -> 0x5b2b4
	while (true) {
		// 0x5b2b4
		if (*(int32_t *)(v4 + 0x485c) != -1) {
			// 0x5b2c0
			if (*(int32_t *)(v4 + 0x4930) < 23) {
				// 0x5b2d4
				if (*(int32_t *)(v4 + 0x4934) == v6) {
					// 0x5b2e0
					return 1;
				}
			}
		}
		// 0x5b2e8
		if (*(int32_t *)(v4 + 0x49cc) != -1) {
			// 0x5b2f8
			if (*(int32_t *)(v4 + 0x4aa0) < 23) {
				// 0x5b30c
				if (*(int32_t *)(v4 + 0x4aa4) == v6) {
					// 0x5b318
					return 1;
				}
			}
		}
		// 0x5b320
		if (*(int32_t *)(v4 + 0x4b3c) != -1) {
			// 0x5b334
			if (*(int32_t *)(v4 + 0x4c10) < 23) {
				// 0x5b348
				if (*(int32_t *)(v4 + 0x4c14) == v6) {
					// 0x5b354
					return 1;
				}
			}
		}
		// 0x5b35c
		int32_t v10; // 0x5b3a0
		if (*(int32_t *)(v4 + 0x4cac) != -1) {
			int32_t v11 = *(int32_t *)(v4 + 0x4d80); // 0x5b370
			if (v11 != 21) {
				// 0x5b37c
				if (v11 != 22) {
				lab_0x5b398:
					// 0x5b398
					v10 = v9 - 1;
					if (v10 == 0) {
						// break -> 0x5b3a4
						break;
					}
					v9 = v10;
					v4 += 1472;
					// continue -> 0x5b2b4
					continue;
				}
			}
			// 0x5b384
			if (*(int32_t *)(v4 + 0x4d84) != v6) {
				goto lab_0x5b398;
			}
			// 0x5b390
			return 1;
		}
		// 0x5b398
		v10 = v9 - 1;
		if (v10 == 0) {
			// break -> 0x5b3a4
			break;
		}
		v9 = v10;
		v4 += 1472;
		// continue -> 0x5b2b4
	}
	// 0x5b3a4
	return 0;
}

// Address range: 0x5b3ac - 0x5b414
int32_t function_5b3ac(int32_t a1, int32_t a2)
{
	// 0x5b3ac
	g34 = a1;
	int32_t result = g34;                                      // 0x5b3b0
	int32_t v1 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * result; // 0x5b3c0
	if (*(int32_t *)(v1 + 2656) == -1) {
		// 0x5b404
		return result;
	}
	// 0x5b3d0
	if (*(int32_t *)(v1 + 2868) == 23) {
		// 0x5b3dc
		if (*(int32_t *)(v1 + 2872) == *(int32_t *)(v1 + 180)) {
			int32_t *v2 = (int32_t *)(v1 + 2876); // 0x5b3ec
			uint32_t v3 = *v2;                    // 0x5b3ec
			int32_t result2;                      // 0x5b410
			if (v3 >= 1) {
				// 0x5b3f8
				*v2 = v3 - 1;
				result2 = function_5cbc8();
				// branch -> 0x5b404
			} else {
				result2 = result;
			}
			// 0x5b404
			return result2;
		}
	}
	// 0x5b404
	return result;
}

// Address range: 0x5b414 - 0x5b484
int32_t function_5b414(int32_t a1)
{
	// 0x5b414
	if (*(int32_t *)*(int32_t *)(g23 - 0x7744) != 1) {
		// 0x5b428
		return 0;
	}
	int32_t v1 = *(int32_t *)(g23 - 0x77ac);                           // 0x5b430
	int32_t v2 = 0x55ec * *(int32_t *)v1 + *(int32_t *)(g23 - 0x77a8); // 0x5b43c
	if (*(int32_t *)(v2 + 2656) == -1) {
		// 0x5b47c
		return 0;
	}
	// 0x5b44c
	if (*(int32_t *)(v2 + 2868) == 23) {
		// 0x5b458
		if (*(int32_t *)(v2 + 2872) == *(int32_t *)(v2 + 180)) {
			// 0x5b468
			if (*(int32_t *)(v2 + 2876) >= 1) {
				// 0x5b474
				return 1;
			}
			// 0x5b47c
			return 0;
		}
	}
	// 0x5b47c
	return 0;
}

// Address range: 0x5b484 - 0x5b530
int32_t function_5b484(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x770c);       // r6
	char v2 = *(char *)*(int32_t *)(g23 - 0x772c); // 0x5b49c
	int32_t v3 = *(int32_t *)(g23 - 0x77ac);       // 0x5b4a0
	int32_t v4 = v2;                               // 0x5b4a4
	*(int32_t *)*(int32_t *)(g23 - 0x7710) = v4;
	int32_t v5 = 368 * v4 + 0x55ec * *(int32_t *)v3 + *(int32_t *)(g23 - 0x77a8); // 0x5b4e8
	if (v2 > 46) {
		// 0x5b4d8
		*(int32_t *)v1 = *(int32_t *)(v5 + 1416);
		// branch -> 0x5b4f4
	} else {
		// 0x5b4b8
		*(int32_t *)v1 = *(int32_t *)(v5 + 1372);
		// branch -> 0x5b4f4
	}
	// 0x5b4f4
	*(int32_t *)*(int32_t *)(g23 - 0x7704) = 1;
	*(int32_t *)*(int32_t *)(g23 - 0x7708) = 0;
	int32_t v6 = *(int32_t *)(g23 - 0x76d0); // 0x5b510
	int32_t result;                          // 0x5b52c
	if (*(int32_t *)v6 != 0) {
		// 0x5b51c
		result = function_31f44();
		// branch -> 0x5b520
	} else {
		result = v6;
	}
	// 0x5b520
	return result;
}

// Address range: 0x5b530 - 0x5b8cc
int32_t UseInvItem(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x5b534
	g28 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0x5b53c
	g36 = v2;
	int32_t v3 = 0x55ec * a1; // 0x5b540
	g32 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x77e4); // 0x5b544
	g33 = *(int32_t *)(g23 - 0x71dc);
	int32_t v5 = v2 + v3;                    // 0x5b54c
	int32_t v6 = *(int32_t *)(g23 - 0x71d8); // 0x5b550
	g35 = v6;
	int32_t v7 = *(int32_t *)(g23 - 0x7704); // 0x5b554
	int32_t v8 = *(int32_t *)(g23 - 0x769c); // r0
	int32_t v9 = *(int32_t *)(g23 - 0x77ac); // 0x5b56c
	int32_t v10 = v9;                        // r3
	if (*(char *)(v5 + 313) != 0) {
		// 0x5b574
		if (*(int32_t *)(v5 + 404) == 0) {
			// 0x5b580
			if (a1 == *(int32_t *)v9) {
				// 0x5b58c
				// branch -> 0x5b8b8
				// 0x5b8b8
				g10 = v1;
				return 1;
			}
		}
	}
	// 0x5b594
	if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 1) {
		// 0x5b5ac
		if (*(char *)*(int32_t *)(g23 - 0x7764) == 0) {
			if (a2 > 5) {
				// 0x5b5d4
				int32_t v11;       // 0x5b784
				int32_t v12;       // 0x5b824
				int32_t v13;       // 0x5b82c
				int32_t v14;       // 0x5b860
				int32_t v15;       // 0x5b888
				int32_t v16;       // 0x5b704
				int32_t *v17;      // 0x5b79c
				int32_t v18;       // 0x5b628
				unsigned char v19; // 0x5b65c
				unsigned char v20; // 0x5b6b8
				unsigned char v21; // 0x5b730
				int32_t v22;       // 0x5b7b8
				int32_t v23;       // 0x5b7d0
				int32_t v24;       // 0x5b804
				int32_t v25;       // 0x5b82c
				int32_t v26;       // 0x5b858
				int32_t v27;       // 0x5b830
				if (a2 > 46) {
					// 0x5b5f8
					if (*(int32_t *)*(int32_t *)(g23 - 0x76d0) != 0) {
						// 0x5b608
						// branch -> 0x5b8b8
						// 0x5b8b8
						g10 = v1;
						return 1;
					}
					// 0x5b610
					// branch -> 0x5b628
					// 0x5b628
					v11 = 368 * a2 - 0x4390 + v3 + 0x4854 + v2;
					g30 = v11;
					v18 = *(int32_t *)(v11 + 360);
					if (v18 == 18) {
						// 0x5b700
						v16 = g23 + 0x3858;
						if (*(int32_t *)(76 * v18 + v16 + 64) == 0) {
							// 0x5b718
							// branch -> 0x5b8b8
							// 0x5b8b8
							g10 = v1;
							return 0;
						}
						// 0x5b720
						if (*(int32_t *)(v11 + 356) == 0) {
							// 0x5b72c
							v21 = *(char *)(v5 + 348);
							if (v21 != 0) {
								// 0x5b748
								if (v21 == 1) {
									// 0x5b754
									g34 = 623;
									PlaySFX(623);
									// branch -> 0x5b770
								} else {
									// 0x5b760
									if (v21 == 2) {
										// 0x5b768
										g34 = 520;
										PlaySFX(520);
										// branch -> 0x5b770
									}
								}
								// 0x5b770
								// branch -> 0x5b8b8
								// 0x5b8b8
								g10 = v1;
								return 1;
							}
							// 0x5b73c
							g34 = 726;
							PlaySFX(726);
							// branch -> 0x5b770
							// 0x5b770
							// branch -> 0x5b8b8
							// 0x5b8b8
							g10 = v1;
							return 1;
						}
						// 0x5b778
						if (*(int32_t *)(v11 + 220) == 0) {
							// 0x5b784
							if (*(int32_t *)(v11 + 8) == 11) {
								// 0x5b790
								function_5b484(11, v16);
								// branch -> 0x5b8b8
								// 0x5b8b8
								g10 = v1;
								return 1;
							}
						}
						// 0x5b79c
						v17 = (int32_t *)v7;
						v13 = v11;
						if (*v17 != 0) {
							// 0x5b7a8
							*v17 = 0;
							*(int32_t *)*(int32_t *)(g23 - 0x7708) = 0;
							v13 = g30;
							// branch -> 0x5b7b8
						}
						// 0x5b7b8
						v22 = *(int32_t *)(v13 + 220);
						if (v22 == 21) {
							// 0x5b7c4
							if (*(char *)v4 == 0) {
								// 0x5b7d0
								v23 = *(int32_t *)(v13 + 224);
								if (*(int32_t *)(v8 + 56 * v23 + 24) == 0) {
									// 0x5b7e8
									// branch -> 0x5b8b8
									// 0x5b8b8
									g10 = v1;
									return 1;
								}
							}
						}
						// 0x5b7f0
						if (v22 == 22) {
							// 0x5b7f8
							if (*(char *)v4 == 0) {
								// 0x5b804
								v24 = *(int32_t *)(v13 + 224);
								if (*(int32_t *)(v8 + 56 * v24 + 24) == 0) {
									// 0x5b81c
									// branch -> 0x5b8b8
									// 0x5b8b8
									g10 = v1;
									return 1;
								}
							}
						}
						// 0x5b824
						v12 = g23;
						v25 = *(int32_t *)(v13 + 192);
						v27 = (int32_t) * (char *)(v25 + *(int32_t *)(v12 - 0x71d0));
						if (v22 == 24) {
							// 0x5b838
							g34 = 65;
							PlaySFX(65);
							// branch -> 0x5b860
						} else {
							// 0x5b844
							if (g28 == *(int32_t *)v10) {
								// 0x5b850
								v26 = *(int32_t *)(*(int32_t *)(v12 - 0x71d4) + 4 * v27);
								g34 = v26;
								PlaySFX(v26);
								// branch -> 0x5b860
							}
						}
						// 0x5b860
						v14 = g30;
						function_627d0(g28, *(int32_t *)(v14 + 220), *(int32_t *)(v14 + 224));
						if (g29 != 0) {
							// 0x5b878
							g37 = g31;
							function_595cc(g28);
							// branch -> 0x5b8b4
							// 0x5b8b4
							// branch -> 0x5b8b8
							// 0x5b8b8
							g10 = v1;
							return 1;
						}
						// 0x5b888
						v15 = g31;
						if (*(int32_t *)(g36 + 368 * v15 + g32 + 3972) == 42) {
							// 0x5b8a0
							// branch -> 0x5b8b8
						} else {
							// 0x5b8a8
							g37 = v15;
							function_591d8(g28);
							// branch -> 0x5b8b4
							// 0x5b8b4
							// branch -> 0x5b8b8
						}
						// 0x5b8b8
						g10 = v1;
						return 1;
					}
					// 0x5b634
					if (v18 > 18) {
						// 0x5b644
						if (v18 == 19) {
							// 0x5b6a4
							g34 = 47;
							PlaySFX(47);
							*(int32_t *)g35 = 10;
							v20 = *(char *)(g32 + g36 + 348);
							if (v20 == 0) {
								// 0x5b6c4
								*(int32_t *)g33 = 748;
								// branch -> 0x5b6f8
								// 0x5b6f8
								// branch -> 0x5b8b8
								// 0x5b8b8
								g10 = v1;
								return 1;
							}
							// 0x5b6d0
							if (v20 == 1) {
								// 0x5b6dc
								*(int32_t *)g33 = 639;
								// branch -> 0x5b6f8
							} else {
								// 0x5b6e8
								if (v20 == 2) {
									// 0x5b6f0
									*(int32_t *)g33 = 536;
									// branch -> 0x5b6f8
								}
							}
							// 0x5b6f8
							// branch -> 0x5b8b8
							// 0x5b8b8
							g10 = v1;
							return 1;
						}
					} else {
						// 0x5b638
						if (v18 > 16) {
							// 0x5b650
							*(int32_t *)v6 = 10;
							v19 = *(char *)(v5 + 348);
							if (v19 == 0) {
								// 0x5b668
								*(int32_t *)g33 = 815;
								// branch -> 0x5b69c
								// 0x5b69c
								// branch -> 0x5b8b8
								// 0x5b8b8
								g10 = v1;
								return 1;
							}
							// 0x5b674
							if (v19 == 1) {
								// 0x5b680
								*(int32_t *)g33 = 706;
								// branch -> 0x5b69c
							} else {
								// 0x5b68c
								if (v19 == 2) {
									// 0x5b694
									*(int32_t *)g33 = 603;
									// branch -> 0x5b69c
								}
							}
							// 0x5b69c
							// branch -> 0x5b8b8
							// 0x5b8b8
							g10 = v1;
							return 1;
						}
					}
					// 0x5b700
					v16 = g23 + 0x3858;
					if (*(int32_t *)(76 * v18 + v16 + 64) == 0) {
						// 0x5b718
						// branch -> 0x5b8b8
						// 0x5b8b8
						g10 = v1;
						return 0;
					}
					// 0x5b720
					if (*(int32_t *)(v11 + 356) == 0) {
						// 0x5b72c
						v21 = *(char *)(v5 + 348);
						if (v21 != 0) {
							// 0x5b748
							if (v21 == 1) {
								// 0x5b754
								g34 = 623;
								PlaySFX(623);
								// branch -> 0x5b770
							} else {
								// 0x5b760
								if (v21 == 2) {
									// 0x5b768
									g34 = 520;
									PlaySFX(520);
									// branch -> 0x5b770
								}
							}
							// 0x5b770
							// branch -> 0x5b8b8
							// 0x5b8b8
							g10 = v1;
							return 1;
						}
						// 0x5b73c
						g34 = 726;
						PlaySFX(726);
						// branch -> 0x5b770
						// 0x5b770
						// branch -> 0x5b8b8
						// 0x5b8b8
						g10 = v1;
						return 1;
					}
					// 0x5b778
					if (*(int32_t *)(v11 + 220) == 0) {
						// 0x5b784
						if (*(int32_t *)(v11 + 8) == 11) {
							// 0x5b790
							function_5b484(11, v16);
							// branch -> 0x5b8b8
							// 0x5b8b8
							g10 = v1;
							return 1;
						}
					}
					// 0x5b79c
					v17 = (int32_t *)v7;
					v13 = v11;
					if (*v17 != 0) {
						// 0x5b7a8
						*v17 = 0;
						*(int32_t *)*(int32_t *)(g23 - 0x7708) = 0;
						v13 = g30;
						// branch -> 0x5b7b8
					}
					// 0x5b7b8
					v22 = *(int32_t *)(v13 + 220);
					if (v22 == 21) {
						// 0x5b7c4
						if (*(char *)v4 == 0) {
							// 0x5b7d0
							v23 = *(int32_t *)(v13 + 224);
							if (*(int32_t *)(v8 + 56 * v23 + 24) == 0) {
								// 0x5b7e8
								// branch -> 0x5b8b8
								// 0x5b8b8
								g10 = v1;
								return 1;
							}
						}
					}
					// 0x5b7f0
					if (v22 == 22) {
						// 0x5b7f8
						if (*(char *)v4 == 0) {
							// 0x5b804
							v24 = *(int32_t *)(v13 + 224);
							if (*(int32_t *)(v8 + 56 * v24 + 24) == 0) {
								// 0x5b81c
								// branch -> 0x5b8b8
								// 0x5b8b8
								g10 = v1;
								return 1;
							}
						}
					}
					// 0x5b824
					v12 = g23;
					v25 = *(int32_t *)(v13 + 192);
					v27 = (int32_t) * (char *)(v25 + *(int32_t *)(v12 - 0x71d0));
					if (v22 == 24) {
						// 0x5b838
						g34 = 65;
						PlaySFX(65);
						// branch -> 0x5b860
					} else {
						// 0x5b844
						if (g28 == *(int32_t *)v10) {
							// 0x5b850
							v26 = *(int32_t *)(*(int32_t *)(v12 - 0x71d4) + 4 * v27);
							g34 = v26;
							PlaySFX(v26);
							// branch -> 0x5b860
						}
					}
					// 0x5b860
					v14 = g30;
					function_627d0(g28, *(int32_t *)(v14 + 220), *(int32_t *)(v14 + 224));
					if (g29 != 0) {
						// 0x5b878
						g37 = g31;
						function_595cc(g28);
						// branch -> 0x5b8b4
						// 0x5b8b4
						// branch -> 0x5b8b8
						// 0x5b8b8
						g10 = v1;
						return 1;
					}
					// 0x5b888
					v15 = g31;
					if (*(int32_t *)(g36 + 368 * v15 + g32 + 3972) == 42) {
						// 0x5b8a0
						// branch -> 0x5b8b8
					} else {
						// 0x5b8a8
						g37 = v15;
						function_591d8(g28);
						// branch -> 0x5b8b4
						// 0x5b8b4
						// branch -> 0x5b8b8
					}
					// 0x5b8b8
					g10 = v1;
					return 1;
				}
				// 0x5b5dc
				// branch -> 0x5b628
				// 0x5b628
				v11 = 368 * a2 - 2576 + v3 + 3752 + v2;
				g30 = v11;
				v18 = *(int32_t *)(v11 + 360);
				if (v18 != 18) {
					// 0x5b634
					if (v18 > 18) {
						// 0x5b644
						if (v18 == 19) {
							// 0x5b6a4
							g34 = 47;
							PlaySFX(47);
							*(int32_t *)g35 = 10;
							v20 = *(char *)(g32 + g36 + 348);
							if (v20 == 0) {
								// 0x5b6c4
								*(int32_t *)g33 = 748;
								// branch -> 0x5b6f8
								// 0x5b6f8
								// branch -> 0x5b8b8
								// 0x5b8b8
								g10 = v1;
								return 1;
							}
							// 0x5b6d0
							if (v20 == 1) {
								// 0x5b6dc
								*(int32_t *)g33 = 639;
								// branch -> 0x5b6f8
							} else {
								// 0x5b6e8
								if (v20 == 2) {
									// 0x5b6f0
									*(int32_t *)g33 = 536;
									// branch -> 0x5b6f8
								}
							}
							// 0x5b6f8
							// branch -> 0x5b8b8
							// 0x5b8b8
							g10 = v1;
							return 1;
						}
					} else {
						// 0x5b638
						if (v18 > 16) {
							// 0x5b650
							*(int32_t *)v6 = 10;
							v19 = *(char *)(v5 + 348);
							if (v19 != 0) {
								// 0x5b674
								if (v19 == 1) {
									// 0x5b680
									*(int32_t *)g33 = 706;
									// branch -> 0x5b69c
								} else {
									// 0x5b68c
									if (v19 == 2) {
										// 0x5b694
										*(int32_t *)g33 = 603;
										// branch -> 0x5b69c
									}
								}
								// 0x5b69c
								// branch -> 0x5b8b8
								// 0x5b8b8
								g10 = v1;
								return 1;
							}
							// 0x5b668
							v8 = 815;
							*(int32_t *)g33 = 815;
							// branch -> 0x5b69c
							// 0x5b69c
							v10 = 1;
							// branch -> 0x5b8b8
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x5b700
					v16 = g23 + 0x3858;
					if (*(int32_t *)(76 * v18 + v16 + 64) == 0) {
						// 0x5b718
						v10 = 0;
						// branch -> 0x5b8b8
					} else {
						// 0x5b720
						if (*(int32_t *)(v11 + 356) == 0) {
							// 0x5b72c
							v21 = *(char *)(v5 + 348);
							int32_t v28 = v21; // 0x5b734
							v8 = v28;
							if (v21 == 0) {
								// 0x5b73c
								g34 = 726;
								PlaySFX(726);
								// branch -> 0x5b770
							} else {
								// 0x5b748
								v8 = v28;
								if (v21 == 1) {
									// 0x5b754
									g34 = 623;
									PlaySFX(623);
									// branch -> 0x5b770
								} else {
									// 0x5b760
									if (v21 == 2) {
										// 0x5b768
										g34 = 520;
										PlaySFX(520);
										// branch -> 0x5b770
									}
								}
								// 0x5b770
								// branch -> 0x5b8b8
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x5b770
							v10 = 1;
							// branch -> 0x5b8b8
						} else {
							// 0x5b778
							if (*(int32_t *)(v11 + 220) == 0) {
								// 0x5b784
								if (*(int32_t *)(v11 + 8) == 11) {
									// 0x5b790
									function_5b484(11, v16);
									v10 = 1;
									// branch -> 0x5b8b8
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x5b79c
							v17 = (int32_t *)v7;
							v13 = v11;
							if (*v17 != 0) {
								// 0x5b7a8
								*v17 = 0;
								*(int32_t *)*(int32_t *)(g23 - 0x7708) = 0;
								v13 = g30;
								// branch -> 0x5b7b8
							}
							// 0x5b7b8
							v22 = *(int32_t *)(v13 + 220);
							if (v22 == 21) {
								// 0x5b7c4
								if (*(char *)v4 == 0) {
									// 0x5b7d0
									v23 = *(int32_t *)(v13 + 224);
									if (*(int32_t *)(v8 + 56 * v23 + 24) == 0) {
										// 0x5b7e8
										v10 = 1;
										// branch -> 0x5b8b8
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// 0x5b7f0
							if (v22 == 22) {
								// 0x5b7f8
								if (*(char *)v4 == 0) {
									// 0x5b804
									v24 = *(int32_t *)(v13 + 224);
									if (*(int32_t *)(v8 + 56 * v24 + 24) == 0) {
										// 0x5b81c
										v10 = 1;
										// branch -> 0x5b8b8
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// 0x5b824
							v12 = g23;
							v25 = *(int32_t *)(v13 + 192);
							v8 = v25;
							v27 = (int32_t) * (char *)(v25 + *(int32_t *)(v12 - 0x71d0));
							if (v22 == 24) {
								// 0x5b838
								g34 = 65;
								PlaySFX(65);
								// branch -> 0x5b860
							} else {
								int32_t v29 = *(int32_t *)v10; // 0x5b844
								v8 = v29;
								if (g28 == v29) {
									int32_t v30 = 4 * v27; // 0x5b854
									v8 = v30;
									v26 = *(int32_t *)(*(int32_t *)(v12 - 0x71d4) + v30);
									g34 = v26;
									PlaySFX(v26);
									// branch -> 0x5b860
								}
							}
							// 0x5b860
							v14 = g30;
							function_627d0(g28, *(int32_t *)(v14 + 220), *(int32_t *)(v14 + 224));
							if (g29 == 0) {
								// 0x5b888
								v15 = g31;
								int32_t v31 = *(int32_t *)(g36 + 368 * v15 + g32 + 3972); // 0x5b894
								v8 = v31;
								if (v31 == 42) {
									// 0x5b8a0
									v10 = 1;
									// branch -> 0x5b8b8
								} else {
									// 0x5b8a8
									g37 = v15;
									function_591d8(g28);
									// branch -> 0x5b8b4
									// 0x5b8b4
									v10 = 1;
									// branch -> 0x5b8b8
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x5b878
								g37 = g31;
								function_595cc(g28);
								// branch -> 0x5b8b4
								// 0x5b8b4
								v10 = 1;
								// branch -> 0x5b8b8
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x5b700
				v16 = g23 + 0x3858;
				if (*(int32_t *)(76 * v18 + v16 + 64) == 0) {
					// 0x5b718
					// branch -> 0x5b8b8
				} else {
					// 0x5b720
					if (*(int32_t *)(v11 + 356) == 0) {
						// 0x5b72c
						v21 = *(char *)(v5 + 348);
						if (v21 == 0) {
							// 0x5b73c
							g34 = 726;
							PlaySFX(726);
							// branch -> 0x5b770
						} else {
							// 0x5b748
							if (v21 == 1) {
								// 0x5b754
								g34 = 623;
								PlaySFX(623);
								// branch -> 0x5b770
							} else {
								// 0x5b760
								if (v21 == 2) {
									// 0x5b768
									g34 = 520;
									PlaySFX(520);
									// branch -> 0x5b770
								}
							}
							// 0x5b770
							// branch -> 0x5b8b8
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0x5b770
						// branch -> 0x5b8b8
					} else {
						// 0x5b778
						if (*(int32_t *)(v11 + 220) == 0) {
							// 0x5b784
							if (*(int32_t *)(v11 + 8) == 11) {
								// 0x5b790
								function_5b484(11, v16);
								v10 = 1;
								// branch -> 0x5b8b8
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x5b79c
						v17 = (int32_t *)v7;
						v13 = v11;
						if (*v17 != 0) {
							// 0x5b7a8
							*v17 = 0;
							*(int32_t *)*(int32_t *)(g23 - 0x7708) = 0;
							v13 = g30;
							// branch -> 0x5b7b8
						}
						// 0x5b7b8
						v22 = *(int32_t *)(v13 + 220);
						if (v22 == 21) {
							// 0x5b7c4
							if (*(char *)v4 == 0) {
								// 0x5b7d0
								v23 = *(int32_t *)(v13 + 224);
								if (*(int32_t *)(v8 + 56 * v23 + 24) == 0) {
									// 0x5b7e8
									v10 = 1;
									// branch -> 0x5b8b8
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// 0x5b7f0
						if (v22 == 22) {
							// 0x5b7f8
							if (*(char *)v4 == 0) {
								// 0x5b804
								v24 = *(int32_t *)(v13 + 224);
								if (*(int32_t *)(v8 + 56 * v24 + 24) == 0) {
									// 0x5b81c
									v10 = 1;
									// branch -> 0x5b8b8
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// 0x5b824
						v12 = g23;
						v25 = *(int32_t *)(v13 + 192);
						v27 = (int32_t) * (char *)(v25 + *(int32_t *)(v12 - 0x71d0));
						if (v22 == 24) {
							// 0x5b838
							g34 = 65;
							PlaySFX(65);
							// branch -> 0x5b860
						} else {
							// 0x5b844
							if (g28 == *(int32_t *)v10) {
								// 0x5b850
								v26 = *(int32_t *)(*(int32_t *)(v12 - 0x71d4) + 4 * v27);
								g34 = v26;
								PlaySFX(v26);
								// branch -> 0x5b860
							}
						}
						// 0x5b860
						v14 = g30;
						function_627d0(g28, *(int32_t *)(v14 + 220), *(int32_t *)(v14 + 224));
						if (g29 == 0) {
							// 0x5b888
							v15 = g31;
							if (*(int32_t *)(g36 + 368 * v15 + g32 + 3972) == 42) {
								// 0x5b8a0
								// branch -> 0x5b8b8
							} else {
								// 0x5b8a8
								g37 = v15;
								function_591d8(g28);
								// branch -> 0x5b8b4
								// 0x5b8b4
								// branch -> 0x5b8b8
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x5b878
							g37 = g31;
							function_595cc(g28);
							// branch -> 0x5b8b4
							// 0x5b8b4
							// branch -> 0x5b8b8
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x5b8cc - 0x5b990
int32_t DoTelekinesis(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x5b8cc
	g36 = *(int32_t *)(g23 - 0x7750);
	char v1 = *(char *)*(int32_t *)(g23 - 0x774c); // 0x5b8e4
	int32_t v2 = g23;                              // 0x5b914
	if (v1 != -1) {
		// 0x5b8f4
		NetSendCmdParam1(1, 27, (int32_t)v1);
		v2 = g23;
		// branch -> 0x5b900
	}
	unsigned char v3 = *(char *)*(int32_t *)(v2 - 0x7748); // 0x5b904
	int32_t v4 = v3;                                       // 0x5b904
	g40 = v4;
	if (v3 != -1) {
		// 0x5b914
		function_8b594(1, 40, *(int32_t *)*(int32_t *)(v2 - 0x77ac) % 256, v4);
		// branch -> 0x5b930
	}
	int32_t v5 = *(int32_t *)g36; // 0x5b930
	if (v5 == -1) {
		// 0x5b974
		g34 = 1;
		return function_324ec(1);
	}
	// 0x5b93c
	if (function_7bbf4(v5) == 0) {
		uint32_t v6 = *(int32_t *)g36; // 0x5b948
		if (*(int32_t *)(*(int32_t *)(g23 - 0x7754) + 232 * v6 + 212) == 0) {
			// 0x5b964
			NetSendCmdParam1(1, 28, v6 % 0x10000);
			// branch -> 0x5b974
		}
	}
	// 0x5b974
	g34 = 1;
	return function_324ec(1);
}

// Address range: 0x5b990 - 0x5bab0
int32_t function_5b990(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x76bc);               // 0x5b998
	int32_t v2 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0x5b99c
	int32_t v3 = v2;                                       // r7
	int32_t result = 0;                                    // r3
	int32_t v4 = 255;                                      // r0
	int32_t v5 = v2;                                       // 0x5b9bc
	if (*(int32_t *)(v2 + 0x485c) == 11) {
		// 0x5b9b4
		result = *(int32_t *)(v2 + 0x4918);
		*(int32_t *)v1 = 255;
		v5 = v3;
		// branch -> 0x5b9bc
	}
	int32_t v6 = v5 + 368; // 0x5b9bc
	int32_t v7 = v6;       // 0x5b9d8
	if (*(int32_t *)(v5 + 0x49cc) == 11) {
		// 0x5b9cc
		*(int32_t *)v1 = v4;
		result += *(int32_t *)(v5 + 0x4a88);
		v7 = v6;
		// branch -> 0x5b9d8
	}
	int32_t v8 = v7 + 368; // 0x5b9dc
	int32_t v9 = v8;       // 0x5b9f4
	if (*(int32_t *)(v7 + 0x49cc) == 11) {
		// 0x5b9e8
		*(int32_t *)v1 = v4;
		result += *(int32_t *)(v7 + 0x4a88);
		v9 = v8;
		// branch -> 0x5b9f4
	}
	int32_t v10 = v9 + 368; // 0x5b9f8
	int32_t v11 = v10;      // 0x5ba10
	if (*(int32_t *)(v9 + 0x49cc) == 11) {
		// 0x5ba04
		*(int32_t *)v1 = v4;
		result += *(int32_t *)(v9 + 0x4a88);
		v11 = v10;
		// branch -> 0x5ba10
	}
	int32_t v12 = v11 + 368; // 0x5ba14
	int32_t v13 = v12;       // 0x5ba2c
	if (*(int32_t *)(v11 + 0x49cc) == 11) {
		// 0x5ba20
		*(int32_t *)v1 = v4;
		result += *(int32_t *)(v11 + 0x4a88);
		v13 = v12;
		// branch -> 0x5ba2c
	}
	int32_t v14 = v13 + 368; // 0x5ba30
	int32_t v15 = v14;       // 0x5ba48
	if (*(int32_t *)(v13 + 0x49cc) == 11) {
		// 0x5ba3c
		*(int32_t *)v1 = v4;
		result += *(int32_t *)(v13 + 0x4a88);
		v15 = v14;
		// branch -> 0x5ba48
	}
	int32_t v16 = v15 + 368; // 0x5ba4c
	int32_t v17 = v16;       // 0x5ba64
	if (*(int32_t *)(v15 + 0x49cc) == 11) {
		// 0x5ba58
		*(int32_t *)v1 = v4;
		result += *(int32_t *)(v15 + 0x4a88);
		v17 = v16;
		// branch -> 0x5ba64
	}
	// 0x5ba64
	if (*(int32_t *)(v17 + 0x49cc) == 11) {
		// 0x5ba74
		*(int32_t *)v1 = v4;
		result += *(int32_t *)(v17 + 0x4a88);
		// branch -> 0x5ba80
	}
	int32_t v18 = *(int32_t *)(v3 + 0x4828); // 0x5ba80
	if (v18 < 1) {
		// bb
		return result;
	}
	while (true) {
		// 0x5ba90
		if (*(int32_t *)(v3 + 3760) == 11) {
			// 0x5ba9c
			result += *(int32_t *)(v3 + 3948);
			// branch -> 0x5baa4
		}
		int32_t v19 = v18 - 1; // 0x5baa8
		if (v19 == 0) {
			// break -> 0x5baac
			break;
		}
		v18 = v19;
		v3 += 368;
		// continue -> 0x5ba90
	}
	// 0x5baac
	return result;
}

// Address range: 0x5bab0 - 0x5bb10
int32_t function_5bab0(int32_t a1)
{
	// 0x5bab0
	int32_t result;
	if (function_5a694() != 0) {
		uint32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x765c); // 0x5badc
		function_8ba58(1, 10, *(int32_t *)*(int32_t *)(g23 - 0x7658) % 256, v1 % 256);
		g34 = 1;
		function_324ec(1);
		result = 1;
		// branch -> 0x5bb00
	} else {
		result = 0;
	}
	// 0x5bb00
	return result;
}
