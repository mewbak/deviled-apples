
// Address range: 0x8ff38 - 0x8ff48
int32_t buffer_init(int32_t *a1)
{
	int32_t result = (int32_t)a1;
	*a1 = 0;
	*(char *)(result + 4) = 0;
	return result;
}

// Address range: 0x8ff48 - 0x8ff5c
int32_t function_8ff48(int32_t *a1)
{
	// 0x8ff48
	return __asm_rlwinm(llvm_ctlz_i32(-(int32_t)a1, true), 27, 24, 31);
}

// Address range: 0x8ff5c - 0x8ffd8
int32_t function_8ff5c(int32_t *a1, int32_t a2, int32_t a3)
{
	int32_t v1 = a2 % 256;    // 0x8ff64
	int32_t v2 = (int32_t)a1; // 0x8ff78
	int32_t result;           // r3
	if (v1 + 2 + v2 <= 0x1000) {
		int32_t v3 = 2 * v2 + 4; // r30
		*(int32_t *)v2 = v2 + v1 + 1;
		*(char *)v3 = (char)a2;
		int32_t v4 = v3 + 1; // 0x8ffa0
		g34 = v4;
		result = memcpy();
		*(char *)(v1 + v4) = 0;
		// branch -> 0x8ffc0
	} else {
		result = v2;
	}
	// 0x8ffc0
	return result;
}

// Address range: 0x8ffd8 - 0x90098
int32_t multi_recv_packet(int32_t *a1, int32_t result, int32_t a3)
{
	int32_t v1 = (int32_t)a1;
	g31 = v1;
	if (a1 == NULL) {
		// branch -> 0x90084
	} else {
		int32_t v2 = v1 + 4; // 0x90008
		g35 = v2;
		unsigned char v3 = *(char *)v2; // 0x9000c3
		int32_t v4 = v3;                // 0x9000c4
		int32_t v5 = v4;                // r31
		if (v3 != 0) {
			if (v4 <= a3) {
				while (true) {
					// 0x90024
					g34 = result;
					memcpy();
					int32_t v6 = v5; // 0x90040
					g35 = v6 + v2 + 1;
					result += v6;
					*(int32_t *)a3 = v4 - v6;
					int32_t v7 = g35;               // 0x9000c
					unsigned char v8 = *(char *)v7; // 0x9000c
					int32_t v9 = v8;                // 0x9000c
					v5 = v9;
					if (v8 != 0) {
						// 0x90024
						if (v9 <= v4) {
							// 0x90024
							v4 = v9;
							v2 = v7;
							// branch -> 0x90024
							continue;
						} else {
							v2 = v7;
						}
					} else {
						v2 = v7;
					}
				}
			}
			// 0x90054
			v1 = g31;
			// branch -> 0x90054
		}
		int32_t v10 = v1 + 4; // 0x90054
		g34 = v10;
		int32_t v11 = v2 - v10; // 0x9005c
		*(int32_t *)g31 = function_ebbf0(v2, v10 - v11 + 1) - v11;
		// branch -> 0x90084
	}
	// 0x90084
	return result;
}

// Address range: 0x90098 - 0x90160
int32_t NetRecvPlrData(char *a1)
{
	int32_t result = (int32_t)a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // r4
	*(int16_t *)(result + 15) = 0x6970;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8);                      // 0x900a4
	int32_t v3 = *(int32_t *)(0x55ec * *(int32_t *)v1 + v2 + 56); // 0x900b4
	*(char *)result = (char)v3;
	int32_t v4 = *(int32_t *)(v2 + 0x55ec * *(int32_t *)v1 + 60); // 0x900c8
	*(char *)(result + 1) = (char)v4;
	int32_t v5 = *(int32_t *)(v2 + 0x55ec * *(int32_t *)v1 + 72); // 0x900dc
	*(char *)(result + 2) = (char)v5;
	int32_t v6 = *(int32_t *)(v2 + 0x55ec * *(int32_t *)v1 + 76); // 0x900f0
	*(char *)(result + 3) = (char)v6;
	int32_t v7 = *(int32_t *)(v2 + 0x55ec * *(int32_t *)v1 + 404); // 0x90104
	*(int32_t *)(result + 4) = v7;
	int32_t v8 = *(int32_t *)(v2 + 0x55ec * *(int32_t *)v1 + 408); // 0x90118
	*(int32_t *)(result + 8) = v8;
	int32_t v9 = *(int32_t *)(v2 + 0x55ec * *(int32_t *)v1 + 356); // 0x9012c
	*(char *)(result + 12) = (char)v9;
	int32_t v10 = *(int32_t *)(v2 + 0x55ec * *(int32_t *)v1 + 364); // 0x90140
	*(char *)(result + 13) = (char)v10;
	int32_t v11 = *(int32_t *)(v2 + 0x55ec * *(int32_t *)v1 + 372); // 0x90154
	*(char *)(result + 14) = (char)v11;
	return result;
}

// Address range: 0x90160 - 0x90190
int32_t multi_msg_add(int32_t a1, int32_t a2)
{
	// 0x90160
	g37 = a2;
	g34 = a1;
	int32_t v1 = g34; // 0x90164
	if (v1 == 0) {
		// 0x90180
		return 0;
	}
	// 0x90174
	int32_t result; // 0x9018c
	if (g37 % 256 != 0) {
		// 0x9017c
		result = tmsg_add();
		// branch -> 0x90180
	} else {
		result = v1;
	}
	// 0x90180
	return result;
}

// Address range: 0x90190 - 0x9024c
int32_t multi_send_packet(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x90190
	int32_t v2 = g35; // 0x9019c
	g35 = a1;
	int32_t v3; // bp-520
	NetRecvPlrData((char *)&v3);
	int32_t v4 = a2 % 256 + 19; // 0x901bc
	int32_t v5;                 // bp-503
	int32_t v6 = &v5;           // r3
	v5 = v4;
	g36 = v4;
	int32_t v7;                                 // bp-516
	int32_t v8 = __asm_lwbrx(v4, (int32_t)&v7); // 0x901cc
	v7 = v8;
	int32_t v9;                                  // bp-512
	int32_t v10 = __asm_lwbrx(v8, (int32_t)&v9); // 0x901d8
	v9 = v10;
	int32_t v11;                                     // bp-505
	int32_t v12 = v10 + (int32_t)&v11;               // 0x901e4
	unsigned char v13 = *(char *)v12;                // 0x901e4
	unsigned char v14 = *(char *)(v12 + 1);          // 0x901e4
	int32_t v15 = 256 * (int16_t)v14 | (int16_t)v13; // 0x901e8
	v11 = v15;
	int32_t v16 = v15 + v6;                 // 0x901f0
	unsigned char v17 = *(char *)v16;       // 0x901f0
	unsigned char v18 = *(char *)(v16 + 1); // 0x901f0
	int32_t v19;                            // bp-501
	g34 = &v19;
	v5 = 256 * (int16_t)v18 | (int16_t)v17;
	memcpy();
	int32_t v20;
	int32_t v21 = *(int32_t *)*(int32_t *)(v20 - 0x77ac); // 0x90218
	g34 = v21;
	int32_t v22 = SNetSendMessage(v21, (int32_t)&v3); // 0x9021c
	int32_t result = v22;                            // 0x90248
	if (v22 == 0) {
		// 0x9022c
		result = nthread_terminate_game(*(int32_t *)(v20 - 0x5c0c));
		// branch -> 0x90234
	}
	// 0x90234
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0x9024c - 0x902a8
int32_t NetSendLoPri(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x9024c
	g36 = a2;
	int32_t v2 = g35; // 0x90258
	g35 = a1;
	if (a1 == 0) {
		// 0x90290
		g36 = v1;
		g35 = v2;
		return 0;
	}
	// 0x9026c
	int32_t result; // 0x902a4
	if (a2 % 256 != 0) {
		// 0x90274
		function_8ff5c((int32_t *)*(int32_t *)(g23 - 0x5c10), a1, a2);
		result = multi_send_packet(g35, g36);
		// branch -> 0x90290
	} else {
		result = a1;
	}
	// 0x90290
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0x902a8 - 0x903d8
int32_t NetSendHiPri(int32_t a1, int32_t a2)
{
	int32_t v1 = g36;                        // 0x902a8
	int32_t v2 = *(int32_t *)(g23 - 0x5c14); // 0x902b0
	g36 = v2;
	int32_t v3 = g35; // 0x902b4
	g35 = *(int32_t *)(g23 - 0x7004);
	int32_t v4 = g33; // 0x902bc
	g33 = a2;
	int32_t v5;  // r6
	int32_t v6;  // bp-513
	int32_t v7;  // bp-515
	int32_t v8;  // bp-517
	int32_t v9;  // bp-524
	int32_t v10; // bp-528
	int32_t v11; // bp-532
	int32_t v12; // bp-536
	int32_t v13;
	int32_t result;    // 0x903d4
	int32_t *v14;      // 0x902fc
	int32_t v15;       // 0x90324
	int32_t v16;       // 0x9035c
	int32_t v17;       // 0x90368
	int32_t v18;       // 0x90374
	int32_t v19;       // 0x90380
	int32_t v20;       // 0x90384
	int32_t v21;       // 0x9038c
	int32_t v22;       // 0x903a0
	int32_t v23;       // 0x90348
	int32_t v24;       // 0x90330
	int32_t v25;       // 0x90340
	unsigned char v26; // 0x90380
	unsigned char v27; // 0x9038c
	unsigned char v28; // 0x90380
	unsigned char v29; // 0x9038c
	if (a1 == 0) {
		// 0x902fc
		v14 = (int32_t *)(g23 - 0x4d00);
		result = 0;
		if (*v14 == 0) {
			// 0x90308
			*v14 = 1;
			NetRecvPlrData((char *)&v11);
			v15 = &v12;
			v12 = *(int32_t *)g35 - 19;
			v24 = multi_recv_packet((int32_t *)g36, (int32_t)&v6, v15);
			v25 = multi_recv_packet((int32_t *)*(int32_t *)(g23 - 0x5c10), v24, v15);
			v23 = sync_all_monsters((char *)v25, v12);
			v12 = v23;
			v5 = &v7;
			v16 = *(int32_t *)g35;
			v7 = v16 - v23;
			v17 = __asm_lwbrx(v16, (int32_t)&v10);
			v10 = v17;
			v18 = __asm_lwbrx(v17, (int32_t)&v9);
			v9 = v18;
			v19 = v18 + (int32_t)&v8;
			v26 = *(char *)v19;
			v28 = *(char *)(v19 + 1);
			v20 = 256 * (int16_t)v28 | (int16_t)v26;
			v8 = v20;
			v21 = v20 + v5;
			v27 = *(char *)v21;
			v29 = *(char *)(v21 + 1);
			g34 = -2;
			v7 = 256 * (int16_t)v29 | (int16_t)v27;
			v22 = SNetSendMessage(-2, (int32_t)&v11);
			if (v22 == 0) {
				// 0x903b0
				result = nthread_terminate_game(*(int32_t *)(v13 - 0x5c18));
				// branch -> 0x903b8
			} else {
				result = v22;
			}
		}
		// 0x903b8
		g36 = v1;
		g35 = v3;
		g33 = v4;
		return result;
	}
	// 0x902d8
	int32_t v30; // 0x903d43
	if (a2 % 256 != 0) {
		// 0x902e0
		function_8ff5c((int32_t *)v2, a1, a2);
		v30 = multi_send_packet(a1, g33);
		// branch -> 0x902fc
	} else {
		v30 = a1;
	}
	// 0x902fc
	v14 = (int32_t *)(g23 - 0x4d00);
	result = v30;
	if (*v14 == 0) {
		// 0x90308
		*v14 = 1;
		NetRecvPlrData((char *)&v11);
		v15 = &v12;
		v12 = *(int32_t *)g35 - 19;
		v24 = multi_recv_packet((int32_t *)g36, (int32_t)&v6, v15);
		v25 = multi_recv_packet((int32_t *)*(int32_t *)(g23 - 0x5c10), v24, v15);
		v23 = sync_all_monsters((char *)v25, v12);
		v12 = v23;
		v5 = &v7;
		v16 = *(int32_t *)g35;
		v7 = v16 - v23;
		v17 = __asm_lwbrx(v16, (int32_t)&v10);
		v10 = v17;
		v18 = __asm_lwbrx(v17, (int32_t)&v9);
		v9 = v18;
		v19 = v18 + (int32_t)&v8;
		v26 = *(char *)v19;
		v28 = *(char *)(v19 + 1);
		v20 = 256 * (int16_t)v28 | (int16_t)v26;
		v8 = v20;
		v21 = v20 + v5;
		v27 = *(char *)v21;
		v29 = *(char *)(v21 + 1);
		g34 = -2;
		v7 = 256 * (int16_t)v29 | (int16_t)v27;
		v22 = SNetSendMessage(-2, (int32_t)&v11);
		if (v22 == 0) {
			// 0x903b0
			result = nthread_terminate_game(*(int32_t *)(v13 - 0x5c18));
			// branch -> 0x903b8
		} else {
			result = v22;
		}
	}
	// 0x903b8
	g36 = v1;
	g35 = v3;
	g33 = v4;
	return result;
}

// Address range: 0x903d8 - 0x904c4
int32_t function_903d8(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x903d8
	g36 = a1;
	g31 = a2;
	int32_t v1; // bp-536
	NetRecvPlrData((char *)&v1);
	int32_t v2;                 // bp-519
	int32_t v3 = &v2;           // r30
	int32_t v4 = a3 % 256 + 19; // 0x90404
	int32_t v5;                 // bp-517
	g34 = &v5;
	v2 = v4;
	g33 = v4;
	memcpy();
	int32_t v6;                       // bp-532
	int32_t v7 = &v6;                 // 0x90420
	int32_t v8 = __asm_lwbrx(v7, v7); // 0x90424
	v6 = v8;
	int32_t v9;                                  // bp-528
	int32_t v10 = __asm_lwbrx(v8, (int32_t)&v9); // 0x90430
	int32_t v11;                                 // bp-521
	int32_t v12 = &v11;                          // 0x90434
	v9 = v10;
	int32_t v13 = v10 + v12;                         // 0x9043c
	unsigned char v14 = *(char *)v13;                // 0x9043c
	unsigned char v15 = *(char *)(v13 + 1);          // 0x9043c
	int32_t v16 = 256 * (int16_t)v15 | (int16_t)v14; // 0x90440
	v11 = v16;
	int32_t v17 = v16 + v3;                 // 0x90448
	unsigned char v18 = *(char *)v17;       // 0x90448
	unsigned char v19 = *(char *)(v17 + 1); // 0x90448
	g35 = 1;
	g32 = 0;
	v2 = 256 * (int16_t)v19 | (int16_t)v18;
	int32_t v20 = 0; // 0x90464
	int32_t v21 = 1; // 0x9045c
	// branch -> 0x9045c
	int32_t result2; // 0x904c05
	while (true) {
		// 0x9045c
		result2 = v12;
		int32_t v22; // 0x904a0
		int32_t v23; // 0x904a8
		if ((g36 & v21) != 0) {
			// 0x90464
			g34 = v20;
			int32_t v24 = SNetSendMessage(v20, (int32_t)&v1); // 0x90470
			g34 = v24;
			if (v24 == 0) {
				int32_t v25 = GetLastError(); // 0x90480
				if (v25 != -0x7aefff96) {
					// 0x90494
					int32_t v26;
					int32_t result = nthread_terminate_game(*(int32_t *)(v26 - 0x5c18)); // 0x90498
					// branch -> 0x904b0
					// 0x904b0
					return result;
				}
				result2 = v25;
				// 0x904a0
				v22 = g32 + 1;
				g32 = v22;
				v23 = 2 * g35;
				g35 = v23;
				if (v22 >= 4) {
					// break -> 0x904b0
					break;
				}
				v12 = result2;
				v20 = v22;
				v21 = v23;
				// continue -> 0x9045c
				continue;
			} else {
				result2 = v24;
			}
		}
		// 0x904a0
		v22 = g32 + 1;
		g32 = v22;
		v23 = 2 * g35;
		g35 = v23;
		if (v22 >= 4) {
			// break -> 0x904b0
			break;
		}
		v12 = result2;
		v20 = v22;
		v21 = v23;
		// continue -> 0x9045c
	}
	// 0x904b0
	return result2;
}

// Address range: 0x904c4 - 0x9064c
int32_t function_904c4(void)
{
	int32_t *v1 = (int32_t *)(g23 - 0x4d08); // 0x904c4
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // r10
	*v1 = *v1 + 1;
	uint32_t v3 = *(int32_t *)(g23 - 0x4d08); // 0x904e4
	int32_t v4 = v3 / 256 | 0x1000000 * v3;   // 0x904e8
	int32_t v5 = 0;                           // 0x904ec
	int32_t v6 = v5 + v4;                     // 0x904ec
	int32_t v7 = v6;                          // r9
	int32_t v8 = v5 + 8;                      // r12
	*(int32_t *)(v2 + 184) = v6;
	int32_t v9 = v7; // 0x904f8
	*(int32_t *)(v2 + 416) = v9 + 1;
	int32_t v10 = v7; // 0x90508
	*(int32_t *)(v2 + 648) = v9 + 2;
	int32_t v11 = v7; // 0x90514
	v7 = v4 + v8;
	*(int32_t *)(v2 + 880) = v9 + 3;
	int32_t v12 = v7; // 0x90524
	*(int32_t *)(v2 + 1112) = v10 + 4;
	int32_t v13 = v7; // 0x90530
	*(int32_t *)(v2 + 1344) = v10 + 5;
	int32_t v14 = v7; // 0x90540
	*(int32_t *)(v2 + 1576) = v11 + 6;
	int32_t v15 = v7; // 0x90548
	*(int32_t *)(v2 + 1808) = v11 + 7;
	int32_t v16 = v7; // 0x90550
	*(int32_t *)(v2 + 2040) = v16;
	int32_t v17 = v8 + 8; // 0x90558
	v7 = v4 + v17;
	*(int32_t *)(v2 + 2272) = v12 + 1;
	int32_t v18 = v7; // 0x90564
	*(int32_t *)(v2 + 2504) = v12 + 2;
	int32_t v19 = v7; // 0x9056c
	*(int32_t *)(v2 + 2736) = v13 + 3;
	int32_t v20 = v7; // 0x90574
	*(int32_t *)(v2 + 2968) = v13 + 4;
	int32_t v21 = v7; // 0x9057c
	*(int32_t *)(v2 + 3200) = v14 + 5;
	int32_t v22 = v7; // 0x90584
	*(int32_t *)(v2 + 3432) = v15 + 6;
	int32_t v23 = v7; // 0x9058c
	*(int32_t *)(v2 + 3664) = v16 + 7;
	int32_t v24 = v7; // 0x90594
	*(int32_t *)(v2 + 3896) = v24;
	int32_t v25 = v17 + 8; // 0x9059c
	v7 = v4 + v25;
	*(int32_t *)(v2 + 0x1020) = v18 + 1;
	int32_t v26 = v7; // 0x905a8
	*(int32_t *)(v2 + 0x1108) = v19 + 2;
	int32_t v27 = v7; // 0x905b0
	*(int32_t *)(v2 + 0x11f0) = v20 + 3;
	int32_t v28 = v7; // 0x905b8
	*(int32_t *)(v2 + 0x12d8) = v21 + 4;
	int32_t v29 = v7; // 0x905c0
	*(int32_t *)(v2 + 0x13c0) = v22 + 5;
	int32_t v30 = v7; // 0x905c8
	*(int32_t *)(v2 + 0x14a8) = v23 + 6;
	int32_t v31 = v7; // 0x905d0
	*(int32_t *)(v2 + 0x1590) = v24 + 7;
	int32_t v32 = v7; // 0x905d8
	*(int32_t *)(v2 + 0x1678) = v32;
	int32_t v33 = v25 + 8; // 0x905e0
	v7 = v4 + v33;
	*(int32_t *)(v2 + 0x1760) = v26 + 1;
	*(int32_t *)(v2 + 0x1848) = v27 + 2;
	*(int32_t *)(v2 + 0x1930) = v28 + 3;
	*(int32_t *)(v2 + 0x1a18) = v29 + 4;
	*(int32_t *)(v2 + 0x1b00) = v30 + 5;
	*(int32_t *)(v2 + 0x1be8) = v31 + 6;
	int32_t result = v7 + 6; // r3
	*(int32_t *)(v2 + 0x1cd0) = v32 + 7;
	int32_t v34 = v7; // 0x9061c
	*(int32_t *)(v2 + 0x1db8) = v34;
	*(int32_t *)(v2 + 0x1ea0) = v7 + 1;
	*(int32_t *)(v2 + 0x1f88) = v7 + 2;
	*(int32_t *)(v2 + 0x2070) = v7 + 3;
	*(int32_t *)(v2 + 0x2158) = v7 + 4;
	*(int32_t *)(v2 + 0x2240) = v7 + 5;
	*(int32_t *)(v2 + 0x2328) = result;
	*(int32_t *)(v2 + 0x2410) = v34 + 7;
	int32_t v35 = v2 + 0x2440; // 0x90640
	v2 = v35;
	int32_t v36 = 4; // 0x90644
	// branch -> 0x904ec
	while (v36 != 0) {
		// 0x904ec
		// 0x904ec
		v5 = v33 + 8;
		v6 = v5 + v4;
		v7 = v6;
		v8 = v5 + 8;
		*(int32_t *)(v35 + 184) = v6;
		v9 = v7;
		*(int32_t *)(v2 + 416) = v9 + 1;
		v10 = v7;
		*(int32_t *)(v2 + 648) = v9 + 2;
		v11 = v7;
		v7 = v4 + v8;
		*(int32_t *)(v2 + 880) = v9 + 3;
		v12 = v7;
		*(int32_t *)(v2 + 1112) = v10 + 4;
		v13 = v7;
		*(int32_t *)(v2 + 1344) = v10 + 5;
		v14 = v7;
		*(int32_t *)(v2 + 1576) = v11 + 6;
		v15 = v7;
		*(int32_t *)(v2 + 1808) = v11 + 7;
		v16 = v7;
		*(int32_t *)(v2 + 2040) = v16;
		v17 = v8 + 8;
		v7 = v4 + v17;
		*(int32_t *)(v2 + 2272) = v12 + 1;
		v18 = v7;
		*(int32_t *)(v2 + 2504) = v12 + 2;
		v19 = v7;
		*(int32_t *)(v2 + 2736) = v13 + 3;
		v20 = v7;
		*(int32_t *)(v2 + 2968) = v13 + 4;
		v21 = v7;
		*(int32_t *)(v2 + 3200) = v14 + 5;
		v22 = v7;
		*(int32_t *)(v2 + 3432) = v15 + 6;
		v23 = v7;
		*(int32_t *)(v2 + 3664) = v16 + 7;
		v24 = v7;
		*(int32_t *)(v2 + 3896) = v24;
		v25 = v17 + 8;
		v7 = v4 + v25;
		*(int32_t *)(v2 + 0x1020) = v18 + 1;
		v26 = v7;
		*(int32_t *)(v2 + 0x1108) = v19 + 2;
		v27 = v7;
		*(int32_t *)(v2 + 0x11f0) = v20 + 3;
		v28 = v7;
		*(int32_t *)(v2 + 0x12d8) = v21 + 4;
		v29 = v7;
		*(int32_t *)(v2 + 0x13c0) = v22 + 5;
		v30 = v7;
		*(int32_t *)(v2 + 0x14a8) = v23 + 6;
		v31 = v7;
		*(int32_t *)(v2 + 0x1590) = v24 + 7;
		v32 = v7;
		*(int32_t *)(v2 + 0x1678) = v32;
		v33 = v25 + 8;
		v7 = v4 + v33;
		*(int32_t *)(v2 + 0x1760) = v26 + 1;
		*(int32_t *)(v2 + 0x1848) = v27 + 2;
		*(int32_t *)(v2 + 0x1930) = v28 + 3;
		*(int32_t *)(v2 + 0x1a18) = v29 + 4;
		*(int32_t *)(v2 + 0x1b00) = v30 + 5;
		*(int32_t *)(v2 + 0x1be8) = v31 + 6;
		result = v7 + 6;
		*(int32_t *)(v2 + 0x1cd0) = v32 + 7;
		v34 = v7;
		*(int32_t *)(v2 + 0x1db8) = v34;
		*(int32_t *)(v2 + 0x1ea0) = v7 + 1;
		*(int32_t *)(v2 + 0x1f88) = v7 + 2;
		*(int32_t *)(v2 + 0x2070) = v7 + 3;
		*(int32_t *)(v2 + 0x2158) = v7 + 4;
		*(int32_t *)(v2 + 0x2240) = v7 + 5;
		*(int32_t *)(v2 + 0x2328) = result;
		*(int32_t *)(v2 + 0x2410) = v34 + 7;
		v35 = v2 + 0x2440;
		v2 = v35;
		v36--;
		// branch -> 0x904ec
	}
	// 0x90648
	return result;
}

// Address range: 0x9064c - 0x906e8
int32_t function_9064c(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7008); // 0x9064c
	int32_t v2 = v1;                         // r4
	int32_t v3;                              // 0x90660
	int32_t v4;                              // 0x90678
	int32_t v5;                              // 0x90690
	int32_t v6;                              // 0x906a8
	int32_t v7;                              // 0x906b4
	int32_t v8;                              // 0x90668
	int32_t v9;                              // 0x90680
	int32_t result;                          // 0x906d4
	int32_t v10;                             // 0x906b8
	int32_t result2;                         // 0x906dc
	if (__asm_rlwinm_(*(int32_t *)v1, 0, 15, 15) != 0) {
		// 0x90660
		v3 = 0;
		if (v3 != g34) {
			// 0x906b4
			v7 = g23;
			v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
			if (v10 == v3) {
				// 0x906c4
				*(char *)(g34 + v7 - 0x4d13) = 1;
				return g34;
			}
			// 0x906d4
			result = g34;
			if (v10 != result) {
				// bb
				return result;
			}
			// 0x906dc
			result2 = *(int32_t *)(v7 - 0x7068);
			*(char *)result2 = (char)v3;
			return result2;
		}
		// 0x90668
		v8 = v2 + 4;
		if (__asm_rlwinm_(*(int32_t *)v8, 0, 15, 15) != 0) {
			// 0x90678
			v4 = 1;
			if (v4 != g34) {
				v3 = v4;
				// 0x906b4
				v7 = g23;
				v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
				if (v10 == v3) {
					// 0x906c4
					*(char *)(g34 + v7 - 0x4d13) = 1;
					return g34;
				}
				// 0x906d4
				result = g34;
				if (v10 != result) {
					// bb
					return result;
				}
				// 0x906dc
				result2 = *(int32_t *)(v7 - 0x7068);
				*(char *)result2 = (char)v3;
				return result2;
			}
		}
		// 0x90680
		v9 = v8 + 4;
		if (__asm_rlwinm_(*(int32_t *)v9, 0, 15, 15) != 0) {
			// 0x90690
			v5 = 2;
			if (v5 != g34) {
				v3 = v5;
				// 0x906b4
				v7 = g23;
				v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
				if (v10 == v3) {
					// 0x906c4
					*(char *)(g34 + v7 - 0x4d13) = 1;
					return g34;
				}
				// 0x906d4
				result = g34;
				if (v10 != result) {
					// bb
					return result;
				}
				// 0x906dc
				result2 = *(int32_t *)(v7 - 0x7068);
				*(char *)result2 = (char)v3;
				return result2;
			}
		}
		// 0x90698
		if (__asm_rlwinm_(*(int32_t *)(v9 + 4), 0, 15, 15) != 0) {
			// 0x906a8
			v6 = 3;
			if (v6 != g34) {
				v3 = v6;
				// 0x906b4
				v7 = g23;
				v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
				if (v10 == v3) {
					// 0x906c4
					*(char *)(g34 + v7 - 0x4d13) = 1;
					return g34;
				}
				// 0x906d4
				result = g34;
				if (v10 != result) {
					// bb
					return result;
				}
				// 0x906dc
				result2 = *(int32_t *)(v7 - 0x7068);
				*(char *)result2 = (char)v3;
				return result2;
			}
		}
		// 0x906b0
		v3 = 4;
		// branch -> 0x906b4
		// 0x906b4
		v7 = g23;
		v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
		if (v10 == v3) {
			// 0x906c4
			*(char *)(g34 + v7 - 0x4d13) = 1;
			return g34;
		}
		// 0x906d4
		result = g34;
		if (v10 != result) {
			// bb
			return result;
		}
		// 0x906dc
		result2 = *(int32_t *)(v7 - 0x7068);
		*(char *)result2 = (char)v3;
		return result2;
	}
	// 0x90668
	v8 = v2 + 4;
	v2 = v8;
	if (__asm_rlwinm_(*(int32_t *)v8, 0, 15, 15) != 0) {
		// 0x90678
		v4 = 1;
		if (v4 != g34) {
			v3 = v4;
			// 0x906b4
			v7 = g23;
			v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
			if (v10 == v3) {
				// 0x906c4
				*(char *)(g34 + v7 - 0x4d13) = 1;
				return g34;
			}
			// 0x906d4
			result = g34;
			if (v10 != result) {
				// bb
				return result;
			}
			// 0x906dc
			result2 = *(int32_t *)(v7 - 0x7068);
			*(char *)result2 = (char)v3;
			return result2;
		}
		// 0x90680
		v9 = v2 + 4;
		if (__asm_rlwinm_(*(int32_t *)v9, 0, 15, 15) != 0) {
			// 0x90690
			v5 = 2;
			if (v5 != g34) {
				v3 = v5;
				// 0x906b4
				v7 = g23;
				v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
				if (v10 == v3) {
					// 0x906c4
					*(char *)(g34 + v7 - 0x4d13) = 1;
					return g34;
				}
				// 0x906d4
				result = g34;
				if (v10 != result) {
					// bb
					return result;
				}
				// 0x906dc
				result2 = *(int32_t *)(v7 - 0x7068);
				*(char *)result2 = (char)v3;
				return result2;
			}
		}
		// 0x90698
		if (__asm_rlwinm_(*(int32_t *)(v9 + 4), 0, 15, 15) != 0) {
			// 0x906a8
			v6 = 3;
			if (v6 != g34) {
				v3 = v6;
				// 0x906b4
				v7 = g23;
				v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
				if (v10 == v3) {
					// 0x906c4
					*(char *)(g34 + v7 - 0x4d13) = 1;
					return g34;
				}
				// 0x906d4
				result = g34;
				if (v10 != result) {
					// bb
					return result;
				}
				// 0x906dc
				result2 = *(int32_t *)(v7 - 0x7068);
				*(char *)result2 = (char)v3;
				return result2;
			}
		}
		// 0x906b0
		v3 = 4;
		// branch -> 0x906b4
		// 0x906b4
		v7 = g23;
		v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
		if (v10 == v3) {
			// 0x906c4
			*(char *)(g34 + v7 - 0x4d13) = 1;
			return g34;
		}
		// 0x906d4
		result = g34;
		if (v10 != result) {
			// bb
			return result;
		}
		// 0x906dc
		result2 = *(int32_t *)(v7 - 0x7068);
		*(char *)result2 = (char)v3;
		return result2;
	}
	// 0x90680
	v9 = v2 + 4;
	v2 = v9;
	if (__asm_rlwinm_(*(int32_t *)v9, 0, 15, 15) == 0) {
		// 0x90698
		if (__asm_rlwinm_(*(int32_t *)(v2 + 4), 0, 15, 15) == 0) {
			// 0x906b0
			v3 = 4;
			// branch -> 0x906b4
			// 0x906b4
			v7 = g23;
			v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
			if (v10 == v3) {
				// 0x906c4
				*(char *)(g34 + v7 - 0x4d13) = 1;
				return g34;
			}
			// 0x906d4
			result = g34;
			if (v10 != result) {
				// bb
				return result;
			}
			// 0x906dc
			result2 = *(int32_t *)(v7 - 0x7068);
			*(char *)result2 = (char)v3;
			return result2;
		}
		// 0x906a8
		v6 = 3;
		if (v6 != g34) {
			v3 = v6;
			// 0x906b4
			v7 = g23;
			v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
			if (v10 == v3) {
				// 0x906c4
				*(char *)(g34 + v7 - 0x4d13) = 1;
				return g34;
			}
			// 0x906d4
			result = g34;
			if (v10 != result) {
				// bb
				return result;
			}
			// 0x906dc
			result2 = *(int32_t *)(v7 - 0x7068);
			*(char *)result2 = (char)v3;
			return result2;
		}
		// 0x906b0
		v3 = 4;
		// branch -> 0x906b4
		// 0x906b4
		v7 = g23;
		v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
		if (v10 == v3) {
			// 0x906c4
			*(char *)(g34 + v7 - 0x4d13) = 1;
			return g34;
		}
		// 0x906d4
		result = g34;
		if (v10 != result) {
			// bb
			return result;
		}
		// 0x906dc
		result2 = *(int32_t *)(v7 - 0x7068);
		*(char *)result2 = (char)v3;
		return result2;
	}
	// 0x90690
	v5 = 2;
	if (v5 != g34) {
		v3 = v5;
		// 0x906b4
		v7 = g23;
		v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
		if (v10 == v3) {
			// 0x906c4
			*(char *)(g34 + v7 - 0x4d13) = 1;
			return g34;
		}
		// 0x906d4
		result = g34;
		if (v10 != result) {
			// bb
			return result;
		}
		// 0x906dc
		result2 = *(int32_t *)(v7 - 0x7068);
		*(char *)result2 = (char)v3;
		return result2;
	}
	// 0x90698
	if (__asm_rlwinm_(*(int32_t *)(v2 + 4), 0, 15, 15) != 0) {
		// 0x906a8
		v6 = 3;
		if (v6 != g34) {
			v3 = v6;
			// 0x906b4
			v7 = g23;
			v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
			if (v10 == v3) {
				// 0x906c4
				*(char *)(g34 + v7 - 0x4d13) = 1;
				return g34;
			}
			// 0x906d4
			result = g34;
			if (v10 != result) {
				// bb
				return result;
			}
			// 0x906dc
			result2 = *(int32_t *)(v7 - 0x7068);
			*(char *)result2 = (char)v3;
			return result2;
		}
	}
	// 0x906b0
	v3 = 4;
	// branch -> 0x906b4
	// 0x906b4
	v7 = g23;
	v10 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
	if (v10 == v3) {
		// 0x906c4
		*(char *)(g34 + v7 - 0x4d13) = 1;
		return g34;
	}
	// 0x906d4
	result = g34;
	if (v10 != result) {
		// bb
		return result;
	}
	// 0x906dc
	result2 = *(int32_t *)(v7 - 0x7068);
	*(char *)result2 = (char)v3;
	return result2;
}

// Address range: 0x906e8 - 0x90768
int32_t function_906e8(int32_t a1, int32_t a2)
{
	// 0x906e8
	if (__asm_rlwinm_(a1, 0, 0, 0) != 0) {
		// 0x90704
		function_9064c();
		// branch -> 0x90708
	}
	int32_t result = *(int32_t *)(g23 - 0x7060); // 0x90708
	int32_t v1 = a1 % 0x80000000;                // 0x9070c
	int32_t v2 = v1;                             // r31
	int32_t *v3 = (int32_t *)(g23 - 0x4d04);     // 0x90710
	int32_t v4 = *(int32_t *)result;             // 0x90714
	if (*v3 < v4 + v1) {
		int32_t v5 = v1; // 0x90738
		if (v1 == 0x7fffffff) {
			int32_t v6 = a1 % 0x10000; // 0x90734
			v2 = v6;
			v5 = v6;
			// branch -> 0x90738
		}
		int32_t v7 = *(int32_t *)(g23 - 0x700c); // r3
		*v3 = v5 + v4;
		int32_t v8 = (int32_t) * (char *)v7 * 4 * v2; // 0x9074c
		*(int32_t *)(g23 - 0x4d08) = v8;
		result = v7;
		// branch -> 0x90754
	}
	// 0x90754
	return result;
}

// Address range: 0x90768 - 0x907f4
int32_t function_90768(void)
{
	int32_t v1 = g36;                        // 0x90768
	int32_t v2 = *(int32_t *)(g23 - 0x7008); // 0x90770
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7010); // r30
	int32_t v4 = *(int32_t *)(g23 - 0x7014); // r29
	int32_t v5 = 0;                          // r28
	// branch -> 0x90794
	while (true) {
		// 0x90794
		if (__asm_rlwinm_(*(int32_t *)v2, 0, 14, 14) != 0) {
			// 0x907a0
			if (*(int32_t *)v3 == 4) {
				int32_t v6 = *(int32_t *)v4; // 0x907ac
				int32_t v7 = v5;             // 0x907b4
				g34 = v7;
				g34 = function_906e8(v7, __asm_lwbrx(v6, v6));
				// branch -> 0x907bc
			}
		}
		int32_t v8 = v5 + 1; // 0x907bc
		v5 = v8;
		v3 += 4;
		v4 += 4;
		int32_t v9 = g36 + 4; // 0x907cc
		g36 = v9;
		if (v8 >= 4) {
			// break -> 0x907d4
			break;
		}
		v2 = v9;
		// continue -> 0x90794
	}
	// 0x907d4
	g36 = v1;
	return g34;
}

// Address range: 0x907f4 - 0x908ec
int32_t multi_player_left_msg(int32_t result, int32_t a2)
{
	int32_t v1 = g10; // 0x907f8
	g31 = result;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0x90800
	g36 = v2;
	int32_t v3 = 0x55ec * result; // 0x90804
	g35 = v3;
	g32 = a2;
	int32_t v4 = v2 + v3 + 29; // 0x90818
	g33 = v4;
	if (*(char *)v4 == 0) {
		// 0x908d8
		g10 = v1;
		return result;
	}
	// 0x90824
	RemovePlrFromMap(result);
	RemovePortalMissile(g31);
	DeactivatePortal(g31);
	RemovePlrPortal(g31);
	g34 = g31;
	RemovePlrMissiles();
	char *v5;        // 0x908cc
	int32_t result2; // 0x908cc
	if (g32 != 0) {
		uint32_t v6 = *(int32_t *)(4 * g31 + *(int32_t *)(g23 - 0x5c20)); // 0x90864
		int32_t v7;                                                       // 0x908b0
		if (v6 != 0x40000005) {
			// 0x90874
			if (v6 > 0x40000005) {
				// 0x90888
				if (v6 == 0x40000006) {
					// 0x90894
					// branch -> 0x908ac
				}
			} else {
				// 0x90878
				if (v6 >= 0x40000004) {
					// 0x9089c
					*(char *)*(int32_t *)(g23 - 0x71fc) = 1;
					// branch -> 0x908ac
				}
			}
			// 0x908ac
			v7 = g35 + 316 + g36;
			EventPlrMsg(v7, v7);
			// branch -> 0x908b8
			// 0x908b8
			*(char *)g33 = 0;
			*(char *)(g35 + g36 + 316) = (char)0;
			v5 = (char *)*(int32_t *)(g23 - 0x70a4);
			result2 = (int32_t)*v5;
			*v5 = (char)(result2 - 1);
			// branch -> 0x908d8
			// 0x908d8
			g10 = v1;
			return result2;
		}
		// 0x908ac
		v7 = g35 + 316 + g36;
		EventPlrMsg(v7, v7);
		// branch -> 0x908b8
	}
	// 0x908b8
	*(char *)g33 = 0;
	*(char *)(g35 + g36 + 316) = (char)0;
	v5 = (char *)*(int32_t *)(g23 - 0x70a4);
	result2 = (int32_t)*v5;
	*v5 = (char)(result2 - 1);
	// branch -> 0x908d8
	// 0x908d8
	g10 = v1;
	return result2;
}

// Address range: 0x908ec - 0x9097c
int32_t multi_clear_left_tbl(void)
{
	// 0x908ec
	g31 = 0;
	int32_t v1 = *(int32_t *)(g23 - 0x5c20); // 0x908f8
	int32_t result = v1;                     // r3
	g35 = *(int32_t *)(g23 - 0x72bc);
	int32_t v2 = g23 - 0x4d0f; // 0x90900
	g33 = v2;
	g36 = 0;
	g32 = v1;
	int32_t v3 = 0; // 0x90930
	// branch -> 0x90918
	while (true) {
		int32_t v4 = v2; // 0x90960
		int32_t v5 = v1; // 0x90958
		int32_t v6 = v3; // 0x90954
		if (*(char *)v2 != 0) {
			// 0x90924
			int32_t v7;
			if (*(char *)g35 == 1) {
				// 0x90930
				v7 = msg_send_drop_pkt((char)v3, *(int32_t *)v1);
				// branch -> 0x9094c
			} else {
				// 0x90940
				v7 = multi_player_left_msg(v3, 1);
				// branch -> 0x9094c
			}
			// 0x9094c
			result = v7;
			*(char *)g33 = (char)g36;
			*(int32_t *)g32 = g36;
			v4 = g33;
			v5 = g32;
			v6 = g31;
			// branch -> 0x90954
		}
		int32_t v8 = v6 + 1; // 0x90954
		g31 = v8;
		int32_t v9 = v5 + 4; // 0x90958
		g32 = v9;
		int32_t v10 = v4 + 1; // 0x90960
		g33 = v10;
		if (v8 >= 4) {
			// break -> 0x90968
			break;
		}
		v1 = v9;
		v3 = v8;
		v2 = v10;
		// continue -> 0x90918
	}
	// 0x90968
	return result;
}

// Address range: 0x9097c - 0x909b4
int32_t multi_player_left(int32_t a1, int32_t a2)
{
	*(char *)(a1 + g23 - 0x4d0f) = 1;
	*(int32_t *)(*(int32_t *)(g23 - 0x5c20) + 4 * a1) = a2;
	int32_t result = multi_clear_left_tbl(); // 0x909a0
	return result;
}

// Address range: 0x909b4 - 0x909e4
int32_t multi_net_ping(int32_t a1)
{
	// 0x909b4
	*(char *)(g23 - 0x4d18) = 1;
	int32_t result = GetTickCount(); // 0x909c8
	int32_t v1;
	*(int32_t *)(v1 - 0x4d1c) = result;
	return result;
}

// Address range: 0x909e4 - 0x90a58
int32_t function_909e4(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7008); // 0x909f4
	int32_t v2 = 0;                          // r29
	// branch -> 0x90a08
	int32_t result; // r3
	while (true) {
		int32_t v3 = *(int32_t *)v1; // 0x90a08
		result = v3;
		int32_t v4; // 0x90a2c
		if (__asm_rlwinm_(v3, 0, 13, 13) == 0) {
			// 0x90a14
			if (__asm_rlwinm_(result, 0, 15, 15) != 0) {
				int32_t v5 = v2; // 0x90a1c
				g34 = v5;
				result = SNetDropPlayer(v5, 0x40000006);
				// branch -> 0x90a2c
			}
			// 0x90a2c
			v4 = v2 + 1;
			v2 = v4;
			if (v4 >= 4) {
				// break -> 0x90a3c
				break;
			}
			v1 += 4;
			// continue -> 0x90a08
			continue;
		}
		// 0x90a2c
		v4 = v2 + 1;
		v2 = v4;
		if (v4 >= 4) {
			// break -> 0x90a3c
			break;
		}
		v1 += 4;
		// continue -> 0x90a08
	}
	// 0x90a3c
	return result;
}

// Address range: 0x90a58 - 0x90c14
int32_t function_90a58(int32_t a1)
{
	// 0x90a58
	g36 = *(int32_t *)(g23 - 0x77ac);
	g35 = *(int32_t *)(g23 - 0x7064);
	if (*(char *)(g23 - 0x4d18) == 0) {
		// 0x90bfc
		return g34;
	}
	int32_t v1 = GetTickCount(); // 0x90a80
	g34 = v1;
	int32_t v2;
	int32_t v3 = v1 - *(int32_t *)(v2 - 0x4d1c); // 0x90a8c
	if (v3 < 0x4e21) {
		// 0x90aa8
		if (v3 >= 0x2710) {
			int32_t v4 = *(int32_t *)(v2 - 0x7008); // 0x90ab0
			int32_t v5 = v4;                        // r3
			int32_t v6 = -1;                        // r5
			int32_t v7 = -1;                        // r6
			int32_t v8 = *(int32_t *)v4;            // 0x90abc
			int32_t v9 = 0;                         // r7
			int32_t v10 = 0;                        // r8
			int32_t v11;                            // 0x90bc4
			int32_t v12;                            // 0x90afc
			int32_t v13;                            // 0x90b34
			uint32_t v14;                           // 0x90ba4
			uint32_t v15;                           // 0x90ba8
			int32_t v16;                            // 0x90afc
			int32_t v17;                            // 0x90b34
			int32_t v18;                            // 0x90b6c
			if (__asm_rlwinm_(v8, 0, 15, 15) != 0) {
				// 0x90ad0
				if (v7 == -1) {
					// 0x90ad8
					v7 = 0;
					// branch -> 0x90adc
				}
				// 0x90adc
				if (__asm_rlwinm_(v8, 0, 13, 13) == 0) {
					// 0x90af8
					v10 = 1;
					// branch -> 0x90afc
				} else {
					// 0x90ae4
					v9 = 1;
					if (v6 == -1) {
						// 0x90af0
						v6 = 0;
						// branch -> 0x90afc
					}
				}
				// 0x90afc
				v12 = v5 + 4;
				v16 = *(int32_t *)v12;
				v5 = v12;
				if (__asm_rlwinm_(v16, 0, 15, 15) == 0) {
					// 0x90b34
					v13 = v5 + 4;
					v17 = *(int32_t *)v13;
					v5 = v13;
					if (__asm_rlwinm_(v17, 0, 15, 15) == 0) {
						// 0x90b6c
						v18 = *(int32_t *)(v5 + 4);
						if (__asm_rlwinm_(v18, 0, 15, 15) == 0) {
							// 0x90ba4
							v14 = v9 % 256;
							g34 = v14;
							v15 = v10 % 256;
							if (v14 < v15) {
								// 0x90bb4
								*(char *)g35 = 1;
								// branch -> 0x90bfc
								// 0x90bfc
								return g34;
							}
							// 0x90bc0
							if (v14 != v15) {
								// 0x90bec
								if (v6 == *(int32_t *)g36) {
									// 0x90bf8
									g34 = function_909e4(v14);
									// branch -> 0x90bfc
								}
								// 0x90bfc
								return g34;
							}
							// 0x90bc4
							v11 = v7;
							if (v11 == v6) {
								// 0x90bd8
								if (v11 == *(int32_t *)g36) {
									// 0x90be4
									g34 = function_909e4(v14);
									// branch -> 0x90bfc
								}
							} else {
								// 0x90bcc
								*(char *)g35 = 1;
								// branch -> 0x90bfc
							}
							// 0x90bfc
							return g34;
						}
						// 0x90b78
						if (v7 == -1) {
							// 0x90b80
							v7 = 3;
							// branch -> 0x90b84
						}
						// 0x90b84
						if (__asm_rlwinm_(v18, 0, 13, 13) == 0) {
							// 0x90ba0
							v10++;
							// branch -> 0x90ba4
						} else {
							// 0x90b8c
							v9++;
							if (v6 == -1) {
								// 0x90b98
								v6 = 3;
								// branch -> 0x90ba4
							}
						}
						// 0x90ba4
						v14 = v9 % 256;
						g34 = v14;
						v15 = v10 % 256;
						if (v14 < v15) {
							// 0x90bb4
							*(char *)g35 = 1;
							// branch -> 0x90bfc
							// 0x90bfc
							return g34;
						}
						// 0x90bc0
						if (v14 != v15) {
							// 0x90bec
							if (v6 == *(int32_t *)g36) {
								// 0x90bf8
								g34 = function_909e4(v14);
								// branch -> 0x90bfc
							}
							// 0x90bfc
							return g34;
						}
						// 0x90bc4
						v11 = v7;
						if (v11 == v6) {
							// 0x90bd8
							if (v11 == *(int32_t *)g36) {
								// 0x90be4
								g34 = function_909e4(v14);
								// branch -> 0x90bfc
							}
						} else {
							// 0x90bcc
							*(char *)g35 = 1;
							// branch -> 0x90bfc
						}
						// 0x90bfc
						return g34;
					}
					// 0x90b40
					if (v7 == -1) {
						// 0x90b48
						v7 = 2;
						// branch -> 0x90b4c
					}
					// 0x90b4c
					if (__asm_rlwinm_(v17, 0, 13, 13) == 0) {
						// 0x90b68
						v10++;
						// branch -> 0x90b6c
					} else {
						// 0x90b54
						v9++;
						if (v6 == -1) {
							// 0x90b60
							v6 = 2;
							// branch -> 0x90b6c
						}
					}
					// 0x90b6c
					v18 = *(int32_t *)(v5 + 4);
					if (__asm_rlwinm_(v18, 0, 15, 15) == 0) {
						// 0x90ba4
						v14 = v9 % 256;
						g34 = v14;
						v15 = v10 % 256;
						if (v14 < v15) {
							// 0x90bb4
							*(char *)g35 = 1;
							// branch -> 0x90bfc
							// 0x90bfc
							return g34;
						}
						// 0x90bc0
						if (v14 != v15) {
							// 0x90bec
							if (v6 == *(int32_t *)g36) {
								// 0x90bf8
								g34 = function_909e4(v14);
								// branch -> 0x90bfc
							}
							// 0x90bfc
							return g34;
						}
						// 0x90bc4
						v11 = v7;
						if (v11 == v6) {
							// 0x90bd8
							if (v11 == *(int32_t *)g36) {
								// 0x90be4
								g34 = function_909e4(v14);
								// branch -> 0x90bfc
							}
						} else {
							// 0x90bcc
							*(char *)g35 = 1;
							// branch -> 0x90bfc
						}
						// 0x90bfc
						return g34;
					}
					// 0x90b78
					if (v7 == -1) {
						// 0x90b80
						v7 = 3;
						// branch -> 0x90b84
					}
					// 0x90b84
					if (__asm_rlwinm_(v18, 0, 13, 13) == 0) {
						// 0x90ba0
						v10++;
						// branch -> 0x90ba4
					} else {
						// 0x90b8c
						v9++;
						if (v6 == -1) {
							// 0x90b98
							v6 = 3;
							// branch -> 0x90ba4
						}
					}
					// 0x90ba4
					v14 = v9 % 256;
					g34 = v14;
					v15 = v10 % 256;
					if (v14 < v15) {
						// 0x90bb4
						*(char *)g35 = 1;
						// branch -> 0x90bfc
						// 0x90bfc
						return g34;
					}
					// 0x90bc0
					if (v14 != v15) {
						// 0x90bec
						if (v6 == *(int32_t *)g36) {
							// 0x90bf8
							g34 = function_909e4(v14);
							// branch -> 0x90bfc
						}
						// 0x90bfc
						return g34;
					}
					// 0x90bc4
					v11 = v7;
					if (v11 == v6) {
						// 0x90bd8
						if (v11 == *(int32_t *)g36) {
							// 0x90be4
							g34 = function_909e4(v14);
							// branch -> 0x90bfc
						}
					} else {
						// 0x90bcc
						*(char *)g35 = 1;
						// branch -> 0x90bfc
					}
					// 0x90bfc
					return g34;
				}
				// 0x90b08
				if (v7 == -1) {
					// 0x90b10
					v7 = 1;
					// branch -> 0x90b14
				}
				// 0x90b14
				if (__asm_rlwinm_(v16, 0, 13, 13) == 0) {
					// 0x90b30
					v10++;
					// branch -> 0x90b34
				} else {
					// 0x90b1c
					v9++;
					if (v6 == -1) {
						// 0x90b28
						v6 = 1;
						// branch -> 0x90b34
					}
				}
				// 0x90b34
				v13 = v5 + 4;
				v17 = *(int32_t *)v13;
				v5 = v13;
				if (__asm_rlwinm_(v17, 0, 15, 15) == 0) {
					// 0x90b6c
					v18 = *(int32_t *)(v5 + 4);
					if (__asm_rlwinm_(v18, 0, 15, 15) == 0) {
						// 0x90ba4
						v14 = v9 % 256;
						g34 = v14;
						v15 = v10 % 256;
						if (v14 < v15) {
							// 0x90bb4
							*(char *)g35 = 1;
							// branch -> 0x90bfc
							// 0x90bfc
							return g34;
						}
						// 0x90bc0
						if (v14 != v15) {
							// 0x90bec
							if (v6 == *(int32_t *)g36) {
								// 0x90bf8
								g34 = function_909e4(v14);
								// branch -> 0x90bfc
							}
							// 0x90bfc
							return g34;
						}
						// 0x90bc4
						v11 = v7;
						if (v11 == v6) {
							// 0x90bd8
							if (v11 == *(int32_t *)g36) {
								// 0x90be4
								g34 = function_909e4(v14);
								// branch -> 0x90bfc
							}
						} else {
							// 0x90bcc
							*(char *)g35 = 1;
							// branch -> 0x90bfc
						}
						// 0x90bfc
						return g34;
					}
					// 0x90b78
					if (v7 == -1) {
						// 0x90b80
						v7 = 3;
						// branch -> 0x90b84
					}
					// 0x90b84
					if (__asm_rlwinm_(v18, 0, 13, 13) == 0) {
						// 0x90ba0
						v10++;
						// branch -> 0x90ba4
					} else {
						// 0x90b8c
						v9++;
						if (v6 == -1) {
							// 0x90b98
							v6 = 3;
							// branch -> 0x90ba4
						}
					}
					// 0x90ba4
					v14 = v9 % 256;
					g34 = v14;
					v15 = v10 % 256;
					if (v14 < v15) {
						// 0x90bb4
						*(char *)g35 = 1;
						// branch -> 0x90bfc
						// 0x90bfc
						return g34;
					}
					// 0x90bc0
					if (v14 != v15) {
						// 0x90bec
						if (v6 == *(int32_t *)g36) {
							// 0x90bf8
							g34 = function_909e4(v14);
							// branch -> 0x90bfc
						}
						// 0x90bfc
						return g34;
					}
					// 0x90bc4
					v11 = v7;
					if (v11 == v6) {
						// 0x90bd8
						if (v11 == *(int32_t *)g36) {
							// 0x90be4
							g34 = function_909e4(v14);
							// branch -> 0x90bfc
						}
					} else {
						// 0x90bcc
						*(char *)g35 = 1;
						// branch -> 0x90bfc
					}
					// 0x90bfc
					return g34;
				}
				// 0x90b40
				if (v7 == -1) {
					// 0x90b48
					v7 = 2;
					// branch -> 0x90b4c
				}
				// 0x90b4c
				if (__asm_rlwinm_(v17, 0, 13, 13) == 0) {
					// 0x90b68
					v10++;
					// branch -> 0x90b6c
				} else {
					// 0x90b54
					v9++;
					if (v6 == -1) {
						// 0x90b60
						v6 = 2;
						// branch -> 0x90b6c
					}
				}
				// 0x90b6c
				v18 = *(int32_t *)(v5 + 4);
				if (__asm_rlwinm_(v18, 0, 15, 15) == 0) {
					// 0x90ba4
					v14 = v9 % 256;
					g34 = v14;
					v15 = v10 % 256;
					if (v14 < v15) {
						// 0x90bb4
						*(char *)g35 = 1;
						// branch -> 0x90bfc
						// 0x90bfc
						return g34;
					}
					// 0x90bc0
					if (v14 != v15) {
						// 0x90bec
						if (v6 == *(int32_t *)g36) {
							// 0x90bf8
							g34 = function_909e4(v14);
							// branch -> 0x90bfc
						}
						// 0x90bfc
						return g34;
					}
					// 0x90bc4
					v11 = v7;
					if (v11 == v6) {
						// 0x90bd8
						if (v11 == *(int32_t *)g36) {
							// 0x90be4
							g34 = function_909e4(v14);
							// branch -> 0x90bfc
						}
					} else {
						// 0x90bcc
						*(char *)g35 = 1;
						// branch -> 0x90bfc
					}
					// 0x90bfc
					return g34;
				}
				// 0x90b78
				if (v7 == -1) {
					// 0x90b80
					v7 = 3;
					// branch -> 0x90b84
				}
				// 0x90b84
				if (__asm_rlwinm_(v18, 0, 13, 13) == 0) {
					// 0x90ba0
					v10++;
					// branch -> 0x90ba4
				} else {
					// 0x90b8c
					v9++;
					if (v6 == -1) {
						// 0x90b98
						v6 = 3;
						// branch -> 0x90ba4
					}
				}
				// 0x90ba4
				v14 = v9 % 256;
				g34 = v14;
				v15 = v10 % 256;
				if (v14 < v15) {
					// 0x90bb4
					*(char *)g35 = 1;
					// branch -> 0x90bfc
					// 0x90bfc
					return g34;
				}
				// 0x90bc0
				if (v14 != v15) {
					// 0x90bec
					if (v6 == *(int32_t *)g36) {
						// 0x90bf8
						g34 = function_909e4(v14);
						// branch -> 0x90bfc
					}
					// 0x90bfc
					return g34;
				}
				// 0x90bc4
				v11 = v7;
				if (v11 == v6) {
					// 0x90bd8
					if (v11 == *(int32_t *)g36) {
						// 0x90be4
						g34 = function_909e4(v14);
						// branch -> 0x90bfc
					}
				} else {
					// 0x90bcc
					*(char *)g35 = 1;
					// branch -> 0x90bfc
				}
				// 0x90bfc
				return g34;
			}
			// 0x90afc
			v12 = v5 + 4;
			v16 = *(int32_t *)v12;
			v5 = v12;
			if (__asm_rlwinm_(v16, 0, 15, 15) != 0) {
				// 0x90b08
				if (v7 == -1) {
					// 0x90b10
					v7 = 1;
					// branch -> 0x90b14
				}
				// 0x90b14
				if (__asm_rlwinm_(v16, 0, 13, 13) == 0) {
					// 0x90b30
					v10++;
					// branch -> 0x90b34
				} else {
					// 0x90b1c
					v9++;
					if (v6 == -1) {
						// 0x90b28
						v6 = 1;
						// branch -> 0x90b34
					}
				}
				// 0x90b34
				v13 = v5 + 4;
				v17 = *(int32_t *)v13;
				v5 = v13;
				if (__asm_rlwinm_(v17, 0, 15, 15) != 0) {
					// 0x90b40
					if (v7 == -1) {
						// 0x90b48
						v7 = 2;
						// branch -> 0x90b4c
					}
					// 0x90b4c
					if (__asm_rlwinm_(v17, 0, 13, 13) == 0) {
						// 0x90b68
						v10++;
						// branch -> 0x90b6c
					} else {
						// 0x90b54
						v9++;
						if (v6 == -1) {
							// 0x90b60
							v6 = 2;
							// branch -> 0x90b6c
						}
					}
					// 0x90b6c
					v18 = *(int32_t *)(v5 + 4);
					if (__asm_rlwinm_(v18, 0, 15, 15) != 0) {
						// 0x90b78
						if (v7 == -1) {
							// 0x90b80
							v7 = 3;
							// branch -> 0x90b84
						}
						// 0x90b84
						if (__asm_rlwinm_(v18, 0, 13, 13) == 0) {
							// 0x90ba0
							v10++;
							// branch -> 0x90ba4
						} else {
							// 0x90b8c
							v9++;
							if (v6 == -1) {
								// 0x90b98
								v6 = 3;
								// branch -> 0x90ba4
							}
						}
						// 0x90ba4
						v14 = v9 % 256;
						g34 = v14;
						v15 = v10 % 256;
						if (v14 < v15) {
							// 0x90bb4
							*(char *)g35 = 1;
							// branch -> 0x90bfc
						} else {
							// 0x90bc0
							if (v14 == v15) {
								// 0x90bc4
								v11 = v7;
								if (v11 == v6) {
									// 0x90bd8
									if (v11 == *(int32_t *)g36) {
										// 0x90be4
										g34 = function_909e4(v14);
										// branch -> 0x90bfc
									}
								} else {
									// 0x90bcc
									*(char *)g35 = 1;
									// branch -> 0x90bfc
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x90bec
								if (v6 == *(int32_t *)g36) {
									// 0x90bf8
									g34 = function_909e4(v14);
									// branch -> 0x90bfc
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x90ba4
					v14 = v9 % 256;
					g34 = v14;
					v15 = v10 % 256;
					if (v14 < v15) {
						// 0x90bb4
						*(char *)g35 = 1;
						// branch -> 0x90bfc
					} else {
						// 0x90bc0
						if (v14 == v15) {
							// 0x90bc4
							v11 = v7;
							if (v11 == v6) {
								// 0x90bd8
								if (v11 == *(int32_t *)g36) {
									// 0x90be4
									g34 = function_909e4(v14);
									// branch -> 0x90bfc
								}
							} else {
								// 0x90bcc
								*(char *)g35 = 1;
								// branch -> 0x90bfc
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x90bec
							if (v6 == *(int32_t *)g36) {
								// 0x90bf8
								g34 = function_909e4(v14);
								// branch -> 0x90bfc
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x90b6c
				v18 = *(int32_t *)(v5 + 4);
				if (__asm_rlwinm_(v18, 0, 15, 15) != 0) {
					// 0x90b78
					if (v7 == -1) {
						// 0x90b80
						v7 = 3;
						// branch -> 0x90b84
					}
					// 0x90b84
					if (__asm_rlwinm_(v18, 0, 13, 13) == 0) {
						// 0x90ba0
						v10++;
						// branch -> 0x90ba4
					} else {
						// 0x90b8c
						v9++;
						if (v6 == -1) {
							// 0x90b98
							v6 = 3;
							// branch -> 0x90ba4
						}
					}
					// 0x90ba4
					v14 = v9 % 256;
					g34 = v14;
					v15 = v10 % 256;
					if (v14 < v15) {
						// 0x90bb4
						*(char *)g35 = 1;
						// branch -> 0x90bfc
					} else {
						// 0x90bc0
						if (v14 == v15) {
							// 0x90bc4
							v11 = v7;
							if (v11 == v6) {
								// 0x90bd8
								if (v11 == *(int32_t *)g36) {
									// 0x90be4
									g34 = function_909e4(v14);
									// branch -> 0x90bfc
								}
							} else {
								// 0x90bcc
								*(char *)g35 = 1;
								// branch -> 0x90bfc
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x90bec
							if (v6 == *(int32_t *)g36) {
								// 0x90bf8
								g34 = function_909e4(v14);
								// branch -> 0x90bfc
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x90ba4
				v14 = v9 % 256;
				g34 = v14;
				v15 = v10 % 256;
				if (v14 < v15) {
					// 0x90bb4
					*(char *)g35 = 1;
					// branch -> 0x90bfc
				} else {
					// 0x90bc0
					if (v14 == v15) {
						// 0x90bc4
						v11 = v7;
						if (v11 == v6) {
							// 0x90bd8
							if (v11 == *(int32_t *)g36) {
								// 0x90be4
								g34 = function_909e4(v14);
								// branch -> 0x90bfc
							}
						} else {
							// 0x90bcc
							*(char *)g35 = 1;
							// branch -> 0x90bfc
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x90bec
						if (v6 == *(int32_t *)g36) {
							// 0x90bf8
							g34 = function_909e4(v14);
							// branch -> 0x90bfc
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x90b34
			v13 = v5 + 4;
			v17 = *(int32_t *)v13;
			v5 = v13;
			if (__asm_rlwinm_(v17, 0, 15, 15) != 0) {
				// 0x90b40
				if (v7 == -1) {
					// 0x90b48
					v7 = 2;
					// branch -> 0x90b4c
				}
				// 0x90b4c
				if (__asm_rlwinm_(v17, 0, 13, 13) == 0) {
					// 0x90b68
					v10++;
					// branch -> 0x90b6c
				} else {
					// 0x90b54
					v9++;
					if (v6 == -1) {
						// 0x90b60
						v6 = 2;
						// branch -> 0x90b6c
					}
				}
				// 0x90b6c
				v18 = *(int32_t *)(v5 + 4);
				if (__asm_rlwinm_(v18, 0, 15, 15) != 0) {
					// 0x90b78
					if (v7 == -1) {
						// 0x90b80
						v7 = 3;
						// branch -> 0x90b84
					}
					// 0x90b84
					if (__asm_rlwinm_(v18, 0, 13, 13) == 0) {
						// 0x90ba0
						v10++;
						// branch -> 0x90ba4
					} else {
						// 0x90b8c
						v9++;
						if (v6 == -1) {
							// 0x90b98
							v6 = 3;
							// branch -> 0x90ba4
						}
					}
					// 0x90ba4
					v14 = v9 % 256;
					g34 = v14;
					v15 = v10 % 256;
					if (v14 < v15) {
						// 0x90bb4
						*(char *)g35 = 1;
						// branch -> 0x90bfc
					} else {
						// 0x90bc0
						if (v14 == v15) {
							// 0x90bc4
							v11 = v7;
							if (v11 == v6) {
								// 0x90bd8
								if (v11 == *(int32_t *)g36) {
									// 0x90be4
									g34 = function_909e4(v14);
									// branch -> 0x90bfc
								}
							} else {
								// 0x90bcc
								*(char *)g35 = 1;
								// branch -> 0x90bfc
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x90bec
							if (v6 == *(int32_t *)g36) {
								// 0x90bf8
								g34 = function_909e4(v14);
								// branch -> 0x90bfc
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x90ba4
				v14 = v9 % 256;
				g34 = v14;
				v15 = v10 % 256;
				if (v14 < v15) {
					// 0x90bb4
					*(char *)g35 = 1;
					// branch -> 0x90bfc
				} else {
					// 0x90bc0
					if (v14 == v15) {
						// 0x90bc4
						v11 = v7;
						if (v11 == v6) {
							// 0x90bd8
							if (v11 == *(int32_t *)g36) {
								// 0x90be4
								g34 = function_909e4(v14);
								// branch -> 0x90bfc
							}
						} else {
							// 0x90bcc
							*(char *)g35 = 1;
							// branch -> 0x90bfc
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x90bec
						if (v6 == *(int32_t *)g36) {
							// 0x90bf8
							g34 = function_909e4(v14);
							// branch -> 0x90bfc
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x90b6c
			v18 = *(int32_t *)(v5 + 4);
			if (__asm_rlwinm_(v18, 0, 15, 15) != 0) {
				// 0x90b78
				if (v7 == -1) {
					// 0x90b80
					v7 = 3;
					// branch -> 0x90b84
				}
				// 0x90b84
				if (__asm_rlwinm_(v18, 0, 13, 13) == 0) {
					// 0x90ba0
					v10++;
					// branch -> 0x90ba4
				} else {
					// 0x90b8c
					v9++;
					if (v6 == -1) {
						// 0x90b98
						v6 = 3;
						// branch -> 0x90ba4
					}
				}
				// 0x90ba4
				v14 = v9 % 256;
				g34 = v14;
				v15 = v10 % 256;
				if (v14 < v15) {
					// 0x90bb4
					*(char *)g35 = 1;
					// branch -> 0x90bfc
				} else {
					// 0x90bc0
					if (v14 == v15) {
						// 0x90bc4
						v11 = v7;
						if (v11 == v6) {
							// 0x90bd8
							if (v11 == *(int32_t *)g36) {
								// 0x90be4
								g34 = function_909e4(v14);
								// branch -> 0x90bfc
							}
						} else {
							// 0x90bcc
							*(char *)g35 = 1;
							// branch -> 0x90bfc
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x90bec
						if (v6 == *(int32_t *)g36) {
							// 0x90bf8
							g34 = function_909e4(v14);
							// branch -> 0x90bfc
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x90ba4
			v14 = v9 % 256;
			g34 = v14;
			v15 = v10 % 256;
			if (v14 < v15) {
				// 0x90bb4
				*(char *)g35 = 1;
				// branch -> 0x90bfc
			} else {
				// 0x90bc0
				if (v14 == v15) {
					// 0x90bc4
					v11 = v7;
					if (v11 == v6) {
						// 0x90bd8
						if (v11 == *(int32_t *)g36) {
							// 0x90be4
							g34 = function_909e4(v14);
							// branch -> 0x90bfc
						}
					} else {
						// 0x90bcc
						*(char *)g35 = 1;
						// branch -> 0x90bfc
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					// 0x90bec
					if (v6 == *(int32_t *)g36) {
						// 0x90bf8
						g34 = function_909e4(v14);
						// branch -> 0x90bfc
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	} else {
		int32_t v19 = *(int32_t *)(v2 - 0x75a4); // 0x90a98
		g34 = v19;
		*(int32_t *)v19 = 0;
		// branch -> 0x90bfc
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x90c14 - 0x90d28
int32_t function_90c14(void)
{
	int32_t v1 = g36; // 0x90c14
	int32_t v2 = g10; // 0x90c18
	int32_t v3 = g35; // 0x90c20
	int32_t v4 = g33; // 0x90c24
	if (*(char *)*(int32_t *)(g23 - 0x7064) != 0) {
		// 0x90c3c
		*(int32_t *)*(int32_t *)(g23 - 0x75a4) = 0;
		// branch -> 0x90d0c
		// 0x90d0c
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return 0;
	}
	int32_t v5 = g23 - 0x4d13; // 0x90c50
	g35 = v5;
	g33 = 0;
	g36 = 0;
	int32_t v6 = 0; // 0x90c742
	// branch -> 0x90c5c
	while (true) {
		char *v7 = (char *)v5; // 0x90c5c
		int32_t v8 = v5;       // 0x90c78
		int32_t v9 = v6;       // 0x90c74
		if (*v7 != 0) {
			// 0x90c68
			*v7 = (char)g36;
			function_8a0e0(g33);
			v8 = g35;
			v9 = g33;
			// branch -> 0x90c74
		}
		int32_t v10 = v9 + 1; // 0x90c74
		g33 = v10;
		int32_t v11 = v8 + 1; // 0x90c78
		g35 = v11;
		if (v10 >= 4) {
			// break -> 0x90c84
			break;
		}
		v6 = v10;
		v5 = v11;
		// continue -> 0x90c5c
	}
	// 0x90c84
	*(int32_t *)(g23 - 0x4d04) = nthread_send_and_recv_turn(*(int32_t *)(g23 - 0x4d04), 1);
	int32_t v12;                        // bp-24
	int32_t v13 = function_92030(&v12); // 0x90c98
	g34 = v13;
	int32_t result; // 0x90d24
	if (v13 == 0) {
		// 0x90ca4
		function_90a58(0);
		result = 0;
		// branch -> 0x90d0c
	} else {
		// 0x90cb0
		g36 = 0;
		*(char *)(g23 - 0x4d18) = 0;
		if (v12 != 0) {
			int32_t *v14 = (int32_t *)(g23 - 0x4d00); // 0x90cc4
			if (*v14 == 0) {
				// 0x90cd0
				NetSendHiPri(0, 0);
				*(int32_t *)(g23 - 0x4d00) = g36;
				// branch -> 0x90d04
			} else {
				// 0x90ce4
				*v14 = g36;
				if (function_8ff48((int32_t *)*(int32_t *)(g23 - 0x5c14)) == 0) {
					// 0x90cf8
					NetSendHiPri(0, 0);
					// branch -> 0x90d04
				}
			}
			// 0x90d04
			function_904c4();
			// branch -> 0x90d0c
			// 0x90d0c
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return 1;
		}
		// 0x90d04
		function_904c4();
		result = 1;
		// branch -> 0x90d0c
	}
	// 0x90d0c
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return result;
}

// Address range: 0x90d28 - 0x90d90
int32_t multi_handle_all_packets(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x90d2c
	int32_t v2 = a3;  // r31
	int32_t v3 = a2;  // r30
	if (a3 == 0) {
		// 0x90d74
		g10 = v1;
		return result;
	}
	int32_t result2 = ParseCmd(result, (char *)a2); // 0x90d5814
	if (result2 == 0) {
		// 0x90d74
		g10 = v1;
		return 0;
	}
	while (true) {
		int32_t v4 = v3 + result2; // 0x90d64
		v3 = v4;
		int32_t v5 = v2 - result2; // 0x90d68
		v2 = v5;
		if (v5 == 0) {
			// 0x90d74
			g10 = v1;
			return result2;
		}
		int32_t v6 = ParseCmd(result, (char *)v4); // 0x90d58
		if (v6 == 0) {
			// break -> 0x90d74
			break;
		}
		result2 = v6;
		// continue -> 0x90d64
	}
	// 0x90d74
	g10 = v1;
	return 0;
}

// Address range: 0x90d90 - 0x90ddc
int32_t multi_process_tmsgs(int32_t a1)
{
	int32_t v1 = g36; // 0x90d90
	int32_t v2 = g10; // 0x90d94
	g36 = *(int32_t *)(g23 - 0x77ac);
	int32_t v3;                           // bp-520
	int32_t v4 = &v3;                     // 0x90db4
	int32_t v5 = tmsg_get(v4, 512); // 0x90dbc1
	if (v5 == 0) {
		// 0x90dc8
		g36 = v1;
		g10 = v2;
		return 0;
	}
	multi_handle_all_packets(*(int32_t *)g36, v4, v5);
	int32_t v6 = tmsg_get(v4, 512); // 0x90dbc
	while (v6 != 0) {
		// 0x90da8
		multi_handle_all_packets(*(int32_t *)g36, v4, v6);
		v6 = tmsg_get(v4, 512);
		// continue -> 0x90da8
	}
	// 0x90dc8
	g36 = v1;
	g10 = v2;
	return 0;
}

// Address range: 0x90ddc - 0x91100
int32_t multi_process_network_packets(void)
{
	// 0x90ddc
	g30 = *(int32_t *)(g23 - 0x7680);
	multi_process_tmsgs(multi_clear_left_tbl());
	int32_t v1;       // bp-48
	int32_t v2 = &v1; // 0x910b4
	int32_t v3;       // bp-56
	int32_t v4 = &v3; // 0x910bc
	                  // branch -> 0x910b4
lab_0x910b4_8:;
	int32_t v5; // 0x90e5c
	while (true) {
		// 0x910b4
		g34 = v2;
		char *v6;                                          // bp-52
		int32_t v7 = function_ec508(v2, (int32_t)&v6, v4); // 0x910c0
		g34 = v7;
		if (v7 == 0) {
			int32_t v8 = GetLastError(); // 0x910d0
			int32_t result;              // 0x910fc
			if (v8 != -0x7aefff95) {
				// 0x910e4
				int32_t v9;
				result = nthread_terminate_game(*(int32_t *)(v9 - 0x5c2c));
				// branch -> 0x910ec
			} else {
				result = v8;
			}
			// 0x910ec
			return result;
		}
		int32_t *v10 = (int32_t *)g32; // 0x90e10
		*v10 = *v10 + 1;
		multi_clear_left_tbl();
		int32_t v11 = (int32_t)v6; // 0x90e20
		g29 = v11;
		int32_t v12 = v11 + 4;               // 0x90e24
		int32_t v13 = __asm_lwbrx(v12, v12); // 0x90e28
		int32_t v14 = g29;                   // 0x90e2c
		int32_t v15 = v14 + 8;               // 0x90e2c
		*(int32_t *)(v14 + 4) = v13;
		int32_t v16 = __asm_lwbrx(v15, v15); // 0x90e34
		int32_t v17 = g29;                   // 0x90e38
		*(int32_t *)(v17 + 8) = v16;
		int32_t v18 = 2 * (v17 + 15);                               // 0x90e40
		unsigned char v19 = *(char *)(v18 | 1);                     // 0x90e40
		int16_t v20 = 256 * (int16_t)v19 | (int16_t) * (char *)v18; // 0x90e40
		int32_t v21 = g29;                                          // 0x90e44
		*(int16_t *)(v21 + 15) = v20;
		int32_t v22 = 2 * (v21 + 17);                               // 0x90e50
		unsigned char v23 = *(char *)(v22 | 1);                     // 0x90e50
		int16_t v24 = 256 * (int16_t)v23 | (int16_t) * (char *)v22; // 0x90e50
		*(int16_t *)(g29 + 17) = v24;
		v5 = v3;
		if (v5 >= 19) {
			// break -> 0x90e68
			break;
		}
		// continue -> 0x910b4
	}
	int32_t v25 = v1;  // 0x90e68
	int32_t v26 = v25; // r5
	if (v25 <= 3) {
		// break (via goto) -> 0x90e74
		goto lab_0x90e74;
	}
	// continue (via goto) -> 0x910b4
	goto lab_0x910b4_8;
lab_0x90e74:;
	int32_t v27 = g29; // 0x90e74
	if (*(int16_t *)(v27 + 15) == 0x6970) {
		// break (via goto) -> 0x90e80
		goto lab_0x90e80;
	}
	// continue (via goto) -> 0x910b4
	goto lab_0x910b4_8;
lab_0x90e80:
	// 0x90e80
	if ((int32_t) * (int16_t *)(v27 + 17) == v5) {
		// break (via goto) -> 0x90e8c
		goto lab_0x90e8c;
	}
	// continue (via goto) -> 0x910b4
	goto lab_0x910b4_8;
lab_0x90e8c:;
	int32_t v28 = g36 + 0x55ec * v25; // 0x90e94
	int32_t v29 = v28;                // r3
	*(int32_t *)(v28 + 80) = (int32_t) * (char *)v27;
	*(int32_t *)(v29 + 84) = (int32_t) * (char *)(g29 + 1);
	if (v26 != *(int32_t *)g35) {
		int32_t v30 = v29 + 404; // 0x90eb4
		int32_t v31 = v30;       // r4
		*(int32_t *)v30 = *(int32_t *)(g29 + 4);
		*(int32_t *)(v29 + 408) = *(int32_t *)(g29 + 8);
		*(int32_t *)(v29 + 356) = (int32_t) * (char *)(g29 + 12);
		*(int32_t *)(v29 + 364) = (int32_t) * (char *)(g29 + 13);
		*(int32_t *)(v29 + 372) = (int32_t) * (char *)(g29 + 14);
		if (*(char *)g33 != 1) {
			int32_t v32 = v29; // 0x90ee8
			if (*(char *)(v32 + 29) != 0) {
				// 0x90ef4
				if (*(int32_t *)v31 != 0) {
					// 0x90f00
					if ((int32_t) * (char *)g31 == *(int32_t *)(v32 + 52)) {
						// 0x90f10
						if (*(char *)(v32 + 315) == 0) {
							// 0x90f1c
							g34 = *(int32_t *)(v32 + 56) - (int32_t) * (char *)g29;
							int32_t v33 = abs();                         // 0x90f28
							int32_t v34 = (int32_t) * (char *)(g29 + 1); // 0x90f34
							g34 = *(int32_t *)(g36 + 0x55ec * v1 + 60) - v34;
							int32_t v35 = abs(); // 0x90f48
							int32_t v36;         // 0x91008
							int32_t v37;         // 0x91028
							int32_t v38;         // 0x90ff8
							int32_t v39;         // 0x91018
							if (v33 > 3) {
							lab_0x90f5c:;
								int32_t v40 = g29;                           // 0x90f5c
								int32_t v41 = (int32_t) * (char *)v40;       // 0x90f5c
								int32_t v42 = (int32_t) * (char *)(v40 + 1); // 0x90f60
								if (*(char *)(*(int32_t *)g30 + v42 + 112 * v41) == 0) {
									// 0x90f7c
									function_a5364(v1);
									int32_t v43 = v1;                 // 0x90f84
									int32_t v44 = g36 + 0x55ec * v43; // 0x90f8c
									*(int32_t *)(v44 + 88) = *(int32_t *)(v44 + 56);
									*(int32_t *)(v44 + 92) = *(int32_t *)(v44 + 60);
									function_a5364(v43);
									int32_t v45 = v1;                 // 0x90fa4
									int32_t v46 = g36 + 0x55ec * v45; // 0x90fb0
									v31 = v46;
									*(int32_t *)(v46 + 56) = (int32_t) * (char *)g29;
									*(int32_t *)(v31 + 60) = (int32_t) * (char *)(g29 + 1);
									*(int32_t *)(v31 + 64) = (int32_t) * (char *)g29;
									*(int32_t *)(v31 + 68) = (int32_t) * (char *)(g29 + 1);
									int32_t v47 = *(int32_t *)g30;                                       // 0x90fe4
									int32_t v48 = *(int32_t *)(v31 + 60) + 112 * *(int32_t *)(v31 + 56); // 0x90fe8
									*(char *)(v47 + v48) = (char)(0x1000000 * v45 / 0x1000000 + 1);
									// branch -> 0x90ff0
								}
							} else {
								// 0x90f54
								if (v35 >= 4) {
									goto lab_0x90f5c;
								}
								// 0x90ff0
								v38 = g36 + 0x55ec * v1;
								g34 = *(int32_t *)(v38 + 64) - *(int32_t *)(v38 + 56);
								v36 = abs();
								v39 = g36 + 0x55ec * v1;
								g34 = *(int32_t *)(v39 + 68) - *(int32_t *)(v39 + 60);
								v37 = abs();
								int32_t v49; // 0x91060
								int32_t v50; // 0x91064
								if (v36 > 1) {
								lab_0x9103c_2:;
									int32_t v51 = g36 + 0x55ec * v1; // 0x91044
									*(int32_t *)(v51 + 64) = *(int32_t *)(v51 + 56);
									*(int32_t *)(v51 + 68) = *(int32_t *)(v51 + 60);
									// branch -> 0x91058
								} else {
								lab_0x91034:
									// 0x91034
									if (v37 >= 2) {
										goto lab_0x9103c_2;
									}
									// 0x91058
									v49 = g29;
									v50 = (int32_t) * (char *)(v49 + 3);
									MakePlrPath(v1, (int32_t) * (char *)(v49 + 2), v50, 1);
									// branch -> 0x910a0
								lab_0x910a0_2:
									// 0x910a0
									multi_handle_all_packets(v1, g29 + 19, v3 - 19);
									// branch -> 0x910b4
									goto lab_0x910b4_8;
								}
								// 0x91058
								v49 = g29;
								v50 = (int32_t) * (char *)(v49 + 3);
								MakePlrPath(v1, (int32_t) * (char *)(v49 + 2), v50, 1);
								// branch -> 0x910a0
								goto lab_0x910a0_2;
							}
							// 0x90ff0
							v38 = g36 + 0x55ec * v1;
							g34 = *(int32_t *)(v38 + 64) - *(int32_t *)(v38 + 56);
							v36 = abs();
							v39 = g36 + 0x55ec * v1;
							g34 = *(int32_t *)(v39 + 68) - *(int32_t *)(v39 + 60);
							v37 = abs();
							if (v36 > 1) {
								goto lab_0x9103c_2;
							}
							goto lab_0x91034;
						}
					}
					// 0x91070
					*(int32_t *)(v32 + 56) = (int32_t) * (char *)g29;
					*(int32_t *)(v29 + 60) = (int32_t) * (char *)(g29 + 1);
					*(int32_t *)(v29 + 64) = (int32_t) * (char *)g29;
					*(int32_t *)(v29 + 68) = (int32_t) * (char *)(g29 + 1);
					*(int32_t *)(v29 + 72) = (int32_t) * (char *)(g29 + 2);
					*(int32_t *)(v29 + 76) = (int32_t) * (char *)(g29 + 3);
					// branch -> 0x910a0
					goto lab_0x910a0_2;
				}
				// 0x910a0
				multi_handle_all_packets(v1, g29 + 19, v3 - 19);
				// branch -> 0x910b4
				goto lab_0x910b4_8;
			}
			// 0x910a0
			multi_handle_all_packets(v1, g29 + 19, v3 - 19);
			// branch -> 0x910b4
			goto lab_0x910b4_8;
		}
		// 0x910a0
		multi_handle_all_packets(v1, g29 + 19, v3 - 19);
		// branch -> 0x910b4
		goto lab_0x910b4_8;
	}
	// 0x910a0
	multi_handle_all_packets(v1, g29 + 19, v3 - 19);
	// branch -> 0x910b4
	goto lab_0x910b4_8;
}

// Address range: 0x91100 - 0x91250
int32_t function_91100(int32_t result, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10;                        // 0x91104
	int32_t v2 = *(int32_t *)(g23 - 0x701c); // 0x91108
	g35 = v2;
	g24 = a2;
	g25 = a3;
	int32_t v3 = a4;  // r22
	int32_t v4 = 0;   // r23
	int32_t v5;       // bp-564
	int32_t v6 = &v5; // 0x91130
	int32_t v7;       // bp-560
	int32_t v8 = &v7; // 0x91134
	int32_t v9;       // bp-553
	g31 = &v9;
	int32_t v10;        // bp-551
	int32_t v11 = &v10; // r24
	int32_t v12;        // bp-548
	g36 = &v12;
	int32_t v13;
	int32_t v14 = &v13; // r18
	if (a4 == 0) {
		// 0x9123c
		g10 = v1;
		return result;
	}
	// 0x9114c
	char v15;           // bp-568
	int32_t v16 = &v15; // 0x91200
	int32_t v17 = 0;    // 0x91180
	// branch -> 0x9114c
	while (true) {
		// 0x9114c
		v9 = 0x6970;
		v15 = 0;
		v5 = 0;
		v7 = 0;
		v12 = v17;
		uint32_t v18 = *(int32_t *)v2 - 24; // 0x91188
		v13 = a4 < v18 ? a4 : v18;
		g33 = v13;
		int32_t v19; // bp-544
		g34 = &v19;
		memcpy();
		v10 = v13 % 0x10000 + 24;
		int32_t v20 = __asm_lwbrx(v18, v6); // 0x911c4
		v5 = v20;
		int32_t v21 = __asm_lwbrx(v20, v8); // 0x911cc
		v7 = v21;
		int32_t v22 = g31 + v21;                         // 0x911d4
		unsigned char v23 = *(char *)v22;                // 0x911d4
		unsigned char v24 = *(char *)(v22 + 1);          // 0x911d4
		int32_t v25 = 256 * (int16_t)v24 | (int16_t)v23; // 0x911d8
		v9 = v25;
		int32_t v26 = v25 + v11;                         // 0x911e0
		unsigned char v27 = *(char *)v26;                // 0x911e0
		unsigned char v28 = *(char *)(v26 + 1);          // 0x911e0
		int32_t v29 = 256 * (int16_t)v28 | (int16_t)v27; // 0x911e4
		v10 = v29;
		int32_t v30 = v29 + g36;                         // 0x911ec
		unsigned char v31 = *(char *)v30;                // 0x911ec
		unsigned char v32 = *(char *)(v30 + 1);          // 0x911ec
		int32_t v33 = 256 * (int16_t)v32 | (int16_t)v31; // 0x911f0
		v12 = v33;
		int32_t v34 = v33 + v14;                // 0x911f8
		unsigned char v35 = *(char *)v34;       // 0x911f8
		unsigned char v36 = *(char *)(v34 + 1); // 0x911f8
		g34 = result;
		v13 = 256 * (int16_t)v36 | (int16_t)v35;
		int32_t result3 = SNetSendMessage(result, v16); // 0x9120c
		if (result3 == 0) {
			// 0x9121c
			int32_t v37;
			int32_t result2 = nthread_terminate_game(*(int32_t *)(v37 - 0x5c30)); // 0x91220
			// branch -> 0x9123c
			// 0x9123c
			g10 = v1;
			return result2;
		}
		int32_t v38 = g33; // 0x91228
		g25 += v38;
		int32_t v39 = v4 + v38; // 0x9122c
		v4 = v39;
		int32_t v40 = v3 - v38; // 0x91230
		v3 = v40;
		if (v40 != 0) {
			// 0x91228
			a4 = v40;
			v2 = g35;
			v17 = v39;
			// branch -> 0x9114c
			continue;
		}
		// 0x9123c
		g10 = v1;
		return result3;
	}
}

// Address range: 0x91250 - 0x912e0
int32_t multi_send_pinfo(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x91250
	int32_t v2;       // bp-1296
	int32_t v3 = &v2; // 0x91278
	PackPlayer(v3, *(int32_t *)*(int32_t *)(g23 - 0x77ac), 1);
	g34 = 1266;
	int32_t v4 = DiabloAllocPtr(); // 0x91288
	g36 = v4;
	codec_encode(&v4, v3);
	int32_t v5 = g36; // 0x912b0
	function_4bdd8(g33, (char)g35, v5, v4 - v5);
	g34 = g36;
	int32_t result = mem_free_dbg(); // 0x912c0
	g36 = v1;
	return result;
}

// Address range: 0x912e0 - 0x91340
int32_t InitNewSeed(uint32_t a1)
{
	// 0x912e0
	if (a1 == 0) {
		// 0x912e8
		return 0;
	}
	// 0x912f0
	if (a1 >= 1) {
		// 0x912f8
		if (a1 <= 4) {
			// 0x91300
			return 1;
		}
		// 0x91308
		if (a1 >= 5) {
			// 0x91310
			if (a1 <= 8) {
				// 0x91318
				return 2;
			}
		}
		// 0x91320
		if ((int32_t)a1 < 9 || (int32_t)a1 > 12) {
			// 0x91338
			return 4;
		}
		// 0x91330
		return 3;
	}
	// 0x91308
	if (a1 < 5) {
		// 0x91320
		if ((int32_t)a1 < 9 || (int32_t)a1 > 12) {
			// 0x91338
			return 4;
		}
		// 0x91330
		return 3;
	}
	// 0x91310
	if (a1 <= 8) {
		// 0x91318
		return 2;
	}
	// 0x91320
	if ((int32_t)a1 < 9 || (int32_t)a1 > 12) {
		// 0x91338
		return 4;
	}
	// 0x91330
	return 3;
}

// Address range: 0x91340 - 0x913f0
int32_t SetupLocalCoords(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77e4); // 0x91344
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0x9134c
	int32_t v3;                              // r0
	int32_t v4;                              // r11
	int32_t result;                          // r3
	int32_t v5;                              // r6
	int32_t v6;                              // r7
	int32_t v7;                              // 0x91394
	int32_t v8;                              // 0x9139c
	int32_t v9;                              // 0x913a0
	int32_t v10;                             // 0x913ac
	int32_t v11;                             // 0x913b8
	int32_t v12;                             // 0x91390
	int32_t v13;                             // 0x913b0
	if (*(int32_t *)*(int32_t *)(g23 - 0x7274) == 0) {
		// 0x91368
		v3 = 0;
		*(char *)v1 = 0;
		*(char *)*(int32_t *)(g23 - 0x7794) = (char)v3;
		*(char *)*(int32_t *)(g23 - 0x77d8) = (char)v3;
		v7 = g23;
		// branch -> 0x91380
		// 0x91380
		v12 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
		result = 10;
		v8 = 4 * v12;
		v9 = 0x55ec * v12;
		v10 = *(int32_t *)(v8 + *(int32_t *)(v7 - 0x7020)) + 75;
		v4 = v10;
		v13 = v9 + v2;
		v6 = v13;
		*(int32_t *)(v13 + 56) = v10;
		v11 = *(int32_t *)(*(int32_t *)(v7 - 0x7024) + v8) + 68;
		v5 = v11;
		*(int32_t *)(v6 + 60) = v11;
		*(int32_t *)(v6 + 64) = v4;
		*(int32_t *)(v6 + 68) = v5;
		*(int32_t *)(v6 + 72) = v4;
		*(int32_t *)(v6 + 76) = v5;
		*(int32_t *)(v6 + 52) = (int32_t) * (char *)v1;
		*(char *)(v6 + 315) = (char)1;
		*(char *)(v6 + 0x5592) = (char)0;
		*(int32_t *)(v9 + v2) = result;
		*(int32_t *)(v6 + 32) = -1;
		return result;
	}
	// 0x91358
	if ((*(char *)*(int32_t *)(g23 - 0x77f0) || 1) != 1) {
		// 0x91368
		v3 = 0;
		*(char *)v1 = 0;
		*(char *)*(int32_t *)(g23 - 0x7794) = (char)v3;
		*(char *)*(int32_t *)(g23 - 0x77d8) = (char)v3;
		v7 = g23;
		// branch -> 0x91380
	} else {
		v7 = g23;
	}
	// 0x91380
	v12 = *(int32_t *)*(int32_t *)(v7 - 0x77ac);
	result = 10;
	v8 = 4 * v12;
	v9 = 0x55ec * v12;
	v10 = *(int32_t *)(v8 + *(int32_t *)(v7 - 0x7020)) + 75;
	v4 = v10;
	v13 = v9 + v2;
	v6 = v13;
	*(int32_t *)(v13 + 56) = v10;
	v11 = *(int32_t *)(*(int32_t *)(v7 - 0x7024) + v8) + 68;
	v5 = v11;
	*(int32_t *)(v6 + 60) = v11;
	*(int32_t *)(v6 + 64) = v4;
	*(int32_t *)(v6 + 68) = v5;
	*(int32_t *)(v6 + 72) = v4;
	*(int32_t *)(v6 + 76) = v5;
	*(int32_t *)(v6 + 52) = (int32_t) * (char *)v1;
	*(char *)(v6 + 315) = (char)1;
	*(char *)(v6 + 0x5592) = (char)0;
	*(int32_t *)(v9 + v2) = result;
	*(int32_t *)(v6 + 32) = -1;
	return result;
}

// Address range: 0x913f0 - 0x91478
int32_t function_913f0(int32_t *a1)
{
	int32_t v1 = g36; // 0x913f0
	int32_t v2 = g10; // 0x913f4
	g36 = (int32_t)a1;
	int32_t v3;       // bp-24
	int32_t v4 = &v3; // 0x91404
	g34 = v4;
	function_ec340(v4);
	int32_t result; // 0x91474
	if (v3 == 1) {
		// 0x91450
		result = 1;
		// branch -> 0x91464
	} else {
		// 0x9141c
		if (v3 <= 1) {
			// 0x91420
			if (v3 == -1) {
				// 0x9143c
				int32_t v5;
				function_29b54(*(int32_t *)(v5 - 0x5c34));
				// branch -> 0x91460
			} else {
				// 0x91428
				if (v3 > -1) {
					// 0x91448
					// branch -> 0x91464
					// 0x91464
					g36 = v1;
					g10 = v2;
					return 1;
				}
			}
			// 0x91460
			// branch -> 0x91464
			// 0x91464
			g36 = v1;
			g10 = v2;
			return 0;
		}
		// 0x91430
		if (v3 == 2) {
			// 0x91458
			*(int32_t *)g36 = 1;
			// branch -> 0x91460
		}
		// 0x91460
		result = 0;
		// branch -> 0x91464
	}
	// 0x91464
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x91478 - 0x915c0
int32_t function_91478(int32_t *a1)
{
	int32_t result = (int32_t)a1;            // r3
	int32_t v1 = *(int32_t *)(g23 - 0x5c38); // r5
	int32_t v2 = result;                     // 0x91488
	g35 = v2;
	g36 = *(int32_t *)(g23 - 0x7068);
	if (v2 != 3) {
		// 0x914a4
		if (v2 > 3) {
			// 0x914b4
			if (v2 == 4) {
				int32_t v3 = *(int32_t *)12; // 0x9158c
				g34 = v3;
				int32_t v4;       // bp-136
				int32_t v5 = &v4; // 0x91590
				function_eae40(v3, v5, 128);
				result = function_ab774(v5);
				// branch -> 0x915a8
			}
		} else {
			// 0x914a8
			if (v2 == 1) {
				int32_t v6 = *(int32_t *)9;      // 0x914c0
				int32_t v7 = __asm_lwbrx(1, v6); // 0x914c4
				result = g23 - 0x4d17;
				*(int32_t *)v6 = v7;
				*(int32_t *)v1 = v7;
				*(char *)(v1 + 4) = *(char *)(v6 + 4);
				*(char *)(result + *(int32_t *)(g35 + 4)) = (char)1;
				// branch -> 0x915a8
			}
		}
		// 0x915a8
		return result;
	}
	// 0x914f0
	*(char *)(g23 - 0x4d0f + *(int32_t *)7) = 1;
	v1 = 0;
	*(char *)(g23 - 0x4d17 + *(int32_t *)(g35 + 4)) = 0;
	int32_t v8 = *(int32_t *)(g35 + 8); // 0x91514
	if (v8 != 0) {
		// 0x91520
		if (*(int32_t *)(g35 + 12) >= 4) {
			// 0x9152c
			v1 = *(int32_t *)v8;
			// branch -> 0x91530
		}
	}
	int32_t v9 = *(int32_t *)(g23 - 0x5c20); // 0x91538
	*(int32_t *)(v9 + 4 * *(int32_t *)(g35 + 4)) = v1;
	if (v1 == 0x40000004) {
		// 0x9154c
		*(char *)*(int32_t *)(g23 - 0x71fc) = 1;
		// branch -> 0x91558
	}
	// 0x91558
	*(char *)(g23 - 0x4d13 + *(int32_t *)(g35 + 4)) = 0;
	dthread_remove_player(*(int32_t *)(g35 + 4), 0);
	char *v10 = (char *)g36;         // 0x91570
	int32_t result2 = (int32_t)*v10; // 0x91570
	if (result2 == *(int32_t *)(g35 + 4)) {
		// 0x91580
		*v10 = 4;
		// branch -> 0x915a8
	}
	// 0x915a8
	return result2;
}

// Address range: 0x915c0 - 0x91654
int32_t multi_event_handler(int32_t a1)
{
	int32_t v1 = g10; // 0x915c4
	g30 = a1;
	g35 = *(int32_t *)(g23 - 0x5c44);
	g36 = *(int32_t *)(g23 - 0x5c40);
	int32_t v2 = *(int32_t *)(g23 + (a1 == 0 ? -0x702c : -0x7028));
	g33 = v2;
	g31 = 0;
	int32_t v3 = *(int32_t *)(g23 - 0x5c3c); // 0x915f0
	g32 = v3;
	// branch -> 0x915fc
	while (true) {
		// 0x915fc
		g34 = *(int32_t *)v3;
		g15 = v2;
		int32_t v4 = FunctionPointer(); // 0x91608
		g34 = v4;
		int32_t result = v4; // 0x91650
		int32_t v5;          // 0x91630
		int32_t v6;          // 0x91634
		if (v4 == 0) {
			// 0x91618
			if (g30 != 0) {
				// 0x91620
				g37 = TraceLastError();
				result = app_fatal(g35);
				// branch -> 0x91630
			} else {
				result = 0;
			}
			// 0x91630
			v5 = g31 + 1;
			g31 = v5;
			v6 = g32 + 4;
			g32 = v6;
			if (v5 >= 3) {
				// 0x91640
				g10 = v1;
				return result;
			}
		lab_0x91630:
			// 0x91630
			v2 = g33;
			v3 = v6;
			// branch -> 0x915fc
			continue;
		}
		// 0x91630
		v5 = g31 + 1;
		g31 = v5;
		v6 = g32 + 4;
		g32 = v6;
		if (v5 < 3) {
			goto lab_0x91630;
		}
		// 0x91640
		g10 = v1;
		return result;
	}
}

// Address range: 0x91654 - 0x916c4
int32_t NetClose(int32_t a1)
{
	int32_t v1 = g10;                        // 0x91654
	int32_t *v2 = (int32_t *)(g23 - 0x4cfc); // 0x91660
	if (*v2 == 0) {
		// 0x91654
		// branch -> 0x916b4
		// 0x916b4
		g10 = v1;
		return g34;
	}
	// 0x9166c
	*v2 = 0;
	int32_t v3 = dthread_cleanup(nthread_cleanup()); // 0x91678
	g34 = v3;
	tmsg_cleanup(v3);
	multi_event_handler(0);
	g34 = 3;
	msgcmd_cmd_cleanup(SNetLeaveGame(3));
	int32_t v4 = *(int32_t *)(g23 - 0x77f0); // 0x91698
	int32_t result;                          // 0x916c0
	if ((*(char *)v4 || 1) != 1) {
		// 0x916a8
		g34 = 2000;
		result = Sleep(2000);
		// branch -> 0x916b4
	} else {
		result = v4;
	}
	// 0x916b4
	g10 = v1;
	return result;
}

// Address range: 0x916c4 - 0x917a8
int32_t multi_init_single(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36;                        // 0x916c4
	int32_t v2 = *(int32_t *)(g23 - 0x5c38); // 0x916cc
	g36 = v2;
	int32_t v3 = g35; // 0x916d4
	g35 = *(int32_t *)(g23 - 0x5c48);
	g34 = 0;
	int32_t result; // 0x917a4
	if (function_ec280(0, a1, a2, a3, *(int32_t *)(g23 - 0x7208)) == 0) {
		// 0x91708
		result = 0;
		// branch -> 0x91790
	} else {
		int32_t v4 = 0;                  // bp-16
		int32_t v5 = __asm_lwbrx(0, v2); // 0x91718
		int32_t v6 = &v4;                // 0x9171c
		int32_t v7 = g35;                // 0x91720
		g34 = v7;
		int32_t *v8 = (int32_t *)v2; // 0x91724
		*v8 = v5;
		int32_t v9 = g35; // 0x91728
		g34 = function_ec130(v7, v9, v9, 0, v2, 8, 1, v9, v6);
		*v8 = __asm_lwbrx(v6, v2);
		if (g34 == 0) {
			// 0x91764
			g37 = TraceLastError();
			app_fatal(*(int32_t *)(g23 - 0x5c4c));
			// branch -> 0x91774
		}
		// 0x91774
		*(int32_t *)*(int32_t *)(g23 - 0x77ac) = 0;
		*(char *)*(int32_t *)(g23 - 0x77f0) = (char)1;
		result = 1;
		// branch -> 0x91790
	}
	// 0x91790
	g36 = v1;
	g35 = v3;
	return result;
}

// Address range: 0x917a8 - 0x91914
int32_t multi_init_multi(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10;                        // 0x917ac
	int32_t v2 = *(int32_t *)(g23 - 0x75b4); // 0x917b0
	g32 = v2;
	g27 = a1;
	g33 = *(int32_t *)(g23 - 0x7208);
	g35 = *(int32_t *)(g23 - 0x77ac);
	g28 = a2;
	g36 = *(int32_t *)(g23 - 0x77a8);
	g29 = a3;
	g30 = a4;
	g31 = 1;
	int32_t v3;       // bp-56
	int32_t v4 = &v3; // 0x9187c
	// branch -> 0x917dc
	while (true) {
		int32_t v5 = 0; // bp-52
		uint32_t v6;    // 0x9189c
		if (*(char *)v2 != 0) {
			int32_t v7 = function_1eadc(0, g27, g28, g29, g33, &v5); // 0x91808
			g34 = v7;
			if (v7 == 0) {
				// 0x91814
				if (g31 == 0 || GetLastError() != -0x7aefff89 || function_913f0((int32_t *)g30) == 0) {
					// 0x9181c
					// branch -> 0x91900
					// 0x91900
					g10 = v1;
					return 0;
				}
				// 0x91858
				if (v5 == 0x424e4554) {
				lab_0x91868:
					// 0x91868
					*(char *)(g36 + 0x5593) = 1;
					// branch -> 0x91870
				}
			lab_0x91870:
				// 0x91870
				multi_event_handler(1);
				if (function_1f6fc(1, g27, g28, g29, g33, v4) != 0) {
					// 0x9189c
					v6 = v3;
					if (v6 >= 4) {
						// 0x918a8
						// branch -> 0x91900
						// 0x91900
						g10 = v1;
						return 0;
					}
					// 0x918b0
					*(int32_t *)g35 = v6;
					*(char *)*(int32_t *)(g23 - 0x77f0) = 4;
					pfile_read_player_from_save();
					if (v5 != 0x424e4554) {
						// 0x918e8
						// branch -> 0x91900
						// 0x91900
						g10 = v1;
						return 1;
					}
					// 0x918d4
					*(char *)(g36 + 0x55ec * *(int32_t *)g35 + 0x5593) = 1;
					// branch -> 0x918e8
					// 0x918e8
					// branch -> 0x91900
					// 0x91900
					g10 = v1;
					return 1;
				}
			lab_0x918f0:
				// 0x918f0
				*(char *)g32 = 1;
				g31 = 0;
				v2 = g32;
				// branch -> 0x917dc
				continue;
			}
			// 0x91858
			if (v5 == 0x424e4554) {
				goto lab_0x91868;
			}
			goto lab_0x91870;
		}
		// 0x91870
		multi_event_handler(1);
		if (function_1f6fc(1, g27, g28, g29, g33, v4) == 0) {
			goto lab_0x918f0;
		}
		// 0x9189c
		v6 = v3;
		if (v6 >= 4) {
			// 0x918a8
			// branch -> 0x91900
			// 0x91900
			g10 = v1;
			return 0;
		}
		// 0x918b0
		*(int32_t *)g35 = v6;
		*(char *)*(int32_t *)(g23 - 0x77f0) = 4;
		pfile_read_player_from_save();
		if (v5 != 0x424e4554) {
			// 0x918e8
			// branch -> 0x91900
			// 0x91900
			g10 = v1;
			return 1;
		}
		// 0x918d4
		*(char *)(g36 + 0x55ec * *(int32_t *)g35 + 0x5593) = 1;
		// branch -> 0x918e8
		// 0x918e8
		// branch -> 0x91900
		// 0x91900
		g10 = v1;
		return 1;
	}
}

// Address range: 0x91914 - 0x91ca0
int32_t NetInit(int32_t a1, int32_t *a2)
{
	int32_t v1 = g10;                        // 0x91918
	int32_t v2 = *(int32_t *)(g23 - 0x5c38); // 0x9191c
	g32 = v2;
	g22 = *(int32_t *)(g23 - 0x7074);
	g27 = a1;
	int32_t v3 = (int32_t)a2; // 0x91934
	g31 = v3;
	g28 = v2 + 4;
	g25 = 0x4452544c;
	g16 = *(int32_t *)(g23 - 0x7048);
	g26 = *(int32_t *)(g23 - 0x7184);
	g30 = g23 - 0x4d17;
	g33 = *(int32_t *)(g23 - 0x77ac);
	g24 = (int32_t) "MoveWindow";
	g29 = *(int32_t *)(g23 - 0x77a8);
	int32_t v4;       // bp-148
	int32_t v5 = &v4; // 0x91988
	int32_t v6;       // bp-164
	int32_t v7 = &v6; // 0x919a4
	int32_t v8;       // bp-244
	int32_t v9 = &v8; // 0x919fc
	// branch -> 0x9196c
	while (true) {
		// 0x9196c
		g35 = 0;
		*(int32_t *)v3 = 0;
		g34 = 0;
		SetRndSeed();
		*(int32_t *)g32 = time(NULL);
		g34 = v5;
		*(char *)g28 = (char)*(int32_t *)g26;
		memset();
		g34 = v7;
		v4 = 60;
		memset();
		g34 = v9;
		v6 = 16;
		memset();
		v8 = 80;
		g34 = 0;
		UiProfileGetString(SDrawGetFrameWindow(0));
		g34 = g23 - 0x4d17;
		memset();
		int32_t v10;
		*(char *)*(int32_t *)(v10 - 0x7064) = (char)g35;
		g34 = g23 - 0x4d0f;
		memset();
		g34 = *(int32_t *)(v10 - 0x5c20);
		memset();
		g34 = v10 - 0x4d13;
		memset();
		g34 = g29;
		memset();
		g34 = g22;
		memset();
		g34 = 0;
		SNetSetBasePlayer(0);
		if (g27 == 0) {
			// 0x91b14
			if (multi_init_multi(v5, v7, v9, g31) == 0) {
				// 0x91b30
				// branch -> 0x91c8c
				// 0x91c8c
				g10 = v1;
				return 0;
			}
		} else {
			// 0x91af4
			if (multi_init_single(v5, v7, v9) == 0) {
				// 0x91b0c
				// branch -> 0x91c8c
				// 0x91c8c
				g10 = v1;
				return 0;
			}
		}
		// 0x91b38
		g35 = 1;
		g36 = 0;
		*(int32_t *)(g23 - 0x4cfc) = 1;
		*(char *)(g23 - 0x4d18) = (char)g36;
		InitPlrMsg(delta_init());
		buffer_init((int32_t *)*(int32_t *)(g23 - 0x5c14));
		int32_t v11 = buffer_init((int32_t *)*(int32_t *)(g23 - 0x5c10)); // 0x91b5c
		*(int32_t *)(g23 - 0x4d00) = g36;
		sync_init(v11);
		int32_t v12 = nthread_start((int32_t) * (char *)(g30 + *(int32_t *)g33)); // 0x91b70
		int32_t v13 = dthread_start(v12);                                         // 0x91b74
		g34 = v13;
		tmsg_start(v13);
		*(int32_t *)(g23 - 0x4d08) = g36;
		*(int32_t *)(g23 - 0x4d04) = g36;
		*(char *)*(int32_t *)(g23 - 0x7068) = (char)*(int32_t *)g33;
		*(char *)*(int32_t *)(g23 - 0x71fc) = (char)g36;
		SetupLocalCoords(nthread_send_and_recv_turn(0, 0));
		multi_send_pinfo(-2, 54);
		int32_t v14 = *(int32_t *)g33; // 0x91bb4
		*(char *)(g29 + 0x55ec * v14 + 29) = (char)g35;
		int32_t v15 = *(int32_t *)(g23 - 0x70a4); // 0x91bc4
		*(char *)v15 = (char)g35;
		if (*(char *)(v14 + g30) != 0) {
			int32_t v16 = msg_wait_resync(v15); // 0x91bd8
			g34 = v16;
			if (v16 == 0) {
				// 0x91be4
				NetClose(0);
				*(char *)*(int32_t *)(g23 - 0x75b4) = (char)g36;
				v3 = g31;
				// branch -> 0x9196c
				continue;
			}
		}
		// 0x91bf4
		*(int32_t *)g26 = (int32_t) * (char *)g28;
		g34 = *(int32_t *)g32;
		SetRndSeed();
		g35 = *(int32_t *)(g23 - 0x75ec);
		g36 = 0;
		g33 = *(int32_t *)(g23 - 0x71f8);
		*(int32_t *)g35 = GetRndSeed();
		int32_t v17 = InitNewSeed(g36); // 0x91c1c
		g36++;
		*(int32_t *)g33 = v17;
		g35 += 4;
		g33 += 4;
		// branch -> 0x91c10
		while (g36 < 17) {
			// 0x91c10
			*(int32_t *)g35 = GetRndSeed();
			v17 = InitNewSeed(g36);
			g36++;
			*(int32_t *)g33 = v17;
			g35 += 4;
			g33 += 4;
			// continue -> 0x91c10
		}
		// 0x91c38
		int32_t v18;        // bp-248
		int32_t v19 = &v18; // 0x91c3c
		g34 = 1;
		int32_t v20 = SNetGetGameInfo(1, *(int32_t *)(g23 - 0x77d0), 128, v19); // 0x91c48
		int32_t v21 = v10;                                                     // 0x91c60
		if (v20 == 0) {
			// 0x91c58
			nthread_terminate_game(*(int32_t *)(v10 - 0x5c54));
			v21 = g23;
			// branch -> 0x91c60
		}
		// 0x91c60
		g34 = 2;
		if (SNetGetGameInfo(2, *(int32_t *)(v21 - 0x77d4), 128, v19) != 0) {
			// 0x91c88
			// branch -> 0x91c8c
			// 0x91c8c
			g10 = v1;
			return 1;
		}
		// 0x91c80
		nthread_terminate_game(*(int32_t *)(v10 - 0x5c58));
		// branch -> 0x91c88
		// 0x91c88
		// branch -> 0x91c8c
		// 0x91c8c
		g10 = v1;
		return 1;
	}
}
