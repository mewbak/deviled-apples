
// Address range: 0xbe5d0 - 0xbe788
int32_t TFit_Shrine(void)
{
	// 0xbe618
	g36 = 0;
	g35 = 0;
	int32_t v1 = *(int32_t *)(g23 - 0x722c); // 0xbe5f4
	int32_t v2 = *(int32_t *)(g23 - 0x7238); // 0xbe5f8
	g33 = 0;
	int32_t v3 = *(int32_t *)(*(int32_t *)(g23 - 0x6fcc) + (8 * g34 | 4)); // 0xbe600
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x7684);                   // 0xbe610
	int32_t v5 = 0;
	// branch -> 0xbe618
	for (uint32_t i = 0; i < 112; i++) {
		int32_t v6 = v5 + *(int32_t *)*(int32_t *)(g23 - 0x757c); // 0xbe638
		// branch -> 0xbe618
		for (uint32_t j = 0; j < 112; j++) {
			int32_t v7 = 112 * j + i;                                 // 0xbe61c
			int32_t v8 = v7 + *(int32_t *)*(int32_t *)(g23 - 0x7588); // 0xbe620
			if ((int32_t) * (char *)v8 == v3) {
				int32_t v9 = v6 + 224 * j;                     // 0xbe63c
				int32_t v10 = (int32_t) * (int16_t *)(v9 - 2); // 0xbe640
				int16_t *v11 = (int16_t *)(v9 - 224);
				if (*(char *)(v10 + v2) != 0) {
					// 0xbe650
					if (*(char *)((int32_t)*v11 + v1) == 0) {
						// 0xbe660
						if (*(char *)((int32_t) * (int16_t *)(v9 + 224) + v1) == 0) {
							// 0xbe670
							if ((int32_t) * (char *)(v8 - 112) == v3) {
								// 0xbe680
								if ((int32_t) * (char *)(v8 + 112) == v3) {
									int32_t v12 = v7 + v4; // 0xbe694
									if (*(char *)(v12 - 113) == 0) {
										// 0xbe6a4
										if (*(char *)(v12 + 111) == 0) {
											// 0xbe6b4
											// branch -> 0xbe764
											// 0xbe764
											g33 = 1;
											*(int32_t *)*(int32_t *)(g23 - 0x6ec4) = j;
											*(int32_t *)*(int32_t *)(g23 - 0x6ec8) = g35;
											*(int32_t *)*(int32_t *)(g23 - 0x6ecc) = g33;
											// branch -> 0xbe780
											// 0xbe780
											return 1;
										}
									}
								}
							}
						}
					}
				}
				// 0xbe6bc
				if (*(char *)((int32_t)*v11 + v2) != 0) {
					// 0xbe6cc
					if (*(char *)(v10 + v1) == 0) {
						// 0xbe6d8
						if (*(char *)((int32_t) * (int16_t *)(v9 + 2) + v1) == 0) {
							// 0xbe6e8
							if ((int32_t) * (char *)(v8 - 1) == v3) {
								// 0xbe6f8
								if ((int32_t) * (char *)(v8 + 1) == v3) {
									int32_t v13 = v7 + v4; // 0xbe70c
									if (*(char *)(v13 - 113) == 0) {
										// 0xbe71c
										if (*(char *)(v13 - 111) == 0) {
											// 0xbe728
											// branch -> 0xbe764
											// 0xbe764
											g33 = 2;
											*(int32_t *)*(int32_t *)(g23 - 0x6ec4) = j;
											*(int32_t *)*(int32_t *)(g23 - 0x6ec8) = g35;
											*(int32_t *)*(int32_t *)(g23 - 0x6ecc) = g33;
											// branch -> 0xbe780
											// 0xbe780
											return 1;
										}
									}
								}
							}
						}
					}
				}
				// 0xbe734
				g36 = j + 1;
				// PHI copies at the loop end
				// loop 0xbe618 end
				continue;
			}
			// 0xbe734
			g36 = j + 1;
			// PHI copies at the loop end
			// loop 0xbe618 end
		}
		// 0xbe740
		g35 = i + 1;
		g36 = 0;
		// PHI copies at the loop end
		v5 += 2;
		// loop 0xbe618 end
	}
	// 0xbe754
	// branch -> 0xbe780
	// 0xbe780
	return 0;
}

// Address range: 0xbe788 - 0xbe910
int32_t function_be788(void)
{
	int32_t v1 = g10; // 0xbe78c
	g36 = *(int32_t *)(g23 - 0x722c);
	g31 = 0;
	g37 = 5;
	int32_t v2 = random(0);                                               // 0xbe7b8
	int32_t v3 = g23;                                                     // 0xbe7c0
	int32_t v4 = v2 + 1;                                                  // 0xbe7d0
	int32_t v5 = *(int32_t *)*(int32_t *)(v3 - 0x7588);                   // 0xbe7d4
	int32_t v6 = *(int32_t *)(*(int32_t *)(v3 - 0x6fcc) + (8 * g34 | 4)); // 0xbe7d8
	int32_t v7 = *(int32_t *)*(int32_t *)(v3 - 0x757c);                   // 0xbe7e0
	int32_t v8 = 0;
	if (v4 > 0) {
		int32_t v9 = g31;
		int32_t v10 = v4; // 0xbe8dc45
		                  // branch -> 0xbe7e8
	lab_0xbe7e8_2:
		while (true) {
			int16_t *v11 = (int16_t *)(224 * v8 + 2 * v9 + v7); // 0xbe810
			int32_t v12 = v9 + v5;                              // 0xbe824
			int32_t v13 = v10;
			// branch -> 0xbe7e8
			while (true) {
				// 0xbe7e8
				if ((int32_t) * (char *)(112 * v8 + v9 + v5) == v6) {
					int32_t v14 = g36; // 0xbe814
					if (*(char *)(v14 + (int32_t)*v11) == 0) {
						int32_t v15 = 1;
						int32_t v16 = *(int32_t *)(g23 - 0x5688); // 0xbe888
						int32_t v17 = *(int32_t *)(g23 - 0x5684); // 0xbe884
						int32_t v18 = 0;                          // 0xbe88c
						// branch -> 0xbe898
						int32_t v19; // 0xbe8a0
						while (true) {
							// 0xbe898
							if (v18 < 25) {
								int32_t v20 = *(int32_t *)v16;                               // 0xbe83c
								int32_t v21 = *(int32_t *)v17 + v8;                          // 0xbe840
								int16_t v22 = *(int16_t *)(2 * (v20 + v9) + 224 * v21 + v7); // 0xbe854
								int32_t v23 = v15;
								if (*(char *)((int32_t)v22 + v14) != 0) {
									// 0xbe864
									v23 = 0;
									// branch -> 0xbe868
								}
								if (v6 != (int32_t) * (char *)(v20 + 112 * v21 + v12)) {
									// 0xbe880
									v23 = 0;
									// branch -> 0xbe884
								}
								int32_t v24 = v17 + 4; // 0xbe884
								int32_t v25 = v16 + 4; // 0xbe888
								int32_t v26 = v18 + 1; // 0xbe88c
								if (v23 == 0) {
									v19 = 0;
									// break -> 0xbe8a0
									break;
								}
								v15 = v23;
								v16 = v25;
								v17 = v24;
								v18 = v26;
								// continue -> 0xbe898
								continue;
							} else {
								v19 = v15;
							}
						}
						// 0xbe8a0
						int32_t result; // 0xbe90c
						if (v19 == 0) {
						lab_0xbe8a8:;
							int32_t v27 = v8 + 1; // 0xbe8a8
							int32_t v28 = v9;
							int32_t v29 = v27;
							if (v27 == 112) {
								int32_t v30 = v9 + 1; // 0xbe8b4
								g31 = v30;
								if (v30 == 112) {
									// 0xbe8c4
									if (v13 == v4) {
										// 0xbe8cc
										// branch -> 0xbe8fc
										// 0xbe8fc
										g10 = v1;
										return 0;
									}
									// 0xbe8d4
									g31 = 0;
									v29 = 0;
									// branch -> 0xbe8e0
									// 0xbe8e0
									if (v13 <= 0) {
										v8 = v29;
										// break (via goto) -> 0xbe8e8
										goto lab_0xbe8e8_2;
									}
									v9 = 0;
									v8 = v29;
									v10 = v13;
									// continue (via goto) -> 0xbe7e8
									goto lab_0xbe7e8_2;
									// 0xbe8fc
									g10 = v1;
									return result;
								}
								v28 = v30;
								v29 = 0;
							}
							// 0xbe8e0
							if (v13 <= 0) {
								v8 = v29;
								// break (via goto) -> 0xbe8e8
								goto lab_0xbe8e8_2;
							}
							v9 = v28;
							v8 = v29;
							v10 = v13;
							// continue (via goto) -> 0xbe7e8
							goto lab_0xbe7e8_2;
						} else {
						lab_0xbe8dc:;
							int32_t v31 = v13 - 1; // 0xbe8dc
							if (v31 <= 0) {
								// break -> 0xbe8e8
								break;
							}
							v13 = v31;
							// continue -> 0xbe7e8
							continue;
						}
						int32_t v32 = *(int32_t *)(v3 - 0x6ec4); // 0xbe8e8
						int32_t v33 = 1;                         // r3
						int32_t v34 = *(int32_t *)(v3 - 0x6ec8); // 0xbe8f0
						int32_t v35 = v34;                       // r4
						*(int32_t *)v32 = v8;
						int32_t v36 = g31; // 0xbe8f8
						int32_t v37 = v35; // 0xbe8f8
						*(int32_t *)v37 = v36;
						int32_t v38 = v33;
						result = v38;
						// branch -> 0xbe8fc
						// 0xbe8fc
						g10 = v1;
						return result;
					}
				}
				goto lab_0xbe8a8;
				goto lab_0xbe8dc;
			}
			// 0xbe8e8
			*(int32_t *)*(int32_t *)(v3 - 0x6ec4) = v8;
			*(int32_t *)*(int32_t *)(v3 - 0x6ec8) = g31;
			// branch -> 0xbe8fc
			// 0xbe8fc
			g10 = v1;
			return 1;
		}
	}
lab_0xbe8e8_2:
	// 0xbe8e8
	*(int32_t *)*(int32_t *)(v3 - 0x6ec4) = v8;
	*(int32_t *)*(int32_t *)(v3 - 0x6ec8) = g31;
	// branch -> 0xbe8fc
	// 0xbe8fc
	g10 = v1;
	return 1;
}

// Address range: 0xbe910 - 0xbe9bc
int32_t function_be910(void)
{
	int32_t v1 = g10;                        // 0xbe914
	int32_t v2 = *(int32_t *)(g23 - 0x7618); // 0xbe920
	if (((int32_t) * (char *)*(int32_t *)(g23 - 0x7794) + 255) % 256 > 1) {
		// 0xbe99c
		g10 = v1;
		return 0;
	}
	int32_t v3 = 0;                          // r29
	int32_t v4 = *(int32_t *)(g23 - 0x7610); // 0xbe950
	if (*(int32_t *)v2 <= 0) {
		// 0xbe99c
		g10 = v1;
		return 0;
	}
	while (true) {
		// 0xbe960
		if (function_86dcc((int32_t) * (char *)v4) != 0) {
			// 0xbe970
			*(int32_t *)*(int32_t *)(g23 - 0x6ecc) = v3;
			int32_t result = function_be788();
			// branch -> 0xbe99c
			// 0xbe99c
			g10 = v1;
			return result;
		}
		int32_t v5 = v3 + 1; // 0xbe988
		v3 = v5;
		if (v5 >= *(int32_t *)v2) {
			// break -> 0xbe99c
			break;
		}
		v4 += 520;
		// continue -> 0xbe960
	}
	// 0xbe99c
	g10 = v1;
	return 0;
}

// Address range: 0xbe9bc - 0xbea50
int32_t function_be9bc(void)
{
	int32_t v1 = g10;                        // 0xbe9c0
	int32_t v2 = *(int32_t *)(g23 - 0x7610); // 0xbe9c4
	int32_t v3 = *(int32_t *)(g23 - 0x7618); // 0xbe9cc
	int32_t v4 = 0;                          // r29
	if (*(int32_t *)v3 <= 0) {
		// 0xbea30
		g10 = v1;
		return 0;
	}
	while (true) {
		// 0xbe9f4
		if (function_86e4c((int32_t) * (char *)v2) != 0) {
			// 0xbea04
			*(int32_t *)*(int32_t *)(g23 - 0x6ecc) = v4;
			int32_t result = function_be788();
			// branch -> 0xbea30
			// 0xbea30
			g10 = v1;
			return result;
		}
		int32_t v5 = v4 + 1; // 0xbea1c
		v4 = v5;
		if (v5 >= *(int32_t *)v3) {
			// break -> 0xbea30
			break;
		}
		v2 += 520;
		// continue -> 0xbe9f4
	}
	// 0xbea30
	g10 = v1;
	return 0;
}

// Address range: 0xbea50 - 0xbeb78
int32_t function_bea50(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0xbea54
	g25 = a1;
	g32 = *(int32_t *)(g23 - 0x722c);
	g33 = *(int32_t *)(g23 - 0x7684);
	g26 = a2;
	g35 = *(int32_t *)(g23 - 0x757c);
	g27 = a4;
	g36 = *(int32_t *)(g23 - 0x7588);
	int32_t v2 = *(int32_t *)(g23 - 0x568c); // 0xbea78
	g31 = v2;
	g28 = 0;
	int32_t v3 = *(int32_t *)(g23 - 0x5690); // 0xbea80
	g30 = v3;
	g29 = 8 * a3 + *(int32_t *)(g23 - 0x6fcc);
	int32_t v4 = *(int32_t *)v2 + a1; // 0xbea9815
	if (v4 >= 0) {
		int32_t v5 = 0; // 0xbeb4c419
		while (true) {
			int32_t v6 = *(int32_t *)v3; // 0xbeaa0
			int32_t v7 = a2 + v6;        // 0xbeaa4
			if (v7 > -1) {
				int16_t v8 = *(int16_t *)(*(int32_t *)g35 + 2 * v7 + 224 * v4); // 0xbeac4
				if (*(char *)(g32 + (int32_t)v8) != 0) {
					// 0xbead4
					// branch -> 0xbeb64
					// 0xbeb64
					g10 = v1;
					return 0;
				}
				int32_t v9 = *(int32_t *)g36;        // 0xbeae0
				int32_t v10 = *(int32_t *)(g29 + 4); // 0xbeae4
				int32_t v11 = v6 + 112 * v4;         // 0xbeae8
				if (v10 != (int32_t) * (char *)(v11 + v9 + a2) || *(char *)(v11 + *(int32_t *)g33 + a2) != 0) {
					// 0xbeb00
					// branch -> 0xbeb64
					// 0xbeb64
					g10 = v1;
					return 0;
				}
				int32_t v12 = v2; // 0xbeb58
				int32_t v13 = v3; // 0xbeb50
				int32_t v14 = v5; // 0xbeb4c
				int32_t v15;      // 0xbeb4c
				int32_t v16;      // 0xbeb50
				int32_t v17;      // 0xbeb58
				if (g27 != -1) {
					// 0xbeb30
					g37 = g27;
					if (random(0) == 0) {
						// 0xbeb44
						// branch -> 0xbeb64
						// 0xbeb64
						g10 = v1;
						return 0;
					}
					// 0xbeb30
					// branch -> 0xbeb4c
					// 0xbeb4c
					v15 = g28 + 1;
					g28 = v15;
					v16 = g30 + 4;
					g30 = v16;
					v17 = g31 + 4;
					g31 = v17;
					if (v15 >= 9) {
						// 0xbeb60
						// branch -> 0xbeb64
						// 0xbeb64
						g10 = v1;
						return 1;
					}
				lab_0xbeb4c:;
					int32_t v18 = *(int32_t *)v17 + g25; // 0xbea98
					if (v18 < 0) {
						// 0xbeaac
						// branch -> 0xbeb64
						// 0xbeb64
						g10 = v1;
						return 0;
					}
					// 0xbeb4c
					a2 = g26;
					v4 = v18;
					v2 = v17;
					v3 = v16;
					v5 = v15;
					// branch -> 0xbeaa0
					continue;
				}
				// 0xbeb4c
				v15 = v14 + 1;
				g28 = v15;
				v16 = v13 + 4;
				g30 = v16;
				v17 = v12 + 4;
				g31 = v17;
				if (v15 < 9) {
					goto lab_0xbeb4c;
				}
				// 0xbeb60
				// branch -> 0xbeb64
				// 0xbeb64
				g10 = v1;
				return 1;
			}
		}
	}
	// 0xbeaac
	// branch -> 0xbeb64
	// 0xbeb64
	g10 = v1;
	return 0;
}

// Address range: 0xbeb78 - 0xbec14
int32_t function_beb78(int32_t a1)
{
	int32_t v1 = g10; // 0xbeb7c
	g35 = *(int32_t *)(g23 - 0x7794);
	g31 = a1;
	int32_t v2; // bp-40
	g36 = &v2;
	v2 = *(int32_t *)(g23 - 0x4b20);
	int32_t v3 = 1; // 0xbebac3
	// branch -> 0xbeba0
	while (true) {
		int32_t v4 = v3; // 0xbebac
		int32_t v5 = 1;  // 0xbeba8
		// branch -> 0xbeba4
		int32_t v6;
		while (true) {
			char v7 = *(char *)(g36 + (int32_t) * (char *)g35 - 1); // 0xbebb4
			if (function_bea50(v5, v4, g31, (int32_t)v7) != 0) {
				// 0xbebcc
				*(int32_t *)*(int32_t *)(g23 - 0x6ec4) = g33;
				*(int32_t *)*(int32_t *)(g23 - 0x6ec8) = g32;
				// branch -> 0xbec00
				// 0xbec00
				g10 = v1;
				return 1;
			}
			int32_t v8 = g33 + 1; // 0xbebe4
			g33 = v8;
			v6 = g32;
			if (v8 >= 111) {
				// break -> 0xbebf0
				break;
			}
			v4 = v6;
			v5 = v8;
			// continue -> 0xbeba4
		}
		int32_t v9 = v6 + 1; // 0xbebf0
		if (v9 >= 111) {
			// break -> 0xbebfc
			break;
		}
		v3 = v9;
		// continue -> 0xbeba0
	}
	// 0xbebfc
	// branch -> 0xbec00
	// 0xbec00
	g10 = v1;
	return 0;
}

// Address range: 0xbec14 - 0xbed0c
int32_t CheckThemeReqs(uint32_t result)
{
	// 0xbec14
	if (result > 16) {
		// 0xbed04
		return 1;
	}
	// 0xbec24
	return result;
}

// Address range: 0xbed0c - 0xbee9c
int32_t SpecialThemeFit(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0xbed0c
	g36 = *(int32_t *)(g23 - 0x6ee4);
	int32_t v2 = g35; // 0xbed18
	g35 = a2;
	int32_t v3 = g33; // 0xbed20
	g33 = a1;
	int32_t result = CheckThemeReqs(a2); // 0xbed34
	if (g35 <= 16) {
		// 0xbed40
		return result;
	}
	// 0xbee80
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return result;
}

// Address range: 0xbee9c - 0xbf278
int32_t CheckThemeRoom(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x70f8); // 0xbeea4
	int32_t v2 = *(int32_t *)(g23 - 0x722c);             // r4
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7588); // 0xbeeb8
	int32_t v4;                                          // ctr
	int32_t v5;                                          // r10
	int32_t v6;                                          // r11
	int32_t v7;                                          // r12
	int32_t v8;                                          // r6
	int32_t v9;                                          // r7
	int32_t v10;                                         // r8
	int32_t v11;                                         // r9
	int32_t v12;                                         // 0xbef0c
	int32_t v13;                                         // 0xbef10
	int32_t v14;                                         // 0xbef18
	int32_t v15;                                         // 0xbef28
	int32_t v16;                                         // 0xbf09040
	int32_t v17;                                         // 0xbeefc
	if (v1 >= 1) {
		int32_t v18 = *(int32_t *)(g23 - 0x70f4); // 0xbeee8
		while (true) {
			int32_t v19 = *(int32_t *)v18;                                // 0xbeec0
			char v20 = *(char *)(*(int32_t *)(v18 + 4) + 112 * v19 + v3); // 0xbeed0
			if ((int32_t)v20 == a1) {
				// 0xbeee0
				return 0;
			}
			int32_t v21 = v1 - 1; // 0xbeeec
			if (v21 == 0) {
				// break -> 0xbeef0
				break;
			}
			v1 = v21;
			v18 += 16;
			// continue -> 0xbeec0
		}
		// 0xbeef0
		v10 = v3;
		v7 = 0;
		v17 = *(int32_t *)*(int32_t *)(g23 - 0x779c);
		v11 = v17;
		v6 = 0;
		int32_t v22 = 0; // 0xbf09041
		v13 = v17;
		v12 = v3;
		// branch -> 0xbef04
		int32_t v23; // 0xbf09039
		while (true) {
			// 0xbef04
			v4 = 16;
			v8 = v12;
			v9 = v13;
			v5 = 0;
			v16 = v22;
			v15 = v13;
			v14 = v12;
			// branch -> 0xbef18
		lab_0xbef18:
			while (true) {
				// 0xbef18
				v23 = v16;
				int32_t v24 = a1;  // 0xbef4c
				int32_t v25 = v15; // 0xbef44
				int32_t v26 = v14; // 0xbef40
				if (a1 == (int32_t) * (char *)v14) {
					// 0xbef28
					if (__asm_rlwinm_((int32_t) * (char *)v15, 0, 28, 28) != 0) {
						// 0xbef34
						return 0;
					}
					int32_t v27 = v7 + 1; // 0xbef3c
					v7 = v27;
					v23 = v27;
					v24 = a1;
					v25 = v9;
					v26 = v8;
					// branch -> 0xbef40
				}
				int32_t v28 = v26 + 112; // 0xbef40
				v8 = v28;
				int32_t v29 = v25 + 112; // 0xbef44
				v9 = v29;
				int32_t v30 = v24; // 0xbef7c
				int32_t v31 = v29; // 0xbef70
				int32_t v32 = v28; // 0xbef6c
				if (v24 == (int32_t) * (char *)v28) {
					// 0xbef54
					if (__asm_rlwinm_((int32_t) * (char *)v29, 0, 28, 28) != 0) {
						// 0xbef60
						return 0;
					}
					int32_t v33 = v7 + 1; // 0xbef68
					v7 = v33;
					v23 = v33;
					v30 = a1;
					v31 = v9;
					v32 = v8;
					// branch -> 0xbef6c
				}
				int32_t v34 = v32 + 112; // 0xbef6c
				v8 = v34;
				int32_t v35 = v31 + 112; // 0xbef70
				v9 = v35;
				int32_t v36 = v5 + 1; // 0xbef74
				v5 = v36;
				int32_t v37 = v30; // 0xbefac
				int32_t v38 = v35; // 0xbefa0
				int32_t v39 = v34; // 0xbef9c
				if (v30 == (int32_t) * (char *)v34) {
					// 0xbef84
					if (__asm_rlwinm_((int32_t) * (char *)v35, 0, 28, 28) != 0) {
						// 0xbef90
						return 0;
					}
					int32_t v40 = v7 + 1; // 0xbef98
					v7 = v40;
					v23 = v40;
					v37 = a1;
					v36 = v5;
					v38 = v9;
					v39 = v8;
					// branch -> 0xbef9c
				}
				int32_t v41 = v39 + 112; // 0xbef9c
				v8 = v41;
				int32_t v42 = v38 + 112; // 0xbefa0
				v9 = v42;
				int32_t v43 = v36 + 1; // 0xbefa4
				v5 = v43;
				int32_t v44 = v37; // 0xbefdc
				int32_t v45 = v42; // 0xbefd0
				int32_t v46 = v41; // 0xbefcc
				if (v37 == (int32_t) * (char *)v41) {
					// 0xbefb4
					if (__asm_rlwinm_((int32_t) * (char *)v42, 0, 28, 28) != 0) {
						// 0xbefc0
						return 0;
					}
					int32_t v47 = v7 + 1; // 0xbefc8
					v7 = v47;
					v23 = v47;
					v44 = a1;
					v43 = v5;
					v45 = v9;
					v46 = v8;
					// branch -> 0xbefcc
				}
				int32_t v48 = v46 + 112; // 0xbefcc
				v8 = v48;
				int32_t v49 = v45 + 112; // 0xbefd0
				v9 = v49;
				int32_t v50 = v43 + 1; // 0xbefd4
				v5 = v50;
				int32_t v51 = v44; // 0xbf00c
				int32_t v52 = v49; // 0xbf000
				int32_t v53 = v48; // 0xbeffc
				if (v44 == (int32_t) * (char *)v48) {
					// 0xbefe4
					if (__asm_rlwinm_((int32_t) * (char *)v49, 0, 28, 28) != 0) {
						// 0xbeff0
						return 0;
					}
					int32_t v54 = v7 + 1; // 0xbeff8
					v7 = v54;
					v23 = v54;
					v51 = a1;
					v50 = v5;
					v52 = v9;
					v53 = v8;
					// branch -> 0xbeffc
				}
				int32_t v55 = v53 + 112; // 0xbeffc
				v8 = v55;
				int32_t v56 = v52 + 112; // 0xbf000
				v9 = v56;
				int32_t v57 = v50 + 1; // 0xbf004
				v5 = v57;
				int32_t v58 = v51; // 0xbf03c
				int32_t v59 = v56; // 0xbf030
				int32_t v60 = v55; // 0xbf02c
				if (v51 == (int32_t) * (char *)v55) {
					// 0xbf014
					if (__asm_rlwinm_((int32_t) * (char *)v56, 0, 28, 28) != 0) {
						// 0xbf020
						return 0;
					}
					int32_t v61 = v7 + 1; // 0xbf028
					v7 = v61;
					v23 = v61;
					v58 = a1;
					v57 = v5;
					v59 = v9;
					v60 = v8;
					// branch -> 0xbf02c
				}
				int32_t v62 = v60 + 112; // 0xbf02c
				v8 = v62;
				int32_t v63 = v59 + 112; // 0xbf030
				v9 = v63;
				int32_t v64 = v57 + 1; // 0xbf034
				v5 = v64;
				int32_t v65 = v63; // 0xbf060
				int32_t v66 = v62; // 0xbf05c
				if (v58 == (int32_t) * (char *)v62) {
					// 0xbf044
					if (__asm_rlwinm_((int32_t) * (char *)v63, 0, 28, 28) != 0) {
						// 0xbf050
						return 0;
					}
					int32_t v67 = v7 + 1; // 0xbf058
					v7 = v67;
					v23 = v67;
					v64 = v5;
					v65 = v9;
					v66 = v8;
					// branch -> 0xbf05c
				}
				int32_t v68 = v66 + 112; // 0xbf05c
				v8 = v68;
				int32_t v69 = v65 + 112; // 0xbf060
				v9 = v69;
				v5 = v64 + 1;
				int32_t v70 = v4 - 1; // 0xbf068
				v4 = v70;
				if (v70 == 0) {
					// break -> 0xbf06c
					break;
				}
				v16 = v23;
				v15 = v69;
				v14 = v68;
				// continue -> 0xbef18
			}
			int32_t v71 = v6 + 1; // 0xbf06c
			v6 = v71;
			int32_t v72 = v11 + 1; // 0xbf070
			v11 = v72;
			int32_t v73 = v10 + 1; // 0xbf078
			v10 = v73;
			if (v71 >= 112) {
				// break -> 0xbf080
				break;
			}
			v22 = v23;
			v13 = v72;
			v12 = v73;
			// continue -> 0xbef04
		}
		// 0xbf080
		if (*(char *)*(int32_t *)(g23 - 0x7794) == 1) {
			// 0xbf090
			if (v23 < 9 || v23 >= 101) {
				// 0xbf0a0
				return 0;
			}
		}
		int32_t v74 = 0;                                      // 0xbf25c
		int32_t v75 = *(int32_t *)*(int32_t *)(g23 - 0x757c); // 0xbf260
		int32_t v76 = v3;                                     // 0xbf268
		// branch -> 0xbf0b4
		while (true) {
			int32_t v77 = 56;  // 0xbf258
			int32_t v78 = 0;   // 0xbf254
			int32_t v79 = v75; // 0xbf18c
			int32_t v80 = v76; // 0xbf188
			// branch -> 0xbf0c8
			while (true) {
				char *v81 = (char *)v80; // 0xbf0c8
				if (a1 == (int32_t)*v81) {
					// 0xbf0d8
					if (*(char *)(v2 + (int32_t) * (int16_t *)v79) == 0) {
						// 0xbf0e8
						if (a1 != (int32_t) * (char *)(v80 - 112)) {
							int16_t v82 = *(int16_t *)(v79 - 224); // 0xbf0f8
							if (*(char *)((int32_t)v82 + v2) == 0) {
								// 0xbf108
								return 0;
							}
						}
						// 0xbf110
						if (a1 != (int32_t) * (char *)(v80 + 112)) {
							int16_t v83 = *(int16_t *)(v79 + 224); // 0xbf120
							if (*(char *)((int32_t)v83 + v2) == 0) {
								// 0xbf130
								return 0;
							}
						}
						// 0xbf138
						if (a1 != (int32_t) * (char *)(v80 - 1)) {
							int16_t v84 = *(int16_t *)(v79 - 2); // 0xbf148
							if (*(char *)((int32_t)v84 + v2) == 0) {
								// 0xbf158
								return 0;
							}
						}
						// 0xbf160
						if (a1 != (int32_t) * (char *)(v80 + 1)) {
							int16_t v85 = *(int16_t *)(v79 + 2); // 0xbf170
							if (*(char *)((int32_t)v85 + v2) == 0) {
								// 0xbf180
								return 0;
							}
						}
					}
				}
				int32_t v86 = v79 + 224; // 0xbf18c
				if (a1 == (int32_t) * (char *)(v80 + 112)) {
					// 0xbf19c
					if (*(char *)(v2 + (int32_t) * (int16_t *)v86) == 0) {
						// 0xbf1ac
						if (a1 != (int32_t)*v81) {
							// 0xbf1bc
							if (*(char *)((int32_t) * (int16_t *)v79 + v2) == 0) {
								// 0xbf1cc
								return 0;
							}
						}
						// 0xbf1d4
						if (a1 != (int32_t) * (char *)(v80 + 224)) {
							int16_t v87 = *(int16_t *)(v79 + 448); // 0xbf1e4
							if (*(char *)((int32_t)v87 + v2) == 0) {
								// 0xbf1f4
								return 0;
							}
						}
						// 0xbf1fc
						if (a1 != (int32_t) * (char *)(v80 + 111)) {
							int16_t v88 = *(int16_t *)(v79 + 222); // 0xbf20c
							if (*(char *)((int32_t)v88 + v2) == 0) {
								// 0xbf21c
								return 0;
							}
						}
						// 0xbf224
						if (a1 != (int32_t) * (char *)(v80 + 113)) {
							int16_t v89 = *(int16_t *)(v79 + 226); // 0xbf234
							if (*(char *)((int32_t)v89 + v2) == 0) {
								// 0xbf244
								return 0;
							}
						}
					}
				}
				int32_t v90 = v80 + 224; // 0xbf24c
				int32_t v91 = v79 + 448; // 0xbf250
				int32_t v92 = v78 + 1;   // 0xbf254
				int32_t v93 = v77 - 1;   // 0xbf258
				if (v93 == 0) {
					// break -> 0xbf25c
					break;
				}
				v77 = v93;
				v78 = v92;
				v79 = v91;
				v80 = v90;
				// continue -> 0xbf0c8
			}
			int32_t v94 = v74 + 1; // 0xbf25c
			if (v94 >= 112) {
				// break -> 0xbf270
				break;
			}
			v74 = v94;
			v75 += 2;
			v76++;
			// continue -> 0xbf0b4
		}
		// 0xbf270
		return 1;
	}
	// 0xbeef0
	v10 = v3;
	v7 = 0;
	v17 = *(int32_t *)*(int32_t *)(g23 - 0x779c);
	v11 = v17;
	v6 = 0;
	v13 = v17;
	v12 = v3;
	// branch -> 0xbef04
	while (true) {
		// 0xbef04
		v4 = 16;
		v8 = v12;
		v9 = v13;
		v5 = 0;
		v16 = 0;
		v15 = v13;
		v14 = v12;
		// branch -> 0xbef18
		goto lab_0xbef18;
	}
}

// Address range: 0xbf278 - 0xbf57c
int32_t InitThemes(int32_t a1)
{
	int32_t v1 = g10;                        // 0xbf27c
	int32_t v2 = *(int32_t *)(g23 - 0x6fd0); // 0xbf280
	g35 = v2;
	int32_t v3 = 0; // r5
	g33 = *(int32_t *)(g23 - 0x70a8);
	int32_t v4 = *(int32_t *)(g23 - 0x726c); // r25
	int32_t v5 = *(int32_t *)(g23 - 0x7270); // r27
	int32_t v6 = *(int32_t *)(g23 - 0x569c); // r28
	g36 = *(int32_t *)(g23 - 0x7794);
	int32_t v7 = *(int32_t *)(g23 - 0x6fcc); // r26
	int32_t v8 = 1;                          // r0
	*(int32_t *)v2 = 0;
	*(int32_t *)g33 = -1;
	*(int32_t *)*(int32_t *)(g23 - 0x6ff0) = v8;
	*(int32_t *)*(int32_t *)(g23 - 0x6ed0) = v8;
	*(int32_t *)*(int32_t *)(g23 - 0x6ee0) = v8;
	*(int32_t *)*(int32_t *)(g23 - 0x6ed8) = v8;
	*(int32_t *)*(int32_t *)(g23 - 0x6ed4) = v8;
	*(int32_t *)*(int32_t *)(g23 - 0x6edc) = v8;
	*(int32_t *)*(int32_t *)(g23 - 0x6ee4) = v8;
	*(int32_t *)*(int32_t *)(g23 - 0x6ee8) = v3;
	*(int32_t *)*(int32_t *)(g23 - 0x6ff8) = v8;
	int32_t result = *(int32_t *)(g23 - 0x6eec); // 0xbf308
	int32_t v9 = result;                         // r3
	if (*(char *)*(int32_t *)(g23 - 0x77e4) == 16) {
		// 0xbf568
		g10 = v1;
		return result;
	}
	int32_t v10 = g36; // 0xbf314
	int32_t v11 = v10; // 0xbf3c8
	int32_t v12;       // ctr
	int32_t v13;       // r23
	int32_t v14;       // r24
	int32_t v15;       // 0xbf3dc
	int32_t v16;       // 0xbf408
	int32_t v17;       // 0xbf444
	int32_t v18;       // 0xbf474
	int32_t v19;       // 0xbf478
	int32_t v20;       // 0xbf53837
	int32_t v21;       // 0xbf53c
	int32_t v22;       // 0xbf53c9
	int32_t v23;       // 0xbf438
	int32_t v24;       // 0xbf43c
	int32_t v25;       // 0xbf45c
	int32_t v26;       // 0xbf45c65
	int32_t v27;       // 0xbf460
	int32_t v28;       // 0xbf46067
	int32_t v29;       // 0xbf4f0
	int32_t *v30;      // 0xbf548
	uint32_t v31;      // 0xbf3dc
	int32_t result3;   // 0xbf53c11
	int32_t v32;       // 0xbf55c
	int32_t v33;       // 0xbf560
	int32_t result5;   // 0xbf3c8
	if (*(char *)v10 == 1) {
		// 0xbf320
		*(int32_t *)result = v3;
		v14 = 0;
		*(int32_t *)(v9 + 4) = v3;
		*(int32_t *)(v9 + 8) = v3;
		*(int32_t *)(v9 + 12) = v3;
		int32_t v34 = v14;
		if (v34 <= 255) {
		lab_0xbf3bc:
			while (true) {
				// 0xbf3bc
				if (*(int32_t *)g35 < 50) {
					// 0xbf338
					int32_t v35; // 0xbf3b0
					if (CheckThemeRoom(v34) != 0) {
						int32_t v36 = *(int32_t *)g35; // 0xbf348
						g37 = 4;
						*(int32_t *)(v7 + (8 * v36 | 4)) = v14;
						int32_t v37 = *(int32_t *)(v6 + 4 * random(0));
						// branch -> 0xbf380
						while (true) {
							// 0xbf380
							v13 = v37;
							if (SpecialThemeFit(*(int32_t *)g35, v37) == 0) {
								// 0xbf370
								g37 = 17;
								v37 = random(0);
								// branch -> 0xbf380
								continue;
							} else {
								int32_t v38 = *(int32_t *)g35;             // 0xbf394
								int32_t v39 = 0x1000000 * v13 / 0x1000000; // 0xbf398
								*(char *)(v7 + 8 * v38) = (char)v39;
								int32_t *v40 = (int32_t *)g35; // 0xbf3a4
								*v40 = *v40 + 1;
								// branch -> 0xbf3b0
								// 0xbf3b0
								v35 = v14 + 1;
								v14 = v35;
								if (v35 > 255) {
									// break (via goto) -> 0xbf3c8
									goto lab_0xbf3c8;
								}
								v34 = v35;
								// continue (via goto) -> 0xbf3bc
								goto lab_0xbf3bc;
							}
						}
						int32_t v41 = g36;
						v11 = v41;
						// branch -> 0xbf3c8
						unsigned char v42 = *(char *)v11; // 0xbf3c8
						result5 = v42;
						v9 = result5;
						uint32_t v43 = (result5 + 254) % 256; // 0xbf3d0
						v8 = v43;
						int32_t result2; // 0xbf578
						if (v43 > 2) {
							result2 = result5;
							// 0xbf568
							v8 = v1;
							g10 = v1;
							return result2;
						}
						// 0xbf3dc
						v15 = v5;
						v31 = *(int32_t *)v15;
						v9 = v31;
						v3 = 0;
						int32_t v44; // 0xbf484
						int32_t v45; // 0xbf488
						int32_t v46; // 0xbf4a0
						int32_t v47; // 0xbf4ac
						int32_t v48; // 0xbf4c015
						int32_t v49;
						int32_t v50; // 0xbf53c39
						int32_t v51; // 0xbf548
						int32_t v52;
						int32_t v53; // 0xbf468
						int32_t v54; // 0xbf490
						int32_t v55; // 0xbf4a0
						int32_t v56; // 0xbf4a8
						int32_t v57; // 0xbf4ac
						int32_t v58; // 0xbf54c
						int32_t v59; // 0xbf494
						int32_t v60; // 0xbf4c017
						char v61;    // 0xbf4d4
						int32_t v62; // 0xbf548
						int32_t v63; // 0xbf54c
						int32_t v64; // 0xbf484
						if (v31 >= 1) {
							int32_t v65 = v31 - 8; // 0xbf3f0
							v9 = v65;
							int32_t v66 = v15; // 0xbf55c
							v17 = 0;
							if (v31 >= 9) {
								// 0xbf3f8
								v12 = (v31 - 1) / 8;
								v16 = v7;
								v9 = v16;
								v8 = -1;
								if (v65 >= 1) {
									while (true) {
										// 0xbf414
										*(char *)v23 = (char)v8;
										v3 += 8;
										*(char *)(v9 + 8) = (char)v8;
										*(char *)(v9 + 16) = (char)v8;
										*(char *)(v9 + 24) = (char)v8;
										*(char *)(v9 + 32) = (char)v8;
										*(char *)(v9 + 40) = (char)v8;
										*(char *)(v9 + 48) = (char)v8;
										*(char *)(v9 + 56) = (char)v8;
										v23 = v9 + 64;
										v9 = v23;
										v24--;
										if (v24 == 0) {
											// 0xbf558
											v17 = v3;
											// branch -> 0xbf558
											// 0xbf558
											v32 = *(int32_t *)v5;
											v33 = v7 + 8 * v17;
											if (v32 > v17) {
												// 0xbf458
												*(char *)v33 = -1;
												v26 = v33 + 8;
												v28 = v32 - v17 - 1;
												if (v28 != 0) {
													*(char *)v26 = (char)-1;
													v25 = v26 + 8;
													v27 = v28 - 1;
													while (v27 != 0) {
														// 0xbf458
														*(char *)v25 = (char)-1;
														v25 += 8;
														v27--;
														// continue -> 0xbf458
													}
													// 0xbf464
													if (QuestStatus(3) != 0) {
														// 0xbf474
														v18 = v4;
														v14 = v18;
														v19 = v7;
														g36 = v19;
														v13 = 0;
														if (*(int32_t *)v5 > 0) {
															v54 = v19;
															v45 = 0;
															v44 = v18;
															while (true) {
																// 0xbf484
																*(int32_t *)(v54 + 4) = *(int32_t *)(v44 + 8);
																if (SpecialThemeFit(v45, 5) == 0) {
																lab_0xbf4b4_8:;
																	int32_t v67 = v14 + 20; // 0xbf4b4
																	v14 = v67;
																	int32_t v68 = g36 + 8; // 0xbf4b8
																	g36 = v68;
																	int32_t v69 = v13 + 1; // 0xbf4bc
																	v13 = v69;
																	if (v69 >= *(int32_t *)v5) {
																		// break -> 0xbf53c
																		break;
																	}
																	v54 = v68;
																	v45 = v69;
																	v44 = v67;
																	// continue -> 0xbf484
																	continue;
																} else {
																	// 0xbf4a0
																	*(char *)(v7 + 8 * v13) = 5;
																	*(int32_t *)g33 = v13;
																	// branch -> 0xbf53c
																}
																// 0xbf53c
																v14 = 0;
																v22 = v5;
																result3 = *(int32_t *)v22;
																if (result3 <= 0) {
																	// 0xbf548
																	v30 = (int32_t *)g35;
																	*v30 = *v30 + result3;
																	// branch -> 0xbf568
																	// 0xbf568
																	g10 = v1;
																	return result3;
																}
																// 0xbf4d4
																v50 = v22;
																v20 = 0;
																v29 = v7;
																// branch -> 0xbf4d4
																int32_t result4; // 0xbf53c
																while (true) {
																	// 0xbf4d4
																	v21 = v50;
																	int32_t v70; // 0xbf530
																	int32_t v71; // 0xbf538
																	if (*(char *)v29 == -1) {
																	lab_0xbf4e4_9:
																		// 0xbf4e4
																		g37 = 4;
																		*(int32_t *)(v29 + 4) = *(int32_t *)(v4 + 8);
																		int32_t v72 = *(int32_t *)(v6 + 4 * random(0)); // 0xbf4fc
																		v13 = v72;
																		int32_t v73;
																		int32_t v74;
																		if (SpecialThemeFit(v14, v72) == 0) {
																			g37 = 17;
																			int32_t v75 = random(0); // 0xbf50c
																			while (SpecialThemeFit(v14, v75) == 0) {
																				// 0xbf504
																				g37 = 17;
																				v75 = random(0);
																				// continue -> 0xbf504
																			}
																			// 0xbf528
																			*(char *)v7 = (char)(0x1000000 * v75 / 0x1000000);
																			v21 = v5;
																			// branch -> 0xbf530
																		lab_0xbf530:
																			// 0xbf530
																			v70 = v73 + 8;
																			v7 = v70;
																			v4 += 20;
																			v71 = v74 + 1;
																			v14 = v71;
																			result4 = *(int32_t *)v21;
																			if (v71 >= result4) {
																				// break -> 0xbf548
																				break;
																			}
																			v50 = v21;
																			v20 = v71;
																			v29 = v70;
																			// continue -> 0xbf4d4
																			continue;
																		}
																		int32_t v76 = 0x1000000 * v13 / 0x1000000; // 0xbf528
																		*(char *)v7 = (char)v76;
																		v73 = v7;
																		v74 = v14;
																		v21 = v5;
																		// branch -> 0xbf530
																		goto lab_0xbf530;
																	}
																lab_0xbf530_10:
																	// 0xbf530
																	v70 = v29 + 8;
																	v7 = v70;
																	v4 += 20;
																	v71 = v20 + 1;
																	v14 = v71;
																	result4 = *(int32_t *)v21;
																	if (v71 >= result4) {
																		// break -> 0xbf548
																		break;
																	}
																	v50 = v21;
																	v20 = v71;
																	v29 = v70;
																	// continue -> 0xbf4d4
																}
																// 0xbf548
																v30 = (int32_t *)g35;
																*v30 = *v30 + result4;
																// branch -> 0xbf568
																// 0xbf568
																g10 = v1;
																return result4;
															}
														}
													}
													// 0xbf53c
													v14 = 0;
													v22 = v5;
													result3 = *(int32_t *)v22;
													if (result3 > 0) {
														// 0xbf4d4
														v29 = v7;
														// branch -> 0xbf4d4
														while (true) {
															// 0xbf4d4
															if (*(char *)v29 == -1) {
																goto lab_0xbf4e4_9;
															}
															v21 = v22;
															goto lab_0xbf530_10;
														}
													}
													// 0xbf548
													v30 = (int32_t *)g35;
													*v30 = *v30 + result3;
													// branch -> 0xbf568
													// 0xbf568
													g10 = v1;
													return result3;
												}
											}
											// 0xbf464
											if (QuestStatus(3) != 0) {
												// 0xbf474
												v18 = v4;
												v14 = v18;
												v19 = v7;
												g36 = v19;
												v13 = 0;
												if (*(int32_t *)v5 > 0) {
													while (true) {
														// 0xbf484
														*(int32_t *)(v19 + 4) = *(int32_t *)(v18 + 8);
														if (SpecialThemeFit(0, 5) == 0) {
															goto lab_0xbf4b4_8;
														}
														// 0xbf4a0
														*(char *)(v7 + 8 * v13) = 5;
														*(int32_t *)g33 = v13;
														// branch -> 0xbf53c
													}
												}
											}
											// 0xbf53c
											v14 = 0;
											v22 = v5;
											result3 = *(int32_t *)v22;
											if (result3 > 0) {
												// 0xbf4d4
												v29 = v7;
												// branch -> 0xbf4d4
												while (true) {
													// 0xbf4d4
													if (*(char *)v29 == -1) {
														goto lab_0xbf4e4_9;
													}
													v21 = v22;
													goto lab_0xbf530_10;
												}
											}
											// 0xbf548
											v30 = (int32_t *)g35;
											*v30 = *v30 + result3;
											// branch -> 0xbf568
											// 0xbf568
											g10 = v1;
											return result3;
										}
									lab_0xbf414_2:;
										// 0xbf414
										// branch -> 0xbf414
									}
								} else {
									v66 = v15;
									v17 = 0;
								}
							}
							int32_t v77 = 8 * v17; // 0xbf558
							v8 = v77;
							v32 = *(int32_t *)v66;
							int32_t v78 = v7; // 0xbf560
							v33 = v78 + v77;
							v9 = v33;
							v12 = v32 - v17;
							v8 = -1;
							if (v32 > v17) {
								// 0xbf458
								*(char *)v33 = -1;
								int32_t v79 = v9; // 0xbf45c64
								v26 = v79 + 8;
								v9 = v26;
								int32_t v80 = v12; // 0xbf46066
								v28 = v80 - 1;
								v12 = v28;
								if (v28 != 0) {
									int32_t v81 = v26; // 0xbf45c69
									int32_t v82 = v8;
									*(char *)v81 = (char)v82;
									int32_t v83 = v9; // 0xbf45c
									v25 = v83 + 8;
									v9 = v25;
									int32_t v84 = v12; // 0xbf460
									v27 = v84 - 1;
									v12 = v27;
									while (v27 != 0) {
										// 0xbf458
										v81 = v25;
										v82 = v8;
										*(char *)v81 = (char)v82;
										v83 = v9;
										v25 = v83 + 8;
										v9 = v25;
										v84 = v12;
										v27 = v84 - 1;
										v12 = v27;
										// continue -> 0xbf458
									}
									// 0xbf464
									v9 = 3;
									v53 = QuestStatus(3);
									v9 = v53;
									if (v53 != 0) {
										// 0xbf474
										v18 = v4;
										v14 = v18;
										v19 = v7;
										g36 = v19;
										v13 = 0;
										v48 = v5;
										v60 = *(int32_t *)v48;
										v8 = v60;
										if (v60 > 0) {
											v54 = v19;
											v45 = 0;
											v44 = v18;
											while (true) {
												// 0xbf484
												v64 = *(int32_t *)(v44 + 8);
												v8 = v64;
												v9 = v45;
												*(int32_t *)(v54 + 4) = v64;
												v59 = SpecialThemeFit(v45, 5);
												v9 = v59;
												if (v59 == 0) {
													goto lab_0xbf4b4_8;
												}
												// 0xbf4a0
												v46 = v13;
												v55 = 8 * v46;
												v8 = v55;
												v9 = 5;
												v56 = v7;
												*(char *)(v56 + v55) = 5;
												v47 = v13;
												v57 = g33;
												*(int32_t *)v57 = v47;
												// branch -> 0xbf53c
											}
										}
									}
									// 0xbf53c
									v14 = 0;
									v22 = v5;
									result3 = *(int32_t *)v22;
									v9 = result3;
									v58 = result3;
									if (result3 > 0) {
										// 0xbf4d4
										v49 = v7;
										v50 = v22;
										v20 = 0;
										v29 = v49;
										// branch -> 0xbf4d4
										while (true) {
											// 0xbf4d4
											v61 = *(char *)v29;
											v8 = v61;
											if (v61 == -1) {
												goto lab_0xbf4e4_9;
											}
											v21 = v50;
											goto lab_0xbf530_10;
										}
									}
									// 0xbf548
									v51 = g35;
									v30 = (int32_t *)v51;
									v62 = *v30;
									v63 = v62 + v58;
									v8 = v63;
									*v30 = v63;
									v52 = v9;
									result2 = v52;
									// branch -> 0xbf568
									// 0xbf568
									v8 = v1;
									g10 = v1;
									return result2;
								}
							}
						}
						// 0xbf464
						v9 = 3;
						v53 = QuestStatus(3);
						v9 = v53;
						if (v53 != 0) {
							// 0xbf474
							v18 = v4;
							v14 = v18;
							v19 = v7;
							g36 = v19;
							v13 = 0;
							v48 = v5;
							v60 = *(int32_t *)v48;
							v8 = v60;
							if (v60 > 0) {
								v54 = v19;
								v45 = 0;
								v44 = v18;
								while (true) {
									// 0xbf484
									v64 = *(int32_t *)(v44 + 8);
									v8 = v64;
									v9 = v45;
									*(int32_t *)(v54 + 4) = v64;
									v59 = SpecialThemeFit(v45, 5);
									v9 = v59;
									if (v59 == 0) {
										goto lab_0xbf4b4_8;
									}
									// 0xbf4a0
									v46 = v13;
									v55 = 8 * v46;
									v8 = v55;
									v9 = 5;
									v56 = v7;
									*(char *)(v56 + v55) = 5;
									v47 = v13;
									v57 = g33;
									*(int32_t *)v57 = v47;
									// branch -> 0xbf53c
								}
							}
						}
						// 0xbf53c
						v14 = 0;
						v22 = v5;
						result3 = *(int32_t *)v22;
						v9 = result3;
						v58 = result3;
						if (result3 > 0) {
							// 0xbf4d4
							v49 = v7;
							v50 = v22;
							v20 = 0;
							v29 = v49;
							// branch -> 0xbf4d4
							while (true) {
								// 0xbf4d4
								v61 = *(char *)v29;
								v8 = v61;
								if (v61 == -1) {
									goto lab_0xbf4e4_9;
								}
								v21 = v50;
								goto lab_0xbf530_10;
							}
						}
						// 0xbf548
						v51 = g35;
						v30 = (int32_t *)v51;
						v62 = *v30;
						v63 = v62 + v58;
						v8 = v63;
						*v30 = v63;
						v52 = v9;
						result2 = v52;
						// branch -> 0xbf568
						// 0xbf568
						v8 = v1;
						g10 = v1;
						return result2;
					}
					// 0xbf3b0
					v35 = v14 + 1;
					v14 = v35;
					if (v35 > 255) {
						// break -> 0xbf3c8
						break;
					}
					v34 = v35;
					// continue -> 0xbf3bc
					continue;
				}
			}
			// 0xbf3c8
			// branch -> 0xbf3c8
			// 0xbf3c8
			result5 = (int32_t) * (char *)g36;
			if ((result5 + 254) % 256 > 2) {
				// 0xbf568
				g10 = v1;
				return result5;
			}
			// 0xbf3dc
			v15 = v5;
			v31 = *(int32_t *)v15;
			v3 = 0;
			if (v31 >= 1) {
				// 0xbf3ec
				v17 = 0;
				if (v31 >= 9) {
					// 0xbf3f8
					v12 = (v31 - 1) / 8;
					v16 = v7;
					v9 = v16;
					v8 = -1;
					if (v31 >= 9) {
						while (true) {
							// 0xbf414
							*(char *)v16 = -1;
							v3 += 8;
							*(char *)(v9 + 8) = (char)v8;
							*(char *)(v9 + 16) = (char)v8;
							*(char *)(v9 + 24) = (char)v8;
							*(char *)(v9 + 32) = (char)v8;
							*(char *)(v9 + 40) = (char)v8;
							*(char *)(v9 + 48) = (char)v8;
							*(char *)(v9 + 56) = (char)v8;
							v23 = v9 + 64;
							v9 = v23;
							v24 = v12 - 1;
							v12 = v24;
							if (v24 != 0) {
								goto lab_0xbf414_2;
							}
							// 0xbf558
							// branch -> 0xbf558
						}
					} else {
						v17 = 0;
					}
				}
				// 0xbf558
				v32 = *(int32_t *)v15;
				v33 = v7 + 8 * v17;
				if (v32 > v17) {
					// 0xbf458
					*(char *)v33 = -1;
					v26 = v33 + 8;
					v28 = v32 - v17 - 1;
					if (v28 != 0) {
						*(char *)v26 = (char)-1;
						v25 = v26 + 8;
						v27 = v28 - 1;
						while (v27 != 0) {
							// 0xbf458
							*(char *)v25 = (char)-1;
							v25 += 8;
							v27--;
							// continue -> 0xbf458
						}
						// 0xbf464
						if (QuestStatus(3) != 0) {
							// 0xbf474
							v18 = v4;
							v14 = v18;
							v19 = v7;
							g36 = v19;
							v13 = 0;
							if (*(int32_t *)v5 > 0) {
								while (true) {
									// 0xbf484
									*(int32_t *)(v19 + 4) = *(int32_t *)(v18 + 8);
									if (SpecialThemeFit(0, 5) == 0) {
										goto lab_0xbf4b4_8;
									}
									// 0xbf4a0
									*(char *)(v7 + 8 * v13) = 5;
									*(int32_t *)g33 = v13;
									// branch -> 0xbf53c
								}
							}
						}
						// 0xbf53c
						v14 = 0;
						v22 = v5;
						result3 = *(int32_t *)v22;
						if (result3 > 0) {
							// 0xbf4d4
							v29 = v7;
							// branch -> 0xbf4d4
							while (true) {
								// 0xbf4d4
								if (*(char *)v29 == -1) {
									goto lab_0xbf4e4_9;
								}
								v21 = v22;
								goto lab_0xbf530_10;
							}
						}
						// 0xbf548
						v30 = (int32_t *)g35;
						*v30 = *v30 + result3;
						// branch -> 0xbf568
						// 0xbf568
						g10 = v1;
						return result3;
					}
				}
			}
			// 0xbf464
			if (QuestStatus(3) != 0) {
				// 0xbf474
				v18 = v4;
				v14 = v18;
				v19 = v7;
				g36 = v19;
				v13 = 0;
				if (*(int32_t *)v5 > 0) {
					while (true) {
						// 0xbf484
						*(int32_t *)(v19 + 4) = *(int32_t *)(v18 + 8);
						if (SpecialThemeFit(0, 5) == 0) {
							goto lab_0xbf4b4_8;
						}
						// 0xbf4a0
						*(char *)(v7 + 8 * v13) = 5;
						*(int32_t *)g33 = v13;
						// branch -> 0xbf53c
					}
				}
			}
			// 0xbf53c
			v14 = 0;
			v22 = v5;
			result3 = *(int32_t *)v22;
			if (result3 > 0) {
				// 0xbf4d4
				v29 = v7;
				// branch -> 0xbf4d4
				while (true) {
					// 0xbf4d4
					if (*(char *)v29 == -1) {
						goto lab_0xbf4e4_9;
					}
					v21 = v22;
					goto lab_0xbf530_10;
				}
			}
			// 0xbf548
			v30 = (int32_t *)g35;
			*v30 = *v30 + result3;
			// branch -> 0xbf568
			// 0xbf568
			g10 = v1;
			return result3;
		}
	lab_0xbf3c8:
		// 0xbf3c8
		v11 = g36;
		// branch -> 0xbf3c8
	}
	// 0xbf3c8
	result5 = (int32_t) * (char *)v11;
	if ((result5 + 254) % 256 > 2) {
		// 0xbf568
		g10 = v1;
		return result5;
	}
	// 0xbf3dc
	v15 = v5;
	v31 = *(int32_t *)v15;
	v3 = 0;
	if (v31 >= 1) {
		// 0xbf3ec
		v17 = 0;
		if (v31 >= 9) {
			// 0xbf3f8
			v12 = (v31 - 1) / 8;
			v16 = v7;
			v9 = v16;
			v8 = -1;
			if (v31 >= 9) {
				while (true) {
					// 0xbf414
					*(char *)v16 = -1;
					v3 += 8;
					*(char *)(v9 + 8) = (char)v8;
					*(char *)(v9 + 16) = (char)v8;
					*(char *)(v9 + 24) = (char)v8;
					*(char *)(v9 + 32) = (char)v8;
					*(char *)(v9 + 40) = (char)v8;
					*(char *)(v9 + 48) = (char)v8;
					*(char *)(v9 + 56) = (char)v8;
					v23 = v9 + 64;
					v9 = v23;
					v24 = v12 - 1;
					v12 = v24;
					if (v24 != 0) {
						goto lab_0xbf414_2;
					}
					// 0xbf558
					// branch -> 0xbf558
				}
			} else {
				v17 = 0;
			}
		}
		// 0xbf558
		v32 = *(int32_t *)v15;
		v33 = v7 + 8 * v17;
		if (v32 > v17) {
			// 0xbf458
			*(char *)v33 = -1;
			v26 = v33 + 8;
			v28 = v32 - v17 - 1;
			if (v28 == 0) {
				// 0xbf464
				if (QuestStatus(3) != 0) {
					// 0xbf474
					v18 = v4;
					v14 = v18;
					v19 = v7;
					g36 = v19;
					v13 = 0;
					if (*(int32_t *)v5 > 0) {
						while (true) {
							// 0xbf484
							*(int32_t *)(v19 + 4) = *(int32_t *)(v18 + 8);
							if (SpecialThemeFit(0, 5) == 0) {
								goto lab_0xbf4b4_8;
							}
							// 0xbf4a0
							*(char *)(v7 + 8 * v13) = 5;
							*(int32_t *)g33 = v13;
							// branch -> 0xbf53c
						}
					}
				}
				// 0xbf53c
				v14 = 0;
				v22 = v5;
				result3 = *(int32_t *)v22;
				if (result3 > 0) {
					// 0xbf4d4
					v20 = 0;
					v29 = v7;
					// branch -> 0xbf4d4
					while (true) {
						// 0xbf4d4
						if (*(char *)v29 == -1) {
							goto lab_0xbf4e4_9;
						}
						v21 = v22;
						goto lab_0xbf530_10;
					}
				}
				// 0xbf548
				v30 = (int32_t *)g35;
				*v30 = *v30 + result3;
				// branch -> 0xbf568
				// 0xbf568
				g10 = v1;
				return result3;
			}
			*(char *)v26 = (char)-1;
			v25 = v26 + 8;
			v27 = v28 - 1;
			while (v27 != 0) {
				// 0xbf458
				*(char *)v25 = (char)-1;
				v25 += 8;
				v27--;
				// continue -> 0xbf458
			}
			// 0xbf464
			if (QuestStatus(3) != 0) {
				// 0xbf474
				v18 = v4;
				v14 = v18;
				v19 = v7;
				g36 = v19;
				v13 = 0;
				if (*(int32_t *)v5 > 0) {
					while (true) {
						// 0xbf484
						*(int32_t *)(v19 + 4) = *(int32_t *)(v18 + 8);
						if (SpecialThemeFit(0, 5) == 0) {
							goto lab_0xbf4b4_8;
						}
						// 0xbf4a0
						*(char *)(v7 + 8 * v13) = 5;
						*(int32_t *)g33 = v13;
						// branch -> 0xbf53c
					}
				}
			}
			// 0xbf53c
			v14 = 0;
			v22 = v5;
			result3 = *(int32_t *)v22;
			if (result3 > 0) {
				// 0xbf4d4
				v29 = v7;
				// branch -> 0xbf4d4
				while (true) {
					// 0xbf4d4
					if (*(char *)v29 == -1) {
						goto lab_0xbf4e4_9;
					}
					v21 = v22;
					goto lab_0xbf530_10;
				}
			}
			// 0xbf548
			v30 = (int32_t *)g35;
			*v30 = *v30 + result3;
			// branch -> 0xbf568
			// 0xbf568
			g10 = v1;
			return result3;
		}
	}
	// 0xbf464
	if (QuestStatus(3) != 0) {
		// 0xbf474
		v18 = v4;
		v14 = v18;
		v19 = v7;
		g36 = v19;
		v13 = 0;
		if (*(int32_t *)v5 > 0) {
			while (true) {
				// 0xbf484
				*(int32_t *)(v19 + 4) = *(int32_t *)(v18 + 8);
				if (SpecialThemeFit(0, 5) == 0) {
					goto lab_0xbf4b4_8;
				}
				// 0xbf4a0
				*(char *)(v7 + 8 * v13) = 5;
				*(int32_t *)g33 = v13;
				// branch -> 0xbf53c
			}
		}
	}
	// 0xbf53c
	v14 = 0;
	v22 = v5;
	result3 = *(int32_t *)v22;
	if (result3 > 0) {
		// 0xbf4d4
		v29 = v7;
		// branch -> 0xbf4d4
		while (true) {
			// 0xbf4d4
			if (*(char *)v29 == -1) {
				goto lab_0xbf4e4_9;
			}
			v21 = v22;
			goto lab_0xbf530_10;
		}
	}
	// 0xbf548
	v30 = (int32_t *)g35;
	*v30 = *v30 + result3;
	// branch -> 0xbf568
	// 0xbf568
	g10 = v1;
	return result3;
}

// Address range: 0xbf57c - 0xbf780
int32_t function_bf57c(void)
{
	int32_t v1 = g10;                            // 0xbf57c
	int32_t result = *(int32_t *)(g23 - 0x77e4); // 0xbf580
	int32_t v2 = *(int32_t *)(g23 - 0x6fd0);     // 0xbf588
	int32_t v3 = *(int32_t *)(g23 - 0x779c);     // 0xbf590
	int32_t v4 = *(int32_t *)(g23 - 0x7588);     // 0xbf598
	if (*(char *)result == 16) {
		// 0xbf770
		g10 = v1;
		return result;
	}
	int32_t v5 = *(int32_t *)(g23 - 0x7794); // 0xbf5a4
	int32_t result2 = v5;                    // r3
	if (*(char *)v5 == 1) {
		int32_t v6 = *(int32_t *)(g23 - 0x6fcc); // 0xbf5b4
		int32_t v7 = 0;                          // r9
		int32_t *v8 = (int32_t *)v2;             // 0xbf75c
		if (*v8 > 0) {
			int32_t *v9 = (int32_t *)v4;  // 0xbf5dc
			int32_t *v10 = (int32_t *)v3; // 0xbf5f4
			// branch -> 0xbf5c0
			while (true) {
				int32_t v11 = 0;                                            // r11
				int32_t v12 = 0x1000000 * *(int32_t *)(v6 + 4) / 0x1000000; // r12
				int32_t v13 = 0;                                            // 0xbf5e48
				// branch -> 0xbf5cc
				while (true) {
					int32_t v14 = 16;  // ctr
					int32_t v15 = 0;   // r10
					int32_t v16 = 0;   // r7
					int32_t v17 = v13; // 0xbf604
					int32_t v18 = 0;   // 0xbf5f8
					// branch -> 0xbf5dc
					int32_t v19; // 0xbf748
					while (true) {
						int32_t v20 = v12; // 0xbf5ec
						int32_t v21 = v20; // 0xbf61c
						int32_t v22 = v17; // 0xbf634
						int32_t v23 = v18; // 0xbf60c
						if (v20 == (int32_t) * (char *)(*v9 + v18 + v17)) {
							int32_t v24 = *v10 + v18; // 0xbf5f8
							result2 = v24;
							char *v25 = (char *)(v24 + v17); // 0xbf5fc
							*v25 = *v25 | 8;
							v21 = v12;
							v22 = v11;
							v23 = v16;
							// branch -> 0xbf608
						}
						int32_t v26 = v23 + 112; // 0xbf60c
						v16 = v26;
						int32_t v27 = v21; // 0xbf650
						int32_t v28 = v22; // 0xbf668
						int32_t v29 = v26; // 0xbf63c
						if (v21 == (int32_t) * (char *)(v26 + *v9 + v22)) {
							int32_t v30 = *v10 + v26; // 0xbf628
							result2 = v30;
							char *v31 = (char *)(v30 + v22); // 0xbf62c
							*v31 = *v31 | 8;
							v27 = v12;
							v28 = v11;
							v29 = v16;
							// branch -> 0xbf638
						}
						int32_t v32 = v29 + 112; // 0xbf63c
						v16 = v32;
						int32_t v33 = v15 + 1; // 0xbf640
						v15 = v33;
						int32_t v34 = v27; // 0xbf684
						int32_t v35 = v28; // 0xbf69c
						int32_t v36 = v32; // 0xbf670
						if (v27 == (int32_t) * (char *)(*v9 + v32 + v28)) {
							int32_t v37 = *v10 + v32; // 0xbf65c
							result2 = v37;
							char *v38 = (char *)(v37 + v28); // 0xbf660
							*v38 = *v38 | 8;
							v34 = v12;
							v35 = v11;
							v33 = v15;
							v36 = v16;
							// branch -> 0xbf66c
						}
						int32_t v39 = v36 + 112; // 0xbf670
						v16 = v39;
						int32_t v40 = v33 + 1; // 0xbf674
						v15 = v40;
						int32_t v41 = v34; // 0xbf6b8
						int32_t v42 = v35; // 0xbf6d0
						int32_t v43 = v39; // 0xbf6a4
						if (v34 == (int32_t) * (char *)(*v9 + v39 + v35)) {
							int32_t v44 = *v10 + v39; // 0xbf690
							result2 = v44;
							char *v45 = (char *)(v44 + v35); // 0xbf694
							*v45 = *v45 | 8;
							v41 = v12;
							v42 = v11;
							v40 = v15;
							v43 = v16;
							// branch -> 0xbf6a0
						}
						int32_t v46 = v43 + 112; // 0xbf6a4
						v16 = v46;
						int32_t v47 = v40 + 1; // 0xbf6a8
						v15 = v47;
						int32_t v48 = v41; // 0xbf6ec
						int32_t v49 = v42; // 0xbf704
						int32_t v50 = v46; // 0xbf6d8
						if (v41 == (int32_t) * (char *)(*v9 + v46 + v42)) {
							int32_t v51 = *v10 + v46; // 0xbf6c4
							result2 = v51;
							char *v52 = (char *)(v51 + v42); // 0xbf6c8
							*v52 = *v52 | 8;
							v48 = v12;
							v49 = v11;
							v47 = v15;
							v50 = v16;
							// branch -> 0xbf6d4
						}
						int32_t v53 = v50 + 112; // 0xbf6d8
						v16 = v53;
						int32_t v54 = v47 + 1; // 0xbf6dc
						v15 = v54;
						int32_t v55 = v48; // 0xbf720
						int32_t v56 = v49; // 0xbf738
						int32_t v57 = v53; // 0xbf70c
						if (v48 == (int32_t) * (char *)(*v9 + v53 + v49)) {
							int32_t v58 = *v10 + v53; // 0xbf6f8
							result2 = v58;
							char *v59 = (char *)(v58 + v49); // 0xbf6fc
							*v59 = *v59 | 8;
							v55 = v12;
							v56 = v11;
							v54 = v15;
							v57 = v16;
							// branch -> 0xbf708
						}
						int32_t v60 = v57 + 112; // 0xbf70c
						v16 = v60;
						int32_t v61 = v54 + 1; // 0xbf710
						v15 = v61;
						v19 = v56;
						int32_t v62 = v60; // 0xbf73c
						if (v55 == (int32_t) * (char *)(*v9 + v60 + v56)) {
							int32_t v63 = *v10 + v60; // 0xbf72c
							result2 = v63;
							char *v64 = (char *)(v63 + v56); // 0xbf730
							*v64 = *v64 | 8;
							v19 = v11;
							v61 = v15;
							v62 = v16;
							// branch -> 0xbf73c
						}
						int32_t v65 = v62 + 112; // 0xbf73c
						v16 = v65;
						v15 = v61 + 1;
						int32_t v66 = v14 - 1; // 0xbf744
						v14 = v66;
						if (v66 == 0) {
							// break -> 0xbf748
							break;
						}
						v17 = v19;
						v18 = v65;
						// continue -> 0xbf5dc
					}
					int32_t v67 = v19 + 1; // 0xbf748
					v11 = v67;
					if (v67 >= 112) {
						// break -> 0xbf754
						break;
					}
					v13 = v67;
					// continue -> 0xbf5cc
				}
				int32_t v68 = v7 + 1; // 0xbf758
				v7 = v68;
				if (v68 >= *v8) {
					// break -> 0xbf75c
					break;
				}
				v6 += 8;
				// continue -> 0xbf5c0
			}
			// branch -> 0xbf770
		} else {
			result2 = v5;
		}
	} else {
		// 0xbf76c
		result2 = function_539d4(v5, v4, v3, v2);
		// branch -> 0xbf770
	}
	// 0xbf770
	g10 = v1;
	return result2;
}

// Address range: 0xbf780 - 0xbf8f4
int32_t PlaceThemeMonsts(int32_t a1, int32_t a2)
{
	// 0xbf780
	g22 = a2;
	g31 = *(int32_t *)(g23 - 0x768c);
	g32 = *(int32_t *)(g23 - 0x722c);
	g33 = *(int32_t *)(g23 - 0x7684);
	g37 = 0;
	g35 = *(int32_t *)(g23 - 0x757c);
	g36 = *(int32_t *)(g23 - 0x7588);
	int32_t v1 = 0;                                      // r6
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x7618); // 0xbf7b8
	int32_t v3;                                          // bp-504
	int32_t v4 = &v3;                                    // 0xbf7bc
	int32_t v5 = *(int32_t *)(g23 - 0x7610);             // 0xbf7c0
	int32_t v6 = v2;                                     // ctr
	int32_t v7;                                          // 0xbf878
	int32_t v8;                                          // 0xbf848
	int32_t v9;                                          // 0xbf874
	if (v2 >= 1) {
		int32_t v10 = 0; // 0xbf7e4
		while (true) {
			int32_t v11 = v2;  // 0xbf7f0
			int32_t v12 = v10; // 0xbf7ec
			if (*(char *)(v5 + 1) % 2 != 0) {
				int32_t v13 = g37; // 0xbf7dc
				g37 = v13 + 1;
				*(int32_t *)(v4 + 4 * v13) = v10;
				v11 = v6;
				v12 = v1;
				// branch -> 0xbf7e8
			}
			int32_t v14 = v12 + 1; // 0xbf7ec
			v1 = v14;
			int32_t v15 = v11 - 1; // 0xbf7f0
			v6 = v15;
			if (v15 == 0) {
				// break -> 0xbf7f4
				break;
			}
			v2 = v15;
			v10 = v14;
			v5 += 520;
			// continue -> 0xbf7d0
		}
		// 0xbf7f4
		g24 = *(int32_t *)(4 * random(0) + v4);
		g25 = 0;
		g27 = 8 * a1 + *(int32_t *)(g23 - 0x6fcc);
		g28 = 0;
		int32_t v16 = 0; // 0xbf8348
		// branch -> 0xbf81c
		int32_t result; // 0xbf8f0
		while (true) {
			// 0xbf81c
			g30 = 0;
			g29 = 0;
			g26 = 0;
			v8 = 0;
			v7 = v16;
			v9 = 0;
			// branch -> 0xbf828
		lab_0xbf828:;
			int32_t v17;
			while (true) {
				int32_t v18 = *(int32_t *)(g27 + 4);                           // 0xbf82c
				int32_t v19 = (int32_t) * (char *)(*(int32_t *)g36 + v9 + v7); // 0xbf838
				result = v19;
				if (v19 == v18) {
					int16_t v20 = *(int16_t *)(g28 + *(int32_t *)g35 + v8); // 0xbf84c
					if (*(char *)(g32 + (int32_t)v20) == 0) {
						// 0xbf85c
						if (*(char *)(*(int32_t *)g31 + v9 + v7) == 0) {
							// 0xbf870
							if (*(char *)(*(int32_t *)g33 + v9 + v7) == 0) {
								// 0xbf884
								g37 = g22;
								int32_t v21 = random(0); // 0xbf88c
								if (v21 == 0) {
									// 0xbf898
									g37 = 8;
									int32_t v22 = random(0); // 0xbf8a0
									result = AddMonster(g26, g25, v22, g24, 1);
									// branch -> 0xbf8bc
								} else {
									result = v21;
								}
							} else {
								result = v18;
							}
						} else {
							result = v18;
						}
					} else {
						result = v18;
					}
				}
				int32_t v23 = g26 + 1; // 0xbf8bc
				g26 = v23;
				int32_t v24 = g29 + 224; // 0xbf8c0
				g29 = v24;
				int32_t v25 = g30 + 112; // 0xbf8c8
				g30 = v25;
				v17 = g25;
				if (v23 >= 112) {
					// break -> 0xbf8d0
					break;
				}
				v8 = v24;
				v7 = v17;
				v9 = v25;
				// continue -> 0xbf828
			}
			int32_t v26 = v17 + 1; // 0xbf8d0
			g25 = v26;
			g28 += 2;
			if (v26 >= 112) {
				// break -> 0xbf8e0
				break;
			}
			v16 = v26;
			// continue -> 0xbf81c
		}
		// 0xbf8e0
		return result;
	}
	// 0xbf7f4
	g24 = *(int32_t *)(4 * random(0) + v4);
	g25 = 0;
	g27 = 8 * a1 + *(int32_t *)(g23 - 0x6fcc);
	g28 = 0;
	// branch -> 0xbf81c
	while (true) {
		// 0xbf81c
		g30 = 0;
		g29 = 0;
		g26 = 0;
		v8 = 0;
		v7 = 0;
		v9 = 0;
		// branch -> 0xbf828
		goto lab_0xbf828;
	}
}

// Address range: 0xbf8f4 - 0xbfa28
int32_t function_bf8f4(int32_t a1)
{
	g32 = *(int32_t *)(g23 - 0x7794);
	g33 = *(int32_t *)(g23 - 0x722c);
	g35 = *(int32_t *)(g23 - 0x757c);
	int32_t v1 = 0; // r22
	g36 = *(int32_t *)(g23 - 0x7588);
	int32_t v2 = 0;   // r25
	int32_t v3;       // bp-52
	int32_t v4 = &v3; // r20
	v3 = *(int32_t *)(g23 - 0x4b1c);
	int32_t v5 = 0; // 0xbf9582
	// branch -> 0xbf940
	while (true) {
		// 0xbf940
		g31 = 0;
		g30 = 0;
		int32_t v6 = 0;  // r23
		int32_t v7 = 0;  // 0xbf96c
		int32_t v8 = v5; // 0xbf958
		int32_t v9 = 0;  // 0xbf954
		// branch -> 0xbf94c
		int32_t v10;
		while (true) {
			int32_t v11 = *(int32_t *)(*(int32_t *)(g23 - 0x6fcc) + 8 * a1 + 4); // 0xbf950
			if ((int32_t) * (char *)(*(int32_t *)g36 + v9 + v8) == v11) {
				int16_t v12 = *(int16_t *)(v2 + *(int32_t *)g35 + v7); // 0xbf970
				if (*(char *)(g33 + (int32_t)v12) == 0) {
					unsigned char v13 = *(char *)g32; // 0xbf980
					g37 = (int32_t) * (char *)(v4 + (int32_t)v13 - 1);
					if (random(0) == 0) {
						unsigned char v14 = *(char *)g32; // 0xbf9a0
						g37 = (int32_t) * (char *)(v4 + (int32_t)v14 - 1);
						random(0);
						int32_t v15 = v1; // 0xbf9d0
						AddObject(v6, v15, v15);
						// branch -> 0xbf9d8
					}
				}
			}
			int32_t v16 = v6 + 1; // 0xbf9d8
			v6 = v16;
			int32_t v17 = g30 + 224; // 0xbf9dc
			g30 = v17;
			int32_t v18 = g31 + 112; // 0xbf9e4
			g31 = v18;
			v10 = v1;
			if (v16 >= 112) {
				// break -> 0xbf9ec
				break;
			}
			v7 = v17;
			v8 = v10;
			v9 = v18;
			// continue -> 0xbf94c
		}
		int32_t v19 = v10 + 1; // 0xbf9ec
		v1 = v19;
		v2 += 2;
		if (v19 >= 112) {
			// break -> 0xbf9fc
			break;
		}
		v5 = v19;
		// continue -> 0xbf940
	}
	unsigned char v20 = *(char *)g32;                   // 0xbf9fc
	int32_t v21;                                        // bp-57
	char v22 = *(char *)((int32_t)v20 + (int32_t)&v21); // 0xbfa08
	return PlaceThemeMonsts(a1, (int32_t)v22);
}

// Address range: 0xbfa28 - 0xbfb14
int32_t Theme_Shrine(int32_t a1)
{
	// 0xbfa28
	g34 = a1;
	TFit_Shrine();
	if (*(int32_t *)*(int32_t *)(g23 - 0x6ecc) == 1) {
		// 0xbfa68
		AddObject(9, *(int32_t *)g36 - 1, *(int32_t *)g35);
		AddObject(60, *(int32_t *)g36, *(int32_t *)g35);
		AddObject(9, *(int32_t *)g36 + 1, *(int32_t *)g35);
		// branch -> 0xbfadc
	} else {
		// 0xbfaa4
		AddObject(9, *(int32_t *)g36, *(int32_t *)g35 - 1);
		AddObject(59, *(int32_t *)g36, *(int32_t *)g35);
		AddObject(9, *(int32_t *)g36, *(int32_t *)g35 + 1);
		// branch -> 0xbfadc
	}
	unsigned char v1 = *(char *)*(int32_t *)(g23 - 0x7794); // 0xbfae8
	int32_t v2;                                             // bp-25
	char v3 = *(char *)((int32_t)v1 + (int32_t)&v2);        // 0xbfaec
	return PlaceThemeMonsts(g33, (int32_t)v3);
}

// Address range: 0xbfb14 - 0xbfc24
int32_t Theme_MonstPit(int32_t a1)
{
	// 0xbfb14
	g36 = *(int32_t *)(g23 - 0x722c);
	g37 = 100;
	int32_t v1 = random(0);                                               // 0xbfb40
	int32_t v2 = *(int32_t *)(g23 - 0x7588);                              // 0xbfb48
	int32_t v3 = *(int32_t *)(g23 - 0x757c);                              // 0xbfb4c
	int32_t v4 = v1 + 1;                                                  // 0xbfb58
	int32_t v5 = *(int32_t *)(*(int32_t *)(g23 - 0x6fcc) + (8 * a1 | 4)); // 0xbfb60
	int32_t v6;                                                           // bp-25
	unsigned char v7;                                                     // 0xbfbfc
	char v8;                                                              // 0xbfc00
	int32_t v9;                                                           // 0xbfbe8
	if (v4 <= 0) {
		// 0xbfbdc
		v9 = CreateRndItem(1, 0, 1, 0, 1);
		ItemNoFlippy(v9);
		v7 = *(char *)*(int32_t *)(g23 - 0x7794);
		v8 = *(char *)((int32_t)v7 + (int32_t)&v6);
		return PlaceThemeMonsts(g35, (int32_t)v8);
	}
	int32_t v10 = 0; // 0xbfbc0
	int32_t v11 = 0; // 0xbfbb4
	while (true) {
		char v12 = *(char *)(112 * v11 + v10 + *(int32_t *)v2); // 0xbfb7c
		int32_t v13 = v4;                                       // 0xbfbd4
		if ((int32_t)v12 == v5) {
			int16_t v14 = *(int16_t *)(224 * v11 + 2 * v10 + *(int32_t *)v3); // 0xbfb98
			if (*(char *)(g36 + (int32_t)v14) == 0) {
				// 0xbfba8
				v13 = v4 - 1;
				// branch -> 0xbfbac
			} else {
				v13 = v4;
			}
		}
		int32_t v15 = v10; // 0xbfb789
		int32_t v16 = v11; // 0xbfb745
		if (v13 >= 1) {
			int32_t v17 = v11 + 1; // 0xbfbb4
			if (v17 == 112) {
				int32_t v18 = v10 + 1; // 0xbfbc0
				if (v18 == 112) {
					// 0xbfbd0
					v15 = 0;
					v16 = 0;
					// branch -> 0xbfbd4
				} else {
					v15 = v18;
					v16 = 0;
				}
			} else {
				v15 = v10;
				v16 = v17;
			}
		}
		// 0xbfbd4
		if (v13 <= 0) {
			// break -> 0xbfbdc
			break;
		}
		v4 = v13;
		v10 = v15;
		v11 = v16;
		// continue -> 0xbfb74
	}
	// 0xbfbdc
	v9 = CreateRndItem(1, 0, 1, 0, 1);
	ItemNoFlippy(v9);
	v7 = *(char *)*(int32_t *)(g23 - 0x7794);
	v8 = *(char *)((int32_t)v7 + (int32_t)&v6);
	return PlaceThemeMonsts(g35, (int32_t)v8);
}

// Address range: 0xbfc24 - 0xbfe74
int32_t Theme_SkelRoom(int32_t a1)
{
	// 0xbfc24
	g33 = *(int32_t *)(g23 - 0x7794);
	function_be910();
	int32_t v1 = *(int32_t *)(g23 - 0x6ec4); // 0xbfc48
	AddObject(3, *(int32_t *)v1, *(int32_t *)*(int32_t *)(g23 - 0x6ec8));
	unsigned char v2 = *(char *)g33;                 // 0xbfc68
	int32_t v3;                                      // bp-41
	char v4 = *(char *)((int32_t)v2 + (int32_t)&v3); // 0xbfc74
	g37 = v4;
	int32_t v5 = random(0); // 0xbfc7c
	int32_t v6;
	if (v5 == 0) {
		// 0xbfc9c
		v6 = AddObject(11, g36 - 1, g35 - 1);
		// branch -> 0xbfcac
	} else {
		int32_t v7 = function_871a8(v5); // 0xbfc88
		v6 = function_8700c(v7, g36 - 1, g35 - 1);
		// branch -> 0xbfcac
	}
	int32_t v8 = function_871a8(v6); // 0xbfcac
	function_8700c(v8, g36, g35 - 1);
	g37 = (int32_t) * (char *)(g31 + (int32_t) * (char *)g33);
	int32_t v9 = random(0); // 0xbfccc
	if (v9 == 0) {
		// 0xbfcec
		AddObject(13, g36 + 1, g35 - 1);
		// branch -> 0xbfcfc
	} else {
		int32_t v10 = function_871a8(v9); // 0xbfcd8
		function_8700c(v10, g36 + 1, g35 - 1);
		// branch -> 0xbfcfc
	}
	// 0xbfcfc
	g37 = (int32_t) * (char *)(g31 + (int32_t) * (char *)g33);
	int32_t v11 = random(0); // 0xbfd0c
	if (v11 == 0) {
		// 0xbfd2c
		AddObject(12, g36 - 1, g35);
		// branch -> 0xbfd3c
	} else {
		int32_t v12 = function_871a8(v11); // 0xbfd18
		function_8700c(v12, g36 - 1, g35);
		// branch -> 0xbfd3c
	}
	// 0xbfd3c
	g37 = (int32_t) * (char *)(g31 + (int32_t) * (char *)g33);
	int32_t v13 = random(0); // 0xbfd4c
	if (v13 == 0) {
		// 0xbfd6c
		AddObject(12, g36 + 1, g35);
		// branch -> 0xbfd7c
	} else {
		int32_t v14 = function_871a8(v13); // 0xbfd58
		function_8700c(v14, g36 + 1, g35);
		// branch -> 0xbfd7c
	}
	// 0xbfd7c
	g37 = (int32_t) * (char *)(g31 + (int32_t) * (char *)g33);
	int32_t v15 = random(0); // 0xbfd8c
	int32_t v16;
	if (v15 == 0) {
		// 0xbfdac
		v16 = AddObject(13, g36 - 1, g35 + 1);
		// branch -> 0xbfdbc
	} else {
		int32_t v17 = function_871a8(v15); // 0xbfd98
		v16 = function_8700c(v17, g36 - 1, g35 + 1);
		// branch -> 0xbfdbc
	}
	int32_t v18 = function_871a8(v16); // 0xbfdbc
	function_8700c(v18, g36, g35 + 1);
	g37 = (int32_t) * (char *)(g31 + (int32_t) * (char *)g33);
	int32_t v19 = random(0); // 0xbfddc
	if (v19 == 0) {
		// 0xbfdfc
		AddObject(11, g36 + 1, g35 + 1);
		// branch -> 0xbfe0c
	} else {
		int32_t v20 = function_871a8(v19); // 0xbfde8
		function_8700c(v20, g36 + 1, g35 + 1);
		// branch -> 0xbfe0c
	}
	int32_t v21 = g36;       // 0xbfe0c
	int32_t v22 = 112 * v21; // 0xbfe0c
	int32_t v23 = g32;       // 0xbfe10
	int32_t v24 = g35;       // 0xbfe18
	int32_t v25 = v24;       // 0xbfe54
	int32_t v26 = v22;       // 0xbfe3c
	int32_t v27 = v23;       // 0xbfe38
	if (*(char *)(v24 + *(int32_t *)v23 + v22 - 3) == 0) {
		// 0xbfe28
		AddObject(61, v21, v24 - 2);
		v25 = g35;
		v26 = g31;
		v27 = g32;
		// branch -> 0xbfe38
	}
	int32_t v28 = *(int32_t *)v27 + v26 + v25; // 0xbfe40
	int32_t result = v28;                      // 0xbfe70
	if (*(char *)(v28 + 3) == 0) {
		// 0xbfe50
		result = AddObject(61, g36, v25 + 2);
		// branch -> 0xbfe60
	}
	// 0xbfe60
	return result;
}

// Address range: 0xbfe74 - 0xc0040
int32_t function_bfe74(int32_t a1)
{
	// 0xbfe74
	g29 = *(int32_t *)(g23 - 0x7690);
	g21 = a1;
	g30 = *(int32_t *)(g23 - 0x7794);
	g31 = *(int32_t *)(g23 - 0x722c);
	g32 = *(int32_t *)(g23 - 0x757c);
	g33 = *(int32_t *)(g23 - 0x7588);
	int32_t v1 = *(int32_t *)(g23 - 0x4b08); // bp-64
	GetRndSeed();
	g35 = &v1;
	g25 = 8 * g21 + *(int32_t *)(g23 - 0x6fcc);
	g22 = 0;
	g26 = 0;
	int32_t v2 = 0; // 0xbfee02
	// branch -> 0xbfec8
	while (true) {
		// 0xbfec8
		g28 = 0;
		g27 = 0;
		g24 = 0;
		int32_t v3 = 0;  // 0xbfef4
		int32_t v4 = v2; // 0xbfee0
		int32_t v5 = 0;  // 0xbfedc
		// branch -> 0xbfed4
		int32_t v6;
		while (true) {
			int32_t v7 = *(int32_t *)(g25 + 4); // 0xbfed8
			int32_t v8;                         // 0xbfff0
			int32_t v9;                         // 0xbfff4
			int32_t v10;                        // 0xbfffc
			if ((int32_t) * (char *)(*(int32_t *)g33 + v5 + v4) == v7) {
				int16_t v11 = *(int16_t *)(g26 + *(int32_t *)g32 + v3); // 0xbfef8
				if (*(char *)(g31 + (int32_t)v11) == 0) {
					// 0xbff08
					g37 = (int32_t) * (char *)(g35 + (int32_t) * (char *)g30 - 1);
					g36 = random(0);
					g37 = (int32_t) * (char *)(g35 + (int32_t) * (char *)g30 - 1);
					int32_t v12 = random(0); // 0xbff38
					int32_t v13 = v12;       // r3
					if (__asm_rlwinm_(v12, 1, 0, 30) == 0) {
						// 0xbff44
						v13 = ItemNoFlippy(function_60490(g24, g22, 0, 11, 0, 0, 1));
						// branch -> 0xbff68
					}
					int32_t v14 = g36; // 0xbff68
					int32_t v15 = v14; // 0xbffa8
					if (v14 == 0) {
						// 0xbff70
						v13 = ItemNoFlippy(CreateRndItem(g24, g22, 0, 0, 1));
						v15 = g36;
						// branch -> 0xbff8c
					}
					// 0xbff8c
					if (v15 == 0) {
						// branch -> 0xbffb0
					lab_0xbffb0:;
						int32_t v16 = ItemNoFlippy(v13); // 0xbffb0
						unsigned char v17 = *(char *)g30;  // 0xbffb4
						if (g36 >= (int32_t) * (char *)(g35 + (int32_t)v17 - 1) - 2) {
							// 0xbffd0
							if (v17 != 1) {
								int32_t *v18 = (int32_t *)(368 * v16 + 196 + g29); // 0xbffe4
								uint32_t v19 = *v18;                               // 0xbffe4
								*v18 = v19 / 2 | v19 & -0x80000000;
								// branch -> 0xbfff0
							}
						}
					} else {
						int32_t v20 = (int32_t) * (char *)(g35 + (int32_t) * (char *)g30 - 1); // 0xbffa0
						if (v15 >= v20 - 2) {
							v13 = v20;
							goto lab_0xbffb0;
						}
						// 0xbfff0
						v8 = g24 + 1;
						g24 = v8;
						v9 = g27 + 224;
						g27 = v9;
						v10 = g28 + 112;
						g28 = v10;
						v6 = g22;
						if (v8 >= 112) {
							// break -> 0xc0004
							break;
						}
						v3 = v9;
						v4 = v6;
						v5 = v10;
						// continue -> 0xbfed4
						continue;
					}
					// 0xbfff0
					v8 = g24 + 1;
					g24 = v8;
					v9 = g27 + 224;
					g27 = v9;
					v10 = g28 + 112;
					g28 = v10;
					v6 = g22;
					if (v8 >= 112) {
						// break -> 0xc0004
						break;
					}
					v3 = v9;
					v4 = v6;
					v5 = v10;
					// continue -> 0xbfed4
					continue;
				}
			}
			// 0xbfff0
			v8 = g24 + 1;
			g24 = v8;
			v9 = g27 + 224;
			g27 = v9;
			v10 = g28 + 112;
			g28 = v10;
			v6 = g22;
			if (v8 >= 112) {
				// break -> 0xc0004
				break;
			}
			v3 = v9;
			v4 = v6;
			v5 = v10;
			// continue -> 0xbfed4
		}
		int32_t v21 = v6 + 1; // 0xc0004
		g22 = v21;
		g26 += 2;
		if (v21 >= 112) {
			// break -> 0xc0014
			break;
		}
		v2 = v21;
		// continue -> 0xbfec8
	}
	unsigned char v22 = *(char *)g30;                   // 0xc0014
	int32_t v23;                                        // bp-69
	char v24 = *(char *)((int32_t)v22 + (int32_t)&v23); // 0xc0020
	return PlaceThemeMonsts(g21, (int32_t)v24);
}

// Address range: 0xc0040 - 0xc025c
int32_t Theme_Library(int32_t a1)
{
	// 0xc0040
	g34 = a1;
	g25 = g34;
	int32_t v1 = *(int32_t *)(g23 - 0x6ec8); // r23
	int32_t v2 = *(int32_t *)(g23 - 0x6ec4); // r22
	int32_t v3 = *(int32_t *)(g23 - 0x4afc); // bp-72
	TFit_Shrine();
	if (*(int32_t *)*(int32_t *)(g23 - 0x6ecc) == 1) {
		int32_t v4 = *(int32_t *)v1; // 0xc0098
		AddObject(65, *(int32_t *)v2 - 1, v4);
		int32_t v5 = *(int32_t *)v1; // 0xc00ac
		AddObject(63, *(int32_t *)v2, v5);
		int32_t v6 = *(int32_t *)v1; // 0xc00bc
		AddObject(65, *(int32_t *)v2 + 1, v6);
		// branch -> 0xc0104
	} else {
		// 0xc00cc
		AddObject(65, *(int32_t *)v2, *(int32_t *)v1 - 1);
		AddObject(62, *(int32_t *)v2, *(int32_t *)v1);
		AddObject(65, *(int32_t *)v2, *(int32_t *)v1 + 1);
		// branch -> 0xc0104
	}
	int32_t v7 = 1; // 0xc01203
	// branch -> 0xc0110
	while (true) {
		int32_t v8 = v7; // 0xc0120
		int32_t v9 = 1;  // 0xc011c
		// branch -> 0xc011c
		int32_t v10;
		while (true) {
			// 0xc011c
			int32_t v11; // 0xc01d0
			if (function_bea50(v9, v8, g25, -1) != 0) {
				// 0xc0138
				if (*(int16_t *)(g28 + g30 + *(int32_t *)g32) == 0) {
					// 0xc014c
					g37 = (int32_t) * (char *)(g36 + (int32_t) * (char *)g33 - 1);
					if (random(0) == 0) {
						// 0xc016c
						AddObject(64, g27, g26);
						g37 = 2 * (int32_t) * (char *)(g36 + (int32_t) * (char *)g33 - 1);
						if (random(0) != 0) {
							char v12 = *(char *)(g26 + g29 + *(int32_t *)g35); // 0xc01ac
							int32_t v13 = g31 + 120 * (int32_t)v12 - 120;      // 0xc01bc
							*(char *)(v13 + 64) = 0;
							int32_t *v14 = (int32_t *)(v13 + 36); // 0xc01c4
							*v14 = *v14 + 2;
							// branch -> 0xc01d0
						}
						// 0xc01d0
						v11 = g27 + 1;
						v10 = g26;
						if (v11 >= 111) {
							// break -> 0xc01e4
							break;
						}
						v8 = v10;
						v9 = v11;
						// continue -> 0xc011c
						continue;
					}
				}
			}
			// 0xc01d0
			v11 = g27 + 1;
			v10 = g26;
			if (v11 >= 111) {
				// break -> 0xc01e4
				break;
			}
			v8 = v10;
			v9 = v11;
			// continue -> 0xc011c
		}
		int32_t v15 = v10 + 1; // 0xc01e4
		if (v15 >= 111) {
			// break -> 0xc01f4
			break;
		}
		v7 = v15;
		// continue -> 0xc0110
	}
	// 0xc01f4
	int32_t result; // 0xc0258
	if (QuestStatus(3) == 0) {
		unsigned char v16 = *(char *)g33;                  // 0xc0230
		char v17 = *(char *)((int32_t)v16 + (int32_t)&v3); // 0xc023c
		result = PlaceThemeMonsts(g25, (int32_t)v17);
		// branch -> 0xc0248
		// 0xc0248
		return result;
	}
	int32_t v18 = *(int32_t *)(g23 - 0x70a8); // 0xc0204
	int32_t v19 = g25;                        // 0xc020c
	if (v19 != *(int32_t *)v18) {
		unsigned char v20 = *(char *)g33;                  // 0xc0214
		char v21 = *(char *)((int32_t)v20 + (int32_t)&v3); // 0xc0220
		result = PlaceThemeMonsts(v19, (int32_t)v21);
		// branch -> 0xc0248
	} else {
		result = v18;
	}
	// 0xc0248
	return result;
}

// Address range: 0xc025c - 0xc0384
int32_t function_c025c(int32_t a1)
{
	g25 = a1;
	g32 = *(int32_t *)(g23 - 0x7794);
	g33 = *(int32_t *)(g23 - 0x722c);
	g35 = *(int32_t *)(g23 - 0x757c);
	g26 = 1;
	g36 = *(int32_t *)(g23 - 0x7588);
	g29 = 2;
	g28 = *(int32_t *)(g23 - 0x6fcc) + 8 * a1;
	int32_t v1;       // bp-52
	int32_t v2 = &v1; // r20
	v1 = *(int32_t *)(g23 - 0x4af8);
	int32_t v3 = 1; // 0xc02c02
	// branch -> 0xc02a8
	while (true) {
		// 0xc02a8
		g27 = 1;
		g31 = 112;
		g30 = 224;
		int32_t v4 = 1;   // 0xc02e8
		int32_t v5 = 224; // 0xc02d4
		int32_t v6 = v3;  // 0xc02ec
		int32_t v7 = 112; // 0xc02bc
		// branch -> 0xc02b4
		int32_t v8;
		while (true) {
			int32_t v9 = *(int32_t *)(g28 + 4); // 0xc02b8
			int32_t v10;                        // 0xc0334
			int32_t v11;                        // 0xc0338
			int32_t v12;                        // 0xc0340
			if ((int32_t) * (char *)(*(int32_t *)g36 + v7 + v6) == v9) {
				int16_t v13 = *(int16_t *)(g29 + *(int32_t *)g35 + v5); // 0xc02d8
				if (*(char *)(g33 + (int32_t)v13) == 0) {
					// 0xc02e8
					if (function_bea50(v4, v6, g25, -1) != 0) {
						unsigned char v14 = *(char *)g32; // 0xc0304
						g37 = (int32_t) * (char *)(v2 + (int32_t)v14 - 1);
						if (random(0) == 0) {
							// 0xc0324
							AddObject(30, g27, g26);
							// branch -> 0xc0334
						}
					}
					// 0xc0334
					v10 = g27 + 1;
					g27 = v10;
					v11 = g30 + 224;
					g30 = v11;
					v12 = g31 + 112;
					g31 = v12;
					v8 = g26;
					if (v10 >= 111) {
						// break -> 0xc0348
						break;
					}
					v4 = v10;
					v5 = v11;
					v6 = v8;
					v7 = v12;
					// continue -> 0xc02b4
					continue;
				}
			}
			// 0xc0334
			v10 = g27 + 1;
			g27 = v10;
			v11 = g30 + 224;
			g30 = v11;
			v12 = g31 + 112;
			g31 = v12;
			v8 = g26;
			if (v10 >= 111) {
				// break -> 0xc0348
				break;
			}
			v4 = v10;
			v5 = v11;
			v6 = v8;
			v7 = v12;
			// continue -> 0xc02b4
		}
		int32_t v15 = v8 + 1; // 0xc0348
		g26 = v15;
		g29 += 2;
		if (v15 >= 111) {
			// break -> 0xc0358
			break;
		}
		v3 = v15;
		// continue -> 0xc02a8
	}
	unsigned char v16 = *(char *)g32;                   // 0xc0358
	int32_t v17;                                        // bp-57
	char v18 = *(char *)((int32_t)v16 + (int32_t)&v17); // 0xc0364
	return PlaceThemeMonsts(g25, (int32_t)v18);
}

// Address range: 0xc0384 - 0xc03ec
int32_t function_c0384(int32_t a1)
{
	// 0xc0384
	g34 = a1;
	function_be788();
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6ec8); // 0xc03b4
	AddObject(66, *(int32_t *)*(int32_t *)(g23 - 0x6ec4), v1);
	unsigned char v2 = *(char *)*(int32_t *)(g23 - 0x7794); // 0xc03c8
	int32_t v3;                                             // bp-25
	char v4 = *(char *)((int32_t)v2 + (int32_t)&v3);        // 0xc03cc
	return PlaceThemeMonsts(g36, (int32_t)v4);
}

// Address range: 0xc03ec - 0xc0514
int32_t function_c03ec(int32_t a1)
{
	g25 = a1;
	g32 = *(int32_t *)(g23 - 0x7794);
	g33 = *(int32_t *)(g23 - 0x722c);
	g35 = *(int32_t *)(g23 - 0x757c);
	g26 = 1;
	g36 = *(int32_t *)(g23 - 0x7588);
	g29 = 2;
	g28 = *(int32_t *)(g23 - 0x6fcc) + 8 * a1;
	int32_t v1;       // bp-52
	int32_t v2 = &v1; // r20
	v1 = *(int32_t *)(g23 - 0x4aec);
	int32_t v3 = 1; // 0xc04502
	// branch -> 0xc0438
	while (true) {
		// 0xc0438
		g27 = 1;
		g31 = 112;
		g30 = 224;
		int32_t v4 = 1;   // 0xc0478
		int32_t v5 = 224; // 0xc0464
		int32_t v6 = v3;  // 0xc047c
		int32_t v7 = 112; // 0xc044c
		// branch -> 0xc0444
		int32_t v8;
		while (true) {
			int32_t v9 = *(int32_t *)(g28 + 4); // 0xc0448
			int32_t v10;                        // 0xc04c4
			int32_t v11;                        // 0xc04c8
			int32_t v12;                        // 0xc04d0
			if ((int32_t) * (char *)(*(int32_t *)g36 + v7 + v6) == v9) {
				int16_t v13 = *(int16_t *)(g29 + *(int32_t *)g35 + v5); // 0xc0468
				if (*(char *)(g33 + (int32_t)v13) == 0) {
					// 0xc0478
					if (function_bea50(v4, v6, g25, -1) != 0) {
						unsigned char v14 = *(char *)g32; // 0xc0494
						g37 = (int32_t) * (char *)(v2 + (int32_t)v14 - 1);
						if (random(0) == 0) {
							// 0xc04b4
							AddObject(67, g27, g26);
							// branch -> 0xc04c4
						}
					}
					// 0xc04c4
					v10 = g27 + 1;
					g27 = v10;
					v11 = g30 + 224;
					g30 = v11;
					v12 = g31 + 112;
					g31 = v12;
					v8 = g26;
					if (v10 >= 111) {
						// break -> 0xc04d8
						break;
					}
					v4 = v10;
					v5 = v11;
					v6 = v8;
					v7 = v12;
					// continue -> 0xc0444
					continue;
				}
			}
			// 0xc04c4
			v10 = g27 + 1;
			g27 = v10;
			v11 = g30 + 224;
			g30 = v11;
			v12 = g31 + 112;
			g31 = v12;
			v8 = g26;
			if (v10 >= 111) {
				// break -> 0xc04d8
				break;
			}
			v4 = v10;
			v5 = v11;
			v6 = v8;
			v7 = v12;
			// continue -> 0xc0444
		}
		int32_t v15 = v8 + 1; // 0xc04d8
		g26 = v15;
		g29 += 2;
		if (v15 >= 111) {
			// break -> 0xc04e8
			break;
		}
		v3 = v15;
		// continue -> 0xc0438
	}
	unsigned char v16 = *(char *)g32;                   // 0xc04e8
	int32_t v17;                                        // bp-57
	char v18 = *(char *)((int32_t)v16 + (int32_t)&v17); // 0xc04f4
	return PlaceThemeMonsts(g25, (int32_t)v18);
}

// Address range: 0xc0514 - 0xc057c
int32_t function_c0514(int32_t a1)
{
	// 0xc0514
	g34 = a1;
	function_be788();
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6ec8); // 0xc0544
	AddObject(76, *(int32_t *)*(int32_t *)(g23 - 0x6ec4), v1);
	unsigned char v2 = *(char *)*(int32_t *)(g23 - 0x7794); // 0xc0558
	int32_t v3;                                             // bp-25
	char v4 = *(char *)((int32_t)v2 + (int32_t)&v3);        // 0xc055c
	return PlaceThemeMonsts(g36, (int32_t)v4);
}

// Address range: 0xc057c - 0xc06dc
int32_t function_c057c(int32_t a1)
{
	g32 = *(int32_t *)(g23 - 0x7794);
	g33 = *(int32_t *)(g23 - 0x722c);
	g35 = *(int32_t *)(g23 - 0x757c);
	g36 = *(int32_t *)(g23 - 0x7588);
	int32_t v1 = *(int32_t *)(g23 - 0x4ae0); // bp-68
	if (*(int32_t *)*(int32_t *)(g23 - 0x6ff0) != 0) {
		// 0xc05c0
		function_beb78(a1);
		int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x6ec8); // 0xc05d8
		AddObject(77, *(int32_t *)*(int32_t *)(g23 - 0x6ec4), v2);
		// branch -> 0xc05e0
	}
	int32_t v3 = &v1; // r19
	g27 = *(int32_t *)(g23 - 0x6fcc) + 8 * a1;
	g25 = 0;
	g28 = 0;
	int32_t v4 = 0; // 0xc06104
	// branch -> 0xc05f8
	while (true) {
		// 0xc05f8
		g30 = 0;
		g29 = 0;
		g26 = 0;
		int32_t v5 = 0;  // 0xc0638
		int32_t v6 = 0;  // 0xc0624
		int32_t v7 = v4; // 0xc063c
		int32_t v8 = 0;  // 0xc060c
		// branch -> 0xc0604
		int32_t v9;
		while (true) {
			int32_t v10 = *(int32_t *)(g27 + 4); // 0xc0608
			int32_t v11;                         // 0xc0684
			int32_t v12;                         // 0xc0688
			int32_t v13;                         // 0xc0690
			if ((int32_t) * (char *)(*(int32_t *)g36 + v8 + v7) == v10) {
				int16_t v14 = *(int16_t *)(g28 + *(int32_t *)g35 + v6); // 0xc0628
				if (*(char *)(g33 + (int32_t)v14) == 0) {
					// 0xc0638
					if (function_bea50(v5, v7, a1, -1) != 0) {
						unsigned char v15 = *(char *)g32; // 0xc0654
						g37 = (int32_t) * (char *)(v3 + (int32_t)v15 - 1);
						if (random(0) == 0) {
							// 0xc0674
							AddObject(78, g26, g25);
							// branch -> 0xc0684
						}
					}
					// 0xc0684
					v11 = g26 + 1;
					g26 = v11;
					v12 = g29 + 224;
					g29 = v12;
					v13 = g30 + 112;
					g30 = v13;
					v9 = g25;
					if (v11 >= 112) {
						// break -> 0xc0698
						break;
					}
					v5 = v11;
					v6 = v12;
					v7 = v9;
					v8 = v13;
					// continue -> 0xc0604
					continue;
				}
			}
			// 0xc0684
			v11 = g26 + 1;
			g26 = v11;
			v12 = g29 + 224;
			g29 = v12;
			v13 = g30 + 112;
			g30 = v13;
			v9 = g25;
			if (v11 >= 112) {
				// break -> 0xc0698
				break;
			}
			v5 = v11;
			v6 = v12;
			v7 = v9;
			v8 = v13;
			// continue -> 0xc0604
		}
		int32_t v16 = v9 + 1; // 0xc0698
		g25 = v16;
		g28 += 2;
		if (v16 >= 112) {
			// break -> 0xc06a8
			break;
		}
		v4 = v16;
		// continue -> 0xc05f8
	}
	unsigned char v17 = *(char *)g32;                   // 0xc06a8
	int32_t v18;                                        // bp-73
	char v19 = *(char *)((int32_t)v17 + (int32_t)&v18); // 0xc06b4
	int32_t result = PlaceThemeMonsts(a1, (int32_t)v19);  // r3
	*(int32_t *)g31 = 0;
	return result;
}

// Address range: 0xc06dc - 0xc07f8
int32_t function_c06dc(int32_t a1)
{
	// 0xc06dc
	g34 = a1;
	g31 = *(int32_t *)(g23 - 0x6ec8);
	g32 = *(int32_t *)(g23 - 0x6ec4);
	g33 = *(int32_t *)(g23 - 0x722c);
	function_be9bc();
	AddObject(79, *(int32_t *)g32, *(int32_t *)g31);
	int32_t *v1 = (int32_t *)g31; // 0xc071c
	int32_t v2 = *v1 - 1;         // 0xc0728
	g24 = v2;
	g26 = *(int32_t *)(g23 - 0x6fcc) + 8 * g34;
	g27 = 2 * v2;
	int32_t result = *v1; // 0xc07d411
	if (v2 > result + 1) {
		// 0xc07e4
		return result;
	}
	int32_t v3 = g32; // 0xc07bc1
	// branch -> 0xc073c
	int32_t result2; // 0xc07d4
	while (true) {
		int32_t *v4 = (int32_t *)v3; // 0xc073c
		int32_t v5 = *v4 - 1;        // 0xc0740
		g25 = v5;
		int32_t v6 = 112 * v5; // 0xc0744
		g29 = v6;
		int32_t v7 = 224 * v5; // 0xc0748
		g28 = v7;
		int32_t v8 = *v4; // 0xc07bc3
		int32_t v9 = v2;  // 0xc07d0
		int32_t v10 = v3; // 0xc073c17
		int32_t v11;      // 0xc07d0
		if (v5 <= v8 + 1) {
			int32_t v12 = v3; // 0xc07bc28
			int32_t v13 = v2; // 0xc07a0
			int32_t v14;      // 0xc07bc
			int32_t v15;
			while (true) {
				int32_t v16 = *(int32_t *)(g26 + 4); // 0xc0754
				v15 = v13;
				v14 = v12;
				int32_t v17; // 0xc07b0
				int32_t v18; // 0xc07b4
				int32_t v19; // 0xc07b8
				int32_t v20; // 0xc07bc
				if ((int32_t) * (char *)(*(int32_t *)g36 + v6 + v13) == v16) {
					int16_t v21 = *(int16_t *)(g27 + *(int32_t *)g35 + v7); // 0xc0774
					if (*(char *)(g33 + (int32_t)v21) == 0) {
						// 0xc0784
						int32_t v22; // 0xc07b0
						int32_t v23; // 0xc07b4
						int32_t v24; // 0xc07b8
						if (v5 == v8) {
							// 0xc078c
							if (v13 != *(int32_t *)g31) {
								// 0xc0798
								AddMonster(v5, v13, 1, *(int32_t *)g30, 1);
								v15 = g24;
								v14 = g32;
								v24 = g25;
								v23 = g28;
								v22 = g29;
								// branch -> 0xc07b0
							} else {
								v15 = v13;
								v14 = v12;
								v24 = v8;
								v23 = v7;
								v22 = v6;
							}
						} else {
							// 0xc0798
							AddMonster(v5, v13, 1, *(int32_t *)g30, 1);
							v15 = g24;
							v14 = g32;
							v24 = g25;
							v23 = g28;
							v22 = g29;
							// branch -> 0xc07b0
						}
						// 0xc07b0
						v17 = v22 + 112;
						g29 = v17;
						v18 = v23 + 224;
						g28 = v18;
						v19 = v24 + 1;
						g25 = v19;
						v20 = *(int32_t *)v14;
						if (v19 > v20 + 1) {
							// break -> 0xc07cc
							break;
						}
						v12 = v14;
						v8 = v20;
						v5 = v19;
						v7 = v18;
						v13 = v15;
						v6 = v17;
						// continue -> 0xc0750
						continue;
					} else {
						v15 = v13;
						v14 = v12;
					}
				}
				// 0xc07b0
				v17 = v6 + 112;
				g29 = v17;
				v18 = v7 + 224;
				g28 = v18;
				v19 = v5 + 1;
				g25 = v19;
				v20 = *(int32_t *)v14;
				if (v19 > v20 + 1) {
					// break -> 0xc07cc
					break;
				}
				v12 = v14;
				v8 = v20;
				v5 = v19;
				v7 = v18;
				v13 = v15;
				v6 = v17;
				// continue -> 0xc0750
			}
			// 0xc07cc
			g27 += 2;
			v11 = v15 + 1;
			g24 = v11;
			result2 = *(int32_t *)g31;
			if (v11 > result2 + 1) {
				// break -> 0xc07e4
				break;
			}
			v2 = v11;
			v3 = v14;
			// continue -> 0xc073c
			continue;
		}
		// 0xc07cc
		g27 += 2;
		v11 = v9 + 1;
		g24 = v11;
		result2 = *(int32_t *)g31;
		if (v11 > result2 + 1) {
			// break -> 0xc07e4
			break;
		}
		v2 = v11;
		v3 = v10;
		// continue -> 0xc073c
	}
	// 0xc07e4
	return result2;
}

// Address range: 0xc07f8 - 0xc0860
int32_t function_c07f8(int32_t a1)
{
	// 0xc07f8
	g34 = a1;
	function_be788();
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6ec8); // 0xc0828
	AddObject(80, *(int32_t *)*(int32_t *)(g23 - 0x6ec4), v1);
	unsigned char v2 = *(char *)*(int32_t *)(g23 - 0x7794); // 0xc083c
	int32_t v3;                                             // bp-25
	char v4 = *(char *)((int32_t)v2 + (int32_t)&v3);        // 0xc0840
	return PlaceThemeMonsts(g36, (int32_t)v4);
}

// Address range: 0xc0860 - 0xc08c8
int32_t function_c0860(int32_t a1)
{
	// 0xc0860
	g34 = a1;
	function_be788();
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6ec8); // 0xc0890
	AddObject(81, *(int32_t *)*(int32_t *)(g23 - 0x6ec4), v1);
	unsigned char v2 = *(char *)*(int32_t *)(g23 - 0x7794); // 0xc08a4
	int32_t v3;                                             // bp-25
	char v4 = *(char *)((int32_t)v2 + (int32_t)&v3);        // 0xc08a8
	return PlaceThemeMonsts(g36, (int32_t)v4);
}

// Address range: 0xc08c8 - 0xc0930
int32_t function_c08c8(int32_t a1)
{
	// 0xc08c8
	g34 = a1;
	function_be788();
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6ec8); // 0xc08f8
	AddObject(82, *(int32_t *)*(int32_t *)(g23 - 0x6ec4), v1);
	unsigned char v2 = *(char *)*(int32_t *)(g23 - 0x7794); // 0xc090c
	int32_t v3;                                             // bp-25
	char v4 = *(char *)((int32_t)v2 + (int32_t)&v3);        // 0xc0910
	return PlaceThemeMonsts(g36, (int32_t)v4);
}

// Address range: 0xc0930 - 0xc0a64
int32_t function_c0930(int32_t a1)
{
	g25 = a1;
	g32 = *(int32_t *)(g23 - 0x7794);
	g33 = *(int32_t *)(g23 - 0x722c);
	g35 = *(int32_t *)(g23 - 0x757c);
	g26 = 0;
	g36 = *(int32_t *)(g23 - 0x7588);
	g29 = 0;
	g28 = *(int32_t *)(g23 - 0x6fcc) + 8 * a1;
	int32_t v1;       // bp-56
	int32_t v2 = &v1; // r20
	v1 = *(int32_t *)(g23 - 0x4ac8);
	int32_t v3 = 0; // 0xc09942
	// branch -> 0xc097c
	while (true) {
		// 0xc097c
		g31 = 0;
		g30 = 0;
		g27 = 0;
		int32_t v4 = 0;  // 0xc09bc
		int32_t v5 = 0;  // 0xc09a8
		int32_t v6 = v3; // 0xc09c0
		int32_t v7 = 0;  // 0xc0990
		// branch -> 0xc0988
		int32_t v8;
		while (true) {
			int32_t v9 = *(int32_t *)(g28 + 4); // 0xc098c
			int32_t v10;                        // 0xc0a08
			int32_t v11;                        // 0xc0a0c
			int32_t v12;                        // 0xc0a14
			if ((int32_t) * (char *)(*(int32_t *)g36 + v7 + v6) == v9) {
				int16_t v13 = *(int16_t *)(g29 + *(int32_t *)g35 + v5); // 0xc09ac
				if (*(char *)(g33 + (int32_t)v13) == 0) {
					// 0xc09bc
					if (function_bea50(v4, v6, g25, -1) != 0) {
						unsigned char v14 = *(char *)g32; // 0xc09d8
						g37 = (int32_t) * (char *)(v2 + (int32_t)v14 - 1);
						if (random(0) == 0) {
							// 0xc09f8
							AddObject(91, g27, g26);
							// branch -> 0xc0a08
						}
					}
					// 0xc0a08
					v10 = g27 + 1;
					g27 = v10;
					v11 = g30 + 224;
					g30 = v11;
					v12 = g31 + 112;
					g31 = v12;
					v8 = g26;
					if (v10 >= 112) {
						// break -> 0xc0a1c
						break;
					}
					v4 = v10;
					v5 = v11;
					v6 = v8;
					v7 = v12;
					// continue -> 0xc0988
					continue;
				}
			}
			// 0xc0a08
			v10 = g27 + 1;
			g27 = v10;
			v11 = g30 + 224;
			g30 = v11;
			v12 = g31 + 112;
			g31 = v12;
			v8 = g26;
			if (v10 >= 112) {
				// break -> 0xc0a1c
				break;
			}
			v4 = v10;
			v5 = v11;
			v6 = v8;
			v7 = v12;
			// continue -> 0xc0988
		}
		int32_t v15 = v8 + 1; // 0xc0a1c
		g26 = v15;
		g29 += 2;
		if (v15 >= 112) {
			// break -> 0xc0a2c
			break;
		}
		v3 = v15;
		// continue -> 0xc097c
	}
	unsigned char v16 = *(char *)g32;                   // 0xc0a2c
	int32_t v17;                                        // bp-53
	char v18 = *(char *)((int32_t)v16 + (int32_t)&v17); // 0xc0a38
	PlaceThemeMonsts(g25, (int32_t)v18);
	int32_t result = *(int32_t *)(g23 - 0x6ee8); // 0xc0a44
	*(int32_t *)result = 1;
	return result;
}

// Address range: 0xc0a64 - 0xc0bc4
int32_t function_c0a64(int32_t a1)
{
	g32 = *(int32_t *)(g23 - 0x7794);
	g33 = *(int32_t *)(g23 - 0x722c);
	g35 = *(int32_t *)(g23 - 0x757c);
	g36 = *(int32_t *)(g23 - 0x7588);
	int32_t v1 = *(int32_t *)(g23 - 0x4ac4); // bp-68
	if (*(int32_t *)*(int32_t *)(g23 - 0x6ff8) != 0) {
		// 0xc0aa8
		function_beb78(a1);
		int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x6ec8); // 0xc0ac0
		AddObject(92, *(int32_t *)*(int32_t *)(g23 - 0x6ec4), v2);
		// branch -> 0xc0ac8
	}
	int32_t v3 = &v1; // r19
	g27 = *(int32_t *)(g23 - 0x6fcc) + 8 * a1;
	g25 = 0;
	g28 = 0;
	int32_t v4 = 0; // 0xc0af84
	// branch -> 0xc0ae0
	while (true) {
		// 0xc0ae0
		g30 = 0;
		g29 = 0;
		g26 = 0;
		int32_t v5 = 0;  // 0xc0b20
		int32_t v6 = 0;  // 0xc0b0c
		int32_t v7 = v4; // 0xc0b24
		int32_t v8 = 0;  // 0xc0af4
		// branch -> 0xc0aec
		int32_t v9;
		while (true) {
			int32_t v10 = *(int32_t *)(g27 + 4); // 0xc0af0
			int32_t v11;                         // 0xc0b6c
			int32_t v12;                         // 0xc0b70
			int32_t v13;                         // 0xc0b78
			if ((int32_t) * (char *)(*(int32_t *)g36 + v8 + v7) == v10) {
				int16_t v14 = *(int16_t *)(g28 + *(int32_t *)g35 + v6); // 0xc0b10
				if (*(char *)(g33 + (int32_t)v14) == 0) {
					// 0xc0b20
					if (function_bea50(v5, v7, a1, -1) != 0) {
						unsigned char v15 = *(char *)g32; // 0xc0b3c
						g37 = (int32_t) * (char *)(v3 + (int32_t)v15 - 1);
						if (random(0) == 0) {
							// 0xc0b5c
							AddObject(93, g26, g25);
							// branch -> 0xc0b6c
						}
					}
					// 0xc0b6c
					v11 = g26 + 1;
					g26 = v11;
					v12 = g29 + 224;
					g29 = v12;
					v13 = g30 + 112;
					g30 = v13;
					v9 = g25;
					if (v11 >= 112) {
						// break -> 0xc0b80
						break;
					}
					v5 = v11;
					v6 = v12;
					v7 = v9;
					v8 = v13;
					// continue -> 0xc0aec
					continue;
				}
			}
			// 0xc0b6c
			v11 = g26 + 1;
			g26 = v11;
			v12 = g29 + 224;
			g29 = v12;
			v13 = g30 + 112;
			g30 = v13;
			v9 = g25;
			if (v11 >= 112) {
				// break -> 0xc0b80
				break;
			}
			v5 = v11;
			v6 = v12;
			v7 = v9;
			v8 = v13;
			// continue -> 0xc0aec
		}
		int32_t v16 = v9 + 1; // 0xc0b80
		g25 = v16;
		g28 += 2;
		if (v16 >= 112) {
			// break -> 0xc0b90
			break;
		}
		v4 = v16;
		// continue -> 0xc0ae0
	}
	unsigned char v17 = *(char *)g32;                   // 0xc0b90
	int32_t v18;                                        // bp-73
	char v19 = *(char *)((int32_t)v17 + (int32_t)&v18); // 0xc0b9c
	int32_t result = PlaceThemeMonsts(a1, (int32_t)v19);  // r3
	*(int32_t *)g31 = 0;
	return result;
}

// Address range: 0xc0bc4 - 0xc0d10
int32_t function_c0bc4(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7588); // r4
	int32_t v2 = 0;                          // r8
	int32_t result = 1;                      // r3
	int32_t v3 = 0;                          // 0xc0be83
	// branch -> 0xc0bd0
	while (true) {
		int32_t v4 = 14; // ctr
		int32_t v5 = 0;  // r7
		int32_t v6 = 0;  // r5
		int32_t v7 = v3; // 0xc0be8
		int32_t v8 = 0;  // 0xc0be4
		// branch -> 0xc0be0
		int32_t v9; // 0xc0c08
		while (true) {
			char *v10 = (char *)(v8 + v7 + *(int32_t *)v1); // 0xc0bec
			v9 = v7;
			int32_t v11 = v8; // 0xc0c00
			if (*v10 != 0) {
				// 0xc0bf8
				*v10 = (char)result;
				v9 = v2;
				v11 = v6;
				// branch -> 0xc0bfc
			}
			int32_t v12 = v11 + 112; // 0xc0c00
			v6 = v12;
			char *v13 = (char *)(v12 + v9 + *(int32_t *)v1); // 0xc0c0c
			if (*v13 != 0) {
				// 0xc0c18
				*v13 = (char)result;
				v9 = v2;
				v12 = v6;
				// branch -> 0xc0c1c
			}
			int32_t v14 = v12 + 112; // 0xc0c20
			v6 = v14;
			int32_t v15 = v5 + 1; // 0xc0c24
			v5 = v15;
			char *v16 = (char *)(v14 + v9 + *(int32_t *)v1); // 0xc0c30
			if (*v16 != 0) {
				// 0xc0c3c
				*v16 = (char)result;
				v9 = v2;
				v15 = v5;
				v14 = v6;
				// branch -> 0xc0c40
			}
			int32_t v17 = v14 + 112; // 0xc0c44
			v6 = v17;
			int32_t v18 = v15 + 1; // 0xc0c48
			v5 = v18;
			char *v19 = (char *)(v17 + v9 + *(int32_t *)v1); // 0xc0c54
			if (*v19 != 0) {
				// 0xc0c60
				*v19 = (char)result;
				v9 = v2;
				v18 = v5;
				v17 = v6;
				// branch -> 0xc0c64
			}
			int32_t v20 = v17 + 112; // 0xc0c68
			v6 = v20;
			int32_t v21 = v18 + 1; // 0xc0c6c
			v5 = v21;
			char *v22 = (char *)(v20 + v9 + *(int32_t *)v1); // 0xc0c78
			if (*v22 != 0) {
				// 0xc0c84
				*v22 = (char)result;
				v9 = v2;
				v21 = v5;
				v20 = v6;
				// branch -> 0xc0c88
			}
			int32_t v23 = v20 + 112; // 0xc0c8c
			v6 = v23;
			int32_t v24 = v21 + 1; // 0xc0c90
			v5 = v24;
			char *v25 = (char *)(v23 + v9 + *(int32_t *)v1); // 0xc0c9c
			if (*v25 != 0) {
				// 0xc0ca8
				*v25 = (char)result;
				v9 = v2;
				v24 = v5;
				v23 = v6;
				// branch -> 0xc0cac
			}
			int32_t v26 = v23 + 112; // 0xc0cb0
			v6 = v26;
			int32_t v27 = v24 + 1; // 0xc0cb4
			v5 = v27;
			char *v28 = (char *)(v26 + v9 + *(int32_t *)v1); // 0xc0cc0
			if (*v28 != 0) {
				// 0xc0ccc
				*v28 = (char)result;
				v9 = v2;
				v27 = v5;
				v26 = v6;
				// branch -> 0xc0cd0
			}
			int32_t v29 = v26 + 112; // 0xc0cd4
			v6 = v29;
			int32_t v30 = v27 + 1; // 0xc0cd8
			v5 = v30;
			char *v31 = (char *)(v29 + v9 + *(int32_t *)v1); // 0xc0ce4
			if (*v31 != 0) {
				// 0xc0cf0
				*v31 = (char)result;
				v9 = v2;
				v30 = v5;
				v29 = v6;
				// branch -> 0xc0cf4
			}
			int32_t v32 = v29 + 112; // 0xc0cf4
			v6 = v32;
			v5 = v30 + 1;
			int32_t v33 = v4 - 1; // 0xc0cfc
			v4 = v33;
			if (v33 == 0) {
				// break -> 0xc0d00
				break;
			}
			v7 = v9;
			v8 = v32;
			// continue -> 0xc0be0
		}
		int32_t v34 = v9 + 1; // 0xc0d00
		v2 = v34;
		if (v34 >= 112) {
			// break -> 0xc0d0c
			break;
		}
		v3 = v34;
		// continue -> 0xc0bd0
	}
	// 0xc0d0c
	return result;
}

// Address range: 0xc0d10 - 0xc0ea0
int32_t CreateThemeRooms(int32_t a1)
{
	int32_t v1 = g10;                            // 0xc0d14
	int32_t result = *(int32_t *)(g23 - 0x77e4); // 0xc0d18
	int32_t v2 = *(int32_t *)(g23 - 0x6fe8);     // 0xc0d1c
	int32_t v3 = *(int32_t *)(g23 - 0x6fd0);     // r29
	if (*(char *)result == 16) {
		// 0xc0e8c
		g10 = v1;
		return result;
	}
	int32_t v4 = *(int32_t *)(g23 - 0x6fcc); // r27
	*(int32_t *)v2 = 1;
	int32_t v5 = 0;  // r26
	int32_t result2; // 0xc0e6c
	int32_t result3; // 0xc0e9c
	int32_t v6;      // 0xc0e78
	if (*(int32_t *)v3 <= 0) {
		// 0xc0e60
		*(int32_t *)v2 = 0;
		result2 = *(int32_t *)(g23 - 0x7794);
		if (*(char *)result2 != 4) {
			// 0xc0e8c
			g10 = v1;
			return result2;
		}
		// 0xc0e78
		v6 = *(int32_t *)(g23 - 0x7270);
		if (*(int32_t *)v6 >= 1) {
			// 0xc0e88
			result3 = function_c0bc4(v6);
			// branch -> 0xc0e8c
		} else {
			result3 = v6;
		}
		// 0xc0e8c
		g10 = v1;
		return result3;
	}
	while (true) {
		// 0xc0d54
		*(int32_t *)*(int32_t *)(g23 - 0x6ec4) = 0;
		*(int32_t *)*(int32_t *)(g23 - 0x6ec8) = 0;
		int32_t v7 = v4;                // 0xc0d60
		unsigned char v8 = *(char *)v7; // 0xc0d60
		int32_t v9 = v8;                // 0xc0d64
		if (v8 <= 16) {
			// 0xc0d70
			return *(int32_t *)(*(int32_t *)(g23 - 0x56a0) + 4 * v9);
		}
		// 0xc0e4c
		v4 = v7 + 8;
		int32_t v10 = v5 + 1; // 0xc0e50
		v5 = v10;
		if (v10 >= *(int32_t *)v3) {
			// break -> 0xc0e60
			break;
		}
		// continue -> 0xc0d54
	}
	// 0xc0e60
	*(int32_t *)v2 = 0;
	result2 = *(int32_t *)(g23 - 0x7794);
	result3 = result2;
	if (*(char *)result2 == 4) {
		// 0xc0e78
		v6 = *(int32_t *)(g23 - 0x7270);
		if (*(int32_t *)v6 >= 1) {
			// 0xc0e88
			result3 = function_c0bc4(v6);
			// branch -> 0xc0e8c
		} else {
			result3 = v6;
		}
	}
	// 0xc0e8c
	g10 = v1;
	return result3;
}
