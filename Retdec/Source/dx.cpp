
// Address range: 0x26e4c - 0x26ebc
int32_t function_26e4c(int32_t a1)
{
	// 0x26e4c
	g34 = a1;
	int32_t v1 = g34; // 0x26e54
	int32_t result;   // 0x26eb8
	if (*(int32_t *)(v1 + 2) >= 0x10000) {
		// 0x26e74
		function_ea978();
		int32_t v2;       // bp-24
		int32_t v3 = &v2; // 0x26e7c
		g34 = v3;
		function_ec808(v3, 100, 75);
		g34 = v2;
		int32_t v4 = function_ea990(v2, *(int32_t *)(v1 + 2)); // 0x26e98
		g34 = v4;
		result = function_ea9a8(v4);
		// branch -> 0x26ea8
	} else {
		result = v1;
	}
	// 0x26ea8
	return result;
}

// Address range: 0x26ebc - 0x26ee0
int32_t function_26ebc(int32_t a1)
{
	// 0x26ebc
	return function_ea9c0();
}

// Address range: 0x26ee0 - 0x26f00
int32_t function_26ee0(int32_t a1)
{
	// 0x26ee0
	return function_28c14();
}

// Address range: 0x26f00 - 0x26f18
int32_t function_26f00(void)
{
	int32_t v1 = *(int32_t *)(*(int32_t *)(g11 + 2912) + 2); // 0x26f04
	return -1 - v1 < -v1;
}

// Address range: 0x26f18 - 0x2718c
int32_t function_26f18(int16_t *a1)
{
	int32_t v1 = (int32_t)a1; // 0x26f1c
	int32_t v2 = g10;         // 0x26f20
	g36 = *(int32_t *)(g23 - 0x7814);
	g34 = (int32_t) "MoveWindow" - 1;
	g31 = 0;
	int32_t v3 = 0; // r26
	g33 = 0;
	g35 = function_ec6e8((int32_t) "MoveWindow" - 1, v1);
	if (function_26f00() % 256 != 0) {
		// 0x26f60
		g34 = 60;
		function_e9ee0(60);
		// branch -> 0x26f6c
	}
	int32_t v4 = *(int32_t *)(v1 + 6); // 0x26f6c
	g32 = v4;
	g34 = v4;
	uint32_t v5 = function_ec700(v4); // 0x26f74
	g34 = v5;
	int32_t v6 = v5 / 0x10000;
	int32_t v7; // bp-56
	int32_t v8;
	int32_t v9;   // 0x26fd0
	int32_t v10;  // 0x270d8
	int32_t v11;  // 0x26fdc
	uint32_t v12; // 0x26ff8
	int32_t v13;  // 0x270a0
	int32_t v14;  // 0x26fc4
	uint32_t v15; // 0x27078
	int32_t v16;  // 0x2709c
	int32_t v17;  // 0x27164
	int32_t v18;  // 0x27070
	int32_t v19;  // 0x26fd0
	int32_t v20;  // 0x27110
	int32_t v21;  // 0x27100
	if (v5 % 256 != 0) {
		// 0x26f94
		g33 = 1;
		g31 |= 4;
		// branch -> 0x26f9c
		// 0x26f9c
		if (g35 % 256 == 0) {
			// 0x27064
			if (__asm_rlwinm_(g31, 0, 29, 29) != 0) {
				// 0x270b4
				if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
					// 0x27124
					if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
						// 0x2712c
						function_ec730();
						*(int32_t *)(v8 - 0x5058) = g32;
						// branch -> 0x27138
					}
					// 0x27138
					if (g31 % 2 != 0) {
						// 0x27140
						g34 = (int32_t) "MoveWindow" - 1;
						g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
						// branch -> 0x27158
					}
					// 0x27158
					if (v3 % 256 != 0) {
						// 0x27160
						v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
						g34 = v17;
						g15 = *(int32_t *)(v17 + 100);
						FunctionPointer();
						// branch -> 0x27174
					}
					// 0x27174
					g10 = v2;
					return g35;
				}
				// 0x270bc
				v10 = 5;
				if (g33 % 256 == 0) {
					// 0x270c8
					if (*(char *)g36 == 0) {
						// 0x270d4
						v10 = 0;
						// branch -> 0x270d8
					} else {
						v10 = 5;
					}
				}
				// 0x270d8
				g34 = (int32_t) "MoveWindow" - 1;
				v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
				*(int32_t *)(v8 - 0x5058) = g32;
				v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
				g34 = v20;
				g35 = v21;
				function_ec6d0(v20);
				// branch -> 0x27158
				// 0x27158
				if (v3 % 256 != 0) {
					// 0x27160
					v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
					g34 = v17;
					g15 = *(int32_t *)(v17 + 100);
					FunctionPointer();
					// branch -> 0x27174
				}
				// 0x27174
				g10 = v2;
				return g35;
			}
			// 0x2706c
			v18 = *(int32_t *)(g23 - 0x5058);
			g34 = v18;
			v15 = g32 - v18;
			if (*(char *)g36 == 0) {
				// 0x27090
				if (v15 >= 121) {
					// 0x27098
					g31 |= 2;
					v16 = &v7;
					g34 = v16;
					v13 = function_ec718(v16);
					g34 = v13;
					if (v13 % 256 != 0) {
						// 0x270b0
						g31 |= 4;
						// branch -> 0x270b4
					}
				}
			} else {
				// 0x27080
				if (v15 >= 16) {
					// 0x27088
					g31 |= 4;
					// branch -> 0x270b4
				}
			}
			// 0x270b4
			if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
				// 0x27124
				if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
					// 0x2712c
					function_ec730();
					*(int32_t *)(v8 - 0x5058) = g32;
					// branch -> 0x27138
				}
				// 0x27138
				if (g31 % 2 != 0) {
					// 0x27140
					g34 = (int32_t) "MoveWindow" - 1;
					g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
					// branch -> 0x27158
				}
			} else {
				// 0x270bc
				v10 = 5;
				if (g33 % 256 == 0) {
					// 0x270c8
					if (*(char *)g36 == 0) {
						// 0x270d4
						v10 = 0;
						// branch -> 0x270d8
					} else {
						v10 = 5;
					}
				}
				// 0x270d8
				g34 = (int32_t) "MoveWindow" - 1;
				v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
				*(int32_t *)(v8 - 0x5058) = g32;
				v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
				g34 = v20;
				g35 = v21;
				function_ec6d0(v20);
				// branch -> 0x27158
			}
			// 0x27158
			if (v3 % 256 != 0) {
				// 0x27160
				v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
				g34 = v17;
				g15 = *(int32_t *)(v17 + 100);
				FunctionPointer();
				// branch -> 0x27174
			}
			// 0x27174
			g10 = v2;
			return g35;
		}
		// 0x26fa4
		g34 = v6;
		v14 = g31 | (*(char *)g36 == 0 ? 1 : 4);
		g31 = v14;
		if ((v5 & -0x10000) == 0x30000) {
			// 0x26fd0
			v9 = v1;
			v19 = (int32_t) * (int16_t *)(v9 + 14);
			v11 = __asm_rlwinm(v19, 0, 22, 23);
			llvm_ctlz_i32(v19 & 0x1100 ^ 0x1100, true);
			g34 = 0;
			if (v11 == 768) {
				// 0x26ff8
				v12 = 0x1000000 * *(int32_t *)(v9 + 2);
				if (v12 >= 0x30000000) {
					// 0x27004
					if (v12 <= 0x39000000) {
						// 0x2700c
						g31 |= 4;
						g34 = 120;
						g34 = function_e9ee0(120);
						v3 = 1;
						// branch -> 0x27064
						// 0x27064
						if (__asm_rlwinm_(g31, 0, 29, 29) != 0) {
							// 0x270b4
							if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
								// 0x27124
								if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
									// 0x2712c
									function_ec730();
									*(int32_t *)(v8 - 0x5058) = g32;
									// branch -> 0x27138
								}
								// 0x27138
								if (g31 % 2 != 0) {
									// 0x27140
									g34 = (int32_t) "MoveWindow" - 1;
									g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
									// branch -> 0x27158
								}
							} else {
								// 0x270bc
								v10 = 5;
								if (g33 % 256 == 0) {
									// 0x270c8
									if (*(char *)g36 == 0) {
										// 0x270d4
										v10 = 0;
										// branch -> 0x270d8
									} else {
										v10 = 5;
									}
								}
								// 0x270d8
								g34 = (int32_t) "MoveWindow" - 1;
								v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
								*(int32_t *)(v8 - 0x5058) = g32;
								v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
								g34 = v20;
								g35 = v21;
								function_ec6d0(v20);
								// branch -> 0x27158
							}
							// 0x27158
							if (v3 % 256 != 0) {
								// 0x27160
								v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
								g34 = v17;
								g15 = *(int32_t *)(v17 + 100);
								FunctionPointer();
								// branch -> 0x27174
							}
							// 0x27174
							g10 = v2;
							return g35;
						}
						// 0x2706c
						v18 = *(int32_t *)(g23 - 0x5058);
						g34 = v18;
						v15 = g32 - v18;
						if (*(char *)g36 == 0) {
							// 0x27090
							if (v15 >= 121) {
								// 0x27098
								g31 |= 2;
								v16 = &v7;
								g34 = v16;
								v13 = function_ec718(v16);
								g34 = v13;
								if (v13 % 256 != 0) {
									// 0x270b0
									g31 |= 4;
									// branch -> 0x270b4
								}
							}
						} else {
							// 0x27080
							if (v15 >= 16) {
								// 0x27088
								g31 |= 4;
								// branch -> 0x270b4
							}
						}
						// 0x270b4
						if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
							// 0x27124
							if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
								// 0x2712c
								function_ec730();
								*(int32_t *)(v8 - 0x5058) = g32;
								// branch -> 0x27138
							}
							// 0x27138
							if (g31 % 2 != 0) {
								// 0x27140
								g34 = (int32_t) "MoveWindow" - 1;
								g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
								// branch -> 0x27158
							}
						} else {
							// 0x270bc
							v10 = 5;
							if (g33 % 256 == 0) {
								// 0x270c8
								if (*(char *)g36 == 0) {
									// 0x270d4
									v10 = 0;
									// branch -> 0x270d8
								} else {
									v10 = 5;
								}
							}
							// 0x270d8
							g34 = (int32_t) "MoveWindow" - 1;
							v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
							*(int32_t *)(v8 - 0x5058) = g32;
							v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
							g34 = v20;
							g35 = v21;
							function_ec6d0(v20);
							// branch -> 0x27158
						}
						// 0x27158
						if (v3 % 256 != 0) {
							// 0x27160
							v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
							g34 = v17;
							g15 = *(int32_t *)(v17 + 100);
							FunctionPointer();
							// branch -> 0x27174
						}
						// 0x27174
						g10 = v2;
						return g35;
					}
				}
			}
			// 0x27024
			// branch -> 0x27064
		} else {
			// 0x2704c
			if ((v5 & -0x10000) == 0x70000) {
				// 0x27054
				g31 = v14 | 4;
				g34 = 120;
				g34 = function_e9ee0(120);
				// branch -> 0x27064
			}
		}
		// 0x27064
		if (__asm_rlwinm_(g31, 0, 29, 29) != 0) {
			// 0x270b4
			if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
				// 0x27124
				if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
					// 0x2712c
					function_ec730();
					*(int32_t *)(v8 - 0x5058) = g32;
					// branch -> 0x27138
				}
				// 0x27138
				if (g31 % 2 != 0) {
					// 0x27140
					g34 = (int32_t) "MoveWindow" - 1;
					g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
					// branch -> 0x27158
				}
			} else {
				// 0x270bc
				v10 = 5;
				if (g33 % 256 == 0) {
					// 0x270c8
					if (*(char *)g36 == 0) {
						// 0x270d4
						v10 = 0;
						// branch -> 0x270d8
					} else {
						v10 = 5;
					}
				}
				// 0x270d8
				g34 = (int32_t) "MoveWindow" - 1;
				v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
				*(int32_t *)(v8 - 0x5058) = g32;
				v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
				g34 = v20;
				g35 = v21;
				function_ec6d0(v20);
				// branch -> 0x27158
			}
			// 0x27158
			if (v3 % 256 != 0) {
				// 0x27160
				v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
				g34 = v17;
				g15 = *(int32_t *)(v17 + 100);
				FunctionPointer();
				// branch -> 0x27174
			}
			// 0x27174
			g10 = v2;
			return g35;
		}
		// 0x2706c
		v18 = *(int32_t *)(g23 - 0x5058);
		g34 = v18;
		v15 = g32 - v18;
		if (*(char *)g36 == 0) {
			// 0x27090
			if (v15 >= 121) {
				// 0x27098
				g31 |= 2;
				v16 = &v7;
				g34 = v16;
				v13 = function_ec718(v16);
				g34 = v13;
				if (v13 % 256 != 0) {
					// 0x270b0
					g31 |= 4;
					// branch -> 0x270b4
				}
			}
		} else {
			// 0x27080
			if (v15 >= 16) {
				// 0x27088
				g31 |= 4;
				// branch -> 0x270b4
			}
		}
		// 0x270b4
		if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
			// 0x27124
			if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
				// 0x2712c
				function_ec730();
				*(int32_t *)(v8 - 0x5058) = g32;
				// branch -> 0x27138
			}
			// 0x27138
			if (g31 % 2 != 0) {
				// 0x27140
				g34 = (int32_t) "MoveWindow" - 1;
				g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
				// branch -> 0x27158
			}
		} else {
			// 0x270bc
			v10 = 5;
			if (g33 % 256 == 0) {
				// 0x270c8
				if (*(char *)g36 == 0) {
					// 0x270d4
					v10 = 0;
					// branch -> 0x270d8
				} else {
					v10 = 5;
				}
			}
			// 0x270d8
			g34 = (int32_t) "MoveWindow" - 1;
			v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
			*(int32_t *)(v8 - 0x5058) = g32;
			v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
			g34 = v20;
			g35 = v21;
			function_ec6d0(v20);
			// branch -> 0x27158
		}
		// 0x27158
		if (v3 % 256 != 0) {
			// 0x27160
			v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
			g34 = v17;
			g15 = *(int32_t *)(v17 + 100);
			FunctionPointer();
			// branch -> 0x27174
		}
		// 0x27174
		g10 = v2;
		return g35;
	}
	// 0x26f84
	if (((int32_t) * (int16_t *)(v1 + 14) & 0x1b00) != 0x1b00) {
		// 0x26f9c
		if (g35 % 256 == 0) {
			// 0x27064
			if (__asm_rlwinm_(g31, 0, 29, 29) != 0) {
				// 0x270b4
				if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
					// 0x27124
					if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
						// 0x2712c
						function_ec730();
						*(int32_t *)(v8 - 0x5058) = g32;
						// branch -> 0x27138
					}
					// 0x27138
					if (g31 % 2 != 0) {
						// 0x27140
						g34 = (int32_t) "MoveWindow" - 1;
						g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
						// branch -> 0x27158
					}
				} else {
					// 0x270bc
					v10 = 5;
					if (g33 % 256 == 0) {
						// 0x270c8
						if (*(char *)g36 == 0) {
							// 0x270d4
							v10 = 0;
							// branch -> 0x270d8
						} else {
							v10 = 5;
						}
					}
					// 0x270d8
					g34 = (int32_t) "MoveWindow" - 1;
					v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
					*(int32_t *)(v8 - 0x5058) = g32;
					v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
					g34 = v20;
					g35 = v21;
					function_ec6d0(v20);
					// branch -> 0x27158
				}
				// 0x27158
				if (v3 % 256 != 0) {
					// 0x27160
					v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
					g34 = v17;
					g15 = *(int32_t *)(v17 + 100);
					FunctionPointer();
					// branch -> 0x27174
				}
				// 0x27174
				g10 = v2;
				return g35;
			}
			// 0x2706c
			v18 = *(int32_t *)(g23 - 0x5058);
			g34 = v18;
			v15 = g32 - v18;
			if (*(char *)g36 == 0) {
				// 0x27090
				if (v15 >= 121) {
					// 0x27098
					g31 |= 2;
					v16 = &v7;
					g34 = v16;
					v13 = function_ec718(v16);
					g34 = v13;
					if (v13 % 256 != 0) {
						// 0x270b0
						g31 |= 4;
						// branch -> 0x270b4
					}
				}
			} else {
				// 0x27080
				if (v15 >= 16) {
					// 0x27088
					g31 |= 4;
					// branch -> 0x270b4
				}
			}
			// 0x270b4
			if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
				// 0x27124
				if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
					// 0x2712c
					function_ec730();
					*(int32_t *)(v8 - 0x5058) = g32;
					// branch -> 0x27138
				}
				// 0x27138
				if (g31 % 2 != 0) {
					// 0x27140
					g34 = (int32_t) "MoveWindow" - 1;
					g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
					// branch -> 0x27158
				}
			} else {
				// 0x270bc
				v10 = 5;
				if (g33 % 256 == 0) {
					// 0x270c8
					if (*(char *)g36 == 0) {
						// 0x270d4
						v10 = 0;
						// branch -> 0x270d8
					} else {
						v10 = 5;
					}
				}
				// 0x270d8
				g34 = (int32_t) "MoveWindow" - 1;
				v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
				*(int32_t *)(v8 - 0x5058) = g32;
				v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
				g34 = v20;
				g35 = v21;
				function_ec6d0(v20);
				// branch -> 0x27158
			}
			// 0x27158
			if (v3 % 256 != 0) {
				// 0x27160
				v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
				g34 = v17;
				g15 = *(int32_t *)(v17 + 100);
				FunctionPointer();
				// branch -> 0x27174
			}
			// 0x27174
			g10 = v2;
			return g35;
		}
		// 0x26fa4
		g34 = v6;
		v14 = g31 | (*(char *)g36 == 0 ? 1 : 4);
		g31 = v14;
		if ((v5 & -0x10000) == 0x30000) {
			// 0x26fd0
			v9 = v1;
			v19 = (int32_t) * (int16_t *)(v9 + 14);
			v11 = __asm_rlwinm(v19, 0, 22, 23);
			llvm_ctlz_i32(v19 & 0x1100 ^ 0x1100, true);
			g34 = 0;
			if (v11 == 768) {
				// 0x26ff8
				v12 = 0x1000000 * *(int32_t *)(v9 + 2);
				if (v12 >= 0x30000000) {
					// 0x27004
					if (v12 <= 0x39000000) {
						// 0x2700c
						g31 |= 4;
						g34 = 120;
						g34 = function_e9ee0(120);
						v3 = 1;
						// branch -> 0x27064
						// 0x27064
						if (__asm_rlwinm_(g31, 0, 29, 29) != 0) {
							// 0x270b4
							if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
								// 0x27124
								if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
									// 0x2712c
									function_ec730();
									*(int32_t *)(v8 - 0x5058) = g32;
									// branch -> 0x27138
								}
								// 0x27138
								if (g31 % 2 != 0) {
									// 0x27140
									g34 = (int32_t) "MoveWindow" - 1;
									g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
									// branch -> 0x27158
								}
							} else {
								// 0x270bc
								v10 = 5;
								if (g33 % 256 == 0) {
									// 0x270c8
									if (*(char *)g36 == 0) {
										// 0x270d4
										v10 = 0;
										// branch -> 0x270d8
									} else {
										v10 = 5;
									}
								}
								// 0x270d8
								g34 = (int32_t) "MoveWindow" - 1;
								v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
								*(int32_t *)(v8 - 0x5058) = g32;
								v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
								g34 = v20;
								g35 = v21;
								function_ec6d0(v20);
								// branch -> 0x27158
							}
							// 0x27158
							if (v3 % 256 != 0) {
								// 0x27160
								v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
								g34 = v17;
								g15 = *(int32_t *)(v17 + 100);
								FunctionPointer();
								// branch -> 0x27174
							}
							// 0x27174
							g10 = v2;
							return g35;
						}
						// 0x2706c
						v18 = *(int32_t *)(g23 - 0x5058);
						g34 = v18;
						v15 = g32 - v18;
						if (*(char *)g36 == 0) {
							// 0x27090
							if (v15 >= 121) {
								// 0x27098
								g31 |= 2;
								v16 = &v7;
								g34 = v16;
								v13 = function_ec718(v16);
								g34 = v13;
								if (v13 % 256 != 0) {
									// 0x270b0
									g31 |= 4;
									// branch -> 0x270b4
								}
							}
						} else {
							// 0x27080
							if (v15 >= 16) {
								// 0x27088
								g31 |= 4;
								// branch -> 0x270b4
							}
						}
						// 0x270b4
						if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
							// 0x27124
							if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
								// 0x2712c
								function_ec730();
								*(int32_t *)(v8 - 0x5058) = g32;
								// branch -> 0x27138
							}
							// 0x27138
							if (g31 % 2 != 0) {
								// 0x27140
								g34 = (int32_t) "MoveWindow" - 1;
								g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
								// branch -> 0x27158
							}
						} else {
							// 0x270bc
							v10 = 5;
							if (g33 % 256 == 0) {
								// 0x270c8
								if (*(char *)g36 == 0) {
									// 0x270d4
									v10 = 0;
									// branch -> 0x270d8
								} else {
									v10 = 5;
								}
							}
							// 0x270d8
							g34 = (int32_t) "MoveWindow" - 1;
							v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
							*(int32_t *)(v8 - 0x5058) = g32;
							v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
							g34 = v20;
							g35 = v21;
							function_ec6d0(v20);
							// branch -> 0x27158
						}
						// 0x27158
						if (v3 % 256 != 0) {
							// 0x27160
							v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
							g34 = v17;
							g15 = *(int32_t *)(v17 + 100);
							FunctionPointer();
							// branch -> 0x27174
						}
						// 0x27174
						g10 = v2;
						return g35;
					}
				}
			}
			// 0x27024
			// branch -> 0x27064
		} else {
			// 0x2704c
			if ((v5 & -0x10000) == 0x70000) {
				// 0x27054
				g31 = v14 | 4;
				g34 = 120;
				g34 = function_e9ee0(120);
				// branch -> 0x27064
			}
		}
		// 0x27064
		if (__asm_rlwinm_(g31, 0, 29, 29) != 0) {
			// 0x270b4
			if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
				// 0x27124
				if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
					// 0x2712c
					function_ec730();
					*(int32_t *)(v8 - 0x5058) = g32;
					// branch -> 0x27138
				}
				// 0x27138
				if (g31 % 2 != 0) {
					// 0x27140
					g34 = (int32_t) "MoveWindow" - 1;
					g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
					// branch -> 0x27158
				}
			} else {
				// 0x270bc
				v10 = 5;
				if (g33 % 256 == 0) {
					// 0x270c8
					if (*(char *)g36 == 0) {
						// 0x270d4
						v10 = 0;
						// branch -> 0x270d8
					} else {
						v10 = 5;
					}
				}
				// 0x270d8
				g34 = (int32_t) "MoveWindow" - 1;
				v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
				*(int32_t *)(v8 - 0x5058) = g32;
				v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
				g34 = v20;
				g35 = v21;
				function_ec6d0(v20);
				// branch -> 0x27158
			}
			// 0x27158
			if (v3 % 256 != 0) {
				// 0x27160
				v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
				g34 = v17;
				g15 = *(int32_t *)(v17 + 100);
				FunctionPointer();
				// branch -> 0x27174
			}
			// 0x27174
			g10 = v2;
			return g35;
		}
		// 0x2706c
		v18 = *(int32_t *)(g23 - 0x5058);
		g34 = v18;
		v15 = g32 - v18;
		if (*(char *)g36 == 0) {
			// 0x27090
			if (v15 >= 121) {
				// 0x27098
				g31 |= 2;
				v16 = &v7;
				g34 = v16;
				v13 = function_ec718(v16);
				g34 = v13;
				if (v13 % 256 != 0) {
					// 0x270b0
					g31 |= 4;
					// branch -> 0x270b4
				}
			}
		} else {
			// 0x27080
			if (v15 >= 16) {
				// 0x27088
				g31 |= 4;
				// branch -> 0x270b4
			}
		}
		// 0x270b4
		if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
			// 0x27124
			if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
				// 0x2712c
				function_ec730();
				*(int32_t *)(v8 - 0x5058) = g32;
				// branch -> 0x27138
			}
			// 0x27138
			if (g31 % 2 != 0) {
				// 0x27140
				g34 = (int32_t) "MoveWindow" - 1;
				g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
				// branch -> 0x27158
			}
		} else {
			// 0x270bc
			v10 = 5;
			if (g33 % 256 == 0) {
				// 0x270c8
				if (*(char *)g36 == 0) {
					// 0x270d4
					v10 = 0;
					// branch -> 0x270d8
				} else {
					v10 = 5;
				}
			}
			// 0x270d8
			g34 = (int32_t) "MoveWindow" - 1;
			v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
			*(int32_t *)(v8 - 0x5058) = g32;
			v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
			g34 = v20;
			g35 = v21;
			function_ec6d0(v20);
			// branch -> 0x27158
		}
		// 0x27158
		if (v3 % 256 != 0) {
			// 0x27160
			v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
			g34 = v17;
			g15 = *(int32_t *)(v17 + 100);
			FunctionPointer();
			// branch -> 0x27174
		}
		// 0x27174
		g10 = v2;
		return g35;
	}
	// 0x26f94
	g33 = 1;
	g31 |= 4;
	// branch -> 0x26f9c
	// 0x26f9c
	if (g35 % 256 == 0) {
		// 0x27064
		if (__asm_rlwinm_(g31, 0, 29, 29) != 0) {
			// 0x270b4
			if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
				// 0x27124
				if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
					// 0x2712c
					function_ec730();
					*(int32_t *)(v8 - 0x5058) = g32;
					// branch -> 0x27138
				}
				// 0x27138
				if (g31 % 2 != 0) {
					// 0x27140
					g34 = (int32_t) "MoveWindow" - 1;
					g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
					// branch -> 0x27158
				}
			} else {
				// 0x270bc
				v10 = 5;
				if (g33 % 256 == 0) {
					// 0x270c8
					if (*(char *)g36 == 0) {
						// 0x270d4
						v10 = 0;
						// branch -> 0x270d8
					} else {
						v10 = 5;
					}
				}
				// 0x270d8
				g34 = (int32_t) "MoveWindow" - 1;
				v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
				*(int32_t *)(v8 - 0x5058) = g32;
				v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
				g34 = v20;
				g35 = v21;
				function_ec6d0(v20);
				// branch -> 0x27158
			}
			// 0x27158
			if (v3 % 256 != 0) {
				// 0x27160
				v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
				g34 = v17;
				g15 = *(int32_t *)(v17 + 100);
				FunctionPointer();
				// branch -> 0x27174
			}
			// 0x27174
			g10 = v2;
			return g35;
		}
		// 0x2706c
		v18 = *(int32_t *)(g23 - 0x5058);
		g34 = v18;
		v15 = g32 - v18;
		if (*(char *)g36 == 0) {
			// 0x27090
			if (v15 >= 121) {
				// 0x27098
				g31 |= 2;
				v16 = &v7;
				g34 = v16;
				v13 = function_ec718(v16);
				g34 = v13;
				if (v13 % 256 != 0) {
					// 0x270b0
					g31 |= 4;
					// branch -> 0x270b4
				}
			}
		} else {
			// 0x27080
			if (v15 >= 16) {
				// 0x27088
				g31 |= 4;
				// branch -> 0x270b4
			}
		}
		// 0x270b4
		if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
			// 0x27124
			if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
				// 0x2712c
				function_ec730();
				*(int32_t *)(v8 - 0x5058) = g32;
				// branch -> 0x27138
			}
			// 0x27138
			if (g31 % 2 != 0) {
				// 0x27140
				g34 = (int32_t) "MoveWindow" - 1;
				g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
				// branch -> 0x27158
			}
		} else {
			// 0x270bc
			v10 = 5;
			if (g33 % 256 == 0) {
				// 0x270c8
				if (*(char *)g36 == 0) {
					// 0x270d4
					v10 = 0;
					// branch -> 0x270d8
				} else {
					v10 = 5;
				}
			}
			// 0x270d8
			g34 = (int32_t) "MoveWindow" - 1;
			v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
			*(int32_t *)(v8 - 0x5058) = g32;
			v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
			g34 = v20;
			g35 = v21;
			function_ec6d0(v20);
			// branch -> 0x27158
		}
		// 0x27158
		if (v3 % 256 != 0) {
			// 0x27160
			v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
			g34 = v17;
			g15 = *(int32_t *)(v17 + 100);
			FunctionPointer();
			// branch -> 0x27174
		}
		// 0x27174
		g10 = v2;
		return g35;
	}
	// 0x26fa4
	g34 = v6;
	v14 = g31 | (*(char *)g36 == 0 ? 1 : 4);
	g31 = v14;
	if ((v5 & -0x10000) == 0x30000) {
		// 0x26fd0
		v9 = v1;
		v19 = (int32_t) * (int16_t *)(v9 + 14);
		v11 = __asm_rlwinm(v19, 0, 22, 23);
		llvm_ctlz_i32(v19 & 0x1100 ^ 0x1100, true);
		g34 = 0;
		if (v11 == 768) {
			// 0x26ff8
			v12 = 0x1000000 * *(int32_t *)(v9 + 2);
			if (v12 >= 0x30000000) {
				// 0x27004
				if (v12 <= 0x39000000) {
					// 0x2700c
					g31 |= 4;
					g34 = 120;
					g34 = function_e9ee0(120);
					v3 = 1;
					// branch -> 0x27064
					// 0x27064
					if (__asm_rlwinm_(g31, 0, 29, 29) != 0) {
						// 0x270b4
						if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
							// 0x27124
							if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
								// 0x2712c
								function_ec730();
								*(int32_t *)(v8 - 0x5058) = g32;
								// branch -> 0x27138
							}
							// 0x27138
							if (g31 % 2 != 0) {
								// 0x27140
								g34 = (int32_t) "MoveWindow" - 1;
								g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
								// branch -> 0x27158
							}
						} else {
							// 0x270bc
							v10 = 5;
							if (g33 % 256 == 0) {
								// 0x270c8
								if (*(char *)g36 == 0) {
									// 0x270d4
									v10 = 0;
									// branch -> 0x270d8
								} else {
									v10 = 5;
								}
							}
							// 0x270d8
							g34 = (int32_t) "MoveWindow" - 1;
							v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
							*(int32_t *)(v8 - 0x5058) = g32;
							v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
							g34 = v20;
							g35 = v21;
							function_ec6d0(v20);
							// branch -> 0x27158
						}
						// 0x27158
						if (v3 % 256 != 0) {
							// 0x27160
							v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
							g34 = v17;
							g15 = *(int32_t *)(v17 + 100);
							FunctionPointer();
							// branch -> 0x27174
						}
						// 0x27174
						g10 = v2;
						return g35;
					}
					// 0x2706c
					v18 = *(int32_t *)(g23 - 0x5058);
					g34 = v18;
					v15 = g32 - v18;
					if (*(char *)g36 == 0) {
						// 0x27090
						if (v15 >= 121) {
							// 0x27098
							g31 |= 2;
							v16 = &v7;
							g34 = v16;
							v13 = function_ec718(v16);
							g34 = v13;
							if (v13 % 256 != 0) {
								// 0x270b0
								g31 |= 4;
								// branch -> 0x270b4
							}
						}
					} else {
						// 0x27080
						if (v15 >= 16) {
							// 0x27088
							g31 |= 4;
							// branch -> 0x270b4
						}
					}
					// 0x270b4
					if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
						// 0x27124
						if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
							// 0x2712c
							function_ec730();
							*(int32_t *)(v8 - 0x5058) = g32;
							// branch -> 0x27138
						}
						// 0x27138
						if (g31 % 2 != 0) {
							// 0x27140
							g34 = (int32_t) "MoveWindow" - 1;
							g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
							// branch -> 0x27158
						}
					} else {
						// 0x270bc
						v10 = 5;
						if (g33 % 256 == 0) {
							// 0x270c8
							if (*(char *)g36 == 0) {
								// 0x270d4
								v10 = 0;
								// branch -> 0x270d8
							} else {
								v10 = 5;
							}
						}
						// 0x270d8
						g34 = (int32_t) "MoveWindow" - 1;
						v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
						*(int32_t *)(v8 - 0x5058) = g32;
						v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
						g34 = v20;
						g35 = v21;
						function_ec6d0(v20);
						// branch -> 0x27158
					}
					// 0x27158
					if (v3 % 256 != 0) {
						// 0x27160
						v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
						g34 = v17;
						g15 = *(int32_t *)(v17 + 100);
						FunctionPointer();
						// branch -> 0x27174
					}
					// 0x27174
					g10 = v2;
					return g35;
				}
			}
		}
		// 0x27024
		// branch -> 0x27064
	} else {
		// 0x2704c
		if ((v5 & -0x10000) == 0x70000) {
			// 0x27054
			g31 = v14 | 4;
			g34 = 120;
			g34 = function_e9ee0(120);
			// branch -> 0x27064
		}
	}
	// 0x27064
	if (__asm_rlwinm_(g31, 0, 29, 29) != 0) {
		// 0x270b4
		if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
			// 0x27124
			if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
				// 0x2712c
				function_ec730();
				*(int32_t *)(v8 - 0x5058) = g32;
				// branch -> 0x27138
			}
			// 0x27138
			if (g31 % 2 != 0) {
				// 0x27140
				g34 = (int32_t) "MoveWindow" - 1;
				g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
				// branch -> 0x27158
			}
		} else {
			// 0x270bc
			v10 = 5;
			if (g33 % 256 == 0) {
				// 0x270c8
				if (*(char *)g36 == 0) {
					// 0x270d4
					v10 = 0;
					// branch -> 0x270d8
				} else {
					v10 = 5;
				}
			}
			// 0x270d8
			g34 = (int32_t) "MoveWindow" - 1;
			v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
			*(int32_t *)(v8 - 0x5058) = g32;
			v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
			g34 = v20;
			g35 = v21;
			function_ec6d0(v20);
			// branch -> 0x27158
		}
		// 0x27158
		if (v3 % 256 != 0) {
			// 0x27160
			v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
			g34 = v17;
			g15 = *(int32_t *)(v17 + 100);
			FunctionPointer();
			// branch -> 0x27174
		}
		// 0x27174
		g10 = v2;
		return g35;
	}
	// 0x2706c
	v18 = *(int32_t *)(g23 - 0x5058);
	g34 = v18;
	v15 = g32 - v18;
	if (*(char *)g36 == 0) {
		// 0x27090
		if (v15 >= 121) {
			// 0x27098
			g31 |= 2;
			v16 = &v7;
			g34 = v16;
			v13 = function_ec718(v16);
			g34 = v13;
			if (v13 % 256 != 0) {
				// 0x270b0
				g31 |= 4;
				// branch -> 0x270b4
			}
		}
	} else {
		// 0x27080
		if (v15 >= 16) {
			// 0x27088
			g31 |= 4;
			// branch -> 0x270b4
		}
	}
	// 0x270b4
	if (__asm_rlwinm_(g31, 0, 29, 29) == 0) {
		// 0x27124
		if (__asm_rlwinm_(g31, 0, 30, 30) != 0) {
			// 0x2712c
			function_ec730();
			*(int32_t *)(v8 - 0x5058) = g32;
			// branch -> 0x27138
		}
		// 0x27138
		if (g31 % 2 != 0) {
			// 0x27140
			g34 = (int32_t) "MoveWindow" - 1;
			g35 = function_ea1c8((int32_t) "MoveWindow" - 1, v1);
			// branch -> 0x27158
		}
	} else {
		// 0x270bc
		v10 = 5;
		if (g33 % 256 == 0) {
			// 0x270c8
			if (*(char *)g36 == 0) {
				// 0x270d4
				v10 = 0;
				// branch -> 0x270d8
			} else {
				v10 = 5;
			}
		}
		// 0x270d8
		g34 = (int32_t) "MoveWindow" - 1;
		v21 = function_ea7b0((int32_t) "MoveWindow" - 1, v1, v10, 0);
		*(int32_t *)(v8 - 0x5058) = g32;
		v20 = (int32_t) * (int16_t *)(g23 - 0x5054);
		g34 = v20;
		g35 = v21;
		function_ec6d0(v20);
		// branch -> 0x27158
	}
	// 0x27158
	if (v3 % 256 != 0) {
		// 0x27160
		v17 = *(int32_t *)*(int32_t *)(g23 - 0x7818);
		g34 = v17;
		g15 = *(int32_t *)(v17 + 100);
		FunctionPointer();
		// branch -> 0x27174
	}
	// 0x27174
	g10 = v2;
	return g35;
}

// Address range: 0x2718c - 0x272c4
int32_t function_2718c(int32_t a1)
{
	int32_t v1 = g36; // 0x2718c
	int32_t v2 = g10; // 0x27190
	int32_t v3;       // bp-32
	int32_t v4 = &v3; // 0x2719c
	function_26f18((int16_t *)&v3);
	if (v3 % 0x10000 == 7) {
		// 0x271b0
		g36 = 1;
		// branch -> 0x271b4
	}
	// 0x271b4
	int32_t result; // 0x272b4
	if (function_26950((int16_t *)&v3) % 256 != 0) {
		// 0x27298
		if (function_26b1c(v4) % 256 == 0) {
			// 0x27298
			result = g36;
			// branch -> 0x272ac
		} else {
			// 0x272a8
			result = 1;
			// branch -> 0x272ac
		}
		// 0x272ac
		g36 = v1;
		g10 = v2;
		return result;
	}
	uint32_t v5 = v3 % 0x10000; // 0x271c4
	if (v5 == 15) {
		// 0x271d0
		if (function_26860((int16_t *)&v3) % 256 != 0) {
			// 0x271e0
			if (function_26950((int16_t *)&v3) % 256 == 0) {
				// 0x271f0
				g34 = v4;
				function_26e48(v4);
				// branch -> 0x27298
			}
		}
	} else {
		// 0x271fc
		if (v5 <= 23) {
			// 0x27204
			return *(int32_t *)(g23 - 0x2f00 + 4 * v5);
		}
		// 0x27290
		function_26ee0(v4);
		// branch -> 0x27298
	}
	// 0x27298
	if (function_26b1c(v4) % 256 == 0) {
		// 0x27298
		result = g36;
		// branch -> 0x272ac
	} else {
		// 0x272a8
		result = 1;
		// branch -> 0x272ac
	}
	// 0x272ac
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x272c4 - 0x27354
int32_t function_272c4(int32_t a1)
{
	int32_t v1 = g10; // 0x272c8
	g34 = 128;
	int32_t v2 = function_e9ca0(128); // 0x272d8
	if (v2 == 0) {
		// 0x27340
		g10 = v1;
		return 0;
	}
	// 0x272e8
	g34 = v2;
	function_e9cb8(v2);
	g34 = v2;
	function_e9cd0(v2);
	g34 = 128;
	int32_t v3 = function_e9ce8(128); // 0x27304
	g34 = v3;
	if (v3 != 0) {
		// 0x27314
		g34 = v3;
		function_e9d00(v3, 0x44525652);
		g34 = v3;
		g34 = function_e9d18(v3, 1);
		// branch -> 0x27338
	}
	// 0x27338
	// branch -> 0x27340
	// 0x27340
	g10 = v1;
	return function_e9d30();
}

// Address range: 0x27354 - 0x27448
int32_t function_27354(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7820); // 0x2735c
	g34 = v1;
	int32_t v2 = function_e9d60(v1, 4064, 1); // 0x2737c
	int32_t v3;
	int32_t v4 = *(int32_t *)(v3 - 0x7824); // 0x27388
	g34 = v4;
	int32_t v5 = function_e9d60(v4, 4064, 1); // 0x27398
	int32_t v6 = *(int32_t *)(v3 - 0x7828);   // 0x273a4
	g34 = v6;
	int32_t v7 = function_e9d60(v6, 4064, 1); // 0x273b4
	g34 = 0x61657674;
	function_e9f10(0x61657674, 0x6f617070, v2, 0, 0);
	g34 = 0x61657674;
	function_e9f10(0x61657674, 0x6f646f63, v5, 0, 0);
	int32_t v8 = 0x61657674; // 0x2740c
	g34 = v8;
	return function_e9f10(v8, 0x71756974, v7, 0, 0);
}

// Address range: 0x27448 - 0x27478
int32_t function_27448(void)
{
	int32_t result = function_274c0(); // 0x27454
	if ((0x10000 * result || 0xffff) < 0x1ffff) {
		// 0x27460
		*(char *)(g23 - 0x505c) = 1;
		// branch -> 0x27468
	}
	// 0x27468
	return result;
}

// Address range: 0x27478 - 0x27480
int32_t function_27478(void)
{
	// 0x27478
	return 0;
}

// Address range: 0x27480 - 0x274c0
int32_t function_27480(void)
{
	int32_t v1 = function_274c0(); // 0x27490
	g36 = v1;
	int32_t result = v1; // 0x274b0
	if ((0x10000 * v1 || 0xffff) < 0x1ffff) {
		// 0x274a0
		g34 = 7;
		function_28d14(7);
		result = g36;
		// branch -> 0x274a8
	}
	// 0x274a8
	return result;
}

// Address range: 0x274c0 - 0x27524
int32_t function_274c0(void)
{
	// 0x274c0
	int32_t v1;                                                                            // bp-4
	int32_t v2;                                                                            // bp-8
	int32_t v3 = function_e9d48(0x6d697373, 0x2a2a2a2a, (int32_t)&v2, 0, 0, (int32_t)&v1); // 0x274ec
	int32_t v4 = 0x10000 * v3;                                                             // 0x274f4
	int32_t result;                                                                        // 0x27520
	if (v4 == -0x6a50000) {
		// 0x27500
		result = 0;
		// branch -> 0x27514
	} else {
		// 0x27508
		if ((v4 || 0xffff) < 0x1ffff) {
			// 0x27510
			result = -1708;
			// branch -> 0x27514
		} else {
			result = v3;
		}
	}
	// 0x27514
	return result;
}

// Address range: 0x27524 - 0x27588
int32_t function_27524(void)
{
	// 0x27524
	g34 = 1;
	int32_t v1 = function_e9c88(1);                  // 0x27534
	int32_t v2 = function_27354(function_272c4(v1)); // 0x27540
	g34 = v2;
	int32_t v3;
	*(int16_t *)(v3 - 0x5054) = (int16_t)function_e9f28(v2);
	int16_t *v4 = (int16_t *)(g23 - 0x5054); // 0x27554
	*v4 = *v4 | 16;
	if (*(int32_t *)(g23 - 0x7868) != 0) {
		int32_t v5 = *(int32_t *)(g23 - 0x67f0); // 0x27568
		g34 = v5;
		function_e9f40(v5);
		// branch -> 0x27574
	}
	// 0x27574
	return 1;
}

// Address range: 0x27588 - 0x275ac
int32_t function_27588(void)
{
	// 0x27588
	return function_ec850();
}

// Address range: 0x275ac - 0x27604
int32_t function_275ac(int32_t a1, int32_t a2)
{
	int32_t v1 = function_28728(function_27524()); // 0x275bc
	g34 = v1;
	if (v1 % 256 == 0) {
		// 0x275ec
		function_27588();
		return 0;
	}
	int32_t v2 = (int32_t) * (int16_t *)(g23 - 0x5054); // 0x275c8
	g34 = v2;
	function_ec6d0(v2);
	int32_t v3 = function_28700(); // 0x275dc1
	g34 = v3;
	if (v3 % 256 == 0) {
		// 0x275e8
		g34 = function_28800(v3);
		// branch -> 0x275ec
		// 0x275ec
		function_27588();
		return 0;
	}
	function_2718c(v3);
	int32_t v4 = function_28700(); // 0x275dc
	g34 = v4;
	while (v4 % 256 != 0) {
		// 0x275d8
		function_2718c(v4);
		v4 = function_28700();
		g34 = v4;
		// continue -> 0x275d8
	}
	// 0x275e8
	g34 = function_28800(v4);
	// branch -> 0x275ec
	// 0x275ec
	function_27588();
	return 0;
}

// Address range: 0x27604 - 0x2768c
int32_t function_27604(int32_t a1)
{
	// 0x27604
	g34 = a1;
	int32_t v1 = g36; // 0x27604
	int32_t v2 = g34; // 0x27610
	int32_t v3 = v2;  // r30
	function_eaed0();
	g34 = v2;
	function_eb158(v2);
	g36 = 1;
	g34 = v3;
	int32_t v4;
	*(int32_t *)(v4 - 0x2448) = 1;
	int32_t v5 = function_9e934(function_eb560(v3, 1)); // 0x27650
	g34 = 0;
	function_eb5a8(0, 256, v5, 1);
	int32_t result = *(int32_t *)(v4 - 0x7800); // 0x2766c
	*(int32_t *)result = g36;
	g36 = v1;
	return result;
}

// Address range: 0x2768c - 0x2770c
int32_t lock_buf_priv(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x67c8); // 0x27690
	g34 = v1;
	EnterCriticalSection(v1);
	int32_t v2;
	int32_t *v3;    // 0x276f0
	int32_t result; // 0x276f0
	if (*(int32_t *)(v2 - 0x5044) != 0) {
		// 0x276f0
		v3 = (int32_t *)(v2 - 0x5044);
		result = *v3;
		*v3 = result + 1;
		return result;
	}
	// 0x276b0
	g34 = 3;
	g37 = 0;
	int32_t v4; // bp-8
	int32_t v5; // 0x276f8
	if (function_eba58(3, 0, (int32_t)&v4, 0, 0) != 0) {
		int32_t v6 = v4;                        // 0x276d4
		int32_t v7 = *(int32_t *)(v2 - 0x7804); // 0x276d8
		g37 = v7;
		*(int32_t *)v7 = v6;
		int32_t *v8 = (int32_t *)*(int32_t *)(v2 - 0x7808); // 0x276e4
		*v8 = v6 + *v8;
		v5 = g23;
		// branch -> 0x276f0
	} else {
		v5 = v2;
	}
	// 0x276f0
	v3 = (int32_t *)(v5 - 0x5044);
	result = *v3;
	*v3 = result + 1;
	return result;
}

// Address range: 0x2770c - 0x2772c
int32_t lock_buf(int32_t a1)
{
	// 0x2770c
	return lock_buf_priv();
}

// Address range: 0x2772c - 0x277d8
int32_t unlock_buf_priv(void)
{
	int32_t v1 = g36;                        // 0x2772c
	int32_t v2 = *(int32_t *)(g23 - 0x7804); // 0x27734
	g36 = v2;
	if (*(int32_t *)(g23 - 0x5044) == 0) {
		// 0x2774c
		app_fatal(*(int32_t *)(g23 - 0x67cc));
		v2 = g36;
		// branch -> 0x27754
	}
	// 0x27754
	if (*(int32_t *)v2 == 0) {
		// 0x27760
		app_fatal(*(int32_t *)(g23 - 0x67d0));
		// branch -> 0x27768
	}
	int32_t *v3 = (int32_t *)(g23 - 0x5044); // 0x27768
	*v3 = *v3 - 1;
	int32_t result; // 0x277bc
	int32_t v4;     // 0x277b8
	if (*(int32_t *)(g23 - 0x5044) != 0) {
		// 0x277b8
		v4 = *(int32_t *)(g23 - 0x67c8);
		g34 = v4;
		result = LeaveCriticalSection(v4);
		g36 = v1;
		return result;
	}
	int32_t v5 = *(int32_t *)g36; // 0x27780
	g37 = v5;
	if (v5 != 0) {
		// 0x2778c
		g34 = 3;
		int32_t *v6 = (int32_t *)*(int32_t *)(g23 - 0x7808); // 0x27798
		*v6 = *v6 - v5;
		function_ebad0(3, v5, 0, 0);
		*(int32_t *)g36 = 0;
		// branch -> 0x277b8
	}
	// 0x277b8
	v4 = *(int32_t *)(g23 - 0x67c8);
	g34 = v4;
	result = LeaveCriticalSection(v4);
	g36 = v1;
	return result;
}

// Address range: 0x277d8 - 0x277f8
int32_t unlock_buf(int32_t a1)
{
	int32_t result = unlock_buf_priv(); // 0x277e4
	return result;
}

// Address range: 0x277f8 - 0x27878
int32_t dx_cleanup(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x67c8); // r31
	*(int32_t *)*(int32_t *)(g23 - 0x7800) = 0;
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x780c); // 0x2781c
	g34 = v2;
	if (v2 != 0) {
		// 0x27828
		g34 = function_eb158(v2);
		// branch -> 0x27834
	}
	// 0x27834
	SDrawDestroy();
	g34 = v1;
	EnterCriticalSection(v1);
	int32_t v3;
	g37 = *(int32_t *)(v3 - 0x7804);
	*(int32_t *)(v3 - 0x5044) = 0;
	g34 = v1;
	*(int32_t *)g37 = 0;
	return LeaveCriticalSection(v1);
}
