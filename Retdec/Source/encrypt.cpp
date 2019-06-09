
// Address range: 0x4ccac - 0x4cfa8
int32_t Decrypt(int32_t *a1, int32_t a2, int32_t a3)
{
	int32_t result = (int32_t)a1;              // r3
	int32_t v1 = __asm_rlwinm_(a2, 30, 2, 31); // 0x4ccac
	int32_t v2 = *(int32_t *)(g23 - 0x6294);   // 0x4ccb8
	int32_t v3 = -0x11111112;                  // r31
	int32_t v4 = result;                       // 0x4ccc8
	int32_t v5 = v1;                           // r7
	int32_t v6;                                // ctr
	int32_t v7;                                // r5
	int32_t v8;                                // 0x4cd64
	uint32_t v9;                               // 0x4cd88
	int32_t v10;                               // 0x4cdcc
	int32_t v11;                               // 0x4ce14
	int32_t v12;                               // 0x4ce54
	int32_t v13;                               // 0x4ce84
	int32_t v14;                               // 0x4cec0
	int32_t v15;                               // 0x4cf24
	int32_t v16;                               // 0x4cd70
	int32_t v17;                               // 0x4cd7c
	int32_t *v18;                              // 0x4cd80
	int32_t v19;                               // 0x4cdb8
	int32_t v20;                               // 0x4cdbc
	int32_t v21;                               // 0x4ce00
	int32_t v22;                               // 0x4ce04
	int32_t v23;                               // 0x4ce48
	int32_t v24;                               // 0x4ce4c
	int32_t v25;                               // 0x4cea0
	int32_t v26;                               // 0x4cea4
	int32_t v27;                               // 0x4ceb0
	int32_t *v28;                              // 0x4ceb4
	int32_t v29;                               // 0x4cefc
	int32_t v30;                               // 0x4cf10
	int32_t v31;                               // 0x4cf24
	int32_t v32;                               // 0x4cf30
	int32_t v33;                               // 0x4cf3c
	int32_t v34;                               // 0x4cf48
	int32_t v35;                               // 0x4cf54
	int32_t v36;                               // 0x4cf60
	int32_t v37;                               // 0x4cf6c
	int32_t v38;                               // 0x4cf78
	int32_t v39;                               // 0x4cf7c
	int32_t v40;                               // 0x4cf80
	int32_t v41;                               // 0x4cf94
	int32_t v42;                               // 0x4cf98
	int32_t v43;                               // 0x4cd94
	int32_t v44;                               // 0x4cda4
	int32_t v45;                               // 0x4cdb0
	int32_t *v46;                              // 0x4cdbc
	int32_t v47;                               // 0x4cddc
	int32_t v48;                               // 0x4cdec
	int32_t v49;                               // 0x4cdf8
	int32_t *v50;                              // 0x4ce04
	int32_t v51;                               // 0x4ce24
	int32_t v52;                               // 0x4ce34
	int32_t v53;                               // 0x4ce40
	int32_t *v54;                              // 0x4ce4c
	int32_t v55;                               // 0x4ce68
	int32_t v56;                               // 0x4ce70
	int32_t v57;                               // 0x4ce9c
	int32_t v58;                               // 0x4cec8
	int32_t v59;                               // 0x4ced8
	int32_t v60;                               // 0x4cef4
	if (v1 >= 1) {
		int32_t v61 = __asm_rlwinm_(v1, 29, 3, 31); // 0x4ccd8
		int32_t v62;                                // 0x4cd5c
		int32_t v63;                                // 0x4cd60
		int32_t result3;                            // 0x4cf70
		int32_t result2;                            // 0x4cf8c
		if (v61 == 0) {
			// 0x4ccd8
			// branch -> 0x4cd50
			// 0x4cd50
			*(int32_t *)v4 = __asm_lwbrx(v1, v4);
			v62 = v4 + 4;
			v4 = v62;
			v63 = v5 - 1;
			// branch -> 0x4cd54
			while (v63 != 0) {
				// 0x4cd54
				*(int32_t *)v4 = __asm_lwbrx(v1, v62);
				v62 = v4 + 4;
				v4 = v62;
				v63--;
				// continue -> 0x4cd54
			}
			// 0x4cd64
			v8 = v1;
			v5 = v8;
			if (v8 == 0) {
				// 0x4cf00
				v7 = v4;
				g37 = v1;
				if (v1 < 1) {
					// 0x4cf9c
					return result;
				}
				// 0x4cf10
				v30 = __asm_rlwinm_(v1, 29, 3, 31);
				if (v30 == 0) {
					// 0x4cf10
					// branch -> 0x4cf88
					// 0x4cf88
					result2 = __asm_lwbrx(v1, v7);
					*(int32_t *)v7 = result2;
					v41 = v7 + 4;
					v7 = v41;
					v42 = g37 - 1;
					// branch -> 0x4cf8c
					while (v42 != 0) {
						// 0x4cf8c
						result2 = __asm_lwbrx(v1, v41);
						*(int32_t *)v7 = result2;
						v41 = v7 + 4;
						v7 = v41;
						v42--;
						// continue -> 0x4cf8c
					}
					// 0x4cf9c
					return result2;
				}
				// 0x4cf1c
				*(int32_t *)v7 = __asm_lwbrx(v1, v7);
				v15 = v7;
				v31 = v15 + 4;
				*(int32_t *)v31 = __asm_lwbrx(v1, v31);
				v32 = v15 + 8;
				*(int32_t *)v32 = __asm_lwbrx(v1, v32);
				v33 = v15 + 12;
				*(int32_t *)v33 = __asm_lwbrx(v1, v33);
				v34 = v15 + 16;
				*(int32_t *)v34 = __asm_lwbrx(v1, v34);
				v35 = v15 + 20;
				*(int32_t *)v35 = __asm_lwbrx(v1, v35);
				v36 = v15 + 24;
				*(int32_t *)v36 = __asm_lwbrx(v1, v36);
				v37 = v15 + 28;
				result3 = __asm_lwbrx(v1, v37);
				*(int32_t *)v37 = result3;
				v38 = v15 + 32;
				v7 = v38;
				v39 = v30 - 1;
				// branch -> 0x4cf1c
				while (v39 != 0) {
					// 0x4cf1c
					*(int32_t *)v7 = __asm_lwbrx(v1, v38);
					v15 = v7;
					v31 = v15 + 4;
					*(int32_t *)v31 = __asm_lwbrx(v1, v31);
					v32 = v15 + 8;
					*(int32_t *)v32 = __asm_lwbrx(v1, v32);
					v33 = v15 + 12;
					*(int32_t *)v33 = __asm_lwbrx(v1, v33);
					v34 = v15 + 16;
					*(int32_t *)v34 = __asm_lwbrx(v1, v34);
					v35 = v15 + 20;
					*(int32_t *)v35 = __asm_lwbrx(v1, v35);
					v36 = v15 + 24;
					*(int32_t *)v36 = __asm_lwbrx(v1, v36);
					v37 = v15 + 28;
					result3 = __asm_lwbrx(v1, v37);
					*(int32_t *)v37 = result3;
					v38 = v15 + 32;
					v7 = v38;
					v39--;
					// continue -> 0x4cf1c
				}
				// 0x4cf80
				v40 = g37 % 8;
				g37 = v40;
				if (v40 != 0) {
					// 0x4cf88
					result2 = __asm_lwbrx(v1, v38);
					*(int32_t *)v7 = result2;
					v41 = v7 + 4;
					v7 = v41;
					v42 = v40 - 1;
					// branch -> 0x4cf8c
					while (v42 != 0) {
						// 0x4cf8c
						result2 = __asm_lwbrx(v1, v41);
						*(int32_t *)v7 = result2;
						v41 = v7 + 4;
						v7 = v41;
						v42--;
						// continue -> 0x4cf8c
					}
					// 0x4cf9c
					return result2;
				}
				// 0x4cf9c
				return result3;
			}
			// 0x4cd70
			v16 = __asm_rlwinm_(v8, 30, 2, 31);
			if (v16 == 0) {
				// 0x4cd70
				// branch -> 0x4ceac
				// 0x4ceac
				v27 = __asm_rlwinm(g38, 2, 22, 29);
				v28 = (int32_t *)result;
				v14 = g38;
				v58 = v3 + *(int32_t *)(v2 + v27 + 0x1000);
				v59 = v58 + v14 ^ *v28;
				*v28 = v59;
				v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
				g38 = v60;
				result += 4;
				v29 = v5 - 1;
				// branch -> 0x4ceb0
				while (v29 != 0) {
					// 0x4ceb0
					v27 = __asm_rlwinm(v60, 2, 22, 29);
					v28 = (int32_t *)result;
					v14 = g38;
					v58 = 33 * v58 + v59 + 3 + *(int32_t *)(v2 + v27 + 0x1000);
					v59 = v58 + v14 ^ *v28;
					*v28 = v59;
					v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
					g38 = v60;
					result += 4;
					v29--;
					// continue -> 0x4ceb0
				}
				// 0x4cf00
				v7 = v4;
				g37 = v1;
				if (v1 < 1) {
					// 0x4cf9c
					return result;
				}
				// 0x4cf10
				v30 = __asm_rlwinm_(v1, 29, 3, 31);
				if (v30 == 0) {
					// 0x4cf10
					// branch -> 0x4cf88
					// 0x4cf88
					result2 = __asm_lwbrx(v1, v7);
					*(int32_t *)v7 = result2;
					v41 = v7 + 4;
					v7 = v41;
					v42 = g37 - 1;
					// branch -> 0x4cf8c
					while (v42 != 0) {
						// 0x4cf8c
						result2 = __asm_lwbrx(v1, v41);
						*(int32_t *)v7 = result2;
						v41 = v7 + 4;
						v7 = v41;
						v42--;
						// continue -> 0x4cf8c
					}
					// 0x4cf9c
					return result2;
				}
				// 0x4cf1c
				*(int32_t *)v7 = __asm_lwbrx(v1, v7);
				v15 = v7;
				v31 = v15 + 4;
				*(int32_t *)v31 = __asm_lwbrx(v1, v31);
				v32 = v15 + 8;
				*(int32_t *)v32 = __asm_lwbrx(v1, v32);
				v33 = v15 + 12;
				*(int32_t *)v33 = __asm_lwbrx(v1, v33);
				v34 = v15 + 16;
				*(int32_t *)v34 = __asm_lwbrx(v1, v34);
				v35 = v15 + 20;
				*(int32_t *)v35 = __asm_lwbrx(v1, v35);
				v36 = v15 + 24;
				*(int32_t *)v36 = __asm_lwbrx(v1, v36);
				v37 = v15 + 28;
				result3 = __asm_lwbrx(v1, v37);
				*(int32_t *)v37 = result3;
				v38 = v15 + 32;
				v7 = v38;
				v39 = v30 - 1;
				// branch -> 0x4cf1c
				while (v39 != 0) {
					// 0x4cf1c
					*(int32_t *)v7 = __asm_lwbrx(v1, v38);
					v15 = v7;
					v31 = v15 + 4;
					*(int32_t *)v31 = __asm_lwbrx(v1, v31);
					v32 = v15 + 8;
					*(int32_t *)v32 = __asm_lwbrx(v1, v32);
					v33 = v15 + 12;
					*(int32_t *)v33 = __asm_lwbrx(v1, v33);
					v34 = v15 + 16;
					*(int32_t *)v34 = __asm_lwbrx(v1, v34);
					v35 = v15 + 20;
					*(int32_t *)v35 = __asm_lwbrx(v1, v35);
					v36 = v15 + 24;
					*(int32_t *)v36 = __asm_lwbrx(v1, v36);
					v37 = v15 + 28;
					result3 = __asm_lwbrx(v1, v37);
					*(int32_t *)v37 = result3;
					v38 = v15 + 32;
					v7 = v38;
					v39--;
					// continue -> 0x4cf1c
				}
				// 0x4cf80
				v40 = g37 % 8;
				g37 = v40;
				if (v40 != 0) {
					// 0x4cf88
					result2 = __asm_lwbrx(v1, v38);
					*(int32_t *)v7 = result2;
					v41 = v7 + 4;
					v7 = v41;
					v42 = v40 - 1;
					// branch -> 0x4cf8c
					while (v42 != 0) {
						// 0x4cf8c
						result2 = __asm_lwbrx(v1, v41);
						*(int32_t *)v7 = result2;
						v41 = v7 + 4;
						v7 = v41;
						v42--;
						// continue -> 0x4cf8c
					}
					// 0x4cf9c
					return result2;
				}
				// 0x4cf9c
				return result3;
			}
			// 0x4cd7c
			v17 = __asm_rlwinm(g38, 2, 22, 29);
			v18 = (int32_t *)result;
			v9 = g38;
			v43 = v3 + *(int32_t *)(v2 + v17 + 0x1000);
			v44 = v43 + v9 ^ *v18;
			*v18 = v44;
			v45 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
			v19 = __asm_rlwinm(v45, 2, 22, 29);
			v20 = result + 4;
			v46 = (int32_t *)v20;
			v10 = v43;
			v47 = v10 + *(int32_t *)(v2 + v19 + 0x1000) + 32 * v10 + v44 + 3;
			v48 = v47 + v45 ^ *v46;
			*v46 = v48;
			v49 = (0x200000 * v45 ^ -0x200000) + 0x11111111 | v45 / 2048;
			v21 = __asm_rlwinm(v49, 2, 22, 29);
			v22 = v20 + 4;
			v50 = (int32_t *)v22;
			v11 = v47;
			v51 = v11 + *(int32_t *)(v2 + v21 + 0x1000) + 32 * v11 + v48 + 3;
			v52 = v51 + v49 ^ *v50;
			*v50 = v52;
			v53 = (0x200000 * v49 ^ -0x200000) + 0x11111111 | v49 / 2048;
			v23 = __asm_rlwinm(v53, 2, 22, 29);
			v24 = v22 + 4;
			v54 = (int32_t *)v24;
			v12 = v51;
			v55 = v52 + 3 + v12 + 32 * v12 + *(int32_t *)(v2 + v23 + 0x1000);
			v56 = v55 + v53 ^ *v54;
			*v54 = v56;
			v13 = v55;
			v3 = v13 + v56 + 3 + 32 * v13;
			result = v24 + 4;
			v57 = (0x200000 * v53 ^ -0x200000) + 0x11111111 | v53 / 2048;
			g38 = v57;
			v25 = v16 - 1;
			// branch -> 0x4cd7c
			while (v25 != 0) {
				// 0x4cd7c
				v17 = __asm_rlwinm(v57, 2, 22, 29);
				v18 = (int32_t *)result;
				v9 = g38;
				v43 = v3 + *(int32_t *)(v2 + v17 + 0x1000);
				v44 = v43 + v9 ^ *v18;
				*v18 = v44;
				v45 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
				v19 = __asm_rlwinm(v45, 2, 22, 29);
				v20 = result + 4;
				v46 = (int32_t *)v20;
				v10 = v43;
				v47 = v10 + *(int32_t *)(v2 + v19 + 0x1000) + 32 * v10 + v44 + 3;
				v48 = v47 + v45 ^ *v46;
				*v46 = v48;
				v49 = (0x200000 * v45 ^ -0x200000) + 0x11111111 | v45 / 2048;
				v21 = __asm_rlwinm(v49, 2, 22, 29);
				v22 = v20 + 4;
				v50 = (int32_t *)v22;
				v11 = v47;
				v51 = v11 + *(int32_t *)(v2 + v21 + 0x1000) + 32 * v11 + v48 + 3;
				v52 = v51 + v49 ^ *v50;
				*v50 = v52;
				v53 = (0x200000 * v49 ^ -0x200000) + 0x11111111 | v49 / 2048;
				v23 = __asm_rlwinm(v53, 2, 22, 29);
				v24 = v22 + 4;
				v54 = (int32_t *)v24;
				v12 = v51;
				v55 = v52 + 3 + v12 + 32 * v12 + *(int32_t *)(v2 + v23 + 0x1000);
				v56 = v55 + v53 ^ *v54;
				*v54 = v56;
				v13 = v55;
				v3 = v13 + v56 + 3 + 32 * v13;
				result = v24 + 4;
				v57 = (0x200000 * v53 ^ -0x200000) + 0x11111111 | v53 / 2048;
				g38 = v57;
				v25--;
				// continue -> 0x4cd7c
			}
			// 0x4cea4
			v26 = v5 % 4;
			if (v26 != 0) {
				// 0x4ceac
				v27 = __asm_rlwinm(v57, 2, 22, 29);
				v28 = (int32_t *)result;
				v14 = g38;
				v58 = v3 + *(int32_t *)(v2 + v27 + 0x1000);
				v59 = v58 + v14 ^ *v28;
				*v28 = v59;
				v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
				g38 = v60;
				result += 4;
				v29 = v26 - 1;
				// branch -> 0x4ceb0
				while (v29 != 0) {
					// 0x4ceb0
					v27 = __asm_rlwinm(v60, 2, 22, 29);
					v28 = (int32_t *)result;
					v14 = g38;
					v58 = 33 * v58 + v59 + 3 + *(int32_t *)(v2 + v27 + 0x1000);
					v59 = v58 + v14 ^ *v28;
					*v28 = v59;
					v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
					g38 = v60;
					result += 4;
					v29--;
					// continue -> 0x4ceb0
				}
				// 0x4cf00
				v7 = v4;
				g37 = v1;
				if (v1 < 1) {
					// 0x4cf9c
					return result;
				}
				// 0x4cf10
				v30 = __asm_rlwinm_(v1, 29, 3, 31);
				if (v30 == 0) {
					// 0x4cf10
					// branch -> 0x4cf88
					// 0x4cf88
					result2 = __asm_lwbrx(v1, v7);
					*(int32_t *)v7 = result2;
					v41 = v7 + 4;
					v7 = v41;
					v42 = g37 - 1;
					// branch -> 0x4cf8c
					while (v42 != 0) {
						// 0x4cf8c
						result2 = __asm_lwbrx(v1, v41);
						*(int32_t *)v7 = result2;
						v41 = v7 + 4;
						v7 = v41;
						v42--;
						// continue -> 0x4cf8c
					}
					// 0x4cf9c
					return result2;
				}
				// 0x4cf1c
				*(int32_t *)v7 = __asm_lwbrx(v1, v7);
				v15 = v7;
				v31 = v15 + 4;
				*(int32_t *)v31 = __asm_lwbrx(v1, v31);
				v32 = v15 + 8;
				*(int32_t *)v32 = __asm_lwbrx(v1, v32);
				v33 = v15 + 12;
				*(int32_t *)v33 = __asm_lwbrx(v1, v33);
				v34 = v15 + 16;
				*(int32_t *)v34 = __asm_lwbrx(v1, v34);
				v35 = v15 + 20;
				*(int32_t *)v35 = __asm_lwbrx(v1, v35);
				v36 = v15 + 24;
				*(int32_t *)v36 = __asm_lwbrx(v1, v36);
				v37 = v15 + 28;
				result3 = __asm_lwbrx(v1, v37);
				*(int32_t *)v37 = result3;
				v38 = v15 + 32;
				v7 = v38;
				v39 = v30 - 1;
				// branch -> 0x4cf1c
				while (v39 != 0) {
					// 0x4cf1c
					*(int32_t *)v7 = __asm_lwbrx(v1, v38);
					v15 = v7;
					v31 = v15 + 4;
					*(int32_t *)v31 = __asm_lwbrx(v1, v31);
					v32 = v15 + 8;
					*(int32_t *)v32 = __asm_lwbrx(v1, v32);
					v33 = v15 + 12;
					*(int32_t *)v33 = __asm_lwbrx(v1, v33);
					v34 = v15 + 16;
					*(int32_t *)v34 = __asm_lwbrx(v1, v34);
					v35 = v15 + 20;
					*(int32_t *)v35 = __asm_lwbrx(v1, v35);
					v36 = v15 + 24;
					*(int32_t *)v36 = __asm_lwbrx(v1, v36);
					v37 = v15 + 28;
					result3 = __asm_lwbrx(v1, v37);
					*(int32_t *)v37 = result3;
					v38 = v15 + 32;
					v7 = v38;
					v39--;
					// continue -> 0x4cf1c
				}
				// 0x4cf80
				v40 = g37 % 8;
				g37 = v40;
				if (v40 != 0) {
					// 0x4cf88
					result2 = __asm_lwbrx(v1, v38);
					*(int32_t *)v7 = result2;
					v41 = v7 + 4;
					v7 = v41;
					v42 = v40 - 1;
					// branch -> 0x4cf8c
					while (v42 != 0) {
						// 0x4cf8c
						result2 = __asm_lwbrx(v1, v41);
						*(int32_t *)v7 = result2;
						v41 = v7 + 4;
						v7 = v41;
						v42--;
						// continue -> 0x4cf8c
					}
					// 0x4cf9c
					return result2;
				}
				// 0x4cf9c
				return result3;
			}
			// 0x4cf00
			v7 = v4;
			g37 = v1;
			if (v1 < 1) {
				// 0x4cf9c
				return result;
			}
			// 0x4cf10
			v30 = __asm_rlwinm_(v1, 29, 3, 31);
			if (v30 == 0) {
				// 0x4cf10
				// branch -> 0x4cf88
				// 0x4cf88
				result2 = __asm_lwbrx(v1, v7);
				*(int32_t *)v7 = result2;
				v41 = v7 + 4;
				v7 = v41;
				v42 = g37 - 1;
				// branch -> 0x4cf8c
				while (v42 != 0) {
					// 0x4cf8c
					result2 = __asm_lwbrx(v1, v41);
					*(int32_t *)v7 = result2;
					v41 = v7 + 4;
					v7 = v41;
					v42--;
					// continue -> 0x4cf8c
				}
				// 0x4cf9c
				return result2;
			}
			// 0x4cf1c
			*(int32_t *)v7 = __asm_lwbrx(v1, v7);
			v15 = v7;
			v31 = v15 + 4;
			*(int32_t *)v31 = __asm_lwbrx(v1, v31);
			v32 = v15 + 8;
			*(int32_t *)v32 = __asm_lwbrx(v1, v32);
			v33 = v15 + 12;
			*(int32_t *)v33 = __asm_lwbrx(v1, v33);
			v34 = v15 + 16;
			*(int32_t *)v34 = __asm_lwbrx(v1, v34);
			v35 = v15 + 20;
			*(int32_t *)v35 = __asm_lwbrx(v1, v35);
			v36 = v15 + 24;
			*(int32_t *)v36 = __asm_lwbrx(v1, v36);
			v37 = v15 + 28;
			result3 = __asm_lwbrx(v1, v37);
			*(int32_t *)v37 = result3;
			v38 = v15 + 32;
			v7 = v38;
			v39 = v30 - 1;
			// branch -> 0x4cf1c
			while (v39 != 0) {
				// 0x4cf1c
				*(int32_t *)v7 = __asm_lwbrx(v1, v38);
				v15 = v7;
				v31 = v15 + 4;
				*(int32_t *)v31 = __asm_lwbrx(v1, v31);
				v32 = v15 + 8;
				*(int32_t *)v32 = __asm_lwbrx(v1, v32);
				v33 = v15 + 12;
				*(int32_t *)v33 = __asm_lwbrx(v1, v33);
				v34 = v15 + 16;
				*(int32_t *)v34 = __asm_lwbrx(v1, v34);
				v35 = v15 + 20;
				*(int32_t *)v35 = __asm_lwbrx(v1, v35);
				v36 = v15 + 24;
				*(int32_t *)v36 = __asm_lwbrx(v1, v36);
				v37 = v15 + 28;
				result3 = __asm_lwbrx(v1, v37);
				*(int32_t *)v37 = result3;
				v38 = v15 + 32;
				v7 = v38;
				v39--;
				// continue -> 0x4cf1c
			}
			// 0x4cf80
			v40 = g37 % 8;
			g37 = v40;
			if (v40 != 0) {
				// 0x4cf88
				result2 = __asm_lwbrx(v1, v38);
				*(int32_t *)v7 = result2;
				v41 = v7 + 4;
				v7 = v41;
				v42 = v40 - 1;
				// branch -> 0x4cf8c
				while (v42 != 0) {
					// 0x4cf8c
					result2 = __asm_lwbrx(v1, v41);
					*(int32_t *)v7 = result2;
					v41 = v7 + 4;
					v7 = v41;
					v42--;
					// continue -> 0x4cf8c
				}
				// 0x4cf9c
				return result2;
			}
			// 0x4cf9c
			return result3;
		}
		// 0x4cce4
		*(int32_t *)v4 = __asm_lwbrx(v1, v4);
		int32_t v64 = v4;      // 0x4ccec
		int32_t v65 = v64 + 4; // 0x4ccec
		*(int32_t *)v65 = __asm_lwbrx(v1, v65);
		int32_t v66 = v64 + 8; // 0x4ccf8
		*(int32_t *)v66 = __asm_lwbrx(v1, v66);
		int32_t v67 = v64 + 12; // 0x4cd04
		*(int32_t *)v67 = __asm_lwbrx(v1, v67);
		int32_t v68 = v64 + 16; // 0x4cd10
		*(int32_t *)v68 = __asm_lwbrx(v1, v68);
		int32_t v69 = v64 + 20; // 0x4cd1c
		*(int32_t *)v69 = __asm_lwbrx(v1, v69);
		int32_t v70 = v64 + 24; // 0x4cd28
		*(int32_t *)v70 = __asm_lwbrx(v1, v70);
		int32_t v71 = v64 + 28; // 0x4cd34
		*(int32_t *)v71 = __asm_lwbrx(v1, v71);
		int32_t v72 = v64 + 32; // 0x4cd40
		v4 = v72;
		int32_t v73 = v61 - 1; // 0x4cd44
		// branch -> 0x4cce4
		while (v73 != 0) {
			// 0x4cce4
			*(int32_t *)v4 = __asm_lwbrx(v1, v72);
			v64 = v4;
			v65 = v64 + 4;
			*(int32_t *)v65 = __asm_lwbrx(v1, v65);
			v66 = v64 + 8;
			*(int32_t *)v66 = __asm_lwbrx(v1, v66);
			v67 = v64 + 12;
			*(int32_t *)v67 = __asm_lwbrx(v1, v67);
			v68 = v64 + 16;
			*(int32_t *)v68 = __asm_lwbrx(v1, v68);
			v69 = v64 + 20;
			*(int32_t *)v69 = __asm_lwbrx(v1, v69);
			v70 = v64 + 24;
			*(int32_t *)v70 = __asm_lwbrx(v1, v70);
			v71 = v64 + 28;
			*(int32_t *)v71 = __asm_lwbrx(v1, v71);
			v72 = v64 + 32;
			v4 = v72;
			v73--;
			// continue -> 0x4cce4
		}
		int32_t v74 = v5 % 8; // 0x4cd48
		if (v74 != 0) {
			// 0x4cd50
			*(int32_t *)v4 = __asm_lwbrx(v1, v72);
			v62 = v4 + 4;
			v4 = v62;
			v63 = v74 - 1;
			// branch -> 0x4cd54
			while (v63 != 0) {
				// 0x4cd54
				*(int32_t *)v4 = __asm_lwbrx(v1, v62);
				v62 = v4 + 4;
				v4 = v62;
				v63--;
				// continue -> 0x4cd54
			}
			// 0x4cd64
			v8 = v1;
			v5 = v8;
			if (v8 != 0) {
				// 0x4cd70
				v16 = __asm_rlwinm_(v8, 30, 2, 31);
				if (v16 == 0) {
					// 0x4cd70
					// branch -> 0x4ceac
					// 0x4ceac
					v27 = __asm_rlwinm(g38, 2, 22, 29);
					v28 = (int32_t *)result;
					v14 = g38;
					v58 = v3 + *(int32_t *)(v2 + v27 + 0x1000);
					v59 = v58 + v14 ^ *v28;
					*v28 = v59;
					v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
					g38 = v60;
					result += 4;
					v29 = v5 - 1;
					// branch -> 0x4ceb0
					while (v29 != 0) {
						// 0x4ceb0
						v27 = __asm_rlwinm(v60, 2, 22, 29);
						v28 = (int32_t *)result;
						v14 = g38;
						v58 = 33 * v58 + v59 + 3 + *(int32_t *)(v2 + v27 + 0x1000);
						v59 = v58 + v14 ^ *v28;
						*v28 = v59;
						v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
						g38 = v60;
						result += 4;
						v29--;
						// continue -> 0x4ceb0
					}
					// 0x4cf00
					v7 = v4;
					g37 = v1;
					if (v1 < 1) {
						// 0x4cf9c
						return result;
					}
					// 0x4cf10
					v30 = __asm_rlwinm_(v1, 29, 3, 31);
					if (v30 == 0) {
						// 0x4cf10
						// branch -> 0x4cf88
						// 0x4cf88
						result2 = __asm_lwbrx(v1, v7);
						*(int32_t *)v7 = result2;
						v41 = v7 + 4;
						v7 = v41;
						v42 = g37 - 1;
						// branch -> 0x4cf8c
						while (v42 != 0) {
							// 0x4cf8c
							result2 = __asm_lwbrx(v1, v41);
							*(int32_t *)v7 = result2;
							v41 = v7 + 4;
							v7 = v41;
							v42--;
							// continue -> 0x4cf8c
						}
						// 0x4cf9c
						return result2;
					}
					// 0x4cf1c
					*(int32_t *)v7 = __asm_lwbrx(v1, v7);
					v15 = v7;
					v31 = v15 + 4;
					*(int32_t *)v31 = __asm_lwbrx(v1, v31);
					v32 = v15 + 8;
					*(int32_t *)v32 = __asm_lwbrx(v1, v32);
					v33 = v15 + 12;
					*(int32_t *)v33 = __asm_lwbrx(v1, v33);
					v34 = v15 + 16;
					*(int32_t *)v34 = __asm_lwbrx(v1, v34);
					v35 = v15 + 20;
					*(int32_t *)v35 = __asm_lwbrx(v1, v35);
					v36 = v15 + 24;
					*(int32_t *)v36 = __asm_lwbrx(v1, v36);
					v37 = v15 + 28;
					result3 = __asm_lwbrx(v1, v37);
					*(int32_t *)v37 = result3;
					v38 = v15 + 32;
					v7 = v38;
					v39 = v30 - 1;
					// branch -> 0x4cf1c
					while (v39 != 0) {
						// 0x4cf1c
						*(int32_t *)v7 = __asm_lwbrx(v1, v38);
						v15 = v7;
						v31 = v15 + 4;
						*(int32_t *)v31 = __asm_lwbrx(v1, v31);
						v32 = v15 + 8;
						*(int32_t *)v32 = __asm_lwbrx(v1, v32);
						v33 = v15 + 12;
						*(int32_t *)v33 = __asm_lwbrx(v1, v33);
						v34 = v15 + 16;
						*(int32_t *)v34 = __asm_lwbrx(v1, v34);
						v35 = v15 + 20;
						*(int32_t *)v35 = __asm_lwbrx(v1, v35);
						v36 = v15 + 24;
						*(int32_t *)v36 = __asm_lwbrx(v1, v36);
						v37 = v15 + 28;
						result3 = __asm_lwbrx(v1, v37);
						*(int32_t *)v37 = result3;
						v38 = v15 + 32;
						v7 = v38;
						v39--;
						// continue -> 0x4cf1c
					}
					// 0x4cf80
					v40 = g37 % 8;
					g37 = v40;
					if (v40 != 0) {
						// 0x4cf88
						result2 = __asm_lwbrx(v1, v38);
						*(int32_t *)v7 = result2;
						v41 = v7 + 4;
						v7 = v41;
						v42 = v40 - 1;
						// branch -> 0x4cf8c
						while (v42 != 0) {
							// 0x4cf8c
							result2 = __asm_lwbrx(v1, v41);
							*(int32_t *)v7 = result2;
							v41 = v7 + 4;
							v7 = v41;
							v42--;
							// continue -> 0x4cf8c
						}
						// 0x4cf9c
						return result2;
					}
					// 0x4cf9c
					return result3;
				}
				// 0x4cd7c
				v17 = __asm_rlwinm(g38, 2, 22, 29);
				v18 = (int32_t *)result;
				v9 = g38;
				v43 = v3 + *(int32_t *)(v2 + v17 + 0x1000);
				v44 = v43 + v9 ^ *v18;
				*v18 = v44;
				v45 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
				v19 = __asm_rlwinm(v45, 2, 22, 29);
				v20 = result + 4;
				v46 = (int32_t *)v20;
				v10 = v43;
				v47 = v10 + *(int32_t *)(v2 + v19 + 0x1000) + 32 * v10 + v44 + 3;
				v48 = v47 + v45 ^ *v46;
				*v46 = v48;
				v49 = (0x200000 * v45 ^ -0x200000) + 0x11111111 | v45 / 2048;
				v21 = __asm_rlwinm(v49, 2, 22, 29);
				v22 = v20 + 4;
				v50 = (int32_t *)v22;
				v11 = v47;
				v51 = v11 + *(int32_t *)(v2 + v21 + 0x1000) + 32 * v11 + v48 + 3;
				v52 = v51 + v49 ^ *v50;
				*v50 = v52;
				v53 = (0x200000 * v49 ^ -0x200000) + 0x11111111 | v49 / 2048;
				v23 = __asm_rlwinm(v53, 2, 22, 29);
				v24 = v22 + 4;
				v54 = (int32_t *)v24;
				v12 = v51;
				v55 = v52 + 3 + v12 + 32 * v12 + *(int32_t *)(v2 + v23 + 0x1000);
				v56 = v55 + v53 ^ *v54;
				*v54 = v56;
				v13 = v55;
				v3 = v13 + v56 + 3 + 32 * v13;
				result = v24 + 4;
				v57 = (0x200000 * v53 ^ -0x200000) + 0x11111111 | v53 / 2048;
				g38 = v57;
				v25 = v16 - 1;
				// branch -> 0x4cd7c
				while (v25 != 0) {
					// 0x4cd7c
					v17 = __asm_rlwinm(v57, 2, 22, 29);
					v18 = (int32_t *)result;
					v9 = g38;
					v43 = v3 + *(int32_t *)(v2 + v17 + 0x1000);
					v44 = v43 + v9 ^ *v18;
					*v18 = v44;
					v45 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
					v19 = __asm_rlwinm(v45, 2, 22, 29);
					v20 = result + 4;
					v46 = (int32_t *)v20;
					v10 = v43;
					v47 = v10 + *(int32_t *)(v2 + v19 + 0x1000) + 32 * v10 + v44 + 3;
					v48 = v47 + v45 ^ *v46;
					*v46 = v48;
					v49 = (0x200000 * v45 ^ -0x200000) + 0x11111111 | v45 / 2048;
					v21 = __asm_rlwinm(v49, 2, 22, 29);
					v22 = v20 + 4;
					v50 = (int32_t *)v22;
					v11 = v47;
					v51 = v11 + *(int32_t *)(v2 + v21 + 0x1000) + 32 * v11 + v48 + 3;
					v52 = v51 + v49 ^ *v50;
					*v50 = v52;
					v53 = (0x200000 * v49 ^ -0x200000) + 0x11111111 | v49 / 2048;
					v23 = __asm_rlwinm(v53, 2, 22, 29);
					v24 = v22 + 4;
					v54 = (int32_t *)v24;
					v12 = v51;
					v55 = v52 + 3 + v12 + 32 * v12 + *(int32_t *)(v2 + v23 + 0x1000);
					v56 = v55 + v53 ^ *v54;
					*v54 = v56;
					v13 = v55;
					v3 = v13 + v56 + 3 + 32 * v13;
					result = v24 + 4;
					v57 = (0x200000 * v53 ^ -0x200000) + 0x11111111 | v53 / 2048;
					g38 = v57;
					v25--;
					// continue -> 0x4cd7c
				}
				// 0x4cea4
				v26 = v5 % 4;
				if (v26 != 0) {
					// 0x4ceac
					v27 = __asm_rlwinm(v57, 2, 22, 29);
					v28 = (int32_t *)result;
					v14 = g38;
					v58 = v3 + *(int32_t *)(v2 + v27 + 0x1000);
					v59 = v58 + v14 ^ *v28;
					*v28 = v59;
					v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
					g38 = v60;
					result += 4;
					v29 = v26 - 1;
					// branch -> 0x4ceb0
					while (v29 != 0) {
						// 0x4ceb0
						v27 = __asm_rlwinm(v60, 2, 22, 29);
						v28 = (int32_t *)result;
						v14 = g38;
						v58 = 33 * v58 + v59 + 3 + *(int32_t *)(v2 + v27 + 0x1000);
						v59 = v58 + v14 ^ *v28;
						*v28 = v59;
						v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
						g38 = v60;
						result += 4;
						v29--;
						// continue -> 0x4ceb0
					}
					// 0x4cf00
					v7 = v4;
					g37 = v1;
					if (v1 < 1) {
						// 0x4cf9c
						return result;
					}
					// 0x4cf10
					v30 = __asm_rlwinm_(v1, 29, 3, 31);
					if (v30 == 0) {
						// 0x4cf10
						// branch -> 0x4cf88
						// 0x4cf88
						result2 = __asm_lwbrx(v1, v7);
						*(int32_t *)v7 = result2;
						v41 = v7 + 4;
						v7 = v41;
						v42 = g37 - 1;
						// branch -> 0x4cf8c
						while (v42 != 0) {
							// 0x4cf8c
							result2 = __asm_lwbrx(v1, v41);
							*(int32_t *)v7 = result2;
							v41 = v7 + 4;
							v7 = v41;
							v42--;
							// continue -> 0x4cf8c
						}
						// 0x4cf9c
						return result2;
					}
					// 0x4cf1c
					*(int32_t *)v7 = __asm_lwbrx(v1, v7);
					v15 = v7;
					v31 = v15 + 4;
					*(int32_t *)v31 = __asm_lwbrx(v1, v31);
					v32 = v15 + 8;
					*(int32_t *)v32 = __asm_lwbrx(v1, v32);
					v33 = v15 + 12;
					*(int32_t *)v33 = __asm_lwbrx(v1, v33);
					v34 = v15 + 16;
					*(int32_t *)v34 = __asm_lwbrx(v1, v34);
					v35 = v15 + 20;
					*(int32_t *)v35 = __asm_lwbrx(v1, v35);
					v36 = v15 + 24;
					*(int32_t *)v36 = __asm_lwbrx(v1, v36);
					v37 = v15 + 28;
					result3 = __asm_lwbrx(v1, v37);
					*(int32_t *)v37 = result3;
					v38 = v15 + 32;
					v7 = v38;
					v39 = v30 - 1;
					// branch -> 0x4cf1c
					while (v39 != 0) {
						// 0x4cf1c
						*(int32_t *)v7 = __asm_lwbrx(v1, v38);
						v15 = v7;
						v31 = v15 + 4;
						*(int32_t *)v31 = __asm_lwbrx(v1, v31);
						v32 = v15 + 8;
						*(int32_t *)v32 = __asm_lwbrx(v1, v32);
						v33 = v15 + 12;
						*(int32_t *)v33 = __asm_lwbrx(v1, v33);
						v34 = v15 + 16;
						*(int32_t *)v34 = __asm_lwbrx(v1, v34);
						v35 = v15 + 20;
						*(int32_t *)v35 = __asm_lwbrx(v1, v35);
						v36 = v15 + 24;
						*(int32_t *)v36 = __asm_lwbrx(v1, v36);
						v37 = v15 + 28;
						result3 = __asm_lwbrx(v1, v37);
						*(int32_t *)v37 = result3;
						v38 = v15 + 32;
						v7 = v38;
						v39--;
						// continue -> 0x4cf1c
					}
					// 0x4cf80
					v40 = g37 % 8;
					g37 = v40;
					if (v40 != 0) {
						// 0x4cf88
						result2 = __asm_lwbrx(v1, v38);
						*(int32_t *)v7 = result2;
						v41 = v7 + 4;
						v7 = v41;
						v42 = v40 - 1;
						// branch -> 0x4cf8c
						while (v42 != 0) {
							// 0x4cf8c
							result2 = __asm_lwbrx(v1, v41);
							*(int32_t *)v7 = result2;
							v41 = v7 + 4;
							v7 = v41;
							v42--;
							// continue -> 0x4cf8c
						}
						// 0x4cf9c
						return result2;
					}
					// 0x4cf9c
					return result3;
				}
				// 0x4cf00
				v7 = v4;
				g37 = v1;
				if (v1 < 1) {
					// 0x4cf9c
					return result;
				}
				// 0x4cf10
				v30 = __asm_rlwinm_(v1, 29, 3, 31);
				v6 = v30;
				if (v30 == 0) {
					// 0x4cf10
					// branch -> 0x4cf88
					// 0x4cf88
					*(int32_t *)v7 = __asm_lwbrx(v1, v7);
					v41 = v7 + 4;
					v7 = v41;
					v42 = g37 - 1;
					// branch -> 0x4cf8c
					while (v42 != 0) {
						// 0x4cf8c
						*(int32_t *)v7 = __asm_lwbrx(v1, v41);
						v41 = v7 + 4;
						v7 = v41;
						v42--;
						// continue -> 0x4cf8c
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					// 0x4cf1c
					*(int32_t *)v7 = __asm_lwbrx(v1, v7);
					v15 = v7;
					v31 = v15 + 4;
					*(int32_t *)v31 = __asm_lwbrx(v1, v31);
					v32 = v15 + 8;
					*(int32_t *)v32 = __asm_lwbrx(v1, v32);
					v33 = v15 + 12;
					*(int32_t *)v33 = __asm_lwbrx(v1, v33);
					v34 = v15 + 16;
					*(int32_t *)v34 = __asm_lwbrx(v1, v34);
					v35 = v15 + 20;
					*(int32_t *)v35 = __asm_lwbrx(v1, v35);
					v36 = v15 + 24;
					*(int32_t *)v36 = __asm_lwbrx(v1, v36);
					v37 = v15 + 28;
					*(int32_t *)v37 = __asm_lwbrx(v1, v37);
					v38 = v15 + 32;
					v7 = v38;
					v39 = v6 - 1;
					// branch -> 0x4cf1c
					while (v39 != 0) {
						// 0x4cf1c
						*(int32_t *)v7 = __asm_lwbrx(v1, v38);
						v15 = v7;
						v31 = v15 + 4;
						*(int32_t *)v31 = __asm_lwbrx(v1, v31);
						v32 = v15 + 8;
						*(int32_t *)v32 = __asm_lwbrx(v1, v32);
						v33 = v15 + 12;
						*(int32_t *)v33 = __asm_lwbrx(v1, v33);
						v34 = v15 + 16;
						*(int32_t *)v34 = __asm_lwbrx(v1, v34);
						v35 = v15 + 20;
						*(int32_t *)v35 = __asm_lwbrx(v1, v35);
						v36 = v15 + 24;
						*(int32_t *)v36 = __asm_lwbrx(v1, v36);
						v37 = v15 + 28;
						*(int32_t *)v37 = __asm_lwbrx(v1, v37);
						v38 = v15 + 32;
						v7 = v38;
						v39--;
						// continue -> 0x4cf1c
					}
					// 0x4cf80
					v40 = g37 % 8;
					g37 = v40;
					if (v40 != 0) {
						// 0x4cf88
						*(int32_t *)v7 = __asm_lwbrx(v1, v38);
						v41 = v7 + 4;
						v7 = v41;
						v42 = v40 - 1;
						// branch -> 0x4cf8c
						while (v42 != 0) {
							// 0x4cf8c
							*(int32_t *)v7 = __asm_lwbrx(v1, v41);
							v41 = v7 + 4;
							v7 = v41;
							v42--;
							// continue -> 0x4cf8c
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x4cf00
			v7 = v4;
			g37 = v1;
			if (v1 < 1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x4cf10
			v30 = __asm_rlwinm_(v1, 29, 3, 31);
			v6 = v30;
			if (v30 == 0) {
				// 0x4cf10
				// branch -> 0x4cf88
				// 0x4cf88
				result2 = __asm_lwbrx(v1, v7);
				result = result2;
				*(int32_t *)v7 = result2;
				v41 = v7 + 4;
				v7 = v41;
				v42 = g37 - 1;
				// branch -> 0x4cf8c
				while (v42 != 0) {
					// 0x4cf8c
					result2 = __asm_lwbrx(v1, v41);
					result = result2;
					*(int32_t *)v7 = result2;
					v41 = v7 + 4;
					v7 = v41;
					v42--;
					// continue -> 0x4cf8c
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x4cf1c
				*(int32_t *)v7 = __asm_lwbrx(v1, v7);
				v15 = v7;
				v31 = v15 + 4;
				*(int32_t *)v31 = __asm_lwbrx(v1, v31);
				v32 = v15 + 8;
				*(int32_t *)v32 = __asm_lwbrx(v1, v32);
				v33 = v15 + 12;
				*(int32_t *)v33 = __asm_lwbrx(v1, v33);
				v34 = v15 + 16;
				*(int32_t *)v34 = __asm_lwbrx(v1, v34);
				v35 = v15 + 20;
				*(int32_t *)v35 = __asm_lwbrx(v1, v35);
				v36 = v15 + 24;
				*(int32_t *)v36 = __asm_lwbrx(v1, v36);
				v37 = v15 + 28;
				result3 = __asm_lwbrx(v1, v37);
				result = result3;
				*(int32_t *)v37 = result3;
				v38 = v15 + 32;
				v7 = v38;
				v39 = v6 - 1;
				// branch -> 0x4cf1c
				while (v39 != 0) {
					// 0x4cf1c
					*(int32_t *)v7 = __asm_lwbrx(v1, v38);
					v15 = v7;
					v31 = v15 + 4;
					*(int32_t *)v31 = __asm_lwbrx(v1, v31);
					v32 = v15 + 8;
					*(int32_t *)v32 = __asm_lwbrx(v1, v32);
					v33 = v15 + 12;
					*(int32_t *)v33 = __asm_lwbrx(v1, v33);
					v34 = v15 + 16;
					*(int32_t *)v34 = __asm_lwbrx(v1, v34);
					v35 = v15 + 20;
					*(int32_t *)v35 = __asm_lwbrx(v1, v35);
					v36 = v15 + 24;
					*(int32_t *)v36 = __asm_lwbrx(v1, v36);
					v37 = v15 + 28;
					result3 = __asm_lwbrx(v1, v37);
					result = result3;
					*(int32_t *)v37 = result3;
					v38 = v15 + 32;
					v7 = v38;
					v39--;
					// continue -> 0x4cf1c
				}
				// 0x4cf80
				v40 = g37 % 8;
				g37 = v40;
				if (v40 != 0) {
					// 0x4cf88
					result2 = __asm_lwbrx(v1, v38);
					result = result2;
					*(int32_t *)v7 = result2;
					v41 = v7 + 4;
					v7 = v41;
					v42 = v40 - 1;
					// branch -> 0x4cf8c
					while (v42 != 0) {
						// 0x4cf8c
						result2 = __asm_lwbrx(v1, v41);
						result = result2;
						*(int32_t *)v7 = result2;
						v41 = v7 + 4;
						v7 = v41;
						v42--;
						// continue -> 0x4cf8c
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x4cd64
		v8 = v1;
		v5 = v8;
		if (v8 != 0) {
			// 0x4cd70
			v16 = __asm_rlwinm_(v8, 30, 2, 31);
			v6 = v16;
			if (v16 == 0) {
				// 0x4cd70
				// branch -> 0x4ceac
				// 0x4ceac
				v27 = __asm_rlwinm(g38, 2, 22, 29);
				v28 = (int32_t *)result;
				v14 = g38;
				v58 = v3 + *(int32_t *)(v2 + v27 + 0x1000);
				v59 = v58 + v14 ^ *v28;
				*v28 = v59;
				v3 = 33 * v58 + v59 + 3;
				v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
				g38 = v60;
				result += 4;
				v29 = v5 - 1;
				// branch -> 0x4ceb0
				while (v29 != 0) {
					// 0x4ceb0
					v27 = __asm_rlwinm(v60, 2, 22, 29);
					v28 = (int32_t *)result;
					v14 = g38;
					v58 = v3 + *(int32_t *)(v2 + v27 + 0x1000);
					v59 = v58 + v14 ^ *v28;
					*v28 = v59;
					v3 = 33 * v58 + v59 + 3;
					v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
					g38 = v60;
					result += 4;
					v29--;
					// continue -> 0x4ceb0
				}
				// 0x4cf00
				v7 = v4;
				g37 = v1;
				if (v1 < 1) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x4cf10
				v30 = __asm_rlwinm_(v1, 29, 3, 31);
				v6 = v30;
				if (v30 == 0) {
					// 0x4cf10
					// branch -> 0x4cf88
					// 0x4cf88
					*(int32_t *)v7 = __asm_lwbrx(v1, v7);
					v41 = v7 + 4;
					v7 = v41;
					v42 = g37 - 1;
					// branch -> 0x4cf8c
					while (v42 != 0) {
						// 0x4cf8c
						*(int32_t *)v7 = __asm_lwbrx(v1, v41);
						v41 = v7 + 4;
						v7 = v41;
						v42--;
						// continue -> 0x4cf8c
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					// 0x4cf1c
					*(int32_t *)v7 = __asm_lwbrx(v1, v7);
					v15 = v7;
					v31 = v15 + 4;
					*(int32_t *)v31 = __asm_lwbrx(v1, v31);
					v32 = v15 + 8;
					*(int32_t *)v32 = __asm_lwbrx(v1, v32);
					v33 = v15 + 12;
					*(int32_t *)v33 = __asm_lwbrx(v1, v33);
					v34 = v15 + 16;
					*(int32_t *)v34 = __asm_lwbrx(v1, v34);
					v35 = v15 + 20;
					*(int32_t *)v35 = __asm_lwbrx(v1, v35);
					v36 = v15 + 24;
					*(int32_t *)v36 = __asm_lwbrx(v1, v36);
					v37 = v15 + 28;
					*(int32_t *)v37 = __asm_lwbrx(v1, v37);
					v38 = v15 + 32;
					v7 = v38;
					v39 = v6 - 1;
					// branch -> 0x4cf1c
					while (v39 != 0) {
						// 0x4cf1c
						*(int32_t *)v7 = __asm_lwbrx(v1, v38);
						v15 = v7;
						v31 = v15 + 4;
						*(int32_t *)v31 = __asm_lwbrx(v1, v31);
						v32 = v15 + 8;
						*(int32_t *)v32 = __asm_lwbrx(v1, v32);
						v33 = v15 + 12;
						*(int32_t *)v33 = __asm_lwbrx(v1, v33);
						v34 = v15 + 16;
						*(int32_t *)v34 = __asm_lwbrx(v1, v34);
						v35 = v15 + 20;
						*(int32_t *)v35 = __asm_lwbrx(v1, v35);
						v36 = v15 + 24;
						*(int32_t *)v36 = __asm_lwbrx(v1, v36);
						v37 = v15 + 28;
						*(int32_t *)v37 = __asm_lwbrx(v1, v37);
						v38 = v15 + 32;
						v7 = v38;
						v39--;
						// continue -> 0x4cf1c
					}
					// 0x4cf80
					v40 = g37 % 8;
					g37 = v40;
					if (v40 != 0) {
						// 0x4cf88
						*(int32_t *)v7 = __asm_lwbrx(v1, v38);
						v41 = v7 + 4;
						v7 = v41;
						v42 = v40 - 1;
						// branch -> 0x4cf8c
						while (v42 != 0) {
							// 0x4cf8c
							*(int32_t *)v7 = __asm_lwbrx(v1, v41);
							v41 = v7 + 4;
							v7 = v41;
							v42--;
							// continue -> 0x4cf8c
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x4cd7c
				v17 = __asm_rlwinm(g38, 2, 22, 29);
				v18 = (int32_t *)result;
				v9 = g38;
				v43 = v3 + *(int32_t *)(v2 + v17 + 0x1000);
				v44 = v43 + v9 ^ *v18;
				*v18 = v44;
				v45 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
				v19 = __asm_rlwinm(v45, 2, 22, 29);
				v20 = result + 4;
				v46 = (int32_t *)v20;
				v10 = v43;
				v47 = v10 + *(int32_t *)(v2 + v19 + 0x1000) + 32 * v10 + v44 + 3;
				v48 = v47 + v45 ^ *v46;
				*v46 = v48;
				v49 = (0x200000 * v45 ^ -0x200000) + 0x11111111 | v45 / 2048;
				v21 = __asm_rlwinm(v49, 2, 22, 29);
				v22 = v20 + 4;
				v50 = (int32_t *)v22;
				v11 = v47;
				v51 = v11 + *(int32_t *)(v2 + v21 + 0x1000) + 32 * v11 + v48 + 3;
				v52 = v51 + v49 ^ *v50;
				*v50 = v52;
				v53 = (0x200000 * v49 ^ -0x200000) + 0x11111111 | v49 / 2048;
				v23 = __asm_rlwinm(v53, 2, 22, 29);
				v24 = v22 + 4;
				v54 = (int32_t *)v24;
				v12 = v51;
				v55 = v52 + 3 + v12 + 32 * v12 + *(int32_t *)(v2 + v23 + 0x1000);
				v56 = v55 + v53 ^ *v54;
				*v54 = v56;
				v13 = v55;
				v3 = v13 + v56 + 3 + 32 * v13;
				result = v24 + 4;
				v57 = (0x200000 * v53 ^ -0x200000) + 0x11111111 | v53 / 2048;
				g38 = v57;
				v25 = v6 - 1;
				// branch -> 0x4cd7c
				while (v25 != 0) {
					// 0x4cd7c
					v17 = __asm_rlwinm(v57, 2, 22, 29);
					v18 = (int32_t *)result;
					v9 = g38;
					v43 = v3 + *(int32_t *)(v2 + v17 + 0x1000);
					v44 = v43 + v9 ^ *v18;
					*v18 = v44;
					v45 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
					v19 = __asm_rlwinm(v45, 2, 22, 29);
					v20 = result + 4;
					v46 = (int32_t *)v20;
					v10 = v43;
					v47 = v10 + *(int32_t *)(v2 + v19 + 0x1000) + 32 * v10 + v44 + 3;
					v48 = v47 + v45 ^ *v46;
					*v46 = v48;
					v49 = (0x200000 * v45 ^ -0x200000) + 0x11111111 | v45 / 2048;
					v21 = __asm_rlwinm(v49, 2, 22, 29);
					v22 = v20 + 4;
					v50 = (int32_t *)v22;
					v11 = v47;
					v51 = v11 + *(int32_t *)(v2 + v21 + 0x1000) + 32 * v11 + v48 + 3;
					v52 = v51 + v49 ^ *v50;
					*v50 = v52;
					v53 = (0x200000 * v49 ^ -0x200000) + 0x11111111 | v49 / 2048;
					v23 = __asm_rlwinm(v53, 2, 22, 29);
					v24 = v22 + 4;
					v54 = (int32_t *)v24;
					v12 = v51;
					v55 = v52 + 3 + v12 + 32 * v12 + *(int32_t *)(v2 + v23 + 0x1000);
					v56 = v55 + v53 ^ *v54;
					*v54 = v56;
					v13 = v55;
					v3 = v13 + v56 + 3 + 32 * v13;
					result = v24 + 4;
					v57 = (0x200000 * v53 ^ -0x200000) + 0x11111111 | v53 / 2048;
					g38 = v57;
					v25--;
					// continue -> 0x4cd7c
				}
				// 0x4cea4
				v26 = v5 % 4;
				if (v26 != 0) {
					// 0x4ceac
					v27 = __asm_rlwinm(v57, 2, 22, 29);
					v28 = (int32_t *)result;
					v14 = g38;
					v58 = v3 + *(int32_t *)(v2 + v27 + 0x1000);
					v59 = v58 + v14 ^ *v28;
					*v28 = v59;
					v3 = 33 * v58 + v59 + 3;
					v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
					g38 = v60;
					result += 4;
					v29 = v26 - 1;
					// branch -> 0x4ceb0
					while (v29 != 0) {
						// 0x4ceb0
						v27 = __asm_rlwinm(v60, 2, 22, 29);
						v28 = (int32_t *)result;
						v14 = g38;
						v58 = v3 + *(int32_t *)(v2 + v27 + 0x1000);
						v59 = v58 + v14 ^ *v28;
						*v28 = v59;
						v3 = 33 * v58 + v59 + 3;
						v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
						g38 = v60;
						result += 4;
						v29--;
						// continue -> 0x4ceb0
					}
					// 0x4cf00
					v7 = v4;
					g37 = v1;
					if (v1 < 1) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x4cf10
					v30 = __asm_rlwinm_(v1, 29, 3, 31);
					v6 = v30;
					if (v30 == 0) {
						// 0x4cf10
						// branch -> 0x4cf88
						// 0x4cf88
						*(int32_t *)v7 = __asm_lwbrx(v1, v7);
						v41 = v7 + 4;
						v7 = v41;
						v42 = g37 - 1;
						// branch -> 0x4cf8c
						while (v42 != 0) {
							// 0x4cf8c
							*(int32_t *)v7 = __asm_lwbrx(v1, v41);
							v41 = v7 + 4;
							v7 = v41;
							v42--;
							// continue -> 0x4cf8c
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x4cf1c
						*(int32_t *)v7 = __asm_lwbrx(v1, v7);
						v15 = v7;
						v31 = v15 + 4;
						*(int32_t *)v31 = __asm_lwbrx(v1, v31);
						v32 = v15 + 8;
						*(int32_t *)v32 = __asm_lwbrx(v1, v32);
						v33 = v15 + 12;
						*(int32_t *)v33 = __asm_lwbrx(v1, v33);
						v34 = v15 + 16;
						*(int32_t *)v34 = __asm_lwbrx(v1, v34);
						v35 = v15 + 20;
						*(int32_t *)v35 = __asm_lwbrx(v1, v35);
						v36 = v15 + 24;
						*(int32_t *)v36 = __asm_lwbrx(v1, v36);
						v37 = v15 + 28;
						*(int32_t *)v37 = __asm_lwbrx(v1, v37);
						v38 = v15 + 32;
						v7 = v38;
						v39 = v6 - 1;
						// branch -> 0x4cf1c
						while (v39 != 0) {
							// 0x4cf1c
							*(int32_t *)v7 = __asm_lwbrx(v1, v38);
							v15 = v7;
							v31 = v15 + 4;
							*(int32_t *)v31 = __asm_lwbrx(v1, v31);
							v32 = v15 + 8;
							*(int32_t *)v32 = __asm_lwbrx(v1, v32);
							v33 = v15 + 12;
							*(int32_t *)v33 = __asm_lwbrx(v1, v33);
							v34 = v15 + 16;
							*(int32_t *)v34 = __asm_lwbrx(v1, v34);
							v35 = v15 + 20;
							*(int32_t *)v35 = __asm_lwbrx(v1, v35);
							v36 = v15 + 24;
							*(int32_t *)v36 = __asm_lwbrx(v1, v36);
							v37 = v15 + 28;
							*(int32_t *)v37 = __asm_lwbrx(v1, v37);
							v38 = v15 + 32;
							v7 = v38;
							v39--;
							// continue -> 0x4cf1c
						}
						// 0x4cf80
						v40 = g37 % 8;
						g37 = v40;
						if (v40 != 0) {
							// 0x4cf88
							*(int32_t *)v7 = __asm_lwbrx(v1, v38);
							v41 = v7 + 4;
							v7 = v41;
							v42 = v40 - 1;
							// branch -> 0x4cf8c
							while (v42 != 0) {
								// 0x4cf8c
								*(int32_t *)v7 = __asm_lwbrx(v1, v41);
								v41 = v7 + 4;
								v7 = v41;
								v42--;
								// continue -> 0x4cf8c
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x4cf00
			v7 = v4;
			g37 = v1;
			if (v1 < 1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x4cf10
			v30 = __asm_rlwinm_(v1, 29, 3, 31);
			v6 = v30;
			if (v30 == 0) {
				// 0x4cf10
				// branch -> 0x4cf88
				// 0x4cf88
				*(int32_t *)v7 = __asm_lwbrx(v1, v7);
				v41 = v7 + 4;
				v7 = v41;
				v42 = g37 - 1;
				// branch -> 0x4cf8c
				while (v42 != 0) {
					// 0x4cf8c
					*(int32_t *)v7 = __asm_lwbrx(v1, v41);
					v41 = v7 + 4;
					v7 = v41;
					v42--;
					// continue -> 0x4cf8c
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x4cf1c
				*(int32_t *)v7 = __asm_lwbrx(v1, v7);
				v15 = v7;
				v31 = v15 + 4;
				*(int32_t *)v31 = __asm_lwbrx(v1, v31);
				v32 = v15 + 8;
				*(int32_t *)v32 = __asm_lwbrx(v1, v32);
				v33 = v15 + 12;
				*(int32_t *)v33 = __asm_lwbrx(v1, v33);
				v34 = v15 + 16;
				*(int32_t *)v34 = __asm_lwbrx(v1, v34);
				v35 = v15 + 20;
				*(int32_t *)v35 = __asm_lwbrx(v1, v35);
				v36 = v15 + 24;
				*(int32_t *)v36 = __asm_lwbrx(v1, v36);
				v37 = v15 + 28;
				*(int32_t *)v37 = __asm_lwbrx(v1, v37);
				v38 = v15 + 32;
				v7 = v38;
				v39 = v6 - 1;
				// branch -> 0x4cf1c
				while (v39 != 0) {
					// 0x4cf1c
					*(int32_t *)v7 = __asm_lwbrx(v1, v38);
					v15 = v7;
					v31 = v15 + 4;
					*(int32_t *)v31 = __asm_lwbrx(v1, v31);
					v32 = v15 + 8;
					*(int32_t *)v32 = __asm_lwbrx(v1, v32);
					v33 = v15 + 12;
					*(int32_t *)v33 = __asm_lwbrx(v1, v33);
					v34 = v15 + 16;
					*(int32_t *)v34 = __asm_lwbrx(v1, v34);
					v35 = v15 + 20;
					*(int32_t *)v35 = __asm_lwbrx(v1, v35);
					v36 = v15 + 24;
					*(int32_t *)v36 = __asm_lwbrx(v1, v36);
					v37 = v15 + 28;
					*(int32_t *)v37 = __asm_lwbrx(v1, v37);
					v38 = v15 + 32;
					v7 = v38;
					v39--;
					// continue -> 0x4cf1c
				}
				// 0x4cf80
				v40 = g37 % 8;
				g37 = v40;
				if (v40 != 0) {
					// 0x4cf88
					*(int32_t *)v7 = __asm_lwbrx(v1, v38);
					v41 = v7 + 4;
					v7 = v41;
					v42 = v40 - 1;
					// branch -> 0x4cf8c
					while (v42 != 0) {
						// 0x4cf8c
						*(int32_t *)v7 = __asm_lwbrx(v1, v41);
						v41 = v7 + 4;
						v7 = v41;
						v42--;
						// continue -> 0x4cf8c
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x4cf00
		v7 = v4;
		g37 = v1;
		if (v1 < 1) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x4cf10
		v30 = __asm_rlwinm_(v1, 29, 3, 31);
		v6 = v30;
		if (v30 == 0) {
			// 0x4cf10
			// branch -> 0x4cf88
			// 0x4cf88
			result2 = __asm_lwbrx(v1, v7);
			result = result2;
			*(int32_t *)v7 = result2;
			v41 = v7 + 4;
			v7 = v41;
			v42 = g37 - 1;
			// branch -> 0x4cf8c
			while (v42 != 0) {
				// 0x4cf8c
				result2 = __asm_lwbrx(v1, v41);
				result = result2;
				*(int32_t *)v7 = result2;
				v41 = v7 + 4;
				v7 = v41;
				v42--;
				// continue -> 0x4cf8c
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			// 0x4cf1c
			*(int32_t *)v7 = __asm_lwbrx(v1, v7);
			v15 = v7;
			v31 = v15 + 4;
			*(int32_t *)v31 = __asm_lwbrx(v1, v31);
			v32 = v15 + 8;
			*(int32_t *)v32 = __asm_lwbrx(v1, v32);
			v33 = v15 + 12;
			*(int32_t *)v33 = __asm_lwbrx(v1, v33);
			v34 = v15 + 16;
			*(int32_t *)v34 = __asm_lwbrx(v1, v34);
			v35 = v15 + 20;
			*(int32_t *)v35 = __asm_lwbrx(v1, v35);
			v36 = v15 + 24;
			*(int32_t *)v36 = __asm_lwbrx(v1, v36);
			v37 = v15 + 28;
			result3 = __asm_lwbrx(v1, v37);
			result = result3;
			*(int32_t *)v37 = result3;
			v38 = v15 + 32;
			v7 = v38;
			v39 = v6 - 1;
			// branch -> 0x4cf1c
			while (v39 != 0) {
				// 0x4cf1c
				*(int32_t *)v7 = __asm_lwbrx(v1, v38);
				v15 = v7;
				v31 = v15 + 4;
				*(int32_t *)v31 = __asm_lwbrx(v1, v31);
				v32 = v15 + 8;
				*(int32_t *)v32 = __asm_lwbrx(v1, v32);
				v33 = v15 + 12;
				*(int32_t *)v33 = __asm_lwbrx(v1, v33);
				v34 = v15 + 16;
				*(int32_t *)v34 = __asm_lwbrx(v1, v34);
				v35 = v15 + 20;
				*(int32_t *)v35 = __asm_lwbrx(v1, v35);
				v36 = v15 + 24;
				*(int32_t *)v36 = __asm_lwbrx(v1, v36);
				v37 = v15 + 28;
				result3 = __asm_lwbrx(v1, v37);
				result = result3;
				*(int32_t *)v37 = result3;
				v38 = v15 + 32;
				v7 = v38;
				v39--;
				// continue -> 0x4cf1c
			}
			// 0x4cf80
			v40 = g37 % 8;
			g37 = v40;
			if (v40 != 0) {
				// 0x4cf88
				result2 = __asm_lwbrx(v1, v38);
				result = result2;
				*(int32_t *)v7 = result2;
				v41 = v7 + 4;
				v7 = v41;
				v42 = v40 - 1;
				// branch -> 0x4cf8c
				while (v42 != 0) {
					// 0x4cf8c
					result2 = __asm_lwbrx(v1, v41);
					result = result2;
					*(int32_t *)v7 = result2;
					v41 = v7 + 4;
					v7 = v41;
					v42--;
					// continue -> 0x4cf8c
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x4cd64
	v8 = v1;
	v5 = v8;
	if (v8 != 0) {
		// 0x4cd70
		v16 = __asm_rlwinm_(v8, 30, 2, 31);
		if (v16 == 0) {
			// 0x4cd70
			// branch -> 0x4ceac
			// 0x4ceac
			v27 = __asm_rlwinm(g38, 2, 22, 29);
			v28 = (int32_t *)result;
			v14 = g38;
			v58 = v3 + *(int32_t *)(v2 + v27 + 0x1000);
			v59 = v58 + v14 ^ *v28;
			*v28 = v59;
			v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
			g38 = v60;
			result += 4;
			v29 = v5 - 1;
			// branch -> 0x4ceb0
			while (v29 != 0) {
				// 0x4ceb0
				v27 = __asm_rlwinm(v60, 2, 22, 29);
				v28 = (int32_t *)result;
				v14 = g38;
				v58 = 33 * v58 + v59 + 3 + *(int32_t *)(v2 + v27 + 0x1000);
				v59 = v58 + v14 ^ *v28;
				*v28 = v59;
				v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
				g38 = v60;
				result += 4;
				v29--;
				// continue -> 0x4ceb0
			}
			// 0x4cf00
			v7 = v4;
			g37 = v1;
			if (v1 < 1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x4cf10
			v30 = __asm_rlwinm_(v1, 29, 3, 31);
			v6 = v30;
			if (v30 == 0) {
				// 0x4cf10
				// branch -> 0x4cf88
				// 0x4cf88
				*(int32_t *)v7 = __asm_lwbrx(v1, v7);
				v41 = v7 + 4;
				v7 = v41;
				v42 = g37 - 1;
				// branch -> 0x4cf8c
				while (v42 != 0) {
					// 0x4cf8c
					*(int32_t *)v7 = __asm_lwbrx(v1, v41);
					v41 = v7 + 4;
					v7 = v41;
					v42--;
					// continue -> 0x4cf8c
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x4cf1c
				*(int32_t *)v7 = __asm_lwbrx(v1, v7);
				v15 = v7;
				v31 = v15 + 4;
				*(int32_t *)v31 = __asm_lwbrx(v1, v31);
				v32 = v15 + 8;
				*(int32_t *)v32 = __asm_lwbrx(v1, v32);
				v33 = v15 + 12;
				*(int32_t *)v33 = __asm_lwbrx(v1, v33);
				v34 = v15 + 16;
				*(int32_t *)v34 = __asm_lwbrx(v1, v34);
				v35 = v15 + 20;
				*(int32_t *)v35 = __asm_lwbrx(v1, v35);
				v36 = v15 + 24;
				*(int32_t *)v36 = __asm_lwbrx(v1, v36);
				v37 = v15 + 28;
				*(int32_t *)v37 = __asm_lwbrx(v1, v37);
				v38 = v15 + 32;
				v7 = v38;
				v39 = v6 - 1;
				// branch -> 0x4cf1c
				while (v39 != 0) {
					// 0x4cf1c
					*(int32_t *)v7 = __asm_lwbrx(v1, v38);
					v15 = v7;
					v31 = v15 + 4;
					*(int32_t *)v31 = __asm_lwbrx(v1, v31);
					v32 = v15 + 8;
					*(int32_t *)v32 = __asm_lwbrx(v1, v32);
					v33 = v15 + 12;
					*(int32_t *)v33 = __asm_lwbrx(v1, v33);
					v34 = v15 + 16;
					*(int32_t *)v34 = __asm_lwbrx(v1, v34);
					v35 = v15 + 20;
					*(int32_t *)v35 = __asm_lwbrx(v1, v35);
					v36 = v15 + 24;
					*(int32_t *)v36 = __asm_lwbrx(v1, v36);
					v37 = v15 + 28;
					*(int32_t *)v37 = __asm_lwbrx(v1, v37);
					v38 = v15 + 32;
					v7 = v38;
					v39--;
					// continue -> 0x4cf1c
				}
				// 0x4cf80
				v40 = g37 % 8;
				g37 = v40;
				if (v40 != 0) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			// 0x4cd7c
			v17 = __asm_rlwinm(g38, 2, 22, 29);
			v18 = (int32_t *)result;
			v9 = g38;
			v43 = v3 + *(int32_t *)(v2 + v17 + 0x1000);
			v44 = v43 + v9 ^ *v18;
			*v18 = v44;
			v45 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
			v19 = __asm_rlwinm(v45, 2, 22, 29);
			v20 = result + 4;
			v46 = (int32_t *)v20;
			v10 = v43;
			v47 = v10 + *(int32_t *)(v2 + v19 + 0x1000) + 32 * v10 + v44 + 3;
			v48 = v47 + v45 ^ *v46;
			*v46 = v48;
			v49 = (0x200000 * v45 ^ -0x200000) + 0x11111111 | v45 / 2048;
			v21 = __asm_rlwinm(v49, 2, 22, 29);
			v22 = v20 + 4;
			v50 = (int32_t *)v22;
			v11 = v47;
			v51 = v11 + *(int32_t *)(v2 + v21 + 0x1000) + 32 * v11 + v48 + 3;
			v52 = v51 + v49 ^ *v50;
			*v50 = v52;
			v53 = (0x200000 * v49 ^ -0x200000) + 0x11111111 | v49 / 2048;
			v23 = __asm_rlwinm(v53, 2, 22, 29);
			v24 = v22 + 4;
			v54 = (int32_t *)v24;
			v12 = v51;
			v55 = v52 + 3 + v12 + 32 * v12 + *(int32_t *)(v2 + v23 + 0x1000);
			v56 = v55 + v53 ^ *v54;
			*v54 = v56;
			v13 = v55;
			v3 = v13 + v56 + 3 + 32 * v13;
			result = v24 + 4;
			v57 = (0x200000 * v53 ^ -0x200000) + 0x11111111 | v53 / 2048;
			g38 = v57;
			v25 = v16 - 1;
			// branch -> 0x4cd7c
			while (v25 != 0) {
				// 0x4cd7c
				v17 = __asm_rlwinm(v57, 2, 22, 29);
				v18 = (int32_t *)result;
				v9 = g38;
				v43 = v3 + *(int32_t *)(v2 + v17 + 0x1000);
				v44 = v43 + v9 ^ *v18;
				*v18 = v44;
				v45 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
				v19 = __asm_rlwinm(v45, 2, 22, 29);
				v20 = result + 4;
				v46 = (int32_t *)v20;
				v10 = v43;
				v47 = v10 + *(int32_t *)(v2 + v19 + 0x1000) + 32 * v10 + v44 + 3;
				v48 = v47 + v45 ^ *v46;
				*v46 = v48;
				v49 = (0x200000 * v45 ^ -0x200000) + 0x11111111 | v45 / 2048;
				v21 = __asm_rlwinm(v49, 2, 22, 29);
				v22 = v20 + 4;
				v50 = (int32_t *)v22;
				v11 = v47;
				v51 = v11 + *(int32_t *)(v2 + v21 + 0x1000) + 32 * v11 + v48 + 3;
				v52 = v51 + v49 ^ *v50;
				*v50 = v52;
				v53 = (0x200000 * v49 ^ -0x200000) + 0x11111111 | v49 / 2048;
				v23 = __asm_rlwinm(v53, 2, 22, 29);
				v24 = v22 + 4;
				v54 = (int32_t *)v24;
				v12 = v51;
				v55 = v52 + 3 + v12 + 32 * v12 + *(int32_t *)(v2 + v23 + 0x1000);
				v56 = v55 + v53 ^ *v54;
				*v54 = v56;
				v13 = v55;
				v3 = v13 + v56 + 3 + 32 * v13;
				result = v24 + 4;
				v57 = (0x200000 * v53 ^ -0x200000) + 0x11111111 | v53 / 2048;
				g38 = v57;
				v25--;
				// continue -> 0x4cd7c
			}
			// 0x4cea4
			v26 = v5 % 4;
			if (v26 != 0) {
				// 0x4ceac
				v27 = __asm_rlwinm(v57, 2, 22, 29);
				v28 = (int32_t *)result;
				v14 = g38;
				v58 = v3 + *(int32_t *)(v2 + v27 + 0x1000);
				v59 = v58 + v14 ^ *v28;
				*v28 = v59;
				v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
				g38 = v60;
				result += 4;
				v29 = v26 - 1;
				// branch -> 0x4ceb0
				while (v29 != 0) {
					// 0x4ceb0
					v27 = __asm_rlwinm(v60, 2, 22, 29);
					v28 = (int32_t *)result;
					v14 = g38;
					v58 = 33 * v58 + v59 + 3 + *(int32_t *)(v2 + v27 + 0x1000);
					v59 = v58 + v14 ^ *v28;
					*v28 = v59;
					v60 = (0x200000 * v14 ^ -0x200000) + 0x11111111 | g38 / 2048;
					g38 = v60;
					result += 4;
					v29--;
					// continue -> 0x4ceb0
				}
				// 0x4cf00
				v7 = v4;
				g37 = v1;
				if (v1 < 1) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x4cf10
				v30 = __asm_rlwinm_(v1, 29, 3, 31);
				v6 = v30;
				if (v30 == 0) {
					// 0x4cf10
					// branch -> 0x4cf88
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					// 0x4cf1c
					*(int32_t *)v7 = __asm_lwbrx(v1, v7);
					v15 = v7;
					v31 = v15 + 4;
					*(int32_t *)v31 = __asm_lwbrx(v1, v31);
					v32 = v15 + 8;
					*(int32_t *)v32 = __asm_lwbrx(v1, v32);
					v33 = v15 + 12;
					*(int32_t *)v33 = __asm_lwbrx(v1, v33);
					v34 = v15 + 16;
					*(int32_t *)v34 = __asm_lwbrx(v1, v34);
					v35 = v15 + 20;
					*(int32_t *)v35 = __asm_lwbrx(v1, v35);
					v36 = v15 + 24;
					*(int32_t *)v36 = __asm_lwbrx(v1, v36);
					v37 = v15 + 28;
					*(int32_t *)v37 = __asm_lwbrx(v1, v37);
					v38 = v15 + 32;
					v7 = v38;
					v39 = v6 - 1;
					// branch -> 0x4cf1c
					while (v39 != 0) {
						// 0x4cf1c
						*(int32_t *)v7 = __asm_lwbrx(v1, v38);
						v15 = v7;
						v31 = v15 + 4;
						*(int32_t *)v31 = __asm_lwbrx(v1, v31);
						v32 = v15 + 8;
						*(int32_t *)v32 = __asm_lwbrx(v1, v32);
						v33 = v15 + 12;
						*(int32_t *)v33 = __asm_lwbrx(v1, v33);
						v34 = v15 + 16;
						*(int32_t *)v34 = __asm_lwbrx(v1, v34);
						v35 = v15 + 20;
						*(int32_t *)v35 = __asm_lwbrx(v1, v35);
						v36 = v15 + 24;
						*(int32_t *)v36 = __asm_lwbrx(v1, v36);
						v37 = v15 + 28;
						*(int32_t *)v37 = __asm_lwbrx(v1, v37);
						v38 = v15 + 32;
						v7 = v38;
						v39--;
						// continue -> 0x4cf1c
					}
					// 0x4cf80
					v40 = g37 % 8;
					g37 = v40;
					if (v40 != 0) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0x4cf00
		v7 = v4;
		g37 = v1;
		if (v1 < 1) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x4cf10
		v30 = __asm_rlwinm_(v1, 29, 3, 31);
		v6 = v30;
		if (v30 == 0) {
			// 0x4cf10
			// branch -> 0x4cf88
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			// 0x4cf1c
			*(int32_t *)v7 = __asm_lwbrx(v1, v7);
			v15 = v7;
			v31 = v15 + 4;
			*(int32_t *)v31 = __asm_lwbrx(v1, v31);
			v32 = v15 + 8;
			*(int32_t *)v32 = __asm_lwbrx(v1, v32);
			v33 = v15 + 12;
			*(int32_t *)v33 = __asm_lwbrx(v1, v33);
			v34 = v15 + 16;
			*(int32_t *)v34 = __asm_lwbrx(v1, v34);
			v35 = v15 + 20;
			*(int32_t *)v35 = __asm_lwbrx(v1, v35);
			v36 = v15 + 24;
			*(int32_t *)v36 = __asm_lwbrx(v1, v36);
			v37 = v15 + 28;
			*(int32_t *)v37 = __asm_lwbrx(v1, v37);
			v38 = v15 + 32;
			v7 = v38;
			v39 = v6 - 1;
			// branch -> 0x4cf1c
			while (v39 != 0) {
				// 0x4cf1c
				*(int32_t *)v7 = __asm_lwbrx(v1, v38);
				v15 = v7;
				v31 = v15 + 4;
				*(int32_t *)v31 = __asm_lwbrx(v1, v31);
				v32 = v15 + 8;
				*(int32_t *)v32 = __asm_lwbrx(v1, v32);
				v33 = v15 + 12;
				*(int32_t *)v33 = __asm_lwbrx(v1, v33);
				v34 = v15 + 16;
				*(int32_t *)v34 = __asm_lwbrx(v1, v34);
				v35 = v15 + 20;
				*(int32_t *)v35 = __asm_lwbrx(v1, v35);
				v36 = v15 + 24;
				*(int32_t *)v36 = __asm_lwbrx(v1, v36);
				v37 = v15 + 28;
				*(int32_t *)v37 = __asm_lwbrx(v1, v37);
				v38 = v15 + 32;
				v7 = v38;
				v39--;
				// continue -> 0x4cf1c
			}
			// 0x4cf80
			v40 = g37 % 8;
			g37 = v40;
			if (v40 != 0) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x4cf00
	v7 = v4;
	g37 = v1;
	if (v1 < 1) {
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x4cf10
	v30 = __asm_rlwinm_(v1, 29, 3, 31);
	if (v30 == 0) {
		// 0x4cf10
		// branch -> 0x4cf88
		// Detected a possible infinite recursion (goto support failed); quitting...
	} else {
		// 0x4cf1c
		*(int32_t *)v7 = __asm_lwbrx(v1, v7);
		v15 = v7;
		v31 = v15 + 4;
		*(int32_t *)v31 = __asm_lwbrx(v1, v31);
		v32 = v15 + 8;
		*(int32_t *)v32 = __asm_lwbrx(v1, v32);
		v33 = v15 + 12;
		*(int32_t *)v33 = __asm_lwbrx(v1, v33);
		v34 = v15 + 16;
		*(int32_t *)v34 = __asm_lwbrx(v1, v34);
		v35 = v15 + 20;
		*(int32_t *)v35 = __asm_lwbrx(v1, v35);
		v36 = v15 + 24;
		*(int32_t *)v36 = __asm_lwbrx(v1, v36);
		v37 = v15 + 28;
		*(int32_t *)v37 = __asm_lwbrx(v1, v37);
		v38 = v15 + 32;
		v7 = v38;
		v39 = v30 - 1;
		// branch -> 0x4cf1c
		while (v39 != 0) {
			// 0x4cf1c
			*(int32_t *)v7 = __asm_lwbrx(v1, v38);
			v15 = v7;
			v31 = v15 + 4;
			*(int32_t *)v31 = __asm_lwbrx(v1, v31);
			v32 = v15 + 8;
			*(int32_t *)v32 = __asm_lwbrx(v1, v32);
			v33 = v15 + 12;
			*(int32_t *)v33 = __asm_lwbrx(v1, v33);
			v34 = v15 + 16;
			*(int32_t *)v34 = __asm_lwbrx(v1, v34);
			v35 = v15 + 20;
			*(int32_t *)v35 = __asm_lwbrx(v1, v35);
			v36 = v15 + 24;
			*(int32_t *)v36 = __asm_lwbrx(v1, v36);
			v37 = v15 + 28;
			*(int32_t *)v37 = __asm_lwbrx(v1, v37);
			v38 = v15 + 32;
			v7 = v38;
			v39--;
			// continue -> 0x4cf1c
		}
		// 0x4cf80
		v40 = g37 % 8;
		g37 = v40;
		if (v40 != 0) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x4cfa8 - 0x4d2a4
int32_t Encrypt(int32_t *a1, int32_t a2, int32_t a3)
{
	int32_t result3 = (int32_t)a1;             // r3
	int32_t v1 = __asm_rlwinm_(a2, 30, 2, 31); // 0x4cfac
	int32_t v2 = *(int32_t *)(g23 - 0x6294);   // 0x4cfb4
	int32_t v3 = -0x11111112;                  // r11
	int32_t v4 = result3;                      // 0x4cfc4
	int32_t v5 = v4;                           // r6
	int32_t v6 = v1;                           // r4
	int32_t v7;                                // ctr
	int32_t v8;                                // 0x4d060
	uint32_t v9;                               // 0x4d084
	int32_t v10;                               // 0x4d1bc
	int32_t result;                            // 0x4d1fc
	int32_t v11;                               // 0x4d220
	int32_t v12;                               // 0x4d06c
	int32_t v13;                               // 0x4d078
	int32_t *v14;                              // 0x4d07c
	int32_t v15;                               // 0x4d0b4
	int32_t v16;                               // 0x4d0fc
	int32_t v17;                               // 0x4d144
	int32_t v18;                               // 0x4d19c
	int32_t v19;                               // 0x4d1a0
	int32_t v20;                               // 0x4d1ac
	int32_t *v21;                              // 0x4d1b0
	int32_t v22;                               // 0x4d1f8
	int32_t v23;                               // 0x4d20c
	int32_t v24;                               // 0x4d220
	int32_t v25;                               // 0x4d22c
	int32_t v26;                               // 0x4d238
	int32_t v27;                               // 0x4d244
	int32_t v28;                               // 0x4d250
	int32_t v29;                               // 0x4d25c
	int32_t v30;                               // 0x4d268
	int32_t v31;                               // 0x4d274
	int32_t v32;                               // 0x4d278
	int32_t result2;                           // 0x4d27c
	int32_t v33;                               // 0x4d07c
	int32_t v34;                               // 0x4d090
	uint32_t v35;                              // 0x4d0a4
	int32_t *v36;                              // 0x4d0d8
	int32_t v37;                               // 0x4d0dc
	uint32_t v38;                              // 0x4d0ec
	int32_t *v39;                              // 0x4d120
	int32_t v40;                               // 0x4d124
	uint32_t v41;                              // 0x4d134
	int32_t *v42;                              // 0x4d160
	int32_t v43;                               // 0x4d164
	int32_t v44;                               // 0x4d194
	int32_t v45;                               // 0x4d1b0
	int32_t v46;                               // 0x4d1c4
	int32_t v47;                               // 0x4d1f0
	int32_t v48;                               // 0x4d218
	int32_t v49;                               // 0x4d224
	int32_t v50;                               // 0x4d230
	int32_t v51;                               // 0x4d23c
	int32_t v52;                               // 0x4d248
	int32_t v53;                               // 0x4d254
	int32_t v54;                               // 0x4d260
	int32_t v55;                               // 0x4d26c
	int32_t v56;                               // 0x4d0d8
	int32_t v57;                               // 0x4d120
	int32_t v58;                               // 0x4d160
	if (v1 >= 1) {
		int32_t v59 = __asm_rlwinm_(v1, 29, 3, 31); // 0x4cfd4
		int32_t v60 = v59;                          // r0
		v7 = v59;
		int32_t v61; // 0x4d058
		int32_t v62; // 0x4d05c
		int32_t v63; // 0x4d290
		int32_t v64; // 0x4d294
		int32_t v65; // 0x4d050
		int32_t v66; // 0x4d288
		if (v59 == 0) {
			// 0x4cfd4
			// branch -> 0x4d04c
			// 0x4d04c
			v65 = __asm_lwbrx(v60, v5);
			*(int32_t *)v5 = v65;
			v61 = v5 + 4;
			v5 = v61;
			v62 = v6 - 1;
			// branch -> 0x4d050
			while (v62 != 0) {
				// 0x4d050
				v65 = __asm_lwbrx(v65, v61);
				*(int32_t *)v5 = v65;
				v61 = v5 + 4;
				v5 = v61;
				v62--;
				// continue -> 0x4d050
			}
			// 0x4d060
			v8 = v1;
			v6 = v8;
			if (v8 == 0) {
				// 0x4d1fc
				result = v1;
				v6 = v4;
				result3 = result;
				if (result < 1) {
					// 0x4d298
					return result;
				}
				// 0x4d20c
				v23 = __asm_rlwinm_(result, 29, 3, 31);
				if (v23 == 0) {
					// 0x4d20c
					// branch -> 0x4d284
					// 0x4d284
					v66 = __asm_lwbrx(v23, v6);
					*(int32_t *)v6 = v66;
					v63 = v6 + 4;
					v6 = v63;
					v64 = result3 - 1;
					// branch -> 0x4d288
					while (v64 != 0) {
						// 0x4d288
						v66 = __asm_lwbrx(v66, v63);
						*(int32_t *)v6 = v66;
						v63 = v6 + 4;
						v6 = v63;
						v64--;
						// continue -> 0x4d288
					}
					// 0x4d298
					// branch -> 0x4d298
				} else {
					// 0x4d218
					// branch -> 0x4d218
					while (true) {
						// 0x4d218
						v48 = __asm_lwbrx(v23, v6);
						*(int32_t *)v6 = v48;
						v11 = v6;
						v24 = v11 + 4;
						v49 = __asm_lwbrx(v48, v24);
						*(int32_t *)v24 = v49;
						v25 = v11 + 8;
						v50 = __asm_lwbrx(v49, v25);
						*(int32_t *)v25 = v50;
						v26 = v11 + 12;
						v51 = __asm_lwbrx(v50, v26);
						*(int32_t *)v26 = v51;
						v27 = v11 + 16;
						v52 = __asm_lwbrx(v51, v27);
						*(int32_t *)v27 = v52;
						v28 = v11 + 20;
						v53 = __asm_lwbrx(v52, v28);
						*(int32_t *)v28 = v53;
						v29 = v11 + 24;
						v54 = __asm_lwbrx(v53, v29);
						*(int32_t *)v29 = v54;
						v30 = v11 + 28;
						v55 = __asm_lwbrx(v54, v30);
						v60 = v55;
						*(int32_t *)v30 = v55;
						v31 = v11 + 32;
						v6 = v31;
						v32 = v23 - 1;
						v7 = v32;
						if (v32 != 0) {
							goto lab_0x4d218_19;
						}
						// 0x4d27c
						result2 = result3 % 8;
						if (result2 != 0) {
							// 0x4d284
							v66 = __asm_lwbrx(v60, v31);
							*(int32_t *)v6 = v66;
							v63 = v6 + 4;
							v6 = v63;
							v64 = result2 - 1;
							// branch -> 0x4d288
							while (v64 != 0) {
								// 0x4d288
								v66 = __asm_lwbrx(v66, v63);
								*(int32_t *)v6 = v66;
								v63 = v6 + 4;
								v6 = v63;
								v64--;
								// continue -> 0x4d288
							}
							// 0x4d298
							// branch -> 0x4d298
							// 0x4d298
							return result2;
						}
					}
				}
				// 0x4d298
				return result3;
			}
			// 0x4d06c
			v12 = __asm_rlwinm_(v8, 30, 2, 31);
			if (v12 == 0) {
				// 0x4d06c
				// branch -> 0x4d1a8
				// 0x4d1a8
				v20 = __asm_rlwinm(g38, 2, 22, 29);
				v21 = (int32_t *)result3;
				v10 = g38;
				v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
				*v21 = v46 + v10 ^ *v21;
				v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
				g38 = v47;
				result3 += 4;
				v22 = v6 - 1;
				// branch -> 0x4d1ac
				while (v22 != 0) {
					// 0x4d1ac
					v20 = __asm_rlwinm(v47, 2, 22, 29);
					v21 = (int32_t *)result3;
					v45 = *v21;
					v10 = g38;
					v46 = v46 + (32 * v46 | 3) + v45 + *(int32_t *)(v2 + v20 + 0x1000);
					*v21 = v46 + v10 ^ v45;
					v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
					g38 = v47;
					result3 += 4;
					v22--;
					// continue -> 0x4d1ac
				}
				// 0x4d1fc
				result = v1;
				v6 = v4;
				result3 = result;
				if (result < 1) {
					// 0x4d298
					return result;
				}
				// 0x4d20c
				v23 = __asm_rlwinm_(result, 29, 3, 31);
				v7 = v23;
				if (v23 == 0) {
					// 0x4d20c
					// branch -> 0x4d284
					// 0x4d284
					v66 = __asm_lwbrx(v23, v6);
					*(int32_t *)v6 = v66;
					v63 = v6 + 4;
					v6 = v63;
					v64 = result3 - 1;
					// branch -> 0x4d288
					while (v64 != 0) {
						// 0x4d288
						v66 = __asm_lwbrx(v66, v63);
						*(int32_t *)v6 = v66;
						v63 = v6 + 4;
						v6 = v63;
						v64--;
						// continue -> 0x4d288
					}
					// 0x4d298
					// branch -> 0x4d298
				} else {
					int32_t v67 = v6;  // 0x4d218
					int32_t v68 = v23; // 0x4d218
					// branch -> 0x4d218
					while (true) {
						// 0x4d218
						v48 = __asm_lwbrx(v68, v67);
						*(int32_t *)v6 = v48;
						v11 = v6;
						v24 = v11 + 4;
						v49 = __asm_lwbrx(v48, v24);
						*(int32_t *)v24 = v49;
						v25 = v11 + 8;
						v50 = __asm_lwbrx(v49, v25);
						*(int32_t *)v25 = v50;
						v26 = v11 + 12;
						v51 = __asm_lwbrx(v50, v26);
						*(int32_t *)v26 = v51;
						v27 = v11 + 16;
						v52 = __asm_lwbrx(v51, v27);
						*(int32_t *)v27 = v52;
						v28 = v11 + 20;
						v53 = __asm_lwbrx(v52, v28);
						*(int32_t *)v28 = v53;
						v29 = v11 + 24;
						v54 = __asm_lwbrx(v53, v29);
						*(int32_t *)v29 = v54;
						v30 = v11 + 28;
						v55 = __asm_lwbrx(v54, v30);
						v60 = v55;
						*(int32_t *)v30 = v55;
						v31 = v11 + 32;
						v6 = v31;
						v32 = v7 - 1;
						v7 = v32;
						if (v32 == 0) {
							// 0x4d27c
							result2 = result3 % 8;
							if (result2 == 0) {
								// 0x4d298
								return 0;
							}
							// 0x4d284
							v66 = __asm_lwbrx(v60, v31);
							*(int32_t *)v6 = v66;
							v63 = v6 + 4;
							v6 = v63;
							v64 = result2 - 1;
							// branch -> 0x4d288
							while (v64 != 0) {
								// 0x4d288
								v66 = __asm_lwbrx(v66, v63);
								*(int32_t *)v6 = v66;
								v63 = v6 + 4;
								v6 = v63;
								v64--;
								// continue -> 0x4d288
							}
							// 0x4d298
							// branch -> 0x4d298
							// 0x4d298
							return result2;
						}
					lab_0x4d218_19:
						// 0x4d218
						v67 = v31;
						v68 = v55;
						// branch -> 0x4d218
					}
				}
				// 0x4d298
				return result3;
			}
			// 0x4d078
			v13 = __asm_rlwinm(g38, 2, 22, 29);
			v14 = (int32_t *)result3;
			v33 = *v14;
			v9 = g38;
			v34 = v3 + *(int32_t *)(v2 + v13 + 0x1000);
			v35 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
			*v14 = v34 + v9 ^ v33;
			v15 = __asm_rlwinm(v35, 2, 22, 29);
			v36 = (int32_t *)(result3 + 4);
			v56 = *v36;
			v37 = *(int32_t *)(v2 + v15 + 0x1000) + v34 + 32 * v34 + 3 + v33;
			v38 = (0x200000 * v35 ^ -0x200000) + 0x11111111 | v35 / 2048;
			*v36 = v56 ^ v37 + v35;
			v16 = __asm_rlwinm(v38, 2, 22, 29);
			v39 = (int32_t *)(result3 + 8);
			v57 = *v39;
			v40 = *(int32_t *)(v2 + v16 + 0x1000) + v37 + 32 * v37 + 3 + v56;
			v41 = (0x200000 * v38 ^ -0x200000) + 0x11111111 | v38 / 2048;
			*v39 = v57 ^ v40 + v38;
			v17 = __asm_rlwinm(v41, 2, 22, 29);
			v42 = (int32_t *)(result3 + 12);
			v58 = *v42;
			v43 = *(int32_t *)(v2 + v17 + 0x1000) + v40 + 32 * v40 + 3 + v57;
			*v42 = v58 ^ v43 + v41;
			v3 = v43 + (32 * v43 | 3) + v58;
			v44 = 0x11111111 + (0x200000 * v41 ^ -0x200000) | v41 / 2048;
			g38 = v44;
			result3 += 16;
			v18 = v12 - 1;
			// branch -> 0x4d078
			while (v18 != 0) {
				// 0x4d078
				v13 = __asm_rlwinm(v44, 2, 22, 29);
				v14 = (int32_t *)result3;
				v33 = *v14;
				v9 = g38;
				v34 = v3 + *(int32_t *)(v2 + v13 + 0x1000);
				v35 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
				*v14 = v34 + v9 ^ v33;
				v15 = __asm_rlwinm(v35, 2, 22, 29);
				v36 = (int32_t *)(result3 + 4);
				v56 = *v36;
				v37 = *(int32_t *)(v2 + v15 + 0x1000) + v34 + 32 * v34 + 3 + v33;
				v38 = (0x200000 * v35 ^ -0x200000) + 0x11111111 | v35 / 2048;
				*v36 = v56 ^ v37 + v35;
				v16 = __asm_rlwinm(v38, 2, 22, 29);
				v39 = (int32_t *)(result3 + 8);
				v57 = *v39;
				v40 = *(int32_t *)(v2 + v16 + 0x1000) + v37 + 32 * v37 + 3 + v56;
				v41 = (0x200000 * v38 ^ -0x200000) + 0x11111111 | v38 / 2048;
				*v39 = v57 ^ v40 + v38;
				v17 = __asm_rlwinm(v41, 2, 22, 29);
				v42 = (int32_t *)(result3 + 12);
				v58 = *v42;
				v43 = *(int32_t *)(v2 + v17 + 0x1000) + v40 + 32 * v40 + 3 + v57;
				*v42 = v58 ^ v43 + v41;
				v3 = v43 + (32 * v43 | 3) + v58;
				v44 = 0x11111111 + (0x200000 * v41 ^ -0x200000) | v41 / 2048;
				g38 = v44;
				result3 += 16;
				v18--;
				// continue -> 0x4d078
			}
			// 0x4d1a0
			v19 = v6 % 4;
			if (v19 != 0) {
				// 0x4d1a8
				v20 = __asm_rlwinm(v44, 2, 22, 29);
				v21 = (int32_t *)result3;
				v10 = g38;
				v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
				*v21 = v46 + v10 ^ *v21;
				v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
				g38 = v47;
				result3 += 4;
				v22 = v19 - 1;
				// branch -> 0x4d1ac
				while (v22 != 0) {
					// 0x4d1ac
					v20 = __asm_rlwinm(v47, 2, 22, 29);
					v21 = (int32_t *)result3;
					v45 = *v21;
					v10 = g38;
					v46 = v46 + (32 * v46 | 3) + v45 + *(int32_t *)(v2 + v20 + 0x1000);
					*v21 = v46 + v10 ^ v45;
					v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
					g38 = v47;
					result3 += 4;
					v22--;
					// continue -> 0x4d1ac
				}
				// 0x4d1fc
				result = v1;
				v6 = v4;
				result3 = result;
				if (result < 1) {
					// 0x4d298
					return result;
				}
				// 0x4d20c
				v23 = __asm_rlwinm_(result, 29, 3, 31);
				if (v23 == 0) {
					// 0x4d20c
					// branch -> 0x4d284
					// 0x4d284
					v66 = __asm_lwbrx(v23, v6);
					*(int32_t *)v6 = v66;
					v63 = v6 + 4;
					v6 = v63;
					v64 = result3 - 1;
					// branch -> 0x4d288
					while (v64 != 0) {
						// 0x4d288
						v66 = __asm_lwbrx(v66, v63);
						*(int32_t *)v6 = v66;
						v63 = v6 + 4;
						v6 = v63;
						v64--;
						// continue -> 0x4d288
					}
					// 0x4d298
					// branch -> 0x4d298
				} else {
					// 0x4d218
					// branch -> 0x4d218
					while (true) {
						// 0x4d218
						v48 = __asm_lwbrx(v23, v6);
						*(int32_t *)v6 = v48;
						v11 = v6;
						v24 = v11 + 4;
						v49 = __asm_lwbrx(v48, v24);
						*(int32_t *)v24 = v49;
						v25 = v11 + 8;
						v50 = __asm_lwbrx(v49, v25);
						*(int32_t *)v25 = v50;
						v26 = v11 + 12;
						v51 = __asm_lwbrx(v50, v26);
						*(int32_t *)v26 = v51;
						v27 = v11 + 16;
						v52 = __asm_lwbrx(v51, v27);
						*(int32_t *)v27 = v52;
						v28 = v11 + 20;
						v53 = __asm_lwbrx(v52, v28);
						*(int32_t *)v28 = v53;
						v29 = v11 + 24;
						v54 = __asm_lwbrx(v53, v29);
						*(int32_t *)v29 = v54;
						v30 = v11 + 28;
						v55 = __asm_lwbrx(v54, v30);
						v60 = v55;
						*(int32_t *)v30 = v55;
						v31 = v11 + 32;
						v6 = v31;
						v32 = v23 - 1;
						v7 = v32;
						if (v32 != 0) {
							goto lab_0x4d218_19;
						}
						// 0x4d27c
						result2 = result3 % 8;
						if (result2 != 0) {
							// 0x4d284
							v66 = __asm_lwbrx(v60, v31);
							*(int32_t *)v6 = v66;
							v63 = v6 + 4;
							v6 = v63;
							v64 = result2 - 1;
							// branch -> 0x4d288
							while (v64 != 0) {
								// 0x4d288
								v66 = __asm_lwbrx(v66, v63);
								*(int32_t *)v6 = v66;
								v63 = v6 + 4;
								v6 = v63;
								v64--;
								// continue -> 0x4d288
							}
							// 0x4d298
							// branch -> 0x4d298
							// 0x4d298
							return result2;
						}
					}
				}
				// 0x4d298
				return result3;
			}
			// 0x4d1fc
			result = v1;
			v6 = v4;
			result3 = result;
			if (result < 1) {
				// 0x4d298
				return result;
			}
			// 0x4d20c
			v23 = __asm_rlwinm_(result, 29, 3, 31);
			if (v23 == 0) {
				// 0x4d20c
				// branch -> 0x4d284
				// 0x4d284
				v66 = __asm_lwbrx(v23, v6);
				*(int32_t *)v6 = v66;
				v63 = v6 + 4;
				v6 = v63;
				v64 = result3 - 1;
				// branch -> 0x4d288
				while (v64 != 0) {
					// 0x4d288
					v66 = __asm_lwbrx(v66, v63);
					*(int32_t *)v6 = v66;
					v63 = v6 + 4;
					v6 = v63;
					v64--;
					// continue -> 0x4d288
				}
				// 0x4d298
				// branch -> 0x4d298
			} else {
				// 0x4d218
				// branch -> 0x4d218
				while (true) {
					// 0x4d218
					v48 = __asm_lwbrx(v23, v6);
					*(int32_t *)v6 = v48;
					v11 = v6;
					v24 = v11 + 4;
					v49 = __asm_lwbrx(v48, v24);
					*(int32_t *)v24 = v49;
					v25 = v11 + 8;
					v50 = __asm_lwbrx(v49, v25);
					*(int32_t *)v25 = v50;
					v26 = v11 + 12;
					v51 = __asm_lwbrx(v50, v26);
					*(int32_t *)v26 = v51;
					v27 = v11 + 16;
					v52 = __asm_lwbrx(v51, v27);
					*(int32_t *)v27 = v52;
					v28 = v11 + 20;
					v53 = __asm_lwbrx(v52, v28);
					*(int32_t *)v28 = v53;
					v29 = v11 + 24;
					v54 = __asm_lwbrx(v53, v29);
					*(int32_t *)v29 = v54;
					v30 = v11 + 28;
					v55 = __asm_lwbrx(v54, v30);
					v60 = v55;
					*(int32_t *)v30 = v55;
					v31 = v11 + 32;
					v6 = v31;
					v32 = v23 - 1;
					v7 = v32;
					if (v32 != 0) {
						goto lab_0x4d218_19;
					}
					// 0x4d27c
					result2 = result3 % 8;
					if (result2 != 0) {
						// 0x4d284
						v66 = __asm_lwbrx(v60, v31);
						*(int32_t *)v6 = v66;
						v63 = v6 + 4;
						v6 = v63;
						v64 = result2 - 1;
						// branch -> 0x4d288
						while (v64 != 0) {
							// 0x4d288
							v66 = __asm_lwbrx(v66, v63);
							*(int32_t *)v6 = v66;
							v63 = v6 + 4;
							v6 = v63;
							v64--;
							// continue -> 0x4d288
						}
						// 0x4d298
						// branch -> 0x4d298
						// 0x4d298
						return result2;
					}
				}
			}
			// 0x4d298
			return result3;
		}
		int32_t v69 = v5; // 0x4cfe0
		// branch -> 0x4cfe0
		while (true) {
			int32_t v70 = __asm_lwbrx(v59, v69); // 0x4cfe0
			*(int32_t *)v5 = v70;
			int32_t v71 = v5;                    // 0x4cfe8
			int32_t v72 = v71 + 4;               // 0x4cfe8
			int32_t v73 = __asm_lwbrx(v70, v72); // 0x4cfec
			*(int32_t *)v72 = v73;
			int32_t v74 = v71 + 8;               // 0x4cff4
			int32_t v75 = __asm_lwbrx(v73, v74); // 0x4cff8
			*(int32_t *)v74 = v75;
			int32_t v76 = v71 + 12;              // 0x4d000
			int32_t v77 = __asm_lwbrx(v75, v76); // 0x4d004
			*(int32_t *)v76 = v77;
			int32_t v78 = v71 + 16;              // 0x4d00c
			int32_t v79 = __asm_lwbrx(v77, v78); // 0x4d010
			*(int32_t *)v78 = v79;
			int32_t v80 = v71 + 20;              // 0x4d018
			int32_t v81 = __asm_lwbrx(v79, v80); // 0x4d01c
			*(int32_t *)v80 = v81;
			int32_t v82 = v71 + 24;              // 0x4d024
			int32_t v83 = __asm_lwbrx(v81, v82); // 0x4d028
			*(int32_t *)v82 = v83;
			int32_t v84 = v71 + 28;              // 0x4d030
			int32_t v85 = __asm_lwbrx(v83, v84); // 0x4d034
			v60 = v85;
			*(int32_t *)v84 = v85;
			int32_t v86 = v71 + 32; // 0x4d03c
			v5 = v86;
			int32_t v87 = v7 - 1; // 0x4d040
			v7 = v87;
			if (v87 == 0) {
				int32_t v88 = v6 % 8; // 0x4d044
				if (v88 != 0) {
					// 0x4d04c
					v65 = __asm_lwbrx(v60, v86);
					*(int32_t *)v5 = v65;
					v61 = v5 + 4;
					v5 = v61;
					v62 = v88 - 1;
					// branch -> 0x4d050
					while (v62 != 0) {
						// 0x4d050
						v65 = __asm_lwbrx(v65, v61);
						*(int32_t *)v5 = v65;
						v61 = v5 + 4;
						v5 = v61;
						v62--;
						// continue -> 0x4d050
					}
					// 0x4d060
					v8 = v1;
					v6 = v8;
					if (v8 != 0) {
						// 0x4d06c
						v12 = __asm_rlwinm_(v8, 30, 2, 31);
						if (v12 == 0) {
							// 0x4d06c
							// branch -> 0x4d1a8
							// 0x4d1a8
							v20 = __asm_rlwinm(g38, 2, 22, 29);
							v21 = (int32_t *)result3;
							v10 = g38;
							v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
							*v21 = v46 + v10 ^ *v21;
							v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
							g38 = v47;
							result3 += 4;
							v22 = v6 - 1;
							// branch -> 0x4d1ac
							while (v22 != 0) {
								// 0x4d1ac
								v20 = __asm_rlwinm(v47, 2, 22, 29);
								v21 = (int32_t *)result3;
								v45 = *v21;
								v10 = g38;
								v46 = v46 + (32 * v46 | 3) + v45 + *(int32_t *)(v2 + v20 + 0x1000);
								*v21 = v46 + v10 ^ v45;
								v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
								g38 = v47;
								result3 += 4;
								v22--;
								// continue -> 0x4d1ac
							}
							// 0x4d1fc
							result = v1;
							v6 = v4;
							result3 = result;
							if (result < 1) {
								// 0x4d298
								return result;
							}
							// 0x4d20c
							v23 = __asm_rlwinm_(result, 29, 3, 31);
							if (v23 == 0) {
								// 0x4d20c
								// branch -> 0x4d284
								// 0x4d284
								v66 = __asm_lwbrx(v23, v6);
								*(int32_t *)v6 = v66;
								v63 = v6 + 4;
								v6 = v63;
								v64 = result3 - 1;
								// branch -> 0x4d288
								while (v64 != 0) {
									// 0x4d288
									v66 = __asm_lwbrx(v66, v63);
									*(int32_t *)v6 = v66;
									v63 = v6 + 4;
									v6 = v63;
									v64--;
									// continue -> 0x4d288
								}
								// 0x4d298
								// branch -> 0x4d298
								// 0x4d298
								return result3;
							}
							// 0x4d218
							// branch -> 0x4d218
							while (true) {
								// 0x4d218
								v48 = __asm_lwbrx(v23, v6);
								*(int32_t *)v6 = v48;
								v11 = v6;
								v24 = v11 + 4;
								v49 = __asm_lwbrx(v48, v24);
								*(int32_t *)v24 = v49;
								v25 = v11 + 8;
								v50 = __asm_lwbrx(v49, v25);
								*(int32_t *)v25 = v50;
								v26 = v11 + 12;
								v51 = __asm_lwbrx(v50, v26);
								*(int32_t *)v26 = v51;
								v27 = v11 + 16;
								v52 = __asm_lwbrx(v51, v27);
								*(int32_t *)v27 = v52;
								v28 = v11 + 20;
								v53 = __asm_lwbrx(v52, v28);
								*(int32_t *)v28 = v53;
								v29 = v11 + 24;
								v54 = __asm_lwbrx(v53, v29);
								*(int32_t *)v29 = v54;
								v30 = v11 + 28;
								v55 = __asm_lwbrx(v54, v30);
								v60 = v55;
								*(int32_t *)v30 = v55;
								v31 = v11 + 32;
								v6 = v31;
								v32 = v23 - 1;
								v7 = v32;
								if (v32 != 0) {
									goto lab_0x4d218_19;
								}
								// 0x4d27c
								result2 = result3 % 8;
								if (result2 != 0) {
									// 0x4d284
									v66 = __asm_lwbrx(v60, v31);
									*(int32_t *)v6 = v66;
									v63 = v6 + 4;
									v6 = v63;
									v64 = result2 - 1;
									// branch -> 0x4d288
									while (v64 != 0) {
										// 0x4d288
										v66 = __asm_lwbrx(v66, v63);
										*(int32_t *)v6 = v66;
										v63 = v6 + 4;
										v6 = v63;
										v64--;
										// continue -> 0x4d288
									}
									// 0x4d298
									// branch -> 0x4d298
									// 0x4d298
									return result2;
								}
							}
							// 0x4d298
							return 0;
						}
						// 0x4d078
						v13 = __asm_rlwinm(g38, 2, 22, 29);
						v14 = (int32_t *)result3;
						v33 = *v14;
						v9 = g38;
						v34 = v3 + *(int32_t *)(v2 + v13 + 0x1000);
						v35 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
						*v14 = v34 + v9 ^ v33;
						v15 = __asm_rlwinm(v35, 2, 22, 29);
						v36 = (int32_t *)(result3 + 4);
						v56 = *v36;
						v37 = *(int32_t *)(v2 + v15 + 0x1000) + v34 + 32 * v34 + 3 + v33;
						v38 = (0x200000 * v35 ^ -0x200000) + 0x11111111 | v35 / 2048;
						*v36 = v56 ^ v37 + v35;
						v16 = __asm_rlwinm(v38, 2, 22, 29);
						v39 = (int32_t *)(result3 + 8);
						v57 = *v39;
						v40 = *(int32_t *)(v2 + v16 + 0x1000) + v37 + 32 * v37 + 3 + v56;
						v41 = (0x200000 * v38 ^ -0x200000) + 0x11111111 | v38 / 2048;
						*v39 = v57 ^ v40 + v38;
						v17 = __asm_rlwinm(v41, 2, 22, 29);
						v42 = (int32_t *)(result3 + 12);
						v58 = *v42;
						v43 = *(int32_t *)(v2 + v17 + 0x1000) + v40 + 32 * v40 + 3 + v57;
						*v42 = v58 ^ v43 + v41;
						v3 = v43 + (32 * v43 | 3) + v58;
						v44 = 0x11111111 + (0x200000 * v41 ^ -0x200000) | v41 / 2048;
						g38 = v44;
						result3 += 16;
						v18 = v12 - 1;
						// branch -> 0x4d078
						while (v18 != 0) {
							// 0x4d078
							v13 = __asm_rlwinm(v44, 2, 22, 29);
							v14 = (int32_t *)result3;
							v33 = *v14;
							v9 = g38;
							v34 = v3 + *(int32_t *)(v2 + v13 + 0x1000);
							v35 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
							*v14 = v34 + v9 ^ v33;
							v15 = __asm_rlwinm(v35, 2, 22, 29);
							v36 = (int32_t *)(result3 + 4);
							v56 = *v36;
							v37 = *(int32_t *)(v2 + v15 + 0x1000) + v34 + 32 * v34 + 3 + v33;
							v38 = (0x200000 * v35 ^ -0x200000) + 0x11111111 | v35 / 2048;
							*v36 = v56 ^ v37 + v35;
							v16 = __asm_rlwinm(v38, 2, 22, 29);
							v39 = (int32_t *)(result3 + 8);
							v57 = *v39;
							v40 = *(int32_t *)(v2 + v16 + 0x1000) + v37 + 32 * v37 + 3 + v56;
							v41 = (0x200000 * v38 ^ -0x200000) + 0x11111111 | v38 / 2048;
							*v39 = v57 ^ v40 + v38;
							v17 = __asm_rlwinm(v41, 2, 22, 29);
							v42 = (int32_t *)(result3 + 12);
							v58 = *v42;
							v43 = *(int32_t *)(v2 + v17 + 0x1000) + v40 + 32 * v40 + 3 + v57;
							*v42 = v58 ^ v43 + v41;
							v3 = v43 + (32 * v43 | 3) + v58;
							v44 = 0x11111111 + (0x200000 * v41 ^ -0x200000) | v41 / 2048;
							g38 = v44;
							result3 += 16;
							v18--;
							// continue -> 0x4d078
						}
						// 0x4d1a0
						v19 = v6 % 4;
						if (v19 != 0) {
							// 0x4d1a8
							v20 = __asm_rlwinm(v44, 2, 22, 29);
							v21 = (int32_t *)result3;
							v10 = g38;
							v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
							*v21 = v46 + v10 ^ *v21;
							v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
							g38 = v47;
							result3 += 4;
							v22 = v19 - 1;
							// branch -> 0x4d1ac
							while (v22 != 0) {
								// 0x4d1ac
								v20 = __asm_rlwinm(v47, 2, 22, 29);
								v21 = (int32_t *)result3;
								v45 = *v21;
								v10 = g38;
								v46 = v46 + (32 * v46 | 3) + v45 + *(int32_t *)(v2 + v20 + 0x1000);
								*v21 = v46 + v10 ^ v45;
								v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
								g38 = v47;
								result3 += 4;
								v22--;
								// continue -> 0x4d1ac
							}
							// 0x4d1fc
							result = v1;
							v6 = v4;
							result3 = result;
							if (result < 1) {
								// 0x4d298
								return result;
							}
							// 0x4d20c
							v23 = __asm_rlwinm_(result, 29, 3, 31);
							if (v23 == 0) {
								// 0x4d20c
								// branch -> 0x4d284
								// 0x4d284
								v66 = __asm_lwbrx(v23, v6);
								*(int32_t *)v6 = v66;
								v63 = v6 + 4;
								v6 = v63;
								v64 = result3 - 1;
								// branch -> 0x4d288
								while (v64 != 0) {
									// 0x4d288
									v66 = __asm_lwbrx(v66, v63);
									*(int32_t *)v6 = v66;
									v63 = v6 + 4;
									v6 = v63;
									v64--;
									// continue -> 0x4d288
								}
								// 0x4d298
								// branch -> 0x4d298
								// 0x4d298
								return result3;
							}
							// 0x4d218
							// branch -> 0x4d218
							while (true) {
								// 0x4d218
								v48 = __asm_lwbrx(v23, v6);
								*(int32_t *)v6 = v48;
								v11 = v6;
								v24 = v11 + 4;
								v49 = __asm_lwbrx(v48, v24);
								*(int32_t *)v24 = v49;
								v25 = v11 + 8;
								v50 = __asm_lwbrx(v49, v25);
								*(int32_t *)v25 = v50;
								v26 = v11 + 12;
								v51 = __asm_lwbrx(v50, v26);
								*(int32_t *)v26 = v51;
								v27 = v11 + 16;
								v52 = __asm_lwbrx(v51, v27);
								*(int32_t *)v27 = v52;
								v28 = v11 + 20;
								v53 = __asm_lwbrx(v52, v28);
								*(int32_t *)v28 = v53;
								v29 = v11 + 24;
								v54 = __asm_lwbrx(v53, v29);
								*(int32_t *)v29 = v54;
								v30 = v11 + 28;
								v55 = __asm_lwbrx(v54, v30);
								v60 = v55;
								*(int32_t *)v30 = v55;
								v31 = v11 + 32;
								v6 = v31;
								v32 = v23 - 1;
								v7 = v32;
								if (v32 != 0) {
									goto lab_0x4d218_19;
								}
								// 0x4d27c
								result2 = result3 % 8;
								if (result2 != 0) {
									// 0x4d284
									v66 = __asm_lwbrx(v60, v31);
									*(int32_t *)v6 = v66;
									v63 = v6 + 4;
									v6 = v63;
									v64 = result2 - 1;
									// branch -> 0x4d288
									while (v64 != 0) {
										// 0x4d288
										v66 = __asm_lwbrx(v66, v63);
										*(int32_t *)v6 = v66;
										v63 = v6 + 4;
										v6 = v63;
										v64--;
										// continue -> 0x4d288
									}
									// 0x4d298
									// branch -> 0x4d298
									// 0x4d298
									return result2;
								}
							}
							// 0x4d298
							return 0;
						}
						// 0x4d1fc
						result = v1;
						v6 = v4;
						result3 = result;
						if (result < 1) {
							// 0x4d298
							return result;
						}
						// 0x4d20c
						v23 = __asm_rlwinm_(result, 29, 3, 31);
						if (v23 == 0) {
							// 0x4d20c
							// branch -> 0x4d284
							// 0x4d284
							v66 = __asm_lwbrx(v23, v6);
							*(int32_t *)v6 = v66;
							v63 = v6 + 4;
							v6 = v63;
							v64 = result3 - 1;
							// branch -> 0x4d288
							while (v64 != 0) {
								// 0x4d288
								v66 = __asm_lwbrx(v66, v63);
								*(int32_t *)v6 = v66;
								v63 = v6 + 4;
								v6 = v63;
								v64--;
								// continue -> 0x4d288
							}
							// 0x4d298
							// branch -> 0x4d298
							// 0x4d298
							return result3;
						}
						// 0x4d218
						// branch -> 0x4d218
						while (true) {
							// 0x4d218
							v48 = __asm_lwbrx(v23, v6);
							*(int32_t *)v6 = v48;
							v11 = v6;
							v24 = v11 + 4;
							v49 = __asm_lwbrx(v48, v24);
							*(int32_t *)v24 = v49;
							v25 = v11 + 8;
							v50 = __asm_lwbrx(v49, v25);
							*(int32_t *)v25 = v50;
							v26 = v11 + 12;
							v51 = __asm_lwbrx(v50, v26);
							*(int32_t *)v26 = v51;
							v27 = v11 + 16;
							v52 = __asm_lwbrx(v51, v27);
							*(int32_t *)v27 = v52;
							v28 = v11 + 20;
							v53 = __asm_lwbrx(v52, v28);
							*(int32_t *)v28 = v53;
							v29 = v11 + 24;
							v54 = __asm_lwbrx(v53, v29);
							*(int32_t *)v29 = v54;
							v30 = v11 + 28;
							v55 = __asm_lwbrx(v54, v30);
							v60 = v55;
							*(int32_t *)v30 = v55;
							v31 = v11 + 32;
							v6 = v31;
							v32 = v23 - 1;
							v7 = v32;
							if (v32 != 0) {
								goto lab_0x4d218_19;
							}
							// 0x4d27c
							result2 = result3 % 8;
							if (result2 != 0) {
								// 0x4d284
								v66 = __asm_lwbrx(v60, v31);
								*(int32_t *)v6 = v66;
								v63 = v6 + 4;
								v6 = v63;
								v64 = result2 - 1;
								// branch -> 0x4d288
								while (v64 != 0) {
									// 0x4d288
									v66 = __asm_lwbrx(v66, v63);
									*(int32_t *)v6 = v66;
									v63 = v6 + 4;
									v6 = v63;
									v64--;
									// continue -> 0x4d288
								}
								// 0x4d298
								// branch -> 0x4d298
								// 0x4d298
								return result2;
							}
						}
						// 0x4d298
						return 0;
					}
					// 0x4d1fc
					result = v1;
					v6 = v4;
					result3 = result;
					if (result < 1) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x4d20c
					v23 = __asm_rlwinm_(result, 29, 3, 31);
					v60 = v23;
					v7 = v23;
					if (v23 == 0) {
						// 0x4d20c
						// branch -> 0x4d284
						// 0x4d284
						v66 = __asm_lwbrx(v60, v6);
						*(int32_t *)v6 = v66;
						v63 = v6 + 4;
						v6 = v63;
						v64 = result3 - 1;
						// branch -> 0x4d288
						while (v64 != 0) {
							// 0x4d288
							v66 = __asm_lwbrx(v66, v63);
							*(int32_t *)v6 = v66;
							v63 = v6 + 4;
							v6 = v63;
							v64--;
							// continue -> 0x4d288
						}
						// 0x4d298
						// branch -> 0x4d298
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x4d218
						// branch -> 0x4d218
						while (true) {
							// 0x4d218
							v48 = __asm_lwbrx(v23, v6);
							*(int32_t *)v6 = v48;
							v11 = v6;
							v24 = v11 + 4;
							v49 = __asm_lwbrx(v48, v24);
							*(int32_t *)v24 = v49;
							v25 = v11 + 8;
							v50 = __asm_lwbrx(v49, v25);
							*(int32_t *)v25 = v50;
							v26 = v11 + 12;
							v51 = __asm_lwbrx(v50, v26);
							*(int32_t *)v26 = v51;
							v27 = v11 + 16;
							v52 = __asm_lwbrx(v51, v27);
							*(int32_t *)v27 = v52;
							v28 = v11 + 20;
							v53 = __asm_lwbrx(v52, v28);
							*(int32_t *)v28 = v53;
							v29 = v11 + 24;
							v54 = __asm_lwbrx(v53, v29);
							*(int32_t *)v29 = v54;
							v30 = v11 + 28;
							v55 = __asm_lwbrx(v54, v30);
							v60 = v55;
							*(int32_t *)v30 = v55;
							v31 = v11 + 32;
							v6 = v31;
							v32 = v7 - 1;
							v7 = v32;
							if (v32 != 0) {
								goto lab_0x4d218_19;
							}
							// 0x4d27c
							result2 = result3 % 8;
							result3 = result2;
							if (result2 != 0) {
								// 0x4d284
								v66 = __asm_lwbrx(v60, v31);
								*(int32_t *)v6 = v66;
								v63 = v6 + 4;
								v6 = v63;
								v64 = result2 - 1;
								// branch -> 0x4d288
								while (v64 != 0) {
									// 0x4d288
									v66 = __asm_lwbrx(v66, v63);
									*(int32_t *)v6 = v66;
									v63 = v6 + 4;
									v6 = v63;
									v64--;
									// continue -> 0x4d288
								}
								// 0x4d298
								// branch -> 0x4d298
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x4d060
				v8 = v1;
				v6 = v8;
				if (v8 != 0) {
					// 0x4d06c
					v12 = __asm_rlwinm_(v8, 30, 2, 31);
					v7 = v12;
					if (v12 == 0) {
						// 0x4d06c
						// branch -> 0x4d1a8
						// 0x4d1a8
						v20 = __asm_rlwinm(g38, 2, 22, 29);
						v21 = (int32_t *)result3;
						v45 = *v21;
						v10 = g38;
						v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
						*v21 = v46 + v10 ^ v45;
						v3 = v46 + (32 * v46 | 3) + v45;
						v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
						g38 = v47;
						result3 += 4;
						v22 = v6 - 1;
						// branch -> 0x4d1ac
						while (v22 != 0) {
							// 0x4d1ac
							v20 = __asm_rlwinm(v47, 2, 22, 29);
							v21 = (int32_t *)result3;
							v45 = *v21;
							v10 = g38;
							v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
							*v21 = v46 + v10 ^ v45;
							v3 = v46 + (32 * v46 | 3) + v45;
							v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
							g38 = v47;
							result3 += 4;
							v22--;
							// continue -> 0x4d1ac
						}
						// 0x4d1fc
						result = v1;
						v6 = v4;
						result3 = result;
						if (result < 1) {
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0x4d20c
						v23 = __asm_rlwinm_(result, 29, 3, 31);
						v60 = v23;
						v7 = v23;
						if (v23 == 0) {
							// 0x4d20c
							// branch -> 0x4d284
							// 0x4d284
							v66 = __asm_lwbrx(v60, v6);
							*(int32_t *)v6 = v66;
							v63 = v6 + 4;
							v6 = v63;
							v64 = result3 - 1;
							// branch -> 0x4d288
							while (v64 != 0) {
								// 0x4d288
								v66 = __asm_lwbrx(v66, v63);
								*(int32_t *)v6 = v66;
								v63 = v6 + 4;
								v6 = v63;
								v64--;
								// continue -> 0x4d288
							}
							// 0x4d298
							// branch -> 0x4d298
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x4d218
							// branch -> 0x4d218
							while (true) {
								// 0x4d218
								v48 = __asm_lwbrx(v23, v6);
								*(int32_t *)v6 = v48;
								v11 = v6;
								v24 = v11 + 4;
								v49 = __asm_lwbrx(v48, v24);
								*(int32_t *)v24 = v49;
								v25 = v11 + 8;
								v50 = __asm_lwbrx(v49, v25);
								*(int32_t *)v25 = v50;
								v26 = v11 + 12;
								v51 = __asm_lwbrx(v50, v26);
								*(int32_t *)v26 = v51;
								v27 = v11 + 16;
								v52 = __asm_lwbrx(v51, v27);
								*(int32_t *)v27 = v52;
								v28 = v11 + 20;
								v53 = __asm_lwbrx(v52, v28);
								*(int32_t *)v28 = v53;
								v29 = v11 + 24;
								v54 = __asm_lwbrx(v53, v29);
								*(int32_t *)v29 = v54;
								v30 = v11 + 28;
								v55 = __asm_lwbrx(v54, v30);
								v60 = v55;
								*(int32_t *)v30 = v55;
								v31 = v11 + 32;
								v6 = v31;
								v32 = v7 - 1;
								v7 = v32;
								if (v32 != 0) {
									goto lab_0x4d218_19;
								}
								// 0x4d27c
								result2 = result3 % 8;
								if (result2 != 0) {
									// 0x4d284
									v66 = __asm_lwbrx(v60, v31);
									*(int32_t *)v6 = v66;
									v63 = v6 + 4;
									v6 = v63;
									v64 = result2 - 1;
									// branch -> 0x4d288
									while (v64 != 0) {
										// 0x4d288
										v66 = __asm_lwbrx(v66, v63);
										*(int32_t *)v6 = v66;
										v63 = v6 + 4;
										v6 = v63;
										v64--;
										// continue -> 0x4d288
									}
									// 0x4d298
									// branch -> 0x4d298
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x4d078
						v13 = __asm_rlwinm(g38, 2, 22, 29);
						v14 = (int32_t *)result3;
						v33 = *v14;
						v9 = g38;
						v34 = v3 + *(int32_t *)(v2 + v13 + 0x1000);
						v35 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
						*v14 = v34 + v9 ^ v33;
						v15 = __asm_rlwinm(v35, 2, 22, 29);
						v36 = (int32_t *)(result3 + 4);
						v56 = *v36;
						v37 = *(int32_t *)(v2 + v15 + 0x1000) + v34 + 32 * v34 + 3 + v33;
						v38 = (0x200000 * v35 ^ -0x200000) + 0x11111111 | v35 / 2048;
						*v36 = v56 ^ v37 + v35;
						v16 = __asm_rlwinm(v38, 2, 22, 29);
						v39 = (int32_t *)(result3 + 8);
						v57 = *v39;
						v40 = *(int32_t *)(v2 + v16 + 0x1000) + v37 + 32 * v37 + 3 + v56;
						v41 = (0x200000 * v38 ^ -0x200000) + 0x11111111 | v38 / 2048;
						*v39 = v57 ^ v40 + v38;
						v17 = __asm_rlwinm(v41, 2, 22, 29);
						v42 = (int32_t *)(result3 + 12);
						v58 = *v42;
						v43 = *(int32_t *)(v2 + v17 + 0x1000) + v40 + 32 * v40 + 3 + v57;
						*v42 = v58 ^ v43 + v41;
						v3 = v43 + (32 * v43 | 3) + v58;
						v44 = 0x11111111 + (0x200000 * v41 ^ -0x200000) | v41 / 2048;
						g38 = v44;
						result3 += 16;
						v18 = v7 - 1;
						// branch -> 0x4d078
						while (v18 != 0) {
							// 0x4d078
							v13 = __asm_rlwinm(v44, 2, 22, 29);
							v14 = (int32_t *)result3;
							v33 = *v14;
							v9 = g38;
							v34 = v3 + *(int32_t *)(v2 + v13 + 0x1000);
							v35 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
							*v14 = v34 + v9 ^ v33;
							v15 = __asm_rlwinm(v35, 2, 22, 29);
							v36 = (int32_t *)(result3 + 4);
							v56 = *v36;
							v37 = *(int32_t *)(v2 + v15 + 0x1000) + v34 + 32 * v34 + 3 + v33;
							v38 = (0x200000 * v35 ^ -0x200000) + 0x11111111 | v35 / 2048;
							*v36 = v56 ^ v37 + v35;
							v16 = __asm_rlwinm(v38, 2, 22, 29);
							v39 = (int32_t *)(result3 + 8);
							v57 = *v39;
							v40 = *(int32_t *)(v2 + v16 + 0x1000) + v37 + 32 * v37 + 3 + v56;
							v41 = (0x200000 * v38 ^ -0x200000) + 0x11111111 | v38 / 2048;
							*v39 = v57 ^ v40 + v38;
							v17 = __asm_rlwinm(v41, 2, 22, 29);
							v42 = (int32_t *)(result3 + 12);
							v58 = *v42;
							v43 = *(int32_t *)(v2 + v17 + 0x1000) + v40 + 32 * v40 + 3 + v57;
							*v42 = v58 ^ v43 + v41;
							v3 = v43 + (32 * v43 | 3) + v58;
							v44 = 0x11111111 + (0x200000 * v41 ^ -0x200000) | v41 / 2048;
							g38 = v44;
							result3 += 16;
							v18--;
							// continue -> 0x4d078
						}
						// 0x4d1a0
						v19 = v6 % 4;
						if (v19 != 0) {
							// 0x4d1a8
							v20 = __asm_rlwinm(v44, 2, 22, 29);
							v21 = (int32_t *)result3;
							v45 = *v21;
							v10 = g38;
							v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
							*v21 = v46 + v10 ^ v45;
							v3 = v46 + (32 * v46 | 3) + v45;
							v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
							g38 = v47;
							result3 += 4;
							v22 = v19 - 1;
							// branch -> 0x4d1ac
							while (v22 != 0) {
								// 0x4d1ac
								v20 = __asm_rlwinm(v47, 2, 22, 29);
								v21 = (int32_t *)result3;
								v45 = *v21;
								v10 = g38;
								v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
								*v21 = v46 + v10 ^ v45;
								v3 = v46 + (32 * v46 | 3) + v45;
								v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
								g38 = v47;
								result3 += 4;
								v22--;
								// continue -> 0x4d1ac
							}
							// 0x4d1fc
							result = v1;
							v6 = v4;
							result3 = result;
							if (result < 1) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x4d20c
							v23 = __asm_rlwinm_(result, 29, 3, 31);
							v60 = v23;
							v7 = v23;
							if (v23 == 0) {
								// 0x4d20c
								// branch -> 0x4d284
								// 0x4d284
								v66 = __asm_lwbrx(v60, v6);
								*(int32_t *)v6 = v66;
								v63 = v6 + 4;
								v6 = v63;
								v64 = result3 - 1;
								// branch -> 0x4d288
								while (v64 != 0) {
									// 0x4d288
									v66 = __asm_lwbrx(v66, v63);
									*(int32_t *)v6 = v66;
									v63 = v6 + 4;
									v6 = v63;
									v64--;
									// continue -> 0x4d288
								}
								// 0x4d298
								// branch -> 0x4d298
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x4d218
								// branch -> 0x4d218
								while (true) {
									// 0x4d218
									v48 = __asm_lwbrx(v23, v6);
									*(int32_t *)v6 = v48;
									v11 = v6;
									v24 = v11 + 4;
									v49 = __asm_lwbrx(v48, v24);
									*(int32_t *)v24 = v49;
									v25 = v11 + 8;
									v50 = __asm_lwbrx(v49, v25);
									*(int32_t *)v25 = v50;
									v26 = v11 + 12;
									v51 = __asm_lwbrx(v50, v26);
									*(int32_t *)v26 = v51;
									v27 = v11 + 16;
									v52 = __asm_lwbrx(v51, v27);
									*(int32_t *)v27 = v52;
									v28 = v11 + 20;
									v53 = __asm_lwbrx(v52, v28);
									*(int32_t *)v28 = v53;
									v29 = v11 + 24;
									v54 = __asm_lwbrx(v53, v29);
									*(int32_t *)v29 = v54;
									v30 = v11 + 28;
									v55 = __asm_lwbrx(v54, v30);
									v60 = v55;
									*(int32_t *)v30 = v55;
									v31 = v11 + 32;
									v6 = v31;
									v32 = v7 - 1;
									v7 = v32;
									if (v32 != 0) {
										goto lab_0x4d218_19;
									}
									// 0x4d27c
									result2 = result3 % 8;
									if (result2 != 0) {
										// 0x4d284
										v66 = __asm_lwbrx(v60, v31);
										*(int32_t *)v6 = v66;
										v63 = v6 + 4;
										v6 = v63;
										v64 = result2 - 1;
										// branch -> 0x4d288
										while (v64 != 0) {
											// 0x4d288
											v66 = __asm_lwbrx(v66, v63);
											*(int32_t *)v6 = v66;
											v63 = v6 + 4;
											v6 = v63;
											v64--;
											// continue -> 0x4d288
										}
										// 0x4d298
										// branch -> 0x4d298
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x4d1fc
					result = v1;
					v6 = v4;
					result3 = result;
					if (result < 1) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x4d20c
					v23 = __asm_rlwinm_(result, 29, 3, 31);
					v60 = v23;
					v7 = v23;
					if (v23 == 0) {
						// 0x4d20c
						// branch -> 0x4d284
						// 0x4d284
						v66 = __asm_lwbrx(v60, v6);
						*(int32_t *)v6 = v66;
						v63 = v6 + 4;
						v6 = v63;
						v64 = result3 - 1;
						// branch -> 0x4d288
						while (v64 != 0) {
							// 0x4d288
							v66 = __asm_lwbrx(v66, v63);
							*(int32_t *)v6 = v66;
							v63 = v6 + 4;
							v6 = v63;
							v64--;
							// continue -> 0x4d288
						}
						// 0x4d298
						// branch -> 0x4d298
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x4d218
						// branch -> 0x4d218
						while (true) {
							// 0x4d218
							v48 = __asm_lwbrx(v23, v6);
							*(int32_t *)v6 = v48;
							v11 = v6;
							v24 = v11 + 4;
							v49 = __asm_lwbrx(v48, v24);
							*(int32_t *)v24 = v49;
							v25 = v11 + 8;
							v50 = __asm_lwbrx(v49, v25);
							*(int32_t *)v25 = v50;
							v26 = v11 + 12;
							v51 = __asm_lwbrx(v50, v26);
							*(int32_t *)v26 = v51;
							v27 = v11 + 16;
							v52 = __asm_lwbrx(v51, v27);
							*(int32_t *)v27 = v52;
							v28 = v11 + 20;
							v53 = __asm_lwbrx(v52, v28);
							*(int32_t *)v28 = v53;
							v29 = v11 + 24;
							v54 = __asm_lwbrx(v53, v29);
							*(int32_t *)v29 = v54;
							v30 = v11 + 28;
							v55 = __asm_lwbrx(v54, v30);
							v60 = v55;
							*(int32_t *)v30 = v55;
							v31 = v11 + 32;
							v6 = v31;
							v32 = v7 - 1;
							v7 = v32;
							if (v32 != 0) {
								goto lab_0x4d218_19;
							}
							// 0x4d27c
							result2 = result3 % 8;
							if (result2 != 0) {
								// 0x4d284
								v66 = __asm_lwbrx(v60, v31);
								*(int32_t *)v6 = v66;
								v63 = v6 + 4;
								v6 = v63;
								v64 = result2 - 1;
								// branch -> 0x4d288
								while (v64 != 0) {
									// 0x4d288
									v66 = __asm_lwbrx(v66, v63);
									*(int32_t *)v6 = v66;
									v63 = v6 + 4;
									v6 = v63;
									v64--;
									// continue -> 0x4d288
								}
								// 0x4d298
								// branch -> 0x4d298
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x4d1fc
				result = v1;
				v6 = v4;
				result3 = result;
				if (result < 1) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x4d20c
				v23 = __asm_rlwinm_(result, 29, 3, 31);
				v60 = v23;
				v7 = v23;
				if (v23 == 0) {
					// 0x4d20c
					// branch -> 0x4d284
					// 0x4d284
					v66 = __asm_lwbrx(v60, v6);
					*(int32_t *)v6 = v66;
					v63 = v6 + 4;
					v6 = v63;
					v64 = result3 - 1;
					// branch -> 0x4d288
					while (v64 != 0) {
						// 0x4d288
						v66 = __asm_lwbrx(v66, v63);
						*(int32_t *)v6 = v66;
						v63 = v6 + 4;
						v6 = v63;
						v64--;
						// continue -> 0x4d288
					}
					// 0x4d298
					// branch -> 0x4d298
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					// 0x4d218
					// branch -> 0x4d218
					while (true) {
						// 0x4d218
						v48 = __asm_lwbrx(v23, v6);
						*(int32_t *)v6 = v48;
						v11 = v6;
						v24 = v11 + 4;
						v49 = __asm_lwbrx(v48, v24);
						*(int32_t *)v24 = v49;
						v25 = v11 + 8;
						v50 = __asm_lwbrx(v49, v25);
						*(int32_t *)v25 = v50;
						v26 = v11 + 12;
						v51 = __asm_lwbrx(v50, v26);
						*(int32_t *)v26 = v51;
						v27 = v11 + 16;
						v52 = __asm_lwbrx(v51, v27);
						*(int32_t *)v27 = v52;
						v28 = v11 + 20;
						v53 = __asm_lwbrx(v52, v28);
						*(int32_t *)v28 = v53;
						v29 = v11 + 24;
						v54 = __asm_lwbrx(v53, v29);
						*(int32_t *)v29 = v54;
						v30 = v11 + 28;
						v55 = __asm_lwbrx(v54, v30);
						v60 = v55;
						*(int32_t *)v30 = v55;
						v31 = v11 + 32;
						v6 = v31;
						v32 = v7 - 1;
						v7 = v32;
						if (v32 != 0) {
							goto lab_0x4d218_19;
						}
						// 0x4d27c
						result2 = result3 % 8;
						result3 = result2;
						if (result2 != 0) {
							// 0x4d284
							v66 = __asm_lwbrx(v60, v31);
							*(int32_t *)v6 = v66;
							v63 = v6 + 4;
							v6 = v63;
							v64 = result2 - 1;
							// branch -> 0x4d288
							while (v64 != 0) {
								// 0x4d288
								v66 = __asm_lwbrx(v66, v63);
								*(int32_t *)v6 = v66;
								v63 = v6 + 4;
								v6 = v63;
								v64--;
								// continue -> 0x4d288
							}
							// 0x4d298
							// branch -> 0x4d298
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x4cfe0
				v69 = v86;
				v59 = v60;
				// branch -> 0x4cfe0
				continue;
			}
		}
		// 0x4d060
		v8 = v1;
		v6 = v8;
		if (v8 != 0) {
			// 0x4d06c
			v12 = __asm_rlwinm_(v8, 30, 2, 31);
			v7 = v12;
			if (v12 == 0) {
				// 0x4d06c
				// branch -> 0x4d1a8
				// 0x4d1a8
				v20 = __asm_rlwinm(g38, 2, 22, 29);
				v21 = (int32_t *)result3;
				v45 = *v21;
				v10 = g38;
				v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
				*v21 = v46 + v10 ^ v45;
				v3 = v46 + (32 * v46 | 3) + v45;
				v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
				g38 = v47;
				result3 += 4;
				v22 = v6 - 1;
				// branch -> 0x4d1ac
				while (v22 != 0) {
					// 0x4d1ac
					v20 = __asm_rlwinm(v47, 2, 22, 29);
					v21 = (int32_t *)result3;
					v45 = *v21;
					v10 = g38;
					v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
					*v21 = v46 + v10 ^ v45;
					v3 = v46 + (32 * v46 | 3) + v45;
					v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
					g38 = v47;
					result3 += 4;
					v22--;
					// continue -> 0x4d1ac
				}
				// 0x4d1fc
				result = v1;
				v6 = v4;
				result3 = result;
				if (result < 1) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x4d20c
				v23 = __asm_rlwinm_(result, 29, 3, 31);
				v60 = v23;
				v7 = v23;
				if (v23 == 0) {
					// 0x4d20c
					// branch -> 0x4d284
					// 0x4d284
					v66 = __asm_lwbrx(v60, v6);
					*(int32_t *)v6 = v66;
					v63 = v6 + 4;
					v6 = v63;
					v64 = result3 - 1;
					// branch -> 0x4d288
					while (v64 != 0) {
						// 0x4d288
						v66 = __asm_lwbrx(v66, v63);
						*(int32_t *)v6 = v66;
						v63 = v6 + 4;
						v6 = v63;
						v64--;
						// continue -> 0x4d288
					}
					// 0x4d298
					// branch -> 0x4d298
				} else {
					// 0x4d218
					// branch -> 0x4d218
					while (true) {
						// 0x4d218
						v48 = __asm_lwbrx(v23, v6);
						*(int32_t *)v6 = v48;
						v11 = v6;
						v24 = v11 + 4;
						v49 = __asm_lwbrx(v48, v24);
						*(int32_t *)v24 = v49;
						v25 = v11 + 8;
						v50 = __asm_lwbrx(v49, v25);
						*(int32_t *)v25 = v50;
						v26 = v11 + 12;
						v51 = __asm_lwbrx(v50, v26);
						*(int32_t *)v26 = v51;
						v27 = v11 + 16;
						v52 = __asm_lwbrx(v51, v27);
						*(int32_t *)v27 = v52;
						v28 = v11 + 20;
						v53 = __asm_lwbrx(v52, v28);
						*(int32_t *)v28 = v53;
						v29 = v11 + 24;
						v54 = __asm_lwbrx(v53, v29);
						*(int32_t *)v29 = v54;
						v30 = v11 + 28;
						v55 = __asm_lwbrx(v54, v30);
						*(int32_t *)v30 = v55;
						v31 = v11 + 32;
						v6 = v31;
						v32 = v7 - 1;
						v7 = v32;
						if (v32 != 0) {
							goto lab_0x4d218_19;
						}
						// 0x4d27c
						if (result3 % 8 != 0) {
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x4d078
				v13 = __asm_rlwinm(g38, 2, 22, 29);
				v14 = (int32_t *)result3;
				v33 = *v14;
				v9 = g38;
				v34 = v3 + *(int32_t *)(v2 + v13 + 0x1000);
				v35 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
				*v14 = v34 + v9 ^ v33;
				v15 = __asm_rlwinm(v35, 2, 22, 29);
				v36 = (int32_t *)(result3 + 4);
				v56 = *v36;
				v37 = *(int32_t *)(v2 + v15 + 0x1000) + v34 + 32 * v34 + 3 + v33;
				v38 = (0x200000 * v35 ^ -0x200000) + 0x11111111 | v35 / 2048;
				*v36 = v56 ^ v37 + v35;
				v16 = __asm_rlwinm(v38, 2, 22, 29);
				v39 = (int32_t *)(result3 + 8);
				v57 = *v39;
				v40 = *(int32_t *)(v2 + v16 + 0x1000) + v37 + 32 * v37 + 3 + v56;
				v41 = (0x200000 * v38 ^ -0x200000) + 0x11111111 | v38 / 2048;
				*v39 = v57 ^ v40 + v38;
				v17 = __asm_rlwinm(v41, 2, 22, 29);
				v42 = (int32_t *)(result3 + 12);
				v58 = *v42;
				v43 = *(int32_t *)(v2 + v17 + 0x1000) + v40 + 32 * v40 + 3 + v57;
				*v42 = v58 ^ v43 + v41;
				v3 = v43 + (32 * v43 | 3) + v58;
				v44 = 0x11111111 + (0x200000 * v41 ^ -0x200000) | v41 / 2048;
				g38 = v44;
				result3 += 16;
				v18 = v7 - 1;
				// branch -> 0x4d078
				while (v18 != 0) {
					// 0x4d078
					v13 = __asm_rlwinm(v44, 2, 22, 29);
					v14 = (int32_t *)result3;
					v33 = *v14;
					v9 = g38;
					v34 = v3 + *(int32_t *)(v2 + v13 + 0x1000);
					v35 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
					*v14 = v34 + v9 ^ v33;
					v15 = __asm_rlwinm(v35, 2, 22, 29);
					v36 = (int32_t *)(result3 + 4);
					v56 = *v36;
					v37 = *(int32_t *)(v2 + v15 + 0x1000) + v34 + 32 * v34 + 3 + v33;
					v38 = (0x200000 * v35 ^ -0x200000) + 0x11111111 | v35 / 2048;
					*v36 = v56 ^ v37 + v35;
					v16 = __asm_rlwinm(v38, 2, 22, 29);
					v39 = (int32_t *)(result3 + 8);
					v57 = *v39;
					v40 = *(int32_t *)(v2 + v16 + 0x1000) + v37 + 32 * v37 + 3 + v56;
					v41 = (0x200000 * v38 ^ -0x200000) + 0x11111111 | v38 / 2048;
					*v39 = v57 ^ v40 + v38;
					v17 = __asm_rlwinm(v41, 2, 22, 29);
					v42 = (int32_t *)(result3 + 12);
					v58 = *v42;
					v43 = *(int32_t *)(v2 + v17 + 0x1000) + v40 + 32 * v40 + 3 + v57;
					*v42 = v58 ^ v43 + v41;
					v3 = v43 + (32 * v43 | 3) + v58;
					v44 = 0x11111111 + (0x200000 * v41 ^ -0x200000) | v41 / 2048;
					g38 = v44;
					result3 += 16;
					v18--;
					// continue -> 0x4d078
				}
				// 0x4d1a0
				v19 = v6 % 4;
				if (v19 != 0) {
					// 0x4d1a8
					v20 = __asm_rlwinm(v44, 2, 22, 29);
					v21 = (int32_t *)result3;
					v45 = *v21;
					v10 = g38;
					v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
					*v21 = v46 + v10 ^ v45;
					v3 = v46 + (32 * v46 | 3) + v45;
					v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
					g38 = v47;
					result3 += 4;
					v22 = v19 - 1;
					// branch -> 0x4d1ac
					while (v22 != 0) {
						// 0x4d1ac
						v20 = __asm_rlwinm(v47, 2, 22, 29);
						v21 = (int32_t *)result3;
						v45 = *v21;
						v10 = g38;
						v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
						*v21 = v46 + v10 ^ v45;
						v3 = v46 + (32 * v46 | 3) + v45;
						v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
						g38 = v47;
						result3 += 4;
						v22--;
						// continue -> 0x4d1ac
					}
					// 0x4d1fc
					result = v1;
					v6 = v4;
					result3 = result;
					if (result < 1) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x4d20c
					v23 = __asm_rlwinm_(result, 29, 3, 31);
					v7 = v23;
					if (v23 == 0) {
						// 0x4d20c
						// branch -> 0x4d284
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x4d218
						// branch -> 0x4d218
						while (true) {
							// 0x4d218
							v48 = __asm_lwbrx(v23, v6);
							*(int32_t *)v6 = v48;
							v11 = v6;
							v24 = v11 + 4;
							v49 = __asm_lwbrx(v48, v24);
							*(int32_t *)v24 = v49;
							v25 = v11 + 8;
							v50 = __asm_lwbrx(v49, v25);
							*(int32_t *)v25 = v50;
							v26 = v11 + 12;
							v51 = __asm_lwbrx(v50, v26);
							*(int32_t *)v26 = v51;
							v27 = v11 + 16;
							v52 = __asm_lwbrx(v51, v27);
							*(int32_t *)v27 = v52;
							v28 = v11 + 20;
							v53 = __asm_lwbrx(v52, v28);
							*(int32_t *)v28 = v53;
							v29 = v11 + 24;
							v54 = __asm_lwbrx(v53, v29);
							*(int32_t *)v29 = v54;
							v30 = v11 + 28;
							v55 = __asm_lwbrx(v54, v30);
							*(int32_t *)v30 = v55;
							v31 = v11 + 32;
							v6 = v31;
							v32 = v7 - 1;
							v7 = v32;
							if (v32 != 0) {
								goto lab_0x4d218_19;
							}
							// 0x4d27c
							if (result3 % 8 != 0) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x4d1fc
			result = v1;
			v6 = v4;
			result3 = result;
			if (result < 1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x4d20c
			v23 = __asm_rlwinm_(result, 29, 3, 31);
			v7 = v23;
			if (v23 == 0) {
				// 0x4d20c
				// branch -> 0x4d284
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x4d218
				// branch -> 0x4d218
				while (true) {
					// 0x4d218
					v48 = __asm_lwbrx(v23, v6);
					*(int32_t *)v6 = v48;
					v11 = v6;
					v24 = v11 + 4;
					v49 = __asm_lwbrx(v48, v24);
					*(int32_t *)v24 = v49;
					v25 = v11 + 8;
					v50 = __asm_lwbrx(v49, v25);
					*(int32_t *)v25 = v50;
					v26 = v11 + 12;
					v51 = __asm_lwbrx(v50, v26);
					*(int32_t *)v26 = v51;
					v27 = v11 + 16;
					v52 = __asm_lwbrx(v51, v27);
					*(int32_t *)v27 = v52;
					v28 = v11 + 20;
					v53 = __asm_lwbrx(v52, v28);
					*(int32_t *)v28 = v53;
					v29 = v11 + 24;
					v54 = __asm_lwbrx(v53, v29);
					*(int32_t *)v29 = v54;
					v30 = v11 + 28;
					v55 = __asm_lwbrx(v54, v30);
					*(int32_t *)v30 = v55;
					v31 = v11 + 32;
					v6 = v31;
					v32 = v7 - 1;
					v7 = v32;
					if (v32 != 0) {
						goto lab_0x4d218_19;
					}
					// 0x4d27c
					if (result3 % 8 != 0) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x4d1fc
		result = v1;
		v6 = v4;
		result3 = result;
		if (result < 1) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x4d20c
		v23 = __asm_rlwinm_(result, 29, 3, 31);
		v7 = v23;
		if (v23 == 0) {
			// 0x4d20c
			// branch -> 0x4d284
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			// 0x4d218
			// branch -> 0x4d218
			while (true) {
				// 0x4d218
				v48 = __asm_lwbrx(v23, v6);
				*(int32_t *)v6 = v48;
				v11 = v6;
				v24 = v11 + 4;
				v49 = __asm_lwbrx(v48, v24);
				*(int32_t *)v24 = v49;
				v25 = v11 + 8;
				v50 = __asm_lwbrx(v49, v25);
				*(int32_t *)v25 = v50;
				v26 = v11 + 12;
				v51 = __asm_lwbrx(v50, v26);
				*(int32_t *)v26 = v51;
				v27 = v11 + 16;
				v52 = __asm_lwbrx(v51, v27);
				*(int32_t *)v27 = v52;
				v28 = v11 + 20;
				v53 = __asm_lwbrx(v52, v28);
				*(int32_t *)v28 = v53;
				v29 = v11 + 24;
				v54 = __asm_lwbrx(v53, v29);
				*(int32_t *)v29 = v54;
				v30 = v11 + 28;
				v55 = __asm_lwbrx(v54, v30);
				*(int32_t *)v30 = v55;
				v31 = v11 + 32;
				v6 = v31;
				v32 = v7 - 1;
				v7 = v32;
				if (v32 != 0) {
					goto lab_0x4d218_19;
				}
				// 0x4d27c
				result2 = result3 % 8;
				result3 = result2;
				if (result2 != 0) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x4d060
	v8 = v1;
	v6 = v8;
	if (v8 != 0) {
		// 0x4d06c
		v12 = __asm_rlwinm_(v8, 30, 2, 31);
		if (v12 == 0) {
			// 0x4d06c
			// branch -> 0x4d1a8
			// 0x4d1a8
			v20 = __asm_rlwinm(g38, 2, 22, 29);
			v21 = (int32_t *)result3;
			v10 = g38;
			v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
			*v21 = v46 + v10 ^ *v21;
			v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
			g38 = v47;
			result3 += 4;
			v22 = v6 - 1;
			// branch -> 0x4d1ac
			while (v22 != 0) {
				// 0x4d1ac
				v20 = __asm_rlwinm(v47, 2, 22, 29);
				v21 = (int32_t *)result3;
				v45 = *v21;
				v10 = g38;
				v46 = v46 + (32 * v46 | 3) + v45 + *(int32_t *)(v2 + v20 + 0x1000);
				*v21 = v46 + v10 ^ v45;
				v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
				g38 = v47;
				result3 += 4;
				v22--;
				// continue -> 0x4d1ac
			}
			// 0x4d1fc
			result = v1;
			v6 = v4;
			result3 = result;
			if (result < 1) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x4d20c
			v23 = __asm_rlwinm_(result, 29, 3, 31);
			v7 = v23;
			if (v23 == 0) {
				// 0x4d20c
				// branch -> 0x4d284
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x4d218
				// branch -> 0x4d218
				while (true) {
					// 0x4d218
					v48 = __asm_lwbrx(v23, v6);
					*(int32_t *)v6 = v48;
					v11 = v6;
					v24 = v11 + 4;
					v49 = __asm_lwbrx(v48, v24);
					*(int32_t *)v24 = v49;
					v25 = v11 + 8;
					v50 = __asm_lwbrx(v49, v25);
					*(int32_t *)v25 = v50;
					v26 = v11 + 12;
					v51 = __asm_lwbrx(v50, v26);
					*(int32_t *)v26 = v51;
					v27 = v11 + 16;
					v52 = __asm_lwbrx(v51, v27);
					*(int32_t *)v27 = v52;
					v28 = v11 + 20;
					v53 = __asm_lwbrx(v52, v28);
					*(int32_t *)v28 = v53;
					v29 = v11 + 24;
					v54 = __asm_lwbrx(v53, v29);
					*(int32_t *)v29 = v54;
					v30 = v11 + 28;
					v55 = __asm_lwbrx(v54, v30);
					*(int32_t *)v30 = v55;
					v31 = v11 + 32;
					v6 = v31;
					v32 = v7 - 1;
					v7 = v32;
					if (v32 != 0) {
						goto lab_0x4d218_19;
					}
					// 0x4d27c
					if (result3 % 8 != 0) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			// 0x4d078
			v13 = __asm_rlwinm(g38, 2, 22, 29);
			v14 = (int32_t *)result3;
			v33 = *v14;
			v9 = g38;
			v34 = v3 + *(int32_t *)(v2 + v13 + 0x1000);
			v35 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
			*v14 = v34 + v9 ^ v33;
			v15 = __asm_rlwinm(v35, 2, 22, 29);
			v36 = (int32_t *)(result3 + 4);
			v56 = *v36;
			v37 = *(int32_t *)(v2 + v15 + 0x1000) + v34 + 32 * v34 + 3 + v33;
			v38 = (0x200000 * v35 ^ -0x200000) + 0x11111111 | v35 / 2048;
			*v36 = v56 ^ v37 + v35;
			v16 = __asm_rlwinm(v38, 2, 22, 29);
			v39 = (int32_t *)(result3 + 8);
			v57 = *v39;
			v40 = *(int32_t *)(v2 + v16 + 0x1000) + v37 + 32 * v37 + 3 + v56;
			v41 = (0x200000 * v38 ^ -0x200000) + 0x11111111 | v38 / 2048;
			*v39 = v57 ^ v40 + v38;
			v17 = __asm_rlwinm(v41, 2, 22, 29);
			v42 = (int32_t *)(result3 + 12);
			v58 = *v42;
			v43 = *(int32_t *)(v2 + v17 + 0x1000) + v40 + 32 * v40 + 3 + v57;
			*v42 = v58 ^ v43 + v41;
			v3 = v43 + (32 * v43 | 3) + v58;
			v44 = 0x11111111 + (0x200000 * v41 ^ -0x200000) | v41 / 2048;
			g38 = v44;
			result3 += 16;
			v18 = v12 - 1;
			// branch -> 0x4d078
			while (v18 != 0) {
				// 0x4d078
				v13 = __asm_rlwinm(v44, 2, 22, 29);
				v14 = (int32_t *)result3;
				v33 = *v14;
				v9 = g38;
				v34 = v3 + *(int32_t *)(v2 + v13 + 0x1000);
				v35 = (0x200000 * v9 ^ -0x200000) + 0x11111111 | v9 / 2048;
				*v14 = v34 + v9 ^ v33;
				v15 = __asm_rlwinm(v35, 2, 22, 29);
				v36 = (int32_t *)(result3 + 4);
				v56 = *v36;
				v37 = *(int32_t *)(v2 + v15 + 0x1000) + v34 + 32 * v34 + 3 + v33;
				v38 = (0x200000 * v35 ^ -0x200000) + 0x11111111 | v35 / 2048;
				*v36 = v56 ^ v37 + v35;
				v16 = __asm_rlwinm(v38, 2, 22, 29);
				v39 = (int32_t *)(result3 + 8);
				v57 = *v39;
				v40 = *(int32_t *)(v2 + v16 + 0x1000) + v37 + 32 * v37 + 3 + v56;
				v41 = (0x200000 * v38 ^ -0x200000) + 0x11111111 | v38 / 2048;
				*v39 = v57 ^ v40 + v38;
				v17 = __asm_rlwinm(v41, 2, 22, 29);
				v42 = (int32_t *)(result3 + 12);
				v58 = *v42;
				v43 = *(int32_t *)(v2 + v17 + 0x1000) + v40 + 32 * v40 + 3 + v57;
				*v42 = v58 ^ v43 + v41;
				v3 = v43 + (32 * v43 | 3) + v58;
				v44 = 0x11111111 + (0x200000 * v41 ^ -0x200000) | v41 / 2048;
				g38 = v44;
				result3 += 16;
				v18--;
				// continue -> 0x4d078
			}
			// 0x4d1a0
			v19 = v6 % 4;
			if (v19 != 0) {
				// 0x4d1a8
				v20 = __asm_rlwinm(v44, 2, 22, 29);
				v21 = (int32_t *)result3;
				v10 = g38;
				v46 = v3 + *(int32_t *)(v2 + v20 + 0x1000);
				*v21 = v46 + v10 ^ *v21;
				v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
				g38 = v47;
				result3 += 4;
				v22 = v19 - 1;
				// branch -> 0x4d1ac
				while (v22 != 0) {
					// 0x4d1ac
					v20 = __asm_rlwinm(v47, 2, 22, 29);
					v21 = (int32_t *)result3;
					v45 = *v21;
					v10 = g38;
					v46 = v46 + (32 * v46 | 3) + v45 + *(int32_t *)(v2 + v20 + 0x1000);
					*v21 = v46 + v10 ^ v45;
					v47 = (0x200000 * v10 ^ -0x200000) + 0x11111111 | g38 / 2048;
					g38 = v47;
					result3 += 4;
					v22--;
					// continue -> 0x4d1ac
				}
				// 0x4d1fc
				result = v1;
				v6 = v4;
				result3 = result;
				if (result < 1) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x4d20c
				v23 = __asm_rlwinm_(result, 29, 3, 31);
				v7 = v23;
				if (v23 == 0) {
					// 0x4d20c
					// branch -> 0x4d284
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					// 0x4d218
					// branch -> 0x4d218
					while (true) {
						// 0x4d218
						v48 = __asm_lwbrx(v23, v6);
						*(int32_t *)v6 = v48;
						v11 = v6;
						v24 = v11 + 4;
						v49 = __asm_lwbrx(v48, v24);
						*(int32_t *)v24 = v49;
						v25 = v11 + 8;
						v50 = __asm_lwbrx(v49, v25);
						*(int32_t *)v25 = v50;
						v26 = v11 + 12;
						v51 = __asm_lwbrx(v50, v26);
						*(int32_t *)v26 = v51;
						v27 = v11 + 16;
						v52 = __asm_lwbrx(v51, v27);
						*(int32_t *)v27 = v52;
						v28 = v11 + 20;
						v53 = __asm_lwbrx(v52, v28);
						*(int32_t *)v28 = v53;
						v29 = v11 + 24;
						v54 = __asm_lwbrx(v53, v29);
						*(int32_t *)v29 = v54;
						v30 = v11 + 28;
						v55 = __asm_lwbrx(v54, v30);
						*(int32_t *)v30 = v55;
						v31 = v11 + 32;
						v6 = v31;
						v32 = v7 - 1;
						v7 = v32;
						if (v32 != 0) {
							goto lab_0x4d218_19;
						}
						// 0x4d27c
						if (result3 % 8 != 0) {
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0x4d1fc
		result = v1;
		v6 = v4;
		result3 = result;
		if (result < 1) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x4d20c
		v23 = __asm_rlwinm_(result, 29, 3, 31);
		v7 = v23;
		if (v23 == 0) {
			// 0x4d20c
			// branch -> 0x4d284
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			// 0x4d218
			// branch -> 0x4d218
			while (true) {
				// 0x4d218
				v48 = __asm_lwbrx(v23, v6);
				*(int32_t *)v6 = v48;
				v11 = v6;
				v24 = v11 + 4;
				v49 = __asm_lwbrx(v48, v24);
				*(int32_t *)v24 = v49;
				v25 = v11 + 8;
				v50 = __asm_lwbrx(v49, v25);
				*(int32_t *)v25 = v50;
				v26 = v11 + 12;
				v51 = __asm_lwbrx(v50, v26);
				*(int32_t *)v26 = v51;
				v27 = v11 + 16;
				v52 = __asm_lwbrx(v51, v27);
				*(int32_t *)v27 = v52;
				v28 = v11 + 20;
				v53 = __asm_lwbrx(v52, v28);
				*(int32_t *)v28 = v53;
				v29 = v11 + 24;
				v54 = __asm_lwbrx(v53, v29);
				*(int32_t *)v29 = v54;
				v30 = v11 + 28;
				v55 = __asm_lwbrx(v54, v30);
				*(int32_t *)v30 = v55;
				v31 = v11 + 32;
				v6 = v31;
				v32 = v7 - 1;
				v7 = v32;
				if (v32 != 0) {
					goto lab_0x4d218_19;
				}
				// 0x4d27c
				if (result3 % 8 != 0) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x4d1fc
	result = v1;
	v6 = v4;
	result3 = result;
	if (result < 1) {
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x4d20c
	v23 = __asm_rlwinm_(result, 29, 3, 31);
	v7 = v23;
	if (v23 == 0) {
		// 0x4d20c
		// branch -> 0x4d284
		// Detected a possible infinite recursion (goto support failed); quitting...
	} else {
		// 0x4d218
		// branch -> 0x4d218
		while (true) {
			// 0x4d218
			v48 = __asm_lwbrx(v23, v6);
			*(int32_t *)v6 = v48;
			v11 = v6;
			v24 = v11 + 4;
			v49 = __asm_lwbrx(v48, v24);
			*(int32_t *)v24 = v49;
			v25 = v11 + 8;
			v50 = __asm_lwbrx(v49, v25);
			*(int32_t *)v25 = v50;
			v26 = v11 + 12;
			v51 = __asm_lwbrx(v50, v26);
			*(int32_t *)v26 = v51;
			v27 = v11 + 16;
			v52 = __asm_lwbrx(v51, v27);
			*(int32_t *)v27 = v52;
			v28 = v11 + 20;
			v53 = __asm_lwbrx(v52, v28);
			*(int32_t *)v28 = v53;
			v29 = v11 + 24;
			v54 = __asm_lwbrx(v53, v29);
			*(int32_t *)v29 = v54;
			v30 = v11 + 28;
			v55 = __asm_lwbrx(v54, v30);
			*(int32_t *)v30 = v55;
			v31 = v11 + 32;
			v6 = v31;
			v32 = v7 - 1;
			v7 = v32;
			if (v32 != 0) {
				goto lab_0x4d218_19;
			}
			// 0x4d27c
			result2 = result3 % 8;
			result3 = result2;
			if (result2 != 0) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x4d2a4 - 0x4d330
int32_t Hash(int32_t a1, int32_t a2)
{
	int32_t v1 = g34; // 0x4d3141
	if (v1 == 0) {
		// 0x4d328
		return 0x7fed7fed;
	}
	int32_t v2 = -0x11111112;    // 0x4d30c
	int32_t result = 0x7fed7fed; // 0x4d2f0
	int32_t result2;             // 0x4d300
	while (true) {
		char *v3 = (char *)v1; // 0x4d31c
		if (*v3 == 0) {
			// 0x4d328
			return result;
		}
		char v4 = *v3;       // 0x4d2c8
		int32_t v5 = v1 + 1; // 0x4d2cc
		int32_t v6 = -1;
		if (v4 != -1) {
			unsigned char v7 = *(char *)((int32_t)v4 % 256 + *(int32_t *)(g23 - 0x72ac)); // 0x4d2e8
			v6 = v7;
			// branch -> 0x4d2ec
		}
		int32_t v8 = 0x1000000 * v6;                                                       // 0x4d2ec
		int32_t v9 = *(int32_t *)(v8 / 0x400000 + *(int32_t *)(g23 - 0x6294) + 1024 * a1); // 0x4d2f8
		result2 = v9 ^ result + v2;
		if (v5 == 0) {
			// break -> 0x4d328
			break;
		}
		v2 = v8 / 0x1000000 + v2 + result2 + 32 * v2 + 3;
		result = result2;
		v1 = v5;
		// continue -> 0x4d31c
	}
	// 0x4d328
	return result2;
}

// Address range: 0x4d330 - 0x4d524
int32_t InitHash(void)
{
	int32_t v1 = 0x2aaaab;                                                    // r0
	int32_t result = 0x7ffffd01;                                              // r3
	int32_t v2 = 0;                                                           // r5
	int32_t v3 = 0x2aaaab;                                                    // 0x4d438
	int32_t v4 = *(int32_t *)(g23 - 0x6294);                                  // r6
	uint32_t v5 = 125 * (int32_t)&g6 + 3;                                     // 0x4d36c
	int64_t v6 = 0x7ffffd01;                                                  // 0x4d370
	int32_t v7 = (int64_t)v5 * v6 / 0x100000000;                              // 0x4d370
	int32_t v8 = v5 - ((v5 - v7) / 2 + v7) / 0x200000 * v3;                   // 0x4d388
	uint32_t v9 = 125 * v8 + 3;                                               // 0x4d390
	int32_t v10 = (int64_t)v9 * v6 / 0x100000000;                             // 0x4d394
	uint32_t v11 = 125 * (v9 - ((v9 - v10) / 2 + v10) / 0x200000 * v3) + 3;   // 0x4d3b4
	int32_t v12 = (int64_t)v11 * v6 / 0x100000000;                            // 0x4d3b8
	int32_t v13 = v11 - ((v11 - v12) / 2 + v12) / 0x200000 * v3;              // 0x4d3d0
	uint32_t v14 = 125 * v13 + 3;                                             // 0x4d3d8
	int32_t v15 = (int64_t)v14 * v6 / 0x100000000;                            // 0x4d3dc
	uint32_t v16 = 125 * (v14 - ((v14 - v15) / 2 + v15) / 0x200000 * v3) + 3; // 0x4d3fc
	int32_t v17 = (int64_t)v16 * v6 / 0x100000000;                            // 0x4d400
	int32_t v18 = v16 - ((v16 - v17) / 2 + v17) / 0x200000 * v3;              // 0x4d418
	uint32_t v19 = 125 * v18 + 3;                                             // 0x4d420
	int32_t v20 = (int64_t)v19 * v6 / 0x100000000;                            // 0x4d424
	int32_t v21 = 125 * (v19 - ((v19 - v20) / 2 + v20) / 0x200000 * v3) + 3;  // 0x4d444
	int32_t v22 = (int64_t)v21 * v6 / 0x100000000;                            // 0x4d448
	*(int32_t *)v4 = __asm_rlwimi(v8, 16, 0, 15);
	*(int32_t *)(v4 + 1024) = __asm_rlwimi(v13, 16, 0, 15);
	*(int32_t *)(v4 + 2048) = __asm_rlwimi(v18, 16, 0, 15);
	int32_t v23 = v21 - v1 * ((v21 - v22) / 2 + v22) / 0x200000; // 0x4d484
	v2 += 4;
	uint32_t v24 = 125 * v23 + 3;                                             // 0x4d490
	int64_t v25 = result;                                                     // 0x4d494
	int32_t v26 = v25 * (int64_t)v24 / 0x100000000;                           // 0x4d494
	uint32_t v27 = 125 * (v24 - ((v24 - v26) / 2 + v26) / 0x200000 * v1) + 3; // 0x4d4b4
	int32_t v28 = (int64_t)v27 * v25 / 0x100000000;                           // 0x4d4b8
	int32_t v29 = v27 - ((v27 - v28) / 2 + v28) / 0x200000 * v1;              // 0x4d4d0
	uint32_t v30 = 125 * v29 + 3;                                             // 0x4d4d8
	int32_t v31 = (int64_t)v30 * v25 / 0x100000000;                           // 0x4d4dc
	*(int32_t *)(v4 + 3072) = __asm_rlwimi(v23, 16, 0, 15);
	*(int32_t *)(v4 + 0x1000) = __asm_rlwimi(v29, 16, 0, 15);
	int32_t v32 = 255; // 0x4d510
	// branch -> 0x4d364
	while (v32 != 0) {
		// 0x4d364
		// 0x4d364
		v3 = v1;
		v4 = *(int32_t *)(g23 - 0x6294) + v2;
		v5 = 125 * (v30 - ((v30 - v31) / 2 + v31) / 0x200000 * v1) + 3;
		v6 = result;
		v7 = (int64_t)v5 * v6 / 0x100000000;
		v8 = v5 - ((v5 - v7) / 2 + v7) / 0x200000 * v3;
		v9 = 125 * v8 + 3;
		v10 = (int64_t)v9 * v6 / 0x100000000;
		v11 = 125 * (v9 - ((v9 - v10) / 2 + v10) / 0x200000 * v3) + 3;
		v12 = (int64_t)v11 * v6 / 0x100000000;
		v13 = v11 - ((v11 - v12) / 2 + v12) / 0x200000 * v3;
		v14 = 125 * v13 + 3;
		v15 = (int64_t)v14 * v6 / 0x100000000;
		v16 = 125 * (v14 - ((v14 - v15) / 2 + v15) / 0x200000 * v3) + 3;
		v17 = (int64_t)v16 * v6 / 0x100000000;
		v18 = v16 - ((v16 - v17) / 2 + v17) / 0x200000 * v3;
		v19 = 125 * v18 + 3;
		v20 = (int64_t)v19 * v6 / 0x100000000;
		v21 = 125 * (v19 - ((v19 - v20) / 2 + v20) / 0x200000 * v3) + 3;
		v22 = (int64_t)v21 * v6 / 0x100000000;
		*(int32_t *)v4 = __asm_rlwimi(v8, 16, 0, 15);
		*(int32_t *)(v4 + 1024) = __asm_rlwimi(v13, 16, 0, 15);
		*(int32_t *)(v4 + 2048) = __asm_rlwimi(v18, 16, 0, 15);
		v23 = v21 - v1 * ((v21 - v22) / 2 + v22) / 0x200000;
		v2 += 4;
		v24 = 125 * v23 + 3;
		v25 = result;
		v26 = v25 * (int64_t)v24 / 0x100000000;
		v27 = 125 * (v24 - ((v24 - v26) / 2 + v26) / 0x200000 * v1) + 3;
		v28 = (int64_t)v27 * v25 / 0x100000000;
		v29 = v27 - ((v27 - v28) / 2 + v28) / 0x200000 * v1;
		v30 = 125 * v29 + 3;
		v31 = (int64_t)v30 * v25 / 0x100000000;
		*(int32_t *)(v4 + 3072) = __asm_rlwimi(v23, 16, 0, 15);
		*(int32_t *)(v4 + 0x1000) = __asm_rlwimi(v29, 16, 0, 15);
		v32--;
		// branch -> 0x4d364
	}
	// 0x4d514
	return result;
}

// Address range: 0x4d524 - 0x4d598
int32_t PkwareBufferRead(int32_t a1, int32_t *a2)
{
	int32_t v1 = (int32_t)a2;                                      // 0x4d530
	int32_t result = *(int32_t *)(v1 + 16) - *(int32_t *)(v1 + 4); // 0x4d544
	if (a1 >= result) {
		// branch -> 0x4d558
	} else {
		result = a1;
	}
	// 0x4d558
	memcpy();
	int32_t *v2 = (int32_t *)(v1 + 4); // 0x4d570
	*v2 = result + *v2;
	return result;
}

// Address range: 0x4d598 - 0x4d5f4
int32_t PkwareBufferWrite(int32_t a1, int32_t a2, int32_t a3)
{
	g34 = *(int32_t *)(a3 + 12) + *(int32_t *)(a3 + 8);
	int32_t result = memcpy();  // r3
	int32_t *v1 = (int32_t *)(a3 + 12); // 0x4d5d0
	*v1 = a2 + *v1;
	return result;
}

// Address range: 0x4d5f4 - 0x4d6d0
int32_t PkwareCompress(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x4d5f4
	int32_t v2 = g33; // 0x4d604
	g33 = a2;
	int32_t v3 = g32; // 0x4d60c
	g32 = a1;
	g34 = (int32_t) "MoveWindow" - 0x7228;
	int32_t v4 = DiabloAllocPtr(); // 0x4d620
	int32_t v5 = 2 * g33;          // 0x4d624
	g36 = v4;
	int32_t v6 = v5; // 0x4d638
	if (v5 <= 0x1fff) {
		// 0x4d634
		v6 = 0x2000;
		// branch -> 0x4d638
	}
	// 0x4d638
	g34 = v6;
	DiabloAllocPtr();
	int32_t v7 = g32;                        // bp-40
	int32_t v8 = *(int32_t *)(g23 - 0x6298); // 0x4d64c
	int32_t v9 = *(int32_t *)(g23 - 0x629c); // 0x4d658
	function_e1f34(v8, v9, g36, (int32_t)&v7, 0, 0x1000);
	if (g33 != 0) {
		// 0x4d688
		g34 = g32;
		memcpy();
		g33 = 0;
		// branch -> 0x4d69c
	}
	// 0x4d69c
	g34 = g36;
	mem_free_dbg();
	g34 = g35;
	mem_free_dbg();
	int32_t result = g33; // 0x4d6b4
	g36 = v1;
	g33 = v2;
	g32 = v3;
	return result;
}

// Address range: 0x4d6d0 - 0x4d788
int32_t PkwareDecompress(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x4d6d0
	int32_t v2 = g35; // 0x4d6dc
	g35 = g38;
	int32_t v3 = g33; // 0x4d6e4
	g33 = a2;
	g32 = a1;
	g34 = (int32_t) "MoveWindow" - 0x7228;
	g36 = DiabloAllocPtr();
	g34 = g35;
	DiabloAllocPtr();
	int32_t v4 = g32;                        // bp-40
	int32_t v5 = *(int32_t *)(g23 - 0x629c); // 0x4d728
	explode(*(int32_t *)(g23 - 0x6298), v5, g36, (int32_t)&v4);
	g34 = g32;
	g37 = g35;
	memcpy();
	g34 = g36;
	mem_free_dbg();
	g34 = g35;
	int32_t result = mem_free_dbg(); // 0x4d764
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return result;
}
