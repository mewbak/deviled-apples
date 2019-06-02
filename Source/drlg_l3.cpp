
// Address range: 0x41e40 - 0x41ef4
int32_t InitL3Dungeon(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x41e48
	int32_t v2 = v1;                         // r31
	g34 = v1;
	memset();
	int32_t v3;
	int32_t v4 = *(int32_t *)(v3 - 0x7514); // 0x41e64
	int32_t v5 = 0;                         // r6
	int32_t v6 = v2;                        // 0x41e70
	                                        // branch -> 0x41e6c
lab_0x41e6c:
	while (true) {
		int32_t result = v6; // r3
		int32_t v7 = 5;      // ctr
		int32_t v8 = v4;     // r4
		int32_t v9 = 0;      // r0
		int32_t v10 = v6;    // 0x41e80
		char v11 = 0;
		// branch -> 0x41e80
		while (true) {
			// 0x41e80
			*(char *)v10 = v11;
			*(char *)v8 = (char)v9;
			*(char *)(result + 40) = (char)v9;
			*(char *)(v8 + 40) = (char)v9;
			*(char *)(result + 80) = (char)v9;
			*(char *)(v8 + 80) = (char)v9;
			*(char *)(result + 120) = (char)v9;
			*(char *)(v8 + 120) = (char)v9;
			*(char *)(result + 160) = (char)v9;
			*(char *)(v8 + 160) = (char)v9;
			*(char *)(result + 200) = (char)v9;
			*(char *)(v8 + 200) = (char)v9;
			*(char *)(result + 240) = (char)v9;
			*(char *)(v8 + 240) = (char)v9;
			*(char *)(result + 280) = (char)v9;
			result += 320;
			*(char *)(v8 + 280) = (char)v9;
			v8 += 320;
			int32_t v12 = v7 - 1; // 0x41ec8
			v7 = v12;
			if (v12 == 0) {
				int32_t v13 = v5 + 1; // 0x41ecc
				v5 = v13;
				int32_t v14 = v2 + 1; // 0x41ed8
				v2 = v14;
				if (v13 >= 40) {
					// break (via goto) -> 0x41ee0
					goto lab_0x41ee0;
				}
				v4++;
				v6 = v14;
				// continue (via goto) -> 0x41e6c
				goto lab_0x41e6c;
			} else {
				// 0x41e80
				v10 = result;
				v11 = v9;
				// branch -> 0x41e80
				continue;
			}
		}
	lab_0x41ee0:
		// 0x41ee0
		return result;
	}
}

// Address range: 0x41ef4 - 0x4215c
int32_t DRLG_L3FillRoom(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0x41ef8
	g32 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x41f00
	g30 = v2;
	g33 = a3;
	g35 = a4;
	if (a1 < 2 || a3 > 33 || a2 < 2 || a4 > 37) {
		// 0x42144
		// branch -> 0x42148
		// 0x42148
		g10 = v1;
		return 0;
	}
	int32_t v3 = a2 + v2; // 0x41f38
	g36 = v3;
	int32_t v4 = a2; // r8
	int32_t v5 = 0;  // r9
	int32_t v6 = a4; // 0x4206812
	int32_t v7;      // r22
	int32_t v8;      // r24
	int32_t v9;      // r25
	int32_t v10;     // r3
	int32_t v11;     // r5
	int32_t v12;     // 0x41fe8
	int32_t v13;     // 0x41fec
	int32_t v14;     // 0x42008
	int32_t v15;     // 0x4200c
	int32_t v16;     // 0x42070
	int32_t v17;     // 0x42074
	int32_t v18;     // 0x42088
	int32_t v19;     // 0x420e0
	int32_t result;  // 0x42158
	int32_t v20;     // 0x41fe8
	int32_t v21;     // 0x41fec
	int32_t v22;     // 0x41ff4
	int32_t v23;     // 0x41ff8
	int32_t v24;     // 0x42004
	int32_t v25;     // 0x42070
	int32_t v26;     // 0x42080
	int32_t v27;     // 0x420d07
	int32_t v28;     // 0x420d8
	int32_t v29;     // 0x4200c
	int32_t v30;     // 0x42078
	if (a2 <= a4) {
		int32_t v31 = 0;  // 0x41fe033
		int32_t v32 = a1; // 0x41f58
		while (true) {
			int32_t v33 = v3 + 40 * a1; // r6
			int32_t v34 = a3 + 1 - v32; // 0x41f58
			v10 = v34;
			int32_t v35 = v31; // 0x41fe032
			int32_t v36;       // 0x41fd4
			int32_t v37;       // 0x41fd8
			if (v32 <= a3) {
				int32_t v38 = __asm_rlwinm_(v34, 29, 3, 31); // 0x41f60
				int32_t v39;                                 // 0x41fbc
				int32_t v40;
				if (v38 == 0) {
					// 0x41f60
					v40 = v5;
					v39 = v10;
					// branch -> 0x41fbc
				lab_0x41fbc:;
					int32_t v41 = v39;                           // 0x41fcc
					int32_t v42 = v33;                           // 0x41fc0
					int32_t v43 = (int32_t) * (char *)v42 + v40; // 0x41fc8
					v5 = v43;
					v35 = v43;
					// branch -> 0x41fc0
					while (v41 != 1) {
						// 0x41fc0
						v41--;
						v42 += 40;
						v43 += (int32_t) * (char *)v42;
						v5 = v43;
						v35 = v43;
						// continue -> 0x41fc0
					}
				lab_0x41fd0:
					// 0x41fd0
					v36 = v4 + 1;
					v4 = v36;
					v37 = g35;
					if (v36 > v37) {
						v6 = v37;
						// 0x41fe0
						if (v35 != 0) {
							// 0x4213c
							// branch -> 0x42148
							// 0x42148
							g10 = v1;
							return 0;
						}
						// 0x41fe8
						v12 = g32;
						v20 = v12 + 1;
						v13 = a2;
						v21 = g30;
						v22 = v13 + 1;
						v5 = v22;
						v23 = v22 + v21;
						v4 = v23;
						v11 = 1;
						v27 = v6;
						v18 = v21;
						v26 = v13;
						v16 = v12;
						if (v22 < v6) {
							v14 = v23;
							v15 = v20;
							while (true) {
								// 0x42004
								v24 = g33;
								v3 = v14 + 40 * v20;
								v29 = v24 - v15;
								v10 = v29;
								int32_t v44; // 0x42060
								int32_t v45; // 0x42064
								if (v24 > v15) {
								lab_0x42014_3:;
									int32_t v46 = __asm_rlwinm_(v29, 29, 3, 31); // 0x42014
									int32_t v47 = v46;                           // ctr
									int32_t v48;                                 // 0x42050
									int32_t v49;                                 // 0x420d8
									int32_t v50;                                 // 0x420e4
									int32_t v51;                                 // 0x42068
									int32_t v52;                                 // 0x4212c2
									int32_t v53;
									if (v46 == 0) {
										// 0x42014
										v53 = v3;
										v48 = v10;
										// branch -> 0x42050
									lab_0x42050:
										// 0x42050
										*(char *)v53 = (char)v11;
										int32_t v54 = v3 + 40; // 0x42058
										int32_t v55 = v48 - 1; // 0x4205c
										// branch -> 0x42054
										while (v55 != 0) {
											// 0x42054
											*(char *)v54 = (char)v11;
											v54 += 40;
											v55--;
											// continue -> 0x42054
										}
									lab_0x42060:
										// 0x42060
										v44 = v4 + 1;
										v4 = v44;
										v45 = v5 + 1;
										v5 = v45;
										v51 = g35;
										if (v45 >= v51) {
											// 0x42068
											v27 = v51;
											v18 = g30;
											v26 = a2;
											v16 = g32;
											// branch -> 0x42070
											// 0x42070
											v25 = 40 * v16;
											v17 = g33;
											v30 = v26 + v18;
											v9 = v30 + v25;
											v7 = v26;
											v8 = v30 + 40 * v17;
											g31 = 1;
											v52 = v17;
											v50 = v18;
											v19 = v16;
											v28 = v25;
											v49 = v27;
											if (v26 <= v27) {
												while (true) {
													// 0x42094
													g37 = 2;
													if (random(0) != 0) {
													lab_0x420a8_5:
														// 0x420a8
														*(char *)v9 = (char)g31;
														// branch -> 0x420ac
													}
												lab_0x420ac_5:
													// 0x420ac
													g37 = 2;
													if (random(0) != 0) {
														// 0x420c0
														*(char *)v8 = (char)g31;
														// branch -> 0x420c4
													}
													// 0x420c4
													v9++;
													v8++;
													int32_t v56 = v7 + 1; // 0x420cc
													v7 = v56;
													if (v56 > g35) {
														// break -> 0x420d0
														break;
													}
													// continue -> 0x42094
												}
												// 0x420d0
												v52 = g33;
												v50 = g30;
												v19 = g32;
												v28 = v25;
												v49 = g35;
												// branch -> 0x420d8
											}
											// 0x420d8
											g28 = g36 + v28;
											v7 = v19;
											g29 = v28 + v50 + v49;
											g32 = 1;
											if (v19 > v52) {
												// 0x42134
												// branch -> 0x42148
												// 0x42148
												g10 = v1;
												return 1;
											}
											while (true) {
												// 0x420f0
												g37 = 2;
												if (random(0) != 0) {
												lab_0x42104_5:
													// 0x42104
													*(char *)g28 = (char)g32;
													// branch -> 0x42108
												}
											lab_0x42108_5:
												// 0x42108
												g37 = 2;
												if (random(0) != 0) {
													// 0x4211c
													*(char *)g29 = (char)g32;
													// branch -> 0x42120
												}
												// 0x42120
												g28 += 40;
												g29 += 40;
												int32_t v57 = v7 + 1; // 0x42128
												v7 = v57;
												if (v57 > g33) {
													// break -> 0x42134
													break;
												}
												// continue -> 0x420f0
											}
											// 0x42134
											// branch -> 0x42148
											// 0x42148
											g10 = v1;
											return 1;
										}
									lab_0x42060_3:
										// 0x42060
										v14 = v44;
										v15 = v20;
										// branch -> 0x42004
										continue;
									} else {
										// 0x42020
										*(char *)v3 = (char)v11;
										*(char *)(v3 + 40) = (char)v11;
										*(char *)(v3 + 80) = (char)v11;
										*(char *)(v3 + 120) = (char)v11;
										*(char *)(v3 + 160) = (char)v11;
										*(char *)(v3 + 200) = (char)v11;
										*(char *)(v3 + 240) = (char)v11;
										*(char *)(v3 + 280) = (char)v11;
										int32_t v58 = v3 + 320; // 0x42040
										v3 = v58;
										int32_t v59 = v47 - 1; // 0x42044
										// branch -> 0x42020
										while (v59 != 0) {
											// 0x42020
											*(char *)v58 = (char)v11;
											*(char *)(v3 + 40) = (char)v11;
											*(char *)(v3 + 80) = (char)v11;
											*(char *)(v3 + 120) = (char)v11;
											*(char *)(v3 + 160) = (char)v11;
											*(char *)(v3 + 200) = (char)v11;
											*(char *)(v3 + 240) = (char)v11;
											*(char *)(v3 + 280) = (char)v11;
											v58 = v3 + 320;
											v3 = v58;
											v59--;
											// continue -> 0x42020
										}
										int32_t v60 = v10 % 8; // 0x42048
										if (v60 == 0) {
											goto lab_0x42060;
										}
										v53 = v58;
										v48 = v60;
										goto lab_0x42050;
									}
									int32_t v61 = v4; // 0x42060
									v44 = v61 + 1;
									v4 = v44;
									int32_t v62 = v5; // 0x42064
									v45 = v62 + 1;
									v5 = v45;
									v51 = g35;
									if (v45 < v51) {
										goto lab_0x42060_3;
									}
									int32_t v63 = g32;
									int32_t v64 = a2;
									int32_t v65 = g30;
									v27 = v51;
									v18 = v65;
									v26 = v64;
									v16 = v63;
									// branch -> 0x42070
									// 0x42070
									v25 = 40 * v16;
									v17 = g33;
									v30 = v26 + v18;
									v9 = v30 + v25;
									v7 = v26;
									v8 = v30 + 40 * v17;
									g31 = 1;
									v52 = v17;
									v50 = v18;
									v19 = v16;
									v28 = v25;
									v49 = v27;
									if (v26 <= v27) {
										while (true) {
											// 0x42094
											v10 = 0;
											g37 = 2;
											int32_t v66 = random(0); // 0x4209c
											v10 = v66;
											if (v66 == 0) {
												goto lab_0x420ac_5;
											}
											goto lab_0x420a8_5;
										}
									}
									int32_t v67 = g36; // 0x420dc
									g28 = v67 + v28;
									v7 = v19;
									g29 = v28 + v50 + v49;
									g32 = 1;
									if (v19 <= v52) {
										while (true) {
											// 0x420f0
											v10 = 0;
											g37 = 2;
											int32_t v68 = random(0); // 0x420f8
											v10 = v68;
											if (v68 == 0) {
												goto lab_0x42108_5;
											}
											goto lab_0x42104_5;
										}
									}
									// 0x42134
									v10 = 1;
									result = 1;
									// branch -> 0x42148
									// 0x42148
									g10 = v1;
									return result;
								}
							lab_0x42060_6:
								// 0x42060
								v44 = v4 + 1;
								v4 = v44;
								v45 = v5 + 1;
								v5 = v45;
								if (v45 < g35) {
									goto lab_0x42060_3;
								}
								// 0x42068
								// branch -> 0x42070
							}
						}
						// 0x42070
						v25 = 40 * v16;
						v17 = g33;
						v30 = v26 + v18;
						v9 = v30 + v25;
						v7 = v26;
						v8 = v30 + 40 * v17;
						g31 = 1;
						v19 = v16;
						v28 = v25;
						if (v26 <= v27) {
							while (true) {
								// 0x42094
								g37 = 2;
								if (random(0) == 0) {
									goto lab_0x420ac_5;
								}
								goto lab_0x420a8_5;
							}
						}
						// 0x420d8
						g28 = g36 + v28;
						v7 = v19;
						g29 = v28 + v18 + v27;
						g32 = 1;
						if (v19 <= v17) {
							while (true) {
								// 0x420f0
								g37 = 2;
								if (random(0) == 0) {
									goto lab_0x42108_5;
								}
								goto lab_0x42104_5;
							}
						}
						// 0x42134
						// branch -> 0x42148
						// 0x42148
						g10 = v1;
						return 1;
					}
				lab_0x41fd0_3:
					// 0x41fd0
					v31 = v35;
					v3++;
					a3 = g33;
					v32 = g32;
					// branch -> 0x41f4c
					continue;
				} else {
					int32_t v69 = v38;                                   // 0x41fb0
					int32_t v70 = v33;                                   // 0x41fa4
					int32_t v71 = (int32_t) * (char *)v70 + v5;          // 0x41f70
					int32_t v72 = (int32_t) * (char *)(v70 + 40) + v71;  // 0x41f78
					int32_t v73 = (int32_t) * (char *)(v70 + 80) + v72;  // 0x41f80
					int32_t v74 = (int32_t) * (char *)(v70 + 120) + v73; // 0x41f88
					int32_t v75 = (int32_t) * (char *)(v70 + 160) + v74; // 0x41f90
					int32_t v76 = (int32_t) * (char *)(v70 + 200) + v75; // 0x41f98
					int32_t v77 = (int32_t) * (char *)(v70 + 240) + v76; // 0x41fa0
					int32_t v78 = (int32_t) * (char *)(v70 + 280) + v77; // 0x41fac
					v5 = v78;
					// branch -> 0x41f6c
					while (v69 != 1) {
						// 0x41f6c
						v69--;
						v70 += 320;
						v71 = (int32_t) * (char *)v70 + v78;
						v72 = (int32_t) * (char *)(v70 + 40) + v71;
						v73 = (int32_t) * (char *)(v70 + 80) + v72;
						v74 = (int32_t) * (char *)(v70 + 120) + v73;
						v75 = (int32_t) * (char *)(v70 + 160) + v74;
						v76 = (int32_t) * (char *)(v70 + 200) + v75;
						v77 = (int32_t) * (char *)(v70 + 240) + v76;
						v78 = (int32_t) * (char *)(v70 + 280) + v77;
						v5 = v78;
						// continue -> 0x41f6c
					}
					int32_t v79 = v33 + 320 * v38;
					int32_t v80 = v10 % 8; // 0x41fb4
					if (v80 == 0) {
						v35 = v78;
						goto lab_0x41fd0;
					}
					v40 = v78;
					v33 = v79;
					v39 = v80;
					goto lab_0x41fbc;
				}
			}
			// 0x41fd0
			v36 = v4 + 1;
			v4 = v36;
			v37 = g35;
			if (v36 <= v37) {
				goto lab_0x41fd0_3;
			}
			v6 = v37;
			// 0x41fe0
			if (v35 != 0) {
				// 0x4213c
				// branch -> 0x42148
				// 0x42148
				g10 = v1;
				return 0;
			}
			// 0x41fe8
			v12 = g32;
			v20 = v12 + 1;
			v13 = a2;
			v21 = g30;
			v22 = v13 + 1;
			v5 = v22;
			v23 = v22 + v21;
			v4 = v23;
			v11 = 1;
			v27 = v6;
			v18 = v21;
			v26 = v13;
			v16 = v12;
			if (v22 < v6) {
				v14 = v23;
				v15 = v20;
				while (true) {
					// 0x42004
					v24 = g33;
					v3 = v14 + 40 * v20;
					v29 = v24 - v15;
					v10 = v29;
					if (v24 > v15) {
						goto lab_0x42014_3;
					}
					goto lab_0x42060_6;
				}
			}
			// 0x42070
			v25 = 40 * v16;
			v17 = g33;
			v30 = v26 + v18;
			v9 = v30 + v25;
			v7 = v26;
			v8 = v30 + 40 * v17;
			g31 = 1;
			v19 = v16;
			v28 = v25;
			if (v26 <= v27) {
				while (true) {
					// 0x42094
					g37 = 2;
					if (random(0) == 0) {
						goto lab_0x420ac_5;
					}
					goto lab_0x420a8_5;
				}
			}
			// 0x420d8
			g28 = g36 + v28;
			v7 = v19;
			g29 = v28 + v18 + v27;
			g32 = 1;
			if (v19 <= v17) {
				while (true) {
					// 0x420f0
					g37 = 2;
					if (random(0) == 0) {
						goto lab_0x42108_5;
					}
					goto lab_0x42104_5;
				}
			}
			// 0x42134
			// branch -> 0x42148
			// 0x42148
			g10 = v1;
			return 1;
		}
	}
	// 0x41fe8
	v12 = g32;
	v20 = v12 + 1;
	v13 = a2;
	v21 = g30;
	v22 = v13 + 1;
	v5 = v22;
	v23 = v22 + v21;
	v4 = v23;
	v11 = 1;
	v27 = v6;
	v18 = v21;
	v26 = v13;
	v16 = v12;
	if (v22 < v6) {
		v14 = v23;
		v15 = v20;
		while (true) {
			// 0x42004
			v24 = g33;
			v3 = v14 + 40 * v20;
			v29 = v24 - v15;
			v10 = v29;
			if (v24 > v15) {
				goto lab_0x42014_3;
			}
			goto lab_0x42060_6;
		}
	}
	// 0x42070
	v25 = 40 * v16;
	v17 = g33;
	v30 = v26 + v18;
	v9 = v30 + v25;
	v7 = v26;
	v8 = v30 + 40 * v17;
	g31 = 1;
	v19 = v16;
	v28 = v25;
	if (v26 <= v27) {
		while (true) {
			// 0x42094
			g37 = 2;
			if (random(0) == 0) {
				goto lab_0x420ac_5;
			}
			goto lab_0x420a8_5;
		}
	}
	// 0x420d8
	g28 = g36 + v28;
	v7 = v19;
	g29 = v28 + v18 + v27;
	g32 = 1;
	if (v19 <= v17) {
		while (true) {
			// 0x420f0
			g37 = 2;
			if (random(0) == 0) {
				goto lab_0x42108_5;
			}
			goto lab_0x42104_5;
		}
	}
	// 0x42134
	result = 1;
	// branch -> 0x42148
	// 0x42148
	g10 = v1;
	return result;
}

// Address range: 0x4215c - 0x423b0
int32_t DRLG_L3CreateBlock(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0x42160
	g36 = a3;
	g28 = a4;
	g37 = 2;
	int32_t v2 = random(0) + 3; // r30
	g37 = 2;
	int32_t v3 = g28;           // 0x42198
	int32_t v4 = random(0) + 3; // 0x4219c
	int32_t v5 = v4;            // r29
	int32_t v6 = v3;            // 0x421ec
	if (v3 == 0) {
		int32_t v7 = g36;    // 0x421a4
		int32_t v8 = a2 - 1; // 0x421a8
		g29 = v8;
		g31 = v8 - v4;
		int32_t v9 = v7;  // 0x421d0
		int32_t v10 = v2; // 0x421dc
		if (v2 < v7) {
			// 0x421b4
			g37 = v2;
			g32 = a1 + random(0);
			v9 = g36;
			v10 = v2;
			// branch -> 0x421c4
		}
		// 0x421c4
		if (v10 == v9) {
			// 0x421cc
			g32 = a1;
			// branch -> 0x421d0
		}
		// 0x421d0
		int32_t v11; // 0x421e8
		int32_t v12; // 0x421e4
		if (v10 > v9) {
			// 0x421d8
			g37 = v10;
			v12 = a1 - random(0);
			g32 = v12;
			v11 = v2;
			// branch -> 0x421e8
		} else {
			// 0x421d0
			v11 = v10;
			v12 = g32;
			// branch -> 0x421e8
		}
		// 0x421e8
		g30 = v12 + v11;
		v6 = g28;
		// branch -> 0x421ec
	}
	int32_t v13 = v6; // 0x4223c
	if (v6 == 3) {
		int32_t v14 = g36;    // 0x421f4
		int32_t v15 = a1 - 1; // 0x421f8
		g30 = v15;
		g32 = v15 - v2;
		int32_t v16 = v14; // 0x42220
		int32_t v17 = v5;  // 0x4222c
		if (v5 < v14) {
			// 0x42204
			g37 = v5;
			g31 = a2 + random(0);
			v16 = g36;
			v17 = v5;
			// branch -> 0x42214
		}
		// 0x42214
		if (v17 == v16) {
			// 0x4221c
			g31 = a2;
			// branch -> 0x42220
		}
		// 0x42220
		int32_t v18; // 0x42238
		int32_t v19; // 0x42234
		if (v17 > v16) {
			// 0x42228
			g37 = v17;
			v19 = a2 - random(0);
			g31 = v19;
			v18 = v5;
			// branch -> 0x42238
		} else {
			// 0x42220
			v18 = v17;
			v19 = g31;
			// branch -> 0x42238
		}
		// 0x42238
		g29 = v19 + v18;
		v13 = g28;
		// branch -> 0x4223c
	}
	int32_t v20 = v13; // 0x42290
	if (v13 == 2) {
		int32_t v21 = g36;    // 0x42244
		int32_t v22 = a2 + 1; // 0x4224c
		g31 = v22;
		g29 = v22 + v5;
		int32_t v23 = v21; // 0x42274
		int32_t v24 = v2;  // 0x42280
		if (v2 < v21) {
			// 0x42258
			g37 = v2;
			g32 = a1 + random(0);
			v23 = g36;
			v24 = v2;
			// branch -> 0x42268
		}
		// 0x42268
		if (v24 == v23) {
			// 0x42270
			g32 = a1;
			// branch -> 0x42274
		}
		// 0x42274
		int32_t v25; // 0x4228c
		int32_t v26; // 0x42288
		if (v24 > v23) {
			// 0x4227c
			g37 = v24;
			v26 = a1 - random(0);
			g32 = v26;
			v25 = v2;
			// branch -> 0x4228c
		} else {
			// 0x42274
			v25 = v24;
			v26 = g32;
			// branch -> 0x4228c
		}
		// 0x4228c
		g30 = v26 + v25;
		v20 = g28;
		// branch -> 0x42290
	}
	// 0x42290
	int32_t v27; // 0x422e8
	int32_t v28; // 0x422e0
	if (v20 == 1) {
		int32_t v29 = g36;    // 0x42298
		int32_t v30 = a1 + 1; // 0x422a0
		g32 = v30;
		g30 = v30 + v2;
		int32_t v31 = v29; // 0x422c8
		int32_t v32 = v5;  // 0x422d4
		if (v5 < v29) {
			// 0x422ac
			g37 = v5;
			g31 = a2 + random(0);
			v31 = g36;
			v32 = v5;
			// branch -> 0x422bc
		}
		// 0x422bc
		if (v32 == v31) {
			// 0x422c4
			g31 = a2;
			// branch -> 0x422c8
		}
		// 0x422c8
		int32_t v33; // 0x422dc
		if (v32 > v31) {
			// 0x422d0
			g37 = v32;
			v33 = a2 - random(0);
			g31 = v33;
			// branch -> 0x422e0
		} else {
			// 0x422c8
			v5 = v32;
			v33 = g31;
			// branch -> 0x422e0
		}
		// 0x422e0
		v28 = v33 + v5;
		g29 = v28;
		v27 = v33;
		// branch -> 0x422e4
	} else {
		// 0x42290
		v28 = g29;
		v27 = g31;
		// branch -> 0x422e4
	}
	int32_t result = DRLG_L3FillRoom(g32, v27, g30, v28); // 0x422f4
	if (result != 1) {
		// 0x4239c
		g10 = v1;
		return result;
	}
	// 0x42300
	g37 = 4;
	int32_t v34 = random(0); // 0x42308
	g36 = v34;
	int32_t v35 = 0; // 0x423ac28
	int32_t v36 = 0; // 0x42330
	if (v34 != 0) {
		// 0x42314
		if (g28 != 2) {
			// 0x4231c
			v35 = DRLG_L3CreateBlock(g32, g31, g33, 0);
			v36 = g36;
			// branch -> 0x42330
		} else {
			v35 = v34;
			v36 = v34;
		}
	}
	int32_t v37 = v35; // 0x423ac27
	int32_t v38 = 0;   // 0x42354
	if (v36 != 0) {
		// 0x42338
		if (g28 != 3) {
			// 0x42340
			v37 = DRLG_L3CreateBlock(g30, g31, g35, 1);
			v38 = g36;
			// branch -> 0x42354
		} else {
			v37 = v35;
			v38 = v36;
		}
	}
	int32_t result2 = v37; // 0x423ac26
	int32_t v39 = 0;       // 0x42378
	if (v38 != 0) {
		// 0x4235c
		if (g28 != 0) {
			// 0x42364
			result2 = DRLG_L3CreateBlock(g32, g29, g33, 2);
			v39 = g36;
			// branch -> 0x42378
		} else {
			result2 = v37;
			v39 = v38;
		}
	}
	// 0x42378
	if (v39 == 0) {
		// 0x4239c
		g10 = v1;
		return result2;
	}
	// 0x42380
	int32_t result3; // 0x423ac
	if (g28 != 1) {
		// 0x42388
		result3 = DRLG_L3CreateBlock(g32, g31, g35, 3);
		// branch -> 0x4239c
	} else {
		result3 = result2;
	}
	// 0x4239c
	g10 = v1;
	return result3;
}

// Address range: 0x423b0 - 0x42438
int32_t DRLG_L3FloorArea(int32_t result, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = a2;                              // r4
	int32_t v2 = *(int32_t *)(g23 - 0x77cc) + a2; // 0x423b8
	int32_t v3 = 1;                               // r8
	if (a2 > a4) {
		// 0x42434
		return result;
	}
	int32_t v4 = a3;     // 0x423c8
	int32_t v5 = result; // 0x423d0
	while (true) {
		int32_t v6 = v2 + 40 * result; // r10
		int32_t v7 = v4 + 1 - v5;      // 0x423d0
		int32_t v8 = v7;               // r7
		int32_t result2;               // 0x42434
		int32_t v9;                    // 0x42428
		if (v5 <= v4) {
			int32_t v10 = __asm_rlwinm_(v7, 29, 3, 31); // 0x423d8
			int32_t v11 = v10;                          // ctr
			int32_t v12;                                // 0x42414
			int32_t v13;
			if (v10 == 0) {
				// 0x423d8
				v13 = v6;
				v12 = v8;
				// branch -> 0x42414
			lab_0x42414:
				// 0x42414
				*(char *)v13 = (char)v3;
				int32_t v14 = v6 + 40; // 0x4241c
				int32_t v15 = v12 - 1; // 0x42420
				// branch -> 0x42418
				while (v15 != 0) {
					// 0x42418
					*(char *)v14 = (char)v3;
					v14 += 40;
					v15--;
					// continue -> 0x42418
				}
			lab_0x42424:
				// 0x42424
				v9 = v1 + 1;
				v1 = v9;
				result2 = result;
				if (v9 > a4) {
					// 0x42434
					return result2;
				}
			lab_0x42424_3:
				// 0x42424
				v2++;
				v4 = a3;
				v5 = result2;
				// branch -> 0x423c4
				continue;
			} else {
				// 0x423e4
				*(char *)v6 = (char)v3;
				*(char *)(v6 + 40) = (char)v3;
				*(char *)(v6 + 80) = (char)v3;
				*(char *)(v6 + 120) = (char)v3;
				*(char *)(v6 + 160) = (char)v3;
				*(char *)(v6 + 200) = (char)v3;
				*(char *)(v6 + 240) = (char)v3;
				*(char *)(v6 + 280) = (char)v3;
				int32_t v16 = v6 + 320; // 0x42404
				v6 = v16;
				int32_t v17 = v11 - 1; // 0x42408
				// branch -> 0x423e4
				while (v17 != 0) {
					// 0x423e4
					*(char *)v16 = (char)v3;
					*(char *)(v6 + 40) = (char)v3;
					*(char *)(v6 + 80) = (char)v3;
					*(char *)(v6 + 120) = (char)v3;
					*(char *)(v6 + 160) = (char)v3;
					*(char *)(v6 + 200) = (char)v3;
					*(char *)(v6 + 240) = (char)v3;
					*(char *)(v6 + 280) = (char)v3;
					v16 = v6 + 320;
					v6 = v16;
					v17--;
					// continue -> 0x423e4
				}
				int32_t v18 = v8 % 8; // 0x4240c
				if (v18 == 0) {
					goto lab_0x42424;
				}
				v13 = v16;
				v12 = v18;
				goto lab_0x42414;
			}
		}
		// 0x42424
		v9 = v1 + 1;
		v1 = v9;
		result2 = result;
		if (v9 <= a4) {
			goto lab_0x42424_3;
		}
		// 0x42434
		return result2;
	}
}

// Address range: 0x42438 - 0x42514
int32_t DRLG_L3FillDiags(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x42440
	g35 = v1;
	g32 = 0;
	// branch -> 0x42450
	int32_t result; // r3
	while (true) {
		// 0x42450
		g33 = 0;
		g36 = v1;
		int32_t v2 = v1; // 0x4246c
		// branch -> 0x42458
		while (true) {
			unsigned char v3 = *(char *)v2;                // 0x42458
			unsigned char v4 = *(char *)(v2 + 40);         // 0x4245c
			unsigned char v5 = *(char *)(v2 + 41);         // 0x4246c
			int32_t v6 = 2 * (int32_t) * (char *)(v2 + 1); // 0x42474
			result = v6;
			int32_t v7 = 4 * (int32_t)v4 + 8 * (int32_t)v3 + v6 + (int32_t)v5; // 0x4247c
			g31 = v7;
			if (v7 == 6) {
				// 0x42488
				g37 = 2;
				int32_t v8 = random(0); // 0x42490
				result = v8;
				int32_t v9 = g36; // 0x424a0
				if (v8 == 0) {
					// 0x4249c
					*(char *)v9 = 1;
					// branch -> 0x424b0
				} else {
					// 0x424a8
					*(char *)(v9 + 41) = 1;
					// branch -> 0x424b0
				}
				// 0x424b0
				int32_t v10; // 0x424e0
				int32_t v11; // 0x424e4
				if (g31 == 9) {
				lab_0x424b8:
					// 0x424b8
					g37 = 2;
					int32_t v12 = random(0); // 0x424c0
					result = v12;
					int32_t v13 = g36; // 0x424d0
					if (v12 == 0) {
						// 0x424cc
						*(char *)(v13 + 40) = 1;
						// branch -> 0x424e0
					} else {
						// 0x424d8
						*(char *)(v13 + 1) = 1;
						// branch -> 0x424e0
					}
					// 0x424e0
					v10 = g33 + 1;
					g33 = v10;
					v11 = g36 + 40;
					g36 = v11;
					if (v10 >= 39) {
						// break -> 0x424f0
						break;
					}
					v2 = v11;
					// continue -> 0x42458
					continue;
				}
			lab_0x424e0:
				// 0x424e0
				v10 = g33 + 1;
				g33 = v10;
				v11 = g36 + 40;
				g36 = v11;
				if (v10 >= 39) {
					// break -> 0x424f0
					break;
				}
				v2 = v11;
				// continue -> 0x42458
				continue;
			}
			// 0x424b0
			if (g31 == 9) {
				goto lab_0x424b8;
			}
			goto lab_0x424e0;
		}
		int32_t v14 = g32 + 1; // 0x424f0
		g32 = v14;
		int32_t v15 = g35 + 1; // 0x424f4
		g35 = v15;
		if (v14 >= 39) {
			// break -> 0x42500
			break;
		}
		v1 = v15;
		// continue -> 0x42450
	}
	// 0x42500
	return result;
}

// Address range: 0x42514 - 0x42610
int32_t DRLG_L3FillSingles(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x42514
	int32_t result = v1;                     // r3
	int32_t v2 = 1;                          // r8
	int32_t v3 = v1 + 1;                     // 0x4251c
	// branch -> 0x42520
	while (true) {
		int32_t v4 = v3 + 40; // 0x42524
		int32_t v5 = 19;      // ctr
		int32_t v6 = 1;       // r7
		// branch -> 0x42530
		while (true) {
			char *v7 = (char *)v4; // 0x42530
			int32_t v8 = v4;       // 0x42590
			if (*v7 == 0) {
				unsigned char v9 = *(char *)(v4 + 39);       // 0x4253c
				unsigned char v10 = *(char *)(v4 - 1);       // 0x42540
				int32_t v11 = (int32_t) * (char *)(v4 - 41); // 0x42544
				result = v11;
				if ((int32_t)v10 + (int32_t)v9 + v11 == 3) {
					int32_t v12 = (int32_t) * (char *)(v4 - 40); // 0x42558
					result = v12;
					if ((int32_t) * (char *)(v4 + 40) + v12 == 2) {
						unsigned char v13 = *(char *)(v4 + 41);      // 0x4256c
						unsigned char v14 = *(char *)(v4 + 1);       // 0x42570
						int32_t v15 = (int32_t) * (char *)(v4 - 39); // 0x42574
						result = v15;
						if ((int32_t)v14 + (int32_t)v13 + v15 == 3) {
							// 0x42588
							*v7 = 1;
							v8 = v4;
							// branch -> 0x42590
						} else {
							v8 = v4;
						}
					} else {
						v8 = v4;
					}
				} else {
					v8 = v4;
				}
			}
			int32_t v16 = v8 + 40;   // 0x42590
			char *v17 = (char *)v16; // 0x42590
			v4 = v16;
			int32_t v18 = v16; // 0x425f0
			if (*v17 == 0) {
				unsigned char v19 = *(char *)(v8 + 79);     // 0x4259c
				unsigned char v20 = *(char *)(v8 + 39);     // 0x425a0
				int32_t v21 = (int32_t) * (char *)(v8 - 1); // 0x425a4
				result = v21;
				if ((int32_t)v20 + (int32_t)v19 + v21 == 3) {
					int32_t v22 = (int32_t) * (char *)v8; // 0x425b8
					result = v22;
					if ((int32_t) * (char *)(v8 + 80) + v22 == 2) {
						unsigned char v23 = *(char *)(v8 + 81);     // 0x425cc
						unsigned char v24 = *(char *)(v8 + 41);     // 0x425d0
						int32_t v25 = (int32_t) * (char *)(v8 + 1); // 0x425d4
						result = v25;
						if ((int32_t)v24 + (int32_t)v23 + v25 == 3) {
							// 0x425e8
							*v17 = 1;
							v18 = v4;
							// branch -> 0x425f0
						} else {
							v18 = v16;
						}
					} else {
						v18 = v16;
					}
				} else {
					v18 = v16;
				}
			}
			int32_t v26 = v18 + 40; // 0x425f0
			v6++;
			int32_t v27 = v5 - 1; // 0x425f8
			v5 = v27;
			if (v27 == 0) {
				// break -> 0x425fc
				break;
			}
			v4 = v26;
			// continue -> 0x42530
		}
		int32_t v28 = v2 + 1; // 0x425fc
		v2 = v28;
		if (v28 >= 39) {
			// break -> 0x4260c
			break;
		}
		v3++;
		// continue -> 0x42520
	}
	// 0x4260c
	return result;
}

// Address range: 0x42610 - 0x428ec
int32_t DRLG_L3FillStraights(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x42618
	g36 = v1;
	int32_t v2 = 0; // r24
	// branch -> 0x4262c
	int32_t v3; // r23
	int32_t v4; // r25
	int32_t v5; // r27
	int32_t v6; // 0x426d8
	while (true) {
		// 0x4262c
		v5 = v1;
		v3 = 0;
		int32_t v7 = 0;  // 0x42658
		int32_t v8 = 0;  // 0x4265c
		int32_t v9 = v1; // 0x42644
		// branch -> 0x42638
		while (true) {
			// 0x42638
			int32_t v10;
			int32_t v11; // 0x426b4
			int32_t v12; // 0x426b4
			int32_t v13; // 0x426b8
			if (*(char *)v9 == 0) {
				// 0x42644
				if (*(char *)(v9 + 1) == 1) {
					// 0x42650
					if (v8 == 0) {
						// 0x42658
						g35 = v7;
						// branch -> 0x4265c
					}
					// 0x4265c
					v11 = v7;
					v10 = v8 + 1;
					// branch -> 0x426b4
				lab_0x426b4_3:
					// 0x426b4
					v12 = v11 + 1;
					v3 = v12;
					v13 = v5 + 40;
					v5 = v13;
					if (v12 >= 37) {
						// break -> 0x426c4
						break;
					}
					v7 = v12;
					v8 = v10;
					v9 = v13;
					// continue -> 0x42638
					continue;
				}
			}
			// 0x42664
			if (v8 < 4) {
				v11 = v7;
				v10 = 0;
				goto lab_0x426b4_3;
			}
			// 0x4266c
			g37 = 2;
			if (random(0) == 0) {
				// 0x4266c
				v11 = v3;
				v10 = 0;
				// branch -> 0x426b4
				goto lab_0x426b4_3;
			} else {
				int32_t v14 = g35; // 0x42680
				v4 = v14;
				v6 = v1 + 40 * v14;
				int32_t v15 = v3; // 0x426a820
				if (v14 >= v15) {
					v11 = v15;
					v10 = 0;
					goto lab_0x426b4_3;
				}
				g37 = 2;
				*(char *)v6 = (char)random(0);
				v6 += 40;
				int32_t v16 = v4 + 1; // 0x426a4
				int32_t v17 = v3;     // 0x426a8
				while (v16 < v17) {
					// 0x42690
					g37 = 2;
					*(char *)v6 = (char)random(0);
					v6 += 40;
					v16++;
					v17 = v3;
					// continue -> 0x42690
				}
				// 0x426b4
				v12 = v17 + 1;
				v3 = v12;
				v13 = v5 + 40;
				v5 = v13;
				if (v12 >= 37) {
					// break -> 0x426c4
					break;
				}
				v7 = v12;
				v8 = 0;
				v9 = v13;
				// continue -> 0x42638
				continue;
			}
		}
		int32_t v18 = v2 + 1; // 0x426c4
		v2 = v18;
		int32_t v19 = v1 + 1; // 0x426c8
		if (v18 >= 39) {
			// break -> 0x426d4
			break;
		}
		v1 = v19;
		// continue -> 0x4262c
	}
	// 0x426d4
	v4 = 0;
	v6 = g36;
	// branch -> 0x426dc
	while (true) {
		// 0x426dc
		v2 = 0;
		v5 = v6;
		int32_t v20 = 0;  // 0x42708
		int32_t v21 = 0;  // 0x4270c
		int32_t v22 = v6; // 0x426f4
		// branch -> 0x426e8
		while (true) {
			// 0x426e8
			int32_t v23;
			int32_t v24; // 0x42764
			int32_t v25; // 0x42764
			int32_t v26; // 0x42768
			if (*(char *)v22 == 1) {
				// 0x426f4
				if (*(char *)(v22 + 1) == 0) {
					// 0x42700
					if (v21 == 0) {
						// 0x42708
						g35 = v20;
						// branch -> 0x4270c
					}
					// 0x4270c
					v24 = v20;
					v23 = v21 + 1;
					// branch -> 0x42764
				lab_0x42764_3:
					// 0x42764
					v25 = v24 + 1;
					v2 = v25;
					v26 = v5 + 40;
					v5 = v26;
					if (v25 >= 37) {
						// break -> 0x42774
						break;
					}
					v20 = v25;
					v21 = v23;
					v22 = v26;
					// continue -> 0x426e8
					continue;
				}
			}
			// 0x42714
			if (v21 < 4) {
				v24 = v20;
				v23 = 0;
				goto lab_0x42764_3;
			}
			// 0x4271c
			g37 = 2;
			if (random(0) == 0) {
				// 0x4271c
				v24 = v2;
				v23 = 0;
				// branch -> 0x42764
				goto lab_0x42764_3;
			} else {
				int32_t v27 = g35; // 0x42730
				v3 = v27;
				v1 = v6 + 40 * v27;
				int32_t v28 = v2; // 0x4275815
				if (v27 >= v28) {
					v24 = v28;
					v23 = 0;
					goto lab_0x42764_3;
				}
				g37 = 2;
				*(char *)(v1 + 1) = (char)random(0);
				v1 += 40;
				int32_t v29 = v3 + 1; // 0x42754
				int32_t v30 = v2;     // 0x42758
				while (v29 < v30) {
					// 0x42740
					g37 = 2;
					*(char *)(v1 + 1) = (char)random(0);
					v1 += 40;
					v29++;
					v30 = v2;
					// continue -> 0x42740
				}
				// 0x42764
				v25 = v30 + 1;
				v2 = v25;
				v26 = v5 + 40;
				v5 = v26;
				if (v25 >= 37) {
					// break -> 0x42774
					break;
				}
				v20 = v25;
				v21 = 0;
				v22 = v26;
				// continue -> 0x426e8
				continue;
			}
		}
		int32_t v31 = v4 + 1; // 0x42774
		v4 = v31;
		int32_t v32 = v6 + 1; // 0x42778
		if (v31 >= 39) {
			// break -> 0x42784
			break;
		}
		v6 = v32;
		// continue -> 0x426dc
	}
	// 0x42784
	v4 = 0;
	int32_t v33 = g36; // 0x42788
	v6 = v33;
	// branch -> 0x4278c
	while (true) {
		// 0x4278c
		v5 = v33;
		int32_t v34 = 0;   // r30
		int32_t v35 = 0;   // 0x427b8
		int32_t v36 = 0;   // 0x427bc
		int32_t v37 = v33; // 0x427a4
		// branch -> 0x42798
		while (true) {
			// 0x42798
			int32_t v38;
			int32_t v39; // 0x42810
			int32_t v40; // 0x42810
			int32_t v41; // 0x42814
			if (*(char *)v37 == 0) {
				// 0x427a4
				if (*(char *)(v37 + 40) == 1) {
					// 0x427b0
					if (v36 == 0) {
						// 0x427b8
						g33 = v35;
						// branch -> 0x427bc
					}
					// 0x427bc
					v39 = v35;
					v38 = v36 + 1;
					// branch -> 0x42810
				lab_0x42810_3:
					// 0x42810
					v40 = v39 + 1;
					v34 = v40;
					v41 = v5 + 1;
					v5 = v41;
					if (v40 >= 37) {
						// break -> 0x42820
						break;
					}
					v35 = v40;
					v36 = v38;
					v37 = v41;
					// continue -> 0x42798
					continue;
				}
			}
			// 0x427c4
			if (v36 < 4) {
				v39 = v35;
				v38 = 0;
				goto lab_0x42810_3;
			}
			// 0x427cc
			g37 = 2;
			if (random(0) == 0) {
				// 0x427cc
				v39 = v34;
				v38 = 0;
				// branch -> 0x42810
				goto lab_0x42810_3;
			} else {
				int32_t v42 = g33; // 0x427e0
				v2 = v42;
				v1 = v6 + v42;
				int32_t v43 = v34; // 0x4280410
				if (v42 >= v43) {
					v39 = v43;
					v38 = 0;
					goto lab_0x42810_3;
				}
				g37 = 2;
				*(char *)v1 = (char)random(0);
				v1++;
				int32_t v44 = v2 + 1; // 0x42800
				int32_t v45 = v34;    // 0x42804
				while (v44 < v45) {
					// 0x427ec
					g37 = 2;
					*(char *)v1 = (char)random(0);
					v1++;
					v44++;
					v45 = v34;
					// continue -> 0x427ec
				}
				// 0x42810
				v40 = v45 + 1;
				v34 = v40;
				v41 = v5 + 1;
				v5 = v41;
				if (v40 >= 37) {
					// break -> 0x42820
					break;
				}
				v35 = v40;
				v36 = 0;
				v37 = v41;
				// continue -> 0x42798
				continue;
			}
		}
		int32_t v46 = v4 + 1; // 0x42820
		v4 = v46;
		int32_t v47 = v6 + 40; // 0x42824
		v6 = v47;
		if (v46 >= 39) {
			// break -> 0x42830
			break;
		}
		v33 = v47;
		// continue -> 0x4278c
	}
	// 0x42830
	g29 = 0;
	int32_t v48 = g36; // 0x4283c
	// branch -> 0x42834
	int32_t result; // 0x428e8
	while (true) {
		// 0x42834
		v6 = 0;
		v5 = v48;
		int32_t v49 = 0;   // 0x42860
		int32_t v50 = 0;   // 0x42864
		int32_t v51 = v48; // 0x4284c
		// branch -> 0x42840
		while (true) {
			// 0x42840
			int32_t v52; // 0x428b8
			int32_t v53; // 0x428b8
			int32_t v54; // 0x428bc
			if (*(char *)v51 == 1) {
				// 0x4284c
				if (*(char *)(v51 + 40) == 0) {
					// 0x42858
					if (v50 == 0) {
						// 0x42860
						g33 = v49;
						// branch -> 0x42864
					}
					// 0x42864
					v52 = v49;
					result = v50 + 1;
					// branch -> 0x428b8
				lab_0x428b8_3:
					// 0x428b8
					v53 = v52 + 1;
					v6 = v53;
					v54 = v5 + 1;
					v5 = v54;
					if (v53 >= 37) {
						// break -> 0x428c8
						break;
					}
					v49 = v53;
					v50 = result;
					v51 = v54;
					// continue -> 0x42840
					continue;
				}
			}
			// 0x4286c
			if (v50 < 4) {
				v52 = v49;
				result = 0;
				goto lab_0x428b8_3;
			}
			// 0x42874
			g37 = 2;
			if (random(0) == 0) {
				// 0x42874
				v52 = v6;
				result = 0;
				// branch -> 0x428b8
				goto lab_0x428b8_3;
			} else {
				int32_t v55 = g33; // 0x42888
				v2 = v55;
				v1 = g36 + v55;
				int32_t v56 = v6; // 0x428ac5
				if (v55 >= v56) {
					v52 = v56;
					result = 0;
					goto lab_0x428b8_3;
				}
				int32_t v57; // 0x428ac
				while (true) {
					// 0x42894
					g37 = 2;
					*(char *)(v1 + 40) = (char)random(0);
					v1++;
					int32_t v58 = v2 + 1; // 0x428a8
					v2 = v58;
					v57 = v6;
					if (v58 >= v57) {
						result = 0;
						// break -> 0x428b8
						break;
					}
					// continue -> 0x42894
				}
				// 0x428b8
				v53 = v57 + 1;
				v6 = v53;
				v54 = v5 + 1;
				v5 = v54;
				if (v53 >= 37) {
					// break -> 0x428c8
					break;
				}
				v49 = v53;
				v50 = result;
				v51 = v54;
				// continue -> 0x42840
				continue;
			}
		}
		int32_t v59 = g29 + 1; // 0x428c8
		g29 = v59;
		int32_t v60 = g36 + 40; // 0x428cc
		g36 = v60;
		if (v59 >= 39) {
			// break -> 0x428d8
			break;
		}
		v48 = v60;
		// continue -> 0x42834
	}
	// 0x428d8
	return result;
}

// Address range: 0x428ec - 0x42a38
int32_t DRLG_L3Edges(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x428ec
	int32_t v2 = 0;                          // r0
	*(char *)(v1 + 1560) = 0;
	*(char *)(v1 + 1561) = (char)v2;
	*(char *)(v1 + 1562) = (char)v2;
	*(char *)(v1 + 1563) = (char)v2;
	*(char *)(v1 + 1564) = (char)v2;
	*(char *)(v1 + 1565) = (char)v2;
	*(char *)(v1 + 1566) = (char)v2;
	*(char *)(v1 + 1567) = (char)v2;
	*(char *)(v1 + 1568) = (char)v2;
	*(char *)(v1 + 1569) = (char)v2;
	*(char *)(v1 + 1570) = (char)v2;
	*(char *)(v1 + 1571) = (char)v2;
	*(char *)(v1 + 1572) = (char)v2;
	*(char *)(v1 + 1573) = (char)v2;
	*(char *)(v1 + 1574) = (char)v2;
	*(char *)(v1 + 1575) = (char)v2;
	*(char *)(v1 + 1576) = (char)v2;
	*(char *)(v1 + 1577) = (char)v2;
	*(char *)(v1 + 1578) = (char)v2;
	*(char *)(v1 + 1579) = (char)v2;
	*(char *)(v1 + 1580) = (char)v2;
	*(char *)(v1 + 1581) = (char)v2;
	*(char *)(v1 + 1582) = (char)v2;
	*(char *)(v1 + 1583) = (char)v2;
	*(char *)(v1 + 1584) = (char)v2;
	*(char *)(v1 + 1585) = (char)v2;
	*(char *)(v1 + 1586) = (char)v2;
	*(char *)(v1 + 1587) = (char)v2;
	*(char *)(v1 + 1588) = (char)v2;
	*(char *)(v1 + 1589) = (char)v2;
	*(char *)(v1 + 1590) = (char)v2;
	*(char *)(v1 + 1591) = (char)v2;
	*(char *)(v1 + 1592) = (char)v2;
	*(char *)(v1 + 1593) = (char)v2;
	*(char *)(v1 + 1594) = (char)v2;
	*(char *)(v1 + 1595) = (char)v2;
	*(char *)(v1 + 1596) = (char)v2;
	*(char *)(v1 + 1597) = (char)v2;
	*(char *)(v1 + 1598) = (char)v2;
	*(char *)(v1 + 1599) = (char)v2;
	*(char *)(v1 + 39) = (char)v2;
	*(char *)(v1 + 79) = (char)v2;
	*(char *)(v1 + 119) = (char)v2;
	*(char *)(v1 + 159) = (char)v2;
	*(char *)(v1 + 199) = (char)v2;
	*(char *)(v1 + 239) = (char)v2;
	*(char *)(v1 + 279) = (char)v2;
	*(char *)(v1 + 319) = (char)v2;
	*(char *)(v1 + 359) = (char)v2;
	*(char *)(v1 + 399) = (char)v2;
	*(char *)(v1 + 439) = (char)v2;
	*(char *)(v1 + 479) = (char)v2;
	*(char *)(v1 + 519) = (char)v2;
	*(char *)(v1 + 559) = (char)v2;
	*(char *)(v1 + 599) = (char)v2;
	*(char *)(v1 + 639) = (char)v2;
	*(char *)(v1 + 679) = (char)v2;
	*(char *)(v1 + 719) = (char)v2;
	*(char *)(v1 + 759) = (char)v2;
	*(char *)(v1 + 799) = (char)v2;
	*(char *)(v1 + 839) = (char)v2;
	*(char *)(v1 + 879) = (char)v2;
	*(char *)(v1 + 919) = (char)v2;
	*(char *)(v1 + 959) = (char)v2;
	*(char *)(v1 + 999) = (char)v2;
	*(char *)(v1 + 1039) = (char)v2;
	*(char *)(v1 + 1079) = (char)v2;
	*(char *)(v1 + 1119) = (char)v2;
	*(char *)(v1 + 1159) = (char)v2;
	*(char *)(v1 + 1199) = (char)v2;
	*(char *)(v1 + 1239) = (char)v2;
	*(char *)(v1 + 1279) = (char)v2;
	*(char *)(v1 + 1319) = (char)v2;
	*(char *)(v1 + 1359) = (char)v2;
	*(char *)(v1 + 1399) = (char)v2;
	*(char *)(v1 + 1439) = (char)v2;
	*(char *)(v1 + 1479) = (char)v2;
	*(char *)(v1 + 1519) = (char)v2;
	*(char *)(v1 + 1559) = (char)v2;
	*(char *)(v1 + 1599) = (char)v2;
	return g34;
}

// Address range: 0x42a38 - 0x42ce0
int32_t DRLG_L3GetFloorArea(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc);   // 0x42a3c
	int32_t v2 = 0;                            // r7
	unsigned char v3 = *(char *)v1;            // 0x42a4c
	unsigned char v4 = *(char *)(v1 + 40);     // 0x42a50
	unsigned char v5 = *(char *)(v1 + 80);     // 0x42a58
	unsigned char v6 = *(char *)(v1 + 120);    // 0x42a60
	unsigned char v7 = *(char *)(v1 + 160);    // 0x42a68
	unsigned char v8 = *(char *)(v1 + 200);    // 0x42a70
	unsigned char v9 = *(char *)(v1 + 240);    // 0x42a78
	unsigned char v10 = *(char *)(v1 + 280);   // 0x42a80
	unsigned char v11 = *(char *)(v1 + 320);   // 0x42a88
	unsigned char v12 = *(char *)(v1 + 360);   // 0x42a90
	unsigned char v13 = *(char *)(v1 + 400);   // 0x42a98
	unsigned char v14 = *(char *)(v1 + 440);   // 0x42aa0
	unsigned char v15 = *(char *)(v1 + 480);   // 0x42aa8
	unsigned char v16 = *(char *)(v1 + 520);   // 0x42ab0
	unsigned char v17 = *(char *)(v1 + 560);   // 0x42ab8
	int32_t v18 = v1;                          // 0x42ac0
	unsigned char v19 = *(char *)(v18 + 600);  // 0x42ac0
	unsigned char v20 = *(char *)(v18 + 640);  // 0x42ac8
	unsigned char v21 = *(char *)(v18 + 680);  // 0x42ad0
	unsigned char v22 = *(char *)(v18 + 720);  // 0x42ad8
	unsigned char v23 = *(char *)(v18 + 760);  // 0x42ae0
	unsigned char v24 = *(char *)(v18 + 800);  // 0x42ae8
	unsigned char v25 = *(char *)(v18 + 840);  // 0x42af0
	unsigned char v26 = *(char *)(v18 + 880);  // 0x42af8
	unsigned char v27 = *(char *)(v18 + 920);  // 0x42b00
	unsigned char v28 = *(char *)(v18 + 960);  // 0x42b08
	unsigned char v29 = *(char *)(v18 + 1000); // 0x42b10
	unsigned char v30 = *(char *)(v18 + 1040); // 0x42b18
	unsigned char v31 = *(char *)(v18 + 1080); // 0x42b20
	unsigned char v32 = *(char *)(v18 + 1120); // 0x42b28
	unsigned char v33 = *(char *)(v18 + 1160); // 0x42b30
	int32_t v34 = v1;                          // 0x42b38
	unsigned char v35 = *(char *)(v34 + 1200); // 0x42b38
	unsigned char v36 = *(char *)(v34 + 1240); // 0x42b40
	unsigned char v37 = *(char *)(v34 + 1280); // 0x42b48
	unsigned char v38 = *(char *)(v34 + 1320); // 0x42b50
	unsigned char v39 = *(char *)(v34 + 1360); // 0x42b58
	unsigned char v40 = *(char *)(v34 + 1400); // 0x42b60
	unsigned char v41 = *(char *)(v34 + 1440); // 0x42b68
	unsigned char v42 = *(char *)(v34 + 1480); // 0x42b70
	unsigned char v43 = *(char *)(v34 + 1520); // 0x42b78
	unsigned char v44 = *(char *)(v34 + 1560); // 0x42b80
	int32_t v45 = v34 + 1;                     // 0x42b88
	v1 = v45;
	unsigned char v46 = *(char *)v45; // 0x42b90
	v2++;
	unsigned char v47 = *(char *)(v34 + 41);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 // 0x42b98
	unsigned char v48 = *(char *)(v34 + 81);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 // 0x42ba0
	unsigned char v49 = *(char *)(v34 + 121);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42ba8
	unsigned char v50 = *(char *)(v34 + 161);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42bb0
	unsigned char v51 = *(char *)(v34 + 201);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42bb8
	unsigned char v52 = *(char *)(v34 + 241);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42bc0
	unsigned char v53 = *(char *)(v34 + 281);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42bc8
	unsigned char v54 = *(char *)(v34 + 321);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42bd0
	unsigned char v55 = *(char *)(v34 + 361);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42bd8
	unsigned char v56 = *(char *)(v34 + 401);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42be0
	unsigned char v57 = *(char *)(v34 + 441);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42be8
	unsigned char v58 = *(char *)(v34 + 481);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42bf0
	unsigned char v59 = *(char *)(v34 + 521);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42bf8
	int32_t v60 = v1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        // 0x42c00
	unsigned char v61 = *(char *)(v60 + 560);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42c00
	unsigned char v62 = *(char *)(v60 + 600);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42c08
	unsigned char v63 = *(char *)(v60 + 640);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42c10
	unsigned char v64 = *(char *)(v60 + 680);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42c18
	unsigned char v65 = *(char *)(v60 + 720);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42c20
	unsigned char v66 = *(char *)(v60 + 760);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42c28
	unsigned char v67 = *(char *)(v60 + 800);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42c30
	unsigned char v68 = *(char *)(v60 + 840);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42c38
	unsigned char v69 = *(char *)(v60 + 880);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42c40
	unsigned char v70 = *(char *)(v60 + 920);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42c48
	unsigned char v71 = *(char *)(v60 + 960);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                // 0x42c50
	unsigned char v72 = *(char *)(v60 + 1000);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42c58
	unsigned char v73 = *(char *)(v60 + 1040);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42c60
	unsigned char v74 = *(char *)(v60 + 1080);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42c68
	unsigned char v75 = *(char *)(v60 + 1120);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42c70
	int32_t v76 = v1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        // 0x42c78
	unsigned char v77 = *(char *)(v76 + 1160);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42c78
	unsigned char v78 = *(char *)(v76 + 1200);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42c80
	unsigned char v79 = *(char *)(v76 + 1240);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42c88
	unsigned char v80 = *(char *)(v76 + 1280);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42c90
	unsigned char v81 = *(char *)(v76 + 1320);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42c98
	unsigned char v82 = *(char *)(v76 + 1360);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42ca0
	unsigned char v83 = *(char *)(v76 + 1400);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42ca8
	unsigned char v84 = *(char *)(v76 + 1440);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42cb0
	unsigned char v85 = *(char *)(v76 + 1480);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42cb8
	unsigned char v86 = *(char *)(v76 + 1520);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42cc0
	unsigned char v87 = *(char *)(v76 + 1560);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               // 0x42cc8
	int32_t result = (int32_t)v86 + (int32_t)v85 + (int32_t)v84 + (int32_t)v83 + (int32_t)v82 + (int32_t)v81 + (int32_t)v80 + (int32_t)v79 + (int32_t)v78 + (int32_t)v77 + (int32_t)v75 + (int32_t)v74 + (int32_t)v73 + (int32_t)v72 + (int32_t)v71 + (int32_t)v70 + (int32_t)v69 + (int32_t)v68 + (int32_t)v67 + (int32_t)v66 + (int32_t)v65 + (int32_t)v64 + (int32_t)v63 + (int32_t)v62 + (int32_t)v61 + (int32_t)v59 + (int32_t)v58 + (int32_t)v57 + (int32_t)v56 + (int32_t)v55 + (int32_t)v54 + (int32_t)v53 + (int32_t)v52 + (int32_t)v51 + (int32_t)v50 + (int32_t)v49 + (int32_t)v48 + (int32_t)v47 + (int32_t)v46 + (int32_t)v43 + (int32_t)v42 + (int32_t)v41 + (int32_t)v40 + (int32_t)v39 + (int32_t)v38 + (int32_t)v37 + (int32_t)v36 + (int32_t)v35 + (int32_t)v33 + (int32_t)v32 + (int32_t)v31 + (int32_t)v30 + (int32_t)v29 + (int32_t)v28 + (int32_t)v27 + (int32_t)v26 + (int32_t)v25 + (int32_t)v24 + (int32_t)v23 + (int32_t)v22 + (int32_t)v21 + (int32_t)v20 + (int32_t)v19 + (int32_t)v17 + (int32_t)v16 + (int32_t)v15 + (int32_t)v14 + (int32_t)v13 + (int32_t)v12 + (int32_t)v11 + (int32_t)v10 + (int32_t)v9 + (int32_t)v8 + (int32_t)v7 + (int32_t)v6 + (int32_t)v5 + (int32_t)v4 + (int32_t)v3 + (int32_t)v44 + (int32_t)v87; // 0x42cd4
	int32_t v88 = 19;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        // 0x42cd8
	// branch -> 0x42a4c
	while (v88 != 0) {
		// 0x42a4c
		v1 = v76 + 1;
		v3 = *(char *)v1;
		v4 = *(char *)(v1 + 40);
		v5 = *(char *)(v1 + 80);
		v6 = *(char *)(v1 + 120);
		v7 = *(char *)(v1 + 160);
		v8 = *(char *)(v1 + 200);
		v9 = *(char *)(v1 + 240);
		v10 = *(char *)(v1 + 280);
		v11 = *(char *)(v1 + 320);
		v12 = *(char *)(v1 + 360);
		v13 = *(char *)(v1 + 400);
		v14 = *(char *)(v1 + 440);
		v15 = *(char *)(v1 + 480);
		v16 = *(char *)(v1 + 520);
		v17 = *(char *)(v1 + 560);
		v18 = v1;
		v19 = *(char *)(v18 + 600);
		v20 = *(char *)(v18 + 640);
		v21 = *(char *)(v18 + 680);
		v22 = *(char *)(v18 + 720);
		v23 = *(char *)(v18 + 760);
		v24 = *(char *)(v18 + 800);
		v25 = *(char *)(v18 + 840);
		v26 = *(char *)(v18 + 880);
		v27 = *(char *)(v18 + 920);
		v28 = *(char *)(v18 + 960);
		v29 = *(char *)(v18 + 1000);
		v30 = *(char *)(v18 + 1040);
		v31 = *(char *)(v18 + 1080);
		v32 = *(char *)(v18 + 1120);
		v33 = *(char *)(v18 + 1160);
		v34 = v1;
		v35 = *(char *)(v34 + 1200);
		v36 = *(char *)(v34 + 1240);
		v37 = *(char *)(v34 + 1280);
		v38 = *(char *)(v34 + 1320);
		v39 = *(char *)(v34 + 1360);
		v40 = *(char *)(v34 + 1400);
		v41 = *(char *)(v34 + 1440);
		v42 = *(char *)(v34 + 1480);
		v43 = *(char *)(v34 + 1520);
		v44 = *(char *)(v34 + 1560);
		v45 = v34 + 1;
		v1 = v45;
		v46 = *(char *)v45;
		v2++;
		v47 = *(char *)(v34 + 41);
		v48 = *(char *)(v34 + 81);
		v49 = *(char *)(v34 + 121);
		v50 = *(char *)(v34 + 161);
		v51 = *(char *)(v34 + 201);
		v52 = *(char *)(v34 + 241);
		v53 = *(char *)(v34 + 281);
		v54 = *(char *)(v34 + 321);
		v55 = *(char *)(v34 + 361);
		v56 = *(char *)(v34 + 401);
		v57 = *(char *)(v34 + 441);
		v58 = *(char *)(v34 + 481);
		v59 = *(char *)(v34 + 521);
		v60 = v1;
		v61 = *(char *)(v60 + 560);
		v62 = *(char *)(v60 + 600);
		v63 = *(char *)(v60 + 640);
		v64 = *(char *)(v60 + 680);
		v65 = *(char *)(v60 + 720);
		v66 = *(char *)(v60 + 760);
		v67 = *(char *)(v60 + 800);
		v68 = *(char *)(v60 + 840);
		v69 = *(char *)(v60 + 880);
		v70 = *(char *)(v60 + 920);
		v71 = *(char *)(v60 + 960);
		v72 = *(char *)(v60 + 1000);
		v73 = *(char *)(v60 + 1040);
		v74 = *(char *)(v60 + 1080);
		v75 = *(char *)(v60 + 1120);
		v76 = v1;
		v77 = *(char *)(v76 + 1160);
		v78 = *(char *)(v76 + 1200);
		v79 = *(char *)(v76 + 1240);
		v80 = *(char *)(v76 + 1280);
		v81 = *(char *)(v76 + 1320);
		v82 = *(char *)(v76 + 1360);
		v83 = *(char *)(v76 + 1400);
		v84 = *(char *)(v76 + 1440);
		v85 = *(char *)(v76 + 1480);
		v86 = *(char *)(v76 + 1520);
		v87 = *(char *)(v76 + 1560);
		result = (int32_t)v86 + (int32_t)v85 + (int32_t)v84 + (int32_t)v83 + (int32_t)v82 + (int32_t)v81 + (int32_t)v80 + (int32_t)v79 + (int32_t)v78 + (int32_t)v77 + (int32_t)v75 + (int32_t)v74 + (int32_t)v73 + (int32_t)v72 + (int32_t)v71 + (int32_t)v70 + (int32_t)v69 + (int32_t)v68 + (int32_t)v67 + (int32_t)v66 + (int32_t)v65 + (int32_t)v64 + (int32_t)v63 + (int32_t)v62 + (int32_t)v61 + (int32_t)v59 + (int32_t)v58 + (int32_t)v57 + (int32_t)v56 + (int32_t)v55 + (int32_t)v54 + (int32_t)v53 + (int32_t)v52 + (int32_t)v51 + (int32_t)v50 + (int32_t)v49 + (int32_t)v48 + (int32_t)v47 + (int32_t)v46 + (int32_t)v43 + (int32_t)v42 + (int32_t)v41 + (int32_t)v40 + (int32_t)v39 + (int32_t)v38 + (int32_t)v37 + (int32_t)v36 + (int32_t)v35 + (int32_t)v33 + (int32_t)v32 + (int32_t)v31 + (int32_t)v30 + (int32_t)v29 + (int32_t)v28 + (int32_t)v27 + (int32_t)v26 + (int32_t)v25 + (int32_t)v24 + (int32_t)v23 + (int32_t)v22 + (int32_t)v21 + (int32_t)v20 + (int32_t)v19 + (int32_t)v17 + (int32_t)v16 + (int32_t)v15 + (int32_t)v14 + (int32_t)v13 + (int32_t)v12 + (int32_t)v11 + (int32_t)v10 + (int32_t)v9 + (int32_t)v8 + (int32_t)v7 + (int32_t)v6 + (int32_t)v5 + (int32_t)v4 + (int32_t)v3 + result + (int32_t)v44 + (int32_t)v87;
		v88--;
		// continue -> 0x42a4c
	}
	// 0x42cdc
	return result;
}

// Address range: 0x42ce0 - 0x42e64
int32_t DRLG_L3MakeMegas(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x42ce8
	g30 = 0;
	g36 = g23 - 1556;
	// branch -> 0x42d00
	int32_t v2;     // r0
	int32_t result; // r3
	while (true) {
		// 0x42d00
		g31 = 0;
		int32_t v3 = v1; // r30
		int32_t v4 = v1; // 0x42d1c
		// branch -> 0x42d08
		while (true) {
			int32_t v5 = (int32_t) * (char *)(v4 + 40);    // 0x42d0c
			int32_t v6 = (int32_t) * (char *)(v4 + 41);    // 0x42d1c
			int32_t v7 = 2 * (int32_t) * (char *)(v4 + 1); // 0x42d24
			result = v7;
			int32_t v8 = 4 * v5 + 8 * (int32_t) * (char *)v4 + v7 + v6; // 0x42d2c
			int32_t v9 = v8;                                            // 0x42d58
			if (v8 == 6) {
				// 0x42d38
				g37 = 2;
				int32_t v10 = random(0); // 0x42d40
				result = v10;
				if (v10 == 0) {
					// 0x42d4c
					v9 = 12;
					// branch -> 0x42d58
				} else {
					// 0x42d54
					v9 = 5;
					// branch -> 0x42d58
				}
				// 0x42d58
				int32_t v11; // 0x42d84
				int32_t v12; // 0x42d90
				if (v9 == 9) {
				lab_0x42d60:
					// 0x42d60
					g37 = 2;
					int32_t v13 = random(0); // 0x42d68
					result = v13;
					int32_t v14; // 0x42d80
					if (v13 == 0) {
						// 0x42d74
						v14 = 13;
						// branch -> 0x42d80
					} else {
						// 0x42d7c
						v14 = 14;
						// branch -> 0x42d80
					}
					// 0x42d80
					v11 = g31 + 1;
					g31 = v11;
					*(char *)v3 = *(char *)(g36 + v14);
					v12 = v3 + 40;
					v3 = v12;
					if (v11 >= 39) {
						// break -> 0x42d98
						break;
					}
					v4 = v12;
					// continue -> 0x42d08
					continue;
				}
			lab_0x42d80:
				// 0x42d80
				v11 = g31 + 1;
				g31 = v11;
				*(char *)v3 = *(char *)(g36 + v9);
				v12 = v3 + 40;
				v3 = v12;
				if (v11 >= 39) {
					// break -> 0x42d98
					break;
				}
				v4 = v12;
				// continue -> 0x42d08
				continue;
			}
			// 0x42d58
			if (v9 == 9) {
				goto lab_0x42d60;
			}
			goto lab_0x42d80;
		}
		int32_t v15 = g30 + 1; // 0x42d98
		g30 = v15;
		v2 = 8;
		*(char *)(v1 + 1560) = 8;
		int32_t v16 = v1 + 1; // 0x42da8
		v1 = v16;
		if (v15 >= 39) {
			// break -> 0x42db0
			break;
		}
		v1 = v16;
		// continue -> 0x42d00
	}
	// 0x42db0
	*(char *)(v1 + 39) = (char)v2;
	*(char *)(v1 + 79) = (char)v2;
	*(char *)(v1 + 119) = (char)v2;
	*(char *)(v1 + 159) = (char)v2;
	*(char *)(v1 + 199) = (char)v2;
	*(char *)(v1 + 239) = (char)v2;
	*(char *)(v1 + 279) = (char)v2;
	*(char *)(v1 + 319) = (char)v2;
	*(char *)(v1 + 359) = (char)v2;
	*(char *)(v1 + 399) = (char)v2;
	*(char *)(v1 + 439) = (char)v2;
	*(char *)(v1 + 479) = (char)v2;
	*(char *)(v1 + 519) = (char)v2;
	*(char *)(v1 + 559) = (char)v2;
	*(char *)(v1 + 599) = (char)v2;
	*(char *)(v1 + 639) = (char)v2;
	*(char *)(v1 + 679) = (char)v2;
	*(char *)(v1 + 719) = (char)v2;
	*(char *)(v1 + 759) = (char)v2;
	*(char *)(v1 + 799) = (char)v2;
	*(char *)(v1 + 839) = (char)v2;
	*(char *)(v1 + 879) = (char)v2;
	*(char *)(v1 + 919) = (char)v2;
	*(char *)(v1 + 959) = (char)v2;
	*(char *)(v1 + 999) = (char)v2;
	*(char *)(v1 + 1039) = (char)v2;
	*(char *)(v1 + 1079) = (char)v2;
	*(char *)(v1 + 1119) = (char)v2;
	*(char *)(v1 + 1159) = (char)v2;
	*(char *)(v1 + 1199) = (char)v2;
	*(char *)(v1 + 1239) = (char)v2;
	*(char *)(v1 + 1279) = (char)v2;
	*(char *)(v1 + 1319) = (char)v2;
	*(char *)(v1 + 1359) = (char)v2;
	*(char *)(v1 + 1399) = (char)v2;
	*(char *)(v1 + 1439) = (char)v2;
	*(char *)(v1 + 1479) = (char)v2;
	*(char *)(v1 + 1519) = (char)v2;
	*(char *)(v1 + 1559) = (char)v2;
	*(char *)(v1 + 1599) = (char)v2;
	return result;
}

// Address range: 0x42e64 - 0x436e8
int32_t DRLG_L3River(int32_t a1)
{
	int32_t v1 = g10;                        // 0x42e68
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // r22
	g31 = 0;
	int32_t v3;          // bp-1284
	int32_t v4 = &v3;    // 0x42e80
	int32_t v5 = v4 + 4; // 0x42fb8
	int32_t v6 = 0;      // 0x433c814132
	                     // branch -> 0x42e90
lab_0x42e90_2:
	while (true) {
		int32_t v7 = 0;  // r24
		int32_t v8 = v6; // 0x42e94128
		                 // branch -> 0x42e90
	lab_0x42e90:
		while (true) {
			int32_t v9 = 0;       // r20
			int32_t v10 = v8 + 1; // r25
			int32_t v11 = 0;      // r19
			int32_t v12 = 0;      // r15
			int32_t v13 = 0;      // 0x42fd0140
			int32_t v14 = 0;      // 0x42fcc138
			int32_t v15 = 0;      // 0x42f28
			// branch -> 0x42f04
			while (true) {
			lab_0x42f04_2:;
				unsigned char v16 = *(char *)(40 * v14 + v13 + v2); // 0x42f0c
				if (v16 < 25) {
				lab_0x42f20_2:
					// 0x42f20
					if (v15 < 100) {
					lab_0x42ea4:
						// 0x42ea4
						g37 = 40;
						v9 = random(0);
						g37 = 40;
						int32_t v17 = random(0); // 0x42ebc
						g34 = v17;
						v11 = v17;
						int32_t v18 = v12 + 1; // 0x42ec4
						v12 = v18;
						// branch -> 0x42ee0
						while (true) {
							int32_t v19 = v9; // 0x42ecc
							// branch -> 0x42ee0
							while (true) {
								unsigned char v20 = *(char *)(40 * v19 + v17 + v2); // 0x42ee8
								if (v20 < 25) {
								lab_0x42efc:
									// 0x42efc
									if (v17 >= 40) {
										v13 = v17;
										v14 = v19;
										v15 = v18;
										goto lab_0x42f04_2;
									}
									int32_t v21 = v19 + 1; // 0x42ecc
									v9 = v21;
									if (v21 >= 40) {
										// break -> 0x42ed8
										break;
									}
									v19 = v21;
									// continue -> 0x42ee0
									continue;
								} else {
									// 0x42ef4
									if (v20 < 29) {
										v13 = v17;
										v14 = v19;
										v15 = v18;
										goto lab_0x42f04_2;
									}
									goto lab_0x42efc;
								}
								while (true) {
									int32_t v22 = 40 * v14 + v13; // 0x42f08
									int32_t v23;                  // 0x42f0c
									v16 = *(char *)(v22 + v23);
									if (v16 < 25) {
									lab_0x42f20:
										// 0x42f20
										if (v15 < 100) {
											goto lab_0x42ea4;
										}
									lab_0x42f28:;
										// 0x42f28
										int32_t result; // 0x436e4
										if (v15 > 99) {
											// 0x436d4
											g10 = v1;
											result = g34;
											return result;
										}
									lab_0x42f30_2:;
										// 0x42f30
										int32_t v24; // r16
										int32_t v25; // r21
										int32_t v26; // r28
										int32_t v27; // 0x42fc8124
										int32_t v28; // 0x42fcc
										int32_t v29; // 0x42fd0
										if (v16 == 27) {
											// 0x42f80
											g36 = 1;
											g33 = 0;
											// branch -> 0x42fa4
										} else {
											// 0x42f38
											if (v16 > 27) {
												// 0x42f4c
												if (v16 == 28) {
													// 0x42f94
													g36 = 2;
													g33 = 3;
													// branch -> 0x42fa4
												}
											} else {
												// 0x42f3c
												if (v16 == 25) {
													// 0x42f58
													g36 = 3;
													g33 = 2;
													// branch -> 0x42fa4
												} else {
													// 0x42f44
													if (v16 > 25) {
														// 0x42f6c
														g36 = 0;
														g33 = 1;
														// branch -> 0x42fa4
													}
												}
												// 0x42fa4
												v3 = v14;
												v26 = 1;
												v25 = v5;
												v24 = 4;
												v12 = 0;
												v29 = v13;
												v28 = v14;
												v27 = 0;
												// branch -> 0x42fc8
											lab_0x42fc8_2:
												while (true) {
													int32_t v30 = v28; // r18
													int32_t v31 = v29; // r17
													int32_t v32;       // 0x42ff4
													int32_t v33;       // 0x42fe0
													if (v27 == 0) {
														// 0x42fd8
														g37 = 4;
														v33 = random(0);
														g34 = v33;
														v32 = v12;
														// branch -> 0x42ff4
													} else {
														// 0x42fec
														v32 = v27;
														v33 = (g36 + 1) % 4;
														// branch -> 0x42ff4
													}
													// 0x42ff4
													g36 = v33;
													int32_t v34 = v32 + 1; // 0x42ff4
													v12 = v34;
													int32_t v35 = g33; // 0x43008
													int32_t v36 = v24; // 0x43010
													int32_t v37 = v33;
													if (v33 == v35 || v33 == v36) {
														int32_t v38 = v34 + 1;       // 0x43000
														int32_t v39 = (v33 + 1) % 4; // 0x43004
														while (v39 == v35 || v39 == v36) {
															// 0x42ffc
															v38++;
															v39 = (v39 + 1) % 4;
															// continue -> 0x42ffc
														}
														// 0x43008
														v12 = v38;
														g36 = v39;
														v34 = v38;
														v37 = v39;
														// branch -> 0x43018
													}
													// 0x43018
													if (v37 == 0) {
														uint32_t v40 = v11; // 0x43020
														if (v40 >= 1) {
															// 0x43028
															v11 = v40 - 1;
															// branch -> 0x4302c
														}
													}
													// 0x4302c
													if (v37 == 1) {
														uint32_t v41 = v11; // 0x43034
														if (v41 <= 39) {
															// 0x4303c
															v11 = v41 + 1;
															// branch -> 0x43040
														}
													}
													// 0x43040
													if (v37 == 2) {
														uint32_t v42 = v9; // 0x43048
														if (v42 <= 39) {
															// 0x43050
															v9 = v42 + 1;
															// branch -> 0x43054
														}
													}
													int32_t v43 = v9;  // 0x4305c
													int32_t v44 = v43; // 0x43068
													if (v37 == 3) {
														// 0x4305c
														if (v43 >= 1) {
															int32_t v45 = v43 - 1; // 0x43064
															v9 = v45;
															v44 = v45;
															// branch -> 0x43068
														} else {
															v44 = v43;
														}
													}
													// 0x43068
													int32_t v46;
													int32_t v47; // 0x43200
													int32_t v48; // 0x4320035
													int32_t v49;
													if (*(char *)(v2 + v11 + 40 * v44) == 7) {
														// 0x4307c
														v12 = 0;
														int32_t v50 = v37; // 0x430a0
														if (v37 <= 1) {
															// 0x43088
															g37 = 2;
															int32_t v51 = random(0) % 256; // 0x43094
															g34 = v51;
															*(int32_t *)(v25 + 800) = v51 + 17;
															v50 = g36;
															// branch -> 0x430a0
														}
														// 0x430a0
														if (v50 >= 2) {
															// 0x430a8
															g37 = 2;
															int32_t v52 = random(0) % 256; // 0x430b4
															g34 = v52;
															*(int32_t *)(v25 + 800) = v52 + 15;
															// branch -> 0x430c0
														}
														// 0x430c0
														*(int32_t *)v25 = v9;
														v26++;
														*(int32_t *)(v25 + 400) = v11;
														int32_t v53 = v25; // 0x430d0
														v25 = v53 + 4;
														int32_t v54;
														if (g36 == 0) {
															// 0x430d8
															if (g35 == 2) {
															lab_0x430f0:
																// 0x430f0
																if (v26 >= 3) {
																	// 0x430f8
																	*(int32_t *)(v53 + 796) = 22;
																	// branch -> 0x43100
																}
																int32_t v55 = g36; // 0x43100
																if (v55 == 0) {
																	// 0x43108
																	v24 = 1;
																	v54 = 0;
																	// branch -> 0x43114
																} else {
																	// 0x43110
																	v24 = 2;
																	v54 = v55;
																	// branch -> 0x43114
																}
															lab_0x43114_2:;
																// 0x43114
																int32_t v56; // 0x43168
																int32_t v57;
																if (v54 == 0) {
																	// 0x4311c
																	if (g35 == 3) {
																	lab_0x43134:;
																		int32_t v58 = v54;
																		if (v26 >= 3) {
																			// 0x4313c
																			*(int32_t *)(v25 + 792) = 21;
																			v58 = g36;
																			// branch -> 0x43144
																		}
																		// 0x43144
																		if (v58 == 0) {
																			// 0x4314c
																			v24 = 1;
																			v56 = 0;
																			v57 = v58;
																			// branch -> 0x43158
																		} else {
																			// 0x43154
																			v24 = 3;
																			v56 = v58;
																			v57 = v58;
																			// branch -> 0x43158
																		}
																	lab_0x43158_2:;
																		// 0x43158
																		int32_t v59; // 0x431ac
																		int32_t v60;
																		if (v56 == 1) {
																			// 0x43160
																			if (g35 == 2) {
																			lab_0x43178:;
																				int32_t v61 = v56; // 0x43188
																				int32_t v62 = v57;
																				if (v26 >= 3) {
																					// 0x43180
																					*(int32_t *)(v25 + 792) = 20;
																					int32_t v63 = g36;
																					v61 = v63;
																					v62 = v63;
																					// branch -> 0x43188
																				}
																				// 0x43188
																				if (v61 == 1) {
																					// 0x43190
																					v24 = 0;
																					v60 = v62;
																					v59 = 1;
																					// branch -> 0x4319c
																				} else {
																					// 0x43198
																					v24 = 2;
																					v60 = v62;
																					v59 = v61;
																					// branch -> 0x4319c
																				}
																			lab_0x4319c_2:;
																				// 0x4319c
																				int32_t v64; // 0x431e0
																				int32_t v65;
																				if (v59 == 1) {
																					// 0x431a4
																					if (g35 == 3) {
																					lab_0x431bc:;
																						int32_t v66 = v59; // 0x431cc
																						int32_t v67 = v60;
																						if (v26 >= 3) {
																							// 0x431c4
																							*(int32_t *)(v25 + 792) = 19;
																							int32_t v68 = g36;
																							v66 = v68;
																							v67 = v68;
																							// branch -> 0x431cc
																						}
																						// 0x431cc
																						if (v66 == 1) {
																							// 0x431d4
																							v24 = 0;
																							v65 = v67;
																							v64 = 1;
																							// branch -> 0x431e0
																						} else {
																							// 0x431dc
																							v24 = 3;
																							v65 = v67;
																							v64 = v66;
																							// branch -> 0x431e0
																						}
																					lab_0x431e0_2:
																						// 0x431e0
																						g35 = v64;
																						v49 = v65;
																						v48 = v64;
																						v46 = v12;
																						// branch -> 0x431f0
																					lab_0x431f0:
																						// 0x431f0
																						v47 = v48;
																						if (v46 <= 3) {
																						lab_0x431f0_2:
																							// 0x431f0
																							if (v26 < 100) {
																								// 0x431f0
																								v29 = v11;
																								v28 = v9;
																								v27 = v46;
																								// branch -> 0x42fc8
																								continue;
																							} else {
																								v47 = v49;
																							}
																						}
																					lab_0x43200:;
																						int32_t v69 = v47; // 0x43270
																						int32_t v70;       // r4
																						if (v47 == 0) {
																							int32_t v71 = v9;                  // 0x43208
																							int32_t v72 = v11;                 // 0x4320c
																							int32_t v73 = v72 + 40 * v71 + v2; // 0x43210
																							g34 = v73;
																							if (*(char *)(v73 - 1) == 10) {
																								// 0x43220
																								if (*(char *)(v73 - 2) == 8) {
																									int32_t v74 = 4 * v26 + v4; // 0x43234
																									v70 = v74;
																									g34 = v72 - 1;
																									*(int32_t *)v74 = v71;
																									*(int32_t *)(v70 + 400) = g34;
																									*(int32_t *)(v70 + 800) = 24;
																									if (g35 == 2) {
																										// 0x43254
																										*(int32_t *)(v70 + 796) = 22;
																										// branch -> 0x4325c
																									}
																									// 0x4325c
																									if (g35 == 3) {
																										// 0x43264
																										*(int32_t *)(v70 + 796) = 21;
																										// branch -> 0x4326c
																									}
																									// 0x4326c
																									v7 = 1;
																									v69 = g36;
																									// branch -> 0x43270
																								} else {
																									v69 = 0;
																								}
																							} else {
																								v69 = 0;
																							}
																						}
																						int32_t v75 = v69; // 0x432e0
																						if (v69 == 1) {
																							int32_t v76 = v9;                  // 0x43278
																							int32_t v77 = v11;                 // 0x4327c
																							int32_t v78 = v77 + 40 * v76 + v2; // 0x43280
																							g34 = v78;
																							if (*(char *)(v78 + 1) == 2) {
																								// 0x43290
																								if (*(char *)(v78 + 2) == 8) {
																									int32_t v79 = 4 * v26 + v4; // 0x432a4
																									v70 = v79;
																									g34 = v77 + 1;
																									*(int32_t *)v79 = v76;
																									*(int32_t *)(v70 + 400) = g34;
																									*(int32_t *)(v70 + 800) = 42;
																									if (g35 == 2) {
																										// 0x432c4
																										*(int32_t *)(v70 + 796) = 20;
																										// branch -> 0x432cc
																									}
																									// 0x432cc
																									if (g35 == 3) {
																										// 0x432d4
																										*(int32_t *)(v70 + 796) = 19;
																										// branch -> 0x432dc
																									}
																									// 0x432dc
																									v7 = 1;
																									v75 = g36;
																									// branch -> 0x432e0
																								} else {
																									v75 = 1;
																								}
																							} else {
																								v75 = 1;
																							}
																						}
																						int32_t v80 = v75; // 0x43350
																						if (v75 == 2) {
																							int32_t v81 = v9;                  // 0x432e8
																							int32_t v82 = v11 + 40 * v81 + v2; // 0x432f0
																							g34 = v82;
																							if (*(char *)(v82 + 40) == 4) {
																								// 0x43300
																								if (*(char *)(v82 + 80) == 8) {
																									int32_t v83 = v81 + 1; // 0x43314
																									g34 = v83;
																									int32_t v84 = 4 * v26 + v4; // 0x43318
																									v70 = v84;
																									*(int32_t *)v84 = v83;
																									*(int32_t *)(v70 + 400) = v11;
																									*(int32_t *)(v70 + 800) = 43;
																									if (g35 == 0) {
																										// 0x43334
																										*(int32_t *)(v70 + 796) = 19;
																										// branch -> 0x4333c
																									}
																									// 0x4333c
																									if (g35 == 1) {
																										// 0x43344
																										*(int32_t *)(v70 + 796) = 21;
																										// branch -> 0x4334c
																									}
																									// 0x4334c
																									v7 = 1;
																									v80 = g36;
																									// branch -> 0x43350
																								} else {
																									v80 = 2;
																								}
																							} else {
																								v80 = 2;
																							}
																						}
																						// 0x43350
																						int32_t v85;
																						if (v80 == 3) {
																							int32_t v86 = v9;                  // 0x43358
																							int32_t v87 = v11 + 40 * v86 + v2; // 0x43360
																							g34 = v87;
																							if (*(char *)(v87 - 40) == 9) {
																								// 0x43370
																								if (*(char *)(v87 - 80) == 8) {
																									int32_t v88 = v86 - 1; // 0x43384
																									g34 = v88;
																									int32_t v89 = 4 * v26 + v4; // 0x43388
																									v70 = v89;
																									*(int32_t *)v89 = v88;
																									*(int32_t *)(v70 + 400) = v11;
																									*(int32_t *)(v70 + 800) = 23;
																									if (g35 == 0) {
																										// 0x433a4
																										*(int32_t *)(v70 + 796) = 20;
																										// branch -> 0x433ac
																									}
																									// 0x433ac
																									if (g35 == 1) {
																										// 0x433b4
																										*(int32_t *)(v70 + 796) = 22;
																										// branch -> 0x433bc
																									}
																									// 0x433bc
																									v7 = 1;
																									v85 = 1;
																									// branch -> 0x433c0
																								lab_0x433c0:;
																									int32_t v90 = v85;
																									if (v85 == 0) {
																										int32_t v91 = v10;
																										if (v91 >= 200) {
																											v90 = 0;
																											// break (via goto) -> 0x433d0
																											goto lab_0x433d0;
																										}
																										v8 = v91;
																										// continue (via goto) -> 0x42e90
																										goto lab_0x42e90;
																									}
																								lab_0x433d0:;
																									int32_t v92 = v90; // 0x433e4
																									if (v90 == 1) {
																										// 0x433d8
																										if (v26 <= 6) {
																											// 0x433e0
																											v92 = 0;
																											// branch -> 0x433e4
																										} else {
																											v92 = 1;
																										}
																									}
																									// 0x433e4
																									int32_t v93; // 0x436b0
																									if (v92 == 1) {
																										// 0x433ec
																										v12 = 0;
																										int32_t v94 = v26; // 0x433f8
																										int32_t v95 = 0;   // 0x433fc131
																										                   // branch -> 0x433f8
																									lab_0x433f8:
																										while (true) {
																											// 0x433f8
																											g37 = v94;
																											v24 = v95 + 1;
																											int32_t v96 = 4 * random(0);           // 0x43410
																											int32_t v97 = v96 + v4;                // 0x43414
																											int32_t v98 = *(int32_t *)(v97 + 800); // 0x43418
																											if (v98 != 15) {
																												// 0x43424
																												if (v98 != 16) {
																												lab_0x4345c_3:;
																													// 0x4345c
																													int32_t *v99;
																													int32_t *v100;
																													if (v98 > 18) {
																														// 0x4345c
																														v99 = (int32_t *)v97;
																														v100 = (int32_t *)(v97 + 400);
																														// branch -> 0x43498
																													} else {
																														int32_t *v101 = (int32_t *)v97;         // 0x43468
																														int32_t *v102 = (int32_t *)(v97 + 400); // 0x4346c
																														int32_t v103 = *v102 + 40 * *v101 + v2; // 0x43478
																														if (*(char *)(v103 - 40) == 7) {
																															// 0x43488
																															if (*(char *)(v103 + 40) == 7) {
																																// 0x43494
																																v12 = 2;
																																v99 = v101;
																																v100 = v102;
																																// branch -> 0x43498
																															} else {
																																v99 = v101;
																																v100 = v102;
																															}
																														} else {
																															v99 = v101;
																															v100 = v102;
																														}
																													}
																													int32_t v104 = *v100; // 0x43498
																													g34 = v4;
																													int32_t v105 = *v99;     // 0x434a0
																													int32_t v106 = v104 - 1; // 0x434a8
																													int32_t v107 = v104 + 1; // 0x434ac
																													int32_t v108 = v105 - 1; // 0x434b0
																													int32_t v109 = v105 + 1; // 0x434b4
																													int32_t v110 = v26;      // 0x4351c3
																													int32_t v111 = v12;
																													int32_t v112;
																													int32_t v113; // 0x43544
																													if (v110 > 0) {
																														int32_t v114 = v111;
																														int32_t v115 = v111;
																														int32_t v116 = 0;  // 0x43518
																														int32_t v117 = v4; // 0x43514
																														int32_t v118;
																														while (true) {
																															// 0x43524
																															v118 = v114;
																															int32_t v119 = v115; // 0x4352443
																															switch (v115) {
																															case 0: {
																																// 0x43524
																																v112 = v114;
																																// branch -> 0x4352c
																															lab_0x4352c:
																																// 0x4352c
																																v113 = v112;
																																if (v112 == 0) {
																																lab_0x4352c_2:;
																																	int32_t v120 = v24;
																																	if (v120 >= 30) {
																																		v113 = 0;
																																		// break (via goto) -> 0x4353c
																																		goto lab_0x4353c_2;
																																	}
																																	v94 = v110;
																																	v95 = v120;
																																	// continue (via goto) -> 0x433f8
																																	goto lab_0x433f8;
																																}
																															lab_0x4353c_2:
																																// 0x4353c
																																if (v113 != 0) {
																																lab_0x43544:;
																																	int32_t v121 = v96 + 800; // 0x43550
																																	if (v113 == 1) {
																																		// 0x4354c
																																		g34 = 44;
																																		*(int32_t *)(v4 + v121) = 44;
																																		// branch -> 0x43570
																																	} else {
																																		// 0x43560
																																		g34 = 45;
																																		*(int32_t *)(v4 + v121) = 45;
																																		// branch -> 0x43570
																																	}
																																	int32_t v122 = v26; // 0x43570
																																	g31++;
																																	if (v122 >= 0) {
																																		int32_t v123 = v122 - 8; // 0x43584
																																		g34 = v123;
																																		int32_t v124 = v122; // 0x43678
																																		int32_t v125 = 0;    // 0x43680
																																		int32_t v126;        // ctr
																																		int32_t v127;        // 0x43690
																																		int32_t v128;        // 0x4369c
																																		int32_t v129;        // 0x436cc
																																		if (v122 >= 8) {
																																			// 0x43590
																																			g34 = v4;
																																			v126 = v122 / 8;
																																			if (v123 >= 0) {
																																				int32_t v130 = 0;  // 0x435ac
																																				int32_t v131 = v4; // 0x435b8
																																				while (true) {
																																					int32_t v132 = v130 + 8;                                         // r26
																																					int32_t v133 = *(int32_t *)(v131 + 800);                         // 0x435b0
																																					int32_t v134 = *(int32_t *)(v131 + 400) + 40 * *(int32_t *)v131; // 0x435bc
																																					*(char *)(v2 + v134) = (char)v133;
																																					int32_t v135 = g34;                                                    // 0x435c4
																																					int32_t v136 = *(int32_t *)(v135 + 804);                               // 0x435c8
																																					int32_t v137 = *(int32_t *)(v135 + 404) + 40 * *(int32_t *)(v135 + 4); // 0x435d4
																																					*(char *)(v2 + v137) = (char)v136;
																																					int32_t v138 = g34;                                                    // 0x435dc
																																					int32_t v139 = *(int32_t *)(v138 + 808);                               // 0x435e0
																																					int32_t v140 = *(int32_t *)(v138 + 408) + 40 * *(int32_t *)(v138 + 8); // 0x435ec
																																					*(char *)(v2 + v140) = (char)v139;
																																					int32_t v141 = g34;                                                     // 0x435f4
																																					int32_t v142 = *(int32_t *)(v141 + 812);                                // 0x435f8
																																					int32_t v143 = *(int32_t *)(v141 + 412) + 40 * *(int32_t *)(v141 + 12); // 0x43604
																																					*(char *)(v2 + v143) = (char)v142;
																																					int32_t v144 = g34;                                                     // 0x4360c
																																					int32_t v145 = *(int32_t *)(v144 + 816);                                // 0x43610
																																					int32_t v146 = *(int32_t *)(v144 + 416) + 40 * *(int32_t *)(v144 + 16); // 0x4361c
																																					*(char *)(v2 + v146) = (char)v145;
																																					int32_t v147 = g34;                                                     // 0x43624
																																					int32_t v148 = *(int32_t *)(v147 + 820);                                // 0x43628
																																					int32_t v149 = *(int32_t *)(v147 + 420) + 40 * *(int32_t *)(v147 + 20); // 0x43634
																																					*(char *)(v2 + v149) = (char)v148;
																																					int32_t v150 = g34;                                                     // 0x4363c
																																					int32_t v151 = *(int32_t *)(v150 + 824);                                // 0x43640
																																					int32_t v152 = *(int32_t *)(v150 + 424) + 40 * *(int32_t *)(v150 + 24); // 0x4364c
																																					*(char *)(v2 + v152) = (char)v151;
																																					int32_t v153 = g34;                      // 0x43654
																																					int32_t v154 = *(int32_t *)(v153 + 828); // 0x43658
																																					g34 = v153 + 32;
																																					int32_t v155 = *(int32_t *)(v153 + 428) + 40 * *(int32_t *)(v153 + 28); // 0x43668
																																					*(char *)(v2 + v155) = (char)v154;
																																					int32_t v156 = v126 - 1; // 0x43670
																																					v126 = v156;
																																					if (v156 == 0) {
																																						// 0x436c4
																																						v124 = v26;
																																						v125 = v132;
																																						// branch -> 0x436c4
																																						// 0x436c4
																																						v129 = 4 * v125 + v4;
																																						v126 = v124 + 1 - v125;
																																						if (v125 <= v124) {
																																							v127 = v125;
																																							v128 = v129;
																																						lab_0x4368c:
																																							while (true) {
																																								int32_t v157 = *(int32_t *)(v128 + 800); // 0x43694
																																								int32_t v158 = 40 * *(int32_t *)v128;    // 0x43698
																																								g34 = v158;
																																								int32_t v159 = *(int32_t *)(v128 + 400) + v158; // 0x436a4
																																								*(char *)(v2 + v159) = (char)v157;
																																								int32_t v160 = v126 - 1; // 0x436ac
																																								v126 = v160;
																																								if (v160 != 0) {
																																									// 0x4368c
																																									v127++;
																																									v128 += 4;
																																									// branch -> 0x4368c
																																									continue;
																																								}
																																							}
																																							// 0x4353c
																																							if (v113 != 0) {
																																								goto lab_0x43544;
																																							}
																																							// 0x436b0
																																							v93 = v10;
																																							if (v93 > 199) {
																																								// 0x436d4
																																								g10 = v1;
																																								result = g34;
																																								return result;
																																							}
																																						lab_0x436b0_4:
																																							// 0x436b0
																																							if (g31 >= 4) {
																																								// break (via goto) -> 0x436d4
																																								goto lab_0x436d4;
																																							}
																																							v6 = v93;
																																							// continue (via goto) -> 0x42e90
																																							goto lab_0x42e90_2;
																																						}
																																					lab_0x436b0_2:
																																						// 0x436b0
																																						v93 = v10;
																																						if (v93 <= 199) {
																																							goto lab_0x436b0_4;
																																						}
																																						// 0x436d4
																																						g10 = v1;
																																						return g34;
																																					}
																																					// 0x435a8
																																					v130 = v132;
																																					v131 = g34;
																																					// branch -> 0x435a8
																																				}
																																				// 0x436d4
																																				g10 = v1;
																																				result = g34;
																																				return result;
																																			}
																																			v124 = v122;
																																			v125 = 0;
																																		}
																																		// 0x436c4
																																		v129 = 4 * v125 + v4;
																																		v126 = v124 + 1 - v125;
																																		if (v125 > v124) {
																																			goto lab_0x436b0_2;
																																		}
																																		v127 = v125;
																																		v128 = v129;
																																		goto lab_0x4368c;
																																	}
																																}
																																// 0x436b0
																																v93 = v10;
																																if (v93 <= 199) {
																																	goto lab_0x436b0_4;
																																}
																																// 0x436d4
																																g10 = v1;
																																return g34;
																															}
																															case 1: {
																																int32_t v161 = *(int32_t *)(v117 + 400); // 0x434c4
																																if (v106 == v161 || v107 == v161) {
																																	// 0x434d8
																																	if (v105 == *(int32_t *)v117) {
																																		// 0x434e4
																																		v12 = 0;
																																		v118 = 0;
																																		v119 = 0;
																																		// branch -> 0x43514
																																	} else {
																																		v118 = v114;
																																		v119 = 1;
																																	}
																																} else {
																																	v118 = v114;
																																	v119 = 1;
																																}
																																break;
																															}
																															case 2: {
																																int32_t v162 = *(int32_t *)v117; // 0x434f0
																																if (v108 == v162 || v109 == v162) {
																																	// 0x43504
																																	if (v104 == *(int32_t *)(v117 + 400)) {
																																		// 0x43510
																																		v12 = 0;
																																		v118 = 0;
																																		v119 = 0;
																																		// branch -> 0x43514
																																	} else {
																																		v118 = v114;
																																		v119 = 2;
																																	}
																																} else {
																																	v118 = v114;
																																	v119 = 2;
																																}
																																break;
																															}
																															}
																															int32_t v163 = v117 + 4; // 0x43514
																															g34 = v163;
																															int32_t v164 = v116 + 1; // 0x43518
																															if (v164 >= v110) {
																																// break (via goto) -> 0x4351c
																																goto lab_0x4351c;
																															}
																															v114 = v118;
																															v115 = v119;
																															v116 = v164;
																															v117 = v163;
																															// continue -> 0x43524
																														}
																													lab_0x4351c:
																														// 0x4351c
																														v112 = v118;
																														// branch -> 0x4352c
																														goto lab_0x4352c;
																													} else {
																														v112 = v111;
																														// 0x4352c
																														if (v112 == 0) {
																															goto lab_0x4352c_2;
																														}
																														v113 = v112;
																														goto lab_0x4353c_2;
																													}
																												}
																											}
																											int32_t v165 = *(int32_t *)(v97 + 400);          // 0x43430
																											int32_t v166 = v165 + 40 * *(int32_t *)v97 + v2; // 0x4343c
																											if (*(char *)(v166 - 1) != 7) {
																												goto lab_0x4345c_3;
																											}
																											// 0x4344c
																											if (*(char *)(v166 + 1) != 7) {
																												goto lab_0x4345c_3;
																											}
																											// 0x43458
																											v12 = 1;
																											// branch -> 0x4345c
																											goto lab_0x4345c_3;
																										}
																									}
																									// 0x436b0
																									v93 = v10;
																									if (v93 <= 199) {
																										goto lab_0x436b0_4;
																									}
																									// 0x436d4
																									g10 = v1;
																									return g34;
																								}
																							}
																						}
																						// 0x433c0
																						v85 = v7;
																						// branch -> 0x433c0
																						goto lab_0x433c0;
																					}
																				}
																				// 0x431ac
																				if (v59 != 2) {
																					v65 = v60;
																					v64 = v59;
																					goto lab_0x431e0_2;
																				}
																				// 0x431b4
																				if (g35 == 0) {
																					goto lab_0x431bc;
																				}
																				v65 = v60;
																				v64 = 2;
																				goto lab_0x431e0_2;
																			}
																		}
																		// 0x43168
																		if (v56 != 3) {
																			v60 = v57;
																			v59 = v56;
																			goto lab_0x4319c_2;
																		}
																		// 0x43170
																		if (g35 == 0) {
																			goto lab_0x43178;
																		}
																		v60 = v57;
																		v59 = 3;
																		goto lab_0x4319c_2;
																	}
																}
																// 0x43124
																if (v54 != 2) {
																	v56 = v54;
																	v57 = v54;
																	goto lab_0x43158_2;
																}
																// 0x4312c
																if (g35 == 1) {
																	goto lab_0x43134;
																}
																v56 = 2;
																v57 = v54;
																goto lab_0x43158_2;
															}
														}
														int32_t v167 = g36; // 0x430e0
														if (v167 != 3) {
															v54 = v167;
															goto lab_0x43114_2;
														}
														// 0x430e8
														if (g35 == 1) {
															goto lab_0x430f0;
														}
														v54 = 3;
														goto lab_0x43114_2;
													} else {
														// 0x431e8
														v9 = v30;
														v11 = v31;
														v49 = v37;
														v48 = v37;
														v46 = v34;
														// branch -> 0x431f0
														goto lab_0x431f0;
													}
													// 0x431f0
													if (v46 > 3) {
														v47 = v48;
														goto lab_0x43200;
													}
													goto lab_0x431f0_2;
												}
											}
											// 0x42fa4
											v3 = v14;
											v26 = 1;
											v25 = v5;
											v24 = 4;
											v12 = 0;
											v29 = v13;
											v28 = v14;
											v27 = 0;
											// branch -> 0x42fc8
											goto lab_0x42fc8_2;
										}
										// 0x42fa4
										v3 = v14;
										v26 = 1;
										v25 = v5;
										v24 = 4;
										v12 = 0;
										v29 = v13;
										v28 = v14;
										v27 = 0;
										// branch -> 0x42fc8
										goto lab_0x42fc8_2;
									} else {
										// 0x42f18
										if (v16 < 29) {
											goto lab_0x42f28;
										}
										goto lab_0x42f20;
									}
								lab_0x42f28_2:
									// 0x42f28
									if (v15 <= 99) {
										goto lab_0x42f30_2;
									}
									// 0x436d4
									g10 = v1;
									return g34;
								}
							}
						}
					}
				} else {
					// 0x42f18
					if (v16 < 29) {
						goto lab_0x42f28_2;
					}
					goto lab_0x42f20_2;
				}
				// 0x42f28
				if (v15 <= 99) {
					goto lab_0x42f30_2;
				}
			lab_0x436d4:
				// 0x436d4
				g10 = v1;
				return g34;
			}
		}
	}
}

// Address range: 0x436e8 - 0x43920
int32_t function_436e8(int32_t a1, int32_t a2, int32_t *a3)
{
	int32_t v1 = g36;         // 0x436e8
	int32_t v2 = g10;         // 0x436ec
	int32_t v3 = g35;         // 0x436f0
	int32_t v4 = (int32_t)a3; // 0x436f4
	g35 = v4;
	int32_t v5 = g33; // 0x436f8
	g33 = a2;
	int32_t v6 = g32; // 0x43700
	g32 = a1;
	if (v4 < 41) {
		// 0x43724
		if (a1 >= 0) {
			// 0x4372c
			if (a2 >= 0) {
				// 0x43734
				if (a1 <= 39) {
					// 0x4373c
					if (a2 < 40) {
						int32_t v7 = 40 * a1 + a2 + *(int32_t *)(g23 - 0x77cc); // 0x43758
						unsigned char v8 = *(char *)v7;                         // 0x4375c
						int32_t v9 = v8;                                        // 0x4375c
						if (__asm_rlwinm_(v9, 0, 24, 24) != 0) {
							// 0x43768
							// branch -> 0x43900
							// 0x43900
							g36 = v1;
							g10 = v2;
							g35 = v3;
							g33 = v5;
							g32 = v6;
							return 0;
						}
						// 0x43770
						int32_t result; // 0x4391c
						if (v8 < 16) {
							// 0x43780
							*(char *)v7 = v8 | -128;
							g36 = g23 - 826 + v9;
							*(int32_t *)g35 = v7 + 1;
							if (__asm_rlwinm_((int32_t) * (char *)g36, 0, 28, 28) != 0) {
								// 0x437a8
								if (function_436e8(g32, g33 - 1, (int32_t *)g35) == 1) {
									// 0x437c0
									// branch -> 0x43900
									// 0x43900
									g36 = v1;
									g10 = v2;
									g35 = v3;
									g33 = v5;
									g32 = v6;
									return 1;
								}
							}
							// 0x437c8
							if (__asm_rlwinm_((int32_t) * (char *)g36, 0, 29, 29) != 0) {
								// 0x437d4
								if (function_436e8(g32, g33 + 1, (int32_t *)g35) == 1) {
									// 0x437ec
									// branch -> 0x43900
									// 0x43900
									g36 = v1;
									g10 = v2;
									g35 = v3;
									g33 = v5;
									g32 = v6;
									return 1;
								}
							}
							// 0x437f4
							if (__asm_rlwinm_((int32_t) * (char *)g36, 0, 30, 30) != 0) {
								// 0x43800
								if (function_436e8(g32 + 1, g33, (int32_t *)g35) == 1) {
									// 0x43818
									// branch -> 0x43900
									// 0x43900
									g36 = v1;
									g10 = v2;
									g35 = v3;
									g33 = v5;
									g32 = v6;
									return 1;
								}
							}
							int32_t v10 = g36; // 0x43820
							if (*(char *)v10 % 2 != 0) {
								// 0x4382c
								if (function_436e8(g32 - 1, g33, (int32_t *)g35) == 1) {
									// 0x43844
									result = 1;
									// branch -> 0x43900
								} else {
									// 0x4382c
									// branch -> 0x4384c
									// 0x4384c
									if (__asm_rlwinm_((int32_t) * (char *)g36, 0, 24, 24) != 0) {
										// 0x43858
										if (DRLG_L3SpawnEdge(g32, g33 - 1, (int32_t *)g35) == 1) {
											// 0x43870
											// branch -> 0x43900
											// 0x43900
											g36 = v1;
											g10 = v2;
											g35 = v3;
											g33 = v5;
											g32 = v6;
											return 1;
										}
									}
									// 0x43878
									if (__asm_rlwinm_((int32_t) * (char *)g36, 0, 25, 25) != 0) {
										// 0x43884
										if (DRLG_L3SpawnEdge(g32, g33 + 1, (int32_t *)g35) == 1) {
											// 0x4389c
											// branch -> 0x43900
											// 0x43900
											g36 = v1;
											g10 = v2;
											g35 = v3;
											g33 = v5;
											g32 = v6;
											return 1;
										}
									}
									// 0x438a4
									if (__asm_rlwinm_((int32_t) * (char *)g36, 0, 26, 26) != 0) {
										// 0x438b0
										if (DRLG_L3SpawnEdge(g32 + 1, g33, (int32_t *)g35) == 1) {
											// 0x438c8
											// branch -> 0x43900
											// 0x43900
											g36 = v1;
											g10 = v2;
											g35 = v3;
											g33 = v5;
											g32 = v6;
											return 1;
										}
									}
									// 0x438d0
									if (__asm_rlwinm_((int32_t) * (char *)g36, 0, 27, 27) != 0) {
										// 0x438dc
										if (DRLG_L3SpawnEdge(g32 - 1, g33, (int32_t *)g35) == 1) {
											// 0x438f4
											// branch -> 0x43900
											// 0x43900
											g36 = v1;
											g10 = v2;
											g35 = v3;
											g33 = v5;
											g32 = v6;
											return 1;
										}
									}
									// 0x438fc
									result = 0;
									// branch -> 0x43900
								}
								// 0x43900
								g36 = v1;
								g10 = v2;
								g35 = v3;
								g33 = v5;
								g32 = v6;
								return result;
							}
							// 0x4384c
							if (__asm_rlwinm_((int32_t) * (char *)v10, 0, 24, 24) != 0) {
								// 0x43858
								if (DRLG_L3SpawnEdge(g32, g33 - 1, (int32_t *)g35) == 1) {
									// 0x43870
									// branch -> 0x43900
									// 0x43900
									g36 = v1;
									g10 = v2;
									g35 = v3;
									g33 = v5;
									g32 = v6;
									return 1;
								}
							}
							// 0x43878
							if (__asm_rlwinm_((int32_t) * (char *)g36, 0, 25, 25) != 0) {
								// 0x43884
								if (DRLG_L3SpawnEdge(g32, g33 + 1, (int32_t *)g35) == 1) {
									// 0x4389c
									// branch -> 0x43900
									// 0x43900
									g36 = v1;
									g10 = v2;
									g35 = v3;
									g33 = v5;
									g32 = v6;
									return 1;
								}
							}
							// 0x438a4
							if (__asm_rlwinm_((int32_t) * (char *)g36, 0, 26, 26) != 0) {
								// 0x438b0
								if (DRLG_L3SpawnEdge(g32 + 1, g33, (int32_t *)g35) == 1) {
									// 0x438c8
									// branch -> 0x43900
									// 0x43900
									g36 = v1;
									g10 = v2;
									g35 = v3;
									g33 = v5;
									g32 = v6;
									return 1;
								}
							}
							// 0x438d0
							if (__asm_rlwinm_((int32_t) * (char *)g36, 0, 27, 27) != 0) {
								// 0x438dc
								if (DRLG_L3SpawnEdge(g32 - 1, g33, (int32_t *)g35) == 1) {
									// 0x438f4
									// branch -> 0x43900
									// 0x43900
									g36 = v1;
									g10 = v2;
									g35 = v3;
									g33 = v5;
									g32 = v6;
									return 1;
								}
							}
							// 0x438fc
							result = 0;
							// branch -> 0x43900
						} else {
							// 0x43778
							result = 1;
							// branch -> 0x43900
						}
						// 0x43900
						g36 = v1;
						g10 = v2;
						g35 = v3;
						g33 = v5;
						g32 = v6;
						return result;
					}
				}
			}
		}
		// 0x43744
		// branch -> 0x43900
	}
	// 0x43900
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v5;
	g32 = v6;
	return 1;
}

// Address range: 0x43920 - 0x43b30
int32_t DRLG_L3SpawnEdge(int32_t a1, int32_t a2, int32_t *a3)
{
	int32_t v1 = g36;         // 0x43920
	int32_t v2 = g10;         // 0x43924
	int32_t v3 = (int32_t)a3; // 0x43928
	g36 = v3;
	int32_t v4 = g35; // 0x4392c
	g35 = a2;
	int32_t v5 = g33; // 0x43934
	g33 = a1;
	int32_t v6 = g32; // 0x4393c
	if (v3 < 41) {
		// 0x4395c
		if (a1 >= 0) {
			// 0x43964
			if (a2 >= 0) {
				// 0x4396c
				if (a1 <= 39) {
					// 0x43974
					if (a2 < 40) {
						int32_t v7 = 40 * a1 + a2 + *(int32_t *)(g23 - 0x77cc); // 0x43990
						unsigned char v8 = *(char *)v7;                         // 0x43994
						int32_t v9 = v8;                                        // 0x43994
						if (__asm_rlwinm_(v9, 0, 24, 24) != 0) {
							// 0x439a0
							// branch -> 0x43b10
							// 0x43b10
							g36 = v1;
							g10 = v2;
							g35 = v4;
							g33 = v5;
							g32 = v6;
							return 0;
						}
						// 0x439a8
						if (v8 >= 16) {
							// 0x439b0
							// branch -> 0x43b10
							// 0x43b10
							g36 = v1;
							g10 = v2;
							g35 = v4;
							g33 = v5;
							g32 = v6;
							return 1;
						}
						// 0x439b8
						*(char *)v7 = v8 | -128;
						*(int32_t *)g36 = v7 + 1;
						if (v8 == 8) {
							// 0x43a8c
							if (DRLG_L3SpawnEdge(g33 + 1, g35, (int32_t *)g36) == 1 || DRLG_L3SpawnEdge(g33 - 1, g35, (int32_t *)g36) == 1 || DRLG_L3SpawnEdge(g33, g35 + 1, (int32_t *)g36) == 1) {
								// 0x43aa4
								// branch -> 0x43b10
								// 0x43b10
								g36 = v1;
								g10 = v2;
								g35 = v4;
								g33 = v5;
								g32 = v6;
								return 1;
							}
							// 0x43aec
							int32_t result; // 0x43b2c
							if (DRLG_L3SpawnEdge(g33, g35 - 1, (int32_t *)g36) == 1) {
								// 0x43b04
								result = 1;
								// branch -> 0x43b10
							} else {
								// 0x43b0c
								result = 0;
								// branch -> 0x43b10
							}
							// 0x43b10
							g36 = v1;
							g10 = v2;
							g35 = v4;
							g33 = v5;
							g32 = v6;
							return result;
						}
						int32_t v10 = g23 - 811 + v9; // 0x439d8
						g32 = v10;
						if (__asm_rlwinm_((int32_t) * (char *)v10, 0, 28, 28) != 0) {
							// 0x439e8
							if (function_436e8(g33, g35 - 1, (int32_t *)g36) == 1) {
								// 0x43a00
								// branch -> 0x43b10
								// 0x43b10
								g36 = v1;
								g10 = v2;
								g35 = v4;
								g33 = v5;
								g32 = v6;
								return 1;
							}
						}
						// 0x43a08
						if (__asm_rlwinm_((int32_t) * (char *)g32, 0, 29, 29) != 0) {
							// 0x43a14
							if (function_436e8(g33, g35 + 1, (int32_t *)g36) == 1) {
								// 0x43a2c
								// branch -> 0x43b10
								// 0x43b10
								g36 = v1;
								g10 = v2;
								g35 = v4;
								g33 = v5;
								g32 = v6;
								return 1;
							}
						}
						// 0x43a34
						if (__asm_rlwinm_((int32_t) * (char *)g32, 0, 30, 30) != 0) {
							// 0x43a40
							if (function_436e8(g33 + 1, g35, (int32_t *)g36) == 1) {
								// 0x43a58
								// branch -> 0x43b10
								// 0x43b10
								g36 = v1;
								g10 = v2;
								g35 = v4;
								g33 = v5;
								g32 = v6;
								return 1;
							}
						}
						// 0x43a60
						if (*(char *)g32 % 2 != 0) {
							// 0x43a6c
							if (function_436e8(g33 - 1, g35, (int32_t *)g36) == 1) {
								// 0x43a84
								// branch -> 0x43b10
								// 0x43b10
								g36 = v1;
								g10 = v2;
								g35 = v4;
								g33 = v5;
								g32 = v6;
								return 1;
							}
						}
						// 0x43b0c
						// branch -> 0x43b10
						// 0x43b10
						g36 = v1;
						g10 = v2;
						g35 = v4;
						g33 = v5;
						g32 = v6;
						return 0;
					}
				}
			}
		}
		// 0x4397c
		// branch -> 0x43b10
	}
	// 0x43b10
	g36 = v1;
	g10 = v2;
	g35 = v4;
	g33 = v5;
	g32 = v6;
	return 1;
}

// Address range: 0x43b30 - 0x43d20
int32_t DRLG_L3Pool(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x43b38
	g35 = v1;
	int32_t v2 = 0; // r24
	g33 = g23 - 796;
	g31 = v1;
	int32_t v3 = 0; // 0x43b54
	// branch -> 0x43b50
	while (true) {
		// 0x43b50
		g32 = v1;
		g36 = v3 + 1;
		g29 = 0;
		int32_t v4 = v3; // 0x43cfc36
		int32_t v5 = 0;  // 0x43b6c
		int32_t v6 = v1; // 0x43b70
		// branch -> 0x43b5c
		int32_t v7; // 0x43cfc
		while (true) {
			char *v8 = (char *)v6; // 0x43b5c
			v7 = v4;
			int32_t v9 = v6;  // 0x43cf0
			int32_t v10 = v5; // 0x43cec
			int32_t v11;      // 0x43cec
			int32_t v12;      // 0x43cf0
			if (*v8 == 8) {
				uint32_t v13 = v5 + 1; // 0x43b6c
				*v8 = -120;
				int32_t v14 = 1; // bp-40
				int32_t v15 = 1; // 0x43ba0
				if (v13 <= 39) {
					// 0x43b84
					v15 = DRLG_L3SpawnEdge(v13, v2, &v14);
					// branch -> 0x43b98
				}
				uint32_t v16 = g29 - 1; // 0x43b98
				int32_t v17 = 1;        // 0x43bc8
				if (v16 >= 1) {
					// 0x43ba0
					if (v15 == 0) {
						// 0x43ba8
						v17 = DRLG_L3SpawnEdge(v16, v2, &v14);
						// branch -> 0x43bc0
					} else {
						v17 = 1;
					}
				}
				uint32_t v18 = g36; // 0x43bc0
				int32_t v19 = 1;    // 0x43bf0
				if (v18 <= 39) {
					// 0x43bc8
					if (v17 == 0) {
						// 0x43bd0
						v19 = DRLG_L3SpawnEdge(g29, v18, &v14);
						// branch -> 0x43be8
					} else {
						v19 = 1;
					}
				}
				uint32_t v20 = v2 - 1; // 0x43be8
				int32_t v21 = 1;
				if (v20 >= 1) {
					// 0x43bf0
					if (v19 == 0) {
						// 0x43bf8
						v21 = DRLG_L3SpawnEdge(g29, v20, &v14);
						// branch -> 0x43c14
					} else {
						v21 = 1;
					}
				}
				int32_t v22 = v21; // r26
				g37 = 100;
				g34 = random(0);
				int32_t v23 = v14;       // 0x43c20
				int32_t v24 = v2;        // 0x43c24
				int32_t v25 = v24 - v23; // 0x43c24
				int32_t v26 = v25;       // r7
				int32_t v27 = g35 + v25; // 0x43c2c
				int32_t v28 = g29;
				int32_t v29 = v24; // 0x43cfc37
				int32_t v30;
				if (v25 < v24 + v23) {
					int32_t v31 = v28; // 0x43cc85
					int32_t v32;       // 0x43ce0
					while (true) {
						int32_t v33 = v31 - v23;      // 0x43c34
						int32_t v34 = v33;            // r8
						int32_t v35 = 40 * v33 + v27; // 0x43c40
						v32 = v24;
						int32_t v36 = v23; // 0x43cdc
						int32_t v37 = v25; // 0x43cd8
						int32_t v38 = v31; // 0x43c3423
						if (v33 < v23 + v31) {
							int32_t v39; // 0x43cc8
							while (true) {
								unsigned char v40 = *(char *)v35; // 0x43c48
								if (__asm_rlwinm_((int32_t)v40, 0, 24, 24) != 0) {
									uint32_t v41 = v26; // 0x43c54
									if (v41 >= 0) {
										// 0x43c5c
										if (v41 <= 39) {
											uint32_t v42 = v34; // 0x43c64
											if (v42 >= 0) {
												// 0x43c6c
												if (v42 <= 39) {
													// 0x43c74
													*(char *)v35 = v40 % 128;
													if (v14 >= 5) {
														// 0x43c88
														if (g34 <= 24) {
															// 0x43c90
															if (v22 == 0) {
																char *v43 = (char *)v35;                            // 0x43c98
																unsigned char v44 = *(char *)(g33 + (int32_t)*v43); // 0x43c9c
																if (v44 != 0) {
																	// 0x43ca8
																	if (v44 <= 37) {
																		// 0x43cb0
																		*v43 = v44;
																		// branch -> 0x43cb4
																	}
																}
																// 0x43cb4
																*(char *)(g23 - 0x4ef8) = 1;
																// branch -> 0x43cbc
															}
														}
													}
												}
											}
										}
									}
								}
								int32_t v45 = v35 + 40; // 0x43cbc
								int32_t v46 = v34 + 1;  // 0x43cc0
								v34 = v46;
								v39 = g29;
								if (v46 >= v39 + v14) {
									// break -> 0x43cc4
									break;
								}
								v35 = v45;
								// continue -> 0x43c48
							}
							// 0x43cc4
							v32 = v2;
							v36 = v14;
							v37 = v26;
							v38 = v39;
							// branch -> 0x43cd4
						}
						int32_t v47 = v27 + 1; // 0x43cd4
						int32_t v48 = v37 + 1; // 0x43cd8
						v26 = v48;
						if (v48 >= v36 + v32) {
							// break -> 0x43cec
							break;
						}
						v24 = v32;
						v25 = v48;
						v27 = v47;
						v31 = v38;
						v23 = v36;
						// continue -> 0x43c34
					}
					// 0x43cec
					v7 = v32;
					// branch -> 0x43cec
				lab_0x43cec:
					// 0x43cec
					v11 = v28 + 1;
					g29 = v11;
					v12 = v30 + 40;
					g32 = v12;
					if (v11 >= 40) {
						// break -> 0x43cfc
						break;
					}
					v4 = v7;
					v5 = v11;
					v6 = v12;
					// continue -> 0x43b5c
					continue;
				}
				// 0x43cec
				v30 = g32;
				v7 = v29;
				// branch -> 0x43cec
				goto lab_0x43cec;
			}
			// 0x43cec
			v11 = v10 + 1;
			g29 = v11;
			v12 = v9 + 40;
			g32 = v12;
			if (v11 >= 40) {
				// break -> 0x43cfc
				break;
			}
			v4 = v7;
			v5 = v11;
			v6 = v12;
			// continue -> 0x43b5c
		}
		int32_t v49 = v7 + 1; // 0x43cfc
		v2 = v49;
		int32_t v50 = g31 + 1; // 0x43d00
		g31 = v50;
		if (v49 >= 40) {
			// break -> 0x43d0c
			break;
		}
		v3 = v49;
		v1 = v50;
		// continue -> 0x43b50
	}
	// 0x43d0c
	return g34;
}

// Address range: 0x43d20 - 0x43e04
int32_t DRLG_L3PoolFix(int32_t a1)
{
	int32_t v1 = 0;                          // r5
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x43d24
	// branch -> 0x43d28
	int32_t result; // 0x43de8
	while (true) {
		int32_t v3 = 40; // ctr
		int32_t v4 = v2; // r3
		int32_t v5 = 40; // 0x43dec4
		int32_t v6 = v2; // 0x43de4
		// branch -> 0x43d34
		while (true) {
			char *v7 = (char *)v6; // 0x43d34
			int32_t v8 = v5;       // 0x43dec
			int32_t v9 = v6;       // 0x43de8
			int32_t v10;           // 0x43dec
			if (*v7 == 8) {
				unsigned char v11 = *(char *)(v6 - 41); // 0x43d40
				if (v11 >= 25) {
					// 0x43d4c
					if (v11 <= 41) {
						unsigned char v12 = *(char *)(v6 - 40); // 0x43d54
						if (v12 >= 25) {
							// 0x43d60
							if (v12 <= 41) {
								unsigned char v13 = *(char *)(v6 - 39); // 0x43d68
								if (v13 >= 25) {
									// 0x43d74
									if (v13 <= 41) {
										unsigned char v14 = *(char *)(v6 - 1); // 0x43d7c
										if (v14 >= 25) {
											// 0x43d88
											if (v14 <= 41) {
												unsigned char v15 = *(char *)(v6 + 1); // 0x43d90
												if (v15 >= 25) {
													// 0x43d9c
													if (v15 <= 41) {
														unsigned char v16 = *(char *)(v6 + 39); // 0x43da4
														if (v16 >= 25) {
															// 0x43db0
															if (v16 <= 41) {
																unsigned char v17 = *(char *)(v6 + 40); // 0x43db8
																if (v17 >= 25) {
																	// 0x43dc4
																	if (v17 <= 41) {
																		unsigned char v18 = *(char *)(v6 + 41); // 0x43dcc
																		if (v18 >= 25) {
																			// 0x43dd8
																			if (v18 <= 41) {
																				// 0x43de0
																				*v7 = 33;
																				v8 = v3;
																				v9 = v4;
																				// branch -> 0x43de8
																			} else {
																				v8 = v5;
																				v9 = v6;
																			}
																			// 0x43de8
																			result = v9 + 40;
																			v4 = result;
																			v10 = v8 - 1;
																			v3 = v10;
																			if (v10 == 0) {
																				// break -> 0x43df0
																				break;
																			}
																			v5 = v10;
																			v6 = result;
																			// continue -> 0x43d34
																			continue;
																		}
																		// 0x43de8
																		result = v6 + 40;
																		v4 = result;
																		v10 = v5 - 1;
																		v3 = v10;
																		if (v10 == 0) {
																			// break -> 0x43df0
																			break;
																		}
																		v5 = v10;
																		v6 = result;
																		// continue -> 0x43d34
																		continue;
																	}
																	// 0x43de8
																	result = v6 + 40;
																	v4 = result;
																	v10 = v5 - 1;
																	v3 = v10;
																	if (v10 == 0) {
																		// break -> 0x43df0
																		break;
																	}
																	v5 = v10;
																	v6 = result;
																	// continue -> 0x43d34
																	continue;
																}
																// 0x43de8
																result = v6 + 40;
																v4 = result;
																v10 = v5 - 1;
																v3 = v10;
																if (v10 == 0) {
																	// break -> 0x43df0
																	break;
																}
																v5 = v10;
																v6 = result;
																// continue -> 0x43d34
																continue;
															}
															// 0x43de8
															result = v6 + 40;
															v4 = result;
															v10 = v5 - 1;
															v3 = v10;
															if (v10 == 0) {
																// break -> 0x43df0
																break;
															}
															v5 = v10;
															v6 = result;
															// continue -> 0x43d34
															continue;
														}
														// 0x43de8
														result = v6 + 40;
														v4 = result;
														v10 = v5 - 1;
														v3 = v10;
														if (v10 == 0) {
															// break -> 0x43df0
															break;
														}
														v5 = v10;
														v6 = result;
														// continue -> 0x43d34
														continue;
													}
													// 0x43de8
													result = v6 + 40;
													v4 = result;
													v10 = v5 - 1;
													v3 = v10;
													if (v10 == 0) {
														// break -> 0x43df0
														break;
													}
													v5 = v10;
													v6 = result;
													// continue -> 0x43d34
													continue;
												}
												// 0x43de8
												result = v6 + 40;
												v4 = result;
												v10 = v5 - 1;
												v3 = v10;
												if (v10 == 0) {
													// break -> 0x43df0
													break;
												}
												v5 = v10;
												v6 = result;
												// continue -> 0x43d34
												continue;
											}
											// 0x43de8
											result = v6 + 40;
											v4 = result;
											v10 = v5 - 1;
											v3 = v10;
											if (v10 == 0) {
												// break -> 0x43df0
												break;
											}
											v5 = v10;
											v6 = result;
											// continue -> 0x43d34
											continue;
										}
										// 0x43de8
										result = v6 + 40;
										v4 = result;
										v10 = v5 - 1;
										v3 = v10;
										if (v10 == 0) {
											// break -> 0x43df0
											break;
										}
										v5 = v10;
										v6 = result;
										// continue -> 0x43d34
										continue;
									}
									// 0x43de8
									result = v6 + 40;
									v4 = result;
									v10 = v5 - 1;
									v3 = v10;
									if (v10 == 0) {
										// break -> 0x43df0
										break;
									}
									v5 = v10;
									v6 = result;
									// continue -> 0x43d34
									continue;
								}
								// 0x43de8
								result = v6 + 40;
								v4 = result;
								v10 = v5 - 1;
								v3 = v10;
								if (v10 == 0) {
									// break -> 0x43df0
									break;
								}
								v5 = v10;
								v6 = result;
								// continue -> 0x43d34
								continue;
							}
							// 0x43de8
							result = v6 + 40;
							v4 = result;
							v10 = v5 - 1;
							v3 = v10;
							if (v10 == 0) {
								// break -> 0x43df0
								break;
							}
							v5 = v10;
							v6 = result;
							// continue -> 0x43d34
							continue;
						}
						// 0x43de8
						result = v6 + 40;
						v4 = result;
						v10 = v5 - 1;
						v3 = v10;
						if (v10 == 0) {
							// break -> 0x43df0
							break;
						}
						v5 = v10;
						v6 = result;
						// continue -> 0x43d34
						continue;
					}
					// 0x43de8
					result = v6 + 40;
					v4 = result;
					v10 = v5 - 1;
					v3 = v10;
					if (v10 == 0) {
						// break -> 0x43df0
						break;
					}
					v5 = v10;
					v6 = result;
					// continue -> 0x43d34
					continue;
				}
				// 0x43de8
				result = v6 + 40;
				v4 = result;
				v10 = v5 - 1;
				v3 = v10;
				if (v10 == 0) {
					// break -> 0x43df0
					break;
				}
				v5 = v10;
				v6 = result;
				// continue -> 0x43d34
				continue;
			}
			// 0x43de8
			result = v9 + 40;
			v4 = result;
			v10 = v8 - 1;
			v3 = v10;
			if (v10 == 0) {
				// break -> 0x43df0
				break;
			}
			v5 = v10;
			v6 = result;
			// continue -> 0x43d34
		}
		int32_t v19 = v1 + 1; // 0x43df0
		v1 = v19;
		if (v19 >= 40) {
			// break -> 0x43e00
			break;
		}
		v2++;
		// continue -> 0x43d28
	}
	// 0x43e00
	return result;
}

// Address range: 0x43e04 - 0x440d8
int32_t DRLG_L3PlaceMiniSet(char *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x43e08
	g37 = a3 - a2;
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // r23
	int32_t v3 = (int32_t)a1;                // 0x43e1c
	g28 = v3;
	g26 = a4;
	int32_t v4 = v3 / 0x1000000;
	g35 = v4;
	int32_t v5 = (int32_t) * (char *)(v3 + 1); // 0x43e34
	g33 = v5;
	int32_t v6 = 1;
	if (a3 != a2) {
		// 0x43e4c
		a4 = g26;
		v4 = g35;
		v5 = g33;
		v6 = a2 + random(0);
		// branch -> 0x43e58
	}
	int32_t v7 = 40 - v4; // 0x43e64
	g29 = v7;
	int32_t v8 = v5 * v4 + 2; // r13
	int32_t v9 = 40 - v5;     // r26
	int32_t v10 = 0;          // r15
	int32_t v11;              // 0x44078
	int32_t v12;              // 0x440a4
	if (v6 > 0) {
		while (true) {
			// 0x43e80
			g37 = v7;
			g36 = random(0);
			g37 = v9;
			int32_t v13 = random(0); // 0x43e98
			g32 = v13;
			int32_t v14 = 0; // 0x43eb098
			// branch -> 0x43eac
			while (true) {
				// 0x43eac
				g31 = v14 + 1;
				int32_t v15 = v13; // 0x43f00
				int32_t v16 = 1;   // 0x43fb033
				if (g26 != -1) {
					uint32_t v17 = g36; // 0x43ebc
					if (v17 >= a4 - v4) {
						// 0x43ec4
						if (v17 <= a4 + 12) {
							// 0x43ecc
							g37 = g29;
							g36 = random(0);
							g37 = v9;
							int32_t v18 = random(0); // 0x43ee4
							g32 = v18;
							v15 = v18;
							v16 = 0;
							// branch -> 0x43ef0
						} else {
							v15 = v13;
							v16 = 1;
						}
					} else {
						v15 = v13;
						v16 = 1;
					}
				}
				int32_t v19 = v16; // 0x43fb032
				int32_t v20 = v15; // 0x43fcc
				if (a5 != -1) {
					// 0x43ef8
					if (v15 >= a5 - v5) {
						// 0x43f00
						if (v15 <= a5 + 12) {
							// 0x43f08
							g37 = g29;
							g36 = random(0);
							g37 = v9;
							int32_t v21 = random(0); // 0x43f20
							g32 = v21;
							v19 = 0;
							v20 = v21;
							// branch -> 0x43f2c
						} else {
							v19 = v16;
							v20 = v15;
						}
					} else {
						v19 = v16;
						v20 = v15;
					}
				}
				int32_t v22 = v2 + v20;                         // 0x43f2c
				int32_t v23 = *(int32_t *)(g23 - 0x7514) + v20; // 0x43f30
				int32_t v24 = g28 + 2;                          // 0x43f34
				int32_t v25 = v19;
				if (g33 > 0) {
					int32_t v26 = v19; // 0x43fb859
					int32_t v27 = v19; // 0x43f9438
					int32_t v28 = v19; // 0x43fb0
					int32_t v29 = 0;   // 0x43fa4
					while (true) {
						// 0x43fb0
						if (v28 == 1) {
							int32_t v30 = v26; // 0x43fb855
							int32_t v31 = v24; // 0x43f4842
							int32_t v32 = v27; // 0x43f9439
							int32_t v33;       // 0x43f9c
							int32_t v34;       // 0x43fa0
							int32_t v35;       // 0x43fa4
							if (g35 > 0) {
								int32_t v36 = v26; // 0x43fb858
								int32_t v37 = 0;   // 0x43f88
								int32_t v38 = v24; // 0x43f84
								int32_t v39 = v27; // 0x43f94
								int32_t v40;       // 0x43fb034
								while (true) {
									// 0x43f94
									if (v39 == 1) {
										char v41 = *(char *)v38; // 0x43f48
										int32_t v42 = 40 * (g36 + v37);
										int32_t v43 = v36; // 0x43fb857
										int32_t v44 = 1;   // 0x43fb036
										if (v41 != 0) {
											// 0x43f54
											if (v41 != *(char *)(v42 + v22)) {
												// 0x43f68
												v43 = 0;
												v44 = 0;
												// branch -> 0x43f6c
											} else {
												v43 = v36;
												v44 = 1;
											}
										}
										int32_t v45 = v43; // 0x43fb856
										int32_t v46 = v44; // 0x43fb035
										if (*(char *)(v42 + v23) != 0) {
											// 0x43f80
											v45 = 0;
											v46 = 0;
											// branch -> 0x43f84
										}
										int32_t v47 = v38 + 1; // 0x43f84
										int32_t v48 = v37 + 1; // 0x43f88
										if (v48 >= g35) {
											v30 = v45;
											v31 = v47;
											v32 = v46;
											v40 = v46;
											// break -> 0x43f9c
											break;
										}
										v36 = v45;
										v37 = v48;
										v38 = v47;
										v39 = v46;
										// continue -> 0x43f94
										continue;
									} else {
										v30 = v36;
										v31 = v38;
										v32 = v39;
										v40 = v39;
									}
								}
								// 0x43f9c
								v33 = v22 + 1;
								v34 = v23 + 1;
								v35 = v29 + 1;
								if (v35 >= g33) {
									v25 = v30;
									// break -> 0x43fb8
									break;
								}
								v26 = v30;
								v27 = v32;
								v28 = v40;
								v29 = v35;
								v23 = v34;
								v22 = v33;
								v24 = v31;
								// continue -> 0x43fb0
								continue;
							}
							// 0x43f9c
							v33 = v22 + 1;
							v34 = v23 + 1;
							v35 = v29 + 1;
							if (v35 >= g33) {
								v25 = v30;
								// break -> 0x43fb8
								break;
							}
							v26 = v30;
							v27 = v32;
							v28 = 1;
							v29 = v35;
							v23 = v34;
							v22 = v33;
							v24 = v31;
							// continue -> 0x43fb0
							continue;
						} else {
							v25 = v26;
						}
					}
					// 0x43fb8
					if (v25 == 0) {
					lab_0x43fc0:;
						int32_t v49 = g36 + 1; // 0x43fc0
						g36 = v49;
						int32_t v50 = v20;
						if (v49 == g29) {
							int32_t v51 = v20 + 1; // 0x43fcc
							g32 = v51;
							g36 = 0;
							if (v51 == v9) {
								// 0x43fdc
								g32 = 0;
								v50 = 0;
								// branch -> 0x43fe0
							} else {
								v50 = v51;
							}
						}
						int32_t v52 = g31;
						if (v52 >= 200) {
							// break -> 0x43ff0
							break;
						}
						v14 = v52;
						v13 = v50;
						// continue -> 0x43eac
						continue;
					}
					// 0x43ff0
					if (g31 < 200) {
						int32_t v53 = v2 + v20; // 0x44004
						int32_t v54 = 0;        // r8
						if (g33 > 0) {
							int32_t v55 = g33; // 0x4405476
							int32_t v56 = 0;   // 0x4405074
							while (true) {
								int32_t v57 = g35;      // ctr
								int32_t v58 = g28 + v8; // 0x44018
								int32_t v59 = 0;        // r5
								int32_t v60 = v55;      // 0x44054
								int32_t v61 = v56;      // 0x44050
								int32_t v62 = v8;       // 0x4401862
								if (g35 >= 1) {
									int32_t v63 = g35; // 0x4404870
									int32_t v64 = v8;  // 0x4403c66
									int32_t v65 = 0;   // 0x44030
									int32_t v66;       // 0x4403c
									while (true) {
										char v67 = *(char *)v58; // 0x44024
										int32_t v68 = v63;       // 0x44048
										int32_t v69 = v65;       // 0x44044
										int32_t v70 = v64;       // 0x4403c
										if (v67 != 0) {
											// 0x44030
											*(char *)(v53 + 40 * (g36 + v65)) = v67;
											v68 = v57;
											v69 = v59;
											v70 = v8;
											// branch -> 0x4403c
										}
										// 0x4403c
										v66 = v70 + 1;
										v8 = v66;
										int32_t v71 = v58 + 1; // 0x44040
										int32_t v72 = v69 + 1; // 0x44044
										v59 = v72;
										int32_t v73 = v68 - 1; // 0x44048
										v57 = v73;
										if (v73 == 0) {
											// break -> 0x4404c
											break;
										}
										v63 = v73;
										v64 = v66;
										v65 = v72;
										v58 = v71;
										// continue -> 0x44024
									}
									// 0x4404c
									v60 = g33;
									v61 = v54;
									v62 = v66;
									// branch -> 0x4404c
								}
								int32_t v74 = v53 + 1; // 0x4404c
								v53 = v74;
								int32_t v75 = v61 + 1; // 0x44050
								v54 = v75;
								if (v75 < v60) {
									// 0x4404c
									v55 = v60;
									v56 = v75;
									v53 = v74;
									v8 = v62;
									// branch -> 0x44010
									continue;
								}
							}
						}
						int32_t v76 = v10 + 1; // 0x4405c
						v10 = v76;
						if (v76 >= v6) {
							// 0x44068
							if (a6 == 1) {
								// 0x44074
								v11 = g23;
								*(int32_t *)*(int32_t *)(v11 - 0x77b0) = 2 * g36 + 17;
								*(int32_t *)*(int32_t *)(v11 - 0x77b4) = 2 * g32 + 19;
								// branch -> 0x44094
							}
							// 0x44094
							if (a7 != 0) {
								// 0x440c4
								g10 = v1;
								return 0;
							}
							// 0x440a0
							v12 = g23;
							*(int32_t *)*(int32_t *)(v12 - 0x751c) = 2 * g36 + 17;
							*(int32_t *)*(int32_t *)(v12 - 0x7520) = 2 * g32 + 19;
							// branch -> 0x440c4
							// 0x440c4
							g10 = v1;
							return 0;
						}
						// 0x4405c
						v7 = g29;
						// branch -> 0x43e80
						break;
					}
					// 0x440c4
					g10 = v1;
					return 1;
				}
				// 0x43fb8
				if (v25 == 0) {
					goto lab_0x43fc0;
				}
				goto lab_0x43fe0;
			}
		}
	} else {
		// 0x44068
		if (a6 == 1) {
			// 0x44074
			v11 = g23;
			*(int32_t *)*(int32_t *)(v11 - 0x77b0) = 2 * g36 + 17;
			*(int32_t *)*(int32_t *)(v11 - 0x77b4) = 2 * g32 + 19;
			// branch -> 0x44094
		}
		// 0x44094
		if (a7 == 0) {
			// 0x440a0
			v12 = g23;
			*(int32_t *)*(int32_t *)(v12 - 0x751c) = 2 * g36 + 17;
			*(int32_t *)*(int32_t *)(v12 - 0x7520) = 2 * g32 + 19;
			// branch -> 0x440c4
		}
	}
	// 0x440c4
	g10 = v1;
	return 0;
}

// Address range: 0x440d8 - 0x442e8
int32_t DRLG_L3PlaceRndSet(char *a1, int32_t a2)
{
	int32_t v1 = (int32_t)a1;
	int32_t v2 = g10;                        // 0x440dc
	int32_t v3 = *(int32_t *)(g23 - 0x77cc); // 0x440e4
	g35 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7514); // 0x440e8
	g33 = v4;
	g27 = 0;
	int32_t v5 = v1 / 0x1000000;
	g26 = v5;
	int32_t v6 = (int32_t) * (char *)(v1 + 1); // 0x44100
	g25 = v6;
	int32_t v7 = 40 - v5; // 0x44104
	g30 = v7;
	int32_t result = v6 * v5; // 0x44108
	g32 = result + 2;
	g31 = result + v1;
	int32_t v8 = 40 - v6; // 0x44114
	g29 = v8;
	if (v8 <= 0) {
		// 0x442d4
		g10 = v2;
		return result;
	}
	int32_t v9 = result; // 0x442e490
	int32_t v10 = 0;     // 0x442c884
	int32_t result2;     // 0x442e489
	while (true) {
		// 0x4411c
		g36 = v3;
		int32_t v11 = 0; // r24
		result2 = v9;
		int32_t v12 = v8;  // 0x442cc
		int32_t v13 = v10; // 0x442c8
		int32_t v14 = v4;  // 0x442c4
		int32_t v15 = v7;  // 0x442b81629
		int32_t v16 = v3;
		if (v7 > 0) {
			int32_t v17 = v3; // 0x44224
			int32_t v18 = v3; // 0x4412821
			int32_t v19 = 0;  // 0x4415446
			int32_t v20 = v4; // 0x44130
			int32_t v21;      // 0x44128
			int32_t v22;
			int32_t v23; // 0x442e491
			int32_t v24; // 0x442b8
			while (true) {
				int32_t v25 = 1;   // 0x441d4
				int32_t v26;       // 0x441bc
				int32_t v27;       // 0x4423c
				int32_t v28;       // 0x442e493
				unsigned char v29; // 0x441b8
				if (g25 > 0) {
					int32_t v30 = 1;      // 0x441d461
					int32_t v31 = 0;      // 0x441a4
					int32_t v32 = v20;    // 0x441a0
					int32_t v33 = v18;    // 0x4419c
					int32_t v34 = v1 + 2; // 0x4414840
					int32_t v35 = 1;      // 0x4419437
					int32_t v36 = 1;      // 0x441b0
					while (true) {
						// 0x441b0
						if (v36 == 1) {
							int32_t v37 = g26; // 0x4418c4
							int32_t v38 = v30; // 0x441d457
							int32_t v39 = v34; // 0x4414841
							int32_t v40 = v35; // 0x4419438
							int32_t v41;       // 0x4419c
							int32_t v42;       // 0x441a0
							int32_t v43;       // 0x441a4
							if (v37 > 0) {
								int32_t v44 = v30; // 0x441d460
								int32_t v45 = 0;   // 0x44188
								int32_t v46 = v34; // 0x44184
								int32_t v47 = v35; // 0x44194
								int32_t v48;       // 0x441b033
								while (true) {
									// 0x44194
									if (v47 == 1) {
										unsigned char v49 = *(char *)v46; // 0x44148
										int32_t v50 = 40 * (v45 + v19);
										int32_t v51 = v44; // 0x441d459
										int32_t v52 = 1;   // 0x441b035
										if (v49 != 0) {
											// 0x44154
											if (v49 != *(char *)(v50 + v33)) {
												// 0x44168
												v51 = 0;
												v52 = 0;
												// branch -> 0x4416c
											} else {
												v51 = v44;
												v52 = 1;
											}
										}
										int32_t v53 = v51; // 0x441d458
										int32_t v54 = v52; // 0x441b034
										if (*(char *)(v50 + v32) != 0) {
											// 0x44180
											v53 = 0;
											v54 = 0;
											// branch -> 0x44184
										}
										int32_t v55 = v46 + 1; // 0x44184
										int32_t v56 = v45 + 1; // 0x44188
										if (v56 >= v37) {
											v38 = v53;
											v39 = v55;
											v40 = v54;
											v48 = v54;
											// break -> 0x4419c
											break;
										}
										v44 = v53;
										v45 = v56;
										v46 = v55;
										v47 = v54;
										// continue -> 0x44194
										continue;
									} else {
										v38 = v44;
										v39 = v46;
										v40 = v47;
										v48 = v47;
									}
								}
								// 0x4419c
								v41 = v33 + 1;
								v42 = v32 + 1;
								v43 = v31 + 1;
								if (v43 >= g25) {
									v25 = v38;
									// break -> 0x441b8
									break;
								}
								v30 = v38;
								v31 = v43;
								v32 = v42;
								v33 = v41;
								v34 = v39;
								v35 = v40;
								v36 = v48;
								// continue -> 0x441b0
								continue;
							}
							// 0x4419c
							v41 = v33 + 1;
							v42 = v32 + 1;
							v43 = v31 + 1;
							if (v43 >= g25) {
								v25 = v38;
								// break -> 0x441b8
								break;
							}
							v30 = v38;
							v31 = v43;
							v32 = v42;
							v33 = v41;
							v34 = v39;
							v35 = v40;
							v36 = 1;
							// continue -> 0x441b0
							continue;
						} else {
							v25 = v30;
						}
					}
					// 0x441b8
					v29 = *(char *)(g31 + 2);
					v26 = g32;
					g24 = v26;
					v28 = v29;
					v27 = v25;
					if (v29 >= 84) {
					lab_0x441c8:;
						unsigned char v57 = *(char *)(v26 + v1); // 0x441c8
						int32_t v58 = v57;                       // 0x441c8
						if (v57 <= 100) {
							// 0x441d4
							if (v25 == 1) {
								unsigned char v59 = *(char *)(v17 - 40); // 0x441dc
								int32_t v60 = 1;
								if (v59 >= 84) {
									// 0x441e8
									if (v59 <= 100) {
										// 0x441f0
										v60 = 0;
										// branch -> 0x441f4
									} else {
										v60 = 1;
									}
								}
								int32_t v61 = v60;
								if (*(char *)(v17 + 40) >= 84) {
									// 0x44200
									if (v59 <= 100) {
										// 0x44208
										v61 = 0;
										// branch -> 0x4420c
									} else {
										v61 = v60;
									}
								}
								int32_t v62 = v61;
								if (*(char *)(v17 + 1) >= 84) {
									// 0x44218
									if (v59 <= 100) {
										// 0x44220
										v62 = 0;
										// branch -> 0x44224
									} else {
										v62 = v61;
									}
								}
								unsigned char v63 = *(char *)(v17 - 1); // 0x44224
								int32_t v64 = v63;                      // 0x44224
								if (v63 >= 84) {
									// 0x44230
									if (v59 <= 100) {
										// 0x44238
										v28 = v64;
										v27 = 0;
										// branch -> 0x4423c
									} else {
										v28 = v64;
										v27 = v62;
									}
								} else {
									v28 = v64;
									v27 = v62;
								}
							} else {
								v28 = v58;
								v27 = v25;
							}
						} else {
							v28 = v58;
							v27 = v25;
						}
					}
				lab_0x4423c:
					// 0x4423c
					v23 = v28;
					int32_t v65; // 0x442b0
					int32_t v66; // 0x442b4
					if (v27 == 1) {
						// 0x44244
						g37 = 100;
						int32_t v67 = random(0); // 0x4424c
						if (v67 < a2) {
							int32_t v68 = g35; // 0x44258
							int32_t v69 = 0;   // r6
							if (g25 > 0) {
								int32_t v70 = g25; // 0x442a881
								int32_t v71 = 0;   // 0x442a479
								int32_t v72 = g24; // 0x4426c
								// branch -> 0x44264
								while (true) {
									int32_t v73 = g26;      // 0x44264
									int32_t v74 = v73;      // ctr
									int32_t v75 = v1 + v72; // 0x4426c
									int32_t v76 = 0;        // r7
									int32_t v77 = v70;      // 0x442a8
									int32_t v78 = v71;      // 0x442a4
									int32_t v79 = v72;      // 0x4426c67
									if (v73 >= 1) {
										int32_t v80 = v72; // 0x4429071
										int32_t v81 = 0;   // 0x44284
										int32_t v82;       // 0x44290
										int32_t v83;       // 0x44294
										while (true) {
											char v84 = *(char *)v75; // 0x44278
											int32_t v85 = v73;       // 0x4429c
											int32_t v86 = v81;       // 0x44298
											int32_t v87 = v80;       // 0x44290
											if (v84 != 0) {
												// 0x44284
												*(char *)(v68 + 40 * (v11 + v81)) = v84;
												v85 = v74;
												v86 = v76;
												v87 = g24;
												// branch -> 0x44290
											}
											// 0x44290
											v82 = v87 + 1;
											g24 = v82;
											v83 = v75 + 1;
											int32_t v88 = v86 + 1; // 0x44298
											v76 = v88;
											int32_t v89 = v85 - 1; // 0x4429c
											v74 = v89;
											if (v89 == 0) {
												// break -> 0x442a0
												break;
											}
											v73 = v89;
											v80 = v82;
											v81 = v88;
											v75 = v83;
											// continue -> 0x44278
										}
										// 0x442a0
										v75 = v83;
										v77 = g25;
										v78 = v69;
										v79 = v82;
										// branch -> 0x442a0
									}
									int32_t v90 = v68 + 1; // 0x442a0
									int32_t v91 = v78 + 1; // 0x442a4
									v69 = v91;
									if (v91 >= v77) {
										v23 = v75;
										// break -> 0x442b0
										break;
									}
									v70 = v77;
									v71 = v91;
									v68 = v90;
									v72 = v79;
									// continue -> 0x44264
								}
								// 0x442b0
								v65 = g36 + 40;
								g36 = v65;
								v66 = v11 + 1;
								v11 = v66;
								v24 = g30;
								v21 = g35;
								v22 = g33;
								if (v66 >= v24) {
									// break -> 0x442b8
									break;
								}
								v17 = v65;
								v18 = v21;
								v19 = v66;
								v20 = v22;
								// continue -> 0x44128
								continue;
							} else {
								v23 = v67;
							}
						} else {
							v23 = v67;
						}
					}
					// 0x442b0
					v65 = g36 + 40;
					g36 = v65;
					v66 = v11 + 1;
					v11 = v66;
					v24 = g30;
					v21 = g35;
					v22 = g33;
					if (v66 >= v24) {
						// break -> 0x442b8
						break;
					}
					v17 = v65;
					v18 = v21;
					v19 = v66;
					v20 = v22;
					// continue -> 0x44128
					continue;
				}
				// 0x441b8
				v29 = *(char *)(g31 + 2);
				int32_t v92 = v29; // 0x441b8
				v26 = g32;
				g24 = v26;
				if (v29 < 84) {
					v28 = v92;
					v27 = v25;
					goto lab_0x4423c;
				}
				goto lab_0x441c8;
			}
			// 0x442b8
			result2 = v23;
			v12 = g29;
			v13 = g27;
			v14 = v22;
			v15 = v24;
			v16 = v21;
			// branch -> 0x442c0
		}
		int32_t v93 = v16 + 1; // 0x442c0
		g35 = v93;
		int32_t v94 = v14 + 1; // 0x442c4
		g33 = v94;
		int32_t v95 = v13 + 1; // 0x442c8
		g27 = v95;
		if (v95 >= v12) {
			// break -> 0x442d4
			break;
		}
		v9 = result2;
		v8 = v12;
		v10 = v95;
		v4 = v94;
		v7 = v15;
		v3 = v93;
		// continue -> 0x4411c
	}
	// 0x442d4
	g10 = v2;
	return result2;
}

// Address range: 0x442e8 - 0x44398
int32_t function_442e8(int32_t a1, int32_t a2)
{
	int32_t v1 = 40 * a1;                    // 0x442e8
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x442ec
	int32_t v3 = v2 + v1 + a2;               // 0x442f4
	unsigned char v4 = *(char *)(v3 + 40);   // 0x442f8
	if (v4 <= 152) {
		// 0x44304
		if (v4 > 129) {
			// 0x44390
			return 0;
		}
	}
	unsigned char v5 = *(char *)(v3 - 40); // 0x44314
	if (v5 <= 152) {
		// 0x44320
		if (v5 > 129) {
			// 0x44390
			return 0;
		}
	}
	char v6 = *(char *)(v2 + v1 + a2); // 0x4432c
	if (v6 == 7 || v6 == 10 || v6 == 126 || v6 == -127 || v6 == -122 || v6 == -120) {
		// 0x44338
		return 1;
	}
	// 0x44390
	return 0;
}

// Address range: 0x44398 - 0x44428
int32_t function_44398(int32_t a1, int32_t a2)
{
	int32_t v1 = 40 * a1;                    // 0x44398
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x4439c
	int32_t v3 = v2 + v1 + a2;               // 0x443a4
	unsigned char v4 = *(char *)(v3 + 40);   // 0x443a8
	if (v4 <= 152) {
		// 0x443b4
		if (v4 > 129) {
			// 0x44420
			return 0;
		}
	}
	unsigned char v5 = *(char *)(v3 - 40); // 0x443c4
	if (v5 <= 152) {
		// 0x443d0
		if (v5 > 129) {
			// 0x44420
			return 0;
		}
	}
	char v6 = *(char *)(v2 + v1 + a2); // 0x443dc
	if (v6 == 7 || v6 == 2 || v6 == -122 || v6 == -120) {
		// 0x443e8
		return 1;
	}
	// 0x44420
	return 0;
}

// Address range: 0x44428 - 0x444d8
int32_t function_44428(int32_t a1, int32_t a2)
{
	int32_t v1 = 40 * a1;                    // 0x44428
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x4442c
	int32_t v3 = v2 + v1 + a2;               // 0x44434
	unsigned char v4 = *(char *)(v3 + 1);    // 0x44438
	if (v4 <= 152) {
		// 0x44444
		if (v4 > 129) {
			// 0x444d0
			return 0;
		}
	}
	unsigned char v5 = *(char *)(v3 - 1); // 0x44454
	if (v5 <= 152) {
		// 0x44460
		if (v5 > 129) {
			// 0x444d0
			return 0;
		}
	}
	char v6 = *(char *)(v2 + v1 + a2); // 0x4446c
	if (v6 == 7 || v6 == 9 || v6 == 121 || v6 == 124 || v6 == -121 || v6 == -119) {
		// 0x44478
		return 1;
	}
	// 0x444d0
	return 0;
}

// Address range: 0x444d8 - 0x44568
int32_t function_444d8(int32_t a1, int32_t a2)
{
	int32_t v1 = 40 * a1;                    // 0x444d8
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x444dc
	int32_t v3 = v2 + v1 + a2;               // 0x444e4
	unsigned char v4 = *(char *)(v3 + 1);    // 0x444e8
	if (v4 <= 152) {
		// 0x444f4
		if (v4 > 129) {
			// 0x44560
			return 0;
		}
	}
	unsigned char v5 = *(char *)(v3 - 1); // 0x44504
	if (v5 <= 152) {
		// 0x44510
		if (v5 > 129) {
			// 0x44560
			return 0;
		}
	}
	char v6 = *(char *)(v2 + v1 + a2); // 0x4451c
	if (v6 == 7 || v6 == 4 || v6 == -121 || v6 == -119) {
		// 0x44528
		return 1;
	}
	// 0x44560
	return 0;
}

// Address range: 0x44568 - 0x44690
int32_t function_44568(void)
{
	int32_t v1 = 0;                          // r7
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x4456c
	// branch -> 0x44570
	int32_t result; // 0x44670
	while (true) {
		int32_t v3 = 20; // ctr
		int32_t v4 = v2; // r3
		int32_t v5 = 0;  // r6
		int32_t v6 = v2; // 0x445f4
		// branch -> 0x44580
		while (true) {
			char *v7 = (char *)v6; // 0x44580
			if (*v7 == 7) {
				unsigned char v8 = *(char *)(v6 - 40); // 0x4458c
				if (v8 <= 152) {
					// 0x44598
					if (v8 >= 130) {
						unsigned char v9 = *(char *)(v6 + 40); // 0x445a0
						if (v9 <= 152) {
							// 0x445ac
							if (v9 >= 130) {
								// 0x445b4
								*v7 = -110;
								// branch -> 0x445f8
							lab_0x445f8_6:;
								int32_t v10 = v4;        // 0x445f8
								int32_t v11 = v10 + 40;  // 0x445f8
								char *v12 = (char *)v11; // 0x445f8
								int32_t v13;             // 0x44678
								if (*v12 == 7) {
								lab_0x44604:;
									unsigned char v14 = *(char *)v10; // 0x44604
									if (v14 <= 152) {
										// 0x44610
										if (v14 >= 130) {
											unsigned char v15 = *(char *)(v10 + 80); // 0x44618
											if (v15 <= 152) {
												// 0x44624
												if (v15 >= 130) {
													// 0x4462c
													*v12 = -110;
													// branch -> 0x44670
												lab_0x44670_6:
													// 0x44670
													result = v11 + 40;
													v4 = result;
													v5++;
													v13 = v3 - 1;
													v3 = v13;
													if (v13 == 0) {
														// break -> 0x4467c
														break;
													}
													v6 = result;
													// continue -> 0x44580
													continue;
												}
											}
										}
									}
									unsigned char v16 = *(char *)(v10 + 39); // 0x44640
									if (v16 > 152) {
										goto lab_0x44670_6;
									}
									// 0x4464c
									if (v16 < 130) {
										goto lab_0x44670_6;
									}
									unsigned char v17 = *(char *)(v10 + 41); // 0x44654
									if (v17 > 152) {
										goto lab_0x44670_6;
									}
									// 0x44660
									if (v17 < 130) {
										goto lab_0x44670_6;
									}
									// 0x44668
									*v12 = -109;
									// branch -> 0x44670
									goto lab_0x44670_6;
								} else {
								lab_0x44670_7:
									// 0x44670
									// branch -> 0x44670
									goto lab_0x44670_6;
								}
								int32_t v18 = v4; // 0x44670
								result = v18 + 40;
								v4 = result;
								int32_t v19 = v5; // 0x44674
								v5 = v19 + 1;
								int32_t v20 = v3; // 0x44678
								v13 = v20 - 1;
								v3 = v13;
								if (v13 == 0) {
									// break -> 0x4467c
									break;
								}
								v6 = result;
								// continue -> 0x44580
								continue;
							}
						}
					}
				}
				unsigned char v21 = *(char *)(v6 - 1); // 0x445c8
				if (v21 > 152) {
					goto lab_0x445f8_6;
				}
				// 0x445d4
				if (v21 < 130) {
					goto lab_0x445f8_6;
				}
				unsigned char v22 = *(char *)(v6 + 1); // 0x445dc
				if (v22 > 152) {
					goto lab_0x445f8_6;
				}
				// 0x445e8
				if (v22 < 130) {
					goto lab_0x445f8_6;
				}
				// 0x445f0
				*v7 = -109;
				// branch -> 0x445f8
				goto lab_0x445f8_6;
			} else {
				// 0x445f8
				// branch -> 0x445f8
				goto lab_0x445f8_6;
			}
		}
		int32_t v23 = v1 + 1; // 0x4467c
		v1 = v23;
		if (v23 >= 40) {
			// break -> 0x4468c
			break;
		}
		v2++;
		// continue -> 0x44570
	}
	// 0x4468c
	return result;
}

// Address range: 0x44690 - 0x44850
int32_t function_44690(int32_t a1)
{
	int32_t v1 = 0;                          // r7
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x44694
	// branch -> 0x44698
	int32_t result; // 0x44834
	while (true) {
		int32_t v3 = 40; // ctr
		int32_t v4 = v2; // r3
		int32_t v5 = v2; // 0x446dc
		// branch -> 0x446a4
		while (true) {
			char *v6 = (char *)v5; // 0x446a4
			char v7 = *v6;         // 0x446a4
			if (v7 == -110) {
				char *v8 = (char *)(v5 + 40); // 0x446b0
				unsigned char v9 = *v8;       // 0x446b0
				if (v9 <= 152) {
					// 0x446bc
					if (v9 >= 130) {
						char *v10 = (char *)(v5 - 40); // 0x446c4
						unsigned char v11 = *v10;      // 0x446c4
						if (v11 <= 152) {
							// 0x446d0
							if (v11 > 129) {
								char v12 = *v8; // 0x446ec
								int32_t v13;    // 0x44838
								if (v12 != -126) {
									char v14 = *v10; // 0x446f8
									if (v14 != -126) {
										// 0x44704
										if (v12 != -124) {
											// 0x4470c
											if (v14 != -124) {
												// 0x44714
												if (v12 != -123) {
													// 0x4471c
													if (v14 != -123) {
														// 0x44724
														if (v12 != -122) {
															// 0x4472c
															if (v14 != -122) {
																// 0x44734
																if (v12 != -120) {
																	// 0x4473c
																	if (v14 != -120) {
																		// 0x44744
																		if (v12 != -118) {
																			// 0x4474c
																			if (v14 != -118) {
																				// 0x44754
																				if (v12 != -116) {
																					// 0x4475c
																					if (v14 != -116) {
																						// 0x44764
																						*v6 = 7;
																						// branch -> 0x44834
																					lab_0x44834_17:
																						// 0x44834
																						result = v4 + 40;
																						v4 = result;
																						v13 = v3 - 1;
																						v3 = v13;
																						if (v13 == 0) {
																							// break -> 0x4483c
																							break;
																						}
																						v5 = result;
																						// continue -> 0x446a4
																						continue;
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							lab_0x44770:
								// 0x44770
								if (v7 == -109) {
									char *v15 = (char *)(v5 + 1); // 0x44778
									unsigned char v16 = *v15;     // 0x44778
									if (v16 <= 152) {
										// 0x44784
										if (v16 >= 130) {
											char *v17 = (char *)(v5 - 1); // 0x4478c
											unsigned char v18 = *v17;     // 0x4478c
											if (v18 <= 152) {
												// 0x44798
												if (v18 > 129) {
													char v19 = *v15; // 0x447b4
													if (v19 == -125) {
														goto lab_0x44834_17;
													}
													char v20 = *v17; // 0x447c0
													if (v20 == -125) {
														goto lab_0x44834_17;
													}
													// 0x447cc
													if (v19 == -124) {
														goto lab_0x44834_17;
													}
													// 0x447d4
													if (v20 == -124) {
														goto lab_0x44834_17;
													}
													// 0x447dc
													if (v19 == -123) {
														goto lab_0x44834_17;
													}
													// 0x447e4
													if (v20 == -123) {
														goto lab_0x44834_17;
													}
													// 0x447ec
													if (v19 == -121) {
														goto lab_0x44834_17;
													}
													// 0x447f4
													if (v20 == -121) {
														goto lab_0x44834_17;
													}
													// 0x447fc
													if (v19 == -119) {
														goto lab_0x44834_17;
													}
													// 0x44804
													if (v20 == -119) {
														goto lab_0x44834_17;
													}
													// 0x4480c
													if (v19 == -118) {
														goto lab_0x44834_17;
													}
													// 0x44814
													if (v20 == -118) {
														goto lab_0x44834_17;
													}
													// 0x4481c
													if (v19 == -117) {
														goto lab_0x44834_17;
													}
													// 0x44824
													if (v20 == -117) {
														goto lab_0x44834_17;
													}
													// 0x4482c
													*v6 = 7;
													// branch -> 0x44834
													goto lab_0x44834_17;
												}
											}
										}
									}
									// 0x447a0
									*v6 = 7;
									// branch -> 0x44834
									goto lab_0x44834_17;
								} else {
									// 0x447ac
									// branch -> 0x44834
									goto lab_0x44834_17;
								}
							lab_0x44834_18:
								// 0x44834
								result = v4 + 40;
								v4 = result;
								v13 = v3 - 1;
								v3 = v13;
								if (v13 == 0) {
									// break -> 0x4483c
									break;
								}
								v5 = result;
								// continue -> 0x446a4
								continue;
							}
						}
					}
				}
				// 0x446d8
				*v6 = 7;
				// branch -> 0x44834
				goto lab_0x44834_18;
			} else {
				// 0x44770
				// branch -> 0x44770
				goto lab_0x44770;
			}
		}
		int32_t v21 = v1 + 1; // 0x4483c
		v1 = v21;
		if (v21 >= 40) {
			// break -> 0x4484c
			break;
		}
		v2++;
		// continue -> 0x44698
	}
	// 0x4484c
	return result;
}

// Address range: 0x44850 - 0x44e9c
int32_t DRLG_L3Wood(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x44858
	int32_t v2 = 0;                          // r23
	// branch -> 0x4486c
	while (true) {
		int32_t v3 = v1; // r30
		g36 = v1;
		int32_t v4 = 0;  // r22
		int32_t v5 = 0;  // r21
		int32_t v6 = v1; // 0x4487c
		// branch -> 0x4487c
		int32_t v7; // r27
		int32_t v8; // r28
		while (true) {
			// 0x4487c
			if (*(char *)v6 == 10) {
				// 0x44888
				g37 = 2;
				if (random(0) != 0) {
					int32_t v9 = v4;        // 0x4489c
					int32_t v10 = v1;       // 0x448a0
					int32_t v11 = v5 + v10; // 0x448a0
					int32_t v12 = v9;       // 0x448bc
					int32_t v13;            // 0x448bc
					if (*(char *)v11 == 10) {
						int32_t v14 = v11 + 40; // 0x448a8
						int32_t v15 = v9 + 1;   // 0x448ac
						while (*(char *)v14 == 10) {
							// 0x448a8
							v14 += 40;
							v15++;
							// continue -> 0x448a8
						}
						// 0x448bc
						v13 = v15 - 1;
						v7 = v13;
						if (v13 - v9 >= 1) {
						lab_0x448c8:;
							int32_t v16 = v9 + 1; // 0x448c8
							int32_t v17 = v16;    // r20
							v8 = v10 + 40 * v16;
							*(char *)v3 = 127;
							int32_t v18 = v7;  // 0x4491042
							int32_t v19 = v18; // 0x44918
							if (v17 < v18) {
								int32_t v20; // 0x44910
								while (true) {
									// 0x448e8
									g37 = 2;
									if (random(0) == 0) {
										// 0x44904
										*(char *)v8 = (char)129;
										// branch -> 0x44908
									} else {
										// 0x448fc
										*(char *)v8 = (char)126;
										// branch -> 0x44908
									}
									// 0x44908
									v8 += 40;
									int32_t v21 = v17 + 1; // 0x4490c
									v17 = v21;
									v20 = v7;
									if (v21 >= v20) {
										// break -> 0x44918
										break;
									}
									// continue -> 0x448e8
								}
								// 0x44918
								*(char *)(v1 + 40 * v20) = -128;
								// branch -> 0x44924
							lab_0x44924:;
								// 0x44924
								int32_t v22; // 0x449c8
								if (*(char *)v3 == 9) {
								lab_0x44930_3:
									// 0x44930
									g37 = 2;
									if (random(0) != 0) {
										int32_t v23 = v2;        // 0x44944
										int32_t v24 = g36 + v23; // 0x44948
										int32_t v25 = v23;       // 0x44964
										int32_t v26;             // 0x44964
										if (*(char *)v24 == 9) {
											int32_t v27 = v24 + 1; // 0x44950
											int32_t v28 = v23 + 1; // 0x44954
											while (*(char *)v27 == 9) {
												// 0x44950
												v27++;
												v28++;
												// continue -> 0x44950
											}
											// 0x44964
											v26 = v28 - 1;
											v7 = v26;
											if (v26 - v23 >= 1) {
											lab_0x44970:
												// 0x44970
												*(char *)v3 = 123;
												int32_t v29 = v2 + 1; // 0x4497c
												v17 = v29;
												v8 = v24 + 1;
												int32_t v30 = v7;  // 0x449b854
												int32_t v31 = v30; // 0x449c4
												if (v29 < v30) {
													int32_t v32; // 0x449b8
													while (true) {
														// 0x44990
														g37 = 2;
														if (random(0) == 0) {
															// 0x449ac
															*(char *)v8 = (char)124;
															// branch -> 0x449b0
														} else {
															// 0x449a4
															*(char *)v8 = (char)121;
															// branch -> 0x449b0
														}
														// 0x449b0
														v8++;
														int32_t v33 = v17 + 1; // 0x449b4
														v17 = v33;
														v32 = v7;
														if (v33 >= v32) {
															// break -> 0x449c0
															break;
														}
														// continue -> 0x44990
													}
													// 0x449c0
													*(char *)(g36 + v32) = 122;
													// branch -> 0x449c8
												lab_0x449c8:
													// 0x449c8
													v22 = v3;
													int32_t v34; // 0x44af4
													int32_t v35; // 0x44b04
													if (*(char *)v22 == 11) {
													lab_0x449d4_2:
														// 0x449d4
														if (*(char *)(v22 + 40) == 10) {
															// 0x449e0
															if (*(char *)(v22 + 1) == 9) {
																// 0x449ec
																g37 = 2;
																if (random(0) != 0) {
																	int32_t v36 = v4 + 1; // 0x44a00
																	v8 = v1 + 40 * v36;
																	*(char *)v3 = 125;
																	int32_t v37 = v8; // 0x44a14
																	int32_t v38;      // 0x44a30
																	int32_t v39;      // 0x44a34
																	if (*(char *)v37 == 10) {
																		int32_t v40 = v37 + 40; // 0x44a1c
																		int32_t v41 = v36 + 1;  // 0x44a20
																		while (*(char *)v40 == 10) {
																			// 0x44a1c
																			v40 += 40;
																			v41++;
																			// continue -> 0x44a1c
																		}
																		// 0x44a30
																		v38 = v4 + 1;
																		v17 = v38;
																		v39 = v41 - 1;
																		int32_t v42; // 0x44a8c
																		int32_t v43; // 0x44a94
																		int32_t v44; // 0x44a98
																		int32_t v45;
																		int32_t v46; // 0x44a78
																		if (v38 < v39) {
																		lab_0x44a44:;
																			int32_t v47; // 0x44a6c
																			while (true) {
																				// 0x44a44
																				g37 = 2;
																				if (random(0) == 0) {
																					// 0x44a60
																					*(char *)v8 = (char)129;
																					// branch -> 0x44a64
																				} else {
																					// 0x44a58
																					*(char *)v8 = (char)126;
																					// branch -> 0x44a64
																				}
																				// 0x44a64
																				v8 += 40;
																				int32_t v48 = v17 + 1; // 0x44a68
																				v17 = v48;
																				v47 = v39;
																				if (v48 >= v47) {
																					// break -> 0x44a74
																					break;
																				}
																				// continue -> 0x44a44
																			}
																			// 0x44a74
																			v46 = v2 + 1;
																			v8 = v46 + g36;
																			*(char *)(v1 + 40 * v47) = -128;
																			v42 = v8;
																			v45 = v46;
																			int32_t v49; // 0x44aa8
																			int32_t v50; // 0x44aac
																			if (*(char *)v42 == 9) {
																				v44 = v45;
																				v43 = v42;
																			lab_0x44a94:;
																				int32_t v51; // 0x44a98
																				while (true) {
																					int32_t v52 = v43 + 1; // 0x44a94
																					v51 = v44 + 1;
																					if (*(char *)v52 != 9) {
																						// break -> 0x44aa8
																						break;
																					}
																					v44 = v51;
																					v43 = v52;
																					// continue -> 0x44a94
																				}
																				// 0x44aa8
																				v49 = v2 + 1;
																				v17 = v49;
																				v50 = v51 - 1;
																				if (v49 < v50) {
																				lab_0x44abc:;
																					int32_t v53; // 0x44ae4
																					while (true) {
																						// 0x44abc
																						g37 = 2;
																						if (random(0) == 0) {
																							// 0x44ad8
																							*(char *)v8 = (char)124;
																							// branch -> 0x44adc
																						} else {
																							// 0x44ad0
																							*(char *)v8 = (char)121;
																							// branch -> 0x44adc
																						}
																						// 0x44adc
																						v8++;
																						int32_t v54 = v17 + 1; // 0x44ae0
																						v17 = v54;
																						v53 = v50;
																						if (v54 >= v53) {
																							// break -> 0x44aec
																							break;
																						}
																						// continue -> 0x44abc
																					}
																					// 0x44aec
																					*(char *)(g36 + v53) = 122;
																					// branch -> 0x44af4
																				lab_0x44af4:
																					// 0x44af4
																					v34 = v4 + 1;
																					v4 = v34;
																					g36 += 40;
																					v5 += 40;
																					v35 = v3 + 40;
																					v3 = v35;
																					if (v34 >= 39) {
																						// break -> 0x44b0c
																						break;
																					}
																					v6 = v35;
																					// continue -> 0x4487c
																					continue;
																				}
																			lab_0x44aec:
																				// 0x44aec
																				*(char *)(g36 + v50) = 122;
																				// branch -> 0x44af4
																				goto lab_0x44af4;
																			}
																		lab_0x44aa8:
																			// 0x44aa8
																			v49 = v2 + 1;
																			v17 = v49;
																			v50 = v45 - 1;
																			if (v49 < v50) {
																				goto lab_0x44abc;
																			}
																			goto lab_0x44aec;
																		}
																	lab_0x44a74:
																		// 0x44a74
																		v46 = v2 + 1;
																		v8 = v46 + g36;
																		*(char *)(v1 + 40 * v39) = -128;
																		v42 = v8;
																		v45 = v46;
																		if (*(char *)v42 == 9) {
																			v44 = v45;
																			v43 = v42;
																			goto lab_0x44a94;
																		}
																		goto lab_0x44aa8;
																	}
																	// 0x44a30
																	v38 = v4 + 1;
																	v17 = v38;
																	v39 = v36 - 1;
																	if (v38 < v39) {
																		goto lab_0x44a44;
																	}
																	goto lab_0x44a74;
																}
															}
														}
													}
												lab_0x44af4_3:
													// 0x44af4
													v34 = v4 + 1;
													v4 = v34;
													g36 += 40;
													v5 += 40;
													v35 = v3 + 40;
													v3 = v35;
													if (v34 >= 39) {
														// break -> 0x44b0c
														break;
													}
													v6 = v35;
													// continue -> 0x4487c
													continue;
												}
												// 0x449c0
												*(char *)(g36 + v31) = 122;
												// branch -> 0x449c8
												goto lab_0x449c8;
											}
										lab_0x449c8_2:
											// 0x449c8
											v22 = v3;
											if (*(char *)v22 == 11) {
												goto lab_0x449d4_2;
											}
											goto lab_0x44af4_3;
										}
										// 0x44964
										v26 = v25 - 1;
										v7 = v26;
										if (v26 - v23 < 1) {
											goto lab_0x449c8_2;
										}
										goto lab_0x44970;
									}
								}
							lab_0x449c8_5:
								// 0x449c8
								v22 = v3;
								if (*(char *)v22 == 11) {
									goto lab_0x449d4_2;
								}
								goto lab_0x44af4_3;
							}
							// 0x44918
							*(char *)(v1 + 40 * v19) = -128;
							// branch -> 0x44924
							goto lab_0x44924;
						}
					lab_0x44924_2:
						// 0x44924
						if (*(char *)v3 == 9) {
							goto lab_0x44930_3;
						}
						goto lab_0x449c8_5;
					}
					// 0x448bc
					v13 = v12 - 1;
					v7 = v13;
					if (v13 - v9 < 1) {
						goto lab_0x44924_2;
					}
					goto lab_0x448c8;
				}
				// 0x44924
				if (*(char *)v3 == 9) {
					goto lab_0x44930_3;
				}
				goto lab_0x449c8_5;
			}
			// 0x44924
			if (*(char *)v3 == 9) {
				goto lab_0x44930_3;
			}
			goto lab_0x449c8_5;
		}
		int32_t v55 = v2 + 1; // 0x44b0c
		v2 = v55;
		int32_t v56 = v1 + 1; // 0x44b10
		v1 = v56;
		if (v55 < 39) {
			// 0x44b0c
			v1 = v56;
			// branch -> 0x4486c
			continue;
		} else {
			int32_t v57 = 0;  // r24
			int32_t v58 = v1; // r26
			int32_t v59 = v1; // 0x44b24
			// branch -> 0x44b24
			while (true) {
			lab_0x44b24:
				// 0x44b24
				v8 = v59;
				v7 = v1;
				v2 = 0;
				int32_t v60 = v59; // 0x44b30
				                   // branch -> 0x44b30
			lab_0x44b30_3:;
				int32_t v61;    // 0x44e80
				int32_t v62;    // 0x44e70
				int32_t v63;    // 0x44e74
				int32_t result; // 0x44e84
				while (true) {
					// 0x44b30
					int32_t v64; // 0x44e5c
					int32_t v65; // 0x44e68
					if (*(char *)v60 == 7) {
						// 0x44b3c
						g37 = 1;
						if (random(0) == 0) {
							// 0x44b50
							if (function_53ae0(v2, v57) != 0) {
								// 0x44b64
								g37 = 2;
								int32_t v66 = random(0); // 0x44b6c
								v3 = v66;
								if (v66 == 0) {
									int32_t v67 = v57; // 0x44b78
									g24 = v67;
									int32_t v68; // 0x44b98
									if (function_442e8(v2, v67) != 0) {
										int32_t v69 = g24 - 1; // 0x44b80
										g24 = v69;
										while (function_442e8(v2, v69) != 0) {
											// 0x44b80
											v69 = g24 - 1;
											g24 = v69;
											// continue -> 0x44b80
										}
										// 0x44b98
										v68 = v57;
										v5 = v68;
										int32_t v70; // 0x44bbc
										int32_t v71; // 0x44bf8105
										int32_t v72; // 0x44bb8
										if (function_44398(v2, v68) != 0) {
										lab_0x44ba0:
											while (true) {
												int32_t v73 = v5 + 1; // 0x44ba0
												v5 = v73;
												if (function_44398(v2, v73) == 0) {
													// break -> 0x44bb8
													break;
												}
												// continue -> 0x44ba0
											}
											// 0x44bb8
											v72 = g24 + 1;
											v70 = v7;
											v71 = 1;
											if (*(char *)(v70 + v72) == 7) {
											lab_0x44bcc:
												// 0x44bcc
												v71 = 0;
												// branch -> 0x44bd0
											}
										lab_0x44bd0:;
											int32_t v74 = v5 - 1; // 0x44bd0
											int32_t v75 = v71;    // 0x44bf8
											if (*(char *)(v74 + v70) == 7) {
												// 0x44be0
												v75 = 0;
												// branch -> 0x44be4
											}
											// 0x44be4
											v4 = v72;
											g36 = v74;
											int32_t v76 = v74 - v72; // 0x44bec
											if (v76 >= 2) {
												// 0x44bf8
												if (v75 != 0) {
													// 0x44c00
													g37 = v76 - 1;
													int32_t v77 = g24;                 // 0x44c0c
													int32_t v78 = v77 + random(0) + 2; // 0x44c14
													v5 = v78;
													int32_t v79 = v77 + 1 + v7; // 0x44c18
													v1 = v79;
													int32_t v80 = v4; // 0x44cdc14
													if (v80 <= g36) {
														int32_t v81; // 0x44854
														int32_t v82; // 0x44e70
														int32_t v83; // 0x44e74
														while (true) {
															int32_t v84 = v79; // 0x44cd4
															int32_t v85;       // 0x44cd4
															int32_t v86;       // 0x44cd8
															if (v80 != v78) {
																// 0x44c28
																int32_t v87; // 0x44c5c
																char *v88;   // 0x44c5c
																int32_t v89; // 0x44c80
																if (*(char *)v79 == 7) {
																	// 0x44c34
																	g37 = 2;
																	if (random(0) == 0) {
																		// 0x44c54
																		*(char *)v1 = -119;
																		// branch -> 0x44c5c
																	} else {
																		// 0x44c48
																		*(char *)v1 = -121;
																		// branch -> 0x44c5c
																	}
																	// 0x44c5c
																	v87 = v1;
																	v88 = (char *)v87;
																	v89 = v87;
																	if (*v88 == 10) {
																	lab_0x44c68:
																		// 0x44c68
																		*v88 = -125;
																		v89 = v1;
																		// branch -> 0x44c70
																	}
																lab_0x44c70:;
																	char *v90 = (char *)v89; // 0x44c70
																	int32_t v91 = v89;       // 0x44c94
																	if (*v90 == 126) {
																		// 0x44c7c
																		*v90 = -123;
																		v91 = v1;
																		// branch -> 0x44c84
																	}
																	char *v92 = (char *)v91; // 0x44c84
																	if (*v92 == -127) {
																		// 0x44c90
																		*v92 = -123;
																		v91 = v1;
																		// branch -> 0x44c98
																	}
																	char *v93 = (char *)v91; // 0x44c98
																	if (*v93 == 2) {
																		// 0x44ca4
																		*v93 = -117;
																		v91 = v1;
																		// branch -> 0x44cac
																	}
																	char *v94 = (char *)v91; // 0x44cac
																	if (*v94 == -122) {
																		// 0x44cb8
																		*v94 = -118;
																		v91 = v1;
																		// branch -> 0x44cc0
																	}
																	char *v95 = (char *)v91; // 0x44cc0
																	v84 = v91;
																	if (*v95 == -120) {
																		// 0x44ccc
																		*v95 = -118;
																		v84 = v1;
																		// branch -> 0x44cd4
																	}
																	// 0x44cd4
																	v85 = v84 + 1;
																	v1 = v85;
																	v86 = v4 + 1;
																	v4 = v86;
																	if (v86 > g36) {
																	lab_0x44ce4:
																		// 0x44ce4
																		if (v3 == 1) {
																		lab_0x44cec_2:;
																			int32_t v96 = v2; // 0x44cec
																			g24 = v96;
																			int32_t v97; // 0x44d0c
																			if (function_44428(v96, v57) != 0) {
																				int32_t v98 = g24 - 1; // 0x44cf4
																				g24 = v98;
																				while (function_44428(v98, v57) != 0) {
																					// 0x44cf4
																					v98 = g24 - 1;
																					g24 = v98;
																					// continue -> 0x44cf4
																				}
																				// 0x44d0c
																				v97 = v2;
																				v5 = v97;
																				int32_t v99;  // 0x44d2c
																				int32_t v100; // 0x44d34
																				int32_t v101; // 0x44d78116
																				int32_t v102; // 0x44d34
																				if (function_444d8(v97, v57) != 0) {
																				lab_0x44d14:
																					while (true) {
																						int32_t v103 = v5 + 1; // 0x44d14
																						v5 = v103;
																						if (function_444d8(v103, v57) == 0) {
																							// break -> 0x44d2c
																							break;
																						}
																						// continue -> 0x44d14
																					}
																					// 0x44d2c
																					v99 = g24;
																					v100 = v58;
																					v102 = v100 + 40 * v99 + 40;
																					v1 = v102;
																					v101 = 1;
																					if (*(char *)v102 == 7) {
																					lab_0x44d48:
																						// 0x44d48
																						v101 = 0;
																						// branch -> 0x44d4c
																					}
																				lab_0x44d4c:;
																					int32_t v104 = v5;   // 0x44d4c
																					int32_t v105 = v101; // 0x44d78
																					if (*(char *)(40 * v104 - 40 + v100) == 7) {
																						// 0x44d60
																						v105 = 0;
																						// branch -> 0x44d64
																					}
																					int32_t v106 = v99 + 1; // 0x44d64
																					v3 = v106;
																					int32_t v107 = v104 - 1; // 0x44d68
																					g36 = v107;
																					int32_t v108 = v107 - v106; // 0x44d6c
																					if (v108 >= 2) {
																						// 0x44d78
																						if (v105 != 0) {
																							// 0x44d80
																							g37 = v108 - 1;
																							int32_t v109 = g24 + random(0) + 2; // 0x44d90
																							v4 = v109;
																							int32_t v110 = v3; // 0x44e5429
																							if (v110 <= g36) {
																								while (true) {
																									// 0x44d98
																									int32_t v111; // 0x44e50
																									if (v110 != v109) {
																										// 0x44da0
																										int32_t v112; // 0x44dd4
																										char *v113;   // 0x44dd4
																										int32_t v114; // 0x44df8
																										if (*(char *)v1 == 7) {
																											// 0x44dac
																											g37 = 2;
																											if (random(0) == 0) {
																												// 0x44dcc
																												*(char *)v1 = -120;
																												// branch -> 0x44dd4
																											} else {
																												// 0x44dc0
																												*(char *)v1 = -122;
																												// branch -> 0x44dd4
																											}
																											// 0x44dd4
																											v112 = v1;
																											v113 = (char *)v112;
																											v114 = v112;
																											if (*v113 == 9) {
																											lab_0x44de0:
																												// 0x44de0
																												*v113 = -126;
																												v114 = v1;
																												// branch -> 0x44de8
																											}
																										lab_0x44de8:;
																											char *v115 = (char *)v114; // 0x44de8
																											int32_t v116 = v114;       // 0x44e0c
																											if (*v115 == 121) {
																												// 0x44df4
																												*v115 = -124;
																												v116 = v1;
																												// branch -> 0x44dfc
																											}
																											char *v117 = (char *)v116; // 0x44dfc
																											if (*v117 == 124) {
																												// 0x44e08
																												*v117 = -124;
																												v116 = v1;
																												// branch -> 0x44e10
																											}
																											char *v118 = (char *)v116; // 0x44e10
																											if (*v118 == 4) {
																												// 0x44e1c
																												*v118 = -116;
																												v116 = v1;
																												// branch -> 0x44e24
																											}
																											char *v119 = (char *)v116; // 0x44e24
																											if (*v119 == -121) {
																												// 0x44e30
																												*v119 = -118;
																												v116 = v1;
																												// branch -> 0x44e38
																											}
																											char *v120 = (char *)v116; // 0x44e38
																											if (*v120 == -119) {
																												// 0x44e44
																												*v120 = -118;
																												// branch -> 0x44e4c
																											}
																											// 0x44e4c
																											v1 += 40;
																											v111 = v3 + 1;
																											v3 = v111;
																											if (v111 > g36) {
																											lab_0x44e5c:
																												// 0x44e5c
																												v64 = v2 + 1;
																												v2 = v64;
																												v7 += 40;
																												v65 = v8 + 40;
																												v8 = v65;
																												if (v64 >= 40) {
																													// break (via goto) -> 0x44e70
																													goto lab_0x44e70_5;
																												}
																												v60 = v65;
																												// continue (via goto) -> 0x44b30
																												goto lab_0x44b30_3;
																											} else {
																											lab_0x44e4c:
																												// 0x44e4c
																												v109 = v4;
																												v110 = v111;
																												// branch -> 0x44d98
																												continue;
																											}
																										}
																										// 0x44dd4
																										v112 = v1;
																										v113 = (char *)v112;
																										if (*v113 == 9) {
																											goto lab_0x44de0;
																										}
																										v114 = v112;
																										goto lab_0x44de8;
																									}
																									// 0x44e4c
																									v1 += 40;
																									v111 = v3 + 1;
																									v3 = v111;
																									if (v111 > g36) {
																										goto lab_0x44e5c;
																									}
																									goto lab_0x44e4c;
																								}
																								// 0x44e70
																								v82 = v57;
																								v62 = v82 + 1;
																								v57 = v62;
																								v83 = v58;
																								v63 = v83 + 1;
																								v58 = v63;
																								if (v62 < 40) {
																								lab_0x44e70_2:
																									// 0x44e70
																									v59 = v63;
																									// branch -> 0x44b24
																									goto lab_0x44b24;
																								}
																								// 0x44e80
																								v61 = function_44568();
																								result = function_44690(v61);
																								g10 = v81;
																								return result;
																							}
																						}
																					}
																					// 0x44e5c
																					v64 = v2 + 1;
																					v2 = v64;
																					v7 += 40;
																					v65 = v8 + 40;
																					v8 = v65;
																					if (v64 >= 40) {
																						// break (via goto) -> 0x44e70
																						goto lab_0x44e70_5;
																					}
																					v60 = v65;
																					// continue (via goto) -> 0x44b30
																					goto lab_0x44b30_3;
																				}
																			lab_0x44d2c:
																				// 0x44d2c
																				v99 = g24;
																				v100 = v58;
																				v102 = v100 + 40 * v99 + 40;
																				v1 = v102;
																				if (*(char *)v102 == 7) {
																					goto lab_0x44d48;
																				}
																				v101 = 1;
																				goto lab_0x44d4c;
																			}
																			// 0x44d0c
																			v97 = v2;
																			v5 = v97;
																			if (function_444d8(v97, v57) == 0) {
																				goto lab_0x44d2c;
																			}
																			goto lab_0x44d14;
																		}
																	lab_0x44e5c_3:
																		// 0x44e5c
																		v64 = v2 + 1;
																		v2 = v64;
																		v7 += 40;
																		v65 = v8 + 40;
																		v8 = v65;
																		if (v64 >= 40) {
																			// break (via goto) -> 0x44e70
																			goto lab_0x44e70_5;
																		}
																		v60 = v65;
																		// continue (via goto) -> 0x44b30
																		goto lab_0x44b30_3;
																	} else {
																	lab_0x44cd4:
																		// 0x44cd4
																		v79 = v85;
																		v78 = v5;
																		v80 = v86;
																		// branch -> 0x44c20
																		continue;
																	}
																}
																// 0x44c5c
																v87 = v1;
																v88 = (char *)v87;
																if (*v88 == 10) {
																	goto lab_0x44c68;
																}
																v89 = v87;
																goto lab_0x44c70;
															}
															// 0x44cd4
															v85 = v84 + 1;
															v1 = v85;
															v86 = v4 + 1;
															v4 = v86;
															if (v86 > g36) {
																goto lab_0x44ce4;
															}
															goto lab_0x44cd4;
														}
														// 0x44e70
														v82 = v57;
														v62 = v82 + 1;
														v57 = v62;
														v83 = v58;
														v63 = v83 + 1;
														v58 = v63;
														if (v62 < 40) {
															goto lab_0x44e70_2;
														}
														// 0x44e80
														v61 = function_44568();
														result = function_44690(v61);
														g10 = v81;
														return result;
													}
												}
											}
											// 0x44ce4
											if (v3 == 1) {
												goto lab_0x44cec_2;
											}
											goto lab_0x44e5c_3;
										}
									lab_0x44bb8:
										// 0x44bb8
										v72 = g24 + 1;
										v70 = v7;
										if (*(char *)(v70 + v72) == 7) {
											goto lab_0x44bcc;
										}
										v71 = 1;
										goto lab_0x44bd0;
									}
									// 0x44b98
									v68 = v57;
									v5 = v68;
									if (function_44398(v2, v68) == 0) {
										goto lab_0x44bb8;
									}
									goto lab_0x44ba0;
								}
								// 0x44ce4
								if (v3 == 1) {
									goto lab_0x44cec_2;
								}
								goto lab_0x44e5c_3;
							}
						}
					}
					// 0x44e5c
					v64 = v2 + 1;
					v2 = v64;
					v7 += 40;
					v65 = v8 + 40;
					v8 = v65;
					if (v64 >= 40) {
						// break -> 0x44e70
						break;
					}
					v60 = v65;
					// continue -> 0x44b30
				}
			lab_0x44e70_5:
				// 0x44e70
				v62 = v57 + 1;
				v57 = v62;
				v63 = v58 + 1;
				v58 = v63;
				if (v62 < 40) {
					goto lab_0x44e70_2;
				}
				// 0x44e80
				v61 = function_44568();
				result = function_44690(v61);
				return result;
			}
		}
	}
}

// Address range: 0x44e9c - 0x45090
int32_t DRLG_L3Anvil(int32_t a1)
{
	int32_t v1 = g10;                              // 0x44ea0
	int32_t v2 = g23 - 1070;                       // 0x44ea4
	int32_t v3 = *(int32_t *)(g23 - 0x7514);       // r25
	int32_t v4 = *(int32_t *)(g23 - 0x77cc);       // r26
	int32_t v5 = (int32_t) * (char *)v2;           // 0x44ebc
	int32_t v6 = (int32_t) * (char *)(g23 - 1069); // 0x44ec0
	int32_t v7 = 40 - v5;                          // 0x44ec4
	g36 = v7;
	g37 = v7;
	int32_t v8 = 40 - v6;   // 0x44ed0
	int32_t v9 = random(0); // r29
	g37 = v8;
	int32_t v10 = random(0); // 0x44ee0
	int32_t v11 = 0;
	// branch -> 0x44fc0
lab_0x44fc0:
	while (true) {
		int32_t v12 = v11; // 0x44f00
		// branch -> 0x44fc0
		while (true) {
			int32_t v13 = v12; // 0x44fc8
			int32_t v14;       // ctr
			int32_t v15;       // r10
			int32_t v16;       // r5
			int32_t v17;       // r6
			int32_t v18;       // r7
			int32_t v19;       // r8
			int32_t v20;       // 0x44fd8
			int32_t v21;       // 0x44ff8
			int32_t v22;       // 0x44ffc
			int32_t v23;       // 0x45008
			int32_t v24;       // 0x4504c55
			int32_t v25;       // 0x45058
			int32_t v26;       // 0x44fd8
			int32_t v27;       // 0x44fe8
			if (v12 < 200) {
				int32_t v28 = v4 + v10; // 0x44ef8
				int32_t v29 = v3 + v10; // 0x44efc
				int32_t v30 = v12 + 1;  // 0x44f00
				if (v6 > 0) {
					int32_t v31 = 1;      // 0x44f9044
					int32_t v32 = 0;      // 0x44f7c
					int32_t v33 = 1;      // 0x44f6c25
					int32_t v34 = v2 + 2; // 0x44f10
					int32_t v35 = 1;      // 0x44f88
					int32_t v36;
					while (true) {
						// 0x44f88
						if (v35 == 1) {
							int32_t v37 = v31; // 0x44f9040
							int32_t v38 = v33; // 0x44f6c26
							int32_t v39 = v34; // 0x44f1023
							int32_t v40;       // 0x44f74
							int32_t v41;       // 0x44f78
							int32_t v42;       // 0x44f7c
							if (v5 > 0) {
								int32_t v43 = v31; // 0x44f9043
								int32_t v44 = 0;   // 0x44f60
								int32_t v45 = v34; // 0x44f58
								int32_t v46 = v33; // 0x44f6c
								int32_t v47;       // 0x44f8818
								while (true) {
									// 0x44f6c
									if (v46 == 1) {
										unsigned char v48 = *(char *)v45; // 0x44f1c
										int32_t v49 = 40 * (v9 + v44);
										int32_t v50 = v43; // 0x44f9042
										int32_t v51 = 1;   // 0x44f8820
										if (v48 != 0) {
											// 0x44f28
											if (v48 != *(char *)(v49 + v28)) {
												// 0x44f3c
												v50 = 0;
												v51 = 0;
												// branch -> 0x44f40
											} else {
												v50 = v43;
												v51 = 1;
											}
										}
										int32_t v52 = v50; // 0x44f9041
										int32_t v53 = v51; // 0x44f8819
										if (*(char *)(v49 + v29) != 0) {
											// 0x44f54
											v52 = 0;
											v53 = 0;
											// branch -> 0x44f58
										}
										int32_t v54 = v45 + 1; // 0x44f58
										int32_t v55 = v44 + 1; // 0x44f60
										if (v55 >= v5) {
											v37 = v52;
											v38 = v53;
											v47 = v53;
											v39 = v54;
											// break -> 0x44f74
											break;
										}
										v43 = v52;
										v44 = v55;
										v45 = v54;
										v46 = v53;
										// continue -> 0x44f6c
										continue;
									} else {
										v37 = v43;
										v38 = v46;
										v47 = v46;
										v39 = v45;
									}
								}
								// 0x44f74
								v40 = v28 + 1;
								v41 = v29 + 1;
								v42 = v32 + 1;
								if (v42 >= v6) {
									v36 = v37;
									// break -> 0x44f90
									break;
								}
								v31 = v37;
								v32 = v42;
								v29 = v41;
								v28 = v40;
								v33 = v38;
								v34 = v39;
								v35 = v47;
								// continue -> 0x44f88
								continue;
							}
							// 0x44f74
							v40 = v28 + 1;
							v41 = v29 + 1;
							v42 = v32 + 1;
							if (v42 >= v6) {
								v36 = v37;
								// break -> 0x44f90
								break;
							}
							v31 = v37;
							v32 = v42;
							v29 = v41;
							v28 = v40;
							v33 = v38;
							v34 = v39;
							v35 = 1;
							// continue -> 0x44f88
							continue;
						} else {
							v36 = v31;
						}
					}
					// 0x44f90
					if (v36 != 0) {
						// 0x44fb8
						// branch -> 0x44fc8
						// 0x44fc8
						if (v30 >= 200) {
							// 0x44fd0
							// branch -> 0x4507c
							// 0x4507c
							g10 = v1;
							return 1;
						}
						// 0x44fd8
						v20 = v6;
						v26 = v5;
						v18 = v4 + v10;
						v19 = v3 + v10;
						v27 = v2 + v26 * v20 + 2;
						v17 = v27;
						if (v20 > 0) {
							v22 = v27;
							v21 = v26;
							while (true) {
								// 0x44ff4
								v14 = v21;
								v16 = v22;
								v15 = 0;
								if (v21 >= 1) {
									v23 = v22;
								lab_0x45008:
									while (true) {
										unsigned char v56 = *(char *)v23; // 0x45008
										int32_t v57 = v23;                // 0x45024
										if (v56 != 0) {
											// 0x45014
											*(char *)(v18 + 40 * (v15 + v9)) = v56;
											v57 = v16;
											// branch -> 0x45020
										}
										int32_t v58 = v15; // 0x45020
										v16 = v57 + 1;
										v17++;
										v15 = v58 + 1;
										char *v59 = (char *)(v19 + 40 * (v58 + v9)); // 0x45034
										*v59 = *v59 | -128;
										int32_t v60 = v14 - 1; // 0x45040
										v14 = v60;
										if (v60 == 0) {
											// 0x45044
											// branch -> 0x45044
											// 0x45044
											if (1 < v6) {
											lab_0x45044:
												// 0x45044
												// branch -> 0x44ff4
												break;
											}
											// 0x45058
											v25 = g23;
											*(int32_t *)*(int32_t *)(v25 - 0x754c) = v9;
											*(int32_t *)*(int32_t *)(v25 - 0x7550) = v10;
											*(int32_t *)*(int32_t *)(g23 - 0x7554) = v5;
											*(int32_t *)*(int32_t *)(g23 - 0x7558) = v6;
											// branch -> 0x4507c
											// 0x4507c
											g10 = v1;
											return 0;
										}
										// 0x45020
										v23 = v16;
										// branch -> 0x45008
									}
									int32_t v61 = v10 + 1; // 0x44fa4
									v9 = 0;
									if (v61 == v8) {
										// break (via goto) -> 0x44fb4
										goto lab_0x44fb4;
									}
									v10 = v61;
									v11 = v30;
									// continue (via goto) -> 0x44fc0
									goto lab_0x44fc0;
								}
							lab_0x45044_2:
								// 0x45044
								if (v24 + 1 < v20) {
									goto lab_0x45044;
								}
								// 0x45058
								v25 = g23;
								*(int32_t *)*(int32_t *)(v25 - 0x754c) = v9;
								*(int32_t *)*(int32_t *)(v25 - 0x7550) = v10;
								*(int32_t *)*(int32_t *)(g23 - 0x7554) = v5;
								*(int32_t *)*(int32_t *)(g23 - 0x7558) = v6;
								// branch -> 0x4507c
								// 0x4507c
								g10 = v1;
								return 0;
							}
						lab_0x44fb4:
							// 0x44fb4
							v10 = 0;
							v11 = v30;
							// branch -> 0x44fc0
							break;
						}
						// 0x45058
						v25 = g23;
						*(int32_t *)*(int32_t *)(v25 - 0x754c) = v9;
						*(int32_t *)*(int32_t *)(v25 - 0x7550) = v10;
						*(int32_t *)*(int32_t *)(g23 - 0x7554) = v5;
						*(int32_t *)*(int32_t *)(g23 - 0x7558) = v6;
						// branch -> 0x4507c
						// 0x4507c
						g10 = v1;
						return 0;
					}
				lab_0x44f98:;
					int32_t v62 = v9 + 1; // 0x44f98
					v9 = v62;
					if (v62 == g36) {
						// break -> 0x44fa4
						break;
					}
					v12 = v30;
					// continue -> 0x44fc0
					continue;
				}
				// 0x44fb8
				v13 = v30;
				// branch -> 0x44fc8
			}
			// 0x44fc8
			if (v13 >= 200) {
				// 0x44fd0
				// branch -> 0x4507c
				// 0x4507c
				g10 = v1;
				return 1;
			}
			// 0x44fd8
			v20 = v6;
			v26 = v5;
			v18 = v4 + v10;
			v19 = v3 + v10;
			v27 = v2 + v26 * v20 + 2;
			v17 = v27;
			if (v20 > 0) {
				v24 = 0;
				v22 = v27;
				v21 = v26;
				while (true) {
					// 0x44ff4
					v14 = v21;
					v16 = v22;
					v15 = 0;
					if (v21 < 1) {
						goto lab_0x45044_2;
					}
					v23 = v22;
					goto lab_0x45008;
				}
			}
			// 0x45058
			v25 = g23;
			*(int32_t *)*(int32_t *)(v25 - 0x754c) = v9;
			*(int32_t *)*(int32_t *)(v25 - 0x7550) = v10;
			*(int32_t *)*(int32_t *)(g23 - 0x7554) = v5;
			*(int32_t *)*(int32_t *)(g23 - 0x7558) = v6;
			// branch -> 0x4507c
			// 0x4507c
			g10 = v1;
			return 0;
		}
	}
}

// Address range: 0x45090 - 0x4514c
int32_t FixL3Warp(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x45090
	int32_t v2 = 0;                          // r9
	int32_t v3 = v1;                         // r5
	int32_t v4 = v1;                         // 0x450a4
	// branch -> 0x4509c
	while (true) {
		int32_t v5 = 40;  // ctr
		int32_t v6 = v4;  // r4
		int32_t v7 = 0;   // r8
		int32_t v8 = 40;  // 0x451346
		int32_t v9 = 0;   // 0x450e0
		int32_t v10 = v4; // 0x45128
		// branch -> 0x450b0
		while (true) {
			char *v11 = (char *)v10; // 0x450b0
			char v12 = *v11;         // 0x450b0
			if (v12 == 125) {
				unsigned char v13 = *(char *)(v10 + 40); // 0x450bc
				g34 = v13;
				if (v13 == 125) {
					unsigned char v14 = *(char *)(v10 + 1); // 0x450c8
					g34 = v14;
					if (v14 == 125) {
						unsigned char v15 = *(char *)(v10 + 41); // 0x450d4
						g34 = v15;
						if (v15 == 125) {
							int32_t v16 = v2 + 40 * v9 + v1; // 0x450f0
							v6 = v16;
							*(char *)v16 = -100;
							int32_t result = 153; // r3
							*(char *)(v6 + 40) = -101;
							*(char *)(v6 + 1) = (char)result;
							*(char *)(v6 + 41) = (char)154;
							return result;
						}
					}
				}
			}
			int32_t v17 = v8;  // 0x45134
			int32_t v18 = v9;  // 0x45130
			int32_t v19 = v10; // 0x4512c
			if (v12 == 5) {
				unsigned char v20 = *(char *)(v10 + 41); // 0x4511c
				g34 = v20;
				if (v20 == 7) {
					// 0x45128
					*v11 = (char)7;
					v17 = v5;
					v18 = v7;
					v19 = v6;
					// branch -> 0x4512c
				} else {
					v17 = v8;
					v18 = v9;
					v19 = v10;
				}
			}
			int32_t v21 = v19 + 40; // 0x4512c
			v6 = v21;
			int32_t v22 = v18 + 1; // 0x45130
			v7 = v22;
			int32_t v23 = v17 - 1; // 0x45134
			v5 = v23;
			if (v23 == 0) {
				// break -> 0x45138
				break;
			}
			v8 = v23;
			v9 = v22;
			v10 = v21;
			// continue -> 0x450b0
		}
		int32_t v24 = v2 + 1; // 0x45138
		v2 = v24;
		int32_t v25 = v3 + 1; // 0x4513c
		v3 = v25;
		if (v24 >= 40) {
			// break -> 0x45148
			break;
		}
		v4 = v25;
		// continue -> 0x4509c
	}
	// 0x45148
	return g34;
}

// Address range: 0x4514c - 0x453c4
int32_t FixL3HallofHeroes(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x4514c
	int32_t v2 = 0;                          // r8
	int32_t v3 = 7;                          // r3
	// branch -> 0x4515c
	int32_t v4; // ctr
	int32_t v5; // r4
	while (true) {
		// 0x4515c
		v4 = 4;
		v5 = v1;
		int32_t v6 = 0;  // r7
		int32_t v7 = v1; // 0x45184
		// branch -> 0x4516c
		while (true) {
			char *v8 = (char *)v7; // 0x4516c
			int32_t v9 = v7;       // 0x45188
			if (*v8 == 5) {
				// 0x45178
				if (*(char *)(v7 + 41) == 7) {
					// 0x45184
					*v8 = (char)v3;
					v9 = v5;
					// branch -> 0x45188
				} else {
					v9 = v7;
				}
			}
			int32_t v10 = v9 + 40;   // 0x45188
			char *v11 = (char *)v10; // 0x45188
			v5 = v10;
			int32_t v12 = v10; // 0x451a4
			if (*v11 == 5) {
				// 0x45194
				if (*(char *)(v9 + 81) == 7) {
					// 0x451a0
					*v11 = (char)v3;
					v12 = v5;
					// branch -> 0x451a4
				} else {
					v12 = v10;
				}
			}
			int32_t v13 = v12 + 40;  // 0x451a4
			char *v14 = (char *)v13; // 0x451a4
			v5 = v13;
			int32_t v15 = v6 + 1; // 0x451a8
			v6 = v15;
			int32_t v16 = v15; // 0x451c8
			int32_t v17 = v13; // 0x451c4
			if (*v14 == 5) {
				// 0x451b4
				if (*(char *)(v12 + 81) == 7) {
					// 0x451c0
					*v14 = (char)v3;
					v16 = v6;
					v17 = v5;
					// branch -> 0x451c4
				} else {
					v16 = v15;
					v17 = v13;
				}
			}
			int32_t v18 = v17 + 40;  // 0x451c4
			char *v19 = (char *)v18; // 0x451c4
			v5 = v18;
			int32_t v20 = v16 + 1; // 0x451c8
			v6 = v20;
			int32_t v21 = v20; // 0x451e8
			int32_t v22 = v18; // 0x451e4
			if (*v19 == 5) {
				// 0x451d4
				if (*(char *)(v17 + 81) == 7) {
					// 0x451e0
					*v19 = (char)v3;
					v21 = v6;
					v22 = v5;
					// branch -> 0x451e4
				} else {
					v21 = v20;
					v22 = v18;
				}
			}
			int32_t v23 = v22 + 40;  // 0x451e4
			char *v24 = (char *)v23; // 0x451e4
			v5 = v23;
			int32_t v25 = v21 + 1; // 0x451e8
			v6 = v25;
			int32_t v26 = v25; // 0x45208
			int32_t v27 = v23; // 0x45204
			if (*v24 == 5) {
				// 0x451f4
				if (*(char *)(v22 + 81) == 7) {
					// 0x45200
					*v24 = (char)v3;
					v26 = v6;
					v27 = v5;
					// branch -> 0x45204
				} else {
					v26 = v25;
					v27 = v23;
				}
			}
			int32_t v28 = v27 + 40;  // 0x45204
			char *v29 = (char *)v28; // 0x45204
			v5 = v28;
			int32_t v30 = v26 + 1; // 0x45208
			v6 = v30;
			int32_t v31 = v30; // 0x45228
			int32_t v32 = v28; // 0x45224
			if (*v29 == 5) {
				// 0x45214
				if (*(char *)(v27 + 81) == 7) {
					// 0x45220
					*v29 = (char)v3;
					v31 = v6;
					v32 = v5;
					// branch -> 0x45224
				} else {
					v31 = v30;
					v32 = v28;
				}
			}
			int32_t v33 = v32 + 40;  // 0x45224
			char *v34 = (char *)v33; // 0x45224
			v5 = v33;
			int32_t v35 = v31 + 1; // 0x45228
			v6 = v35;
			int32_t v36 = v35; // 0x45248
			int32_t v37 = v33; // 0x45244
			if (*v34 == 5) {
				// 0x45234
				if (*(char *)(v32 + 81) == 7) {
					// 0x45240
					*v34 = (char)v3;
					v36 = v6;
					v37 = v5;
					// branch -> 0x45244
				} else {
					v36 = v35;
					v37 = v33;
				}
			}
			int32_t v38 = v37 + 40;  // 0x45244
			char *v39 = (char *)v38; // 0x45244
			v5 = v38;
			int32_t v40 = v36 + 1; // 0x45248
			v6 = v40;
			int32_t v41 = v40; // 0x45268
			int32_t v42 = v38; // 0x45264
			if (*v39 == 5) {
				// 0x45254
				if (*(char *)(v37 + 81) == 7) {
					// 0x45260
					*v39 = (char)v3;
					v41 = v6;
					v42 = v5;
					// branch -> 0x45264
				} else {
					v41 = v40;
					v42 = v38;
				}
			}
			int32_t v43 = v42 + 40;  // 0x45264
			char *v44 = (char *)v43; // 0x45264
			v5 = v43;
			int32_t v45 = v41 + 1; // 0x45268
			v6 = v45;
			int32_t v46 = v45; // 0x45288
			int32_t v47 = v43; // 0x45284
			if (*v44 == 5) {
				// 0x45274
				if (*(char *)(v42 + 81) == 7) {
					// 0x45280
					*v44 = (char)v3;
					v46 = v6;
					v47 = v5;
					// branch -> 0x45284
				} else {
					v46 = v45;
					v47 = v43;
				}
			}
			int32_t v48 = v47 + 40;  // 0x45284
			char *v49 = (char *)v48; // 0x45284
			v5 = v48;
			int32_t v50 = v46 + 1; // 0x45288
			v6 = v50;
			int32_t v51 = v50; // 0x452a8
			int32_t v52 = v48; // 0x452a4
			if (*v49 == 5) {
				// 0x45294
				if (*(char *)(v47 + 81) == 7) {
					// 0x452a0
					*v49 = (char)v3;
					v51 = v6;
					v52 = v5;
					// branch -> 0x452a4
				} else {
					v51 = v50;
					v52 = v48;
				}
			}
			int32_t v53 = v52 + 40; // 0x452a4
			v5 = v53;
			v6 = v51 + 1;
			int32_t v54 = v4 - 1; // 0x452ac
			v4 = v54;
			if (v54 == 0) {
				// break -> 0x452b0
				break;
			}
			v7 = v53;
			// continue -> 0x4516c
		}
		int32_t v55 = v2 + 1; // 0x452b0
		v2 = v55;
		int32_t v56 = v1 + 1; // 0x452b4
		v1 = v56;
		if (v55 >= 40) {
			// break -> 0x452c0
			break;
		}
		v1 = v56;
		// continue -> 0x4515c
	}
	// 0x452c0
	v5 = 0;
	int32_t v57 = v1; // 0x452cc
	// branch -> 0x452c4
	int32_t result; // 0x453a4
	while (true) {
		// 0x452c4
		v4 = 20;
		v3 = v57;
		v1 = 0;
		int32_t v58 = v57; // 0x452fc
		// branch -> 0x452d4
		while (true) {
			char *v59 = (char *)v58; // 0x452d4
			int32_t v60 = v58;       // 0x45330
			int32_t v61;             // r0
			if (*v59 == 5) {
				// 0x452e0
				if (*(char *)(v58 + 41) == 12) {
					// 0x452ec
					if (*(char *)(v58 + 40) == 7) {
						// 0x452f8
						v61 = 7;
						*v59 = 7;
						*(char *)(v3 + 1) = (char)v61;
						*(char *)(v3 + 41) = (char)v61;
						v60 = v3;
						// branch -> 0x45308
					} else {
						v60 = v58;
					}
				} else {
					v60 = v58;
				}
			}
			char *v62 = (char *)v60; // 0x45308
			int32_t v63 = v60;       // 0x4533c
			if (*v62 == 5) {
				// 0x45314
				if (*(char *)(v60 + 41) == 12) {
					// 0x45320
					if (*(char *)(v60 + 1) == 7) {
						// 0x4532c
						v61 = 7;
						*v62 = 7;
						*(char *)(v3 + 40) = (char)v61;
						*(char *)(v3 + 41) = (char)v61;
						v63 = v3;
						// branch -> 0x4533c
					} else {
						v63 = v60;
					}
				} else {
					v63 = v60;
				}
			}
			int32_t v64 = v63 + 40;  // 0x4533c
			char *v65 = (char *)v64; // 0x4533c
			v3 = v64;
			int32_t v66 = v64; // 0x45398
			if (*v65 == 5) {
				// 0x45348
				if (*(char *)(v63 + 81) == 12) {
					// 0x45354
					if (*(char *)(v63 + 80) == 7) {
						// 0x45360
						v61 = 7;
						*v65 = 7;
						*(char *)(v3 + 1) = (char)v61;
						*(char *)(v3 + 41) = (char)v61;
						v66 = v3;
						// branch -> 0x45370
					} else {
						v66 = v64;
					}
				} else {
					v66 = v64;
				}
			}
			char *v67 = (char *)v66; // 0x45370
			int32_t v68 = v66;       // 0x453a4
			if (*v67 == 5) {
				// 0x4537c
				if (*(char *)(v66 + 41) == 12) {
					// 0x45388
					if (*(char *)(v66 + 1) == 7) {
						// 0x45394
						v61 = 7;
						*v67 = 7;
						*(char *)(v3 + 40) = (char)v61;
						*(char *)(v3 + 41) = (char)v61;
						v68 = v3;
						// branch -> 0x453a4
					} else {
						v68 = v66;
					}
				} else {
					v68 = v66;
				}
			}
			// 0x453a4
			result = v68 + 40;
			v3 = result;
			v1++;
			int32_t v69 = v4 - 1; // 0x453ac
			v4 = v69;
			if (v69 == 0) {
				// break -> 0x453b0
				break;
			}
			v58 = result;
			// continue -> 0x452d4
		}
		int32_t v70 = v5 + 1; // 0x453b0
		v5 = v70;
		if (v70 >= 40) {
			// break -> 0x453c0
			break;
		}
		v57 = v1 + 1;
		// continue -> 0x452c4
	}
	// 0x453c0
	return result;
}

// Address range: 0x453c4 - 0x454d8
int32_t function_453c4(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x453c4
	g31 = a1;
	g35 = *(int32_t *)(g23 - 0x7310);
	g36 = *(int32_t *)(g23 - 0x730c);
	g32 = a2;
	g33 = 0;
	g34 = 0x5dc0;
	g34 = DiabloAllocPtr();
	int32_t v1 = g33; // 0x453f8
	// branch -> 0x453f0
	while (true) {
		// 0x453f0
		int32_t v2; // 0x4540c
		int32_t v3; // 0x45428
		int32_t v4; // 0x45410
		if (v1 < 1) {
			// 0x453f0
			v3 = v1;
			v4 = g32;
			v2 = g31;
			// branch -> 0x4540c
		} else {
			int32_t v5 = v1 - 1; // 0x453f8
			g33 = v5;
			int32_t v6 = g34 + 12 * v5;  // 0x45400
			int32_t v7 = *(int32_t *)v6; // 0x45404
			g31 = v7;
			int32_t v8 = *(int32_t *)(v6 + 4); // 0x45408
			g32 = v8;
			v3 = v5;
			v4 = v8;
			v2 = v7;
			// branch -> 0x4540c
		}
		char *v9 = (char *)(40 * v2 + v4 + g36); // 0x45418
		int32_t v10 = v3;                        // 0x454b8
		if (*v9 != 0) {
			// 0x45424
			*v9 = 0;
			int32_t v11 = g33;             // 0x45430
			int32_t *v12 = (int32_t *)g35; // 0x45438
			int32_t v13 = g34 + 12 * v11;  // r8
			*v12 = *v12 + 1;
			g33 += 4;
			*(int32_t *)v13 = g31 + 1;
			*(int32_t *)(v13 + 4) = g32;
			int32_t v14 = 12 * (v3 + 1) + g34; // r9
			*(int32_t *)(v13 + 8) = 4;
			*(int32_t *)v14 = g31 - 1;
			int32_t v15 = g32; // 0x45478
			v13 = 12 * (v11 + 2) + g34;
			*(int32_t *)(v14 + 4) = v15;
			*(int32_t *)(v14 + 8) = 3;
			*(int32_t *)v13 = g31;
			int32_t v16 = 12 * (v11 + 3) + g34; // r10
			*(int32_t *)(v13 + 4) = v15 + 1;
			*(int32_t *)(v13 + 8) = 2;
			*(int32_t *)v16 = g31;
			*(int32_t *)(v16 + 4) = v15 - 1;
			*(int32_t *)(v16 + 8) = 1;
			v10 = g33;
			// branch -> 0x454b8
		}
		// 0x454b8
		if (v10 <= 0) {
			// break -> 0x454c0
			break;
		}
		v1 = v10;
		// continue -> 0x453f0
	}
	// 0x454c0
	return mem_free_dbg();
}

// Address range: 0x454d8 - 0x456d4
int32_t DRLG_L3Lockout(int32_t a1)
{
	int32_t v1 = 0;                          // r12
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x454ec
	int32_t v3 = 0;                          // r30
	int32_t v4 = *(int32_t *)(g23 - 0x730c); // 0x454f8
	// branch -> 0x45500
	int32_t v5; // r7
	int32_t v6; // r8
	while (true) {
		int32_t v7 = 5; // ctr
		v5 = v2;
		v6 = v4;
		int32_t v8 = 0;   // r11
		int32_t v9 = 1;   // r5
		int32_t v10 = 0;  // r0
		int32_t v11 = v4; // 0x4553c
		int32_t v12 = v2; // 0x4551c
		// branch -> 0x4551c
		while (true) {
			// 0x4551c
			if (*(char *)v12 == 0) {
				// 0x4553c
				*(char *)v11 = (char)v10;
				// branch -> 0x45540
			} else {
				// 0x45528
				*(char *)v11 = (char)v9;
				v3++;
				// branch -> 0x45540
			}
			int32_t v13 = v5 + 40; // 0x45540
			int32_t v14 = v6 + 40; // 0x45544
			v8++;
			if (*(char *)v13 == 0) {
				// 0x45568
				*(char *)v14 = (char)v10;
				// branch -> 0x4556c
			} else {
				// 0x45554
				*(char *)v14 = (char)v9;
				v3++;
				// branch -> 0x4556c
			}
			int32_t v15 = v13 + 40; // 0x4556c
			int32_t v16 = v14 + 40; // 0x45570
			v8++;
			if (*(char *)v15 == 0) {
				// 0x45594
				*(char *)v16 = (char)v10;
				// branch -> 0x45598
			} else {
				// 0x45580
				*(char *)v16 = (char)v9;
				v3++;
				// branch -> 0x45598
			}
			int32_t v17 = v15 + 40; // 0x45598
			int32_t v18 = v16 + 40; // 0x4559c
			v8++;
			if (*(char *)v17 == 0) {
				// 0x455c0
				*(char *)v18 = (char)v10;
				// branch -> 0x455c4
			} else {
				// 0x455ac
				*(char *)v18 = (char)v9;
				v3++;
				// branch -> 0x455c4
			}
			int32_t v19 = v17 + 40; // 0x455c4
			int32_t v20 = v18 + 40; // 0x455c8
			v8++;
			if (*(char *)v19 == 0) {
				// 0x455ec
				*(char *)v20 = (char)v10;
				// branch -> 0x455f0
			} else {
				// 0x455d8
				*(char *)v20 = (char)v9;
				v3++;
				// branch -> 0x455f0
			}
			int32_t v21 = v19 + 40; // 0x455f0
			int32_t v22 = v20 + 40; // 0x455f4
			v8++;
			if (*(char *)v21 == 0) {
				// 0x45618
				*(char *)v22 = (char)v10;
				// branch -> 0x4561c
			} else {
				// 0x45604
				*(char *)v22 = (char)v9;
				v3++;
				// branch -> 0x4561c
			}
			int32_t v23 = v21 + 40; // 0x4561c
			int32_t v24 = v22 + 40; // 0x45620
			v8++;
			if (*(char *)v23 == 0) {
				// 0x45644
				*(char *)v24 = (char)v10;
				// branch -> 0x45648
			} else {
				// 0x45630
				*(char *)v24 = (char)v9;
				v3++;
				// branch -> 0x45648
			}
			int32_t v25 = v23 + 40; // 0x45648
			int32_t v26 = v24 + 40; // 0x4564c
			v8++;
			if (*(char *)v25 == 0) {
				// 0x45670
				*(char *)v26 = (char)v10;
				// branch -> 0x45674
			} else {
				// 0x4565c
				*(char *)v26 = (char)v9;
				v3++;
				// branch -> 0x45674
			}
			int32_t v27 = v25 + 40; // 0x45674
			v5 = v27;
			int32_t v28 = v26 + 40; // 0x45678
			v6 = v28;
			v8++;
			int32_t v29 = v7 - 1; // 0x45680
			v7 = v29;
			if (v29 == 0) {
				// break -> 0x45684
				break;
			}
			v11 = v28;
			v12 = v27;
			// continue -> 0x4551c
		}
		int32_t v30 = v1 + 1; // 0x45684
		v1 = v30;
		int32_t v31 = v2 + 1; // 0x45690
		v2 = v31;
		if (v30 >= 40) {
			// break -> 0x45698
			break;
		}
		v4++;
		v2 = v31;
		// continue -> 0x45500
	}
	// 0x45698
	*(int32_t *)*(int32_t *)(g23 - 0x7310) = 0;
	function_453c4(v5, v6, v2);
	int32_t v32 = *(int32_t *)g36; // 0x456a4
	return g35 == v32;
}

// Address range: 0x456d4 - 0x45ef0
int32_t DRLG_L3(int32_t a1)
{
	int32_t v1 = g10; // 0x456d8
	g29 = *(int32_t *)(g23 - 0x77b4);
	g31 = *(int32_t *)(g23 - 0x77cc);
	*(char *)(g23 - 0x4ef8) = 0;
	// branch -> 0x45714
lab_0x45714_3:
	while (true) {
		// 0x45714
		InitL3Dungeon();
		g37 = 20;
		g25 = random(0) + 10;
		g37 = 20;
		int32_t v2 = random(0); // 0x45730
		int32_t v3 = v2 + 10;   // 0x45734
		g24 = v3;
		int32_t v4 = g25;     // 0x45738
		int32_t v5 = v4 + 2;  // 0x45738
		int32_t v6 = v2 + 12; // 0x4573c
		DRLG_L3FillRoom(v4, v3, v5, v6);
		DRLG_L3CreateBlock(g25, g24, 2, 0);
		DRLG_L3CreateBlock(v5, g24, 2, 1);
		DRLG_L3CreateBlock(g25, v6, 2, 2);
		DRLG_L3CreateBlock(g25, g24, 2, 3);
		if (QuestStatus(10) != 0) {
			// 0x457b4
			g37 = 10;
			int32_t v7 = random(0); // 0x457bc
			g37 = 10;
			int32_t v8 = random(0); // 0x457cc
			DRLG_L3FloorArea(v7 + 10, v8 + 10, v7 + 22, v8 + 22);
			// branch -> 0x457e4
		}
		int32_t v9 = DRLG_L3FillDiags(); // 0x457e4
		DRLG_L3FillStraights(DRLG_L3FillSingles(v9));
		int32_t v10 = DRLG_L3FillDiags(); // 0x457f0
		g34 = v10;
		int32_t v11 = DRLG_L3GetFloorArea(DRLG_L3Edges(v10)); // 0x457f8
		int32_t v12 = 0;
		if (v11 >= 600) {
			// 0x45804
			v12 = DRLG_L3Lockout(v11);
			// branch -> 0x45810
		}
		// 0x45810
		if (v12 != 0) {
			// break -> 0x45818
			break;
		}
		// continue -> 0x45714
	}
	// 0x45818
	DRLG_L3MakeMegas();
	int32_t v13 = g30; // 0x4581c
	int32_t v14;       // r21
	int32_t v15;       // 0x458a0
	if (v13 == 0) {
		int32_t v16 = DRLG_L3PlaceMiniSet((char *)g36, 1, 1, -1, -1, 1, 0); // 0x45840
		g34 = v16;
		v14 = v16;
		int32_t v17 = v16; // 0x45870
		if (v16 == 0) {
			int32_t v18 = DRLG_L3PlaceMiniSet((char *)g35, 1, 1, -1, -1, 0, 1); // 0x45868
			g34 = v18;
			v14 = v18;
			v17 = v18;
			// branch -> 0x45870
		}
		// 0x45870
		if (v17 == 0) {
			// 0x45878
			if (*(char *)g33 == 9) {
				// 0x45884
				v15 = DRLG_L3PlaceMiniSet((char *)g32, 1, 1, -1, -1, 0, 6);
				g34 = v15;
				v14 = v15;
				// branch -> 0x459d8
			} else {
				v15 = 0;
			}
		} else {
			v15 = v17;
		}
	} else {
		int32_t v19 = DRLG_L3PlaceMiniSet((char *)g36, 1, 1, -1, -1, 0, 0); // 0x458d0
		g34 = v19;
		v14 = v19;
		if (v13 == 1) {
			int32_t v20 = v19; // 0x45918
			if (v19 == 0) {
				int32_t v21 = DRLG_L3PlaceMiniSet((char *)g35, 1, 1, -1, -1, 1, 1); // 0x458f8
				int32_t *v22 = (int32_t *)g28;                                      // 0x458fc
				v14 = v21;
				*v22 = *v22 + 2;
				int32_t *v23 = (int32_t *)g29; // 0x4590c
				int32_t v24 = *v23;            // 0x4590c
				g34 = v24;
				*v23 = v24 - 2;
				v20 = v14;
				// branch -> 0x45918
			}
			// 0x45918
			if (v20 == 0) {
				// 0x45920
				if (*(char *)g33 == 9) {
					int32_t v25 = DRLG_L3PlaceMiniSet((char *)g32, 1, 1, -1, -1, 0, 6); // 0x45948
					g34 = v25;
					v14 = v25;
					v15 = v25;
					// branch -> 0x459d8
				} else {
					v15 = 0;
				}
			} else {
				v15 = v20;
			}
		} else {
			int32_t v26 = v19; // 0x459a0
			if (v19 == 0) {
				int32_t v27 = DRLG_L3PlaceMiniSet((char *)g35, 1, 1, -1, -1, 0, 1); // 0x45998
				g34 = v27;
				v14 = v27;
				v26 = v27;
				// branch -> 0x459a0
			}
			// 0x459a0
			if (v26 == 0) {
				// 0x459a8
				if (*(char *)g33 == 9) {
					int32_t v28 = DRLG_L3PlaceMiniSet((char *)g32, 1, 1, -1, -1, 1, 6); // 0x459d0
					g34 = v28;
					v14 = v28;
					v15 = v28;
					// branch -> 0x459d8
				} else {
					v15 = 0;
				}
			} else {
				v15 = v26;
			}
		}
		// 0x459d8
		if (v15 == 0) {
		lab_0x459e0:;
			int32_t v29 = QuestStatus(10); // 0x459e4
			g34 = v29;
			int32_t v30; // 0x459f8
			if (v29 == 0) {
				// 0x459e0
				v30 = v14;
				// branch -> 0x459f8
			} else {
				int32_t v31 = DRLG_L3Anvil(v29); // 0x459f0
				g34 = v31;
				v30 = v31;
				// branch -> 0x459f8
			}
			// 0x459f8
			if (v30 != 1) {
				// break (via goto) -> 0x45a00
				goto lab_0x45a00_2;
			}
			// continue (via goto) -> 0x45714
			goto lab_0x45714_3;
		}
	lab_0x459f8:
		// 0x459f8
		if (v15 != 1) {
			// break (via goto) -> 0x45a00
			goto lab_0x45a00_2;
		}
		// continue (via goto) -> 0x45714
		goto lab_0x45714_3;
	}
	// 0x459d8
	if (v15 == 0) {
		goto lab_0x459e0;
	}
	goto lab_0x459f8;
lab_0x45a00_2:;
	int32_t v32 = DRLG_L3Pool(); // 0x45a00
	if (*(char *)(g23 - 0x4ef8) != 0) {
		// break (via goto) -> 0x45a10
		goto lab_0x45a10;
	}
	// continue (via goto) -> 0x45714
	goto lab_0x45714_3;
lab_0x45a10:;
	int32_t v33 = DRLG_L3PoolFix(v32); // 0x45a10
	g34 = v33;
	FixL3Warp(v33);
	DRLG_L3PlaceRndSet((char *)g26, 70);
	DRLG_L3PlaceRndSet((char *)g27, 70);
	DRLG_L3PlaceRndSet((char *)(g23 - 1108), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 1094), 30);
	DRLG_L3PlaceRndSet((char *)g26, 100);
	DRLG_L3PlaceRndSet((char *)g27, 100);
	int32_t v34 = FixL3HallofHeroes(DRLG_L3PlaceRndSet((char *)(g23 - 1080), 90)); // 0x45a6c
	g34 = v34;
	DRLG_L3River(v34);
	int32_t v35;    // r27
	int32_t v36;    // r5
	int32_t v37;    // r6
	int32_t v38;    // 0x45d78
	int32_t v39;    // 0x45ec4
	int32_t result; // 0x45ed8
	int32_t v40;    // 0x45d84
	int32_t v41;    // 0x45ed0
	int32_t v42;    // 0x45ed4
	int32_t v43;    // 0x45c34
	char v44;       // 0x45e54
	char v45;       // 0x45e5c
	char v46;       // 0x45e64
	char v47;       // 0x45e6c
	char v48;       // 0x45e74
	char v49;       // 0x45e7c
	char v50;       // 0x45e84
	char v51;       // 0x45e8c
	char v52;       // 0x45e94
	char v53;       // 0x45e9c
	char v54;       // 0x45ea4
	char v55;       // 0x45eac
	char v56;       // 0x45eb4
	char v57;       // 0x45ebc
	int32_t v58;    // 0x45ae4
	if (QuestStatus(10) != 0) {
		// 0x45a84
		v36 = 7;
		int32_t v59 = *(int32_t *)*(int32_t *)(g23 - 0x7550);                  // 0x45a94
		int32_t v60 = g31 + 40 * *(int32_t *)*(int32_t *)(g23 - 0x754c) + v59; // 0x45aa0
		int32_t v61 = v60;                                                     // r3
		*(char *)(v60 + 285) = 7;
		*(char *)(v61 + 325) = (char)v36;
		*(char *)(v61 + 365) = (char)v36;
		char v62 = *(char *)(v61 + 405); // 0x45ab4
		if (v62 != 17) {
			// 0x45ac0
			if (v62 != 18) {
				// 0x45ad0
				v58 = DRLG_PlaceThemeRooms(5, 10, 7, 0, 0);
				DRLG_L3Wood(v58);
				DRLG_L3PlaceRndSet((char *)(g23 - 1480), 10);
				DRLG_L3PlaceRndSet((char *)(g23 - 1446), 10);
				DRLG_L3PlaceRndSet((char *)(g23 - 1412), 10);
				DRLG_L3PlaceRndSet((char *)(g23 - 1378), 20);
				DRLG_L3PlaceRndSet((char *)(g23 - 1336), 20);
				DRLG_L3PlaceRndSet((char *)(g23 - 1294), 20);
				DRLG_L3PlaceRndSet((char *)(g23 - 1274), 20);
				DRLG_L3PlaceRndSet((char *)(g23 - 1254), 20);
				DRLG_L3PlaceRndSet((char *)(g23 - 1234), 30);
				DRLG_L3PlaceRndSet((char *)(g23 - 1214), 20);
				DRLG_L3PlaceRndSet((char *)(g23 - 1208), 20);
				DRLG_L3PlaceRndSet((char *)(g23 - 1202), 30);
				DRLG_L3PlaceRndSet((char *)(g23 - 1196), 30);
				DRLG_L3PlaceRndSet((char *)(g23 - 1190), 30);
				DRLG_L3PlaceRndSet((char *)(g23 - 1184), 30);
				DRLG_L3PlaceRndSet((char *)(g23 - 1178), 30);
				DRLG_L3PlaceRndSet((char *)(g23 - 1172), 30);
				DRLG_L3PlaceRndSet((char *)(g23 - 1166), 30);
				DRLG_L3PlaceRndSet((char *)(g23 - 1160), 30);
				DRLG_L3PlaceRndSet((char *)(g23 - 1154), 30);
				DRLG_L3PlaceRndSet((char *)(g23 - 1148), 30);
				DRLG_L3PlaceRndSet((char *)(g23 - 1142), 30);
				DRLG_L3PlaceRndSet((char *)(g23 - 0x4f10), 25);
				DRLG_L3PlaceRndSet((char *)(g23 - 0x4f0c), 25);
				DRLG_L3PlaceRndSet((char *)(g23 - 0x4f08), 25);
				DRLG_L3PlaceRndSet((char *)(g23 - 0x4f04), 25);
				DRLG_L3PlaceRndSet((char *)(g23 - 0x4f00), 25);
				v43 = *(int32_t *)(g23 - 0x7540);
				v36 = v43;
				v37 = 0;
				*(char *)v43 = *(char *)g31;
				*(char *)(v36 + 40) = *(char *)(g31 + 40);
				*(char *)(v36 + 80) = *(char *)(g31 + 80);
				*(char *)(v36 + 120) = *(char *)(g31 + 120);
				*(char *)(v36 + 160) = *(char *)(g31 + 160);
				*(char *)(v36 + 200) = *(char *)(g31 + 200);
				*(char *)(v36 + 240) = *(char *)(g31 + 240);
				*(char *)(v36 + 280) = *(char *)(g31 + 280);
				*(char *)(v36 + 320) = *(char *)(g31 + 320);
				*(char *)(v36 + 360) = *(char *)(g31 + 360);
				*(char *)(v36 + 400) = *(char *)(g31 + 400);
				*(char *)(v36 + 440) = *(char *)(g31 + 440);
				*(char *)(v36 + 480) = *(char *)(g31 + 480);
				*(char *)(v36 + 520) = *(char *)(g31 + 520);
				*(char *)(v36 + 560) = *(char *)(g31 + 560);
				*(char *)(v36 + 600) = *(char *)(g31 + 600);
				*(char *)(v36 + 640) = *(char *)(g31 + 640);
				*(char *)(v36 + 680) = *(char *)(g31 + 680);
				*(char *)(v36 + 720) = *(char *)(g31 + 720);
				*(char *)(v36 + 760) = *(char *)(g31 + 760);
				*(char *)(v36 + 800) = *(char *)(g31 + 800);
				*(char *)(v36 + 840) = *(char *)(g31 + 840);
				*(char *)(v36 + 880) = *(char *)(g31 + 880);
				*(char *)(v36 + 920) = *(char *)(g31 + 920);
				*(char *)(v36 + 960) = *(char *)(g31 + 960);
				*(char *)(v36 + 1000) = *(char *)(g31 + 1000);
				*(char *)(v36 + 1040) = *(char *)(g31 + 1040);
				*(char *)(v36 + 1080) = *(char *)(g31 + 1080);
				*(char *)(v36 + 1120) = *(char *)(g31 + 1120);
				*(char *)(v36 + 1160) = *(char *)(g31 + 1160);
				*(char *)(v36 + 1200) = *(char *)(g31 + 1200);
				*(char *)(v36 + 1240) = *(char *)(g31 + 1240);
				*(char *)(v36 + 1280) = *(char *)(g31 + 1280);
				*(char *)(v36 + 1320) = *(char *)(g31 + 1320);
				*(char *)(v36 + 1360) = *(char *)(g31 + 1360);
				*(char *)(v36 + 1400) = *(char *)(g31 + 1400);
				*(char *)(v36 + 1440) = *(char *)(g31 + 1440);
				*(char *)(v36 + 1480) = *(char *)(g31 + 1480);
				*(char *)(v36 + 1520) = *(char *)(g31 + 1520);
				v38 = g31;
				v35 = v38 + 1;
				*(char *)(v36 + 1560) = *(char *)(v38 + 1560);
				v40 = v36 + 1;
				v36 = v40;
				v37++;
				*(char *)v40 = *(char *)v35;
				*(char *)(v36 + 40) = *(char *)(v35 + 40);
				*(char *)(v36 + 80) = *(char *)(v35 + 80);
				*(char *)(v36 + 120) = *(char *)(v35 + 120);
				*(char *)(v36 + 160) = *(char *)(v35 + 160);
				*(char *)(v36 + 200) = *(char *)(v35 + 200);
				*(char *)(v36 + 240) = *(char *)(v35 + 240);
				*(char *)(v36 + 280) = *(char *)(v35 + 280);
				*(char *)(v36 + 320) = *(char *)(v35 + 320);
				*(char *)(v36 + 360) = *(char *)(v35 + 360);
				*(char *)(v36 + 400) = *(char *)(v35 + 400);
				*(char *)(v36 + 440) = *(char *)(v35 + 440);
				*(char *)(v36 + 480) = *(char *)(v35 + 480);
				*(char *)(v36 + 520) = *(char *)(v35 + 520);
				*(char *)(v36 + 560) = *(char *)(v35 + 560);
				*(char *)(v36 + 600) = *(char *)(v35 + 600);
				*(char *)(v36 + 640) = *(char *)(v35 + 640);
				*(char *)(v36 + 680) = *(char *)(v35 + 680);
				*(char *)(v36 + 720) = *(char *)(v35 + 720);
				*(char *)(v36 + 760) = *(char *)(v35 + 760);
				*(char *)(v36 + 800) = *(char *)(v35 + 800);
				*(char *)(v36 + 840) = *(char *)(v35 + 840);
				*(char *)(v36 + 880) = *(char *)(v35 + 880);
				*(char *)(v36 + 920) = *(char *)(v35 + 920);
				*(char *)(v36 + 960) = *(char *)(v35 + 960);
				v44 = *(char *)(v35 + 1000);
				*(char *)(v36 + 1000) = v44;
				v45 = *(char *)(v35 + 1040);
				*(char *)(v36 + 1040) = v45;
				v46 = *(char *)(v35 + 1080);
				*(char *)(v36 + 1080) = v46;
				v47 = *(char *)(v35 + 1120);
				*(char *)(v36 + 1120) = v47;
				v48 = *(char *)(v35 + 1160);
				*(char *)(v36 + 1160) = v48;
				v49 = *(char *)(v35 + 1200);
				*(char *)(v36 + 1200) = v49;
				v50 = *(char *)(v35 + 1240);
				*(char *)(v36 + 1240) = v50;
				v51 = *(char *)(v35 + 1280);
				*(char *)(v36 + 1280) = v51;
				v52 = *(char *)(v35 + 1320);
				*(char *)(v36 + 1320) = v52;
				v53 = *(char *)(v35 + 1360);
				*(char *)(v36 + 1360) = v53;
				v54 = *(char *)(v35 + 1400);
				*(char *)(v36 + 1400) = v54;
				v55 = *(char *)(v35 + 1440);
				*(char *)(v36 + 1440) = v55;
				v56 = *(char *)(v35 + 1480);
				*(char *)(v36 + 1480) = v56;
				v57 = *(char *)(v35 + 1520);
				*(char *)(v36 + 1520) = v57;
				v39 = v35;
				g31 = v39 + 1;
				*(char *)(v36 + 1560) = *(char *)(v39 + 1560);
				v41 = v36 + 1;
				v36 = v41;
				v42 = 19;
				// branch -> 0x45c40
				while (v42 != 0) {
					// 0x45c40
					*(char *)v41 = *(char *)g31;
					*(char *)(v36 + 40) = *(char *)(g31 + 40);
					*(char *)(v36 + 80) = *(char *)(g31 + 80);
					*(char *)(v36 + 120) = *(char *)(g31 + 120);
					*(char *)(v36 + 160) = *(char *)(g31 + 160);
					*(char *)(v36 + 200) = *(char *)(g31 + 200);
					*(char *)(v36 + 240) = *(char *)(g31 + 240);
					*(char *)(v36 + 280) = *(char *)(g31 + 280);
					*(char *)(v36 + 320) = *(char *)(g31 + 320);
					*(char *)(v36 + 360) = *(char *)(g31 + 360);
					*(char *)(v36 + 400) = *(char *)(g31 + 400);
					*(char *)(v36 + 440) = *(char *)(g31 + 440);
					*(char *)(v36 + 480) = *(char *)(g31 + 480);
					*(char *)(v36 + 520) = *(char *)(g31 + 520);
					*(char *)(v36 + 560) = *(char *)(g31 + 560);
					*(char *)(v36 + 600) = *(char *)(g31 + 600);
					*(char *)(v36 + 640) = *(char *)(g31 + 640);
					*(char *)(v36 + 680) = *(char *)(g31 + 680);
					*(char *)(v36 + 720) = *(char *)(g31 + 720);
					*(char *)(v36 + 760) = *(char *)(g31 + 760);
					*(char *)(v36 + 800) = *(char *)(g31 + 800);
					*(char *)(v36 + 840) = *(char *)(g31 + 840);
					*(char *)(v36 + 880) = *(char *)(g31 + 880);
					*(char *)(v36 + 920) = *(char *)(g31 + 920);
					*(char *)(v36 + 960) = *(char *)(g31 + 960);
					*(char *)(v36 + 1000) = *(char *)(g31 + 1000);
					*(char *)(v36 + 1040) = *(char *)(g31 + 1040);
					*(char *)(v36 + 1080) = *(char *)(g31 + 1080);
					*(char *)(v36 + 1120) = *(char *)(g31 + 1120);
					*(char *)(v36 + 1160) = *(char *)(g31 + 1160);
					*(char *)(v36 + 1200) = *(char *)(g31 + 1200);
					*(char *)(v36 + 1240) = *(char *)(g31 + 1240);
					*(char *)(v36 + 1280) = *(char *)(g31 + 1280);
					*(char *)(v36 + 1320) = *(char *)(g31 + 1320);
					*(char *)(v36 + 1360) = *(char *)(g31 + 1360);
					*(char *)(v36 + 1400) = *(char *)(g31 + 1400);
					*(char *)(v36 + 1440) = *(char *)(g31 + 1440);
					*(char *)(v36 + 1480) = *(char *)(g31 + 1480);
					*(char *)(v36 + 1520) = *(char *)(g31 + 1520);
					v38 = g31;
					v35 = v38 + 1;
					*(char *)(v36 + 1560) = *(char *)(v38 + 1560);
					v40 = v36 + 1;
					v36 = v40;
					v37++;
					*(char *)v40 = *(char *)v35;
					*(char *)(v36 + 40) = *(char *)(v35 + 40);
					*(char *)(v36 + 80) = *(char *)(v35 + 80);
					*(char *)(v36 + 120) = *(char *)(v35 + 120);
					*(char *)(v36 + 160) = *(char *)(v35 + 160);
					*(char *)(v36 + 200) = *(char *)(v35 + 200);
					*(char *)(v36 + 240) = *(char *)(v35 + 240);
					*(char *)(v36 + 280) = *(char *)(v35 + 280);
					*(char *)(v36 + 320) = *(char *)(v35 + 320);
					*(char *)(v36 + 360) = *(char *)(v35 + 360);
					*(char *)(v36 + 400) = *(char *)(v35 + 400);
					*(char *)(v36 + 440) = *(char *)(v35 + 440);
					*(char *)(v36 + 480) = *(char *)(v35 + 480);
					*(char *)(v36 + 520) = *(char *)(v35 + 520);
					*(char *)(v36 + 560) = *(char *)(v35 + 560);
					*(char *)(v36 + 600) = *(char *)(v35 + 600);
					*(char *)(v36 + 640) = *(char *)(v35 + 640);
					*(char *)(v36 + 680) = *(char *)(v35 + 680);
					*(char *)(v36 + 720) = *(char *)(v35 + 720);
					*(char *)(v36 + 760) = *(char *)(v35 + 760);
					*(char *)(v36 + 800) = *(char *)(v35 + 800);
					*(char *)(v36 + 840) = *(char *)(v35 + 840);
					*(char *)(v36 + 880) = *(char *)(v35 + 880);
					*(char *)(v36 + 920) = *(char *)(v35 + 920);
					*(char *)(v36 + 960) = *(char *)(v35 + 960);
					v44 = *(char *)(v35 + 1000);
					*(char *)(v36 + 1000) = v44;
					v45 = *(char *)(v35 + 1040);
					*(char *)(v36 + 1040) = v45;
					v46 = *(char *)(v35 + 1080);
					*(char *)(v36 + 1080) = v46;
					v47 = *(char *)(v35 + 1120);
					*(char *)(v36 + 1120) = v47;
					v48 = *(char *)(v35 + 1160);
					*(char *)(v36 + 1160) = v48;
					v49 = *(char *)(v35 + 1200);
					*(char *)(v36 + 1200) = v49;
					v50 = *(char *)(v35 + 1240);
					*(char *)(v36 + 1240) = v50;
					v51 = *(char *)(v35 + 1280);
					*(char *)(v36 + 1280) = v51;
					v52 = *(char *)(v35 + 1320);
					*(char *)(v36 + 1320) = v52;
					v53 = *(char *)(v35 + 1360);
					*(char *)(v36 + 1360) = v53;
					v54 = *(char *)(v35 + 1400);
					*(char *)(v36 + 1400) = v54;
					v55 = *(char *)(v35 + 1440);
					*(char *)(v36 + 1440) = v55;
					v56 = *(char *)(v35 + 1480);
					*(char *)(v36 + 1480) = v56;
					v57 = *(char *)(v35 + 1520);
					*(char *)(v36 + 1520) = v57;
					v39 = v35;
					g31 = v39 + 1;
					*(char *)(v36 + 1560) = *(char *)(v39 + 1560);
					v41 = v36 + 1;
					v36 = v41;
					v42--;
					// continue -> 0x45c40
				}
				// 0x45ed8
				result = DRLG_Init_Globals();
				g10 = v1;
				return result;
			}
		}
		// 0x45ac8
		*(char *)(v61 + 405) = 45;
		// branch -> 0x45ad0
	}
	// 0x45ad0
	v58 = DRLG_PlaceThemeRooms(5, 10, 7, 0, 0);
	DRLG_L3Wood(v58);
	DRLG_L3PlaceRndSet((char *)(g23 - 1480), 10);
	DRLG_L3PlaceRndSet((char *)(g23 - 1446), 10);
	DRLG_L3PlaceRndSet((char *)(g23 - 1412), 10);
	DRLG_L3PlaceRndSet((char *)(g23 - 1378), 20);
	DRLG_L3PlaceRndSet((char *)(g23 - 1336), 20);
	DRLG_L3PlaceRndSet((char *)(g23 - 1294), 20);
	DRLG_L3PlaceRndSet((char *)(g23 - 1274), 20);
	DRLG_L3PlaceRndSet((char *)(g23 - 1254), 20);
	DRLG_L3PlaceRndSet((char *)(g23 - 1234), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 1214), 20);
	DRLG_L3PlaceRndSet((char *)(g23 - 1208), 20);
	DRLG_L3PlaceRndSet((char *)(g23 - 1202), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 1196), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 1190), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 1184), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 1178), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 1172), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 1166), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 1160), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 1154), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 1148), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 1142), 30);
	DRLG_L3PlaceRndSet((char *)(g23 - 0x4f10), 25);
	DRLG_L3PlaceRndSet((char *)(g23 - 0x4f0c), 25);
	DRLG_L3PlaceRndSet((char *)(g23 - 0x4f08), 25);
	DRLG_L3PlaceRndSet((char *)(g23 - 0x4f04), 25);
	DRLG_L3PlaceRndSet((char *)(g23 - 0x4f00), 25);
	v43 = *(int32_t *)(g23 - 0x7540);
	v36 = v43;
	v37 = 0;
	*(char *)v43 = *(char *)g31;
	*(char *)(v36 + 40) = *(char *)(g31 + 40);
	*(char *)(v36 + 80) = *(char *)(g31 + 80);
	*(char *)(v36 + 120) = *(char *)(g31 + 120);
	*(char *)(v36 + 160) = *(char *)(g31 + 160);
	*(char *)(v36 + 200) = *(char *)(g31 + 200);
	*(char *)(v36 + 240) = *(char *)(g31 + 240);
	*(char *)(v36 + 280) = *(char *)(g31 + 280);
	*(char *)(v36 + 320) = *(char *)(g31 + 320);
	*(char *)(v36 + 360) = *(char *)(g31 + 360);
	*(char *)(v36 + 400) = *(char *)(g31 + 400);
	*(char *)(v36 + 440) = *(char *)(g31 + 440);
	*(char *)(v36 + 480) = *(char *)(g31 + 480);
	*(char *)(v36 + 520) = *(char *)(g31 + 520);
	*(char *)(v36 + 560) = *(char *)(g31 + 560);
	*(char *)(v36 + 600) = *(char *)(g31 + 600);
	*(char *)(v36 + 640) = *(char *)(g31 + 640);
	*(char *)(v36 + 680) = *(char *)(g31 + 680);
	*(char *)(v36 + 720) = *(char *)(g31 + 720);
	*(char *)(v36 + 760) = *(char *)(g31 + 760);
	*(char *)(v36 + 800) = *(char *)(g31 + 800);
	*(char *)(v36 + 840) = *(char *)(g31 + 840);
	*(char *)(v36 + 880) = *(char *)(g31 + 880);
	*(char *)(v36 + 920) = *(char *)(g31 + 920);
	*(char *)(v36 + 960) = *(char *)(g31 + 960);
	*(char *)(v36 + 1000) = *(char *)(g31 + 1000);
	*(char *)(v36 + 1040) = *(char *)(g31 + 1040);
	*(char *)(v36 + 1080) = *(char *)(g31 + 1080);
	*(char *)(v36 + 1120) = *(char *)(g31 + 1120);
	*(char *)(v36 + 1160) = *(char *)(g31 + 1160);
	*(char *)(v36 + 1200) = *(char *)(g31 + 1200);
	*(char *)(v36 + 1240) = *(char *)(g31 + 1240);
	*(char *)(v36 + 1280) = *(char *)(g31 + 1280);
	*(char *)(v36 + 1320) = *(char *)(g31 + 1320);
	*(char *)(v36 + 1360) = *(char *)(g31 + 1360);
	*(char *)(v36 + 1400) = *(char *)(g31 + 1400);
	*(char *)(v36 + 1440) = *(char *)(g31 + 1440);
	*(char *)(v36 + 1480) = *(char *)(g31 + 1480);
	*(char *)(v36 + 1520) = *(char *)(g31 + 1520);
	v38 = g31;
	v35 = v38 + 1;
	*(char *)(v36 + 1560) = *(char *)(v38 + 1560);
	v40 = v36 + 1;
	v36 = v40;
	v37++;
	*(char *)v40 = *(char *)v35;
	*(char *)(v36 + 40) = *(char *)(v35 + 40);
	*(char *)(v36 + 80) = *(char *)(v35 + 80);
	*(char *)(v36 + 120) = *(char *)(v35 + 120);
	*(char *)(v36 + 160) = *(char *)(v35 + 160);
	*(char *)(v36 + 200) = *(char *)(v35 + 200);
	*(char *)(v36 + 240) = *(char *)(v35 + 240);
	*(char *)(v36 + 280) = *(char *)(v35 + 280);
	*(char *)(v36 + 320) = *(char *)(v35 + 320);
	*(char *)(v36 + 360) = *(char *)(v35 + 360);
	*(char *)(v36 + 400) = *(char *)(v35 + 400);
	*(char *)(v36 + 440) = *(char *)(v35 + 440);
	*(char *)(v36 + 480) = *(char *)(v35 + 480);
	*(char *)(v36 + 520) = *(char *)(v35 + 520);
	*(char *)(v36 + 560) = *(char *)(v35 + 560);
	*(char *)(v36 + 600) = *(char *)(v35 + 600);
	*(char *)(v36 + 640) = *(char *)(v35 + 640);
	*(char *)(v36 + 680) = *(char *)(v35 + 680);
	*(char *)(v36 + 720) = *(char *)(v35 + 720);
	*(char *)(v36 + 760) = *(char *)(v35 + 760);
	*(char *)(v36 + 800) = *(char *)(v35 + 800);
	*(char *)(v36 + 840) = *(char *)(v35 + 840);
	*(char *)(v36 + 880) = *(char *)(v35 + 880);
	*(char *)(v36 + 920) = *(char *)(v35 + 920);
	*(char *)(v36 + 960) = *(char *)(v35 + 960);
	v44 = *(char *)(v35 + 1000);
	*(char *)(v36 + 1000) = v44;
	v45 = *(char *)(v35 + 1040);
	*(char *)(v36 + 1040) = v45;
	v46 = *(char *)(v35 + 1080);
	*(char *)(v36 + 1080) = v46;
	v47 = *(char *)(v35 + 1120);
	*(char *)(v36 + 1120) = v47;
	v48 = *(char *)(v35 + 1160);
	*(char *)(v36 + 1160) = v48;
	v49 = *(char *)(v35 + 1200);
	*(char *)(v36 + 1200) = v49;
	v50 = *(char *)(v35 + 1240);
	*(char *)(v36 + 1240) = v50;
	v51 = *(char *)(v35 + 1280);
	*(char *)(v36 + 1280) = v51;
	v52 = *(char *)(v35 + 1320);
	*(char *)(v36 + 1320) = v52;
	v53 = *(char *)(v35 + 1360);
	*(char *)(v36 + 1360) = v53;
	v54 = *(char *)(v35 + 1400);
	*(char *)(v36 + 1400) = v54;
	v55 = *(char *)(v35 + 1440);
	*(char *)(v36 + 1440) = v55;
	v56 = *(char *)(v35 + 1480);
	*(char *)(v36 + 1480) = v56;
	v57 = *(char *)(v35 + 1520);
	*(char *)(v36 + 1520) = v57;
	v39 = v35;
	g31 = v39 + 1;
	*(char *)(v36 + 1560) = *(char *)(v39 + 1560);
	v41 = v36 + 1;
	v36 = v41;
	v42 = 19;
	// branch -> 0x45c40
	while (v42 != 0) {
		// 0x45c40
		*(char *)v41 = *(char *)g31;
		*(char *)(v36 + 40) = *(char *)(g31 + 40);
		*(char *)(v36 + 80) = *(char *)(g31 + 80);
		*(char *)(v36 + 120) = *(char *)(g31 + 120);
		*(char *)(v36 + 160) = *(char *)(g31 + 160);
		*(char *)(v36 + 200) = *(char *)(g31 + 200);
		*(char *)(v36 + 240) = *(char *)(g31 + 240);
		*(char *)(v36 + 280) = *(char *)(g31 + 280);
		*(char *)(v36 + 320) = *(char *)(g31 + 320);
		*(char *)(v36 + 360) = *(char *)(g31 + 360);
		*(char *)(v36 + 400) = *(char *)(g31 + 400);
		*(char *)(v36 + 440) = *(char *)(g31 + 440);
		*(char *)(v36 + 480) = *(char *)(g31 + 480);
		*(char *)(v36 + 520) = *(char *)(g31 + 520);
		*(char *)(v36 + 560) = *(char *)(g31 + 560);
		*(char *)(v36 + 600) = *(char *)(g31 + 600);
		*(char *)(v36 + 640) = *(char *)(g31 + 640);
		*(char *)(v36 + 680) = *(char *)(g31 + 680);
		*(char *)(v36 + 720) = *(char *)(g31 + 720);
		*(char *)(v36 + 760) = *(char *)(g31 + 760);
		*(char *)(v36 + 800) = *(char *)(g31 + 800);
		*(char *)(v36 + 840) = *(char *)(g31 + 840);
		*(char *)(v36 + 880) = *(char *)(g31 + 880);
		*(char *)(v36 + 920) = *(char *)(g31 + 920);
		*(char *)(v36 + 960) = *(char *)(g31 + 960);
		*(char *)(v36 + 1000) = *(char *)(g31 + 1000);
		*(char *)(v36 + 1040) = *(char *)(g31 + 1040);
		*(char *)(v36 + 1080) = *(char *)(g31 + 1080);
		*(char *)(v36 + 1120) = *(char *)(g31 + 1120);
		*(char *)(v36 + 1160) = *(char *)(g31 + 1160);
		*(char *)(v36 + 1200) = *(char *)(g31 + 1200);
		*(char *)(v36 + 1240) = *(char *)(g31 + 1240);
		*(char *)(v36 + 1280) = *(char *)(g31 + 1280);
		*(char *)(v36 + 1320) = *(char *)(g31 + 1320);
		*(char *)(v36 + 1360) = *(char *)(g31 + 1360);
		*(char *)(v36 + 1400) = *(char *)(g31 + 1400);
		*(char *)(v36 + 1440) = *(char *)(g31 + 1440);
		*(char *)(v36 + 1480) = *(char *)(g31 + 1480);
		*(char *)(v36 + 1520) = *(char *)(g31 + 1520);
		v38 = g31;
		v35 = v38 + 1;
		*(char *)(v36 + 1560) = *(char *)(v38 + 1560);
		v40 = v36 + 1;
		v36 = v40;
		v37++;
		*(char *)v40 = *(char *)v35;
		*(char *)(v36 + 40) = *(char *)(v35 + 40);
		*(char *)(v36 + 80) = *(char *)(v35 + 80);
		*(char *)(v36 + 120) = *(char *)(v35 + 120);
		*(char *)(v36 + 160) = *(char *)(v35 + 160);
		*(char *)(v36 + 200) = *(char *)(v35 + 200);
		*(char *)(v36 + 240) = *(char *)(v35 + 240);
		*(char *)(v36 + 280) = *(char *)(v35 + 280);
		*(char *)(v36 + 320) = *(char *)(v35 + 320);
		*(char *)(v36 + 360) = *(char *)(v35 + 360);
		*(char *)(v36 + 400) = *(char *)(v35 + 400);
		*(char *)(v36 + 440) = *(char *)(v35 + 440);
		*(char *)(v36 + 480) = *(char *)(v35 + 480);
		*(char *)(v36 + 520) = *(char *)(v35 + 520);
		*(char *)(v36 + 560) = *(char *)(v35 + 560);
		*(char *)(v36 + 600) = *(char *)(v35 + 600);
		*(char *)(v36 + 640) = *(char *)(v35 + 640);
		*(char *)(v36 + 680) = *(char *)(v35 + 680);
		*(char *)(v36 + 720) = *(char *)(v35 + 720);
		*(char *)(v36 + 760) = *(char *)(v35 + 760);
		*(char *)(v36 + 800) = *(char *)(v35 + 800);
		*(char *)(v36 + 840) = *(char *)(v35 + 840);
		*(char *)(v36 + 880) = *(char *)(v35 + 880);
		*(char *)(v36 + 920) = *(char *)(v35 + 920);
		*(char *)(v36 + 960) = *(char *)(v35 + 960);
		v44 = *(char *)(v35 + 1000);
		*(char *)(v36 + 1000) = v44;
		v45 = *(char *)(v35 + 1040);
		*(char *)(v36 + 1040) = v45;
		v46 = *(char *)(v35 + 1080);
		*(char *)(v36 + 1080) = v46;
		v47 = *(char *)(v35 + 1120);
		*(char *)(v36 + 1120) = v47;
		v48 = *(char *)(v35 + 1160);
		*(char *)(v36 + 1160) = v48;
		v49 = *(char *)(v35 + 1200);
		*(char *)(v36 + 1200) = v49;
		v50 = *(char *)(v35 + 1240);
		*(char *)(v36 + 1240) = v50;
		v51 = *(char *)(v35 + 1280);
		*(char *)(v36 + 1280) = v51;
		v52 = *(char *)(v35 + 1320);
		*(char *)(v36 + 1320) = v52;
		v53 = *(char *)(v35 + 1360);
		*(char *)(v36 + 1360) = v53;
		v54 = *(char *)(v35 + 1400);
		*(char *)(v36 + 1400) = v54;
		v55 = *(char *)(v35 + 1440);
		*(char *)(v36 + 1440) = v55;
		v56 = *(char *)(v35 + 1480);
		*(char *)(v36 + 1480) = v56;
		v57 = *(char *)(v35 + 1520);
		*(char *)(v36 + 1520) = v57;
		v39 = v35;
		g31 = v39 + 1;
		*(char *)(v36 + 1560) = *(char *)(v39 + 1560);
		v41 = v36 + 1;
		v36 = v41;
		v42--;
		// continue -> 0x45c40
	}
	// 0x45ed8
	result = DRLG_Init_Globals();
	g10 = v1;
	return result;
}

// Address range: 0x45ef0 - 0x461a8
int32_t function_45ef0(void)
{
	int32_t v1 = g36;                        // 0x45ef0
	int32_t v2 = *(int32_t *)(g23 - 0x756c); // 0x45ef8
	g36 = v2;
	int32_t v3 = g35; // 0x45efc
	g35 = *(int32_t *)(g23 - 0x757c);
	g34 = *(int32_t *)v2;
	int32_t v4 = function_c9948();                     // 0x45f18
	int32_t v5 = g11 + v4 + 56;                        // 0x45f20
	unsigned char v6 = *(char *)v5;                    // 0x45f20
	unsigned char v7 = *(char *)(v5 + 1);              // 0x45f20
	int32_t v8 = 256 * (int16_t)v7 | (int16_t)v6;      // 0x45f28
	unsigned char v9 = *(char *)(v4 + 58);             // 0x45f30
	unsigned char v10 = *(char *)(v4 + 59);            // 0x45f30
	int32_t v11 = 256 * (int16_t)v10 | (int16_t)v9;    // 0x45f38
	unsigned char v12 = *(char *)(v4 + 60);            // 0x45f40
	unsigned char v13 = *(char *)(v4 + 61);            // 0x45f40
	int32_t v14 = 256 * (int16_t)v13 | (int16_t)v12;   // 0x45f48
	unsigned char v15 = *(char *)(v4 + 62);            // 0x45f50
	unsigned char v16 = *(char *)(v4 + 63);            // 0x45f50
	int32_t v17 = 0;                                   // r11
	int32_t v18 = 256 * (int16_t)v16 | (int16_t)v15;   // 0x45f58
	int32_t v19 = 0;                                   // r10
	int32_t v20 = 0x10000 * (v8 + 1) / 0x10000;        // r8
	int32_t v21 = 0x10000 * (v11 + 1) / 0x10000;       // r7
	int32_t v22 = 0x10000 * (v14 + 1) / 0x10000;       // r6
	int32_t v23 = (0x10000 * v18 + 0x10000) / 0x10000; // r5
	int32_t v24 = 0;                                   // 0x45f883
	                                                   // branch -> 0x45f74
lab_0x45f74:
	while (true) {
		int32_t v25 = 14;  // ctr
		int32_t v26 = 0;   // r9
		int32_t v27 = v24; // 0x45f88
		int32_t v28 = 0;   // 0x45f84
		// branch -> 0x45f80
		while (true) {
			int32_t v29 = *(int32_t *)g35; // 0x45f80
			*(int16_t *)(v29 + v28 + v27) = (int16_t)v20;
			int32_t v30 = v26 + *(int32_t *)g35; // 0x45f90
			*(int16_t *)(v19 + v30 + 224) = (int16_t)v21;
			int32_t v31 = v26 + *(int32_t *)g35; // 0x45fa0
			*(int16_t *)(v19 + v31 + 2) = (int16_t)v22;
			int32_t v32 = v26;                   // 0x45fb0
			int32_t v33 = v32 + *(int32_t *)g35; // 0x45fb0
			v26 = v32 + 448;
			*(int16_t *)(v19 + v33 + 226) = (int16_t)v23;
			int32_t v34 = *(int32_t *)g35; // 0x45fc0
			*(int16_t *)(v19 + v26 + v34) = (int16_t)v20;
			int32_t v35 = v26 + *(int32_t *)g35; // 0x45fd0
			*(int16_t *)(v19 + v35 + 224) = (int16_t)v21;
			int32_t v36 = v26 + *(int32_t *)g35; // 0x45fe0
			*(int16_t *)(v19 + v36 + 2) = (int16_t)v22;
			int32_t v37 = v26;                   // 0x45ff0
			int32_t v38 = v37 + *(int32_t *)g35; // 0x45ff0
			v26 = v37 + 448;
			*(int16_t *)(v19 + v38 + 226) = (int16_t)v23;
			int32_t v39 = *(int32_t *)g35; // 0x46000
			*(int16_t *)(v19 + v26 + v39) = (int16_t)v20;
			int32_t v40 = v26 + *(int32_t *)g35; // 0x46010
			*(int16_t *)(v19 + v40 + 224) = (int16_t)v21;
			int32_t v41 = v26 + *(int32_t *)g35; // 0x46020
			*(int16_t *)(v19 + v41 + 2) = (int16_t)v22;
			int32_t v42 = v26;                   // 0x46030
			int32_t v43 = v42 + *(int32_t *)g35; // 0x46030
			v26 = v42 + 448;
			*(int16_t *)(v19 + v43 + 226) = (int16_t)v23;
			int32_t v44 = *(int32_t *)g35; // 0x46040
			*(int16_t *)(v19 + v26 + v44) = (int16_t)v20;
			int32_t v45 = v26 + *(int32_t *)g35; // 0x46050
			*(int16_t *)(v19 + v45 + 224) = (int16_t)v21;
			int32_t v46 = v26 + *(int32_t *)g35; // 0x46060
			*(int16_t *)(v19 + v46 + 2) = (int16_t)v22;
			int32_t v47 = v26;                   // 0x46070
			int32_t v48 = v47 + *(int32_t *)g35; // 0x46070
			v26 = v47 + 448;
			*(int16_t *)(v19 + v48 + 226) = (int16_t)v23;
			int32_t v49 = v25 - 1; // 0x46080
			v25 = v49;
			if (v49 == 0) {
				int32_t v50 = v17 + 2; // 0x46084
				v17 = v50;
				int32_t v51 = v19 + 4; // 0x46088
				v19 = v51;
				if (v50 >= 112) {
					// break (via goto) -> 0x46094
					goto lab_0x46094;
				}
				v24 = v51;
				// continue (via goto) -> 0x45f74
				goto lab_0x45f74;
			} else {
				// 0x45f80
				v27 = v19;
				v28 = v26;
				// branch -> 0x45f80
				continue;
			}
		}
	lab_0x46094:;
		int32_t v52 = *(int32_t *)(g23 - 0x77cc); // 0x46094
		v22 = v52;
		v20 = 0;
		v21 = 32;
		// branch -> 0x460a0
	lab_0x460a0:
		while (true) {
			// 0x460a0
			v25 = 40;
			v23 = 3584;
			int32_t v53 = v52; // 0x46120
			// branch -> 0x460b0
			while (true) {
				unsigned char v54 = *(char *)v53; // 0x460b0
				int32_t v55;                      // r29
				int32_t v56;
				int32_t v57; // 0x46118
				int32_t v58; // 0x4611c
				if (v54 == 0) {
					// 0x46104
					v55 = 0;
					v58 = 0;
					v57 = 0;
					v56 = 0;
					// branch -> 0x46114
				} else {
					int32_t v59 = 8 * (int32_t)v54 - 8;              // 0x460bc
					int32_t v60 = v4 + v59;                          // 0x460c0
					int32_t v61 = v60 + v59;                         // 0x460c4
					unsigned char v62 = *(char *)v61;                // 0x460c4
					unsigned char v63 = *(char *)(v61 + 1);          // 0x460c4
					unsigned char v64 = *(char *)(v60 + 2);          // 0x460d4
					unsigned char v65 = *(char *)(v60 + 3);          // 0x460d4
					unsigned char v66 = *(char *)(v60 + 4);          // 0x460e4
					unsigned char v67 = *(char *)(v60 + 5);          // 0x460e4
					int32_t v68 = 256 * (int16_t)v67 | (int16_t)v66; // 0x460ec
					v55 = v68 + 1;
					unsigned char v69 = *(char *)(v60 + 6); // 0x460f4
					unsigned char v70 = *(char *)(v60 + 7); // 0x460f4
					v58 = (int32_t)(256 * (int16_t)v65 | (int16_t)v64) + 1;
					v57 = (int32_t)(256 * (int16_t)v63 | (int16_t)v62) + 1;
					v56 = (int32_t)(256 * (int16_t)v70 | (int16_t)v69) + 1;
					// branch -> 0x46114
				}
				int32_t v71 = *(int32_t *)g35;         // 0x46114
				int32_t v72 = 0x10000 * v57 / 0x10000; // 0x46118
				int32_t v73 = v53 + 40;                // r4
				*(int16_t *)(v21 + v23 + v71) = (int16_t)v72;
				int32_t v74 = v23 + *(int32_t *)g35;   // 0x46138
				int32_t v75 = 0x10000 * v58 / 0x10000; // 0x46140
				*(int16_t *)(v21 + v74 + 224) = (int16_t)v75;
				int32_t v76 = v23 + *(int32_t *)g35;   // 0x46148
				int32_t v77 = 0x10000 * v55 / 0x10000; // 0x46150
				*(int16_t *)(v21 + v76 + 2) = (int16_t)v77;
				int32_t v78 = v23;                   // 0x46158
				int32_t v79 = v78 + *(int32_t *)g35; // 0x46158
				v23 = v78 + 448;
				int32_t v80 = 0x10000 * v56 / 0x10000; // 0x46164
				*(int16_t *)(v21 + v79 + 226) = (int16_t)v80;
				int32_t v81 = v25 - 1; // 0x46168
				v25 = v81;
				if (v81 == 0) {
					int32_t v82 = v20 + 1; // 0x4616c
					v20 = v82;
					int32_t v83 = v22 + 1; // 0x46170
					v22 = v83;
					v21 += 4;
					if (v82 >= 40) {
						// break (via goto) -> 0x46180
						goto lab_0x46180;
					}
					v52 = v83;
					// continue (via goto) -> 0x460a0
					goto lab_0x460a0;
				} else {
					// 0x46114
					v53 = v73;
					// branch -> 0x460b0
					continue;
				}
			}
		lab_0x46180:;
			int32_t result = function_c9acc(*(int32_t *)g36); // 0x46184
			g36 = v1;
			g35 = v3;
			return result;
		}
	}
}

// Address range: 0x461a8 - 0x462e0
int32_t CreateL3Dungeon(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x461a8
	SetRndSeed();
	int32_t v1 = 96; // r0
	*(int32_t *)*(int32_t *)(g23 - 0x7530) = 16;
	*(int32_t *)*(int32_t *)(g23 - 0x7534) = 16;
	int32_t v2 = *(int32_t *)(g23 - 0x753c); // 0x461e0
	*(int32_t *)*(int32_t *)(g23 - 0x7538) = v1;
	*(int32_t *)v2 = v1;
	DRLG_InitSetPC(DRLG_InitTrans(v2));
	DRLG_L3(a1);
	function_45ef0();
	g31 = 0;
	g33 = 0;
	int32_t v3 = 0; // 0x462182
	                // branch -> 0x46208
lab_0x46208:
	while (true) {
		// 0x46208
		g32 = 0;
		g35 = 0;
		int32_t v4 = 0;  // 0x46274
		int32_t v5 = v3; // 0x46218
		int32_t v6 = 0;  // 0x46214
		// branch -> 0x46210
		while (true) {
			uint16_t v7 = *(int16_t *)(*(int32_t *)g36 + v6 + v5); // 0x46218
			if (v7 >= 56) {
				// 0x46224
				int32_t v8; // 0x462a8
				int32_t v9; // 0x462ac
				if (v7 <= 147) {
					// 0x4622c
					function_c9ebc(v4, g31, 7, -1);
					// branch -> 0x462a8
				lab_0x462a8_4:
					// 0x462a8
					v8 = g32 + 1;
					g32 = v8;
					v9 = g35 + 224;
					g35 = v9;
					if (v8 < 112) {
					lab_0x462a8_5:
						// 0x462a8
						v4 = v8;
						v5 = g33;
						v6 = v9;
						// branch -> 0x46210
						continue;
					} else {
					lab_0x462b8:;
						int32_t v10 = g31 + 1; // 0x462b8
						g31 = v10;
						int32_t v11 = g33 + 2; // 0x462bc
						g33 = v11;
						if (v10 >= 112) {
							// break (via goto) -> 0x462c8
							goto lab_0x462c8;
						}
						v3 = v11;
						// continue (via goto) -> 0x46208
						goto lab_0x46208;
					}
				}
				// 0x46244
				if (v7 >= 154) {
				lab_0x4624c:
					// 0x4624c
					if (v7 <= 161) {
						// 0x46254
						function_c9ebc(v4, g31, 7, -1);
						// branch -> 0x462a8
						goto lab_0x462a8_4;
					}
				}
			lab_0x4626c:
				// 0x4626c
				if (v7 == 150) {
					// 0x46274
					function_c9ebc(v4, g31, 7, -1);
					// branch -> 0x462a8
					goto lab_0x462a8_4;
				} else {
					// 0x4628c
					if (v7 != 152) {
						goto lab_0x462a8_4;
					}
					// 0x46294
					function_c9ebc(v4, g31, 7, -1);
					// branch -> 0x462a8
					goto lab_0x462a8_4;
				}
				int32_t v12 = g32; // 0x462a8
				v8 = v12 + 1;
				g32 = v8;
				int32_t v13 = g35; // 0x462ac
				v9 = v13 + 224;
				g35 = v9;
				if (v8 < 112) {
					goto lab_0x462a8_5;
				}
				goto lab_0x462b8;
			}
			// 0x46244
			if (v7 < 154) {
				goto lab_0x4626c;
			}
			goto lab_0x4624c;
		}
	lab_0x462c8:
		// 0x462c8
		return DRLG_SetPC();
	}
}

// Address range: 0x462e0 - 0x465d4
int32_t LoadL3Dungeon(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x462e0
	g36 = *(int32_t *)(g23 - 0x757c);
	InitL3Dungeon();
	int32_t v1 = 96; // r0
	*(int32_t *)*(int32_t *)(g23 - 0x7530) = 16;
	*(int32_t *)*(int32_t *)(g23 - 0x7534) = 16;
	int32_t v2 = *(int32_t *)(g23 - 0x753c); // 0x46320
	*(int32_t *)*(int32_t *)(g23 - 0x7538) = v1;
	*(int32_t *)v2 = v1;
	DRLG_InitTrans(v2);
	int32_t v3 = LoadFileInMem(a1, NULL); // 0x46338
	int32_t v4 = v3;                      // bp-40
	g34 = v3;
	int32_t v5 = function_c9948();           // 0x46344
	int32_t v6 = *(int32_t *)(g23 - 0x77cc); // 0x46348
	int32_t v7 = v6;                         // r6
	int32_t v8 = v5 + 4;                     // 0x4634c
	int32_t v9 = (int32_t) * (char *)v5;     // 0x46350
	int32_t v10 = 0;                         // r7
	unsigned char v11 = *(char *)(v5 + 2);   // 0x46358
	int32_t v12 = v11;                       // 0x46358
	int32_t v13 = v6;                        // r4
	int32_t v14;                             // ctr
	int32_t v15;                             // r3
	int32_t v16;                             // r5
	int32_t v17;                             // 0x463bc
	int32_t v18;                             // 0x463d0
	if (v11 != 0) {
		int32_t v19 = v12; // 0x463a415
		int32_t v20 = 0;   // 0x463a013
		int32_t v21 = v6;  // 0x46370
		int32_t v22 = v9;  // 0x4636c
		while (true) {
			// 0x46368
			v14 = v22;
			v15 = v21;
			int32_t v23 = v19; // 0x463a4
			int32_t v24 = v20; // 0x463a0
			int32_t v25 = v21; // 0x4639c
			int32_t v26 = v8;  // 0x4637810
			if (v22 >= 1) {
				int32_t v27 = v21; // 0x4638c
				int32_t v28 = v8;  // 0x46378
				int32_t v29;       // 0x46390
				while (true) {
					unsigned char v30 = *(char *)v28; // 0x46378
					if (v30 == 0) {
						// 0x4638c
						*(char *)v27 = (char)7;
						// branch -> 0x46390
					} else {
						// 0x46384
						*(char *)v27 = v30;
						// branch -> 0x46390
					}
					// 0x46390
					v29 = v8 + 2;
					v8 = v29;
					int32_t v31 = v15 + 40; // 0x46394
					v15 = v31;
					int32_t v32 = v14 - 1; // 0x46398
					v14 = v32;
					if (v32 == 0) {
						// break -> 0x4639c
						break;
					}
					v27 = v31;
					v28 = v29;
					// continue -> 0x46378
				}
				// 0x4639c
				v23 = v12;
				v24 = v10;
				v25 = v13;
				v26 = v29;
				// branch -> 0x4639c
			}
			int32_t v33 = v25 + 1; // 0x4639c
			v13 = v33;
			int32_t v34 = v24 + 1; // 0x463a0
			v10 = v34;
			if (v34 < v23) {
				// 0x4639c
				v19 = v23;
				v20 = v34;
				v8 = v26;
				v21 = v33;
				v22 = v9;
				// branch -> 0x46368
				continue;
			} else {
				// 0x463a4
				// branch -> 0x463ac
				// 0x463ac
				v16 = 0;
				v15 = 8;
				v17 = v7;
				// branch -> 0x463b4
				while (true) {
					// 0x463b4
					v14 = 4;
					v13 = v17;
					v10 = 0;
					v18 = v17;
					// branch -> 0x463c4
				lab_0x463c4:
					while (true) {
						char *v35 = (char *)v18; // 0x463c4
						int32_t v36 = v18;       // 0x463d4
						if (*v35 == 0) {
							// 0x463d0
							*v35 = (char)v15;
							v36 = v13;
							// branch -> 0x463d4
						}
						int32_t v37 = v36 + 40;  // 0x463d4
						char *v38 = (char *)v37; // 0x463d4
						v13 = v37;
						if (*v38 == 0) {
							// 0x463e0
							*v38 = (char)v15;
							v37 = v13;
							// branch -> 0x463e4
						}
						int32_t v39 = v37 + 40;  // 0x463e4
						char *v40 = (char *)v39; // 0x463e4
						v13 = v39;
						int32_t v41 = v10 + 1; // 0x463e8
						v10 = v41;
						if (*v40 == 0) {
							// 0x463f4
							*v40 = (char)v15;
							v41 = v10;
							v39 = v13;
							// branch -> 0x463f8
						}
						int32_t v42 = v39 + 40;  // 0x463f8
						char *v43 = (char *)v42; // 0x463f8
						v13 = v42;
						int32_t v44 = v41 + 1; // 0x463fc
						v10 = v44;
						if (*v43 == 0) {
							// 0x46408
							*v43 = (char)v15;
							v44 = v10;
							v42 = v13;
							// branch -> 0x4640c
						}
						int32_t v45 = v42 + 40;  // 0x4640c
						char *v46 = (char *)v45; // 0x4640c
						v13 = v45;
						int32_t v47 = v44 + 1; // 0x46410
						v10 = v47;
						if (*v46 == 0) {
							// 0x4641c
							*v46 = (char)v15;
							v47 = v10;
							v45 = v13;
							// branch -> 0x46420
						}
						int32_t v48 = v45 + 40;  // 0x46420
						char *v49 = (char *)v48; // 0x46420
						v13 = v48;
						int32_t v50 = v47 + 1; // 0x46424
						v10 = v50;
						if (*v49 == 0) {
							// 0x46430
							*v49 = (char)v15;
							v50 = v10;
							v48 = v13;
							// branch -> 0x46434
						}
						int32_t v51 = v48 + 40;  // 0x46434
						char *v52 = (char *)v51; // 0x46434
						v13 = v51;
						int32_t v53 = v50 + 1; // 0x46438
						v10 = v53;
						if (*v52 == 0) {
							// 0x46444
							*v52 = (char)v15;
							v53 = v10;
							v51 = v13;
							// branch -> 0x46448
						}
						int32_t v54 = v51 + 40;  // 0x46448
						char *v55 = (char *)v54; // 0x46448
						v13 = v54;
						int32_t v56 = v53 + 1; // 0x4644c
						v10 = v56;
						if (*v55 == 0) {
							// 0x46458
							*v55 = (char)v15;
							v56 = v10;
							v54 = v13;
							// branch -> 0x4645c
						}
						int32_t v57 = v54 + 40;  // 0x4645c
						char *v58 = (char *)v57; // 0x4645c
						v13 = v57;
						int32_t v59 = v56 + 1; // 0x46460
						v10 = v59;
						if (*v58 == 0) {
							// 0x4646c
							*v58 = (char)v15;
							v59 = v10;
							v57 = v13;
							// branch -> 0x46470
						}
						int32_t v60 = v57 + 40;  // 0x46470
						char *v61 = (char *)v60; // 0x46470
						v13 = v60;
						int32_t v62 = v59 + 1; // 0x46474
						v10 = v62;
						if (*v61 == 0) {
							// 0x46480
							*v61 = (char)v15;
							v62 = v10;
							v60 = v13;
							// branch -> 0x46484
						}
						int32_t v63 = v60 + 40; // 0x46484
						v13 = v63;
						v10 = v62 + 1;
						int32_t v64 = v14 - 1; // 0x4648c
						v14 = v64;
						if (v64 == 0) {
							// break -> 0x46490
							break;
						}
						v18 = v63;
						// continue -> 0x463c4
					}
					int32_t v65 = v16 + 1; // 0x46490
					v16 = v65;
					int32_t v66 = v7 + 1; // 0x46494
					v7 = v66;
					if (v65 >= 40) {
						// break -> 0x464a0
						break;
					}
					v17 = v66;
					// continue -> 0x463b4
				}
				// 0x464a0
				*(int32_t *)(g23 - 0x4ef4) = 112;
				function_45ef0();
				DRLG_Init_Globals();
				*(int32_t *)*(int32_t *)(g23 - 0x77b0) = 31;
				*(int32_t *)*(int32_t *)(g23 - 0x77b4) = 83;
				int32_t v67 = v4; // 0x464d0
				SetMapMonsters(v67, 0, 0);
				SetMapObjects(v67, 0, 0);
				g32 = 0;
				g33 = 0;
				int32_t v68 = 0; // 0x4650038
				                 // branch -> 0x464f0
			lab_0x464f0:
				while (true) {
					// 0x464f0
					g31 = 0;
					g35 = 0;
					int32_t v69 = 0;   // 0x4655c
					int32_t v70 = v68; // 0x46500
					int32_t v71 = 0;   // 0x464fc
					// branch -> 0x464f8
					while (true) {
						uint16_t v72 = *(int16_t *)(*(int32_t *)g36 + v71 + v70); // 0x46500
						int32_t v73;                                              // 0x46590
						int32_t v74;                                              // 0x46594
						if (v72 >= 56) {
							// 0x4650c
							if (v72 <= 147) {
								// 0x46514
								function_c9ebc(v69, g32, 7, -1);
								// branch -> 0x46590
							lab_0x46590_4:
								// 0x46590
								v73 = g31 + 1;
								g31 = v73;
								v74 = g35 + 224;
								g35 = v74;
								if (v73 < 112) {
								lab_0x46590_5:
									// 0x46590
									v69 = v73;
									v70 = g33;
									v71 = v74;
									// branch -> 0x464f8
									continue;
								} else {
								lab_0x465a0:;
									int32_t v75 = g32 + 1; // 0x465a0
									g32 = v75;
									int32_t v76 = g33 + 2; // 0x465a4
									g33 = v76;
									if (v75 >= 112) {
										// break (via goto) -> 0x465b0
										goto lab_0x465b0;
									}
									v68 = v76;
									// continue (via goto) -> 0x464f0
									goto lab_0x464f0;
								}
							}
						}
						// 0x4652c
						if (v72 >= 154) {
							// 0x46534
							if (v72 <= 161) {
								// 0x4653c
								function_c9ebc(v69, g32, 7, -1);
								// branch -> 0x46590
								goto lab_0x46590_4;
							}
						}
						// 0x46554
						if (v72 == 150) {
							// 0x4655c
							function_c9ebc(v69, g32, 7, -1);
							// branch -> 0x46590
							goto lab_0x46590_4;
						} else {
							// 0x46574
							if (v72 != 152) {
								goto lab_0x46590_4;
							}
							// 0x4657c
							function_c9ebc(v69, g32, 7, -1);
							// branch -> 0x46590
							goto lab_0x46590_4;
						}
						int32_t v77 = g31; // 0x46590
						v73 = v77 + 1;
						g31 = v73;
						int32_t v78 = g35; // 0x46594
						v74 = v78 + 224;
						g35 = v74;
						if (v73 < 112) {
							goto lab_0x46590_5;
						}
						goto lab_0x465a0;
					}
				lab_0x465b0:
					// 0x465b0
					function_c9acc(v4);
					int32_t result = MemFreeDbg(&v4); // 0x465bc
					return result;
				}
			}
		}
	}
	// 0x463ac
	v16 = 0;
	v15 = 8;
	v17 = v6;
	// branch -> 0x463b4
	while (true) {
		// 0x463b4
		v14 = 4;
		v13 = v17;
		v10 = 0;
		v18 = v17;
		// branch -> 0x463c4
		goto lab_0x463c4;
	}
}

// Address range: 0x465d4 - 0x467ac
int32_t LoadPreL3Dungeon(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x465d4
	g36 = *(int32_t *)(g23 - 0x77cc);
	int32_t v1 = g35; // 0x465e0
	g35 = a1;
	DRLG_InitTrans(InitL3Dungeon());
	int32_t v2 = LoadFileInMem(g35, NULL); // 0x46608
	int32_t v3 = v2;                       // bp-24
	g34 = v2;
	int32_t v4 = function_c9948();        // 0x46614
	int32_t v5 = (int32_t) * (char *)v4;  // 0x46618
	int32_t v6 = g36;                     // 0x4661c
	unsigned char v7 = *(char *)(v4 + 2); // 0x46620
	int32_t v8 = v7;                      // 0x46620
	int32_t v9 = v4 + 4;                  // 0x46624
	int32_t v10 = 0;                      // r6
	int32_t v11;                          // ctr
	int32_t v12;                          // r3
	int32_t v13;                          // r5
	int32_t v14;                          // r7
	int32_t v15;                          // 0x4668c
	int32_t v16;                          // 0x466a0
	if (v7 != 0) {
		int32_t v17 = v8; // 0x4667015
		int32_t v18 = 0;  // 0x4666c13
		int32_t v19 = v5; // 0x46638
		while (true) {
			// 0x46634
			v11 = v19;
			v12 = v6;
			int32_t v20 = v17; // 0x46670
			int32_t v21 = v18; // 0x4666c
			int32_t v22 = v9;  // 0x4664410
			if (v19 >= 1) {
				int32_t v23 = v6; // 0x46658
				int32_t v24 = v9; // 0x46644
				int32_t v25;      // 0x4665c
				while (true) {
					unsigned char v26 = *(char *)v24; // 0x46644
					if (v26 == 0) {
						// 0x46658
						*(char *)v23 = (char)7;
						// branch -> 0x4665c
					} else {
						// 0x46650
						*(char *)v23 = v26;
						// branch -> 0x4665c
					}
					// 0x4665c
					v25 = v9 + 2;
					v9 = v25;
					int32_t v27 = v12 + 40; // 0x46660
					v12 = v27;
					int32_t v28 = v11 - 1; // 0x46664
					v11 = v28;
					if (v28 == 0) {
						// break -> 0x46668
						break;
					}
					v23 = v27;
					v24 = v25;
					// continue -> 0x46644
				}
				// 0x46668
				v20 = v8;
				v21 = v10;
				v22 = v25;
				// branch -> 0x46668
			}
			int32_t v29 = v6 + 1;  // 0x46668
			int32_t v30 = v21 + 1; // 0x4666c
			v10 = v30;
			if (v30 >= v20) {
				// 0x46670
				v6 = g36;
				// branch -> 0x46678
				// 0x46678
				v13 = v6;
				v10 = 0;
				v12 = 8;
				v15 = v6;
				// branch -> 0x46684
				while (true) {
					// 0x46684
					v11 = 4;
					v6 = v15;
					v14 = 0;
					v16 = v15;
					// branch -> 0x46694
				lab_0x46694:
					while (true) {
						char *v31 = (char *)v16; // 0x46694
						int32_t v32 = v16;       // 0x466a4
						if (*v31 == 0) {
							// 0x466a0
							*v31 = (char)v12;
							v32 = v6;
							// branch -> 0x466a4
						}
						int32_t v33 = v32 + 40;  // 0x466a4
						char *v34 = (char *)v33; // 0x466a4
						v6 = v33;
						if (*v34 == 0) {
							// 0x466b0
							*v34 = (char)v12;
							v33 = v6;
							// branch -> 0x466b4
						}
						int32_t v35 = v33 + 40;  // 0x466b4
						char *v36 = (char *)v35; // 0x466b4
						v6 = v35;
						int32_t v37 = v14 + 1; // 0x466b8
						v14 = v37;
						if (*v36 == 0) {
							// 0x466c4
							*v36 = (char)v12;
							v37 = v14;
							v35 = v6;
							// branch -> 0x466c8
						}
						int32_t v38 = v35 + 40;  // 0x466c8
						char *v39 = (char *)v38; // 0x466c8
						v6 = v38;
						int32_t v40 = v37 + 1; // 0x466cc
						v14 = v40;
						if (*v39 == 0) {
							// 0x466d8
							*v39 = (char)v12;
							v40 = v14;
							v38 = v6;
							// branch -> 0x466dc
						}
						int32_t v41 = v38 + 40;  // 0x466dc
						char *v42 = (char *)v41; // 0x466dc
						v6 = v41;
						int32_t v43 = v40 + 1; // 0x466e0
						v14 = v43;
						if (*v42 == 0) {
							// 0x466ec
							*v42 = (char)v12;
							v43 = v14;
							v41 = v6;
							// branch -> 0x466f0
						}
						int32_t v44 = v41 + 40;  // 0x466f0
						char *v45 = (char *)v44; // 0x466f0
						v6 = v44;
						int32_t v46 = v43 + 1; // 0x466f4
						v14 = v46;
						if (*v45 == 0) {
							// 0x46700
							*v45 = (char)v12;
							v46 = v14;
							v44 = v6;
							// branch -> 0x46704
						}
						int32_t v47 = v44 + 40;  // 0x46704
						char *v48 = (char *)v47; // 0x46704
						v6 = v47;
						int32_t v49 = v46 + 1; // 0x46708
						v14 = v49;
						if (*v48 == 0) {
							// 0x46714
							*v48 = (char)v12;
							v49 = v14;
							v47 = v6;
							// branch -> 0x46718
						}
						int32_t v50 = v47 + 40;  // 0x46718
						char *v51 = (char *)v50; // 0x46718
						v6 = v50;
						int32_t v52 = v49 + 1; // 0x4671c
						v14 = v52;
						if (*v51 == 0) {
							// 0x46728
							*v51 = (char)v12;
							v52 = v14;
							v50 = v6;
							// branch -> 0x4672c
						}
						int32_t v53 = v50 + 40;  // 0x4672c
						char *v54 = (char *)v53; // 0x4672c
						v6 = v53;
						int32_t v55 = v52 + 1; // 0x46730
						v14 = v55;
						if (*v54 == 0) {
							// 0x4673c
							*v54 = (char)v12;
							v55 = v14;
							v53 = v6;
							// branch -> 0x46740
						}
						int32_t v56 = v53 + 40;  // 0x46740
						char *v57 = (char *)v56; // 0x46740
						v6 = v56;
						int32_t v58 = v55 + 1; // 0x46744
						v14 = v58;
						if (*v57 == 0) {
							// 0x46750
							*v57 = (char)v12;
							v58 = v14;
							v56 = v6;
							// branch -> 0x46754
						}
						int32_t v59 = v56 + 40; // 0x46754
						v6 = v59;
						v14 = v58 + 1;
						int32_t v60 = v11 - 1; // 0x4675c
						v11 = v60;
						if (v60 == 0) {
							// break -> 0x46760
							break;
						}
						v16 = v59;
						// continue -> 0x46694
					}
					int32_t v61 = v10 + 1; // 0x46760
					v10 = v61;
					int32_t v62 = v13 + 1; // 0x46764
					v13 = v62;
					if (v61 >= 40) {
						// break -> 0x46770
						break;
					}
					v15 = v62;
					// continue -> 0x46684
				}
				// 0x46770
				g34 = *(int32_t *)(g23 - 0x7540);
				function_eb590();
				function_c9acc(v3);
				int32_t result = MemFreeDbg(&v3); // 0x46790
				g35 = v1;
				return result;
			}
			// 0x46668
			v17 = v20;
			v18 = v30;
			v9 = v22;
			v6 = v29;
			v19 = v5;
			// branch -> 0x46634
		}
	}
	// 0x46678
	v13 = v6;
	v10 = 0;
	v12 = 8;
	v15 = v6;
	// branch -> 0x46684
	while (true) {
		// 0x46684
		v11 = 4;
		v6 = v15;
		v14 = 0;
		v16 = v15;
		// branch -> 0x46694
		goto lab_0x46694;
	}
}
