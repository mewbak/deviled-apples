// Address range: 0x323d4 - 0x32408
int32_t InitCursor(int32_t a1, int32_t a2)
{
	int32_t v1 = LoadFileInMem(*(int32_t *)(g23 - 0x6458), NULL); // 0x323e8
	g34 = v1;
	*(int32_t *)*(int32_t *)(g23 - 0x7634) = v1;
	return ClearCursor(v1);
}

// Address range: 0x32408 - 0x32430
int32_t FreeCursor(int32_t a1)
{
	int32_t v1 = MemFreeDbg((int32_t *)*(int32_t *)(g23 - 0x7634)); // 0x32418
	g34 = v1;
	return ClearCursor(v1);
}

// Address range: 0x32430 - 0x324a0
int32_t function_32430(void)
{
	int32_t v1 = 4 * g34;                    // 0x32434
	int32_t v2 = *(int32_t *)(g23 - 0x7638); // 0x3243c
	int32_t v3 = -0x6db6db6d;                // r6
	*(int32_t *)v2 = *(int32_t *)(v1 + g23 - 0x29e8);
	int32_t v4 = *(int32_t *)(g23 - 0x7640); // 0x32450
	int32_t v5 = *(int32_t *)(g23 - 0x7648); // 0x32458
	*(int32_t *)v4 = *(int32_t *)(v1 + g23 - 0x2718);
	int32_t result = *(int32_t *)(g23 - 0x764c); // r3
	int32_t v6 = *(int32_t *)v2;                 // 0x32464
	*(int32_t *)v5 = ((int32_t)((int64_t)v3 * (int64_t)v6 / 0x100000000) + v6) / 16;
	int32_t v7 = *(int32_t *)v4; // 0x32480
	*(int32_t *)result = ((int32_t)((int64_t)v3 * (int64_t)v7 / 0x100000000) + v7) / 16;
	return result;
}

// Address range: 0x324a0 - 0x324ec
int32_t SetCursor_(void)
{
	int32_t v1 = g34;    // 0x324ac
	int32_t v2 = 4 * v1; // r6
	*(int32_t *)*(int32_t *)(g23 - 0x7744) = v1;
	int32_t v3 = *(int32_t *)(v2 + g23 - 0x29e8); // 0x324c0
	*(int32_t *)*(int32_t *)(g23 - 0x7650) = v3;
	int32_t v4 = *(int32_t *)(v2 + g23 - 0x2718); // 0x324d0
	*(int32_t *)*(int32_t *)(g23 - 0x7654) = v4;
	return function_32430();
}

// Address range: 0x324ec - 0x3250c
int32_t function_324ec(int32_t a1)
{
	int32_t result = SetCursor_(); // 0x324f8
	return result;
}

// Address range: 0x3250c - 0x3257c
int32_t function_3250c(int32_t a1)
{
	// 0x3250c
	g34 = 1;
	SetCursor_();
	int32_t v1 = -1;                         // r0
	int32_t v2 = *(int32_t *)(g23 - 0x7658); // 0x32528
	*(int32_t *)v2 = *(int32_t *)*(int32_t *)(g23 - 0x77b0);
	int32_t v3 = *(int32_t *)(g23 - 0x765c); // 0x32538
	*(int32_t *)v3 = *(int32_t *)*(int32_t *)(g23 - 0x77b4);
	*(int32_t *)(g23 - 0x4f84) = v1;
	*(int32_t *)*(int32_t *)(g23 - 0x7750) = v1;
	int32_t v4 = *(int32_t *)(g23 - 0x775c); // 0x32558
	g34 = v4;
	*(char *)*(int32_t *)(g23 - 0x774c) = (char)v1;
	*(char *)*(int32_t *)(g23 - 0x7748) = (char)v1;
	*(char *)v4 = (char)v1;
	return ClearCursor(v4);
}

// Address range: 0x3257c - 0x32720
int32_t function_3257c(int32_t a1)
{
	int32_t v1 = g10;                        // 0x32580
	int32_t v2 = *(int32_t *)(g23 - 0x7668); // 0x32584
	g21 = 0;
	g27 = *(int32_t *)(g23 - 0x77a8);
	g28 = *(int32_t *)(g23 - 0x6460);
	g29 = *(int32_t *)(g23 - 0x76b4);
	g30 = *(int32_t *)(g23 - 0x645c);
	g31 = *(int32_t *)(g23 - 0x76a4);
	g32 = *(int32_t *)(g23 - 0x7740);
	int32_t v3 = *(int32_t *)(g23 - 0x7664); // 0x325a4
	g33 = v3;
	g35 = *(int32_t *)(g23 - 0x765c);
	g36 = *(int32_t *)(g23 - 0x7658);
	int32_t v4 = *(int32_t *)(g23 - 0x7660); // 0x325b0
	g25 = v4;
	if (*(int32_t *)v2 > 0) {
		int32_t v5 = 0; // 0x326fc11
		while (true) {
			int32_t v6 = 180 * *(int32_t *)v4; // 0x325c4
			g34 = v6;
			int32_t v7 = v6 + v3; // 0x325c8
			int32_t v8 = v2;      // 0x32700
			int32_t v9 = v5;      // 0x326fc
			int32_t v10 = v4;     // 0x326f8
			int32_t v11;          // 0x326f8
			int32_t v12;          // 0x326fc
			if (*(int32_t *)v7 == 10) {
				// 0x325d4
				g24 = v7;
				int32_t v13 = *(int32_t *)g36; // 0x325d8
				int32_t v14 = v7 + 4;          // 0x325dc
				g22 = v14;
				int32_t v15 = *(int32_t *)v14; // 0x325e0
				g34 = v15;
				if (v13 == v15 - 1) {
					// 0x325f0
					if (*(int32_t *)g35 == *(int32_t *)(v7 + 8)) {
					lab_0x326a8_6:
						// 0x326a8
						*(int32_t *)g32 = 1;
						function_2dc1c();
						g34 = g31;
						g37 = g30;
						strcpy();
						g37 = g28;
						g38 = 0x55ec * *(int32_t *)(g24 + 120) + 316 + g27;
						sprintf();
						g34 = function_2dbac(g29, 1);
						*(int32_t *)g36 = *(int32_t *)g22;
						*(int32_t *)g35 = *(int32_t *)(g24 + 8);
						v8 = g26;
						v9 = g21;
						v10 = g25;
						// branch -> 0x326f8
					lab_0x326f8_4:
						// 0x326f8
						v11 = v10 + 4;
						g25 = v11;
						v12 = v9 + 1;
						g21 = v12;
						if (v12 >= *(int32_t *)v8) {
							// 0x3270c
							g10 = v1;
							return g34;
						}
					lab_0x326f8_5:
						// 0x326f8
						v2 = v8;
						v5 = v12;
						v3 = g33;
						v4 = v11;
						// branch -> 0x325c0
						continue;
					}
				}
				// 0x32600
				if (v13 == v15) {
					// 0x32608
					if (*(int32_t *)g35 == *(int32_t *)(v7 + 8) - 1) {
						goto lab_0x326a8_6;
					}
					// 0x3261c
					if (v13 == v15 - 1) {
					lab_0x32624:
						// 0x32624
						if (*(int32_t *)g35 == *(int32_t *)(v7 + 8) - 1) {
							goto lab_0x326a8_6;
						}
						// 0x32638
						if (v13 == v15 - 2) {
						lab_0x32644:;
							int32_t *v16 = (int32_t *)(v7 + 8); // 0x32644
							int32_t *v17 = (int32_t *)g35;      // 0x32648
							if (*v17 == *v16 - 1) {
								goto lab_0x326a8_6;
							}
							// 0x32660
							if (*v17 == *v16 - 2) {
								goto lab_0x326a8_6;
							}
						lab_0x32674:
							// 0x32674
							if (v13 == v15 - 1) {
								// 0x3267c
								if (*(int32_t *)g35 == *(int32_t *)(v7 + 8) - 2) {
									goto lab_0x326a8_6;
								}
								// 0x32690
								if (v13 != v15) {
									v8 = v2;
									v9 = v5;
									v10 = v4;
									goto lab_0x326f8_4;
								}
							lab_0x32698:;
								int32_t v18 = *(int32_t *)g35; // 0x32698
								g34 = v18;
								if (v18 == *(int32_t *)(v7 + 8)) {
									goto lab_0x326a8_6;
								}
								v8 = v2;
								v9 = v5;
								v10 = v4;
								goto lab_0x326f8_4;
							}
							// 0x32690
							if (v13 == v15) {
								goto lab_0x32698;
							}
							v8 = v2;
							v9 = v5;
							v10 = v4;
							goto lab_0x326f8_4;
						} else {
						lab_0x32658:
							// 0x32658
							// branch -> 0x32674
							goto lab_0x32674;
						}
						int32_t v19 = g32; // 0x326ac
						*(int32_t *)v19 = 1;
						function_2dc1c();
						int32_t v20 = g31; // 0x326b4
						g34 = v20;
						int32_t v21 = g30; // 0x326b8
						g37 = v21;
						strcpy();
						int32_t v22 = g24;                     // 0x326c0
						int32_t v23 = *(int32_t *)(v22 + 120); // 0x326c0
						int32_t v24 = g28;                     // 0x326c8
						g37 = v24;
						int32_t v25 = g27; // 0x326d4
						g38 = 0x55ec * v23 + 316 + v25;
						sprintf();
						int32_t v26 = g29; // 0x326dc
						g34 = function_2dbac(v26, 1);
						int32_t v27 = g22;             // 0x326e8
						int32_t v28 = *(int32_t *)v27; // 0x326e8
						int32_t v29 = g36;             // 0x326ec
						*(int32_t *)v29 = v28;
						int32_t v30 = g24;                   // 0x326f0
						int32_t v31 = *(int32_t *)(v30 + 8); // 0x326f0
						int32_t v32 = g35;                   // 0x326f4
						*(int32_t *)v32 = v31;
						int32_t v33 = g25;
						int32_t v34 = g21;
						int32_t v35 = g26;
						v8 = v35;
						v9 = v34;
						v10 = v33;
						// branch -> 0x326f8
						goto lab_0x326f8_4;
					}
				lab_0x32638:
					// 0x32638
					if (v13 == v15 - 2) {
						goto lab_0x32644;
					}
					goto lab_0x32658;
				}
				// 0x3261c
				if (v13 == v15 - 1) {
					goto lab_0x32624;
				}
				goto lab_0x32638;
			}
			// 0x326f8
			v11 = v10 + 4;
			g25 = v11;
			v12 = v9 + 1;
			g21 = v12;
			if (v12 < *(int32_t *)v8) {
				goto lab_0x326f8_5;
			}
			// 0x3270c
			g10 = v1;
			return g34;
		}
	}
	// 0x3270c
	g10 = v1;
	return g34;
}

// Address range: 0x32720 - 0x328d4
int32_t function_32720(int32_t a1)
{
	// 0x32720
	g25 = *(int32_t *)(g23 - 0x646c);
	g20 = 0;
	int32_t v1 = *(int32_t *)(g23 - 0x7668); // 0x3273c
	g29 = v1;
	g30 = *(int32_t *)(g23 - 0x76b4);
	g31 = *(int32_t *)(g23 - 0x76a4);
	g32 = *(int32_t *)(g23 - 0x7740);
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x3274c
	g33 = v2;
	g35 = *(int32_t *)(g23 - 0x765c);
	g36 = *(int32_t *)(g23 - 0x7658);
	int32_t v3 = *(int32_t *)(g23 - 0x7660); // 0x32758
	g24 = v3;
	if (*(int32_t *)v1 > 0) {
		int32_t v4 = 0; // 0x328b011
		while (true) {
			int32_t v5 = 180 * *(int32_t *)v3; // 0x3276c
			g34 = v5;
			int32_t v6 = v5 + v2; // 0x32770
			int32_t v7 = v1;      // 0x328b4
			int32_t v8 = v4;      // 0x328b0
			int32_t v9 = v3;      // 0x328ac
			int32_t v10;          // 0x328ac
			int32_t v11;          // 0x328b0
			if (*(int32_t *)v6 == 65) {
				// 0x3277c
				g22 = v6;
				int32_t v12 = *(int32_t *)g36; // 0x32780
				int32_t v13 = v6 + 4;          // 0x32784
				g21 = v13;
				int32_t v14 = *(int32_t *)v13; // 0x32788
				g34 = v14;
				if (v12 == v14 - 1) {
					// 0x32798
					if (*(int32_t *)g35 == *(int32_t *)(v6 + 8)) {
					lab_0x32850_6:
						// 0x32850
						*(int32_t *)g32 = 1;
						function_2dc1c();
						g34 = g31;
						g37 = *(int32_t *)(g23 - 0x6464);
						strcpy();
						g34 = g30;
						if (*(char *)*(int32_t *)(g23 - 0x77d8) == 0) {
						lab_0x32874:
							// 0x32874
							g37 = *(int32_t *)(g23 - 0x6468);
							strcpy();
							// branch -> 0x32890
						} else {
						lab_0x32884:
							// 0x32884
							g37 = g25;
							strcpy();
							// branch -> 0x32890
						}
						// 0x32890
						g34 = function_2dbac(g30, 1);
						*(int32_t *)g36 = *(int32_t *)g21;
						*(int32_t *)g35 = *(int32_t *)(g22 + 8);
						v7 = g29;
						v8 = g20;
						v9 = g24;
						// branch -> 0x328ac
					lab_0x328ac_3:
						// 0x328ac
						v10 = v9 + 4;
						g24 = v10;
						v11 = v8 + 1;
						g20 = v11;
						if (v11 >= *(int32_t *)v7) {
							// 0x328c0
							return g34;
						}
					lab_0x328ac_4:
						// 0x328ac
						v1 = v7;
						v4 = v11;
						v2 = g33;
						v3 = v10;
						// branch -> 0x32768
						continue;
					}
				}
				// 0x327a8
				if (v12 == v14) {
					// 0x327b0
					if (*(int32_t *)g35 == *(int32_t *)(v6 + 8) - 1) {
						goto lab_0x32850_6;
					}
					// 0x327c4
					if (v12 == v14 - 1) {
					lab_0x327cc:
						// 0x327cc
						if (*(int32_t *)g35 == *(int32_t *)(v6 + 8) - 1) {
							goto lab_0x32850_6;
						}
						// 0x327e0
						if (v12 == v14 - 2) {
						lab_0x327ec:;
							int32_t *v15 = (int32_t *)(v6 + 8); // 0x327ec
							int32_t *v16 = (int32_t *)g35;      // 0x327f0
							if (*v16 == *v15 - 1) {
								goto lab_0x32850_6;
							}
							// 0x32808
							if (*v16 == *v15 - 2) {
								goto lab_0x32850_6;
							}
						lab_0x3281c:
							// 0x3281c
							if (v12 == v14 - 1) {
								// 0x32824
								if (*(int32_t *)g35 == *(int32_t *)(v6 + 8) - 2) {
									goto lab_0x32850_6;
								}
								// 0x32838
								if (v12 != v14) {
									v7 = v1;
									v8 = v4;
									v9 = v3;
									goto lab_0x328ac_3;
								}
							lab_0x32840:;
								int32_t v17 = *(int32_t *)g35; // 0x32840
								g34 = v17;
								if (v17 == *(int32_t *)(v6 + 8)) {
									goto lab_0x32850_6;
								}
								v7 = v1;
								v8 = v4;
								v9 = v3;
								goto lab_0x328ac_3;
							}
							// 0x32838
							if (v12 == v14) {
								goto lab_0x32840;
							}
							v7 = v1;
							v8 = v4;
							v9 = v3;
							goto lab_0x328ac_3;
						} else {
						lab_0x32800:
							// 0x32800
							// branch -> 0x3281c
							goto lab_0x3281c;
						}
						int32_t v18 = g32; // 0x32854
						*(int32_t *)v18 = 1;
						function_2dc1c();
						int32_t v19 = g31; // 0x3285c
						g34 = v19;
						int32_t v20;       // r24
						int32_t v21 = v20; // 0x32860
						g37 = v21;
						strcpy();
						int32_t v22;             // r23
						int32_t v23 = v22;       // 0x32868
						char v24 = *(char *)v23; // 0x32868
						int32_t v25 = g30;       // 0x32874
						g34 = v25;
						if (v24 == 0) {
							goto lab_0x32874;
						}
						goto lab_0x32884;
					}
				lab_0x327e0:
					// 0x327e0
					if (v12 == v14 - 2) {
						goto lab_0x327ec;
					}
					goto lab_0x32800;
				}
				// 0x327c4
				if (v12 == v14 - 1) {
					goto lab_0x327cc;
				}
				goto lab_0x327e0;
			}
			// 0x328ac
			v10 = v9 + 4;
			g24 = v10;
			v11 = v8 + 1;
			g20 = v11;
			if (v11 < *(int32_t *)v7) {
				goto lab_0x328ac_4;
			}
			// 0x328c0
			return g34;
		}
	}
	// 0x328c0
	return g34;
}

// Address range: 0x328d4 - 0x33db8
int32_t CheckCursMove(int32_t a1)
{
	int32_t v1 = g10;                        // 0x328d8
	int32_t v2 = *(int32_t *)(g23 - 0x76a8); // 0x328e0
	int32_t v3 = v2;                         // r23
	int32_t v4 = *(int32_t *)(g23 - 0x7690); // 0x328e4
	int32_t v5 = *(int32_t *)(g23 - 0x7688); // 0x328e8
	g16 = *(int32_t *)(g23 - 0x7684);
	int32_t v6 = *(int32_t *)(g23 - 0x7680); // 0x328f0
	g25 = *(int32_t *)(g23 - 0x7754);
	g24 = *(int32_t *)(g23 - 0x779c);
	g22 = *(int32_t *)(g23 - 0x767c);
	int32_t v7 = *(int32_t *)(g23 - 0x77b8); // r24
	g32 = *(int32_t *)(g23 - 0x77a8);
	g33 = *(int32_t *)(g23 - 0x775c);
	g21 = *(int32_t *)(g23 - 0x7748);
	g20 = *(int32_t *)(g23 - 0x774c);
	g29 = *(int32_t *)(g23 - 0x7750);
	g36 = *(int32_t *)(g23 - 0x765c);
	g35 = *(int32_t *)(g23 - 0x7658);
	int32_t v8 = *(int32_t *)v2;                          // 0x32934
	uint32_t v9 = *(int32_t *)*(int32_t *)(g23 - 0x76ac); // 0x32938
	int32_t v10 = v9;                                     // r27
	int32_t v11;                                          // ctr
	int32_t v12;                                          // r0
	int32_t v13;                                          // r10
	int32_t v14;                                          // r11
	int32_t v15;                                          // r12
	int32_t v16;                                          // r22
	int32_t v17;                                          // r26
	int32_t result3;                                      // r3
	int32_t v18;                                          // r4
	int32_t v19;                                          // r5
	int32_t v20;                                          // r6
	int32_t v21;                                          // r7
	int32_t v22;                                          // r8
	int32_t v23;                                          // r9
	int32_t v24;
	int32_t v25;
	int32_t v26;
	int32_t v27;
	int32_t v28;
	int32_t v29;
	int32_t v30;
	int32_t v31;
	int32_t v32;
	int32_t v33;
	int32_t v34;
	int32_t v35;
	int32_t v36;
	int32_t v37;
	int32_t v38;
	int32_t v39;
	int32_t v40;
	int32_t v41;
	int32_t v42;
	int32_t v43;
	int32_t v44;
	int32_t v45;
	int32_t v46;  // 0x329b4
	int32_t v47;  // 0x329c4
	uint32_t v48; // 0x329c8
	int32_t v49;  // 0x329d0
	int32_t v50;  // 0x32a3c
	int32_t v51;
	int32_t v52; // 0x32a54
	int32_t v53;
	int32_t v54; // 0x32a6c
	int32_t v55; // 0x32a70
	int32_t v56; // 0x32af4
	int32_t v57;
	int32_t v58; // 0x32b0c
	int32_t v59;
	int32_t v60;        // 0x32b34
	int32_t v61;        // 0x32b58
	int32_t v62;        // 0x32b6c
	int32_t v63;        // 0x32b80
	int32_t v64;        // 0x32bb4
	int32_t v65;        // 0x32be0
	int32_t v66;        // 0x32ce8
	int32_t v67;        // 0x32cf4
	int32_t v68;        // 0x32d24
	int32_t v69;        // 0x32d88
	int32_t v70;        // 0x32d94
	int32_t v71;        // 0x32dc4
	int32_t v72;        // 0x32e20
	int32_t v73;        // 0x32e2c
	int32_t v74;        // 0x32e5c
	int32_t v75;        // 0x32ef0
	int32_t v76;        // 0x32f80
	int32_t v77;        // 0x33000
	int32_t v78;        // 0x33084
	int32_t v79;        // 0x330e0
	int32_t v80;        // 0x33110
	int32_t v81;        // 0x3314c
	int32_t v82;        // 0x33158
	int32_t v83;        // 0x33188
	int32_t v84;        // 0x331e0
	int32_t v85;        // 0x331ec
	int32_t v86;        // 0x3321c
	int32_t v87;        // 0x3326c
	int32_t v88;        // 0x33278
	int32_t v89;        // 0x332a8
	int32_t v90;        // 0x33330
	int32_t v91;        // 0x333b4
	int32_t v92;        // 0x33428
	int32_t v93;        // 0x334a0
	int32_t v94;        // 0x334f0
	int32_t v95;        // 0x33520
	int32_t v96;        // 0x3354c
	int32_t v97;        // 0x33554
	int32_t v98;        // 0x33588
	int32_t v99;        // 0x3359c
	int32_t v100;       // 0x335f0
	int32_t v101;       // 0x3364c
	int32_t v102;       // 0x33654
	int32_t v103;       // 0x336bc
	int32_t v104;       // 0x336c4
	int32_t v105;       // 0x3372c
	int32_t v106;       // 0x3377c
	int32_t v107;       // 0x3378c
	int32_t v108;       // 0x33794
	int32_t v109;       // 0x337c0
	int32_t v110;       // 0x337e8
	int32_t v111;       // 0x337f8
	int32_t v112;       // 0x33820
	int32_t v113;       // 0x33830
	int32_t v114;       // 0x33858
	int32_t v115;       // 0x33894
	int32_t v116;       // 0x33a14
	int32_t v117;       // 0x33a1c
	int32_t v118;       // 0x33a80
	int32_t v119;       // 0x33a88
	int32_t v120;       // 0x33aec
	int32_t v121;       // 0x33b50
	int32_t v122;       // 0x33ba0
	int32_t v123;       // 0x33bd8
	int32_t v124;       // 0x33be4
	int32_t v125;       // 0x33c34
	int32_t v126;       // 0x33c40
	int32_t v127;       // 0x33c90
	int32_t v128;       // 0x33ce4
	int32_t v129;       // 0x33d20
	int32_t v130;       // 0x33d48
	int32_t v131;       // 0x329dc
	int32_t v132;       // 0x329f4
	uint32_t v133;      // 0x32a6c
	int32_t v134;       // 0x32a70
	int32_t v135;       // 0x32ac4
	int32_t v136;       // 0x32ae4
	int32_t v137;       // 0x32e20
	int32_t v138;       // 0x32e2c
	int32_t *v139;      // 0x330e0
	int32_t v140;       // 0x3326c
	int32_t v141;       // 0x33278
	int32_t *v142;      // 0x334f0
	int32_t v143;       // 0x335c4
	int32_t v144;       // 0x335cc
	int32_t v145;       // 0x335f0
	int32_t v146;       // 0x335f4
	int32_t *v147;      // 0x3361c
	int32_t v148;       // 0x3372c
	int32_t v149;       // 0x33734
	int32_t v150;       // 0x3377c
	int32_t v151;       // 0x337c0
	int32_t v152;       // 0x33800
	int32_t v153;       // 0x3399c
	int32_t v154;       // 0x33aec
	int32_t v155;       // 0x33af4
	int32_t v156;       // 0x33b50
	int32_t v157;       // 0x33c90
	int32_t v158;       // 0x33c9c
	int32_t v159;       // 0x33cb0
	int32_t v160;       // 0x33ce4
	int32_t v161;       // 0x33d1c
	int32_t v162;       // 0x33d4c
	int32_t v163;       // 0x33d94
	int32_t v164;       // 0x329b8
	int32_t v165;       // 0x329dc
	int32_t v166;       // 0x329ec
	int32_t v167;       // 0x329f4
	int32_t v168;       // 0x32a1c
	int32_t v169;       // 0x32a20
	int32_t v170;       // 0x32a2c
	uint32_t v171;      // 0x32a8c
	uint32_t v172;      // 0x32a98
	int32_t v173;       // 0x32ab8
	int32_t v174;       // 0x32abc
	int32_t v175;       // 0x32be4
	uint32_t v176;      // 0x32c00
	int32_t v177;       // 0x32d10
	int32_t v178;       // 0x32d4c
	int32_t v179;       // 0x32db0
	int32_t v180;       // 0x32dec
	int32_t v181;       // 0x32e24
	int32_t v182;       // 0x32e48
	int32_t v183;       // 0x32e84
	int32_t v184;       // 0x32ec0
	int32_t v185;       // 0x32edc
	int32_t v186;       // 0x32f18
	int32_t v187;       // 0x32f50
	int32_t v188;       // 0x32f6c
	int32_t v189;       // 0x32fa8
	int32_t v190;       // 0x33028
	int32_t v191;       // 0x33054
	int32_t v192;       // 0x33070
	int32_t v193;       // 0x330ac
	int32_t v194;       // 0x330e0
	int32_t v195;       // 0x33110
	int32_t v196;       // 0x33174
	int32_t v197;       // 0x331a4
	int32_t v198;       // 0x33208
	int32_t v199;       // 0x33238
	int32_t v200;       // 0x33270
	int32_t v201;       // 0x33294
	int32_t v202;       // 0x332c4
	int32_t v203;       // 0x33300
	int32_t v204;       // 0x3331c
	int32_t v205;       // 0x3334c
	int32_t v206;       // 0x33384
	int32_t v207;       // 0x333a0
	int32_t v208;       // 0x333d0
	int32_t v209;       // 0x33444
	int32_t v210;       // 0x33470
	int32_t v211;       // 0x3348c
	int32_t v212;       // 0x334bc
	int32_t v213;       // 0x334f0
	int32_t v214;       // 0x33520
	int32_t v215;       // 0x335c8
	int32_t v216;       // 0x33640
	int32_t v217;       // 0x3368c
	int32_t v218;       // 0x336fc
	int32_t v219;       // 0x33730
	int32_t v220;       // 0x33778
	int32_t v221;       // 0x33874
	int32_t v222;       // 0x3388c
	int32_t v223;       // 0x339c8
	int32_t v224;       // 0x33af0
	int32_t v225;       // 0x33c08
	int32_t v226;       // 0x33c64
	int32_t v227;       // 0x33c98
	int32_t v228;       // 0x33cb8
	int32_t v229;       // 0x33d00
	int32_t v230;       // 0x33d7c
	int32_t result5;    // 0x33d8c
	int32_t v231;       // 0x329f0
	int32_t v232;       // 0x32a00
	int32_t v233;       // 0x32a84
	int32_t v234;       // 0x32a88
	int32_t v235;       // 0x32bbc
	int32_t v236;       // 0x32c28
	int16_t v237;       // 0x32cfc
	int16_t v238;       // 0x32d9c
	int16_t v239;       // 0x32e34
	int16_t v240;       // 0x32ec8
	int16_t v241;       // 0x32f58
	int16_t v242;       // 0x3305c
	int16_t v243;       // 0x33160
	int16_t v244;       // 0x331f4
	int16_t v245;       // 0x33280
	int16_t v246;       // 0x33308
	int16_t v247;       // 0x3338c
	int16_t v248;       // 0x33478
	uint16_t v249;      // 0x33568
	uint16_t v250;      // 0x335a4
	uint16_t v251;      // 0x335f8
	unsigned char v252; // 0x33664
	unsigned char v253; // 0x336d4
	int32_t v254;       // 0x3378c
	unsigned char v255; // 0x339a0
	unsigned char v256; // 0x33a2c
	unsigned char v257; // 0x33a98
	char v258;          // 0x33b2c
	unsigned char v259; // 0x33b58
	int32_t v260;       // 0x33be0
	unsigned char v261; // 0x33bf4
	int32_t v262;       // 0x33c3c
	unsigned char v263; // 0x33c50
	unsigned char v264; // 0x33cec
	int32_t v265;       // 0x32d60
	int32_t v266;       // 0x32e00
	int32_t v267;       // 0x32e98
	int32_t v268;       // 0x32f2c
	int32_t v269;       // 0x32fbc
	int16_t v270;       // 0x32fdc
	int32_t v271;       // 0x330c0
	int32_t v272;       // 0x331b8
	int32_t v273;       // 0x3324c
	int32_t v274;       // 0x332d8
	int32_t v275;       // 0x33360
	int32_t v276;       // 0x333e4
	int16_t v277;       // 0x33404
	int32_t v278;       // 0x334d0
	int32_t v279;       // 0x33568
	int32_t v280;       // 0x335a4
	uint16_t v281;      // 0x335d4
	int32_t v282;       // 0x335f8
	int32_t v283;       // 0x33664
	int32_t v284;       // 0x336d4
	unsigned char v285; // 0x33738
	int32_t v286;       // 0x339a0
	int32_t v287;       // 0x33a2c
	int32_t v288;       // 0x33a98
	unsigned char v289; // 0x33af8
	int32_t v290;       // 0x33b58
	int32_t v291;       // 0x33bf4
	int32_t v292;       // 0x33c50
	unsigned char v293; // 0x33ca0
	char v294;          // 0x33cc0
	int32_t v295;       // 0x33cec
	int32_t v296;       // 0x32ff4
	int32_t v297;       // 0x3341c
	int32_t v298;       // 0x335d4
	int32_t v299;       // 0x33738
	int32_t v300;       // 0x33af8
	int32_t v301;       // 0x33ca0
	int32_t v302;       // 0x32a64
	int32_t v303;       // 0x32a68
	if (*(int32_t *)*(int32_t *)(g23 - 0x77c4) == 0) {
		// 0x32940
		if (*(int32_t *)*(int32_t *)(g23 - 0x77c8) == 0) {
			// 0x32968
			if (*(int32_t *)*(int32_t *)(g23 - 0x77bc) == 0) {
				// 0x32978
				if (*(int32_t *)*(int32_t *)(g23 - 0x77c0) == 0) {
					// 0x3299c
					if (v9 >= 352) {
						// 0x329a4
						if (function_c6730() != 0) {
							// 0x329b0
							v10 = 351;
							// branch -> 0x329b4
						}
					}
					// 0x329b4
					v46 = g23;
					v164 = *(int32_t *)*(int32_t *)(v46 - 0x766c);
					v47 = v8;
					if (v164 == 0) {
						// 0x329c4
						v48 = v10;
						v132 = v48 / 2 | v48 & -0x80000000;
						v131 = v47 / 2 | v47 & -0x80000000;
						// branch -> 0x329cc
					} else {
						// 0x329b4
						v132 = v10;
						v131 = v47;
						// branch -> 0x329cc
					}
					// 0x329cc
					v49 = v7;
					v165 = v131 - *(int32_t *)v49;
					v166 = g32 + 0x55ec * *(int32_t *)*(int32_t *)(v46 - 0x77ac);
					v231 = *(int32_t *)(v166 + 484);
					v167 = v132 - *(int32_t *)(v49 + 4);
					v10 = v167;
					v232 = *(int32_t *)(v166 + 488);
					v168 = v231 / 256 - (*(int32_t *)(v166 + 104) + v231) / 256;
					v169 = v232 / 256 - (*(int32_t *)(v166 + 108) + v232) / 256;
					v53 = v167;
					v51 = v165;
					if (*(int32_t *)(v49 + 16) != 0) {
						// 0x32a28
						v170 = v167 - v169;
						v10 = v170;
						v53 = v170;
						v51 = v165 - v168;
						// branch -> 0x32a30
					}
					// 0x32a30
					v50 = v51;
					if (v51 <= 0xffffffff) {
						// 0x32a38
						v50 = 0;
						// branch -> 0x32a3c
					}
					// 0x32a3c
					v54 = v50;
					if (v50 >= 640) {
						// 0x32a44
						v54 = 640;
						// branch -> 0x32a48
					}
					// 0x32a48
					v52 = v53;
					if (v53 <= 0xffffffff) {
						// 0x32a50
						v10 = 0;
						v52 = 0;
						// branch -> 0x32a54
					}
					// 0x32a54
					v55 = v52;
					if (v52 >= 480) {
						// 0x32a5c
						v10 = 480;
						v55 = 480;
						// branch -> 0x32a60
					}
					// 0x32a60
					v302 = v54 / 64;
					v303 = v55 / 32;
					v133 = v54 % 64;
					v134 = v55 % 32;
					v233 = v133 / 2;
					v234 = *(int32_t *)(v46 - 0x77b0);
					v171 = -1 - v233;
					v172 = v134 - v233;
					v173 = *(int32_t *)*(int32_t *)(v46 - 0x77b4) + v303 - v302;
					g31 = v173;
					v174 = v303 + v302 + *(int32_t *)v234 - (v164 == 0 ? 5 : 10);
					g30 = v174;
					v59 = v173;
					if (v172 > v171) {
						// 0x32ac4
						v135 = v173 - 1;
						g31 = v135;
						v59 = v135;
						// branch -> 0x32ac8
					}
					// 0x32ac8
					v57 = v174;
					if (v134 + (v233 || -32) <= v233 - 33) {
						// 0x32ae4
						v136 = v174 + 1;
						g30 = v136;
						v57 = v136;
						// branch -> 0x32ae8
					}
					// 0x32ae8
					v56 = v57;
					if (v57 <= 0xffffffff) {
						// 0x32af0
						g30 = 0;
						v56 = 0;
						// branch -> 0x32af4
					}
					// 0x32af4
					if (v56 >= 112) {
						// 0x32afc
						g30 = 111;
						// branch -> 0x32b00
					}
					// 0x32b00
					v58 = v59;
					if (v59 <= 0xffffffff) {
						// 0x32b08
						g31 = 0;
						v58 = 0;
						// branch -> 0x32b0c
					}
					// 0x32b0c
					if (v58 >= 112) {
						// 0x32b14
						g31 = 111;
						// branch -> 0x32b18
					}
					// 0x32b18
					v60 = 0;
					if (v172 > v171) {
						// 0x32b28
						if (v134 + (v233 || -32) <= v233 - 33) {
							// 0x32b30
							v60 = 1;
							// branch -> 0x32b34
						} else {
							v60 = 0;
						}
					}
					// 0x32b34
					v63 = 1;
					if (v60 == 0) {
						// 0x32b3c
						v61 = 1;
						if (v172 <= v171) {
							// 0x32b4c
							if (v134 + (v233 || -32) > v233 - 33) {
								// 0x32b54
								v61 = 0;
								// branch -> 0x32b58
							} else {
								v61 = 1;
							}
						}
						// 0x32b58
						v62 = 0;
						if (v61 != 0) {
							// 0x32b60
							if (v133 <= 31) {
								// 0x32b68
								v62 = 1;
								// branch -> 0x32b6c
							} else {
								v62 = 0;
							}
						}
						// 0x32b6c
						if (v62 == 0) {
							// 0x32b74
							v63 = 0;
							// branch -> 0x32b78
						} else {
							v63 = 1;
						}
					}
					// 0x32b78
					v12 = -1;
					v16 = v63;
					*(int32_t *)(v46 - 0x4f84) = *(int32_t *)g29;
					*(int32_t *)g29 = v12;
					*(char *)g20 = (char)v12;
					*(char *)g21 = (char)v12;
					if (*(char *)*(int32_t *)(g23 - 0x772c) != -1) {
						// 0x32ba8
						*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
						// branch -> 0x32bb4
					}
					// 0x32bb4
					v64 = g23;
					v235 = *(int32_t *)(v64 - 0x7674);
					v12 = 0;
					*(char *)*(int32_t *)(v64 - 0x772c) = -1;
					*(char *)g33 = (char)-1;
					*(int32_t *)v235 = v12;
					*(int32_t *)*(int32_t *)(g23 - 0x76d4) = v12;
					*(int32_t *)*(int32_t *)(g23 - 0x7740) = v12;
					v65 = g23;
					v175 = *(int32_t *)*(int32_t *)(v65 - 0x77ac);
					if (*(char *)(g32 + 0x55ec * v175 + 313) == 0) {
						// 0x32bfc
						v176 = *(int32_t *)*(int32_t *)(v65 - 0x7744);
						if (v176 <= 11) {
							// 0x32c0c
							if (*(int32_t *)*(int32_t *)(v65 - 0x76b8) == 0) {
								// 0x32c28
								v236 = *(int32_t *)(v65 - 0x76ac);
								if (*(int32_t *)v236 < 353) {
									// 0x32c40
									if (*(int32_t *)*(int32_t *)(v65 - 0x7678) == 0) {
										// 0x32c50
										if (*(int32_t *)*(int32_t *)(v65 - 0x77bc) != 0) {
											// 0x32c60
											if (*(int32_t *)v3 >= 321) {
												int32_t result = function_5ae34(); // 0x32c6c
												*(char *)*(int32_t *)(g23 - 0x772c) = (char)result;
												// branch -> 0x33da4
												// 0x33da4
												g10 = v1;
												return result;
											}
										}
										int32_t result2 = *(int32_t *)(v65 - 0x77c0); // 0x32c7c
										if (*(int32_t *)result2 != 0) {
											// 0x32c8c
											if (*(int32_t *)v3 > 320) {
												// 0x33da4
												g10 = v1;
												return result2;
											}
										}
										// 0x32c98
										int32_t v304;    // 0x330c4
										int32_t v305;    // 0x330cc
										int32_t v306;    // 0x330f0
										int32_t v307;    // 0x33120
										int32_t v308;    // 0x3309c
										int32_t result4; // 0x33d54
										if (*(int32_t *)*(int32_t *)(v65 - 0x77c4) == 0) {
											// 0x32ca8
											if (*(int32_t *)*(int32_t *)(v65 - 0x77c8) == 0) {
												// 0x32cc4
												if (*(char *)*(int32_t *)(v65 - 0x7794) == 0) {
													// 0x3354c
													v96 = v16;
													v98 = v96;
													if (v96 == 0) {
														// 0x33554
														v97 = g30;
														v249 = *(int16_t *)(*(int32_t *)g22 + 224 * v97 + 2 * g31 + 224);
														if (v249 >= 1) {
															// 0x33574
															*(int32_t *)g29 = (int32_t)v249 - 1;
															*(int32_t *)g35 = v97 + 1;
															*(int32_t *)g36 = g31;
															v98 = v16;
															// branch -> 0x33588
														} else {
															v98 = 0;
														}
													}
													// 0x33588
													if (v98 != 0) {
														// 0x33590
														v99 = g31;
														v250 = *(int16_t *)(*(int32_t *)g22 + 224 * g30 + 2 * v99 + 2);
														if (v250 >= 1) {
															// 0x335b0
															*(int32_t *)g29 = (int32_t)v250 - 1;
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = v99 + 1;
															// branch -> 0x335c4
														}
													}
													// 0x335c4
													v143 = 224 * g30;
													v215 = *(int32_t *)g22;
													v144 = 2 * g31;
													v281 = *(int16_t *)(v144 + v143 + v215);
													if (v281 >= 1) {
														// 0x335e0
														*(int32_t *)g29 = (int32_t)v281 - 1;
														*(int32_t *)g35 = g30;
														*(int32_t *)g36 = g31;
														// branch -> 0x335f0
													}
													// 0x335f0
													v251 = *(int16_t *)(v143 + v144 + v215 + 226);
													if (v251 >= 1) {
														// 0x33604
														*(int32_t *)g29 = (int32_t)v251 - 1;
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = g31 + 1;
														// branch -> 0x3361c
													}
													// 0x3361c
													v147 = (int32_t *)g29;
													if (*(int32_t *)(*(int32_t *)(g23 - 0x7758) + 268 * *v147 + 84) == 0) {
														// 0x33638
														*v147 = -1;
														// branch -> 0x33640
													}
												} else {
													// 0x32cd4
													if (*(int32_t *)(v65 - 0x4f84) != -1) {
														// 0x32ce0
														if (v16 == 0) {
															// 0x32ce8
															v66 = g30;
															v67 = g31;
															v237 = *(int16_t *)(*(int32_t *)g22 + 224 * v66 + 2 * v67 + 450);
															if (v237 != 0) {
																// 0x32d08
																v177 = *(int32_t *)g24 + 112 * v66;
																if (__asm_rlwinm_((int32_t) * (char *)(v177 + v67 + 225), 0, 25, 25) != 0) {
																	// 0x32d24
																	v68 = v237;
																	v38 = (0x10000 * v68 < 1 ? -v68 : v68) - 1;
																	if (v38 == *(int32_t *)(g23 - 0x4f84)) {
																		// 0x32d48
																		v178 = g25 + 232 * v38;
																		if (*(int32_t *)(v178 + 152) >= 64) {
																			// 0x32d5c
																			v265 = (int32_t) * (char *)(*(int32_t *)(v178 + 228) + 122);
																			if (__asm_rlwinm_(v265, 0, 29, 29) != 0) {
																				// 0x32d6c
																				*(int32_t *)g35 = g30 + 1;
																				*(int32_t *)g36 = g31 + 2;
																				*(int32_t *)g29 = v38;
																				// branch -> 0x32d80
																			}
																		}
																	}
																}
															}
														}
														// 0x32d80
														if (v16 != 0) {
															// 0x32d88
															v69 = g30;
															v70 = g31;
															v238 = *(int16_t *)(*(int32_t *)g22 + 224 * v69 + 2 * v70 + 228);
															if (v238 != 0) {
																// 0x32da8
																v179 = *(int32_t *)g24 + 112 * v69;
																if (__asm_rlwinm_((int32_t) * (char *)(v179 + v70 + 114), 0, 25, 25) != 0) {
																	// 0x32dc4
																	v71 = v238;
																	v37 = (0x10000 * v71 < 1 ? -v71 : v71) - 1;
																	if (v37 == *(int32_t *)(g23 - 0x4f84)) {
																		// 0x32de8
																		v180 = g25 + 232 * v37;
																		if (*(int32_t *)(v180 + 152) >= 64) {
																			// 0x32dfc
																			v266 = (int32_t) * (char *)(*(int32_t *)(v180 + 228) + 122);
																			if (__asm_rlwinm_(v266, 0, 29, 29) != 0) {
																				// 0x32e0c
																				*(int32_t *)g35 = g30 + 1;
																				*(int32_t *)g36 = g31 + 2;
																				*(int32_t *)g29 = v37;
																				// branch -> 0x32e20
																			}
																		}
																	}
																}
															}
														}
														// 0x32e20
														v72 = g30;
														v137 = 224 * v72;
														v20 = v137;
														v181 = *(int32_t *)g22;
														v22 = v181;
														v73 = g31;
														v138 = 2 * v73;
														v21 = v138;
														v239 = *(int16_t *)(v138 + v181 + v137 + 452);
														if (v239 != 0) {
															// 0x32e40
															v182 = *(int32_t *)g24 + 112 * v72;
															if (__asm_rlwinm_((int32_t) * (char *)(v182 + v73 + 226), 0, 25, 25) != 0) {
																// 0x32e5c
																v74 = v239;
																v35 = (0x10000 * v74 < 1 ? -v74 : v74) - 1;
																if (v35 == *(int32_t *)(g23 - 0x4f84)) {
																	// 0x32e80
																	v183 = g25 + 232 * v35;
																	if (*(int32_t *)(v183 + 152) >= 64) {
																		// 0x32e94
																		v267 = (int32_t) * (char *)(*(int32_t *)(v183 + 228) + 122);
																		if (__asm_rlwinm_(v267, 0, 29, 29) != 0) {
																			// 0x32ea4
																			*(int32_t *)g35 = g30 + 2;
																			*(int32_t *)g36 = g31 + 2;
																			*(int32_t *)g29 = v35;
																			// branch -> 0x32eb8
																		}
																	}
																}
															}
														}
														// 0x32eb8
														if (v16 == 0) {
															// 0x32ec0
															v184 = v20 + v22;
															v240 = *(int16_t *)(v21 + v184 + 224);
															if (v240 != 0) {
																// 0x32ed4
																v185 = *(int32_t *)g24 + 112 * g30;
																if (__asm_rlwinm_((int32_t) * (char *)(g31 + v185 + 112), 0, 25, 25) != 0) {
																	// 0x32ef0
																	v75 = v240;
																	v34 = (0x10000 * v75 < 1 ? -v75 : v75) - 1;
																	if (v34 == *(int32_t *)(g23 - 0x4f84)) {
																		// 0x32f14
																		v186 = g25 + 232 * v34;
																		if (*(int32_t *)(v186 + 152) >= 64) {
																			// 0x32f28
																			v268 = (int32_t) * (char *)(*(int32_t *)(v186 + 228) + 122);
																			if (__asm_rlwinm_(v268, 0, 30, 30) != 0) {
																				// 0x32f38
																				*(int32_t *)g35 = g30 + 1;
																				*(int32_t *)g36 = g31;
																				*(int32_t *)g29 = v34;
																				// branch -> 0x32f48
																			}
																		}
																	}
																}
															}
														}
														// 0x32f48
														if (v16 != 0) {
															// 0x32f50
															v187 = v20 + v22;
															v241 = *(int16_t *)(v21 + v187 + 2);
															if (v241 != 0) {
																// 0x32f64
																v188 = *(int32_t *)g24 + 112 * g30;
																if (__asm_rlwinm_((int32_t) * (char *)(g31 + v188 + 1), 0, 25, 25) != 0) {
																	// 0x32f80
																	v76 = v241;
																	v33 = (0x10000 * v76 < 1 ? -v76 : v76) - 1;
																	if (v33 == *(int32_t *)(g23 - 0x4f84)) {
																		// 0x32fa4
																		v189 = g25 + 232 * v33;
																		if (*(int32_t *)(v189 + 152) >= 64) {
																			// 0x32fb8
																			v269 = (int32_t) * (char *)(*(int32_t *)(v189 + 228) + 122);
																			if (__asm_rlwinm_(v269, 0, 30, 30) != 0) {
																				// 0x32fc8
																				*(int32_t *)g35 = g30;
																				*(int32_t *)g36 = g31 + 1;
																				*(int32_t *)g29 = v33;
																				// branch -> 0x32fd8
																			}
																		}
																	}
																}
															}
														}
														// 0x32fd8
														v270 = *(int16_t *)(v22 + v21 + v20);
														if (v270 != 0) {
															// 0x32fe8
															v296 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
															if (__asm_rlwinm_(v296, 0, 25, 25) != 0) {
																// 0x33000
																v77 = v270;
																v32 = (0x10000 * v77 < 1 ? -v77 : v77) - 1;
																if (v32 == *(int32_t *)(g23 - 0x4f84)) {
																	// 0x33024
																	v190 = g25 + 232 * v32;
																	if (*(int32_t *)(v190 + 152) >= 64) {
																		// 0x33038
																		if (*(char *)(*(int32_t *)(v190 + 228) + 122) % 2 != 0) {
																			// 0x33048
																			*(int32_t *)g35 = g30;
																			*(int32_t *)g36 = g31;
																			*(int32_t *)g29 = v32;
																			// branch -> 0x33054
																		}
																	}
																}
															}
														}
														// 0x33054
														v191 = v20 + v22;
														v242 = *(int16_t *)(v21 + v191 + 226);
														result3 = v242;
														if (v242 != 0) {
															// 0x33068
															v192 = *(int32_t *)g24 + 112 * g30;
															if (__asm_rlwinm_((int32_t) * (char *)(g31 + v192 + 113), 0, 25, 25) != 0) {
																// 0x33084
																v78 = result3;
																v31 = (0x10000 * v78 < 1 ? -v78 : v78) - 1;
																v308 = *(int32_t *)(g23 - 0x4f84);
																result3 = v308;
																if (v31 == v308) {
																	// 0x330a8
																	v193 = g25 + 232 * v31;
																	result3 = v193;
																	if (*(int32_t *)(v193 + 152) >= 64) {
																		// 0x330bc
																		v271 = (int32_t) * (char *)(*(int32_t *)(v193 + 228) + 122);
																		v304 = __asm_rlwinm_(v271, 0, 30, 30);
																		result3 = v304;
																		if (v304 != 0) {
																			// 0x330cc
																			v305 = g30 + 1;
																			result3 = v305;
																			*(int32_t *)g35 = v305;
																			*(int32_t *)g36 = g31 + 1;
																			*(int32_t *)g29 = v31;
																			// branch -> 0x330e0
																		}
																	}
																}
															}
														}
														// 0x330e0
														v79 = g29;
														v139 = (int32_t *)v79;
														v194 = *v139;
														v80 = v79;
														if (v194 != -1) {
															// 0x330ec
															v306 = g25 + 232 * v194;
															result3 = v306;
															if (*(int32_t *)(v306 + 160) % 2 != 0) {
																// 0x33100
																*v139 = -1;
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31;
																v80 = g29;
																// branch -> 0x33110
															} else {
																v80 = v79;
															}
														}
														// 0x33110
														v195 = *(int32_t *)v80;
														if (v195 != -1) {
															// 0x3311c
															v307 = g25 + 232 * v195;
															result3 = v307;
															if (__asm_rlwinm_(*(int32_t *)(v307 + 160), 0, 26, 26) != 0) {
																// 0x33130
																*(int32_t *)g29 = -1;
																// branch -> 0x33138
															}
														}
														// 0x33138
														if (*(int32_t *)g29 != -1) {
															// 0x33da4
															g10 = v1;
															return result3;
														}
													}
													// 0x33144
													if (v16 == 0) {
														// 0x3314c
														v81 = g30;
														v82 = g31;
														v243 = *(int16_t *)(*(int32_t *)g22 + 224 * v81 + 2 * v82 + 450);
														if (v243 != 0) {
															// 0x3316c
															v196 = *(int32_t *)g24 + 112 * v81;
															if (__asm_rlwinm_((int32_t) * (char *)(v196 + v82 + 225), 0, 25, 25) != 0) {
																// 0x33188
																v83 = v243;
																v30 = (0x10000 * v83 < 1 ? -v83 : v83) - 1;
																v197 = 232 * v30 + g25;
																if (*(int32_t *)(v197 + 152) >= 64) {
																	// 0x331b4
																	v272 = (int32_t) * (char *)(*(int32_t *)(v197 + 228) + 122);
																	if (__asm_rlwinm_(v272, 0, 29, 29) != 0) {
																		// 0x331c4
																		*(int32_t *)g35 = g30 + 2;
																		*(int32_t *)g36 = g31 + 1;
																		*(int32_t *)g29 = v30;
																		// branch -> 0x331d8
																	}
																}
															}
														}
													}
													// 0x331d8
													if (v16 != 0) {
														// 0x331e0
														v84 = g30;
														v85 = g31;
														v244 = *(int16_t *)(*(int32_t *)g22 + 224 * v84 + 2 * v85 + 228);
														if (v244 != 0) {
															// 0x33200
															v198 = *(int32_t *)g24 + 112 * v84;
															if (__asm_rlwinm_((int32_t) * (char *)(v198 + v85 + 114), 0, 25, 25) != 0) {
																// 0x3321c
																v86 = v244;
																v29 = (0x10000 * v86 < 1 ? -v86 : v86) - 1;
																v199 = 232 * v29 + g25;
																if (*(int32_t *)(v199 + 152) >= 64) {
																	// 0x33248
																	v273 = (int32_t) * (char *)(*(int32_t *)(v199 + 228) + 122);
																	if (__asm_rlwinm_(v273, 0, 29, 29) != 0) {
																		// 0x33258
																		*(int32_t *)g35 = g30 + 1;
																		*(int32_t *)g36 = g31 + 2;
																		*(int32_t *)g29 = v29;
																		// branch -> 0x3326c
																	}
																}
															}
														}
													}
													// 0x3326c
													v87 = g30;
													v140 = 224 * v87;
													v20 = v140;
													v200 = *(int32_t *)g22;
													v22 = v200;
													v88 = g31;
													v141 = 2 * v88;
													v21 = v141;
													v245 = *(int16_t *)(v141 + v200 + v140 + 452);
													if (v245 != 0) {
														// 0x3328c
														v201 = *(int32_t *)g24 + 112 * v87;
														if (__asm_rlwinm_((int32_t) * (char *)(v201 + v88 + 226), 0, 25, 25) != 0) {
															// 0x332a8
															v89 = v245;
															v28 = (0x10000 * v89 < 1 ? -v89 : v89) - 1;
															v202 = 232 * v28 + g25;
															if (*(int32_t *)(v202 + 152) >= 64) {
																// 0x332d4
																v274 = (int32_t) * (char *)(*(int32_t *)(v202 + 228) + 122);
																if (__asm_rlwinm_(v274, 0, 29, 29) != 0) {
																	// 0x332e4
																	*(int32_t *)g35 = g30 + 2;
																	*(int32_t *)g36 = g31 + 2;
																	*(int32_t *)g29 = v28;
																	// branch -> 0x332f8
																}
															}
														}
													}
													// 0x332f8
													if (v16 == 0) {
														// 0x33300
														v203 = v20 + v22;
														v246 = *(int16_t *)(v21 + v203 + 224);
														if (v246 != 0) {
															// 0x33314
															v204 = *(int32_t *)g24 + 112 * g30;
															if (__asm_rlwinm_((int32_t) * (char *)(g31 + v204 + 112), 0, 25, 25) != 0) {
																// 0x33330
																v90 = v246;
																v27 = (0x10000 * v90 < 1 ? -v90 : v90) - 1;
																v205 = 232 * v27 + g25;
																if (*(int32_t *)(v205 + 152) >= 64) {
																	// 0x3335c
																	v275 = (int32_t) * (char *)(*(int32_t *)(v205 + 228) + 122);
																	if (__asm_rlwinm_(v275, 0, 30, 30) != 0) {
																		// 0x3336c
																		*(int32_t *)g35 = g30 + 1;
																		*(int32_t *)g36 = g31;
																		*(int32_t *)g29 = v27;
																		// branch -> 0x3337c
																	}
																}
															}
														}
													}
													// 0x3337c
													if (v16 != 0) {
														// 0x33384
														v206 = v20 + v22;
														v247 = *(int16_t *)(v21 + v206 + 2);
														if (v247 != 0) {
															// 0x33398
															v207 = *(int32_t *)g24 + 112 * g30;
															if (__asm_rlwinm_((int32_t) * (char *)(g31 + v207 + 1), 0, 25, 25) != 0) {
																// 0x333b4
																v91 = v247;
																v26 = (0x10000 * v91 < 1 ? -v91 : v91) - 1;
																v208 = 232 * v26 + g25;
																if (*(int32_t *)(v208 + 152) >= 64) {
																	// 0x333e0
																	v276 = (int32_t) * (char *)(*(int32_t *)(v208 + 228) + 122);
																	if (__asm_rlwinm_(v276, 0, 30, 30) != 0) {
																		// 0x333f0
																		*(int32_t *)g35 = g30;
																		*(int32_t *)g36 = g31 + 1;
																		*(int32_t *)g29 = v26;
																		// branch -> 0x33400
																	}
																}
															}
														}
													}
													// 0x33400
													v277 = *(int16_t *)(v22 + v21 + v20);
													if (v277 != 0) {
														// 0x33410
														v297 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
														if (__asm_rlwinm_(v297, 0, 25, 25) != 0) {
															// 0x33428
															v92 = v277;
															v45 = (0x10000 * v92 < 1 ? -v92 : v92) - 1;
															v209 = 232 * v45 + g25;
															if (*(int32_t *)(v209 + 152) >= 64) {
																// 0x33454
																if (*(char *)(*(int32_t *)(v209 + 228) + 122) % 2 != 0) {
																	// 0x33464
																	*(int32_t *)g35 = g30;
																	*(int32_t *)g36 = g31;
																	*(int32_t *)g29 = v45;
																	// branch -> 0x33470
																}
															}
														}
													}
													// 0x33470
													v210 = v20 + v22;
													v248 = *(int16_t *)(v21 + v210 + 226);
													if (v248 != 0) {
														// 0x33484
														v211 = *(int32_t *)g24 + 112 * g30;
														if (__asm_rlwinm_((int32_t) * (char *)(g31 + v211 + 113), 0, 25, 25) != 0) {
															// 0x334a0
															v93 = v248;
															v44 = (0x10000 * v93 < 1 ? -v93 : v93) - 1;
															v212 = 232 * v44 + g25;
															if (*(int32_t *)(v212 + 152) >= 64) {
																// 0x334cc
																v278 = (int32_t) * (char *)(*(int32_t *)(v212 + 228) + 122);
																if (__asm_rlwinm_(v278, 0, 30, 30) != 0) {
																	// 0x334dc
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31 + 1;
																	*(int32_t *)g29 = v44;
																	// branch -> 0x334f0
																}
															}
														}
													}
													// 0x334f0
													v94 = g29;
													v142 = (int32_t *)v94;
													v213 = *v142;
													v95 = v94;
													if (v213 != -1) {
														// 0x334fc
														if (*(int32_t *)(g25 + 232 * v213 + 160) % 2 != 0) {
															// 0x33510
															*v142 = -1;
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31;
															v95 = g29;
															// branch -> 0x33520
														} else {
															v95 = v94;
														}
													}
													// 0x33520
													v214 = *(int32_t *)v95;
													if (v214 != -1) {
														// 0x3352c
														if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v214 + 160), 0, 26, 26) != 0) {
															// 0x33540
															*(int32_t *)g29 = -1;
															// branch -> 0x33640
														}
													}
												}
												// 0x33640
												v216 = *(int32_t *)g29;
												v3 = v216;
												if (v216 == -1) {
													// 0x3364c
													v101 = v16;
													v103 = v101;
													if (v101 == 0) {
														// 0x33654
														v102 = g30;
														v252 = *(char *)(g31 + *(int32_t *)v6 + 112 * v102 + 112);
														v283 = v252;
														if (v252 != 0) {
															// 0x33670
															if (0x1000000 * v283 < 0) {
																// 0x33680
																v43 = 0x1000000 * (-1 - v283) / 0x1000000;
																// branch -> 0x3368c
															} else {
																// 0x33678
																v43 = v283 - 1;
																// branch -> 0x3368c
															}
															// 0x3368c
															v217 = 0x1000000 * v43 / 0x1000000;
															if (v217 != v175) {
																// 0x33698
																if (*(int32_t *)(g32 + 0x55ec * v217 + 404) != 0) {
																	// 0x336ac
																	*(int32_t *)g35 = v102 + 1;
																	*(int32_t *)g36 = g31;
																	*(char *)g33 = (char)v43;
																	v103 = v16;
																	// branch -> 0x336bc
																} else {
																	v103 = 0;
																}
															} else {
																v103 = 0;
															}
														} else {
															v103 = 0;
														}
													}
													// 0x336bc
													if (v103 != 0) {
														// 0x336c4
														v104 = g30;
														v253 = *(char *)(g31 + *(int32_t *)v6 + 112 * v104 + 1);
														v284 = v253;
														if (v253 != 0) {
															// 0x336e0
															if (0x1000000 * v284 < 0) {
																// 0x336f0
																v42 = 0x1000000 * (-1 - v284) / 0x1000000;
																// branch -> 0x336fc
															} else {
																// 0x336e8
																v42 = v284 - 1;
																// branch -> 0x336fc
															}
															// 0x336fc
															v218 = 0x1000000 * v42 / 0x1000000;
															if (v218 != v175) {
																// 0x33708
																if (*(int32_t *)(g32 + 0x55ec * v218 + 404) != 0) {
																	// 0x3371c
																	*(int32_t *)g35 = v104;
																	*(int32_t *)g36 = g31 + 1;
																	*(char *)g33 = (char)v42;
																	// branch -> 0x3372c
																}
															}
														}
													}
													// 0x3372c
													v105 = g30;
													v148 = 112 * v105;
													v15 = v148;
													v219 = *(int32_t *)v6;
													v7 = v219;
													v149 = g31;
													v285 = *(char *)(v149 + v148 + v219);
													v299 = v285;
													v150 = v149;
													v106 = v148;
													if (v285 != 0) {
														// 0x33744
														if (0x1000000 * v299 < 0) {
															// 0x33754
															v41 = 0x1000000 * (-1 - v299) / 0x1000000;
															// branch -> 0x33760
														} else {
															// 0x3374c
															v41 = v299 - 1;
															// branch -> 0x33760
														}
														// 0x33760
														if (0x1000000 * v41 / 0x1000000 != v175) {
															// 0x3376c
															*(int32_t *)g35 = v105;
															*(int32_t *)g36 = g31;
															*(char *)g33 = (char)v41;
															v150 = g31;
															v106 = v15;
															// branch -> 0x33778
														} else {
															v150 = v149;
															v106 = v148;
														}
													}
													// 0x33778
													v220 = *(int32_t *)g24;
													if (__asm_rlwinm_((int32_t) * (char *)(v220 + v106 + v150), 0, 29, 29) != 0) {
														// 0x3378c
														v107 = g32;
														v254 = *(int32_t *)(v107 + 56);
														v108 = g30;
														v110 = v108;
														v109 = v107;
														if (v108 == v254) {
															// 0x3379c
															if (g31 == *(int32_t *)(v107 + 60)) {
																// 0x337a8
																if (v175 != 0) {
																	// 0x337b0
																	*(int32_t *)g35 = v254;
																	*(int32_t *)g36 = g31;
																	*(char *)g33 = (char)0;
																	v110 = g30;
																	v109 = g32;
																	// branch -> 0x337c0
																} else {
																	v110 = v254;
																	v109 = v107;
																}
															} else {
																v110 = v254;
																v109 = v107;
															}
														}
														// 0x337c0
														v151 = v109 + 0x55ec;
														v112 = v110;
														v111 = v151;
														if (v110 == *(int32_t *)(v109 + 0x5624)) {
															// 0x337d4
															if (g31 == *(int32_t *)(v109 + 0x5628)) {
																// 0x337e0
																if (v175 != 1) {
																	// 0x337e8
																	*(int32_t *)g35 = v110;
																	*(int32_t *)g36 = g31;
																	*(char *)g33 = (char)1;
																	v112 = g30;
																	v111 = v151;
																	// branch -> 0x337f8
																} else {
																	v112 = v110;
																	v111 = v151;
																}
															} else {
																v112 = v110;
																v111 = v151;
															}
														}
														// 0x337f8
														v152 = v111 + 0x55ec;
														v114 = v112;
														v113 = v152;
														if (v112 == *(int32_t *)(v111 + 0x5624)) {
															// 0x3380c
															if (g31 == *(int32_t *)(v111 + 0x5628)) {
																// 0x33818
																if (v175 != 2) {
																	// 0x33820
																	*(int32_t *)g35 = v112;
																	*(int32_t *)g36 = g31;
																	*(char *)g33 = (char)2;
																	v114 = g30;
																	v113 = v152;
																	// branch -> 0x33830
																} else {
																	v114 = v112;
																	v113 = v152;
																}
															} else {
																v114 = v112;
																v113 = v152;
															}
														}
														// 0x33830
														if (v114 == *(int32_t *)(v113 + 0x5624)) {
															// 0x33844
															if (g31 == *(int32_t *)(v113 + 0x5628)) {
																// 0x33850
																if (v175 != 3) {
																	// 0x33858
																	*(int32_t *)g35 = v114;
																	*(int32_t *)g36 = g31;
																	*(char *)g33 = (char)3;
																	// branch -> 0x33868
																}
															}
														}
													}
													// 0x33868
													if (v176 == 8) {
														// 0x33870
														v13 = -1;
														int32_t v309 = -1; // 0x33874
														// branch -> 0x33874
														while (true) {
															// 0x33874
															v221 = g30 + v309;
															v19 = v221;
															v11 = 3;
															v222 = g31 + 112 * v221 - 1 + v220;
															v22 = v222;
															v23 = -1;
															v115 = v222;
															// branch -> 0x33894
														lab_0x33894_9:
															while (true) {
																// 0x33894
																if (__asm_rlwinm_((int32_t) * (char *)v115, 0, 29, 29) != 0) {
																	int32_t v310 = g32;                     // 0x338a0
																	int32_t v311 = *(int32_t *)(v310 + 56); // 0x338a0
																	int32_t v312 = v23 + g31;               // 0x338a4
																	v12 = v312;
																	int32_t v313 = v19;  // 0x338ac
																	int32_t v314 = v313; // 0x33900
																	int32_t v315 = v310; // 0x338d8
																	if (v311 == v313) {
																		// 0x338b4
																		if (*(int32_t *)(v310 + 60) == v312) {
																			// 0x338c0
																			if (v175 != 0) {
																				// 0x338c8
																				*(int32_t *)g35 = v311;
																				*(int32_t *)g36 = v12;
																				*(char *)g33 = (char)0;
																				v314 = v19;
																				v315 = g32;
																				// branch -> 0x338d8
																			} else {
																				v314 = v311;
																				v315 = v310;
																			}
																		} else {
																			v314 = v311;
																			v315 = v310;
																		}
																	}
																	int32_t v316 = v315 + 0x55ec; // 0x338d8
																	result3 = v316;
																	int32_t v317 = v314; // 0x33938
																	int32_t v318 = v316; // 0x33910
																	if (*(int32_t *)(v315 + 0x5624) == v314) {
																		// 0x338ec
																		if (*(int32_t *)(v315 + 0x5628) == v12) {
																			// 0x338f8
																			if (v175 != 1) {
																				// 0x33900
																				*(int32_t *)g35 = v314;
																				*(int32_t *)g36 = v12;
																				*(char *)g33 = (char)1;
																				v317 = v19;
																				v318 = result3;
																				// branch -> 0x33910
																			} else {
																				v317 = v314;
																				v318 = v316;
																			}
																		} else {
																			v317 = v314;
																			v318 = v316;
																		}
																	}
																	int32_t v319 = v318 + 0x55ec; // 0x33918
																	result3 = v319;
																	int32_t v320 = v317; // 0x33970
																	int32_t v321 = v319; // 0x33948
																	if (*(int32_t *)(v318 + 0x5624) == v317) {
																		// 0x33924
																		if (*(int32_t *)(v318 + 0x5628) == v12) {
																			// 0x33930
																			if (v175 != 2) {
																				// 0x33938
																				*(int32_t *)g35 = v317;
																				*(int32_t *)g36 = v12;
																				*(char *)g33 = (char)2;
																				v320 = v19;
																				v321 = result3;
																				// branch -> 0x33948
																			} else {
																				v320 = v317;
																				v321 = v319;
																			}
																		} else {
																			v320 = v317;
																			v321 = v319;
																		}
																	}
																	// 0x33948
																	if (*(int32_t *)(v321 + 0x5624) == v320) {
																		// 0x3395c
																		if (*(int32_t *)(v321 + 0x5628) == v12) {
																			// 0x33968
																			if (v175 != 3) {
																				// 0x33970
																				*(int32_t *)g35 = v320;
																				*(int32_t *)g36 = v12;
																				*(char *)g33 = (char)3;
																				// branch -> 0x33980
																			}
																		}
																	}
																}
																int32_t v322 = v22 + 1; // 0x33980
																v22 = v322;
																v23++;
																int32_t v323 = v11 - 1; // 0x33988
																v11 = v323;
																if (v323 == 0) {
																	// break -> 0x3398c
																	break;
																}
																v115 = v322;
																// continue -> 0x33894
															}
															int32_t v324 = v13 + 1; // 0x3398c
															v13 = v324;
															if (v324 >= 2) {
																// break -> 0x33998
																break;
															}
															v309 = v324;
															// continue -> 0x33874
														}
														// 0x33998
														v153 = g31;
														v255 = *(char *)(v153 + v15 + v7 + 113);
														v286 = v255;
														if (v255 != 0) {
															// 0x339ac
															if (0x1000000 * v286 < 0) {
																// 0x339bc
																v40 = 0x1000000 * (-1 - v286) / 0x1000000;
																// branch -> 0x339c8
															} else {
																// 0x339b4
																v40 = v286 - 1;
																// branch -> 0x339c8
															}
															// 0x339c8
															v223 = 0x1000000 * v40 / 0x1000000;
															if (v223 != v175) {
																// 0x339d4
																if (*(int32_t *)(g32 + 0x55ec * v223 + 404) != 0) {
																	// 0x339e8
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = v153 + 1;
																	*(char *)g33 = (char)v40;
																	// branch -> 0x339fc
																}
															}
														}
														// 0x339fc
														if (v3 == -1) {
															// 0x33a04
															if (*(char *)g33 == -1) {
																// 0x33a14
																v116 = v16;
																v118 = v116;
																if (v116 == 0) {
																	// 0x33a1c
																	v117 = g30;
																	v256 = *(char *)(g31 + *(int32_t *)g16 + 112 * v117 + 112);
																	v287 = v256;
																	if (v256 != 0) {
																		// 0x33a38
																		if (0x1000000 * v287 < 0) {
																			// 0x33a48
																			v39 = 0x1000000 * (-1 - v287) / 0x1000000;
																			// branch -> 0x33a54
																		} else {
																			// 0x33a40
																			v39 = v287 - 1;
																			// branch -> 0x33a54
																		}
																		// 0x33a54
																		if (*(char *)(120 * 0x1000000 * v39 / 0x1000000 + v5 + 64) >= 2) {
																			// 0x33a70
																			*(int32_t *)g35 = v117 + 1;
																			*(int32_t *)g36 = g31;
																			*(char *)g20 = (char)v39;
																			v118 = v16;
																			// branch -> 0x33a80
																		} else {
																			v118 = 0;
																		}
																	} else {
																		v118 = 0;
																	}
																}
																// 0x33a80
																if (v118 != 0) {
																	// 0x33a88
																	v119 = g30;
																	v257 = *(char *)(g31 + *(int32_t *)g16 + 112 * v119 + 1);
																	v288 = v257;
																	if (v257 != 0) {
																		// 0x33aa4
																		if (0x1000000 * v288 < 0) {
																			// 0x33ab4
																			v36 = 0x1000000 * (-1 - v288) / 0x1000000;
																			// branch -> 0x33ac0
																		} else {
																			// 0x33aac
																			v36 = v288 - 1;
																			// branch -> 0x33ac0
																		}
																		// 0x33ac0
																		if (*(char *)(120 * 0x1000000 * v36 / 0x1000000 + v5 + 64) >= 2) {
																			// 0x33adc
																			*(int32_t *)g35 = v119;
																			*(int32_t *)g36 = g31 + 1;
																			*(char *)g20 = (char)v36;
																			// branch -> 0x33aec
																		}
																	}
																}
																// 0x33aec
																v120 = g30;
																v154 = 112 * v120;
																v224 = *(int32_t *)g16;
																v155 = g31;
																v289 = *(char *)(v155 + v154 + v224);
																v300 = v289;
																v122 = v155;
																if (v289 != 0) {
																	// 0x33b04
																	if (0x1000000 * v300 < 0) {
																		// 0x33b14
																		v25 = 0x1000000 * (-1 - v300) / 0x1000000;
																		// branch -> 0x33b20
																	} else {
																		// 0x33b0c
																		v25 = v300 - 1;
																		// branch -> 0x33b20
																	}
																	// 0x33b20
																	v258 = *(char *)(120 * 0x1000000 * v25 / 0x1000000 + v5 + 64);
																	if (v258 != 1) {
																		// 0x33b3c
																		if (v258 != 3) {
																			v122 = v155;
																			// 0x33b50
																			v259 = *(char *)(v224 + v154 + v122 + 113);
																			v290 = v259;
																			if (v259 != 0) {
																				// 0x33b64
																				if (0x1000000 * v290 < 0) {
																					// 0x33b74
																					v24 = 0x1000000 * (-1 - v290) / 0x1000000;
																					// branch -> 0x33b80
																				} else {
																					// 0x33b6c
																					v24 = v290 - 1;
																					// branch -> 0x33b80
																				}
																				// 0x33b80
																				if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
																					// 0x33b9c
																					*(int32_t *)g35 = g30 + 1;
																					*(int32_t *)g36 = v122 + 1;
																					*(char *)g20 = (char)v24;
																					// branch -> 0x33bb0
																				}
																			}
																			// 0x33bb0
																			if (*(char *)g33 == -1) {
																				// 0x33bc0
																				if (*(char *)g20 == -1) {
																					// 0x33bd0
																					if (v3 == -1) {
																						// 0x33bd8
																						v123 = v16;
																						v125 = v123;
																						if (v123 == 0) {
																							// 0x33be0
																							v260 = *(int32_t *)(g23 - 0x768c);
																							v124 = g30;
																							v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																							if (v261 >= 1) {
																								// 0x33c00
																								v225 = (0x1000000 * (int32_t)v261 - 0x1000000) / 0x1000000;
																								if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																									// 0x33c24
																									*(int32_t *)g35 = v124 + 1;
																									*(int32_t *)g36 = g31;
																									*(char *)g21 = (char)v225;
																									v125 = v16;
																									// branch -> 0x33c34
																								} else {
																									v125 = 0;
																								}
																							} else {
																								v125 = 0;
																							}
																						}
																						// 0x33c34
																						if (v125 != 0) {
																							// 0x33c3c
																							v262 = *(int32_t *)(g23 - 0x768c);
																							v126 = g30;
																							v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																							if (v263 >= 1) {
																								// 0x33c5c
																								v226 = (0x1000000 * (int32_t)v263 - 0x1000000) / 0x1000000;
																								if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																									// 0x33c80
																									*(int32_t *)g35 = v126;
																									*(int32_t *)g36 = g31 + 1;
																									*(char *)g21 = (char)v226;
																									// branch -> 0x33c90
																								}
																							}
																						}
																						// 0x33c90
																						v127 = g30;
																						v157 = 112 * v127;
																						v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
																						v158 = g31;
																						v293 = *(char *)(v158 + v157 + v227);
																						v129 = v158;
																						if (v293 >= 1) {
																							// 0x33cac
																							v228 = (0x1000000 * (int32_t)v293 - 0x1000000) / 0x1000000;
																							v294 = *(char *)(v4 + 48 + 368 * v228);
																							if (v294 != 1) {
																								// 0x33cd0
																								if (v294 != 3) {
																									v129 = v158;
																									// 0x33ce4
																									v264 = *(char *)(v227 + v157 + v129 + 113);
																									if (v264 >= 1) {
																										// 0x33cf8
																										v229 = (0x1000000 * (int32_t)v264 - 0x1000000) / 0x1000000;
																										if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																											// 0x33d1c
																											*(int32_t *)g35 = g30 + 1;
																											*(int32_t *)g36 = v129 + 1;
																											*(char *)g21 = (char)v229;
																											// branch -> 0x33d30
																										}
																									}
																									// 0x33d30
																									if (*(char *)g21 == -1) {
																										// 0x33d40
																										*(int32_t *)g35 = g30;
																										*(int32_t *)g36 = g31;
																										v130 = function_c824c();
																										g34 = v130;
																										v162 = function_3257c(v130);
																										g34 = v162;
																										function_32720(v162);
																										// branch -> 0x33d54
																									}
																									// 0x33d54
																									result4 = *(int32_t *)(g23 - 0x7744);
																									if (*(int32_t *)result4 == 2) {
																										// 0x33d64
																										v12 = -1;
																										*(char *)g20 = -1;
																										*(int32_t *)g29 = v12;
																										*(char *)g21 = (char)v12;
																										*(int32_t *)g35 = g30;
																										*(int32_t *)g36 = g31;
																										// branch -> 0x33d7c
																									}
																									// 0x33d7c
																									v230 = *(int32_t *)g29;
																									if (v230 == -1) {
																										// 0x33da4
																										g10 = v1;
																										return result4;
																									}
																									// 0x33d88
																									result5 = g25 + 232 * v230;
																									if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																										// 0x33d9c
																										*(int32_t *)g29 = -1;
																										// branch -> 0x33da4
																									}
																									// 0x33da4
																									g10 = v1;
																									return result5;
																								}
																							}
																							// 0x33cd8
																							*(int32_t *)g35 = v127;
																							*(int32_t *)g36 = g31;
																							*(char *)g21 = (char)v228;
																							v129 = g31;
																							// branch -> 0x33ce4
																						}
																						// 0x33ce4
																						v264 = *(char *)(v227 + v157 + v129 + 113);
																						if (v264 >= 1) {
																							// 0x33cf8
																							v229 = (0x1000000 * (int32_t)v264 - 0x1000000) / 0x1000000;
																							if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																								// 0x33d1c
																								*(int32_t *)g35 = g30 + 1;
																								*(int32_t *)g36 = v129 + 1;
																								*(char *)g21 = (char)v229;
																								// branch -> 0x33d30
																							}
																						}
																						// 0x33d30
																						if (*(char *)g21 == -1) {
																							// 0x33d40
																							*(int32_t *)g35 = g30;
																							*(int32_t *)g36 = g31;
																							v130 = function_c824c();
																							g34 = v130;
																							v162 = function_3257c(v130);
																							g34 = v162;
																							function_32720(v162);
																							// branch -> 0x33d54
																						}
																					}
																				}
																			}
																			// 0x33d54
																			result4 = *(int32_t *)(g23 - 0x7744);
																			if (*(int32_t *)result4 == 2) {
																				// 0x33d64
																				v12 = -1;
																				*(char *)g20 = -1;
																				*(int32_t *)g29 = v12;
																				*(char *)g21 = (char)v12;
																				*(int32_t *)g35 = g30;
																				*(int32_t *)g36 = g31;
																				// branch -> 0x33d7c
																			}
																			// 0x33d7c
																			v230 = *(int32_t *)g29;
																			if (v230 == -1) {
																				// 0x33da4
																				g10 = v1;
																				return result4;
																			}
																			// 0x33d88
																			result5 = g25 + 232 * v230;
																			if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																				// 0x33d9c
																				*(int32_t *)g29 = -1;
																				// branch -> 0x33da4
																			}
																			// 0x33da4
																			g10 = v1;
																			return result5;
																		}
																	}
																	// 0x33b44
																	*(int32_t *)g35 = v120;
																	*(int32_t *)g36 = g31;
																	*(char *)g20 = (char)v25;
																	v122 = g31;
																	// branch -> 0x33b50
																}
																// 0x33b50
																v259 = *(char *)(v224 + v154 + v122 + 113);
																v290 = v259;
																if (v259 != 0) {
																	// 0x33b64
																	if (0x1000000 * v290 < 0) {
																		// 0x33b74
																		v24 = 0x1000000 * (-1 - v290) / 0x1000000;
																		// branch -> 0x33b80
																	} else {
																		// 0x33b6c
																		v24 = v290 - 1;
																		// branch -> 0x33b80
																	}
																	// 0x33b80
																	if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
																		// 0x33b9c
																		*(int32_t *)g35 = g30 + 1;
																		*(int32_t *)g36 = v122 + 1;
																		*(char *)g20 = (char)v24;
																		// branch -> 0x33bb0
																	}
																}
															}
														}
														// 0x33bb0
														if (*(char *)g33 == -1) {
															// 0x33bc0
															if (*(char *)g20 == -1) {
																// 0x33bd0
																if (v3 == -1) {
																	// 0x33bd8
																	v123 = v16;
																	v125 = v123;
																	if (v123 == 0) {
																		// 0x33be0
																		v260 = *(int32_t *)(g23 - 0x768c);
																		v124 = g30;
																		v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																		if (v261 >= 1) {
																			// 0x33c00
																			v225 = (0x1000000 * (int32_t)v261 - 0x1000000) / 0x1000000;
																			if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																				// 0x33c24
																				*(int32_t *)g35 = v124 + 1;
																				*(int32_t *)g36 = g31;
																				*(char *)g21 = (char)v225;
																				v125 = v16;
																				// branch -> 0x33c34
																			} else {
																				v125 = 0;
																			}
																		} else {
																			v125 = 0;
																		}
																	}
																	// 0x33c34
																	if (v125 != 0) {
																		// 0x33c3c
																		v262 = *(int32_t *)(g23 - 0x768c);
																		v126 = g30;
																		v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																		if (v263 >= 1) {
																			// 0x33c5c
																			v226 = (0x1000000 * (int32_t)v263 - 0x1000000) / 0x1000000;
																			if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																				// 0x33c80
																				*(int32_t *)g35 = v126;
																				*(int32_t *)g36 = g31 + 1;
																				*(char *)g21 = (char)v226;
																				// branch -> 0x33c90
																			}
																		}
																	}
																	// 0x33c90
																	v127 = g30;
																	v157 = 112 * v127;
																	v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
																	v158 = g31;
																	v293 = *(char *)(v158 + v157 + v227);
																	v129 = v158;
																	if (v293 >= 1) {
																		// 0x33cac
																		v228 = (0x1000000 * (int32_t)v293 - 0x1000000) / 0x1000000;
																		v294 = *(char *)(v4 + 48 + 368 * v228);
																		if (v294 != 1) {
																			// 0x33cd0
																			if (v294 != 3) {
																				v129 = v158;
																				// 0x33ce4
																				v264 = *(char *)(v227 + v157 + v129 + 113);
																				if (v264 >= 1) {
																					// 0x33cf8
																					v229 = (0x1000000 * (int32_t)v264 - 0x1000000) / 0x1000000;
																					if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																						// 0x33d1c
																						*(int32_t *)g35 = g30 + 1;
																						*(int32_t *)g36 = v129 + 1;
																						*(char *)g21 = (char)v229;
																						// branch -> 0x33d30
																					}
																				}
																				// 0x33d30
																				if (*(char *)g21 == -1) {
																					// 0x33d40
																					*(int32_t *)g35 = g30;
																					*(int32_t *)g36 = g31;
																					v130 = function_c824c();
																					g34 = v130;
																					v162 = function_3257c(v130);
																					g34 = v162;
																					function_32720(v162);
																					// branch -> 0x33d54
																				}
																				// 0x33d54
																				result4 = *(int32_t *)(g23 - 0x7744);
																				if (*(int32_t *)result4 == 2) {
																					// 0x33d64
																					v12 = -1;
																					*(char *)g20 = -1;
																					*(int32_t *)g29 = v12;
																					*(char *)g21 = (char)v12;
																					*(int32_t *)g35 = g30;
																					*(int32_t *)g36 = g31;
																					// branch -> 0x33d7c
																				}
																				// 0x33d7c
																				v230 = *(int32_t *)g29;
																				if (v230 == -1) {
																					// 0x33da4
																					g10 = v1;
																					return result4;
																				}
																				// 0x33d88
																				result5 = g25 + 232 * v230;
																				if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																					// 0x33d9c
																					*(int32_t *)g29 = -1;
																					// branch -> 0x33da4
																				}
																				// 0x33da4
																				g10 = v1;
																				return result5;
																			}
																		}
																		// 0x33cd8
																		*(int32_t *)g35 = v127;
																		*(int32_t *)g36 = g31;
																		*(char *)g21 = (char)v228;
																		v129 = g31;
																		// branch -> 0x33ce4
																	}
																	// 0x33ce4
																	v264 = *(char *)(v227 + v157 + v129 + 113);
																	if (v264 >= 1) {
																		// 0x33cf8
																		v229 = (0x1000000 * (int32_t)v264 - 0x1000000) / 0x1000000;
																		if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																			// 0x33d1c
																			*(int32_t *)g35 = g30 + 1;
																			*(int32_t *)g36 = v129 + 1;
																			*(char *)g21 = (char)v229;
																			// branch -> 0x33d30
																		}
																	}
																	// 0x33d30
																	if (*(char *)g21 == -1) {
																		// 0x33d40
																		*(int32_t *)g35 = g30;
																		*(int32_t *)g36 = g31;
																		v130 = function_c824c();
																		g34 = v130;
																		v162 = function_3257c(v130);
																		g34 = v162;
																		function_32720(v162);
																		// branch -> 0x33d54
																	}
																}
															}
														}
														// 0x33d54
														result4 = *(int32_t *)(g23 - 0x7744);
														if (*(int32_t *)result4 == 2) {
															// 0x33d64
															v12 = -1;
															*(char *)g20 = -1;
															*(int32_t *)g29 = v12;
															*(char *)g21 = (char)v12;
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31;
															// branch -> 0x33d7c
														}
														// 0x33d7c
														v230 = *(int32_t *)g29;
														if (v230 == -1) {
															// 0x33da4
															g10 = v1;
															return result4;
														}
														// 0x33d88
														result5 = g25 + 232 * v230;
														if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
															// 0x33d9c
															*(int32_t *)g29 = -1;
															// branch -> 0x33da4
														}
														// 0x33da4
														g10 = v1;
														return result5;
													}
													// 0x33998
													v153 = g31;
													v255 = *(char *)(v153 + v15 + v7 + 113);
													v286 = v255;
													if (v255 != 0) {
														// 0x339ac
														if (0x1000000 * v286 < 0) {
															// 0x339bc
															v40 = 0x1000000 * (-1 - v286) / 0x1000000;
															// branch -> 0x339c8
														} else {
															// 0x339b4
															v40 = v286 - 1;
															// branch -> 0x339c8
														}
														// 0x339c8
														v223 = 0x1000000 * v40 / 0x1000000;
														if (v223 != v175) {
															// 0x339d4
															if (*(int32_t *)(g32 + 0x55ec * v223 + 404) != 0) {
																// 0x339e8
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = v153 + 1;
																*(char *)g33 = (char)v40;
																// branch -> 0x339fc
															}
														}
													}
												}
												// 0x339fc
												if (v3 == -1) {
													// 0x33a04
													if (*(char *)g33 == -1) {
														// 0x33a14
														v116 = v16;
														v118 = v116;
														if (v116 == 0) {
															// 0x33a1c
															v117 = g30;
															v256 = *(char *)(g31 + *(int32_t *)g16 + 112 * v117 + 112);
															v287 = v256;
															if (v256 != 0) {
																// 0x33a38
																if (0x1000000 * v287 < 0) {
																	// 0x33a48
																	v39 = 0x1000000 * (-1 - v287) / 0x1000000;
																	// branch -> 0x33a54
																} else {
																	// 0x33a40
																	v39 = v287 - 1;
																	// branch -> 0x33a54
																}
																// 0x33a54
																if (*(char *)(120 * 0x1000000 * v39 / 0x1000000 + v5 + 64) >= 2) {
																	// 0x33a70
																	*(int32_t *)g35 = v117 + 1;
																	*(int32_t *)g36 = g31;
																	*(char *)g20 = (char)v39;
																	v118 = v16;
																	// branch -> 0x33a80
																} else {
																	v118 = 0;
																}
															} else {
																v118 = 0;
															}
														}
														// 0x33a80
														if (v118 != 0) {
															// 0x33a88
															v119 = g30;
															v257 = *(char *)(g31 + *(int32_t *)g16 + 112 * v119 + 1);
															v288 = v257;
															if (v257 != 0) {
																// 0x33aa4
																if (0x1000000 * v288 < 0) {
																	// 0x33ab4
																	v36 = 0x1000000 * (-1 - v288) / 0x1000000;
																	// branch -> 0x33ac0
																} else {
																	// 0x33aac
																	v36 = v288 - 1;
																	// branch -> 0x33ac0
																}
																// 0x33ac0
																if (*(char *)(120 * 0x1000000 * v36 / 0x1000000 + v5 + 64) >= 2) {
																	// 0x33adc
																	*(int32_t *)g35 = v119;
																	*(int32_t *)g36 = g31 + 1;
																	*(char *)g20 = (char)v36;
																	// branch -> 0x33aec
																}
															}
														}
														// 0x33aec
														v120 = g30;
														v154 = 112 * v120;
														v224 = *(int32_t *)g16;
														v155 = g31;
														v289 = *(char *)(v155 + v154 + v224);
														v300 = v289;
														v122 = v155;
														if (v289 != 0) {
															// 0x33b04
															if (0x1000000 * v300 < 0) {
																// 0x33b14
																v25 = 0x1000000 * (-1 - v300) / 0x1000000;
																// branch -> 0x33b20
															} else {
																// 0x33b0c
																v25 = v300 - 1;
																// branch -> 0x33b20
															}
															// 0x33b20
															v258 = *(char *)(120 * 0x1000000 * v25 / 0x1000000 + v5 + 64);
															if (v258 != 1) {
																// 0x33b3c
																if (v258 != 3) {
																	v122 = v155;
																	// 0x33b50
																	v259 = *(char *)(v224 + v154 + v122 + 113);
																	v290 = v259;
																	if (v259 != 0) {
																		// 0x33b64
																		if (0x1000000 * v290 < 0) {
																			// 0x33b74
																			v24 = 0x1000000 * (-1 - v290) / 0x1000000;
																			// branch -> 0x33b80
																		} else {
																			// 0x33b6c
																			v24 = v290 - 1;
																			// branch -> 0x33b80
																		}
																		// 0x33b80
																		if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
																			// 0x33b9c
																			*(int32_t *)g35 = g30 + 1;
																			*(int32_t *)g36 = v122 + 1;
																			*(char *)g20 = (char)v24;
																			// branch -> 0x33bb0
																		}
																	}
																	// 0x33bb0
																	if (*(char *)g33 == -1) {
																		// 0x33bc0
																		if (*(char *)g20 == -1) {
																			// 0x33bd0
																			if (v3 == -1) {
																				// 0x33bd8
																				v123 = v16;
																				v125 = v123;
																				if (v123 == 0) {
																					// 0x33be0
																					v260 = *(int32_t *)(g23 - 0x768c);
																					v124 = g30;
																					v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																					if (v261 >= 1) {
																						// 0x33c00
																						v225 = (0x1000000 * (int32_t)v261 - 0x1000000) / 0x1000000;
																						if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																							// 0x33c24
																							*(int32_t *)g35 = v124 + 1;
																							*(int32_t *)g36 = g31;
																							*(char *)g21 = (char)v225;
																							v125 = v16;
																							// branch -> 0x33c34
																						} else {
																							v125 = 0;
																						}
																					} else {
																						v125 = 0;
																					}
																				}
																				// 0x33c34
																				if (v125 != 0) {
																					// 0x33c3c
																					v262 = *(int32_t *)(g23 - 0x768c);
																					v126 = g30;
																					v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																					if (v263 >= 1) {
																						// 0x33c5c
																						v226 = (0x1000000 * (int32_t)v263 - 0x1000000) / 0x1000000;
																						if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																							// 0x33c80
																							*(int32_t *)g35 = v126;
																							*(int32_t *)g36 = g31 + 1;
																							*(char *)g21 = (char)v226;
																							// branch -> 0x33c90
																						}
																					}
																				}
																				// 0x33c90
																				v127 = g30;
																				v157 = 112 * v127;
																				v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
																				v158 = g31;
																				v293 = *(char *)(v158 + v157 + v227);
																				v129 = v158;
																				if (v293 >= 1) {
																					// 0x33cac
																					v228 = (0x1000000 * (int32_t)v293 - 0x1000000) / 0x1000000;
																					v294 = *(char *)(v4 + 48 + 368 * v228);
																					if (v294 != 1) {
																						// 0x33cd0
																						if (v294 != 3) {
																							v129 = v158;
																							// 0x33ce4
																							v264 = *(char *)(v227 + v157 + v129 + 113);
																							if (v264 >= 1) {
																								// 0x33cf8
																								v229 = (0x1000000 * (int32_t)v264 - 0x1000000) / 0x1000000;
																								if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																									// 0x33d1c
																									*(int32_t *)g35 = g30 + 1;
																									*(int32_t *)g36 = v129 + 1;
																									*(char *)g21 = (char)v229;
																									// branch -> 0x33d30
																								}
																							}
																							// 0x33d30
																							if (*(char *)g21 == -1) {
																								// 0x33d40
																								*(int32_t *)g35 = g30;
																								*(int32_t *)g36 = g31;
																								v130 = function_c824c();
																								g34 = v130;
																								v162 = function_3257c(v130);
																								g34 = v162;
																								function_32720(v162);
																								// branch -> 0x33d54
																							}
																							// 0x33d54
																							result4 = *(int32_t *)(g23 - 0x7744);
																							if (*(int32_t *)result4 == 2) {
																								// 0x33d64
																								v12 = -1;
																								*(char *)g20 = -1;
																								*(int32_t *)g29 = v12;
																								*(char *)g21 = (char)v12;
																								*(int32_t *)g35 = g30;
																								*(int32_t *)g36 = g31;
																								// branch -> 0x33d7c
																							}
																							// 0x33d7c
																							v230 = *(int32_t *)g29;
																							if (v230 == -1) {
																								// 0x33da4
																								g10 = v1;
																								return result4;
																							}
																							// 0x33d88
																							result5 = g25 + 232 * v230;
																							if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																								// 0x33d9c
																								*(int32_t *)g29 = -1;
																								// branch -> 0x33da4
																							}
																							// 0x33da4
																							g10 = v1;
																							return result5;
																						}
																					}
																					// 0x33cd8
																					*(int32_t *)g35 = v127;
																					*(int32_t *)g36 = g31;
																					*(char *)g21 = (char)v228;
																					v129 = g31;
																					// branch -> 0x33ce4
																				}
																				// 0x33ce4
																				v264 = *(char *)(v227 + v157 + v129 + 113);
																				if (v264 >= 1) {
																					// 0x33cf8
																					v229 = (0x1000000 * (int32_t)v264 - 0x1000000) / 0x1000000;
																					if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																						// 0x33d1c
																						*(int32_t *)g35 = g30 + 1;
																						*(int32_t *)g36 = v129 + 1;
																						*(char *)g21 = (char)v229;
																						// branch -> 0x33d30
																					}
																				}
																				// 0x33d30
																				if (*(char *)g21 == -1) {
																					// 0x33d40
																					*(int32_t *)g35 = g30;
																					*(int32_t *)g36 = g31;
																					v130 = function_c824c();
																					g34 = v130;
																					v162 = function_3257c(v130);
																					g34 = v162;
																					function_32720(v162);
																					// branch -> 0x33d54
																				}
																			}
																		}
																	}
																	// 0x33d54
																	result4 = *(int32_t *)(g23 - 0x7744);
																	if (*(int32_t *)result4 == 2) {
																		// 0x33d64
																		v12 = -1;
																		*(char *)g20 = -1;
																		*(int32_t *)g29 = v12;
																		*(char *)g21 = (char)v12;
																		*(int32_t *)g35 = g30;
																		*(int32_t *)g36 = g31;
																		// branch -> 0x33d7c
																	}
																	// 0x33d7c
																	v230 = *(int32_t *)g29;
																	if (v230 == -1) {
																		// 0x33da4
																		g10 = v1;
																		return result4;
																	}
																	// 0x33d88
																	result5 = g25 + 232 * v230;
																	if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																		// 0x33d9c
																		*(int32_t *)g29 = -1;
																		// branch -> 0x33da4
																	}
																	// 0x33da4
																	g10 = v1;
																	return result5;
																}
															}
															// 0x33b44
															*(int32_t *)g35 = v120;
															*(int32_t *)g36 = g31;
															*(char *)g20 = (char)v25;
															v122 = g31;
															// branch -> 0x33b50
														}
														// 0x33b50
														v259 = *(char *)(v224 + v154 + v122 + 113);
														v290 = v259;
														if (v259 != 0) {
															// 0x33b64
															if (0x1000000 * v290 < 0) {
																// 0x33b74
																v24 = 0x1000000 * (-1 - v290) / 0x1000000;
																// branch -> 0x33b80
															} else {
																// 0x33b6c
																v24 = v290 - 1;
																// branch -> 0x33b80
															}
															// 0x33b80
															if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
																// 0x33b9c
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = v122 + 1;
																*(char *)g20 = (char)v24;
																// branch -> 0x33bb0
															}
														}
													}
												}
												// 0x33bb0
												if (*(char *)g33 == -1) {
													// 0x33bc0
													if (*(char *)g20 == -1) {
														// 0x33bd0
														if (v3 == -1) {
															// 0x33bd8
															v123 = v16;
															v125 = v123;
															if (v123 == 0) {
																// 0x33be0
																v260 = *(int32_t *)(g23 - 0x768c);
																v124 = g30;
																v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																if (v261 >= 1) {
																	// 0x33c00
																	v225 = (0x1000000 * (int32_t)v261 - 0x1000000) / 0x1000000;
																	if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																		// 0x33c24
																		*(int32_t *)g35 = v124 + 1;
																		*(int32_t *)g36 = g31;
																		*(char *)g21 = (char)v225;
																		v125 = v16;
																		// branch -> 0x33c34
																	} else {
																		v125 = 0;
																	}
																} else {
																	v125 = 0;
																}
															}
															// 0x33c34
															if (v125 != 0) {
																// 0x33c3c
																v262 = *(int32_t *)(g23 - 0x768c);
																v126 = g30;
																v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																if (v263 >= 1) {
																	// 0x33c5c
																	v226 = (0x1000000 * (int32_t)v263 - 0x1000000) / 0x1000000;
																	if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																		// 0x33c80
																		*(int32_t *)g35 = v126;
																		*(int32_t *)g36 = g31 + 1;
																		*(char *)g21 = (char)v226;
																		// branch -> 0x33c90
																	}
																}
															}
															// 0x33c90
															v127 = g30;
															v157 = 112 * v127;
															v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
															v158 = g31;
															v293 = *(char *)(v158 + v157 + v227);
															v129 = v158;
															if (v293 >= 1) {
																// 0x33cac
																v228 = (0x1000000 * (int32_t)v293 - 0x1000000) / 0x1000000;
																v294 = *(char *)(v4 + 48 + 368 * v228);
																if (v294 != 1) {
																	// 0x33cd0
																	if (v294 != 3) {
																		v129 = v158;
																		// 0x33ce4
																		v264 = *(char *)(v227 + v157 + v129 + 113);
																		if (v264 >= 1) {
																			// 0x33cf8
																			v229 = (0x1000000 * (int32_t)v264 - 0x1000000) / 0x1000000;
																			if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																				// 0x33d1c
																				*(int32_t *)g35 = g30 + 1;
																				*(int32_t *)g36 = v129 + 1;
																				*(char *)g21 = (char)v229;
																				// branch -> 0x33d30
																			}
																		}
																		// 0x33d30
																		if (*(char *)g21 == -1) {
																			// 0x33d40
																			*(int32_t *)g35 = g30;
																			*(int32_t *)g36 = g31;
																			v130 = function_c824c();
																			g34 = v130;
																			v162 = function_3257c(v130);
																			g34 = v162;
																			function_32720(v162);
																			// branch -> 0x33d54
																		}
																		// 0x33d54
																		result4 = *(int32_t *)(g23 - 0x7744);
																		if (*(int32_t *)result4 == 2) {
																			// 0x33d64
																			v12 = -1;
																			*(char *)g20 = -1;
																			*(int32_t *)g29 = v12;
																			*(char *)g21 = (char)v12;
																			*(int32_t *)g35 = g30;
																			*(int32_t *)g36 = g31;
																			// branch -> 0x33d7c
																		}
																		// 0x33d7c
																		v230 = *(int32_t *)g29;
																		if (v230 == -1) {
																			// 0x33da4
																			g10 = v1;
																			return result4;
																		}
																		// 0x33d88
																		result5 = g25 + 232 * v230;
																		if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																			// 0x33d9c
																			*(int32_t *)g29 = -1;
																			// branch -> 0x33da4
																		}
																		// 0x33da4
																		g10 = v1;
																		return result5;
																	}
																}
																// 0x33cd8
																*(int32_t *)g35 = v127;
																*(int32_t *)g36 = g31;
																*(char *)g21 = (char)v228;
																v129 = g31;
																// branch -> 0x33ce4
															}
															// 0x33ce4
															v264 = *(char *)(v227 + v157 + v129 + 113);
															if (v264 >= 1) {
																// 0x33cf8
																v229 = (0x1000000 * (int32_t)v264 - 0x1000000) / 0x1000000;
																if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																	// 0x33d1c
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = v129 + 1;
																	*(char *)g21 = (char)v229;
																	// branch -> 0x33d30
																}
															}
															// 0x33d30
															if (*(char *)g21 == -1) {
																// 0x33d40
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31;
																v130 = function_c824c();
																g34 = v130;
																v162 = function_3257c(v130);
																g34 = v162;
																function_32720(v162);
																// branch -> 0x33d54
															}
														}
													}
												}
												// 0x33d54
												result4 = *(int32_t *)(g23 - 0x7744);
												if (*(int32_t *)result4 == 2) {
													// 0x33d64
													v12 = -1;
													*(char *)g20 = -1;
													*(int32_t *)g29 = v12;
													*(char *)g21 = (char)v12;
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = g31;
													// branch -> 0x33d7c
												}
												// 0x33d7c
												v230 = *(int32_t *)g29;
												if (v230 == -1) {
													// 0x33da4
													g10 = v1;
													return result4;
												}
												// 0x33d88
												result5 = g25 + 232 * v230;
												if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
													// 0x33d9c
													*(int32_t *)g29 = -1;
													// branch -> 0x33da4
												}
												// 0x33da4
												g10 = v1;
												return result5;
											}
										}
										// 0x32cb8
										if (*(int32_t *)v3 >= 320) {
											// 0x32cc4
											if (*(char *)*(int32_t *)(v65 - 0x7794) == 0) {
												// 0x3354c
												v96 = v16;
												v98 = v96;
												if (v96 == 0) {
													// 0x33554
													v97 = g30;
													v249 = *(int16_t *)(*(int32_t *)g22 + 224 * v97 + 2 * g31 + 224);
													v279 = v249;
													if (v249 >= 1) {
														// 0x33574
														*(int32_t *)g29 = v279 - 1;
														*(int32_t *)g35 = v97 + 1;
														*(int32_t *)g36 = g31;
														v98 = v16;
														// branch -> 0x33588
													} else {
														v98 = 0;
													}
												}
												// 0x33588
												if (v98 != 0) {
													// 0x33590
													v99 = g31;
													v250 = *(int16_t *)(*(int32_t *)g22 + 224 * g30 + 2 * v99 + 2);
													v280 = v250;
													if (v250 >= 1) {
														// 0x335b0
														*(int32_t *)g29 = v280 - 1;
														*(int32_t *)g35 = g30;
														*(int32_t *)g36 = v99 + 1;
														// branch -> 0x335c4
													}
												}
												// 0x335c4
												v143 = 224 * g30;
												result3 = v143;
												v215 = *(int32_t *)g22;
												v19 = v215;
												v144 = 2 * g31;
												v12 = v144;
												v281 = *(int16_t *)(v144 + v143 + v215);
												v298 = v281;
												v146 = v144;
												v145 = v143;
												v100 = v215;
												if (v281 >= 1) {
													// 0x335e0
													*(int32_t *)g29 = v298 - 1;
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = g31;
													v146 = v12;
													v145 = result3;
													v100 = v19;
													// branch -> 0x335f0
												}
												// 0x335f0
												v251 = *(int16_t *)(v145 + v146 + v100 + 226);
												v282 = v251;
												if (v251 >= 1) {
													// 0x33604
													*(int32_t *)g29 = v282 - 1;
													*(int32_t *)g35 = g30 + 1;
													*(int32_t *)g36 = g31 + 1;
													// branch -> 0x3361c
												}
												// 0x3361c
												v147 = (int32_t *)g29;
												if (*(int32_t *)(*(int32_t *)(g23 - 0x7758) + 268 * *v147 + 84) == 0) {
													// 0x33638
													*v147 = -1;
													// branch -> 0x33640
												}
											} else {
												// 0x32cd4
												if (*(int32_t *)(v65 - 0x4f84) != -1) {
													// 0x32ce0
													if (v16 == 0) {
														// 0x32ce8
														v66 = g30;
														v67 = g31;
														v237 = *(int16_t *)(*(int32_t *)g22 + 224 * v66 + 2 * v67 + 450);
														result3 = v237;
														if (v237 != 0) {
															// 0x32d08
															v177 = *(int32_t *)g24 + 112 * v66;
															if (__asm_rlwinm_((int32_t) * (char *)(v177 + v67 + 225), 0, 25, 25) != 0) {
																// 0x32d24
																v68 = result3;
																v38 = (0x10000 * v68 < 1 ? -v68 : v68) - 1;
																v12 = v38;
																if (v38 == *(int32_t *)(g23 - 0x4f84)) {
																	// 0x32d48
																	v178 = g25 + 232 * v38;
																	if (*(int32_t *)(v178 + 152) >= 64) {
																		// 0x32d5c
																		v265 = (int32_t) * (char *)(*(int32_t *)(v178 + 228) + 122);
																		if (__asm_rlwinm_(v265, 0, 29, 29) != 0) {
																			// 0x32d6c
																			*(int32_t *)g35 = g30 + 1;
																			*(int32_t *)g36 = g31 + 2;
																			*(int32_t *)g29 = v12;
																			// branch -> 0x32d80
																		}
																	}
																}
															}
														}
													}
													// 0x32d80
													if (v16 != 0) {
														// 0x32d88
														v69 = g30;
														v70 = g31;
														v238 = *(int16_t *)(*(int32_t *)g22 + 224 * v69 + 2 * v70 + 228);
														result3 = v238;
														if (v238 != 0) {
															// 0x32da8
															v179 = *(int32_t *)g24 + 112 * v69;
															if (__asm_rlwinm_((int32_t) * (char *)(v179 + v70 + 114), 0, 25, 25) != 0) {
																// 0x32dc4
																v71 = result3;
																v37 = (0x10000 * v71 < 1 ? -v71 : v71) - 1;
																v12 = v37;
																if (v37 == *(int32_t *)(g23 - 0x4f84)) {
																	// 0x32de8
																	v180 = g25 + 232 * v37;
																	if (*(int32_t *)(v180 + 152) >= 64) {
																		// 0x32dfc
																		v266 = (int32_t) * (char *)(*(int32_t *)(v180 + 228) + 122);
																		if (__asm_rlwinm_(v266, 0, 29, 29) != 0) {
																			// 0x32e0c
																			*(int32_t *)g35 = g30 + 1;
																			*(int32_t *)g36 = g31 + 2;
																			*(int32_t *)g29 = v12;
																			// branch -> 0x32e20
																		}
																	}
																}
															}
														}
													}
													// 0x32e20
													v72 = g30;
													v137 = 224 * v72;
													v20 = v137;
													v181 = *(int32_t *)g22;
													v22 = v181;
													v73 = g31;
													v138 = 2 * v73;
													v21 = v138;
													v239 = *(int16_t *)(v138 + v181 + v137 + 452);
													result3 = v239;
													if (v239 != 0) {
														// 0x32e40
														v182 = *(int32_t *)g24 + 112 * v72;
														if (__asm_rlwinm_((int32_t) * (char *)(v182 + v73 + 226), 0, 25, 25) != 0) {
															// 0x32e5c
															v74 = result3;
															v35 = (0x10000 * v74 < 1 ? -v74 : v74) - 1;
															v12 = v35;
															if (v35 == *(int32_t *)(g23 - 0x4f84)) {
																// 0x32e80
																v183 = g25 + 232 * v35;
																if (*(int32_t *)(v183 + 152) >= 64) {
																	// 0x32e94
																	v267 = (int32_t) * (char *)(*(int32_t *)(v183 + 228) + 122);
																	if (__asm_rlwinm_(v267, 0, 29, 29) != 0) {
																		// 0x32ea4
																		*(int32_t *)g35 = g30 + 2;
																		*(int32_t *)g36 = g31 + 2;
																		*(int32_t *)g29 = v12;
																		// branch -> 0x32eb8
																	}
																}
															}
														}
													}
													// 0x32eb8
													if (v16 == 0) {
														// 0x32ec0
														v184 = v20 + v22;
														v240 = *(int16_t *)(v21 + v184 + 224);
														result3 = v240;
														if (v240 != 0) {
															// 0x32ed4
															v185 = *(int32_t *)g24 + 112 * g30;
															if (__asm_rlwinm_((int32_t) * (char *)(g31 + v185 + 112), 0, 25, 25) != 0) {
																// 0x32ef0
																v75 = result3;
																v34 = (0x10000 * v75 < 1 ? -v75 : v75) - 1;
																v12 = v34;
																if (v34 == *(int32_t *)(g23 - 0x4f84)) {
																	// 0x32f14
																	v186 = g25 + 232 * v34;
																	if (*(int32_t *)(v186 + 152) >= 64) {
																		// 0x32f28
																		v268 = (int32_t) * (char *)(*(int32_t *)(v186 + 228) + 122);
																		if (__asm_rlwinm_(v268, 0, 30, 30) != 0) {
																			// 0x32f38
																			*(int32_t *)g35 = g30 + 1;
																			*(int32_t *)g36 = g31;
																			*(int32_t *)g29 = v12;
																			// branch -> 0x32f48
																		}
																	}
																}
															}
														}
													}
													// 0x32f48
													if (v16 != 0) {
														// 0x32f50
														v187 = v20 + v22;
														v241 = *(int16_t *)(v21 + v187 + 2);
														result3 = v241;
														if (v241 != 0) {
															// 0x32f64
															v188 = *(int32_t *)g24 + 112 * g30;
															if (__asm_rlwinm_((int32_t) * (char *)(g31 + v188 + 1), 0, 25, 25) != 0) {
																// 0x32f80
																v76 = result3;
																v33 = (0x10000 * v76 < 1 ? -v76 : v76) - 1;
																v12 = v33;
																if (v33 == *(int32_t *)(g23 - 0x4f84)) {
																	// 0x32fa4
																	v189 = g25 + 232 * v33;
																	if (*(int32_t *)(v189 + 152) >= 64) {
																		// 0x32fb8
																		v269 = (int32_t) * (char *)(*(int32_t *)(v189 + 228) + 122);
																		if (__asm_rlwinm_(v269, 0, 30, 30) != 0) {
																			// 0x32fc8
																			*(int32_t *)g35 = g30;
																			*(int32_t *)g36 = g31 + 1;
																			*(int32_t *)g29 = v12;
																			// branch -> 0x32fd8
																		}
																	}
																}
															}
														}
													}
													// 0x32fd8
													v270 = *(int16_t *)(v22 + v21 + v20);
													result3 = v270;
													if (v270 != 0) {
														// 0x32fe8
														v296 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
														if (__asm_rlwinm_(v296, 0, 25, 25) != 0) {
															// 0x33000
															v77 = result3;
															v32 = (0x10000 * v77 < 1 ? -v77 : v77) - 1;
															v12 = v32;
															if (v32 == *(int32_t *)(g23 - 0x4f84)) {
																// 0x33024
																v190 = g25 + 232 * v32;
																if (*(int32_t *)(v190 + 152) >= 64) {
																	// 0x33038
																	if (*(char *)(*(int32_t *)(v190 + 228) + 122) % 2 != 0) {
																		// 0x33048
																		*(int32_t *)g35 = g30;
																		*(int32_t *)g36 = g31;
																		*(int32_t *)g29 = v12;
																		// branch -> 0x33054
																	}
																}
															}
														}
													}
													// 0x33054
													v191 = v20 + v22;
													v242 = *(int16_t *)(v21 + v191 + 226);
													result3 = v242;
													if (v242 != 0) {
														// 0x33068
														v192 = *(int32_t *)g24 + 112 * g30;
														if (__asm_rlwinm_((int32_t) * (char *)(g31 + v192 + 113), 0, 25, 25) != 0) {
															// 0x33084
															v78 = result3;
															v31 = (0x10000 * v78 < 1 ? -v78 : v78) - 1;
															v12 = v31;
															v308 = *(int32_t *)(g23 - 0x4f84);
															result3 = v308;
															if (v31 == v308) {
																// 0x330a8
																v193 = g25 + 232 * v31;
																result3 = v193;
																if (*(int32_t *)(v193 + 152) >= 64) {
																	// 0x330bc
																	v271 = (int32_t) * (char *)(*(int32_t *)(v193 + 228) + 122);
																	v304 = __asm_rlwinm_(v271, 0, 30, 30);
																	result3 = v304;
																	if (v304 != 0) {
																		// 0x330cc
																		v305 = g30 + 1;
																		result3 = v305;
																		*(int32_t *)g35 = v305;
																		*(int32_t *)g36 = g31 + 1;
																		*(int32_t *)g29 = v12;
																		// branch -> 0x330e0
																	}
																}
															}
														}
													}
													// 0x330e0
													v79 = g29;
													v139 = (int32_t *)v79;
													v194 = *v139;
													v80 = v79;
													if (v194 != -1) {
														// 0x330ec
														v306 = g25 + 232 * v194;
														result3 = v306;
														if (*(int32_t *)(v306 + 160) % 2 != 0) {
															// 0x33100
															*v139 = -1;
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31;
															v80 = g29;
															// branch -> 0x33110
														} else {
															v80 = v79;
														}
													}
													// 0x33110
													v195 = *(int32_t *)v80;
													if (v195 != -1) {
														// 0x3311c
														v307 = g25 + 232 * v195;
														result3 = v307;
														if (__asm_rlwinm_(*(int32_t *)(v307 + 160), 0, 26, 26) != 0) {
															// 0x33130
															*(int32_t *)g29 = -1;
															// branch -> 0x33138
														}
													}
													// 0x33138
													if (*(int32_t *)g29 != -1) {
														// 0x33da4
														g10 = v1;
														return result3;
													}
												}
												// 0x33144
												if (v16 == 0) {
													// 0x3314c
													v81 = g30;
													v82 = g31;
													v243 = *(int16_t *)(*(int32_t *)g22 + 224 * v81 + 2 * v82 + 450);
													result3 = v243;
													if (v243 != 0) {
														// 0x3316c
														v196 = *(int32_t *)g24 + 112 * v81;
														if (__asm_rlwinm_((int32_t) * (char *)(v196 + v82 + 225), 0, 25, 25) != 0) {
															// 0x33188
															v83 = result3;
															v30 = (0x10000 * v83 < 1 ? -v83 : v83) - 1;
															v12 = v30;
															v197 = 232 * v30 + g25;
															if (*(int32_t *)(v197 + 152) >= 64) {
																// 0x331b4
																v272 = (int32_t) * (char *)(*(int32_t *)(v197 + 228) + 122);
																if (__asm_rlwinm_(v272, 0, 29, 29) != 0) {
																	// 0x331c4
																	*(int32_t *)g35 = g30 + 2;
																	*(int32_t *)g36 = g31 + 1;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x331d8
																}
															}
														}
													}
												}
												// 0x331d8
												if (v16 != 0) {
													// 0x331e0
													v84 = g30;
													v85 = g31;
													v244 = *(int16_t *)(*(int32_t *)g22 + 224 * v84 + 2 * v85 + 228);
													result3 = v244;
													if (v244 != 0) {
														// 0x33200
														v198 = *(int32_t *)g24 + 112 * v84;
														if (__asm_rlwinm_((int32_t) * (char *)(v198 + v85 + 114), 0, 25, 25) != 0) {
															// 0x3321c
															v86 = result3;
															v29 = (0x10000 * v86 < 1 ? -v86 : v86) - 1;
															v12 = v29;
															v199 = 232 * v29 + g25;
															if (*(int32_t *)(v199 + 152) >= 64) {
																// 0x33248
																v273 = (int32_t) * (char *)(*(int32_t *)(v199 + 228) + 122);
																if (__asm_rlwinm_(v273, 0, 29, 29) != 0) {
																	// 0x33258
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31 + 2;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x3326c
																}
															}
														}
													}
												}
												// 0x3326c
												v87 = g30;
												v140 = 224 * v87;
												v20 = v140;
												v200 = *(int32_t *)g22;
												v22 = v200;
												v88 = g31;
												v141 = 2 * v88;
												v21 = v141;
												v245 = *(int16_t *)(v141 + v200 + v140 + 452);
												result3 = v245;
												if (v245 != 0) {
													// 0x3328c
													v201 = *(int32_t *)g24 + 112 * v87;
													if (__asm_rlwinm_((int32_t) * (char *)(v201 + v88 + 226), 0, 25, 25) != 0) {
														// 0x332a8
														v89 = result3;
														v28 = (0x10000 * v89 < 1 ? -v89 : v89) - 1;
														v12 = v28;
														v202 = 232 * v28 + g25;
														if (*(int32_t *)(v202 + 152) >= 64) {
															// 0x332d4
															v274 = (int32_t) * (char *)(*(int32_t *)(v202 + 228) + 122);
															if (__asm_rlwinm_(v274, 0, 29, 29) != 0) {
																// 0x332e4
																*(int32_t *)g35 = g30 + 2;
																*(int32_t *)g36 = g31 + 2;
																*(int32_t *)g29 = v12;
																// branch -> 0x332f8
															}
														}
													}
												}
												// 0x332f8
												if (v16 == 0) {
													// 0x33300
													v203 = v20 + v22;
													v246 = *(int16_t *)(v21 + v203 + 224);
													result3 = v246;
													if (v246 != 0) {
														// 0x33314
														v204 = *(int32_t *)g24 + 112 * g30;
														if (__asm_rlwinm_((int32_t) * (char *)(g31 + v204 + 112), 0, 25, 25) != 0) {
															// 0x33330
															v90 = result3;
															v27 = (0x10000 * v90 < 1 ? -v90 : v90) - 1;
															v12 = v27;
															v205 = 232 * v27 + g25;
															if (*(int32_t *)(v205 + 152) >= 64) {
																// 0x3335c
																v275 = (int32_t) * (char *)(*(int32_t *)(v205 + 228) + 122);
																if (__asm_rlwinm_(v275, 0, 30, 30) != 0) {
																	// 0x3336c
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x3337c
																}
															}
														}
													}
												}
												// 0x3337c
												if (v16 != 0) {
													// 0x33384
													v206 = v20 + v22;
													v247 = *(int16_t *)(v21 + v206 + 2);
													result3 = v247;
													if (v247 != 0) {
														// 0x33398
														v207 = *(int32_t *)g24 + 112 * g30;
														if (__asm_rlwinm_((int32_t) * (char *)(g31 + v207 + 1), 0, 25, 25) != 0) {
															// 0x333b4
															v91 = result3;
															v26 = (0x10000 * v91 < 1 ? -v91 : v91) - 1;
															v12 = v26;
															v208 = 232 * v26 + g25;
															if (*(int32_t *)(v208 + 152) >= 64) {
																// 0x333e0
																v276 = (int32_t) * (char *)(*(int32_t *)(v208 + 228) + 122);
																if (__asm_rlwinm_(v276, 0, 30, 30) != 0) {
																	// 0x333f0
																	*(int32_t *)g35 = g30;
																	*(int32_t *)g36 = g31 + 1;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x33400
																}
															}
														}
													}
												}
												// 0x33400
												v277 = *(int16_t *)(v22 + v21 + v20);
												result3 = v277;
												if (v277 != 0) {
													// 0x33410
													v297 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
													if (__asm_rlwinm_(v297, 0, 25, 25) != 0) {
														// 0x33428
														v92 = result3;
														v45 = (0x10000 * v92 < 1 ? -v92 : v92) - 1;
														v12 = v45;
														v209 = 232 * v45 + g25;
														if (*(int32_t *)(v209 + 152) >= 64) {
															// 0x33454
															if (*(char *)(*(int32_t *)(v209 + 228) + 122) % 2 != 0) {
																// 0x33464
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31;
																*(int32_t *)g29 = v12;
																// branch -> 0x33470
															}
														}
													}
												}
												// 0x33470
												v210 = v20 + v22;
												v248 = *(int16_t *)(v21 + v210 + 226);
												result3 = v248;
												if (v248 != 0) {
													// 0x33484
													v211 = *(int32_t *)g24 + 112 * g30;
													if (__asm_rlwinm_((int32_t) * (char *)(g31 + v211 + 113), 0, 25, 25) != 0) {
														// 0x334a0
														v93 = result3;
														v44 = (0x10000 * v93 < 1 ? -v93 : v93) - 1;
														v12 = v44;
														v212 = 232 * v44 + g25;
														if (*(int32_t *)(v212 + 152) >= 64) {
															// 0x334cc
															v278 = (int32_t) * (char *)(*(int32_t *)(v212 + 228) + 122);
															if (__asm_rlwinm_(v278, 0, 30, 30) != 0) {
																// 0x334dc
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31 + 1;
																*(int32_t *)g29 = v12;
																// branch -> 0x334f0
															}
														}
													}
												}
												// 0x334f0
												v94 = g29;
												v142 = (int32_t *)v94;
												v213 = *v142;
												v95 = v94;
												if (v213 != -1) {
													// 0x334fc
													if (*(int32_t *)(g25 + 232 * v213 + 160) % 2 != 0) {
														// 0x33510
														*v142 = -1;
														*(int32_t *)g35 = g30;
														*(int32_t *)g36 = g31;
														v95 = g29;
														// branch -> 0x33520
													} else {
														v95 = v94;
													}
												}
												// 0x33520
												v214 = *(int32_t *)v95;
												if (v214 != -1) {
													// 0x3352c
													if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v214 + 160), 0, 26, 26) != 0) {
														// 0x33540
														*(int32_t *)g29 = -1;
														// branch -> 0x33640
													}
												}
											}
											// 0x33640
											v216 = *(int32_t *)g29;
											v3 = v216;
											if (v216 == -1) {
												// 0x3364c
												v101 = v16;
												v103 = v101;
												if (v101 == 0) {
													// 0x33654
													v102 = g30;
													v252 = *(char *)(g31 + *(int32_t *)v6 + 112 * v102 + 112);
													v283 = v252;
													if (v252 != 0) {
														// 0x33670
														if (0x1000000 * v283 < 0) {
															// 0x33680
															v43 = 0x1000000 * (-1 - v283) / 0x1000000;
															// branch -> 0x3368c
														} else {
															// 0x33678
															v43 = v283 - 1;
															// branch -> 0x3368c
														}
														// 0x3368c
														v12 = v43;
														v217 = 0x1000000 * v43 / 0x1000000;
														if (v217 != v175) {
															// 0x33698
															if (*(int32_t *)(g32 + 0x55ec * v217 + 404) != 0) {
																// 0x336ac
																*(int32_t *)g35 = v102 + 1;
																*(int32_t *)g36 = g31;
																*(char *)g33 = (char)v12;
																v103 = v16;
																// branch -> 0x336bc
															} else {
																v103 = 0;
															}
														} else {
															v103 = 0;
														}
													} else {
														v103 = 0;
													}
												}
												// 0x336bc
												if (v103 != 0) {
													// 0x336c4
													v104 = g30;
													v253 = *(char *)(g31 + *(int32_t *)v6 + 112 * v104 + 1);
													v284 = v253;
													if (v253 != 0) {
														// 0x336e0
														if (0x1000000 * v284 < 0) {
															// 0x336f0
															v42 = 0x1000000 * (-1 - v284) / 0x1000000;
															// branch -> 0x336fc
														} else {
															// 0x336e8
															v42 = v284 - 1;
															// branch -> 0x336fc
														}
														// 0x336fc
														v12 = v42;
														v218 = 0x1000000 * v42 / 0x1000000;
														if (v218 != v175) {
															// 0x33708
															if (*(int32_t *)(g32 + 0x55ec * v218 + 404) != 0) {
																// 0x3371c
																*(int32_t *)g35 = v104;
																*(int32_t *)g36 = g31 + 1;
																*(char *)g33 = (char)v12;
																// branch -> 0x3372c
															}
														}
													}
												}
												// 0x3372c
												v105 = g30;
												v148 = 112 * v105;
												v15 = v148;
												v219 = *(int32_t *)v6;
												v7 = v219;
												v149 = g31;
												v285 = *(char *)(v149 + v148 + v219);
												v299 = v285;
												v150 = v149;
												v106 = v148;
												if (v285 != 0) {
													// 0x33744
													if (0x1000000 * v299 < 0) {
														// 0x33754
														v41 = 0x1000000 * (-1 - v299) / 0x1000000;
														// branch -> 0x33760
													} else {
														// 0x3374c
														v41 = v299 - 1;
														// branch -> 0x33760
													}
													// 0x33760
													result3 = v41;
													if (0x1000000 * v41 / 0x1000000 != v175) {
														// 0x3376c
														*(int32_t *)g35 = v105;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)result3;
														v150 = g31;
														v106 = v15;
														// branch -> 0x33778
													} else {
														v150 = v149;
														v106 = v148;
													}
												}
												// 0x33778
												v220 = *(int32_t *)g24;
												v14 = v220;
												if (__asm_rlwinm_((int32_t) * (char *)(v220 + v106 + v150), 0, 29, 29) != 0) {
													// 0x3378c
													v107 = g32;
													v254 = *(int32_t *)(v107 + 56);
													v108 = g30;
													v110 = v108;
													v109 = v107;
													if (v108 == v254) {
														// 0x3379c
														if (g31 == *(int32_t *)(v107 + 60)) {
															// 0x337a8
															if (v175 != 0) {
																// 0x337b0
																*(int32_t *)g35 = v254;
																*(int32_t *)g36 = g31;
																*(char *)g33 = (char)0;
																v110 = g30;
																v109 = g32;
																// branch -> 0x337c0
															} else {
																v110 = v254;
																v109 = v107;
															}
														} else {
															v110 = v254;
															v109 = v107;
														}
													}
													// 0x337c0
													v151 = v109 + 0x55ec;
													result3 = v151;
													v112 = v110;
													v111 = v151;
													if (v110 == *(int32_t *)(v109 + 0x5624)) {
														// 0x337d4
														if (g31 == *(int32_t *)(v109 + 0x5628)) {
															// 0x337e0
															if (v175 != 1) {
																// 0x337e8
																*(int32_t *)g35 = v110;
																*(int32_t *)g36 = g31;
																*(char *)g33 = (char)1;
																v112 = g30;
																v111 = result3;
																// branch -> 0x337f8
															} else {
																v112 = v110;
																v111 = v151;
															}
														} else {
															v112 = v110;
															v111 = v151;
														}
													}
													// 0x337f8
													v152 = v111 + 0x55ec;
													result3 = v152;
													v114 = v112;
													v113 = v152;
													if (v112 == *(int32_t *)(v111 + 0x5624)) {
														// 0x3380c
														if (g31 == *(int32_t *)(v111 + 0x5628)) {
															// 0x33818
															if (v175 != 2) {
																// 0x33820
																*(int32_t *)g35 = v112;
																*(int32_t *)g36 = g31;
																*(char *)g33 = (char)2;
																v114 = g30;
																v113 = result3;
																// branch -> 0x33830
															} else {
																v114 = v112;
																v113 = v152;
															}
														} else {
															v114 = v112;
															v113 = v152;
														}
													}
													// 0x33830
													if (v114 == *(int32_t *)(v113 + 0x5624)) {
														// 0x33844
														if (g31 == *(int32_t *)(v113 + 0x5628)) {
															// 0x33850
															if (v175 != 3) {
																// 0x33858
																*(int32_t *)g35 = v114;
																*(int32_t *)g36 = g31;
																*(char *)g33 = (char)3;
																// branch -> 0x33868
															}
														}
													}
												}
												// 0x33868
												if (v176 == 8) {
													// 0x33870
													v13 = -1;
													// branch -> 0x33874
													while (true) {
														// 0x33874
														v221 = g30 - 1;
														v19 = v221;
														v11 = 3;
														v222 = g31 + 112 * v221 - 1 + v14;
														v22 = v222;
														v23 = -1;
														v115 = v222;
														// branch -> 0x33894
														goto lab_0x33894_9;
													}
												}
												// 0x33998
												v153 = g31;
												v255 = *(char *)(v153 + v15 + v7 + 113);
												v286 = v255;
												if (v255 != 0) {
													// 0x339ac
													if (0x1000000 * v286 < 0) {
														// 0x339bc
														v40 = 0x1000000 * (-1 - v286) / 0x1000000;
														// branch -> 0x339c8
													} else {
														// 0x339b4
														v40 = v286 - 1;
														// branch -> 0x339c8
													}
													// 0x339c8
													result3 = v40;
													v223 = 0x1000000 * v40 / 0x1000000;
													if (v223 != v175) {
														// 0x339d4
														if (*(int32_t *)(g32 + 0x55ec * v223 + 404) != 0) {
															// 0x339e8
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = v153 + 1;
															*(char *)g33 = (char)result3;
															// branch -> 0x339fc
														}
													}
												}
											}
											// 0x339fc
											if (v3 == -1) {
												// 0x33a04
												if (*(char *)g33 == -1) {
													// 0x33a14
													v116 = v16;
													v118 = v116;
													if (v116 == 0) {
														// 0x33a1c
														v117 = g30;
														v256 = *(char *)(g31 + *(int32_t *)g16 + 112 * v117 + 112);
														v287 = v256;
														if (v256 != 0) {
															// 0x33a38
															if (0x1000000 * v287 < 0) {
																// 0x33a48
																v39 = 0x1000000 * (-1 - v287) / 0x1000000;
																// branch -> 0x33a54
															} else {
																// 0x33a40
																v39 = v287 - 1;
																// branch -> 0x33a54
															}
															// 0x33a54
															v12 = v39;
															if (*(char *)(120 * 0x1000000 * v39 / 0x1000000 + v5 + 64) >= 2) {
																// 0x33a70
																*(int32_t *)g35 = v117 + 1;
																*(int32_t *)g36 = g31;
																*(char *)g20 = (char)v12;
																v118 = v16;
																// branch -> 0x33a80
															} else {
																v118 = 0;
															}
														} else {
															v118 = 0;
														}
													}
													// 0x33a80
													if (v118 != 0) {
														// 0x33a88
														v119 = g30;
														v257 = *(char *)(g31 + *(int32_t *)g16 + 112 * v119 + 1);
														v288 = v257;
														if (v257 != 0) {
															// 0x33aa4
															if (0x1000000 * v288 < 0) {
																// 0x33ab4
																v36 = 0x1000000 * (-1 - v288) / 0x1000000;
																// branch -> 0x33ac0
															} else {
																// 0x33aac
																v36 = v288 - 1;
																// branch -> 0x33ac0
															}
															// 0x33ac0
															v12 = v36;
															if (*(char *)(120 * 0x1000000 * v36 / 0x1000000 + v5 + 64) >= 2) {
																// 0x33adc
																*(int32_t *)g35 = v119;
																*(int32_t *)g36 = g31 + 1;
																*(char *)g20 = (char)v12;
																// branch -> 0x33aec
															}
														}
													}
													// 0x33aec
													v120 = g30;
													v154 = 112 * v120;
													v12 = v154;
													v224 = *(int32_t *)g16;
													result3 = v224;
													v155 = g31;
													v289 = *(char *)(v155 + v154 + v224);
													v300 = v289;
													v122 = v155;
													v156 = v154;
													v121 = v224;
													if (v289 != 0) {
														// 0x33b04
														if (0x1000000 * v300 < 0) {
															// 0x33b14
															v25 = 0x1000000 * (-1 - v300) / 0x1000000;
															// branch -> 0x33b20
														} else {
															// 0x33b0c
															v25 = v300 - 1;
															// branch -> 0x33b20
														}
														// 0x33b20
														v258 = *(char *)(120 * 0x1000000 * v25 / 0x1000000 + v5 + 64);
														if (v258 != 1) {
															// 0x33b3c
															if (v258 != 3) {
																v122 = v155;
																// 0x33b50
																v259 = *(char *)(v224 + v154 + v122 + 113);
																v290 = v259;
																if (v259 != 0) {
																	// 0x33b64
																	if (0x1000000 * v290 < 0) {
																		// 0x33b74
																		v24 = 0x1000000 * (-1 - v290) / 0x1000000;
																		// branch -> 0x33b80
																	} else {
																		// 0x33b6c
																		v24 = v290 - 1;
																		// branch -> 0x33b80
																	}
																	// 0x33b80
																	if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
																		// 0x33b9c
																		*(int32_t *)g35 = g30 + 1;
																		*(int32_t *)g36 = v122 + 1;
																		*(char *)g20 = (char)v24;
																		// branch -> 0x33bb0
																	}
																}
																// 0x33bb0
																if (*(char *)g33 == -1) {
																	// 0x33bc0
																	if (*(char *)g20 == -1) {
																		// 0x33bd0
																		if (v3 == -1) {
																			// 0x33bd8
																			v123 = v16;
																			v125 = v123;
																			if (v123 == 0) {
																				// 0x33be0
																				v260 = *(int32_t *)(g23 - 0x768c);
																				v124 = g30;
																				v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																				if (v261 >= 1) {
																					// 0x33c00
																					v225 = (0x1000000 * (int32_t)v261 - 0x1000000) / 0x1000000;
																					if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																						// 0x33c24
																						*(int32_t *)g35 = v124 + 1;
																						*(int32_t *)g36 = g31;
																						*(char *)g21 = (char)v225;
																						v125 = v16;
																						// branch -> 0x33c34
																					} else {
																						v125 = 0;
																					}
																				} else {
																					v125 = 0;
																				}
																			}
																			// 0x33c34
																			if (v125 != 0) {
																				// 0x33c3c
																				v262 = *(int32_t *)(g23 - 0x768c);
																				v126 = g30;
																				v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																				if (v263 >= 1) {
																					// 0x33c5c
																					v226 = (0x1000000 * (int32_t)v263 - 0x1000000) / 0x1000000;
																					if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																						// 0x33c80
																						*(int32_t *)g35 = v126;
																						*(int32_t *)g36 = g31 + 1;
																						*(char *)g21 = (char)v226;
																						// branch -> 0x33c90
																					}
																				}
																			}
																			// 0x33c90
																			v127 = g30;
																			v157 = 112 * v127;
																			v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
																			v158 = g31;
																			v293 = *(char *)(v158 + v157 + v227);
																			v129 = v158;
																			if (v293 >= 1) {
																				// 0x33cac
																				v228 = (0x1000000 * (int32_t)v293 - 0x1000000) / 0x1000000;
																				v294 = *(char *)(v4 + 48 + 368 * v228);
																				if (v294 != 1) {
																					// 0x33cd0
																					if (v294 != 3) {
																						v129 = v158;
																						// 0x33ce4
																						v264 = *(char *)(v227 + v157 + v129 + 113);
																						if (v264 >= 1) {
																							// 0x33cf8
																							v229 = (0x1000000 * (int32_t)v264 - 0x1000000) / 0x1000000;
																							if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																								// 0x33d1c
																								*(int32_t *)g35 = g30 + 1;
																								*(int32_t *)g36 = v129 + 1;
																								*(char *)g21 = (char)v229;
																								// branch -> 0x33d30
																							}
																						}
																						// 0x33d30
																						if (*(char *)g21 == -1) {
																							// 0x33d40
																							*(int32_t *)g35 = g30;
																							*(int32_t *)g36 = g31;
																							v130 = function_c824c();
																							g34 = v130;
																							v162 = function_3257c(v130);
																							g34 = v162;
																							function_32720(v162);
																							// branch -> 0x33d54
																						}
																						// 0x33d54
																						result4 = *(int32_t *)(g23 - 0x7744);
																						if (*(int32_t *)result4 == 2) {
																							// 0x33d64
																							v12 = -1;
																							*(char *)g20 = -1;
																							*(int32_t *)g29 = v12;
																							*(char *)g21 = (char)v12;
																							*(int32_t *)g35 = g30;
																							*(int32_t *)g36 = g31;
																							// branch -> 0x33d7c
																						}
																						// 0x33d7c
																						v230 = *(int32_t *)g29;
																						if (v230 == -1) {
																							// 0x33da4
																							g10 = v1;
																							return result4;
																						}
																						// 0x33d88
																						result5 = g25 + 232 * v230;
																						if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																							// 0x33d9c
																							*(int32_t *)g29 = -1;
																							// branch -> 0x33da4
																						}
																						// 0x33da4
																						g10 = v1;
																						return result5;
																					}
																				}
																				// 0x33cd8
																				*(int32_t *)g35 = v127;
																				*(int32_t *)g36 = g31;
																				*(char *)g21 = (char)v228;
																				v129 = g31;
																				// branch -> 0x33ce4
																			}
																			// 0x33ce4
																			v264 = *(char *)(v227 + v157 + v129 + 113);
																			if (v264 >= 1) {
																				// 0x33cf8
																				v229 = (0x1000000 * (int32_t)v264 - 0x1000000) / 0x1000000;
																				if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																					// 0x33d1c
																					*(int32_t *)g35 = g30 + 1;
																					*(int32_t *)g36 = v129 + 1;
																					*(char *)g21 = (char)v229;
																					// branch -> 0x33d30
																				}
																			}
																			// 0x33d30
																			if (*(char *)g21 == -1) {
																				// 0x33d40
																				*(int32_t *)g35 = g30;
																				*(int32_t *)g36 = g31;
																				v130 = function_c824c();
																				g34 = v130;
																				v162 = function_3257c(v130);
																				g34 = v162;
																				function_32720(v162);
																				// branch -> 0x33d54
																			}
																		}
																	}
																}
																// 0x33d54
																result4 = *(int32_t *)(g23 - 0x7744);
																if (*(int32_t *)result4 == 2) {
																	// 0x33d64
																	v12 = -1;
																	*(char *)g20 = -1;
																	*(int32_t *)g29 = v12;
																	*(char *)g21 = (char)v12;
																	*(int32_t *)g35 = g30;
																	*(int32_t *)g36 = g31;
																	// branch -> 0x33d7c
																}
																// 0x33d7c
																v230 = *(int32_t *)g29;
																if (v230 == -1) {
																	// 0x33da4
																	g10 = v1;
																	return result4;
																}
																// 0x33d88
																result5 = g25 + 232 * v230;
																if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																	// 0x33d9c
																	*(int32_t *)g29 = -1;
																	// branch -> 0x33da4
																}
																// 0x33da4
																g10 = v1;
																return result5;
															}
														}
														// 0x33b44
														*(int32_t *)g35 = v120;
														*(int32_t *)g36 = g31;
														*(char *)g20 = (char)v25;
														v122 = g31;
														v156 = v12;
														v121 = result3;
														// branch -> 0x33b50
													}
													// 0x33b50
													v259 = *(char *)(v121 + v156 + v122 + 113);
													v290 = v259;
													if (v259 != 0) {
														// 0x33b64
														if (0x1000000 * v290 < 0) {
															// 0x33b74
															v24 = 0x1000000 * (-1 - v290) / 0x1000000;
															// branch -> 0x33b80
														} else {
															// 0x33b6c
															v24 = v290 - 1;
															// branch -> 0x33b80
														}
														// 0x33b80
														v12 = v24;
														if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
															// 0x33b9c
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = v122 + 1;
															*(char *)g20 = (char)v12;
															// branch -> 0x33bb0
														}
													}
												}
											}
											// 0x33bb0
											if (*(char *)g33 == -1) {
												// 0x33bc0
												if (*(char *)g20 == -1) {
													// 0x33bd0
													if (v3 == -1) {
														// 0x33bd8
														v123 = v16;
														v125 = v123;
														if (v123 == 0) {
															// 0x33be0
															v260 = *(int32_t *)(g23 - 0x768c);
															v124 = g30;
															v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
															v291 = v261;
															if (v261 >= 1) {
																// 0x33c00
																v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
																v12 = v225;
																if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																	// 0x33c24
																	*(int32_t *)g35 = v124 + 1;
																	*(int32_t *)g36 = g31;
																	*(char *)g21 = (char)v12;
																	v125 = v16;
																	// branch -> 0x33c34
																} else {
																	v125 = 0;
																}
															} else {
																v125 = 0;
															}
														}
														// 0x33c34
														if (v125 != 0) {
															// 0x33c3c
															v262 = *(int32_t *)(g23 - 0x768c);
															v126 = g30;
															v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
															v292 = v263;
															if (v263 >= 1) {
																// 0x33c5c
																v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
																v12 = v226;
																if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																	// 0x33c80
																	*(int32_t *)g35 = v126;
																	*(int32_t *)g36 = g31 + 1;
																	*(char *)g21 = (char)v12;
																	// branch -> 0x33c90
																}
															}
														}
														// 0x33c90
														v127 = g30;
														v157 = 112 * v127;
														v20 = v157;
														v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
														result3 = v227;
														v158 = g31;
														v293 = *(char *)(v158 + v157 + v227);
														v301 = v293;
														v129 = v158;
														v160 = v157;
														v128 = v227;
														if (v293 >= 1) {
															// 0x33cac
															v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
															v18 = v228;
															v294 = *(char *)(v4 + 48 + 368 * v228);
															if (v294 != 1) {
																// 0x33cd0
																if (v294 != 3) {
																	v129 = v158;
																	// 0x33ce4
																	v264 = *(char *)(v227 + v157 + v129 + 113);
																	v295 = v264;
																	if (v264 >= 1) {
																		// 0x33cf8
																		v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
																		v12 = v229;
																		if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																			// 0x33d1c
																			v161 = g30 + 1;
																			v18 = v161;
																			*(int32_t *)g35 = v161;
																			*(int32_t *)g36 = v129 + 1;
																			*(char *)g21 = (char)v12;
																			// branch -> 0x33d30
																		}
																	}
																	// 0x33d30
																	if (*(char *)g21 == -1) {
																		// 0x33d40
																		*(int32_t *)g35 = g30;
																		*(int32_t *)g36 = g31;
																		v130 = function_c824c();
																		g34 = v130;
																		v162 = function_3257c(v130);
																		g34 = v162;
																		function_32720(v162);
																		// branch -> 0x33d54
																	}
																	// 0x33d54
																	result4 = *(int32_t *)(g23 - 0x7744);
																	result3 = result4;
																	if (*(int32_t *)result4 == 2) {
																		// 0x33d64
																		v12 = -1;
																		*(char *)g20 = -1;
																		*(int32_t *)g29 = v12;
																		*(char *)g21 = (char)v12;
																		*(int32_t *)g35 = g30;
																		*(int32_t *)g36 = g31;
																		// branch -> 0x33d7c
																	}
																	// 0x33d7c
																	v230 = *(int32_t *)g29;
																	if (v230 == -1) {
																		// 0x33da4
																		g10 = v1;
																		return result3;
																	}
																	// 0x33d88
																	result5 = g25 + 232 * v230;
																	result3 = result5;
																	if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																		// 0x33d9c
																		*(int32_t *)g29 = -1;
																		// branch -> 0x33da4
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
															// 0x33cd8
															*(int32_t *)g35 = v127;
															*(int32_t *)g36 = g31;
															*(char *)g21 = (char)v18;
															v129 = g31;
															v160 = v20;
															v128 = result3;
															// branch -> 0x33ce4
														}
														// 0x33ce4
														v264 = *(char *)(v128 + v160 + v129 + 113);
														v295 = v264;
														if (v264 >= 1) {
															// 0x33cf8
															v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
															v12 = v229;
															if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																// 0x33d1c
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = v129 + 1;
																*(char *)g21 = (char)v12;
																// branch -> 0x33d30
															}
														}
														// 0x33d30
														if (*(char *)g21 == -1) {
															// 0x33d40
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31;
															v130 = function_c824c();
															g34 = v130;
															v162 = function_3257c(v130);
															g34 = v162;
															function_32720(v162);
															// branch -> 0x33d54
														}
													}
												}
											}
											// 0x33d54
											if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
												// 0x33d64
												v12 = -1;
												*(char *)g20 = -1;
												*(int32_t *)g29 = v12;
												*(char *)g21 = (char)v12;
												*(int32_t *)g35 = g30;
												*(int32_t *)g36 = g31;
												// branch -> 0x33d7c
											}
											// 0x33d7c
											v230 = *(int32_t *)g29;
											if (v230 != -1) {
												// 0x33d88
												if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v230 + 160), 0, 26, 26) != 0) {
													// 0x33d9c
													*(int32_t *)g29 = -1;
													// branch -> 0x33da4
												}
											}
										}
									}
								} else {
									// 0x32c38
									function_2ec14(v236, v175, v235, v176);
									// branch -> 0x33da4
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x32c1c
						*(int32_t *)g35 = g30;
						*(int32_t *)g36 = g31;
						// branch -> 0x33da4
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x32988
			if (v8 > 320) {
				// 0x32998
				v17 = 0;
				// branch -> 0x3299c
			} else {
				// 0x32990
				v17 = v8 + 160;
				// branch -> 0x3299c
			}
			// 0x3299c
			if (v9 >= 352) {
				// 0x329a4
				if (function_c6730() != 0) {
					// 0x329b0
					v10 = 351;
					// branch -> 0x329b4
				}
			}
			// 0x329b4
			v46 = g23;
			v164 = *(int32_t *)*(int32_t *)(v46 - 0x766c);
			v47 = v17;
			if (v164 == 0) {
				// 0x329c4
				v48 = v10;
				v132 = v48 / 2 | v48 & -0x80000000;
				v131 = v47 / 2 | v47 & -0x80000000;
				// branch -> 0x329cc
			} else {
				// 0x329b4
				v132 = v10;
				v131 = v47;
				// branch -> 0x329cc
			}
			// 0x329cc
			v49 = v7;
			v165 = v131 - *(int32_t *)v49;
			v166 = g32 + 0x55ec * *(int32_t *)*(int32_t *)(v46 - 0x77ac);
			v231 = *(int32_t *)(v166 + 484);
			v167 = v132 - *(int32_t *)(v49 + 4);
			v10 = v167;
			v232 = *(int32_t *)(v166 + 488);
			v168 = v231 / 256 - (*(int32_t *)(v166 + 104) + v231) / 256;
			v169 = v232 / 256 - (*(int32_t *)(v166 + 108) + v232) / 256;
			v53 = v167;
			v51 = v165;
			if (*(int32_t *)(v49 + 16) != 0) {
				// 0x32a28
				v170 = v167 - v169;
				v10 = v170;
				v53 = v170;
				v51 = v165 - v168;
				// branch -> 0x32a30
			}
			// 0x32a30
			v50 = v51;
			if (v51 <= 0xffffffff) {
				// 0x32a38
				v50 = 0;
				// branch -> 0x32a3c
			}
			// 0x32a3c
			v54 = v50;
			if (v50 >= 640) {
				// 0x32a44
				v54 = 640;
				// branch -> 0x32a48
			}
			// 0x32a48
			v52 = v53;
			if (v53 <= 0xffffffff) {
				// 0x32a50
				v10 = 0;
				v52 = 0;
				// branch -> 0x32a54
			}
			// 0x32a54
			v55 = v52;
			if (v52 >= 480) {
				// 0x32a5c
				v10 = 480;
				v55 = 480;
				// branch -> 0x32a60
			}
			// 0x32a60
			v302 = v54 / 64;
			v303 = v55 / 32;
			v133 = v54 % 64;
			v134 = v55 % 32;
			v233 = v133 / 2;
			v234 = *(int32_t *)(v46 - 0x77b0);
			v171 = -1 - v233;
			v172 = v134 - v233;
			v173 = *(int32_t *)*(int32_t *)(v46 - 0x77b4) + v303 - v302;
			g31 = v173;
			v174 = v303 + v302 + *(int32_t *)v234 - (v164 == 0 ? 5 : 10);
			g30 = v174;
			v59 = v173;
			if (v172 > v171) {
				// 0x32ac4
				v135 = v173 - 1;
				g31 = v135;
				v59 = v135;
				// branch -> 0x32ac8
			}
			// 0x32ac8
			v57 = v174;
			if (v134 + (v233 || -32) <= v233 - 33) {
				// 0x32ae4
				v136 = v174 + 1;
				g30 = v136;
				v57 = v136;
				// branch -> 0x32ae8
			}
			// 0x32ae8
			v56 = v57;
			if (v57 <= 0xffffffff) {
				// 0x32af0
				g30 = 0;
				v56 = 0;
				// branch -> 0x32af4
			}
			// 0x32af4
			if (v56 >= 112) {
				// 0x32afc
				g30 = 111;
				// branch -> 0x32b00
			}
			// 0x32b00
			v58 = v59;
			if (v59 <= 0xffffffff) {
				// 0x32b08
				g31 = 0;
				v58 = 0;
				// branch -> 0x32b0c
			}
			// 0x32b0c
			if (v58 >= 112) {
				// 0x32b14
				g31 = 111;
				// branch -> 0x32b18
			}
			// 0x32b18
			v60 = 0;
			if (v172 > v171) {
				// 0x32b28
				if (v134 + (v233 || -32) <= v233 - 33) {
					// 0x32b30
					v60 = 1;
					// branch -> 0x32b34
				} else {
					v60 = 0;
				}
			}
			// 0x32b34
			v63 = 1;
			if (v60 == 0) {
				// 0x32b3c
				v61 = 1;
				if (v172 <= v171) {
					// 0x32b4c
					if (v134 + (v233 || -32) > v233 - 33) {
						// 0x32b54
						v61 = 0;
						// branch -> 0x32b58
					} else {
						v61 = 1;
					}
				}
				// 0x32b58
				v62 = 0;
				if (v61 != 0) {
					// 0x32b60
					if (v133 <= 31) {
						// 0x32b68
						v62 = 1;
						// branch -> 0x32b6c
					} else {
						v62 = 0;
					}
				}
				// 0x32b6c
				if (v62 == 0) {
					// 0x32b74
					v63 = 0;
					// branch -> 0x32b78
				} else {
					v63 = 1;
				}
			}
			// 0x32b78
			v12 = -1;
			v16 = v63;
			*(int32_t *)(v46 - 0x4f84) = *(int32_t *)g29;
			*(int32_t *)g29 = v12;
			*(char *)g20 = (char)v12;
			*(char *)g21 = (char)v12;
			if (*(char *)*(int32_t *)(g23 - 0x772c) != -1) {
				// 0x32ba8
				*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
				// branch -> 0x32bb4
			}
			// 0x32bb4
			v64 = g23;
			v235 = *(int32_t *)(v64 - 0x7674);
			v12 = 0;
			*(char *)*(int32_t *)(v64 - 0x772c) = -1;
			*(char *)g33 = (char)-1;
			*(int32_t *)v235 = v12;
			*(int32_t *)*(int32_t *)(g23 - 0x76d4) = v12;
			*(int32_t *)*(int32_t *)(g23 - 0x7740) = v12;
			v65 = g23;
			v175 = *(int32_t *)*(int32_t *)(v65 - 0x77ac);
			if (*(char *)(g32 + 0x55ec * v175 + 313) == 0) {
				// 0x32bfc
				v176 = *(int32_t *)*(int32_t *)(v65 - 0x7744);
				if (v176 <= 11) {
					// 0x32c0c
					if (*(int32_t *)*(int32_t *)(v65 - 0x76b8) == 0) {
						// 0x32c28
						v236 = *(int32_t *)(v65 - 0x76ac);
						if (*(int32_t *)v236 < 353) {
							// 0x32c40
							if (*(int32_t *)*(int32_t *)(v65 - 0x7678) == 0) {
								// 0x32c50
								if (*(int32_t *)*(int32_t *)(v65 - 0x77bc) != 0) {
									// 0x32c60
									if (*(int32_t *)v3 >= 321) {
										// 0x32c6c
										*(char *)*(int32_t *)(g23 - 0x772c) = (char)function_5ae34();
										// branch -> 0x33da4
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x32c7c
								if (*(int32_t *)*(int32_t *)(v65 - 0x77c0) != 0) {
									// 0x32c8c
									if (*(int32_t *)v3 > 320) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x32c98
								if (*(int32_t *)*(int32_t *)(v65 - 0x77c4) == 0) {
									// 0x32ca8
									if (*(int32_t *)*(int32_t *)(v65 - 0x77c8) == 0) {
										// 0x32cc4
										if (*(char *)*(int32_t *)(v65 - 0x7794) == 0) {
											// 0x3354c
											v96 = v16;
											v98 = v96;
											if (v96 == 0) {
												// 0x33554
												v97 = g30;
												v249 = *(int16_t *)(*(int32_t *)g22 + 224 * v97 + 2 * g31 + 224);
												v279 = v249;
												if (v249 >= 1) {
													// 0x33574
													*(int32_t *)g29 = v279 - 1;
													*(int32_t *)g35 = v97 + 1;
													*(int32_t *)g36 = g31;
													v98 = v16;
													// branch -> 0x33588
												} else {
													v98 = 0;
												}
											}
											// 0x33588
											if (v98 != 0) {
												// 0x33590
												v99 = g31;
												v250 = *(int16_t *)(*(int32_t *)g22 + 224 * g30 + 2 * v99 + 2);
												v280 = v250;
												if (v250 >= 1) {
													// 0x335b0
													*(int32_t *)g29 = v280 - 1;
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = v99 + 1;
													// branch -> 0x335c4
												}
											}
											// 0x335c4
											v143 = 224 * g30;
											result3 = v143;
											v215 = *(int32_t *)g22;
											v19 = v215;
											v144 = 2 * g31;
											v12 = v144;
											v281 = *(int16_t *)(v144 + v143 + v215);
											v298 = v281;
											v146 = v144;
											v145 = v143;
											v100 = v215;
											if (v281 >= 1) {
												// 0x335e0
												*(int32_t *)g29 = v298 - 1;
												*(int32_t *)g35 = g30;
												*(int32_t *)g36 = g31;
												v146 = v12;
												v145 = result3;
												v100 = v19;
												// branch -> 0x335f0
											}
											// 0x335f0
											v251 = *(int16_t *)(v145 + v146 + v100 + 226);
											v282 = v251;
											if (v251 >= 1) {
												// 0x33604
												*(int32_t *)g29 = v282 - 1;
												*(int32_t *)g35 = g30 + 1;
												*(int32_t *)g36 = g31 + 1;
												// branch -> 0x3361c
											}
											// 0x3361c
											v147 = (int32_t *)g29;
											if (*(int32_t *)(*(int32_t *)(g23 - 0x7758) + 268 * *v147 + 84) == 0) {
												// 0x33638
												*v147 = -1;
												// branch -> 0x33640
											}
										} else {
											// 0x32cd4
											if (*(int32_t *)(v65 - 0x4f84) != -1) {
												// 0x32ce0
												if (v16 == 0) {
													// 0x32ce8
													v66 = g30;
													v67 = g31;
													v237 = *(int16_t *)(*(int32_t *)g22 + 224 * v66 + 2 * v67 + 450);
													result3 = v237;
													if (v237 != 0) {
														// 0x32d08
														v177 = *(int32_t *)g24 + 112 * v66;
														if (__asm_rlwinm_((int32_t) * (char *)(v177 + v67 + 225), 0, 25, 25) != 0) {
															// 0x32d24
															v68 = result3;
															v38 = (0x10000 * v68 < 1 ? -v68 : v68) - 1;
															v12 = v38;
															if (v38 == *(int32_t *)(g23 - 0x4f84)) {
																// 0x32d48
																v178 = g25 + 232 * v38;
																if (*(int32_t *)(v178 + 152) >= 64) {
																	// 0x32d5c
																	v265 = (int32_t) * (char *)(*(int32_t *)(v178 + 228) + 122);
																	if (__asm_rlwinm_(v265, 0, 29, 29) != 0) {
																		// 0x32d6c
																		*(int32_t *)g35 = g30 + 1;
																		*(int32_t *)g36 = g31 + 2;
																		*(int32_t *)g29 = v12;
																		// branch -> 0x32d80
																	}
																}
															}
														}
													}
												}
												// 0x32d80
												if (v16 != 0) {
													// 0x32d88
													v69 = g30;
													v70 = g31;
													v238 = *(int16_t *)(*(int32_t *)g22 + 224 * v69 + 2 * v70 + 228);
													result3 = v238;
													if (v238 != 0) {
														// 0x32da8
														v179 = *(int32_t *)g24 + 112 * v69;
														if (__asm_rlwinm_((int32_t) * (char *)(v179 + v70 + 114), 0, 25, 25) != 0) {
															// 0x32dc4
															v71 = result3;
															v37 = (0x10000 * v71 < 1 ? -v71 : v71) - 1;
															v12 = v37;
															if (v37 == *(int32_t *)(g23 - 0x4f84)) {
																// 0x32de8
																v180 = g25 + 232 * v37;
																if (*(int32_t *)(v180 + 152) >= 64) {
																	// 0x32dfc
																	v266 = (int32_t) * (char *)(*(int32_t *)(v180 + 228) + 122);
																	if (__asm_rlwinm_(v266, 0, 29, 29) != 0) {
																		// 0x32e0c
																		*(int32_t *)g35 = g30 + 1;
																		*(int32_t *)g36 = g31 + 2;
																		*(int32_t *)g29 = v12;
																		// branch -> 0x32e20
																	}
																}
															}
														}
													}
												}
												// 0x32e20
												v72 = g30;
												v137 = 224 * v72;
												v20 = v137;
												v181 = *(int32_t *)g22;
												v22 = v181;
												v73 = g31;
												v138 = 2 * v73;
												v21 = v138;
												v239 = *(int16_t *)(v138 + v181 + v137 + 452);
												result3 = v239;
												if (v239 != 0) {
													// 0x32e40
													v182 = *(int32_t *)g24 + 112 * v72;
													if (__asm_rlwinm_((int32_t) * (char *)(v182 + v73 + 226), 0, 25, 25) != 0) {
														// 0x32e5c
														v74 = result3;
														v35 = (0x10000 * v74 < 1 ? -v74 : v74) - 1;
														v12 = v35;
														if (v35 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32e80
															v183 = g25 + 232 * v35;
															if (*(int32_t *)(v183 + 152) >= 64) {
																// 0x32e94
																v267 = (int32_t) * (char *)(*(int32_t *)(v183 + 228) + 122);
																if (__asm_rlwinm_(v267, 0, 29, 29) != 0) {
																	// 0x32ea4
																	*(int32_t *)g35 = g30 + 2;
																	*(int32_t *)g36 = g31 + 2;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32eb8
																}
															}
														}
													}
												}
												// 0x32eb8
												if (v16 == 0) {
													// 0x32ec0
													v184 = v20 + v22;
													v240 = *(int16_t *)(v21 + v184 + 224);
													result3 = v240;
													if (v240 != 0) {
														// 0x32ed4
														v185 = *(int32_t *)g24 + 112 * g30;
														if (__asm_rlwinm_((int32_t) * (char *)(g31 + v185 + 112), 0, 25, 25) != 0) {
															// 0x32ef0
															v75 = result3;
															v34 = (0x10000 * v75 < 1 ? -v75 : v75) - 1;
															v12 = v34;
															if (v34 == *(int32_t *)(g23 - 0x4f84)) {
																// 0x32f14
																v186 = g25 + 232 * v34;
																if (*(int32_t *)(v186 + 152) >= 64) {
																	// 0x32f28
																	v268 = (int32_t) * (char *)(*(int32_t *)(v186 + 228) + 122);
																	if (__asm_rlwinm_(v268, 0, 30, 30) != 0) {
																		// 0x32f38
																		*(int32_t *)g35 = g30 + 1;
																		*(int32_t *)g36 = g31;
																		*(int32_t *)g29 = v12;
																		// branch -> 0x32f48
																	}
																}
															}
														}
													}
												}
												// 0x32f48
												if (v16 != 0) {
													// 0x32f50
													v187 = v20 + v22;
													v241 = *(int16_t *)(v21 + v187 + 2);
													result3 = v241;
													if (v241 != 0) {
														// 0x32f64
														v188 = *(int32_t *)g24 + 112 * g30;
														if (__asm_rlwinm_((int32_t) * (char *)(g31 + v188 + 1), 0, 25, 25) != 0) {
															// 0x32f80
															v76 = result3;
															v33 = (0x10000 * v76 < 1 ? -v76 : v76) - 1;
															v12 = v33;
															if (v33 == *(int32_t *)(g23 - 0x4f84)) {
																// 0x32fa4
																v189 = g25 + 232 * v33;
																if (*(int32_t *)(v189 + 152) >= 64) {
																	// 0x32fb8
																	v269 = (int32_t) * (char *)(*(int32_t *)(v189 + 228) + 122);
																	if (__asm_rlwinm_(v269, 0, 30, 30) != 0) {
																		// 0x32fc8
																		*(int32_t *)g35 = g30;
																		*(int32_t *)g36 = g31 + 1;
																		*(int32_t *)g29 = v12;
																		// branch -> 0x32fd8
																	}
																}
															}
														}
													}
												}
												// 0x32fd8
												v270 = *(int16_t *)(v22 + v21 + v20);
												result3 = v270;
												if (v270 != 0) {
													// 0x32fe8
													v296 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
													if (__asm_rlwinm_(v296, 0, 25, 25) != 0) {
														// 0x33000
														v77 = result3;
														v32 = (0x10000 * v77 < 1 ? -v77 : v77) - 1;
														v12 = v32;
														if (v32 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x33024
															v190 = g25 + 232 * v32;
															if (*(int32_t *)(v190 + 152) >= 64) {
																// 0x33038
																if (*(char *)(*(int32_t *)(v190 + 228) + 122) % 2 != 0) {
																	// 0x33048
																	*(int32_t *)g35 = g30;
																	*(int32_t *)g36 = g31;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x33054
																}
															}
														}
													}
												}
												// 0x33054
												v191 = v20 + v22;
												v242 = *(int16_t *)(v21 + v191 + 226);
												result3 = v242;
												if (v242 != 0) {
													// 0x33068
													v192 = *(int32_t *)g24 + 112 * g30;
													if (__asm_rlwinm_((int32_t) * (char *)(g31 + v192 + 113), 0, 25, 25) != 0) {
														// 0x33084
														v78 = result3;
														v31 = (0x10000 * v78 < 1 ? -v78 : v78) - 1;
														v12 = v31;
														if (v31 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x330a8
															v193 = g25 + 232 * v31;
															if (*(int32_t *)(v193 + 152) >= 64) {
																// 0x330bc
																v271 = (int32_t) * (char *)(*(int32_t *)(v193 + 228) + 122);
																if (__asm_rlwinm_(v271, 0, 30, 30) != 0) {
																	// 0x330cc
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31 + 1;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x330e0
																}
															}
														}
													}
												}
												// 0x330e0
												v79 = g29;
												v139 = (int32_t *)v79;
												v194 = *v139;
												v80 = v79;
												if (v194 != -1) {
													// 0x330ec
													if (*(int32_t *)(g25 + 232 * v194 + 160) % 2 != 0) {
														// 0x33100
														*v139 = -1;
														*(int32_t *)g35 = g30;
														*(int32_t *)g36 = g31;
														v80 = g29;
														// branch -> 0x33110
													} else {
														v80 = v79;
													}
												}
												// 0x33110
												v195 = *(int32_t *)v80;
												if (v195 != -1) {
													// 0x3311c
													if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v195 + 160), 0, 26, 26) != 0) {
														// 0x33130
														*(int32_t *)g29 = -1;
														// branch -> 0x33138
													}
												}
												// 0x33138
												if (*(int32_t *)g29 != -1) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x33144
											if (v16 == 0) {
												// 0x3314c
												v81 = g30;
												v82 = g31;
												v243 = *(int16_t *)(*(int32_t *)g22 + 224 * v81 + 2 * v82 + 450);
												result3 = v243;
												if (v243 != 0) {
													// 0x3316c
													v196 = *(int32_t *)g24 + 112 * v81;
													if (__asm_rlwinm_((int32_t) * (char *)(v196 + v82 + 225), 0, 25, 25) != 0) {
														// 0x33188
														v83 = result3;
														v30 = (0x10000 * v83 < 1 ? -v83 : v83) - 1;
														v12 = v30;
														v197 = 232 * v30 + g25;
														if (*(int32_t *)(v197 + 152) >= 64) {
															// 0x331b4
															v272 = (int32_t) * (char *)(*(int32_t *)(v197 + 228) + 122);
															if (__asm_rlwinm_(v272, 0, 29, 29) != 0) {
																// 0x331c4
																*(int32_t *)g35 = g30 + 2;
																*(int32_t *)g36 = g31 + 1;
																*(int32_t *)g29 = v12;
																// branch -> 0x331d8
															}
														}
													}
												}
											}
											// 0x331d8
											if (v16 != 0) {
												// 0x331e0
												v84 = g30;
												v85 = g31;
												v244 = *(int16_t *)(*(int32_t *)g22 + 224 * v84 + 2 * v85 + 228);
												result3 = v244;
												if (v244 != 0) {
													// 0x33200
													v198 = *(int32_t *)g24 + 112 * v84;
													if (__asm_rlwinm_((int32_t) * (char *)(v198 + v85 + 114), 0, 25, 25) != 0) {
														// 0x3321c
														v86 = result3;
														v29 = (0x10000 * v86 < 1 ? -v86 : v86) - 1;
														v12 = v29;
														v199 = 232 * v29 + g25;
														if (*(int32_t *)(v199 + 152) >= 64) {
															// 0x33248
															v273 = (int32_t) * (char *)(*(int32_t *)(v199 + 228) + 122);
															if (__asm_rlwinm_(v273, 0, 29, 29) != 0) {
																// 0x33258
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31 + 2;
																*(int32_t *)g29 = v12;
																// branch -> 0x3326c
															}
														}
													}
												}
											}
											// 0x3326c
											v87 = g30;
											v140 = 224 * v87;
											v20 = v140;
											v200 = *(int32_t *)g22;
											v22 = v200;
											v88 = g31;
											v141 = 2 * v88;
											v21 = v141;
											v245 = *(int16_t *)(v141 + v200 + v140 + 452);
											result3 = v245;
											if (v245 != 0) {
												// 0x3328c
												v201 = *(int32_t *)g24 + 112 * v87;
												if (__asm_rlwinm_((int32_t) * (char *)(v201 + v88 + 226), 0, 25, 25) != 0) {
													// 0x332a8
													v89 = result3;
													v28 = (0x10000 * v89 < 1 ? -v89 : v89) - 1;
													v12 = v28;
													v202 = 232 * v28 + g25;
													if (*(int32_t *)(v202 + 152) >= 64) {
														// 0x332d4
														v274 = (int32_t) * (char *)(*(int32_t *)(v202 + 228) + 122);
														if (__asm_rlwinm_(v274, 0, 29, 29) != 0) {
															// 0x332e4
															*(int32_t *)g35 = g30 + 2;
															*(int32_t *)g36 = g31 + 2;
															*(int32_t *)g29 = v12;
															// branch -> 0x332f8
														}
													}
												}
											}
											// 0x332f8
											if (v16 == 0) {
												// 0x33300
												v203 = v20 + v22;
												v246 = *(int16_t *)(v21 + v203 + 224);
												result3 = v246;
												if (v246 != 0) {
													// 0x33314
													v204 = *(int32_t *)g24 + 112 * g30;
													if (__asm_rlwinm_((int32_t) * (char *)(g31 + v204 + 112), 0, 25, 25) != 0) {
														// 0x33330
														v90 = result3;
														v27 = (0x10000 * v90 < 1 ? -v90 : v90) - 1;
														v12 = v27;
														v205 = 232 * v27 + g25;
														if (*(int32_t *)(v205 + 152) >= 64) {
															// 0x3335c
															v275 = (int32_t) * (char *)(*(int32_t *)(v205 + 228) + 122);
															if (__asm_rlwinm_(v275, 0, 30, 30) != 0) {
																// 0x3336c
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31;
																*(int32_t *)g29 = v12;
																// branch -> 0x3337c
															}
														}
													}
												}
											}
											// 0x3337c
											if (v16 != 0) {
												// 0x33384
												v206 = v20 + v22;
												v247 = *(int16_t *)(v21 + v206 + 2);
												result3 = v247;
												if (v247 != 0) {
													// 0x33398
													v207 = *(int32_t *)g24 + 112 * g30;
													if (__asm_rlwinm_((int32_t) * (char *)(g31 + v207 + 1), 0, 25, 25) != 0) {
														// 0x333b4
														v91 = result3;
														v26 = (0x10000 * v91 < 1 ? -v91 : v91) - 1;
														v12 = v26;
														v208 = 232 * v26 + g25;
														if (*(int32_t *)(v208 + 152) >= 64) {
															// 0x333e0
															v276 = (int32_t) * (char *)(*(int32_t *)(v208 + 228) + 122);
															if (__asm_rlwinm_(v276, 0, 30, 30) != 0) {
																// 0x333f0
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31 + 1;
																*(int32_t *)g29 = v12;
																// branch -> 0x33400
															}
														}
													}
												}
											}
											// 0x33400
											v277 = *(int16_t *)(v22 + v21 + v20);
											result3 = v277;
											if (v277 != 0) {
												// 0x33410
												v297 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
												if (__asm_rlwinm_(v297, 0, 25, 25) != 0) {
													// 0x33428
													v92 = result3;
													v45 = (0x10000 * v92 < 1 ? -v92 : v92) - 1;
													v12 = v45;
													v209 = 232 * v45 + g25;
													if (*(int32_t *)(v209 + 152) >= 64) {
														// 0x33454
														if (*(char *)(*(int32_t *)(v209 + 228) + 122) % 2 != 0) {
															// 0x33464
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31;
															*(int32_t *)g29 = v12;
															// branch -> 0x33470
														}
													}
												}
											}
											// 0x33470
											v210 = v20 + v22;
											v248 = *(int16_t *)(v21 + v210 + 226);
											result3 = v248;
											if (v248 != 0) {
												// 0x33484
												v211 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v211 + 113), 0, 25, 25) != 0) {
													// 0x334a0
													v93 = result3;
													v44 = (0x10000 * v93 < 1 ? -v93 : v93) - 1;
													v12 = v44;
													v212 = 232 * v44 + g25;
													if (*(int32_t *)(v212 + 152) >= 64) {
														// 0x334cc
														v278 = (int32_t) * (char *)(*(int32_t *)(v212 + 228) + 122);
														if (__asm_rlwinm_(v278, 0, 30, 30) != 0) {
															// 0x334dc
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31 + 1;
															*(int32_t *)g29 = v12;
															// branch -> 0x334f0
														}
													}
												}
											}
											// 0x334f0
											v94 = g29;
											v142 = (int32_t *)v94;
											v213 = *v142;
											v95 = v94;
											if (v213 != -1) {
												// 0x334fc
												if (*(int32_t *)(g25 + 232 * v213 + 160) % 2 != 0) {
													// 0x33510
													*v142 = -1;
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = g31;
													v95 = g29;
													// branch -> 0x33520
												} else {
													v95 = v94;
												}
											}
											// 0x33520
											v214 = *(int32_t *)v95;
											if (v214 != -1) {
												// 0x3352c
												if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v214 + 160), 0, 26, 26) != 0) {
													// 0x33540
													*(int32_t *)g29 = -1;
													// branch -> 0x33640
												}
											}
										}
										// 0x33640
										v216 = *(int32_t *)g29;
										v3 = v216;
										if (v216 == -1) {
											// 0x3364c
											v101 = v16;
											v103 = v101;
											if (v101 == 0) {
												// 0x33654
												v102 = g30;
												v252 = *(char *)(g31 + *(int32_t *)v6 + 112 * v102 + 112);
												v283 = v252;
												if (v252 != 0) {
													// 0x33670
													if (0x1000000 * v283 < 0) {
														// 0x33680
														v43 = 0x1000000 * (-1 - v283) / 0x1000000;
														// branch -> 0x3368c
													} else {
														// 0x33678
														v43 = v283 - 1;
														// branch -> 0x3368c
													}
													// 0x3368c
													v12 = v43;
													v217 = 0x1000000 * v43 / 0x1000000;
													if (v217 != v175) {
														// 0x33698
														if (*(int32_t *)(g32 + 0x55ec * v217 + 404) != 0) {
															// 0x336ac
															*(int32_t *)g35 = v102 + 1;
															*(int32_t *)g36 = g31;
															*(char *)g33 = (char)v12;
															v103 = v16;
															// branch -> 0x336bc
														} else {
															v103 = 0;
														}
													} else {
														v103 = 0;
													}
												} else {
													v103 = 0;
												}
											}
											// 0x336bc
											if (v103 != 0) {
												// 0x336c4
												v104 = g30;
												v253 = *(char *)(g31 + *(int32_t *)v6 + 112 * v104 + 1);
												v284 = v253;
												if (v253 != 0) {
													// 0x336e0
													if (0x1000000 * v284 < 0) {
														// 0x336f0
														v42 = 0x1000000 * (-1 - v284) / 0x1000000;
														// branch -> 0x336fc
													} else {
														// 0x336e8
														v42 = v284 - 1;
														// branch -> 0x336fc
													}
													// 0x336fc
													v12 = v42;
													v218 = 0x1000000 * v42 / 0x1000000;
													if (v218 != v175) {
														// 0x33708
														if (*(int32_t *)(g32 + 0x55ec * v218 + 404) != 0) {
															// 0x3371c
															*(int32_t *)g35 = v104;
															*(int32_t *)g36 = g31 + 1;
															*(char *)g33 = (char)v12;
															// branch -> 0x3372c
														}
													}
												}
											}
											// 0x3372c
											v105 = g30;
											v148 = 112 * v105;
											v15 = v148;
											v219 = *(int32_t *)v6;
											v7 = v219;
											v149 = g31;
											v285 = *(char *)(v149 + v148 + v219);
											v299 = v285;
											v150 = v149;
											v106 = v148;
											if (v285 != 0) {
												// 0x33744
												if (0x1000000 * v299 < 0) {
													// 0x33754
													v41 = 0x1000000 * (-1 - v299) / 0x1000000;
													// branch -> 0x33760
												} else {
													// 0x3374c
													v41 = v299 - 1;
													// branch -> 0x33760
												}
												// 0x33760
												result3 = v41;
												if (0x1000000 * v41 / 0x1000000 != v175) {
													// 0x3376c
													*(int32_t *)g35 = v105;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)result3;
													v150 = g31;
													v106 = v15;
													// branch -> 0x33778
												} else {
													v150 = v149;
													v106 = v148;
												}
											}
											// 0x33778
											v220 = *(int32_t *)g24;
											v14 = v220;
											if (__asm_rlwinm_((int32_t) * (char *)(v220 + v106 + v150), 0, 29, 29) != 0) {
												// 0x3378c
												v107 = g32;
												v254 = *(int32_t *)(v107 + 56);
												v108 = g30;
												v110 = v108;
												v109 = v107;
												if (v108 == v254) {
													// 0x3379c
													if (g31 == *(int32_t *)(v107 + 60)) {
														// 0x337a8
														if (v175 != 0) {
															// 0x337b0
															*(int32_t *)g35 = v254;
															*(int32_t *)g36 = g31;
															*(char *)g33 = (char)0;
															v110 = g30;
															v109 = g32;
															// branch -> 0x337c0
														} else {
															v110 = v254;
															v109 = v107;
														}
													} else {
														v110 = v254;
														v109 = v107;
													}
												}
												// 0x337c0
												v151 = v109 + 0x55ec;
												result3 = v151;
												v112 = v110;
												v111 = v151;
												if (v110 == *(int32_t *)(v109 + 0x5624)) {
													// 0x337d4
													if (g31 == *(int32_t *)(v109 + 0x5628)) {
														// 0x337e0
														if (v175 != 1) {
															// 0x337e8
															*(int32_t *)g35 = v110;
															*(int32_t *)g36 = g31;
															*(char *)g33 = (char)1;
															v112 = g30;
															v111 = result3;
															// branch -> 0x337f8
														} else {
															v112 = v110;
															v111 = v151;
														}
													} else {
														v112 = v110;
														v111 = v151;
													}
												}
												// 0x337f8
												v152 = v111 + 0x55ec;
												result3 = v152;
												v114 = v112;
												v113 = v152;
												if (v112 == *(int32_t *)(v111 + 0x5624)) {
													// 0x3380c
													if (g31 == *(int32_t *)(v111 + 0x5628)) {
														// 0x33818
														if (v175 != 2) {
															// 0x33820
															*(int32_t *)g35 = v112;
															*(int32_t *)g36 = g31;
															*(char *)g33 = (char)2;
															v114 = g30;
															v113 = result3;
															// branch -> 0x33830
														} else {
															v114 = v112;
															v113 = v152;
														}
													} else {
														v114 = v112;
														v113 = v152;
													}
												}
												// 0x33830
												if (v114 == *(int32_t *)(v113 + 0x5624)) {
													// 0x33844
													if (g31 == *(int32_t *)(v113 + 0x5628)) {
														// 0x33850
														if (v175 != 3) {
															// 0x33858
															*(int32_t *)g35 = v114;
															*(int32_t *)g36 = g31;
															*(char *)g33 = (char)3;
															// branch -> 0x33868
														}
													}
												}
											}
											// 0x33868
											if (v176 == 8) {
												// 0x33870
												v13 = -1;
												// branch -> 0x33874
												while (true) {
													// 0x33874
													v221 = g30 - 1;
													v19 = v221;
													v11 = 3;
													v222 = g31 + 112 * v221 - 1 + v14;
													v22 = v222;
													v23 = -1;
													v115 = v222;
													// branch -> 0x33894
													goto lab_0x33894_9;
												}
											}
											// 0x33998
											v153 = g31;
											v255 = *(char *)(v153 + v15 + v7 + 113);
											v286 = v255;
											if (v255 != 0) {
												// 0x339ac
												if (0x1000000 * v286 < 0) {
													// 0x339bc
													v40 = 0x1000000 * (-1 - v286) / 0x1000000;
													// branch -> 0x339c8
												} else {
													// 0x339b4
													v40 = v286 - 1;
													// branch -> 0x339c8
												}
												// 0x339c8
												result3 = v40;
												v223 = 0x1000000 * v40 / 0x1000000;
												if (v223 != v175) {
													// 0x339d4
													if (*(int32_t *)(g32 + 0x55ec * v223 + 404) != 0) {
														// 0x339e8
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = v153 + 1;
														*(char *)g33 = (char)result3;
														// branch -> 0x339fc
													}
												}
											}
										}
										// 0x339fc
										if (v3 == -1) {
											// 0x33a04
											if (*(char *)g33 == -1) {
												// 0x33a14
												v116 = v16;
												v118 = v116;
												if (v116 == 0) {
													// 0x33a1c
													v117 = g30;
													v256 = *(char *)(g31 + *(int32_t *)g16 + 112 * v117 + 112);
													v287 = v256;
													if (v256 != 0) {
														// 0x33a38
														if (0x1000000 * v287 < 0) {
															// 0x33a48
															v39 = 0x1000000 * (-1 - v287) / 0x1000000;
															// branch -> 0x33a54
														} else {
															// 0x33a40
															v39 = v287 - 1;
															// branch -> 0x33a54
														}
														// 0x33a54
														v12 = v39;
														if (*(char *)(120 * 0x1000000 * v39 / 0x1000000 + v5 + 64) >= 2) {
															// 0x33a70
															*(int32_t *)g35 = v117 + 1;
															*(int32_t *)g36 = g31;
															*(char *)g20 = (char)v12;
															v118 = v16;
															// branch -> 0x33a80
														} else {
															v118 = 0;
														}
													} else {
														v118 = 0;
													}
												}
												// 0x33a80
												if (v118 != 0) {
													// 0x33a88
													v119 = g30;
													v257 = *(char *)(g31 + *(int32_t *)g16 + 112 * v119 + 1);
													v288 = v257;
													if (v257 != 0) {
														// 0x33aa4
														if (0x1000000 * v288 < 0) {
															// 0x33ab4
															v36 = 0x1000000 * (-1 - v288) / 0x1000000;
															// branch -> 0x33ac0
														} else {
															// 0x33aac
															v36 = v288 - 1;
															// branch -> 0x33ac0
														}
														// 0x33ac0
														v12 = v36;
														if (*(char *)(120 * 0x1000000 * v36 / 0x1000000 + v5 + 64) >= 2) {
															// 0x33adc
															*(int32_t *)g35 = v119;
															*(int32_t *)g36 = g31 + 1;
															*(char *)g20 = (char)v12;
															// branch -> 0x33aec
														}
													}
												}
												// 0x33aec
												v120 = g30;
												v154 = 112 * v120;
												v12 = v154;
												v224 = *(int32_t *)g16;
												result3 = v224;
												v155 = g31;
												v289 = *(char *)(v155 + v154 + v224);
												v300 = v289;
												v122 = v155;
												v156 = v154;
												v121 = v224;
												if (v289 != 0) {
													// 0x33b04
													if (0x1000000 * v300 < 0) {
														// 0x33b14
														v25 = 0x1000000 * (-1 - v300) / 0x1000000;
														// branch -> 0x33b20
													} else {
														// 0x33b0c
														v25 = v300 - 1;
														// branch -> 0x33b20
													}
													// 0x33b20
													v19 = v25;
													v258 = *(char *)(120 * 0x1000000 * v25 / 0x1000000 + v5 + 64);
													if (v258 != 1) {
														// 0x33b3c
														if (v258 != 3) {
															v122 = v155;
															// 0x33b50
															v259 = *(char *)(v224 + v154 + v122 + 113);
															v290 = v259;
															if (v259 != 0) {
																// 0x33b64
																if (0x1000000 * v290 < 0) {
																	// 0x33b74
																	v24 = 0x1000000 * (-1 - v290) / 0x1000000;
																	// branch -> 0x33b80
																} else {
																	// 0x33b6c
																	v24 = v290 - 1;
																	// branch -> 0x33b80
																}
																// 0x33b80
																v12 = v24;
																if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
																	// 0x33b9c
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = v122 + 1;
																	*(char *)g20 = (char)v12;
																	// branch -> 0x33bb0
																}
															}
															// 0x33bb0
															if (*(char *)g33 == -1) {
																// 0x33bc0
																if (*(char *)g20 == -1) {
																	// 0x33bd0
																	if (v3 == -1) {
																		// 0x33bd8
																		v123 = v16;
																		v125 = v123;
																		if (v123 == 0) {
																			// 0x33be0
																			v260 = *(int32_t *)(g23 - 0x768c);
																			v124 = g30;
																			v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																			v291 = v261;
																			if (v261 >= 1) {
																				// 0x33c00
																				v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
																				v12 = v225;
																				if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																					// 0x33c24
																					*(int32_t *)g35 = v124 + 1;
																					*(int32_t *)g36 = g31;
																					*(char *)g21 = (char)v12;
																					v125 = v16;
																					// branch -> 0x33c34
																				} else {
																					v125 = 0;
																				}
																			} else {
																				v125 = 0;
																			}
																		}
																		// 0x33c34
																		if (v125 != 0) {
																			// 0x33c3c
																			v262 = *(int32_t *)(g23 - 0x768c);
																			v126 = g30;
																			v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																			v292 = v263;
																			if (v263 >= 1) {
																				// 0x33c5c
																				v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
																				v12 = v226;
																				if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																					// 0x33c80
																					*(int32_t *)g35 = v126;
																					*(int32_t *)g36 = g31 + 1;
																					*(char *)g21 = (char)v12;
																					// branch -> 0x33c90
																				}
																			}
																		}
																		// 0x33c90
																		v127 = g30;
																		v157 = 112 * v127;
																		v20 = v157;
																		v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
																		result3 = v227;
																		v158 = g31;
																		v293 = *(char *)(v158 + v157 + v227);
																		v301 = v293;
																		v129 = v158;
																		v160 = v157;
																		v128 = v227;
																		if (v293 >= 1) {
																			// 0x33cac
																			v159 = v4 + 48;
																			v19 = v159;
																			v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
																			v18 = v228;
																			v294 = *(char *)(v159 + 368 * v228);
																			if (v294 != 1) {
																				// 0x33cd0
																				if (v294 != 3) {
																					v129 = v158;
																					// 0x33ce4
																					v264 = *(char *)(v227 + v157 + v129 + 113);
																					v295 = v264;
																					if (v264 >= 1) {
																						// 0x33cf8
																						v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
																						v12 = v229;
																						if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																							// 0x33d1c
																							v161 = g30 + 1;
																							v18 = v161;
																							*(int32_t *)g35 = v161;
																							*(int32_t *)g36 = v129 + 1;
																							*(char *)g21 = (char)v12;
																							// branch -> 0x33d30
																						}
																					}
																					// 0x33d30
																					if (*(char *)g21 == -1) {
																						// 0x33d40
																						*(int32_t *)g35 = g30;
																						*(int32_t *)g36 = g31;
																						v130 = function_c824c();
																						g34 = v130;
																						v162 = function_3257c(v130);
																						g34 = v162;
																						function_32720(v162);
																						// branch -> 0x33d54
																					}
																					// 0x33d54
																					if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
																						// 0x33d64
																						v12 = -1;
																						*(char *)g20 = -1;
																						*(int32_t *)g29 = v12;
																						*(char *)g21 = (char)v12;
																						*(int32_t *)g35 = g30;
																						*(int32_t *)g36 = g31;
																						// branch -> 0x33d7c
																					}
																					// 0x33d7c
																					v230 = *(int32_t *)g29;
																					if (v230 == -1) {
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					}
																					// 0x33d88
																					result5 = g25 + 232 * v230;
																					result3 = result5;
																					if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																						// 0x33d9c
																						*(int32_t *)g29 = -1;
																						// branch -> 0x33da4
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				}
																			}
																			// 0x33cd8
																			*(int32_t *)g35 = v127;
																			*(int32_t *)g36 = g31;
																			*(char *)g21 = (char)v18;
																			v129 = g31;
																			v160 = v20;
																			v128 = result3;
																			// branch -> 0x33ce4
																		}
																		// 0x33ce4
																		v264 = *(char *)(v128 + v160 + v129 + 113);
																		v295 = v264;
																		if (v264 >= 1) {
																			// 0x33cf8
																			v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
																			v12 = v229;
																			if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																				// 0x33d1c
																				*(int32_t *)g35 = g30 + 1;
																				*(int32_t *)g36 = v129 + 1;
																				*(char *)g21 = (char)v12;
																				// branch -> 0x33d30
																			}
																		}
																		// 0x33d30
																		if (*(char *)g21 == -1) {
																			// 0x33d40
																			*(int32_t *)g35 = g30;
																			*(int32_t *)g36 = g31;
																			v130 = function_c824c();
																			g34 = v130;
																			v162 = function_3257c(v130);
																			g34 = v162;
																			function_32720(v162);
																			// branch -> 0x33d54
																		}
																	}
																}
															}
															// 0x33d54
															if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
																// 0x33d64
																v12 = -1;
																*(char *)g20 = -1;
																*(int32_t *)g29 = v12;
																*(char *)g21 = (char)v12;
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31;
																// branch -> 0x33d7c
															}
															// 0x33d7c
															v230 = *(int32_t *)g29;
															if (v230 == -1) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
															// 0x33d88
															result5 = g25 + 232 * v230;
															result3 = result5;
															v163 = __asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26);
															v12 = v163;
															if (v163 != 0) {
																// 0x33d9c
																v12 = -1;
																*(int32_t *)g29 = -1;
																// branch -> 0x33da4
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x33b44
													*(int32_t *)g35 = v120;
													*(int32_t *)g36 = g31;
													*(char *)g20 = (char)v19;
													v122 = g31;
													v156 = v12;
													v121 = result3;
													// branch -> 0x33b50
												}
												// 0x33b50
												v259 = *(char *)(v121 + v156 + v122 + 113);
												v290 = v259;
												if (v259 != 0) {
													// 0x33b64
													if (0x1000000 * v290 < 0) {
														// 0x33b74
														v24 = 0x1000000 * (-1 - v290) / 0x1000000;
														// branch -> 0x33b80
													} else {
														// 0x33b6c
														v24 = v290 - 1;
														// branch -> 0x33b80
													}
													// 0x33b80
													v12 = v24;
													if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
														// 0x33b9c
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = v122 + 1;
														*(char *)g20 = (char)v12;
														// branch -> 0x33bb0
													}
												}
											}
										}
										// 0x33bb0
										if (*(char *)g33 == -1) {
											// 0x33bc0
											if (*(char *)g20 == -1) {
												// 0x33bd0
												if (v3 == -1) {
													// 0x33bd8
													v123 = v16;
													v125 = v123;
													if (v123 == 0) {
														// 0x33be0
														v260 = *(int32_t *)(g23 - 0x768c);
														v124 = g30;
														v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
														v291 = v261;
														if (v261 >= 1) {
															// 0x33c00
															v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
															v12 = v225;
															if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																// 0x33c24
																*(int32_t *)g35 = v124 + 1;
																*(int32_t *)g36 = g31;
																*(char *)g21 = (char)v12;
																v125 = v16;
																// branch -> 0x33c34
															} else {
																v125 = 0;
															}
														} else {
															v125 = 0;
														}
													}
													// 0x33c34
													if (v125 != 0) {
														// 0x33c3c
														v262 = *(int32_t *)(g23 - 0x768c);
														v126 = g30;
														v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
														v292 = v263;
														if (v263 >= 1) {
															// 0x33c5c
															v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
															v12 = v226;
															if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																// 0x33c80
																*(int32_t *)g35 = v126;
																*(int32_t *)g36 = g31 + 1;
																*(char *)g21 = (char)v12;
																// branch -> 0x33c90
															}
														}
													}
													// 0x33c90
													v127 = g30;
													v157 = 112 * v127;
													v20 = v157;
													v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
													result3 = v227;
													v158 = g31;
													v293 = *(char *)(v158 + v157 + v227);
													v301 = v293;
													v129 = v158;
													v160 = v157;
													v128 = v227;
													if (v293 >= 1) {
														// 0x33cac
														v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
														v18 = v228;
														v294 = *(char *)(v4 + 48 + 368 * v228);
														if (v294 != 1) {
															// 0x33cd0
															if (v294 != 3) {
																v129 = v158;
																// 0x33ce4
																v264 = *(char *)(v227 + v157 + v129 + 113);
																v295 = v264;
																if (v264 >= 1) {
																	// 0x33cf8
																	v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
																	v12 = v229;
																	if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																		// 0x33d1c
																		v161 = g30 + 1;
																		v18 = v161;
																		*(int32_t *)g35 = v161;
																		*(int32_t *)g36 = v129 + 1;
																		*(char *)g21 = (char)v12;
																		// branch -> 0x33d30
																	}
																}
																// 0x33d30
																if (*(char *)g21 == -1) {
																	// 0x33d40
																	*(int32_t *)g35 = g30;
																	*(int32_t *)g36 = g31;
																	v130 = function_c824c();
																	g34 = v130;
																	v162 = function_3257c(v130);
																	g34 = v162;
																	function_32720(v162);
																	// branch -> 0x33d54
																}
																// 0x33d54
																if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
																	// 0x33d64
																	v12 = -1;
																	*(char *)g20 = -1;
																	*(int32_t *)g29 = v12;
																	*(char *)g21 = (char)v12;
																	*(int32_t *)g35 = g30;
																	*(int32_t *)g36 = g31;
																	// branch -> 0x33d7c
																}
																// 0x33d7c
																v230 = *(int32_t *)g29;
																if (v230 == -1) {
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
																// 0x33d88
																result5 = g25 + 232 * v230;
																result3 = result5;
																if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																	// 0x33d9c
																	*(int32_t *)g29 = -1;
																	// branch -> 0x33da4
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
														// 0x33cd8
														*(int32_t *)g35 = v127;
														*(int32_t *)g36 = g31;
														*(char *)g21 = (char)v18;
														v129 = g31;
														v160 = v20;
														v128 = result3;
														// branch -> 0x33ce4
													}
													// 0x33ce4
													v264 = *(char *)(v128 + v160 + v129 + 113);
													v295 = v264;
													if (v264 >= 1) {
														// 0x33cf8
														v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
														v12 = v229;
														if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
															// 0x33d1c
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = v129 + 1;
															*(char *)g21 = (char)v12;
															// branch -> 0x33d30
														}
													}
													// 0x33d30
													if (*(char *)g21 == -1) {
														// 0x33d40
														*(int32_t *)g35 = g30;
														*(int32_t *)g36 = g31;
														v130 = function_c824c();
														g34 = v130;
														v162 = function_3257c(v130);
														g34 = v162;
														function_32720(v162);
														// branch -> 0x33d54
													}
												}
											}
										}
										// 0x33d54
										if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
											// 0x33d64
											v12 = -1;
											*(char *)g20 = -1;
											*(int32_t *)g29 = v12;
											*(char *)g21 = (char)v12;
											*(int32_t *)g35 = g30;
											*(int32_t *)g36 = g31;
											// branch -> 0x33d7c
										}
										// 0x33d7c
										v230 = *(int32_t *)g29;
										if (v230 == -1) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x33d88
										if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v230 + 160), 0, 26, 26) != 0) {
											// 0x33d9c
											*(int32_t *)g29 = -1;
											// branch -> 0x33da4
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x32cb8
								if (*(int32_t *)v3 >= 320) {
									// 0x32cc4
									if (*(char *)*(int32_t *)(v65 - 0x7794) == 0) {
										// 0x3354c
										v96 = v16;
										v98 = v96;
										if (v96 == 0) {
											// 0x33554
											v97 = g30;
											v249 = *(int16_t *)(*(int32_t *)g22 + 224 * v97 + 2 * g31 + 224);
											v279 = v249;
											if (v249 >= 1) {
												// 0x33574
												*(int32_t *)g29 = v279 - 1;
												*(int32_t *)g35 = v97 + 1;
												*(int32_t *)g36 = g31;
												v98 = v16;
												// branch -> 0x33588
											} else {
												v98 = 0;
											}
										}
										// 0x33588
										if (v98 != 0) {
											// 0x33590
											v99 = g31;
											v250 = *(int16_t *)(*(int32_t *)g22 + 224 * g30 + 2 * v99 + 2);
											v280 = v250;
											if (v250 >= 1) {
												// 0x335b0
												*(int32_t *)g29 = v280 - 1;
												*(int32_t *)g35 = g30;
												*(int32_t *)g36 = v99 + 1;
												// branch -> 0x335c4
											}
										}
										// 0x335c4
										v143 = 224 * g30;
										result3 = v143;
										v215 = *(int32_t *)g22;
										v19 = v215;
										v144 = 2 * g31;
										v12 = v144;
										v281 = *(int16_t *)(v144 + v143 + v215);
										v298 = v281;
										v146 = v144;
										v145 = v143;
										v100 = v215;
										if (v281 >= 1) {
											// 0x335e0
											*(int32_t *)g29 = v298 - 1;
											*(int32_t *)g35 = g30;
											*(int32_t *)g36 = g31;
											v146 = v12;
											v145 = result3;
											v100 = v19;
											// branch -> 0x335f0
										}
										// 0x335f0
										v251 = *(int16_t *)(v145 + v146 + v100 + 226);
										v282 = v251;
										if (v251 >= 1) {
											// 0x33604
											*(int32_t *)g29 = v282 - 1;
											*(int32_t *)g35 = g30 + 1;
											*(int32_t *)g36 = g31 + 1;
											// branch -> 0x3361c
										}
										// 0x3361c
										v147 = (int32_t *)g29;
										if (*(int32_t *)(*(int32_t *)(g23 - 0x7758) + 268 * *v147 + 84) == 0) {
											// 0x33638
											*v147 = -1;
											// branch -> 0x33640
										}
									} else {
										// 0x32cd4
										if (*(int32_t *)(v65 - 0x4f84) != -1) {
											// 0x32ce0
											if (v16 == 0) {
												// 0x32ce8
												v66 = g30;
												v67 = g31;
												v237 = *(int16_t *)(*(int32_t *)g22 + 224 * v66 + 2 * v67 + 450);
												result3 = v237;
												if (v237 != 0) {
													// 0x32d08
													v177 = *(int32_t *)g24 + 112 * v66;
													if (__asm_rlwinm_((int32_t) * (char *)(v177 + v67 + 225), 0, 25, 25) != 0) {
														// 0x32d24
														v68 = result3;
														v38 = (0x10000 * v68 < 1 ? -v68 : v68) - 1;
														v12 = v38;
														if (v38 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32d48
															v178 = g25 + 232 * v38;
															if (*(int32_t *)(v178 + 152) >= 64) {
																// 0x32d5c
																v265 = (int32_t) * (char *)(*(int32_t *)(v178 + 228) + 122);
																if (__asm_rlwinm_(v265, 0, 29, 29) != 0) {
																	// 0x32d6c
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31 + 2;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32d80
																}
															}
														}
													}
												}
											}
											// 0x32d80
											if (v16 != 0) {
												// 0x32d88
												v69 = g30;
												v70 = g31;
												v238 = *(int16_t *)(*(int32_t *)g22 + 224 * v69 + 2 * v70 + 228);
												result3 = v238;
												if (v238 != 0) {
													// 0x32da8
													v179 = *(int32_t *)g24 + 112 * v69;
													if (__asm_rlwinm_((int32_t) * (char *)(v179 + v70 + 114), 0, 25, 25) != 0) {
														// 0x32dc4
														v71 = result3;
														v37 = (0x10000 * v71 < 1 ? -v71 : v71) - 1;
														v12 = v37;
														if (v37 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32de8
															v180 = g25 + 232 * v37;
															if (*(int32_t *)(v180 + 152) >= 64) {
																// 0x32dfc
																v266 = (int32_t) * (char *)(*(int32_t *)(v180 + 228) + 122);
																if (__asm_rlwinm_(v266, 0, 29, 29) != 0) {
																	// 0x32e0c
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31 + 2;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32e20
																}
															}
														}
													}
												}
											}
											// 0x32e20
											v72 = g30;
											v137 = 224 * v72;
											v20 = v137;
											v181 = *(int32_t *)g22;
											v22 = v181;
											v73 = g31;
											v138 = 2 * v73;
											v21 = v138;
											v239 = *(int16_t *)(v138 + v181 + v137 + 452);
											result3 = v239;
											if (v239 != 0) {
												// 0x32e40
												v182 = *(int32_t *)g24 + 112 * v72;
												if (__asm_rlwinm_((int32_t) * (char *)(v182 + v73 + 226), 0, 25, 25) != 0) {
													// 0x32e5c
													v74 = result3;
													v35 = (0x10000 * v74 < 1 ? -v74 : v74) - 1;
													v12 = v35;
													if (v35 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32e80
														v183 = g25 + 232 * v35;
														if (*(int32_t *)(v183 + 152) >= 64) {
															// 0x32e94
															v267 = (int32_t) * (char *)(*(int32_t *)(v183 + 228) + 122);
															if (__asm_rlwinm_(v267, 0, 29, 29) != 0) {
																// 0x32ea4
																*(int32_t *)g35 = g30 + 2;
																*(int32_t *)g36 = g31 + 2;
																*(int32_t *)g29 = v12;
																// branch -> 0x32eb8
															}
														}
													}
												}
											}
											// 0x32eb8
											if (v16 == 0) {
												// 0x32ec0
												v184 = v20 + v22;
												v240 = *(int16_t *)(v21 + v184 + 224);
												result3 = v240;
												if (v240 != 0) {
													// 0x32ed4
													v185 = *(int32_t *)g24 + 112 * g30;
													if (__asm_rlwinm_((int32_t) * (char *)(g31 + v185 + 112), 0, 25, 25) != 0) {
														// 0x32ef0
														v75 = result3;
														v34 = (0x10000 * v75 < 1 ? -v75 : v75) - 1;
														v12 = v34;
														if (v34 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32f14
															v186 = g25 + 232 * v34;
															if (*(int32_t *)(v186 + 152) >= 64) {
																// 0x32f28
																v268 = (int32_t) * (char *)(*(int32_t *)(v186 + 228) + 122);
																if (__asm_rlwinm_(v268, 0, 30, 30) != 0) {
																	// 0x32f38
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32f48
																}
															}
														}
													}
												}
											}
											// 0x32f48
											if (v16 != 0) {
												// 0x32f50
												v187 = v20 + v22;
												v241 = *(int16_t *)(v21 + v187 + 2);
												result3 = v241;
												if (v241 != 0) {
													// 0x32f64
													v188 = *(int32_t *)g24 + 112 * g30;
													if (__asm_rlwinm_((int32_t) * (char *)(g31 + v188 + 1), 0, 25, 25) != 0) {
														// 0x32f80
														v76 = result3;
														v33 = (0x10000 * v76 < 1 ? -v76 : v76) - 1;
														v12 = v33;
														if (v33 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32fa4
															v189 = g25 + 232 * v33;
															if (*(int32_t *)(v189 + 152) >= 64) {
																// 0x32fb8
																v269 = (int32_t) * (char *)(*(int32_t *)(v189 + 228) + 122);
																if (__asm_rlwinm_(v269, 0, 30, 30) != 0) {
																	// 0x32fc8
																	*(int32_t *)g35 = g30;
																	*(int32_t *)g36 = g31 + 1;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32fd8
																}
															}
														}
													}
												}
											}
											// 0x32fd8
											v270 = *(int16_t *)(v22 + v21 + v20);
											result3 = v270;
											if (v270 != 0) {
												// 0x32fe8
												v296 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
												if (__asm_rlwinm_(v296, 0, 25, 25) != 0) {
													// 0x33000
													v77 = result3;
													v32 = (0x10000 * v77 < 1 ? -v77 : v77) - 1;
													v12 = v32;
													if (v32 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x33024
														v190 = g25 + 232 * v32;
														if (*(int32_t *)(v190 + 152) >= 64) {
															// 0x33038
															if (*(char *)(*(int32_t *)(v190 + 228) + 122) % 2 != 0) {
																// 0x33048
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31;
																*(int32_t *)g29 = v12;
																// branch -> 0x33054
															}
														}
													}
												}
											}
											// 0x33054
											v191 = v20 + v22;
											v242 = *(int16_t *)(v21 + v191 + 226);
											result3 = v242;
											if (v242 != 0) {
												// 0x33068
												v192 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v192 + 113), 0, 25, 25) != 0) {
													// 0x33084
													v78 = result3;
													v31 = (0x10000 * v78 < 1 ? -v78 : v78) - 1;
													v12 = v31;
													if (v31 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x330a8
														v193 = g25 + 232 * v31;
														if (*(int32_t *)(v193 + 152) >= 64) {
															// 0x330bc
															v271 = (int32_t) * (char *)(*(int32_t *)(v193 + 228) + 122);
															if (__asm_rlwinm_(v271, 0, 30, 30) != 0) {
																// 0x330cc
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31 + 1;
																*(int32_t *)g29 = v12;
																// branch -> 0x330e0
															}
														}
													}
												}
											}
											// 0x330e0
											v79 = g29;
											v139 = (int32_t *)v79;
											v194 = *v139;
											v80 = v79;
											if (v194 != -1) {
												// 0x330ec
												if (*(int32_t *)(g25 + 232 * v194 + 160) % 2 != 0) {
													// 0x33100
													*v139 = -1;
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = g31;
													v80 = g29;
													// branch -> 0x33110
												} else {
													v80 = v79;
												}
											}
											// 0x33110
											v195 = *(int32_t *)v80;
											if (v195 != -1) {
												// 0x3311c
												if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v195 + 160), 0, 26, 26) != 0) {
													// 0x33130
													*(int32_t *)g29 = -1;
													// branch -> 0x33138
												}
											}
											// 0x33138
											if (*(int32_t *)g29 != -1) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x33144
										if (v16 == 0) {
											// 0x3314c
											v81 = g30;
											v82 = g31;
											v243 = *(int16_t *)(*(int32_t *)g22 + 224 * v81 + 2 * v82 + 450);
											result3 = v243;
											if (v243 != 0) {
												// 0x3316c
												v196 = *(int32_t *)g24 + 112 * v81;
												if (__asm_rlwinm_((int32_t) * (char *)(v196 + v82 + 225), 0, 25, 25) != 0) {
													// 0x33188
													v83 = result3;
													v30 = (0x10000 * v83 < 1 ? -v83 : v83) - 1;
													v12 = v30;
													v197 = 232 * v30 + g25;
													if (*(int32_t *)(v197 + 152) >= 64) {
														// 0x331b4
														v272 = (int32_t) * (char *)(*(int32_t *)(v197 + 228) + 122);
														if (__asm_rlwinm_(v272, 0, 29, 29) != 0) {
															// 0x331c4
															*(int32_t *)g35 = g30 + 2;
															*(int32_t *)g36 = g31 + 1;
															*(int32_t *)g29 = v12;
															// branch -> 0x331d8
														}
													}
												}
											}
										}
										// 0x331d8
										if (v16 != 0) {
											// 0x331e0
											v84 = g30;
											v85 = g31;
											v244 = *(int16_t *)(*(int32_t *)g22 + 224 * v84 + 2 * v85 + 228);
											result3 = v244;
											if (v244 != 0) {
												// 0x33200
												v198 = *(int32_t *)g24 + 112 * v84;
												if (__asm_rlwinm_((int32_t) * (char *)(v198 + v85 + 114), 0, 25, 25) != 0) {
													// 0x3321c
													v86 = result3;
													v29 = (0x10000 * v86 < 1 ? -v86 : v86) - 1;
													v12 = v29;
													v199 = 232 * v29 + g25;
													if (*(int32_t *)(v199 + 152) >= 64) {
														// 0x33248
														v273 = (int32_t) * (char *)(*(int32_t *)(v199 + 228) + 122);
														if (__asm_rlwinm_(v273, 0, 29, 29) != 0) {
															// 0x33258
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31 + 2;
															*(int32_t *)g29 = v12;
															// branch -> 0x3326c
														}
													}
												}
											}
										}
										// 0x3326c
										v87 = g30;
										v140 = 224 * v87;
										v20 = v140;
										v200 = *(int32_t *)g22;
										v22 = v200;
										v88 = g31;
										v141 = 2 * v88;
										v21 = v141;
										v245 = *(int16_t *)(v141 + v200 + v140 + 452);
										result3 = v245;
										if (v245 != 0) {
											// 0x3328c
											v201 = *(int32_t *)g24 + 112 * v87;
											if (__asm_rlwinm_((int32_t) * (char *)(v201 + v88 + 226), 0, 25, 25) != 0) {
												// 0x332a8
												v89 = result3;
												v28 = (0x10000 * v89 < 1 ? -v89 : v89) - 1;
												v12 = v28;
												v202 = 232 * v28 + g25;
												if (*(int32_t *)(v202 + 152) >= 64) {
													// 0x332d4
													v274 = (int32_t) * (char *)(*(int32_t *)(v202 + 228) + 122);
													if (__asm_rlwinm_(v274, 0, 29, 29) != 0) {
														// 0x332e4
														*(int32_t *)g35 = g30 + 2;
														*(int32_t *)g36 = g31 + 2;
														*(int32_t *)g29 = v12;
														// branch -> 0x332f8
													}
												}
											}
										}
										// 0x332f8
										if (v16 == 0) {
											// 0x33300
											v203 = v20 + v22;
											v246 = *(int16_t *)(v21 + v203 + 224);
											result3 = v246;
											if (v246 != 0) {
												// 0x33314
												v204 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v204 + 112), 0, 25, 25) != 0) {
													// 0x33330
													v90 = result3;
													v27 = (0x10000 * v90 < 1 ? -v90 : v90) - 1;
													v12 = v27;
													v205 = 232 * v27 + g25;
													if (*(int32_t *)(v205 + 152) >= 64) {
														// 0x3335c
														v275 = (int32_t) * (char *)(*(int32_t *)(v205 + 228) + 122);
														if (__asm_rlwinm_(v275, 0, 30, 30) != 0) {
															// 0x3336c
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31;
															*(int32_t *)g29 = v12;
															// branch -> 0x3337c
														}
													}
												}
											}
										}
										// 0x3337c
										if (v16 != 0) {
											// 0x33384
											v206 = v20 + v22;
											v247 = *(int16_t *)(v21 + v206 + 2);
											result3 = v247;
											if (v247 != 0) {
												// 0x33398
												v207 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v207 + 1), 0, 25, 25) != 0) {
													// 0x333b4
													v91 = result3;
													v26 = (0x10000 * v91 < 1 ? -v91 : v91) - 1;
													v12 = v26;
													v208 = 232 * v26 + g25;
													if (*(int32_t *)(v208 + 152) >= 64) {
														// 0x333e0
														v276 = (int32_t) * (char *)(*(int32_t *)(v208 + 228) + 122);
														if (__asm_rlwinm_(v276, 0, 30, 30) != 0) {
															// 0x333f0
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31 + 1;
															*(int32_t *)g29 = v12;
															// branch -> 0x33400
														}
													}
												}
											}
										}
										// 0x33400
										v277 = *(int16_t *)(v22 + v21 + v20);
										result3 = v277;
										if (v277 != 0) {
											// 0x33410
											v297 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
											if (__asm_rlwinm_(v297, 0, 25, 25) != 0) {
												// 0x33428
												v92 = result3;
												v45 = (0x10000 * v92 < 1 ? -v92 : v92) - 1;
												v12 = v45;
												v209 = 232 * v45 + g25;
												if (*(int32_t *)(v209 + 152) >= 64) {
													// 0x33454
													if (*(char *)(*(int32_t *)(v209 + 228) + 122) % 2 != 0) {
														// 0x33464
														*(int32_t *)g35 = g30;
														*(int32_t *)g36 = g31;
														*(int32_t *)g29 = v12;
														// branch -> 0x33470
													}
												}
											}
										}
										// 0x33470
										v210 = v20 + v22;
										v248 = *(int16_t *)(v21 + v210 + 226);
										result3 = v248;
										if (v248 != 0) {
											// 0x33484
											v211 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v211 + 113), 0, 25, 25) != 0) {
												// 0x334a0
												v93 = result3;
												v44 = (0x10000 * v93 < 1 ? -v93 : v93) - 1;
												v12 = v44;
												v212 = 232 * v44 + g25;
												if (*(int32_t *)(v212 + 152) >= 64) {
													// 0x334cc
													v278 = (int32_t) * (char *)(*(int32_t *)(v212 + 228) + 122);
													if (__asm_rlwinm_(v278, 0, 30, 30) != 0) {
														// 0x334dc
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = g31 + 1;
														*(int32_t *)g29 = v12;
														// branch -> 0x334f0
													}
												}
											}
										}
										// 0x334f0
										v94 = g29;
										v142 = (int32_t *)v94;
										v213 = *v142;
										v95 = v94;
										if (v213 != -1) {
											// 0x334fc
											if (*(int32_t *)(g25 + 232 * v213 + 160) % 2 != 0) {
												// 0x33510
												*v142 = -1;
												*(int32_t *)g35 = g30;
												*(int32_t *)g36 = g31;
												v95 = g29;
												// branch -> 0x33520
											} else {
												v95 = v94;
											}
										}
										// 0x33520
										v214 = *(int32_t *)v95;
										if (v214 != -1) {
											// 0x3352c
											if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v214 + 160), 0, 26, 26) != 0) {
												// 0x33540
												*(int32_t *)g29 = -1;
												// branch -> 0x33640
											}
										}
									}
									// 0x33640
									v216 = *(int32_t *)g29;
									v3 = v216;
									if (v216 == -1) {
										// 0x3364c
										v101 = v16;
										v103 = v101;
										if (v101 == 0) {
											// 0x33654
											v102 = g30;
											v252 = *(char *)(g31 + *(int32_t *)v6 + 112 * v102 + 112);
											v283 = v252;
											if (v252 != 0) {
												// 0x33670
												if (0x1000000 * v283 < 0) {
													// 0x33680
													v43 = 0x1000000 * (-1 - v283) / 0x1000000;
													// branch -> 0x3368c
												} else {
													// 0x33678
													v43 = v283 - 1;
													// branch -> 0x3368c
												}
												// 0x3368c
												v12 = v43;
												v217 = 0x1000000 * v43 / 0x1000000;
												if (v217 != v175) {
													// 0x33698
													if (*(int32_t *)(g32 + 0x55ec * v217 + 404) != 0) {
														// 0x336ac
														*(int32_t *)g35 = v102 + 1;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)v12;
														v103 = v16;
														// branch -> 0x336bc
													} else {
														v103 = 0;
													}
												} else {
													v103 = 0;
												}
											} else {
												v103 = 0;
											}
										}
										// 0x336bc
										if (v103 != 0) {
											// 0x336c4
											v104 = g30;
											v253 = *(char *)(g31 + *(int32_t *)v6 + 112 * v104 + 1);
											v284 = v253;
											if (v253 != 0) {
												// 0x336e0
												if (0x1000000 * v284 < 0) {
													// 0x336f0
													v42 = 0x1000000 * (-1 - v284) / 0x1000000;
													// branch -> 0x336fc
												} else {
													// 0x336e8
													v42 = v284 - 1;
													// branch -> 0x336fc
												}
												// 0x336fc
												v12 = v42;
												v218 = 0x1000000 * v42 / 0x1000000;
												if (v218 != v175) {
													// 0x33708
													if (*(int32_t *)(g32 + 0x55ec * v218 + 404) != 0) {
														// 0x3371c
														*(int32_t *)g35 = v104;
														*(int32_t *)g36 = g31 + 1;
														*(char *)g33 = (char)v12;
														// branch -> 0x3372c
													}
												}
											}
										}
										// 0x3372c
										v105 = g30;
										v148 = 112 * v105;
										v15 = v148;
										v219 = *(int32_t *)v6;
										v7 = v219;
										v149 = g31;
										v285 = *(char *)(v149 + v148 + v219);
										v299 = v285;
										v150 = v149;
										v106 = v148;
										if (v285 != 0) {
											// 0x33744
											if (0x1000000 * v299 < 0) {
												// 0x33754
												v41 = 0x1000000 * (-1 - v299) / 0x1000000;
												// branch -> 0x33760
											} else {
												// 0x3374c
												v41 = v299 - 1;
												// branch -> 0x33760
											}
											// 0x33760
											result3 = v41;
											if (0x1000000 * v41 / 0x1000000 != v175) {
												// 0x3376c
												*(int32_t *)g35 = v105;
												*(int32_t *)g36 = g31;
												*(char *)g33 = (char)result3;
												v150 = g31;
												v106 = v15;
												// branch -> 0x33778
											} else {
												v150 = v149;
												v106 = v148;
											}
										}
										// 0x33778
										v220 = *(int32_t *)g24;
										v14 = v220;
										if (__asm_rlwinm_((int32_t) * (char *)(v220 + v106 + v150), 0, 29, 29) != 0) {
											// 0x3378c
											v107 = g32;
											v254 = *(int32_t *)(v107 + 56);
											v108 = g30;
											v110 = v108;
											v109 = v107;
											if (v108 == v254) {
												// 0x3379c
												if (g31 == *(int32_t *)(v107 + 60)) {
													// 0x337a8
													if (v175 != 0) {
														// 0x337b0
														*(int32_t *)g35 = v254;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)0;
														v110 = g30;
														v109 = g32;
														// branch -> 0x337c0
													} else {
														v110 = v254;
														v109 = v107;
													}
												} else {
													v110 = v254;
													v109 = v107;
												}
											}
											// 0x337c0
											v151 = v109 + 0x55ec;
											result3 = v151;
											v112 = v110;
											v111 = v151;
											if (v110 == *(int32_t *)(v109 + 0x5624)) {
												// 0x337d4
												if (g31 == *(int32_t *)(v109 + 0x5628)) {
													// 0x337e0
													if (v175 != 1) {
														// 0x337e8
														*(int32_t *)g35 = v110;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)1;
														v112 = g30;
														v111 = result3;
														// branch -> 0x337f8
													} else {
														v112 = v110;
														v111 = v151;
													}
												} else {
													v112 = v110;
													v111 = v151;
												}
											}
											// 0x337f8
											v152 = v111 + 0x55ec;
											result3 = v152;
											v114 = v112;
											v113 = v152;
											if (v112 == *(int32_t *)(v111 + 0x5624)) {
												// 0x3380c
												if (g31 == *(int32_t *)(v111 + 0x5628)) {
													// 0x33818
													if (v175 != 2) {
														// 0x33820
														*(int32_t *)g35 = v112;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)2;
														v114 = g30;
														v113 = result3;
														// branch -> 0x33830
													} else {
														v114 = v112;
														v113 = v152;
													}
												} else {
													v114 = v112;
													v113 = v152;
												}
											}
											// 0x33830
											if (v114 == *(int32_t *)(v113 + 0x5624)) {
												// 0x33844
												if (g31 == *(int32_t *)(v113 + 0x5628)) {
													// 0x33850
													if (v175 != 3) {
														// 0x33858
														*(int32_t *)g35 = v114;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)3;
														// branch -> 0x33868
													}
												}
											}
										}
										// 0x33868
										if (v176 == 8) {
											// 0x33870
											v13 = -1;
											// branch -> 0x33874
											while (true) {
												// 0x33874
												v221 = g30 - 1;
												v19 = v221;
												v11 = 3;
												v222 = g31 + 112 * v221 - 1 + v14;
												v22 = v222;
												v23 = -1;
												v115 = v222;
												// branch -> 0x33894
												goto lab_0x33894_9;
											}
										}
										// 0x33998
										v153 = g31;
										v255 = *(char *)(v153 + v15 + v7 + 113);
										v286 = v255;
										if (v255 != 0) {
											// 0x339ac
											if (0x1000000 * v286 < 0) {
												// 0x339bc
												v40 = 0x1000000 * (-1 - v286) / 0x1000000;
												// branch -> 0x339c8
											} else {
												// 0x339b4
												v40 = v286 - 1;
												// branch -> 0x339c8
											}
											// 0x339c8
											result3 = v40;
											v223 = 0x1000000 * v40 / 0x1000000;
											if (v223 != v175) {
												// 0x339d4
												if (*(int32_t *)(g32 + 0x55ec * v223 + 404) != 0) {
													// 0x339e8
													*(int32_t *)g35 = g30 + 1;
													*(int32_t *)g36 = v153 + 1;
													*(char *)g33 = (char)result3;
													// branch -> 0x339fc
												}
											}
										}
									}
									// 0x339fc
									if (v3 == -1) {
										// 0x33a04
										if (*(char *)g33 == -1) {
											// 0x33a14
											v116 = v16;
											v118 = v116;
											if (v116 == 0) {
												// 0x33a1c
												v117 = g30;
												v256 = *(char *)(g31 + *(int32_t *)g16 + 112 * v117 + 112);
												v287 = v256;
												if (v256 != 0) {
													// 0x33a38
													if (0x1000000 * v287 < 0) {
														// 0x33a48
														v39 = 0x1000000 * (-1 - v287) / 0x1000000;
														// branch -> 0x33a54
													} else {
														// 0x33a40
														v39 = v287 - 1;
														// branch -> 0x33a54
													}
													// 0x33a54
													v12 = v39;
													if (*(char *)(120 * 0x1000000 * v39 / 0x1000000 + v5 + 64) >= 2) {
														// 0x33a70
														*(int32_t *)g35 = v117 + 1;
														*(int32_t *)g36 = g31;
														*(char *)g20 = (char)v12;
														v118 = v16;
														// branch -> 0x33a80
													} else {
														v118 = 0;
													}
												} else {
													v118 = 0;
												}
											}
											// 0x33a80
											if (v118 != 0) {
												// 0x33a88
												v119 = g30;
												v257 = *(char *)(g31 + *(int32_t *)g16 + 112 * v119 + 1);
												v288 = v257;
												if (v257 != 0) {
													// 0x33aa4
													if (0x1000000 * v288 < 0) {
														// 0x33ab4
														v36 = 0x1000000 * (-1 - v288) / 0x1000000;
														// branch -> 0x33ac0
													} else {
														// 0x33aac
														v36 = v288 - 1;
														// branch -> 0x33ac0
													}
													// 0x33ac0
													v12 = v36;
													if (*(char *)(120 * 0x1000000 * v36 / 0x1000000 + v5 + 64) >= 2) {
														// 0x33adc
														*(int32_t *)g35 = v119;
														*(int32_t *)g36 = g31 + 1;
														*(char *)g20 = (char)v12;
														// branch -> 0x33aec
													}
												}
											}
											// 0x33aec
											v120 = g30;
											v154 = 112 * v120;
											v12 = v154;
											v224 = *(int32_t *)g16;
											result3 = v224;
											v155 = g31;
											v289 = *(char *)(v155 + v154 + v224);
											v300 = v289;
											v122 = v155;
											v156 = v154;
											v121 = v224;
											if (v289 != 0) {
												// 0x33b04
												if (0x1000000 * v300 < 0) {
													// 0x33b14
													v25 = 0x1000000 * (-1 - v300) / 0x1000000;
													// branch -> 0x33b20
												} else {
													// 0x33b0c
													v25 = v300 - 1;
													// branch -> 0x33b20
												}
												// 0x33b20
												v19 = v25;
												v258 = *(char *)(120 * 0x1000000 * v25 / 0x1000000 + v5 + 64);
												if (v258 != 1) {
													// 0x33b3c
													if (v258 != 3) {
														v122 = v155;
														// 0x33b50
														v259 = *(char *)(v224 + v154 + v122 + 113);
														v290 = v259;
														if (v259 != 0) {
															// 0x33b64
															if (0x1000000 * v290 < 0) {
																// 0x33b74
																v24 = 0x1000000 * (-1 - v290) / 0x1000000;
																// branch -> 0x33b80
															} else {
																// 0x33b6c
																v24 = v290 - 1;
																// branch -> 0x33b80
															}
															// 0x33b80
															v12 = v24;
															if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
																// 0x33b9c
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = v122 + 1;
																*(char *)g20 = (char)v12;
																// branch -> 0x33bb0
															}
														}
														// 0x33bb0
														if (*(char *)g33 == -1) {
															// 0x33bc0
															if (*(char *)g20 == -1) {
																// 0x33bd0
																if (v3 == -1) {
																	// 0x33bd8
																	v123 = v16;
																	v125 = v123;
																	if (v123 == 0) {
																		// 0x33be0
																		v260 = *(int32_t *)(g23 - 0x768c);
																		v124 = g30;
																		v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																		v291 = v261;
																		if (v261 >= 1) {
																			// 0x33c00
																			v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
																			v12 = v225;
																			if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																				// 0x33c24
																				*(int32_t *)g35 = v124 + 1;
																				*(int32_t *)g36 = g31;
																				*(char *)g21 = (char)v12;
																				v125 = v16;
																				// branch -> 0x33c34
																			} else {
																				v125 = 0;
																			}
																		} else {
																			v125 = 0;
																		}
																	}
																	// 0x33c34
																	if (v125 != 0) {
																		// 0x33c3c
																		v262 = *(int32_t *)(g23 - 0x768c);
																		v126 = g30;
																		v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																		v292 = v263;
																		if (v263 >= 1) {
																			// 0x33c5c
																			v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
																			v12 = v226;
																			if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																				// 0x33c80
																				*(int32_t *)g35 = v126;
																				*(int32_t *)g36 = g31 + 1;
																				*(char *)g21 = (char)v12;
																				// branch -> 0x33c90
																			}
																		}
																	}
																	// 0x33c90
																	v127 = g30;
																	v157 = 112 * v127;
																	v20 = v157;
																	v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
																	result3 = v227;
																	v158 = g31;
																	v293 = *(char *)(v158 + v157 + v227);
																	v301 = v293;
																	v129 = v158;
																	v160 = v157;
																	v128 = v227;
																	if (v293 >= 1) {
																		// 0x33cac
																		v159 = v4 + 48;
																		v19 = v159;
																		v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
																		v18 = v228;
																		v294 = *(char *)(v159 + 368 * v228);
																		if (v294 != 1) {
																			// 0x33cd0
																			if (v294 != 3) {
																				v129 = v158;
																				// 0x33ce4
																				v264 = *(char *)(v227 + v157 + v129 + 113);
																				v295 = v264;
																				if (v264 >= 1) {
																					// 0x33cf8
																					v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
																					v12 = v229;
																					if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																						// 0x33d1c
																						v161 = g30 + 1;
																						v18 = v161;
																						*(int32_t *)g35 = v161;
																						*(int32_t *)g36 = v129 + 1;
																						*(char *)g21 = (char)v12;
																						// branch -> 0x33d30
																					}
																				}
																				// 0x33d30
																				if (*(char *)g21 == -1) {
																					// 0x33d40
																					*(int32_t *)g35 = g30;
																					*(int32_t *)g36 = g31;
																					v130 = function_c824c();
																					g34 = v130;
																					v162 = function_3257c(v130);
																					g34 = v162;
																					function_32720(v162);
																					// branch -> 0x33d54
																				}
																				// 0x33d54
																				if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
																					// 0x33d64
																					v12 = -1;
																					*(char *)g20 = -1;
																					*(int32_t *)g29 = v12;
																					*(char *)g21 = (char)v12;
																					*(int32_t *)g35 = g30;
																					*(int32_t *)g36 = g31;
																					// branch -> 0x33d7c
																				}
																				// 0x33d7c
																				v230 = *(int32_t *)g29;
																				if (v230 == -1) {
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				}
																				// 0x33d88
																				result5 = g25 + 232 * v230;
																				result3 = result5;
																				if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																					// 0x33d9c
																					*(int32_t *)g29 = -1;
																					// branch -> 0x33da4
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			}
																		}
																		// 0x33cd8
																		*(int32_t *)g35 = v127;
																		*(int32_t *)g36 = g31;
																		*(char *)g21 = (char)v18;
																		v129 = g31;
																		v160 = v20;
																		v128 = result3;
																		// branch -> 0x33ce4
																	}
																	// 0x33ce4
																	v264 = *(char *)(v128 + v160 + v129 + 113);
																	v295 = v264;
																	if (v264 >= 1) {
																		// 0x33cf8
																		v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
																		v12 = v229;
																		if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																			// 0x33d1c
																			*(int32_t *)g35 = g30 + 1;
																			*(int32_t *)g36 = v129 + 1;
																			*(char *)g21 = (char)v12;
																			// branch -> 0x33d30
																		}
																	}
																	// 0x33d30
																	if (*(char *)g21 == -1) {
																		// 0x33d40
																		*(int32_t *)g35 = g30;
																		*(int32_t *)g36 = g31;
																		v130 = function_c824c();
																		g34 = v130;
																		v162 = function_3257c(v130);
																		g34 = v162;
																		function_32720(v162);
																		// branch -> 0x33d54
																	}
																}
															}
														}
														// 0x33d54
														if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
															// 0x33d64
															v12 = -1;
															*(char *)g20 = -1;
															*(int32_t *)g29 = v12;
															*(char *)g21 = (char)v12;
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31;
															// branch -> 0x33d7c
														}
														// 0x33d7c
														v230 = *(int32_t *)g29;
														if (v230 == -1) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
														// 0x33d88
														result5 = g25 + 232 * v230;
														result3 = result5;
														v163 = __asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26);
														v12 = v163;
														if (v163 != 0) {
															// 0x33d9c
															v12 = -1;
															*(int32_t *)g29 = -1;
															// branch -> 0x33da4
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x33b44
												*(int32_t *)g35 = v120;
												*(int32_t *)g36 = g31;
												*(char *)g20 = (char)v19;
												v122 = g31;
												v156 = v12;
												v121 = result3;
												// branch -> 0x33b50
											}
											// 0x33b50
											v259 = *(char *)(v121 + v156 + v122 + 113);
											v290 = v259;
											if (v259 != 0) {
												// 0x33b64
												if (0x1000000 * v290 < 0) {
													// 0x33b74
													v24 = 0x1000000 * (-1 - v290) / 0x1000000;
													// branch -> 0x33b80
												} else {
													// 0x33b6c
													v24 = v290 - 1;
													// branch -> 0x33b80
												}
												// 0x33b80
												v12 = v24;
												if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
													// 0x33b9c
													*(int32_t *)g35 = g30 + 1;
													*(int32_t *)g36 = v122 + 1;
													*(char *)g20 = (char)v12;
													// branch -> 0x33bb0
												}
											}
										}
									}
									// 0x33bb0
									if (*(char *)g33 == -1) {
										// 0x33bc0
										if (*(char *)g20 == -1) {
											// 0x33bd0
											if (v3 == -1) {
												// 0x33bd8
												v123 = v16;
												v125 = v123;
												if (v123 == 0) {
													// 0x33be0
													v260 = *(int32_t *)(g23 - 0x768c);
													v124 = g30;
													v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
													v291 = v261;
													if (v261 >= 1) {
														// 0x33c00
														v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
														v12 = v225;
														if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
															// 0x33c24
															*(int32_t *)g35 = v124 + 1;
															*(int32_t *)g36 = g31;
															*(char *)g21 = (char)v12;
															v125 = v16;
															// branch -> 0x33c34
														} else {
															v125 = 0;
														}
													} else {
														v125 = 0;
													}
												}
												// 0x33c34
												if (v125 != 0) {
													// 0x33c3c
													v262 = *(int32_t *)(g23 - 0x768c);
													v126 = g30;
													v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
													v292 = v263;
													if (v263 >= 1) {
														// 0x33c5c
														v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
														v12 = v226;
														if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
															// 0x33c80
															*(int32_t *)g35 = v126;
															*(int32_t *)g36 = g31 + 1;
															*(char *)g21 = (char)v12;
															// branch -> 0x33c90
														}
													}
												}
												// 0x33c90
												v127 = g30;
												v157 = 112 * v127;
												v20 = v157;
												v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
												result3 = v227;
												v158 = g31;
												v293 = *(char *)(v158 + v157 + v227);
												v301 = v293;
												v129 = v158;
												v160 = v157;
												v128 = v227;
												if (v293 >= 1) {
													// 0x33cac
													v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
													v18 = v228;
													v294 = *(char *)(v4 + 48 + 368 * v228);
													if (v294 != 1) {
														// 0x33cd0
														if (v294 != 3) {
															v129 = v158;
															// 0x33ce4
															v264 = *(char *)(v227 + v157 + v129 + 113);
															v295 = v264;
															if (v264 >= 1) {
																// 0x33cf8
																v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
																v12 = v229;
																if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																	// 0x33d1c
																	v161 = g30 + 1;
																	v18 = v161;
																	*(int32_t *)g35 = v161;
																	*(int32_t *)g36 = v129 + 1;
																	*(char *)g21 = (char)v12;
																	// branch -> 0x33d30
																}
															}
															// 0x33d30
															if (*(char *)g21 == -1) {
																// 0x33d40
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31;
																v130 = function_c824c();
																g34 = v130;
																v162 = function_3257c(v130);
																g34 = v162;
																function_32720(v162);
																// branch -> 0x33d54
															}
															// 0x33d54
															if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
																// 0x33d64
																v12 = -1;
																*(char *)g20 = -1;
																*(int32_t *)g29 = v12;
																*(char *)g21 = (char)v12;
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31;
																// branch -> 0x33d7c
															}
															// 0x33d7c
															v230 = *(int32_t *)g29;
															if (v230 == -1) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
															// 0x33d88
															result5 = g25 + 232 * v230;
															result3 = result5;
															if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																// 0x33d9c
																*(int32_t *)g29 = -1;
																// branch -> 0x33da4
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x33cd8
													*(int32_t *)g35 = v127;
													*(int32_t *)g36 = g31;
													*(char *)g21 = (char)v18;
													v129 = g31;
													v160 = v20;
													v128 = result3;
													// branch -> 0x33ce4
												}
												// 0x33ce4
												v264 = *(char *)(v128 + v160 + v129 + 113);
												v295 = v264;
												if (v264 >= 1) {
													// 0x33cf8
													v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
													v12 = v229;
													if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
														// 0x33d1c
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = v129 + 1;
														*(char *)g21 = (char)v12;
														// branch -> 0x33d30
													}
												}
												// 0x33d30
												if (*(char *)g21 == -1) {
													// 0x33d40
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = g31;
													v130 = function_c824c();
													g34 = v130;
													v162 = function_3257c(v130);
													g34 = v162;
													function_32720(v162);
													// branch -> 0x33d54
												}
											}
										}
									}
									// 0x33d54
									if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
										// 0x33d64
										v12 = -1;
										*(char *)g20 = -1;
										*(int32_t *)g29 = v12;
										*(char *)g21 = (char)v12;
										*(int32_t *)g35 = g30;
										*(int32_t *)g36 = g31;
										// branch -> 0x33d7c
									}
									// 0x33d7c
									v230 = *(int32_t *)g29;
									if (v230 != -1) {
										// 0x33d88
										if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v230 + 160), 0, 26, 26) != 0) {
											// 0x33d9c
											*(int32_t *)g29 = -1;
											// branch -> 0x33da4
										}
									}
								}
							}
						} else {
							// 0x32c38
							function_2ec14(v236, v175, v235, v176);
							// branch -> 0x33da4
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0x32c1c
				*(int32_t *)g35 = g30;
				*(int32_t *)g36 = g31;
				// branch -> 0x33da4
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// 0x32950
	if (v8 < 160) {
		// 0x32960
		v17 = 0;
		// branch -> 0x3299c
	} else {
		// 0x32958
		v17 = v8 - 160;
		// branch -> 0x3299c
	}
	// 0x3299c
	char v325;          // 0x33bb0
	char v326;          // 0x33bc0
	unsigned char v327; // 0x33b8c
	if (v9 >= 352) {
		// 0x329a4
		if (function_c6730() != 0) {
			// 0x329b0
			v10 = 351;
			// branch -> 0x329b4
		}
		// 0x329b4
		v46 = g23;
		v164 = *(int32_t *)*(int32_t *)(v46 - 0x766c);
		v47 = v17;
		if (v164 == 0) {
			// 0x329c4
			v48 = v10;
			v132 = v48 / 2 | v48 & -0x80000000;
			v131 = v47 / 2 | v47 & -0x80000000;
			// branch -> 0x329cc
		} else {
			// 0x329b4
			v132 = v10;
			v131 = v47;
			// branch -> 0x329cc
		}
		// 0x329cc
		v49 = v7;
		v165 = v131 - *(int32_t *)v49;
		v17 = v165;
		v166 = g32 + 0x55ec * *(int32_t *)*(int32_t *)(v46 - 0x77ac);
		v231 = *(int32_t *)(v166 + 484);
		v167 = v132 - *(int32_t *)(v49 + 4);
		v10 = v167;
		v232 = *(int32_t *)(v166 + 488);
		v168 = v231 / 256 - (*(int32_t *)(v166 + 104) + v231) / 256;
		v169 = v232 / 256 - (*(int32_t *)(v166 + 108) + v232) / 256;
		v53 = v167;
		v51 = v165;
		if (*(int32_t *)(v49 + 16) != 0) {
			int32_t v328 = v165 - v168; // 0x32a28
			v17 = v328;
			v170 = v167 - v169;
			v10 = v170;
			v53 = v170;
			v51 = v328;
			// branch -> 0x32a30
		}
		// 0x32a30
		v50 = v51;
		if (v51 <= 0xffffffff) {
			// 0x32a38
			v17 = 0;
			v50 = 0;
			// branch -> 0x32a3c
		}
		// 0x32a3c
		v54 = v50;
		if (v50 >= 640) {
			// 0x32a44
			v17 = 640;
			v54 = 640;
			// branch -> 0x32a48
		}
		// 0x32a48
		v52 = v53;
		if (v53 <= 0xffffffff) {
			// 0x32a50
			v10 = 0;
			v52 = 0;
			// branch -> 0x32a54
		}
		// 0x32a54
		v55 = v52;
		if (v52 >= 480) {
			// 0x32a5c
			v10 = 480;
			v55 = 480;
			// branch -> 0x32a60
		}
		// 0x32a60
		v302 = v54 / 64;
		v303 = v55 / 32;
		v133 = v54 % 64;
		v134 = v55 % 32;
		v233 = v133 / 2;
		v234 = *(int32_t *)(v46 - 0x77b0);
		v171 = -1 - v233;
		v172 = v134 - v233;
		v173 = *(int32_t *)*(int32_t *)(v46 - 0x77b4) + v303 - v302;
		g31 = v173;
		v174 = v303 + v302 + *(int32_t *)v234 - (v164 == 0 ? 5 : 10);
		g30 = v174;
		v59 = v173;
		if (v172 > v171) {
			// 0x32ac4
			v135 = v173 - 1;
			g31 = v135;
			v59 = v135;
			// branch -> 0x32ac8
		}
		// 0x32ac8
		v57 = v174;
		if (v134 + (v233 || -32) <= v233 - 33) {
			// 0x32ae4
			v136 = v174 + 1;
			g30 = v136;
			v57 = v136;
			// branch -> 0x32ae8
		}
		// 0x32ae8
		v56 = v57;
		if (v57 <= 0xffffffff) {
			// 0x32af0
			g30 = 0;
			v56 = 0;
			// branch -> 0x32af4
		}
		// 0x32af4
		if (v56 >= 112) {
			// 0x32afc
			g30 = 111;
			// branch -> 0x32b00
		}
		// 0x32b00
		v58 = v59;
		if (v59 <= 0xffffffff) {
			// 0x32b08
			g31 = 0;
			v58 = 0;
			// branch -> 0x32b0c
		}
		// 0x32b0c
		if (v58 >= 112) {
			// 0x32b14
			g31 = 111;
			// branch -> 0x32b18
		}
		// 0x32b18
		v60 = 0;
		if (v172 > v171) {
			// 0x32b28
			if (v134 + (v233 || -32) <= v233 - 33) {
				// 0x32b30
				v60 = 1;
				// branch -> 0x32b34
			} else {
				v60 = 0;
			}
		}
		// 0x32b34
		v63 = 1;
		if (v60 == 0) {
			// 0x32b3c
			v61 = 1;
			if (v172 <= v171) {
				// 0x32b4c
				if (v134 + (v233 || -32) > v233 - 33) {
					// 0x32b54
					v61 = 0;
					// branch -> 0x32b58
				} else {
					v61 = 1;
				}
			}
			// 0x32b58
			v62 = 0;
			if (v61 != 0) {
				// 0x32b60
				if (v133 <= 31) {
					// 0x32b68
					v62 = 1;
					// branch -> 0x32b6c
				} else {
					v62 = 0;
				}
			}
			// 0x32b6c
			if (v62 == 0) {
				// 0x32b74
				v63 = 0;
				// branch -> 0x32b78
			} else {
				v63 = 1;
			}
		}
		// 0x32b78
		v12 = -1;
		v16 = v63;
		*(int32_t *)(v46 - 0x4f84) = *(int32_t *)g29;
		*(int32_t *)g29 = v12;
		*(char *)g20 = (char)v12;
		*(char *)g21 = (char)v12;
		if (*(char *)*(int32_t *)(g23 - 0x772c) != -1) {
			// 0x32ba8
			*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
			// branch -> 0x32bb4
		}
		// 0x32bb4
		v64 = g23;
		v235 = *(int32_t *)(v64 - 0x7674);
		v12 = 0;
		*(char *)*(int32_t *)(v64 - 0x772c) = -1;
		*(char *)g33 = (char)-1;
		*(int32_t *)v235 = v12;
		*(int32_t *)*(int32_t *)(g23 - 0x76d4) = v12;
		*(int32_t *)*(int32_t *)(g23 - 0x7740) = v12;
		v65 = g23;
		v175 = *(int32_t *)*(int32_t *)(v65 - 0x77ac);
		if (*(char *)(g32 + 0x55ec * v175 + 313) == 0) {
			// 0x32bfc
			v176 = *(int32_t *)*(int32_t *)(v65 - 0x7744);
			if (v176 <= 11) {
				// 0x32c0c
				if (*(int32_t *)*(int32_t *)(v65 - 0x76b8) == 0) {
					// 0x32c28
					v236 = *(int32_t *)(v65 - 0x76ac);
					if (*(int32_t *)v236 < 353) {
						// 0x32c40
						if (*(int32_t *)*(int32_t *)(v65 - 0x7678) == 0) {
							// 0x32c50
							if (*(int32_t *)*(int32_t *)(v65 - 0x77bc) != 0) {
								// 0x32c60
								if (*(int32_t *)v3 >= 321) {
									// 0x32c6c
									*(char *)*(int32_t *)(g23 - 0x772c) = (char)function_5ae34();
									// branch -> 0x33da4
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x32c7c
							if (*(int32_t *)*(int32_t *)(v65 - 0x77c0) != 0) {
								// 0x32c8c
								if (*(int32_t *)v3 > 320) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x32c98
							if (*(int32_t *)*(int32_t *)(v65 - 0x77c4) == 0) {
								// 0x32ca8
								if (*(int32_t *)*(int32_t *)(v65 - 0x77c8) == 0) {
									// 0x32cc4
									if (*(char *)*(int32_t *)(v65 - 0x7794) == 0) {
										// 0x3354c
										v96 = v16;
										v98 = v96;
										if (v96 == 0) {
											// 0x33554
											v97 = g30;
											v249 = *(int16_t *)(*(int32_t *)g22 + 224 * v97 + 2 * g31 + 224);
											v279 = v249;
											if (v249 >= 1) {
												// 0x33574
												*(int32_t *)g29 = v279 - 1;
												*(int32_t *)g35 = v97 + 1;
												*(int32_t *)g36 = g31;
												v98 = v16;
												// branch -> 0x33588
											} else {
												v98 = 0;
											}
										}
										// 0x33588
										if (v98 != 0) {
											// 0x33590
											v99 = g31;
											v250 = *(int16_t *)(*(int32_t *)g22 + 224 * g30 + 2 * v99 + 2);
											v280 = v250;
											if (v250 >= 1) {
												// 0x335b0
												*(int32_t *)g29 = v280 - 1;
												*(int32_t *)g35 = g30;
												*(int32_t *)g36 = v99 + 1;
												// branch -> 0x335c4
											}
										}
										// 0x335c4
										v143 = 224 * g30;
										result3 = v143;
										v215 = *(int32_t *)g22;
										v19 = v215;
										v144 = 2 * g31;
										v12 = v144;
										v281 = *(int16_t *)(v144 + v143 + v215);
										v298 = v281;
										v146 = v144;
										v145 = v143;
										v100 = v215;
										if (v281 >= 1) {
											// 0x335e0
											*(int32_t *)g29 = v298 - 1;
											*(int32_t *)g35 = g30;
											*(int32_t *)g36 = g31;
											v146 = v12;
											v145 = result3;
											v100 = v19;
											// branch -> 0x335f0
										}
										// 0x335f0
										v251 = *(int16_t *)(v145 + v146 + v100 + 226);
										v282 = v251;
										if (v251 >= 1) {
											// 0x33604
											*(int32_t *)g29 = v282 - 1;
											*(int32_t *)g35 = g30 + 1;
											*(int32_t *)g36 = g31 + 1;
											// branch -> 0x3361c
										}
										// 0x3361c
										v147 = (int32_t *)g29;
										if (*(int32_t *)(*(int32_t *)(g23 - 0x7758) + 268 * *v147 + 84) == 0) {
											// 0x33638
											*v147 = -1;
											// branch -> 0x33640
										}
									} else {
										// 0x32cd4
										if (*(int32_t *)(v65 - 0x4f84) != -1) {
											// 0x32ce0
											if (v16 == 0) {
												// 0x32ce8
												v66 = g30;
												v67 = g31;
												v237 = *(int16_t *)(*(int32_t *)g22 + 224 * v66 + 2 * v67 + 450);
												result3 = v237;
												if (v237 != 0) {
													// 0x32d08
													v177 = *(int32_t *)g24 + 112 * v66;
													if (__asm_rlwinm_((int32_t) * (char *)(v177 + v67 + 225), 0, 25, 25) != 0) {
														// 0x32d24
														v68 = result3;
														v38 = (0x10000 * v68 < 1 ? -v68 : v68) - 1;
														v12 = v38;
														if (v38 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32d48
															v178 = g25 + 232 * v38;
															if (*(int32_t *)(v178 + 152) >= 64) {
																// 0x32d5c
																v265 = (int32_t) * (char *)(*(int32_t *)(v178 + 228) + 122);
																if (__asm_rlwinm_(v265, 0, 29, 29) != 0) {
																	// 0x32d6c
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31 + 2;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32d80
																}
															}
														}
													}
												}
											}
											// 0x32d80
											if (v16 != 0) {
												// 0x32d88
												v69 = g30;
												v70 = g31;
												v238 = *(int16_t *)(*(int32_t *)g22 + 224 * v69 + 2 * v70 + 228);
												result3 = v238;
												if (v238 != 0) {
													// 0x32da8
													v179 = *(int32_t *)g24 + 112 * v69;
													if (__asm_rlwinm_((int32_t) * (char *)(v179 + v70 + 114), 0, 25, 25) != 0) {
														// 0x32dc4
														v71 = result3;
														v37 = (0x10000 * v71 < 1 ? -v71 : v71) - 1;
														v12 = v37;
														if (v37 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32de8
															v180 = g25 + 232 * v37;
															if (*(int32_t *)(v180 + 152) >= 64) {
																// 0x32dfc
																v266 = (int32_t) * (char *)(*(int32_t *)(v180 + 228) + 122);
																if (__asm_rlwinm_(v266, 0, 29, 29) != 0) {
																	// 0x32e0c
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31 + 2;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32e20
																}
															}
														}
													}
												}
											}
											// 0x32e20
											v72 = g30;
											v137 = 224 * v72;
											v20 = v137;
											v181 = *(int32_t *)g22;
											v22 = v181;
											v73 = g31;
											v138 = 2 * v73;
											v21 = v138;
											v239 = *(int16_t *)(v138 + v181 + v137 + 452);
											result3 = v239;
											if (v239 != 0) {
												// 0x32e40
												v182 = *(int32_t *)g24 + 112 * v72;
												if (__asm_rlwinm_((int32_t) * (char *)(v182 + v73 + 226), 0, 25, 25) != 0) {
													// 0x32e5c
													v74 = result3;
													v35 = (0x10000 * v74 < 1 ? -v74 : v74) - 1;
													v12 = v35;
													if (v35 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32e80
														v183 = g25 + 232 * v35;
														if (*(int32_t *)(v183 + 152) >= 64) {
															// 0x32e94
															v267 = (int32_t) * (char *)(*(int32_t *)(v183 + 228) + 122);
															if (__asm_rlwinm_(v267, 0, 29, 29) != 0) {
																// 0x32ea4
																*(int32_t *)g35 = g30 + 2;
																*(int32_t *)g36 = g31 + 2;
																*(int32_t *)g29 = v12;
																// branch -> 0x32eb8
															}
														}
													}
												}
											}
											// 0x32eb8
											if (v16 == 0) {
												// 0x32ec0
												v184 = v20 + v22;
												v240 = *(int16_t *)(v21 + v184 + 224);
												result3 = v240;
												if (v240 != 0) {
													// 0x32ed4
													v185 = *(int32_t *)g24 + 112 * g30;
													if (__asm_rlwinm_((int32_t) * (char *)(g31 + v185 + 112), 0, 25, 25) != 0) {
														// 0x32ef0
														v75 = result3;
														v34 = (0x10000 * v75 < 1 ? -v75 : v75) - 1;
														v12 = v34;
														if (v34 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32f14
															v186 = g25 + 232 * v34;
															if (*(int32_t *)(v186 + 152) >= 64) {
																// 0x32f28
																v268 = (int32_t) * (char *)(*(int32_t *)(v186 + 228) + 122);
																if (__asm_rlwinm_(v268, 0, 30, 30) != 0) {
																	// 0x32f38
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32f48
																}
															}
														}
													}
												}
											}
											// 0x32f48
											if (v16 != 0) {
												// 0x32f50
												v187 = v20 + v22;
												v241 = *(int16_t *)(v21 + v187 + 2);
												result3 = v241;
												if (v241 != 0) {
													// 0x32f64
													v188 = *(int32_t *)g24 + 112 * g30;
													if (__asm_rlwinm_((int32_t) * (char *)(g31 + v188 + 1), 0, 25, 25) != 0) {
														// 0x32f80
														v76 = result3;
														v33 = (0x10000 * v76 < 1 ? -v76 : v76) - 1;
														v12 = v33;
														if (v33 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32fa4
															v189 = g25 + 232 * v33;
															if (*(int32_t *)(v189 + 152) >= 64) {
																// 0x32fb8
																v269 = (int32_t) * (char *)(*(int32_t *)(v189 + 228) + 122);
																if (__asm_rlwinm_(v269, 0, 30, 30) != 0) {
																	// 0x32fc8
																	*(int32_t *)g35 = g30;
																	*(int32_t *)g36 = g31 + 1;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32fd8
																}
															}
														}
													}
												}
											}
											// 0x32fd8
											v270 = *(int16_t *)(v22 + v21 + v20);
											result3 = v270;
											if (v270 != 0) {
												// 0x32fe8
												v296 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
												if (__asm_rlwinm_(v296, 0, 25, 25) != 0) {
													// 0x33000
													v77 = result3;
													v32 = (0x10000 * v77 < 1 ? -v77 : v77) - 1;
													v12 = v32;
													if (v32 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x33024
														v190 = g25 + 232 * v32;
														if (*(int32_t *)(v190 + 152) >= 64) {
															// 0x33038
															if (*(char *)(*(int32_t *)(v190 + 228) + 122) % 2 != 0) {
																// 0x33048
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31;
																*(int32_t *)g29 = v12;
																// branch -> 0x33054
															}
														}
													}
												}
											}
											// 0x33054
											v191 = v20 + v22;
											v242 = *(int16_t *)(v21 + v191 + 226);
											result3 = v242;
											if (v242 != 0) {
												// 0x33068
												v192 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v192 + 113), 0, 25, 25) != 0) {
													// 0x33084
													v78 = result3;
													v31 = (0x10000 * v78 < 1 ? -v78 : v78) - 1;
													v12 = v31;
													if (v31 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x330a8
														v193 = g25 + 232 * v31;
														if (*(int32_t *)(v193 + 152) >= 64) {
															// 0x330bc
															v271 = (int32_t) * (char *)(*(int32_t *)(v193 + 228) + 122);
															if (__asm_rlwinm_(v271, 0, 30, 30) != 0) {
																// 0x330cc
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31 + 1;
																*(int32_t *)g29 = v12;
																// branch -> 0x330e0
															}
														}
													}
												}
											}
											// 0x330e0
											v79 = g29;
											v139 = (int32_t *)v79;
											v194 = *v139;
											v80 = v79;
											if (v194 != -1) {
												// 0x330ec
												if (*(int32_t *)(g25 + 232 * v194 + 160) % 2 != 0) {
													// 0x33100
													*v139 = -1;
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = g31;
													v80 = g29;
													// branch -> 0x33110
												} else {
													v80 = v79;
												}
											}
											// 0x33110
											v195 = *(int32_t *)v80;
											if (v195 != -1) {
												// 0x3311c
												if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v195 + 160), 0, 26, 26) != 0) {
													// 0x33130
													*(int32_t *)g29 = -1;
													// branch -> 0x33138
												}
											}
											// 0x33138
											if (*(int32_t *)g29 != -1) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x33144
										if (v16 == 0) {
											// 0x3314c
											v81 = g30;
											v82 = g31;
											v243 = *(int16_t *)(*(int32_t *)g22 + 224 * v81 + 2 * v82 + 450);
											result3 = v243;
											if (v243 != 0) {
												// 0x3316c
												v196 = *(int32_t *)g24 + 112 * v81;
												if (__asm_rlwinm_((int32_t) * (char *)(v196 + v82 + 225), 0, 25, 25) != 0) {
													// 0x33188
													v83 = result3;
													v30 = (0x10000 * v83 < 1 ? -v83 : v83) - 1;
													v12 = v30;
													v197 = 232 * v30 + g25;
													if (*(int32_t *)(v197 + 152) >= 64) {
														// 0x331b4
														v272 = (int32_t) * (char *)(*(int32_t *)(v197 + 228) + 122);
														if (__asm_rlwinm_(v272, 0, 29, 29) != 0) {
															// 0x331c4
															*(int32_t *)g35 = g30 + 2;
															*(int32_t *)g36 = g31 + 1;
															*(int32_t *)g29 = v12;
															// branch -> 0x331d8
														}
													}
												}
											}
										}
										// 0x331d8
										if (v16 != 0) {
											// 0x331e0
											v84 = g30;
											v85 = g31;
											v244 = *(int16_t *)(*(int32_t *)g22 + 224 * v84 + 2 * v85 + 228);
											result3 = v244;
											if (v244 != 0) {
												// 0x33200
												v198 = *(int32_t *)g24 + 112 * v84;
												if (__asm_rlwinm_((int32_t) * (char *)(v198 + v85 + 114), 0, 25, 25) != 0) {
													// 0x3321c
													v86 = result3;
													v29 = (0x10000 * v86 < 1 ? -v86 : v86) - 1;
													v12 = v29;
													v199 = 232 * v29 + g25;
													if (*(int32_t *)(v199 + 152) >= 64) {
														// 0x33248
														v273 = (int32_t) * (char *)(*(int32_t *)(v199 + 228) + 122);
														if (__asm_rlwinm_(v273, 0, 29, 29) != 0) {
															// 0x33258
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31 + 2;
															*(int32_t *)g29 = v12;
															// branch -> 0x3326c
														}
													}
												}
											}
										}
										// 0x3326c
										v87 = g30;
										v140 = 224 * v87;
										v20 = v140;
										v200 = *(int32_t *)g22;
										v22 = v200;
										v88 = g31;
										v141 = 2 * v88;
										v21 = v141;
										v245 = *(int16_t *)(v141 + v200 + v140 + 452);
										result3 = v245;
										if (v245 != 0) {
											// 0x3328c
											v201 = *(int32_t *)g24 + 112 * v87;
											if (__asm_rlwinm_((int32_t) * (char *)(v201 + v88 + 226), 0, 25, 25) != 0) {
												// 0x332a8
												v89 = result3;
												v28 = (0x10000 * v89 < 1 ? -v89 : v89) - 1;
												v12 = v28;
												v202 = 232 * v28 + g25;
												if (*(int32_t *)(v202 + 152) >= 64) {
													// 0x332d4
													v274 = (int32_t) * (char *)(*(int32_t *)(v202 + 228) + 122);
													if (__asm_rlwinm_(v274, 0, 29, 29) != 0) {
														// 0x332e4
														*(int32_t *)g35 = g30 + 2;
														*(int32_t *)g36 = g31 + 2;
														*(int32_t *)g29 = v12;
														// branch -> 0x332f8
													}
												}
											}
										}
										// 0x332f8
										if (v16 == 0) {
											// 0x33300
											v203 = v20 + v22;
											v246 = *(int16_t *)(v21 + v203 + 224);
											result3 = v246;
											if (v246 != 0) {
												// 0x33314
												v204 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v204 + 112), 0, 25, 25) != 0) {
													// 0x33330
													v90 = result3;
													v27 = (0x10000 * v90 < 1 ? -v90 : v90) - 1;
													v12 = v27;
													v205 = 232 * v27 + g25;
													if (*(int32_t *)(v205 + 152) >= 64) {
														// 0x3335c
														v275 = (int32_t) * (char *)(*(int32_t *)(v205 + 228) + 122);
														if (__asm_rlwinm_(v275, 0, 30, 30) != 0) {
															// 0x3336c
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31;
															*(int32_t *)g29 = v12;
															// branch -> 0x3337c
														}
													}
												}
											}
										}
										// 0x3337c
										if (v16 != 0) {
											// 0x33384
											v206 = v20 + v22;
											v247 = *(int16_t *)(v21 + v206 + 2);
											result3 = v247;
											if (v247 != 0) {
												// 0x33398
												v207 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v207 + 1), 0, 25, 25) != 0) {
													// 0x333b4
													v91 = result3;
													v26 = (0x10000 * v91 < 1 ? -v91 : v91) - 1;
													v12 = v26;
													v208 = 232 * v26 + g25;
													if (*(int32_t *)(v208 + 152) >= 64) {
														// 0x333e0
														v276 = (int32_t) * (char *)(*(int32_t *)(v208 + 228) + 122);
														if (__asm_rlwinm_(v276, 0, 30, 30) != 0) {
															// 0x333f0
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31 + 1;
															*(int32_t *)g29 = v12;
															// branch -> 0x33400
														}
													}
												}
											}
										}
										// 0x33400
										v277 = *(int16_t *)(v22 + v21 + v20);
										result3 = v277;
										if (v277 != 0) {
											// 0x33410
											v297 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
											if (__asm_rlwinm_(v297, 0, 25, 25) != 0) {
												// 0x33428
												v92 = result3;
												v45 = (0x10000 * v92 < 1 ? -v92 : v92) - 1;
												v12 = v45;
												v209 = 232 * v45 + g25;
												if (*(int32_t *)(v209 + 152) >= 64) {
													// 0x33454
													if (*(char *)(*(int32_t *)(v209 + 228) + 122) % 2 != 0) {
														// 0x33464
														*(int32_t *)g35 = g30;
														*(int32_t *)g36 = g31;
														*(int32_t *)g29 = v12;
														// branch -> 0x33470
													}
												}
											}
										}
										// 0x33470
										v210 = v20 + v22;
										v248 = *(int16_t *)(v21 + v210 + 226);
										result3 = v248;
										if (v248 != 0) {
											// 0x33484
											v211 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v211 + 113), 0, 25, 25) != 0) {
												// 0x334a0
												v93 = result3;
												v44 = (0x10000 * v93 < 1 ? -v93 : v93) - 1;
												v12 = v44;
												v212 = 232 * v44 + g25;
												if (*(int32_t *)(v212 + 152) >= 64) {
													// 0x334cc
													v278 = (int32_t) * (char *)(*(int32_t *)(v212 + 228) + 122);
													if (__asm_rlwinm_(v278, 0, 30, 30) != 0) {
														// 0x334dc
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = g31 + 1;
														*(int32_t *)g29 = v12;
														// branch -> 0x334f0
													}
												}
											}
										}
										// 0x334f0
										v94 = g29;
										v142 = (int32_t *)v94;
										v213 = *v142;
										v95 = v94;
										if (v213 != -1) {
											// 0x334fc
											if (*(int32_t *)(g25 + 232 * v213 + 160) % 2 != 0) {
												// 0x33510
												*v142 = -1;
												*(int32_t *)g35 = g30;
												*(int32_t *)g36 = g31;
												v95 = g29;
												// branch -> 0x33520
											} else {
												v95 = v94;
											}
										}
										// 0x33520
										v214 = *(int32_t *)v95;
										if (v214 != -1) {
											// 0x3352c
											if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v214 + 160), 0, 26, 26) != 0) {
												// 0x33540
												*(int32_t *)g29 = -1;
												// branch -> 0x33640
											}
										}
									}
									// 0x33640
									v216 = *(int32_t *)g29;
									v3 = v216;
									if (v216 == -1) {
										// 0x3364c
										v101 = v16;
										v103 = v101;
										if (v101 == 0) {
											// 0x33654
											v102 = g30;
											v252 = *(char *)(g31 + *(int32_t *)v6 + 112 * v102 + 112);
											v283 = v252;
											if (v252 != 0) {
												// 0x33670
												if (0x1000000 * v283 < 0) {
													// 0x33680
													v43 = 0x1000000 * (-1 - v283) / 0x1000000;
													// branch -> 0x3368c
												} else {
													// 0x33678
													v43 = v283 - 1;
													// branch -> 0x3368c
												}
												// 0x3368c
												v12 = v43;
												v217 = 0x1000000 * v43 / 0x1000000;
												if (v217 != v175) {
													// 0x33698
													if (*(int32_t *)(g32 + 0x55ec * v217 + 404) != 0) {
														// 0x336ac
														*(int32_t *)g35 = v102 + 1;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)v12;
														v103 = v16;
														// branch -> 0x336bc
													} else {
														v103 = 0;
													}
												} else {
													v103 = 0;
												}
											} else {
												v103 = 0;
											}
										}
										// 0x336bc
										if (v103 != 0) {
											// 0x336c4
											v104 = g30;
											v253 = *(char *)(g31 + *(int32_t *)v6 + 112 * v104 + 1);
											v284 = v253;
											if (v253 != 0) {
												// 0x336e0
												if (0x1000000 * v284 < 0) {
													// 0x336f0
													v42 = 0x1000000 * (-1 - v284) / 0x1000000;
													// branch -> 0x336fc
												} else {
													// 0x336e8
													v42 = v284 - 1;
													// branch -> 0x336fc
												}
												// 0x336fc
												v12 = v42;
												v218 = 0x1000000 * v42 / 0x1000000;
												if (v218 != v175) {
													// 0x33708
													if (*(int32_t *)(g32 + 0x55ec * v218 + 404) != 0) {
														// 0x3371c
														*(int32_t *)g35 = v104;
														*(int32_t *)g36 = g31 + 1;
														*(char *)g33 = (char)v12;
														// branch -> 0x3372c
													}
												}
											}
										}
										// 0x3372c
										v105 = g30;
										v148 = 112 * v105;
										v15 = v148;
										v219 = *(int32_t *)v6;
										v7 = v219;
										v149 = g31;
										v285 = *(char *)(v149 + v148 + v219);
										v299 = v285;
										v150 = v149;
										v106 = v148;
										if (v285 != 0) {
											// 0x33744
											if (0x1000000 * v299 < 0) {
												// 0x33754
												v41 = 0x1000000 * (-1 - v299) / 0x1000000;
												// branch -> 0x33760
											} else {
												// 0x3374c
												v41 = v299 - 1;
												// branch -> 0x33760
											}
											// 0x33760
											result3 = v41;
											if (0x1000000 * v41 / 0x1000000 != v175) {
												// 0x3376c
												*(int32_t *)g35 = v105;
												*(int32_t *)g36 = g31;
												*(char *)g33 = (char)result3;
												v150 = g31;
												v106 = v15;
												// branch -> 0x33778
											} else {
												v150 = v149;
												v106 = v148;
											}
										}
										// 0x33778
										v220 = *(int32_t *)g24;
										v14 = v220;
										if (__asm_rlwinm_((int32_t) * (char *)(v220 + v106 + v150), 0, 29, 29) != 0) {
											// 0x3378c
											v107 = g32;
											v254 = *(int32_t *)(v107 + 56);
											v108 = g30;
											v110 = v108;
											v109 = v107;
											if (v108 == v254) {
												// 0x3379c
												if (g31 == *(int32_t *)(v107 + 60)) {
													// 0x337a8
													if (v175 != 0) {
														// 0x337b0
														*(int32_t *)g35 = v254;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)0;
														v110 = g30;
														v109 = g32;
														// branch -> 0x337c0
													} else {
														v110 = v254;
														v109 = v107;
													}
												} else {
													v110 = v254;
													v109 = v107;
												}
											}
											// 0x337c0
											v151 = v109 + 0x55ec;
											result3 = v151;
											v112 = v110;
											v111 = v151;
											if (v110 == *(int32_t *)(v109 + 0x5624)) {
												// 0x337d4
												if (g31 == *(int32_t *)(v109 + 0x5628)) {
													// 0x337e0
													if (v175 != 1) {
														// 0x337e8
														*(int32_t *)g35 = v110;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)1;
														v112 = g30;
														v111 = result3;
														// branch -> 0x337f8
													} else {
														v112 = v110;
														v111 = v151;
													}
												} else {
													v112 = v110;
													v111 = v151;
												}
											}
											// 0x337f8
											v152 = v111 + 0x55ec;
											result3 = v152;
											v114 = v112;
											v113 = v152;
											if (v112 == *(int32_t *)(v111 + 0x5624)) {
												// 0x3380c
												if (g31 == *(int32_t *)(v111 + 0x5628)) {
													// 0x33818
													if (v175 != 2) {
														// 0x33820
														*(int32_t *)g35 = v112;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)2;
														v114 = g30;
														v113 = result3;
														// branch -> 0x33830
													} else {
														v114 = v112;
														v113 = v152;
													}
												} else {
													v114 = v112;
													v113 = v152;
												}
											}
											// 0x33830
											if (v114 == *(int32_t *)(v113 + 0x5624)) {
												// 0x33844
												if (g31 == *(int32_t *)(v113 + 0x5628)) {
													// 0x33850
													if (v175 != 3) {
														// 0x33858
														*(int32_t *)g35 = v114;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)3;
														// branch -> 0x33868
													}
												}
											}
										}
										// 0x33868
										if (v176 == 8) {
											// 0x33870
											v13 = -1;
											// branch -> 0x33874
											while (true) {
												// 0x33874
												v221 = g30 - 1;
												v19 = v221;
												v11 = 3;
												v222 = g31 + 112 * v221 - 1 + v14;
												v22 = v222;
												v23 = -1;
												v115 = v222;
												// branch -> 0x33894
												goto lab_0x33894_9;
											}
										}
										// 0x33998
										v153 = g31;
										v255 = *(char *)(v153 + v15 + v7 + 113);
										v286 = v255;
										if (v255 != 0) {
											// 0x339ac
											if (0x1000000 * v286 < 0) {
												// 0x339bc
												v40 = 0x1000000 * (-1 - v286) / 0x1000000;
												// branch -> 0x339c8
											} else {
												// 0x339b4
												v40 = v286 - 1;
												// branch -> 0x339c8
											}
											// 0x339c8
											result3 = v40;
											v223 = 0x1000000 * v40 / 0x1000000;
											if (v223 != v175) {
												// 0x339d4
												if (*(int32_t *)(g32 + 0x55ec * v223 + 404) != 0) {
													// 0x339e8
													*(int32_t *)g35 = g30 + 1;
													*(int32_t *)g36 = v153 + 1;
													*(char *)g33 = (char)result3;
													// branch -> 0x339fc
												}
											}
										}
									}
									// 0x339fc
									if (v3 == -1) {
										// 0x33a04
										if (*(char *)g33 == -1) {
											// 0x33a14
											v116 = v16;
											v118 = v116;
											if (v116 == 0) {
												// 0x33a1c
												v117 = g30;
												v256 = *(char *)(g31 + *(int32_t *)g16 + 112 * v117 + 112);
												v287 = v256;
												if (v256 != 0) {
													// 0x33a38
													if (0x1000000 * v287 < 0) {
														// 0x33a48
														v39 = 0x1000000 * (-1 - v287) / 0x1000000;
														// branch -> 0x33a54
													} else {
														// 0x33a40
														v39 = v287 - 1;
														// branch -> 0x33a54
													}
													// 0x33a54
													v12 = v39;
													if (*(char *)(120 * 0x1000000 * v39 / 0x1000000 + v5 + 64) >= 2) {
														// 0x33a70
														*(int32_t *)g35 = v117 + 1;
														*(int32_t *)g36 = g31;
														*(char *)g20 = (char)v12;
														v118 = v16;
														// branch -> 0x33a80
													} else {
														v118 = 0;
													}
												} else {
													v118 = 0;
												}
											}
											// 0x33a80
											if (v118 != 0) {
												// 0x33a88
												v119 = g30;
												v257 = *(char *)(g31 + *(int32_t *)g16 + 112 * v119 + 1);
												v288 = v257;
												if (v257 != 0) {
													// 0x33aa4
													if (0x1000000 * v288 < 0) {
														// 0x33ab4
														v36 = 0x1000000 * (-1 - v288) / 0x1000000;
														// branch -> 0x33ac0
													} else {
														// 0x33aac
														v36 = v288 - 1;
														// branch -> 0x33ac0
													}
													// 0x33ac0
													v12 = v36;
													if (*(char *)(120 * 0x1000000 * v36 / 0x1000000 + v5 + 64) >= 2) {
														// 0x33adc
														*(int32_t *)g35 = v119;
														*(int32_t *)g36 = g31 + 1;
														*(char *)g20 = (char)v12;
														// branch -> 0x33aec
													}
												}
											}
											// 0x33aec
											v120 = g30;
											v154 = 112 * v120;
											v12 = v154;
											v224 = *(int32_t *)g16;
											result3 = v224;
											v155 = g31;
											v289 = *(char *)(v155 + v154 + v224);
											v300 = v289;
											v122 = v155;
											v156 = v154;
											v121 = v224;
											if (v289 != 0) {
												// 0x33b04
												if (0x1000000 * v300 < 0) {
													// 0x33b14
													v25 = 0x1000000 * (-1 - v300) / 0x1000000;
													// branch -> 0x33b20
												} else {
													// 0x33b0c
													v25 = v300 - 1;
													// branch -> 0x33b20
												}
												// 0x33b20
												v19 = v25;
												v258 = *(char *)(120 * 0x1000000 * v25 / 0x1000000 + v5 + 64);
												if (v258 != 1) {
													// 0x33b3c
													if (v258 != 3) {
														v122 = v155;
														// 0x33b50
														v259 = *(char *)(v224 + v154 + v122 + 113);
														v290 = v259;
														if (v259 != 0) {
															// 0x33b64
															if (0x1000000 * v290 < 0) {
																// 0x33b74
																v24 = 0x1000000 * (-1 - v290) / 0x1000000;
																// branch -> 0x33b80
															} else {
																// 0x33b6c
																v24 = v290 - 1;
																// branch -> 0x33b80
															}
															// 0x33b80
															v12 = v24;
															if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
																// 0x33b9c
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = v122 + 1;
																*(char *)g20 = (char)v12;
																// branch -> 0x33bb0
															}
														}
														// 0x33bb0
														if (*(char *)g33 == -1) {
															// 0x33bc0
															if (*(char *)g20 == -1) {
																// 0x33bd0
																if (v3 == -1) {
																	// 0x33bd8
																	v123 = v16;
																	v125 = v123;
																	if (v123 == 0) {
																		// 0x33be0
																		v260 = *(int32_t *)(g23 - 0x768c);
																		v124 = g30;
																		v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																		v291 = v261;
																		if (v261 >= 1) {
																			// 0x33c00
																			v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
																			v12 = v225;
																			if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																				// 0x33c24
																				*(int32_t *)g35 = v124 + 1;
																				*(int32_t *)g36 = g31;
																				*(char *)g21 = (char)v12;
																				v125 = v16;
																				// branch -> 0x33c34
																			} else {
																				v125 = 0;
																			}
																		} else {
																			v125 = 0;
																		}
																	}
																	// 0x33c34
																	if (v125 != 0) {
																		// 0x33c3c
																		v262 = *(int32_t *)(g23 - 0x768c);
																		v126 = g30;
																		v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																		v292 = v263;
																		if (v263 >= 1) {
																			// 0x33c5c
																			v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
																			v12 = v226;
																			if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																				// 0x33c80
																				*(int32_t *)g35 = v126;
																				*(int32_t *)g36 = g31 + 1;
																				*(char *)g21 = (char)v12;
																				// branch -> 0x33c90
																			}
																		}
																	}
																	// 0x33c90
																	v127 = g30;
																	v157 = 112 * v127;
																	v20 = v157;
																	v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
																	result3 = v227;
																	v158 = g31;
																	v293 = *(char *)(v158 + v157 + v227);
																	v301 = v293;
																	v129 = v158;
																	v160 = v157;
																	v128 = v227;
																	if (v293 >= 1) {
																		// 0x33cac
																		v159 = v4 + 48;
																		v19 = v159;
																		v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
																		v18 = v228;
																		v294 = *(char *)(v159 + 368 * v228);
																		if (v294 != 1) {
																			// 0x33cd0
																			if (v294 != 3) {
																				v129 = v158;
																				// 0x33ce4
																				v264 = *(char *)(v227 + v157 + v129 + 113);
																				v295 = v264;
																				if (v264 >= 1) {
																					// 0x33cf8
																					v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
																					v12 = v229;
																					if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																						// 0x33d1c
																						v161 = g30 + 1;
																						v18 = v161;
																						*(int32_t *)g35 = v161;
																						*(int32_t *)g36 = v129 + 1;
																						*(char *)g21 = (char)v12;
																						// branch -> 0x33d30
																					}
																				}
																				// 0x33d30
																				if (*(char *)g21 == -1) {
																					// 0x33d40
																					*(int32_t *)g35 = g30;
																					*(int32_t *)g36 = g31;
																					v130 = function_c824c();
																					g34 = v130;
																					v162 = function_3257c(v130);
																					g34 = v162;
																					function_32720(v162);
																					// branch -> 0x33d54
																				}
																				// 0x33d54
																				if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
																					// 0x33d64
																					v12 = -1;
																					*(char *)g20 = -1;
																					*(int32_t *)g29 = v12;
																					*(char *)g21 = (char)v12;
																					*(int32_t *)g35 = g30;
																					*(int32_t *)g36 = g31;
																					// branch -> 0x33d7c
																				}
																				// 0x33d7c
																				v230 = *(int32_t *)g29;
																				if (v230 == -1) {
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				}
																				// 0x33d88
																				result5 = g25 + 232 * v230;
																				result3 = result5;
																				if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																					// 0x33d9c
																					*(int32_t *)g29 = -1;
																					// branch -> 0x33da4
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			}
																		}
																		// 0x33cd8
																		*(int32_t *)g35 = v127;
																		*(int32_t *)g36 = g31;
																		*(char *)g21 = (char)v18;
																		v129 = g31;
																		v160 = v20;
																		v128 = result3;
																		// branch -> 0x33ce4
																	}
																	// 0x33ce4
																	v264 = *(char *)(v128 + v160 + v129 + 113);
																	v295 = v264;
																	if (v264 >= 1) {
																		// 0x33cf8
																		v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
																		v12 = v229;
																		if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																			// 0x33d1c
																			*(int32_t *)g35 = g30 + 1;
																			*(int32_t *)g36 = v129 + 1;
																			*(char *)g21 = (char)v12;
																			// branch -> 0x33d30
																		}
																	}
																	// 0x33d30
																	if (*(char *)g21 == -1) {
																		// 0x33d40
																		*(int32_t *)g35 = g30;
																		*(int32_t *)g36 = g31;
																		v130 = function_c824c();
																		g34 = v130;
																		v162 = function_3257c(v130);
																		g34 = v162;
																		function_32720(v162);
																		// branch -> 0x33d54
																	}
																}
															}
														}
														// 0x33d54
														if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
															// 0x33d64
															v12 = -1;
															*(char *)g20 = -1;
															*(int32_t *)g29 = v12;
															*(char *)g21 = (char)v12;
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31;
															// branch -> 0x33d7c
														}
														// 0x33d7c
														v230 = *(int32_t *)g29;
														if (v230 == -1) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
														// 0x33d88
														result5 = g25 + 232 * v230;
														result3 = result5;
														v163 = __asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26);
														v12 = v163;
														if (v163 != 0) {
															// 0x33d9c
															v12 = -1;
															*(int32_t *)g29 = -1;
															// branch -> 0x33da4
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x33b44
												*(int32_t *)g35 = v120;
												*(int32_t *)g36 = g31;
												*(char *)g20 = (char)v19;
												v122 = g31;
												v156 = v12;
												v121 = result3;
												// branch -> 0x33b50
											}
											// 0x33b50
											v259 = *(char *)(v121 + v156 + v122 + 113);
											v290 = v259;
											if (v259 != 0) {
												// 0x33b64
												if (0x1000000 * v290 < 0) {
													// 0x33b74
													v24 = 0x1000000 * (-1 - v290) / 0x1000000;
													// branch -> 0x33b80
												} else {
													// 0x33b6c
													v24 = v290 - 1;
													// branch -> 0x33b80
												}
												// 0x33b80
												v12 = v24;
												if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
													// 0x33b9c
													*(int32_t *)g35 = g30 + 1;
													*(int32_t *)g36 = v122 + 1;
													*(char *)g20 = (char)v12;
													// branch -> 0x33bb0
												}
											}
										}
									}
									// 0x33bb0
									if (*(char *)g33 == -1) {
										// 0x33bc0
										if (*(char *)g20 == -1) {
											// 0x33bd0
											if (v3 == -1) {
												// 0x33bd8
												v123 = v16;
												v125 = v123;
												if (v123 == 0) {
													// 0x33be0
													v260 = *(int32_t *)(g23 - 0x768c);
													v124 = g30;
													v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
													v291 = v261;
													if (v261 >= 1) {
														// 0x33c00
														v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
														v12 = v225;
														if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
															// 0x33c24
															*(int32_t *)g35 = v124 + 1;
															*(int32_t *)g36 = g31;
															*(char *)g21 = (char)v12;
															v125 = v16;
															// branch -> 0x33c34
														} else {
															v125 = 0;
														}
													} else {
														v125 = 0;
													}
												}
												// 0x33c34
												if (v125 != 0) {
													// 0x33c3c
													v262 = *(int32_t *)(g23 - 0x768c);
													v126 = g30;
													v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
													v292 = v263;
													if (v263 >= 1) {
														// 0x33c5c
														v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
														v12 = v226;
														if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
															// 0x33c80
															*(int32_t *)g35 = v126;
															*(int32_t *)g36 = g31 + 1;
															*(char *)g21 = (char)v12;
															// branch -> 0x33c90
														}
													}
												}
												// 0x33c90
												v127 = g30;
												v157 = 112 * v127;
												v20 = v157;
												v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
												result3 = v227;
												v158 = g31;
												v293 = *(char *)(v158 + v157 + v227);
												v301 = v293;
												v129 = v158;
												v160 = v157;
												v128 = v227;
												if (v293 >= 1) {
													// 0x33cac
													v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
													v18 = v228;
													v294 = *(char *)(v4 + 48 + 368 * v228);
													if (v294 != 1) {
														// 0x33cd0
														if (v294 != 3) {
															v129 = v158;
															// 0x33ce4
															v264 = *(char *)(v227 + v157 + v129 + 113);
															v295 = v264;
															if (v264 >= 1) {
																// 0x33cf8
																v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
																v12 = v229;
																if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																	// 0x33d1c
																	v161 = g30 + 1;
																	v18 = v161;
																	*(int32_t *)g35 = v161;
																	*(int32_t *)g36 = v129 + 1;
																	*(char *)g21 = (char)v12;
																	// branch -> 0x33d30
																}
															}
															// 0x33d30
															if (*(char *)g21 == -1) {
																// 0x33d40
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31;
																v130 = function_c824c();
																g34 = v130;
																v162 = function_3257c(v130);
																g34 = v162;
																function_32720(v162);
																// branch -> 0x33d54
															}
															// 0x33d54
															if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
																// 0x33d64
																v12 = -1;
																*(char *)g20 = -1;
																*(int32_t *)g29 = v12;
																*(char *)g21 = (char)v12;
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31;
																// branch -> 0x33d7c
															}
															// 0x33d7c
															v230 = *(int32_t *)g29;
															if (v230 == -1) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
															// 0x33d88
															result5 = g25 + 232 * v230;
															result3 = result5;
															if (__asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26) != 0) {
																// 0x33d9c
																*(int32_t *)g29 = -1;
																// branch -> 0x33da4
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x33cd8
													*(int32_t *)g35 = v127;
													*(int32_t *)g36 = g31;
													*(char *)g21 = (char)v18;
													v129 = g31;
													v160 = v20;
													v128 = result3;
													// branch -> 0x33ce4
												}
												// 0x33ce4
												v264 = *(char *)(v128 + v160 + v129 + 113);
												v295 = v264;
												if (v264 >= 1) {
													// 0x33cf8
													v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
													v12 = v229;
													if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
														// 0x33d1c
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = v129 + 1;
														*(char *)g21 = (char)v12;
														// branch -> 0x33d30
													}
												}
												// 0x33d30
												if (*(char *)g21 == -1) {
													// 0x33d40
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = g31;
													v130 = function_c824c();
													g34 = v130;
													v162 = function_3257c(v130);
													g34 = v162;
													function_32720(v162);
													// branch -> 0x33d54
												}
											}
										}
									}
									// 0x33d54
									if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
										// 0x33d64
										v12 = -1;
										*(char *)g20 = -1;
										*(int32_t *)g29 = v12;
										*(char *)g21 = (char)v12;
										*(int32_t *)g35 = g30;
										*(int32_t *)g36 = g31;
										// branch -> 0x33d7c
									}
									// 0x33d7c
									v230 = *(int32_t *)g29;
									if (v230 == -1) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0x33d88
									if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v230 + 160), 0, 26, 26) != 0) {
										// 0x33d9c
										*(int32_t *)g29 = -1;
										// branch -> 0x33da4
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x32cb8
							if (*(int32_t *)v3 >= 320) {
								// 0x32cc4
								if (*(char *)*(int32_t *)(v65 - 0x7794) == 0) {
									// 0x3354c
									v96 = v16;
									v98 = v96;
									if (v96 == 0) {
										// 0x33554
										v97 = g30;
										v249 = *(int16_t *)(*(int32_t *)g22 + 224 * v97 + 2 * g31 + 224);
										v279 = v249;
										if (v249 >= 1) {
											// 0x33574
											*(int32_t *)g29 = v279 - 1;
											*(int32_t *)g35 = v97 + 1;
											*(int32_t *)g36 = g31;
											v98 = v16;
											// branch -> 0x33588
										} else {
											v98 = 0;
										}
									}
									// 0x33588
									if (v98 != 0) {
										// 0x33590
										v99 = g31;
										v250 = *(int16_t *)(*(int32_t *)g22 + 224 * g30 + 2 * v99 + 2);
										v280 = v250;
										if (v250 >= 1) {
											// 0x335b0
											*(int32_t *)g29 = v280 - 1;
											*(int32_t *)g35 = g30;
											*(int32_t *)g36 = v99 + 1;
											// branch -> 0x335c4
										}
									}
									// 0x335c4
									v143 = 224 * g30;
									result3 = v143;
									v215 = *(int32_t *)g22;
									v19 = v215;
									v144 = 2 * g31;
									v12 = v144;
									v281 = *(int16_t *)(v144 + v143 + v215);
									v298 = v281;
									v146 = v144;
									v145 = v143;
									v100 = v215;
									if (v281 >= 1) {
										// 0x335e0
										*(int32_t *)g29 = v298 - 1;
										*(int32_t *)g35 = g30;
										*(int32_t *)g36 = g31;
										v146 = v12;
										v145 = result3;
										v100 = v19;
										// branch -> 0x335f0
									}
									// 0x335f0
									v251 = *(int16_t *)(v145 + v146 + v100 + 226);
									v282 = v251;
									if (v251 >= 1) {
										// 0x33604
										*(int32_t *)g29 = v282 - 1;
										*(int32_t *)g35 = g30 + 1;
										*(int32_t *)g36 = g31 + 1;
										// branch -> 0x3361c
									}
									// 0x3361c
									v147 = (int32_t *)g29;
									if (*(int32_t *)(*(int32_t *)(g23 - 0x7758) + 268 * *v147 + 84) == 0) {
										// 0x33638
										*v147 = -1;
										// branch -> 0x33640
									}
								} else {
									// 0x32cd4
									if (*(int32_t *)(v65 - 0x4f84) != -1) {
										// 0x32ce0
										if (v16 == 0) {
											// 0x32ce8
											v66 = g30;
											v67 = g31;
											v237 = *(int16_t *)(*(int32_t *)g22 + 224 * v66 + 2 * v67 + 450);
											result3 = v237;
											if (v237 != 0) {
												// 0x32d08
												v177 = *(int32_t *)g24 + 112 * v66;
												if (__asm_rlwinm_((int32_t) * (char *)(v177 + v67 + 225), 0, 25, 25) != 0) {
													// 0x32d24
													v68 = result3;
													v38 = (0x10000 * v68 < 1 ? -v68 : v68) - 1;
													v12 = v38;
													if (v38 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32d48
														v178 = g25 + 232 * v38;
														if (*(int32_t *)(v178 + 152) >= 64) {
															// 0x32d5c
															v265 = (int32_t) * (char *)(*(int32_t *)(v178 + 228) + 122);
															if (__asm_rlwinm_(v265, 0, 29, 29) != 0) {
																// 0x32d6c
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31 + 2;
																*(int32_t *)g29 = v12;
																// branch -> 0x32d80
															}
														}
													}
												}
											}
										}
										// 0x32d80
										if (v16 != 0) {
											// 0x32d88
											v69 = g30;
											v70 = g31;
											v238 = *(int16_t *)(*(int32_t *)g22 + 224 * v69 + 2 * v70 + 228);
											result3 = v238;
											if (v238 != 0) {
												// 0x32da8
												v179 = *(int32_t *)g24 + 112 * v69;
												if (__asm_rlwinm_((int32_t) * (char *)(v179 + v70 + 114), 0, 25, 25) != 0) {
													// 0x32dc4
													v71 = result3;
													v37 = (0x10000 * v71 < 1 ? -v71 : v71) - 1;
													v12 = v37;
													if (v37 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32de8
														v180 = g25 + 232 * v37;
														if (*(int32_t *)(v180 + 152) >= 64) {
															// 0x32dfc
															v266 = (int32_t) * (char *)(*(int32_t *)(v180 + 228) + 122);
															if (__asm_rlwinm_(v266, 0, 29, 29) != 0) {
																// 0x32e0c
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31 + 2;
																*(int32_t *)g29 = v12;
																// branch -> 0x32e20
															}
														}
													}
												}
											}
										}
										// 0x32e20
										v72 = g30;
										v137 = 224 * v72;
										v20 = v137;
										v181 = *(int32_t *)g22;
										v22 = v181;
										v73 = g31;
										v138 = 2 * v73;
										v21 = v138;
										v239 = *(int16_t *)(v138 + v181 + v137 + 452);
										result3 = v239;
										if (v239 != 0) {
											// 0x32e40
											v182 = *(int32_t *)g24 + 112 * v72;
											if (__asm_rlwinm_((int32_t) * (char *)(v182 + v73 + 226), 0, 25, 25) != 0) {
												// 0x32e5c
												v74 = result3;
												v35 = (0x10000 * v74 < 1 ? -v74 : v74) - 1;
												v12 = v35;
												if (v35 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x32e80
													v183 = g25 + 232 * v35;
													if (*(int32_t *)(v183 + 152) >= 64) {
														// 0x32e94
														v267 = (int32_t) * (char *)(*(int32_t *)(v183 + 228) + 122);
														if (__asm_rlwinm_(v267, 0, 29, 29) != 0) {
															// 0x32ea4
															*(int32_t *)g35 = g30 + 2;
															*(int32_t *)g36 = g31 + 2;
															*(int32_t *)g29 = v12;
															// branch -> 0x32eb8
														}
													}
												}
											}
										}
										// 0x32eb8
										if (v16 == 0) {
											// 0x32ec0
											v184 = v20 + v22;
											v240 = *(int16_t *)(v21 + v184 + 224);
											result3 = v240;
											if (v240 != 0) {
												// 0x32ed4
												v185 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v185 + 112), 0, 25, 25) != 0) {
													// 0x32ef0
													v75 = result3;
													v34 = (0x10000 * v75 < 1 ? -v75 : v75) - 1;
													v12 = v34;
													if (v34 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32f14
														v186 = g25 + 232 * v34;
														if (*(int32_t *)(v186 + 152) >= 64) {
															// 0x32f28
															v268 = (int32_t) * (char *)(*(int32_t *)(v186 + 228) + 122);
															if (__asm_rlwinm_(v268, 0, 30, 30) != 0) {
																// 0x32f38
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31;
																*(int32_t *)g29 = v12;
																// branch -> 0x32f48
															}
														}
													}
												}
											}
										}
										// 0x32f48
										if (v16 != 0) {
											// 0x32f50
											v187 = v20 + v22;
											v241 = *(int16_t *)(v21 + v187 + 2);
											result3 = v241;
											if (v241 != 0) {
												// 0x32f64
												v188 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v188 + 1), 0, 25, 25) != 0) {
													// 0x32f80
													v76 = result3;
													v33 = (0x10000 * v76 < 1 ? -v76 : v76) - 1;
													v12 = v33;
													if (v33 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32fa4
														v189 = g25 + 232 * v33;
														if (*(int32_t *)(v189 + 152) >= 64) {
															// 0x32fb8
															v269 = (int32_t) * (char *)(*(int32_t *)(v189 + 228) + 122);
															if (__asm_rlwinm_(v269, 0, 30, 30) != 0) {
																// 0x32fc8
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31 + 1;
																*(int32_t *)g29 = v12;
																// branch -> 0x32fd8
															}
														}
													}
												}
											}
										}
										// 0x32fd8
										v270 = *(int16_t *)(v22 + v21 + v20);
										result3 = v270;
										if (v270 != 0) {
											// 0x32fe8
											v296 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
											if (__asm_rlwinm_(v296, 0, 25, 25) != 0) {
												// 0x33000
												v77 = result3;
												v32 = (0x10000 * v77 < 1 ? -v77 : v77) - 1;
												v12 = v32;
												if (v32 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x33024
													v190 = g25 + 232 * v32;
													if (*(int32_t *)(v190 + 152) >= 64) {
														// 0x33038
														if (*(char *)(*(int32_t *)(v190 + 228) + 122) % 2 != 0) {
															// 0x33048
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31;
															*(int32_t *)g29 = v12;
															// branch -> 0x33054
														}
													}
												}
											}
										}
										// 0x33054
										v191 = v20 + v22;
										v242 = *(int16_t *)(v21 + v191 + 226);
										result3 = v242;
										if (v242 != 0) {
											// 0x33068
											v192 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v192 + 113), 0, 25, 25) != 0) {
												// 0x33084
												v78 = result3;
												v31 = (0x10000 * v78 < 1 ? -v78 : v78) - 1;
												v12 = v31;
												if (v31 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x330a8
													v193 = g25 + 232 * v31;
													if (*(int32_t *)(v193 + 152) >= 64) {
														// 0x330bc
														v271 = (int32_t) * (char *)(*(int32_t *)(v193 + 228) + 122);
														if (__asm_rlwinm_(v271, 0, 30, 30) != 0) {
															// 0x330cc
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31 + 1;
															*(int32_t *)g29 = v12;
															// branch -> 0x330e0
														}
													}
												}
											}
										}
										// 0x330e0
										v79 = g29;
										v139 = (int32_t *)v79;
										v194 = *v139;
										v80 = v79;
										if (v194 != -1) {
											// 0x330ec
											if (*(int32_t *)(g25 + 232 * v194 + 160) % 2 != 0) {
												// 0x33100
												*v139 = -1;
												*(int32_t *)g35 = g30;
												*(int32_t *)g36 = g31;
												v80 = g29;
												// branch -> 0x33110
											} else {
												v80 = v79;
											}
										}
										// 0x33110
										v195 = *(int32_t *)v80;
										if (v195 != -1) {
											// 0x3311c
											if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v195 + 160), 0, 26, 26) != 0) {
												// 0x33130
												*(int32_t *)g29 = -1;
												// branch -> 0x33138
											}
										}
										// 0x33138
										if (*(int32_t *)g29 != -1) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x33144
									if (v16 == 0) {
										// 0x3314c
										v81 = g30;
										v82 = g31;
										v243 = *(int16_t *)(*(int32_t *)g22 + 224 * v81 + 2 * v82 + 450);
										result3 = v243;
										if (v243 != 0) {
											// 0x3316c
											v196 = *(int32_t *)g24 + 112 * v81;
											if (__asm_rlwinm_((int32_t) * (char *)(v196 + v82 + 225), 0, 25, 25) != 0) {
												// 0x33188
												v83 = result3;
												v30 = (0x10000 * v83 < 1 ? -v83 : v83) - 1;
												v12 = v30;
												v197 = 232 * v30 + g25;
												if (*(int32_t *)(v197 + 152) >= 64) {
													// 0x331b4
													v272 = (int32_t) * (char *)(*(int32_t *)(v197 + 228) + 122);
													if (__asm_rlwinm_(v272, 0, 29, 29) != 0) {
														// 0x331c4
														*(int32_t *)g35 = g30 + 2;
														*(int32_t *)g36 = g31 + 1;
														*(int32_t *)g29 = v12;
														// branch -> 0x331d8
													}
												}
											}
										}
									}
									// 0x331d8
									if (v16 != 0) {
										// 0x331e0
										v84 = g30;
										v85 = g31;
										v244 = *(int16_t *)(*(int32_t *)g22 + 224 * v84 + 2 * v85 + 228);
										result3 = v244;
										if (v244 != 0) {
											// 0x33200
											v198 = *(int32_t *)g24 + 112 * v84;
											if (__asm_rlwinm_((int32_t) * (char *)(v198 + v85 + 114), 0, 25, 25) != 0) {
												// 0x3321c
												v86 = result3;
												v29 = (0x10000 * v86 < 1 ? -v86 : v86) - 1;
												v12 = v29;
												v199 = 232 * v29 + g25;
												if (*(int32_t *)(v199 + 152) >= 64) {
													// 0x33248
													v273 = (int32_t) * (char *)(*(int32_t *)(v199 + 228) + 122);
													if (__asm_rlwinm_(v273, 0, 29, 29) != 0) {
														// 0x33258
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = g31 + 2;
														*(int32_t *)g29 = v12;
														// branch -> 0x3326c
													}
												}
											}
										}
									}
									// 0x3326c
									v87 = g30;
									v140 = 224 * v87;
									v20 = v140;
									v200 = *(int32_t *)g22;
									v22 = v200;
									v88 = g31;
									v141 = 2 * v88;
									v21 = v141;
									v245 = *(int16_t *)(v141 + v200 + v140 + 452);
									result3 = v245;
									if (v245 != 0) {
										// 0x3328c
										v201 = *(int32_t *)g24 + 112 * v87;
										if (__asm_rlwinm_((int32_t) * (char *)(v201 + v88 + 226), 0, 25, 25) != 0) {
											// 0x332a8
											v89 = result3;
											v28 = (0x10000 * v89 < 1 ? -v89 : v89) - 1;
											v12 = v28;
											v202 = 232 * v28 + g25;
											if (*(int32_t *)(v202 + 152) >= 64) {
												// 0x332d4
												v274 = (int32_t) * (char *)(*(int32_t *)(v202 + 228) + 122);
												if (__asm_rlwinm_(v274, 0, 29, 29) != 0) {
													// 0x332e4
													*(int32_t *)g35 = g30 + 2;
													*(int32_t *)g36 = g31 + 2;
													*(int32_t *)g29 = v12;
													// branch -> 0x332f8
												}
											}
										}
									}
									// 0x332f8
									if (v16 == 0) {
										// 0x33300
										v203 = v20 + v22;
										v246 = *(int16_t *)(v21 + v203 + 224);
										result3 = v246;
										if (v246 != 0) {
											// 0x33314
											v204 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v204 + 112), 0, 25, 25) != 0) {
												// 0x33330
												v90 = result3;
												v27 = (0x10000 * v90 < 1 ? -v90 : v90) - 1;
												v12 = v27;
												v205 = 232 * v27 + g25;
												if (*(int32_t *)(v205 + 152) >= 64) {
													// 0x3335c
													v275 = (int32_t) * (char *)(*(int32_t *)(v205 + 228) + 122);
													if (__asm_rlwinm_(v275, 0, 30, 30) != 0) {
														// 0x3336c
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = g31;
														*(int32_t *)g29 = v12;
														// branch -> 0x3337c
													}
												}
											}
										}
									}
									// 0x3337c
									if (v16 != 0) {
										// 0x33384
										v206 = v20 + v22;
										v247 = *(int16_t *)(v21 + v206 + 2);
										result3 = v247;
										if (v247 != 0) {
											// 0x33398
											v207 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v207 + 1), 0, 25, 25) != 0) {
												// 0x333b4
												v91 = result3;
												v26 = (0x10000 * v91 < 1 ? -v91 : v91) - 1;
												v12 = v26;
												v208 = 232 * v26 + g25;
												if (*(int32_t *)(v208 + 152) >= 64) {
													// 0x333e0
													v276 = (int32_t) * (char *)(*(int32_t *)(v208 + 228) + 122);
													if (__asm_rlwinm_(v276, 0, 30, 30) != 0) {
														// 0x333f0
														*(int32_t *)g35 = g30;
														*(int32_t *)g36 = g31 + 1;
														*(int32_t *)g29 = v12;
														// branch -> 0x33400
													}
												}
											}
										}
									}
									// 0x33400
									v277 = *(int16_t *)(v22 + v21 + v20);
									result3 = v277;
									if (v277 != 0) {
										// 0x33410
										v297 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
										if (__asm_rlwinm_(v297, 0, 25, 25) != 0) {
											// 0x33428
											v92 = result3;
											v45 = (0x10000 * v92 < 1 ? -v92 : v92) - 1;
											v12 = v45;
											v209 = 232 * v45 + g25;
											if (*(int32_t *)(v209 + 152) >= 64) {
												// 0x33454
												if (*(char *)(*(int32_t *)(v209 + 228) + 122) % 2 != 0) {
													// 0x33464
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = g31;
													*(int32_t *)g29 = v12;
													// branch -> 0x33470
												}
											}
										}
									}
									// 0x33470
									v210 = v20 + v22;
									v248 = *(int16_t *)(v21 + v210 + 226);
									result3 = v248;
									if (v248 != 0) {
										// 0x33484
										v211 = *(int32_t *)g24 + 112 * g30;
										if (__asm_rlwinm_((int32_t) * (char *)(g31 + v211 + 113), 0, 25, 25) != 0) {
											// 0x334a0
											v93 = result3;
											v44 = (0x10000 * v93 < 1 ? -v93 : v93) - 1;
											v12 = v44;
											v212 = 232 * v44 + g25;
											if (*(int32_t *)(v212 + 152) >= 64) {
												// 0x334cc
												v278 = (int32_t) * (char *)(*(int32_t *)(v212 + 228) + 122);
												if (__asm_rlwinm_(v278, 0, 30, 30) != 0) {
													// 0x334dc
													*(int32_t *)g35 = g30 + 1;
													*(int32_t *)g36 = g31 + 1;
													*(int32_t *)g29 = v12;
													// branch -> 0x334f0
												}
											}
										}
									}
									// 0x334f0
									v94 = g29;
									v142 = (int32_t *)v94;
									v213 = *v142;
									v95 = v94;
									if (v213 != -1) {
										// 0x334fc
										if (*(int32_t *)(g25 + 232 * v213 + 160) % 2 != 0) {
											// 0x33510
											*v142 = -1;
											*(int32_t *)g35 = g30;
											*(int32_t *)g36 = g31;
											v95 = g29;
											// branch -> 0x33520
										} else {
											v95 = v94;
										}
									}
									// 0x33520
									v214 = *(int32_t *)v95;
									if (v214 != -1) {
										// 0x3352c
										if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v214 + 160), 0, 26, 26) != 0) {
											// 0x33540
											*(int32_t *)g29 = -1;
											// branch -> 0x33640
										}
									}
								}
								// 0x33640
								v216 = *(int32_t *)g29;
								v3 = v216;
								if (v216 == -1) {
									// 0x3364c
									v101 = v16;
									v103 = v101;
									if (v101 == 0) {
										// 0x33654
										v102 = g30;
										v252 = *(char *)(g31 + *(int32_t *)v6 + 112 * v102 + 112);
										v283 = v252;
										if (v252 != 0) {
											// 0x33670
											if (0x1000000 * v283 < 0) {
												// 0x33680
												v43 = 0x1000000 * (-1 - v283) / 0x1000000;
												// branch -> 0x3368c
											} else {
												// 0x33678
												v43 = v283 - 1;
												// branch -> 0x3368c
											}
											// 0x3368c
											v12 = v43;
											v217 = 0x1000000 * v43 / 0x1000000;
											if (v217 != v175) {
												// 0x33698
												if (*(int32_t *)(g32 + 0x55ec * v217 + 404) != 0) {
													// 0x336ac
													*(int32_t *)g35 = v102 + 1;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)v12;
													v103 = v16;
													// branch -> 0x336bc
												} else {
													v103 = 0;
												}
											} else {
												v103 = 0;
											}
										} else {
											v103 = 0;
										}
									}
									// 0x336bc
									if (v103 != 0) {
										// 0x336c4
										v104 = g30;
										v253 = *(char *)(g31 + *(int32_t *)v6 + 112 * v104 + 1);
										v284 = v253;
										if (v253 != 0) {
											// 0x336e0
											if (0x1000000 * v284 < 0) {
												// 0x336f0
												v42 = 0x1000000 * (-1 - v284) / 0x1000000;
												// branch -> 0x336fc
											} else {
												// 0x336e8
												v42 = v284 - 1;
												// branch -> 0x336fc
											}
											// 0x336fc
											v12 = v42;
											v218 = 0x1000000 * v42 / 0x1000000;
											if (v218 != v175) {
												// 0x33708
												if (*(int32_t *)(g32 + 0x55ec * v218 + 404) != 0) {
													// 0x3371c
													*(int32_t *)g35 = v104;
													*(int32_t *)g36 = g31 + 1;
													*(char *)g33 = (char)v12;
													// branch -> 0x3372c
												}
											}
										}
									}
									// 0x3372c
									v105 = g30;
									v148 = 112 * v105;
									v15 = v148;
									v219 = *(int32_t *)v6;
									v7 = v219;
									v149 = g31;
									v285 = *(char *)(v149 + v148 + v219);
									v299 = v285;
									v150 = v149;
									v106 = v148;
									if (v285 != 0) {
										// 0x33744
										if (0x1000000 * v299 < 0) {
											// 0x33754
											v41 = 0x1000000 * (-1 - v299) / 0x1000000;
											// branch -> 0x33760
										} else {
											// 0x3374c
											v41 = v299 - 1;
											// branch -> 0x33760
										}
										// 0x33760
										result3 = v41;
										if (0x1000000 * v41 / 0x1000000 != v175) {
											// 0x3376c
											*(int32_t *)g35 = v105;
											*(int32_t *)g36 = g31;
											*(char *)g33 = (char)result3;
											v150 = g31;
											v106 = v15;
											// branch -> 0x33778
										} else {
											v150 = v149;
											v106 = v148;
										}
									}
									// 0x33778
									v220 = *(int32_t *)g24;
									v14 = v220;
									if (__asm_rlwinm_((int32_t) * (char *)(v220 + v106 + v150), 0, 29, 29) != 0) {
										// 0x3378c
										v107 = g32;
										v254 = *(int32_t *)(v107 + 56);
										v108 = g30;
										v110 = v108;
										v109 = v107;
										if (v108 == v254) {
											// 0x3379c
											if (g31 == *(int32_t *)(v107 + 60)) {
												// 0x337a8
												if (v175 != 0) {
													// 0x337b0
													*(int32_t *)g35 = v254;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)0;
													v110 = g30;
													v109 = g32;
													// branch -> 0x337c0
												} else {
													v110 = v254;
													v109 = v107;
												}
											} else {
												v110 = v254;
												v109 = v107;
											}
										}
										// 0x337c0
										v151 = v109 + 0x55ec;
										result3 = v151;
										v112 = v110;
										v111 = v151;
										if (v110 == *(int32_t *)(v109 + 0x5624)) {
											// 0x337d4
											if (g31 == *(int32_t *)(v109 + 0x5628)) {
												// 0x337e0
												if (v175 != 1) {
													// 0x337e8
													*(int32_t *)g35 = v110;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)1;
													v112 = g30;
													v111 = result3;
													// branch -> 0x337f8
												} else {
													v112 = v110;
													v111 = v151;
												}
											} else {
												v112 = v110;
												v111 = v151;
											}
										}
										// 0x337f8
										v152 = v111 + 0x55ec;
										result3 = v152;
										v114 = v112;
										v113 = v152;
										if (v112 == *(int32_t *)(v111 + 0x5624)) {
											// 0x3380c
											if (g31 == *(int32_t *)(v111 + 0x5628)) {
												// 0x33818
												if (v175 != 2) {
													// 0x33820
													*(int32_t *)g35 = v112;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)2;
													v114 = g30;
													v113 = result3;
													// branch -> 0x33830
												} else {
													v114 = v112;
													v113 = v152;
												}
											} else {
												v114 = v112;
												v113 = v152;
											}
										}
										// 0x33830
										if (v114 == *(int32_t *)(v113 + 0x5624)) {
											// 0x33844
											if (g31 == *(int32_t *)(v113 + 0x5628)) {
												// 0x33850
												if (v175 != 3) {
													// 0x33858
													*(int32_t *)g35 = v114;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)3;
													// branch -> 0x33868
												}
											}
										}
									}
									// 0x33868
									if (v176 == 8) {
										// 0x33870
										v13 = -1;
										// branch -> 0x33874
										while (true) {
											// 0x33874
											v221 = g30 - 1;
											v19 = v221;
											v11 = 3;
											v222 = g31 + 112 * v221 - 1 + v14;
											v22 = v222;
											v23 = -1;
											v115 = v222;
											// branch -> 0x33894
											goto lab_0x33894_9;
										}
									}
									// 0x33998
									v153 = g31;
									v255 = *(char *)(v153 + v15 + v7 + 113);
									v286 = v255;
									if (v255 != 0) {
										// 0x339ac
										if (0x1000000 * v286 < 0) {
											// 0x339bc
											v40 = 0x1000000 * (-1 - v286) / 0x1000000;
											// branch -> 0x339c8
										} else {
											// 0x339b4
											v40 = v286 - 1;
											// branch -> 0x339c8
										}
										// 0x339c8
										result3 = v40;
										v223 = 0x1000000 * v40 / 0x1000000;
										if (v223 != v175) {
											// 0x339d4
											if (*(int32_t *)(g32 + 0x55ec * v223 + 404) != 0) {
												// 0x339e8
												*(int32_t *)g35 = g30 + 1;
												*(int32_t *)g36 = v153 + 1;
												*(char *)g33 = (char)result3;
												// branch -> 0x339fc
											}
										}
									}
								}
								// 0x339fc
								if (v3 == -1) {
									// 0x33a04
									if (*(char *)g33 == -1) {
										// 0x33a14
										v116 = v16;
										v118 = v116;
										if (v116 == 0) {
											// 0x33a1c
											v117 = g30;
											v256 = *(char *)(g31 + *(int32_t *)g16 + 112 * v117 + 112);
											v287 = v256;
											if (v256 != 0) {
												// 0x33a38
												if (0x1000000 * v287 < 0) {
													// 0x33a48
													v39 = 0x1000000 * (-1 - v287) / 0x1000000;
													// branch -> 0x33a54
												} else {
													// 0x33a40
													v39 = v287 - 1;
													// branch -> 0x33a54
												}
												// 0x33a54
												v12 = v39;
												if (*(char *)(120 * 0x1000000 * v39 / 0x1000000 + v5 + 64) >= 2) {
													// 0x33a70
													*(int32_t *)g35 = v117 + 1;
													*(int32_t *)g36 = g31;
													*(char *)g20 = (char)v12;
													v118 = v16;
													// branch -> 0x33a80
												} else {
													v118 = 0;
												}
											} else {
												v118 = 0;
											}
										}
										// 0x33a80
										if (v118 != 0) {
											// 0x33a88
											v119 = g30;
											v257 = *(char *)(g31 + *(int32_t *)g16 + 112 * v119 + 1);
											v288 = v257;
											if (v257 != 0) {
												// 0x33aa4
												if (0x1000000 * v288 < 0) {
													// 0x33ab4
													v36 = 0x1000000 * (-1 - v288) / 0x1000000;
													// branch -> 0x33ac0
												} else {
													// 0x33aac
													v36 = v288 - 1;
													// branch -> 0x33ac0
												}
												// 0x33ac0
												v12 = v36;
												if (*(char *)(120 * 0x1000000 * v36 / 0x1000000 + v5 + 64) >= 2) {
													// 0x33adc
													*(int32_t *)g35 = v119;
													*(int32_t *)g36 = g31 + 1;
													*(char *)g20 = (char)v12;
													// branch -> 0x33aec
												}
											}
										}
										// 0x33aec
										v120 = g30;
										v154 = 112 * v120;
										v12 = v154;
										v224 = *(int32_t *)g16;
										result3 = v224;
										v155 = g31;
										v289 = *(char *)(v155 + v154 + v224);
										v300 = v289;
										v122 = v155;
										v156 = v154;
										v121 = v224;
										if (v289 != 0) {
											// 0x33b04
											if (0x1000000 * v300 < 0) {
												// 0x33b14
												v25 = 0x1000000 * (-1 - v300) / 0x1000000;
												// branch -> 0x33b20
											} else {
												// 0x33b0c
												v25 = v300 - 1;
												// branch -> 0x33b20
											}
											// 0x33b20
											v19 = v25;
											v258 = *(char *)(120 * 0x1000000 * v25 / 0x1000000 + v5 + 64);
											if (v258 != 1) {
												// 0x33b3c
												if (v258 != 3) {
													v122 = v155;
													// 0x33b50
													v259 = *(char *)(v224 + v154 + v122 + 113);
													v290 = v259;
													result3 = v290;
													if (v259 != 0) {
														// 0x33b64
														if (0x1000000 * v290 < 0) {
															// 0x33b74
															v24 = 0x1000000 * (-1 - v290) / 0x1000000;
															// branch -> 0x33b80
														} else {
															// 0x33b6c
															v24 = v290 - 1;
															// branch -> 0x33b80
														}
														// 0x33b80
														v12 = v24;
														v327 = *(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64);
														result3 = v327;
														if (v327 >= 2) {
															// 0x33b9c
															result3 = v122 + 1;
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = result3;
															*(char *)g20 = (char)v12;
															// branch -> 0x33bb0
														}
													}
													// 0x33bb0
													v325 = *(char *)g33;
													v12 = v325;
													if (v325 == -1) {
														// 0x33bc0
														v326 = *(char *)g20;
														v12 = v326;
														if (v326 == -1) {
															// 0x33bd0
															if (v3 == -1) {
																// 0x33bd8
																v123 = v16;
																v125 = v123;
																if (v123 == 0) {
																	// 0x33be0
																	v260 = *(int32_t *)(g23 - 0x768c);
																	v124 = g30;
																	v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																	v291 = v261;
																	if (v261 >= 1) {
																		// 0x33c00
																		v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
																		v12 = v225;
																		if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																			// 0x33c24
																			*(int32_t *)g35 = v124 + 1;
																			*(int32_t *)g36 = g31;
																			*(char *)g21 = (char)v12;
																			v125 = v16;
																			// branch -> 0x33c34
																		} else {
																			v125 = 0;
																		}
																	} else {
																		v125 = 0;
																	}
																}
																// 0x33c34
																if (v125 != 0) {
																	// 0x33c3c
																	v262 = *(int32_t *)(g23 - 0x768c);
																	v126 = g30;
																	v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																	v292 = v263;
																	if (v263 >= 1) {
																		// 0x33c5c
																		v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
																		v12 = v226;
																		if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																			// 0x33c80
																			*(int32_t *)g35 = v126;
																			*(int32_t *)g36 = g31 + 1;
																			*(char *)g21 = (char)v12;
																			// branch -> 0x33c90
																		}
																	}
																}
																// 0x33c90
																v127 = g30;
																v157 = 112 * v127;
																v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
																result3 = v227;
																v158 = g31;
																v293 = *(char *)(v158 + v157 + v227);
																v301 = v293;
																v12 = v293;
																if (v293 >= 1) {
																	// 0x33cac
																	v159 = v4 + 48;
																	v19 = v159;
																	v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
																	v18 = v228;
																	v294 = *(char *)(v159 + 368 * v228);
																	v12 = v294;
																	if (v294 != 1) {
																		// 0x33cd0
																		if (v294 != 3) {
																			v129 = v158;
																			// 0x33ce4
																			v264 = *(char *)(v227 + v157 + v129 + 113);
																			v295 = v264;
																			if (v264 >= 1) {
																				// 0x33cf8
																				v229 = (0x1000000 * v295 - 0x1000000) / 0x1000000;
																				v12 = v229;
																				if (*(char *)(v4 + 368 * v229 + 48) >= 2) {
																					// 0x33d1c
																					v161 = g30 + 1;
																					v18 = v161;
																					*(int32_t *)g35 = v161;
																					*(int32_t *)g36 = v129 + 1;
																					*(char *)g21 = (char)v12;
																					// branch -> 0x33d30
																				}
																			}
																			// 0x33d30
																			if (*(char *)g21 == -1) {
																				// 0x33d40
																				*(int32_t *)g35 = g30;
																				*(int32_t *)g36 = g31;
																				v130 = function_c824c();
																				g34 = v130;
																				v162 = function_3257c(v130);
																				g34 = v162;
																				function_32720(v162);
																				// branch -> 0x33d54
																			}
																			// 0x33d54
																			if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 2) {
																				// 0x33d64
																				v12 = -1;
																				*(char *)g20 = -1;
																				*(int32_t *)g29 = v12;
																				*(char *)g21 = (char)v12;
																				*(int32_t *)g35 = g30;
																				*(int32_t *)g36 = g31;
																				// branch -> 0x33d7c
																			}
																			// 0x33d7c
																			v230 = *(int32_t *)g29;
																			if (v230 == -1) {
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			}
																			// 0x33d88
																			result5 = g25 + 232 * v230;
																			result3 = result5;
																			v163 = __asm_rlwinm_(*(int32_t *)(result5 + 160), 0, 26, 26);
																			v12 = v163;
																			if (v163 != 0) {
																				// 0x33d9c
																				v12 = -1;
																				*(int32_t *)g29 = -1;
																				// branch -> 0x33da4
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		}
																	}
																	// 0x33cd8
																	*(int32_t *)g35 = v127;
																	*(int32_t *)g36 = g31;
																	*(char *)g21 = (char)v18;
																	// branch -> 0x33ce4
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x33b44
											*(int32_t *)g35 = v120;
											*(int32_t *)g36 = g31;
											*(char *)g20 = (char)v19;
											v122 = g31;
											v156 = v12;
											v121 = result3;
											// branch -> 0x33b50
										}
										// 0x33b50
										v259 = *(char *)(v121 + v156 + v122 + 113);
										v290 = v259;
										if (v259 != 0) {
											// 0x33b64
											if (0x1000000 * v290 < 0) {
												// 0x33b74
												v24 = 0x1000000 * (-1 - v290) / 0x1000000;
												// branch -> 0x33b80
											} else {
												// 0x33b6c
												v24 = v290 - 1;
												// branch -> 0x33b80
											}
											// 0x33b80
											v12 = v24;
											if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
												// 0x33b9c
												*(int32_t *)g35 = g30 + 1;
												*(int32_t *)g36 = v122 + 1;
												*(char *)g20 = (char)v12;
												// branch -> 0x33bb0
											}
										}
									}
								}
								// 0x33bb0
								if (*(char *)g33 == -1) {
									// 0x33bc0
									if (*(char *)g20 == -1) {
										// 0x33bd0
										if (v3 == -1) {
											// 0x33bd8
											v123 = v16;
											v125 = v123;
											if (v123 == 0) {
												// 0x33be0
												v260 = *(int32_t *)(g23 - 0x768c);
												v124 = g30;
												v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
												v291 = v261;
												if (v261 >= 1) {
													// 0x33c00
													v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
													v12 = v225;
													if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
														// 0x33c24
														*(int32_t *)g35 = v124 + 1;
														*(int32_t *)g36 = g31;
														*(char *)g21 = (char)v12;
														v125 = v16;
														// branch -> 0x33c34
													} else {
														v125 = 0;
													}
												} else {
													v125 = 0;
												}
											}
											// 0x33c34
											if (v125 != 0) {
												// 0x33c3c
												v262 = *(int32_t *)(g23 - 0x768c);
												v126 = g30;
												v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
												v292 = v263;
												if (v263 >= 1) {
													// 0x33c5c
													v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
													v12 = v226;
													if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
														// 0x33c80
														*(int32_t *)g35 = v126;
														*(int32_t *)g36 = g31 + 1;
														*(char *)g21 = (char)v12;
														// branch -> 0x33c90
													}
												}
											}
											// 0x33c90
											v127 = g30;
											v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
											v293 = *(char *)(g31 + 112 * v127 + v227);
											v301 = v293;
											if (v293 >= 1) {
												// 0x33cac
												v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
												v294 = *(char *)(v4 + 48 + 368 * v228);
												if (v294 != 1) {
													// 0x33cd0
													if (v294 != 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x33cd8
												*(int32_t *)g35 = v127;
												*(int32_t *)g36 = g31;
												*(char *)g21 = (char)v228;
												// branch -> 0x33ce4
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					} else {
						// 0x32c38
						function_2ec14(v236, v175, v235, v176);
						// branch -> 0x33da4
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x32c1c
			*(int32_t *)g35 = g30;
			*(int32_t *)g36 = g31;
			// branch -> 0x33da4
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x329b4
	v46 = g23;
	v164 = *(int32_t *)*(int32_t *)(v46 - 0x766c);
	v47 = v17;
	if (v164 == 0) {
		// 0x329c4
		v48 = v10;
		v132 = v48 / 2 | v48 & -0x80000000;
		v131 = v47 / 2 | v47 & -0x80000000;
		// branch -> 0x329cc
	} else {
		// 0x329b4
		v132 = v10;
		v131 = v47;
		// branch -> 0x329cc
	}
	// 0x329cc
	v49 = v7;
	v165 = v131 - *(int32_t *)v49;
	v166 = g32 + 0x55ec * *(int32_t *)*(int32_t *)(v46 - 0x77ac);
	v231 = *(int32_t *)(v166 + 484);
	v167 = v132 - *(int32_t *)(v49 + 4);
	v232 = *(int32_t *)(v166 + 488);
	v53 = v167;
	v51 = v165;
	if (*(int32_t *)(v49 + 16) != 0) {
		// 0x32a28
		v53 = v167 - (v232 / 256 - (*(int32_t *)(v166 + 108) + v232) / 256);
		v51 = v165 - (v231 / 256 - (*(int32_t *)(v166 + 104) + v231) / 256);
		// branch -> 0x32a30
	}
	// 0x32a30
	v50 = v51;
	if (v51 <= 0xffffffff) {
		// 0x32a38
		v50 = 0;
		// branch -> 0x32a3c
	}
	// 0x32a3c
	v54 = v50;
	if (v50 >= 640) {
		// 0x32a44
		v54 = 640;
		// branch -> 0x32a48
	}
	// 0x32a48
	v52 = v53;
	if (v53 <= 0xffffffff) {
		// 0x32a50
		v52 = 0;
		// branch -> 0x32a54
	}
	// 0x32a54
	v55 = v52;
	if (v52 >= 480) {
		// 0x32a5c
		v55 = 480;
		// branch -> 0x32a60
	}
	// 0x32a60
	v302 = v54 / 64;
	v303 = v55 / 32;
	v133 = v54 % 64;
	v134 = v55 % 32;
	v233 = v133 / 2;
	v234 = *(int32_t *)(v46 - 0x77b0);
	v171 = -1 - v233;
	v172 = v134 - v233;
	v173 = *(int32_t *)*(int32_t *)(v46 - 0x77b4) + v303 - v302;
	g31 = v173;
	v174 = v303 + v302 + *(int32_t *)v234 - (v164 == 0 ? 5 : 10);
	g30 = v174;
	v59 = v173;
	if (v172 > v171) {
		// 0x32ac4
		v135 = v173 - 1;
		g31 = v135;
		v59 = v135;
		// branch -> 0x32ac8
	}
	// 0x32ac8
	v57 = v174;
	if (v134 + (v233 || -32) <= v233 - 33) {
		// 0x32ae4
		v136 = v174 + 1;
		g30 = v136;
		v57 = v136;
		// branch -> 0x32ae8
	}
	// 0x32ae8
	v56 = v57;
	if (v57 <= 0xffffffff) {
		// 0x32af0
		g30 = 0;
		v56 = 0;
		// branch -> 0x32af4
	}
	// 0x32af4
	if (v56 >= 112) {
		// 0x32afc
		g30 = 111;
		// branch -> 0x32b00
	}
	// 0x32b00
	v58 = v59;
	if (v59 <= 0xffffffff) {
		// 0x32b08
		g31 = 0;
		v58 = 0;
		// branch -> 0x32b0c
	}
	// 0x32b0c
	if (v58 >= 112) {
		// 0x32b14
		g31 = 111;
		// branch -> 0x32b18
	}
	// 0x32b18
	v60 = 0;
	if (v172 > v171) {
		// 0x32b28
		if (v134 + (v233 || -32) <= v233 - 33) {
			// 0x32b30
			v60 = 1;
			// branch -> 0x32b34
		} else {
			v60 = 0;
		}
		// 0x32b34
		v63 = 1;
		if (v60 == 0) {
			// 0x32b3c
			v61 = 1;
			if (v172 <= v171) {
				// 0x32b4c
				if (v134 + (v233 || -32) > v233 - 33) {
					// 0x32b54
					v61 = 0;
					// branch -> 0x32b58
				} else {
					v61 = 1;
				}
			}
			// 0x32b58
			v62 = 0;
			if (v61 != 0) {
				// 0x32b60
				if (v133 <= 31) {
					// 0x32b68
					v62 = 1;
					// branch -> 0x32b6c
				} else {
					v62 = 0;
				}
			}
			// 0x32b6c
			if (v62 == 0) {
				// 0x32b74
				v63 = 0;
				// branch -> 0x32b78
			} else {
				v63 = 1;
			}
		}
		// 0x32b78
		v12 = -1;
		v16 = v63;
		*(int32_t *)(v46 - 0x4f84) = *(int32_t *)g29;
		*(int32_t *)g29 = v12;
		*(char *)g20 = (char)v12;
		*(char *)g21 = (char)v12;
		if (*(char *)*(int32_t *)(g23 - 0x772c) != -1) {
			// 0x32ba8
			*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
			// branch -> 0x32bb4
		}
		// 0x32bb4
		v64 = g23;
		v235 = *(int32_t *)(v64 - 0x7674);
		v12 = 0;
		*(char *)*(int32_t *)(v64 - 0x772c) = -1;
		*(char *)g33 = (char)-1;
		*(int32_t *)v235 = v12;
		*(int32_t *)*(int32_t *)(g23 - 0x76d4) = v12;
		*(int32_t *)*(int32_t *)(g23 - 0x7740) = v12;
		v65 = g23;
		v175 = *(int32_t *)*(int32_t *)(v65 - 0x77ac);
		if (*(char *)(g32 + 0x55ec * v175 + 313) == 0) {
			// 0x32bfc
			v176 = *(int32_t *)*(int32_t *)(v65 - 0x7744);
			if (v176 <= 11) {
				// 0x32c0c
				if (*(int32_t *)*(int32_t *)(v65 - 0x76b8) == 0) {
					// 0x32c28
					v236 = *(int32_t *)(v65 - 0x76ac);
					if (*(int32_t *)v236 < 353) {
						// 0x32c40
						if (*(int32_t *)*(int32_t *)(v65 - 0x7678) == 0) {
							// 0x32c50
							if (*(int32_t *)*(int32_t *)(v65 - 0x77bc) != 0) {
								// 0x32c60
								if (*(int32_t *)v3 >= 321) {
									// 0x32c6c
									*(char *)*(int32_t *)(g23 - 0x772c) = (char)function_5ae34();
									// branch -> 0x33da4
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x32c7c
							if (*(int32_t *)*(int32_t *)(v65 - 0x77c0) != 0) {
								// 0x32c8c
								if (*(int32_t *)v3 > 320) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x32c98
							if (*(int32_t *)*(int32_t *)(v65 - 0x77c4) == 0) {
								// 0x32ca8
								if (*(int32_t *)*(int32_t *)(v65 - 0x77c8) == 0) {
									// 0x32cc4
									if (*(char *)*(int32_t *)(v65 - 0x7794) == 0) {
										// 0x3354c
										v96 = v16;
										v98 = v96;
										if (v96 == 0) {
											// 0x33554
											v97 = g30;
											v249 = *(int16_t *)(*(int32_t *)g22 + 224 * v97 + 2 * g31 + 224);
											v279 = v249;
											if (v249 >= 1) {
												// 0x33574
												*(int32_t *)g29 = v279 - 1;
												*(int32_t *)g35 = v97 + 1;
												*(int32_t *)g36 = g31;
												v98 = v16;
												// branch -> 0x33588
											} else {
												v98 = 0;
											}
										}
										// 0x33588
										if (v98 != 0) {
											// 0x33590
											v99 = g31;
											v250 = *(int16_t *)(*(int32_t *)g22 + 224 * g30 + 2 * v99 + 2);
											v280 = v250;
											if (v250 >= 1) {
												// 0x335b0
												*(int32_t *)g29 = v280 - 1;
												*(int32_t *)g35 = g30;
												*(int32_t *)g36 = v99 + 1;
												// branch -> 0x335c4
											}
										}
										// 0x335c4
										v143 = 224 * g30;
										result3 = v143;
										v215 = *(int32_t *)g22;
										v19 = v215;
										v144 = 2 * g31;
										v12 = v144;
										v281 = *(int16_t *)(v144 + v143 + v215);
										v298 = v281;
										v146 = v144;
										v145 = v143;
										v100 = v215;
										if (v281 >= 1) {
											// 0x335e0
											*(int32_t *)g29 = v298 - 1;
											*(int32_t *)g35 = g30;
											*(int32_t *)g36 = g31;
											v146 = v12;
											v145 = result3;
											v100 = v19;
											// branch -> 0x335f0
										}
										// 0x335f0
										v251 = *(int16_t *)(v145 + v146 + v100 + 226);
										v282 = v251;
										if (v251 >= 1) {
											// 0x33604
											*(int32_t *)g29 = v282 - 1;
											*(int32_t *)g35 = g30 + 1;
											*(int32_t *)g36 = g31 + 1;
											// branch -> 0x3361c
										}
										// 0x3361c
										v147 = (int32_t *)g29;
										if (*(int32_t *)(*(int32_t *)(g23 - 0x7758) + 268 * *v147 + 84) == 0) {
											// 0x33638
											*v147 = -1;
											// branch -> 0x33640
										}
									} else {
										// 0x32cd4
										if (*(int32_t *)(v65 - 0x4f84) != -1) {
											// 0x32ce0
											if (v16 == 0) {
												// 0x32ce8
												v66 = g30;
												v67 = g31;
												v237 = *(int16_t *)(*(int32_t *)g22 + 224 * v66 + 2 * v67 + 450);
												result3 = v237;
												if (v237 != 0) {
													// 0x32d08
													v177 = *(int32_t *)g24 + 112 * v66;
													if (__asm_rlwinm_((int32_t) * (char *)(v177 + v67 + 225), 0, 25, 25) != 0) {
														// 0x32d24
														v68 = result3;
														v38 = (0x10000 * v68 < 1 ? -v68 : v68) - 1;
														v12 = v38;
														if (v38 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32d48
															v178 = g25 + 232 * v38;
															if (*(int32_t *)(v178 + 152) >= 64) {
																// 0x32d5c
																v265 = (int32_t) * (char *)(*(int32_t *)(v178 + 228) + 122);
																if (__asm_rlwinm_(v265, 0, 29, 29) != 0) {
																	// 0x32d6c
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31 + 2;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32d80
																}
															}
														}
													}
												}
											}
											// 0x32d80
											if (v16 != 0) {
												// 0x32d88
												v69 = g30;
												v70 = g31;
												v238 = *(int16_t *)(*(int32_t *)g22 + 224 * v69 + 2 * v70 + 228);
												result3 = v238;
												if (v238 != 0) {
													// 0x32da8
													v179 = *(int32_t *)g24 + 112 * v69;
													if (__asm_rlwinm_((int32_t) * (char *)(v179 + v70 + 114), 0, 25, 25) != 0) {
														// 0x32dc4
														v71 = result3;
														v37 = (0x10000 * v71 < 1 ? -v71 : v71) - 1;
														v12 = v37;
														if (v37 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32de8
															v180 = g25 + 232 * v37;
															if (*(int32_t *)(v180 + 152) >= 64) {
																// 0x32dfc
																v266 = (int32_t) * (char *)(*(int32_t *)(v180 + 228) + 122);
																if (__asm_rlwinm_(v266, 0, 29, 29) != 0) {
																	// 0x32e0c
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31 + 2;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32e20
																}
															}
														}
													}
												}
											}
											// 0x32e20
											v72 = g30;
											v137 = 224 * v72;
											v20 = v137;
											v181 = *(int32_t *)g22;
											v22 = v181;
											v73 = g31;
											v138 = 2 * v73;
											v21 = v138;
											v239 = *(int16_t *)(v138 + v181 + v137 + 452);
											result3 = v239;
											if (v239 != 0) {
												// 0x32e40
												v182 = *(int32_t *)g24 + 112 * v72;
												if (__asm_rlwinm_((int32_t) * (char *)(v182 + v73 + 226), 0, 25, 25) != 0) {
													// 0x32e5c
													v74 = result3;
													v35 = (0x10000 * v74 < 1 ? -v74 : v74) - 1;
													v12 = v35;
													if (v35 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32e80
														v183 = g25 + 232 * v35;
														if (*(int32_t *)(v183 + 152) >= 64) {
															// 0x32e94
															v267 = (int32_t) * (char *)(*(int32_t *)(v183 + 228) + 122);
															if (__asm_rlwinm_(v267, 0, 29, 29) != 0) {
																// 0x32ea4
																*(int32_t *)g35 = g30 + 2;
																*(int32_t *)g36 = g31 + 2;
																*(int32_t *)g29 = v12;
																// branch -> 0x32eb8
															}
														}
													}
												}
											}
											// 0x32eb8
											if (v16 == 0) {
												// 0x32ec0
												v184 = v20 + v22;
												v240 = *(int16_t *)(v21 + v184 + 224);
												result3 = v240;
												if (v240 != 0) {
													// 0x32ed4
													v185 = *(int32_t *)g24 + 112 * g30;
													if (__asm_rlwinm_((int32_t) * (char *)(g31 + v185 + 112), 0, 25, 25) != 0) {
														// 0x32ef0
														v75 = result3;
														v34 = (0x10000 * v75 < 1 ? -v75 : v75) - 1;
														v12 = v34;
														if (v34 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32f14
															v186 = g25 + 232 * v34;
															if (*(int32_t *)(v186 + 152) >= 64) {
																// 0x32f28
																v268 = (int32_t) * (char *)(*(int32_t *)(v186 + 228) + 122);
																if (__asm_rlwinm_(v268, 0, 30, 30) != 0) {
																	// 0x32f38
																	*(int32_t *)g35 = g30 + 1;
																	*(int32_t *)g36 = g31;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32f48
																}
															}
														}
													}
												}
											}
											// 0x32f48
											if (v16 != 0) {
												// 0x32f50
												v187 = v20 + v22;
												v241 = *(int16_t *)(v21 + v187 + 2);
												result3 = v241;
												if (v241 != 0) {
													// 0x32f64
													v188 = *(int32_t *)g24 + 112 * g30;
													if (__asm_rlwinm_((int32_t) * (char *)(g31 + v188 + 1), 0, 25, 25) != 0) {
														// 0x32f80
														v76 = result3;
														v33 = (0x10000 * v76 < 1 ? -v76 : v76) - 1;
														v12 = v33;
														if (v33 == *(int32_t *)(g23 - 0x4f84)) {
															// 0x32fa4
															v189 = g25 + 232 * v33;
															if (*(int32_t *)(v189 + 152) >= 64) {
																// 0x32fb8
																v269 = (int32_t) * (char *)(*(int32_t *)(v189 + 228) + 122);
																if (__asm_rlwinm_(v269, 0, 30, 30) != 0) {
																	// 0x32fc8
																	*(int32_t *)g35 = g30;
																	*(int32_t *)g36 = g31 + 1;
																	*(int32_t *)g29 = v12;
																	// branch -> 0x32fd8
																}
															}
														}
													}
												}
											}
											// 0x32fd8
											v270 = *(int16_t *)(v22 + v21 + v20);
											result3 = v270;
											if (v270 != 0) {
												// 0x32fe8
												v296 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
												if (__asm_rlwinm_(v296, 0, 25, 25) != 0) {
													// 0x33000
													v77 = result3;
													v32 = (0x10000 * v77 < 1 ? -v77 : v77) - 1;
													v12 = v32;
													if (v32 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x33024
														v190 = g25 + 232 * v32;
														if (*(int32_t *)(v190 + 152) >= 64) {
															// 0x33038
															if (*(char *)(*(int32_t *)(v190 + 228) + 122) % 2 != 0) {
																// 0x33048
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31;
																*(int32_t *)g29 = v12;
																// branch -> 0x33054
															}
														}
													}
												}
											}
											// 0x33054
											v191 = v20 + v22;
											v242 = *(int16_t *)(v21 + v191 + 226);
											result3 = v242;
											if (v242 != 0) {
												// 0x33068
												v192 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v192 + 113), 0, 25, 25) != 0) {
													// 0x33084
													v78 = result3;
													v31 = (0x10000 * v78 < 1 ? -v78 : v78) - 1;
													v12 = v31;
													if (v31 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x330a8
														v193 = g25 + 232 * v31;
														if (*(int32_t *)(v193 + 152) >= 64) {
															// 0x330bc
															v271 = (int32_t) * (char *)(*(int32_t *)(v193 + 228) + 122);
															if (__asm_rlwinm_(v271, 0, 30, 30) != 0) {
																// 0x330cc
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31 + 1;
																*(int32_t *)g29 = v12;
																// branch -> 0x330e0
															}
														}
													}
												}
											}
											// 0x330e0
											v79 = g29;
											v139 = (int32_t *)v79;
											v194 = *v139;
											v80 = v79;
											if (v194 != -1) {
												// 0x330ec
												if (*(int32_t *)(g25 + 232 * v194 + 160) % 2 != 0) {
													// 0x33100
													*v139 = -1;
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = g31;
													v80 = g29;
													// branch -> 0x33110
												} else {
													v80 = v79;
												}
											}
											// 0x33110
											v195 = *(int32_t *)v80;
											if (v195 != -1) {
												// 0x3311c
												if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v195 + 160), 0, 26, 26) != 0) {
													// 0x33130
													*(int32_t *)g29 = -1;
													// branch -> 0x33138
												}
											}
											// 0x33138
											if (*(int32_t *)g29 != -1) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x33144
										if (v16 == 0) {
											// 0x3314c
											v81 = g30;
											v82 = g31;
											v243 = *(int16_t *)(*(int32_t *)g22 + 224 * v81 + 2 * v82 + 450);
											result3 = v243;
											if (v243 != 0) {
												// 0x3316c
												v196 = *(int32_t *)g24 + 112 * v81;
												if (__asm_rlwinm_((int32_t) * (char *)(v196 + v82 + 225), 0, 25, 25) != 0) {
													// 0x33188
													v83 = result3;
													v30 = (0x10000 * v83 < 1 ? -v83 : v83) - 1;
													v12 = v30;
													v197 = 232 * v30 + g25;
													if (*(int32_t *)(v197 + 152) >= 64) {
														// 0x331b4
														v272 = (int32_t) * (char *)(*(int32_t *)(v197 + 228) + 122);
														if (__asm_rlwinm_(v272, 0, 29, 29) != 0) {
															// 0x331c4
															*(int32_t *)g35 = g30 + 2;
															*(int32_t *)g36 = g31 + 1;
															*(int32_t *)g29 = v12;
															// branch -> 0x331d8
														}
													}
												}
											}
										}
										// 0x331d8
										if (v16 != 0) {
											// 0x331e0
											v84 = g30;
											v85 = g31;
											v244 = *(int16_t *)(*(int32_t *)g22 + 224 * v84 + 2 * v85 + 228);
											result3 = v244;
											if (v244 != 0) {
												// 0x33200
												v198 = *(int32_t *)g24 + 112 * v84;
												if (__asm_rlwinm_((int32_t) * (char *)(v198 + v85 + 114), 0, 25, 25) != 0) {
													// 0x3321c
													v86 = result3;
													v29 = (0x10000 * v86 < 1 ? -v86 : v86) - 1;
													v12 = v29;
													v199 = 232 * v29 + g25;
													if (*(int32_t *)(v199 + 152) >= 64) {
														// 0x33248
														v273 = (int32_t) * (char *)(*(int32_t *)(v199 + 228) + 122);
														if (__asm_rlwinm_(v273, 0, 29, 29) != 0) {
															// 0x33258
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31 + 2;
															*(int32_t *)g29 = v12;
															// branch -> 0x3326c
														}
													}
												}
											}
										}
										// 0x3326c
										v87 = g30;
										v140 = 224 * v87;
										v20 = v140;
										v200 = *(int32_t *)g22;
										v22 = v200;
										v88 = g31;
										v141 = 2 * v88;
										v21 = v141;
										v245 = *(int16_t *)(v141 + v200 + v140 + 452);
										result3 = v245;
										if (v245 != 0) {
											// 0x3328c
											v201 = *(int32_t *)g24 + 112 * v87;
											if (__asm_rlwinm_((int32_t) * (char *)(v201 + v88 + 226), 0, 25, 25) != 0) {
												// 0x332a8
												v89 = result3;
												v28 = (0x10000 * v89 < 1 ? -v89 : v89) - 1;
												v12 = v28;
												v202 = 232 * v28 + g25;
												if (*(int32_t *)(v202 + 152) >= 64) {
													// 0x332d4
													v274 = (int32_t) * (char *)(*(int32_t *)(v202 + 228) + 122);
													if (__asm_rlwinm_(v274, 0, 29, 29) != 0) {
														// 0x332e4
														*(int32_t *)g35 = g30 + 2;
														*(int32_t *)g36 = g31 + 2;
														*(int32_t *)g29 = v12;
														// branch -> 0x332f8
													}
												}
											}
										}
										// 0x332f8
										if (v16 == 0) {
											// 0x33300
											v203 = v20 + v22;
											v246 = *(int16_t *)(v21 + v203 + 224);
											result3 = v246;
											if (v246 != 0) {
												// 0x33314
												v204 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v204 + 112), 0, 25, 25) != 0) {
													// 0x33330
													v90 = result3;
													v27 = (0x10000 * v90 < 1 ? -v90 : v90) - 1;
													v12 = v27;
													v205 = 232 * v27 + g25;
													if (*(int32_t *)(v205 + 152) >= 64) {
														// 0x3335c
														v275 = (int32_t) * (char *)(*(int32_t *)(v205 + 228) + 122);
														if (__asm_rlwinm_(v275, 0, 30, 30) != 0) {
															// 0x3336c
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31;
															*(int32_t *)g29 = v12;
															// branch -> 0x3337c
														}
													}
												}
											}
										}
										// 0x3337c
										if (v16 != 0) {
											// 0x33384
											v206 = v20 + v22;
											v247 = *(int16_t *)(v21 + v206 + 2);
											result3 = v247;
											if (v247 != 0) {
												// 0x33398
												v207 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v207 + 1), 0, 25, 25) != 0) {
													// 0x333b4
													v91 = result3;
													v26 = (0x10000 * v91 < 1 ? -v91 : v91) - 1;
													v12 = v26;
													v208 = 232 * v26 + g25;
													if (*(int32_t *)(v208 + 152) >= 64) {
														// 0x333e0
														v276 = (int32_t) * (char *)(*(int32_t *)(v208 + 228) + 122);
														if (__asm_rlwinm_(v276, 0, 30, 30) != 0) {
															// 0x333f0
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31 + 1;
															*(int32_t *)g29 = v12;
															// branch -> 0x33400
														}
													}
												}
											}
										}
										// 0x33400
										v277 = *(int16_t *)(v22 + v21 + v20);
										result3 = v277;
										if (v277 != 0) {
											// 0x33410
											v297 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
											if (__asm_rlwinm_(v297, 0, 25, 25) != 0) {
												// 0x33428
												v92 = result3;
												v45 = (0x10000 * v92 < 1 ? -v92 : v92) - 1;
												v12 = v45;
												v209 = 232 * v45 + g25;
												if (*(int32_t *)(v209 + 152) >= 64) {
													// 0x33454
													if (*(char *)(*(int32_t *)(v209 + 228) + 122) % 2 != 0) {
														// 0x33464
														*(int32_t *)g35 = g30;
														*(int32_t *)g36 = g31;
														*(int32_t *)g29 = v12;
														// branch -> 0x33470
													}
												}
											}
										}
										// 0x33470
										v210 = v20 + v22;
										v248 = *(int16_t *)(v21 + v210 + 226);
										result3 = v248;
										if (v248 != 0) {
											// 0x33484
											v211 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v211 + 113), 0, 25, 25) != 0) {
												// 0x334a0
												v93 = result3;
												v44 = (0x10000 * v93 < 1 ? -v93 : v93) - 1;
												v12 = v44;
												v212 = 232 * v44 + g25;
												if (*(int32_t *)(v212 + 152) >= 64) {
													// 0x334cc
													v278 = (int32_t) * (char *)(*(int32_t *)(v212 + 228) + 122);
													if (__asm_rlwinm_(v278, 0, 30, 30) != 0) {
														// 0x334dc
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = g31 + 1;
														*(int32_t *)g29 = v12;
														// branch -> 0x334f0
													}
												}
											}
										}
										// 0x334f0
										v94 = g29;
										v142 = (int32_t *)v94;
										v213 = *v142;
										v95 = v94;
										if (v213 != -1) {
											// 0x334fc
											if (*(int32_t *)(g25 + 232 * v213 + 160) % 2 != 0) {
												// 0x33510
												*v142 = -1;
												*(int32_t *)g35 = g30;
												*(int32_t *)g36 = g31;
												v95 = g29;
												// branch -> 0x33520
											} else {
												v95 = v94;
											}
										}
										// 0x33520
										v214 = *(int32_t *)v95;
										if (v214 != -1) {
											// 0x3352c
											if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v214 + 160), 0, 26, 26) != 0) {
												// 0x33540
												*(int32_t *)g29 = -1;
												// branch -> 0x33640
											}
										}
									}
									// 0x33640
									v216 = *(int32_t *)g29;
									v3 = v216;
									if (v216 == -1) {
										// 0x3364c
										v101 = v16;
										v103 = v101;
										if (v101 == 0) {
											// 0x33654
											v102 = g30;
											v252 = *(char *)(g31 + *(int32_t *)v6 + 112 * v102 + 112);
											v283 = v252;
											if (v252 != 0) {
												// 0x33670
												if (0x1000000 * v283 < 0) {
													// 0x33680
													v43 = 0x1000000 * (-1 - v283) / 0x1000000;
													// branch -> 0x3368c
												} else {
													// 0x33678
													v43 = v283 - 1;
													// branch -> 0x3368c
												}
												// 0x3368c
												v12 = v43;
												v217 = 0x1000000 * v43 / 0x1000000;
												if (v217 != v175) {
													// 0x33698
													if (*(int32_t *)(g32 + 0x55ec * v217 + 404) != 0) {
														// 0x336ac
														*(int32_t *)g35 = v102 + 1;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)v12;
														v103 = v16;
														// branch -> 0x336bc
													} else {
														v103 = 0;
													}
												} else {
													v103 = 0;
												}
											} else {
												v103 = 0;
											}
										}
										// 0x336bc
										if (v103 != 0) {
											// 0x336c4
											v104 = g30;
											v253 = *(char *)(g31 + *(int32_t *)v6 + 112 * v104 + 1);
											v284 = v253;
											if (v253 != 0) {
												// 0x336e0
												if (0x1000000 * v284 < 0) {
													// 0x336f0
													v42 = 0x1000000 * (-1 - v284) / 0x1000000;
													// branch -> 0x336fc
												} else {
													// 0x336e8
													v42 = v284 - 1;
													// branch -> 0x336fc
												}
												// 0x336fc
												v12 = v42;
												v218 = 0x1000000 * v42 / 0x1000000;
												if (v218 != v175) {
													// 0x33708
													if (*(int32_t *)(g32 + 0x55ec * v218 + 404) != 0) {
														// 0x3371c
														*(int32_t *)g35 = v104;
														*(int32_t *)g36 = g31 + 1;
														*(char *)g33 = (char)v12;
														// branch -> 0x3372c
													}
												}
											}
										}
										// 0x3372c
										v105 = g30;
										v148 = 112 * v105;
										v15 = v148;
										v219 = *(int32_t *)v6;
										v7 = v219;
										v149 = g31;
										v285 = *(char *)(v149 + v148 + v219);
										v299 = v285;
										v150 = v149;
										v106 = v148;
										if (v285 != 0) {
											// 0x33744
											if (0x1000000 * v299 < 0) {
												// 0x33754
												v41 = 0x1000000 * (-1 - v299) / 0x1000000;
												// branch -> 0x33760
											} else {
												// 0x3374c
												v41 = v299 - 1;
												// branch -> 0x33760
											}
											// 0x33760
											result3 = v41;
											if (0x1000000 * v41 / 0x1000000 != v175) {
												// 0x3376c
												*(int32_t *)g35 = v105;
												*(int32_t *)g36 = g31;
												*(char *)g33 = (char)result3;
												v150 = g31;
												v106 = v15;
												// branch -> 0x33778
											} else {
												v150 = v149;
												v106 = v148;
											}
										}
										// 0x33778
										v220 = *(int32_t *)g24;
										v14 = v220;
										if (__asm_rlwinm_((int32_t) * (char *)(v220 + v106 + v150), 0, 29, 29) != 0) {
											// 0x3378c
											v107 = g32;
											v254 = *(int32_t *)(v107 + 56);
											v108 = g30;
											v110 = v108;
											v109 = v107;
											if (v108 == v254) {
												// 0x3379c
												if (g31 == *(int32_t *)(v107 + 60)) {
													// 0x337a8
													if (v175 != 0) {
														// 0x337b0
														*(int32_t *)g35 = v254;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)0;
														v110 = g30;
														v109 = g32;
														// branch -> 0x337c0
													} else {
														v110 = v254;
														v109 = v107;
													}
												} else {
													v110 = v254;
													v109 = v107;
												}
											}
											// 0x337c0
											v151 = v109 + 0x55ec;
											result3 = v151;
											v112 = v110;
											v111 = v151;
											if (v110 == *(int32_t *)(v109 + 0x5624)) {
												// 0x337d4
												if (g31 == *(int32_t *)(v109 + 0x5628)) {
													// 0x337e0
													if (v175 != 1) {
														// 0x337e8
														*(int32_t *)g35 = v110;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)1;
														v112 = g30;
														v111 = result3;
														// branch -> 0x337f8
													} else {
														v112 = v110;
														v111 = v151;
													}
												} else {
													v112 = v110;
													v111 = v151;
												}
											}
											// 0x337f8
											v152 = v111 + 0x55ec;
											result3 = v152;
											v114 = v112;
											v113 = v152;
											if (v112 == *(int32_t *)(v111 + 0x5624)) {
												// 0x3380c
												if (g31 == *(int32_t *)(v111 + 0x5628)) {
													// 0x33818
													if (v175 != 2) {
														// 0x33820
														*(int32_t *)g35 = v112;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)2;
														v114 = g30;
														v113 = result3;
														// branch -> 0x33830
													} else {
														v114 = v112;
														v113 = v152;
													}
												} else {
													v114 = v112;
													v113 = v152;
												}
											}
											// 0x33830
											if (v114 == *(int32_t *)(v113 + 0x5624)) {
												// 0x33844
												if (g31 == *(int32_t *)(v113 + 0x5628)) {
													// 0x33850
													if (v175 != 3) {
														// 0x33858
														*(int32_t *)g35 = v114;
														*(int32_t *)g36 = g31;
														*(char *)g33 = (char)3;
														// branch -> 0x33868
													}
												}
											}
										}
										// 0x33868
										if (v176 == 8) {
											// 0x33870
											v13 = -1;
											// branch -> 0x33874
											while (true) {
												// 0x33874
												v221 = g30 - 1;
												v19 = v221;
												v11 = 3;
												v222 = g31 + 112 * v221 - 1 + v14;
												v22 = v222;
												v23 = -1;
												v115 = v222;
												// branch -> 0x33894
												goto lab_0x33894_9;
											}
										}
										// 0x33998
										v153 = g31;
										v255 = *(char *)(v153 + v15 + v7 + 113);
										v286 = v255;
										if (v255 != 0) {
											// 0x339ac
											if (0x1000000 * v286 < 0) {
												// 0x339bc
												v40 = 0x1000000 * (-1 - v286) / 0x1000000;
												// branch -> 0x339c8
											} else {
												// 0x339b4
												v40 = v286 - 1;
												// branch -> 0x339c8
											}
											// 0x339c8
											result3 = v40;
											v223 = 0x1000000 * v40 / 0x1000000;
											if (v223 != v175) {
												// 0x339d4
												if (*(int32_t *)(g32 + 0x55ec * v223 + 404) != 0) {
													// 0x339e8
													*(int32_t *)g35 = g30 + 1;
													*(int32_t *)g36 = v153 + 1;
													*(char *)g33 = (char)result3;
													// branch -> 0x339fc
												}
											}
										}
									}
									// 0x339fc
									if (v3 == -1) {
										// 0x33a04
										if (*(char *)g33 == -1) {
											// 0x33a14
											v116 = v16;
											v118 = v116;
											if (v116 == 0) {
												// 0x33a1c
												v117 = g30;
												v256 = *(char *)(g31 + *(int32_t *)g16 + 112 * v117 + 112);
												v287 = v256;
												if (v256 != 0) {
													// 0x33a38
													if (0x1000000 * v287 < 0) {
														// 0x33a48
														v39 = 0x1000000 * (-1 - v287) / 0x1000000;
														// branch -> 0x33a54
													} else {
														// 0x33a40
														v39 = v287 - 1;
														// branch -> 0x33a54
													}
													// 0x33a54
													v12 = v39;
													if (*(char *)(120 * 0x1000000 * v39 / 0x1000000 + v5 + 64) >= 2) {
														// 0x33a70
														*(int32_t *)g35 = v117 + 1;
														*(int32_t *)g36 = g31;
														*(char *)g20 = (char)v12;
														v118 = v16;
														// branch -> 0x33a80
													} else {
														v118 = 0;
													}
												} else {
													v118 = 0;
												}
											}
											// 0x33a80
											if (v118 != 0) {
												// 0x33a88
												v119 = g30;
												v257 = *(char *)(g31 + *(int32_t *)g16 + 112 * v119 + 1);
												v288 = v257;
												if (v257 != 0) {
													// 0x33aa4
													if (0x1000000 * v288 < 0) {
														// 0x33ab4
														v36 = 0x1000000 * (-1 - v288) / 0x1000000;
														// branch -> 0x33ac0
													} else {
														// 0x33aac
														v36 = v288 - 1;
														// branch -> 0x33ac0
													}
													// 0x33ac0
													v12 = v36;
													if (*(char *)(120 * 0x1000000 * v36 / 0x1000000 + v5 + 64) >= 2) {
														// 0x33adc
														*(int32_t *)g35 = v119;
														*(int32_t *)g36 = g31 + 1;
														*(char *)g20 = (char)v12;
														// branch -> 0x33aec
													}
												}
											}
											// 0x33aec
											v120 = g30;
											v154 = 112 * v120;
											v12 = v154;
											v224 = *(int32_t *)g16;
											result3 = v224;
											v155 = g31;
											v289 = *(char *)(v155 + v154 + v224);
											v300 = v289;
											v122 = v155;
											v156 = v154;
											v121 = v224;
											if (v289 != 0) {
												// 0x33b04
												if (0x1000000 * v300 < 0) {
													// 0x33b14
													v25 = 0x1000000 * (-1 - v300) / 0x1000000;
													// branch -> 0x33b20
												} else {
													// 0x33b0c
													v25 = v300 - 1;
													// branch -> 0x33b20
												}
												// 0x33b20
												v19 = v25;
												v258 = *(char *)(120 * 0x1000000 * v25 / 0x1000000 + v5 + 64);
												if (v258 != 1) {
													// 0x33b3c
													if (v258 != 3) {
														v122 = v155;
														// 0x33b50
														v259 = *(char *)(v224 + v154 + v122 + 113);
														v290 = v259;
														result3 = v290;
														if (v259 != 0) {
															// 0x33b64
															if (0x1000000 * v290 < 0) {
																// 0x33b74
																v24 = 0x1000000 * (-1 - v290) / 0x1000000;
																// branch -> 0x33b80
															} else {
																// 0x33b6c
																v24 = v290 - 1;
																// branch -> 0x33b80
															}
															// 0x33b80
															v12 = v24;
															v327 = *(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64);
															result3 = v327;
															if (v327 >= 2) {
																// 0x33b9c
																result3 = v122 + 1;
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = result3;
																*(char *)g20 = (char)v12;
																// branch -> 0x33bb0
															}
														}
														// 0x33bb0
														v325 = *(char *)g33;
														v12 = v325;
														if (v325 == -1) {
															// 0x33bc0
															v326 = *(char *)g20;
															v12 = v326;
															if (v326 == -1) {
																// 0x33bd0
																if (v3 == -1) {
																	// 0x33bd8
																	v123 = v16;
																	v125 = v123;
																	if (v123 == 0) {
																		// 0x33be0
																		v260 = *(int32_t *)(g23 - 0x768c);
																		v124 = g30;
																		v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																		v291 = v261;
																		if (v261 >= 1) {
																			// 0x33c00
																			v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
																			v12 = v225;
																			if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																				// 0x33c24
																				*(int32_t *)g35 = v124 + 1;
																				*(int32_t *)g36 = g31;
																				*(char *)g21 = (char)v12;
																				v125 = v16;
																				// branch -> 0x33c34
																			} else {
																				v125 = 0;
																			}
																		} else {
																			v125 = 0;
																		}
																	}
																	// 0x33c34
																	if (v125 != 0) {
																		// 0x33c3c
																		v262 = *(int32_t *)(g23 - 0x768c);
																		v126 = g30;
																		v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																		v292 = v263;
																		if (v263 >= 1) {
																			// 0x33c5c
																			v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
																			v12 = v226;
																			if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																				// 0x33c80
																				*(int32_t *)g35 = v126;
																				*(int32_t *)g36 = g31 + 1;
																				*(char *)g21 = (char)v12;
																				// branch -> 0x33c90
																			}
																		}
																	}
																	// 0x33c90
																	v127 = g30;
																	v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
																	result3 = v227;
																	v293 = *(char *)(g31 + 112 * v127 + v227);
																	v301 = v293;
																	v12 = v293;
																	if (v293 >= 1) {
																		// 0x33cac
																		v159 = v4 + 48;
																		v19 = v159;
																		v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
																		v294 = *(char *)(v159 + 368 * v228);
																		v12 = v294;
																		if (v294 != 1) {
																			// 0x33cd0
																			if (v294 != 3) {
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			}
																		}
																		// 0x33cd8
																		*(int32_t *)g35 = v127;
																		*(int32_t *)g36 = g31;
																		*(char *)g21 = (char)v228;
																		// branch -> 0x33ce4
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x33b44
												*(int32_t *)g35 = v120;
												*(int32_t *)g36 = g31;
												*(char *)g20 = (char)v19;
												v122 = g31;
												v156 = v12;
												v121 = result3;
												// branch -> 0x33b50
											}
											// 0x33b50
											v259 = *(char *)(v121 + v156 + v122 + 113);
											v290 = v259;
											if (v259 != 0) {
												// 0x33b64
												if (0x1000000 * v290 < 0) {
													// 0x33b74
													v24 = 0x1000000 * (-1 - v290) / 0x1000000;
													// branch -> 0x33b80
												} else {
													// 0x33b6c
													v24 = v290 - 1;
													// branch -> 0x33b80
												}
												// 0x33b80
												v12 = v24;
												if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
													// 0x33b9c
													*(int32_t *)g35 = g30 + 1;
													*(int32_t *)g36 = v122 + 1;
													*(char *)g20 = (char)v12;
													// branch -> 0x33bb0
												}
											}
										}
									}
									// 0x33bb0
									if (*(char *)g33 == -1) {
										// 0x33bc0
										if (*(char *)g20 == -1) {
											// 0x33bd0
											if (v3 == -1) {
												// 0x33bd8
												v123 = v16;
												v125 = v123;
												if (v123 == 0) {
													// 0x33be0
													v260 = *(int32_t *)(g23 - 0x768c);
													v124 = g30;
													v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
													v291 = v261;
													if (v261 >= 1) {
														// 0x33c00
														v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
														v12 = v225;
														if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
															// 0x33c24
															*(int32_t *)g35 = v124 + 1;
															*(int32_t *)g36 = g31;
															*(char *)g21 = (char)v12;
															v125 = v16;
															// branch -> 0x33c34
														} else {
															v125 = 0;
														}
													} else {
														v125 = 0;
													}
												}
												// 0x33c34
												if (v125 != 0) {
													// 0x33c3c
													v262 = *(int32_t *)(g23 - 0x768c);
													v126 = g30;
													v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
													v292 = v263;
													if (v263 >= 1) {
														// 0x33c5c
														v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
														v12 = v226;
														if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
															// 0x33c80
															*(int32_t *)g35 = v126;
															*(int32_t *)g36 = g31 + 1;
															*(char *)g21 = (char)v12;
															// branch -> 0x33c90
														}
													}
												}
												// 0x33c90
												v127 = g30;
												v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
												v293 = *(char *)(g31 + 112 * v127 + v227);
												v301 = v293;
												if (v293 >= 1) {
													// 0x33cac
													v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
													v294 = *(char *)(v4 + 48 + 368 * v228);
													if (v294 != 1) {
														// 0x33cd0
														if (v294 != 3) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x33cd8
													*(int32_t *)g35 = v127;
													*(int32_t *)g36 = g31;
													*(char *)g21 = (char)v228;
													// branch -> 0x33ce4
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x32cb8
							if (*(int32_t *)v3 >= 320) {
								// 0x32cc4
								if (*(char *)*(int32_t *)(v65 - 0x7794) == 0) {
									// 0x3354c
									v96 = v16;
									v98 = v96;
									if (v96 == 0) {
										// 0x33554
										v97 = g30;
										v249 = *(int16_t *)(*(int32_t *)g22 + 224 * v97 + 2 * g31 + 224);
										v279 = v249;
										if (v249 >= 1) {
											// 0x33574
											*(int32_t *)g29 = v279 - 1;
											*(int32_t *)g35 = v97 + 1;
											*(int32_t *)g36 = g31;
											v98 = v16;
											// branch -> 0x33588
										} else {
											v98 = 0;
										}
									}
									// 0x33588
									if (v98 != 0) {
										// 0x33590
										v99 = g31;
										v250 = *(int16_t *)(*(int32_t *)g22 + 224 * g30 + 2 * v99 + 2);
										v280 = v250;
										if (v250 >= 1) {
											// 0x335b0
											*(int32_t *)g29 = v280 - 1;
											*(int32_t *)g35 = g30;
											*(int32_t *)g36 = v99 + 1;
											// branch -> 0x335c4
										}
									}
									// 0x335c4
									v143 = 224 * g30;
									result3 = v143;
									v215 = *(int32_t *)g22;
									v19 = v215;
									v144 = 2 * g31;
									v12 = v144;
									v281 = *(int16_t *)(v144 + v143 + v215);
									v298 = v281;
									v146 = v144;
									v145 = v143;
									v100 = v215;
									if (v281 >= 1) {
										// 0x335e0
										*(int32_t *)g29 = v298 - 1;
										*(int32_t *)g35 = g30;
										*(int32_t *)g36 = g31;
										v146 = v12;
										v145 = result3;
										v100 = v19;
										// branch -> 0x335f0
									}
									// 0x335f0
									v251 = *(int16_t *)(v145 + v146 + v100 + 226);
									v282 = v251;
									if (v251 >= 1) {
										// 0x33604
										*(int32_t *)g29 = v282 - 1;
										*(int32_t *)g35 = g30 + 1;
										*(int32_t *)g36 = g31 + 1;
										// branch -> 0x3361c
									}
									// 0x3361c
									v147 = (int32_t *)g29;
									if (*(int32_t *)(*(int32_t *)(g23 - 0x7758) + 268 * *v147 + 84) == 0) {
										// 0x33638
										*v147 = -1;
										// branch -> 0x33640
									}
								} else {
									// 0x32cd4
									if (*(int32_t *)(v65 - 0x4f84) != -1) {
										// 0x32ce0
										if (v16 == 0) {
											// 0x32ce8
											v66 = g30;
											v67 = g31;
											v237 = *(int16_t *)(*(int32_t *)g22 + 224 * v66 + 2 * v67 + 450);
											result3 = v237;
											if (v237 != 0) {
												// 0x32d08
												v177 = *(int32_t *)g24 + 112 * v66;
												if (__asm_rlwinm_((int32_t) * (char *)(v177 + v67 + 225), 0, 25, 25) != 0) {
													// 0x32d24
													v68 = result3;
													v38 = (0x10000 * v68 < 1 ? -v68 : v68) - 1;
													v12 = v38;
													if (v38 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32d48
														v178 = g25 + 232 * v38;
														if (*(int32_t *)(v178 + 152) >= 64) {
															// 0x32d5c
															v265 = (int32_t) * (char *)(*(int32_t *)(v178 + 228) + 122);
															if (__asm_rlwinm_(v265, 0, 29, 29) != 0) {
																// 0x32d6c
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31 + 2;
																*(int32_t *)g29 = v12;
																// branch -> 0x32d80
															}
														}
													}
												}
											}
										}
										// 0x32d80
										if (v16 != 0) {
											// 0x32d88
											v69 = g30;
											v70 = g31;
											v238 = *(int16_t *)(*(int32_t *)g22 + 224 * v69 + 2 * v70 + 228);
											result3 = v238;
											if (v238 != 0) {
												// 0x32da8
												v179 = *(int32_t *)g24 + 112 * v69;
												if (__asm_rlwinm_((int32_t) * (char *)(v179 + v70 + 114), 0, 25, 25) != 0) {
													// 0x32dc4
													v71 = result3;
													v37 = (0x10000 * v71 < 1 ? -v71 : v71) - 1;
													v12 = v37;
													if (v37 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32de8
														v180 = g25 + 232 * v37;
														if (*(int32_t *)(v180 + 152) >= 64) {
															// 0x32dfc
															v266 = (int32_t) * (char *)(*(int32_t *)(v180 + 228) + 122);
															if (__asm_rlwinm_(v266, 0, 29, 29) != 0) {
																// 0x32e0c
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31 + 2;
																*(int32_t *)g29 = v12;
																// branch -> 0x32e20
															}
														}
													}
												}
											}
										}
										// 0x32e20
										v72 = g30;
										v137 = 224 * v72;
										v20 = v137;
										v181 = *(int32_t *)g22;
										v22 = v181;
										v73 = g31;
										v138 = 2 * v73;
										v21 = v138;
										v239 = *(int16_t *)(v138 + v181 + v137 + 452);
										result3 = v239;
										if (v239 != 0) {
											// 0x32e40
											v182 = *(int32_t *)g24 + 112 * v72;
											if (__asm_rlwinm_((int32_t) * (char *)(v182 + v73 + 226), 0, 25, 25) != 0) {
												// 0x32e5c
												v74 = result3;
												v35 = (0x10000 * v74 < 1 ? -v74 : v74) - 1;
												v12 = v35;
												if (v35 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x32e80
													v183 = g25 + 232 * v35;
													if (*(int32_t *)(v183 + 152) >= 64) {
														// 0x32e94
														v267 = (int32_t) * (char *)(*(int32_t *)(v183 + 228) + 122);
														if (__asm_rlwinm_(v267, 0, 29, 29) != 0) {
															// 0x32ea4
															*(int32_t *)g35 = g30 + 2;
															*(int32_t *)g36 = g31 + 2;
															*(int32_t *)g29 = v12;
															// branch -> 0x32eb8
														}
													}
												}
											}
										}
										// 0x32eb8
										if (v16 == 0) {
											// 0x32ec0
											v184 = v20 + v22;
											v240 = *(int16_t *)(v21 + v184 + 224);
											result3 = v240;
											if (v240 != 0) {
												// 0x32ed4
												v185 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v185 + 112), 0, 25, 25) != 0) {
													// 0x32ef0
													v75 = result3;
													v34 = (0x10000 * v75 < 1 ? -v75 : v75) - 1;
													v12 = v34;
													if (v34 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32f14
														v186 = g25 + 232 * v34;
														if (*(int32_t *)(v186 + 152) >= 64) {
															// 0x32f28
															v268 = (int32_t) * (char *)(*(int32_t *)(v186 + 228) + 122);
															if (__asm_rlwinm_(v268, 0, 30, 30) != 0) {
																// 0x32f38
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31;
																*(int32_t *)g29 = v12;
																// branch -> 0x32f48
															}
														}
													}
												}
											}
										}
										// 0x32f48
										if (v16 != 0) {
											// 0x32f50
											v187 = v20 + v22;
											v241 = *(int16_t *)(v21 + v187 + 2);
											result3 = v241;
											if (v241 != 0) {
												// 0x32f64
												v188 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v188 + 1), 0, 25, 25) != 0) {
													// 0x32f80
													v76 = result3;
													v33 = (0x10000 * v76 < 1 ? -v76 : v76) - 1;
													v12 = v33;
													if (v33 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32fa4
														v189 = g25 + 232 * v33;
														if (*(int32_t *)(v189 + 152) >= 64) {
															// 0x32fb8
															v269 = (int32_t) * (char *)(*(int32_t *)(v189 + 228) + 122);
															if (__asm_rlwinm_(v269, 0, 30, 30) != 0) {
																// 0x32fc8
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31 + 1;
																*(int32_t *)g29 = v12;
																// branch -> 0x32fd8
															}
														}
													}
												}
											}
										}
										// 0x32fd8
										v270 = *(int16_t *)(v22 + v21 + v20);
										result3 = v270;
										if (v270 != 0) {
											// 0x32fe8
											v296 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
											if (__asm_rlwinm_(v296, 0, 25, 25) != 0) {
												// 0x33000
												v77 = result3;
												v32 = (0x10000 * v77 < 1 ? -v77 : v77) - 1;
												v12 = v32;
												if (v32 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x33024
													v190 = g25 + 232 * v32;
													if (*(int32_t *)(v190 + 152) >= 64) {
														// 0x33038
														if (*(char *)(*(int32_t *)(v190 + 228) + 122) % 2 != 0) {
															// 0x33048
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31;
															*(int32_t *)g29 = v12;
															// branch -> 0x33054
														}
													}
												}
											}
										}
										// 0x33054
										v191 = v20 + v22;
										v242 = *(int16_t *)(v21 + v191 + 226);
										result3 = v242;
										if (v242 != 0) {
											// 0x33068
											v192 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v192 + 113), 0, 25, 25) != 0) {
												// 0x33084
												v78 = result3;
												v31 = (0x10000 * v78 < 1 ? -v78 : v78) - 1;
												v12 = v31;
												if (v31 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x330a8
													v193 = g25 + 232 * v31;
													if (*(int32_t *)(v193 + 152) >= 64) {
														// 0x330bc
														v271 = (int32_t) * (char *)(*(int32_t *)(v193 + 228) + 122);
														if (__asm_rlwinm_(v271, 0, 30, 30) != 0) {
															// 0x330cc
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31 + 1;
															*(int32_t *)g29 = v12;
															// branch -> 0x330e0
														}
													}
												}
											}
										}
										// 0x330e0
										v79 = g29;
										v139 = (int32_t *)v79;
										v194 = *v139;
										v80 = v79;
										if (v194 != -1) {
											// 0x330ec
											if (*(int32_t *)(g25 + 232 * v194 + 160) % 2 != 0) {
												// 0x33100
												*v139 = -1;
												*(int32_t *)g35 = g30;
												*(int32_t *)g36 = g31;
												v80 = g29;
												// branch -> 0x33110
											} else {
												v80 = v79;
											}
										}
										// 0x33110
										v195 = *(int32_t *)v80;
										if (v195 != -1) {
											// 0x3311c
											if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v195 + 160), 0, 26, 26) != 0) {
												// 0x33130
												*(int32_t *)g29 = -1;
												// branch -> 0x33138
											}
										}
										// 0x33138
										if (*(int32_t *)g29 != -1) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x33144
									if (v16 == 0) {
										// 0x3314c
										v81 = g30;
										v82 = g31;
										v243 = *(int16_t *)(*(int32_t *)g22 + 224 * v81 + 2 * v82 + 450);
										result3 = v243;
										if (v243 != 0) {
											// 0x3316c
											v196 = *(int32_t *)g24 + 112 * v81;
											if (__asm_rlwinm_((int32_t) * (char *)(v196 + v82 + 225), 0, 25, 25) != 0) {
												// 0x33188
												v83 = result3;
												v30 = (0x10000 * v83 < 1 ? -v83 : v83) - 1;
												v12 = v30;
												v197 = 232 * v30 + g25;
												if (*(int32_t *)(v197 + 152) >= 64) {
													// 0x331b4
													v272 = (int32_t) * (char *)(*(int32_t *)(v197 + 228) + 122);
													if (__asm_rlwinm_(v272, 0, 29, 29) != 0) {
														// 0x331c4
														*(int32_t *)g35 = g30 + 2;
														*(int32_t *)g36 = g31 + 1;
														*(int32_t *)g29 = v12;
														// branch -> 0x331d8
													}
												}
											}
										}
									}
									// 0x331d8
									if (v16 != 0) {
										// 0x331e0
										v84 = g30;
										v85 = g31;
										v244 = *(int16_t *)(*(int32_t *)g22 + 224 * v84 + 2 * v85 + 228);
										result3 = v244;
										if (v244 != 0) {
											// 0x33200
											v198 = *(int32_t *)g24 + 112 * v84;
											if (__asm_rlwinm_((int32_t) * (char *)(v198 + v85 + 114), 0, 25, 25) != 0) {
												// 0x3321c
												v86 = result3;
												v29 = (0x10000 * v86 < 1 ? -v86 : v86) - 1;
												v12 = v29;
												v199 = 232 * v29 + g25;
												if (*(int32_t *)(v199 + 152) >= 64) {
													// 0x33248
													v273 = (int32_t) * (char *)(*(int32_t *)(v199 + 228) + 122);
													if (__asm_rlwinm_(v273, 0, 29, 29) != 0) {
														// 0x33258
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = g31 + 2;
														*(int32_t *)g29 = v12;
														// branch -> 0x3326c
													}
												}
											}
										}
									}
									// 0x3326c
									v87 = g30;
									v140 = 224 * v87;
									v20 = v140;
									v200 = *(int32_t *)g22;
									v22 = v200;
									v88 = g31;
									v141 = 2 * v88;
									v21 = v141;
									v245 = *(int16_t *)(v141 + v200 + v140 + 452);
									result3 = v245;
									if (v245 != 0) {
										// 0x3328c
										v201 = *(int32_t *)g24 + 112 * v87;
										if (__asm_rlwinm_((int32_t) * (char *)(v201 + v88 + 226), 0, 25, 25) != 0) {
											// 0x332a8
											v89 = result3;
											v28 = (0x10000 * v89 < 1 ? -v89 : v89) - 1;
											v12 = v28;
											v202 = 232 * v28 + g25;
											if (*(int32_t *)(v202 + 152) >= 64) {
												// 0x332d4
												v274 = (int32_t) * (char *)(*(int32_t *)(v202 + 228) + 122);
												if (__asm_rlwinm_(v274, 0, 29, 29) != 0) {
													// 0x332e4
													*(int32_t *)g35 = g30 + 2;
													*(int32_t *)g36 = g31 + 2;
													*(int32_t *)g29 = v12;
													// branch -> 0x332f8
												}
											}
										}
									}
									// 0x332f8
									if (v16 == 0) {
										// 0x33300
										v203 = v20 + v22;
										v246 = *(int16_t *)(v21 + v203 + 224);
										result3 = v246;
										if (v246 != 0) {
											// 0x33314
											v204 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v204 + 112), 0, 25, 25) != 0) {
												// 0x33330
												v90 = result3;
												v27 = (0x10000 * v90 < 1 ? -v90 : v90) - 1;
												v12 = v27;
												v205 = 232 * v27 + g25;
												if (*(int32_t *)(v205 + 152) >= 64) {
													// 0x3335c
													v275 = (int32_t) * (char *)(*(int32_t *)(v205 + 228) + 122);
													if (__asm_rlwinm_(v275, 0, 30, 30) != 0) {
														// 0x3336c
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = g31;
														*(int32_t *)g29 = v12;
														// branch -> 0x3337c
													}
												}
											}
										}
									}
									// 0x3337c
									if (v16 != 0) {
										// 0x33384
										v206 = v20 + v22;
										v247 = *(int16_t *)(v21 + v206 + 2);
										result3 = v247;
										if (v247 != 0) {
											// 0x33398
											v207 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v207 + 1), 0, 25, 25) != 0) {
												// 0x333b4
												v91 = result3;
												v26 = (0x10000 * v91 < 1 ? -v91 : v91) - 1;
												v12 = v26;
												v208 = 232 * v26 + g25;
												if (*(int32_t *)(v208 + 152) >= 64) {
													// 0x333e0
													v276 = (int32_t) * (char *)(*(int32_t *)(v208 + 228) + 122);
													if (__asm_rlwinm_(v276, 0, 30, 30) != 0) {
														// 0x333f0
														*(int32_t *)g35 = g30;
														*(int32_t *)g36 = g31 + 1;
														*(int32_t *)g29 = v12;
														// branch -> 0x33400
													}
												}
											}
										}
									}
									// 0x33400
									v277 = *(int16_t *)(v22 + v21 + v20);
									result3 = v277;
									if (v277 != 0) {
										// 0x33410
										v297 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
										if (__asm_rlwinm_(v297, 0, 25, 25) != 0) {
											// 0x33428
											v92 = result3;
											v45 = (0x10000 * v92 < 1 ? -v92 : v92) - 1;
											v12 = v45;
											v209 = 232 * v45 + g25;
											if (*(int32_t *)(v209 + 152) >= 64) {
												// 0x33454
												if (*(char *)(*(int32_t *)(v209 + 228) + 122) % 2 != 0) {
													// 0x33464
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = g31;
													*(int32_t *)g29 = v12;
													// branch -> 0x33470
												}
											}
										}
									}
									// 0x33470
									v210 = v20 + v22;
									v248 = *(int16_t *)(v21 + v210 + 226);
									result3 = v248;
									if (v248 != 0) {
										// 0x33484
										v211 = *(int32_t *)g24 + 112 * g30;
										if (__asm_rlwinm_((int32_t) * (char *)(g31 + v211 + 113), 0, 25, 25) != 0) {
											// 0x334a0
											v93 = result3;
											v44 = (0x10000 * v93 < 1 ? -v93 : v93) - 1;
											v12 = v44;
											v212 = 232 * v44 + g25;
											if (*(int32_t *)(v212 + 152) >= 64) {
												// 0x334cc
												v278 = (int32_t) * (char *)(*(int32_t *)(v212 + 228) + 122);
												if (__asm_rlwinm_(v278, 0, 30, 30) != 0) {
													// 0x334dc
													*(int32_t *)g35 = g30 + 1;
													*(int32_t *)g36 = g31 + 1;
													*(int32_t *)g29 = v12;
													// branch -> 0x334f0
												}
											}
										}
									}
									// 0x334f0
									v94 = g29;
									v142 = (int32_t *)v94;
									v213 = *v142;
									v95 = v94;
									if (v213 != -1) {
										// 0x334fc
										if (*(int32_t *)(g25 + 232 * v213 + 160) % 2 != 0) {
											// 0x33510
											*v142 = -1;
											*(int32_t *)g35 = g30;
											*(int32_t *)g36 = g31;
											v95 = g29;
											// branch -> 0x33520
										} else {
											v95 = v94;
										}
									}
									// 0x33520
									v214 = *(int32_t *)v95;
									if (v214 != -1) {
										// 0x3352c
										if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v214 + 160), 0, 26, 26) != 0) {
											// 0x33540
											*(int32_t *)g29 = -1;
											// branch -> 0x33640
										}
									}
								}
								// 0x33640
								v216 = *(int32_t *)g29;
								v3 = v216;
								if (v216 == -1) {
									// 0x3364c
									v101 = v16;
									v103 = v101;
									if (v101 == 0) {
										// 0x33654
										v102 = g30;
										v252 = *(char *)(g31 + *(int32_t *)v6 + 112 * v102 + 112);
										v283 = v252;
										if (v252 != 0) {
											// 0x33670
											if (0x1000000 * v283 < 0) {
												// 0x33680
												v43 = 0x1000000 * (-1 - v283) / 0x1000000;
												// branch -> 0x3368c
											} else {
												// 0x33678
												v43 = v283 - 1;
												// branch -> 0x3368c
											}
											// 0x3368c
											v12 = v43;
											v217 = 0x1000000 * v43 / 0x1000000;
											if (v217 != v175) {
												// 0x33698
												if (*(int32_t *)(g32 + 0x55ec * v217 + 404) != 0) {
													// 0x336ac
													*(int32_t *)g35 = v102 + 1;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)v12;
													v103 = v16;
													// branch -> 0x336bc
												} else {
													v103 = 0;
												}
											} else {
												v103 = 0;
											}
										} else {
											v103 = 0;
										}
									}
									// 0x336bc
									if (v103 != 0) {
										// 0x336c4
										v104 = g30;
										v253 = *(char *)(g31 + *(int32_t *)v6 + 112 * v104 + 1);
										v284 = v253;
										if (v253 != 0) {
											// 0x336e0
											if (0x1000000 * v284 < 0) {
												// 0x336f0
												v42 = 0x1000000 * (-1 - v284) / 0x1000000;
												// branch -> 0x336fc
											} else {
												// 0x336e8
												v42 = v284 - 1;
												// branch -> 0x336fc
											}
											// 0x336fc
											v12 = v42;
											v218 = 0x1000000 * v42 / 0x1000000;
											if (v218 != v175) {
												// 0x33708
												if (*(int32_t *)(g32 + 0x55ec * v218 + 404) != 0) {
													// 0x3371c
													*(int32_t *)g35 = v104;
													*(int32_t *)g36 = g31 + 1;
													*(char *)g33 = (char)v12;
													// branch -> 0x3372c
												}
											}
										}
									}
									// 0x3372c
									v105 = g30;
									v148 = 112 * v105;
									v15 = v148;
									v219 = *(int32_t *)v6;
									v7 = v219;
									v149 = g31;
									v285 = *(char *)(v149 + v148 + v219);
									v299 = v285;
									v150 = v149;
									v106 = v148;
									if (v285 != 0) {
										// 0x33744
										if (0x1000000 * v299 < 0) {
											// 0x33754
											v41 = 0x1000000 * (-1 - v299) / 0x1000000;
											// branch -> 0x33760
										} else {
											// 0x3374c
											v41 = v299 - 1;
											// branch -> 0x33760
										}
										// 0x33760
										result3 = v41;
										if (0x1000000 * v41 / 0x1000000 != v175) {
											// 0x3376c
											*(int32_t *)g35 = v105;
											*(int32_t *)g36 = g31;
											*(char *)g33 = (char)result3;
											v150 = g31;
											v106 = v15;
											// branch -> 0x33778
										} else {
											v150 = v149;
											v106 = v148;
										}
									}
									// 0x33778
									v220 = *(int32_t *)g24;
									v14 = v220;
									if (__asm_rlwinm_((int32_t) * (char *)(v220 + v106 + v150), 0, 29, 29) != 0) {
										// 0x3378c
										v107 = g32;
										v254 = *(int32_t *)(v107 + 56);
										v108 = g30;
										v110 = v108;
										v109 = v107;
										if (v108 == v254) {
											// 0x3379c
											if (g31 == *(int32_t *)(v107 + 60)) {
												// 0x337a8
												if (v175 != 0) {
													// 0x337b0
													*(int32_t *)g35 = v254;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)0;
													v110 = g30;
													v109 = g32;
													// branch -> 0x337c0
												} else {
													v110 = v254;
													v109 = v107;
												}
											} else {
												v110 = v254;
												v109 = v107;
											}
										}
										// 0x337c0
										v151 = v109 + 0x55ec;
										result3 = v151;
										v112 = v110;
										v111 = v151;
										if (v110 == *(int32_t *)(v109 + 0x5624)) {
											// 0x337d4
											if (g31 == *(int32_t *)(v109 + 0x5628)) {
												// 0x337e0
												if (v175 != 1) {
													// 0x337e8
													*(int32_t *)g35 = v110;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)1;
													v112 = g30;
													v111 = result3;
													// branch -> 0x337f8
												} else {
													v112 = v110;
													v111 = v151;
												}
											} else {
												v112 = v110;
												v111 = v151;
											}
										}
										// 0x337f8
										v152 = v111 + 0x55ec;
										result3 = v152;
										v114 = v112;
										v113 = v152;
										if (v112 == *(int32_t *)(v111 + 0x5624)) {
											// 0x3380c
											if (g31 == *(int32_t *)(v111 + 0x5628)) {
												// 0x33818
												if (v175 != 2) {
													// 0x33820
													*(int32_t *)g35 = v112;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)2;
													v114 = g30;
													v113 = result3;
													// branch -> 0x33830
												} else {
													v114 = v112;
													v113 = v152;
												}
											} else {
												v114 = v112;
												v113 = v152;
											}
										}
										// 0x33830
										if (v114 == *(int32_t *)(v113 + 0x5624)) {
											// 0x33844
											if (g31 == *(int32_t *)(v113 + 0x5628)) {
												// 0x33850
												if (v175 != 3) {
													// 0x33858
													*(int32_t *)g35 = v114;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)3;
													// branch -> 0x33868
												}
											}
										}
									}
									// 0x33868
									if (v176 == 8) {
										// 0x33870
										v13 = -1;
										// branch -> 0x33874
										while (true) {
											// 0x33874
											v221 = g30 - 1;
											v19 = v221;
											v11 = 3;
											v222 = g31 + 112 * v221 - 1 + v14;
											v22 = v222;
											v23 = -1;
											v115 = v222;
											// branch -> 0x33894
											goto lab_0x33894_9;
										}
									}
									// 0x33998
									v153 = g31;
									v255 = *(char *)(v153 + v15 + v7 + 113);
									v286 = v255;
									if (v255 != 0) {
										// 0x339ac
										if (0x1000000 * v286 < 0) {
											// 0x339bc
											v40 = 0x1000000 * (-1 - v286) / 0x1000000;
											// branch -> 0x339c8
										} else {
											// 0x339b4
											v40 = v286 - 1;
											// branch -> 0x339c8
										}
										// 0x339c8
										result3 = v40;
										v223 = 0x1000000 * v40 / 0x1000000;
										if (v223 != v175) {
											// 0x339d4
											if (*(int32_t *)(g32 + 0x55ec * v223 + 404) != 0) {
												// 0x339e8
												*(int32_t *)g35 = g30 + 1;
												*(int32_t *)g36 = v153 + 1;
												*(char *)g33 = (char)result3;
												// branch -> 0x339fc
											}
										}
									}
								}
								// 0x339fc
								if (v3 == -1) {
									// 0x33a04
									if (*(char *)g33 == -1) {
										// 0x33a14
										v116 = v16;
										v118 = v116;
										if (v116 == 0) {
											// 0x33a1c
											v117 = g30;
											v256 = *(char *)(g31 + *(int32_t *)g16 + 112 * v117 + 112);
											v287 = v256;
											if (v256 != 0) {
												// 0x33a38
												if (0x1000000 * v287 < 0) {
													// 0x33a48
													v39 = 0x1000000 * (-1 - v287) / 0x1000000;
													// branch -> 0x33a54
												} else {
													// 0x33a40
													v39 = v287 - 1;
													// branch -> 0x33a54
												}
												// 0x33a54
												v12 = v39;
												if (*(char *)(120 * 0x1000000 * v39 / 0x1000000 + v5 + 64) >= 2) {
													// 0x33a70
													*(int32_t *)g35 = v117 + 1;
													*(int32_t *)g36 = g31;
													*(char *)g20 = (char)v12;
													v118 = v16;
													// branch -> 0x33a80
												} else {
													v118 = 0;
												}
											} else {
												v118 = 0;
											}
										}
										// 0x33a80
										if (v118 != 0) {
											// 0x33a88
											v119 = g30;
											v257 = *(char *)(g31 + *(int32_t *)g16 + 112 * v119 + 1);
											v288 = v257;
											if (v257 != 0) {
												// 0x33aa4
												if (0x1000000 * v288 < 0) {
													// 0x33ab4
													v36 = 0x1000000 * (-1 - v288) / 0x1000000;
													// branch -> 0x33ac0
												} else {
													// 0x33aac
													v36 = v288 - 1;
													// branch -> 0x33ac0
												}
												// 0x33ac0
												v12 = v36;
												if (*(char *)(120 * 0x1000000 * v36 / 0x1000000 + v5 + 64) >= 2) {
													// 0x33adc
													*(int32_t *)g35 = v119;
													*(int32_t *)g36 = g31 + 1;
													*(char *)g20 = (char)v12;
													// branch -> 0x33aec
												}
											}
										}
										// 0x33aec
										v120 = g30;
										v154 = 112 * v120;
										v12 = v154;
										v224 = *(int32_t *)g16;
										result3 = v224;
										v155 = g31;
										v289 = *(char *)(v155 + v154 + v224);
										v300 = v289;
										v122 = v155;
										v156 = v154;
										v121 = v224;
										if (v289 != 0) {
											// 0x33b04
											if (0x1000000 * v300 < 0) {
												// 0x33b14
												v25 = 0x1000000 * (-1 - v300) / 0x1000000;
												// branch -> 0x33b20
											} else {
												// 0x33b0c
												v25 = v300 - 1;
												// branch -> 0x33b20
											}
											// 0x33b20
											v19 = v25;
											v258 = *(char *)(120 * 0x1000000 * v25 / 0x1000000 + v5 + 64);
											if (v258 != 1) {
												// 0x33b3c
												if (v258 != 3) {
													v122 = v155;
													// 0x33b50
													v259 = *(char *)(v224 + v154 + v122 + 113);
													v290 = v259;
													result3 = v290;
													if (v259 != 0) {
														// 0x33b64
														if (0x1000000 * v290 < 0) {
															// 0x33b74
															v24 = 0x1000000 * (-1 - v290) / 0x1000000;
															// branch -> 0x33b80
														} else {
															// 0x33b6c
															v24 = v290 - 1;
															// branch -> 0x33b80
														}
														// 0x33b80
														v12 = v24;
														v327 = *(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64);
														result3 = v327;
														if (v327 >= 2) {
															// 0x33b9c
															result3 = v122 + 1;
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = result3;
															*(char *)g20 = (char)v12;
															// branch -> 0x33bb0
														}
													}
													// 0x33bb0
													v325 = *(char *)g33;
													v12 = v325;
													if (v325 == -1) {
														// 0x33bc0
														v326 = *(char *)g20;
														v12 = v326;
														if (v326 == -1) {
															// 0x33bd0
															if (v3 == -1) {
																// 0x33bd8
																v123 = v16;
																v125 = v123;
																if (v123 == 0) {
																	// 0x33be0
																	v260 = *(int32_t *)(g23 - 0x768c);
																	v124 = g30;
																	v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																	v291 = v261;
																	if (v261 >= 1) {
																		// 0x33c00
																		v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
																		v12 = v225;
																		if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																			// 0x33c24
																			*(int32_t *)g35 = v124 + 1;
																			*(int32_t *)g36 = g31;
																			*(char *)g21 = (char)v12;
																			v125 = v16;
																			// branch -> 0x33c34
																		} else {
																			v125 = 0;
																		}
																	} else {
																		v125 = 0;
																	}
																}
																// 0x33c34
																if (v125 != 0) {
																	// 0x33c3c
																	v262 = *(int32_t *)(g23 - 0x768c);
																	v126 = g30;
																	v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																	v292 = v263;
																	if (v263 >= 1) {
																		// 0x33c5c
																		v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
																		v12 = v226;
																		if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																			// 0x33c80
																			*(int32_t *)g35 = v126;
																			*(int32_t *)g36 = g31 + 1;
																			*(char *)g21 = (char)v12;
																			// branch -> 0x33c90
																		}
																	}
																}
																// 0x33c90
																v127 = g30;
																v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
																result3 = v227;
																v293 = *(char *)(g31 + 112 * v127 + v227);
																v301 = v293;
																v12 = v293;
																if (v293 >= 1) {
																	// 0x33cac
																	v159 = v4 + 48;
																	v19 = v159;
																	v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
																	v294 = *(char *)(v159 + 368 * v228);
																	v12 = v294;
																	if (v294 != 1) {
																		// 0x33cd0
																		if (v294 != 3) {
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		}
																	}
																	// 0x33cd8
																	*(int32_t *)g35 = v127;
																	*(int32_t *)g36 = g31;
																	*(char *)g21 = (char)v228;
																	// branch -> 0x33ce4
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x33b44
											*(int32_t *)g35 = v120;
											*(int32_t *)g36 = g31;
											*(char *)g20 = (char)v19;
											v122 = g31;
											v156 = v12;
											v121 = result3;
											// branch -> 0x33b50
										}
										// 0x33b50
										v259 = *(char *)(v121 + v156 + v122 + 113);
										v290 = v259;
										if (v259 != 0) {
											// 0x33b64
											if (0x1000000 * v290 < 0) {
												// 0x33b74
												v24 = 0x1000000 * (-1 - v290) / 0x1000000;
												// branch -> 0x33b80
											} else {
												// 0x33b6c
												v24 = v290 - 1;
												// branch -> 0x33b80
											}
											// 0x33b80
											v12 = v24;
											if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
												// 0x33b9c
												*(int32_t *)g35 = g30 + 1;
												*(int32_t *)g36 = v122 + 1;
												*(char *)g20 = (char)v12;
												// branch -> 0x33bb0
											}
										}
									}
								}
								// 0x33bb0
								if (*(char *)g33 == -1) {
									// 0x33bc0
									if (*(char *)g20 == -1) {
										// 0x33bd0
										if (v3 == -1) {
											// 0x33bd8
											v123 = v16;
											v125 = v123;
											if (v123 == 0) {
												// 0x33be0
												v260 = *(int32_t *)(g23 - 0x768c);
												v124 = g30;
												v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
												v291 = v261;
												if (v261 >= 1) {
													// 0x33c00
													v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
													v12 = v225;
													if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
														// 0x33c24
														*(int32_t *)g35 = v124 + 1;
														*(int32_t *)g36 = g31;
														*(char *)g21 = (char)v12;
														v125 = v16;
														// branch -> 0x33c34
													} else {
														v125 = 0;
													}
												} else {
													v125 = 0;
												}
											}
											// 0x33c34
											if (v125 != 0) {
												// 0x33c3c
												v262 = *(int32_t *)(g23 - 0x768c);
												v126 = g30;
												v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
												v292 = v263;
												if (v263 >= 1) {
													// 0x33c5c
													v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
													v12 = v226;
													if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
														// 0x33c80
														*(int32_t *)g35 = v126;
														*(int32_t *)g36 = g31 + 1;
														*(char *)g21 = (char)v12;
														// branch -> 0x33c90
													}
												}
											}
											// 0x33c90
											v127 = g30;
											v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
											v293 = *(char *)(g31 + 112 * v127 + v227);
											v301 = v293;
											if (v293 >= 1) {
												// 0x33cac
												v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
												v294 = *(char *)(v4 + 48 + 368 * v228);
												if (v294 != 1) {
													// 0x33cd0
													if (v294 != 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x33cd8
												*(int32_t *)g35 = v127;
												*(int32_t *)g36 = g31;
												*(char *)g21 = (char)v228;
												// branch -> 0x33ce4
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					} else {
						// 0x32c38
						function_2ec14(v236, v175, v235, v176);
						// branch -> 0x33da4
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x32c1c
			*(int32_t *)g35 = g30;
			*(int32_t *)g36 = g31;
			// branch -> 0x33da4
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x32b34
	v63 = 1;
	if (v60 == 0) {
		// 0x32b3c
		v61 = 1;
		if (v172 <= v171) {
			// 0x32b4c
			if (v134 + (v233 || -32) > v233 - 33) {
				// 0x32b54
				v61 = 0;
				// branch -> 0x32b58
			} else {
				v61 = 1;
			}
		}
		// 0x32b58
		v62 = 0;
		if (v61 != 0) {
			// 0x32b60
			if (v133 <= 31) {
				// 0x32b68
				v62 = 1;
				// branch -> 0x32b6c
			} else {
				v62 = 0;
			}
		}
		// 0x32b6c
		if (v62 == 0) {
			// 0x32b74
			v63 = 0;
			// branch -> 0x32b78
		} else {
			v63 = 1;
		}
	}
	// 0x32b78
	v12 = -1;
	v16 = v63;
	*(int32_t *)(v46 - 0x4f84) = *(int32_t *)g29;
	*(int32_t *)g29 = v12;
	*(char *)g20 = (char)v12;
	*(char *)g21 = (char)v12;
	if (*(char *)*(int32_t *)(g23 - 0x772c) != -1) {
		// 0x32ba8
		*(int32_t *)*(int32_t *)(g23 - 0x7670) = 1;
		// branch -> 0x32bb4
	}
	// 0x32bb4
	v64 = g23;
	v235 = *(int32_t *)(v64 - 0x7674);
	v12 = 0;
	*(char *)*(int32_t *)(v64 - 0x772c) = -1;
	*(char *)g33 = (char)-1;
	*(int32_t *)v235 = v12;
	*(int32_t *)*(int32_t *)(g23 - 0x76d4) = v12;
	*(int32_t *)*(int32_t *)(g23 - 0x7740) = v12;
	v65 = g23;
	v175 = *(int32_t *)*(int32_t *)(v65 - 0x77ac);
	if (*(char *)(g32 + 0x55ec * v175 + 313) == 0) {
		// 0x32bfc
		v176 = *(int32_t *)*(int32_t *)(v65 - 0x7744);
		if (v176 <= 11) {
			// 0x32c0c
			if (*(int32_t *)*(int32_t *)(v65 - 0x76b8) == 0) {
				// 0x32c28
				v236 = *(int32_t *)(v65 - 0x76ac);
				if (*(int32_t *)v236 < 353) {
					// 0x32c40
					if (*(int32_t *)*(int32_t *)(v65 - 0x7678) == 0) {
						// 0x32c50
						if (*(int32_t *)*(int32_t *)(v65 - 0x77bc) != 0) {
							// 0x32c60
							if (*(int32_t *)v3 >= 321) {
								// 0x32c6c
								*(char *)*(int32_t *)(g23 - 0x772c) = (char)function_5ae34();
								// branch -> 0x33da4
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x32c7c
						if (*(int32_t *)*(int32_t *)(v65 - 0x77c0) != 0) {
							// 0x32c8c
							if (*(int32_t *)v3 > 320) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x32c98
						if (*(int32_t *)*(int32_t *)(v65 - 0x77c4) == 0) {
							// 0x32ca8
							if (*(int32_t *)*(int32_t *)(v65 - 0x77c8) == 0) {
								// 0x32cc4
								if (*(char *)*(int32_t *)(v65 - 0x7794) == 0) {
									// 0x3354c
									v96 = v16;
									v98 = v96;
									if (v96 == 0) {
										// 0x33554
										v97 = g30;
										v249 = *(int16_t *)(*(int32_t *)g22 + 224 * v97 + 2 * g31 + 224);
										v279 = v249;
										if (v249 >= 1) {
											// 0x33574
											*(int32_t *)g29 = v279 - 1;
											*(int32_t *)g35 = v97 + 1;
											*(int32_t *)g36 = g31;
											v98 = v16;
											// branch -> 0x33588
										} else {
											v98 = 0;
										}
									}
									// 0x33588
									if (v98 != 0) {
										// 0x33590
										v99 = g31;
										v250 = *(int16_t *)(*(int32_t *)g22 + 224 * g30 + 2 * v99 + 2);
										v280 = v250;
										if (v250 >= 1) {
											// 0x335b0
											*(int32_t *)g29 = v280 - 1;
											*(int32_t *)g35 = g30;
											*(int32_t *)g36 = v99 + 1;
											// branch -> 0x335c4
										}
									}
									// 0x335c4
									v143 = 224 * g30;
									result3 = v143;
									v215 = *(int32_t *)g22;
									v19 = v215;
									v144 = 2 * g31;
									v12 = v144;
									v281 = *(int16_t *)(v144 + v143 + v215);
									v298 = v281;
									v146 = v144;
									v145 = v143;
									v100 = v215;
									if (v281 >= 1) {
										// 0x335e0
										*(int32_t *)g29 = v298 - 1;
										*(int32_t *)g35 = g30;
										*(int32_t *)g36 = g31;
										v146 = v12;
										v145 = result3;
										v100 = v19;
										// branch -> 0x335f0
									}
									// 0x335f0
									v251 = *(int16_t *)(v145 + v146 + v100 + 226);
									v282 = v251;
									if (v251 >= 1) {
										// 0x33604
										*(int32_t *)g29 = v282 - 1;
										*(int32_t *)g35 = g30 + 1;
										*(int32_t *)g36 = g31 + 1;
										// branch -> 0x3361c
									}
									// 0x3361c
									v147 = (int32_t *)g29;
									if (*(int32_t *)(*(int32_t *)(g23 - 0x7758) + 268 * *v147 + 84) == 0) {
										// 0x33638
										*v147 = -1;
										// branch -> 0x33640
									}
								} else {
									// 0x32cd4
									if (*(int32_t *)(v65 - 0x4f84) != -1) {
										// 0x32ce0
										if (v16 == 0) {
											// 0x32ce8
											v66 = g30;
											v67 = g31;
											v237 = *(int16_t *)(*(int32_t *)g22 + 224 * v66 + 2 * v67 + 450);
											result3 = v237;
											if (v237 != 0) {
												// 0x32d08
												v177 = *(int32_t *)g24 + 112 * v66;
												if (__asm_rlwinm_((int32_t) * (char *)(v177 + v67 + 225), 0, 25, 25) != 0) {
													// 0x32d24
													v68 = result3;
													v38 = (0x10000 * v68 < 1 ? -v68 : v68) - 1;
													v12 = v38;
													if (v38 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32d48
														v178 = g25 + 232 * v38;
														if (*(int32_t *)(v178 + 152) >= 64) {
															// 0x32d5c
															v265 = (int32_t) * (char *)(*(int32_t *)(v178 + 228) + 122);
															if (__asm_rlwinm_(v265, 0, 29, 29) != 0) {
																// 0x32d6c
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31 + 2;
																*(int32_t *)g29 = v12;
																// branch -> 0x32d80
															}
														}
													}
												}
											}
										}
										// 0x32d80
										if (v16 != 0) {
											// 0x32d88
											v69 = g30;
											v70 = g31;
											v238 = *(int16_t *)(*(int32_t *)g22 + 224 * v69 + 2 * v70 + 228);
											result3 = v238;
											if (v238 != 0) {
												// 0x32da8
												v179 = *(int32_t *)g24 + 112 * v69;
												if (__asm_rlwinm_((int32_t) * (char *)(v179 + v70 + 114), 0, 25, 25) != 0) {
													// 0x32dc4
													v71 = result3;
													v37 = (0x10000 * v71 < 1 ? -v71 : v71) - 1;
													v12 = v37;
													if (v37 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32de8
														v180 = g25 + 232 * v37;
														if (*(int32_t *)(v180 + 152) >= 64) {
															// 0x32dfc
															v266 = (int32_t) * (char *)(*(int32_t *)(v180 + 228) + 122);
															if (__asm_rlwinm_(v266, 0, 29, 29) != 0) {
																// 0x32e0c
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31 + 2;
																*(int32_t *)g29 = v12;
																// branch -> 0x32e20
															}
														}
													}
												}
											}
										}
										// 0x32e20
										v72 = g30;
										v137 = 224 * v72;
										v20 = v137;
										v181 = *(int32_t *)g22;
										v22 = v181;
										v73 = g31;
										v138 = 2 * v73;
										v21 = v138;
										v239 = *(int16_t *)(v138 + v181 + v137 + 452);
										result3 = v239;
										if (v239 != 0) {
											// 0x32e40
											v182 = *(int32_t *)g24 + 112 * v72;
											if (__asm_rlwinm_((int32_t) * (char *)(v182 + v73 + 226), 0, 25, 25) != 0) {
												// 0x32e5c
												v74 = result3;
												v35 = (0x10000 * v74 < 1 ? -v74 : v74) - 1;
												v12 = v35;
												if (v35 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x32e80
													v183 = g25 + 232 * v35;
													if (*(int32_t *)(v183 + 152) >= 64) {
														// 0x32e94
														v267 = (int32_t) * (char *)(*(int32_t *)(v183 + 228) + 122);
														if (__asm_rlwinm_(v267, 0, 29, 29) != 0) {
															// 0x32ea4
															*(int32_t *)g35 = g30 + 2;
															*(int32_t *)g36 = g31 + 2;
															*(int32_t *)g29 = v12;
															// branch -> 0x32eb8
														}
													}
												}
											}
										}
										// 0x32eb8
										if (v16 == 0) {
											// 0x32ec0
											v184 = v20 + v22;
											v240 = *(int16_t *)(v21 + v184 + 224);
											result3 = v240;
											if (v240 != 0) {
												// 0x32ed4
												v185 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v185 + 112), 0, 25, 25) != 0) {
													// 0x32ef0
													v75 = result3;
													v34 = (0x10000 * v75 < 1 ? -v75 : v75) - 1;
													v12 = v34;
													if (v34 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32f14
														v186 = g25 + 232 * v34;
														if (*(int32_t *)(v186 + 152) >= 64) {
															// 0x32f28
															v268 = (int32_t) * (char *)(*(int32_t *)(v186 + 228) + 122);
															if (__asm_rlwinm_(v268, 0, 30, 30) != 0) {
																// 0x32f38
																*(int32_t *)g35 = g30 + 1;
																*(int32_t *)g36 = g31;
																*(int32_t *)g29 = v12;
																// branch -> 0x32f48
															}
														}
													}
												}
											}
										}
										// 0x32f48
										if (v16 != 0) {
											// 0x32f50
											v187 = v20 + v22;
											v241 = *(int16_t *)(v21 + v187 + 2);
											result3 = v241;
											if (v241 != 0) {
												// 0x32f64
												v188 = *(int32_t *)g24 + 112 * g30;
												if (__asm_rlwinm_((int32_t) * (char *)(g31 + v188 + 1), 0, 25, 25) != 0) {
													// 0x32f80
													v76 = result3;
													v33 = (0x10000 * v76 < 1 ? -v76 : v76) - 1;
													v12 = v33;
													if (v33 == *(int32_t *)(g23 - 0x4f84)) {
														// 0x32fa4
														v189 = g25 + 232 * v33;
														if (*(int32_t *)(v189 + 152) >= 64) {
															// 0x32fb8
															v269 = (int32_t) * (char *)(*(int32_t *)(v189 + 228) + 122);
															if (__asm_rlwinm_(v269, 0, 30, 30) != 0) {
																// 0x32fc8
																*(int32_t *)g35 = g30;
																*(int32_t *)g36 = g31 + 1;
																*(int32_t *)g29 = v12;
																// branch -> 0x32fd8
															}
														}
													}
												}
											}
										}
										// 0x32fd8
										v270 = *(int16_t *)(v22 + v21 + v20);
										result3 = v270;
										if (v270 != 0) {
											// 0x32fe8
											v296 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
											if (__asm_rlwinm_(v296, 0, 25, 25) != 0) {
												// 0x33000
												v77 = result3;
												v32 = (0x10000 * v77 < 1 ? -v77 : v77) - 1;
												v12 = v32;
												if (v32 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x33024
													v190 = g25 + 232 * v32;
													if (*(int32_t *)(v190 + 152) >= 64) {
														// 0x33038
														if (*(char *)(*(int32_t *)(v190 + 228) + 122) % 2 != 0) {
															// 0x33048
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31;
															*(int32_t *)g29 = v12;
															// branch -> 0x33054
														}
													}
												}
											}
										}
										// 0x33054
										v191 = v20 + v22;
										v242 = *(int16_t *)(v21 + v191 + 226);
										result3 = v242;
										if (v242 != 0) {
											// 0x33068
											v192 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v192 + 113), 0, 25, 25) != 0) {
												// 0x33084
												v78 = result3;
												v31 = (0x10000 * v78 < 1 ? -v78 : v78) - 1;
												v12 = v31;
												if (v31 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x330a8
													v193 = g25 + 232 * v31;
													if (*(int32_t *)(v193 + 152) >= 64) {
														// 0x330bc
														v271 = (int32_t) * (char *)(*(int32_t *)(v193 + 228) + 122);
														if (__asm_rlwinm_(v271, 0, 30, 30) != 0) {
															// 0x330cc
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31 + 1;
															*(int32_t *)g29 = v12;
															// branch -> 0x330e0
														}
													}
												}
											}
										}
										// 0x330e0
										v79 = g29;
										v139 = (int32_t *)v79;
										v194 = *v139;
										v80 = v79;
										if (v194 != -1) {
											// 0x330ec
											if (*(int32_t *)(g25 + 232 * v194 + 160) % 2 != 0) {
												// 0x33100
												*v139 = -1;
												*(int32_t *)g35 = g30;
												*(int32_t *)g36 = g31;
												v80 = g29;
												// branch -> 0x33110
											} else {
												v80 = v79;
											}
										}
										// 0x33110
										v195 = *(int32_t *)v80;
										if (v195 != -1) {
											// 0x3311c
											if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v195 + 160), 0, 26, 26) != 0) {
												// 0x33130
												*(int32_t *)g29 = -1;
												// branch -> 0x33138
											}
										}
										// 0x33138
										if (*(int32_t *)g29 != -1) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x33144
									if (v16 == 0) {
										// 0x3314c
										v81 = g30;
										v82 = g31;
										v243 = *(int16_t *)(*(int32_t *)g22 + 224 * v81 + 2 * v82 + 450);
										result3 = v243;
										if (v243 != 0) {
											// 0x3316c
											v196 = *(int32_t *)g24 + 112 * v81;
											if (__asm_rlwinm_((int32_t) * (char *)(v196 + v82 + 225), 0, 25, 25) != 0) {
												// 0x33188
												v83 = result3;
												v30 = (0x10000 * v83 < 1 ? -v83 : v83) - 1;
												v12 = v30;
												v197 = 232 * v30 + g25;
												if (*(int32_t *)(v197 + 152) >= 64) {
													// 0x331b4
													v272 = (int32_t) * (char *)(*(int32_t *)(v197 + 228) + 122);
													if (__asm_rlwinm_(v272, 0, 29, 29) != 0) {
														// 0x331c4
														*(int32_t *)g35 = g30 + 2;
														*(int32_t *)g36 = g31 + 1;
														*(int32_t *)g29 = v12;
														// branch -> 0x331d8
													}
												}
											}
										}
									}
									// 0x331d8
									if (v16 != 0) {
										// 0x331e0
										v84 = g30;
										v85 = g31;
										v244 = *(int16_t *)(*(int32_t *)g22 + 224 * v84 + 2 * v85 + 228);
										result3 = v244;
										if (v244 != 0) {
											// 0x33200
											v198 = *(int32_t *)g24 + 112 * v84;
											if (__asm_rlwinm_((int32_t) * (char *)(v198 + v85 + 114), 0, 25, 25) != 0) {
												// 0x3321c
												v86 = result3;
												v29 = (0x10000 * v86 < 1 ? -v86 : v86) - 1;
												v12 = v29;
												v199 = 232 * v29 + g25;
												if (*(int32_t *)(v199 + 152) >= 64) {
													// 0x33248
													v273 = (int32_t) * (char *)(*(int32_t *)(v199 + 228) + 122);
													if (__asm_rlwinm_(v273, 0, 29, 29) != 0) {
														// 0x33258
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = g31 + 2;
														*(int32_t *)g29 = v12;
														// branch -> 0x3326c
													}
												}
											}
										}
									}
									// 0x3326c
									v87 = g30;
									v140 = 224 * v87;
									v20 = v140;
									v200 = *(int32_t *)g22;
									v22 = v200;
									v88 = g31;
									v141 = 2 * v88;
									v21 = v141;
									v245 = *(int16_t *)(v141 + v200 + v140 + 452);
									result3 = v245;
									if (v245 != 0) {
										// 0x3328c
										v201 = *(int32_t *)g24 + 112 * v87;
										if (__asm_rlwinm_((int32_t) * (char *)(v201 + v88 + 226), 0, 25, 25) != 0) {
											// 0x332a8
											v89 = result3;
											v28 = (0x10000 * v89 < 1 ? -v89 : v89) - 1;
											v12 = v28;
											v202 = 232 * v28 + g25;
											if (*(int32_t *)(v202 + 152) >= 64) {
												// 0x332d4
												v274 = (int32_t) * (char *)(*(int32_t *)(v202 + 228) + 122);
												if (__asm_rlwinm_(v274, 0, 29, 29) != 0) {
													// 0x332e4
													*(int32_t *)g35 = g30 + 2;
													*(int32_t *)g36 = g31 + 2;
													*(int32_t *)g29 = v12;
													// branch -> 0x332f8
												}
											}
										}
									}
									// 0x332f8
									if (v16 == 0) {
										// 0x33300
										v203 = v20 + v22;
										v246 = *(int16_t *)(v21 + v203 + 224);
										result3 = v246;
										if (v246 != 0) {
											// 0x33314
											v204 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v204 + 112), 0, 25, 25) != 0) {
												// 0x33330
												v90 = result3;
												v27 = (0x10000 * v90 < 1 ? -v90 : v90) - 1;
												v12 = v27;
												v205 = 232 * v27 + g25;
												if (*(int32_t *)(v205 + 152) >= 64) {
													// 0x3335c
													v275 = (int32_t) * (char *)(*(int32_t *)(v205 + 228) + 122);
													if (__asm_rlwinm_(v275, 0, 30, 30) != 0) {
														// 0x3336c
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = g31;
														*(int32_t *)g29 = v12;
														// branch -> 0x3337c
													}
												}
											}
										}
									}
									// 0x3337c
									if (v16 != 0) {
										// 0x33384
										v206 = v20 + v22;
										v247 = *(int16_t *)(v21 + v206 + 2);
										result3 = v247;
										if (v247 != 0) {
											// 0x33398
											v207 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v207 + 1), 0, 25, 25) != 0) {
												// 0x333b4
												v91 = result3;
												v26 = (0x10000 * v91 < 1 ? -v91 : v91) - 1;
												v12 = v26;
												v208 = 232 * v26 + g25;
												if (*(int32_t *)(v208 + 152) >= 64) {
													// 0x333e0
													v276 = (int32_t) * (char *)(*(int32_t *)(v208 + 228) + 122);
													if (__asm_rlwinm_(v276, 0, 30, 30) != 0) {
														// 0x333f0
														*(int32_t *)g35 = g30;
														*(int32_t *)g36 = g31 + 1;
														*(int32_t *)g29 = v12;
														// branch -> 0x33400
													}
												}
											}
										}
									}
									// 0x33400
									v277 = *(int16_t *)(v22 + v21 + v20);
									result3 = v277;
									if (v277 != 0) {
										// 0x33410
										v297 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
										if (__asm_rlwinm_(v297, 0, 25, 25) != 0) {
											// 0x33428
											v92 = result3;
											v45 = (0x10000 * v92 < 1 ? -v92 : v92) - 1;
											v12 = v45;
											v209 = 232 * v45 + g25;
											if (*(int32_t *)(v209 + 152) >= 64) {
												// 0x33454
												if (*(char *)(*(int32_t *)(v209 + 228) + 122) % 2 != 0) {
													// 0x33464
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = g31;
													*(int32_t *)g29 = v12;
													// branch -> 0x33470
												}
											}
										}
									}
									// 0x33470
									v210 = v20 + v22;
									v248 = *(int16_t *)(v21 + v210 + 226);
									result3 = v248;
									if (v248 != 0) {
										// 0x33484
										v211 = *(int32_t *)g24 + 112 * g30;
										if (__asm_rlwinm_((int32_t) * (char *)(g31 + v211 + 113), 0, 25, 25) != 0) {
											// 0x334a0
											v93 = result3;
											v44 = (0x10000 * v93 < 1 ? -v93 : v93) - 1;
											v12 = v44;
											v212 = 232 * v44 + g25;
											if (*(int32_t *)(v212 + 152) >= 64) {
												// 0x334cc
												v278 = (int32_t) * (char *)(*(int32_t *)(v212 + 228) + 122);
												if (__asm_rlwinm_(v278, 0, 30, 30) != 0) {
													// 0x334dc
													*(int32_t *)g35 = g30 + 1;
													*(int32_t *)g36 = g31 + 1;
													*(int32_t *)g29 = v12;
													// branch -> 0x334f0
												}
											}
										}
									}
									// 0x334f0
									v94 = g29;
									v142 = (int32_t *)v94;
									v213 = *v142;
									v95 = v94;
									if (v213 != -1) {
										// 0x334fc
										if (*(int32_t *)(g25 + 232 * v213 + 160) % 2 != 0) {
											// 0x33510
											*v142 = -1;
											*(int32_t *)g35 = g30;
											*(int32_t *)g36 = g31;
											v95 = g29;
											// branch -> 0x33520
										} else {
											v95 = v94;
										}
									}
									// 0x33520
									v214 = *(int32_t *)v95;
									if (v214 != -1) {
										// 0x3352c
										if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v214 + 160), 0, 26, 26) != 0) {
											// 0x33540
											*(int32_t *)g29 = -1;
											// branch -> 0x33640
										}
									}
								}
								// 0x33640
								v216 = *(int32_t *)g29;
								v3 = v216;
								if (v216 == -1) {
									// 0x3364c
									v101 = v16;
									v103 = v101;
									if (v101 == 0) {
										// 0x33654
										v102 = g30;
										v252 = *(char *)(g31 + *(int32_t *)v6 + 112 * v102 + 112);
										v283 = v252;
										if (v252 != 0) {
											// 0x33670
											if (0x1000000 * v283 < 0) {
												// 0x33680
												v43 = 0x1000000 * (-1 - v283) / 0x1000000;
												// branch -> 0x3368c
											} else {
												// 0x33678
												v43 = v283 - 1;
												// branch -> 0x3368c
											}
											// 0x3368c
											v12 = v43;
											v217 = 0x1000000 * v43 / 0x1000000;
											if (v217 != v175) {
												// 0x33698
												if (*(int32_t *)(g32 + 0x55ec * v217 + 404) != 0) {
													// 0x336ac
													*(int32_t *)g35 = v102 + 1;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)v12;
													v103 = v16;
													// branch -> 0x336bc
												} else {
													v103 = 0;
												}
											} else {
												v103 = 0;
											}
										} else {
											v103 = 0;
										}
									}
									// 0x336bc
									if (v103 != 0) {
										// 0x336c4
										v104 = g30;
										v253 = *(char *)(g31 + *(int32_t *)v6 + 112 * v104 + 1);
										v284 = v253;
										if (v253 != 0) {
											// 0x336e0
											if (0x1000000 * v284 < 0) {
												// 0x336f0
												v42 = 0x1000000 * (-1 - v284) / 0x1000000;
												// branch -> 0x336fc
											} else {
												// 0x336e8
												v42 = v284 - 1;
												// branch -> 0x336fc
											}
											// 0x336fc
											v12 = v42;
											v218 = 0x1000000 * v42 / 0x1000000;
											if (v218 != v175) {
												// 0x33708
												if (*(int32_t *)(g32 + 0x55ec * v218 + 404) != 0) {
													// 0x3371c
													*(int32_t *)g35 = v104;
													*(int32_t *)g36 = g31 + 1;
													*(char *)g33 = (char)v12;
													// branch -> 0x3372c
												}
											}
										}
									}
									// 0x3372c
									v105 = g30;
									v148 = 112 * v105;
									v15 = v148;
									v219 = *(int32_t *)v6;
									v7 = v219;
									v149 = g31;
									v285 = *(char *)(v149 + v148 + v219);
									v299 = v285;
									v150 = v149;
									v106 = v148;
									if (v285 != 0) {
										// 0x33744
										if (0x1000000 * v299 < 0) {
											// 0x33754
											v41 = 0x1000000 * (-1 - v299) / 0x1000000;
											// branch -> 0x33760
										} else {
											// 0x3374c
											v41 = v299 - 1;
											// branch -> 0x33760
										}
										// 0x33760
										result3 = v41;
										if (0x1000000 * v41 / 0x1000000 != v175) {
											// 0x3376c
											*(int32_t *)g35 = v105;
											*(int32_t *)g36 = g31;
											*(char *)g33 = (char)result3;
											v150 = g31;
											v106 = v15;
											// branch -> 0x33778
										} else {
											v150 = v149;
											v106 = v148;
										}
									}
									// 0x33778
									v220 = *(int32_t *)g24;
									v14 = v220;
									if (__asm_rlwinm_((int32_t) * (char *)(v220 + v106 + v150), 0, 29, 29) != 0) {
										// 0x3378c
										v107 = g32;
										v254 = *(int32_t *)(v107 + 56);
										v108 = g30;
										v110 = v108;
										v109 = v107;
										if (v108 == v254) {
											// 0x3379c
											if (g31 == *(int32_t *)(v107 + 60)) {
												// 0x337a8
												if (v175 != 0) {
													// 0x337b0
													*(int32_t *)g35 = v254;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)0;
													v110 = g30;
													v109 = g32;
													// branch -> 0x337c0
												} else {
													v110 = v254;
													v109 = v107;
												}
											} else {
												v110 = v254;
												v109 = v107;
											}
										}
										// 0x337c0
										v151 = v109 + 0x55ec;
										result3 = v151;
										v112 = v110;
										v111 = v151;
										if (v110 == *(int32_t *)(v109 + 0x5624)) {
											// 0x337d4
											if (g31 == *(int32_t *)(v109 + 0x5628)) {
												// 0x337e0
												if (v175 != 1) {
													// 0x337e8
													*(int32_t *)g35 = v110;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)1;
													v112 = g30;
													v111 = result3;
													// branch -> 0x337f8
												} else {
													v112 = v110;
													v111 = v151;
												}
											} else {
												v112 = v110;
												v111 = v151;
											}
										}
										// 0x337f8
										v152 = v111 + 0x55ec;
										result3 = v152;
										v114 = v112;
										v113 = v152;
										if (v112 == *(int32_t *)(v111 + 0x5624)) {
											// 0x3380c
											if (g31 == *(int32_t *)(v111 + 0x5628)) {
												// 0x33818
												if (v175 != 2) {
													// 0x33820
													*(int32_t *)g35 = v112;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)2;
													v114 = g30;
													v113 = result3;
													// branch -> 0x33830
												} else {
													v114 = v112;
													v113 = v152;
												}
											} else {
												v114 = v112;
												v113 = v152;
											}
										}
										// 0x33830
										if (v114 == *(int32_t *)(v113 + 0x5624)) {
											// 0x33844
											if (g31 == *(int32_t *)(v113 + 0x5628)) {
												// 0x33850
												if (v175 != 3) {
													// 0x33858
													*(int32_t *)g35 = v114;
													*(int32_t *)g36 = g31;
													*(char *)g33 = (char)3;
													// branch -> 0x33868
												}
											}
										}
									}
									// 0x33868
									if (v176 == 8) {
										// 0x33870
										v13 = -1;
										// branch -> 0x33874
										while (true) {
											// 0x33874
											v221 = g30 - 1;
											v19 = v221;
											v11 = 3;
											v222 = g31 + 112 * v221 - 1 + v14;
											v22 = v222;
											v23 = -1;
											v115 = v222;
											// branch -> 0x33894
											goto lab_0x33894_9;
										}
									}
									// 0x33998
									v153 = g31;
									v255 = *(char *)(v153 + v15 + v7 + 113);
									v286 = v255;
									if (v255 != 0) {
										// 0x339ac
										if (0x1000000 * v286 < 0) {
											// 0x339bc
											v40 = 0x1000000 * (-1 - v286) / 0x1000000;
											// branch -> 0x339c8
										} else {
											// 0x339b4
											v40 = v286 - 1;
											// branch -> 0x339c8
										}
										// 0x339c8
										result3 = v40;
										v223 = 0x1000000 * v40 / 0x1000000;
										if (v223 != v175) {
											// 0x339d4
											if (*(int32_t *)(g32 + 0x55ec * v223 + 404) != 0) {
												// 0x339e8
												*(int32_t *)g35 = g30 + 1;
												*(int32_t *)g36 = v153 + 1;
												*(char *)g33 = (char)result3;
												// branch -> 0x339fc
											}
										}
									}
								}
								// 0x339fc
								if (v3 == -1) {
									// 0x33a04
									if (*(char *)g33 == -1) {
										// 0x33a14
										v116 = v16;
										v118 = v116;
										if (v116 == 0) {
											// 0x33a1c
											v117 = g30;
											v256 = *(char *)(g31 + *(int32_t *)g16 + 112 * v117 + 112);
											v287 = v256;
											if (v256 != 0) {
												// 0x33a38
												if (0x1000000 * v287 < 0) {
													// 0x33a48
													v39 = 0x1000000 * (-1 - v287) / 0x1000000;
													// branch -> 0x33a54
												} else {
													// 0x33a40
													v39 = v287 - 1;
													// branch -> 0x33a54
												}
												// 0x33a54
												v12 = v39;
												if (*(char *)(120 * 0x1000000 * v39 / 0x1000000 + v5 + 64) >= 2) {
													// 0x33a70
													*(int32_t *)g35 = v117 + 1;
													*(int32_t *)g36 = g31;
													*(char *)g20 = (char)v12;
													v118 = v16;
													// branch -> 0x33a80
												} else {
													v118 = 0;
												}
											} else {
												v118 = 0;
											}
										}
										// 0x33a80
										if (v118 != 0) {
											// 0x33a88
											v119 = g30;
											v257 = *(char *)(g31 + *(int32_t *)g16 + 112 * v119 + 1);
											v288 = v257;
											if (v257 != 0) {
												// 0x33aa4
												if (0x1000000 * v288 < 0) {
													// 0x33ab4
													v36 = 0x1000000 * (-1 - v288) / 0x1000000;
													// branch -> 0x33ac0
												} else {
													// 0x33aac
													v36 = v288 - 1;
													// branch -> 0x33ac0
												}
												// 0x33ac0
												v12 = v36;
												if (*(char *)(120 * 0x1000000 * v36 / 0x1000000 + v5 + 64) >= 2) {
													// 0x33adc
													*(int32_t *)g35 = v119;
													*(int32_t *)g36 = g31 + 1;
													*(char *)g20 = (char)v12;
													// branch -> 0x33aec
												}
											}
										}
										// 0x33aec
										v120 = g30;
										v154 = 112 * v120;
										v12 = v154;
										v224 = *(int32_t *)g16;
										result3 = v224;
										v155 = g31;
										v289 = *(char *)(v155 + v154 + v224);
										v300 = v289;
										v122 = v155;
										v156 = v154;
										v121 = v224;
										if (v289 != 0) {
											// 0x33b04
											if (0x1000000 * v300 < 0) {
												// 0x33b14
												v25 = 0x1000000 * (-1 - v300) / 0x1000000;
												// branch -> 0x33b20
											} else {
												// 0x33b0c
												v25 = v300 - 1;
												// branch -> 0x33b20
											}
											// 0x33b20
											v19 = v25;
											v258 = *(char *)(120 * 0x1000000 * v25 / 0x1000000 + v5 + 64);
											if (v258 != 1) {
												// 0x33b3c
												if (v258 != 3) {
													v122 = v155;
													// 0x33b50
													v259 = *(char *)(v224 + v154 + v122 + 113);
													v290 = v259;
													result3 = v290;
													if (v259 != 0) {
														// 0x33b64
														if (0x1000000 * v290 < 0) {
															// 0x33b74
															v24 = 0x1000000 * (-1 - v290) / 0x1000000;
															// branch -> 0x33b80
														} else {
															// 0x33b6c
															v24 = v290 - 1;
															// branch -> 0x33b80
														}
														// 0x33b80
														v12 = v24;
														v327 = *(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64);
														result3 = v327;
														if (v327 >= 2) {
															// 0x33b9c
															result3 = v122 + 1;
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = result3;
															*(char *)g20 = (char)v12;
															// branch -> 0x33bb0
														}
													}
													// 0x33bb0
													v325 = *(char *)g33;
													v12 = v325;
													if (v325 == -1) {
														// 0x33bc0
														v326 = *(char *)g20;
														v12 = v326;
														if (v326 == -1) {
															// 0x33bd0
															if (v3 == -1) {
																// 0x33bd8
																v123 = v16;
																v125 = v123;
																if (v123 == 0) {
																	// 0x33be0
																	v260 = *(int32_t *)(g23 - 0x768c);
																	v124 = g30;
																	v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																	v291 = v261;
																	if (v261 >= 1) {
																		// 0x33c00
																		v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
																		v12 = v225;
																		if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																			// 0x33c24
																			*(int32_t *)g35 = v124 + 1;
																			*(int32_t *)g36 = g31;
																			*(char *)g21 = (char)v12;
																			v125 = v16;
																			// branch -> 0x33c34
																		} else {
																			v125 = 0;
																		}
																	} else {
																		v125 = 0;
																	}
																}
																// 0x33c34
																if (v125 != 0) {
																	// 0x33c3c
																	v262 = *(int32_t *)(g23 - 0x768c);
																	v126 = g30;
																	v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																	v292 = v263;
																	if (v263 >= 1) {
																		// 0x33c5c
																		v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
																		v12 = v226;
																		if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																			// 0x33c80
																			*(int32_t *)g35 = v126;
																			*(int32_t *)g36 = g31 + 1;
																			*(char *)g21 = (char)v12;
																			// branch -> 0x33c90
																		}
																	}
																}
																// 0x33c90
																v127 = g30;
																v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
																result3 = v227;
																v293 = *(char *)(g31 + 112 * v127 + v227);
																v301 = v293;
																v12 = v293;
																if (v293 >= 1) {
																	// 0x33cac
																	v159 = v4 + 48;
																	v19 = v159;
																	v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
																	v294 = *(char *)(v159 + 368 * v228);
																	v12 = v294;
																	if (v294 != 1) {
																		// 0x33cd0
																		if (v294 != 3) {
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		}
																	}
																	// 0x33cd8
																	*(int32_t *)g35 = v127;
																	*(int32_t *)g36 = g31;
																	*(char *)g21 = (char)v228;
																	// branch -> 0x33ce4
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x33b44
											*(int32_t *)g35 = v120;
											*(int32_t *)g36 = g31;
											*(char *)g20 = (char)v19;
											v122 = g31;
											v156 = v12;
											v121 = result3;
											// branch -> 0x33b50
										}
										// 0x33b50
										v259 = *(char *)(v121 + v156 + v122 + 113);
										v290 = v259;
										if (v259 != 0) {
											// 0x33b64
											if (0x1000000 * v290 < 0) {
												// 0x33b74
												v24 = 0x1000000 * (-1 - v290) / 0x1000000;
												// branch -> 0x33b80
											} else {
												// 0x33b6c
												v24 = v290 - 1;
												// branch -> 0x33b80
											}
											// 0x33b80
											v12 = v24;
											if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
												// 0x33b9c
												*(int32_t *)g35 = g30 + 1;
												*(int32_t *)g36 = v122 + 1;
												*(char *)g20 = (char)v12;
												// branch -> 0x33bb0
											}
										}
									}
								}
								// 0x33bb0
								if (*(char *)g33 == -1) {
									// 0x33bc0
									if (*(char *)g20 == -1) {
										// 0x33bd0
										if (v3 == -1) {
											// 0x33bd8
											v123 = v16;
											v125 = v123;
											if (v123 == 0) {
												// 0x33be0
												v260 = *(int32_t *)(g23 - 0x768c);
												v124 = g30;
												v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
												v291 = v261;
												if (v261 >= 1) {
													// 0x33c00
													v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
													v12 = v225;
													if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
														// 0x33c24
														*(int32_t *)g35 = v124 + 1;
														*(int32_t *)g36 = g31;
														*(char *)g21 = (char)v12;
														v125 = v16;
														// branch -> 0x33c34
													} else {
														v125 = 0;
													}
												} else {
													v125 = 0;
												}
											}
											// 0x33c34
											if (v125 != 0) {
												// 0x33c3c
												v262 = *(int32_t *)(g23 - 0x768c);
												v126 = g30;
												v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
												v292 = v263;
												if (v263 >= 1) {
													// 0x33c5c
													v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
													v12 = v226;
													if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
														// 0x33c80
														*(int32_t *)g35 = v126;
														*(int32_t *)g36 = g31 + 1;
														*(char *)g21 = (char)v12;
														// branch -> 0x33c90
													}
												}
											}
											// 0x33c90
											v127 = g30;
											v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
											v293 = *(char *)(g31 + 112 * v127 + v227);
											v301 = v293;
											if (v293 >= 1) {
												// 0x33cac
												v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
												v294 = *(char *)(v4 + 48 + 368 * v228);
												if (v294 != 1) {
													// 0x33cd0
													if (v294 != 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x33cd8
												*(int32_t *)g35 = v127;
												*(int32_t *)g36 = g31;
												*(char *)g21 = (char)v228;
												// branch -> 0x33ce4
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x32cb8
						if (*(int32_t *)v3 >= 320) {
							// 0x32cc4
							if (*(char *)*(int32_t *)(v65 - 0x7794) == 0) {
								// 0x3354c
								v96 = v16;
								v98 = v96;
								if (v96 == 0) {
									// 0x33554
									v97 = g30;
									v249 = *(int16_t *)(*(int32_t *)g22 + 224 * v97 + 2 * g31 + 224);
									if (v249 >= 1) {
										// 0x33574
										*(int32_t *)g29 = (int32_t)v249 - 1;
										*(int32_t *)g35 = v97 + 1;
										*(int32_t *)g36 = g31;
										v98 = v16;
										// branch -> 0x33588
									} else {
										v98 = 0;
									}
								}
								// 0x33588
								if (v98 != 0) {
									// 0x33590
									v99 = g31;
									v250 = *(int16_t *)(*(int32_t *)g22 + 224 * g30 + 2 * v99 + 2);
									if (v250 >= 1) {
										// 0x335b0
										*(int32_t *)g29 = (int32_t)v250 - 1;
										*(int32_t *)g35 = g30;
										*(int32_t *)g36 = v99 + 1;
										// branch -> 0x335c4
									}
								}
								// 0x335c4
								v143 = 224 * g30;
								v215 = *(int32_t *)g22;
								v144 = 2 * g31;
								v281 = *(int16_t *)(v144 + v143 + v215);
								if (v281 >= 1) {
									// 0x335e0
									*(int32_t *)g29 = (int32_t)v281 - 1;
									*(int32_t *)g35 = g30;
									*(int32_t *)g36 = g31;
									// branch -> 0x335f0
								}
								// 0x335f0
								v251 = *(int16_t *)(v143 + v144 + v215 + 226);
								if (v251 >= 1) {
									// 0x33604
									*(int32_t *)g29 = (int32_t)v251 - 1;
									*(int32_t *)g35 = g30 + 1;
									*(int32_t *)g36 = g31 + 1;
									// branch -> 0x3361c
								}
								// 0x3361c
								v147 = (int32_t *)g29;
								if (*(int32_t *)(*(int32_t *)(g23 - 0x7758) + 268 * *v147 + 84) == 0) {
									// 0x33638
									*v147 = -1;
									// branch -> 0x33640
								}
							} else {
								// 0x32cd4
								if (*(int32_t *)(v65 - 0x4f84) != -1) {
									// 0x32ce0
									if (v16 == 0) {
										// 0x32ce8
										v66 = g30;
										v67 = g31;
										v237 = *(int16_t *)(*(int32_t *)g22 + 224 * v66 + 2 * v67 + 450);
										if (v237 != 0) {
											// 0x32d08
											v177 = *(int32_t *)g24 + 112 * v66;
											if (__asm_rlwinm_((int32_t) * (char *)(v177 + v67 + 225), 0, 25, 25) != 0) {
												// 0x32d24
												v68 = v237;
												v38 = (0x10000 * v68 < 1 ? -v68 : v68) - 1;
												if (v38 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x32d48
													v178 = g25 + 232 * v38;
													if (*(int32_t *)(v178 + 152) >= 64) {
														// 0x32d5c
														v265 = (int32_t) * (char *)(*(int32_t *)(v178 + 228) + 122);
														if (__asm_rlwinm_(v265, 0, 29, 29) != 0) {
															// 0x32d6c
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31 + 2;
															*(int32_t *)g29 = v38;
															// branch -> 0x32d80
														}
													}
												}
											}
										}
									}
									// 0x32d80
									if (v16 != 0) {
										// 0x32d88
										v69 = g30;
										v70 = g31;
										v238 = *(int16_t *)(*(int32_t *)g22 + 224 * v69 + 2 * v70 + 228);
										if (v238 != 0) {
											// 0x32da8
											v179 = *(int32_t *)g24 + 112 * v69;
											if (__asm_rlwinm_((int32_t) * (char *)(v179 + v70 + 114), 0, 25, 25) != 0) {
												// 0x32dc4
												v71 = v238;
												v37 = (0x10000 * v71 < 1 ? -v71 : v71) - 1;
												if (v37 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x32de8
													v180 = g25 + 232 * v37;
													if (*(int32_t *)(v180 + 152) >= 64) {
														// 0x32dfc
														v266 = (int32_t) * (char *)(*(int32_t *)(v180 + 228) + 122);
														if (__asm_rlwinm_(v266, 0, 29, 29) != 0) {
															// 0x32e0c
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31 + 2;
															*(int32_t *)g29 = v37;
															// branch -> 0x32e20
														}
													}
												}
											}
										}
									}
									// 0x32e20
									v72 = g30;
									v137 = 224 * v72;
									v20 = v137;
									v181 = *(int32_t *)g22;
									v22 = v181;
									v73 = g31;
									v138 = 2 * v73;
									v21 = v138;
									v239 = *(int16_t *)(v138 + v181 + v137 + 452);
									if (v239 != 0) {
										// 0x32e40
										v182 = *(int32_t *)g24 + 112 * v72;
										if (__asm_rlwinm_((int32_t) * (char *)(v182 + v73 + 226), 0, 25, 25) != 0) {
											// 0x32e5c
											v74 = v239;
											v35 = (0x10000 * v74 < 1 ? -v74 : v74) - 1;
											if (v35 == *(int32_t *)(g23 - 0x4f84)) {
												// 0x32e80
												v183 = g25 + 232 * v35;
												if (*(int32_t *)(v183 + 152) >= 64) {
													// 0x32e94
													v267 = (int32_t) * (char *)(*(int32_t *)(v183 + 228) + 122);
													if (__asm_rlwinm_(v267, 0, 29, 29) != 0) {
														// 0x32ea4
														*(int32_t *)g35 = g30 + 2;
														*(int32_t *)g36 = g31 + 2;
														*(int32_t *)g29 = v35;
														// branch -> 0x32eb8
													}
												}
											}
										}
									}
									// 0x32eb8
									if (v16 == 0) {
										// 0x32ec0
										v184 = v20 + v22;
										v240 = *(int16_t *)(v21 + v184 + 224);
										if (v240 != 0) {
											// 0x32ed4
											v185 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v185 + 112), 0, 25, 25) != 0) {
												// 0x32ef0
												v75 = v240;
												v34 = (0x10000 * v75 < 1 ? -v75 : v75) - 1;
												if (v34 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x32f14
													v186 = g25 + 232 * v34;
													if (*(int32_t *)(v186 + 152) >= 64) {
														// 0x32f28
														v268 = (int32_t) * (char *)(*(int32_t *)(v186 + 228) + 122);
														if (__asm_rlwinm_(v268, 0, 30, 30) != 0) {
															// 0x32f38
															*(int32_t *)g35 = g30 + 1;
															*(int32_t *)g36 = g31;
															*(int32_t *)g29 = v34;
															// branch -> 0x32f48
														}
													}
												}
											}
										}
									}
									// 0x32f48
									if (v16 != 0) {
										// 0x32f50
										v187 = v20 + v22;
										v241 = *(int16_t *)(v21 + v187 + 2);
										if (v241 != 0) {
											// 0x32f64
											v188 = *(int32_t *)g24 + 112 * g30;
											if (__asm_rlwinm_((int32_t) * (char *)(g31 + v188 + 1), 0, 25, 25) != 0) {
												// 0x32f80
												v76 = v241;
												v33 = (0x10000 * v76 < 1 ? -v76 : v76) - 1;
												if (v33 == *(int32_t *)(g23 - 0x4f84)) {
													// 0x32fa4
													v189 = g25 + 232 * v33;
													if (*(int32_t *)(v189 + 152) >= 64) {
														// 0x32fb8
														v269 = (int32_t) * (char *)(*(int32_t *)(v189 + 228) + 122);
														if (__asm_rlwinm_(v269, 0, 30, 30) != 0) {
															// 0x32fc8
															*(int32_t *)g35 = g30;
															*(int32_t *)g36 = g31 + 1;
															*(int32_t *)g29 = v33;
															// branch -> 0x32fd8
														}
													}
												}
											}
										}
									}
									// 0x32fd8
									v270 = *(int16_t *)(v22 + v21 + v20);
									if (v270 != 0) {
										// 0x32fe8
										v296 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
										if (__asm_rlwinm_(v296, 0, 25, 25) != 0) {
											// 0x33000
											v77 = v270;
											v32 = (0x10000 * v77 < 1 ? -v77 : v77) - 1;
											if (v32 == *(int32_t *)(g23 - 0x4f84)) {
												// 0x33024
												v190 = g25 + 232 * v32;
												if (*(int32_t *)(v190 + 152) >= 64) {
													// 0x33038
													if (*(char *)(*(int32_t *)(v190 + 228) + 122) % 2 != 0) {
														// 0x33048
														*(int32_t *)g35 = g30;
														*(int32_t *)g36 = g31;
														*(int32_t *)g29 = v32;
														// branch -> 0x33054
													}
												}
											}
										}
									}
									// 0x33054
									v191 = v20 + v22;
									v242 = *(int16_t *)(v21 + v191 + 226);
									if (v242 != 0) {
										// 0x33068
										v192 = *(int32_t *)g24 + 112 * g30;
										if (__asm_rlwinm_((int32_t) * (char *)(g31 + v192 + 113), 0, 25, 25) != 0) {
											// 0x33084
											v78 = v242;
											v31 = (0x10000 * v78 < 1 ? -v78 : v78) - 1;
											if (v31 == *(int32_t *)(g23 - 0x4f84)) {
												// 0x330a8
												v193 = g25 + 232 * v31;
												if (*(int32_t *)(v193 + 152) >= 64) {
													// 0x330bc
													v271 = (int32_t) * (char *)(*(int32_t *)(v193 + 228) + 122);
													if (__asm_rlwinm_(v271, 0, 30, 30) != 0) {
														// 0x330cc
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = g31 + 1;
														*(int32_t *)g29 = v31;
														// branch -> 0x330e0
													}
												}
											}
										}
									}
									// 0x330e0
									v79 = g29;
									v139 = (int32_t *)v79;
									v194 = *v139;
									v80 = v79;
									if (v194 != -1) {
										// 0x330ec
										if (*(int32_t *)(g25 + 232 * v194 + 160) % 2 != 0) {
											// 0x33100
											*v139 = -1;
											*(int32_t *)g35 = g30;
											*(int32_t *)g36 = g31;
											v80 = g29;
											// branch -> 0x33110
										} else {
											v80 = v79;
										}
									}
									// 0x33110
									v195 = *(int32_t *)v80;
									if (v195 != -1) {
										// 0x3311c
										if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v195 + 160), 0, 26, 26) != 0) {
											// 0x33130
											*(int32_t *)g29 = -1;
											// branch -> 0x33138
										}
									}
									// 0x33138
									if (*(int32_t *)g29 != -1) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x33144
								if (v16 == 0) {
									// 0x3314c
									v81 = g30;
									v82 = g31;
									v243 = *(int16_t *)(*(int32_t *)g22 + 224 * v81 + 2 * v82 + 450);
									if (v243 != 0) {
										// 0x3316c
										v196 = *(int32_t *)g24 + 112 * v81;
										if (__asm_rlwinm_((int32_t) * (char *)(v196 + v82 + 225), 0, 25, 25) != 0) {
											// 0x33188
											v83 = v243;
											v30 = (0x10000 * v83 < 1 ? -v83 : v83) - 1;
											v197 = 232 * v30 + g25;
											if (*(int32_t *)(v197 + 152) >= 64) {
												// 0x331b4
												v272 = (int32_t) * (char *)(*(int32_t *)(v197 + 228) + 122);
												if (__asm_rlwinm_(v272, 0, 29, 29) != 0) {
													// 0x331c4
													*(int32_t *)g35 = g30 + 2;
													*(int32_t *)g36 = g31 + 1;
													*(int32_t *)g29 = v30;
													// branch -> 0x331d8
												}
											}
										}
									}
								}
								// 0x331d8
								if (v16 != 0) {
									// 0x331e0
									v84 = g30;
									v85 = g31;
									v244 = *(int16_t *)(*(int32_t *)g22 + 224 * v84 + 2 * v85 + 228);
									if (v244 != 0) {
										// 0x33200
										v198 = *(int32_t *)g24 + 112 * v84;
										if (__asm_rlwinm_((int32_t) * (char *)(v198 + v85 + 114), 0, 25, 25) != 0) {
											// 0x3321c
											v86 = v244;
											v29 = (0x10000 * v86 < 1 ? -v86 : v86) - 1;
											v199 = 232 * v29 + g25;
											if (*(int32_t *)(v199 + 152) >= 64) {
												// 0x33248
												v273 = (int32_t) * (char *)(*(int32_t *)(v199 + 228) + 122);
												if (__asm_rlwinm_(v273, 0, 29, 29) != 0) {
													// 0x33258
													*(int32_t *)g35 = g30 + 1;
													*(int32_t *)g36 = g31 + 2;
													*(int32_t *)g29 = v29;
													// branch -> 0x3326c
												}
											}
										}
									}
								}
								// 0x3326c
								v87 = g30;
								v140 = 224 * v87;
								v20 = v140;
								v200 = *(int32_t *)g22;
								v22 = v200;
								v88 = g31;
								v141 = 2 * v88;
								v21 = v141;
								v245 = *(int16_t *)(v141 + v200 + v140 + 452);
								if (v245 != 0) {
									// 0x3328c
									v201 = *(int32_t *)g24 + 112 * v87;
									if (__asm_rlwinm_((int32_t) * (char *)(v201 + v88 + 226), 0, 25, 25) != 0) {
										// 0x332a8
										v89 = v245;
										v28 = (0x10000 * v89 < 1 ? -v89 : v89) - 1;
										v202 = 232 * v28 + g25;
										if (*(int32_t *)(v202 + 152) >= 64) {
											// 0x332d4
											v274 = (int32_t) * (char *)(*(int32_t *)(v202 + 228) + 122);
											if (__asm_rlwinm_(v274, 0, 29, 29) != 0) {
												// 0x332e4
												*(int32_t *)g35 = g30 + 2;
												*(int32_t *)g36 = g31 + 2;
												*(int32_t *)g29 = v28;
												// branch -> 0x332f8
											}
										}
									}
								}
								// 0x332f8
								if (v16 == 0) {
									// 0x33300
									v203 = v20 + v22;
									v246 = *(int16_t *)(v21 + v203 + 224);
									if (v246 != 0) {
										// 0x33314
										v204 = *(int32_t *)g24 + 112 * g30;
										if (__asm_rlwinm_((int32_t) * (char *)(g31 + v204 + 112), 0, 25, 25) != 0) {
											// 0x33330
											v90 = v246;
											v27 = (0x10000 * v90 < 1 ? -v90 : v90) - 1;
											v205 = 232 * v27 + g25;
											if (*(int32_t *)(v205 + 152) >= 64) {
												// 0x3335c
												v275 = (int32_t) * (char *)(*(int32_t *)(v205 + 228) + 122);
												if (__asm_rlwinm_(v275, 0, 30, 30) != 0) {
													// 0x3336c
													*(int32_t *)g35 = g30 + 1;
													*(int32_t *)g36 = g31;
													*(int32_t *)g29 = v27;
													// branch -> 0x3337c
												}
											}
										}
									}
								}
								// 0x3337c
								if (v16 != 0) {
									// 0x33384
									v206 = v20 + v22;
									v247 = *(int16_t *)(v21 + v206 + 2);
									if (v247 != 0) {
										// 0x33398
										v207 = *(int32_t *)g24 + 112 * g30;
										if (__asm_rlwinm_((int32_t) * (char *)(g31 + v207 + 1), 0, 25, 25) != 0) {
											// 0x333b4
											v91 = v247;
											v26 = (0x10000 * v91 < 1 ? -v91 : v91) - 1;
											v208 = 232 * v26 + g25;
											if (*(int32_t *)(v208 + 152) >= 64) {
												// 0x333e0
												v276 = (int32_t) * (char *)(*(int32_t *)(v208 + 228) + 122);
												if (__asm_rlwinm_(v276, 0, 30, 30) != 0) {
													// 0x333f0
													*(int32_t *)g35 = g30;
													*(int32_t *)g36 = g31 + 1;
													*(int32_t *)g29 = v26;
													// branch -> 0x33400
												}
											}
										}
									}
								}
								// 0x33400
								v277 = *(int16_t *)(v22 + v21 + v20);
								if (v277 != 0) {
									// 0x33410
									v297 = (int32_t) * (char *)(g31 + 112 * g30 + *(int32_t *)g24);
									if (__asm_rlwinm_(v297, 0, 25, 25) != 0) {
										// 0x33428
										v92 = v277;
										v45 = (0x10000 * v92 < 1 ? -v92 : v92) - 1;
										v209 = 232 * v45 + g25;
										if (*(int32_t *)(v209 + 152) >= 64) {
											// 0x33454
											if (*(char *)(*(int32_t *)(v209 + 228) + 122) % 2 != 0) {
												// 0x33464
												*(int32_t *)g35 = g30;
												*(int32_t *)g36 = g31;
												*(int32_t *)g29 = v45;
												// branch -> 0x33470
											}
										}
									}
								}
								// 0x33470
								v210 = v20 + v22;
								v248 = *(int16_t *)(v21 + v210 + 226);
								if (v248 != 0) {
									// 0x33484
									v211 = *(int32_t *)g24 + 112 * g30;
									if (__asm_rlwinm_((int32_t) * (char *)(g31 + v211 + 113), 0, 25, 25) != 0) {
										// 0x334a0
										v93 = v248;
										v44 = (0x10000 * v93 < 1 ? -v93 : v93) - 1;
										v212 = 232 * v44 + g25;
										if (*(int32_t *)(v212 + 152) >= 64) {
											// 0x334cc
											v278 = (int32_t) * (char *)(*(int32_t *)(v212 + 228) + 122);
											if (__asm_rlwinm_(v278, 0, 30, 30) != 0) {
												// 0x334dc
												*(int32_t *)g35 = g30 + 1;
												*(int32_t *)g36 = g31 + 1;
												*(int32_t *)g29 = v44;
												// branch -> 0x334f0
											}
										}
									}
								}
								// 0x334f0
								v94 = g29;
								v142 = (int32_t *)v94;
								v213 = *v142;
								v95 = v94;
								if (v213 != -1) {
									// 0x334fc
									if (*(int32_t *)(g25 + 232 * v213 + 160) % 2 != 0) {
										// 0x33510
										*v142 = -1;
										*(int32_t *)g35 = g30;
										*(int32_t *)g36 = g31;
										v95 = g29;
										// branch -> 0x33520
									} else {
										v95 = v94;
									}
								}
								// 0x33520
								v214 = *(int32_t *)v95;
								if (v214 != -1) {
									// 0x3352c
									if (__asm_rlwinm_(*(int32_t *)(g25 + 232 * v214 + 160), 0, 26, 26) != 0) {
										// 0x33540
										*(int32_t *)g29 = -1;
										// branch -> 0x33640
									}
								}
							}
							// 0x33640
							v216 = *(int32_t *)g29;
							v3 = v216;
							if (v216 == -1) {
								// 0x3364c
								v101 = v16;
								v103 = v101;
								if (v101 == 0) {
									// 0x33654
									v102 = g30;
									v252 = *(char *)(g31 + *(int32_t *)v6 + 112 * v102 + 112);
									v283 = v252;
									if (v252 != 0) {
										// 0x33670
										if (0x1000000 * v283 < 0) {
											// 0x33680
											v43 = 0x1000000 * (-1 - v283) / 0x1000000;
											// branch -> 0x3368c
										} else {
											// 0x33678
											v43 = v283 - 1;
											// branch -> 0x3368c
										}
										// 0x3368c
										v217 = 0x1000000 * v43 / 0x1000000;
										if (v217 != v175) {
											// 0x33698
											if (*(int32_t *)(g32 + 0x55ec * v217 + 404) != 0) {
												// 0x336ac
												*(int32_t *)g35 = v102 + 1;
												*(int32_t *)g36 = g31;
												*(char *)g33 = (char)v43;
												v103 = v16;
												// branch -> 0x336bc
											} else {
												v103 = 0;
											}
										} else {
											v103 = 0;
										}
									} else {
										v103 = 0;
									}
								}
								// 0x336bc
								if (v103 != 0) {
									// 0x336c4
									v104 = g30;
									v253 = *(char *)(g31 + *(int32_t *)v6 + 112 * v104 + 1);
									v284 = v253;
									if (v253 != 0) {
										// 0x336e0
										if (0x1000000 * v284 < 0) {
											// 0x336f0
											v42 = 0x1000000 * (-1 - v284) / 0x1000000;
											// branch -> 0x336fc
										} else {
											// 0x336e8
											v42 = v284 - 1;
											// branch -> 0x336fc
										}
										// 0x336fc
										v218 = 0x1000000 * v42 / 0x1000000;
										if (v218 != v175) {
											// 0x33708
											if (*(int32_t *)(g32 + 0x55ec * v218 + 404) != 0) {
												// 0x3371c
												*(int32_t *)g35 = v104;
												*(int32_t *)g36 = g31 + 1;
												*(char *)g33 = (char)v42;
												// branch -> 0x3372c
											}
										}
									}
								}
								// 0x3372c
								v105 = g30;
								v148 = 112 * v105;
								v15 = v148;
								v219 = *(int32_t *)v6;
								v7 = v219;
								v149 = g31;
								v285 = *(char *)(v149 + v148 + v219);
								v299 = v285;
								v150 = v149;
								v106 = v148;
								if (v285 != 0) {
									// 0x33744
									if (0x1000000 * v299 < 0) {
										// 0x33754
										v41 = 0x1000000 * (-1 - v299) / 0x1000000;
										// branch -> 0x33760
									} else {
										// 0x3374c
										v41 = v299 - 1;
										// branch -> 0x33760
									}
									// 0x33760
									if (0x1000000 * v41 / 0x1000000 != v175) {
										// 0x3376c
										*(int32_t *)g35 = v105;
										*(int32_t *)g36 = g31;
										*(char *)g33 = (char)v41;
										v150 = g31;
										v106 = v15;
										// branch -> 0x33778
									} else {
										v150 = v149;
										v106 = v148;
									}
								}
								// 0x33778
								v220 = *(int32_t *)g24;
								if (__asm_rlwinm_((int32_t) * (char *)(v220 + v106 + v150), 0, 29, 29) != 0) {
									// 0x3378c
									v107 = g32;
									v254 = *(int32_t *)(v107 + 56);
									v108 = g30;
									v110 = v108;
									v109 = v107;
									if (v108 == v254) {
										// 0x3379c
										if (g31 == *(int32_t *)(v107 + 60)) {
											// 0x337a8
											if (v175 != 0) {
												// 0x337b0
												*(int32_t *)g35 = v254;
												*(int32_t *)g36 = g31;
												*(char *)g33 = (char)0;
												v110 = g30;
												v109 = g32;
												// branch -> 0x337c0
											} else {
												v110 = v254;
												v109 = v107;
											}
										} else {
											v110 = v254;
											v109 = v107;
										}
									}
									// 0x337c0
									v151 = v109 + 0x55ec;
									v112 = v110;
									v111 = v151;
									if (v110 == *(int32_t *)(v109 + 0x5624)) {
										// 0x337d4
										if (g31 == *(int32_t *)(v109 + 0x5628)) {
											// 0x337e0
											if (v175 != 1) {
												// 0x337e8
												*(int32_t *)g35 = v110;
												*(int32_t *)g36 = g31;
												*(char *)g33 = (char)1;
												v112 = g30;
												v111 = v151;
												// branch -> 0x337f8
											} else {
												v112 = v110;
												v111 = v151;
											}
										} else {
											v112 = v110;
											v111 = v151;
										}
									}
									// 0x337f8
									v152 = v111 + 0x55ec;
									v114 = v112;
									v113 = v152;
									if (v112 == *(int32_t *)(v111 + 0x5624)) {
										// 0x3380c
										if (g31 == *(int32_t *)(v111 + 0x5628)) {
											// 0x33818
											if (v175 != 2) {
												// 0x33820
												*(int32_t *)g35 = v112;
												*(int32_t *)g36 = g31;
												*(char *)g33 = (char)2;
												v114 = g30;
												v113 = v152;
												// branch -> 0x33830
											} else {
												v114 = v112;
												v113 = v152;
											}
										} else {
											v114 = v112;
											v113 = v152;
										}
									}
									// 0x33830
									if (v114 == *(int32_t *)(v113 + 0x5624)) {
										// 0x33844
										if (g31 == *(int32_t *)(v113 + 0x5628)) {
											// 0x33850
											if (v175 != 3) {
												// 0x33858
												*(int32_t *)g35 = v114;
												*(int32_t *)g36 = g31;
												*(char *)g33 = (char)3;
												// branch -> 0x33868
											}
										}
									}
								}
								// 0x33868
								if (v176 == 8) {
									// 0x33870
									v13 = -1;
									// branch -> 0x33874
									while (true) {
										// 0x33874
										v221 = g30 - 1;
										v19 = v221;
										v11 = 3;
										v222 = g31 + 112 * v221 - 1 + v220;
										v22 = v222;
										v23 = -1;
										v115 = v222;
										// branch -> 0x33894
										goto lab_0x33894_9;
									}
								}
								// 0x33998
								v153 = g31;
								v255 = *(char *)(v153 + v15 + v7 + 113);
								v286 = v255;
								if (v255 != 0) {
									// 0x339ac
									if (0x1000000 * v286 < 0) {
										// 0x339bc
										v40 = 0x1000000 * (-1 - v286) / 0x1000000;
										// branch -> 0x339c8
									} else {
										// 0x339b4
										v40 = v286 - 1;
										// branch -> 0x339c8
									}
									// 0x339c8
									v223 = 0x1000000 * v40 / 0x1000000;
									if (v223 != v175) {
										// 0x339d4
										if (*(int32_t *)(g32 + 0x55ec * v223 + 404) != 0) {
											// 0x339e8
											*(int32_t *)g35 = g30 + 1;
											*(int32_t *)g36 = v153 + 1;
											*(char *)g33 = (char)v40;
											// branch -> 0x339fc
										}
									}
								}
							}
							// 0x339fc
							if (v3 == -1) {
								// 0x33a04
								if (*(char *)g33 == -1) {
									// 0x33a14
									v116 = v16;
									v118 = v116;
									if (v116 == 0) {
										// 0x33a1c
										v117 = g30;
										v256 = *(char *)(g31 + *(int32_t *)g16 + 112 * v117 + 112);
										v287 = v256;
										if (v256 != 0) {
											// 0x33a38
											if (0x1000000 * v287 < 0) {
												// 0x33a48
												v39 = 0x1000000 * (-1 - v287) / 0x1000000;
												// branch -> 0x33a54
											} else {
												// 0x33a40
												v39 = v287 - 1;
												// branch -> 0x33a54
											}
											// 0x33a54
											if (*(char *)(120 * 0x1000000 * v39 / 0x1000000 + v5 + 64) >= 2) {
												// 0x33a70
												*(int32_t *)g35 = v117 + 1;
												*(int32_t *)g36 = g31;
												*(char *)g20 = (char)v39;
												v118 = v16;
												// branch -> 0x33a80
											} else {
												v118 = 0;
											}
										} else {
											v118 = 0;
										}
									}
									// 0x33a80
									if (v118 != 0) {
										// 0x33a88
										v119 = g30;
										v257 = *(char *)(g31 + *(int32_t *)g16 + 112 * v119 + 1);
										v288 = v257;
										if (v257 != 0) {
											// 0x33aa4
											if (0x1000000 * v288 < 0) {
												// 0x33ab4
												v36 = 0x1000000 * (-1 - v288) / 0x1000000;
												// branch -> 0x33ac0
											} else {
												// 0x33aac
												v36 = v288 - 1;
												// branch -> 0x33ac0
											}
											// 0x33ac0
											if (*(char *)(120 * 0x1000000 * v36 / 0x1000000 + v5 + 64) >= 2) {
												// 0x33adc
												*(int32_t *)g35 = v119;
												*(int32_t *)g36 = g31 + 1;
												*(char *)g20 = (char)v36;
												// branch -> 0x33aec
											}
										}
									}
									// 0x33aec
									v120 = g30;
									v154 = 112 * v120;
									v12 = v154;
									v224 = *(int32_t *)g16;
									result3 = v224;
									v155 = g31;
									v289 = *(char *)(v155 + v154 + v224);
									v300 = v289;
									v122 = v155;
									v156 = v154;
									v121 = v224;
									if (v289 != 0) {
										// 0x33b04
										if (0x1000000 * v300 < 0) {
											// 0x33b14
											v25 = 0x1000000 * (-1 - v300) / 0x1000000;
											// branch -> 0x33b20
										} else {
											// 0x33b0c
											v25 = v300 - 1;
											// branch -> 0x33b20
										}
										// 0x33b20
										v19 = v25;
										v258 = *(char *)(120 * 0x1000000 * v25 / 0x1000000 + v5 + 64);
										if (v258 != 1) {
											// 0x33b3c
											if (v258 != 3) {
												v122 = v155;
												// 0x33b50
												v259 = *(char *)(v224 + v154 + v122 + 113);
												v290 = v259;
												result3 = v290;
												if (v259 != 0) {
													// 0x33b64
													if (0x1000000 * v290 < 0) {
														// 0x33b74
														v24 = 0x1000000 * (-1 - v290) / 0x1000000;
														// branch -> 0x33b80
													} else {
														// 0x33b6c
														v24 = v290 - 1;
														// branch -> 0x33b80
													}
													// 0x33b80
													v12 = v24;
													v327 = *(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64);
													result3 = v327;
													if (v327 >= 2) {
														// 0x33b9c
														result3 = v122 + 1;
														*(int32_t *)g35 = g30 + 1;
														*(int32_t *)g36 = result3;
														*(char *)g20 = (char)v12;
														// branch -> 0x33bb0
													}
												}
												// 0x33bb0
												v325 = *(char *)g33;
												v12 = v325;
												if (v325 == -1) {
													// 0x33bc0
													v326 = *(char *)g20;
													v12 = v326;
													if (v326 == -1) {
														// 0x33bd0
														if (v3 == -1) {
															// 0x33bd8
															v123 = v16;
															v125 = v123;
															if (v123 == 0) {
																// 0x33be0
																v260 = *(int32_t *)(g23 - 0x768c);
																v124 = g30;
																v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
																v291 = v261;
																if (v261 >= 1) {
																	// 0x33c00
																	v225 = (0x1000000 * v291 - 0x1000000) / 0x1000000;
																	v12 = v225;
																	if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
																		// 0x33c24
																		*(int32_t *)g35 = v124 + 1;
																		*(int32_t *)g36 = g31;
																		*(char *)g21 = (char)v12;
																		v125 = v16;
																		// branch -> 0x33c34
																	} else {
																		v125 = 0;
																	}
																} else {
																	v125 = 0;
																}
															}
															// 0x33c34
															if (v125 != 0) {
																// 0x33c3c
																v262 = *(int32_t *)(g23 - 0x768c);
																v126 = g30;
																v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
																v292 = v263;
																if (v263 >= 1) {
																	// 0x33c5c
																	v226 = (0x1000000 * v292 - 0x1000000) / 0x1000000;
																	v12 = v226;
																	if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
																		// 0x33c80
																		*(int32_t *)g35 = v126;
																		*(int32_t *)g36 = g31 + 1;
																		*(char *)g21 = (char)v12;
																		// branch -> 0x33c90
																	}
																}
															}
															// 0x33c90
															v127 = g30;
															v227 = *(int32_t *)*(int32_t *)(g23 - 0x768c);
															result3 = v227;
															v293 = *(char *)(g31 + 112 * v127 + v227);
															v301 = v293;
															v12 = v293;
															if (v293 >= 1) {
																// 0x33cac
																v159 = v4 + 48;
																v19 = v159;
																v228 = (0x1000000 * v301 - 0x1000000) / 0x1000000;
																v294 = *(char *)(v159 + 368 * v228);
																v12 = v294;
																if (v294 != 1) {
																	// 0x33cd0
																	if (v294 != 3) {
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																}
																// 0x33cd8
																*(int32_t *)g35 = v127;
																*(int32_t *)g36 = g31;
																*(char *)g21 = (char)v228;
																// branch -> 0x33ce4
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x33b44
										*(int32_t *)g35 = v120;
										*(int32_t *)g36 = g31;
										*(char *)g20 = (char)v19;
										v122 = g31;
										v156 = v12;
										v121 = result3;
										// branch -> 0x33b50
									}
									// 0x33b50
									v259 = *(char *)(v121 + v156 + v122 + 113);
									v290 = v259;
									if (v259 != 0) {
										// 0x33b64
										if (0x1000000 * v290 < 0) {
											// 0x33b74
											v24 = 0x1000000 * (-1 - v290) / 0x1000000;
											// branch -> 0x33b80
										} else {
											// 0x33b6c
											v24 = v290 - 1;
											// branch -> 0x33b80
										}
										// 0x33b80
										if (*(char *)(120 * 0x1000000 * v24 / 0x1000000 + v5 + 64) >= 2) {
											// 0x33b9c
											*(int32_t *)g35 = g30 + 1;
											*(int32_t *)g36 = v122 + 1;
											*(char *)g20 = (char)v24;
											// branch -> 0x33bb0
										}
									}
								}
							}
							// 0x33bb0
							if (*(char *)g33 == -1) {
								// 0x33bc0
								if (*(char *)g20 == -1) {
									// 0x33bd0
									if (v3 == -1) {
										// 0x33bd8
										v123 = v16;
										v125 = v123;
										if (v123 == 0) {
											// 0x33be0
											v260 = *(int32_t *)(g23 - 0x768c);
											v124 = g30;
											v261 = *(char *)(g31 + *(int32_t *)v260 + 112 * v124 + 112);
											if (v261 >= 1) {
												// 0x33c00
												v225 = (0x1000000 * (int32_t)v261 - 0x1000000) / 0x1000000;
												if (*(char *)(v4 + 368 * v225 + 48) >= 2) {
													// 0x33c24
													*(int32_t *)g35 = v124 + 1;
													*(int32_t *)g36 = g31;
													*(char *)g21 = (char)v225;
													v125 = v16;
													// branch -> 0x33c34
												} else {
													v125 = 0;
												}
											} else {
												v125 = 0;
											}
										}
										// 0x33c34
										if (v125 != 0) {
											// 0x33c3c
											v262 = *(int32_t *)(g23 - 0x768c);
											v126 = g30;
											v263 = *(char *)(g31 + *(int32_t *)v262 + 112 * v126 + 1);
											if (v263 >= 1) {
												// 0x33c5c
												v226 = (0x1000000 * (int32_t)v263 - 0x1000000) / 0x1000000;
												if (*(char *)(v4 + 368 * v226 + 48) >= 2) {
													// 0x33c80
													*(int32_t *)g35 = v126;
													*(int32_t *)g36 = g31 + 1;
													*(char *)g21 = (char)v226;
													// branch -> 0x33c90
												}
											}
										}
										// 0x33c90
										v127 = g30;
										int32_t v329 = g31 + 112 * v127; // 0x33c9c
										v293 = *(char *)(v329 + *(int32_t *)*(int32_t *)(g23 - 0x768c));
										if (v293 >= 1) {
											// 0x33cac
											v228 = (0x1000000 * (int32_t)v293 - 0x1000000) / 0x1000000;
											v294 = *(char *)(v4 + 48 + 368 * v228);
											if (v294 != 1) {
												// 0x33cd0
												if (v294 != 3) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x33cd8
											*(int32_t *)g35 = v127;
											*(int32_t *)g36 = g31;
											*(char *)g21 = (char)v228;
											// branch -> 0x33ce4
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				} else {
					// 0x32c38
					function_2ec14(v236, v175, v235, v176);
					// branch -> 0x33da4
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0x32c1c
		*(int32_t *)g35 = g30;
		*(int32_t *)g36 = g31;
		// branch -> 0x33da4
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}
