
// Address range: 0x29e54 - 0x29eac
int32_t InitAutomapOnce(int32_t a1)
{
	// 0x29e54
	*(int32_t *)*(int32_t *)(g23 - 0x7778) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x777c) = 50;
	*(int32_t *)*(int32_t *)(g23 - 0x7780) = 32;
	*(int32_t *)*(int32_t *)(g23 - 0x7784) = 16;
	*(int32_t *)*(int32_t *)(g23 - 0x7788) = 8;
	int32_t result = *(int32_t *)(g23 - 0x7790); // r3
	*(int32_t *)*(int32_t *)(g23 - 0x778c) = 4;
	*(int32_t *)result = 2;
	return result;
}

// Address range: 0x29eac - 0x2a328
int32_t InitAutomap(int32_t a1)
{
	int32_t v1 = g36; // 0x29eac
	int32_t v2 = g10; // 0x29eb4
	g36 = *(int32_t *)(g23 - 0x6580);
	g35 = *(int32_t *)(g23 - 0x779c);
	int32_t v3 = 0x51eb851f;                 // r5
	int32_t v4 = 31;                         // ctr
	int32_t v5 = 3200;                       // r6
	int32_t v6 = *(int32_t *)(g23 - 0x657c); // 0x29edc
	int32_t v7 = 1600;                       // r8
	int32_t v8 = 3200;                       // 0x29ee4
	int32_t v9 = 0x51eb851f;                 // 0x29ee4
	// branch -> 0x29ee4
	while (true) {
		uint64_t v10 = (int64_t)v9 * (int64_t)v8;                                              // 0x29ee4
		int32_t v11 = (int32_t)(v10 / 0x100000000) >> 31;                                      // 0x29ee8
		int32_t v12 = (v11 & -0x8000000 | (int32_t)(v10 / 0x2000000000)) + (int32_t)(v11 < 0); // 0x29ef0
		int32_t v13 = 320 / v12;                                                               // 0x29ef8
		int32_t v14 = 320 - v12 * v13;                                                         // 0x29f08
		*(char *)v6 = (char)(2 * v13 | 1);
		if (v14 != 0) {
			char *v15 = (char *)v6; // 0x29f14
			*v15 = *v15 + 1;
			// branch -> 0x29f20
		}
		uint64_t v16 = (int64_t)v7 * (int64_t)v3;         // 0x29f20
		int32_t v17 = (int32_t)(v16 / 0x100000000) >> 31; // 0x29f24
		int32_t v18 = v17 < 0;                            // 0x29f28
		if (v14 >= (v17 & -0x8000000 || (int32_t)(v16 / 0x2000000000)) + v18) {
			char *v19 = (char *)v6; // 0x29f38
			*v19 = *v19 + 1;
			// branch -> 0x29f44
		}
		int32_t v20 = v5 + 320; // 0x29f44
		v5 = v20;
		v7 += 160;
		int32_t v21 = v4 - 1; // 0x29f50
		v4 = v21;
		if (v21 == 0) {
			// 0x29f54
			g34 = g36;
			memset();
			int32_t v22;
			int32_t result2 = *(int32_t *)(v22 - 0x7794); // 0x29f64
			unsigned char v23 = *(char *)result2;         // 0x29f68
			int32_t result;                               // r3
			int32_t v24;                                  // r4
			int32_t v25;                                  // bp-16
			int32_t v26;                                  // bp-20
			int32_t v27;                                  // 0x2a01c
			int32_t v28;                                  // 0x2a05c
			int32_t v29;                                  // 0x2a06c
			int32_t v30;                                  // 0x2a080
			int32_t v31;                                  // 0x2a094
			int32_t v32;                                  // 0x2a0a8
			int32_t v33;                                  // 0x2a0bc
			int32_t v34;                                  // 0x2a0d0
			int32_t v35;                                  // 0x2a0e4
			int32_t v36;                                  // 0x2a110
			int32_t v37;                                  // 0x2a11c
			int32_t v38;                                  // 0x2a048
			int32_t v39;                                  // 0x2a0fc
			int32_t v40;                                  // 0x2a100
			int32_t v41;                                  // 0x2a134
			int32_t v42;                                  // 0x2a138
			int32_t v43;                                  // 0x2a170
			int32_t v44;                                  // 0x2a17c
			int32_t v45;                                  // 0x2a2f0
			int32_t v46;                                  // 0x2a308
			int32_t v47;                                  // 0x29fdc
			int32_t v48;                                  // 0x2a020
			unsigned char v49;                            // 0x2a054
			int32_t v50;                                  // 0x2a05c
			unsigned char v51;                            // 0x2a06c
			unsigned char v52;                            // 0x2a080
			unsigned char v53;                            // 0x2a094
			unsigned char v54;                            // 0x2a0a8
			unsigned char v55;                            // 0x2a0bc
			unsigned char v56;                            // 0x2a0d0
			unsigned char v57;                            // 0x2a0e4
			unsigned char v58;                            // 0x2a11c
			int32_t v59;                                  // 0x2a120
			int32_t v60;                                  // 0x2a304
			int32_t v61;                                  // 0x2a070
			int32_t v62;                                  // 0x2a084
			int32_t v63;                                  // 0x2a098
			int32_t v64;                                  // 0x2a0ac
			int32_t v65;                                  // 0x2a0c0
			int32_t v66;                                  // 0x2a0d4
			int32_t v67;                                  // 0x2a0e8
			if (v23 == 3) {
				// 0x29fd4
				v47 = LoadFileInMem(*(int32_t *)(v22 - 0x658c), &v25);
				v26 = v47;
				v25 /= 2;
				// branch -> 0x2a018
			} else {
				// 0x29f74
				if (v23 > 3) {
					// 0x29f88
					if (v23 == 4) {
						int32_t v68 = LoadFileInMem(*(int32_t *)(v22 - 0x6590), &v25); // 0x29ffc
						v26 = v68;
						v25 /= 2;
						// branch -> 0x2a018
						// 0x2a018
						g34 = v68;
						v27 = function_c9948();
						result = v27;
						v48 = v25;
						if (v48 != 0) {
							// 0x2a030
							v60 = v48;
							v36 = 1;
							if (v48 >= 9) {
								// 0x2a03c
								v38 = g36 + 2;
								v3 = v38;
								v4 = (v48 - 1) / 8;
								if (v48 != 8) {
									int32_t v69 = v38; // 0x2a068
									int32_t v70 = 1;   // 0x2a058
									v28 = v27;
									while (true) {
										// 0x2a054
										v49 = *(char *)(v28 + 1);
										v24 = v70 + 8;
										v50 = (int32_t) * (char *)v28;
										*(int16_t *)v69 = (int16_t)(v50 | 256 * (int32_t)v49);
										v29 = result;
										v51 = *(char *)(v29 + 3);
										v61 = (int32_t) * (char *)(v29 + 2);
										*(int16_t *)(v3 + 2) = (int16_t)(v61 | 256 * (int32_t)v51);
										v30 = result;
										v52 = *(char *)(v30 + 5);
										v62 = (int32_t) * (char *)(v30 + 4);
										*(int16_t *)(v3 + 4) = (int16_t)(v62 | 256 * (int32_t)v52);
										v31 = result;
										v53 = *(char *)(v31 + 7);
										v63 = (int32_t) * (char *)(v31 + 6);
										*(int16_t *)(v3 + 6) = (int16_t)(v63 | 256 * (int32_t)v53);
										v32 = result;
										v54 = *(char *)(v32 + 9);
										v64 = (int32_t) * (char *)(v32 + 8);
										*(int16_t *)(v3 + 8) = (int16_t)(v64 | 256 * (int32_t)v54);
										v33 = result;
										v55 = *(char *)(v33 + 11);
										v65 = (int32_t) * (char *)(v33 + 10);
										*(int16_t *)(v3 + 10) = (int16_t)(v65 | 256 * (int32_t)v55);
										v34 = result;
										v56 = *(char *)(v34 + 13);
										v66 = (int32_t) * (char *)(v34 + 12);
										*(int16_t *)(v3 + 12) = (int16_t)(v66 | 256 * (int32_t)v56);
										v35 = result;
										v57 = *(char *)(v35 + 15);
										v67 = (int32_t) * (char *)(v35 + 14);
										result = v35 + 16;
										*(int16_t *)(v3 + 14) = (int16_t)(v67 | 256 * (int32_t)v57);
										v39 = v3 + 16;
										v3 = v39;
										v40 = v4 - 1;
										v4 = v40;
										if (v40 == 0) {
											// 0x2a300
											v60 = v25;
											v36 = v24;
											// branch -> 0x2a300
											// 0x2a300
											v46 = g36 + 2 * v36;
											if (v36 <= v60) {
												v37 = result;
												v58 = *(char *)(v37 + 1);
												v59 = (int32_t) * (char *)v37;
												*(int16_t *)v46 = (int16_t)(v59 | 256 * (int32_t)v58);
												v41 = v46 + 2;
												v42 = v60 + 1 - v36 - 1;
												while (v42 != 0) {
													// 0x2a11c
													v37 += 2;
													v58 = *(char *)(v37 + 1);
													v59 = (int32_t) * (char *)v37;
													*(int16_t *)v41 = (int16_t)(v59 | 256 * (int32_t)v58);
													v41 += 2;
													v42--;
													// continue -> 0x2a11c
												}
												// 0x2a13c
												function_c9acc(v26);
												MemFreeDbg(&v26);
												g34 = *(int32_t *)(g23 - 0x7798);
												memset();
												v24 = 0;
												// branch -> 0x2a160
												while (true) {
													// 0x2a160
													v4 = 7;
													result = 0;
													v44 = 0;
													v43 = 0;
													// branch -> 0x2a16c
												lab_0x2a16c_9:
													while (true) {
														char *v71 = (char *)(*(int32_t *)g35 + v43 + v44); // 0x2a174
														*v71 = *v71 % 128;
														int32_t v72 = *(int32_t *)g35;                  // 0x2a180
														char *v73 = (char *)(v24 + v72 + 112 + result); // 0x2a18c
														*v73 = *v73 % 128;
														int32_t v74 = *(int32_t *)g35;                  // 0x2a198
														char *v75 = (char *)(v24 + v74 + 224 + result); // 0x2a1a4
														*v75 = *v75 % 128;
														int32_t v76 = *(int32_t *)g35;                  // 0x2a1b0
														char *v77 = (char *)(v24 + v76 + 336 + result); // 0x2a1bc
														*v77 = *v77 % 128;
														int32_t v78 = *(int32_t *)g35;                  // 0x2a1c8
														char *v79 = (char *)(v24 + v78 + 448 + result); // 0x2a1d4
														*v79 = *v79 % 128;
														int32_t v80 = *(int32_t *)g35;                  // 0x2a1e0
														char *v81 = (char *)(v24 + v80 + 560 + result); // 0x2a1ec
														*v81 = *v81 % 128;
														int32_t v82 = *(int32_t *)g35;                  // 0x2a1f8
														char *v83 = (char *)(v24 + v82 + 672 + result); // 0x2a204
														*v83 = *v83 % 128;
														int32_t v84 = result; // 0x2a214
														result = v84 + 896;
														char *v85 = (char *)(v24 + *(int32_t *)g35 + 784 + v84); // 0x2a220
														*v85 = *v85 % 128;
														int32_t v86 = result + *(int32_t *)g35; // 0x2a230
														char *v87 = (char *)(v24 + v86);        // 0x2a234
														*v87 = *v87 % 128;
														int32_t v88 = *(int32_t *)g35;                  // 0x2a240
														char *v89 = (char *)(v24 + v88 + 112 + result); // 0x2a24c
														*v89 = *v89 % 128;
														int32_t v90 = *(int32_t *)g35;                  // 0x2a258
														char *v91 = (char *)(v24 + v90 + 224 + result); // 0x2a264
														*v91 = *v91 % 128;
														int32_t v92 = *(int32_t *)g35;                  // 0x2a270
														char *v93 = (char *)(v24 + v92 + 336 + result); // 0x2a27c
														*v93 = *v93 % 128;
														int32_t v94 = *(int32_t *)g35;                  // 0x2a288
														char *v95 = (char *)(v24 + v94 + 448 + result); // 0x2a294
														*v95 = *v95 % 128;
														int32_t v96 = *(int32_t *)g35;                  // 0x2a2a0
														char *v97 = (char *)(v24 + v96 + 560 + result); // 0x2a2ac
														*v97 = *v97 % 128;
														int32_t v98 = *(int32_t *)g35;                  // 0x2a2b8
														char *v99 = (char *)(v24 + v98 + 672 + result); // 0x2a2c4
														*v99 = *v99 % 128;
														int32_t v100 = result; // 0x2a2d4
														result = v100 + 896;
														char *v101 = (char *)(v24 + *(int32_t *)g35 + 784 + v100); // 0x2a2e0
														*v101 = *v101 % 128;
														int32_t v102 = v4 - 1; // 0x2a2ec
														v4 = v102;
														if (v102 == 0) {
															// 0x2a2f0
															v45 = v24 + 1;
															v24 = v45;
															if (v45 >= 112) {
																// break (via goto) -> 0x2a310
																goto lab_0x2a310;
															}
															// continue (via goto) -> 0x2a160
															goto lab_0x2a160;
														} else {
															// 0x2a16c
															v44 = v24;
															v43 = result;
															// branch -> 0x2a16c
															continue;
														}
													}
												lab_0x2a310:
													// 0x2a310
													// branch -> 0x2a310
													// 0x2a310
													g36 = v1;
													g10 = v2;
													return result;
												}
											}
											// 0x2a13c
											function_c9acc(v26);
											MemFreeDbg(&v26);
											g34 = *(int32_t *)(g23 - 0x7798);
											memset();
											v24 = 0;
											// branch -> 0x2a160
											while (true) {
												// 0x2a160
												v4 = 7;
												result = 0;
												v44 = 0;
												v43 = 0;
												// branch -> 0x2a16c
												goto lab_0x2a16c_9;
											}
										} else {
										lab_0x2a054_3:
											// 0x2a054
											v69 = v39;
											v70 = v24;
											v28 = result;
											// branch -> 0x2a054
											continue;
										}
									}
								} else {
									v60 = v48;
									v36 = 1;
								}
							}
							// 0x2a300
							v46 = g36 + 2 * v36;
							if (v36 <= v60) {
								v37 = result;
								v58 = *(char *)(v37 + 1);
								v59 = (int32_t) * (char *)v37;
								*(int16_t *)v46 = (int16_t)(v59 | 256 * (int32_t)v58);
								v41 = v46 + 2;
								v42 = v60 + 1 - v36 - 1;
								while (v42 != 0) {
									// 0x2a11c
									v37 += 2;
									v58 = *(char *)(v37 + 1);
									v59 = (int32_t) * (char *)v37;
									*(int16_t *)v41 = (int16_t)(v59 | 256 * (int32_t)v58);
									v41 += 2;
									v42--;
									// continue -> 0x2a11c
								}
								// 0x2a13c
								function_c9acc(v26);
								MemFreeDbg(&v26);
								g34 = *(int32_t *)(g23 - 0x7798);
								memset();
								v24 = 0;
								// branch -> 0x2a160
								while (true) {
									// 0x2a160
									v4 = 7;
									result = 0;
									v44 = 0;
									v43 = 0;
									// branch -> 0x2a16c
									goto lab_0x2a16c_9;
								}
							}
						}
						// 0x2a13c
						function_c9acc(v26);
						MemFreeDbg(&v26);
						g34 = *(int32_t *)(g23 - 0x7798);
						memset();
						v24 = 0;
						// branch -> 0x2a160
						while (true) {
							// 0x2a160
							v4 = 7;
							result = 0;
							v44 = 0;
							v43 = 0;
							// branch -> 0x2a16c
							goto lab_0x2a16c_9;
						}
					}
					// 0x2a310
					g36 = v1;
					g10 = v2;
					return result2;
				}
				// 0x29f78
				int32_t v103; // 0x29f9c
				if (v23 == 1) {
					// 0x29f94
					v103 = LoadFileInMem(*(int32_t *)(v22 - 0x6584), &v25);
					v26 = v103;
					v25 /= 2;
					// branch -> 0x2a018
				} else {
					// 0x29f80
					if (v23 == 0) {
						// 0x2a310
						g36 = v1;
						g10 = v2;
						return result2;
					}
					int32_t v104 = LoadFileInMem(*(int32_t *)(v22 - 0x6588), &v25); // 0x29fbc
					v26 = v104;
					v25 /= 2;
					v103 = v104;
					// branch -> 0x2a018
				}
				// 0x2a018
				g34 = v103;
				v27 = function_c9948();
				result = v27;
				v48 = v25;
				if (v48 != 0) {
					// 0x2a030
					v60 = v48;
					v36 = 1;
					if (v48 >= 9) {
						// 0x2a03c
						v38 = g36 + 2;
						v3 = v38;
						v4 = (v48 - 1) / 8;
						if (v48 != 8) {
							v28 = v27;
							while (true) {
								// 0x2a054
								v49 = *(char *)(v28 + 1);
								v24 = 9;
								v50 = (int32_t) * (char *)v28;
								*(int16_t *)v38 = (int16_t)(v50 | 256 * (int32_t)v49);
								v29 = result;
								v51 = *(char *)(v29 + 3);
								v61 = (int32_t) * (char *)(v29 + 2);
								*(int16_t *)(v3 + 2) = (int16_t)(v61 | 256 * (int32_t)v51);
								v30 = result;
								v52 = *(char *)(v30 + 5);
								v62 = (int32_t) * (char *)(v30 + 4);
								*(int16_t *)(v3 + 4) = (int16_t)(v62 | 256 * (int32_t)v52);
								v31 = result;
								v53 = *(char *)(v31 + 7);
								v63 = (int32_t) * (char *)(v31 + 6);
								*(int16_t *)(v3 + 6) = (int16_t)(v63 | 256 * (int32_t)v53);
								v32 = result;
								v54 = *(char *)(v32 + 9);
								v64 = (int32_t) * (char *)(v32 + 8);
								*(int16_t *)(v3 + 8) = (int16_t)(v64 | 256 * (int32_t)v54);
								v33 = result;
								v55 = *(char *)(v33 + 11);
								v65 = (int32_t) * (char *)(v33 + 10);
								*(int16_t *)(v3 + 10) = (int16_t)(v65 | 256 * (int32_t)v55);
								v34 = result;
								v56 = *(char *)(v34 + 13);
								v66 = (int32_t) * (char *)(v34 + 12);
								*(int16_t *)(v3 + 12) = (int16_t)(v66 | 256 * (int32_t)v56);
								v35 = result;
								v57 = *(char *)(v35 + 15);
								v67 = (int32_t) * (char *)(v35 + 14);
								result = v35 + 16;
								*(int16_t *)(v3 + 14) = (int16_t)(v67 | 256 * (int32_t)v57);
								v39 = v3 + 16;
								v3 = v39;
								v40 = v4 - 1;
								v4 = v40;
								if (v40 != 0) {
									goto lab_0x2a054_3;
								}
								// 0x2a300
								// branch -> 0x2a300
							}
						} else {
							v60 = v48;
							v36 = 1;
						}
					}
					// 0x2a300
					v46 = g36 + 2 * v36;
					if (v36 <= v60) {
						v37 = result;
						v58 = *(char *)(v37 + 1);
						v59 = (int32_t) * (char *)v37;
						*(int16_t *)v46 = (int16_t)(v59 | 256 * (int32_t)v58);
						v41 = v46 + 2;
						v42 = v60 + 1 - v36 - 1;
						while (v42 != 0) {
							// 0x2a11c
							v37 += 2;
							v58 = *(char *)(v37 + 1);
							v59 = (int32_t) * (char *)v37;
							*(int16_t *)v41 = (int16_t)(v59 | 256 * (int32_t)v58);
							v41 += 2;
							v42--;
							// continue -> 0x2a11c
						}
						// 0x2a13c
						function_c9acc(v26);
						MemFreeDbg(&v26);
						g34 = *(int32_t *)(g23 - 0x7798);
						memset();
						v24 = 0;
						// branch -> 0x2a160
						while (true) {
							// 0x2a160
							v4 = 7;
							result = 0;
							v44 = 0;
							v43 = 0;
							// branch -> 0x2a16c
							goto lab_0x2a16c_9;
						}
					}
				}
				// 0x2a13c
				function_c9acc(v26);
				MemFreeDbg(&v26);
				g34 = *(int32_t *)(g23 - 0x7798);
				memset();
				v24 = 0;
				// branch -> 0x2a160
				while (true) {
					// 0x2a160
					v4 = 7;
					result = 0;
					v44 = 0;
					v43 = 0;
					// branch -> 0x2a16c
					goto lab_0x2a16c_9;
				}
			}
			// 0x2a018
			g34 = v47;
			v27 = function_c9948();
			result = v27;
			v48 = v25;
			if (v48 != 0) {
				// 0x2a030
				v60 = v48;
				v36 = 1;
				if (v48 >= 9) {
					// 0x2a03c
					v38 = g36 + 2;
					v3 = v38;
					v4 = (v48 - 1) / 8;
					if (v48 != 8) {
						v28 = v27;
						while (true) {
							// 0x2a054
							v49 = *(char *)(v28 + 1);
							v24 = 9;
							v50 = (int32_t) * (char *)v28;
							*(int16_t *)v38 = (int16_t)(v50 | 256 * (int32_t)v49);
							v29 = result;
							v51 = *(char *)(v29 + 3);
							v61 = (int32_t) * (char *)(v29 + 2);
							*(int16_t *)(v3 + 2) = (int16_t)(v61 | 256 * (int32_t)v51);
							v30 = result;
							v52 = *(char *)(v30 + 5);
							v62 = (int32_t) * (char *)(v30 + 4);
							*(int16_t *)(v3 + 4) = (int16_t)(v62 | 256 * (int32_t)v52);
							v31 = result;
							v53 = *(char *)(v31 + 7);
							v63 = (int32_t) * (char *)(v31 + 6);
							*(int16_t *)(v3 + 6) = (int16_t)(v63 | 256 * (int32_t)v53);
							v32 = result;
							v54 = *(char *)(v32 + 9);
							v64 = (int32_t) * (char *)(v32 + 8);
							*(int16_t *)(v3 + 8) = (int16_t)(v64 | 256 * (int32_t)v54);
							v33 = result;
							v55 = *(char *)(v33 + 11);
							v65 = (int32_t) * (char *)(v33 + 10);
							*(int16_t *)(v3 + 10) = (int16_t)(v65 | 256 * (int32_t)v55);
							v34 = result;
							v56 = *(char *)(v34 + 13);
							v66 = (int32_t) * (char *)(v34 + 12);
							*(int16_t *)(v3 + 12) = (int16_t)(v66 | 256 * (int32_t)v56);
							v35 = result;
							v57 = *(char *)(v35 + 15);
							v67 = (int32_t) * (char *)(v35 + 14);
							result = v35 + 16;
							*(int16_t *)(v3 + 14) = (int16_t)(v67 | 256 * (int32_t)v57);
							v39 = v3 + 16;
							v3 = v39;
							v40 = v4 - 1;
							v4 = v40;
							if (v40 != 0) {
								goto lab_0x2a054_3;
							}
							// 0x2a300
							// branch -> 0x2a300
						}
					} else {
						v60 = v48;
						v36 = 1;
					}
				}
				// 0x2a300
				v46 = g36 + 2 * v36;
				if (v36 <= v60) {
					v37 = result;
					v58 = *(char *)(v37 + 1);
					v59 = (int32_t) * (char *)v37;
					*(int16_t *)v46 = (int16_t)(v59 | 256 * (int32_t)v58);
					v41 = v46 + 2;
					v42 = v60 + 1 - v36 - 1;
					while (v42 != 0) {
						// 0x2a11c
						v37 += 2;
						v58 = *(char *)(v37 + 1);
						v59 = (int32_t) * (char *)v37;
						*(int16_t *)v41 = (int16_t)(v59 | 256 * (int32_t)v58);
						v41 += 2;
						v42--;
						// continue -> 0x2a11c
					}
					// 0x2a13c
					function_c9acc(v26);
					MemFreeDbg(&v26);
					g34 = *(int32_t *)(g23 - 0x7798);
					memset();
					v24 = 0;
					// branch -> 0x2a160
					while (true) {
						// 0x2a160
						v4 = 7;
						result = 0;
						v44 = 0;
						v43 = 0;
						// branch -> 0x2a16c
						goto lab_0x2a16c_9;
					}
				}
			}
			// 0x2a13c
			function_c9acc(v26);
			MemFreeDbg(&v26);
			g34 = *(int32_t *)(g23 - 0x7798);
			memset();
			v24 = 0;
			v45 = 0;
			// branch -> 0x2a160
		lab_0x2a160:
			while (true) {
				// 0x2a160
				v4 = 7;
				result = 0;
				v44 = v45;
				v43 = 0;
				// branch -> 0x2a16c
				goto lab_0x2a16c_9;
			}
		} else {
			// 0x29f44
			v6++;
			v8 = v20;
			v9 = v3;
			// branch -> 0x29ee4
			continue;
		}
	}
}

// Address range: 0x2a328 - 0x2a34c
int32_t StartAutomap(void)
{
	// 0x2a328
	*(int32_t *)*(int32_t *)(g23 - 0x77a0) = 0;
	int32_t result = *(int32_t *)(g23 - 0x7778); // r3
	*(int32_t *)*(int32_t *)(g23 - 0x77a4) = 0;
	*(int32_t *)result = 1;
	return result;
}

// Address range: 0x2a34c - 0x2a370
int32_t AutomapUp(void)
{
	int32_t *v1 = (int32_t *)*(int32_t *)(g23 - 0x77a0); // 0x2a354
	*v1 = *v1 - 1;
	int32_t *v2 = (int32_t *)*(int32_t *)(g23 - 0x77a4); // 0x2a360
	int32_t result = *v2;                                // 0x2a360
	*v2 = result - 1;
	return result;
}

// Address range: 0x2a370 - 0x2a394
int32_t AutomapDown(void)
{
	int32_t *v1 = (int32_t *)*(int32_t *)(g23 - 0x77a0); // 0x2a378
	*v1 = *v1 + 1;
	int32_t *v2 = (int32_t *)*(int32_t *)(g23 - 0x77a4); // 0x2a384
	int32_t result = *v2;                                // 0x2a384
	*v2 = result + 1;
	return result;
}

// Address range: 0x2a394 - 0x2a3b8
int32_t AutomapLeft(void)
{
	int32_t *v1 = (int32_t *)*(int32_t *)(g23 - 0x77a0); // 0x2a39c
	*v1 = *v1 - 1;
	int32_t *v2 = (int32_t *)*(int32_t *)(g23 - 0x77a4); // 0x2a3a8
	int32_t result = *v2;                                // 0x2a3a8
	*v2 = result + 1;
	return result;
}

// Address range: 0x2a3b8 - 0x2a3dc
int32_t AutomapRight(void)
{
	int32_t *v1 = (int32_t *)*(int32_t *)(g23 - 0x77a0); // 0x2a3c0
	*v1 = *v1 + 1;
	int32_t *v2 = (int32_t *)*(int32_t *)(g23 - 0x77a4); // 0x2a3cc
	int32_t result = *v2;                                // 0x2a3cc
	*v2 = result - 1;
	return result;
}

// Address range: 0x2a3dc - 0x2a460
int32_t AutomapZoomIn(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x777c); // 0x2a3dc
	int32_t v2 = *(int32_t *)(g23 - 0x778c); // r9
	int32_t *v3 = (int32_t *)v1;             // 0x2a3e4
	int32_t result = *v3;                    // 0x2a3e4
	int32_t v4 = *(int32_t *)(g23 - 0x7788); // r8
	int32_t v5 = *(int32_t *)(g23 - 0x7784); // r7
	int32_t v6 = *(int32_t *)(g23 - 0x7780); // r6
	if (result > 199) {
		// bb
		return result;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x7790); // r3
	*v3 = result + 5;
	uint64_t v7 = 0x51eb851f * (int64_t)(64 * *(int32_t *)v1); // 0x2a418
	int32_t v8 = (int32_t)(v7 / 0x100000000) >> 31;            // 0x2a41c
	*(int32_t *)v6 = (v8 & -0x8000000 | (int32_t)(v7 / 0x2000000000)) + (int32_t)(v8 < 0);
	uint32_t v9 = *(int32_t *)v6; // 0x2a42c
	*(int32_t *)v5 = v9 / 2 | v9 & -0x80000000;
	uint32_t v10 = *(int32_t *)v5; // 0x2a438
	*(int32_t *)v4 = v10 / 2 | v10 & -0x80000000;
	uint32_t v11 = *(int32_t *)v4; // 0x2a444
	*(int32_t *)v2 = v11 / 2 | v11 & -0x80000000;
	uint32_t v12 = *(int32_t *)v2; // 0x2a450
	*(int32_t *)result2 = v12 / 2 | v12 & -0x80000000;
	return result2;
}

// Address range: 0x2a460 - 0x2a4e4
int32_t AutomapZoomOut(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x777c); // 0x2a460
	int32_t v2 = *(int32_t *)(g23 - 0x778c); // r9
	int32_t *v3 = (int32_t *)v1;             // 0x2a468
	int32_t result = *v3;                    // 0x2a468
	int32_t v4 = *(int32_t *)(g23 - 0x7788); // r8
	int32_t v5 = *(int32_t *)(g23 - 0x7784); // r7
	int32_t v6 = *(int32_t *)(g23 - 0x7780); // r6
	if (result < 51) {
		// bb
		return result;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x7790); // r3
	*v3 = result - 5;
	uint64_t v7 = 0x51eb851f * (int64_t)(64 * *(int32_t *)v1); // 0x2a49c
	int32_t v8 = (int32_t)(v7 / 0x100000000) >> 31;            // 0x2a4a0
	*(int32_t *)v6 = (v8 & -0x8000000 | (int32_t)(v7 / 0x2000000000)) + (int32_t)(v8 < 0);
	uint32_t v9 = *(int32_t *)v6; // 0x2a4b0
	*(int32_t *)v5 = v9 / 2 | v9 & -0x80000000;
	uint32_t v10 = *(int32_t *)v5; // 0x2a4bc
	*(int32_t *)v4 = v10 / 2 | v10 & -0x80000000;
	uint32_t v11 = *(int32_t *)v4; // 0x2a4c8
	*(int32_t *)v2 = v11 / 2 | v11 & -0x80000000;
	uint32_t v12 = *(int32_t *)v2; // 0x2a4d4
	*(int32_t *)result2 = v12 / 2 | v12 & -0x80000000;
	return result2;
}

// Address range: 0x2a4e4 - 0x2ad84
int32_t DrawAutomapType(int32_t result, int32_t a2, uint32_t a3)
{
	g32 = *(int32_t *)(g23 - 0x7790);
	g31 = a3 % 0x10000;
	g33 = *(int32_t *)(g23 - 0x778c);
	g35 = *(int32_t *)(g23 - 0x7788);
	g24 = result;
	g36 = *(int32_t *)(g23 - 0x7784);
	g25 = a2;
	g29 = __asm_rlwinm(a3, 24, 24, 31);
	if (__asm_rlwinm_(a3, 24, 25, 25) != 0) {
		// 0x2a520
		ENG_set_pixel(g24, g25, -56);
		ENG_set_pixel(g24 - *(int32_t *)g33, g25 - *(int32_t *)g32, -56);
		ENG_set_pixel(g24 - *(int32_t *)g33, g25 + *(int32_t *)g32, -56);
		ENG_set_pixel(g24 + *(int32_t *)g33, g25 - *(int32_t *)g32, -56);
		ENG_set_pixel(g24 + *(int32_t *)g33, g25 + *(int32_t *)g32, -56);
		ENG_set_pixel(g24 - *(int32_t *)g35, g25, -56);
		ENG_set_pixel(g24 + *(int32_t *)g35, g25, -56);
		ENG_set_pixel(g24, g25 - *(int32_t *)g33, -56);
		ENG_set_pixel(g24, g25 + *(int32_t *)g33, -56);
		int32_t v1 = g24 - *(int32_t *)g36 + *(int32_t *)g33; // 0x2a5f8
		ENG_set_pixel(v1, g25 + *(int32_t *)g32, -56);
		int32_t v2 = *(int32_t *)g36 - *(int32_t *)g33 + g24; // 0x2a618
		ENG_set_pixel(v2, g25 + *(int32_t *)g32, -56);
		ENG_set_pixel(g24 - *(int32_t *)g35, g25 + *(int32_t *)g33, -56);
		ENG_set_pixel(g24 + *(int32_t *)g35, g25 + *(int32_t *)g33, -56);
		int32_t v3 = g25 + *(int32_t *)g35 - *(int32_t *)g32; // 0x2a668
		ENG_set_pixel(g24 - *(int32_t *)g33, v3, -56);
		int32_t v4 = g25 + *(int32_t *)g35 - *(int32_t *)g32; // 0x2a688
		ENG_set_pixel(g24 + *(int32_t *)g33, v4, -56);
		result = ENG_set_pixel(g24, g25 + *(int32_t *)g35, -56);
		// branch -> 0x2a6a4
	}
	// 0x2a6a4
	g30 = g29 % 256;
	if (__asm_rlwinm_(g29, 0, 24, 24) != 0) {
		int32_t v5 = *(int32_t *)g33; // 0x2a6b0
		int32_t v6 = *(int32_t *)g32; // 0x2a6bc
		int32_t v7 = g25;             // 0x2a6c0
		int32_t v8 = g24;             // 0x2a6c8
		int32_t v9 = v8 - v5;         // 0x2a6c8
		int32_t v10 = v7 - v5 - v6;   // 0x2a6d0
		DrawLine(v9, v10, *(int32_t *)g35 + v5 + v8, v7 + v6, -112);
		int32_t v11 = *(int32_t *)g33; // 0x2a6dc
		int32_t v12 = *(int32_t *)g35; // 0x2a6e4
		int32_t v13 = g25;             // 0x2a6e8
		int32_t v14 = g24;             // 0x2a6f0
		DrawLine(v14 - v12, v13 - v11, v14 + v12, v13 + v11, -112);
		int32_t v15 = *(int32_t *)g33;             // 0x2a6fc
		int32_t v16 = *(int32_t *)g32;             // 0x2a704
		int32_t v17 = g24;                         // 0x2a70c
		int32_t v18 = g25;                         // 0x2a718
		int32_t v19 = v17 - *(int32_t *)g35 - v15; // 0x2a71c
		DrawLine(v19, v18 - v16, v17 + v15, v16 + v15 + v18, -112);
		int32_t v20 = g25;                   // 0x2a72c
		int32_t v21 = g24;                   // 0x2a734
		int32_t v22 = v21 - *(int32_t *)g36; // 0x2a738
		result = DrawLine(v22, v20, v21, *(int32_t *)g35 + v20, -112);
		// branch -> 0x2a748
	}
	uint32_t v23 = g31 % 16; // 0x2a748
	g31 = 0;
	g28 = 0;
	g27 = 0;
	g26 = 0;
	if (v23 <= 12) {
		// 0x2a764
		return *(int32_t *)(g23 - 0x2e74 + 4 * v23);
	}
	// 0x2ad70
	return result;
}

// Address range: 0x2ad84 - 0x2b288
int32_t DrawAutomapPlr(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x2ad90
	int32_t v2 = *(int32_t *)(g23 - 0x77b8); // 0x2ad94
	g33 = *(int32_t *)(g23 - 0x7790);
	g35 = *(int32_t *)(g23 - 0x778c);
	int32_t v3 = *(int32_t *)(g23 - 0x7788); // 0x2ada0
	g36 = v3;
	int32_t v4 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x2adb0
	int32_t v5 = v4 + v1;                                         // 0x2adb4
	int32_t v6;                                                   // 0x2aef8
	int32_t v7;                                                   // 0x2af2c
	int32_t v8;                                                   // 0x2af08
	int32_t v9;                                                   // 0x2ae04
	int32_t v10;                                                  // 0x2ae34
	int32_t v11;                                                  // 0x2ae38
	int32_t v12;                                                  // 0x2ae40
	int32_t v13;                                                  // 0x2ae48
	uint32_t v14;                                                 // 0x2ae64
	uint32_t v15;                                                 // 0x2ae90
	int32_t v16;                                                  // 0x2ae9c
	int32_t v17;                                                  // 0x2aecc
	int32_t result;                                               // 0x2af30
	uint32_t v18;                                                 // 0x2af34
	uint64_t v19;                                                 // 0x2ae3c
	uint64_t v20;                                                 // 0x2ae80
	int32_t v21;                                                  // 0x2ae5c
	int32_t v22;                                                  // 0x2ae88
	if (*(int32_t *)v5 == 3) {
		int32_t v23 = *(int32_t *)(v5 + 64); // 0x2adc8
		int32_t v24 = v23;                   // r12
		int32_t v25 = *(int32_t *)(v5 + 68); // 0x2add0
		int32_t v26 = v25;                   // r28
		if (*(int32_t *)(v5 + 112) == 2) {
			// 0x2add8
			v24 = v23 + 1;
			// branch -> 0x2adf4
		} else {
			// 0x2ade0
			v26 = v25 + 1;
			// branch -> 0x2adf4
		}
		// 0x2adf4
		v9 = *(int32_t *)*(int32_t *)(g23 - 0x777c);
		int32_t v27 = *(int32_t *)*(int32_t *)(g23 - 0x77a0); // 0x2ae30
		v10 = *(int32_t *)*(int32_t *)(g23 - 0x77b0);
		v11 = *(int32_t *)*(int32_t *)(g23 - 0x77a4);
		v19 = 0x51eb851f * (int64_t)(*(int32_t *)(v5 + 96) * v9);
		v12 = *(int32_t *)*(int32_t *)(g23 - 0x77b4);
		v13 = *(int32_t *)v3;
		v21 = (int32_t)(v19 / 0x100000000) >> 31;
		v14 = (v21 & -0x8000000 | (int32_t)(v19 / 0x2000000000)) + (int32_t)(v21 < 0);
		v20 = 0x51eb851f * (int64_t)(*(int32_t *)v2 * v9);
		v22 = (int32_t)(v20 / 0x100000000) >> 31;
		v15 = (v22 & -0x8000000 | (int32_t)(v20 / 0x2000000000)) + (int32_t)(v22 < 0);
		v16 = v24 - v10 + -2 * v27;
		v17 = (v14 / 2 | v14 & -0x80000000) + 384 + (v15 / 2 | v15 & -0x80000000) + (-1 * (v26 - v12 + -2 * v11) + v16) * v13;
		g32 = v17;
		v6 = g23;
		if (*(int32_t *)*(int32_t *)(g23 - 0x77bc) == 0) {
			// 0x2aef8
			if (*(int32_t *)*(int32_t *)(v6 - 0x77c0) != 0) {
				// 0x2af08
				v8 = v17 - 160;
				g32 = v8;
				v7 = v8;
				// branch -> 0x2af0c
			} else {
				v7 = v17;
			}
		} else {
			// 0x2af08
			v8 = v17 - 160;
			g32 = v8;
			v7 = v8;
			// branch -> 0x2af0c
		}
		// 0x2af0c
		if (*(int32_t *)*(int32_t *)(v6 - 0x77c4) == 0) {
			// 0x2af1c
			if (*(int32_t *)*(int32_t *)(v6 - 0x77c8) != 0) {
				// 0x2af2c
				g32 = v7 + 160;
				// branch -> 0x2af30
			}
		} else {
			// 0x2af2c
			g32 = v7 + 160;
			// branch -> 0x2af30
		}
		// 0x2af30
		result = v4 + v1;
		v18 = *(int32_t *)(result + 112);
		if (v18 > 7) {
			// 0x2b274
			return result;
		}
		// 0x2af44
		return *(int32_t *)(4 * v18 + v6 - 0x2e40);
	}
	int32_t v28 = *(int32_t *)(v5 + 60); // 0x2adf0
	// branch -> 0x2adf4
	int32_t v29 = *(int32_t *)(g23 - 0x77a0); // 0x2ae00
	v9 = *(int32_t *)*(int32_t *)(g23 - 0x777c);
	v10 = *(int32_t *)*(int32_t *)(g23 - 0x77b0);
	v11 = *(int32_t *)*(int32_t *)(g23 - 0x77a4);
	v19 = 0x51eb851f * (int64_t)(*(int32_t *)(v5 + 96) * v9);
	v12 = *(int32_t *)*(int32_t *)(g23 - 0x77b4);
	v13 = *(int32_t *)v3;
	v21 = (int32_t)(v19 / 0x100000000) >> 31;
	v14 = (v21 & -0x8000000 | (int32_t)(v19 / 0x2000000000)) + (int32_t)(v21 < 0);
	v20 = 0x51eb851f * (int64_t)(*(int32_t *)v2 * v9);
	v22 = (int32_t)(v20 / 0x100000000) >> 31;
	v15 = (v22 & -0x8000000 | (int32_t)(v20 / 0x2000000000)) + (int32_t)(v22 < 0);
	v16 = *(int32_t *)(v5 + 56) - v10 + -2 * *(int32_t *)v29;
	v17 = (v14 / 2 | v14 & -0x80000000) + 384 + (v15 / 2 | v15 & -0x80000000) + (-1 * (v28 - v12 + -2 * v11) + v16) * v13;
	g32 = v17;
	v6 = g23;
	if (*(int32_t *)*(int32_t *)(g23 - 0x77bc) == 0) {
		// 0x2aef8
		if (*(int32_t *)*(int32_t *)(v6 - 0x77c0) != 0) {
			// 0x2af08
			v8 = v17 - 160;
			g32 = v8;
			v7 = v8;
			// branch -> 0x2af0c
		} else {
			v7 = v17;
		}
		// 0x2af0c
		if (*(int32_t *)*(int32_t *)(v6 - 0x77c4) == 0) {
			// 0x2af1c
			if (*(int32_t *)*(int32_t *)(v6 - 0x77c8) != 0) {
				// 0x2af2c
				g32 = v7 + 160;
				// branch -> 0x2af30
			}
		} else {
			// 0x2af2c
			g32 = v7 + 160;
			// branch -> 0x2af30
		}
		// 0x2af30
		result = v4 + v1;
		v18 = *(int32_t *)(result + 112);
		if (v18 > 7) {
			// 0x2b274
			return result;
		}
		// 0x2af44
		return *(int32_t *)(4 * v18 + v6 - 0x2e40);
	}
	// 0x2af08
	v8 = v17 - 160;
	g32 = v8;
	v7 = v8;
	// branch -> 0x2af0c
	// 0x2af0c
	if (*(int32_t *)*(int32_t *)(v6 - 0x77c4) != 0) {
		// 0x2af2c
		g32 = v7 + 160;
		// branch -> 0x2af30
		// 0x2af30
		result = v4 + v1;
		v18 = *(int32_t *)(result + 112);
		if (v18 > 7) {
			// 0x2b274
			return result;
		}
		// 0x2af44
		return *(int32_t *)(4 * v18 + v6 - 0x2e40);
	}
	// 0x2af1c
	if (*(int32_t *)*(int32_t *)(v6 - 0x77c8) != 0) {
		// 0x2af2c
		g32 = v7 + 160;
		// branch -> 0x2af30
	}
	// 0x2af30
	result = v4 + v1;
	v18 = *(int32_t *)(result + 112);
	if (v18 > 7) {
		// 0x2b274
		return result;
	}
	// 0x2af44
	return *(int32_t *)(4 * v18 + v6 - 0x2e40);
}

// Address range: 0x2b288 - 0x2b424
int32_t GetAutomapType(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36;                        // 0x2b288
	int32_t v2 = g10;                        // 0x2b28c
	int32_t v3 = *(int32_t *)(g23 - 0x7798); // 0x2b294
	int32_t v4 = g35;                        // 0x2b298
	g35 = a2;
	int32_t v5 = g33; // 0x2b2a0
	g33 = a1;
	int32_t result2;  // 0x2b404
	int32_t v6;       // 0x2b38c
	int32_t v7;       // 0x2b3dc
	int32_t v8;       // 0x2b3f4
	unsigned char v9; // 0x2b3b8
	uint16_t v10;     // 0x2b3c0
	if (a3 == 0) {
		// 0x2b300
		// branch -> 0x2b358
	} else {
		// 0x2b2b4
		int32_t result; // 0x2b420
		if (a1 == -1) {
			// 0x2b2bc
			if (a2 >= 0) {
				// 0x2b2c4
				if (a2 <= 39) {
					// 0x2b2cc
					if (*(char *)(a2 + v3) != 0) {
						int32_t v11 = GetAutomapType(0, a2, 0); // 0x2b2e4
						if (__asm_rlwinm_(v11, 0, 17, 17) == 0) {
							// 0x2b2f8
							result = 0x4000;
							// branch -> 0x2b408
						} else {
							// 0x2b2f0
							result = 0;
							// branch -> 0x2b408
						}
						// 0x2b408
						g36 = v1;
						g10 = v2;
						g35 = v4;
						g33 = v5;
						return result;
					}
				}
			}
		}
		// 0x2b308
		if (a2 == -1) {
			// 0x2b310
			if (a1 < 0 || a1 > 39) {
				// 0x2b358
				if (a1 >= 0) {
					// 0x2b360
					if (a1 < 40) {
						// 0x2b370
						if (a2 >= 0) {
							// 0x2b378
							if (a2 < 40) {
								// 0x2b388
								v6 = 40 * a1 + a2;
								if (*(char *)(v6 + v3) == 0) {
									// 0x2b39c
									if (a3 != 0) {
										// 0x2b3a4
										// branch -> 0x2b408
										// 0x2b408
										g36 = v1;
										g10 = v2;
										g35 = v4;
										g33 = v5;
										return 0;
									}
								}
								// 0x2b3ac
								v9 = *(char *)(*(int32_t *)(g23 - 0x77cc) + v6);
								v10 = *(int16_t *)(2 * (int32_t)v9 + *(int32_t *)(g23 - 0x6580));
								g36 = v10;
								if (v10 == 7) {
									// 0x2b3d0
									v7 = GetAutomapType(a1 - 1, a2, 0);
									if (__asm_rlwinm_(v7, 24, 28, 28) != 0) {
										// 0x2b3e8
										v8 = GetAutomapType(g33, g35 - 1, 0);
										if (__asm_rlwinm_(v8, 24, 29, 29) != 0) {
											// 0x2b400
											g36 = 1;
											// branch -> 0x2b404
										}
									}
								}
								// 0x2b404
								result2 = g36;
								// branch -> 0x2b408
								// 0x2b408
								g36 = v1;
								g10 = v2;
								g35 = v4;
								g33 = v5;
								return result2;
							}
						}
						// 0x2b380
						// branch -> 0x2b408
						// 0x2b408
						g36 = v1;
						g10 = v2;
						g35 = v4;
						g33 = v5;
						return 0;
					}
				}
				// 0x2b368
				// branch -> 0x2b408
				// 0x2b408
				g36 = v1;
				g10 = v2;
				g35 = v4;
				g33 = v5;
				return 0;
			}
			// 0x2b320
			if (*(char *)(40 * a1 + v3) != 0) {
				int32_t v12 = GetAutomapType(a1, 0, 0); // 0x2b33c
				if (__asm_rlwinm_(v12, 0, 17, 17) == 0) {
					// 0x2b350
					result = 0x4000;
					// branch -> 0x2b408
				} else {
					// 0x2b348
					result = 0;
					// branch -> 0x2b408
				}
				// 0x2b408
				g36 = v1;
				g10 = v2;
				g35 = v4;
				g33 = v5;
				return result;
			}
			// 0x2b358
			if (a1 >= 0) {
				// 0x2b360
				if (a1 < 40) {
					// 0x2b370
					if (a2 >= 0) {
						// 0x2b378
						if (a2 < 40) {
							// 0x2b388
							v6 = 40 * a1 + a2;
							if (*(char *)(v6 + v3) == 0) {
								// 0x2b39c
								if (a3 != 0) {
									// 0x2b3a4
									// branch -> 0x2b408
									// 0x2b408
									g36 = v1;
									g10 = v2;
									g35 = v4;
									g33 = v5;
									return 0;
								}
							}
							// 0x2b3ac
							v9 = *(char *)(*(int32_t *)(g23 - 0x77cc) + v6);
							v10 = *(int16_t *)(2 * (int32_t)v9 + *(int32_t *)(g23 - 0x6580));
							g36 = v10;
							if (v10 == 7) {
								// 0x2b3d0
								v7 = GetAutomapType(a1 - 1, a2, 0);
								if (__asm_rlwinm_(v7, 24, 28, 28) != 0) {
									// 0x2b3e8
									v8 = GetAutomapType(g33, g35 - 1, 0);
									if (__asm_rlwinm_(v8, 24, 29, 29) != 0) {
										// 0x2b400
										g36 = 1;
										// branch -> 0x2b404
									}
								}
							}
							// 0x2b404
							result2 = g36;
							// branch -> 0x2b408
							// 0x2b408
							g36 = v1;
							g10 = v2;
							g35 = v4;
							g33 = v5;
							return result2;
						}
					}
					// 0x2b380
					// branch -> 0x2b408
					// 0x2b408
					g36 = v1;
					g10 = v2;
					g35 = v4;
					g33 = v5;
					return 0;
				}
			}
			// 0x2b368
			// branch -> 0x2b408
			// 0x2b408
			g36 = v1;
			g10 = v2;
			g35 = v4;
			g33 = v5;
			return 0;
		}
	}
	// 0x2b358
	if (a1 >= 0) {
		// 0x2b360
		if (a1 < 40) {
			// 0x2b370
			if (a2 >= 0) {
				// 0x2b378
				if (a2 < 40) {
					// 0x2b388
					v6 = 40 * a1 + a2;
					if (*(char *)(v6 + v3) == 0) {
						// 0x2b39c
						if (a3 != 0) {
							// 0x2b3a4
							// branch -> 0x2b408
							// 0x2b408
							g36 = v1;
							g10 = v2;
							g35 = v4;
							g33 = v5;
							return 0;
						}
					}
					// 0x2b3ac
					v9 = *(char *)(*(int32_t *)(g23 - 0x77cc) + v6);
					v10 = *(int16_t *)(2 * (int32_t)v9 + *(int32_t *)(g23 - 0x6580));
					g36 = v10;
					if (v10 == 7) {
						// 0x2b3d0
						v7 = GetAutomapType(a1 - 1, a2, 0);
						if (__asm_rlwinm_(v7, 24, 28, 28) != 0) {
							// 0x2b3e8
							v8 = GetAutomapType(g33, g35 - 1, 0);
							if (__asm_rlwinm_(v8, 24, 29, 29) != 0) {
								// 0x2b400
								g36 = 1;
								// branch -> 0x2b404
							}
						}
					}
					// 0x2b404
					result2 = g36;
					// branch -> 0x2b408
					// 0x2b408
					g36 = v1;
					g10 = v2;
					g35 = v4;
					g33 = v5;
					return result2;
				}
			}
			// 0x2b380
			// branch -> 0x2b408
			// 0x2b408
			g36 = v1;
			g10 = v2;
			g35 = v4;
			g33 = v5;
			return 0;
		}
	}
	// 0x2b368
	// branch -> 0x2b408
	// 0x2b408
	g36 = v1;
	g10 = v2;
	g35 = v4;
	g33 = v5;
	return 0;
}

// Address range: 0x2b424 - 0x2b534
int32_t DrawAutomapGame(int32_t a1)
{
	int32_t v1 = g36; // 0x2b424
	int32_t v2 = g35; // 0x2b430
	g35 = 20;
	g36 = *(int32_t *)(g23 - 0x77d4);
	int32_t v3;       // bp-264
	int32_t v4;       // 0x2b4b4
	int32_t result2;  // 0x2b530
	unsigned char v5; // 0x2b4f0
	int32_t v6;       // 0x2b4c4
	int32_t v7;       // 0x2b4cc
	int32_t v8;       // 0x2b4ec
	int32_t v9;       // 0x2b4e0
	if ((*(char *)*(int32_t *)(g23 - 0x77f0) || 1) == 1) {
		// 0x2b4b4
		v4 = g23;
		if (*(char *)*(int32_t *)(v4 - 0x77d8) != 0) {
			// 0x2b4c4
			v6 = *(int32_t *)(v4 - 0x77e0);
			v7 = *(int32_t *)(v4 - 0x77dc);
			v9 = *(int32_t *)(4 * (int32_t) * (char *)v6 + v7);
			int32_t result = PrintGameStr(8, 20, (char *)v9, 3); // 0x2b4e4
			// branch -> 0x2b51c
			// 0x2b51c
			g36 = v1;
			g35 = v2;
			return result;
		}
		// 0x2b4ec
		v8 = *(int32_t *)(v4 - 0x77e4);
		v5 = *(char *)v8;
		g38 = v5;
		if (v5 != 0) {
			// 0x2b4fc
			g37 = *(int32_t *)(v4 - 0x65a4);
			sprintf();
			result2 = PrintGameStr(8, g35, (char *)&v3, 3);
			// branch -> 0x2b51c
		} else {
			result2 = v8;
		}
		// 0x2b51c
		g36 = v1;
		g35 = v2;
		return result2;
	}
	int32_t v10 = &v3; // 0x2b450
	g34 = v10;
	g37 = *(int32_t *)(g23 - 0x659c);
	int32_t v11 = strcpy(); // 0x2b458
	function_e86d0(v11, *(int32_t *)(g23 - 0x77d0));
	PrintGameStr(8, 20, (char *)&v3, 3);
	g35 = 35;
	int32_t v12; // 0x2b4c8
	if (*(char *)g36 != 0) {
		// 0x2b488
		g34 = v10;
		g37 = *(int32_t *)(g23 - 0x65a0);
		function_e86d0(strcpy(), g36);
		PrintGameStr(8, 35, (char *)&v3, 3);
		g35 = 50;
		v12 = 50;
		// branch -> 0x2b4b4
	} else {
		v12 = 35;
	}
	// 0x2b4b4
	v4 = g23;
	if (*(char *)*(int32_t *)(v4 - 0x77d8) == 0) {
		// 0x2b4ec
		v8 = *(int32_t *)(v4 - 0x77e4);
		v5 = *(char *)v8;
		g38 = v5;
		if (v5 != 0) {
			// 0x2b4fc
			g37 = *(int32_t *)(v4 - 0x65a4);
			sprintf();
			result2 = PrintGameStr(8, g35, (char *)&v3, 3);
			// branch -> 0x2b51c
		} else {
			result2 = v8;
		}
	} else {
		// 0x2b4c4
		v6 = *(int32_t *)(v4 - 0x77e0);
		v7 = *(int32_t *)(v4 - 0x77dc);
		v9 = *(int32_t *)(4 * (int32_t) * (char *)v6 + v7);
		result2 = PrintGameStr(8, v12, (char *)v9, 3);
		// branch -> 0x2b51c
	}
	// 0x2b51c
	g36 = v1;
	g35 = v2;
	return result2;
}

// Address range: 0x2b534 - 0x2baa8
int32_t DrawAutomap(int32_t a1)
{
	int32_t v1 = g10;                        // 0x2b538
	int32_t v2 = *(int32_t *)(g23 - 0x77ec); // r7
	int32_t v3 = *(int32_t *)(g23 - 0x77e8); // r6
	int32_t v4 = *(int32_t *)(g23 - 0x77b8); // r5
	int32_t v5 = *(int32_t *)(g23 - 0x77a4); // r4
	int32_t v6 = *(int32_t *)(g23 - 0x77a0); // r11
	g28 = *(int32_t *)(g23 - 0x7788);
	g29 = *(int32_t *)(g23 - 0x7784);
	g30 = *(int32_t *)(g23 - 0x7780);
	int32_t v7 = *(int32_t *)(g23 - 0x778c); // 0x2b56c
	if (*(char *)*(int32_t *)(g23 - 0x7794) == 0) {
		// 0x2b578
		DrawAutomapGame(v7);
		// branch -> 0x2ba94
	} else {
		int32_t v8 = *(int32_t *)(g23 - 0x7804); // 0x2b580
		int32_t v9 = *(int32_t *)(g23 - 0x7808); // 0x2b584
		*(int32_t *)v9 = *(int32_t *)v8 + (int32_t) "; ";
		int32_t v10 = *(int32_t *)*(int32_t *)(g23 - 0x77b0); // 0x2b598
		uint32_t v11 = v10 - 16;                              // 0x2b59c
		*(int32_t *)v3 = v11 / 2 | v11 & -0x80000000;
		int32_t v12 = *(int32_t *)v3;        // 0x2b5a8
		int32_t v13 = v12;                   // r12
		uint32_t v14 = *(int32_t *)v6 + v12; // 0x2b5b0
		int32_t v15 = -v14;                  // 0x2b5b4
		int32_t v16 = v15;                   // r9
		int32_t v17;                         // ctr
		int32_t v18;                         // r10
		int32_t v19;                         // 0x2b654
		int32_t v20;                         // 0x2b65c
		int32_t *v21;                        // 0x2b668
		int32_t *v22;                        // 0x2b674
		int32_t *v23;                        // 0x2b680
		int32_t *v24;                        // 0x2b68c
		int32_t *v25;                        // 0x2b698
		int32_t *v26;                        // 0x2b6a4
		int32_t *v27;                        // 0x2b6b0
		int32_t *v28;                        // 0x2b6bc
		int32_t v29;                         // 0x2b6c8
		int32_t v30;                         // 0x2b6cc
		int32_t *v31;                        // 0x2b6d8
		int32_t v32;                         // 0x2b6e4
		int32_t *v33;                        // 0x2b6e8
		uint32_t v34;                        // 0x2b700
		int32_t v35;                         // 0x2b718
		int32_t v36;                         // 0x2b720
		int32_t *v37;                        // 0x2b72c
		int32_t *v38;                        // 0x2b738
		int32_t *v39;                        // 0x2b744
		int32_t *v40;                        // 0x2b750
		int32_t *v41;                        // 0x2b75c
		int32_t *v42;                        // 0x2b768
		int32_t *v43;                        // 0x2b774
		int32_t *v44;                        // 0x2b780
		int32_t v45;                         // 0x2b78c
		int32_t *v46;                        // 0x2b79c
		int32_t v47;                         // 0x2b7a8
		uint32_t v48;                        // 0x2b64c
		uint32_t v49;                        // 0x2b714
		int32_t v50;                         // 0x2b780
		int32_t v51;                         // 0x2b79c
		if (v14 <= 0xffffffff) {
			int32_t v52 = __asm_rlwinm_(v15, 29, 3, 31); // 0x2b5bc
			int32_t *v53;                                // 0x2b638
			int32_t v54;                                 // 0x2b644
			int32_t v55;                                 // 0x2b790
			int32_t v56;                                 // 0x2b7b8
			int32_t v57;                                 // 0x2b7c0
			int32_t *v58;                                // 0x2b7cc
			int32_t *v59;                                // 0x2b7d8
			int32_t *v60;                                // 0x2b7e4
			int32_t *v61;                                // 0x2b7f0
			int32_t *v62;                                // 0x2b7fc
			int32_t *v63;                                // 0x2b808
			int32_t *v64;                                // 0x2b814
			int32_t *v65;                                // 0x2b820
			int32_t v66;                                 // 0x2b82c
			int32_t v67;                                 // 0x2b70c
			uint32_t v68;                                // 0x2b7b0
			int32_t v69;                                 // 0x2b820
			if (v52 == 0) {
				// 0x2b5bc
				// branch -> 0x2b634
				// 0x2b634
				v53 = (int32_t *)v6;
				*v53 = *v53 + 1;
				v54 = v16 - 1;
				// branch -> 0x2b638
				while (v54 != 0) {
					// 0x2b638
					v53 = (int32_t *)v6;
					*v53 = *v53 + 1;
					v54--;
					// continue -> 0x2b638
				}
				// 0x2b648
				v48 = v13 + *(int32_t *)v6;
				v19 = v48 - 39;
				v16 = v19;
				int32_t *v70; // 0x2b83c
				int32_t v71;  // 0x2b848
				int32_t v72;  // 0x2b83c
				if (v48 >= 40) {
					// 0x2b65c
					v20 = __asm_rlwinm_(v19, 29, 3, 31);
					int32_t v73;    // r19
					int32_t v74;    // 0x2b85c
					int32_t v75;    // 0x2b870
					int32_t v76;    // 0x2b8cc
					int32_t v77;    // 0x2b8ec
					int32_t v78;    // 0x2b934
					int32_t v79;    // 0x2b940
					int32_t v80;    // 0x2b970
					int32_t v81;    // 0x2b984
					int32_t v82;    // 0x2b9c0
					int32_t v83;    // 0x2b9d0
					int32_t v84;    // 0x2b9d047
					int32_t v85;    // 0x2b9d4
					int32_t v86;    // 0x2b9e0
					int32_t v87;    // 0x2ba1c
					int32_t v88;    // 0x2ba1c56
					int32_t v89;    // 0x2ba30
					int32_t v90;    // 0x2ba8c
					int32_t v91;    // 0x2b830
					int32_t *v92;   // 0x2b84c
					int32_t v93;    // 0x2b888
					int32_t v94;    // 0x2b8b8
					int32_t v95;    // 0x2b8c4
					int32_t v96;    // 0x2b91c
					int32_t v97;    // 0x2b920
					int32_t v98;    // 0x2b938
					int32_t v99;    // 0x2b960
					int32_t v100;   // 0x2b9e0
					int32_t v101;   // 0x2ba1420
					int32_t v102;   // 0x2ba6c25
					int32_t result; // 0x2ba90
					int32_t v103;   // 0x2b6fc
					int32_t v104;   // 0x2b86c
					int32_t v105;   // 0x2b870
					int32_t v106;   // 0x2b88c
					uint32_t v107;  // 0x2b89c
					int32_t v108;   // 0x2b8ac
					int32_t v109;   // 0x2b8ec
					uint32_t v110;  // 0x2b964
					int32_t v111;   // 0x2b970
					uint32_t v112;  // 0x2b97c
					int32_t v113;   // 0x2b984
					int32_t v114;   // 0x2b878
					uint64_t v115;  // 0x2b87c
					char v116;      // 0x2b890
					uint64_t v117;  // 0x2b958
					uint64_t v118;  // 0x2b96c
					int32_t v119;   // 0x2b95c
					int32_t v120;   // 0x2b974
					int32_t v121;   // 0x2b8e8
					if (v20 == 0) {
						// 0x2b65c
						// branch -> 0x2b6d4
						// 0x2b6d4
						v31 = (int32_t *)v6;
						*v31 = *v31 - 1;
						v32 = v16 - 1;
						// branch -> 0x2b6d8
						while (v32 != 0) {
							// 0x2b6d8
							v31 = (int32_t *)v6;
							*v31 = *v31 - 1;
							v32--;
							// continue -> 0x2b6d8
						}
						// 0x2b6e8
						v33 = (int32_t *)v3;
						*v33 = *(int32_t *)v6 + *v33;
						v103 = *(int32_t *)*(int32_t *)(g23 - 0x77b4);
						v16 = v103;
						v34 = v103 - 16;
						*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
						v67 = *(int32_t *)v2;
						v13 = v67;
						v49 = *(int32_t *)v5 + v67;
						v35 = -v49;
						v18 = v35;
						int32_t v122; // 0x2b99c
						int32_t v123; // 0x2b9c0
						if (v49 > 0xffffffff) {
							// 0x2b7ac
							v68 = v13 + *(int32_t *)v5;
							v56 = v68 - 39;
							v18 = v56;
							if (v68 < 40) {
								// 0x2b84c
								v92 = (int32_t *)v2;
								v74 = g23;
								*v92 = *(int32_t *)v5 + *v92;
								v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
								v75 = v4;
								v105 = *(int32_t *)v75;
								v114 = *(int32_t *)(v75 + 4);
								v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
								v93 = v115 / 0x8000000000000000;
								v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
								v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
								v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
								g31 = v107;
								v108 = *(int32_t *)v3 - v107;
								g33 = v108;
								g32 = *(int32_t *)v2 - 1;
								if (v107 % 2 == 0) {
									// 0x2b8e4
									v121 = v107 / 2 | v107 & -0x80000000;
									v77 = g29;
									v109 = *(int32_t *)v77;
									v88 = v77;
									v97 = 336 - v109 * v121 - *(int32_t *)g28;
									v96 = v109 + 384 - *(int32_t *)g30 * v121;
									// branch -> 0x2b90c
								} else {
									// 0x2b8b8
									v94 = v107 - 1;
									v95 = v107 + 1;
									v76 = g29;
									v88 = v76;
									v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
									v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
									// branch -> 0x2b90c
								}
								// 0x2b90c
								v98 = v97;
								v78 = v96;
								if (v10 % 2 != 0) {
									// 0x2b914
									v98 = v97 - *(int32_t *)v7;
									v78 = v96 - *(int32_t *)g28;
									// branch -> 0x2b924
								}
								// 0x2b924
								v81 = v98;
								v80 = v78;
								if (v16 % 2 != 0) {
									// 0x2b92c
									v81 = v98 - *(int32_t *)v7;
									v80 = *(int32_t *)g28 + v78;
									// branch -> 0x2b93c
								}
								// 0x2b93c
								v79 = g23;
								v117 = 0x51eb851f * (int64_t)(v105 * v104);
								v119 = (int32_t)(v117 / 0x100000000) >> 31;
								v99 = v119 < 0;
								v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
								v118 = 0x51eb851f * (int64_t)(v114 * v104);
								v111 = v80 + (v110 / 2 | v110 & -0x80000000);
								g36 = v111;
								v120 = (int32_t)(v118 / 0x100000000) >> 31;
								v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
								v113 = v81 + (v112 / 2 | v112 & -0x80000000);
								g35 = v113;
								if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
									// 0x2b98c
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v82 = v111;
									}
								}
								// 0x2b9a0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
									// 0x2b9b0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v84 = v82;
									}
								}
								// 0x2b9c4
								g26 = v107 + 1;
								g27 = 0;
								if (v107 >= 0xffffffff) {
									v101 = v107;
									v85 = v113;
									v83 = v84;
									while (true) {
										// 0x2b9d0
										g24 = v83;
										g25 = v85;
										v73 = 0;
										if (v101 > 0) {
											v100 = 0;
											v86 = v108;
											goto lab_0x2b9e0_24;
										}
										v102 = v101;
										v89 = v85;
										v87 = v88;
										goto lab_0x2ba1c_24;
									}
								}
								// 0x2ba8c
								v90 = DrawAutomapPlr();
								result = DrawAutomapGame(v90);
								// branch -> 0x2ba94
								// 0x2ba94
								g10 = v1;
								return result;
							}
							// 0x2b7c0
							v57 = __asm_rlwinm_(v56, 29, 3, 31);
							if (v57 == 0) {
								// 0x2b7c0
								// branch -> 0x2b838
								// 0x2b838
								v70 = (int32_t *)v5;
								*v70 = *v70 - 1;
								v71 = v18 - 1;
								// branch -> 0x2b83c
								while (v71 != 0) {
									// 0x2b83c
									v70 = (int32_t *)v5;
									*v70 = *v70 - 1;
									v71--;
									// continue -> 0x2b83c
								}
								// 0x2b84c
								v92 = (int32_t *)v2;
								v74 = g23;
								*v92 = *(int32_t *)v5 + *v92;
								v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
								v75 = v4;
								v105 = *(int32_t *)v75;
								v114 = *(int32_t *)(v75 + 4);
								v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
								v93 = v115 / 0x8000000000000000;
								v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
								v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
								v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
								g31 = v107;
								v108 = *(int32_t *)v3 - v107;
								g33 = v108;
								g32 = *(int32_t *)v2 - 1;
								if (v107 % 2 == 0) {
									// 0x2b8e4
									v121 = v107 / 2 | v107 & -0x80000000;
									v77 = g29;
									v109 = *(int32_t *)v77;
									v88 = v77;
									v97 = 336 - v109 * v121 - *(int32_t *)g28;
									v96 = v109 + 384 - *(int32_t *)g30 * v121;
									// branch -> 0x2b90c
								} else {
									// 0x2b8b8
									v94 = v107 - 1;
									v95 = v107 + 1;
									v76 = g29;
									v88 = v76;
									v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
									v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
									// branch -> 0x2b90c
								}
								// 0x2b90c
								v98 = v97;
								v78 = v96;
								if (v10 % 2 != 0) {
									// 0x2b914
									v98 = v97 - *(int32_t *)v7;
									v78 = v96 - *(int32_t *)g28;
									// branch -> 0x2b924
								}
								// 0x2b924
								v81 = v98;
								v80 = v78;
								if (v16 % 2 != 0) {
									// 0x2b92c
									v81 = v98 - *(int32_t *)v7;
									v80 = *(int32_t *)g28 + v78;
									// branch -> 0x2b93c
								}
								// 0x2b93c
								v79 = g23;
								v117 = 0x51eb851f * (int64_t)(v105 * v104);
								v119 = (int32_t)(v117 / 0x100000000) >> 31;
								v99 = v119 < 0;
								v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
								v118 = 0x51eb851f * (int64_t)(v114 * v104);
								v111 = v80 + (v110 / 2 | v110 & -0x80000000);
								g36 = v111;
								v120 = (int32_t)(v118 / 0x100000000) >> 31;
								v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
								v113 = v81 + (v112 / 2 | v112 & -0x80000000);
								g35 = v113;
								if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
									// 0x2b98c
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
										// 0x2b99c
										v122 = v111 - 160;
										g36 = v122;
										v82 = v122;
										// branch -> 0x2b9a0
									} else {
										v82 = v111;
									}
								}
								// 0x2b9a0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
									// 0x2b9b0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
										// 0x2b9c0
										v123 = v82 + 160;
										g36 = v123;
										v84 = v123;
										// branch -> 0x2b9c4
									} else {
										v84 = v82;
									}
								}
								// 0x2b9c4
								g26 = v107 + 1;
								g27 = 0;
								if (v107 >= 0xffffffff) {
									v101 = v107;
									v85 = v113;
									v83 = v84;
									while (true) {
										// 0x2b9d0
										g24 = v83;
										g25 = v85;
										v73 = 0;
										if (v101 > 0) {
											v100 = 0;
											v86 = v108;
											goto lab_0x2b9e0_24;
										}
										v102 = v101;
										v89 = v85;
										v87 = v88;
										goto lab_0x2ba1c_24;
									}
								}
								// 0x2ba8c
								v90 = DrawAutomapPlr();
								result = DrawAutomapGame(v90);
								// branch -> 0x2ba94
								// 0x2ba94
								g10 = v1;
								return result;
							}
							v58 = (int32_t *)v5;
							*v58 = *v58 - 1;
							v59 = (int32_t *)v5;
							*v59 = *v59 - 1;
							v60 = (int32_t *)v5;
							*v60 = *v60 - 1;
							v61 = (int32_t *)v5;
							*v61 = *v61 - 1;
							v62 = (int32_t *)v5;
							*v62 = *v62 - 1;
							v63 = (int32_t *)v5;
							*v63 = *v63 - 1;
							v64 = (int32_t *)v5;
							*v64 = *v64 - 1;
							v65 = (int32_t *)v5;
							*v65 = *v65 - 1;
							v66 = v57 - 1;
							while (v66 != 0) {
								// 0x2b7cc
								v58 = (int32_t *)v5;
								*v58 = *v58 - 1;
								v59 = (int32_t *)v5;
								*v59 = *v59 - 1;
								v60 = (int32_t *)v5;
								*v60 = *v60 - 1;
								v61 = (int32_t *)v5;
								*v61 = *v61 - 1;
								v62 = (int32_t *)v5;
								*v62 = *v62 - 1;
								v63 = (int32_t *)v5;
								*v63 = *v63 - 1;
								v64 = (int32_t *)v5;
								*v64 = *v64 - 1;
								v65 = (int32_t *)v5;
								*v65 = *v65 - 1;
								v66--;
								// continue -> 0x2b7cc
							}
							// 0x2b830
							v91 = v18 % 8;
							if (v91 != 0) {
								// 0x2b838
								v70 = (int32_t *)v5;
								*v70 = *v70 - 1;
								v71 = v91 - 1;
								// branch -> 0x2b83c
								while (v71 != 0) {
									// 0x2b83c
									v70 = (int32_t *)v5;
									*v70 = *v70 - 1;
									v71--;
									// continue -> 0x2b83c
								}
								// 0x2b84c
								v92 = (int32_t *)v2;
								v74 = g23;
								*v92 = *(int32_t *)v5 + *v92;
								v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
								v75 = v4;
								v105 = *(int32_t *)v75;
								v114 = *(int32_t *)(v75 + 4);
								v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
								v93 = v115 / 0x8000000000000000;
								v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
								v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
								v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
								g31 = v107;
								v108 = *(int32_t *)v3 - v107;
								g33 = v108;
								g32 = *(int32_t *)v2 - 1;
								if (v107 % 2 == 0) {
									// 0x2b8e4
									v121 = v107 / 2 | v107 & -0x80000000;
									v77 = g29;
									v109 = *(int32_t *)v77;
									v88 = v77;
									v97 = 336 - v109 * v121 - *(int32_t *)g28;
									v96 = v109 + 384 - *(int32_t *)g30 * v121;
									// branch -> 0x2b90c
								} else {
									// 0x2b8b8
									v94 = v107 - 1;
									v95 = v107 + 1;
									v76 = g29;
									v88 = v76;
									v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
									v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
									// branch -> 0x2b90c
								}
								// 0x2b90c
								v98 = v97;
								v78 = v96;
								if (v10 % 2 != 0) {
									// 0x2b914
									v98 = v97 - *(int32_t *)v7;
									v78 = v96 - *(int32_t *)g28;
									// branch -> 0x2b924
								}
								// 0x2b924
								v81 = v98;
								v80 = v78;
								if (v16 % 2 != 0) {
									// 0x2b92c
									v81 = v98 - *(int32_t *)v7;
									v80 = *(int32_t *)g28 + v78;
									// branch -> 0x2b93c
								}
								// 0x2b93c
								v79 = g23;
								v117 = 0x51eb851f * (int64_t)(v105 * v104);
								v119 = (int32_t)(v117 / 0x100000000) >> 31;
								v99 = v119 < 0;
								v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
								v118 = 0x51eb851f * (int64_t)(v114 * v104);
								v111 = v80 + (v110 / 2 | v110 & -0x80000000);
								g36 = v111;
								v120 = (int32_t)(v118 / 0x100000000) >> 31;
								v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
								v113 = v81 + (v112 / 2 | v112 & -0x80000000);
								g35 = v113;
								if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
									// 0x2b98c
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v82 = v111;
									}
								}
								// 0x2b9a0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
									// 0x2b9b0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v84 = v82;
									}
								}
								// 0x2b9c4
								g26 = v107 + 1;
								g27 = 0;
								if (v107 >= 0xffffffff) {
									v101 = v107;
									v85 = v113;
									v83 = v84;
									while (true) {
										// 0x2b9d0
										g24 = v83;
										g25 = v85;
										v73 = 0;
										if (v101 > 0) {
											v100 = 0;
											v86 = v108;
											goto lab_0x2b9e0_24;
										}
										v102 = v101;
										v89 = v85;
										v87 = v88;
										goto lab_0x2ba1c_24;
									}
								}
								// 0x2ba8c
								v90 = DrawAutomapPlr();
								result = DrawAutomapGame(v90);
								// branch -> 0x2ba94
								// 0x2ba94
								g10 = v1;
								return result;
							}
							// 0x2b84c
							v92 = (int32_t *)v2;
							v74 = g23;
							*v92 = *(int32_t *)v5 + *v92;
							v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
							v75 = v4;
							v105 = *(int32_t *)v75;
							v114 = *(int32_t *)(v75 + 4);
							v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
							v93 = v115 / 0x8000000000000000;
							v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
							v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
							v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
							g31 = v107;
							v108 = *(int32_t *)v3 - v107;
							g33 = v108;
							g32 = *(int32_t *)v2 - 1;
							if (v107 % 2 == 0) {
								// 0x2b8e4
								v121 = v107 / 2 | v107 & -0x80000000;
								v77 = g29;
								v109 = *(int32_t *)v77;
								v88 = v77;
								v97 = 336 - v109 * v121 - *(int32_t *)g28;
								v96 = v109 + 384 - *(int32_t *)g30 * v121;
								// branch -> 0x2b90c
							} else {
								// 0x2b8b8
								v94 = v107 - 1;
								v95 = v107 + 1;
								v76 = g29;
								v88 = v76;
								v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
								v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
								// branch -> 0x2b90c
							}
							// 0x2b90c
							v98 = v97;
							v78 = v96;
							if (v10 % 2 != 0) {
								// 0x2b914
								v98 = v97 - *(int32_t *)v7;
								v78 = v96 - *(int32_t *)g28;
								// branch -> 0x2b924
							}
							// 0x2b924
							v81 = v98;
							v80 = v78;
							if (v16 % 2 != 0) {
								// 0x2b92c
								v81 = v98 - *(int32_t *)v7;
								v80 = *(int32_t *)g28 + v78;
								// branch -> 0x2b93c
							}
							// 0x2b93c
							v79 = g23;
							v117 = 0x51eb851f * (int64_t)(v105 * v104);
							v119 = (int32_t)(v117 / 0x100000000) >> 31;
							v99 = v119 < 0;
							v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
							v118 = 0x51eb851f * (int64_t)(v114 * v104);
							v111 = v80 + (v110 / 2 | v110 & -0x80000000);
							g36 = v111;
							v120 = (int32_t)(v118 / 0x100000000) >> 31;
							v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
							v113 = v81 + (v112 / 2 | v112 & -0x80000000);
							g35 = v113;
							if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
								// 0x2b98c
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									v82 = v111;
								}
							}
							// 0x2b9a0
							if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
								// 0x2b9b0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									v84 = v82;
								}
							}
							// 0x2b9c4
							g26 = v107 + 1;
							g27 = 0;
							if (v107 >= 0xffffffff) {
								v101 = v107;
								v85 = v113;
								v83 = v84;
								while (true) {
									// 0x2b9d0
									g24 = v83;
									g25 = v85;
									v73 = 0;
									if (v101 > 0) {
										v100 = 0;
										v86 = v108;
										goto lab_0x2b9e0_24;
									}
									v102 = v101;
									v89 = v85;
									v87 = v88;
									goto lab_0x2ba1c_24;
								}
							}
							// 0x2ba8c
							v90 = DrawAutomapPlr();
							result = DrawAutomapGame(v90);
							// branch -> 0x2ba94
							// 0x2ba94
							g10 = v1;
							return result;
						}
						// 0x2b720
						v36 = __asm_rlwinm_(v35, 29, 3, 31);
						if (v36 == 0) {
							// 0x2b720
							// branch -> 0x2b798
							// 0x2b798
							v46 = (int32_t *)v5;
							*v46 = *v46 + 1;
							v47 = v18 - 1;
							// branch -> 0x2b79c
							while (v47 != 0) {
								// 0x2b79c
								v46 = (int32_t *)v5;
								*v46 = *v46 + 1;
								v47--;
								// continue -> 0x2b79c
							}
							// 0x2b7ac
							v68 = v13 + *(int32_t *)v5;
							v56 = v68 - 39;
							v18 = v56;
							if (v68 < 40) {
								// 0x2b84c
								v92 = (int32_t *)v2;
								v74 = g23;
								*v92 = *(int32_t *)v5 + *v92;
								v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
								v75 = v4;
								v105 = *(int32_t *)v75;
								v114 = *(int32_t *)(v75 + 4);
								v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
								v93 = v115 / 0x8000000000000000;
								v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
								v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
								v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
								g31 = v107;
								v108 = *(int32_t *)v3 - v107;
								g33 = v108;
								g32 = *(int32_t *)v2 - 1;
								if (v107 % 2 == 0) {
									// 0x2b8e4
									v121 = v107 / 2 | v107 & -0x80000000;
									v77 = g29;
									v109 = *(int32_t *)v77;
									v88 = v77;
									v97 = 336 - v109 * v121 - *(int32_t *)g28;
									v96 = v109 + 384 - *(int32_t *)g30 * v121;
									// branch -> 0x2b90c
								} else {
									// 0x2b8b8
									v94 = v107 - 1;
									v95 = v107 + 1;
									v76 = g29;
									v88 = v76;
									v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
									v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
									// branch -> 0x2b90c
								}
								// 0x2b90c
								v98 = v97;
								v78 = v96;
								if (v10 % 2 != 0) {
									// 0x2b914
									v98 = v97 - *(int32_t *)v7;
									v78 = v96 - *(int32_t *)g28;
									// branch -> 0x2b924
								}
								// 0x2b924
								v81 = v98;
								v80 = v78;
								if (v16 % 2 != 0) {
									// 0x2b92c
									v81 = v98 - *(int32_t *)v7;
									v80 = *(int32_t *)g28 + v78;
									// branch -> 0x2b93c
								}
								// 0x2b93c
								v79 = g23;
								v117 = 0x51eb851f * (int64_t)(v105 * v104);
								v119 = (int32_t)(v117 / 0x100000000) >> 31;
								v99 = v119 < 0;
								v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
								v118 = 0x51eb851f * (int64_t)(v114 * v104);
								v111 = v80 + (v110 / 2 | v110 & -0x80000000);
								g36 = v111;
								v120 = (int32_t)(v118 / 0x100000000) >> 31;
								v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
								v113 = v81 + (v112 / 2 | v112 & -0x80000000);
								g35 = v113;
								if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
									// 0x2b98c
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
										// 0x2b99c
										v122 = v111 - 160;
										g36 = v122;
										v82 = v122;
										// branch -> 0x2b9a0
									} else {
										v82 = v111;
									}
								} else {
									// 0x2b99c
									v122 = v111 - 160;
									g36 = v122;
									v82 = v122;
									// branch -> 0x2b9a0
								}
								// 0x2b9a0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
									// 0x2b9b0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
										// 0x2b9c0
										v123 = v82 + 160;
										g36 = v123;
										v84 = v123;
										// branch -> 0x2b9c4
									} else {
										v84 = v82;
									}
								} else {
									// 0x2b9c0
									v123 = v82 + 160;
									g36 = v123;
									v84 = v123;
									// branch -> 0x2b9c4
								}
								// 0x2b9c4
								g26 = v107 + 1;
								g27 = 0;
								if (v107 >= 0xffffffff) {
									v101 = v107;
									v85 = v113;
									v83 = v84;
									while (true) {
										// 0x2b9d0
										g24 = v83;
										g25 = v85;
										v73 = 0;
										if (v101 > 0) {
											v100 = 0;
											v86 = v108;
											goto lab_0x2b9e0_24;
										}
										v102 = v101;
										v89 = v85;
										v87 = v88;
										goto lab_0x2ba1c_24;
									}
								}
								// 0x2ba8c
								v90 = DrawAutomapPlr();
								result = DrawAutomapGame(v90);
								// branch -> 0x2ba94
								// 0x2ba94
								g10 = v1;
								return result;
							}
							// 0x2b7c0
							v57 = __asm_rlwinm_(v56, 29, 3, 31);
							if (v57 == 0) {
								// 0x2b7c0
								// branch -> 0x2b838
								// 0x2b838
								v70 = (int32_t *)v5;
								*v70 = *v70 - 1;
								v71 = v18 - 1;
								// branch -> 0x2b83c
								while (v71 != 0) {
									// 0x2b83c
									v70 = (int32_t *)v5;
									*v70 = *v70 - 1;
									v71--;
									// continue -> 0x2b83c
								}
								// 0x2b84c
								v92 = (int32_t *)v2;
								v74 = g23;
								*v92 = *(int32_t *)v5 + *v92;
								v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
								v75 = v4;
								v105 = *(int32_t *)v75;
								v114 = *(int32_t *)(v75 + 4);
								v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
								v93 = v115 / 0x8000000000000000;
								v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
								v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
								v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
								g31 = v107;
								v108 = *(int32_t *)v3 - v107;
								g33 = v108;
								g32 = *(int32_t *)v2 - 1;
								if (v107 % 2 == 0) {
									// 0x2b8e4
									v121 = v107 / 2 | v107 & -0x80000000;
									v77 = g29;
									v109 = *(int32_t *)v77;
									v88 = v77;
									v97 = 336 - v109 * v121 - *(int32_t *)g28;
									v96 = v109 + 384 - *(int32_t *)g30 * v121;
									// branch -> 0x2b90c
								} else {
									// 0x2b8b8
									v94 = v107 - 1;
									v95 = v107 + 1;
									v76 = g29;
									v88 = v76;
									v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
									v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
									// branch -> 0x2b90c
								}
								// 0x2b90c
								v98 = v97;
								v78 = v96;
								if (v10 % 2 != 0) {
									// 0x2b914
									v98 = v97 - *(int32_t *)v7;
									v78 = v96 - *(int32_t *)g28;
									// branch -> 0x2b924
								}
								// 0x2b924
								v81 = v98;
								v80 = v78;
								if (v16 % 2 != 0) {
									// 0x2b92c
									v81 = v98 - *(int32_t *)v7;
									v80 = *(int32_t *)g28 + v78;
									// branch -> 0x2b93c
								}
								// 0x2b93c
								v79 = g23;
								v117 = 0x51eb851f * (int64_t)(v105 * v104);
								v119 = (int32_t)(v117 / 0x100000000) >> 31;
								v99 = v119 < 0;
								v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
								v118 = 0x51eb851f * (int64_t)(v114 * v104);
								v111 = v80 + (v110 / 2 | v110 & -0x80000000);
								g36 = v111;
								v120 = (int32_t)(v118 / 0x100000000) >> 31;
								v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
								v113 = v81 + (v112 / 2 | v112 & -0x80000000);
								g35 = v113;
								if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
									// 0x2b98c
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
										// 0x2b99c
										v122 = v111 - 160;
										g36 = v122;
										v82 = v122;
										// branch -> 0x2b9a0
									} else {
										v82 = v111;
									}
								} else {
									// 0x2b99c
									v122 = v111 - 160;
									g36 = v122;
									v82 = v122;
									// branch -> 0x2b9a0
								}
								// 0x2b9a0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
									// 0x2b9b0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
										// 0x2b9c0
										v123 = v82 + 160;
										g36 = v123;
										v84 = v123;
										// branch -> 0x2b9c4
									} else {
										v84 = v82;
									}
								} else {
									// 0x2b9c0
									v123 = v82 + 160;
									g36 = v123;
									v84 = v123;
									// branch -> 0x2b9c4
								}
								// 0x2b9c4
								g26 = v107 + 1;
								g27 = 0;
								if (v107 >= 0xffffffff) {
									int32_t v124 = v88;  // 0x2ba1c55
									int32_t v125 = v108; // 0x2b9e052
									v101 = v107;
									v85 = v113;
									v83 = v84;
									while (true) {
									lab_0x2b9d0:
										// 0x2b9d0
										g24 = v83;
										g25 = v85;
										v73 = 0;
										v102 = v101;
										v89 = v85;
										v87 = v124;
										int32_t v126; // 0x2ba74
										int32_t v127; // 0x2ba142050
										int32_t v128; // 0x2ba28
										int32_t v129; // 0x2ba38
										int32_t v130; // 0x2ba3c
										if (v101 > 0) {
											v100 = 0;
											v86 = v125;
										lab_0x2b9e0_24:
											while (true) {
												int32_t v131 = GetAutomapType(v86 + v100, g32 - v100, 1); // 0x2b9ec
												if (v131 % 0x10000 != 0) {
													// 0x2b9fc
													DrawAutomapType(g24, g25, v131);
													// branch -> 0x2ba08
												}
												int32_t v132 = v73 + 1; // 0x2ba0c
												v73 = v132;
												g24 += *(int32_t *)g30;
												int32_t v133 = g31; // 0x2ba14
												if (v132 >= v133) {
													// 0x2ba14
													v102 = v133;
													v89 = g35;
													v87 = g29;
													// branch -> 0x2ba1c
													// 0x2ba1c
													g22 = 0;
													v128 = g32 + 1;
													g32 = v128;
													g25 = g36 - *(int32_t *)v87;
													g24 = *(int32_t *)g28 + v89;
													v126 = v87;
													v127 = v102;
													int32_t v134; // 0x2ba78
													int32_t v135; // 0x2ba7c
													int32_t v136; // 0x2ba80
													if (v102 >= 0) {
														v130 = v128;
														v129 = 0;
													lab_0x2ba38:
														while (true) {
															int32_t v137 = GetAutomapType(g33 + v129, v130 - v129, 1); // 0x2ba44
															if (v137 % 0x10000 != 0) {
																// 0x2ba54
																DrawAutomapType(g25, g24, v137);
																// branch -> 0x2ba60
															}
															int32_t v138 = g22 + 1; // 0x2ba64
															g22 = v138;
															g25 += *(int32_t *)g30;
															int32_t v139 = g31; // 0x2ba6c
															if (v138 > v139) {
																// 0x2ba6c
																v126 = g29;
																v127 = v139;
																// branch -> 0x2ba74
																// 0x2ba74
																v134 = g33 + 1;
																g33 = v134;
																v135 = g27 + 1;
																g27 = v135;
																v136 = *(int32_t *)v126 + g35;
																g35 = v136;
																if (v135 <= g26) {
																lab_0x2ba74:
																	// 0x2ba74
																	v124 = v126;
																	v125 = v134;
																	v101 = v127;
																	v85 = v136;
																	v83 = g36;
																	// branch -> 0x2b9d0
																	goto lab_0x2b9d0;
																}
																// 0x2ba8c
																v90 = DrawAutomapPlr();
																result = DrawAutomapGame(v90);
																// branch -> 0x2ba94
																// 0x2ba94
																g10 = v1;
																return result;
															}
															// 0x2ba60
															v130 = g32;
															v129 = v138;
															// branch -> 0x2ba38
														}
													}
												lab_0x2ba74_2:
													// 0x2ba74
													v134 = g33 + 1;
													g33 = v134;
													v135 = g27 + 1;
													g27 = v135;
													v136 = *(int32_t *)v126 + v89;
													g35 = v136;
													if (v135 <= g26) {
														goto lab_0x2ba74;
													}
													// 0x2ba8c
													v90 = DrawAutomapPlr();
													result = DrawAutomapGame(v90);
													// branch -> 0x2ba94
													// 0x2ba94
													g10 = v1;
													return result;
												}
												// 0x2ba08
												v100 = v132;
												v86 = g33;
												// branch -> 0x2b9e0
											}
										}
									lab_0x2ba1c_24:
										// 0x2ba1c
										g22 = 0;
										v128 = g32 + 1;
										g32 = v128;
										g25 = v83 - *(int32_t *)v87;
										g24 = *(int32_t *)g28 + v89;
										if (v102 < 0) {
											v126 = v87;
											v127 = v102;
											goto lab_0x2ba74_2;
										}
										v130 = v128;
										v129 = 0;
										goto lab_0x2ba38;
									}
								}
								// 0x2ba8c
								v90 = DrawAutomapPlr();
								result = DrawAutomapGame(v90);
								// branch -> 0x2ba94
								// 0x2ba94
								g10 = v1;
								return result;
							}
							v58 = (int32_t *)v5;
							*v58 = *v58 - 1;
							v59 = (int32_t *)v5;
							*v59 = *v59 - 1;
							v60 = (int32_t *)v5;
							*v60 = *v60 - 1;
							v61 = (int32_t *)v5;
							*v61 = *v61 - 1;
							v62 = (int32_t *)v5;
							*v62 = *v62 - 1;
							v63 = (int32_t *)v5;
							*v63 = *v63 - 1;
							v64 = (int32_t *)v5;
							*v64 = *v64 - 1;
							v65 = (int32_t *)v5;
							*v65 = *v65 - 1;
							v66 = v57 - 1;
							while (v66 != 0) {
								// 0x2b7cc
								v58 = (int32_t *)v5;
								*v58 = *v58 - 1;
								v59 = (int32_t *)v5;
								*v59 = *v59 - 1;
								v60 = (int32_t *)v5;
								*v60 = *v60 - 1;
								v61 = (int32_t *)v5;
								*v61 = *v61 - 1;
								v62 = (int32_t *)v5;
								*v62 = *v62 - 1;
								v63 = (int32_t *)v5;
								*v63 = *v63 - 1;
								v64 = (int32_t *)v5;
								*v64 = *v64 - 1;
								v65 = (int32_t *)v5;
								*v65 = *v65 - 1;
								v66--;
								// continue -> 0x2b7cc
							}
							// 0x2b830
							v91 = v18 % 8;
							if (v91 != 0) {
								// 0x2b838
								v70 = (int32_t *)v5;
								*v70 = *v70 - 1;
								v71 = v91 - 1;
								// branch -> 0x2b83c
								while (v71 != 0) {
									// 0x2b83c
									v70 = (int32_t *)v5;
									*v70 = *v70 - 1;
									v71--;
									// continue -> 0x2b83c
								}
								// 0x2b84c
								v92 = (int32_t *)v2;
								v74 = g23;
								*v92 = *(int32_t *)v5 + *v92;
								v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
								v75 = v4;
								v105 = *(int32_t *)v75;
								v114 = *(int32_t *)(v75 + 4);
								v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
								v93 = v115 / 0x8000000000000000;
								v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
								v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
								v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
								g31 = v107;
								v108 = *(int32_t *)v3 - v107;
								g33 = v108;
								g32 = *(int32_t *)v2 - 1;
								if (v107 % 2 == 0) {
									// 0x2b8e4
									v121 = v107 / 2 | v107 & -0x80000000;
									v77 = g29;
									v109 = *(int32_t *)v77;
									v88 = v77;
									v97 = 336 - v109 * v121 - *(int32_t *)g28;
									v96 = v109 + 384 - *(int32_t *)g30 * v121;
									// branch -> 0x2b90c
								} else {
									// 0x2b8b8
									v94 = v107 - 1;
									v95 = v107 + 1;
									v76 = g29;
									v88 = v76;
									v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
									v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
									// branch -> 0x2b90c
								}
								// 0x2b90c
								v98 = v97;
								v78 = v96;
								if (v10 % 2 != 0) {
									// 0x2b914
									v98 = v97 - *(int32_t *)v7;
									v78 = v96 - *(int32_t *)g28;
									// branch -> 0x2b924
								}
								// 0x2b924
								v81 = v98;
								v80 = v78;
								if (v16 % 2 != 0) {
									// 0x2b92c
									v81 = v98 - *(int32_t *)v7;
									v80 = *(int32_t *)g28 + v78;
									// branch -> 0x2b93c
								}
								// 0x2b93c
								v79 = g23;
								v117 = 0x51eb851f * (int64_t)(v105 * v104);
								v119 = (int32_t)(v117 / 0x100000000) >> 31;
								v99 = v119 < 0;
								v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
								v118 = 0x51eb851f * (int64_t)(v114 * v104);
								v111 = v80 + (v110 / 2 | v110 & -0x80000000);
								g36 = v111;
								v120 = (int32_t)(v118 / 0x100000000) >> 31;
								v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
								v113 = v81 + (v112 / 2 | v112 & -0x80000000);
								g35 = v113;
								if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
									// 0x2b98c
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
										// 0x2b99c
										v122 = v111 - 160;
										g36 = v122;
										v82 = v122;
										// branch -> 0x2b9a0
									} else {
										v82 = v111;
									}
								} else {
									// 0x2b99c
									v122 = v111 - 160;
									g36 = v122;
									v82 = v122;
									// branch -> 0x2b9a0
								}
								// 0x2b9a0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
									// 0x2b9b0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
										// 0x2b9c0
										v123 = v82 + 160;
										g36 = v123;
										v84 = v123;
										// branch -> 0x2b9c4
									} else {
										v84 = v82;
									}
								} else {
									// 0x2b9c0
									v123 = v82 + 160;
									g36 = v123;
									v84 = v123;
									// branch -> 0x2b9c4
								}
								// 0x2b9c4
								g26 = v107 + 1;
								g27 = 0;
								if (v107 >= 0xffffffff) {
									v101 = v107;
									v85 = v113;
									v83 = v84;
									while (true) {
										// 0x2b9d0
										g24 = v83;
										g25 = v85;
										v73 = 0;
										if (v101 > 0) {
											v100 = 0;
											v86 = v108;
											goto lab_0x2b9e0_24;
										}
										v102 = v101;
										v89 = v85;
										v87 = v88;
										goto lab_0x2ba1c_24;
									}
								}
								// 0x2ba8c
								v90 = DrawAutomapPlr();
								result = DrawAutomapGame(v90);
								// branch -> 0x2ba94
								// 0x2ba94
								g10 = v1;
								return result;
							}
							// 0x2b84c
							v92 = (int32_t *)v2;
							v74 = g23;
							*v92 = *(int32_t *)v5 + *v92;
							v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
							v75 = v4;
							v105 = *(int32_t *)v75;
							v114 = *(int32_t *)(v75 + 4);
							v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
							v93 = v115 / 0x8000000000000000;
							v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
							v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
							v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
							g31 = v107;
							v108 = *(int32_t *)v3 - v107;
							g33 = v108;
							g32 = *(int32_t *)v2 - 1;
							if (v107 % 2 == 0) {
								// 0x2b8e4
								v121 = v107 / 2 | v107 & -0x80000000;
								v77 = g29;
								v109 = *(int32_t *)v77;
								v88 = v77;
								v97 = 336 - v109 * v121 - *(int32_t *)g28;
								v96 = v109 + 384 - *(int32_t *)g30 * v121;
								// branch -> 0x2b90c
							} else {
								// 0x2b8b8
								v94 = v107 - 1;
								v95 = v107 + 1;
								v76 = g29;
								v88 = v76;
								v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
								v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
								// branch -> 0x2b90c
							}
							// 0x2b90c
							v98 = v97;
							v78 = v96;
							if (v10 % 2 != 0) {
								// 0x2b914
								v98 = v97 - *(int32_t *)v7;
								v78 = v96 - *(int32_t *)g28;
								// branch -> 0x2b924
							}
							// 0x2b924
							v81 = v98;
							v80 = v78;
							if (v16 % 2 != 0) {
								// 0x2b92c
								v81 = v98 - *(int32_t *)v7;
								v80 = *(int32_t *)g28 + v78;
								// branch -> 0x2b93c
							}
							// 0x2b93c
							v79 = g23;
							v117 = 0x51eb851f * (int64_t)(v105 * v104);
							v119 = (int32_t)(v117 / 0x100000000) >> 31;
							v99 = v119 < 0;
							v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
							v118 = 0x51eb851f * (int64_t)(v114 * v104);
							v111 = v80 + (v110 / 2 | v110 & -0x80000000);
							g36 = v111;
							v120 = (int32_t)(v118 / 0x100000000) >> 31;
							v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
							v113 = v81 + (v112 / 2 | v112 & -0x80000000);
							g35 = v113;
							if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
								// 0x2b98c
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
									// 0x2b99c
									v122 = v111 - 160;
									g36 = v122;
									v82 = v122;
									// branch -> 0x2b9a0
								} else {
									v82 = v111;
								}
							} else {
								// 0x2b99c
								v122 = v111 - 160;
								g36 = v122;
								v82 = v122;
								// branch -> 0x2b9a0
							}
							// 0x2b9a0
							if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
								// 0x2b9b0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
									// 0x2b9c0
									v123 = v82 + 160;
									g36 = v123;
									v84 = v123;
									// branch -> 0x2b9c4
								} else {
									v84 = v82;
								}
							} else {
								// 0x2b9c0
								v123 = v82 + 160;
								g36 = v123;
								v84 = v123;
								// branch -> 0x2b9c4
							}
							// 0x2b9c4
							g26 = v107 + 1;
							g27 = 0;
							if (v107 >= 0xffffffff) {
								v101 = v107;
								v85 = v113;
								v83 = v84;
								while (true) {
									// 0x2b9d0
									g24 = v83;
									g25 = v85;
									v73 = 0;
									if (v101 > 0) {
										v100 = 0;
										v86 = v108;
										goto lab_0x2b9e0_24;
									}
									v102 = v101;
									v89 = v85;
									v87 = v88;
									goto lab_0x2ba1c_24;
								}
							}
							// 0x2ba8c
							v90 = DrawAutomapPlr();
							result = DrawAutomapGame(v90);
							// branch -> 0x2ba94
							// 0x2ba94
							g10 = v1;
							return result;
						}
						v37 = (int32_t *)v5;
						*v37 = *v37 + 1;
						v38 = (int32_t *)v5;
						*v38 = *v38 + 1;
						v39 = (int32_t *)v5;
						*v39 = *v39 + 1;
						v40 = (int32_t *)v5;
						*v40 = *v40 + 1;
						v41 = (int32_t *)v5;
						*v41 = *v41 + 1;
						v42 = (int32_t *)v5;
						*v42 = *v42 + 1;
						v43 = (int32_t *)v5;
						*v43 = *v43 + 1;
						v44 = (int32_t *)v5;
						*v44 = *v44 + 1;
						v45 = v36 - 1;
						while (v45 != 0) {
							// 0x2b72c
							v37 = (int32_t *)v5;
							*v37 = *v37 + 1;
							v38 = (int32_t *)v5;
							*v38 = *v38 + 1;
							v39 = (int32_t *)v5;
							*v39 = *v39 + 1;
							v40 = (int32_t *)v5;
							*v40 = *v40 + 1;
							v41 = (int32_t *)v5;
							*v41 = *v41 + 1;
							v42 = (int32_t *)v5;
							*v42 = *v42 + 1;
							v43 = (int32_t *)v5;
							*v43 = *v43 + 1;
							v44 = (int32_t *)v5;
							*v44 = *v44 + 1;
							v45--;
							// continue -> 0x2b72c
						}
						// 0x2b790
						v55 = v18 % 8;
						if (v55 != 0) {
							// 0x2b798
							v46 = (int32_t *)v5;
							*v46 = *v46 + 1;
							v47 = v55 - 1;
							// branch -> 0x2b79c
							while (v47 != 0) {
								// 0x2b79c
								v46 = (int32_t *)v5;
								*v46 = *v46 + 1;
								v47--;
								// continue -> 0x2b79c
							}
							// 0x2b7ac
							v68 = v13 + *(int32_t *)v5;
							v56 = v68 - 39;
							v18 = v56;
							if (v68 < 40) {
								// 0x2b84c
								v92 = (int32_t *)v2;
								v74 = g23;
								*v92 = *(int32_t *)v5 + *v92;
								v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
								v75 = v4;
								v105 = *(int32_t *)v75;
								v114 = *(int32_t *)(v75 + 4);
								v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
								v93 = v115 / 0x8000000000000000;
								v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
								v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
								v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
								g31 = v107;
								v108 = *(int32_t *)v3 - v107;
								g33 = v108;
								g32 = *(int32_t *)v2 - 1;
								if (v107 % 2 == 0) {
									// 0x2b8e4
									v121 = v107 / 2 | v107 & -0x80000000;
									v77 = g29;
									v109 = *(int32_t *)v77;
									v88 = v77;
									v97 = 336 - v109 * v121 - *(int32_t *)g28;
									v96 = v109 + 384 - *(int32_t *)g30 * v121;
									// branch -> 0x2b90c
								} else {
									// 0x2b8b8
									v94 = v107 - 1;
									v95 = v107 + 1;
									v76 = g29;
									v88 = v76;
									v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
									v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
									// branch -> 0x2b90c
								}
								// 0x2b90c
								v98 = v97;
								v78 = v96;
								if (v10 % 2 != 0) {
									// 0x2b914
									v98 = v97 - *(int32_t *)v7;
									v78 = v96 - *(int32_t *)g28;
									// branch -> 0x2b924
								}
								// 0x2b924
								v81 = v98;
								v80 = v78;
								if (v16 % 2 != 0) {
									// 0x2b92c
									v81 = v98 - *(int32_t *)v7;
									v80 = *(int32_t *)g28 + v78;
									// branch -> 0x2b93c
								}
								// 0x2b93c
								v79 = g23;
								v117 = 0x51eb851f * (int64_t)(v105 * v104);
								v119 = (int32_t)(v117 / 0x100000000) >> 31;
								v99 = v119 < 0;
								v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
								v118 = 0x51eb851f * (int64_t)(v114 * v104);
								v111 = v80 + (v110 / 2 | v110 & -0x80000000);
								g36 = v111;
								v120 = (int32_t)(v118 / 0x100000000) >> 31;
								v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
								v113 = v81 + (v112 / 2 | v112 & -0x80000000);
								g35 = v113;
								if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
									// 0x2b98c
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
										// 0x2b99c
										v122 = v111 - 160;
										g36 = v122;
										v82 = v122;
										// branch -> 0x2b9a0
									} else {
										v82 = v111;
									}
								} else {
									// 0x2b99c
									v122 = v111 - 160;
									g36 = v122;
									v82 = v122;
									// branch -> 0x2b9a0
								}
								// 0x2b9a0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
									// 0x2b9b0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
										// 0x2b9c0
										v123 = v82 + 160;
										g36 = v123;
										v84 = v123;
										// branch -> 0x2b9c4
									} else {
										v84 = v82;
									}
								} else {
									// 0x2b9c0
									v123 = v82 + 160;
									g36 = v123;
									v84 = v123;
									// branch -> 0x2b9c4
								}
								// 0x2b9c4
								g26 = v107 + 1;
								g27 = 0;
								if (v107 >= 0xffffffff) {
									v101 = v107;
									v85 = v113;
									v83 = v84;
									while (true) {
										// 0x2b9d0
										g24 = v83;
										g25 = v85;
										v73 = 0;
										if (v101 > 0) {
											v100 = 0;
											v86 = v108;
											goto lab_0x2b9e0_24;
										}
										v102 = v101;
										v89 = v85;
										v87 = v88;
										goto lab_0x2ba1c_24;
									}
								}
								// 0x2ba8c
								v90 = DrawAutomapPlr();
								result = DrawAutomapGame(v90);
								// branch -> 0x2ba94
								// 0x2ba94
								g10 = v1;
								return result;
							}
							// 0x2b7c0
							v57 = __asm_rlwinm_(v56, 29, 3, 31);
							if (v57 == 0) {
								// 0x2b7c0
								// branch -> 0x2b838
								// 0x2b838
								v70 = (int32_t *)v5;
								*v70 = *v70 - 1;
								v71 = v18 - 1;
								// branch -> 0x2b83c
								while (v71 != 0) {
									// 0x2b83c
									v70 = (int32_t *)v5;
									*v70 = *v70 - 1;
									v71--;
									// continue -> 0x2b83c
								}
								// 0x2b84c
								v92 = (int32_t *)v2;
								v74 = g23;
								*v92 = *(int32_t *)v5 + *v92;
								v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
								v75 = v4;
								v105 = *(int32_t *)v75;
								v114 = *(int32_t *)(v75 + 4);
								v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
								v93 = v115 / 0x8000000000000000;
								v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
								v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
								v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
								g31 = v107;
								v108 = *(int32_t *)v3 - v107;
								g33 = v108;
								g32 = *(int32_t *)v2 - 1;
								if (v107 % 2 == 0) {
									// 0x2b8e4
									v121 = v107 / 2 | v107 & -0x80000000;
									v77 = g29;
									v109 = *(int32_t *)v77;
									v88 = v77;
									v97 = 336 - v109 * v121 - *(int32_t *)g28;
									v96 = v109 + 384 - *(int32_t *)g30 * v121;
									// branch -> 0x2b90c
								} else {
									// 0x2b8b8
									v94 = v107 - 1;
									v95 = v107 + 1;
									v76 = g29;
									v88 = v76;
									v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
									v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
									// branch -> 0x2b90c
								}
								// 0x2b90c
								v98 = v97;
								v78 = v96;
								if (v10 % 2 != 0) {
									// 0x2b914
									v98 = v97 - *(int32_t *)v7;
									v78 = v96 - *(int32_t *)g28;
									// branch -> 0x2b924
								}
								// 0x2b924
								v81 = v98;
								v80 = v78;
								if (v16 % 2 != 0) {
									// 0x2b92c
									v81 = v98 - *(int32_t *)v7;
									v80 = *(int32_t *)g28 + v78;
									// branch -> 0x2b93c
								}
								// 0x2b93c
								v79 = g23;
								v117 = 0x51eb851f * (int64_t)(v105 * v104);
								v119 = (int32_t)(v117 / 0x100000000) >> 31;
								v99 = v119 < 0;
								v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
								v118 = 0x51eb851f * (int64_t)(v114 * v104);
								v111 = v80 + (v110 / 2 | v110 & -0x80000000);
								g36 = v111;
								v120 = (int32_t)(v118 / 0x100000000) >> 31;
								v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
								v113 = v81 + (v112 / 2 | v112 & -0x80000000);
								g35 = v113;
								if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
									// 0x2b98c
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
										// 0x2b99c
										v122 = v111 - 160;
										g36 = v122;
										v82 = v122;
										// branch -> 0x2b9a0
									} else {
										v82 = v111;
									}
								} else {
									// 0x2b99c
									v122 = v111 - 160;
									g36 = v122;
									v82 = v122;
									// branch -> 0x2b9a0
								}
								// 0x2b9a0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
									// 0x2b9b0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
										// 0x2b9c0
										v123 = v82 + 160;
										g36 = v123;
										v84 = v123;
										// branch -> 0x2b9c4
									} else {
										v84 = v82;
									}
								} else {
									// 0x2b9c0
									v123 = v82 + 160;
									g36 = v123;
									v84 = v123;
									// branch -> 0x2b9c4
								}
								// 0x2b9c4
								g26 = v107 + 1;
								g27 = 0;
								if (v107 >= 0xffffffff) {
									v101 = v107;
									v85 = v113;
									v83 = v84;
									while (true) {
										// 0x2b9d0
										g24 = v83;
										g25 = v85;
										v73 = 0;
										if (v101 > 0) {
											v100 = 0;
											v86 = v108;
											goto lab_0x2b9e0_24;
										}
										v102 = v101;
										v89 = v85;
										v87 = v88;
										goto lab_0x2ba1c_24;
									}
								}
								// 0x2ba8c
								v90 = DrawAutomapPlr();
								result = DrawAutomapGame(v90);
								// branch -> 0x2ba94
								// 0x2ba94
								g10 = v1;
								return result;
							}
							v58 = (int32_t *)v5;
							*v58 = *v58 - 1;
							v59 = (int32_t *)v5;
							*v59 = *v59 - 1;
							v60 = (int32_t *)v5;
							*v60 = *v60 - 1;
							v61 = (int32_t *)v5;
							*v61 = *v61 - 1;
							v62 = (int32_t *)v5;
							*v62 = *v62 - 1;
							v63 = (int32_t *)v5;
							*v63 = *v63 - 1;
							v64 = (int32_t *)v5;
							*v64 = *v64 - 1;
							v65 = (int32_t *)v5;
							*v65 = *v65 - 1;
							v66 = v57 - 1;
							while (v66 != 0) {
								// 0x2b7cc
								v58 = (int32_t *)v5;
								*v58 = *v58 - 1;
								v59 = (int32_t *)v5;
								*v59 = *v59 - 1;
								v60 = (int32_t *)v5;
								*v60 = *v60 - 1;
								v61 = (int32_t *)v5;
								*v61 = *v61 - 1;
								v62 = (int32_t *)v5;
								*v62 = *v62 - 1;
								v63 = (int32_t *)v5;
								*v63 = *v63 - 1;
								v64 = (int32_t *)v5;
								*v64 = *v64 - 1;
								v65 = (int32_t *)v5;
								*v65 = *v65 - 1;
								v66--;
								// continue -> 0x2b7cc
							}
							// 0x2b830
							v91 = v18 % 8;
							if (v91 != 0) {
								// 0x2b838
								v70 = (int32_t *)v5;
								*v70 = *v70 - 1;
								v71 = v91 - 1;
								// branch -> 0x2b83c
								while (v71 != 0) {
									// 0x2b83c
									v70 = (int32_t *)v5;
									*v70 = *v70 - 1;
									v71--;
									// continue -> 0x2b83c
								}
								// 0x2b84c
								v92 = (int32_t *)v2;
								v74 = g23;
								*v92 = *(int32_t *)v5 + *v92;
								v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
								v75 = v4;
								v105 = *(int32_t *)v75;
								v114 = *(int32_t *)(v75 + 4);
								v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
								v93 = v115 / 0x8000000000000000;
								v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
								v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
								v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
								g31 = v107;
								v108 = *(int32_t *)v3 - v107;
								g33 = v108;
								g32 = *(int32_t *)v2 - 1;
								if (v107 % 2 == 0) {
									// 0x2b8e4
									v121 = v107 / 2 | v107 & -0x80000000;
									v77 = g29;
									v109 = *(int32_t *)v77;
									v88 = v77;
									v97 = 336 - v109 * v121 - *(int32_t *)g28;
									v96 = v109 + 384 - *(int32_t *)g30 * v121;
									// branch -> 0x2b90c
								} else {
									// 0x2b8b8
									v94 = v107 - 1;
									v95 = v107 + 1;
									v76 = g29;
									v88 = v76;
									v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
									v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
									// branch -> 0x2b90c
								}
								// 0x2b90c
								v98 = v97;
								v78 = v96;
								if (v10 % 2 != 0) {
									// 0x2b914
									v98 = v97 - *(int32_t *)v7;
									v78 = v96 - *(int32_t *)g28;
									// branch -> 0x2b924
								}
								// 0x2b924
								v81 = v98;
								v80 = v78;
								if (v16 % 2 != 0) {
									// 0x2b92c
									v81 = v98 - *(int32_t *)v7;
									v80 = *(int32_t *)g28 + v78;
									// branch -> 0x2b93c
								}
								// 0x2b93c
								v79 = g23;
								v117 = 0x51eb851f * (int64_t)(v105 * v104);
								v119 = (int32_t)(v117 / 0x100000000) >> 31;
								v99 = v119 < 0;
								v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
								v118 = 0x51eb851f * (int64_t)(v114 * v104);
								v111 = v80 + (v110 / 2 | v110 & -0x80000000);
								g36 = v111;
								v120 = (int32_t)(v118 / 0x100000000) >> 31;
								v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
								v113 = v81 + (v112 / 2 | v112 & -0x80000000);
								g35 = v113;
								if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
									// 0x2b98c
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
										// 0x2b99c
										v122 = v111 - 160;
										g36 = v122;
										v82 = v122;
										// branch -> 0x2b9a0
									} else {
										v82 = v111;
									}
								} else {
									// 0x2b99c
									v122 = v111 - 160;
									g36 = v122;
									v82 = v122;
									// branch -> 0x2b9a0
								}
								// 0x2b9a0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
									// 0x2b9b0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
										// 0x2b9c0
										v123 = v82 + 160;
										g36 = v123;
										v84 = v123;
										// branch -> 0x2b9c4
									} else {
										v84 = v82;
									}
								} else {
									// 0x2b9c0
									v123 = v82 + 160;
									g36 = v123;
									v84 = v123;
									// branch -> 0x2b9c4
								}
								// 0x2b9c4
								g26 = v107 + 1;
								g27 = 0;
								if (v107 >= 0xffffffff) {
									v101 = v107;
									v85 = v113;
									v83 = v84;
									while (true) {
										// 0x2b9d0
										g24 = v83;
										g25 = v85;
										v73 = 0;
										if (v101 > 0) {
											v100 = 0;
											v86 = v108;
											goto lab_0x2b9e0_24;
										}
										v102 = v101;
										v89 = v85;
										v87 = v88;
										goto lab_0x2ba1c_24;
									}
								}
								// 0x2ba8c
								v90 = DrawAutomapPlr();
								result = DrawAutomapGame(v90);
								// branch -> 0x2ba94
								// 0x2ba94
								g10 = v1;
								return result;
							}
							// 0x2b84c
							v92 = (int32_t *)v2;
							v74 = g23;
							*v92 = *(int32_t *)v5 + *v92;
							v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
							v75 = v4;
							v105 = *(int32_t *)v75;
							v114 = *(int32_t *)(v75 + 4);
							v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
							v93 = v115 / 0x8000000000000000;
							v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
							v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
							v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
							g31 = v107;
							v108 = *(int32_t *)v3 - v107;
							g33 = v108;
							g32 = *(int32_t *)v2 - 1;
							if (v107 % 2 == 0) {
								// 0x2b8e4
								v121 = v107 / 2 | v107 & -0x80000000;
								v77 = g29;
								v109 = *(int32_t *)v77;
								v88 = v77;
								v97 = 336 - v109 * v121 - *(int32_t *)g28;
								v96 = v109 + 384 - *(int32_t *)g30 * v121;
								// branch -> 0x2b90c
							} else {
								// 0x2b8b8
								v94 = v107 - 1;
								v95 = v107 + 1;
								v76 = g29;
								v88 = v76;
								v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
								v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
								// branch -> 0x2b90c
							}
							// 0x2b90c
							v98 = v97;
							v78 = v96;
							if (v10 % 2 != 0) {
								// 0x2b914
								v98 = v97 - *(int32_t *)v7;
								v78 = v96 - *(int32_t *)g28;
								// branch -> 0x2b924
							}
							// 0x2b924
							v81 = v98;
							v80 = v78;
							if (v16 % 2 != 0) {
								// 0x2b92c
								v81 = v98 - *(int32_t *)v7;
								v80 = *(int32_t *)g28 + v78;
								// branch -> 0x2b93c
							}
							// 0x2b93c
							v79 = g23;
							v117 = 0x51eb851f * (int64_t)(v105 * v104);
							v119 = (int32_t)(v117 / 0x100000000) >> 31;
							v99 = v119 < 0;
							v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
							v118 = 0x51eb851f * (int64_t)(v114 * v104);
							v111 = v80 + (v110 / 2 | v110 & -0x80000000);
							g36 = v111;
							v120 = (int32_t)(v118 / 0x100000000) >> 31;
							v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
							v113 = v81 + (v112 / 2 | v112 & -0x80000000);
							g35 = v113;
							if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
								// 0x2b98c
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
									// 0x2b99c
									v122 = v111 - 160;
									g36 = v122;
									v82 = v122;
									// branch -> 0x2b9a0
								} else {
									v82 = v111;
								}
							} else {
								// 0x2b99c
								v122 = v111 - 160;
								g36 = v122;
								v82 = v122;
								// branch -> 0x2b9a0
							}
							// 0x2b9a0
							if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
								// 0x2b9b0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
									// 0x2b9c0
									v123 = v82 + 160;
									g36 = v123;
									v84 = v123;
									// branch -> 0x2b9c4
								} else {
									v84 = v82;
								}
							} else {
								// 0x2b9c0
								v123 = v82 + 160;
								g36 = v123;
								v84 = v123;
								// branch -> 0x2b9c4
							}
							// 0x2b9c4
							g26 = v107 + 1;
							g27 = 0;
							if (v107 >= 0xffffffff) {
								v101 = v107;
								v85 = v113;
								v83 = v84;
								while (true) {
									// 0x2b9d0
									g24 = v83;
									g25 = v85;
									v73 = 0;
									if (v101 > 0) {
										v100 = 0;
										v86 = v108;
										goto lab_0x2b9e0_24;
									}
									v102 = v101;
									v89 = v85;
									v87 = v88;
									goto lab_0x2ba1c_24;
								}
							}
							// 0x2ba8c
							v90 = DrawAutomapPlr();
							result = DrawAutomapGame(v90);
							// branch -> 0x2ba94
							// 0x2ba94
							g10 = v1;
							return result;
						}
						// 0x2b7ac
						v68 = v13 + *(int32_t *)v5;
						v56 = v68 - 39;
						v18 = v56;
						if (v68 < 40) {
							// 0x2b84c
							v92 = (int32_t *)v2;
							v74 = g23;
							*v92 = *(int32_t *)v5 + *v92;
							v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
							v75 = v4;
							v105 = *(int32_t *)v75;
							v114 = *(int32_t *)(v75 + 4);
							v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
							v93 = v115 / 0x8000000000000000;
							v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
							v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
							v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
							g31 = v107;
							v108 = *(int32_t *)v3 - v107;
							g33 = v108;
							g32 = *(int32_t *)v2 - 1;
							if (v107 % 2 == 0) {
								// 0x2b8e4
								v121 = v107 / 2 | v107 & -0x80000000;
								v77 = g29;
								v109 = *(int32_t *)v77;
								v88 = v77;
								v97 = 336 - v109 * v121 - *(int32_t *)g28;
								v96 = v109 + 384 - *(int32_t *)g30 * v121;
								// branch -> 0x2b90c
							} else {
								// 0x2b8b8
								v94 = v107 - 1;
								v95 = v107 + 1;
								v76 = g29;
								v88 = v76;
								v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
								v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
								// branch -> 0x2b90c
							}
							// 0x2b90c
							v98 = v97;
							v78 = v96;
							if (v10 % 2 != 0) {
								// 0x2b914
								v98 = v97 - *(int32_t *)v7;
								v78 = v96 - *(int32_t *)g28;
								// branch -> 0x2b924
							}
							// 0x2b924
							v81 = v98;
							v80 = v78;
							if (v16 % 2 != 0) {
								// 0x2b92c
								v81 = v98 - *(int32_t *)v7;
								v80 = *(int32_t *)g28 + v78;
								// branch -> 0x2b93c
							}
							// 0x2b93c
							v79 = g23;
							v117 = 0x51eb851f * (int64_t)(v105 * v104);
							v119 = (int32_t)(v117 / 0x100000000) >> 31;
							v99 = v119 < 0;
							v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
							v118 = 0x51eb851f * (int64_t)(v114 * v104);
							v111 = v80 + (v110 / 2 | v110 & -0x80000000);
							g36 = v111;
							v120 = (int32_t)(v118 / 0x100000000) >> 31;
							v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
							v113 = v81 + (v112 / 2 | v112 & -0x80000000);
							g35 = v113;
							if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
								// 0x2b98c
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
									// 0x2b99c
									v122 = v111 - 160;
									g36 = v122;
									v82 = v122;
									// branch -> 0x2b9a0
								} else {
									v82 = v111;
								}
							} else {
								// 0x2b99c
								v122 = v111 - 160;
								g36 = v122;
								v82 = v122;
								// branch -> 0x2b9a0
							}
							// 0x2b9a0
							if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
								// 0x2b9b0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
									// 0x2b9c0
									v123 = v82 + 160;
									g36 = v123;
									v84 = v123;
									// branch -> 0x2b9c4
								} else {
									v84 = v82;
								}
							} else {
								// 0x2b9c0
								v123 = v82 + 160;
								g36 = v123;
								v84 = v123;
								// branch -> 0x2b9c4
							}
							// 0x2b9c4
							g26 = v107 + 1;
							g27 = 0;
							if (v107 >= 0xffffffff) {
								v101 = v107;
								v85 = v113;
								v83 = v84;
								while (true) {
									// 0x2b9d0
									g24 = v83;
									g25 = v85;
									v73 = 0;
									if (v101 > 0) {
										v100 = 0;
										v86 = v108;
										goto lab_0x2b9e0_24;
									}
									v102 = v101;
									v89 = v85;
									v87 = v88;
									goto lab_0x2ba1c_24;
								}
							}
							// 0x2ba8c
							v90 = DrawAutomapPlr();
							result = DrawAutomapGame(v90);
							// branch -> 0x2ba94
							// 0x2ba94
							g10 = v1;
							return result;
						}
						// 0x2b7c0
						v57 = __asm_rlwinm_(v56, 29, 3, 31);
						if (v57 == 0) {
							// 0x2b7c0
							// branch -> 0x2b838
							// 0x2b838
							v70 = (int32_t *)v5;
							*v70 = *v70 - 1;
							v71 = v18 - 1;
							// branch -> 0x2b83c
							while (v71 != 0) {
								// 0x2b83c
								v70 = (int32_t *)v5;
								*v70 = *v70 - 1;
								v71--;
								// continue -> 0x2b83c
							}
							// 0x2b84c
							v92 = (int32_t *)v2;
							v74 = g23;
							*v92 = *(int32_t *)v5 + *v92;
							v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
							v75 = v4;
							v105 = *(int32_t *)v75;
							v114 = *(int32_t *)(v75 + 4);
							v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
							v93 = v115 / 0x8000000000000000;
							v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
							v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
							v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
							g31 = v107;
							v108 = *(int32_t *)v3 - v107;
							g33 = v108;
							g32 = *(int32_t *)v2 - 1;
							if (v107 % 2 == 0) {
								// 0x2b8e4
								v121 = v107 / 2 | v107 & -0x80000000;
								v77 = g29;
								v109 = *(int32_t *)v77;
								v88 = v77;
								v97 = 336 - v109 * v121 - *(int32_t *)g28;
								v96 = v109 + 384 - *(int32_t *)g30 * v121;
								// branch -> 0x2b90c
							} else {
								// 0x2b8b8
								v94 = v107 - 1;
								v95 = v107 + 1;
								v76 = g29;
								v88 = v76;
								v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
								v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
								// branch -> 0x2b90c
							}
							// 0x2b90c
							v98 = v97;
							v78 = v96;
							if (v10 % 2 != 0) {
								// 0x2b914
								v98 = v97 - *(int32_t *)v7;
								v78 = v96 - *(int32_t *)g28;
								// branch -> 0x2b924
							}
							// 0x2b924
							v81 = v98;
							v80 = v78;
							if (v16 % 2 != 0) {
								// 0x2b92c
								v81 = v98 - *(int32_t *)v7;
								v80 = *(int32_t *)g28 + v78;
								// branch -> 0x2b93c
							}
							// 0x2b93c
							v79 = g23;
							v117 = 0x51eb851f * (int64_t)(v105 * v104);
							v119 = (int32_t)(v117 / 0x100000000) >> 31;
							v99 = v119 < 0;
							v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
							v118 = 0x51eb851f * (int64_t)(v114 * v104);
							v111 = v80 + (v110 / 2 | v110 & -0x80000000);
							g36 = v111;
							v120 = (int32_t)(v118 / 0x100000000) >> 31;
							v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
							v113 = v81 + (v112 / 2 | v112 & -0x80000000);
							g35 = v113;
							if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
								// 0x2b98c
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
									// 0x2b99c
									v122 = v111 - 160;
									g36 = v122;
									v82 = v122;
									// branch -> 0x2b9a0
								} else {
									v82 = v111;
								}
							} else {
								// 0x2b99c
								v122 = v111 - 160;
								g36 = v122;
								v82 = v122;
								// branch -> 0x2b9a0
							}
							// 0x2b9a0
							if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
								// 0x2b9b0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
									// 0x2b9c0
									v123 = v82 + 160;
									g36 = v123;
									v84 = v123;
									// branch -> 0x2b9c4
								} else {
									v84 = v82;
								}
							} else {
								// 0x2b9c0
								v123 = v82 + 160;
								g36 = v123;
								v84 = v123;
								// branch -> 0x2b9c4
							}
							// 0x2b9c4
							g26 = v107 + 1;
							g27 = 0;
							if (v107 >= 0xffffffff) {
								v101 = v107;
								v85 = v113;
								v83 = v84;
								while (true) {
									// 0x2b9d0
									g24 = v83;
									g25 = v85;
									v73 = 0;
									if (v101 > 0) {
										v100 = 0;
										v86 = v108;
										goto lab_0x2b9e0_24;
									}
									v102 = v101;
									v89 = v85;
									v87 = v88;
									goto lab_0x2ba1c_24;
								}
							}
							// 0x2ba8c
							v90 = DrawAutomapPlr();
							result = DrawAutomapGame(v90);
							// branch -> 0x2ba94
							// 0x2ba94
							g10 = v1;
							return result;
						}
						v58 = (int32_t *)v5;
						*v58 = *v58 - 1;
						v59 = (int32_t *)v5;
						*v59 = *v59 - 1;
						v60 = (int32_t *)v5;
						*v60 = *v60 - 1;
						v61 = (int32_t *)v5;
						*v61 = *v61 - 1;
						v62 = (int32_t *)v5;
						*v62 = *v62 - 1;
						v63 = (int32_t *)v5;
						*v63 = *v63 - 1;
						v64 = (int32_t *)v5;
						*v64 = *v64 - 1;
						v65 = (int32_t *)v5;
						*v65 = *v65 - 1;
						v66 = v57 - 1;
						while (v66 != 0) {
							// 0x2b7cc
							v58 = (int32_t *)v5;
							*v58 = *v58 - 1;
							v59 = (int32_t *)v5;
							*v59 = *v59 - 1;
							v60 = (int32_t *)v5;
							*v60 = *v60 - 1;
							v61 = (int32_t *)v5;
							*v61 = *v61 - 1;
							v62 = (int32_t *)v5;
							*v62 = *v62 - 1;
							v63 = (int32_t *)v5;
							*v63 = *v63 - 1;
							v64 = (int32_t *)v5;
							*v64 = *v64 - 1;
							v65 = (int32_t *)v5;
							*v65 = *v65 - 1;
							v66--;
							// continue -> 0x2b7cc
						}
						// 0x2b830
						v91 = v18 % 8;
						if (v91 != 0) {
							// 0x2b838
							v70 = (int32_t *)v5;
							*v70 = *v70 - 1;
							v71 = v91 - 1;
							// branch -> 0x2b83c
							while (v71 != 0) {
								// 0x2b83c
								v70 = (int32_t *)v5;
								*v70 = *v70 - 1;
								v71--;
								// continue -> 0x2b83c
							}
							// 0x2b84c
							v92 = (int32_t *)v2;
							v74 = g23;
							*v92 = *(int32_t *)v5 + *v92;
							v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
							v75 = v4;
							v105 = *(int32_t *)v75;
							v114 = *(int32_t *)(v75 + 4);
							v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
							v93 = v115 / 0x8000000000000000;
							v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
							v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
							v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
							g31 = v107;
							v108 = *(int32_t *)v3 - v107;
							g33 = v108;
							g32 = *(int32_t *)v2 - 1;
							if (v107 % 2 == 0) {
								// 0x2b8e4
								v121 = v107 / 2 | v107 & -0x80000000;
								v77 = g29;
								v109 = *(int32_t *)v77;
								v88 = v77;
								v97 = 336 - v109 * v121 - *(int32_t *)g28;
								v96 = v109 + 384 - *(int32_t *)g30 * v121;
								// branch -> 0x2b90c
							} else {
								// 0x2b8b8
								v94 = v107 - 1;
								v95 = v107 + 1;
								v76 = g29;
								v88 = v76;
								v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
								v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
								// branch -> 0x2b90c
							}
							// 0x2b90c
							v98 = v97;
							v78 = v96;
							if (v10 % 2 != 0) {
								// 0x2b914
								v98 = v97 - *(int32_t *)v7;
								v78 = v96 - *(int32_t *)g28;
								// branch -> 0x2b924
							}
							// 0x2b924
							v81 = v98;
							v80 = v78;
							if (v16 % 2 != 0) {
								// 0x2b92c
								v81 = v98 - *(int32_t *)v7;
								v80 = *(int32_t *)g28 + v78;
								// branch -> 0x2b93c
							}
							// 0x2b93c
							v79 = g23;
							v117 = 0x51eb851f * (int64_t)(v105 * v104);
							v119 = (int32_t)(v117 / 0x100000000) >> 31;
							v99 = v119 < 0;
							v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
							v118 = 0x51eb851f * (int64_t)(v114 * v104);
							v111 = v80 + (v110 / 2 | v110 & -0x80000000);
							g36 = v111;
							v120 = (int32_t)(v118 / 0x100000000) >> 31;
							v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
							v113 = v81 + (v112 / 2 | v112 & -0x80000000);
							g35 = v113;
							if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
								// 0x2b98c
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
									// 0x2b99c
									v122 = v111 - 160;
									g36 = v122;
									v82 = v122;
									// branch -> 0x2b9a0
								} else {
									v82 = v111;
								}
							} else {
								// 0x2b99c
								v122 = v111 - 160;
								g36 = v122;
								v82 = v122;
								// branch -> 0x2b9a0
							}
							// 0x2b9a0
							if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
								// 0x2b9b0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
									// 0x2b9c0
									v123 = v82 + 160;
									g36 = v123;
									v84 = v123;
									// branch -> 0x2b9c4
								} else {
									v84 = v82;
								}
							} else {
								// 0x2b9c0
								v123 = v82 + 160;
								g36 = v123;
								v84 = v123;
								// branch -> 0x2b9c4
							}
							// 0x2b9c4
							g26 = v107 + 1;
							g27 = 0;
							if (v107 >= 0xffffffff) {
								v101 = v107;
								v85 = v113;
								v83 = v84;
								while (true) {
									// 0x2b9d0
									g24 = v83;
									g25 = v85;
									v73 = 0;
									if (v101 > 0) {
										v100 = 0;
										v86 = v108;
										goto lab_0x2b9e0_24;
									}
									v102 = v101;
									v89 = v85;
									v87 = v88;
									goto lab_0x2ba1c_24;
								}
							}
							// 0x2ba8c
							v90 = DrawAutomapPlr();
							result = DrawAutomapGame(v90);
							// branch -> 0x2ba94
							// 0x2ba94
							g10 = v1;
							return result;
						}
						// 0x2b84c
						v92 = (int32_t *)v2;
						v74 = g23;
						*v92 = *(int32_t *)v5 + *v92;
						v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
						v75 = v4;
						v105 = *(int32_t *)v75;
						v114 = *(int32_t *)(v75 + 4);
						v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
						v93 = v115 / 0x8000000000000000;
						v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
						v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
						v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
						g31 = v107;
						v108 = *(int32_t *)v3 - v107;
						g33 = v108;
						g32 = *(int32_t *)v2 - 1;
						if (v107 % 2 == 0) {
							// 0x2b8e4
							v121 = v107 / 2 | v107 & -0x80000000;
							v77 = g29;
							v109 = *(int32_t *)v77;
							v88 = v77;
							v97 = 336 - v109 * v121 - *(int32_t *)g28;
							v96 = v109 + 384 - *(int32_t *)g30 * v121;
							// branch -> 0x2b90c
						} else {
							// 0x2b8b8
							v94 = v107 - 1;
							v95 = v107 + 1;
							v76 = g29;
							v88 = v76;
							v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
							v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
							// branch -> 0x2b90c
						}
						// 0x2b90c
						v98 = v97;
						v78 = v96;
						if (v10 % 2 != 0) {
							// 0x2b914
							v98 = v97 - *(int32_t *)v7;
							v78 = v96 - *(int32_t *)g28;
							// branch -> 0x2b924
						}
						// 0x2b924
						v81 = v98;
						v80 = v78;
						if (v16 % 2 != 0) {
							// 0x2b92c
							v81 = v98 - *(int32_t *)v7;
							v80 = *(int32_t *)g28 + v78;
							// branch -> 0x2b93c
						}
						// 0x2b93c
						v79 = g23;
						v117 = 0x51eb851f * (int64_t)(v105 * v104);
						v119 = (int32_t)(v117 / 0x100000000) >> 31;
						v99 = v119 < 0;
						v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
						v118 = 0x51eb851f * (int64_t)(v114 * v104);
						v111 = v80 + (v110 / 2 | v110 & -0x80000000);
						g36 = v111;
						v120 = (int32_t)(v118 / 0x100000000) >> 31;
						v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
						v113 = v81 + (v112 / 2 | v112 & -0x80000000);
						g35 = v113;
						if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
							// 0x2b98c
							if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
								// 0x2b99c
								v122 = v111 - 160;
								g36 = v122;
								v82 = v122;
								// branch -> 0x2b9a0
							} else {
								v82 = v111;
							}
						} else {
							// 0x2b99c
							v122 = v111 - 160;
							g36 = v122;
							v82 = v122;
							// branch -> 0x2b9a0
						}
						// 0x2b9a0
						if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
							// 0x2b9b0
							if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
								// 0x2b9c0
								v123 = v82 + 160;
								g36 = v123;
								v84 = v123;
								// branch -> 0x2b9c4
							} else {
								v84 = v82;
							}
						} else {
							// 0x2b9c0
							v123 = v82 + 160;
							g36 = v123;
							v84 = v123;
							// branch -> 0x2b9c4
						}
						// 0x2b9c4
						g26 = v107 + 1;
						g27 = 0;
						if (v107 >= 0xffffffff) {
							v101 = v107;
							v85 = v113;
							v83 = v84;
							while (true) {
								// 0x2b9d0
								g24 = v83;
								g25 = v85;
								v73 = 0;
								if (v101 > 0) {
									v100 = 0;
									v86 = v108;
									goto lab_0x2b9e0_24;
								}
								v102 = v101;
								v89 = v85;
								v87 = v88;
								goto lab_0x2ba1c_24;
							}
						}
						// 0x2ba8c
						v90 = DrawAutomapPlr();
						result = DrawAutomapGame(v90);
						// branch -> 0x2ba94
						// 0x2ba94
						g10 = v1;
						return result;
					}
					v21 = (int32_t *)v6;
					*v21 = *v21 - 1;
					v22 = (int32_t *)v6;
					*v22 = *v22 - 1;
					v23 = (int32_t *)v6;
					*v23 = *v23 - 1;
					v24 = (int32_t *)v6;
					*v24 = *v24 - 1;
					v25 = (int32_t *)v6;
					*v25 = *v25 - 1;
					v26 = (int32_t *)v6;
					*v26 = *v26 - 1;
					v27 = (int32_t *)v6;
					*v27 = *v27 - 1;
					v28 = (int32_t *)v6;
					*v28 = *v28 - 1;
					v29 = v20 - 1;
					while (v29 != 0) {
						// 0x2b668
						v21 = (int32_t *)v6;
						*v21 = *v21 - 1;
						v22 = (int32_t *)v6;
						*v22 = *v22 - 1;
						v23 = (int32_t *)v6;
						*v23 = *v23 - 1;
						v24 = (int32_t *)v6;
						*v24 = *v24 - 1;
						v25 = (int32_t *)v6;
						*v25 = *v25 - 1;
						v26 = (int32_t *)v6;
						*v26 = *v26 - 1;
						v27 = (int32_t *)v6;
						*v27 = *v27 - 1;
						v28 = (int32_t *)v6;
						*v28 = *v28 - 1;
						v29--;
						// continue -> 0x2b668
					}
					// 0x2b6cc
					v30 = v16 % 8;
					if (v30 != 0) {
						// 0x2b6d4
						v31 = (int32_t *)v6;
						*v31 = *v31 - 1;
						v32 = v30 - 1;
						// branch -> 0x2b6d8
						while (v32 != 0) {
							// 0x2b6d8
							v31 = (int32_t *)v6;
							*v31 = *v31 - 1;
							v32--;
							// continue -> 0x2b6d8
						}
						// 0x2b6e8
						v33 = (int32_t *)v3;
						*v33 = *(int32_t *)v6 + *v33;
						v103 = *(int32_t *)*(int32_t *)(g23 - 0x77b4);
						v16 = v103;
						v34 = v103 - 16;
						*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
						v67 = *(int32_t *)v2;
						v13 = v67;
						v49 = *(int32_t *)v5 + v67;
						v35 = -v49;
						v18 = v35;
						if (v49 <= 0xffffffff) {
							// 0x2b720
							v36 = __asm_rlwinm_(v35, 29, 3, 31);
							if (v36 == 0) {
								// 0x2b720
								// branch -> 0x2b798
								// 0x2b798
								v46 = (int32_t *)v5;
								*v46 = *v46 + 1;
								v47 = v18 - 1;
								// branch -> 0x2b79c
								while (v47 != 0) {
									// 0x2b79c
									v46 = (int32_t *)v5;
									*v46 = *v46 + 1;
									v47--;
									// continue -> 0x2b79c
								}
								// 0x2b7ac
								v68 = v13 + *(int32_t *)v5;
								v56 = v68 - 39;
								v18 = v56;
								if (v68 < 40) {
									// 0x2b84c
									v92 = (int32_t *)v2;
									v74 = g23;
									*v92 = *(int32_t *)v5 + *v92;
									v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
									v75 = v4;
									v105 = *(int32_t *)v75;
									v114 = *(int32_t *)(v75 + 4);
									v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
									v93 = v115 / 0x8000000000000000;
									v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
									v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
									v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
									g31 = v107;
									v108 = *(int32_t *)v3 - v107;
									g33 = v108;
									g32 = *(int32_t *)v2 - 1;
									if (v107 % 2 == 0) {
										// 0x2b8e4
										v121 = v107 / 2 | v107 & -0x80000000;
										v77 = g29;
										v109 = *(int32_t *)v77;
										v88 = v77;
										v97 = 336 - v109 * v121 - *(int32_t *)g28;
										v96 = v109 + 384 - *(int32_t *)g30 * v121;
										// branch -> 0x2b90c
									} else {
										// 0x2b8b8
										v94 = v107 - 1;
										v95 = v107 + 1;
										v76 = g29;
										v88 = v76;
										v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
										v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
										// branch -> 0x2b90c
									}
									// 0x2b90c
									v98 = v97;
									v78 = v96;
									if (v10 % 2 != 0) {
										// 0x2b914
										v98 = v97 - *(int32_t *)v7;
										v78 = v96 - *(int32_t *)g28;
										// branch -> 0x2b924
									}
									// 0x2b924
									v81 = v98;
									v80 = v78;
									if (v16 % 2 != 0) {
										// 0x2b92c
										v81 = v98 - *(int32_t *)v7;
										v80 = *(int32_t *)g28 + v78;
										// branch -> 0x2b93c
									}
									// 0x2b93c
									v79 = g23;
									v117 = 0x51eb851f * (int64_t)(v105 * v104);
									v119 = (int32_t)(v117 / 0x100000000) >> 31;
									v99 = v119 < 0;
									v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
									v118 = 0x51eb851f * (int64_t)(v114 * v104);
									v111 = v80 + (v110 / 2 | v110 & -0x80000000);
									g36 = v111;
									v120 = (int32_t)(v118 / 0x100000000) >> 31;
									v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
									v113 = v81 + (v112 / 2 | v112 & -0x80000000);
									g35 = v113;
									if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
										// 0x2b98c
										if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v82 = v111;
										}
									}
									// 0x2b9a0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
										// 0x2b9b0
										if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v84 = v82;
										}
									}
									// 0x2b9c4
									g26 = v107 + 1;
									g27 = 0;
									if (v107 >= 0xffffffff) {
										v101 = v107;
										v85 = v113;
										v83 = v84;
										while (true) {
											// 0x2b9d0
											g24 = v83;
											g25 = v85;
											v73 = 0;
											if (v101 > 0) {
												v100 = 0;
												v86 = v108;
												goto lab_0x2b9e0_24;
											}
											v102 = v101;
											v89 = v85;
											v87 = v88;
											goto lab_0x2ba1c_24;
										}
									}
									// 0x2ba8c
									v90 = DrawAutomapPlr();
									result = DrawAutomapGame(v90);
									// branch -> 0x2ba94
									// 0x2ba94
									g10 = v1;
									return result;
								}
								// 0x2b7c0
								v57 = __asm_rlwinm_(v56, 29, 3, 31);
								if (v57 == 0) {
									// 0x2b7c0
									// branch -> 0x2b838
									// 0x2b838
									v70 = (int32_t *)v5;
									*v70 = *v70 - 1;
									v71 = v18 - 1;
									// branch -> 0x2b83c
									while (v71 != 0) {
										// 0x2b83c
										v70 = (int32_t *)v5;
										*v70 = *v70 - 1;
										v71--;
										// continue -> 0x2b83c
									}
									// 0x2b84c
									v92 = (int32_t *)v2;
									v74 = g23;
									*v92 = *(int32_t *)v5 + *v92;
									v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
									v75 = v4;
									v105 = *(int32_t *)v75;
									v114 = *(int32_t *)(v75 + 4);
									v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
									v93 = v115 / 0x8000000000000000;
									v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
									v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
									v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
									g31 = v107;
									v108 = *(int32_t *)v3 - v107;
									g33 = v108;
									g32 = *(int32_t *)v2 - 1;
									if (v107 % 2 == 0) {
										// 0x2b8e4
										v121 = v107 / 2 | v107 & -0x80000000;
										v77 = g29;
										v109 = *(int32_t *)v77;
										v88 = v77;
										v97 = 336 - v109 * v121 - *(int32_t *)g28;
										v96 = v109 + 384 - *(int32_t *)g30 * v121;
										// branch -> 0x2b90c
									} else {
										// 0x2b8b8
										v94 = v107 - 1;
										v95 = v107 + 1;
										v76 = g29;
										v88 = v76;
										v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
										v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
										// branch -> 0x2b90c
									}
									// 0x2b90c
									v98 = v97;
									v78 = v96;
									if (v10 % 2 != 0) {
										// 0x2b914
										v98 = v97 - *(int32_t *)v7;
										v78 = v96 - *(int32_t *)g28;
										// branch -> 0x2b924
									}
									// 0x2b924
									v81 = v98;
									v80 = v78;
									if (v16 % 2 != 0) {
										// 0x2b92c
										v81 = v98 - *(int32_t *)v7;
										v80 = *(int32_t *)g28 + v78;
										// branch -> 0x2b93c
									}
									// 0x2b93c
									v79 = g23;
									v117 = 0x51eb851f * (int64_t)(v105 * v104);
									v119 = (int32_t)(v117 / 0x100000000) >> 31;
									v99 = v119 < 0;
									v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
									v118 = 0x51eb851f * (int64_t)(v114 * v104);
									v111 = v80 + (v110 / 2 | v110 & -0x80000000);
									g36 = v111;
									v120 = (int32_t)(v118 / 0x100000000) >> 31;
									v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
									v113 = v81 + (v112 / 2 | v112 & -0x80000000);
									g35 = v113;
									if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
										// 0x2b98c
										if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v82 = v111;
										}
									}
									// 0x2b9a0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
										// 0x2b9b0
										if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v84 = v82;
										}
									}
									// 0x2b9c4
									g26 = v107 + 1;
									g27 = 0;
									if (v107 >= 0xffffffff) {
										v101 = v107;
										v85 = v113;
										v83 = v84;
										while (true) {
											// 0x2b9d0
											g24 = v83;
											g25 = v85;
											v73 = 0;
											if (v101 > 0) {
												v100 = 0;
												v86 = v108;
												goto lab_0x2b9e0_24;
											}
											v102 = v101;
											v89 = v85;
											v87 = v88;
											goto lab_0x2ba1c_24;
										}
									}
									// 0x2ba8c
									v90 = DrawAutomapPlr();
									result = DrawAutomapGame(v90);
									// branch -> 0x2ba94
									// 0x2ba94
									g10 = v1;
									return result;
								}
								v58 = (int32_t *)v5;
								*v58 = *v58 - 1;
								v59 = (int32_t *)v5;
								*v59 = *v59 - 1;
								v60 = (int32_t *)v5;
								*v60 = *v60 - 1;
								v61 = (int32_t *)v5;
								*v61 = *v61 - 1;
								v62 = (int32_t *)v5;
								*v62 = *v62 - 1;
								v63 = (int32_t *)v5;
								*v63 = *v63 - 1;
								v64 = (int32_t *)v5;
								*v64 = *v64 - 1;
								v65 = (int32_t *)v5;
								*v65 = *v65 - 1;
								v66 = v57 - 1;
								while (v66 != 0) {
									// 0x2b7cc
									v58 = (int32_t *)v5;
									*v58 = *v58 - 1;
									v59 = (int32_t *)v5;
									*v59 = *v59 - 1;
									v60 = (int32_t *)v5;
									*v60 = *v60 - 1;
									v61 = (int32_t *)v5;
									*v61 = *v61 - 1;
									v62 = (int32_t *)v5;
									*v62 = *v62 - 1;
									v63 = (int32_t *)v5;
									*v63 = *v63 - 1;
									v64 = (int32_t *)v5;
									*v64 = *v64 - 1;
									v65 = (int32_t *)v5;
									*v65 = *v65 - 1;
									v66--;
									// continue -> 0x2b7cc
								}
								// 0x2b830
								v91 = v18 % 8;
								if (v91 != 0) {
									// 0x2b838
									v70 = (int32_t *)v5;
									*v70 = *v70 - 1;
									v71 = v91 - 1;
									// branch -> 0x2b83c
									while (v71 != 0) {
										// 0x2b83c
										v70 = (int32_t *)v5;
										*v70 = *v70 - 1;
										v71--;
										// continue -> 0x2b83c
									}
									// 0x2b84c
									v92 = (int32_t *)v2;
									v74 = g23;
									*v92 = *(int32_t *)v5 + *v92;
									v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
									v75 = v4;
									v105 = *(int32_t *)v75;
									v114 = *(int32_t *)(v75 + 4);
									v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
									v93 = v115 / 0x8000000000000000;
									v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
									v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
									v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
									g31 = v107;
									v108 = *(int32_t *)v3 - v107;
									g33 = v108;
									g32 = *(int32_t *)v2 - 1;
									if (v107 % 2 == 0) {
										// 0x2b8e4
										v121 = v107 / 2 | v107 & -0x80000000;
										v77 = g29;
										v109 = *(int32_t *)v77;
										v88 = v77;
										v97 = 336 - v109 * v121 - *(int32_t *)g28;
										v96 = v109 + 384 - *(int32_t *)g30 * v121;
										// branch -> 0x2b90c
									} else {
										// 0x2b8b8
										v94 = v107 - 1;
										v95 = v107 + 1;
										v76 = g29;
										v88 = v76;
										v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
										v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
										// branch -> 0x2b90c
									}
									// 0x2b90c
									v98 = v97;
									v78 = v96;
									if (v10 % 2 != 0) {
										// 0x2b914
										v98 = v97 - *(int32_t *)v7;
										v78 = v96 - *(int32_t *)g28;
										// branch -> 0x2b924
									}
									// 0x2b924
									v81 = v98;
									v80 = v78;
									if (v16 % 2 != 0) {
										// 0x2b92c
										v81 = v98 - *(int32_t *)v7;
										v80 = *(int32_t *)g28 + v78;
										// branch -> 0x2b93c
									}
									// 0x2b93c
									v79 = g23;
									v117 = 0x51eb851f * (int64_t)(v105 * v104);
									v119 = (int32_t)(v117 / 0x100000000) >> 31;
									v99 = v119 < 0;
									v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
									v118 = 0x51eb851f * (int64_t)(v114 * v104);
									v111 = v80 + (v110 / 2 | v110 & -0x80000000);
									g36 = v111;
									v120 = (int32_t)(v118 / 0x100000000) >> 31;
									v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
									v113 = v81 + (v112 / 2 | v112 & -0x80000000);
									g35 = v113;
									if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
										// 0x2b98c
										if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v82 = v111;
										}
									}
									// 0x2b9a0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
										// 0x2b9b0
										if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v84 = v82;
										}
									}
									// 0x2b9c4
									g26 = v107 + 1;
									g27 = 0;
									if (v107 >= 0xffffffff) {
										v101 = v107;
										v85 = v113;
										v83 = v84;
										while (true) {
											// 0x2b9d0
											g24 = v83;
											g25 = v85;
											v73 = 0;
											if (v101 > 0) {
												v100 = 0;
												v86 = v108;
												goto lab_0x2b9e0_24;
											}
											v102 = v101;
											v89 = v85;
											v87 = v88;
											goto lab_0x2ba1c_24;
										}
									}
									// 0x2ba8c
									v90 = DrawAutomapPlr();
									result = DrawAutomapGame(v90);
									// branch -> 0x2ba94
									// 0x2ba94
									g10 = v1;
									return result;
								}
								// 0x2b84c
								v92 = (int32_t *)v2;
								v74 = g23;
								*v92 = *(int32_t *)v5 + *v92;
								v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
								v75 = v4;
								v105 = *(int32_t *)v75;
								v114 = *(int32_t *)(v75 + 4);
								v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
								v93 = v115 / 0x8000000000000000;
								v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
								v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
								v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
								g31 = v107;
								v108 = *(int32_t *)v3 - v107;
								g33 = v108;
								g32 = *(int32_t *)v2 - 1;
								if (v107 % 2 == 0) {
									// 0x2b8e4
									v121 = v107 / 2 | v107 & -0x80000000;
									v77 = g29;
									v109 = *(int32_t *)v77;
									v88 = v77;
									v97 = 336 - v109 * v121 - *(int32_t *)g28;
									v96 = v109 + 384 - *(int32_t *)g30 * v121;
									// branch -> 0x2b90c
								} else {
									// 0x2b8b8
									v94 = v107 - 1;
									v95 = v107 + 1;
									v76 = g29;
									v88 = v76;
									v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
									v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
									// branch -> 0x2b90c
								}
								// 0x2b90c
								v98 = v97;
								v78 = v96;
								if (v10 % 2 != 0) {
									// 0x2b914
									v98 = v97 - *(int32_t *)v7;
									v78 = v96 - *(int32_t *)g28;
									// branch -> 0x2b924
								}
								// 0x2b924
								v81 = v98;
								v80 = v78;
								if (v16 % 2 != 0) {
									// 0x2b92c
									v81 = v98 - *(int32_t *)v7;
									v80 = *(int32_t *)g28 + v78;
									// branch -> 0x2b93c
								}
								// 0x2b93c
								v79 = g23;
								v117 = 0x51eb851f * (int64_t)(v105 * v104);
								v119 = (int32_t)(v117 / 0x100000000) >> 31;
								v99 = v119 < 0;
								v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
								v118 = 0x51eb851f * (int64_t)(v114 * v104);
								v111 = v80 + (v110 / 2 | v110 & -0x80000000);
								g36 = v111;
								v120 = (int32_t)(v118 / 0x100000000) >> 31;
								v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
								v113 = v81 + (v112 / 2 | v112 & -0x80000000);
								g35 = v113;
								if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
									// 0x2b98c
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v82 = v111;
									}
								}
								// 0x2b9a0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
									// 0x2b9b0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v84 = v82;
									}
								}
								// 0x2b9c4
								g26 = v107 + 1;
								g27 = 0;
								if (v107 >= 0xffffffff) {
									v101 = v107;
									v85 = v113;
									v83 = v84;
									while (true) {
										// 0x2b9d0
										g24 = v83;
										g25 = v85;
										v73 = 0;
										if (v101 > 0) {
											v100 = 0;
											v86 = v108;
											goto lab_0x2b9e0_24;
										}
										v102 = v101;
										v89 = v85;
										v87 = v88;
										goto lab_0x2ba1c_24;
									}
								}
								// 0x2ba8c
								v90 = DrawAutomapPlr();
								result = DrawAutomapGame(v90);
								// branch -> 0x2ba94
								// 0x2ba94
								g10 = v1;
								return result;
							}
							v37 = (int32_t *)v5;
							*v37 = *v37 + 1;
							v38 = (int32_t *)v5;
							*v38 = *v38 + 1;
							v39 = (int32_t *)v5;
							*v39 = *v39 + 1;
							v40 = (int32_t *)v5;
							*v40 = *v40 + 1;
							v41 = (int32_t *)v5;
							*v41 = *v41 + 1;
							v42 = (int32_t *)v5;
							*v42 = *v42 + 1;
							v43 = (int32_t *)v5;
							*v43 = *v43 + 1;
							v44 = (int32_t *)v5;
							v50 = *v44;
							v6 = v50;
							*v44 = v50 + 1;
							v45 = v36 - 1;
							while (v45 != 0) {
								// 0x2b72c
								v37 = (int32_t *)v5;
								*v37 = *v37 + 1;
								v38 = (int32_t *)v5;
								*v38 = *v38 + 1;
								v39 = (int32_t *)v5;
								*v39 = *v39 + 1;
								v40 = (int32_t *)v5;
								*v40 = *v40 + 1;
								v41 = (int32_t *)v5;
								*v41 = *v41 + 1;
								v42 = (int32_t *)v5;
								*v42 = *v42 + 1;
								v43 = (int32_t *)v5;
								*v43 = *v43 + 1;
								v44 = (int32_t *)v5;
								v50 = *v44;
								v6 = v50;
								*v44 = v50 + 1;
								v45--;
								// continue -> 0x2b72c
							}
							// 0x2b790
							v55 = v18 % 8;
							int32_t v140; // 0x2b8a0
							int32_t v141; // 0x2b93c
							if (v55 != 0) {
								// 0x2b798
								v46 = (int32_t *)v5;
								*v46 = *v46 + 1;
								v47 = v55 - 1;
								// branch -> 0x2b79c
								while (v47 != 0) {
									// 0x2b79c
									v46 = (int32_t *)v5;
									*v46 = *v46 + 1;
									v47--;
									// continue -> 0x2b79c
								}
								// 0x2b7ac
								v68 = v13 + *(int32_t *)v5;
								v56 = v68 - 39;
								v18 = v56;
								if (v68 >= 40) {
									// 0x2b7c0
									v57 = __asm_rlwinm_(v56, 29, 3, 31);
									if (v57 == 0) {
										// 0x2b7c0
										// branch -> 0x2b838
										// 0x2b838
										v70 = (int32_t *)v5;
										*v70 = *v70 - 1;
										v71 = v18 - 1;
										// branch -> 0x2b83c
										while (v71 != 0) {
											// 0x2b83c
											v70 = (int32_t *)v5;
											*v70 = *v70 - 1;
											v71--;
											// continue -> 0x2b83c
										}
										// 0x2b84c
										v92 = (int32_t *)v2;
										v74 = g23;
										*v92 = *(int32_t *)v5 + *v92;
										v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
										v75 = v4;
										v105 = *(int32_t *)v75;
										v114 = *(int32_t *)(v75 + 4);
										v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
										v93 = v115 / 0x8000000000000000;
										v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
										v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
										v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
										g31 = v107;
										v108 = *(int32_t *)v3 - v107;
										g33 = v108;
										g32 = *(int32_t *)v2 - 1;
										if (v107 % 2 == 0) {
											// 0x2b8e4
											v121 = v107 / 2 | v107 & -0x80000000;
											v77 = g29;
											v109 = *(int32_t *)v77;
											v88 = v77;
											v97 = 336 - v109 * v121 - *(int32_t *)g28;
											v96 = v109 + 384 - *(int32_t *)g30 * v121;
											// branch -> 0x2b90c
										} else {
											// 0x2b8b8
											v94 = v107 - 1;
											v95 = v107 + 1;
											v76 = g29;
											v88 = v76;
											v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
											v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
											// branch -> 0x2b90c
										}
										// 0x2b90c
										v98 = v97;
										v78 = v96;
										if (v10 % 2 != 0) {
											// 0x2b914
											v98 = v97 - *(int32_t *)v7;
											v78 = v96 - *(int32_t *)g28;
											// branch -> 0x2b924
										}
										// 0x2b924
										v81 = v98;
										v80 = v78;
										if (v16 % 2 != 0) {
											// 0x2b92c
											v81 = v98 - *(int32_t *)v7;
											v80 = *(int32_t *)g28 + v78;
											// branch -> 0x2b93c
										}
										// 0x2b93c
										v79 = g23;
										v117 = 0x51eb851f * (int64_t)(v105 * v104);
										v119 = (int32_t)(v117 / 0x100000000) >> 31;
										v99 = v119 < 0;
										v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
										v118 = 0x51eb851f * (int64_t)(v114 * v104);
										v111 = v80 + (v110 / 2 | v110 & -0x80000000);
										g36 = v111;
										v120 = (int32_t)(v118 / 0x100000000) >> 31;
										v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
										v113 = v81 + (v112 / 2 | v112 & -0x80000000);
										g35 = v113;
										if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
											// 0x2b98c
											if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												v82 = v111;
											}
										}
										// 0x2b9a0
										if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
											// 0x2b9b0
											if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												v84 = v82;
											}
										}
										// 0x2b9c4
										g26 = v107 + 1;
										g27 = 0;
										if (v107 >= 0xffffffff) {
											v101 = v107;
											v85 = v113;
											v83 = v84;
											while (true) {
												// 0x2b9d0
												g24 = v83;
												g25 = v85;
												v73 = 0;
												if (v101 > 0) {
													v100 = 0;
													v86 = v108;
													goto lab_0x2b9e0_24;
												}
												v102 = v101;
												v89 = v85;
												v87 = v88;
												goto lab_0x2ba1c_24;
											}
										}
										// 0x2ba8c
										v90 = DrawAutomapPlr();
										result = DrawAutomapGame(v90);
										// branch -> 0x2ba94
										// 0x2ba94
										g10 = v1;
										return result;
									}
									v58 = (int32_t *)v5;
									*v58 = *v58 - 1;
									v59 = (int32_t *)v5;
									*v59 = *v59 - 1;
									v60 = (int32_t *)v5;
									*v60 = *v60 - 1;
									v61 = (int32_t *)v5;
									*v61 = *v61 - 1;
									v62 = (int32_t *)v5;
									*v62 = *v62 - 1;
									v63 = (int32_t *)v5;
									*v63 = *v63 - 1;
									v64 = (int32_t *)v5;
									*v64 = *v64 - 1;
									v65 = (int32_t *)v5;
									*v65 = *v65 - 1;
									v66 = v57 - 1;
									while (v66 != 0) {
										// 0x2b7cc
										v58 = (int32_t *)v5;
										*v58 = *v58 - 1;
										v59 = (int32_t *)v5;
										*v59 = *v59 - 1;
										v60 = (int32_t *)v5;
										*v60 = *v60 - 1;
										v61 = (int32_t *)v5;
										*v61 = *v61 - 1;
										v62 = (int32_t *)v5;
										*v62 = *v62 - 1;
										v63 = (int32_t *)v5;
										*v63 = *v63 - 1;
										v64 = (int32_t *)v5;
										*v64 = *v64 - 1;
										v65 = (int32_t *)v5;
										*v65 = *v65 - 1;
										v66--;
										// continue -> 0x2b7cc
									}
									// 0x2b830
									v91 = v18 % 8;
									if (v91 != 0) {
										// 0x2b838
										v70 = (int32_t *)v5;
										*v70 = *v70 - 1;
										v71 = v91 - 1;
										// branch -> 0x2b83c
										while (v71 != 0) {
											// 0x2b83c
											v70 = (int32_t *)v5;
											*v70 = *v70 - 1;
											v71--;
											// continue -> 0x2b83c
										}
										// 0x2b84c
										v92 = (int32_t *)v2;
										v74 = g23;
										*v92 = *(int32_t *)v5 + *v92;
										v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
										v75 = v4;
										v105 = *(int32_t *)v75;
										v114 = *(int32_t *)(v75 + 4);
										v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
										v93 = v115 / 0x8000000000000000;
										v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
										v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
										v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
										g31 = v107;
										v108 = *(int32_t *)v3 - v107;
										g33 = v108;
										g32 = *(int32_t *)v2 - 1;
										if (v107 % 2 == 0) {
											// 0x2b8e4
											v121 = v107 / 2 | v107 & -0x80000000;
											v77 = g29;
											v109 = *(int32_t *)v77;
											v88 = v77;
											v97 = 336 - v109 * v121 - *(int32_t *)g28;
											v96 = v109 + 384 - *(int32_t *)g30 * v121;
											// branch -> 0x2b90c
										} else {
											// 0x2b8b8
											v94 = v107 - 1;
											v95 = v107 + 1;
											v76 = g29;
											v88 = v76;
											v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
											v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
											// branch -> 0x2b90c
										}
										// 0x2b90c
										v98 = v97;
										v78 = v96;
										if (v10 % 2 != 0) {
											// 0x2b914
											v98 = v97 - *(int32_t *)v7;
											v78 = v96 - *(int32_t *)g28;
											// branch -> 0x2b924
										}
										// 0x2b924
										v81 = v98;
										v80 = v78;
										if (v16 % 2 != 0) {
											// 0x2b92c
											v81 = v98 - *(int32_t *)v7;
											v80 = *(int32_t *)g28 + v78;
											// branch -> 0x2b93c
										}
										// 0x2b93c
										v79 = g23;
										v117 = 0x51eb851f * (int64_t)(v105 * v104);
										v119 = (int32_t)(v117 / 0x100000000) >> 31;
										v99 = v119 < 0;
										v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
										v118 = 0x51eb851f * (int64_t)(v114 * v104);
										v111 = v80 + (v110 / 2 | v110 & -0x80000000);
										g36 = v111;
										v120 = (int32_t)(v118 / 0x100000000) >> 31;
										v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
										v113 = v81 + (v112 / 2 | v112 & -0x80000000);
										g35 = v113;
										if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
											// 0x2b98c
											if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												v82 = v111;
											}
										}
										// 0x2b9a0
										if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
											// 0x2b9b0
											if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												v84 = v82;
											}
										}
										// 0x2b9c4
										g26 = v107 + 1;
										g27 = 0;
										if (v107 >= 0xffffffff) {
											v101 = v107;
											v85 = v113;
											v83 = v84;
											while (true) {
												// 0x2b9d0
												g24 = v83;
												g25 = v85;
												v73 = 0;
												if (v101 > 0) {
													v100 = 0;
													v86 = v108;
													goto lab_0x2b9e0_24;
												}
												v102 = v101;
												v89 = v85;
												v87 = v88;
												goto lab_0x2ba1c_24;
											}
										}
										// 0x2ba8c
										v90 = DrawAutomapPlr();
										result = DrawAutomapGame(v90);
										// branch -> 0x2ba94
										// 0x2ba94
										g10 = v1;
										return result;
									}
									// 0x2b84c
									v92 = (int32_t *)v2;
									v74 = g23;
									*v92 = *(int32_t *)v5 + *v92;
									v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
									v75 = v4;
									v105 = *(int32_t *)v75;
									v114 = *(int32_t *)(v75 + 4);
									v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
									v93 = v115 / 0x8000000000000000;
									v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
									v116 = *(char *)(*(int32_t *)(v74 - 0x657c) + v106);
									v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
									g31 = v107;
									v108 = *(int32_t *)v3 - v107;
									g33 = v108;
									g32 = *(int32_t *)v2 - 1;
									if (v107 % 2 == 0) {
										// 0x2b8e4
										v121 = v107 / 2 | v107 & -0x80000000;
										v77 = g29;
										v109 = *(int32_t *)v77;
										v88 = v77;
										v97 = 336 - v109 * v121 - *(int32_t *)g28;
										v96 = v109 + 384 - *(int32_t *)g30 * v121;
										// branch -> 0x2b90c
									} else {
										// 0x2b8b8
										v94 = v107 - 1;
										v95 = v107 + 1;
										v76 = g29;
										v88 = v76;
										v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
										v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
										// branch -> 0x2b90c
									}
									// 0x2b90c
									v98 = v97;
									v78 = v96;
									if (v10 % 2 != 0) {
										// 0x2b914
										v98 = v97 - *(int32_t *)v7;
										v78 = v96 - *(int32_t *)g28;
										// branch -> 0x2b924
									}
									// 0x2b924
									v81 = v98;
									v80 = v78;
									if (v16 % 2 != 0) {
										// 0x2b92c
										v81 = v98 - *(int32_t *)v7;
										v80 = *(int32_t *)g28 + v78;
										// branch -> 0x2b93c
									}
									// 0x2b93c
									v79 = g23;
									v117 = 0x51eb851f * (int64_t)(v105 * v104);
									v119 = (int32_t)(v117 / 0x100000000) >> 31;
									v99 = v119 < 0;
									v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
									v118 = 0x51eb851f * (int64_t)(v114 * v104);
									v111 = v80 + (v110 / 2 | v110 & -0x80000000);
									g36 = v111;
									v120 = (int32_t)(v118 / 0x100000000) >> 31;
									v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
									v113 = v81 + (v112 / 2 | v112 & -0x80000000);
									g35 = v113;
									if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
										// 0x2b98c
										if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v82 = v111;
										}
									}
									// 0x2b9a0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
										// 0x2b9b0
										if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v84 = v82;
										}
									}
									// 0x2b9c4
									g26 = v107 + 1;
									g27 = 0;
									if (v107 >= 0xffffffff) {
										v101 = v107;
										v85 = v113;
										v83 = v84;
										while (true) {
											// 0x2b9d0
											g24 = v83;
											g25 = v85;
											v73 = 0;
											if (v101 > 0) {
												v100 = 0;
												v86 = v108;
												goto lab_0x2b9e0_24;
											}
											v102 = v101;
											v89 = v85;
											v87 = v88;
											goto lab_0x2ba1c_24;
										}
									}
									// 0x2ba8c
									v90 = DrawAutomapPlr();
									result = DrawAutomapGame(v90);
									// branch -> 0x2ba94
									// 0x2ba94
									g10 = v1;
									return result;
								}
								// 0x2b84c
								v92 = (int32_t *)v2;
								v74 = g23;
								v13 = *(int32_t *)(v74 - 0x657c);
								*v92 = *(int32_t *)v5 + *v92;
								v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
								v75 = v4;
								v105 = *(int32_t *)v75;
								v114 = *(int32_t *)(v75 + 4);
								v4 = v114;
								v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
								v93 = v115 / 0x8000000000000000;
								v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
								v116 = *(char *)(v13 + v106);
								v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
								g31 = v107;
								v140 = *(int32_t *)v3;
								v6 = v140;
								v108 = v140 - v107;
								g33 = v108;
								g32 = *(int32_t *)v2 - 1;
								if (v107 % 2 == 0) {
									// 0x2b8e4
									v121 = v107 / 2 | v107 & -0x80000000;
									v6 = v121;
									v77 = g29;
									v109 = *(int32_t *)v77;
									v13 = v109;
									v88 = v77;
									v97 = 336 - v109 * v121 - *(int32_t *)g28;
									v96 = v109 + 384 - *(int32_t *)g30 * v121;
									// branch -> 0x2b90c
								} else {
									// 0x2b8b8
									v94 = v107 - 1;
									v95 = v107 + 1;
									v76 = g29;
									v88 = v76;
									v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
									v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
									// branch -> 0x2b90c
								}
								// 0x2b90c
								v98 = v97;
								v78 = v96;
								if (v10 % 2 != 0) {
									// 0x2b914
									v98 = v97 - *(int32_t *)v7;
									v78 = v96 - *(int32_t *)g28;
									// branch -> 0x2b924
								}
								// 0x2b924
								v81 = v98;
								v80 = v78;
								if (v16 % 2 != 0) {
									// 0x2b92c
									v81 = v98 - *(int32_t *)v7;
									v80 = *(int32_t *)g28 + v78;
									// branch -> 0x2b93c
								}
								// 0x2b93c
								v141 = v105 * v104;
								v3 = v141;
								v79 = g23;
								v2 = 0x51eb851f;
								v117 = 0x51eb851f * (int64_t)v141;
								v119 = (int32_t)(v117 / 0x100000000) >> 31;
								v99 = v119 < 0;
								v5 = v99;
								v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
								v118 = 0x51eb851f * (int64_t)(v114 * v104);
								v111 = v80 + (v110 / 2 | v110 & -0x80000000);
								g36 = v111;
								v120 = (int32_t)(v118 / 0x100000000) >> 31;
								v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
								v113 = v81 + (v112 / 2 | v112 & -0x80000000);
								g35 = v113;
								if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
									// 0x2b98c
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v82 = v111;
									}
								}
								// 0x2b9a0
								if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
									// 0x2b9b0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v84 = v82;
									}
								}
								// 0x2b9c4
								g26 = v107 + 1;
								g27 = 0;
								if (v107 >= 0xffffffff) {
									v101 = v107;
									v85 = v113;
									v83 = v84;
									while (true) {
										// 0x2b9d0
										g24 = v83;
										g25 = v85;
										v73 = 0;
										if (v101 > 0) {
											v100 = 0;
											v86 = v108;
											goto lab_0x2b9e0_24;
										}
										v102 = v101;
										v89 = v85;
										v87 = v88;
										goto lab_0x2ba1c_24;
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x2b7ac
							v68 = v13 + *(int32_t *)v5;
							v56 = v68 - 39;
							v18 = v56;
							if (v68 >= 40) {
								// 0x2b7c0
								v57 = __asm_rlwinm_(v56, 29, 3, 31);
								v17 = v57;
								if (v57 == 0) {
									// 0x2b7c0
									// branch -> 0x2b838
									// 0x2b838
									v70 = (int32_t *)v5;
									*v70 = *v70 - 1;
									v71 = v18 - 1;
									// branch -> 0x2b83c
									while (v71 != 0) {
										// 0x2b83c
										v70 = (int32_t *)v5;
										*v70 = *v70 - 1;
										v71--;
										// continue -> 0x2b83c
									}
									// 0x2b84c
									v92 = (int32_t *)v2;
									v74 = g23;
									v13 = *(int32_t *)(v74 - 0x657c);
									*v92 = *(int32_t *)v5 + *v92;
									v104 = *(int32_t *)*(int32_t *)(v74 - 0x777c);
									v75 = v4;
									v105 = *(int32_t *)v75;
									v114 = *(int32_t *)(v75 + 4);
									v115 = (int64_t)0x66666667 * (int64_t)(v104 - 50);
									v93 = v115 / 0x8000000000000000;
									v106 = ((int32_t)(v115 / 0x100000000) & -0x80000000 | (int32_t)(v115 / 0x200000000)) + v93;
									v116 = *(char *)(v13 + v106);
									v107 = (int32_t)v116 + (int32_t)(v114 != -v105);
									g31 = v107;
									v140 = *(int32_t *)v3;
									v6 = v140;
									v108 = v140 - v107;
									g33 = v108;
									g32 = *(int32_t *)v2 - 1;
									if (v107 % 2 == 0) {
										// 0x2b8e4
										v121 = v107 / 2 | v107 & -0x80000000;
										v6 = v121;
										v77 = g29;
										v109 = *(int32_t *)v77;
										v13 = v109;
										v88 = v77;
										v97 = 336 - v109 * v121 - *(int32_t *)g28;
										v96 = v109 + 384 - *(int32_t *)g30 * v121;
										// branch -> 0x2b90c
									} else {
										// 0x2b8b8
										v94 = v107 - 1;
										v95 = v107 + 1;
										v76 = g29;
										v88 = v76;
										v97 = 336 - *(int32_t *)v76 * (v95 / 2 | v95 & -0x80000000);
										v96 = 384 - *(int32_t *)g30 * (v94 / 2 | v94 & -0x80000000);
										// branch -> 0x2b90c
									}
									// 0x2b90c
									v98 = v97;
									v78 = v96;
									if (v10 % 2 != 0) {
										// 0x2b914
										v98 = v97 - *(int32_t *)v7;
										v78 = v96 - *(int32_t *)g28;
										// branch -> 0x2b924
									}
									// 0x2b924
									v81 = v98;
									v80 = v78;
									if (v16 % 2 != 0) {
										// 0x2b92c
										v81 = v98 - *(int32_t *)v7;
										v80 = *(int32_t *)g28 + v78;
										// branch -> 0x2b93c
									}
									// 0x2b93c
									v141 = v105 * v104;
									v3 = v141;
									v79 = g23;
									v2 = 0x51eb851f;
									v117 = 0x51eb851f * (int64_t)v141;
									v119 = (int32_t)(v117 / 0x100000000) >> 31;
									v99 = v119 < 0;
									v5 = v99;
									v110 = (v119 & -0x8000000 | (int32_t)(v117 / 0x2000000000)) + v99;
									v118 = 0x51eb851f * (int64_t)(v114 * v104);
									v111 = v80 + (v110 / 2 | v110 & -0x80000000);
									g36 = v111;
									v120 = (int32_t)(v118 / 0x100000000) >> 31;
									v112 = (v120 & -0x8000000 | (int32_t)(v118 / 0x2000000000)) + (int32_t)(v120 < 0);
									v113 = v81 + (v112 / 2 | v112 & -0x80000000);
									g35 = v113;
									if (*(int32_t *)*(int32_t *)(v79 - 0x77bc) == 0) {
										// 0x2b98c
										if (*(int32_t *)*(int32_t *)(v79 - 0x77c0) != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v82 = v111;
										}
									}
									// 0x2b9a0
									if (*(int32_t *)*(int32_t *)(v79 - 0x77c4) == 0) {
										// 0x2b9b0
										if (*(int32_t *)*(int32_t *)(v79 - 0x77c8) != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v84 = v82;
										}
									}
									// 0x2b9c4
									g26 = v107 + 1;
									g27 = 0;
									if (v107 >= 0xffffffff) {
										v101 = v107;
										v85 = v113;
										v83 = v84;
										while (true) {
											// 0x2b9d0
											g24 = v83;
											g25 = v85;
											v73 = 0;
											if (v101 > 0) {
												v100 = 0;
												v86 = v108;
												goto lab_0x2b9e0_24;
											}
											v102 = v101;
											v89 = v85;
											v87 = v88;
											goto lab_0x2ba1c_24;
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									v58 = (int32_t *)v5;
									*v58 = *v58 - 1;
									v59 = (int32_t *)v5;
									*v59 = *v59 - 1;
									v60 = (int32_t *)v5;
									*v60 = *v60 - 1;
									v61 = (int32_t *)v5;
									*v61 = *v61 - 1;
									v62 = (int32_t *)v5;
									*v62 = *v62 - 1;
									v63 = (int32_t *)v5;
									*v63 = *v63 - 1;
									v64 = (int32_t *)v5;
									*v64 = *v64 - 1;
									v65 = (int32_t *)v5;
									v69 = *v65;
									v6 = v69;
									*v65 = v69 - 1;
									v66 = v17 - 1;
									while (v66 != 0) {
										// 0x2b7cc
										v58 = (int32_t *)v5;
										*v58 = *v58 - 1;
										v59 = (int32_t *)v5;
										*v59 = *v59 - 1;
										v60 = (int32_t *)v5;
										*v60 = *v60 - 1;
										v61 = (int32_t *)v5;
										*v61 = *v61 - 1;
										v62 = (int32_t *)v5;
										*v62 = *v62 - 1;
										v63 = (int32_t *)v5;
										*v63 = *v63 - 1;
										v64 = (int32_t *)v5;
										*v64 = *v64 - 1;
										v65 = (int32_t *)v5;
										v69 = *v65;
										v6 = v69;
										*v65 = v69 - 1;
										v66--;
										// continue -> 0x2b7cc
									}
									// 0x2b830
									v91 = v18 % 8;
									if (v91 != 0) {
										// 0x2b838
										v70 = (int32_t *)v5;
										v72 = *v70;
										v6 = v72;
										*v70 = v72 - 1;
										v71 = v91 - 1;
										// branch -> 0x2b83c
										while (v71 != 0) {
											// 0x2b83c
											v70 = (int32_t *)v5;
											v72 = *v70;
											v6 = v72;
											*v70 = v72 - 1;
											v71--;
											// continue -> 0x2b83c
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0x2b7ac
						v68 = v13 + *(int32_t *)v5;
						v56 = v68 - 39;
						v18 = v56;
						if (v68 >= 40) {
							// 0x2b7c0
							v57 = __asm_rlwinm_(v56, 29, 3, 31);
							v17 = v57;
							if (v57 == 0) {
								// 0x2b7c0
								// branch -> 0x2b838
								// 0x2b838
								v70 = (int32_t *)v5;
								v72 = *v70;
								v6 = v72;
								*v70 = v72 - 1;
								v71 = v18 - 1;
								// branch -> 0x2b83c
								while (v71 != 0) {
									// 0x2b83c
									v70 = (int32_t *)v5;
									v72 = *v70;
									v6 = v72;
									*v70 = v72 - 1;
									v71--;
									// continue -> 0x2b83c
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								v58 = (int32_t *)v5;
								*v58 = *v58 - 1;
								v59 = (int32_t *)v5;
								*v59 = *v59 - 1;
								v60 = (int32_t *)v5;
								*v60 = *v60 - 1;
								v61 = (int32_t *)v5;
								*v61 = *v61 - 1;
								v62 = (int32_t *)v5;
								*v62 = *v62 - 1;
								v63 = (int32_t *)v5;
								*v63 = *v63 - 1;
								v64 = (int32_t *)v5;
								*v64 = *v64 - 1;
								v65 = (int32_t *)v5;
								v69 = *v65;
								v6 = v69;
								*v65 = v69 - 1;
								v66 = v17 - 1;
								while (v66 != 0) {
									// 0x2b7cc
									v58 = (int32_t *)v5;
									*v58 = *v58 - 1;
									v59 = (int32_t *)v5;
									*v59 = *v59 - 1;
									v60 = (int32_t *)v5;
									*v60 = *v60 - 1;
									v61 = (int32_t *)v5;
									*v61 = *v61 - 1;
									v62 = (int32_t *)v5;
									*v62 = *v62 - 1;
									v63 = (int32_t *)v5;
									*v63 = *v63 - 1;
									v64 = (int32_t *)v5;
									*v64 = *v64 - 1;
									v65 = (int32_t *)v5;
									v69 = *v65;
									v6 = v69;
									*v65 = v69 - 1;
									v66--;
									// continue -> 0x2b7cc
								}
								// 0x2b830
								v91 = v18 % 8;
								if (v91 != 0) {
									// 0x2b838
									v70 = (int32_t *)v5;
									v72 = *v70;
									v6 = v72;
									*v70 = v72 - 1;
									v71 = v91 - 1;
									// branch -> 0x2b83c
									while (v71 != 0) {
										// 0x2b83c
										v70 = (int32_t *)v5;
										v72 = *v70;
										v6 = v72;
										*v70 = v72 - 1;
										v71--;
										// continue -> 0x2b83c
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x2b6e8
					v33 = (int32_t *)v3;
					*v33 = *(int32_t *)v6 + *v33;
					v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
					*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
					v67 = *(int32_t *)v2;
					v13 = v67;
					v49 = *(int32_t *)v5 + v67;
					v35 = -v49;
					v18 = v35;
					if (v49 <= 0xffffffff) {
						// 0x2b720
						v36 = __asm_rlwinm_(v35, 29, 3, 31);
						v17 = v36;
						if (v36 == 0) {
							// 0x2b720
							// branch -> 0x2b798
							// 0x2b798
							v46 = (int32_t *)v5;
							v51 = *v46;
							v6 = v51;
							*v46 = v51 + 1;
							v47 = v18 - 1;
							// branch -> 0x2b79c
							while (v47 != 0) {
								// 0x2b79c
								v46 = (int32_t *)v5;
								v51 = *v46;
								v6 = v51;
								*v46 = v51 + 1;
								v47--;
								// continue -> 0x2b79c
							}
							// 0x2b7ac
							v68 = v13 + *(int32_t *)v5;
							v56 = v68 - 39;
							v18 = v56;
							if (v68 >= 40) {
								// 0x2b7c0
								v57 = __asm_rlwinm_(v56, 29, 3, 31);
								v17 = v57;
								if (v57 == 0) {
									// 0x2b7c0
									// branch -> 0x2b838
									// 0x2b838
									v70 = (int32_t *)v5;
									v72 = *v70;
									v6 = v72;
									*v70 = v72 - 1;
									v71 = v18 - 1;
									// branch -> 0x2b83c
									while (v71 != 0) {
										// 0x2b83c
										v70 = (int32_t *)v5;
										v72 = *v70;
										v6 = v72;
										*v70 = v72 - 1;
										v71--;
										// continue -> 0x2b83c
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									v58 = (int32_t *)v5;
									*v58 = *v58 - 1;
									v59 = (int32_t *)v5;
									*v59 = *v59 - 1;
									v60 = (int32_t *)v5;
									*v60 = *v60 - 1;
									v61 = (int32_t *)v5;
									*v61 = *v61 - 1;
									v62 = (int32_t *)v5;
									*v62 = *v62 - 1;
									v63 = (int32_t *)v5;
									*v63 = *v63 - 1;
									v64 = (int32_t *)v5;
									*v64 = *v64 - 1;
									v65 = (int32_t *)v5;
									v69 = *v65;
									v6 = v69;
									*v65 = v69 - 1;
									v66 = v17 - 1;
									while (v66 != 0) {
										// 0x2b7cc
										v58 = (int32_t *)v5;
										*v58 = *v58 - 1;
										v59 = (int32_t *)v5;
										*v59 = *v59 - 1;
										v60 = (int32_t *)v5;
										*v60 = *v60 - 1;
										v61 = (int32_t *)v5;
										*v61 = *v61 - 1;
										v62 = (int32_t *)v5;
										*v62 = *v62 - 1;
										v63 = (int32_t *)v5;
										*v63 = *v63 - 1;
										v64 = (int32_t *)v5;
										*v64 = *v64 - 1;
										v65 = (int32_t *)v5;
										v69 = *v65;
										v6 = v69;
										*v65 = v69 - 1;
										v66--;
										// continue -> 0x2b7cc
									}
									// 0x2b830
									v91 = v18 % 8;
									if (v91 != 0) {
										// 0x2b838
										v70 = (int32_t *)v5;
										v72 = *v70;
										v6 = v72;
										*v70 = v72 - 1;
										v71 = v91 - 1;
										// branch -> 0x2b83c
										while (v71 != 0) {
											// 0x2b83c
											v70 = (int32_t *)v5;
											v72 = *v70;
											v6 = v72;
											*v70 = v72 - 1;
											v71--;
											// continue -> 0x2b83c
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							v37 = (int32_t *)v5;
							*v37 = *v37 + 1;
							v38 = (int32_t *)v5;
							*v38 = *v38 + 1;
							v39 = (int32_t *)v5;
							*v39 = *v39 + 1;
							v40 = (int32_t *)v5;
							*v40 = *v40 + 1;
							v41 = (int32_t *)v5;
							*v41 = *v41 + 1;
							v42 = (int32_t *)v5;
							*v42 = *v42 + 1;
							v43 = (int32_t *)v5;
							*v43 = *v43 + 1;
							v44 = (int32_t *)v5;
							v50 = *v44;
							v6 = v50;
							*v44 = v50 + 1;
							v45 = v17 - 1;
							while (v45 != 0) {
								// 0x2b72c
								v37 = (int32_t *)v5;
								*v37 = *v37 + 1;
								v38 = (int32_t *)v5;
								*v38 = *v38 + 1;
								v39 = (int32_t *)v5;
								*v39 = *v39 + 1;
								v40 = (int32_t *)v5;
								*v40 = *v40 + 1;
								v41 = (int32_t *)v5;
								*v41 = *v41 + 1;
								v42 = (int32_t *)v5;
								*v42 = *v42 + 1;
								v43 = (int32_t *)v5;
								*v43 = *v43 + 1;
								v44 = (int32_t *)v5;
								v50 = *v44;
								v6 = v50;
								*v44 = v50 + 1;
								v45--;
								// continue -> 0x2b72c
							}
							// 0x2b790
							v55 = v18 % 8;
							if (v55 != 0) {
								// 0x2b798
								v46 = (int32_t *)v5;
								v51 = *v46;
								v6 = v51;
								*v46 = v51 + 1;
								v47 = v55 - 1;
								// branch -> 0x2b79c
								while (v47 != 0) {
									// 0x2b79c
									v46 = (int32_t *)v5;
									v51 = *v46;
									v6 = v51;
									*v46 = v51 + 1;
									v47--;
									// continue -> 0x2b79c
								}
								// 0x2b7ac
								v68 = v13 + *(int32_t *)v5;
								v56 = v68 - 39;
								v18 = v56;
								if (v68 >= 40) {
									// 0x2b7c0
									v57 = __asm_rlwinm_(v56, 29, 3, 31);
									v17 = v57;
									if (v57 == 0) {
										// 0x2b7c0
										// branch -> 0x2b838
										// 0x2b838
										v70 = (int32_t *)v5;
										v72 = *v70;
										v6 = v72;
										*v70 = v72 - 1;
										v71 = v18 - 1;
										// branch -> 0x2b83c
										while (v71 != 0) {
											// 0x2b83c
											v70 = (int32_t *)v5;
											v72 = *v70;
											v6 = v72;
											*v70 = v72 - 1;
											v71--;
											// continue -> 0x2b83c
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v58 = (int32_t *)v5;
										*v58 = *v58 - 1;
										v59 = (int32_t *)v5;
										*v59 = *v59 - 1;
										v60 = (int32_t *)v5;
										*v60 = *v60 - 1;
										v61 = (int32_t *)v5;
										*v61 = *v61 - 1;
										v62 = (int32_t *)v5;
										*v62 = *v62 - 1;
										v63 = (int32_t *)v5;
										*v63 = *v63 - 1;
										v64 = (int32_t *)v5;
										*v64 = *v64 - 1;
										v65 = (int32_t *)v5;
										v69 = *v65;
										v6 = v69;
										*v65 = v69 - 1;
										v66 = v17 - 1;
										while (v66 != 0) {
											// 0x2b7cc
											v58 = (int32_t *)v5;
											*v58 = *v58 - 1;
											v59 = (int32_t *)v5;
											*v59 = *v59 - 1;
											v60 = (int32_t *)v5;
											*v60 = *v60 - 1;
											v61 = (int32_t *)v5;
											*v61 = *v61 - 1;
											v62 = (int32_t *)v5;
											*v62 = *v62 - 1;
											v63 = (int32_t *)v5;
											*v63 = *v63 - 1;
											v64 = (int32_t *)v5;
											*v64 = *v64 - 1;
											v65 = (int32_t *)v5;
											v69 = *v65;
											v6 = v69;
											*v65 = v69 - 1;
											v66--;
											// continue -> 0x2b7cc
										}
										// 0x2b830
										v91 = v18 % 8;
										if (v91 != 0) {
											// 0x2b838
											v70 = (int32_t *)v5;
											v72 = *v70;
											v6 = v72;
											*v70 = v72 - 1;
											v71 = v91 - 1;
											// branch -> 0x2b83c
											while (v71 != 0) {
												// 0x2b83c
												v70 = (int32_t *)v5;
												v72 = *v70;
												v6 = v72;
												*v70 = v72 - 1;
												v71--;
												// continue -> 0x2b83c
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x2b7ac
						v68 = v13 + *(int32_t *)v5;
						v56 = v68 - 39;
						v18 = v56;
						if (v68 >= 40) {
							// 0x2b7c0
							v57 = __asm_rlwinm_(v56, 29, 3, 31);
							v17 = v57;
							if (v57 == 0) {
								// 0x2b7c0
								// branch -> 0x2b838
								// 0x2b838
								v70 = (int32_t *)v5;
								v72 = *v70;
								v6 = v72;
								*v70 = v72 - 1;
								v71 = v18 - 1;
								// branch -> 0x2b83c
								while (v71 != 0) {
									// 0x2b83c
									v70 = (int32_t *)v5;
									v72 = *v70;
									v6 = v72;
									*v70 = v72 - 1;
									v71--;
									// continue -> 0x2b83c
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								v58 = (int32_t *)v5;
								*v58 = *v58 - 1;
								v59 = (int32_t *)v5;
								*v59 = *v59 - 1;
								v60 = (int32_t *)v5;
								*v60 = *v60 - 1;
								v61 = (int32_t *)v5;
								*v61 = *v61 - 1;
								v62 = (int32_t *)v5;
								*v62 = *v62 - 1;
								v63 = (int32_t *)v5;
								*v63 = *v63 - 1;
								v64 = (int32_t *)v5;
								*v64 = *v64 - 1;
								v65 = (int32_t *)v5;
								v69 = *v65;
								v6 = v69;
								*v65 = v69 - 1;
								v66 = v17 - 1;
								while (v66 != 0) {
									// 0x2b7cc
									v58 = (int32_t *)v5;
									*v58 = *v58 - 1;
									v59 = (int32_t *)v5;
									*v59 = *v59 - 1;
									v60 = (int32_t *)v5;
									*v60 = *v60 - 1;
									v61 = (int32_t *)v5;
									*v61 = *v61 - 1;
									v62 = (int32_t *)v5;
									*v62 = *v62 - 1;
									v63 = (int32_t *)v5;
									*v63 = *v63 - 1;
									v64 = (int32_t *)v5;
									*v64 = *v64 - 1;
									v65 = (int32_t *)v5;
									v69 = *v65;
									v6 = v69;
									*v65 = v69 - 1;
									v66--;
									// continue -> 0x2b7cc
								}
								// 0x2b830
								v91 = v18 % 8;
								if (v91 != 0) {
									// 0x2b838
									v70 = (int32_t *)v5;
									v72 = *v70;
									v6 = v72;
									*v70 = v72 - 1;
									v71 = v91 - 1;
									// branch -> 0x2b83c
									while (v71 != 0) {
										// 0x2b83c
										v70 = (int32_t *)v5;
										v72 = *v70;
										v6 = v72;
										*v70 = v72 - 1;
										v71--;
										// continue -> 0x2b83c
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x2b7ac
					v68 = v13 + *(int32_t *)v5;
					v56 = v68 - 39;
					v18 = v56;
					if (v68 >= 40) {
						// 0x2b7c0
						v57 = __asm_rlwinm_(v56, 29, 3, 31);
						v17 = v57;
						if (v57 == 0) {
							// 0x2b7c0
							// branch -> 0x2b838
							// 0x2b838
							v70 = (int32_t *)v5;
							v72 = *v70;
							v6 = v72;
							*v70 = v72 - 1;
							v71 = v18 - 1;
							// branch -> 0x2b83c
							while (v71 != 0) {
								// 0x2b83c
								v70 = (int32_t *)v5;
								v72 = *v70;
								v6 = v72;
								*v70 = v72 - 1;
								v71--;
								// continue -> 0x2b83c
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							v58 = (int32_t *)v5;
							*v58 = *v58 - 1;
							v59 = (int32_t *)v5;
							*v59 = *v59 - 1;
							v60 = (int32_t *)v5;
							*v60 = *v60 - 1;
							v61 = (int32_t *)v5;
							*v61 = *v61 - 1;
							v62 = (int32_t *)v5;
							*v62 = *v62 - 1;
							v63 = (int32_t *)v5;
							*v63 = *v63 - 1;
							v64 = (int32_t *)v5;
							*v64 = *v64 - 1;
							v65 = (int32_t *)v5;
							v69 = *v65;
							v6 = v69;
							*v65 = v69 - 1;
							v66 = v17 - 1;
							while (v66 != 0) {
								// 0x2b7cc
								v58 = (int32_t *)v5;
								*v58 = *v58 - 1;
								v59 = (int32_t *)v5;
								*v59 = *v59 - 1;
								v60 = (int32_t *)v5;
								*v60 = *v60 - 1;
								v61 = (int32_t *)v5;
								*v61 = *v61 - 1;
								v62 = (int32_t *)v5;
								*v62 = *v62 - 1;
								v63 = (int32_t *)v5;
								*v63 = *v63 - 1;
								v64 = (int32_t *)v5;
								*v64 = *v64 - 1;
								v65 = (int32_t *)v5;
								v69 = *v65;
								v6 = v69;
								*v65 = v69 - 1;
								v66--;
								// continue -> 0x2b7cc
							}
							// 0x2b830
							v91 = v18 % 8;
							if (v91 != 0) {
								// 0x2b838
								v70 = (int32_t *)v5;
								v72 = *v70;
								v6 = v72;
								*v70 = v72 - 1;
								v71 = v91 - 1;
								// branch -> 0x2b83c
								while (v71 != 0) {
									// 0x2b83c
									v70 = (int32_t *)v5;
									v72 = *v70;
									v6 = v72;
									*v70 = v72 - 1;
									v71--;
									// continue -> 0x2b83c
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x2b6e8
				v33 = (int32_t *)v3;
				*v33 = *(int32_t *)v6 + *v33;
				v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
				*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
				v67 = *(int32_t *)v2;
				v13 = v67;
				v49 = *(int32_t *)v5 + v67;
				v35 = -v49;
				v18 = v35;
				if (v49 <= 0xffffffff) {
					// 0x2b720
					v36 = __asm_rlwinm_(v35, 29, 3, 31);
					v17 = v36;
					if (v36 == 0) {
						// 0x2b720
						// branch -> 0x2b798
						// 0x2b798
						v46 = (int32_t *)v5;
						v51 = *v46;
						v6 = v51;
						*v46 = v51 + 1;
						v47 = v18 - 1;
						// branch -> 0x2b79c
						while (v47 != 0) {
							// 0x2b79c
							v46 = (int32_t *)v5;
							v51 = *v46;
							v6 = v51;
							*v46 = v51 + 1;
							v47--;
							// continue -> 0x2b79c
						}
						// 0x2b7ac
						v68 = v13 + *(int32_t *)v5;
						v56 = v68 - 39;
						v18 = v56;
						if (v68 >= 40) {
							// 0x2b7c0
							v57 = __asm_rlwinm_(v56, 29, 3, 31);
							v17 = v57;
							if (v57 == 0) {
								// 0x2b7c0
								// branch -> 0x2b838
								// 0x2b838
								v70 = (int32_t *)v5;
								v72 = *v70;
								v6 = v72;
								*v70 = v72 - 1;
								v71 = v18 - 1;
								// branch -> 0x2b83c
								while (v71 != 0) {
									// 0x2b83c
									v70 = (int32_t *)v5;
									v72 = *v70;
									v6 = v72;
									*v70 = v72 - 1;
									v71--;
									// continue -> 0x2b83c
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								v58 = (int32_t *)v5;
								*v58 = *v58 - 1;
								v59 = (int32_t *)v5;
								*v59 = *v59 - 1;
								v60 = (int32_t *)v5;
								*v60 = *v60 - 1;
								v61 = (int32_t *)v5;
								*v61 = *v61 - 1;
								v62 = (int32_t *)v5;
								*v62 = *v62 - 1;
								v63 = (int32_t *)v5;
								*v63 = *v63 - 1;
								v64 = (int32_t *)v5;
								*v64 = *v64 - 1;
								v65 = (int32_t *)v5;
								v69 = *v65;
								v6 = v69;
								*v65 = v69 - 1;
								v66 = v17 - 1;
								while (v66 != 0) {
									// 0x2b7cc
									v58 = (int32_t *)v5;
									*v58 = *v58 - 1;
									v59 = (int32_t *)v5;
									*v59 = *v59 - 1;
									v60 = (int32_t *)v5;
									*v60 = *v60 - 1;
									v61 = (int32_t *)v5;
									*v61 = *v61 - 1;
									v62 = (int32_t *)v5;
									*v62 = *v62 - 1;
									v63 = (int32_t *)v5;
									*v63 = *v63 - 1;
									v64 = (int32_t *)v5;
									*v64 = *v64 - 1;
									v65 = (int32_t *)v5;
									v69 = *v65;
									v6 = v69;
									*v65 = v69 - 1;
									v66--;
									// continue -> 0x2b7cc
								}
								// 0x2b830
								if (v18 % 8 != 0) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						v37 = (int32_t *)v5;
						*v37 = *v37 + 1;
						v38 = (int32_t *)v5;
						*v38 = *v38 + 1;
						v39 = (int32_t *)v5;
						*v39 = *v39 + 1;
						v40 = (int32_t *)v5;
						*v40 = *v40 + 1;
						v41 = (int32_t *)v5;
						*v41 = *v41 + 1;
						v42 = (int32_t *)v5;
						*v42 = *v42 + 1;
						v43 = (int32_t *)v5;
						*v43 = *v43 + 1;
						v44 = (int32_t *)v5;
						v50 = *v44;
						v6 = v50;
						*v44 = v50 + 1;
						v45 = v17 - 1;
						while (v45 != 0) {
							// 0x2b72c
							v37 = (int32_t *)v5;
							*v37 = *v37 + 1;
							v38 = (int32_t *)v5;
							*v38 = *v38 + 1;
							v39 = (int32_t *)v5;
							*v39 = *v39 + 1;
							v40 = (int32_t *)v5;
							*v40 = *v40 + 1;
							v41 = (int32_t *)v5;
							*v41 = *v41 + 1;
							v42 = (int32_t *)v5;
							*v42 = *v42 + 1;
							v43 = (int32_t *)v5;
							*v43 = *v43 + 1;
							v44 = (int32_t *)v5;
							v50 = *v44;
							v6 = v50;
							*v44 = v50 + 1;
							v45--;
							// continue -> 0x2b72c
						}
						// 0x2b790
						v55 = v18 % 8;
						if (v55 != 0) {
							// 0x2b798
							v46 = (int32_t *)v5;
							v51 = *v46;
							v6 = v51;
							*v46 = v51 + 1;
							v47 = v55 - 1;
							// branch -> 0x2b79c
							while (v47 != 0) {
								// 0x2b79c
								v46 = (int32_t *)v5;
								v51 = *v46;
								v6 = v51;
								*v46 = v51 + 1;
								v47--;
								// continue -> 0x2b79c
							}
							// 0x2b7ac
							v68 = v13 + *(int32_t *)v5;
							v56 = v68 - 39;
							v18 = v56;
							if (v68 >= 40) {
								// 0x2b7c0
								v57 = __asm_rlwinm_(v56, 29, 3, 31);
								v17 = v57;
								if (v57 == 0) {
									// 0x2b7c0
									// branch -> 0x2b838
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									v58 = (int32_t *)v5;
									*v58 = *v58 - 1;
									v59 = (int32_t *)v5;
									*v59 = *v59 - 1;
									v60 = (int32_t *)v5;
									*v60 = *v60 - 1;
									v61 = (int32_t *)v5;
									*v61 = *v61 - 1;
									v62 = (int32_t *)v5;
									*v62 = *v62 - 1;
									v63 = (int32_t *)v5;
									*v63 = *v63 - 1;
									v64 = (int32_t *)v5;
									*v64 = *v64 - 1;
									v65 = (int32_t *)v5;
									v69 = *v65;
									v6 = v69;
									*v65 = v69 - 1;
									v66 = v17 - 1;
									while (v66 != 0) {
										// 0x2b7cc
										v58 = (int32_t *)v5;
										*v58 = *v58 - 1;
										v59 = (int32_t *)v5;
										*v59 = *v59 - 1;
										v60 = (int32_t *)v5;
										*v60 = *v60 - 1;
										v61 = (int32_t *)v5;
										*v61 = *v61 - 1;
										v62 = (int32_t *)v5;
										*v62 = *v62 - 1;
										v63 = (int32_t *)v5;
										*v63 = *v63 - 1;
										v64 = (int32_t *)v5;
										*v64 = *v64 - 1;
										v65 = (int32_t *)v5;
										v69 = *v65;
										v6 = v69;
										*v65 = v69 - 1;
										v66--;
										// continue -> 0x2b7cc
									}
									// 0x2b830
									if (v18 % 8 != 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x2b7ac
					v68 = v13 + *(int32_t *)v5;
					v56 = v68 - 39;
					v18 = v56;
					if (v68 >= 40) {
						// 0x2b7c0
						v57 = __asm_rlwinm_(v56, 29, 3, 31);
						v17 = v57;
						if (v57 == 0) {
							// 0x2b7c0
							// branch -> 0x2b838
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							v58 = (int32_t *)v5;
							*v58 = *v58 - 1;
							v59 = (int32_t *)v5;
							*v59 = *v59 - 1;
							v60 = (int32_t *)v5;
							*v60 = *v60 - 1;
							v61 = (int32_t *)v5;
							*v61 = *v61 - 1;
							v62 = (int32_t *)v5;
							*v62 = *v62 - 1;
							v63 = (int32_t *)v5;
							*v63 = *v63 - 1;
							v64 = (int32_t *)v5;
							*v64 = *v64 - 1;
							v65 = (int32_t *)v5;
							v69 = *v65;
							v6 = v69;
							*v65 = v69 - 1;
							v66 = v17 - 1;
							while (v66 != 0) {
								// 0x2b7cc
								v58 = (int32_t *)v5;
								*v58 = *v58 - 1;
								v59 = (int32_t *)v5;
								*v59 = *v59 - 1;
								v60 = (int32_t *)v5;
								*v60 = *v60 - 1;
								v61 = (int32_t *)v5;
								*v61 = *v61 - 1;
								v62 = (int32_t *)v5;
								*v62 = *v62 - 1;
								v63 = (int32_t *)v5;
								*v63 = *v63 - 1;
								v64 = (int32_t *)v5;
								*v64 = *v64 - 1;
								v65 = (int32_t *)v5;
								v69 = *v65;
								v6 = v69;
								*v65 = v69 - 1;
								v66--;
								// continue -> 0x2b7cc
							}
							// 0x2b830
							if (v18 % 8 != 0) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x2b7ac
				v68 = v13 + *(int32_t *)v5;
				v56 = v68 - 39;
				if (v68 >= 40) {
					// 0x2b7c0
					v57 = __asm_rlwinm_(v56, 29, 3, 31);
					if (v57 == 0) {
						// 0x2b7c0
						// branch -> 0x2b838
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						v58 = (int32_t *)v5;
						*v58 = *v58 - 1;
						v59 = (int32_t *)v5;
						*v59 = *v59 - 1;
						v60 = (int32_t *)v5;
						*v60 = *v60 - 1;
						v61 = (int32_t *)v5;
						*v61 = *v61 - 1;
						v62 = (int32_t *)v5;
						*v62 = *v62 - 1;
						v63 = (int32_t *)v5;
						*v63 = *v63 - 1;
						v64 = (int32_t *)v5;
						*v64 = *v64 - 1;
						v65 = (int32_t *)v5;
						v69 = *v65;
						v6 = v69;
						*v65 = v69 - 1;
						v66 = v57 - 1;
						while (v66 != 0) {
							// 0x2b7cc
							v58 = (int32_t *)v5;
							*v58 = *v58 - 1;
							v59 = (int32_t *)v5;
							*v59 = *v59 - 1;
							v60 = (int32_t *)v5;
							*v60 = *v60 - 1;
							v61 = (int32_t *)v5;
							*v61 = *v61 - 1;
							v62 = (int32_t *)v5;
							*v62 = *v62 - 1;
							v63 = (int32_t *)v5;
							*v63 = *v63 - 1;
							v64 = (int32_t *)v5;
							*v64 = *v64 - 1;
							v65 = (int32_t *)v5;
							v69 = *v65;
							v6 = v69;
							*v65 = v69 - 1;
							v66--;
							// continue -> 0x2b7cc
						}
						// 0x2b830
						if (v56 % 8 != 0) {
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				int32_t *v142 = (int32_t *)v6; // 0x2b5c8
				*v142 = *v142 + 1;
				int32_t *v143 = (int32_t *)v6; // 0x2b5d4
				*v143 = *v143 + 1;
				int32_t *v144 = (int32_t *)v6; // 0x2b5e0
				*v144 = *v144 + 1;
				int32_t *v145 = (int32_t *)v6; // 0x2b5ec
				*v145 = *v145 + 1;
				int32_t *v146 = (int32_t *)v6; // 0x2b5f8
				*v146 = *v146 + 1;
				int32_t *v147 = (int32_t *)v6; // 0x2b604
				*v147 = *v147 + 1;
				int32_t *v148 = (int32_t *)v6; // 0x2b610
				*v148 = *v148 + 1;
				int32_t *v149 = (int32_t *)v6; // 0x2b61c
				*v149 = *v149 + 1;
				int32_t v150 = v52 - 1; // 0x2b628
				while (v150 != 0) {
					// 0x2b5c8
					v142 = (int32_t *)v6;
					*v142 = *v142 + 1;
					v143 = (int32_t *)v6;
					*v143 = *v143 + 1;
					v144 = (int32_t *)v6;
					*v144 = *v144 + 1;
					v145 = (int32_t *)v6;
					*v145 = *v145 + 1;
					v146 = (int32_t *)v6;
					*v146 = *v146 + 1;
					v147 = (int32_t *)v6;
					*v147 = *v147 + 1;
					v148 = (int32_t *)v6;
					*v148 = *v148 + 1;
					v149 = (int32_t *)v6;
					*v149 = *v149 + 1;
					v150--;
					// continue -> 0x2b5c8
				}
				int32_t v151 = v16 % 8; // 0x2b62c
				if (v151 != 0) {
					// 0x2b634
					v53 = (int32_t *)v6;
					*v53 = *v53 + 1;
					v54 = v151 - 1;
					// branch -> 0x2b638
					while (v54 != 0) {
						// 0x2b638
						v53 = (int32_t *)v6;
						*v53 = *v53 + 1;
						v54--;
						// continue -> 0x2b638
					}
					// 0x2b648
					v48 = v13 + *(int32_t *)v6;
					v19 = v48 - 39;
					v16 = v19;
					if (v48 >= 40) {
						// 0x2b65c
						v20 = __asm_rlwinm_(v19, 29, 3, 31);
						v17 = v20;
						if (v20 == 0) {
							// 0x2b65c
							// branch -> 0x2b6d4
							// 0x2b6d4
							v31 = (int32_t *)v6;
							*v31 = *v31 - 1;
							v32 = v16 - 1;
							// branch -> 0x2b6d8
							while (v32 != 0) {
								// 0x2b6d8
								v31 = (int32_t *)v6;
								*v31 = *v31 - 1;
								v32--;
								// continue -> 0x2b6d8
							}
							// 0x2b6e8
							v33 = (int32_t *)v3;
							*v33 = *(int32_t *)v6 + *v33;
							v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
							*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
							v67 = *(int32_t *)v2;
							v13 = v67;
							v49 = *(int32_t *)v5 + v67;
							v35 = -v49;
							v18 = v35;
							if (v49 <= 0xffffffff) {
								// 0x2b720
								v36 = __asm_rlwinm_(v35, 29, 3, 31);
								v17 = v36;
								if (v36 == 0) {
									// 0x2b720
									// branch -> 0x2b798
									// 0x2b798
									v46 = (int32_t *)v5;
									v51 = *v46;
									v6 = v51;
									*v46 = v51 + 1;
									v47 = v18 - 1;
									// branch -> 0x2b79c
									while (v47 != 0) {
										// 0x2b79c
										v46 = (int32_t *)v5;
										v51 = *v46;
										v6 = v51;
										*v46 = v51 + 1;
										v47--;
										// continue -> 0x2b79c
									}
									// 0x2b7ac
									v68 = v13 + *(int32_t *)v5;
									v56 = v68 - 39;
									v18 = v56;
									if (v68 >= 40) {
										// 0x2b7c0
										v57 = __asm_rlwinm_(v56, 29, 3, 31);
										v17 = v57;
										if (v57 == 0) {
											// 0x2b7c0
											// branch -> 0x2b838
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v58 = (int32_t *)v5;
											*v58 = *v58 - 1;
											v59 = (int32_t *)v5;
											*v59 = *v59 - 1;
											v60 = (int32_t *)v5;
											*v60 = *v60 - 1;
											v61 = (int32_t *)v5;
											*v61 = *v61 - 1;
											v62 = (int32_t *)v5;
											*v62 = *v62 - 1;
											v63 = (int32_t *)v5;
											*v63 = *v63 - 1;
											v64 = (int32_t *)v5;
											*v64 = *v64 - 1;
											v65 = (int32_t *)v5;
											v69 = *v65;
											v6 = v69;
											*v65 = v69 - 1;
											v66 = v17 - 1;
											while (v66 != 0) {
												// 0x2b7cc
												v58 = (int32_t *)v5;
												*v58 = *v58 - 1;
												v59 = (int32_t *)v5;
												*v59 = *v59 - 1;
												v60 = (int32_t *)v5;
												*v60 = *v60 - 1;
												v61 = (int32_t *)v5;
												*v61 = *v61 - 1;
												v62 = (int32_t *)v5;
												*v62 = *v62 - 1;
												v63 = (int32_t *)v5;
												*v63 = *v63 - 1;
												v64 = (int32_t *)v5;
												*v64 = *v64 - 1;
												v65 = (int32_t *)v5;
												v69 = *v65;
												v6 = v69;
												*v65 = v69 - 1;
												v66--;
												// continue -> 0x2b7cc
											}
											// 0x2b830
											if (v18 % 8 != 0) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									v37 = (int32_t *)v5;
									*v37 = *v37 + 1;
									v38 = (int32_t *)v5;
									*v38 = *v38 + 1;
									v39 = (int32_t *)v5;
									*v39 = *v39 + 1;
									v40 = (int32_t *)v5;
									*v40 = *v40 + 1;
									v41 = (int32_t *)v5;
									*v41 = *v41 + 1;
									v42 = (int32_t *)v5;
									*v42 = *v42 + 1;
									v43 = (int32_t *)v5;
									*v43 = *v43 + 1;
									v44 = (int32_t *)v5;
									v50 = *v44;
									v6 = v50;
									*v44 = v50 + 1;
									v45 = v17 - 1;
									while (v45 != 0) {
										// 0x2b72c
										v37 = (int32_t *)v5;
										*v37 = *v37 + 1;
										v38 = (int32_t *)v5;
										*v38 = *v38 + 1;
										v39 = (int32_t *)v5;
										*v39 = *v39 + 1;
										v40 = (int32_t *)v5;
										*v40 = *v40 + 1;
										v41 = (int32_t *)v5;
										*v41 = *v41 + 1;
										v42 = (int32_t *)v5;
										*v42 = *v42 + 1;
										v43 = (int32_t *)v5;
										*v43 = *v43 + 1;
										v44 = (int32_t *)v5;
										v50 = *v44;
										v6 = v50;
										*v44 = v50 + 1;
										v45--;
										// continue -> 0x2b72c
									}
									// 0x2b790
									v55 = v18 % 8;
									if (v55 != 0) {
										// 0x2b798
										v46 = (int32_t *)v5;
										v51 = *v46;
										v6 = v51;
										*v46 = v51 + 1;
										v47 = v55 - 1;
										// branch -> 0x2b79c
										while (v47 != 0) {
											// 0x2b79c
											v46 = (int32_t *)v5;
											v51 = *v46;
											v6 = v51;
											*v46 = v51 + 1;
											v47--;
											// continue -> 0x2b79c
										}
										// 0x2b7ac
										v68 = v13 + *(int32_t *)v5;
										v56 = v68 - 39;
										v18 = v56;
										if (v68 >= 40) {
											// 0x2b7c0
											v57 = __asm_rlwinm_(v56, 29, 3, 31);
											v17 = v57;
											if (v57 == 0) {
												// 0x2b7c0
												// branch -> 0x2b838
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												v58 = (int32_t *)v5;
												*v58 = *v58 - 1;
												v59 = (int32_t *)v5;
												*v59 = *v59 - 1;
												v60 = (int32_t *)v5;
												*v60 = *v60 - 1;
												v61 = (int32_t *)v5;
												*v61 = *v61 - 1;
												v62 = (int32_t *)v5;
												*v62 = *v62 - 1;
												v63 = (int32_t *)v5;
												*v63 = *v63 - 1;
												v64 = (int32_t *)v5;
												*v64 = *v64 - 1;
												v65 = (int32_t *)v5;
												v69 = *v65;
												v6 = v69;
												*v65 = v69 - 1;
												v66 = v17 - 1;
												while (v66 != 0) {
													// 0x2b7cc
													v58 = (int32_t *)v5;
													*v58 = *v58 - 1;
													v59 = (int32_t *)v5;
													*v59 = *v59 - 1;
													v60 = (int32_t *)v5;
													*v60 = *v60 - 1;
													v61 = (int32_t *)v5;
													*v61 = *v61 - 1;
													v62 = (int32_t *)v5;
													*v62 = *v62 - 1;
													v63 = (int32_t *)v5;
													*v63 = *v63 - 1;
													v64 = (int32_t *)v5;
													*v64 = *v64 - 1;
													v65 = (int32_t *)v5;
													v69 = *v65;
													v6 = v69;
													*v65 = v69 - 1;
													v66--;
													// continue -> 0x2b7cc
												}
												// 0x2b830
												if (v18 % 8 != 0) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x2b7ac
								v68 = v13 + *(int32_t *)v5;
								v56 = v68 - 39;
								v18 = v56;
								if (v68 >= 40) {
									// 0x2b7c0
									v57 = __asm_rlwinm_(v56, 29, 3, 31);
									v17 = v57;
									if (v57 == 0) {
										// 0x2b7c0
										// branch -> 0x2b838
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v58 = (int32_t *)v5;
										*v58 = *v58 - 1;
										v59 = (int32_t *)v5;
										*v59 = *v59 - 1;
										v60 = (int32_t *)v5;
										*v60 = *v60 - 1;
										v61 = (int32_t *)v5;
										*v61 = *v61 - 1;
										v62 = (int32_t *)v5;
										*v62 = *v62 - 1;
										v63 = (int32_t *)v5;
										*v63 = *v63 - 1;
										v64 = (int32_t *)v5;
										*v64 = *v64 - 1;
										v65 = (int32_t *)v5;
										v69 = *v65;
										v6 = v69;
										*v65 = v69 - 1;
										v66 = v17 - 1;
										while (v66 != 0) {
											// 0x2b7cc
											v58 = (int32_t *)v5;
											*v58 = *v58 - 1;
											v59 = (int32_t *)v5;
											*v59 = *v59 - 1;
											v60 = (int32_t *)v5;
											*v60 = *v60 - 1;
											v61 = (int32_t *)v5;
											*v61 = *v61 - 1;
											v62 = (int32_t *)v5;
											*v62 = *v62 - 1;
											v63 = (int32_t *)v5;
											*v63 = *v63 - 1;
											v64 = (int32_t *)v5;
											*v64 = *v64 - 1;
											v65 = (int32_t *)v5;
											v69 = *v65;
											v6 = v69;
											*v65 = v69 - 1;
											v66--;
											// continue -> 0x2b7cc
										}
										// 0x2b830
										if (v18 % 8 != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x2b7ac
							v68 = v13 + *(int32_t *)v5;
							v56 = v68 - 39;
							v18 = v56;
							if (v68 >= 40) {
								// 0x2b7c0
								v57 = __asm_rlwinm_(v56, 29, 3, 31);
								v17 = v57;
								if (v57 == 0) {
									// 0x2b7c0
									// branch -> 0x2b838
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									v58 = (int32_t *)v5;
									*v58 = *v58 - 1;
									v59 = (int32_t *)v5;
									*v59 = *v59 - 1;
									v60 = (int32_t *)v5;
									*v60 = *v60 - 1;
									v61 = (int32_t *)v5;
									*v61 = *v61 - 1;
									v62 = (int32_t *)v5;
									*v62 = *v62 - 1;
									v63 = (int32_t *)v5;
									*v63 = *v63 - 1;
									v64 = (int32_t *)v5;
									*v64 = *v64 - 1;
									v65 = (int32_t *)v5;
									v69 = *v65;
									v6 = v69;
									*v65 = v69 - 1;
									v66 = v17 - 1;
									while (v66 != 0) {
										// 0x2b7cc
										v58 = (int32_t *)v5;
										*v58 = *v58 - 1;
										v59 = (int32_t *)v5;
										*v59 = *v59 - 1;
										v60 = (int32_t *)v5;
										*v60 = *v60 - 1;
										v61 = (int32_t *)v5;
										*v61 = *v61 - 1;
										v62 = (int32_t *)v5;
										*v62 = *v62 - 1;
										v63 = (int32_t *)v5;
										*v63 = *v63 - 1;
										v64 = (int32_t *)v5;
										*v64 = *v64 - 1;
										v65 = (int32_t *)v5;
										v69 = *v65;
										v6 = v69;
										*v65 = v69 - 1;
										v66--;
										// continue -> 0x2b7cc
									}
									// 0x2b830
									if (v18 % 8 != 0) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							v21 = (int32_t *)v6;
							*v21 = *v21 - 1;
							v22 = (int32_t *)v6;
							*v22 = *v22 - 1;
							v23 = (int32_t *)v6;
							*v23 = *v23 - 1;
							v24 = (int32_t *)v6;
							*v24 = *v24 - 1;
							v25 = (int32_t *)v6;
							*v25 = *v25 - 1;
							v26 = (int32_t *)v6;
							*v26 = *v26 - 1;
							v27 = (int32_t *)v6;
							*v27 = *v27 - 1;
							v28 = (int32_t *)v6;
							*v28 = *v28 - 1;
							v29 = v17 - 1;
							while (v29 != 0) {
								// 0x2b668
								v21 = (int32_t *)v6;
								*v21 = *v21 - 1;
								v22 = (int32_t *)v6;
								*v22 = *v22 - 1;
								v23 = (int32_t *)v6;
								*v23 = *v23 - 1;
								v24 = (int32_t *)v6;
								*v24 = *v24 - 1;
								v25 = (int32_t *)v6;
								*v25 = *v25 - 1;
								v26 = (int32_t *)v6;
								*v26 = *v26 - 1;
								v27 = (int32_t *)v6;
								*v27 = *v27 - 1;
								v28 = (int32_t *)v6;
								*v28 = *v28 - 1;
								v29--;
								// continue -> 0x2b668
							}
							// 0x2b6cc
							v30 = v16 % 8;
							if (v30 != 0) {
								// 0x2b6d4
								v31 = (int32_t *)v6;
								*v31 = *v31 - 1;
								v32 = v30 - 1;
								// branch -> 0x2b6d8
								while (v32 != 0) {
									// 0x2b6d8
									v31 = (int32_t *)v6;
									*v31 = *v31 - 1;
									v32--;
									// continue -> 0x2b6d8
								}
								// 0x2b6e8
								v33 = (int32_t *)v3;
								*v33 = *(int32_t *)v6 + *v33;
								v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
								*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
								v67 = *(int32_t *)v2;
								v13 = v67;
								v49 = *(int32_t *)v5 + v67;
								v35 = -v49;
								v18 = v35;
								if (v49 <= 0xffffffff) {
									// 0x2b720
									v36 = __asm_rlwinm_(v35, 29, 3, 31);
									v17 = v36;
									if (v36 == 0) {
										// 0x2b720
										// branch -> 0x2b798
										// 0x2b798
										v46 = (int32_t *)v5;
										v51 = *v46;
										v6 = v51;
										*v46 = v51 + 1;
										v47 = v18 - 1;
										// branch -> 0x2b79c
										while (v47 != 0) {
											// 0x2b79c
											v46 = (int32_t *)v5;
											v51 = *v46;
											v6 = v51;
											*v46 = v51 + 1;
											v47--;
											// continue -> 0x2b79c
										}
										// 0x2b7ac
										v68 = v13 + *(int32_t *)v5;
										v56 = v68 - 39;
										v18 = v56;
										if (v68 >= 40) {
											// 0x2b7c0
											v57 = __asm_rlwinm_(v56, 29, 3, 31);
											v17 = v57;
											if (v57 == 0) {
												// 0x2b7c0
												// branch -> 0x2b838
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												v58 = (int32_t *)v5;
												*v58 = *v58 - 1;
												v59 = (int32_t *)v5;
												*v59 = *v59 - 1;
												v60 = (int32_t *)v5;
												*v60 = *v60 - 1;
												v61 = (int32_t *)v5;
												*v61 = *v61 - 1;
												v62 = (int32_t *)v5;
												*v62 = *v62 - 1;
												v63 = (int32_t *)v5;
												*v63 = *v63 - 1;
												v64 = (int32_t *)v5;
												*v64 = *v64 - 1;
												v65 = (int32_t *)v5;
												v69 = *v65;
												v6 = v69;
												*v65 = v69 - 1;
												v66 = v17 - 1;
												while (v66 != 0) {
													// 0x2b7cc
													v58 = (int32_t *)v5;
													*v58 = *v58 - 1;
													v59 = (int32_t *)v5;
													*v59 = *v59 - 1;
													v60 = (int32_t *)v5;
													*v60 = *v60 - 1;
													v61 = (int32_t *)v5;
													*v61 = *v61 - 1;
													v62 = (int32_t *)v5;
													*v62 = *v62 - 1;
													v63 = (int32_t *)v5;
													*v63 = *v63 - 1;
													v64 = (int32_t *)v5;
													*v64 = *v64 - 1;
													v65 = (int32_t *)v5;
													v69 = *v65;
													v6 = v69;
													*v65 = v69 - 1;
													v66--;
													// continue -> 0x2b7cc
												}
												// 0x2b830
												if (v18 % 8 != 0) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v37 = (int32_t *)v5;
										*v37 = *v37 + 1;
										v38 = (int32_t *)v5;
										*v38 = *v38 + 1;
										v39 = (int32_t *)v5;
										*v39 = *v39 + 1;
										v40 = (int32_t *)v5;
										*v40 = *v40 + 1;
										v41 = (int32_t *)v5;
										*v41 = *v41 + 1;
										v42 = (int32_t *)v5;
										*v42 = *v42 + 1;
										v43 = (int32_t *)v5;
										*v43 = *v43 + 1;
										v44 = (int32_t *)v5;
										v50 = *v44;
										v6 = v50;
										*v44 = v50 + 1;
										v45 = v17 - 1;
										while (v45 != 0) {
											// 0x2b72c
											v37 = (int32_t *)v5;
											*v37 = *v37 + 1;
											v38 = (int32_t *)v5;
											*v38 = *v38 + 1;
											v39 = (int32_t *)v5;
											*v39 = *v39 + 1;
											v40 = (int32_t *)v5;
											*v40 = *v40 + 1;
											v41 = (int32_t *)v5;
											*v41 = *v41 + 1;
											v42 = (int32_t *)v5;
											*v42 = *v42 + 1;
											v43 = (int32_t *)v5;
											*v43 = *v43 + 1;
											v44 = (int32_t *)v5;
											v50 = *v44;
											v6 = v50;
											*v44 = v50 + 1;
											v45--;
											// continue -> 0x2b72c
										}
										// 0x2b790
										v55 = v18 % 8;
										if (v55 != 0) {
											// 0x2b798
											v46 = (int32_t *)v5;
											v51 = *v46;
											v6 = v51;
											*v46 = v51 + 1;
											v47 = v55 - 1;
											// branch -> 0x2b79c
											while (v47 != 0) {
												// 0x2b79c
												v46 = (int32_t *)v5;
												v51 = *v46;
												v6 = v51;
												*v46 = v51 + 1;
												v47--;
												// continue -> 0x2b79c
											}
											// 0x2b7ac
											v68 = v13 + *(int32_t *)v5;
											v56 = v68 - 39;
											v18 = v56;
											if (v68 >= 40) {
												// 0x2b7c0
												v57 = __asm_rlwinm_(v56, 29, 3, 31);
												v17 = v57;
												if (v57 == 0) {
													// 0x2b7c0
													// branch -> 0x2b838
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													v58 = (int32_t *)v5;
													*v58 = *v58 - 1;
													v59 = (int32_t *)v5;
													*v59 = *v59 - 1;
													v60 = (int32_t *)v5;
													*v60 = *v60 - 1;
													v61 = (int32_t *)v5;
													*v61 = *v61 - 1;
													v62 = (int32_t *)v5;
													*v62 = *v62 - 1;
													v63 = (int32_t *)v5;
													*v63 = *v63 - 1;
													v64 = (int32_t *)v5;
													*v64 = *v64 - 1;
													v65 = (int32_t *)v5;
													v69 = *v65;
													v6 = v69;
													*v65 = v69 - 1;
													v66 = v17 - 1;
													while (v66 != 0) {
														// 0x2b7cc
														v58 = (int32_t *)v5;
														*v58 = *v58 - 1;
														v59 = (int32_t *)v5;
														*v59 = *v59 - 1;
														v60 = (int32_t *)v5;
														*v60 = *v60 - 1;
														v61 = (int32_t *)v5;
														*v61 = *v61 - 1;
														v62 = (int32_t *)v5;
														*v62 = *v62 - 1;
														v63 = (int32_t *)v5;
														*v63 = *v63 - 1;
														v64 = (int32_t *)v5;
														*v64 = *v64 - 1;
														v65 = (int32_t *)v5;
														v69 = *v65;
														v6 = v69;
														*v65 = v69 - 1;
														v66--;
														// continue -> 0x2b7cc
													}
													// 0x2b830
													if (v18 % 8 != 0) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x2b7ac
									v68 = v13 + *(int32_t *)v5;
									v56 = v68 - 39;
									v18 = v56;
									if (v68 >= 40) {
										// 0x2b7c0
										v57 = __asm_rlwinm_(v56, 29, 3, 31);
										v17 = v57;
										if (v57 == 0) {
											// 0x2b7c0
											// branch -> 0x2b838
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v58 = (int32_t *)v5;
											*v58 = *v58 - 1;
											v59 = (int32_t *)v5;
											*v59 = *v59 - 1;
											v60 = (int32_t *)v5;
											*v60 = *v60 - 1;
											v61 = (int32_t *)v5;
											*v61 = *v61 - 1;
											v62 = (int32_t *)v5;
											*v62 = *v62 - 1;
											v63 = (int32_t *)v5;
											*v63 = *v63 - 1;
											v64 = (int32_t *)v5;
											*v64 = *v64 - 1;
											v65 = (int32_t *)v5;
											v69 = *v65;
											v6 = v69;
											*v65 = v69 - 1;
											v66 = v17 - 1;
											while (v66 != 0) {
												// 0x2b7cc
												v58 = (int32_t *)v5;
												*v58 = *v58 - 1;
												v59 = (int32_t *)v5;
												*v59 = *v59 - 1;
												v60 = (int32_t *)v5;
												*v60 = *v60 - 1;
												v61 = (int32_t *)v5;
												*v61 = *v61 - 1;
												v62 = (int32_t *)v5;
												*v62 = *v62 - 1;
												v63 = (int32_t *)v5;
												*v63 = *v63 - 1;
												v64 = (int32_t *)v5;
												*v64 = *v64 - 1;
												v65 = (int32_t *)v5;
												v69 = *v65;
												v6 = v69;
												*v65 = v69 - 1;
												v66--;
												// continue -> 0x2b7cc
											}
											// 0x2b830
											if (v18 % 8 != 0) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x2b7ac
								v68 = v13 + *(int32_t *)v5;
								v56 = v68 - 39;
								v18 = v56;
								if (v68 >= 40) {
									// 0x2b7c0
									v57 = __asm_rlwinm_(v56, 29, 3, 31);
									v17 = v57;
									if (v57 == 0) {
										// 0x2b7c0
										// branch -> 0x2b838
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v58 = (int32_t *)v5;
										*v58 = *v58 - 1;
										v59 = (int32_t *)v5;
										*v59 = *v59 - 1;
										v60 = (int32_t *)v5;
										*v60 = *v60 - 1;
										v61 = (int32_t *)v5;
										*v61 = *v61 - 1;
										v62 = (int32_t *)v5;
										*v62 = *v62 - 1;
										v63 = (int32_t *)v5;
										*v63 = *v63 - 1;
										v64 = (int32_t *)v5;
										*v64 = *v64 - 1;
										v65 = (int32_t *)v5;
										v69 = *v65;
										v6 = v69;
										*v65 = v69 - 1;
										v66 = v17 - 1;
										while (v66 != 0) {
											// 0x2b7cc
											v58 = (int32_t *)v5;
											*v58 = *v58 - 1;
											v59 = (int32_t *)v5;
											*v59 = *v59 - 1;
											v60 = (int32_t *)v5;
											*v60 = *v60 - 1;
											v61 = (int32_t *)v5;
											*v61 = *v61 - 1;
											v62 = (int32_t *)v5;
											*v62 = *v62 - 1;
											v63 = (int32_t *)v5;
											*v63 = *v63 - 1;
											v64 = (int32_t *)v5;
											*v64 = *v64 - 1;
											v65 = (int32_t *)v5;
											v69 = *v65;
											v6 = v69;
											*v65 = v69 - 1;
											v66--;
											// continue -> 0x2b7cc
										}
										// 0x2b830
										if (v18 % 8 != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x2b6e8
						v33 = (int32_t *)v3;
						*v33 = *(int32_t *)v6 + *v33;
						v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
						*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
						v67 = *(int32_t *)v2;
						v13 = v67;
						v49 = *(int32_t *)v5 + v67;
						v35 = -v49;
						v18 = v35;
						if (v49 <= 0xffffffff) {
							// 0x2b720
							v36 = __asm_rlwinm_(v35, 29, 3, 31);
							v17 = v36;
							if (v36 == 0) {
								// 0x2b720
								// branch -> 0x2b798
								// 0x2b798
								v46 = (int32_t *)v5;
								v51 = *v46;
								v6 = v51;
								*v46 = v51 + 1;
								v47 = v18 - 1;
								// branch -> 0x2b79c
								while (v47 != 0) {
									// 0x2b79c
									v46 = (int32_t *)v5;
									v51 = *v46;
									v6 = v51;
									*v46 = v51 + 1;
									v47--;
									// continue -> 0x2b79c
								}
								// 0x2b7ac
								v68 = v13 + *(int32_t *)v5;
								v56 = v68 - 39;
								if (v68 >= 40) {
									// 0x2b7c0
									v57 = __asm_rlwinm_(v56, 29, 3, 31);
									if (v57 == 0) {
										// 0x2b7c0
										// branch -> 0x2b838
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v58 = (int32_t *)v5;
										*v58 = *v58 - 1;
										v59 = (int32_t *)v5;
										*v59 = *v59 - 1;
										v60 = (int32_t *)v5;
										*v60 = *v60 - 1;
										v61 = (int32_t *)v5;
										*v61 = *v61 - 1;
										v62 = (int32_t *)v5;
										*v62 = *v62 - 1;
										v63 = (int32_t *)v5;
										*v63 = *v63 - 1;
										v64 = (int32_t *)v5;
										*v64 = *v64 - 1;
										v65 = (int32_t *)v5;
										v69 = *v65;
										v6 = v69;
										*v65 = v69 - 1;
										v66 = v57 - 1;
										while (v66 != 0) {
											// 0x2b7cc
											v58 = (int32_t *)v5;
											*v58 = *v58 - 1;
											v59 = (int32_t *)v5;
											*v59 = *v59 - 1;
											v60 = (int32_t *)v5;
											*v60 = *v60 - 1;
											v61 = (int32_t *)v5;
											*v61 = *v61 - 1;
											v62 = (int32_t *)v5;
											*v62 = *v62 - 1;
											v63 = (int32_t *)v5;
											*v63 = *v63 - 1;
											v64 = (int32_t *)v5;
											*v64 = *v64 - 1;
											v65 = (int32_t *)v5;
											v69 = *v65;
											v6 = v69;
											*v65 = v69 - 1;
											v66--;
											// continue -> 0x2b7cc
										}
										// 0x2b830
										if (v56 % 8 != 0) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								v37 = (int32_t *)v5;
								*v37 = *v37 + 1;
								v38 = (int32_t *)v5;
								*v38 = *v38 + 1;
								v39 = (int32_t *)v5;
								*v39 = *v39 + 1;
								v40 = (int32_t *)v5;
								*v40 = *v40 + 1;
								v41 = (int32_t *)v5;
								*v41 = *v41 + 1;
								v42 = (int32_t *)v5;
								*v42 = *v42 + 1;
								v43 = (int32_t *)v5;
								*v43 = *v43 + 1;
								v44 = (int32_t *)v5;
								v50 = *v44;
								v6 = v50;
								*v44 = v50 + 1;
								v45 = v17 - 1;
								while (v45 != 0) {
									// 0x2b72c
									v37 = (int32_t *)v5;
									*v37 = *v37 + 1;
									v38 = (int32_t *)v5;
									*v38 = *v38 + 1;
									v39 = (int32_t *)v5;
									*v39 = *v39 + 1;
									v40 = (int32_t *)v5;
									*v40 = *v40 + 1;
									v41 = (int32_t *)v5;
									*v41 = *v41 + 1;
									v42 = (int32_t *)v5;
									*v42 = *v42 + 1;
									v43 = (int32_t *)v5;
									*v43 = *v43 + 1;
									v44 = (int32_t *)v5;
									v50 = *v44;
									v6 = v50;
									*v44 = v50 + 1;
									v45--;
									// continue -> 0x2b72c
								}
								// 0x2b790
								v55 = v18 % 8;
								if (v55 != 0) {
									// 0x2b798
									v46 = (int32_t *)v5;
									v51 = *v46;
									v6 = v51;
									*v46 = v51 + 1;
									v47 = v55 - 1;
									// branch -> 0x2b79c
									while (v47 != 0) {
										// 0x2b79c
										v46 = (int32_t *)v5;
										v51 = *v46;
										v6 = v51;
										*v46 = v51 + 1;
										v47--;
										// continue -> 0x2b79c
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x2b6e8
					v33 = (int32_t *)v3;
					*v33 = *(int32_t *)v6 + *v33;
					v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
					*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
					v67 = *(int32_t *)v2;
					v13 = v67;
					v49 = *(int32_t *)v5 + v67;
					v35 = -v49;
					v18 = v35;
					if (v49 <= 0xffffffff) {
						// 0x2b720
						v36 = __asm_rlwinm_(v35, 29, 3, 31);
						v17 = v36;
						if (v36 == 0) {
							// 0x2b720
							// branch -> 0x2b798
							// 0x2b798
							v46 = (int32_t *)v5;
							v51 = *v46;
							v6 = v51;
							*v46 = v51 + 1;
							v47 = v18 - 1;
							// branch -> 0x2b79c
							while (v47 != 0) {
								// 0x2b79c
								v46 = (int32_t *)v5;
								v51 = *v46;
								v6 = v51;
								*v46 = v51 + 1;
								v47--;
								// continue -> 0x2b79c
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							v37 = (int32_t *)v5;
							*v37 = *v37 + 1;
							v38 = (int32_t *)v5;
							*v38 = *v38 + 1;
							v39 = (int32_t *)v5;
							*v39 = *v39 + 1;
							v40 = (int32_t *)v5;
							*v40 = *v40 + 1;
							v41 = (int32_t *)v5;
							*v41 = *v41 + 1;
							v42 = (int32_t *)v5;
							*v42 = *v42 + 1;
							v43 = (int32_t *)v5;
							*v43 = *v43 + 1;
							v44 = (int32_t *)v5;
							v50 = *v44;
							v6 = v50;
							*v44 = v50 + 1;
							v45 = v17 - 1;
							while (v45 != 0) {
								// 0x2b72c
								v37 = (int32_t *)v5;
								*v37 = *v37 + 1;
								v38 = (int32_t *)v5;
								*v38 = *v38 + 1;
								v39 = (int32_t *)v5;
								*v39 = *v39 + 1;
								v40 = (int32_t *)v5;
								*v40 = *v40 + 1;
								v41 = (int32_t *)v5;
								*v41 = *v41 + 1;
								v42 = (int32_t *)v5;
								*v42 = *v42 + 1;
								v43 = (int32_t *)v5;
								*v43 = *v43 + 1;
								v44 = (int32_t *)v5;
								v50 = *v44;
								v6 = v50;
								*v44 = v50 + 1;
								v45--;
								// continue -> 0x2b72c
							}
							// 0x2b790
							v55 = v18 % 8;
							if (v55 != 0) {
								// 0x2b798
								v46 = (int32_t *)v5;
								v51 = *v46;
								v6 = v51;
								*v46 = v51 + 1;
								v47 = v55 - 1;
								// branch -> 0x2b79c
								while (v47 != 0) {
									// 0x2b79c
									v46 = (int32_t *)v5;
									v51 = *v46;
									v6 = v51;
									*v46 = v51 + 1;
									v47--;
									// continue -> 0x2b79c
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x2b648
			v48 = v13 + *(int32_t *)v6;
			v19 = v48 - 39;
			v16 = v19;
			if (v48 >= 40) {
				// 0x2b65c
				v20 = __asm_rlwinm_(v19, 29, 3, 31);
				v17 = v20;
				if (v20 == 0) {
					// 0x2b65c
					// branch -> 0x2b6d4
					// 0x2b6d4
					v31 = (int32_t *)v6;
					*v31 = *v31 - 1;
					v32 = v16 - 1;
					// branch -> 0x2b6d8
					while (v32 != 0) {
						// 0x2b6d8
						v31 = (int32_t *)v6;
						*v31 = *v31 - 1;
						v32--;
						// continue -> 0x2b6d8
					}
					// 0x2b6e8
					v33 = (int32_t *)v3;
					*v33 = *(int32_t *)v6 + *v33;
					v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
					*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
					v49 = *(int32_t *)v5 + *(int32_t *)v2;
					v35 = -v49;
					v18 = v35;
					if (v49 <= 0xffffffff) {
						// 0x2b720
						v36 = __asm_rlwinm_(v35, 29, 3, 31);
						v17 = v36;
						if (v36 == 0) {
							// 0x2b720
							// branch -> 0x2b798
							// 0x2b798
							v46 = (int32_t *)v5;
							v51 = *v46;
							v6 = v51;
							*v46 = v51 + 1;
							v47 = v18 - 1;
							// branch -> 0x2b79c
							while (v47 != 0) {
								// 0x2b79c
								v46 = (int32_t *)v5;
								v51 = *v46;
								v6 = v51;
								*v46 = v51 + 1;
								v47--;
								// continue -> 0x2b79c
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							v37 = (int32_t *)v5;
							*v37 = *v37 + 1;
							v38 = (int32_t *)v5;
							*v38 = *v38 + 1;
							v39 = (int32_t *)v5;
							*v39 = *v39 + 1;
							v40 = (int32_t *)v5;
							*v40 = *v40 + 1;
							v41 = (int32_t *)v5;
							*v41 = *v41 + 1;
							v42 = (int32_t *)v5;
							*v42 = *v42 + 1;
							v43 = (int32_t *)v5;
							*v43 = *v43 + 1;
							v44 = (int32_t *)v5;
							v50 = *v44;
							v6 = v50;
							*v44 = v50 + 1;
							v45 = v17 - 1;
							while (v45 != 0) {
								// 0x2b72c
								v37 = (int32_t *)v5;
								*v37 = *v37 + 1;
								v38 = (int32_t *)v5;
								*v38 = *v38 + 1;
								v39 = (int32_t *)v5;
								*v39 = *v39 + 1;
								v40 = (int32_t *)v5;
								*v40 = *v40 + 1;
								v41 = (int32_t *)v5;
								*v41 = *v41 + 1;
								v42 = (int32_t *)v5;
								*v42 = *v42 + 1;
								v43 = (int32_t *)v5;
								*v43 = *v43 + 1;
								v44 = (int32_t *)v5;
								v50 = *v44;
								v6 = v50;
								*v44 = v50 + 1;
								v45--;
								// continue -> 0x2b72c
							}
							// 0x2b790
							v55 = v18 % 8;
							if (v55 != 0) {
								// 0x2b798
								v46 = (int32_t *)v5;
								v51 = *v46;
								v6 = v51;
								*v46 = v51 + 1;
								v47 = v55 - 1;
								// branch -> 0x2b79c
								while (v47 != 0) {
									// 0x2b79c
									v46 = (int32_t *)v5;
									v51 = *v46;
									v6 = v51;
									*v46 = v51 + 1;
									v47--;
									// continue -> 0x2b79c
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					v21 = (int32_t *)v6;
					*v21 = *v21 - 1;
					v22 = (int32_t *)v6;
					*v22 = *v22 - 1;
					v23 = (int32_t *)v6;
					*v23 = *v23 - 1;
					v24 = (int32_t *)v6;
					*v24 = *v24 - 1;
					v25 = (int32_t *)v6;
					*v25 = *v25 - 1;
					v26 = (int32_t *)v6;
					*v26 = *v26 - 1;
					v27 = (int32_t *)v6;
					*v27 = *v27 - 1;
					v28 = (int32_t *)v6;
					*v28 = *v28 - 1;
					v29 = v17 - 1;
					while (v29 != 0) {
						// 0x2b668
						v21 = (int32_t *)v6;
						*v21 = *v21 - 1;
						v22 = (int32_t *)v6;
						*v22 = *v22 - 1;
						v23 = (int32_t *)v6;
						*v23 = *v23 - 1;
						v24 = (int32_t *)v6;
						*v24 = *v24 - 1;
						v25 = (int32_t *)v6;
						*v25 = *v25 - 1;
						v26 = (int32_t *)v6;
						*v26 = *v26 - 1;
						v27 = (int32_t *)v6;
						*v27 = *v27 - 1;
						v28 = (int32_t *)v6;
						*v28 = *v28 - 1;
						v29--;
						// continue -> 0x2b668
					}
					// 0x2b6cc
					v30 = v16 % 8;
					if (v30 != 0) {
						// 0x2b6d4
						v31 = (int32_t *)v6;
						*v31 = *v31 - 1;
						v32 = v30 - 1;
						// branch -> 0x2b6d8
						while (v32 != 0) {
							// 0x2b6d8
							v31 = (int32_t *)v6;
							*v31 = *v31 - 1;
							v32--;
							// continue -> 0x2b6d8
						}
						// 0x2b6e8
						v33 = (int32_t *)v3;
						*v33 = *(int32_t *)v6 + *v33;
						v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
						*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
						v49 = *(int32_t *)v5 + *(int32_t *)v2;
						v35 = -v49;
						v18 = v35;
						if (v49 <= 0xffffffff) {
							// 0x2b720
							v36 = __asm_rlwinm_(v35, 29, 3, 31);
							v17 = v36;
							if (v36 == 0) {
								// 0x2b720
								// branch -> 0x2b798
								// 0x2b798
								v46 = (int32_t *)v5;
								v51 = *v46;
								v6 = v51;
								*v46 = v51 + 1;
								v47 = v18 - 1;
								// branch -> 0x2b79c
								while (v47 != 0) {
									// 0x2b79c
									v46 = (int32_t *)v5;
									v51 = *v46;
									v6 = v51;
									*v46 = v51 + 1;
									v47--;
									// continue -> 0x2b79c
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								v37 = (int32_t *)v5;
								*v37 = *v37 + 1;
								v38 = (int32_t *)v5;
								*v38 = *v38 + 1;
								v39 = (int32_t *)v5;
								*v39 = *v39 + 1;
								v40 = (int32_t *)v5;
								*v40 = *v40 + 1;
								v41 = (int32_t *)v5;
								*v41 = *v41 + 1;
								v42 = (int32_t *)v5;
								*v42 = *v42 + 1;
								v43 = (int32_t *)v5;
								*v43 = *v43 + 1;
								v44 = (int32_t *)v5;
								v50 = *v44;
								v6 = v50;
								*v44 = v50 + 1;
								v45 = v17 - 1;
								while (v45 != 0) {
									// 0x2b72c
									v37 = (int32_t *)v5;
									*v37 = *v37 + 1;
									v38 = (int32_t *)v5;
									*v38 = *v38 + 1;
									v39 = (int32_t *)v5;
									*v39 = *v39 + 1;
									v40 = (int32_t *)v5;
									*v40 = *v40 + 1;
									v41 = (int32_t *)v5;
									*v41 = *v41 + 1;
									v42 = (int32_t *)v5;
									*v42 = *v42 + 1;
									v43 = (int32_t *)v5;
									*v43 = *v43 + 1;
									v44 = (int32_t *)v5;
									v50 = *v44;
									v6 = v50;
									*v44 = v50 + 1;
									v45--;
									// continue -> 0x2b72c
								}
								// 0x2b790
								v55 = v18 % 8;
								if (v55 != 0) {
									// 0x2b798
									v46 = (int32_t *)v5;
									v51 = *v46;
									v6 = v51;
									*v46 = v51 + 1;
									v47 = v55 - 1;
									// branch -> 0x2b79c
									while (v47 != 0) {
										// 0x2b79c
										v46 = (int32_t *)v5;
										v51 = *v46;
										v6 = v51;
										*v46 = v51 + 1;
										v47--;
										// continue -> 0x2b79c
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0x2b6e8
				v33 = (int32_t *)v3;
				*v33 = *(int32_t *)v6 + *v33;
				v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
				*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
				v49 = *(int32_t *)v5 + *(int32_t *)v2;
				v35 = -v49;
				v18 = v35;
				if (v49 <= 0xffffffff) {
					// 0x2b720
					v36 = __asm_rlwinm_(v35, 29, 3, 31);
					v17 = v36;
					if (v36 == 0) {
						// 0x2b720
						// branch -> 0x2b798
						// 0x2b798
						v46 = (int32_t *)v5;
						v51 = *v46;
						v6 = v51;
						*v46 = v51 + 1;
						v47 = v18 - 1;
						// branch -> 0x2b79c
						while (v47 != 0) {
							// 0x2b79c
							v46 = (int32_t *)v5;
							v51 = *v46;
							v6 = v51;
							*v46 = v51 + 1;
							v47--;
							// continue -> 0x2b79c
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						v37 = (int32_t *)v5;
						*v37 = *v37 + 1;
						v38 = (int32_t *)v5;
						*v38 = *v38 + 1;
						v39 = (int32_t *)v5;
						*v39 = *v39 + 1;
						v40 = (int32_t *)v5;
						*v40 = *v40 + 1;
						v41 = (int32_t *)v5;
						*v41 = *v41 + 1;
						v42 = (int32_t *)v5;
						*v42 = *v42 + 1;
						v43 = (int32_t *)v5;
						*v43 = *v43 + 1;
						v44 = (int32_t *)v5;
						v50 = *v44;
						v6 = v50;
						*v44 = v50 + 1;
						v45 = v17 - 1;
						while (v45 != 0) {
							// 0x2b72c
							v37 = (int32_t *)v5;
							*v37 = *v37 + 1;
							v38 = (int32_t *)v5;
							*v38 = *v38 + 1;
							v39 = (int32_t *)v5;
							*v39 = *v39 + 1;
							v40 = (int32_t *)v5;
							*v40 = *v40 + 1;
							v41 = (int32_t *)v5;
							*v41 = *v41 + 1;
							v42 = (int32_t *)v5;
							*v42 = *v42 + 1;
							v43 = (int32_t *)v5;
							*v43 = *v43 + 1;
							v44 = (int32_t *)v5;
							v50 = *v44;
							v6 = v50;
							*v44 = v50 + 1;
							v45--;
							// continue -> 0x2b72c
						}
						// 0x2b790
						v55 = v18 % 8;
						if (v55 != 0) {
							// 0x2b798
							v46 = (int32_t *)v5;
							v51 = *v46;
							v6 = v51;
							*v46 = v51 + 1;
							v47 = v55 - 1;
							// branch -> 0x2b79c
							while (v47 != 0) {
								// 0x2b79c
								v46 = (int32_t *)v5;
								v51 = *v46;
								v6 = v51;
								*v46 = v51 + 1;
								v47--;
								// continue -> 0x2b79c
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x2b6e8
			v33 = (int32_t *)v3;
			*v33 = *(int32_t *)v6 + *v33;
			v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
			*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
			v67 = *(int32_t *)v2;
			v13 = v67;
			v49 = *(int32_t *)v5 + v67;
			v35 = -v49;
			v18 = v35;
			if (v49 <= 0xffffffff) {
				// 0x2b720
				v36 = __asm_rlwinm_(v35, 29, 3, 31);
				v17 = v36;
				if (v36 == 0) {
					// 0x2b720
					// branch -> 0x2b798
					// 0x2b798
					v46 = (int32_t *)v5;
					v51 = *v46;
					v6 = v51;
					*v46 = v51 + 1;
					v47 = v18 - 1;
					// branch -> 0x2b79c
					while (v47 != 0) {
						// 0x2b79c
						v46 = (int32_t *)v5;
						v51 = *v46;
						v6 = v51;
						*v46 = v51 + 1;
						v47--;
						// continue -> 0x2b79c
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					v37 = (int32_t *)v5;
					*v37 = *v37 + 1;
					v38 = (int32_t *)v5;
					*v38 = *v38 + 1;
					v39 = (int32_t *)v5;
					*v39 = *v39 + 1;
					v40 = (int32_t *)v5;
					*v40 = *v40 + 1;
					v41 = (int32_t *)v5;
					*v41 = *v41 + 1;
					v42 = (int32_t *)v5;
					*v42 = *v42 + 1;
					v43 = (int32_t *)v5;
					*v43 = *v43 + 1;
					v44 = (int32_t *)v5;
					v50 = *v44;
					v6 = v50;
					*v44 = v50 + 1;
					v45 = v17 - 1;
					while (v45 != 0) {
						// 0x2b72c
						v37 = (int32_t *)v5;
						*v37 = *v37 + 1;
						v38 = (int32_t *)v5;
						*v38 = *v38 + 1;
						v39 = (int32_t *)v5;
						*v39 = *v39 + 1;
						v40 = (int32_t *)v5;
						*v40 = *v40 + 1;
						v41 = (int32_t *)v5;
						*v41 = *v41 + 1;
						v42 = (int32_t *)v5;
						*v42 = *v42 + 1;
						v43 = (int32_t *)v5;
						*v43 = *v43 + 1;
						v44 = (int32_t *)v5;
						v50 = *v44;
						v6 = v50;
						*v44 = v50 + 1;
						v45--;
						// continue -> 0x2b72c
					}
					// 0x2b790
					v55 = v18 % 8;
					if (v55 != 0) {
						// 0x2b798
						v46 = (int32_t *)v5;
						v51 = *v46;
						v6 = v51;
						*v46 = v51 + 1;
						v47 = v55 - 1;
						// branch -> 0x2b79c
						while (v47 != 0) {
							// 0x2b79c
							v46 = (int32_t *)v5;
							v51 = *v46;
							v6 = v51;
							*v46 = v51 + 1;
							v47--;
							// continue -> 0x2b79c
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x2b648
		v48 = v13 + *(int32_t *)v6;
		v19 = v48 - 39;
		v16 = v19;
		if (v48 >= 40) {
			// 0x2b65c
			v20 = __asm_rlwinm_(v19, 29, 3, 31);
			if (v20 == 0) {
				// 0x2b65c
				// branch -> 0x2b6d4
				// 0x2b6d4
				v31 = (int32_t *)v6;
				*v31 = *v31 - 1;
				v32 = v16 - 1;
				// branch -> 0x2b6d8
				while (v32 != 0) {
					// 0x2b6d8
					v31 = (int32_t *)v6;
					*v31 = *v31 - 1;
					v32--;
					// continue -> 0x2b6d8
				}
				// 0x2b6e8
				v33 = (int32_t *)v3;
				*v33 = *(int32_t *)v6 + *v33;
				v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
				*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
				v49 = *(int32_t *)v5 + *(int32_t *)v2;
				v35 = -v49;
				v18 = v35;
				if (v49 <= 0xffffffff) {
					// 0x2b720
					v36 = __asm_rlwinm_(v35, 29, 3, 31);
					v17 = v36;
					if (v36 == 0) {
						// 0x2b720
						// branch -> 0x2b798
						// 0x2b798
						v46 = (int32_t *)v5;
						v51 = *v46;
						v6 = v51;
						*v46 = v51 + 1;
						v47 = v18 - 1;
						// branch -> 0x2b79c
						while (v47 != 0) {
							// 0x2b79c
							v46 = (int32_t *)v5;
							v51 = *v46;
							v6 = v51;
							*v46 = v51 + 1;
							v47--;
							// continue -> 0x2b79c
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						v37 = (int32_t *)v5;
						*v37 = *v37 + 1;
						v38 = (int32_t *)v5;
						*v38 = *v38 + 1;
						v39 = (int32_t *)v5;
						*v39 = *v39 + 1;
						v40 = (int32_t *)v5;
						*v40 = *v40 + 1;
						v41 = (int32_t *)v5;
						*v41 = *v41 + 1;
						v42 = (int32_t *)v5;
						*v42 = *v42 + 1;
						v43 = (int32_t *)v5;
						*v43 = *v43 + 1;
						v44 = (int32_t *)v5;
						v50 = *v44;
						v6 = v50;
						*v44 = v50 + 1;
						v45 = v17 - 1;
						while (v45 != 0) {
							// 0x2b72c
							v37 = (int32_t *)v5;
							*v37 = *v37 + 1;
							v38 = (int32_t *)v5;
							*v38 = *v38 + 1;
							v39 = (int32_t *)v5;
							*v39 = *v39 + 1;
							v40 = (int32_t *)v5;
							*v40 = *v40 + 1;
							v41 = (int32_t *)v5;
							*v41 = *v41 + 1;
							v42 = (int32_t *)v5;
							*v42 = *v42 + 1;
							v43 = (int32_t *)v5;
							*v43 = *v43 + 1;
							v44 = (int32_t *)v5;
							v50 = *v44;
							v6 = v50;
							*v44 = v50 + 1;
							v45--;
							// continue -> 0x2b72c
						}
						// 0x2b790
						if (v18 % 8 != 0) {
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				v21 = (int32_t *)v6;
				*v21 = *v21 - 1;
				v22 = (int32_t *)v6;
				*v22 = *v22 - 1;
				v23 = (int32_t *)v6;
				*v23 = *v23 - 1;
				v24 = (int32_t *)v6;
				*v24 = *v24 - 1;
				v25 = (int32_t *)v6;
				*v25 = *v25 - 1;
				v26 = (int32_t *)v6;
				*v26 = *v26 - 1;
				v27 = (int32_t *)v6;
				*v27 = *v27 - 1;
				v28 = (int32_t *)v6;
				*v28 = *v28 - 1;
				v29 = v20 - 1;
				while (v29 != 0) {
					// 0x2b668
					v21 = (int32_t *)v6;
					*v21 = *v21 - 1;
					v22 = (int32_t *)v6;
					*v22 = *v22 - 1;
					v23 = (int32_t *)v6;
					*v23 = *v23 - 1;
					v24 = (int32_t *)v6;
					*v24 = *v24 - 1;
					v25 = (int32_t *)v6;
					*v25 = *v25 - 1;
					v26 = (int32_t *)v6;
					*v26 = *v26 - 1;
					v27 = (int32_t *)v6;
					*v27 = *v27 - 1;
					v28 = (int32_t *)v6;
					*v28 = *v28 - 1;
					v29--;
					// continue -> 0x2b668
				}
				// 0x2b6cc
				v30 = v16 % 8;
				if (v30 != 0) {
					// 0x2b6d4
					v31 = (int32_t *)v6;
					*v31 = *v31 - 1;
					v32 = v30 - 1;
					// branch -> 0x2b6d8
					while (v32 != 0) {
						// 0x2b6d8
						v31 = (int32_t *)v6;
						*v31 = *v31 - 1;
						v32--;
						// continue -> 0x2b6d8
					}
					// 0x2b6e8
					v33 = (int32_t *)v3;
					*v33 = *(int32_t *)v6 + *v33;
					v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
					*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
					v49 = *(int32_t *)v5 + *(int32_t *)v2;
					v35 = -v49;
					v18 = v35;
					if (v49 <= 0xffffffff) {
						// 0x2b720
						v36 = __asm_rlwinm_(v35, 29, 3, 31);
						v17 = v36;
						if (v36 == 0) {
							// 0x2b720
							// branch -> 0x2b798
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							v37 = (int32_t *)v5;
							*v37 = *v37 + 1;
							v38 = (int32_t *)v5;
							*v38 = *v38 + 1;
							v39 = (int32_t *)v5;
							*v39 = *v39 + 1;
							v40 = (int32_t *)v5;
							*v40 = *v40 + 1;
							v41 = (int32_t *)v5;
							*v41 = *v41 + 1;
							v42 = (int32_t *)v5;
							*v42 = *v42 + 1;
							v43 = (int32_t *)v5;
							*v43 = *v43 + 1;
							v44 = (int32_t *)v5;
							v50 = *v44;
							v6 = v50;
							*v44 = v50 + 1;
							v45 = v17 - 1;
							while (v45 != 0) {
								// 0x2b72c
								v37 = (int32_t *)v5;
								*v37 = *v37 + 1;
								v38 = (int32_t *)v5;
								*v38 = *v38 + 1;
								v39 = (int32_t *)v5;
								*v39 = *v39 + 1;
								v40 = (int32_t *)v5;
								*v40 = *v40 + 1;
								v41 = (int32_t *)v5;
								*v41 = *v41 + 1;
								v42 = (int32_t *)v5;
								*v42 = *v42 + 1;
								v43 = (int32_t *)v5;
								*v43 = *v43 + 1;
								v44 = (int32_t *)v5;
								v50 = *v44;
								v6 = v50;
								*v44 = v50 + 1;
								v45--;
								// continue -> 0x2b72c
							}
							// 0x2b790
							if (v18 % 8 != 0) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x2b6e8
			v33 = (int32_t *)v3;
			*v33 = *(int32_t *)v6 + *v33;
			v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
			*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
			v49 = *(int32_t *)v5 + *(int32_t *)v2;
			v35 = -v49;
			v18 = v35;
			if (v49 <= 0xffffffff) {
				// 0x2b720
				v36 = __asm_rlwinm_(v35, 29, 3, 31);
				v17 = v36;
				if (v36 == 0) {
					// 0x2b720
					// branch -> 0x2b798
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					v37 = (int32_t *)v5;
					*v37 = *v37 + 1;
					v38 = (int32_t *)v5;
					*v38 = *v38 + 1;
					v39 = (int32_t *)v5;
					*v39 = *v39 + 1;
					v40 = (int32_t *)v5;
					*v40 = *v40 + 1;
					v41 = (int32_t *)v5;
					*v41 = *v41 + 1;
					v42 = (int32_t *)v5;
					*v42 = *v42 + 1;
					v43 = (int32_t *)v5;
					*v43 = *v43 + 1;
					v44 = (int32_t *)v5;
					v50 = *v44;
					v6 = v50;
					*v44 = v50 + 1;
					v45 = v17 - 1;
					while (v45 != 0) {
						// 0x2b72c
						v37 = (int32_t *)v5;
						*v37 = *v37 + 1;
						v38 = (int32_t *)v5;
						*v38 = *v38 + 1;
						v39 = (int32_t *)v5;
						*v39 = *v39 + 1;
						v40 = (int32_t *)v5;
						*v40 = *v40 + 1;
						v41 = (int32_t *)v5;
						*v41 = *v41 + 1;
						v42 = (int32_t *)v5;
						*v42 = *v42 + 1;
						v43 = (int32_t *)v5;
						*v43 = *v43 + 1;
						v44 = (int32_t *)v5;
						v50 = *v44;
						v6 = v50;
						*v44 = v50 + 1;
						v45--;
						// continue -> 0x2b72c
					}
					// 0x2b790
					if (v18 % 8 != 0) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x2b6e8
		v33 = (int32_t *)v3;
		*v33 = *(int32_t *)v6 + *v33;
		v34 = *(int32_t *)*(int32_t *)(g23 - 0x77b4) - 16;
		*(int32_t *)v2 = v34 / 2 | v34 & -0x80000000;
		v49 = *(int32_t *)v5 + *(int32_t *)v2;
		v35 = -v49;
		if (v49 <= 0xffffffff) {
			// 0x2b720
			v36 = __asm_rlwinm_(v35, 29, 3, 31);
			if (v36 == 0) {
				// 0x2b720
				// branch -> 0x2b798
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				v37 = (int32_t *)v5;
				*v37 = *v37 + 1;
				v38 = (int32_t *)v5;
				*v38 = *v38 + 1;
				v39 = (int32_t *)v5;
				*v39 = *v39 + 1;
				v40 = (int32_t *)v5;
				*v40 = *v40 + 1;
				v41 = (int32_t *)v5;
				*v41 = *v41 + 1;
				v42 = (int32_t *)v5;
				*v42 = *v42 + 1;
				v43 = (int32_t *)v5;
				*v43 = *v43 + 1;
				v44 = (int32_t *)v5;
				*v44 = *v44 + 1;
				v45 = v36 - 1;
				while (v45 != 0) {
					// 0x2b72c
					v37 = (int32_t *)v5;
					*v37 = *v37 + 1;
					v38 = (int32_t *)v5;
					*v38 = *v38 + 1;
					v39 = (int32_t *)v5;
					*v39 = *v39 + 1;
					v40 = (int32_t *)v5;
					*v40 = *v40 + 1;
					v41 = (int32_t *)v5;
					*v41 = *v41 + 1;
					v42 = (int32_t *)v5;
					*v42 = *v42 + 1;
					v43 = (int32_t *)v5;
					*v43 = *v43 + 1;
					v44 = (int32_t *)v5;
					*v44 = *v44 + 1;
					v45--;
					// continue -> 0x2b72c
				}
				// 0x2b790
				if (v35 % 8 != 0) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x2baa8 - 0x2bdf0
int32_t SetAutomapView(int32_t a1, int32_t a2)
{
	int32_t v1 = g10;                        // 0x2baac
	int32_t v2 = a1 - 16;                    // 0x2bab0
	int32_t v3 = *(int32_t *)(g23 - 0x7798); // 0x2bab4
	g35 = v3;
	int32_t v4 = v2 / 2 | v2 & -0x80000000; // 0x2bab8
	int32_t result = v4;                    // r3
	g32 = v4;
	int32_t v5 = a2 - 16;                   // 0x2bac4
	int32_t v6 = v5 / 2 | v5 & -0x80000000; // 0x2bac8
	g31 = v6;
	if (v4 < 0 || v4 >= 40) {
		// 0x2bddc
		g10 = v1;
		return result;
	}
	// 0x2bae0
	if (v6 >= 0) {
		// 0x2bae8
		if (v6 < 40) {
			int32_t v7 = 40 * v4; // 0x2baf4
			g33 = v7;
			g36 = 1;
			*(char *)(v6 + v7 + v3) = 1;
			int32_t v8 = GetAutomapType(g32, g31, 0);  // 0x2bb10
			uint32_t v9 = v8 % 16;                     // 0x2bb14
			int32_t v10 = __asm_rlwinm(v8, 0, 17, 17); // 0x2bb1c
			result = v10;
			if (v9 == 4) {
				// 0x2bc00
				if (v10 == 0) {
					int32_t v11 = GetAutomapType(g32 - 1, g31, 0); // 0x2bc6c
					if (__asm_rlwinm_(v11, 0, 17, 17) != 0) {
						// 0x2bc78
						*(char *)(g31 + g33 + g35 - 40) = (char)g36;
						// branch -> 0x2bc84
					}
					int32_t v12 = GetAutomapType(g32, g31 - 1, 0); // 0x2bc90
					if (__asm_rlwinm_(v12, 0, 17, 17) != 0) {
						// 0x2bc9c
						*(char *)(g33 + g35 + g31 - 1) = 1;
						// branch -> 0x2bcac
					}
					int32_t v13 = GetAutomapType(g32 - 1, g31 - 1, 0); // 0x2bcb8
					result = v13;
					if (__asm_rlwinm_(v13, 0, 17, 17) != 0) {
						int32_t v14 = g33 + g35 + g31; // 0x2bcc8
						result = v14;
						*(char *)(v14 - 41) = 1;
						// branch -> 0x2bddc
					}
				} else {
					// 0x2bc08
					if (GetAutomapType(g32, g31 + 1, 0) % 0x10000 == 0x4007) {
						// 0x2bc24
						*(char *)(g31 + g33 + g35 + 1) = (char)g36;
						// branch -> 0x2bc30
					}
					int32_t v15 = GetAutomapType(g32 + 1, g31, 0); // 0x2bc3c
					result = v15;
					if (v15 % 0x10000 == 0x4007) {
						int32_t v16 = g33 + g35 + g31; // 0x2bc50
						result = v16;
						*(char *)(v16 + 40) = 1;
						// branch -> 0x2bddc
					}
				}
				// 0x2bddc
				g10 = v1;
				return result;
			}
			// 0x2bb24
			if (v9 <= 4) {
				// 0x2bb28
				if (v9 == 2) {
					// 0x2bb48
					if (v10 == 0) {
						int32_t v17 = GetAutomapType(g32 - 1, g31, 0); // 0x2bb88
						result = v17;
						if (__asm_rlwinm_(v17, 0, 17, 17) != 0) {
							int32_t v18 = g31 + g33 + g35; // 0x2bb98
							result = v18;
							*(char *)(v18 - 40) = (char)g36;
							// branch -> 0x2bddc
						}
					} else {
						int32_t v19 = GetAutomapType(g32, g31 + 1, 0); // 0x2bb5c
						result = v19;
						if (v19 % 0x10000 == 0x4007) {
							int32_t v20 = g31 + g33 + g35; // 0x2bb70
							result = v20;
							*(char *)(v20 + 1) = (char)g36;
							// branch -> 0x2bddc
						}
					}
					// 0x2bddc
					g10 = v1;
					return result;
				}
				// 0x2bb30
				if (v9 > 2) {
					// 0x2bba4
					if (v10 == 0) {
						int32_t v21 = GetAutomapType(g32, g31 - 1, 0); // 0x2bbe4
						result = v21;
						if (__asm_rlwinm_(v21, 0, 17, 17) != 0) {
							int32_t v22 = g31 + g33 + g35; // 0x2bbf4
							result = v22;
							*(char *)(v22 - 1) = (char)g36;
							// branch -> 0x2bddc
						}
					} else {
						int32_t v23 = GetAutomapType(g32 + 1, g31, 0); // 0x2bbb8
						result = v23;
						if (v23 % 0x10000 == 0x4007) {
							int32_t v24 = g31 + g33 + g35; // 0x2bbcc
							result = v24;
							*(char *)(v24 + 40) = (char)g36;
							// branch -> 0x2bddc
						}
					}
					// 0x2bddc
					g10 = v1;
					return result;
				}
				// 0x2bddc
				g10 = v1;
				return result;
			}
			// 0x2bb38
			if (v9 == 6) {
				// 0x2bd5c
				if (v10 == 0) {
					int32_t v25 = GetAutomapType(g32, g31 - 1, 0); // 0x2bdc4
					result = v25;
					if (__asm_rlwinm_(v25, 0, 17, 17) != 0) {
						int32_t v26 = g31 + g33 + g35; // 0x2bdd4
						result = v26;
						*(char *)(v26 - 1) = (char)g36;
						// branch -> 0x2bddc
					}
				} else {
					int32_t v27 = GetAutomapType(g32 - 1, g31, 0); // 0x2bd70
					if (__asm_rlwinm_(v27, 0, 17, 17) != 0) {
						// 0x2bd7c
						*(char *)(g31 + g33 + g35 - 40) = (char)g36;
						// branch -> 0x2bd88
					}
					int32_t v28 = GetAutomapType(g32 + 1, g31, 0); // 0x2bd94
					result = v28;
					if (v28 % 0x10000 == 0x4007) {
						int32_t v29 = g33 + g35 + g31; // 0x2bda8
						result = v29;
						*(char *)(v29 + 40) = 1;
						// branch -> 0x2bddc
					}
				}
				// 0x2bddc
				g10 = v1;
				return result;
			}
			// 0x2bb40
			if (v9 <= 6) {
				// 0x2bcd8
				if (v10 == 0) {
					int32_t v30 = GetAutomapType(g32 - 1, g31, 0); // 0x2bd40
					result = v30;
					if (__asm_rlwinm_(v30, 0, 17, 17) != 0) {
						int32_t v31 = g31 + g33 + g35; // 0x2bd50
						result = v31;
						*(char *)(v31 - 40) = (char)g36;
						// branch -> 0x2bddc
					}
				} else {
					int32_t v32 = GetAutomapType(g32, g31 - 1, 0); // 0x2bcec
					if (__asm_rlwinm_(v32, 0, 17, 17) != 0) {
						// 0x2bcf8
						*(char *)(g31 + g33 + g35 - 1) = (char)g36;
						// branch -> 0x2bd04
					}
					int32_t v33 = GetAutomapType(g32, g31 + 1, 0); // 0x2bd10
					result = v33;
					if (v33 % 0x10000 == 0x4007) {
						int32_t v34 = g33 + g35 + g31; // 0x2bd24
						result = v34;
						*(char *)(v34 + 1) = 1;
						// branch -> 0x2bddc
					}
				}
				// 0x2bddc
				g10 = v1;
				return result;
			}
			// 0x2bddc
			g10 = v1;
			return result;
		}
	}
	// 0x2bddc
	g10 = v1;
	return result;
}

// Address range: 0x2bdf0 - 0x2be74
int32_t AutomapZoomReset(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7780);                                           // 0x2bdfc
	int32_t v2 = *(int32_t *)(g23 - 0x7784);                                           // r9
	int32_t v3 = 0;                                                                    // r0
	int32_t v4 = *(int32_t *)(g23 - 0x7788);                                           // r10
	uint64_t v5 = 0x51eb851f * (int64_t)(64 * *(int32_t *)*(int32_t *)(g23 - 0x777c)); // 0x2be14
	int32_t v6 = *(int32_t *)(g23 - 0x778c);                                           // r11
	int32_t result = *(int32_t *)(g23 - 0x77a4);                                       // r3
	int32_t v7 = (int32_t)(v5 / 0x100000000) >> 31;                                    // 0x2be28
	*(int32_t *)v1 = (v7 & -0x8000000 | (int32_t)(v5 / 0x2000000000)) + (int32_t)(v7 < 0);
	uint32_t v8 = *(int32_t *)v1; // 0x2be38
	*(int32_t *)v2 = v8 / 2 | v8 & -0x80000000;
	uint32_t v9 = *(int32_t *)v2; // 0x2be44
	*(int32_t *)v4 = v9 / 2 | v9 & -0x80000000;
	uint32_t v10 = *(int32_t *)v4; // 0x2be50
	*(int32_t *)v6 = v10 / 2 | v10 & -0x80000000;
	uint32_t v11 = *(int32_t *)v6; // 0x2be5c
	*(int32_t *)*(int32_t *)(g23 - 0x7790) = v11 / 2 | v11 & -0x80000000;
	*(int32_t *)*(int32_t *)(g23 - 0x77a0) = v3;
	*(int32_t *)result = v3;
	return result;
}
