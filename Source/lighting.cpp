
// Address range: 0xc9e2c - 0xc9ebc
int32_t RotateRadius(int32_t *a1, int32_t result, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = (int32_t)a1; // r3
	*(int32_t *)a7 = 0;
	*(int32_t *)g13 = 0;
	*(int32_t *)a3 = 7 - a4;
	*(int32_t *)a4 = a3;
	*(int32_t *)a5 = 7 - a6;
	*(int32_t *)a6 = a5;
	*(int32_t *)v1 = a3 - a5;
	*(int32_t *)result = a4 - a6;
	if (v1 <= 0xffffffff) {
		// 0xc9e8c
		*(int32_t *)v1 = v1 + 8;
		*(int32_t *)a7 = 1;
		// branch -> 0xc9e9c
	}
	// 0xc9e9c
	if (result > -1) {
		// bb
		return result;
	}
	// 0xc9ea8
	*(int32_t *)result = result + 8;
	*(int32_t *)g13 = 1;
	return result;
}

// Address range: 0xc9ebc - 0xca36c
int32_t DoLighting(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0xc9ec0
	g27 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x6e98); // 0xc9ecc
	g35 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x758c); // 0xc9ed0
	g36 = v3;
	g28 = a2;
	int32_t v4 = 0;    // bp-56
	int32_t v5 = 0;    // bp-60
	int32_t v6 = 0;    // bp-72
	int32_t v7 = 0;    // bp-76
	int32_t v8 = 0;    // bp-80
	int32_t v9 = 0;    // bp-84
	uint32_t v10 = a2; // 0xc9fdc
	int32_t v11 = 0;   // 0xc9f54
	uint32_t v12 = a1; // 0xc9fd4
	int32_t v13 = 0;   // 0xc9f4c
	int32_t v14;       // ctr
	int32_t v15;       // r10
	int32_t v16;       // r11
	int32_t v17;       // r3
	int32_t v18;       // r6
	int32_t v19;       // r7
	int32_t v20;       // bp-64
	int32_t v21;       // bp-68
	int32_t v22;
	int32_t v23;
	int32_t v24;
	int32_t v25; // 0xc9ff4
	int32_t v26; // 0xc9ff431
	int32_t v27; // 0xca008
	int32_t v28; // 0xca01c
	int32_t v29; // 0xca024
	int32_t v30; // 0xca030
	int32_t v31; // 0xca09043
	int32_t v32; // 0xca0cc
	int32_t v33; // 0xca0f8
	int32_t v34; // 0xca110
	int32_t v35; // 0xca11c
	int32_t v36; // 0xca130
	int32_t v37; // 0xca17c54
	int32_t v38; // 0xca1b4
	int32_t v39; // 0xca1d8
	int32_t v40; // 0xca1e0
	int32_t v41; // 0xca1f4
	int32_t v42; // 0xca200
	int32_t v43; // 0xca20c
	int32_t v44; // 0xca26066
	int32_t v45; // 0xca298
	int32_t v46; // 0xca2b8
	int32_t v47; // 0xca2c4
	int32_t v48; // 0xca2dc
	int32_t v49; // 0xca2e8
	int32_t v50; // 0xca34878
	int32_t v51; // 0xc9f7c
	int32_t v52; // 0xc9ff4
	int32_t v53; // 0xca020
	int32_t v54; // 0xca024
	int32_t v55; // 0xca03c
	int32_t v56; // 0xca09c18
	int32_t v57; // 0xca0cc
	int32_t v58; // 0xca0ec
	int32_t v59; // 0xca0fc
	int32_t v60; // 0xca1b4
	int32_t v61; // 0xca1dc
	int32_t v62; // 0xca298
	int32_t v63; // 0xca2c8
	int32_t v64; // 0xca2fc
	int32_t v65; // 0xca008
	int32_t v66; // 0xca0a8
	int32_t v67; // 0xca0ac
	int32_t v68; // 0xca0b0
	int32_t v69; // 0xca0b4
	int32_t v70; // 0xca0b8
	int32_t v71; // 0xca0bc
	int32_t v72; // 0xca0c0
	int32_t v73; // 0xca0ec
	int32_t v74; // 0xca2b8
	int32_t v75; // 0xc9fe8
	int32_t v76; // 0xc9ff0
	if (a4 < 0) {
		// 0xc9f4c
		v20 = v13;
		v21 = v11;
		g32 = v12 > 14 ? 15 : v12 + 1;
		if (v12 < 98) {
			// 0xc9f84
			v24 = 15;
			v26 = 15;
			// branch -> 0xc9f88
		} else {
			// 0xc9f7c
			v51 = 112 - v12;
			v24 = v51;
			v26 = v51;
			// branch -> 0xc9f88
		}
		// 0xc9f88
		g31 = v24;
		v23 = v10 > 14 ? 15 : v10 + 1;
		g30 = v23;
		if (v10 < 98) {
			// 0xc9fb0
			v22 = 15;
			// branch -> 0xc9fb4
		} else {
			// 0xc9fa8
			v22 = 112 - v10;
			// branch -> 0xc9fb4
		}
		// 0xc9fb4
		g29 = v22;
		v25 = v26;
		if (v12 < 0) {
			// 0xc9fe8
			v52 = v25 - 1;
			v65 = 256 * (8 * v11 + v13) + v2;
			v19 = v65;
			g33 = *(int32_t *)(g23 - 0x6e9c) + 128 * a3;
			v16 = 0;
			if (v23 > 0) {
				v54 = 0;
				v28 = v52;
				while (true) {
					// 0xca018
					v14 = v28;
					v53 = v65 + 1;
					a3 = v53;
					v29 = g28;
					v15 = 1;
					if (v25 < 2) {
						goto lab_0xca094_5;
					}
					v31 = v28;
					v55 = 1;
					v30 = v53;
					goto lab_0xca030_4;
				}
			}
			// 0xca0a4
			v66 = &v5;
			v67 = &v20;
			v68 = &v21;
			v69 = &v6;
			v70 = &v7;
			v71 = &v8;
			v72 = &v9;
			g13 = v72;
			RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
			v32 = g31;
			v57 = v32 - 1;
			v17 = 0;
			if (g29 > 0) {
				v33 = v57;
				v58 = 0;
				while (true) {
					// 0xca0ec
					v73 = g27 + v58;
					v14 = v33;
					v59 = g35 + 256 * (v4 + 8 * v5) + 1;
					v19 = v59;
					v15 = 1;
					if (v32 < 2) {
						goto lab_0xca180_7;
					}
					v37 = v33;
					v36 = 1;
					v35 = v59;
					v34 = v58;
					goto lab_0xca108_6;
				}
			}
			// 0xca18c
			g13 = v72;
			RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
			v38 = g32;
			v60 = v38 - 1;
			v17 = 0;
			if (g29 > 0) {
				v40 = 0;
				v39 = v60;
				while (true) {
					// 0xca1d4
					v14 = v39;
					v61 = g35 + 256 * (v4 + 8 * v5) + 1;
					v18 = v61;
					v15 = 1;
					if (v38 < 2) {
						goto lab_0xca264_9;
					}
					v44 = v39;
					v43 = 1;
					v42 = v61;
					v41 = v40;
					goto lab_0xca1ec_8;
				}
			}
			// 0xca270
			g13 = v72;
			RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
			v45 = g32;
			v62 = v45 - 1;
			v17 = 0;
			if (g30 > 0) {
				v47 = v62;
				v46 = 0;
				while (true) {
					// 0xca2b8
					v74 = g27 - v46;
					v14 = v47;
					v63 = g35 + 256 * (v4 + 8 * v5) + 1;
					v19 = v63;
					v15 = 1;
					if (v45 < 2) {
						goto lab_0xca34c_11;
					}
					v50 = v47;
					v64 = 1;
					v49 = v63;
					v48 = v46;
					goto lab_0xca2d4_10;
				}
			}
			// 0xca358
			g10 = v1;
			return 0;
		}
		// 0xc9fbc
		if (v12 > 111 || v10 < 0) {
			v25 = v26;
			// 0xc9fe8
			v52 = v25 - 1;
			v65 = 256 * (8 * v11 + v13) + v2;
			v19 = v65;
			g33 = *(int32_t *)(g23 - 0x6e9c) + 128 * a3;
			v16 = 0;
			if (v23 > 0) {
				v54 = 0;
				v28 = v52;
				while (true) {
					// 0xca018
					v14 = v28;
					v53 = v65 + 1;
					a3 = v53;
					v15 = 1;
					if (v25 < 2) {
						goto lab_0xca094_5;
					}
					v31 = v28;
					v55 = 1;
					v30 = v53;
					goto lab_0xca030_4;
				}
			}
			// 0xca0a4
			v66 = &v5;
			v67 = &v20;
			v68 = &v21;
			v69 = &v6;
			v70 = &v7;
			v71 = &v8;
			v72 = &v9;
			g13 = v72;
			RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
			v32 = g31;
			v57 = v32 - 1;
			v17 = 0;
			if (g29 > 0) {
				v33 = v57;
				v58 = 0;
				while (true) {
					// 0xca0ec
					v73 = g27 + v58;
					v14 = v33;
					v59 = g35 + 256 * (v4 + 8 * v5) + 1;
					v19 = v59;
					v15 = 1;
					if (v32 < 2) {
						goto lab_0xca180_7;
					}
					v37 = v33;
					v36 = 1;
					v35 = v59;
					v34 = v58;
					goto lab_0xca108_6;
				}
			}
			// 0xca18c
			g13 = v72;
			RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
			v38 = g32;
			v60 = v38 - 1;
			v17 = 0;
			if (g29 > 0) {
				v40 = 0;
				v39 = v60;
				while (true) {
					// 0xca1d4
					v14 = v39;
					v61 = g35 + 256 * (v4 + 8 * v5) + 1;
					v18 = v61;
					v15 = 1;
					if (v38 < 2) {
						goto lab_0xca264_9;
					}
					v44 = v39;
					v43 = 1;
					v42 = v61;
					v41 = v40;
					goto lab_0xca1ec_8;
				}
			}
			// 0xca270
			g13 = v72;
			RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
			v45 = g32;
			v62 = v45 - 1;
			v17 = 0;
			if (g30 > 0) {
				v47 = v62;
				v46 = 0;
				while (true) {
					// 0xca2b8
					v74 = g27 - v46;
					v14 = v47;
					v63 = g35 + 256 * (v4 + 8 * v5) + 1;
					v19 = v63;
					v15 = 1;
					if (v45 < 2) {
						goto lab_0xca34c_11;
					}
					v50 = v47;
					v64 = 1;
					v49 = v63;
					v48 = v46;
					goto lab_0xca2d4_10;
				}
			}
			// 0xca358
			g10 = v1;
			return 0;
		}
		// 0xc9fcc
		if (v10 <= 111) {
			// 0xc9fd4
			*(char *)(*(int32_t *)v3 + 112 * v12 + v10) = 0;
			v56 = g30;
			v27 = g35;
			v25 = g31;
			v76 = v4;
			v75 = v5;
			// branch -> 0xc9fe8
		} else {
			v56 = v23;
			v27 = v2;
			v25 = v26;
			v76 = v13;
			v75 = v11;
		}
		// 0xc9fe8
		v52 = v25 - 1;
		v65 = 256 * (8 * v75 + v76) + v27;
		v19 = v65;
		g33 = *(int32_t *)(g23 - 0x6e9c) + 128 * a3;
		v16 = 0;
		if (v56 > 0) {
			v54 = 0;
			v28 = v52;
			while (true) {
				// 0xca018
				v14 = v28;
				v53 = v65 + 1;
				a3 = v53;
				v15 = 1;
				if (v25 < 2) {
					goto lab_0xca094_5;
				}
				v31 = v28;
				v55 = 1;
				v30 = v53;
				goto lab_0xca030_4;
			}
		}
		// 0xca0a4
		v66 = &v5;
		v67 = &v20;
		v68 = &v21;
		v69 = &v6;
		v70 = &v7;
		v71 = &v8;
		v72 = &v9;
		g13 = v72;
		RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
		v32 = g31;
		v57 = v32 - 1;
		v17 = 0;
		if (g29 > 0) {
			v33 = v57;
			v58 = 0;
			while (true) {
				// 0xca0ec
				v73 = g27 + v58;
				v14 = v33;
				v59 = g35 + 256 * (v4 + 8 * v5) + 1;
				v19 = v59;
				v15 = 1;
				if (v32 < 2) {
					goto lab_0xca180_7;
				}
				v37 = v33;
				v36 = 1;
				v35 = v59;
				v34 = v58;
				goto lab_0xca108_6;
			}
		}
		// 0xca18c
		g13 = v72;
		RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
		v38 = g32;
		v60 = v38 - 1;
		v17 = 0;
		if (g29 > 0) {
			v40 = 0;
			v39 = v60;
			while (true) {
				// 0xca1d4
				v14 = v39;
				v61 = g35 + 256 * (v4 + 8 * v5) + 1;
				v18 = v61;
				v15 = 1;
				if (v38 < 2) {
					goto lab_0xca264_9;
				}
				v44 = v39;
				v43 = 1;
				v42 = v61;
				v41 = v40;
				goto lab_0xca1ec_8;
			}
		}
		// 0xca270
		g13 = v72;
		RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
		v45 = g32;
		v62 = v45 - 1;
		v17 = 0;
		if (g30 > 0) {
			v47 = v62;
			v46 = 0;
			while (true) {
				// 0xca2b8
				v74 = g27 - v46;
				v14 = v47;
				v63 = g35 + 256 * (v4 + 8 * v5) + 1;
				v19 = v63;
				v15 = 1;
				if (v45 < 2) {
					goto lab_0xca34c_11;
				}
				v50 = v47;
				v64 = 1;
				v49 = v63;
				v48 = v46;
				goto lab_0xca2d4_10;
			}
		}
		// 0xca358
		g10 = v1;
		return 0;
	}
	int32_t v77 = *(int32_t *)(g23 - 0x7140) + 52 * a4; // 0xc9f08
	int32_t v78 = *(int32_t *)(v77 + 40);               // 0xc9f0c
	v4 = v78;
	int32_t v79 = *(int32_t *)(v77 + 44); // 0xc9f18
	v5 = v79;
	int32_t v80 = a1;  // 0xc9f5024
	int32_t v81 = v78; // 0xc9f4c23
	if (v78 <= 0xffffffff) {
		int32_t v82 = v78 + 8; // 0xc9f28
		int32_t v83 = a1 - 1;  // 0xc9f2c
		g27 = v83;
		v4 = v82;
		v80 = v83;
		v81 = v82;
		// branch -> 0xc9f34
	}
	// 0xc9f34
	if (v79 <= 0xffffffff) {
		int32_t v84 = v79 + 8; // 0xc9f40
		int32_t v85 = a2 - 1;  // 0xc9f44
		g28 = v85;
		v5 = v84;
		v10 = v85;
		v11 = v84;
		v12 = v80;
		v13 = v81;
		// branch -> 0xc9f4c
	} else {
		v10 = a2;
		v11 = v79;
		v12 = v80;
		v13 = v81;
	}
	// 0xc9f4c
	v20 = v13;
	v21 = v11;
	g32 = v12 > 14 ? 15 : v12 + 1;
	if (v12 < 98) {
		// 0xc9f84
		v24 = 15;
		v26 = 15;
		// branch -> 0xc9f88
	} else {
		// 0xc9f7c
		v51 = 112 - v12;
		v24 = v51;
		v26 = v51;
		// branch -> 0xc9f88
	}
	// 0xc9f88
	g31 = v24;
	v23 = v10 > 14 ? 15 : v10 + 1;
	g30 = v23;
	if (v10 < 98) {
		// 0xc9fb0
		v22 = 15;
		// branch -> 0xc9fb4
	} else {
		// 0xc9fa8
		v22 = 112 - v10;
		// branch -> 0xc9fb4
	}
	// 0xc9fb4
	g29 = v22;
	v56 = v23;
	v27 = v2;
	v25 = v26;
	v76 = v13;
	v75 = v11;
	if (v12 >= 0) {
		// 0xc9fbc
		if (v12 <= 111) {
			// 0xc9fc4
			if (v10 >= 0) {
				// 0xc9fcc
				if (v10 <= 111) {
					// 0xc9fd4
					*(char *)(*(int32_t *)v3 + 112 * v12 + v10) = 0;
					v56 = g30;
					v27 = g35;
					v25 = g31;
					v76 = v4;
					v75 = v5;
					// branch -> 0xc9fe8
				} else {
					v56 = v23;
					v27 = v2;
					v25 = v26;
					v76 = v13;
					v75 = v11;
				}
			} else {
				v56 = v23;
				v27 = v2;
				v25 = v26;
				v76 = v13;
				v75 = v11;
			}
		} else {
			v56 = v23;
			v27 = v2;
			v25 = v26;
			v76 = v13;
			v75 = v11;
		}
	}
	// 0xc9fe8
	v52 = v25 - 1;
	v65 = 256 * (8 * v75 + v76) + v27;
	v19 = v65;
	g33 = *(int32_t *)(g23 - 0x6e9c) + 128 * a3;
	v16 = 0;
	if (v56 > 0) {
		v54 = 0;
		int32_t v86 = v65; // 0xca020
		v28 = v52;
		int32_t v87 = v25; // 0xca018
		while (true) {
			// 0xca018
			v14 = v28;
			v53 = v86 + 1;
			a3 = v53;
			v15 = 1;
			int32_t v88; // 0xca094
			int32_t v89; // 0xca098
			if (v87 >= 2) {
				v31 = v28;
				v55 = 1;
				v30 = v53;
			lab_0xca030_4:
				while (true) {
					unsigned char v90 = *(char *)v30; // 0xca030
					int32_t v91 = v90;                // 0xca030
					int32_t v92 = v31;                // 0xca090
					int32_t v93 = v55;                // 0xca08c
					int32_t v94 = v30;                // 0xca088
					if (v90 >= 0) {
						uint32_t v95 = g27 + v55;                 // 0xca03c
						unsigned char v96 = *(char *)(g33 + v91); // 0xca040
						int32_t v97 = v96;                        // 0xca040
						if (v95 >= 0) {
							// 0xca048
							if (v95 <= 111) {
								uint32_t v98 = v29 + v54; // 0xca050
								if (v98 >= 0) {
									// 0xca058
									if (v98 <= 111) {
										char *v99 = (char *)(v98 + 112 * v95 + *(int32_t *)g36); // 0xca070
										if (v97 < (int32_t)*v99) {
											// 0xca080
											*v99 = v96;
											v92 = v14;
											v93 = v15;
											v94 = a3;
											// branch -> 0xca088
										} else {
											v92 = v31;
											v93 = v55;
											v94 = v30;
										}
									} else {
										v92 = v31;
										v93 = v55;
										v94 = v30;
									}
								} else {
									v92 = v31;
									v93 = v55;
									v94 = v30;
								}
							} else {
								v92 = v31;
								v93 = v55;
								v94 = v30;
							}
						} else {
							v92 = v31;
							v93 = v55;
							v94 = v30;
						}
					}
					int32_t v100 = v94 + 1; // 0xca088
					a3 = v100;
					int32_t v101 = v93 + 1; // 0xca08c
					v15 = v101;
					int32_t v102 = v92 - 1; // 0xca090
					v14 = v102;
					if (v102 == 0) {
						// break -> 0xca094
						break;
					}
					v31 = v102;
					v55 = v101;
					v30 = v100;
					// continue -> 0xca030
				}
				// 0xca094
				v88 = v19 + 16;
				v19 = v88;
				v89 = v16 + 1;
				v16 = v89;
				if (v89 >= g30) {
					// 0xca0a4
					v66 = &v5;
					v67 = &v20;
					v68 = &v21;
					v69 = &v6;
					v70 = &v7;
					v71 = &v8;
					v72 = &v9;
					g13 = v72;
					RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
					v32 = g31;
					v57 = v32 - 1;
					v17 = 0;
					if (g29 > 0) {
						v33 = v57;
						int32_t v103 = v32; // 0xca0f0
						v58 = 0;
						while (true) {
							// 0xca0ec
							v73 = g27 + v58;
							v14 = v33;
							v59 = g35 + 256 * (v4 + 8 * v5) + 1;
							v19 = v59;
							v15 = 1;
							int32_t v104; // 0xca180
							if (v103 >= 2) {
								v37 = v33;
								v36 = 1;
								v35 = v59;
								v34 = v58;
							lab_0xca108_6:;
								int32_t v105;
								while (true) {
									unsigned char v106 = *(char *)(16 * (v9 + v34) + v8 + v35); // 0xca11c
									int32_t v107 = v106;                                        // 0xca11c
									v105 = v34;
									int32_t v108 = v37; // 0xca17c
									int32_t v109 = v36; // 0xca178
									int32_t v110 = v35; // 0xca174
									if (v106 >= 0) {
										uint32_t v111 = v73;                        // 0xca128
										unsigned char v112 = *(char *)(g33 + v107); // 0xca12c
										int32_t v113 = v112;                        // 0xca12c
										uint32_t v114 = g28 - v36;                  // 0xca130
										if (v111 >= 0) {
											// 0xca138
											if (v111 <= 111) {
												// 0xca140
												if (v114 >= 0) {
													// 0xca148
													if (v114 <= 111) {
														char *v115 = (char *)(*(int32_t *)g36 + v114 + 112 * v73); // 0xca15c
														if (v113 < (int32_t)*v115) {
															// 0xca16c
															*v115 = v112;
															v105 = v17;
															v108 = v14;
															v109 = v15;
															v110 = v19;
															// branch -> 0xca174
														} else {
															v105 = v34;
															v108 = v37;
															v109 = v36;
															v110 = v35;
														}
													} else {
														v105 = v34;
														v108 = v37;
														v109 = v36;
														v110 = v35;
													}
												} else {
													v105 = v34;
													v108 = v37;
													v109 = v36;
													v110 = v35;
												}
											} else {
												v105 = v34;
												v108 = v37;
												v109 = v36;
												v110 = v35;
											}
										} else {
											v105 = v34;
											v108 = v37;
											v109 = v36;
											v110 = v35;
										}
									}
									int32_t v116 = v110 + 1; // 0xca174
									v19 = v116;
									int32_t v117 = v109 + 1; // 0xca178
									v15 = v117;
									int32_t v118 = v108 - 1; // 0xca17c
									v14 = v118;
									if (v118 == 0) {
										// break -> 0xca180
										break;
									}
									v37 = v118;
									v36 = v117;
									v35 = v116;
									v34 = v105;
									// continue -> 0xca108
								}
								// 0xca180
								v104 = v105 + 1;
								v17 = v104;
								if (v104 >= g29) {
									// 0xca18c
									g13 = v72;
									RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
									v38 = g32;
									v60 = v38 - 1;
									v17 = 0;
									if (g29 > 0) {
										v40 = 0;
										v39 = v60;
										int32_t v119 = v38; // 0xca1d4
										while (true) {
											// 0xca1d4
											v14 = v39;
											v61 = g35 + 256 * (v4 + 8 * v5) + 1;
											v18 = v61;
											int32_t v120 = g28; // 0xca1e0
											v15 = 1;
											int32_t v121; // 0xca264
											if (v119 >= 2) {
												v44 = v39;
												v43 = 1;
												v42 = v61;
												v41 = v40;
											lab_0xca1ec_8:;
												int32_t v122;
												while (true) {
													unsigned char v123 = *(char *)(16 * (v9 + v41) + v8 + v42); // 0xca200
													int32_t v124 = v123;                                        // 0xca200
													v122 = v41;
													int32_t v125 = v44; // 0xca260
													int32_t v126 = v43; // 0xca25c
													int32_t v127 = v42; // 0xca258
													if (v123 >= 0) {
														uint32_t v128 = g27 - v43;                  // 0xca20c
														unsigned char v129 = *(char *)(g33 + v124); // 0xca210
														int32_t v130 = v129;                        // 0xca210
														if (v128 >= 0) {
															// 0xca218
															if (v128 <= 111) {
																uint32_t v131 = v120 - v40; // 0xca220
																if (v131 >= 0) {
																	// 0xca228
																	if (v131 <= 111) {
																		char *v132 = (char *)(v131 + 112 * v128 + *(int32_t *)g36); // 0xca240
																		if (v130 < (int32_t)*v132) {
																			// 0xca250
																			*v132 = v129;
																			v122 = v17;
																			v125 = v14;
																			v126 = v15;
																			v127 = v18;
																			// branch -> 0xca258
																		} else {
																			v122 = v41;
																			v125 = v44;
																			v126 = v43;
																			v127 = v42;
																		}
																	} else {
																		v122 = v41;
																		v125 = v44;
																		v126 = v43;
																		v127 = v42;
																	}
																} else {
																	v122 = v41;
																	v125 = v44;
																	v126 = v43;
																	v127 = v42;
																}
															} else {
																v122 = v41;
																v125 = v44;
																v126 = v43;
																v127 = v42;
															}
														} else {
															v122 = v41;
															v125 = v44;
															v126 = v43;
															v127 = v42;
														}
													}
													int32_t v133 = v127 + 1; // 0xca258
													v18 = v133;
													int32_t v134 = v126 + 1; // 0xca25c
													v15 = v134;
													int32_t v135 = v125 - 1; // 0xca260
													v14 = v135;
													if (v135 == 0) {
														// break -> 0xca264
														break;
													}
													v44 = v135;
													v43 = v134;
													v42 = v133;
													v41 = v122;
													// continue -> 0xca1ec
												}
												// 0xca264
												v121 = v122 + 1;
												v17 = v121;
												if (v121 >= g29) {
													// 0xca270
													g13 = v72;
													RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
													v45 = g32;
													v62 = v45 - 1;
													int32_t v136 = v4; // 0xca29c
													v17 = 0;
													if (g30 > 0) {
														v47 = v62;
														int32_t v137 = v45; // 0xca2bc
														v46 = 0;
														while (true) {
															// 0xca2b8
															v74 = g27 - v46;
															v14 = v47;
															v63 = g35 + 256 * (v136 + 8 * v5) + 1;
															v19 = v63;
															v15 = 1;
															int32_t result; // 0xca34c
															if (v137 >= 2) {
																v50 = v47;
																v64 = 1;
																v49 = v63;
																v48 = v46;
															lab_0xca2d4_10:;
																int32_t v138;
																while (true) {
																	unsigned char v139 = *(char *)(16 * (v9 + v48) + v8 + v49); // 0xca2e8
																	int32_t v140 = v139;                                        // 0xca2e8
																	v138 = v48;
																	int32_t v141 = v50; // 0xca348
																	int32_t v142 = v64; // 0xca344
																	int32_t v143 = v49; // 0xca340
																	if (v139 >= 0) {
																		uint32_t v144 = v74;                        // 0xca2f4
																		unsigned char v145 = *(char *)(g33 + v140); // 0xca2f8
																		int32_t v146 = v145;                        // 0xca2f8
																		uint32_t v147 = g28 + v64;                  // 0xca2fc
																		if (v144 >= 0) {
																			// 0xca304
																			if (v144 <= 111) {
																				// 0xca30c
																				if (v147 >= 0) {
																					// 0xca314
																					if (v147 <= 111) {
																						char *v148 = (char *)(*(int32_t *)g36 + v147 + 112 * v74); // 0xca328
																						if (v146 < (int32_t)*v148) {
																							// 0xca338
																							*v148 = v145;
																							v138 = v17;
																							v141 = v14;
																							v142 = v15;
																							v143 = v19;
																							// branch -> 0xca340
																						} else {
																							v138 = v48;
																							v141 = v50;
																							v142 = v64;
																							v143 = v49;
																						}
																					} else {
																						v138 = v48;
																						v141 = v50;
																						v142 = v64;
																						v143 = v49;
																					}
																				} else {
																					v138 = v48;
																					v141 = v50;
																					v142 = v64;
																					v143 = v49;
																				}
																			} else {
																				v138 = v48;
																				v141 = v50;
																				v142 = v64;
																				v143 = v49;
																			}
																		} else {
																			v138 = v48;
																			v141 = v50;
																			v142 = v64;
																			v143 = v49;
																		}
																	}
																	int32_t v149 = v143 + 1; // 0xca340
																	v19 = v149;
																	int32_t v150 = v142 + 1; // 0xca344
																	v15 = v150;
																	int32_t v151 = v141 - 1; // 0xca348
																	v14 = v151;
																	if (v151 == 0) {
																		// break -> 0xca34c
																		break;
																	}
																	v50 = v151;
																	v64 = v150;
																	v49 = v149;
																	v48 = v138;
																	// continue -> 0xca2d4
																}
																// 0xca34c
																result = v138 + 1;
																v17 = result;
																if (result >= g30) {
																	// 0xca358
																	g10 = v1;
																	return result;
																}
															lab_0xca34c:
																// 0xca34c
																v47 = v62;
																v137 = g32;
																v46 = result;
																// branch -> 0xca2b8
																continue;
															}
														lab_0xca34c_11:
															// 0xca34c
															result = v46 + 1;
															v17 = result;
															if (result < g30) {
																goto lab_0xca34c;
															}
															// 0xca358
															g10 = v1;
															return result;
														}
													}
													// 0xca358
													g10 = v1;
													return 0;
												}
											lab_0xca264:
												// 0xca264
												v40 = v121;
												v39 = v60;
												v119 = g32;
												// branch -> 0xca1d4
												continue;
											}
										lab_0xca264_9:
											// 0xca264
											v121 = v40 + 1;
											v17 = v121;
											if (v121 < g29) {
												goto lab_0xca264;
											}
											// 0xca270
											g13 = v72;
											RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
											v45 = g32;
											v62 = v45 - 1;
											v17 = 0;
											if (g30 > 0) {
												v47 = v62;
												v46 = 0;
												while (true) {
													// 0xca2b8
													v74 = g27 - v46;
													v14 = v47;
													v63 = g35 + 256 * (v4 + 8 * v5) + 1;
													v19 = v63;
													v15 = 1;
													if (v45 < 2) {
														goto lab_0xca34c_11;
													}
													v50 = v47;
													v64 = 1;
													v49 = v63;
													v48 = v46;
													goto lab_0xca2d4_10;
												}
											}
											// 0xca358
											g10 = v1;
											return 0;
										}
									}
									// 0xca270
									g13 = v72;
									RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
									v45 = g32;
									v62 = v45 - 1;
									v17 = 0;
									if (g30 > 0) {
										v47 = v62;
										v46 = 0;
										while (true) {
											// 0xca2b8
											v74 = g27 - v46;
											v14 = v47;
											v63 = g35 + 256 * (v4 + 8 * v5) + 1;
											v19 = v63;
											v15 = 1;
											if (v45 < 2) {
												goto lab_0xca34c_11;
											}
											v50 = v47;
											v64 = 1;
											v49 = v63;
											v48 = v46;
											goto lab_0xca2d4_10;
										}
									}
									// 0xca358
									g10 = v1;
									return 0;
								}
							lab_0xca180:
								// 0xca180
								v33 = v57;
								v103 = g31;
								v58 = v104;
								// branch -> 0xca0ec
								continue;
							}
						lab_0xca180_7:
							// 0xca180
							v104 = v58 + 1;
							v17 = v104;
							if (v104 < g29) {
								goto lab_0xca180;
							}
							// 0xca18c
							g13 = v72;
							RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
							v38 = g32;
							v60 = v38 - 1;
							v17 = 0;
							if (g29 > 0) {
								v40 = 0;
								v39 = v60;
								while (true) {
									// 0xca1d4
									v14 = v39;
									v61 = g35 + 256 * (v4 + 8 * v5) + 1;
									v18 = v61;
									v15 = 1;
									if (v38 < 2) {
										goto lab_0xca264_9;
									}
									v44 = v39;
									v43 = 1;
									v42 = v61;
									v41 = v40;
									goto lab_0xca1ec_8;
								}
							}
							// 0xca270
							g13 = v72;
							RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
							v45 = g32;
							v62 = v45 - 1;
							v17 = 0;
							if (g30 > 0) {
								v47 = v62;
								v46 = 0;
								while (true) {
									// 0xca2b8
									v74 = g27 - v46;
									v14 = v47;
									v63 = g35 + 256 * (v4 + 8 * v5) + 1;
									v19 = v63;
									v15 = 1;
									if (v45 < 2) {
										goto lab_0xca34c_11;
									}
									v50 = v47;
									v64 = 1;
									v49 = v63;
									v48 = v46;
									goto lab_0xca2d4_10;
								}
							}
							// 0xca358
							g10 = v1;
							return 0;
						}
					}
					// 0xca18c
					g13 = v72;
					RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
					v38 = g32;
					v60 = v38 - 1;
					v17 = 0;
					if (g29 > 0) {
						v40 = 0;
						v39 = v60;
						while (true) {
							// 0xca1d4
							v14 = v39;
							v61 = g35 + 256 * (v4 + 8 * v5) + 1;
							v18 = v61;
							v15 = 1;
							if (v38 < 2) {
								goto lab_0xca264_9;
							}
							v44 = v39;
							v43 = 1;
							v42 = v61;
							v41 = v40;
							goto lab_0xca1ec_8;
						}
					}
					// 0xca270
					g13 = v72;
					RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
					v45 = g32;
					v62 = v45 - 1;
					v17 = 0;
					if (g30 > 0) {
						v47 = v62;
						v46 = 0;
						while (true) {
							// 0xca2b8
							v74 = g27 - v46;
							v14 = v47;
							v63 = g35 + 256 * (v4 + 8 * v5) + 1;
							v19 = v63;
							v15 = 1;
							if (v45 < 2) {
								goto lab_0xca34c_11;
							}
							v50 = v47;
							v64 = 1;
							v49 = v63;
							v48 = v46;
							goto lab_0xca2d4_10;
						}
					}
					// 0xca358
					g10 = v1;
					return 0;
				}
			lab_0xca094:
				// 0xca094
				v54 = v89;
				v86 = v88;
				v28 = v52;
				v87 = g31;
				// branch -> 0xca018
				continue;
			}
		lab_0xca094_5:
			// 0xca094
			v88 = v19 + 16;
			v19 = v88;
			v89 = v16 + 1;
			v16 = v89;
			if (v89 < g30) {
				goto lab_0xca094;
			}
			// 0xca0a4
			v66 = &v5;
			v67 = &v20;
			v68 = &v21;
			v69 = &v6;
			v70 = &v7;
			v71 = &v8;
			v72 = &v9;
			g13 = v72;
			RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
			v32 = g31;
			v57 = v32 - 1;
			v17 = 0;
			if (g29 > 0) {
				v33 = v57;
				v58 = 0;
				while (true) {
					// 0xca0ec
					v73 = g27 + v58;
					v14 = v33;
					v59 = g35 + 256 * (v4 + 8 * v5) + 1;
					v19 = v59;
					v15 = 1;
					if (v32 < 2) {
						goto lab_0xca180_7;
					}
					v37 = v33;
					v36 = 1;
					v35 = v59;
					v34 = v58;
					goto lab_0xca108_6;
				}
			}
			// 0xca18c
			g13 = v72;
			RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
			v38 = g32;
			v60 = v38 - 1;
			v17 = 0;
			if (g29 > 0) {
				v40 = 0;
				v39 = v60;
				while (true) {
					// 0xca1d4
					v14 = v39;
					v61 = g35 + 256 * (v4 + 8 * v5) + 1;
					v18 = v61;
					v15 = 1;
					if (v38 < 2) {
						goto lab_0xca264_9;
					}
					v44 = v39;
					v43 = 1;
					v42 = v61;
					v41 = v40;
					goto lab_0xca1ec_8;
				}
			}
			// 0xca270
			g13 = v72;
			RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
			v45 = g32;
			v62 = v45 - 1;
			v17 = 0;
			if (g30 > 0) {
				v47 = v62;
				v46 = 0;
				while (true) {
					// 0xca2b8
					v74 = g27 - v46;
					v14 = v47;
					v63 = g35 + 256 * (v4 + 8 * v5) + 1;
					v19 = v63;
					v15 = 1;
					if (v45 < 2) {
						goto lab_0xca34c_11;
					}
					v50 = v47;
					v64 = 1;
					v49 = v63;
					v48 = v46;
					goto lab_0xca2d4_10;
				}
			}
			// 0xca358
			g10 = v1;
			return 0;
		}
	}
	// 0xca0a4
	v66 = &v5;
	v67 = &v20;
	v68 = &v21;
	v69 = &v6;
	v70 = &v7;
	v71 = &v8;
	v72 = &v9;
	g13 = v72;
	RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
	v32 = g31;
	v57 = v32 - 1;
	v17 = 0;
	if (g29 > 0) {
		v33 = v57;
		v58 = 0;
		while (true) {
			// 0xca0ec
			v73 = g27 + v58;
			v14 = v33;
			v59 = g35 + 256 * (v4 + 8 * v5) + 1;
			v19 = v59;
			v15 = 1;
			if (v32 < 2) {
				goto lab_0xca180_7;
			}
			v37 = v33;
			v36 = 1;
			v35 = v59;
			v34 = v58;
			goto lab_0xca108_6;
		}
	}
	// 0xca18c
	g13 = v72;
	RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
	v38 = g32;
	v60 = v38 - 1;
	v17 = 0;
	if (g29 > 0) {
		v40 = 0;
		v39 = v60;
		while (true) {
			// 0xca1d4
			v14 = v39;
			v61 = g35 + 256 * (v4 + 8 * v5) + 1;
			v18 = v61;
			v15 = 1;
			if (v38 < 2) {
				goto lab_0xca264_9;
			}
			v44 = v39;
			v43 = 1;
			v42 = v61;
			v41 = v40;
			goto lab_0xca1ec_8;
		}
	}
	// 0xca270
	g13 = v72;
	RotateRadius(&v4, v66, v67, v68, v69, v70, v71);
	v45 = g32;
	v62 = v45 - 1;
	v17 = 0;
	if (g30 > 0) {
		v47 = v62;
		v46 = 0;
		while (true) {
			// 0xca2b8
			v74 = g27 - v46;
			v14 = v47;
			v63 = g35 + 256 * (v4 + 8 * v5) + 1;
			v19 = v63;
			v15 = 1;
			if (v45 < 2) {
				goto lab_0xca34c_11;
			}
			v50 = v47;
			v64 = 1;
			v49 = v63;
			v48 = v46;
			goto lab_0xca2d4_10;
		}
	}
	// 0xca358
	g10 = v1;
	return 0;
}

// Address range: 0xca36c - 0xca430
int32_t function_ca36c(int32_t result2, int32_t a2, int32_t a3)
{
	int32_t result = result2;                // r3
	int32_t v1 = a3 + 1;                     // 0xca36c
	int32_t v2 = a2 - v1;                    // 0xca374
	int32_t v3 = *(int32_t *)(g23 - 0x7590); // 0xca37c
	int32_t v4 = result2 - v1;               // 0xca380
	int32_t v5 = v4;                         // r9
	int32_t v6 = *(int32_t *)(g23 - 0x758c); // 0xca384
	int32_t v7 = a3 + a2 + 1;                // 0xca388
	int32_t v8 = v7;                         // r11
	int32_t v9 = a3 + result2 + 1;           // 0xca38c
	int32_t v10 = v9;                        // r10
	int32_t v11 = v2;                        // 0xca3bc
	if (v2 <= 0xffffffff) {
		// 0xca394
		v11 = 0;
		// branch -> 0xca398
	}
	int32_t v12 = v7; // 0xca4241
	if (v7 >= 113) {
		// 0xca3a0
		v8 = 112;
		v12 = 112;
		// branch -> 0xca3a4
	}
	int32_t v13 = v4; // 0xca3c47
	if (v4 <= 0xffffffff) {
		// 0xca3ac
		v5 = 0;
		v13 = 0;
		// branch -> 0xca3b0
	}
	int32_t v14 = v9; // 0xca3c89
	if (v9 >= 113) {
		// 0xca3b8
		v10 = 112;
		v14 = 112;
		// branch -> 0xca3bc
	}
	int32_t v15 = v11; // r8
	if (v11 < v12) {
		while (true) {
			int32_t v16 = v13;       // r7
			int32_t v17 = v14 - v13; // 0xca3c8
			int32_t v18 = 112 * v13; // 0xca3d0
			int32_t v19 = v12;       // 0xca424
			int32_t v20 = v11;       // 0xca420
			if (v14 > v13) {
				int32_t v21 = v13; // 0xca3e4
				while (true) {
					int32_t v22 = v21; // 0xca418
					if (v21 >= 0) {
						// 0xca3e4
						if (v21 <= 111) {
							uint32_t v23 = v15; // 0xca3ec
							if (v23 >= 0) {
								// 0xca3f4
								if (v23 <= 111) {
									unsigned char v24 = *(char *)(*(int32_t *)v3 + v18 + v23); // 0xca408
									result = v24;
									*(char *)(*(int32_t *)v6 + v18 + v23) = v24;
									v22 = v16;
									// branch -> 0xca414
								} else {
									v22 = v21;
								}
							} else {
								v22 = v21;
							}
						} else {
							v22 = v21;
						}
					}
					int32_t v25 = v18 + 112; // 0xca414
					int32_t v26 = v22 + 1;   // 0xca418
					v16 = v26;
					int32_t v27 = v17 - 1; // 0xca41c
					if (v27 == 0) {
						// break -> 0xca420
						break;
					}
					v17 = v27;
					v18 = v25;
					v21 = v26;
					// continue -> 0xca3dc
				}
				// 0xca420
				v19 = v8;
				v20 = v15;
				// branch -> 0xca420
			}
			int32_t v28 = v20 + 1; // 0xca420
			v15 = v28;
			if (v28 >= v19) {
				// 0xca424
				// branch -> 0xca42c
				// 0xca42c
				return result;
			}
			// 0xca420
			v12 = v19;
			v11 = v28;
			v14 = v10;
			v13 = v5;
			// branch -> 0xca3c4
		}
	}
	// 0xca42c
	return result2;
}

// Address range: 0xca430 - 0xca5ac
int32_t function_ca430(int32_t result2, int32_t a2, int32_t a3)
{
	int32_t v1 = a3 + 1;                     // 0xca430
	int32_t v2 = a2 - v1;                    // 0xca438
	int32_t v3 = *(int32_t *)(g23 - 0x779c); // r6
	int32_t v4 = result2 - v1;               // 0xca444
	int32_t v5 = a3 + result2 + 1;           // 0xca448
	int32_t v6 = v5;                         // r11
	int32_t v7 = a3 + a2 + 1;                // 0xca44c
	int32_t v8 = v7;                         // r12
	int32_t v9 = v2 < 0 ? 0 : v2;
	int32_t v10 = v7; // 0xca4949
	if (v7 >= 113) {
		// 0xca464
		v8 = 112;
		v10 = 112;
		// branch -> 0xca468
	}
	int32_t v11 = v4; // 0xca480
	if (v4 <= 0xffffffff) {
		// 0xca470
		v11 = 0;
		// branch -> 0xca474
	}
	int32_t v12 = v5; // 0xca5a02
	if (v5 >= 113) {
		// 0xca47c
		v6 = 112;
		v12 = 112;
		// branch -> 0xca480
	}
	int32_t v13 = 112 * v11; // r7
	int32_t v14 = v11;       // r8
	int32_t v15 = -67;       // r4
	if (v11 < v12) {
		int32_t v16 = v9; // 0xca490
		while (true) {
			int32_t v17 = v16;       // r9
			int32_t v18 = v10 - v16; // 0xca498
			int32_t result = v18;    // r3
			int32_t v19;             // 0xca59c
			if (v10 > v16) {
				int32_t v20 = __asm_rlwinm_(v18, 29, 3, 31); // 0xca4a0
				int32_t v21 = v20;                           // ctr
				int32_t v22;                                 // 0xca578
				if (v20 == 0) {
					// 0xca4a0
					v22 = result;
					// branch -> 0xca578
				lab_0xca578:;
					int32_t v23 = *(int32_t *)v3;          // 0xca57c
					int32_t v24 = v17;                     // 0xca580
					char *v25 = (char *)(v13 + v24 + v23); // 0xca588
					*v25 = (char)(v15 & (int32_t)*v25);
					int32_t v26 = v22 - 1; // 0xca594
					// branch -> 0xca57c
					while (v26 != 0) {
						// 0xca57c
						v23 = *(int32_t *)v3;
						v24++;
						v25 = (char *)(v13 + v24 + v23);
						*v25 = (char)(v15 & (int32_t)*v25);
						v26--;
						// continue -> 0xca57c
					}
				lab_0xca598:
					// 0xca598
					v13 += 112;
					v19 = v14 + 1;
					v14 = v19;
					if (v19 >= v6) {
						// 0xca5a0
						// branch -> 0xca5a8
						// 0xca5a8
						return result;
					}
				lab_0xca598_3:
					// 0xca598
					v10 = v8;
					v16 = v9;
					// branch -> 0xca490
					continue;
				} else {
					int32_t v27 = *(int32_t *)v3;          // 0xca4ac
					int32_t v28 = v17;                     // 0xca4b0
					char *v29 = (char *)(v13 + v28 + v27); // 0xca4b8
					*v29 = (char)(v15 & (int32_t)*v29);
					int32_t v30 = *(int32_t *)v3;          // 0xca4c4
					int32_t v31 = v28 + 1;                 // 0xca4c8
					char *v32 = (char *)(v13 + v31 + v30); // 0xca4d0
					*v32 = (char)(v15 & (int32_t)*v32);
					int32_t v33 = *(int32_t *)v3;          // 0xca4dc
					int32_t v34 = v31 + 1;                 // 0xca4e0
					char *v35 = (char *)(v13 + v34 + v33); // 0xca4e8
					*v35 = (char)(v15 & (int32_t)*v35);
					int32_t v36 = *(int32_t *)v3;          // 0xca4f4
					int32_t v37 = v34 + 1;                 // 0xca4f8
					char *v38 = (char *)(v13 + v37 + v36); // 0xca500
					*v38 = (char)(v15 & (int32_t)*v38);
					int32_t v39 = *(int32_t *)v3;          // 0xca50c
					int32_t v40 = v37 + 1;                 // 0xca510
					char *v41 = (char *)(v13 + v40 + v39); // 0xca518
					*v41 = (char)(v15 & (int32_t)*v41);
					int32_t v42 = *(int32_t *)v3;          // 0xca524
					int32_t v43 = v40 + 1;                 // 0xca528
					char *v44 = (char *)(v13 + v43 + v42); // 0xca530
					*v44 = (char)(v15 & (int32_t)*v44);
					int32_t v45 = *(int32_t *)v3;          // 0xca53c
					int32_t v46 = v43 + 1;                 // 0xca540
					char *v47 = (char *)(v13 + v46 + v45); // 0xca548
					*v47 = (char)(v15 & (int32_t)*v47);
					int32_t v48 = *(int32_t *)v3; // 0xca554
					int32_t v49 = v46 + 1;        // 0xca558
					v17 = v49 + 1;
					char *v50 = (char *)(v13 + v49 + v48); // 0xca560
					*v50 = (char)(v15 & (int32_t)*v50);
					int32_t v51 = v21 - 1; // 0xca56c
					while (v51 != 0) {
						// 0xca4ac
						v27 = *(int32_t *)v3;
						v28 = v17;
						v29 = (char *)(v13 + v28 + v27);
						*v29 = (char)(v15 & (int32_t)*v29);
						v30 = *(int32_t *)v3;
						v31 = v28 + 1;
						v32 = (char *)(v13 + v31 + v30);
						*v32 = (char)(v15 & (int32_t)*v32);
						v33 = *(int32_t *)v3;
						v34 = v31 + 1;
						v35 = (char *)(v13 + v34 + v33);
						*v35 = (char)(v15 & (int32_t)*v35);
						v36 = *(int32_t *)v3;
						v37 = v34 + 1;
						v38 = (char *)(v13 + v37 + v36);
						*v38 = (char)(v15 & (int32_t)*v38);
						v39 = *(int32_t *)v3;
						v40 = v37 + 1;
						v41 = (char *)(v13 + v40 + v39);
						*v41 = (char)(v15 & (int32_t)*v41);
						v42 = *(int32_t *)v3;
						v43 = v40 + 1;
						v44 = (char *)(v13 + v43 + v42);
						*v44 = (char)(v15 & (int32_t)*v44);
						v45 = *(int32_t *)v3;
						v46 = v43 + 1;
						v47 = (char *)(v13 + v46 + v45);
						*v47 = (char)(v15 & (int32_t)*v47);
						v48 = *(int32_t *)v3;
						v49 = v46 + 1;
						v17 = v49 + 1;
						v50 = (char *)(v13 + v49 + v48);
						*v50 = (char)(v15 & (int32_t)*v50);
						v51--;
						// continue -> 0xca4ac
					}
					int32_t v52 = result % 8; // 0xca570
					result = v52;
					if (v52 == 0) {
						goto lab_0xca598;
					}
					v22 = v52;
					goto lab_0xca578;
				}
			}
			// 0xca598
			v13 += 112;
			v19 = v14 + 1;
			v14 = v19;
			if (v19 < v6) {
				goto lab_0xca598_3;
			}
			// 0xca5a0
			// branch -> 0xca5a8
			// 0xca5a8
			return result;
		}
	}
	// 0xca5a8
	return result2;
}

// Address range: 0xca5ac - 0xca900
int32_t DoVision(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	g32 = a1;
	g20 = *(int32_t *)(g23 - 0x7268);
	g19 = *(int32_t *)(g23 - 0x7588);
	g18 = *(int32_t *)(g23 - 0x757c);
	g31 = a2;
	g26 = *(int32_t *)(g23 - 0x7228);
	g22 = a4;
	int32_t v1 = *(int32_t *)(g23 - 0x779c); // 0xca5d0
	g30 = v1;
	g21 = a5;
	int32_t v2;
	int32_t v3; // 0xca67c
	int32_t v4; // 0xca690
	int32_t v5; // 0xca8c832
	int32_t v6; // 0xca684
	if (a1 >= 0) {
		// 0xca5e8
		if (a1 <= 112) {
			// 0xca5f0
			if (a2 >= 0) {
				// 0xca5f8
				if (a2 <= 112) {
					if (a4 != 0) {
						int32_t v7 = 112 * a1; // 0xca608
						int32_t v8 = a2;       // 0xca630
						int32_t v9 = v1;       // 0xca62c
						if (*(char *)(*(int32_t *)v1 + a2 + v7) >= 0) {
							// 0xca620
							SetAutomapView(a1, a1);
							v8 = g31;
							v9 = g30;
							// branch -> 0xca62c
						}
						char *v10 = (char *)(*(int32_t *)v9 + v7 + v8); // 0xca634
						*v10 = (char)((int32_t)*v10 | 128);
						a5 = g21;
						// branch -> 0xca640
					}
					// 0xca640
					if (a5 != 0) {
						char *v11 = (char *)(g31 + 112 * g32 + *(int32_t *)g30); // 0xca654
						*v11 = (char)((int32_t)*v11 | 64);
						// branch -> 0xca660
					}
					char *v12 = (char *)(g31 + 112 * g32 + *(int32_t *)g30); // 0xca66c
					*v12 = (char)((int32_t)*v12 | 2);
					// branch -> 0xca678
				}
				// 0xca678
				g28 = 0;
				// branch -> 0xca67c
				int32_t result; // 0xca8d4
				while (true) {
					// 0xca67c
					v3 = g23;
					g17 = 0;
					v6 = *(int32_t *)(v3 - 0x7100);
					g16 = v6;
					v5 = 0;
					v4 = v6;
					v2 = *(int32_t *)(v3 - 0x6ea0);
					// branch -> 0xca68c
				lab_0xca68c_4:;
					int32_t v13; // 0xca8e0
					while (true) {
						// 0xca68c
						g33 = v4;
						g27 = 0;
						g25 = 0;
						int32_t v14 = 2 * (a3 - (int32_t) * (char *)v2); // 0xca6a8
						g24 = v14;
						int32_t v15 = v4; // 0xca8d0
						int32_t v16 = v5; // 0xca8c8
						int32_t v17;      // 0xca8c8
						int32_t v18;      // 0xca8d0
						if (v14 > 0) {
							int32_t v19 = v4; // 0xca74031
							// branch -> 0xca6b0
							while (true) {
								int32_t v20 = g28; // 0xca6b0
								int32_t v21;       // 0xca7b4
								int32_t v22;
								int32_t v23; // 0xca7b8
								int32_t v24;
								int32_t v25; // 0xca7f0
								int32_t v26;
								int32_t v27; // 0xca7f4
								int32_t v28;
								int32_t v29; // 0xca74c
								if (v20 == 2) {
									unsigned char v30 = *(char *)v19;       // 0xca740
									unsigned char v31 = *(char *)(v19 + 1); // 0xca744
									v29 = g32 + (int32_t)v30;
									g35 = v29;
									g36 = g31 - (int32_t)v31;
									v27 = 0;
									v25 = 0;
									v23 = 0;
									v21 = 0;
									if (v30 != 0) {
										// 0xca758
										v28 = 0;
										v26 = 0;
										v24 = 0;
										v22 = 0;
										if (v31 != 0) {
											// 0xca760
											v28 = 1;
											v26 = 0;
											v24 = 0;
											v22 = -1;
											// branch -> 0xca794
										}
									lab_0xca794_11:
										// 0xca794
										v29 = g35;
										v27 = v28;
										v25 = v26;
										v23 = v24;
										v21 = v22;
										// branch -> 0xca794
									}
								lab_0xca794_9:;
									// 0xca794
									int32_t v32; // 0xca8ac
									int32_t v33; // 0xca8b0
									if (v29 >= 0) {
									lab_0xca79c_2:
										// 0xca79c
										if (v29 <= 112) {
											int32_t v34 = g36; // 0xca7a4
											if (v34 >= 0) {
												// 0xca7ac
												if (v34 <= 112) {
													int32_t v35 = *(int32_t *)g18;                                    // 0xca7c0
													int32_t v36 = 2 * (v34 + v23) + 224 * (v21 + v29);                // 0xca7c8
													int32_t v37 = g26;                                                // 0xca7d4
													int32_t v38 = (int32_t) * (int16_t *)(v35 + 2 * v34 + 224 * v29); // 0xca7e4
													g27 = (int32_t) * (char *)(v38 + v37);
													if (*(char *)(v37 + (int32_t) * (int16_t *)(v35 + v36)) != 0) {
														int32_t v39 = 2 * (v34 + v27) + 224 * (v25 + v29); // 0xca800
														if (*(char *)((int32_t) * (int16_t *)(v35 + v39) + v37) != 0) {
														lab_0xca8ac_3:
															// 0xca8ac
															v32 = g33 + 2;
															g33 = v32;
															v33 = g25 + 2;
															g25 = v33;
															if (v33 < g24) {
															lab_0xca8ac_4:
																// 0xca8ac
																if (g27 != 0) {
																	// break -> 0xca8c4
																	break;
																}
																v19 = v32;
																// continue -> 0xca6b0
																continue;
															}
														lab_0xca8c4:
															// 0xca8c4
															// branch -> 0xca8c4
															// 0xca8c4
															v17 = g17 + 1;
															g17 = v17;
															v18 = g16 + 30;
															g16 = v18;
															result = v2 + 1;
															if (v17 >= 23) {
																// break (via goto) -> 0xca8e0
																goto lab_0xca8e0;
															}
															v5 = v17;
															v4 = v18;
															v2 = result;
															// continue (via goto) -> 0xca68c
															goto lab_0xca68c_4;
														}
													}
													// 0xca814
													if (g22 != 0) {
														int32_t v40 = 112 * v29; // 0xca81c
														g29 = v40;
														int32_t v41 = g30; // 0xca820
														int32_t v42 = v34; // 0xca844
														int32_t v43 = v40; // 0xca844
														int32_t v44 = v41; // 0xca840
														if (*(char *)(*(int32_t *)v41 + v34 + v40) >= 0) {
															// 0xca834
															SetAutomapView(v29, v34);
															v42 = g36;
															v43 = g29;
															v44 = g30;
															// branch -> 0xca840
														}
														char *v45 = (char *)(*(int32_t *)v44 + v43 + v42); // 0xca848
														*v45 = (char)((int32_t)*v45 | 128);
														// branch -> 0xca854
													}
													// 0xca854
													if (g21 != 0) {
														char *v46 = (char *)(g36 + 112 * g35 + *(int32_t *)g30); // 0xca868
														*v46 = (char)((int32_t)*v46 | 64);
														// branch -> 0xca874
													}
													int32_t v47 = g36 + 112 * g35;               // 0xca880
													int32_t v48 = v47;                           // r0
													char *v49 = (char *)(v47 + *(int32_t *)g30); // 0xca884
													*v49 = (char)((int32_t)*v49 | 2);
													if (g27 != 0) {
														goto lab_0xca8ac_3;
													}
													char v50 = *(char *)(v48 + *(int32_t *)g19); // 0xca898
													int32_t v51 = v50;                           // 0xca89c
													if (v50 == 0) {
														goto lab_0xca8ac_3;
													}
													// 0xca8a4
													*(char *)(g20 + v51) = 1;
													// branch -> 0xca8ac
													goto lab_0xca8ac_3;
												}
											}
										}
									}
								lab_0xca8ac_6:
									// 0xca8ac
									v32 = g33 + 2;
									g33 = v32;
									v33 = g25 + 2;
									g25 = v33;
									if (v33 < g24) {
										goto lab_0xca8ac_4;
									}
									goto lab_0xca8c4;
								} else {
									// 0xca6c8
									if (v20 > 2) {
										// 0xca6dc
										if (v20 != 3) {
											v28 = 0;
											v26 = 0;
											v24 = 0;
											v22 = 0;
											goto lab_0xca794_11;
										}
										unsigned char v52 = *(char *)v19;       // 0xca76c
										unsigned char v53 = *(char *)(v19 + 1); // 0xca770
										int32_t v54 = g32 - (int32_t)v52;       // 0xca778
										g35 = v54;
										g36 = g31 + (int32_t)v53;
										if (v52 == 0) {
											v29 = v54;
											v27 = 0;
											v25 = 0;
											v23 = 0;
											v21 = 0;
											goto lab_0xca794_9;
										}
										// 0xca784
										if (v53 == 0) {
											v28 = 0;
											v26 = 0;
											v24 = 0;
											v22 = 0;
											goto lab_0xca794_11;
										}
										// 0xca78c
										v28 = 0;
										v26 = 1;
										v24 = -1;
										v22 = 0;
										// branch -> 0xca794
										goto lab_0xca794_11;
									} else {
										// 0xca6cc
										if (v20 == 0) {
											unsigned char v55 = *(char *)v19;       // 0xca6e8
											unsigned char v56 = *(char *)(v19 + 1); // 0xca6ec
											int32_t v57 = g32 + (int32_t)v55;       // 0xca6f4
											g35 = v57;
											g36 = g31 + (int32_t)v56;
											if (v55 == 0) {
												v29 = v57;
												v27 = 0;
												v25 = 0;
												v23 = 0;
												v21 = 0;
												goto lab_0xca794_9;
											}
											// 0xca700
											if (v56 == 0) {
												v28 = 0;
												v26 = 0;
												v24 = 0;
												v22 = 0;
												goto lab_0xca794_11;
											}
											// 0xca708
											v28 = -1;
											v26 = 0;
											v24 = 0;
											v22 = -1;
											// branch -> 0xca794
											goto lab_0xca794_11;
										} else {
											// 0xca6d4
											if (v20 <= 0) {
												v28 = 0;
												v26 = 0;
												v24 = 0;
												v22 = 0;
												goto lab_0xca794_11;
											}
											unsigned char v58 = *(char *)v19;       // 0xca714
											unsigned char v59 = *(char *)(v19 + 1); // 0xca718
											int32_t v60 = g32 - (int32_t)v58;       // 0xca720
											g35 = v60;
											g36 = g31 - (int32_t)v59;
											if (v58 == 0) {
												v29 = v60;
												v27 = 0;
												v25 = 0;
												v23 = 0;
												v21 = 0;
												goto lab_0xca794_9;
											}
											// 0xca72c
											if (v59 == 0) {
												v28 = 0;
												v26 = 0;
												v24 = 0;
												v22 = 0;
												goto lab_0xca794_11;
											}
											// 0xca734
											v28 = 0;
											v26 = 1;
											v24 = 1;
											v22 = 0;
											// branch -> 0xca794
											goto lab_0xca794_11;
										}
										// 0xca794
										if (v29 < 0) {
											goto lab_0xca8ac_6;
										}
										goto lab_0xca79c_2;
									}
								lab_0xca794_12:
									// 0xca794
									if (v29 < 0) {
										goto lab_0xca8ac_6;
									}
									goto lab_0xca79c_2;
								}
								int32_t v61 = g35;
								v29 = v61;
								v27 = v28;
								v25 = v26;
								v23 = v24;
								v21 = v22;
								// branch -> 0xca794
								goto lab_0xca794_12;
							}
							// 0xca8e0
							v13 = g28 + 1;
							g28 = v13;
							if (v13 >= 4) {
								// break (via goto) -> 0xca8ec
								goto lab_0xca8ec;
							}
							// continue (via goto) -> 0xca67c
							goto lab_0xca67c;
						}
						// 0xca8c4
						v17 = v16 + 1;
						g17 = v17;
						v18 = v15 + 30;
						g16 = v18;
						result = v2 + 1;
						if (v17 >= 23) {
							// break -> 0xca8e0
							break;
						}
						v5 = v17;
						v4 = v18;
						v2 = result;
						// continue -> 0xca68c
					}
				lab_0xca8e0:
					// 0xca8e0
					v13 = g28 + 1;
					g28 = v13;
					if (v13 >= 4) {
						// break -> 0xca8ec
						break;
					}
					// continue -> 0xca67c
				}
			lab_0xca8ec:
				// 0xca8ec
				return result;
			}
			// 0xca678
			g28 = 0;
			// branch -> 0xca67c
			while (true) {
				// 0xca67c
				v3 = g23;
				g17 = 0;
				v6 = *(int32_t *)(v3 - 0x7100);
				g16 = v6;
				v5 = 0;
				v4 = v6;
				v2 = *(int32_t *)(v3 - 0x6ea0);
				// branch -> 0xca68c
				goto lab_0xca68c_4;
			}
		}
		// 0xca678
		g28 = 0;
		// branch -> 0xca67c
		while (true) {
			// 0xca67c
			v3 = g23;
			g17 = 0;
			v6 = *(int32_t *)(v3 - 0x7100);
			g16 = v6;
			v5 = 0;
			v4 = v6;
			v2 = *(int32_t *)(v3 - 0x6ea0);
			// branch -> 0xca68c
			goto lab_0xca68c_4;
		}
	}
	// 0xca678
	g28 = 0;
	// branch -> 0xca67c
lab_0xca67c:
	while (true) {
		// 0xca67c
		v3 = g23;
		g17 = 0;
		v6 = *(int32_t *)(v3 - 0x7100);
		g16 = v6;
		v5 = 0;
		v4 = v6;
		v2 = *(int32_t *)(v3 - 0x6ea0);
		// branch -> 0xca68c
		goto lab_0xca68c_4;
	}
}

// Address range: 0xca900 - 0xca930
int32_t FreeLightTable(int32_t a1)
{
	int32_t *v1 = (int32_t *)*(int32_t *)(g23 - 0x7770); // 0xca914
	g34 = *v1;
	*v1 = 0;
	int32_t result = mem_free_dbg(); // 0xca91c
	return result;
}

// Address range: 0xca930 - 0xca95c
int32_t InitLightTable(int32_t a1)
{
	// 0xca930
	g34 = 0x1b00;
	int32_t result = DiabloAllocPtr(); // 0xca940
	*(int32_t *)*(int32_t *)(g23 - 0x7770) = result;
	return result;
}

// Address range: 0xca95c - 0xcb730
int32_t MakeLightTable(char a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x776c); // 0xca964
	int32_t v2 = 0;                          // r4
	int32_t v3 = *(int32_t *)(g23 - 0x7770); // 0xca970
	g35 = *(int32_t *)(g23 - 0x6e98);
	int32_t v4 = *(int32_t *)v3; // 0xca98c
	g27 = v4;
	int32_t v5 = *(int32_t *)v1 == 0 ? 15 : 3; // r0
	int32_t v6 = 0;                            // r3
	int32_t v7 = 0;                            // 0xca9b0
	// branch -> 0xca9ac
	int32_t v8;  // ctr
	int32_t v9;  // r11
	int32_t v10; // r12
	int32_t v11; // r9
	int32_t v12; // 0xcad04
	while (true) {
		// 0xca9ac
		v11 = v7;
		*(char *)v4 = 0;
		v9 = 0;
		int32_t v13 = 15;      // r10
		int32_t v14 = g27 + 1; // 0xca9c0
		g27 = v14;
		int32_t v15 = 15;  // 0xca9d0
		int32_t v16 = v11; // 0xca9cc
		// branch -> 0xca9c4
		int32_t v17; // 0xca9d0
		int32_t v18; // 0xca9e868
		while (true) {
			// 0xca9c4
			v8 = 4;
			int32_t v19 = v16 % 256; // 0xca9cc
			v17 = v15 % 256;
			v10 = 0;
			int32_t v20 = v14; // 0xca9e8
			int32_t v21 = 0;   // 0xca9d8
			// branch -> 0xca9d8
			while (true) {
				// 0xca9d8
				int32_t v22; // 0xca9f4
				int32_t v23; // 0xcaa00
				int32_t v24; // 0xca9ec
				int32_t v25; // 0xcaa20
				if (v21 == 0) {
					// 0xca9e0
					if (v9 != 0) {
						// 0xca9e8
						*(char *)v20 = (char)v19;
						v24 = g27 + 1;
						g27 = v24;
						v22 = v17;
						v23 = v19;
						v25 = v24;
						// branch -> 0xca9f0
					} else {
						v22 = v17;
						v23 = v19;
						v25 = v20;
					}
				lab_0xca9f0:;
					// 0xca9f0
					int32_t v26; // 0xcaa20
					int32_t v27; // 0xcaa2c80
					if (v23 % 256 < v22 % 256) {
					lab_0xcaa00:
						// 0xcaa00
						v27 = v22;
						v26 = v23 + 1;
						// branch -> 0xcaa10
					} else {
					lab_0xcaa08:
						// 0xcaa08
						v17 = 0;
						v27 = 0;
						v26 = 0;
						// branch -> 0xcaa10
					}
					// 0xcaa10
					v19 = v26;
					int32_t v28 = v10 + 1; // 0xcaa10
					int32_t v29;           // 0xcaa2c
					int32_t v30;           // 0xcaa38
					int32_t v31;           // 0xcaa24
					int32_t v32;           // 0xcaa58
					if (v28 == 0) {
						// 0xcaa18
						if (v9 != 0) {
							// 0xcaa20
							*(char *)v25 = (char)v26;
							v31 = g27 + 1;
							g27 = v31;
							v29 = v17;
							v30 = v19;
							v32 = v31;
							// branch -> 0xcaa28
						} else {
							v29 = v27;
							v30 = v26;
							v32 = v25;
						}
					} else {
						// 0xcaa20
						*(char *)v25 = (char)v26;
						v31 = g27 + 1;
						g27 = v31;
						v29 = v17;
						v30 = v19;
						v32 = v31;
						// branch -> 0xcaa28
					}
					// 0xcaa28
					int32_t v33; // 0xcaa58
					int32_t v34; // 0xcaa6483
					if (v30 % 256 < v29 % 256) {
						// 0xcaa38
						v34 = v29;
						v33 = v30 + 1;
						// branch -> 0xcaa48
					} else {
						// 0xcaa40
						v17 = 0;
						v34 = 0;
						v33 = 0;
						// branch -> 0xcaa48
					}
					// 0xcaa48
					v19 = v33;
					int32_t v35 = v28 + 1; // 0xcaa48
					int32_t v36;           // 0xcaa64
					int32_t v37;           // 0xcaa70
					int32_t v38;           // 0xcaa5c
					int32_t v39;           // 0xcaa90
					if (v35 == 0) {
						// 0xcaa50
						if (v9 != 0) {
							// 0xcaa58
							*(char *)v32 = (char)v33;
							v38 = g27 + 1;
							g27 = v38;
							v36 = v17;
							v37 = v19;
							v39 = v38;
							// branch -> 0xcaa60
						} else {
							v36 = v34;
							v37 = v33;
							v39 = v32;
						}
					} else {
						// 0xcaa58
						*(char *)v32 = (char)v33;
						v38 = g27 + 1;
						g27 = v38;
						v36 = v17;
						v37 = v19;
						v39 = v38;
						// branch -> 0xcaa60
					}
					// 0xcaa60
					int32_t v40; // 0xcaa90
					int32_t v41; // 0xcaa9c85
					if (v37 % 256 < v36 % 256) {
						// 0xcaa70
						v41 = v36;
						v40 = v37 + 1;
						// branch -> 0xcaa80
					} else {
						// 0xcaa78
						v17 = 0;
						v41 = 0;
						v40 = 0;
						// branch -> 0xcaa80
					}
					// 0xcaa80
					v19 = v40;
					int32_t v42 = v35 + 1; // 0xcaa80
					int32_t v43;           // 0xcaa9c
					int32_t v44;           // 0xcaaa8
					int32_t v45;           // 0xcaa94
					if (v42 == 0) {
						// 0xcaa88
						if (v9 != 0) {
							// 0xcaa90
							*(char *)v39 = (char)v40;
							v45 = g27 + 1;
							g27 = v45;
							v43 = v17;
							v44 = v19;
							v18 = v45;
							// branch -> 0xcaa98
						} else {
							v43 = v41;
							v44 = v40;
							v18 = v39;
						}
					} else {
						// 0xcaa90
						*(char *)v39 = (char)v40;
						v45 = g27 + 1;
						g27 = v45;
						v43 = v17;
						v44 = v19;
						v18 = v45;
						// branch -> 0xcaa98
					}
					// 0xcaa98
					int32_t v46;
					int32_t v47; // 0xca9f477
					if (v44 % 256 < v43 % 256) {
						// 0xcaaa8
						v47 = v43;
						v46 = v44 + 1;
						// branch -> 0xcaab8
					} else {
						// 0xcaab0
						v47 = 0;
						v46 = 0;
						// branch -> 0xcaab8
					}
					int32_t v48 = v42 + 1; // 0xcaab8
					v10 = v48;
					int32_t v49 = v8 - 1; // 0xcaabc
					v8 = v49;
					if (v49 == 0) {
						// break -> 0xcaac0
						break;
					}
					v17 = v47;
					v20 = v18;
					v19 = v46;
					v21 = v48;
					// continue -> 0xca9d8
					continue;
				} else {
					// 0xca9e8
					*(char *)v20 = (char)v19;
					v24 = g27 + 1;
					g27 = v24;
					v22 = v17;
					v23 = v19;
					v25 = v24;
					// branch -> 0xca9f0
					goto lab_0xca9f0;
				}
			}
			int32_t v50 = v9 + 1; // 0xcaac0
			v9 = v50;
			int32_t v51 = v13 + 16; // 0xcaac4
			v13 = v51;
			int32_t v52 = v11 + 16; // 0xcaacc
			v11 = v52;
			if (v50 >= 8) {
				// break -> 0xcaad4
				break;
			}
			v14 = v18;
			v15 = v51;
			v16 = v52;
			// continue -> 0xca9c4
		}
		uint32_t v53 = v2; // 0xcaad8
		v8 = 4;
		int32_t v54 = (v53 / 2 | v53 & -0x80000000) + 128; // 0xcaae0
		v11 = v54;
		v13 = 135;
		int32_t v55 = v18; // 0xcaaf0
		int32_t v56 = 135; // 0xcaaec
		// branch -> 0xcaae8
		int32_t v57; // 0xcac0c
		while (true) {
			// 0xcaae8
			v10 = v56 % 256;
			*(char *)v55 = (char)v54;
			uint32_t v58 = v54 % 256; // 0xcaaf4
			int32_t v59 = g27 + 1;    // 0xcaaf8
			int32_t v60;
			if (v58 < v10) {
				// 0xcab00
				v60 = v58 + 1;
				// branch -> 0xcab10
			} else {
				// 0xcab08
				v10 = 0;
				v60 = 0;
				// branch -> 0xcab10
			}
			// 0xcab10
			v9 = v60;
			*(char *)v59 = (char)v60;
			int32_t v61 = v59 + 1; // 0xcab1c
			int32_t v62;
			if (v60 % 256 < v10 % 256) {
				// 0xcab28
				v62 = v9 + 1;
				// branch -> 0xcab38
			} else {
				// 0xcab30
				v10 = 0;
				v62 = 0;
				// branch -> 0xcab38
			}
			// 0xcab38
			v9 = v62;
			*(char *)v61 = (char)v62;
			int32_t v63 = v61 + 1; // 0xcab44
			int32_t v64;
			if (v62 % 256 < v10 % 256) {
				// 0xcab50
				v64 = v9 + 1;
				// branch -> 0xcab60
			} else {
				// 0xcab58
				v10 = 0;
				v64 = 0;
				// branch -> 0xcab60
			}
			// 0xcab60
			v9 = v64;
			*(char *)v63 = (char)v64;
			int32_t v65 = v63 + 1; // 0xcab6c
			int32_t v66;
			if (v64 % 256 < v10 % 256) {
				// 0xcab78
				v66 = v9 + 1;
				// branch -> 0xcab88
			} else {
				// 0xcab80
				v10 = 0;
				v66 = 0;
				// branch -> 0xcab88
			}
			// 0xcab88
			v9 = v66;
			*(char *)v65 = (char)v66;
			int32_t v67 = v65 + 1; // 0xcab94
			int32_t v68;
			if (v66 % 256 < v10 % 256) {
				// 0xcaba0
				v68 = v9 + 1;
				// branch -> 0xcabb0
			} else {
				// 0xcaba8
				v10 = 0;
				v68 = 0;
				// branch -> 0xcabb0
			}
			// 0xcabb0
			v9 = v68;
			*(char *)v67 = (char)v68;
			int32_t v69 = v67 + 1; // 0xcabbc
			int32_t v70;
			if (v68 % 256 < v10 % 256) {
				// 0xcabc8
				v70 = v9 + 1;
				// branch -> 0xcabd8
			} else {
				// 0xcabd0
				v10 = 0;
				v70 = 0;
				// branch -> 0xcabd8
			}
			// 0xcabd8
			v9 = v70;
			*(char *)v69 = (char)v70;
			int32_t v71 = v69 + 1; // 0xcabe4
			int32_t v72;
			if (v70 % 256 < v10 % 256) {
				// 0xcabf0
				v72 = v9 + 1;
				// branch -> 0xcac00
			} else {
				// 0xcabf8
				v72 = 0;
				// branch -> 0xcac00
			}
			// 0xcac00
			*(char *)v71 = (char)v72;
			v57 = v71 + 1;
			g27 = v57;
			int32_t v73 = v11 + 8; // 0xcac14
			v11 = v73;
			int32_t v74 = v13 + 8; // 0xcac18
			v13 = v74;
			int32_t v75 = v8 - 1; // 0xcac1c
			v8 = v75;
			if (v75 == 0) {
				// break -> 0xcac20
				break;
			}
			v55 = v57;
			v56 = v74;
			v54 = v73;
			// continue -> 0xcaae8
		}
		int32_t v76 = v2 + 160; // 0xcac20
		v11 = v76;
		v9 = 10;
		v13 = 175;
		int32_t v77 = v57; // 0xcac4495
		int32_t v78 = 175; // 0xcac38
		// branch -> 0xcac2c
		while (true) {
			// 0xcac2c
			v8 = 4;
			int32_t v79 = v76 % 256; // 0xcac34
			v10 = v79;
			v17 = v78 % 256;
			g24 = 0;
			int32_t v80 = v77; // 0xcac44
			// branch -> 0xcac40
			while (true) {
				// 0xcac40
				*(char *)v80 = (char)v79;
				int32_t v81 = g27 + 1; // 0xcac4c
				int32_t v82;
				if (v79 % 256 < v17 % 256) {
					// 0xcac58
					v82 = v10 + 1;
					// branch -> 0xcac68
				} else {
					// 0xcac60
					v17 = 0;
					v82 = 0;
					// branch -> 0xcac68
				}
				// 0xcac68
				v10 = v82;
				int32_t v83 = v82; // 0xcac7c
				if (v82 % 256 == 255) {
					// 0xcac74
					v17 = 0;
					v10 = 0;
					v83 = 0;
					// branch -> 0xcac7c
				}
				// 0xcac7c
				*(char *)v81 = (char)v83;
				int32_t v84 = v81 + 1; // 0xcac88
				int32_t v85;
				if (v83 % 256 < v17 % 256) {
					// 0xcac94
					v85 = v10 + 1;
					// branch -> 0xcaca4
				} else {
					// 0xcac9c
					v17 = 0;
					v85 = 0;
					// branch -> 0xcaca4
				}
				// 0xcaca4
				v10 = v85;
				int32_t v86 = v85; // 0xcacb8
				if (v85 % 256 == 255) {
					// 0xcacb0
					v17 = 0;
					v10 = 0;
					v86 = 0;
					// branch -> 0xcacb8
				}
				// 0xcacb8
				*(char *)v84 = (char)v86;
				int32_t v87 = v84 + 1; // 0xcacc4
				int32_t v88;
				if (v86 % 256 < v17 % 256) {
					// 0xcacd4
					v88 = v10 + 1;
					// branch -> 0xcace4
				} else {
					// 0xcacdc
					v17 = 0;
					v88 = 0;
					// branch -> 0xcace4
				}
				// 0xcace4
				v10 = v88;
				int32_t v89 = v88; // 0xcacf8
				if (v88 % 256 == 255) {
					// 0xcacf0
					v17 = 0;
					v10 = 0;
					v89 = 0;
					// branch -> 0xcacf8
				}
				// 0xcacf8
				*(char *)v87 = (char)v89;
				v12 = v87 + 1;
				g27 = v12;
				int32_t v90;
				if (v89 % 256 < v17 % 256) {
					// 0xcad14
					v90 = v10 + 1;
					// branch -> 0xcad24
				} else {
					// 0xcad1c
					v17 = 0;
					v90 = 0;
					// branch -> 0xcad24
				}
				// 0xcad24
				v10 = v90;
				int32_t v91 = v90; // 0xcac4093
				if (v90 % 256 == 255) {
					// 0xcad30
					v17 = 0;
					v10 = 0;
					v91 = 0;
					// branch -> 0xcad38
				}
				// 0xcad38
				g24 += 3;
				int32_t v92 = v8 - 1; // 0xcad3c
				v8 = v92;
				if (v92 == 0) {
					// break -> 0xcad40
					break;
				}
				v80 = v12;
				v79 = v91;
				// continue -> 0xcac40
			}
			int32_t v93 = v9 + 1; // 0xcad40
			v9 = v93;
			int32_t v94 = v13 + 16; // 0xcad44
			v13 = v94;
			int32_t v95 = v11 + 16; // 0xcad4c
			v11 = v95;
			if (v93 >= 16) {
				// break -> 0xcad54
				break;
			}
			v77 = v12;
			v78 = v94;
			v76 = v95;
			// continue -> 0xcac2c
		}
		int32_t v96 = v2 + (*(int32_t *)v1 == 0 ? 1 : 5);
		v2 = v96;
		int32_t v97 = v6 + 1; // 0xcad6c
		v6 = v97;
		if (v97 >= v5) {
			// break -> 0xcad78
			break;
		}
		v4 = v12;
		v7 = v96;
		// continue -> 0xca9ac
	}
	int32_t v98 = 0; // r8
	*(char *)v12 = 0;
	*(char *)(g27 + 1) = (char)v98;
	*(char *)(g27 + 2) = (char)v98;
	*(char *)(g27 + 3) = (char)v98;
	*(char *)(g27 + 4) = (char)v98;
	*(char *)(g27 + 5) = (char)v98;
	*(char *)(g27 + 6) = (char)v98;
	*(char *)(g27 + 7) = (char)v98;
	*(char *)(g27 + 8) = (char)v98;
	*(char *)(g27 + 9) = (char)v98;
	*(char *)(g27 + 10) = (char)v98;
	*(char *)(g27 + 11) = (char)v98;
	*(char *)(g27 + 12) = (char)v98;
	*(char *)(g27 + 13) = (char)v98;
	*(char *)(g27 + 14) = (char)v98;
	*(char *)(g27 + 15) = (char)v98;
	*(char *)(g27 + 16) = (char)v98;
	*(char *)(g27 + 17) = (char)v98;
	*(char *)(g27 + 18) = (char)v98;
	*(char *)(g27 + 19) = (char)v98;
	*(char *)(g27 + 20) = (char)v98;
	*(char *)(g27 + 21) = (char)v98;
	*(char *)(g27 + 22) = (char)v98;
	*(char *)(g27 + 23) = (char)v98;
	*(char *)(g27 + 24) = (char)v98;
	*(char *)(g27 + 25) = (char)v98;
	*(char *)(g27 + 26) = (char)v98;
	*(char *)(g27 + 27) = (char)v98;
	*(char *)(g27 + 28) = (char)v98;
	*(char *)(g27 + 29) = (char)v98;
	*(char *)(g27 + 30) = (char)v98;
	*(char *)(g27 + 31) = (char)v98;
	int32_t v99 = g27 + 32; // 0xcae04
	g27 = v99;
	int32_t v100 = 7; // 0xcae08
	// branch -> 0xcad80
	while (v100 != 0) {
		// 0xcad80
		v98 = 0;
		*(char *)v99 = 0;
		*(char *)(g27 + 1) = (char)v98;
		*(char *)(g27 + 2) = (char)v98;
		*(char *)(g27 + 3) = (char)v98;
		*(char *)(g27 + 4) = (char)v98;
		*(char *)(g27 + 5) = (char)v98;
		*(char *)(g27 + 6) = (char)v98;
		*(char *)(g27 + 7) = (char)v98;
		*(char *)(g27 + 8) = (char)v98;
		*(char *)(g27 + 9) = (char)v98;
		*(char *)(g27 + 10) = (char)v98;
		*(char *)(g27 + 11) = (char)v98;
		*(char *)(g27 + 12) = (char)v98;
		*(char *)(g27 + 13) = (char)v98;
		*(char *)(g27 + 14) = (char)v98;
		*(char *)(g27 + 15) = (char)v98;
		*(char *)(g27 + 16) = (char)v98;
		*(char *)(g27 + 17) = (char)v98;
		*(char *)(g27 + 18) = (char)v98;
		*(char *)(g27 + 19) = (char)v98;
		*(char *)(g27 + 20) = (char)v98;
		*(char *)(g27 + 21) = (char)v98;
		*(char *)(g27 + 22) = (char)v98;
		*(char *)(g27 + 23) = (char)v98;
		*(char *)(g27 + 24) = (char)v98;
		*(char *)(g27 + 25) = (char)v98;
		*(char *)(g27 + 26) = (char)v98;
		*(char *)(g27 + 27) = (char)v98;
		*(char *)(g27 + 28) = (char)v98;
		*(char *)(g27 + 29) = (char)v98;
		*(char *)(g27 + 30) = (char)v98;
		*(char *)(g27 + 31) = (char)v98;
		v99 = g27 + 32;
		g27 = v99;
		v100--;
		// continue -> 0xcad80
	}
	// 0xcae0c
	int32_t v101; // bp-128
	int32_t v102; // 0xcb028
	int32_t v103; // 0xcb0ac
	int32_t v104; // 0xcb0e4
	int32_t v105; // 0xcb168
	int32_t v106; // 0xcb1c4
	int32_t v107; // 0xcb0b8
	int32_t v108; // 0xcb0bc
	int32_t v109; // 0xcb174
	int32_t v110; // 0xcb178
	int32_t v111; // 0xcae4c
	int32_t v112; // 0xcb01c
	int32_t v113; // 0xcb0d8
	if (*(char *)*(int32_t *)(g23 - 0x7794) == 4) {
		int32_t v114 = *(int32_t *)v3; // 0xcae1c
		int32_t v115 = v98;            // 0xcaf7854
		int32_t v116;                  // 0xcaf94
		int32_t v117;                  // 0xcaffc
		int32_t v118;                  // 0xcb008
		int32_t v119;                  // 0xcb00c
		if (v115 < v5) {
			// 0xcae28
			int32_t v120;         // bp-150
			int32_t v121 = &v120; // 0xcae2c
			char v122;            // bp-151
			int32_t v123 = &v122; // 0xcb704
			int32_t v124;         // bp-136
			int32_t v125 = &v124; // 0xcaf2c
			                      // branch -> 0xcae28
		lab_0xcae28:
			while (true) {
				int32_t v126 = v5 - v115; // 0xcae28
				v11 = v126;
				v6 = v121;
				int32_t v127 = v5 / v126; // 0xcae30
				int32_t v128 = 1;         // r7
				v122 = 0;
				v2 = 1;
				v111 = v5 - v127 * v126;
				v10 = 0;
				char v129 = 1;
				// branch -> 0xcae58
				while (true) {
					// 0xcae58
					v9 = v126 + v111;
					*(char *)v121 = v129;
					int32_t v130 = v9;   // 0xcae60
					int32_t v131 = v130; // 0xcae58103
					if (v130 > v11) {
						// 0xcae68
						if (v2 <= 14) {
							int32_t v132 = v6 + 1; // 0xcae70
							*(char *)v132 = (char)v128;
							v6 = v132;
							v2++;
							v131 = v9 - v11;
							// branch -> 0xcae7c
						} else {
							v131 = v130;
						}
					}
					int32_t v133 = v10 + 1; // 0xcae7c
					v10 = v133;
					if (v133 == v127) {
						// 0xcae88
						v10 = 0;
						v128++;
						// branch -> 0xcae90
					}
					int32_t v134 = v2 + 1; // 0xcae90
					v2 = v134;
					int32_t v135 = v6 + 1; // 0xcae94
					v6 = v135;
					if (v134 < 16) {
						// 0xcae90
						v121 = v135;
						v129 = v128;
						v126 = v131;
						// branch -> 0xcae58
						continue;
					} else {
						int32_t v136 = 15; // 0xcaea4
						*(char *)v114 = 0;
						int32_t v137 = v114 + 1; // 0xcaeb0
						v114 = v137;
						int32_t v138 = v137; // 0xcaf1c110
						int32_t v139 = 1;    // 0xcaf08
						if (v136 != 8 && v136 >= 8) {
							// 0xcaeb8
							*(char *)v137 = (char)v120;
							int32_t v140 = v114 + 8; // 0xcaefc
							v114 = v140;
							v138 = v140;
							v139 = 9;
							// branch -> 0xcb704
						}
						int32_t v141 = v139 + v123; // 0xcb708
						v8 = 16 - v139;
						int32_t v142 = v138; // 0xcaf38113
						int32_t v143;        // 0xcaf34
						int32_t v144;        // 0xcaf38
						if (v139 <= 15) {
							// 0xcaf14
							v2 = v141 + 1;
							*(char *)v138 = *(char *)v141;
							int32_t v145 = v114 + 1; // 0xcaf20199
							v114 = v145;
							int32_t v146 = v8 - 1; // 0xcaf24201
							v8 = v146;
							if (v146 != 0) {
								int32_t v147 = v2;
								*(char *)v145 = *(char *)v147;
								int32_t v148 = v114 + 1; // 0xcaf20
								v114 = v148;
								int32_t v149 = v8 - 1; // 0xcaf24
								while (v149 != 0) {
									// 0xcaf14
									v147++;
									*(char *)v148 = *(char *)v147;
									v148 = v114 + 1;
									v114 = v148;
									v149--;
									// continue -> 0xcaf14
								}
								// 0xcaf28
								v2 = v125;
								v8 = 3;
								v144 = v148;
								v143 = v125;
								// branch -> 0xcaf34
							lab_0xcaf34:
								while (true) {
									// 0xcaf34
									*(char *)v144 = *(char *)v143;
									*(char *)(v114 + 1) = *(char *)(v2 - 1);
									*(char *)(v114 + 2) = *(char *)(v2 - 2);
									*(char *)(v114 + 3) = *(char *)(v2 - 3);
									int32_t v150 = v2; // 0xcaf54
									v2 = v150 - 5;
									*(char *)(v114 + 4) = *(char *)(v150 - 4);
									int32_t v151 = v114 + 5; // 0xcaf60
									v114 = v151;
									int32_t v152 = v8 - 1; // 0xcaf64
									v8 = v152;
									if (v152 == 0) {
										// 0xcaf68
										v98++;
										*(char *)v151 = 1;
										int32_t v153 = v114 + 225; // 0xcaf74
										v114 = v153;
										int32_t v154 = v98; // 0xcaf78
										if (v154 >= v5) {
											v114 = v153;
											// break (via goto) -> 0xcaf80
											goto lab_0xcaf80;
										}
										v115 = v154;
										// continue (via goto) -> 0xcae28
										goto lab_0xcae28;
									} else {
										// 0xcaf34
										v144 = v151;
										v143 = v2;
										// branch -> 0xcaf34
										continue;
									}
								}
								// 0xcaf80
								*(char *)v114 = 0;
								v6 = 1;
								v5 = 25;
								int32_t v155 = v114; // 0xcaf90
								*(char *)(v155 + 1) = 1;
								v116 = v5;
								bool v156 = v116 > 32;  // cr0_gt
								bool v157 = v116 == 32; // cr0_eq
								v5 = 32 - v116;
								int32_t v158 = v6;   // 0xcaf9c
								int32_t v159 = v114; // 0xcaf9c
								*(char *)(v159 + 2) = (char)v158;
								int32_t v160 = v5; // 0xcafa0
								v8 = v160;
								int32_t v161 = v6;   // 0xcafa4
								int32_t v162 = v114; // 0xcafa4
								*(char *)(v162 + 3) = (char)v161;
								int32_t v163 = v6;   // 0xcafa8
								int32_t v164 = v114; // 0xcafa8
								*(char *)(v164 + 4) = (char)v163;
								int32_t v165 = v6;   // 0xcafac
								int32_t v166 = v114; // 0xcafac
								*(char *)(v166 + 5) = (char)v165;
								int32_t v167 = v6;   // 0xcafb0
								int32_t v168 = v114; // 0xcafb0
								*(char *)(v168 + 6) = (char)v167;
								int32_t v169 = v6;   // 0xcafb4
								int32_t v170 = v114; // 0xcafb4
								*(char *)(v170 + 7) = (char)v169;
								int32_t v171 = v6;   // 0xcafb8
								int32_t v172 = v114; // 0xcafb8
								*(char *)(v172 + 8) = (char)v171;
								int32_t v173 = v6;   // 0xcafbc
								int32_t v174 = v114; // 0xcafbc
								*(char *)(v174 + 9) = (char)v173;
								int32_t v175 = v6;   // 0xcafc0
								int32_t v176 = v114; // 0xcafc0
								*(char *)(v176 + 10) = (char)v175;
								int32_t v177 = v6;   // 0xcafc4
								int32_t v178 = v114; // 0xcafc4
								*(char *)(v178 + 11) = (char)v177;
								int32_t v179 = v6;   // 0xcafc8
								int32_t v180 = v114; // 0xcafc8
								*(char *)(v180 + 12) = (char)v179;
								int32_t v181 = v6;   // 0xcafcc
								int32_t v182 = v114; // 0xcafcc
								*(char *)(v182 + 13) = (char)v181;
								int32_t v183 = v6;   // 0xcafd0
								int32_t v184 = v114; // 0xcafd0
								*(char *)(v184 + 14) = (char)v183;
								int32_t v185 = v6;   // 0xcafd4
								int32_t v186 = v114; // 0xcafd4
								*(char *)(v186 + 15) = (char)v185;
								int32_t v187 = v6;   // 0xcafd8
								int32_t v188 = v114; // 0xcafd8
								*(char *)(v188 + 16) = (char)v187;
								int32_t v189 = v6;   // 0xcafdc
								int32_t v190 = v114; // 0xcafdc
								*(char *)(v190 + 17) = (char)v189;
								int32_t v191 = v6;   // 0xcafe0
								int32_t v192 = v114; // 0xcafe0
								*(char *)(v192 + 18) = (char)v191;
								int32_t v193 = v6;   // 0xcafe4
								int32_t v194 = v114; // 0xcafe4
								*(char *)(v194 + 19) = (char)v193;
								int32_t v195 = v6;   // 0xcafe8
								int32_t v196 = v114; // 0xcafe8
								*(char *)(v196 + 20) = (char)v195;
								int32_t v197 = v6;   // 0xcafec
								int32_t v198 = v114; // 0xcafec
								*(char *)(v198 + 21) = (char)v197;
								int32_t v199 = v6;   // 0xcaff0
								int32_t v200 = v114; // 0xcaff0
								*(char *)(v200 + 22) = (char)v199;
								int32_t v201 = v6;   // 0xcaff4
								int32_t v202 = v114; // 0xcaff4
								*(char *)(v202 + 23) = (char)v201;
								int32_t v203 = v6;   // 0xcaff8
								int32_t v204 = v114; // 0xcaff8
								*(char *)(v204 + 24) = (char)v203;
								int32_t v205 = v114; // 0xcaffc
								v117 = v205 + 25;
								v114 = v117;
								bool v206 = v157;    // 0xcb000
								bool v207 = v156;    // 0xcb000
								int32_t v208 = v117; // 0xcb010
								int32_t v209;        // 0xcb014
								int32_t v210;
								int32_t v211; // 0xcb034
								int32_t v212; // 0xcb0f0
								int32_t v213; // 0xcb038
								int32_t v214;
								int32_t v215; // 0xcb0f4
								int32_t v216; // 0xcb014
								if (!v206 && !v207) {
									int32_t v217 = v117; // 0xcb004
									int32_t v218 = v6;   // 0xcb004
									*(char *)v217 = (char)v218;
									int32_t v219 = v114; // 0xcb008
									v118 = v219 + 1;
									v114 = v118;
									int32_t v220 = v8; // 0xcb00c
									v119 = v220 - 1;
									v8 = v119;
									v208 = v118;
									while (v119 != 0) {
										// 0xcb004
										v217 = v118;
										v218 = v6;
										*(char *)v217 = (char)v218;
										v219 = v114;
										v118 = v219 + 1;
										v114 = v118;
										v220 = v8;
										v119 = v220 - 1;
										v8 = v119;
										v208 = v118;
										// continue -> 0xcb004
									}
									// 0xcb010
									g27 = v208 + 224;
									v210 = g23;
									v209 = v210;
									// branch -> 0xcb014
									// 0xcb014
									v216 = *(int32_t *)(v209 - 0x557c);
									v6 = v216;
									v2 = 0;
									v112 = LoadFileInMem(v216, NULL);
									v101 = v112;
									g34 = v112;
									v102 = function_c9948();
									v6 = v102;
									v5 = 16;
									v8 = 16;
									v214 = g27;
									v213 = v214;
									v211 = v102;
									// branch -> 0xcb034
									while (true) {
										// 0xcb034
										*(char *)v107 = *(char *)v6;
										*(char *)(g27 + 1) = *(char *)(v6 + 1);
										*(char *)(g27 + 2) = *(char *)(v6 + 2);
										*(char *)(g27 + 3) = *(char *)(v6 + 3);
										*(char *)(g27 + 4) = *(char *)(v6 + 4);
										*(char *)(g27 + 5) = *(char *)(v6 + 5);
										*(char *)(g27 + 6) = *(char *)(v6 + 6);
										*(char *)(g27 + 7) = *(char *)(v6 + 7);
										*(char *)(g27 + 8) = *(char *)(v6 + 8);
										*(char *)(g27 + 9) = *(char *)(v6 + 9);
										*(char *)(g27 + 10) = *(char *)(v6 + 10);
										*(char *)(g27 + 11) = *(char *)(v6 + 11);
										*(char *)(g27 + 12) = *(char *)(v6 + 12);
										*(char *)(g27 + 13) = *(char *)(v6 + 13);
										*(char *)(g27 + 14) = *(char *)(v6 + 14);
										v103 = v6;
										v6 = v103 + 16;
										*(char *)(g27 + 15) = *(char *)(v103 + 15);
										v107 = g27 + 16;
										g27 = v107;
										v108--;
										if (v108 == 0) {
											// 0xcb0c0
											function_c9acc(v101);
											MemFreeDbg(&v101);
											v113 = LoadFileInMem(*(int32_t *)(g23 - 0x5580), NULL);
											v101 = v113;
											g34 = v113;
											v104 = function_c9948();
											v6 = v104;
											v8 = 16;
											v215 = g27;
											v212 = v104;
											// branch -> 0xcb0f0
											while (true) {
												// 0xcb0f0
												*(char *)v215 = *(char *)v212;
												*(char *)(g27 + 1) = *(char *)(v6 + 1);
												*(char *)(g27 + 2) = *(char *)(v6 + 2);
												*(char *)(g27 + 3) = *(char *)(v6 + 3);
												*(char *)(g27 + 4) = *(char *)(v6 + 4);
												*(char *)(g27 + 5) = *(char *)(v6 + 5);
												*(char *)(g27 + 6) = *(char *)(v6 + 6);
												*(char *)(g27 + 7) = *(char *)(v6 + 7);
												*(char *)(g27 + 8) = *(char *)(v6 + 8);
												*(char *)(g27 + 9) = *(char *)(v6 + 9);
												*(char *)(g27 + 10) = *(char *)(v6 + 10);
												*(char *)(g27 + 11) = *(char *)(v6 + 11);
												*(char *)(g27 + 12) = *(char *)(v6 + 12);
												*(char *)(g27 + 13) = *(char *)(v6 + 13);
												*(char *)(g27 + 14) = *(char *)(v6 + 14);
												v105 = v6;
												v6 = v105 + 16;
												*(char *)(g27 + 15) = *(char *)(v105 + 15);
												v109 = g27 + 16;
												g27 = v109;
												v110 = v8 - 1;
												v8 = v110;
												if (v110 == 0) {
													// 0xcb17c
													function_c9acc(v101);
													MemFreeDbg(&v101);
													v8 = 4;
													v2 = 0;
													// branch -> 0xcb1a4
													int32_t v221; // 0xcb248
													while (true) {
														// 0xcb1a4
														v111 = 226;
														v106 = 226;
														// branch -> 0xcb1a4
													lab_0xcb1a4_3:;
														int32_t v222;
														while (true) {
															// 0xcb1a4
															if (v2 == 0) {
																// 0xcb1ac
																if (v106 % 256 == 226) {
																	// 0xcb1b8
																	*(char *)g27 = (char)0;
																	// branch -> 0xcb1cc
																lab_0xcb1cc:
																	// 0xcb1cc
																	v222 = g27 + 1;
																	g27 = v222;
																	int32_t v223 = v111 + 1; // 0xcb1cc
																	v111 = v223;
																	if (v223 % 256 >= 239) {
																		// break -> 0xcb1dc
																		break;
																	}
																	v106 = v223;
																	// continue -> 0xcb1a4
																	continue;
																}
															}
															// 0xcb1c4
															*(char *)g27 = (char)v106;
															// branch -> 0xcb1cc
															goto lab_0xcb1cc;
														}
														// 0xcb1dc
														v128 = 0;
														v2++;
														*(char *)v222 = 0;
														v111 = 226;
														*(char *)(g27 + 1) = (char)v128;
														*(char *)(g27 + 2) = (char)v128;
														int32_t v224 = g27 + 3; // 0xcb1f4
														v114 = v224;
														int32_t v225 = v111; // 0xcb22849
														int32_t v226;        // 0xcb24c
														if (v225 % 256 < 239) {
															int32_t v227;
															while (true) {
																// 0xcb1fc
																if (v2 == 0) {
																	// 0xcb204
																	if (v225 % 256 == 226) {
																		// 0xcb210
																		*(char *)v224 = (char)v128;
																		// branch -> 0xcb224
																	lab_0xcb224:
																		// 0xcb224
																		v227 = v114 + 1;
																		v114 = v227;
																		int32_t v228 = v111 + 1; // 0xcb224
																		v111 = v228;
																		if (v228 % 256 >= 239) {
																			// break -> 0xcb234
																			break;
																		}
																		v224 = v227;
																		v225 = v228;
																		// continue -> 0xcb1fc
																		continue;
																	}
																}
																// 0xcb21c
																*(char *)v224 = (char)v225;
																// branch -> 0xcb224
																goto lab_0xcb224;
															}
															// 0xcb234
															v128 = 0;
															v2++;
															*(char *)v227 = 0;
															*(char *)(v114 + 1) = (char)v128;
															*(char *)(v114 + 2) = (char)v128;
															v221 = v114 + 3;
															g27 = v221;
															v226 = v8 - 1;
															v8 = v226;
															if (v226 == 0) {
																// break -> 0xcb250
																break;
															}
															// continue -> 0xcb1a4
															continue;
														}
														// 0xcb234
														v128 = 0;
														v2++;
														*(char *)v224 = 0;
														*(char *)(v114 + 1) = (char)v128;
														*(char *)(v114 + 2) = (char)v128;
														v221 = v114 + 3;
														g27 = v221;
														v226 = v8 - 1;
														v8 = v226;
														if (v226 == 0) {
															// break -> 0xcb250
															break;
														}
														// continue -> 0xcb1a4
													}
													// 0xcb250
													*(char *)v221 = -32;
													*(char *)(g27 + 1) = -30;
													*(char *)(g27 + 2) = -28;
													*(char *)(g27 + 3) = -26;
													*(char *)(g27 + 4) = -24;
													*(char *)(g27 + 5) = -22;
													*(char *)(g27 + 6) = -20;
													*(char *)(g27 + 7) = -18;
													int32_t v229 = g27 + 8; // 0xcb294
													v114 = v229;
													*(char *)v229 = -32;
													*(char *)(v114 + 1) = -30;
													*(char *)(v114 + 2) = -28;
													*(char *)(v114 + 3) = -26;
													*(char *)(v114 + 4) = -24;
													*(char *)(v114 + 5) = -22;
													*(char *)(v114 + 6) = -20;
													*(char *)(v114 + 7) = -18;
													int32_t v230 = v114 + 8; // 0xcb2d8
													v114 = v230;
													*(char *)v230 = -32;
													*(char *)(v114 + 1) = -30;
													*(char *)(v114 + 2) = -28;
													*(char *)(v114 + 3) = -26;
													*(char *)(v114 + 4) = -24;
													*(char *)(v114 + 5) = -22;
													*(char *)(v114 + 6) = -20;
													*(char *)(v114 + 7) = -18;
													int32_t v231 = v114 + 8; // 0xcb31c
													v114 = v231;
													*(char *)v231 = -32;
													v8 = 3;
													*(char *)(v114 + 1) = -30;
													*(char *)(v114 + 2) = -28;
													v6 = 231;
													*(char *)(v114 + 3) = -26;
													int32_t v232 = 15; // r6
													*(char *)(v114 + 4) = -24;
													*(char *)(v114 + 5) = -22;
													*(char *)(v114 + 6) = -20;
													*(char *)(v114 + 7) = -18;
													int32_t v233 = v114 + 8; // 0xcb36c
													v114 = v233;
													// branch -> 0xcb370
													while (true) {
														// 0xcb370
														v98 = 224;
														int32_t v234 = v233; // 0xcb3d4135
														int32_t v235 = 224;  // 0xcb3e028
														if (v232 >= 9) {
															// 0xcb3c4
															if (v6 > 224) {
																int32_t v236 = v233; // 0xcb380
																char v237 = -32;
																while (true) {
																	// 0xcb380
																	*(char *)v236 = v237;
																	int32_t v238 = v98; // 0xcb384
																	*(char *)(v114 + 1) = (char)(v238 + 1);
																	*(char *)(v114 + 2) = (char)(v238 + 2);
																	*(char *)(v114 + 3) = (char)(v98 + 3);
																	int32_t v239 = v98; // 0xcb3a4
																	*(char *)(v114 + 4) = (char)(v98 + 4);
																	int32_t v240 = v98; // 0xcb3ac
																	v98 = v240 + 8;
																	*(char *)(v114 + 5) = (char)(v238 + 5);
																	*(char *)(v114 + 6) = (char)(v239 + 6);
																	*(char *)(v114 + 7) = (char)(v240 + 7);
																	int32_t v241 = v114 + 8; // 0xcb3c0
																	v114 = v241;
																	int32_t v242 = v98; // 0xcb3c4
																	if (v242 % 256 >= v6) {
																		v234 = v241;
																		v235 = v242;
																		// break -> 0xcb3e0
																		break;
																	}
																	v236 = v241;
																	v237 = v242;
																	// continue -> 0xcb380
																}
																// 0xcb3e0
																uint32_t v243; // 0xcb3f0
																int32_t v244;  // 0xcb46839
																int32_t v245;  // 0xcb3fc
																int32_t v246;  // 0xcb45c144
																if (v235 % 256 < 239) {
																lab_0xcb3d4:
																	// 0xcb3d4
																	*(char *)v234 = (char)v235;
																	int32_t v247 = v114 + 1; // 0xcb3d8
																	v114 = v247;
																	int32_t v248 = v98 + 1; // 0xcb3dc
																	// branch -> 0xcb3d4
																	while (v248 % 256 < 239) {
																		// 0xcb3d4
																		*(char *)v247 = (char)v248;
																		v247 = v114 + 1;
																		v114 = v247;
																		v248++;
																		// continue -> 0xcb3d4
																	}
																	// 0xcb3ec
																	v243 = v232;
																	*(char *)v247 = 0;
																	v98 = 224;
																	v245 = v114 + 1;
																	v114 = v245;
																	v246 = v245;
																	v244 = 224;
																	if (v243 != 8 && v243 >= 8) {
																	lab_0xcb44c:
																		// 0xcb44c
																		if (v6 > 224) {
																			int32_t v249 = v245; // 0xcb408
																			char v250 = -32;
																			while (true) {
																				// 0xcb408
																				*(char *)v249 = v250;
																				int32_t v251 = v98; // 0xcb40c
																				*(char *)(v114 + 1) = (char)(v251 + 1);
																				*(char *)(v114 + 2) = (char)(v251 + 2);
																				*(char *)(v114 + 3) = (char)(v98 + 3);
																				int32_t v252 = v98; // 0xcb42c
																				*(char *)(v114 + 4) = (char)(v98 + 4);
																				int32_t v253 = v98; // 0xcb434
																				v98 = v253 + 8;
																				*(char *)(v114 + 5) = (char)(v251 + 5);
																				*(char *)(v114 + 6) = (char)(v252 + 6);
																				*(char *)(v114 + 7) = (char)(v253 + 7);
																				int32_t v254 = v114 + 8; // 0xcb448
																				v114 = v254;
																				int32_t v255 = v98; // 0xcb44c
																				if (v255 % 256 >= v6) {
																					v246 = v254;
																					v244 = v255;
																					// break -> 0xcb468
																					break;
																				}
																				v249 = v254;
																				v250 = v255;
																				// continue -> 0xcb408
																			}
																			// 0xcb468
																			int32_t v256; // 0xcb480
																			int32_t v257; // 0xcb484
																			if (v244 % 256 < 239) {
																			lab_0xcb45c:
																				// 0xcb45c
																				*(char *)v246 = (char)v244;
																				int32_t v258 = v114 + 1; // 0xcb460
																				v114 = v258;
																				int32_t v259 = v98 + 1; // 0xcb464
																				// branch -> 0xcb45c
																				while (v259 % 256 < 239) {
																					// 0xcb45c
																					*(char *)v258 = (char)v259;
																					v258 = v114 + 1;
																					v114 = v258;
																					v259++;
																					// continue -> 0xcb45c
																				}
																				// 0xcb474
																				v128++;
																				*(char *)v258 = 0;
																				v256 = v114 + 1;
																				v114 = v256;
																				v257 = v8 - 1;
																				v8 = v257;
																				if (v257 == 0) {
																					// break -> 0xcb488
																					break;
																				}
																				v233 = v256;
																				// continue -> 0xcb370
																				continue;
																			}
																		lab_0xcb474:
																			// 0xcb474
																			v128++;
																			*(char *)v246 = 0;
																			v256 = v114 + 1;
																			v114 = v256;
																			v257 = v8 - 1;
																			v8 = v257;
																			if (v257 == 0) {
																				// break -> 0xcb488
																				break;
																			}
																			v233 = v256;
																			// continue -> 0xcb370
																			continue;
																		} else {
																			v246 = v245;
																			v244 = 224;
																		}
																	}
																lab_0xcb468:
																	// 0xcb468
																	if (v244 % 256 < 239) {
																		goto lab_0xcb45c;
																	}
																	goto lab_0xcb474;
																}
															lab_0xcb3ec:
																// 0xcb3ec
																v243 = v232;
																*(char *)v234 = 0;
																v98 = 224;
																v245 = v114 + 1;
																v114 = v245;
																if (v243 == 8 || v243 < 8) {
																	v246 = v245;
																	v244 = 224;
																	goto lab_0xcb468;
																}
																goto lab_0xcb44c;
															} else {
																v234 = v233;
																v235 = 224;
															}
														}
														// 0xcb3e0
														if (v235 % 256 < 239) {
															goto lab_0xcb3d4;
														}
														goto lab_0xcb3ec;
													}
													int32_t v260 = *(int32_t *)(g23 - 0x6e9c); // 0xcb488
													v128 = v260;
													v11 = 0;
													int32_t v261 = 0; // 0xcb4a4
													                  // branch -> 0xcb4a4
												lab_0xcb4a4:
													while (true) {
														// 0xcb4a4
														v8 = 32;
														v111 = v260;
														int32_t v262 = 8 * v261 + 8; // 0xcb4c0
														v232 = v262;
														v98 = 0;
														v2 = 15;
														int32_t v263 = v260; // 0xcb4e0
														int32_t v264 = 0;    // 0xcb4e8
														int32_t v265 = v261 - 0x7fffffff;
														// branch -> 0xcb4d8
														while (true) {
															// 0xcb4d8
															int32_t v266;
															if (v264 > v262) {
																// 0xcb4e0
																*(char *)v263 = (char)v2;
																v266 = v265;
																// branch -> 0xcb518
															} else {
																// 0xcb4e8
																v266 = v264 ^ -0x80000000;
																// branch -> 0xcb518
															}
															int32_t v267 = v98;      // 0xcb518
															int32_t v268 = v267 + 1; // 0xcb518
															int32_t v269 = v111 + 1; // 0xcb51c
															int32_t v270;
															if (v268 > v232) {
																// 0xcb528
																*(char *)v269 = (char)v2;
																v270 = v266;
																// branch -> 0xcb560
															} else {
																// 0xcb530
																v270 = v267 - 0x7fffffff;
																// branch -> 0xcb560
															}
															int32_t v271 = v268 + 1; // 0xcb560
															int32_t v272 = v269 + 1; // 0xcb564
															int32_t v273;
															if (v271 > v232) {
																// 0xcb570
																*(char *)v272 = (char)v2;
																v273 = v270;
																// branch -> 0xcb5a8
															} else {
																// 0xcb578
																v273 = v268 - 0x7fffffff;
																// branch -> 0xcb5a8
															}
															int32_t v274 = v271 + 1; // 0xcb5a8
															int32_t v275 = v272 + 1; // 0xcb5ac
															int32_t v276;
															if (v274 > v232) {
																// 0xcb5b8
																*(char *)v275 = (char)v2;
																v276 = v273;
																// branch -> 0xcb5f0
															} else {
																// 0xcb5c0
																v276 = v271 - 0x7fffffff;
																// branch -> 0xcb5f0
															}
															int32_t v277 = v275 + 1; // 0xcb5f0
															v111 = v277;
															int32_t v278 = v274 + 1; // 0xcb5f4
															v98 = v278;
															int32_t v279 = v8 - 1; // 0xcb5f8
															v8 = v279;
															if (v279 == 0) {
																int32_t v280 = v11 + 1; // 0xcb5fc
																v11 = v280;
																int32_t v281 = v128 + 128; // 0xcb600
																v128 = v281;
																if (v280 >= 16) {
																	// break (via goto) -> 0xcb60c
																	goto lab_0xcb60c;
																}
																v260 = v281;
																v261 = v280;
																// continue (via goto) -> 0xcb4a4
																goto lab_0xcb4a4;
															} else {
																// 0xcb5f0
																v263 = v277;
																v262 = v232;
																v264 = v278;
																v265 = v276;
																// branch -> 0xcb4d8
																continue;
															}
														}
													lab_0xcb60c:
														// 0xcb60c
														g28 = 0;
														g24 = 0;
														g25 = 0;
														g26 = 0;
														return function_e1bb0();
													}
												} else {
												lab_0xcb0f0_3:
													// 0xcb0f0
													v215 = v109;
													v212 = v6;
													// branch -> 0xcb0f0
													continue;
												}
											}
										} else {
										lab_0xcb034_3:
											// 0xcb034
											// branch -> 0xcb034
											continue;
										}
									}
								}
								// 0xcb010
								g27 = v208 + 224;
								v210 = g23;
								v209 = v210;
								// branch -> 0xcb014
								// 0xcb014
								v216 = *(int32_t *)(v209 - 0x557c);
								v6 = v216;
								v2 = 0;
								v112 = LoadFileInMem(v216, NULL);
								v101 = v112;
								g34 = v112;
								v102 = function_c9948();
								v6 = v102;
								v5 = 16;
								v8 = 16;
								v214 = g27;
								v213 = v214;
								v211 = v102;
								// branch -> 0xcb034
								while (true) {
									unsigned char v282 = *(char *)v211; // 0xcb034
									v5 = v282;
									*(char *)v213 = v282;
									int32_t v283 = v6;                        // 0xcb03c
									unsigned char v284 = *(char *)(v283 + 1); // 0xcb03c
									v5 = v284;
									int32_t v285 = g27; // 0xcb040
									*(char *)(v285 + 1) = v284;
									int32_t v286 = v6;                        // 0xcb044
									unsigned char v287 = *(char *)(v286 + 2); // 0xcb044
									v5 = v287;
									int32_t v288 = g27; // 0xcb048
									*(char *)(v288 + 2) = v287;
									int32_t v289 = v6;                        // 0xcb04c
									unsigned char v290 = *(char *)(v289 + 3); // 0xcb04c
									v5 = v290;
									int32_t v291 = g27; // 0xcb050
									*(char *)(v291 + 3) = v290;
									int32_t v292 = v6;                        // 0xcb054
									unsigned char v293 = *(char *)(v292 + 4); // 0xcb054
									v5 = v293;
									int32_t v294 = g27; // 0xcb058
									*(char *)(v294 + 4) = v293;
									int32_t v295 = v6;                        // 0xcb05c
									unsigned char v296 = *(char *)(v295 + 5); // 0xcb05c
									v5 = v296;
									int32_t v297 = g27; // 0xcb060
									*(char *)(v297 + 5) = v296;
									int32_t v298 = v6;                        // 0xcb064
									unsigned char v299 = *(char *)(v298 + 6); // 0xcb064
									v5 = v299;
									int32_t v300 = g27; // 0xcb068
									*(char *)(v300 + 6) = v299;
									int32_t v301 = v6;                        // 0xcb06c
									unsigned char v302 = *(char *)(v301 + 7); // 0xcb06c
									v5 = v302;
									int32_t v303 = g27; // 0xcb070
									*(char *)(v303 + 7) = v302;
									int32_t v304 = v6;                        // 0xcb074
									unsigned char v305 = *(char *)(v304 + 8); // 0xcb074
									v5 = v305;
									int32_t v306 = g27; // 0xcb078
									*(char *)(v306 + 8) = v305;
									int32_t v307 = v6;                        // 0xcb07c
									unsigned char v308 = *(char *)(v307 + 9); // 0xcb07c
									v5 = v308;
									int32_t v309 = g27; // 0xcb080
									*(char *)(v309 + 9) = v308;
									int32_t v310 = v6;                         // 0xcb084
									unsigned char v311 = *(char *)(v310 + 10); // 0xcb084
									v5 = v311;
									int32_t v312 = g27; // 0xcb088
									*(char *)(v312 + 10) = v311;
									int32_t v313 = v6;                         // 0xcb08c
									unsigned char v314 = *(char *)(v313 + 11); // 0xcb08c
									v5 = v314;
									int32_t v315 = g27; // 0xcb090
									*(char *)(v315 + 11) = v314;
									int32_t v316 = v6;                         // 0xcb094
									unsigned char v317 = *(char *)(v316 + 12); // 0xcb094
									v5 = v317;
									int32_t v318 = g27; // 0xcb098
									*(char *)(v318 + 12) = v317;
									int32_t v319 = v6;                         // 0xcb09c
									unsigned char v320 = *(char *)(v319 + 13); // 0xcb09c
									v5 = v320;
									int32_t v321 = g27; // 0xcb0a0
									*(char *)(v321 + 13) = v320;
									int32_t v322 = v6;                         // 0xcb0a4
									unsigned char v323 = *(char *)(v322 + 14); // 0xcb0a4
									v5 = v323;
									int32_t v324 = g27; // 0xcb0a8
									*(char *)(v324 + 14) = v323;
									v103 = v6;
									unsigned char v325 = *(char *)(v103 + 15); // 0xcb0ac
									v5 = v325;
									v6 = v103 + 16;
									int32_t v326 = g27; // 0xcb0b4
									*(char *)(v326 + 15) = v325;
									int32_t v327 = g27; // 0xcb0b8
									v107 = v327 + 16;
									g27 = v107;
									int32_t v328 = v8; // 0xcb0bc
									v108 = v328 - 1;
									v8 = v108;
									if (v108 != 0) {
										goto lab_0xcb034_3;
									}
									int32_t v329 = v101; // 0xcb0c0
									v6 = v329;
									function_c9acc(v329);
									int32_t v330 = &v101; // 0xcb0c8
									v6 = v330;
									int32_t v331 = MemFreeDbg(&v101); // 0xcb0cc
									v6 = v331;
									int32_t v332 = g23;                         // 0xcb0d0
									int32_t v333 = *(int32_t *)(v332 - 0x5580); // 0xcb0d0
									v6 = v333;
									v2 = 0;
									v113 = LoadFileInMem(v333, NULL);
									v101 = v113;
									g34 = v113;
									v104 = function_c9948();
									v6 = v104;
									v5 = 16;
									v8 = 16;
									int32_t v334 = g27;
									v215 = v334;
									v212 = v104;
									// branch -> 0xcb0f0
									while (true) {
										unsigned char v335 = *(char *)v212; // 0xcb0f0
										v5 = v335;
										*(char *)v215 = v335;
										int32_t v336 = v6;                        // 0xcb0f8
										unsigned char v337 = *(char *)(v336 + 1); // 0xcb0f8
										v5 = v337;
										int32_t v338 = g27; // 0xcb0fc
										*(char *)(v338 + 1) = v337;
										int32_t v339 = v6;                        // 0xcb100
										unsigned char v340 = *(char *)(v339 + 2); // 0xcb100
										v5 = v340;
										int32_t v341 = g27; // 0xcb104
										*(char *)(v341 + 2) = v340;
										int32_t v342 = v6;                        // 0xcb108
										unsigned char v343 = *(char *)(v342 + 3); // 0xcb108
										v5 = v343;
										int32_t v344 = g27; // 0xcb10c
										*(char *)(v344 + 3) = v343;
										int32_t v345 = v6;                        // 0xcb110
										unsigned char v346 = *(char *)(v345 + 4); // 0xcb110
										v5 = v346;
										int32_t v347 = g27; // 0xcb114
										*(char *)(v347 + 4) = v346;
										int32_t v348 = v6;                        // 0xcb118
										unsigned char v349 = *(char *)(v348 + 5); // 0xcb118
										v5 = v349;
										int32_t v350 = g27; // 0xcb11c
										*(char *)(v350 + 5) = v349;
										int32_t v351 = v6;                        // 0xcb120
										unsigned char v352 = *(char *)(v351 + 6); // 0xcb120
										v5 = v352;
										int32_t v353 = g27; // 0xcb124
										*(char *)(v353 + 6) = v352;
										int32_t v354 = v6;                        // 0xcb128
										unsigned char v355 = *(char *)(v354 + 7); // 0xcb128
										v5 = v355;
										int32_t v356 = g27; // 0xcb12c
										*(char *)(v356 + 7) = v355;
										int32_t v357 = v6;                        // 0xcb130
										unsigned char v358 = *(char *)(v357 + 8); // 0xcb130
										v5 = v358;
										int32_t v359 = g27; // 0xcb134
										*(char *)(v359 + 8) = v358;
										int32_t v360 = v6;                        // 0xcb138
										unsigned char v361 = *(char *)(v360 + 9); // 0xcb138
										v5 = v361;
										int32_t v362 = g27; // 0xcb13c
										*(char *)(v362 + 9) = v361;
										int32_t v363 = v6;                         // 0xcb140
										unsigned char v364 = *(char *)(v363 + 10); // 0xcb140
										v5 = v364;
										int32_t v365 = g27; // 0xcb144
										*(char *)(v365 + 10) = v364;
										int32_t v366 = v6;                         // 0xcb148
										unsigned char v367 = *(char *)(v366 + 11); // 0xcb148
										v5 = v367;
										int32_t v368 = g27; // 0xcb14c
										*(char *)(v368 + 11) = v367;
										int32_t v369 = v6;                         // 0xcb150
										unsigned char v370 = *(char *)(v369 + 12); // 0xcb150
										v5 = v370;
										int32_t v371 = g27; // 0xcb154
										*(char *)(v371 + 12) = v370;
										int32_t v372 = v6;                         // 0xcb158
										unsigned char v373 = *(char *)(v372 + 13); // 0xcb158
										v5 = v373;
										int32_t v374 = g27; // 0xcb15c
										*(char *)(v374 + 13) = v373;
										int32_t v375 = v6;                         // 0xcb160
										unsigned char v376 = *(char *)(v375 + 14); // 0xcb160
										v5 = v376;
										int32_t v377 = g27; // 0xcb164
										*(char *)(v377 + 14) = v376;
										v105 = v6;
										unsigned char v378 = *(char *)(v105 + 15); // 0xcb168
										v5 = v378;
										v6 = v105 + 16;
										int32_t v379 = g27; // 0xcb170
										*(char *)(v379 + 15) = v378;
										int32_t v380 = g27; // 0xcb174
										v109 = v380 + 16;
										g27 = v109;
										int32_t v381 = v8; // 0xcb178
										v110 = v381 - 1;
										v8 = v110;
										if (v110 != 0) {
											goto lab_0xcb0f0_3;
										}
										int32_t v382 = v101; // 0xcb17c
										v6 = v382;
										function_c9acc(v382);
										v6 = v330;
										int32_t v383 = MemFreeDbg(&v101); // 0xcb188
										v6 = v383;
										v5 = 4;
										v8 = 4;
										v2 = 0;
										// branch -> 0xcb1a4
										while (true) {
											// 0xcb1a4
											v111 = 226;
											v6 = 0;
											v5 = 226;
											v156 = false;
											v157 = false;
											v106 = 226;
											// branch -> 0xcb1a4
											goto lab_0xcb1a4_3;
										}
									}
								}
							} else {
								v142 = v145;
							}
						}
						// 0xcaf28
						v2 = v125;
						v8 = 3;
						v144 = v142;
						v143 = v125;
						// branch -> 0xcaf34
						goto lab_0xcaf34;
					}
				}
			}
		}
	lab_0xcaf80:
		// 0xcaf80
		*(char *)v114 = 0;
		v6 = 1;
		*(char *)(v114 + 1) = 1;
		v116 = 25;
		*(char *)(v114 + 2) = (char)v6;
		*(char *)(v114 + 3) = (char)v6;
		*(char *)(v114 + 4) = (char)v6;
		*(char *)(v114 + 5) = (char)v6;
		*(char *)(v114 + 6) = (char)v6;
		*(char *)(v114 + 7) = (char)v6;
		*(char *)(v114 + 8) = (char)v6;
		*(char *)(v114 + 9) = (char)v6;
		*(char *)(v114 + 10) = (char)v6;
		*(char *)(v114 + 11) = (char)v6;
		*(char *)(v114 + 12) = (char)v6;
		*(char *)(v114 + 13) = (char)v6;
		*(char *)(v114 + 14) = (char)v6;
		*(char *)(v114 + 15) = (char)v6;
		*(char *)(v114 + 16) = (char)v6;
		*(char *)(v114 + 17) = (char)v6;
		*(char *)(v114 + 18) = (char)v6;
		*(char *)(v114 + 19) = (char)v6;
		*(char *)(v114 + 20) = (char)v6;
		*(char *)(v114 + 21) = (char)v6;
		*(char *)(v114 + 22) = (char)v6;
		*(char *)(v114 + 23) = (char)v6;
		*(char *)(v114 + 24) = (char)v6;
		v117 = v114 + 25;
		if (v116 != 32 && v116 <= 32) {
			*(char *)v117 = (char)v6;
			v118 = v117 + 1;
			v119 = 31 - v116;
			while (v119 != 0) {
				// 0xcb004
				*(char *)v118 = (char)v6;
				v118++;
				v119--;
				// continue -> 0xcb004
			}
			// 0xcb010
			g27 = v118 + 224;
			// branch -> 0xcb014
			// 0xcb014
			v112 = LoadFileInMem(*(int32_t *)(g23 - 0x557c), NULL);
			v101 = v112;
			g34 = v112;
			v102 = function_c9948();
			v6 = v102;
			// branch -> 0xcb034
			while (true) {
				// 0xcb034
				*(char *)g27 = *(char *)v102;
				*(char *)(g27 + 1) = *(char *)(v6 + 1);
				*(char *)(g27 + 2) = *(char *)(v6 + 2);
				*(char *)(g27 + 3) = *(char *)(v6 + 3);
				*(char *)(g27 + 4) = *(char *)(v6 + 4);
				*(char *)(g27 + 5) = *(char *)(v6 + 5);
				*(char *)(g27 + 6) = *(char *)(v6 + 6);
				*(char *)(g27 + 7) = *(char *)(v6 + 7);
				*(char *)(g27 + 8) = *(char *)(v6 + 8);
				*(char *)(g27 + 9) = *(char *)(v6 + 9);
				*(char *)(g27 + 10) = *(char *)(v6 + 10);
				*(char *)(g27 + 11) = *(char *)(v6 + 11);
				*(char *)(g27 + 12) = *(char *)(v6 + 12);
				*(char *)(g27 + 13) = *(char *)(v6 + 13);
				*(char *)(g27 + 14) = *(char *)(v6 + 14);
				v103 = v6;
				v6 = v103 + 16;
				*(char *)(g27 + 15) = *(char *)(v103 + 15);
				v107 = g27 + 16;
				g27 = v107;
				v108 = 15;
				if (v108 != 0) {
					goto lab_0xcb034_3;
				}
				// 0xcb0c0
				function_c9acc(v101);
				MemFreeDbg(&v101);
				v113 = LoadFileInMem(*(int32_t *)(g23 - 0x5580), NULL);
				v101 = v113;
				g34 = v113;
				v104 = function_c9948();
				v6 = v104;
				// branch -> 0xcb0f0
				while (true) {
					// 0xcb0f0
					*(char *)g27 = *(char *)v104;
					*(char *)(g27 + 1) = *(char *)(v6 + 1);
					*(char *)(g27 + 2) = *(char *)(v6 + 2);
					*(char *)(g27 + 3) = *(char *)(v6 + 3);
					*(char *)(g27 + 4) = *(char *)(v6 + 4);
					*(char *)(g27 + 5) = *(char *)(v6 + 5);
					*(char *)(g27 + 6) = *(char *)(v6 + 6);
					*(char *)(g27 + 7) = *(char *)(v6 + 7);
					*(char *)(g27 + 8) = *(char *)(v6 + 8);
					*(char *)(g27 + 9) = *(char *)(v6 + 9);
					*(char *)(g27 + 10) = *(char *)(v6 + 10);
					*(char *)(g27 + 11) = *(char *)(v6 + 11);
					*(char *)(g27 + 12) = *(char *)(v6 + 12);
					*(char *)(g27 + 13) = *(char *)(v6 + 13);
					*(char *)(g27 + 14) = *(char *)(v6 + 14);
					v105 = v6;
					v6 = v105 + 16;
					*(char *)(g27 + 15) = *(char *)(v105 + 15);
					v109 = g27 + 16;
					g27 = v109;
					v110 = 15;
					v8 = v110;
					if (v110 != 0) {
						goto lab_0xcb0f0_3;
					}
					// 0xcb17c
					function_c9acc(v101);
					MemFreeDbg(&v101);
					v8 = 4;
					v2 = 0;
					// branch -> 0xcb1a4
					while (true) {
						// 0xcb1a4
						v111 = 226;
						v106 = 226;
						// branch -> 0xcb1a4
						goto lab_0xcb1a4_3;
					}
				}
			}
		}
		// 0xcb010
		g27 = v117 + 224;
		// branch -> 0xcb014
	}
	// 0xcb014
	v112 = LoadFileInMem(*(int32_t *)(g23 - 0x557c), NULL);
	v101 = v112;
	g34 = v112;
	v102 = function_c9948();
	v6 = v102;
	// branch -> 0xcb034
	while (true) {
		// 0xcb034
		*(char *)g27 = *(char *)v102;
		*(char *)(g27 + 1) = *(char *)(v6 + 1);
		*(char *)(g27 + 2) = *(char *)(v6 + 2);
		*(char *)(g27 + 3) = *(char *)(v6 + 3);
		*(char *)(g27 + 4) = *(char *)(v6 + 4);
		*(char *)(g27 + 5) = *(char *)(v6 + 5);
		*(char *)(g27 + 6) = *(char *)(v6 + 6);
		*(char *)(g27 + 7) = *(char *)(v6 + 7);
		*(char *)(g27 + 8) = *(char *)(v6 + 8);
		*(char *)(g27 + 9) = *(char *)(v6 + 9);
		*(char *)(g27 + 10) = *(char *)(v6 + 10);
		*(char *)(g27 + 11) = *(char *)(v6 + 11);
		*(char *)(g27 + 12) = *(char *)(v6 + 12);
		*(char *)(g27 + 13) = *(char *)(v6 + 13);
		*(char *)(g27 + 14) = *(char *)(v6 + 14);
		v103 = v6;
		v6 = v103 + 16;
		*(char *)(g27 + 15) = *(char *)(v103 + 15);
		v107 = g27 + 16;
		g27 = v107;
		v108 = 15;
		if (v108 != 0) {
			goto lab_0xcb034_3;
		}
		// 0xcb0c0
		function_c9acc(v101);
		MemFreeDbg(&v101);
		v113 = LoadFileInMem(*(int32_t *)(g23 - 0x5580), NULL);
		v101 = v113;
		g34 = v113;
		v104 = function_c9948();
		v6 = v104;
		// branch -> 0xcb0f0
		while (true) {
			// 0xcb0f0
			*(char *)g27 = *(char *)v104;
			*(char *)(g27 + 1) = *(char *)(v6 + 1);
			*(char *)(g27 + 2) = *(char *)(v6 + 2);
			*(char *)(g27 + 3) = *(char *)(v6 + 3);
			*(char *)(g27 + 4) = *(char *)(v6 + 4);
			*(char *)(g27 + 5) = *(char *)(v6 + 5);
			*(char *)(g27 + 6) = *(char *)(v6 + 6);
			*(char *)(g27 + 7) = *(char *)(v6 + 7);
			*(char *)(g27 + 8) = *(char *)(v6 + 8);
			*(char *)(g27 + 9) = *(char *)(v6 + 9);
			*(char *)(g27 + 10) = *(char *)(v6 + 10);
			*(char *)(g27 + 11) = *(char *)(v6 + 11);
			*(char *)(g27 + 12) = *(char *)(v6 + 12);
			*(char *)(g27 + 13) = *(char *)(v6 + 13);
			*(char *)(g27 + 14) = *(char *)(v6 + 14);
			v105 = v6;
			v6 = v105 + 16;
			*(char *)(g27 + 15) = *(char *)(v105 + 15);
			v109 = g27 + 16;
			g27 = v109;
			v110 = 15;
			v8 = v110;
			if (v110 != 0) {
				goto lab_0xcb0f0_3;
			}
			// 0xcb17c
			function_c9acc(v101);
			MemFreeDbg(&v101);
			v8 = 4;
			v2 = 0;
			// branch -> 0xcb1a4
			while (true) {
				// 0xcb1a4
				v111 = 226;
				v106 = 226;
				// branch -> 0xcb1a4
				goto lab_0xcb1a4_3;
			}
		}
	}
}

// Address range: 0xcb730 - 0xcb75c
int32_t InitLightMax(void)
{
	int32_t result = *(int32_t *)(g23 - 0x776c); // 0xcb730
	int32_t v1 = *(int32_t *)(g23 - 0x70cc);     // 0xcb734
	if (*(int32_t *)result == 0) {
		// 0xcb750
		*(char *)v1 = 15;
		return result;
	}
	// 0xcb744
	*(char *)v1 = 3;
	return result;
}

// Address range: 0xcb75c - 0xcb87c
int32_t InitLighting(int32_t a1)
{
	int32_t v1 = 0; // r0
	*(int32_t *)*(int32_t *)(g23 - 0x7158) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x7168) = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x715c); // r10
	*(int32_t *)*(int32_t *)(g23 - 0x752c) = v1;
	*(char *)v2 = (char)v1;
	*(char *)(v2 + 1) = (char)1;
	*(char *)(v2 + 2) = (char)2;
	*(char *)(v2 + 3) = (char)3;
	*(char *)(v2 + 4) = (char)4;
	*(char *)(v2 + 5) = (char)5;
	*(char *)(v2 + 6) = (char)6;
	*(char *)(v2 + 7) = (char)7;
	*(char *)(v2 + 8) = (char)8;
	*(char *)(v2 + 9) = (char)9;
	*(char *)(v2 + 10) = (char)10;
	*(char *)(v2 + 11) = (char)11;
	*(char *)(v2 + 12) = (char)12;
	*(char *)(v2 + 13) = (char)13;
	*(char *)(v2 + 14) = (char)14;
	*(char *)(v2 + 15) = (char)15;
	*(char *)(v2 + 16) = (char)16;
	*(char *)(v2 + 17) = (char)17;
	*(char *)(v2 + 18) = (char)18;
	*(char *)(v2 + 19) = (char)19;
	*(char *)(v2 + 20) = (char)20;
	*(char *)(v2 + 21) = (char)21;
	*(char *)(v2 + 22) = (char)22;
	int32_t result = 30; // r3
	*(char *)(v2 + 23) = (char)23;
	*(char *)(v2 + 24) = (char)24;
	*(char *)(v2 + 25) = (char)25;
	*(char *)(v2 + 26) = (char)26;
	*(char *)(v2 + 27) = (char)27;
	*(char *)(v2 + 28) = (char)28;
	*(char *)(v2 + 29) = (char)29;
	*(char *)(v2 + 30) = (char)result;
	*(char *)(v2 + 31) = (char)31;
	return result;
}

// Address range: 0xcb87c - 0xcb8f8
int32_t AddLight(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7140); // r10
	if (*(int32_t *)*(int32_t *)(g23 - 0x752c) != 0) {
		// 0xcb894
		return -1;
	}
	int32_t *v2 = (int32_t *)*(int32_t *)(g23 - 0x7158); // 0xcb89c
	uint32_t v3 = *v2;                                   // 0xcb89c
	int32_t result;                                      // 0xcb8c4
	if (v3 <= 31) {
		// 0xcb8ac
		*v2 = v3 + 1;
		int32_t v4 = 0; // r7
		result = (int32_t) * (char *)(v3 + *(int32_t *)(g23 - 0x715c));
		int32_t v5 = 52 * result; // 0xcb8c8
		*(int32_t *)(v1 + v5) = a1;
		int32_t v6 = v5 + v1; // 0xcb8d0
		*(int32_t *)(v6 + 4) = a2;
		*(int32_t *)(v6 + 8) = a3;
		*(int32_t *)(v6 + 40) = v4;
		*(int32_t *)(v6 + 44) = v4;
		*(int32_t *)(v6 + 16) = v4;
		*(int32_t *)(v6 + 20) = v4;
		*(int32_t *)*(int32_t *)(g23 - 0x7168) = 1;
		// branch -> 0xcb8f0
	} else {
		result = -1;
	}
	// 0xcb8f0
	return result;
}

// Address range: 0xcb8f8 - 0xcb930
int32_t AddUnLight(int32_t result)
{
	// 0xcb8f8
	if (*(int32_t *)*(int32_t *)(g23 - 0x752c) != 0) {
		// bb
		return result;
	}
	// 0xcb908
	if (result == -1) {
		// bb
		return -1;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x7168); // r3
	*(int32_t *)(*(int32_t *)(g23 - 0x7140) + 52 * result + 16) = 1;
	*(int32_t *)result2 = 1;
	return result2;
}

// Address range: 0xcb930 - 0xcb984
int32_t ChangeLightRadius(int32_t result, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7140); // 0xcb934
	if (*(int32_t *)*(int32_t *)(g23 - 0x752c) != 0) {
		// bb
		return result;
	}
	// 0xcb944
	if (result == -1) {
		// bb
		return -1;
	}
	int32_t v2 = 52 * result;                     // 0xcb94c
	int32_t result2 = *(int32_t *)(g23 - 0x7168); // r3
	int32_t v3 = v1 + v2;                         // 0xcb954
	*(int32_t *)(v3 + 20) = 1;
	*(int32_t *)(v3 + 28) = *(int32_t *)(v2 + v1);
	*(int32_t *)(v3 + 32) = *(int32_t *)(v3 + 4);
	*(int32_t *)(v3 + 36) = *(int32_t *)(v3 + 8);
	*(int32_t *)(v3 + 8) = a2;
	*(int32_t *)result2 = 1;
	return result2;
}

// Address range: 0xcb984 - 0xcb9dc
int32_t ChangeLightXY(int32_t result, int32_t a2, int32_t a3)
{
	// 0xcb984
	if (*(int32_t *)*(int32_t *)(g23 - 0x752c) != 0) {
		// bb
		return result;
	}
	// 0xcb998
	if (result == -1) {
		// bb
		return -1;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x7168);          // r3
	int32_t v1 = *(int32_t *)(g23 - 0x7140) + 52 * result; // 0xcb9a8
	*(int32_t *)(v1 + 20) = 1;
	*(int32_t *)(v1 + 28) = *(int32_t *)v1;
	*(int32_t *)(v1 + 32) = *(int32_t *)(v1 + 4);
	*(int32_t *)(v1 + 36) = *(int32_t *)(v1 + 8);
	*(int32_t *)v1 = a2;
	*(int32_t *)(v1 + 4) = a3;
	*(int32_t *)result2 = 1;
	return result2;
}

// Address range: 0xcb9dc - 0xcba34
int32_t ChangeLightOff(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7140); // 0xcb9e0
	if (*(int32_t *)*(int32_t *)(g23 - 0x752c) != 0) {
		// bb
		return result;
	}
	// 0xcb9f0
	if (result == -1) {
		// bb
		return -1;
	}
	int32_t v2 = 52 * result;                     // 0xcb9f8
	int32_t result2 = *(int32_t *)(g23 - 0x7168); // r3
	int32_t v3 = v1 + v2;                         // 0xcba00
	*(int32_t *)(v3 + 20) = 1;
	*(int32_t *)(v3 + 28) = *(int32_t *)(v2 + v1);
	*(int32_t *)(v3 + 32) = *(int32_t *)(v3 + 4);
	*(int32_t *)(v3 + 36) = *(int32_t *)(v3 + 8);
	*(int32_t *)(v3 + 40) = a2;
	*(int32_t *)(v3 + 44) = a3;
	*(int32_t *)result2 = 1;
	return result2;
}

// Address range: 0xcba34 - 0xcba90
int32_t ChangeLight(int32_t result, int32_t a2, int32_t a3)
{
	// 0xcba34
	if (*(int32_t *)*(int32_t *)(g23 - 0x752c) != 0) {
		// bb
		return result;
	}
	// 0xcba48
	if (result == -1) {
		// bb
		return -1;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x7168);          // r3
	int32_t v1 = *(int32_t *)(g23 - 0x7140) + 52 * result; // 0xcba58
	*(int32_t *)(v1 + 20) = 1;
	*(int32_t *)(v1 + 28) = *(int32_t *)v1;
	*(int32_t *)(v1 + 32) = *(int32_t *)(v1 + 4);
	*(int32_t *)(v1 + 36) = *(int32_t *)(v1 + 8);
	*(int32_t *)v1 = a2;
	*(int32_t *)(v1 + 4) = a3;
	*(int32_t *)(v1 + 8) = g39;
	*(int32_t *)result2 = 1;
	return result2;
}

// Address range: 0xcba90 - 0xcbc0c
int32_t ProcessLightList(void)
{
	int32_t v1 = g10;                             // 0xcba94
	int32_t result2 = *(int32_t *)(g23 - 0x752c); // 0xcba98
	int32_t v2 = *(int32_t *)(g23 - 0x715c);      // 0xcba9c
	g32 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7168); // 0xcbaa0
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7158); // 0xcbaa4
	g35 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x7140); // 0xcbaa8
	g36 = v5;
	if (*(int32_t *)result2 == 0) {
		int32_t v6 = v3; // 0xcbbf4
		if (*(int32_t *)v3 != 0) {
			int32_t v7 = 0;  // r25
			int32_t v8 = v4; // 0xcbb889
			int32_t result;  // r3
			int32_t v9;      // r4
			int32_t v10;     // r5
			int32_t v11;     // r6
			int32_t v12;     // 0xcbb54
			int32_t v13;     // 0xcbb60
			int32_t v14;     // 0xcbb80
			int32_t v15;     // 0xcbb84
			int32_t v16;     // 0xcbb88
			int32_t v17;     // 0xcbb94
			int32_t v18;     // 0xcbbbc
			int32_t v19;     // 0xcbbdc
			int32_t v20;     // 0xcbbe0
			int32_t v21;     // 0xcbbe42
			int32_t v22;     // 0xcbb58
			int32_t v23;     // 0xcbb8811
			int32_t v24;     // 0xcbb54
			if (*(int32_t *)v4 > 0) {
				while (true) {
					int32_t v25 = (int32_t) * (char *)v2; // 0xcbad8
					int32_t v26 = v25;                    // r26
					int32_t v27 = 52 * v25;               // 0xcbadc
					result = v27;
					int32_t v28 = v5; // 0xcbb08
					if (*(int32_t *)(v27 + 16 + v5) != 0) {
						int32_t v29 = v27 + v5;              // 0xcbaf0
						int32_t v30 = *(int32_t *)(v29 + 4); // 0xcbaf8
						int32_t v31 = *(int32_t *)(v29 + 8); // 0xcbafc
						result = function_ca36c(*(int32_t *)v29, v30, v31);
						v28 = g36;
						v25 = v26;
						// branch -> 0xcbb04
					}
					int32_t v32 = 52 * v25 + v28; // 0xcbb08
					int32_t v33 = v32 + 20;       // 0xcbb0c
					v26 = v33;
					if (*(int32_t *)v33 != 0) {
						int32_t v34 = *(int32_t *)(v32 + 32); // 0xcbb20
						int32_t v35 = *(int32_t *)(v32 + 36); // 0xcbb24
						result = function_ca36c(*(int32_t *)(v32 + 28), v34, v35);
						*(int32_t *)v26 = 0;
						// branch -> 0xcbb34
					}
					int32_t v36 = v2 + 1; // 0xcbb34
					int32_t v37 = v7 + 1; // 0xcbb38
					v7 = v37;
					int32_t v38 = g35; // 0xcbb3c
					if (v37 >= *(int32_t *)v38) {
						// 0xcbb3c
						v8 = v38;
						v2 = g32;
						// branch -> 0xcbb48
						// 0xcbb48
						g31 = v2;
						v23 = *(int32_t *)v8;
						v21 = v8;
						int32_t v39 = v23; // 0xcbb98
						v17 = v2;
						if (v23 > 0) {
							int32_t v40 = v8; // 0xcbb8831
							int32_t v41 = 0;  // 0xcbb8429
							v12 = v2;
							int32_t v42; // 0xcbb88
							while (true) {
								// 0xcbb54
								v24 = (int32_t) * (char *)v12;
								v22 = 52 * v24;
								result = v22;
								v13 = g36;
								v16 = v40;
								v15 = v41;
								v14 = v12;
								if (*(int32_t *)(v13 + v22 + 16) == 0) {
								lab_0xcbb6c:;
									int32_t v43 = v13 + v22;             // 0xcbb6c
									int32_t v44 = *(int32_t *)(v43 + 4); // 0xcbb74
									int32_t v45 = *(int32_t *)(v43 + 8); // 0xcbb78
									result = DoLighting(*(int32_t *)v43, v44, v45, v24);
									v16 = g35;
									v15 = g30;
									v14 = g31;
									// branch -> 0xcbb80
								}
							lab_0xcbb80:;
								int32_t v46 = v14 + 1; // 0xcbb80
								g31 = v46;
								int32_t v47 = v15 + 1; // 0xcbb84
								v42 = *(int32_t *)v16;
								if (v47 >= v42) {
									// break -> 0xcbb88
									break;
								}
								v40 = v16;
								v41 = v47;
								v12 = v46;
								// continue -> 0xcbb54
							}
							// 0xcbb88
							v21 = v16;
							v39 = v42;
							v17 = g32;
							// branch -> 0xcbb94
						}
						// 0xcbb94
						v9 = v17;
						v10 = v17 + v39;
						v11 = 0;
						if (*(int32_t *)v21 > 0) {
							v20 = 0;
							v18 = v21;
							v19 = v17;
							while (true) {
								// 0xcbba4
								int32_t v48; // 0xcbbe4
								int32_t v49; // 0xcbbe0
								if (*(int32_t *)(g36 + 52 * (int32_t) * (char *)v19 + 16) == 0) {
								lab_0xcbbdc:
									// 0xcbbdc
									v9 = v19 + 1;
									v49 = v20 + 1;
									v11 = v49;
									v48 = v18;
									// branch -> 0xcbbe4
								} else {
								lab_0xcbbbc:;
									int32_t *v50 = (int32_t *)v18; // 0xcbbbc
									int32_t v51 = *v50 - 1;        // 0xcbbc0
									*v50 = v51;
									unsigned char v52 = *(char *)(v51 + g32); // 0xcbbc8
									int32_t v53 = v10 - 1;                    // 0xcbbd0
									*(char *)v53 = *(char *)v9;
									v10 = v53;
									*(char *)v9 = (char)(int32_t)v52;
									v49 = v11;
									v48 = g35;
									// branch -> 0xcbbe4
								}
								// 0xcbbe4
								if (*(int32_t *)v48 > v49) {
									// 0xcbbe4
									v20 = v49;
									v18 = v48;
									v19 = v9;
									// branch -> 0xcbba4
									continue;
								}
							}
						}
						// 0xcbbf0
						// branch -> 0xcbbf0
						// 0xcbbf0
						*(int32_t *)g33 = 0;
						// branch -> 0xcbbf8
						// 0xcbbf8
						g10 = v1;
						return result;
					}
					// 0xcbb34
					v5 = g36;
					v2 = v36;
					// branch -> 0xcbad8
				}
			}
			// 0xcbb48
			g31 = v2;
			v23 = *(int32_t *)v8;
			v21 = v8;
			v17 = v2;
			if (v23 > 0) {
				v12 = v2;
				while (true) {
					// 0xcbb54
					v24 = (int32_t) * (char *)v12;
					v22 = 52 * v24;
					result = v22;
					v13 = g36;
					if (*(int32_t *)(v13 + v22 + 16) == 0) {
						goto lab_0xcbb6c;
					}
					v16 = v8;
					v15 = 0;
					v14 = v12;
					goto lab_0xcbb80;
				}
			}
			// 0xcbb94
			v9 = v17;
			v10 = v17 + v23;
			v11 = 0;
			if (*(int32_t *)v21 > 0) {
				v20 = 0;
				v18 = v21;
				v19 = v17;
				while (true) {
					// 0xcbba4
					if (*(int32_t *)(g36 + 52 * (int32_t) * (char *)v19 + 16) == 0) {
						goto lab_0xcbbdc;
					}
					goto lab_0xcbbbc;
				}
			}
			// 0xcbbf0
			v6 = g33;
			// branch -> 0xcbbf0
		}
		// 0xcbbf0
		*(int32_t *)v6 = 0;
		// branch -> 0xcbbf8
	}
	// 0xcbbf8
	g10 = v1;
	return result2;
}

// Address range: 0xcbc0c - 0xcbc44
int32_t SavePreLighting(int32_t a1)
{
	// 0xcbc0c
	g34 = *(int32_t *)*(int32_t *)(g23 - 0x7590);
	return memcpy();
}

// Address range: 0xcbc44 - 0xcbd04
int32_t InitVision(int32_t a1)
{
	int32_t v1 = 0; // r5
	*(int32_t *)*(int32_t *)(g23 - 0x7164) = 0;
	int32_t v2 = 0; // r7
	*(int32_t *)*(int32_t *)(g23 - 0x6ea4) = v1;
	int32_t v3 = *(int32_t *)(g23 - 0x7518); // r4
	*(int32_t *)*(int32_t *)(g23 - 0x7160) = 1;
	int32_t result = *(int32_t *)(g23 - 0x7268); // 0xcbc6c
	char v4 = *(char *)v3;                       // 0xcbc70
	int32_t v5 = v4;                             // 0xcbc74
	if (v4 < 1) {
		// 0xcbcf0
		return result;
	}
	// 0xcbc7c
	int32_t result4; // 0xcbce8
	int32_t result3; // 0xcbce89
	int32_t v6;      // 0xcbcec
	int32_t v7;      // 0xcbcec11
	int32_t v8;      // 0xcbcf8
	int32_t result2; // 0xcbcf8
	int32_t v9;      // 0xcbcfc
	if (v4 < 9) {
		// 0xcbcf4
		v8 = v2;
		result2 = v8 + result;
		v9 = (int32_t) * (char *)v3;
		if (v9 <= v8) {
			// 0xcbcf0
			return result2;
		}
		// 0xcbce4
		*(char *)result2 = 0;
		result3 = result2 + 1;
		v7 = v9 - v8 - 1;
		if (v7 == 0) {
			// 0xcbcf0
			return result3;
		}
		*(char *)result3 = (char)0;
		result4 = result3 + 1;
		v6 = v7 - 1;
		while (v6 != 0) {
			// 0xcbce4
			*(char *)result4 = (char)0;
			result4++;
			v6--;
			// continue -> 0xcbce4
		}
		// 0xcbcf0
		return result4;
	}
	int32_t v10 = result; // r6
	if (v5 != 8) {
		*(char *)result = (char)v1;
		v2 += 8;
		*(char *)(v10 + 1) = (char)v1;
		*(char *)(v10 + 2) = (char)v1;
		*(char *)(v10 + 3) = (char)v1;
		*(char *)(v10 + 4) = (char)v1;
		*(char *)(v10 + 5) = (char)v1;
		*(char *)(v10 + 6) = (char)v1;
		*(char *)(v10 + 7) = (char)v1;
		int32_t v11 = v10 + 8; // 0xcbcc4
		v10 = v11;
		int32_t v12 = (v5 - 1) / 8 - 1; // 0xcbcc8
		while (v12 != 0) {
			// 0xcbca0
			*(char *)v11 = (char)v1;
			v2 += 8;
			*(char *)(v10 + 1) = (char)v1;
			*(char *)(v10 + 2) = (char)v1;
			*(char *)(v10 + 3) = (char)v1;
			*(char *)(v10 + 4) = (char)v1;
			*(char *)(v10 + 5) = (char)v1;
			*(char *)(v10 + 6) = (char)v1;
			*(char *)(v10 + 7) = (char)v1;
			v11 = v10 + 8;
			v10 = v11;
			v12--;
			// continue -> 0xcbca0
		}
		// branch -> 0xcbcf4
	}
	// 0xcbcf4
	v8 = v2;
	result2 = v8 + result;
	v9 = (int32_t) * (char *)v3;
	int32_t result5 = result2;
	if (v9 > v8) {
		// 0xcbce4
		*(char *)result2 = 0;
		result3 = result2 + 1;
		v7 = v9 - v8 - 1;
		if (v7 != 0) {
			*(char *)result3 = (char)0;
			result4 = result3 + 1;
			v6 = v7 - 1;
			while (v6 != 0) {
				// 0xcbce4
				*(char *)result4 = (char)0;
				result4++;
				v6--;
				// continue -> 0xcbce4
			}
			// 0xcbcf0
			return result4;
		}
		result5 = result3;
	}
	// 0xcbcf0
	return result5;
}

// Address range: 0xcbd04 - 0xcbd08
int32_t function_cbd04(void)
{
	// 0xcbd04
	return 0;
}

// Address range: 0xcbd08 - 0xcbd80
int32_t AddVision(int32_t result)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7164); // 0xcbd08
	int32_t v2 = *(int32_t *)(g23 - 0x7144); // 0xcbd0c
	int32_t v3 = *(int32_t *)v1;             // 0xcbd10
	if (v3 > 31) {
		// bb
		return result;
	}
	int32_t v4 = 52 * v3; // 0xcbd1c
	*(int32_t *)(v4 + v2) = result;
	int32_t v5 = v4 + v2; // 0xcbd2c
	int32_t v6 = 0;       // r10
	*(int32_t *)(v5 + 4) = g37;
	*(int32_t *)(v5 + 8) = g38;
	int32_t *v7 = (int32_t *)*(int32_t *)(g23 - 0x7160); // 0xcbd3c
	int32_t result2 = *v7;                               // 0xcbd3c
	*v7 = result2 + 1;
	*(int32_t *)(v5 + 12) = result2;
	*(int32_t *)(v5 + 16) = v6;
	*(int32_t *)(v5 + 20) = v6;
	if (g39 == 0) {
		// branch -> 0xcbd5c
	} else {
		// 0xcbd58
		v6 = 1;
		// branch -> 0xcbd5c
	}
	// 0xcbd5c
	*(int32_t *)(v4 + v2 + 48) = v6;
	int32_t *v8 = (int32_t *)v1; // 0xcbd6c
	*v8 = *v8 + 1;
	*(int32_t *)*(int32_t *)(g23 - 0x6ea4) = 1;
	return result2;
}

// Address range: 0xcbd80 - 0xcbddc
int32_t function_cbd80(int32_t result, int32_t a2)
{
	int32_t result2 = result;                            // r3
	int32_t v1 = 1;                                      // r5
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x7164); // 0xcbd8c
	int32_t v3 = *(int32_t *)(g23 - 0x7144);             // 0xcbd90
	if (v2 < 1) {
		// bb
		return result;
	}
	int32_t v4 = v2; // ctr
	while (true) {
		int32_t v5 = v2; // 0xcbdd4
		if (result == *(int32_t *)(v3 + 12)) {
			// 0xcbdac
			*(int32_t *)(v3 + 20) = v1;
			int32_t v6 = v3; // 0xcbdb0
			*(int32_t *)(v6 + 28) = *(int32_t *)v6;
			int32_t v7 = v3; // 0xcbdb8
			*(int32_t *)(v7 + 32) = *(int32_t *)(v7 + 4);
			int32_t v8 = v3; // 0xcbdc0
			*(int32_t *)(v8 + 36) = *(int32_t *)(v8 + 8);
			*(int32_t *)(v3 + 8) = a2;
			*(int32_t *)*(int32_t *)(g23 - 0x6ea4) = v1;
			v5 = v4;
			// branch -> 0xcbdd0
		}
		int32_t v9 = v5 - 1; // 0xcbdd4
		v4 = v9;
		if (v9 == 0) {
			// 0xcbdd8
			return result2;
		}
		// 0xcbdd0
		v2 = v9;
		result = result2;
		v3 += 52;
		// branch -> 0xcbda0
	}
}

// Address range: 0xcbddc - 0xcbe3c
int32_t function_cbddc(int32_t result, int32_t a2, int32_t a3)
{
	int32_t result2 = result;                            // r3
	int32_t v1 = 1;                                      // r6
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x7164); // 0xcbde8
	int32_t v3 = *(int32_t *)(g23 - 0x7144);             // 0xcbdec
	if (v2 < 1) {
		// bb
		return result;
	}
	int32_t v4 = v2; // ctr
	while (true) {
		int32_t v5 = v2; // 0xcbe34
		if (result == *(int32_t *)(v3 + 12)) {
			// 0xcbe08
			*(int32_t *)(v3 + 20) = v1;
			int32_t v6 = v3; // 0xcbe0c
			*(int32_t *)(v6 + 28) = *(int32_t *)v6;
			int32_t v7 = v3; // 0xcbe14
			*(int32_t *)(v7 + 32) = *(int32_t *)(v7 + 4);
			int32_t v8 = v3; // 0xcbe1c
			*(int32_t *)(v8 + 36) = *(int32_t *)(v8 + 8);
			*(int32_t *)v3 = a2;
			*(int32_t *)(v3 + 4) = a3;
			*(int32_t *)*(int32_t *)(g23 - 0x6ea4) = v1;
			v5 = v4;
			// branch -> 0xcbe30
		}
		int32_t v9 = v5 - 1; // 0xcbe34
		v4 = v9;
		if (v9 == 0) {
			// 0xcbe38
			return result2;
		}
		// 0xcbe30
		v2 = v9;
		result = result2;
		v3 += 52;
		// branch -> 0xcbdfc
	}
}

// Address range: 0xcbe3c - 0xcc0b8
int32_t ProcessVisionList(int32_t a1)
{
	int32_t v1 = g10;                        // 0xcbe40
	int32_t v2 = *(int32_t *)(g23 - 0x6ea4); // 0xcbe44
	g35 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7144); // 0xcbe48
	g32 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7518); // 0xcbe4c
	g33 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x7164); // 0xcbe50
	g36 = v5;
	g30 = *(int32_t *)(g23 - 0x7268);
	if (*(int32_t *)v2 == 0) {
		// 0xcc088
		*(int32_t *)v2 = 0;
		g10 = v1;
		return g34;
	}
	g28 = 0;
	g31 = 0;
	if (*(int32_t *)v5 > 0) {
		while (true) {
			int32_t v6 = v3; // 0xcbeac
			if (*(int32_t *)(v3 + 16) != 0) {
				int32_t v7 = *(int32_t *)(v3 + 8); // 0xcbe90
				function_ca430(*(int32_t *)v3, *(int32_t *)(v3 + 4), v7);
				v6 = v3;
				// branch -> 0xcbe98
			}
			int32_t v8 = v6; // 0xcbeb8
			if (*(int32_t *)(v6 + 20) != 0) {
				int32_t v9 = *(int32_t *)(v6 + 36); // 0xcbeac
				function_ca430(*(int32_t *)(v6 + 28), *(int32_t *)(v6 + 32), v9);
				*(int32_t *)(v3 + 20) = g31;
				v8 = v3;
				// branch -> 0xcbeb8
			}
			int32_t v10 = g28 + 1; // 0xcbebc
			g28 = v10;
			if (v10 >= *(int32_t *)g36) {
				// break -> 0xcbec0
				break;
			}
			v3 = v8 + 52;
			// continue -> 0xcbe7c
		}
		// 0xcbec0
		v4 = g33;
		// branch -> 0xcbecc
	}
	unsigned char v11 = *(char *)v4; // 0xcbecc
	int32_t v12 = 0;                 // r11
	int32_t v13 = v11;               // 0xcbed4
	int32_t v14;                     // r4
	int32_t v15;                     // r5
	int32_t v16;                     // r6
	int32_t v17;                     // 0xcbf70
	int32_t v18;                     // 0xcbf94
	int32_t v19;                     // 0xcbfa4
	int32_t v20;                     // 0xcbfa8
	int32_t v21;                     // 0xcbfac
	int32_t v22;                     // 0xcbfac8
	int32_t v23;                     // 0xcbfbc
	int32_t v24;                     // 0xcbfc076
	int32_t v25;                     // 0xcbfd0
	int32_t v26;                     // 0xcc07046
	int32_t v27;                     // 0xcc074241
	int32_t v28;                     // 0xcc074275
	int32_t v29;                     // 0xcc08051
	int32_t v30;                     // 0xcbfe8
	int32_t v31;                     // 0xcbfac10
	if (v11 >= 1) {
		int32_t v32 = 0; // 0xcc098
		int32_t v33;     // 0xcbf68
		int32_t v34;     // 0xcbf6879
		int32_t v35;     // 0xcbf6c
		int32_t v36;     // 0xcbf6c81
		int32_t v37;     // 0xcc098
		int32_t v38;     // 0xcc09c
		if (v11 >= 9) {
			int32_t v39 = (v13 - 1) / 8; // ctr
			int32_t v40 = g30;           // 0xcbef8
			if (v13 != 8) {
				char v41 = 0;
				while (true) {
					// 0xcbf20
					*(char *)v40 = v41;
					v12 += 8;
					*(char *)(v40 + 1) = (char)0;
					*(char *)(v40 + 2) = (char)0;
					*(char *)(v40 + 3) = (char)0;
					*(char *)(v40 + 4) = (char)0;
					*(char *)(v40 + 5) = (char)0;
					*(char *)(v40 + 6) = (char)0;
					*(char *)(v40 + 7) = (char)0;
					int32_t v42 = v39 - 1; // 0xcbf48
					v39 = v42;
					if (v42 == 0) {
						// 0xcc094
						v32 = v12;
						// branch -> 0xcc094
						// 0xcc094
						v37 = g30 + v32;
						v38 = (int32_t) * (char *)g33;
						if (v38 > v32) {
							// 0xcbf64
							*(char *)v37 = 0;
							v34 = v37 + 1;
							v36 = v38 - v32 - 1;
							if (v36 != 0) {
								*(char *)v34 = (char)0;
								v33 = v34 + 1;
								v35 = v36 - 1;
								while (v35 != 0) {
									// 0xcbf64
									*(char *)v33 = (char)0;
									v33++;
									v35--;
									// continue -> 0xcbf64
								}
								// 0xcbf70
								v17 = g32;
								g29 = v17;
								g30 = 0;
								v22 = g36;
								v31 = *(int32_t *)v22;
								v27 = v22;
								v23 = v17;
								int32_t v43 = v31; // 0xcbfb8
								if (v31 > 0) {
									int32_t v44 = v22; // 0xcbfac35
									int32_t v45 = 0;   // 0xcbfa833
									v18 = v17;
									int32_t v46; // 0xcbfac
									while (true) {
										// 0xcbf7c
										v21 = v44;
										v20 = v45;
										v19 = v18;
										if (*(int32_t *)(v18 + 16) == 0) {
										lab_0xcbf88_4:;
											int32_t v47 = *(int32_t *)(v18 + 48) % 2; // 0xcbf90
											int32_t v48 = *(int32_t *)(v18 + 4);      // 0xcbf94
											int32_t v49 = *(int32_t *)(v18 + 8);      // 0xcbf98
											DoVision(*(int32_t *)v18, v48, v49, v47, v47);
											v21 = g36;
											v20 = g30;
											v19 = g29;
											// branch -> 0xcbfa4
										}
									lab_0xcbfa4_4:;
										int32_t v50 = v19 + 52; // 0xcbfa4
										g29 = v50;
										int32_t v51 = v20 + 1; // 0xcbfa8
										g30 = v51;
										v46 = *(int32_t *)v21;
										if (v51 >= v46) {
											// break -> 0xcbfac
											break;
										}
										v44 = v21;
										v45 = v51;
										v18 = v50;
										// continue -> 0xcbf7c
									}
									// 0xcbfac
									v27 = v21;
									v23 = g32;
									v43 = v46;
									// branch -> 0xcbfb8
								}
								// 0xcbfb8
								v14 = 52 * v43 + v23;
								v15 = v23;
								g34 = 0;
								v16 = 0;
								if (*(int32_t *)v27 <= 0) {
									// 0xcc088
									// branch -> 0xcc088
									// 0xcc088
									*(int32_t *)g35 = 0;
									g10 = v1;
									return g34;
								}
								v24 = v23;
								v28 = v27;
								while (true) {
									// 0xcbfd0
									v29 = 0;
									v26 = 0;
									v30 = v28;
									v25 = v24;
									// branch -> 0xcbfd0
								lab_0xcbfd0_4:;
									int32_t v52;  // 0xcc074
									int32_t v53;  // 0xcc08050
									int32_t *v54; // 0xcc074
									while (true) {
										// 0xcbfd0
										v53 = v29;
										v52 = v30;
										int32_t v55 = v26; // 0xcc070
										int32_t v56 = v25; // 0xcc06c
										if (*(int32_t *)(v25 + 16) != 0) {
											int32_t *v57 = (int32_t *)v30; // 0xcbfdc
											v14 -= 52;
											*v57 = *v57 - 1;
											int32_t v58 = *(int32_t *)g36; // 0xcbfec
											int32_t v59 = v16;             // 0xcbff8
											int32_t v60 = v59;
											if (v58 >= 1 && v59 != v58) {
												int32_t v61 = v14; // 0xcc000
												*(int32_t *)v15 = *(int32_t *)v61;
												*(int32_t *)(v15 + 4) = *(int32_t *)(v61 + 4);
												int32_t v62 = v14; // 0xcc010
												*(int32_t *)(v15 + 8) = *(int32_t *)(v62 + 8);
												*(int32_t *)(v15 + 12) = *(int32_t *)(v62 + 12);
												int32_t v63 = v14; // 0xcc020
												*(int32_t *)(v15 + 16) = *(int32_t *)(v63 + 16);
												*(int32_t *)(v15 + 20) = *(int32_t *)(v63 + 20);
												int32_t v64 = v14; // 0xcc030
												*(int32_t *)(v15 + 24) = *(int32_t *)(v64 + 24);
												*(int32_t *)(v15 + 28) = *(int32_t *)(v64 + 28);
												int32_t v65 = v14; // 0xcc040
												*(int32_t *)(v15 + 32) = *(int32_t *)(v65 + 32);
												*(int32_t *)(v15 + 36) = *(int32_t *)(v65 + 36);
												int32_t v66 = v14; // 0xcc050
												*(int32_t *)(v15 + 40) = *(int32_t *)(v66 + 40);
												*(int32_t *)(v15 + 44) = *(int32_t *)(v66 + 44);
												*(int32_t *)(v15 + 48) = *(int32_t *)(v14 + 48);
												v60 = v16;
												// branch -> 0xcc068
											}
											// 0xcc068
											g34 = 1;
											v53 = 1;
											v52 = g36;
											v55 = v60;
											v56 = v15;
											// branch -> 0xcc06c
										}
										int32_t v67 = v56 + 52; // 0xcc06c
										v15 = v67;
										int32_t v68 = v55 + 1; // 0xcc070
										v16 = v68;
										v54 = (int32_t *)v52;
										if (*v54 <= v68) {
											// break -> 0xcc080
											break;
										}
										v29 = v53;
										v26 = v68;
										v30 = v52;
										v25 = v67;
										// continue -> 0xcbfd0
									}
									// 0xcc080
									if (v53 != 0) {
										int32_t v69 = g32;
										v15 = v69;
										g34 = 0;
										v16 = 0;
										if (*v54 <= 0) {
											// break -> 0xcc088
											break;
										}
										v24 = v69;
										v28 = v52;
										// continue -> 0xcbfd0
										continue;
									}
								}
								// 0xcc088
								// branch -> 0xcc088
								// 0xcc088
								*(int32_t *)g35 = 0;
								g10 = v1;
								return g34;
							}
						}
						// 0xcbf70
						v17 = g32;
						g29 = v17;
						g30 = 0;
						v22 = g36;
						v31 = *(int32_t *)v22;
						v27 = v22;
						v23 = v17;
						if (v31 > 0) {
							v18 = v17;
							while (true) {
								// 0xcbf7c
								if (*(int32_t *)(v18 + 16) == 0) {
									goto lab_0xcbf88_4;
								}
								v21 = v22;
								v20 = 0;
								v19 = v18;
								goto lab_0xcbfa4_4;
							}
						}
						// 0xcbfb8
						v14 = 52 * v31 + v23;
						v15 = v23;
						g34 = 0;
						v16 = 0;
						if (*(int32_t *)v27 > 0) {
							v24 = v23;
							v28 = v27;
							while (true) {
								// 0xcbfd0
								v29 = 0;
								v26 = 0;
								v30 = v28;
								v25 = v24;
								// branch -> 0xcbfd0
								goto lab_0xcbfd0_4;
							}
						}
						// 0xcc088
						// branch -> 0xcc088
						// 0xcc088
						*(int32_t *)g35 = 0;
						g10 = v1;
						return g34;
					}
					// 0xcbf20
					v40 += 8;
					v41 = 0;
					// branch -> 0xcbf20
				}
			} else {
				v32 = 0;
			}
		}
		// 0xcc094
		v37 = g30 + v32;
		v38 = (int32_t) * (char *)v4;
		if (v38 > v32) {
			// 0xcbf64
			*(char *)v37 = 0;
			v34 = v37 + 1;
			v36 = v38 - v32 - 1;
			if (v36 == 0) {
				// 0xcbf70
				v17 = g32;
				g29 = v17;
				g30 = 0;
				v22 = g36;
				v31 = *(int32_t *)v22;
				v27 = v22;
				v23 = v17;
				if (v31 > 0) {
					v18 = v17;
					while (true) {
						// 0xcbf7c
						if (*(int32_t *)(v18 + 16) == 0) {
							goto lab_0xcbf88_4;
						}
						v21 = v22;
						v20 = 0;
						v19 = v18;
						goto lab_0xcbfa4_4;
					}
				}
				// 0xcbfb8
				v14 = 52 * v31 + v23;
				v15 = v23;
				g34 = 0;
				v16 = 0;
				if (*(int32_t *)v27 > 0) {
					v24 = v23;
					v28 = v27;
					while (true) {
						// 0xcbfd0
						v29 = 0;
						v26 = 0;
						v30 = v28;
						v25 = v24;
						// branch -> 0xcbfd0
						goto lab_0xcbfd0_4;
					}
				}
				// 0xcc088
				// branch -> 0xcc088
				// 0xcc088
				*(int32_t *)g35 = 0;
				g10 = v1;
				return g34;
			}
			*(char *)v34 = (char)0;
			v33 = v34 + 1;
			v35 = v36 - 1;
			while (v35 != 0) {
				// 0xcbf64
				*(char *)v33 = (char)0;
				v33++;
				v35--;
				// continue -> 0xcbf64
			}
			// 0xcbf70
			v17 = g32;
			g29 = v17;
			g30 = 0;
			v22 = g36;
			v31 = *(int32_t *)v22;
			v27 = v22;
			v23 = v17;
			if (v31 > 0) {
				v18 = v17;
				while (true) {
					// 0xcbf7c
					if (*(int32_t *)(v18 + 16) == 0) {
						goto lab_0xcbf88_4;
					}
					v21 = v22;
					v20 = 0;
					v19 = v18;
					goto lab_0xcbfa4_4;
				}
			}
			// 0xcbfb8
			v14 = 52 * v31 + v23;
			v15 = v23;
			g34 = 0;
			v16 = 0;
			if (*(int32_t *)v27 > 0) {
				v24 = v23;
				v28 = v27;
				while (true) {
					// 0xcbfd0
					v29 = 0;
					v26 = 0;
					v30 = v28;
					v25 = v24;
					// branch -> 0xcbfd0
					goto lab_0xcbfd0_4;
				}
			}
			// 0xcc088
			// branch -> 0xcc088
			// 0xcc088
			*(int32_t *)g35 = 0;
			g10 = v1;
			return g34;
		}
	}
	// 0xcbf70
	v17 = g32;
	g29 = v17;
	g30 = 0;
	v22 = g36;
	v31 = *(int32_t *)v22;
	v27 = v22;
	v23 = v17;
	if (v31 > 0) {
		v18 = v17;
		while (true) {
			// 0xcbf7c
			if (*(int32_t *)(v18 + 16) == 0) {
				goto lab_0xcbf88_4;
			}
			v21 = v22;
			v20 = 0;
			v19 = v18;
			goto lab_0xcbfa4_4;
		}
	}
	// 0xcbfb8
	v14 = 52 * v31 + v23;
	v15 = v23;
	g34 = 0;
	v16 = 0;
	if (*(int32_t *)v27 > 0) {
		v24 = v23;
		v28 = v27;
		while (true) {
			// 0xcbfd0
			v29 = 0;
			v26 = 0;
			v30 = v28;
			v25 = v24;
			// branch -> 0xcbfd0
			goto lab_0xcbfd0_4;
		}
	}
	// 0xcc088
	// branch -> 0xcc088
	// 0xcc088
	*(int32_t *)g35 = 0;
	g10 = v1;
	return g34;
}

// Address range: 0xcc0b8 - 0xcc208
int32_t lighting_color_cycling(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x776c) == 0 ? 16 : 4;
	int32_t result = *(int32_t *)(g23 - 0x7794); // 0xcc0d4
	if (*(char *)result != 4) {
		// bb
		return result;
	}
	int32_t v2 = 0;                                      // r5
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7770); // 0xcc0fc
	// branch -> 0xcc0f8
	while (true) {
		int32_t v4 = v3 + 1;       // 0xcc0fc
		char *v5 = (char *)v4;     // 0xcc0fc
		int32_t v6 = (int32_t)*v5; // r7
		int32_t result2 = 0;       // r3
		int32_t v7 = 0;            // 0xcc1d0
		// 0xcc108
		result2 = 24;
		*v5 = *(char *)(v3 + 2);
		int32_t v8 = v4; // 0xcc114
		*(char *)(v8 + 1) = *(char *)(v8 + 2);
		int32_t v9 = v4; // 0xcc11c
		*(char *)(v9 + 2) = *(char *)(v9 + 3);
		int32_t v10 = v4; // 0xcc124
		*(char *)(v10 + 3) = *(char *)(v10 + 4);
		int32_t v11 = v4; // 0xcc12c
		*(char *)(v11 + 4) = *(char *)(v11 + 5);
		int32_t v12 = v4; // 0xcc134
		*(char *)(v12 + 5) = *(char *)(v12 + 6);
		int32_t v13 = v4; // 0xcc13c
		*(char *)(v13 + 6) = *(char *)(v13 + 7);
		int32_t v14 = v4; // 0xcc144
		*(char *)(v14 + 7) = *(char *)(v14 + 8);
		int32_t v15 = v4; // 0xcc14c
		*(char *)(v15 + 8) = *(char *)(v15 + 9);
		int32_t v16 = v4; // 0xcc154
		*(char *)(v16 + 9) = *(char *)(v16 + 10);
		int32_t v17 = v4; // 0xcc15c
		*(char *)(v17 + 10) = *(char *)(v17 + 11);
		int32_t v18 = v4; // 0xcc164
		*(char *)(v18 + 11) = *(char *)(v18 + 12);
		int32_t v19 = v4; // 0xcc16c
		*(char *)(v19 + 12) = *(char *)(v19 + 13);
		int32_t v20 = v4; // 0xcc174
		*(char *)(v20 + 13) = *(char *)(v20 + 14);
		int32_t v21 = v4; // 0xcc17c
		*(char *)(v21 + 14) = *(char *)(v21 + 15);
		int32_t v22 = v4; // 0xcc184
		*(char *)(v22 + 15) = *(char *)(v22 + 16);
		int32_t v23 = v4; // 0xcc18c
		*(char *)(v23 + 16) = *(char *)(v23 + 17);
		int32_t v24 = v4; // 0xcc194
		*(char *)(v24 + 17) = *(char *)(v24 + 18);
		int32_t v25 = v4; // 0xcc19c
		*(char *)(v25 + 18) = *(char *)(v25 + 19);
		int32_t v26 = v4; // 0xcc1a4
		*(char *)(v26 + 19) = *(char *)(v26 + 20);
		int32_t v27 = v4; // 0xcc1ac
		*(char *)(v27 + 20) = *(char *)(v27 + 21);
		int32_t v28 = v4; // 0xcc1b4
		*(char *)(v28 + 21) = *(char *)(v28 + 22);
		int32_t v29 = v4; // 0xcc1bc
		*(char *)(v29 + 22) = *(char *)(v29 + 23);
		int32_t v30 = v4; // 0xcc1c4
		*(char *)(v30 + 23) = *(char *)(v30 + 24);
		v4 += 24;
		v7 = result2;
		// branch -> 0xcc1d0
		int32_t v31 = 30 - v7; // ctr
		int32_t v32;           // 0xcc1f8
		if (v7 <= 29) {
			*(char *)v4 = *(char *)(v4 + 1);
			int32_t v33 = v4 + 1; // 0xcc1e8
			v4 = v33;
			int32_t v34 = v31 - 1; // 0xcc1ec
			while (v34 != 0) {
				// 0xcc1e0
				v4 = v33;
				*(char *)v4 = *(char *)(v4 + 1);
				v33 = v4 + 1;
				v4 = v33;
				v34--;
				// continue -> 0xcc1e0
			}
			// 0xcc1f0
			*(char *)v33 = (char)v6;
			v32 = v2 + 1;
			v2 = v32;
			if (v32 >= v1) {
				// 0xcc204
				return result2;
			}
		lab_0xcc1f0:
			// 0xcc1f0
			v3 = v4 + 225;
			// branch -> 0xcc0f8
			continue;
		}
		// 0xcc1f0
		*(char *)v4 = (char)v6;
		v32 = v2 + 1;
		v2 = v32;
		if (v32 < v1) {
			goto lab_0xcc1f0;
		}
		// 0xcc204
		return result2;
	}
}
