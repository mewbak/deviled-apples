
// Address range: 0x89648 - 0x896a8
int32_t msg_get_next_packet(void)
{
	int32_t v1 = g10; // 0x89648
	g34 = 0x7d08;
	*(int32_t *)(g23 - 0x4d3c) = DiabloAllocPtr();
	*(int32_t *)*(int32_t *)(g23 - 0x4d3c) = 0;
	int32_t result = *(int32_t *)(g23 - 0x4d3c); // 0x89674
	*(int32_t *)(result + 4) = 0x7d00;
	int32_t v2 = g23 - 0x4d38;   // 0x896841
	int32_t v3 = *(int32_t *)v2; // 0x896843
	if (v3 == 0) {
		// 0x89690
		*(int32_t *)v2 = *(int32_t *)(g23 - 0x4d3c);
		g10 = v1;
		return result;
	}
	int32_t v4 = *(int32_t *)v3; // 0x89684
	while (v4 != 0) {
		// 0x89680
		v3 = v4;
		v4 = *(int32_t *)v3;
		// continue -> 0x89680
	}
	// 0x89684
	// branch -> 0x89690
	// 0x89690
	*(int32_t *)v3 = *(int32_t *)(g23 - 0x4d3c);
	g10 = v1;
	return result;
}

// Address range: 0x896a8 - 0x896fc
int32_t msg_free_packets(int32_t a1)
{
	// 0x896a8
	g36 = 0;
	if (*(int32_t *)(g23 - 0x4d38) == 0) {
		// 0x896e8
		return g34;
	}
	int32_t v1 = g23;                       // 0x896c8
	int32_t v2 = *(int32_t *)(v1 - 0x4d38); // 0x896c0
	g34 = v2;
	*(int32_t *)(v1 - 0x4d3c) = *(int32_t *)v2;
	*(int32_t *)(g23 - 0x4d38) = g36;
	g34 = mem_free_dbg();
	*(int32_t *)(g23 - 0x4d38) = *(int32_t *)(g23 - 0x4d3c);
	while (*(int32_t *)(g23 - 0x4d38) != 0) {
		// 0x896c0
		v1 = g23;
		v2 = *(int32_t *)(v1 - 0x4d38);
		g34 = v2;
		*(int32_t *)(v1 - 0x4d3c) = *(int32_t *)v2;
		*(int32_t *)(g23 - 0x4d38) = g36;
		g34 = mem_free_dbg();
		*(int32_t *)(g23 - 0x4d38) = *(int32_t *)(g23 - 0x4d3c);
		// continue -> 0x896c0
	}
	// 0x896e8
	return g34;
}

// Address range: 0x896fc - 0x897c8
int32_t msg_pre_packet(int32_t a1)
{
	int32_t v1 = g36; // 0x896fc
	int32_t v2 = g10; // 0x89700
	g36 = -1;
	int32_t v3 = g35; // 0x89708
	int32_t v4 = *(int32_t *)(g23 - 0x4d38);
	g35 = v4;
	if (v4 == 0) {
		// 0x897a8
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return g34;
	}
lab_0x89724:
	while (true) {
		int32_t v5 = v4 + 8; // 0x89724
		g33 = v5;
		g32 = 0x7d00;
		int32_t v6 = v4; // 0x8979c
		int32_t v7;
		if (*(int32_t *)(v4 + 4) != 0x7d00) {
			int32_t v8 = 0x7d00; // 0x89740
			while (true) {
				char *v9 = (char *)v5; // 0x89730
				char v10 = *v9;        // 0x89730
				int32_t v11;           // 0x89790
				int32_t v12;           // 0x89740
				if (v10 == 94) {
					// 0x8973c
					g36 = (int32_t) * (char *)(v5 + 1);
					v12 = v8 - 2;
					g32 = v12;
					g33 = v5 + 2;
					// branch -> 0x89790
				} else {
					// 0x8974c
					if (v10 == 95) {
						int32_t v13 = v5 + 2; // 0x89758
						*(int32_t *)(g33 + 2) = __asm_lwbrx(v13, v13);
						int32_t v14 = g33;                   // 0x89768
						int32_t v15 = *(int32_t *)(v14 + 2); // 0x8976c
						g34 = multi_player_left((int32_t) * (char *)(v14 + 1), v15);
						v12 = g32;
						// branch -> 0x89790
					} else {
						int32_t v16 = ParseCmd(g36, v9); // 0x89784
						g34 = v16;
						g33 += v16;
						int32_t v17 = g32 - v16; // 0x8978c
						g32 = v17;
						v12 = v17;
						// branch -> 0x89790
					}
					// 0x89790
					v11 = g35;
					if (v12 == *(int32_t *)(v11 + 4)) {
					lab_0x8979c:
						// 0x8979c
						v7 = *(int32_t *)v11;
						g35 = v7;
						if (v7 == 0) {
							// break (via goto) -> 0x897a8
							goto lab_0x897a8;
						}
						v4 = v7;
						// continue (via goto) -> 0x89724
						goto lab_0x89724;
					} else {
					lab_0x89790:
						// 0x89790
						v8 = v12;
						v5 = g33;
						// branch -> 0x89730
						continue;
					}
				}
				// 0x89790
				v11 = g35;
				if (v12 == *(int32_t *)(v11 + 4)) {
					goto lab_0x8979c;
				}
				goto lab_0x89790;
			}
			// 0x897a8
			g36 = v1;
			g10 = v2;
			g35 = v3;
			int32_t result = g34; // 0x897c4
			return result;
		}
		// 0x8979c
		v7 = *(int32_t *)v6;
		g35 = v7;
		if (v7 == 0) {
			// break -> 0x897a8
			break;
		}
		v4 = v7;
		// continue -> 0x89724
	}
lab_0x897a8:
	// 0x897a8
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return g34;
}

// Address range: 0x897c8 - 0x89868
int32_t msg_send_packet(char a1, int32_t a2)
{
	int32_t v1 = g36; // 0x897c8
	int32_t v2 = g38; // 0x897d0
	g36 = v2;
	int32_t v3 = g35; // 0x897d4
	g35 = a2;
	int32_t *v4 = (int32_t *)(g23 - 0x4d40); // 0x897e4
	int32_t v5 = a1;                         // 0x897e8
	int32_t v6 = g23;                        // 0x8980c
	if (v5 != *v4) {
		// 0x897f0
		*v4 = v5;
		int32_t v7;       // bp-24
		int32_t v8 = &v7; // 0x897f8
		v7 = 94;
		g38 = 2;
		msg_send_packet((char)v8, 2);
		v2 = g36;
		v6 = g23;
		// branch -> 0x8980c
	}
	int32_t v9 = v6; // 0x89820
	if (*(int32_t *)(*(int32_t *)(v6 - 0x4d3c) + 4) < v2) {
		// 0x8981c
		msg_get_next_packet();
		v9 = g23;
		// branch -> 0x89820
	}
	int32_t v10 = *(int32_t *)(v9 - 0x4d3c); // 0x89820
	g34 = v10 + 0x7d08 - *(int32_t *)(v10 + 4);
	memcpy();
	int32_t v11;
	int32_t result = *(int32_t *)(v11 - 0x4d3c); // 0x89840
	int32_t *v12 = (int32_t *)(result + 4);      // 0x89844
	*v12 = *v12 - g36;
	g36 = v1;
	g35 = v3;
	return result;
}

// Address range: 0x89868 - 0x898a0
int32_t msg_send_drop_pkt(char a1, int32_t a2)
{
	// 0x89868
	g38 = 6;
	char v1 = 95;                                            // bp-8
	int32_t result = msg_send_packet((char)(int32_t)&v1, 6); // 0x8988c
	return result;
}

// Address range: 0x898a0 - 0x899f4
int32_t function_898a0(void)
{
	// 0x898a0
	g36 = *(int32_t *)(g23 - 0x7068);
	if (*(char *)(g23 - 0x4d2f) == 0) {
		// 0x898c0
		nthread_send_and_recv_turn(0, 0);
		int32_t v1;       // bp-20
		int32_t v2 = &v1; // 0x898cc
		g34 = v2;
		int32_t v3 = function_ec4d8(v2); // 0x898d0
		g34 = v3;
		if (v3 == 0) {
			int32_t v4 = GetLastError(); // 0x898e0
			g34 = v4;
			if (v4 == -0x7aefff90) {
				// 0x898f4
				// branch -> 0x899e0
				// 0x899e0
				return 100;
			}
		}
		// 0x898fc
		int32_t v5;
		if (GetTickCount() - *(int32_t *)(v5 - 0x4d34) <= 2000) {
			// 0x89914
			if (v1 < *(int32_t *)*(int32_t *)(v5 - 0x7060)) {
				// 0x89928
				// branch -> 0x899e0
				// 0x899e0
				return 0;
			}
		}
		char *v6 = (char *)(v5 - 0x4d2f); // 0x89930
		*v6 = (char)((int32_t)*v6 + 1);
		// branch -> 0x8993c
	}
	// 0x8993c
	function_90ddc();
	nthread_send_and_recv_turn(0, 0);
	if (nthread_has_500ms_passed(0) != 0) {
		int32_t v7 = 0; // bp-24
		function_92030(&v7);
		// branch -> 0x89964
	}
	// 0x89964
	if (*(char *)*(int32_t *)(g23 - 0x7064) != 0) {
		// 0x89974
		// branch -> 0x899e0
		// 0x899e0
		return 100;
	}
	// 0x8997c
	if (*(char *)g36 >= 4) {
		int32_t v8 = *(int32_t *)(g23 - 0x77ac); // 0x8998c
		g34 = v8;
		*(char *)(g23 - 0x4d28) = 76;
		*(char *)(g23 - 0x4d2f) = (char)0;
		*(char *)g36 = (char)*(int32_t *)v8;
		function_9220c(v8);
		// branch -> 0x899a8
	}
	char *v9 = (char *)(g23 - 0x4d2f); // 0x899a8
	unsigned char v10 = *v9;           // 0x899a8
	int32_t v11 = v10;                 // 0x899a8
	int32_t result;                    // 0x899f0
	if (v10 == 20) {
		// 0x899b4
		*v9 = (char)(v11 + 1);
		result = 99;
		// branch -> 0x899e0
	} else {
		// 0x899c4
		result = 100 * v11 / 21;
		// branch -> 0x899e0
	}
	// 0x899e0
	return result;
}

// Address range: 0x899f4 - 0x89ad0
int32_t msg_wait_resync(int32_t a1)
{
	int32_t v1 = g36; // 0x899f4
	int32_t v2 = g10; // 0x899f8
	int32_t v3 = g35; // 0x899fc
	g35 = *(int32_t *)(g23 - 0x72bc);
	msg_get_next_packet();
	g36 = 0;
	*(char *)(g23 - 0x4d28) = 76;
	g34 = 1;
	*(char *)(g23 - 0x4d2f) = (char)g36;
	*(char *)g35 = (char)g34;
	*(int32_t *)(g23 - 0x4d40) = -1;
	int32_t v4;
	*(int32_t *)(v4 - 0x4d34) = GetTickCount();
	int32_t v5 = *(int32_t *)(g23 - 0x5c6c);                                            // 0x89a48
	int32_t v6 = *(int32_t *)(g23 - 0x5c70);                                            // 0x89a50
	int32_t v7 = function_1c65c(*(int32_t *)*(int32_t *)(g23 - 0x780c), v5, 1, v6, 20); // 0x89a54
	g34 = v7;
	*(char *)g35 = (char)g36;
	if (v7 == 0) {
		// 0x89a64
		msg_free_packets(v7);
		// branch -> 0x89ab8
		// 0x89ab8
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return 0;
	}
	// 0x89a70
	if (*(char *)*(int32_t *)(g23 - 0x7064) != 0) {
		int32_t v8 = function_29b54(*(int32_t *)(g23 - 0x5c74)); // 0x89a84
		g34 = v8;
		msg_free_packets(v8);
		// branch -> 0x89ab8
		// 0x89ab8
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return 0;
	}
	// 0x89a94
	int32_t result; // 0x89acc
	if (*(char *)(g23 - 0x4d2f) == 21) {
		// 0x89ab4
		result = 1;
		// branch -> 0x89ab8
	} else {
		int32_t v9 = function_29b54(*(int32_t *)(g23 - 0x5c78)); // 0x89aa4
		g34 = v9;
		msg_free_packets(v9);
		result = 0;
		// branch -> 0x89ab8
	}
	// 0x89ab8
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result;
}

// Address range: 0x89ad0 - 0x89b20
int32_t msg_process_net_packets(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77f0); // 0x89ad8
	g34 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x72bc); // 0x89ae0
	g36 = v2;
	int32_t result; // 0x89b1c
	if (*(char *)v1 != 1) {
		// 0x89af4
		*(char *)v2 = 2;
		int32_t v3 = msg_pre_packet(g34); // 0x89afc
		g34 = v3;
		*(char *)g36 = 0;
		result = msg_free_packets(v3);
		// branch -> 0x89b0c
	} else {
		result = v1;
	}
	// 0x89b0c
	return result;
}

// Address range: 0x89b20 - 0x89bf0
int32_t function_89b20(char *a1, int32_t a2)
{
	int32_t v1 = 0;           // r31
	int32_t v2 = (int32_t)a1; // 0x89b38
	// branch -> 0x89b44
	int32_t result; // 0x89bd8
	while (true) {
		// 0x89b44
		if (*(char *)a2 == -1) {
			// 0x89b50
			*(char *)v2 = -1;
			result = v2 + 1;
			// branch -> 0x89bc0
		} else {
			// 0x89b60
			g34 = v2;
			memcpy();
			int32_t v3 = v2;                                         // 0x89b74
			int32_t v4 = v3 + 3;                                     // 0x89b74
			int32_t v5 = 2 * v4;                                     // 0x89b78
			unsigned char v6 = *(char *)(v5 | 1);                    // 0x89b78
			int16_t v7 = 256 * (int16_t)v6 | (int16_t) * (char *)v5; // 0x89b78
			*(int16_t *)v4 = v7;
			int32_t v8 = 2 * (v3 + 5);                                // 0x89b88
			unsigned char v9 = *(char *)(v8 | 1);                     // 0x89b88
			int16_t v10 = 256 * (int16_t)v9 | (int16_t) * (char *)v8; // 0x89b88
			int32_t v11 = v2;                                         // 0x89b8c
			int32_t v12 = v11 + 7;                                    // 0x89b8c
			*(int16_t *)(v11 + 5) = v10;
			int32_t v13 = __asm_lwbrx(v12, v12); // 0x89b98
			int32_t v14 = v2;                    // 0x89b9c
			*(int32_t *)(v14 + 7) = v13;
			int32_t v15 = 2 * (v14 + 16);                               // 0x89ba4
			unsigned char v16 = *(char *)(v15 | 1);                     // 0x89ba4
			int16_t v17 = 256 * (int16_t)v16 | (int16_t) * (char *)v15; // 0x89ba4
			int32_t v18 = v2;                                           // 0x89ba8
			int32_t v19 = v18 + 18;                                     // 0x89ba8
			*(int16_t *)(v18 + 16) = v17;
			*(int32_t *)(v2 + 18) = __asm_lwbrx(v19, v19);
			result = v2 + 22;
			// branch -> 0x89bc0
		}
		int32_t v20 = v1 + 1; // 0x89bc0
		v1 = v20;
		if (v20 >= 127) {
			// break -> 0x89bd0
			break;
		}
		v2 = result;
		a2 += 22;
		// continue -> 0x89b44
	}
	// 0x89bd0
	return result;
}

// Address range: 0x89bf0 - 0x89ccc
int32_t function_89bf0(char *a1, int32_t a2)
{
	int32_t v1 = 0;               // r31
	int32_t result = (int32_t)a1; // 0x89c08
	// branch -> 0x89c14
	while (true) {
		// 0x89c14
		g34 = a2;
		if (*(char *)result == -1) {
			// 0x89c20
			memset(a2, 22, 255);
			result++;
			// branch -> 0x89c9c
		} else {
			// 0x89c3c
			memcpy();
			int32_t v2 = a2;                                         // 0x89c50
			int32_t v3 = v2 + 3;                                     // 0x89c50
			int32_t v4 = 2 * v3;                                     // 0x89c54
			unsigned char v5 = *(char *)(v4 | 1);                    // 0x89c54
			int16_t v6 = 256 * (int16_t)v5 | (int16_t) * (char *)v4; // 0x89c54
			*(int16_t *)v3 = v6;
			int32_t v7 = 2 * (v2 + 5);                               // 0x89c64
			unsigned char v8 = *(char *)(v7 | 1);                    // 0x89c64
			int16_t v9 = 256 * (int16_t)v8 | (int16_t) * (char *)v7; // 0x89c64
			int32_t v10 = a2;                                        // 0x89c68
			int32_t v11 = v10 + 7;                                   // 0x89c68
			*(int16_t *)(v10 + 5) = v9;
			int32_t v12 = __asm_lwbrx(v11, v11); // 0x89c74
			int32_t v13 = a2;                    // 0x89c78
			*(int32_t *)(v13 + 7) = v12;
			int32_t v14 = 2 * (v13 + 16);                               // 0x89c80
			unsigned char v15 = *(char *)(v14 | 1);                     // 0x89c80
			int16_t v16 = 256 * (int16_t)v15 | (int16_t) * (char *)v14; // 0x89c80
			int32_t v17 = a2;                                           // 0x89c84
			int32_t v18 = v17 + 18;                                     // 0x89c84
			*(int16_t *)(v17 + 16) = v16;
			int32_t v19 = __asm_lwbrx(v18, v18); // 0x89c90
			result += 22;
			*(int32_t *)(a2 + 18) = v19;
			// branch -> 0x89c9c
		}
		int32_t v20 = v1 + 1; // 0x89c9c
		v1 = v20;
		if (v20 >= 127) {
			// 0x89cac
			return result;
		}
		// 0x89c9c
		a2 += 22;
		// branch -> 0x89c14
	}
}

// Address range: 0x89ccc - 0x89d04
int32_t function_89ccc(int32_t a1, int32_t a2)
{
	// 0x89ccc
	g34 = a1;
	memcpy();
	return g34 + 127;
}

// Address range: 0x89d04 - 0x89d44
int32_t function_89d04(int32_t a1, int32_t a2)
{
	// 0x89d04
	g34 = a2;
	memcpy();
	return a1 + 127;
}

// Address range: 0x89d44 - 0x89de0
int32_t function_89d44(char *a1, int32_t a2)
{
	int32_t v1 = 0;           // r30
	int32_t v2 = (int32_t)a1; // 0x89d64
	// branch -> 0x89d70
	int32_t result; // 0x89dc4
	while (true) {
		// 0x89d70
		if (*(char *)a2 == -1) {
			// 0x89d7c
			*(char *)v2 = (char)255;
			result = v2 + 1;
			// branch -> 0x89dac
		} else {
			// 0x89d88
			g34 = v2;
			memcpy();
			int32_t v3 = v2;     // 0x89d9c
			int32_t v4 = v3 + 5; // 0x89d9c
			*(int32_t *)(v3 + 5) = __asm_lwbrx(v4, v4);
			result = v2 + 9;
			// branch -> 0x89dac
		}
		int32_t v5 = v1 + 1; // 0x89dac
		v1 = v5;
		if (v5 >= 200) {
			// break -> 0x89dbc
			break;
		}
		v2 = result;
		a2 += 9;
		// continue -> 0x89d70
	}
	// 0x89dbc
	return result;
}

// Address range: 0x89de0 - 0x89e80
int32_t function_89de0(char *a1, int32_t a2)
{
	int32_t v1 = 0;               // r31
	int32_t result = (int32_t)a1; // 0x89df8
	// branch -> 0x89e04
	while (true) {
		// 0x89e04
		g34 = a2;
		if (*(char *)result == -1) {
			// 0x89e10
			memset(a2, 9, 255);
			result++;
			// branch -> 0x89e50
		} else {
			// 0x89e2c
			memcpy();
			int32_t v2 = a2 + 5;              // 0x89e40
			int32_t v3 = __asm_lwbrx(v2, v2); // 0x89e44
			result += 9;
			*(int32_t *)(a2 + 5) = v3;
			// branch -> 0x89e50
		}
		int32_t v4 = v1 + 1; // 0x89e50
		v1 = v4;
		if (v4 >= 200) {
			// 0x89e60
			return result;
		}
		// 0x89e50
		a2 += 9;
		// branch -> 0x89e04
	}
}

// Address range: 0x89e80 - 0x89f5c
int32_t function_89e80(char *a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x5c7c); // 0x89e88
	g33 = v1;
	int32_t v2 = (int32_t)a1; // 0x89e8c
	int32_t v3 = 0;           // r28
	// branch -> 0x89ea4
	int32_t v4;
	while (true) {
		// 0x89ea4
		if (*(char *)v1 == -1) {
			// 0x89eb0
			*(char *)v2 = (char)255;
			v4 = v2 + 1;
			// branch -> 0x89ed4
		} else {
			// 0x89ebc
			g34 = v2;
			memcpy();
			v4 = v2 + 5;
			// branch -> 0x89ed4
		}
		// 0x89ed4
		v2 = v4;
		int32_t v5 = v3 + 1; // 0x89ed4
		v3 = v5;
		if (v5 >= 4) {
			// break -> 0x89ee4
			break;
		}
		v2 = v4;
		v1 += 5;
		// continue -> 0x89ea4
	}
	int32_t v6 = *(int32_t *)(g23 - 0x706c); // 0x89ee4
	g35 = v6;
	g32 = 0;
	int32_t v7 = *(int32_t *)(g23 - 0x7604); // 0x89eec
	g36 = v7;
	int32_t v8 = 0;  // 0x89f307
	int32_t v9 = v4; // 0x89f00
	// branch -> 0x89ef0
	int32_t result; // 0x89f4c
	while (true) {
		int32_t v10 = v6; // 0x89f3c
		int32_t v11 = v7; // 0x89f34
		int32_t v12 = v8; // 0x89f30
		result = v9;
		if (*(int32_t *)(v6 + 8) % 2 != 0) {
			// 0x89efc
			g34 = v9;
			*(char *)(g33 + 21) = (char)*(int32_t *)(v7 + 20);
			*(char *)(g33 + 20) = *(char *)(g36 + 2);
			*(char *)(g33 + 22) = *(char *)(g36 + 15);
			memcpy();
			int32_t v13 = v2 + 3; // 0x89f28
			v2 = v13;
			g33 += 3;
			v10 = g35;
			v11 = g36;
			v12 = g32;
			result = v13;
			// branch -> 0x89f30
		}
		int32_t v14 = v12 + 1; // 0x89f30
		g32 = v14;
		int32_t v15 = v11 + 24; // 0x89f34
		g36 = v15;
		int32_t v16 = v10 + 20; // 0x89f3c
		g35 = v16;
		if (v14 >= 16) {
			// break -> 0x89f44
			break;
		}
		v8 = v14;
		v9 = result;
		v7 = v15;
		v6 = v16;
		// continue -> 0x89ef0
	}
	// 0x89f44
	return result;
}

// Address range: 0x89f5c - 0x8a088
int32_t function_89f5c(char *a1)
{
	int32_t v1 = 0;                          // r29
	int32_t v2 = *(int32_t *)(g23 - 0x5c7c); // 0x89f68
	int32_t v3 = (int32_t)a1;                // 0x89f6c
	// branch -> 0x89f80
	while (true) {
		// 0x89f80
		g34 = v2;
		int32_t v4;
		if (*(char *)v3 == -1) {
			// 0x89f8c
			memset(v2, 5, 255);
			v3++;
			v4 = function_abc8c(v1, 0, 0, 0, 0, 0);
			// branch -> 0x89ff8
		} else {
			// 0x89fc4
			memcpy();
			unsigned char v5 = *(char *)v2;       // 0x89fd8
			unsigned char v6 = *(char *)(v2 + 1); // 0x89fe0
			unsigned char v7 = *(char *)(v2 + 2); // 0x89fe8
			unsigned char v8 = *(char *)(v2 + 3); // 0x89fec
			v3 += 5;
			v4 = function_abc8c(v1, 1, (int32_t)v5, (int32_t)v6, (int32_t)v7, (int32_t)v8);
			// branch -> 0x89ff8
		}
		int32_t result = v4; // r3
		int32_t v9 = v1 + 1; // 0x89ff8
		v1 = v9;
		int32_t v10 = v2 + 5; // 0x89ffc
		if (v9 >= 4) {
			int32_t v11 = *(int32_t *)(g23 - 0x706c); // 0x8a00c
			v2 = v11;
			int32_t v12 = *(int32_t *)(g23 - 0x7604); // 0x8a014
			v1 = v12;
			int32_t v13 = 0; // r28
			int32_t v14 = 0; // 0x8a0604
			// branch -> 0x8a020
			while (true) {
				int32_t v15 = v11; // 0x8a06c
				int32_t v16 = v12; // 0x8a064
				int32_t v17 = v14; // 0x8a060
				if (*(int32_t *)(v11 + 8) % 2 != 0) {
					int32_t v18 = v2; // 0x8a030
					g34 = v18 + 20;
					result = memcpy();
					unsigned char v19 = *(char *)(v18 + 21); // 0x8a040
					v3 += 3;
					*(int32_t *)(v1 + 20) = (int32_t)v19;
					*(char *)(v1 + 2) = *(char *)(v2 + 20);
					int32_t v20 = v2; // 0x8a054
					*(char *)(v1 + 15) = *(char *)(v20 + 22);
					v15 = v20 + 3;
					v16 = v1;
					v17 = v13;
					// branch -> 0x8a060
				}
				int32_t v21 = v17 + 1; // 0x8a060
				v13 = v21;
				int32_t v22 = v16 + 24; // 0x8a064
				v1 = v22;
				int32_t v23 = v15 + 20; // 0x8a06c
				v2 = v23;
				if (v21 >= 16) {
					// break -> 0x8a074
					break;
				}
				v12 = v22;
				v14 = v21;
				v11 = v23;
				// continue -> 0x8a020
			}
			// 0x8a074
			return result;
		}
		// 0x89ff8
		v2 = v10;
		// branch -> 0x89f80
	}
}

// Address range: 0x8a088 - 0x8a0e0
int32_t function_8a088(char *a1, int32_t a2)
{
	int32_t v1 = g36;         // 0x8a088
	int32_t v2 = (int32_t)a1; // 0x8a094
	g35 = v2;
	int32_t v3 = a2 - v2 - 1; // 0x8a0a4
	g36 = v3;
	int32_t v4 = PkwareCompress(v2 + 1, v3); // 0x8a0b0
	*(char *)g35 = (char)(v4 - g36 != 0);
	g36 = v1;
	return v4 + 1;
}

// Address range: 0x8a0e0 - 0x8a1cc
int32_t function_8a0e0(int32_t a1)
{
	int32_t v1 = g10; // 0x8a0e4
	g36 = a1;
	int32_t v2;     // bp-40
	int32_t result; // 0x8a1b4
	if (*(char *)(g23 - 0x4d30) == 0) {
		// 0x8a19c
		v2 = 0;
		result = function_4bdd8(a1, 76, (int32_t)&v2, 1);
		g10 = v1;
		return result;
	}
	// 0x8a100
	g34 = 0x1272;
	int32_t v3 = DiabloAllocPtr(); // 0x8a104
	g32 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x5c80); // 0x8a114
	int32_t v5 = v3 + 1;                     // 0x8a118
	g33 = v5;
	g35 = v4;
	// branch -> 0x8a120
	while (true) {
		int32_t v6 = function_89b20((char *)v5, v4);                                      // 0x8a128
		int32_t v7 = function_89ccc(v6, g35 + 2794);                                      // 0x8a130
		int32_t v8 = function_8a088((char *)g32, function_89d44((char *)v7, g35 + 2921)); // 0x8a144
		function_4bdd8(g36, (char)(g31 + 58), g32, v8);
		int32_t v9 = g35 + 0x1271; // 0x8a160
		g35 = v9;
		if (g31 >= 16) {
			int32_t v10 = function_89e80((char *)(g32 + 1)); // 0x8a170
			int32_t v11 = function_8a088((char *)g32, v10);  // 0x8a17c
			function_4bdd8(g36, 75, g32, v11);
			g34 = g32;
			mem_free_dbg();
			// branch -> 0x8a19c
			// 0x8a19c
			v2 = 0;
			result = function_4bdd8(g36, 76, (int32_t)&v2, 1);
			g10 = v1;
			return result;
		}
		// 0x8a120
		v4 = v9;
		v5 = g33;
		// branch -> 0x8a120
	}
}

// Address range: 0x8a1cc - 0x8a28c
int32_t function_8a1cc(int32_t a1, int32_t a2)
{
	int32_t v1 = g36;                        // 0x8a1cc
	int32_t v2 = *(int32_t *)(g23 - 0x5c84); // 0x8a1d4
	g36 = v2;
	g35 = a1;
	int32_t v3 = v2; // 0x8a204
	if (*(char *)v2 != 0) {
		// 0x8a1f4
		g38 = 0x1271;
		PkwareDecompress(v2 + 1, 0x1271);
		v3 = g36;
		a1 = g35;
		// branch -> 0x8a200
	}
	uint32_t v4 = a1 % 256; // 0x8a200
	int32_t v5 = v3 + 1;    // 0x8a204
	int32_t result;         // r3
	int32_t v6;             // 0x8a260
	if (v4 == 75) {
		// 0x8a210
		function_89f5c((char *)v5);
		// branch -> 0x8a260
	} else {
		// 0x8a218
		if (v4 >= 58) {
			// 0x8a220
			if (v4 <= 74) {
				int32_t v7 = *(int32_t *)(g23 - 0x5c80) + 0x1271 * ((a1 - 58) % 256); // 0x8a238
				g36 = v7;
				int32_t v8 = function_89bf0((char *)v5, v7); // 0x8a240
				int32_t v9 = function_89d04(v8, g36 + 2794); // 0x8a248
				function_89de0((char *)v9, g36 + 2921);
				// branch -> 0x8a260
				// 0x8a260
				v6 = g23;
				result = (int32_t) * (char *)(v6 - 0x4d2f);
				*(char *)(v6 - 0x4d30) = 1;
				*(char *)(g23 - 0x4d2f) = (char)(result + 1);
				g36 = v1;
				return result;
			}
		}
		// 0x8a258
		app_fatal(*(int32_t *)(g23 - 0x5c88));
		// branch -> 0x8a260
	}
	// 0x8a260
	v6 = g23;
	result = (int32_t) * (char *)(v6 - 0x4d2f);
	*(char *)(v6 - 0x4d30) = 1;
	*(char *)(g23 - 0x4d2f) = (char)(result + 1);
	g36 = v1;
	return result;
}

// Address range: 0x8a28c - 0x8a3dc
int32_t function_8a28c(char a1, int32_t a2)
{
	g36 = a2;
	char *v1 = (char *)*(int32_t *)(g23 - 0x7068); // 0x8a2a4
	int32_t v2 = a1;                               // 0x8a2a8
	char v3 = a2 / 0x1000000;
	char v4 = v3;     // 0x8a2f4
	int32_t v5 = g23; // 0x8a304
	int32_t v6;
	int32_t v7;       // 0x8a31c
	int32_t result;   // 0x8a3d8
	int32_t *v8;      // 0x8a3b0
	unsigned char v9; // 0x8a2e8
	int32_t v10;      // 0x8a354
	if ((int32_t)*v1 != v2) {
		// 0x8a2b0
		if (v3 != 76) {
			// 0x8a2bc
			if ((a2 & -0x1000000) == 0x3a000000) {
				// 0x8a2c4
				if (*(int16_t *)(a2 + 1) == 0) {
					// 0x8a2dc
					*v1 = (char)v2;
					*(char *)(g23 - 0x4d28) = 76;
					v4 = *(char *)&g37;
					v5 = g23;
					// branch -> 0x8a2e8
					// 0x8a2e8
					v9 = *(char *)(v5 - 0x4d28);
					if (v9 == 76) {
						// 0x8a2f4
						if (v4 == 76) {
							// 0x8a300
							*(char *)(v5 - 0x4d2f) = 20;
							result = (int32_t) * (int16_t *)(g36 + 3) + 5;
							// branch -> 0x8a3c8
						} else {
							// 0x8a314
							v7 = g36;
							if (v4 == 58) {
								// 0x8a31c
								if (*(int16_t *)(v7 + 1) == 0) {
									// 0x8a334
									*(int32_t *)(v5 - 0x4d2c) = 0;
									*(char *)(g23 - 0x4d28) = *(char *)&g37;
									// branch -> 0x8a394
									// 0x8a394
									g34 = (int32_t) * (int16_t *)(g36 + 1) + *(int32_t *)(g23 - 0x5c84);
									memcpy();
									v8 = (int32_t *)(v6 - 0x4d2c);
									*v8 = (int32_t) * (int16_t *)(g36 + 3) + *v8;
									// branch -> 0x8a3c8
									// 0x8a3c8
									return (int32_t) * (int16_t *)(g36 + 3) + 5;
								}
							}
							// 0x8a328
							result = (int32_t) * (int16_t *)(v7 + 3) + 5;
							// branch -> 0x8a3c8
						}
						// 0x8a3c8
						return result;
					}
					// 0x8a348
					if (v9 == v4) {
						// 0x8a394
						g34 = (int32_t) * (int16_t *)(g36 + 1) + *(int32_t *)(g23 - 0x5c84);
						memcpy();
						v8 = (int32_t *)(v6 - 0x4d2c);
						*v8 = (int32_t) * (int16_t *)(g36 + 3) + *v8;
						// branch -> 0x8a3c8
						// 0x8a3c8
						return (int32_t) * (int16_t *)(g36 + 3) + 5;
					}
					// 0x8a354
					v10 = *(int32_t *)(v5 - 0x4d2c);
					g37 = v10;
					function_8a1cc((int32_t)v9, v10);
					if (*(char *)&g37 == 76) {
						// 0x8a368
						*(char *)(g23 - 0x4d2f) = 20;
						*(char *)(g23 - 0x4d28) = (char)76;
						// branch -> 0x8a3c8
					} else {
						// 0x8a384
						*(int32_t *)(g23 - 0x4d2c) = 0;
						*(char *)(g23 - 0x4d28) = *(char *)&g37;
						// branch -> 0x8a394
						// 0x8a394
						g34 = (int32_t) * (int16_t *)(g36 + 1) + *(int32_t *)(g23 - 0x5c84);
						memcpy();
						v8 = (int32_t *)(v6 - 0x4d2c);
						*v8 = (int32_t) * (int16_t *)(g36 + 3) + *v8;
						// branch -> 0x8a3c8
					}
					// 0x8a3c8
					return (int32_t) * (int16_t *)(g36 + 3) + 5;
				}
			}
			// 0x8a2d0
			// branch -> 0x8a3c8
			// 0x8a3c8
			return (int32_t) * (int16_t *)(a2 + 3) + 5;
		}
		// 0x8a2dc
		*v1 = (char)v2;
		*(char *)(g23 - 0x4d28) = 76;
		v4 = *(char *)&g37;
		v5 = g23;
		// branch -> 0x8a2e8
	}
	// 0x8a2e8
	v9 = *(char *)(v5 - 0x4d28);
	if (v9 == 76) {
		// 0x8a2f4
		if (v4 == 76) {
			// 0x8a300
			*(char *)(v5 - 0x4d2f) = 20;
			result = (int32_t) * (int16_t *)(g36 + 3) + 5;
			// branch -> 0x8a3c8
		} else {
			// 0x8a314
			v7 = g36;
			if (v4 == 58) {
				// 0x8a31c
				if (*(int16_t *)(v7 + 1) == 0) {
					// 0x8a334
					*(int32_t *)(v5 - 0x4d2c) = 0;
					*(char *)(g23 - 0x4d28) = *(char *)&g37;
					// branch -> 0x8a394
					// 0x8a394
					g34 = (int32_t) * (int16_t *)(g36 + 1) + *(int32_t *)(g23 - 0x5c84);
					memcpy();
					v8 = (int32_t *)(v6 - 0x4d2c);
					*v8 = (int32_t) * (int16_t *)(g36 + 3) + *v8;
					// branch -> 0x8a3c8
					// 0x8a3c8
					return (int32_t) * (int16_t *)(g36 + 3) + 5;
				}
			}
			// 0x8a328
			result = (int32_t) * (int16_t *)(v7 + 3) + 5;
			// branch -> 0x8a3c8
		}
		// 0x8a3c8
		return result;
	}
	// 0x8a348
	if (v9 == v4) {
		// 0x8a394
		g34 = (int32_t) * (int16_t *)(g36 + 1) + *(int32_t *)(g23 - 0x5c84);
		memcpy();
		v8 = (int32_t *)(v6 - 0x4d2c);
		*v8 = (int32_t) * (int16_t *)(g36 + 3) + *v8;
		// branch -> 0x8a3c8
		// 0x8a3c8
		return (int32_t) * (int16_t *)(g36 + 3) + 5;
	}
	// 0x8a354
	v10 = *(int32_t *)(v5 - 0x4d2c);
	g37 = v10;
	function_8a1cc((int32_t)v9, v10);
	if (*(char *)&g37 == 76) {
		// 0x8a368
		*(char *)(g23 - 0x4d2f) = 20;
		*(char *)(g23 - 0x4d28) = (char)76;
		// branch -> 0x8a3c8
	} else {
		// 0x8a384
		*(int32_t *)(g23 - 0x4d2c) = 0;
		*(char *)(g23 - 0x4d28) = *(char *)&g37;
		// branch -> 0x8a394
		// 0x8a394
		g34 = (int32_t) * (int16_t *)(g36 + 1) + *(int32_t *)(g23 - 0x5c84);
		memcpy();
		v8 = (int32_t *)(v6 - 0x4d2c);
		*v8 = (int32_t) * (int16_t *)(g36 + 3) + *v8;
		// branch -> 0x8a3c8
	}
	// 0x8a3c8
	return (int32_t) * (int16_t *)(g36 + 3) + 5;
}

// Address range: 0x8a3dc - 0x8a44c
int32_t delta_init(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x5c7c); // 0x8a3e8
	g34 = v1;
	*(char *)(g23 - 0x4d30) = 0;
	memset(v1, 32, 255);
	int32_t v2;
	int32_t v3 = *(int32_t *)(v2 - 0x5c80); // 0x8a40c
	g34 = v3;
	memset(v3, (int32_t) "MoveWindow" + 0x3981, 255);
	g34 = *(int32_t *)(v2 - 0x5c8c);
	memset();
	int32_t result = *(int32_t *)(v2 - 0x7070); // 0x8a430
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0x8a44c - 0x8a4a8
int32_t function_8a44c(int32_t result, char a2, int32_t a3, uint32_t a4)
{
	// 0x8a44c
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// bb
		return result;
	}
	// 0x8a45c
	*(char *)(g23 - 0x4d30) = 1;
	int32_t v1 = 9 * result + 2921 + 0x1271 * (a4 % 256) + *(int32_t *)(g23 - 0x5c80); // 0x8a484
	*(char *)v1 = (char)(int32_t)a2;
	*(char *)(v1 + 1) = (char)a3;
	int32_t result2 = *(int32_t *)(232 * result + *(int32_t *)(g23 - 0x7754) + 72); // 0x8a498
	*(char *)(v1 + 2) = (char)result2;
	*(int32_t *)(v1 + 5) = 0;
	return result2;
}

// Address range: 0x8a4a8 - 0x8a4f0
int32_t function_8a4a8(int32_t result, int32_t a2, uint32_t a3)
{
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// bb
		return result;
	}
	// 0x8a4b8
	*(char *)(g23 - 0x4d30) = 1;
	int32_t result2 = 9 * result + 2921 + 0x1271 * (a3 % 256) + *(int32_t *)(g23 - 0x5c80); // 0x8a4d8
	int32_t *v1 = (int32_t *)(result2 + 5);                                                 // 0x8a4dc
	if (*v1 <= a2) {
		// bb
		return result2;
	}
	// 0x8a4e8
	*v1 = a2;
	return result2;
}

// Address range: 0x8a4f0 - 0x8a558
int32_t function_8a4f0(char *a1, int32_t a2)
{
	int32_t result = (int32_t)a1;
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// bb
		return result;
	}
	// 0x8a500
	*(char *)(g23 - 0x4d30) = 1;
	int32_t v1 = 9 * (int32_t) * (char *)&g34 + 0x1271 * (a2 % 256); // 0x8a51c
	int32_t v2 = v1 + 2921 + *(int32_t *)(g23 - 0x5c80);             // 0x8a524
	if (*(int32_t *)(v2 + 5) == 0) {
		// bb
		return result;
	}
	// 0x8a534
	*(char *)v2 = *(char *)(result + 1);
	*(char *)(v2 + 1) = *(char *)(result + 2);
	*(char *)(v2 + 4) = (char)255;
	*(char *)(v2 + 3) = *(char *)(result + 3);
	return result;
}

// Address range: 0x8a558 - 0x8a5c0
int32_t function_8a558(int32_t result, int32_t a2, uint32_t a3)
{
	// 0x8a558
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// bb
		return result;
	}
	// 0x8a568
	*(char *)(g23 - 0x4d30) = 1;
	int32_t v1 = 0x1271 * (a3 % 256) + 9 * a2 + 2921 + *(int32_t *)(g23 - 0x5c80); // 0x8a588
	*(char *)v1 = *(char *)(result + 1);
	*(char *)(v1 + 1) = *(char *)(result + 2);
	*(char *)(v1 + 4) = (char)255;
	*(char *)(v1 + 3) = *(char *)(result + 4);
	*(char *)(v1 + 2) = *(char *)(result + 3);
	*(int32_t *)(v1 + 5) = *(int32_t *)(result + 5);
	return result;
}

// Address range: 0x8a5c0 - 0x8a6d4
int32_t function_8a5c0(int32_t result2, int32_t a2, int32_t a3)
{
	int32_t result = result2;                // 0x8a5cc
	int32_t v1 = *(int32_t *)(g23 - 0x762c); // r30
	int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x8a5d4
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // r31
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// 0x8a6c0
		return result;
	}
	// 0x8a5f0
	if (*(char *)v2 == 0) {
		int32_t v4 = GetRndSeed(); // 0x8a5fc
		result2 = v4;
		*(int32_t *)*(int32_t *)(g23 - 0x75ec) = v4;
		// branch -> 0x8a608
	}
	// 0x8a608
	if (*(char *)v2 == 0) {
		// branch -> 0x8a6c0
	} else {
		int32_t v5 = result % 256;               // 0x8a614
		int32_t v6 = *(int32_t *)(g23 - 0x7628); // 0x8a620
		int32_t v7 = 0;                          // r27
		if (*(int32_t *)v1 > 0) {
			int32_t v8 = v1; // 0x8a69812
			int32_t v9 = 0;  // 0x8a69410
			while (true) {
				int32_t v10 = *(int32_t *)v6; // 0x8a630
				int32_t v11 = 232 * v10;      // 0x8a634
				int32_t v12 = v8;             // 0x8a698
				int32_t v13 = v9;             // 0x8a694
				if (*(int32_t *)(v3 + v11 + 152) != 0) {
					int32_t v14 = v3 + v11; // r25
					int32_t v15 = 9 * v10;  // 0x8a650
					*(char *)(g23 - 0x4d30) = 1;
					int32_t v16 = v15 + 2921 + *(int32_t *)(g23 - 0x5c80) + 0x1271 * v5; // 0x8a660
					int32_t v17 = v16;                                                   // r24
					*(char *)v16 = (char)*(int32_t *)(v14 + 32);
					int32_t v18 = *(int32_t *)(v14 + 36); // 0x8a668
					*(char *)(v17 + 1) = (char)v18;
					int32_t v19 = *(int32_t *)(v14 + 72); // 0x8a670
					*(char *)(v17 + 2) = (char)v19;
					*(char *)(v17 + 3) = (char)function_8769c(v10, v15);
					*(int32_t *)(v17 + 5) = *(int32_t *)(v14 + 152);
					*(char *)(v17 + 4) = *(char *)(v14 + 164);
					v12 = v1;
					v13 = v7;
					// branch -> 0x8a690
				}
				int32_t v20 = v13 + 1; // 0x8a694
				v7 = v20;
				if (v20 >= *(int32_t *)v12) {
					// break -> 0x8a698
					break;
				}
				v8 = v12;
				v9 = v20;
				v6 += 4;
				// continue -> 0x8a630
			}
			// 0x8a698
			// branch -> 0x8a6a4
		}
		// 0x8a6a4
		g34 = *(int32_t *)(g23 - 0x5c8c) + 1600 * v5;
		result2 = memcpy();
		// branch -> 0x8a6c0
	}
	// 0x8a6c0
	return result2;
}

// Address range: 0x8a6d4 - 0x8a708
int32_t function_8a6d4(int32_t result, char a2, uint32_t a3)
{
	// 0x8a6d4
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// bb
		return result;
	}
	int32_t v1 = *(int32_t *)(g23 - 0x5c80);        // r5
	int32_t result2 = 0x1271 * (a3 % 256) + result; // r3
	*(char *)(g23 - 0x4d30) = 1;
	*(char *)(v1 + result2 + 2794) = (char)(int32_t)a2;
	return result2;
}

// Address range: 0x8a708 - 0x8a8b0
int32_t delta_get_item(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x8a708
	int32_t v2 = g10; // 0x8a70c
	int32_t v3 = g35; // 0x8a714
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// 0x8a730
		// branch -> 0x8a898
		// 0x8a898
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return 1;
	}
	int32_t v4 = *(int32_t *)(g23 - 0x5c80) + 0x1271 * (a2 % 256); // 0x8a748
	g36 = v4;
	int32_t v5 = 127; // 0x8a7ec
	// branch -> 0x8a754
	int32_t v6; // 0x8a88c
	int32_t v7; // 0x8a890
	while (true) {
		unsigned char v8 = *(char *)v4; // 0x8a754
		g37 = v8;
		if (v8 != -1) {
			// 0x8a760
			if (*(int16_t *)(v4 + 3) == *(int16_t *)(a1 + 7)) {
				// 0x8a770
				if (*(int16_t *)(v4 + 5) == *(int16_t *)(a1 + 9)) {
					// 0x8a780
					if (*(int32_t *)(v4 + 7) == *(int32_t *)(a1 + 11)) {
						// 0x8a790
						if (v8 == 1) {
							// 0x8a798
							// branch -> 0x8a898
							// 0x8a898
							g36 = v1;
							g10 = v2;
							g35 = v3;
							return 1;
						}
						// 0x8a7a0
						if (v8 == 0) {
							// 0x8a7a8
							*(char *)(g23 - 0x4d30) = 1;
							*(char *)v4 = (char)1;
							// branch -> 0x8a898
							// 0x8a898
							g36 = v1;
							g10 = v2;
							g35 = v3;
							return 1;
						}
						// 0x8a7bc
						if (v8 == 2) {
							// 0x8a7c4
							*(char *)(g23 - 0x4d30) = 1;
							*(char *)v4 = -1;
							// branch -> 0x8a898
							// 0x8a898
							g36 = v1;
							g10 = v2;
							g35 = v3;
							return 1;
						}
						// 0x8a7dc
						app_fatal(*(int32_t *)(g23 - 0x5c90));
						// branch -> 0x8a7f0
						// 0x8a7f0
						if (__asm_rlwinm_((int32_t) * (int16_t *)(g35 + 9), 0, 16, 16) == 0) {
							// 0x8a7fc
							// branch -> 0x8a898
							// 0x8a898
							g36 = v1;
							g10 = v2;
							g35 = v3;
							return 0;
						}
						// 0x8a804
						v7 = 127;
						v6 = g36;
						// branch -> 0x8a80c
						while (true) {
							// 0x8a80c
							if (*(char *)v6 == -1) {
								// 0x8a818
								*(char *)(g23 - 0x4d30) = 1;
								*(char *)g36 = (char)1;
								*(char *)(g36 + 1) = *(char *)(g35 + 5);
								*(char *)(g36 + 2) = *(char *)(g35 + 6);
								*(int16_t *)(g36 + 3) = *(int16_t *)(g35 + 7);
								*(int16_t *)(g36 + 5) = *(int16_t *)(g35 + 9);
								*(int32_t *)(g36 + 7) = *(int32_t *)(g35 + 11);
								*(char *)(g36 + 11) = *(char *)(g35 + 15);
								*(char *)(g36 + 12) = *(char *)(g35 + 16);
								*(char *)(g36 + 13) = *(char *)(g35 + 17);
								*(char *)(g36 + 14) = *(char *)(g35 + 18);
								*(char *)(g36 + 15) = *(char *)(g35 + 19);
								*(int16_t *)(g36 + 16) = *(int16_t *)(g35 + 20);
								*(int32_t *)(g36 + 18) = *(int32_t *)(g35 + 22);
								// branch -> 0x8a898
								// 0x8a898
								g36 = v1;
								g10 = v2;
								g35 = v3;
								return 1;
							}
						lab_0x8a88c:;
							int32_t v9 = v6 + 22; // 0x8a88c
							g36 = v9;
							int32_t v10 = v7 - 1; // 0x8a890
							if (v10 == 0) {
								// break -> 0x8a894
								break;
							}
							v7 = v10;
							v6 = v9;
							// continue -> 0x8a80c
						}
						// 0x8a894
						// branch -> 0x8a898
						// 0x8a898
						g36 = v1;
						g10 = v2;
						g35 = v3;
						return 1;
					}
				}
			}
		}
		int32_t v11 = v5 - 1; // 0x8a7ec
		if (v11 == 0) {
			// break -> 0x8a7f0
			break;
		}
		v5 = v11;
		v4 += 22;
		// continue -> 0x8a754
	}
	// 0x8a7f0
	if (__asm_rlwinm_((int32_t) * (int16_t *)(a1 + 9), 0, 16, 16) == 0) {
		// 0x8a7fc
		// branch -> 0x8a898
	} else {
		// 0x8a804
		v7 = 127;
		v6 = g36;
		// branch -> 0x8a80c
		while (true) {
			// 0x8a80c
			if (*(char *)v6 != -1) {
				goto lab_0x8a88c;
			}
			// 0x8a818
			*(char *)(g23 - 0x4d30) = 1;
			*(char *)g36 = (char)1;
			*(char *)(g36 + 1) = *(char *)(g35 + 5);
			*(char *)(g36 + 2) = *(char *)(g35 + 6);
			*(int16_t *)(g36 + 3) = *(int16_t *)(g35 + 7);
			*(int16_t *)(g36 + 5) = *(int16_t *)(g35 + 9);
			*(int32_t *)(g36 + 7) = *(int32_t *)(g35 + 11);
			*(char *)(g36 + 11) = *(char *)(g35 + 15);
			*(char *)(g36 + 12) = *(char *)(g35 + 16);
			*(char *)(g36 + 13) = *(char *)(g35 + 17);
			*(char *)(g36 + 14) = *(char *)(g35 + 18);
			*(char *)(g36 + 15) = *(char *)(g35 + 19);
			*(int16_t *)(g36 + 16) = *(int16_t *)(g35 + 20);
			*(int32_t *)(g36 + 18) = *(int32_t *)(g35 + 22);
			// branch -> 0x8a898
			// 0x8a898
			g36 = v1;
			g10 = v2;
			g35 = v3;
			return 1;
		}
	}
	// 0x8a898
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return 0;
}

// Address range: 0x8a8b0 - 0x8a9bc
int32_t function_8a8b0(int32_t result, char a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0x8a8b4
	g33 = result;
	g32 = *(int32_t *)(g23 - 0x5c94);
	g35 = a2;
	g36 = a3;
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// 0x8a9a8
		g10 = v1;
		return result;
	}
	int32_t v2 = *(int32_t *)(g23 - 0x5c80); // 0x8a8e4
	int32_t v3 = v2 + 0x1271 * (a4 % 256);   // 0x8a8ec
	g31 = v3;
	g30 = v3;
	g29 = 0;
	int32_t v4 = 0; // 0x8a94c3
	// branch -> 0x8a8f8
	int32_t result4; // 0x8a9b810
	while (true) {
		unsigned char v5 = *(char *)v3; // 0x8a8f8
		g37 = v5;
		result4 = v2;
		int32_t v6 = v3; // 0x8a950
		int32_t v7 = v4; // 0x8a94c
		int32_t v8;      // 0x8a94c
		int32_t v9;      // 0x8a950
		if (v5 != 1) {
			// 0x8a904
			if (v5 != -1) {
				uint16_t v10 = *(int16_t *)(v3 + 3); // 0x8a90c
				int32_t v11 = v10;                   // 0x8a90c
				int32_t v12 = g33;                   // 0x8a910
				if (v10 == *(int16_t *)(v12 + 3)) {
					uint16_t v13 = *(int16_t *)(v3 + 5); // 0x8a91c
					int32_t v14 = v13;                   // 0x8a91c
					if (v13 == *(int16_t *)(v12 + 5)) {
						int32_t result2 = *(int32_t *)(v3 + 7); // 0x8a92c
						if (result2 == *(int32_t *)(v12 + 7)) {
							// 0x8a93c
							if (v5 == 2) {
								// 0x8a9a8
								g10 = v1;
								return result2;
							}
							// 0x8a944
							result4 = app_fatal(g32);
							v6 = g30;
							v7 = g29;
							// branch -> 0x8a94c
						} else {
							result4 = result2;
							v6 = v3;
							v7 = v4;
						}
					} else {
						result4 = v14;
						v6 = v3;
						v7 = v4;
					}
				} else {
					result4 = v11;
					v6 = v3;
					v7 = v4;
				}
			} else {
				result4 = v2;
				v6 = v3;
				v7 = v4;
			}
			// 0x8a94c
			v8 = v7 + 1;
			g29 = v8;
			v9 = v6 + 22;
			g30 = v9;
			if (v8 >= 127) {
				// break -> 0x8a95c
				break;
			}
			v2 = result4;
			v4 = v8;
			v3 = v9;
			// continue -> 0x8a8f8
			continue;
		}
		// 0x8a94c
		v8 = v7 + 1;
		g29 = v8;
		v9 = v6 + 22;
		g30 = v9;
		if (v8 >= 127) {
			// break -> 0x8a95c
			break;
		}
		v2 = result4;
		v4 = v8;
		v3 = v9;
		// continue -> 0x8a8f8
	}
	int32_t v15 = 127; // 0x8a9a4
	int32_t v16 = g31; // 0x8a9a0
	// branch -> 0x8a964
	while (true) {
		// 0x8a964
		if (*(char *)v16 == -1) {
			// 0x8a970
			*(char *)(g23 - 0x4d30) = 1;
			g34 = g31;
			int32_t result3 = memcpy(); // r3
			*(char *)g31 = 2;
			*(char *)(g31 + 1) = (char)g35;
			*(char *)(g31 + 2) = (char)g36;
			// branch -> 0x8a9a8
			// 0x8a9a8
			g10 = v1;
			return result3;
		}
		int32_t v17 = v16 + 22; // 0x8a9a0
		g31 = v17;
		int32_t v18 = v15 - 1; // 0x8a9a4
		if (v18 == 0) {
			// break -> 0x8a9a8
			break;
		}
		v15 = v18;
		v16 = v17;
		// continue -> 0x8a964
	}
	// 0x8a9a8
	g10 = v1;
	return result4;
}

// Address range: 0x8a9bc - 0x8a9e0
int32_t function_8a9bc(int32_t a1)
{
	// 0x8a9bc
	if (*(char *)(*(int32_t *)(g23 - 0x5c7c) + 5 * a1) == -1) {
		// 0x8a9d0
		return 1;
	}
	// 0x8a9d8
	return 0;
}

// Address range: 0x8a9e0 - 0x8aa08
int32_t function_8a9e0(int32_t a1)
{
	// 0x8a9e0
	if (*(char *)(*(int32_t *)(g23 - 0x5c7c) + 3 * a1 + 20) == -1) {
		// 0x8a9f8
		return 0;
	}
	// 0x8aa00
	return 1;
}

// Address range: 0x8aa08 - 0x8ab28
int32_t function_8aa08(int32_t result)
{
	// 0x8aa08
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// 0x8ab24
		return result;
	}
	int32_t v1 = *(int32_t *)(g23 - 0x5c80);                                   // 0x8aa24
	int32_t result2 = *(int32_t *)(g23 - 0x7690) + 368 * result;               // 0x8aa2c
	int32_t v2 = 0x1271 * (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4) + v1; // 0x8aa44
	int32_t v3 = 127;                                                          // 0x8aa94
	// branch -> 0x8aa50
	int32_t result3; // 0x8aa50
	while (true) {
		unsigned char v4 = *(char *)v2; // 0x8aa50
		result3 = v4;
		if (v4 != -1) {
			// 0x8aa5c
			if ((int32_t) * (int16_t *)(v2 + 3) == *(int32_t *)(result2 + 360)) {
				// 0x8aa68
				if (*(int16_t *)(v2 + 5) == *(int16_t *)(result2 + 4)) {
					// 0x8aa74
					if (*(int32_t *)(v2 + 7) == *(int32_t *)result2) {
						// 0x8aa80
						if (v4 == 1) {
							// 0x8ab24
							return 1;
						}
						// 0x8aa88
						if (v4 == 0) {
							// 0x8ab24
							return 0;
						}
					}
				}
			}
		}
		int32_t v5 = v3 - 1; // 0x8aa94
		if (v5 == 0) {
			// break -> 0x8aa98
			break;
		}
		v3 = v5;
		v2 += 22;
		// continue -> 0x8aa50
	}
	int32_t v6 = 127; // 0x8ab20
	// branch -> 0x8aaa0
	while (true) {
		// 0x8aaa0
		if (*(char *)v2 == -1) {
			// 0x8aaac
			*(char *)(g23 - 0x4d30) = 1;
			*(char *)v2 = 0;
			*(char *)(v2 + 1) = (char)*(int32_t *)(result2 + 12);
			*(char *)(v2 + 2) = (char)*(int32_t *)(result2 + 16);
			*(int16_t *)(v2 + 3) = (int16_t) * (int32_t *)(result2 + 360);
			*(int16_t *)(v2 + 5) = *(int16_t *)(result2 + 4);
			*(int32_t *)(v2 + 7) = *(int32_t *)result2;
			*(char *)(v2 + 11) = (char)*(int32_t *)(result2 + 56);
			*(char *)(v2 + 12) = (char)*(int32_t *)(result2 + 236);
			*(char *)(v2 + 13) = (char)*(int32_t *)(result2 + 240);
			*(char *)(v2 + 14) = (char)*(int32_t *)(result2 + 228);
			*(char *)(v2 + 15) = (char)*(int32_t *)(result2 + 232);
			*(int16_t *)(v2 + 16) = (int16_t) * (int32_t *)(result2 + 196);
			return result2;
		}
		int32_t v7 = v6 - 1; // 0x8ab20
		if (v7 == 0) {
			// break -> 0x8ab24
			break;
		}
		v6 = v7;
		v2 += 22;
		// continue -> 0x8aaa0
	}
	// 0x8ab24
	return result3;
}

// Address range: 0x8ab28 - 0x8abd4
int32_t function_8ab28(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);     // 0x8ab34
	int32_t result = *(int32_t *)(g23 - 0x77ac); // 0x8ab40
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// 0x8abc4
		return result;
	}
	int32_t v2 = *(int32_t *)result; // 0x8ab4c
	int32_t v3 = 0;                  // r0
	bool v4 = false;                 // 0x8ab6c
	int32_t v5 = v1;                 // 0x8ab68
	if (v2 != 0) {
		// 0x8ab60
		*(int32_t *)(v1 + 532) = 0;
		v4 = v2 == 1;
		v5 = v1;
		// branch -> 0x8ab64
	}
	int32_t v6 = v5 + 0x55ec; // 0x8ab68
	bool v7 = false;          // 0x8ab80
	int32_t v8 = v6;          // 0x8ab7c
	if (!v4) {
		// 0x8ab74
		*(int32_t *)(v5 + 0x5800) = v3;
		v7 = v2 == 2;
		v8 = v6;
		// branch -> 0x8ab78
	}
	bool v9 = false; // 0x8ab94
	if (!v7) {
		// 0x8ab88
		*(int32_t *)(v8 + 0x5800) = v3;
		v9 = v2 == 3;
		// branch -> 0x8ab8c
	}
	// 0x8ab8c
	if (!v9) {
		// 0x8ab9c
		*(int32_t *)(0xadec + v8) = v3;
		// branch -> 0x8aba0
	}
	int32_t v10 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8abb0
	int32_t v11 = v1 + 0x55ec * *(int32_t *)result + v10;         // 0x8abb8
	*(char *)(v11 + 496) = 1;
	// branch -> 0x8abc4
	// 0x8abc4
	return function_8a5c0(v10, v11, 1);
}

// Address range: 0x8abd4 - 0x8b19c
int32_t DeltaLoadLevel(void)
{
	int32_t v1 = g10;                            // 0x8abd8
	int32_t result = *(int32_t *)(g23 - 0x77f0); // 0x8abdc
	g16 = *(int32_t *)(g23 - 0x71e0);
	g19 = *(int32_t *)(g23 - 0x71e4);
	g18 = *(int32_t *)(g23 - 0x71f4);
	g17 = *(int32_t *)(g23 - 0x768c);
	g21 = *(int32_t *)(g23 - 0x767c);
	g20 = *(int32_t *)(g23 - 0x7690);
	g22 = *(int32_t *)(g23 - 0x762c);
	g26 = *(int32_t *)(g23 - 0x77e4);
	g25 = *(int32_t *)(g23 - 0x5c80);
	if (*(char *)result == 1) {
		// 0x8b188
		g10 = v1;
		return result;
	}
	// 0x8ac18
	*(int32_t *)*(int32_t *)(g23 - 0x7070) = 1;
	char *v2 = (char *)g26; // 0x8ac24
	if (*v2 != 0) {
		// 0x8ac30
		g27 = *(int32_t *)(g23 - 0x7754);
		g28 = 0;
		g29 = 0;
		if (*(int32_t *)g22 > 0) {
			int32_t v3 = (int32_t)*v2; // 0x8ac40118
			int32_t v4 = 0;            // 0x8ac5c117
			int32_t v5 = 0;            // 0x8ac48116
			while (true) {
				// 0x8ac40
				int32_t v6; // 0x8ae10
				int32_t v7; // 0x8ae18
				if (*(char *)(g25 + 0x1271 * v3 + v5 + 2921) != -1) {
					// 0x8ac5c
					function_7c95c(v4);
					int32_t v8 = 0x1271 * (int32_t) * (char *)g26 + g29; // 0x8ac6c
					*(int32_t *)(g27 + 32) = (int32_t) * (char *)(g25 + v8 + 2921);
					int32_t v9 = 0x1271 * (int32_t) * (char *)g26 + g29; // 0x8ac84
					*(int32_t *)(g27 + 36) = (int32_t) * (char *)(g25 + v9 + 2922);
					int32_t v10 = g27; // 0x8ac94
					*(int32_t *)(v10 + 48) = *(int32_t *)(v10 + 32);
					int32_t v11 = g27; // 0x8ac9c
					*(int32_t *)(v11 + 52) = *(int32_t *)(v11 + 36);
					int32_t v12 = g27; // 0x8aca4
					*(int32_t *)(v12 + 40) = *(int32_t *)(v12 + 32);
					int32_t v13 = g27; // 0x8acac
					*(int32_t *)(v13 + 44) = *(int32_t *)(v13 + 36);
					int32_t v14 = *(int32_t *)(g29 + 2926 + 0x1271 * (int32_t) * (char *)g26 + g25); // 0x8acc8
					if (v14 != -1) {
						// 0x8acd4
						*(int32_t *)(g27 + 152) = v14;
						// branch -> 0x8acd8
					}
					int32_t v15 = g29 + g25 + 0x1271 * (int32_t) * (char *)g26; // 0x8ace4
					if (*(int32_t *)(v15 + 2926) == 0) {
						// 0x8acf4
						*(int32_t *)(g27 + 48) = (int32_t) * (char *)(v15 + 2921);
						int32_t v16 = 0x1271 * (int32_t) * (char *)g26 + g29; // 0x8ad08
						*(int32_t *)(g27 + 52) = (int32_t) * (char *)(g25 + v16 + 2922);
						function_7c95c(g28);
						int32_t v17 = g27; // 0x8ad1c
						if (*(char *)(v17 + 156) != 27) {
							// 0x8ad28
							if (*(char *)(v17 + 192) == 0) {
								int32_t v18 = (int32_t) * (char *)(*(int32_t *)(v17 + 224) + 509); // 0x8ad40
								int32_t v19 = *(int32_t *)(v17 + 72);                              // 0x8ad44
								AddDead(*(int32_t *)(v17 + 32), *(int32_t *)(v17 + 36), v18, v19);
								// branch -> 0x8ad64
							} else {
								int32_t v20 = (int32_t) * (char *)(v17 + 194); // 0x8ad58
								int32_t v21 = *(int32_t *)(v17 + 72);          // 0x8ad5c
								AddDead(*(int32_t *)(v17 + 32), *(int32_t *)(v17 + 36), v20, v21);
								// branch -> 0x8ad64
							}
							// 0x8ad64
							*(int32_t *)(g27 + 112) = 1;
							function_7f700(g28);
							// branch -> 0x8ae10
						lab_0x8ae10_2:
							// 0x8ae10
							v6 = g29 + 9;
							g29 = v6;
							g27 += 232;
							v7 = g28 + 1;
							g28 = v7;
							if (v7 >= *(int32_t *)g22) {
								// break -> 0x8ae1c
								break;
							}
							v3 = (int32_t) * (char *)g26;
							v4 = v7;
							v5 = v6;
							// continue -> 0x8ac40
							continue;
						}
						// 0x8ad64
						*(int32_t *)(g27 + 112) = 1;
						function_7f700(g28);
						// branch -> 0x8ae10
						goto lab_0x8ae10_2;
					} else {
						// 0x8ad78
						decode_enemy(g28, (int32_t) * (char *)(v15 + 2924));
						int32_t v22 = g27;                    // 0x8ad84
						int32_t v23 = *(int32_t *)(v22 + 32); // 0x8ad84
						int32_t *v24;
						if (v23 != 0) {
							// 0x8ad90
							if (v23 != 1) {
								// 0x8ad90
								v24 = (int32_t *)(v22 + 36);
								// branch -> 0x8ada4
							lab_0x8ada4:;
								int32_t v25 = *(int32_t *)g21; // 0x8adac
								int32_t v26 = 2 * *v24;        // 0x8adb4
								*(int16_t *)(v25 + v26 + 224 * v23) = (int16_t)(g28 + 1);
								// branch -> 0x8adc0
							lab_0x8adc0:;
								int32_t v27 = g28; // 0x8adc0
								if (v27 > 3) {
									// 0x8adec
									function_7c124(v27, *(int32_t *)(g27 + 72));
									// branch -> 0x8adf8
								} else {
									// 0x8adc8
									function_8336c(v27);
									int32_t *v28 = (int32_t *)(g27 + 160); // 0x8add0
									*v28 = *v28 | 16;
									int32_t *v29 = (int32_t *)(g27 + 160); // 0x8addc
									*v29 = *v29 | 32;
									// branch -> 0x8adf8
								}
								int32_t v30 = 0x1271 * (int32_t) * (char *)g26 + g29; // 0x8ae00
								*(char *)(g27 + 164) = *(char *)(g25 + v30 + 2925);
								// branch -> 0x8ae10
								goto lab_0x8ae10_2;
							}
						}
						int32_t *v31 = (int32_t *)(v22 + 36); // 0x8ad98
						if (*v31 == 0) {
							goto lab_0x8adc0;
						}
						v24 = v31;
						goto lab_0x8ada4;
					}
				}
				// 0x8ae10
				v6 = g29 + 9;
				g29 = v6;
				g27 += 232;
				v7 = g28 + 1;
				g28 = v7;
				if (v7 >= *(int32_t *)g22) {
					// break -> 0x8ae1c
					break;
				}
				v3 = (int32_t) * (char *)g26;
				v4 = v7;
				v5 = v6;
				// continue -> 0x8ac40
			}
			// 0x8ae1c
			// branch -> 0x8ae28
		}
		// 0x8ae28
		g34 = *(int32_t *)(g23 - 0x7798);
		memcpy();
		// branch -> 0x8ae48
	}
	// 0x8ae48
	g21 = 0;
	g22 = 0;
	int32_t v32 = 0; // 0x8ae58
	// branch -> 0x8ae50
	while (true) {
		int32_t v33 = 0x1271 * (int32_t) * (char *)g26 + v32 + g25; // 0x8ae5c
		char v34 = *(char *)v33;                                    // 0x8ae60
		int32_t v35 = v32;                                          // 0x8b0b8
		int32_t v36;                                                // 0x8b0b4
		int32_t v37;                                                // 0x8b0b8
		if (v34 != -1) {
			// 0x8ae6c
			if (v34 == 1) {
				int32_t v38 = (int32_t) * (int16_t *)(v33 + 3);                // 0x8ae74
				int32_t v39 = (int32_t) * (int16_t *)(v33 + 5);                // 0x8ae78
				int32_t v40 = FindGetItem(v38, v39, *(int32_t *)(v33 + 7)); // 0x8ae80
				g34 = v40;
				if (v40 != -1) {
					int32_t v41 = g20 + 368 * v40;                                      // 0x8ae98
					int32_t v42 = *(int32_t *)(v41 + 16);                               // 0x8aea0
					int32_t v43 = 112 * *(int32_t *)(v41 + 12) + *(int32_t *)g17 + v42; // 0x8aeac
					char *v44 = (char *)v43;                                            // 0x8aeb0
					if (v40 + 1 == (int32_t)*v44) {
						// 0x8aec0
						*v44 = 0;
						// branch -> 0x8aec8
					}
					// 0x8aec8
					g37 = g21;
					function_60bd4();
					// branch -> 0x8aed0
				}
			}
			int32_t v45 = g22;                                          // 0x8aed8
			int32_t v46 = 0x1271 * (int32_t) * (char *)g26 + v45 + g25; // 0x8aedc
			int32_t v47 = v46;                                          // r10
			if (*(char *)v46 == 2) {
				int32_t v48 = *(int32_t *)g19; // 0x8aeec
				int32_t v49 = g18;             // 0x8aef0
				int32_t *v50 = (int32_t *)v49; // 0x8aef0
				g24 = *v50;
				*v50 = *(int32_t *)(v49 + 4 * (126 - v48));
				*(int32_t *)(4 * v48 + g16) = g24;
				uint16_t v51 = *(int16_t *)(v47 + 3); // 0x8af0c
				int32_t v52 = v51;                    // 0x8af0c
				if (v51 == 23) {
					uint16_t v53 = *(int16_t *)(v47 + 16);        // 0x8af18
					int32_t v54 = *(int32_t *)(v47 + 18);         // 0x8af24
					uint16_t v55 = *(int16_t *)(v47 + 5);         // 0x8af2c
					int32_t v56 = *(int32_t *)(v47 + 7);          // 0x8af30
					int32_t v57 = (int32_t) * (char *)(v47 + 11); // 0x8af34
					int32_t v58 = (int32_t) * (char *)(v47 + 12); // 0x8af38
					unsigned char v59 = *(char *)(v47 + 13);      // 0x8af3c
					unsigned char v60 = *(char *)(v47 + 14);      // 0x8af40
					g13 = (int32_t) * (char *)(v47 + 15);
					function_606f0(g24, v55, v56, v57, v58, (int32_t)v59, (int32_t)v60, (int32_t)v53, v54);
					// branch -> 0x8afb8
				} else {
					int32_t v61 = *(int32_t *)(v47 + 7);             // 0x8af58
					int32_t v62 = (int32_t) * (int16_t *)(v47 + 16); // 0x8af5c
					function_60590(g24, v52, *(int16_t *)(v47 + 5), v61, v62);
					int32_t v63 = 0x1271 * (int32_t) * (char *)g26 + g22 + g25; // 0x8af70
					int32_t v64 = v63;                                          // r3
					int32_t v65 = v63;                                          // 0x8af94
					if (*(char *)(v63 + 11) != 0) {
						// 0x8af80
						*(int32_t *)(g20 + 368 * g24 + 56) = 1;
						v65 = v64;
						// branch -> 0x8af90
					}
					int32_t v66 = g20 + 368 * g24; // 0x8af98
					int32_t v67 = v66;             // r4
					*(int32_t *)(v66 + 236) = (int32_t) * (char *)(v65 + 12);
					unsigned char v68 = *(char *)(v64 + 13); // 0x8afa0
					*(int32_t *)(v67 + 240) = (int32_t)v68;
					unsigned char v69 = *(char *)(v64 + 14); // 0x8afa8
					*(int32_t *)(v67 + 228) = (int32_t)v69;
					unsigned char v70 = *(char *)(v64 + 15); // 0x8afb0
					*(int32_t *)(v67 + 232) = (int32_t)v70;
					// branch -> 0x8afb8
				}
				int32_t v71 = 0x1271 * (int32_t) * (char *)g26 + g22 + g25; // 0x8afc4
				int32_t v72 = (int32_t) * (char *)(v71 + 1);                // 0x8afc8
				int32_t v73 = v72;                                          // r27
				int32_t v74 = (int32_t) * (char *)(v71 + 2);                // 0x8afcc
				int32_t v75 = v74;                                          // r25
				int32_t v76;                                                // r5
				int32_t v77;                                                // 0x8b068
				int32_t v78;
				int32_t v79;  // 0x8b074
				int32_t *v80; // 0x8b0a8
				int32_t v81;  // 0x8b070
				int32_t v82;  // 0x8b08c
				int32_t v83;  // 0x8b090
				int32_t v84;  // 0x8b098
				if (function_5a4d0(v72, v74) == 0) {
					// 0x8afe4
					g32 = 0;
					int32_t v85 = 1; // r26
					int32_t v86 = 1; // 0x8aff0106
					// branch -> 0x8aff0
					while (true) {
						int32_t v87 = -v86; // 0x8aff0
						g27 = v87;
						g28 = v87;
						int32_t v88 = v86; // 0x8b054
						if (v86 >= v87) {
							int32_t v89 = v86; // 0x8b0304104
							// branch -> 0x8affc
							while (true) {
								// 0x8affc
								g36 = v87;
								int32_t v90 = v75 + v87; // 0x8b000
								g33 = v90;
								int32_t v91 = v89; // 0x8b044
								if (v87 <= v89) {
									int32_t v92 = v87; // 0x8b008103
									// branch -> 0x8b008
									while (true) {
										int32_t v93 = v73 + v92; // 0x8b008
										g35 = v93;
										if (function_5a4d0(v93, v90) != 0) {
											// 0x8b020
											v73 = g35;
											g32 = 1;
											// branch -> 0x8b02c
										}
										int32_t v94 = g36 + 1; // 0x8b02c
										g36 = v94;
										if (v94 <= v85) {
											// 0x8b02c
											if (g32 == 0) {
												// 0x8b02c
												v90 = g33;
												v92 = v94;
												// branch -> 0x8b008
												continue;
											}
										}
										// 0x8b040
										// branch -> 0x8b040
									}
								}
								int32_t v95 = v87 + 1; // 0x8b040
								g28 = v95;
								if (v95 <= v91) {
									// 0x8b040
									if (g32 == 0) {
										// 0x8b040
										v87 = v95;
										v89 = v91;
										// branch -> 0x8affc
										continue;
									} else {
										v88 = v91;
									}
								} else {
									v88 = v91;
								}
							}
						}
						int32_t v96 = v88 + 1; // 0x8b054
						v85 = v96;
						if (v96 <= 49) {
							// 0x8b054
							if (g32 != 0) {
								// break -> 0x8b068
								break;
							}
							v86 = v96;
							// continue -> 0x8aff0
							continue;
						}
					}
					// 0x8b068
					v77 = g24;
					v81 = g20 + 368 * v77;
					v79 = v81 + 12;
					v76 = v81 + 16;
					*(int32_t *)v79 = v73;
					*(int32_t *)v76 = v75;
					v82 = *(int32_t *)v79;
					v83 = *(int32_t *)v76;
					v84 = *(int32_t *)g17;
					*(char *)(v84 + v83 + 112 * v82) = (char)(v77 + 1);
					function_60abc(g24, 0, v84);
					v80 = (int32_t *)g19;
					*v80 = *v80 + 1;
					// branch -> 0x8b0b4
				lab_0x8b0b4:
					// 0x8b0b4
					v36 = g21 + 1;
					g21 = v36;
					v37 = v78 + 22;
					g22 = v37;
					if (v36 >= 127) {
						// break -> 0x8b0c4
						break;
					}
					v32 = v37;
					// continue -> 0x8ae50
					continue;
				}
				// 0x8b068
				v77 = g24;
				v81 = g20 + 368 * v77;
				v79 = v81 + 12;
				v76 = v81 + 16;
				*(int32_t *)v79 = v73;
				*(int32_t *)v76 = v75;
				v82 = *(int32_t *)v79;
				v83 = *(int32_t *)v76;
				v84 = *(int32_t *)g17;
				*(char *)(v84 + v83 + 112 * v82) = (char)(v77 + 1);
				function_60abc(g24, 0, v84);
				v80 = (int32_t *)g19;
				*v80 = *v80 + 1;
				v78 = g22;
				// branch -> 0x8b0b4
				goto lab_0x8b0b4;
			} else {
				v35 = v45;
			}
		}
		// 0x8b0b4
		v36 = g21 + 1;
		g21 = v36;
		v37 = v35 + 22;
		g22 = v37;
		if (v36 >= 127) {
			// break -> 0x8b0c4
			break;
		}
		v32 = v37;
		// continue -> 0x8ae50
	}
	// 0x8b0c4
	int32_t v97;     // 0x8b17c
	int32_t result2; // 0x8b17c
	if (*(char *)g26 == 0) {
		// 0x8b0c4
		v97 = g23;
		// branch -> 0x8b17c
	} else {
		// 0x8b0d0
		g27 = 0;
		int32_t v98 = 0; // 0x8b120
		// branch -> 0x8b0d4
		while (true) {
			int32_t v99 = 0x1271 * (int32_t) * (char *)g26 + v98; // 0x8b0dc
			unsigned char v100 = *(char *)(v99 + 2794 + g25);     // 0x8b0e4
			int32_t v101 = v100;                                  // 0x8b0e4
			int32_t v102;
			int32_t v103; // 0x8b134
			int32_t v104; // 0x8b140100
			int32_t v105; // 0x8b144101
			int32_t v106; // 0x8b128
			int32_t v107; // 0x8b140
			int32_t v108; // 0x8b134
			int32_t v109; // 0x8b14c
			if (v100 == 47) {
				// 0x8b11c
				g34 = -1;
				function_9d10c(-1, v98);
				// branch -> 0x8b128
			} else {
				// 0x8b0f0
				if (v100 > 47) {
					// 0x8b100
					// branch -> 0x8b128
				} else {
					// 0x8b0f4
					if (v100 > 42) {
						// 0x8b10c
						g34 = -1;
						function_9ca6c(-1, v101, v98);
						// branch -> 0x8b128
					}
				}
				// 0x8b128
				v106 = g27 + 1;
				g27 = v106;
				if (v106 >= 127) {
					// 0x8b134
					v103 = g23;
					v108 = *(int32_t *)(v103 - 0x7190);
					g22 = v108;
					g24 = 0;
					if (*(int32_t *)*(int32_t *)(v103 - 0x7194) <= 0) {
						// 0x8b17c
						result2 = *(int32_t *)(v103 - 0x7070);
						*(int32_t *)result2 = 0;
						// branch -> 0x8b188
						// 0x8b188
						g10 = v1;
						return result2;
					}
					v102 = 0;
					v105 = v103;
					v104 = v108;
					int32_t v110;
					while (true) {
						// 0x8b140
						v107 = *(int32_t *)v104;
						g34 = v107;
						v109 = *(int32_t *)(*(int32_t *)(v105 - 0x7688) + 120 * v107);
						int32_t v111; // 0x8b164
						int32_t v112; // 0x8b168
						if (v109 != 53) {
						lab_0x8b158:
							// 0x8b158
							if (v109 != 54) {
								v110 = v105;
								v112 = v102;
								v111 = v104;
							lab_0x8b164:;
								int32_t v113 = v111 + 4; // 0x8b164
								g22 = v113;
								int32_t v114 = v112 + 1; // 0x8b168
								g24 = v114;
								if (v114 >= *(int32_t *)*(int32_t *)(v110 - 0x7194)) {
									// break -> 0x8b17c
									break;
								}
								v102 = v114;
								v105 = v110;
								v104 = v113;
								// continue -> 0x8b140
								continue;
							}
						}
					lab_0x8b160:
						// 0x8b160
						function_9656c();
						v110 = g23;
						v112 = g24;
						v111 = g22;
						// branch -> 0x8b164
						goto lab_0x8b164;
					}
					// 0x8b17c
					result2 = *(int32_t *)(v110 - 0x7070);
					*(int32_t *)result2 = 0;
					// branch -> 0x8b188
					// 0x8b188
					g10 = v1;
					return result2;
				}
			lab_0x8b128:
				// 0x8b128
				v98 = v106;
				// branch -> 0x8b0d4
				continue;
			}
			// 0x8b128
			v106 = g27 + 1;
			g27 = v106;
			if (v106 < 127) {
				goto lab_0x8b128;
			}
			// 0x8b134
			v103 = g23;
			v108 = *(int32_t *)(v103 - 0x7190);
			g22 = v108;
			g24 = 0;
			if (*(int32_t *)*(int32_t *)(v103 - 0x7194) > 0) {
				v102 = 0;
				v105 = v103;
				v104 = v108;
				while (true) {
					// 0x8b140
					v107 = *(int32_t *)v104;
					g34 = v107;
					v109 = *(int32_t *)(*(int32_t *)(v105 - 0x7688) + 120 * v107);
					if (v109 == 53) {
						goto lab_0x8b160;
					}
					goto lab_0x8b158;
				}
			} else {
				v97 = v103;
			}
		}
	}
	// 0x8b17c
	result2 = *(int32_t *)(v97 - 0x7070);
	*(int32_t *)result2 = 0;
	// branch -> 0x8b188
	// 0x8b188
	g10 = v1;
	return result2;
}

// Address range: 0x8b19c - 0x8b1e0
int32_t NetSendCmd(int32_t a1, char a2)
{
	char v1 = a2;     // bp-8
	int32_t v2 = &v1; // 0x8b1c4
	int32_t result;
	if (a1 == 0) {
		// 0x8b1c4
		result = NetSendLoPri(v2, 1);
		// branch -> 0x8b1d0
	} else {
		// 0x8b1b4
		result = NetSendHiPri(v2, 1);
		// branch -> 0x8b1d0
	}
	// 0x8b1d0
	return result;
}

// Address range: 0x8b1e0 - 0x8b234
int32_t function_8b1e0(char a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	char v1 = 90; // bp-24
	a5 = __asm_lwbrx(90, (int32_t)&a5);
	return NetSendLoPri((int32_t)&v1, 10);
}

// Address range: 0x8b234 - 0x8b280
int32_t NetSendCmdLoc(int32_t a1, char a2, int32_t a3, int32_t a4)
{
	char v1 = a2;     // bp-8
	int32_t v2 = &v1; // 0x8b264
	int32_t result;
	if (a1 == 0) {
		// 0x8b264
		result = NetSendLoPri(v2, 3);
		// branch -> 0x8b270
	} else {
		// 0x8b254
		result = NetSendHiPri(v2, 3);
		// branch -> 0x8b270
	}
	// 0x8b270
	return result;
}

// Address range: 0x8b280 - 0x8b2e0
int32_t NetSendCmdLocParam1(int32_t a1, char a2, int32_t a3, int32_t a4)
{
	char v1 = a2;     // bp-8
	int32_t v2 = &v1; // 0x8b2c4
	int32_t result;
	if (a1 == 0) {
		// 0x8b2c4
		result = NetSendLoPri(v2, 5);
		// branch -> 0x8b2d0
	} else {
		// 0x8b2b4
		result = NetSendHiPri(v2, 5);
		// branch -> 0x8b2d0
	}
	// 0x8b2d0
	return result;
}

// Address range: 0x8b2e0 - 0x8b354
int32_t function_8b2e0(int32_t a1, char a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	char v1 = a2; // bp-8
	int16_t v2;
	int16_t v3;
	int32_t v4 = (int32_t)&a6 + (int32_t)(v3 | 256 * v2); // 0x8b314
	unsigned char v5 = *(char *)v4;                       // 0x8b314
	unsigned char v6 = *(char *)(v4 + 1);                 // 0x8b314
	a6 = 256 * (int16_t)v6 | (int16_t)v5;
	int32_t v7 = &v1; // 0x8b338
	int32_t result;
	if (a1 == 0) {
		// 0x8b338
		result = NetSendLoPri(v7, 7);
		// branch -> 0x8b344
	} else {
		// 0x8b328
		result = NetSendHiPri(v7, 7);
		// branch -> 0x8b344
	}
	// 0x8b344
	return result;
}

// Address range: 0x8b354 - 0x8b3dc
int32_t function_8b354(int32_t a1, char a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	char v1 = a2; // bp-24
	int16_t v2;
	int16_t v3;
	int32_t v4 = (int32_t)&a6 + (int32_t)(v3 | 256 * v2); // 0x8b390
	unsigned char v5 = *(char *)v4;                       // 0x8b390
	unsigned char v6 = *(char *)(v4 + 1);                 // 0x8b390
	int32_t v7 = 256 * (int16_t)v6 | (int16_t)v5;         // 0x8b394
	a6 = v7;
	int32_t v8 = v7 + (int32_t)&a7;        // 0x8b39c
	unsigned char v9 = *(char *)v8;        // 0x8b39c
	unsigned char v10 = *(char *)(v8 + 1); // 0x8b39c
	a7 = 256 * (int16_t)v10 | (int16_t)v9;
	int32_t v11 = &v1; // 0x8b3c0
	int32_t result;
	if (a1 == 0) {
		// 0x8b3c0
		result = NetSendLoPri(v11, 9);
		// branch -> 0x8b3cc
	} else {
		// 0x8b3b0
		result = NetSendHiPri(v11, 9);
		// branch -> 0x8b3cc
	}
	// 0x8b3cc
	return result;
}

// Address range: 0x8b3dc - 0x8b434
int32_t NetSendCmdParam1(int32_t a1, char a2, int32_t a3)
{
	char v1 = a2;     // bp-8
	int32_t v2 = &v1; // 0x8b418
	int32_t result;
	if (a1 == 0) {
		// 0x8b418
		result = NetSendLoPri(v2, 3);
		// branch -> 0x8b424
	} else {
		// 0x8b408
		result = NetSendHiPri(v2, 3);
		// branch -> 0x8b424
	}
	// 0x8b424
	return result;
}

// Address range: 0x8b434 - 0x8b4a0
int32_t function_8b434(int32_t a1, char a2, int32_t a3, int32_t a4)
{
	char v1 = a2; // bp-8
	int16_t v2;
	int16_t v3;
	int32_t v4 = (int32_t)&a4 + (int32_t)(v3 | 256 * v2); // 0x8b460
	unsigned char v5 = *(char *)v4;                       // 0x8b460
	unsigned char v6 = *(char *)(v4 + 1);                 // 0x8b460
	a4 = 256 * (int16_t)v6 | (int16_t)v5;
	int32_t v7 = &v1; // 0x8b484
	int32_t result;
	if (a1 == 0) {
		// 0x8b484
		result = NetSendLoPri(v7, 5);
		// branch -> 0x8b490
	} else {
		// 0x8b474
		result = NetSendHiPri(v7, 5);
		// branch -> 0x8b490
	}
	// 0x8b490
	return result;
}

// Address range: 0x8b4a0 - 0x8b520
int32_t function_8b4a0(int32_t a1, char a2, int32_t a3, int32_t a4, int32_t a5)
{
	char v1 = a2; // bp-8
	int16_t v2;
	int16_t v3;
	int32_t v4 = (int32_t)&a4 + (int32_t)(v3 | 256 * v2); // 0x8b4d4
	unsigned char v5 = *(char *)v4;                       // 0x8b4d4
	unsigned char v6 = *(char *)(v4 + 1);                 // 0x8b4d4
	int32_t v7 = 256 * (int16_t)v6 | (int16_t)v5;         // 0x8b4d8
	a4 = v7;
	int32_t v8 = v7 + (int32_t)&a5;        // 0x8b4e0
	unsigned char v9 = *(char *)v8;        // 0x8b4e0
	unsigned char v10 = *(char *)(v8 + 1); // 0x8b4e0
	a5 = 256 * (int16_t)v10 | (int16_t)v9;
	int32_t v11 = &v1; // 0x8b504
	int32_t result;
	if (a1 == 0) {
		// 0x8b504
		result = NetSendLoPri(v11, 7);
		// branch -> 0x8b510
	} else {
		// 0x8b4f4
		result = NetSendHiPri(v11, 7);
		// branch -> 0x8b510
	}
	// 0x8b510
	return result;
}

// Address range: 0x8b520 - 0x8b594
int32_t function_8b520(int32_t a1, char a2)
{
	char v1 = 88;     // bp-8
	int32_t v2 = &v1; // 0x8b578
	int32_t result;
	if (a1 == 0) {
		// 0x8b578
		result = NetSendLoPri(v2, 5);
		// branch -> 0x8b584
	} else {
		// 0x8b568
		result = NetSendHiPri(v2, 5);
		// branch -> 0x8b584
	}
	// 0x8b584
	return result;
}

// Address range: 0x8b594 - 0x8b7a4
int32_t function_8b594(int32_t a1, char a2, int32_t a3, int32_t a4)
{
	char v1 = a2;     // bp-40
	int32_t v2;       // bp-14
	int32_t v3 = &v2; // 0x8b5c4
	v2 = 0;
	int32_t v4 = *(int32_t *)(g23 - 0x7690) + 368 * (g40 % 256); // 0x8b5cc
	int16_t v5;                                                  // bp-20
	int32_t v6;                                                  // bp-29
	int16_t v7;                                                  // bp-31
	int32_t v8;                                                  // 0x8b6d8
	if (*(int32_t *)(v4 + 360) == 23) {
		char v9 = *(char *)(v4 + 68);  // 0x8b5fc
		char v10 = *(char *)(v4 + 69); // 0x8b600
		v7 = (int16_t)v10 | 256 * (int16_t)v9;
		unsigned char v11 = *(char *)(v4 + 70); // 0x8b618
		char v12 = *(char *)(v4 + 71);          // 0x8b61c
		char v13 = *(char *)(v4 + 72);          // 0x8b620
		char v14 = *(char *)(v4 + 73);          // 0x8b62c
		v6 = 0x10000 * (int32_t)v12 | 0x1000000 * (int32_t)v11 | 256 * (int32_t)v13 | (int32_t)v14;
		char v15 = *(char *)(v4 + 79);        // 0x8b67c
		int32_t v16 = *(int32_t *)(v4 + 192); // 0x8b680
		int32_t v17 = *(int32_t *)(v4 + 196); // 0x8b688
		v5 = 64 * v16 + 0xfb40 | 256 * (int32_t)v15 | v17;
		unsigned char v18 = *(char *)(v4 + 80); // 0x8b6a4
		char v19 = *(char *)(v4 + 81);          // 0x8b6a8
		char v20 = *(char *)(v4 + 82);          // 0x8b6ac
		char v21 = *(char *)(v4 + 83);          // 0x8b6b8
		v8 = 0x10000 * (int32_t)v19 | 0x1000000 * (int32_t)v18 | 256 * (int32_t)v20 | (int32_t)v21;
		// branch -> 0x8b724
	} else {
		// 0x8b6e4
		v7 = *(int16_t *)(v4 + 4);
		v6 = *(int32_t *)v4;
		v5 = (int16_t) * (int32_t *)(v4 + 196);
		// branch -> 0x8b724
	}
	// 0x8b724
	int16_t v22;
	int16_t v23;
	int32_t v24 = (int32_t)&v7 + (int32_t)(v23 | 256 * v22);    // 0x8b734
	unsigned char v25 = *(char *)(v24 + 1);                     // 0x8b734
	int16_t v26 = 256 * (int16_t)v25 | (int16_t) * (char *)v24; // 0x8b734
	v7 = v26;
	int32_t v27 = __asm_lwbrx((int32_t)v26, (int32_t)&v6); // 0x8b744
	v6 = v27;
	int32_t v28 = v27 + (int32_t)&v5;                           // 0x8b750
	unsigned char v29 = *(char *)(v28 + 1);                     // 0x8b750
	int16_t v30 = 256 * (int16_t)v29 | (int16_t) * (char *)v28; // 0x8b750
	v5 = v30;
	int32_t v31 = __asm_lwbrx((int32_t)v30, (int32_t)&v8); // 0x8b760
	v8 = v31;
	v2 = __asm_lwbrx(v31, v3);
	int32_t v32 = &v1; // 0x8b788
	int32_t result;
	if (a1 == 0) {
		// 0x8b788
		result = NetSendLoPri(v32, 30);
		// branch -> 0x8b794
	} else {
		// 0x8b778
		result = NetSendHiPri(v32, 30);
		// branch -> 0x8b794
	}
	// 0x8b794
	return result;
}

// Address range: 0x8b7a4 - 0x8b8c4
int32_t function_8b7a4(int32_t a1, int32_t a2, char a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g36; // 0x8b7a4
	int32_t v2 = g10; // 0x8b7a8
	g36 = a4;
	int32_t v3 = g35; // 0x8b7b0
	g35 = a3;
	int32_t v4 = g33; // 0x8b7bc
	g33 = a2;
	int32_t v5 = g32; // 0x8b7c8
	g32 = a1;
	int32_t v6;       // bp-56
	int32_t v7 = &v6; // 0x8b7d8
	g34 = v7;
	memcpy();
	v6 = g33;
	int32_t v8; // bp-47
	int16_t v9;
	int16_t v10;
	int32_t v11 = (int32_t)(v10 | 256 * v9) + (int32_t)&v8; // 0x8b804
	unsigned char v12 = *(char *)v11;                       // 0x8b804
	unsigned char v13 = *(char *)(v11 + 1);                 // 0x8b804
	int32_t v14 = 256 * (int16_t)v13 | (int16_t)v12;        // 0x8b80c
	v8 = v14;
	int32_t v15;                                   // bp-45
	int32_t v16 = __asm_lwbrx(v14, (int32_t)&v15); // 0x8b814
	v15 = v16;
	int32_t v17;                            // bp-36
	int32_t v18 = v16 + (int32_t)&v17;      // 0x8b820
	unsigned char v19 = *(char *)v18;       // 0x8b820
	unsigned char v20 = *(char *)(v18 + 1); // 0x8b820
	int32_t v21;                            // bp-34
	int32_t v22 = &v21;                     // 0x8b824
	g34 = v22;
	int32_t v23 = 256 * (int16_t)v20 | (int16_t)v19; // 0x8b828
	v17 = v23;
	v21 = __asm_lwbrx(v23, v22);
	int32_t v24; // bp-30
	if (g32 == 0) {
		int32_t v25 = &v24; // 0x8b844
		v24 = 0;
		v24 = __asm_lwbrx(0, v25);
		int32_t result = NetSendHiPri(v7, 30); // 0x8b85c
		// branch -> 0x8b8a4
		// 0x8b8a4
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return result;
	}
	int32_t v26 = GetTickCount(); // 0x8b864
	int32_t v27 = v24;            // 0x8b86c
	int32_t v28 = &v24;           // 0x8b870
	int32_t result2;              // 0x8b8c0
	if (v27 == 0) {
		// 0x8b87c
		v24 = v26;
		// branch -> 0x8b890
		// 0x8b890
		v24 = __asm_lwbrx(0, v28);
		result2 = multi_msg_add(v7, 30);
		// branch -> 0x8b8a4
	} else {
		int32_t v29 = v26 - v27; // 0x8b884
		if (v29 <= 0x1388) {
			// 0x8b890
			v24 = __asm_lwbrx(v29, v28);
			result2 = multi_msg_add(v7, 30);
			// branch -> 0x8b8a4
		} else {
			result2 = v26;
		}
	}
	// 0x8b8a4
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	g32 = v5;
	return result2;
}

// Address range: 0x8b8c4 - 0x8b9b8
int32_t NetSendCmdReq2(int32_t a1, char a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g36; // 0x8b8c4
	g36 = a3;
	int32_t v2 = g10; // 0x8b8cc
	int32_t v3 = g35; // 0x8b8d4
	g35 = a2;
	int32_t v4 = g33; // 0x8b8e0
	g33 = a1;
	int32_t v5;       // bp-56
	int32_t v6 = &v5; // 0x8b8f0
	g34 = v6;
	g34 = memcpy();
	v5 = g33;
	int32_t v7 = GetTickCount(); // 0x8b908
	int32_t v8;                  // bp-30
	int32_t v9 = &v8;            // 0x8b914
	int32_t v10;                 // bp-34
	int32_t v11;                 // bp-36
	int32_t v12;                 // bp-45
	int32_t v13;                 // bp-47
	int16_t v14;
	int16_t v15;
	int32_t v16;
	int32_t v17;       // 0x8b950
	int32_t v18;       // 0x8b958
	int32_t v19;       // 0x8b960
	int32_t v20;       // 0x8b96c
	int32_t v21;       // 0x8b974
	int32_t v22;       // 0x8b97c
	unsigned char v23; // 0x8b950
	unsigned char v24; // 0x8b96c
	unsigned char v25; // 0x8b950
	unsigned char v26; // 0x8b96c
	if (v16 == 0) {
		// 0x8b920
		v8 = v7;
		// branch -> 0x8b93c
		// 0x8b93c
		v17 = (int32_t)(v15 | 256 * v14) + (int32_t)&v13;
		v23 = *(char *)v17;
		v25 = *(char *)(v17 + 1);
		v18 = 256 * (int16_t)v25 | (int16_t)v23;
		v13 = v18;
		v19 = __asm_lwbrx(v18, (int32_t)&v12);
		v12 = v19;
		v20 = v19 + (int32_t)&v11;
		v24 = *(char *)v20;
		v26 = *(char *)(v20 + 1);
		v21 = 256 * (int16_t)v26 | (int16_t)v24;
		v11 = v21;
		v22 = __asm_lwbrx(v21, (int32_t)&v10);
		v10 = v22;
		v8 = __asm_lwbrx(v22, v9);
		multi_msg_add(v6, 30);
		// branch -> 0x8b99c
		// 0x8b99c
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return 1;
	}
	// 0x8b928
	if (v7 - v16 >= 0x1389) {
		// 0x8b99c
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return 0;
	}
	// 0x8b93c
	v17 = (int32_t)(v15 | 256 * v14) + (int32_t)&v13;
	v23 = *(char *)v17;
	v25 = *(char *)(v17 + 1);
	v18 = 256 * (int16_t)v25 | (int16_t)v23;
	v13 = v18;
	v19 = __asm_lwbrx(v18, (int32_t)&v12);
	v12 = v19;
	v20 = v19 + (int32_t)&v11;
	v24 = *(char *)v20;
	v26 = *(char *)(v20 + 1);
	v21 = 256 * (int16_t)v26 | (int16_t)v24;
	v11 = v21;
	v22 = __asm_lwbrx(v21, (int32_t)&v10);
	v10 = v22;
	v8 = __asm_lwbrx(v22, v9);
	multi_msg_add(v6, 30);
	// branch -> 0x8b99c
	// 0x8b99c
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return 1;
}

// Address range: 0x8b9b8 - 0x8ba58
int32_t NetSendCmdExtra(int32_t a1)
{
	// 0x8b9b8
	int32_t v1;       // bp-40
	int32_t v2 = &v1; // 0x8b9cc
	g34 = v2;
	memcpy();
	v1 = 85;
	int32_t v3 = 0; // bp-14
	int32_t v4;     // bp-31
	int16_t v5;
	int16_t v6;
	int32_t v7 = (int32_t)(v6 | 256 * v5) + (int32_t)&v4; // 0x8ba00
	unsigned char v8 = *(char *)v7;                       // 0x8ba00
	unsigned char v9 = *(char *)(v7 + 1);                 // 0x8ba00
	int32_t v10 = 256 * (int16_t)v9 | (int16_t)v8;        // 0x8ba08
	v4 = v10;
	int32_t v11;                                   // bp-29
	int32_t v12 = __asm_lwbrx(v10, (int32_t)&v11); // 0x8ba10
	v11 = v12;
	int32_t v13;                                     // bp-20
	int32_t v14 = v12 + (int32_t)&v13;               // 0x8ba1c
	unsigned char v15 = *(char *)v14;                // 0x8ba1c
	unsigned char v16 = *(char *)(v14 + 1);          // 0x8ba1c
	int32_t v17 = 256 * (int16_t)v16 | (int16_t)v15; // 0x8ba24
	v13 = v17;
	int32_t v18;                                   // bp-18
	int32_t v19 = __asm_lwbrx(v17, (int32_t)&v18); // 0x8ba2c
	v18 = v19;
	v3 = __asm_lwbrx(v19, (int32_t)&v3);
	return NetSendHiPri(v2, 30);
}

// Address range: 0x8ba58 - 0x8bc38
int32_t function_8ba58(int32_t a1, char a2, int32_t a3, int32_t a4)
{
	char v1 = a2;                                                      // bp-24
	int32_t v2 = *(int32_t *)(g23 - 0x77a8);                           // 0x8ba74
	int32_t v3 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v2; // 0x8ba84
	int32_t v4;                                                        // bp-17
	int16_t v5;                                                        // bp-19
	int16_t v6;                                                        // bp-8
	int32_t v7;                                                        // 0x8bb74
	if (*(int32_t *)(v3 + 0x553c) == 23) {
		char v8 = *(char *)(v3 + 0x5418); // 0x8ba98
		char v9 = *(char *)(v3 + 0x5419); // 0x8ba9c
		v5 = (int16_t)v9 | 256 * (int16_t)v8;
		unsigned char v10 = *(char *)(v3 + 0x541a); // 0x8bab4
		char v11 = *(char *)(v3 + 0x541b);          // 0x8bab8
		char v12 = *(char *)(v3 + 0x541c);          // 0x8babc
		char v13 = *(char *)(v3 + 0x541d);          // 0x8bac8
		v4 = 0x10000 * (int32_t)v11 | 0x1000000 * (int32_t)v10 | 256 * (int32_t)v12 | (int32_t)v13;
		char v14 = *(char *)(v3 + 0x5423);       // 0x8bb18
		int32_t v15 = *(int32_t *)(v3 + 0x5494); // 0x8bb1c
		int32_t v16 = *(int32_t *)(v3 + 0x5498); // 0x8bb24
		v6 = 64 * v15 + 0xfb40 | 256 * (int32_t)v14 | v16;
		unsigned char v17 = *(char *)(v3 + 0x5424); // 0x8bb40
		char v18 = *(char *)(v3 + 0x5425);          // 0x8bb44
		char v19 = *(char *)(v3 + 0x5426);          // 0x8bb48
		char v20 = *(char *)(v3 + 0x5427);          // 0x8bb54
		v7 = 0x10000 * (int32_t)v18 | 0x1000000 * (int32_t)v17 | 256 * (int32_t)v19 | (int32_t)v20;
		// branch -> 0x8bbc0
	} else {
		// 0x8bb80
		v5 = *(int16_t *)(v3 + 0x53d8);
		v4 = *(int32_t *)(v3 + 0x53d4);
		v6 = (int16_t) * (int32_t *)(v3 + 0x5498);
		// branch -> 0x8bbc0
	}
	// 0x8bbc0
	int16_t v21;
	int16_t v22;
	int32_t v23 = (int32_t)&v5 + (int32_t)(v22 | 256 * v21);    // 0x8bbd0
	unsigned char v24 = *(char *)(v23 + 1);                     // 0x8bbd0
	int16_t v25 = 256 * (int16_t)v24 | (int16_t) * (char *)v23; // 0x8bbd0
	v5 = v25;
	int32_t v26 = __asm_lwbrx((int32_t)v25, (int32_t)&v4); // 0x8bbe0
	v4 = v26;
	int32_t v27 = v26 + (int32_t)&v6;                           // 0x8bbec
	unsigned char v28 = *(char *)(v27 + 1);                     // 0x8bbec
	int16_t v29 = 256 * (int16_t)v28 | (int16_t) * (char *)v27; // 0x8bbec
	v6 = v29;
	v7 = __asm_lwbrx((int32_t)v29, (int32_t)&v7);
	int32_t v30 = &v1; // 0x8bc1c
	int32_t result;
	if (a1 == 0) {
		// 0x8bc1c
		result = NetSendLoPri(v30, 22);
		// branch -> 0x8bc28
	} else {
		// 0x8bc0c
		result = NetSendHiPri(v30, 22);
		// branch -> 0x8bc28
	}
	// 0x8bc28
	return result;
}

// Address range: 0x8bc38 - 0x8bce4
int32_t function_8bc38(int32_t a1, char a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);                           // 0x8bc48
	char v2 = 48;                                                      // bp-24
	int32_t v3 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v1; // 0x8bc6c
	int32_t v4 = *(int32_t *)(v3 + 0x553c);                            // bp-22
	int32_t v5 = (int32_t) * (int16_t *)(v3 + 0x53d8);                 // bp-20
	int32_t v6 = *(int32_t *)(v3 + 0x53d4);                            // bp-18
	int32_t v7 = *(int32_t *)(v3 + 0x540c) + (int32_t)&v4;             // 0x8bc90
	unsigned char v8 = *(char *)v7;                                    // 0x8bc90
	unsigned char v9 = *(char *)(v7 + 1);                              // 0x8bc90
	int32_t v10 = 256 * (int16_t)v9 | (int16_t)v8;                     // 0x8bc94
	v4 = v10;
	int32_t v11 = v10 + (int32_t)&v5;                // 0x8bc9c
	unsigned char v12 = *(char *)v11;                // 0x8bc9c
	unsigned char v13 = *(char *)(v11 + 1);          // 0x8bc9c
	int32_t v14 = 256 * (int16_t)v13 | (int16_t)v12; // 0x8bca0
	v5 = v14;
	v6 = __asm_lwbrx(v14, (int32_t)&v6);
	int32_t v15 = &v2; // 0x8bcc8
	int32_t result;
	if (a1 == 0) {
		// 0x8bcc8
		result = NetSendLoPri(v15, 11);
		// branch -> 0x8bcd4
	} else {
		// 0x8bcb8
		result = NetSendHiPri(v15, 11);
		// branch -> 0x8bcd4
	}
	// 0x8bcd4
	return result;
}

// Address range: 0x8bce4 - 0x8bd30
int32_t function_8bce4(int32_t a1, char a2)
{
	char v1 = 49;     // bp-8
	int32_t v2 = &v1; // 0x8bd14
	int32_t result;
	if (a1 == 0) {
		// 0x8bd14
		result = NetSendLoPri(v2, 2);
		// branch -> 0x8bd20
	} else {
		// 0x8bd04
		result = NetSendHiPri(v2, 2);
		// branch -> 0x8bd20
	}
	// 0x8bd20
	return result;
}

// Address range: 0x8bd30 - 0x8bf14
int32_t function_8bd30(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7690) + 368 * a2; // 0x8bd48
	char v2 = 52;                                       // bp-24
	int32_t v3;                                         // bp-17
	int16_t v4;                                         // bp-19
	int16_t v5;                                         // bp-8
	int32_t v6;                                         // 0x8be50
	if (*(int32_t *)(v1 + 360) == 23) {
		char v7 = *(char *)(v1 + 68); // 0x8bd74
		char v8 = *(char *)(v1 + 69); // 0x8bd78
		v4 = (int16_t)v8 | 256 * (int16_t)v7;
		unsigned char v9 = *(char *)(v1 + 70); // 0x8bd90
		char v10 = *(char *)(v1 + 71);         // 0x8bd94
		char v11 = *(char *)(v1 + 72);         // 0x8bd98
		char v12 = *(char *)(v1 + 73);         // 0x8bda4
		v3 = 0x10000 * (int32_t)v10 | 0x1000000 * (int32_t)v9 | 256 * (int32_t)v11 | (int32_t)v12;
		char v13 = *(char *)(v1 + 79);        // 0x8bdf4
		int32_t v14 = *(int32_t *)(v1 + 192); // 0x8bdf8
		int32_t v15 = *(int32_t *)(v1 + 196); // 0x8be00
		v5 = 64 * v14 + 0xfb40 | 256 * (int32_t)v13 | v15;
		unsigned char v16 = *(char *)(v1 + 80); // 0x8be1c
		char v17 = *(char *)(v1 + 81);          // 0x8be20
		char v18 = *(char *)(v1 + 82);          // 0x8be24
		char v19 = *(char *)(v1 + 83);          // 0x8be30
		v6 = 0x10000 * (int32_t)v17 | 0x1000000 * (int32_t)v16 | 256 * (int32_t)v18 | (int32_t)v19;
		// branch -> 0x8be9c
	} else {
		// 0x8be5c
		v4 = *(int16_t *)(v1 + 4);
		v3 = *(int32_t *)v1;
		v5 = (int16_t) * (int32_t *)(v1 + 196);
		// branch -> 0x8be9c
	}
	// 0x8be9c
	int16_t v20;
	int16_t v21;
	int32_t v22 = (int32_t)&v4 + (int32_t)(v21 | 256 * v20);    // 0x8beac
	unsigned char v23 = *(char *)(v22 + 1);                     // 0x8beac
	int16_t v24 = 256 * (int16_t)v23 | (int16_t) * (char *)v22; // 0x8beac
	v4 = v24;
	int32_t v25 = __asm_lwbrx((int32_t)v24, (int32_t)&v3); // 0x8bebc
	v3 = v25;
	int32_t v26 = v25 + (int32_t)&v5;                           // 0x8bec8
	unsigned char v27 = *(char *)(v26 + 1);                     // 0x8bec8
	int16_t v28 = 256 * (int16_t)v27 | (int16_t) * (char *)v26; // 0x8bec8
	v5 = v28;
	v6 = __asm_lwbrx((int32_t)v28, (int32_t)&v6);
	int32_t v29 = &v2; // 0x8bef8
	int32_t result;
	if (a1 == 0) {
		// 0x8bef8
		result = NetSendLoPri(v29, 22);
		// branch -> 0x8bf04
	} else {
		// 0x8bee8
		result = NetSendHiPri(v29, 22);
		// branch -> 0x8bf04
	}
	// 0x8bf04
	return result;
}

// Address range: 0x8bf14 - 0x8c028
int32_t function_8bf14(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);             // 0x8bf14
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x8bf2c
	char v3 = *(char *)*(int32_t *)(g23 - 0x72bc);       // 0x8bf30
	int32_t v4;                                          // 0x8c018
	int32_t v5;                                          // 0x8c01c
	if (*(char *)(v1 + 29) != 0) {
		// 0x8bf38
		if (*(char *)(v1 + 315) == 0) {
			// 0x8bf44
			if (*(int32_t *)(v1 + 52) == a1) {
				// 0x8bf50
				v4 = 0;
				if (v2 == 0) {
					// 0x8bf58
					if (v3 != 0) {
						// 0x8bf60
						if (*(char *)(v1 + 0x5609) != 0) {
							// 0x8bf74
							if (*(char *)(v1 + 0x5727) == 0) {
								// 0x8bf80
								if (*(int32_t *)(v1 + 0x5620) == a1) {
									// 0x8bf8c
									v4 = 1;
									if (v2 == 1) {
										// 0x8bf94
										if (v3 != 0) {
											// 0x8bf9c
											if (*(char *)(v1 + 0xabf5) != 0) {
												// 0x8bfb0
												if (*(char *)(v1 + 0xad13) == 0) {
													// 0x8bfbc
													if (*(int32_t *)(v1 + 0xac0c) == a1) {
														// 0x8bfc8
														v4 = 2;
														if (v2 == 2) {
															// 0x8bfd0
															if (v3 != 0) {
																// 0x8bfd8
																if (*(char *)(v1 + 0x101e1) != 0) {
																	// 0x8bfec
																	if (*(char *)(v1 + 0x102ff) == 0) {
																		// 0x8bff8
																		if (*(int32_t *)(v1 + 0x101f8) == a1) {
																			// 0x8c004
																			v4 = 3;
																			if (v2 == 3) {
																				// 0x8c00c
																				if (v3 != 0) {
																					// 0x8c014
																					v4 = 4;
																					// branch -> 0x8c018
																				} else {
																					v4 = 3;
																				}
																			}
																			// 0x8c018
																			v5 = llvm_ctlz_i32(v2 - v4, true);
																			return __asm_rlwinm(v5, 27, 24, 31);
																		}
																	}
																}
																// 0x8c014
																v4 = 4;
																// branch -> 0x8c018
															} else {
																v4 = 2;
															}
														}
														// 0x8c018
														v5 = llvm_ctlz_i32(v2 - v4, true);
														return __asm_rlwinm(v5, 27, 24, 31);
													}
												}
											}
											// 0x8bfd8
											if (*(char *)(v1 + 0x101e1) != 0) {
												// 0x8bfec
												if (*(char *)(v1 + 0x102ff) == 0) {
													// 0x8bff8
													if (*(int32_t *)(v1 + 0x101f8) == a1) {
														// 0x8c004
														v4 = 3;
														if (v2 == 3) {
															// 0x8c00c
															if (v3 != 0) {
																// 0x8c014
																v4 = 4;
																// branch -> 0x8c018
															} else {
																v4 = 3;
															}
														}
														// 0x8c018
														v5 = llvm_ctlz_i32(v2 - v4, true);
														return __asm_rlwinm(v5, 27, 24, 31);
													}
												}
											}
											// 0x8c014
											v4 = 4;
											// branch -> 0x8c018
										} else {
											v4 = 1;
										}
									}
									// 0x8c018
									v5 = llvm_ctlz_i32(v2 - v4, true);
									return __asm_rlwinm(v5, 27, 24, 31);
								}
							}
						}
						// 0x8bf9c
						if (*(char *)(v1 + 0xabf5) != 0) {
							// 0x8bfb0
							if (*(char *)(v1 + 0xad13) == 0) {
								// 0x8bfbc
								if (*(int32_t *)(v1 + 0xac0c) == a1) {
									// 0x8bfc8
									v4 = 2;
									if (v2 == 2) {
										// 0x8bfd0
										if (v3 != 0) {
											// 0x8bfd8
											if (*(char *)(v1 + 0x101e1) != 0) {
												// 0x8bfec
												if (*(char *)(v1 + 0x102ff) == 0) {
													// 0x8bff8
													if (*(int32_t *)(v1 + 0x101f8) == a1) {
														// 0x8c004
														v4 = 3;
														if (v2 == 3) {
															// 0x8c00c
															if (v3 != 0) {
																// 0x8c014
																v4 = 4;
																// branch -> 0x8c018
															} else {
																v4 = 3;
															}
														}
														// 0x8c018
														v5 = llvm_ctlz_i32(v2 - v4, true);
														return __asm_rlwinm(v5, 27, 24, 31);
													}
												}
											}
											// 0x8c014
											v4 = 4;
											// branch -> 0x8c018
										} else {
											v4 = 2;
										}
									}
									// 0x8c018
									v5 = llvm_ctlz_i32(v2 - v4, true);
									return __asm_rlwinm(v5, 27, 24, 31);
								}
							}
						}
						// 0x8bfd8
						if (*(char *)(v1 + 0x101e1) != 0) {
							// 0x8bfec
							if (*(char *)(v1 + 0x102ff) == 0) {
								// 0x8bff8
								if (*(int32_t *)(v1 + 0x101f8) == a1) {
									// 0x8c004
									v4 = 3;
									if (v2 == 3) {
										// 0x8c00c
										if (v3 != 0) {
											// 0x8c014
											v4 = 4;
											// branch -> 0x8c018
										} else {
											v4 = 3;
										}
									}
									// 0x8c018
									v5 = llvm_ctlz_i32(v2 - v4, true);
									return __asm_rlwinm(v5, 27, 24, 31);
								}
							}
						}
						// 0x8c014
						v4 = 4;
						// branch -> 0x8c018
					} else {
						v4 = 0;
					}
				}
				// 0x8c018
				v5 = llvm_ctlz_i32(v2 - v4, true);
				return __asm_rlwinm(v5, 27, 24, 31);
			}
		}
	}
	// 0x8bf60
	if (*(char *)(v1 + 0x5609) != 0) {
		// 0x8bf74
		if (*(char *)(v1 + 0x5727) == 0) {
			// 0x8bf80
			if (*(int32_t *)(v1 + 0x5620) == a1) {
				// 0x8bf8c
				v4 = 1;
				if (v2 == 1) {
					// 0x8bf94
					if (v3 != 0) {
						// 0x8bf9c
						if (*(char *)(v1 + 0xabf5) != 0) {
							// 0x8bfb0
							if (*(char *)(v1 + 0xad13) == 0) {
								// 0x8bfbc
								if (*(int32_t *)(v1 + 0xac0c) == a1) {
									// 0x8bfc8
									v4 = 2;
									if (v2 == 2) {
										// 0x8bfd0
										if (v3 != 0) {
											// 0x8bfd8
											if (*(char *)(v1 + 0x101e1) != 0) {
												// 0x8bfec
												if (*(char *)(v1 + 0x102ff) == 0) {
													// 0x8bff8
													if (*(int32_t *)(v1 + 0x101f8) == a1) {
														// 0x8c004
														v4 = 3;
														if (v2 == 3) {
															// 0x8c00c
															if (v3 != 0) {
																// 0x8c014
																v4 = 4;
																// branch -> 0x8c018
															} else {
																v4 = 3;
															}
														}
														// 0x8c018
														v5 = llvm_ctlz_i32(v2 - v4, true);
														return __asm_rlwinm(v5, 27, 24, 31);
													}
												}
											}
											// 0x8c014
											v4 = 4;
											// branch -> 0x8c018
										} else {
											v4 = 2;
										}
									}
									// 0x8c018
									v5 = llvm_ctlz_i32(v2 - v4, true);
									return __asm_rlwinm(v5, 27, 24, 31);
								}
							}
						}
						// 0x8bfd8
						if (*(char *)(v1 + 0x101e1) != 0) {
							// 0x8bfec
							if (*(char *)(v1 + 0x102ff) == 0) {
								// 0x8bff8
								if (*(int32_t *)(v1 + 0x101f8) == a1) {
									// 0x8c004
									v4 = 3;
									if (v2 == 3) {
										// 0x8c00c
										if (v3 != 0) {
											// 0x8c014
											v4 = 4;
											// branch -> 0x8c018
										} else {
											v4 = 3;
										}
									}
									// 0x8c018
									v5 = llvm_ctlz_i32(v2 - v4, true);
									return __asm_rlwinm(v5, 27, 24, 31);
								}
							}
						}
						// 0x8c014
						v4 = 4;
						// branch -> 0x8c018
					} else {
						v4 = 1;
					}
				}
				// 0x8c018
				v5 = llvm_ctlz_i32(v2 - v4, true);
				return __asm_rlwinm(v5, 27, 24, 31);
			}
		}
	}
	// 0x8bf9c
	if (*(char *)(v1 + 0xabf5) != 0) {
		// 0x8bfb0
		if (*(char *)(v1 + 0xad13) == 0) {
			// 0x8bfbc
			if (*(int32_t *)(v1 + 0xac0c) == a1) {
				// 0x8bfc8
				v4 = 2;
				if (v2 == 2) {
					// 0x8bfd0
					if (v3 != 0) {
						// 0x8bfd8
						if (*(char *)(v1 + 0x101e1) != 0) {
							// 0x8bfec
							if (*(char *)(v1 + 0x102ff) == 0) {
								// 0x8bff8
								if (*(int32_t *)(v1 + 0x101f8) == a1) {
									// 0x8c004
									v4 = 3;
									if (v2 == 3) {
										// 0x8c00c
										if (v3 != 0) {
											// 0x8c014
											v4 = 4;
											// branch -> 0x8c018
										} else {
											v4 = 3;
										}
									}
									// 0x8c018
									v5 = llvm_ctlz_i32(v2 - v4, true);
									return __asm_rlwinm(v5, 27, 24, 31);
								}
							}
						}
						// 0x8c014
						v4 = 4;
						// branch -> 0x8c018
					} else {
						v4 = 2;
					}
				}
				// 0x8c018
				v5 = llvm_ctlz_i32(v2 - v4, true);
				return __asm_rlwinm(v5, 27, 24, 31);
			}
		}
	}
	// 0x8bfd8
	if (*(char *)(v1 + 0x101e1) != 0) {
		// 0x8bfec
		if (*(char *)(v1 + 0x102ff) == 0) {
			// 0x8bff8
			if (*(int32_t *)(v1 + 0x101f8) == a1) {
				// 0x8c004
				v4 = 3;
				if (v2 == 3) {
					// 0x8c00c
					if (v3 != 0) {
						// 0x8c014
						v4 = 4;
						// branch -> 0x8c018
					} else {
						v4 = 3;
					}
				}
				// 0x8c018
				v5 = llvm_ctlz_i32(v2 - v4, true);
				return __asm_rlwinm(v5, 27, 24, 31);
			}
		}
	}
	// 0x8c014
	// branch -> 0x8c018
	// 0x8c018
	v5 = llvm_ctlz_i32(v2 - 4, true);
	return __asm_rlwinm(v5, 27, 24, 31);
}

// Address range: 0x8c028 - 0x8c084
int32_t function_8c028(int32_t a1, char a2, int32_t a3)
{
	char v1 = 50; // bp-8
	a3 = __asm_lwbrx(50, (int32_t)&a3);
	int32_t v2 = &v1; // 0x8c068
	int32_t result;
	if (a1 == 0) {
		// 0x8c068
		result = NetSendLoPri(v2, 6);
		// branch -> 0x8c074
	} else {
		// 0x8c058
		result = NetSendHiPri(v2, 6);
		// branch -> 0x8c074
	}
	// 0x8c074
	return result;
}

// Address range: 0x8c084 - 0x8c0f0
int32_t NetSendCmdString(int32_t a1, int32_t a2)
{
	g34 = a2;
	char v1 = 78;                // bp-104
	int32_t v2 = CPrintString(); // r31
	g37 = a2;
	int32_t v3; // bp-103
	g34 = &v3;
	strcpy();
	return function_903d8(a1, (int32_t)&v1, v2 + 2);
}

// Address range: 0x8c0f0 - 0x8c158
int32_t SendPlrMsg(int32_t a1, int32_t a2)
{
	g35 = a2;
	g33 = a1;
	g34 = a2 + 1;
	int32_t v1 = CPrintString(); // 0x8c114
	g36 = v1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 0) {
		// 0x8c12c
		function_ab880((char)g33, g35 + 1);
		v1 = g36;
		// branch -> 0x8c138
	}
	// 0x8c138
	return v1 + 2;
}

// Address range: 0x8c158 - 0x8c184
int32_t function_8c158(int32_t a1, char a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = 5 * a1;                     // 0x8c158
	int32_t v2 = *(int32_t *)(g23 - 0x5c7c); // 0x8c15c
	*(char *)(v2 + v1) = a2;
	int32_t result = v1 + v2; // 0x8c164
	*(char *)(result + 1) = (char)a3;
	*(char *)(result + 2) = (char)a4;
	*(char *)(result + 3) = (char)a5;
	*(char *)(result + 4) = (char)a6;
	*(char *)(g23 - 0x4d30) = (char)1;
	return result;
}

// Address range: 0x8c184 - 0x8c1c4
int32_t RemovePlrPortal(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x5c7c) + 5 * a1; // 0x8c19c
	g34 = v1;
	int32_t result = memset(v1, 5, 255); // r3
	int32_t v2;
	*(char *)(v2 - 0x4d30) = 1;
	return result;
}

// Address range: 0x8c1c4 - 0x8c208
int32_t check_update_plr(int32_t result)
{
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// branch -> 0x8c1f8
	} else {
		if (result == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
			// 0x8c1f0
			result = pfile_update(1);
			// branch -> 0x8c1f8
		}
	}
	// 0x8c1f8
	return result;
}

// Address range: 0x8c208 - 0x8c278
int32_t msg_errorf(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x8c208
	g34 = a1;
	int32_t v1 = GetTickCount(); // 0x8c234
	int32_t v2;
	int32_t *v3 = (int32_t *)(v2 - 0x4d44); // 0x8c23c
	int32_t result;                         // 0x8c274
	if (v1 - *v3 >= 0x1388) {
		// 0x8c24c
		*v3 = v1;
		int32_t v4;       // bp-264
		int32_t v5 = &v4; // 0x8c258
		function_e62a4(v5, g34, (int32_t)&a2);
		result = function_ab774(v5);
		// branch -> 0x8c268
	} else {
		result = v1;
	}
	// 0x8c268
	return result;
}

// Address range: 0x8c278 - 0x8c2a4
int32_t function_8c278(int32_t a1, int32_t a2)
{
	// 0x8c278
	return function_be424(a2, (char *)a1);
}

// Address range: 0x8c2a4 - 0x8c338
int32_t function_8c2a4(int32_t a1, int32_t a2)
{
	g35 = a2;
	g33 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8c318
		return 3;
	}
	int32_t v1 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8c2e0
	int32_t v2 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a2;       // 0x8c2e4
	g36 = v2;
	if (v1 == *(int32_t *)(v2 + 52)) {
		// 0x8c2f4
		ClrPlrPath(a2);
		int32_t v3 = g33;                          // 0x8c2fc
		int32_t v4 = (int32_t) * (char *)(v3 + 1); // 0x8c2fc
		MakePlrPath(g35, v4, (int32_t) * (char *)(v3 + 2), 1);
		*(int32_t *)(g36 + 32) = -1;
		// branch -> 0x8c318
	}
	// 0x8c318
	return 3;
}

// Address range: 0x8c338 - 0x8c3b0
int32_t On_ADDSTR(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8c358
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8c39c
		// 0x8c39c
		// branch -> 0x8c3a0
	} else {
		int32_t v1 = a1 + 1;                  // 0x8c36c
		int32_t v2 = 2 * v1;                  // 0x8c370
		unsigned char v3 = *(char *)v2;       // 0x8c370
		unsigned char v4 = *(char *)(v2 | 1); // 0x8c370
		*(int16_t *)v1 = 256 * (int16_t)v4 | (int16_t)v3;
		uint16_t v5 = *(int16_t *)(a1 + 1); // 0x8c37c
		if (v5 < 257) {
			// 0x8c390
			g37 = v5;
			ModifyPlrStr(a2);
			// branch -> 0x8c39c
			// 0x8c39c
			// branch -> 0x8c3a0
		}
	}
	// 0x8c3a0
	return 3;
}

// Address range: 0x8c3b0 - 0x8c428
int32_t On_ADDMAG(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8c3d0
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8c414
		// 0x8c414
		// branch -> 0x8c418
	} else {
		int32_t v1 = a1 + 1;                  // 0x8c3e4
		int32_t v2 = 2 * v1;                  // 0x8c3e8
		unsigned char v3 = *(char *)v2;       // 0x8c3e8
		unsigned char v4 = *(char *)(v2 | 1); // 0x8c3e8
		*(int16_t *)v1 = 256 * (int16_t)v4 | (int16_t)v3;
		uint16_t v5 = *(int16_t *)(a1 + 1); // 0x8c3f4
		if (v5 < 257) {
			// 0x8c408
			ModifyPlrMag(a2, (int32_t)v5);
			// branch -> 0x8c414
			// 0x8c414
			// branch -> 0x8c418
		}
	}
	// 0x8c418
	return 3;
}

// Address range: 0x8c428 - 0x8c4a0
int32_t On_ADDDEX(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8c448
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8c48c
		// 0x8c48c
		// branch -> 0x8c490
	} else {
		int32_t v1 = a1 + 1;                  // 0x8c45c
		int32_t v2 = 2 * v1;                  // 0x8c460
		unsigned char v3 = *(char *)v2;       // 0x8c460
		unsigned char v4 = *(char *)(v2 | 1); // 0x8c460
		*(int16_t *)v1 = 256 * (int16_t)v4 | (int16_t)v3;
		uint16_t v5 = *(int16_t *)(a1 + 1); // 0x8c46c
		if (v5 < 257) {
			// 0x8c480
			ModifyPlrDex(a2, (int32_t)v5);
			// branch -> 0x8c48c
			// 0x8c48c
			// branch -> 0x8c490
		}
	}
	// 0x8c490
	return 3;
}

// Address range: 0x8c4a0 - 0x8c518
int32_t On_ADDVIT(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8c4c0
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8c504
		// 0x8c504
		// branch -> 0x8c508
	} else {
		int32_t v1 = a1 + 1;                  // 0x8c4d4
		int32_t v2 = 2 * v1;                  // 0x8c4d8
		unsigned char v3 = *(char *)v2;       // 0x8c4d8
		unsigned char v4 = *(char *)(v2 | 1); // 0x8c4d8
		*(int16_t *)v1 = 256 * (int16_t)v4 | (int16_t)v3;
		uint16_t v5 = *(int16_t *)(a1 + 1); // 0x8c4e4
		if (v5 < 257) {
			// 0x8c4f8
			ModifyPlrVit(a2, (int32_t)v5);
			// branch -> 0x8c504
			// 0x8c504
			// branch -> 0x8c508
		}
	}
	// 0x8c508
	return 3;
}

// Address range: 0x8c518 - 0x8c5c8
int32_t On_SBSPELL(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x8c524
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8c5b8
		return 3;
	}
	int32_t v2 = a1 + 1;                                     // 0x8c538
	int32_t v3 = 2 * v2;                                     // 0x8c53c
	unsigned char v4 = *(char *)(v3 | 1);                    // 0x8c53c
	int16_t v5 = 256 * (int16_t)v4 | (int16_t) * (char *)v3; // 0x8c53c
	int32_t v6 = *(int32_t *)(g23 - 0x77e4);                 // 0x8c540
	*(int16_t *)v2 = v5;
	int32_t v7 = (int32_t) * (int16_t *)(a1 + 1); // 0x8c550
	if (*(char *)v6 == 0) {
		// 0x8c55c
		if (*(int32_t *)(*(int32_t *)(g23 - 0x769c) + 56 * v7 + 24) == 0) {
			// 0x8c574
			msg_errorf(*(int32_t *)(g23 - 0x5c98), v1 + 316 + 0x55ec * a2, v6, v1);
			// branch -> 0x8c5b8
			// 0x8c5b8
			return 3;
		}
	}
	int32_t v8 = 0x55ec * a2 + v1; // 0x8c594
	*(int32_t *)(v8 + 164) = v7;
	*(char *)(v8 + 168) = *(char *)(v8 + 192);
	*(char *)(v8 + 169) = (char)1;
	*(int32_t *)(v8 + 32) = 12;
	// branch -> 0x8c5b8
	// 0x8c5b8
	return 3;
}

// Address range: 0x8c5c8 - 0x8c660
int32_t function_8c5c8(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8c644
		return 5;
	}
	int32_t v1 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8c5fc
	int32_t v2 = 0x55ec * a2 + *(int32_t *)(g23 - 0x77a8);       // 0x8c600
	g36 = v2;
	if (v1 == *(int32_t *)(v2 + 52)) {
		int32_t v3 = a1 + 3;                  // 0x8c610
		int32_t v4 = 2 * v3;                  // 0x8c614
		unsigned char v5 = *(char *)v4;       // 0x8c614
		unsigned char v6 = *(char *)(v4 | 1); // 0x8c614
		*(int16_t *)v3 = 256 * (int16_t)v6 | (int16_t)v5;
		int32_t v7 = (int32_t) * (char *)(a1 + 1); // 0x8c628
		MakePlrPath(a2, v7, (int32_t) * (char *)(a1 + 2), 0);
		*(int32_t *)(g36 + 32) = 15;
		*(int32_t *)(g36 + 36) = (int32_t) * (int16_t *)(g35 + 3);
		// branch -> 0x8c644
	}
	// 0x8c644
	return 5;
}

// Address range: 0x8c660 - 0x8c7f0
int32_t On_REQUESTGITEM(int32_t a1, int32_t a2)
{
	// 0x8c660
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8c7d4
		return 30;
	}
	int32_t v1 = a1 + 7;                                     // 0x8c690
	int32_t v2 = 2 * v1;                                     // 0x8c694
	unsigned char v3 = *(char *)(v2 | 1);                    // 0x8c694
	int16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8c694
	*(int16_t *)v1 = v4;
	int32_t v5 = 2 * (a1 + 9);                               // 0x8c6a4
	unsigned char v6 = *(char *)(v5 | 1);                    // 0x8c6a4
	int16_t v7 = 256 * (int16_t)v6 | (int16_t) * (char *)v5; // 0x8c6a4
	int32_t v8 = a1 + 11;                                    // 0x8c6a8
	*(int16_t *)(a1 + 9) = v7;
	*(int32_t *)(a1 + 11) = __asm_lwbrx(v8, v8);
	int32_t v9 = 2 * (a1 + 20);                                // 0x8c6c0
	unsigned char v10 = *(char *)(v9 | 1);                     // 0x8c6c0
	int16_t v11 = 256 * (int16_t)v10 | (int16_t) * (char *)v9; // 0x8c6c0
	int32_t v12 = a1 + 22;                                     // 0x8c6c4
	*(int16_t *)(a1 + 20) = v11;
	int32_t v13 = __asm_lwbrx(v12, v12); // 0x8c6d0
	int32_t v14 = a1 + 26;               // 0x8c6d4
	*(int32_t *)(a1 + 22) = v13;
	int32_t v15 = __asm_lwbrx(v14, v14);      // 0x8c6dc
	int32_t v16 = *(int32_t *)(g23 - 0x77a8); // 0x8c6e4
	*(int32_t *)(a1 + 26) = v15;
	if (function_8bf14(*(int32_t *)(0x55ec * a2 + v16 + 52), v15) == 0) {
		// 0x8c7d4
		return 30;
	}
	int32_t v17 = (int32_t) * (int16_t *)(a1 + 9); // 0x8c704
	uint16_t v18 = *(int16_t *)(a1 + 7);           // 0x8c708
	if (function_64a9c(*(int32_t *)(a1 + 11), v17, (int32_t)v18) == 0) {
		// 0x8c7d4
		return 30;
	}
	int32_t v19 = g35;                                              // 0x8c720
	int32_t v20 = (int32_t) * (int16_t *)(v19 + 7);                 // 0x8c720
	int32_t v21 = (int32_t) * (int16_t *)(v19 + 9);                 // 0x8c724
	int32_t v22 = FindGetItem(v20, v21, *(int32_t *)(v19 + 11)); // 0x8c72c
	g33 = v22;
	uint32_t v23 = *(int32_t *)g36; // 0x8c7a8
	int32_t v24 = g35;              // 0x8c7ac
	if (v22 == -1) {
		unsigned char v25 = *(char *)(v24 + 2); // 0x8c7b0
		if (NetSendCmdReq2(39, (char)v23, (int32_t)v25, v24) == 0) {
			// 0x8c7c8
			NetSendCmdExtra(g35);
			// branch -> 0x8c7d4
		}
	} else {
		unsigned char v26 = *(char *)(v24 + 2); // 0x8c744
		function_8b7a4(0, 8, (char)v23, (int32_t)v26, v24);
		int32_t v27 = g35;                           // 0x8c758
		int32_t v28 = (int32_t) * (char *)(v27 + 2); // 0x8c758
		if (v28 == *(int32_t *)g36) {
			// 0x8c788
			function_59aa8(v28, g33);
			// branch -> 0x8c790
		} else {
			int32_t v29 = (int32_t) * (char *)(v27 + 5); // 0x8c768
			int32_t v30 = (int32_t) * (char *)(v27 + 6); // 0x8c770
			uint16_t v31 = *(int16_t *)(v27 + 7);        // 0x8c774
			uint16_t v32 = *(int16_t *)(v27 + 9);        // 0x8c778
			int32_t v33 = *(int32_t *)(v27 + 11);        // 0x8c77c
			function_5a384(v29, v30, (int32_t)v31, (int32_t)v32, v33, 3);
			// branch -> 0x8c790
		}
		uint16_t v34 = *(int16_t *)(g35 + 7); // 0x8c798
		function_64b54(*(int32_t *)(g35 + 11), *(int16_t *)(g35 + 9), (int32_t)v34);
		// branch -> 0x8c7d4
	}
	// 0x8c7d4
	return 30;
}

// Address range: 0x8c7f0 - 0x8c9d4
int32_t function_8c7f0(int32_t a1, int32_t a2)
{
	g35 = *(int32_t *)(g23 - 0x77a8);
	g36 = *(int32_t *)(g23 - 0x77ac);
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8c828
		g38 = 30;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8c9b0
		// 0x8c9b0
		return 30;
	}
	// 0x8c83c
	g33 = a1;
	int32_t v1 = a1 + 7;                                     // 0x8c840
	int32_t v2 = 2 * v1;                                     // 0x8c844
	unsigned char v3 = *(char *)(v2 | 1);                    // 0x8c844
	int16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8c844
	*(int16_t *)v1 = v4;
	int32_t v5 = 2 * (a1 + 9);                               // 0x8c854
	unsigned char v6 = *(char *)(v5 | 1);                    // 0x8c854
	int16_t v7 = 256 * (int16_t)v6 | (int16_t) * (char *)v5; // 0x8c854
	int32_t v8 = g33 + 11;                                   // 0x8c858
	*(int16_t *)(a1 + 9) = v7;
	*(int32_t *)(a1 + 11) = __asm_lwbrx(v8, v8);
	int32_t v9 = 2 * (g33 + 20);                               // 0x8c870
	unsigned char v10 = *(char *)(v9 | 1);                     // 0x8c870
	int16_t v11 = 256 * (int16_t)v10 | (int16_t) * (char *)v9; // 0x8c870
	int32_t v12 = g33 + 22;                                    // 0x8c874
	*(int16_t *)(a1 + 20) = v11;
	int32_t v13 = __asm_lwbrx(v12, v12); // 0x8c880
	int32_t v14 = g33 + 26;              // 0x8c884
	*(int32_t *)(a1 + 22) = v13;
	*(int32_t *)(a1 + 26) = __asm_lwbrx(v14, v14);
	int32_t v15 = (int32_t) * (int16_t *)(a1 + 7);                 // 0x8c894
	int32_t v16 = (int32_t) * (int16_t *)(a1 + 9);                 // 0x8c898
	int32_t v17 = FindGetItem(v15, v16, *(int32_t *)(a1 + 11)); // 0x8c8a0
	int32_t v18 = g33;                                             // 0x8c8a4
	g32 = v17;
	if (delta_get_item(v18, (int32_t) * (char *)(v18 + 4)) == 0) {
		int32_t v19 = g33;                           // 0x8c998
		int32_t v20 = (int32_t) * (char *)(v19 + 2); // 0x8c9a0
		function_8b7a4(1, 8, *(char *)(v19 + 1), v20, v19);
		// branch -> 0x8c9b0
	} else {
		int32_t v21 = g33;                              // 0x8c8c0
		unsigned char v22 = *(char *)(v21 + 4);         // 0x8c8c0
		char v23 = *(char *)*(int32_t *)(g23 - 0x77e4); // 0x8c8c4
		int32_t v24;                                    // 0x8c8e4
		if (v23 == v22) {
			// 0x8c8bc
			v24 = g36;
			// branch -> 0x8c8e0
		} else {
			int32_t v25 = g36; // 0x8c8d4
			if ((int32_t) * (char *)(v21 + 2) != *(int32_t *)v25) {
				// 0x8c9b0
				return 30;
			}
			v24 = v25;
		}
		int32_t v26 = *(int32_t *)v24; // 0x8c8e4
		if ((int32_t) * (char *)(v21 + 1) != v26) {
			// 0x8c8f0
			if ((int32_t) * (char *)(v21 + 2) != v26) {
				int32_t v27 = (int32_t) * (char *)(v21 + 5);    // 0x8c978
				int32_t v28 = (int32_t) * (char *)(v21 + 6);    // 0x8c980
				int32_t v29 = (int32_t) * (int16_t *)(v21 + 9); // 0x8c988
				int32_t v30 = *(int32_t *)(v21 + 11);           // 0x8c98c
				function_5a384(v27, v28, (int32_t) * (int16_t *)(v21 + 7), v29, v30, 4);
				// branch -> 0x8c9b0
				// 0x8c9b0
				return 30;
			}
			// 0x8c8fc
			if (v23 == v22) {
				// 0x8c96c
				function_59aa8(v26, g32);
				// branch -> 0x8c9b0
			} else {
				int32_t v31 = (int32_t) * (char *)(v21 + 17);    // 0x8c904
				int32_t v32 = g35 + 0x55ec * v26;                // 0x8c910
				int32_t v33 = (int32_t) * (char *)(v21 + 18);    // 0x8c914
				int32_t v34 = (int32_t) * (char *)(v21 + 19);    // 0x8c91c
				int32_t v35 = (int32_t) * (int16_t *)(v21 + 20); // 0x8c924
				int32_t v36 = *(int32_t *)(v21 + 22);            // 0x8c92c
				int32_t v37 = *(int32_t *)(v32 + 56);            // 0x8c934
				int32_t v38 = *(int32_t *)(v32 + 60);            // 0x8c938
				int32_t v39 = (int32_t) * (int16_t *)(v21 + 7);  // 0x8c93c
				uint16_t v40 = *(int16_t *)(v21 + 9);            // 0x8c940
				int32_t v41 = *(int32_t *)(v21 + 11);            // 0x8c944
				unsigned char v42 = *(char *)(v21 + 15);         // 0x8c948
				g13 = (int32_t) * (char *)(v21 + 16);
				int32_t v43 = function_5aae8(v26, v37, v38, v39, (int32_t)v40, v41, (int32_t)v42, v31, v33, v34, v35, v36); // 0x8c950
				if (v43 != -1) {
					// 0x8c960
					function_59aa8(*(int32_t *)g36, v43);
					// branch -> 0x8c9b0
				}
			}
			// 0x8c9b0
			return 30;
		}
	}
	// 0x8c9b0
	return 30;
}

// Address range: 0x8c9d4 - 0x8ca6c
int32_t function_8c9d4(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8ca50
		return 5;
	}
	int32_t v1 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8ca08
	int32_t v2 = 0x55ec * a2 + *(int32_t *)(g23 - 0x77a8);       // 0x8ca0c
	g36 = v2;
	if (v1 == *(int32_t *)(v2 + 52)) {
		int32_t v3 = a1 + 3;                  // 0x8ca1c
		int32_t v4 = 2 * v3;                  // 0x8ca20
		unsigned char v5 = *(char *)v4;       // 0x8ca20
		unsigned char v6 = *(char *)(v4 | 1); // 0x8ca20
		*(int16_t *)v3 = 256 * (int16_t)v6 | (int16_t)v5;
		int32_t v7 = (int32_t) * (char *)(a1 + 1); // 0x8ca34
		MakePlrPath(a2, v7, (int32_t) * (char *)(a1 + 2), 0);
		*(int32_t *)(g36 + 32) = 16;
		*(int32_t *)(g36 + 36) = (int32_t) * (int16_t *)(g35 + 3);
		// branch -> 0x8ca50
	}
	// 0x8ca50
	return 5;
}

// Address range: 0x8ca6c - 0x8cbf0
int32_t On_REQUESTAGITEM(int32_t a1, int32_t a2)
{
	// 0x8ca6c
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8cbd8
		return 30;
	}
	int32_t v1 = a1 + 7;                                     // 0x8ca98
	int32_t v2 = 2 * v1;                                     // 0x8ca9c
	unsigned char v3 = *(char *)(v2 | 1);                    // 0x8ca9c
	int16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8ca9c
	*(int16_t *)v1 = v4;
	int32_t v5 = 2 * (a1 + 9);                               // 0x8caac
	unsigned char v6 = *(char *)(v5 | 1);                    // 0x8caac
	int16_t v7 = 256 * (int16_t)v6 | (int16_t) * (char *)v5; // 0x8caac
	int32_t v8 = a1 + 11;                                    // 0x8cab0
	*(int16_t *)(a1 + 9) = v7;
	*(int32_t *)(a1 + 11) = __asm_lwbrx(v8, v8);
	int32_t v9 = 2 * (a1 + 20);                                // 0x8cac8
	unsigned char v10 = *(char *)(v9 | 1);                     // 0x8cac8
	int16_t v11 = 256 * (int16_t)v10 | (int16_t) * (char *)v9; // 0x8cac8
	int32_t v12 = a1 + 22;                                     // 0x8cacc
	*(int16_t *)(a1 + 20) = v11;
	int32_t v13 = __asm_lwbrx(v12, v12); // 0x8cad8
	int32_t v14 = a1 + 26;               // 0x8cadc
	*(int32_t *)(a1 + 22) = v13;
	int32_t v15 = __asm_lwbrx(v14, v14);      // 0x8cae4
	int32_t v16 = *(int32_t *)(g23 - 0x77a8); // 0x8caec
	*(int32_t *)(a1 + 26) = v15;
	if (function_8bf14(*(int32_t *)(0x55ec * a2 + v16 + 52), v15) == 0) {
		// 0x8cbd8
		return 30;
	}
	int32_t v17 = (int32_t) * (int16_t *)(a1 + 9); // 0x8cb0c
	uint16_t v18 = *(int16_t *)(a1 + 7);           // 0x8cb10
	if (function_64a9c(*(int32_t *)(a1 + 11), v17, (int32_t)v18) == 0) {
		// 0x8cbd8
		return 30;
	}
	int32_t v19 = g35;                                              // 0x8cb28
	int32_t v20 = (int32_t) * (int16_t *)(v19 + 7);                 // 0x8cb28
	int32_t v21 = (int32_t) * (int16_t *)(v19 + 9);                 // 0x8cb2c
	int32_t v22 = FindGetItem(v20, v21, *(int32_t *)(v19 + 11)); // 0x8cb34
	uint32_t v23 = *(int32_t *)g36;                                 // 0x8cbac
	int32_t v24 = g35;                                              // 0x8cbb0
	if (v22 == -1) {
		unsigned char v25 = *(char *)(v24 + 2); // 0x8cbb4
		if (NetSendCmdReq2(40, (char)v23, (int32_t)v25, v24) == 0) {
			// 0x8cbcc
			NetSendCmdExtra(g35);
			// branch -> 0x8cbd8
		}
	} else {
		unsigned char v26 = *(char *)(v24 + 2); // 0x8cb48
		function_8b7a4(0, 9, (char)v23, (int32_t)v26, v24);
		int32_t v27 = g35;                           // 0x8cb5c
		int32_t v28 = (int32_t) * (char *)(v27 + 2); // 0x8cb5c
		if (v28 == *(int32_t *)g36) {
			// 0x8cb8c
			AutoGetItem(v28, (int32_t) * (char *)(v27 + 3));
			// branch -> 0x8cb94
		} else {
			int32_t v29 = (int32_t) * (char *)(v27 + 5); // 0x8cb6c
			int32_t v30 = (int32_t) * (char *)(v27 + 6); // 0x8cb74
			uint16_t v31 = *(int16_t *)(v27 + 7);        // 0x8cb78
			uint16_t v32 = *(int16_t *)(v27 + 9);        // 0x8cb7c
			int32_t v33 = *(int32_t *)(v27 + 11);        // 0x8cb80
			function_5a384(v29, v30, (int32_t)v31, (int32_t)v32, v33, 5);
			// branch -> 0x8cb94
		}
		uint16_t v34 = *(int16_t *)(g35 + 7); // 0x8cb9c
		function_64b54(*(int32_t *)(g35 + 11), *(int16_t *)(g35 + 9), (int32_t)v34);
		// branch -> 0x8cbd8
	}
	// 0x8cbd8
	return 30;
}

// Address range: 0x8cbf0 - 0x8cdc8
int32_t On_AGETITEM(int32_t a1, int32_t a2)
{
	g35 = *(int32_t *)(g23 - 0x77a8);
	g36 = *(int32_t *)(g23 - 0x77ac);
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8cc24
		g38 = 30;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8cda8
		// 0x8cda8
		return 30;
	}
	// 0x8cc38
	g33 = a1;
	int32_t v1 = a1 + 7;                                     // 0x8cc3c
	int32_t v2 = 2 * v1;                                     // 0x8cc40
	unsigned char v3 = *(char *)(v2 | 1);                    // 0x8cc40
	int16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8cc40
	*(int16_t *)v1 = v4;
	int32_t v5 = 2 * (a1 + 9);                               // 0x8cc50
	unsigned char v6 = *(char *)(v5 | 1);                    // 0x8cc50
	int16_t v7 = 256 * (int16_t)v6 | (int16_t) * (char *)v5; // 0x8cc50
	int32_t v8 = g33 + 11;                                   // 0x8cc54
	*(int16_t *)(a1 + 9) = v7;
	*(int32_t *)(a1 + 11) = __asm_lwbrx(v8, v8);
	int32_t v9 = 2 * (g33 + 20);                               // 0x8cc6c
	unsigned char v10 = *(char *)(v9 | 1);                     // 0x8cc6c
	int16_t v11 = 256 * (int16_t)v10 | (int16_t) * (char *)v9; // 0x8cc6c
	int32_t v12 = g33 + 22;                                    // 0x8cc70
	*(int16_t *)(a1 + 20) = v11;
	int32_t v13 = __asm_lwbrx(v12, v12); // 0x8cc7c
	int32_t v14 = g33 + 26;              // 0x8cc80
	*(int32_t *)(a1 + 22) = v13;
	*(int32_t *)(a1 + 26) = __asm_lwbrx(v14, v14);
	int32_t v15 = (int32_t) * (int16_t *)(a1 + 7); // 0x8cc90
	int32_t v16 = (int32_t) * (int16_t *)(a1 + 9); // 0x8cc94
	FindGetItem(v15, v16, *(int32_t *)(a1 + 11));
	int32_t v17 = g33; // 0x8cca0
	if (delta_get_item(v17, (int32_t) * (char *)(v17 + 4)) == 0) {
		int32_t v18 = g33;                           // 0x8cd90
		int32_t v19 = (int32_t) * (char *)(v18 + 2); // 0x8cd98
		function_8b7a4(1, 9, *(char *)(v18 + 1), v19, v18);
		// branch -> 0x8cda8
	} else {
		int32_t v20 = g33;                              // 0x8ccb8
		unsigned char v21 = *(char *)(v20 + 4);         // 0x8ccb8
		char v22 = *(char *)*(int32_t *)(g23 - 0x77e4); // 0x8ccbc
		int32_t v23;                                    // 0x8ccdc
		if (v22 == v21) {
			// 0x8ccb4
			v23 = g36;
			// branch -> 0x8ccd8
		} else {
			int32_t v24 = g36; // 0x8cccc
			if ((int32_t) * (char *)(v20 + 2) != *(int32_t *)v24) {
				// 0x8cda8
				return 30;
			}
			v23 = v24;
		}
		int32_t v25 = *(int32_t *)v23; // 0x8ccdc
		if ((int32_t) * (char *)(v20 + 1) != v25) {
			// 0x8cce8
			if ((int32_t) * (char *)(v20 + 2) != v25) {
				int32_t v26 = (int32_t) * (char *)(v20 + 5);    // 0x8cd70
				int32_t v27 = (int32_t) * (char *)(v20 + 6);    // 0x8cd78
				int32_t v28 = (int32_t) * (int16_t *)(v20 + 9); // 0x8cd80
				int32_t v29 = *(int32_t *)(v20 + 11);           // 0x8cd84
				function_5a384(v26, v27, (int32_t) * (int16_t *)(v20 + 7), v28, v29, 6);
				// branch -> 0x8cda8
				// 0x8cda8
				return 30;
			}
			// 0x8ccf4
			if (v22 == v21) {
				// 0x8cd64
				AutoGetItem(v25, (int32_t) * (char *)(v20 + 3));
				// branch -> 0x8cda8
			} else {
				int32_t v30 = (int32_t) * (char *)(v20 + 17);    // 0x8ccfc
				int32_t v31 = g35 + 0x55ec * v25;                // 0x8cd08
				int32_t v32 = (int32_t) * (char *)(v20 + 18);    // 0x8cd0c
				int32_t v33 = (int32_t) * (char *)(v20 + 19);    // 0x8cd14
				int32_t v34 = (int32_t) * (int16_t *)(v20 + 20); // 0x8cd1c
				int32_t v35 = *(int32_t *)(v20 + 22);            // 0x8cd24
				int32_t v36 = *(int32_t *)(v31 + 56);            // 0x8cd2c
				int32_t v37 = *(int32_t *)(v31 + 60);            // 0x8cd30
				int32_t v38 = (int32_t) * (int16_t *)(v20 + 7);  // 0x8cd34
				uint16_t v39 = *(int16_t *)(v20 + 9);            // 0x8cd38
				int32_t v40 = *(int32_t *)(v20 + 11);            // 0x8cd3c
				unsigned char v41 = *(char *)(v20 + 15);         // 0x8cd40
				g13 = (int32_t) * (char *)(v20 + 16);
				int32_t v42 = function_5aae8(v25, v36, v37, v38, (int32_t)v39, v40, (int32_t)v41, v30, v32, v33, v34, v35); // 0x8cd48
				if (v42 != -1) {
					// 0x8cd58
					AutoGetItem(*(int32_t *)g36, v42);
					// branch -> 0x8cda8
				}
			}
			// 0x8cda8
			return 30;
		}
	}
	// 0x8cda8
	return 30;
}

// Address range: 0x8cdc8 - 0x8cec4
int32_t function_8cdc8(int32_t a1, int32_t a2)
{
	g35 = a2;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8cdf4
		g38 = 30;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8cea8
	} else {
		// 0x8ce08
		g36 = a1;
		int32_t v1 = a1 + 7;                                     // 0x8ce0c
		int32_t v2 = 2 * v1;                                     // 0x8ce10
		unsigned char v3 = *(char *)(v2 | 1);                    // 0x8ce10
		int16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8ce10
		*(int16_t *)v1 = v4;
		int32_t v5 = 2 * (a1 + 9);                               // 0x8ce20
		unsigned char v6 = *(char *)(v5 | 1);                    // 0x8ce20
		int16_t v7 = 256 * (int16_t)v6 | (int16_t) * (char *)v5; // 0x8ce20
		int32_t v8 = g36 + 11;                                   // 0x8ce24
		*(int16_t *)(a1 + 9) = v7;
		*(int32_t *)(a1 + 11) = __asm_lwbrx(v8, v8);
		int32_t v9 = 2 * (g36 + 20);                               // 0x8ce3c
		unsigned char v10 = *(char *)(v9 | 1);                     // 0x8ce3c
		int16_t v11 = 256 * (int16_t)v10 | (int16_t) * (char *)v9; // 0x8ce3c
		int32_t v12 = g36 + 22;                                    // 0x8ce40
		*(int16_t *)(a1 + 20) = v11;
		int32_t v13 = __asm_lwbrx(v12, v12); // 0x8ce4c
		int32_t v14 = g36 + 26;              // 0x8ce50
		*(int32_t *)(a1 + 22) = v13;
		*(int32_t *)(a1 + 26) = __asm_lwbrx(v14, v14);
		delta_get_item(g36, (int32_t) * (char *)(a1 + 4));
		int32_t v15 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8ce7c
		if (v15 == *(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * g35 + 52)) {
			int32_t v16 = g36;                              // 0x8ce8c
			int32_t v17 = (int32_t) * (char *)(v16 + 5);    // 0x8ce8c
			int32_t v18 = (int32_t) * (char *)(v16 + 6);    // 0x8ce94
			int32_t v19 = (int32_t) * (int16_t *)(v16 + 9); // 0x8ce9c
			int32_t v20 = *(int32_t *)(v16 + 11);           // 0x8cea0
			function_5a384(v17, v18, (int32_t) * (int16_t *)(v16 + 7), v19, v20, 7);
			// branch -> 0x8cea8
		}
	}
	// 0x8cea8
	return 30;
}

// Address range: 0x8cec4 - 0x8d078
int32_t function_8cec4(int32_t a1, int32_t a2)
{
	g36 = *(int32_t *)(g23 - 0x7690);
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8cef4
		g38 = 22;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8d060
		// 0x8d060
		// branch -> 0x8d064
		// 0x8d064
		return 22;
	}
	// 0x8cf08
	g33 = a1;
	int32_t v1 = a1 + 3;                                     // 0x8cf0c
	int32_t v2 = 2 * v1;                                     // 0x8cf10
	unsigned char v3 = *(char *)(v2 | 1);                    // 0x8cf10
	int16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8cf10
	*(int16_t *)v1 = v4;
	int32_t v5 = 2 * (a1 + 5);                               // 0x8cf20
	unsigned char v6 = *(char *)(v5 | 1);                    // 0x8cf20
	int16_t v7 = 256 * (int16_t)v6 | (int16_t) * (char *)v5; // 0x8cf20
	int32_t v8 = g33 + 7;                                    // 0x8cf24
	*(int16_t *)(a1 + 5) = v7;
	*(int32_t *)(a1 + 7) = __asm_lwbrx(v8, v8);
	int32_t v9 = 2 * (g33 + 16);                               // 0x8cf3c
	unsigned char v10 = *(char *)(v9 | 1);                     // 0x8cf3c
	int16_t v11 = 256 * (int16_t)v10 | (int16_t) * (char *)v9; // 0x8cf3c
	int32_t v12 = g33 + 18;                                    // 0x8cf40
	*(int16_t *)(a1 + 16) = v11;
	*(int32_t *)(a1 + 18) = __asm_lwbrx(v12, v12);
	int32_t v13 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8cf60
	if (v13 == *(int32_t *)(0x55ec * a2 + *(int32_t *)(g23 - 0x77a8) + 52)) {
		int32_t v14 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x8cf74
		int32_t v15 = g33;                                    // 0x8cf80
		int32_t v16;
		if (a2 == v14) {
			int32_t v17 = (int32_t) * (char *)(v15 + 1); // 0x8cf80
			v16 = function_5a824(v14, v17, (int32_t) * (char *)(v15 + 2));
			// branch -> 0x8cfe8
		} else {
			int32_t v18 = (int32_t) * (char *)(v15 + 13);    // 0x8cf98
			int32_t v19 = (int32_t) * (char *)(v15 + 14);    // 0x8cfa4
			int32_t v20 = (int32_t) * (char *)(v15 + 15);    // 0x8cfac
			int32_t v21 = (int32_t) * (int16_t *)(v15 + 16); // 0x8cfb4
			int32_t v22 = *(int32_t *)(v15 + 18);            // 0x8cfbc
			int32_t v23 = (int32_t) * (char *)(v15 + 1);     // 0x8cfc4
			unsigned char v24 = *(char *)(v15 + 2);          // 0x8cfc8
			int32_t v25 = (int32_t) * (int16_t *)(v15 + 3);  // 0x8cfcc
			int32_t v26 = (int32_t) * (int16_t *)(v15 + 5);  // 0x8cfd0
			int32_t v27 = *(int32_t *)(v15 + 7);             // 0x8cfd4
			unsigned char v28 = *(char *)(v15 + 11);         // 0x8cfd8
			g13 = (int32_t) * (char *)(v15 + 12);
			v16 = function_5aae8(a2, v23, (int32_t)v24, v25, v26, v27, (int32_t)v28, v18, v19, v20, v21, v22);
			// branch -> 0x8cfe8
		}
		// 0x8cfe8
		if (v16 != -1) {
			int32_t v29 = g33;                              // 0x8cff0
			int32_t v30 = *(int32_t *)(v29 + 7);            // 0x8cff0
			int32_t v31 = (int32_t) * (int16_t *)(v29 + 5); // 0x8cff4
			PutItemRecord(v30, v31, (int32_t) * (int16_t *)(v29 + 3));
			int32_t v32 = g36 + 368 * g30;        // 0x8d008
			int32_t v33 = *(int32_t *)(v32 + 12); // 0x8d00c
			int32_t v34 = *(int32_t *)g31 % 256;  // 0x8d018
			function_8a8b0(g33, (char)v33, *(int32_t *)(v32 + 16), v34);
			check_update_plr(g32);
			// branch -> 0x8d064
		}
	} else {
		int32_t v35 = g33;                              // 0x8d030
		int32_t v36 = (int32_t) * (int16_t *)(v35 + 5); // 0x8d034
		uint16_t v37 = *(int16_t *)(v35 + 3);           // 0x8d038
		PutItemRecord(*(int32_t *)(v35 + 7), v36, (int32_t)v37);
		uint32_t v38 = *(int32_t *)g31;         // 0x8d040
		int32_t v39 = g33;                      // 0x8d044
		unsigned char v40 = *(char *)(v39 + 1); // 0x8d048
		function_8a8b0(v39, v40, (int32_t) * (char *)(v39 + 2), v38 % 256);
		check_update_plr(g32);
		// branch -> 0x8d060
		// 0x8d060
		// branch -> 0x8d064
	}
	// 0x8d064
	return 22;
}

// Address range: 0x8d078 - 0x8d204
int32_t function_8d078(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x8d088
	g36 = *(int32_t *)(g23 - 0x7690);
	int32_t v2 = a2; // r28
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8d0a8
		g38 = 22;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8d1ec
		// 0x8d1ec
		// branch -> 0x8d1f0
		// 0x8d1f0
		return 22;
	}
	// 0x8d0bc
	g33 = a1;
	int32_t v3 = a1 + 3;                                     // 0x8d0c0
	int32_t v4 = 2 * v3;                                     // 0x8d0c4
	unsigned char v5 = *(char *)(v4 | 1);                    // 0x8d0c4
	int16_t v6 = 256 * (int16_t)v5 | (int16_t) * (char *)v4; // 0x8d0c4
	*(int16_t *)v3 = v6;
	int32_t v7 = 2 * (a1 + 5);                               // 0x8d0d4
	unsigned char v8 = *(char *)(v7 | 1);                    // 0x8d0d4
	int16_t v9 = 256 * (int16_t)v8 | (int16_t) * (char *)v7; // 0x8d0d4
	int32_t v10 = g33 + 7;                                   // 0x8d0d8
	*(int16_t *)(a1 + 5) = v9;
	*(int32_t *)(a1 + 7) = __asm_lwbrx(v10, v10);
	int32_t v11 = 2 * (g33 + 16);                               // 0x8d0f0
	unsigned char v12 = *(char *)(v11 | 1);                     // 0x8d0f0
	int16_t v13 = 256 * (int16_t)v12 | (int16_t) * (char *)v11; // 0x8d0f0
	int32_t v14 = g33 + 18;                                     // 0x8d0f4
	*(int16_t *)(a1 + 16) = v13;
	*(int32_t *)(a1 + 18) = __asm_lwbrx(v14, v14);
	int32_t v15 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8d114
	int32_t v16 = g33;                                            // 0x8d124
	if (v15 == *(int32_t *)(0x55ec * v2 + v1 + 52)) {
		int32_t v17 = (int32_t) * (char *)(v16 + 13);    // 0x8d124
		int32_t v18 = (int32_t) * (char *)(v16 + 14);    // 0x8d130
		int32_t v19 = (int32_t) * (char *)(v16 + 15);    // 0x8d138
		int32_t v20 = (int32_t) * (int16_t *)(v16 + 16); // 0x8d140
		int32_t v21 = *(int32_t *)(v16 + 18);            // 0x8d148
		int32_t v22 = (int32_t) * (char *)(v16 + 1);     // 0x8d150
		unsigned char v23 = *(char *)(v16 + 2);          // 0x8d154
		int32_t v24 = (int32_t) * (int16_t *)(v16 + 3);  // 0x8d158
		int32_t v25 = (int32_t) * (int16_t *)(v16 + 5);  // 0x8d15c
		int32_t v26 = *(int32_t *)(v16 + 7);             // 0x8d160
		unsigned char v27 = *(char *)(v16 + 11);         // 0x8d164
		g13 = (int32_t) * (char *)(v16 + 12);
		if (function_5aae8(v2, v22, (int32_t)v23, v24, v25, v26, (int32_t)v27, v17, v18, v19, v20, v21) != -1) {
			int32_t v28 = g33;                              // 0x8d17c
			int32_t v29 = *(int32_t *)(v28 + 7);            // 0x8d17c
			int32_t v30 = (int32_t) * (int16_t *)(v28 + 5); // 0x8d180
			PutItemRecord(v29, v30, (int32_t) * (int16_t *)(v28 + 3));
			int32_t v31 = g36 + 368 * g31;        // 0x8d194
			int32_t v32 = *(int32_t *)(v31 + 12); // 0x8d198
			int32_t v33 = *(int32_t *)g30 % 256;  // 0x8d1a4
			function_8a8b0(g33, (char)v32, *(int32_t *)(v31 + 16), v33);
			check_update_plr(g32);
			// branch -> 0x8d1f0
		}
	} else {
		int32_t v34 = (int32_t) * (int16_t *)(v16 + 5); // 0x8d1c0
		uint16_t v35 = *(int16_t *)(v16 + 3);           // 0x8d1c4
		PutItemRecord(*(int32_t *)(v16 + 7), v34, (int32_t)v35);
		uint32_t v36 = *(int32_t *)g30;         // 0x8d1cc
		int32_t v37 = g33;                      // 0x8d1d0
		unsigned char v38 = *(char *)(v37 + 1); // 0x8d1d4
		function_8a8b0(v37, v38, (int32_t) * (char *)(v37 + 2), v36 % 256);
		check_update_plr(g32);
		// branch -> 0x8d1ec
		// 0x8d1ec
		// branch -> 0x8d1f0
	}
	// 0x8d1f0
	return 22;
}

// Address range: 0x8d204 - 0x8d354
int32_t function_8d204(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8d234
		g38 = 22;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8d334
	} else {
		// 0x8d248
		g36 = a1;
		int32_t v1 = a1 + 3;                                     // 0x8d24c
		int32_t v2 = 2 * v1;                                     // 0x8d250
		unsigned char v3 = *(char *)(v2 | 1);                    // 0x8d250
		int16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8d250
		*(int16_t *)v1 = v4;
		int32_t v5 = 2 * (a1 + 5);                               // 0x8d260
		unsigned char v6 = *(char *)(v5 | 1);                    // 0x8d260
		int16_t v7 = 256 * (int16_t)v6 | (int16_t) * (char *)v5; // 0x8d260
		int32_t v8 = g36 + 7;                                    // 0x8d264
		*(int16_t *)(a1 + 5) = v7;
		*(int32_t *)(a1 + 7) = __asm_lwbrx(v8, v8);
		int32_t v9 = 2 * (g36 + 16);                               // 0x8d27c
		unsigned char v10 = *(char *)(v9 | 1);                     // 0x8d27c
		int16_t v11 = 256 * (int16_t)v10 | (int16_t) * (char *)v9; // 0x8d27c
		int32_t v12 = g36 + 18;                                    // 0x8d280
		*(int16_t *)(a1 + 16) = v11;
		*(int32_t *)(a1 + 18) = __asm_lwbrx(v12, v12);
		int32_t v13 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8d2a0
		if (v13 == *(int32_t *)(0x55ec * a2 + *(int32_t *)(g23 - 0x77a8) + 52)) {
			if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				int32_t v14 = g36;                               // 0x8d2c0
				int32_t v15 = (int32_t) * (char *)(v14 + 13);    // 0x8d2c0
				int32_t v16 = (int32_t) * (char *)(v14 + 14);    // 0x8d2cc
				int32_t v17 = (int32_t) * (char *)(v14 + 15);    // 0x8d2d4
				int32_t v18 = (int32_t) * (int16_t *)(v14 + 16); // 0x8d2dc
				int32_t v19 = *(int32_t *)(v14 + 18);            // 0x8d2e4
				int32_t v20 = (int32_t) * (char *)(v14 + 1);     // 0x8d2ec
				unsigned char v21 = *(char *)(v14 + 2);          // 0x8d2f0
				int32_t v22 = (int32_t) * (int16_t *)(v14 + 3);  // 0x8d2f4
				int32_t v23 = (int32_t) * (int16_t *)(v14 + 5);  // 0x8d2f8
				int32_t v24 = *(int32_t *)(v14 + 7);             // 0x8d2fc
				unsigned char v25 = *(char *)(v14 + 11);         // 0x8d300
				g13 = (int32_t) * (char *)(v14 + 12);
				function_5aae8(a2, v20, (int32_t)v21, v22, v23, v24, (int32_t)v25, v15, v16, v17, v18, v19);
				// branch -> 0x8d30c
			}
		}
		int32_t v26 = g36;                              // 0x8d30c
		int32_t v27 = (int32_t) * (int16_t *)(v26 + 5); // 0x8d310
		uint16_t v28 = *(int16_t *)(v26 + 3);           // 0x8d314
		PutItemRecord(*(int32_t *)(v26 + 7), v27, (int32_t)v28);
		uint32_t v29 = *(int32_t *)g35;         // 0x8d31c
		int32_t v30 = g36;                      // 0x8d320
		unsigned char v31 = *(char *)(v30 + 1); // 0x8d324
		function_8a8b0(v30, v31, (int32_t) * (char *)(v30 + 2), v29 % 256);
		// branch -> 0x8d334
	}
	// 0x8d334
	return 22;
}

// Address range: 0x8d354 - 0x8d3e4
int32_t function_8d354(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8d3c8
		return 3;
	}
	int32_t v1 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8d38c
	int32_t v2 = 0x55ec * a2 + *(int32_t *)(g23 - 0x77a8);       // 0x8d390
	g36 = v2;
	if (v1 == *(int32_t *)(v2 + 52)) {
		int32_t v3 = (int32_t) * (char *)(a1 + 1); // 0x8d3a0
		MakePlrPath(a2, v3, (int32_t) * (char *)(a1 + 2), 0);
		*(int32_t *)(g36 + 32) = 9;
		*(int32_t *)(g36 + 36) = (int32_t) * (char *)(g35 + 1);
		*(int32_t *)(g36 + 40) = (int32_t) * (char *)(g35 + 2);
		// branch -> 0x8d3c8
	}
	// 0x8d3c8
	return 3;
}

// Address range: 0x8d3e4 - 0x8d468
int32_t function_8d3e4(int32_t a1, int32_t a2)
{
	// 0x8d3e4
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8d44c
		return 3;
	}
	int32_t v1 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8d418
	int32_t v2 = 0x55ec * a2 + *(int32_t *)(g23 - 0x77a8);       // 0x8d41c
	g36 = v2;
	if (v1 == *(int32_t *)(v2 + 52)) {
		// 0x8d42c
		ClrPlrPath(a2);
		*(int32_t *)(g36 + 32) = 9;
		*(int32_t *)(g36 + 36) = (int32_t) * (char *)(g35 + 1);
		*(int32_t *)(g36 + 40) = (int32_t) * (char *)(g35 + 2);
		// branch -> 0x8d44c
	}
	// 0x8d44c
	return 3;
}

// Address range: 0x8d468 - 0x8d4ec
int32_t function_8d468(int32_t a1, int32_t a2)
{
	// 0x8d468
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8d4d0
		return 3;
	}
	int32_t v1 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8d49c
	int32_t v2 = 0x55ec * a2 + *(int32_t *)(g23 - 0x77a8);       // 0x8d4a0
	g36 = v2;
	if (v1 == *(int32_t *)(v2 + 52)) {
		// 0x8d4b0
		ClrPlrPath(a2);
		*(int32_t *)(g36 + 32) = 10;
		*(int32_t *)(g36 + 36) = (int32_t) * (char *)(g35 + 1);
		*(int32_t *)(g36 + 40) = (int32_t) * (char *)(g35 + 2);
		// branch -> 0x8d4d0
	}
	// 0x8d4d0
	return 3;
}

// Address range: 0x8d4ec - 0x8d614
int32_t function_8d4ec(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x8d4fc
	g36 = v1;
	g33 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x8d508
	char *v3 = (char *)v2;                   // 0x8d508
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8d5f8
		return 9;
	}
	int32_t v4 = 0x55ec * a2; // 0x8d520
	g35 = v4;
	int32_t v5 = (int32_t)*v3; // 0x8d524
	if (v5 == *(int32_t *)(v4 + v1 + 52)) {
		int32_t v6 = a1 + 3;                                     // 0x8d538
		int32_t v7 = 2 * v6;                                     // 0x8d53c
		unsigned char v8 = *(char *)(v7 | 1);                    // 0x8d53c
		int16_t v9 = 256 * (int16_t)v8 | (int16_t) * (char *)v7; // 0x8d53c
		*(int16_t *)v6 = v9;
		int32_t v10 = 2 * (a1 + 5);                                 // 0x8d54c
		unsigned char v11 = *(char *)(v10 | 1);                     // 0x8d54c
		int16_t v12 = 256 * (int16_t)v11 | (int16_t) * (char *)v10; // 0x8d54c
		int32_t v13 = g33;                                          // 0x8d550
		*(int16_t *)(v13 + 5) = v12;
		int32_t v14 = 2 * (v13 + 7);                                // 0x8d55c
		unsigned char v15 = *(char *)(v14 | 1);                     // 0x8d55c
		int16_t v16 = 256 * (int16_t)v15 | (int16_t) * (char *)v14; // 0x8d55c
		*(int16_t *)(g33 + 7) = v16;
		int32_t v17 = (int32_t) * (int16_t *)(g33 + 3); // 0x8d56c
		if (*v3 == 0) {
			// 0x8d578
			if (*(int32_t *)(*(int32_t *)(g23 - 0x769c) + 56 * v17 + 24) == 0) {
				// 0x8d590
				msg_errorf(*(int32_t *)(g23 - 0x5c98), g36 + g35 + 316, v5, v2);
				// branch -> 0x8d5f8
				// 0x8d5f8
				return 9;
			}
		}
		// 0x8d5a8
		ClrPlrPath(a2);
		int32_t v18 = g35 + g36; // 0x8d5b0
		a2 = v18;
		*(int32_t *)(v18 + 32) = 26;
		*(int32_t *)(a2 + 36) = (int32_t) * (char *)(g33 + 1);
		*(int32_t *)(a2 + 40) = (int32_t) * (char *)(g33 + 2);
		*(int32_t *)(a2 + 44) = (int32_t) * (int16_t *)(g33 + 5);
		*(int32_t *)(a2 + 48) = (int32_t) * (int16_t *)(g33 + 7);
		*(int32_t *)(a2 + 164) = (int32_t) * (int16_t *)(g33 + 3);
		*(char *)(a2 + 168) = *(char *)(a2 + 184);
		*(char *)(a2 + 169) = (char)0;
		// branch -> 0x8d5f8
	}
	// 0x8d5f8
	return 9;
}

// Address range: 0x8d614 - 0x8d724
int32_t function_8d614(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x8d624
	g36 = v1;
	g33 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x8d630
	char *v3 = (char *)v2;                   // 0x8d630
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8d708
		return 7;
	}
	int32_t v4 = 0x55ec * a2; // 0x8d648
	g35 = v4;
	int32_t v5 = (int32_t)*v3; // 0x8d64c
	if (v5 == *(int32_t *)(v4 + v1 + 52)) {
		int32_t v6 = a1 + 3;                                     // 0x8d660
		int32_t v7 = 2 * v6;                                     // 0x8d664
		unsigned char v8 = *(char *)(v7 | 1);                    // 0x8d664
		int16_t v9 = 256 * (int16_t)v8 | (int16_t) * (char *)v7; // 0x8d664
		*(int16_t *)v6 = v9;
		int32_t v10 = 2 * (a1 + 5);                                 // 0x8d674
		unsigned char v11 = *(char *)(v10 | 1);                     // 0x8d674
		int16_t v12 = 256 * (int16_t)v11 | (int16_t) * (char *)v10; // 0x8d674
		*(int16_t *)(g33 + 5) = v12;
		int32_t v13 = (int32_t) * (int16_t *)(g33 + 3); // 0x8d684
		if (*v3 == 0) {
			// 0x8d690
			if (*(int32_t *)(*(int32_t *)(g23 - 0x769c) + 56 * v13 + 24) == 0) {
				// 0x8d6a8
				msg_errorf(*(int32_t *)(g23 - 0x5c98), g36 + g35 + 316, v5, v2);
				// branch -> 0x8d708
				// 0x8d708
				return 7;
			}
		}
		// 0x8d6c0
		ClrPlrPath(a2);
		int32_t v14 = g35 + g36; // 0x8d6c8
		a2 = v14;
		*(int32_t *)(v14 + 32) = 12;
		*(int32_t *)(a2 + 36) = (int32_t) * (char *)(g33 + 1);
		*(int32_t *)(a2 + 40) = (int32_t) * (char *)(g33 + 2);
		*(int32_t *)(a2 + 44) = (int32_t) * (int16_t *)(g33 + 5);
		*(int32_t *)(a2 + 164) = (int32_t) * (int16_t *)(g33 + 3);
		*(char *)(a2 + 168) = *(char *)(a2 + 184);
		*(char *)(a2 + 169) = (char)0;
		// branch -> 0x8d708
	}
	// 0x8d708
	return 7;
}

// Address range: 0x8d724 - 0x8d834
int32_t function_8d724(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x8d734
	g36 = v1;
	g33 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x8d740
	char *v3 = (char *)v2;                   // 0x8d740
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8d818
		return 7;
	}
	int32_t v4 = 0x55ec * a2; // 0x8d758
	g35 = v4;
	int32_t v5 = (int32_t)*v3; // 0x8d75c
	if (v5 == *(int32_t *)(v4 + v1 + 52)) {
		int32_t v6 = a1 + 3;                                     // 0x8d770
		int32_t v7 = 2 * v6;                                     // 0x8d774
		unsigned char v8 = *(char *)(v7 | 1);                    // 0x8d774
		int16_t v9 = 256 * (int16_t)v8 | (int16_t) * (char *)v7; // 0x8d774
		*(int16_t *)v6 = v9;
		int32_t v10 = 2 * (a1 + 5);                                 // 0x8d784
		unsigned char v11 = *(char *)(v10 | 1);                     // 0x8d784
		int16_t v12 = 256 * (int16_t)v11 | (int16_t) * (char *)v10; // 0x8d784
		*(int16_t *)(g33 + 5) = v12;
		int32_t v13 = (int32_t) * (int16_t *)(g33 + 3); // 0x8d794
		if (*v3 == 0) {
			// 0x8d7a0
			if (*(int32_t *)(*(int32_t *)(g23 - 0x769c) + 56 * v13 + 24) == 0) {
				// 0x8d7b8
				msg_errorf(*(int32_t *)(g23 - 0x5c98), g36 + g35 + 316, v5, v2);
				// branch -> 0x8d818
				// 0x8d818
				return 7;
			}
		}
		// 0x8d7d0
		ClrPlrPath(a2);
		int32_t v14 = g35 + g36; // 0x8d7d8
		a2 = v14;
		*(int32_t *)(v14 + 32) = 12;
		*(int32_t *)(a2 + 36) = (int32_t) * (char *)(g33 + 1);
		*(int32_t *)(a2 + 40) = (int32_t) * (char *)(g33 + 2);
		*(int32_t *)(a2 + 44) = (int32_t) * (int16_t *)(g33 + 5);
		*(int32_t *)(a2 + 164) = (int32_t) * (int16_t *)(g33 + 3);
		*(char *)(a2 + 168) = *(char *)(a2 + 176);
		*(char *)(a2 + 169) = (char)2;
		// branch -> 0x8d818
	}
	// 0x8d818
	return 7;
}

// Address range: 0x8d834 - 0x8d914
int32_t function_8d834(int32_t a1, int32_t a2)
{
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x8d848
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8d8f4
		return 5;
	}
	int32_t v2 = 0x55ec * a2; // 0x8d86c
	g33 = v2;
	int32_t v3 = *(int32_t *)(*(int32_t *)(g23 - 0x77a8) + v2 + 52); // 0x8d87c
	if ((int32_t) * (char *)*(int32_t *)(g23 - 0x77e4) == v3) {
		int32_t v4 = a1 + 3;                  // 0x8d888
		int32_t v5 = 2 * v4;                  // 0x8d88c
		unsigned char v6 = *(char *)v5;       // 0x8d88c
		unsigned char v7 = *(char *)(v5 | 1); // 0x8d88c
		*(int16_t *)v4 = 256 * (int16_t)v7 | (int16_t)v6;
		int32_t v8 = g36;                                        // 0x8d898
		int32_t v9 = v1 + 120 * (int32_t) * (int16_t *)(v8 + 3); // 0x8d8a0
		int32_t v10;                                             // 0x8d8e0
		if (*(int32_t *)(v9 + 56) == 0) {
			// 0x8d8b0
			if (*(int32_t *)(v9 + 76) == 0) {
				int32_t v11 = (int32_t) * (char *)(v8 + 1); // 0x8d8bc
				MakePlrPath(a2, v11, (int32_t) * (char *)(v8 + 2), 1);
				// branch -> 0x8d8e0
				// 0x8d8e0
				v10 = g33 + g35;
				*(int32_t *)(v10 + 32) = 13;
				*(int32_t *)(v10 + 36) = (int32_t) * (int16_t *)(g36 + 3);
				// branch -> 0x8d8f4
				// 0x8d8f4
				return 5;
			}
		}
		int32_t v12 = (int32_t) * (char *)(v8 + 1); // 0x8d8d0
		MakePlrPath(v12, (int32_t) * (char *)(v8 + 2), 0, 0);
		// branch -> 0x8d8e0
		// 0x8d8e0
		v10 = g33 + g35;
		*(int32_t *)(v10 + 32) = 13;
		*(int32_t *)(v10 + 36) = (int32_t) * (int16_t *)(g36 + 3);
		// branch -> 0x8d8f4
	}
	// 0x8d8f4
	return 5;
}

// Address range: 0x8d914 - 0x8d9f4
int32_t function_8d914(int32_t a1, int32_t a2)
{
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x8d928
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8d9d4
		return 5;
	}
	int32_t v2 = 0x55ec * a2; // 0x8d94c
	g33 = v2;
	int32_t v3 = *(int32_t *)(*(int32_t *)(g23 - 0x77a8) + v2 + 52); // 0x8d95c
	if ((int32_t) * (char *)*(int32_t *)(g23 - 0x77e4) == v3) {
		int32_t v4 = a1 + 3;                  // 0x8d968
		int32_t v5 = 2 * v4;                  // 0x8d96c
		unsigned char v6 = *(char *)v5;       // 0x8d96c
		unsigned char v7 = *(char *)(v5 | 1); // 0x8d96c
		*(int16_t *)v4 = 256 * (int16_t)v7 | (int16_t)v6;
		int32_t v8 = g36;                                        // 0x8d978
		int32_t v9 = v1 + 120 * (int32_t) * (int16_t *)(v8 + 3); // 0x8d980
		int32_t v10;                                             // 0x8d9c0
		if (*(int32_t *)(v9 + 56) == 0) {
			// 0x8d990
			if (*(int32_t *)(v9 + 76) == 0) {
				int32_t v11 = (int32_t) * (char *)(v8 + 1); // 0x8d99c
				MakePlrPath(a2, v11, (int32_t) * (char *)(v8 + 2), 1);
				// branch -> 0x8d9c0
				// 0x8d9c0
				v10 = g33 + g35;
				*(int32_t *)(v10 + 32) = 14;
				*(int32_t *)(v10 + 36) = (int32_t) * (int16_t *)(g36 + 3);
				// branch -> 0x8d9d4
				// 0x8d9d4
				return 5;
			}
		}
		int32_t v12 = (int32_t) * (char *)(v8 + 1); // 0x8d9b0
		MakePlrPath(v12, (int32_t) * (char *)(v8 + 2), 0, 0);
		// branch -> 0x8d9c0
		// 0x8d9c0
		v10 = g33 + g35;
		*(int32_t *)(v10 + 32) = 14;
		*(int32_t *)(v10 + 36) = (int32_t) * (int16_t *)(g36 + 3);
		// branch -> 0x8d9d4
	}
	// 0x8d9d4
	return 5;
}

// Address range: 0x8d9f4 - 0x8da4c
int32_t function_8d9f4(int32_t a1, int32_t a2)
{
	// 0x8d9f4
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8da44
		return 3;
	}
	int32_t v1 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a2; // 0x8da14
	int32_t v2 = *(int32_t *)(v1 + 52);                    // 0x8da18
	if ((int32_t) * (char *)*(int32_t *)(g23 - 0x77e4) == v2) {
		int32_t v3 = a1 + 1;                  // 0x8da24
		int32_t v4 = 2 * v3;                  // 0x8da28
		unsigned char v5 = *(char *)v4;       // 0x8da28
		unsigned char v6 = *(char *)(v4 | 1); // 0x8da28
		*(int16_t *)v3 = 256 * (int16_t)v6 | (int16_t)v5;
		*(int32_t *)(v1 + 32) = 18;
		*(int32_t *)(v1 + 36) = (int32_t) * (int16_t *)(a1 + 1);
		// branch -> 0x8da44
	}
	// 0x8da44
	return 3;
}

// Address range: 0x8da4c - 0x8db3c
int32_t function_8da4c(int32_t a1, int32_t a2)
{
	g30 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x8da5c
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x8da60
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8db24
		return 3;
	}
	int32_t v3 = 0x55ec * a2; // 0x8da7c
	g33 = v3;
	int32_t v4 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8da84
	int32_t v5 = v3 + v1;                                        // 0x8da88
	if (v4 == *(int32_t *)(v5 + 52)) {
		int32_t v6 = a1 + 1;                  // 0x8da98
		int32_t v7 = 2 * v6;                  // 0x8da9c
		unsigned char v8 = *(char *)v7;       // 0x8da9c
		unsigned char v9 = *(char *)(v7 | 1); // 0x8da9c
		int32_t v10 = v2 + 40;                // r28
		*(int16_t *)v6 = 256 * (int16_t)v9 | (int16_t)v8;
		int32_t v11 = (int32_t) * (int16_t *)(g30 + 1); // 0x8daac
		int32_t v12 = *(int32_t *)(v10 + 232 * v11);    // 0x8dab8
		g34 = *(int32_t *)(v5 + 56) - v12;
		int32_t v13 = v2 + 44; // 0x8dac8
		g36 = abs();
		int32_t v14 = *(int32_t *)(v13 + 232 * (int32_t) * (int16_t *)(g30 + 1)); // 0x8dad8
		g34 = *(int32_t *)(v5 + 60) - v14;
		int32_t v15 = abs(); // 0x8dae0
		int32_t v16;         // 0x8db00
		int32_t v17;         // 0x8db08
		if (g36 > 1) {
			// 0x8daf4
			v16 = 232 * (int32_t) * (int16_t *)(g30 + 1);
			v17 = *(int32_t *)(v13 + v16);
			MakePlrPath(a2, *(int32_t *)(v10 + v16), v17, 0);
			// branch -> 0x8db10
		} else {
			// 0x8daec
			if (v15 >= 2) {
				// 0x8daf4
				v16 = 232 * (int32_t) * (int16_t *)(g30 + 1);
				v17 = *(int32_t *)(v13 + v16);
				MakePlrPath(a2, *(int32_t *)(v10 + v16), v17, 0);
				// branch -> 0x8db10
			}
		}
		int32_t v18 = g33 + g35; // 0x8db10
		*(int32_t *)(v18 + 32) = 20;
		*(int32_t *)(v18 + 36) = (int32_t) * (int16_t *)(g30 + 1);
		// branch -> 0x8db24
	}
	// 0x8db24
	return 3;
}

// Address range: 0x8db3c - 0x8dbe0
int32_t function_8db3c(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x8db50
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8dbc4
		return 3;
	}
	int32_t v2 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8db70
	int32_t v3 = 0x55ec * a2 + v1;                               // 0x8db74
	g36 = v3;
	if (v2 == *(int32_t *)(v3 + 52)) {
		int32_t v4 = a1 + 1;                  // 0x8db84
		int32_t v5 = 2 * v4;                  // 0x8db88
		unsigned char v6 = *(char *)v5;       // 0x8db88
		unsigned char v7 = *(char *)(v5 | 1); // 0x8db88
		*(int16_t *)v4 = 256 * (int16_t)v7 | (int16_t)v6;
		int32_t v8 = v1 + 0x55ec * (int32_t) * (int16_t *)(a1 + 1); // 0x8dba4
		MakePlrPath(a2, *(int32_t *)(v8 + 64), *(int32_t *)(v8 + 68), 0);
		*(int32_t *)(g36 + 32) = 21;
		*(int32_t *)(g36 + 36) = (int32_t) * (int16_t *)(g35 + 1);
		// branch -> 0x8dbc4
	}
	// 0x8dbc4
	return 3;
}

// Address range: 0x8dbe0 - 0x8dc6c
int32_t function_8dbe0(int32_t a1, int32_t a2)
{
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8dc50
		return 3;
	}
	int32_t v1 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8dc14
	int32_t v2 = 0x55ec * a2 + *(int32_t *)(g23 - 0x77a8);       // 0x8dc18
	g36 = v2;
	if (v1 == *(int32_t *)(v2 + 52)) {
		int32_t v3 = a1 + 1;                  // 0x8dc28
		int32_t v4 = 2 * v3;                  // 0x8dc2c
		unsigned char v5 = *(char *)v4;       // 0x8dc2c
		unsigned char v6 = *(char *)(v4 | 1); // 0x8dc2c
		*(int16_t *)v3 = 256 * (int16_t)v6 | (int16_t)v5;
		ClrPlrPath(a2);
		*(int32_t *)(g36 + 32) = 22;
		*(int32_t *)(g36 + 36) = (int32_t) * (int16_t *)(g35 + 1);
		// branch -> 0x8dc50
	}
	// 0x8dc50
	return 3;
}

// Address range: 0x8dc6c - 0x8dcf8
int32_t function_8dc6c(int32_t a1, int32_t a2)
{
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8dcdc
		return 3;
	}
	int32_t v1 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8dca0
	int32_t v2 = 0x55ec * a2 + *(int32_t *)(g23 - 0x77a8);       // 0x8dca4
	g36 = v2;
	if (v1 == *(int32_t *)(v2 + 52)) {
		int32_t v3 = a1 + 1;                  // 0x8dcb4
		int32_t v4 = 2 * v3;                  // 0x8dcb8
		unsigned char v5 = *(char *)v4;       // 0x8dcb8
		unsigned char v6 = *(char *)(v4 | 1); // 0x8dcb8
		*(int16_t *)v3 = 256 * (int16_t)v6 | (int16_t)v5;
		ClrPlrPath(a2);
		*(int32_t *)(g36 + 32) = 23;
		*(int32_t *)(g36 + 36) = (int32_t) * (int16_t *)(g35 + 1);
		// branch -> 0x8dcdc
	}
	// 0x8dcdc
	return 3;
}

// Address range: 0x8dcf8 - 0x8de10
int32_t function_8dcf8(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x8dd08
	g36 = v1;
	g33 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x8dd14
	char *v3 = (char *)v2;                   // 0x8dd14
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8ddf4
		return 7;
	}
	int32_t v4 = 0x55ec * a2; // 0x8dd2c
	g35 = v4;
	int32_t v5 = (int32_t)*v3; // 0x8dd30
	if (v5 == *(int32_t *)(v4 + v1 + 52)) {
		int32_t v6 = a1 + 1;                                     // 0x8dd44
		int32_t v7 = 2 * v6;                                     // 0x8dd48
		unsigned char v8 = *(char *)(v7 | 1);                    // 0x8dd48
		int16_t v9 = 256 * (int16_t)v8 | (int16_t) * (char *)v7; // 0x8dd48
		*(int16_t *)v6 = v9;
		int32_t v10 = 2 * (a1 + 3);                                 // 0x8dd58
		unsigned char v11 = *(char *)(v10 | 1);                     // 0x8dd58
		int16_t v12 = 256 * (int16_t)v11 | (int16_t) * (char *)v10; // 0x8dd58
		int32_t v13 = g33;                                          // 0x8dd5c
		*(int16_t *)(v13 + 3) = v12;
		int32_t v14 = 2 * (v13 + 5);                                // 0x8dd68
		unsigned char v15 = *(char *)(v14 | 1);                     // 0x8dd68
		int16_t v16 = 256 * (int16_t)v15 | (int16_t) * (char *)v14; // 0x8dd68
		*(int16_t *)(g33 + 5) = v16;
		int32_t v17 = (int32_t) * (int16_t *)(g33 + 3); // 0x8dd78
		if (*v3 == 0) {
			// 0x8dd84
			if (*(int32_t *)(*(int32_t *)(g23 - 0x769c) + 56 * v17 + 24) == 0) {
				// 0x8dd9c
				msg_errorf(*(int32_t *)(g23 - 0x5c98), g36 + g35 + 316, v5, v2);
				// branch -> 0x8ddf4
				// 0x8ddf4
				return 7;
			}
		}
		// 0x8ddb4
		ClrPlrPath(a2);
		int32_t v18 = g35 + g36; // 0x8ddbc
		a2 = v18;
		*(int32_t *)(v18 + 32) = 24;
		*(int32_t *)(a2 + 36) = (int32_t) * (int16_t *)(g33 + 1);
		*(int32_t *)(a2 + 40) = (int32_t) * (int16_t *)(g33 + 5);
		*(int32_t *)(a2 + 164) = (int32_t) * (int16_t *)(g33 + 3);
		*(char *)(a2 + 168) = *(char *)(a2 + 184);
		*(char *)(a2 + 169) = (char)0;
		// branch -> 0x8ddf4
	}
	// 0x8ddf4
	return 7;
}

// Address range: 0x8de10 - 0x8df28
int32_t function_8de10(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x8de20
	g36 = v1;
	g33 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x8de2c
	char *v3 = (char *)v2;                   // 0x8de2c
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8df0c
		return 7;
	}
	int32_t v4 = 0x55ec * a2; // 0x8de44
	g35 = v4;
	int32_t v5 = (int32_t)*v3; // 0x8de48
	if (v5 == *(int32_t *)(v4 + v1 + 52)) {
		int32_t v6 = a1 + 1;                                     // 0x8de5c
		int32_t v7 = 2 * v6;                                     // 0x8de60
		unsigned char v8 = *(char *)(v7 | 1);                    // 0x8de60
		int16_t v9 = 256 * (int16_t)v8 | (int16_t) * (char *)v7; // 0x8de60
		*(int16_t *)v6 = v9;
		int32_t v10 = 2 * (a1 + 3);                                 // 0x8de70
		unsigned char v11 = *(char *)(v10 | 1);                     // 0x8de70
		int16_t v12 = 256 * (int16_t)v11 | (int16_t) * (char *)v10; // 0x8de70
		int32_t v13 = g33;                                          // 0x8de74
		*(int16_t *)(v13 + 3) = v12;
		int32_t v14 = 2 * (v13 + 5);                                // 0x8de80
		unsigned char v15 = *(char *)(v14 | 1);                     // 0x8de80
		int16_t v16 = 256 * (int16_t)v15 | (int16_t) * (char *)v14; // 0x8de80
		*(int16_t *)(g33 + 5) = v16;
		int32_t v17 = (int32_t) * (int16_t *)(g33 + 3); // 0x8de90
		if (*v3 == 0) {
			// 0x8de9c
			if (*(int32_t *)(*(int32_t *)(g23 - 0x769c) + 56 * v17 + 24) == 0) {
				// 0x8deb4
				msg_errorf(*(int32_t *)(g23 - 0x5c98), g36 + g35 + 316, v5, v2);
				// branch -> 0x8df0c
				// 0x8df0c
				return 7;
			}
		}
		// 0x8decc
		ClrPlrPath(a2);
		int32_t v18 = g35 + g36; // 0x8ded4
		a2 = v18;
		*(int32_t *)(v18 + 32) = 25;
		*(int32_t *)(a2 + 36) = (int32_t) * (int16_t *)(g33 + 1);
		*(int32_t *)(a2 + 40) = (int32_t) * (int16_t *)(g33 + 5);
		*(int32_t *)(a2 + 164) = (int32_t) * (int16_t *)(g33 + 3);
		*(char *)(a2 + 168) = *(char *)(a2 + 184);
		*(char *)(a2 + 169) = (char)0;
		// branch -> 0x8df0c
	}
	// 0x8df0c
	return 7;
}

// Address range: 0x8df28 - 0x8e040
int32_t function_8df28(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x8df38
	g36 = v1;
	g33 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x8df44
	char *v3 = (char *)v2;                   // 0x8df44
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8e024
		return 7;
	}
	int32_t v4 = 0x55ec * a2; // 0x8df5c
	g35 = v4;
	int32_t v5 = (int32_t)*v3; // 0x8df60
	if (v5 == *(int32_t *)(v4 + v1 + 52)) {
		int32_t v6 = a1 + 1;                                     // 0x8df74
		int32_t v7 = 2 * v6;                                     // 0x8df78
		unsigned char v8 = *(char *)(v7 | 1);                    // 0x8df78
		int16_t v9 = 256 * (int16_t)v8 | (int16_t) * (char *)v7; // 0x8df78
		*(int16_t *)v6 = v9;
		int32_t v10 = 2 * (a1 + 3);                                 // 0x8df88
		unsigned char v11 = *(char *)(v10 | 1);                     // 0x8df88
		int16_t v12 = 256 * (int16_t)v11 | (int16_t) * (char *)v10; // 0x8df88
		int32_t v13 = g33;                                          // 0x8df8c
		*(int16_t *)(v13 + 3) = v12;
		int32_t v14 = 2 * (v13 + 5);                                // 0x8df98
		unsigned char v15 = *(char *)(v14 | 1);                     // 0x8df98
		int16_t v16 = 256 * (int16_t)v15 | (int16_t) * (char *)v14; // 0x8df98
		*(int16_t *)(g33 + 5) = v16;
		int32_t v17 = (int32_t) * (int16_t *)(g33 + 3); // 0x8dfa8
		if (*v3 == 0) {
			// 0x8dfb4
			if (*(int32_t *)(*(int32_t *)(g23 - 0x769c) + 56 * v17 + 24) == 0) {
				// 0x8dfcc
				msg_errorf(*(int32_t *)(g23 - 0x5c98), g36 + g35 + 316, v5, v2);
				// branch -> 0x8e024
				// 0x8e024
				return 7;
			}
		}
		// 0x8dfe4
		ClrPlrPath(a2);
		int32_t v18 = g35 + g36; // 0x8dfec
		a2 = v18;
		*(int32_t *)(v18 + 32) = 24;
		*(int32_t *)(a2 + 36) = (int32_t) * (int16_t *)(g33 + 1);
		*(int32_t *)(a2 + 40) = (int32_t) * (int16_t *)(g33 + 5);
		*(int32_t *)(a2 + 164) = (int32_t) * (int16_t *)(g33 + 3);
		*(char *)(a2 + 168) = *(char *)(a2 + 176);
		*(char *)(a2 + 169) = (char)2;
		// branch -> 0x8e024
	}
	// 0x8e024
	return 7;
}

// Address range: 0x8e040 - 0x8e158
int32_t function_8e040(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x8e050
	g36 = v1;
	g33 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x8e05c
	char *v3 = (char *)v2;                   // 0x8e05c
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8e13c
		return 7;
	}
	int32_t v4 = 0x55ec * a2; // 0x8e074
	g35 = v4;
	int32_t v5 = (int32_t)*v3; // 0x8e078
	if (v5 == *(int32_t *)(v4 + v1 + 52)) {
		int32_t v6 = a1 + 1;                                     // 0x8e08c
		int32_t v7 = 2 * v6;                                     // 0x8e090
		unsigned char v8 = *(char *)(v7 | 1);                    // 0x8e090
		int16_t v9 = 256 * (int16_t)v8 | (int16_t) * (char *)v7; // 0x8e090
		*(int16_t *)v6 = v9;
		int32_t v10 = 2 * (a1 + 3);                                 // 0x8e0a0
		unsigned char v11 = *(char *)(v10 | 1);                     // 0x8e0a0
		int16_t v12 = 256 * (int16_t)v11 | (int16_t) * (char *)v10; // 0x8e0a0
		int32_t v13 = g33;                                          // 0x8e0a4
		*(int16_t *)(v13 + 3) = v12;
		int32_t v14 = 2 * (v13 + 5);                                // 0x8e0b0
		unsigned char v15 = *(char *)(v14 | 1);                     // 0x8e0b0
		int16_t v16 = 256 * (int16_t)v15 | (int16_t) * (char *)v14; // 0x8e0b0
		*(int16_t *)(g33 + 5) = v16;
		int32_t v17 = (int32_t) * (int16_t *)(g33 + 3); // 0x8e0c0
		if (*v3 == 0) {
			// 0x8e0cc
			if (*(int32_t *)(*(int32_t *)(g23 - 0x769c) + 56 * v17 + 24) == 0) {
				// 0x8e0e4
				msg_errorf(*(int32_t *)(g23 - 0x5c98), g36 + g35 + 316, v5, v2);
				// branch -> 0x8e13c
				// 0x8e13c
				return 7;
			}
		}
		// 0x8e0fc
		ClrPlrPath(a2);
		int32_t v18 = g35 + g36; // 0x8e104
		a2 = v18;
		*(int32_t *)(v18 + 32) = 25;
		*(int32_t *)(a2 + 36) = (int32_t) * (int16_t *)(g33 + 1);
		*(int32_t *)(a2 + 40) = (int32_t) * (int16_t *)(g33 + 5);
		*(int32_t *)(a2 + 164) = (int32_t) * (int16_t *)(g33 + 3);
		*(char *)(a2 + 168) = *(char *)(a2 + 176);
		*(char *)(a2 + 169) = (char)2;
		// branch -> 0x8e13c
	}
	// 0x8e13c
	return 7;
}

// Address range: 0x8e158 - 0x8e1e8
int32_t function_8e158(int32_t a1, int32_t a2)
{
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8e1cc
		return 3;
	}
	int32_t v1 = a1 + 1;                  // 0x8e184
	int32_t v2 = 2 * v1;                  // 0x8e188
	unsigned char v3 = *(char *)v2;       // 0x8e188
	unsigned char v4 = *(char *)(v2 | 1); // 0x8e188
	*(int16_t *)v1 = 256 * (int16_t)v4 | (int16_t)v3;
	int32_t v5 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8e1a4
	if (v5 == *(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * a2 + 52)) {
		// 0x8e1b4
		function_7ca88((int32_t) * (int16_t *)(g35 + 1));
		g38 = 0;
		function_7cbac((int32_t) * (int16_t *)(g35 + 1), g36);
		// branch -> 0x8e1cc
	}
	// 0x8e1cc
	return 3;
}

// Address range: 0x8e1e8 - 0x8e260
int32_t On_RESURRECT(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x72bc); // 0x8e1f0
	g36 = a2;
	if (*(char *)v1 == 1) {
		// 0x8e210
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8e248
	} else {
		int32_t v2 = a1 + 1;                                      // 0x8e224
		int32_t v3 = 2 * v2;                                      // 0x8e228
		unsigned char v4 = *(char *)(v3 | 1);                     // 0x8e228
		uint16_t v5 = 256 * (int16_t)v4 | (int16_t) * (char *)v3; // 0x8e228
		*(int16_t *)v2 = v5;
		DoResurrect(a2, (int32_t)v5, v1, a1);
		check_update_plr(g36);
		// branch -> 0x8e248
	}
	// 0x8e248
	return 3;
}

// Address range: 0x8e260 - 0x8e2d0
int32_t function_8e260(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8e2bc
		return 3;
	}
	int32_t v1 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8e290
	if (v1 == *(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * a2 + 52)) {
		int32_t v2 = a1 + 1;                                      // 0x8e2a0
		int32_t v3 = 2 * v2;                                      // 0x8e2a4
		unsigned char v4 = *(char *)(v3 | 1);                     // 0x8e2a4
		uint16_t v5 = 256 * (int16_t)v4 | (int16_t) * (char *)v3; // 0x8e2a4
		*(int16_t *)v2 = v5;
		DoHealOther(a2, (int32_t)v5, v1, a1);
		// branch -> 0x8e2bc
	}
	// 0x8e2bc
	return 3;
}

// Address range: 0x8e2d0 - 0x8e368
int32_t function_8e2d0(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8e34c
		return 5;
	}
	int32_t v1 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8e304
	int32_t v2 = 0x55ec * a2 + *(int32_t *)(g23 - 0x77a8);       // 0x8e308
	g36 = v2;
	if (v1 == *(int32_t *)(v2 + 52)) {
		int32_t v3 = a1 + 3;                  // 0x8e318
		int32_t v4 = 2 * v3;                  // 0x8e31c
		unsigned char v5 = *(char *)v4;       // 0x8e31c
		unsigned char v6 = *(char *)(v4 | 1); // 0x8e31c
		*(int16_t *)v3 = 256 * (int16_t)v6 | (int16_t)v5;
		int32_t v7 = (int32_t) * (char *)(a1 + 1); // 0x8e330
		MakePlrPath(a2, v7, (int32_t) * (char *)(a1 + 2), 0);
		*(int32_t *)(g36 + 32) = 17;
		*(int32_t *)(g36 + 36) = (int32_t) * (int16_t *)(g35 + 3);
		// branch -> 0x8e34c
	}
	// 0x8e34c
	return 5;
}

// Address range: 0x8e368 - 0x8e3f0
int32_t function_8e368(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8e388
		g38 = 5;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8e3dc
		// 0x8e3dc
		return 5;
	}
	// 0x8e39c
	if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		int32_t v1 = a1 + 1;                                     // 0x8e3ac
		int32_t v2 = 2 * v1;                                     // 0x8e3b0
		unsigned char v3 = *(char *)(v2 | 1);                    // 0x8e3b0
		int16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8e3b0
		*(int16_t *)v1 = v4;
		int32_t v5 = 2 * (a1 + 3);                               // 0x8e3c0
		unsigned char v6 = *(char *)(v5 | 1);                    // 0x8e3c0
		int16_t v7 = 256 * (int16_t)v6 | (int16_t) * (char *)v5; // 0x8e3c0
		*(int16_t *)(a1 + 3) = v7;
		int32_t v8 = (int32_t) * (int16_t *)(a1 + 1); // 0x8e3d0
		StartNewLvl(a2, v8, (int32_t) * (int16_t *)(a1 + 3));
		// branch -> 0x8e3dc
	}
	// 0x8e3dc
	return 5;
}

// Address range: 0x8e3f0 - 0x8e4c0
int32_t On_WARP(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x72bc); // 0x8e3f8
	g36 = a2;
	if (*(char *)v1 == 1) {
		// 0x8e418
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8e4a8
	} else {
		int32_t v2 = a1 + 1;                                     // 0x8e42c
		int32_t v3 = 2 * v2;                                     // 0x8e430
		unsigned char v4 = *(char *)(v3 | 1);                    // 0x8e430
		int16_t v5 = 256 * (int16_t)v4 | (int16_t) * (char *)v3; // 0x8e430
		*(int16_t *)v2 = v5;
		function_a69f0(a2, (int32_t)v5, v1, a1);
		int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x8e44c
		if (g36 == v6) {
			// 0x8e458
			if (*(int32_t *)*(int32_t *)(g23 - 0x7744) >= 12) {
				int32_t v7 = 46;                                                           // ctr
				int32_t v8 = *(int32_t *)(g23 - 0x7690) + (int32_t) "MoveWindow" - 0x4978; // 0x8e494
				int32_t v9 = 0x55ec * v6 + 0x53cc + *(int32_t *)(g23 - 0x77a8);            // 0x8e48c
				// branch -> 0x8e48c
				while (true) {
					int32_t v10 = v9 + 8; // 0x8e48c
					int32_t v11 = v8 + 8; // 0x8e494
					*(int32_t *)v11 = *(int32_t *)v10;
					*(int32_t *)(v8 + 12) = *(int32_t *)(v9 + 12);
					int32_t v12 = v7 - 1; // 0x8e49c
					v7 = v12;
					if (v12 == 0) {
						// 0x8e4a0
						AutoGetItem(127, 127);
						// branch -> 0x8e4a8
						// 0x8e4a8
						return 3;
					}
					// 0x8e48c
					v8 = v11;
					v9 = v10;
					// branch -> 0x8e48c
				}
			}
			// 0x8e4a8
			return 3;
		}
	}
	// 0x8e4a8
	return 3;
}

// Address range: 0x8e4c0 - 0x8e584
int32_t function_8e4c0(int32_t a1, int32_t a2)
{
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8e4e8
		g38 = 5;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8e568
		// 0x8e568
		return 5;
	}
	// 0x8e4fc
	if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		int32_t v1 = a1 + 3;                  // 0x8e50c
		int32_t v2 = 2 * v1;                  // 0x8e510
		unsigned char v3 = *(char *)v2;       // 0x8e510
		unsigned char v4 = *(char *)(v2 | 1); // 0x8e510
		*(int16_t *)v1 = 256 * (int16_t)v4 | (int16_t)v3;
		int32_t v5 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8e52c
		int32_t v6 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a2 + 52;  // 0x8e530
		int32_t v7 = v6;                                             // 0x8e550
		if (v5 == *(int32_t *)v6) {
			int32_t v8 = g35;                           // 0x8e53c
			int32_t v9 = (int32_t) * (char *)(v8 + 1);  // 0x8e544
			int32_t v10 = (int32_t) * (char *)(v8 + 2); // 0x8e548
			function_7d860((int32_t) * (int16_t *)(v8 + 3), v9, v10, a2);
			v7 = g36;
			// branch -> 0x8e550
		}
		int32_t v11 = (int32_t) * (int16_t *)(g35 + 3); // 0x8e554
		int32_t v12 = (int32_t) * (char *)(g35 + 2);    // 0x8e560
		function_8a44c(v11, *(char *)(g35 + 1), v12, *(int32_t *)v7 % 256);
		// branch -> 0x8e568
	}
	// 0x8e568
	return 5;
}

// Address range: 0x8e584 - 0x8e64c
int32_t function_8e584(int32_t a1, int32_t a2)
{
	g36 = a2;
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8e5b0
		g38 = 5;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8e630
		// 0x8e630
		return 5;
	}
	// 0x8e5c4
	if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		int32_t v1 = a1 + 3;                  // 0x8e5d4
		int32_t v2 = 2 * v1;                  // 0x8e5d8
		unsigned char v3 = *(char *)v2;       // 0x8e5d8
		unsigned char v4 = *(char *)(v2 | 1); // 0x8e5d8
		*(int16_t *)v1 = 256 * (int16_t)v4 | (int16_t)v3;
		int32_t v5 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8e5e8
		int32_t v6 = g35;                                            // 0x8e5ec
		int32_t v7 = v6;                                             // 0x8e614
		if (v5 == (int32_t) * (int16_t *)(v6 + 3)) {
			int32_t v8 = (int32_t) * (char *)(v6 + 1); // 0x8e5f8
			int32_t v9 = g36;                          // 0x8e5fc
			function_7d860(v9, v8, (int32_t) * (char *)(v6 + 2), v9);
			v7 = g35;
			// branch -> 0x8e60c
		}
		int32_t v10 = g36;                                                           // 0x8e60c
		unsigned char v11 = *(char *)(v7 + 2);                                       // 0x8e618
		uint32_t v12 = *(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v10 + 52); // 0x8e620
		function_8a44c(v10, *(char *)(v7 + 1), (int32_t)v11, v12 % 256);
		// branch -> 0x8e630
	}
	// 0x8e630
	return 5;
}

// Address range: 0x8e64c - 0x8e770
int32_t On_AWAKEGOLEM(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8e674
		g38 = 10;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8e75c
		// 0x8e75c
		return 10;
	}
	int32_t v1 = a1 + 5;              // 0x8e688
	int32_t v2 = __asm_lwbrx(v1, v1); // 0x8e68c
	int32_t v3 = 0x55ec * a2;         // 0x8e690
	*(int32_t *)(a1 + 5) = v2;
	int32_t v4 = *(int32_t *)(g23 - 0x77a8) + v3;                // 0x8e69c
	int32_t v5 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8e6a0
	if (v5 == *(int32_t *)(v4 + 52)) {
		if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
			uint32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x7668); // 0x8e6dc
			int32_t v7 = 1;                                       // 0x8e71c
			if (v6 >= 1) {
				int32_t v8 = *(int32_t *)(g23 - 0x7664);
				int32_t v9 = 1;                           // 0x8e71c11
				int32_t v10 = *(int32_t *)(g23 - 0x7660); // 0x8e714
				// branch -> 0x8e6ec
				int32_t v11; // 0x8e71c10
				while (true) {
					int32_t v12 = 180 * *(int32_t *)v10; // 0x8e6f0
					v11 = v9;
					if (*(int32_t *)(v12 + v8) == 33) {
						// 0x8e700
						if (a2 == *(int32_t *)(v12 + 120 + v8)) {
							// 0x8e710
							v11 = 0;
							// branch -> 0x8e714
						} else {
							v11 = v9;
						}
					}
					int32_t v13 = v6 - 1; // 0x8e718
					if (v13 == 0) {
						// break -> 0x8e71c
						break;
					}
					v9 = v11;
					v6 = v13;
					v10 += 4;
					// continue -> 0x8e6ec
				}
				// 0x8e71c
				v7 = v11;
				// branch -> 0x8e71c
			}
			// 0x8e71c
			if (v7 != 0) {
				// 0x8e724
				g13 = a2;
				int32_t v14 = *(int32_t *)(v4 + 60);        // 0x8e748
				int32_t v15 = (int32_t) * (char *)(a1 + 1); // 0x8e74c
				int32_t v16 = (int32_t) * (char *)(a1 + 2); // 0x8e750
				int32_t v17 = (int32_t) * (char *)(a1 + 3); // 0x8e754
				AddMissile(*(int32_t *)(v4 + 56), v14, v15, v16, v17, 33, 0, 0, 1);
				// branch -> 0x8e75c
			}
		}
	} else {
		function_8a558(a1, (int32_t) * (char *)(a1 + 9), v3);
		// branch -> 0x8e75c
	}
	// 0x8e75c
	return 10;
}

// Address range: 0x8e770 - 0x8e88c
int32_t function_8e770(int32_t a1, int32_t a2)
{
	int32_t v1 = a1;                         // r5
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // r8
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8e794
		g38 = 5;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8e878
		// 0x8e878
		return 5;
	}
	// 0x8e7a8
	if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		int32_t v3 = a1 + 1;                                     // 0x8e7b8
		int32_t v4 = 2 * v3;                                     // 0x8e7bc
		unsigned char v5 = *(char *)(v4 | 1);                    // 0x8e7bc
		int16_t v6 = 256 * (int16_t)v5 | (int16_t) * (char *)v4; // 0x8e7bc
		*(int16_t *)v3 = v6;
		int32_t v7 = 2 * (a1 + 3);                               // 0x8e7cc
		unsigned char v8 = *(char *)(v7 | 1);                    // 0x8e7cc
		int16_t v9 = 256 * (int16_t)v8 | (int16_t) * (char *)v7; // 0x8e7cc
		*(int16_t *)(v1 + 3) = v9;
		int32_t v10 = *(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * a2 + 52); // 0x8e7ec
		if ((int32_t) * (char *)*(int32_t *)(g23 - 0x77e4) == v10) {
			uint16_t v11 = *(int16_t *)(v1 + 1);                 // 0x8e7f8
			int32_t v12 = v2 + 152;                              // r6
			char *v13 = (char *)(v2 + 232 * (int32_t)v11 + 195); // 0x8e810
			*v13 = (char)((int32_t)*v13 | 1 << a2 % 64);
			int32_t v14 = v12 + 232 * (int32_t) * (int16_t *)(v1 + 1); // 0x8e824
			int32_t *v15 = (int32_t *)v14;                             // 0x8e828
			int32_t v16 = *v15;                                        // 0x8e828
			if (v16 != 0) {
				// 0x8e834
				*v15 = v16 - (int32_t) * (int16_t *)(v1 + 3);
				int32_t v17 = v12 + 232 * (int32_t) * (int16_t *)(v1 + 1); // 0x8e848
				int32_t *v18 = (int32_t *)v17;                             // 0x8e84c
				if (*v18 <= 63) {
					// 0x8e85c
					*v18 = 64;
					// branch -> 0x8e864
				}
				int32_t v19 = (int32_t) * (int16_t *)(v1 + 1); // 0x8e864
				function_8a4a8(v19, *(int32_t *)(232 * v19 + v12), v10 % 256);
				// branch -> 0x8e878
			}
			// 0x8e878
			return 5;
		}
	}
	// 0x8e878
	return 5;
}

// Address range: 0x8e88c - 0x8e90c
int32_t function_8e88c(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x72bc); // 0x8e890
	if (*(char *)v1 == 1) {
		// 0x8e8ac
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8e8f8
		// 0x8e8f8
		return 3;
	}
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x8e8c4
	if (a2 == v2) {
		// 0x8e8f0
		check_update_plr(v2);
		// branch -> 0x8e8f8
	} else {
		int32_t v3 = a1 + 1;                                      // 0x8e8d0
		int32_t v4 = 2 * v3;                                      // 0x8e8d4
		unsigned char v5 = *(char *)(v4 | 1);                     // 0x8e8d4
		uint16_t v6 = 256 * (int16_t)v5 | (int16_t) * (char *)v4; // 0x8e8d4
		int32_t v7 = v6;                                          // 0x8e8d4
		g34 = a2;
		*(int16_t *)v3 = v6;
		g37 = v7;
		function_a64f4(a2, v7, v1, a1);
		// branch -> 0x8e8f8
	}
	// 0x8e8f8
	return 3;
}

// Address range: 0x8e90c - 0x8ea14
int32_t function_8e90c(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // r7
	int32_t v2 = a1 + 2;                     // 0x8e918
	*(int32_t *)(a1 + 2) = __asm_lwbrx(v2, v2);
	int32_t v3 = (int32_t) * (char *)(a1 + 1);           // 0x8e92c
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x8e930
	if (v3 != v4) {
		// 0x8ea00
		return 6;
	}
	unsigned char v5 = *(char *)*(int32_t *)(g23 - 0x77e4); // 0x8e940
	if (v5 == 0) {
		// 0x8ea00
		return 6;
	}
	// 0x8e94c
	if (*(char *)*(int32_t *)(g23 - 0x72bc) != 1) {
		// 0x8e95c
		if ((int32_t)v5 == *(int32_t *)(v1 + 0x55ec * a2 + 52)) {
			// 0x8e970
			if (*(int32_t *)(a1 + 2) > 0x2ee00) {
				// 0x8ea00
				return 6;
			}
			int32_t v6 = v1 + 0x55ec * v3; // 0x8e988
			int32_t v7 = v6 + 404;         // 0x8e98c
			if (*(int32_t *)v7 < 64) {
				// 0x8ea00
				return 6;
			}
			// 0x8e998
			*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
			int32_t *v8 = (int32_t *)v7; // 0x8e9b0
			*v8 = *v8 - *(int32_t *)(a1 + 2);
			int32_t v9 = v6 + 396;        // 0x8e9c0
			int32_t *v10 = (int32_t *)v9; // 0x8e9c0
			*v10 = *v10 - *(int32_t *)(a1 + 2);
			int32_t *v11 = (int32_t *)v7;         // 0x8e9cc
			int32_t v12 = *(int32_t *)(v6 + 408); // 0x8e9d0
			if (*v11 > v12) {
				// 0x8e9dc
				*v11 = v12;
				*(int32_t *)v9 = *(int32_t *)(v6 + 400);
				// branch -> 0x8e9e8
			}
			// 0x8e9e8
			if (*(int32_t *)v7 <= 63) {
				// 0x8e9f4
				function_a640c(v4, 1);
				// branch -> 0x8ea00
			}
			// 0x8ea00
			return 6;
		}
	}
	// 0x8ea00
	return 6;
}

// Address range: 0x8ea14 - 0x8eac0
int32_t function_8ea14(int32_t a1, int32_t a2)
{
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8ea3c
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8eaa4
	} else {
		int32_t v1 = a1 + 1;                  // 0x8ea50
		int32_t v2 = 2 * v1;                  // 0x8ea54
		unsigned char v3 = *(char *)v2;       // 0x8ea54
		unsigned char v4 = *(char *)(v2 | 1); // 0x8ea54
		*(int16_t *)v1 = 256 * (int16_t)v4 | (int16_t)v3;
		int32_t v5 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8ea70
		int32_t v6 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a2 + 52;  // 0x8ea74
		if (v5 == *(int32_t *)v6) {
			g34 = a2;
			function_9ca6c(a2, 43, (int32_t) * (int16_t *)(g35 + 1));
			// branch -> 0x8ea90
		}
		// 0x8ea90
		function_8a6d4((int32_t) * (int16_t *)(g35 + 1), 43, *(int32_t *)v6 % 256);
		// branch -> 0x8eaa4
	}
	// 0x8eaa4
	return 3;
}

// Address range: 0x8eac0 - 0x8eb6c
int32_t function_8eac0(int32_t a1, int32_t a2)
{
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8eae8
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8eb50
	} else {
		int32_t v1 = a1 + 1;                  // 0x8eafc
		int32_t v2 = 2 * v1;                  // 0x8eb00
		unsigned char v3 = *(char *)v2;       // 0x8eb00
		unsigned char v4 = *(char *)(v2 | 1); // 0x8eb00
		*(int16_t *)v1 = 256 * (int16_t)v4 | (int16_t)v3;
		int32_t v5 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8eb1c
		int32_t v6 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a2 + 52;  // 0x8eb20
		if (v5 == *(int32_t *)v6) {
			g34 = a2;
			function_9ca6c(a2, 44, (int32_t) * (int16_t *)(g35 + 1));
			// branch -> 0x8eb3c
		}
		// 0x8eb3c
		function_8a6d4((int32_t) * (int16_t *)(g35 + 1), 44, *(int32_t *)v6 % 256);
		// branch -> 0x8eb50
	}
	// 0x8eb50
	return 3;
}

// Address range: 0x8eb6c - 0x8ec18
int32_t function_8eb6c(int32_t a1, int32_t a2)
{
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8eb94
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8ebfc
	} else {
		int32_t v1 = a1 + 1;                  // 0x8eba8
		int32_t v2 = 2 * v1;                  // 0x8ebac
		unsigned char v3 = *(char *)v2;       // 0x8ebac
		unsigned char v4 = *(char *)(v2 | 1); // 0x8ebac
		*(int16_t *)v1 = 256 * (int16_t)v4 | (int16_t)v3;
		int32_t v5 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8ebc8
		int32_t v6 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a2 + 52;  // 0x8ebcc
		if (v5 == *(int32_t *)v6) {
			g34 = a2;
			function_9ca6c(a2, 45, (int32_t) * (int16_t *)(g35 + 1));
			// branch -> 0x8ebe8
		}
		// 0x8ebe8
		function_8a6d4((int32_t) * (int16_t *)(g35 + 1), 45, *(int32_t *)v6 % 256);
		// branch -> 0x8ebfc
	}
	// 0x8ebfc
	return 3;
}

// Address range: 0x8ec18 - 0x8ecd4
int32_t function_8ec18(int32_t a1, int32_t a2)
{
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8ec40
		g38 = 5;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8ecb8
	} else {
		int32_t v1 = a1 + 1;                                     // 0x8ec54
		int32_t v2 = 2 * v1;                                     // 0x8ec58
		unsigned char v3 = *(char *)(v2 | 1);                    // 0x8ec58
		int16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8ec58
		*(int16_t *)v1 = v4;
		int32_t v5 = 2 * (a1 + 3);            // 0x8ec68
		unsigned char v6 = *(char *)v5;       // 0x8ec68
		unsigned char v7 = *(char *)(v5 | 1); // 0x8ec68
		*(int16_t *)(g35 + 3) = 256 * (int16_t)v7 | (int16_t)v6;
		int32_t v8 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8ec84
		int32_t v9 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a2 + 52;  // 0x8ec88
		if (v8 == *(int32_t *)v9) {
			int32_t v10 = (int32_t) * (int16_t *)(g35 + 1); // 0x8ec94
			g34 = v10;
			function_9ca6c(v10, 46, (int32_t) * (int16_t *)(g35 + 3));
			// branch -> 0x8eca4
		}
		// 0x8eca4
		function_8a6d4((int32_t) * (int16_t *)(g35 + 3), 46, *(int32_t *)v9 % 256);
		// branch -> 0x8ecb8
	}
	// 0x8ecb8
	return 5;
}

// Address range: 0x8ecd4 - 0x8ed8c
int32_t function_8ecd4(int32_t a1, int32_t a2)
{
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8ecfc
		g38 = 5;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8ed70
	} else {
		int32_t v1 = a1 + 1;                                     // 0x8ed10
		int32_t v2 = 2 * v1;                                     // 0x8ed14
		unsigned char v3 = *(char *)(v2 | 1);                    // 0x8ed14
		int16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8ed14
		*(int16_t *)v1 = v4;
		int32_t v5 = 2 * (a1 + 3);            // 0x8ed24
		unsigned char v6 = *(char *)v5;       // 0x8ed24
		unsigned char v7 = *(char *)(v5 | 1); // 0x8ed24
		*(int16_t *)(g35 + 3) = 256 * (int16_t)v7 | (int16_t)v6;
		int32_t v8 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8ed40
		int32_t v9 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a2 + 52;  // 0x8ed44
		g36 = v9;
		int32_t v10 = v9; // 0x8ed5c
		if (v8 == *(int32_t *)v9) {
			int32_t v11 = g35;                              // 0x8ed50
			int32_t v12 = (int32_t) * (int16_t *)(v11 + 1); // 0x8ed50
			g34 = v12;
			function_9d10c(v12, (int32_t) * (int16_t *)(v11 + 3));
			v10 = g36;
			// branch -> 0x8ed5c
		}
		// 0x8ed5c
		function_8a6d4((int32_t) * (int16_t *)(g35 + 3), 47, *(int32_t *)v10 % 256);
		// branch -> 0x8ed70
	}
	// 0x8ed70
	return 5;
}

// Address range: 0x8ed8c - 0x8ee28
int32_t function_8ed8c(int32_t a1, int32_t a2)
{
	// 0x8ed8c
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8edb0
		g38 = 11;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8ee14
		// 0x8ee14
		return 11;
	}
	int32_t v1 = a1 + 2;                                     // 0x8edc0
	int32_t v2 = 2 * v1;                                     // 0x8edc4
	unsigned char v3 = *(char *)(v2 | 1);                    // 0x8edc4
	int16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8edc4
	*(int16_t *)v1 = v4;
	int32_t v5 = 2 * (a1 + 4);                               // 0x8edd4
	unsigned char v6 = *(char *)(v5 | 1);                    // 0x8edd4
	int16_t v7 = 256 * (int16_t)v6 | (int16_t) * (char *)v5; // 0x8edd4
	int32_t v8 = a1 + 6;                                     // 0x8edd8
	*(int16_t *)(a1 + 4) = v7;
	*(int32_t *)(a1 + 6) = __asm_lwbrx(v8, v8);
	if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		int32_t v9 = (int32_t) * (char *)(a1 + 1);   // 0x8edfc
		uint16_t v10 = *(int16_t *)(a1 + 2);         // 0x8ee00
		uint16_t v11 = *(int16_t *)(a1 + 4);         // 0x8ee04
		int32_t v12 = *(int32_t *)(a1 + 6);          // 0x8ee08
		int32_t v13 = (int32_t) * (char *)(a1 + 10); // 0x8ee0c
		g41 = v13;
		function_58838(v9, (int32_t)v10, (int32_t)v11, v12, v13);
		// branch -> 0x8ee14
	}
	// 0x8ee14
	return 11;
}

// Address range: 0x8ee28 - 0x8ee8c
int32_t function_8ee28(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x72bc); // 0x8ee2c
	if (*(char *)v1 != 1) {
		if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
			// 0x8ee6c
			function_59170(a2, (int32_t) * (char *)(a1 + 1), v1, a1);
			// branch -> 0x8ee78
		}
		// 0x8ee78
		return 2;
	}
	// 0x8ee48
	g38 = 2;
	msg_send_packet((char)a2, a1);
	// branch -> 0x8ee78
	// 0x8ee78
	return 2;
}

// Address range: 0x8ee8c - 0x8ef14
int32_t function_8ee8c(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8eeac
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8ef00
		// 0x8ef00
		return 3;
	}
	int32_t v1 = a1 + 1;                  // 0x8eec0
	int32_t v2 = 2 * v1;                  // 0x8eec4
	unsigned char v3 = *(char *)v2;       // 0x8eec4
	unsigned char v4 = *(char *)(v2 | 1); // 0x8eec4
	*(int16_t *)v1 = 256 * (int16_t)v4 | (int16_t)v3;
	uint16_t v5 = *(int16_t *)(a1 + 1); // 0x8eed0
	if (v5 > 51) {
		// 0x8ef00
		return 3;
	}
	if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		int32_t v6 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a2; // 0x8eef8
		*(char *)(v6 + 436) = (char)(0x1000000 * (int32_t)v5 / 0x1000000);
		// branch -> 0x8ef00
	}
	// 0x8ef00
	return 3;
}

// Address range: 0x8ef14 - 0x8efc8
int32_t function_8ef14(int32_t a1, int32_t a2)
{
	int32_t v1 = a1; // 0x8ef20
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8ef34
		g38 = 22;
		msg_send_packet((char)a2, v1);
		// branch -> 0x8efb4
	} else {
		int32_t v2 = v1 + 3;                  // 0x8ef4c
		int32_t v3 = 2 * v2;                  // 0x8ef50
		unsigned char v4 = *(char *)v3;       // 0x8ef50
		unsigned char v5 = *(char *)(v3 | 1); // 0x8ef50
		*(int16_t *)v2 = 256 * (int16_t)v5 | (int16_t)v4;
		int32_t v6 = 2 * (v1 + 5);            // 0x8ef60
		unsigned char v7 = *(char *)v6;       // 0x8ef60
		unsigned char v8 = *(char *)(v6 | 1); // 0x8ef60
		int32_t v9 = a1 + 7;                  // 0x8ef64
		*(int16_t *)(v1 + 5) = 256 * (int16_t)v8 | (int16_t)v7;
		*(int32_t *)(v1 + 7) = __asm_lwbrx(v9, v9);
		int32_t v10 = 2 * (a1 + 16);            // 0x8ef7c
		unsigned char v11 = *(char *)v10;       // 0x8ef7c
		unsigned char v12 = *(char *)(v10 | 1); // 0x8ef7c
		int32_t v13 = a1 + 18;                  // 0x8ef80
		*(int16_t *)(v1 + 16) = 256 * (int16_t)v12 | (int16_t)v11;
		*(int32_t *)(v1 + 18) = __asm_lwbrx(v13, v13);
		int32_t v14 = (int32_t) * (char *)(v1 + 1);                                      // 0x8efa4
		int32_t v15 = *(int32_t *)(0x55ec * a2 + *(int32_t *)(g23 - 0x77a8) + 52) % 256; // 0x8efac
		function_8a8b0(v14, *(char *)(v1 + 2), v15, v15);
		// branch -> 0x8efb4
	}
	// 0x8efb4
	return 22;
}

// Address range: 0x8efc8 - 0x8f06c
int32_t On_SEND_PLRINFO(void)
{
	int32_t v1 = g34; // 0x8efcc
	int16_t v2;
	int16_t v3;
	uint32_t v4 = (int32_t)(v3 | 256 * v2); // 0x8efec
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8f000
		g38 = v4 % 0x10000 + 5;
		msg_send_packet((char)g37, v1);
		// branch -> 0x8f054
	} else {
		int32_t v5 = v1 + 1;                  // 0x8f018
		int32_t v6 = 2 * v5;                  // 0x8f01c
		unsigned char v7 = *(char *)v6;       // 0x8f01c
		unsigned char v8 = *(char *)(v6 | 1); // 0x8f01c
		*(int16_t *)v5 = 256 * (int16_t)v8 | (int16_t)v7;
		int32_t v9 = 2 * (v1 + 3);             // 0x8f02c
		unsigned char v10 = *(char *)v9;       // 0x8f02c
		unsigned char v11 = *(char *)(v9 | 1); // 0x8f02c
		g37 = v1;
		*(int16_t *)(v1 + 3) = 256 * (int16_t)v11 | (int16_t)v10;
		int32_t v12 = llvm_ctlz_i32(2 - (int32_t) * (char *)&g34, true); // 0x8f048
		int32_t v13 = __asm_rlwinm(v12, 27, 24, 31);                     // 0x8f04c
		g38 = v13;
		recv_plrinfo(v13);
		// branch -> 0x8f054
	}
	// 0x8f054
	return v4 % 0x10000 + 5;
}

// Address range: 0x8f06c - 0x8f08c
int32_t On_ACK_PLRINFO(int32_t a1, int32_t a2)
{
	// 0x8f06c
	return On_SEND_PLRINFO();
}

// Address range: 0x8f08c - 0x8f27c
int32_t On_PLAYER_JOINLEVEL(int32_t a1, int32_t a2)
{
	g28 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x8f09c
	g33 = v1;
	g35 = *(int32_t *)(g23 - 0x77ac);
	g29 = a2;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8f0bc
		g38 = 5;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8f264
		// 0x8f264
		return 5;
	}
	int32_t v2 = a1 + 3;                  // 0x8f0d0
	int32_t v3 = 2 * v2;                  // 0x8f0d4
	unsigned char v4 = *(char *)v3;       // 0x8f0d4
	unsigned char v5 = *(char *)(v3 | 1); // 0x8f0d4
	int32_t v6 = 0x55ec * a2;             // 0x8f0d8
	g32 = v6;
	int32_t v7 = v6 + v1; // r7
	*(int16_t *)v2 = 256 * (int16_t)v5 | (int16_t)v4;
	*(char *)(v7 + 315) = 0;
	if (*(char *)(v7 + 316) != 0) {
		char *v8 = (char *)(v7 + 29); // 0x8f100
		if (*v8 == 0) {
			// 0x8f10c
			*v8 = 1;
			char *v9 = (char *)*(int32_t *)(g23 - 0x70a4); // 0x8f124
			*v9 = *v9 + 1;
			EventPlrMsg(*(int32_t *)(g23 - 0x5c9c), g32 + 316 + g33);
			// branch -> 0x8f13c
		}
	}
	int32_t v10 = g32 + g33; // 0x8f13c
	g36 = v10;
	if (*(char *)(v10 + 29) == 0) {
		// 0x8f264
		return 5;
	}
	// 0x8f14c
	if (*(int32_t *)g35 != g29) {
		int32_t v11 = v10 + 56; // 0x8f164
		g30 = v11;
		*(int32_t *)v11 = (int32_t) * (char *)(g28 + 1);
		int32_t v12 = g36 + 60; // 0x8f16c
		g31 = v12;
		*(int32_t *)v12 = (int32_t) * (char *)(g28 + 2);
		*(int32_t *)(g36 + 52) = (int32_t) * (int16_t *)(g28 + 3);
		*(int32_t *)(g36 + 532) = 0;
		int32_t v13 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8f184
		if (v13 == *(int32_t *)(g36 + 52)) {
			// 0x8f194
			LoadPlrGFX(g29, 1);
			SyncInitPlr(g29);
			int32_t v14 = g36; // 0x8f1a8
			if (*(int32_t *)(v14 + 404) < 64) {
				// 0x8f1c4
				*(int32_t *)(v14 + 120) = g27;
				LoadPlrGFX(g29, 128);
				int32_t v15 = g36; // 0x8f1d8
				*(int32_t *)v15 = 8;
				int32_t v16 = g36;                      // 0x8f1e8
				int32_t v17 = *(int32_t *)(v16 + 1100); // 0x8f1ec
				NewPlrAnim(g29, v15 + 1032, *(int32_t *)(v16 + 1096), 1, v17);
				int32_t v18 = g36; // 0x8f1f4
				*(int32_t *)(v18 + 140) = *(int32_t *)(v18 + 136) - 1;
				int32_t v19 = g36; // 0x8f204
				*(int32_t *)(v19 + 492) = 2 * *(int32_t *)(v19 + 136);
				int32_t v20 = *(int32_t *)g31 + 112 * *(int32_t *)g30;              // 0x8f220
				char *v21 = (char *)(*(int32_t *)*(int32_t *)(g23 - 0x779c) + v20); // 0x8f224
				*v21 = *v21 | 4;
				// branch -> 0x8f230
			} else {
				// 0x8f1b4
				StartStand(g29, 0);
				// branch -> 0x8f230
			}
			int32_t v22 = g32 + g33;                                  // 0x8f234
			int32_t v23 = llvm_ctlz_i32(*(int32_t *)g35 - g29, true); // 0x8f244
			g37 = *(int32_t *)g31;
			g38 = (int32_t) * (char *)(v22 + 314);
			int32_t v24 = __asm_rlwinm(v23, 27, 24, 31); // 0x8f250
			g39 = v24;
			*(int32_t *)(v22 + 160) = AddVision(v24);
			*(int32_t *)(v22 + 156) = -1;
			// branch -> 0x8f264
		}
	}
	// 0x8f264
	return 5;
}

// Address range: 0x8f27c - 0x8f40c
int32_t On_ACTIVATEPORTAL(int32_t a1, int32_t a2)
{
	g35 = a2;
	g36 = *(int32_t *)(g23 - 0x7664);
	g33 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8f2b0
		g38 = 9;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8f3ec
	} else {
		int32_t v1 = a1 + 3;                                     // 0x8f2c4
		int32_t v2 = 2 * v1;                                     // 0x8f2c8
		unsigned char v3 = *(char *)(v2 | 1);                    // 0x8f2c8
		int16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8f2c8
		*(int16_t *)v1 = v4;
		int32_t v5 = 2 * (a1 + 5);                               // 0x8f2d8
		unsigned char v6 = *(char *)(v5 | 1);                    // 0x8f2d8
		int16_t v7 = 256 * (int16_t)v6 | (int16_t) * (char *)v5; // 0x8f2d8
		int32_t v8 = g33;                                        // 0x8f2dc
		*(int16_t *)(v8 + 5) = v7;
		int32_t v9 = 2 * (v8 + 7);                                 // 0x8f2e8
		unsigned char v10 = *(char *)(v9 | 1);                     // 0x8f2e8
		int16_t v11 = 256 * (int16_t)v10 | (int16_t) * (char *)v9; // 0x8f2e8
		*(int16_t *)(g33 + 7) = v11;
		int32_t v12 = g33;                           // 0x8f2f8
		int32_t v13 = (int32_t) * (char *)(v12 + 1); // 0x8f2f8
		unsigned char v14 = *(char *)(v12 + 2);      // 0x8f2fc
		uint16_t v15 = *(int16_t *)(v12 + 3);        // 0x8f300
		uint16_t v16 = *(int16_t *)(v12 + 5);        // 0x8f304
		uint16_t v17 = *(int16_t *)(v12 + 7);        // 0x8f308
		function_abea0(g35, v13, (int32_t)v14, (int32_t)v15, (int32_t)v16, (int32_t)v17);
		int32_t v18 = g35; // 0x8f318
		int32_t v19;       // 0x8f3c4
		uint16_t v20;      // 0x8f3c4
		uint16_t v21;      // 0x8f3cc
		uint16_t v22;      // 0x8f3d0
		unsigned char v23; // 0x8f3d8
		unsigned char v24; // 0x8f3e0
		if (v18 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
			unsigned char v25 = *(char *)*(int32_t *)(g23 - 0x77e4); // 0x8f324
			int32_t v26 = v25;                                       // 0x8f324
			if (v25 == 0) {
				// 0x8f330
				function_abe6c(v18, v26);
				// branch -> 0x8f3c4
				// 0x8f3c4
				v19 = g33;
				v20 = *(int16_t *)(v19 + 3);
				v21 = *(int16_t *)(v19 + 5);
				v22 = *(int16_t *)(v19 + 7);
				v23 = *(char *)(v19 + 1);
				v24 = *(char *)(v19 + 2);
				function_8c158(g35, v23, (int32_t)v24, (int32_t)(v20 % 256), (int32_t)(v21 % 256), (int32_t)(v22 % 256));
				// branch -> 0x8f3ec
				// 0x8f3ec
				return 9;
			}
			// 0x8f33c
			if (v26 == *(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v18 + 52)) {
				int32_t v27 = *(int32_t *)*(int32_t *)(g23 - 0x7668); // 0x8f360
				int32_t v28 = 1;                                      // 0x8f3a0
				if (v27 >= 1) {
					int32_t v29 = g36;
					int32_t v30 = 1;                          // 0x8f3a011
					int32_t v31 = *(int32_t *)(g23 - 0x7660); // 0x8f398
					// branch -> 0x8f370
					int32_t v32; // 0x8f3a010
					while (true) {
						int32_t v33 = 180 * *(int32_t *)v31; // 0x8f374
						v32 = v30;
						if (*(int32_t *)(v33 + v29) == 10) {
							// 0x8f384
							if (v18 == *(int32_t *)(v33 + 120 + v29)) {
								// 0x8f394
								v32 = 0;
								// branch -> 0x8f398
							} else {
								v32 = v30;
							}
						}
						int32_t v34 = v27 - 1; // 0x8f39c
						if (v34 == 0) {
							// break -> 0x8f3a0
							break;
						}
						v30 = v32;
						v27 = v34;
						v31 += 4;
						// continue -> 0x8f370
					}
					// 0x8f3a0
					v28 = v32;
					// branch -> 0x8f3a0
				}
				// 0x8f3a0
				if (v28 != 0) {
					int32_t v35 = g33;                           // 0x8f3a8
					int32_t v36 = (int32_t) * (char *)(v35 + 1); // 0x8f3a8
					function_abcb8(v18, v36, (int32_t) * (char *)(v35 + 2));
					// branch -> 0x8f3c4
				}
			} else {
				// 0x8f3bc
				RemovePortalMissile(v18);
				// branch -> 0x8f3c4
			}
			// 0x8f3c4
			v19 = g33;
			v20 = *(int16_t *)(v19 + 3);
			v21 = *(int16_t *)(v19 + 5);
			v22 = *(int16_t *)(v19 + 7);
			v23 = *(char *)(v19 + 1);
			v24 = *(char *)(v19 + 2);
			function_8c158(g35, v23, (int32_t)v24, (int32_t)(v20 % 256), (int32_t)(v21 % 256), (int32_t)(v22 % 256));
			// branch -> 0x8f3ec
			// 0x8f3ec
			return 9;
		}
		// 0x8f3c4
		v19 = g33;
		v20 = *(int16_t *)(v19 + 3);
		v21 = *(int16_t *)(v19 + 5);
		v22 = *(int16_t *)(v19 + 7);
		v23 = *(char *)(v19 + 1);
		v24 = *(char *)(v19 + 2);
		function_8c158(g35, v23, (int32_t)v24, (int32_t)(v20 % 256), (int32_t)(v21 % 256), (int32_t)(v22 % 256));
		// branch -> 0x8f3ec
	}
	// 0x8f3ec
	return 9;
}

// Address range: 0x8f40c - 0x8f488
int32_t On_DEACTIVATEPORTAL(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x72bc); // 0x8f414
	g36 = a2;
	if (*(char *)v1 == 1) {
		// 0x8f434
		g38 = 1;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8f470
	} else {
		// 0x8f448
		if (PortalOnLevel(a2, v1, a1) != 0) {
			// 0x8f458
			RemovePortalMissile(g36);
			// branch -> 0x8f460
		}
		// 0x8f460
		DeactivatePortal(g36);
		RemovePlrPortal(g36);
		// branch -> 0x8f470
	}
	// 0x8f470
	return 1;
}

// Address range: 0x8f488 - 0x8f504
int32_t function_8f488(int32_t a1, int32_t a2)
{
	g36 = a2;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8f4b0
		g38 = 1;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8f4ec
	} else {
		int32_t v1 = a2; // 0x8f4e4
		if (a2 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
			// 0x8f4d4
			*(int32_t *)*(int32_t *)(g23 - 0x75cc) = 0;
			gamemenu_off();
			v1 = g36;
			// branch -> 0x8f4e4
		}
		// 0x8f4e4
		RestartTownLvl(v1);
		// branch -> 0x8f4ec
	}
	// 0x8f4ec
	return 1;
}

// Address range: 0x8f504 - 0x8f58c
int32_t function_8f504(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8f524
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8f57c
	} else {
		int32_t v1 = a1 + 1;                                      // 0x8f538
		int32_t v2 = 2 * v1;                                      // 0x8f53c
		unsigned char v3 = *(char *)(v2 | 1);                     // 0x8f53c
		uint16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8f53c
		*(int16_t *)v1 = v4;
		if (v4 < 751) {
			if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x8f56c
				function_ab038(a2, (int32_t)v4, a1);
				// branch -> 0x8f57c
			}
			// 0x8f57c
			return 3;
		}
	}
	// 0x8f57c
	return 3;
}

// Address range: 0x8f58c - 0x8f614
int32_t function_8f58c(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8f5ac
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8f604
	} else {
		int32_t v1 = a1 + 1;                                      // 0x8f5c0
		int32_t v2 = 2 * v1;                                      // 0x8f5c4
		unsigned char v3 = *(char *)(v2 | 1);                     // 0x8f5c4
		uint16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8f5c4
		*(int16_t *)v1 = v4;
		if (v4 < 751) {
			if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x8f5f4
				function_ab1a0(a2, (int32_t)v4, a1);
				// branch -> 0x8f604
			}
			// 0x8f604
			return 3;
		}
	}
	// 0x8f604
	return 3;
}

// Address range: 0x8f614 - 0x8f69c
int32_t function_8f614(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8f634
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8f68c
	} else {
		int32_t v1 = a1 + 1;                                      // 0x8f648
		int32_t v2 = 2 * v1;                                      // 0x8f64c
		unsigned char v3 = *(char *)(v2 | 1);                     // 0x8f64c
		uint16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8f64c
		*(int16_t *)v1 = v4;
		if (v4 < 751) {
			if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x8f67c
				function_ab114(a2, (int32_t)v4, a1);
				// branch -> 0x8f68c
			}
			// 0x8f68c
			return 3;
		}
	}
	// 0x8f68c
	return 3;
}

// Address range: 0x8f69c - 0x8f724
int32_t function_8f69c(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8f6bc
		g38 = 3;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8f714
	} else {
		int32_t v1 = a1 + 1;                                      // 0x8f6d0
		int32_t v2 = 2 * v1;                                      // 0x8f6d4
		unsigned char v3 = *(char *)(v2 | 1);                     // 0x8f6d4
		uint16_t v4 = 256 * (int16_t)v3 | (int16_t) * (char *)v2; // 0x8f6d4
		*(int16_t *)v1 = v4;
		if (v4 < 751) {
			if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x8f704
				function_ab27c(a2, (int32_t)v4, a1);
				// branch -> 0x8f714
			}
			// 0x8f714
			return 3;
		}
	}
	// 0x8f714
	return 3;
}

// Address range: 0x8f724 - 0x8f750
int32_t On_STRING2(int32_t a1, int32_t a2)
{
	// 0x8f724
	return SendPlrMsg(a2, a1);
}

// Address range: 0x8f750 - 0x8f7c4
int32_t On_SYNCQUEST(int32_t a1, int32_t a2)
{
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8f770
		g38 = 5;
		msg_send_packet((char)a2, a1);
		// branch -> 0x8f7b0
	} else {
		// 0x8f784
		if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
			int32_t v1 = (int32_t) * (char *)(a1 + 1); // 0x8f794
			unsigned char v2 = *(char *)(a1 + 2);      // 0x8f798
			unsigned char v3 = *(char *)(a1 + 3);      // 0x8f79c
			unsigned char v4 = *(char *)(a1 + 4);      // 0x8f7a0
			SetMultiQuest(v1, v2, (int32_t)v3, (int32_t)v4);
			// branch -> 0x8f7a8
		}
		// 0x8f7a8
		*(char *)(g23 - 0x4d30) = 1;
		// branch -> 0x8f7b0
	}
	// 0x8f7b0
	return 5;
}

// Address range: 0x8f7c4 - 0x8f894
int32_t On_ENDSHIELD(int32_t a1, int32_t a2)
{
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x8f7d4
	g33 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7668); // 0x8f7d8
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1 || a1 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		// 0x8f87c
		return 1;
	}
	int32_t v3 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8f810
	if (v3 == *(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * a1 + 52)) {
		// 0x8f820
		g31 = 0;
		if (*(int32_t *)v2 > 0) {
			int32_t v4 = 0;                          // 0x8f86c10
			int32_t v5 = *(int32_t *)(g23 - 0x7660); // 0x8f82c
			while (true) {
				int32_t v6 = *(int32_t *)v5; // 0x8f82c
				int32_t v7 = 180 * v6;       // 0x8f830
				int32_t v8 = v6;             // r26
				int32_t v9 = v2;             // 0x8f870
				int32_t v10 = v4;            // 0x8f86c
				int32_t v11 = v5;            // 0x8f868
				if (*(int32_t *)(v7 + v1) == 13) {
					// 0x8f844
					if (g36 == *(int32_t *)(v7 + 120 + v1)) {
						// 0x8f854
						ClearMissileSpot(v6);
						g37 = g31;
						DeleteMissile(v8);
						v9 = g35;
						v10 = g31;
						v11 = g32;
						// branch -> 0x8f868
					} else {
						v9 = v2;
						v10 = v4;
						v11 = v5;
					}
				}
				int32_t v12 = v10 + 1; // 0x8f86c
				g31 = v12;
				if (v12 < *(int32_t *)v9) {
					// 0x8f868
					v2 = v9;
					v4 = v12;
					v1 = g33;
					v5 = v11 + 4;
					// branch -> 0x8f82c
					continue;
				}
			}
		}
	}
	// 0x8f87c
	return 1;
}

// Address range: 0x8f894 - 0x8f8a4
int32_t function_8f894(int32_t a1, int32_t a2)
{
	// 0x8f894
	return 1;
}

// Address range: 0x8f8a4 - 0x8f8b4
int32_t function_8f8a4(int32_t a1, int32_t a2)
{
	// 0x8f8a4
	return 1;
}

// Address range: 0x8f8b4 - 0x8f960
int32_t function_8f8b4(int32_t a1, int32_t a2)
{
	g35 = a1;
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0x8f944
		return 3;
	}
	int32_t v1 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x8f8e8
	int32_t v2 = 0x55ec * a2 + *(int32_t *)(g23 - 0x77a8);       // 0x8f8ec
	g36 = v2;
	if (v1 != *(int32_t *)(v2 + 52)) {
		// 0x8f944
		return 3;
	}
	// 0x8f8fc
	if (a2 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		// 0x8f90c
		ClrPlrPath(a2);
		*(int32_t *)(g36 + 164) = 18;
		*(char *)(g36 + 168) = 4;
		*(char *)(g36 + 169) = (char)3;
		*(int32_t *)(g36 + 32) = 12;
		*(int32_t *)(g36 + 36) = (int32_t) * (char *)(g35 + 1);
		*(int32_t *)(g36 + 40) = (int32_t) * (char *)(g35 + 2);
		// branch -> 0x8f944
	}
	// 0x8f944
	return 3;
}

// Address range: 0x8f960 - 0x8f98c
int32_t function_8f960(int32_t a1, int32_t a2)
{
	// 0x8f960
	if (*(char *)*(int32_t *)(g23 - 0x72bc) != 1) {
		// 0x8f970
		*(char *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * a1 + 0x5594) = 1;
		// branch -> 0x8f984
	}
	// 0x8f984
	return 1;
}

// Address range: 0x8f98c - 0x8f9b8
int32_t function_8f98c(int32_t a1, int32_t a2)
{
	// 0x8f98c
	if (*(char *)*(int32_t *)(g23 - 0x72bc) != 1) {
		// 0x8f99c
		*(char *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * a1 + 0x5594) = 0;
		// branch -> 0x8f9b0
	}
	// 0x8f9b0
	return 1;
}

// Address range: 0x8f9b8 - 0x8f9c0
int32_t function_8f9b8(int32_t a1, int32_t a2)
{
	// 0x8f9b8
	return 1;
}

// Address range: 0x8f9c0 - 0x8ff2c
int32_t ParseCmd(int32_t a1, char *a2)
{
	int32_t v1 = g10; // 0x8f9c0
	*(char *)(g23 - 0x4d48) = *(char *)&g37;
	int32_t v2;       // 0x8ff08
	unsigned char v3; // 0x8fa08
	if (*(int16_t *)(2 * a1 + *(int32_t *)(g23 - 0x7074)) == 0) {
		// 0x8fa08
		v3 = *(char *)&g37;
		if (v3 <= 93) {
			// 0x8fa14
			return *(int32_t *)(*(int32_t *)(g23 - 0x5ca0) + 4 * (int32_t)v3);
		}
		// 0x8fec8
		v2 = a1;
		g34 = v2;
		SNetDropPlayer(v2, 0x40000006);
		// branch -> 0x8ff1c
		// 0x8ff1c
		g10 = v1;
		return 0;
	}
	unsigned char v4 = *(char *)(g23 - 0x4d48); // 0x8f9ec
	if (v4 == 2) {
		// 0x8fa08
		v3 = *(char *)&g37;
		if (v3 <= 93) {
			// 0x8fa14
			return *(int32_t *)(*(int32_t *)(g23 - 0x5ca0) + 4 * (int32_t)v3);
		}
		// 0x8fec8
		v2 = a1;
		g34 = v2;
		SNetDropPlayer(v2, 0x40000006);
		// branch -> 0x8ff1c
		// 0x8ff1c
		g10 = v1;
		return 0;
	}
	// 0x8f9f8
	if (v4 != 54) {
		// 0x8ff1c
		g10 = v1;
		return 0;
	}
	// 0x8fa08
	v3 = *(char *)&g37;
	if (v3 <= 93) {
		// 0x8fa14
		return *(int32_t *)(*(int32_t *)(g23 - 0x5ca0) + 4 * (int32_t)v3);
	}
	// 0x8fec8
	v2 = a1;
	g34 = v2;
	SNetDropPlayer(v2, 0x40000006);
	// branch -> 0x8ff1c
	// 0x8ff1c
	g10 = v1;
	return 0;
}

// Address range: 0x91ca0 - 0x91ec0
int32_t recv_plrinfo(int32_t result)
{
	int32_t v1 = result; // 0x91cac
	g32 = v1;
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t v2 = g37; // 0x91cb4
	g33 = v2;
	int32_t v3 = g38; // 0x91cb8
	g35 = v3;
	if (*(int32_t *)*(int32_t *)(g23 - 0x77ac) == v1) {
		// 0x91eac
		return result;
	}
	int32_t v4 = *(int32_t *)(g23 - 0x7074); // 0x91cd0
	result = v4;
	int32_t v5 = v4 + 2 * v1; // 0x91cdc
	g30 = v5;
	int16_t *v6 = (int16_t *)v5; // 0x91ce0
	int32_t v7 = v2;             // 0x91d283
	int32_t v8;                  // bp-40
	int32_t v9;                  // 0x91d30
	int32_t v10;                 // 0x91d8c
	int32_t v11;                 // 0x91e10
	int32_t v12;                 // 0x91e54
	int32_t v13;                 // 0x91e64
	int32_t v14;                 // 0x91e70
	int32_t v15;                 // 0x91e80
	int32_t v16;                 // 0x91e8c
	int32_t v17;                 // 0x91d20
	int16_t *v18;                // 0x91d44
	int16_t *v19;                // 0x91d54
	char *v20;                   // 0x91dc0
	int32_t v21;                 // 0x91dec
	int32_t v22;                 // 0x91d34
	uint16_t result2;            // 0x91d44
	int32_t v23;                 // 0x91d7c
	int32_t v24;                 // 0x91e9c
	int32_t v25;                 // 0x91e14
	int32_t v26;                 // 0x91e64
	char *v27;                   // 0x91ea0
	if (*(int16_t *)(v2 + 1) == *v6) {
		// 0x91d00
		v9 = v7;
		if (v3 == 0) {
			// 0x91d08
			if (*(int16_t *)g30 == 0) {
				// 0x91d14
				multi_send_pinfo(g32, 2);
				v9 = g33;
				// branch -> 0x91d20
			} else {
				v9 = v7;
			}
		}
		// 0x91d20
		v17 = 1266 * g32;
		g28 = v17;
		v22 = *(int32_t *)(g23 - 0x5c5c) + v17;
		g29 = v22;
		g34 = (int32_t) * (int16_t *)(v9 + 1) + v22;
		memcpy();
		v18 = (int16_t *)g30;
		result2 = *v18;
		*v18 = *(int16_t *)(g33 + 3) + result2;
		v19 = (int16_t *)g30;
		if (*v19 != 1266) {
			// 0x91eac
			return result2;
		}
		// 0x91d60
		*v19 = 0;
		multi_player_left_msg(g32, 0);
		v23 = &v8;
		*(int32_t *)(g36 + 0x55ec * g32 + 532) = g31;
		v10 = g28 + *(int32_t *)(g23 - 0x5c60);
		v8 = g29;
		function_a01e8((int32_t *)v10, v23);
		result = UnPackPlayer(v10, g32, 1);
		if (g35 != 0) {
			// 0x91db0
			*(char *)(g33 + 29) = 1;
			v20 = (char *)*(int32_t *)(g23 - 0x70a4);
			*v20 = *v20 + 1;
			v21 = g30 + g36 + 316;
			EventPlrMsg(v21, v21);
			LoadPlrGFX(g32, 1);
			SyncInitPlr(g32);
			v11 = g28;
			v25 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
			result = v25;
			if (v25 == *(int32_t *)(v11 + 52)) {
				// 0x91e20
				if (*(int32_t *)(v11 + 404) < 64) {
					// 0x91e3c
					*(int32_t *)(v11 + 120) = 0;
					LoadPlrGFX(g32, 128);
					v12 = g28;
					*(int32_t *)v12 = 8;
					v13 = g28;
					v26 = *(int32_t *)(v13 + 1096);
					NewPlrAnim(g32, v12 + 1032, v26, 1, *(int32_t *)(v13 + 1100));
					v14 = g28;
					*(int32_t *)(v14 + 140) = *(int32_t *)(v14 + 136) - 1;
					v15 = g28;
					*(int32_t *)(v15 + 492) = 2 * *(int32_t *)(v15 + 136);
					v16 = g28;
					v24 = *(int32_t *)(v16 + 60) + 112 * *(int32_t *)(v16 + 56);
					result = v24;
					v27 = (char *)(*(int32_t *)*(int32_t *)(g23 - 0x779c) + v24);
					*v27 = *v27 | 4;
					// branch -> 0x91eac
				} else {
					// 0x91e2c
					result = StartStand(g32, 0);
					// branch -> 0x91eac
				}
				// 0x91eac
				return result;
			}
		}
		// 0x91eac
		return result;
	}
	// 0x91cec
	*v6 = 0;
	int32_t v28 = g33; // 0x91cf4
	if (*(int16_t *)(v28 + 1) == 0) {
		// 0x91cec
		v7 = v28;
		// branch -> 0x91d00
		// 0x91d00
		v9 = v7;
		if (g35 == 0) {
			// 0x91d08
			if (*(int16_t *)g30 == 0) {
				// 0x91d14
				multi_send_pinfo(g32, 2);
				v9 = g33;
				// branch -> 0x91d20
			} else {
				v9 = v7;
			}
		}
		// 0x91d20
		v17 = 1266 * g32;
		g28 = v17;
		v22 = *(int32_t *)(g23 - 0x5c5c) + v17;
		g29 = v22;
		g34 = (int32_t) * (int16_t *)(v9 + 1) + v22;
		memcpy();
		v18 = (int16_t *)g30;
		result2 = *v18;
		result = result2;
		*v18 = *(int16_t *)(g33 + 3) + result2;
		v19 = (int16_t *)g30;
		if (*v19 == 1266) {
			// 0x91d60
			*v19 = 0;
			multi_player_left_msg(g32, 0);
			v23 = &v8;
			*(int32_t *)(g36 + 0x55ec * g32 + 532) = g31;
			v10 = g28 + *(int32_t *)(g23 - 0x5c60);
			v8 = g29;
			function_a01e8((int32_t *)v10, v23);
			result = UnPackPlayer(v10, g32, 1);
			if (g35 != 0) {
				// 0x91db0
				*(char *)(g33 + 29) = 1;
				v20 = (char *)*(int32_t *)(g23 - 0x70a4);
				*v20 = *v20 + 1;
				v21 = g30 + g36 + 316;
				EventPlrMsg(v21, v21);
				LoadPlrGFX(g32, 1);
				SyncInitPlr(g32);
				v11 = g28;
				v25 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
				result = v25;
				if (v25 == *(int32_t *)(v11 + 52)) {
					// 0x91e20
					if (*(int32_t *)(v11 + 404) < 64) {
						// 0x91e3c
						*(int32_t *)(v11 + 120) = 0;
						LoadPlrGFX(g32, 128);
						v12 = g28;
						*(int32_t *)v12 = 8;
						v13 = g28;
						v26 = *(int32_t *)(v13 + 1096);
						NewPlrAnim(g32, v12 + 1032, v26, 1, *(int32_t *)(v13 + 1100));
						v14 = g28;
						*(int32_t *)(v14 + 140) = *(int32_t *)(v14 + 136) - 1;
						v15 = g28;
						*(int32_t *)(v15 + 492) = 2 * *(int32_t *)(v15 + 136);
						v16 = g28;
						v24 = *(int32_t *)(v16 + 60) + 112 * *(int32_t *)(v16 + 56);
						result = v24;
						v27 = (char *)(*(int32_t *)*(int32_t *)(g23 - 0x779c) + v24);
						*v27 = *v27 | 4;
						// branch -> 0x91eac
					} else {
						// 0x91e2c
						result = StartStand(g32, 0);
						// branch -> 0x91eac
					}
					// 0x91eac
					return result;
				}
			}
		}
	}
	// 0x91eac
	return result;
}
