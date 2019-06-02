
// Address range: 0x38184 - 0x383e4
int32_t DRLG_PlaceDoor(int32_t result, int32_t a2)
{
	int32_t v1 = 40 * result;                          // 0x38184
	int32_t v2 = v1 + a2 + *(int32_t *)(g23 - 0x7514); // 0x38190
	unsigned char v3 = *(char *)v2;                    // 0x38194
	if (__asm_rlwinm_((int32_t)v3, 0, 24, 24) == 0) {
		unsigned char v4 = v3 % 128;
		int32_t v5 = v4;                                   // r9
		int32_t v6 = v1 + *(int32_t *)(g23 - 0x77cc) + a2; // 0x381b0
		char *v7 = (char *)v6;                             // 0x381b8
		unsigned char v8 = *v7;                            // 0x381b8
		int32_t v9 = v8;                                   // r7
		if (v4 == 1) {
			int32_t v10 = 1; // 0x381d8
			if (a2 != 1) {
				// 0x381c8
				if (v8 == 2) {
					// 0x381d0
					*v7 = 26;
					v10 = a2;
					// branch -> 0x381d8
				} else {
					v10 = a2;
				}
			}
			int32_t v11 = 1; // 0x381f0
			if (v10 != 1) {
				// 0x381e0
				if (v9 == 7) {
					// 0x381e8
					*(char *)v6 = 31;
					v11 = a2;
					// branch -> 0x381f0
				} else {
					v11 = v10;
				}
			}
			int32_t v12 = 1; // 0x38208
			if (v11 != 1) {
				// 0x381f8
				if (v9 == 14) {
					// 0x38200
					*(char *)v6 = 42;
					v12 = a2;
					// branch -> 0x38208
				} else {
					v12 = v11;
				}
			}
			// 0x38208
			if (v12 != 1) {
				// 0x38210
				if (v9 == 4) {
					// 0x38218
					*(char *)v6 = 43;
					// branch -> 0x38220
				}
			}
			int32_t v13 = 1; // 0x38238
			if (result != 1) {
				// 0x38228
				if (v9 == 1) {
					// 0x38230
					*(char *)v6 = 25;
					v13 = result;
					// branch -> 0x38238
				} else {
					v13 = result;
				}
			}
			int32_t v14 = 1; // 0x38250
			if (v13 != 1) {
				// 0x38240
				if (v9 == 10) {
					// 0x38248
					*(char *)v6 = 40;
					v14 = result;
					// branch -> 0x38250
				} else {
					v14 = v13;
				}
			}
			// 0x38250
			if (v14 != 1) {
				// 0x38258
				if (v9 == 6) {
					// 0x38260
					*(char *)v6 = 30;
					// branch -> 0x38268
				}
			}
		}
		// 0x38268
		if (v5 % 256 == 2) {
			int32_t v15 = 1; // 0x3828c
			if (result != 1) {
				// 0x3827c
				if (v9 == 1) {
					// 0x38284
					*(char *)v6 = 25;
					v15 = result;
					// branch -> 0x3828c
				} else {
					v15 = result;
				}
			}
			int32_t v16 = 1; // 0x382a4
			if (v15 != 1) {
				// 0x38294
				if (v9 == 6) {
					// 0x3829c
					*(char *)v6 = 30;
					v16 = result;
					// branch -> 0x382a4
				} else {
					v16 = v15;
				}
			}
			int32_t v17 = 1; // 0x382bc
			if (v16 != 1) {
				// 0x382ac
				if (v9 == 10) {
					// 0x382b4
					*(char *)v6 = 40;
					v17 = result;
					// branch -> 0x382bc
				} else {
					v17 = v16;
				}
			}
			// 0x382bc
			if (v17 != 1) {
				// 0x382c4
				if (v9 == 4) {
					// 0x382cc
					*(char *)v6 = 41;
					// branch -> 0x382d4
				}
			}
			int32_t v18 = 1; // 0x382ec
			if (a2 != 1) {
				// 0x382dc
				if (v9 == 2) {
					// 0x382e4
					*(char *)v6 = 26;
					v18 = a2;
					// branch -> 0x382ec
				} else {
					v18 = a2;
				}
			}
			int32_t v19 = 1; // 0x38304
			if (v18 != 1) {
				// 0x382f4
				if (v9 == 14) {
					// 0x382fc
					*(char *)v6 = 42;
					v19 = a2;
					// branch -> 0x38304
				} else {
					v19 = v18;
				}
			}
			// 0x38304
			if (v19 != 1) {
				// 0x3830c
				if (v9 == 7) {
					// 0x38314
					*(char *)v6 = 31;
					// branch -> 0x3831c
				}
			}
		}
		// 0x3831c
		if (v5 % 256 == 3) {
			int32_t v20 = 1; // 0x38348
			if (result != 1) {
				// 0x38330
				if (a2 != 1) {
					// 0x38338
					if (v9 == 4) {
						// 0x38340
						*(char *)v6 = 28;
						v20 = result;
						// branch -> 0x38348
					} else {
						v20 = result;
					}
				} else {
					v20 = result;
				}
			}
			// 0x38348
			if (v20 != 1) {
				// 0x38350
				if (v9 == 10) {
					// 0x38358
					*(char *)v6 = 40;
					// branch -> 0x38360
				}
			}
			int32_t v21 = 1; // 0x38378
			if (a2 != 1) {
				// 0x38368
				if (v9 == 14) {
					// 0x38370
					*(char *)v6 = 42;
					v21 = a2;
					// branch -> 0x38378
				} else {
					v21 = a2;
				}
			}
			// 0x38378
			if (v21 != 1) {
				// 0x38380
				if (v9 == 2) {
					// 0x38388
					*(char *)v6 = 26;
					// branch -> 0x38390
				}
			}
			// 0x38390
			if (result != 1) {
				// 0x38398
				if (v9 == 1) {
					// 0x383a0
					*(char *)v6 = 25;
					// branch -> 0x383a8
				}
			}
			// 0x383a8
			if (a2 != 1) {
				// 0x383b0
				if (v9 == 7) {
					// 0x383b8
					*(char *)v6 = 31;
					// branch -> 0x383c0
				}
			}
			// 0x383c0
			if (result != 1) {
				// 0x383c8
				if (v9 == 6) {
					// 0x383d0
					*(char *)v6 = 30;
					// branch -> 0x383d8
				}
			}
			// 0x383d8
			*(char *)v2 = -128;
			return result;
		}
	}
	// 0x383d8
	*(char *)v2 = -128;
	return result;
}

// Address range: 0x383e4 - 0x386b4
int32_t DRLG_L1Shadows(int32_t a1)
{
	int32_t v1 = 1;                              // r6
	int32_t v2 = *(int32_t *)(g23 - 0x77cc);     // 0x383ec
	int32_t v3 = v2 + 1;                         // 0x383f4
	int32_t v4 = g23 - 0x2190;                   // r12
	int32_t v5 = *(int32_t *)(g23 - 0x7514) + 1; // 0x383fc
	int32_t v6 = g23 - 0x208d;                   // r11
	// branch -> 0x3840c
	while (true) {
		int32_t v7 = v3 + 40; // 0x3840c
		int32_t v8 = v5 + 40; // 0x38410
		int32_t v9 = v2 + 40; // 0x38414
		int32_t v10 = 1;      // r5
		                      // branch -> 0x3841c
	lab_0x3841c:
		while (true) {
			int32_t v11 = (int32_t) * (char *)v7;         // 0x3841c
			int32_t v12 = (int32_t) * (char *)(v7 - 40);  // 0x38424
			int32_t v13 = 37;                             // ctr
			int32_t v14 = (int32_t) * (char *)(v7 - 1);   // 0x3842c
			unsigned char v15 = *(char *)(v7 - 41);       // 0x38430
			int32_t v16 = (int32_t) * (char *)(v6 + v11); // 0x38438
			int32_t v17 = v1 + v9;                        // r28
			int32_t v18 = (int32_t) * (char *)(v6 + v12); // r8
			int32_t v19 = (int32_t) * (char *)(v6 + v14); // r7
			g36 = (int32_t) * (char *)(v6 + (int32_t)v15);
			g33 = (int32_t) * (char *)(v8 - 41);
			int32_t v20 = (int32_t) * (char *)(v8 - 1);  // r27
			int32_t v21 = (int32_t) * (char *)(v8 - 40); // r26
			// branch -> 0x38458
			while (true) {
				int32_t v22 = v4; // 0x38500
				int32_t v23;      // 0x38500
				int32_t v24;      // 0x38504
				if (v16 == (int32_t) * (char *)v4) {
					unsigned char v25 = *(char *)(v4 + 1); // 0x38464
					int32_t v26 = 1;
					if (v25 != 0) {
						// 0x38474
						if (g36 != (int32_t)v25) {
							// 0x3847c
							v26 = 0;
							// branch -> 0x38480
						} else {
							v26 = 1;
						}
					}
					unsigned char v27 = *(char *)(v4 + 2); // 0x38480
					int32_t v28 = v26;
					if (v27 != 0) {
						// 0x3848c
						if (v19 != (int32_t)v27) {
							// 0x38494
							v28 = 0;
							// branch -> 0x38498
						} else {
							v28 = v26;
						}
					}
					unsigned char v29 = *(char *)(v4 + 3); // 0x38498
					if (v29 != 0) {
						// 0x384a4
						if (v18 != (int32_t)v29) {
							// 0x384b0
							v22 = v4;
							// branch -> 0x38500
						lab_0x38500_4:
							// 0x38500
							v23 = v22 + 7;
							v4 = v23;
							v24 = v13 - 1;
							v13 = v24;
							if (v24 == 0) {
							lab_0x38508:;
								int32_t v30 = v10 + 1; // 0x38508
								v10 = v30;
								int32_t v31 = v8 + 40; // 0x3850c
								int32_t v32 = v9 + 40; // 0x38514
								int32_t v33 = v7 + 40; // 0x38518
								if (v30 >= 40) {
									// break (via goto) -> 0x38520
									goto lab_0x38520;
								}
								v8 = v31;
								v9 = v32;
								v7 = v33;
								// continue (via goto) -> 0x3841c
								goto lab_0x3841c;
							} else {
							lab_0x38500_5:
								// 0x38500
								v4 = v23;
								// branch -> 0x38458
								continue;
							}
						}
					}
					// 0x384b0
					if (v28 != 1) {
						v22 = v4;
						goto lab_0x38500_4;
					}
					char v34 = *(char *)(v4 + 4); // 0x384b8
					int32_t v35 = v4;             // 0x384d0
					if (v34 != 0) {
						// 0x384c4
						if (g33 == 0) {
							// 0x384cc
							*(char *)(v17 - 41) = v34;
							v35 = v4;
							// branch -> 0x384d0
						} else {
							v35 = v4;
						}
					}
					char v36 = *(char *)(v35 + 5); // 0x384d0
					int32_t v37 = v35;             // 0x384e8
					if (v36 != 0) {
						// 0x384dc
						if (v20 == 0) {
							// 0x384e4
							*(char *)(v17 - 1) = v36;
							v37 = v4;
							// branch -> 0x384e8
						} else {
							v37 = v35;
						}
					}
					char v38 = *(char *)(v37 + 6); // 0x384e8
					if (v38 == 0) {
						v22 = v37;
						goto lab_0x38500_4;
					}
					// 0x384f4
					if (v21 != 0) {
						v22 = v37;
						goto lab_0x38500_4;
					}
					// 0x384fc
					*(char *)(v17 - 40) = v38;
					v22 = v4;
					// branch -> 0x38500
					goto lab_0x38500_4;
				}
				// 0x38500
				v23 = v22 + 7;
				v4 = v23;
				v24 = v13 - 1;
				v13 = v24;
				if (v24 == 0) {
					goto lab_0x38508;
				}
				goto lab_0x38500_5;
			}
		lab_0x38520:;
			int32_t v39 = v1 + 1; // 0x38520
			v1 = v39;
			int32_t v40 = v5 + 1; // 0x38524
			v5 = v40;
			int32_t v41 = v3 + 1; // 0x3852c
			v3 = v41;
			if (v39 >= 40) {
				// 0x38534
				v19 = 1;
				int32_t v42 = v5; // 0x38544
				int32_t v43 = v3; // 0x3853c
				// branch -> 0x38538
				int32_t result; // 0x386a4
				while (true) {
					int32_t v44 = v43 + 40; // 0x3853c
					v10 = v44;
					v13 = 39;
					int32_t v45 = v42 + 40; // 0x38544
					v1 = v45;
					// branch -> 0x38548
					while (true) {
						char *v46 = (char *)(v44 - 40); // 0x38548
						int32_t v47 = v44;              // 0x3861c
						if (*v46 == -117) {
							// 0x38554
							if (*(char *)(v45 - 40) == 0) {
								char v48 = *(char *)v44; // 0x38560
								char v49 = -117;
								if (v48 == 29) {
									// 0x38570
									v49 = -115;
									// branch -> 0x38574
								}
								if (v48 == 32) {
									// 0x3857c
									v49 = -115;
									// branch -> 0x38580
								}
								if (v48 == 35) {
									// 0x38588
									v49 = -115;
									// branch -> 0x3858c
								}
								if (v48 == 37) {
									// 0x38594
									v49 = -115;
									// branch -> 0x38598
								}
								if (v48 == 38) {
									// 0x385a0
									v49 = -115;
									// branch -> 0x385a4
								}
								if (v48 == 39) {
									// 0x385ac
									v49 = -115;
									// branch -> 0x385b0
								}
								// 0x385b0
								*v46 = v49;
								v47 = v10;
								// branch -> 0x385b4
							} else {
								v47 = v44;
							}
						}
						char *v50 = (char *)(v47 - 40); // 0x385b4
						int32_t v51 = v47;              // 0x38688
						if (*v50 == -107) {
							// 0x385c0
							if (*(char *)(v1 - 40) == 0) {
								char v52 = *(char *)v47; // 0x385cc
								char v53 = -107;
								if (v52 == 29) {
									// 0x385dc
									v53 = -103;
									// branch -> 0x385e0
								}
								if (v52 == 32) {
									// 0x385e8
									v53 = -103;
									// branch -> 0x385ec
								}
								if (v52 == 35) {
									// 0x385f4
									v53 = -103;
									// branch -> 0x385f8
								}
								if (v52 == 37) {
									// 0x38600
									v53 = -103;
									// branch -> 0x38604
								}
								if (v52 == 38) {
									// 0x3860c
									v53 = -103;
									// branch -> 0x38610
								}
								if (v52 == 39) {
									// 0x38618
									v53 = -103;
									// branch -> 0x3861c
								}
								// 0x3861c
								*v50 = v53;
								v51 = v10;
								// branch -> 0x38620
							} else {
								v51 = v47;
							}
						}
						char *v54 = (char *)(v51 - 40); // 0x38620
						int32_t v55 = v51;              // 0x3868c
						if (*v54 == -108) {
							// 0x3862c
							if (*(char *)(v1 - 40) == 0) {
								char v56 = *(char *)v51; // 0x38638
								char v57 = -108;
								if (v56 == 29) {
									// 0x38648
									v57 = -102;
									// branch -> 0x3864c
								}
								if (v56 == 32) {
									// 0x38654
									v57 = -102;
									// branch -> 0x38658
								}
								if (v56 == 35) {
									// 0x38660
									v57 = -102;
									// branch -> 0x38664
								}
								if (v56 == 37) {
									// 0x3866c
									v57 = -102;
									// branch -> 0x38670
								}
								if (v56 == 38) {
									// 0x38678
									v57 = -102;
									// branch -> 0x3867c
								}
								if (v56 == 39) {
									// 0x38684
									v57 = -102;
									// branch -> 0x38688
								}
								// 0x38688
								*v54 = v57;
								v55 = v10;
								// branch -> 0x3868c
							} else {
								v55 = v51;
							}
						}
						int32_t v58 = v55 + 40; // 0x3868c
						v10 = v58;
						int32_t v59 = v1 + 40; // 0x38690
						v1 = v59;
						int32_t v60 = v13 - 1; // 0x38694
						v13 = v60;
						if (v60 == 0) {
							// break -> 0x38698
							break;
						}
						v45 = v59;
						v44 = v58;
						// continue -> 0x38548
					}
					int32_t v61 = v19 + 1; // 0x38698
					v19 = v61;
					int32_t v62 = v5 + 1; // 0x3869c
					v5 = v62;
					result = v3 + 1;
					v3 = result;
					if (v61 >= 40) {
						// break -> 0x386ac
						break;
					}
					v42 = v62;
					v43 = result;
					// continue -> 0x38538
				}
				// 0x386ac
				return result;
			}
			// 0x38520
			v5 = v40;
			v3 = v41;
			// branch -> 0x3840c
			break;
		}
	}
}

// Address range: 0x386b4 - 0x38a78
int32_t DRLG_PlaceMiniSet(char *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x386b8
	g25 = *(int32_t *)(g23 - 0x77cc);
	g37 = a3 - a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7514); // 0x386c8
	int32_t v3 = (int32_t)a1;                // 0x386cc
	g28 = v3;
	g31 = a4;
	g30 = a5;
	g29 = a7;
	int32_t v4 = v3 / 0x1000000;
	g35 = v4;
	int32_t v5 = (int32_t) * (char *)(v3 + 1); // 0x386e8
	g32 = v5;
	int32_t v6 = 1;
	if (a3 != a2) {
		// 0x38700
		a5 = g30;
		a4 = g31;
		v4 = g35;
		v5 = g32;
		v6 = a2 + random(0);
		// branch -> 0x3870c
	}
	int32_t v7 = 40 - v4; // 0x38718
	g26 = v7;
	int32_t v8 = v5 * v4 + 2; // r13
	g27 = 40 - v5;
	g24 = a5 - v5;
	int32_t v9 = 0; // r15
	int32_t v10;    // 0x38960
	int32_t v11;    // 0x38978
	int32_t v12;    // 0x389a4
	int32_t v13;    // 0x389d0
	int32_t v14;    // 0x389fc
	int32_t v15;    // 0x38a18
	int32_t v16;    // 0x38a18
	int32_t *v17;   // 0x3896c
	if (v6 > 0) {
		while (true) {
			// 0x38734
			g37 = v7;
			g36 = random(0);
			g37 = g27;
			int32_t v18 = random(0); // 0x3874c
			g33 = v18;
			int32_t v19 = 0; // 0x388dc
			// branch -> 0x38760
			while (true) {
				int32_t v20 = 1; // 0x388ac34
				if (g31 != -1) {
					uint32_t v21 = g36; // 0x3876c
					if (v21 >= a4 - v4) {
						// 0x38774
						if (v21 <= a4 + 12) {
							// 0x3877c
							g36 = v21 + 1;
							v20 = 0;
							// branch -> 0x38784
						} else {
							v20 = 1;
						}
					} else {
						v20 = 1;
					}
				}
				int32_t v22 = g30; // 0x38784
				int32_t v23 = v20; // 0x388ac33
				int32_t v24 = v18; // 0x388c8
				if (v22 != -1) {
					// 0x3878c
					if (v18 >= g24) {
						// 0x38794
						if (v18 <= a5 + 12) {
							int32_t v25 = v18 + 1; // 0x387a0
							g33 = v25;
							v23 = 0;
							v24 = v25;
							// branch -> 0x387a4
						} else {
							v23 = v20;
							v24 = v18;
						}
					} else {
						v23 = v20;
						v24 = v18;
					}
				}
				int32_t v26 = g29; // 0x387a4
				int32_t v27;       // 0x38830
				int32_t v28;       // 0x3884442
				int32_t v29;       // 0x3889039
				int32_t v30;       // 0x38898
				int32_t v31;       // 0x3889c
				int32_t v32;       // 0x388a0
				int32_t v33;       // 0x388ac
				int32_t v34;       // 0x388ac32
				int32_t v35;       // 0x388b460
				int32_t v36;       // 0x38830
				int32_t v37;       // 0x388a49
				int32_t v38;       // 0x38828
				int32_t v39;       // 0x3882c
				if (v26 == 2) {
					// 0x387fc
					if (g36 < g31) {
						// 0x38804
						if (v24 > v22) {
							// 0x3880c
							v34 = 0;
							// branch -> 0x38828
						} else {
							v34 = v23;
						}
					} else {
						v34 = v23;
					}
				} else {
					// 0x387ac
					if (v26 > 2) {
						// 0x387c0
						if (v26 == 3) {
							// 0x38814
							if (g36 > g31) {
								// 0x3881c
								if (v24 > v22) {
									// 0x38824
									v34 = 0;
									// branch -> 0x38828
								} else {
									v34 = v23;
								}
							} else {
								v34 = v23;
							}
						} else {
							v34 = v23;
						}
					} else {
						// 0x387b0
						if (v26 == 0) {
							// 0x387cc
							if (g36 < g31) {
								// 0x387d4
								if (v24 < v22) {
									// 0x387dc
									v34 = 0;
									// branch -> 0x38828
								} else {
									v34 = v23;
								}
							} else {
								v34 = v23;
							}
						} else {
							// 0x387b8
							if (v26 > 0) {
								// 0x387e4
								if (g36 > g31) {
									// 0x387ec
									if (v24 < v22) {
										// 0x387f4
										v34 = 0;
										// branch -> 0x38828
									} else {
										v34 = v23;
									}
								} else {
									v34 = v23;
								}
							} else {
								v34 = v23;
							}
						}
						// 0x38828
						v38 = g25 + v24;
						v39 = v2 + v24;
						v27 = g28;
						v36 = v27 + 2;
						v37 = g32;
						if (v37 > 0) {
							v35 = v34;
							v29 = v34;
							v33 = v34;
							v32 = 0;
							v31 = v39;
							v30 = v38;
							v28 = v36;
						lab_0x388ac_2:;
							int32_t v40;
							while (true) {
								// 0x388ac
								if (v33 == 1) {
									int32_t v41 = v35; // 0x388b456
									int32_t v42 = v28; // 0x3884443
									int32_t v43 = v29; // 0x3889040
									int32_t v44;       // 0x38898
									int32_t v45;       // 0x3889c
									int32_t v46;       // 0x388a0
									if (g35 > 0) {
										int32_t v47 = v35; // 0x388b459
										int32_t v48 = 0;   // 0x38884
										int32_t v49 = v28; // 0x38880
										int32_t v50 = v29; // 0x38890
										int32_t v51;       // 0x388ac35
										while (true) {
											// 0x38890
											if (v50 == 1) {
												unsigned char v52 = *(char *)v49; // 0x38844
												int32_t v53 = 40 * (g36 + v48);
												int32_t v54 = v47; // 0x388b458
												int32_t v55 = 1;   // 0x388ac37
												if (v52 != 0) {
													// 0x38850
													if (v52 != *(char *)(v53 + v30)) {
														// 0x38864
														v54 = 0;
														v55 = 0;
														// branch -> 0x38868
													} else {
														v54 = v47;
														v55 = 1;
													}
												}
												int32_t v56 = v54; // 0x388b457
												int32_t v57 = v55; // 0x388ac36
												if (*(char *)(v53 + v31) != 0) {
													// 0x3887c
													v56 = 0;
													v57 = 0;
													// branch -> 0x38880
												}
												int32_t v58 = v49 + 1; // 0x38880
												int32_t v59 = v48 + 1; // 0x38884
												if (v59 >= g35) {
													v41 = v56;
													v42 = v58;
													v43 = v57;
													v51 = v57;
													// break -> 0x38898
													break;
												}
												v47 = v56;
												v48 = v59;
												v49 = v58;
												v50 = v57;
												// continue -> 0x38890
												continue;
											} else {
												v41 = v47;
												v42 = v49;
												v43 = v50;
												v51 = v50;
											}
										}
										// 0x38898
										v44 = v30 + 1;
										v45 = v31 + 1;
										v46 = v32 + 1;
										if (v46 >= v37) {
											v40 = v41;
											// break -> 0x388b4
											break;
										}
										v35 = v41;
										v29 = v43;
										v33 = v51;
										v32 = v46;
										v31 = v45;
										v30 = v44;
										v28 = v42;
										// continue -> 0x388ac
										continue;
									}
									// 0x38898
									v44 = v30 + 1;
									v45 = v31 + 1;
									v46 = v32 + 1;
									if (v46 >= v37) {
										v40 = v41;
										// break -> 0x388b4
										break;
									}
									v35 = v41;
									v29 = v43;
									v33 = 1;
									v32 = v46;
									v31 = v45;
									v30 = v44;
									v28 = v42;
									// continue -> 0x388ac
									continue;
								} else {
									v40 = v35;
								}
							}
							// 0x388b4
							if (v40 == 0) {
							lab_0x388bc:;
								int32_t v60 = g36 + 1; // 0x388bc
								g36 = v60;
								int32_t v61 = v24; // 0x3878c30
								if (v60 == g26) {
									int32_t v62 = v24 + 1; // 0x388c8
									g33 = v62;
									g36 = 0;
									if (v62 == g27) {
										// 0x388d8
										g33 = 0;
										v61 = 0;
										// branch -> 0x388dc
									} else {
										v61 = v62;
									}
								}
								int32_t v63 = v19 + 1; // 0x388dc
								if (v63 >= 4001) {
									// 0x388e8
									// branch -> 0x38a64
									// 0x38a64
									g10 = v1;
									return -1;
								}
								// 0x388f0
								v19 = v63;
								v18 = v61;
								// branch -> 0x38760
								continue;
							} else {
							lab_0x388f0:;
								int32_t v64 = v38; // r3
								int32_t v65 = 0;   // r8
								if (v37 > 0) {
									int32_t v66 = v37; // 0x3894c78
									int32_t v67 = 0;   // 0x3894876
									int32_t v68 = v38; // 0x3894474
									int32_t v69 = v27; // 0x38910
									while (true) {
										int32_t v70 = g35;      // ctr
										int32_t v71 = v69 + v8; // 0x38910
										int32_t v72 = 0;        // r5
										int32_t v73 = v66;      // 0x3894c
										int32_t v74 = v67;      // 0x38948
										int32_t v75 = v68;      // 0x38944
										int32_t v76 = v8;       // 0x3891064
										if (g35 >= 1) {
											int32_t v77 = g35; // 0x3894072
											int32_t v78 = v8;  // 0x3893468
											int32_t v79 = 0;   // 0x38928
											int32_t v80;       // 0x38934
											while (true) {
												unsigned char v81 = *(char *)v71; // 0x3891c
												int32_t v82 = v77;                // 0x38940
												int32_t v83 = v79;                // 0x3893c
												int32_t v84 = v78;                // 0x38934
												if (v81 != 0) {
													// 0x38928
													*(char *)(v64 + 40 * (g36 + v79)) = v81;
													v82 = v70;
													v83 = v72;
													v84 = v8;
													// branch -> 0x38934
												}
												// 0x38934
												v80 = v84 + 1;
												v8 = v80;
												int32_t v85 = v71 + 1; // 0x38938
												int32_t v86 = v83 + 1; // 0x3893c
												v72 = v86;
												int32_t v87 = v82 - 1; // 0x38940
												v70 = v87;
												if (v87 == 0) {
													// break -> 0x38944
													break;
												}
												v77 = v87;
												v78 = v80;
												v79 = v86;
												v71 = v85;
												// continue -> 0x3891c
											}
											// 0x38944
											v73 = g32;
											v74 = v65;
											v75 = v64;
											v76 = v80;
											// branch -> 0x38944
										}
										int32_t v88 = v75 + 1; // 0x38944
										v64 = v88;
										int32_t v89 = v74 + 1; // 0x38948
										v65 = v89;
										if (v89 < v73) {
											// 0x38944
											v66 = v73;
											v67 = v89;
											v68 = v88;
											v8 = v76;
											v69 = g28;
											// branch -> 0x38908
											continue;
										}
									}
								}
								int32_t v90 = v9 + 1; // 0x38954
								v9 = v90;
								if (v90 >= v6) {
									// 0x38960
									v10 = g23;
									if (g28 == v10 - 0x1e87) {
										// 0x3896c
										v17 = (int32_t *)(v10 - 0x7518);
										v11 = g33;
										*(char *)*v17 = 0;
										function_528e8(g36, v11 + 2, g36 + 5, v11 + 4);
										v12 = 0x1000000 * (int32_t) * (char *)*v17 / 0x1000000;
										*(char *)*(int32_t *)(g23 - 0x7518) = (char)v12;
										*(int32_t *)(*(int32_t *)(g23 - 0x7604) + 316) = 2 * g36 + 21;
										*(int32_t *)(*(int32_t *)(g23 - 0x7604) + 320) = 2 * g33 + 22;
										// branch -> 0x389c0
									}
									// 0x389c0
									if (a6 == 1) {
										// 0x389cc
										v13 = g23;
										*(int32_t *)*(int32_t *)(v13 - 0x77b0) = 2 * g36 + 19;
										*(int32_t *)*(int32_t *)(v13 - 0x77b4) = 2 * g33 + 20;
										// branch -> 0x389ec
									}
									// 0x389ec
									if (g13 == 0) {
										// 0x389f8
										v14 = g23;
										*(int32_t *)*(int32_t *)(v14 - 0x751c) = 2 * g36 + 19;
										*(int32_t *)*(int32_t *)(v14 - 0x7520) = 2 * g33 + 20;
										// branch -> 0x38a18
									}
									// 0x38a18
									v15 = g36;
									v16 = g31;
									if (v15 < v16) {
										// 0x38a20
										if (g33 < g30) {
											// 0x38a28
											// branch -> 0x38a64
											// 0x38a64
											g10 = v1;
											return 0;
										}
									}
									// 0x38a30
									if (v15 > v16) {
										// 0x38a38
										if (g33 < g30) {
											// 0x38a40
											// branch -> 0x38a64
											// 0x38a64
											g10 = v1;
											return 1;
										}
									}
									// 0x38a48
									if (v15 < v16) {
										// 0x38a50
										if (g33 > g30) {
											// 0x38a58
											// branch -> 0x38a64
											// 0x38a64
											g10 = v1;
											return 2;
										}
									}
									// 0x38a60
									// branch -> 0x38a64
									// 0x38a64
									g10 = v1;
									return 3;
								}
								// 0x38954
								v7 = g26;
								// branch -> 0x38734
								break;
							}
							// 0x38a64
							g10 = v1;
							int32_t result; // 0x38a74
							return result;
						}
					lab_0x388b4_2:
						// 0x388b4
						if (v34 == 0) {
							goto lab_0x388bc;
						}
						goto lab_0x388f0;
					}
					// 0x38828
					v38 = g25 + v24;
					v39 = v2 + v24;
					v27 = g28;
					v36 = v27 + 2;
					v37 = g32;
					if (v37 > 0) {
						v35 = v34;
						v29 = v34;
						v33 = v34;
						v32 = 0;
						v31 = v39;
						v30 = v38;
						v28 = v36;
						goto lab_0x388ac_2;
					}
					goto lab_0x388b4_2;
				}
				// 0x38828
				v38 = g25 + v24;
				v39 = v2 + v24;
				v27 = g28;
				v36 = v27 + 2;
				v37 = g32;
				if (v37 > 0) {
					v35 = v34;
					v29 = v34;
					v33 = v34;
					v32 = 0;
					v31 = v39;
					v30 = v38;
					v28 = v36;
					goto lab_0x388ac_2;
				}
				goto lab_0x388b4_2;
			}
		}
	}
	// 0x38960
	v10 = g23;
	if (g28 == v10 - 0x1e87) {
		// 0x3896c
		v17 = (int32_t *)(v10 - 0x7518);
		v11 = g33;
		*(char *)*v17 = 0;
		function_528e8(g36, v11 + 2, g36 + 5, v11 + 4);
		v12 = 0x1000000 * (int32_t) * (char *)*v17 / 0x1000000;
		*(char *)*(int32_t *)(g23 - 0x7518) = (char)v12;
		*(int32_t *)(*(int32_t *)(g23 - 0x7604) + 316) = 2 * g36 + 21;
		*(int32_t *)(*(int32_t *)(g23 - 0x7604) + 320) = 2 * g33 + 22;
		// branch -> 0x389c0
	}
	// 0x389c0
	if (a6 == 1) {
		// 0x389cc
		v13 = g23;
		*(int32_t *)*(int32_t *)(v13 - 0x77b0) = 2 * g36 + 19;
		*(int32_t *)*(int32_t *)(v13 - 0x77b4) = 2 * g33 + 20;
		// branch -> 0x389ec
	}
	// 0x389ec
	if (g13 == 0) {
		// 0x389f8
		v14 = g23;
		*(int32_t *)*(int32_t *)(v14 - 0x751c) = 2 * g36 + 19;
		*(int32_t *)*(int32_t *)(v14 - 0x7520) = 2 * g33 + 20;
		// branch -> 0x38a18
	}
	// 0x38a18
	v15 = g36;
	v16 = g31;
	if (v15 < v16) {
		// 0x38a20
		if (g33 < g30) {
			// 0x38a28
			// branch -> 0x38a64
			// 0x38a64
			g10 = v1;
			return 0;
		}
	}
	// 0x38a30
	if (v15 > v16) {
		// 0x38a38
		if (g33 < g30) {
			// 0x38a40
			// branch -> 0x38a64
			// 0x38a64
			g10 = v1;
			return 1;
		}
	}
	// 0x38a48
	if (v15 < v16) {
		// 0x38a50
		if (g33 > g30) {
			// 0x38a58
			// branch -> 0x38a64
			// 0x38a64
			g10 = v1;
			return 2;
		}
	}
	// 0x38a60
	// branch -> 0x38a64
	// 0x38a64
	g10 = v1;
	return 3;
}

// Address range: 0x38a78 - 0x38b20
int32_t function_38a78(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7514); // 0x38a80
	g31 = v1;
	g28 = 0;
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x38a88
	g30 = v2;
	// branch -> 0x38a94
	while (true) {
		// 0x38a94
		g33 = v1;
		g32 = v2;
		g29 = 0;
		g36 = 163;
		int32_t v3 = v2; // 0x38ab4
		int32_t v4 = v1; // 0x38aa8
		// branch -> 0x38aa8
		while (true) {
			// 0x38aa8
			if (*(char *)v4 == 0) {
				// 0x38ab4
				if (*(char *)v3 == 13) {
					// 0x38ac0
					g37 = 3;
					int32_t v5 = random(0); // 0x38ac8
					g34 = v5;
					int32_t v6 = v5; // 0x38ad8
					if (v5 == 1) {
						// 0x38ad4
						*(char *)g32 = (char)162;
						v6 = g34;
						// branch -> 0x38ad8
					}
					// 0x38ad8
					if (v6 == 2) {
						// 0x38ae0
						*(char *)g32 = (char)g36;
						// branch -> 0x38ae4
					}
				}
			}
			int32_t v7 = g29 + 1; // 0x38ae4
			g29 = v7;
			int32_t v8 = g32 + 40; // 0x38ae8
			g32 = v8;
			int32_t v9 = g33 + 40; // 0x38af0
			g33 = v9;
			if (v7 >= 40) {
				// break -> 0x38af8
				break;
			}
			v3 = v8;
			v4 = v9;
			// continue -> 0x38aa8
		}
		int32_t v10 = g28 + 1; // 0x38af8
		g28 = v10;
		int32_t v11 = g30 + 1; // 0x38afc
		g30 = v11;
		int32_t v12 = g31 + 1; // 0x38b04
		g31 = v12;
		if (v10 >= 40) {
			// break -> 0x38b0c
			break;
		}
		v2 = v11;
		v1 = v12;
		// continue -> 0x38a94
	}
	// 0x38b0c
	return g34;
}

// Address range: 0x38b20 - 0x38e30
int32_t DRLG_L1Pass3(int32_t a1)
{
	int32_t v1 = g36;                        // 0x38b20
	int32_t v2 = *(int32_t *)(g23 - 0x756c); // 0x38b28
	g36 = v2;
	int32_t v3 = g35; // 0x38b2c
	g35 = *(int32_t *)(g23 - 0x757c);
	g34 = *(int32_t *)v2;
	int32_t v4 = function_c9948();                     // 0x38b48
	int32_t v5 = g11 + v4 + 168;                       // 0x38b50
	unsigned char v6 = *(char *)v5;                    // 0x38b50
	unsigned char v7 = *(char *)(v5 + 1);              // 0x38b50
	int32_t v8 = 256 * (int16_t)v7 | (int16_t)v6;      // 0x38b58
	unsigned char v9 = *(char *)(v4 + 170);            // 0x38b60
	unsigned char v10 = *(char *)(v4 + 171);           // 0x38b60
	int32_t v11 = 256 * (int16_t)v10 | (int16_t)v9;    // 0x38b68
	unsigned char v12 = *(char *)(v4 + 172);           // 0x38b70
	unsigned char v13 = *(char *)(v4 + 173);           // 0x38b70
	int32_t v14 = 256 * (int16_t)v13 | (int16_t)v12;   // 0x38b78
	unsigned char v15 = *(char *)(v4 + 174);           // 0x38b80
	unsigned char v16 = *(char *)(v4 + 175);           // 0x38b80
	int32_t v17 = 0;                                   // r11
	int32_t v18 = 256 * (int16_t)v16 | (int16_t)v15;   // 0x38b88
	int32_t v19 = 0;                                   // r10
	int32_t v20 = 0x10000 * (v8 + 1) / 0x10000;        // r8
	int32_t v21 = 0x10000 * (v11 + 1) / 0x10000;       // r7
	int32_t v22 = 0x10000 * (v14 + 1) / 0x10000;       // r6
	int32_t v23 = (0x10000 * v18 + 0x10000) / 0x10000; // r5
	int32_t v24 = 0;                                   // 0x38bb83
	                                                   // branch -> 0x38ba4
lab_0x38ba4:
	while (true) {
		int32_t v25 = 14;  // ctr
		int32_t v26 = 0;   // r9
		int32_t v27 = v24; // 0x38bb8
		int32_t v28 = 0;   // 0x38bb4
		// branch -> 0x38bb0
		while (true) {
			int32_t v29 = *(int32_t *)g35; // 0x38bb0
			*(int16_t *)(v29 + v28 + v27) = (int16_t)v20;
			int32_t v30 = v26 + *(int32_t *)g35; // 0x38bc0
			*(int16_t *)(v19 + v30 + 224) = (int16_t)v21;
			int32_t v31 = v26 + *(int32_t *)g35; // 0x38bd0
			*(int16_t *)(v19 + v31 + 2) = (int16_t)v22;
			int32_t v32 = v26;                   // 0x38be0
			int32_t v33 = v32 + *(int32_t *)g35; // 0x38be0
			v26 = v32 + 448;
			*(int16_t *)(v19 + v33 + 226) = (int16_t)v23;
			int32_t v34 = *(int32_t *)g35; // 0x38bf0
			*(int16_t *)(v19 + v26 + v34) = (int16_t)v20;
			int32_t v35 = v26 + *(int32_t *)g35; // 0x38c00
			*(int16_t *)(v19 + v35 + 224) = (int16_t)v21;
			int32_t v36 = v26 + *(int32_t *)g35; // 0x38c10
			*(int16_t *)(v19 + v36 + 2) = (int16_t)v22;
			int32_t v37 = v26;                   // 0x38c20
			int32_t v38 = v37 + *(int32_t *)g35; // 0x38c20
			v26 = v37 + 448;
			*(int16_t *)(v19 + v38 + 226) = (int16_t)v23;
			int32_t v39 = *(int32_t *)g35; // 0x38c30
			*(int16_t *)(v19 + v26 + v39) = (int16_t)v20;
			int32_t v40 = v26 + *(int32_t *)g35; // 0x38c40
			*(int16_t *)(v19 + v40 + 224) = (int16_t)v21;
			int32_t v41 = v26 + *(int32_t *)g35; // 0x38c50
			*(int16_t *)(v19 + v41 + 2) = (int16_t)v22;
			int32_t v42 = v26;                   // 0x38c60
			int32_t v43 = v42 + *(int32_t *)g35; // 0x38c60
			v26 = v42 + 448;
			*(int16_t *)(v19 + v43 + 226) = (int16_t)v23;
			int32_t v44 = *(int32_t *)g35; // 0x38c70
			*(int16_t *)(v19 + v26 + v44) = (int16_t)v20;
			int32_t v45 = v26 + *(int32_t *)g35; // 0x38c80
			*(int16_t *)(v19 + v45 + 224) = (int16_t)v21;
			int32_t v46 = v26 + *(int32_t *)g35; // 0x38c90
			*(int16_t *)(v19 + v46 + 2) = (int16_t)v22;
			int32_t v47 = v26;                   // 0x38ca0
			int32_t v48 = v47 + *(int32_t *)g35; // 0x38ca0
			v26 = v47 + 448;
			*(int16_t *)(v19 + v48 + 226) = (int16_t)v23;
			int32_t v49 = v25 - 1; // 0x38cb0
			v25 = v49;
			if (v49 == 0) {
				int32_t v50 = v17 + 2; // 0x38cb4
				v17 = v50;
				int32_t v51 = v19 + 4; // 0x38cb8
				v19 = v51;
				if (v50 >= 112) {
					// break (via goto) -> 0x38cc4
					goto lab_0x38cc4;
				}
				v24 = v51;
				// continue (via goto) -> 0x38ba4
				goto lab_0x38ba4;
			} else {
				// 0x38bb0
				v27 = v19;
				v28 = v26;
				// branch -> 0x38bb0
				continue;
			}
		}
	lab_0x38cc4:;
		int32_t v52 = *(int32_t *)(g23 - 0x77cc); // 0x38cc4
		v22 = v52;
		v20 = 0;
		v21 = 32;
		int32_t v53 = 32; // 0x38d088
		                  // branch -> 0x38cd0
	lab_0x38cd0:
		while (true) {
			// 0x38cd0
			v25 = 20;
			int32_t v54 = v52; // r4
			v23 = 3584;
			int32_t v55 = v53;  // 0x38d08
			int32_t v56 = 3584; // 0x38d04
			int32_t v57 = v52;  // 0x38ce0
			// branch -> 0x38ce0
			while (true) {
				int32_t v58 = 8 * (int32_t) * (char *)v57 - 8;              // 0x38ce8
				int32_t v59 = v4 + v58;                                     // 0x38cec
				int32_t v60 = v59;                                          // r28
				int32_t v61 = v59 + v58;                                    // 0x38cf0
				unsigned char v62 = *(char *)(v61 + 1);                     // 0x38cf0
				int16_t v63 = 256 * (int16_t)v62 | (int16_t) * (char *)v61; // 0x38cf0
				int32_t v64 = 2;                                            // r29
				int32_t v65 = (int32_t)v63 + 1;                             // 0x38d00
				*(int16_t *)(*(int32_t *)g35 + v56 + v55) = (int16_t)v65;
				int32_t v66 = v64 + v60;                                    // 0x38d0c
				unsigned char v67 = *(char *)(v66 + 1);                     // 0x38d0c
				int16_t v68 = 256 * (int16_t)v67 | (int16_t) * (char *)v66; // 0x38d0c
				int32_t v69 = 4;                                            // r12
				int32_t v70 = v23 + *(int32_t *)g35;                        // 0x38d1c
				int32_t v71 = (int32_t)v68 + 1;                             // 0x38d20
				*(int16_t *)(v21 + v70 + 224) = (int16_t)v71;
				int32_t v72 = v69 + v60;                                    // 0x38d2c
				unsigned char v73 = *(char *)(v72 + 1);                     // 0x38d2c
				int16_t v74 = 256 * (int16_t)v73 | (int16_t) * (char *)v72; // 0x38d2c
				v17 = 6;
				int32_t v75 = v23 + *(int32_t *)g35; // 0x38d3c
				int32_t v76 = (int32_t)v74 + 1;      // 0x38d40
				*(int16_t *)(v21 + v75 + 2) = (int16_t)v76;
				int32_t v77 = v17 + v60;                                    // 0x38d4c
				unsigned char v78 = *(char *)(v77 + 1);                     // 0x38d4c
				int16_t v79 = 256 * (int16_t)v78 | (int16_t) * (char *)v77; // 0x38d4c
				int32_t v80 = v23 + *(int32_t *)g35;                        // 0x38d58
				int32_t v81 = (int32_t)v79 + 1;                             // 0x38d5c
				*(int16_t *)(v21 + v80 + 226) = (int16_t)v81;
				int32_t v82 = 8 * (int32_t) * (char *)(v54 + 40) - 8; // 0x38d70
				int32_t v83 = v4 + v82;                               // 0x38d74
				v60 = v83;
				int32_t v84 = v83 + v82;                                    // 0x38d78
				unsigned char v85 = *(char *)(v84 + 1);                     // 0x38d78
				int16_t v86 = 256 * (int16_t)v85 | (int16_t) * (char *)v84; // 0x38d78
				int32_t v87 = v23 + 448;                                    // 0x38d7c
				v23 = v87;
				int32_t v88 = *(int32_t *)g35;  // 0x38d80
				int32_t v89 = (int32_t)v86 + 1; // 0x38d88
				*(int16_t *)(v21 + v88 + v87) = (int16_t)v89;
				int32_t v90 = v64 + v60;                                    // 0x38d94
				unsigned char v91 = *(char *)(v90 + 1);                     // 0x38d94
				int16_t v92 = 256 * (int16_t)v91 | (int16_t) * (char *)v90; // 0x38d94
				int32_t v93 = v23 + *(int32_t *)g35;                        // 0x38da0
				int32_t v94 = (int32_t)v92 + 1;                             // 0x38da4
				*(int16_t *)(v21 + v93 + 224) = (int16_t)v94;
				int32_t v95 = v69 + v60;                                    // 0x38db0
				unsigned char v96 = *(char *)(v95 + 1);                     // 0x38db0
				int16_t v97 = 256 * (int16_t)v96 | (int16_t) * (char *)v95; // 0x38db0
				int32_t v98 = v23 + *(int32_t *)g35;                        // 0x38dbc
				int32_t v99 = (int32_t)v97 + 1;                             // 0x38dc0
				*(int16_t *)(v21 + v98 + 2) = (int16_t)v99;
				int32_t v100 = v17 + v60;                                      // 0x38dcc
				unsigned char v101 = *(char *)(v100 + 1);                      // 0x38dcc
				int16_t v102 = 256 * (int16_t)v101 | (int16_t) * (char *)v100; // 0x38dcc
				v54 += 80;
				int32_t v103 = v23;                    // 0x38ddc
				int32_t v104 = v103 + *(int32_t *)g35; // 0x38ddc
				int32_t v105 = (int32_t)v102 + 1;      // 0x38de0
				v23 = v103 + 448;
				*(int16_t *)(v21 + v104 + 226) = (int16_t)v105;
				int32_t v106 = v25 - 1; // 0x38df0
				v25 = v106;
				if (v106 == 0) {
					int32_t v107 = v20 + 1; // 0x38df4
					v20 = v107;
					int32_t v108 = v22 + 1; // 0x38df8
					v22 = v108;
					int32_t v109 = v21 + 4; // 0x38e00
					v21 = v109;
					if (v107 >= 40) {
						// break (via goto) -> 0x38e08
						goto lab_0x38e08;
					}
					v53 = v109;
					v52 = v108;
					// continue (via goto) -> 0x38cd0
					goto lab_0x38cd0;
				} else {
					// 0x38ce0
					v55 = v21;
					v56 = v23;
					v57 = v54;
					// branch -> 0x38ce0
					continue;
				}
			}
		lab_0x38e08:;
			int32_t result = function_c9acc(*(int32_t *)g36); // 0x38e0c
			g36 = v1;
			g35 = v3;
			return result;
		}
	}
}

// Address range: 0x38e30 - 0x38ef4
int32_t DRLG_LoadL1SP(int32_t a1)
{
	int32_t v1 = g36;                        // 0x38e30
	int32_t v2 = *(int32_t *)(g23 - 0x7524); // 0x38e38
	g36 = v2;
	g35 = *(int32_t *)(g23 - 0x7528);
	*(int32_t *)v2 = 0;
	if (QuestStatus(6) != 0) {
		int32_t v3 = LoadFileInMem(*(int32_t *)(g23 - 0x63b0), NULL); // 0x38e6c
		*(int32_t *)g35 = v3;
		*(int32_t *)g36 = 1;
		// branch -> 0x38e7c
	}
	// 0x38e7c
	if (QuestStatus(12) != 0) {
		// 0x38e8c
		if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
			int32_t v4 = LoadFileInMem(*(int32_t *)(g23 - 0x63b4), NULL); // 0x38ea4
			*(int32_t *)g35 = v4;
			*(int32_t *)g36 = 1;
			// branch -> 0x38eb4
		}
	}
	// 0x38eb4
	int32_t result; // 0x38ecc
	if (QuestStatus(7) != 0) {
		// 0x38ec4
		result = LoadFileInMem(*(int32_t *)(g23 - 0x63b8), NULL);
		*(int32_t *)g35 = result;
		*(int32_t *)g36 = 1;
		// branch -> 0x38edc
	} else {
		result = 0;
	}
	// 0x38edc
	g36 = v1;
	return result;
}

// Address range: 0x38ef4 - 0x38f18
int32_t DRLG_FreeL1SP(int32_t a1)
{
	// 0x38ef4
	return MemFreeDbg((int32_t *)*(int32_t *)(g23 - 0x7528));
}

// Address range: 0x38f18 - 0x39020
int32_t DRLG_Init_Globals(void)
{
	int32_t v1 = g10; // 0x38f18
	g34 = *(int32_t *)*(int32_t *)(g23 - 0x779c);
	function_e9dd8();
	int32_t v2;
	g34 = *(int32_t *)*(int32_t *)(v2 - 0x7680);
	function_e9dd8();
	g34 = *(int32_t *)*(int32_t *)(v2 - 0x767c);
	function_e9dd8();
	g34 = *(int32_t *)*(int32_t *)(v2 - 0x7630);
	function_e9dd8();
	g34 = *(int32_t *)*(int32_t *)(v2 - 0x7684);
	function_e9dd8();
	g34 = *(int32_t *)*(int32_t *)(v2 - 0x768c);
	function_e9dd8();
	g34 = *(int32_t *)*(int32_t *)(v2 - 0x7594);
	function_e9dd8();
	g34 = *(int32_t *)*(int32_t *)(v2 - 0x7598);
	function_e9dd8();
	int32_t v3;     // 0x39004
	int32_t result; // 0x39008
	if (*(int32_t *)*(int32_t *)(v2 - 0x752c) != 0) {
		// 0x38ff4
		// branch -> 0x38ff8
		// 0x38ff8
		v3 = *(int32_t *)*(int32_t *)(v2 - 0x758c);
		g34 = v3;
		result = function_ebab8(v3, 0x3100, 0);
		g10 = v1;
		return result;
	}
	// 0x38fd4
	int32_t v4; // 0x38ffc
	if (*(int32_t *)*(int32_t *)(v2 - 0x776c) == 0) {
		// 0x38fec
		v4 = 15;
		// branch -> 0x38ff8
	} else {
		// 0x38fe4
		v4 = 3;
		// branch -> 0x38ff8
	}
	// 0x38ff8
	v3 = *(int32_t *)*(int32_t *)(v2 - 0x758c);
	g34 = v3;
	result = function_ebab8(v3, 0x3100, v4);
	g10 = v1;
	return result;
}

// Address range: 0x39020 - 0x39158
int32_t DRLG_InitL1Vals(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7598); // 0x39020
	int32_t v2 = 0;                          // r9
	int32_t v3 = *(int32_t *)(g23 - 0x757c); // 0x39028
	int32_t v4 = 0;                          // r8
	int32_t v5 = 0;                          // 0x390482
	                                         // branch -> 0x39030
lab_0x39030:
	while (true) {
		int32_t v6 = 0;   // r6
		int32_t v7 = 112; // ctr
		int32_t v8 = 0;   // r7
		int32_t v9 = 112; // 0x391408
		int32_t v10 = 0;  // 0x39130
		int32_t v11 = v5; // 0x39048
		int32_t v12 = 0;  // 0x39044
		// branch -> 0x39040
		while (true) {
			int16_t v13 = *(int16_t *)(*(int32_t *)v3 + v12 + v11); // 0x39048
			int32_t v14;                                            // 0x3912c
			int32_t v15;                                            // 0x39138
			int32_t v16;                                            // 0x3913c
			int32_t v17;                                            // 0x39140
			int32_t v18;                                            // 0x39128
			if (v13 == 12) {
				// 0x39054
				v14 = 1;
				// branch -> 0x39128
			} else {
				// 0x3905c
				if (v13 == 11) {
					// 0x39064
					v14 = 2;
					// branch -> 0x39128
				} else {
					// 0x3906c
					if (v13 == 71) {
						// 0x39074
						v14 = 1;
						// branch -> 0x39128
					} else {
						// 0x3907c
						if (v13 == 259) {
							// 0x39084
							v14 = 5;
							// branch -> 0x39128
						} else {
							// 0x3908c
							if (v13 == 249) {
								// 0x39094
								v14 = 2;
								// branch -> 0x39128
							} else {
								// 0x3909c
								if (v13 == 325) {
									// 0x390a4
									v14 = 2;
									// branch -> 0x39128
								} else {
									// 0x390ac
									if (v13 == 321) {
										// 0x390b4
										v14 = 1;
										// branch -> 0x39128
									} else {
										// 0x390bc
										if (v13 == 255) {
											// 0x390c4
											v14 = 4;
											// branch -> 0x39128
										} else {
											// 0x390cc
											if (v13 == 211) {
												// 0x390d4
												v14 = 1;
												// branch -> 0x39128
											} else {
												// 0x390dc
												if (v13 == 344) {
													// 0x390e4
													v14 = 2;
													// branch -> 0x39128
												} else {
													// 0x390ec
													if (v13 == 341) {
														// 0x390f4
														v14 = 1;
														// branch -> 0x39128
													} else {
														// 0x390fc
														if (v13 == 331) {
															// 0x39104
															v14 = 2;
															// branch -> 0x39128
														} else {
															// 0x3910c
															if (v13 == 418) {
																// 0x39114
																v14 = 1;
																// branch -> 0x39128
															lab_0x39128:
																// 0x39128
																v18 = *(int32_t *)v1;
																g34 = v14;
																*(char *)(v2 + v18 + v10) = (char)v14;
																v17 = v7;
																v16 = v8;
																v15 = v6;
																// branch -> 0x39138
															} else {
																// 0x3911c
																if (v13 == 421) {
																	// 0x39124
																	v14 = 2;
																	// branch -> 0x39128
																	goto lab_0x39128;
																} else {
																	v17 = v9;
																	v16 = v10;
																	v15 = v12;
																}
															}
														lab_0x39138_12:;
															int32_t v19 = v15 + 224; // 0x39138
															v6 = v19;
															int32_t v20 = v16 + 112; // 0x3913c
															v8 = v20;
															int32_t v21 = v17 - 1; // 0x39140
															v7 = v21;
															if (v21 == 0) {
																int32_t v22 = v2 + 1; // 0x39144
																v2 = v22;
																int32_t v23 = v4 + 2; // 0x39148
																v4 = v23;
																if (v22 >= 112) {
																	// break (via goto) -> 0x39154
																	goto lab_0x39154;
																}
																v5 = v23;
																// continue (via goto) -> 0x39030
																goto lab_0x39030;
															} else {
																// 0x39138
																v9 = v21;
																v10 = v20;
																v11 = v4;
																v12 = v19;
																// branch -> 0x39040
																continue;
															}
														}
														// 0x39128
														v18 = *(int32_t *)v1;
														g34 = v14;
														*(char *)(v2 + v18 + v10) = (char)v14;
														v17 = v7;
														v16 = v8;
														v15 = v6;
														// branch -> 0x39138
														goto lab_0x39138_12;
													}
													// 0x39128
													v18 = *(int32_t *)v1;
													g34 = v14;
													*(char *)(v2 + v18 + v10) = (char)v14;
													v17 = v7;
													v16 = v8;
													v15 = v6;
													// branch -> 0x39138
													goto lab_0x39138_12;
												}
												// 0x39128
												v18 = *(int32_t *)v1;
												g34 = v14;
												*(char *)(v2 + v18 + v10) = (char)v14;
												v17 = v7;
												v16 = v8;
												v15 = v6;
												// branch -> 0x39138
												goto lab_0x39138_12;
											}
											// 0x39128
											v18 = *(int32_t *)v1;
											g34 = v14;
											*(char *)(v2 + v18 + v10) = (char)v14;
											v17 = v7;
											v16 = v8;
											v15 = v6;
											// branch -> 0x39138
											goto lab_0x39138_12;
										}
										// 0x39128
										v18 = *(int32_t *)v1;
										g34 = v14;
										*(char *)(v2 + v18 + v10) = (char)v14;
										v17 = v7;
										v16 = v8;
										v15 = v6;
										// branch -> 0x39138
										goto lab_0x39138_12;
									}
									// 0x39128
									v18 = *(int32_t *)v1;
									g34 = v14;
									*(char *)(v2 + v18 + v10) = (char)v14;
									v17 = v7;
									v16 = v8;
									v15 = v6;
									// branch -> 0x39138
									goto lab_0x39138_12;
								}
								// 0x39128
								v18 = *(int32_t *)v1;
								g34 = v14;
								*(char *)(v2 + v18 + v10) = (char)v14;
								v17 = v7;
								v16 = v8;
								v15 = v6;
								// branch -> 0x39138
								goto lab_0x39138_12;
							}
							// 0x39128
							v18 = *(int32_t *)v1;
							g34 = v14;
							*(char *)(v2 + v18 + v10) = (char)v14;
							v17 = v7;
							v16 = v8;
							v15 = v6;
							// branch -> 0x39138
							goto lab_0x39138_12;
						}
						// 0x39128
						v18 = *(int32_t *)v1;
						g34 = v14;
						*(char *)(v2 + v18 + v10) = (char)v14;
						v17 = v7;
						v16 = v8;
						v15 = v6;
						// branch -> 0x39138
						goto lab_0x39138_12;
					}
					// 0x39128
					v18 = *(int32_t *)v1;
					g34 = v14;
					*(char *)(v2 + v18 + v10) = (char)v14;
					v17 = v7;
					v16 = v8;
					v15 = v6;
					// branch -> 0x39138
					goto lab_0x39138_12;
				}
				// 0x39128
				v18 = *(int32_t *)v1;
				g34 = v14;
				*(char *)(v2 + v18 + v10) = (char)v14;
				v17 = v7;
				v16 = v8;
				v15 = v6;
				// branch -> 0x39138
				goto lab_0x39138_12;
			}
			// 0x39128
			v18 = *(int32_t *)v1;
			g34 = v14;
			*(char *)(v2 + v18 + v10) = (char)v14;
			v17 = v7;
			v16 = v8;
			v15 = v6;
			// branch -> 0x39138
			goto lab_0x39138_12;
		}
	lab_0x39154:
		// 0x39154
		return g34;
	}
}

// Address range: 0x39158 - 0x39328
int32_t LoadL1Dungeon(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36; // 0x39158
	int32_t v2 = g35; // 0x39168
	g35 = a2;
	int32_t v3 = g33; // 0x39174
	g33 = a1;
	int32_t v4 = *(int32_t *)(g23 - 0x753c); // 0x3917c
	int32_t v5 = 96;                         // r0
	g36 = a3;
	*(int32_t *)*(int32_t *)(g23 - 0x7530) = 16;
	*(int32_t *)*(int32_t *)(g23 - 0x7534) = 16;
	*(int32_t *)*(int32_t *)(g23 - 0x7538) = v5;
	*(int32_t *)v4 = v5;
	DRLG_InitTrans(v4);
	int32_t v6 = LoadFileInMem(g33, NULL); // 0x391b0
	int32_t v7 = v6;                       // bp-24
	g34 = v6;
	g34 = function_c9948();
	int32_t v8 = *(int32_t *)(g23 - 0x77cc);  // 0x391c0
	int32_t v9 = 0;                           // r11
	int32_t v10 = *(int32_t *)(g23 - 0x7514); // 0x391c8
	                                          // branch -> 0x391d4
lab_0x391d4:
	while (true) {
		int32_t v11 = 5;   // ctr
		int32_t v12 = v8;  // r4
		int32_t v13 = v10; // r5
		v5 = 22;
		int32_t v14 = 0;  // r10
		int32_t v15 = v8; // 0x391ec
		char v16 = 22;
		// branch -> 0x391ec
		while (true) {
			// 0x391ec
			*(char *)v15 = v16;
			*(char *)v13 = (char)v14;
			*(char *)(v12 + 40) = (char)v5;
			*(char *)(v13 + 40) = (char)v14;
			*(char *)(v12 + 80) = (char)v5;
			*(char *)(v13 + 80) = (char)v14;
			*(char *)(v12 + 120) = (char)v5;
			*(char *)(v13 + 120) = (char)v14;
			*(char *)(v12 + 160) = (char)v5;
			*(char *)(v13 + 160) = (char)v14;
			*(char *)(v12 + 200) = (char)v5;
			*(char *)(v13 + 200) = (char)v14;
			*(char *)(v12 + 240) = (char)v5;
			*(char *)(v13 + 240) = (char)v14;
			*(char *)(v12 + 280) = (char)v5;
			v12 += 320;
			*(char *)(v13 + 280) = (char)v14;
			v13 += 320;
			int32_t v17 = v11 - 1; // 0x39234
			v11 = v17;
			if (v17 == 0) {
				int32_t v18 = v9 + 1; // 0x39238
				v9 = v18;
				int32_t v19 = v10 + 1; // 0x3923c
				v10 = v19;
				int32_t v20 = v8 + 1; // 0x39244
				v8 = v20;
				if (v18 >= 40) {
					// break (via goto) -> 0x3924c
					goto lab_0x3924c;
				}
				v10 = v19;
				v8 = v20;
				// continue (via goto) -> 0x391d4
				goto lab_0x391d4;
			} else {
				// 0x391ec
				v15 = v12;
				v16 = v5;
				// branch -> 0x391ec
				continue;
			}
		}
	lab_0x3924c:;
		int32_t v21 = g34;                     // 0x3924c
		int32_t v22 = (int32_t) * (char *)v21; // 0x3924c
		int32_t v23 = v21 + 4;                 // 0x39250
		v9 = v23;
		int32_t v24 = (int32_t) * (char *)(v21 + 2); // 0x39254
		int32_t v25 = v14;                           // 0x392b41
		if (v25 < v24) {
			int32_t v26 = v24; // 0x392b421
			int32_t v27 = v10; // 0x39268
			int32_t v28 = v8;  // 0x39264
			int32_t v29 = v22; // 0x39260
			// branch -> 0x3925c
			while (true) {
				// 0x3925c
				v11 = v29;
				v12 = v28;
				v13 = v27;
				int32_t v30 = v26; // 0x392b4
				int32_t v31 = v25; // 0x392b0
				int32_t v32 = v27; // 0x392ac
				int32_t v33 = v28; // 0x392a8
				int32_t v34 = v23; // 0x3927415
				if (v29 >= 1) {
					int32_t v35 = v28; // 0x39294
					int32_t v36 = v23; // 0x39274
					int32_t v37;       // 0x39298
					while (true) {
						unsigned char v38 = *(char *)v36; // 0x39274
						g34 = v38;
						if (v38 == 0) {
							// 0x39294
							*(char *)v35 = (char)13;
							// branch -> 0x39298
						} else {
							// 0x39280
							*(char *)v35 = v38;
							char *v39 = (char *)v13;           // 0x39284
							int32_t v40 = (int32_t)*v39 | 128; // 0x39288
							g34 = v40;
							*v39 = (char)v40;
							// branch -> 0x39298
						}
						// 0x39298
						v37 = v9 + 2;
						v9 = v37;
						int32_t v41 = v12 + 40; // 0x3929c
						v12 = v41;
						v13 += 40;
						int32_t v42 = v11 - 1; // 0x392a4
						v11 = v42;
						if (v42 == 0) {
							// break -> 0x392a8
							break;
						}
						v35 = v41;
						v36 = v37;
						// continue -> 0x39274
					}
					// 0x392a8
					v30 = v24;
					v31 = v14;
					v32 = v10;
					v33 = v8;
					v34 = v37;
					// branch -> 0x392a8
				}
				int32_t v43 = v33 + 1; // 0x392a8
				v8 = v43;
				int32_t v44 = v32 + 1; // 0x392ac
				v10 = v44;
				int32_t v45 = v31 + 1; // 0x392b0
				v14 = v45;
				if (v45 < v30) {
					// 0x392a8
					v26 = v30;
					v25 = v45;
					v23 = v34;
					v27 = v44;
					v28 = v43;
					v29 = v22;
					// branch -> 0x3925c
					continue;
				}
			}
		}
		// 0x392bc
		function_38a78();
		int32_t v46 = *(int32_t *)(g23 - 0x77b4); // 0x392c4
		*(int32_t *)*(int32_t *)(g23 - 0x77b0) = g35;
		*(int32_t *)v46 = g36;
		DRLG_L1Pass3(v46);
		int32_t v47 = DRLG_Init_Globals(); // 0x392d4
		g34 = v47;
		DRLG_InitL1Vals(v47);
		int32_t v48 = v7; // 0x392dc
		SetMapMonsters(v48, 0, 0);
		SetMapObjects(v48, 0, 0);
		function_c9acc(v48);
		int32_t result = MemFreeDbg(&v7); // 0x39308
		g36 = v1;
		g35 = v2;
		g33 = v3;
		return result;
	}
}

// Address range: 0x39328 - 0x3974c
int32_t LoadPreL1Dungeon(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36; // 0x39328
	int32_t v2 = 96;  // r0
	*(int32_t *)*(int32_t *)(g23 - 0x7530) = 16;
	*(int32_t *)*(int32_t *)(g23 - 0x7534) = 16;
	*(int32_t *)*(int32_t *)(g23 - 0x7538) = v2;
	*(int32_t *)*(int32_t *)(g23 - 0x753c) = v2;
	int32_t v3 = LoadFileInMem(0, NULL); // 0x3936c
	int32_t v4 = v3;                     // bp-24
	g34 = v3;
	g34 = function_c9948();
	int32_t v5 = *(int32_t *)(g23 - 0x77cc); // 0x3937c
	int32_t v6 = 0;                          // r10
	int32_t v7 = *(int32_t *)(g23 - 0x7514); // 0x39384
	                                         // branch -> 0x39390
lab_0x39390:
	while (true) {
		int32_t v8 = 5;   // ctr
		int32_t v9 = v5;  // r4
		int32_t v10 = v7; // r5
		v2 = 22;
		int32_t v11 = 0;  // r9
		int32_t v12 = v5; // 0x393a8
		char v13 = 22;
		// branch -> 0x393a8
		while (true) {
			// 0x393a8
			*(char *)v12 = v13;
			*(char *)v10 = (char)v11;
			*(char *)(v9 + 40) = (char)v2;
			*(char *)(v10 + 40) = (char)v11;
			*(char *)(v9 + 80) = (char)v2;
			*(char *)(v10 + 80) = (char)v11;
			*(char *)(v9 + 120) = (char)v2;
			*(char *)(v10 + 120) = (char)v11;
			*(char *)(v9 + 160) = (char)v2;
			*(char *)(v10 + 160) = (char)v11;
			*(char *)(v9 + 200) = (char)v2;
			*(char *)(v10 + 200) = (char)v11;
			*(char *)(v9 + 240) = (char)v2;
			*(char *)(v10 + 240) = (char)v11;
			*(char *)(v9 + 280) = (char)v2;
			v9 += 320;
			*(char *)(v10 + 280) = (char)v11;
			v10 += 320;
			int32_t v14 = v8 - 1; // 0x393f0
			v8 = v14;
			if (v14 == 0) {
				int32_t v15 = v6 + 1; // 0x393f4
				v6 = v15;
				int32_t v16 = v7 + 1; // 0x393f8
				v7 = v16;
				int32_t v17 = v5 + 1; // 0x39400
				v5 = v17;
				if (v15 >= 40) {
					// break (via goto) -> 0x39408
					goto lab_0x39408;
				}
				v7 = v16;
				v5 = v17;
				// continue (via goto) -> 0x39390
				goto lab_0x39390;
			} else {
				// 0x393a8
				v12 = v9;
				v13 = v2;
				// branch -> 0x393a8
				continue;
			}
		}
	lab_0x39408:;
		int32_t v18 = g34;                           // 0x39408
		int32_t v19 = (int32_t) * (char *)v18;       // 0x39408
		int32_t v20 = (int32_t) * (char *)(v18 + 2); // 0x39410
		int32_t v21 = v18 + 4;                       // 0x39414
		int32_t v22 = v11;                           // 0x394741
		if (v22 < v20) {
			int32_t v23 = v20; // 0x3947421
			int32_t v24 = v7;  // 0x39428
			int32_t v25 = v19; // 0x39420
			// branch -> 0x3941c
			while (true) {
				// 0x3941c
				v8 = v25;
				v9 = v5;
				v10 = v24;
				int32_t v26 = v23; // 0x39474
				int32_t v27 = v22; // 0x39470
				int32_t v28 = v24; // 0x3946c
				int32_t v29 = v21; // 0x3943415
				if (v25 >= 1) {
					int32_t v30 = v5;  // 0x39454
					int32_t v31 = v21; // 0x39434
					int32_t v32;       // 0x39458
					while (true) {
						unsigned char v33 = *(char *)v31; // 0x39434
						g34 = v33;
						if (v33 == 0) {
							// 0x39454
							*(char *)v30 = (char)13;
							// branch -> 0x39458
						} else {
							// 0x39440
							*(char *)v30 = v33;
							char *v34 = (char *)v10;           // 0x39444
							int32_t v35 = (int32_t)*v34 | 128; // 0x39448
							g34 = v35;
							*v34 = (char)v35;
							// branch -> 0x39458
						}
						// 0x39458
						v32 = v21 + 2;
						v21 = v32;
						int32_t v36 = v9 + 40; // 0x3945c
						v9 = v36;
						v10 += 40;
						int32_t v37 = v8 - 1; // 0x39464
						v8 = v37;
						if (v37 == 0) {
							// break -> 0x39468
							break;
						}
						v30 = v36;
						v31 = v32;
						// continue -> 0x39434
					}
					// 0x39468
					v26 = v20;
					v27 = v11;
					v28 = v7;
					v29 = v32;
					// branch -> 0x39468
				}
				int32_t v38 = v5 + 1; // 0x39468
				v5 = v38;
				int32_t v39 = v28 + 1; // 0x3946c
				v7 = v39;
				int32_t v40 = v27 + 1; // 0x39470
				v11 = v40;
				if (v40 < v26) {
					// 0x39468
					v23 = v26;
					v22 = v40;
					v21 = v29;
					v24 = v39;
					v5 = v38;
					v25 = v19;
					// branch -> 0x3941c
					continue;
				}
			}
		}
		// 0x3947c
		function_38a78();
		int32_t v41 = *(int32_t *)(g23 - 0x7540); // 0x39484
		v10 = v41;
		v5 = 0;
		*(char *)v41 = *(char *)g36;
		*(char *)(v10 + 40) = *(char *)(g36 + 40);
		*(char *)(v10 + 80) = *(char *)(g36 + 80);
		*(char *)(v10 + 120) = *(char *)(g36 + 120);
		*(char *)(v10 + 160) = *(char *)(g36 + 160);
		*(char *)(v10 + 200) = *(char *)(g36 + 200);
		*(char *)(v10 + 240) = *(char *)(g36 + 240);
		*(char *)(v10 + 280) = *(char *)(g36 + 280);
		*(char *)(v10 + 320) = *(char *)(g36 + 320);
		*(char *)(v10 + 360) = *(char *)(g36 + 360);
		*(char *)(v10 + 400) = *(char *)(g36 + 400);
		*(char *)(v10 + 440) = *(char *)(g36 + 440);
		*(char *)(v10 + 480) = *(char *)(g36 + 480);
		*(char *)(v10 + 520) = *(char *)(g36 + 520);
		*(char *)(v10 + 560) = *(char *)(g36 + 560);
		*(char *)(v10 + 600) = *(char *)(g36 + 600);
		*(char *)(v10 + 640) = *(char *)(g36 + 640);
		*(char *)(v10 + 680) = *(char *)(g36 + 680);
		*(char *)(v10 + 720) = *(char *)(g36 + 720);
		*(char *)(v10 + 760) = *(char *)(g36 + 760);
		*(char *)(v10 + 800) = *(char *)(g36 + 800);
		*(char *)(v10 + 840) = *(char *)(g36 + 840);
		*(char *)(v10 + 880) = *(char *)(g36 + 880);
		*(char *)(v10 + 920) = *(char *)(g36 + 920);
		*(char *)(v10 + 960) = *(char *)(g36 + 960);
		*(char *)(v10 + 1000) = *(char *)(g36 + 1000);
		*(char *)(v10 + 1040) = *(char *)(g36 + 1040);
		*(char *)(v10 + 1080) = *(char *)(g36 + 1080);
		*(char *)(v10 + 1120) = *(char *)(g36 + 1120);
		*(char *)(v10 + 1160) = *(char *)(g36 + 1160);
		*(char *)(v10 + 1200) = *(char *)(g36 + 1200);
		*(char *)(v10 + 1240) = *(char *)(g36 + 1240);
		*(char *)(v10 + 1280) = *(char *)(g36 + 1280);
		*(char *)(v10 + 1320) = *(char *)(g36 + 1320);
		*(char *)(v10 + 1360) = *(char *)(g36 + 1360);
		*(char *)(v10 + 1400) = *(char *)(g36 + 1400);
		*(char *)(v10 + 1440) = *(char *)(g36 + 1440);
		*(char *)(v10 + 1480) = *(char *)(g36 + 1480);
		*(char *)(v10 + 1520) = *(char *)(g36 + 1520);
		int32_t v42 = g36;     // 0x395c8
		int32_t v43 = v42 + 1; // r31
		*(char *)(v10 + 1560) = *(char *)(v42 + 1560);
		int32_t v44 = v10 + 1; // 0x395d4
		v10 = v44;
		v5++;
		*(char *)v44 = *(char *)v43;
		*(char *)(v10 + 40) = *(char *)(v43 + 40);
		*(char *)(v10 + 80) = *(char *)(v43 + 80);
		*(char *)(v10 + 120) = *(char *)(v43 + 120);
		*(char *)(v10 + 160) = *(char *)(v43 + 160);
		*(char *)(v10 + 200) = *(char *)(v43 + 200);
		*(char *)(v10 + 240) = *(char *)(v43 + 240);
		*(char *)(v10 + 280) = *(char *)(v43 + 280);
		*(char *)(v10 + 320) = *(char *)(v43 + 320);
		*(char *)(v10 + 360) = *(char *)(v43 + 360);
		*(char *)(v10 + 400) = *(char *)(v43 + 400);
		*(char *)(v10 + 440) = *(char *)(v43 + 440);
		*(char *)(v10 + 480) = *(char *)(v43 + 480);
		*(char *)(v10 + 520) = *(char *)(v43 + 520);
		*(char *)(v10 + 560) = *(char *)(v43 + 560);
		*(char *)(v10 + 600) = *(char *)(v43 + 600);
		*(char *)(v10 + 640) = *(char *)(v43 + 640);
		*(char *)(v10 + 680) = *(char *)(v43 + 680);
		*(char *)(v10 + 720) = *(char *)(v43 + 720);
		*(char *)(v10 + 760) = *(char *)(v43 + 760);
		*(char *)(v10 + 800) = *(char *)(v43 + 800);
		*(char *)(v10 + 840) = *(char *)(v43 + 840);
		*(char *)(v10 + 880) = *(char *)(v43 + 880);
		*(char *)(v10 + 920) = *(char *)(v43 + 920);
		*(char *)(v10 + 960) = *(char *)(v43 + 960);
		unsigned char v45 = *(char *)(v43 + 1000); // 0x396a4
		*(char *)(v10 + 1000) = v45;
		unsigned char v46 = *(char *)(v43 + 1040); // 0x396ac
		*(char *)(v10 + 1040) = v46;
		unsigned char v47 = *(char *)(v43 + 1080); // 0x396b4
		*(char *)(v10 + 1080) = v47;
		unsigned char v48 = *(char *)(v43 + 1120); // 0x396bc
		*(char *)(v10 + 1120) = v48;
		unsigned char v49 = *(char *)(v43 + 1160); // 0x396c4
		*(char *)(v10 + 1160) = v49;
		unsigned char v50 = *(char *)(v43 + 1200); // 0x396cc
		*(char *)(v10 + 1200) = v50;
		unsigned char v51 = *(char *)(v43 + 1240); // 0x396d4
		*(char *)(v10 + 1240) = v51;
		unsigned char v52 = *(char *)(v43 + 1280); // 0x396dc
		*(char *)(v10 + 1280) = v52;
		unsigned char v53 = *(char *)(v43 + 1320); // 0x396e4
		*(char *)(v10 + 1320) = v53;
		unsigned char v54 = *(char *)(v43 + 1360); // 0x396ec
		*(char *)(v10 + 1360) = v54;
		unsigned char v55 = *(char *)(v43 + 1400); // 0x396f4
		*(char *)(v10 + 1400) = v55;
		unsigned char v56 = *(char *)(v43 + 1440); // 0x396fc
		*(char *)(v10 + 1440) = v56;
		unsigned char v57 = *(char *)(v43 + 1480); // 0x39704
		*(char *)(v10 + 1480) = v57;
		unsigned char v58 = *(char *)(v43 + 1520); // 0x3970c
		*(char *)(v10 + 1520) = v58;
		g36 = v43 + 1;
		*(char *)(v10 + 1560) = *(char *)(v43 + 1560);
		int32_t v59 = v10 + 1; // 0x39720
		v10 = v59;
		int32_t v60 = 19; // 0x39724
		// branch -> 0x39490
		while (v60 != 0) {
			// 0x39490
			*(char *)v59 = *(char *)g36;
			*(char *)(v10 + 40) = *(char *)(g36 + 40);
			*(char *)(v10 + 80) = *(char *)(g36 + 80);
			*(char *)(v10 + 120) = *(char *)(g36 + 120);
			*(char *)(v10 + 160) = *(char *)(g36 + 160);
			*(char *)(v10 + 200) = *(char *)(g36 + 200);
			*(char *)(v10 + 240) = *(char *)(g36 + 240);
			*(char *)(v10 + 280) = *(char *)(g36 + 280);
			*(char *)(v10 + 320) = *(char *)(g36 + 320);
			*(char *)(v10 + 360) = *(char *)(g36 + 360);
			*(char *)(v10 + 400) = *(char *)(g36 + 400);
			*(char *)(v10 + 440) = *(char *)(g36 + 440);
			*(char *)(v10 + 480) = *(char *)(g36 + 480);
			*(char *)(v10 + 520) = *(char *)(g36 + 520);
			*(char *)(v10 + 560) = *(char *)(g36 + 560);
			*(char *)(v10 + 600) = *(char *)(g36 + 600);
			*(char *)(v10 + 640) = *(char *)(g36 + 640);
			*(char *)(v10 + 680) = *(char *)(g36 + 680);
			*(char *)(v10 + 720) = *(char *)(g36 + 720);
			*(char *)(v10 + 760) = *(char *)(g36 + 760);
			*(char *)(v10 + 800) = *(char *)(g36 + 800);
			*(char *)(v10 + 840) = *(char *)(g36 + 840);
			*(char *)(v10 + 880) = *(char *)(g36 + 880);
			*(char *)(v10 + 920) = *(char *)(g36 + 920);
			*(char *)(v10 + 960) = *(char *)(g36 + 960);
			*(char *)(v10 + 1000) = *(char *)(g36 + 1000);
			*(char *)(v10 + 1040) = *(char *)(g36 + 1040);
			*(char *)(v10 + 1080) = *(char *)(g36 + 1080);
			*(char *)(v10 + 1120) = *(char *)(g36 + 1120);
			*(char *)(v10 + 1160) = *(char *)(g36 + 1160);
			*(char *)(v10 + 1200) = *(char *)(g36 + 1200);
			*(char *)(v10 + 1240) = *(char *)(g36 + 1240);
			*(char *)(v10 + 1280) = *(char *)(g36 + 1280);
			*(char *)(v10 + 1320) = *(char *)(g36 + 1320);
			*(char *)(v10 + 1360) = *(char *)(g36 + 1360);
			*(char *)(v10 + 1400) = *(char *)(g36 + 1400);
			*(char *)(v10 + 1440) = *(char *)(g36 + 1440);
			*(char *)(v10 + 1480) = *(char *)(g36 + 1480);
			*(char *)(v10 + 1520) = *(char *)(g36 + 1520);
			v42 = g36;
			v43 = v42 + 1;
			*(char *)(v10 + 1560) = *(char *)(v42 + 1560);
			v44 = v10 + 1;
			v10 = v44;
			v5++;
			*(char *)v44 = *(char *)v43;
			*(char *)(v10 + 40) = *(char *)(v43 + 40);
			*(char *)(v10 + 80) = *(char *)(v43 + 80);
			*(char *)(v10 + 120) = *(char *)(v43 + 120);
			*(char *)(v10 + 160) = *(char *)(v43 + 160);
			*(char *)(v10 + 200) = *(char *)(v43 + 200);
			*(char *)(v10 + 240) = *(char *)(v43 + 240);
			*(char *)(v10 + 280) = *(char *)(v43 + 280);
			*(char *)(v10 + 320) = *(char *)(v43 + 320);
			*(char *)(v10 + 360) = *(char *)(v43 + 360);
			*(char *)(v10 + 400) = *(char *)(v43 + 400);
			*(char *)(v10 + 440) = *(char *)(v43 + 440);
			*(char *)(v10 + 480) = *(char *)(v43 + 480);
			*(char *)(v10 + 520) = *(char *)(v43 + 520);
			*(char *)(v10 + 560) = *(char *)(v43 + 560);
			*(char *)(v10 + 600) = *(char *)(v43 + 600);
			*(char *)(v10 + 640) = *(char *)(v43 + 640);
			*(char *)(v10 + 680) = *(char *)(v43 + 680);
			*(char *)(v10 + 720) = *(char *)(v43 + 720);
			*(char *)(v10 + 760) = *(char *)(v43 + 760);
			*(char *)(v10 + 800) = *(char *)(v43 + 800);
			*(char *)(v10 + 840) = *(char *)(v43 + 840);
			*(char *)(v10 + 880) = *(char *)(v43 + 880);
			*(char *)(v10 + 920) = *(char *)(v43 + 920);
			*(char *)(v10 + 960) = *(char *)(v43 + 960);
			v45 = *(char *)(v43 + 1000);
			*(char *)(v10 + 1000) = v45;
			v46 = *(char *)(v43 + 1040);
			*(char *)(v10 + 1040) = v46;
			v47 = *(char *)(v43 + 1080);
			*(char *)(v10 + 1080) = v47;
			v48 = *(char *)(v43 + 1120);
			*(char *)(v10 + 1120) = v48;
			v49 = *(char *)(v43 + 1160);
			*(char *)(v10 + 1160) = v49;
			v50 = *(char *)(v43 + 1200);
			*(char *)(v10 + 1200) = v50;
			v51 = *(char *)(v43 + 1240);
			*(char *)(v10 + 1240) = v51;
			v52 = *(char *)(v43 + 1280);
			*(char *)(v10 + 1280) = v52;
			v53 = *(char *)(v43 + 1320);
			*(char *)(v10 + 1320) = v53;
			v54 = *(char *)(v43 + 1360);
			*(char *)(v10 + 1360) = v54;
			v55 = *(char *)(v43 + 1400);
			*(char *)(v10 + 1400) = v55;
			v56 = *(char *)(v43 + 1440);
			*(char *)(v10 + 1440) = v56;
			v57 = *(char *)(v43 + 1480);
			*(char *)(v10 + 1480) = v57;
			v58 = *(char *)(v43 + 1520);
			*(char *)(v10 + 1520) = v58;
			g36 = v43 + 1;
			*(char *)(v10 + 1560) = *(char *)(v43 + 1560);
			v59 = v10 + 1;
			v10 = v59;
			v60--;
			// continue -> 0x39490
		}
		// 0x39728
		function_c9acc(v4);
		int32_t result = MemFreeDbg(&v4); // 0x39734
		g36 = v1;
		return result;
	}
}

// Address range: 0x3974c - 0x397d0
int32_t function_3974c(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x3974c
	int32_t v2 = 0;                          // r7
	int32_t v3 = *(int32_t *)(g23 - 0x7514); // 0x39754
	                                         // branch -> 0x39758
lab_0x39758:
	while (true) {
		int32_t result = v1; // r3
		int32_t v4 = 5;      // ctr
		int32_t v5 = v3;     // r4
		int32_t v6 = 0;      // r0
		int32_t v7 = v1;     // 0x3976c
		char v8 = 0;
		// branch -> 0x3976c
		while (true) {
			// 0x3976c
			*(char *)v7 = v8;
			*(char *)v5 = (char)v6;
			*(char *)(result + 40) = (char)v6;
			*(char *)(v5 + 40) = (char)v6;
			*(char *)(result + 80) = (char)v6;
			*(char *)(v5 + 80) = (char)v6;
			*(char *)(result + 120) = (char)v6;
			*(char *)(v5 + 120) = (char)v6;
			*(char *)(result + 160) = (char)v6;
			*(char *)(v5 + 160) = (char)v6;
			*(char *)(result + 200) = (char)v6;
			*(char *)(v5 + 200) = (char)v6;
			*(char *)(result + 240) = (char)v6;
			*(char *)(v5 + 240) = (char)v6;
			*(char *)(result + 280) = (char)v6;
			result += 320;
			*(char *)(v5 + 280) = (char)v6;
			v5 += 320;
			int32_t v9 = v4 - 1; // 0x397b4
			v4 = v9;
			if (v9 == 0) {
				int32_t v10 = v2 + 1; // 0x397b8
				v2 = v10;
				if (v10 >= 40) {
					// break (via goto) -> 0x397cc
					goto lab_0x397cc;
				}
				v3++;
				v1++;
				// continue (via goto) -> 0x39758
				goto lab_0x39758;
			} else {
				// 0x3976c
				v7 = result;
				v8 = v6;
				// branch -> 0x3976c
				continue;
			}
		}
	lab_0x397cc:
		// 0x397cc
		return result;
	}
}

// Address range: 0x397d0 - 0x39860
int32_t function_397d0(int32_t a1)
{
	int32_t v1 = 0;                          // r5
	int32_t v2 = *(int32_t *)(g23 - 0x7514); // 0x397d4
	// branch -> 0x397d8
	int32_t result; // 0x39844
	while (true) {
		int32_t v3 = v2;       // r3
		char *v4 = (char *)v2; // 0x397e4
		*v4 = *v4 & -65;
		char *v5 = (char *)(v3 + 40); // 0x397f0
		*v5 = *v5 & -65;
		char *v6 = (char *)(v3 + 80); // 0x397fc
		*v6 = *v6 & -65;
		char *v7 = (char *)(v3 + 120); // 0x39808
		*v7 = *v7 & -65;
		char *v8 = (char *)(v3 + 160); // 0x39814
		*v8 = *v8 & -65;
		char *v9 = (char *)(v3 + 200); // 0x39820
		*v9 = *v9 & -65;
		char *v10 = (char *)(v3 + 240); // 0x3982c
		*v10 = *v10 & -65;
		char *v11 = (char *)(v3 + 280); // 0x39838
		*v11 = *v11 & -65;
		result = v3 + 320;
		v3 = result;
		int32_t v12 = 4; // 0x39848
		// branch -> 0x397e4
		while (v12 != 0) {
			// 0x397e4
			v4 = (char *)result;
			*v4 = *v4 & -65;
			v5 = (char *)(v3 + 40);
			*v5 = *v5 & -65;
			v6 = (char *)(v3 + 80);
			*v6 = *v6 & -65;
			v7 = (char *)(v3 + 120);
			*v7 = *v7 & -65;
			v8 = (char *)(v3 + 160);
			*v8 = *v8 & -65;
			v9 = (char *)(v3 + 200);
			*v9 = *v9 & -65;
			v10 = (char *)(v3 + 240);
			*v10 = *v10 & -65;
			v11 = (char *)(v3 + 280);
			*v11 = *v11 & -65;
			result = v3 + 320;
			v3 = result;
			v12--;
			// continue -> 0x397e4
		}
		int32_t v13 = v1 + 1; // 0x3984c
		v1 = v13;
		if (v13 >= 40) {
			// break -> 0x3985c
			break;
		}
		v2++;
		// continue -> 0x397d8
	}
	// 0x3985c
	return result;
}

// Address range: 0x39860 - 0x3995c
int32_t function_39860(int32_t result, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = a3 - 8;                     // r7
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x39868
	int32_t v3 = 0;                          // r10
	if (a4 > 0) {
		while (true) {
			// 0x39874
			int32_t v4; // 0x3993c
			if (a3 >= 1) {
				int32_t v5 = a3; // 0x39910
				int32_t v6 = 0;  // 0x39910
				int32_t v7 = v2; // 0x3994c
				int32_t v8;      // 0x3994c
				if (a3 >= 9) {
					int32_t v9 = a2 + v2; // 0x39894
					g30 = v9;
					int32_t v10 = (v1 + 7) / 8; // ctr
					if (v1 >= 1) {
						int32_t v11 = 0; // 0x398a0
						while (true) {
							int32_t v12 = result + v11; // 0x398a0
							g32 = v12;
							int32_t v13 = v11 + 8; // r9
							g31 = 1;
							*(char *)(40 * v12 + v9) = 1;
							int32_t v14 = g32; // 0x398c4
							g33 = 40 * (v12 + 2);
							*(char *)(g30 + 40 * (v12 + 1)) = (char)g31;
							int32_t v15 = g32; // 0x398d4
							g35 = 40 * (v12 + 3);
							*(char *)(g33 + g30) = (char)g31;
							g36 = 40 * (v14 + 4);
							*(char *)(g35 + g30) = (char)g31;
							*(char *)(g36 + g30) = (char)g31;
							*(char *)(40 * (v14 + 5) + g30) = (char)g31;
							*(char *)(40 * (v15 + 6) + g30) = (char)g31;
							*(char *)(40 * (v15 + 7) + g30) = (char)g31;
							int32_t v16 = v10 - 1; // 0x39908
							v10 = v16;
							if (v16 == 0) {
								// 0x3994c
								v5 = a3;
								v6 = v13;
								v7 = v2;
								// branch -> 0x3994c
								// 0x3994c
								v8 = a2 + v7;
								if (v5 > v6) {
								lab_0x39924:
									// 0x39924
									*(char *)(40 * (result + v6) + v8) = 1;
									int32_t v17 = v5 - v6 - 1; // 0x3993426
									v10 = v17;
									int32_t v18;
									if (v17 != 0) {
										int32_t v19 = v6 + 1;
										*(char *)(40 * (result + v19) + v8) = (char)1;
										int32_t v20 = v10 - 1; // 0x39934
										while (v20 != 0) {
											// 0x39924
											v19++;
											*(char *)(40 * (result + v19) + v8) = (char)1;
											v20--;
											// continue -> 0x39924
										}
										// 0x39938
										// branch -> 0x39938
									lab_0x39938:
										// 0x39938
										v2 = v18 + 1;
										v4 = v3 + 1;
										v3 = v4;
										if (v4 < a4) {
										lab_0x39938_4:
											// 0x39938
											// branch -> 0x39874
											break;
										}
										// 0x39940
										// branch -> 0x39954
										// 0x39954
										return result;
									}
									// 0x39938
									v18 = v2;
									// branch -> 0x39938
									goto lab_0x39938;
								}
							lab_0x39938_3:
								// 0x39938
								v2 = v7 + 1;
								v4 = v3 + 1;
								v3 = v4;
								if (v4 < a4) {
									goto lab_0x39938_4;
								}
								// 0x39940
								// branch -> 0x39954
								// 0x39954
								return result;
							}
							// 0x398a0
							v9 = g30;
							v11 = v13;
							// branch -> 0x398a0
						}
					} else {
						v5 = a3;
						v6 = 0;
						v7 = v2;
					}
				}
				// 0x3994c
				v8 = a2 + v7;
				if (v5 > v6) {
					goto lab_0x39924;
				}
				goto lab_0x39938_3;
			}
			// 0x39938
			v2++;
			v4 = v3 + 1;
			v3 = v4;
			if (v4 < a4) {
				goto lab_0x39938_4;
			}
			// 0x39940
			// branch -> 0x39954
			// 0x39954
			return result;
		}
	}
	// 0x39954
	return result;
}

// Address range: 0x3995c - 0x399e0
int32_t function_3995c(int32_t a1, int32_t a2, uint32_t a3, uint32_t a4)
{
	// 0x3995c
	if ((int32_t)a4 <= 0) {
		// 0x399d8
		return 1;
	}
	int32_t v1 = *(int32_t *)(g23 - 0x77cc) + a2; // 0x399c8
	int32_t v2 = 0;                               // 0x399cc
	// branch -> 0x3996c
	while (true) {
		int32_t v3 = v2 + a2; // 0x39974
		int32_t v4;           // 0x399cc
		if (a3 >= 1) {
			int32_t v5 = 0; // 0x399c0
			// branch -> 0x39980
			while (true) {
				int32_t v6 = v5 + a1; // 0x39980
				if (v6 < 0 || v6 > 39 || v3 < 0 || v3 >= 40 || *(char *)(40 * v6 + v1) != 0) {
					// 0x399a0
					return 0;
				}
				int32_t v7 = v5 + 1; // 0x399c0
				int32_t v8 = a3 - 1; // 0x399c4
				if (v8 == 0) {
					// break -> 0x399c8
					break;
				}
				a3 = v8;
				v5 = v7;
				// continue -> 0x39980
			}
			// 0x399c8
			v4 = v2 + 1;
			if (v4 >= a4) {
				// break -> 0x399d8
				break;
			}
			v1++;
			v2 = v4;
			// continue -> 0x3996c
			continue;
		}
		// 0x399c8
		v4 = v2 + 1;
		if (v4 >= a4) {
			// break -> 0x399d8
			break;
		}
		v1++;
		v2 = v4;
		// continue -> 0x3996c
	}
	// 0x399d8
	return 1;
}

// Address range: 0x399e0 - 0x39c94
int32_t function_399e0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g10; // 0x399e4
	g36 = a1;
	g35 = a3;
	g37 = 4;
	int32_t v2 = random(0); // 0x39a0c
	int32_t v3;             // r29
	int32_t v4;             // r30
	uint32_t v5;            // 0x39a5c
	int32_t v6;             // 0x39a94
	uint32_t v7;            // 0x39b74
	uint32_t v8;            // 0x39bac
	int32_t result5;        // 0x39c90
	int32_t result;         // 0x39c902
	int32_t v9;             // 0x39c903
	int32_t result3;        // 0x39c904
	int32_t v10;            // 0x39c905
	uint32_t v11;           // 0x39a78
	int32_t v12;            // 0x39a9c
	int32_t v13;            // 0x39acc
	int32_t v14;            // 0x39b00
	uint32_t v15;           // 0x39b90
	int32_t v16;            // 0x39ba8
	int32_t v17;            // 0x39bdc
	int32_t v18;            // 0x39c10
	int32_t v19;            // 0x39a8c
	int32_t v20;            // 0x39aac
	int32_t v21;            // 0x39ab0
	int32_t v22;            // 0x39bc4
	int32_t v23;            // 0x39bc8
	uint32_t v24;           // 0x39a98
	int32_t v25;            // 0x39bb0
	int32_t v26;            // 0x39ac4
	int32_t v27;            // 0x39b0c
	int32_t v28;            // 0x39bd4
	int32_t v29;            // 0x39c1c
	int32_t result2;        // 0x39b6c
	int32_t result4;        // 0x39c7c
	if (a5 != 1) {
		// 0x39a30
		if (v2 != 0) {
			// 0x39a5c
			v5 = a4;
			// branch -> 0x39a6c
			while (true) {
				// 0x39a6c
				g37 = 5;
				v11 = random(0) + 2;
				g32 = v11 - v11 % 2;
				g37 = 5;
				v19 = random(0);
				v6 = g32;
				v24 = (v19 + 2) / 2;
				v12 = 2 * v24;
				g31 = v12;
				v20 = a2 + (v5 / 2 | v5 & -0x80000000) - (v12 & -0x80000000 | v24);
				v21 = g36 - v6;
				g30 = v20;
				a4 = v21;
				v26 = function_3995c(v21 - 1, v20 - 1, v12 + 2, v6 + 1);
				a2 = v26;
				v13 = 1;
				v3 = v13;
				if (v26 == 0) {
					goto lab_0x39ad4;
				}
				// 0x39adc
				if (v26 == 1) {
					// 0x39ae4
					function_39860(a4, g30, g32, g31);
					// branch -> 0x39af8
				}
				// 0x39af8
				v14 = g31 + 2;
				g33 = g35 + g36;
				v27 = function_3995c(g30 - 1, g32 + 1, v14, v14);
				g27 = v27;
				v9 = v27;
				if (v27 == 1) {
					// 0x39b1c
					v9 = function_39860(g33, g30, g32, g31);
					// branch -> 0x39b30
				}
				// 0x39b30
				result = v9;
				if (a2 == 1) {
					// 0x39b38
					result = function_399e0(a4, g30, g32, g31, 1);
					// branch -> 0x39b50
				}
				// 0x39b50
				if (g27 != 1) {
					// 0x39c80
					g10 = v1;
					return result;
				}
				// 0x39b58
				result2 = function_399e0(g33, g30, g32, g31, 1);
				// branch -> 0x39c80
				// 0x39c80
				g10 = v1;
				return result2;
			}
		}
		// 0x39b74
		v7 = g35;
		g36 += (v7 / 2 | v7 & -0x80000000);
		v4 = 0;
		// branch -> 0x39b84
		while (true) {
			// 0x39b84
			g37 = 5;
			v15 = random(0) + 2;
			g33 = v15 - v15 % 2;
			g37 = 5;
			v16 = random(0) + 2;
			v8 = g33;
			v25 = v16 & -2;
			g32 = v25;
			v22 = a2 - v25;
			g31 = v22;
			v23 = g36 - (v8 / 2 | v8 & -0x80000000);
			g30 = v23;
			v28 = function_3995c(v23 - 1, v22 - 1, v8 + 2, v16 | 1);
			g27 = v28;
			v17 = v4 + 1;
			v4 = v17;
			int32_t v30 = v28;
			if (v28 == 0) {
			lab_0x39be4:
				// 0x39be4
				if (v17 >= 20) {
					// break -> 0x39bec
					break;
				}
				// continue -> 0x39b84
				continue;
			}
			// 0x39bec
			if (v30 == 1) {
				// 0x39bf4
				function_39860(g30, g31, g33, g32);
				// branch -> 0x39c08
			}
			// 0x39c08
			v18 = g32 + 1;
			a4 += a2;
			v29 = function_3995c(g30 - 1, g33 + 2, v18, v18);
			v10 = v29;
			if (v29 == 1) {
				// 0x39c2c
				v10 = function_39860(g30, a4, g33, g32);
				// branch -> 0x39c40
			}
			// 0x39c40
			result3 = v10;
			if (g27 == 1) {
				// 0x39c48
				result3 = function_399e0(g30, g31, g33, g32, 0);
				// branch -> 0x39c60
			}
			// 0x39c60
			if (v29 != 1) {
				// 0x39c80
				g10 = v1;
				return result3;
			}
			// 0x39c68
			result4 = function_399e0(g30, a4, g33, g32, 0);
			// branch -> 0x39c80
			// 0x39c80
			g10 = v1;
			return result4;
		}
		// 0x39c08
		v18 = g32 + 1;
		a4 += a2;
		v29 = function_3995c(g30 - 1, g33 + 2, v18, v18);
		v10 = v29;
		if (v29 == 1) {
			// 0x39c2c
			v10 = function_39860(g30, a4, g33, g32);
			// branch -> 0x39c40
		}
		// 0x39c40
		result3 = v10;
		if (g27 == 1) {
			// 0x39c48
			result3 = function_399e0(g30, g31, g33, g32, 0);
			// branch -> 0x39c60
		}
		// 0x39c60
		result5 = result3;
		if (v29 == 1) {
			// 0x39c68
			result5 = function_399e0(g30, a4, g33, g32, 0);
			// branch -> 0x39c80
		}
		// 0x39c80
		g10 = v1;
		return result5;
	}
	// 0x39a18
	if (v2 == 0) {
		// 0x39a5c
		v5 = a4;
		int32_t v31 = a2; // 0x39a64
		v3 = 0;
		// branch -> 0x39a6c
		while (true) {
			// 0x39a6c
			g37 = 5;
			v11 = random(0) + 2;
			g32 = v11 - v11 % 2;
			g37 = 5;
			v19 = random(0);
			v6 = g32;
			v24 = (v19 + 2) / 2;
			v12 = 2 * v24;
			g31 = v12;
			v20 = v31 + (v5 / 2 | v5 & -0x80000000) - (v12 & -0x80000000 | v24);
			v21 = g36 - v6;
			g30 = v20;
			a4 = v21;
			v26 = function_3995c(v21 - 1, v20 - 1, v12 + 2, v6 + 1);
			a2 = v26;
			v13 = v3 + 1;
			v3 = v13;
			int32_t v32 = v26;
			if (v26 == 0) {
			lab_0x39ad4:
				// 0x39ad4
				if (v13 >= 20) {
					// break -> 0x39adc
					break;
				}
				// continue -> 0x39a6c
				continue;
			}
			// 0x39adc
			if (v32 == 1) {
				// 0x39ae4
				function_39860(a4, g30, g32, g31);
				// branch -> 0x39af8
			}
			// 0x39af8
			v14 = g31 + 2;
			g33 = g35 + g36;
			v27 = function_3995c(g30 - 1, g32 + 1, v14, v14);
			g27 = v27;
			v9 = v27;
			if (v27 == 1) {
				// 0x39b1c
				v9 = function_39860(g33, g30, g32, g31);
				// branch -> 0x39b30
			}
			// 0x39b30
			result = v9;
			if (a2 == 1) {
				// 0x39b38
				result = function_399e0(a4, g30, g32, g31, 1);
				// branch -> 0x39b50
			}
			// 0x39b50
			if (g27 != 1) {
				// 0x39c80
				g10 = v1;
				return result;
			}
			// 0x39b58
			result2 = function_399e0(g33, g30, g32, g31, 1);
			// branch -> 0x39c80
			// 0x39c80
			g10 = v1;
			return result2;
		}
		// 0x39af8
		v14 = g31 + 2;
		g33 = g35 + g36;
		v27 = function_3995c(g30 - 1, g32 + 1, v14, v14);
		g27 = v27;
		v9 = v27;
		if (v27 == 1) {
			// 0x39b1c
			v9 = function_39860(g33, g30, g32, g31);
			// branch -> 0x39b30
		}
		// 0x39b30
		result = v9;
		if (a2 == 1) {
			// 0x39b38
			result = function_399e0(a4, g30, g32, g31, 1);
			// branch -> 0x39b50
		}
		// 0x39b50
		result5 = result;
		if (g27 == 1) {
			// 0x39b58
			result5 = function_399e0(g33, g30, g32, g31, 1);
			// branch -> 0x39c80
		}
		// 0x39c80
		g10 = v1;
		return result5;
	}
	// 0x39b74
	v7 = g35;
	g36 += (v7 / 2 | v7 & -0x80000000);
	// branch -> 0x39b84
	while (true) {
		// 0x39b84
		g37 = 5;
		v15 = random(0) + 2;
		g33 = v15 - v15 % 2;
		g37 = 5;
		v16 = random(0) + 2;
		v8 = g33;
		v25 = v16 & -2;
		g32 = v25;
		v22 = a2 - v25;
		g31 = v22;
		v23 = g36 - (v8 / 2 | v8 & -0x80000000);
		g30 = v23;
		v28 = function_3995c(v23 - 1, v22 - 1, v8 + 2, v16 | 1);
		g27 = v28;
		v17 = 1;
		v4 = v17;
		if (v28 == 0) {
			goto lab_0x39be4;
		}
		// 0x39bec
		if (v28 == 1) {
			// 0x39bf4
			function_39860(g30, g31, g33, g32);
			// branch -> 0x39c08
		}
		// 0x39c08
		v18 = g32 + 1;
		a4 += a2;
		v29 = function_3995c(g30 - 1, g33 + 2, v18, v18);
		v10 = v29;
		if (v29 == 1) {
			// 0x39c2c
			v10 = function_39860(g30, a4, g33, g32);
			// branch -> 0x39c40
		}
		// 0x39c40
		result3 = v10;
		if (g27 == 1) {
			// 0x39c48
			result3 = function_399e0(g30, g31, g33, g32, 0);
			// branch -> 0x39c60
		}
		// 0x39c60
		if (v29 != 1) {
			// 0x39c80
			g10 = v1;
			return result3;
		}
		// 0x39c68
		result4 = function_399e0(g30, a4, g33, g32, 0);
		// branch -> 0x39c80
		// 0x39c80
		g10 = v1;
		return result4;
	}
}

// Address range: 0x39c94 - 0x3a190
int32_t function_39c94(int32_t a1)
{
	// 0x39c94
	g36 = *(int32_t *)(g23 - 0x77cc);
	g37 = 2;
	int32_t v1;     // r0
	int32_t result; // r3
	int32_t v2;     // r4
	int32_t v3;     // r5
	if (random(0) == 0) {
		// 0x39cc4
		g33 = 1;
		g35 = 39;
		g37 = 2;
		*(int32_t *)(g23 - 0x4f2c) = random(0);
		g37 = 2;
		*(int32_t *)(g23 - 0x4f30) = random(0);
		g37 = 2;
		*(int32_t *)(g23 - 0x4f34) = random(0);
		int32_t v4 = g23; // 0x39d18
		if (*(int32_t *)(g23 - 0x4f34) + *(int32_t *)(g23 - 0x4f2c) <= 1) {
			// 0x39d10
			*(int32_t *)(g23 - 0x4f30) = 1;
			v4 = g23;
			// branch -> 0x39d18
		}
		// 0x39d18
		if (*(int32_t *)(v4 - 0x4f2c) == 0) {
			// 0x39d3c
			g33 = 18;
			// branch -> 0x39d40
		} else {
			// 0x39d24
			function_39860(15, 1, 10, 10);
			v4 = g23;
			// branch -> 0x39d40
		}
		int32_t v5 = v4; // 0x39d60
		if (*(int32_t *)(v4 - 0x4f30) != 0) {
			// 0x39d4c
			function_39860(15, 15, 10, 10);
			v5 = g23;
			// branch -> 0x39d60
		}
		// 0x39d60
		int32_t v6; // 0x39d90
		if (*(int32_t *)(v5 - 0x4f34) == 0) {
			// 0x39d84
			v6 = 22;
			// branch -> 0x39d88
		} else {
			// 0x39d6c
			function_39860(15, 29, 10, 10);
			v6 = g35;
			// branch -> 0x39d88
		}
		int32_t v7 = g33; // 0x39d88
		v3 = g36 + v7;
		int32_t v8 = v6 - v7; // 0x39d90
		result = v8;
		v2 = 1;
		int32_t v9;  // 0x39e9c
		int32_t v10; // 0x39ec0
		int32_t v11; // 0x39ee4
		int32_t v12; // 0x39f0c
		if (v6 > v7) {
			int32_t v13 = __asm_rlwinm_(v8, 29, 3, 31); // 0x39d9c
			int32_t v14;                                // 0x39e94
			int32_t v15;                                // 0x39e98
			if (v13 == 0) {
				// 0x39d9c
				// branch -> 0x39e78
				// 0x39e78
				*(char *)(v3 + 680) = (char)v2;
				*(char *)(v3 + 720) = (char)v2;
				*(char *)(v3 + 760) = (char)v2;
				*(char *)(v3 + 800) = (char)v2;
				*(char *)(v3 + 840) = (char)v2;
				*(char *)(v3 + 880) = (char)v2;
				v14 = v3 + 1;
				v3 = v14;
				v15 = result - 1;
				// branch -> 0x39e7c
				while (v15 != 0) {
					// 0x39e7c
					*(char *)(v14 + 680) = (char)v2;
					*(char *)(v3 + 720) = (char)v2;
					*(char *)(v3 + 760) = (char)v2;
					*(char *)(v3 + 800) = (char)v2;
					*(char *)(v3 + 840) = (char)v2;
					*(char *)(v3 + 880) = (char)v2;
					v14 = v3 + 1;
					v3 = v14;
					v15--;
					// continue -> 0x39e7c
				}
				// 0x39e9c
				v9 = g23;
				v10 = v9;
				if (*(int32_t *)(v9 - 0x4f2c) != 0) {
					// 0x39ea8
					result = function_399e0(15, 1, 10, 10, 0);
					v10 = g23;
					// branch -> 0x39ec0
				}
				// 0x39ec0
				v11 = v10;
				if (*(int32_t *)(v10 - 0x4f30) != 0) {
					// 0x39ecc
					result = function_399e0(15, 15, 10, 10, 0);
					v11 = g23;
					// branch -> 0x39ee4
				}
				// 0x39ee4
				if (*(int32_t *)(v11 - 0x4f34) != 0) {
					// 0x39ef0
					result = function_399e0(15, 29, 10, 10, 0);
					v12 = g23;
					// branch -> 0x39f08
				} else {
					v12 = v11;
				}
				// 0x39f08
				v1 = 0;
				*(int32_t *)(v12 - 0x4f28) = 0;
				*(int32_t *)(g23 - 0x4f24) = v1;
				*(int32_t *)(g23 - 0x4f20) = v1;
				// branch -> 0x3a174
				// 0x3a174
				return result;
			}
			// 0x39da8
			*(char *)(v3 + 680) = (char)v2;
			*(char *)(v3 + 720) = (char)v2;
			*(char *)(v3 + 760) = (char)v2;
			*(char *)(v3 + 800) = (char)v2;
			*(char *)(v3 + 840) = (char)v2;
			*(char *)(v3 + 880) = (char)v2;
			*(char *)(v3 + 681) = (char)v2;
			*(char *)(v3 + 721) = (char)v2;
			*(char *)(v3 + 761) = (char)v2;
			*(char *)(v3 + 801) = (char)v2;
			*(char *)(v3 + 841) = (char)v2;
			*(char *)(v3 + 881) = (char)v2;
			*(char *)(v3 + 682) = (char)v2;
			*(char *)(v3 + 722) = (char)v2;
			*(char *)(v3 + 762) = (char)v2;
			*(char *)(v3 + 802) = (char)v2;
			*(char *)(v3 + 842) = (char)v2;
			*(char *)(v3 + 882) = (char)v2;
			*(char *)(v3 + 683) = (char)v2;
			*(char *)(v3 + 723) = (char)v2;
			*(char *)(v3 + 763) = (char)v2;
			*(char *)(v3 + 803) = (char)v2;
			*(char *)(v3 + 843) = (char)v2;
			*(char *)(v3 + 883) = (char)v2;
			*(char *)(v3 + 684) = (char)v2;
			*(char *)(v3 + 724) = (char)v2;
			*(char *)(v3 + 764) = (char)v2;
			*(char *)(v3 + 804) = (char)v2;
			*(char *)(v3 + 844) = (char)v2;
			*(char *)(v3 + 884) = (char)v2;
			*(char *)(v3 + 685) = (char)v2;
			*(char *)(v3 + 725) = (char)v2;
			*(char *)(v3 + 765) = (char)v2;
			*(char *)(v3 + 805) = (char)v2;
			*(char *)(v3 + 845) = (char)v2;
			*(char *)(v3 + 885) = (char)v2;
			*(char *)(v3 + 686) = (char)v2;
			*(char *)(v3 + 726) = (char)v2;
			*(char *)(v3 + 766) = (char)v2;
			*(char *)(v3 + 806) = (char)v2;
			*(char *)(v3 + 846) = (char)v2;
			*(char *)(v3 + 886) = (char)v2;
			*(char *)(v3 + 687) = (char)v2;
			*(char *)(v3 + 727) = (char)v2;
			*(char *)(v3 + 767) = (char)v2;
			*(char *)(v3 + 807) = (char)v2;
			*(char *)(v3 + 847) = (char)v2;
			*(char *)(v3 + 887) = (char)v2;
			int32_t v16 = v3 + 8; // 0x39e68
			v3 = v16;
			int32_t v17 = v13 - 1; // 0x39e6c
			// branch -> 0x39da8
			while (v17 != 0) {
				// 0x39da8
				*(char *)(v16 + 680) = (char)v2;
				*(char *)(v3 + 720) = (char)v2;
				*(char *)(v3 + 760) = (char)v2;
				*(char *)(v3 + 800) = (char)v2;
				*(char *)(v3 + 840) = (char)v2;
				*(char *)(v3 + 880) = (char)v2;
				*(char *)(v3 + 681) = (char)v2;
				*(char *)(v3 + 721) = (char)v2;
				*(char *)(v3 + 761) = (char)v2;
				*(char *)(v3 + 801) = (char)v2;
				*(char *)(v3 + 841) = (char)v2;
				*(char *)(v3 + 881) = (char)v2;
				*(char *)(v3 + 682) = (char)v2;
				*(char *)(v3 + 722) = (char)v2;
				*(char *)(v3 + 762) = (char)v2;
				*(char *)(v3 + 802) = (char)v2;
				*(char *)(v3 + 842) = (char)v2;
				*(char *)(v3 + 882) = (char)v2;
				*(char *)(v3 + 683) = (char)v2;
				*(char *)(v3 + 723) = (char)v2;
				*(char *)(v3 + 763) = (char)v2;
				*(char *)(v3 + 803) = (char)v2;
				*(char *)(v3 + 843) = (char)v2;
				*(char *)(v3 + 883) = (char)v2;
				*(char *)(v3 + 684) = (char)v2;
				*(char *)(v3 + 724) = (char)v2;
				*(char *)(v3 + 764) = (char)v2;
				*(char *)(v3 + 804) = (char)v2;
				*(char *)(v3 + 844) = (char)v2;
				*(char *)(v3 + 884) = (char)v2;
				*(char *)(v3 + 685) = (char)v2;
				*(char *)(v3 + 725) = (char)v2;
				*(char *)(v3 + 765) = (char)v2;
				*(char *)(v3 + 805) = (char)v2;
				*(char *)(v3 + 845) = (char)v2;
				*(char *)(v3 + 885) = (char)v2;
				*(char *)(v3 + 686) = (char)v2;
				*(char *)(v3 + 726) = (char)v2;
				*(char *)(v3 + 766) = (char)v2;
				*(char *)(v3 + 806) = (char)v2;
				*(char *)(v3 + 846) = (char)v2;
				*(char *)(v3 + 886) = (char)v2;
				*(char *)(v3 + 687) = (char)v2;
				*(char *)(v3 + 727) = (char)v2;
				*(char *)(v3 + 767) = (char)v2;
				*(char *)(v3 + 807) = (char)v2;
				*(char *)(v3 + 847) = (char)v2;
				*(char *)(v3 + 887) = (char)v2;
				v16 = v3 + 8;
				v3 = v16;
				v17--;
				// continue -> 0x39da8
			}
			int32_t v18 = result % 8; // 0x39e70
			result = v18;
			if (v18 != 0) {
				// 0x39e78
				*(char *)(v16 + 680) = (char)v2;
				*(char *)(v3 + 720) = (char)v2;
				*(char *)(v3 + 760) = (char)v2;
				*(char *)(v3 + 800) = (char)v2;
				*(char *)(v3 + 840) = (char)v2;
				*(char *)(v3 + 880) = (char)v2;
				v14 = v3 + 1;
				v3 = v14;
				v15 = v18 - 1;
				// branch -> 0x39e7c
				while (v15 != 0) {
					// 0x39e7c
					*(char *)(v14 + 680) = (char)v2;
					*(char *)(v3 + 720) = (char)v2;
					*(char *)(v3 + 760) = (char)v2;
					*(char *)(v3 + 800) = (char)v2;
					*(char *)(v3 + 840) = (char)v2;
					*(char *)(v3 + 880) = (char)v2;
					v14 = v3 + 1;
					v3 = v14;
					v15--;
					// continue -> 0x39e7c
				}
				// 0x39e9c
				v9 = g23;
				v10 = v9;
				if (*(int32_t *)(v9 - 0x4f2c) != 0) {
					// 0x39ea8
					result = function_399e0(15, 1, 10, 10, 0);
					v10 = g23;
					// branch -> 0x39ec0
				}
				// 0x39ec0
				v11 = v10;
				if (*(int32_t *)(v10 - 0x4f30) != 0) {
					// 0x39ecc
					result = function_399e0(15, 15, 10, 10, 0);
					v11 = g23;
					// branch -> 0x39ee4
				}
				// 0x39ee4
				if (*(int32_t *)(v11 - 0x4f34) != 0) {
					// 0x39ef0
					result = function_399e0(15, 29, 10, 10, 0);
					v12 = g23;
					// branch -> 0x39f08
				} else {
					v12 = v11;
				}
				// 0x39f08
				v1 = 0;
				*(int32_t *)(v12 - 0x4f28) = 0;
				*(int32_t *)(g23 - 0x4f24) = v1;
				*(int32_t *)(g23 - 0x4f20) = v1;
				// branch -> 0x3a174
				// 0x3a174
				return result;
			}
			// 0x39e9c
			v9 = g23;
			v10 = v9;
			if (*(int32_t *)(v9 - 0x4f2c) != 0) {
				// 0x39ea8
				result = function_399e0(15, 1, 10, 10, 0);
				v10 = g23;
				// branch -> 0x39ec0
			}
			// 0x39ec0
			v11 = v10;
			if (*(int32_t *)(v10 - 0x4f30) != 0) {
				// 0x39ecc
				result = function_399e0(15, 15, 10, 10, 0);
				v11 = g23;
				// branch -> 0x39ee4
			}
			// 0x39ee4
			if (*(int32_t *)(v11 - 0x4f34) != 0) {
				// 0x39ef0
				result = function_399e0(15, 29, 10, 10, 0);
				v12 = g23;
				// branch -> 0x39f08
			} else {
				v12 = v11;
			}
			// 0x39f08
			v1 = 0;
			*(int32_t *)(v12 - 0x4f28) = 0;
			*(int32_t *)(g23 - 0x4f24) = v1;
			*(int32_t *)(g23 - 0x4f20) = v1;
			// branch -> 0x3a174
			// 0x3a174
			return result;
		}
		// 0x39e9c
		v9 = g23;
		v10 = v9;
		if (*(int32_t *)(v9 - 0x4f2c) != 0) {
			// 0x39ea8
			result = function_399e0(15, 1, 10, 10, 0);
			v10 = g23;
			// branch -> 0x39ec0
		}
		// 0x39ec0
		v11 = v10;
		if (*(int32_t *)(v10 - 0x4f30) != 0) {
			// 0x39ecc
			result = function_399e0(15, 15, 10, 10, 0);
			v11 = g23;
			// branch -> 0x39ee4
		}
		// 0x39ee4
		if (*(int32_t *)(v11 - 0x4f34) != 0) {
			// 0x39ef0
			result = function_399e0(15, 29, 10, 10, 0);
			v12 = g23;
			// branch -> 0x39f08
		} else {
			v12 = v11;
		}
		// 0x39f08
		v1 = 0;
		*(int32_t *)(v12 - 0x4f28) = 0;
		*(int32_t *)(g23 - 0x4f24) = v1;
		*(int32_t *)(g23 - 0x4f20) = v1;
		// branch -> 0x3a174
	} else {
		// 0x39f1c
		g35 = 1;
		g33 = 39;
		g37 = 2;
		*(int32_t *)(g23 - 0x4f20) = random(0);
		g37 = 2;
		*(int32_t *)(g23 - 0x4f24) = random(0);
		g37 = 2;
		*(int32_t *)(g23 - 0x4f28) = random(0);
		int32_t v19 = g23; // 0x39f70
		if (*(int32_t *)(g23 - 0x4f28) + *(int32_t *)(g23 - 0x4f20) <= 1) {
			// 0x39f68
			*(int32_t *)(g23 - 0x4f24) = 1;
			v19 = g23;
			// branch -> 0x39f70
		}
		// 0x39f70
		if (*(int32_t *)(v19 - 0x4f20) == 0) {
			// 0x39f94
			g35 = 18;
			// branch -> 0x39f98
		} else {
			// 0x39f7c
			function_39860(1, 15, 10, 10);
			v19 = g23;
			// branch -> 0x39f98
		}
		int32_t v20 = v19; // 0x39fb8
		if (*(int32_t *)(v19 - 0x4f24) != 0) {
			// 0x39fa4
			function_39860(15, 15, 10, 10);
			v20 = g23;
			// branch -> 0x39fb8
		}
		// 0x39fb8
		int32_t v21; // 0x39fec
		if (*(int32_t *)(v20 - 0x4f28) == 0) {
			// 0x39fdc
			v21 = 22;
			// branch -> 0x39fe0
		} else {
			// 0x39fc4
			function_39860(29, 15, 10, 10);
			v21 = g33;
			// branch -> 0x39fe0
		}
		int32_t v22 = g35; // 0x39fe0
		v3 = g36 + 40 * v22;
		int32_t v23 = v21 - v22; // 0x39fec
		result = v23;
		v2 = 1;
		int32_t v24; // 0x3a0f8
		int32_t v25; // 0x3a11c
		int32_t v26; // 0x3a140
		int32_t v27; // 0x3a168
		if (v21 > v22) {
			int32_t v28 = __asm_rlwinm_(v23, 29, 3, 31); // 0x39ff8
			int32_t v29;                                 // 0x3a0f0
			int32_t v30;                                 // 0x3a0f4
			if (v28 == 0) {
				// 0x39ff8
				// branch -> 0x3a0d4
				// 0x3a0d4
				*(char *)(v3 + 17) = (char)v2;
				*(char *)(v3 + 18) = (char)v2;
				*(char *)(v3 + 19) = (char)v2;
				*(char *)(v3 + 20) = (char)v2;
				*(char *)(v3 + 21) = (char)v2;
				*(char *)(v3 + 22) = (char)v2;
				v29 = v3 + 40;
				v3 = v29;
				v30 = result - 1;
				// branch -> 0x3a0d8
				while (v30 != 0) {
					// 0x3a0d8
					*(char *)(v29 + 17) = (char)v2;
					*(char *)(v3 + 18) = (char)v2;
					*(char *)(v3 + 19) = (char)v2;
					*(char *)(v3 + 20) = (char)v2;
					*(char *)(v3 + 21) = (char)v2;
					*(char *)(v3 + 22) = (char)v2;
					v29 = v3 + 40;
					v3 = v29;
					v30--;
					// continue -> 0x3a0d8
				}
				// 0x3a0f8
				v24 = g23;
				v25 = v24;
				if (*(int32_t *)(v24 - 0x4f20) != 0) {
					// 0x3a104
					result = function_399e0(1, 15, 10, 10, 1);
					v25 = g23;
					// branch -> 0x3a11c
				}
				// 0x3a11c
				v26 = v25;
				if (*(int32_t *)(v25 - 0x4f24) != 0) {
					// 0x3a128
					result = function_399e0(15, 15, 10, 10, 1);
					v26 = g23;
					// branch -> 0x3a140
				}
				// 0x3a140
				if (*(int32_t *)(v26 - 0x4f28) != 0) {
					// 0x3a14c
					result = function_399e0(29, 15, 10, 10, 1);
					v27 = g23;
					// branch -> 0x3a164
				} else {
					v27 = v26;
				}
				// 0x3a164
				v1 = 0;
				*(int32_t *)(v27 - 0x4f34) = 0;
				*(int32_t *)(g23 - 0x4f30) = v1;
				*(int32_t *)(g23 - 0x4f2c) = v1;
				// branch -> 0x3a174
				// 0x3a174
				return result;
			}
			// 0x3a004
			*(char *)(v3 + 17) = (char)v2;
			*(char *)(v3 + 18) = (char)v2;
			*(char *)(v3 + 19) = (char)v2;
			*(char *)(v3 + 20) = (char)v2;
			*(char *)(v3 + 21) = (char)v2;
			*(char *)(v3 + 22) = (char)v2;
			*(char *)(v3 + 57) = (char)v2;
			*(char *)(v3 + 58) = (char)v2;
			*(char *)(v3 + 59) = (char)v2;
			*(char *)(v3 + 60) = (char)v2;
			*(char *)(v3 + 61) = (char)v2;
			*(char *)(v3 + 62) = (char)v2;
			*(char *)(v3 + 97) = (char)v2;
			*(char *)(v3 + 98) = (char)v2;
			*(char *)(v3 + 99) = (char)v2;
			*(char *)(v3 + 100) = (char)v2;
			*(char *)(v3 + 101) = (char)v2;
			*(char *)(v3 + 102) = (char)v2;
			*(char *)(v3 + 137) = (char)v2;
			*(char *)(v3 + 138) = (char)v2;
			*(char *)(v3 + 139) = (char)v2;
			*(char *)(v3 + 140) = (char)v2;
			*(char *)(v3 + 141) = (char)v2;
			*(char *)(v3 + 142) = (char)v2;
			*(char *)(v3 + 177) = (char)v2;
			*(char *)(v3 + 178) = (char)v2;
			*(char *)(v3 + 179) = (char)v2;
			*(char *)(v3 + 180) = (char)v2;
			*(char *)(v3 + 181) = (char)v2;
			*(char *)(v3 + 182) = (char)v2;
			*(char *)(v3 + 217) = (char)v2;
			*(char *)(v3 + 218) = (char)v2;
			*(char *)(v3 + 219) = (char)v2;
			*(char *)(v3 + 220) = (char)v2;
			*(char *)(v3 + 221) = (char)v2;
			*(char *)(v3 + 222) = (char)v2;
			*(char *)(v3 + 257) = (char)v2;
			*(char *)(v3 + 258) = (char)v2;
			*(char *)(v3 + 259) = (char)v2;
			*(char *)(v3 + 260) = (char)v2;
			*(char *)(v3 + 261) = (char)v2;
			*(char *)(v3 + 262) = (char)v2;
			*(char *)(v3 + 297) = (char)v2;
			*(char *)(v3 + 298) = (char)v2;
			*(char *)(v3 + 299) = (char)v2;
			*(char *)(v3 + 300) = (char)v2;
			*(char *)(v3 + 301) = (char)v2;
			*(char *)(v3 + 302) = (char)v2;
			int32_t v31 = v3 + 320; // 0x3a0c4
			v3 = v31;
			int32_t v32 = v28 - 1; // 0x3a0c8
			// branch -> 0x3a004
			while (v32 != 0) {
				// 0x3a004
				*(char *)(v31 + 17) = (char)v2;
				*(char *)(v3 + 18) = (char)v2;
				*(char *)(v3 + 19) = (char)v2;
				*(char *)(v3 + 20) = (char)v2;
				*(char *)(v3 + 21) = (char)v2;
				*(char *)(v3 + 22) = (char)v2;
				*(char *)(v3 + 57) = (char)v2;
				*(char *)(v3 + 58) = (char)v2;
				*(char *)(v3 + 59) = (char)v2;
				*(char *)(v3 + 60) = (char)v2;
				*(char *)(v3 + 61) = (char)v2;
				*(char *)(v3 + 62) = (char)v2;
				*(char *)(v3 + 97) = (char)v2;
				*(char *)(v3 + 98) = (char)v2;
				*(char *)(v3 + 99) = (char)v2;
				*(char *)(v3 + 100) = (char)v2;
				*(char *)(v3 + 101) = (char)v2;
				*(char *)(v3 + 102) = (char)v2;
				*(char *)(v3 + 137) = (char)v2;
				*(char *)(v3 + 138) = (char)v2;
				*(char *)(v3 + 139) = (char)v2;
				*(char *)(v3 + 140) = (char)v2;
				*(char *)(v3 + 141) = (char)v2;
				*(char *)(v3 + 142) = (char)v2;
				*(char *)(v3 + 177) = (char)v2;
				*(char *)(v3 + 178) = (char)v2;
				*(char *)(v3 + 179) = (char)v2;
				*(char *)(v3 + 180) = (char)v2;
				*(char *)(v3 + 181) = (char)v2;
				*(char *)(v3 + 182) = (char)v2;
				*(char *)(v3 + 217) = (char)v2;
				*(char *)(v3 + 218) = (char)v2;
				*(char *)(v3 + 219) = (char)v2;
				*(char *)(v3 + 220) = (char)v2;
				*(char *)(v3 + 221) = (char)v2;
				*(char *)(v3 + 222) = (char)v2;
				*(char *)(v3 + 257) = (char)v2;
				*(char *)(v3 + 258) = (char)v2;
				*(char *)(v3 + 259) = (char)v2;
				*(char *)(v3 + 260) = (char)v2;
				*(char *)(v3 + 261) = (char)v2;
				*(char *)(v3 + 262) = (char)v2;
				*(char *)(v3 + 297) = (char)v2;
				*(char *)(v3 + 298) = (char)v2;
				*(char *)(v3 + 299) = (char)v2;
				*(char *)(v3 + 300) = (char)v2;
				*(char *)(v3 + 301) = (char)v2;
				*(char *)(v3 + 302) = (char)v2;
				v31 = v3 + 320;
				v3 = v31;
				v32--;
				// continue -> 0x3a004
			}
			int32_t v33 = result % 8; // 0x3a0cc
			result = v33;
			if (v33 != 0) {
				// 0x3a0d4
				*(char *)(v31 + 17) = (char)v2;
				*(char *)(v3 + 18) = (char)v2;
				*(char *)(v3 + 19) = (char)v2;
				*(char *)(v3 + 20) = (char)v2;
				*(char *)(v3 + 21) = (char)v2;
				*(char *)(v3 + 22) = (char)v2;
				v29 = v3 + 40;
				v3 = v29;
				v30 = v33 - 1;
				// branch -> 0x3a0d8
				while (v30 != 0) {
					// 0x3a0d8
					*(char *)(v29 + 17) = (char)v2;
					*(char *)(v3 + 18) = (char)v2;
					*(char *)(v3 + 19) = (char)v2;
					*(char *)(v3 + 20) = (char)v2;
					*(char *)(v3 + 21) = (char)v2;
					*(char *)(v3 + 22) = (char)v2;
					v29 = v3 + 40;
					v3 = v29;
					v30--;
					// continue -> 0x3a0d8
				}
				// 0x3a0f8
				v24 = g23;
				v25 = v24;
				if (*(int32_t *)(v24 - 0x4f20) != 0) {
					// 0x3a104
					result = function_399e0(1, 15, 10, 10, 1);
					v25 = g23;
					// branch -> 0x3a11c
				}
				// 0x3a11c
				v26 = v25;
				if (*(int32_t *)(v25 - 0x4f24) != 0) {
					// 0x3a128
					result = function_399e0(15, 15, 10, 10, 1);
					v26 = g23;
					// branch -> 0x3a140
				}
				// 0x3a140
				if (*(int32_t *)(v26 - 0x4f28) != 0) {
					// 0x3a14c
					result = function_399e0(29, 15, 10, 10, 1);
					v27 = g23;
					// branch -> 0x3a164
				} else {
					v27 = v26;
				}
				// 0x3a164
				v1 = 0;
				*(int32_t *)(v27 - 0x4f34) = 0;
				*(int32_t *)(g23 - 0x4f30) = v1;
				*(int32_t *)(g23 - 0x4f2c) = v1;
				// branch -> 0x3a174
				// 0x3a174
				return result;
			}
			// 0x3a0f8
			v24 = g23;
			v25 = v24;
			if (*(int32_t *)(v24 - 0x4f20) != 0) {
				// 0x3a104
				result = function_399e0(1, 15, 10, 10, 1);
				v25 = g23;
				// branch -> 0x3a11c
			}
			// 0x3a11c
			v26 = v25;
			if (*(int32_t *)(v25 - 0x4f24) != 0) {
				// 0x3a128
				result = function_399e0(15, 15, 10, 10, 1);
				v26 = g23;
				// branch -> 0x3a140
			}
			// 0x3a140
			if (*(int32_t *)(v26 - 0x4f28) != 0) {
				// 0x3a14c
				result = function_399e0(29, 15, 10, 10, 1);
				v27 = g23;
				// branch -> 0x3a164
			} else {
				v27 = v26;
			}
			// 0x3a164
			v1 = 0;
			*(int32_t *)(v27 - 0x4f34) = 0;
			*(int32_t *)(g23 - 0x4f30) = v1;
			*(int32_t *)(g23 - 0x4f2c) = v1;
			// branch -> 0x3a174
			// 0x3a174
			return result;
		}
		// 0x3a0f8
		v24 = g23;
		v25 = v24;
		if (*(int32_t *)(v24 - 0x4f20) != 0) {
			// 0x3a104
			result = function_399e0(1, 15, 10, 10, 1);
			v25 = g23;
			// branch -> 0x3a11c
		}
		// 0x3a11c
		v26 = v25;
		if (*(int32_t *)(v25 - 0x4f24) != 0) {
			// 0x3a128
			result = function_399e0(15, 15, 10, 10, 1);
			v26 = g23;
			// branch -> 0x3a140
		}
		// 0x3a140
		if (*(int32_t *)(v26 - 0x4f28) != 0) {
			// 0x3a14c
			result = function_399e0(29, 15, 10, 10, 1);
			v27 = g23;
			// branch -> 0x3a164
		} else {
			v27 = v26;
		}
		// 0x3a164
		v1 = 0;
		*(int32_t *)(v27 - 0x4f34) = 0;
		*(int32_t *)(g23 - 0x4f30) = v1;
		*(int32_t *)(g23 - 0x4f2c) = v1;
		// branch -> 0x3a174
	}
	// 0x3a174
	return result;
}

// Address range: 0x3a190 - 0x3a28c
int32_t function_3a190(int32_t a1)
{
	int32_t v1 = 0;                          // 0x3a278
	int32_t v2 = 0;                          // 0x3a1b814
	int32_t v3 = *(int32_t *)(g23 - 0x77cc); // 0x3a27c
	// branch -> 0x3a19c
	int32_t result; // 0x3a288
	while (true) {
		int32_t v4 = 4;  // 0x3a274
		int32_t v5 = v2; // 0x3a1b8
		int32_t v6 = v3; // 0x3a1bc
		// branch -> 0x3a1ac
		while (true) {
			int32_t v7 = v5; // 0x3a1c8
			if (*(char *)v6 == 1) {
				// 0x3a1b8
				v7 = v5 + 1;
				// branch -> 0x3a1bc
			}
			int32_t v8 = v7; // 0x3a1dc
			if (*(char *)(v6 + 40) == 1) {
				// 0x3a1c8
				v8 = v7 + 1;
				// branch -> 0x3a1cc
			}
			int32_t v9 = v8; // 0x3a1f0
			if (*(char *)(v6 + 80) == 1) {
				// 0x3a1dc
				v9 = v8 + 1;
				// branch -> 0x3a1e0
			}
			int32_t v10 = v9; // 0x3a204
			if (*(char *)(v6 + 120) == 1) {
				// 0x3a1f0
				v10 = v9 + 1;
				// branch -> 0x3a1f4
			}
			int32_t v11 = v10; // 0x3a218
			if (*(char *)(v6 + 160) == 1) {
				// 0x3a204
				v11 = v10 + 1;
				// branch -> 0x3a208
			}
			int32_t v12 = v11; // 0x3a22c
			if (*(char *)(v6 + 200) == 1) {
				// 0x3a218
				v12 = v11 + 1;
				// branch -> 0x3a21c
			}
			int32_t v13 = v12; // 0x3a240
			if (*(char *)(v6 + 240) == 1) {
				// 0x3a22c
				v13 = v12 + 1;
				// branch -> 0x3a230
			}
			int32_t v14 = v13; // 0x3a254
			if (*(char *)(v6 + 280) == 1) {
				// 0x3a240
				v14 = v13 + 1;
				// branch -> 0x3a244
			}
			int32_t v15 = v14; // 0x3a268
			if (*(char *)(v6 + 320) == 1) {
				// 0x3a254
				v15 = v14 + 1;
				// branch -> 0x3a258
			}
			// 0x3a258
			result = v15;
			if (*(char *)(v6 + 360) == 1) {
				// 0x3a268
				result = v15 + 1;
				// branch -> 0x3a26c
			}
			int32_t v16 = v6 + 400; // 0x3a26c
			int32_t v17 = v4 - 1;   // 0x3a274
			if (v17 == 0) {
				// break -> 0x3a278
				break;
			}
			v4 = v17;
			v5 = result;
			v6 = v16;
			// continue -> 0x3a1ac
		}
		int32_t v18 = v1 + 1; // 0x3a278
		if (v18 >= 40) {
			// break -> 0x3a288
			break;
		}
		v1 = v18;
		v2 = result;
		v3++;
		// continue -> 0x3a19c
	}
	// 0x3a288
	return result;
}

// Address range: 0x3a28c - 0x3a3a8
int32_t function_3a28c(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x7544); // r3
	int32_t v1 = 0;                              // r9
	int32_t v2 = *(int32_t *)(g23 - 0x77cc);     // 0x3a294
	int32_t v3 = 0;                              // r7
	int32_t v4 = 0;                              // 0x3a2ac4
	                                             // branch -> 0x3a29c
lab_0x3a29c:
	while (true) {
		int32_t v5 = v2; // r5
		int32_t v6 = 8;  // ctr
		int32_t v7 = v2; // 0x3a2b0
		int32_t v8 = v4; // 0x3a2ac
		int32_t v9 = 0;  // 0x3a2b8
		// branch -> 0x3a2ac
		while (true) {
			int32_t v10 = result + v9 + v8; // 0x3a2b4
			int32_t v11 = v10;              // r8
			*(char *)v10 = *(char *)v7;
			*(char *)(v11 + 1) = *(char *)v5;
			*(char *)(v11 + 80) = *(char *)v5;
			*(char *)(v11 + 81) = *(char *)v5;
			int32_t v12 = v9 + 160;          // 0x3a2d8
			int32_t v13 = v3 + v12 + result; // 0x3a2dc
			v11 = v13;
			*(char *)v13 = *(char *)(v5 + 40);
			*(char *)(v11 + 1) = *(char *)(v5 + 40);
			*(char *)(v11 + 80) = *(char *)(v5 + 40);
			*(char *)(v11 + 81) = *(char *)(v5 + 40);
			int32_t v14 = v12 + 160;         // 0x3a304
			int32_t v15 = v3 + v14 + result; // 0x3a308
			v11 = v15;
			*(char *)v15 = *(char *)(v5 + 80);
			*(char *)(v11 + 1) = *(char *)(v5 + 80);
			*(char *)(v11 + 80) = *(char *)(v5 + 80);
			*(char *)(v11 + 81) = *(char *)(v5 + 80);
			int32_t v16 = v14 + 160;         // 0x3a330
			int32_t v17 = v3 + v16 + result; // 0x3a334
			v11 = v17;
			*(char *)v17 = *(char *)(v5 + 120);
			*(char *)(v11 + 1) = *(char *)(v5 + 120);
			*(char *)(v11 + 80) = *(char *)(v5 + 120);
			*(char *)(v11 + 81) = *(char *)(v5 + 120);
			int32_t v18 = v16 + 160;         // 0x3a35c
			int32_t v19 = v3 + v18 + result; // 0x3a360
			v11 = v19;
			int32_t v20 = v18 + 160; // r4
			*(char *)v19 = *(char *)(v5 + 160);
			*(char *)(v11 + 1) = *(char *)(v5 + 160);
			*(char *)(v11 + 80) = *(char *)(v5 + 160);
			int32_t v21 = v5; // 0x3a380
			v5 = v21 + 200;
			*(char *)(v11 + 81) = *(char *)(v21 + 160);
			int32_t v22 = v6 - 1; // 0x3a38c
			v6 = v22;
			if (v22 == 0) {
				int32_t v23 = v1 + 1; // 0x3a390
				v1 = v23;
				int32_t v24 = v3 + 2; // 0x3a394
				v3 = v24;
				if (v23 >= 40) {
					// break (via goto) -> 0x3a3a4
					goto lab_0x3a3a4;
				}
				v4 = v24;
				v2++;
				// continue (via goto) -> 0x3a29c
				goto lab_0x3a29c;
			} else {
				// 0x3a2ac
				v7 = v5;
				v8 = v3;
				v9 = v20;
				// branch -> 0x3a2ac
				continue;
			}
		}
	lab_0x3a3a4:
		// 0x3a3a4
		return result;
	}
}

// Address range: 0x3a3a8 - 0x3a5e4
int32_t function_3a3a8(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x3a3a8
	int32_t v2 = g23 - 0x1e3d;               // r6
	int32_t v3 = 0;                          // r5
	int32_t v4 = 22;                         // r0
	*(char *)v1 = 22;
	*(char *)(v1 + 40) = (char)v4;
	*(char *)(v1 + 80) = (char)v4;
	*(char *)(v1 + 120) = (char)v4;
	*(char *)(v1 + 160) = (char)v4;
	*(char *)(v1 + 200) = (char)v4;
	*(char *)(v1 + 240) = (char)v4;
	*(char *)(v1 + 280) = (char)v4;
	*(char *)(v1 + 320) = (char)v4;
	*(char *)(v1 + 360) = (char)v4;
	*(char *)(v1 + 400) = (char)v4;
	*(char *)(v1 + 440) = (char)v4;
	*(char *)(v1 + 480) = (char)v4;
	*(char *)(v1 + 520) = (char)v4;
	*(char *)(v1 + 560) = (char)v4;
	*(char *)(v1 + 600) = (char)v4;
	*(char *)(v1 + 640) = (char)v4;
	*(char *)(v1 + 680) = (char)v4;
	*(char *)(v1 + 720) = (char)v4;
	*(char *)(v1 + 760) = (char)v4;
	*(char *)(v1 + 800) = (char)v4;
	*(char *)(v1 + 840) = (char)v4;
	*(char *)(v1 + 880) = (char)v4;
	*(char *)(v1 + 920) = (char)v4;
	*(char *)(v1 + 960) = (char)v4;
	*(char *)(v1 + 1000) = (char)v4;
	*(char *)(v1 + 1040) = (char)v4;
	*(char *)(v1 + 1080) = (char)v4;
	*(char *)(v1 + 1120) = (char)v4;
	*(char *)(v1 + 1160) = (char)v4;
	*(char *)(v1 + 1200) = (char)v4;
	*(char *)(v1 + 1240) = (char)v4;
	*(char *)(v1 + 1280) = (char)v4;
	*(char *)(v1 + 1320) = (char)v4;
	*(char *)(v1 + 1360) = (char)v4;
	*(char *)(v1 + 1400) = (char)v4;
	*(char *)(v1 + 1440) = (char)v4;
	*(char *)(v1 + 1480) = (char)v4;
	*(char *)(v1 + 1520) = (char)v4;
	*(char *)(v1 + 1560) = (char)v4;
	int32_t v5 = v1 + 1; // 0x3a464
	v1 = v5;
	*(char *)v5 = (char)v4;
	v3++;
	*(char *)(v1 + 40) = (char)v4;
	*(char *)(v1 + 80) = (char)v4;
	*(char *)(v1 + 120) = (char)v4;
	*(char *)(v1 + 160) = (char)v4;
	*(char *)(v1 + 200) = (char)v4;
	*(char *)(v1 + 240) = (char)v4;
	*(char *)(v1 + 280) = (char)v4;
	*(char *)(v1 + 320) = (char)v4;
	*(char *)(v1 + 360) = (char)v4;
	*(char *)(v1 + 400) = (char)v4;
	*(char *)(v1 + 440) = (char)v4;
	*(char *)(v1 + 480) = (char)v4;
	*(char *)(v1 + 520) = (char)v4;
	*(char *)(v1 + 560) = (char)v4;
	*(char *)(v1 + 600) = (char)v4;
	*(char *)(v1 + 640) = (char)v4;
	*(char *)(v1 + 680) = (char)v4;
	*(char *)(v1 + 720) = (char)v4;
	*(char *)(v1 + 760) = (char)v4;
	*(char *)(v1 + 800) = (char)v4;
	*(char *)(v1 + 840) = (char)v4;
	*(char *)(v1 + 880) = (char)v4;
	*(char *)(v1 + 920) = (char)v4;
	*(char *)(v1 + 960) = (char)v4;
	*(char *)(v1 + 1000) = (char)v4;
	*(char *)(v1 + 1040) = (char)v4;
	*(char *)(v1 + 1080) = (char)v4;
	*(char *)(v1 + 1120) = (char)v4;
	*(char *)(v1 + 1160) = (char)v4;
	*(char *)(v1 + 1200) = (char)v4;
	*(char *)(v1 + 1240) = (char)v4;
	*(char *)(v1 + 1280) = (char)v4;
	*(char *)(v1 + 1320) = (char)v4;
	*(char *)(v1 + 1360) = (char)v4;
	*(char *)(v1 + 1400) = (char)v4;
	*(char *)(v1 + 1440) = (char)v4;
	*(char *)(v1 + 1480) = (char)v4;
	*(char *)(v1 + 1520) = (char)v4;
	*(char *)(v1 + 1560) = (char)v4;
	int32_t v6 = v1 + 1; // 0x3a50c
	v1 = v6;
	int32_t v7 = 19; // 0x3a510
	// branch -> 0x3a3c0
	while (v7 != 0) {
		// 0x3a3c0
		v1 = v6;
		v4 = 22;
		*(char *)v1 = 22;
		*(char *)(v1 + 40) = (char)v4;
		*(char *)(v1 + 80) = (char)v4;
		*(char *)(v1 + 120) = (char)v4;
		*(char *)(v1 + 160) = (char)v4;
		*(char *)(v1 + 200) = (char)v4;
		*(char *)(v1 + 240) = (char)v4;
		*(char *)(v1 + 280) = (char)v4;
		*(char *)(v1 + 320) = (char)v4;
		*(char *)(v1 + 360) = (char)v4;
		*(char *)(v1 + 400) = (char)v4;
		*(char *)(v1 + 440) = (char)v4;
		*(char *)(v1 + 480) = (char)v4;
		*(char *)(v1 + 520) = (char)v4;
		*(char *)(v1 + 560) = (char)v4;
		*(char *)(v1 + 600) = (char)v4;
		*(char *)(v1 + 640) = (char)v4;
		*(char *)(v1 + 680) = (char)v4;
		*(char *)(v1 + 720) = (char)v4;
		*(char *)(v1 + 760) = (char)v4;
		*(char *)(v1 + 800) = (char)v4;
		*(char *)(v1 + 840) = (char)v4;
		*(char *)(v1 + 880) = (char)v4;
		*(char *)(v1 + 920) = (char)v4;
		*(char *)(v1 + 960) = (char)v4;
		*(char *)(v1 + 1000) = (char)v4;
		*(char *)(v1 + 1040) = (char)v4;
		*(char *)(v1 + 1080) = (char)v4;
		*(char *)(v1 + 1120) = (char)v4;
		*(char *)(v1 + 1160) = (char)v4;
		*(char *)(v1 + 1200) = (char)v4;
		*(char *)(v1 + 1240) = (char)v4;
		*(char *)(v1 + 1280) = (char)v4;
		*(char *)(v1 + 1320) = (char)v4;
		*(char *)(v1 + 1360) = (char)v4;
		*(char *)(v1 + 1400) = (char)v4;
		*(char *)(v1 + 1440) = (char)v4;
		*(char *)(v1 + 1480) = (char)v4;
		*(char *)(v1 + 1520) = (char)v4;
		*(char *)(v1 + 1560) = (char)v4;
		v5 = v1 + 1;
		v1 = v5;
		*(char *)v5 = (char)v4;
		v3++;
		*(char *)(v1 + 40) = (char)v4;
		*(char *)(v1 + 80) = (char)v4;
		*(char *)(v1 + 120) = (char)v4;
		*(char *)(v1 + 160) = (char)v4;
		*(char *)(v1 + 200) = (char)v4;
		*(char *)(v1 + 240) = (char)v4;
		*(char *)(v1 + 280) = (char)v4;
		*(char *)(v1 + 320) = (char)v4;
		*(char *)(v1 + 360) = (char)v4;
		*(char *)(v1 + 400) = (char)v4;
		*(char *)(v1 + 440) = (char)v4;
		*(char *)(v1 + 480) = (char)v4;
		*(char *)(v1 + 520) = (char)v4;
		*(char *)(v1 + 560) = (char)v4;
		*(char *)(v1 + 600) = (char)v4;
		*(char *)(v1 + 640) = (char)v4;
		*(char *)(v1 + 680) = (char)v4;
		*(char *)(v1 + 720) = (char)v4;
		*(char *)(v1 + 760) = (char)v4;
		*(char *)(v1 + 800) = (char)v4;
		*(char *)(v1 + 840) = (char)v4;
		*(char *)(v1 + 880) = (char)v4;
		*(char *)(v1 + 920) = (char)v4;
		*(char *)(v1 + 960) = (char)v4;
		*(char *)(v1 + 1000) = (char)v4;
		*(char *)(v1 + 1040) = (char)v4;
		*(char *)(v1 + 1080) = (char)v4;
		*(char *)(v1 + 1120) = (char)v4;
		*(char *)(v1 + 1160) = (char)v4;
		*(char *)(v1 + 1200) = (char)v4;
		*(char *)(v1 + 1240) = (char)v4;
		*(char *)(v1 + 1280) = (char)v4;
		*(char *)(v1 + 1320) = (char)v4;
		*(char *)(v1 + 1360) = (char)v4;
		*(char *)(v1 + 1400) = (char)v4;
		*(char *)(v1 + 1440) = (char)v4;
		*(char *)(v1 + 1480) = (char)v4;
		*(char *)(v1 + 1520) = (char)v4;
		*(char *)(v1 + 1560) = (char)v4;
		v6 = v1 + 1;
		v1 = v6;
		v7--;
		// continue -> 0x3a3c0
	}
	int32_t v8 = 1;                              // r11
	int32_t v9 = *(int32_t *)(g23 - 0x7544) + 1; // 0x3a51c
	int32_t v10 = v1;                            // 0x3a52c
	                                             // branch -> 0x3a520
lab_0x3a520:
	while (true) {
		int32_t v11 = v9 + 80; // 0x3a524
		int32_t v12 = 13;      // ctr
		int32_t v13 = v10;     // r8
		int32_t v14 = v10;     // 0x3a55c
		// branch -> 0x3a530
		int32_t result; // r3
		while (true) {
			int32_t v15 = (int32_t) * (char *)(v11 + 81);              // 0x3a530
			int32_t v16 = (int32_t) * (char *)(v11 + 80);              // 0x3a538
			int32_t v17 = 4 * (int32_t) * (char *)(v11 + 1) + 8 * v15; // 0x3a548
			int32_t v18 = (int32_t) * (char *)v11 + v17 + 2 * v16;     // 0x3a554
			*(char *)v14 = *(char *)(v2 + v18);
			int32_t v19 = v11;                                             // 0x3a560
			int32_t v20 = (int32_t) * (char *)(v19 + 241);                 // 0x3a560
			int32_t v21 = (int32_t) * (char *)(v19 + 240);                 // 0x3a564
			int32_t v22 = 4 * (int32_t) * (char *)(v19 + 161) + 8 * v20;   // 0x3a57c
			int32_t v23 = (int32_t) * (char *)(v19 + 160) + v22 + 2 * v21; // 0x3a584
			unsigned char v24 = *(char *)(v2 + v23);                       // 0x3a588
			*(char *)(v13 + 40) = v24;
			int32_t v25 = v11;                                           // 0x3a590
			int32_t v26 = (int32_t) * (char *)(v25 + 401);               // 0x3a590
			int32_t v27 = (int32_t) * (char *)(v25 + 400);               // 0x3a594
			int32_t v28 = 4 * (int32_t) * (char *)(v25 + 321) + 8 * v26; // 0x3a5ac
			v11 = v25 + 480;
			int32_t v29 = (int32_t) * (char *)(v25 + 320) + v28; // 0x3a5b4
			result = v29;
			unsigned char v30 = *(char *)(v2 + v29 + 2 * v27); // 0x3a5bc
			*(char *)(v13 + 80) = v30;
			int32_t v31 = v13 + 120; // 0x3a5c4
			v13 = v31;
			int32_t v32 = v12 - 1; // 0x3a5c8
			v12 = v32;
			if (v32 == 0) {
				int32_t v33 = v8 + 2; // 0x3a5cc
				v8 = v33;
				int32_t v34 = v1 + 1; // 0x3a5d8
				v1 = v34;
				if (v33 >= 78) {
					// break (via goto) -> 0x3a5e0
					goto lab_0x3a5e0;
				}
				v10 = v34;
				v9 += 2;
				// continue (via goto) -> 0x3a520
				goto lab_0x3a520;
			} else {
				// 0x3a530
				v14 = v31;
				// branch -> 0x3a530
				continue;
			}
		}
	lab_0x3a5e0:
		// 0x3a5e0
		return result;
	}
}

// Address range: 0x3a5e4 - 0x3a6a0
int32_t function_3a5e4(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x3a5e4
	int32_t result = 1;                      // 0x3a5fc
	// branch -> 0x3a600
	while (true) {
		int32_t v2 = 40 * (result + a1); // 0x3a604
		int32_t v3 = v2 + v1 + a2;       // 0x3a608
		if (*(char *)v3 == 13) {
			// 0x3a618
			if (*(char *)(v3 - 1) == 13) {
				// 0x3a624
				if (*(char *)(v3 + 1) == 13) {
					// 0x3a630
					if (*(char *)(v2 + *(int32_t *)(g23 - 0x7514) + a2) == 0) {
						// 0x3a5fc
						result++;
						// branch -> 0x3a600
						continue;
					}
				}
			}
		}
		unsigned char v4 = *(char *)(v2 + a2 + v1); // 0x3a640
		int32_t v5 = 0;
		int32_t v6;
		int32_t v7;
		if (v4 >= 3) {
			// 0x3a650
			if (v4 <= 7) {
				// 0x3a658
				v5 = 1;
				// branch -> 0x3a65c
			} else {
				v5 = 0;
			}
			// 0x3a65c
			v7 = v5;
			if (v4 >= 16) {
				// 0x3a664
				if (v4 <= 24) {
					// 0x3a66c
					v7 = 1;
					// branch -> 0x3a670
				} else {
					v7 = v5;
				}
			}
			// 0x3a670
			v6 = v7;
			if (v4 == 22) {
				// 0x3a678
				v6 = 0;
				// branch -> 0x3a67c
			}
			// 0x3a67c
			if (result == 1) {
				// 0x3a688
				// branch -> 0x3a698
				// 0x3a698
				return -1;
			}
			// 0x3a688
			if (v6 != 0) {
				// 0x3a690
				return result;
			}
			// 0x3a698
			return -1;
		}
		// 0x3a65c
		if (v4 < 16) {
			// 0x3a670
			v6 = v5;
			if (v4 == 22) {
				// 0x3a678
				v6 = 0;
				// branch -> 0x3a67c
			}
			// 0x3a67c
			if (result == 1) {
				// 0x3a688
				// branch -> 0x3a698
				// 0x3a698
				return -1;
			}
			// 0x3a688
			if (v6 != 0) {
				// 0x3a690
				return result;
			}
			// 0x3a698
			return -1;
		}
		// 0x3a664
		if (v4 <= 24) {
			// 0x3a66c
			v7 = 1;
			// branch -> 0x3a670
		} else {
			v7 = v5;
		}
		// 0x3a670
		v6 = v7;
		if (v4 == 22) {
			// 0x3a678
			v6 = 0;
			// branch -> 0x3a67c
		}
		// 0x3a67c
		if (result == 1) {
			// 0x3a688
			// branch -> 0x3a698
			// 0x3a698
			return -1;
		}
		// 0x3a688
		if (v6 != 0) {
			// 0x3a690
			return result;
		}
		// 0x3a698
		return -1;
	}
}

// Address range: 0x3a6a0 - 0x3a760
int32_t function_3a6a0(int32_t a1, int32_t a2)
{
	int32_t v1 = 40 * a1 + a2;                    // 0x3a6ac
	int32_t v2 = *(int32_t *)(g23 - 0x77cc) + v1; // 0x3a6b4
	int32_t v3 = v2 + 1;                          // 0x3a6bc
	int32_t result = 1;                           // 0x3a754
	int32_t v4;
	int32_t v5;
	int32_t v6;
	unsigned char v7; // 0x3a708
	if (*(char *)v3 == 13) {
		int32_t v8 = 1;                                   // 0x3a6d4
		int32_t v9 = v1 + 1 + *(int32_t *)(g23 - 0x7514); // 0x3a6d0
		while (true) {
			// 0x3a6e4
			if (*(char *)(v3 - 40) == 13) {
				// 0x3a6f0
				if (*(char *)(v3 + 40) == 13) {
					// 0x3a6fc
					if (*(char *)v9 == 0) {
						int32_t v10 = v3 + 1; // 0x3a6cc
						int32_t v11 = v8 + 1; // 0x3a6d4
						if (*(char *)v10 != 13) {
							result = v11;
							// break -> 0x3a708
							break;
						}
						v8 = v11;
						v9++;
						v3 = v10;
						// continue -> 0x3a6e4
						continue;
					} else {
						result = v8;
					}
				} else {
					result = v8;
				}
			} else {
				result = v8;
			}
		}
		// 0x3a708
		v7 = *(char *)(result + v2);
		v6 = 0;
		if (v7 >= 3) {
			// 0x3a718
			if (v7 <= 7) {
				// 0x3a720
				v6 = 1;
				// branch -> 0x3a724
			} else {
				v6 = 0;
			}
		}
		// 0x3a724
		v5 = v6;
		if (v7 >= 16) {
			// 0x3a72c
			if (v7 <= 24) {
				// 0x3a734
				v5 = 1;
				// branch -> 0x3a738
			} else {
				v5 = v6;
			}
		}
		// 0x3a738
		v4 = v5;
		if (v7 == 22) {
			// 0x3a740
			v4 = 0;
			// branch -> 0x3a744
		}
		// 0x3a744
		if (result == 1) {
			// 0x3a750
			// branch -> 0x3a758
		} else {
			// 0x3a750
			if (v4 != 0) {
				// bb
				return result;
			}
		}
		// 0x3a758
		return -1;
	}
	// 0x3a708
	v7 = *(char *)(result + v2);
	v6 = 0;
	if (v7 >= 3) {
		// 0x3a718
		if (v7 <= 7) {
			// 0x3a720
			v6 = 1;
			// branch -> 0x3a724
		} else {
			v6 = 0;
		}
		// 0x3a724
		v5 = v6;
		if (v7 >= 16) {
			// 0x3a72c
			if (v7 <= 24) {
				// 0x3a734
				v5 = 1;
				// branch -> 0x3a738
			} else {
				v5 = v6;
			}
		}
		// 0x3a738
		v4 = v5;
		if (v7 == 22) {
			// 0x3a740
			v4 = 0;
			// branch -> 0x3a744
		}
		// 0x3a744
		if (result == 1) {
			// 0x3a750
			// branch -> 0x3a758
		} else {
			// 0x3a750
			if (v4 != 0) {
				// bb
				return result;
			}
		}
		// 0x3a758
		return -1;
	}
	// 0x3a724
	if (v7 < 16) {
		// 0x3a738
		v4 = v6;
		if (v7 == 22) {
			// 0x3a740
			v4 = 0;
			// branch -> 0x3a744
		}
		// 0x3a744
		if (result == 1) {
			// 0x3a750
			// branch -> 0x3a758
			// 0x3a758
			return -1;
		}
		// 0x3a750
		if (v4 != 0) {
			// bb
			return result;
		}
		// 0x3a758
		return -1;
	}
	// 0x3a72c
	if (v7 <= 24) {
		// 0x3a734
		v5 = 1;
		// branch -> 0x3a738
	} else {
		v5 = v6;
	}
	// 0x3a738
	v4 = v5;
	if (v7 == 22) {
		// 0x3a740
		v4 = 0;
		// branch -> 0x3a744
	}
	// 0x3a744
	if (result == 1) {
		// 0x3a750
		// branch -> 0x3a758
	} else {
		// 0x3a750
		if (v4 != 0) {
			// bb
			return result;
		}
	}
	// 0x3a758
	return -1;
}

// Address range: 0x3a760 - 0x3a97c
int32_t function_3a760(int32_t a1, int32_t a2, char a3, int32_t a4)
{
	int32_t v1 = g10; // 0x3a764
	g30 = a1;
	g31 = a2;
	g36 = *(int32_t *)(g23 - 0x77cc);
	int32_t v2 = a3; // r25
	g32 = a4;
	g37 = 4;
	int32_t v3 = random(0); // 0x3a78c
	int32_t v4;             // ctr
	int32_t v5;             // r10
	int32_t result;         // r3
	int32_t v6;             // r9
	int32_t v7;             // 0x3a83c
	int32_t v8;             // 0x3a850
	int32_t v9;             // 0x3a898
	int32_t v10;            // 0x3a8a8
	int32_t v11;            // 0x3a8e4
	int32_t v12;            // 0x3a914
	int32_t v13;            // 0x3a878
	int32_t v14;            // 0x3a8dc
	int32_t v15;            // 0x3a8e4
	int32_t v16;
	int32_t v17;     // 0x3a904
	int32_t v18;     // 0x3a90428
	int32_t result2; // 0x3a918
	int32_t v19;     // 0x3a86c
	int32_t v20;     // 0x3a878
	int32_t v21;     // 0x3a910
	int32_t v22;     // 0x3a924
	int32_t v23;     // 0x3a944
	int32_t v24;     // 0x3a960
	char *v25;       // 0x3a950
	if (v3 == 2) {
		int32_t v26 = v2; // 0x3a7bc
		g35 = 12;
		int32_t v27 = v26; // 0x3a7d0
		if (0x1000000 * v26 == 0x2000000) {
			// 0x3a7cc
			v2 = 12;
			v27 = 12;
			// branch -> 0x3a7d0
		}
		// 0x3a7d0
		if (0x1000000 * v27 == 0x4000000) {
			// 0x3a7dc
			v2 = 10;
			// branch -> 0x3a808
		}
		// 0x3a808
		g37 = 6;
		g33 = random(0) == 5 ? 12 : 26;
		if (0x1000000 * g35 == 0xc000000) {
			// 0x3a834
			g33 = 12;
			// branch -> 0x3a838
		}
		// 0x3a838
		v7 = g32;
		*(char *)(g36 + g31 + 40 * g30) = (char)v2;
		if (v7 != 1 && v7 >= 1) {
			// 0x3a850
			v8 = g32;
			v15 = v8;
			v11 = 1;
			if (v8 >= 10) {
				// 0x3a860
				v19 = g31 + g36;
				v5 = v19;
				v4 = (v8 - 2) / 8;
				if (v8 >= 10) {
					v13 = 1;
					while (true) {
						// 0x3a878
						v20 = g30 + v13;
						v6 = v20;
						*(char *)(40 * v20 + v19) = (char)g35;
						v9 = v6;
						*(char *)(v5 + 40 * (v20 + 1)) = (char)g35;
						v10 = v6;
						*(char *)(40 * (v20 + 2) + v5) = (char)g35;
						*(char *)(40 * (v20 + 3) + v5) = (char)g35;
						*(char *)(40 * (v9 + 4) + v5) = (char)g35;
						*(char *)(40 * (v9 + 5) + v5) = (char)g35;
						*(char *)(40 * (v10 + 6) + v5) = (char)g35;
						*(char *)(40 * (v10 + 7) + v5) = (char)g35;
						v14 = v4 - 1;
						v4 = v14;
						if (v14 != 0) {
							goto lab_0x3a878;
						}
						// 0x3a960
						// branch -> 0x3a960
					}
				} else {
					v15 = v8;
					v11 = 1;
				}
			}
			// 0x3a960
			v24 = g31 + g36;
			if (v15 > v11) {
				// 0x3a8f4
				*(char *)(40 * (g30 + v11) + v24) = (char)g35;
				v18 = v15 - v11 - 1;
				if (v18 == 0) {
					// 0x3a908
					g37 = g32 - 1;
					v21 = random(0);
					v12 = g33;
					result2 = v21 + 1;
					result = result2;
					v22 = g30 + result2;
					if (0x1000000 * v12 == 0xc000000) {
						// 0x3a924
						*(char *)(g36 + g31 + 40 * v22) = (char)v12;
						// branch -> 0x3a968
					} else {
						// 0x3a938
						result = *(int32_t *)(g23 - 0x7514);
						v23 = g31 + 40 * v22;
						*(char *)(g36 + v23) = 2;
						v25 = (char *)(v23 + result);
						*v25 = (char)((int32_t)*v25 | 1);
						// branch -> 0x3a968
					}
					// 0x3a968
					g10 = v1;
					return result;
				}
				v16 = v11 + 1;
				*(char *)(40 * (g30 + v16) + v24) = (char)g35;
				v17 = v18 - 1;
				while (v17 != 0) {
					// 0x3a8f4
					v16++;
					*(char *)(40 * (g30 + v16) + v24) = (char)g35;
					v17--;
					// continue -> 0x3a8f4
				}
				// 0x3a908
				g37 = g32 - 1;
				v21 = random(0);
				v12 = g33;
				result2 = v21 + 1;
				result = result2;
				v22 = g30 + result2;
				if (0x1000000 * v12 == 0xc000000) {
					// 0x3a924
					*(char *)(g36 + g31 + 40 * v22) = (char)v12;
					// branch -> 0x3a968
				} else {
					// 0x3a938
					result = *(int32_t *)(g23 - 0x7514);
					v23 = g31 + 40 * v22;
					*(char *)(g36 + v23) = 2;
					v25 = (char *)(v23 + result);
					*v25 = (char)((int32_t)*v25 | 1);
					// branch -> 0x3a968
				}
				// 0x3a968
				g10 = v1;
				return result;
			}
		}
		// 0x3a908
		g37 = g32 - 1;
		v21 = random(0);
		v12 = g33;
		result2 = v21 + 1;
		result = result2;
		v22 = g30 + result2;
		if (0x1000000 * v12 == 0xc000000) {
			// 0x3a924
			*(char *)(g36 + g31 + 40 * v22) = (char)v12;
			// branch -> 0x3a968
		} else {
			// 0x3a938
			result = *(int32_t *)(g23 - 0x7514);
			v23 = g31 + 40 * v22;
			*(char *)(g36 + v23) = 2;
			v25 = (char *)(v23 + result);
			*v25 = (char)((int32_t)*v25 | 1);
			// branch -> 0x3a968
		}
		// 0x3a968
		g10 = v1;
		return result;
	}
	// 0x3a798
	if (v3 > 2) {
		// 0x3a7a8
		if (v3 == 3) {
			int32_t v28 = v2; // 0x3a7e4
			g35 = 36;
			int32_t v29 = v28; // 0x3a7f8
			if (0x1000000 * v28 == 0x2000000) {
				// 0x3a7f4
				v2 = 36;
				v29 = 36;
				// branch -> 0x3a7f8
			}
			// 0x3a7f8
			if (0x1000000 * v29 == 0x4000000) {
				// 0x3a804
				v2 = 27;
				// branch -> 0x3a808
			}
		}
	} else {
		// 0x3a79c
		if (v3 > -1) {
			// 0x3a7b4
			g35 = 2;
			// branch -> 0x3a808
		}
	}
	// 0x3a808
	g37 = 6;
	g33 = random(0) == 5 ? 12 : 26;
	if (0x1000000 * g35 == 0xc000000) {
		// 0x3a834
		g33 = 12;
		// branch -> 0x3a838
	}
	// 0x3a838
	v7 = g32;
	*(char *)(g36 + g31 + 40 * g30) = (char)v2;
	if (v7 != 1 && v7 >= 1) {
		// 0x3a850
		v8 = g32;
		v15 = v8;
		v11 = 1;
		if (v8 >= 10) {
			// 0x3a860
			v19 = g31 + g36;
			v5 = v19;
			v4 = (v8 - 2) / 8;
			if (v8 >= 10) {
				int32_t v30 = v19; // 0x3a890
				v13 = 1;
				while (true) {
					// 0x3a878
					v20 = g30 + v13;
					v6 = v20;
					*(char *)(40 * v20 + v30) = (char)g35;
					v9 = v6;
					*(char *)(v5 + 40 * (v20 + 1)) = (char)g35;
					v10 = v6;
					*(char *)(40 * (v20 + 2) + v5) = (char)g35;
					*(char *)(40 * (v20 + 3) + v5) = (char)g35;
					*(char *)(40 * (v9 + 4) + v5) = (char)g35;
					*(char *)(40 * (v9 + 5) + v5) = (char)g35;
					*(char *)(40 * (v10 + 6) + v5) = (char)g35;
					*(char *)(40 * (v10 + 7) + v5) = (char)g35;
					v14 = v4 - 1;
					v4 = v14;
					int32_t v31 = v13 + 8;
					if (v14 == 0) {
						// 0x3a960
						v15 = g32;
						v11 = v31;
						// branch -> 0x3a960
						// 0x3a960
						v24 = g31 + g36;
						if (v15 > v11) {
							// 0x3a8f4
							*(char *)(40 * (g30 + v11) + v24) = (char)g35;
							v18 = v15 - v11 - 1;
							if (v18 != 0) {
								v16 = v11 + 1;
								*(char *)(40 * (g30 + v16) + v24) = (char)g35;
								v17 = v18 - 1;
								while (v17 != 0) {
									// 0x3a8f4
									v16++;
									*(char *)(40 * (g30 + v16) + v24) = (char)g35;
									v17--;
									// continue -> 0x3a8f4
								}
								// 0x3a908
								g37 = g32 - 1;
								v21 = random(0);
								v12 = g33;
								result2 = v21 + 1;
								v22 = g30 + result2;
								if (0x1000000 * v12 == 0xc000000) {
									// 0x3a924
									*(char *)(g36 + g31 + 40 * v22) = (char)v12;
									// branch -> 0x3a968
									// 0x3a968
									g10 = v1;
									return result2;
								}
								// 0x3a938
								result = *(int32_t *)(g23 - 0x7514);
								v23 = g31 + 40 * v22;
								*(char *)(g36 + v23) = 2;
								v25 = (char *)(v23 + result);
								*v25 = (char)((int32_t)*v25 | 1);
								// branch -> 0x3a968
								// 0x3a968
								g10 = v1;
								return result;
							}
						}
						// 0x3a908
						g37 = g32 - 1;
						v21 = random(0);
						v12 = g33;
						result2 = v21 + 1;
						v22 = g30 + result2;
						if (0x1000000 * v12 == 0xc000000) {
							// 0x3a924
							*(char *)(g36 + g31 + 40 * v22) = (char)v12;
							// branch -> 0x3a968
							// 0x3a968
							g10 = v1;
							return result2;
						}
						// 0x3a938
						result = *(int32_t *)(g23 - 0x7514);
						v23 = g31 + 40 * v22;
						*(char *)(g36 + v23) = 2;
						v25 = (char *)(v23 + result);
						*v25 = (char)((int32_t)*v25 | 1);
						// branch -> 0x3a968
						// 0x3a968
						g10 = v1;
						return result;
					}
				lab_0x3a878:
					// 0x3a878
					v30 = v5;
					v13 += 8;
					// branch -> 0x3a878
				}
			} else {
				v15 = v8;
				v11 = 1;
			}
		}
		// 0x3a960
		v24 = g31 + g36;
		if (v15 > v11) {
			// 0x3a8f4
			*(char *)(40 * (g30 + v11) + v24) = (char)g35;
			v18 = v15 - v11 - 1;
			if (v18 != 0) {
				v16 = v11 + 1;
				*(char *)(40 * (g30 + v16) + v24) = (char)g35;
				v17 = v18 - 1;
				while (v17 != 0) {
					// 0x3a8f4
					v16++;
					*(char *)(40 * (g30 + v16) + v24) = (char)g35;
					v17--;
					// continue -> 0x3a8f4
				}
				// 0x3a908
				g37 = g32 - 1;
				v21 = random(0);
				v12 = g33;
				result2 = v21 + 1;
				result = result2;
				v22 = g30 + result2;
				if (0x1000000 * v12 == 0xc000000) {
					// 0x3a924
					*(char *)(g36 + g31 + 40 * v22) = (char)v12;
					// branch -> 0x3a968
				} else {
					// 0x3a938
					result = *(int32_t *)(g23 - 0x7514);
					v23 = g31 + 40 * v22;
					*(char *)(g36 + v23) = 2;
					v25 = (char *)(v23 + result);
					*v25 = (char)((int32_t)*v25 | 1);
					// branch -> 0x3a968
				}
				// 0x3a968
				g10 = v1;
				return result;
			}
		}
	}
	// 0x3a908
	g37 = g32 - 1;
	v21 = random(0);
	v12 = g33;
	result2 = v21 + 1;
	result = result2;
	v22 = g30 + result2;
	if (0x1000000 * v12 == 0xc000000) {
		// 0x3a924
		*(char *)(g36 + g31 + 40 * v22) = (char)v12;
		// branch -> 0x3a968
	} else {
		// 0x3a938
		result = *(int32_t *)(g23 - 0x7514);
		v23 = g31 + 40 * v22;
		*(char *)(g36 + v23) = 2;
		v25 = (char *)(v23 + result);
		*v25 = (char)((int32_t)*v25 | 1);
		// branch -> 0x3a968
	}
	// 0x3a968
	g10 = v1;
	return result;
}

// Address range: 0x3a97c - 0x3ab48
int32_t function_3a97c(int32_t a1, int32_t a2, char a3, int32_t a4)
{
	int32_t v1 = g10; // 0x3a980
	g35 = a2;
	int32_t v2 = a3; // r25
	g36 = a4;
	g37 = 4;
	int32_t v3 = random(0); // 0x3a9a4
	int32_t result;         // r3
	int32_t v4;             // r4
	int32_t v5;             // 0x3aa58
	int32_t v6;             // 0x3aa70
	int32_t v7;             // 0x3aaf0
	int32_t v8;             // 0x3aa50
	int32_t v9;             // 0x3aa8c
	int32_t v10;            // 0x3aabc
	int32_t v11;            // 0x3aac0
	int32_t v12;            // 0x3aac8
	int32_t v13;            // 0x3aadc
	int32_t v14;            // 0x3aae0
	int32_t v15;            // 0x3aaf4
	int32_t v16;            // 0x3ab2c
	int32_t v17;            // 0x3aa60
	int32_t v18;            // 0x3aaec
	int32_t v19;            // 0x3ab14
	int32_t v20;            // 0x3ab2c
	char *v21;              // 0x3ab1c
	if (v3 == 2) {
		int32_t v22 = v2; // 0x3a9d4
		g31 = 11;
		int32_t v23 = v22; // 0x3a9e8
		if (0x1000000 * v22 == 0x1000000) {
			// 0x3a9e4
			v2 = 11;
			v23 = 11;
			// branch -> 0x3a9e8
		}
		// 0x3a9e8
		if (0x1000000 * v23 == 0x4000000) {
			// 0x3a9f4
			v2 = 14;
			// branch -> 0x3aa20
		}
		// 0x3aa20
		g37 = 6;
		g30 = random(0) == 5 ? 11 : 25;
		if (0x1000000 * g31 == 0xb000000) {
			// 0x3aa4c
			g30 = 11;
			// branch -> 0x3aa50
		}
		// 0x3aa50
		v8 = 40 * a1;
		g32 = v8;
		v5 = g36;
		v17 = *(int32_t *)(g23 - 0x77cc) + v8 + g35;
		g33 = v17;
		*(char *)v17 = (char)v2;
		v4 = 1;
		if (v5 != 1 && v5 >= 1) {
			// 0x3aa70
			v6 = g36;
			v12 = v6;
			v16 = 1;
			if (v6 >= 10) {
				// 0x3aa80
				v9 = g33 + 1;
				result = v9;
				if (v6 >= 10) {
					*(char *)v9 = (char)g31;
					v4 += 8;
					*(char *)(result + 1) = (char)g31;
					*(char *)(result + 2) = (char)g31;
					*(char *)(result + 3) = (char)g31;
					*(char *)(result + 4) = (char)g31;
					*(char *)(result + 5) = (char)g31;
					*(char *)(result + 6) = (char)g31;
					*(char *)(result + 7) = (char)g31;
					v10 = result + 8;
					result = v10;
					v11 = (v6 - 2) / 8 - 1;
					while (v11 != 0) {
						// 0x3aa98
						*(char *)v10 = (char)g31;
						v4 += 8;
						*(char *)(result + 1) = (char)g31;
						*(char *)(result + 2) = (char)g31;
						*(char *)(result + 3) = (char)g31;
						*(char *)(result + 4) = (char)g31;
						*(char *)(result + 5) = (char)g31;
						*(char *)(result + 6) = (char)g31;
						*(char *)(result + 7) = (char)g31;
						v10 = result + 8;
						result = v10;
						v11--;
						// continue -> 0x3aa98
					}
					// 0x3ab2c
					v12 = g36;
					v16 = v4;
					// branch -> 0x3ab2c
				} else {
					v12 = v6;
					v16 = 1;
				}
			}
			// 0x3ab2c
			v20 = g33 + v16;
			if (v12 > v16) {
				*(char *)v20 = (char)g31;
				v13 = v20 + 1;
				v14 = v12 - v16 - 1;
				while (v14 != 0) {
					// 0x3aad8
					*(char *)v13 = (char)g31;
					v13++;
					v14--;
					// continue -> 0x3aad8
				}
				// 0x3aae4
				g37 = g36 - 1;
				v18 = random(0);
				result = v18;
				v7 = g30;
				v15 = v18 + 1;
				if (0x1000000 * v7 == 0xb000000) {
					// 0x3ab00
					*(char *)(g33 + v15) = (char)v7;
					// branch -> 0x3ab34
				} else {
					// 0x3ab08
					*(char *)(g33 + v15) = 1;
					v19 = v15 + g35 + g32;
					result = v19;
					v21 = (char *)(*(int32_t *)(g23 - 0x7514) + v19);
					*v21 = (char)((int32_t)*v21 | 2);
					// branch -> 0x3ab34
				}
				// 0x3ab34
				g10 = v1;
				return result;
			}
		}
		// 0x3aae4
		g37 = g36 - 1;
		v18 = random(0);
		result = v18;
		v7 = g30;
		v15 = v18 + 1;
		if (0x1000000 * v7 == 0xb000000) {
			// 0x3ab00
			*(char *)(g33 + v15) = (char)v7;
			// branch -> 0x3ab34
		} else {
			// 0x3ab08
			*(char *)(g33 + v15) = 1;
			v19 = v15 + g35 + g32;
			result = v19;
			v21 = (char *)(*(int32_t *)(g23 - 0x7514) + v19);
			*v21 = (char)((int32_t)*v21 | 2);
			// branch -> 0x3ab34
		}
		// 0x3ab34
		g10 = v1;
		return result;
	}
	// 0x3a9b0
	if (v3 > 2) {
		// 0x3a9c0
		if (v3 == 3) {
			int32_t v24 = v2; // 0x3a9fc
			g31 = 35;
			int32_t v25 = v24; // 0x3aa10
			if (0x1000000 * v24 == 0x1000000) {
				// 0x3aa0c
				v2 = 35;
				v25 = 35;
				// branch -> 0x3aa10
			}
			// 0x3aa10
			if (0x1000000 * v25 == 0x4000000) {
				// 0x3aa1c
				v2 = 37;
				// branch -> 0x3aa20
			}
		}
	} else {
		// 0x3a9b4
		if (v3 > -1) {
			// 0x3a9cc
			g31 = 1;
			// branch -> 0x3aa20
		}
	}
	// 0x3aa20
	g37 = 6;
	g30 = random(0) == 5 ? 11 : 25;
	if (0x1000000 * g31 == 0xb000000) {
		// 0x3aa4c
		g30 = 11;
		// branch -> 0x3aa50
	}
	// 0x3aa50
	v8 = 40 * a1;
	g32 = v8;
	v5 = g36;
	v17 = *(int32_t *)(g23 - 0x77cc) + v8 + g35;
	g33 = v17;
	*(char *)v17 = (char)v2;
	v4 = 1;
	if (v5 != 1 && v5 >= 1) {
		// 0x3aa70
		v6 = g36;
		v12 = v6;
		v16 = 1;
		if (v6 >= 10) {
			// 0x3aa80
			v9 = g33 + 1;
			result = v9;
			if (v6 >= 10) {
				*(char *)v9 = (char)g31;
				v4 += 8;
				*(char *)(result + 1) = (char)g31;
				*(char *)(result + 2) = (char)g31;
				*(char *)(result + 3) = (char)g31;
				*(char *)(result + 4) = (char)g31;
				*(char *)(result + 5) = (char)g31;
				*(char *)(result + 6) = (char)g31;
				*(char *)(result + 7) = (char)g31;
				v10 = result + 8;
				result = v10;
				v11 = (v6 - 2) / 8 - 1;
				while (v11 != 0) {
					// 0x3aa98
					*(char *)v10 = (char)g31;
					v4 += 8;
					*(char *)(result + 1) = (char)g31;
					*(char *)(result + 2) = (char)g31;
					*(char *)(result + 3) = (char)g31;
					*(char *)(result + 4) = (char)g31;
					*(char *)(result + 5) = (char)g31;
					*(char *)(result + 6) = (char)g31;
					*(char *)(result + 7) = (char)g31;
					v10 = result + 8;
					result = v10;
					v11--;
					// continue -> 0x3aa98
				}
				// 0x3ab2c
				v12 = g36;
				v16 = v4;
				// branch -> 0x3ab2c
			} else {
				v12 = v6;
				v16 = 1;
			}
		}
		// 0x3ab2c
		v20 = g33 + v16;
		if (v12 > v16) {
			*(char *)v20 = (char)g31;
			v13 = v20 + 1;
			v14 = v12 - v16 - 1;
			while (v14 != 0) {
				// 0x3aad8
				*(char *)v13 = (char)g31;
				v13++;
				v14--;
				// continue -> 0x3aad8
			}
			// 0x3aae4
			g37 = g36 - 1;
			v18 = random(0);
			result = v18;
			v7 = g30;
			v15 = v18 + 1;
			if (0x1000000 * v7 == 0xb000000) {
				// 0x3ab00
				*(char *)(g33 + v15) = (char)v7;
				// branch -> 0x3ab34
			} else {
				// 0x3ab08
				*(char *)(g33 + v15) = 1;
				v19 = v15 + g35 + g32;
				result = v19;
				v21 = (char *)(*(int32_t *)(g23 - 0x7514) + v19);
				*v21 = (char)((int32_t)*v21 | 2);
				// branch -> 0x3ab34
			}
			// 0x3ab34
			g10 = v1;
			return result;
		}
	}
	// 0x3aae4
	g37 = g36 - 1;
	v18 = random(0);
	result = v18;
	v7 = g30;
	v15 = v18 + 1;
	if (0x1000000 * v7 == 0xb000000) {
		// 0x3ab00
		*(char *)(g33 + v15) = (char)v7;
		// branch -> 0x3ab34
	} else {
		// 0x3ab08
		*(char *)(g33 + v15) = 1;
		v19 = v15 + g35 + g32;
		result = v19;
		v21 = (char *)(*(int32_t *)(g23 - 0x7514) + v19);
		*v21 = (char)((int32_t)*v21 | 2);
		// branch -> 0x3ab34
	}
	// 0x3ab34
	g10 = v1;
	return result;
}

// Address range: 0x3ab48 - 0x3ad68
int32_t function_3ab48(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7514); // 0x3ab50
	g33 = v1;
	g30 = 0;
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x3ab58
	g32 = v2;
	// branch -> 0x3ab64
	while (true) {
		// 0x3ab64
		g36 = v1;
		g35 = v2;
		g31 = 0;
		int32_t v3 = v2; // 0x3ab7c
		int32_t v4 = v1; // 0x3ab70
		// branch -> 0x3ab70
		while (true) {
			// 0x3ab70
			int32_t v5; // 0x3ad2c
			int32_t v6; // 0x3ad30
			int32_t v7; // 0x3ad38
			if (*(char *)v4 == 0) {
				// 0x3ab7c
				if (*(char *)v3 == 3) {
					// 0x3ab88
					g37 = 100;
					int32_t v8 = random(0); // 0x3ab90
					g34 = v8;
					if (v8 <= 99) {
						int32_t v9 = function_3a5e4(g31, g30); // 0x3aba4
						g34 = v9;
						if (v9 != -1) {
							// 0x3abb4
							g34 = function_3a760(g31, g30, 2, v9);
							// branch -> 0x3abc4
						}
					}
				}
				// 0x3abc4
				if (*(char *)g35 == 3) {
					// 0x3abd0
					g37 = 100;
					int32_t v10 = random(0); // 0x3abd8
					g34 = v10;
					if (v10 <= 99) {
						int32_t v11 = function_3a6a0(g31, g30); // 0x3abec
						g34 = v11;
						if (v11 != -1) {
							// 0x3abfc
							g34 = function_3a97c(g31, g30, 1, v11);
							// branch -> 0x3ac0c
						}
					}
				}
				// 0x3ac0c
				if (*(char *)g35 == 6) {
					// 0x3ac18
					g37 = 100;
					int32_t v12 = random(0); // 0x3ac20
					g34 = v12;
					if (v12 <= 99) {
						int32_t v13 = function_3a5e4(g31, g30); // 0x3ac34
						g34 = v13;
						if (v13 != -1) {
							// 0x3ac44
							g34 = function_3a760(g31, g30, 4, v13);
							// branch -> 0x3ac54
						}
					}
				}
				// 0x3ac54
				if (*(char *)g35 == 7) {
					// 0x3ac60
					g37 = 100;
					int32_t v14 = random(0); // 0x3ac68
					g34 = v14;
					if (v14 <= 99) {
						int32_t v15 = function_3a6a0(g31, g30); // 0x3ac7c
						g34 = v15;
						if (v15 != -1) {
							// 0x3ac8c
							g34 = function_3a97c(g31, g30, 4, v15);
							// branch -> 0x3ac9c
						}
					}
				}
				// 0x3ac9c
				if (*(char *)g35 == 2) {
					// 0x3aca8
					g37 = 100;
					int32_t v16 = random(0); // 0x3acb0
					g34 = v16;
					if (v16 <= 99) {
						int32_t v17 = function_3a5e4(g31, g30); // 0x3acc4
						g34 = v17;
						if (v17 != -1) {
							// 0x3acd4
							g34 = function_3a760(g31, g30, 2, v17);
							// branch -> 0x3ace4
						}
					}
				}
				// 0x3ace4
				if (*(char *)g35 == 1) {
					// 0x3acf0
					g37 = 100;
					int32_t v18 = random(0); // 0x3acf8
					g34 = v18;
					if (v18 <= 99) {
						int32_t v19 = function_3a6a0(g31, g30); // 0x3ad0c
						g34 = v19;
						if (v19 != -1) {
							// 0x3ad1c
							g34 = function_3a97c(g31, g30, 1, v19);
							// branch -> 0x3ad2c
						}
						// 0x3ad2c
						v5 = g31 + 1;
						g31 = v5;
						v6 = g35 + 40;
						g35 = v6;
						v7 = g36 + 40;
						g36 = v7;
						if (v5 >= 40) {
							// break -> 0x3ad40
							break;
						}
						v3 = v6;
						v4 = v7;
						// continue -> 0x3ab70
						continue;
					}
					// 0x3ad2c
					v5 = g31 + 1;
					g31 = v5;
					v6 = g35 + 40;
					g35 = v6;
					v7 = g36 + 40;
					g36 = v7;
					if (v5 >= 40) {
						// break -> 0x3ad40
						break;
					}
					v3 = v6;
					v4 = v7;
					// continue -> 0x3ab70
					continue;
				}
			}
			// 0x3ad2c
			v5 = g31 + 1;
			g31 = v5;
			v6 = g35 + 40;
			g35 = v6;
			v7 = g36 + 40;
			g36 = v7;
			if (v5 >= 40) {
				// break -> 0x3ad40
				break;
			}
			v3 = v6;
			v4 = v7;
			// continue -> 0x3ab70
		}
		int32_t v20 = g30 + 1; // 0x3ad40
		g30 = v20;
		int32_t v21 = g32 + 1; // 0x3ad44
		g32 = v21;
		int32_t v22 = g33 + 1; // 0x3ad4c
		g33 = v22;
		if (v20 >= 40) {
			// break -> 0x3ad54
			break;
		}
		v2 = v21;
		v1 = v22;
		// continue -> 0x3ab64
	}
	// 0x3ad54
	return g34;
}

// Address range: 0x3ad68 - 0x3afe8
int32_t function_3ad68(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x3ad70
	int32_t v2 = v1;                         // r0
	int32_t v3;                              // r11
	int32_t v4;                              // r12
	if (a3 == 1) {
		int32_t v5 = 40 * a1 + a2 + v1; // 0x3ad80
		v3 = v5;
		v4 = 12;
		*(char *)(v5 + 80) = 12;
		*(char *)(v3 + 120) = (char)v4;
		*(char *)(v3 + 160) = (char)3;
		*(char *)(v3 + 280) = (char)9;
		*(char *)(v3 + 320) = (char)v4;
		*(char *)(v3 + 360) = (char)2;
		// branch -> 0x3adac
	}
	// 0x3adac
	int32_t v6;  // r10
	int32_t v7;  // r5
	int32_t v8;  // r6
	int32_t v9;  // r9
	int32_t v10; // 0x3af7c
	int32_t v11; // 0x3ae90
	int32_t v12; // 0x3aecc
	int32_t v13; // 0x3ae0c
	int32_t v14; // 0x3ae4c
	int32_t v15; // 0x3ae98
	if (a4 == 1) {
		int32_t v16 = v2 + 40 * a1 + a2; // 0x3adbc
		v6 = v16;
		*(char *)(v16 + 91) = 10;
		*(char *)(v6 + 131) = 12;
		*(char *)(v6 + 171) = (char)8;
		*(char *)(v6 + 291) = (char)5;
		*(char *)(v6 + 331) = (char)12;
		if (*(char *)(v6 + 371) != 4) {
			// 0x3adf4
			*(char *)(v16 + 371) = 21;
			// branch -> 0x3adfc
		}
		// 0x3adfc
		if (a5 == 1) {
			// 0x3ae04
			v13 = v2 + 40 * a1 + a2;
			v9 = v13;
			v6 = 11;
			*(char *)(v13 + 2) = 11;
			*(char *)(v9 + 3) = (char)v6;
			*(char *)(v9 + 4) = (char)3;
			*(char *)(v9 + 7) = (char)8;
			*(char *)(v9 + 8) = (char)v6;
			*(char *)(v9 + 9) = (char)1;
			// branch -> 0x3ae38
		}
		// 0x3ae38
		if (a6 == 1) {
			// 0x3ae40
			v14 = 40 * a1 + 440 + v2 + a2;
			a6 = v14;
			*(char *)(v14 + 2) = 14;
			*(char *)(a6 + 3) = 11;
			*(char *)(a6 + 4) = (char)9;
			*(char *)(a6 + 7) = (char)5;
			*(char *)(a6 + 8) = (char)11;
			if (*(char *)(a6 + 9) != 4) {
				// 0x3ae84
				*(char *)(v14 + 9) = 21;
				// branch -> 0x3ae8c
			}
		}
		// 0x3ae8c
		v11 = a2 + 1;
		v15 = v2 + v11;
		v7 = v15;
		v8 = v11 + *(int32_t *)(g23 - 0x7514);
		a6 = 1;
		v12 = v15;
		// branch -> 0x3aea8
		while (true) {
			// 0x3aea8
			v10 = 1;
		lab_0x3aeb4_2:;
			int32_t v17 = a1 + 1;   // 0x3aeb4
			int32_t v18 = 40 * v17; // 0x3aeb8
			int32_t v19 = 13;       // r27
			*(char *)(v18 + v12) = 13;
			char *v20 = (char *)(v18 + v8);   // 0x3aedc
			int32_t v21 = 40 * (a1 + 2);      // r25
			int32_t v22 = (int32_t)*v20 | 64; // 0x3aee8
			g33 = v22;
			*v20 = (char)v22;
			int32_t v23 = 40 * (a1 + 3); // r26
			*(char *)(v21 + v7) = (char)v19;
			g32 = 40 * (a1 + 4);
			char *v24 = (char *)(v21 + v8);   // 0x3aefc
			int32_t v25 = (int32_t)*v24 | 64; // 0x3af00
			g35 = v25;
			*v24 = (char)v25;
			v4 = 40 * (v17 + 4);
			*(char *)(v23 + v7) = (char)v19;
			v21 = 40 * (v17 + 5);
			char *v26 = (char *)(v23 + v8); // 0x3af14
			*v26 = *v26 | 64;
			v6 = 40 * (v17 + 6);
			*(char *)(g32 + v7) = (char)v19;
			v3 = 40 * (v17 + 7);
			char *v27 = (char *)(g32 + v8); // 0x3af2c
			*v27 = (char)((int32_t)*v27 | 64);
			*(char *)(v4 + v7) = (char)v19;
			char *v28 = (char *)(v4 + v8); // 0x3af40
			*v28 = (char)((int32_t)*v28 | 64);
			*(char *)(v21 + v7) = (char)v19;
			char *v29 = (char *)(v21 + v8); // 0x3af50
			*v29 = (char)((int32_t)*v29 | 64);
			*(char *)(v6 + v7) = (char)v19;
			char *v30 = (char *)(v6 + v8); // 0x3af60
			*v30 = (char)((int32_t)*v30 | 64);
			*(char *)(v3 + v7) = (char)v19;
			char *v31 = (char *)(v3 + v8); // 0x3af70
			*v31 = (char)((int32_t)*v31 | 64);
			v10 = 9;
			// branch -> 0x3af7c
		lab_0x3af7c_2:;
			int32_t v32 = 11 - v10; // ctr
			if (v10 <= 10) {
				char v33 = 13;
				int32_t v34 = v10; // 0x3af90
				while (true) {
					int32_t v35 = 40 * (a1 + v34); // 0x3af98
					*(char *)(v7 + v35) = v33;
					char *v36 = (char *)(v35 + v8); // 0x3afa0
					*v36 = (char)((int32_t)*v36 | 64);
					int32_t v37 = v32 - 1; // 0x3afac
					v32 = v37;
					if (v37 != 0) {
						// 0x3af90
						v33 = 13;
						v34++;
						// branch -> 0x3af90
						continue;
					}
				}
			}
			int32_t v38 = a6 + 1; // 0x3afb0
			a6 = v38;
			v8++;
			int32_t v39 = v7 + 1; // 0x3afbc
			v7 = v39;
			if (v38 >= 11) {
				int32_t v40 = v2 + 40 * a1 + a2; // 0x3afcc
				g34 = v40;
				v2 = 15;
				*(char *)(v40 + 164) = 15;
				*(char *)(v40 + 284) = (char)v2;
				*(char *)(v40 + 167) = (char)v2;
				*(char *)(v40 + 287) = (char)v2;
				return function_3afec(v40, v7, v8, a6);
			}
			// 0x3aea8
			v12 = v39;
			// branch -> 0x3aea8
		}
	}
	// 0x3adfc
	if (a5 == 1) {
		// 0x3ae04
		v13 = v2 + 40 * a1 + a2;
		v9 = v13;
		v6 = 11;
		*(char *)(v13 + 2) = 11;
		*(char *)(v9 + 3) = (char)v6;
		*(char *)(v9 + 4) = (char)3;
		*(char *)(v9 + 7) = (char)8;
		*(char *)(v9 + 8) = (char)v6;
		*(char *)(v9 + 9) = (char)1;
		// branch -> 0x3ae38
	}
	// 0x3ae38
	if (a6 == 1) {
		// 0x3ae40
		v14 = 40 * a1 + 440 + v2 + a2;
		a6 = v14;
		*(char *)(v14 + 2) = 14;
		*(char *)(a6 + 3) = 11;
		*(char *)(a6 + 4) = (char)9;
		*(char *)(a6 + 7) = (char)5;
		*(char *)(a6 + 8) = (char)11;
		if (*(char *)(a6 + 9) != 4) {
			// 0x3ae84
			*(char *)(v14 + 9) = 21;
			// branch -> 0x3ae8c
		}
		// 0x3ae8c
		v11 = a2 + 1;
		v15 = v2 + v11;
		v7 = v15;
		v8 = v11 + *(int32_t *)(g23 - 0x7514);
		a6 = 1;
		v12 = v15;
		// branch -> 0x3aea8
		while (true) {
			goto lab_0x3aeb4_2;
		}
	}
	// 0x3ae8c
	v11 = a2 + 1;
	v15 = v2 + v11;
	v7 = v15;
	v8 = v11 + *(int32_t *)(g23 - 0x7514);
	a6 = 1;
	v12 = v15;
	// branch -> 0x3aea8
	while (true) {
		goto lab_0x3aeb4_2;
	}
}

// Address range: 0x3aff4 - 0x3b11c
int32_t function_3aff4(int32_t a1, uint32_t a2, int32_t a3, uint32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x3aff8
	int32_t v2 = 40 * a1;                    // 0x3b000
	int32_t result2;                         // r3
	int32_t v3;                              // r4
	if (a4 != a2) {
		int32_t v4 = v2 + a2 + v1; // r5
		int32_t result = a4 - a2;  // 0x3b09c
		result2 = result;
		v3 = 11;
		if (a4 < a2) {
			// bb
			return result;
		}
		int32_t v5 = __asm_rlwinm_(result, 29, 3, 31); // 0x3b0a8
		int32_t v6;                                    // 0x3b104
		int32_t v7;
		if (v5 == 0) {
			// 0x3b0a8
			v7 = v4;
			v6 = result2;
			// branch -> 0x3b104
		} else {
			// 0x3b0b4
			*(char *)v4 = (char)v3;
			*(char *)(v4 + 120) = (char)v3;
			*(char *)(v4 + 1) = (char)v3;
			*(char *)(v4 + 121) = (char)v3;
			*(char *)(v4 + 2) = (char)v3;
			*(char *)(v4 + 122) = (char)v3;
			*(char *)(v4 + 3) = (char)v3;
			*(char *)(v4 + 123) = (char)v3;
			*(char *)(v4 + 4) = (char)v3;
			*(char *)(v4 + 124) = (char)v3;
			*(char *)(v4 + 5) = (char)v3;
			*(char *)(v4 + 125) = (char)v3;
			*(char *)(v4 + 6) = (char)v3;
			*(char *)(v4 + 126) = (char)v3;
			*(char *)(v4 + 7) = (char)v3;
			*(char *)(v4 + 127) = (char)v3;
			int32_t v8 = v4 + 8; // 0x3b0f4
			v4 = v8;
			int32_t v9 = v5 - 1; // 0x3b0f8
			// branch -> 0x3b0b4
			while (v9 != 0) {
				// 0x3b0b4
				*(char *)v8 = (char)v3;
				*(char *)(v4 + 120) = (char)v3;
				*(char *)(v4 + 1) = (char)v3;
				*(char *)(v4 + 121) = (char)v3;
				*(char *)(v4 + 2) = (char)v3;
				*(char *)(v4 + 122) = (char)v3;
				*(char *)(v4 + 3) = (char)v3;
				*(char *)(v4 + 123) = (char)v3;
				*(char *)(v4 + 4) = (char)v3;
				*(char *)(v4 + 124) = (char)v3;
				*(char *)(v4 + 5) = (char)v3;
				*(char *)(v4 + 125) = (char)v3;
				*(char *)(v4 + 6) = (char)v3;
				*(char *)(v4 + 126) = (char)v3;
				*(char *)(v4 + 7) = (char)v3;
				*(char *)(v4 + 127) = (char)v3;
				v8 = v4 + 8;
				v4 = v8;
				v9--;
				// continue -> 0x3b0b4
			}
			int32_t v10 = result2 % 8; // 0x3b0fc
			result2 = v10;
			if (v10 == 0) {
				// bb
				return 0;
			}
			v7 = v8;
			v6 = v10;
		}
		// 0x3b104
		*(char *)v7 = (char)v3;
		*(char *)(v4 + 120) = (char)v3;
		int32_t v11 = v4 + 1; // 0x3b110
		v4 = v11;
		int32_t v12 = v6 - 1; // 0x3b114
		// branch -> 0x3b108
		while (v12 != 0) {
			// 0x3b108
			*(char *)v11 = (char)v3;
			*(char *)(v4 + 120) = (char)v3;
			v11 = v4 + 1;
			v4 = v11;
			v12--;
			// continue -> 0x3b108
		}
		// 0x3b118
		return result2;
	}
	int32_t v13 = v2 + a4 + v1; // r6
	int32_t result3 = a3 - a1;  // 0x3b010
	result2 = result3;
	v3 = 12;
	if (a3 > a1) {
		int32_t v14 = __asm_rlwinm_(result3, 29, 3, 31); // 0x3b01c
		int32_t v15;                                     // 0x3b078
		int32_t v16;
		if (v14 == 0) {
			// 0x3b01c
			v16 = v13;
			v15 = result2;
			// branch -> 0x3b078
		} else {
			// 0x3b028
			*(char *)v13 = (char)v3;
			*(char *)(v13 + 3) = (char)v3;
			*(char *)(v13 + 40) = (char)v3;
			*(char *)(v13 + 43) = (char)v3;
			*(char *)(v13 + 80) = (char)v3;
			*(char *)(v13 + 83) = (char)v3;
			*(char *)(v13 + 120) = (char)v3;
			*(char *)(v13 + 123) = (char)v3;
			*(char *)(v13 + 160) = (char)v3;
			*(char *)(v13 + 163) = (char)v3;
			*(char *)(v13 + 200) = (char)v3;
			*(char *)(v13 + 203) = (char)v3;
			*(char *)(v13 + 240) = (char)v3;
			*(char *)(v13 + 243) = (char)v3;
			*(char *)(v13 + 280) = (char)v3;
			*(char *)(v13 + 283) = (char)v3;
			int32_t v17 = v13 + 320; // 0x3b068
			v13 = v17;
			int32_t v18 = v14 - 1; // 0x3b06c
			// branch -> 0x3b028
			while (v18 != 0) {
				// 0x3b028
				*(char *)v17 = (char)v3;
				*(char *)(v13 + 3) = (char)v3;
				*(char *)(v13 + 40) = (char)v3;
				*(char *)(v13 + 43) = (char)v3;
				*(char *)(v13 + 80) = (char)v3;
				*(char *)(v13 + 83) = (char)v3;
				*(char *)(v13 + 120) = (char)v3;
				*(char *)(v13 + 123) = (char)v3;
				*(char *)(v13 + 160) = (char)v3;
				*(char *)(v13 + 163) = (char)v3;
				*(char *)(v13 + 200) = (char)v3;
				*(char *)(v13 + 203) = (char)v3;
				*(char *)(v13 + 240) = (char)v3;
				*(char *)(v13 + 243) = (char)v3;
				*(char *)(v13 + 280) = (char)v3;
				*(char *)(v13 + 283) = (char)v3;
				v17 = v13 + 320;
				v13 = v17;
				v18--;
				// continue -> 0x3b028
			}
			int32_t v19 = result2 % 8; // 0x3b070
			result2 = v19;
			if (v19 == 0) {
				// bb
				return 0;
			}
			v16 = v17;
			v15 = v19;
		}
		// 0x3b078
		*(char *)v16 = (char)v3;
		*(char *)(v13 + 3) = (char)v3;
		int32_t v20 = v13 + 40; // 0x3b084
		v13 = v20;
		int32_t v21 = v15 - 1; // 0x3b088
		// branch -> 0x3b07c
		while (v21 != 0) {
			// 0x3b07c
			*(char *)v20 = (char)v3;
			*(char *)(v13 + 3) = (char)v3;
			v20 = v13 + 40;
			v13 = v20;
			v21--;
			// continue -> 0x3b07c
		}
		// 0x3b08c
		return result2;
	}
	// bb
	return result3;
}

// Address range: 0x3b11c - 0x3b78c
int32_t function_3b11c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x3b11c
	int32_t v2 = 0;                          // r6
	// branch -> 0x3b128
	int32_t v3; // ctr
	int32_t v4; // r3
	while (true) {
		// 0x3b128
		v4 = v1;
		v3 = 40;
		int32_t v5 = v1; // 0x3b150
		// branch -> 0x3b134
		while (true) {
			int32_t v6 = v5; // 0x3b170
			if (*(char *)v5 == 2) {
				char *v7 = (char *)(v5 + 40); // 0x3b140
				if (*v7 == 22) {
					// 0x3b14c
					*v7 = 23;
					v6 = v4;
					// branch -> 0x3b154
				} else {
					v6 = v5;
				}
			}
			int32_t v8 = v6; // 0x3b190
			if (*(char *)v6 == 13) {
				char *v9 = (char *)(v6 + 40); // 0x3b160
				if (*v9 == 22) {
					// 0x3b16c
					*v9 = 18;
					v8 = v4;
					// branch -> 0x3b174
				} else {
					v8 = v6;
				}
			}
			int32_t v10 = v8; // 0x3b1b0
			if (*(char *)v8 == 13) {
				char *v11 = (char *)(v8 + 40); // 0x3b180
				if (*v11 == 2) {
					// 0x3b18c
					*v11 = 7;
					v10 = v4;
					// branch -> 0x3b194
				} else {
					v10 = v8;
				}
			}
			int32_t v12 = v10; // 0x3b1d0
			if (*(char *)v10 == 6) {
				char *v13 = (char *)(v10 + 40); // 0x3b1a0
				if (*v13 == 22) {
					// 0x3b1ac
					*v13 = 24;
					v12 = v4;
					// branch -> 0x3b1b4
				} else {
					v12 = v10;
				}
			}
			int32_t v14 = v12; // 0x3b1f0
			if (*(char *)v12 == 1) {
				char *v15 = (char *)(v12 + 1); // 0x3b1c0
				if (*v15 == 22) {
					// 0x3b1cc
					*v15 = 24;
					v14 = v4;
					// branch -> 0x3b1d4
				} else {
					v14 = v12;
				}
			}
			int32_t v16 = v14; // 0x3b210
			if (*(char *)v14 == 13) {
				char *v17 = (char *)(v14 + 1); // 0x3b1e0
				if (*v17 == 1) {
					// 0x3b1ec
					*v17 = 6;
					v16 = v4;
					// branch -> 0x3b1f4
				} else {
					v16 = v14;
				}
			}
			int32_t v18 = v16; // 0x3b214
			if (*(char *)v16 == 13) {
				char *v19 = (char *)(v16 + 1); // 0x3b200
				if (*v19 == 22) {
					// 0x3b20c
					*v19 = 19;
					v18 = v4;
					// branch -> 0x3b214
				} else {
					v18 = v16;
				}
			}
			int32_t v20 = v18 + 40; // 0x3b214
			v4 = v20;
			int32_t v21 = v3 - 1; // 0x3b218
			v3 = v21;
			if (v21 == 0) {
				// break -> 0x3b21c
				break;
			}
			v5 = v20;
			// continue -> 0x3b134
		}
		int32_t v22 = v2 + 1; // 0x3b21c
		v2 = v22;
		int32_t v23 = v1 + 1; // 0x3b220
		v1 = v23;
		if (v22 >= 40) {
			// break -> 0x3b22c
			break;
		}
		v1 = v23;
		// continue -> 0x3b128
	}
	// 0x3b22c
	v2 = 0;
	int32_t v24 = v1; // 0x3b230
	v1 = v24;
	// branch -> 0x3b234
	while (true) {
		// 0x3b234
		v4 = v24;
		v3 = 40;
		int32_t v25 = v24; // 0x3b25c
		// branch -> 0x3b240
		while (true) {
			int32_t v26 = v25; // 0x3b27c
			if (*(char *)v25 == 13) {
				char *v27 = (char *)(v25 + 40); // 0x3b24c
				if (*v27 == 19) {
					// 0x3b258
					*v27 = 21;
					v26 = v4;
					// branch -> 0x3b260
				} else {
					v26 = v25;
				}
			}
			int32_t v28 = v26; // 0x3b29c
			if (*(char *)v26 == 13) {
				char *v29 = (char *)(v26 + 40); // 0x3b26c
				if (*v29 == 22) {
					// 0x3b278
					*v29 = 20;
					v28 = v4;
					// branch -> 0x3b280
				} else {
					v28 = v26;
				}
			}
			int32_t v30 = v28; // 0x3b2bc
			if (*(char *)v28 == 7) {
				char *v31 = (char *)(v28 + 40); // 0x3b28c
				if (*v31 == 22) {
					// 0x3b298
					*v31 = 23;
					v30 = v4;
					// branch -> 0x3b2a0
				} else {
					v30 = v28;
				}
			}
			int32_t v32 = v30; // 0x3b2dc
			if (*(char *)v30 == 13) {
				char *v33 = (char *)(v30 + 40); // 0x3b2ac
				if (*v33 == 24) {
					// 0x3b2b8
					*v33 = 21;
					v32 = v4;
					// branch -> 0x3b2c0
				} else {
					v32 = v30;
				}
			}
			int32_t v34 = v32; // 0x3b2fc
			if (*(char *)v32 == 19) {
				char *v35 = (char *)(v32 + 40); // 0x3b2cc
				if (*v35 == 22) {
					// 0x3b2d8
					*v35 = 20;
					v34 = v4;
					// branch -> 0x3b2e0
				} else {
					v34 = v32;
				}
			}
			int32_t v36 = v34; // 0x3b31c
			if (*(char *)v34 == 2) {
				char *v37 = (char *)(v34 + 40); // 0x3b2ec
				if (*v37 == 19) {
					// 0x3b2f8
					*v37 = 21;
					v36 = v4;
					// branch -> 0x3b300
				} else {
					v36 = v34;
				}
			}
			int32_t v38 = v36; // 0x3b33c
			if (*(char *)v36 == 19) {
				char *v39 = (char *)(v36 + 40); // 0x3b30c
				if (*v39 == 1) {
					// 0x3b318
					*v39 = 6;
					v38 = v4;
					// branch -> 0x3b320
				} else {
					v38 = v36;
				}
			}
			int32_t v40 = v38; // 0x3b35c
			if (*(char *)v38 == 7) {
				char *v41 = (char *)(v38 + 40); // 0x3b32c
				if (*v41 == 19) {
					// 0x3b338
					*v41 = 21;
					v40 = v4;
					// branch -> 0x3b340
				} else {
					v40 = v38;
				}
			}
			int32_t v42 = v40; // 0x3b37c
			if (*(char *)v40 == 2) {
				char *v43 = (char *)(v40 + 40); // 0x3b34c
				if (*v43 == 1) {
					// 0x3b358
					*v43 = 6;
					v42 = v4;
					// branch -> 0x3b360
				} else {
					v42 = v40;
				}
			}
			int32_t v44 = v42; // 0x3b39c
			if (*(char *)v42 == 3) {
				char *v45 = (char *)(v42 + 40); // 0x3b36c
				if (*v45 == 22) {
					// 0x3b378
					*v45 = 24;
					v44 = v4;
					// branch -> 0x3b380
				} else {
					v44 = v42;
				}
			}
			int32_t v46 = v44; // 0x3b3bc
			if (*(char *)v44 == 21) {
				char *v47 = (char *)(v44 + 40); // 0x3b38c
				if (*v47 == 1) {
					// 0x3b398
					*v47 = 6;
					v46 = v4;
					// branch -> 0x3b3a0
				} else {
					v46 = v44;
				}
			}
			int32_t v48 = v46; // 0x3b3dc
			if (*(char *)v46 == 7) {
				char *v49 = (char *)(v46 + 40); // 0x3b3ac
				if (*v49 == 1) {
					// 0x3b3b8
					*v49 = 6;
					v48 = v4;
					// branch -> 0x3b3c0
				} else {
					v48 = v46;
				}
			}
			int32_t v50 = v48; // 0x3b3fc
			if (*(char *)v48 == 7) {
				char *v51 = (char *)(v48 + 40); // 0x3b3cc
				if (*v51 == 24) {
					// 0x3b3d8
					*v51 = 21;
					v50 = v4;
					// branch -> 0x3b3e0
				} else {
					v50 = v48;
				}
			}
			int32_t v52 = v50; // 0x3b41c
			if (*(char *)v50 == 4) {
				char *v53 = (char *)(v50 + 40); // 0x3b3ec
				if (*v53 == 16) {
					// 0x3b3f8
					*v53 = 17;
					v52 = v4;
					// branch -> 0x3b400
				} else {
					v52 = v50;
				}
			}
			int32_t v54 = v52; // 0x3b43c
			if (*(char *)v52 == 7) {
				char *v55 = (char *)(v52 + 40); // 0x3b40c
				if (*v55 == 13) {
					// 0x3b418
					*v55 = 17;
					v54 = v4;
					// branch -> 0x3b420
				} else {
					v54 = v52;
				}
			}
			int32_t v56 = v54; // 0x3b45c
			if (*(char *)v54 == 2) {
				char *v57 = (char *)(v54 + 40); // 0x3b42c
				if (*v57 == 24) {
					// 0x3b438
					*v57 = 21;
					v56 = v4;
					// branch -> 0x3b440
				} else {
					v56 = v54;
				}
			}
			int32_t v58 = v56; // 0x3b47c
			if (*(char *)v56 == 2) {
				char *v59 = (char *)(v56 + 40); // 0x3b44c
				if (*v59 == 13) {
					// 0x3b458
					*v59 = 17;
					v58 = v4;
					// branch -> 0x3b460
				} else {
					v58 = v56;
				}
			}
			int32_t v60 = v58; // 0x3b49c
			if (*(char *)v58 == 23) {
				char *v61 = (char *)(v58 - 40); // 0x3b46c
				if (*v61 == 22) {
					// 0x3b478
					*v61 = 19;
					v60 = v4;
					// branch -> 0x3b480
				} else {
					v60 = v58;
				}
			}
			int32_t v62 = v60; // 0x3b4bc
			if (*(char *)v60 == 19) {
				char *v63 = (char *)(v60 - 40); // 0x3b48c
				if (*v63 == 23) {
					// 0x3b498
					*v63 = 21;
					v62 = v4;
					// branch -> 0x3b4a0
				} else {
					v62 = v60;
				}
			}
			int32_t v64 = v62; // 0x3b4dc
			if (*(char *)v62 == 6) {
				char *v65 = (char *)(v62 - 40); // 0x3b4ac
				if (*v65 == 22) {
					// 0x3b4b8
					*v65 = 24;
					v64 = v4;
					// branch -> 0x3b4c0
				} else {
					v64 = v62;
				}
			}
			int32_t v66 = v64; // 0x3b4fc
			if (*(char *)v64 == 6) {
				char *v67 = (char *)(v64 - 40); // 0x3b4cc
				if (*v67 == 23) {
					// 0x3b4d8
					*v67 = 21;
					v66 = v4;
					// branch -> 0x3b4e0
				} else {
					v66 = v64;
				}
			}
			int32_t v68 = v66; // 0x3b51c
			if (*(char *)v66 == 1) {
				char *v69 = (char *)(v66 + 1); // 0x3b4ec
				if (*v69 == 2) {
					// 0x3b4f8
					*v69 = 7;
					v68 = v4;
					// branch -> 0x3b500
				} else {
					v68 = v66;
				}
			}
			int32_t v70 = v68; // 0x3b53c
			if (*(char *)v68 == 6) {
				char *v71 = (char *)(v68 + 1); // 0x3b50c
				if (*v71 == 18) {
					// 0x3b518
					*v71 = 21;
					v70 = v4;
					// branch -> 0x3b520
				} else {
					v70 = v68;
				}
			}
			int32_t v72 = v70; // 0x3b55c
			if (*(char *)v70 == 18) {
				char *v73 = (char *)(v70 + 1); // 0x3b52c
				if (*v73 == 2) {
					// 0x3b538
					*v73 = 7;
					v72 = v4;
					// branch -> 0x3b540
				} else {
					v72 = v70;
				}
			}
			int32_t v74 = v72; // 0x3b57c
			if (*(char *)v72 == 6) {
				char *v75 = (char *)(v72 + 1); // 0x3b54c
				if (*v75 == 2) {
					// 0x3b558
					*v75 = 7;
					v74 = v4;
					// branch -> 0x3b560
				} else {
					v74 = v72;
				}
			}
			int32_t v76 = v74; // 0x3b59c
			if (*(char *)v74 == 21) {
				char *v77 = (char *)(v74 + 1); // 0x3b56c
				if (*v77 == 2) {
					// 0x3b578
					*v77 = 7;
					v76 = v4;
					// branch -> 0x3b580
				} else {
					v76 = v74;
				}
			}
			int32_t v78 = v76; // 0x3b5bc
			if (*(char *)v76 == 6) {
				char *v79 = (char *)(v76 + 1); // 0x3b58c
				if (*v79 == 22) {
					// 0x3b598
					*v79 = 24;
					v78 = v4;
					// branch -> 0x3b5a0
				} else {
					v78 = v76;
				}
			}
			int32_t v80 = v78; // 0x3b5dc
			if (*(char *)v78 == 6) {
				char *v81 = (char *)(v78 + 1); // 0x3b5ac
				if (*v81 == 13) {
					// 0x3b5b8
					*v81 = 16;
					v80 = v4;
					// branch -> 0x3b5c0
				} else {
					v80 = v78;
				}
			}
			int32_t v82 = v80; // 0x3b5fc
			if (*(char *)v80 == 1) {
				char *v83 = (char *)(v80 + 1); // 0x3b5cc
				if (*v83 == 13) {
					// 0x3b5d8
					*v83 = 16;
					v82 = v4;
					// branch -> 0x3b5e0
				} else {
					v82 = v80;
				}
			}
			int32_t v84 = v82; // 0x3b61c
			if (*(char *)v82 == 13) {
				char *v85 = (char *)(v82 + 1); // 0x3b5ec
				if (*v85 == 16) {
					// 0x3b5f8
					*v85 = 17;
					v84 = v4;
					// branch -> 0x3b600
				} else {
					v84 = v82;
				}
			}
			int32_t v86 = v84; // 0x3b63c
			if (*(char *)v84 == 6) {
				char *v87 = (char *)(v84 - 1); // 0x3b60c
				if (*v87 == 22) {
					// 0x3b618
					*v87 = 7;
					v86 = v4;
					// branch -> 0x3b620
				} else {
					v86 = v84;
				}
			}
			int32_t v88 = v86; // 0x3b65c
			if (*(char *)v86 == 6) {
				char *v89 = (char *)(v86 - 1); // 0x3b62c
				if (*v89 == 22) {
					// 0x3b638
					*v89 = 24;
					v88 = v4;
					// branch -> 0x3b640
				} else {
					v88 = v86;
				}
			}
			int32_t v90 = v88; // 0x3b67c
			if (*(char *)v88 == 7) {
				char *v91 = (char *)(v88 - 1); // 0x3b64c
				if (*v91 == 24) {
					// 0x3b658
					*v91 = 21;
					v90 = v4;
					// branch -> 0x3b660
				} else {
					v90 = v88;
				}
			}
			int32_t v92 = v90; // 0x3b680
			if (*(char *)v90 == 18) {
				char *v93 = (char *)(v90 - 1); // 0x3b66c
				if (*v93 == 24) {
					// 0x3b678
					*v93 = 21;
					v92 = v4;
					// branch -> 0x3b680
				} else {
					v92 = v90;
				}
			}
			int32_t v94 = v92 + 40; // 0x3b680
			v4 = v94;
			int32_t v95 = v3 - 1; // 0x3b684
			v3 = v95;
			if (v95 == 0) {
				// break -> 0x3b688
				break;
			}
			v25 = v94;
			// continue -> 0x3b240
		}
		int32_t v96 = v2 + 1; // 0x3b688
		v2 = v96;
		int32_t v97 = v1 + 1; // 0x3b68c
		v1 = v97;
		if (v96 >= 40) {
			// break -> 0x3b698
			break;
		}
		v24 = v97;
		// continue -> 0x3b234
	}
	// 0x3b698
	v1 = 0;
	int32_t v98 = v1; // 0x3b6a4
	// branch -> 0x3b69c
	int32_t result; // 0x3b76c
	while (true) {
		// 0x3b69c
		v3 = 20;
		v4 = v98;
		v2 = 0;
		int32_t v99 = v98; // 0x3b6c8
		// branch -> 0x3b6ac
		while (true) {
			int32_t v100 = v99; // 0x3b6e8
			if (*(char *)v99 == 4) {
				char *v101 = (char *)(v99 + 1); // 0x3b6b8
				if (*v101 == 2) {
					// 0x3b6c4
					*v101 = 7;
					v100 = v4;
					// branch -> 0x3b6cc
				} else {
					v100 = v99;
				}
			}
			int32_t v102 = v100; // 0x3b708
			if (*(char *)v100 == 2) {
				char *v103 = (char *)(v100 + 40); // 0x3b6d8
				if (*v103 == 19) {
					// 0x3b6e4
					*v103 = 21;
					v102 = v4;
					// branch -> 0x3b6ec
				} else {
					v102 = v100;
				}
			}
			int32_t v104 = v102; // 0x3b70c
			if (*(char *)v102 == 18) {
				char *v105 = (char *)(v102 + 1); // 0x3b6f8
				if (*v105 == 22) {
					// 0x3b704
					*v105 = 20;
					v104 = v4;
					// branch -> 0x3b70c
				} else {
					v104 = v102;
				}
			}
			int32_t v106 = v104 + 40; // 0x3b70c
			v4 = v106;
			int32_t v107 = v106; // 0x3b748
			if (*(char *)v106 == 4) {
				char *v108 = (char *)(v104 + 41); // 0x3b718
				if (*v108 == 2) {
					// 0x3b724
					*v108 = 7;
					v107 = v4;
					// branch -> 0x3b72c
				} else {
					v107 = v106;
				}
			}
			int32_t v109 = v107; // 0x3b768
			if (*(char *)v107 == 2) {
				char *v110 = (char *)(v107 + 40); // 0x3b738
				if (*v110 == 19) {
					// 0x3b744
					*v110 = 21;
					v109 = v4;
					// branch -> 0x3b74c
				} else {
					v109 = v107;
				}
			}
			int32_t v111 = v109; // 0x3b76c
			if (*(char *)v109 == 18) {
				char *v112 = (char *)(v109 + 1); // 0x3b758
				if (*v112 == 22) {
					// 0x3b764
					*v112 = 20;
					v111 = v4;
					// branch -> 0x3b76c
				} else {
					v111 = v109;
				}
			}
			// 0x3b76c
			result = v111 + 40;
			v4 = result;
			v2++;
			int32_t v113 = v3 - 1; // 0x3b774
			v3 = v113;
			if (v113 == 0) {
				// break -> 0x3b778
				break;
			}
			v99 = result;
			// continue -> 0x3b6ac
		}
		int32_t v114 = v1 + 1;   // 0x3b778
		int32_t v115 = v114 + 1; // 0x3b77c
		v1 = v115;
		if (v114 >= 40) {
			// break -> 0x3b788
			break;
		}
		v98 = v115;
		// continue -> 0x3b69c
	}
	// 0x3b788
	return result;
}

// Address range: 0x3b78c - 0x3b8cc
int32_t DRLG_L5Subs(void)
{
	int32_t v1 = g23 - 0x1fbe;               // r29
	int32_t v2 = 0;                          // r30
	int32_t v3 = *(int32_t *)(g23 - 0x77cc); // 0x3b79c
	int32_t v4 = *(int32_t *)(g23 - 0x7514); // 0x3b7a0
	// branch -> 0x3b7ac
	int32_t result; // r3
	while (true) {
		int32_t v5 = v3; // r28
		int32_t v6 = v4; // r27
		g36 = 0;
		// branch -> 0x3b7b8
		while (true) {
			// 0x3b7b8
			g37 = 4;
			int32_t v7 = random(0); // 0x3b7c0
			result = v7;
			int32_t v8; // 0x3b890
			if (v7 == 0) {
				unsigned char v9 = *(char *)v5;                  // 0x3b7cc
				unsigned char v10 = *(char *)(v1 + (int32_t)v9); // 0x3b7d0
				int32_t v11 = v10;                               // r24
				if (v10 != 0) {
					// 0x3b7dc
					if (*(char *)v6 == 0) {
						// 0x3b7e8
						g37 = 16;
						int32_t v12 = random(0); // 0x3b7f0
						result = v12;
						int32_t v13 = -1; // r4
						int32_t v14 = -1;
						int32_t v15; // 0x3b858
						if (v12 > -1) {
							int32_t v16 = -1; // 0x3b7fc5
							while (true) {
								int32_t v17 = v16 + 1; // 0x3b7fc
								int32_t v18 = v17;
								int32_t v19 = v17; // 0x3b7fc
								if (v17 == 206) {
									// 0x3b808
									v18 = 0;
									v19 = 0;
									// branch -> 0x3b80c
								}
								// 0x3b80c
								v13 = v18;
								int32_t v20 = v12;
								if (v11 == (int32_t) * (char *)(v1 + v19)) {
									int32_t v21 = v12 - 1; // 0x3b818
									result = v21;
									v20 = v21;
									// branch -> 0x3b81c
								}
								// 0x3b81c
								if (v20 <= 0xffffffff) {
									v14 = v19;
									// break -> 0x3b824
									break;
								}
								v12 = v20;
								v16 = v19;
								// continue -> 0x3b7fc
							}
							// 0x3b824
							v15 = v14;
							char v22;
							if (v14 == 89) {
							lab_0x3b82c:;
								char *v23 = (char *)(v5 - 1); // 0x3b82c
								if (*(char *)(v1 + (int32_t)*v23) == 79) {
									// 0x3b83c
									if (*(char *)(v6 - 1) == 0) {
										// 0x3b848
										*v23 = 90;
										v15 = v13;
										// branch -> 0x3b858
									lab_0x3b858:
										// 0x3b858
										v22 = v15;
										if (v15 == 91) {
										lab_0x3b860:;
											char *v24 = (char *)(v5 + 40); // 0x3b860
											if (*(char *)(v1 + (int32_t)*v24) == 80) {
												// 0x3b870
												if (*(char *)(v6 + 40) == 0) {
													// 0x3b87c
													*v24 = 92;
													v22 = v13;
													// branch -> 0x3b88c
												lab_0x3b88c:
													// 0x3b88c
													*(char *)v5 = v22;
													// branch -> 0x3b890
												lab_0x3b890:
													// 0x3b890
													v8 = g36 + 1;
													g36 = v8;
													v6 += 40;
													v5 += 40;
													if (v8 >= 40) {
														// break -> 0x3b8a4
														break;
													}
													// continue -> 0x3b7b8
													continue;
												}
											}
											// 0x3b888
											v22 = 80;
											// branch -> 0x3b88c
											goto lab_0x3b88c;
										}
									lab_0x3b88c_2:
										// 0x3b88c
										*(char *)v5 = v22;
										// branch -> 0x3b890
										goto lab_0x3b890;
									}
								}
								// 0x3b854
								v13 = 79;
								v15 = 79;
								// branch -> 0x3b858
								goto lab_0x3b858;
							}
						lab_0x3b858_2:;
							char v25 = v15;
							if (v15 == 91) {
								goto lab_0x3b860;
							}
							v22 = v25;
							goto lab_0x3b88c_2;
						}
						// 0x3b824
						if (v14 == 89) {
							goto lab_0x3b82c;
						}
						v15 = v14;
						goto lab_0x3b858_2;
					}
				}
				// 0x3b890
				v8 = g36 + 1;
				g36 = v8;
				v6 += 40;
				v5 += 40;
				if (v8 >= 40) {
					// break -> 0x3b8a4
					break;
				}
				// continue -> 0x3b7b8
				continue;
			}
			// 0x3b890
			v8 = g36 + 1;
			g36 = v8;
			v6 += 40;
			v5 += 40;
			if (v8 >= 40) {
				// break -> 0x3b8a4
				break;
			}
			// continue -> 0x3b7b8
		}
		int32_t v26 = v2 + 1; // 0x3b8a4
		v2 = v26;
		if (v26 >= 40) {
			// break -> 0x3b8b8
			break;
		}
		v4++;
		v3++;
		// continue -> 0x3b7ac
	}
	// 0x3b8b8
	return result;
}

// Address range: 0x3b8cc - 0x3b9d0
int32_t function_3b8cc(int32_t a1, int32_t a2)
{
	// 0x3b8cc
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7528); // 0x3b8dc
	g35 = v1;
	g33 = a2;
	g34 = *(int32_t *)v1;
	int32_t v2 = function_c9948();             // 0x3b8f4
	int32_t v3 = (int32_t) * (char *)v2;       // r9
	int32_t v4 = 0;                            // r12
	int32_t v5 = (int32_t) * (char *)(v2 + 2); // r10
	*(int32_t *)*(int32_t *)(g23 - 0x754c) = g36;
	*(int32_t *)*(int32_t *)(g23 - 0x7550) = g33;
	*(int32_t *)*(int32_t *)(g23 - 0x7554) = v3;
	*(int32_t *)*(int32_t *)(g23 - 0x7558) = v5;
	int32_t v6 = g33 + *(int32_t *)(g23 - 0x77cc);        // 0x3b92c
	int32_t v7 = g33 + *(int32_t *)(g23 - 0x7514);        // 0x3b934
	int32_t v8 = *(int32_t *)(*(int32_t *)g35 + 136) + 4; // 0x3b93c
	int32_t v9 = v4;                                      // 0x3b9a41
	if (v9 < v5) {
		int32_t v10 = v5; // 0x3b9a416
		while (true) {
			int32_t v11 = v3;  // ctr
			int32_t v12 = 0;   // r11
			int32_t v13 = v10; // 0x3b9a4
			int32_t v14 = v9;  // 0x3b9a0
			int32_t v15 = v8;  // 0x3b9588
			if (v3 >= 1) {
				int32_t v16 = 0;  // 0x3b980
				int32_t v17 = v8; // 0x3b958
				int32_t v18;      // 0x3b98c
				while (true) {
					char v19 = *(char *)v17; // 0x3b958
					int32_t v20 = g36 + v16; // 0x3b980
					if (v19 == 0) {
						// 0x3b980
						*(char *)(v6 + 40 * v20) = (char)13;
						// branch -> 0x3b98c
					} else {
						int32_t v21 = 40 * v20; // 0x3b968
						*(char *)(v6 + v21) = v19;
						char *v22 = (char *)(v21 + v7); // 0x3b970
						*v22 = *v22 | -128;
						// branch -> 0x3b98c
					}
					// 0x3b98c
					v18 = v8 + 2;
					v8 = v18;
					int32_t v23 = v12 + 1; // 0x3b990
					v12 = v23;
					int32_t v24 = v11 - 1; // 0x3b994
					v11 = v24;
					if (v24 == 0) {
						// break -> 0x3b998
						break;
					}
					v16 = v23;
					v17 = v18;
					// continue -> 0x3b958
				}
				// 0x3b998
				v13 = v5;
				v14 = v4;
				v15 = v18;
				// branch -> 0x3b998
			}
			int32_t v25 = v14 + 1; // 0x3b9a0
			v4 = v25;
			if (v25 >= v13) {
				// break -> 0x3b9a4
				break;
			}
			v10 = v13;
			v9 = v25;
			v7++;
			v6++;
			v8 = v15;
			// continue -> 0x3b944
		}
		// 0x3b9a4
		// branch -> 0x3b9ac
	}
	// 0x3b9ac
	return function_c9acc(*(int32_t *)g35);
}

// Address range: 0x3b9d0 - 0x3c02c
int32_t function_3b9d0(int32_t a1)
{
	int32_t v1 = g10; // 0x3b9d4
	int32_t v2 = g23; // 0x3ba20
	if (*(int32_t *)(g23 - 0x4f20) != 0) {
		// 0x3b9ec
		function_3ad68(0, 14, 0, 0, 0, 1);
		v2 = g23;
		// branch -> 0x3ba08
	}
	int32_t v3 = v2; // 0x3bae4
	if (*(int32_t *)(v2 - 0x4f24) != 0) {
		int32_t v4 = v2; // 0x3ba54
		if (*(int32_t *)(v2 - 0x4f20) != 0) {
			// 0x3ba20
			if (*(int32_t *)(v2 - 0x4f28) == 0) {
				// 0x3ba2c
				function_3ad68(14, 14, 0, 0, 1, 0);
				v4 = g23;
				// branch -> 0x3ba48
			} else {
				v4 = v2;
			}
		}
		int32_t v5 = v4; // 0x3ba88
		if (*(int32_t *)(v4 - 0x4f20) == 0) {
			// 0x3ba54
			if (*(int32_t *)(v4 - 0x4f28) != 0) {
				// 0x3ba60
				function_3ad68(14, 14, 0, 0, 0, 1);
				v5 = g23;
				// branch -> 0x3ba7c
			} else {
				v5 = v4;
			}
		}
		int32_t v6 = v5; // 0x3babc
		if (*(int32_t *)(v5 - 0x4f20) != 0) {
			// 0x3ba88
			if (*(int32_t *)(v5 - 0x4f28) != 0) {
				// 0x3ba94
				function_3ad68(14, 14, 0, 0, 1, 1);
				v6 = g23;
				// branch -> 0x3bab0
			} else {
				v6 = v5;
			}
		}
		// 0x3bab0
		if (*(int32_t *)(v6 - 0x4f20) == 0) {
			// 0x3babc
			if (*(int32_t *)(v6 - 0x4f28) == 0) {
				// 0x3bac8
				function_3ad68(14, 14, 0, 0, 0, 0);
				v3 = g23;
				// branch -> 0x3bae4
			} else {
				v3 = v6;
			}
		} else {
			v3 = v6;
		}
	}
	int32_t v7 = v3; // 0x3bb18
	if (*(int32_t *)(v3 - 0x4f28) != 0) {
		// 0x3baf0
		function_3ad68(28, 14, 0, 0, 1, 0);
		v7 = g23;
		// branch -> 0x3bb0c
	}
	int32_t v8 = v7; // 0x3bb44
	int32_t v9;      // 0x3bb7c
	int32_t v10;     // 0x3bb9c
	int32_t v11;     // 0x3bbdc
	int32_t v12;     // 0x3bc10
	int32_t v13;     // 0x3bc44
	int32_t v14;     // 0x3bc78
	int32_t v15;     // 0x3bca0
	int32_t v16;     // 0x3bcd4
	int32_t v17;     // 0x3bd00
	int32_t v18;     // 0x3bd38
	int32_t v19;     // 0x3bda8
	int32_t v20;     // 0x3bdcc
	int32_t v21;     // 0x3be08
	int32_t v22;     // 0x3be4c
	int32_t v23;     // 0x3be98
	int32_t v24;     // 0x3bf14
	int32_t v25;     // 0x3bf50
	int32_t v26;     // 0x3bf94
	int32_t v27;     // 0x3bfe0
	int32_t result3; // 0x3c028
	int32_t v28;     // 0x3c02824
	int32_t v29;     // 0x3c02825
	int32_t v30;     // 0x3c02826
	int32_t v31;     // 0x3c02827
	int32_t *v32;    // 0x3bd68
	int32_t v33;     // 0x3bdbc
	int32_t v34;     // 0x3bdf8
	int32_t v35;     // 0x3be34
	int32_t v36;     // 0x3be78
	int32_t result2; // 0x3bebc
	int32_t v37;     // 0x3bfc0
	int32_t result;  // 0x3bd58
	if (*(int32_t *)(v7 - 0x4f20) != 0) {
		// 0x3bb18
		if (*(int32_t *)(v7 - 0x4f24) != 0) {
			// 0x3bb24
			function_3aff4(12, 18, 14, 18);
			v8 = g23;
			// branch -> 0x3bb38
		} else {
			v8 = v7;
		}
		// 0x3bb38
		v9 = v8;
		if (*(int32_t *)(v8 - 0x4f24) != 0) {
			// 0x3bb44
			if (*(int32_t *)(v8 - 0x4f28) != 0) {
				// 0x3bb50
				function_3aff4(26, 18, 28, 18);
				v9 = g23;
				// branch -> 0x3bb64
			} else {
				v9 = v8;
			}
		}
		// 0x3bb64
		v10 = v9;
		if (*(int32_t *)(v9 - 0x4f20) != 0) {
			// 0x3bb70
			if (*(int32_t *)(v9 - 0x4f24) == 0) {
				// 0x3bb7c
				if (*(int32_t *)(v9 - 0x4f28) != 0) {
					// 0x3bb88
					function_3aff4(12, 18, 28, 18);
					v10 = g23;
					// branch -> 0x3bb9c
				} else {
					v10 = v9;
				}
			} else {
				v10 = v9;
			}
		}
		// 0x3bb9c
		v11 = v10;
		if (*(int32_t *)(v10 - 0x4f2c) != 0) {
			// 0x3bba8
			function_3ad68(14, 0, 0, 1, 0, 0);
			v11 = g23;
			// branch -> 0x3bbc4
		}
		// 0x3bbc4
		v15 = v11;
		if (*(int32_t *)(v11 - 0x4f30) != 0) {
			// 0x3bbd0
			v12 = v11;
			if (*(int32_t *)(v11 - 0x4f2c) != 0) {
				// 0x3bbdc
				if (*(int32_t *)(v11 - 0x4f34) == 0) {
					// 0x3bbe8
					function_3ad68(14, 14, 1, 0, 0, 0);
					v12 = g23;
					// branch -> 0x3bc04
				} else {
					v12 = v11;
				}
			}
			// 0x3bc04
			v13 = v12;
			if (*(int32_t *)(v12 - 0x4f2c) == 0) {
				// 0x3bc10
				if (*(int32_t *)(v12 - 0x4f34) != 0) {
					// 0x3bc1c
					function_3ad68(14, 14, 0, 1, 0, 0);
					v13 = g23;
					// branch -> 0x3bc38
				} else {
					v13 = v12;
				}
			}
			// 0x3bc38
			v14 = v13;
			if (*(int32_t *)(v13 - 0x4f2c) != 0) {
				// 0x3bc44
				if (*(int32_t *)(v13 - 0x4f34) != 0) {
					// 0x3bc50
					function_3ad68(14, 14, 1, 1, 0, 0);
					v14 = g23;
					// branch -> 0x3bc6c
				} else {
					v14 = v13;
				}
			}
			// 0x3bc6c
			if (*(int32_t *)(v14 - 0x4f2c) == 0) {
				// 0x3bc78
				if (*(int32_t *)(v14 - 0x4f34) == 0) {
					// 0x3bc84
					function_3ad68(14, 14, 0, 0, 0, 0);
					v15 = g23;
					// branch -> 0x3bca0
				} else {
					v15 = v14;
				}
			} else {
				v15 = v14;
			}
		}
		// 0x3bca0
		v16 = v15;
		if (*(int32_t *)(v15 - 0x4f34) != 0) {
			// 0x3bcac
			function_3ad68(14, 28, 1, 0, 0, 0);
			v16 = g23;
			// branch -> 0x3bcc8
		}
		// 0x3bcc8
		v17 = v16;
		if (*(int32_t *)(v16 - 0x4f2c) != 0) {
			// 0x3bcd4
			if (*(int32_t *)(v16 - 0x4f30) != 0) {
				// 0x3bce0
				function_3aff4(18, 12, 18, 14);
				v17 = g23;
				// branch -> 0x3bcf4
			} else {
				v17 = v16;
			}
		}
		// 0x3bcf4
		v18 = v17;
		if (*(int32_t *)(v17 - 0x4f30) != 0) {
			// 0x3bd00
			if (*(int32_t *)(v17 - 0x4f34) != 0) {
				// 0x3bd0c
				function_3aff4(18, 26, 18, 28);
				v18 = g23;
				// branch -> 0x3bd20
			} else {
				v18 = v17;
			}
		}
		// 0x3bd20
		v19 = v18;
		if (*(int32_t *)(v18 - 0x4f2c) != 0) {
			// 0x3bd2c
			if (*(int32_t *)(v18 - 0x4f30) == 0) {
				// 0x3bd38
				if (*(int32_t *)(v18 - 0x4f34) != 0) {
					// 0x3bd44
					function_3aff4(18, 12, 18, 28);
					v19 = g23;
					// branch -> 0x3bd58
				} else {
					v19 = v18;
				}
			} else {
				v19 = v18;
			}
		}
		// 0x3bd58
		result = *(int32_t *)(v19 - 0x7524);
		if (*(int32_t *)result == 0) {
			// 0x3c018
			g10 = v1;
			return result;
		}
		// 0x3bd68
		v32 = (int32_t *)(v19 - 0x4f2c);
		if (*v32 == 0) {
			// 0x3bd74
			if (*(int32_t *)(v19 - 0x4f30) == 0) {
				// 0x3bd80
				if (*(int32_t *)(v19 - 0x4f34) == 0) {
					// 0x3bd8c
					g36 = 1;
					v31 = result;
					if (*(int32_t *)(v19 - 0x4f20) == 0) {
						// 0x3bd9c
						if (*(int32_t *)(v19 - 0x4f24) != 0) {
							// 0x3bda8
							if (*(int32_t *)(v19 - 0x4f28) != 0) {
								// 0x3bdb4
								g37 = 2;
								v33 = random(0);
								if (v33 != 0) {
									// 0x3bdc8
									g36 = 2;
									v31 = v33;
									// branch -> 0x3bdcc
								} else {
									v31 = 0;
								}
							} else {
								v31 = result;
							}
						} else {
							v31 = result;
						}
					}
					// 0x3bdcc
					v20 = g23;
					v30 = v31;
					if (*(int32_t *)(v20 - 0x4f20) != 0) {
						// 0x3bdd8
						if (*(int32_t *)(v20 - 0x4f24) != 0) {
							// 0x3bde4
							if (*(int32_t *)(v20 - 0x4f28) == 0) {
								// 0x3bdf0
								g37 = 2;
								v34 = random(0);
								if (v34 != 0) {
									// 0x3be04
									g36 = 0;
									v30 = v34;
									// branch -> 0x3be08
								} else {
									v30 = 0;
								}
							} else {
								v30 = v31;
							}
						} else {
							v30 = v31;
						}
					}
					// 0x3be08
					v21 = g23;
					if (*(int32_t *)(v21 - 0x4f20) != 0) {
						// 0x3be14
						if (*(int32_t *)(v21 - 0x4f24) == 0) {
							// 0x3be20
							if (*(int32_t *)(v21 - 0x4f28) != 0) {
								// 0x3be2c
								g37 = 2;
								v35 = random(0);
								if (v35 == 0) {
									// 0x3be48
									g36 = 2;
									v29 = 0;
									// branch -> 0x3be4c
								} else {
									// 0x3be40
									g36 = 0;
									v29 = v35;
									// branch -> 0x3be4c
								}
								// 0x3be4c
								v22 = g23;
								if (*(int32_t *)(v22 - 0x4f20) != 0) {
									// 0x3be58
									if (*(int32_t *)(v22 - 0x4f24) != 0) {
										// 0x3be64
										if (*(int32_t *)(v22 - 0x4f28) != 0) {
											// 0x3be70
											g37 = 3;
											v36 = random(0);
											g36 = v36;
											v28 = v36;
											v23 = v36;
											// branch -> 0x3be80
											// 0x3be80
											if (v23 == 1) {
												// 0x3beb4
												result2 = function_3b8cc(16, 16);
												// branch -> 0x3c018
												// 0x3c018
												g10 = v1;
												return result2;
											}
											// 0x3be88
											if (v23 > 1) {
												// 0x3be98
												if (v23 == 2) {
													// 0x3bec4
													result3 = function_3b8cc(30, 16);
													// branch -> 0x3c018
												} else {
													result3 = v28;
												}
											} else {
												// 0x3be8c
												if (v23 > -1) {
													// 0x3bea4
													result3 = function_3b8cc(2, 16);
													// branch -> 0x3c018
												} else {
													result3 = v28;
												}
											}
											// 0x3c018
											g10 = v1;
											return result3;
										}
									}
								}
								// 0x3be80
								v28 = v29;
								v23 = g36;
								// branch -> 0x3be80
								// 0x3be80
								if (v23 == 1) {
									// 0x3beb4
									result2 = function_3b8cc(16, 16);
									// branch -> 0x3c018
									// 0x3c018
									g10 = v1;
									return result2;
								}
								// 0x3be88
								if (v23 > 1) {
									// 0x3be98
									if (v23 == 2) {
										// 0x3bec4
										result3 = function_3b8cc(30, 16);
										// branch -> 0x3c018
									} else {
										result3 = v28;
									}
								} else {
									// 0x3be8c
									if (v23 > -1) {
										// 0x3bea4
										result3 = function_3b8cc(2, 16);
										// branch -> 0x3c018
									} else {
										result3 = v28;
									}
								}
								// 0x3c018
								g10 = v1;
								return result3;
							}
						}
					}
					// 0x3be4c
					v22 = g23;
					if (*(int32_t *)(v22 - 0x4f20) != 0) {
						// 0x3be58
						if (*(int32_t *)(v22 - 0x4f24) != 0) {
							// 0x3be64
							if (*(int32_t *)(v22 - 0x4f28) != 0) {
								// 0x3be70
								g37 = 3;
								v36 = random(0);
								g36 = v36;
								v28 = v36;
								v23 = v36;
								// branch -> 0x3be80
								// 0x3be80
								if (v23 == 1) {
									// 0x3beb4
									result2 = function_3b8cc(16, 16);
									// branch -> 0x3c018
									// 0x3c018
									g10 = v1;
									return result2;
								}
								// 0x3be88
								if (v23 > 1) {
									// 0x3be98
									if (v23 == 2) {
										// 0x3bec4
										result3 = function_3b8cc(30, 16);
										// branch -> 0x3c018
									} else {
										result3 = v28;
									}
								} else {
									// 0x3be8c
									if (v23 > -1) {
										// 0x3bea4
										result3 = function_3b8cc(2, 16);
										// branch -> 0x3c018
									} else {
										result3 = v28;
									}
								}
								// 0x3c018
								g10 = v1;
								return result3;
							}
						}
					}
					// 0x3be80
					v28 = v30;
					v23 = g36;
					// branch -> 0x3be80
					// 0x3be80
					if (v23 == 1) {
						// 0x3beb4
						result2 = function_3b8cc(16, 16);
						// branch -> 0x3c018
						// 0x3c018
						g10 = v1;
						return result2;
					}
					// 0x3be88
					if (v23 > 1) {
						// 0x3be98
						if (v23 == 2) {
							// 0x3bec4
							result3 = function_3b8cc(30, 16);
							// branch -> 0x3c018
						} else {
							result3 = v28;
						}
					} else {
						// 0x3be8c
						if (v23 > -1) {
							// 0x3bea4
							result3 = function_3b8cc(2, 16);
							// branch -> 0x3c018
						} else {
							result3 = v28;
						}
					}
					// 0x3c018
					g10 = v1;
					return result3;
				}
			}
		}
		// 0x3bed4
		g36 = 1;
		int32_t v38 = result; // 0x3c02823
		if (*v32 == 0) {
			// 0x3bee4
			if (*(int32_t *)(v19 - 0x4f30) != 0) {
				// 0x3bef0
				if (*(int32_t *)(v19 - 0x4f34) != 0) {
					// 0x3befc
					g37 = 2;
					int32_t v39 = random(0); // 0x3bf04
					if (v39 != 0) {
						// 0x3bf10
						g36 = 2;
						v38 = v39;
						// branch -> 0x3bf14
					} else {
						v38 = 0;
					}
				} else {
					v38 = result;
				}
			} else {
				v38 = result;
			}
		}
		// 0x3bf14
		v24 = g23;
		int32_t v40 = v38; // 0x3c02822
		if (*(int32_t *)(v24 - 0x4f2c) != 0) {
			// 0x3bf20
			if (*(int32_t *)(v24 - 0x4f30) != 0) {
				// 0x3bf2c
				if (*(int32_t *)(v24 - 0x4f34) == 0) {
					// 0x3bf38
					g37 = 2;
					int32_t v41 = random(0); // 0x3bf40
					if (v41 != 0) {
						// 0x3bf4c
						g36 = 0;
						v40 = v41;
						// branch -> 0x3bf50
					} else {
						v40 = 0;
					}
				} else {
					v40 = v38;
				}
			} else {
				v40 = v38;
			}
		}
		// 0x3bf50
		v25 = g23;
		int32_t v42;     // 0x3c02820
		int32_t result4; // 0x3c004
		if (*(int32_t *)(v25 - 0x4f2c) != 0) {
			// 0x3bf5c
			if (*(int32_t *)(v25 - 0x4f30) == 0) {
				// 0x3bf68
				if (*(int32_t *)(v25 - 0x4f34) != 0) {
					// 0x3bf74
					g37 = 2;
					int32_t v43 = random(0); // 0x3bf7c
					int32_t v44;             // 0x3c02821
					if (v43 == 0) {
						// 0x3bf90
						g36 = 2;
						v44 = 0;
						// branch -> 0x3bf94
					} else {
						// 0x3bf88
						g36 = 0;
						v44 = v43;
						// branch -> 0x3bf94
					}
					// 0x3bf94
					v26 = g23;
					if (*(int32_t *)(v26 - 0x4f2c) != 0) {
						// 0x3bfa0
						if (*(int32_t *)(v26 - 0x4f30) != 0) {
							// 0x3bfac
							if (*(int32_t *)(v26 - 0x4f34) != 0) {
								// 0x3bfb8
								g37 = 3;
								v37 = random(0);
								g36 = v37;
								v42 = v37;
								v27 = v37;
								// branch -> 0x3bfc8
								// 0x3bfc8
								if (v27 == 1) {
									// 0x3bffc
									result4 = function_3b8cc(16, 16);
									// branch -> 0x3c018
									// 0x3c018
									g10 = v1;
									return result4;
								}
								// 0x3bfd0
								if (v27 > 1) {
									// 0x3bfe0
									if (v27 == 2) {
										// 0x3c00c
										result3 = function_3b8cc(16, 30);
										// branch -> 0x3c018
									} else {
										result3 = v42;
									}
								} else {
									// 0x3bfd4
									if (v27 > -1) {
										// 0x3bfec
										result3 = function_3b8cc(16, 2);
										// branch -> 0x3c018
									} else {
										result3 = v42;
									}
								}
								// 0x3c018
								g10 = v1;
								return result3;
							}
						}
					}
					// 0x3bfc8
					v42 = v44;
					v27 = g36;
					// branch -> 0x3bfc8
					// 0x3bfc8
					if (v27 == 1) {
						// 0x3bffc
						result4 = function_3b8cc(16, 16);
						// branch -> 0x3c018
						// 0x3c018
						g10 = v1;
						return result4;
					}
					// 0x3bfd0
					if (v27 > 1) {
						// 0x3bfe0
						if (v27 == 2) {
							// 0x3c00c
							result3 = function_3b8cc(16, 30);
							// branch -> 0x3c018
						} else {
							result3 = v42;
						}
					} else {
						// 0x3bfd4
						if (v27 > -1) {
							// 0x3bfec
							result3 = function_3b8cc(16, 2);
							// branch -> 0x3c018
						} else {
							result3 = v42;
						}
					}
					// 0x3c018
					g10 = v1;
					return result3;
				}
			}
		}
		// 0x3bf94
		v26 = g23;
		if (*(int32_t *)(v26 - 0x4f2c) != 0) {
			// 0x3bfa0
			if (*(int32_t *)(v26 - 0x4f30) != 0) {
				// 0x3bfac
				if (*(int32_t *)(v26 - 0x4f34) != 0) {
					// 0x3bfb8
					g37 = 3;
					v37 = random(0);
					g36 = v37;
					v42 = v37;
					v27 = v37;
					// branch -> 0x3bfc8
					// 0x3bfc8
					if (v27 == 1) {
						// 0x3bffc
						result4 = function_3b8cc(16, 16);
						// branch -> 0x3c018
						// 0x3c018
						g10 = v1;
						return result4;
					}
					// 0x3bfd0
					if (v27 > 1) {
						// 0x3bfe0
						if (v27 == 2) {
							// 0x3c00c
							result3 = function_3b8cc(16, 30);
							// branch -> 0x3c018
						} else {
							result3 = v42;
						}
					} else {
						// 0x3bfd4
						if (v27 > -1) {
							// 0x3bfec
							result3 = function_3b8cc(16, 2);
							// branch -> 0x3c018
						} else {
							result3 = v42;
						}
					}
					// 0x3c018
					g10 = v1;
					return result3;
				}
			}
		}
		// 0x3bfc8
		v42 = v40;
		v27 = g36;
		// branch -> 0x3bfc8
		// 0x3bfc8
		if (v27 == 1) {
			// 0x3bffc
			result4 = function_3b8cc(16, 16);
			// branch -> 0x3c018
			// 0x3c018
			g10 = v1;
			return result4;
		}
		// 0x3bfd0
		if (v27 > 1) {
			// 0x3bfe0
			if (v27 == 2) {
				// 0x3c00c
				result3 = function_3b8cc(16, 30);
				// branch -> 0x3c018
			} else {
				result3 = v42;
			}
		} else {
			// 0x3bfd4
			if (v27 > -1) {
				// 0x3bfec
				result3 = function_3b8cc(16, 2);
				// branch -> 0x3c018
			} else {
				result3 = v42;
			}
		}
		// 0x3c018
		g10 = v1;
		return result3;
	}
	// 0x3bb38
	v9 = v8;
	if (*(int32_t *)(v8 - 0x4f24) != 0) {
		// 0x3bb44
		if (*(int32_t *)(v8 - 0x4f28) != 0) {
			// 0x3bb50
			function_3aff4(26, 18, 28, 18);
			v9 = g23;
			// branch -> 0x3bb64
		} else {
			v9 = v8;
		}
		// 0x3bb64
		v10 = v9;
		if (*(int32_t *)(v9 - 0x4f20) != 0) {
			// 0x3bb70
			if (*(int32_t *)(v9 - 0x4f24) == 0) {
				// 0x3bb7c
				if (*(int32_t *)(v9 - 0x4f28) != 0) {
					// 0x3bb88
					function_3aff4(12, 18, 28, 18);
					v10 = g23;
					// branch -> 0x3bb9c
				} else {
					v10 = v9;
				}
			} else {
				v10 = v9;
			}
		}
		// 0x3bb9c
		v11 = v10;
		if (*(int32_t *)(v10 - 0x4f2c) != 0) {
			// 0x3bba8
			function_3ad68(14, 0, 0, 1, 0, 0);
			v11 = g23;
			// branch -> 0x3bbc4
		}
		// 0x3bbc4
		v15 = v11;
		if (*(int32_t *)(v11 - 0x4f30) != 0) {
			// 0x3bbd0
			v12 = v11;
			if (*(int32_t *)(v11 - 0x4f2c) != 0) {
				// 0x3bbdc
				if (*(int32_t *)(v11 - 0x4f34) == 0) {
					// 0x3bbe8
					function_3ad68(14, 14, 1, 0, 0, 0);
					v12 = g23;
					// branch -> 0x3bc04
				} else {
					v12 = v11;
				}
			}
			// 0x3bc04
			v13 = v12;
			if (*(int32_t *)(v12 - 0x4f2c) == 0) {
				// 0x3bc10
				if (*(int32_t *)(v12 - 0x4f34) != 0) {
					// 0x3bc1c
					function_3ad68(14, 14, 0, 1, 0, 0);
					v13 = g23;
					// branch -> 0x3bc38
				} else {
					v13 = v12;
				}
			}
			// 0x3bc38
			v14 = v13;
			if (*(int32_t *)(v13 - 0x4f2c) != 0) {
				// 0x3bc44
				if (*(int32_t *)(v13 - 0x4f34) != 0) {
					// 0x3bc50
					function_3ad68(14, 14, 1, 1, 0, 0);
					v14 = g23;
					// branch -> 0x3bc6c
				} else {
					v14 = v13;
				}
			}
			// 0x3bc6c
			if (*(int32_t *)(v14 - 0x4f2c) == 0) {
				// 0x3bc78
				if (*(int32_t *)(v14 - 0x4f34) == 0) {
					// 0x3bc84
					function_3ad68(14, 14, 0, 0, 0, 0);
					v15 = g23;
					// branch -> 0x3bca0
				} else {
					v15 = v14;
				}
			} else {
				v15 = v14;
			}
		}
		// 0x3bca0
		v16 = v15;
		if (*(int32_t *)(v15 - 0x4f34) != 0) {
			// 0x3bcac
			function_3ad68(14, 28, 1, 0, 0, 0);
			v16 = g23;
			// branch -> 0x3bcc8
		}
		// 0x3bcc8
		v17 = v16;
		if (*(int32_t *)(v16 - 0x4f2c) != 0) {
			// 0x3bcd4
			if (*(int32_t *)(v16 - 0x4f30) != 0) {
				// 0x3bce0
				function_3aff4(18, 12, 18, 14);
				v17 = g23;
				// branch -> 0x3bcf4
			} else {
				v17 = v16;
			}
		}
		// 0x3bcf4
		v18 = v17;
		if (*(int32_t *)(v17 - 0x4f30) != 0) {
			// 0x3bd00
			if (*(int32_t *)(v17 - 0x4f34) != 0) {
				// 0x3bd0c
				function_3aff4(18, 26, 18, 28);
				v18 = g23;
				// branch -> 0x3bd20
			} else {
				v18 = v17;
			}
		}
		// 0x3bd20
		v19 = v18;
		if (*(int32_t *)(v18 - 0x4f2c) != 0) {
			// 0x3bd2c
			if (*(int32_t *)(v18 - 0x4f30) == 0) {
				// 0x3bd38
				if (*(int32_t *)(v18 - 0x4f34) != 0) {
					// 0x3bd44
					function_3aff4(18, 12, 18, 28);
					v19 = g23;
					// branch -> 0x3bd58
				} else {
					v19 = v18;
				}
			} else {
				v19 = v18;
			}
		}
		// 0x3bd58
		result = *(int32_t *)(v19 - 0x7524);
		if (*(int32_t *)result == 0) {
			// 0x3c018
			g10 = v1;
			return result;
		}
		// 0x3bd68
		v32 = (int32_t *)(v19 - 0x4f2c);
		if (*v32 == 0) {
			// 0x3bd74
			if (*(int32_t *)(v19 - 0x4f30) == 0) {
				// 0x3bd80
				if (*(int32_t *)(v19 - 0x4f34) == 0) {
					// 0x3bd8c
					g36 = 1;
					v31 = result;
					if (*(int32_t *)(v19 - 0x4f20) == 0) {
						// 0x3bd9c
						if (*(int32_t *)(v19 - 0x4f24) != 0) {
							// 0x3bda8
							if (*(int32_t *)(v19 - 0x4f28) != 0) {
								// 0x3bdb4
								g37 = 2;
								v33 = random(0);
								if (v33 != 0) {
									// 0x3bdc8
									g36 = 2;
									v31 = v33;
									// branch -> 0x3bdcc
								} else {
									v31 = 0;
								}
							} else {
								v31 = result;
							}
						} else {
							v31 = result;
						}
					}
					// 0x3bdcc
					v20 = g23;
					v30 = v31;
					if (*(int32_t *)(v20 - 0x4f20) != 0) {
						// 0x3bdd8
						if (*(int32_t *)(v20 - 0x4f24) != 0) {
							// 0x3bde4
							if (*(int32_t *)(v20 - 0x4f28) == 0) {
								// 0x3bdf0
								g37 = 2;
								v34 = random(0);
								if (v34 != 0) {
									// 0x3be04
									g36 = 0;
									v30 = v34;
									// branch -> 0x3be08
								} else {
									v30 = 0;
								}
							} else {
								v30 = v31;
							}
						} else {
							v30 = v31;
						}
					}
					// 0x3be08
					v21 = g23;
					if (*(int32_t *)(v21 - 0x4f20) != 0) {
						// 0x3be14
						if (*(int32_t *)(v21 - 0x4f24) == 0) {
							// 0x3be20
							if (*(int32_t *)(v21 - 0x4f28) != 0) {
								// 0x3be2c
								g37 = 2;
								v35 = random(0);
								if (v35 == 0) {
									// 0x3be48
									g36 = 2;
									v29 = 0;
									// branch -> 0x3be4c
								} else {
									// 0x3be40
									g36 = 0;
									v29 = v35;
									// branch -> 0x3be4c
								}
								// 0x3be4c
								v22 = g23;
								if (*(int32_t *)(v22 - 0x4f20) != 0) {
									// 0x3be58
									if (*(int32_t *)(v22 - 0x4f24) != 0) {
										// 0x3be64
										if (*(int32_t *)(v22 - 0x4f28) != 0) {
											// 0x3be70
											g37 = 3;
											v36 = random(0);
											g36 = v36;
											v28 = v36;
											v23 = v36;
											// branch -> 0x3be80
											// 0x3be80
											if (v23 == 1) {
												// 0x3beb4
												result2 = function_3b8cc(16, 16);
												// branch -> 0x3c018
												// 0x3c018
												g10 = v1;
												return result2;
											}
											// 0x3be88
											if (v23 > 1) {
												// 0x3be98
												if (v23 == 2) {
													// 0x3bec4
													result3 = function_3b8cc(30, 16);
													// branch -> 0x3c018
												} else {
													result3 = v28;
												}
											} else {
												// 0x3be8c
												if (v23 > -1) {
													// 0x3bea4
													result3 = function_3b8cc(2, 16);
													// branch -> 0x3c018
												} else {
													result3 = v28;
												}
											}
											// 0x3c018
											g10 = v1;
											return result3;
										}
									}
								}
								// 0x3be80
								v28 = v29;
								v23 = g36;
								// branch -> 0x3be80
								// 0x3be80
								if (v23 == 1) {
									// 0x3beb4
									result2 = function_3b8cc(16, 16);
									// branch -> 0x3c018
									// 0x3c018
									g10 = v1;
									return result2;
								}
								// 0x3be88
								if (v23 > 1) {
									// 0x3be98
									if (v23 == 2) {
										// 0x3bec4
										result3 = function_3b8cc(30, 16);
										// branch -> 0x3c018
									} else {
										result3 = v28;
									}
								} else {
									// 0x3be8c
									if (v23 > -1) {
										// 0x3bea4
										result3 = function_3b8cc(2, 16);
										// branch -> 0x3c018
									} else {
										result3 = v28;
									}
								}
								// 0x3c018
								g10 = v1;
								return result3;
							}
						}
					}
					// 0x3be4c
					v22 = g23;
					if (*(int32_t *)(v22 - 0x4f20) != 0) {
						// 0x3be58
						if (*(int32_t *)(v22 - 0x4f24) != 0) {
							// 0x3be64
							if (*(int32_t *)(v22 - 0x4f28) != 0) {
								// 0x3be70
								g37 = 3;
								v36 = random(0);
								g36 = v36;
								v28 = v36;
								v23 = v36;
								// branch -> 0x3be80
								// 0x3be80
								if (v23 == 1) {
									// 0x3beb4
									result2 = function_3b8cc(16, 16);
									// branch -> 0x3c018
									// 0x3c018
									g10 = v1;
									return result2;
								}
								// 0x3be88
								if (v23 > 1) {
									// 0x3be98
									if (v23 == 2) {
										// 0x3bec4
										result3 = function_3b8cc(30, 16);
										// branch -> 0x3c018
									} else {
										result3 = v28;
									}
								} else {
									// 0x3be8c
									if (v23 > -1) {
										// 0x3bea4
										result3 = function_3b8cc(2, 16);
										// branch -> 0x3c018
									} else {
										result3 = v28;
									}
								}
								// 0x3c018
								g10 = v1;
								return result3;
							}
						}
					}
					// 0x3be80
					v28 = v30;
					v23 = g36;
					// branch -> 0x3be80
					// 0x3be80
					if (v23 != 1) {
						// 0x3be88
						if (v23 > 1) {
							// 0x3be98
							if (v23 == 2) {
								// 0x3bec4
								result3 = function_3b8cc(30, 16);
								// branch -> 0x3c018
							} else {
								result3 = v28;
							}
						} else {
							// 0x3be8c
							if (v23 > -1) {
								// 0x3bea4
								result3 = function_3b8cc(2, 16);
								// branch -> 0x3c018
							} else {
								result3 = v28;
							}
						}
						// 0x3c018
						g10 = v1;
						return result3;
					}
					// 0x3beb4
					function_3b8cc(16, 16);
					// branch -> 0x3c018
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bed4
		g36 = 1;
		if (*v32 == 0) {
			// 0x3bee4
			if (*(int32_t *)(v19 - 0x4f30) != 0) {
				// 0x3bef0
				if (*(int32_t *)(v19 - 0x4f34) != 0) {
					// 0x3befc
					g37 = 2;
					if (random(0) != 0) {
						// 0x3bf10
						g36 = 2;
						// branch -> 0x3bf14
					}
				}
			}
		}
		// 0x3bf14
		v24 = g23;
		if (*(int32_t *)(v24 - 0x4f2c) != 0) {
			// 0x3bf20
			if (*(int32_t *)(v24 - 0x4f30) != 0) {
				// 0x3bf2c
				if (*(int32_t *)(v24 - 0x4f34) == 0) {
					// 0x3bf38
					g37 = 2;
					if (random(0) != 0) {
						// 0x3bf4c
						g36 = 0;
						// branch -> 0x3bf50
					}
				}
			}
		}
		// 0x3bf50
		v25 = g23;
		if (*(int32_t *)(v25 - 0x4f2c) != 0) {
			// 0x3bf5c
			if (*(int32_t *)(v25 - 0x4f30) == 0) {
				// 0x3bf68
				if (*(int32_t *)(v25 - 0x4f34) != 0) {
					// 0x3bf74
					g37 = 2;
					if (random(0) == 0) {
						// 0x3bf90
						g36 = 2;
						// branch -> 0x3bf94
					} else {
						// 0x3bf88
						g36 = 0;
						// branch -> 0x3bf94
					}
					// 0x3bf94
					v26 = g23;
					if (*(int32_t *)(v26 - 0x4f2c) != 0) {
						// 0x3bfa0
						if (*(int32_t *)(v26 - 0x4f30) != 0) {
							// 0x3bfac
							if (*(int32_t *)(v26 - 0x4f34) != 0) {
								// 0x3bfb8
								g37 = 3;
								v37 = random(0);
								g36 = v37;
								v27 = v37;
								// branch -> 0x3bfc8
								// 0x3bfc8
								if (v27 == 1) {
									// 0x3bffc
									function_3b8cc(16, 16);
									// branch -> 0x3c018
								} else {
									// 0x3bfd0
									if (v27 > 1) {
										// 0x3bfe0
										if (v27 == 2) {
											// 0x3c00c
											function_3b8cc(16, 30);
											// branch -> 0x3c018
										}
									} else {
										// 0x3bfd4
										if (v27 > -1) {
											// 0x3bfec
											function_3b8cc(16, 2);
											// branch -> 0x3c018
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// 0x3bfc8
					v27 = g36;
					// branch -> 0x3bfc8
					// 0x3bfc8
					if (v27 == 1) {
						// 0x3bffc
						function_3b8cc(16, 16);
						// branch -> 0x3c018
					} else {
						// 0x3bfd0
						if (v27 > 1) {
							// 0x3bfe0
							if (v27 == 2) {
								// 0x3c00c
								function_3b8cc(16, 30);
								// branch -> 0x3c018
							}
						} else {
							// 0x3bfd4
							if (v27 > -1) {
								// 0x3bfec
								function_3b8cc(16, 2);
								// branch -> 0x3c018
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bf94
		v26 = g23;
		if (*(int32_t *)(v26 - 0x4f2c) != 0) {
			// 0x3bfa0
			if (*(int32_t *)(v26 - 0x4f30) != 0) {
				// 0x3bfac
				if (*(int32_t *)(v26 - 0x4f34) != 0) {
					// 0x3bfb8
					g37 = 3;
					v37 = random(0);
					g36 = v37;
					v27 = v37;
					// branch -> 0x3bfc8
					// 0x3bfc8
					if (v27 == 1) {
						// 0x3bffc
						function_3b8cc(16, 16);
						// branch -> 0x3c018
					} else {
						// 0x3bfd0
						if (v27 > 1) {
							// 0x3bfe0
							if (v27 == 2) {
								// 0x3c00c
								function_3b8cc(16, 30);
								// branch -> 0x3c018
							}
						} else {
							// 0x3bfd4
							if (v27 > -1) {
								// 0x3bfec
								function_3b8cc(16, 2);
								// branch -> 0x3c018
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bfc8
		v27 = g36;
		// branch -> 0x3bfc8
		// 0x3bfc8
		if (v27 == 1) {
			// 0x3bffc
			function_3b8cc(16, 16);
			// branch -> 0x3c018
		} else {
			// 0x3bfd0
			if (v27 > 1) {
				// 0x3bfe0
				if (v27 == 2) {
					// 0x3c00c
					function_3b8cc(16, 30);
					// branch -> 0x3c018
				}
			} else {
				// 0x3bfd4
				if (v27 > -1) {
					// 0x3bfec
					function_3b8cc(16, 2);
					// branch -> 0x3c018
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x3bb64
	v10 = v9;
	if (*(int32_t *)(v9 - 0x4f20) != 0) {
		// 0x3bb70
		if (*(int32_t *)(v9 - 0x4f24) == 0) {
			// 0x3bb7c
			if (*(int32_t *)(v9 - 0x4f28) != 0) {
				// 0x3bb88
				function_3aff4(12, 18, 28, 18);
				v10 = g23;
				// branch -> 0x3bb9c
			} else {
				v10 = v9;
			}
			// 0x3bb9c
			v11 = v10;
			if (*(int32_t *)(v10 - 0x4f2c) != 0) {
				// 0x3bba8
				function_3ad68(14, 0, 0, 1, 0, 0);
				v11 = g23;
				// branch -> 0x3bbc4
			}
			// 0x3bbc4
			v15 = v11;
			if (*(int32_t *)(v11 - 0x4f30) != 0) {
				// 0x3bbd0
				v12 = v11;
				if (*(int32_t *)(v11 - 0x4f2c) != 0) {
					// 0x3bbdc
					if (*(int32_t *)(v11 - 0x4f34) == 0) {
						// 0x3bbe8
						function_3ad68(14, 14, 1, 0, 0, 0);
						v12 = g23;
						// branch -> 0x3bc04
					} else {
						v12 = v11;
					}
				}
				// 0x3bc04
				v13 = v12;
				if (*(int32_t *)(v12 - 0x4f2c) == 0) {
					// 0x3bc10
					if (*(int32_t *)(v12 - 0x4f34) != 0) {
						// 0x3bc1c
						function_3ad68(14, 14, 0, 1, 0, 0);
						v13 = g23;
						// branch -> 0x3bc38
					} else {
						v13 = v12;
					}
				}
				// 0x3bc38
				v14 = v13;
				if (*(int32_t *)(v13 - 0x4f2c) != 0) {
					// 0x3bc44
					if (*(int32_t *)(v13 - 0x4f34) != 0) {
						// 0x3bc50
						function_3ad68(14, 14, 1, 1, 0, 0);
						v14 = g23;
						// branch -> 0x3bc6c
					} else {
						v14 = v13;
					}
				}
				// 0x3bc6c
				if (*(int32_t *)(v14 - 0x4f2c) == 0) {
					// 0x3bc78
					if (*(int32_t *)(v14 - 0x4f34) == 0) {
						// 0x3bc84
						function_3ad68(14, 14, 0, 0, 0, 0);
						v15 = g23;
						// branch -> 0x3bca0
					} else {
						v15 = v14;
					}
				} else {
					v15 = v14;
				}
			}
			// 0x3bca0
			v16 = v15;
			if (*(int32_t *)(v15 - 0x4f34) != 0) {
				// 0x3bcac
				function_3ad68(14, 28, 1, 0, 0, 0);
				v16 = g23;
				// branch -> 0x3bcc8
			}
			// 0x3bcc8
			v17 = v16;
			if (*(int32_t *)(v16 - 0x4f2c) != 0) {
				// 0x3bcd4
				if (*(int32_t *)(v16 - 0x4f30) != 0) {
					// 0x3bce0
					function_3aff4(18, 12, 18, 14);
					v17 = g23;
					// branch -> 0x3bcf4
				} else {
					v17 = v16;
				}
			}
			// 0x3bcf4
			v18 = v17;
			if (*(int32_t *)(v17 - 0x4f30) != 0) {
				// 0x3bd00
				if (*(int32_t *)(v17 - 0x4f34) != 0) {
					// 0x3bd0c
					function_3aff4(18, 26, 18, 28);
					v18 = g23;
					// branch -> 0x3bd20
				} else {
					v18 = v17;
				}
			}
			// 0x3bd20
			v19 = v18;
			if (*(int32_t *)(v18 - 0x4f2c) != 0) {
				// 0x3bd2c
				if (*(int32_t *)(v18 - 0x4f30) == 0) {
					// 0x3bd38
					if (*(int32_t *)(v18 - 0x4f34) != 0) {
						// 0x3bd44
						function_3aff4(18, 12, 18, 28);
						v19 = g23;
						// branch -> 0x3bd58
					} else {
						v19 = v18;
					}
				} else {
					v19 = v18;
				}
			}
			// 0x3bd58
			if (*(int32_t *)*(int32_t *)(v19 - 0x7524) == 0) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x3bd68
			v32 = (int32_t *)(v19 - 0x4f2c);
			if (*v32 == 0) {
				// 0x3bd74
				if (*(int32_t *)(v19 - 0x4f30) == 0) {
					// 0x3bd80
					if (*(int32_t *)(v19 - 0x4f34) == 0) {
						// 0x3bd8c
						g36 = 1;
						if (*(int32_t *)(v19 - 0x4f20) == 0) {
							// 0x3bd9c
							if (*(int32_t *)(v19 - 0x4f24) != 0) {
								// 0x3bda8
								if (*(int32_t *)(v19 - 0x4f28) != 0) {
									// 0x3bdb4
									g37 = 2;
									if (random(0) != 0) {
										// 0x3bdc8
										g36 = 2;
										// branch -> 0x3bdcc
									}
								}
							}
						}
						// 0x3bdcc
						v20 = g23;
						if (*(int32_t *)(v20 - 0x4f20) != 0) {
							// 0x3bdd8
							if (*(int32_t *)(v20 - 0x4f24) != 0) {
								// 0x3bde4
								if (*(int32_t *)(v20 - 0x4f28) == 0) {
									// 0x3bdf0
									g37 = 2;
									if (random(0) != 0) {
										// 0x3be04
										g36 = 0;
										// branch -> 0x3be08
									}
								}
							}
						}
						// 0x3be08
						v21 = g23;
						if (*(int32_t *)(v21 - 0x4f20) != 0) {
							// 0x3be14
							if (*(int32_t *)(v21 - 0x4f24) == 0) {
								// 0x3be20
								if (*(int32_t *)(v21 - 0x4f28) != 0) {
									// 0x3be2c
									g37 = 2;
									if (random(0) == 0) {
										// 0x3be48
										g36 = 2;
										// branch -> 0x3be4c
									} else {
										// 0x3be40
										g36 = 0;
										// branch -> 0x3be4c
									}
									// 0x3be4c
									v22 = g23;
									if (*(int32_t *)(v22 - 0x4f20) != 0) {
										// 0x3be58
										if (*(int32_t *)(v22 - 0x4f24) != 0) {
											// 0x3be64
											if (*(int32_t *)(v22 - 0x4f28) != 0) {
												// 0x3be70
												g37 = 3;
												v36 = random(0);
												g36 = v36;
												v23 = v36;
												// branch -> 0x3be80
												// 0x3be80
												if (v23 == 1) {
													// 0x3beb4
													function_3b8cc(16, 16);
													// branch -> 0x3c018
												} else {
													// 0x3be88
													if (v23 > 1) {
														// 0x3be98
														if (v23 == 2) {
															// 0x3bec4
															function_3b8cc(30, 16);
															// branch -> 0x3c018
														}
													} else {
														// 0x3be8c
														if (v23 > -1) {
															// 0x3bea4
															function_3b8cc(2, 16);
															// branch -> 0x3c018
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// 0x3be80
									v23 = g36;
									// branch -> 0x3be80
									// 0x3be80
									if (v23 == 1) {
										// 0x3beb4
										function_3b8cc(16, 16);
										// branch -> 0x3c018
									} else {
										// 0x3be88
										if (v23 > 1) {
											// 0x3be98
											if (v23 == 2) {
												// 0x3bec4
												function_3b8cc(30, 16);
												// branch -> 0x3c018
											}
										} else {
											// 0x3be8c
											if (v23 > -1) {
												// 0x3bea4
												function_3b8cc(2, 16);
												// branch -> 0x3c018
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// 0x3be4c
						v22 = g23;
						if (*(int32_t *)(v22 - 0x4f20) != 0) {
							// 0x3be58
							if (*(int32_t *)(v22 - 0x4f24) != 0) {
								// 0x3be64
								if (*(int32_t *)(v22 - 0x4f28) != 0) {
									// 0x3be70
									g37 = 3;
									v36 = random(0);
									g36 = v36;
									v23 = v36;
									// branch -> 0x3be80
									// 0x3be80
									if (v23 == 1) {
										// 0x3beb4
										function_3b8cc(16, 16);
										// branch -> 0x3c018
									} else {
										// 0x3be88
										if (v23 > 1) {
											// 0x3be98
											if (v23 == 2) {
												// 0x3bec4
												function_3b8cc(30, 16);
												// branch -> 0x3c018
											}
										} else {
											// 0x3be8c
											if (v23 > -1) {
												// 0x3bea4
												function_3b8cc(2, 16);
												// branch -> 0x3c018
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// 0x3be80
						v23 = g36;
						// branch -> 0x3be80
						// 0x3be80
						if (v23 == 1) {
							// 0x3beb4
							function_3b8cc(16, 16);
							// branch -> 0x3c018
						} else {
							// 0x3be88
							if (v23 > 1) {
								// 0x3be98
								if (v23 == 2) {
									// 0x3bec4
									function_3b8cc(30, 16);
									// branch -> 0x3c018
								}
							} else {
								// 0x3be8c
								if (v23 > -1) {
									// 0x3bea4
									function_3b8cc(2, 16);
									// branch -> 0x3c018
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// 0x3bed4
			g36 = 1;
			if (*v32 == 0) {
				// 0x3bee4
				if (*(int32_t *)(v19 - 0x4f30) != 0) {
					// 0x3bef0
					if (*(int32_t *)(v19 - 0x4f34) != 0) {
						// 0x3befc
						g37 = 2;
						if (random(0) != 0) {
							// 0x3bf10
							g36 = 2;
							// branch -> 0x3bf14
						}
					}
				}
			}
			// 0x3bf14
			v24 = g23;
			if (*(int32_t *)(v24 - 0x4f2c) != 0) {
				// 0x3bf20
				if (*(int32_t *)(v24 - 0x4f30) != 0) {
					// 0x3bf2c
					if (*(int32_t *)(v24 - 0x4f34) == 0) {
						// 0x3bf38
						g37 = 2;
						if (random(0) != 0) {
							// 0x3bf4c
							g36 = 0;
							// branch -> 0x3bf50
						}
					}
				}
			}
			// 0x3bf50
			v25 = g23;
			if (*(int32_t *)(v25 - 0x4f2c) != 0) {
				// 0x3bf5c
				if (*(int32_t *)(v25 - 0x4f30) == 0) {
					// 0x3bf68
					if (*(int32_t *)(v25 - 0x4f34) != 0) {
						// 0x3bf74
						g37 = 2;
						if (random(0) == 0) {
							// 0x3bf90
							g36 = 2;
							// branch -> 0x3bf94
						} else {
							// 0x3bf88
							g36 = 0;
							// branch -> 0x3bf94
						}
						// 0x3bf94
						v26 = g23;
						if (*(int32_t *)(v26 - 0x4f2c) != 0) {
							// 0x3bfa0
							if (*(int32_t *)(v26 - 0x4f30) != 0) {
								// 0x3bfac
								if (*(int32_t *)(v26 - 0x4f34) != 0) {
									// 0x3bfb8
									g37 = 3;
									v37 = random(0);
									g36 = v37;
									v27 = v37;
									// branch -> 0x3bfc8
									// 0x3bfc8
									if (v27 == 1) {
										// 0x3bffc
										function_3b8cc(16, 16);
										// branch -> 0x3c018
									} else {
										// 0x3bfd0
										if (v27 > 1) {
											// 0x3bfe0
											if (v27 == 2) {
												// 0x3c00c
												function_3b8cc(16, 30);
												// branch -> 0x3c018
											}
										} else {
											// 0x3bfd4
											if (v27 > -1) {
												// 0x3bfec
												function_3b8cc(16, 2);
												// branch -> 0x3c018
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// 0x3bfc8
						v27 = g36;
						// branch -> 0x3bfc8
						// 0x3bfc8
						if (v27 == 1) {
							// 0x3bffc
							function_3b8cc(16, 16);
							// branch -> 0x3c018
						} else {
							// 0x3bfd0
							if (v27 > 1) {
								// 0x3bfe0
								if (v27 == 2) {
									// 0x3c00c
									function_3b8cc(16, 30);
									// branch -> 0x3c018
								}
							} else {
								// 0x3bfd4
								if (v27 > -1) {
									// 0x3bfec
									function_3b8cc(16, 2);
									// branch -> 0x3c018
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// 0x3bf94
			v26 = g23;
			if (*(int32_t *)(v26 - 0x4f2c) != 0) {
				// 0x3bfa0
				if (*(int32_t *)(v26 - 0x4f30) != 0) {
					// 0x3bfac
					if (*(int32_t *)(v26 - 0x4f34) != 0) {
						// 0x3bfb8
						g37 = 3;
						v37 = random(0);
						g36 = v37;
						v27 = v37;
						// branch -> 0x3bfc8
						// 0x3bfc8
						if (v27 == 1) {
							// 0x3bffc
							function_3b8cc(16, 16);
							// branch -> 0x3c018
						} else {
							// 0x3bfd0
							if (v27 > 1) {
								// 0x3bfe0
								if (v27 == 2) {
									// 0x3c00c
									function_3b8cc(16, 30);
									// branch -> 0x3c018
								}
							} else {
								// 0x3bfd4
								if (v27 > -1) {
									// 0x3bfec
									function_3b8cc(16, 2);
									// branch -> 0x3c018
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// 0x3bfc8
			v27 = g36;
			// branch -> 0x3bfc8
			// 0x3bfc8
			if (v27 == 1) {
				// 0x3bffc
				function_3b8cc(16, 16);
				// branch -> 0x3c018
			} else {
				// 0x3bfd0
				if (v27 > 1) {
					// 0x3bfe0
					if (v27 == 2) {
						// 0x3c00c
						function_3b8cc(16, 30);
						// branch -> 0x3c018
					}
				} else {
					// 0x3bfd4
					if (v27 > -1) {
						// 0x3bfec
						function_3b8cc(16, 2);
						// branch -> 0x3c018
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			v10 = v9;
		}
	}
	// 0x3bb9c
	v11 = v10;
	if (*(int32_t *)(v10 - 0x4f2c) != 0) {
		// 0x3bba8
		function_3ad68(14, 0, 0, 1, 0, 0);
		v11 = g23;
		// branch -> 0x3bbc4
	}
	// 0x3bbc4
	v15 = v11;
	if (*(int32_t *)(v11 - 0x4f30) != 0) {
		// 0x3bbd0
		v12 = v11;
		if (*(int32_t *)(v11 - 0x4f2c) != 0) {
			// 0x3bbdc
			if (*(int32_t *)(v11 - 0x4f34) == 0) {
				// 0x3bbe8
				function_3ad68(14, 14, 1, 0, 0, 0);
				v12 = g23;
				// branch -> 0x3bc04
			} else {
				v12 = v11;
			}
		}
		// 0x3bc04
		v13 = v12;
		if (*(int32_t *)(v12 - 0x4f2c) == 0) {
			// 0x3bc10
			if (*(int32_t *)(v12 - 0x4f34) != 0) {
				// 0x3bc1c
				function_3ad68(14, 14, 0, 1, 0, 0);
				v13 = g23;
				// branch -> 0x3bc38
			} else {
				v13 = v12;
			}
		}
		// 0x3bc38
		v14 = v13;
		if (*(int32_t *)(v13 - 0x4f2c) != 0) {
			// 0x3bc44
			if (*(int32_t *)(v13 - 0x4f34) != 0) {
				// 0x3bc50
				function_3ad68(14, 14, 1, 1, 0, 0);
				v14 = g23;
				// branch -> 0x3bc6c
			} else {
				v14 = v13;
			}
		}
		// 0x3bc6c
		if (*(int32_t *)(v14 - 0x4f2c) == 0) {
			// 0x3bc78
			if (*(int32_t *)(v14 - 0x4f34) == 0) {
				// 0x3bc84
				function_3ad68(14, 14, 0, 0, 0, 0);
				v15 = g23;
				// branch -> 0x3bca0
			} else {
				v15 = v14;
			}
		} else {
			v15 = v14;
		}
	}
	// 0x3bca0
	v16 = v15;
	if (*(int32_t *)(v15 - 0x4f34) != 0) {
		// 0x3bcac
		function_3ad68(14, 28, 1, 0, 0, 0);
		v16 = g23;
		// branch -> 0x3bcc8
	}
	// 0x3bcc8
	v17 = v16;
	if (*(int32_t *)(v16 - 0x4f2c) != 0) {
		// 0x3bcd4
		if (*(int32_t *)(v16 - 0x4f30) != 0) {
			// 0x3bce0
			function_3aff4(18, 12, 18, 14);
			v17 = g23;
			// branch -> 0x3bcf4
		} else {
			v17 = v16;
		}
		// 0x3bcf4
		v18 = v17;
		if (*(int32_t *)(v17 - 0x4f30) != 0) {
			// 0x3bd00
			if (*(int32_t *)(v17 - 0x4f34) != 0) {
				// 0x3bd0c
				function_3aff4(18, 26, 18, 28);
				v18 = g23;
				// branch -> 0x3bd20
			} else {
				v18 = v17;
			}
		}
		// 0x3bd20
		v19 = v18;
		if (*(int32_t *)(v18 - 0x4f2c) != 0) {
			// 0x3bd2c
			if (*(int32_t *)(v18 - 0x4f30) == 0) {
				// 0x3bd38
				if (*(int32_t *)(v18 - 0x4f34) != 0) {
					// 0x3bd44
					function_3aff4(18, 12, 18, 28);
					v19 = g23;
					// branch -> 0x3bd58
				} else {
					v19 = v18;
				}
			} else {
				v19 = v18;
			}
		}
		// 0x3bd58
		if (*(int32_t *)*(int32_t *)(v19 - 0x7524) == 0) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x3bd68
		v32 = (int32_t *)(v19 - 0x4f2c);
		if (*v32 == 0) {
			// 0x3bd74
			if (*(int32_t *)(v19 - 0x4f30) == 0) {
				// 0x3bd80
				if (*(int32_t *)(v19 - 0x4f34) == 0) {
					// 0x3bd8c
					g36 = 1;
					if (*(int32_t *)(v19 - 0x4f20) == 0) {
						// 0x3bd9c
						if (*(int32_t *)(v19 - 0x4f24) != 0) {
							// 0x3bda8
							if (*(int32_t *)(v19 - 0x4f28) != 0) {
								// 0x3bdb4
								g37 = 2;
								if (random(0) != 0) {
									// 0x3bdc8
									g36 = 2;
									// branch -> 0x3bdcc
								}
							}
						}
					}
					// 0x3bdcc
					v20 = g23;
					if (*(int32_t *)(v20 - 0x4f20) != 0) {
						// 0x3bdd8
						if (*(int32_t *)(v20 - 0x4f24) != 0) {
							// 0x3bde4
							if (*(int32_t *)(v20 - 0x4f28) == 0) {
								// 0x3bdf0
								g37 = 2;
								if (random(0) != 0) {
									// 0x3be04
									g36 = 0;
									// branch -> 0x3be08
								}
							}
						}
					}
					// 0x3be08
					v21 = g23;
					if (*(int32_t *)(v21 - 0x4f20) != 0) {
						// 0x3be14
						if (*(int32_t *)(v21 - 0x4f24) == 0) {
							// 0x3be20
							if (*(int32_t *)(v21 - 0x4f28) != 0) {
								// 0x3be2c
								g37 = 2;
								if (random(0) == 0) {
									// 0x3be48
									g36 = 2;
									// branch -> 0x3be4c
								} else {
									// 0x3be40
									g36 = 0;
									// branch -> 0x3be4c
								}
								// 0x3be4c
								v22 = g23;
								if (*(int32_t *)(v22 - 0x4f20) != 0) {
									// 0x3be58
									if (*(int32_t *)(v22 - 0x4f24) != 0) {
										// 0x3be64
										if (*(int32_t *)(v22 - 0x4f28) != 0) {
											// 0x3be70
											g37 = 3;
											v36 = random(0);
											g36 = v36;
											v23 = v36;
											// branch -> 0x3be80
											// 0x3be80
											if (v23 == 1) {
												// 0x3beb4
												function_3b8cc(16, 16);
												// branch -> 0x3c018
											} else {
												// 0x3be88
												if (v23 > 1) {
													// 0x3be98
													if (v23 == 2) {
														// 0x3bec4
														function_3b8cc(30, 16);
														// branch -> 0x3c018
													}
												} else {
													// 0x3be8c
													if (v23 > -1) {
														// 0x3bea4
														function_3b8cc(2, 16);
														// branch -> 0x3c018
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// 0x3be80
								v23 = g36;
								// branch -> 0x3be80
								// 0x3be80
								if (v23 == 1) {
									// 0x3beb4
									function_3b8cc(16, 16);
									// branch -> 0x3c018
								} else {
									// 0x3be88
									if (v23 > 1) {
										// 0x3be98
										if (v23 == 2) {
											// 0x3bec4
											function_3b8cc(30, 16);
											// branch -> 0x3c018
										}
									} else {
										// 0x3be8c
										if (v23 > -1) {
											// 0x3bea4
											function_3b8cc(2, 16);
											// branch -> 0x3c018
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// 0x3be4c
					v22 = g23;
					if (*(int32_t *)(v22 - 0x4f20) != 0) {
						// 0x3be58
						if (*(int32_t *)(v22 - 0x4f24) != 0) {
							// 0x3be64
							if (*(int32_t *)(v22 - 0x4f28) != 0) {
								// 0x3be70
								g37 = 3;
								v36 = random(0);
								g36 = v36;
								v23 = v36;
								// branch -> 0x3be80
								// 0x3be80
								if (v23 == 1) {
									// 0x3beb4
									function_3b8cc(16, 16);
									// branch -> 0x3c018
								} else {
									// 0x3be88
									if (v23 > 1) {
										// 0x3be98
										if (v23 == 2) {
											// 0x3bec4
											function_3b8cc(30, 16);
											// branch -> 0x3c018
										}
									} else {
										// 0x3be8c
										if (v23 > -1) {
											// 0x3bea4
											function_3b8cc(2, 16);
											// branch -> 0x3c018
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// 0x3be80
					v23 = g36;
					// branch -> 0x3be80
					// 0x3be80
					if (v23 == 1) {
						// 0x3beb4
						function_3b8cc(16, 16);
						// branch -> 0x3c018
					} else {
						// 0x3be88
						if (v23 > 1) {
							// 0x3be98
							if (v23 == 2) {
								// 0x3bec4
								function_3b8cc(30, 16);
								// branch -> 0x3c018
							}
						} else {
							// 0x3be8c
							if (v23 > -1) {
								// 0x3bea4
								function_3b8cc(2, 16);
								// branch -> 0x3c018
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bed4
		g36 = 1;
		if (*v32 == 0) {
			// 0x3bee4
			if (*(int32_t *)(v19 - 0x4f30) != 0) {
				// 0x3bef0
				if (*(int32_t *)(v19 - 0x4f34) != 0) {
					// 0x3befc
					g37 = 2;
					if (random(0) != 0) {
						// 0x3bf10
						g36 = 2;
						// branch -> 0x3bf14
					}
				}
			}
		}
		// 0x3bf14
		v24 = g23;
		if (*(int32_t *)(v24 - 0x4f2c) != 0) {
			// 0x3bf20
			if (*(int32_t *)(v24 - 0x4f30) != 0) {
				// 0x3bf2c
				if (*(int32_t *)(v24 - 0x4f34) == 0) {
					// 0x3bf38
					g37 = 2;
					if (random(0) != 0) {
						// 0x3bf4c
						g36 = 0;
						// branch -> 0x3bf50
					}
				}
			}
		}
		// 0x3bf50
		v25 = g23;
		if (*(int32_t *)(v25 - 0x4f2c) != 0) {
			// 0x3bf5c
			if (*(int32_t *)(v25 - 0x4f30) == 0) {
				// 0x3bf68
				if (*(int32_t *)(v25 - 0x4f34) != 0) {
					// 0x3bf74
					g37 = 2;
					if (random(0) == 0) {
						// 0x3bf90
						g36 = 2;
						// branch -> 0x3bf94
					} else {
						// 0x3bf88
						g36 = 0;
						// branch -> 0x3bf94
					}
					// 0x3bf94
					v26 = g23;
					if (*(int32_t *)(v26 - 0x4f2c) != 0) {
						// 0x3bfa0
						if (*(int32_t *)(v26 - 0x4f30) != 0) {
							// 0x3bfac
							if (*(int32_t *)(v26 - 0x4f34) != 0) {
								// 0x3bfb8
								g37 = 3;
								v37 = random(0);
								g36 = v37;
								v27 = v37;
								// branch -> 0x3bfc8
								// 0x3bfc8
								if (v27 == 1) {
									// 0x3bffc
									function_3b8cc(16, 16);
									// branch -> 0x3c018
								} else {
									// 0x3bfd0
									if (v27 > 1) {
										// 0x3bfe0
										if (v27 == 2) {
											// 0x3c00c
											function_3b8cc(16, 30);
											// branch -> 0x3c018
										}
									} else {
										// 0x3bfd4
										if (v27 > -1) {
											// 0x3bfec
											function_3b8cc(16, 2);
											// branch -> 0x3c018
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// 0x3bfc8
					v27 = g36;
					// branch -> 0x3bfc8
					// 0x3bfc8
					if (v27 == 1) {
						// 0x3bffc
						function_3b8cc(16, 16);
						// branch -> 0x3c018
					} else {
						// 0x3bfd0
						if (v27 > 1) {
							// 0x3bfe0
							if (v27 == 2) {
								// 0x3c00c
								function_3b8cc(16, 30);
								// branch -> 0x3c018
							}
						} else {
							// 0x3bfd4
							if (v27 > -1) {
								// 0x3bfec
								function_3b8cc(16, 2);
								// branch -> 0x3c018
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bf94
		v26 = g23;
		if (*(int32_t *)(v26 - 0x4f2c) != 0) {
			// 0x3bfa0
			if (*(int32_t *)(v26 - 0x4f30) != 0) {
				// 0x3bfac
				if (*(int32_t *)(v26 - 0x4f34) != 0) {
					// 0x3bfb8
					g37 = 3;
					v37 = random(0);
					g36 = v37;
					v27 = v37;
					// branch -> 0x3bfc8
					// 0x3bfc8
					if (v27 == 1) {
						// 0x3bffc
						function_3b8cc(16, 16);
						// branch -> 0x3c018
					} else {
						// 0x3bfd0
						if (v27 > 1) {
							// 0x3bfe0
							if (v27 == 2) {
								// 0x3c00c
								function_3b8cc(16, 30);
								// branch -> 0x3c018
							}
						} else {
							// 0x3bfd4
							if (v27 > -1) {
								// 0x3bfec
								function_3b8cc(16, 2);
								// branch -> 0x3c018
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bfc8
		v27 = g36;
		// branch -> 0x3bfc8
		// 0x3bfc8
		if (v27 == 1) {
			// 0x3bffc
			function_3b8cc(16, 16);
			// branch -> 0x3c018
		} else {
			// 0x3bfd0
			if (v27 > 1) {
				// 0x3bfe0
				if (v27 == 2) {
					// 0x3c00c
					function_3b8cc(16, 30);
					// branch -> 0x3c018
				}
			} else {
				// 0x3bfd4
				if (v27 > -1) {
					// 0x3bfec
					function_3b8cc(16, 2);
					// branch -> 0x3c018
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x3bcf4
	v18 = v17;
	if (*(int32_t *)(v17 - 0x4f30) != 0) {
		// 0x3bd00
		if (*(int32_t *)(v17 - 0x4f34) != 0) {
			// 0x3bd0c
			function_3aff4(18, 26, 18, 28);
			v18 = g23;
			// branch -> 0x3bd20
		} else {
			v18 = v17;
		}
		// 0x3bd20
		v19 = v18;
		if (*(int32_t *)(v18 - 0x4f2c) != 0) {
			// 0x3bd2c
			if (*(int32_t *)(v18 - 0x4f30) == 0) {
				// 0x3bd38
				if (*(int32_t *)(v18 - 0x4f34) != 0) {
					// 0x3bd44
					function_3aff4(18, 12, 18, 28);
					v19 = g23;
					// branch -> 0x3bd58
				} else {
					v19 = v18;
				}
			} else {
				v19 = v18;
			}
		}
		// 0x3bd58
		if (*(int32_t *)*(int32_t *)(v19 - 0x7524) == 0) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x3bd68
		v32 = (int32_t *)(v19 - 0x4f2c);
		if (*v32 == 0) {
			// 0x3bd74
			if (*(int32_t *)(v19 - 0x4f30) == 0) {
				// 0x3bd80
				if (*(int32_t *)(v19 - 0x4f34) == 0) {
					// 0x3bd8c
					g36 = 1;
					if (*(int32_t *)(v19 - 0x4f20) == 0) {
						// 0x3bd9c
						if (*(int32_t *)(v19 - 0x4f24) != 0) {
							// 0x3bda8
							if (*(int32_t *)(v19 - 0x4f28) != 0) {
								// 0x3bdb4
								g37 = 2;
								if (random(0) != 0) {
									// 0x3bdc8
									g36 = 2;
									// branch -> 0x3bdcc
								}
							}
						}
					}
					// 0x3bdcc
					v20 = g23;
					if (*(int32_t *)(v20 - 0x4f20) != 0) {
						// 0x3bdd8
						if (*(int32_t *)(v20 - 0x4f24) != 0) {
							// 0x3bde4
							if (*(int32_t *)(v20 - 0x4f28) == 0) {
								// 0x3bdf0
								g37 = 2;
								if (random(0) != 0) {
									// 0x3be04
									g36 = 0;
									// branch -> 0x3be08
								}
							}
						}
					}
					// 0x3be08
					v21 = g23;
					if (*(int32_t *)(v21 - 0x4f20) != 0) {
						// 0x3be14
						if (*(int32_t *)(v21 - 0x4f24) == 0) {
							// 0x3be20
							if (*(int32_t *)(v21 - 0x4f28) != 0) {
								// 0x3be2c
								g37 = 2;
								if (random(0) == 0) {
									// 0x3be48
									g36 = 2;
									// branch -> 0x3be4c
								} else {
									// 0x3be40
									g36 = 0;
									// branch -> 0x3be4c
								}
								// 0x3be4c
								v22 = g23;
								if (*(int32_t *)(v22 - 0x4f20) != 0) {
									// 0x3be58
									if (*(int32_t *)(v22 - 0x4f24) != 0) {
										// 0x3be64
										if (*(int32_t *)(v22 - 0x4f28) != 0) {
											// 0x3be70
											g37 = 3;
											v36 = random(0);
											g36 = v36;
											v23 = v36;
											// branch -> 0x3be80
											// 0x3be80
											if (v23 == 1) {
												// 0x3beb4
												function_3b8cc(16, 16);
												// branch -> 0x3c018
											} else {
												// 0x3be88
												if (v23 > 1) {
													// 0x3be98
													if (v23 == 2) {
														// 0x3bec4
														function_3b8cc(30, 16);
														// branch -> 0x3c018
													}
												} else {
													// 0x3be8c
													if (v23 > -1) {
														// 0x3bea4
														function_3b8cc(2, 16);
														// branch -> 0x3c018
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// 0x3be80
								v23 = g36;
								// branch -> 0x3be80
								// 0x3be80
								if (v23 == 1) {
									// 0x3beb4
									function_3b8cc(16, 16);
									// branch -> 0x3c018
								} else {
									// 0x3be88
									if (v23 > 1) {
										// 0x3be98
										if (v23 == 2) {
											// 0x3bec4
											function_3b8cc(30, 16);
											// branch -> 0x3c018
										}
									} else {
										// 0x3be8c
										if (v23 > -1) {
											// 0x3bea4
											function_3b8cc(2, 16);
											// branch -> 0x3c018
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// 0x3be4c
					v22 = g23;
					if (*(int32_t *)(v22 - 0x4f20) != 0) {
						// 0x3be58
						if (*(int32_t *)(v22 - 0x4f24) != 0) {
							// 0x3be64
							if (*(int32_t *)(v22 - 0x4f28) != 0) {
								// 0x3be70
								g37 = 3;
								v36 = random(0);
								g36 = v36;
								v23 = v36;
								// branch -> 0x3be80
								// 0x3be80
								if (v23 == 1) {
									// 0x3beb4
									function_3b8cc(16, 16);
									// branch -> 0x3c018
								} else {
									// 0x3be88
									if (v23 > 1) {
										// 0x3be98
										if (v23 == 2) {
											// 0x3bec4
											function_3b8cc(30, 16);
											// branch -> 0x3c018
										}
									} else {
										// 0x3be8c
										if (v23 > -1) {
											// 0x3bea4
											function_3b8cc(2, 16);
											// branch -> 0x3c018
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// 0x3be80
					v23 = g36;
					// branch -> 0x3be80
					// 0x3be80
					if (v23 == 1) {
						// 0x3beb4
						function_3b8cc(16, 16);
						// branch -> 0x3c018
					} else {
						// 0x3be88
						if (v23 > 1) {
							// 0x3be98
							if (v23 == 2) {
								// 0x3bec4
								function_3b8cc(30, 16);
								// branch -> 0x3c018
							}
						} else {
							// 0x3be8c
							if (v23 > -1) {
								// 0x3bea4
								function_3b8cc(2, 16);
								// branch -> 0x3c018
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bed4
		g36 = 1;
		if (*v32 == 0) {
			// 0x3bee4
			if (*(int32_t *)(v19 - 0x4f30) != 0) {
				// 0x3bef0
				if (*(int32_t *)(v19 - 0x4f34) != 0) {
					// 0x3befc
					g37 = 2;
					if (random(0) != 0) {
						// 0x3bf10
						g36 = 2;
						// branch -> 0x3bf14
					}
				}
			}
		}
		// 0x3bf14
		v24 = g23;
		if (*(int32_t *)(v24 - 0x4f2c) != 0) {
			// 0x3bf20
			if (*(int32_t *)(v24 - 0x4f30) != 0) {
				// 0x3bf2c
				if (*(int32_t *)(v24 - 0x4f34) == 0) {
					// 0x3bf38
					g37 = 2;
					if (random(0) != 0) {
						// 0x3bf4c
						g36 = 0;
						// branch -> 0x3bf50
					}
				}
			}
		}
		// 0x3bf50
		v25 = g23;
		if (*(int32_t *)(v25 - 0x4f2c) != 0) {
			// 0x3bf5c
			if (*(int32_t *)(v25 - 0x4f30) == 0) {
				// 0x3bf68
				if (*(int32_t *)(v25 - 0x4f34) != 0) {
					// 0x3bf74
					g37 = 2;
					if (random(0) == 0) {
						// 0x3bf90
						g36 = 2;
						// branch -> 0x3bf94
					} else {
						// 0x3bf88
						g36 = 0;
						// branch -> 0x3bf94
					}
					// 0x3bf94
					v26 = g23;
					if (*(int32_t *)(v26 - 0x4f2c) != 0) {
						// 0x3bfa0
						if (*(int32_t *)(v26 - 0x4f30) != 0) {
							// 0x3bfac
							if (*(int32_t *)(v26 - 0x4f34) != 0) {
								// 0x3bfb8
								g37 = 3;
								v37 = random(0);
								g36 = v37;
								v27 = v37;
								// branch -> 0x3bfc8
								// 0x3bfc8
								if (v27 == 1) {
									// 0x3bffc
									function_3b8cc(16, 16);
									// branch -> 0x3c018
								} else {
									// 0x3bfd0
									if (v27 > 1) {
										// 0x3bfe0
										if (v27 == 2) {
											// 0x3c00c
											function_3b8cc(16, 30);
											// branch -> 0x3c018
										}
									} else {
										// 0x3bfd4
										if (v27 > -1) {
											// 0x3bfec
											function_3b8cc(16, 2);
											// branch -> 0x3c018
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// 0x3bfc8
					v27 = g36;
					// branch -> 0x3bfc8
					// 0x3bfc8
					if (v27 == 1) {
						// 0x3bffc
						function_3b8cc(16, 16);
						// branch -> 0x3c018
					} else {
						// 0x3bfd0
						if (v27 > 1) {
							// 0x3bfe0
							if (v27 == 2) {
								// 0x3c00c
								function_3b8cc(16, 30);
								// branch -> 0x3c018
							}
						} else {
							// 0x3bfd4
							if (v27 > -1) {
								// 0x3bfec
								function_3b8cc(16, 2);
								// branch -> 0x3c018
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bf94
		v26 = g23;
		if (*(int32_t *)(v26 - 0x4f2c) != 0) {
			// 0x3bfa0
			if (*(int32_t *)(v26 - 0x4f30) != 0) {
				// 0x3bfac
				if (*(int32_t *)(v26 - 0x4f34) != 0) {
					// 0x3bfb8
					g37 = 3;
					v37 = random(0);
					g36 = v37;
					v27 = v37;
					// branch -> 0x3bfc8
					// 0x3bfc8
					if (v27 == 1) {
						// 0x3bffc
						function_3b8cc(16, 16);
						// branch -> 0x3c018
					} else {
						// 0x3bfd0
						if (v27 > 1) {
							// 0x3bfe0
							if (v27 == 2) {
								// 0x3c00c
								function_3b8cc(16, 30);
								// branch -> 0x3c018
							}
						} else {
							// 0x3bfd4
							if (v27 > -1) {
								// 0x3bfec
								function_3b8cc(16, 2);
								// branch -> 0x3c018
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bfc8
		v27 = g36;
		// branch -> 0x3bfc8
		// 0x3bfc8
		if (v27 == 1) {
			// 0x3bffc
			function_3b8cc(16, 16);
			// branch -> 0x3c018
		} else {
			// 0x3bfd0
			if (v27 > 1) {
				// 0x3bfe0
				if (v27 == 2) {
					// 0x3c00c
					function_3b8cc(16, 30);
					// branch -> 0x3c018
				}
			} else {
				// 0x3bfd4
				if (v27 > -1) {
					// 0x3bfec
					function_3b8cc(16, 2);
					// branch -> 0x3c018
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x3bd20
	v19 = v18;
	if (*(int32_t *)(v18 - 0x4f2c) != 0) {
		// 0x3bd2c
		if (*(int32_t *)(v18 - 0x4f30) == 0) {
			// 0x3bd38
			if (*(int32_t *)(v18 - 0x4f34) != 0) {
				// 0x3bd44
				function_3aff4(18, 12, 18, 28);
				v19 = g23;
				// branch -> 0x3bd58
			} else {
				v19 = v18;
			}
			// 0x3bd58
			if (*(int32_t *)*(int32_t *)(v19 - 0x7524) == 0) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x3bd68
			v32 = (int32_t *)(v19 - 0x4f2c);
			if (*v32 == 0) {
				// 0x3bd74
				if (*(int32_t *)(v19 - 0x4f30) == 0) {
					// 0x3bd80
					if (*(int32_t *)(v19 - 0x4f34) == 0) {
						// 0x3bd8c
						g36 = 1;
						if (*(int32_t *)(v19 - 0x4f20) == 0) {
							// 0x3bd9c
							if (*(int32_t *)(v19 - 0x4f24) != 0) {
								// 0x3bda8
								if (*(int32_t *)(v19 - 0x4f28) != 0) {
									// 0x3bdb4
									g37 = 2;
									if (random(0) != 0) {
										// 0x3bdc8
										g36 = 2;
										// branch -> 0x3bdcc
									}
								}
							}
						}
						// 0x3bdcc
						v20 = g23;
						if (*(int32_t *)(v20 - 0x4f20) != 0) {
							// 0x3bdd8
							if (*(int32_t *)(v20 - 0x4f24) != 0) {
								// 0x3bde4
								if (*(int32_t *)(v20 - 0x4f28) == 0) {
									// 0x3bdf0
									g37 = 2;
									if (random(0) != 0) {
										// 0x3be04
										g36 = 0;
										// branch -> 0x3be08
									}
								}
							}
						}
						// 0x3be08
						v21 = g23;
						if (*(int32_t *)(v21 - 0x4f20) != 0) {
							// 0x3be14
							if (*(int32_t *)(v21 - 0x4f24) == 0) {
								// 0x3be20
								if (*(int32_t *)(v21 - 0x4f28) != 0) {
									// 0x3be2c
									g37 = 2;
									if (random(0) == 0) {
										// 0x3be48
										g36 = 2;
										// branch -> 0x3be4c
									} else {
										// 0x3be40
										g36 = 0;
										// branch -> 0x3be4c
									}
									// 0x3be4c
									v22 = g23;
									if (*(int32_t *)(v22 - 0x4f20) != 0) {
										// 0x3be58
										if (*(int32_t *)(v22 - 0x4f24) != 0) {
											// 0x3be64
											if (*(int32_t *)(v22 - 0x4f28) != 0) {
												// 0x3be70
												g37 = 3;
												v36 = random(0);
												g36 = v36;
												v23 = v36;
												// branch -> 0x3be80
												// 0x3be80
												if (v23 == 1) {
													// 0x3beb4
													function_3b8cc(16, 16);
													// branch -> 0x3c018
												} else {
													// 0x3be88
													if (v23 > 1) {
														// 0x3be98
														if (v23 == 2) {
															// 0x3bec4
															function_3b8cc(30, 16);
															// branch -> 0x3c018
														}
													} else {
														// 0x3be8c
														if (v23 > -1) {
															// 0x3bea4
															function_3b8cc(2, 16);
															// branch -> 0x3c018
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// 0x3be80
									v23 = g36;
									// branch -> 0x3be80
									// 0x3be80
									if (v23 == 1) {
										// 0x3beb4
										function_3b8cc(16, 16);
										// branch -> 0x3c018
									} else {
										// 0x3be88
										if (v23 > 1) {
											// 0x3be98
											if (v23 == 2) {
												// 0x3bec4
												function_3b8cc(30, 16);
												// branch -> 0x3c018
											}
										} else {
											// 0x3be8c
											if (v23 > -1) {
												// 0x3bea4
												function_3b8cc(2, 16);
												// branch -> 0x3c018
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// 0x3be4c
						v22 = g23;
						if (*(int32_t *)(v22 - 0x4f20) != 0) {
							// 0x3be58
							if (*(int32_t *)(v22 - 0x4f24) != 0) {
								// 0x3be64
								if (*(int32_t *)(v22 - 0x4f28) != 0) {
									// 0x3be70
									g37 = 3;
									v36 = random(0);
									g36 = v36;
									v23 = v36;
									// branch -> 0x3be80
									// 0x3be80
									if (v23 == 1) {
										// 0x3beb4
										function_3b8cc(16, 16);
										// branch -> 0x3c018
									} else {
										// 0x3be88
										if (v23 > 1) {
											// 0x3be98
											if (v23 == 2) {
												// 0x3bec4
												function_3b8cc(30, 16);
												// branch -> 0x3c018
											}
										} else {
											// 0x3be8c
											if (v23 > -1) {
												// 0x3bea4
												function_3b8cc(2, 16);
												// branch -> 0x3c018
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// 0x3be80
						v23 = g36;
						// branch -> 0x3be80
						// 0x3be80
						if (v23 == 1) {
							// 0x3beb4
							function_3b8cc(16, 16);
							// branch -> 0x3c018
						} else {
							// 0x3be88
							if (v23 > 1) {
								// 0x3be98
								if (v23 == 2) {
									// 0x3bec4
									function_3b8cc(30, 16);
									// branch -> 0x3c018
								}
							} else {
								// 0x3be8c
								if (v23 > -1) {
									// 0x3bea4
									function_3b8cc(2, 16);
									// branch -> 0x3c018
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// 0x3bed4
			g36 = 1;
			if (*v32 == 0) {
				// 0x3bee4
				if (*(int32_t *)(v19 - 0x4f30) != 0) {
					// 0x3bef0
					if (*(int32_t *)(v19 - 0x4f34) != 0) {
						// 0x3befc
						g37 = 2;
						if (random(0) != 0) {
							// 0x3bf10
							g36 = 2;
							// branch -> 0x3bf14
						}
					}
				}
			}
			// 0x3bf14
			v24 = g23;
			if (*(int32_t *)(v24 - 0x4f2c) != 0) {
				// 0x3bf20
				if (*(int32_t *)(v24 - 0x4f30) != 0) {
					// 0x3bf2c
					if (*(int32_t *)(v24 - 0x4f34) == 0) {
						// 0x3bf38
						g37 = 2;
						if (random(0) != 0) {
							// 0x3bf4c
							g36 = 0;
							// branch -> 0x3bf50
						}
					}
				}
			}
			// 0x3bf50
			v25 = g23;
			if (*(int32_t *)(v25 - 0x4f2c) != 0) {
				// 0x3bf5c
				if (*(int32_t *)(v25 - 0x4f30) == 0) {
					// 0x3bf68
					if (*(int32_t *)(v25 - 0x4f34) != 0) {
						// 0x3bf74
						g37 = 2;
						if (random(0) == 0) {
							// 0x3bf90
							g36 = 2;
							// branch -> 0x3bf94
						} else {
							// 0x3bf88
							g36 = 0;
							// branch -> 0x3bf94
						}
						// 0x3bf94
						v26 = g23;
						if (*(int32_t *)(v26 - 0x4f2c) != 0) {
							// 0x3bfa0
							if (*(int32_t *)(v26 - 0x4f30) != 0) {
								// 0x3bfac
								if (*(int32_t *)(v26 - 0x4f34) != 0) {
									// 0x3bfb8
									g37 = 3;
									v37 = random(0);
									g36 = v37;
									v27 = v37;
									// branch -> 0x3bfc8
									// 0x3bfc8
									if (v27 == 1) {
										// 0x3bffc
										function_3b8cc(16, 16);
										// branch -> 0x3c018
									} else {
										// 0x3bfd0
										if (v27 > 1) {
											// 0x3bfe0
											if (v27 == 2) {
												// 0x3c00c
												function_3b8cc(16, 30);
												// branch -> 0x3c018
											}
										} else {
											// 0x3bfd4
											if (v27 > -1) {
												// 0x3bfec
												function_3b8cc(16, 2);
												// branch -> 0x3c018
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// 0x3bfc8
						v27 = g36;
						// branch -> 0x3bfc8
						// 0x3bfc8
						if (v27 == 1) {
							// 0x3bffc
							function_3b8cc(16, 16);
							// branch -> 0x3c018
						} else {
							// 0x3bfd0
							if (v27 > 1) {
								// 0x3bfe0
								if (v27 == 2) {
									// 0x3c00c
									function_3b8cc(16, 30);
									// branch -> 0x3c018
								}
							} else {
								// 0x3bfd4
								if (v27 > -1) {
									// 0x3bfec
									function_3b8cc(16, 2);
									// branch -> 0x3c018
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// 0x3bf94
			v26 = g23;
			if (*(int32_t *)(v26 - 0x4f2c) != 0) {
				// 0x3bfa0
				if (*(int32_t *)(v26 - 0x4f30) != 0) {
					// 0x3bfac
					if (*(int32_t *)(v26 - 0x4f34) != 0) {
						// 0x3bfb8
						g37 = 3;
						v37 = random(0);
						g36 = v37;
						v27 = v37;
						// branch -> 0x3bfc8
						// 0x3bfc8
						if (v27 == 1) {
							// 0x3bffc
							function_3b8cc(16, 16);
							// branch -> 0x3c018
						} else {
							// 0x3bfd0
							if (v27 > 1) {
								// 0x3bfe0
								if (v27 == 2) {
									// 0x3c00c
									function_3b8cc(16, 30);
									// branch -> 0x3c018
								}
							} else {
								// 0x3bfd4
								if (v27 > -1) {
									// 0x3bfec
									function_3b8cc(16, 2);
									// branch -> 0x3c018
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// 0x3bfc8
			v27 = g36;
			// branch -> 0x3bfc8
			// 0x3bfc8
			if (v27 == 1) {
				// 0x3bffc
				function_3b8cc(16, 16);
				// branch -> 0x3c018
			} else {
				// 0x3bfd0
				if (v27 > 1) {
					// 0x3bfe0
					if (v27 == 2) {
						// 0x3c00c
						function_3b8cc(16, 30);
						// branch -> 0x3c018
					}
				} else {
					// 0x3bfd4
					if (v27 > -1) {
						// 0x3bfec
						function_3b8cc(16, 2);
						// branch -> 0x3c018
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			v19 = v18;
		}
	}
	// 0x3bd58
	if (*(int32_t *)*(int32_t *)(v19 - 0x7524) == 0) {
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x3bd68
	v32 = (int32_t *)(v19 - 0x4f2c);
	if (*v32 == 0) {
		// 0x3bd74
		if (*(int32_t *)(v19 - 0x4f30) == 0) {
			// 0x3bd80
			if (*(int32_t *)(v19 - 0x4f34) == 0) {
				// 0x3bd8c
				g36 = 1;
				if (*(int32_t *)(v19 - 0x4f20) == 0) {
					// 0x3bd9c
					if (*(int32_t *)(v19 - 0x4f24) != 0) {
						// 0x3bda8
						if (*(int32_t *)(v19 - 0x4f28) != 0) {
							// 0x3bdb4
							g37 = 2;
							if (random(0) != 0) {
								// 0x3bdc8
								g36 = 2;
								// branch -> 0x3bdcc
							}
						}
					}
				}
				// 0x3bdcc
				v20 = g23;
				if (*(int32_t *)(v20 - 0x4f20) != 0) {
					// 0x3bdd8
					if (*(int32_t *)(v20 - 0x4f24) != 0) {
						// 0x3bde4
						if (*(int32_t *)(v20 - 0x4f28) == 0) {
							// 0x3bdf0
							g37 = 2;
							if (random(0) != 0) {
								// 0x3be04
								g36 = 0;
								// branch -> 0x3be08
							}
						}
					}
				}
				// 0x3be08
				v21 = g23;
				if (*(int32_t *)(v21 - 0x4f20) != 0) {
					// 0x3be14
					if (*(int32_t *)(v21 - 0x4f24) == 0) {
						// 0x3be20
						if (*(int32_t *)(v21 - 0x4f28) != 0) {
							// 0x3be2c
							g37 = 2;
							if (random(0) == 0) {
								// 0x3be48
								g36 = 2;
								// branch -> 0x3be4c
							} else {
								// 0x3be40
								g36 = 0;
								// branch -> 0x3be4c
							}
							// 0x3be4c
							v22 = g23;
							if (*(int32_t *)(v22 - 0x4f20) != 0) {
								// 0x3be58
								if (*(int32_t *)(v22 - 0x4f24) != 0) {
									// 0x3be64
									if (*(int32_t *)(v22 - 0x4f28) != 0) {
										// 0x3be70
										g37 = 3;
										v36 = random(0);
										g36 = v36;
										v23 = v36;
										// branch -> 0x3be80
										// 0x3be80
										if (v23 == 1) {
											// 0x3beb4
											function_3b8cc(16, 16);
											// branch -> 0x3c018
										} else {
											// 0x3be88
											if (v23 > 1) {
												// 0x3be98
												if (v23 == 2) {
													// 0x3bec4
													function_3b8cc(30, 16);
													// branch -> 0x3c018
												}
											} else {
												// 0x3be8c
												if (v23 > -1) {
													// 0x3bea4
													function_3b8cc(2, 16);
													// branch -> 0x3c018
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// 0x3be80
							// branch -> 0x3be80
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// 0x3be4c
				v22 = g23;
				if (*(int32_t *)(v22 - 0x4f20) != 0) {
					// 0x3be58
					if (*(int32_t *)(v22 - 0x4f24) != 0) {
						// 0x3be64
						if (*(int32_t *)(v22 - 0x4f28) != 0) {
							// 0x3be70
							g37 = 3;
							g36 = random(0);
							// branch -> 0x3be80
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// 0x3be80
				// branch -> 0x3be80
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
	}
	// 0x3bed4
	g36 = 1;
	if (*v32 == 0) {
		// 0x3bee4
		if (*(int32_t *)(v19 - 0x4f30) != 0) {
			// 0x3bef0
			if (*(int32_t *)(v19 - 0x4f34) != 0) {
				// 0x3befc
				g37 = 2;
				if (random(0) != 0) {
					// 0x3bf10
					g36 = 2;
					// branch -> 0x3bf14
				}
				// 0x3bf14
				v24 = g23;
				if (*(int32_t *)(v24 - 0x4f2c) != 0) {
					// 0x3bf20
					if (*(int32_t *)(v24 - 0x4f30) != 0) {
						// 0x3bf2c
						if (*(int32_t *)(v24 - 0x4f34) == 0) {
							// 0x3bf38
							g37 = 2;
							if (random(0) != 0) {
								// 0x3bf4c
								g36 = 0;
								// branch -> 0x3bf50
							}
						}
					}
				}
				// 0x3bf50
				v25 = g23;
				if (*(int32_t *)(v25 - 0x4f2c) != 0) {
					// 0x3bf5c
					if (*(int32_t *)(v25 - 0x4f30) == 0) {
						// 0x3bf68
						if (*(int32_t *)(v25 - 0x4f34) != 0) {
							// 0x3bf74
							g37 = 2;
							if (random(0) == 0) {
								// 0x3bf90
								g36 = 2;
								// branch -> 0x3bf94
							} else {
								// 0x3bf88
								g36 = 0;
								// branch -> 0x3bf94
							}
							// 0x3bf94
							v26 = g23;
							if (*(int32_t *)(v26 - 0x4f2c) != 0) {
								// 0x3bfa0
								if (*(int32_t *)(v26 - 0x4f30) != 0) {
									// 0x3bfac
									if (*(int32_t *)(v26 - 0x4f34) != 0) {
										// 0x3bfb8
										g37 = 3;
										v37 = random(0);
										g36 = v37;
										v27 = v37;
										// branch -> 0x3bfc8
										// 0x3bfc8
										if (v27 == 1) {
											// 0x3bffc
											function_3b8cc(16, 16);
											// branch -> 0x3c018
										} else {
											// 0x3bfd0
											if (v27 > 1) {
												// 0x3bfe0
												if (v27 == 2) {
													// 0x3c00c
													function_3b8cc(16, 30);
													// branch -> 0x3c018
												}
											} else {
												// 0x3bfd4
												if (v27 > -1) {
													// 0x3bfec
													function_3b8cc(16, 2);
													// branch -> 0x3c018
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// 0x3bfc8
							// branch -> 0x3bfc8
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// 0x3bf94
				v26 = g23;
				if (*(int32_t *)(v26 - 0x4f2c) != 0) {
					// 0x3bfa0
					if (*(int32_t *)(v26 - 0x4f30) != 0) {
						// 0x3bfac
						if (*(int32_t *)(v26 - 0x4f34) != 0) {
							// 0x3bfb8
							g37 = 3;
							g36 = random(0);
							// branch -> 0x3bfc8
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// 0x3bfc8
				// branch -> 0x3bfc8
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x3bf14
			v24 = g23;
			if (*(int32_t *)(v24 - 0x4f2c) != 0) {
				// 0x3bf20
				if (*(int32_t *)(v24 - 0x4f30) != 0) {
					// 0x3bf2c
					if (*(int32_t *)(v24 - 0x4f34) == 0) {
						// 0x3bf38
						g37 = 2;
						if (random(0) != 0) {
							// 0x3bf4c
							g36 = 0;
							// branch -> 0x3bf50
						}
					}
				}
			}
			// 0x3bf50
			v25 = g23;
			if (*(int32_t *)(v25 - 0x4f2c) != 0) {
				// 0x3bf5c
				if (*(int32_t *)(v25 - 0x4f30) == 0) {
					// 0x3bf68
					if (*(int32_t *)(v25 - 0x4f34) != 0) {
						// 0x3bf74
						g37 = 2;
						if (random(0) == 0) {
							// 0x3bf90
							g36 = 2;
							// branch -> 0x3bf94
						} else {
							// 0x3bf88
							g36 = 0;
							// branch -> 0x3bf94
						}
						// 0x3bf94
						v26 = g23;
						if (*(int32_t *)(v26 - 0x4f2c) != 0) {
							// 0x3bfa0
							if (*(int32_t *)(v26 - 0x4f30) != 0) {
								// 0x3bfac
								if (*(int32_t *)(v26 - 0x4f34) != 0) {
									// 0x3bfb8
									g37 = 3;
									g36 = random(0);
									// branch -> 0x3bfc8
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// 0x3bfc8
						// branch -> 0x3bfc8
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// 0x3bf94
			v26 = g23;
			if (*(int32_t *)(v26 - 0x4f2c) != 0) {
				// 0x3bfa0
				if (*(int32_t *)(v26 - 0x4f30) != 0) {
					// 0x3bfac
					if (*(int32_t *)(v26 - 0x4f34) != 0) {
						// 0x3bfb8
						g37 = 3;
						g36 = random(0);
						// branch -> 0x3bfc8
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// 0x3bfc8
			// branch -> 0x3bfc8
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x3bf14
		v24 = g23;
		if (*(int32_t *)(v24 - 0x4f2c) != 0) {
			// 0x3bf20
			if (*(int32_t *)(v24 - 0x4f30) != 0) {
				// 0x3bf2c
				if (*(int32_t *)(v24 - 0x4f34) == 0) {
					// 0x3bf38
					g37 = 2;
					if (random(0) != 0) {
						// 0x3bf4c
						g36 = 0;
						// branch -> 0x3bf50
					}
				}
			}
		}
		// 0x3bf50
		v25 = g23;
		if (*(int32_t *)(v25 - 0x4f2c) != 0) {
			// 0x3bf5c
			if (*(int32_t *)(v25 - 0x4f30) == 0) {
				// 0x3bf68
				if (*(int32_t *)(v25 - 0x4f34) != 0) {
					// 0x3bf74
					g37 = 2;
					if (random(0) == 0) {
						// 0x3bf90
						g36 = 2;
						// branch -> 0x3bf94
					} else {
						// 0x3bf88
						g36 = 0;
						// branch -> 0x3bf94
					}
					// 0x3bf94
					v26 = g23;
					if (*(int32_t *)(v26 - 0x4f2c) != 0) {
						// 0x3bfa0
						if (*(int32_t *)(v26 - 0x4f30) != 0) {
							// 0x3bfac
							if (*(int32_t *)(v26 - 0x4f34) != 0) {
								// 0x3bfb8
								g37 = 3;
								g36 = random(0);
								// branch -> 0x3bfc8
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// 0x3bfc8
					// branch -> 0x3bfc8
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bf94
		v26 = g23;
		if (*(int32_t *)(v26 - 0x4f2c) != 0) {
			// 0x3bfa0
			if (*(int32_t *)(v26 - 0x4f30) != 0) {
				// 0x3bfac
				if (*(int32_t *)(v26 - 0x4f34) != 0) {
					// 0x3bfb8
					g37 = 3;
					g36 = random(0);
					// branch -> 0x3bfc8
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bfc8
		// branch -> 0x3bfc8
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x3bf14
	v24 = g23;
	if (*(int32_t *)(v24 - 0x4f2c) != 0) {
		// 0x3bf20
		if (*(int32_t *)(v24 - 0x4f30) != 0) {
			// 0x3bf2c
			if (*(int32_t *)(v24 - 0x4f34) == 0) {
				// 0x3bf38
				g37 = 2;
				if (random(0) != 0) {
					// 0x3bf4c
					g36 = 0;
					// branch -> 0x3bf50
				}
				// 0x3bf50
				v25 = g23;
				if (*(int32_t *)(v25 - 0x4f2c) != 0) {
					// 0x3bf5c
					if (*(int32_t *)(v25 - 0x4f30) == 0) {
						// 0x3bf68
						if (*(int32_t *)(v25 - 0x4f34) != 0) {
							// 0x3bf74
							g37 = 2;
							if (random(0) == 0) {
								// 0x3bf90
								g36 = 2;
								// branch -> 0x3bf94
							} else {
								// 0x3bf88
								g36 = 0;
								// branch -> 0x3bf94
							}
							// 0x3bf94
							v26 = g23;
							if (*(int32_t *)(v26 - 0x4f2c) != 0) {
								// 0x3bfa0
								if (*(int32_t *)(v26 - 0x4f30) != 0) {
									// 0x3bfac
									if (*(int32_t *)(v26 - 0x4f34) != 0) {
										// 0x3bfb8
										g37 = 3;
										g36 = random(0);
										// branch -> 0x3bfc8
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// 0x3bfc8
							// branch -> 0x3bfc8
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// 0x3bf94
				v26 = g23;
				if (*(int32_t *)(v26 - 0x4f2c) != 0) {
					// 0x3bfa0
					if (*(int32_t *)(v26 - 0x4f30) != 0) {
						// 0x3bfac
						if (*(int32_t *)(v26 - 0x4f34) != 0) {
							// 0x3bfb8
							g37 = 3;
							g36 = random(0);
							// branch -> 0x3bfc8
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// 0x3bfc8
				// branch -> 0x3bfc8
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0x3bf50
		v25 = g23;
		if (*(int32_t *)(v25 - 0x4f2c) != 0) {
			// 0x3bf5c
			if (*(int32_t *)(v25 - 0x4f30) == 0) {
				// 0x3bf68
				if (*(int32_t *)(v25 - 0x4f34) != 0) {
					// 0x3bf74
					g37 = 2;
					if (random(0) == 0) {
						// 0x3bf90
						g36 = 2;
						// branch -> 0x3bf94
					} else {
						// 0x3bf88
						g36 = 0;
						// branch -> 0x3bf94
					}
					// 0x3bf94
					v26 = g23;
					if (*(int32_t *)(v26 - 0x4f2c) != 0) {
						// 0x3bfa0
						if (*(int32_t *)(v26 - 0x4f30) != 0) {
							// 0x3bfac
							if (*(int32_t *)(v26 - 0x4f34) != 0) {
								// 0x3bfb8
								g37 = 3;
								g36 = random(0);
								// branch -> 0x3bfc8
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// 0x3bfc8
					// branch -> 0x3bfc8
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bf94
		v26 = g23;
		if (*(int32_t *)(v26 - 0x4f2c) != 0) {
			// 0x3bfa0
			if (*(int32_t *)(v26 - 0x4f30) != 0) {
				// 0x3bfac
				if (*(int32_t *)(v26 - 0x4f34) != 0) {
					// 0x3bfb8
					g37 = 3;
					g36 = random(0);
					// branch -> 0x3bfc8
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x3bfc8
		// branch -> 0x3bfc8
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x3bf50
	v25 = g23;
	if (*(int32_t *)(v25 - 0x4f2c) != 0) {
		// 0x3bf5c
		if (*(int32_t *)(v25 - 0x4f30) == 0) {
			// 0x3bf68
			if (*(int32_t *)(v25 - 0x4f34) != 0) {
				// 0x3bf74
				g37 = 2;
				if (random(0) == 0) {
					// 0x3bf90
					g36 = 2;
					// branch -> 0x3bf94
				} else {
					// 0x3bf88
					g36 = 0;
					// branch -> 0x3bf94
				}
				// 0x3bf94
				v26 = g23;
				if (*(int32_t *)(v26 - 0x4f2c) != 0) {
					// 0x3bfa0
					if (*(int32_t *)(v26 - 0x4f30) != 0) {
						// 0x3bfac
						if (*(int32_t *)(v26 - 0x4f34) != 0) {
							// 0x3bfb8
							g37 = 3;
							g36 = random(0);
							// branch -> 0x3bfc8
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// 0x3bfc8
				// branch -> 0x3bfc8
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x3bf94
			v26 = g23;
			if (*(int32_t *)(v26 - 0x4f2c) != 0) {
				// 0x3bfa0
				if (*(int32_t *)(v26 - 0x4f30) != 0) {
					// 0x3bfac
					if (*(int32_t *)(v26 - 0x4f34) != 0) {
						// 0x3bfb8
						g37 = 3;
						g36 = random(0);
						// branch -> 0x3bfc8
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// 0x3bfc8
			// branch -> 0x3bfc8
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// 0x3bf94
	v26 = g23;
	if (*(int32_t *)(v26 - 0x4f2c) != 0) {
		// 0x3bfa0
		if (*(int32_t *)(v26 - 0x4f30) != 0) {
			// 0x3bfac
			if (*(int32_t *)(v26 - 0x4f34) != 0) {
				// 0x3bfb8
				g37 = 3;
				g36 = random(0);
				// branch -> 0x3bfc8
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x3bfc8
			// branch -> 0x3bfc8
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x3c02c - 0x3c374
int32_t function_3c02c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	// 0x3c02c
	g32 = *(int32_t *)(g23 - 0x7588);
	g31 = a1;
	g36 = *(int32_t *)(g23 - 0x7518);
	g26 = a2;
	g34 = 0x30d40;
	g19 = a3;
	g33 = a4;
	g17 = a5;
	g16 = a6;
	g35 = 0;
	g34 = DiabloAllocPtr();
	int32_t v1 = g35; // 0x3c078
	// branch -> 0x3c070
	while (true) {
		// 0x3c070
		int32_t v2; // 0x3c098
		int32_t v3; // 0x3c0d0
		int32_t v4; // 0x3c0a0
		if (v1 < 1) {
			// 0x3c070
			v3 = v1;
			v4 = g33;
			v2 = g19;
			// branch -> 0x3c098
		} else {
			int32_t v5 = v1 - 1; // 0x3c078
			g35 = v5;
			int32_t v6 = g34 + 20 * v5; // 0x3c080
			g31 = *(int32_t *)v6;
			g26 = *(int32_t *)(v6 + 4);
			int32_t v7 = *(int32_t *)(v6 + 8); // 0x3c08c
			g19 = v7;
			int32_t v8 = *(int32_t *)(v6 + 12); // 0x3c090
			g33 = v8;
			g17 = *(int32_t *)(v6 + 16);
			v3 = v5;
			v4 = v8;
			v2 = v7;
			// branch -> 0x3c098
		}
		int32_t v9 = 112 * v2;                           // 0x3c098
		int32_t v10 = v9;                                // r5
		char *v11 = (char *)(v9 + v4 + *(int32_t *)g32); // 0x3c0a8
		int32_t v12;                                     // 0x3c354
		if (*v11 == 0) {
			int32_t v13 = (int32_t) * (char *)(g26 + 40 * g31 + *(int32_t *)(g23 - 0x77cc)); // 0x3c0c0
			if (g16 % 256 == v13) {
				// 0x3c0cc
				*v11 = *(char *)g36;
				int32_t v14 = g33 + v10; // 0x3c0e0
				*(char *)(*(int32_t *)g32 + v14 + 112) = *(char *)g36;
				int32_t v15 = g26 + 1; // r12
				g30 = g19 + 2;
				*(char *)(v14 + 1 + *(int32_t *)g32) = *(char *)g36;
				int32_t v16 = g31 + 1; // r0
				v10 = g34 + 20 * g35;
				g29 = g33 + 2;
				*(char *)(*(int32_t *)g32 + v14 + 113) = *(char *)g36;
				int32_t v17 = 20 * (v3 + 1) + g34; // r4
				*(int32_t *)v10 = v16;
				int32_t v18 = 20 * (v3 + 2) + g34; // r9
				*(int32_t *)(v10 + 4) = v15;
				int32_t v19 = g35 + 3; // 0x3c150
				g28 = g31 - 1;
				*(int32_t *)(v10 + 8) = g30;
				g27 = g19 - 2;
				*(int32_t *)(v10 + 12) = g29;
				int32_t v20 = g35 + 7; // 0x3c168
				int32_t v21 = g26 - 1; // r10
				*(int32_t *)(v10 + 16) = 8;
				v10 = 20 * (v3 + 4) + g34;
				*(int32_t *)v17 = g28;
				int32_t v22 = g35;     // 0x3c180
				int32_t v23 = g35 + 5; // 0x3c184
				int32_t v24 = g33 - 2; // r11
				*(int32_t *)(v17 + 4) = v15;
				g35 += 8;
				*(int32_t *)(v17 + 8) = g27;
				int32_t v25 = 20 * v23 + g34; // r6
				*(int32_t *)(v17 + 12) = g29;
				int32_t v26 = 20 * v19 + g34; // r8
				*(int32_t *)(v17 + 16) = 7;
				int32_t v27 = g34; // 0x3c1b0
				v17 = 20 * v20 + v27;
				int32_t v28 = 20 * (v22 + 6) + v27; // r7
				*(int32_t *)v18 = v16;
				g25 = 5;
				*(int32_t *)(v18 + 4) = v21;
				g24 = 4;
				*(int32_t *)(v18 + 8) = g30;
				*(int32_t *)(v18 + 12) = v24;
				*(int32_t *)(v18 + 16) = 6;
				*(int32_t *)v26 = g28;
				*(int32_t *)(v26 + 4) = v21;
				*(int32_t *)(v26 + 8) = g27;
				*(int32_t *)(v26 + 12) = v24;
				*(int32_t *)(v26 + 16) = g25;
				*(int32_t *)v10 = g31;
				*(int32_t *)(v10 + 4) = v21;
				*(int32_t *)(v10 + 8) = g19;
				*(int32_t *)(v10 + 12) = v24;
				*(int32_t *)(v10 + 16) = g24;
				*(int32_t *)v25 = g31;
				*(int32_t *)(v25 + 4) = v15;
				*(int32_t *)(v25 + 8) = g19;
				*(int32_t *)(v25 + 12) = g29;
				*(int32_t *)(v25 + 16) = 3;
				*(int32_t *)v28 = g28;
				*(int32_t *)(v28 + 4) = g26;
				*(int32_t *)(v28 + 8) = g27;
				*(int32_t *)(v28 + 12) = g33;
				*(int32_t *)(v28 + 16) = 2;
				*(int32_t *)v17 = v16;
				*(int32_t *)(v17 + 4) = g26;
				*(int32_t *)(v17 + 8) = g30;
				*(int32_t *)(v17 + 12) = g33;
				*(int32_t *)(v17 + 16) = 1;
				v12 = g35;
				// branch -> 0x3c354
			lab_0x3c354:
				// 0x3c354
				if (v12 <= 0) {
					// break -> 0x3c35c
					break;
				}
				v1 = v12;
				// continue -> 0x3c070
				continue;
			}
		}
		// 0x3c24c
		if (g17 > 8) {
			v12 = v3;
			goto lab_0x3c354;
		}
		// 0x3c254
		return g34;
	}
	int32_t result = mem_free_dbg(); // 0x3c35c
	return result;
}

// Address range: 0x3c374 - 0x3c438
int32_t DRLG_LXTransFix(int32_t result)
{
	g33 = *(int32_t *)(g23 - 0x7588);
	int32_t v1 = result; // 0x3c380
	g25 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x3c388
	g30 = v2;
	g36 = v1 % 256;
	g26 = 16;
	g28 = 0;
	// branch -> 0x3c3a0
	while (true) {
		// 0x3c3a0
		g27 = 16;
		g29 = 0;
		int32_t v3 = 16;   // 0x3c3d8
		int32_t v4 = 0;    // 0x3c3d0
		int32_t v5 = 1792; // 0x3c3c0
		int32_t v6 = v2;   // 0x3c3b0
		// branch -> 0x3c3b0
		while (true) {
			int32_t v7 = v5;  // 0x3c408
			int32_t v8 = v6;  // 0x3c404
			int32_t v9 = v3;  // 0x3c3fc
			int32_t v10 = v4; // 0x3c3f8
			if (g36 == (int32_t) * (char *)v6) {
				int32_t v11 = g26; // 0x3c3c4
				if (*(char *)(v11 + *(int32_t *)g33 + v5) == 0) {
					// 0x3c3d0
					function_3c02c(v4, g28, v3, v11, 0, g25);
					char *v12 = (char *)g35;  // 0x3c3ec
					unsigned char v13 = *v12; // 0x3c3ec
					result = v13;
					*v12 = v13 + 1;
					v7 = g31;
					v8 = g32;
					v9 = g27;
					v10 = g29;
					// branch -> 0x3c3f8
				} else {
					v7 = v5;
					v8 = v6;
					v9 = v3;
					v10 = v4;
				}
			}
			int32_t v14 = v10 + 1; // 0x3c3f8
			g29 = v14;
			int32_t v15 = v9 + 2; // 0x3c3fc
			g27 = v15;
			int32_t v16 = v8 + 40;  // 0x3c404
			int32_t v17 = v7 + 224; // 0x3c408
			g31 = v17;
			if (v14 >= 40) {
				// break -> 0x3c410
				break;
			}
			v3 = v15;
			v4 = v14;
			v5 = v17;
			v6 = v16;
			// continue -> 0x3c3b0
		}
		int32_t v18 = g28 + 1; // 0x3c410
		g28 = v18;
		int32_t v19 = g30 + 1; // 0x3c414
		g30 = v19;
		g26 += 2;
		if (v18 >= 40) {
			// break -> 0x3c424
			break;
		}
		v2 = v19;
		// continue -> 0x3c3a0
	}
	// 0x3c424
	return result;
}

// Address range: 0x3c438 - 0x3c5ac
int32_t function_3c438(void)
{
	int32_t result = *(int32_t *)(g23 - 0x7588); // r3
	int32_t v1 = 16;                             // r8
	int32_t v2 = *(int32_t *)(g23 - 0x77cc);     // 0x3c440
	int32_t v3 = 0;                              // r7
	// branch -> 0x3c448
	while (true) {
		int32_t v4 = v2;   // r4
		int32_t v5 = 40;   // ctr
		int32_t v6 = 1792; // r5
		int32_t v7 = 1792; // 0x3c474
		int32_t v8 = v2;   // 0x3c464
		// branch -> 0x3c458
		while (true) {
			int32_t v9 = v8; // 0x3c4a4
			if (*(char *)v8 == 23) {
				// 0x3c464
				if (*(char *)(v8 - 1) == 18) {
					int32_t v10 = *(int32_t *)result + v7 + v1; // 0x3c478
					*(char *)(v10 + 112) = *(char *)v10;
					int32_t v11 = v6 + *(int32_t *)result + v1; // 0x3c48c
					*(char *)(v11 + 113) = *(char *)v11;
					v9 = v4;
					// branch -> 0x3c498
				} else {
					v9 = v8;
				}
			}
			int32_t v12 = v9; // 0x3c4d8
			if (*(char *)v9 == 24) {
				// 0x3c4a4
				if (*(char *)(v9 + 40) == 19) {
					int32_t v13 = v6 + *(int32_t *)result + v1; // 0x3c4b8
					*(char *)(v13 + 1) = *(char *)v13;
					int32_t v14 = v6 + *(int32_t *)result + v1; // 0x3c4cc
					*(char *)(v14 + 113) = *(char *)v14;
					v12 = v4;
					// branch -> 0x3c4d8
				} else {
					v12 = v9;
				}
			}
			int32_t v15 = v12; // 0x3c50c
			if (*(char *)v12 == 18) {
				int32_t v16 = v6 + *(int32_t *)result + v1; // 0x3c4ec
				*(char *)(v16 + 112) = *(char *)v16;
				int32_t v17 = v6 + *(int32_t *)result + v1; // 0x3c500
				*(char *)(v17 + 113) = *(char *)v17;
				v15 = v4;
				// branch -> 0x3c50c
			}
			int32_t v18 = v15; // 0x3c540
			if (*(char *)v15 == 19) {
				int32_t v19 = v6 + *(int32_t *)result + v1; // 0x3c520
				*(char *)(v19 + 1) = *(char *)v19;
				int32_t v20 = v6 + *(int32_t *)result + v1; // 0x3c534
				*(char *)(v20 + 113) = *(char *)v20;
				v18 = v4;
				// branch -> 0x3c540
			}
			int32_t v21 = v18; // 0x3c58c
			if (*(char *)v18 == 20) {
				int32_t v22 = v6 + *(int32_t *)result + v1; // 0x3c554
				*(char *)(v22 + 112) = *(char *)v22;
				int32_t v23 = v6 + *(int32_t *)result + v1; // 0x3c568
				*(char *)(v23 + 1) = *(char *)v23;
				int32_t v24 = v6 + *(int32_t *)result + v1; // 0x3c57c
				*(char *)(v24 + 113) = *(char *)v24;
				v21 = v4;
				// branch -> 0x3c588
			}
			int32_t v25 = v6 + 224; // 0x3c588
			v6 = v25;
			int32_t v26 = v21 + 40; // 0x3c58c
			v4 = v26;
			int32_t v27 = v5 - 1; // 0x3c590
			v5 = v27;
			if (v27 == 0) {
				// break -> 0x3c594
				break;
			}
			v7 = v25;
			v8 = v26;
			// continue -> 0x3c458
		}
		int32_t v28 = v3 + 1; // 0x3c594
		v3 = v28;
		v1 += 2;
		if (v28 >= 40) {
			// break -> 0x3c5a8
			break;
		}
		v2++;
		// continue -> 0x3c448
	}
	// 0x3c5a8
	return result;
}

// Address range: 0x3c5ac - 0x3c764
int32_t function_3c5ac(int32_t a1)
{
	int32_t v1 = 0;                          // r6
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x3c5b0
	// branch -> 0x3c5b4
	int32_t result; // 0x3c744
	while (true) {
		int32_t v3 = 20; // ctr
		int32_t v4 = v2; // r3
		int32_t v5 = 0;  // r5
		int32_t v6 = v2; // 0x3c5e0
		// branch -> 0x3c5c4
		while (true) {
			char *v7 = (char *)v6; // 0x3c5c4
			int32_t v8 = v6;       // 0x3c600
			char *v9;              // 0x3c5e4
			int32_t v10;           // 0x3c620
			if (*v7 == 21) {
				// 0x3c5d0
				if (*(char *)(v6 + 40) != 19) {
					// 0x3c5dc
					*v7 = -54;
					v8 = v4;
					// branch -> 0x3c5e4
				} else {
					v8 = v6;
				}
				// 0x3c5e4
				v9 = (char *)v8;
				v10 = v8;
				if (*v9 == 19) {
				lab_0x3c5f0:
					// 0x3c5f0
					if (*(char *)(v8 + 40) != 19) {
						// 0x3c5fc
						*v9 = -56;
						v10 = v4;
						// branch -> 0x3c604
					} else {
						v10 = v8;
					}
				}
			lab_0x3c604:;
				char *v11 = (char *)v10; // 0x3c604
				int32_t v12 = v10;       // 0x3c640
				if (*v11 == 24) {
					// 0x3c610
					if (*(char *)(v10 + 40) != 19) {
						// 0x3c61c
						*v11 = -51;
						v12 = v4;
						// branch -> 0x3c624
					} else {
						v12 = v10;
					}
				}
				char *v13 = (char *)v12; // 0x3c624
				int32_t v14 = v12;       // 0x3c660
				if (*v13 == 18) {
					// 0x3c630
					if (*(char *)(v12 + 1) != 18) {
						// 0x3c63c
						*v13 = -57;
						v14 = v4;
						// branch -> 0x3c644
					} else {
						v14 = v12;
					}
				}
				char *v15 = (char *)v14; // 0x3c644
				int32_t v16 = v14;       // 0x3c680
				if (*v15 == 21) {
					// 0x3c650
					if (*(char *)(v14 + 1) != 18) {
						// 0x3c65c
						*v15 = -54;
						v16 = v4;
						// branch -> 0x3c664
					} else {
						v16 = v14;
					}
				}
				char *v17 = (char *)v16; // 0x3c664
				int32_t v18 = v16;       // 0x3c684
				if (*v17 == 23) {
					// 0x3c670
					if (*(char *)(v16 + 1) != 18) {
						// 0x3c67c
						*v17 = -52;
						v18 = v4;
						// branch -> 0x3c684
					} else {
						v18 = v16;
					}
				}
				int32_t v19 = v18 + 40;  // 0x3c684
				char *v20 = (char *)v19; // 0x3c684
				v4 = v19;
				int32_t v21 = v19; // 0x3c6c0
				if (*v20 == 21) {
					// 0x3c690
					if (*(char *)(v18 + 80) != 19) {
						// 0x3c69c
						*v20 = -54;
						v21 = v4;
						// branch -> 0x3c6a4
					} else {
						v21 = v19;
					}
				}
				char *v22 = (char *)v21; // 0x3c6a4
				int32_t v23 = v21;       // 0x3c6e0
				if (*v22 == 19) {
					// 0x3c6b0
					if (*(char *)(v21 + 40) != 19) {
						// 0x3c6bc
						*v22 = -56;
						v23 = v4;
						// branch -> 0x3c6c4
					} else {
						v23 = v21;
					}
				}
				char *v24 = (char *)v23; // 0x3c6c4
				int32_t v25 = v23;       // 0x3c700
				if (*v24 == 24) {
					// 0x3c6d0
					if (*(char *)(v23 + 40) != 19) {
						// 0x3c6dc
						*v24 = -51;
						v25 = v4;
						// branch -> 0x3c6e4
					} else {
						v25 = v23;
					}
				}
				char *v26 = (char *)v25; // 0x3c6e4
				int32_t v27 = v25;       // 0x3c720
				if (*v26 == 18) {
					// 0x3c6f0
					if (*(char *)(v25 + 1) != 18) {
						// 0x3c6fc
						*v26 = -57;
						v27 = v4;
						// branch -> 0x3c704
					} else {
						v27 = v25;
					}
				}
				char *v28 = (char *)v27; // 0x3c704
				int32_t v29 = v27;       // 0x3c740
				if (*v28 == 21) {
					// 0x3c710
					if (*(char *)(v27 + 1) != 18) {
						// 0x3c71c
						*v28 = -54;
						v29 = v4;
						// branch -> 0x3c724
					} else {
						v29 = v27;
					}
				}
				char *v30 = (char *)v29; // 0x3c724
				int32_t v31 = v29;       // 0x3c744
				if (*v30 == 23) {
					// 0x3c730
					if (*(char *)(v29 + 1) != 18) {
						// 0x3c73c
						*v30 = -52;
						v31 = v4;
						// branch -> 0x3c744
					} else {
						v31 = v29;
					}
				}
				// 0x3c744
				result = v31 + 40;
				v4 = result;
				v5++;
				int32_t v32 = v3 - 1; // 0x3c74c
				v3 = v32;
				if (v32 == 0) {
					// break -> 0x3c750
					break;
				}
				v6 = result;
				// continue -> 0x3c5c4
				continue;
			}
			// 0x3c5e4
			v9 = (char *)v8;
			if (*v9 == 19) {
				goto lab_0x3c5f0;
			}
			v10 = v8;
			goto lab_0x3c604;
		}
		int32_t v33 = v1 + 1; // 0x3c750
		v1 = v33;
		if (v33 >= 40) {
			// break -> 0x3c760
			break;
		}
		v2++;
		// continue -> 0x3c5b4
	}
	// 0x3c760
	return result;
}

// Address range: 0x3c764 - 0x3c898
int32_t function_3c764(int32_t a1)
{
	int32_t v1 = 1;                              // r8
	int32_t v2 = *(int32_t *)(g23 - 0x7514) + 1; // 0x3c770
	int32_t v3 = *(int32_t *)(g23 - 0x77cc) + 1; // 0x3c774
	// branch -> 0x3c778
	int32_t result; // 0x3c870
	while (true) {
		int32_t v4 = v2 + 40; // 0x3c77c
		int32_t v5 = 19;      // ctr
		int32_t v6 = v3 + 40; // r4
		int32_t v7 = 1;       // r7
		// branch -> 0x3c78c
		while (true) {
			// 0x3c78c
			if (__asm_rlwinm_((int32_t) * (char *)v4, 0, 24, 24) == 0) {
				int32_t v8 = v6;       // 0x3c798
				char *v9 = (char *)v8; // 0x3c798
				if (*v9 == 17) {
					// 0x3c7a4
					if (*(char *)(v8 - 40) == 13) {
						// 0x3c7b0
						if (*(char *)(v8 - 1) == 1) {
							// 0x3c7bc
							*v9 = 16;
							int32_t v10 = __asm_rlwinm((int32_t) * (char *)(v4 - 1), 0, 24, 24); // 0x3c7c8
							*(char *)(v4 - 1) = (char)v10;
							// branch -> 0x3c7d0
						}
					}
				}
			}
			int32_t v11 = v6;        // 0x3c7d0
			char *v12 = (char *)v11; // 0x3c7d0
			int32_t v13 = v11;       // 0x3c800
			if (*v12 == -54) {
				// 0x3c7dc
				if (*(char *)(v11 + 40) == 13) {
					// 0x3c7e8
					if (*(char *)(v11 + 1) == 1) {
						// 0x3c7f4
						*v12 = 8;
						v13 = v6;
						// branch -> 0x3c7fc
					} else {
						v13 = v11;
					}
				} else {
					v13 = v11;
				}
			}
			int32_t v14 = v4 + 40; // 0x3c7fc
			v4 = v14;
			v6 = v13 + 40;
			if (__asm_rlwinm_((int32_t) * (char *)v14, 0, 24, 24) == 0) {
				int32_t v15 = v6;        // 0x3c80c
				char *v16 = (char *)v15; // 0x3c80c
				if (*v16 == 17) {
					// 0x3c818
					if (*(char *)(v15 - 40) == 13) {
						// 0x3c824
						if (*(char *)(v15 - 1) == 1) {
							// 0x3c830
							*v16 = 16;
							int32_t v17 = __asm_rlwinm((int32_t) * (char *)(v4 - 1), 0, 24, 24); // 0x3c83c
							*(char *)(v4 - 1) = (char)v17;
							// branch -> 0x3c844
						}
					}
				}
			}
			int32_t v18 = v6;        // 0x3c844
			char *v19 = (char *)v18; // 0x3c844
			int32_t v20 = v18;       // 0x3c874
			if (*v19 == -54) {
				// 0x3c850
				if (*(char *)(v18 + 40) == 13) {
					// 0x3c85c
					if (*(char *)(v18 + 1) == 1) {
						// 0x3c868
						*v19 = 8;
						v20 = v6;
						// branch -> 0x3c870
					} else {
						v20 = v18;
					}
				} else {
					v20 = v18;
				}
			}
			// 0x3c870
			result = v4 + 40;
			v6 = v20 + 40;
			v7++;
			int32_t v21 = v5 - 1; // 0x3c87c
			v5 = v21;
			if (v21 == 0) {
				// break -> 0x3c880
				break;
			}
			v4 = result;
			// continue -> 0x3c78c
		}
		int32_t v22 = v1 + 1; // 0x3c880
		v1 = v22;
		if (v22 >= 39) {
			// break -> 0x3c894
			break;
		}
		v3++;
		v2++;
		// continue -> 0x3c778
	}
	// 0x3c894
	return result;
}

// Address range: 0x3c898 - 0x3cf44
int32_t DRLG_L5(int32_t a1)
{
	unsigned char v1 = *(char *)*(int32_t *)(g23 - 0x77e4); // 0x3c8d4
	int32_t v2;                                             // 0x3c914
	if (v1 == 2) {
		// 0x3c904
		// branch -> 0x3c914
	} else {
		// 0x3c8e0
		if (v1 > 2) {
			// 0x3c8f0
			if (v1 <= 4) {
				// 0x3c90c
				// branch -> 0x3c914
			}
		} else {
			// 0x3c8e4
			if (v1 != 0) {
				// 0x3c8fc
				// branch -> 0x3c914
			}
		}
		int32_t v3 = a1;
		// branch -> 0x3c914
		while (true) {
			// 0x3c914
			v2 = v3;
			// branch -> 0x3c914
		lab_0x3c914:
			while (true) {
				// 0x3c914
				DRLG_InitTrans(v2);
				int32_t v4 = function_3974c();   // 0x3c918
				int32_t v5 = function_39c94(v4); // 0x3c91c
				int32_t v6 = function_3a190(v5); // 0x3c920
				// branch -> 0x3c918
				while (v6 < g27) {
					// 0x3c918
					v4 = function_3974c();
					v5 = function_39c94(v4);
					v6 = function_3a190(v5);
					// continue -> 0x3c918
				}
				int32_t v7 = function_3a3a8(function_3a28c(v6)); // 0x3c930
				int32_t v8 = function_3b11c(function_3b9d0(v7)); // 0x3c938
				g34 = v8;
				function_397d0(function_3ab48(v8));
				DRLG_LXTransFix(13);
				int32_t v9;  // 0x3ca90
				int32_t v10; // 0x3c9dc
				if (QuestStatus(13) != 0) {
					int32_t v11 = g36; // 0x3c968
					if (g25 == 0) {
						// 0x3c968
						g13 = 0;
						if (DRLG_PlaceMiniSet((char *)v11, 1, 1, 0, 0, 1, -1) <= 0xffffffff) {
							// 0x3c994
							// branch -> 0x3c9d8
						}
					} else {
						// 0x3c99c
						g13 = 0;
						if (DRLG_PlaceMiniSet((char *)v11, 1, 1, 0, 0, 0, -1) <= 0xffffffff) {
							// 0x3c9c8
							// branch -> 0x3c9cc
						}
						int32_t *v12 = (int32_t *)g33; // 0x3c9cc
						*v12 = *v12 - 1;
						// branch -> 0x3c9d8
					}
					// 0x3c9d8
					v10 = QuestStatus(7);
					v9 = g25;
					int32_t v13; // r21
					int32_t v14; // r22
					int32_t v15; // r23
					int32_t v16; // r24
					int32_t v17; // r25
					int32_t v18; // r26
					int32_t v19; // r29
					int32_t v20; // r30
					int32_t v21; // r3
					int32_t v22;
					int32_t v23; // 0x3cb78
					int32_t v24; // 0x3cb88
					int32_t v25; // 0x3cb8c
					int32_t v26; // 0x3cb98
					int32_t v27; // 0x3cba8
					int32_t v28; // 0x3cbcc14
					int32_t v29; // 0x3cb78
					int32_t v30; // 0x3ca10
					if (v10 == 0) {
					lab_0x3ca90:;
						int32_t v31 = g29; // 0x3ca98
						if (v9 == 0) {
							// 0x3ca98
							g13 = 0;
							int32_t v32 = DRLG_PlaceMiniSet((char *)v31, 1, 1, 0, 0, 1, -1); // 0x3cab8
							int32_t v33;                                                  // 0x3caec
							if (v32 > -1) {
								// 0x3cacc
								g13 = 1;
								v33 = DRLG_PlaceMiniSet((char *)g28, 1, 1, 0, 0, 0, -1);
								v21 = v33;
								if (v33 > -1) {
								lab_0x3cb70_2:
									// 0x3cb70
									if (g26 != 0) {
										// 0x3cb78
										v29 = *(int32_t *)(g23 - 0x77cc);
										v19 = 0;
										v17 = 16;
										v15 = v29;
										v25 = 16;
										v24 = v29;
										// branch -> 0x3cb88
										while (true) {
											// 0x3cb88
											v13 = v24;
											v20 = v25;
											v18 = 0;
											v14 = 16;
											v28 = 0;
											v27 = 16;
											v26 = v24;
											// branch -> 0x3cb98
										lab_0x3cb98_4:
											while (true) {
												int32_t v34 = v26; // 0x3cbd8
												int32_t v35 = v27; // 0x3cbd0
												int32_t v36 = v28; // 0x3cbcc
												if (*(char *)v26 == 64) {
													int32_t v37 = v20; // 0x3cba4
													function_52b2c(v27, v37 + 1, v27, v37);
													int32_t v38 = v20; // 0x3cbbc
													function_52b2c(v38 + 1, v14 + 1, v38, v38);
													v34 = v13;
													v35 = v14;
													v36 = v18;
													// branch -> 0x3cbcc
												}
												int32_t v39 = v36 + 1; // 0x3cbcc
												v18 = v39;
												int32_t v40 = v35 + 2; // 0x3cbd0
												v14 = v40;
												int32_t v41 = v34 + 40; // 0x3cbd8
												v13 = v41;
												if (v39 >= 40) {
													// break -> 0x3cbe0
													break;
												}
												v28 = v39;
												v27 = v40;
												v26 = v41;
												// continue -> 0x3cb98
											}
											int32_t v42 = v19 + 1; // 0x3cbe0
											v19 = v42;
											int32_t v43 = v17 + 2; // 0x3cbe4
											v17 = v43;
											int32_t v44 = v15 + 1; // 0x3cbec
											v15 = v44;
											if (v42 >= 40) {
												// break -> 0x3cbf4
												break;
											}
											v25 = v43;
											v24 = v44;
											// continue -> 0x3cb88
										}
										int32_t v45 = function_3c438(); // 0x3cbf4
										function_3c764(function_3c5ac(v45));
										v15 = 0;
										int32_t v46 = *(int32_t *)(g23 - 0x7514); // 0x3cc04
										v14 = v46;
										// branch -> 0x3cc08
										while (true) {
											// 0x3cc08
											v17 = 0;
											v13 = v46;
											int32_t v47 = 0;   // 0x3cc1c
											int32_t v48 = v46; // 0x3cc10
											// branch -> 0x3cc10
											while (true) {
												int32_t v49 = v48; // 0x3cc2c
												int32_t v50 = v47; // 0x3cc28
												if (*(char *)v48 % 128 != 0) {
													// 0x3cc1c
													DRLG_PlaceDoor(v47, v15);
													v49 = v13;
													v50 = v17;
													// branch -> 0x3cc28
												}
												int32_t v51 = v50 + 1; // 0x3cc28
												v17 = v51;
												int32_t v52 = v49 + 40; // 0x3cc2c
												v13 = v52;
												if (v51 >= 40) {
													// break -> 0x3cc38
													break;
												}
												v47 = v51;
												v48 = v52;
												// continue -> 0x3cc10
											}
											int32_t v53 = v15 + 1; // 0x3cc38
											v15 = v53;
											int32_t v54 = v14 + 1; // 0x3cc3c
											v14 = v54;
											if (v53 >= 40) {
												// break -> 0x3cc48
												break;
											}
											v46 = v54;
											// continue -> 0x3cc08
										}
										// 0x3cc48
										DRLG_L1Shadows(DRLG_L5Subs());
										g13 = 4;
										g34 = DRLG_PlaceMiniSet((char *)(g23 - 0x1e91), 5, 10, 0, 0, 0, -1);
										function_38a78();
										int32_t v55 = *(int32_t *)(g23 - 0x7540); // 0x3cc7c
										int32_t v56 = 0;                          // r6
										*(char *)v55 = *(char *)g28;
										*(char *)(v55 + 40) = *(char *)(g28 + 40);
										*(char *)(v55 + 80) = *(char *)(g28 + 80);
										*(char *)(v55 + 120) = *(char *)(g28 + 120);
										*(char *)(v55 + 160) = *(char *)(g28 + 160);
										*(char *)(v55 + 200) = *(char *)(g28 + 200);
										*(char *)(v55 + 240) = *(char *)(g28 + 240);
										*(char *)(v55 + 280) = *(char *)(g28 + 280);
										*(char *)(v55 + 320) = *(char *)(g28 + 320);
										*(char *)(v55 + 360) = *(char *)(g28 + 360);
										*(char *)(v55 + 400) = *(char *)(g28 + 400);
										*(char *)(v55 + 440) = *(char *)(g28 + 440);
										*(char *)(v55 + 480) = *(char *)(g28 + 480);
										*(char *)(v55 + 520) = *(char *)(g28 + 520);
										*(char *)(v55 + 560) = *(char *)(g28 + 560);
										*(char *)(v55 + 600) = *(char *)(g28 + 600);
										*(char *)(v55 + 640) = *(char *)(g28 + 640);
										*(char *)(v55 + 680) = *(char *)(g28 + 680);
										*(char *)(v55 + 720) = *(char *)(g28 + 720);
										*(char *)(v55 + 760) = *(char *)(g28 + 760);
										*(char *)(v55 + 800) = *(char *)(g28 + 800);
										*(char *)(v55 + 840) = *(char *)(g28 + 840);
										*(char *)(v55 + 880) = *(char *)(g28 + 880);
										*(char *)(v55 + 920) = *(char *)(g28 + 920);
										*(char *)(v55 + 960) = *(char *)(g28 + 960);
										*(char *)(v55 + 1000) = *(char *)(g28 + 1000);
										*(char *)(v55 + 1040) = *(char *)(g28 + 1040);
										*(char *)(v55 + 1080) = *(char *)(g28 + 1080);
										*(char *)(v55 + 1120) = *(char *)(g28 + 1120);
										*(char *)(v55 + 1160) = *(char *)(g28 + 1160);
										*(char *)(v55 + 1200) = *(char *)(g28 + 1200);
										*(char *)(v55 + 1240) = *(char *)(g28 + 1240);
										*(char *)(v55 + 1280) = *(char *)(g28 + 1280);
										*(char *)(v55 + 1320) = *(char *)(g28 + 1320);
										*(char *)(v55 + 1360) = *(char *)(g28 + 1360);
										*(char *)(v55 + 1400) = *(char *)(g28 + 1400);
										*(char *)(v55 + 1440) = *(char *)(g28 + 1440);
										*(char *)(v55 + 1480) = *(char *)(g28 + 1480);
										*(char *)(v55 + 1520) = *(char *)(g28 + 1520);
										int32_t v57 = g28; // 0x3cdc0
										v16 = v57 + 1;
										*(char *)(v55 + 1560) = *(char *)(v57 + 1560);
										int32_t v58 = v55 + 1; // 0x3cdcc
										v55 = v58;
										v56++;
										*(char *)v58 = *(char *)v16;
										*(char *)(v55 + 40) = *(char *)(v16 + 40);
										*(char *)(v55 + 80) = *(char *)(v16 + 80);
										*(char *)(v55 + 120) = *(char *)(v16 + 120);
										*(char *)(v55 + 160) = *(char *)(v16 + 160);
										*(char *)(v55 + 200) = *(char *)(v16 + 200);
										*(char *)(v55 + 240) = *(char *)(v16 + 240);
										*(char *)(v55 + 280) = *(char *)(v16 + 280);
										*(char *)(v55 + 320) = *(char *)(v16 + 320);
										*(char *)(v55 + 360) = *(char *)(v16 + 360);
										*(char *)(v55 + 400) = *(char *)(v16 + 400);
										*(char *)(v55 + 440) = *(char *)(v16 + 440);
										*(char *)(v55 + 480) = *(char *)(v16 + 480);
										*(char *)(v55 + 520) = *(char *)(v16 + 520);
										*(char *)(v55 + 560) = *(char *)(v16 + 560);
										*(char *)(v55 + 600) = *(char *)(v16 + 600);
										*(char *)(v55 + 640) = *(char *)(v16 + 640);
										*(char *)(v55 + 680) = *(char *)(v16 + 680);
										*(char *)(v55 + 720) = *(char *)(v16 + 720);
										*(char *)(v55 + 760) = *(char *)(v16 + 760);
										*(char *)(v55 + 800) = *(char *)(v16 + 800);
										*(char *)(v55 + 840) = *(char *)(v16 + 840);
										*(char *)(v55 + 880) = *(char *)(v16 + 880);
										*(char *)(v55 + 920) = *(char *)(v16 + 920);
										*(char *)(v55 + 960) = *(char *)(v16 + 960);
										*(char *)(v55 + 1000) = *(char *)(v16 + 1000);
										*(char *)(v55 + 1040) = *(char *)(v16 + 1040);
										*(char *)(v55 + 1080) = *(char *)(v16 + 1080);
										*(char *)(v55 + 1120) = *(char *)(v16 + 1120);
										*(char *)(v55 + 1160) = *(char *)(v16 + 1160);
										*(char *)(v55 + 1200) = *(char *)(v16 + 1200);
										*(char *)(v55 + 1240) = *(char *)(v16 + 1240);
										*(char *)(v55 + 1280) = *(char *)(v16 + 1280);
										*(char *)(v55 + 1320) = *(char *)(v16 + 1320);
										*(char *)(v55 + 1360) = *(char *)(v16 + 1360);
										*(char *)(v55 + 1400) = *(char *)(v16 + 1400);
										*(char *)(v55 + 1440) = *(char *)(v16 + 1440);
										*(char *)(v55 + 1480) = *(char *)(v16 + 1480);
										*(char *)(v55 + 1520) = *(char *)(v16 + 1520);
										g28 = v16 + 1;
										*(char *)(v55 + 1560) = *(char *)(v16 + 1560);
										int32_t v59 = 19; // 0x3cf1c
										// branch -> 0x3cc88
										while (v59 != 0) {
											// 0x3cc88
											v55++;
											*(char *)v55 = *(char *)g28;
											*(char *)(v55 + 40) = *(char *)(g28 + 40);
											*(char *)(v55 + 80) = *(char *)(g28 + 80);
											*(char *)(v55 + 120) = *(char *)(g28 + 120);
											*(char *)(v55 + 160) = *(char *)(g28 + 160);
											*(char *)(v55 + 200) = *(char *)(g28 + 200);
											*(char *)(v55 + 240) = *(char *)(g28 + 240);
											*(char *)(v55 + 280) = *(char *)(g28 + 280);
											*(char *)(v55 + 320) = *(char *)(g28 + 320);
											*(char *)(v55 + 360) = *(char *)(g28 + 360);
											*(char *)(v55 + 400) = *(char *)(g28 + 400);
											*(char *)(v55 + 440) = *(char *)(g28 + 440);
											*(char *)(v55 + 480) = *(char *)(g28 + 480);
											*(char *)(v55 + 520) = *(char *)(g28 + 520);
											*(char *)(v55 + 560) = *(char *)(g28 + 560);
											*(char *)(v55 + 600) = *(char *)(g28 + 600);
											*(char *)(v55 + 640) = *(char *)(g28 + 640);
											*(char *)(v55 + 680) = *(char *)(g28 + 680);
											*(char *)(v55 + 720) = *(char *)(g28 + 720);
											*(char *)(v55 + 760) = *(char *)(g28 + 760);
											*(char *)(v55 + 800) = *(char *)(g28 + 800);
											*(char *)(v55 + 840) = *(char *)(g28 + 840);
											*(char *)(v55 + 880) = *(char *)(g28 + 880);
											*(char *)(v55 + 920) = *(char *)(g28 + 920);
											*(char *)(v55 + 960) = *(char *)(g28 + 960);
											*(char *)(v55 + 1000) = *(char *)(g28 + 1000);
											*(char *)(v55 + 1040) = *(char *)(g28 + 1040);
											*(char *)(v55 + 1080) = *(char *)(g28 + 1080);
											*(char *)(v55 + 1120) = *(char *)(g28 + 1120);
											*(char *)(v55 + 1160) = *(char *)(g28 + 1160);
											*(char *)(v55 + 1200) = *(char *)(g28 + 1200);
											*(char *)(v55 + 1240) = *(char *)(g28 + 1240);
											*(char *)(v55 + 1280) = *(char *)(g28 + 1280);
											*(char *)(v55 + 1320) = *(char *)(g28 + 1320);
											*(char *)(v55 + 1360) = *(char *)(g28 + 1360);
											*(char *)(v55 + 1400) = *(char *)(g28 + 1400);
											*(char *)(v55 + 1440) = *(char *)(g28 + 1440);
											*(char *)(v55 + 1480) = *(char *)(g28 + 1480);
											*(char *)(v55 + 1520) = *(char *)(g28 + 1520);
											v57 = g28;
											v16 = v57 + 1;
											*(char *)(v55 + 1560) = *(char *)(v57 + 1560);
											v58 = v55 + 1;
											v55 = v58;
											v56++;
											*(char *)v58 = *(char *)v16;
											*(char *)(v55 + 40) = *(char *)(v16 + 40);
											*(char *)(v55 + 80) = *(char *)(v16 + 80);
											*(char *)(v55 + 120) = *(char *)(v16 + 120);
											*(char *)(v55 + 160) = *(char *)(v16 + 160);
											*(char *)(v55 + 200) = *(char *)(v16 + 200);
											*(char *)(v55 + 240) = *(char *)(v16 + 240);
											*(char *)(v55 + 280) = *(char *)(v16 + 280);
											*(char *)(v55 + 320) = *(char *)(v16 + 320);
											*(char *)(v55 + 360) = *(char *)(v16 + 360);
											*(char *)(v55 + 400) = *(char *)(v16 + 400);
											*(char *)(v55 + 440) = *(char *)(v16 + 440);
											*(char *)(v55 + 480) = *(char *)(v16 + 480);
											*(char *)(v55 + 520) = *(char *)(v16 + 520);
											*(char *)(v55 + 560) = *(char *)(v16 + 560);
											*(char *)(v55 + 600) = *(char *)(v16 + 600);
											*(char *)(v55 + 640) = *(char *)(v16 + 640);
											*(char *)(v55 + 680) = *(char *)(v16 + 680);
											*(char *)(v55 + 720) = *(char *)(v16 + 720);
											*(char *)(v55 + 760) = *(char *)(v16 + 760);
											*(char *)(v55 + 800) = *(char *)(v16 + 800);
											*(char *)(v55 + 840) = *(char *)(v16 + 840);
											*(char *)(v55 + 880) = *(char *)(v16 + 880);
											*(char *)(v55 + 920) = *(char *)(v16 + 920);
											*(char *)(v55 + 960) = *(char *)(v16 + 960);
											*(char *)(v55 + 1000) = *(char *)(v16 + 1000);
											*(char *)(v55 + 1040) = *(char *)(v16 + 1040);
											*(char *)(v55 + 1080) = *(char *)(v16 + 1080);
											*(char *)(v55 + 1120) = *(char *)(v16 + 1120);
											*(char *)(v55 + 1160) = *(char *)(v16 + 1160);
											*(char *)(v55 + 1200) = *(char *)(v16 + 1200);
											*(char *)(v55 + 1240) = *(char *)(v16 + 1240);
											*(char *)(v55 + 1280) = *(char *)(v16 + 1280);
											*(char *)(v55 + 1320) = *(char *)(v16 + 1320);
											*(char *)(v55 + 1360) = *(char *)(v16 + 1360);
											*(char *)(v55 + 1400) = *(char *)(v16 + 1400);
											*(char *)(v55 + 1440) = *(char *)(v16 + 1440);
											*(char *)(v55 + 1480) = *(char *)(v16 + 1480);
											*(char *)(v55 + 1520) = *(char *)(v16 + 1520);
											g28 = v16 + 1;
											*(char *)(v55 + 1560) = *(char *)(v16 + 1560);
											v59--;
											// continue -> 0x3cc88
										}
										// 0x3cf20
										DRLG_Init_Globals();
										int32_t result = DRLG_CheckQuests(*(int32_t *)g32, *(int32_t *)g31); // 0x3cf2c
										return result;
									}
								lab_0x3cb70_10:
									// 0x3cb70
									v3 = v21;
									// branch -> 0x3c914
									break;
								} else {
									// branch -> 0x3cb70
								lab_0x3cb70:
									// 0x3cb70
									v2 = v33;
									// branch -> 0x3c914
									continue;
								}
							} else {
								// 0x3cac4
								v33 = v32;
								// branch -> 0x3cb70
								goto lab_0x3cb70;
							}
						lab_0x3cb70_5:
							// 0x3cb70
							v2 = v30;
							// branch -> 0x3c914
							continue;
						} else {
							// 0x3cb00
							g13 = 0;
							if (DRLG_PlaceMiniSet((char *)v31, 1, 1, 0, 0, 0, -1) > -1) {
								// 0x3cb34
								g13 = 1;
								if (DRLG_PlaceMiniSet((char *)g28, 1, 1, 0, 0, 1, -1) <= 0xffffffff) {
									// 0x3cb60
									g26 = 0;
									// branch -> 0x3cb64
								}
							} else {
								// 0x3cb2c
								g26 = 0;
								// branch -> 0x3cb64
							}
							int32_t *v60 = (int32_t *)g33; // 0x3cb64
							int32_t v61 = *v60;            // 0x3cb64
							v21 = v61;
							*v60 = v61 - 1;
							// branch -> 0x3cb70
							goto lab_0x3cb70_2;
						}
					lab_0x3cb70_7:
						// 0x3cb70
						if (g26 == 0) {
							goto lab_0x3cb70_10;
						}
						// 0x3cb78
						v29 = *(int32_t *)(g23 - 0x77cc);
						v19 = 0;
						v17 = 16;
						v15 = v29;
						v24 = v29;
						// branch -> 0x3cb88
						while (true) {
							// 0x3cb88
							v13 = v24;
							v20 = 16;
							v18 = 0;
							v14 = 16;
							v28 = 0;
							v27 = 16;
							v26 = v24;
							// branch -> 0x3cb98
							goto lab_0x3cb98_4;
						}
					} else {
					lab_0x3c9e8:;
						int32_t v62 = g30; // 0x3c9f0
						if (v9 == 0) {
							// 0x3c9f0
							g13 = 0;
							v30 = DRLG_PlaceMiniSet((char *)v62, 1, 1, 0, 0, 1, -1);
							v21 = v30;
							if (v30 > -1) {
								goto lab_0x3cb70_7;
							}
							// 0x3ca1c
							// branch -> 0x3cb70
							goto lab_0x3cb70_5;
						} else {
							// 0x3ca24
							g13 = 0;
							if (DRLG_PlaceMiniSet((char *)v62, 1, 1, 0, 0, 0, -1) <= 0xffffffff) {
								// 0x3ca50
								g26 = 0;
								// branch -> 0x3ca54
							}
							// 0x3ca54
							if (g25 == 1) {
								// 0x3ca5c
								*(int32_t *)g35 = 2 * *(int32_t *)g32 + 20;
								int32_t v63 = 2 * *(int32_t *)g31; // 0x3ca70
								v21 = v63;
								*(int32_t *)g33 = v63 + 28;
								// branch -> 0x3cb70
								goto lab_0x3cb70_7;
							} else {
								int32_t *v64 = (int32_t *)g33; // 0x3ca80
								int32_t v65 = *v64;            // 0x3ca80
								v21 = v65;
								*v64 = v65 - 1;
								// branch -> 0x3cb70
								goto lab_0x3cb70_7;
							}
							// 0x3cb70
							v22 = g26;
							if (v22 == 0) {
								goto lab_0x3cb70_10;
							}
							// 0x3cb78
							v23 = g23;
							v29 = *(int32_t *)(v23 - 0x77cc);
							v16 = v29;
							v19 = 0;
							v17 = 16;
							v15 = v29;
							v25 = 16;
							v24 = v29;
							// branch -> 0x3cb88
							while (true) {
								// 0x3cb88
								v13 = v24;
								v20 = v25;
								v18 = 0;
								v14 = 16;
								v28 = 0;
								v27 = 16;
								v26 = v24;
								// branch -> 0x3cb98
								goto lab_0x3cb98_4;
							}
						}
						// 0x3cb70
						v22 = g26;
						if (v22 == 0) {
							goto lab_0x3cb70_10;
						}
						// 0x3cb78
						v23 = g23;
						v29 = *(int32_t *)(v23 - 0x77cc);
						v16 = v29;
						v19 = 0;
						v17 = 16;
						v15 = v29;
						v25 = 16;
						v24 = v29;
						// branch -> 0x3cb88
						while (true) {
							// 0x3cb88
							v13 = v24;
							v20 = v25;
							v18 = 0;
							v14 = 16;
							v28 = 0;
							v27 = 16;
							v26 = v24;
							// branch -> 0x3cb98
							goto lab_0x3cb98_4;
						}
					}
					// 0x3cb70
					v22 = g26;
					if (v22 == 0) {
						goto lab_0x3cb70_10;
					}
					// 0x3cb78
					v23 = g23;
					v29 = *(int32_t *)(v23 - 0x77cc);
					v16 = v29;
					v19 = 0;
					v17 = 16;
					v15 = v29;
					v25 = 16;
					v24 = v29;
					// branch -> 0x3cb88
					while (true) {
						// 0x3cb88
						v13 = v24;
						v20 = v25;
						v18 = 0;
						v14 = 16;
						v28 = 0;
						v27 = 16;
						v26 = v24;
						// branch -> 0x3cb98
						goto lab_0x3cb98_4;
					}
				}
				// 0x3c9d8
				v10 = QuestStatus(7);
				v9 = g25;
				if (v10 == 0) {
					goto lab_0x3ca90;
				}
				goto lab_0x3c9e8;
			}
		}
	}
	// 0x3c914
	// branch -> 0x3c914
	while (true) {
		// 0x3c914
		v2 = a1;
		// branch -> 0x3c914
		goto lab_0x3c914;
	}
}

// Address range: 0x3cf44 - 0x3cfbc
int32_t CreateL5Dungeon(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g36; // 0x3cf44
	g36 = a1;
	SetRndSeed();
	int32_t v2 = 96; // r0
	*(int32_t *)*(int32_t *)(g23 - 0x7530) = 16;
	*(int32_t *)*(int32_t *)(g23 - 0x7534) = 16;
	int32_t v3 = *(int32_t *)(g23 - 0x753c); // 0x3cf78
	*(int32_t *)*(int32_t *)(g23 - 0x7538) = v2;
	*(int32_t *)v3 = v2;
	int32_t v4 = DRLG_InitTrans(v3); // 0x3cf84
	DRLG_LoadL1SP(DRLG_InitSetPC(v4));
	int32_t v5 = DRLG_L5(g36);                    // 0x3cf94
	int32_t v6 = DRLG_FreeL1SP(DRLG_L1Pass3(v5)); // 0x3cf9c
	g34 = v6;
	DRLG_InitL1Vals(v6);
	int32_t result = DRLG_SetPC(); // 0x3cfa4
	g36 = v1;
	return result;
}
