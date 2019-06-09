// Address range: 0x54620 - 0x54640
int32_t InitHelp(int32_t a1)
{
	int32_t v1 = 0; // r0
	*(int32_t *)*(int32_t *)(g23 - 0x75d4) = 0;
	int32_t result = *(int32_t *)(g23 - 0x7218); // r3
	*(int32_t *)*(int32_t *)(g23 - 0x7214) = v1;
	*(int32_t *)result = v1;
	return result;
}

// Address range: 0x54640 - 0x546f8
int32_t DrawHelpLine(int32_t result, int32_t a2, char *a3)
{
	int32_t v1 = g10;         // 0x54644
	int32_t v2 = (int32_t)a3; // 0x5464c
	g35 = v2;
	int32_t v3 = g23 - 0x2da0; // 0x54650
	g31 = v3;
	int32_t v4 = g23 - 0x2e20; // 0x54654
	g32 = v4;
	g36 = g39;
	int32_t v5 = g23 - 0x2ae8; // 0x5465c
	g33 = v5;
	g28 = 0;
	int32_t v6 = *(int32_t *)(4 * a2 + *(int32_t *)(g23 - 0x721c));                     // 0x54674
	int32_t v7 = *(int32_t *)(4 * v6 + *(int32_t *)(g23 - 0x7698) + 816) + 96 + result; // 0x54688
	g29 = v7;
	if (*(char *)v2 == 0) {
		// 0x546e4
		g10 = v1;
		return result;
	}
	int32_t v8 = 0; // 0x546ac
	while (true) {
		int32_t v9 = v2 + 1; // 0x54694
		g35 = v9;
		unsigned char v10 = *(char *)((int32_t) * (char *)v2 + v5); // 0x54698
		unsigned char v11 = *(char *)((int32_t)v10 + v4);           // 0x5469c
		int32_t v12 = v11;                                          // 0x5469c
		int32_t v13 = v12 + v3;                                     // 0x546a0
		g30 = v13;
		int32_t v14 = v8 + 1 + (int32_t) * (char *)v13; // 0x546b0
		g28 = v14;
		int32_t result2 = result; // 0x546f417
		int32_t v15 = v9;         // 0x546d8
		int32_t v16 = v7;         // 0x546d0
		int32_t v17 = v13;        // 0x546cc
		int32_t v18;              // 0x546d4
		if (v11 != 0) {
			// 0x546b8
			if (v14 <= 577) {
				// 0x546c0
				result2 = function_2d918(v7, v12, g36);
				v15 = g35;
				v16 = g29;
				v17 = g30;
				// branch -> 0x546cc
			} else {
				result2 = result;
				v15 = v9;
				v16 = v7;
				v17 = v13;
			}
			// 0x546cc
			v18 = v16 + 1 + (int32_t) * (char *)v17;
			g29 = v18;
			if (*(char *)v15 == 0) {
				// 0x546e4
				g10 = v1;
				return result2;
			}
		lab_0x546cc:
			// 0x546cc
			result = result2;
			v7 = v18;
			v8 = g28;
			v3 = g31;
			v4 = g32;
			v5 = g33;
			v2 = v15;
			// branch -> 0x54690
			continue;
		}
		// 0x546cc
		v18 = v16 + 1 + (int32_t) * (char *)v17;
		g29 = v18;
		if (*(char *)v15 != 0) {
			goto lab_0x546cc;
		}
		// 0x546e4
		g10 = v1;
		return result2;
	}
}

// Address range: 0x546f8 - 0x54964
int32_t DrawHelp(int32_t a1)
{
	int32_t v1 = g10; // 0x546fc
	DrawSTextHelp();
	DrawQTextBack();
	PrintSString(0, 2, 1, (char *)*(int32_t *)(g23 - 0x6208), 3, 0);
	DrawSLine(5);
	int32_t v2 = g23 + 0x2980; // 0x5474c
	g28 = v2;
	int32_t v3 = 0;   // r3
	int32_t v4;       // r5
	int32_t v5;       // r7
	int32_t v6;       // 0x54838
	int32_t v7;       // 0x5483c1
	int32_t v8;       // 0x54858
	unsigned char v9; // 0x5483c3
	if (*(int32_t *)g31 > 0) {
		int32_t v10 = v2; // 0x5476824
		int32_t v11;      // 0x547682462
		while (true) {
			// 0x54758
			v5 = 0;
			int32_t v12 = 0;                  // r6
			unsigned char v13 = *(char *)v10; // 0x5476826
			int32_t v14 = v10;                // 0x54780
			int32_t v15 = v13;                // 0x54774
			int32_t v16;                      // 0x547d440
			if (v13 == 0) {
				int32_t v17 = v10 + 1; // 0x54764
				g28 = v17;
				unsigned char v18 = *(char *)v17; // 0x54768
				v14 = v17;
				while (v18 == 0) {
					// 0x54764
					v17++;
					g28 = v17;
					v18 = *(char *)v17;
					v14 = v17;
					// continue -> 0x54764
				}
				// 0x54774
				v16 = v14;
				if (0x1000000 * (int32_t)v18 == 0x24000000) {
				lab_0x54780:;
					int32_t v19 = v14 + 1; // 0x54780
					g28 = v19;
					v16 = v19;
					// branch -> 0x54784
				}
			lab_0x54784:;
				char *v20 = (char *)v16; // 0x54784
				v11 = v16;
				int32_t v21; // 0x54818
				if (*v20 != 38) {
					int32_t v22 = g32; // 0x54790
					int32_t v23 = v16; // 0x547f875
					int32_t v24 = 0;   // 0x547f0
					int32_t v25;       // 0x54814
					if (*v20 != 124) {
						int32_t v26 = 0;   // 0x547f073
						int32_t v27 = v16; // 0x547a032
						int32_t v28 = 0;   // 0x547e0
						int32_t v29;       // 0x547e8
						while (true) {
							// 0x547e0
							if (v28 < 577) {
								unsigned char v30 = *(char *)v27; // 0x547a034
								char v31 = v30;
								int32_t v32;       // 0x547b8
								int32_t v33;       // 0x547b0
								int32_t v34;       // 0x547b4
								int32_t v35;       // 0x547bc
								int32_t v36;       // 0x547d0
								unsigned char v37; // 0x547c0
								unsigned char v38; // 0x547c4
								unsigned char v39; // 0x547c8
								if (v30 == 0) {
									int32_t v40 = v27 + 1; // 0x5479c
									g28 = v40;
									unsigned char v41 = *(char *)v40; // 0x547a0
									while (v41 == 0) {
										// 0x5479c
										v40++;
										g28 = v40;
										v41 = *(char *)v40;
										// continue -> 0x5479c
									}
									// 0x547ac
									*(char *)v22 = v41;
									v33 = v5 + 1;
									v5 = v33;
									v34 = g28 + 1;
									g28 = v34;
									v32 = v22;
									v35 = v32 + 1;
									v37 = *(char *)(g36 + (int32_t) * (char *)v32);
									v38 = *(char *)(g35 + (int32_t)v37);
									v39 = *(char *)(g33 + (int32_t)v38);
									v36 = (int32_t)v39 + 1 + v12;
									v12 = v36;
									if (*(char *)v34 == 124) {
										v23 = v34;
										v24 = v33;
										v29 = v36;
										// break -> 0x547e8
										break;
									}
									v26 = v33;
									v22 = v35;
									v27 = v34;
									v28 = v36;
									// continue -> 0x547e0
									continue;
								}
								// 0x547ac
								*(char *)v22 = v31;
								v33 = v5 + 1;
								v5 = v33;
								v34 = g28 + 1;
								g28 = v34;
								v32 = v22;
								v35 = v32 + 1;
								v37 = *(char *)(g36 + (int32_t) * (char *)v32);
								v38 = *(char *)(g35 + (int32_t)v37);
								v39 = *(char *)(g33 + (int32_t)v38);
								v36 = (int32_t)v39 + 1 + v12;
								v12 = v36;
								if (*(char *)v34 == 124) {
									v23 = v34;
									v24 = v33;
									v29 = v36;
									// break -> 0x547e8
									break;
								}
								v26 = v33;
								v22 = v35;
								v27 = v34;
								v28 = v36;
								// continue -> 0x547e0
								continue;
							} else {
								v23 = v27;
								v24 = v26;
								v29 = v28;
							}
						}
						// 0x547e8
						v25 = v23;
						if (v29 >= 577) {
						lab_0x547f0:;
							int32_t v42 = g32 + v24 - 1; // 0x547fc48
							if (*(char *)v42 != 32) {
								int32_t v43 = v23 - 1; // 0x547f8
								g28 = v43;
								v25 = v43;
								while (*(char *)(v42 - 1) != 32) {
									// 0x547f8
									v42--;
									v43--;
									g28 = v43;
									v25 = v43;
									// continue -> 0x547f8
								}
								// 0x54808
								v11 = v25;
								if (*(char *)v25 == 124) {
								lab_0x54814:;
									int32_t v44 = v25 + 1; // 0x54814
									g28 = v44;
									v11 = v44;
									// branch -> 0x54818
								}
							lab_0x54818:
								// 0x54818
								v21 = v3 + 1;
								v3 = v21;
								if (v21 >= *(int32_t *)g31) {
									// break -> 0x54828
									break;
								}
								v10 = v11;
								// continue -> 0x54758
								continue;
							} else {
								v25 = v23;
							}
						}
					lab_0x54808:
						// 0x54808
						if (*(char *)v25 == 124) {
							goto lab_0x54814;
						}
						v11 = v25;
						goto lab_0x54818;
					}
					v25 = v23;
					goto lab_0x54808;
					goto lab_0x547f0;
				}
				// 0x54818
				v21 = v3 + 1;
				v3 = v21;
				if (v21 >= *(int32_t *)g31) {
					// break -> 0x54828
					break;
				}
				v10 = v11;
				// continue -> 0x54758
				continue;
			}
			// 0x54774
			if (0x1000000 * v15 == 0x24000000) {
				goto lab_0x54780;
			}
			v16 = v14;
			goto lab_0x54784;
		}
		// 0x54828
		g29 = 7;
		v7 = v11;
		// branch -> 0x5482c
		while (true) {
			// 0x5482c
			v4 = 0;
			v5 = 0;
			v9 = *(char *)v7;
			v8 = v7;
			if (v9 == 0) {
				v6 = v7;
			lab_0x54838:;
				int32_t v45; // 0x5483c
				while (true) {
					int32_t v46 = v6 + 1; // 0x54838
					g28 = v46;
					unsigned char v47 = *(char *)v46; // 0x5483c
					v45 = v47;
					if (v47 != 0) {
						v8 = v46;
						// break -> 0x54848
						break;
					}
					v6 = v46;
					// continue -> 0x54838
				}
				// 0x54848
				int32_t v48; // 0x54858
				if (0x1000000 * v45 == 0x24000000) {
				lab_0x54854:
					// 0x54854
					g39 = 2;
					v48 = v8 + 1;
					g28 = v48;
					// branch -> 0x54864
				} else {
				lab_0x54860:
					// 0x54860
					g39 = 0;
					v48 = v8;
					// branch -> 0x54864
				}
				char *v49 = (char *)v48; // 0x54864
				int32_t v50;             // 0x54928
				int32_t result;          // 0x5494c
				if (*v49 == 38) {
					// 0x54870
					*(int32_t *)g30 = *(int32_t *)g31;
					// branch -> 0x54928
				} else {
					int32_t v51 = g32; // 0x5487c
					v3 = v51;
					int32_t v52 = v48; // 0x548e497
					int32_t v53 = 0;   // 0x548dc
					int32_t v54;       // 0x54908
					if (*v49 != 124) {
						int32_t v55 = 0;   // 0x548dc92
						int32_t v56 = v48; // 0x5488c9
						int32_t v57 = 0;   // 0x548cc
						int32_t v58;       // 0x548d4
						while (true) {
							// 0x548cc
							if (v57 < 577) {
								unsigned char v59 = *(char *)v56; // 0x5488c11
								char v60 = v59;
								int32_t v61;       // 0x548a4
								int32_t v62;       // 0x5489c
								int32_t v63;       // 0x548a0
								int32_t v64;       // 0x548a8
								int32_t v65;       // 0x548bc
								unsigned char v66; // 0x548ac
								unsigned char v67; // 0x548b0
								unsigned char v68; // 0x548b4
								if (v59 == 0) {
									int32_t v69 = v56 + 1; // 0x54888
									g28 = v69;
									unsigned char v70 = *(char *)v69; // 0x5488c
									while (v70 == 0) {
										// 0x54888
										v69++;
										g28 = v69;
										v70 = *(char *)v69;
										// continue -> 0x54888
									}
									// 0x54898
									*(char *)v51 = v70;
									v62 = v4 + 1;
									v4 = v62;
									v63 = g28 + 1;
									g28 = v63;
									v61 = v3;
									v64 = v61 + 1;
									v3 = v64;
									v66 = *(char *)(g36 + (int32_t) * (char *)v61);
									v67 = *(char *)(g35 + (int32_t)v66);
									v68 = *(char *)(g33 + (int32_t)v67);
									v65 = (int32_t)v68 + 1 + v5;
									v5 = v65;
									if (*(char *)v63 == 124) {
										v52 = v63;
										v53 = v62;
										v58 = v65;
										// break -> 0x548d4
										break;
									}
									v55 = v62;
									v51 = v64;
									v56 = v63;
									v57 = v65;
									// continue -> 0x548cc
									continue;
								}
								// 0x54898
								*(char *)v51 = v60;
								v62 = v4 + 1;
								v4 = v62;
								v63 = g28 + 1;
								g28 = v63;
								v61 = v3;
								v64 = v61 + 1;
								v3 = v64;
								v66 = *(char *)(g36 + (int32_t) * (char *)v61);
								v67 = *(char *)(g35 + (int32_t)v66);
								v68 = *(char *)(g33 + (int32_t)v67);
								v65 = (int32_t)v68 + 1 + v5;
								v5 = v65;
								if (*(char *)v63 == 124) {
									v52 = v63;
									v53 = v62;
									v58 = v65;
									// break -> 0x548d4
									break;
								}
								v55 = v62;
								v51 = v64;
								v56 = v63;
								v57 = v65;
								// continue -> 0x548cc
								continue;
							} else {
								v52 = v56;
								v53 = v55;
								v58 = v57;
							}
						}
						// 0x548d4
						v54 = v53;
						int32_t v71; // 0x54924
						if (v58 >= 577) {
						lab_0x548dc:;
							int32_t v72 = g32 + v53 - 1; // 0x548e8121
							int32_t v73 = v53 - 1;       // 0x548ec125
							if (*(char *)v72 != 32) {
								int32_t v74 = v52 - 1; // 0x548e4
								g28 = v74;
								int32_t v75 = v72 - 1; // 0x548e8
								int32_t v76 = v73 - 1; // 0x548ec
								v54 = v76;
								while (*(char *)v75 != 32) {
									// 0x548e4
									v74--;
									g28 = v74;
									v75--;
									v76--;
									v54 = v76;
									// continue -> 0x548e4
								}
								// 0x548f8
								v71 = v74;
								if (v54 != 0) {
								lab_0x54900:
									// 0x54900
									*(char *)(g32 + v54) = 0;
									DrawHelpLine(0, g29, (char *)g32);
									v71 = g28;
									// branch -> 0x54918
								}
							lab_0x54918:
								// 0x54918
								if (*(char *)v71 == 124) {
									// 0x54924
									g28 = v71 + 1;
									// branch -> 0x54928
								}
								// 0x54928
								v50 = g29 + 1;
								g29 = v50;
								if (v50 >= 22) {
									// 0x54934
									result = PrintSString(0, 23, 1, (char *)*(int32_t *)(g23 - 0x6210), 3, 0);
									g10 = v1;
									return result;
								}
							lab_0x54928:
								// 0x54928
								v7 = g28;
								// branch -> 0x5482c
								continue;
							} else {
								v54 = v73;
							}
						}
					lab_0x548f8:
						// 0x548f8
						if (v54 == 0) {
							v71 = v52;
							goto lab_0x54918;
						}
						goto lab_0x54900;
					}
					v54 = v53;
					goto lab_0x548f8;
					goto lab_0x548dc;
				}
				// 0x54928
				v50 = g29 + 1;
				g29 = v50;
				if (v50 < 22) {
					goto lab_0x54928;
				}
				// 0x54934
				result = PrintSString(0, 23, 1, (char *)*(int32_t *)(g23 - 0x6210), 3, 0);
				g10 = v1;
				return result;
			}
		lab_0x54848:
			// 0x54848
			if (0x1000000 * (int32_t)v9 == 0x24000000) {
				goto lab_0x54854;
			}
			goto lab_0x54860;
		}
	}
	// 0x54828
	g29 = 7;
	v7 = v2;
	// branch -> 0x5482c
	while (true) {
		// 0x5482c
		v4 = 0;
		v5 = 0;
		v9 = *(char *)v7;
		if (v9 == 0) {
			v6 = v7;
			goto lab_0x54838;
		}
		v8 = v7;
		goto lab_0x54848;
	}
}

// Address range: 0x54964 - 0x5498c
int32_t DisplayHelp(int32_t a1)
{
	// 0x54964
	*(int32_t *)*(int32_t *)(g23 - 0x75d4) = 1;
	int32_t result = *(int32_t *)(g23 - 0x7224); // r3
	*(int32_t *)*(int32_t *)(g23 - 0x7220) = 0;
	*(int32_t *)result = 0x1388;
	return result;
}

// Address range: 0x5498c - 0x549a8
int32_t HelpScrollUp(void)
{
	int32_t *v1 = (int32_t *)*(int32_t *)(g23 - 0x7220); // 0x54990
	int32_t result = *v1;                                // 0x54990
	if (result < 1) {
		// bb
		return result;
	}
	// 0x5499c
	*v1 = result - 1;
	return result;
}

// Address range: 0x549a8 - 0x549cc
int32_t HelpScrollDown(void)
{
	int32_t result = *(int32_t *)(g23 - 0x7224);         // 0x549ac
	int32_t *v1 = (int32_t *)*(int32_t *)(g23 - 0x7220); // 0x549b0
	int32_t v2 = *v1;                                    // 0x549b0
	if (v2 >= *(int32_t *)result) {
		// bb
		return result;
	}
	// 0x549c0
	*v1 = v2 + 1;
	return result;
}
