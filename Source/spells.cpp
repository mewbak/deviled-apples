
// Address range: 0xb5a18 - 0xb5c6c
int32_t GetManaAmount(void)
{
	int32_t v1 = 0x55ec * g34;                                     // 0xb5a18
	int32_t v2 = *(int32_t *)(g23 - 0x77a8);                       // 0xb5a1c
	int32_t v3 = *(int32_t *)(g23 - 0x769c);                       // 0xb5a20
	int32_t v4 = v2 + v1;                                          // 0xb5a24
	int32_t v5 = g37;                                              // 0xb5a28
	int32_t v6 = v5 + v4;                                          // 0xb5a28
	unsigned char v7 = *(char *)(v4 + 0x5570);                     // 0xb5a2c
	int32_t v8 = 0;                                                // r9
	int32_t v9 = (int32_t)v7 - 1 + (int32_t) * (char *)(v6 + 193); // 0xb5a44
	int32_t v10 = v9 < 0 ? 0 : v9;
	int32_t v11 = 56 * v5;                        // 0xb5a54
	int32_t v12 = v11 + v3;                       // 0xb5a5c
	int32_t v13 = (int32_t) * (char *)(v12 + 36); // r12
	int32_t v14 = v10;                            // r11
	int32_t v15 = 0;                              // 0xb5ab8
	int32_t v16;                                  // r10
	int32_t v17;
	int32_t v18;       // 0xb5ab0
	int32_t v19;       // 0xb5ac4
	int32_t v20;       // 0xb5b24
	int32_t v21;       // 0xb5b4c46
	int32_t v22;       // 0xb5b54
	int32_t v23;       // 0xb5b9c
	int32_t v24;       // 0xb5bac
	int32_t v25;       // 0xb5c1c
	int32_t v26;       // 0xb5c2c
	int32_t v27;       // 0xb5c54
	int32_t v28;       // 0xb5ae0
	int32_t v29;       // 0xb5aec
	int32_t v30;       // 0xb5b10
	int32_t v31;       // 0xb5b9c
	int32_t v32;       // 0xb5c04
	unsigned char v33; // 0xb5b28
	char v34;          // 0xb5b64
	char v35;          // 0xb5c40
	int32_t v36;
	int32_t v37;  // 0xb5b60
	int32_t v38;  // 0xb5b88
	int32_t v39;  // 0xb5c28
	uint64_t v40; // 0xb5c58
	int32_t v41;  // 0xb5c5c
	int32_t v42;  // 0xb5c5c
	if (v10 != 0) {
		int32_t v43 = __asm_rlwinm_(v10, 29, 3, 31); // 0xb5a6c
		if (v43 == 0) {
			// 0xb5a6c
			// branch -> 0xb5aa4
			// 0xb5aa4
			v15 = v14 * v13 + v8;
			// branch -> 0xb5ab0
		} else {
			int32_t v44 = v13; // 0xb5a78
			int32_t v45 = 8 * v43 * v44 + v8;
			int32_t v46 = v14 % 8; // 0xb5a9c
			if (v46 != 0) {
				// 0xb5aa4
				v15 = v46 * v44 + v45;
				// branch -> 0xb5ab0
			} else {
				v15 = v45;
			}
		}
		// 0xb5ab0
		v18 = g37;
		v21 = v15;
		if (v18 == 1) {
			// 0xb5ab8
			v21 = v15 / 2 | v15 & -0x80000000;
			// branch -> 0xb5abc
		}
		// 0xb5abc
		v23 = v21;
		if (v18 == 32) {
			// 0xb5ac4
			v19 = v10;
			if (v19 >= 1) {
				// 0xb5ae0
				v14 = v19;
				v13 = (int32_t)(*(char *)(v12 + 1) / 8);
				v8 = 0;
				v28 = __asm_rlwinm_(v19, 29, 3, 31);
				if (v28 == 0) {
					// 0xb5ae0
					// branch -> 0xb5b18
					// 0xb5b18
					v23 = v14 * v13 + v8;
					// branch -> 0xb5b24
				} else {
					// 0xb5aec
					v29 = v13;
					v17 = 8 * v28 * v29 + v8;
					v30 = v14 % 8;
					if (v30 != 0) {
						// 0xb5b18
						v23 = v30 * v29 + v17;
						// branch -> 0xb5b24
					} else {
						v23 = v17;
					}
				}
				// 0xb5b24
				v20 = v3;
				v33 = *(char *)(v11 + v20 + 1);
				v36 = v33;
				if (v33 == -1) {
					// 0xb5b34
					v36 = *(int32_t *)(v1 + v2 + 420) % 256;
					// branch -> 0xb5b54
				}
				// 0xb5b54
				v16 = 64 * (v36 - v23);
				v22 = g37;
				if (v22 == 2) {
					// 0xb5b5c
					v37 = (int32_t) * (char *)(v20 + 113);
					v34 = *(char *)(v1 + v2 + 436);
					v16 = 64 * (v37 - v23 + 2 * (int32_t)v34);
					// branch -> 0xb5b7c
				}
				// 0xb5b7c
				if (v22 == 34) {
					// 0xb5b84
					v38 = (int32_t) * (char *)(v20 + 113);
					v31 = v38 - v23 + 2 * (int32_t) * (char *)(v1 + v2 + 436);
					v16 = 64 * v31;
					// branch -> 0xb5ba4
				}
				// 0xb5ba4
				if (v22 == 32) {
					// 0xb5bac
					v24 = v10;
					if (v24 >= 1) {
						// 0xb5bc0
						if (__asm_rlwinm_(v24, 29, 3, 31) == 0) {
							// 0xb5bc0
							// branch -> 0xb5bf8
							// 0xb5bf8
							// branch -> 0xb5c04
						} else {
							// 0xb5bcc
							if (v24 % 8 != 0) {
								// 0xb5bf8
								// branch -> 0xb5c04
							}
						}
						// 0xb5c04
						v32 = v1 + v2;
						v25 = v16;
						v26 = v25;
						if (*(char *)(v32 + 348) == 1) {
							// 0xb5c1c
							v26 = v25 - v25 / 4;
							// branch -> 0xb5c24
						}
						// 0xb5c24
						v39 = (int32_t) * (char *)(v11 + v3 + 37);
						v27 = v26;
						if (v39 > v26 / 64) {
							// 0xb5c38
							v27 = 64 * v39;
							// branch -> 0xb5c3c
						}
						// 0xb5c3c
						v35 = *(char *)(v32 + 0x5571);
						v40 = 0x51eb851f * (int64_t)((100 - (int32_t)v35) * v27);
						v41 = (int32_t)(v40 / 0x100000000) >> 31;
						v42 = v41 & -0x8000000 | (int32_t)(v40 / 0x2000000000);
						return v42 + (int32_t)(v41 < 0);
					}
				}
				// 0xb5c04
				v32 = v1 + v2;
				v25 = v16;
				v26 = v25;
				if (*(char *)(v32 + 348) == 1) {
					// 0xb5c1c
					v26 = v25 - v25 / 4;
					// branch -> 0xb5c24
				}
				// 0xb5c24
				v39 = (int32_t) * (char *)(v11 + v3 + 37);
				v27 = v26;
				if (v39 > v26 / 64) {
					// 0xb5c38
					v27 = 64 * v39;
					// branch -> 0xb5c3c
				}
				// 0xb5c3c
				v35 = *(char *)(v32 + 0x5571);
				v40 = 0x51eb851f * (int64_t)((100 - (int32_t)v35) * v27);
				v41 = (int32_t)(v40 / 0x100000000) >> 31;
				v42 = v41 & -0x8000000 | (int32_t)(v40 / 0x2000000000);
				return v42 + (int32_t)(v41 < 0);
			}
			v23 = v21;
		}
		// 0xb5b24
		v20 = v3;
		v33 = *(char *)(v11 + v20 + 1);
		v36 = v33;
		if (v33 == -1) {
			// 0xb5b34
			v36 = *(int32_t *)(v1 + v2 + 420) % 256;
			// branch -> 0xb5b54
		}
		// 0xb5b54
		v16 = 64 * (v36 - v23);
		v22 = g37;
		if (v22 == 2) {
			// 0xb5b5c
			v37 = (int32_t) * (char *)(v20 + 113);
			v34 = *(char *)(v1 + v2 + 436);
			v16 = 64 * (v37 - v23 + 2 * (int32_t)v34);
			// branch -> 0xb5b7c
		}
		// 0xb5b7c
		if (v22 == 34) {
			// 0xb5b84
			v38 = (int32_t) * (char *)(v20 + 113);
			v31 = v38 - v23 + 2 * (int32_t) * (char *)(v1 + v2 + 436);
			v16 = 64 * v31;
			// branch -> 0xb5ba4
		}
		// 0xb5ba4
		if (v22 == 32) {
			// 0xb5bac
			v24 = v10;
			if (v24 >= 1) {
				// 0xb5bc0
				if (__asm_rlwinm_(v24, 29, 3, 31) == 0) {
					// 0xb5bc0
					// branch -> 0xb5bf8
					// 0xb5bf8
					// branch -> 0xb5c04
				} else {
					// 0xb5bcc
					if (v24 % 8 != 0) {
						// 0xb5bf8
						// branch -> 0xb5c04
					}
				}
				// 0xb5c04
				v32 = v1 + v2;
				v25 = v16;
				v26 = v25;
				if (*(char *)(v32 + 348) == 1) {
					// 0xb5c1c
					v26 = v25 - v25 / 4;
					// branch -> 0xb5c24
				}
				// 0xb5c24
				v39 = (int32_t) * (char *)(v11 + v3 + 37);
				v27 = v26;
				if (v39 > v26 / 64) {
					// 0xb5c38
					v27 = 64 * v39;
					// branch -> 0xb5c3c
				}
				// 0xb5c3c
				v35 = *(char *)(v32 + 0x5571);
				v40 = 0x51eb851f * (int64_t)((100 - (int32_t)v35) * v27);
				v41 = (int32_t)(v40 / 0x100000000) >> 31;
				v42 = v41 & -0x8000000 | (int32_t)(v40 / 0x2000000000);
				return v42 + (int32_t)(v41 < 0);
			}
		}
		// 0xb5c04
		v32 = v1 + v2;
		v25 = v16;
		v26 = v25;
		if (*(char *)(v32 + 348) == 1) {
			// 0xb5c1c
			v26 = v25 - v25 / 4;
			// branch -> 0xb5c24
		}
		// 0xb5c24
		v39 = (int32_t) * (char *)(v11 + v3 + 37);
		v27 = v26;
		if (v39 > v26 / 64) {
			// 0xb5c38
			v27 = 64 * v39;
			// branch -> 0xb5c3c
		}
		// 0xb5c3c
		v35 = *(char *)(v32 + 0x5571);
		v40 = 0x51eb851f * (int64_t)((100 - (int32_t)v35) * v27);
		v41 = (int32_t)(v40 / 0x100000000) >> 31;
		v42 = v41 & -0x8000000 | (int32_t)(v40 / 0x2000000000);
		return v42 + (int32_t)(v41 < 0);
	}
	// 0xb5ab0
	v18 = g37;
	v21 = v15;
	if (v18 == 1) {
		// 0xb5ab8
		v21 = v15 / 2 | v15 & -0x80000000;
		// branch -> 0xb5abc
	}
	// 0xb5abc
	v23 = v21;
	if (v18 != 32) {
		// 0xb5b24
		v20 = v3;
		v33 = *(char *)(v11 + v20 + 1);
		v36 = v33;
		if (v33 == -1) {
			// 0xb5b34
			v36 = *(int32_t *)(v1 + v2 + 420) % 256;
			// branch -> 0xb5b54
		}
		// 0xb5b54
		v16 = 64 * (v36 - v23);
		v22 = g37;
		if (v22 == 2) {
			// 0xb5b5c
			v37 = (int32_t) * (char *)(v20 + 113);
			v34 = *(char *)(v1 + v2 + 436);
			v16 = 64 * (v37 - v23 + 2 * (int32_t)v34);
			// branch -> 0xb5b7c
		}
		// 0xb5b7c
		if (v22 == 34) {
			// 0xb5b84
			v38 = (int32_t) * (char *)(v20 + 113);
			v31 = v38 - v23 + 2 * (int32_t) * (char *)(v1 + v2 + 436);
			v16 = 64 * v31;
			// branch -> 0xb5ba4
		}
		// 0xb5ba4
		if (v22 != 32) {
			// 0xb5c04
			v32 = v1 + v2;
			v25 = v16;
			v26 = v25;
			if (*(char *)(v32 + 348) == 1) {
				// 0xb5c1c
				v26 = v25 - v25 / 4;
				// branch -> 0xb5c24
			}
			// 0xb5c24
			v39 = (int32_t) * (char *)(v11 + v3 + 37);
			v27 = v26;
			if (v39 > v26 / 64) {
				// 0xb5c38
				v27 = 64 * v39;
				// branch -> 0xb5c3c
			}
			// 0xb5c3c
			v35 = *(char *)(v32 + 0x5571);
			v40 = 0x51eb851f * (int64_t)((100 - (int32_t)v35) * v27);
			v41 = (int32_t)(v40 / 0x100000000) >> 31;
			v42 = v41 & -0x8000000 | (int32_t)(v40 / 0x2000000000);
			return v42 + (int32_t)(v41 < 0);
		}
		// 0xb5bac
		v24 = v10;
		if (v24 < 1) {
			// 0xb5c04
			v32 = v1 + v2;
			v25 = v16;
			v26 = v25;
			if (*(char *)(v32 + 348) == 1) {
				// 0xb5c1c
				v26 = v25 - v25 / 4;
				// branch -> 0xb5c24
			}
			// 0xb5c24
			v39 = (int32_t) * (char *)(v11 + v3 + 37);
			v27 = v26;
			if (v39 > v26 / 64) {
				// 0xb5c38
				v27 = 64 * v39;
				// branch -> 0xb5c3c
			}
			// 0xb5c3c
			v35 = *(char *)(v32 + 0x5571);
			v40 = 0x51eb851f * (int64_t)((100 - (int32_t)v35) * v27);
			v41 = (int32_t)(v40 / 0x100000000) >> 31;
			v42 = v41 & -0x8000000 | (int32_t)(v40 / 0x2000000000);
			return v42 + (int32_t)(v41 < 0);
		}
		// 0xb5bc0
		if (__asm_rlwinm_(v24, 29, 3, 31) == 0) {
			// 0xb5bc0
			// branch -> 0xb5bf8
			// 0xb5bf8
			// branch -> 0xb5c04
		} else {
			// 0xb5bcc
			if (v24 % 8 != 0) {
				// 0xb5bf8
				// branch -> 0xb5c04
			}
		}
		// 0xb5c04
		v32 = v1 + v2;
		v25 = v16;
		v26 = v25;
		if (*(char *)(v32 + 348) == 1) {
			// 0xb5c1c
			v26 = v25 - v25 / 4;
			// branch -> 0xb5c24
		}
		// 0xb5c24
		v39 = (int32_t) * (char *)(v11 + v3 + 37);
		v27 = v26;
		if (v39 > v26 / 64) {
			// 0xb5c38
			v27 = 64 * v39;
			// branch -> 0xb5c3c
		}
		// 0xb5c3c
		v35 = *(char *)(v32 + 0x5571);
		v40 = 0x51eb851f * (int64_t)((100 - (int32_t)v35) * v27);
		v41 = (int32_t)(v40 / 0x100000000) >> 31;
		v42 = v41 & -0x8000000 | (int32_t)(v40 / 0x2000000000);
		return v42 + (int32_t)(v41 < 0);
	}
	// 0xb5ac4
	v19 = v10;
	if (v19 < 1) {
		v23 = v21;
		// 0xb5b24
		v20 = v3;
		v33 = *(char *)(v11 + v20 + 1);
		v36 = v33;
		if (v33 == -1) {
			// 0xb5b34
			v36 = *(int32_t *)(v1 + v2 + 420) % 256;
			// branch -> 0xb5b54
		}
		// 0xb5b54
		v16 = 64 * (v36 - v23);
		v22 = g37;
		if (v22 == 2) {
			// 0xb5b5c
			v37 = (int32_t) * (char *)(v20 + 113);
			v34 = *(char *)(v1 + v2 + 436);
			v16 = 64 * (v37 - v23 + 2 * (int32_t)v34);
			// branch -> 0xb5b7c
		}
		// 0xb5b7c
		if (v22 == 34) {
			// 0xb5b84
			v38 = (int32_t) * (char *)(v20 + 113);
			v31 = v38 - v23 + 2 * (int32_t) * (char *)(v1 + v2 + 436);
			v16 = 64 * v31;
			// branch -> 0xb5ba4
		}
		// 0xb5ba4
		if (v22 == 32) {
			// 0xb5bac
			v24 = v10;
			if (v24 >= 1) {
				// 0xb5bc0
				if (__asm_rlwinm_(v24, 29, 3, 31) == 0) {
					// 0xb5bc0
					// branch -> 0xb5bf8
					// 0xb5bf8
					// branch -> 0xb5c04
				} else {
					// 0xb5bcc
					if (v24 % 8 != 0) {
						// 0xb5bf8
						// branch -> 0xb5c04
					}
				}
				// 0xb5c04
				v32 = v1 + v2;
				v25 = v16;
				v26 = v25;
				if (*(char *)(v32 + 348) == 1) {
					// 0xb5c1c
					v26 = v25 - v25 / 4;
					// branch -> 0xb5c24
				}
				// 0xb5c24
				v39 = (int32_t) * (char *)(v11 + v3 + 37);
				v27 = v26;
				if (v39 > v26 / 64) {
					// 0xb5c38
					v27 = 64 * v39;
					// branch -> 0xb5c3c
				}
				// 0xb5c3c
				v35 = *(char *)(v32 + 0x5571);
				v40 = 0x51eb851f * (int64_t)((100 - (int32_t)v35) * v27);
				v41 = (int32_t)(v40 / 0x100000000) >> 31;
				v42 = v41 & -0x8000000 | (int32_t)(v40 / 0x2000000000);
				return v42 + (int32_t)(v41 < 0);
			}
		}
		// 0xb5c04
		v32 = v1 + v2;
		v25 = v16;
		v26 = v25;
		if (*(char *)(v32 + 348) == 1) {
			// 0xb5c1c
			v26 = v25 - v25 / 4;
			// branch -> 0xb5c24
		}
		// 0xb5c24
		v39 = (int32_t) * (char *)(v11 + v3 + 37);
		v27 = v26;
		if (v39 > v26 / 64) {
			// 0xb5c38
			v27 = 64 * v39;
			// branch -> 0xb5c3c
		}
		// 0xb5c3c
		v35 = *(char *)(v32 + 0x5571);
		v40 = 0x51eb851f * (int64_t)((100 - (int32_t)v35) * v27);
		v41 = (int32_t)(v40 / 0x100000000) >> 31;
		v42 = v41 & -0x8000000 | (int32_t)(v40 / 0x2000000000);
		return v42 + (int32_t)(v41 < 0);
	}
	// 0xb5ae0
	v14 = v19;
	v13 = (int32_t)(*(char *)(v12 + 1) / 8);
	v8 = 0;
	v28 = __asm_rlwinm_(v19, 29, 3, 31);
	if (v28 == 0) {
		// 0xb5ae0
		// branch -> 0xb5b18
		// 0xb5b18
		v23 = v14 * v13 + v8;
		// branch -> 0xb5b24
	} else {
		// 0xb5aec
		v29 = v13;
		v17 = 8 * v28 * v29 + v8;
		v30 = v14 % 8;
		if (v30 != 0) {
			// 0xb5b18
			v23 = v30 * v29 + v17;
			// branch -> 0xb5b24
		} else {
			v23 = v17;
		}
	}
	// 0xb5b24
	v20 = v3;
	v33 = *(char *)(v11 + v20 + 1);
	v36 = v33;
	if (v33 == -1) {
		// 0xb5b34
		v36 = *(int32_t *)(v1 + v2 + 420) % 256;
		// branch -> 0xb5b54
	}
	// 0xb5b54
	v16 = 64 * (v36 - v23);
	v22 = g37;
	if (v22 == 2) {
		// 0xb5b5c
		v37 = (int32_t) * (char *)(v20 + 113);
		v34 = *(char *)(v1 + v2 + 436);
		v16 = 64 * (v37 - v23 + 2 * (int32_t)v34);
		// branch -> 0xb5b7c
	}
	// 0xb5b7c
	if (v22 == 34) {
		// 0xb5b84
		v38 = (int32_t) * (char *)(v20 + 113);
		v31 = v38 - v23 + 2 * (int32_t) * (char *)(v1 + v2 + 436);
		v16 = 64 * v31;
		// branch -> 0xb5ba4
	}
	// 0xb5ba4
	if (v22 == 32) {
		// 0xb5bac
		v24 = v10;
		if (v24 >= 1) {
			// 0xb5bc0
			if (__asm_rlwinm_(v24, 29, 3, 31) == 0) {
				// 0xb5bc0
				// branch -> 0xb5bf8
				// 0xb5bf8
				// branch -> 0xb5c04
			} else {
				// 0xb5bcc
				if (v24 % 8 != 0) {
					// 0xb5bf8
					// branch -> 0xb5c04
				}
			}
			// 0xb5c04
			v32 = v1 + v2;
			v25 = v16;
			v26 = v25;
			if (*(char *)(v32 + 348) == 1) {
				// 0xb5c1c
				v26 = v25 - v25 / 4;
				// branch -> 0xb5c24
			}
			// 0xb5c24
			v39 = (int32_t) * (char *)(v11 + v3 + 37);
			v27 = v26;
			if (v39 > v26 / 64) {
				// 0xb5c38
				v27 = 64 * v39;
				// branch -> 0xb5c3c
			}
			// 0xb5c3c
			v35 = *(char *)(v32 + 0x5571);
			v40 = 0x51eb851f * (int64_t)((100 - (int32_t)v35) * v27);
			v41 = (int32_t)(v40 / 0x100000000) >> 31;
			v42 = v41 & -0x8000000 | (int32_t)(v40 / 0x2000000000);
			return v42 + (int32_t)(v41 < 0);
		}
	}
	// 0xb5c04
	v32 = v1 + v2;
	v25 = v16;
	v26 = v25;
	if (*(char *)(v32 + 348) == 1) {
		// 0xb5c1c
		v26 = v25 - v25 / 4;
		// branch -> 0xb5c24
	}
	// 0xb5c24
	v39 = (int32_t) * (char *)(v11 + v3 + 37);
	v27 = v26;
	if (v39 > v26 / 64) {
		// 0xb5c38
		v27 = 64 * v39;
		// branch -> 0xb5c3c
	}
	// 0xb5c3c
	v35 = *(char *)(v32 + 0x5571);
	v40 = 0x51eb851f * (int64_t)((100 - (int32_t)v35) * v27);
	v41 = (int32_t)(v40 / 0x100000000) >> 31;
	v42 = v41 & -0x8000000 | (int32_t)(v40 / 0x2000000000);
	return v42 + (int32_t)(v41 < 0);
}

// Address range: 0xb5c6c - 0xb5d18
int32_t UseMana(int32_t a1, int32_t a2)
{
	// 0xb5c6c
	g34 = a1;
	int32_t v1 = g36;                        // 0xb5c6c
	int32_t v2 = g10;                        // 0xb5c70
	int32_t v3 = *(int32_t *)(g23 - 0x77ac); // 0xb5c74
	int32_t v4 = *(int32_t *)(g23 - 0x77a8); // 0xb5c7c
	int32_t v5 = *(int32_t *)v3;             // 0xb5c84
	int32_t result = g34;                    // 0xb5c88
	if (result != v5) {
		// 0xb5d04
		g36 = v1;
		g10 = v2;
		return result;
	}
	int32_t v6 = 0x55ec * v5 + v4; // 0xb5c94
	g36 = v6;
	char v7 = *(char *)(v6 + 168); // 0xb5c98
	if (v7 == 2) {
		int32_t result2 = function_5b0f4(v3, v4); // 0xb5ccc
		// branch -> 0xb5d04
		// 0xb5d04
		g36 = v1;
		g10 = v2;
		return result2;
	}
	// 0xb5ca8
	int32_t result3; // 0xb5d14
	if (v7 > 2) {
		// 0xb5cbc
		if (v7 == 3) {
			// 0xb5cd4
			result3 = function_5b3ac(v3, v4);
			// branch -> 0xb5d04
		} else {
			result3 = v5;
		}
	} else {
		// 0xb5cac
		if (v7 != 0 && v7 > 0) {
			int32_t v8 = GetManaAmount();        // 0xb5cdc
			int32_t *v9 = (int32_t *)(g36 + 424); // 0xb5ce0
			*v9 = *v9 - v8;
			int32_t *v10 = (int32_t *)(g36 + 416); // 0xb5cf4
			int32_t v11 = *v10 - v8;               // 0xb5cf8
			*v10 = v11;
			*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
			result3 = v11;
			// branch -> 0xb5d04
		} else {
			result3 = v5;
		}
	}
	// 0xb5d04
	g36 = v1;
	g10 = v2;
	return result3;
}

// Address range: 0xb5d18 - 0xb5dc8
int32_t CheckSpell(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0xb5d1c
	int32_t v2;       // 0xb5d80
	int32_t v3;       // 0xb5d88
	int32_t result;   // 0xb5dc4
	if (a4 != 0) {
		// 0xb5d54
		if ((0x1000000 * a3 || 0xffffff) < 0x1ffffff) {
			// 0xb5d5c
			// branch -> 0xb5db0
			// 0xb5db0
			g10 = v1;
			return 1;
		}
		// 0xb5d64
		if (function_6db5c(a1, a2) <= 0) {
			// 0xb5d78
			// branch -> 0xb5db0
			// 0xb5db0
			g10 = v1;
			return 0;
		}
		// 0xb5d80
		v2 = a1;
		g34 = v2;
		g37 = a2;
		v3 = GetManaAmount();
		if (*(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v2 + 424) < v3) {
			// 0xb5da4
			result = 0;
			// branch -> 0xb5db0
		} else {
			// 0xb5dac
			result = 1;
			// branch -> 0xb5db0
		}
		// 0xb5db0
		g10 = v1;
		return result;
	}
	// 0xb5d3c
	if (*(int32_t *)*(int32_t *)(g23 - 0x7744) != 1) {
		// 0xb5d4c
		// branch -> 0xb5db0
		// 0xb5db0
		g10 = v1;
		return 0;
	}
	// 0xb5d54
	if ((0x1000000 * a3 || 0xffffff) < 0x1ffffff) {
		// 0xb5d5c
		// branch -> 0xb5db0
		// 0xb5db0
		g10 = v1;
		return 1;
	}
	// 0xb5d64
	if (function_6db5c(a1, a2) <= 0) {
		// 0xb5d78
		// branch -> 0xb5db0
		// 0xb5db0
		g10 = v1;
		return 0;
	}
	// 0xb5d80
	v2 = a1;
	g34 = v2;
	g37 = a2;
	v3 = GetManaAmount();
	if (*(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v2 + 424) < v3) {
		// 0xb5da4
		result = 0;
		// branch -> 0xb5db0
	} else {
		// 0xb5dac
		result = 1;
		// branch -> 0xb5db0
	}
	// 0xb5db0
	g10 = v1;
	return result;
}

// Address range: 0xb5dc8 - 0xb5f2c
int32_t CastSpell(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0xb5dcc
	g33 = a7;
	int32_t v2 = *(int32_t *)(g23 - 0x769c); // 0xb5dd4
	g26 = v2;
	g28 = a1;
	g29 = a3;
	g30 = a4;
	g31 = a5;
	g32 = a6;
	g35 = g13;
	int32_t v3;        // 0xb5eb8
	int32_t v4;        // 0xb5ed0
	int32_t result2;   // 0xb5f28
	int32_t v5;        // 0xb5f2817
	int32_t v6;        // 0xb5e44
	int32_t v7;        // 0xb5ea0
	int32_t v8;        // 0xb5ed4
	int32_t v9;        // 0xb5f0c
	int32_t v10;       // 0xb5e48
	unsigned char v11; // 0xb5e887
	int32_t v12;       // 0xb5e8811
	int32_t v13;       // 0xb5ed0
	int32_t result;    // 0xb5f08
	if (a7 == 1) {
		int32_t v14 = *(int32_t *)(g23 - 0x7754) + 232 * a1; // 0xb5e3c
		g36 = *(int32_t *)(v14 + 72);
		// branch -> 0xb5e44
		// 0xb5e44
		v6 = 56 * a2;
		g24 = v6;
		v10 = v6 + v2;
		g25 = v10;
		g22 = 0;
		g27 = 0;
		v11 = *(char *)(v10 + 33);
		if (v11 != 0) {
			v12 = v11;
			while (true) {
				goto lab_0xb5e58;
				// 0xb5e9c
				// branch -> 0xb5e9c
			}
		}
		// 0xb5e9c
		v7 = v6 + v2 + 33;
		g24 = v7;
		v5 = v14;
		v3 = v7;
		if (*(char *)v7 == 10) {
			// 0xb5eac
			g37 = 7;
			v5 = UseMana(g28, 7);
			v3 = g24;
			// branch -> 0xb5eb8
		}
		// 0xb5eb8
		result2 = v5;
		if (*(char *)v3 == 52) {
			// 0xb5ec4
			g37 = 30;
			UseMana(g28, 30);
			v4 = g35;
			v13 = v4 / 2 | v4 & -0x80000000;
			v8 = v13 + 3;
			g24 = v8;
			if (v8 > 0) {
				while (true) {
					// 0xb5ee0
					g13 = g28;
					result = AddMissile(g29, g30, g31, g32, g36, 52, 0x1000000 * g33 / 0x1000000, 0, v4);
					v9 = g24 - 1;
					g24 = v9;
					if (v9 > 0) {
						goto lab_0xb5ee0;
					}
					// 0xb5f18
					g10 = v1;
					return result;
				}
			} else {
				result2 = v13;
			}
		}
		// 0xb5f18
		g10 = v1;
		return result2;
	}
	// 0xb5e04
	int32_t v19; // 0xb5f2820
	if (a7 <= 1) {
		// 0xb5e08
		if (a7 > -1) {
			int32_t v20 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0xb5e1c
			g36 = *(int32_t *)(v20 + 112);
			g33 = 0;
			if (a2 == 6) {
				// 0xb5e2c
				g36 = *(int32_t *)(v20 + 472);
				v19 = v20;
				// branch -> 0xb5e44
			} else {
				v19 = v20;
			}
		} else {
			v19 = a1;
		}
	} else {
		v19 = a1;
	}
	// 0xb5e44
	v6 = 56 * a2;
	g24 = v6;
	v10 = v6 + v2;
	g25 = v10;
	g22 = 0;
	g27 = 0;
	v11 = *(char *)(v10 + 33);
	int32_t v21 = v6; // 0xb5e9c
	int32_t v22 = v2; // 0xb5e9c
	if (v11 != 0) {
		int32_t v17 = 0; // 0xb5e84
		v12 = v11;
		int32_t v15; // 0xb5e7c
		while (true) {
			// 0xb5e94
			if (v17 < 3) {
			lab_0xb5e58:
				// 0xb5e58
				g13 = g28;
				v15 = AddMissile(g29, g30, g31, g32, g36, v12, 0x1000000 * g33 / 0x1000000, g27, g35);
				int32_t v16 = g25; // 0xb5e80
				g25 = v16 + 1;
				v17 = g22 + 1;
				g22 = v17;
				unsigned char v18 = *(char *)(v16 + 34); // 0xb5e88
				if (v18 == 0) {
					// break -> 0xb5e9c
					break;
				}
				v12 = v18;
				// continue -> 0xb5e94
				continue;
			}
			// 0xb5e9c
			// branch -> 0xb5e9c
		}
		// 0xb5e9c
		v21 = g24;
		v22 = g26;
		v19 = v15;
		// branch -> 0xb5e9c
	}
	// 0xb5e9c
	v7 = v21 + v22 + 33;
	g24 = v7;
	v5 = v19;
	v3 = v7;
	if (*(char *)v7 == 10) {
		// 0xb5eac
		g37 = 7;
		v5 = UseMana(g28, 7);
		v3 = g24;
		// branch -> 0xb5eb8
	}
	// 0xb5eb8
	result2 = v5;
	if (*(char *)v3 == 52) {
		// 0xb5ec4
		g37 = 30;
		UseMana(g28, 30);
		v4 = g35;
		v13 = v4 / 2 | v4 & -0x80000000;
		v8 = v13 + 3;
		g24 = v8;
		if (v8 > 0) {
			int32_t v23 = v4; // 0xb5eec
			int32_t v24 = 0;  // 0xb5ee0
			while (true) {
				// 0xb5ee0
				g13 = g28;
				result = AddMissile(g29, g30, g31, g32, g36, 52, 0x1000000 * g33 / 0x1000000, v24, v23);
				v9 = g24 - 1;
				g24 = v9;
				if (v9 > 0) {
				lab_0xb5ee0:
					// 0xb5ee0
					v23 = g35;
					v24 = g27;
					// branch -> 0xb5ee0
					continue;
				} else {
					result2 = result;
				}
			}
		} else {
			result2 = v13;
		}
	}
	// 0xb5f18
	g10 = v1;
	return result2;
}

// Address range: 0xb5f2c - 0xb60a8
int32_t PlacePlayer(int32_t a1)
{
	// 0xb5f2c
	g32 = a1;
	int32_t v1 = g10;         // 0xb5f34
	int32_t v2 = 0x55ec * a1; // 0xb5f38
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xb5f3c
	g31 = v3;
	int32_t v4 = v3 + v2;                                             // 0xb5f44
	int32_t v5 = v4;                                                  // r24
	int32_t result3 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0xb5f50
	if (result3 == *(int32_t *)(v4 + 52)) {
		int32_t v6 = *(int32_t *)(g23 - 0x6f88); // 0xb5f60
		int32_t v7 = 0;                          // r23
		int32_t v8 = *(int32_t *)(g23 - 0x6f84); // 0xb5f68
		// branch -> 0xb5f6c
		while (true) {
			int32_t v9 = *(int32_t *)v6 + *(int32_t *)(v4 + 56); // 0xb5f80
			g35 = v9;
			int32_t v10 = *(int32_t *)v8 + *(int32_t *)(v4 + 60); // 0xb5f88
			g33 = v10;
			if (function_a9df0(a1, v9, v10) == 0) {
				int32_t v11 = v7 + 1; // 0xb5f9c
				v7 = v11;
				int32_t v12 = v8 + 4; // 0xb5fa0
				v8 = v12;
				int32_t v13 = v6 + 4; // 0xb5fa8
				v6 = v13;
				if (v11 < 8) {
					// 0xb5f9c
					v8 = v12;
					v6 = v13;
					a1 = g32;
					v4 = v5;
					// branch -> 0xb5f6c
					continue;
				}
			}
			// 0xb5fb0
			int32_t result2; // r3
			int32_t v14;     // 0xb6084
			int32_t v15;     // 0xb6050
			int32_t v16;     // 0xb6070
			if (function_a9df0(g32, g35, g33) == 0) {
				// 0xb5fc8
				v7 = 0;
				v6 = 1;
				int32_t v17 = 1; // 0xb5fd441
				// branch -> 0xb5fd4
				while (true) {
					int32_t v18 = -v17; // 0xb5fd4
					int32_t v19 = v17;  // 0xb603c
					if (v17 >= v18) {
						int32_t v20 = v17; // 0xb6018339
						// branch -> 0xb5fe0
						while (true) {
							// 0xb5fe0
							g25 = v18;
							int32_t v21 = *(int32_t *)(v5 + 60) + v18; // 0xb5fe8
							g33 = v21;
							int32_t v22 = v20; // 0xb602c
							if (v18 <= v20) {
								int32_t v23 = v18; // 0xb5ffc38
								// branch -> 0xb5ff0
								while (true) {
									int32_t v24 = *(int32_t *)(v5 + 56) + v23; // 0xb5ffc
									g35 = v24;
									if (function_a9df0(g32, v24, v21) != 0) {
										// 0xb6010
										v7 = 1;
										// branch -> 0xb6014
									}
									int32_t v25 = g25 + 1; // 0xb6014
									g25 = v25;
									if (v25 <= v6) {
										// 0xb6014
										if (v7 == 0) {
											// 0xb6014
											v21 = g33;
											v23 = v25;
											// branch -> 0xb5ff0
											continue;
										}
									}
									// 0xb6028
									// branch -> 0xb6028
								}
							}
							int32_t v26 = v18 + 1; // 0xb6028
							if (v26 <= v22) {
								// 0xb6028
								if (v7 == 0) {
									// 0xb6028
									v18 = v26;
									v20 = v22;
									// branch -> 0xb5fe0
									continue;
								} else {
									v19 = v22;
								}
							} else {
								v19 = v22;
							}
						}
					}
					int32_t v27 = v19 + 1; // 0xb603c
					v6 = v27;
					if (v27 <= 49) {
						// 0xb603c
						if (v7 != 0) {
							// break -> 0xb6050
							break;
						}
						v17 = v27;
						// continue -> 0xb5fd4
						continue;
					}
				}
				// 0xb6050
				v15 = g36 + g31;
				*(int32_t *)(v15 + 56) = g35;
				*(int32_t *)(v15 + 60) = g33;
				v16 = *(int32_t *)*(int32_t *)(g23 - 0x7680);
				*(char *)(v16 + g33 + 112 * g35) = (char)(g32 + 1);
				int32_t result = *(int32_t *)(g23 - 0x77ac); // 0xb6078
				if (g32 != *(int32_t *)result) {
					// 0xb6094
					g10 = v1;
					return result;
				}
				// 0xb6084
				v14 = g23;
				result2 = *(int32_t *)(v14 - 0x77b4);
				*(int32_t *)*(int32_t *)(v14 - 0x77b0) = g35;
				*(int32_t *)result2 = g33;
				// branch -> 0xb6094
				// 0xb6094
				g10 = v1;
				return result2;
			}
			// 0xb6050
			v15 = g36 + g31;
			*(int32_t *)(v15 + 56) = g35;
			*(int32_t *)(v15 + 60) = g33;
			v16 = *(int32_t *)*(int32_t *)(g23 - 0x7680);
			*(char *)(v16 + g33 + 112 * g35) = (char)(g32 + 1);
			if (g32 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0xb6084
				v14 = g23;
				result2 = *(int32_t *)(v14 - 0x77b4);
				*(int32_t *)*(int32_t *)(v14 - 0x77b0) = g35;
				*(int32_t *)result2 = g33;
				// branch -> 0xb6094
				// 0xb6094
				g10 = v1;
				return result2;
			}
		}
	}
	// 0xb6094
	g10 = v1;
	return result3;
}

// Address range: 0xb60a8 - 0xb6238
int32_t DoResurrect(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0xb60ac
	g32 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0xb60b4
	g31 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xb60b8
	g36 = v3;
	int32_t result = a1; // 0xb62346
	int32_t v4 = a1;     // 0xb6110
	if (0x1000000 * a2 != -0x1000000) {
		int32_t v5 = v3 + 0x55ec * a2;      // 0xb60d8
		int32_t v6 = *(int32_t *)(v5 + 60); // 0xb60dc
		int32_t v7 = *(int32_t *)(v5 + 56); // 0xb60e4
		g13 = a1;
		int32_t *v8;
		int32_t v9 = AddMissile(v7, v6, 0, 62, 0, 62, 0, (int32_t)&v8, (int32_t)&v8); // 0xb6108
		result = v9;
		v4 = g30;
		v2 = g31;
		// branch -> 0xb610c
	}
	if (v4 == *(int32_t *)v2) {
		// 0xb6118
		g34 = 1;
		result = function_324ec(1);
		// branch -> 0xb6120
	}
	int32_t v10 = g32; // 0xb6120
	if (0x1000000 * v10 == -0x1000000) {
		// 0xb6224
		g10 = v1;
		return result;
	}
	int32_t v11 = 0x55ec * v10; // 0xb612c
	g35 = v11;
	int32_t v12 = g36 + v11 + 404; // 0xb6134
	g33 = v12;
	if (*(int32_t *)v12 != 0) {
		// 0xb6224
		g10 = v1;
		return result;
	}
	int32_t v13 = v10; // 0xb6170
	if (v10 == *(int32_t *)g31) {
		// 0xb614c
		*(int32_t *)*(int32_t *)(g23 - 0x75cc) = 0;
		gamemenu_off();
		*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
		*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
		v13 = g32;
		// branch -> 0xb6170
	}
	// 0xb6170
	ClrPlrPath(v13);
	int32_t v14 = g35 + g36; // 0xb6178
	*(int32_t *)(v14 + 32) = -1;
	*(char *)(v14 + 313) = 0;
	PlacePlayer(g32);
	int32_t v15 = g31 + 400; // 0xb6194
	g30 = v15;
	int32_t v16 = *(int32_t *)v15; // 0xb6198
	int32_t v17 = 640;
	if (v16 <= 639) {
		// 0xb61a8
		v17 = v16;
		// branch -> 0xb61ac
	}
	// 0xb61ac
	g37 = v17;
	SetPlayerHitPoints(g32);
	int32_t v18 = g35 + g36;       // 0xb61b4
	int32_t v19 = *(int32_t *)g33; // 0xb61b8
	g33 = 0;
	int32_t v20 = *(int32_t *)g30 - *(int32_t *)(v18 + 408) + v19; // 0xb61cc
	*(int32_t *)(v18 + 396) = v20;
	*(int32_t *)(v18 + 424) = g33;
	int32_t v21 = *(int32_t *)(v18 + 428); // 0xb61e4
	int32_t v22 = *(int32_t *)(v18 + 424); // 0xb61e8
	*(int32_t *)(v18 + 416) = v22 + *(int32_t *)(v18 + 420) - v21;
	CalcPlrInv(g32, 1);
	int32_t v23 = g31;                                            // 0xb6200
	int32_t v24 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0xb6204
	int32_t result2;                                              // 0xb6234
	if (v24 == *(int32_t *)(v23 + 52)) {
		// 0xb6210
		result2 = StartStand(g32, *(int32_t *)(v23 + 112));
		// branch -> 0xb6224
	} else {
		// 0xb6220
		*(int32_t *)(g35 + g36) = g33;
		result2 = v24;
		// branch -> 0xb6224
	}
	// 0xb6224
	g10 = v1;
	return result2;
}

// Address range: 0xb6238 - 0xb63ac
int32_t DoHealOther(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t result = a1; // 0xb63a820
	int32_t v1 = a2;     // 0xb6278
	if (a1 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		// 0xb6264
		g34 = 1;
		result = function_324ec(1);
		v1 = a2;
		// branch -> 0xb626c
	}
	// 0xb626c
	if (0x1000000 * v1 == -0x1000000) {
		// 0xb6398
		return result;
	}
	int32_t v2 = 0x55ec * v1;    // 0xb6278
	int32_t v3 = g36 + v2 + 404; // 0xb6280
	if (*(int32_t *)v3 < 64) {
		// 0xb6398
		return result;
	}
	// 0xb6290
	g37 = 10;
	int32_t v4 = 0x55ec * a1;          // 0xb629c
	int32_t v5 = 64 * random(57) + 64; // r28
	int32_t v6 = g36 + v4;             // 0xb62a8
	if (*(char *)(v6 + 436) > 0) {
		g37 = 4;
		int32_t v7 = random(57); // 0xb62bc
		int32_t v8 = 1;          // 0xb62c4
		v5 += 64 * v7 + 64;
		while (v8 < (int32_t) * (char *)(v6 + 436)) {
			// 0xb62b4
			g37 = 4;
			v7 = random(57);
			v8++;
			v5 += 64 * v7 + 64;
			// continue -> 0xb62b4
		}
		// 0xb62d0
		// branch -> 0xb62e0
	}
	int32_t v9 = 0;    // r26
	int32_t v10;       // 0xb6318
	int32_t v11;       // 0xb6328
	int32_t v12;       // 0xb6338
	int32_t v13;       // 0xb6328
	int32_t *v14;      // 0xb6340
	int32_t v15;       // 0xb6348
	int32_t *v16;      // 0xb6350
	int32_t v17;       // 0xb633c
	int32_t v18;       // 0xb6364
	int32_t *v19;      // 0xb636c
	int32_t *v20;      // 0xb6378
	unsigned char v21; // 0xb631c
	int32_t v22;       // 0xb6354
	int32_t v23;       // 0xb637c
	int32_t result2;   // 0xb638c
	if (function_6db5c(a1, 34) <= 0) {
		// 0xb6318
		v10 = g36;
		v21 = *(char *)(v4 + v10 + 348);
		v11 = v5;
		v12 = v11;
		if (v21 == 0) {
			// 0xb6328
			v13 = 2 * v11;
			v5 = v13;
			v12 = v13;
			// branch -> 0xb632c
		}
		// 0xb632c
		v15 = v12;
		if (v21 == 1) {
			// 0xb6338
			v17 = (v12 / 2 | v12 & -0x80000000) + v12;
			v5 = v17;
			v15 = v17;
			// branch -> 0xb6340
		}
		// 0xb6340
		v14 = (int32_t *)v3;
		*v14 = *v14 + v15;
		v16 = (int32_t *)v3;
		v22 = *(int32_t *)(v2 + v10 + 408);
		if (*v16 > v22) {
			// 0xb6360
			*v16 = v22;
			// branch -> 0xb6364
		}
		// 0xb6364
		v18 = v2 + g36;
		v19 = (int32_t *)(v18 + 396);
		*v19 = v5 + *v19;
		v20 = (int32_t *)(v18 + 396);
		v23 = *(int32_t *)(v18 + 400);
		if (*v20 > v23) {
			// 0xb6388
			*v20 = v23;
			// branch -> 0xb638c
		}
		// 0xb638c
		result2 = *(int32_t *)(g23 - 0x76f0);
		*(int32_t *)result2 = 1;
		// branch -> 0xb6398
		// 0xb6398
		return result2;
	}
	g37 = 6;
	v9++;
	v5 += 64 * random(57) + 64;
	while (v9 < function_6db5c(a1, 34)) {
		// 0xb62e8
		g37 = 6;
		v9++;
		v5 += 64 * random(57) + 64;
		// continue -> 0xb62e8
	}
	// 0xb6318
	v10 = g36;
	v21 = *(char *)(v4 + v10 + 348);
	v11 = v5;
	v12 = v11;
	if (v21 == 0) {
		// 0xb6328
		v13 = 2 * v11;
		v5 = v13;
		v12 = v13;
		// branch -> 0xb632c
	}
	// 0xb632c
	v15 = v12;
	if (v21 == 1) {
		// 0xb6338
		v17 = (v12 / 2 | v12 & -0x80000000) + v12;
		v5 = v17;
		v15 = v17;
		// branch -> 0xb6340
	}
	// 0xb6340
	v14 = (int32_t *)v3;
	*v14 = *v14 + v15;
	v16 = (int32_t *)v3;
	v22 = *(int32_t *)(v2 + v10 + 408);
	if (*v16 > v22) {
		// 0xb6360
		*v16 = v22;
		// branch -> 0xb6364
	}
	// 0xb6364
	v18 = v2 + g36;
	v19 = (int32_t *)(v18 + 396);
	*v19 = v5 + *v19;
	v20 = (int32_t *)(v18 + 396);
	v23 = *(int32_t *)(v18 + 400);
	if (*v20 > v23) {
		// 0xb6388
		*v20 = v23;
		// branch -> 0xb638c
	}
	// 0xb638c
	result2 = *(int32_t *)(g23 - 0x76f0);
	*(int32_t *)result2 = 1;
	// branch -> 0xb6398
	// 0xb6398
	return result2;
}
