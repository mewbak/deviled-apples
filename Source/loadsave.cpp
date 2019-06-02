
// Address range: 0x64c88 - 0x64c9c
int32_t BLoad(void)
{
	int32_t *v1 = (int32_t *)(g23 - 0x4df8); // 0x64c88
	int32_t v2 = *v1;                        // 0x64c88
	*v1 = v2 + 1;
	return (int32_t) * (char *)v2;
}

// Address range: 0x64c9c - 0x64cf8
int32_t WLoad(void)
{
	int32_t *v1 = (int32_t *)(g23 - 0x4df8); // 0x64c9c
	int32_t v2 = *v1;                        // 0x64c9c
	*v1 = v2 + 1;
	int32_t *v3 = (int32_t *)(g23 - 0x4df8); // 0x64ca8
	*v3 = *v3 + 1;
	int32_t *v4 = (int32_t *)(g23 - 0x4df8); // 0x64cb8
	int32_t v5 = *v4;                        // 0x64cb8
	*v4 = v5 + 1;
	int32_t v6 = __asm_rlwimi((int32_t) * (char *)v2, 24, 0, 7); // r3
	int32_t *v7 = (int32_t *)(g23 - 0x4df8);                     // 0x64cd4
	int32_t v8 = *v7;                                            // 0x64cd4
	*v7 = v8 + 1;
	int32_t v9 = v6 | 256 * (int32_t) * (char *)v5; // 0x64ce8
	return (int32_t) * (char *)v8 | v9;
}

// Address range: 0x64cf8 - 0x64d54
int32_t ILoad(int32_t a1)
{
	int32_t *v1 = (int32_t *)(g23 - 0x4df8); // 0x64cf8
	int32_t v2 = *v1;                        // 0x64cf8
	*v1 = v2 + 1;
	int32_t *v3 = (int32_t *)(g23 - 0x4df8); // 0x64d04
	*v3 = *v3 + 1;
	int32_t *v4 = (int32_t *)(g23 - 0x4df8); // 0x64d14
	int32_t v5 = *v4;                        // 0x64d14
	*v4 = v5 + 1;
	int32_t v6 = __asm_rlwimi((int32_t) * (char *)v2, 24, 0, 7); // r3
	int32_t *v7 = (int32_t *)(g23 - 0x4df8);                     // 0x64d30
	int32_t v8 = *v7;                                            // 0x64d30
	g37 = v8;
	*v7 = v8 + 1;
	int32_t v9 = v6 | 256 * (int32_t) * (char *)v5; // 0x64d44
	return (int32_t) * (char *)g37 | v9;
}

// Address range: 0x64d54 - 0x64d7c
int32_t OLoad(void)
{
	int32_t *v1 = (int32_t *)(g23 - 0x4df8); // 0x64d54
	int32_t v2 = *v1;                        // 0x64d54
	*v1 = v2 + 1;
	if (*(char *)v2 == 1) {
		// 0x64d6c
		return 1;
	}
	// 0x64d74
	return 0;
}

// Address range: 0x64d7c - 0x64dc0
int32_t function_64d7c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1;                // 0x64d90
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);                              // bp-8
	int32_t result = function_66e5c((int32_t *)v1, (int32_t)&v2, 0x54b0); // 0x64da4
	*(int32_t *)(g23 - 0x4df8) = v2;
	return result;
}

// Address range: 0x64dc0 - 0x64e18
int32_t function_64dc0(int32_t a1)
{
	int32_t v1 = g36; // 0x64dc0
	g36 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x64dcc
	int32_t v3 = *(int32_t *)(g23 - 0x4df8); // bp-24
	function_686f8((int32_t *)(v2 + 232 * a1), (int32_t)&v3, 216);
	*(int32_t *)(g23 - 0x4df8) = v3;
	int32_t result = function_85d08(g36); // 0x64e00
	g36 = v1;
	return result;
}

// Address range: 0x64e18 - 0x64e5c
int32_t function_64e18(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1;                // 0x64e2c
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);                           // bp-8
	int32_t result = function_68db8((int32_t *)v1, (int32_t)&v2, 176); // 0x64e40
	*(int32_t *)(g23 - 0x4df8) = v2;
	return result;
}

// Address range: 0x64e5c - 0x64ea0
int32_t function_64e5c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688) + 120 * a1;                // 0x64e70
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);                           // bp-8
	int32_t result = function_691dc((int32_t *)v1, (int32_t)&v2, 120); // 0x64e84
	*(int32_t *)(g23 - 0x4df8) = v2;
	return result;
}

// Address range: 0x64ea0 - 0x64efc
int32_t function_64ea0(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7690) + 368 * a1; // 0x64ec0
	g34 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x4df8); // bp-24
	function_68008((char *)v1, (int32_t)&v2, 368, 1);
	*(int32_t *)(g23 - 0x4df8) = v2;
	return function_60f8c(a1);
}

// Address range: 0x64efc - 0x64f44
int32_t function_64efc(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x71a8) + 368 * a1; // 0x64f14
	g34 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);                           // bp-8
	int32_t result = function_68008((char *)v1, (int32_t)&v2, 368, 1); // 0x64f28
	*(int32_t *)(g23 - 0x4df8) = v2;
	return result;
}

// Address range: 0x64f44 - 0x64fc4
int32_t LoadQuest(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7604) + 24 * a1; // 0x64f58
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);           // bp-8
	function_694bc((char *)v1, (int32_t)&v2, 24);
	*(int32_t *)(g23 - 0x4df8) = v2;
	*(int32_t *)*(int32_t *)(g23 - 0x7130) = WLoad();
	*(int32_t *)*(int32_t *)(g23 - 0x7134) = WLoad();
	*(int32_t *)*(int32_t *)(g23 - 0x7138) = WLoad();
	*(int32_t *)*(int32_t *)(g23 - 0x713c) = WLoad();
	int32_t result = WLoad(); // 0x64fa8
	*(int32_t *)*(int32_t *)(g23 - 0x755c) = result;
	return result;
}

// Address range: 0x64fc4 - 0x65008
int32_t function_64fc4(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7140) + 52 * a1;                // 0x64fd8
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);                          // bp-8
	int32_t result = function_695ec((int32_t *)v1, (int32_t)&v2, 52); // 0x64fec
	*(int32_t *)(g23 - 0x4df8) = v2;
	return result;
}

// Address range: 0x65008 - 0x6504c
int32_t function_65008(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7144) + 52 * a1;                // 0x6501c
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);                          // bp-8
	int32_t result = function_695ec((int32_t *)v1, (int32_t)&v2, 52); // 0x65030
	*(int32_t *)(g23 - 0x4df8) = v2;
	return result;
}

// Address range: 0x6504c - 0x65090
int32_t function_6504c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7148) + 24 * a1;                // 0x65060
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);                          // bp-8
	int32_t result = function_69728((int32_t *)v1, (int32_t)&v2, 24); // 0x65074
	*(int32_t *)(g23 - 0x4df8) = v2;
	return result;
}

// Address range: 0x65090 - 0x65848
int32_t LoadGame(int32_t a1)
{
	int32_t v1 = g10; // 0x65094
	g24 = *(int32_t *)(g23 - 0x7594);
	g25 = *(int32_t *)(g23 - 0x7590);
	g32 = *(int32_t *)(g23 - 0x758c);
	g17 = *(int32_t *)(g23 - 0x7164);
	g21 = *(int32_t *)(g23 - 0x7194);
	g19 = *(int32_t *)(g23 - 0x7668);
	g20 = *(int32_t *)(g23 - 0x762c);
	pfile_remove_temp_files(FreeGameMem());
	int32_t v2;       // bp-376
	int32_t v3 = &v2; // 0x650ec
	pfile_get_game_name(v3);
	int32_t v4;                           // bp-116
	int32_t v5 = pfile_read(v3, &v4); // 0x650fc
	*(int32_t *)(g23 - 0x4df8) = v5;
	if (ILoad(v5) != 0x5245544c) {
		// 0x6511c
		app_fatal(*(int32_t *)(g23 - 0x5f68));
		// branch -> 0x65124
	}
	// 0x65124
	*(char *)*(int32_t *)(g23 - 0x77d8) = (char)OLoad();
	*(char *)*(int32_t *)(g23 - 0x77e0) = (char)WLoad();
	*(char *)*(int32_t *)(g23 - 0x77e4) = (char)WLoad();
	*(char *)*(int32_t *)(g23 - 0x7794) = (char)WLoad();
	int32_t v6 = WLoad(); // 0x65154
	int32_t v7 = WLoad(); // 0x6515c
	*(int32_t *)*(int32_t *)(g23 - 0x77bc) = OLoad();
	*(int32_t *)*(int32_t *)(g23 - 0x77c4) = OLoad();
	int32_t v8 = WLoad();  // 0x6517c
	int32_t v9 = WLoad();  // 0x65184
	int32_t v10 = WLoad(); // 0x6518c
	int32_t v11 = WLoad(); // 0x65194
	g36 = *(int32_t *)(g23 - 0x75ec);
	int32_t v12 = 0; // r29
	g35 = *(int32_t *)(g23 - 0x71f8);
	int32_t v13 = v11; // 0x651a8
	// branch -> 0x651a8
	while (true) {
		// 0x651a8
		*(int32_t *)g36 = ILoad(v13);
		int32_t v14 = WLoad(); // 0x651b0
		v12++;
		*(int32_t *)g35 = v14;
		g36 += 4;
		g35 += 4;
		if (v12 < 17) {
			// 0x651a8
			v13 = v14;
			// branch -> 0x651a8
			continue;
		} else {
			// 0x651cc
			function_64d7c(*(int32_t *)*(int32_t *)(g23 - 0x77ac));
			LoadQuest(0);
			int32_t v15 = 1; // 0x651e4
			// branch -> 0x651dc
			while (v15 < 16) {
				// 0x651dc
				LoadQuest(v15);
				v15++;
				// continue -> 0x651dc
			}
			// 0x651f0
			function_6504c(0);
			int32_t v16 = 1; // 0x651fc
			// branch -> 0x651f4
			while (v16 < 4) {
				// 0x651f4
				function_6504c(v16);
				v16++;
				// continue -> 0x651f4
			}
			// 0x65208
			LoadGameLevel(a1, 4);
			SyncInitPlr(*(int32_t *)*(int32_t *)(g23 - 0x77ac));
			function_aa4b4(*(int32_t *)*(int32_t *)(g23 - 0x77ac));
			int32_t v17 = *(int32_t *)(g23 - 0x77b0); // 0x6522c
			v12 = 0;
			*(int32_t *)v17 = v6;
			int32_t v18 = *(int32_t *)(g23 - 0x714c); // r30
			*(int32_t *)*(int32_t *)(g23 - 0x77b4) = v7;
			*(int32_t *)g20 = v8;
			*(int32_t *)g16 = v9;
			*(int32_t *)g19 = v10;
			*(int32_t *)g21 = v11;
			int32_t v19 = ILoad(v17); // 0x6526c
			v12++;
			*(int32_t *)v18 = v19;
			v18 += 4;
			// branch -> 0x6526c
			while (v12 < 200) {
				// 0x6526c
				v19 = ILoad(v19);
				v12++;
				*(int32_t *)v18 = v19;
				v18 += 4;
				// continue -> 0x6526c
			}
			// 0x65284
			int32_t v20; // r31
			int32_t v21; // 0x6548c
			int32_t v22; // 0x654b0
			int32_t v23; // 0x654d0
			int32_t v24; // 0x65500
			int32_t v25; // 0x65504
			int32_t v26; // 0x65490
			int32_t v27; // 0x654b4
			int32_t v28; // 0x654e8
			int32_t v29; // 0x654ec
			int32_t v30; // 0x654d0
			if (*(char *)*(int32_t *)(g23 - 0x7794) != 0) {
				// 0x65294
				v12 = 0;
				v18 = *(int32_t *)(g23 - 0x7628);
				int32_t v31 = WLoad(); // 0x6529c
				v12++;
				*(int32_t *)v18 = v31;
				v18 += 4;
				// branch -> 0x6529c
				while (v12 < 200) {
					// 0x6529c
					v31 = WLoad();
					v12++;
					*(int32_t *)v18 = v31;
					v18 += 4;
					// continue -> 0x6529c
				}
				// 0x652b4
				g33 = 0;
				int32_t v32 = *(int32_t *)(g23 - 0x7628); // 0x652b8
				g35 = v32;
				if (*(int32_t *)g20 > 0) {
					function_64dc0(*(int32_t *)v32);
					int32_t v33 = g35 + 4; // 0x652d0
					g35 = v33;
					int32_t v34 = g33 + 1; // 0x652d4
					g33 = v34;
					while (v34 < *(int32_t *)g20) {
						// 0x652c8
						function_64dc0(*(int32_t *)v33);
						v33 = g35 + 4;
						g35 = v33;
						v34 = g33 + 1;
						g33 = v34;
						// continue -> 0x652c8
					}
					// 0x652d8
					// branch -> 0x652e4
				}
				// 0x652e4
				v18 = *(int32_t *)(g23 - 0x7660);
				int32_t v35 = BLoad(); // 0x652ec
				int32_t v36 = 1;                // 0x652f0
				*(int32_t *)v18 = 0x1000000 * v35 / 0x1000000;
				v18 += 4;
				// branch -> 0x652ec
				while (v36 < 125) {
					// 0x652ec
					v35 = BLoad();
					v36++;
					*(int32_t *)v18 = 0x1000000 * v35 / 0x1000000;
					v18 += 4;
					// continue -> 0x652ec
				}
				// 0x65308
				v18 = *(int32_t *)(g23 - 0x7150);
				int32_t v37 = BLoad(); // 0x65310
				int32_t v38 = 1;                // 0x65314
				*(int32_t *)v18 = 0x1000000 * v37 / 0x1000000;
				v18 += 4;
				// branch -> 0x65310
				while (v38 < 125) {
					// 0x65310
					v37 = BLoad();
					v38++;
					*(int32_t *)v18 = 0x1000000 * v37 / 0x1000000;
					v18 += 4;
					// continue -> 0x65310
				}
				int32_t v39 = *(int32_t *)(g23 - 0x7660); // 0x65330
				if (*(int32_t *)g19 > 0) {
					function_64e18(*(int32_t *)v39);
					int32_t v40 = v39 + 4; // 0x65348
					int32_t v41 = 1;       // 0x6534c
					while (v41 < *(int32_t *)g19) {
						// 0x65340
						function_64e18(*(int32_t *)v40);
						v40 += 4;
						v41++;
						// continue -> 0x65340
					}
					// 0x65350
					// branch -> 0x6535c
				}
				// 0x6535c
				v18 = *(int32_t *)(g23 - 0x7190);
				int32_t v42 = BLoad(); // 0x65364
				int32_t v43 = 1;                // 0x65368
				*(int32_t *)v18 = 0x1000000 * v42 / 0x1000000;
				v18 += 4;
				// branch -> 0x65364
				while (v43 < 127) {
					// 0x65364
					v42 = BLoad();
					v43++;
					*(int32_t *)v18 = 0x1000000 * v42 / 0x1000000;
					v18 += 4;
					// continue -> 0x65364
				}
				// 0x65380
				v18 = *(int32_t *)(g23 - 0x7154);
				int32_t v44 = BLoad(); // 0x65388
				int32_t v45 = 1;                // 0x6538c
				*(int32_t *)v18 = 0x1000000 * v44 / 0x1000000;
				v18 += 4;
				// branch -> 0x65388
				while (v45 < 127) {
					// 0x65388
					v44 = BLoad();
					v45++;
					*(int32_t *)v18 = 0x1000000 * v44 / 0x1000000;
					v18 += 4;
					// continue -> 0x65388
				}
				int32_t v46 = *(int32_t *)(g23 - 0x7190); // 0x653a8
				int32_t v47 = g21;                        // 0x653c828
				int32_t v48 = v47;                        // 0x653f821
				if (*(int32_t *)v47 > 0) {
					function_64e5c(*(int32_t *)v46);
					int32_t v49 = v46 + 4; // 0x653c0
					int32_t v50 = 1;       // 0x653c4
					int32_t v51 = g21;     // 0x653c8
					while (v50 < *(int32_t *)v51) {
						// 0x653b8
						function_64e5c(*(int32_t *)v49);
						v49 += 4;
						v50++;
						v51 = g21;
						// continue -> 0x653b8
					}
					// 0x653c8
					v48 = v51;
					// branch -> 0x653d4
				}
				// 0x653d4
				g33 = 0;
				int32_t v52 = *(int32_t *)(g23 - 0x7190); // 0x653d8
				g35 = v52;
				int32_t v53; // 0x65414
				int32_t v54; // 0x6543c
				int32_t v55; // 0x65440
				int32_t v56; // 0x65474
				if (*(int32_t *)v48 > 0) {
					function_9d6e4(*(int32_t *)v52);
					int32_t v57 = g35 + 4; // 0x653f0
					g35 = v57;
					int32_t v58 = g33 + 1; // 0x653f4
					g33 = v58;
					while (v58 < *(int32_t *)g21) {
						// 0x653e8
						function_9d6e4(*(int32_t *)v57);
						v57 = g35 + 4;
						g35 = v57;
						v58 = g33 + 1;
						g33 = v58;
						// continue -> 0x653e8
					}
					// 0x65404
					*(int32_t *)g18 = WLoad();
					v18 = g22;
					v12 = 0;
					v53 = BLoad();
					v12++;
					*(char *)v18 = (char)v53;
					v18++;
					// branch -> 0x65414
					while (v12 < 32) {
						// 0x65414
						v53 = BLoad();
						v12++;
						*(char *)v18 = (char)v53;
						v18++;
						// continue -> 0x65414
					}
					// 0x65444
					if (*(int32_t *)g18 > 0) {
						// 0x65434
						function_64fc4((int32_t) * (char *)g22);
						v54 = g22 + 1;
						g22 = v54;
						v55 = 1;
						// branch -> 0x65434
						while (v55 < *(int32_t *)g18) {
							// 0x65434
							function_64fc4((int32_t) * (char *)v54);
							v54 = g22 + 1;
							g22 = v54;
							v55++;
							// continue -> 0x65434
						}
						// 0x65450
						*(int32_t *)*(int32_t *)(g23 - 0x7160) = WLoad();
						*(int32_t *)g17 = WLoad();
						if (*(int32_t *)g17 > 0) {
							function_65008(0);
							v56 = 1;
							while (v56 < *(int32_t *)g17) {
								// 0x6546c
								function_65008(v56);
								v56++;
								// continue -> 0x6546c
							}
							// 0x65484
							// branch -> 0x65484
							// 0x65484
							v18 = *(int32_t *)(g23 - 0x71e0);
							v21 = BLoad();
							v26 = 1;
							*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
							v18 += 4;
							// branch -> 0x6548c
							while (v26 < 127) {
								// 0x6548c
								v21 = BLoad();
								v26++;
								*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
								v18 += 4;
								// continue -> 0x6548c
							}
							// 0x654a8
							v18 = *(int32_t *)(g23 - 0x71f4);
							v22 = BLoad();
							v27 = 1;
							*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
							v18 += 4;
							// branch -> 0x654b0
							while (v27 < 127) {
								// 0x654b0
								v22 = BLoad();
								v27++;
								*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
								v18 += 4;
								// continue -> 0x654b0
							}
							// 0x654cc
							v23 = g23;
							v30 = *(int32_t *)(v23 - 0x71e0);
							v24 = v23;
							if (*(int32_t *)g16 > 0) {
								function_64ea0(*(int32_t *)v30);
								v28 = v30 + 4;
								v29 = 1;
								while (v29 < *(int32_t *)g16) {
									// 0x654e0
									function_64ea0(*(int32_t *)v28);
									v28 += 4;
									v29++;
									// continue -> 0x654e0
								}
								// 0x654f0
								v24 = g23;
								// branch -> 0x654fc
							}
							// 0x654fc
							v12 = 0;
							v18 = *(int32_t *)(v24 - 0x7170);
							v25 = OLoad();
							v12++;
							*(int32_t *)v18 = v25;
							v18 += 4;
							// branch -> 0x65504
							while (v12 < 128) {
								// 0x65504
								v25 = OLoad();
								v12++;
								*(int32_t *)v18 = v25;
								v18 += 4;
								// continue -> 0x65504
							}
							// 0x6551c
							v12 = 0;
							// branch -> 0x65520
							while (true) {
								// 0x65520
								v20 = 0;
								v18 = 0;
								// branch -> 0x65528
							lab_0x65528_7:
								while (true) {
									int32_t v59 = BLoad(); // 0x65528
									int32_t v60 = v20 + 1;          // 0x65530
									v20 = v60;
									int32_t v61 = v18;                   // 0x65538
									int32_t v62 = v61 + *(int32_t *)g32; // 0x65538
									v18 = v61 + 112;
									*(char *)(v12 + v62) = (char)v59;
									if (v60 >= 112) {
										// break -> 0x65548
										break;
									}
									// continue -> 0x65528
								}
								int32_t v63 = v12 + 1; // 0x65548
								v12 = v63;
								if (v63 >= 112) {
									// break -> 0x65554
									break;
								}
								// continue -> 0x65520
							}
							// 0x65554
							v12 = 0;
							// branch -> 0x65558
							while (true) {
								int32_t v64 = BLoad();      // 0x65560
								int32_t v65 = 1;                     // 0x65568
								int32_t v66 = 0;                     // 0x65570
								int32_t v67 = v66 + *(int32_t *)g31; // 0x65570
								*(char *)(v12 + v67) = (char)v64;
								// branch -> 0x65560
								while (v65 < 112) {
									// 0x65560
									v64 = BLoad();
									v65++;
									v66 += 112;
									v67 = v66 + *(int32_t *)g31;
									*(char *)(v12 + v67) = (char)v64;
									// continue -> 0x65560
								}
								int32_t v68 = v12 + 1; // 0x65580
								v12 = v68;
								if (v68 >= 112) {
									// break -> 0x6558c
									break;
								}
								// continue -> 0x65558
							}
							// 0x6558c
							v12 = 0;
							// branch -> 0x65590
							while (true) {
								int32_t v69 = BLoad();      // 0x65598
								int32_t v70 = 1;                     // 0x655a0
								int32_t v71 = 0;                     // 0x655a8
								int32_t v72 = v71 + *(int32_t *)g30; // 0x655a8
								*(char *)(v12 + v72) = (char)v69;
								// branch -> 0x65598
								while (v70 < 112) {
									// 0x65598
									v69 = BLoad();
									v70++;
									v71 += 112;
									v72 = v71 + *(int32_t *)g30;
									*(char *)(v12 + v72) = (char)v69;
									// continue -> 0x65598
								}
								int32_t v73 = v12 + 1; // 0x655b8
								v12 = v73;
								if (v73 >= 112) {
									// break -> 0x655c4
									break;
								}
								// continue -> 0x65590
							}
							// 0x655c4
							v12 = 0;
							// branch -> 0x655c8
							while (true) {
								// 0x655c8
								g36 = 0;
								g35 = 0;
								int32_t v74 = BLoad(); // 0x655d0
								int32_t v75 = g36 + 1;          // 0x655d8
								g36 = v75;
								int32_t v76 = g35;                   // 0x655e0
								int32_t v77 = v76 + *(int32_t *)g29; // 0x655e0
								g35 = v76 + 112;
								*(char *)(v12 + v77) = (char)v74;
								// branch -> 0x655d0
								while (v75 < 112) {
									// 0x655d0
									v74 = BLoad();
									v75 = g36 + 1;
									g36 = v75;
									v76 = g35;
									v77 = v76 + *(int32_t *)g29;
									g35 = v76 + 112;
									*(char *)(v12 + v77) = (char)v74;
									// continue -> 0x655d0
								}
								int32_t v78 = v12 + 1; // 0x655f0
								v12 = v78;
								if (v78 >= 112) {
									// break -> 0x655fc
									break;
								}
								// continue -> 0x655c8
							}
							// 0x655fc
							int32_t v79;    // r28
							int32_t v80;    // 0x657ac
							int32_t v81;    // 0x657f0
							int32_t v82;    // 0x65810
							int32_t v83;    // 0x657c4
							int32_t v84;    // 0x65814
							int32_t v85;    // 0x65818
							int32_t v86;    // 0x657fc
							int32_t result; // 0x65828
							if (*(char *)*(int32_t *)(g23 - 0x7794) == 0) {
								// 0x657a0
								*(int32_t *)*(int32_t *)(g23 - 0x71ac) = WLoad();
								v80 = WLoad();
								v79 = 0;
								*(int32_t *)*(int32_t *)(g23 - 0x71b4) = v80;
								function_64efc(v79);
								v83 = v79 + 1;
								// branch -> 0x657bc
								while (v83 < 6) {
									// 0x657bc
									function_64efc(v83);
									v83++;
									// continue -> 0x657bc
								}
								// 0x657d0
								*(int32_t *)*(int32_t *)(g23 - 0x7778) = OLoad();
								*(int32_t *)*(int32_t *)(g23 - 0x777c) = WLoad();
								g34 = v5;
								v81 = mem_free_dbg();
								AutomapZoomReset(v81);
								ResyncQuests();
								v86 = *(int32_t *)(g23 - 0x7794);
								g34 = v86;
								if (*(char *)v86 != 0) {
									// 0x6580c
									g34 = ProcessLightList();
									// branch -> 0x65810
								}
								// 0x65810
								v82 = function_97630();
								g34 = v82;
								v84 = ProcessVisionList(v82);
								v85 = function_7911c(v84);
								ResetPal(v85);
								g34 = 1;
								SetCursor_();
								result = *(int32_t *)(g23 - 0x75a8);
								*(int32_t *)result = 1;
								g10 = v1;
								return result;
							}
							int32_t v87 = 0; // r27
							v12 = 0;
							// branch -> 0x65614
							while (true) {
								int32_t v88 = WLoad();      // 0x6561c
								int32_t v89 = 1;                     // 0x65624
								int32_t v90 = 0;                     // 0x6562c
								int32_t v91 = v90 + *(int32_t *)g28; // 0x6562c
								*(int16_t *)(v12 + v91) = (int16_t)(0x10000 * v88 / 0x10000);
								// branch -> 0x6561c
								while (v89 < 112) {
									// 0x6561c
									v88 = WLoad();
									v89++;
									v90 += 224;
									v91 = v90 + *(int32_t *)g28;
									*(int16_t *)(v12 + v91) = (int16_t)(0x10000 * v88 / 0x10000);
									// continue -> 0x6561c
								}
								int32_t v92 = v87 + 1; // 0x65640
								v87 = v92;
								v12 += 2;
								if (v92 >= 112) {
									// break -> 0x65650
									break;
								}
								// continue -> 0x65614
							}
							// 0x65650
							v12 = 0;
							// branch -> 0x65654
							while (true) {
								int32_t v93 = BLoad();      // 0x6565c
								int32_t v94 = 1;                     // 0x65664
								int32_t v95 = 0;                     // 0x6566c
								int32_t v96 = v95 + *(int32_t *)g27; // 0x6566c
								*(char *)(v12 + v96) = (char)v93;
								// branch -> 0x6565c
								while (v94 < 112) {
									// 0x6565c
									v93 = BLoad();
									v94++;
									v95 += 112;
									v96 = v95 + *(int32_t *)g27;
									*(char *)(v12 + v96) = (char)v93;
									// continue -> 0x6565c
								}
								int32_t v97 = v12 + 1; // 0x6567c
								v12 = v97;
								if (v97 >= 112) {
									// break -> 0x65688
									break;
								}
								// continue -> 0x65654
							}
							// 0x65688
							v12 = 0;
							// branch -> 0x6568c
							while (true) {
								int32_t v98 = BLoad();        // 0x65694
								int32_t v99 = 1;                       // 0x6569c
								int32_t v100 = 0;                      // 0x656a4
								int32_t v101 = v100 + *(int32_t *)g26; // 0x656a4
								*(char *)(v12 + v101) = (char)v98;
								// branch -> 0x65694
								while (v99 < 112) {
									// 0x65694
									v98 = BLoad();
									v99++;
									v100 += 112;
									v101 = v100 + *(int32_t *)g26;
									*(char *)(v12 + v101) = (char)v98;
									// continue -> 0x65694
								}
								int32_t v102 = v12 + 1; // 0x656b4
								v12 = v102;
								if (v102 >= 112) {
									// break -> 0x656c0
									break;
								}
								// continue -> 0x6568c
							}
							// 0x656c0
							v12 = 0;
							// branch -> 0x656c4
							while (true) {
								int32_t v103 = BLoad();       // 0x656cc
								int32_t v104 = 1;                      // 0x656d4
								int32_t v105 = 0;                      // 0x656dc
								int32_t v106 = v105 + *(int32_t *)g32; // 0x656dc
								*(char *)(v12 + v106) = (char)v103;
								// branch -> 0x656cc
								while (v104 < 112) {
									// 0x656cc
									v103 = BLoad();
									v104++;
									v105 += 112;
									v106 = v105 + *(int32_t *)g32;
									*(char *)(v12 + v106) = (char)v103;
									// continue -> 0x656cc
								}
								int32_t v107 = v12 + 1; // 0x656ec
								v12 = v107;
								if (v107 >= 112) {
									// break -> 0x656f8
									break;
								}
								// continue -> 0x656c4
							}
							// 0x656f8
							v12 = 0;
							// branch -> 0x656fc
							while (true) {
								int32_t v108 = BLoad();       // 0x65704
								int32_t v109 = 1;                      // 0x6570c
								int32_t v110 = 0;                      // 0x65714
								int32_t v111 = v110 + *(int32_t *)g25; // 0x65714
								*(char *)(v12 + v111) = (char)v108;
								// branch -> 0x65704
								while (v109 < 112) {
									// 0x65704
									v108 = BLoad();
									v109++;
									v110 += 112;
									v111 = v110 + *(int32_t *)g25;
									*(char *)(v12 + v111) = (char)v108;
									// continue -> 0x65704
								}
								int32_t v112 = v12 + 1; // 0x65724
								v12 = v112;
								if (v112 >= 112) {
									// break -> 0x65730
									break;
								}
								// continue -> 0x656fc
							}
							// 0x65730
							v79 = 0;
							int32_t v113 = *(int32_t *)(g23 - 0x7798); // 0x65734
							v12 = v113;
							// branch -> 0x65738
							while (true) {
								// 0x65738
								v20 = 0;
								v18 = v113;
								int32_t v114 = OLoad(); // 0x65740
								v20++;
								*(char *)v18 = (char)v114;
								v18 += 40;
								// branch -> 0x65740
								while (v20 < 40) {
									// 0x65740
									v114 = OLoad();
									v20++;
									*(char *)v18 = (char)v114;
									v18 += 40;
									// continue -> 0x65740
								}
								int32_t v115 = v79 + 1; // 0x65758
								v79 = v115;
								int32_t v116 = v12 + 1; // 0x6575c
								v12 = v116;
								if (v115 >= 40) {
									// break -> 0x65768
									break;
								}
								v113 = v116;
								// continue -> 0x65738
							}
							// 0x65768
							v12 = 0;
							// branch -> 0x6576c
							while (true) {
								// 0x6576c
								g36 = 0;
								g35 = 0;
								int32_t v117 = BLoad(); // 0x65774
								int32_t v118 = g36 + 1;          // 0x6577c
								g36 = v118;
								int32_t v119 = g35;                    // 0x65784
								int32_t v120 = v119 + *(int32_t *)g24; // 0x65784
								g35 = v119 + 112;
								*(char *)(v12 + v120) = (char)v117;
								// branch -> 0x65774
								while (v118 < 112) {
									// 0x65774
									v117 = BLoad();
									v118 = g36 + 1;
									g36 = v118;
									v119 = g35;
									v120 = v119 + *(int32_t *)g24;
									g35 = v119 + 112;
									*(char *)(v12 + v120) = (char)v117;
									// continue -> 0x65774
								}
								int32_t v121 = v12 + 1; // 0x65794
								v12 = v121;
								if (v121 >= 112) {
									// break -> 0x657a0
									break;
								}
								// continue -> 0x6576c
							}
							// 0x657a0
							*(int32_t *)*(int32_t *)(g23 - 0x71ac) = WLoad();
							v80 = WLoad();
							v79 = 0;
							*(int32_t *)*(int32_t *)(g23 - 0x71b4) = v80;
							function_64efc(v79);
							v83 = v79 + 1;
							// branch -> 0x657bc
							while (v83 < 6) {
								// 0x657bc
								function_64efc(v83);
								v83++;
								// continue -> 0x657bc
							}
							// 0x657d0
							*(int32_t *)*(int32_t *)(g23 - 0x7778) = OLoad();
							*(int32_t *)*(int32_t *)(g23 - 0x777c) = WLoad();
							g34 = v5;
							v81 = mem_free_dbg();
							AutomapZoomReset(v81);
							ResyncQuests();
							v86 = *(int32_t *)(g23 - 0x7794);
							g34 = v86;
							if (*(char *)v86 != 0) {
								// 0x6580c
								g34 = ProcessLightList();
								// branch -> 0x65810
							}
							// 0x65810
							v82 = function_97630();
							g34 = v82;
							v84 = ProcessVisionList(v82);
							v85 = function_7911c(v84);
							ResetPal(v85);
							g34 = 1;
							SetCursor_();
							result = *(int32_t *)(g23 - 0x75a8);
							*(int32_t *)result = 1;
							g10 = v1;
							return result;
						}
						// 0x65484
						// branch -> 0x65484
						// 0x65484
						v18 = *(int32_t *)(g23 - 0x71e0);
						v21 = BLoad();
						v26 = 1;
						*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
						v18 += 4;
						// branch -> 0x6548c
						while (v26 < 127) {
							// 0x6548c
							v21 = BLoad();
							v26++;
							*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
							v18 += 4;
							// continue -> 0x6548c
						}
						// 0x654a8
						v18 = *(int32_t *)(g23 - 0x71f4);
						v22 = BLoad();
						v27 = 1;
						*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
						v18 += 4;
						// branch -> 0x654b0
						while (v27 < 127) {
							// 0x654b0
							v22 = BLoad();
							v27++;
							*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
							v18 += 4;
							// continue -> 0x654b0
						}
						// 0x654cc
						v23 = g23;
						v30 = *(int32_t *)(v23 - 0x71e0);
						v24 = v23;
						if (*(int32_t *)g16 > 0) {
							function_64ea0(*(int32_t *)v30);
							v28 = v30 + 4;
							v29 = 1;
							while (v29 < *(int32_t *)g16) {
								// 0x654e0
								function_64ea0(*(int32_t *)v28);
								v28 += 4;
								v29++;
								// continue -> 0x654e0
							}
							// 0x654f0
							v24 = g23;
							// branch -> 0x654fc
						}
						// 0x654fc
						v12 = 0;
						v18 = *(int32_t *)(v24 - 0x7170);
						v25 = OLoad();
						v12++;
						*(int32_t *)v18 = v25;
						v18 += 4;
						// branch -> 0x65504
						while (v12 < 128) {
							// 0x65504
							v25 = OLoad();
							v12++;
							*(int32_t *)v18 = v25;
							v18 += 4;
							// continue -> 0x65504
						}
						// 0x6551c
						v12 = 0;
						// branch -> 0x65520
						while (true) {
							// 0x65520
							v20 = 0;
							v18 = 0;
							// branch -> 0x65528
							goto lab_0x65528_7;
						}
					}
					// 0x65450
					*(int32_t *)*(int32_t *)(g23 - 0x7160) = WLoad();
					*(int32_t *)g17 = WLoad();
					if (*(int32_t *)g17 > 0) {
						function_65008(0);
						v56 = 1;
						while (v56 < *(int32_t *)g17) {
							// 0x6546c
							function_65008(v56);
							v56++;
							// continue -> 0x6546c
						}
						// 0x65484
						// branch -> 0x65484
						// 0x65484
						v18 = *(int32_t *)(g23 - 0x71e0);
						v21 = BLoad();
						v26 = 1;
						*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
						v18 += 4;
						// branch -> 0x6548c
						while (v26 < 127) {
							// 0x6548c
							v21 = BLoad();
							v26++;
							*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
							v18 += 4;
							// continue -> 0x6548c
						}
						// 0x654a8
						v18 = *(int32_t *)(g23 - 0x71f4);
						v22 = BLoad();
						v27 = 1;
						*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
						v18 += 4;
						// branch -> 0x654b0
						while (v27 < 127) {
							// 0x654b0
							v22 = BLoad();
							v27++;
							*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
							v18 += 4;
							// continue -> 0x654b0
						}
						// 0x654cc
						v23 = g23;
						v30 = *(int32_t *)(v23 - 0x71e0);
						v24 = v23;
						if (*(int32_t *)g16 > 0) {
							function_64ea0(*(int32_t *)v30);
							v28 = v30 + 4;
							v29 = 1;
							while (v29 < *(int32_t *)g16) {
								// 0x654e0
								function_64ea0(*(int32_t *)v28);
								v28 += 4;
								v29++;
								// continue -> 0x654e0
							}
							// 0x654f0
							v24 = g23;
							// branch -> 0x654fc
						}
						// 0x654fc
						v12 = 0;
						v18 = *(int32_t *)(v24 - 0x7170);
						v25 = OLoad();
						v12++;
						*(int32_t *)v18 = v25;
						v18 += 4;
						// branch -> 0x65504
						while (v12 < 128) {
							// 0x65504
							v25 = OLoad();
							v12++;
							*(int32_t *)v18 = v25;
							v18 += 4;
							// continue -> 0x65504
						}
						// 0x6551c
						v12 = 0;
						// branch -> 0x65520
						while (true) {
							// 0x65520
							v20 = 0;
							v18 = 0;
							// branch -> 0x65528
							goto lab_0x65528_7;
						}
					}
					// 0x65484
					// branch -> 0x65484
					// 0x65484
					v18 = *(int32_t *)(g23 - 0x71e0);
					v21 = BLoad();
					v26 = 1;
					*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
					v18 += 4;
					// branch -> 0x6548c
					while (v26 < 127) {
						// 0x6548c
						v21 = BLoad();
						v26++;
						*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
						v18 += 4;
						// continue -> 0x6548c
					}
					// 0x654a8
					v18 = *(int32_t *)(g23 - 0x71f4);
					v22 = BLoad();
					v27 = 1;
					*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
					v18 += 4;
					// branch -> 0x654b0
					while (v27 < 127) {
						// 0x654b0
						v22 = BLoad();
						v27++;
						*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
						v18 += 4;
						// continue -> 0x654b0
					}
					// 0x654cc
					v23 = g23;
					v30 = *(int32_t *)(v23 - 0x71e0);
					v24 = v23;
					if (*(int32_t *)g16 > 0) {
						function_64ea0(*(int32_t *)v30);
						v28 = v30 + 4;
						v29 = 1;
						while (v29 < *(int32_t *)g16) {
							// 0x654e0
							function_64ea0(*(int32_t *)v28);
							v28 += 4;
							v29++;
							// continue -> 0x654e0
						}
						// 0x654f0
						v24 = g23;
						// branch -> 0x654fc
					}
					// 0x654fc
					v12 = 0;
					v18 = *(int32_t *)(v24 - 0x7170);
					v25 = OLoad();
					v12++;
					*(int32_t *)v18 = v25;
					v18 += 4;
					// branch -> 0x65504
					while (v12 < 128) {
						// 0x65504
						v25 = OLoad();
						v12++;
						*(int32_t *)v18 = v25;
						v18 += 4;
						// continue -> 0x65504
					}
					// 0x6551c
					v12 = 0;
					// branch -> 0x65520
					while (true) {
						// 0x65520
						v20 = 0;
						v18 = 0;
						// branch -> 0x65528
						goto lab_0x65528_7;
					}
				}
				// 0x65404
				*(int32_t *)g18 = WLoad();
				v18 = g22;
				v12 = 0;
				v53 = BLoad();
				v12++;
				*(char *)v18 = (char)v53;
				v18++;
				// branch -> 0x65414
				while (v12 < 32) {
					// 0x65414
					v53 = BLoad();
					v12++;
					*(char *)v18 = (char)v53;
					v18++;
					// continue -> 0x65414
				}
				// 0x65444
				if (*(int32_t *)g18 > 0) {
					// 0x65434
					function_64fc4((int32_t) * (char *)g22);
					v54 = g22 + 1;
					g22 = v54;
					v55 = 1;
					// branch -> 0x65434
					while (v55 < *(int32_t *)g18) {
						// 0x65434
						function_64fc4((int32_t) * (char *)v54);
						v54 = g22 + 1;
						g22 = v54;
						v55++;
						// continue -> 0x65434
					}
					// 0x65450
					*(int32_t *)*(int32_t *)(g23 - 0x7160) = WLoad();
					*(int32_t *)g17 = WLoad();
					if (*(int32_t *)g17 > 0) {
						function_65008(0);
						v56 = 1;
						while (v56 < *(int32_t *)g17) {
							// 0x6546c
							function_65008(v56);
							v56++;
							// continue -> 0x6546c
						}
						// 0x65484
						// branch -> 0x65484
						// 0x65484
						v18 = *(int32_t *)(g23 - 0x71e0);
						v21 = BLoad();
						v26 = 1;
						*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
						v18 += 4;
						// branch -> 0x6548c
						while (v26 < 127) {
							// 0x6548c
							v21 = BLoad();
							v26++;
							*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
							v18 += 4;
							// continue -> 0x6548c
						}
						// 0x654a8
						v18 = *(int32_t *)(g23 - 0x71f4);
						v22 = BLoad();
						v27 = 1;
						*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
						v18 += 4;
						// branch -> 0x654b0
						while (v27 < 127) {
							// 0x654b0
							v22 = BLoad();
							v27++;
							*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
							v18 += 4;
							// continue -> 0x654b0
						}
						// 0x654cc
						v23 = g23;
						v30 = *(int32_t *)(v23 - 0x71e0);
						v24 = v23;
						if (*(int32_t *)g16 > 0) {
							function_64ea0(*(int32_t *)v30);
							v28 = v30 + 4;
							v29 = 1;
							while (v29 < *(int32_t *)g16) {
								// 0x654e0
								function_64ea0(*(int32_t *)v28);
								v28 += 4;
								v29++;
								// continue -> 0x654e0
							}
							// 0x654f0
							v24 = g23;
							// branch -> 0x654fc
						}
						// 0x654fc
						v12 = 0;
						v18 = *(int32_t *)(v24 - 0x7170);
						v25 = OLoad();
						v12++;
						*(int32_t *)v18 = v25;
						v18 += 4;
						// branch -> 0x65504
						while (v12 < 128) {
							// 0x65504
							v25 = OLoad();
							v12++;
							*(int32_t *)v18 = v25;
							v18 += 4;
							// continue -> 0x65504
						}
						// 0x6551c
						v12 = 0;
						// branch -> 0x65520
						while (true) {
							// 0x65520
							v20 = 0;
							v18 = 0;
							// branch -> 0x65528
							goto lab_0x65528_7;
						}
					}
					// 0x65484
					// branch -> 0x65484
					// 0x65484
					v18 = *(int32_t *)(g23 - 0x71e0);
					v21 = BLoad();
					v26 = 1;
					*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
					v18 += 4;
					// branch -> 0x6548c
					while (v26 < 127) {
						// 0x6548c
						v21 = BLoad();
						v26++;
						*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
						v18 += 4;
						// continue -> 0x6548c
					}
					// 0x654a8
					v18 = *(int32_t *)(g23 - 0x71f4);
					v22 = BLoad();
					v27 = 1;
					*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
					v18 += 4;
					// branch -> 0x654b0
					while (v27 < 127) {
						// 0x654b0
						v22 = BLoad();
						v27++;
						*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
						v18 += 4;
						// continue -> 0x654b0
					}
					// 0x654cc
					v23 = g23;
					v30 = *(int32_t *)(v23 - 0x71e0);
					v24 = v23;
					if (*(int32_t *)g16 > 0) {
						function_64ea0(*(int32_t *)v30);
						v28 = v30 + 4;
						v29 = 1;
						while (v29 < *(int32_t *)g16) {
							// 0x654e0
							function_64ea0(*(int32_t *)v28);
							v28 += 4;
							v29++;
							// continue -> 0x654e0
						}
						// 0x654f0
						v24 = g23;
						// branch -> 0x654fc
					}
					// 0x654fc
					v12 = 0;
					v18 = *(int32_t *)(v24 - 0x7170);
					v25 = OLoad();
					v12++;
					*(int32_t *)v18 = v25;
					v18 += 4;
					// branch -> 0x65504
					while (v12 < 128) {
						// 0x65504
						v25 = OLoad();
						v12++;
						*(int32_t *)v18 = v25;
						v18 += 4;
						// continue -> 0x65504
					}
					// 0x6551c
					v12 = 0;
					// branch -> 0x65520
					while (true) {
						// 0x65520
						v20 = 0;
						v18 = 0;
						// branch -> 0x65528
						goto lab_0x65528_7;
					}
				}
				// 0x65450
				*(int32_t *)*(int32_t *)(g23 - 0x7160) = WLoad();
				*(int32_t *)g17 = WLoad();
				if (*(int32_t *)g17 > 0) {
					function_65008(0);
					v56 = 1;
					while (v56 < *(int32_t *)g17) {
						// 0x6546c
						function_65008(v56);
						v56++;
						// continue -> 0x6546c
					}
					// 0x65484
					// branch -> 0x65484
					// 0x65484
					v18 = *(int32_t *)(g23 - 0x71e0);
					v21 = BLoad();
					v26 = 1;
					*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
					v18 += 4;
					// branch -> 0x6548c
					while (v26 < 127) {
						// 0x6548c
						v21 = BLoad();
						v26++;
						*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
						v18 += 4;
						// continue -> 0x6548c
					}
					// 0x654a8
					v18 = *(int32_t *)(g23 - 0x71f4);
					v22 = BLoad();
					v27 = 1;
					*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
					v18 += 4;
					// branch -> 0x654b0
					while (v27 < 127) {
						// 0x654b0
						v22 = BLoad();
						v27++;
						*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
						v18 += 4;
						// continue -> 0x654b0
					}
					// 0x654cc
					v23 = g23;
					v30 = *(int32_t *)(v23 - 0x71e0);
					v24 = v23;
					if (*(int32_t *)g16 > 0) {
						function_64ea0(*(int32_t *)v30);
						v28 = v30 + 4;
						v29 = 1;
						while (v29 < *(int32_t *)g16) {
							// 0x654e0
							function_64ea0(*(int32_t *)v28);
							v28 += 4;
							v29++;
							// continue -> 0x654e0
						}
						// 0x654f0
						v24 = g23;
						// branch -> 0x654fc
					}
					// 0x654fc
					v12 = 0;
					v18 = *(int32_t *)(v24 - 0x7170);
					v25 = OLoad();
					v12++;
					*(int32_t *)v18 = v25;
					v18 += 4;
					// branch -> 0x65504
					while (v12 < 128) {
						// 0x65504
						v25 = OLoad();
						v12++;
						*(int32_t *)v18 = v25;
						v18 += 4;
						// continue -> 0x65504
					}
					// 0x6551c
					v12 = 0;
					// branch -> 0x65520
					while (true) {
						// 0x65520
						v20 = 0;
						v18 = 0;
						// branch -> 0x65528
						goto lab_0x65528_7;
					}
				}
				// 0x65484
				// branch -> 0x65484
			}
			// 0x65484
			v18 = *(int32_t *)(g23 - 0x71e0);
			v21 = BLoad();
			v26 = 1;
			*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
			v18 += 4;
			// branch -> 0x6548c
			while (v26 < 127) {
				// 0x6548c
				v21 = BLoad();
				v26++;
				*(int32_t *)v18 = 0x1000000 * v21 / 0x1000000;
				v18 += 4;
				// continue -> 0x6548c
			}
			// 0x654a8
			v18 = *(int32_t *)(g23 - 0x71f4);
			v22 = BLoad();
			v27 = 1;
			*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
			v18 += 4;
			// branch -> 0x654b0
			while (v27 < 127) {
				// 0x654b0
				v22 = BLoad();
				v27++;
				*(int32_t *)v18 = 0x1000000 * v22 / 0x1000000;
				v18 += 4;
				// continue -> 0x654b0
			}
			// 0x654cc
			v23 = g23;
			v30 = *(int32_t *)(v23 - 0x71e0);
			v24 = v23;
			if (*(int32_t *)g16 > 0) {
				function_64ea0(*(int32_t *)v30);
				v28 = v30 + 4;
				v29 = 1;
				while (v29 < *(int32_t *)g16) {
					// 0x654e0
					function_64ea0(*(int32_t *)v28);
					v28 += 4;
					v29++;
					// continue -> 0x654e0
				}
				// 0x654f0
				v24 = g23;
				// branch -> 0x654fc
			}
			// 0x654fc
			v12 = 0;
			v18 = *(int32_t *)(v24 - 0x7170);
			v25 = OLoad();
			v12++;
			*(int32_t *)v18 = v25;
			v18 += 4;
			// branch -> 0x65504
			while (v12 < 128) {
				// 0x65504
				v25 = OLoad();
				v12++;
				*(int32_t *)v18 = v25;
				v18 += 4;
				// continue -> 0x65504
			}
			// 0x6551c
			v12 = 0;
			// branch -> 0x65520
			while (true) {
				// 0x65520
				v20 = 0;
				v18 = 0;
				// branch -> 0x65528
				goto lab_0x65528_7;
			}
		}
	}
}

// Address range: 0x65848 - 0x6585c
int32_t function_65848(char a1)
{
	int32_t result = a1;                     // r3
	int32_t *v1 = (int32_t *)(g23 - 0x4df8); // 0x65848
	int32_t v2 = *v1;                        // 0x65848
	*v1 = v2 + 1;
	*(char *)v2 = (char)result;
	return result;
}

// Address range: 0x6585c - 0x658bc
int32_t function_6585c(int32_t a1)
{
	int32_t result = a1;                     // r3
	int32_t *v1 = (int32_t *)(g23 - 0x4df8); // 0x6585c
	int32_t v2 = *v1;                        // 0x6585c
	*v1 = v2 + 1;
	*(char *)v2 = (char)(0x1000000 * a1 / 0x1000000 / 0x1000000);
	int32_t *v3 = (int32_t *)(g23 - 0x4df8);     // 0x65884
	int32_t v4 = *v3;                            // 0x65884
	int32_t v5 = 0x1000000 * result / 0x1000000; // r4
	*v3 = v4 + 1;
	*(char *)v4 = (char)(0x1000000 * a1 / 0x10000 / 0x1000000);
	int32_t *v6 = (int32_t *)(g23 - 0x4df8); // 0x65898
	int32_t v7 = *v6;                        // 0x65898
	*v6 = v7 + 1;
	*(char *)v7 = (char)(0x1000000 * result / 256 / 0x1000000);
	int32_t *v8 = (int32_t *)(g23 - 0x4df8); // 0x658a8
	int32_t v9 = *v8;                        // 0x658a8
	result = v9;
	*v8 = v9 + 1;
	*(char *)result = (char)v5;
	return result;
}

// Address range: 0x658bc - 0x6591c
int32_t function_658bc(int32_t a1)
{
	int32_t result = a1;                     // r3
	int32_t *v1 = (int32_t *)(g23 - 0x4df8); // 0x658bc
	int32_t v2 = *v1;                        // 0x658bc
	*v1 = v2 + 1;
	*(char *)v2 = (char)(0x1000000 * a1 / 0x1000000 / 0x1000000);
	int32_t *v3 = (int32_t *)(g23 - 0x4df8);     // 0x658e4
	int32_t v4 = *v3;                            // 0x658e4
	int32_t v5 = 0x1000000 * result / 0x1000000; // r4
	*v3 = v4 + 1;
	*(char *)v4 = (char)(0x1000000 * a1 / 0x10000 / 0x1000000);
	int32_t *v6 = (int32_t *)(g23 - 0x4df8); // 0x658f8
	int32_t v7 = *v6;                        // 0x658f8
	*v6 = v7 + 1;
	*(char *)v7 = (char)(0x1000000 * result / 256 / 0x1000000);
	int32_t *v8 = (int32_t *)(g23 - 0x4df8); // 0x65908
	int32_t v9 = *v8;                        // 0x65908
	result = v9;
	*v8 = v9 + 1;
	*(char *)result = (char)v5;
	return result;
}

// Address range: 0x6591c - 0x65954
int32_t function_6591c(int32_t a1)
{
	int32_t *v1 = (int32_t *)(g23 - 0x4df8); // 0x6593c
	int32_t result = *v1;                    // 0x6593c
	if (a1 == 0) {
		// 0x6593c
		*v1 = result + 1;
		*(char *)result = (char)0;
		return result;
	}
	// 0x65924
	*v1 = result + 1;
	*(char *)result = (char)1;
	return result;
}

// Address range: 0x65954 - 0x65998
int32_t function_65954(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x4df8);                                                // bp-8
	int32_t result = function_697bc(&v1, 0x55ec * a1 + *(int32_t *)(g23 - 0x77a8), 0x54b0); // 0x6597c
	*(int32_t *)(g23 - 0x4df8) = v1;
	return result;
}

// Address range: 0x65998 - 0x659dc
int32_t function_65998(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754);                          // 0x6599c
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);                          // bp-8
	int32_t result = function_6b084((char *)&v2, 232 * a1 + v1, 216); // 0x659c0
	*(int32_t *)(g23 - 0x4df8) = v2;
	return result;
}

// Address range: 0x659dc - 0x65a20
int32_t function_659dc(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664);                          // 0x659e0
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);                          // bp-8
	int32_t result = function_6b73c((char *)&v2, 180 * a1 + v1, 176); // 0x65a04
	*(int32_t *)(g23 - 0x4df8) = v2;
	return result;
}

// Address range: 0x65a20 - 0x65a64
int32_t function_65a20(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688);                          // 0x65a24
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);                          // bp-8
	int32_t result = function_6bb60((char *)&v2, 120 * a1 + v1, 120); // 0x65a48
	*(int32_t *)(g23 - 0x4df8) = v2;
	return result;
}

// Address range: 0x65a64 - 0x65aac
int32_t function_65a64(int32_t a1)
{
	int32_t v1 = 368 * a1 + *(int32_t *)(g23 - 0x7690); // 0x65a78
	g37 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);                  // bp-8
	int32_t result = function_6a998((char *)&v2, v1, 368, 1); // 0x65a90
	*(int32_t *)(g23 - 0x4df8) = v2;
	return result;
}

// Address range: 0x65aac - 0x65af4
int32_t function_65aac(int32_t a1)
{
	int32_t v1 = 368 * a1 + *(int32_t *)(g23 - 0x71a8); // 0x65ac0
	g37 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x4df8);                  // bp-8
	int32_t result = function_6a998((char *)&v2, v1, 368, 1); // 0x65ad8
	*(int32_t *)(g23 - 0x4df8) = v2;
	return result;
}

// Address range: 0x65af4 - 0x65b74
int32_t function_65af4(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x4df8); // bp-8
	function_6be40((char *)&v1, 24 * a1 + *(int32_t *)(g23 - 0x7604), 24);
	*(int32_t *)(g23 - 0x4df8) = v1;
	function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x7130));
	function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x7134));
	function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x7138));
	function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x713c));
	int32_t result = function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x755c)); // 0x65b60
	return result;
}

// Address range: 0x65b74 - 0x65bb8
int32_t function_65b74(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x4df8);                                        // bp-8
	int32_t result = function_6bf70(&v1, 52 * a1 + *(int32_t *)(g23 - 0x7140), 52); // 0x65b9c
	*(int32_t *)(g23 - 0x4df8) = v1;
	return result;
}

// Address range: 0x65bb8 - 0x65bfc
int32_t function_65bb8(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x4df8);                                        // bp-8
	int32_t result = function_6bf70(&v1, 52 * a1 + *(int32_t *)(g23 - 0x7144), 52); // 0x65be0
	*(int32_t *)(g23 - 0x4df8) = v1;
	return result;
}

// Address range: 0x65bfc - 0x65c40
int32_t function_65bfc(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x4df8);                                        // bp-8
	int32_t result = function_6c0ac(&v1, 24 * a1 + *(int32_t *)(g23 - 0x7148), 24); // 0x65c24
	*(int32_t *)(g23 - 0x4df8) = v1;
	return result;
}

// Address range: 0x65c40 - 0x663b4
int32_t SaveGame(int32_t a1)
{
	// 0x65c40
	g24 = *(int32_t *)(g23 - 0x7594);
	g25 = *(int32_t *)(g23 - 0x7590);
	g26 = *(int32_t *)(g23 - 0x7684);
	g27 = *(int32_t *)(g23 - 0x7630);
	g28 = *(int32_t *)(g23 - 0x767c);
	g29 = *(int32_t *)(g23 - 0x768c);
	g30 = *(int32_t *)(g23 - 0x7680);
	g31 = *(int32_t *)(g23 - 0x779c);
	g32 = *(int32_t *)(g23 - 0x758c);
	g17 = *(int32_t *)(g23 - 0x7164);
	g22 = *(int32_t *)(g23 - 0x715c);
	g18 = *(int32_t *)(g23 - 0x7158);
	g19 = *(int32_t *)(g23 - 0x7194);
	g20 = *(int32_t *)(g23 - 0x7668);
	g16 = *(int32_t *)(g23 - 0x71e4);
	g21 = *(int32_t *)(g23 - 0x762c);
	g34 = codec_get_encoded_len(0x40003);
	int32_t v1 = DiabloAllocPtr(); // 0x65c9c
	*(int32_t *)(g23 - 0x4df8) = v1;
	function_658bc(0x5245544c);
	function_6591c((int32_t) * (char *)*(int32_t *)(g23 - 0x77d8));
	function_6585c((int32_t) * (char *)*(int32_t *)(g23 - 0x77e0));
	function_6585c((int32_t) * (char *)*(int32_t *)(g23 - 0x77e4));
	function_6585c((int32_t) * (char *)*(int32_t *)(g23 - 0x7794));
	function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x77b0));
	function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x77b4));
	function_6591c(*(int32_t *)*(int32_t *)(g23 - 0x77bc));
	function_6591c(*(int32_t *)*(int32_t *)(g23 - 0x77c4));
	function_6585c(*(int32_t *)g21);
	function_6585c(*(int32_t *)g16);
	function_6585c(*(int32_t *)g20);
	function_6585c(*(int32_t *)g19);
	int32_t v2 = *(int32_t *)(g23 - 0x75ec); // 0x65d3c
	g36 = v2;
	g35 = *(int32_t *)(g23 - 0x71f8);
	function_658bc(*(int32_t *)v2);
	function_6585c(*(int32_t *)g35);
	int32_t v3 = 1; // 0x65d60
	g35 += 4;
	int32_t v4 = g36 + 4; // 0x65d6c
	g36 = v4;
	// branch -> 0x65d50
	while (v3 < 17) {
		// 0x65d50
		function_658bc(*(int32_t *)v4);
		function_6585c(*(int32_t *)g35);
		v3++;
		g35 += 4;
		v4 = g36 + 4;
		g36 = v4;
		// continue -> 0x65d50
	}
	// 0x65d74
	function_65954(*(int32_t *)*(int32_t *)(g23 - 0x77ac));
	function_65af4(0);
	int32_t v5 = 1; // 0x65d8c
	// branch -> 0x65d84
	while (v5 < 16) {
		// 0x65d84
		function_65af4(v5);
		v5++;
		// continue -> 0x65d84
	}
	// 0x65d98
	function_65bfc(0);
	int32_t v6 = 1; // 0x65da4
	// branch -> 0x65d9c
	while (v6 < 4) {
		// 0x65d9c
		function_65bfc(v6);
		v6++;
		// continue -> 0x65d9c
	}
	int32_t v7 = *(int32_t *)(g23 - 0x714c); // 0x65db4
	function_658bc(*(int32_t *)v7);
	int32_t v8 = 1; // 0x65dc8
	// branch -> 0x65dc0
	while (v8 < 200) {
		// 0x65dc0
		v7 += 4;
		function_658bc(*(int32_t *)v7);
		v8++;
		// continue -> 0x65dc0
	}
	// 0x65dd8
	int32_t v9;  // r29
	int32_t v10; // r31
	int32_t v11; // 0x6602c
	int32_t v12; // 0x6605c
	int32_t v13; // 0x66094
	int32_t v14; // 0x65fec
	int32_t v15; // 0x65ff0
	int32_t v16; // 0x66018
	int32_t v17; // 0x6601c
	int32_t v18; // 0x66044
	int32_t v19; // 0x66048
	int32_t v20; // 0x66070
	int32_t v21; // 0x66074
	int32_t v22; // 0x66090
	int32_t v23; // 0x65fd4
	int32_t v24; // 0x66000
	int32_t v25; // 0x6602c
	int32_t v26; // 0x6605c
	if (*(char *)*(int32_t *)(g23 - 0x7794) != 0) {
		int32_t v27 = *(int32_t *)(g23 - 0x7628); // 0x65dec
		function_6585c(*(int32_t *)v27);
		int32_t v28 = 1;       // 0x65e00
		int32_t v29 = v27 + 4; // 0x65e04
		// branch -> 0x65df8
		while (v28 < 200) {
			// 0x65df8
			function_6585c(*(int32_t *)v29);
			v28++;
			v29 += 4;
			// continue -> 0x65df8
		}
		int32_t v30 = *(int32_t *)(g23 - 0x7628); // 0x65e14
		if (*(int32_t *)g21 > 0) {
			function_65998(*(int32_t *)v30);
			int32_t v31 = v30 + 4; // 0x65e2c
			int32_t v32 = 1;       // 0x65e30
			while (v32 < *(int32_t *)g21) {
				// 0x65e24
				function_65998(*(int32_t *)v31);
				v31 += 4;
				v32++;
				// continue -> 0x65e24
			}
			// 0x65e34
			// branch -> 0x65e40
		}
		int32_t v33 = *(int32_t *)(g23 - 0x7660); // 0x65e44
		function_65848((char)(0x1000000 * *(int32_t *)v33 / 0x1000000));
		int32_t v34 = 1;       // 0x65e5c
		int32_t v35 = v33 + 4; // 0x65e60
		// branch -> 0x65e50
		while (v34 < 125) {
			// 0x65e50
			function_65848((char)(0x1000000 * *(int32_t *)v35 / 0x1000000));
			v34++;
			v35 += 4;
			// continue -> 0x65e50
		}
		int32_t v36 = *(int32_t *)(g23 - 0x7150); // 0x65e70
		function_65848((char)(0x1000000 * *(int32_t *)v36 / 0x1000000));
		int32_t v37 = 1;       // 0x65e88
		int32_t v38 = v36 + 4; // 0x65e8c
		// branch -> 0x65e7c
		while (v37 < 125) {
			// 0x65e7c
			function_65848((char)(0x1000000 * *(int32_t *)v38 / 0x1000000));
			v37++;
			v38 += 4;
			// continue -> 0x65e7c
		}
		int32_t v39 = *(int32_t *)(g23 - 0x7660); // 0x65e9c
		if (*(int32_t *)g20 > 0) {
			function_659dc(*(int32_t *)v39);
			int32_t v40 = v39 + 4; // 0x65eb4
			int32_t v41 = 1;       // 0x65eb8
			while (v41 < *(int32_t *)g20) {
				// 0x65eac
				function_659dc(*(int32_t *)v40);
				v40 += 4;
				v41++;
				// continue -> 0x65eac
			}
			// 0x65ebc
			// branch -> 0x65ec8
		}
		int32_t v42 = *(int32_t *)(g23 - 0x7190); // 0x65ecc
		function_65848((char)(0x1000000 * *(int32_t *)v42 / 0x1000000));
		int32_t v43 = 1;       // 0x65ee4
		int32_t v44 = v42 + 4; // 0x65ee8
		// branch -> 0x65ed8
		while (v43 < 127) {
			// 0x65ed8
			function_65848((char)(0x1000000 * *(int32_t *)v44 / 0x1000000));
			v43++;
			v44 += 4;
			// continue -> 0x65ed8
		}
		int32_t v45 = *(int32_t *)(g23 - 0x7154); // 0x65ef8
		function_65848((char)(0x1000000 * *(int32_t *)v45 / 0x1000000));
		int32_t v46 = 1;       // 0x65f10
		int32_t v47 = v45 + 4; // 0x65f14
		// branch -> 0x65f04
		while (v46 < 127) {
			// 0x65f04
			function_65848((char)(0x1000000 * *(int32_t *)v47 / 0x1000000));
			v46++;
			v47 += 4;
			// continue -> 0x65f04
		}
		int32_t v48 = *(int32_t *)(g23 - 0x7190); // 0x65f24
		int32_t v49;                              // 0x65f5c
		int32_t v50;                              // 0x65f68
		int32_t v51;                              // 0x65f6c
		int32_t v52;                              // 0x65f88
		int32_t v53;                              // 0x65f8c
		int32_t v54;                              // 0x65fc0
		if (*(int32_t *)g19 > 0) {
			function_65a20(*(int32_t *)v48);
			int32_t v55 = v48 + 4; // 0x65f3c
			int32_t v56 = 1;       // 0x65f40
			while (v56 < *(int32_t *)g19) {
				// 0x65f34
				function_65a20(*(int32_t *)v55);
				v55 += 4;
				v56++;
				// continue -> 0x65f34
			}
			// 0x65f50
			function_6585c(*(int32_t *)g18);
			v49 = g22;
			function_65848(*(char *)v49);
			v50 = 1;
			v51 = v49 + 1;
			// branch -> 0x65f60
			while (v50 < 32) {
				// 0x65f60
				function_65848(*(char *)v51);
				v50++;
				v51++;
				// continue -> 0x65f60
			}
			// 0x65f90
			if (*(int32_t *)g18 > 0) {
				// 0x65f80
				function_65b74((int32_t) * (char *)g22);
				v52 = g22 + 1;
				g22 = v52;
				v53 = 1;
				// branch -> 0x65f80
				while (v53 < *(int32_t *)g18) {
					// 0x65f80
					function_65b74((int32_t) * (char *)v52);
					v52 = g22 + 1;
					g22 = v52;
					v53++;
					// continue -> 0x65f80
				}
				// 0x65f9c
				function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x7160));
				function_6585c(*(int32_t *)g17);
				if (*(int32_t *)g17 > 0) {
					function_65bb8(0);
					v54 = 1;
					while (v54 < *(int32_t *)g17) {
						// 0x65fb8
						function_65bb8(v54);
						v54++;
						// continue -> 0x65fb8
					}
					// 0x65fd0
					// branch -> 0x65fd0
					// 0x65fd0
					v23 = *(int32_t *)(g23 - 0x71e0);
					function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
					v14 = 1;
					v15 = v23 + 4;
					// branch -> 0x65fe0
					while (v14 < 127) {
						// 0x65fe0
						function_65848((char)(0x1000000 * *(int32_t *)v15 / 0x1000000));
						v14++;
						v15 += 4;
						// continue -> 0x65fe0
					}
					// 0x65ffc
					v24 = *(int32_t *)(g23 - 0x71f4);
					function_65848((char)(0x1000000 * *(int32_t *)v24 / 0x1000000));
					v16 = 1;
					v17 = v24 + 4;
					// branch -> 0x6600c
					while (v16 < 127) {
						// 0x6600c
						function_65848((char)(0x1000000 * *(int32_t *)v17 / 0x1000000));
						v16++;
						v17 += 4;
						// continue -> 0x6600c
					}
					// 0x66028
					v11 = g23;
					v25 = *(int32_t *)(v11 - 0x71e0);
					v12 = v11;
					if (*(int32_t *)g16 > 0) {
						function_65a64(*(int32_t *)v25);
						v18 = v25 + 4;
						v19 = 1;
						while (v19 < *(int32_t *)g16) {
							// 0x6603c
							function_65a64(*(int32_t *)v18);
							v18 += 4;
							v19++;
							// continue -> 0x6603c
						}
						// 0x6604c
						v12 = g23;
						// branch -> 0x66058
					}
					// 0x66058
					v26 = *(int32_t *)(v12 - 0x7170);
					function_6591c(*(int32_t *)v26);
					v20 = 1;
					v21 = v26 + 4;
					// branch -> 0x66068
					while (v20 < 128) {
						// 0x66068
						function_6591c(*(int32_t *)v21);
						v20++;
						v21 += 4;
						// continue -> 0x66068
					}
					// 0x66080
					v9 = 0;
					int32_t v57 = 0; // 0x6609467
					// branch -> 0x66084
					while (true) {
						// 0x66084
						v10 = 0;
						v7 = 0;
						v13 = v57;
						v22 = 0;
						// branch -> 0x6608c
					lab_0x6608c_7:;
						int32_t v58;
						while (true) {
							// 0x6608c
							function_65848(*(char *)(*(int32_t *)g32 + v22 + v13));
							int32_t v59 = v10 + 1; // 0x6609c
							v10 = v59;
							int32_t v60 = v7 + 112; // 0x660a0
							v7 = v60;
							v58 = v9;
							if (v59 >= 112) {
								// break -> 0x660ac
								break;
							}
							v13 = v58;
							v22 = v60;
							// continue -> 0x6608c
						}
						int32_t v61 = v58 + 1; // 0x660ac
						v9 = v61;
						if (v61 >= 112) {
							// break -> 0x660b8
							break;
						}
						v57 = v61;
						// continue -> 0x66084
					}
					// 0x660b8
					v9 = 0;
					int32_t v62 = 0; // 0x660cc70
					// branch -> 0x660bc
					while (true) {
						unsigned char v63 = *(char *)(*(int32_t *)g31 + v62); // 0x660cc
						function_65848((char)__asm_rlwinm((int32_t)v63, 0, 24, 28));
						int32_t v64 = 1;   // 0x660d8
						int32_t v65 = 112; // 0x660dc
						int32_t v66 = v9;
						// branch -> 0x660c4
						while (v64 < 112) {
							// 0x660c4
							v63 = *(char *)(*(int32_t *)g31 + v65 + v66);
							function_65848((char)__asm_rlwinm((int32_t)v63, 0, 24, 28));
							v64++;
							v65 += 112;
							v66 = v9;
							// continue -> 0x660c4
						}
						int32_t v67 = v66 + 1; // 0x660e8
						v9 = v67;
						if (v67 >= 112) {
							// break -> 0x660f4
							break;
						}
						v62 = v67;
						// continue -> 0x660bc
					}
					// 0x660f4
					v9 = 0;
					int32_t v68 = 0; // 0x6610873
					// branch -> 0x660f8
					while (true) {
						// 0x660f8
						function_65848(*(char *)(*(int32_t *)g30 + v68));
						int32_t v69 = 1;   // 0x66110
						int32_t v70 = 112; // 0x66114
						int32_t v71 = v9;
						// branch -> 0x66100
						while (v69 < 112) {
							// 0x66100
							function_65848(*(char *)(*(int32_t *)g30 + v70 + v71));
							v69++;
							v70 += 112;
							v71 = v9;
							// continue -> 0x66100
						}
						int32_t v72 = v71 + 1; // 0x66120
						v9 = v72;
						if (v72 >= 112) {
							// break -> 0x6612c
							break;
						}
						v68 = v72;
						// continue -> 0x660f8
					}
					// 0x6612c
					g33 = 0;
					int32_t v73 = 0; // 0x6614076
					// branch -> 0x66130
					while (true) {
						// 0x66130
						g36 = 0;
						g35 = 0;
						function_65848(*(char *)(*(int32_t *)g29 + v73));
						int32_t v74 = g36 + 1; // 0x66148
						g36 = v74;
						int32_t v75 = g35 + 112; // 0x6614c
						g35 = v75;
						int32_t v76 = g33;
						// branch -> 0x66138
						while (v74 < 112) {
							// 0x66138
							function_65848(*(char *)(*(int32_t *)g29 + v75 + v76));
							v74 = g36 + 1;
							g36 = v74;
							v75 = g35 + 112;
							g35 = v75;
							v76 = g33;
							// continue -> 0x66138
						}
						int32_t v77 = v76 + 1; // 0x66158
						g33 = v77;
						if (v77 >= 112) {
							// break -> 0x66164
							break;
						}
						v73 = v77;
						// continue -> 0x66130
					}
					// 0x66164
					if (*(char *)*(int32_t *)(g23 - 0x7794) != 0) {
						int32_t v78 = 0; // r27
						v9 = 0;
						int32_t v79 = 0; // 0x6618c79
						                 // branch -> 0x6617c
					lab_0x6617c:
						while (true) {
							// 0x6617c
							v10 = 0;
							v7 = 0;
							int32_t v80 = v79; // 0x6618c
							int32_t v81 = 0;   // 0x66188
							// branch -> 0x66184
							while (true) {
								// 0x66184
								function_6585c((int32_t) * (int16_t *)(*(int32_t *)g28 + v81 + v80));
								int32_t v82 = v10 + 1; // 0x66194
								v10 = v82;
								int32_t v83 = v7 + 224; // 0x66198
								v7 = v83;
								if (v82 < 112) {
									// 0x66184
									v80 = v9;
									v81 = v83;
									// branch -> 0x66184
									continue;
								} else {
									int32_t v84 = v78 + 1; // 0x661a4
									v78 = v84;
									int32_t v85 = v9 + 2; // 0x661a8
									v9 = v85;
									if (v84 >= 112) {
										// break (via goto) -> 0x661b4
										goto lab_0x661b4;
									}
									v79 = v85;
									// continue (via goto) -> 0x6617c
									goto lab_0x6617c;
								}
							}
						lab_0x661b4:
							// 0x661b4
							v9 = 0;
							int32_t v86 = 0; // 0x661c882
							// branch -> 0x661b8
							while (true) {
								// 0x661b8
								function_65848(*(char *)(*(int32_t *)g27 + v86));
								int32_t v87 = 1;   // 0x661d0
								int32_t v88 = 112; // 0x661d4
								int32_t v89 = v9;
								// branch -> 0x661c0
								while (v87 < 112) {
									// 0x661c0
									function_65848(*(char *)(*(int32_t *)g27 + v88 + v89));
									v87++;
									v88 += 112;
									v89 = v9;
									// continue -> 0x661c0
								}
								int32_t v90 = v89 + 1; // 0x661e0
								v9 = v90;
								if (v90 >= 112) {
									// break -> 0x661ec
									break;
								}
								v86 = v90;
								// continue -> 0x661b8
							}
							// 0x661ec
							v9 = 0;
							int32_t v91 = 0; // 0x6620085
							// branch -> 0x661f0
							while (true) {
								// 0x661f0
								function_65848(*(char *)(*(int32_t *)g26 + v91));
								int32_t v92 = 1;   // 0x66208
								int32_t v93 = 112; // 0x6620c
								int32_t v94 = v9;
								// branch -> 0x661f8
								while (v92 < 112) {
									// 0x661f8
									function_65848(*(char *)(*(int32_t *)g26 + v93 + v94));
									v92++;
									v93 += 112;
									v94 = v9;
									// continue -> 0x661f8
								}
								int32_t v95 = v94 + 1; // 0x66218
								v9 = v95;
								if (v95 >= 112) {
									// break -> 0x66224
									break;
								}
								v91 = v95;
								// continue -> 0x661f0
							}
							// 0x66224
							v9 = 0;
							int32_t v96 = 0; // 0x6623888
							// branch -> 0x66228
							while (true) {
								// 0x66228
								function_65848(*(char *)(*(int32_t *)g32 + v96));
								int32_t v97 = 1;   // 0x66240
								int32_t v98 = 112; // 0x66244
								int32_t v99 = v9;
								// branch -> 0x66230
								while (v97 < 112) {
									// 0x66230
									function_65848(*(char *)(*(int32_t *)g32 + v98 + v99));
									v97++;
									v98 += 112;
									v99 = v9;
									// continue -> 0x66230
								}
								int32_t v100 = v99 + 1; // 0x66250
								v9 = v100;
								if (v100 >= 112) {
									// break -> 0x6625c
									break;
								}
								v96 = v100;
								// continue -> 0x66228
							}
							// 0x6625c
							v9 = 0;
							int32_t v101 = 0; // 0x6627091
							// branch -> 0x66260
							while (true) {
								// 0x66260
								function_65848(*(char *)(*(int32_t *)g25 + v101));
								int32_t v102 = 1;   // 0x66278
								int32_t v103 = 112; // 0x6627c
								int32_t v104 = v9;
								// branch -> 0x66268
								while (v102 < 112) {
									// 0x66268
									function_65848(*(char *)(*(int32_t *)g25 + v103 + v104));
									v102++;
									v103 += 112;
									v104 = v9;
									// continue -> 0x66268
								}
								int32_t v105 = v104 + 1; // 0x66288
								v9 = v105;
								if (v105 >= 112) {
									// break -> 0x66294
									break;
								}
								v101 = v105;
								// continue -> 0x66260
							}
							int32_t v106 = *(int32_t *)(g23 - 0x7798); // 0x66294
							v9 = v106;
							int32_t v107 = 0; // r28
							// branch -> 0x6629c
							while (true) {
								// 0x6629c
								function_6591c((int32_t) * (char *)v106);
								int32_t v108 = 1;         // 0x662b0
								int32_t v109 = v106 + 40; // 0x662b4
								// branch -> 0x662a8
								while (v108 < 40) {
									// 0x662a8
									function_6591c((int32_t) * (char *)v109);
									v108++;
									v109 += 40;
									// continue -> 0x662a8
								}
								int32_t v110 = v107 + 1; // 0x662c0
								v107 = v110;
								int32_t v111 = v9 + 1; // 0x662c4
								v9 = v111;
								if (v110 >= 40) {
									// break -> 0x662d0
									break;
								}
								v106 = v111;
								// continue -> 0x6629c
							}
							// 0x662d0
							g33 = 0;
							int32_t v112 = 0; // 0x662e496
							// branch -> 0x662d4
							while (true) {
								// 0x662d4
								g36 = 0;
								g35 = 0;
								function_65848(*(char *)(*(int32_t *)g24 + v112));
								int32_t v113 = g36 + 1; // 0x662ec
								g36 = v113;
								int32_t v114 = g35 + 112; // 0x662f0
								g35 = v114;
								int32_t v115 = g33;
								// branch -> 0x662dc
								while (v113 < 112) {
									// 0x662dc
									function_65848(*(char *)(*(int32_t *)g24 + v114 + v115));
									v113 = g36 + 1;
									g36 = v113;
									v114 = g35 + 112;
									g35 = v114;
									v115 = g33;
									// continue -> 0x662dc
								}
								int32_t v116 = v115 + 1; // 0x662fc
								g33 = v116;
								if (v116 >= 112) {
									// break -> 0x66308
									break;
								}
								v112 = v116;
								// continue -> 0x662d4
							}
							// 0x66308
							// branch -> 0x66308
						}
					}
					// 0x66308
					function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x71ac));
					function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x71b4));
					function_65aac(0);
					int32_t v117 = 1; // 0x6632c
					// branch -> 0x66324
					while (v117 < 6) {
						// 0x66324
						function_65aac(v117);
						v117++;
						// continue -> 0x66324
					}
					// 0x66338
					function_6591c(*(int32_t *)*(int32_t *)(g23 - 0x7778));
					function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x777c));
					int32_t v118;         // bp-344
					int32_t v119 = &v118; // 0x66350
					pfile_get_game_name(v119);
					int32_t v120 = codec_get_encoded_len(*(int32_t *)(g23 - 0x4df8) - v1); // 0x66364
					pfile_write_save_file(v119, v1, *(int32_t *)(g23 - 0x4df8) - v1, v120);
					g34 = v1;
					mem_free_dbg();
					int32_t v121 = *(int32_t *)(g23 - 0x75bc); // 0x6638c
					*(int32_t *)v121 = 1;
					int32_t result = pfile_write_hero(function_a1cc8(v121)); // 0x6639c
					return result;
				}
				// 0x65fd0
				// branch -> 0x65fd0
				// 0x65fd0
				v23 = *(int32_t *)(g23 - 0x71e0);
				function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
				v14 = 1;
				v15 = v23 + 4;
				// branch -> 0x65fe0
				while (v14 < 127) {
					// 0x65fe0
					function_65848((char)(0x1000000 * *(int32_t *)v15 / 0x1000000));
					v14++;
					v15 += 4;
					// continue -> 0x65fe0
				}
				// 0x65ffc
				v24 = *(int32_t *)(g23 - 0x71f4);
				function_65848((char)(0x1000000 * *(int32_t *)v24 / 0x1000000));
				v16 = 1;
				v17 = v24 + 4;
				// branch -> 0x6600c
				while (v16 < 127) {
					// 0x6600c
					function_65848((char)(0x1000000 * *(int32_t *)v17 / 0x1000000));
					v16++;
					v17 += 4;
					// continue -> 0x6600c
				}
				// 0x66028
				v11 = g23;
				v25 = *(int32_t *)(v11 - 0x71e0);
				v12 = v11;
				if (*(int32_t *)g16 > 0) {
					function_65a64(*(int32_t *)v25);
					v18 = v25 + 4;
					v19 = 1;
					while (v19 < *(int32_t *)g16) {
						// 0x6603c
						function_65a64(*(int32_t *)v18);
						v18 += 4;
						v19++;
						// continue -> 0x6603c
					}
					// 0x6604c
					v12 = g23;
					// branch -> 0x66058
				}
				// 0x66058
				v26 = *(int32_t *)(v12 - 0x7170);
				function_6591c(*(int32_t *)v26);
				v20 = 1;
				v21 = v26 + 4;
				// branch -> 0x66068
				while (v20 < 128) {
					// 0x66068
					function_6591c(*(int32_t *)v21);
					v20++;
					v21 += 4;
					// continue -> 0x66068
				}
				// 0x66080
				v9 = 0;
				// branch -> 0x66084
				while (true) {
					// 0x66084
					v10 = 0;
					v7 = 0;
					v13 = 0;
					v22 = 0;
					// branch -> 0x6608c
					goto lab_0x6608c_7;
				}
			}
			// 0x65f9c
			function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x7160));
			function_6585c(*(int32_t *)g17);
			if (*(int32_t *)g17 > 0) {
				function_65bb8(0);
				v54 = 1;
				while (v54 < *(int32_t *)g17) {
					// 0x65fb8
					function_65bb8(v54);
					v54++;
					// continue -> 0x65fb8
				}
				// 0x65fd0
				// branch -> 0x65fd0
				// 0x65fd0
				v23 = *(int32_t *)(g23 - 0x71e0);
				function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
				v14 = 1;
				v15 = v23 + 4;
				// branch -> 0x65fe0
				while (v14 < 127) {
					// 0x65fe0
					function_65848((char)(0x1000000 * *(int32_t *)v15 / 0x1000000));
					v14++;
					v15 += 4;
					// continue -> 0x65fe0
				}
				// 0x65ffc
				v24 = *(int32_t *)(g23 - 0x71f4);
				function_65848((char)(0x1000000 * *(int32_t *)v24 / 0x1000000));
				v16 = 1;
				v17 = v24 + 4;
				// branch -> 0x6600c
				while (v16 < 127) {
					// 0x6600c
					function_65848((char)(0x1000000 * *(int32_t *)v17 / 0x1000000));
					v16++;
					v17 += 4;
					// continue -> 0x6600c
				}
				// 0x66028
				v11 = g23;
				v25 = *(int32_t *)(v11 - 0x71e0);
				v12 = v11;
				if (*(int32_t *)g16 > 0) {
					function_65a64(*(int32_t *)v25);
					v18 = v25 + 4;
					v19 = 1;
					while (v19 < *(int32_t *)g16) {
						// 0x6603c
						function_65a64(*(int32_t *)v18);
						v18 += 4;
						v19++;
						// continue -> 0x6603c
					}
					// 0x6604c
					v12 = g23;
					// branch -> 0x66058
				}
				// 0x66058
				v26 = *(int32_t *)(v12 - 0x7170);
				function_6591c(*(int32_t *)v26);
				v20 = 1;
				v21 = v26 + 4;
				// branch -> 0x66068
				while (v20 < 128) {
					// 0x66068
					function_6591c(*(int32_t *)v21);
					v20++;
					v21 += 4;
					// continue -> 0x66068
				}
				// 0x66080
				v9 = 0;
				// branch -> 0x66084
				while (true) {
					// 0x66084
					v10 = 0;
					v7 = 0;
					v13 = 0;
					v22 = 0;
					// branch -> 0x6608c
					goto lab_0x6608c_7;
				}
			}
			// 0x65fd0
			// branch -> 0x65fd0
			// 0x65fd0
			v23 = *(int32_t *)(g23 - 0x71e0);
			function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
			v14 = 1;
			v15 = v23 + 4;
			// branch -> 0x65fe0
			while (v14 < 127) {
				// 0x65fe0
				function_65848((char)(0x1000000 * *(int32_t *)v15 / 0x1000000));
				v14++;
				v15 += 4;
				// continue -> 0x65fe0
			}
			// 0x65ffc
			v24 = *(int32_t *)(g23 - 0x71f4);
			function_65848((char)(0x1000000 * *(int32_t *)v24 / 0x1000000));
			v16 = 1;
			v17 = v24 + 4;
			// branch -> 0x6600c
			while (v16 < 127) {
				// 0x6600c
				function_65848((char)(0x1000000 * *(int32_t *)v17 / 0x1000000));
				v16++;
				v17 += 4;
				// continue -> 0x6600c
			}
			// 0x66028
			v11 = g23;
			v25 = *(int32_t *)(v11 - 0x71e0);
			v12 = v11;
			if (*(int32_t *)g16 > 0) {
				function_65a64(*(int32_t *)v25);
				v18 = v25 + 4;
				v19 = 1;
				while (v19 < *(int32_t *)g16) {
					// 0x6603c
					function_65a64(*(int32_t *)v18);
					v18 += 4;
					v19++;
					// continue -> 0x6603c
				}
				// 0x6604c
				v12 = g23;
				// branch -> 0x66058
			}
			// 0x66058
			v26 = *(int32_t *)(v12 - 0x7170);
			function_6591c(*(int32_t *)v26);
			v20 = 1;
			v21 = v26 + 4;
			// branch -> 0x66068
			while (v20 < 128) {
				// 0x66068
				function_6591c(*(int32_t *)v21);
				v20++;
				v21 += 4;
				// continue -> 0x66068
			}
			// 0x66080
			v9 = 0;
			// branch -> 0x66084
			while (true) {
				// 0x66084
				v10 = 0;
				v7 = 0;
				v13 = 0;
				v22 = 0;
				// branch -> 0x6608c
				goto lab_0x6608c_7;
			}
		}
		// 0x65f50
		function_6585c(*(int32_t *)g18);
		v49 = g22;
		function_65848(*(char *)v49);
		v50 = 1;
		v51 = v49 + 1;
		// branch -> 0x65f60
		while (v50 < 32) {
			// 0x65f60
			function_65848(*(char *)v51);
			v50++;
			v51++;
			// continue -> 0x65f60
		}
		// 0x65f90
		if (*(int32_t *)g18 > 0) {
			// 0x65f80
			function_65b74((int32_t) * (char *)g22);
			v52 = g22 + 1;
			g22 = v52;
			v53 = 1;
			// branch -> 0x65f80
			while (v53 < *(int32_t *)g18) {
				// 0x65f80
				function_65b74((int32_t) * (char *)v52);
				v52 = g22 + 1;
				g22 = v52;
				v53++;
				// continue -> 0x65f80
			}
			// 0x65f9c
			function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x7160));
			function_6585c(*(int32_t *)g17);
			if (*(int32_t *)g17 > 0) {
				function_65bb8(0);
				v54 = 1;
				while (v54 < *(int32_t *)g17) {
					// 0x65fb8
					function_65bb8(v54);
					v54++;
					// continue -> 0x65fb8
				}
				// 0x65fd0
				// branch -> 0x65fd0
				// 0x65fd0
				v23 = *(int32_t *)(g23 - 0x71e0);
				function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
				v14 = 1;
				v15 = v23 + 4;
				// branch -> 0x65fe0
				while (v14 < 127) {
					// 0x65fe0
					function_65848((char)(0x1000000 * *(int32_t *)v15 / 0x1000000));
					v14++;
					v15 += 4;
					// continue -> 0x65fe0
				}
				// 0x65ffc
				v24 = *(int32_t *)(g23 - 0x71f4);
				function_65848((char)(0x1000000 * *(int32_t *)v24 / 0x1000000));
				v16 = 1;
				v17 = v24 + 4;
				// branch -> 0x6600c
				while (v16 < 127) {
					// 0x6600c
					function_65848((char)(0x1000000 * *(int32_t *)v17 / 0x1000000));
					v16++;
					v17 += 4;
					// continue -> 0x6600c
				}
				// 0x66028
				v11 = g23;
				v25 = *(int32_t *)(v11 - 0x71e0);
				v12 = v11;
				if (*(int32_t *)g16 > 0) {
					function_65a64(*(int32_t *)v25);
					v18 = v25 + 4;
					v19 = 1;
					while (v19 < *(int32_t *)g16) {
						// 0x6603c
						function_65a64(*(int32_t *)v18);
						v18 += 4;
						v19++;
						// continue -> 0x6603c
					}
					// 0x6604c
					v12 = g23;
					// branch -> 0x66058
				}
				// 0x66058
				v26 = *(int32_t *)(v12 - 0x7170);
				function_6591c(*(int32_t *)v26);
				v20 = 1;
				v21 = v26 + 4;
				// branch -> 0x66068
				while (v20 < 128) {
					// 0x66068
					function_6591c(*(int32_t *)v21);
					v20++;
					v21 += 4;
					// continue -> 0x66068
				}
				// 0x66080
				v9 = 0;
				// branch -> 0x66084
				while (true) {
					// 0x66084
					v10 = 0;
					v7 = 0;
					v13 = 0;
					v22 = 0;
					// branch -> 0x6608c
					goto lab_0x6608c_7;
				}
			}
			// 0x65fd0
			// branch -> 0x65fd0
			// 0x65fd0
			v23 = *(int32_t *)(g23 - 0x71e0);
			function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
			v14 = 1;
			v15 = v23 + 4;
			// branch -> 0x65fe0
			while (v14 < 127) {
				// 0x65fe0
				function_65848((char)(0x1000000 * *(int32_t *)v15 / 0x1000000));
				v14++;
				v15 += 4;
				// continue -> 0x65fe0
			}
			// 0x65ffc
			v24 = *(int32_t *)(g23 - 0x71f4);
			function_65848((char)(0x1000000 * *(int32_t *)v24 / 0x1000000));
			v16 = 1;
			v17 = v24 + 4;
			// branch -> 0x6600c
			while (v16 < 127) {
				// 0x6600c
				function_65848((char)(0x1000000 * *(int32_t *)v17 / 0x1000000));
				v16++;
				v17 += 4;
				// continue -> 0x6600c
			}
			// 0x66028
			v11 = g23;
			v25 = *(int32_t *)(v11 - 0x71e0);
			v12 = v11;
			if (*(int32_t *)g16 > 0) {
				function_65a64(*(int32_t *)v25);
				v18 = v25 + 4;
				v19 = 1;
				while (v19 < *(int32_t *)g16) {
					// 0x6603c
					function_65a64(*(int32_t *)v18);
					v18 += 4;
					v19++;
					// continue -> 0x6603c
				}
				// 0x6604c
				v12 = g23;
				// branch -> 0x66058
			}
			// 0x66058
			v26 = *(int32_t *)(v12 - 0x7170);
			function_6591c(*(int32_t *)v26);
			v20 = 1;
			v21 = v26 + 4;
			// branch -> 0x66068
			while (v20 < 128) {
				// 0x66068
				function_6591c(*(int32_t *)v21);
				v20++;
				v21 += 4;
				// continue -> 0x66068
			}
			// 0x66080
			v9 = 0;
			// branch -> 0x66084
			while (true) {
				// 0x66084
				v10 = 0;
				v7 = 0;
				v13 = 0;
				v22 = 0;
				// branch -> 0x6608c
				goto lab_0x6608c_7;
			}
		}
		// 0x65f9c
		function_6585c(*(int32_t *)*(int32_t *)(g23 - 0x7160));
		function_6585c(*(int32_t *)g17);
		if (*(int32_t *)g17 > 0) {
			function_65bb8(0);
			v54 = 1;
			while (v54 < *(int32_t *)g17) {
				// 0x65fb8
				function_65bb8(v54);
				v54++;
				// continue -> 0x65fb8
			}
			// 0x65fd0
			// branch -> 0x65fd0
			// 0x65fd0
			v23 = *(int32_t *)(g23 - 0x71e0);
			function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
			v14 = 1;
			v15 = v23 + 4;
			// branch -> 0x65fe0
			while (v14 < 127) {
				// 0x65fe0
				function_65848((char)(0x1000000 * *(int32_t *)v15 / 0x1000000));
				v14++;
				v15 += 4;
				// continue -> 0x65fe0
			}
			// 0x65ffc
			v24 = *(int32_t *)(g23 - 0x71f4);
			function_65848((char)(0x1000000 * *(int32_t *)v24 / 0x1000000));
			v16 = 1;
			v17 = v24 + 4;
			// branch -> 0x6600c
			while (v16 < 127) {
				// 0x6600c
				function_65848((char)(0x1000000 * *(int32_t *)v17 / 0x1000000));
				v16++;
				v17 += 4;
				// continue -> 0x6600c
			}
			// 0x66028
			v11 = g23;
			v25 = *(int32_t *)(v11 - 0x71e0);
			v12 = v11;
			if (*(int32_t *)g16 > 0) {
				function_65a64(*(int32_t *)v25);
				v18 = v25 + 4;
				v19 = 1;
				while (v19 < *(int32_t *)g16) {
					// 0x6603c
					function_65a64(*(int32_t *)v18);
					v18 += 4;
					v19++;
					// continue -> 0x6603c
				}
				// 0x6604c
				v12 = g23;
				// branch -> 0x66058
			}
			// 0x66058
			v26 = *(int32_t *)(v12 - 0x7170);
			function_6591c(*(int32_t *)v26);
			v20 = 1;
			v21 = v26 + 4;
			// branch -> 0x66068
			while (v20 < 128) {
				// 0x66068
				function_6591c(*(int32_t *)v21);
				v20++;
				v21 += 4;
				// continue -> 0x66068
			}
			// 0x66080
			v9 = 0;
			// branch -> 0x66084
			while (true) {
				// 0x66084
				v10 = 0;
				v7 = 0;
				v13 = 0;
				v22 = 0;
				// branch -> 0x6608c
				goto lab_0x6608c_7;
			}
		}
		// 0x65fd0
		// branch -> 0x65fd0
	}
	// 0x65fd0
	v23 = *(int32_t *)(g23 - 0x71e0);
	function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
	v14 = 1;
	v15 = v23 + 4;
	// branch -> 0x65fe0
	while (v14 < 127) {
		// 0x65fe0
		function_65848((char)(0x1000000 * *(int32_t *)v15 / 0x1000000));
		v14++;
		v15 += 4;
		// continue -> 0x65fe0
	}
	// 0x65ffc
	v24 = *(int32_t *)(g23 - 0x71f4);
	function_65848((char)(0x1000000 * *(int32_t *)v24 / 0x1000000));
	v16 = 1;
	v17 = v24 + 4;
	// branch -> 0x6600c
	while (v16 < 127) {
		// 0x6600c
		function_65848((char)(0x1000000 * *(int32_t *)v17 / 0x1000000));
		v16++;
		v17 += 4;
		// continue -> 0x6600c
	}
	// 0x66028
	v11 = g23;
	v25 = *(int32_t *)(v11 - 0x71e0);
	v12 = v11;
	if (*(int32_t *)g16 > 0) {
		function_65a64(*(int32_t *)v25);
		v18 = v25 + 4;
		v19 = 1;
		while (v19 < *(int32_t *)g16) {
			// 0x6603c
			function_65a64(*(int32_t *)v18);
			v18 += 4;
			v19++;
			// continue -> 0x6603c
		}
		// 0x6604c
		v12 = g23;
		// branch -> 0x66058
	}
	// 0x66058
	v26 = *(int32_t *)(v12 - 0x7170);
	function_6591c(*(int32_t *)v26);
	v20 = 1;
	v21 = v26 + 4;
	// branch -> 0x66068
	while (v20 < 128) {
		// 0x66068
		function_6591c(*(int32_t *)v21);
		v20++;
		v21 += 4;
		// continue -> 0x66068
	}
	// 0x66080
	v9 = 0;
	// branch -> 0x66084
	while (true) {
		// 0x66084
		v10 = 0;
		v7 = 0;
		v13 = 0;
		v22 = 0;
		// branch -> 0x6608c
		goto lab_0x6608c_7;
	}
}

// Address range: 0x663b4 - 0x66874
int32_t function_663b4(void)
{
	// 0x663b4
	g25 = *(int32_t *)(g23 - 0x7594);
	g26 = *(int32_t *)(g23 - 0x7590);
	g28 = *(int32_t *)(g23 - 0x7684);
	g32 = *(int32_t *)(g23 - 0x7630);
	g29 = *(int32_t *)(g23 - 0x767c);
	g30 = *(int32_t *)(g23 - 0x768c);
	g31 = *(int32_t *)(g23 - 0x779c);
	g27 = *(int32_t *)(g23 - 0x758c);
	g16 = *(int32_t *)(g23 - 0x71e0);
	g17 = *(int32_t *)(g23 - 0x7190);
	g19 = *(int32_t *)(g23 - 0x7628);
	g22 = *(int32_t *)(g23 - 0x7194);
	g21 = *(int32_t *)(g23 - 0x71e4);
	g24 = *(int32_t *)(g23 - 0x762c);
	g18 = *(int32_t *)(g23 - 0x7794);
	if (*(char *)*(int32_t *)(g23 - 0x77e4) == 0) {
		// 0x66410
		*(int32_t *)*(int32_t *)(g23 - 0x75ec) = GetRndSeed();
		// branch -> 0x6641c
	}
	// 0x6641c
	g34 = codec_get_encoded_len(0x40003);
	int32_t v1 = DiabloAllocPtr(); // 0x66428
	g20 = v1;
	*(int32_t *)(g23 - 0x4df8) = v1;
	int32_t v2;  // r29
	int32_t v3;  // r30
	int32_t v4;  // r31
	int32_t v5;  // 0x664a4
	int32_t v6;  // 0x664c8
	int32_t v7;  // 0x664f4
	int32_t v8;  // 0x66548
	int32_t v9;  // 0x66574
	int32_t v10; // 0x665c8
	int32_t v11; // 0x66600
	int32_t v12; // 0x664b0
	int32_t v13; // 0x664b4
	int32_t v14; // 0x664d8
	int32_t v15; // 0x664dc
	int32_t v16; // 0x66504
	int32_t v17; // 0x66508
	int32_t v18; // 0x66530
	int32_t v19; // 0x66534
	int32_t v20; // 0x66558
	int32_t v21; // 0x6655c
	int32_t v22; // 0x66584
	int32_t v23; // 0x66588
	int32_t v24; // 0x665b0
	int32_t v25; // 0x665b4
	int32_t v26; // 0x665d8
	int32_t v27; // 0x665dc
	int32_t v28; // 0x665fc
	int32_t v29; // 0x66518
	int32_t v30; // 0x66598
	if (*(char *)g18 != 0) {
		// 0x66440
		v2 = 0;
		int32_t v31 = 0; // 0x6645424
		// branch -> 0x66444
		while (true) {
			// 0x66444
			function_65848(*(char *)(*(int32_t *)g32 + v31));
			int32_t v32 = 1;   // 0x6645c
			int32_t v33 = 112; // 0x66460
			int32_t v34 = v2;
			// branch -> 0x6644c
			while (v32 < 112) {
				// 0x6644c
				function_65848(*(char *)(*(int32_t *)g32 + v33 + v34));
				v32++;
				v33 += 112;
				v34 = v2;
				// continue -> 0x6644c
			}
			int32_t v35 = v34 + 1; // 0x6646c
			v2 = v35;
			if (v35 >= 112) {
				// break -> 0x66478
				break;
			}
			v31 = v35;
			// continue -> 0x66444
		}
		// 0x66478
		function_6585c(*(int32_t *)g24);
		function_6585c(*(int32_t *)g21);
		function_6585c(*(int32_t *)g22);
		if (*(char *)g18 != 0) {
			// 0x6649c
			v5 = g19;
			function_6585c(*(int32_t *)v5);
			v12 = 1;
			v13 = v5 + 4;
			// branch -> 0x664a8
			while (v12 < 200) {
				// 0x664a8
				function_6585c(*(int32_t *)v13);
				v12++;
				v13 += 4;
				// continue -> 0x664a8
			}
			// 0x664c0
			v6 = g19;
			if (*(int32_t *)g24 > 0) {
				function_65998(*(int32_t *)v6);
				v14 = v6 + 4;
				v15 = 1;
				while (v15 < *(int32_t *)g24) {
					// 0x664d0
					function_65998(*(int32_t *)v14);
					v14 += 4;
					v15++;
					// continue -> 0x664d0
				}
				// 0x664ec
				v7 = g17;
				function_65848((char)(0x1000000 * *(int32_t *)v7 / 0x1000000));
				v16 = 1;
				v17 = v7 + 4;
				// branch -> 0x664f8
				while (v16 < 127) {
					// 0x664f8
					function_65848((char)(0x1000000 * *(int32_t *)v17 / 0x1000000));
					v16++;
					v17 += 4;
					// continue -> 0x664f8
				}
				// 0x66514
				v29 = *(int32_t *)(g23 - 0x7154);
				function_65848((char)(0x1000000 * *(int32_t *)v29 / 0x1000000));
				v18 = 1;
				v19 = v29 + 4;
				// branch -> 0x66524
				while (v18 < 127) {
					// 0x66524
					function_65848((char)(0x1000000 * *(int32_t *)v19 / 0x1000000));
					v18++;
					v19 += 4;
					// continue -> 0x66524
				}
				// 0x66540
				v8 = g17;
				if (*(int32_t *)g22 > 0) {
					function_65a20(*(int32_t *)v8);
					v20 = v8 + 4;
					v21 = 1;
					while (v21 < *(int32_t *)g22) {
						// 0x66550
						function_65a20(*(int32_t *)v20);
						v20 += 4;
						v21++;
						// continue -> 0x66550
					}
					// 0x6656c
					v9 = g16;
					function_65848((char)(0x1000000 * *(int32_t *)v9 / 0x1000000));
					v22 = 1;
					v23 = v9 + 4;
					// branch -> 0x66578
					while (v22 < 127) {
						// 0x66578
						function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
						v22++;
						v23 += 4;
						// continue -> 0x66578
					}
					// 0x66594
					v30 = *(int32_t *)(g23 - 0x71f4);
					function_65848((char)(0x1000000 * *(int32_t *)v30 / 0x1000000));
					v24 = 1;
					v25 = v30 + 4;
					// branch -> 0x665a4
					while (v24 < 127) {
						// 0x665a4
						function_65848((char)(0x1000000 * *(int32_t *)v25 / 0x1000000));
						v24++;
						v25 += 4;
						// continue -> 0x665a4
					}
					// 0x665c0
					v10 = g16;
					if (*(int32_t *)g21 > 0) {
						function_65a64(*(int32_t *)v10);
						v26 = v10 + 4;
						v27 = 1;
						while (v27 < *(int32_t *)g21) {
							// 0x665d0
							function_65a64(*(int32_t *)v26);
							v26 += 4;
							v27++;
							// continue -> 0x665d0
						}
						// 0x665ec
						v2 = 0;
						int32_t v36 = 0; // 0x6660035
						// branch -> 0x665f0
						while (true) {
							// 0x665f0
							v4 = 0;
							v3 = 0;
							v11 = v36;
							v28 = 0;
							// branch -> 0x665f8
						lab_0x665f8_15:;
							int32_t v37;
							while (true) {
								int32_t v38 = *(int32_t *)g31;                                                // 0x665f8
								int32_t v39 = __asm_rlwinm((int32_t) * (char *)(v38 + v28 + v11), 0, 24, 28); // 0x66604
								function_65848((char)v39);
								int32_t v40 = v4 + 1; // 0x6660c
								v4 = v40;
								int32_t v41 = v3 + 112; // 0x66610
								v3 = v41;
								v37 = v2;
								if (v40 >= 112) {
									// break -> 0x6661c
									break;
								}
								v11 = v37;
								v28 = v41;
								// continue -> 0x665f8
							}
							int32_t v42 = v37 + 1; // 0x6661c
							v2 = v42;
							if (v42 >= 112) {
								// break -> 0x66628
								break;
							}
							v36 = v42;
							// continue -> 0x665f0
						}
						// 0x66628
						g33 = 0;
						int32_t v43 = 0; // 0x6663c38
						// branch -> 0x6662c
						while (true) {
							// 0x6662c
							g36 = 0;
							g35 = 0;
							function_65848(*(char *)(*(int32_t *)g30 + v43));
							int32_t v44 = g36 + 1; // 0x66644
							g36 = v44;
							int32_t v45 = g35 + 112; // 0x66648
							g35 = v45;
							int32_t v46 = g33;
							// branch -> 0x66634
							while (v44 < 112) {
								// 0x66634
								function_65848(*(char *)(*(int32_t *)g30 + v45 + v46));
								v44 = g36 + 1;
								g36 = v44;
								v45 = g35 + 112;
								g35 = v45;
								v46 = g33;
								// continue -> 0x66634
							}
							int32_t v47 = v46 + 1; // 0x66654
							g33 = v47;
							if (v47 >= 112) {
								// break -> 0x66660
								break;
							}
							v43 = v47;
							// continue -> 0x6662c
						}
						// 0x66660
						int32_t v48;     // bp-344
						int32_t v49;     // 0x667e4
						int32_t v50;     // 0x667fc
						int32_t v51;     // 0x667d8
						int32_t v52;     // 0x667c8
						int32_t v53;     // 0x66814
						int32_t result;  // 0x6682c
						int32_t result2; // 0x66858
						int32_t v54;     // 0x66818
						int32_t v55;     // 0x66820
						int32_t v56;     // 0x66844
						int32_t v57;     // 0x6684c
						if (*(char *)g18 != 0) {
							int32_t v58 = 0; // r26
							v2 = 0;
							int32_t v59 = 0; // 0x6668441
							                 // branch -> 0x66674
						lab_0x66674:
							while (true) {
								// 0x66674
								v4 = 0;
								v3 = 0;
								int32_t v60 = v59; // 0x66684
								int32_t v61 = 0;   // 0x66680
								// branch -> 0x6667c
								while (true) {
									// 0x6667c
									function_6585c((int32_t) * (int16_t *)(*(int32_t *)g29 + v61 + v60));
									int32_t v62 = v4 + 1; // 0x6668c
									v4 = v62;
									int32_t v63 = v3 + 224; // 0x66690
									v3 = v63;
									if (v62 < 112) {
										// 0x6667c
										v60 = v2;
										v61 = v63;
										// branch -> 0x6667c
										continue;
									} else {
										int32_t v64 = v58 + 1; // 0x6669c
										v58 = v64;
										int32_t v65 = v2 + 2; // 0x666a0
										v2 = v65;
										if (v64 >= 112) {
											// break (via goto) -> 0x666ac
											goto lab_0x666ac;
										}
										v59 = v65;
										// continue (via goto) -> 0x66674
										goto lab_0x66674;
									}
								}
							lab_0x666ac:
								// 0x666ac
								v2 = 0;
								int32_t v66 = 0; // 0x666c044
								// branch -> 0x666b0
								while (true) {
									// 0x666b0
									function_65848(*(char *)(*(int32_t *)g28 + v66));
									int32_t v67 = 1;   // 0x666c8
									int32_t v68 = 112; // 0x666cc
									int32_t v69 = v2;
									// branch -> 0x666b8
									while (v67 < 112) {
										// 0x666b8
										function_65848(*(char *)(*(int32_t *)g28 + v68 + v69));
										v67++;
										v68 += 112;
										v69 = v2;
										// continue -> 0x666b8
									}
									int32_t v70 = v69 + 1; // 0x666d8
									v2 = v70;
									if (v70 >= 112) {
										// break -> 0x666e4
										break;
									}
									v66 = v70;
									// continue -> 0x666b0
								}
								// 0x666e4
								v2 = 0;
								int32_t v71 = 0; // 0x666f847
								// branch -> 0x666e8
								while (true) {
									// 0x666e8
									function_65848(*(char *)(*(int32_t *)g27 + v71));
									int32_t v72 = 1;   // 0x66700
									int32_t v73 = 112; // 0x66704
									int32_t v74 = v2;
									// branch -> 0x666f0
									while (v72 < 112) {
										// 0x666f0
										function_65848(*(char *)(*(int32_t *)g27 + v73 + v74));
										v72++;
										v73 += 112;
										v74 = v2;
										// continue -> 0x666f0
									}
									int32_t v75 = v74 + 1; // 0x66710
									v2 = v75;
									if (v75 >= 112) {
										// break -> 0x6671c
										break;
									}
									v71 = v75;
									// continue -> 0x666e8
								}
								// 0x6671c
								v2 = 0;
								int32_t v76 = 0; // 0x6673050
								// branch -> 0x66720
								while (true) {
									// 0x66720
									function_65848(*(char *)(*(int32_t *)g26 + v76));
									int32_t v77 = 1;   // 0x66738
									int32_t v78 = 112; // 0x6673c
									int32_t v79 = v2;
									// branch -> 0x66728
									while (v77 < 112) {
										// 0x66728
										function_65848(*(char *)(*(int32_t *)g26 + v78 + v79));
										v77++;
										v78 += 112;
										v79 = v2;
										// continue -> 0x66728
									}
									int32_t v80 = v79 + 1; // 0x66748
									v2 = v80;
									if (v80 >= 112) {
										// break -> 0x66754
										break;
									}
									v76 = v80;
									// continue -> 0x66720
								}
								int32_t v81 = *(int32_t *)(g23 - 0x7798); // 0x66754
								int32_t v82 = 0;                          // r23
								// branch -> 0x6675c
								while (true) {
									// 0x6675c
									function_6591c((int32_t) * (char *)v81);
									int32_t v83 = 1;        // 0x66770
									int32_t v84 = v81 + 40; // 0x66774
									// branch -> 0x66768
									while (v83 < 40) {
										// 0x66768
										function_6591c((int32_t) * (char *)v84);
										v83++;
										v84 += 40;
										// continue -> 0x66768
									}
									int32_t v85 = v82 + 1; // 0x66780
									v82 = v85;
									if (v85 >= 40) {
										// break -> 0x66790
										break;
									}
									v81++;
									// continue -> 0x6675c
								}
								// 0x66790
								g33 = 0;
								int32_t v86 = 0; // 0x667a455
								// branch -> 0x66794
								while (true) {
									// 0x66794
									g36 = 0;
									g35 = 0;
									function_65848(*(char *)(*(int32_t *)g25 + v86));
									int32_t v87 = g36 + 1; // 0x667ac
									g36 = v87;
									int32_t v88 = g35 + 112; // 0x667b0
									g35 = v88;
									int32_t v89 = g33;
									// branch -> 0x6679c
									while (v87 < 112) {
										// 0x6679c
										function_65848(*(char *)(*(int32_t *)g25 + v88 + v89));
										v87 = g36 + 1;
										g36 = v87;
										v88 = g35 + 112;
										g35 = v88;
										v89 = g33;
										// continue -> 0x6679c
									}
									int32_t v90 = v89 + 1; // 0x667bc
									g33 = v90;
									if (v90 >= 112) {
										// break -> 0x667c8
										break;
									}
									v86 = v90;
									// continue -> 0x66794
								}
								// 0x667c8
								v52 = &v48;
								function_a19e4(v52);
								v51 = codec_get_encoded_len(*(int32_t *)(g23 - 0x4df8) - g20);
								v49 = g20;
								pfile_write_save_file(v52, v49, *(int32_t *)(g23 - 0x4df8) - v49, v51);
								g34 = g20;
								mem_free_dbg();
								v50 = g23;
								v53 = *(int32_t *)*(int32_t *)(v50 - 0x77ac);
								if (*(char *)*(int32_t *)(v50 - 0x77d8) == 0) {
									// 0x6680c
									v54 = *(int32_t *)(v50 - 0x77e4);
									v55 = *(int32_t *)(v50 - 0x77a8);
									result = (int32_t) * (char *)v54 + v55 + 0x55ec * v53;
									*(char *)(result + 496) = 1;
									// branch -> 0x66860
									// 0x66860
									return result;
								}
								// 0x66838
								v56 = *(int32_t *)(v50 - 0x77e0);
								v57 = *(int32_t *)(v50 - 0x77a8);
								result2 = (int32_t) * (char *)v56 + v57 + 0x55ec * v53;
								*(char *)(result2 + 513) = 1;
								// branch -> 0x66860
								// 0x66860
								return result2;
							}
						}
						// 0x667c8
						v52 = &v48;
						function_a19e4(v52);
						v51 = codec_get_encoded_len(*(int32_t *)(g23 - 0x4df8) - g20);
						v49 = g20;
						pfile_write_save_file(v52, v49, *(int32_t *)(g23 - 0x4df8) - v49, v51);
						g34 = g20;
						mem_free_dbg();
						v50 = g23;
						v53 = *(int32_t *)*(int32_t *)(v50 - 0x77ac);
						int32_t result3; // r3
						if (*(char *)*(int32_t *)(v50 - 0x77d8) == 0) {
							// 0x6680c
							v54 = *(int32_t *)(v50 - 0x77e4);
							v55 = *(int32_t *)(v50 - 0x77a8);
							result = (int32_t) * (char *)v54 + v55 + 0x55ec * v53;
							result3 = result;
							*(char *)(result + 496) = 1;
							// branch -> 0x66860
						} else {
							// 0x66838
							v56 = *(int32_t *)(v50 - 0x77e0);
							v57 = *(int32_t *)(v50 - 0x77a8);
							result2 = (int32_t) * (char *)v56 + v57 + 0x55ec * v53;
							result3 = result2;
							*(char *)(result2 + 513) = 1;
							// branch -> 0x66860
						}
						// 0x66860
						return result3;
					}
					// 0x665ec
					v2 = 0;
					// branch -> 0x665f0
					while (true) {
						// 0x665f0
						v4 = 0;
						v3 = 0;
						v11 = 0;
						v28 = 0;
						// branch -> 0x665f8
						goto lab_0x665f8_15;
					}
				}
				// 0x6656c
				v9 = g16;
				function_65848((char)(0x1000000 * *(int32_t *)v9 / 0x1000000));
				v22 = 1;
				v23 = v9 + 4;
				// branch -> 0x66578
				while (v22 < 127) {
					// 0x66578
					function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
					v22++;
					v23 += 4;
					// continue -> 0x66578
				}
				// 0x66594
				v30 = *(int32_t *)(g23 - 0x71f4);
				function_65848((char)(0x1000000 * *(int32_t *)v30 / 0x1000000));
				v24 = 1;
				v25 = v30 + 4;
				// branch -> 0x665a4
				while (v24 < 127) {
					// 0x665a4
					function_65848((char)(0x1000000 * *(int32_t *)v25 / 0x1000000));
					v24++;
					v25 += 4;
					// continue -> 0x665a4
				}
				// 0x665c0
				v10 = g16;
				if (*(int32_t *)g21 > 0) {
					function_65a64(*(int32_t *)v10);
					v26 = v10 + 4;
					v27 = 1;
					while (v27 < *(int32_t *)g21) {
						// 0x665d0
						function_65a64(*(int32_t *)v26);
						v26 += 4;
						v27++;
						// continue -> 0x665d0
					}
					// 0x665ec
					v2 = 0;
					// branch -> 0x665f0
					while (true) {
						// 0x665f0
						v4 = 0;
						v3 = 0;
						v11 = 0;
						v28 = 0;
						// branch -> 0x665f8
						goto lab_0x665f8_15;
					}
				}
				// 0x665ec
				v2 = 0;
				// branch -> 0x665f0
				while (true) {
					// 0x665f0
					v4 = 0;
					v3 = 0;
					v11 = 0;
					v28 = 0;
					// branch -> 0x665f8
					goto lab_0x665f8_15;
				}
			}
			// 0x664ec
			v7 = g17;
			function_65848((char)(0x1000000 * *(int32_t *)v7 / 0x1000000));
			v16 = 1;
			v17 = v7 + 4;
			// branch -> 0x664f8
			while (v16 < 127) {
				// 0x664f8
				function_65848((char)(0x1000000 * *(int32_t *)v17 / 0x1000000));
				v16++;
				v17 += 4;
				// continue -> 0x664f8
			}
			// 0x66514
			v29 = *(int32_t *)(g23 - 0x7154);
			function_65848((char)(0x1000000 * *(int32_t *)v29 / 0x1000000));
			v18 = 1;
			v19 = v29 + 4;
			// branch -> 0x66524
			while (v18 < 127) {
				// 0x66524
				function_65848((char)(0x1000000 * *(int32_t *)v19 / 0x1000000));
				v18++;
				v19 += 4;
				// continue -> 0x66524
			}
			// 0x66540
			v8 = g17;
			if (*(int32_t *)g22 > 0) {
				function_65a20(*(int32_t *)v8);
				v20 = v8 + 4;
				v21 = 1;
				while (v21 < *(int32_t *)g22) {
					// 0x66550
					function_65a20(*(int32_t *)v20);
					v20 += 4;
					v21++;
					// continue -> 0x66550
				}
				// 0x6656c
				v9 = g16;
				function_65848((char)(0x1000000 * *(int32_t *)v9 / 0x1000000));
				v22 = 1;
				v23 = v9 + 4;
				// branch -> 0x66578
				while (v22 < 127) {
					// 0x66578
					function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
					v22++;
					v23 += 4;
					// continue -> 0x66578
				}
				// 0x66594
				v30 = *(int32_t *)(g23 - 0x71f4);
				function_65848((char)(0x1000000 * *(int32_t *)v30 / 0x1000000));
				v24 = 1;
				v25 = v30 + 4;
				// branch -> 0x665a4
				while (v24 < 127) {
					// 0x665a4
					function_65848((char)(0x1000000 * *(int32_t *)v25 / 0x1000000));
					v24++;
					v25 += 4;
					// continue -> 0x665a4
				}
				// 0x665c0
				v10 = g16;
				if (*(int32_t *)g21 > 0) {
					function_65a64(*(int32_t *)v10);
					v26 = v10 + 4;
					v27 = 1;
					while (v27 < *(int32_t *)g21) {
						// 0x665d0
						function_65a64(*(int32_t *)v26);
						v26 += 4;
						v27++;
						// continue -> 0x665d0
					}
					// 0x665ec
					v2 = 0;
					// branch -> 0x665f0
					while (true) {
						// 0x665f0
						v4 = 0;
						v3 = 0;
						v11 = 0;
						v28 = 0;
						// branch -> 0x665f8
						goto lab_0x665f8_15;
					}
				}
				// 0x665ec
				v2 = 0;
				// branch -> 0x665f0
				while (true) {
					// 0x665f0
					v4 = 0;
					v3 = 0;
					v11 = 0;
					v28 = 0;
					// branch -> 0x665f8
					goto lab_0x665f8_15;
				}
			}
		}
		// 0x6656c
		v9 = g16;
		function_65848((char)(0x1000000 * *(int32_t *)v9 / 0x1000000));
		v22 = 1;
		v23 = v9 + 4;
		// branch -> 0x66578
		while (v22 < 127) {
			// 0x66578
			function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
			v22++;
			v23 += 4;
			// continue -> 0x66578
		}
		// 0x66594
		v30 = *(int32_t *)(g23 - 0x71f4);
		function_65848((char)(0x1000000 * *(int32_t *)v30 / 0x1000000));
		v24 = 1;
		v25 = v30 + 4;
		// branch -> 0x665a4
		while (v24 < 127) {
			// 0x665a4
			function_65848((char)(0x1000000 * *(int32_t *)v25 / 0x1000000));
			v24++;
			v25 += 4;
			// continue -> 0x665a4
		}
		// 0x665c0
		v10 = g16;
		if (*(int32_t *)g21 > 0) {
			function_65a64(*(int32_t *)v10);
			v26 = v10 + 4;
			v27 = 1;
			while (v27 < *(int32_t *)g21) {
				// 0x665d0
				function_65a64(*(int32_t *)v26);
				v26 += 4;
				v27++;
				// continue -> 0x665d0
			}
			// 0x665ec
			v2 = 0;
			// branch -> 0x665f0
			while (true) {
				// 0x665f0
				v4 = 0;
				v3 = 0;
				v11 = 0;
				v28 = 0;
				// branch -> 0x665f8
				goto lab_0x665f8_15;
			}
		}
		// 0x665ec
		v2 = 0;
		// branch -> 0x665f0
		while (true) {
			// 0x665f0
			v4 = 0;
			v3 = 0;
			v11 = 0;
			v28 = 0;
			// branch -> 0x665f8
			goto lab_0x665f8_15;
		}
	}
	// 0x66478
	function_6585c(*(int32_t *)g24);
	function_6585c(*(int32_t *)g21);
	function_6585c(*(int32_t *)g22);
	if (*(char *)g18 != 0) {
		// 0x6649c
		v5 = g19;
		function_6585c(*(int32_t *)v5);
		v12 = 1;
		v13 = v5 + 4;
		// branch -> 0x664a8
		while (v12 < 200) {
			// 0x664a8
			function_6585c(*(int32_t *)v13);
			v12++;
			v13 += 4;
			// continue -> 0x664a8
		}
		// 0x664c0
		v6 = g19;
		if (*(int32_t *)g24 > 0) {
			function_65998(*(int32_t *)v6);
			v14 = v6 + 4;
			v15 = 1;
			while (v15 < *(int32_t *)g24) {
				// 0x664d0
				function_65998(*(int32_t *)v14);
				v14 += 4;
				v15++;
				// continue -> 0x664d0
			}
			// 0x664ec
			v7 = g17;
			function_65848((char)(0x1000000 * *(int32_t *)v7 / 0x1000000));
			v16 = 1;
			v17 = v7 + 4;
			// branch -> 0x664f8
			while (v16 < 127) {
				// 0x664f8
				function_65848((char)(0x1000000 * *(int32_t *)v17 / 0x1000000));
				v16++;
				v17 += 4;
				// continue -> 0x664f8
			}
			// 0x66514
			v29 = *(int32_t *)(g23 - 0x7154);
			function_65848((char)(0x1000000 * *(int32_t *)v29 / 0x1000000));
			v18 = 1;
			v19 = v29 + 4;
			// branch -> 0x66524
			while (v18 < 127) {
				// 0x66524
				function_65848((char)(0x1000000 * *(int32_t *)v19 / 0x1000000));
				v18++;
				v19 += 4;
				// continue -> 0x66524
			}
			// 0x66540
			v8 = g17;
			if (*(int32_t *)g22 > 0) {
				function_65a20(*(int32_t *)v8);
				v20 = v8 + 4;
				v21 = 1;
				while (v21 < *(int32_t *)g22) {
					// 0x66550
					function_65a20(*(int32_t *)v20);
					v20 += 4;
					v21++;
					// continue -> 0x66550
				}
				// 0x6656c
				v9 = g16;
				function_65848((char)(0x1000000 * *(int32_t *)v9 / 0x1000000));
				v22 = 1;
				v23 = v9 + 4;
				// branch -> 0x66578
				while (v22 < 127) {
					// 0x66578
					function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
					v22++;
					v23 += 4;
					// continue -> 0x66578
				}
				// 0x66594
				v30 = *(int32_t *)(g23 - 0x71f4);
				function_65848((char)(0x1000000 * *(int32_t *)v30 / 0x1000000));
				v24 = 1;
				v25 = v30 + 4;
				// branch -> 0x665a4
				while (v24 < 127) {
					// 0x665a4
					function_65848((char)(0x1000000 * *(int32_t *)v25 / 0x1000000));
					v24++;
					v25 += 4;
					// continue -> 0x665a4
				}
				// 0x665c0
				v10 = g16;
				if (*(int32_t *)g21 > 0) {
					function_65a64(*(int32_t *)v10);
					v26 = v10 + 4;
					v27 = 1;
					while (v27 < *(int32_t *)g21) {
						// 0x665d0
						function_65a64(*(int32_t *)v26);
						v26 += 4;
						v27++;
						// continue -> 0x665d0
					}
					// 0x665ec
					v2 = 0;
					// branch -> 0x665f0
					while (true) {
						// 0x665f0
						v4 = 0;
						v3 = 0;
						v11 = 0;
						v28 = 0;
						// branch -> 0x665f8
						goto lab_0x665f8_15;
					}
				}
				// 0x665ec
				v2 = 0;
				// branch -> 0x665f0
				while (true) {
					// 0x665f0
					v4 = 0;
					v3 = 0;
					v11 = 0;
					v28 = 0;
					// branch -> 0x665f8
					goto lab_0x665f8_15;
				}
			}
			// 0x6656c
			v9 = g16;
			function_65848((char)(0x1000000 * *(int32_t *)v9 / 0x1000000));
			v22 = 1;
			v23 = v9 + 4;
			// branch -> 0x66578
			while (v22 < 127) {
				// 0x66578
				function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
				v22++;
				v23 += 4;
				// continue -> 0x66578
			}
			// 0x66594
			v30 = *(int32_t *)(g23 - 0x71f4);
			function_65848((char)(0x1000000 * *(int32_t *)v30 / 0x1000000));
			v24 = 1;
			v25 = v30 + 4;
			// branch -> 0x665a4
			while (v24 < 127) {
				// 0x665a4
				function_65848((char)(0x1000000 * *(int32_t *)v25 / 0x1000000));
				v24++;
				v25 += 4;
				// continue -> 0x665a4
			}
			// 0x665c0
			v10 = g16;
			if (*(int32_t *)g21 > 0) {
				function_65a64(*(int32_t *)v10);
				v26 = v10 + 4;
				v27 = 1;
				while (v27 < *(int32_t *)g21) {
					// 0x665d0
					function_65a64(*(int32_t *)v26);
					v26 += 4;
					v27++;
					// continue -> 0x665d0
				}
				// 0x665ec
				v2 = 0;
				// branch -> 0x665f0
				while (true) {
					// 0x665f0
					v4 = 0;
					v3 = 0;
					v11 = 0;
					v28 = 0;
					// branch -> 0x665f8
					goto lab_0x665f8_15;
				}
			}
			// 0x665ec
			v2 = 0;
			// branch -> 0x665f0
			while (true) {
				// 0x665f0
				v4 = 0;
				v3 = 0;
				v11 = 0;
				v28 = 0;
				// branch -> 0x665f8
				goto lab_0x665f8_15;
			}
		}
		// 0x664ec
		v7 = g17;
		function_65848((char)(0x1000000 * *(int32_t *)v7 / 0x1000000));
		v16 = 1;
		v17 = v7 + 4;
		// branch -> 0x664f8
		while (v16 < 127) {
			// 0x664f8
			function_65848((char)(0x1000000 * *(int32_t *)v17 / 0x1000000));
			v16++;
			v17 += 4;
			// continue -> 0x664f8
		}
		// 0x66514
		v29 = *(int32_t *)(g23 - 0x7154);
		function_65848((char)(0x1000000 * *(int32_t *)v29 / 0x1000000));
		v18 = 1;
		v19 = v29 + 4;
		// branch -> 0x66524
		while (v18 < 127) {
			// 0x66524
			function_65848((char)(0x1000000 * *(int32_t *)v19 / 0x1000000));
			v18++;
			v19 += 4;
			// continue -> 0x66524
		}
		// 0x66540
		v8 = g17;
		if (*(int32_t *)g22 > 0) {
			function_65a20(*(int32_t *)v8);
			v20 = v8 + 4;
			v21 = 1;
			while (v21 < *(int32_t *)g22) {
				// 0x66550
				function_65a20(*(int32_t *)v20);
				v20 += 4;
				v21++;
				// continue -> 0x66550
			}
			// 0x6656c
			v9 = g16;
			function_65848((char)(0x1000000 * *(int32_t *)v9 / 0x1000000));
			v22 = 1;
			v23 = v9 + 4;
			// branch -> 0x66578
			while (v22 < 127) {
				// 0x66578
				function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
				v22++;
				v23 += 4;
				// continue -> 0x66578
			}
			// 0x66594
			v30 = *(int32_t *)(g23 - 0x71f4);
			function_65848((char)(0x1000000 * *(int32_t *)v30 / 0x1000000));
			v24 = 1;
			v25 = v30 + 4;
			// branch -> 0x665a4
			while (v24 < 127) {
				// 0x665a4
				function_65848((char)(0x1000000 * *(int32_t *)v25 / 0x1000000));
				v24++;
				v25 += 4;
				// continue -> 0x665a4
			}
			// 0x665c0
			v10 = g16;
			if (*(int32_t *)g21 > 0) {
				function_65a64(*(int32_t *)v10);
				v26 = v10 + 4;
				v27 = 1;
				while (v27 < *(int32_t *)g21) {
					// 0x665d0
					function_65a64(*(int32_t *)v26);
					v26 += 4;
					v27++;
					// continue -> 0x665d0
				}
				// 0x665ec
				v2 = 0;
				// branch -> 0x665f0
				while (true) {
					// 0x665f0
					v4 = 0;
					v3 = 0;
					v11 = 0;
					v28 = 0;
					// branch -> 0x665f8
					goto lab_0x665f8_15;
				}
			}
			// 0x665ec
			v2 = 0;
			// branch -> 0x665f0
			while (true) {
				// 0x665f0
				v4 = 0;
				v3 = 0;
				v11 = 0;
				v28 = 0;
				// branch -> 0x665f8
				goto lab_0x665f8_15;
			}
		}
	}
	// 0x6656c
	v9 = g16;
	function_65848((char)(0x1000000 * *(int32_t *)v9 / 0x1000000));
	v22 = 1;
	v23 = v9 + 4;
	// branch -> 0x66578
	while (v22 < 127) {
		// 0x66578
		function_65848((char)(0x1000000 * *(int32_t *)v23 / 0x1000000));
		v22++;
		v23 += 4;
		// continue -> 0x66578
	}
	// 0x66594
	v30 = *(int32_t *)(g23 - 0x71f4);
	function_65848((char)(0x1000000 * *(int32_t *)v30 / 0x1000000));
	v24 = 1;
	v25 = v30 + 4;
	// branch -> 0x665a4
	while (v24 < 127) {
		// 0x665a4
		function_65848((char)(0x1000000 * *(int32_t *)v25 / 0x1000000));
		v24++;
		v25 += 4;
		// continue -> 0x665a4
	}
	// 0x665c0
	v10 = g16;
	if (*(int32_t *)g21 > 0) {
		function_65a64(*(int32_t *)v10);
		v26 = v10 + 4;
		v27 = 1;
		while (v27 < *(int32_t *)g21) {
			// 0x665d0
			function_65a64(*(int32_t *)v26);
			v26 += 4;
			v27++;
			// continue -> 0x665d0
		}
		// 0x665ec
		v2 = 0;
		// branch -> 0x665f0
		while (true) {
			// 0x665f0
			v4 = 0;
			v3 = 0;
			v11 = 0;
			v28 = 0;
			// branch -> 0x665f8
			goto lab_0x665f8_15;
		}
	}
	// 0x665ec
	v2 = 0;
	// branch -> 0x665f0
	while (true) {
		// 0x665f0
		v4 = 0;
		v3 = 0;
		v11 = 0;
		v28 = 0;
		// branch -> 0x665f8
		goto lab_0x665f8_15;
	}
}

// Address range: 0x66874 - 0x66e5c
int32_t LoadLevel(int32_t a1)
{
	int32_t v1 = g10; // 0x66878
	g36 = *(int32_t *)(g23 - 0x7594);
	g25 = *(int32_t *)(g23 - 0x7590);
	g28 = *(int32_t *)(g23 - 0x767c);
	g29 = *(int32_t *)(g23 - 0x768c);
	g20 = *(int32_t *)(g23 - 0x71e4);
	g21 = *(int32_t *)(g23 - 0x762c);
	g17 = *(int32_t *)(g23 - 0x7794);
	g24 = *(int32_t *)(g23 - 0x7140);
	int32_t v2;       // bp-344
	int32_t v3 = &v2; // 0x668c0
	function_a1a64(v3);
	int32_t v4;                           // bp-84
	int32_t v5 = pfile_read(v3, &v4); // 0x668d0
	g19 = v5;
	*(int32_t *)(g23 - 0x4df8) = v5;
	int32_t v6; // r28
	if (*(char *)g17 != 0) {
		// 0x668e8
		v6 = 0;
		// branch -> 0x668ec
		int32_t v7; // 0x668f4
		while (true) {
			// 0x668ec
			v7 = BLoad();
			g34 = v7;
			int32_t v8 = 1;                     // 0x668fc
			int32_t v9 = 0;                     // 0x66904
			int32_t v10 = v9 + *(int32_t *)g31; // 0x66904
			*(char *)(v6 + v10) = (char)v7;
			// branch -> 0x668f4
			while (v8 < 112) {
				// 0x668f4
				v7 = BLoad();
				g34 = v7;
				v8++;
				v9 += 112;
				v10 = v9 + *(int32_t *)g31;
				*(char *)(v6 + v10) = (char)v7;
				// continue -> 0x668f4
			}
			int32_t v11 = v6 + 1; // 0x66914
			v6 = v11;
			if (v11 >= 112) {
				// break -> 0x66920
				break;
			}
			// continue -> 0x668ec
		}
		// 0x66920
		SetDead(v7);
		// branch -> 0x66924
	}
	// 0x66924
	*(int32_t *)g21 = WLoad();
	*(int32_t *)g20 = WLoad();
	*(int32_t *)g22 = WLoad();
	int32_t v12; // r29
	int32_t v13; // r30
	int32_t v14; // 0x66a40
	int32_t v15; // 0x66a64
	int32_t v16; // 0x66a88
	int32_t v17; // 0x66a44
	int32_t v18; // 0x66a68
	int32_t v19; // 0x66a98
	int32_t v20; // 0x66a9c
	if (*(char *)g17 != 0) {
		int32_t v21 = 0; // r27
		v6 = *(int32_t *)(g23 - 0x7628);
		int32_t v22 = WLoad(); // 0x66950
		v21++;
		*(int32_t *)v6 = v22;
		v6 += 4;
		// branch -> 0x66950
		while (v21 < 200) {
			// 0x66950
			v22 = WLoad();
			v21++;
			*(int32_t *)v6 = v22;
			v6 += 4;
			// continue -> 0x66950
		}
		// 0x66968
		g31 = 0;
		int32_t v23 = *(int32_t *)(g23 - 0x7628); // 0x6696c
		g32 = v23;
		int32_t v24; // 0x669a0
		int32_t v25; // 0x669c4
		int32_t v26; // 0x669e8
		int32_t v27; // 0x66a00
		int32_t v28; // 0x66a0015
		int32_t v29; // 0x66a14
		int32_t v30; // 0x66a2c8
		int32_t v31; // 0x669a4
		int32_t v32; // 0x669c8
		int32_t v33; // 0x669f8
		int32_t v34; // 0x669fc
		int32_t v35; // 0x66a24
		int32_t v36; // 0x66a28
		if (*(int32_t *)g21 > 0) {
			function_64dc0(*(int32_t *)v23);
			int32_t v37 = g32 + 4; // 0x66984
			g32 = v37;
			int32_t v38 = g31 + 1; // 0x66988
			g31 = v38;
			while (v38 < *(int32_t *)g21) {
				// 0x6697c
				function_64dc0(*(int32_t *)v37);
				v37 = g32 + 4;
				g32 = v37;
				v38 = g31 + 1;
				g31 = v38;
				// continue -> 0x6697c
			}
			// 0x66998
			v6 = g18;
			v24 = BLoad();
			v31 = 1;
			*(int32_t *)v6 = 0x1000000 * v24 / 0x1000000;
			v6 += 4;
			// branch -> 0x669a0
			while (v31 < 127) {
				// 0x669a0
				v24 = BLoad();
				v31++;
				*(int32_t *)v6 = 0x1000000 * v24 / 0x1000000;
				v6 += 4;
				// continue -> 0x669a0
			}
			// 0x669bc
			v6 = *(int32_t *)(g23 - 0x7154);
			v25 = BLoad();
			v32 = 1;
			*(int32_t *)v6 = 0x1000000 * v25 / 0x1000000;
			v6 += 4;
			// branch -> 0x669c4
			while (v32 < 127) {
				// 0x669c4
				v25 = BLoad();
				v32++;
				*(int32_t *)v6 = 0x1000000 * v25 / 0x1000000;
				v6 += 4;
				// continue -> 0x669c4
			}
			// 0x669e0
			v26 = g18;
			v28 = g22;
			v30 = v28;
			v29 = v26;
			if (*(int32_t *)v28 > 0) {
				function_64e5c(*(int32_t *)v26);
				v33 = v26 + 4;
				v34 = 1;
				v27 = g22;
				while (v34 < *(int32_t *)v27) {
					// 0x669f0
					function_64e5c(*(int32_t *)v33);
					v33 += 4;
					v34++;
					v27 = g22;
					// continue -> 0x669f0
				}
				// 0x66a00
				v30 = v27;
				v29 = g18;
				// branch -> 0x66a0c
			}
			// 0x66a0c
			g31 = 0;
			g32 = v29;
			if (*(int32_t *)v30 > 0) {
				function_9d6e4(*(int32_t *)v29);
				v35 = g32 + 4;
				g32 = v35;
				v36 = g31 + 1;
				g31 = v36;
				while (v36 < *(int32_t *)g22) {
					// 0x66a1c
					function_9d6e4(*(int32_t *)v35);
					v35 = g32 + 4;
					g32 = v35;
					v36 = g31 + 1;
					g31 = v36;
					// continue -> 0x66a1c
				}
				// 0x66a38
				v6 = g16;
				v14 = BLoad();
				v17 = 1;
				*(int32_t *)v6 = 0x1000000 * v14 / 0x1000000;
				v6 += 4;
				// branch -> 0x66a40
				while (v17 < 127) {
					// 0x66a40
					v14 = BLoad();
					v17++;
					*(int32_t *)v6 = 0x1000000 * v14 / 0x1000000;
					v6 += 4;
					// continue -> 0x66a40
				}
				// 0x66a5c
				v6 = *(int32_t *)(g23 - 0x71f4);
				v15 = BLoad();
				v18 = 1;
				*(int32_t *)v6 = 0x1000000 * v15 / 0x1000000;
				v6 += 4;
				// branch -> 0x66a64
				while (v18 < 127) {
					// 0x66a64
					v15 = BLoad();
					v18++;
					*(int32_t *)v6 = 0x1000000 * v15 / 0x1000000;
					v6 += 4;
					// continue -> 0x66a64
				}
				// 0x66a80
				v16 = g16;
				if (*(int32_t *)g20 > 0) {
					function_64ea0(*(int32_t *)v16);
					v19 = v16 + 4;
					v20 = 1;
					while (v20 < *(int32_t *)g20) {
						// 0x66a90
						function_64ea0(*(int32_t *)v19);
						v19 += 4;
						v20++;
						// continue -> 0x66a90
					}
					// 0x66aac
					v6 = 0;
					// branch -> 0x66ab0
					while (true) {
						// 0x66ab0
						v13 = 0;
						v12 = 0;
						// branch -> 0x66ab8
					lab_0x66ab8_7:
						while (true) {
							int32_t v39 = BLoad(); // 0x66ab8
							int32_t v40 = v13 + 1;          // 0x66ac0
							v13 = v40;
							int32_t v41 = v12;                   // 0x66ac8
							int32_t v42 = v41 + *(int32_t *)g30; // 0x66ac8
							v12 = v41 + 112;
							*(char *)(v6 + v42) = (char)v39;
							if (v40 >= 112) {
								// break -> 0x66ad8
								break;
							}
							// continue -> 0x66ab8
						}
						int32_t v43 = v6 + 1; // 0x66ad8
						v6 = v43;
						if (v43 >= 112) {
							// break -> 0x66ae4
							break;
						}
						// continue -> 0x66ab0
					}
					// 0x66ae4
					v6 = 0;
					// branch -> 0x66ae8
					int32_t v44; // r3
					while (true) {
						int32_t v45 = BLoad(); // 0x66af0
						v44 = v45;
						int32_t v46 = 1;                     // 0x66af8
						int32_t v47 = 0;                     // 0x66b00
						int32_t v48 = v47 + *(int32_t *)g29; // 0x66b00
						*(char *)(v6 + v48) = (char)v45;
						// branch -> 0x66af0
						while (v46 < 112) {
							// 0x66af0
							v45 = BLoad();
							v44 = v45;
							v46++;
							v47 += 112;
							v48 = v47 + *(int32_t *)g29;
							*(char *)(v6 + v48) = (char)v45;
							// continue -> 0x66af0
						}
						int32_t v49 = v6 + 1; // 0x66b10
						v6 = v49;
						if (v49 >= 112) {
							// break -> 0x66b1c
							break;
						}
						// continue -> 0x66ae8
					}
					// 0x66b1c
					int32_t v50;    // r0
					int32_t v51;    // r5
					int32_t v52;    // 0x66d7c
					int32_t v53;    // 0x66d90
					int32_t v54;    // 0x66dbc
					int32_t v55;    // 0x66de8
					int32_t v56;    // 0x66e14
					int32_t result; // 0x66e44
					int32_t v57;    // 0x66dc0
					int32_t v58;    // 0x66dec
					int32_t v59;    // 0x66d94
					if (*(char *)g17 != 0) {
						int32_t v60 = 0; // r25
						v6 = 0;
						// branch -> 0x66b30
						while (true) {
							int32_t v61 = WLoad();      // 0x66b38
							int32_t v62 = 1;                     // 0x66b40
							int32_t v63 = 0;                     // 0x66b48
							int32_t v64 = v63 + *(int32_t *)g28; // 0x66b48
							*(int16_t *)(v6 + v64) = (int16_t)(0x10000 * v61 / 0x10000);
							// branch -> 0x66b38
							while (v62 < 112) {
								// 0x66b38
								v61 = WLoad();
								v62++;
								v63 += 224;
								v64 = v63 + *(int32_t *)g28;
								*(int16_t *)(v6 + v64) = (int16_t)(0x10000 * v61 / 0x10000);
								// continue -> 0x66b38
							}
							int32_t v65 = v60 + 1; // 0x66b5c
							v60 = v65;
							v6 += 2;
							if (v65 >= 112) {
								// break -> 0x66b6c
								break;
							}
							// continue -> 0x66b30
						}
						// 0x66b6c
						v6 = 0;
						// branch -> 0x66b70
						while (true) {
							int32_t v66 = BLoad();      // 0x66b78
							int32_t v67 = 1;                     // 0x66b80
							int32_t v68 = 0;                     // 0x66b88
							int32_t v69 = v68 + *(int32_t *)g27; // 0x66b88
							*(char *)(v6 + v69) = (char)v66;
							// branch -> 0x66b78
							while (v67 < 112) {
								// 0x66b78
								v66 = BLoad();
								v67++;
								v68 += 112;
								v69 = v68 + *(int32_t *)g27;
								*(char *)(v6 + v69) = (char)v66;
								// continue -> 0x66b78
							}
							int32_t v70 = v6 + 1; // 0x66b98
							v6 = v70;
							if (v70 >= 112) {
								// break -> 0x66ba4
								break;
							}
							// continue -> 0x66b70
						}
						// 0x66ba4
						v6 = 0;
						// branch -> 0x66ba8
						while (true) {
							int32_t v71 = BLoad();      // 0x66bb0
							int32_t v72 = 1;                     // 0x66bb8
							int32_t v73 = 0;                     // 0x66bc0
							int32_t v74 = v73 + *(int32_t *)g26; // 0x66bc0
							*(char *)(v6 + v74) = (char)v71;
							// branch -> 0x66bb0
							while (v72 < 112) {
								// 0x66bb0
								v71 = BLoad();
								v72++;
								v73 += 112;
								v74 = v73 + *(int32_t *)g26;
								*(char *)(v6 + v74) = (char)v71;
								// continue -> 0x66bb0
							}
							int32_t v75 = v6 + 1; // 0x66bd0
							v6 = v75;
							if (v75 >= 112) {
								// break -> 0x66bdc
								break;
							}
							// continue -> 0x66ba8
						}
						// 0x66bdc
						v6 = 0;
						// branch -> 0x66be0
						while (true) {
							int32_t v76 = BLoad();      // 0x66be8
							int32_t v77 = 1;                     // 0x66bf0
							int32_t v78 = 0;                     // 0x66bf8
							int32_t v79 = v78 + *(int32_t *)g25; // 0x66bf8
							*(char *)(v6 + v79) = (char)v76;
							// branch -> 0x66be8
							while (v77 < 112) {
								// 0x66be8
								v76 = BLoad();
								v77++;
								v78 += 112;
								v79 = v78 + *(int32_t *)g25;
								*(char *)(v6 + v79) = (char)v76;
								// continue -> 0x66be8
							}
							int32_t v80 = v6 + 1; // 0x66c08
							v6 = v80;
							if (v80 >= 112) {
								// break -> 0x66c14
								break;
							}
							// continue -> 0x66be0
						}
						int32_t v81 = 0;                          // r23
						int32_t v82 = *(int32_t *)(g23 - 0x7798); // 0x66c18
						// branch -> 0x66c1c
						while (true) {
							// 0x66c1c
							v13 = 0;
							v12 = v82;
							int32_t v83 = OLoad(); // 0x66c24
							v13++;
							*(char *)v12 = (char)v83;
							v12 += 40;
							// branch -> 0x66c24
							while (v13 < 40) {
								// 0x66c24
								v83 = OLoad();
								v13++;
								*(char *)v12 = (char)v83;
								v12 += 40;
								// continue -> 0x66c24
							}
							int32_t v84 = v81 + 1; // 0x66c3c
							v81 = v84;
							if (v84 >= 40) {
								// break -> 0x66c4c
								break;
							}
							v82++;
							// continue -> 0x66c1c
						}
						int32_t v85 = 0; // r4
						int32_t v86 = 0; // 0x66c6838
						                 // branch -> 0x66c50
					lab_0x66c50:
						while (true) {
							int32_t v87 = 7; // ctr
							v44 = 0;
							int32_t v88 = v86; // 0x66c68
							int32_t v89 = 0;   // 0x66c64
							// branch -> 0x66c5c
							while (true) {
								// 0x66c5c
								v50 = 0;
								*(char *)(*(int32_t *)g36 + v89 + v88) = 0;
								int32_t v90 = *(int32_t *)g36 + 112 + v44; // 0x66c74
								*(char *)(v85 + v90) = (char)v50;
								int32_t v91 = *(int32_t *)g36 + 224 + v44; // 0x66c84
								*(char *)(v85 + v91) = (char)v50;
								int32_t v92 = *(int32_t *)g36 + 336 + v44; // 0x66c94
								*(char *)(v85 + v92) = (char)v50;
								int32_t v93 = *(int32_t *)g36 + 448 + v44; // 0x66ca4
								*(char *)(v85 + v93) = (char)v50;
								int32_t v94 = *(int32_t *)g36 + 560 + v44; // 0x66cb4
								*(char *)(v85 + v94) = (char)v50;
								int32_t v95 = *(int32_t *)g36 + 672 + v44; // 0x66cc4
								*(char *)(v85 + v95) = (char)v50;
								int32_t v96 = *(int32_t *)g36; // 0x66ccc
								int32_t v97 = v44;             // 0x66cd0
								v44 = v97 + 896;
								*(char *)(v85 + v96 + 784 + v97) = (char)v50;
								int32_t v98 = v44 + *(int32_t *)g36; // 0x66ce4
								*(char *)(v85 + v98) = (char)v50;
								int32_t v99 = *(int32_t *)g36 + 112 + v44; // 0x66cf4
								*(char *)(v85 + v99) = (char)v50;
								int32_t v100 = *(int32_t *)g36 + 224 + v44; // 0x66d04
								*(char *)(v85 + v100) = (char)v50;
								int32_t v101 = *(int32_t *)g36 + 336 + v44; // 0x66d14
								*(char *)(v85 + v101) = (char)v50;
								int32_t v102 = *(int32_t *)g36 + 448 + v44; // 0x66d24
								*(char *)(v85 + v102) = (char)v50;
								int32_t v103 = *(int32_t *)g36 + 560 + v44; // 0x66d34
								*(char *)(v85 + v103) = (char)v50;
								int32_t v104 = *(int32_t *)g36 + 672 + v44; // 0x66d44
								*(char *)(v85 + v104) = (char)v50;
								int32_t v105 = *(int32_t *)g36; // 0x66d4c
								int32_t v106 = v44;             // 0x66d50
								v44 = v106 + 896;
								*(char *)(v85 + v105 + 784 + v106) = (char)v50;
								int32_t v107 = v87 - 1; // 0x66d60
								v87 = v107;
								if (v107 == 0) {
									int32_t v108 = v85 + 1; // 0x66d64
									v85 = v108;
									if (v108 >= 112) {
										// break (via goto) -> 0x66d70
										goto lab_0x66d70;
									}
									v86 = v108;
									// continue (via goto) -> 0x66c50
									goto lab_0x66c50;
								} else {
									// 0x66c5c
									v88 = v85;
									v89 = v44;
									// branch -> 0x66c5c
									continue;
								}
							}
							int32_t v109 = v44; // 0x66d70
							v44 = AutomapZoomReset(v109);
							v44 = ResyncQuests();
							v44 = function_abd90();
							v52 = g23;
							int32_t v110 = *(int32_t *)(v52 - 0x7168); // 0x66d7c
							v85 = v110;
							v50 = 1;
							int32_t v111 = *(int32_t *)(v52 - 0x77a8); // 0x66d84
							v44 = v111;
							*(int32_t *)v110 = 1;
							int32_t v112 = g23;                         // 0x66d8c
							int32_t v113 = *(int32_t *)(v112 - 0x77e4); // 0x66d8c
							v51 = v113;
							v53 = v44;
							unsigned char v114 = *(char *)(v53 + 29); // 0x66d90
							v85 = v114;
							unsigned char v115 = *(char *)v113; // 0x66d94
							v59 = v115;
							v51 = v59;
							v54 = v53;
							if (v114 != 0) {
								int32_t v116 = *(int32_t *)(v53 + 52); // 0x66da0
								v85 = v116;
								if (v59 == v116) {
									int32_t v117 = *(int32_t *)(v53 + 156); // 0x66dac
									int32_t v118 = 52 * v117 + 20;          // 0x66db4
									v85 = v118;
									int32_t v119 = v50; // 0x66db8
									int32_t v120 = g24; // 0x66db8
									*(int32_t *)(v120 + v118) = v119;
									int32_t v121 = v44;
									v54 = v121;
									// branch -> 0x66dbc
								} else {
									v54 = v53;
								}
							}
							unsigned char v122 = *(char *)(v54 + 0x5609); // 0x66dbc
							v85 = v122;
							v57 = v54 + 0x55ec;
							v44 = v57;
							v55 = v57;
							if (v122 != 0) {
								int32_t v123 = *(int32_t *)(v54 + 0x5620); // 0x66dcc
								v85 = v123;
								int32_t v124 = v51; // 0x66dd0
								if (v124 == v123) {
									int32_t v125 = *(int32_t *)(v54 + 0x5688); // 0x66dd8
									int32_t v126 = 52 * v125 + 20;             // 0x66de0
									v85 = v126;
									int32_t v127 = v50; // 0x66de4
									int32_t v128 = g24; // 0x66de4
									*(int32_t *)(v128 + v126) = v127;
									int32_t v129 = v44;
									v55 = v129;
									// branch -> 0x66de8
								} else {
									v55 = v57;
								}
							}
							unsigned char v130 = *(char *)(v55 + 0x5609); // 0x66de8
							v85 = v130;
							v58 = v55 + 0x55ec;
							v44 = v58;
							v56 = v58;
							if (v130 != 0) {
								int32_t v131 = *(int32_t *)(v55 + 0x5620); // 0x66df8
								v85 = v131;
								int32_t v132 = v51; // 0x66dfc
								if (v132 == v131) {
									int32_t v133 = *(int32_t *)(v55 + 0x5688); // 0x66e04
									int32_t v134 = 52 * v133 + 20;             // 0x66e0c
									v85 = v134;
									int32_t v135 = v50; // 0x66e10
									int32_t v136 = g24; // 0x66e10
									*(int32_t *)(v136 + v134) = v135;
									int32_t v137 = v44;
									v56 = v137;
									// branch -> 0x66e14
								} else {
									v56 = v58;
								}
							}
							unsigned char v138 = *(char *)(v56 + 0x5609); // 0x66e14
							v85 = v138;
							v44 = v56 + 0x55ec;
							int32_t v139; // 0x66e40
							if (v138 == 0) {
								// 0x66e40
								v139 = g19;
								g34 = v139;
								result = mem_free_dbg();
								v44 = result;
								v50 = v1;
								g10 = v1;
								return result;
							}
							int32_t v140 = *(int32_t *)(v56 + 0x5620); // 0x66e24
							v85 = v140;
							int32_t v141 = v51; // 0x66e28
							if (v141 != v140) {
								// 0x66e40
								v139 = g19;
								g34 = v139;
								result = mem_free_dbg();
								v44 = result;
								v50 = v1;
								g10 = v1;
								return result;
							}
							int32_t v142 = *(int32_t *)(v56 + 0x5688); // 0x66e30
							int32_t v143 = 52 * v142 + 20;             // 0x66e38
							v85 = v143;
							int32_t v144 = v50; // 0x66e3c
							int32_t v145 = g24; // 0x66e3c
							*(int32_t *)(v145 + v143) = v144;
							// branch -> 0x66e40
							// 0x66e40
							v139 = g19;
							g34 = v139;
							result = mem_free_dbg();
							v44 = result;
							v50 = v1;
							g10 = v1;
							return result;
						}
					}
				lab_0x66d70:
					// 0x66d70
					AutomapZoomReset(v44);
					ResyncQuests();
					function_abd90();
					v52 = g23;
					v50 = 1;
					v44 = *(int32_t *)(v52 - 0x77a8);
					*(int32_t *)*(int32_t *)(v52 - 0x7168) = 1;
					v53 = v44;
					v59 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
					v51 = v59;
					v54 = v53;
					if (*(char *)(v53 + 29) != 0) {
						// 0x66da0
						if (v59 == *(int32_t *)(v53 + 52)) {
							// 0x66dac
							*(int32_t *)(g24 + 52 * *(int32_t *)(v53 + 156) + 20) = v50;
							v54 = v44;
							// branch -> 0x66dbc
						} else {
							v54 = v53;
						}
					}
					// 0x66dbc
					v57 = v54 + 0x55ec;
					v55 = v57;
					if (*(char *)(v54 + 0x5609) != 0) {
						// 0x66dcc
						if (v51 == *(int32_t *)(v54 + 0x5620)) {
							// 0x66dd8
							*(int32_t *)(g24 + 52 * *(int32_t *)(v54 + 0x5688) + 20) = v50;
							v55 = v57;
							// branch -> 0x66de8
						} else {
							v55 = v57;
						}
					}
					// 0x66de8
					v58 = v55 + 0x55ec;
					v56 = v58;
					if (*(char *)(v55 + 0x5609) != 0) {
						// 0x66df8
						if (v51 == *(int32_t *)(v55 + 0x5620)) {
							// 0x66e04
							*(int32_t *)(g24 + 52 * *(int32_t *)(v55 + 0x5688) + 20) = v50;
							v56 = v58;
							// branch -> 0x66e14
						} else {
							v56 = v58;
						}
					}
					// 0x66e14
					if (*(char *)(v56 + 0x5609) == 0) {
						// 0x66e40
						g34 = g19;
						result = mem_free_dbg();
						g10 = v1;
						return result;
					}
					// 0x66e24
					if (v51 == *(int32_t *)(v56 + 0x5620)) {
						// 0x66e30
						*(int32_t *)(g24 + 52 * *(int32_t *)(v56 + 0x5688) + 20) = v50;
						// branch -> 0x66e40
					}
					// 0x66e40
					g34 = g19;
					result = mem_free_dbg();
					g10 = v1;
					return result;
				}
				// 0x66aac
				v6 = 0;
				// branch -> 0x66ab0
				while (true) {
					// 0x66ab0
					v13 = 0;
					v12 = 0;
					// branch -> 0x66ab8
					goto lab_0x66ab8_7;
				}
			}
			// 0x66a38
			v6 = g16;
			v14 = BLoad();
			v17 = 1;
			*(int32_t *)v6 = 0x1000000 * v14 / 0x1000000;
			v6 += 4;
			// branch -> 0x66a40
			while (v17 < 127) {
				// 0x66a40
				v14 = BLoad();
				v17++;
				*(int32_t *)v6 = 0x1000000 * v14 / 0x1000000;
				v6 += 4;
				// continue -> 0x66a40
			}
			// 0x66a5c
			v6 = *(int32_t *)(g23 - 0x71f4);
			v15 = BLoad();
			v18 = 1;
			*(int32_t *)v6 = 0x1000000 * v15 / 0x1000000;
			v6 += 4;
			// branch -> 0x66a64
			while (v18 < 127) {
				// 0x66a64
				v15 = BLoad();
				v18++;
				*(int32_t *)v6 = 0x1000000 * v15 / 0x1000000;
				v6 += 4;
				// continue -> 0x66a64
			}
			// 0x66a80
			v16 = g16;
			if (*(int32_t *)g20 > 0) {
				function_64ea0(*(int32_t *)v16);
				v19 = v16 + 4;
				v20 = 1;
				while (v20 < *(int32_t *)g20) {
					// 0x66a90
					function_64ea0(*(int32_t *)v19);
					v19 += 4;
					v20++;
					// continue -> 0x66a90
				}
				// 0x66aac
				v6 = 0;
				// branch -> 0x66ab0
				while (true) {
					// 0x66ab0
					v13 = 0;
					v12 = 0;
					// branch -> 0x66ab8
					goto lab_0x66ab8_7;
				}
			}
			// 0x66aac
			v6 = 0;
			// branch -> 0x66ab0
			while (true) {
				// 0x66ab0
				v13 = 0;
				v12 = 0;
				// branch -> 0x66ab8
				goto lab_0x66ab8_7;
			}
		}
		// 0x66998
		v6 = g18;
		v24 = BLoad();
		v31 = 1;
		*(int32_t *)v6 = 0x1000000 * v24 / 0x1000000;
		v6 += 4;
		// branch -> 0x669a0
		while (v31 < 127) {
			// 0x669a0
			v24 = BLoad();
			v31++;
			*(int32_t *)v6 = 0x1000000 * v24 / 0x1000000;
			v6 += 4;
			// continue -> 0x669a0
		}
		// 0x669bc
		v6 = *(int32_t *)(g23 - 0x7154);
		v25 = BLoad();
		v32 = 1;
		*(int32_t *)v6 = 0x1000000 * v25 / 0x1000000;
		v6 += 4;
		// branch -> 0x669c4
		while (v32 < 127) {
			// 0x669c4
			v25 = BLoad();
			v32++;
			*(int32_t *)v6 = 0x1000000 * v25 / 0x1000000;
			v6 += 4;
			// continue -> 0x669c4
		}
		// 0x669e0
		v26 = g18;
		v28 = g22;
		v30 = v28;
		v29 = v26;
		if (*(int32_t *)v28 > 0) {
			function_64e5c(*(int32_t *)v26);
			v33 = v26 + 4;
			v34 = 1;
			v27 = g22;
			while (v34 < *(int32_t *)v27) {
				// 0x669f0
				function_64e5c(*(int32_t *)v33);
				v33 += 4;
				v34++;
				v27 = g22;
				// continue -> 0x669f0
			}
			// 0x66a00
			v30 = v27;
			v29 = g18;
			// branch -> 0x66a0c
		}
		// 0x66a0c
		g31 = 0;
		g32 = v29;
		if (*(int32_t *)v30 > 0) {
			function_9d6e4(*(int32_t *)v29);
			v35 = g32 + 4;
			g32 = v35;
			v36 = g31 + 1;
			g31 = v36;
			while (v36 < *(int32_t *)g22) {
				// 0x66a1c
				function_9d6e4(*(int32_t *)v35);
				v35 = g32 + 4;
				g32 = v35;
				v36 = g31 + 1;
				g31 = v36;
				// continue -> 0x66a1c
			}
			// 0x66a38
			v6 = g16;
			v14 = BLoad();
			v17 = 1;
			*(int32_t *)v6 = 0x1000000 * v14 / 0x1000000;
			v6 += 4;
			// branch -> 0x66a40
			while (v17 < 127) {
				// 0x66a40
				v14 = BLoad();
				v17++;
				*(int32_t *)v6 = 0x1000000 * v14 / 0x1000000;
				v6 += 4;
				// continue -> 0x66a40
			}
			// 0x66a5c
			v6 = *(int32_t *)(g23 - 0x71f4);
			v15 = BLoad();
			v18 = 1;
			*(int32_t *)v6 = 0x1000000 * v15 / 0x1000000;
			v6 += 4;
			// branch -> 0x66a64
			while (v18 < 127) {
				// 0x66a64
				v15 = BLoad();
				v18++;
				*(int32_t *)v6 = 0x1000000 * v15 / 0x1000000;
				v6 += 4;
				// continue -> 0x66a64
			}
			// 0x66a80
			v16 = g16;
			if (*(int32_t *)g20 > 0) {
				function_64ea0(*(int32_t *)v16);
				v19 = v16 + 4;
				v20 = 1;
				while (v20 < *(int32_t *)g20) {
					// 0x66a90
					function_64ea0(*(int32_t *)v19);
					v19 += 4;
					v20++;
					// continue -> 0x66a90
				}
				// 0x66aac
				v6 = 0;
				// branch -> 0x66ab0
				while (true) {
					// 0x66ab0
					v13 = 0;
					v12 = 0;
					// branch -> 0x66ab8
					goto lab_0x66ab8_7;
				}
			}
			// 0x66aac
			v6 = 0;
			// branch -> 0x66ab0
			while (true) {
				// 0x66ab0
				v13 = 0;
				v12 = 0;
				// branch -> 0x66ab8
				goto lab_0x66ab8_7;
			}
		}
	}
	// 0x66a38
	v6 = g16;
	v14 = BLoad();
	v17 = 1;
	*(int32_t *)v6 = 0x1000000 * v14 / 0x1000000;
	v6 += 4;
	// branch -> 0x66a40
	while (v17 < 127) {
		// 0x66a40
		v14 = BLoad();
		v17++;
		*(int32_t *)v6 = 0x1000000 * v14 / 0x1000000;
		v6 += 4;
		// continue -> 0x66a40
	}
	// 0x66a5c
	v6 = *(int32_t *)(g23 - 0x71f4);
	v15 = BLoad();
	v18 = 1;
	*(int32_t *)v6 = 0x1000000 * v15 / 0x1000000;
	v6 += 4;
	// branch -> 0x66a64
	while (v18 < 127) {
		// 0x66a64
		v15 = BLoad();
		v18++;
		*(int32_t *)v6 = 0x1000000 * v15 / 0x1000000;
		v6 += 4;
		// continue -> 0x66a64
	}
	// 0x66a80
	v16 = g16;
	if (*(int32_t *)g20 > 0) {
		function_64ea0(*(int32_t *)v16);
		v19 = v16 + 4;
		v20 = 1;
		while (v20 < *(int32_t *)g20) {
			// 0x66a90
			function_64ea0(*(int32_t *)v19);
			v19 += 4;
			v20++;
			// continue -> 0x66a90
		}
		// 0x66aac
		v6 = 0;
		// branch -> 0x66ab0
		while (true) {
			// 0x66ab0
			v13 = 0;
			v12 = 0;
			// branch -> 0x66ab8
			goto lab_0x66ab8_7;
		}
	}
	// 0x66aac
	v6 = 0;
	// branch -> 0x66ab0
	while (true) {
		// 0x66ab0
		v13 = 0;
		v12 = 0;
		// branch -> 0x66ab8
		goto lab_0x66ab8_7;
	}
}
