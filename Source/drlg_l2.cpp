// Address range: 0x3d888 - 0x3d910
int32_t InitDungeon(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7330); // 0x3d888
	int32_t v2 = 0;                          // r8
	int32_t v3 = *(int32_t *)(g23 - 0x7514); // 0x3d890
	                                         // branch -> 0x3d894
lab_0x3d894:
	while (true) {
		int32_t v4 = v1;     // r4
		int32_t v5 = 5;      // ctr
		int32_t v6 = v3;     // r5
		int32_t result = 32; // r3
		int32_t v7 = 0;      // r0
		int32_t v8 = v1;     // 0x3d8ac
		char v9 = 32;
		// branch -> 0x3d8ac
		while (true) {
			// 0x3d8ac
			*(char *)v8 = v9;
			*(char *)v6 = (char)v7;
			*(char *)(v4 + 40) = (char)result;
			*(char *)(v6 + 40) = (char)v7;
			*(char *)(v4 + 80) = (char)result;
			*(char *)(v6 + 80) = (char)v7;
			*(char *)(v4 + 120) = (char)result;
			*(char *)(v6 + 120) = (char)v7;
			*(char *)(v4 + 160) = (char)result;
			*(char *)(v6 + 160) = (char)v7;
			*(char *)(v4 + 200) = (char)result;
			*(char *)(v6 + 200) = (char)v7;
			*(char *)(v4 + 240) = (char)result;
			*(char *)(v6 + 240) = (char)v7;
			*(char *)(v4 + 280) = (char)result;
			v4 += 320;
			*(char *)(v6 + 280) = (char)v7;
			v6 += 320;
			int32_t v10 = v5 - 1; // 0x3d8f4
			v5 = v10;
			if (v10 == 0) {
				int32_t v11 = v2 + 1; // 0x3d8f8
				v2 = v11;
				if (v11 >= 40) {
					// break (via goto) -> 0x3d90c
					goto lab_0x3d90c;
				}
				v3++;
				v1++;
				// continue (via goto) -> 0x3d894
				goto lab_0x3d894;
			} else {
				// 0x3d8ac
				v8 = v4;
				v9 = result;
				// branch -> 0x3d8ac
				continue;
			}
		}
	lab_0x3d90c:
		// 0x3d90c
		return result;
	}
}

// Address range: 0x40200 - 0x4052c
int32_t L2LockoutFix(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x40200
	int32_t v2 = 0;                          // r10
	int32_t v3 = *(int32_t *)(g23 - 0x7514); // r6
	// branch -> 0x40210
	int32_t v4; // ctr
	int32_t v5; // r4
	int32_t v6; // r7
	while (true) {
		// 0x40210
		v4 = 8;
		v6 = v1;
		int32_t v7 = 0; // r9
		v5 = 1;
		int32_t v8 = 2;  // r0
		int32_t v9 = v1; // 0x40240
		// branch -> 0x40228
		while (true) {
			char *v10 = (char *)v9; // 0x40228
			int32_t v11 = v9;       // 0x4025c
			int32_t v12;            // 0x40260
			char *v13;              // 0x40244
			if (*v10 == 4) {
				// 0x40234
				if (*(char *)(v9 - 40) != 3) {
					// 0x40240
					*v10 = (char)v5;
					v11 = v6;
					// branch -> 0x40244
				} else {
					v11 = v9;
				}
				// 0x40244
				v13 = (char *)v11;
				v12 = v11;
				if (*v13 == 5) {
				lab_0x40250:
					// 0x40250
					if (*(char *)(v11 - 1) != 3) {
						// 0x4025c
						*v13 = (char)v8;
						v12 = v6;
						// branch -> 0x40260
					} else {
						v12 = v11;
					}
				}
			lab_0x40260:;
				int32_t v14 = v12 + 40;  // 0x40260
				char *v15 = (char *)v14; // 0x40260
				v6 = v14;
				int32_t v16 = v14; // 0x40294
				if (*v15 == 4) {
					// 0x4026c
					if (*(char *)v12 != 3) {
						// 0x40278
						*v15 = (char)v5;
						v16 = v6;
						// branch -> 0x4027c
					} else {
						v16 = v14;
					}
				}
				char *v17 = (char *)v16; // 0x4027c
				int32_t v18 = v16;       // 0x40298
				if (*v17 == 5) {
					// 0x40288
					if (*(char *)(v16 - 1) != 3) {
						// 0x40294
						*v17 = (char)v8;
						v18 = v6;
						// branch -> 0x40298
					} else {
						v18 = v16;
					}
				}
				int32_t v19 = v18 + 40;  // 0x40298
				char *v20 = (char *)v19; // 0x40298
				v6 = v19;
				int32_t v21 = v19; // 0x402d0
				if (*v20 == 4) {
					// 0x402a8
					if (*(char *)v18 != 3) {
						// 0x402b4
						*v20 = (char)v5;
						v21 = v6;
						// branch -> 0x402b8
					} else {
						v21 = v19;
					}
				}
				char *v22 = (char *)v21; // 0x402b8
				int32_t v23 = v21;       // 0x402d4
				if (*v22 == 5) {
					// 0x402c4
					if (*(char *)(v21 - 1) != 3) {
						// 0x402d0
						*v22 = (char)v8;
						v23 = v6;
						// branch -> 0x402d4
					} else {
						v23 = v21;
					}
				}
				int32_t v24 = v23 + 40;  // 0x402d4
				char *v25 = (char *)v24; // 0x402d4
				v6 = v24;
				int32_t v26 = v24; // 0x4030c
				if (*v25 == 4) {
					// 0x402e4
					if (*(char *)v23 != 3) {
						// 0x402f0
						*v25 = (char)v5;
						v26 = v6;
						// branch -> 0x402f4
					} else {
						v26 = v24;
					}
				}
				char *v27 = (char *)v26; // 0x402f4
				int32_t v28 = v26;       // 0x40310
				if (*v27 == 5) {
					// 0x40300
					if (*(char *)(v26 - 1) != 3) {
						// 0x4030c
						*v27 = (char)v8;
						v28 = v6;
						// branch -> 0x40310
					} else {
						v28 = v26;
					}
				}
				int32_t v29 = v28 + 40;  // 0x40310
				char *v30 = (char *)v29; // 0x40310
				v6 = v29;
				int32_t v31 = v29; // 0x40348
				if (*v30 == 4) {
					// 0x40320
					if (*(char *)v28 != 3) {
						// 0x4032c
						*v30 = (char)v5;
						v31 = v6;
						// branch -> 0x40330
					} else {
						v31 = v29;
					}
				}
				char *v32 = (char *)v31; // 0x40330
				int32_t v33 = v31;       // 0x4034c
				if (*v32 == 5) {
					// 0x4033c
					if (*(char *)(v31 - 1) != 3) {
						// 0x40348
						*v32 = (char)v8;
						v33 = v6;
						// branch -> 0x4034c
					} else {
						v33 = v31;
					}
				}
				int32_t v34 = v33 + 40; // 0x4034c
				v6 = v34;
				v7 += 4;
				int32_t v35 = v4 - 1; // 0x40354
				v4 = v35;
				if (v35 == 0) {
					// break -> 0x40358
					break;
				}
				v9 = v34;
				// continue -> 0x40228
				continue;
			}
			// 0x40244
			v13 = (char *)v11;
			if (*v13 == 5) {
				goto lab_0x40250;
			}
			v12 = v11;
			goto lab_0x40260;
		}
		int32_t v36 = v2 + 1; // 0x40358
		v2 = v36;
		int32_t v37 = v1 + 1; // 0x4035c
		v1 = v37;
		if (v36 >= 40) {
			// break -> 0x40368
			break;
		}
		v1 = v37;
		// continue -> 0x40210
	}
	int32_t v38 = v3 + 1; // 0x4036c
	v6 = v38;
	v4 = 38;
	v1++;
	// branch -> 0x40378
lab_0x40378:;
	int32_t v39; // r3
	while (true) {
		// 0x40378
		v2 = 1;
		v39 = 40;
		int32_t v40 = 40;  // 0x40384
		int32_t v41 = v38; // 0x403842
		// branch -> 0x40384
		int32_t v42; // 0x40384
		int32_t v43; // 0x4043c
		int32_t v44; // 0x40444
		while (true) {
			// 0x40384
			int32_t v45; // 0x4042c
			int32_t v46; // 0x40430
			if (__asm_rlwinm_((int32_t) * (char *)(v41 + v40), 0, 24, 24) == 0) {
				int32_t v47 = v39;                // 0x40390
				int32_t v48 = v47 + v1;           // 0x40390
				unsigned char v49 = *(char *)v48; // 0x40394
				if (v49 != 2) {
					// 0x403a0
					if (v49 != 5) {
					lab_0x4042c_5:
						// 0x4042c
						v45 = v2 + 1;
						v2 = v45;
						v46 = v39 + 40;
						v39 = v46;
						v42 = v6;
						if (v45 >= 39) {
							// break -> 0x4043c
							break;
						}
						v40 = v46;
						v41 = v42;
						// continue -> 0x40384
						continue;
					}
				}
				// 0x403a8
				if (*(char *)(v48 - 1) != 3) {
					goto lab_0x4042c_5;
				}
				// 0x403b4
				if (*(char *)(v48 + 1) != 3) {
					goto lab_0x4042c_5;
				}
				int32_t v50 = 0; // 0x4040c
				// branch -> 0x403e0
				while (true) {
					unsigned char v51 = *(char *)v48; // 0x403e0
					if (v51 != 2) {
						// 0x403ec
						if (v51 != 5) {
						lab_0x4040c_2:
							// 0x4040c
							if (v50 != 0) {
								goto lab_0x4042c_5;
							}
							int32_t v52 = v47 - 40; // 0x40414
							v5 = v52;
							if (__asm_rlwinm_((int32_t) * (char *)(v6 + v52), 0, 24, 24) != 0) {
								goto lab_0x4042c_5;
							}
							// 0x40424
							*(char *)(v5 + v1) = 5;
							// branch -> 0x4042c
							goto lab_0x4042c_5;
						}
					}
					// 0x403f4
					if (*(char *)(v48 - 1) != 3) {
						goto lab_0x4040c_2;
					}
					// 0x40400
					if (*(char *)(v48 + 1) != 3) {
						goto lab_0x4040c_2;
					}
					int32_t v53 = v50; // 0x4040c18
					if (v51 == 5) {
						// 0x403d0
						v53 = 1;
						// branch -> 0x403d4
					}
					// 0x403d4
					v2++;
					int32_t v54 = v47 + 40; // 0x403dc
					v39 = v54;
					v47 = v54;
					v50 = v53;
					v48 += 40;
					// branch -> 0x403e0
				}
				// 0x4043c
				v43 = v42 + 1;
				v6 = v43;
				int32_t v55 = v1; // 0x40440
				v1 = v55 + 1;
				int32_t v56 = v4; // 0x40444
				v44 = v56 - 1;
				v4 = v44;
				if (v44 == 0) {
					// break (via goto) -> 0x40448
					goto lab_0x40448;
				}
				v38 = v43;
				// continue (via goto) -> 0x40378
				goto lab_0x40378;
			}
			// 0x4042c
			v45 = v2 + 1;
			v2 = v45;
			v46 = v39 + 40;
			v39 = v46;
			v42 = v6;
			if (v45 >= 39) {
				// break -> 0x4043c
				break;
			}
			v40 = v46;
			v41 = v42;
			// continue -> 0x40384
		}
		// 0x4043c
		v43 = v42 + 1;
		v6 = v43;
		v1++;
		v44 = v4 - 1;
		v4 = v44;
		if (v44 == 0) {
			// break -> 0x40448
			break;
		}
		v38 = v43;
		// continue -> 0x40378
	}
lab_0x40448:;
	int32_t v57 = v3 + 40; // 0x4044c
	v3 = v57;
	v4 = 38;
	// branch -> 0x40458
lab_0x40458:;
	int32_t result; // 0x40510
	while (true) {
		int32_t v58 = v57 + 1; // 0x40458
		v39 = v58;
		v1 = 1;
		// branch -> 0x40464
		int32_t v59; // 0x4051c
		int32_t v60; // 0x40524
		while (true) {
			// 0x40464
			int32_t v61; // 0x4050c
			if (__asm_rlwinm_((int32_t) * (char *)v58, 0, 24, 24) == 0) {
				int32_t v62 = v1;                 // 0x40470
				int32_t v63 = v62 + v1;           // 0x40470
				unsigned char v64 = *(char *)v63; // 0x40474
				if (v64 != 1) {
					// 0x40480
					if (v64 != 4) {
					lab_0x4050c_5:
						// 0x4050c
						v61 = v1 + 1;
						v1 = v61;
						result = v39 + 1;
						v39 = result;
						if (v61 >= 39) {
							// break -> 0x4051c
							break;
						}
						v58 = result;
						// continue -> 0x40464
						continue;
					}
				}
				// 0x40488
				if (*(char *)(v63 - 40) != 3) {
					goto lab_0x4050c_5;
				}
				// 0x40494
				if (*(char *)(v63 + 40) != 3) {
					goto lab_0x4050c_5;
				}
				int32_t v65 = 0; // 0x404ec
				// branch -> 0x404c0
				while (true) {
					unsigned char v66 = *(char *)v63; // 0x404c0
					if (v66 != 1) {
						// 0x404cc
						if (v66 != 4) {
						lab_0x404ec_2:
							// 0x404ec
							if (v65 != 0) {
								goto lab_0x4050c_5;
							}
							int32_t v67 = v62 - 1; // 0x404f4
							v5 = v67;
							if (__asm_rlwinm_((int32_t) * (char *)(v3 + v67), 0, 24, 24) != 0) {
								goto lab_0x4050c_5;
							}
							// 0x40504
							*(char *)(v5 + v1) = 4;
							// branch -> 0x4050c
							goto lab_0x4050c_5;
						}
					}
					// 0x404d4
					if (*(char *)(v63 - 40) != 3) {
						goto lab_0x404ec_2;
					}
					// 0x404e0
					if (*(char *)(v63 + 40) != 3) {
						goto lab_0x404ec_2;
					}
					int32_t v68 = v65; // 0x404ec24
					if (v66 == 4) {
						// 0x404b0
						v68 = 1;
						// branch -> 0x404b4
					}
					int32_t v69 = v62 + 1; // 0x404b8
					v1 = v69;
					v39++;
					v62 = v69;
					v65 = v68;
					v63++;
					// branch -> 0x404c0
				}
				int32_t v70 = v3; // 0x4051c
				v59 = v70 + 40;
				v3 = v59;
				int32_t v71 = v1; // 0x40520
				v1 = v71 + 40;
				int32_t v72 = v4; // 0x40524
				v60 = v72 - 1;
				v4 = v60;
				if (v60 == 0) {
					// break (via goto) -> 0x40528
					goto lab_0x40528;
				}
				v57 = v59;
				// continue (via goto) -> 0x40458
				goto lab_0x40458;
			}
			// 0x4050c
			v61 = v1 + 1;
			v1 = v61;
			result = v39 + 1;
			v39 = result;
			if (v61 >= 39) {
				// break -> 0x4051c
				break;
			}
			v58 = result;
			// continue -> 0x40464
		}
		// 0x4051c
		v59 = v3 + 40;
		v3 = v59;
		v60 = v4 - 1;
		v4 = v60;
		if (v60 == 0) {
			// break -> 0x40528
			break;
		}
		v57 = v59;
		// continue -> 0x40458
	}
lab_0x40528:
	// 0x40528
	return result;
}

// Address range: 0x4052c - 0x4061c
int32_t L2DoorFix(int32_t a1)
{
	int32_t v1 = 1;                              // r8
	int32_t v2 = *(int32_t *)(g23 - 0x77cc) + 1; // 0x40534
	// branch -> 0x40538
	int32_t result; // r3
	while (true) {
		int32_t v3 = v2 + 40; // 0x4053c
		int32_t v4 = 13;      // ctr
		int32_t v5 = 1;       // r7
		int32_t v6 = 7;       // r4
		int32_t v7 = 9;       // r0
		// branch -> 0x40550
		while (true) {
			char *v8 = (char *)v3; // 0x40550
			int32_t v9 = v3;       // 0x40584
			if (*v8 == 4) {
				// 0x4055c
				if (*(char *)(v3 - 1) == 3) {
					// 0x40568
					*v8 = (char)v6;
					v9 = v3;
					// branch -> 0x4056c
				} else {
					v9 = v3;
				}
			}
			char *v10 = (char *)v9; // 0x4056c
			int32_t v11 = v9;       // 0x40588
			if (*v10 == 5) {
				// 0x40578
				if (*(char *)(v9 - 40) == 3) {
					// 0x40584
					*v10 = (char)v7;
					v11 = v3;
					// branch -> 0x40588
				} else {
					v11 = v9;
				}
			}
			int32_t v12 = v11 + 40;  // 0x40588
			char *v13 = (char *)v12; // 0x40588
			v3 = v12;
			int32_t v14 = v12; // 0x405bc
			if (*v13 == 4) {
				// 0x40594
				if (*(char *)(v11 + 39) == 3) {
					// 0x405a0
					*v13 = (char)v6;
					v14 = v3;
					// branch -> 0x405a4
				} else {
					v14 = v12;
				}
			}
			char *v15 = (char *)v14; // 0x405a4
			int32_t v16 = v14;       // 0x405c0
			if (*v15 == 5) {
				// 0x405b0
				if (*(char *)(v14 - 40) == 3) {
					// 0x405bc
					*v15 = (char)v7;
					v16 = v3;
					// branch -> 0x405c0
				} else {
					v16 = v14;
				}
			}
			int32_t v17 = v16 + 40;  // 0x405c0
			char *v18 = (char *)v17; // 0x405c0
			v3 = v17;
			int32_t v19 = v17; // 0x405f8
			if (*v18 == 4) {
				// 0x405d0
				if (*(char *)(v16 + 39) == 3) {
					// 0x405dc
					*v18 = (char)v6;
					v19 = v3;
					// branch -> 0x405e0
				} else {
					v19 = v17;
				}
			}
			char *v20 = (char *)v19;  // 0x405e0
			unsigned char v21 = *v20; // 0x405e0
			result = v21;
			int32_t v22 = v19; // 0x405fc
			if (v21 == 5) {
				unsigned char v23 = *(char *)(v19 - 40); // 0x405ec
				result = v23;
				if (v23 == 3) {
					// 0x405f8
					*v20 = (char)v7;
					v22 = v3;
					// branch -> 0x405fc
				} else {
					v22 = v19;
				}
			}
			int32_t v24 = v22 + 40; // 0x405fc
			v5 += 2;
			int32_t v25 = v4 - 1; // 0x40604
			v4 = v25;
			if (v25 == 0) {
				// break -> 0x40608
				break;
			}
			v3 = v24;
			// continue -> 0x40550
		}
		int32_t v26 = v1 + 1; // 0x40608
		v1 = v26;
		if (v26 >= 40) {
			// break -> 0x40618
			break;
		}
		v2++;
		// continue -> 0x40538
	}
	// 0x40618
	return result;
}

// Address range: 0x4131c - 0x41810
int32_t LoadL2Dungeon(int32_t a1, int32_t a2, int32_t a3) {
    // 0x4131c
    DRLG_InitTrans(InitDungeon());
    int32_t v1 = LoadFileInMem(a1, NULL); // 0x41350
    int32_t v2 = v1; // bp-40
    g34 = v1;
    int32_t v3 = function_c9948(); // r3
    int32_t v4 = *(int32_t *)(g23 - 0x77cc); // 0x41360
    int32_t v5 = 0; // r11
    int32_t v6 = *(int32_t *)(g23 - 0x7514); // 0x41368
    // branch -> 0x41374
  lab_0x41374:
    while (true) {
        int32_t v7 = 5; // ctr
        int32_t v8 = v4; // r4
        int32_t v9 = v6; // r5
        int32_t v10 = 12; // r0
        int32_t v11 = 0; // r10
        int32_t v12 = v4; // 0x4138c
        char v13 = 12;
        // branch -> 0x4138c
        while (true) {
            // 0x4138c
            *(char *)v12 = v13;
            *(char *)v9 = (char)v11;
            *(char *)(v8 + 40) = (char)v10;
            *(char *)(v9 + 40) = (char)v11;
            *(char *)(v8 + 80) = (char)v10;
            *(char *)(v9 + 80) = (char)v11;
            *(char *)(v8 + 120) = (char)v10;
            *(char *)(v9 + 120) = (char)v11;
            *(char *)(v8 + 160) = (char)v10;
            *(char *)(v9 + 160) = (char)v11;
            *(char *)(v8 + 200) = (char)v10;
            *(char *)(v9 + 200) = (char)v11;
            *(char *)(v8 + 240) = (char)v10;
            *(char *)(v9 + 240) = (char)v11;
            *(char *)(v8 + 280) = (char)v10;
            v8 += 320;
            *(char *)(v9 + 280) = (char)v11;
            v9 += 320;
            int32_t v14 = v7 - 1; // 0x413d4
            v7 = v14;
            if (v14 == 0) {
                int32_t v15 = v5 + 1; // 0x413d8
                v5 = v15;
                int32_t v16 = v6 + 1; // 0x413dc
                v6 = v16;
                int32_t v17 = v4 + 1; // 0x413e4
                v4 = v17;
                if (v15 >= 40) {
                    // break (via goto) -> 0x413ec
                    goto lab_0x413ec;
                }
                v6 = v16;
                v4 = v17;
                // continue (via goto) -> 0x41374
                goto lab_0x41374;
            } else {
                // 0x4138c
                v12 = v8;
                v13 = v10;
                // branch -> 0x4138c
                continue;
            }
        }
      lab_0x413ec:;
        int32_t v18 = v3; // 0x413ec
        int32_t v19 = (int32_t)*(char *)v18; // 0x413ec
        int32_t v20 = v4; // 0x413f0
        v4 = v20;
        int32_t v21 = (int32_t)*(char *)(v18 + 2); // 0x413f4
        int32_t v22 = v18 + 4; // 0x413f8
        int32_t v23 = v11; // 0x414581
        int32_t v24; // 0x41470
        int32_t v25; // 0x41484
        if (v23 < v21) {
            int32_t v26 = v21; // 0x4145821
            int32_t v27 = v6; // 0x4140c
            int32_t v28 = v20; // 0x41408
            int32_t v29 = v19; // 0x41404
            // branch -> 0x41400
            while (true) {
                // 0x41400
                v7 = v29;
                v8 = v28;
                v9 = v27;
                int32_t v30 = v26; // 0x41458
                int32_t v31 = v23; // 0x41454
                int32_t v32 = v27; // 0x41450
                int32_t v33 = v28; // 0x4144c
                int32_t v34 = v22; // 0x4141815
                if (v29 >= 1) {
                    int32_t v35 = v28; // 0x41438
                    int32_t v36 = v22; // 0x41418
                    int32_t v37; // 0x4143c
                    while (true) {
                        unsigned char v38 = *(char *)v36; // 0x41418
                        if (v38 == 0) {
                            // 0x41438
                            *(char *)v35 = (char)3;
                            // branch -> 0x4143c
                        } else {
                            // 0x41424
                            *(char *)v35 = v38;
                            char * v39 = (char *)v9; // 0x41428
                            *v39 = (char)((int32_t)*v39 | 128);
                            // branch -> 0x4143c
                        }
                        // 0x4143c
                        v37 = v22 + 2;
                        v22 = v37;
                        int32_t v40 = v8 + 40; // 0x41440
                        v8 = v40;
                        v9 += 40;
                        int32_t v41 = v7 - 1; // 0x41448
                        v7 = v41;
                        if (v41 == 0) {
                            // break -> 0x4144c
                            break;
                        }
                        v35 = v40;
                        v36 = v37;
                        // continue -> 0x41418
                    }
                    // 0x4144c
                    v30 = v21;
                    v31 = v11;
                    v32 = v6;
                    v33 = v4;
                    v34 = v37;
                    // branch -> 0x4144c
                }
                int32_t v42 = v33 + 1; // 0x4144c
                v4 = v42;
                int32_t v43 = v32 + 1; // 0x41450
                v6 = v43;
                int32_t v44 = v31 + 1; // 0x41454
                v11 = v44;
                if (v44 < v30) {
                    // 0x4144c
                    v26 = v30;
                    v23 = v44;
                    v22 = v34;
                    v27 = v43;
                    v28 = v42;
                    v29 = v19;
                    // branch -> 0x41400
                    continue;
                } else {
                    // 0x41458
                    // branch -> 0x41460
                    // 0x41460
                    v9 = 0;
                    v3 = 12;
                    v24 = v4;
                    // branch -> 0x41468
                    while (true) {
                        // 0x41468
                        v7 = 4;
                        v8 = v24;
                        v4 = 0;
                        v25 = v24;
                        // branch -> 0x41478
                      lab_0x41478:
                        while (true) {
                            char * v45 = (char *)v25; // 0x41478
                            int32_t v46 = v25; // 0x41488
                            if (*v45 == 0) {
                                // 0x41484
                                *v45 = (char)v3;
                                v46 = v8;
                                // branch -> 0x41488
                            }
                            int32_t v47 = v46 + 40; // 0x41488
                            char * v48 = (char *)v47; // 0x41488
                            v8 = v47;
                            if (*v48 == 0) {
                                // 0x41494
                                *v48 = (char)v3;
                                v47 = v8;
                                // branch -> 0x41498
                            }
                            int32_t v49 = v47 + 40; // 0x41498
                            char * v50 = (char *)v49; // 0x41498
                            v8 = v49;
                            int32_t v51 = v4 + 1; // 0x4149c
                            v4 = v51;
                            if (*v50 == 0) {
                                // 0x414a8
                                *v50 = (char)v3;
                                v51 = v4;
                                v49 = v8;
                                // branch -> 0x414ac
                            }
                            int32_t v52 = v49 + 40; // 0x414ac
                            char * v53 = (char *)v52; // 0x414ac
                            v8 = v52;
                            int32_t v54 = v51 + 1; // 0x414b0
                            v4 = v54;
                            if (*v53 == 0) {
                                // 0x414bc
                                *v53 = (char)v3;
                                v54 = v4;
                                v52 = v8;
                                // branch -> 0x414c0
                            }
                            int32_t v55 = v52 + 40; // 0x414c0
                            char * v56 = (char *)v55; // 0x414c0
                            v8 = v55;
                            int32_t v57 = v54 + 1; // 0x414c4
                            v4 = v57;
                            if (*v56 == 0) {
                                // 0x414d0
                                *v56 = (char)v3;
                                v57 = v4;
                                v55 = v8;
                                // branch -> 0x414d4
                            }
                            int32_t v58 = v55 + 40; // 0x414d4
                            char * v59 = (char *)v58; // 0x414d4
                            v8 = v58;
                            int32_t v60 = v57 + 1; // 0x414d8
                            v4 = v60;
                            if (*v59 == 0) {
                                // 0x414e4
                                *v59 = (char)v3;
                                v60 = v4;
                                v58 = v8;
                                // branch -> 0x414e8
                            }
                            int32_t v61 = v58 + 40; // 0x414e8
                            char * v62 = (char *)v61; // 0x414e8
                            v8 = v61;
                            int32_t v63 = v60 + 1; // 0x414ec
                            v4 = v63;
                            if (*v62 == 0) {
                                // 0x414f8
                                *v62 = (char)v3;
                                v63 = v4;
                                v61 = v8;
                                // branch -> 0x414fc
                            }
                            int32_t v64 = v61 + 40; // 0x414fc
                            char * v65 = (char *)v64; // 0x414fc
                            v8 = v64;
                            int32_t v66 = v63 + 1; // 0x41500
                            v4 = v66;
                            if (*v65 == 0) {
                                // 0x4150c
                                *v65 = (char)v3;
                                v66 = v4;
                                v64 = v8;
                                // branch -> 0x41510
                            }
                            int32_t v67 = v64 + 40; // 0x41510
                            char * v68 = (char *)v67; // 0x41510
                            v8 = v67;
                            int32_t v69 = v66 + 1; // 0x41514
                            v4 = v69;
                            if (*v68 == 0) {
                                // 0x41520
                                *v68 = (char)v3;
                                v69 = v4;
                                v67 = v8;
                                // branch -> 0x41524
                            }
                            int32_t v70 = v67 + 40; // 0x41524
                            char * v71 = (char *)v70; // 0x41524
                            v8 = v70;
                            int32_t v72 = v69 + 1; // 0x41528
                            v4 = v72;
                            if (*v71 == 0) {
                                // 0x41534
                                *v71 = (char)v3;
                                v72 = v4;
                                v70 = v8;
                                // branch -> 0x41538
                            }
                            int32_t v73 = v70 + 40; // 0x41538
                            v8 = v73;
                            v4 = v72 + 1;
                            int32_t v74 = v7 - 1; // 0x41540
                            v7 = v74;
                            if (v74 == 0) {
                                // break -> 0x41544
                                break;
                            }
                            v25 = v73;
                            // continue -> 0x41478
                        }
                        int32_t v75 = v9 + 1; // 0x41544
                        v9 = v75;
                        int32_t v76 = v4 + 1; // 0x41548
                        if (v75 >= 40) {
                            // break -> 0x41554
                            break;
                        }
                        v24 = v76;
                        // continue -> 0x41468
                    }
                    // 0x41554
                    DRLG_L2Pass3();
                    DRLG_Init_Globals();
                    v6 = 0;
                    int32_t v77 = 0; // 0x4158445
                    // branch -> 0x41564
                  lab_0x41564:
                    while (true) {
                        // 0x41564
                        v4 = 0;
                        v7 = 56;
                        int32_t v78 = 0; // 0x415e8
                        int32_t v79 = v77; // 0x41584
                        int32_t v80 = 0; // 0x415e4
                        // branch -> 0x41578
                        while (true) {
                            int16_t v81 = *(int16_t *)(*(int32_t *)g36 + v80 + v79); // 0x41584
                            char v82 = 0;
                            if (v81 == 541) {
                                // 0x41590
                                v82 = 5;
                                // branch -> 0x41594
                            }
                            if (v81 == 178) {
                                // 0x4159c
                                v82 = 5;
                                // branch -> 0x415a0
                            }
                            if (v81 == 551) {
                                // 0x415a8
                                v82 = 5;
                                // branch -> 0x415ac
                            }
                            if (v81 == 542) {
                                // 0x415b4
                                v82 = 6;
                                // branch -> 0x415b8
                            }
                            if (v81 == 553) {
                                // 0x415c0
                                v82 = 6;
                                // branch -> 0x415c4
                            }
                            if (v81 == 13) {
                                // 0x415cc
                                v82 = 5;
                                // branch -> 0x415d0
                            }
                            if (v81 == 17) {
                                // 0x415d8
                                v82 = 6;
                                // branch -> 0x415dc
                            }
                            // 0x415dc
                            v9 = v78 + 112;
                            *(char *)(v6 + *(int32_t *)g35 + v78) = v82;
                            int32_t v83 = v80 + 224; // 0x415fc
                            int16_t v84 = *(int16_t *)(v4 + v83 + *(int32_t *)g36); // 0x41600
                            int32_t v85 = 0; // 0x4165c60
                            if (v84 == 541) {
                                // 0x4160c
                                v85 = 0x5000000;
                                // branch -> 0x41610
                            }
                            if (v84 == 178) {
                                // 0x41618
                                v85 = 0x5000000;
                                // branch -> 0x4161c
                            }
                            if (v84 == 551) {
                                // 0x41624
                                v85 = 0x5000000;
                                // branch -> 0x41628
                            }
                            if (v84 == 542) {
                                // 0x41630
                                v85 = 0x6000000;
                                // branch -> 0x41634
                            }
                            if (v84 == 553) {
                                // 0x4163c
                                v85 = 0x6000000;
                                // branch -> 0x41640
                            }
                            if (v84 == 13) {
                                // 0x41648
                                v85 = 0x5000000;
                                // branch -> 0x4164c
                            }
                            if (v84 == 17) {
                                // 0x41654
                                v85 = 0x6000000;
                                // branch -> 0x41658
                            }
                            // 0x41658
                            v8 = v83 + 224;
                            v4++;
                            int32_t v86 = v9 + *(int32_t *)g35; // 0x41668
                            *(char *)(v6 + v86) = (char)(v85 / 0x1000000);
                            int32_t v87 = v9 + 112; // 0x41670
                            int32_t v88 = v7 - 1; // 0x41674
                            v7 = v88;
                            if (v88 == 0) {
                                int32_t v89 = v6 + 1; // 0x41678
                                v6 = v89;
                                if (v89 >= 112) {
                                    // break (via goto) -> 0x41688
                                    goto lab_0x41688;
                                }
                                v77 = v4 + 2;
                                // continue (via goto) -> 0x41564
                                goto lab_0x41564;
                            } else {
                                // 0x41658
                                v78 = v87;
                                v79 = v4;
                                v80 = v8;
                                // branch -> 0x41578
                                continue;
                            }
                        }
                      lab_0x41688:
                        // 0x41688
                        v8 = 0;
                        v3 = 0;
                        int32_t v90 = 0; // 0x416ac63
                        // branch -> 0x41690
                      lab_0x41690:
                        while (true) {
                            // 0x41690
                            v9 = 0;
                            v7 = 56;
                            v6 = 0;
                            v11 = 0;
                            int32_t v91 = 0; // 0x416c4
                            int32_t v92 = v90; // 0x416ac
                            int32_t v93 = 0; // 0x416a8
                            // branch -> 0x416a4
                            while (true) {
                                int16_t v94 = *(int16_t *)(*(int32_t *)g36 + v93 + v92); // 0x416ac
                                int32_t v95; // 0x41720
                                int32_t v96; // 0x41724
                                int16_t v97; // 0x4172c
                                if (v94 == 132) {
                                    // 0x416b8
                                    *(char *)(v8 + *(int32_t *)g35 + v91 + 1) = 2;
                                    int32_t v98 = v11 + *(int32_t *)g35; // 0x416d4
                                    *(char *)(v8 + v98 + 2) = (char)1;
                                    // branch -> 0x4171c
                                } else {
                                    // 0x416e4
                                    if (v94 != 135) {
                                        // 0x416ec
                                        if (v94 != 139) {
                                          lab_0x4171c:
                                            // 0x4171c
                                            v95 = v6 + 224;
                                            v6 = v95;
                                            v96 = v11 + 112;
                                            v11 = v96;
                                            v97 = *(int16_t *)(v3 + v95 + *(int32_t *)g36);
                                            int32_t v99; // 0x4179c
                                            int32_t v100; // 0x417a0
                                            int32_t v101; // 0x417a8
                                            if (v97 == 132) {
                                              lab_0x41738:
                                                // 0x41738
                                                *(char *)(v8 + *(int32_t *)g35 + v96 + 1) = 2;
                                                int32_t v102 = v11 + *(int32_t *)g35; // 0x41754
                                                *(char *)(v8 + v102 + 2) = (char)1;
                                                // branch -> 0x4179c
                                            } else {
                                              lab_0x41764:
                                                // 0x41764
                                                if (v97 != 135) {
                                                    // 0x4176c
                                                    if (v97 != 139) {
                                                      lab_0x4179c:
                                                        // 0x4179c
                                                        v99 = v6 + 224;
                                                        v6 = v99;
                                                        v100 = v11 + 112;
                                                        v11 = v100;
                                                        v9++;
                                                        v101 = v7 - 1;
                                                        v7 = v101;
                                                        if (v101 == 0) {
                                                          lab_0x417ac:;
                                                            int32_t v103 = v8 + 1; // 0x417ac
                                                            v8 = v103;
                                                            int32_t v104 = v3 + 2; // 0x417b0
                                                            v3 = v104;
                                                            if (v103 >= 112) {
                                                                // break (via goto) -> 0x417bc
                                                                goto lab_0x417bc;
                                                            }
                                                            v90 = v104;
                                                            // continue (via goto) -> 0x41690
                                                            goto lab_0x41690;
                                                        } else {
                                                          lab_0x4179c_2:
                                                            // 0x4179c
                                                            v91 = v100;
                                                            v92 = v3;
                                                            v93 = v99;
                                                            // branch -> 0x416a4
                                                            continue;
                                                        }
                                                    }
                                                }
                                                // 0x41774
                                                *(char *)(v8 + *(int32_t *)g35 + v96 + 112) = 3;
                                                int32_t v105 = v11 + *(int32_t *)g35; // 0x41790
                                                *(char *)(v8 + v105 + 224) = (char)4;
                                                // branch -> 0x4179c
                                                goto lab_0x4179c;
                                            }
                                            // 0x4179c
                                            v99 = v6 + 224;
                                            v6 = v99;
                                            v100 = v11 + 112;
                                            v11 = v100;
                                            v9++;
                                            v101 = v7 - 1;
                                            v7 = v101;
                                            if (v101 == 0) {
                                                goto lab_0x417ac;
                                            }
                                            goto lab_0x4179c_2;
                                        }
                                    }
                                    // 0x416f4
                                    *(char *)(v8 + *(int32_t *)g35 + v91 + 112) = 3;
                                    int32_t v106 = v11 + *(int32_t *)g35; // 0x41710
                                    *(char *)(v8 + v106 + 224) = (char)4;
                                    // branch -> 0x4171c
                                    goto lab_0x4171c;
                                }
                                // 0x4171c
                                v95 = v6 + 224;
                                v6 = v95;
                                v96 = v11 + 112;
                                v11 = v96;
                                v97 = *(int16_t *)(v3 + v95 + *(int32_t *)g36);
                                if (v97 == 132) {
                                    goto lab_0x41738;
                                }
                                goto lab_0x41764;
                            }
                          lab_0x417bc:
                            // 0x417bc
                            *(int32_t *)*(int32_t *)(g23 - 0x77b0) = g32;
                            *(int32_t *)*(int32_t *)(g23 - 0x77b4) = g33;
                            int32_t v107 = v2; // 0x417d4
                            function_7b884(v107, 0, 0);
                            function_9466c(v107, 0, 0);
                            function_c9acc(v107);
                            int32_t result = MemFreeDbg(&v2); // 0x417f8
                            return result;
                        }
                    }
                }
            }
        }
        // 0x41460
        v9 = 0;
        v3 = 12;
        v24 = v20;
        // branch -> 0x41468
        while (true) {
            // 0x41468
            v7 = 4;
            v8 = v24;
            v4 = 0;
            v25 = v24;
            // branch -> 0x41478
            goto lab_0x41478;
        }
    }
}

// Address range: 0x3fbc4 - 0x3fed4
int32_t DRLG_L2Pass3(void)
{
	int32_t v1 = g36;                        // 0x3fbc4
	int32_t v2 = *(int32_t *)(g23 - 0x756c); // 0x3fbcc
	g36 = v2;
	int32_t v3 = g35; // 0x3fbd0
	g35 = *(int32_t *)(g23 - 0x757c);
	g34 = *(int32_t *)v2;
	int32_t v4 = function_c9948();                     // 0x3fbec
	int32_t v5 = g11 + v4 + 88;                        // 0x3fbf4
	unsigned char v6 = *(char *)v5;                    // 0x3fbf4
	unsigned char v7 = *(char *)(v5 + 1);              // 0x3fbf4
	int32_t v8 = 256 * (int16_t)v7 | (int16_t)v6;      // 0x3fbfc
	unsigned char v9 = *(char *)(v4 + 90);             // 0x3fc04
	unsigned char v10 = *(char *)(v4 + 91);            // 0x3fc04
	int32_t v11 = 256 * (int16_t)v10 | (int16_t)v9;    // 0x3fc0c
	unsigned char v12 = *(char *)(v4 + 92);            // 0x3fc14
	unsigned char v13 = *(char *)(v4 + 93);            // 0x3fc14
	int32_t v14 = 256 * (int16_t)v13 | (int16_t)v12;   // 0x3fc1c
	unsigned char v15 = *(char *)(v4 + 94);            // 0x3fc24
	unsigned char v16 = *(char *)(v4 + 95);            // 0x3fc24
	int32_t v17 = 0;                                   // r11
	int32_t v18 = 256 * (int16_t)v16 | (int16_t)v15;   // 0x3fc2c
	int32_t v19 = 0;                                   // r10
	int32_t v20 = 0x10000 * (v8 + 1) / 0x10000;        // r8
	int32_t v21 = 0x10000 * (v11 + 1) / 0x10000;       // r7
	int32_t v22 = 0x10000 * (v14 + 1) / 0x10000;       // r6
	int32_t v23 = (0x10000 * v18 + 0x10000) / 0x10000; // r5
	int32_t v24 = 0;                                   // 0x3fc5c3
	                                                   // branch -> 0x3fc48
lab_0x3fc48:
	while (true) {
		int32_t v25 = 14;  // ctr
		int32_t v26 = 0;   // r9
		int32_t v27 = v24; // 0x3fc5c
		int32_t v28 = 0;   // 0x3fc58
		// branch -> 0x3fc54
		while (true) {
			int32_t v29 = *(int32_t *)g35; // 0x3fc54
			*(int16_t *)(v29 + v28 + v27) = (int16_t)v20;
			int32_t v30 = v26 + *(int32_t *)g35; // 0x3fc64
			*(int16_t *)(v19 + v30 + 224) = (int16_t)v21;
			int32_t v31 = v26 + *(int32_t *)g35; // 0x3fc74
			*(int16_t *)(v19 + v31 + 2) = (int16_t)v22;
			int32_t v32 = v26;                   // 0x3fc84
			int32_t v33 = v32 + *(int32_t *)g35; // 0x3fc84
			v26 = v32 + 448;
			*(int16_t *)(v19 + v33 + 226) = (int16_t)v23;
			int32_t v34 = *(int32_t *)g35; // 0x3fc94
			*(int16_t *)(v19 + v26 + v34) = (int16_t)v20;
			int32_t v35 = v26 + *(int32_t *)g35; // 0x3fca4
			*(int16_t *)(v19 + v35 + 224) = (int16_t)v21;
			int32_t v36 = v26 + *(int32_t *)g35; // 0x3fcb4
			*(int16_t *)(v19 + v36 + 2) = (int16_t)v22;
			int32_t v37 = v26;                   // 0x3fcc4
			int32_t v38 = v37 + *(int32_t *)g35; // 0x3fcc4
			v26 = v37 + 448;
			*(int16_t *)(v19 + v38 + 226) = (int16_t)v23;
			int32_t v39 = *(int32_t *)g35; // 0x3fcd4
			*(int16_t *)(v19 + v26 + v39) = (int16_t)v20;
			int32_t v40 = v26 + *(int32_t *)g35; // 0x3fce4
			*(int16_t *)(v19 + v40 + 224) = (int16_t)v21;
			int32_t v41 = v26 + *(int32_t *)g35; // 0x3fcf4
			*(int16_t *)(v19 + v41 + 2) = (int16_t)v22;
			int32_t v42 = v26;                   // 0x3fd04
			int32_t v43 = v42 + *(int32_t *)g35; // 0x3fd04
			v26 = v42 + 448;
			*(int16_t *)(v19 + v43 + 226) = (int16_t)v23;
			int32_t v44 = *(int32_t *)g35; // 0x3fd14
			*(int16_t *)(v19 + v26 + v44) = (int16_t)v20;
			int32_t v45 = v26 + *(int32_t *)g35; // 0x3fd24
			*(int16_t *)(v19 + v45 + 224) = (int16_t)v21;
			int32_t v46 = v26 + *(int32_t *)g35; // 0x3fd34
			*(int16_t *)(v19 + v46 + 2) = (int16_t)v22;
			int32_t v47 = v26;                   // 0x3fd44
			int32_t v48 = v47 + *(int32_t *)g35; // 0x3fd44
			v26 = v47 + 448;
			*(int16_t *)(v19 + v48 + 226) = (int16_t)v23;
			int32_t v49 = v25 - 1; // 0x3fd54
			v25 = v49;
			if (v49 == 0) {
				int32_t v50 = v17 + 2; // 0x3fd58
				v17 = v50;
				int32_t v51 = v19 + 4; // 0x3fd5c
				v19 = v51;
				if (v50 >= 112) {
					// break (via goto) -> 0x3fd68
					goto lab_0x3fd68;
				}
				v24 = v51;
				// continue (via goto) -> 0x3fc48
				goto lab_0x3fc48;
			} else {
				// 0x3fc54
				v27 = v19;
				v28 = v26;
				// branch -> 0x3fc54
				continue;
			}
		}
	lab_0x3fd68:;
		int32_t v52 = *(int32_t *)(g23 - 0x77cc); // 0x3fd68
		v22 = v52;
		v20 = 0;
		v21 = 32;
		int32_t v53 = 32; // 0x3fdac8
		                  // branch -> 0x3fd74
	lab_0x3fd74:
		while (true) {
			// 0x3fd74
			v25 = 20;
			int32_t v54 = v52; // r4
			v23 = 3584;
			int32_t v55 = v53;  // 0x3fdac
			int32_t v56 = 3584; // 0x3fda8
			int32_t v57 = v52;  // 0x3fd84
			// branch -> 0x3fd84
			while (true) {
				int32_t v58 = 8 * (int32_t) * (char *)v57 - 8;              // 0x3fd8c
				int32_t v59 = v4 + v58;                                     // 0x3fd90
				int32_t v60 = v59;                                          // r28
				int32_t v61 = v59 + v58;                                    // 0x3fd94
				unsigned char v62 = *(char *)(v61 + 1);                     // 0x3fd94
				int16_t v63 = 256 * (int16_t)v62 | (int16_t) * (char *)v61; // 0x3fd94
				int32_t v64 = 2;                                            // r29
				int32_t v65 = (int32_t)v63 + 1;                             // 0x3fda4
				*(int16_t *)(*(int32_t *)g35 + v56 + v55) = (int16_t)v65;
				int32_t v66 = v64 + v60;                                    // 0x3fdb0
				unsigned char v67 = *(char *)(v66 + 1);                     // 0x3fdb0
				int16_t v68 = 256 * (int16_t)v67 | (int16_t) * (char *)v66; // 0x3fdb0
				int32_t v69 = 4;                                            // r12
				int32_t v70 = v23 + *(int32_t *)g35;                        // 0x3fdc0
				int32_t v71 = (int32_t)v68 + 1;                             // 0x3fdc4
				*(int16_t *)(v21 + v70 + 224) = (int16_t)v71;
				int32_t v72 = v69 + v60;                                    // 0x3fdd0
				unsigned char v73 = *(char *)(v72 + 1);                     // 0x3fdd0
				int16_t v74 = 256 * (int16_t)v73 | (int16_t) * (char *)v72; // 0x3fdd0
				v17 = 6;
				int32_t v75 = v23 + *(int32_t *)g35; // 0x3fde0
				int32_t v76 = (int32_t)v74 + 1;      // 0x3fde4
				*(int16_t *)(v21 + v75 + 2) = (int16_t)v76;
				int32_t v77 = v17 + v60;                                    // 0x3fdf0
				unsigned char v78 = *(char *)(v77 + 1);                     // 0x3fdf0
				int16_t v79 = 256 * (int16_t)v78 | (int16_t) * (char *)v77; // 0x3fdf0
				int32_t v80 = v23 + *(int32_t *)g35;                        // 0x3fdfc
				int32_t v81 = (int32_t)v79 + 1;                             // 0x3fe00
				*(int16_t *)(v21 + v80 + 226) = (int16_t)v81;
				int32_t v82 = 8 * (int32_t) * (char *)(v54 + 40) - 8; // 0x3fe14
				int32_t v83 = v4 + v82;                               // 0x3fe18
				v60 = v83;
				int32_t v84 = v83 + v82;                                    // 0x3fe1c
				unsigned char v85 = *(char *)(v84 + 1);                     // 0x3fe1c
				int16_t v86 = 256 * (int16_t)v85 | (int16_t) * (char *)v84; // 0x3fe1c
				int32_t v87 = v23 + 448;                                    // 0x3fe20
				v23 = v87;
				int32_t v88 = *(int32_t *)g35;  // 0x3fe24
				int32_t v89 = (int32_t)v86 + 1; // 0x3fe2c
				*(int16_t *)(v21 + v88 + v87) = (int16_t)v89;
				int32_t v90 = v64 + v60;                                    // 0x3fe38
				unsigned char v91 = *(char *)(v90 + 1);                     // 0x3fe38
				int16_t v92 = 256 * (int16_t)v91 | (int16_t) * (char *)v90; // 0x3fe38
				int32_t v93 = v23 + *(int32_t *)g35;                        // 0x3fe44
				int32_t v94 = (int32_t)v92 + 1;                             // 0x3fe48
				*(int16_t *)(v21 + v93 + 224) = (int16_t)v94;
				int32_t v95 = v69 + v60;                                    // 0x3fe54
				unsigned char v96 = *(char *)(v95 + 1);                     // 0x3fe54
				int16_t v97 = 256 * (int16_t)v96 | (int16_t) * (char *)v95; // 0x3fe54
				int32_t v98 = v23 + *(int32_t *)g35;                        // 0x3fe60
				int32_t v99 = (int32_t)v97 + 1;                             // 0x3fe64
				*(int16_t *)(v21 + v98 + 2) = (int16_t)v99;
				int32_t v100 = v17 + v60;                                      // 0x3fe70
				unsigned char v101 = *(char *)(v100 + 1);                      // 0x3fe70
				int16_t v102 = 256 * (int16_t)v101 | (int16_t) * (char *)v100; // 0x3fe70
				v54 += 80;
				int32_t v103 = v23;                    // 0x3fe80
				int32_t v104 = v103 + *(int32_t *)g35; // 0x3fe80
				int32_t v105 = (int32_t)v102 + 1;      // 0x3fe84
				v23 = v103 + 448;
				*(int16_t *)(v21 + v104 + 226) = (int16_t)v105;
				int32_t v106 = v25 - 1; // 0x3fe94
				v25 = v106;
				if (v106 == 0) {
					int32_t v107 = v20 + 1; // 0x3fe98
					v20 = v107;
					int32_t v108 = v22 + 1; // 0x3fe9c
					v22 = v108;
					int32_t v109 = v21 + 4; // 0x3fea4
					v21 = v109;
					if (v107 >= 40) {
						// break (via goto) -> 0x3feac
						goto lab_0x3feac;
					}
					v53 = v109;
					v52 = v108;
					// continue (via goto) -> 0x3fd74
					goto lab_0x3fd74;
				} else {
					// 0x3fd84
					v55 = v21;
					v56 = v23;
					v57 = v54;
					// branch -> 0x3fd84
					continue;
				}
			}
		lab_0x3feac:;
			int32_t result = function_c9acc(*(int32_t *)g36); // 0x3feb0
			g36 = v1;
			g35 = v3;
			return result;
		}
	}
}

// Address range: 0x41810 - 0x41d10
int32_t LoadPreL2Dungeon(int32_t a1, int32_t a2, int32_t a3) {
    // 0x41810
    DRLG_InitTrans(InitDungeon());
    int32_t v1 = LoadFileInMem(g36, NULL); // 0x4183c
    int32_t v2 = v1; // bp-24
    g34 = v1;
    int32_t v3 = function_c9948(); // r3
    int32_t v4 = *(int32_t *)(g23 - 0x77cc); // 0x4184c
    int32_t v5 = 0; // r11
    int32_t v6 = *(int32_t *)(g23 - 0x7514); // 0x41854
    // branch -> 0x41860
  lab_0x41860:
    while (true) {
        int32_t v7 = 5; // ctr
        int32_t v8 = v4; // r5
        int32_t v9 = v6; // r6
        int32_t v10 = 12; // r0
        int32_t v11 = 0; // r10
        int32_t v12 = v4; // 0x41878
        char v13 = 12;
        // branch -> 0x41878
        while (true) {
            // 0x41878
            *(char *)v12 = v13;
            *(char *)v9 = (char)v11;
            *(char *)(v8 + 40) = (char)v10;
            *(char *)(v9 + 40) = (char)v11;
            *(char *)(v8 + 80) = (char)v10;
            *(char *)(v9 + 80) = (char)v11;
            *(char *)(v8 + 120) = (char)v10;
            *(char *)(v9 + 120) = (char)v11;
            *(char *)(v8 + 160) = (char)v10;
            *(char *)(v9 + 160) = (char)v11;
            *(char *)(v8 + 200) = (char)v10;
            *(char *)(v9 + 200) = (char)v11;
            *(char *)(v8 + 240) = (char)v10;
            *(char *)(v9 + 240) = (char)v11;
            *(char *)(v8 + 280) = (char)v10;
            v8 += 320;
            *(char *)(v9 + 280) = (char)v11;
            v9 += 320;
            int32_t v14 = v7 - 1; // 0x418c0
            v7 = v14;
            if (v14 == 0) {
                int32_t v15 = v5 + 1; // 0x418c4
                v5 = v15;
                int32_t v16 = v6 + 1; // 0x418c8
                v6 = v16;
                int32_t v17 = v4 + 1; // 0x418d0
                v4 = v17;
                if (v15 >= 40) {
                    // break (via goto) -> 0x418d8
                    goto lab_0x418d8;
                }
                v6 = v16;
                v4 = v17;
                // continue (via goto) -> 0x41860
                goto lab_0x41860;
            } else {
                // 0x41878
                v12 = v8;
                v13 = v10;
                // branch -> 0x41878
                continue;
            }
        }
      lab_0x418d8:;
        int32_t v18 = v3; // 0x418d8
        int32_t v19 = (int32_t)*(char *)v18; // 0x418d8
        int32_t v20 = v4; // 0x418dc
        v4 = v20;
        int32_t v21 = (int32_t)*(char *)(v18 + 2); // 0x418e0
        int32_t v22 = v18 + 4; // 0x418e4
        int32_t v23 = v11; // 0x419441
        int32_t v24; // 0x41960
        int32_t v25; // 0x41974
        if (v23 < v21) {
            int32_t v26 = v21; // 0x4194421
            int32_t v27 = v6; // 0x418f8
            int32_t v28 = v19; // 0x418f0
            // branch -> 0x418ec
            while (true) {
                // 0x418ec
                v7 = v28;
                v8 = v20;
                v9 = v27;
                int32_t v29 = v26; // 0x41944
                int32_t v30 = v23; // 0x41940
                int32_t v31 = v27; // 0x4193c
                int32_t v32 = v20; // 0x41938
                int32_t v33 = v22; // 0x4190415
                if (v28 >= 1) {
                    int32_t v34 = v20; // 0x41924
                    int32_t v35 = v22; // 0x41904
                    int32_t v36; // 0x41928
                    while (true) {
                        unsigned char v37 = *(char *)v35; // 0x41904
                        if (v37 == 0) {
                            // 0x41924
                            *(char *)v34 = (char)3;
                            // branch -> 0x41928
                        } else {
                            // 0x41910
                            *(char *)v34 = v37;
                            char * v38 = (char *)v9; // 0x41914
                            *v38 = (char)((int32_t)*v38 | 128);
                            // branch -> 0x41928
                        }
                        // 0x41928
                        v36 = v22 + 2;
                        v22 = v36;
                        int32_t v39 = v8 + 40; // 0x4192c
                        v8 = v39;
                        v9 += 40;
                        int32_t v40 = v7 - 1; // 0x41934
                        v7 = v40;
                        if (v40 == 0) {
                            // break -> 0x41938
                            break;
                        }
                        v34 = v39;
                        v35 = v36;
                        // continue -> 0x41904
                    }
                    // 0x41938
                    v29 = v21;
                    v30 = v11;
                    v31 = v6;
                    v32 = v4;
                    v33 = v36;
                    // branch -> 0x41938
                }
                int32_t v41 = v32 + 1; // 0x41938
                v4 = v41;
                int32_t v42 = v31 + 1; // 0x4193c
                v6 = v42;
                int32_t v43 = v30 + 1; // 0x41940
                v11 = v43;
                if (v43 >= v29) {
                    // 0x41944
                    v20 = v4;
                    // branch -> 0x4194c
                    // 0x4194c
                    v9 = v20;
                    v4 = 0;
                    v3 = 12;
                    v24 = v20;
                    // branch -> 0x41958
                    while (true) {
                        // 0x41958
                        v7 = 4;
                        v8 = v24;
                        v6 = 0;
                        v25 = v24;
                        // branch -> 0x41968
                      lab_0x41968:
                        while (true) {
                            char * v44 = (char *)v25; // 0x41968
                            int32_t v45 = v25; // 0x41978
                            if (*v44 == 0) {
                                // 0x41974
                                *v44 = (char)v3;
                                v45 = v8;
                                // branch -> 0x41978
                            }
                            int32_t v46 = v45 + 40; // 0x41978
                            char * v47 = (char *)v46; // 0x41978
                            v8 = v46;
                            if (*v47 == 0) {
                                // 0x41984
                                *v47 = (char)v3;
                                v46 = v8;
                                // branch -> 0x41988
                            }
                            int32_t v48 = v46 + 40; // 0x41988
                            char * v49 = (char *)v48; // 0x41988
                            v8 = v48;
                            int32_t v50 = v6 + 1; // 0x4198c
                            v6 = v50;
                            if (*v49 == 0) {
                                // 0x41998
                                *v49 = (char)v3;
                                v50 = v6;
                                v48 = v8;
                                // branch -> 0x4199c
                            }
                            int32_t v51 = v48 + 40; // 0x4199c
                            char * v52 = (char *)v51; // 0x4199c
                            v8 = v51;
                            int32_t v53 = v50 + 1; // 0x419a0
                            v6 = v53;
                            if (*v52 == 0) {
                                // 0x419ac
                                *v52 = (char)v3;
                                v53 = v6;
                                v51 = v8;
                                // branch -> 0x419b0
                            }
                            int32_t v54 = v51 + 40; // 0x419b0
                            char * v55 = (char *)v54; // 0x419b0
                            v8 = v54;
                            int32_t v56 = v53 + 1; // 0x419b4
                            v6 = v56;
                            if (*v55 == 0) {
                                // 0x419c0
                                *v55 = (char)v3;
                                v56 = v6;
                                v54 = v8;
                                // branch -> 0x419c4
                            }
                            int32_t v57 = v54 + 40; // 0x419c4
                            char * v58 = (char *)v57; // 0x419c4
                            v8 = v57;
                            int32_t v59 = v56 + 1; // 0x419c8
                            v6 = v59;
                            if (*v58 == 0) {
                                // 0x419d4
                                *v58 = (char)v3;
                                v59 = v6;
                                v57 = v8;
                                // branch -> 0x419d8
                            }
                            int32_t v60 = v57 + 40; // 0x419d8
                            char * v61 = (char *)v60; // 0x419d8
                            v8 = v60;
                            int32_t v62 = v59 + 1; // 0x419dc
                            v6 = v62;
                            if (*v61 == 0) {
                                // 0x419e8
                                *v61 = (char)v3;
                                v62 = v6;
                                v60 = v8;
                                // branch -> 0x419ec
                            }
                            int32_t v63 = v60 + 40; // 0x419ec
                            char * v64 = (char *)v63; // 0x419ec
                            v8 = v63;
                            int32_t v65 = v62 + 1; // 0x419f0
                            v6 = v65;
                            if (*v64 == 0) {
                                // 0x419fc
                                *v64 = (char)v3;
                                v65 = v6;
                                v63 = v8;
                                // branch -> 0x41a00
                            }
                            int32_t v66 = v63 + 40; // 0x41a00
                            char * v67 = (char *)v66; // 0x41a00
                            v8 = v66;
                            int32_t v68 = v65 + 1; // 0x41a04
                            v6 = v68;
                            if (*v67 == 0) {
                                // 0x41a10
                                *v67 = (char)v3;
                                v68 = v6;
                                v66 = v8;
                                // branch -> 0x41a14
                            }
                            int32_t v69 = v66 + 40; // 0x41a14
                            char * v70 = (char *)v69; // 0x41a14
                            v8 = v69;
                            int32_t v71 = v68 + 1; // 0x41a18
                            v6 = v71;
                            if (*v70 == 0) {
                                // 0x41a24
                                *v70 = (char)v3;
                                v71 = v6;
                                v69 = v8;
                                // branch -> 0x41a28
                            }
                            int32_t v72 = v69 + 40; // 0x41a28
                            v8 = v72;
                            v6 = v71 + 1;
                            int32_t v73 = v7 - 1; // 0x41a30
                            v7 = v73;
                            if (v73 == 0) {
                                // break -> 0x41a34
                                break;
                            }
                            v25 = v72;
                            // continue -> 0x41968
                        }
                        int32_t v74 = v4 + 1; // 0x41a34
                        v4 = v74;
                        int32_t v75 = v9 + 1; // 0x41a38
                        v9 = v75;
                        if (v74 >= 40) {
                            // break -> 0x41a44
                            break;
                        }
                        v24 = v75;
                        // continue -> 0x41958
                    }
                    int32_t v76 = *(int32_t *)(g23 - 0x7540); // 0x41a48
                    v9 = v76;
                    v4 = 0;
                    *(char *)v76 = *(char *)v4;
                    *(char *)(v9 + 40) = *(char *)(v4 + 40);
                    *(char *)(v9 + 80) = *(char *)(v4 + 80);
                    *(char *)(v9 + 120) = *(char *)(v4 + 120);
                    *(char *)(v9 + 160) = *(char *)(v4 + 160);
                    *(char *)(v9 + 200) = *(char *)(v4 + 200);
                    *(char *)(v9 + 240) = *(char *)(v4 + 240);
                    *(char *)(v9 + 280) = *(char *)(v4 + 280);
                    *(char *)(v9 + 320) = *(char *)(v4 + 320);
                    *(char *)(v9 + 360) = *(char *)(v4 + 360);
                    *(char *)(v9 + 400) = *(char *)(v4 + 400);
                    *(char *)(v9 + 440) = *(char *)(v4 + 440);
                    *(char *)(v9 + 480) = *(char *)(v4 + 480);
                    *(char *)(v9 + 520) = *(char *)(v4 + 520);
                    *(char *)(v9 + 560) = *(char *)(v4 + 560);
                    *(char *)(v9 + 600) = *(char *)(v4 + 600);
                    *(char *)(v9 + 640) = *(char *)(v4 + 640);
                    *(char *)(v9 + 680) = *(char *)(v4 + 680);
                    *(char *)(v9 + 720) = *(char *)(v4 + 720);
                    *(char *)(v9 + 760) = *(char *)(v4 + 760);
                    *(char *)(v9 + 800) = *(char *)(v4 + 800);
                    *(char *)(v9 + 840) = *(char *)(v4 + 840);
                    *(char *)(v9 + 880) = *(char *)(v4 + 880);
                    *(char *)(v9 + 920) = *(char *)(v4 + 920);
                    *(char *)(v9 + 960) = *(char *)(v4 + 960);
                    *(char *)(v9 + 1000) = *(char *)(v4 + 1000);
                    *(char *)(v9 + 1040) = *(char *)(v4 + 1040);
                    *(char *)(v9 + 1080) = *(char *)(v4 + 1080);
                    *(char *)(v9 + 1120) = *(char *)(v4 + 1120);
                    *(char *)(v9 + 1160) = *(char *)(v4 + 1160);
                    *(char *)(v9 + 1200) = *(char *)(v4 + 1200);
                    *(char *)(v9 + 1240) = *(char *)(v4 + 1240);
                    *(char *)(v9 + 1280) = *(char *)(v4 + 1280);
                    *(char *)(v9 + 1320) = *(char *)(v4 + 1320);
                    *(char *)(v9 + 1360) = *(char *)(v4 + 1360);
                    *(char *)(v9 + 1400) = *(char *)(v4 + 1400);
                    *(char *)(v9 + 1440) = *(char *)(v4 + 1440);
                    *(char *)(v9 + 1480) = *(char *)(v4 + 1480);
                    *(char *)(v9 + 1520) = *(char *)(v4 + 1520);
                    int32_t v77 = v4; // 0x41b8c
                    v4 = v77 + 1;
                    *(char *)(v9 + 1560) = *(char *)(v77 + 1560);
                    int32_t v78 = v9 + 1; // 0x41b98
                    v9 = v78;
                    v4++;
                    *(char *)v78 = *(char *)v4;
                    *(char *)(v9 + 40) = *(char *)(v4 + 40);
                    *(char *)(v9 + 80) = *(char *)(v4 + 80);
                    *(char *)(v9 + 120) = *(char *)(v4 + 120);
                    *(char *)(v9 + 160) = *(char *)(v4 + 160);
                    *(char *)(v9 + 200) = *(char *)(v4 + 200);
                    *(char *)(v9 + 240) = *(char *)(v4 + 240);
                    *(char *)(v9 + 280) = *(char *)(v4 + 280);
                    *(char *)(v9 + 320) = *(char *)(v4 + 320);
                    *(char *)(v9 + 360) = *(char *)(v4 + 360);
                    *(char *)(v9 + 400) = *(char *)(v4 + 400);
                    *(char *)(v9 + 440) = *(char *)(v4 + 440);
                    *(char *)(v9 + 480) = *(char *)(v4 + 480);
                    *(char *)(v9 + 520) = *(char *)(v4 + 520);
                    *(char *)(v9 + 560) = *(char *)(v4 + 560);
                    *(char *)(v9 + 600) = *(char *)(v4 + 600);
                    *(char *)(v9 + 640) = *(char *)(v4 + 640);
                    *(char *)(v9 + 680) = *(char *)(v4 + 680);
                    *(char *)(v9 + 720) = *(char *)(v4 + 720);
                    *(char *)(v9 + 760) = *(char *)(v4 + 760);
                    *(char *)(v9 + 800) = *(char *)(v4 + 800);
                    *(char *)(v9 + 840) = *(char *)(v4 + 840);
                    *(char *)(v9 + 880) = *(char *)(v4 + 880);
                    *(char *)(v9 + 920) = *(char *)(v4 + 920);
                    *(char *)(v9 + 960) = *(char *)(v4 + 960);
                    *(char *)(v9 + 1000) = *(char *)(v4 + 1000);
                    *(char *)(v9 + 1040) = *(char *)(v4 + 1040);
                    *(char *)(v9 + 1080) = *(char *)(v4 + 1080);
                    *(char *)(v9 + 1120) = *(char *)(v4 + 1120);
                    *(char *)(v9 + 1160) = *(char *)(v4 + 1160);
                    *(char *)(v9 + 1200) = *(char *)(v4 + 1200);
                    *(char *)(v9 + 1240) = *(char *)(v4 + 1240);
                    *(char *)(v9 + 1280) = *(char *)(v4 + 1280);
                    *(char *)(v9 + 1320) = *(char *)(v4 + 1320);
                    *(char *)(v9 + 1360) = *(char *)(v4 + 1360);
                    *(char *)(v9 + 1400) = *(char *)(v4 + 1400);
                    *(char *)(v9 + 1440) = *(char *)(v4 + 1440);
                    *(char *)(v9 + 1480) = *(char *)(v4 + 1480);
                    *(char *)(v9 + 1520) = *(char *)(v4 + 1520);
                    int32_t v79 = v4; // 0x41cd8
                    v4 = v79 + 1;
                    *(char *)(v9 + 1560) = *(char *)(v79 + 1560);
                    int32_t v80 = v9 + 1; // 0x41ce4
                    v9 = v80;
                    int32_t v81 = 19; // 0x41ce8
                    // branch -> 0x41a54
                    while (v81 != 0) {
                        // 0x41a54
                        *(char *)v80 = *(char *)v4;
                        *(char *)(v9 + 40) = *(char *)(v4 + 40);
                        *(char *)(v9 + 80) = *(char *)(v4 + 80);
                        *(char *)(v9 + 120) = *(char *)(v4 + 120);
                        *(char *)(v9 + 160) = *(char *)(v4 + 160);
                        *(char *)(v9 + 200) = *(char *)(v4 + 200);
                        *(char *)(v9 + 240) = *(char *)(v4 + 240);
                        *(char *)(v9 + 280) = *(char *)(v4 + 280);
                        *(char *)(v9 + 320) = *(char *)(v4 + 320);
                        *(char *)(v9 + 360) = *(char *)(v4 + 360);
                        *(char *)(v9 + 400) = *(char *)(v4 + 400);
                        *(char *)(v9 + 440) = *(char *)(v4 + 440);
                        *(char *)(v9 + 480) = *(char *)(v4 + 480);
                        *(char *)(v9 + 520) = *(char *)(v4 + 520);
                        *(char *)(v9 + 560) = *(char *)(v4 + 560);
                        *(char *)(v9 + 600) = *(char *)(v4 + 600);
                        *(char *)(v9 + 640) = *(char *)(v4 + 640);
                        *(char *)(v9 + 680) = *(char *)(v4 + 680);
                        *(char *)(v9 + 720) = *(char *)(v4 + 720);
                        *(char *)(v9 + 760) = *(char *)(v4 + 760);
                        *(char *)(v9 + 800) = *(char *)(v4 + 800);
                        *(char *)(v9 + 840) = *(char *)(v4 + 840);
                        *(char *)(v9 + 880) = *(char *)(v4 + 880);
                        *(char *)(v9 + 920) = *(char *)(v4 + 920);
                        *(char *)(v9 + 960) = *(char *)(v4 + 960);
                        *(char *)(v9 + 1000) = *(char *)(v4 + 1000);
                        *(char *)(v9 + 1040) = *(char *)(v4 + 1040);
                        *(char *)(v9 + 1080) = *(char *)(v4 + 1080);
                        *(char *)(v9 + 1120) = *(char *)(v4 + 1120);
                        *(char *)(v9 + 1160) = *(char *)(v4 + 1160);
                        *(char *)(v9 + 1200) = *(char *)(v4 + 1200);
                        *(char *)(v9 + 1240) = *(char *)(v4 + 1240);
                        *(char *)(v9 + 1280) = *(char *)(v4 + 1280);
                        *(char *)(v9 + 1320) = *(char *)(v4 + 1320);
                        *(char *)(v9 + 1360) = *(char *)(v4 + 1360);
                        *(char *)(v9 + 1400) = *(char *)(v4 + 1400);
                        *(char *)(v9 + 1440) = *(char *)(v4 + 1440);
                        *(char *)(v9 + 1480) = *(char *)(v4 + 1480);
                        *(char *)(v9 + 1520) = *(char *)(v4 + 1520);
                        v77 = v4;
                        v4 = v77 + 1;
                        *(char *)(v9 + 1560) = *(char *)(v77 + 1560);
                        v78 = v9 + 1;
                        v9 = v78;
                        v4++;
                        *(char *)v78 = *(char *)v4;
                        *(char *)(v9 + 40) = *(char *)(v4 + 40);
                        *(char *)(v9 + 80) = *(char *)(v4 + 80);
                        *(char *)(v9 + 120) = *(char *)(v4 + 120);
                        *(char *)(v9 + 160) = *(char *)(v4 + 160);
                        *(char *)(v9 + 200) = *(char *)(v4 + 200);
                        *(char *)(v9 + 240) = *(char *)(v4 + 240);
                        *(char *)(v9 + 280) = *(char *)(v4 + 280);
                        *(char *)(v9 + 320) = *(char *)(v4 + 320);
                        *(char *)(v9 + 360) = *(char *)(v4 + 360);
                        *(char *)(v9 + 400) = *(char *)(v4 + 400);
                        *(char *)(v9 + 440) = *(char *)(v4 + 440);
                        *(char *)(v9 + 480) = *(char *)(v4 + 480);
                        *(char *)(v9 + 520) = *(char *)(v4 + 520);
                        *(char *)(v9 + 560) = *(char *)(v4 + 560);
                        *(char *)(v9 + 600) = *(char *)(v4 + 600);
                        *(char *)(v9 + 640) = *(char *)(v4 + 640);
                        *(char *)(v9 + 680) = *(char *)(v4 + 680);
                        *(char *)(v9 + 720) = *(char *)(v4 + 720);
                        *(char *)(v9 + 760) = *(char *)(v4 + 760);
                        *(char *)(v9 + 800) = *(char *)(v4 + 800);
                        *(char *)(v9 + 840) = *(char *)(v4 + 840);
                        *(char *)(v9 + 880) = *(char *)(v4 + 880);
                        *(char *)(v9 + 920) = *(char *)(v4 + 920);
                        *(char *)(v9 + 960) = *(char *)(v4 + 960);
                        *(char *)(v9 + 1000) = *(char *)(v4 + 1000);
                        *(char *)(v9 + 1040) = *(char *)(v4 + 1040);
                        *(char *)(v9 + 1080) = *(char *)(v4 + 1080);
                        *(char *)(v9 + 1120) = *(char *)(v4 + 1120);
                        *(char *)(v9 + 1160) = *(char *)(v4 + 1160);
                        *(char *)(v9 + 1200) = *(char *)(v4 + 1200);
                        *(char *)(v9 + 1240) = *(char *)(v4 + 1240);
                        *(char *)(v9 + 1280) = *(char *)(v4 + 1280);
                        *(char *)(v9 + 1320) = *(char *)(v4 + 1320);
                        *(char *)(v9 + 1360) = *(char *)(v4 + 1360);
                        *(char *)(v9 + 1400) = *(char *)(v4 + 1400);
                        *(char *)(v9 + 1440) = *(char *)(v4 + 1440);
                        *(char *)(v9 + 1480) = *(char *)(v4 + 1480);
                        *(char *)(v9 + 1520) = *(char *)(v4 + 1520);
                        v79 = v4;
                        v4 = v79 + 1;
                        *(char *)(v9 + 1560) = *(char *)(v79 + 1560);
                        v80 = v9 + 1;
                        v9 = v80;
                        v81--;
                        // continue -> 0x41a54
                    }
                    // 0x41cec
                    function_c9acc(v2);
                    int32_t result = MemFreeDbg(&v2); // 0x41cf8
                    return result;
                }
                // 0x41938
                v26 = v29;
                v23 = v43;
                v22 = v33;
                v27 = v42;
                v20 = v41;
                v28 = v19;
                // branch -> 0x418ec
            }
        }
        // 0x4194c
        v9 = v20;
        v4 = 0;
        v3 = 12;
        v24 = v20;
        // branch -> 0x41958
        while (true) {
            // 0x41958
            v7 = 4;
            v8 = v24;
            v6 = 0;
            v25 = v24;
            // branch -> 0x41968
            goto lab_0x41968;
        }
    }
}

// Address range: 0x41d10 - 0x41e34
int32_t CreateL2Dungeon(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x41d14
	g31 = a1;
	g32 = *(int32_t *)(g23 - 0x75ec);
	int32_t v2 = *(int32_t *)(g23 - 0x7604); // 0x41d24
	g33 = v2;
	g36 = a2;
	int32_t v3 = *(int32_t *)(g23 - 0x77e4); // 0x41d2c
	g35 = v3;
	int32_t v4;     // r0
	int32_t v5;     // 0x41dd4
	int32_t v6;     // 0x41e10
	int32_t result; // 0x41e1c
	int32_t v7;     // 0x41dfc
	int32_t v8;     // 0x41e00
	int32_t v9;     // 0x41e14
	int32_t v10;    // 0x41df0
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		char *v11 = (char *)v3; // 0x41d44
		int32_t v12 = v3;       // 0x41d94
		if (*v11 == 7) {
			// 0x41d50
			if (*(char *)(v2 + 194) == 0) {
				// 0x41d5c
				*v11 = 6;
				CreateL2Dungeon(*(int32_t *)(g32 + 24), 4);
				*(char *)g35 = 7;
				v12 = g35;
				// branch -> 0x41d78
			} else {
				v12 = v3;
			}
		}
		char *v13 = (char *)v12; // 0x41d78
		if (*v13 == 8) {
			// 0x41d84
			if (*(char *)(g33 + 194) == 0) {
				// 0x41d90
				*v13 = 6;
				CreateL2Dungeon(*(int32_t *)(g32 + 24), 4);
				*(char *)g35 = 8;
				// branch -> 0x41dcc
			} else {
				// 0x41db0
				*v13 = 7;
				CreateL2Dungeon(*(int32_t *)(g32 + 28), 4);
				*(char *)g35 = 8;
				// branch -> 0x41dcc
			}
			// 0x41dcc
			g34 = g31;
			SetRndSeed();
			v5 = g23;
			v4 = 96;
			*(int32_t *)*(int32_t *)(v5 - 0x7530) = 16;
			*(int32_t *)*(int32_t *)(v5 - 0x7534) = 16;
			v10 = *(int32_t *)(g23 - 0x753c);
			*(int32_t *)*(int32_t *)(g23 - 0x7538) = v4;
			*(int32_t *)v10 = v4;
			v7 = DRLG_InitTrans(v10);
			v8 = DRLG_InitSetPC(v7);
			DRLG_LoadL2SP(v8);
			DRLG_L2(g36);
			v6 = DRLG_L2Pass3();
			v9 = DRLG_FreeL2SP(v6);
			g34 = v9;
			DRLG_InitL2Vals(v9);
			result = DRLG_SetPC();
			g10 = v1;
			return result;
		}
	}
	// 0x41dcc
	g34 = g31;
	SetRndSeed();
	v5 = g23;
	v4 = 96;
	*(int32_t *)*(int32_t *)(v5 - 0x7530) = 16;
	*(int32_t *)*(int32_t *)(v5 - 0x7534) = 16;
	v10 = *(int32_t *)(g23 - 0x753c);
	*(int32_t *)*(int32_t *)(g23 - 0x7538) = v4;
	*(int32_t *)v10 = v4;
	v7 = DRLG_InitTrans(v10);
	v8 = DRLG_InitSetPC(v7);
	DRLG_LoadL2SP(v8);
	DRLG_L2(g36);
	v6 = DRLG_L2Pass3();
	v9 = DRLG_FreeL2SP(v6);
	g34 = v9;
	DRLG_InitL2Vals(v9);
	result = DRLG_SetPC();
	g10 = v1;
	return result;
}

// Address range: 0x3d910 - 0x3d9cc
int32_t DRLG_LoadL2SP(int32_t a1)
{
	int32_t v1 = g36;                        // 0x3d910
	int32_t v2 = g10;                        // 0x3d914
	int32_t v3 = *(int32_t *)(g23 - 0x7524); // 0x3d918
	g36 = v3;
	g35 = *(int32_t *)(g23 - 0x7528);
	*(int32_t *)v3 = 0;
	if (function_acae8(8) != 0) {
		int32_t result = LoadFileInMem(*(int32_t *)(g23 - 0x6394), NULL); // 0x3d94c
		*(int32_t *)g35 = result;
		*(int32_t *)g36 = 1;
		// branch -> 0x3d9b4
		// 0x3d9b4
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x3d960
	int32_t result2; // r3
	if (function_acae8(9) == 0) {
		int32_t v4 = function_acae8(14); // 0x3d990
		result2 = v4;
		if (v4 != 0) {
			int32_t v5 = LoadFileInMem(*(int32_t *)(g23 - 0x639c), NULL); // 0x3d9a4
			result2 = v5;
			*(int32_t *)g35 = v5;
			*(int32_t *)g36 = 1;
			// branch -> 0x3d9b4
		}
	} else {
		int32_t v6 = LoadFileInMem(*(int32_t *)(g23 - 0x6398), NULL); // 0x3d978
		result2 = v6;
		*(int32_t *)g35 = v6;
		*(int32_t *)g36 = 1;
		// branch -> 0x3d9b4
	}
	// 0x3d9b4
	g36 = v1;
	g10 = v2;
	return result2;
}

// Address range: 0x3d9cc - 0x3d9f0
int32_t DRLG_FreeL2SP(int32_t a1)
{
	// 0x3d9cc
	return MemFreeDbg((int32_t *)*(int32_t *)(g23 - 0x7528));
}

// Address range: 0x4061c - 0x41088
int32_t DRLG_L2(int32_t a1)
{
	int32_t v1 = g10; // 0x40620
	int32_t *v2 = (int32_t *)(g23 - 0x7334);
	// branch -> 0x40660
	while (true) {
		// 0x40660
		*(int32_t *)*v2 = 0;
		int32_t v3 = InitDungeon();                     // 0x40668
		int32_t v4 = CreateDungeon(DRLG_InitTrans(v3)); // 0x40670
		int32_t v5;                                     // ctr
		int32_t v6;                                     // r5
		int32_t v7;                                     // r6
		int32_t v8;                                     // r7
		int32_t v9;                                     // 0x40874
		int32_t v10;                                    // 0x40dbc
		int32_t v11;                                    // 0x40f04
		int32_t v12;                                    // 0x41050
		int32_t v13;                                    // 0x40878
		int32_t v14;                                    // 0x40db0
		int32_t v15;                                    // 0x40f10
		int32_t v16;                                    // 0x4105c
		int32_t v17;                                    // 0x41060
		int32_t result;                                 // 0x41070
		int32_t v18;                                    // 0x40dac
		int32_t v19;                                    // 0x40dbc
		int32_t v20;                                    // 0x40dc4
		char v21;                                       // 0x40e94
		char v22;                                       // 0x40e9c
		char v23;                                       // 0x40ea4
		char v24;                                       // 0x40eac
		char v25;                                       // 0x40eb4
		char v26;                                       // 0x40ebc
		char v27;                                       // 0x40ec4
		char v28;                                       // 0x40ecc
		char v29;                                       // 0x40ed4
		char v30;                                       // 0x40edc
		char v31;                                       // 0x40ee4
		char v32;                                       // 0x40eec
		char v33;                                       // 0x40ef4
		char v34;                                       // 0x40efc
		char v35;                                       // 0x40fe0
		char v36;                                       // 0x40fe8
		char v37;                                       // 0x40ff0
		char v38;                                       // 0x40ff8
		char v39;                                       // 0x41000
		char v40;                                       // 0x41008
		char v41;                                       // 0x41010
		char v42;                                       // 0x41018
		char v43;                                       // 0x41020
		char v44;                                       // 0x41028
		char v45;                                       // 0x41030
		char v46;                                       // 0x41038
		char v47;                                       // 0x41040
		char v48;                                       // 0x41048
		if (v4 != 0) {
			// 0x4067c
			L2TileFix(v4);
			if (*(int32_t *)g25 != 0) {
				// 0x4068c
				DRLG_L2SetRoom(*(int32_t *)g36, *(int32_t *)g35);
				// branch -> 0x40698
			}
			// 0x40698
			DRLG_L2FloodTVal(function_3c374(3));
			int32_t v49 = g27; // 0x406a4
			if (v49 == 0) {
				int32_t v50 = DRLG_L2PlaceMiniSet((char *)g30, 1, 1, -1, -1, 1, 0); // 0x406c8
				g24 = v50;
				int32_t v51 = 0; // 0x406f8
				if (v50 != 0) {
					int32_t v52 = DRLG_L2PlaceMiniSet((char *)g29, 1, 1, -1, -1, 0, 1); // 0x406f0
					g24 = v52;
					v51 = v52;
					// branch -> 0x406f8
				}
				// 0x406f8
				if (v51 != 0) {
					// 0x40700
					if (*(char *)g31 == 5) {
						// 0x4070c
						g24 = DRLG_L2PlaceMiniSet((char *)g28, 1, 1, -1, -1, 0, 6);
						// branch -> 0x40730
					}
				}
				int32_t *v53 = (int32_t *)g32; // 0x40730
				*v53 = *v53 - 2;
				// branch -> 0x4086c
			} else {
				int32_t v54 = DRLG_L2PlaceMiniSet((char *)g30, 1, 1, -1, -1, 0, 0); // 0x40764
				g24 = v54;
				if (v49 == 1) {
					int32_t v55 = 0; // 0x40794
					if (v54 != 0) {
						int32_t v56 = DRLG_L2PlaceMiniSet((char *)g29, 1, 1, -1, -1, 1, 1); // 0x4078c
						g24 = v56;
						v55 = v56;
						// branch -> 0x40794
					}
					// 0x40794
					if (v55 != 0) {
						// 0x4079c
						if (*(char *)g31 == 5) {
							// 0x407a8
							g24 = DRLG_L2PlaceMiniSet((char *)g28, 1, 1, -1, -1, 0, 6);
							// branch -> 0x407cc
						}
					}
					int32_t *v57 = (int32_t *)g33; // 0x407cc
					*v57 = *v57 - 1;
					// branch -> 0x4086c
				} else {
					int32_t v58 = 0; // 0x40828
					if (v54 != 0) {
						int32_t v59 = DRLG_L2PlaceMiniSet((char *)g29, 1, 1, -1, -1, 0, 1); // 0x40820
						g24 = v59;
						v58 = v59;
						// branch -> 0x40828
					}
					// 0x40828
					if (v58 != 0) {
						// 0x40830
						if (*(char *)g31 == 5) {
							// 0x4083c
							g24 = DRLG_L2PlaceMiniSet((char *)g28, 1, 1, -1, -1, 1, 6);
							// branch -> 0x40860
						}
					}
					int32_t *v60 = (int32_t *)g32; // 0x40860
					*v60 = *v60 - 2;
					// branch -> 0x4086c
				}
				// 0x4086c
				if (g24 == 0) {
				lab_0x4086c_2:
					// 0x4086c
					v2 = &g26;
					// branch -> 0x40660
					continue;
				} else {
					// 0x40874
					v9 = L2LockoutFix();
					v13 = L2DoorFix(v9);
					L2DirtFix(v13);
					if (g24 != 0) {
						// 0x40888
						DRLG_PlaceThemeRooms(6, 10, 3, 0, 0);
						// branch -> 0x408a0
					}
					// 0x408a0
					DRLG_L2PlaceRndSet((char *)(g23 - 0x167a), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1666), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1652), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x163e), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x162a), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1616), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1602), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x15ee), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1a64), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1a52), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1a40), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1a2e), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1a1c), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1a0a), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x19f8), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x19e6), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1c84), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1c72), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1c60), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1c4e), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1c3c), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1c2a), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1c18), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1c06), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1bf4), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1be2), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1bd0), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1bbe), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1bac), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1b9a), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1b88), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1b76), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1b64), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1b56), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1b48), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1b3a), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1b2c), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1b1e), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1b10), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1b02), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1af4), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1ae2), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1ad0), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1abe), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1aac), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1a9a), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1a88), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1a76), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x19d4), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x19c6), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x19b8), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x19aa), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x199c), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x198e), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1980), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1972), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1964), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1956), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1948), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x193a), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x192c), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x191e), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1910), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1902), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x18f4), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x18e6), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x18d8), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x18ca), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x18bc), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x18ae), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x18a0), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1892), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1884), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1876), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1868), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x185a), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x184c), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x183e), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1830), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1822), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1814), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1806), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x17f8), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x17ea), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x17dc), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x17ce), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x17c0), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x17b2), 100);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x173e), 99);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x16d6), 10);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x16d2), 10);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x16ce), 10);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x16ca), 10);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x16c6), 10);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x16c2), 10);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x16be), 50);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x16ba), 1);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x169a), 1);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x172a), 3);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1720), 3);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1716), 3);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1710), 3);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x170a), 3);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x1700), 20);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x16fa), 20);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x16f4), 3);
					DRLG_L2PlaceRndSet((char *)(g23 - 0x16ea), 20);
					v18 = DRLG_L2PlaceRndSet((char *)(g23 - 0x16e0), 20);
					g34 = v18;
					v14 = DRLG_L2Subs(v18);
					DRLG_L2Shadows(v14);
					v10 = g23;
					v19 = *(int32_t *)(v10 - 0x77cc);
					v6 = v19;
					v5 = 20;
					v20 = *(int32_t *)(v10 - 0x7540);
					v7 = v20;
					v8 = 0;
					int32_t v61 = v20; // 0x40dd0
					int32_t v62 = v19; // 0x40dcc
					// branch -> 0x40dcc
					while (true) {
						// 0x40dcc
						*(char *)v61 = *(char *)v62;
						*(char *)(v7 + 40) = *(char *)(v6 + 40);
						*(char *)(v7 + 80) = *(char *)(v6 + 80);
						*(char *)(v7 + 120) = *(char *)(v6 + 120);
						*(char *)(v7 + 160) = *(char *)(v6 + 160);
						*(char *)(v7 + 200) = *(char *)(v6 + 200);
						*(char *)(v7 + 240) = *(char *)(v6 + 240);
						*(char *)(v7 + 280) = *(char *)(v6 + 280);
						*(char *)(v7 + 320) = *(char *)(v6 + 320);
						*(char *)(v7 + 360) = *(char *)(v6 + 360);
						*(char *)(v7 + 400) = *(char *)(v6 + 400);
						*(char *)(v7 + 440) = *(char *)(v6 + 440);
						*(char *)(v7 + 480) = *(char *)(v6 + 480);
						*(char *)(v7 + 520) = *(char *)(v6 + 520);
						*(char *)(v7 + 560) = *(char *)(v6 + 560);
						*(char *)(v7 + 600) = *(char *)(v6 + 600);
						*(char *)(v7 + 640) = *(char *)(v6 + 640);
						*(char *)(v7 + 680) = *(char *)(v6 + 680);
						*(char *)(v7 + 720) = *(char *)(v6 + 720);
						*(char *)(v7 + 760) = *(char *)(v6 + 760);
						*(char *)(v7 + 800) = *(char *)(v6 + 800);
						*(char *)(v7 + 840) = *(char *)(v6 + 840);
						*(char *)(v7 + 880) = *(char *)(v6 + 880);
						*(char *)(v7 + 920) = *(char *)(v6 + 920);
						*(char *)(v7 + 960) = *(char *)(v6 + 960);
						v21 = *(char *)(v6 + 1000);
						*(char *)(v7 + 1000) = v21;
						v22 = *(char *)(v6 + 1040);
						*(char *)(v7 + 1040) = v22;
						v23 = *(char *)(v6 + 1080);
						*(char *)(v7 + 1080) = v23;
						v24 = *(char *)(v6 + 1120);
						*(char *)(v7 + 1120) = v24;
						v25 = *(char *)(v6 + 1160);
						*(char *)(v7 + 1160) = v25;
						v26 = *(char *)(v6 + 1200);
						*(char *)(v7 + 1200) = v26;
						v27 = *(char *)(v6 + 1240);
						*(char *)(v7 + 1240) = v27;
						v28 = *(char *)(v6 + 1280);
						*(char *)(v7 + 1280) = v28;
						v29 = *(char *)(v6 + 1320);
						*(char *)(v7 + 1320) = v29;
						v30 = *(char *)(v6 + 1360);
						*(char *)(v7 + 1360) = v30;
						v31 = *(char *)(v6 + 1400);
						*(char *)(v7 + 1400) = v31;
						v32 = *(char *)(v6 + 1440);
						*(char *)(v7 + 1440) = v32;
						v33 = *(char *)(v6 + 1480);
						*(char *)(v7 + 1480) = v33;
						v34 = *(char *)(v6 + 1520);
						*(char *)(v7 + 1520) = v34;
						v11 = v6;
						v6 = v11 + 1;
						*(char *)(v7 + 1560) = *(char *)(v11 + 1560);
						v15 = v7 + 1;
						v7 = v15;
						v8++;
						*(char *)v15 = *(char *)v6;
						*(char *)(v7 + 40) = *(char *)(v6 + 40);
						*(char *)(v7 + 80) = *(char *)(v6 + 80);
						*(char *)(v7 + 120) = *(char *)(v6 + 120);
						*(char *)(v7 + 160) = *(char *)(v6 + 160);
						*(char *)(v7 + 200) = *(char *)(v6 + 200);
						*(char *)(v7 + 240) = *(char *)(v6 + 240);
						*(char *)(v7 + 280) = *(char *)(v6 + 280);
						*(char *)(v7 + 320) = *(char *)(v6 + 320);
						*(char *)(v7 + 360) = *(char *)(v6 + 360);
						*(char *)(v7 + 400) = *(char *)(v6 + 400);
						*(char *)(v7 + 440) = *(char *)(v6 + 440);
						*(char *)(v7 + 480) = *(char *)(v6 + 480);
						*(char *)(v7 + 520) = *(char *)(v6 + 520);
						*(char *)(v7 + 560) = *(char *)(v6 + 560);
						*(char *)(v7 + 600) = *(char *)(v6 + 600);
						*(char *)(v7 + 640) = *(char *)(v6 + 640);
						*(char *)(v7 + 680) = *(char *)(v6 + 680);
						*(char *)(v7 + 720) = *(char *)(v6 + 720);
						*(char *)(v7 + 760) = *(char *)(v6 + 760);
						*(char *)(v7 + 800) = *(char *)(v6 + 800);
						*(char *)(v7 + 840) = *(char *)(v6 + 840);
						*(char *)(v7 + 880) = *(char *)(v6 + 880);
						*(char *)(v7 + 920) = *(char *)(v6 + 920);
						*(char *)(v7 + 960) = *(char *)(v6 + 960);
						v35 = *(char *)(v6 + 1000);
						*(char *)(v7 + 1000) = v35;
						v36 = *(char *)(v6 + 1040);
						*(char *)(v7 + 1040) = v36;
						v37 = *(char *)(v6 + 1080);
						*(char *)(v7 + 1080) = v37;
						v38 = *(char *)(v6 + 1120);
						*(char *)(v7 + 1120) = v38;
						v39 = *(char *)(v6 + 1160);
						*(char *)(v7 + 1160) = v39;
						v40 = *(char *)(v6 + 1200);
						*(char *)(v7 + 1200) = v40;
						v41 = *(char *)(v6 + 1240);
						*(char *)(v7 + 1240) = v41;
						v42 = *(char *)(v6 + 1280);
						*(char *)(v7 + 1280) = v42;
						v43 = *(char *)(v6 + 1320);
						*(char *)(v7 + 1320) = v43;
						v44 = *(char *)(v6 + 1360);
						*(char *)(v7 + 1360) = v44;
						v45 = *(char *)(v6 + 1400);
						*(char *)(v7 + 1400) = v45;
						v46 = *(char *)(v6 + 1440);
						*(char *)(v7 + 1440) = v46;
						v47 = *(char *)(v6 + 1480);
						*(char *)(v7 + 1480) = v47;
						v48 = *(char *)(v6 + 1520);
						*(char *)(v7 + 1520) = v48;
						v12 = v6;
						v6 = v12 + 1;
						*(char *)(v7 + 1560) = *(char *)(v12 + 1560);
						v16 = v7 + 1;
						v7 = v16;
						v17 = v5 - 1;
						v5 = v17;
						if (v17 == 0) {
							// 0x41064
							DRLG_Init_Globals();
							result = DRLG_CheckQuests(*(int32_t *)g36, *(int32_t *)g35);
							g10 = v1;
							return result;
						}
					lab_0x40dcc_2:
						// 0x40dcc
						v61 = v16;
						v62 = v6;
						// branch -> 0x40dcc
					}
				}
			}
			// 0x4086c
			if (g24 == 0) {
				goto lab_0x4086c_2;
			}
			// 0x40874
			v9 = L2LockoutFix();
			v13 = L2DoorFix(v9);
			L2DirtFix(v13);
			if (g24 != 0) {
				// 0x40888
				DRLG_PlaceThemeRooms(6, 10, 3, 0, 0);
				// branch -> 0x408a0
			}
			// 0x408a0
			DRLG_L2PlaceRndSet((char *)(g23 - 0x167a), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1666), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1652), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x163e), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x162a), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1616), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1602), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x15ee), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1a64), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1a52), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1a40), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1a2e), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1a1c), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1a0a), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x19f8), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x19e6), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1c84), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1c72), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1c60), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1c4e), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1c3c), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1c2a), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1c18), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1c06), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1bf4), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1be2), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1bd0), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1bbe), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1bac), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1b9a), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1b88), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1b76), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1b64), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1b56), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1b48), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1b3a), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1b2c), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1b1e), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1b10), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1b02), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1af4), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1ae2), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1ad0), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1abe), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1aac), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1a9a), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1a88), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1a76), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x19d4), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x19c6), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x19b8), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x19aa), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x199c), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x198e), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1980), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1972), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1964), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1956), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1948), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x193a), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x192c), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x191e), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1910), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1902), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x18f4), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x18e6), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x18d8), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x18ca), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x18bc), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x18ae), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x18a0), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1892), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1884), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1876), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1868), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x185a), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x184c), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x183e), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1830), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1822), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1814), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1806), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x17f8), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x17ea), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x17dc), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x17ce), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x17c0), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x17b2), 100);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x173e), 99);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x16d6), 10);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x16d2), 10);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x16ce), 10);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x16ca), 10);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x16c6), 10);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x16c2), 10);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x16be), 50);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x16ba), 1);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x169a), 1);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x172a), 3);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1720), 3);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1716), 3);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1710), 3);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x170a), 3);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x1700), 20);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x16fa), 20);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x16f4), 3);
			DRLG_L2PlaceRndSet((char *)(g23 - 0x16ea), 20);
			v18 = DRLG_L2PlaceRndSet((char *)(g23 - 0x16e0), 20);
			g34 = v18;
			v14 = DRLG_L2Subs(v18);
			DRLG_L2Shadows(v14);
			v10 = g23;
			v19 = *(int32_t *)(v10 - 0x77cc);
			v6 = v19;
			v20 = *(int32_t *)(v10 - 0x7540);
			v7 = v20;
			// branch -> 0x40dcc
			while (true) {
				// 0x40dcc
				*(char *)v20 = *(char *)v19;
				*(char *)(v7 + 40) = *(char *)(v6 + 40);
				*(char *)(v7 + 80) = *(char *)(v6 + 80);
				*(char *)(v7 + 120) = *(char *)(v6 + 120);
				*(char *)(v7 + 160) = *(char *)(v6 + 160);
				*(char *)(v7 + 200) = *(char *)(v6 + 200);
				*(char *)(v7 + 240) = *(char *)(v6 + 240);
				*(char *)(v7 + 280) = *(char *)(v6 + 280);
				*(char *)(v7 + 320) = *(char *)(v6 + 320);
				*(char *)(v7 + 360) = *(char *)(v6 + 360);
				*(char *)(v7 + 400) = *(char *)(v6 + 400);
				*(char *)(v7 + 440) = *(char *)(v6 + 440);
				*(char *)(v7 + 480) = *(char *)(v6 + 480);
				*(char *)(v7 + 520) = *(char *)(v6 + 520);
				*(char *)(v7 + 560) = *(char *)(v6 + 560);
				*(char *)(v7 + 600) = *(char *)(v6 + 600);
				*(char *)(v7 + 640) = *(char *)(v6 + 640);
				*(char *)(v7 + 680) = *(char *)(v6 + 680);
				*(char *)(v7 + 720) = *(char *)(v6 + 720);
				*(char *)(v7 + 760) = *(char *)(v6 + 760);
				*(char *)(v7 + 800) = *(char *)(v6 + 800);
				*(char *)(v7 + 840) = *(char *)(v6 + 840);
				*(char *)(v7 + 880) = *(char *)(v6 + 880);
				*(char *)(v7 + 920) = *(char *)(v6 + 920);
				*(char *)(v7 + 960) = *(char *)(v6 + 960);
				v21 = *(char *)(v6 + 1000);
				*(char *)(v7 + 1000) = v21;
				v22 = *(char *)(v6 + 1040);
				*(char *)(v7 + 1040) = v22;
				v23 = *(char *)(v6 + 1080);
				*(char *)(v7 + 1080) = v23;
				v24 = *(char *)(v6 + 1120);
				*(char *)(v7 + 1120) = v24;
				v25 = *(char *)(v6 + 1160);
				*(char *)(v7 + 1160) = v25;
				v26 = *(char *)(v6 + 1200);
				*(char *)(v7 + 1200) = v26;
				v27 = *(char *)(v6 + 1240);
				*(char *)(v7 + 1240) = v27;
				v28 = *(char *)(v6 + 1280);
				*(char *)(v7 + 1280) = v28;
				v29 = *(char *)(v6 + 1320);
				*(char *)(v7 + 1320) = v29;
				v30 = *(char *)(v6 + 1360);
				*(char *)(v7 + 1360) = v30;
				v31 = *(char *)(v6 + 1400);
				*(char *)(v7 + 1400) = v31;
				v32 = *(char *)(v6 + 1440);
				*(char *)(v7 + 1440) = v32;
				v33 = *(char *)(v6 + 1480);
				*(char *)(v7 + 1480) = v33;
				v34 = *(char *)(v6 + 1520);
				*(char *)(v7 + 1520) = v34;
				v11 = v6;
				v6 = v11 + 1;
				*(char *)(v7 + 1560) = *(char *)(v11 + 1560);
				v15 = v7 + 1;
				v7 = v15;
				v8 = 1;
				*(char *)v15 = *(char *)v6;
				*(char *)(v7 + 40) = *(char *)(v6 + 40);
				*(char *)(v7 + 80) = *(char *)(v6 + 80);
				*(char *)(v7 + 120) = *(char *)(v6 + 120);
				*(char *)(v7 + 160) = *(char *)(v6 + 160);
				*(char *)(v7 + 200) = *(char *)(v6 + 200);
				*(char *)(v7 + 240) = *(char *)(v6 + 240);
				*(char *)(v7 + 280) = *(char *)(v6 + 280);
				*(char *)(v7 + 320) = *(char *)(v6 + 320);
				*(char *)(v7 + 360) = *(char *)(v6 + 360);
				*(char *)(v7 + 400) = *(char *)(v6 + 400);
				*(char *)(v7 + 440) = *(char *)(v6 + 440);
				*(char *)(v7 + 480) = *(char *)(v6 + 480);
				*(char *)(v7 + 520) = *(char *)(v6 + 520);
				*(char *)(v7 + 560) = *(char *)(v6 + 560);
				*(char *)(v7 + 600) = *(char *)(v6 + 600);
				*(char *)(v7 + 640) = *(char *)(v6 + 640);
				*(char *)(v7 + 680) = *(char *)(v6 + 680);
				*(char *)(v7 + 720) = *(char *)(v6 + 720);
				*(char *)(v7 + 760) = *(char *)(v6 + 760);
				*(char *)(v7 + 800) = *(char *)(v6 + 800);
				*(char *)(v7 + 840) = *(char *)(v6 + 840);
				*(char *)(v7 + 880) = *(char *)(v6 + 880);
				*(char *)(v7 + 920) = *(char *)(v6 + 920);
				*(char *)(v7 + 960) = *(char *)(v6 + 960);
				v35 = *(char *)(v6 + 1000);
				*(char *)(v7 + 1000) = v35;
				v36 = *(char *)(v6 + 1040);
				*(char *)(v7 + 1040) = v36;
				v37 = *(char *)(v6 + 1080);
				*(char *)(v7 + 1080) = v37;
				v38 = *(char *)(v6 + 1120);
				*(char *)(v7 + 1120) = v38;
				v39 = *(char *)(v6 + 1160);
				*(char *)(v7 + 1160) = v39;
				v40 = *(char *)(v6 + 1200);
				*(char *)(v7 + 1200) = v40;
				v41 = *(char *)(v6 + 1240);
				*(char *)(v7 + 1240) = v41;
				v42 = *(char *)(v6 + 1280);
				*(char *)(v7 + 1280) = v42;
				v43 = *(char *)(v6 + 1320);
				*(char *)(v7 + 1320) = v43;
				v44 = *(char *)(v6 + 1360);
				*(char *)(v7 + 1360) = v44;
				v45 = *(char *)(v6 + 1400);
				*(char *)(v7 + 1400) = v45;
				v46 = *(char *)(v6 + 1440);
				*(char *)(v7 + 1440) = v46;
				v47 = *(char *)(v6 + 1480);
				*(char *)(v7 + 1480) = v47;
				v48 = *(char *)(v6 + 1520);
				*(char *)(v7 + 1520) = v48;
				v12 = v6;
				v6 = v12 + 1;
				*(char *)(v7 + 1560) = *(char *)(v12 + 1560);
				v16 = v7 + 1;
				v7 = v16;
				v17 = 19;
				v5 = v17;
				if (v17 != 0) {
					goto lab_0x40dcc_2;
				}
				// 0x41064
				DRLG_Init_Globals();
				result = DRLG_CheckQuests(*(int32_t *)g36, *(int32_t *)g35);
				g10 = v1;
				return result;
			}
		}
		// 0x4086c
		if (g24 == 0) {
			goto lab_0x4086c_2;
		}
		// 0x40874
		v9 = L2LockoutFix();
		v13 = L2DoorFix(v9);
		L2DirtFix(v13);
		if (g24 != 0) {
			// 0x40888
			DRLG_PlaceThemeRooms(6, 10, 3, 0, 0);
			// branch -> 0x408a0
		}
		// 0x408a0
		DRLG_L2PlaceRndSet((char *)(g23 - 0x167a), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1666), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1652), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x163e), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x162a), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1616), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1602), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x15ee), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1a64), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1a52), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1a40), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1a2e), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1a1c), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1a0a), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x19f8), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x19e6), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1c84), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1c72), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1c60), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1c4e), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1c3c), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1c2a), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1c18), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1c06), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1bf4), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1be2), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1bd0), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1bbe), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1bac), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1b9a), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1b88), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1b76), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1b64), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1b56), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1b48), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1b3a), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1b2c), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1b1e), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1b10), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1b02), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1af4), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1ae2), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1ad0), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1abe), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1aac), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1a9a), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1a88), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1a76), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x19d4), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x19c6), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x19b8), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x19aa), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x199c), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x198e), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1980), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1972), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1964), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1956), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1948), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x193a), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x192c), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x191e), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1910), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1902), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x18f4), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x18e6), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x18d8), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x18ca), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x18bc), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x18ae), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x18a0), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1892), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1884), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1876), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1868), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x185a), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x184c), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x183e), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1830), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1822), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1814), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1806), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x17f8), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x17ea), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x17dc), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x17ce), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x17c0), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x17b2), 100);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x173e), 99);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x16d6), 10);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x16d2), 10);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x16ce), 10);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x16ca), 10);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x16c6), 10);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x16c2), 10);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x16be), 50);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x16ba), 1);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x169a), 1);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x172a), 3);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1720), 3);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1716), 3);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1710), 3);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x170a), 3);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x1700), 20);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x16fa), 20);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x16f4), 3);
		DRLG_L2PlaceRndSet((char *)(g23 - 0x16ea), 20);
		v18 = DRLG_L2PlaceRndSet((char *)(g23 - 0x16e0), 20);
		g34 = v18;
		v14 = DRLG_L2Subs(v18);
		DRLG_L2Shadows(v14);
		v10 = g23;
		v19 = *(int32_t *)(v10 - 0x77cc);
		v6 = v19;
		v20 = *(int32_t *)(v10 - 0x7540);
		v7 = v20;
		// branch -> 0x40dcc
		while (true) {
			// 0x40dcc
			*(char *)v20 = *(char *)v19;
			*(char *)(v7 + 40) = *(char *)(v6 + 40);
			*(char *)(v7 + 80) = *(char *)(v6 + 80);
			*(char *)(v7 + 120) = *(char *)(v6 + 120);
			*(char *)(v7 + 160) = *(char *)(v6 + 160);
			*(char *)(v7 + 200) = *(char *)(v6 + 200);
			*(char *)(v7 + 240) = *(char *)(v6 + 240);
			*(char *)(v7 + 280) = *(char *)(v6 + 280);
			*(char *)(v7 + 320) = *(char *)(v6 + 320);
			*(char *)(v7 + 360) = *(char *)(v6 + 360);
			*(char *)(v7 + 400) = *(char *)(v6 + 400);
			*(char *)(v7 + 440) = *(char *)(v6 + 440);
			*(char *)(v7 + 480) = *(char *)(v6 + 480);
			*(char *)(v7 + 520) = *(char *)(v6 + 520);
			*(char *)(v7 + 560) = *(char *)(v6 + 560);
			*(char *)(v7 + 600) = *(char *)(v6 + 600);
			*(char *)(v7 + 640) = *(char *)(v6 + 640);
			*(char *)(v7 + 680) = *(char *)(v6 + 680);
			*(char *)(v7 + 720) = *(char *)(v6 + 720);
			*(char *)(v7 + 760) = *(char *)(v6 + 760);
			*(char *)(v7 + 800) = *(char *)(v6 + 800);
			*(char *)(v7 + 840) = *(char *)(v6 + 840);
			*(char *)(v7 + 880) = *(char *)(v6 + 880);
			*(char *)(v7 + 920) = *(char *)(v6 + 920);
			*(char *)(v7 + 960) = *(char *)(v6 + 960);
			v21 = *(char *)(v6 + 1000);
			*(char *)(v7 + 1000) = v21;
			v22 = *(char *)(v6 + 1040);
			*(char *)(v7 + 1040) = v22;
			v23 = *(char *)(v6 + 1080);
			*(char *)(v7 + 1080) = v23;
			v24 = *(char *)(v6 + 1120);
			*(char *)(v7 + 1120) = v24;
			v25 = *(char *)(v6 + 1160);
			*(char *)(v7 + 1160) = v25;
			v26 = *(char *)(v6 + 1200);
			*(char *)(v7 + 1200) = v26;
			v27 = *(char *)(v6 + 1240);
			*(char *)(v7 + 1240) = v27;
			v28 = *(char *)(v6 + 1280);
			*(char *)(v7 + 1280) = v28;
			v29 = *(char *)(v6 + 1320);
			*(char *)(v7 + 1320) = v29;
			v30 = *(char *)(v6 + 1360);
			*(char *)(v7 + 1360) = v30;
			v31 = *(char *)(v6 + 1400);
			*(char *)(v7 + 1400) = v31;
			v32 = *(char *)(v6 + 1440);
			*(char *)(v7 + 1440) = v32;
			v33 = *(char *)(v6 + 1480);
			*(char *)(v7 + 1480) = v33;
			v34 = *(char *)(v6 + 1520);
			*(char *)(v7 + 1520) = v34;
			v11 = v6;
			v6 = v11 + 1;
			*(char *)(v7 + 1560) = *(char *)(v11 + 1560);
			v15 = v7 + 1;
			v7 = v15;
			v8 = 1;
			*(char *)v15 = *(char *)v6;
			*(char *)(v7 + 40) = *(char *)(v6 + 40);
			*(char *)(v7 + 80) = *(char *)(v6 + 80);
			*(char *)(v7 + 120) = *(char *)(v6 + 120);
			*(char *)(v7 + 160) = *(char *)(v6 + 160);
			*(char *)(v7 + 200) = *(char *)(v6 + 200);
			*(char *)(v7 + 240) = *(char *)(v6 + 240);
			*(char *)(v7 + 280) = *(char *)(v6 + 280);
			*(char *)(v7 + 320) = *(char *)(v6 + 320);
			*(char *)(v7 + 360) = *(char *)(v6 + 360);
			*(char *)(v7 + 400) = *(char *)(v6 + 400);
			*(char *)(v7 + 440) = *(char *)(v6 + 440);
			*(char *)(v7 + 480) = *(char *)(v6 + 480);
			*(char *)(v7 + 520) = *(char *)(v6 + 520);
			*(char *)(v7 + 560) = *(char *)(v6 + 560);
			*(char *)(v7 + 600) = *(char *)(v6 + 600);
			*(char *)(v7 + 640) = *(char *)(v6 + 640);
			*(char *)(v7 + 680) = *(char *)(v6 + 680);
			*(char *)(v7 + 720) = *(char *)(v6 + 720);
			*(char *)(v7 + 760) = *(char *)(v6 + 760);
			*(char *)(v7 + 800) = *(char *)(v6 + 800);
			*(char *)(v7 + 840) = *(char *)(v6 + 840);
			*(char *)(v7 + 880) = *(char *)(v6 + 880);
			*(char *)(v7 + 920) = *(char *)(v6 + 920);
			*(char *)(v7 + 960) = *(char *)(v6 + 960);
			v35 = *(char *)(v6 + 1000);
			*(char *)(v7 + 1000) = v35;
			v36 = *(char *)(v6 + 1040);
			*(char *)(v7 + 1040) = v36;
			v37 = *(char *)(v6 + 1080);
			*(char *)(v7 + 1080) = v37;
			v38 = *(char *)(v6 + 1120);
			*(char *)(v7 + 1120) = v38;
			v39 = *(char *)(v6 + 1160);
			*(char *)(v7 + 1160) = v39;
			v40 = *(char *)(v6 + 1200);
			*(char *)(v7 + 1200) = v40;
			v41 = *(char *)(v6 + 1240);
			*(char *)(v7 + 1240) = v41;
			v42 = *(char *)(v6 + 1280);
			*(char *)(v7 + 1280) = v42;
			v43 = *(char *)(v6 + 1320);
			*(char *)(v7 + 1320) = v43;
			v44 = *(char *)(v6 + 1360);
			*(char *)(v7 + 1360) = v44;
			v45 = *(char *)(v6 + 1400);
			*(char *)(v7 + 1400) = v45;
			v46 = *(char *)(v6 + 1440);
			*(char *)(v7 + 1440) = v46;
			v47 = *(char *)(v6 + 1480);
			*(char *)(v7 + 1480) = v47;
			v48 = *(char *)(v6 + 1520);
			*(char *)(v7 + 1520) = v48;
			v12 = v6;
			v6 = v12 + 1;
			*(char *)(v7 + 1560) = *(char *)(v12 + 1560);
			v16 = v7 + 1;
			v7 = v16;
			v17 = 19;
			v5 = v17;
			if (v17 != 0) {
				goto lab_0x40dcc_2;
			}
			// 0x41064
			DRLG_Init_Globals();
			result = DRLG_CheckQuests(*(int32_t *)g36, *(int32_t *)g35);
			g10 = v1;
			return result;
		}
	}
}

// Address range: 0x3cfc8 - 0x3d32c
int32_t DRLG_L2PlaceMiniSet(char *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x3cfcc
	g37 = a3 - a2;
	g27 = *(int32_t *)(g23 - 0x77cc);
	int32_t v2 = (int32_t)a1; // 0x3cfe0
	g28 = v2;
	g18 = *(int32_t *)(g23 - 0x7320);
	g26 = a4;
	int32_t v3 = v2 / 0x1000000;
	g35 = v3;
	int32_t v4 = (int32_t) * (char *)(v2 + 1); // 0x3d00c
	g32 = v4;
	int32_t v5 = 1;
	if (a3 != a2) {
		// 0x3d020
		a4 = g26;
		v3 = g35;
		v4 = g32;
		v5 = a2 + random(0);
		// branch -> 0x3d030
	}
	// 0x3d030
	g21 = a4 + 12;
	int32_t v6 = v4 * v3 + 2; // 0x3d03c
	int32_t v7 = 40 - v3;     // 0x3d048
	g29 = v7;
	int32_t v8 = 40 - v4; // r26
	int32_t result;
	int32_t v9; // 0x3d2a0
	if (v5 > 0) {
		int32_t v10 = 0;
		while (true) {
			// 0x3d060
			g37 = v7;
			g36 = random(0);
			g37 = v8;
			int32_t v11 = random(0); // 0x3d078
			g33 = v11;
			g31 = 0;
			int32_t v12 = 0; // 0x3d200
			// branch -> 0x3d200
			while (true) {
				int32_t v13 = v11; // 0x3d21c
				int32_t v14 = v12; // 0x3d208
				if (v12 < 200) {
					uint32_t v15 = g36; // 0x3d098
					int32_t v16 = 1;    // 0x3d1c435
					if (v15 >= *(int32_t *)*(int32_t *)(g23 - 0x7314)) {
						// 0x3d0a0
						if (v15 <= *(int32_t *)*(int32_t *)(g23 - 0x7318)) {
							// 0x3d0ac
							if (v11 >= *(int32_t *)*(int32_t *)(g23 - 0x731c)) {
								// 0x3d0b8
								if (v11 <= *(int32_t *)g18) {
									// 0x3d0c4
									v16 = 0;
									// branch -> 0x3d0c8
								} else {
									v16 = 1;
								}
							} else {
								v16 = 1;
							}
						} else {
							v16 = 1;
						}
					}
					int32_t v17 = v16; // 0x3d1c434
					int32_t v18 = v11; // 0x3d114
					if (g26 != -1) {
						// 0x3d0d0
						if (v15 >= a4 - v3) {
							// 0x3d0d8
							if (v15 <= g21) {
								// 0x3d0e0
								g37 = g29;
								g36 = random(0);
								g37 = v8;
								int32_t v19 = random(0); // 0x3d0f8
								g33 = v19;
								v17 = 0;
								v18 = v19;
								// branch -> 0x3d104
							} else {
								v17 = v16;
								v18 = v11;
							}
						} else {
							v17 = v16;
							v18 = v11;
						}
					}
					int32_t v20 = v17; // 0x3d1c433
					int32_t v21 = v18; // 0x3d1e0
					if (a5 != -1) {
						// 0x3d10c
						if (v18 >= a5 - v4) {
							// 0x3d114
							if (v18 <= a5 + 12) {
								// 0x3d11c
								g37 = g29;
								g36 = random(0);
								g37 = v8;
								int32_t v22 = random(0); // 0x3d134
								g33 = v22;
								v20 = 0;
								v21 = v22;
								// branch -> 0x3d140
							} else {
								v20 = v17;
								v21 = v18;
							}
						} else {
							v20 = v17;
							v21 = v18;
						}
					}
					int32_t v23 = g27 + v21;                        // 0x3d140
					int32_t v24 = *(int32_t *)(g23 - 0x7514) + v21; // 0x3d144
					uint32_t v25 = g32;                             // 0x3d1bc11
					int32_t v26 = v20;
					int32_t v27; // 0x3d0b030
					if (v25 > 0) {
						int32_t v28 = v20;     // 0x3d1cc61
						int32_t v29 = v20;     // 0x3d1a840
						int32_t v30 = v20;     // 0x3d1c4
						int32_t v31 = 0;       // 0x3d1b8
						int32_t v32 = g28 + 2; // 0x3d15c43
						while (true) {
							// 0x3d1c4
							if (v30 == 1) {
								int32_t v33 = v28; // 0x3d1cc57
								int32_t v34 = v32; // 0x3d15c44
								int32_t v35 = v29; // 0x3d1a841
								int32_t v36;       // 0x3d1b0
								int32_t v37;       // 0x3d1b4
								int32_t v38;       // 0x3d1b8
								if (g35 > 0) {
									int32_t v39 = v28; // 0x3d1cc60
									int32_t v40 = 0;   // 0x3d19c
									int32_t v41 = v32; // 0x3d198
									int32_t v42 = v29; // 0x3d1a8
									int32_t v43;       // 0x3d1c436
									while (true) {
										// 0x3d1a8
										if (v42 == 1) {
											char v44 = *(char *)v41; // 0x3d15c
											int32_t v45 = 40 * (g36 + v40);
											int32_t v46 = v39; // 0x3d1cc59
											int32_t v47 = 1;   // 0x3d1c438
											if (v44 != 0) {
												// 0x3d168
												if (v44 != *(char *)(v45 + v23)) {
													// 0x3d17c
													v46 = 0;
													v47 = 0;
													// branch -> 0x3d180
												} else {
													v46 = v39;
													v47 = 1;
												}
											}
											int32_t v48 = v46; // 0x3d1cc58
											int32_t v49 = v47; // 0x3d1c437
											if (*(char *)(v45 + v24) != 0) {
												// 0x3d194
												v48 = 0;
												v49 = 0;
												// branch -> 0x3d198
											}
											int32_t v50 = v41 + 1; // 0x3d198
											int32_t v51 = v40 + 1; // 0x3d19c
											if (v51 >= g35) {
												v33 = v48;
												v34 = v50;
												v35 = v49;
												v43 = v49;
												// break -> 0x3d1b0
												break;
											}
											v39 = v48;
											v40 = v51;
											v41 = v50;
											v42 = v49;
											// continue -> 0x3d1a8
											continue;
										} else {
											v33 = v39;
											v34 = v41;
											v35 = v42;
											v43 = v42;
										}
									}
									// 0x3d1b0
									v36 = v23 + 1;
									v37 = v24 + 1;
									v38 = v31 + 1;
									if (v38 >= v25) {
										v26 = v33;
										// break -> 0x3d1cc
										break;
									}
									v28 = v33;
									v29 = v35;
									v30 = v43;
									v31 = v38;
									v24 = v37;
									v23 = v36;
									v32 = v34;
									// continue -> 0x3d1c4
									continue;
								}
								// 0x3d1b0
								v36 = v23 + 1;
								v37 = v24 + 1;
								v38 = v31 + 1;
								if (v38 >= v25) {
									v26 = v33;
									// break -> 0x3d1cc
									break;
								}
								v28 = v33;
								v29 = v35;
								v30 = 1;
								v31 = v38;
								v24 = v37;
								v23 = v36;
								v32 = v34;
								// continue -> 0x3d1c4
								continue;
							} else {
								v26 = v28;
							}
						}
						// 0x3d1cc
						v27 = v21;
						if (v26 == 0) {
						lab_0x3d1d4:;
							int32_t v52 = g36 + 1; // 0x3d1d4
							g36 = v52;
							if (v52 == g29) {
								int32_t v53 = v21 + 1; // 0x3d1e0
								g33 = v53;
								g36 = 0;
								if (v53 == v8) {
									// 0x3d1f0
									g33 = 0;
									v27 = 0;
									// branch -> 0x3d1f4
								} else {
									v27 = v53;
								}
							} else {
								v27 = v21;
							}
						}
					lab_0x3d1f4:;
						int32_t v54 = g31 + 1; // 0x3d1f4
						g31 = v54;
						if (v26 != 0) {
							// break -> 0x3d208
							break;
						}
						v11 = v27;
						v12 = v54;
						// continue -> 0x3d200
						continue;
					}
					// 0x3d1cc
					if (v26 == 0) {
						goto lab_0x3d1d4;
					}
					v27 = v21;
					goto lab_0x3d1f4;
				}
				// 0x3d208
				if (v14 < 200) {
					int32_t v55 = g27 + v13; // 0x3d21c
					int32_t v56 = 0;         // r8
					int32_t v57 = g32;       // 0x3d26c15
					int32_t v58;             // 0x3d278
					if (v57 > 0) {
						int32_t v59 = 0; // 0x3d26876
						while (true) {
							int32_t v60 = g35;      // ctr
							int32_t v61 = g28 + v6; // 0x3d230
							int32_t v62 = 0;        // r5
							int32_t v63 = v57;      // 0x3d26c
							int32_t v64 = v59;      // 0x3d268
							int32_t v65 = v6;       // 0x3d23064
							if (g35 >= 1) {
								int32_t v66 = g35; // 0x3d26072
								int32_t v67 = v6;  // 0x3d25468
								int32_t v68 = 0;   // 0x3d248
								int32_t v69;       // 0x3d254
								while (true) {
									char v70 = *(char *)v61; // 0x3d23c
									int32_t v71 = v66;       // 0x3d260
									int32_t v72 = v68;       // 0x3d25c
									int32_t v73 = v67;       // 0x3d254
									if (v70 != 0) {
										// 0x3d248
										*(char *)(v55 + 40 * (g36 + v68)) = v70;
										v71 = v60;
										v72 = v62;
										v73 = v6;
										// branch -> 0x3d254
									}
									// 0x3d254
									v69 = v73 + 1;
									v6 = v69;
									int32_t v74 = v61 + 1; // 0x3d258
									int32_t v75 = v72 + 1; // 0x3d25c
									v62 = v75;
									int32_t v76 = v71 - 1; // 0x3d260
									v60 = v76;
									if (v76 == 0) {
										// break -> 0x3d264
										break;
									}
									v66 = v76;
									v67 = v69;
									v68 = v75;
									v61 = v74;
									// continue -> 0x3d23c
								}
								// 0x3d264
								v63 = g32;
								v64 = v56;
								v65 = v69;
								// branch -> 0x3d264
							}
							int32_t v77 = v55 + 1; // 0x3d264
							int32_t v78 = v64 + 1; // 0x3d268
							v56 = v78;
							if (v78 >= v63) {
								// break -> 0x3d274
								break;
							}
							v57 = v63;
							v59 = v78;
							v55 = v77;
							v6 = v65;
							// continue -> 0x3d228
						}
						// 0x3d274
						v58 = v10 + 1;
						if (v58 >= v5) {
							// 0x3d290
							if (a6 == 1) {
								// 0x3d29c
								v9 = g23;
								*(int32_t *)*(int32_t *)(v9 - 0x77b0) = 2 * g36 + 21;
								*(int32_t *)*(int32_t *)(v9 - 0x77b4) = 2 * g33 + 22;
								// branch -> 0x3d2bc
							}
							// 0x3d2bc
							if (a7 == 0) {
								// 0x3d2c8
								*(int32_t *)*(int32_t *)(g23 - 0x751c) = 2 * g36 + 21;
								*(int32_t *)*(int32_t *)(g23 - 0x7520) = 2 * g33 + 22;
								// branch -> 0x3d2e8
							}
							// 0x3d2e8
							if (a7 != 6) {
								// 0x3d318
								g10 = v1;
								return 1;
							}
							// 0x3d2f4
							*(int32_t *)*(int32_t *)(g23 - 0x751c) = 2 * g36 + 21;
							*(int32_t *)*(int32_t *)(g23 - 0x7520) = 2 * g33 + 22;
							// branch -> 0x3d318
							// 0x3d318
							g10 = v1;
							return 1;
						}
					lab_0x3d274:
						// 0x3d274
						v7 = g29;
						v10 = v58;
						// branch -> 0x3d060
						break;
					}
					// 0x3d274
					v58 = v10 + 1;
					if (v58 < v5) {
						goto lab_0x3d274;
					}
					// 0x3d290
					if (a6 == 1) {
						// 0x3d29c
						v9 = g23;
						*(int32_t *)*(int32_t *)(v9 - 0x77b0) = 2 * g36 + 21;
						*(int32_t *)*(int32_t *)(v9 - 0x77b4) = 2 * g33 + 22;
						// branch -> 0x3d2bc
					}
					// 0x3d2bc
					if (a7 == 0) {
						// 0x3d2c8
						*(int32_t *)*(int32_t *)(g23 - 0x751c) = 2 * g36 + 21;
						*(int32_t *)*(int32_t *)(g23 - 0x7520) = 2 * g33 + 22;
						// branch -> 0x3d2e8
					}
					// 0x3d2e8
					if (a7 == 6) {
						// 0x3d2f4
						*(int32_t *)*(int32_t *)(g23 - 0x751c) = 2 * g36 + 21;
						*(int32_t *)*(int32_t *)(g23 - 0x7520) = 2 * g33 + 22;
						// branch -> 0x3d318
						// 0x3d318
						g10 = v1;
						return 1;
					}
					result = 1;
				} else {
					result = 0;
				}
			}
		}
	} else {
		// 0x3d290
		if (a6 == 1) {
			// 0x3d29c
			v9 = g23;
			*(int32_t *)*(int32_t *)(v9 - 0x77b0) = 2 * g36 + 21;
			*(int32_t *)*(int32_t *)(v9 - 0x77b4) = 2 * g33 + 22;
			// branch -> 0x3d2bc
		}
		// 0x3d2bc
		if (a7 == 0) {
			// 0x3d2c8
			*(int32_t *)*(int32_t *)(g23 - 0x751c) = 2 * g36 + 21;
			*(int32_t *)*(int32_t *)(g23 - 0x7520) = 2 * g33 + 22;
			// branch -> 0x3d2e8
		}
		// 0x3d2e8
		if (a7 == 6) {
			// 0x3d2f4
			*(int32_t *)*(int32_t *)(g23 - 0x751c) = 2 * g36 + 21;
			*(int32_t *)*(int32_t *)(g23 - 0x7520) = 2 * g33 + 22;
			result = 1;
			// branch -> 0x3d318
		} else {
			result = 1;
		}
	}
	// 0x3d318
	g10 = v1;
	return result;
}

// Address range: 0x3d32c - 0x3d584
int32_t DRLG_L2PlaceRndSet(char *a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x3d334
	g19 = v1;
	int32_t v2 = (int32_t)a1; // 0x3d338
	g18 = *(int32_t *)(g23 - 0x7320);
	g17 = *(int32_t *)(g23 - 0x731c);
	g21 = a2;
	g16 = *(int32_t *)(g23 - 0x7318);
	int32_t v3 = *(int32_t *)(g23 - 0x7514); // 0x3d350
	int32_t v4 = 0;                          // r23
	int32_t v5 = v2 / 0x1000000;
	int32_t v6 = v5;                           // r29
	int32_t v7 = (int32_t) * (char *)(v2 + 1); // 0x3d364
	int32_t v8 = v7;                           // r27
	int32_t v9 = 2 * v5;                       // 0x3d368
	int32_t result = v7 * v5;                  // 0x3d36c
	int32_t v10 = 40 - v5;                     // 0x3d374
	g20 = v10;
	int32_t v11 = result + 2; // 0x3d378
	int32_t v12 = 40 - v7;    // 0x3d37c
	int32_t v13 = 2 * v7;     // 0x3d388
	if (v12 > 0) {
		int32_t v14 = 0; // 0x3d394
		while (true) {
			int32_t v15 = v14 - v7; // r21
			g36 = 0;
			int32_t v16 = result; // 0x3d580108
			int32_t v17 = v14;    // 0x3d560
			int32_t v18 = v10;    // 0x3d54c2131
			if (v10 > 0) {
				int32_t v19 = 0; // 0x3d474
				int32_t v20;     // 0x3d580110
				int32_t v21;     // 0x3d54c
				while (true) {
					int32_t v22 = 1; // 0x3d46034
					if (v19 >= *(int32_t *)*(int32_t *)(g23 - 0x7314)) {
						// 0x3d3b4
						if (v19 <= *(int32_t *)g16) {
							uint32_t v23 = v4; // 0x3d3c4
							if (v23 >= *(int32_t *)g17) {
								// 0x3d3cc
								if (v23 <= *(int32_t *)g18) {
									// 0x3d3d8
									v22 = 0;
									// branch -> 0x3d3dc
								} else {
									v22 = 1;
								}
							} else {
								v22 = 1;
							}
						} else {
							v22 = 1;
						}
					}
					int32_t v24 = v1;  // 0x3d3dc
					int32_t v25 = v3;  // 0x3d3e4
					int32_t v26 = v22; // 0x3d468
					int32_t v27;       // r30
					int32_t v28;       // 0x3d4d0
					if (v8 > 0) {
						int32_t v29 = v22;    // 0x3d46862
						int32_t v30 = v22;    // 0x3d44439
						int32_t v31 = v22;    // 0x3d460
						int32_t v32 = 0;      // 0x3d454
						int32_t v33 = v2 + 2; // 0x3d3f842
						while (true) {
							// 0x3d460
							if (v31 == 1) {
								int32_t v34 = v29; // 0x3d46858
								int32_t v35 = v33; // 0x3d3f843
								int32_t v36 = v30; // 0x3d44440
								int32_t v37;       // 0x3d44c
								int32_t v38;       // 0x3d450
								int32_t v39;       // 0x3d454
								if (v6 > 0) {
									int32_t v40 = v29; // 0x3d46861
									int32_t v41 = 0;   // 0x3d438
									int32_t v42 = v33; // 0x3d434
									int32_t v43 = v30; // 0x3d444
									int32_t v44;       // 0x3d46035
									while (true) {
										// 0x3d444
										if (v43 == 1) {
											char v45 = *(char *)v42; // 0x3d3f8
											int32_t v46 = 40 * (v41 + v19);
											int32_t v47 = v40; // 0x3d46860
											int32_t v48 = 1;   // 0x3d46037
											if (v45 != 0) {
												// 0x3d404
												if (v45 != *(char *)(v46 + v24)) {
													// 0x3d418
													v47 = 0;
													v48 = 0;
													// branch -> 0x3d41c
												} else {
													v47 = v40;
													v48 = 1;
												}
											}
											int32_t v49 = v47; // 0x3d46859
											int32_t v50 = v48; // 0x3d46036
											if (*(char *)(v46 + v25) != 0) {
												// 0x3d430
												v49 = 0;
												v50 = 0;
												// branch -> 0x3d434
											}
											int32_t v51 = v42 + 1; // 0x3d434
											int32_t v52 = v41 + 1; // 0x3d438
											if (v52 >= v6) {
												v34 = v49;
												v35 = v51;
												v36 = v50;
												v44 = v50;
												// break -> 0x3d44c
												break;
											}
											v40 = v49;
											v41 = v52;
											v42 = v51;
											v43 = v50;
											// continue -> 0x3d444
											continue;
										} else {
											v34 = v40;
											v35 = v42;
											v36 = v43;
											v44 = v43;
										}
									}
									// 0x3d44c
									v37 = v24 + 1;
									v38 = v25 + 1;
									v39 = v32 + 1;
									if (v39 >= v8) {
										v24 = v37;
										v26 = v34;
										// break -> 0x3d468
										break;
									}
									v29 = v34;
									v30 = v36;
									v31 = v44;
									v32 = v39;
									v25 = v38;
									v24 = v37;
									v33 = v35;
									// continue -> 0x3d460
									continue;
								}
								// 0x3d44c
								v37 = v24 + 1;
								v38 = v25 + 1;
								v39 = v32 + 1;
								if (v39 >= v8) {
									v24 = v37;
									v26 = v34;
									// break -> 0x3d468
									break;
								}
								v29 = v34;
								v30 = v36;
								v31 = 1;
								v32 = v39;
								v25 = v38;
								v24 = v37;
								v33 = v35;
								// continue -> 0x3d460
								continue;
							} else {
								v26 = v29;
							}
						}
						// 0x3d468
						v27 = v11;
						v28 = v26;
						if (v26 == 1) {
						lab_0x3d474:;
							int32_t v53 = v19 - v6;  // 0x3d474
							int32_t v54 = v15 + g19; // 0x3d478
							int32_t v55 = 40 * v53;  // 0x3d47c
							int32_t v56 = v9 - v53;  // 0x3d484
							uint32_t v57 = v13;      // 0x3d4c013
							if (v15 < v57) {
								int32_t v58 = v54 + 40 * v9;
								int32_t v59 = v24; // 0x3d580113
								int32_t v60 = 1;   // 0x3d4d083
								int32_t v61 = 1;   // 0x3d4c8
								// branch -> 0x3d4c8
								int32_t v62; // 0x3d580111
								while (true) {
									// 0x3d4c8
									if (v61 == 1) {
										int32_t v63 = v54 + v55; // 0x3d494
										int32_t v64 = v60;       // 0x3d4d082
										int32_t v65;
										int32_t v66; // 0x3d4b8
										int32_t v67; // 0x3d4bc
										if (v9 > v53) {
											int32_t v68 = v60; // 0x3d4d081
											int32_t v69 = 1;   // 0x3d4c865
											// branch -> 0x3d49c
											int32_t v70; // 0x3d4c866
											while (true) {
												int32_t v71 = v68; // 0x3d4d080
												int32_t v72 = v69; // 0x3d4c864
												if (*(char *)v63 == *(char *)(v11 + v2)) {
													// 0x3d4ac
													v71 = 0;
													v72 = 0;
													// branch -> 0x3d4b0
												}
												int32_t v73 = v63 + 40; // 0x3d4b0
												int32_t v74 = v56 - 1;  // 0x3d4b4
												if (v74 == 0) {
													v63 = v58;
													v64 = v71;
													v70 = v72;
													// break -> 0x3d4b8
													break;
												}
												v68 = v71;
												v56 = v74;
												v63 = v73;
												v69 = v72;
												// continue -> 0x3d49c
											}
											// 0x3d4b8
											v66 = v54 + 1;
											v67 = v15 + 1;
											v65 = v58 + 1;
											if (v67 >= v57) {
												v62 = v63;
												v28 = v64;
												// break -> 0x3d4d0
												break;
											}
											v58 = v65;
											v59 = v63;
											v60 = v64;
											v15 = v67;
											v54 = v66;
											v61 = v70;
											// continue -> 0x3d4c8
											continue;
										}
										// 0x3d4b8
										v66 = v54 + 1;
										v67 = v15 + 1;
										v65 = v58 + 1;
										if (v67 >= v57) {
											v62 = v63;
											v28 = v64;
											// break -> 0x3d4d0
											break;
										}
										v58 = v65;
										v59 = v63;
										v60 = v64;
										v15 = v67;
										v54 = v66;
										v61 = 1;
										// continue -> 0x3d4c8
										continue;
									} else {
										v62 = v59;
										v28 = v60;
									}
								}
								// 0x3d4d0
								v20 = v62;
								int32_t v75; // 0x3d544
								int32_t v76; // 0x3d548
								if (v28 == 1) {
								lab_0x3d4d8:
									// 0x3d4d8
									g37 = 100;
									int32_t v77 = random(0); // 0x3d4e0
									if (v77 < g21) {
										int32_t v78 = v1;  // 0x3d4ec
										int32_t v79 = v78; // r3
										int32_t v80 = 0;   // r7
										if (v8 > 0) {
											int32_t v81 = v8;  // 0x3d53c98
											int32_t v82 = 0;   // 0x3d53896
											int32_t v83 = v78; // 0x3d53494
											int32_t v84 = v27; // 0x3d500
											// branch -> 0x3d4f8
											while (true) {
												int32_t v85 = v6;       // ctr
												int32_t v86 = v2 + v84; // 0x3d500
												int32_t v87 = 0;        // r4
												int32_t v88 = v81;      // 0x3d53c
												int32_t v89 = v82;      // 0x3d538
												int32_t v90 = v83;      // 0x3d534
												int32_t v91 = v84;      // 0x3d50084
												if (v6 >= 1) {
													int32_t v92 = v84; // 0x3d52488
													int32_t v93 = 0;   // 0x3d518
													int32_t v94;       // 0x3d524
													while (true) {
														char v95 = *(char *)v86; // 0x3d50c
														int32_t v96 = v6;        // 0x3d530
														int32_t v97 = v93;       // 0x3d52c
														int32_t v98 = v92;       // 0x3d524
														if (v95 != 0) {
															// 0x3d518
															*(char *)(v79 + 40 * (g36 + v93)) = v95;
															v96 = v85;
															v97 = v87;
															v98 = v27;
															// branch -> 0x3d524
														}
														// 0x3d524
														v94 = v98 + 1;
														v27 = v94;
														int32_t v99 = v86 + 1;  // 0x3d528
														int32_t v100 = v97 + 1; // 0x3d52c
														v87 = v100;
														int32_t v101 = v96 - 1; // 0x3d530
														v85 = v101;
														if (v101 == 0) {
															// break -> 0x3d534
															break;
														}
														v6 = v101;
														v92 = v94;
														v93 = v100;
														v86 = v99;
														// continue -> 0x3d50c
													}
													// 0x3d534
													v88 = v8;
													v89 = v80;
													v90 = v79;
													v91 = v94;
													// branch -> 0x3d534
												}
												int32_t v102 = v90 + 1; // 0x3d534
												v79 = v102;
												int32_t v103 = v89 + 1; // 0x3d538
												v80 = v103;
												if (v103 >= v88) {
													v20 = v102;
													// break -> 0x3d544
													break;
												}
												v81 = v88;
												v82 = v103;
												v83 = v102;
												v84 = v91;
												// continue -> 0x3d4f8
											}
											// 0x3d544
											v75 = v9 + 1;
											v9 = v75;
											v76 = g36 + 1;
											g36 = v76;
											v21 = g20;
											if (v76 >= v21) {
												// break -> 0x3d54c
												break;
											}
											v9 = v75;
											v19 = v76;
											// continue -> 0x3d3a0
											continue;
										} else {
											v20 = v78;
										}
									} else {
										v20 = v77;
									}
								}
							lab_0x3d544:
								// 0x3d544
								v75 = v9 + 1;
								v9 = v75;
								v76 = g36 + 1;
								g36 = v76;
								v21 = g20;
								if (v76 >= v21) {
									// break -> 0x3d54c
									break;
								}
								v9 = v75;
								v19 = v76;
								// continue -> 0x3d3a0
								continue;
							} else {
								v28 = 1;
							}
						}
					lab_0x3d4d0:
						// 0x3d4d0
						if (v28 == 1) {
							goto lab_0x3d4d8;
						}
						v20 = v24;
						goto lab_0x3d544;
					}
					// 0x3d468
					v27 = v11;
					if (v26 == 1) {
						goto lab_0x3d474;
					}
					v28 = v26;
					goto lab_0x3d4d0;
				}
				// 0x3d54c
				v16 = v20;
				v17 = v4;
				v18 = v21;
				// branch -> 0x3d554
			}
			int32_t v104 = v17 + 1; // 0x3d560
			v4 = v104;
			if (v104 < v12) {
				// 0x3d554
				result = v16;
				v13++;
				v3++;
				v1++;
				v10 = v18;
				v14 = v104;
				v7 = v8;
				// branch -> 0x3d390
				continue;
			} else {
				result = v16;
			}
		}
	}
	// 0x3d570
	return result;
}

// Address range: 0x3d584 - 0x3d6dc
int32_t DRLG_L2Subs(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x3d58c
	g31 = v1;
	g26 = 0;
	g30 = g23 - 0x1dc6;
	g32 = *(int32_t *)(g23 - 0x7320);
	g33 = *(int32_t *)(g23 - 0x731c);
	g35 = *(int32_t *)(g23 - 0x7318);
	g36 = *(int32_t *)(g23 - 0x7314);
	int32_t v2 = 0; // 0x3d5b8
	// branch -> 0x3d5b4
	while (true) {
		// 0x3d5b4
		g29 = v1;
		g24 = v2 + 2;
		g25 = v2 + 3;
		int32_t v3 = 0;  // r23
		uint32_t v4 = 0; // 0x3d5d4
		// branch -> 0x3d5c4
		while (true) {
			// 0x3d5c4
			int32_t v5; // 0x3d5e0
			if (v4 >= *(int32_t *)g36) {
				// 0x3d5d0
				if (v4 <= *(int32_t *)g35) {
				lab_0x3d6a8_7:;
					int32_t v6 = v3 + 1; // 0x3d6a8
					v3 = v6;
					g29 += 40;
					if (v6 >= 40) {
						// break -> 0x3d6b8
						break;
					}
					v4 = v6;
					// continue -> 0x3d5c4
					continue;
				}
				// 0x3d5dc
				v5 = g26;
				int32_t v7; // 0x3d5fc
				if (v5 >= *(int32_t *)g33) {
				lab_0x3d5e8:
					// 0x3d5e8
					if (v5 <= *(int32_t *)g32) {
						goto lab_0x3d6a8_7;
					}
					// 0x3d5f4
					g37 = 4;
					v7 = random(0);
					g34 = v7;
					if (v7 != 0) {
						goto lab_0x3d6a8_7;
					}
				lab_0x3d608:;
					unsigned char v8 = *(char *)(g30 + (int32_t) * (char *)g29); // 0x3d60c
					int32_t v9 = v8;                                             // r19
					if (v8 == 0) {
						goto lab_0x3d6a8_7;
					}
					// 0x3d618
					g37 = 16;
					int32_t v10 = random(0); // 0x3d620
					g34 = v10;
					int32_t v11 = -1; // 0x3d6a4
					int32_t v12;      // 0x3d654
					int32_t v13;      // 0x3d658
					int32_t v14;      // 0x3d654
					int32_t v15;      // 0x3d658
					int32_t v16;      // 0x3d6949
					if (v10 > -1) {
						int32_t v17 = -1; // 0x3d62c
						while (true) {
							int32_t v18 = v17 + 1; // 0x3d62c
							int32_t v19 = v18;     // 0x3d63c
							if (v18 == 161) {
								// 0x3d638
								v19 = 0;
								// branch -> 0x3d63c
							}
							int32_t v20 = v10;
							if (v9 == (int32_t) * (char *)(g30 + v19)) {
								int32_t v21 = v10 - 1; // 0x3d648
								g34 = v21;
								v20 = v21;
								// branch -> 0x3d64c
							}
							// 0x3d64c
							if (v20 <= 0xffffffff) {
								v11 = v19;
								// break -> 0x3d654
								break;
							}
							v10 = v20;
							v17 = v19;
							// continue -> 0x3d62c
						}
						// 0x3d654
						v12 = g26;
						v14 = v12 - 2;
						v13 = v3;
						v15 = v13 + 2;
						v16 = g24;
						if (v14 < v16) {
						lab_0x3d660:;
							int32_t v22 = v13 - 2; // 0x3d660
							int32_t v23 = v12 + 3; // 0x3d67c
							int32_t v24 = v14;     // 0x3d66c26
							// branch -> 0x3d660
							int32_t v25; // 0x3d690
							while (true) {
								int32_t v26 = v24; // 0x3d690
								if (v22 < v15) {
									int32_t v27 = v24; // 0x3d66c
									// branch -> 0x3d668
									int32_t v28; // 0x3d66c27
									while (true) {
										int32_t v29 = (int32_t) * (char *)(40 * v22 + v27 + g31); // 0x3d670
										g34 = v29;
										int32_t v30 = v22; // 0x3d684
										v28 = v27;
										if (v11 == v29) {
											// 0x3d67c
											v30 = v15;
											v28 = v23;
											// branch -> 0x3d684
										}
										int32_t v31 = v30 + 1; // 0x3d684
										if (v31 >= v15) {
											// break -> 0x3d690
											break;
										}
										v27 = v28;
										v22 = v31;
										// continue -> 0x3d668
									}
									// 0x3d690
									v25 = v28 + 1;
									if (v25 >= v16) {
										// break -> 0x3d69c
										break;
									}
									v24 = v25;
									// continue -> 0x3d660
									continue;
								}
								// 0x3d690
								v25 = v26 + 1;
								if (v25 >= v16) {
									// break -> 0x3d69c
									break;
								}
								v24 = v25;
								// continue -> 0x3d660
							}
							// 0x3d69c
							if (v25 >= g25) {
								goto lab_0x3d6a8_7;
							}
						lab_0x3d6a4:
							// 0x3d6a4
							*(char *)g29 = (char)v11;
							// branch -> 0x3d6a8
							goto lab_0x3d6a8_7;
						}
					lab_0x3d69c:
						// 0x3d69c
						if (v14 < g25) {
							goto lab_0x3d6a4;
						}
						goto lab_0x3d6a8_7;
					}
					// 0x3d654
					v12 = g26;
					v14 = v12 - 2;
					v13 = v3;
					v15 = v13 + 2;
					v16 = g24;
					if (v14 < v16) {
						goto lab_0x3d660;
					}
					goto lab_0x3d69c;
				}
			lab_0x3d5f4:
				// 0x3d5f4
				g37 = 4;
				v7 = random(0);
				g34 = v7;
				if (v7 == 0) {
					goto lab_0x3d608;
				}
				goto lab_0x3d6a8_7;
			}
			// 0x3d5dc
			v5 = g26;
			if (v5 < *(int32_t *)g33) {
				goto lab_0x3d5f4;
			}
			goto lab_0x3d5e8;
		}
	}
}

// Address range: 0x3d6dc - 0x3d888
int32_t DRLG_L2Shadows(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x3d6e0
	int32_t v2 = g23 - 0x1dd4;               // r8
	int32_t v3 = v1 + 1;                     // 0x3d6ec
	int32_t v4 = 1;                          // r29
	int32_t v5 = g23 - 0x1d25;               // r7
	int32_t v6 = 1;                          // 0x3d7145
	// branch -> 0x3d700
	while (true) {
		int32_t v7 = v3 + 40; // 0x3d704
		int32_t v8 = 39;      // ctr
		int32_t v9 = v1 + 40; // 0x3d70c
		int32_t v10 = v6;     // 0x3d714
		// branch -> 0x3d710
		int32_t result; // r3
		int32_t v11;    // 0x3d864
		while (true) {
			int32_t v12 = v9 + v10;                                     // 0x3d714
			int32_t v13 = v12;                                          // r11
			int32_t v14 = (int32_t) * (char *)(v7 - 40);                // 0x3d718
			unsigned char v15 = *(char *)(v5 + (int32_t) * (char *)v7); // 0x3d71c
			int32_t v16 = v15;                                          // r9
			int32_t v17 = (int32_t) * (char *)(v7 - 1);                 // 0x3d724
			int32_t v18 = (int32_t) * (char *)(v7 - 41);                // 0x3d728
			unsigned char v19 = *(char *)(v5 + v14);                    // 0x3d730
			int32_t v20 = v19;                                          // r5
			unsigned char v21 = *(char *)(v17 + v5);                    // 0x3d734
			int32_t v22 = v21;                                          // r4
			unsigned char v23 = *(char *)(v18 + v5);                    // 0x3d738
			result = v23;
			int32_t v24 = v2; // 0x3d7c4
			int32_t v25;      // r10
			int32_t v26;      // 0x3d7c4
			if (v15 == *(char *)v2) {
				char v27 = *(char *)(v2 + 1); // 0x3d740
				int32_t v28 = 1;
				if (v27 != 0) {
					// 0x3d750
					if (v23 != v27) {
						// 0x3d758
						v28 = 0;
						// branch -> 0x3d75c
					} else {
						v28 = 1;
					}
				}
				char v29 = *(char *)(v2 + 2); // 0x3d75c
				int32_t v30 = v28;
				if (v29 != 0) {
					// 0x3d768
					if (v21 != v29) {
						// 0x3d770
						v30 = 0;
						// branch -> 0x3d774
					} else {
						v30 = v28;
					}
				}
				char v31 = *(char *)(v2 + 3); // 0x3d774
				if (v31 != 0) {
					// 0x3d780
					if (v19 != v31) {
						// 0x3d78c
						v24 = v2;
						// branch -> 0x3d7c4
					lab_0x3d7c4_3:
						// 0x3d7c4
						v26 = v24 + 7;
						v25 = v26;
						int32_t v32; // 0x3d858
						int32_t v33; // 0x3d85c
						int32_t v34; // 0x3d860
						if (v16 == (int32_t) * (char *)v26) {
						lab_0x3d7d4:;
							unsigned char v35 = *(char *)(v24 + 8); // 0x3d7d4
							int32_t v36 = 1;
							if (v35 != 0) {
								// 0x3d7e4
								if (result != (int32_t)v35) {
									// 0x3d7ec
									v36 = 0;
									// branch -> 0x3d7f0
								} else {
									v36 = 1;
								}
							}
							unsigned char v37 = *(char *)(v24 + 9); // 0x3d7f0
							int32_t v38 = v36;
							if (v37 != 0) {
								// 0x3d7fc
								if (v22 != (int32_t)v37) {
									// 0x3d804
									v38 = 0;
									// branch -> 0x3d808
								} else {
									v38 = v36;
								}
							}
							unsigned char v39 = *(char *)(v24 + 10); // 0x3d808
							if (v39 != 0) {
								// 0x3d814
								if (v20 != (int32_t)v39) {
									// 0x3d820
									// branch -> 0x3d858
								lab_0x3d858_3:
									// 0x3d858
									v32 = v7 + 40;
									v33 = v9 + 40;
									v34 = v8 - 1;
									v8 = v34;
									v11 = v4;
									if (v34 == 0) {
										// break -> 0x3d864
										break;
									}
									v10 = v11;
									v9 = v33;
									v7 = v32;
									// continue -> 0x3d710
									continue;
								}
							}
							// 0x3d820
							if (v38 != 1) {
								goto lab_0x3d858_3;
							}
							char v40 = *(char *)(v24 + 11); // 0x3d828
							int32_t v41 = v26;              // 0x3d838
							if (v40 != 0) {
								// 0x3d834
								*(char *)(v13 - 41) = v40;
								v41 = v25;
								// branch -> 0x3d838
							}
							char v42 = *(char *)(v41 + 5); // 0x3d838
							if (v42 != 0) {
								// 0x3d844
								*(char *)(v13 - 1) = v42;
								v41 = v25;
								// branch -> 0x3d848
							}
							char v43 = *(char *)(v41 + 6); // 0x3d848
							if (v43 == 0) {
								goto lab_0x3d858_3;
							}
							// 0x3d854
							*(char *)(v13 - 40) = v43;
							// branch -> 0x3d858
							goto lab_0x3d858_3;
						}
					lab_0x3d858_4:
						// 0x3d858
						v32 = v7 + 40;
						v33 = v9 + 40;
						v34 = v8 - 1;
						v8 = v34;
						v11 = v4;
						if (v34 == 0) {
							// break -> 0x3d864
							break;
						}
						v10 = v11;
						v9 = v33;
						v7 = v32;
						// continue -> 0x3d710
						continue;
					}
				}
				// 0x3d78c
				if (v30 != 1) {
					v24 = v2;
					goto lab_0x3d7c4_3;
				}
				char v44 = *(char *)(v2 + 4); // 0x3d794
				int32_t v45 = v2;             // 0x3d7a4
				if (v44 != 0) {
					// 0x3d7a0
					*(char *)(v12 - 41) = v44;
					v45 = v2;
					// branch -> 0x3d7a4
				}
				char v46 = *(char *)(v45 + 5); // 0x3d7a4
				if (v46 != 0) {
					// 0x3d7b0
					*(char *)(v13 - 1) = v46;
					v45 = v2;
					// branch -> 0x3d7b4
				}
				char v47 = *(char *)(v45 + 6); // 0x3d7b4
				if (v47 == 0) {
					v24 = v45;
					goto lab_0x3d7c4_3;
				}
				// 0x3d7c0
				*(char *)(v13 - 40) = v47;
				v24 = v2;
				// branch -> 0x3d7c4
				goto lab_0x3d7c4_3;
			}
			// 0x3d7c4
			v26 = v24 + 7;
			v25 = v26;
			if (v16 == (int32_t) * (char *)v26) {
				goto lab_0x3d7d4;
			}
			goto lab_0x3d858_4;
		}
		int32_t v48 = v11 + 1; // 0x3d864
		v4 = v48;
		if (v48 >= 40) {
			// 0x3d874
			return result;
		}
		// 0x3d864
		v6 = v48;
		v3++;
		// branch -> 0x3d700
	}
}

// Address range: 0x3d9f0 - 0x3daf4
int32_t DRLG_L2SetRoom(int32_t a1, int32_t a2)
{
	// 0x3d9f0
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7528); // 0x3da00
	g35 = v1;
	g33 = a2;
	g34 = *(int32_t *)v1;
	int32_t v2 = function_c9948();             // 0x3da18
	int32_t v3 = (int32_t) * (char *)v2;       // r9
	int32_t v4 = 0;                            // r12
	int32_t v5 = (int32_t) * (char *)(v2 + 2); // r10
	*(int32_t *)*(int32_t *)(g23 - 0x754c) = g36;
	*(int32_t *)*(int32_t *)(g23 - 0x7550) = g33;
	*(int32_t *)*(int32_t *)(g23 - 0x7554) = v3;
	*(int32_t *)*(int32_t *)(g23 - 0x7558) = v5;
	int32_t v6 = g33 + *(int32_t *)(g23 - 0x77cc);        // 0x3da50
	int32_t v7 = g33 + *(int32_t *)(g23 - 0x7514);        // 0x3da58
	int32_t v8 = *(int32_t *)(*(int32_t *)g35 + 136) + 4; // 0x3da60
	int32_t v9 = v4;                                      // 0x3dac81
	if (v9 < v5) {
		int32_t v10 = v5; // 0x3dac816
		while (true) {
			int32_t v11 = v3;  // ctr
			int32_t v12 = 0;   // r11
			int32_t v13 = v10; // 0x3dac8
			int32_t v14 = v9;  // 0x3dac4
			int32_t v15 = v8;  // 0x3da7c8
			if (v3 >= 1) {
				int32_t v16 = 0;  // 0x3daa4
				int32_t v17 = v8; // 0x3da7c
				int32_t v18;      // 0x3dab0
				while (true) {
					char v19 = *(char *)v17; // 0x3da7c
					int32_t v20 = g36 + v16; // 0x3daa4
					if (v19 == 0) {
						// 0x3daa4
						*(char *)(v6 + 40 * v20) = (char)3;
						// branch -> 0x3dab0
					} else {
						int32_t v21 = 40 * v20; // 0x3da8c
						*(char *)(v6 + v21) = v19;
						char *v22 = (char *)(v21 + v7); // 0x3da94
						*v22 = *v22 | -128;
						// branch -> 0x3dab0
					}
					// 0x3dab0
					v18 = v8 + 2;
					v8 = v18;
					int32_t v23 = v12 + 1; // 0x3dab4
					v12 = v23;
					int32_t v24 = v11 - 1; // 0x3dab8
					v11 = v24;
					if (v24 == 0) {
						// break -> 0x3dabc
						break;
					}
					v16 = v23;
					v17 = v18;
					// continue -> 0x3da7c
				}
				// 0x3dabc
				v13 = v5;
				v14 = v4;
				v15 = v18;
				// branch -> 0x3dabc
			}
			int32_t v25 = v14 + 1; // 0x3dac4
			v4 = v25;
			if (v25 >= v13) {
				// break -> 0x3dac8
				break;
			}
			v10 = v13;
			v9 = v25;
			v7++;
			v6++;
			v8 = v15;
			// continue -> 0x3da68
		}
		// 0x3dac8
		// branch -> 0x3dad0
	}
	int32_t result = function_c9acc(*(int32_t *)g35); // 0x3dad4
	return result;
}

// Address range: 0x3eb78 - 0x3ecf0
int32_t L2TileFix(int32_t a1)
{
	int32_t v1 = 0;                          // r6
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x3eb7c
	// branch -> 0x3eb80
	int32_t result; // 0x3ecd0
	while (true) {
		int32_t v3 = 20; // ctr
		int32_t v4 = v2; // r3
		int32_t v5 = 0;  // r5
		int32_t v6 = v2; // 0x3ebac
		// branch -> 0x3eb90
		while (true) {
			int32_t v7 = v6; // 0x3ebcc
			if (*(char *)v6 == 1) {
				char *v8 = (char *)(v6 + 1); // 0x3eb9c
				if (*v8 == 3) {
					// 0x3eba8
					*v8 = 1;
					v7 = v4;
					// branch -> 0x3ebb0
				} else {
					v7 = v6;
				}
			}
			int32_t v9 = v7; // 0x3ebec
			if (*(char *)v7 == 3) {
				char *v10 = (char *)(v7 + 1); // 0x3ebbc
				if (*v10 == 1) {
					// 0x3ebc8
					*v10 = 3;
					v9 = v4;
					// branch -> 0x3ebd0
				} else {
					v9 = v7;
				}
			}
			int32_t v11 = v9; // 0x3ec0c
			if (*(char *)v9 == 3) {
				char *v12 = (char *)(v9 + 40); // 0x3ebdc
				if (*v12 == 7) {
					// 0x3ebe8
					*v12 = 3;
					v11 = v4;
					// branch -> 0x3ebf0
				} else {
					v11 = v9;
				}
			}
			int32_t v13 = v11; // 0x3ec2c
			if (*(char *)v11 == 2) {
				char *v14 = (char *)(v11 + 40); // 0x3ebfc
				if (*v14 == 3) {
					// 0x3ec08
					*v14 = 2;
					v13 = v4;
					// branch -> 0x3ec10
				} else {
					v13 = v11;
				}
			}
			int32_t v15 = v13; // 0x3ec30
			if (*(char *)v13 == 11) {
				char *v16 = (char *)(v13 + 40); // 0x3ec1c
				if (*v16 == 14) {
					// 0x3ec28
					*v16 = 16;
					v15 = v4;
					// branch -> 0x3ec30
				} else {
					v15 = v13;
				}
			}
			int32_t v17 = v15 + 40; // 0x3ec30
			v4 = v17;
			int32_t v18 = v17; // 0x3ec6c
			if (*(char *)v17 == 1) {
				char *v19 = (char *)(v15 + 41); // 0x3ec3c
				if (*v19 == 3) {
					// 0x3ec48
					*v19 = 1;
					v18 = v4;
					// branch -> 0x3ec50
				} else {
					v18 = v17;
				}
			}
			int32_t v20 = v18; // 0x3ec8c
			if (*(char *)v18 == 3) {
				char *v21 = (char *)(v18 + 1); // 0x3ec5c
				if (*v21 == 1) {
					// 0x3ec68
					*v21 = 3;
					v20 = v4;
					// branch -> 0x3ec70
				} else {
					v20 = v18;
				}
			}
			int32_t v22 = v20; // 0x3ecac
			if (*(char *)v20 == 3) {
				char *v23 = (char *)(v20 + 40); // 0x3ec7c
				if (*v23 == 7) {
					// 0x3ec88
					*v23 = 3;
					v22 = v4;
					// branch -> 0x3ec90
				} else {
					v22 = v20;
				}
			}
			int32_t v24 = v22; // 0x3eccc
			if (*(char *)v22 == 2) {
				char *v25 = (char *)(v22 + 40); // 0x3ec9c
				if (*v25 == 3) {
					// 0x3eca8
					*v25 = 2;
					v24 = v4;
					// branch -> 0x3ecb0
				} else {
					v24 = v22;
				}
			}
			int32_t v26 = v24; // 0x3ecd0
			if (*(char *)v24 == 11) {
				char *v27 = (char *)(v24 + 40); // 0x3ecbc
				if (*v27 == 14) {
					// 0x3ecc8
					*v27 = 16;
					v26 = v4;
					// branch -> 0x3ecd0
				} else {
					v26 = v24;
				}
			}
			// 0x3ecd0
			result = v26 + 40;
			v4 = result;
			v5++;
			int32_t v28 = v3 - 1; // 0x3ecd8
			v3 = v28;
			if (v28 == 0) {
				// break -> 0x3ecdc
				break;
			}
			v6 = result;
			// continue -> 0x3eb90
		}
		int32_t v29 = v1 + 1; // 0x3ecdc
		v1 = v29;
		if (v29 >= 40) {
			// break -> 0x3ecec
			break;
		}
		v2++;
		// continue -> 0x3eb80
	}
	// 0x3ecec
	return result;
}

// Address range: 0x3f938 - 0x3fbc4
int32_t CreateDungeon(int32_t a1)
{
	int32_t v1 = g36;                        // 0x3f938
	int32_t v2 = g10;                        // 0x3f93c
	int32_t v3 = *(int32_t *)(g23 - 0x7604); // 0x3f94c
	g13 = 0;
	g42 = 0;
	g36 = *(int32_t *)(g23 - 0x733c);
	unsigned char v4 = *(char *)*(int32_t *)(g23 - 0x77e4); // 0x3f964
	int32_t v5;                                             // ctr
	int32_t v6;                                             // r3
	int32_t v7;                                             // r4
	int32_t v8;                                             // r5
	int32_t v9;                                             // bp-16
	int32_t v10;                                            // bp-20
	int32_t v11;                                            // bp-24
	int32_t v12;                                            // bp-28
	int32_t v13;                                            // bp-32
	int32_t v14;                                            // 0x3fa48
	int32_t v15;                                            // 0x3fa00
	int32_t v16;                                            // 0x3fa04
	int32_t v17;                                            // 0x3fa0c
	int32_t v18;                                            // 0x3fa5c
	int32_t v19;                                            // 0x3fa3c
	if (v4 == 7) {
		// 0x3f9c0
		if (*(char *)(v3 + 194) != 0) {
			// 0x3f9cc
			g42 = 1;
			g13 = 15;
			// branch -> 0x3f9d8
		}
		// 0x3f9d8
		CreateRoom(2, 2, 39, 39, 0, 0);
		if (*(int32_t *)g36 != 0) {
			// 0x3f9fc
			v15 = &v10;
			v16 = &v11;
			v17 = &v13;
			GetHall(&v9, v15, v16, (int32_t)&v12, v17);
			ConnectHall(v9, v10, v11, v12, v13);
			// branch -> 0x3f9fc
			while (*(int32_t *)g36 != 0) {
				// 0x3f9fc
				GetHall(&v9, v15, v16, (int32_t)&v12, v17);
				ConnectHall(v9, v10, v11, v12, v13);
				// continue -> 0x3f9fc
			}
			// 0x3fa38
			v7 = 0;
			v19 = *(int32_t *)(g23 - 0x7330);
			v6 = v19;
			v14 = v19;
			// branch -> 0x3fa40
			int32_t v20; // 0x3fb50
			int32_t v21; // 0x3fb58
			int32_t v22; // 0x3fb5c
			while (true) {
				// 0x3fa40
				v5 = 41;
				v8 = v14;
				v18 = v14;
				// branch -> 0x3fa4c
			lab_0x3fa4c_7:
				while (true) {
					char *v23 = (char *)v18; // 0x3fa4c
					int32_t v24 = v18;       // 0x3fa70
					if (*v23 == 67) {
						// 0x3fa58
						*v23 = 35;
						v24 = v8;
						// branch -> 0x3fa60
					}
					char *v25 = (char *)v24; // 0x3fa60
					if (*v25 == 66) {
						// 0x3fa6c
						*v25 = 35;
						v24 = v8;
						// branch -> 0x3fa74
					}
					char *v26 = (char *)v24; // 0x3fa74
					if (*v26 == 69) {
						// 0x3fa80
						*v26 = 35;
						v24 = v8;
						// branch -> 0x3fa88
					}
					char *v27 = (char *)v24; // 0x3fa88
					if (*v27 == 65) {
						// 0x3fa94
						*v27 = 35;
						v24 = v8;
						// branch -> 0x3fa9c
					}
					char *v28 = (char *)v24; // 0x3fa9c
					if (*v28 == 44) {
						// 0x3faa8
						*v28 = 46;
						int32_t v29 = v8;               // 0x3fab0
						char *v30 = (char *)(v29 - 41); // 0x3fab0
						if (*v30 == 32) {
							// 0x3fabc
							*v30 = 35;
							v29 = v8;
							// branch -> 0x3fac4
						}
						char *v31 = (char *)(v29 - 40); // 0x3fac4
						if (*v31 == 32) {
							// 0x3fad0
							*v31 = 35;
							v29 = v8;
							// branch -> 0x3fad8
						}
						char *v32 = (char *)(v29 - 39); // 0x3fad8
						if (*v32 == 32) {
							// 0x3fae4
							*v32 = 35;
							v29 = v8;
							// branch -> 0x3faec
						}
						char *v33 = (char *)(v29 + 39); // 0x3faec
						if (*v33 == 32) {
							// 0x3faf8
							*v33 = 35;
							v29 = v8;
							// branch -> 0x3fb00
						}
						char *v34 = (char *)(v29 + 40); // 0x3fb00
						if (*v34 == 32) {
							// 0x3fb0c
							*v34 = 35;
							v29 = v8;
							// branch -> 0x3fb14
						}
						char *v35 = (char *)(v29 + 41); // 0x3fb14
						if (*v35 == 32) {
							// 0x3fb20
							*v35 = 35;
							v29 = v8;
							// branch -> 0x3fb28
						}
						char *v36 = (char *)(v29 - 1); // 0x3fb28
						if (*v36 == 32) {
							// 0x3fb34
							*v36 = 35;
							v29 = v8;
							// branch -> 0x3fb3c
						}
						char *v37 = (char *)(v29 + 1); // 0x3fb3c
						if (*v37 == 32) {
							// 0x3fb48
							*v37 = 35;
							v24 = v8;
							// branch -> 0x3fb50
						} else {
							v24 = v29;
						}
					}
					// 0x3fb50
					v20 = v24 + 40;
					v8 = v20;
					int32_t v38 = v5 - 1; // 0x3fb54
					v5 = v38;
					if (v38 == 0) {
						// break -> 0x3fb58
						break;
					}
					v18 = v20;
					// continue -> 0x3fa4c
				}
				// 0x3fb58
				v21 = v7 + 1;
				v7 = v21;
				v22 = v6 + 1;
				v6 = v22;
				if (v21 >= 41) {
					// break -> 0x3fb68
					break;
				}
				v14 = v22;
				// continue -> 0x3fa40
			}
			// 0x3fb68
			if (DL2_FillVoids(v22, v21, v20) == 0) {
				// 0x3fbac
				g36 = v1;
				g10 = v2;
				return 0;
			}
			// 0x3fb7c
			g36 = 0;
			int32_t v39 = 0; // 0x3fb8823
			// branch -> 0x3fb80
			while (true) {
				// 0x3fb80
				DoPatternCheck(0, v39);
				int32_t v40 = 1; // 0x3fb90
				int32_t v41 = g36;
				// branch -> 0x3fb84
				while (v40 < 40) {
					// 0x3fb84
					DoPatternCheck(v40, v41);
					v40++;
					v41 = g36;
					// continue -> 0x3fb84
				}
				int32_t v42 = v41 + 1; // 0x3fb9c
				g36 = v42;
				if (v42 >= 40) {
					// break -> 0x3fbac
					break;
				}
				v39 = v42;
				// continue -> 0x3fb80
			}
			// 0x3fbac
			g36 = v1;
			g10 = v2;
			return 1;
		}
		// 0x3fa38
		v7 = 0;
		v19 = *(int32_t *)(g23 - 0x7330);
		v6 = v19;
		v14 = v19;
		// branch -> 0x3fa40
		while (true) {
			// 0x3fa40
			v5 = 41;
			v8 = v14;
			v18 = v14;
			// branch -> 0x3fa4c
			goto lab_0x3fa4c_7;
		}
	} else {
		// 0x3f970
		if (v4 <= 7) {
			// 0x3f974
			if (v4 == 5) {
				// 0x3f988
				if (*(char *)(v3 + 218) != 0) {
					// 0x3f994
					g42 = 1;
					g13 = 20;
					// branch -> 0x3f9d8
				}
			} else {
				// 0x3f97c
				if (v4 > 5) {
					// 0x3f9a4
					if (*(char *)(v3 + 338) != 0) {
						// 0x3f9b0
						g42 = 1;
						g13 = 10;
						// branch -> 0x3f9d8
					}
				}
			}
			// 0x3f9d8
			CreateRoom(2, 2, 39, 39, 0, 0);
			if (*(int32_t *)g36 != 0) {
				// 0x3f9fc
				v15 = &v10;
				v16 = &v11;
				v17 = &v13;
				GetHall(&v9, v15, v16, (int32_t)&v12, v17);
				ConnectHall(v9, v10, v11, v12, v13);
				// branch -> 0x3f9fc
				while (*(int32_t *)g36 != 0) {
					// 0x3f9fc
					GetHall(&v9, v15, v16, (int32_t)&v12, v17);
					ConnectHall(v9, v10, v11, v12, v13);
					// continue -> 0x3f9fc
				}
				// 0x3fa38
				v7 = 0;
				v19 = *(int32_t *)(g23 - 0x7330);
				v6 = v19;
				v14 = v19;
				// branch -> 0x3fa40
				while (true) {
					// 0x3fa40
					v5 = 41;
					v8 = v14;
					v18 = v14;
					// branch -> 0x3fa4c
					goto lab_0x3fa4c_7;
				}
			}
			// 0x3fa38
			v7 = 0;
			v19 = *(int32_t *)(g23 - 0x7330);
			v6 = v19;
			v14 = v19;
			// branch -> 0x3fa40
			while (true) {
				// 0x3fa40
				v5 = 41;
				v8 = v14;
				v18 = v14;
				// branch -> 0x3fa4c
				goto lab_0x3fa4c_7;
			}
		}
		// 0x3f9d8
		CreateRoom(2, 2, 39, 39, 0, 0);
		if (*(int32_t *)g36 != 0) {
			// 0x3f9fc
			v15 = &v10;
			v16 = &v11;
			v17 = &v13;
			GetHall(&v9, v15, v16, (int32_t)&v12, v17);
			ConnectHall(v9, v10, v11, v12, v13);
			// branch -> 0x3f9fc
			while (*(int32_t *)g36 != 0) {
				// 0x3f9fc
				GetHall(&v9, v15, v16, (int32_t)&v12, v17);
				ConnectHall(v9, v10, v11, v12, v13);
				// continue -> 0x3f9fc
			}
			// 0x3fa38
			v7 = 0;
			v19 = *(int32_t *)(g23 - 0x7330);
			v6 = v19;
			v14 = v19;
			// branch -> 0x3fa40
			while (true) {
				// 0x3fa40
				v5 = 41;
				v8 = v14;
				v18 = v14;
				// branch -> 0x3fa4c
				goto lab_0x3fa4c_7;
			}
		}
		// 0x3fa38
		v7 = 0;
		v19 = *(int32_t *)(g23 - 0x7330);
		v6 = v19;
		v14 = v19;
		// branch -> 0x3fa40
		while (true) {
			// 0x3fa40
			v5 = 41;
			v8 = v14;
			v18 = v14;
			// branch -> 0x3fa4c
			goto lab_0x3fa4c_7;
		}
	}
}

// Address range: 0x3df3c - 0x3e464
int32_t CreateRoom(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = g10; // 0x3df40
	g19 = a1;
	int32_t result = *(int32_t *)(g23 - 0x7334); // 0x3df48
	int32_t v2 = g23 - 0x1e00;                   // 0x3df4c
	g32 = v2;
	int32_t v3 = g23 - 0x1e04; // 0x3df50
	g20 = a2;
	int32_t v4 = *(int32_t *)(g23 - 0x7338); // 0x3df58
	g25 = a5;
	g24 = g42;
	g33 = g13;
	if (*(int32_t *)result > 79) {
		// 0x3e450
		g10 = v1;
		return result;
	}
	int32_t v5 = a3 - a1; // 0x3df90
	int32_t v6 = a4 - a2; // 0x3df94
	g31 = v6;
	int32_t result2 = *(int32_t *)(g23 - 0x1e08); // 0x3df9c
	if (v5 < result2 || v6 < result2) {
		// 0x3e450
		g10 = v1;
		return result2;
	}
	int32_t v7 = *(int32_t *)v3; // 0x3dfb0
	int32_t v8 = *(int32_t *)v2; // 0x3dfbc
	int32_t v9;                  // 0x3e004
	int32_t v10;                 // 0x3e07c
	int32_t v11;                 // 0x3e0ac
	int32_t v12;                 // 0x3e0b8
	int32_t v13;                 // 0x3e0c4
	int32_t v14;                 // 0x3e0d0
	int32_t v15;                 // 0x3e0dc
	int32_t v16;                 // 0x3e0e8
	int32_t v17;                 // 0x3e0f4
	int32_t v18;                 // 0x3e100
	int32_t v19;                 // 0x3e10c
	int32_t v20;                 // 0x3e110
	int32_t v21;                 // 0x3e114
	int32_t v22;                 // 0x3e118
	int32_t v23;                 // 0x3e12c
	int32_t v24;                 // 0x3e158
	int32_t v25;                 // 0x3e16c
	int32_t v26;                 // 0x3e1c0
	int32_t v27;                 // 0x3e218
	int32_t v28;                 // 0x3e2f4
	int32_t v29;                 // 0x3e310
	int32_t result3;             // 0x3e460
	int32_t v30;                 // 0x3e07c
	int32_t v31;                 // 0x3e084
	int32_t v32;                 // 0x3e088
	int32_t v33;                 // 0x3e09c
	int32_t v34;                 // 0x3e264
	int32_t v35;                 // 0x3e2bc
	int32_t v36;                 // 0x3e308
	int32_t v37;                 // 0x3e314
	int32_t v38;                 // 0x3e000
	int32_t v39;                 // 0x3e00c
	int32_t v40;                 // 0x3e078
	int32_t v41;                 // 0x3e07c
	int32_t v42;                 // 0x3e080
	int32_t v43;                 // 0x3e088
	int32_t v44;                 // 0x3e098
	int32_t v45;                 // 0x3e0a8
	int32_t v46;                 // 0x3e15c
	int32_t v47;                 // 0x3e19c
	int32_t v48;                 // 0x3e1bc
	int32_t v49;                 // 0x3e1f8
	int32_t v50;                 // 0x3e214
	int32_t v51;                 // 0x3e254
	int32_t v52;                 // 0x3e2b4
	int32_t v53;                 // 0x3e2e0
	if (v5 > v7) {
		// 0x3dfbc
		g37 = v7 - v8;
		int32_t v54 = random(0); // 0x3dfc8
		int32_t v55 = g32;       // 0x3dfcc
		g16 = *(int32_t *)v55 + v54;
		// branch -> 0x3e000
		// 0x3e000
		v38 = *(int32_t *)v3;
		v9 = g31;
		v39 = *(int32_t *)v55;
		if (v9 > v38) {
			// 0x3e00c
			g37 = v38 - v39;
			g17 = *(int32_t *)g32 + random(0);
			// branch -> 0x3e050
			// 0x3e050
			if (g24 == 1) {
				// 0x3e058
				g17 = g33;
				// branch -> 0x3e060
			}
			// 0x3e060
			g37 = v5;
			g35 = g19 + random(0);
			g37 = g31;
			v40 = random(0);
			v10 = g35;
			v30 = g16;
			v41 = v30 + v10;
			v42 = g20 + v40;
			g36 = v42;
			v31 = a3;
			v32 = g17;
			v43 = v32 + v42;
			g33 = v43;
			g32 = v41;
			v15 = v41;
			v11 = v10;
			if (v41 > v31) {
				// 0x3e094
				g32 = v31;
				v44 = v31 - v30;
				g35 = v44;
				v15 = v31;
				v11 = v44;
				// branch -> 0x3e09c
			}
			// 0x3e09c
			v33 = a4;
			v16 = v43;
			v12 = v42;
			if (v43 > v33) {
				// 0x3e0a4
				g33 = v33;
				v45 = v33 - v32;
				g36 = v45;
				v16 = v33;
				v12 = v45;
				// branch -> 0x3e0ac
			}
			// 0x3e0ac
			v13 = v11;
			if (v11 >= 38) {
				// 0x3e0b4
				g35 = 38;
				v13 = 38;
				// branch -> 0x3e0b8
			}
			// 0x3e0b8
			v14 = v12;
			if (v12 >= 38) {
				// 0x3e0c0
				g36 = 38;
				v14 = 38;
				// branch -> 0x3e0c4
			}
			// 0x3e0c4
			v19 = v13;
			if (v13 <= 1) {
				// 0x3e0cc
				g35 = 1;
				v19 = 1;
				// branch -> 0x3e0d0
			}
			// 0x3e0d0
			v20 = v14;
			if (v14 <= 1) {
				// 0x3e0d8
				g36 = 1;
				v20 = 1;
				// branch -> 0x3e0dc
			}
			// 0x3e0dc
			v17 = v15;
			if (v15 >= 38) {
				// 0x3e0e4
				g32 = 38;
				v17 = 38;
				// branch -> 0x3e0e8
			}
			// 0x3e0e8
			v18 = v16;
			if (v16 >= 38) {
				// 0x3e0f0
				g33 = 38;
				v18 = 38;
				// branch -> 0x3e0f4
			}
			// 0x3e0f4
			v21 = v17;
			if (v17 <= 1) {
				// 0x3e0fc
				g32 = 1;
				v21 = 1;
				// branch -> 0x3e100
			}
			// 0x3e100
			v22 = v18;
			if (v18 <= 1) {
				// 0x3e108
				g33 = 1;
				v22 = 1;
				// branch -> 0x3e10c
			}
			// 0x3e10c
			DefineRoom(v19, v20, v21, v22, g24);
			if (g24 == 1) {
				// 0x3e12c
				v23 = g23;
				*(int32_t *)*(int32_t *)(v23 - 0x7314) = g35 + 2;
				*(int32_t *)*(int32_t *)(v23 - 0x731c) = g36 + 2;
				*(int32_t *)*(int32_t *)(g23 - 0x7318) = g32;
				*(int32_t *)*(int32_t *)(g23 - 0x7320) = g33;
				// branch -> 0x3e154
			}
			// 0x3e154
			v24 = g25;
			v46 = *(int32_t *)*(int32_t *)(g23 - 0x7334);
			*(int32_t *)(v4 + 20 * v46 + 16) = v24;
			v25 = v46;
			g31 = v25;
			v29 = v25;
			if (v24 != 0) {
				// 0x3e174
				if (a6 == 1) {
					// 0x3e180
					g37 = -2 - g35 + g32;
					g18 = random(0) + 1 + g35;
					v47 = v4 + 20 * g25;
					g21 = g36;
					g37 = *(int32_t *)(v47 + 8) - *(int32_t *)v47 - 2;
					v48 = random(0);
					v26 = v47;
					g28 = *(int32_t *)(v26 + 12);
					g27 = *(int32_t *)v26 + v48 + 1;
					// branch -> 0x3e1d0
				}
				// 0x3e1d0
				if (a6 == 3) {
					// 0x3e1dc
					g37 = -2 - g35 + g32;
					g18 = random(0) + 1 + g35;
					v49 = v4 + 20 * g25;
					g21 = g33;
					g37 = -2 - *(int32_t *)v49 + *(int32_t *)(v49 + 8);
					v50 = random(0);
					v27 = v49;
					g28 = *(int32_t *)(v27 + 4);
					g27 = *(int32_t *)v27 + v50 + 1;
					// branch -> 0x3e228
				}
				// 0x3e228
				if (a6 == 2) {
					// 0x3e234
					g18 = g32;
					g37 = -2 - g36 + g33;
					g21 = random(0) + 1 + g36;
					v51 = v4 + 20 * g25;
					v34 = v51 + 4;
					g27 = *(int32_t *)v51;
					g37 = *(int32_t *)(v51 + 12) - *(int32_t *)v34 - 2;
					g28 = random(0) + 1 + *(int32_t *)v34;
					// branch -> 0x3e288
				}
				// 0x3e288
				if (a6 == 4) {
					// 0x3e294
					g18 = g35;
					g37 = -2 - g36 + g33;
					g21 = random(0) + 1 + g36;
					v52 = v4 + 20 * g25;
					v35 = v52 + 4;
					g27 = *(int32_t *)(v52 + 8);
					g37 = *(int32_t *)(v52 + 12) - 2 - *(int32_t *)v35;
					v53 = random(0) + 1 + *(int32_t *)v35;
					g28 = v53;
					v28 = v53;
					// branch -> 0x3e2e4
				} else {
					// 0x3e288
					v28 = g28;
					// branch -> 0x3e2e4
				}
				// 0x3e2e4
				AddHall(g18, g21, g27, v28, a6);
				v29 = g31;
				// branch -> 0x3e2fc
			}
			// 0x3e2fc
			g27 = 0;
			v36 = g19 + 2;
			v37 = g20 + 2;
			if (g17 > g16) {
				// 0x3e304
				g42 = 0;
				g13 = 0;
				CreateRoom(v36, v37, g35 - 2, g33 - 2, v29, 2);
				g42 = 0;
				g13 = 0;
				CreateRoom(g32 + 2, g36 + 2, a3 - 2, a4 - 2, g31, 4);
				g42 = 0;
				g13 = 0;
				CreateRoom(g19 + 2, g33 + 2, g32 - 2, a4 - 2, g31, 1);
				g42 = 0;
				g13 = 0;
				result3 = CreateRoom(g35 + 2, g20 + 2, a3 - 2, g36 - 2, g31, 3);
				// branch -> 0x3e450
			} else {
				// 0x3e3ac
				g42 = 0;
				g13 = 0;
				CreateRoom(v36, v37, g32 - 2, g36 - 2, v29, 3);
				g42 = 0;
				g13 = 0;
				CreateRoom(g35 + 2, g33 + 2, a3 - 2, a4 - 2, g31, 1);
				g42 = 0;
				g13 = 0;
				CreateRoom(g19 + 2, g36 + 2, g35 - 2, a4 - 2, g31, 2);
				g42 = 0;
				g13 = 0;
				result3 = CreateRoom(g32 + 2, g20 + 2, a3 - 2, g33 - 2, g31, 4);
				// branch -> 0x3e450
			}
			// 0x3e450
			g10 = v1;
			return result3;
		}
		// 0x3e028
		if (v9 > v39) {
			// 0x3e034
			g37 = v9 - v39;
			g17 = *(int32_t *)g32 + random(0);
			// branch -> 0x3e050
		} else {
			// 0x3e04c
			g17 = v9;
			// branch -> 0x3e050
		}
		// 0x3e050
		if (g24 == 1) {
			// 0x3e058
			g17 = g33;
			// branch -> 0x3e060
		}
		// 0x3e060
		g37 = v5;
		g35 = g19 + random(0);
		g37 = g31;
		v40 = random(0);
		v10 = g35;
		v30 = g16;
		v41 = v30 + v10;
		v42 = g20 + v40;
		g36 = v42;
		v31 = a3;
		v32 = g17;
		v43 = v32 + v42;
		g33 = v43;
		g32 = v41;
		v15 = v41;
		v11 = v10;
		if (v41 > v31) {
			// 0x3e094
			g32 = v31;
			v44 = v31 - v30;
			g35 = v44;
			v15 = v31;
			v11 = v44;
			// branch -> 0x3e09c
		}
		// 0x3e09c
		v33 = a4;
		v16 = v43;
		v12 = v42;
		if (v43 > v33) {
			// 0x3e0a4
			g33 = v33;
			v45 = v33 - v32;
			g36 = v45;
			v16 = v33;
			v12 = v45;
			// branch -> 0x3e0ac
		}
		// 0x3e0ac
		v13 = v11;
		if (v11 >= 38) {
			// 0x3e0b4
			g35 = 38;
			v13 = 38;
			// branch -> 0x3e0b8
		}
		// 0x3e0b8
		v14 = v12;
		if (v12 >= 38) {
			// 0x3e0c0
			g36 = 38;
			v14 = 38;
			// branch -> 0x3e0c4
		}
		// 0x3e0c4
		v19 = v13;
		if (v13 <= 1) {
			// 0x3e0cc
			g35 = 1;
			v19 = 1;
			// branch -> 0x3e0d0
		}
		// 0x3e0d0
		v20 = v14;
		if (v14 <= 1) {
			// 0x3e0d8
			g36 = 1;
			v20 = 1;
			// branch -> 0x3e0dc
		}
		// 0x3e0dc
		v17 = v15;
		if (v15 >= 38) {
			// 0x3e0e4
			g32 = 38;
			v17 = 38;
			// branch -> 0x3e0e8
		}
		// 0x3e0e8
		v18 = v16;
		if (v16 >= 38) {
			// 0x3e0f0
			g33 = 38;
			v18 = 38;
			// branch -> 0x3e0f4
		}
		// 0x3e0f4
		v21 = v17;
		if (v17 <= 1) {
			// 0x3e0fc
			g32 = 1;
			v21 = 1;
			// branch -> 0x3e100
		}
		// 0x3e100
		v22 = v18;
		if (v18 <= 1) {
			// 0x3e108
			g33 = 1;
			v22 = 1;
			// branch -> 0x3e10c
		}
		// 0x3e10c
		DefineRoom(v19, v20, v21, v22, g24);
		if (g24 == 1) {
			// 0x3e12c
			v23 = g23;
			*(int32_t *)*(int32_t *)(v23 - 0x7314) = g35 + 2;
			*(int32_t *)*(int32_t *)(v23 - 0x731c) = g36 + 2;
			*(int32_t *)*(int32_t *)(g23 - 0x7318) = g32;
			*(int32_t *)*(int32_t *)(g23 - 0x7320) = g33;
			// branch -> 0x3e154
		}
		// 0x3e154
		v24 = g25;
		v46 = *(int32_t *)*(int32_t *)(g23 - 0x7334);
		*(int32_t *)(v4 + 20 * v46 + 16) = v24;
		v25 = v46;
		g31 = v25;
		v29 = v25;
		if (v24 != 0) {
			// 0x3e174
			if (a6 == 1) {
				// 0x3e180
				g37 = -2 - g35 + g32;
				g18 = random(0) + 1 + g35;
				v47 = v4 + 20 * g25;
				g21 = g36;
				g37 = *(int32_t *)(v47 + 8) - *(int32_t *)v47 - 2;
				v48 = random(0);
				v26 = v47;
				g28 = *(int32_t *)(v26 + 12);
				g27 = *(int32_t *)v26 + v48 + 1;
				// branch -> 0x3e1d0
			}
			// 0x3e1d0
			if (a6 == 3) {
				// 0x3e1dc
				g37 = -2 - g35 + g32;
				g18 = random(0) + 1 + g35;
				v49 = v4 + 20 * g25;
				g21 = g33;
				g37 = -2 - *(int32_t *)v49 + *(int32_t *)(v49 + 8);
				v50 = random(0);
				v27 = v49;
				g28 = *(int32_t *)(v27 + 4);
				g27 = *(int32_t *)v27 + v50 + 1;
				// branch -> 0x3e228
			}
			// 0x3e228
			if (a6 == 2) {
				// 0x3e234
				g18 = g32;
				g37 = -2 - g36 + g33;
				g21 = random(0) + 1 + g36;
				v51 = v4 + 20 * g25;
				v34 = v51 + 4;
				g27 = *(int32_t *)v51;
				g37 = *(int32_t *)(v51 + 12) - *(int32_t *)v34 - 2;
				g28 = random(0) + 1 + *(int32_t *)v34;
				// branch -> 0x3e288
			}
			// 0x3e288
			if (a6 == 4) {
				// 0x3e294
				g18 = g35;
				g37 = -2 - g36 + g33;
				g21 = random(0) + 1 + g36;
				v52 = v4 + 20 * g25;
				v35 = v52 + 4;
				g27 = *(int32_t *)(v52 + 8);
				g37 = *(int32_t *)(v52 + 12) - 2 - *(int32_t *)v35;
				v53 = random(0) + 1 + *(int32_t *)v35;
				g28 = v53;
				v28 = v53;
				// branch -> 0x3e2e4
			} else {
				// 0x3e288
				v28 = g28;
				// branch -> 0x3e2e4
			}
			// 0x3e2e4
			AddHall(g18, g21, g27, v28, a6);
			v29 = g31;
			// branch -> 0x3e2fc
		}
		// 0x3e2fc
		g27 = 0;
		v36 = g19 + 2;
		v37 = g20 + 2;
		if (g17 > g16) {
			// 0x3e304
			g42 = 0;
			g13 = 0;
			CreateRoom(v36, v37, g35 - 2, g33 - 2, v29, 2);
			g42 = 0;
			g13 = 0;
			CreateRoom(g32 + 2, g36 + 2, a3 - 2, a4 - 2, g31, 4);
			g42 = 0;
			g13 = 0;
			CreateRoom(g19 + 2, g33 + 2, g32 - 2, a4 - 2, g31, 1);
			g42 = 0;
			g13 = 0;
			result3 = CreateRoom(g35 + 2, g20 + 2, a3 - 2, g36 - 2, g31, 3);
			// branch -> 0x3e450
		} else {
			// 0x3e3ac
			g42 = 0;
			g13 = 0;
			CreateRoom(v36, v37, g32 - 2, g36 - 2, v29, 3);
			g42 = 0;
			g13 = 0;
			CreateRoom(g35 + 2, g33 + 2, a3 - 2, a4 - 2, g31, 1);
			g42 = 0;
			g13 = 0;
			CreateRoom(g19 + 2, g36 + 2, g35 - 2, a4 - 2, g31, 2);
			g42 = 0;
			g13 = 0;
			result3 = CreateRoom(g32 + 2, g20 + 2, a3 - 2, g33 - 2, g31, 4);
			// branch -> 0x3e450
		}
		// 0x3e450
		g10 = v1;
		return result3;
	}
	// 0x3dfd8
	int32_t v56; // 0x3dff0
	if (v5 > v8) {
		// 0x3dfe4
		g37 = v5 - v8;
		int32_t v57 = random(0); // 0x3dfec
		v56 = g32;
		g16 = *(int32_t *)v56 + v57;
		// branch -> 0x3e000
	} else {
		// 0x3dffc
		g16 = v5;
		v56 = v2;
		// branch -> 0x3e000
	}
	// 0x3e000
	v38 = *(int32_t *)v3;
	v9 = g31;
	v39 = *(int32_t *)v56;
	if (v9 > v38) {
		// 0x3e00c
		g37 = v38 - v39;
		g17 = *(int32_t *)g32 + random(0);
		// branch -> 0x3e050
		// 0x3e050
		if (g24 == 1) {
			// 0x3e058
			g17 = g33;
			// branch -> 0x3e060
		}
		// 0x3e060
		g37 = v5;
		g35 = g19 + random(0);
		g37 = g31;
		v40 = random(0);
		v10 = g35;
		v30 = g16;
		v41 = v30 + v10;
		v42 = g20 + v40;
		g36 = v42;
		v31 = a3;
		v32 = g17;
		v43 = v32 + v42;
		g33 = v43;
		g32 = v41;
		v15 = v41;
		v11 = v10;
		if (v41 > v31) {
			// 0x3e094
			g32 = v31;
			v44 = v31 - v30;
			g35 = v44;
			v15 = v31;
			v11 = v44;
			// branch -> 0x3e09c
		}
		// 0x3e09c
		v33 = a4;
		v16 = v43;
		v12 = v42;
		if (v43 > v33) {
			// 0x3e0a4
			g33 = v33;
			v45 = v33 - v32;
			g36 = v45;
			v16 = v33;
			v12 = v45;
			// branch -> 0x3e0ac
		}
		// 0x3e0ac
		v13 = v11;
		if (v11 >= 38) {
			// 0x3e0b4
			g35 = 38;
			v13 = 38;
			// branch -> 0x3e0b8
		}
		// 0x3e0b8
		v14 = v12;
		if (v12 >= 38) {
			// 0x3e0c0
			g36 = 38;
			v14 = 38;
			// branch -> 0x3e0c4
		}
		// 0x3e0c4
		v19 = v13;
		if (v13 <= 1) {
			// 0x3e0cc
			g35 = 1;
			v19 = 1;
			// branch -> 0x3e0d0
		}
		// 0x3e0d0
		v20 = v14;
		if (v14 <= 1) {
			// 0x3e0d8
			g36 = 1;
			v20 = 1;
			// branch -> 0x3e0dc
		}
		// 0x3e0dc
		v17 = v15;
		if (v15 >= 38) {
			// 0x3e0e4
			g32 = 38;
			v17 = 38;
			// branch -> 0x3e0e8
		}
		// 0x3e0e8
		v18 = v16;
		if (v16 >= 38) {
			// 0x3e0f0
			g33 = 38;
			v18 = 38;
			// branch -> 0x3e0f4
		}
		// 0x3e0f4
		v21 = v17;
		if (v17 <= 1) {
			// 0x3e0fc
			g32 = 1;
			v21 = 1;
			// branch -> 0x3e100
		}
		// 0x3e100
		v22 = v18;
		if (v18 <= 1) {
			// 0x3e108
			g33 = 1;
			v22 = 1;
			// branch -> 0x3e10c
		}
		// 0x3e10c
		DefineRoom(v19, v20, v21, v22, g24);
		if (g24 == 1) {
			// 0x3e12c
			v23 = g23;
			*(int32_t *)*(int32_t *)(v23 - 0x7314) = g35 + 2;
			*(int32_t *)*(int32_t *)(v23 - 0x731c) = g36 + 2;
			*(int32_t *)*(int32_t *)(g23 - 0x7318) = g32;
			*(int32_t *)*(int32_t *)(g23 - 0x7320) = g33;
			// branch -> 0x3e154
		}
		// 0x3e154
		v24 = g25;
		v46 = *(int32_t *)*(int32_t *)(g23 - 0x7334);
		*(int32_t *)(v4 + 20 * v46 + 16) = v24;
		v25 = v46;
		g31 = v25;
		v29 = v25;
		if (v24 != 0) {
			// 0x3e174
			if (a6 == 1) {
				// 0x3e180
				g37 = -2 - g35 + g32;
				g18 = random(0) + 1 + g35;
				v47 = v4 + 20 * g25;
				g21 = g36;
				g37 = *(int32_t *)(v47 + 8) - *(int32_t *)v47 - 2;
				v48 = random(0);
				v26 = v47;
				g28 = *(int32_t *)(v26 + 12);
				g27 = *(int32_t *)v26 + v48 + 1;
				// branch -> 0x3e1d0
			}
			// 0x3e1d0
			if (a6 == 3) {
				// 0x3e1dc
				g37 = -2 - g35 + g32;
				g18 = random(0) + 1 + g35;
				v49 = v4 + 20 * g25;
				g21 = g33;
				g37 = -2 - *(int32_t *)v49 + *(int32_t *)(v49 + 8);
				v50 = random(0);
				v27 = v49;
				g28 = *(int32_t *)(v27 + 4);
				g27 = *(int32_t *)v27 + v50 + 1;
				// branch -> 0x3e228
			}
			// 0x3e228
			if (a6 == 2) {
				// 0x3e234
				g18 = g32;
				g37 = -2 - g36 + g33;
				g21 = random(0) + 1 + g36;
				v51 = v4 + 20 * g25;
				v34 = v51 + 4;
				g27 = *(int32_t *)v51;
				g37 = *(int32_t *)(v51 + 12) - *(int32_t *)v34 - 2;
				g28 = random(0) + 1 + *(int32_t *)v34;
				// branch -> 0x3e288
			}
			// 0x3e288
			if (a6 == 4) {
				// 0x3e294
				g18 = g35;
				g37 = -2 - g36 + g33;
				g21 = random(0) + 1 + g36;
				v52 = v4 + 20 * g25;
				v35 = v52 + 4;
				g27 = *(int32_t *)(v52 + 8);
				g37 = *(int32_t *)(v52 + 12) - 2 - *(int32_t *)v35;
				v53 = random(0) + 1 + *(int32_t *)v35;
				g28 = v53;
				v28 = v53;
				// branch -> 0x3e2e4
			} else {
				// 0x3e288
				v28 = g28;
				// branch -> 0x3e2e4
			}
			// 0x3e2e4
			AddHall(g18, g21, g27, v28, a6);
			v29 = g31;
			// branch -> 0x3e2fc
		}
		// 0x3e2fc
		g27 = 0;
		v36 = g19 + 2;
		v37 = g20 + 2;
		if (g17 > g16) {
			// 0x3e304
			g42 = 0;
			g13 = 0;
			CreateRoom(v36, v37, g35 - 2, g33 - 2, v29, 2);
			g42 = 0;
			g13 = 0;
			CreateRoom(g32 + 2, g36 + 2, a3 - 2, a4 - 2, g31, 4);
			g42 = 0;
			g13 = 0;
			CreateRoom(g19 + 2, g33 + 2, g32 - 2, a4 - 2, g31, 1);
			g42 = 0;
			g13 = 0;
			result3 = CreateRoom(g35 + 2, g20 + 2, a3 - 2, g36 - 2, g31, 3);
			// branch -> 0x3e450
		} else {
			// 0x3e3ac
			g42 = 0;
			g13 = 0;
			CreateRoom(v36, v37, g32 - 2, g36 - 2, v29, 3);
			g42 = 0;
			g13 = 0;
			CreateRoom(g35 + 2, g33 + 2, a3 - 2, a4 - 2, g31, 1);
			g42 = 0;
			g13 = 0;
			CreateRoom(g19 + 2, g36 + 2, g35 - 2, a4 - 2, g31, 2);
			g42 = 0;
			g13 = 0;
			result3 = CreateRoom(g32 + 2, g20 + 2, a3 - 2, g33 - 2, g31, 4);
			// branch -> 0x3e450
		}
		// 0x3e450
		g10 = v1;
		return result3;
	}
	// 0x3e028
	if (v9 > v39) {
		// 0x3e034
		g37 = v9 - v39;
		g17 = *(int32_t *)g32 + random(0);
		// branch -> 0x3e050
	} else {
		// 0x3e04c
		g17 = v9;
		// branch -> 0x3e050
	}
	// 0x3e050
	if (g24 == 1) {
		// 0x3e058
		g17 = g33;
		// branch -> 0x3e060
	}
	// 0x3e060
	g37 = v5;
	g35 = g19 + random(0);
	g37 = g31;
	v40 = random(0);
	v10 = g35;
	v30 = g16;
	v41 = v30 + v10;
	v42 = g20 + v40;
	g36 = v42;
	v31 = a3;
	v32 = g17;
	v43 = v32 + v42;
	g33 = v43;
	g32 = v41;
	v15 = v41;
	v11 = v10;
	if (v41 > v31) {
		// 0x3e094
		g32 = v31;
		v44 = v31 - v30;
		g35 = v44;
		v15 = v31;
		v11 = v44;
		// branch -> 0x3e09c
	}
	// 0x3e09c
	v33 = a4;
	v16 = v43;
	v12 = v42;
	if (v43 > v33) {
		// 0x3e0a4
		g33 = v33;
		v45 = v33 - v32;
		g36 = v45;
		v16 = v33;
		v12 = v45;
		// branch -> 0x3e0ac
	}
	// 0x3e0ac
	v13 = v11;
	if (v11 >= 38) {
		// 0x3e0b4
		g35 = 38;
		v13 = 38;
		// branch -> 0x3e0b8
	}
	// 0x3e0b8
	v14 = v12;
	if (v12 >= 38) {
		// 0x3e0c0
		g36 = 38;
		v14 = 38;
		// branch -> 0x3e0c4
	}
	// 0x3e0c4
	v19 = v13;
	if (v13 <= 1) {
		// 0x3e0cc
		g35 = 1;
		v19 = 1;
		// branch -> 0x3e0d0
	}
	// 0x3e0d0
	v20 = v14;
	if (v14 <= 1) {
		// 0x3e0d8
		g36 = 1;
		v20 = 1;
		// branch -> 0x3e0dc
	}
	// 0x3e0dc
	v17 = v15;
	if (v15 >= 38) {
		// 0x3e0e4
		g32 = 38;
		v17 = 38;
		// branch -> 0x3e0e8
	}
	// 0x3e0e8
	v18 = v16;
	if (v16 >= 38) {
		// 0x3e0f0
		g33 = 38;
		v18 = 38;
		// branch -> 0x3e0f4
	}
	// 0x3e0f4
	v21 = v17;
	if (v17 <= 1) {
		// 0x3e0fc
		g32 = 1;
		v21 = 1;
		// branch -> 0x3e100
	}
	// 0x3e100
	v22 = v18;
	if (v18 <= 1) {
		// 0x3e108
		g33 = 1;
		v22 = 1;
		// branch -> 0x3e10c
	}
	// 0x3e10c
	DefineRoom(v19, v20, v21, v22, g24);
	if (g24 == 1) {
		// 0x3e12c
		v23 = g23;
		*(int32_t *)*(int32_t *)(v23 - 0x7314) = g35 + 2;
		*(int32_t *)*(int32_t *)(v23 - 0x731c) = g36 + 2;
		*(int32_t *)*(int32_t *)(g23 - 0x7318) = g32;
		*(int32_t *)*(int32_t *)(g23 - 0x7320) = g33;
		// branch -> 0x3e154
	}
	// 0x3e154
	v24 = g25;
	v46 = *(int32_t *)*(int32_t *)(g23 - 0x7334);
	*(int32_t *)(v4 + 20 * v46 + 16) = v24;
	v25 = v46;
	g31 = v25;
	v29 = v25;
	if (v24 != 0) {
		// 0x3e174
		if (a6 == 1) {
			// 0x3e180
			g37 = -2 - g35 + g32;
			g18 = random(0) + 1 + g35;
			v47 = v4 + 20 * g25;
			g21 = g36;
			g37 = *(int32_t *)(v47 + 8) - *(int32_t *)v47 - 2;
			v48 = random(0);
			v26 = v47;
			g28 = *(int32_t *)(v26 + 12);
			g27 = *(int32_t *)v26 + v48 + 1;
			// branch -> 0x3e1d0
		}
		// 0x3e1d0
		if (a6 == 3) {
			// 0x3e1dc
			g37 = -2 - g35 + g32;
			g18 = random(0) + 1 + g35;
			v49 = v4 + 20 * g25;
			g21 = g33;
			g37 = -2 - *(int32_t *)v49 + *(int32_t *)(v49 + 8);
			v50 = random(0);
			v27 = v49;
			g28 = *(int32_t *)(v27 + 4);
			g27 = *(int32_t *)v27 + v50 + 1;
			// branch -> 0x3e228
		}
		// 0x3e228
		if (a6 == 2) {
			// 0x3e234
			g18 = g32;
			g37 = -2 - g36 + g33;
			g21 = random(0) + 1 + g36;
			v51 = v4 + 20 * g25;
			v34 = v51 + 4;
			g27 = *(int32_t *)v51;
			g37 = *(int32_t *)(v51 + 12) - *(int32_t *)v34 - 2;
			g28 = random(0) + 1 + *(int32_t *)v34;
			// branch -> 0x3e288
		}
		// 0x3e288
		if (a6 == 4) {
			// 0x3e294
			g18 = g35;
			g37 = -2 - g36 + g33;
			g21 = random(0) + 1 + g36;
			v52 = v4 + 20 * g25;
			v35 = v52 + 4;
			g27 = *(int32_t *)(v52 + 8);
			g37 = *(int32_t *)(v52 + 12) - 2 - *(int32_t *)v35;
			v53 = random(0) + 1 + *(int32_t *)v35;
			g28 = v53;
			v28 = v53;
			// branch -> 0x3e2e4
		} else {
			// 0x3e288
			v28 = g28;
			// branch -> 0x3e2e4
		}
		// 0x3e2e4
		AddHall(g18, g21, g27, v28, a6);
		v29 = g31;
		// branch -> 0x3e2fc
	}
	// 0x3e2fc
	g27 = 0;
	v36 = g19 + 2;
	v37 = g20 + 2;
	if (g17 > g16) {
		// 0x3e304
		g42 = 0;
		g13 = 0;
		CreateRoom(v36, v37, g35 - 2, g33 - 2, v29, 2);
		g42 = 0;
		g13 = 0;
		CreateRoom(g32 + 2, g36 + 2, a3 - 2, a4 - 2, g31, 4);
		g42 = 0;
		g13 = 0;
		CreateRoom(g19 + 2, g33 + 2, g32 - 2, a4 - 2, g31, 1);
		g42 = 0;
		g13 = 0;
		result3 = CreateRoom(g35 + 2, g20 + 2, a3 - 2, g36 - 2, g31, 3);
		// branch -> 0x3e450
	} else {
		// 0x3e3ac
		g42 = 0;
		g13 = 0;
		CreateRoom(v36, v37, g32 - 2, g36 - 2, v29, 3);
		g42 = 0;
		g13 = 0;
		CreateRoom(g35 + 2, g33 + 2, a3 - 2, a4 - 2, g31, 1);
		g42 = 0;
		g13 = 0;
		CreateRoom(g19 + 2, g36 + 2, g35 - 2, a4 - 2, g31, 2);
		g42 = 0;
		g13 = 0;
		result3 = CreateRoom(g32 + 2, g20 + 2, a3 - 2, g33 - 2, g31, 4);
		// branch -> 0x3e450
	}
	// 0x3e450
	g10 = v1;
	return result3;
}

// Address range: 0x3daf4 - 0x3dd98
int32_t DefineRoom(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t result2 = a1;                    // r3
	int32_t v1 = 40 * a1;                    // 0x3daf8
	int32_t v2 = v1;                         // r12
	int32_t v3 = *(int32_t *)(g23 - 0x7330); // 0x3dafc
	int32_t v4 = v3 + v1;                    // 0x3db10
	int32_t v5 = v4;                         // r7
	int32_t v6 = *(int32_t *)(g23 - 0x7334); // r11
	*(char *)(a2 + v4) = 67;
	int32_t v7 = 40 * a3 + v3;               // r8
	int32_t v8 = *(int32_t *)(g23 - 0x7338); // r31
	*(char *)(a4 + v5) = 69;
	*(char *)(a2 + v7) = 66;
	*(char *)(a4 + v7) = 65;
	int32_t *v9 = (int32_t *)v6; // 0x3db40
	*v9 = *v9 + 1;
	int32_t v10 = 20 * *(int32_t *)v6; // 0x3db50
	*(int32_t *)(v8 + v10) = result2;
	int32_t v11 = v10 + v8; // 0x3db58
	int32_t v12 = v11;      // r9
	*(int32_t *)(v11 + 8) = a3;
	*(int32_t *)(v12 + 4) = a2;
	*(int32_t *)(v12 + 12) = a4;
	int32_t v13;    // r10
	int32_t v14;    // r29
	int32_t v15;    // r30
	int32_t v16;    // 0x3dc44
	int32_t v17;    // 0x3dc5c
	int32_t result; // 0x3dcfc
	int32_t v18;    // 0x3dd10
	int32_t v19;    // 0x3dc40
	int32_t v20;    // 0x3dc48
	int32_t v21;    // 0x3dc70
	int32_t v22;    // 0x3dcc4
	int32_t v23;    // 0x3dcc8
	int32_t v24;    // 0x3dce4
	int32_t v25;    // 0x3dce8
	int32_t v26;    // 0x3dcec
	int32_t v27;    // 0x3dd10
	int32_t v28;    // 0x3dc64
	int32_t v29;    // 0x3dcf0
	int32_t v30;    // 0x3dd1c
	if (a5 == 1) {
		int32_t v31 = result2; // 0x3db70
		v14 = v31;
		int32_t v32 = a2 + *(int32_t *)(g23 - 0x7514); // 0x3db74
		if (v31 < a3) {
			int32_t v33 = a3; // 0x3dc3819
			int32_t v34 = v2; // 0x3db80
			// branch -> 0x3db7c
			while (true) {
				int32_t v35 = a4; // 0x3db7c
				v8 = v32 + v34;
				int32_t v36 = v35 - v31; // 0x3db84
				v13 = v36;
				int32_t v37 = v33; // 0x3dc38
				int32_t v38 = v34; // 0x3dc34
				int32_t v39 = v31; // 0x3dc30
				int32_t v40;       // 0x3dc30
				int32_t v41;       // 0x3dc34
				if (v35 > v31) {
					int32_t v42 = __asm_rlwinm_(v36, 29, 3, 31); // 0x3db8c
					int32_t v43 = v42;                           // ctr
					int32_t v44 = v13;                           // 0x3db94
					int32_t v45 = v8;
					int32_t v46; // 0x3dc10
					if (v42 == 0) {
						v46 = v44;
					lab_0x3dc10:;
						char *v47 = (char *)v45; // 0x3dc14
						v2 += 40;
						*v47 = (char)((int32_t)*v47 | 128);
						int32_t v48 = v8 + 40; // 0x3dc24
						int32_t v49 = v46 - 1; // 0x3dc28
						// branch -> 0x3dc14
						while (v49 != 0) {
							// 0x3dc14
							v47 = (char *)v48;
							v2 += 40;
							*v47 = (char)((int32_t)*v47 | 128);
							v48 += 40;
							v49--;
							// continue -> 0x3dc14
						}
					lab_0x3dc2c:
						// 0x3dc2c
						v37 = a3;
						// branch -> 0x3dc30
					lab_0x3dc30:
						// 0x3dc30
						v40 = v44 + v14 + 1;
						v14 = v40;
						v41 = v2 + 40;
						v2 = v41;
						if (v40 < v37) {
						lab_0x3dc30_2:
							// 0x3dc30
							v33 = v37;
							v34 = v41;
							v31 = v40;
							// branch -> 0x3db7c
							continue;
						} else {
							v16 = v37;
							// 0x3dc40
							v19 = result2 + 1;
							v20 = 40 * v19;
							v8 = v20;
							v17 = v3;
							v2 = a2 + v20 + v17;
							v15 = a4 + v20 + v17;
							v28 = v16 - v19;
							v13 = v28;
							v6 = 35;
							if (v19 <= v16 - 1) {
								// 0x3dc70
								v21 = __asm_rlwinm_(v28, 29, 3, 31);
								if (v21 == 0) {
									// 0x3dc70
									// branch -> 0x3dcd0
									// 0x3dcd0
									*(char *)v2 = (char)v6;
									v2 += 40;
									*(char *)v15 = (char)v6;
									v15 += 40;
									v24 = v13 - 1;
									// branch -> 0x3dcd4
									while (v24 != 0) {
										// 0x3dcd4
										*(char *)v2 = (char)v6;
										v2 += 40;
										*(char *)v15 = (char)v6;
										v15 += 40;
										v24--;
										// continue -> 0x3dcd4
									}
									// 0x3dce8
									v25 = a2 + 1;
									v2 = v25;
									v26 = a4 - 1;
									a2 = v26;
									v29 = v5 + v25;
									v12 = v29;
									v13 = v7 + v25;
									v6 = v3 + v25;
									result = result2;
									v14 = result + 1;
									a4 = 46;
									v5 = 35;
									if (v25 > v26) {
										// 0x3dd88
										return result;
									}
									int32_t v50 = v29; // 0x3dd0c
									char v51 = 35;
									while (true) {
										// 0x3dd0c
										*(char *)v50 = v51;
										v18 = v14;
										v27 = a3;
										v7 = v8 + v6;
										*(char *)v13 = (char)v5;
										v30 = a3 - v14;
										result2 = v30;
										int32_t v52; // 0x3dd70
										int32_t v53; // 0x3dd7c
										if (v18 == v27 || v18 > v27) {
										lab_0x3dd70_14:
											// 0x3dd70
											v52 = v12 + 1;
											v12 = v52;
											v13++;
											v6++;
											v53 = v2 + 1;
											v2 = v53;
											if (v53 <= a2) {
												goto lab_0x3dd70_3;
											}
											// 0x3dd80
											// branch -> 0x3dd88
											// 0x3dd88
											return result2;
										}
									lab_0x3dd24_11:;
										int32_t v54 = __asm_rlwinm_(v30, 29, 3, 31); // 0x3dd24
										v43 = v54;
										int32_t v55; // 0x3dd60
										int32_t v56;
										if (v54 == 0) {
											// 0x3dd24
											v56 = v7;
											v55 = result2;
											// branch -> 0x3dd60
										lab_0x3dd60:
											// 0x3dd60
											*(char *)v56 = (char)a4;
											int32_t v57 = v7 + 40; // 0x3dd68
											int32_t v58 = v55 - 1; // 0x3dd6c
											// branch -> 0x3dd64
											while (v58 != 0) {
												// 0x3dd64
												*(char *)v57 = (char)a4;
												v57 += 40;
												v58--;
												// continue -> 0x3dd64
											}
										lab_0x3dd70:
											// 0x3dd70
											v52 = v12 + 1;
											v12 = v52;
											v13++;
											v6++;
											v53 = v2 + 1;
											v2 = v53;
											if (v53 > a2) {
												// 0x3dd80
												// branch -> 0x3dd88
												// 0x3dd88
												return result2;
											}
										lab_0x3dd70_3:
											// 0x3dd70
											v50 = v52;
											v51 = v5;
											// branch -> 0x3dd0c
											continue;
										} else {
											// 0x3dd30
											*(char *)v7 = (char)a4;
											*(char *)(v7 + 40) = (char)a4;
											*(char *)(v7 + 80) = (char)a4;
											*(char *)(v7 + 120) = (char)a4;
											*(char *)(v7 + 160) = (char)a4;
											*(char *)(v7 + 200) = (char)a4;
											*(char *)(v7 + 240) = (char)a4;
											*(char *)(v7 + 280) = (char)a4;
											int32_t v59 = v7 + 320; // 0x3dd50
											v7 = v59;
											int32_t v60 = v43 - 1; // 0x3dd54
											// branch -> 0x3dd30
											while (v60 != 0) {
												// 0x3dd30
												*(char *)v59 = (char)a4;
												*(char *)(v7 + 40) = (char)a4;
												*(char *)(v7 + 80) = (char)a4;
												*(char *)(v7 + 120) = (char)a4;
												*(char *)(v7 + 160) = (char)a4;
												*(char *)(v7 + 200) = (char)a4;
												*(char *)(v7 + 240) = (char)a4;
												*(char *)(v7 + 280) = (char)a4;
												v59 = v7 + 320;
												v7 = v59;
												v60--;
												// continue -> 0x3dd30
											}
											int32_t v61 = result2 % 8; // 0x3dd58
											result2 = v61;
											if (v61 == 0) {
												goto lab_0x3dd70;
											}
											v56 = v59;
											v55 = v61;
											goto lab_0x3dd60;
										}
										int32_t v62 = v12; // 0x3dd70
										v52 = v62 + 1;
										v12 = v52;
										int32_t v63 = v13; // 0x3dd74
										v13 = v63 + 1;
										int32_t v64 = v6; // 0x3dd78
										v6 = v64 + 1;
										int32_t v65 = v2; // 0x3dd7c
										v53 = v65 + 1;
										v2 = v53;
										int32_t v66 = a2; // 0x3dd80
										if (v53 <= v66) {
											goto lab_0x3dd70_3;
										}
										int32_t v67 = result2;
										int32_t result3 = v67; // 0x3dd94
										// branch -> 0x3dd88
										// 0x3dd88
										return result3;
									}
								} else {
									*(char *)v2 = (char)v6;
									*(char *)v15 = (char)v6;
									*(char *)(v2 + 40) = (char)v6;
									*(char *)(v15 + 40) = (char)v6;
									*(char *)(v2 + 80) = (char)v6;
									*(char *)(v15 + 80) = (char)v6;
									*(char *)(v2 + 120) = (char)v6;
									*(char *)(v15 + 120) = (char)v6;
									*(char *)(v2 + 160) = (char)v6;
									*(char *)(v15 + 160) = (char)v6;
									*(char *)(v2 + 200) = (char)v6;
									*(char *)(v15 + 200) = (char)v6;
									*(char *)(v2 + 240) = (char)v6;
									*(char *)(v15 + 240) = (char)v6;
									*(char *)(v2 + 280) = (char)v6;
									v2 += 320;
									*(char *)(v15 + 280) = (char)v6;
									v15 += 320;
									v22 = v21 - 1;
									while (v22 != 0) {
										// 0x3dc7c
										*(char *)v2 = (char)v6;
										*(char *)v15 = (char)v6;
										*(char *)(v2 + 40) = (char)v6;
										*(char *)(v15 + 40) = (char)v6;
										*(char *)(v2 + 80) = (char)v6;
										*(char *)(v15 + 80) = (char)v6;
										*(char *)(v2 + 120) = (char)v6;
										*(char *)(v15 + 120) = (char)v6;
										*(char *)(v2 + 160) = (char)v6;
										*(char *)(v15 + 160) = (char)v6;
										*(char *)(v2 + 200) = (char)v6;
										*(char *)(v15 + 200) = (char)v6;
										*(char *)(v2 + 240) = (char)v6;
										*(char *)(v15 + 240) = (char)v6;
										*(char *)(v2 + 280) = (char)v6;
										v2 += 320;
										*(char *)(v15 + 280) = (char)v6;
										v15 += 320;
										v22--;
										// continue -> 0x3dc7c
									}
									// 0x3dcc8
									v23 = v13 % 8;
									if (v23 != 0) {
										// 0x3dcd0
										*(char *)v2 = (char)v6;
										v2 += 40;
										*(char *)v15 = (char)v6;
										v15 += 40;
										v24 = v23 - 1;
										// branch -> 0x3dcd4
										while (v24 != 0) {
											// 0x3dcd4
											*(char *)v2 = (char)v6;
											v2 += 40;
											*(char *)v15 = (char)v6;
											v15 += 40;
											v24--;
											// continue -> 0x3dcd4
										}
										// 0x3dce8
										v25 = a2 + 1;
										v2 = v25;
										v26 = a4 - 1;
										a2 = v26;
										v29 = v5 + v25;
										v12 = v29;
										v13 = v7 + v25;
										v6 = v3 + v25;
										result = result2;
										v14 = result + 1;
										a4 = 46;
										if (v25 > v26) {
											// 0x3dd88
											return result;
										}
										v5 = 35;
										while (true) {
											// 0x3dd0c
											*(char *)v29 = 35;
											v18 = v14;
											v27 = a3;
											v7 = v8 + v6;
											*(char *)v13 = (char)v5;
											v30 = a3 - v14;
											result2 = v30;
											if (v18 == v27 || v18 > v27) {
												goto lab_0x3dd70_14;
											}
											goto lab_0x3dd24_11;
										}
									}
								}
								// 0x3dce8
								v25 = a2 + 1;
								v2 = v25;
								v26 = a4 - 1;
								a2 = v26;
								v29 = v5 + v25;
								v12 = v29;
								v13 = v7 + v25;
								v6 = v3 + v25;
								result = result2;
								v14 = result + 1;
								a4 = 46;
								if (v25 > v26) {
									// 0x3dd88
									return result;
								}
								v5 = 35;
								while (true) {
									// 0x3dd0c
									*(char *)v29 = 35;
									v18 = v14;
									v27 = a3;
									v7 = v8 + v6;
									*(char *)v13 = (char)v5;
									v30 = a3 - v14;
									result2 = v30;
									if (v18 == v27 || v18 > v27) {
										goto lab_0x3dd70_14;
									}
									goto lab_0x3dd24_11;
								}
							}
							// 0x3dce8
							v25 = a2 + 1;
							v2 = v25;
							v26 = a4 - 1;
							a2 = v26;
							v29 = v5 + v25;
							v12 = v29;
							v13 = v7 + v25;
							v6 = v3 + v25;
							result = result2;
							v14 = result + 1;
							a4 = 46;
							if (v25 > v26) {
								// 0x3dd88
								return result;
							}
							v5 = 35;
							while (true) {
								// 0x3dd0c
								*(char *)v29 = 35;
								v18 = v14;
								v27 = a3;
								v7 = v8 + v6;
								*(char *)v13 = (char)v5;
								v30 = a3 - v14;
								result2 = v30;
								if (v18 == v27 || v18 > v27) {
									goto lab_0x3dd70_14;
								}
								goto lab_0x3dd24_11;
							}
						}
					} else {
						char *v68 = (char *)v45; // 0x3db9c
						v2 += 320;
						*v68 = (char)((int32_t)*v68 | 128);
						char *v69 = (char *)(v8 + 40); // 0x3dbac
						*v69 = (char)((int32_t)*v69 | 128);
						char *v70 = (char *)(v8 + 80); // 0x3dbb8
						*v70 = (char)((int32_t)*v70 | 128);
						char *v71 = (char *)(v8 + 120); // 0x3dbc4
						*v71 = (char)((int32_t)*v71 | 128);
						char *v72 = (char *)(v8 + 160); // 0x3dbd0
						*v72 = (char)((int32_t)*v72 | 128);
						char *v73 = (char *)(v8 + 200); // 0x3dbdc
						*v73 = (char)((int32_t)*v73 | 128);
						char *v74 = (char *)(v8 + 240); // 0x3dbe8
						*v74 = (char)((int32_t)*v74 | 128);
						char *v75 = (char *)(v8 + 280); // 0x3dbf4
						*v75 = (char)((int32_t)*v75 | 128);
						int32_t v76 = v8 + 320; // 0x3dc00
						v8 = v76;
						int32_t v77 = v43 - 1; // 0x3dc04
						while (v77 != 0) {
							// 0x3db9c
							v68 = (char *)v76;
							v2 += 320;
							*v68 = (char)((int32_t)*v68 | 128);
							v69 = (char *)(v8 + 40);
							*v69 = (char)((int32_t)*v69 | 128);
							v70 = (char *)(v8 + 80);
							*v70 = (char)((int32_t)*v70 | 128);
							v71 = (char *)(v8 + 120);
							*v71 = (char)((int32_t)*v71 | 128);
							v72 = (char *)(v8 + 160);
							*v72 = (char)((int32_t)*v72 | 128);
							v73 = (char *)(v8 + 200);
							*v73 = (char)((int32_t)*v73 | 128);
							v74 = (char *)(v8 + 240);
							*v74 = (char)((int32_t)*v74 | 128);
							v75 = (char *)(v8 + 280);
							*v75 = (char)((int32_t)*v75 | 128);
							v76 = v8 + 320;
							v8 = v76;
							v77--;
							// continue -> 0x3db9c
						}
						int32_t v78 = v13 % 8; // 0x3dc08
						if (v78 == 0) {
							goto lab_0x3dc2c;
						}
						v45 = v76;
						v46 = v78;
						goto lab_0x3dc10;
					}
				}
				// 0x3dc30
				v40 = v39 + 1;
				v14 = v40;
				v41 = v38 + 40;
				v2 = v41;
				if (v40 < v37) {
					goto lab_0x3dc30_2;
				}
				v16 = v37;
				// 0x3dc40
				v19 = result2 + 1;
				v20 = 40 * v19;
				v8 = v20;
				v17 = v3;
				v2 = a2 + v20 + v17;
				v15 = a4 + v20 + v17;
				v28 = v16 - v19;
				v13 = v28;
				v6 = 35;
				if (v19 <= v16 - 1) {
					// 0x3dc70
					v21 = __asm_rlwinm_(v28, 29, 3, 31);
					if (v21 == 0) {
						// 0x3dc70
						// branch -> 0x3dcd0
						// 0x3dcd0
						*(char *)v2 = (char)v6;
						v2 += 40;
						*(char *)v15 = (char)v6;
						v15 += 40;
						v24 = v13 - 1;
						// branch -> 0x3dcd4
						while (v24 != 0) {
							// 0x3dcd4
							*(char *)v2 = (char)v6;
							v2 += 40;
							*(char *)v15 = (char)v6;
							v15 += 40;
							v24--;
							// continue -> 0x3dcd4
						}
						// 0x3dce8
						v25 = a2 + 1;
						v2 = v25;
						v26 = a4 - 1;
						a2 = v26;
						v29 = v5 + v25;
						v12 = v29;
						v13 = v7 + v25;
						v6 = v3 + v25;
						result = result2;
						v14 = result + 1;
						a4 = 46;
						if (v25 > v26) {
							// 0x3dd88
							return result;
						}
						v5 = 35;
						while (true) {
							// 0x3dd0c
							*(char *)v29 = 35;
							v18 = v14;
							v27 = a3;
							v7 = v8 + v6;
							*(char *)v13 = (char)v5;
							v30 = a3 - v14;
							result2 = v30;
							if (v18 == v27 || v18 > v27) {
								goto lab_0x3dd70_14;
							}
							goto lab_0x3dd24_11;
						}
					} else {
						*(char *)v2 = (char)v6;
						*(char *)v15 = (char)v6;
						*(char *)(v2 + 40) = (char)v6;
						*(char *)(v15 + 40) = (char)v6;
						*(char *)(v2 + 80) = (char)v6;
						*(char *)(v15 + 80) = (char)v6;
						*(char *)(v2 + 120) = (char)v6;
						*(char *)(v15 + 120) = (char)v6;
						*(char *)(v2 + 160) = (char)v6;
						*(char *)(v15 + 160) = (char)v6;
						*(char *)(v2 + 200) = (char)v6;
						*(char *)(v15 + 200) = (char)v6;
						*(char *)(v2 + 240) = (char)v6;
						*(char *)(v15 + 240) = (char)v6;
						*(char *)(v2 + 280) = (char)v6;
						v2 += 320;
						*(char *)(v15 + 280) = (char)v6;
						v15 += 320;
						v22 = v21 - 1;
						while (v22 != 0) {
							// 0x3dc7c
							*(char *)v2 = (char)v6;
							*(char *)v15 = (char)v6;
							*(char *)(v2 + 40) = (char)v6;
							*(char *)(v15 + 40) = (char)v6;
							*(char *)(v2 + 80) = (char)v6;
							*(char *)(v15 + 80) = (char)v6;
							*(char *)(v2 + 120) = (char)v6;
							*(char *)(v15 + 120) = (char)v6;
							*(char *)(v2 + 160) = (char)v6;
							*(char *)(v15 + 160) = (char)v6;
							*(char *)(v2 + 200) = (char)v6;
							*(char *)(v15 + 200) = (char)v6;
							*(char *)(v2 + 240) = (char)v6;
							*(char *)(v15 + 240) = (char)v6;
							*(char *)(v2 + 280) = (char)v6;
							v2 += 320;
							*(char *)(v15 + 280) = (char)v6;
							v15 += 320;
							v22--;
							// continue -> 0x3dc7c
						}
						// 0x3dcc8
						v23 = v13 % 8;
						if (v23 != 0) {
							// 0x3dcd0
							*(char *)v2 = (char)v6;
							v2 += 40;
							*(char *)v15 = (char)v6;
							v15 += 40;
							v24 = v23 - 1;
							// branch -> 0x3dcd4
							while (v24 != 0) {
								// 0x3dcd4
								*(char *)v2 = (char)v6;
								v2 += 40;
								*(char *)v15 = (char)v6;
								v15 += 40;
								v24--;
								// continue -> 0x3dcd4
							}
							// 0x3dce8
							v25 = a2 + 1;
							v2 = v25;
							v26 = a4 - 1;
							a2 = v26;
							v29 = v5 + v25;
							v12 = v29;
							v13 = v7 + v25;
							v6 = v3 + v25;
							result = result2;
							v14 = result + 1;
							a4 = 46;
							if (v25 > v26) {
								// 0x3dd88
								return result;
							}
							v5 = 35;
							while (true) {
								// 0x3dd0c
								*(char *)v29 = 35;
								v18 = v14;
								v27 = a3;
								v7 = v8 + v6;
								*(char *)v13 = (char)v5;
								v30 = a3 - v14;
								result2 = v30;
								if (v18 == v27 || v18 > v27) {
									goto lab_0x3dd70_14;
								}
								goto lab_0x3dd24_11;
							}
						}
					}
					// 0x3dce8
					v25 = a2 + 1;
					v2 = v25;
					v26 = a4 - 1;
					a2 = v26;
					v29 = v5 + v25;
					v12 = v29;
					v13 = v7 + v25;
					v6 = v3 + v25;
					result = result2;
					v14 = result + 1;
					a4 = 46;
					if (v25 > v26) {
						// 0x3dd88
						return result;
					}
					v5 = 35;
					while (true) {
						// 0x3dd0c
						*(char *)v29 = 35;
						v18 = v14;
						v27 = a3;
						v7 = v8 + v6;
						*(char *)v13 = (char)v5;
						v30 = a3 - v14;
						result2 = v30;
						if (v18 == v27 || v18 > v27) {
							goto lab_0x3dd70_14;
						}
						goto lab_0x3dd24_11;
					}
				}
				// 0x3dce8
				v25 = a2 + 1;
				v2 = v25;
				v26 = a4 - 1;
				a2 = v26;
				v29 = v5 + v25;
				v12 = v29;
				v13 = v7 + v25;
				v6 = v3 + v25;
				result = result2;
				v14 = result + 1;
				a4 = 46;
				if (v25 > v26) {
					// 0x3dd88
					return result;
				}
				v5 = 35;
				while (true) {
					// 0x3dd0c
					*(char *)v29 = 35;
					v18 = v14;
					v27 = a3;
					v7 = v8 + v6;
					*(char *)v13 = (char)v5;
					v30 = a3 - v14;
					result2 = v30;
					if (v18 == v27 || v18 > v27) {
						goto lab_0x3dd70_14;
					}
					goto lab_0x3dd24_11;
				}
			}
		} else {
			v16 = a3;
		}
	} else {
		// 0x3daf4
		v16 = a3;
		// branch -> 0x3dc40
	}
	// 0x3dc40
	v19 = result2 + 1;
	v20 = 40 * v19;
	v8 = v20;
	v17 = v3;
	v2 = a2 + v20 + v17;
	v15 = a4 + v20 + v17;
	v28 = v16 - v19;
	v13 = v28;
	v6 = 35;
	if (v19 <= v16 - 1) {
		// 0x3dc70
		v21 = __asm_rlwinm_(v28, 29, 3, 31);
		if (v21 == 0) {
			// 0x3dc70
			// branch -> 0x3dcd0
			// 0x3dcd0
			*(char *)v2 = (char)v6;
			v2 += 40;
			*(char *)v15 = (char)v6;
			v15 += 40;
			v24 = v13 - 1;
			// branch -> 0x3dcd4
			while (v24 != 0) {
				// 0x3dcd4
				*(char *)v2 = (char)v6;
				v2 += 40;
				*(char *)v15 = (char)v6;
				v15 += 40;
				v24--;
				// continue -> 0x3dcd4
			}
			// 0x3dce8
			v25 = a2 + 1;
			v2 = v25;
			v26 = a4 - 1;
			a2 = v26;
			v29 = v5 + v25;
			v12 = v29;
			v13 = v7 + v25;
			v6 = v3 + v25;
			result = result2;
			v14 = result + 1;
			a4 = 46;
			if (v25 > v26) {
				// 0x3dd88
				return result;
			}
			v5 = 35;
			while (true) {
				// 0x3dd0c
				*(char *)v29 = 35;
				v18 = v14;
				v27 = a3;
				v7 = v8 + v6;
				*(char *)v13 = (char)v5;
				v30 = a3 - v14;
				result2 = v30;
				if (v18 == v27 || v18 > v27) {
					goto lab_0x3dd70_14;
				}
				goto lab_0x3dd24_11;
			}
		} else {
			*(char *)v2 = (char)v6;
			*(char *)v15 = (char)v6;
			*(char *)(v2 + 40) = (char)v6;
			*(char *)(v15 + 40) = (char)v6;
			*(char *)(v2 + 80) = (char)v6;
			*(char *)(v15 + 80) = (char)v6;
			*(char *)(v2 + 120) = (char)v6;
			*(char *)(v15 + 120) = (char)v6;
			*(char *)(v2 + 160) = (char)v6;
			*(char *)(v15 + 160) = (char)v6;
			*(char *)(v2 + 200) = (char)v6;
			*(char *)(v15 + 200) = (char)v6;
			*(char *)(v2 + 240) = (char)v6;
			*(char *)(v15 + 240) = (char)v6;
			*(char *)(v2 + 280) = (char)v6;
			v2 += 320;
			*(char *)(v15 + 280) = (char)v6;
			v15 += 320;
			v22 = v21 - 1;
			while (v22 != 0) {
				// 0x3dc7c
				*(char *)v2 = (char)v6;
				*(char *)v15 = (char)v6;
				*(char *)(v2 + 40) = (char)v6;
				*(char *)(v15 + 40) = (char)v6;
				*(char *)(v2 + 80) = (char)v6;
				*(char *)(v15 + 80) = (char)v6;
				*(char *)(v2 + 120) = (char)v6;
				*(char *)(v15 + 120) = (char)v6;
				*(char *)(v2 + 160) = (char)v6;
				*(char *)(v15 + 160) = (char)v6;
				*(char *)(v2 + 200) = (char)v6;
				*(char *)(v15 + 200) = (char)v6;
				*(char *)(v2 + 240) = (char)v6;
				*(char *)(v15 + 240) = (char)v6;
				*(char *)(v2 + 280) = (char)v6;
				v2 += 320;
				*(char *)(v15 + 280) = (char)v6;
				v15 += 320;
				v22--;
				// continue -> 0x3dc7c
			}
			// 0x3dcc8
			v23 = v13 % 8;
			if (v23 != 0) {
				// 0x3dcd0
				*(char *)v2 = (char)v6;
				v2 += 40;
				*(char *)v15 = (char)v6;
				v15 += 40;
				v24 = v23 - 1;
				// branch -> 0x3dcd4
				while (v24 != 0) {
					// 0x3dcd4
					*(char *)v2 = (char)v6;
					v2 += 40;
					*(char *)v15 = (char)v6;
					v15 += 40;
					v24--;
					// continue -> 0x3dcd4
				}
				// 0x3dce8
				v25 = a2 + 1;
				v2 = v25;
				v26 = a4 - 1;
				a2 = v26;
				v29 = v5 + v25;
				v12 = v29;
				v13 = v7 + v25;
				v6 = v3 + v25;
				result = result2;
				v14 = result + 1;
				a4 = 46;
				if (v25 > v26) {
					// 0x3dd88
					return result;
				}
				v5 = 35;
				while (true) {
					// 0x3dd0c
					*(char *)v29 = 35;
					v18 = v14;
					v27 = a3;
					v7 = v8 + v6;
					*(char *)v13 = (char)v5;
					v30 = a3 - v14;
					result2 = v30;
					if (v18 == v27 || v18 > v27) {
						goto lab_0x3dd70_14;
					}
					goto lab_0x3dd24_11;
				}
			}
		}
		// 0x3dce8
		v25 = a2 + 1;
		v2 = v25;
		v26 = a4 - 1;
		a2 = v26;
		v29 = v5 + v25;
		v12 = v29;
		v13 = v7 + v25;
		v6 = v3 + v25;
		result = result2;
		v14 = result + 1;
		a4 = 46;
		if (v25 > v26) {
			// 0x3dd88
			return result;
		}
		v5 = 35;
		while (true) {
			// 0x3dd0c
			*(char *)v29 = 35;
			v18 = v14;
			v27 = a3;
			v7 = v8 + v6;
			*(char *)v13 = (char)v5;
			v30 = a3 - v14;
			result2 = v30;
			if (v18 == v27 || v18 > v27) {
				goto lab_0x3dd70_14;
			}
			goto lab_0x3dd24_11;
		}
	}
	// 0x3dce8
	v25 = a2 + 1;
	v2 = v25;
	v26 = a4 - 1;
	a2 = v26;
	v29 = v5 + v25;
	v12 = v29;
	v13 = v7 + v25;
	v6 = v3 + v25;
	result = result2;
	v14 = result + 1;
	a4 = 46;
	if (v25 > v26) {
		// 0x3dd88
		return result;
	}
	v5 = 35;
	while (true) {
		// 0x3dd0c
		*(char *)v29 = 35;
		v18 = v14;
		v27 = a3;
		v7 = v8 + v6;
		*(char *)v13 = (char)v5;
		v30 = a3 - v14;
		result2 = v30;
		if (v18 == v27 || v18 > v27) {
			goto lab_0x3dd70_14;
		}
		goto lab_0x3dd24_11;
	}
}

// Address range: 0x3de70 - 0x3df3c
int32_t AddHall(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = *(int32_t *)(g23 - 0x733c); // 0x3de78
	g36 = v1;
	g30 = a1;
	g31 = a2;
	g32 = a3;
	g33 = a4;
	g35 = a5;
	g34 = 24;
	int32_t v2 = DiabloAllocPtr(); // 0x3dea8
	int32_t result = v2;           // r3
	if (*(int32_t *)v1 == 0) {
		// 0x3dea4
		*(int32_t *)g36 = v2;
		*(int32_t *)*(int32_t *)g36 = g30;
		*(int32_t *)(*(int32_t *)g36 + 4) = g31;
		*(int32_t *)(*(int32_t *)g36 + 8) = g32;
		*(int32_t *)(*(int32_t *)g36 + 12) = g33;
		*(int32_t *)(*(int32_t *)g36 + 16) = g35;
		int32_t v3 = *(int32_t *)g36; // 0x3dedc
		result = v3;
		*(int32_t *)(v3 + 20) = 0;
		// branch -> 0x3df28
	} else {
		// 0x3dee8
		*(int32_t *)v2 = g30;
		*(int32_t *)(result + 4) = g31;
		*(int32_t *)(result + 8) = g32;
		*(int32_t *)(result + 12) = g33;
		*(int32_t *)(result + 16) = g35;
		*(int32_t *)(result + 20) = 0;
		int32_t *v4 = (int32_t *)(*(int32_t *)g36 + 20); // 0x3df18
		int32_t v5 = *v4;                                // 0x3df18
		// branch -> 0x3df18
		while (v5 != 0) {
			// 0x3df18
			v4 = (int32_t *)(v5 + 20);
			v5 = *v4;
			// continue -> 0x3df18
		}
		// 0x3df24
		*v4 = result;
		// branch -> 0x3df28
	}
	// 0x3df28
	return result;
}

// Address range: 0x3e464 - 0x3e4e8
int32_t GetHall(int32_t *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = *(int32_t *)(g23 - 0x733c); // 0x3e46c
	g36 = v1;
	int32_t v2 = *(int32_t *)v1; // 0x3e480
	g35 = *(int32_t *)(v2 + 20);
	*(int32_t *)(int32_t)a1 = *(int32_t *)v2;
	*(int32_t *)a2 = *(int32_t *)(*(int32_t *)g36 + 4);
	*(int32_t *)a3 = *(int32_t *)(*(int32_t *)g36 + 8);
	*(int32_t *)a4 = *(int32_t *)(*(int32_t *)g36 + 12);
	*(int32_t *)a5 = *(int32_t *)(*(int32_t *)g36 + 16);
	int32_t *v3 = (int32_t *)g36; // 0x3e4c0
	g34 = *v3;
	*v3 = 0;
	int32_t result = mem_free_dbg(); // r3
	*(int32_t *)g36 = g35;
	return result;
}

// Address range: 0x3e4e8 - 0x3e98c
int32_t ConnectHall(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g10; // 0x3e4ec
	g21 = a2;
	int32_t v2 = g23 - 0x1de8; // r27
	g32 = g23 - 0x1dfc;
	g33 = *(int32_t *)(g23 - 0x7330);
	int32_t v3 = 0; // r25
	g37 = 100;
	g35 = random(0);
	g37 = 100;
	g36 = random(0);
	int32_t v4 = a1;  // 0x3e53c
	int32_t v5 = g21; // 0x3e540
	g25 = v5;
	CreateDoorType(v4, v5);
	int32_t v6 = a3; // 0x3e550
	CreateDoorType(v6, a4);
	g34 = v6 - a1;
	abs();
	g34 = a4 - g21;
	abs();
	int32_t v7 = 4 * a5; // 0x3e56c
	g27 = a5;
	int32_t v8 = a3 - *(int32_t *)(g32 + v7); // 0x3e580
	a3 = v8;
	int32_t v9 = a4 - *(int32_t *)(v2 + v7); // 0x3e588
	g24 = v9;
	*(char *)(g33 + v9 + 40 * v8) = 44;
	g28 = 0;
	if (v3 != 0) {
		// 0x3e4e8
		// branch -> 0x3e978
		// 0x3e978
		g10 = v1;
		return 44;
	}
	int32_t v10 = a1;
	// branch -> 0x3e59c
	int32_t result; // 0x3e98812
	while (true) {
		// 0x3e59c
		if (v10 >= 38) {
			// 0x3e5a4
			if (g27 == 2) {
				// 0x3e5ac
				g27 = 4;
				// branch -> 0x3e5b0
			}
		}
		uint32_t v11 = g21; // 0x3e5b0
		if (v11 >= 38) {
			// 0x3e5b8
			if (g27 == 3) {
				// 0x3e5c0
				g27 = 1;
				// branch -> 0x3e5c4
			}
		}
		// 0x3e5c4
		if (v10 <= 1) {
			// 0x3e5cc
			if (g27 == 4) {
				// 0x3e5d4
				g27 = 2;
				// branch -> 0x3e5d8
			}
		}
		// 0x3e5d8
		if (v11 <= 1) {
			// 0x3e5e0
			if (g27 == 1) {
				// 0x3e5e8
				g27 = 3;
				// branch -> 0x3e5ec
			}
		}
		unsigned char v12 = *(char *)(g33 + v11 + 40 * v10); // 0x3e5f4
		if (v12 == 67) {
			int32_t v13 = g27; // 0x3e600
			if (v13 != 1) {
				// 0x3e608
				if (v13 != 4) {
				lab_0x3e614:
					// 0x3e614
					if (v12 == 66) {
					lab_0x3e61c:
						// 0x3e61c
						if (g27 <= 2) {
							// 0x3e628
							g27 = 3;
							// branch -> 0x3e62c
						}
					}
				lab_0x3e62c:;
					int32_t v14 = g27; // 0x3e634
					int32_t v15 = v14; // 0x3e64c
					if (v12 == 69) {
						// 0x3e634
						if (v14 <= 4) {
							// 0x3e640
							g27 = 1;
							v15 = 1;
							// branch -> 0x3e644
						} else {
							v15 = v14;
						}
					}
					int32_t v16 = v15; // 0x3e6b0
					if (v12 == 65) {
						// 0x3e64c
						if ((v15 & -2) == 2) {
							// 0x3e658
							g27 = 4;
							v16 = 4;
							// branch -> 0x3e65c
						} else {
							v16 = v15;
						}
					}
					int32_t v17 = 4 * v16;                       // 0x3e65c
					int32_t v18 = *(int32_t *)(g32 + v17) + v10; // 0x3e668
					a1 = v18;
					int32_t v19 = *(int32_t *)(v2 + v17) + v11; // 0x3e670
					g21 = v19;
					int32_t v20 = 40 * v18 + g33 + v19; // 0x3e678
					int32_t v21 = v20;                  // r26
					char v22 = *(char *)v20;            // 0x3e67c
					int32_t v23 = g28;                  // 0x3e688
					int32_t v24;                        // r16
					int32_t v25;                        // 0x3e754
					int32_t v26;                        // 0x3e75c
					if (v22 == 32) {
						// 0x3e688
						if (v23 == 0) {
							// 0x3e6a0
							if (g35 <= 49) {
								// 0x3e6a8
								if (v16 != 1) {
									// 0x3e6b0
									if (v16 != 3) {
										// 0x3e6c8
										PlaceHallExt(v18, v19 - 1);
										// branch -> 0x3e6d4
									lab_0x3e6d4:
										// 0x3e6d4
										if (g36 <= 49) {
										lab_0x3e6dc:;
											int32_t v27 = g27; // 0x3e6dc
											if (v27 != 1) {
												// 0x3e6e4
												if (v27 != 3) {
													// 0x3e6fc
													PlaceHallExt(a1, g21 + 1);
													// branch -> 0x3e708
												lab_0x3e708:
													// 0x3e708
													*(char *)v21 = 44;
													g28 = 0;
													// branch -> 0x3e744
												lab_0x3e744_4:
													// 0x3e744
													g34 = a3 - a1;
													g18 = abs();
													g34 = g24 - g21;
													v25 = abs();
													v24 = v25;
													v26 = g18;
													int32_t v28; // 0x3e7ec
													if (v26 > v25) {
													lab_0x3e764:;
														int32_t v29 = 2 * v26; // 0x3e764
														g37 = 100;
														int32_t v30 = random(0); // 0x3e780
														if (v30 < (v29 > 30 ? 30 : v29)) {
															int32_t v31 = a1; // 0x3e78c
															if (a3 > v31) {
																// 0x3e794
																if (v31 <= 39) {
																	// 0x3e79c
																	g27 = 2;
																	result = v30;
																	// branch -> 0x3e7ec
																lab_0x3e7ec_4:
																	// 0x3e7ec
																	v28 = v24;
																	int32_t v32; // 0x3e828
																	if (v28 <= 9) {
																	lab_0x3e7f4:
																		// 0x3e7f4
																		if (a1 == a3) {
																			int32_t v33 = g27; // 0x3e7fc
																			if (v33 != 2) {
																				// 0x3e804
																				if (v33 != 4) {
																				lab_0x3e828_2:
																					// 0x3e828
																					v32 = g18;
																					if (v32 <= 9) {
																					lab_0x3e830:
																						// 0x3e830
																						if (g21 == g24) {
																							int32_t v34 = g27; // 0x3e838
																							if (v34 != 1) {
																								// 0x3e840
																								if (v34 != 3) {
																								lab_0x3e864_2:
																									// 0x3e864
																									if (v28 == 1) {
																									lab_0x3e86c:
																										// 0x3e86c
																										if (v32 >= 2) {
																											int32_t v35 = g27; // 0x3e874
																											if (v35 != 1) {
																												// 0x3e87c
																												if (v35 != 3) {
																												lab_0x3e8a0_2:
																													// 0x3e8a0
																													if (v32 == 1) {
																													lab_0x3e8a8:
																														// 0x3e8a8
																														if (v28 >= 2) {
																															int32_t v36 = g27; // 0x3e8b0
																															if (v36 != 2) {
																																// 0x3e8b8
																																if (v36 != 4) {
																																lab_0x3e8dc_2:
																																	// 0x3e8dc
																																	if (v32 == 0) {
																																	lab_0x3e8e4:
																																		// 0x3e8e4
																																		if (*(char *)v21 != 32) {
																																			int32_t v37 = g27; // 0x3e8f0
																																			if (v37 != 2) {
																																				// 0x3e8f8
																																				if (v37 != 4) {
																																				lab_0x3e91c_2:;
																																					// 0x3e91c
																																					int32_t v38; // 0x3e95c
																																					if (v28 == 0) {
																																					lab_0x3e924:
																																						// 0x3e924
																																						if (*(char *)v21 != 32) {
																																							int32_t v39 = g27; // 0x3e930
																																							if (v39 != 1) {
																																								// 0x3e938
																																								if (v39 != 3) {
																																								lab_0x3e95c_2:
																																									// 0x3e95c
																																									v38 = a1;
																																									if (v38 == a3) {
																																									lab_0x3e964:
																																										// 0x3e964
																																										if (g21 == g24) {
																																											// 0x3e970
																																											// branch -> 0x3e978
																																											// 0x3e978
																																											g10 = v1;
																																											return result;
																																										}
																																									}
																																								lab_0x3e970:
																																									// 0x3e970
																																									if (v3 != 0) {
																																										// break -> 0x3e978
																																										break;
																																									}
																																									v10 = v38;
																																									// continue -> 0x3e59c
																																									continue;
																																								}
																																							}
																																							// 0x3e940
																																							if (g24 > g25) {
																																								// 0x3e948
																																								if (g21 <= 39) {
																																									// 0x3e950
																																									g27 = 2;
																																									// branch -> 0x3e95c
																																									goto lab_0x3e95c_2;
																																								}
																																							}
																																							// 0x3e958
																																							g27 = 4;
																																							// branch -> 0x3e95c
																																							goto lab_0x3e95c_2;
																																						}
																																					}
																																				lab_0x3e95c_3:
																																					// 0x3e95c
																																					v38 = a1;
																																					if (v38 == a3) {
																																						goto lab_0x3e964;
																																					}
																																					goto lab_0x3e970;
																																				}
																																			}
																																			// 0x3e900
																																			if (a3 > v4) {
																																				// 0x3e908
																																				if (a1 <= 39) {
																																					// 0x3e910
																																					g27 = 3;
																																					// branch -> 0x3e91c
																																					goto lab_0x3e91c_2;
																																				}
																																			}
																																			// 0x3e918
																																			g27 = 1;
																																			// branch -> 0x3e91c
																																			goto lab_0x3e91c_2;
																																		}
																																	}
																																lab_0x3e91c_3:
																																	// 0x3e91c
																																	if (v28 == 0) {
																																		goto lab_0x3e924;
																																	}
																																	goto lab_0x3e95c_3;
																																}
																															}
																															// 0x3e8c0
																															if (g24 > g21) {
																																// 0x3e8c8
																																if (a1 <= 39) {
																																	// 0x3e8d0
																																	g27 = 3;
																																	// branch -> 0x3e8dc
																																	goto lab_0x3e8dc_2;
																																}
																															}
																															// 0x3e8d8
																															g27 = 1;
																															// branch -> 0x3e8dc
																															goto lab_0x3e8dc_2;
																														}
																													}
																												lab_0x3e8dc_3:
																													// 0x3e8dc
																													if (v32 == 0) {
																														goto lab_0x3e8e4;
																													}
																													goto lab_0x3e91c_3;
																												}
																											}
																											int32_t v40 = a1; // 0x3e884
																											if (a3 > v40) {
																												// 0x3e88c
																												if (v40 <= 39) {
																													// 0x3e894
																													g27 = 2;
																													// branch -> 0x3e8a0
																													goto lab_0x3e8a0_2;
																												}
																											}
																											// 0x3e89c
																											g27 = 4;
																											// branch -> 0x3e8a0
																											goto lab_0x3e8a0_2;
																										}
																									}
																								lab_0x3e8a0_3:
																									// 0x3e8a0
																									if (v32 == 1) {
																										goto lab_0x3e8a8;
																									}
																									goto lab_0x3e8dc_3;
																								}
																							}
																							int32_t v41 = a1; // 0x3e848
																							if (a3 > v41) {
																								// 0x3e850
																								if (v41 <= 39) {
																									// 0x3e858
																									g27 = 2;
																									// branch -> 0x3e864
																									goto lab_0x3e864_2;
																								}
																							}
																							// 0x3e860
																							g27 = 4;
																							// branch -> 0x3e864
																							goto lab_0x3e864_2;
																						}
																					}
																				lab_0x3e864_3:
																					// 0x3e864
																					if (v28 == 1) {
																						goto lab_0x3e86c;
																					}
																					goto lab_0x3e8a0_3;
																				}
																			}
																			int32_t v42 = g21; // 0x3e80c
																			if (g24 > v42) {
																				// 0x3e814
																				if (v42 <= 39) {
																					// 0x3e81c
																					g27 = 3;
																					// branch -> 0x3e828
																					goto lab_0x3e828_2;
																				}
																			}
																			// 0x3e824
																			g27 = 1;
																			// branch -> 0x3e828
																			goto lab_0x3e828_2;
																		}
																	}
																lab_0x3e828_3:
																	// 0x3e828
																	v32 = g18;
																	if (v32 > 9) {
																		goto lab_0x3e864_3;
																	}
																	goto lab_0x3e830;
																}
															}
															// 0x3e7a4
															g27 = 4;
															result = v30;
															// branch -> 0x3e7ec
															goto lab_0x3e7ec_4;
														} else {
															result = v30;
														}
													} else {
													lab_0x3e7ac:;
														int32_t v43 = 5 * v25; // 0x3e7ac
														int32_t v44 = v43;
														if (v43 >= 81) {
															// 0x3e7b8
															v44 = 80;
															// branch -> 0x3e7bc
														}
														// 0x3e7bc
														g37 = 100;
														int32_t v45 = random(0); // 0x3e7c4
														if (v45 >= v44) {
															result = v45;
															goto lab_0x3e7ec_4;
														}
														int32_t v46 = g21; // 0x3e7d0
														if (g24 > v46) {
															// 0x3e7d8
															if (v46 <= 39) {
																// 0x3e7e0
																g27 = 3;
																result = v45;
																// branch -> 0x3e7ec
																goto lab_0x3e7ec_4;
															}
														}
														// 0x3e7e8
														g27 = 1;
														result = v45;
														// branch -> 0x3e7ec
														goto lab_0x3e7ec_4;
													}
													// 0x3e7ec
													v28 = v24;
													if (v28 > 9) {
														goto lab_0x3e828_3;
													}
													goto lab_0x3e7f4;
												}
											}
											// 0x3e6ec
											PlaceHallExt(a1 + 1, g21);
											// branch -> 0x3e708
											goto lab_0x3e708;
										}
									lab_0x3e708_3:
										// 0x3e708
										*(char *)v21 = 44;
										g28 = 0;
										// branch -> 0x3e744
										goto lab_0x3e744_4;
									}
								}
								// 0x3e6b8
								PlaceHallExt(v18 - 1, v19);
								// branch -> 0x3e6d4
								goto lab_0x3e6d4;
							}
							// 0x3e6d4
							if (g36 > 49) {
								goto lab_0x3e708_3;
							}
							goto lab_0x3e6dc;
						} else {
							// 0x3e690
							CreateDoorType(v10, v11);
							// branch -> 0x3e708
							goto lab_0x3e708_3;
						}
						int32_t v47 = v21; // 0x3e70c
						*(char *)v47 = 44;
						g28 = 0;
						// branch -> 0x3e744
						goto lab_0x3e744_4;
					} else {
						int32_t v48 = v20; // 0x3e734
						if (v23 == 0) {
							// 0x3e720
							if (v22 == 35) {
								// 0x3e728
								CreateDoorType(v18, v19);
								v48 = v21;
								// branch -> 0x3e734
							} else {
								v48 = v20;
							}
						}
						// 0x3e734
						if (*(char *)v48 == 44) {
							goto lab_0x3e744_4;
						}
						// 0x3e740
						g28 = 1;
						// branch -> 0x3e744
						goto lab_0x3e744_4;
					}
					int32_t v49 = a1; // 0x3e744
					int32_t v50 = a3; // 0x3e744
					g34 = v50 - v49;
					g18 = abs();
					int32_t v51 = g21; // 0x3e750
					int32_t v52 = g24; // 0x3e750
					g34 = v52 - v51;
					v25 = abs();
					v24 = v25;
					v26 = g18;
					if (v26 > v25) {
						goto lab_0x3e764;
					}
					goto lab_0x3e7ac;
				}
			}
			// 0x3e610
			g27 = 2;
			// branch -> 0x3e614
			goto lab_0x3e614;
		}
		// 0x3e614
		if (v12 == 66) {
			goto lab_0x3e61c;
		}
		goto lab_0x3e62c;
	}
	// 0x3e978
	g10 = v1;
	return result;
}

// Address range: 0x3dd98 - 0x3de48
int32_t CreateDoorType(int32_t a1, int32_t a2)
{
	int32_t v1 = 40 * a1;                    // 0x3dd98
	int32_t v2 = *(int32_t *)(g23 - 0x7330); // 0x3dd9c
	int32_t v3 = v2 + v1 + a2;               // 0x3dda4
	int32_t v4 = 0;
	if (*(char *)(v3 - 40) == 68) {
		// 0x3ddb8
		v4 = 1;
		// branch -> 0x3ddbc
	}
	if (*(char *)(v3 + 40) == 68) {
		// 0x3ddd0
		v4 = 1;
		// branch -> 0x3ddd4
	}
	if (*(char *)(v3 - 1) == 68) {
		// 0x3dde8
		v4 = 1;
		// branch -> 0x3ddec
	}
	if (*(char *)(v3 + 1) == 68) {
		// 0x3de00
		v4 = 1;
		// branch -> 0x3de04
	}
	int32_t result = v1 + a2 + v2; // 0x3de08
	char *v5 = (char *)result;     // 0x3de0c
	char v6 = *v5;                 // 0x3de0c
	if (v6 == 66 || v6 == 67 || v6 == 65) {
		// 0x3de30
		// branch -> 0x3de34
		// bb
		return result;
		// 0x3de3c
		*v5 = 68;
		return result;
	}
	// 0x3de28
	if (v6 != 69) {
		// 0x3de34
		if (v4 != 0) {
			// bb
			return result;
		}
		// 0x3de3c
		*v5 = 68;
		return result;
	}
	// 0x3de30
	// branch -> 0x3de34
	// bb
	return result;
	// 0x3de3c
	*v5 = 68;
	return result;
}

// Address range: 0x3de48 - 0x3de70
int32_t PlaceHallExt(int32_t a1, int32_t a2)
{
	int32_t result = *(int32_t *)(g23 - 0x7330); // 0x3de4c
	char *v1 = (char *)(40 * a1 + a2 + result);  // 0x3de58
	if (*v1 != 32) {
		// bb
		return result;
	}
	// 0x3de64
	*v1 = 44;
	return result;
}

// Address range: 0x3e98c - 0x3eb78
int32_t DoPatternCheck(int32_t result, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x3e990
	int32_t v2 = g36;                        // 0x3e994
	int32_t v3 = g23 - 0x15d8;               // 0x3e9a0
	if (*(int32_t *)(g23 - 0x15c8) == 255) {
		// 0x3eb70
		g36 = v2;
		return result;
	}
	int32_t result2 = result; // 0x3ea24
	while (true) {
		int32_t v4 = result2 - 1; // 0x3e9b0
		int32_t v5 = v3;          // 0x3eb38
		int32_t v6 = a2 - 1;      // 0x3e9d8
		int32_t v7 = v4;
		int32_t v8 = 0;   // 0x3eb3c
		int32_t v9 = 254; // 0x3eb48
		// branch -> 0x3eb48
		int32_t v10; // 0x3eb4815
		int32_t v11; // 0x3eb60
		int32_t result3;
		while (true) {
			// 0x3eb48
			if (v9 == 254) {
				int32_t v12 = v6; // 0x3e9f8
				int32_t v13 = v7; // 0x3eb34
				switch (v8) {
				case 3: {
					// 0x3e9d8
					// branch -> 0x3e9e0
					v12 = v6 + 1;
					v13 = v4;
				}
				default: {
				lab_0x3e9e0:
					// 0x3e9e0
					if (v12 < 40 == v13 < 40) {
						uint32_t v14 = *(int32_t *)v5; // 0x3ea08
						if (v14 <= 8) {
							// 0x3ea14
							g36 = *(int32_t *)(g23 - 1592 + 4 * v14);
							return result2;
						}
						v10 = 255;
					} else {
						// 0x3ea00
						v10 = 254;
						// branch -> 0x3eb34
					}
					// 0x3eb34
					if (v8 > 7) {
						// break (via goto) -> 0x3eb50
						goto lab_0x3eb50;
					}
					v5 += 4;
					v6 = v12;
					v7 = v13 + 1;
					v8++;
					v9 = v10;
					// continue -> 0x3eb48
					continue;
				}
				case 6: {
					// 0x3e9d8
					v12 = v6 + 1;
					v13 = v4;
					// branch -> 0x3e9e0
					goto lab_0x3e9e0;
				}
				}
			} else {
				// 0x3eb50
				result3 = result2;
				v11 = v3;
				// branch -> 0x3eb60
			lab_0x3eb60_2:
				// 0x3eb60
				if (*(int32_t *)(v11 + 56) == 255) {
					// 0x3eb70
					g36 = v2;
					return result3;
				}
				// 0x3eb60
				result2 = result3;
				v3 = v11 + 40;
				// branch -> 0x3e9ac
				break;
			}
		}
	lab_0x3eb50:
		// 0x3eb50
		if (v10 != 254) {
			result3 = result2;
			v11 = v3;
			goto lab_0x3eb60_2;
		}
		int32_t v15 = *(int32_t *)(v3 + 36); // 0x3eb58
		*(char *)(v1 + 40 * result + a2) = (char)v15;
		result3 = result;
		v11 = v3;
		// branch -> 0x3eb60
		goto lab_0x3eb60_2;
	}
}

// Address range: 0x3f18c - 0x3f938
int32_t DL2_FillVoids(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x3f18c
	g36 = *(int32_t *)(g23 - 0x7330);
	g26 = 0;
	if (DL2_NumNoChar() < 701) {
		// 0x3f90c
		return DL2_NumNoChar() < 701;
	}
lab_0x3f904:
	while (true) {
		// 0x3f904
		if (g26 < 100) {
			// 0x3f1a8
			g37 = 38;
			g35 = random(0) + 1;
			g37 = 38;
			int32_t v1 = random(0) + 1; // 0x3f1c8
			g33 = v1;
			int32_t v2 = 40 * g35 + v1 + g36; // 0x3f1d0
			if (*(char *)v2 == 35) {
				char v3 = *(char *)(v2 - 40); // 0x3f1e0
				g27 = 0;
				g28 = 0;
				int32_t v4 = 0;               // r25
				int32_t v5 = 0;               // r26
				char *v6 = (char *)(v2 + 40); // 0x3f1fc
				int32_t v7;                   // 0x3f344
				int32_t v8;                   // 0x3f348
				int32_t v9;                   // 0x3f34c
				int32_t v10;                  // 0x3f350
				if (v3 == 32) {
					// 0x3f1fc
					if (*v6 == 46) {
						// 0x3f208
						v10 = 0;
						v9 = 0;
						v8 = 0;
						v7 = 0;
						if (*(char *)(v2 + 39) == 46) {
							// 0x3f214
							if (*(char *)(v2 + 41) == 46) {
								// 0x3f220
								if (*(char *)(v2 - 41) == 32) {
									// 0x3f22c
									if (*(char *)(v2 - 39) == 32) {
										// 0x3f238
										g27 = 1;
										g28 = 1;
										v5 = 1;
										v10 = 1;
										v9 = 0;
										v8 = 1;
										v7 = 1;
										// branch -> 0x3f344
									} else {
										v10 = 0;
										v9 = 0;
										v8 = 0;
										v7 = 0;
									}
								} else {
									v10 = 0;
									v9 = 0;
									v8 = 0;
									v7 = 0;
								}
							} else {
								v10 = 0;
								v9 = 0;
								v8 = 0;
								v7 = 0;
							}
						}
					lab_0x3f344_17:
						// 0x3f344
						if (DL2_Cont(v7, v8, v9, v10) != 0) {
							int32_t v11 = v5;  // 0x3f360
							int32_t v12 = g35; // 0x3f370
							int32_t v13 = (int32_t)(v11 != 0) + v12;
							g32 = v13;
							int32_t v14 = v4;  // 0x3f374
							int32_t v15 = v12; // 0x3f4b827
							if (v14 != 0) {
								int32_t v16 = v12 + 1; // 0x3f37c
								g35 = v16;
								v15 = v16;
								// branch -> 0x3f380
							}
							int32_t v17 = g28; // 0x3f380
							int32_t v18 = g33; // 0x3f390
							int32_t v19 = (int32_t)(v17 != 0) + v18;
							int32_t v20 = v19; // r27
							int32_t v21 = g27; // 0x3f394
							int32_t v22 = v18; // 0x3f3b4
							if (v21 != 0) {
								int32_t v23 = v18 + 1; // 0x3f39c
								g33 = v23;
								v22 = v23;
								// branch -> 0x3f3a0
							}
							// 0x3f3a0
							int32_t v24; // 0x3f8f4
							if (v11 == 0) {
								int32_t v25 = g36 + 40 * v15; // 0x3f3ac
								int32_t v26 = v25 + v22;      // 0x3f400
								int32_t v27 = v25 + v19;      // 0x3f3f0
								int32_t v28 = v22;            // 0x3f4d4
								int32_t v29 = v19;            // 0x3f4cc
								int32_t v30 = v21;            // 0x3f430
								int32_t v31 = v17;            // 0x3f428
								// branch -> 0x3f428
								int32_t v32; // 0x3f3bc139
								int32_t v33; // 0x3f3c8141
								int32_t v34;
								int32_t v35; // 0x3f408
								int32_t v36; // 0x3f418
								while (true) {
								lab_0x3f428:
									// 0x3f428
									if (v31 == 0) {
										// 0x3f430
										if (v30 == 0) {
											uint32_t v37 = v29 + 2; // 0x3f438
											uint32_t v38 = v28 - 2; // 0x3f43c
											if (v38 - v37 >= 6) {
												int32_t v39 = v15;
												int32_t v40; // 0x3f4b8
												if (v14 != 0) {
													int32_t v41 = v28 - 1 + -2 - v29; // 0x3f474
													int32_t v42 = v14;                // 0x3f4a0162
													int32_t v43 = v15;                // 0x3f4ac
													// branch -> 0x3f450
													while (true) {
														int32_t v44 = v42; // 0x3f4a0161
														if (v43 == 39) {
															// 0x3f458
															v44 = 0;
															// branch -> 0x3f45c
														}
														if (v43 - v13 >= 12) {
															// 0x3f468
															v44 = 0;
															// branch -> 0x3f46c
														}
														int32_t v45 = v37 + v25; // 0x3f480
														if (v38 >= v37) {
															while (true) {
																int32_t v46 = v44; // 0x3f4a0157
																if (*(char *)v45 != 32) {
																	// 0x3f494
																	v46 = 0;
																	// branch -> 0x3f498
																}
																int32_t v47 = v45 + 1; // 0x3f498
																int32_t v48 = v41 - 1; // 0x3f49c
																if (v48 == 0) {
																	v44 = v46;
																	// break -> 0x3f4a0
																	break;
																}
																v44 = v46;
																v41 = v48;
																v45 = v47;
																// continue -> 0x3f488
															}
															// 0x3f4a0
															if (v44 == 0) {
															lab_0x3f4b0:
																// 0x3f4b0
																// branch -> 0x3f4b8
																// 0x3f4b8
																v40 = v43 - 2;
																g27 = v40;
																if (v40 - v13 >= 6) {
																lab_0x3f4c8:
																	// 0x3f4c8
																	DL2_DrawRoom(v13, v37, v40, v38);
																	DL2_KnockWalls(g32, v20 + 2, g27, g33 - 2);
																	// branch -> 0x3f8f4
																}
															lab_0x3f8f4:
																// 0x3f8f4
																g26++;
																// branch -> 0x3f8f8
															lab_0x3f8f8_5:
																// 0x3f8f8
																if (DL2_NumNoChar() < 701) {
																	// break (via goto) -> 0x3f90c
																	goto lab_0x3f90c;
																}
																// continue (via goto) -> 0x3f904
																goto lab_0x3f904;
															} else {
															lab_0x3f4b0_2:;
																int32_t v49 = v43 + 1; // 0x3f4ac
																g35 = v49;
																v42 = v44;
																v25 += 40;
																v43 = v49;
																// branch -> 0x3f450
																continue;
															}
														}
														// 0x3f4a0
														if (v44 == 0) {
															goto lab_0x3f4b0;
														}
														goto lab_0x3f4b0_2;
													}
													// 0x3f90c
													return DL2_NumNoChar() < 701;
												}
												// 0x3f4b8
												v40 = v39 - 2;
												g27 = v40;
												if (v40 - v13 < 6) {
													goto lab_0x3f8f4;
												}
												goto lab_0x3f4c8;
											}
										lab_0x3f8f4_12:
											// 0x3f8f4
											g26++;
											// branch -> 0x3f8f8
											goto lab_0x3f8f8_5;
										}
									}
									// 0x3f3bc
									v34 = v31;
									if (v29 == 0) {
										// 0x3f3c4
										v34 = 0;
										// branch -> 0x3f3c8
									}
									int32_t v50 = v30; // 0x3f3f8145
									if (v28 == 39) {
										// 0x3f3d0
										v50 = 0;
										// branch -> 0x3f3d4
									}
									if (v28 - v29 >= 14) {
										// 0x3f3e0
										v50 = 0;
										v34 = 0;
										// branch -> 0x3f3e8
									}
									// 0x3f3e8
									v35 = v27;
									v32 = v29;
									if (v34 != 0) {
										int32_t v51 = v29 - 1; // 0x3f3f4
										v20 = v51;
										v35 = v27 - 1;
										v32 = v51;
										// branch -> 0x3f3f8
									}
									// 0x3f3f8
									v36 = v26;
									v33 = v28;
									if (v50 != 0) {
										int32_t v52 = v28 + 1; // 0x3f404
										g33 = v52;
										v36 = v26 + 1;
										v33 = v52;
										// branch -> 0x3f408
									}
									if (*(char *)v35 != 32) {
										// 0x3f414
										v34 = 0;
										// branch -> 0x3f418
									}
									// 0x3f418
									if (*(char *)v36 != 32) {
										// break -> 0x3f424
										break;
									}
									v26 = v36;
									v27 = v35;
									v28 = v33;
									v29 = v32;
									v30 = v50;
									v31 = v34;
									// continue -> 0x3f428
								}
								// 0x3f424
								v26 = v36;
								v27 = v35;
								v28 = v33;
								v29 = v32;
								v30 = 0;
								v31 = v34;
								// branch -> 0x3f428
								goto lab_0x3f428;
							} else {
								// 0x3f4f4
								if (v14 == 0) {
									int32_t v53 = g36 + 40 * v13; // 0x3f500
									int32_t v54 = v53 + v22;      // 0x3f554
									int32_t v55 = v53 + v19;      // 0x3f544
									int32_t v56 = v22;            // 0x3f628
									int32_t v57 = v19;            // 0x3f620
									int32_t v58 = v21;            // 0x3f584
									int32_t v59 = v17;            // 0x3f57c
									// branch -> 0x3f57c
									int32_t v60; // 0x3f510109
									int32_t v61; // 0x3f51c111
									int32_t v62;
									int32_t v63; // 0x3f55c
									int32_t v64; // 0x3f56c
									while (true) {
									lab_0x3f57c:
										// 0x3f57c
										if (v59 == 0) {
											// 0x3f584
											if (v58 == 0) {
												uint32_t v65 = v57 + 2; // 0x3f58c
												uint32_t v66 = v56 - 2; // 0x3f590
												if (v66 - v65 < 6) {
													goto lab_0x3f8f4_12;
												}
												int32_t v67 = v56 - 1 + -2 - v57; // 0x3f5c8
												int32_t v68 = v13;                // 0x3f600
												// branch -> 0x3f5a4
												while (true) {
													int32_t v69 = v11; // 0x3f5f4131
													if (v68 == 0) {
														// 0x3f5ac
														v69 = 0;
														// branch -> 0x3f5b0
													}
													if (v15 - v68 >= 12) {
														// 0x3f5bc
														v69 = 0;
														// branch -> 0x3f5c0
													}
													int32_t v70 = v65 + v53; // 0x3f5d4
													if (v66 >= v65) {
														while (true) {
															int32_t v71 = v69; // 0x3f5f4127
															if (*(char *)v70 != 32) {
																// 0x3f5e8
																v71 = 0;
																// branch -> 0x3f5ec
															}
															int32_t v72 = v70 + 1; // 0x3f5ec
															int32_t v73 = v67 - 1; // 0x3f5f0
															if (v73 == 0) {
																v69 = v71;
																// break -> 0x3f5f4
																break;
															}
															v69 = v71;
															v67 = v73;
															v70 = v72;
															// continue -> 0x3f5dc
														}
														// 0x3f5f4
														if (v69 == 0) {
														lab_0x3f60c:;
															int32_t v74 = v68 + 2; // 0x3f60c
															g27 = v74;
															if (v15 - v74 < 6) {
																goto lab_0x3f8f4_12;
															}
															// 0x3f61c
															DL2_DrawRoom(v74, v65, v15, v66);
															DL2_KnockWalls(g27, v20 + 2, g35, g33 - 2);
															// branch -> 0x3f8f4
															goto lab_0x3f8f4_12;
														} else {
														lab_0x3f604:;
															int32_t v75 = v68 - 1; // 0x3f600
															g32 = v75;
															v11 = v69;
															v53 -= 40;
															v68 = v75;
															// branch -> 0x3f5a4
															continue;
														}
													}
													// 0x3f5f4
													if (v69 == 0) {
														goto lab_0x3f60c;
													}
													goto lab_0x3f604;
												}
											}
										}
										// 0x3f510
										v62 = v59;
										if (v57 == 0) {
											// 0x3f518
											v62 = 0;
											// branch -> 0x3f51c
										}
										int32_t v76 = v58; // 0x3f54c115
										if (v56 == 39) {
											// 0x3f524
											v76 = 0;
											// branch -> 0x3f528
										}
										if (v56 - v57 >= 14) {
											// 0x3f534
											v76 = 0;
											v62 = 0;
											// branch -> 0x3f53c
										}
										// 0x3f53c
										v63 = v55;
										v60 = v57;
										if (v62 != 0) {
											int32_t v77 = v57 - 1; // 0x3f548
											v20 = v77;
											v63 = v55 - 1;
											v60 = v77;
											// branch -> 0x3f54c
										}
										// 0x3f54c
										v64 = v54;
										v61 = v56;
										if (v76 != 0) {
											int32_t v78 = v56 + 1; // 0x3f558
											g33 = v78;
											v64 = v54 + 1;
											v61 = v78;
											// branch -> 0x3f55c
										}
										if (*(char *)v63 != 32) {
											// 0x3f568
											v62 = 0;
											// branch -> 0x3f56c
										}
										// 0x3f56c
										if (*(char *)v64 != 32) {
											// break -> 0x3f578
											break;
										}
										v54 = v64;
										v55 = v63;
										v56 = v61;
										v57 = v60;
										v58 = v76;
										v59 = v62;
										// continue -> 0x3f57c
									}
									// 0x3f578
									v54 = v64;
									v55 = v63;
									v56 = v61;
									v57 = v60;
									v58 = 0;
									v59 = v62;
									// branch -> 0x3f57c
									goto lab_0x3f57c;
								} else {
									// 0x3f648
									if (v17 == 0) {
										int32_t v79 = g36 + v22;      // 0x3f654
										int32_t v80 = v79 + 40 * v15; // 0x3f6ac
										int32_t v81 = v79 + 40 * v13; // 0x3f69c
										int32_t v82 = v15;            // 0x3f780
										int32_t v83 = v13;            // 0x3f778
										// branch -> 0x3f6d4
										int32_t v84; // 0x3f66879
										int32_t v85; // 0x3f67481
										int32_t v86;
										int32_t v87; // 0x3f6b4
										int32_t v88; // 0x3f6c4
										while (true) {
										lab_0x3f6d4:
											// 0x3f6d4
											if (v11 == 0) {
												// 0x3f6dc
												if (v14 == 0) {
													uint32_t v89 = v83 + 2; // 0x3f6e4
													uint32_t v90 = v82 - 2; // 0x3f6e8
													if (v90 - v89 < 6) {
														goto lab_0x3f8f4_12;
													}
													int32_t v91 = 40 * v89; // 0x3f6f8
													int32_t v92 = v22;
													int32_t v93; // 0x3f764
													if (v21 != 0) {
														int32_t v94 = v82 - 1 + -2 - v83; // 0x3f724
														int32_t v95 = v21;                // 0x3f74c102
														int32_t v96 = v22;                // 0x3f758
														// branch -> 0x3f700
														while (true) {
															int32_t v97 = v95; // 0x3f74c101
															if (v96 == 39) {
																// 0x3f708
																v97 = 0;
																// branch -> 0x3f70c
															}
															if (v96 - v19 >= 12) {
																// 0x3f718
																v97 = 0;
																// branch -> 0x3f71c
															}
															int32_t v98 = v79 + v91; // 0x3f728
															if (v90 >= v89) {
																while (true) {
																	int32_t v99 = v97; // 0x3f74c97
																	if (*(char *)v98 != 32) {
																		// 0x3f740
																		v99 = 0;
																		// branch -> 0x3f744
																	}
																	int32_t v100 = v98 + 40; // 0x3f744
																	int32_t v101 = v94 - 1;  // 0x3f748
																	if (v101 == 0) {
																		v97 = v99;
																		// break -> 0x3f74c
																		break;
																	}
																	v97 = v99;
																	v94 = v101;
																	v98 = v100;
																	// continue -> 0x3f734
																}
																// 0x3f74c
																if (v97 == 0) {
																lab_0x3f75c:
																	// 0x3f75c
																	// branch -> 0x3f764
																	// 0x3f764
																	v93 = v96 - 2;
																	g27 = v93;
																	if (v93 - v19 < 6) {
																		goto lab_0x3f8f4_12;
																	}
																lab_0x3f774:
																	// 0x3f774
																	DL2_DrawRoom(v89, v19, v90, v93);
																	DL2_KnockWalls(g32 + 2, v20, g35 - 2, g27);
																	// branch -> 0x3f8f4
																	goto lab_0x3f8f4_12;
																} else {
																lab_0x3f75c_2:;
																	int32_t v102 = v96 + 1; // 0x3f758
																	g33 = v102;
																	v95 = v97;
																	v79++;
																	v96 = v102;
																	// branch -> 0x3f700
																	continue;
																}
															}
															// 0x3f74c
															if (v97 == 0) {
																goto lab_0x3f75c;
															}
															goto lab_0x3f75c_2;
														}
													}
													// 0x3f764
													v93 = v92 - 2;
													g27 = v93;
													if (v93 - v19 < 6) {
														goto lab_0x3f8f4_12;
													}
													goto lab_0x3f774;
												}
											}
											// 0x3f668
											v86 = v11;
											if (v83 == 0) {
												// 0x3f670
												v86 = 0;
												// branch -> 0x3f674
											}
											int32_t v103 = v14; // 0x3f6a485
											if (v82 == 39) {
												// 0x3f67c
												v103 = 0;
												// branch -> 0x3f680
											}
											if (v82 - v83 >= 14) {
												// 0x3f68c
												v103 = 0;
												v86 = 0;
												// branch -> 0x3f694
											}
											// 0x3f694
											v87 = v81;
											v84 = v83;
											if (v86 != 0) {
												int32_t v104 = v83 - 1; // 0x3f6a0
												g32 = v104;
												v87 = v81 - 40;
												v84 = v104;
												// branch -> 0x3f6a4
											}
											// 0x3f6a4
											v88 = v80;
											v85 = v82;
											if (v103 != 0) {
												int32_t v105 = v82 + 1; // 0x3f6b0
												g35 = v105;
												v88 = v80 + 40;
												v85 = v105;
												// branch -> 0x3f6b4
											}
											if (*(char *)v87 != 32) {
												// 0x3f6c0
												v86 = 0;
												// branch -> 0x3f6c4
											}
											// 0x3f6c4
											if (*(char *)v88 != 32) {
												// break -> 0x3f6d0
												break;
											}
											v80 = v88;
											v81 = v87;
											v82 = v85;
											v83 = v84;
											v14 = v103;
											v11 = v86;
											// continue -> 0x3f6d4
										}
										// 0x3f6d0
										v80 = v88;
										v81 = v87;
										v82 = v85;
										v83 = v84;
										v14 = 0;
										v11 = v86;
										// branch -> 0x3f6d4
										goto lab_0x3f6d4;
									} else {
										// 0x3f7a0
										if (v21 != 0) {
											goto lab_0x3f8f4_12;
										}
										int32_t v106 = g36 + v19;       // 0x3f7ac
										int32_t v107 = v106 + 40 * v15; // 0x3f804
										int32_t v108 = v106 + 40 * v13; // 0x3f7f4
										// branch -> 0x3f82c
										int32_t v109; // 0x3f7c048
										int32_t v110; // 0x3f7cc50
										int32_t v111;
										int32_t v112; // 0x3f80c
										int32_t v113; // 0x3f81c
										while (true) {
										lab_0x3f82c:
											// 0x3f82c
											if (v11 == 0) {
												// 0x3f834
												if (v14 == 0) {
													uint32_t v114 = v13 + 2; // 0x3f83c
													uint32_t v115 = v15 - 2; // 0x3f840
													if (v115 - v114 < 6) {
														goto lab_0x3f8f4_12;
													}
													int32_t v116 = v15 - 1 + -2 - v13; // 0x3f87c
													// branch -> 0x3f858
													while (true) {
														int32_t v117 = v17; // 0x3f8a471
														if (v19 == 0) {
															// 0x3f860
															v117 = 0;
															// branch -> 0x3f864
														}
														if (v22 - v19 >= 12) {
															// 0x3f870
															v117 = 0;
															// branch -> 0x3f874
														}
														int32_t v118 = v106 + 40 * v114; // 0x3f880
														if (v115 >= v114) {
															while (true) {
																int32_t v119 = v117; // 0x3f8a467
																if (*(char *)v118 != 32) {
																	// 0x3f898
																	v119 = 0;
																	// branch -> 0x3f89c
																}
																int32_t v120 = v118 + 40; // 0x3f89c
																int32_t v121 = v116 - 1;  // 0x3f8a0
																if (v121 == 0) {
																	v117 = v119;
																	// break -> 0x3f8a4
																	break;
																}
																v117 = v119;
																v116 = v121;
																v118 = v120;
																// continue -> 0x3f88c
															}
															// 0x3f8a4
															if (v117 == 0) {
															lab_0x3f8bc:;
																int32_t v122 = v19 + 2; // 0x3f8bc
																g27 = v122;
																if (v22 - v122 < 6) {
																	goto lab_0x3f8f4_12;
																}
																// 0x3f8cc
																DL2_DrawRoom(v114, v122, v115, v22);
																DL2_KnockWalls(g32 + 2, g27, g35 - 2, g33);
																// branch -> 0x3f8f4
																goto lab_0x3f8f4_12;
															} else {
															lab_0x3f8b4:
																// 0x3f8b4
																v17 = v117;
																v106--;
																v19--;
																// branch -> 0x3f858
																continue;
															}
														}
														// 0x3f8a4
														if (v117 == 0) {
															goto lab_0x3f8bc;
														}
														goto lab_0x3f8b4;
													}
												}
											}
											// 0x3f7c0
											v111 = v11;
											if (v13 == 0) {
												// 0x3f7c8
												v111 = 0;
												// branch -> 0x3f7cc
											}
											int32_t v123 = v14; // 0x3f7fc54
											if (v15 == 39) {
												// 0x3f7d4
												v123 = 0;
												// branch -> 0x3f7d8
											}
											if (v15 - v13 >= 14) {
												// 0x3f7e4
												v123 = 0;
												v111 = 0;
												// branch -> 0x3f7ec
											}
											// 0x3f7ec
											v112 = v108;
											v109 = v13;
											if (v111 != 0) {
												int32_t v124 = v13 - 1; // 0x3f7f8
												g32 = v124;
												v112 = v108 - 40;
												v109 = v124;
												// branch -> 0x3f7fc
											}
											// 0x3f7fc
											v113 = v107;
											v110 = v15;
											if (v123 != 0) {
												int32_t v125 = v15 + 1; // 0x3f808
												g35 = v125;
												v113 = v107 + 40;
												v110 = v125;
												// branch -> 0x3f80c
											}
											if (*(char *)v112 != 32) {
												// 0x3f818
												v111 = 0;
												// branch -> 0x3f81c
											}
											// 0x3f81c
											if (*(char *)v113 != 32) {
												// break -> 0x3f828
												break;
											}
											v107 = v113;
											v108 = v112;
											v15 = v110;
											v13 = v109;
											v14 = v123;
											v11 = v111;
											// continue -> 0x3f82c
										}
										// 0x3f828
										v107 = v113;
										v108 = v112;
										v15 = v110;
										v13 = v109;
										v14 = 0;
										v11 = v111;
										// branch -> 0x3f82c
										goto lab_0x3f82c;
									}
									// 0x3f8f4
									v24 = g26;
									g26 = v24 + 1;
									// branch -> 0x3f8f8
									goto lab_0x3f8f8_5;
								}
								// 0x3f8f4
								v24 = g26;
								g26 = v24 + 1;
								// branch -> 0x3f8f8
								goto lab_0x3f8f8_5;
							}
							// 0x3f8f4
							v24 = g26;
							g26 = v24 + 1;
							// branch -> 0x3f8f8
							goto lab_0x3f8f8_5;
						}
						// 0x3f8f4
						g26++;
						// branch -> 0x3f8f8
						goto lab_0x3f8f8_5;
					}
				}
				// 0x3f248
				if (*v6 == 32) {
					// 0x3f254
					if (v3 == 46) {
						// 0x3f25c
						if (*(char *)(v2 - 41) != 46) {
							v10 = 0;
							v9 = 0;
							v8 = 0;
							v7 = 0;
							goto lab_0x3f344_17;
						}
						// 0x3f268
						if (*(char *)(v2 - 39) != 46) {
							v10 = 0;
							v9 = 0;
							v8 = 0;
							v7 = 0;
							goto lab_0x3f344_17;
						}
						// 0x3f274
						if (*(char *)(v2 + 39) != 32) {
							v10 = 0;
							v9 = 0;
							v8 = 0;
							v7 = 0;
							goto lab_0x3f344_17;
						}
						// 0x3f280
						if (*(char *)(v2 + 41) != 32) {
							v10 = 0;
							v9 = 0;
							v8 = 0;
							v7 = 0;
							goto lab_0x3f344_17;
						}
						// 0x3f28c
						g27 = 1;
						g28 = 1;
						v4 = 1;
						v10 = 1;
						v9 = 1;
						v8 = 1;
						v7 = 0;
						// branch -> 0x3f344
						goto lab_0x3f344_17;
					}
				}
				char v126 = *(char *)(v2 - 1); // 0x3f29c
				char *v127 = (char *)(v2 + 1); // 0x3f2a8
				if (v126 == 32) {
					// 0x3f2a8
					if (*v127 == 46) {
						// 0x3f2b4
						if (*(char *)(v2 - 39) != 46) {
							v10 = 0;
							v9 = 0;
							v8 = 0;
							v7 = 0;
							goto lab_0x3f344_17;
						}
						// 0x3f2c0
						if (*(char *)(v2 + 41) != 46) {
							v10 = 0;
							v9 = 0;
							v8 = 0;
							v7 = 0;
							goto lab_0x3f344_17;
						}
						// 0x3f2cc
						if (*(char *)(v2 - 41) != 32) {
							v10 = 0;
							v9 = 0;
							v8 = 0;
							v7 = 0;
							goto lab_0x3f344_17;
						}
						// 0x3f2d8
						if (*(char *)(v2 + 39) != 32) {
							v10 = 0;
							v9 = 0;
							v8 = 0;
							v7 = 0;
							goto lab_0x3f344_17;
						}
						// 0x3f2e4
						v4 = 1;
						v5 = 1;
						g28 = 1;
						v10 = 0;
						v9 = 1;
						v8 = 1;
						v7 = 1;
						// branch -> 0x3f344
						goto lab_0x3f344_17;
					}
				}
				// 0x3f2f4
				if (*v127 != 32) {
					v10 = 0;
					v9 = 0;
					v8 = 0;
					v7 = 0;
					goto lab_0x3f344_17;
				}
				// 0x3f300
				if (v126 != 46) {
					v10 = 0;
					v9 = 0;
					v8 = 0;
					v7 = 0;
					goto lab_0x3f344_17;
				}
				// 0x3f308
				if (*(char *)(v2 - 41) != 46) {
					v10 = 0;
					v9 = 0;
					v8 = 0;
					v7 = 0;
					goto lab_0x3f344_17;
				}
				// 0x3f314
				if (*(char *)(v2 + 39) != 46) {
					v10 = 0;
					v9 = 0;
					v8 = 0;
					v7 = 0;
					goto lab_0x3f344_17;
				}
				// 0x3f320
				if (*(char *)(v2 - 39) != 32) {
					v10 = 0;
					v9 = 0;
					v8 = 0;
					v7 = 0;
					goto lab_0x3f344_17;
				}
				// 0x3f32c
				if (*(char *)(v2 + 41) != 32) {
					v10 = 0;
					v9 = 0;
					v8 = 0;
					v7 = 0;
					goto lab_0x3f344_17;
				}
				// 0x3f338
				v4 = 1;
				v5 = 1;
				g27 = 1;
				v10 = 1;
				v9 = 1;
				v8 = 0;
				v7 = 1;
				// branch -> 0x3f344
				goto lab_0x3f344_17;
			}
			// 0x3f8f8
			if (DL2_NumNoChar() < 701) {
				// break -> 0x3f90c
				break;
			}
			// continue -> 0x3f904
			continue;
		}
		// 0x3f90c
		return DL2_NumNoChar() < 701;
	}
lab_0x3f90c:
	// 0x3f90c
	return DL2_NumNoChar() < 701;
}

// Address range: 0x3ecf0 - 0x3ed70
int32_t DL2_Cont(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x3ecf0
	if (a1 == 0 || a3 == 0) {
		// 0x3ed18
		// branch -> 0x3ed40
		// 0x3ed40
		if (a2 == 0 || a4 == 0) {
			// 0x3ed68
			return 0;
		}
		// 0x3ed50
		if (a1 == 0) {
			// 0x3ed58
			if (a3 == 0) {
				// 0x3ed68
				return 0;
			}
		}
		// 0x3ed60
		return 1;
	}
	// 0x3ed00
	if (a2 == 0) {
		// 0x3ed30
		if (a4 == 0) {
			// 0x3ed40
			if (a2 == 0 || a4 == 0) {
				// 0x3ed68
				return 0;
			}
			// 0x3ed50
			if (a1 == 0) {
				// 0x3ed58
				if (a3 == 0) {
					// 0x3ed68
					return 0;
				}
			}
			// 0x3ed60
			return 1;
		}
	} else {
		// 0x3ed08
		if (a4 != 0) {
			// 0x3ed10
			return 0;
		}
		// 0x3ed28
		// branch -> 0x3ed38
	}
	// 0x3ed38
	return 1;
}

// Address range: 0x3ed70 - 0x3ee6c
int32_t DL2_NumNoChar(void)
{
	int32_t v1 = 0;                          // 0x3ee58
	int32_t v2 = 0;                          // 0x3ed9814
	int32_t v3 = *(int32_t *)(g23 - 0x7330); // 0x3ee5c
	// branch -> 0x3ed7c
	int32_t result; // 0x3ee68
	while (true) {
		int32_t v4 = 4;  // 0x3ee54
		int32_t v5 = v2; // 0x3ed98
		int32_t v6 = v3; // 0x3ed9c
		// branch -> 0x3ed8c
		while (true) {
			int32_t v7 = v5; // 0x3eda8
			if (*(char *)v6 == 32) {
				// 0x3ed98
				v7 = v5 + 1;
				// branch -> 0x3ed9c
			}
			int32_t v8 = v7; // 0x3edbc
			if (*(char *)(v6 + 40) == 32) {
				// 0x3eda8
				v8 = v7 + 1;
				// branch -> 0x3edac
			}
			int32_t v9 = v8; // 0x3edd0
			if (*(char *)(v6 + 80) == 32) {
				// 0x3edbc
				v9 = v8 + 1;
				// branch -> 0x3edc0
			}
			int32_t v10 = v9; // 0x3ede4
			if (*(char *)(v6 + 120) == 32) {
				// 0x3edd0
				v10 = v9 + 1;
				// branch -> 0x3edd4
			}
			int32_t v11 = v10; // 0x3edf8
			if (*(char *)(v6 + 160) == 32) {
				// 0x3ede4
				v11 = v10 + 1;
				// branch -> 0x3ede8
			}
			int32_t v12 = v11; // 0x3ee0c
			if (*(char *)(v6 + 200) == 32) {
				// 0x3edf8
				v12 = v11 + 1;
				// branch -> 0x3edfc
			}
			int32_t v13 = v12; // 0x3ee20
			if (*(char *)(v6 + 240) == 32) {
				// 0x3ee0c
				v13 = v12 + 1;
				// branch -> 0x3ee10
			}
			int32_t v14 = v13; // 0x3ee34
			if (*(char *)(v6 + 280) == 32) {
				// 0x3ee20
				v14 = v13 + 1;
				// branch -> 0x3ee24
			}
			int32_t v15 = v14; // 0x3ee48
			if (*(char *)(v6 + 320) == 32) {
				// 0x3ee34
				v15 = v14 + 1;
				// branch -> 0x3ee38
			}
			// 0x3ee38
			result = v15;
			if (*(char *)(v6 + 360) == 32) {
				// 0x3ee48
				result = v15 + 1;
				// branch -> 0x3ee4c
			}
			int32_t v16 = v6 + 400; // 0x3ee4c
			int32_t v17 = v4 - 1;   // 0x3ee54
			if (v17 == 0) {
				// break -> 0x3ee58
				break;
			}
			v4 = v17;
			v5 = result;
			v6 = v16;
			// continue -> 0x3ed8c
		}
		int32_t v18 = v1 + 1; // 0x3ee58
		if (v18 >= 40) {
			// break -> 0x3ee68
			break;
		}
		v1 = v18;
		v2 = result;
		v3++;
		// continue -> 0x3ed7c
	}
	// 0x3ee68
	return result;
}

// Address range: 0x3ee6c - 0x3f048
int32_t DL2_DrawRoom(int32_t result, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = result;                     // 0x3ee70
	int32_t v2 = *(int32_t *)(g23 - 0x7330); // 0x3ee74
	int32_t v3 = a2;                         // 0x3ee7c
	int32_t v4 = v3;                         // r30
	int32_t v5 = v3 + v2;                    // 0x3ee80
	int32_t v6 = v5;                         // r12
	int32_t v7 = 46;                         // r8
	int32_t v8 = a4;                         // 0x3eef82
	int32_t v9 = v3;                         // 0x3ef18
	int32_t v10 = v8;                        // 0x3ef04
	int32_t v11;                             // ctr
	int32_t v12;                             // r11
	int32_t v13;                             // r7
	int32_t v14;                             // r9
	int32_t v15;                             // 0x3efa4
	int32_t v16;                             // 0x3ef00
	int32_t v17;                             // 0x3ef2c
	int32_t v18;                             // 0x3ef80
	int32_t v19;                             // 0x3ef84
	int32_t v20;                             // 0x3efa0
	int32_t v21;                             // 0x3efa4
	int32_t v22;                             // 0x3efa8
	int32_t v23;                             // 0x3efc4
	int32_t v24;                             // 0x3f018
	int32_t v25;                             // 0x3f01c
	int32_t v26;                             // 0x3f038
	int32_t v27;                             // 0x3ef10
	int32_t v28;                             // 0x3ef20
	int32_t v29;                             // 0x3efb8
	if (v3 <= v8) {
		int32_t v30 = v5; // 0x3ee98
		int32_t v31 = v1; // 0x3ee9c
		while (true) {
			uint32_t v32 = a3; // 0x3ee90
			v12 = v30 + 40 * v1;
			int32_t v33 = 1 - v31 + v32; // 0x3ee9c
			v13 = v33;
			int32_t v34; // 0x3eef0
			int32_t v35; // 0x3eef4
			if (v31 <= v32) {
				int32_t v36 = __asm_rlwinm_(v33, 29, 3, 31); // 0x3eea4
				v11 = v36;
				int32_t v37; // 0x3eee0
				int32_t v38;
				if (v36 == 0) {
					// 0x3eea4
					v38 = v12;
					v37 = v13;
					// branch -> 0x3eee0
				lab_0x3eee0:
					// 0x3eee0
					*(char *)v38 = (char)v7;
					int32_t v39 = v12 + 40; // 0x3eee8
					int32_t v40 = v37 - 1;  // 0x3eeec
					// branch -> 0x3eee4
					while (v40 != 0) {
						// 0x3eee4
						*(char *)v39 = (char)v7;
						v39 += 40;
						v40--;
						// continue -> 0x3eee4
					}
				lab_0x3eef0:
					// 0x3eef0
					v34 = v6 + 1;
					v6 = v34;
					v35 = v4 + 1;
					v4 = v35;
					int32_t v41 = a4; // 0x3eef8
					if (v35 > v41) {
						// 0x3eef8
						v9 = a2;
						v10 = v41;
						// branch -> 0x3ef00
						// 0x3ef00
						v16 = 40 * result;
						v12 = v16;
						v27 = v9 + v2;
						v7 = v27 + v16;
						v14 = v27 + 40 * a3;
						v28 = 1 - v9 + v10;
						v13 = v28;
						a2 = 35;
						if (v9 > v10) {
							// 0x3efa4
							v15 = result;
							v21 = a3;
							v22 = v12;
							a3 = v5 + v22;
							a4 = v22 + a4 + v2;
							v29 = 1 - v15 + v21;
							a2 = v29;
							result = 35;
							if (v15 > v21) {
								// 0x3f03c
								return result;
							}
							// 0x3efc4
							v23 = __asm_rlwinm_(v29, 29, 3, 31);
							if (v23 == 0) {
								// 0x3efc4
								// branch -> 0x3f024
								// 0x3f024
								*(char *)a3 = (char)result;
								a3 += 40;
								*(char *)a4 = (char)result;
								a4 += 40;
								v26 = a2 - 1;
								// branch -> 0x3f028
								while (v26 != 0) {
									// 0x3f028
									*(char *)a3 = (char)result;
									a3 += 40;
									*(char *)a4 = (char)result;
									a4 += 40;
									v26--;
									// continue -> 0x3f028
								}
								// 0x3f03c
								return result;
							}
							*(char *)a3 = (char)result;
							*(char *)a4 = (char)result;
							*(char *)(a3 + 40) = (char)result;
							*(char *)(a4 + 40) = (char)result;
							*(char *)(a3 + 80) = (char)result;
							*(char *)(a4 + 80) = (char)result;
							*(char *)(a3 + 120) = (char)result;
							*(char *)(a4 + 120) = (char)result;
							*(char *)(a3 + 160) = (char)result;
							*(char *)(a4 + 160) = (char)result;
							*(char *)(a3 + 200) = (char)result;
							*(char *)(a4 + 200) = (char)result;
							*(char *)(a3 + 240) = (char)result;
							*(char *)(a4 + 240) = (char)result;
							*(char *)(a3 + 280) = (char)result;
							a3 += 320;
							*(char *)(a4 + 280) = (char)result;
							a4 += 320;
							v24 = v23 - 1;
							while (v24 != 0) {
								// 0x3efd0
								*(char *)a3 = (char)result;
								*(char *)a4 = (char)result;
								*(char *)(a3 + 40) = (char)result;
								*(char *)(a4 + 40) = (char)result;
								*(char *)(a3 + 80) = (char)result;
								*(char *)(a4 + 80) = (char)result;
								*(char *)(a3 + 120) = (char)result;
								*(char *)(a4 + 120) = (char)result;
								*(char *)(a3 + 160) = (char)result;
								*(char *)(a4 + 160) = (char)result;
								*(char *)(a3 + 200) = (char)result;
								*(char *)(a4 + 200) = (char)result;
								*(char *)(a3 + 240) = (char)result;
								*(char *)(a4 + 240) = (char)result;
								*(char *)(a3 + 280) = (char)result;
								a3 += 320;
								*(char *)(a4 + 280) = (char)result;
								a4 += 320;
								v24--;
								// continue -> 0x3efd0
							}
							// 0x3f01c
							v25 = a2 % 8;
							if (v25 != 0) {
								// 0x3f024
								*(char *)a3 = (char)result;
								a3 += 40;
								*(char *)a4 = (char)result;
								a4 += 40;
								v26 = v25 - 1;
								// branch -> 0x3f028
								while (v26 != 0) {
									// 0x3f028
									*(char *)a3 = (char)result;
									a3 += 40;
									*(char *)a4 = (char)result;
									a4 += 40;
									v26--;
									// continue -> 0x3f028
								}
								// 0x3f03c
								return result;
							}
							// 0x3f03c
							return result;
						}
						// 0x3ef2c
						v17 = __asm_rlwinm_(v28, 29, 3, 31);
						if (v17 == 0) {
							// 0x3ef2c
							// branch -> 0x3ef8c
							// 0x3ef8c
							*(char *)v7 = (char)a2;
							v7++;
							*(char *)v14 = (char)a2;
							v14++;
							v20 = v13 - 1;
							// branch -> 0x3ef90
							while (v20 != 0) {
								// 0x3ef90
								*(char *)v7 = (char)a2;
								v7++;
								*(char *)v14 = (char)a2;
								v14++;
								v20--;
								// continue -> 0x3ef90
							}
							// 0x3efa4
							v15 = result;
							v21 = a3;
							v22 = v12;
							a3 = v5 + v22;
							a4 = v22 + a4 + v2;
							v29 = 1 - v15 + v21;
							a2 = v29;
							result = 35;
							if (v15 > v21) {
								// 0x3f03c
								return result;
							}
							// 0x3efc4
							v23 = __asm_rlwinm_(v29, 29, 3, 31);
							if (v23 == 0) {
								// 0x3efc4
								// branch -> 0x3f024
								// 0x3f024
								*(char *)a3 = (char)result;
								a3 += 40;
								*(char *)a4 = (char)result;
								a4 += 40;
								v26 = a2 - 1;
								// branch -> 0x3f028
								while (v26 != 0) {
									// 0x3f028
									*(char *)a3 = (char)result;
									a3 += 40;
									*(char *)a4 = (char)result;
									a4 += 40;
									v26--;
									// continue -> 0x3f028
								}
								// 0x3f03c
								return result;
							}
							*(char *)a3 = (char)result;
							*(char *)a4 = (char)result;
							*(char *)(a3 + 40) = (char)result;
							*(char *)(a4 + 40) = (char)result;
							*(char *)(a3 + 80) = (char)result;
							*(char *)(a4 + 80) = (char)result;
							*(char *)(a3 + 120) = (char)result;
							*(char *)(a4 + 120) = (char)result;
							*(char *)(a3 + 160) = (char)result;
							*(char *)(a4 + 160) = (char)result;
							*(char *)(a3 + 200) = (char)result;
							*(char *)(a4 + 200) = (char)result;
							*(char *)(a3 + 240) = (char)result;
							*(char *)(a4 + 240) = (char)result;
							*(char *)(a3 + 280) = (char)result;
							a3 += 320;
							*(char *)(a4 + 280) = (char)result;
							a4 += 320;
							v24 = v23 - 1;
							while (v24 != 0) {
								// 0x3efd0
								*(char *)a3 = (char)result;
								*(char *)a4 = (char)result;
								*(char *)(a3 + 40) = (char)result;
								*(char *)(a4 + 40) = (char)result;
								*(char *)(a3 + 80) = (char)result;
								*(char *)(a4 + 80) = (char)result;
								*(char *)(a3 + 120) = (char)result;
								*(char *)(a4 + 120) = (char)result;
								*(char *)(a3 + 160) = (char)result;
								*(char *)(a4 + 160) = (char)result;
								*(char *)(a3 + 200) = (char)result;
								*(char *)(a4 + 200) = (char)result;
								*(char *)(a3 + 240) = (char)result;
								*(char *)(a4 + 240) = (char)result;
								*(char *)(a3 + 280) = (char)result;
								a3 += 320;
								*(char *)(a4 + 280) = (char)result;
								a4 += 320;
								v24--;
								// continue -> 0x3efd0
							}
							// 0x3f01c
							v25 = a2 % 8;
							if (v25 != 0) {
								// 0x3f024
								*(char *)a3 = (char)result;
								a3 += 40;
								*(char *)a4 = (char)result;
								a4 += 40;
								v26 = v25 - 1;
								// branch -> 0x3f028
								while (v26 != 0) {
									// 0x3f028
									*(char *)a3 = (char)result;
									a3 += 40;
									*(char *)a4 = (char)result;
									a4 += 40;
									v26--;
									// continue -> 0x3f028
								}
								// 0x3f03c
								return result;
							}
							// 0x3f03c
							return result;
						}
						*(char *)v7 = (char)a2;
						*(char *)v14 = (char)a2;
						*(char *)(v7 + 1) = (char)a2;
						*(char *)(v14 + 1) = (char)a2;
						*(char *)(v7 + 2) = (char)a2;
						*(char *)(v14 + 2) = (char)a2;
						*(char *)(v7 + 3) = (char)a2;
						*(char *)(v14 + 3) = (char)a2;
						*(char *)(v7 + 4) = (char)a2;
						*(char *)(v14 + 4) = (char)a2;
						*(char *)(v7 + 5) = (char)a2;
						*(char *)(v14 + 5) = (char)a2;
						*(char *)(v7 + 6) = (char)a2;
						*(char *)(v14 + 6) = (char)a2;
						*(char *)(v7 + 7) = (char)a2;
						v7 += 8;
						*(char *)(v14 + 7) = (char)a2;
						v14 += 8;
						v18 = v17 - 1;
						while (v18 != 0) {
							// 0x3ef38
							*(char *)v7 = (char)a2;
							*(char *)v14 = (char)a2;
							*(char *)(v7 + 1) = (char)a2;
							*(char *)(v14 + 1) = (char)a2;
							*(char *)(v7 + 2) = (char)a2;
							*(char *)(v14 + 2) = (char)a2;
							*(char *)(v7 + 3) = (char)a2;
							*(char *)(v14 + 3) = (char)a2;
							*(char *)(v7 + 4) = (char)a2;
							*(char *)(v14 + 4) = (char)a2;
							*(char *)(v7 + 5) = (char)a2;
							*(char *)(v14 + 5) = (char)a2;
							*(char *)(v7 + 6) = (char)a2;
							*(char *)(v14 + 6) = (char)a2;
							*(char *)(v7 + 7) = (char)a2;
							v7 += 8;
							*(char *)(v14 + 7) = (char)a2;
							v14 += 8;
							v18--;
							// continue -> 0x3ef38
						}
						// 0x3ef84
						v19 = v13 % 8;
						if (v19 != 0) {
							// 0x3ef8c
							*(char *)v7 = (char)a2;
							v7++;
							*(char *)v14 = (char)a2;
							v14++;
							v20 = v19 - 1;
							// branch -> 0x3ef90
							while (v20 != 0) {
								// 0x3ef90
								*(char *)v7 = (char)a2;
								v7++;
								*(char *)v14 = (char)a2;
								v14++;
								v20--;
								// continue -> 0x3ef90
							}
							// 0x3efa4
							v15 = result;
							v21 = a3;
							v22 = v12;
							a3 = v5 + v22;
							a4 = v22 + a4 + v2;
							v29 = 1 - v15 + v21;
							a2 = v29;
							result = 35;
							if (v15 > v21) {
								// 0x3f03c
								return result;
							}
							// 0x3efc4
							v23 = __asm_rlwinm_(v29, 29, 3, 31);
							if (v23 == 0) {
								// 0x3efc4
								// branch -> 0x3f024
								// 0x3f024
								*(char *)a3 = (char)result;
								a3 += 40;
								*(char *)a4 = (char)result;
								a4 += 40;
								v26 = a2 - 1;
								// branch -> 0x3f028
								while (v26 != 0) {
									// 0x3f028
									*(char *)a3 = (char)result;
									a3 += 40;
									*(char *)a4 = (char)result;
									a4 += 40;
									v26--;
									// continue -> 0x3f028
								}
								// 0x3f03c
								return result;
							}
							*(char *)a3 = (char)result;
							*(char *)a4 = (char)result;
							*(char *)(a3 + 40) = (char)result;
							*(char *)(a4 + 40) = (char)result;
							*(char *)(a3 + 80) = (char)result;
							*(char *)(a4 + 80) = (char)result;
							*(char *)(a3 + 120) = (char)result;
							*(char *)(a4 + 120) = (char)result;
							*(char *)(a3 + 160) = (char)result;
							*(char *)(a4 + 160) = (char)result;
							*(char *)(a3 + 200) = (char)result;
							*(char *)(a4 + 200) = (char)result;
							*(char *)(a3 + 240) = (char)result;
							*(char *)(a4 + 240) = (char)result;
							*(char *)(a3 + 280) = (char)result;
							a3 += 320;
							*(char *)(a4 + 280) = (char)result;
							a4 += 320;
							v24 = v23 - 1;
							while (v24 != 0) {
								// 0x3efd0
								*(char *)a3 = (char)result;
								*(char *)a4 = (char)result;
								*(char *)(a3 + 40) = (char)result;
								*(char *)(a4 + 40) = (char)result;
								*(char *)(a3 + 80) = (char)result;
								*(char *)(a4 + 80) = (char)result;
								*(char *)(a3 + 120) = (char)result;
								*(char *)(a4 + 120) = (char)result;
								*(char *)(a3 + 160) = (char)result;
								*(char *)(a4 + 160) = (char)result;
								*(char *)(a3 + 200) = (char)result;
								*(char *)(a4 + 200) = (char)result;
								*(char *)(a3 + 240) = (char)result;
								*(char *)(a4 + 240) = (char)result;
								*(char *)(a3 + 280) = (char)result;
								a3 += 320;
								*(char *)(a4 + 280) = (char)result;
								a4 += 320;
								v24--;
								// continue -> 0x3efd0
							}
							// 0x3f01c
							v25 = a2 % 8;
							if (v25 != 0) {
								// 0x3f024
								*(char *)a3 = (char)result;
								a3 += 40;
								*(char *)a4 = (char)result;
								a4 += 40;
								v26 = v25 - 1;
								// branch -> 0x3f028
								while (v26 != 0) {
									// 0x3f028
									*(char *)a3 = (char)result;
									a3 += 40;
									*(char *)a4 = (char)result;
									a4 += 40;
									v26--;
									// continue -> 0x3f028
								}
								// 0x3f03c
								return result;
							}
							// 0x3f03c
							return result;
						}
						// 0x3efa4
						v15 = result;
						v21 = a3;
						v22 = v12;
						a3 = v5 + v22;
						a4 = v22 + a4 + v2;
						v29 = 1 - v15 + v21;
						a2 = v29;
						result = 35;
						if (v15 > v21) {
							// 0x3f03c
							return result;
						}
						// 0x3efc4
						v23 = __asm_rlwinm_(v29, 29, 3, 31);
						if (v23 == 0) {
							// 0x3efc4
							// branch -> 0x3f024
							// 0x3f024
							*(char *)a3 = (char)result;
							a3 += 40;
							*(char *)a4 = (char)result;
							a4 += 40;
							v26 = a2 - 1;
							// branch -> 0x3f028
							while (v26 != 0) {
								// 0x3f028
								*(char *)a3 = (char)result;
								a3 += 40;
								*(char *)a4 = (char)result;
								a4 += 40;
								v26--;
								// continue -> 0x3f028
							}
							// 0x3f03c
							return result;
						}
						*(char *)a3 = (char)result;
						*(char *)a4 = (char)result;
						*(char *)(a3 + 40) = (char)result;
						*(char *)(a4 + 40) = (char)result;
						*(char *)(a3 + 80) = (char)result;
						*(char *)(a4 + 80) = (char)result;
						*(char *)(a3 + 120) = (char)result;
						*(char *)(a4 + 120) = (char)result;
						*(char *)(a3 + 160) = (char)result;
						*(char *)(a4 + 160) = (char)result;
						*(char *)(a3 + 200) = (char)result;
						*(char *)(a4 + 200) = (char)result;
						*(char *)(a3 + 240) = (char)result;
						*(char *)(a4 + 240) = (char)result;
						*(char *)(a3 + 280) = (char)result;
						a3 += 320;
						*(char *)(a4 + 280) = (char)result;
						a4 += 320;
						v24 = v23 - 1;
						while (v24 != 0) {
							// 0x3efd0
							*(char *)a3 = (char)result;
							*(char *)a4 = (char)result;
							*(char *)(a3 + 40) = (char)result;
							*(char *)(a4 + 40) = (char)result;
							*(char *)(a3 + 80) = (char)result;
							*(char *)(a4 + 80) = (char)result;
							*(char *)(a3 + 120) = (char)result;
							*(char *)(a4 + 120) = (char)result;
							*(char *)(a3 + 160) = (char)result;
							*(char *)(a4 + 160) = (char)result;
							*(char *)(a3 + 200) = (char)result;
							*(char *)(a4 + 200) = (char)result;
							*(char *)(a3 + 240) = (char)result;
							*(char *)(a4 + 240) = (char)result;
							*(char *)(a3 + 280) = (char)result;
							a3 += 320;
							*(char *)(a4 + 280) = (char)result;
							a4 += 320;
							v24--;
							// continue -> 0x3efd0
						}
						// 0x3f01c
						v25 = a2 % 8;
						if (v25 != 0) {
							// 0x3f024
							*(char *)a3 = (char)result;
							a3 += 40;
							*(char *)a4 = (char)result;
							a4 += 40;
							v26 = v25 - 1;
							// branch -> 0x3f028
							while (v26 != 0) {
								// 0x3f028
								*(char *)a3 = (char)result;
								a3 += 40;
								*(char *)a4 = (char)result;
								a4 += 40;
								v26--;
								// continue -> 0x3f028
							}
							// 0x3f03c
							return result;
						}
						// 0x3f03c
						return result;
					}
				lab_0x3eef0_3:
					// 0x3eef0
					v30 = v34;
					v31 = result;
					// branch -> 0x3ee90
					continue;
				} else {
					// 0x3eeb0
					*(char *)v12 = (char)v7;
					*(char *)(v12 + 40) = (char)v7;
					*(char *)(v12 + 80) = (char)v7;
					*(char *)(v12 + 120) = (char)v7;
					*(char *)(v12 + 160) = (char)v7;
					*(char *)(v12 + 200) = (char)v7;
					*(char *)(v12 + 240) = (char)v7;
					*(char *)(v12 + 280) = (char)v7;
					int32_t v42 = v12 + 320; // 0x3eed0
					v12 = v42;
					int32_t v43 = v11 - 1; // 0x3eed4
					// branch -> 0x3eeb0
					while (v43 != 0) {
						// 0x3eeb0
						*(char *)v42 = (char)v7;
						*(char *)(v12 + 40) = (char)v7;
						*(char *)(v12 + 80) = (char)v7;
						*(char *)(v12 + 120) = (char)v7;
						*(char *)(v12 + 160) = (char)v7;
						*(char *)(v12 + 200) = (char)v7;
						*(char *)(v12 + 240) = (char)v7;
						*(char *)(v12 + 280) = (char)v7;
						v42 = v12 + 320;
						v12 = v42;
						v43--;
						// continue -> 0x3eeb0
					}
					int32_t v44 = v13 % 8; // 0x3eed8
					if (v44 == 0) {
						goto lab_0x3eef0;
					}
					v38 = v42;
					v37 = v44;
					goto lab_0x3eee0;
				}
				// branch -> 0x3ef00
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x3eef0
			v34 = v6 + 1;
			v6 = v34;
			v35 = v4 + 1;
			v4 = v35;
			if (v35 <= a4) {
				goto lab_0x3eef0_3;
			}
			// 0x3eef8
			// branch -> 0x3ef00
		}
	}
	// 0x3ef00
	v16 = 40 * v1;
	v12 = v16;
	v27 = v9 + v2;
	v7 = v27 + v16;
	v14 = v27 + 40 * a3;
	v28 = 1 - v9 + v10;
	v13 = v28;
	a2 = 35;
	if (v9 <= v10) {
		// 0x3ef2c
		v17 = __asm_rlwinm_(v28, 29, 3, 31);
		if (v17 == 0) {
			// 0x3ef2c
			// branch -> 0x3ef8c
			// 0x3ef8c
			*(char *)v7 = (char)a2;
			v7++;
			*(char *)v14 = (char)a2;
			v14++;
			v20 = v13 - 1;
			// branch -> 0x3ef90
			while (v20 != 0) {
				// 0x3ef90
				*(char *)v7 = (char)a2;
				v7++;
				*(char *)v14 = (char)a2;
				v14++;
				v20--;
				// continue -> 0x3ef90
			}
			// 0x3efa4
			v15 = result;
			v21 = a3;
			v22 = v12;
			a3 = v5 + v22;
			a4 = v22 + a4 + v2;
			v29 = 1 - v15 + v21;
			a2 = v29;
			result = 35;
			if (v15 > v21) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x3efc4
			v23 = __asm_rlwinm_(v29, 29, 3, 31);
			v11 = v23;
			if (v23 == 0) {
				// 0x3efc4
				// branch -> 0x3f024
				// 0x3f024
				*(char *)a3 = (char)result;
				a3 += 40;
				*(char *)a4 = (char)result;
				a4 += 40;
				v26 = a2 - 1;
				// branch -> 0x3f028
				while (v26 != 0) {
					// 0x3f028
					*(char *)a3 = (char)result;
					a3 += 40;
					*(char *)a4 = (char)result;
					a4 += 40;
					v26--;
					// continue -> 0x3f028
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				*(char *)a3 = (char)result;
				*(char *)a4 = (char)result;
				*(char *)(a3 + 40) = (char)result;
				*(char *)(a4 + 40) = (char)result;
				*(char *)(a3 + 80) = (char)result;
				*(char *)(a4 + 80) = (char)result;
				*(char *)(a3 + 120) = (char)result;
				*(char *)(a4 + 120) = (char)result;
				*(char *)(a3 + 160) = (char)result;
				*(char *)(a4 + 160) = (char)result;
				*(char *)(a3 + 200) = (char)result;
				*(char *)(a4 + 200) = (char)result;
				*(char *)(a3 + 240) = (char)result;
				*(char *)(a4 + 240) = (char)result;
				*(char *)(a3 + 280) = (char)result;
				a3 += 320;
				*(char *)(a4 + 280) = (char)result;
				a4 += 320;
				v24 = v11 - 1;
				while (v24 != 0) {
					// 0x3efd0
					*(char *)a3 = (char)result;
					*(char *)a4 = (char)result;
					*(char *)(a3 + 40) = (char)result;
					*(char *)(a4 + 40) = (char)result;
					*(char *)(a3 + 80) = (char)result;
					*(char *)(a4 + 80) = (char)result;
					*(char *)(a3 + 120) = (char)result;
					*(char *)(a4 + 120) = (char)result;
					*(char *)(a3 + 160) = (char)result;
					*(char *)(a4 + 160) = (char)result;
					*(char *)(a3 + 200) = (char)result;
					*(char *)(a4 + 200) = (char)result;
					*(char *)(a3 + 240) = (char)result;
					*(char *)(a4 + 240) = (char)result;
					*(char *)(a3 + 280) = (char)result;
					a3 += 320;
					*(char *)(a4 + 280) = (char)result;
					a4 += 320;
					v24--;
					// continue -> 0x3efd0
				}
				// 0x3f01c
				v25 = a2 % 8;
				if (v25 != 0) {
					// 0x3f024
					*(char *)a3 = (char)result;
					a3 += 40;
					*(char *)a4 = (char)result;
					a4 += 40;
					v26 = v25 - 1;
					// branch -> 0x3f028
					while (v26 != 0) {
						// 0x3f028
						*(char *)a3 = (char)result;
						a3 += 40;
						*(char *)a4 = (char)result;
						a4 += 40;
						v26--;
						// continue -> 0x3f028
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			*(char *)v7 = (char)a2;
			*(char *)v14 = (char)a2;
			*(char *)(v7 + 1) = (char)a2;
			*(char *)(v14 + 1) = (char)a2;
			*(char *)(v7 + 2) = (char)a2;
			*(char *)(v14 + 2) = (char)a2;
			*(char *)(v7 + 3) = (char)a2;
			*(char *)(v14 + 3) = (char)a2;
			*(char *)(v7 + 4) = (char)a2;
			*(char *)(v14 + 4) = (char)a2;
			*(char *)(v7 + 5) = (char)a2;
			*(char *)(v14 + 5) = (char)a2;
			*(char *)(v7 + 6) = (char)a2;
			*(char *)(v14 + 6) = (char)a2;
			*(char *)(v7 + 7) = (char)a2;
			v7 += 8;
			*(char *)(v14 + 7) = (char)a2;
			v14 += 8;
			v18 = v17 - 1;
			while (v18 != 0) {
				// 0x3ef38
				*(char *)v7 = (char)a2;
				*(char *)v14 = (char)a2;
				*(char *)(v7 + 1) = (char)a2;
				*(char *)(v14 + 1) = (char)a2;
				*(char *)(v7 + 2) = (char)a2;
				*(char *)(v14 + 2) = (char)a2;
				*(char *)(v7 + 3) = (char)a2;
				*(char *)(v14 + 3) = (char)a2;
				*(char *)(v7 + 4) = (char)a2;
				*(char *)(v14 + 4) = (char)a2;
				*(char *)(v7 + 5) = (char)a2;
				*(char *)(v14 + 5) = (char)a2;
				*(char *)(v7 + 6) = (char)a2;
				*(char *)(v14 + 6) = (char)a2;
				*(char *)(v7 + 7) = (char)a2;
				v7 += 8;
				*(char *)(v14 + 7) = (char)a2;
				v14 += 8;
				v18--;
				// continue -> 0x3ef38
			}
			// 0x3ef84
			v19 = v13 % 8;
			if (v19 != 0) {
				// 0x3ef8c
				*(char *)v7 = (char)a2;
				v7++;
				*(char *)v14 = (char)a2;
				v14++;
				v20 = v19 - 1;
				// branch -> 0x3ef90
				while (v20 != 0) {
					// 0x3ef90
					*(char *)v7 = (char)a2;
					v7++;
					*(char *)v14 = (char)a2;
					v14++;
					v20--;
					// continue -> 0x3ef90
				}
				// 0x3efa4
				v15 = result;
				v21 = a3;
				v22 = v12;
				a3 = v5 + v22;
				a4 = v22 + a4 + v2;
				v29 = 1 - v15 + v21;
				a2 = v29;
				result = 35;
				if (v15 > v21) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x3efc4
				v23 = __asm_rlwinm_(v29, 29, 3, 31);
				v11 = v23;
				if (v23 == 0) {
					// 0x3efc4
					// branch -> 0x3f024
					// 0x3f024
					*(char *)a3 = (char)result;
					a3 += 40;
					*(char *)a4 = (char)result;
					a4 += 40;
					v26 = a2 - 1;
					// branch -> 0x3f028
					while (v26 != 0) {
						// 0x3f028
						*(char *)a3 = (char)result;
						a3 += 40;
						*(char *)a4 = (char)result;
						a4 += 40;
						v26--;
						// continue -> 0x3f028
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					*(char *)a3 = (char)result;
					*(char *)a4 = (char)result;
					*(char *)(a3 + 40) = (char)result;
					*(char *)(a4 + 40) = (char)result;
					*(char *)(a3 + 80) = (char)result;
					*(char *)(a4 + 80) = (char)result;
					*(char *)(a3 + 120) = (char)result;
					*(char *)(a4 + 120) = (char)result;
					*(char *)(a3 + 160) = (char)result;
					*(char *)(a4 + 160) = (char)result;
					*(char *)(a3 + 200) = (char)result;
					*(char *)(a4 + 200) = (char)result;
					*(char *)(a3 + 240) = (char)result;
					*(char *)(a4 + 240) = (char)result;
					*(char *)(a3 + 280) = (char)result;
					a3 += 320;
					*(char *)(a4 + 280) = (char)result;
					a4 += 320;
					v24 = v11 - 1;
					while (v24 != 0) {
						// 0x3efd0
						*(char *)a3 = (char)result;
						*(char *)a4 = (char)result;
						*(char *)(a3 + 40) = (char)result;
						*(char *)(a4 + 40) = (char)result;
						*(char *)(a3 + 80) = (char)result;
						*(char *)(a4 + 80) = (char)result;
						*(char *)(a3 + 120) = (char)result;
						*(char *)(a4 + 120) = (char)result;
						*(char *)(a3 + 160) = (char)result;
						*(char *)(a4 + 160) = (char)result;
						*(char *)(a3 + 200) = (char)result;
						*(char *)(a4 + 200) = (char)result;
						*(char *)(a3 + 240) = (char)result;
						*(char *)(a4 + 240) = (char)result;
						*(char *)(a3 + 280) = (char)result;
						a3 += 320;
						*(char *)(a4 + 280) = (char)result;
						a4 += 320;
						v24--;
						// continue -> 0x3efd0
					}
					// 0x3f01c
					v25 = a2 % 8;
					if (v25 != 0) {
						// 0x3f024
						*(char *)a3 = (char)result;
						a3 += 40;
						*(char *)a4 = (char)result;
						a4 += 40;
						v26 = v25 - 1;
						// branch -> 0x3f028
						while (v26 != 0) {
							// 0x3f028
							*(char *)a3 = (char)result;
							a3 += 40;
							*(char *)a4 = (char)result;
							a4 += 40;
							v26--;
							// continue -> 0x3f028
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0x3efa4
		v15 = result;
		v21 = a3;
		v22 = v12;
		a3 = v5 + v22;
		a4 = v22 + a4 + v2;
		v29 = 1 - v15 + v21;
		a2 = v29;
		result = 35;
		if (v15 > v21) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x3efc4
		v23 = __asm_rlwinm_(v29, 29, 3, 31);
		v11 = v23;
		if (v23 == 0) {
			// 0x3efc4
			// branch -> 0x3f024
			// 0x3f024
			*(char *)a3 = (char)result;
			a3 += 40;
			*(char *)a4 = (char)result;
			a4 += 40;
			v26 = a2 - 1;
			// branch -> 0x3f028
			while (v26 != 0) {
				// 0x3f028
				*(char *)a3 = (char)result;
				a3 += 40;
				*(char *)a4 = (char)result;
				a4 += 40;
				v26--;
				// continue -> 0x3f028
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			*(char *)a3 = (char)result;
			*(char *)a4 = (char)result;
			*(char *)(a3 + 40) = (char)result;
			*(char *)(a4 + 40) = (char)result;
			*(char *)(a3 + 80) = (char)result;
			*(char *)(a4 + 80) = (char)result;
			*(char *)(a3 + 120) = (char)result;
			*(char *)(a4 + 120) = (char)result;
			*(char *)(a3 + 160) = (char)result;
			*(char *)(a4 + 160) = (char)result;
			*(char *)(a3 + 200) = (char)result;
			*(char *)(a4 + 200) = (char)result;
			*(char *)(a3 + 240) = (char)result;
			*(char *)(a4 + 240) = (char)result;
			*(char *)(a3 + 280) = (char)result;
			a3 += 320;
			*(char *)(a4 + 280) = (char)result;
			a4 += 320;
			v24 = v11 - 1;
			while (v24 != 0) {
				// 0x3efd0
				*(char *)a3 = (char)result;
				*(char *)a4 = (char)result;
				*(char *)(a3 + 40) = (char)result;
				*(char *)(a4 + 40) = (char)result;
				*(char *)(a3 + 80) = (char)result;
				*(char *)(a4 + 80) = (char)result;
				*(char *)(a3 + 120) = (char)result;
				*(char *)(a4 + 120) = (char)result;
				*(char *)(a3 + 160) = (char)result;
				*(char *)(a4 + 160) = (char)result;
				*(char *)(a3 + 200) = (char)result;
				*(char *)(a4 + 200) = (char)result;
				*(char *)(a3 + 240) = (char)result;
				*(char *)(a4 + 240) = (char)result;
				*(char *)(a3 + 280) = (char)result;
				a3 += 320;
				*(char *)(a4 + 280) = (char)result;
				a4 += 320;
				v24--;
				// continue -> 0x3efd0
			}
			// 0x3f01c
			v25 = a2 % 8;
			if (v25 != 0) {
				// 0x3f024
				*(char *)a3 = (char)result;
				a3 += 40;
				*(char *)a4 = (char)result;
				a4 += 40;
				v26 = v25 - 1;
				// branch -> 0x3f028
				while (v26 != 0) {
					// 0x3f028
					*(char *)a3 = (char)result;
					a3 += 40;
					*(char *)a4 = (char)result;
					a4 += 40;
					v26--;
					// continue -> 0x3f028
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x3efa4
	v15 = result;
	v21 = a3;
	v22 = v12;
	a3 = v5 + v22;
	a4 = v22 + a4 + v2;
	v29 = 1 - v15 + v21;
	a2 = v29;
	result = 35;
	if (v15 > v21) {
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x3efc4
	v23 = __asm_rlwinm_(v29, 29, 3, 31);
	if (v23 == 0) {
		// 0x3efc4
		// branch -> 0x3f024
		// 0x3f024
		*(char *)a3 = (char)result;
		a3 += 40;
		*(char *)a4 = (char)result;
		a4 += 40;
		v26 = a2 - 1;
		// branch -> 0x3f028
		while (v26 != 0) {
			// 0x3f028
			*(char *)a3 = (char)result;
			a3 += 40;
			*(char *)a4 = (char)result;
			a4 += 40;
			v26--;
			// continue -> 0x3f028
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	} else {
		*(char *)a3 = (char)result;
		*(char *)a4 = (char)result;
		*(char *)(a3 + 40) = (char)result;
		*(char *)(a4 + 40) = (char)result;
		*(char *)(a3 + 80) = (char)result;
		*(char *)(a4 + 80) = (char)result;
		*(char *)(a3 + 120) = (char)result;
		*(char *)(a4 + 120) = (char)result;
		*(char *)(a3 + 160) = (char)result;
		*(char *)(a4 + 160) = (char)result;
		*(char *)(a3 + 200) = (char)result;
		*(char *)(a4 + 200) = (char)result;
		*(char *)(a3 + 240) = (char)result;
		*(char *)(a4 + 240) = (char)result;
		*(char *)(a3 + 280) = (char)result;
		a3 += 320;
		*(char *)(a4 + 280) = (char)result;
		a4 += 320;
		v24 = v23 - 1;
		while (v24 != 0) {
			// 0x3efd0
			*(char *)a3 = (char)result;
			*(char *)a4 = (char)result;
			*(char *)(a3 + 40) = (char)result;
			*(char *)(a4 + 40) = (char)result;
			*(char *)(a3 + 80) = (char)result;
			*(char *)(a4 + 80) = (char)result;
			*(char *)(a3 + 120) = (char)result;
			*(char *)(a4 + 120) = (char)result;
			*(char *)(a3 + 160) = (char)result;
			*(char *)(a4 + 160) = (char)result;
			*(char *)(a3 + 200) = (char)result;
			*(char *)(a4 + 200) = (char)result;
			*(char *)(a3 + 240) = (char)result;
			*(char *)(a4 + 240) = (char)result;
			*(char *)(a3 + 280) = (char)result;
			a3 += 320;
			*(char *)(a4 + 280) = (char)result;
			a4 += 320;
			v24--;
			// continue -> 0x3efd0
		}
		// 0x3f01c
		v25 = a2 % 8;
		if (v25 != 0) {
			// 0x3f024
			*(char *)a3 = (char)result;
			a3 += 40;
			*(char *)a4 = (char)result;
			a4 += 40;
			v26 = v25 - 1;
			// branch -> 0x3f028
			while (v26 != 0) {
				// 0x3f028
				*(char *)a3 = (char)result;
				a3 += 40;
				*(char *)a4 = (char)result;
				a4 += 40;
				v26--;
				// continue -> 0x3f028
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x3f048 - 0x3f18c
int32_t DL2_KnockWalls(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = a1 + 1;                     // 0x3f048
	int32_t v2 = *(int32_t *)(g23 - 0x7330); // 0x3f04c
	int32_t v3 = 40 * v1;                    // 0x3f050
	int32_t v4 = a3 - v1;                    // ctr
	int32_t v5 = v3 + a2 + v2;               // 0x3f068
	int32_t v6 = v3 + a4 + v2;               // 0x3f06c
	int32_t v7 = v2;                         // 0x3f10c
	int32_t v8 = a4;                         // 0x3f100
	if (v1 < a3) {
		while (true) {
			int32_t v9 = v6; // 0x3f0b0
			if (*(char *)(v5 - 1) == 46) {
				// 0x3f080
				if (*(char *)(v5 + 1) == 46) {
					// 0x3f08c
					*(char *)v5 = 46;
					v9 = v6;
					// branch -> 0x3f094
				} else {
					v9 = v6;
				}
			}
			// 0x3f094
			if (*(char *)(v9 - 1) == 46) {
				// 0x3f0a0
				if (*(char *)(v9 + 1) == 46) {
					// 0x3f0ac
					*(char *)v9 = 46;
					// branch -> 0x3f0b4
				}
			}
			char *v10 = (char *)(v5 - 1); // 0x3f0b4
			if (*v10 == 68) {
				// 0x3f0c0
				*v10 = 46;
				// branch -> 0x3f0c8
			}
			char *v11 = (char *)(v6 + 1); // 0x3f0c8
			if (*v11 == 68) {
				// 0x3f0d4
				*v11 = 46;
				// branch -> 0x3f0dc
			}
			int32_t v12 = v4 - 1; // 0x3f0e4
			v4 = v12;
			if (v12 == 0) {
				// break -> 0x3f0e8
				break;
			}
			v6 += 40;
			v5 += 40;
			// continue -> 0x3f074
		}
		// 0x3f0e8
		v7 = v2;
		v8 = a4;
		// branch -> 0x3f0e8
	}
	int32_t v13 = a2 + 1;             // 0x3f0ec
	int32_t v14 = v13 + v7 + 40 * a1; // 0x3f0fc
	v4 = v8 - v13;
	int32_t result = 40 * a3 + v7 + v13; // 0x3f10c
	int32_t v15 = result;                // r3
	if (v8 <= v13) {
		// 0x3f188
		return result;
	}
	int32_t v16 = result; // 0x3f13412
	int32_t result2;      // 0x3f180
	while (true) {
		int32_t v17 = v16; // 0x3f150
		if (*(char *)(v14 - 40) == 46) {
			// 0x3f120
			if (*(char *)(v14 + 40) == 46) {
				// 0x3f12c
				*(char *)v14 = 46;
				v17 = v15;
				// branch -> 0x3f134
			} else {
				v17 = v16;
			}
		}
		// 0x3f134
		if (*(char *)(v17 - 40) == 46) {
			// 0x3f140
			if (*(char *)(v17 + 40) == 46) {
				// 0x3f14c
				*(char *)v17 = 46;
				// branch -> 0x3f154
			}
		}
		char *v18 = (char *)(v14 - 40); // 0x3f154
		if (*v18 == 68) {
			// 0x3f160
			*v18 = 46;
			// branch -> 0x3f168
		}
		char *v19 = (char *)(v15 + 40); // 0x3f168
		if (*v19 == 68) {
			// 0x3f174
			*v19 = 46;
			// branch -> 0x3f17c
		}
		// 0x3f17c
		result2 = v15 + 1;
		v15 = result2;
		int32_t v20 = v4 - 1; // 0x3f184
		v4 = v20;
		if (v20 == 0) {
			// break -> 0x3f188
			break;
		}
		v16 = result2;
		v14++;
		// continue -> 0x3f114
	}
	// 0x3f188
	return result2;
}

// Address range: 0x3fed4 - 0x40048
int32_t DRLG_L2FloodTVal(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x7588); // r3
	int32_t v1 = 16;                             // r8
	int32_t v2 = *(int32_t *)(g23 - 0x77cc);     // 0x3fedc
	int32_t v3 = 0;                              // r7
	// branch -> 0x3fee4
	while (true) {
		int32_t v4 = v2;   // r4
		int32_t v5 = 40;   // ctr
		int32_t v6 = 1792; // r5
		int32_t v7 = 1792; // 0x3ff10
		int32_t v8 = v2;   // 0x3ff00
		// branch -> 0x3fef4
		while (true) {
			int32_t v9 = v8; // 0x3ff40
			if (*(char *)v8 == 14) {
				// 0x3ff00
				if (*(char *)(v8 - 1) == 10) {
					int32_t v10 = *(int32_t *)result + v7 + v1; // 0x3ff14
					*(char *)(v10 + 112) = *(char *)v10;
					int32_t v11 = v6 + *(int32_t *)result + v1; // 0x3ff28
					*(char *)(v11 + 113) = *(char *)v11;
					v9 = v4;
					// branch -> 0x3ff34
				} else {
					v9 = v8;
				}
			}
			int32_t v12 = v9; // 0x3ff74
			if (*(char *)v9 == 15) {
				// 0x3ff40
				if (*(char *)(v9 + 40) == 11) {
					int32_t v13 = v6 + *(int32_t *)result + v1; // 0x3ff54
					*(char *)(v13 + 1) = *(char *)v13;
					int32_t v14 = v6 + *(int32_t *)result + v1; // 0x3ff68
					*(char *)(v14 + 113) = *(char *)v14;
					v12 = v4;
					// branch -> 0x3ff74
				} else {
					v12 = v9;
				}
			}
			int32_t v15 = v12; // 0x3ffa8
			if (*(char *)v12 == 10) {
				int32_t v16 = v6 + *(int32_t *)result + v1; // 0x3ff88
				*(char *)(v16 + 112) = *(char *)v16;
				int32_t v17 = v6 + *(int32_t *)result + v1; // 0x3ff9c
				*(char *)(v17 + 113) = *(char *)v17;
				v15 = v4;
				// branch -> 0x3ffa8
			}
			int32_t v18 = v15; // 0x3ffdc
			if (*(char *)v15 == 11) {
				int32_t v19 = v6 + *(int32_t *)result + v1; // 0x3ffbc
				*(char *)(v19 + 1) = *(char *)v19;
				int32_t v20 = v6 + *(int32_t *)result + v1; // 0x3ffd0
				*(char *)(v20 + 113) = *(char *)v20;
				v18 = v4;
				// branch -> 0x3ffdc
			}
			int32_t v21 = v18; // 0x40028
			if (*(char *)v18 == 16) {
				int32_t v22 = v6 + *(int32_t *)result + v1; // 0x3fff0
				*(char *)(v22 + 112) = *(char *)v22;
				int32_t v23 = v6 + *(int32_t *)result + v1; // 0x40004
				*(char *)(v23 + 1) = *(char *)v23;
				int32_t v24 = v6 + *(int32_t *)result + v1; // 0x40018
				*(char *)(v24 + 113) = *(char *)v24;
				v21 = v4;
				// branch -> 0x40024
			}
			int32_t v25 = v6 + 224; // 0x40024
			v6 = v25;
			int32_t v26 = v21 + 40; // 0x40028
			v4 = v26;
			int32_t v27 = v5 - 1; // 0x4002c
			v5 = v27;
			if (v27 == 0) {
				// break -> 0x40030
				break;
			}
			v7 = v25;
			v8 = v26;
			// continue -> 0x3fef4
		}
		int32_t v28 = v3 + 1; // 0x40030
		v3 = v28;
		v1 += 2;
		if (v28 >= 40) {
			// break -> 0x40044
			break;
		}
		v2++;
		// continue -> 0x3fee4
	}
	// 0x40044
	return result;
}

// Address range: 0x40048 - 0x40200
int32_t L2DirtFix(int32_t a1)
{
	int32_t v1 = 0;                          // r6
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x4004c
	// branch -> 0x40050
	int32_t result; // 0x401e0
	while (true) {
		int32_t v3 = 20; // ctr
		int32_t v4 = v2; // r3
		int32_t v5 = 0;  // r5
		int32_t v6 = v2; // 0x4007c
		// branch -> 0x40060
		while (true) {
			char *v7 = (char *)v6; // 0x40060
			int32_t v8 = v6;       // 0x4009c
			char *v9;              // 0x40080
			int32_t v10;           // 0x400bc
			if (*v7 == 13) {
				// 0x4006c
				if (*(char *)(v6 + 40) != 11) {
					// 0x40078
					*v7 = -110;
					v8 = v4;
					// branch -> 0x40080
				} else {
					v8 = v6;
				}
				// 0x40080
				v9 = (char *)v8;
				v10 = v8;
				if (*v9 == 11) {
				lab_0x4008c:
					// 0x4008c
					if (*(char *)(v8 + 40) != 11) {
						// 0x40098
						*v9 = -112;
						v10 = v4;
						// branch -> 0x400a0
					} else {
						v10 = v8;
					}
				}
			lab_0x400a0:;
				char *v11 = (char *)v10; // 0x400a0
				int32_t v12 = v10;       // 0x400dc
				if (*v11 == 15) {
					// 0x400ac
					if (*(char *)(v10 + 40) != 11) {
						// 0x400b8
						*v11 = -108;
						v12 = v4;
						// branch -> 0x400c0
					} else {
						v12 = v10;
					}
				}
				char *v13 = (char *)v12; // 0x400c0
				int32_t v14 = v12;       // 0x400fc
				if (*v13 == 10) {
					// 0x400cc
					if (*(char *)(v12 + 1) != 10) {
						// 0x400d8
						*v13 = -113;
						v14 = v4;
						// branch -> 0x400e0
					} else {
						v14 = v12;
					}
				}
				char *v15 = (char *)v14; // 0x400e0
				int32_t v16 = v14;       // 0x4011c
				if (*v15 == 13) {
					// 0x400ec
					if (*(char *)(v14 + 1) != 10) {
						// 0x400f8
						*v15 = -110;
						v16 = v4;
						// branch -> 0x40100
					} else {
						v16 = v14;
					}
				}
				char *v17 = (char *)v16; // 0x40100
				int32_t v18 = v16;       // 0x40120
				if (*v17 == 14) {
					// 0x4010c
					if (*(char *)(v16 + 1) != 15) {
						// 0x40118
						*v17 = -109;
						v18 = v4;
						// branch -> 0x40120
					} else {
						v18 = v16;
					}
				}
				int32_t v19 = v18 + 40;  // 0x40120
				char *v20 = (char *)v19; // 0x40120
				v4 = v19;
				int32_t v21 = v19; // 0x4015c
				if (*v20 == 13) {
					// 0x4012c
					if (*(char *)(v18 + 80) != 11) {
						// 0x40138
						*v20 = -110;
						v21 = v4;
						// branch -> 0x40140
					} else {
						v21 = v19;
					}
				}
				char *v22 = (char *)v21; // 0x40140
				int32_t v23 = v21;       // 0x4017c
				if (*v22 == 11) {
					// 0x4014c
					if (*(char *)(v21 + 40) != 11) {
						// 0x40158
						*v22 = -112;
						v23 = v4;
						// branch -> 0x40160
					} else {
						v23 = v21;
					}
				}
				char *v24 = (char *)v23; // 0x40160
				int32_t v25 = v23;       // 0x4019c
				if (*v24 == 15) {
					// 0x4016c
					if (*(char *)(v23 + 40) != 11) {
						// 0x40178
						*v24 = -108;
						v25 = v4;
						// branch -> 0x40180
					} else {
						v25 = v23;
					}
				}
				char *v26 = (char *)v25; // 0x40180
				int32_t v27 = v25;       // 0x401bc
				if (*v26 == 10) {
					// 0x4018c
					if (*(char *)(v25 + 1) != 10) {
						// 0x40198
						*v26 = -113;
						v27 = v4;
						// branch -> 0x401a0
					} else {
						v27 = v25;
					}
				}
				char *v28 = (char *)v27; // 0x401a0
				int32_t v29 = v27;       // 0x401dc
				if (*v28 == 13) {
					// 0x401ac
					if (*(char *)(v27 + 1) != 10) {
						// 0x401b8
						*v28 = -110;
						v29 = v4;
						// branch -> 0x401c0
					} else {
						v29 = v27;
					}
				}
				char *v30 = (char *)v29; // 0x401c0
				int32_t v31 = v29;       // 0x401e0
				if (*v30 == 14) {
					// 0x401cc
					if (*(char *)(v29 + 1) != 15) {
						// 0x401d8
						*v30 = -109;
						v31 = v4;
						// branch -> 0x401e0
					} else {
						v31 = v29;
					}
				}
				// 0x401e0
				result = v31 + 40;
				v4 = result;
				v5++;
				int32_t v32 = v3 - 1; // 0x401e8
				v3 = v32;
				if (v32 == 0) {
					// break -> 0x401ec
					break;
				}
				v6 = result;
				// continue -> 0x40060
				continue;
			}
			// 0x40080
			v9 = (char *)v8;
			if (*v9 == 11) {
				goto lab_0x4008c;
			}
			v10 = v8;
			goto lab_0x400a0;
		}
		int32_t v33 = v1 + 1; // 0x401ec
		v1 = v33;
		if (v33 >= 40) {
			// break -> 0x401fc
			break;
		}
		v2++;
		// continue -> 0x40050
	}
	// 0x401fc
	return result;
}

// Address range: 0x41088 - 0x4131c
int32_t DRLG_InitL2Vals(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7598); // r7
	int32_t v2 = 0;                          // r10
	int32_t v3 = *(int32_t *)(g23 - 0x757c); // r6
	int32_t v4 = 0;                          // r8
	int32_t v5 = 0;                          // 0x410b43
	                                         // branch -> 0x41098
lab_0x41098:
	while (true) {
		int32_t v6 = 0;   // r4
		int32_t v7 = 56;  // ctr
		int32_t v8 = 0;   // r5
		int32_t v9 = 0;   // r9
		int32_t v10 = 0;  // 0x4112c
		int32_t v11 = v5; // 0x410b4
		int32_t v12 = 0;  // 0x410b0
		// branch -> 0x410ac
		while (true) {
			int16_t v13 = *(int16_t *)(*(int32_t *)v3 + v12 + v11); // 0x410b4
			int32_t v14;                                            // 0x41128
			int32_t v15;                                            // 0x41138
			int32_t v16;                                            // 0x4113c
			int32_t v17;                                            // 0x41144
			int32_t v18;                                            // 0x41124
			if (v13 == 541) {
				// 0x410c0
				v14 = 5;
				// branch -> 0x41124
			} else {
				// 0x410c8
				if (v13 == 178) {
					// 0x410d0
					v14 = 5;
					// branch -> 0x41124
				} else {
					// 0x410d8
					if (v13 == 551) {
						// 0x410e0
						v14 = 5;
						// branch -> 0x41124
					} else {
						// 0x410e8
						if (v13 == 542) {
							// 0x410f0
							v14 = 6;
							// branch -> 0x41124
						} else {
							// 0x410f8
							if (v13 == 553) {
								// 0x41100
								v14 = 6;
								// branch -> 0x41124
							} else {
								// 0x41108
								if (v13 == 13) {
									// 0x41110
									v14 = 5;
									// branch -> 0x41124
								lab_0x41124:
									// 0x41124
									v18 = *(int32_t *)v1;
									g34 = v14;
									*(char *)(v2 + v18 + v10) = (char)v14;
									v17 = v4;
									v16 = v8;
									v15 = v6;
									// branch -> 0x41134
								} else {
									// 0x41118
									if (v13 == 17) {
										// 0x41120
										v14 = 6;
										// branch -> 0x41124
										goto lab_0x41124;
									} else {
										v17 = v11;
										v16 = v10;
										v15 = v12;
									}
								}
							lab_0x41134_5:;
								int32_t v19 = v15 + 224; // 0x41138
								v6 = v19;
								int32_t v20 = v16 + 112; // 0x4113c
								v8 = v20;
								int16_t v21 = *(int16_t *)(*(int32_t *)v3 + v19 + v17); // 0x41144
								int32_t v22;                                            // 0x411b8
								int32_t v23;                                            // 0x411c4
								int32_t v24;                                            // 0x411c8
								int32_t v25;                                            // 0x411b4
								if (v21 == 541) {
									// 0x41150
									v22 = 5;
									// branch -> 0x411b4
								} else {
									// 0x41158
									if (v21 == 178) {
										// 0x41160
										v22 = 5;
										// branch -> 0x411b4
									} else {
										// 0x41168
										if (v21 == 551) {
											// 0x41170
											v22 = 5;
											// branch -> 0x411b4
										} else {
											// 0x41178
											if (v21 == 542) {
												// 0x41180
												v22 = 6;
												// branch -> 0x411b4
											} else {
												// 0x41188
												if (v21 == 553) {
													// 0x41190
													v22 = 6;
													// branch -> 0x411b4
												} else {
													// 0x41198
													if (v21 == 13) {
														// 0x411a0
														v22 = 5;
														// branch -> 0x411b4
													lab_0x411b4:
														// 0x411b4
														v25 = *(int32_t *)v1;
														g34 = v22;
														*(char *)(v2 + v25 + v20) = (char)v22;
														v24 = v8;
														v23 = v6;
														// branch -> 0x411c4
													} else {
														// 0x411a8
														if (v21 == 17) {
															// 0x411b0
															v22 = 6;
															// branch -> 0x411b4
															goto lab_0x411b4;
														} else {
															v24 = v20;
															v23 = v19;
														}
													}
												lab_0x411c4_5:;
													int32_t v26 = v23 + 224; // 0x411c4
													v6 = v26;
													int32_t v27 = v24 + 112; // 0x411c8
													v8 = v27;
													v9++;
													int32_t v28 = v7 - 1; // 0x411d0
													v7 = v28;
													if (v28 == 0) {
														int32_t v29 = v2 + 1; // 0x411d4
														v2 = v29;
														int32_t v30 = v4 + 2; // 0x411d8
														v4 = v30;
														if (v29 >= 112) {
															// break (via goto) -> 0x411e4
															goto lab_0x411e4;
														}
														v5 = v30;
														// continue (via goto) -> 0x41098
														goto lab_0x41098;
													} else {
														// 0x411c4
														v10 = v27;
														v11 = v4;
														v12 = v26;
														// branch -> 0x410ac
														continue;
													}
												}
												// 0x411b4
												v25 = *(int32_t *)v1;
												g34 = v22;
												*(char *)(v2 + v25 + v20) = (char)v22;
												v24 = v8;
												v23 = v6;
												// branch -> 0x411c4
												goto lab_0x411c4_5;
											}
											// 0x411b4
											v25 = *(int32_t *)v1;
											g34 = v22;
											*(char *)(v2 + v25 + v20) = (char)v22;
											v24 = v8;
											v23 = v6;
											// branch -> 0x411c4
											goto lab_0x411c4_5;
										}
										// 0x411b4
										v25 = *(int32_t *)v1;
										g34 = v22;
										*(char *)(v2 + v25 + v20) = (char)v22;
										v24 = v8;
										v23 = v6;
										// branch -> 0x411c4
										goto lab_0x411c4_5;
									}
									// 0x411b4
									v25 = *(int32_t *)v1;
									g34 = v22;
									*(char *)(v2 + v25 + v20) = (char)v22;
									v24 = v8;
									v23 = v6;
									// branch -> 0x411c4
									goto lab_0x411c4_5;
								}
								// 0x411b4
								v25 = *(int32_t *)v1;
								g34 = v22;
								*(char *)(v2 + v25 + v20) = (char)v22;
								v24 = v8;
								v23 = v6;
								// branch -> 0x411c4
								goto lab_0x411c4_5;
							}
							// 0x41124
							v18 = *(int32_t *)v1;
							g34 = v14;
							*(char *)(v2 + v18 + v10) = (char)v14;
							v17 = v4;
							v16 = v8;
							v15 = v6;
							// branch -> 0x41134
							goto lab_0x41134_5;
						}
						// 0x41124
						v18 = *(int32_t *)v1;
						g34 = v14;
						*(char *)(v2 + v18 + v10) = (char)v14;
						v17 = v4;
						v16 = v8;
						v15 = v6;
						// branch -> 0x41134
						goto lab_0x41134_5;
					}
					// 0x41124
					v18 = *(int32_t *)v1;
					g34 = v14;
					*(char *)(v2 + v18 + v10) = (char)v14;
					v17 = v4;
					v16 = v8;
					v15 = v6;
					// branch -> 0x41134
					goto lab_0x41134_5;
				}
				// 0x41124
				v18 = *(int32_t *)v1;
				g34 = v14;
				*(char *)(v2 + v18 + v10) = (char)v14;
				v17 = v4;
				v16 = v8;
				v15 = v6;
				// branch -> 0x41134
				goto lab_0x41134_5;
			}
			// 0x41124
			v18 = *(int32_t *)v1;
			g34 = v14;
			*(char *)(v2 + v18 + v10) = (char)v14;
			v17 = v4;
			v16 = v8;
			v15 = v6;
			// branch -> 0x41134
			goto lab_0x41134_5;
		}
	lab_0x411e4:;
		int32_t v31 = 0; // r11
		v2 = 0;
		int32_t v32 = 0; // 0x4120815
		                 // branch -> 0x411ec
	lab_0x411ec:
		while (true) {
			int32_t v33 = 0; // r12
			v7 = 56;
			v4 = 0;
			v9 = 0;
			int32_t v34 = 0;   // 0x41220
			int32_t v35 = v32; // 0x41208
			int32_t v36 = 0;   // 0x41204
			// branch -> 0x41200
			while (true) {
				int16_t v37 = *(int16_t *)(*(int32_t *)v3 + v36 + v35); // 0x41208
				int32_t v38;                                            // 0x4127c
				int32_t v39;                                            // 0x41280
				int32_t v40;                                            // 0x41278
				int16_t v41;                                            // 0x41288
				if (v37 == 132) {
					int32_t v42 = *(int32_t *)v1; // 0x41214
					*(char *)(v31 + v42 + v34 + 1) = 2;
					int32_t v43 = v9 + *(int32_t *)v1; // 0x41230
					g34 = v43;
					*(char *)(v31 + v43 + 2) = (char)1;
					// branch -> 0x41278
				} else {
					// 0x41240
					if (v37 != 135) {
						// 0x41248
						if (v37 != 139) {
						lab_0x41278:
							// 0x41278
							v40 = *(int32_t *)v3;
							v38 = v4 + 224;
							v4 = v38;
							v39 = v9 + 112;
							v9 = v39;
							v41 = *(int16_t *)(v2 + v38 + v40);
							int32_t v44; // 0x412f8
							int32_t v45; // 0x412fc
							int32_t v46; // 0x41304
							if (v41 == 132) {
							lab_0x41294:;
								int32_t v47 = *(int32_t *)v1; // 0x41294
								*(char *)(v31 + v47 + v39 + 1) = 2;
								int32_t v48 = v9 + *(int32_t *)v1; // 0x412b0
								g34 = v48;
								*(char *)(v31 + v48 + 2) = (char)1;
								// branch -> 0x412f8
							} else {
							lab_0x412c0:
								// 0x412c0
								if (v41 != 135) {
									// 0x412c8
									if (v41 != 139) {
									lab_0x412f8:
										// 0x412f8
										v44 = v4 + 224;
										v4 = v44;
										v45 = v9 + 112;
										v9 = v45;
										v33++;
										v46 = v7 - 1;
										v7 = v46;
										if (v46 == 0) {
										lab_0x41308:;
											int32_t v49 = v31 + 1; // 0x41308
											v31 = v49;
											int32_t v50 = v2 + 2; // 0x4130c
											v2 = v50;
											if (v49 >= 112) {
												// break (via goto) -> 0x41318
												goto lab_0x41318;
											}
											v32 = v50;
											// continue (via goto) -> 0x411ec
											goto lab_0x411ec;
										} else {
										lab_0x412f8_2:
											// 0x412f8
											v34 = v45;
											v35 = v2;
											v36 = v44;
											// branch -> 0x41200
											continue;
										}
									}
								}
								int32_t v51 = *(int32_t *)v1; // 0x412d0
								*(char *)(v31 + v51 + v39 + 112) = 3;
								int32_t v52 = v9 + *(int32_t *)v1; // 0x412ec
								g34 = v52;
								*(char *)(v31 + v52 + 224) = (char)4;
								// branch -> 0x412f8
								goto lab_0x412f8;
							}
							// 0x412f8
							v44 = v4 + 224;
							v4 = v44;
							v45 = v9 + 112;
							v9 = v45;
							v33++;
							v46 = v7 - 1;
							v7 = v46;
							if (v46 == 0) {
								goto lab_0x41308;
							}
							goto lab_0x412f8_2;
						}
					}
					int32_t v53 = *(int32_t *)v1; // 0x41250
					*(char *)(v31 + v53 + v34 + 112) = 3;
					int32_t v54 = v9 + *(int32_t *)v1; // 0x4126c
					g34 = v54;
					*(char *)(v31 + v54 + 224) = (char)4;
					// branch -> 0x41278
					goto lab_0x41278;
				}
				// 0x41278
				v40 = *(int32_t *)v3;
				v38 = v4 + 224;
				v4 = v38;
				v39 = v9 + 112;
				v9 = v39;
				v41 = *(int16_t *)(v2 + v38 + v40);
				if (v41 == 132) {
					goto lab_0x41294;
				}
				goto lab_0x412c0;
			}
		lab_0x41318:
			// 0x41318
			return g34;
		}
	}
}
