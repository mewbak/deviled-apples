// Address range: 0x53b94 - 0x53c1c
int32_t gmenu_print_text(int32_t result, int32_t a2, char *a3)
{
	int32_t v1 = g10;          // 0x53b98
	int32_t v2 = g23 + 0x28d8; // 0x53b9c
	g33 = v2;
	g29 = result;
	int32_t v3 = g23 + 0x2858; // 0x53ba4
	g35 = v3;
	int32_t v4 = g23 - 0x2ae8; // 0x53ba8
	g36 = v4;
	g30 = a2;
	int32_t v5 = (int32_t)a3; // 0x53bb0
	g31 = v5;
	if (*(char *)v5 == 0) {
		// 0x53c08
		g10 = v1;
		return result;
	}
	while (true) {
		int32_t v6 = v5 + 1; // 0x53bc4
		g31 = v6;
		unsigned char v7 = *(char *)((int32_t) * (char *)v5 + v4); // 0x53bc8
		unsigned char v8 = *(char *)((int32_t)v7 + v3);            // 0x53bcc
		int32_t v9 = v8;                                           // 0x53bcc
		g32 = v9;
		int32_t result2 = result; // 0x53c1817
		int32_t v10 = result;     // 0x53bf4
		int32_t v11 = v9;         // 0x53bf0
		int32_t v12 = v2;         // 0x53bf0
		if (v8 != 0) {
			// 0x53bd8
			result2 = CelDecodeLightOnly(result, g30, *(int32_t *)(g23 - 0x4e64), v9, 46);
			v6 = g31;
			v10 = g29;
			v11 = g32;
			v12 = g33;
			// branch -> 0x53bf0
		}
		int32_t v13 = v10 + 2 + (int32_t) * (char *)(v12 + v11); // 0x53bf8
		g29 = v13;
		if (*(char *)v6 == 0) {
			// 0x53c08
			g10 = v1;
			return result2;
		}
		// 0x53bf0
		result = v13;
		v2 = v12;
		v3 = g35;
		v4 = g36;
		v5 = v6;
		// branch -> 0x53bc0
	}
}

// Address range: 0x53c1c - 0x53c74
int32_t gmenu_draw_pause(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77e4); // 0x53c20
	int32_t result = v1;                     // 0x53c703
	int32_t v2 = g23;                        // 0x53c48
	if (*(char *)v1 != 0) {
		// 0x53c38
		result = RedBack(v1);
		v2 = g23;
		// branch -> 0x53c3c
	}
	if (*(int32_t *)(v2 - 0x4e70) == 0) {
		// 0x53c48
		*(int32_t *)*(int32_t *)(v2 - 0x7290) = 0;
		result = gmenu_print_text(316, 336, (char *)*(int32_t *)(v2 - 0x621c));
		// branch -> 0x53c64
	}
	// 0x53c64
	return result;
}

// Address range: 0x53c74 - 0x53cb8
int32_t FreeGMenu(int32_t a1)
{
	// 0x53c74
	MemFreeDbg((int32_t *)(g23 - 0x4e5c));
	MemFreeDbg((int32_t *)(g23 - 0x4e64));
	MemFreeDbg((int32_t *)(g23 - 0x4e60));
	MemFreeDbg((int32_t *)(g23 - 0x4e68));
	int32_t result = MemFreeDbg((int32_t *)(g23 - 0x4e6c)); // 0x53ca4
	return result;
}

// Address range: 0x53cb8 - 0x53d44
int32_t gmenu_init_menu(int32_t a1)
{
	int32_t v1 = 0; // r0
	*(int32_t *)(g23 - 0x4e70) = 0;
	*(char *)(g23 - 0x4e58) = (char)1;
	*(int32_t *)(g23 - 0x4e78) = v1;
	*(int32_t *)(g23 - 0x4e74) = v1;
	*(int32_t *)(g23 - 0x4e7c) = v1;
	*(char *)(g23 - 0x4e84) = (char)v1;
	*(int32_t *)(g23 - 0x4e5c) = LoadFileInMem(*(int32_t *)(g23 - 0x6220), NULL);
	*(int32_t *)(g23 - 0x4e64) = LoadFileInMem(*(int32_t *)(g23 - 0x6224), NULL);
	*(int32_t *)(g23 - 0x4e60) = LoadFileInMem(*(int32_t *)(g23 - 0x6228), NULL);
	*(int32_t *)(g23 - 0x4e68) = LoadFileInMem(*(int32_t *)(g23 - 0x622c), NULL);
	int32_t result = LoadFileInMem(*(int32_t *)(g23 - 0x6230), NULL); // 0x53d2c
	*(int32_t *)(g23 - 0x4e6c) = result;
	return result;
}

// Address range: 0x53d44 - 0x53d5c
int32_t gmenu_exception(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x4e70); // 0x53d44
	return -1 - v1 < -v1;
}

// Address range: 0x53d5c - 0x53e18
int32_t gmenu_up_down(int32_t result)
{
	int32_t v1 = g10; // 0x53d5c
	if (*(int32_t *)(g23 - 0x4e78) == 0) {
		// 0x53e08
		g10 = v1;
		return result;
	}
	// 0x53d74
	*(char *)(g23 - 0x4e84) = 0;
	int32_t v2 = *(int32_t *)(g23 - 0x4e7c); // 0x53df0
	int32_t v3 = *(int32_t *)(g23 - 0x4e70); // 0x53df4
	int32_t v4 = v2;                         // 0x53e00
	// branch -> 0x53dfc
	int32_t v5;
	while (true) {
		// 0x53dfc
		if (v4 == 0) {
			// 0x53e08
			g10 = v1;
			return result;
		}
		int32_t *v6 = (int32_t *)(g23 - 0x4e78); // 0x53db0
		int32_t v7 = *v6;                        // 0x53db0
		if (result == 0) {
			// 0x53db0
			if (v7 == v3) {
				// 0x53dbc
				*v6 = v3 + 12 * v2;
				// branch -> 0x53dc0
			}
			int32_t *v8 = (int32_t *)(g23 - 0x4e78); // 0x53dc0
			*v8 = *v8 - 12;
			// branch -> 0x53dcc
		} else {
			// 0x53d8c
			*v6 = v7 + 12;
			int32_t *v9 = (int32_t *)(g23 - 0x4e78); // 0x53d98
			if (*(int32_t *)(*v9 + 8) == 0) {
				// 0x53da8
				*v9 = v3;
				// branch -> 0x53dcc
			}
		}
		// 0x53dcc
		v5 = v4 - 1;
		if (__asm_rlwinm_(*(int32_t *)*(int32_t *)(g23 - 0x4e78), 0, 0, 0) != 0) {
			// break -> 0x53ddc
			break;
		}
		v4 = v5;
		// continue -> 0x53dfc
	}
	// 0x53ddc
	if (v5 != 0) {
		// 0x53de4
		g34 = 69;
		result = PlaySFX(69);
		// branch -> 0x53e08
	}
	// 0x53e08
	g10 = v1;
	return result;
}

// Address range: 0x53e18 - 0x53ec8
int32_t gmenu_call_proc(int32_t result)
{
	int32_t v1 = g36; // 0x53e18
	g36 = g38;
	int32_t v2 = g35; // 0x53e28
	g35 = result;
	int32_t v3 = 0; // r0
	*(int32_t *)*(int32_t *)(g23 - 0x75d0) = 0;
	*(int32_t *)(g23 - 0x4e70) = g35;
	*(int32_t *)(g23 - 0x4e78) = g35;
	*(char *)(g23 - 0x4e84) = (char)v3;
	*(int32_t *)(g23 - 0x4e74) = g37;
	*(int32_t *)(g23 - 0x4e7c) = v3;
	if (result == 0) {
		// branch -> 0x53eb0
	} else {
		int32_t v4 = g37; // 0x53e58
		if (v4 != 0) {
			// 0x53e60
			g34 = g35;
			g15 = v4;
			function_ec910();
			// branch -> 0x53e70
		}
		int32_t v5 = g35; // 0x53e70
		int32_t v6 = v5;  // 0x53e98
		if (*(int32_t *)(v5 + 8) != 0) {
			int32_t *v7 = (int32_t *)(g23 - 0x4e7c); // 0x53e78
			*v7 = *v7 + 1;
			while (*(int32_t *)(20 + v5) != 0) {
				// 0x53e78
				v5 += 12;
				v7 = (int32_t *)(g23 - 0x4e7c);
				*v7 = *v7 + 1;
				// continue -> 0x53e78
			}
			// 0x53e88
			v6 = g35;
			// branch -> 0x53e94
		}
		// 0x53e94
		*(int32_t *)(g23 - 0x4e78) = 12 * g36 + v6;
		gmenu_up_down(0);
		result = gmenu_up_down(1);
		// branch -> 0x53eb0
	}
	// 0x53eb0
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0x53ec8 - 0x53f48
int32_t gmenu_clear_buffer(int32_t result, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10;                                                  // 0x53ecc
	int32_t v2 = *(int32_t *)(4 * a2 + *(int32_t *)(g23 - 0x7698));    // 0x53ef4
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7804) + v2 + result; // 0x53f00
	int32_t v4 = a4 - 1;                                               // r30
	if (a4 == 0) {
		// 0x53f2c
		g10 = v1;
		return result;
	}
	g34 = v3;
	int32_t result2 = memset(v3, a3, 205); // 0x53f14
	// 0x53f2c
	g10 = v1;
	while (v4 != 0) {
		// 0x53f08
		v4--;
		// 0x53f08
		v3 -= 768;
		g34 = v3;
		result2 = memset(v3, a3, 205);
		// 0x53f2c
		g10 = v1;
		// branch -> 0x53f08
	}
	return result2;
}

// Address range: 0x53f48 - 0x53fa4
int32_t gmenu_get_lfont(void)
{
	// 0x53f48
	if (__asm_rlwinm_(g34, 0, 1, 1) != 0) {
		// 0x53f60
		return 490;
	}
	int32_t v1 = *(int32_t *)(g34 + 4); // 0x53f68
	if (*(char *)v1 == 0) {
		// 0x53f9c
		return -2;
	}
	int32_t v2 = 0;                                                      // 0x53f88
	int32_t v3 = v1 + 1;                                                 // 0x53f78
	unsigned char v4 = *(char *)((int32_t) * (char *)v1 + g23 - 0x2ae8); // 0x53f7c
	unsigned char v5 = *(char *)((int32_t)v4 + g23 + 0x2858);            // 0x53f80
	int32_t v6 = (int32_t) * (char *)((int32_t)v5 + g23 + 0x28d8);       // 0x53f84
	// branch -> 0x53f74
	while (*(char *)v3 != 0) {
		// 0x53f74
		v2 = v2 + 2 + v6;
		v1 = v3;
		v3 = v1 + 1;
		v4 = *(char *)((int32_t) * (char *)v1 + g23 - 0x2ae8);
		v5 = *(char *)((int32_t)v4 + g23 + 0x2858);
		v6 = (int32_t) * (char *)((int32_t)v5 + g23 + 0x28d8);
		// continue -> 0x53f74
	}
	// 0x53f90
	// branch -> 0x53f9c
	// 0x53f9c
	return v6 + v2;
}

// Address range: 0x53fa4 - 0x540cc
int32_t gmenu_draw_menu_item(int32_t *a1, int32_t a2)
{
	// 0x53fa4
	g34 = (int32_t)a1;
	g31 = g34;
	g32 = a2;
	int32_t v1 = gmenu_get_lfont(); // 0x53fbc
	g36 = v1;
	if (__asm_rlwinm_(v1, 0, 1, 1) == 0) {
		// branch -> 0x54040
	} else {
		int32_t v2 = CelDecodeOnly(g36 / 2 + 80, g32 - 10, *(int32_t *)(g23 - 0x4e6c), 1, 287); // 0x53fec
		int32_t v3 = __asm_rlwinm(v2, 20, 20, 31);                                              // 0x53ff4
		int32_t v4 = v3;                                                                        // 0x54010
		if (v3 <= 1) {
			// 0x54004
			v4 = 2;
			// branch -> 0x54008
		}
		int32_t v5 = 256 * (v2 % 0x1000) / v4; // 0x54010
		g33 = v5;
		gmenu_clear_buffer(g35 + 2, g32 - 12, v5 + 13, 28);
		v1 = CelDecodeOnly(g33 + g35 + 2, g32 - 12, *(int32_t *)(g23 - 0x4e68), 1, 27);
		// branch -> 0x54040
	}
	int32_t v6 = __asm_rlwinm_(v1, 0, 0, 0) == 0 ? 15 : 0;
	*(int32_t *)*(int32_t *)(g23 - 0x7290) = v6;
	int32_t result = gmenu_print_text(384 - g36 / 2, g32, (char *)*(int32_t *)(g31 + 4)); // 0x540c8
	if (g31 == *(int32_t *)(g23 - 0x4e78)) {
		unsigned char v7 = *(char *)(g23 - 0x4e58); // 0x5408c
		CelDecodeOnly(g33 - 54, g32 + 1, *(int32_t *)(g23 - 0x4e60), (int32_t)v7, 48);
		unsigned char v8 = *(char *)(g23 - 0x4e58); // 0x540a4
		int32_t v9 = g33 + g36 + 4;                 // 0x540a8
		result = CelDecodeOnly(v9, g32 + 1, *(int32_t *)(g23 - 0x4e60), (int32_t)v8, 48);
		// branch -> 0x540b8
	}
	// 0x540b8
	return result;
}

// Address range: 0x540cc - 0x54198
int32_t gmenu_draw(int32_t a1)
{
	int32_t v1 = g36;                        // 0x540cc
	int32_t v2 = g10;                        // 0x540d0
	int32_t v3 = g35;                        // 0x540d4
	int32_t v4 = *(int32_t *)(g23 - 0x4e70); // 0x540e0
	g34 = v4;
	if (v4 == 0) {
		// 0x54180
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return 0;
	}
	int32_t v5 = *(int32_t *)(g23 - 0x4e74); // 0x540ec
	g15 = v5;
	int32_t v6 = g23; // 0x54100
	int32_t v7;
	if (v5 != 0) {
		// 0x540f8
		function_ec910();
		v6 = v7;
		// branch -> 0x54100
	}
	// 0x54100
	g34 = CelDecodeOnly(236, 262, *(int32_t *)(v6 - 0x4e5c), 1, 296);
	int32_t v8 = *(int32_t *)(g23 - 0x4e70); // 0x54118
	int32_t result2;                         // r3
	int32_t result;                          // 0x54144
	int32_t v9;                              // 0x54168
	int32_t v10;                             // 0x5417c
	char *v11;                               // 0x5415c
	char *v12;                               // 0x54168
	if (*(int32_t *)(v8 + 8) == 0) {
		// 0x54144
		result = GetTickCount();
		result2 = result;
		if (result - *(int32_t *)(v7 - 0x4e80) < 26) {
			// 0x54180
			g36 = v1;
			g10 = v2;
			g35 = v3;
			return result;
		}
		// 0x5415c
		v11 = (char *)(v7 - 0x4e58);
		*v11 = *v11 + 1;
		v9 = g23;
		v12 = (char *)(v9 - 0x4e58);
		v10 = v9;
		if (*v12 == 9) {
			// 0x54174
			*v12 = 1;
			v10 = g23;
			// branch -> 0x5417c
		}
		// 0x5417c
		*(int32_t *)(v10 - 0x4e80) = result2;
		// branch -> 0x54180
		// 0x54180
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result2;
	}
	g34 = gmenu_draw_menu_item((int32_t *)v8, 320);
	int32_t v13 = g36; // 0x54134
	while (*(int32_t *)(v13 + 20) != 0) {
		// 0x54124
		g34 = gmenu_draw_menu_item((int32_t *)(v13 + 12), g35 + 45);
		v13 = g36;
		// continue -> 0x54124
	}
	// 0x54144
	result = GetTickCount();
	result2 = result;
	if (result - *(int32_t *)(v7 - 0x4e80) < 26) {
		// 0x54180
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result;
	}
	// 0x5415c
	v11 = (char *)(v7 - 0x4e58);
	*v11 = *v11 + 1;
	v9 = g23;
	v12 = (char *)(v9 - 0x4e58);
	v10 = v9;
	if (*v12 == 9) {
		// 0x54174
		*v12 = 1;
		v10 = g23;
		// branch -> 0x5417c
	}
	// 0x5417c
	*(int32_t *)(v10 - 0x4e80) = result2;
	// branch -> 0x54180
	// 0x54180
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result2;
}

// Address range: 0x54198 - 0x54224
int32_t gmenu_left_right(int32_t result)
{
	uint32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x4e78); // 0x541a8
	if (__asm_rlwinm_(v1, 0, 1, 1) == 0) {
		// 0x54214
		return result;
	}
	int32_t v2 = v1 % 0x1000;                  // 0x541b8
	int32_t v3 = __asm_rlwinm(v1, 20, 20, 31); // 0x541bc
	int32_t *v4;                               // 0x541f8
	int32_t v5;                                // 0x541e0
	if (result == 0) {
		// 0x541d4
		if (v2 != 0) {
			// 0x541dc
			// branch -> 0x541e0
			// 0x541e0
			v5 = *(int32_t *)(g23 - 0x4e78);
			g34 = 0;
			*(int32_t *)v5 = __asm_rlwinm(*(int32_t *)v5, 0, 0, 19);
			v4 = (int32_t *)*(int32_t *)(g23 - 0x4e78);
			*v4 = v2 - 1 | *v4;
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x4e78) + 8);
			result = function_ec910();
			// branch -> 0x54214
		}
		// 0x54214
		return result;
	}
	// 0x541c4
	if (v2 != v3) {
		// 0x541cc
		// branch -> 0x541e0
		// 0x541e0
		v5 = *(int32_t *)(g23 - 0x4e78);
		g34 = 0;
		*(int32_t *)v5 = __asm_rlwinm(*(int32_t *)v5, 0, 0, 19);
		v4 = (int32_t *)*(int32_t *)(g23 - 0x4e78);
		*v4 = v2 + 1 | *v4;
		g15 = *(int32_t *)(*(int32_t *)(g23 - 0x4e78) + 8);
		result = function_ec910();
		// branch -> 0x54214
	}
	// 0x54214
	return result;
}

// Address range: 0x54224 - 0x542f8
int32_t function_54224(int32_t a1)
{
	// 0x54224
	if (*(int32_t *)(g23 - 0x4e70) == 0) {
		// 0x542e8
		return 0;
	}
	uint32_t v1 = a1 - 13; // 0x54244
	if (v1 > 27) {
		// 0x542e8
		return 1;
	}
	// 0x54250
	return *(int32_t *)(4 * v1 + g23 + 0x2910);
}

// Address range: 0x542f8 - 0x54350
int32_t gmenu_valid_mouse_pos(int32_t *a1)
{
	int32_t v1 = (int32_t)a1; // r3
	*a1 = 282;
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x76a8); // 0x54304
	if (v2 < v1) {
		// 0x54314
		*(int32_t *)v1 = 0;
		return 0;
	}
	// 0x54324
	if (v2 > v1 + 256) {
		// 0x54330
		*(int32_t *)v1 = 256;
		return 0;
	}
	// 0x54340
	*(int32_t *)v1 = v2 - v1;
	return 1;
}

// Address range: 0x54350 - 0x543e8
int32_t gmenu_on_mouse_move(void)
{
	// 0x54350
	int32_t result;
	if (*(char *)(g23 - 0x4e84) != 0) {
		int32_t v1 = 0; // bp-8
		gmenu_valid_mouse_pos(&v1);
		int32_t v2 = *(int32_t *)(g23 - 0x4e78); // 0x54378
		g34 = 0;
		v1 = v1 * __asm_rlwinm(*(int32_t *)v2, 20, 20, 31) / 256;
		*(int32_t *)v2 = __asm_rlwinm(*(int32_t *)v2, 0, 0, 19);
		int32_t *v3 = (int32_t *)*(int32_t *)(g23 - 0x4e78); // 0x543b8
		*v3 = *v3 | v1;
		g15 = *(int32_t *)(*(int32_t *)(g23 - 0x4e78) + 8);
		function_ec910();
		result = 1;
		// branch -> 0x543d8
	} else {
		result = 0;
	}
	// 0x543d8
	return result;
}

// Address range: 0x543e8 - 0x54540
int32_t gmenu_left_mouse(int32_t a1)
{
	int32_t v1 = g36; // 0x543e8
	int32_t v2 = g10; // 0x543ec
	if (a1 == 0) {
		char *v3 = (char *)(g23 - 0x4e84); // 0x54400
		int32_t result;                    // 0x5453c
		if (*v3 == 0) {
			// 0x5440c
			result = 0;
			// branch -> 0x5452c
		} else {
			// 0x54414
			*v3 = 0;
			result = 1;
			// branch -> 0x5452c
		}
		// 0x5452c
		g36 = v1;
		g10 = v2;
		return result;
	}
	int32_t v4 = *(int32_t *)(g23 - 0x4e70); // 0x54424
	if (v4 == 0) {
		// 0x54430
		// branch -> 0x5452c
		// 0x5452c
		g36 = v1;
		g10 = v2;
		return 0;
	}
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x76ac); // 0x5443c
	if (v5 >= 352) {
		// 0x54448
		// branch -> 0x5452c
		// 0x5452c
		g36 = v1;
		g10 = v2;
		return 0;
	}
	int32_t v6 = v5 - 117; // 0x54450
	if (v6 <= -1) {
		// 0x54458
		// branch -> 0x5452c
		// 0x5452c
		g36 = v1;
		g10 = v2;
		return 1;
	}
	int32_t v7 = ((int32_t)(-0x49f49f49 * (int64_t)v6 / 0x100000000) + v6) / 32; // 0x54474
	if (v7 >= *(int32_t *)(g23 - 0x4e7c)) {
		// 0x54488
		// branch -> 0x5452c
		// 0x5452c
		g36 = v1;
		g10 = v2;
		return 1;
	}
	int32_t v8 = 12 * v7 + v4; // 0x54494
	g36 = v8;
	if (__asm_rlwinm_(*(int32_t *)v8, 0, 0, 0) == 0) {
		// 0x544a4
		// branch -> 0x5452c
		// 0x5452c
		g36 = v1;
		g10 = v2;
		return 1;
	}
	// 0x544ac
	g34 = g36;
	int32_t v9 = gmenu_get_lfont() / 2;                     // 0x544b8
	uint32_t v10 = *(int32_t *)*(int32_t *)(g23 - 0x76a8); // 0x544c0
	if (v10 < 320 - v9) {
		// 0x544cc
		// branch -> 0x5452c
		// 0x5452c
		g36 = v1;
		g10 = v2;
		return 1;
	}
	// 0x544d4
	if (v10 > v9 + 320) {
		// 0x544e0
		// branch -> 0x5452c
	} else {
		// 0x544e8
		*(int32_t *)(g23 - 0x4e78) = g36;
		g34 = 69;
		PlaySFX(69);
		if (__asm_rlwinm_(*(int32_t *)g36, 0, 1, 1) == 0) {
			// 0x54514
			g34 = 1;
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x4e78) + 8);
			function_ec910();
			// branch -> 0x54528
		} else {
			// 0x54500
			int32_t v11; // bp-24
			*(char *)(g23 - 0x4e84) = (char)gmenu_valid_mouse_pos(&v11);
			gmenu_on_mouse_move();
			// branch -> 0x54528
		}
		// 0x54528
		// branch -> 0x5452c
	}
	// 0x5452c
	g36 = v1;
	g10 = v2;
	return 1;
}

// Address range: 0x54540 - 0x54568
int32_t gmenu_enable(int32_t *a1, int32_t a2)
{
	int32_t result = (int32_t)a1;
	if (a2 == 0) {
		// 0x54558
		*a1 = result % 0x80000000;
		return result;
	}
	// 0x54548
	*a1 = result | -0x80000000;
	return result;
}

// Address range: 0x54568 - 0x545b8
int32_t gmenu_slider_set(int32_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t result = (int32_t)a1;
	int32_t v1 = __asm_rlwinm(result, 20, 20, 31); // 0x5456c
	int32_t v2;                                    // 0x54584
	if (v1 <= 1) {
		// 0x54578
		v2 = 2;
		// branch -> 0x5457c
	} else {
		v2 = v1;
	}
	int32_t v3 = a3 - a2;                                             // 0x54588
	uint32_t v4 = v3 - 1;                                             // 0x5458c
	int32_t v5 = ((v4 / 2 | v4 & -0x80000000) + (a4 - a2) * v2) / v3; // r6
	*(int32_t *)result = __asm_rlwinm(result, 0, 0, 19);
	*(int32_t *)result = v5 | result;
	return result;
}

// Address range: 0x545b8 - 0x545f4
int32_t gmenu_slider_get(int32_t *a1, int32_t a2)
{
	uint32_t v1 = (int32_t)a1;
	int32_t v2 = __asm_rlwinm(v1, 20, 20, 31); // 0x545bc
	int32_t v3;                                // 0x545e8
	if (v2 <= 1) {
		// 0x545cc
		v3 = 2;
		// branch -> 0x545d0
	} else {
		v3 = v2;
	}
	uint32_t v4 = v3 - 1; // 0x545d4
	return ((g38 - a2) * (v1 % 0x1000) + (v4 / 2 | v4 & -0x80000000)) / v3 + a2;
}

// Address range: 0x545f4 - 0x54614
int32_t gmenu_slider_steps(int32_t *a1, int32_t a2)
{
	int32_t result = (int32_t)a1;
	int32_t v1 = __asm_rlwinm(a2, 12, 8, 19); // 0x545f8
	__asm_rlwinm(result, 0, 20, 7);
	*a1 = v1 | result;
	return result;
}
