
void SetPlayerGPtrs(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int *piVar1;
	byte *pbVar2;
	ulonglong uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	int iVar10;
	undefined4 in_stack_ffffffc8;

	uVar6 = (undefined)param_5;
	uVar5 = (undefined)param_4;
	uVar4 = (undefined)param_2;
	uVar9 = (undefined)param_8;
	uVar8 = (undefined)param_7;
	uVar7 = (undefined)param_6;
	uVar3 = FUN_100b8f7c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	iVar10 = (int)param_1;
	piVar1 = (int *)param_2;
	*piVar1 = iVar10;
	pbVar2 = (byte *)uVar3;
	piVar1[1] = (uint)pbVar2[3] << 0x18 | (uint)pbVar2[2] << 0x10 | (uint)pbVar2[1] << 8 | (uint)*pbVar2;
	piVar1[2] = iVar10;
	piVar1[3] = (uint)pbVar2[7] << 0x18 | (uint)pbVar2[6] << 0x10 | (uint)pbVar2[5] << 8 | (uint)pbVar2[4];
	piVar1[4] = iVar10;
	piVar1[5] = (uint)pbVar2[0xb] << 0x18 | (uint)pbVar2[10] << 0x10 | (uint)pbVar2[9] << 8 | (uint)pbVar2[8];
	piVar1[6] = iVar10;
	piVar1[7] = (uint)pbVar2[0xf] << 0x18 | (uint)pbVar2[0xe] << 0x10 | (uint)pbVar2[0xd] << 8 | (uint)pbVar2[0xc];
	piVar1[8] = iVar10;
	piVar1[9] = (uint)pbVar2[0x13] << 0x18 | (uint)pbVar2[0x12] << 0x10 | (uint)pbVar2[0x11] << 8 | (uint)pbVar2[0x10];
	piVar1[10] = iVar10;
	piVar1[0xb] = (uint)pbVar2[0x17] << 0x18 | (uint)pbVar2[0x16] << 0x10 | (uint)pbVar2[0x15] << 8 | (uint)pbVar2[0x14];
	piVar1[0xc] = iVar10;
	piVar1[0xd] = (uint)pbVar2[0x1b] << 0x18 | (uint)pbVar2[0x1a] << 0x10 | (uint)pbVar2[0x19] << 8 | (uint)pbVar2[0x18];
	piVar1[0xe] = iVar10;
	piVar1[0xf] = (uint)pbVar2[0x1f] << 0x18 | (uint)pbVar2[0x1e] << 0x10 | (uint)pbVar2[0x1d] << 8 | (uint)pbVar2[0x1c];
	FUN_100b9100(iVar10, uVar4, 0x1c, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
	return;
}

void LoadPlrGFX(ulonglong uParm1, uint uParm2, undefined8 uParm3, undefined8 uParm4, undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	char cVar1;
	char cVar2;
	char cVar3;
	uint uVar4;
	uint uVar5;
	int iVar6;
	int iVar7;
	undefined *puVar8;
	undefined4 uVar9;
	int iVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	longlong lVar14;
	longlong lVar15;
	ulonglong uVar16;
	ulonglong uVar17;
	undefined8 in_r13;
	ulonglong uVar18;
	undefined8 unaff_r14;
	ulonglong uVar19;
	undefined8 unaff_r15;
	ulonglong uVar20;
	undefined8 unaff_r16;
	ulonglong uVar21;
	undefined8 unaff_r17;
	ulonglong uVar22;
	undefined8 unaff_r18;
	ulonglong uVar23;
	undefined8 unaff_r19;
	ulonglong uVar24;
	undefined8 unaff_r20;
	ulonglong uVar25;
	undefined8 unaff_r21;
	ulonglong uVar26;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	ulonglong unaff_r26;
	ulonglong unaff_r27;
	ulonglong unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	uint uVar27;
	undefined8 unaff_r31;
	longlong lVar28;
	undefined4 in_stack_fffffe68;
	undefined in_stack_fffffe6f;
	undefined4 in_stack_fffffe78;
	undefined4 in_stack_fffffe7c;
	undefined4 in_stack_fffffe80;
	undefined4 in_stack_fffffe84;
	undefined4 in_stack_fffffe88;
	undefined4 in_stack_fffffe8c;
	undefined4 in_stack_fffffe90;
	undefined4 in_stack_fffffe94;
	undefined auStack360[256];
	undefined auStack104[28];
	undefined4 local_4c;
	undefined4 uStack72;
	undefined4 uStack68;
	undefined4 uStack64;
	undefined4 uStack60;
	undefined4 uStack56;
	undefined4 uStack52;
	undefined4 uStack48;
	undefined4 uStack44;
	undefined4 uStack40;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar10 = _DAT_100f36ac;
	uVar9 = _DAT_100f36a8;
	puVar8 = PTR_DAT_100f183c;
	uVar11 = ZEXT48(&toc);
	local_4c = (undefined4)((ulonglong)in_r13 >> 0x20);
	uStack72 = (undefined4)((ulonglong)unaff_r14 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
	uStack64 = (undefined4)((ulonglong)unaff_r16 >> 0x20);
	uStack60 = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
	uStack52 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
	uStack44 = (undefined4)((ulonglong)unaff_r21 >> 0x20);
	uStack40 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)(unaff_r26 >> 0x20);
	uStack20 = (undefined4)(unaff_r27 >> 0x20);
	uStack16 = (undefined4)(unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar26 = (ulonglong)_DAT_100f36b0;
	uVar25 = (ulonglong)_DAT_100f36b4;
	uVar24 = (ulonglong)_DAT_100f36b8;
	uVar23 = (ulonglong)_DAT_100f36bc;
	uVar22 = (ulonglong)_DAT_100f36c0;
	uVar21 = (ulonglong)_DAT_100f36c4;
	uVar20 = (ulonglong)_DAT_100f36c8;
	uVar19 = (ulonglong)_DAT_100f36cc;
	uVar18 = (ulonglong)_DAT_100f36d0;
	if (3 < (uParm1 & 0xffffffff)) {
		app_fatal(_DAT_100f36e8, uParm1, uParm3, uParm4, uParm5, uParm6, uParm7, uParm8, in_stack_fffffe68,
		    in_stack_fffffe6f, in_stack_fffffe78, in_stack_fffffe7c, in_stack_fffffe80,
		    in_stack_fffffe84, in_stack_fffffe88, in_stack_fffffe8c, in_stack_fffffe90,
		    in_stack_fffffe94);
	}
	iVar6 = (int)uVar11;
	uVar4 = *(uint *)(iVar6 + -0x58f0);
	uVar17 = (ulonglong)uVar4;
	uVar16 = uVar11 - 0x4c5c;
	lVar28 = (ulonglong) * (uint *)(iVar6 + -0x77a8) + uParm1 * 0x55ec;
	uVar12 = (ulonglong) * (uint *)(iVar6 + -0x58ec);
	iVar7 = (int)lVar28;
	cVar1 = *(char *)(iVar6 + -0x4c60 + ((int)*(uint *)(iVar7 + 0x78) >> 4));
	cVar2 = *(char *)((int)uVar16 + (int)*(char *)(iVar7 + 0x15c));
	cVar3 = *(char *)(uVar4 + (*(uint *)(iVar7 + 0x78) & 0xf));
	lVar14 = (longlong)cVar1;
	uVar13 = SEXT18(cVar2);
	lVar15 = (longlong)cVar3;
	sprintf((int)auStack104, *(uint *)(iVar6 + -0x58ec), (int)cVar2, (int)cVar1, (int)cVar3,
	    (int)uVar16, uVar4, uParm8, in_stack_fffffe68, in_stack_fffffe6f, in_stack_fffffe7c,
	    in_stack_fffffe80, in_stack_fffffe84, in_stack_fffffe88, in_stack_fffffe8c,
	    in_stack_fffffe90, in_stack_fffffe94);
	uVar27 = 1;
	uVar4 = *(uint *)(*(int *)((int)uVar11 + -0x58f4) + (int)*(char *)(iVar7 + 0x15c) * 4);
	do {
		if (0x17f < uVar27) {
			return;
		}
		if ((uVar27 & uParm2) != 0) {
			if (uVar27 == 0x10) {
				if (*puVar8 != '\0') {
					unaff_r28 = (ulonglong) * (uint *)(iVar7 + 0x55d4);
					unaff_r26 = lVar28 + 0x2f4;
					unaff_r27 = uVar23;
					goto LAB_100919f4;
				}
			} else {
				if ((int)uVar27 < 0x10) {
					if (uVar27 == 4) {
						if (*puVar8 == '\0')
							goto LAB_10091a3c;
						unaff_r28 = (ulonglong) * (uint *)(iVar7 + 0x55d0);
						unaff_r26 = lVar28 + 0x2a8;
						unaff_r27 = uVar21;
					} else {
						if ((int)uVar27 < 4) {
							if (uVar27 == 2) {
								unaff_r27 = uVar19;
								if (*puVar8 != '\0') {
									unaff_r27 = uVar18;
								}
								unaff_r28 = (ulonglong) * (uint *)(iVar7 + 0x55cc);
								unaff_r26 = lVar28 + 0x260;
							} else {
								if ((1 < (int)uVar27) || ((int)uVar27 < 1))
									goto LAB_100919ec;
								if (*puVar8 == '\0') {
									uVar5 = *(uint *)((int)uVar11 + -0x58fc);
								} else {
									uVar5 = *(uint *)((int)uVar11 + -0x58f8);
								}
								unaff_r28 = (ulonglong) * (uint *)(iVar7 + 0x55c8);
								unaff_r26 = lVar28 + 0x218;
								unaff_r27 = (ulonglong)uVar5;
							}
						} else {
							if (uVar27 == 8) {
								if (*puVar8 == '\0')
									goto LAB_10091a3c;
								unaff_r28 = (ulonglong) * (uint *)(iVar7 + 0x55e0);
								unaff_r26 = lVar28 + 0x3c0;
								unaff_r27 = uVar22;
							} else {
							LAB_100919ec:
								app_fatal(iVar10, uVar12, uVar13, lVar14, lVar15, (int)uVar16, (int)uVar17, uParm8,
								    in_stack_fffffe68, in_stack_fffffe6f, in_stack_fffffe78, in_stack_fffffe7c, in_stack_fffffe80, in_stack_fffffe84, in_stack_fffffe88,
								    in_stack_fffffe8c, in_stack_fffffe90, in_stack_fffffe94);
							}
						}
					}
				LAB_100919f4:
					lVar14 = ZEXT48(register0x0000000c) - 0x68;
					uVar13 = (ulonglong)uVar4;
					lVar15 = lVar14;
					uVar16 = unaff_r27;
					sprintf((int)auStack360, uVar9, uVar4, (int)lVar14, (int)lVar14, (int)unaff_r27,
					    (int)uVar17, uParm8, in_stack_fffffe68, in_stack_fffffe6f, in_stack_fffffe7c,
					    in_stack_fffffe80, in_stack_fffffe84, in_stack_fffffe88, in_stack_fffffe8c,
					    in_stack_fffffe90, in_stack_fffffe94);
					LoadFileWithMem(ZEXT48(register0x0000000c) - 0x168, unaff_r28, uVar13, lVar14, lVar15, (int)uVar16, (int)uVar17, uParm8, in_stack_fffffe68);
					FUN_100b8f64((int)unaff_r28);
					uVar12 = unaff_r26;
					SetPlayerGPtrs(unaff_r28, unaff_r26, uVar13, lVar14, lVar15, (int)uVar16, (int)uVar17, uParm8,
					    in_stack_fffffe68);
					*(uint *)(iVar7 + 0x214) = *(uint *)(iVar7 + 0x214) | uVar27;
				} else {
					if (uVar27 == 0x80) {
						if ((*(uint *)(iVar7 + 0x78) & 0xf) == 0) {
							unaff_r28 = (ulonglong) * (uint *)(iVar7 + 0x55e4);
							unaff_r26 = lVar28 + 0x408;
							unaff_r27 = uVar20;
							goto LAB_100919f4;
						}
					} else {
						if ((int)uVar27 < 0x80) {
							if (uVar27 == 0x40) {
								if (*puVar8 != '\0') {
									unaff_r28 = (ulonglong) * (uint *)(iVar7 + 0x55dc);
									unaff_r26 = lVar28 + 0x374;
									unaff_r27 = uVar25;
									goto LAB_100919f4;
								}
							} else {
								if ((0x3f < (int)uVar27) || (uVar27 != 0x20))
									goto LAB_100919ec;
								if (*puVar8 != '\0') {
									unaff_r28 = (ulonglong) * (uint *)(iVar7 + 0x55d8);
									unaff_r26 = lVar28 + 0x334;
									unaff_r27 = uVar24;
									goto LAB_100919f4;
								}
							}
						} else {
							if (uVar27 != 0x100)
								goto LAB_100919ec;
							if ((*puVar8 != '\0') && (*(char *)(iVar7 + 0x138) != '\0')) {
								unaff_r28 = (ulonglong) * (uint *)(iVar7 + 0x55e8);
								unaff_r26 = lVar28 + 0x450;
								unaff_r27 = uVar26;
								goto LAB_100919f4;
							}
						}
					}
				}
			}
		}
	LAB_10091a3c:
		uVar27 = uVar27 << 1;
	} while (true);
}

void InitPlayerGFX(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar1 = PTR_DAT_100f1828;
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal(_DAT_100f36a4, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
		    in_stack_fffffff0, in_stack_fffffff4);
	}
	if (*(int *)(puVar1 + (int)param_1 * 0x55ec + 0x194) >> 6 == 0) {
		*(undefined4 *)(puVar1 + (int)param_1 * 0x55ec + 0x78) = 0;
		LoadPlrGFX(param_1, 0x80);
	} else {
		LoadPlrGFX(param_1, 0x17f);
	}
	return;
}

ulonglong GetPlrGFXSize(undefined8 uParm1)

{
	undefined4 uVar1;
	char *pcVar2;
	undefined4 uVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	ulonglong uVar7;
	undefined uVar8;
	undefined8 uVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	longlong lVar13;
	undefined uVar14;
	undefined8 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	char *pcVar15;
	undefined8 unaff_r23;
	longlong lVar16;
	undefined8 unaff_r24;
	uint uVar17;
	undefined8 unaff_r25;
	ulonglong uVar18;
	undefined8 unaff_r26;
	undefined4 *puVar19;
	undefined8 unaff_r27;
	char *pcVar20;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffe88;
	undefined in_stack_fffffe8f;
	undefined4 in_stack_fffffe9c;
	undefined4 in_stack_fffffea0;
	undefined4 in_stack_fffffea4;
	undefined4 in_stack_fffffea8;
	undefined4 in_stack_fffffeac;
	undefined4 in_stack_fffffeb0;
	undefined4 in_stack_fffffeb4;
	int local_148;
	undefined auStack324[256];
	undefined auStack68[24];
	undefined4 local_2c;
	undefined4 uStack40;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar3 = _DAT_100f36e4;
	pcVar2 = _DAT_100f36e0;
	uVar1 = _DAT_100f36a8;
	uVar4 = ZEXT48(register0x0000000c);
	uVar5 = ZEXT48(&toc);
	local_2c = (undefined4)((ulonglong)unaff_r21 >> 0x20);
	uStack40 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar17 = 0;
	pcVar20 = (char *)0x100f4374;
	uVar18 = 0;
	puVar19 = _DAT_100f36dc;
	do {
		lVar16 = uVar5 - 0x4c60;
		while (pcVar15 = pcVar2, *(char *)lVar16 != '\0') {
			while (*pcVar15 != '\0') {
				sprintf((int)auStack68, uVar3, (int)*pcVar20, (int)*(char *)lVar16, (int)*pcVar15,
				    (int)in_r8, in_r9, in_r10, in_stack_fffffe88, in_stack_fffffe8f, in_stack_fffffe9c,
				    in_stack_fffffea0, in_stack_fffffea4, in_stack_fffffea8, in_stack_fffffeac,
				    in_stack_fffffeb0, in_stack_fffffeb4);
				lVar11 = uVar4 - 0x44;
				lVar13 = lVar11;
				in_r8 = uParm1;
				sprintf((int)auStack324, uVar1, *puVar19, (int)lVar11, (int)lVar11, (int)uParm1, in_r9, in_r10, in_stack_fffffe88, in_stack_fffffe8f, in_stack_fffffe9c, in_stack_fffffea0,
				    in_stack_fffffea4, in_stack_fffffea8, in_stack_fffffeac, in_stack_fffffeb0,
				    in_stack_fffffeb4);
				uVar9 = 1;
				uVar6 = WOpenFile(uVar4 - 0x144, uVar4 - 0x148, 1, lVar11, lVar13, (int)in_r8, in_r9, in_r10,
				    in_stack_fffffe88);
				uVar14 = (undefined)lVar13;
				uVar12 = (undefined)lVar11;
				uVar10 = (undefined)uVar9;
				uVar7 = uVar18;
				if ((int)uVar6 != 0) {
					uVar8 = 0;
					uVar7 = WGetFileSize(local_148, 0, uVar9, lVar11, lVar13, (int)in_r8, in_r9, in_r10,
					    in_stack_fffffe88);
					WCloseFile((char)local_148, uVar8, uVar10, uVar12, uVar14, (char)in_r8, (char)in_r9,
					    (char)in_r10, in_stack_fffffe88);
					if ((uVar7 & 0xffffffff) < (uVar18 & 0xffffffff)) {
						uVar7 = uVar18;
					}
				}
				uVar18 = uVar7;
				pcVar15 = pcVar15 + 1;
			}
			lVar16 = lVar16 + 1;
		}
		uVar17 = uVar17 + 1;
		puVar19 = puVar19 + 1;
		pcVar20 = pcVar20 + 1;
	} while (uVar17 < 3);
	return uVar18;
}

void InitPlrGFXMem(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	undefined *puVar6;
	int iVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar2 = PTR_DAT_100f1828;
	ppuVar3 = &toc;
	uVar8 = (ulonglong)_DAT_100f36cc;
	uVar9 = (ulonglong)_DAT_100f36d0;
	uVar10 = (ulonglong)_DAT_100f36d4;
	uVar11 = (ulonglong)_DAT_100f36d8;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar3 = &toc;
		app_fatal(_DAT_100f36a0, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4);
	}
	if (*(char *)(ppuVar3 + -0x1305) == '\0') {
		uVar4 = GetPlrGFXSize(uVar10);
		uVar5 = GetPlrGFXSize(uVar11);
		if ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
			puVar6 = (undefined *)GetPlrGFXSize(uVar11);
		} else {
			puVar6 = (undefined *)GetPlrGFXSize(uVar10);
		}
		ppuVar3[-0x1304] = puVar6;
		*(undefined *)(ppuVar3 + -0x1305) = 1;
	}
	iVar7 = DiabloAllocPtr(0, ZEXT48(ppuVar3[-0x1304]), 0x5047464e, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffc0);
	iVar1 = (int)param_1 * 0x55ec;
	*(int *)(puVar2 + iVar1 + 0x55c8) = iVar7;
	if (*(char *)(ppuVar3 + -0x1307) == '\0') {
		uVar10 = GetPlrGFXSize(uVar8);
		uVar11 = GetPlrGFXSize(uVar9);
		if ((uVar10 & 0xffffffff) < (uVar11 & 0xffffffff)) {
			puVar6 = (undefined *)GetPlrGFXSize(uVar9);
		} else {
			puVar6 = (undefined *)GetPlrGFXSize(uVar8);
		}
		ppuVar3[-0x1306] = puVar6;
		*(undefined *)(ppuVar3 + -0x1307) = 1;
	}
	iVar7 = DiabloAllocPtr(0, ZEXT48(ppuVar3[-0x1306]), 0x50474657, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffc0);
	*(int *)(puVar2 + iVar1 + 0x55cc) = iVar7;
	if (*(char *)(ppuVar3 + -0x1309) == '\0') {
		puVar6 = (undefined *)GetPlrGFXSize(ZEXT48(ppuVar3[-0x1643]));
		ppuVar3[-0x1308] = puVar6;
		*(undefined *)(ppuVar3 + -0x1309) = 1;
	}
	iVar7 = DiabloAllocPtr(0, ZEXT48(ppuVar3[-0x1308]), 0x50474641, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffc0);
	*(int *)(puVar2 + iVar1 + 0x55d0) = iVar7;
	if (*(char *)(ppuVar3 + -0x130b) == '\0') {
		puVar6 = (undefined *)GetPlrGFXSize(ZEXT48(ppuVar3[-0x1644]));
		ppuVar3[-0x130a] = puVar6;
		*(undefined *)(ppuVar3 + -0x130b) = 1;
	}
	iVar7 = DiabloAllocPtr(0, ZEXT48(ppuVar3[-0x130a]), 0x50474648, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffc0);
	*(int *)(puVar2 + iVar1 + 0x55e0) = iVar7;
	if (*(char *)(ppuVar3 + -0x130d) == '\0') {
		puVar6 = (undefined *)GetPlrGFXSize(ZEXT48(ppuVar3[-0x1645]));
		ppuVar3[-0x130c] = puVar6;
		*(undefined *)(ppuVar3 + -0x130d) = 1;
	}
	iVar7 = DiabloAllocPtr(0, ZEXT48(ppuVar3[-0x130c]), 0x5047464c, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffc0);
	*(int *)(puVar2 + iVar1 + 0x55d4) = iVar7;
	if (*(char *)(ppuVar3 + -0x130f) == '\0') {
		puVar6 = (undefined *)GetPlrGFXSize(ZEXT48(ppuVar3[-0x1646]));
		ppuVar3[-0x130e] = puVar6;
		*(undefined *)(ppuVar3 + -0x130f) = 1;
	}
	iVar7 = DiabloAllocPtr(0, ZEXT48(ppuVar3[-0x130e]), 0x50474646, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffc0);
	*(int *)(puVar2 + iVar1 + 0x55d8) = iVar7;
	if (*(char *)(ppuVar3 + -0x1311) == '\0') {
		puVar6 = (undefined *)GetPlrGFXSize(ZEXT48(ppuVar3[-0x1647]));
		ppuVar3[-0x1310] = puVar6;
		*(undefined *)(ppuVar3 + -0x1311) = 1;
	}
	iVar7 = DiabloAllocPtr(0, ZEXT48(ppuVar3[-0x1310]), 0x50474654, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffc0);
	*(int *)(puVar2 + iVar1 + 0x55dc) = iVar7;
	if (*(char *)(ppuVar3 + -0x1313) == '\0') {
		puVar6 = (undefined *)GetPlrGFXSize(ZEXT48(ppuVar3[-0x1642]));
		ppuVar3[-0x1312] = puVar6;
		*(undefined *)(ppuVar3 + -0x1313) = 1;
	}
	iVar7 = DiabloAllocPtr(0, ZEXT48(ppuVar3[-0x1312]), 0x50474644, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffc0);
	*(int *)(puVar2 + iVar1 + 0x55e4) = iVar7;
	if (*(char *)(ppuVar3 + -0x1315) == '\0') {
		puVar6 = (undefined *)GetPlrGFXSize(ZEXT48(ppuVar3[-0x1648]));
		ppuVar3[-0x1314] = puVar6;
		*(undefined *)(ppuVar3 + -0x1315) = 1;
	}
	iVar7 = DiabloAllocPtr(0, ZEXT48(ppuVar3[-0x1314]), 0x50474642, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffc0);
	*(int *)(puVar2 + iVar1 + 0x55e8) = iVar7;
	*(undefined4 *)(puVar2 + iVar1 + 0x214) = 0;
	return;
}

void FreePlayerGFX(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar3 = PTR_DAT_100f1828;
	uVar6 = (undefined)param_5;
	uVar5 = (undefined)param_4;
	uVar4 = (undefined)param_3;
	uVar9 = (undefined)param_8;
	uVar8 = (undefined)param_7;
	uVar7 = (undefined)param_6;
	if (3 < (param_1 & 0xffffffff)) {
		param_2._7_1_ = (char)param_1;
		app_fatal(_DAT_100f369c, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
		    in_stack_fffffff0, in_stack_fffffff4);
	}
	iVar2 = (int)param_1 * 0x55ec;
	iVar1 = *(int *)(puVar3 + iVar2 + 0x55c8);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			FUN_100b9100(iVar1, (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
		}
		mem_free_dbg((int **)(puVar3 + iVar2 + 0x55c8), (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8,
		    uVar9, in_stack_ffffffc8);
	}
	iVar1 = *(int *)(puVar3 + iVar2 + 0x55cc);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			FUN_100b9100(iVar1, (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
		}
		mem_free_dbg((int **)(puVar3 + iVar2 + 0x55cc), (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8,
		    uVar9, in_stack_ffffffc8);
	}
	iVar1 = *(int *)(puVar3 + iVar2 + 0x55d0);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			FUN_100b9100(iVar1, (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
		}
		mem_free_dbg((int **)(puVar3 + iVar2 + 0x55d0), (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8,
		    uVar9, in_stack_ffffffc8);
	}
	iVar1 = *(int *)(puVar3 + iVar2 + 0x55e0);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			FUN_100b9100(iVar1, (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
		}
		mem_free_dbg((int **)(puVar3 + iVar2 + 0x55e0), (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8,
		    uVar9, in_stack_ffffffc8);
	}
	iVar1 = *(int *)(puVar3 + iVar2 + 0x55d4);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			FUN_100b9100(iVar1, (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
		}
		mem_free_dbg((int **)(puVar3 + iVar2 + 0x55d4), (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8,
		    uVar9, in_stack_ffffffc8);
	}
	iVar1 = *(int *)(puVar3 + iVar2 + 0x55d8);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			FUN_100b9100(iVar1, (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
		}
		mem_free_dbg((int **)(puVar3 + iVar2 + 0x55d8), (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8,
		    uVar9, in_stack_ffffffc8);
	}
	iVar1 = *(int *)(puVar3 + iVar2 + 0x55dc);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			FUN_100b9100(iVar1, (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
		}
		mem_free_dbg((int **)(puVar3 + iVar2 + 0x55dc), (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8,
		    uVar9, in_stack_ffffffc8);
	}
	iVar1 = *(int *)(puVar3 + iVar2 + 0x55e4);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			FUN_100b9100(iVar1, (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
		}
		mem_free_dbg((int **)(puVar3 + iVar2 + 0x55e4), (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8,
		    uVar9, in_stack_ffffffc8);
	}
	iVar1 = *(int *)(puVar3 + iVar2 + 0x55e8);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			FUN_100b9100(iVar1, (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
		}
		mem_free_dbg((int **)(puVar3 + iVar2 + 0x55e8), (undefined)param_2, uVar4, uVar5, uVar6, uVar7, uVar8,
		    uVar9, in_stack_ffffffc8);
	}
	*(undefined4 *)(puVar3 + iVar2 + 0x214) = 0;
	return;
}

void NewPlrAnim(ulonglong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar1 = PTR_DAT_100f1828;
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal(_DAT_100f3698, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	puVar1 = puVar1 + (int)param_1 * 0x55ec;
	*(undefined4 *)(puVar1 + 0x7c) = param_2;
	*(int *)(puVar1 + 0x88) = (int)param_3;
	*(undefined4 *)(puVar1 + 0x8c) = 1;
	*(undefined4 *)(puVar1 + 0x84) = 0;
	*(int *)(puVar1 + 0x80) = (int)param_4;
	*(int *)(puVar1 + 0x90) = (int)param_5;
	*(int *)(puVar1 + 0x94) = (int)param_5 + -0x40 >> 1;
	return;
}

void ClearPlrPVars(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar1 = PTR_DAT_100f1828;
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal(_DAT_100f3694, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
		    in_stack_fffffff0, in_stack_fffffff4);
	}
	puVar1 = puVar1 + (int)param_1 * 0x55ec;
	*(undefined4 *)(puVar1 + 0x1d0) = 0;
	*(undefined4 *)(puVar1 + 0x1d4) = 0;
	*(undefined4 *)(puVar1 + 0x1d8) = 0;
	*(undefined4 *)(puVar1 + 0x1dc) = 0;
	*(undefined4 *)(puVar1 + 0x1e0) = 0;
	*(undefined4 *)(puVar1 + 0x1e4) = 0;
	*(undefined4 *)(puVar1 + 0x1e8) = 0;
	*(undefined4 *)(puVar1 + 0x1ec) = 0;
	return;
}

void SetPlrAnims(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	char cVar2;
	char *pcVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	uint uVar8;
	int iVar9;
	undefined *puVar10;
	undefined **ppuVar11;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	iVar4 = _DAT_100f368c;
	puVar10 = PTR_DAT_100f1828;
	ppuVar11 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar11 = &toc;
		app_fatal(_DAT_100f3690, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar9 = (int)param_1 * 0x55ec;
	pcVar3 = ppuVar11[-0x1de5];
	puVar7 = puVar10 + iVar9;
	*(undefined4 *)(puVar7 + 0x25c) = 0x60;
	*(undefined4 *)(puVar7 + 0x2a4) = 0x60;
	*(undefined4 *)(puVar7 + 0x2ec) = 0x80;
	*(undefined4 *)(puVar7 + 0x404) = 0x60;
	*(undefined4 *)(puVar7 + 0x3b8) = 0x60;
	*(undefined4 *)(puVar7 + 0x44c) = 0x80;
	*(undefined4 *)(puVar7 + 0x494) = 0x60;
	cVar1 = *pcVar3;
	cVar2 = puVar7[0x15c];
	if (cVar1 == '\0') {
		iVar4 = iVar4 + (int)cVar2 * 0xb;
		*(int *)(puVar7 + 600) = (int)*(char *)(iVar4 + 7);
		*(int *)(puVar7 + 0x2a0) = (int)*(char *)(iVar4 + 8);
		*(int *)(puVar7 + 0x448) = (int)*(char *)(iVar4 + 4);
		*(int *)(puVar7 + 0x3b4) = (int)*(char *)(iVar4 + 5);
		*(int *)(puVar7 + 0x3bc) = (int)*(char *)(iVar4 + 10);
	} else {
		iVar5 = iVar4 + (int)cVar2 * 0xb;
		*(int *)(puVar7 + 600) = (int)*(char *)(iVar4 + (int)cVar2 * 0xb);
		*(int *)(puVar7 + 0x2a0) = (int)*(char *)(iVar5 + 2);
		*(int *)(puVar7 + 0x2e8) = (int)*(char *)(iVar5 + 1);
		*(int *)(puVar7 + 0x400) = (int)*(char *)(iVar5 + 6);
		*(int *)(puVar7 + 0x3b4) = (int)*(char *)(iVar5 + 5);
		*(int *)(puVar7 + 0x448) = (int)*(char *)(iVar5 + 4);
		*(int *)(puVar7 + 0x490) = (int)*(char *)(iVar5 + 3);
		*(int *)(puVar7 + 0x2f0) = (int)*(char *)(iVar5 + 9);
		*(int *)(puVar7 + 0x3bc) = (int)*(char *)(iVar5 + 10);
	}
	puVar6 = puVar10 + iVar9;
	uVar8 = *(uint *)(puVar6 + 0x78) & 0xf;
	if (cVar2 == '\0') {
		if (uVar8 == 4) {
			if (cVar1 != '\0') {
				*(undefined4 *)(puVar6 + 600) = 8;
			}
			*(undefined4 *)(puVar7 + 0x2ec) = 0x60;
			*(undefined4 *)(puVar10 + iVar9 + 0x2f0) = 0xb;
		} else {
			if (uVar8 == 5) {
				*(undefined4 *)(puVar6 + 0x2e8) = 0x14;
				*(undefined4 *)(puVar6 + 0x2f0) = 10;
			} else {
				if (uVar8 == 8) {
					*(undefined4 *)(puVar6 + 0x2e8) = 0x10;
					*(undefined4 *)(puVar6 + 0x2f0) = 0xb;
				}
			}
		}
	} else {
		if (cVar2 == '\x01') {
			if (uVar8 == 5) {
				*(undefined4 *)(puVar6 + 0x2e8) = 0x16;
				*(undefined4 *)(puVar6 + 0x2f0) = 0xd;
			} else {
				if (uVar8 == 4) {
					*(undefined4 *)(puVar6 + 0x2e8) = 0xc;
					*(undefined4 *)(puVar6 + 0x2f0) = 7;
				} else {
					if (uVar8 == 8) {
						*(undefined4 *)(puVar6 + 0x2e8) = 0x10;
						*(undefined4 *)(puVar6 + 0x2f0) = 0xb;
					}
				}
			}
		} else {
			if (cVar2 == '\x02') {
				*(undefined4 *)(puVar7 + 0x3b8) = 0x80;
				if (uVar8 == 0) {
					*(undefined4 *)(puVar6 + 0x2e8) = 0x14;
				} else {
					if (uVar8 == 1) {
						*(undefined4 *)(puVar6 + 0x2f0) = 9;
					} else {
						if (uVar8 == 4) {
							*(undefined4 *)(puVar6 + 0x2e8) = 0x14;
							*(undefined4 *)(puVar6 + 0x2f0) = 0x10;
						} else {
							if (uVar8 == 5) {
								*(undefined4 *)(puVar6 + 0x2e8) = 0x18;
								*(undefined4 *)(puVar6 + 0x2f0) = 0x10;
							}
						}
					}
				}
			}
		}
	}
	return;
}

void ClearPlrRVars(int param_1)

{
	*(undefined *)(param_1 + 0x5595) = 0;
	*(undefined *)(param_1 + 0x5596) = 0;
	*(undefined *)(param_1 + 0x5597) = 0;
	*(undefined2 *)(param_1 + 0x5598) = 0;
	*(undefined2 *)(param_1 + 0x559a) = 0;
	*(undefined2 *)(param_1 + 0x559c) = 0;
	*(undefined2 *)(param_1 + 0x559e) = 0;
	*(undefined2 *)(param_1 + 0x55a0) = 0;
	*(undefined2 *)(param_1 + 0x55a2) = 0;
	*(undefined2 *)(param_1 + 0x55a4) = 0;
	*(undefined2 *)(param_1 + 0x55a6) = 0;
	*(undefined4 *)(param_1 + 0x55ac) = 0;
	*(undefined4 *)(param_1 + 0x55b0) = 0;
	*(undefined4 *)(param_1 + 0x55b4) = 0;
	*(undefined4 *)(param_1 + 0x55b8) = 0;
	*(undefined4 *)(param_1 + 0x55bc) = 0;
	*(undefined4 *)(param_1 + 0x55c0) = 0;
	*(undefined4 *)(param_1 + 0x55c4) = 0;
	return;
}

void CreatePlayer(ulonglong param_1, char param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	longlong lVar2;
	undefined *puVar3;
	undefined uVar6;
	undefined4 uVar4;
	char cVar7;
	int iVar5;
	int iVar9;
	longlong lVar8;
	ulonglong uVar10;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	int local_5c;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	uVar10 = ZEXT48(PTR_DAT_100f1828);
	puVar3 = PTR_DAT_100f1828 + (int)(param_1 * 0x55ec);
	cVar7 = param_2;
	uVar6 = ClearPlrRVars((int)puVar3);
	uVar4 = GetTickCount(uVar6, cVar7, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, (char)in_stack_ffffff98, in_stack_ffffff9f,
	    local_5c);
	SetRndSeed(uVar4);
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal(*(int *)(local_5c + -0x5948), param_1, param_3, param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4);
	}
	puVar3[0x15c] = param_2;
	iVar9 = (int)param_2 * 4;
	cVar7 = (char)*(undefined4 *)(*(int *)(local_5c + -0x6f9c) + iVar9);
	if (cVar7 < '\0') {
		cVar7 = '\0';
	}
	iVar5 = *(int *)(local_5c + -0x6fa0);
	*(int *)(puVar3 + 0x160) = (int)cVar7;
	*(int *)(puVar3 + 0x164) = (int)cVar7;
	cVar7 = (char)*(undefined4 *)(iVar5 + iVar9);
	if (cVar7 < '\0') {
		cVar7 = '\0';
	}
	iVar5 = *(int *)(local_5c + -0x6fa4);
	*(int *)(puVar3 + 0x168) = (int)cVar7;
	*(int *)(puVar3 + 0x16c) = (int)cVar7;
	cVar7 = (char)*(undefined4 *)(iVar5 + iVar9);
	if (cVar7 < '\0') {
		cVar7 = '\0';
	}
	iVar5 = *(int *)(local_5c + -0x6fa8);
	*(int *)(puVar3 + 0x170) = (int)cVar7;
	*(int *)(puVar3 + 0x174) = (int)cVar7;
	cVar7 = (char)*(undefined4 *)(iVar5 + iVar9);
	if (cVar7 < '\0') {
		cVar7 = '\0';
	}
	*(int *)(puVar3 + 0x178) = (int)cVar7;
	*(int *)(puVar3 + 0x17c) = (int)cVar7;
	*(undefined4 *)(puVar3 + 0x180) = 0;
	puVar3[0x5590] = 0;
	puVar3[0x5591] = 0;
	puVar3[0x5592] = 0;
	*(undefined4 *)(puVar3 + 0x55a8) = 0;
	if (puVar3[0x15c] == '\x01') {
		iVar5 = (int)(char)puVar3[0x1b4] * (*(int *)(puVar3 + 0x160) + *(int *)(puVar3 + 0x170));
		uVar1 = iVar5 / 200 + (iVar5 >> 0x1f);
		*(uint *)(puVar3 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	} else {
		uVar1 = (*(int *)(puVar3 + 0x160) * (int)(char)puVar3[0x1b4]) / 100 + (*(int *)(puVar3 + 0x160) * (int)(char)puVar3[0x1b4] >> 0x1f);
		*(uint *)(puVar3 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	}
	*(undefined4 *)(puVar3 + 0x188) = *(undefined4 *)(*(int *)(local_5c + -0x594c) + iVar9);
	*(int *)(puVar3 + 0x194) = (*(int *)(puVar3 + 0x178) + 10) * 0x40;
	if (puVar3[0x15c] == '\0') {
		*(int *)(puVar3 + 0x194) = *(int *)(puVar3 + 0x194) << 1;
	}
	if (puVar3[0x15c] == '\x01') {
		*(int *)(puVar3 + 0x194) = *(int *)(puVar3 + 0x194) + (*(int *)(puVar3 + 0x194) >> 1);
	}
	*(undefined4 *)(puVar3 + 0x198) = *(undefined4 *)(puVar3 + 0x194);
	*(undefined4 *)(puVar3 + 0x18c) = *(undefined4 *)(puVar3 + 0x194);
	*(undefined4 *)(puVar3 + 400) = *(undefined4 *)(puVar3 + 0x194);
	*(int *)(puVar3 + 0x1a8) = *(int *)(puVar3 + 0x168) << 6;
	if (puVar3[0x15c] == '\x02') {
		*(int *)(puVar3 + 0x1a8) = *(int *)(puVar3 + 0x1a8) << 1;
	}
	if (puVar3[0x15c] == '\x01') {
		*(int *)(puVar3 + 0x1a8) = *(int *)(puVar3 + 0x1a8) + (*(int *)(puVar3 + 0x1a8) >> 1);
	}
	iVar9 = *(int *)(local_5c + -0x5950);
	*(undefined4 *)(puVar3 + 0x1ac) = *(undefined4 *)(puVar3 + 0x1a8);
	uVar1 = *(uint *)(puVar3 + 0x1a8);
	*(uint *)(puVar3 + 0x1a0) = uVar1;
	*(undefined4 *)(puVar3 + 0x1a4) = *(undefined4 *)(puVar3 + 0x1a8);
	puVar3[0x1b4] = 1;
	puVar3[0x1b5] = puVar3[0x1b4];
	*(undefined4 *)(puVar3 + 0x1b8) = 0;
	*(undefined4 *)(puVar3 + 0x1bc) = *(undefined4 *)(puVar3 + 0x1b8);
	*(undefined4 *)(puVar3 + 0x1c0) = *(undefined4 *)(iVar9 + 4);
	puVar3[0x1c4] = 0;
	puVar3[0x1c5] = 0;
	puVar3[0x1c6] = 0;
	puVar3[0x1c7] = 0;
	puVar3[0x13a] = 10;
	*(undefined4 *)(puVar3 + 0x1cc) = 0;
	if (param_2 == '\0') {
		*(undefined4 *)(puVar3 + 0x110) = 0x2000000;
		*(undefined4 *)(puVar3 + 0x10c) = 0;
	} else {
		if (param_2 == '\x01') {
			*(undefined4 *)(puVar3 + 0x110) = 0x8000000;
			*(undefined4 *)(puVar3 + 0x10c) = 0;
		} else {
			if (param_2 == '\x02') {
				*(undefined4 *)(puVar3 + 0x110) = 0x4000000;
				*(undefined4 *)(puVar3 + 0x10c) = 0;
			}
		}
	}
	if (param_2 == '\x02') {
		*(undefined4 *)(puVar3 + 0x108) = 1;
		*(undefined4 *)(puVar3 + 0x104) = 0;
	} else {
		*(undefined4 *)(puVar3 + 0x108) = 0;
		*(undefined4 *)(puVar3 + 0x104) = 0;
	}
	puVar3[0xc1] = 0;
	puVar3[0xc2] = 0;
	puVar3[0xc3] = 0;
	puVar3[0xc4] = 0;
	puVar3[0xc5] = 0;
	puVar3[0xc6] = 0;
	puVar3[199] = 0;
	puVar3[200] = 0;
	puVar3[0xc9] = 0;
	puVar3[0xca] = 0;
	puVar3[0xcb] = 0;
	puVar3[0xcc] = 0;
	puVar3[0xcd] = 0;
	puVar3[0xce] = 0;
	puVar3[0xcf] = 0;
	puVar3[0xd0] = 0;
	puVar3[0xd1] = 0;
	puVar3[0xd2] = 0;
	puVar3[0xd3] = 0;
	puVar3[0xd4] = 0;
	puVar3[0xd5] = 0;
	puVar3[0xd6] = 0;
	puVar3[0xd7] = 0;
	puVar3[0xd8] = 0;
	puVar3[0xd9] = 0;
	puVar3[0xda] = 0;
	puVar3[0xdb] = 0;
	puVar3[0xdc] = 0;
	puVar3[0xdd] = 0;
	puVar3[0xde] = 0;
	puVar3[0xdf] = 0;
	puVar3[0xe0] = 0;
	puVar3[0xe1] = 0;
	puVar3[0xe2] = 0;
	puVar3[0xe3] = 0;
	puVar3[0xe4] = 0;
	puVar3[0xe5] = 0;
	puVar3[0xe6] = 0;
	puVar3[0xe7] = 0;
	puVar3[0xe8] = 0;
	puVar3[0xe9] = 0;
	puVar3[0xea] = 0;
	puVar3[0xeb] = 0;
	puVar3[0xec] = 0;
	puVar3[0xed] = 0;
	puVar3[0xee] = 0;
	puVar3[0xef] = 0;
	puVar3[0xf0] = 0;
	puVar3[0xf1] = 0;
	puVar3[0xf2] = 0;
	puVar3[0xf3] = 0;
	puVar3[0xf4] = 0;
	puVar3[0xf5] = 0;
	puVar3[0xf6] = 0;
	puVar3[0xf7] = 0;
	puVar3[0xf8] = 0;
	puVar3[0xf9] = 0;
	puVar3[0xfa] = 0;
	puVar3[0xfb] = 0;
	puVar3[0xfc] = 0;
	puVar3[0xfd] = 0;
	puVar3[0xfe] = 0;
	puVar3[0xff] = 0;
	puVar3[0x100] = 0;
	puVar3[0x11c] = 0;
	if (puVar3[0x15c] == '\x02') {
		puVar3[0xc2] = 2;
	}
	*(undefined4 *)(puVar3 + 0x120) = 0xffffffff;
	*(undefined4 *)(puVar3 + 0x124) = 0xffffffff;
	*(undefined4 *)(puVar3 + 0x128) = 0xffffffff;
	if (param_2 == '\0') {
		*(undefined4 *)(puVar3 + 0x78) = 3;
	} else {
		if (param_2 == '\x01') {
			*(undefined4 *)(puVar3 + 0x78) = 4;
		} else {
			if (param_2 == '\x02') {
				*(undefined4 *)(puVar3 + 0x78) = 8;
			}
		}
	}
	puVar3[0x1f0] = 0;
	iVar9 = 0x10;
	lVar2 = 1;
	puVar3[0x1f1] = 0;
	puVar3[0x1f2] = 0;
	puVar3[499] = 0;
	puVar3[500] = 0;
	puVar3[0x1f5] = 0;
	puVar3[0x1f6] = 0;
	puVar3[0x1f7] = 0;
	puVar3[0x1f8] = 0;
	puVar3[0x1f9] = 0;
	puVar3[0x1fa] = 0;
	puVar3[0x1fb] = 0;
	puVar3[0x1fc] = 0;
	puVar3[0x1fd] = 0;
	puVar3[0x1fe] = 0;
	puVar3[0x1ff] = 0;
	do {
		iVar5 = iVar9 + 0x1f0;
		iVar9 = iVar9 + 1;
		puVar3[iVar5] = 0;
		lVar2 = lVar2 + -1;
	} while (lVar2 != 0);
	puVar3[0x201] = 0;
	lVar8 = 8;
	lVar2 = 2;
	puVar3[0x202] = 0;
	puVar3[0x203] = 0;
	puVar3[0x204] = 0;
	puVar3[0x205] = 0;
	puVar3[0x206] = 0;
	puVar3[0x207] = 0;
	puVar3[0x208] = 0;
	do {
		iVar9 = (int)lVar8;
		lVar8 = lVar8 + 1;
		puVar3[iVar9 + 0x201] = 0;
		lVar2 = lVar2 + -1;
	} while (lVar2 != 0);
	lVar2 = uVar10 + param_1 * 0x55ec;
	puVar3[0x13b] = 0;
	puVar3[0x5590] = 0;
	puVar3[0x5592] = 0;
	iVar9 = (int)lVar2;
	*(undefined *)(iVar9 + 0x5593) = 0;
	*(undefined *)(iVar9 + 0x5594) = 0;
	InitDungMsgs(param_1, lVar2, lVar8, 1, (ulonglong)uVar1, param_6, param_7, param_8, in_stack_ffffff98);
	CreatePlrItems(param_1);
	SetRndSeed(0);
	return;
}

longlong CalcStatDiff(int param_1)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	puVar1 = PTR_DAT_100f1870 + (int)(char)puVar2[0x15c] * 0x10;
	return ((ulonglong) * (uint *)(PTR_DAT_100f1870 + (int)(char)puVar2[0x15c] * 0x10) - (ulonglong) * (uint *)(puVar2 + 0x164)) + ((ulonglong) * (uint *)(puVar1 + 4) - (ulonglong) * (uint *)(puVar2 + 0x16c)) + ((ulonglong) * (uint *)(puVar1 + 8) - (ulonglong) * (uint *)(puVar2 + 0x174)) + ((ulonglong) * (uint *)(puVar1 + 0xc) - (ulonglong) * (uint *)(puVar2 + 0x17c));
}

void NextPlrLevel(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	int *piVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	int iVar8;
	undefined **ppuVar9;
	longlong lVar10;
	int iVar11;
	int iVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = PTR_DAT_100f1828;
	ppuVar9 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar9 = &toc;
		app_fatal(_DAT_100f367c, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar8 = (int)param_1;
	iVar7 = iVar8 * 0x55ec;
	puVar3 = puVar6 + iVar7;
	puVar4 = puVar6 + iVar7;
	puVar3[0x1b4] = puVar3[0x1b4] + '\x01';
	puVar4[0x1b5] = puVar4[0x1b5] + '\x01';
	lVar10 = CalcStatDiff(iVar8);
	if ((int)lVar10 < 5) {
		lVar10 = CalcStatDiff(iVar8);
		*(int *)(puVar4 + 0x180) = (int)lVar10;
	} else {
		*(int *)(puVar4 + 0x180) = *(int *)(puVar4 + 0x180) + 5;
	}
	puVar4 = puVar6 + iVar7;
	*(undefined4 *)(puVar4 + 0x1c0) = *(undefined4 *)(ppuVar9[-0x1654] + (int)(char)puVar3[0x1b4] * 4);
	if (puVar4[0x15c] == '\x02') {
		iVar12 = 0x40;
	} else {
		iVar12 = 0x80;
	}
	cVar1 = *ppuVar9[-0x1dfc];
	if (cVar1 == '\x01') {
		iVar12 = iVar12 + 1;
	}
	puVar3 = puVar6 + iVar7;
	puVar5 = puVar6 + iVar7;
	piVar2 = (int *)ppuVar9[-0x1deb];
	*(int *)(puVar3 + 0x198) = *(int *)(puVar3 + 0x198) + iVar12;
	*(undefined4 *)(puVar5 + 0x194) = *(undefined4 *)(puVar3 + 0x198);
	*(int *)(puVar5 + 400) = *(int *)(puVar5 + 400) + iVar12;
	*(undefined4 *)(puVar5 + 0x18c) = *(undefined4 *)(puVar5 + 400);
	iVar12 = *piVar2;
	if (iVar8 == iVar12) {
		*(undefined4 *)ppuVar9[-0x1dbc] = 1;
	}
	if (puVar4[0x15c] == '\0') {
		iVar11 = 0x40;
	} else {
		iVar11 = 0x80;
	}
	if (cVar1 == '\x01') {
		iVar11 = iVar11 + 1;
	}
	puVar3 = puVar6 + iVar7;
	puVar4 = puVar6 + iVar7;
	puVar6 = puVar6 + iVar7;
	*(int *)(puVar3 + 0x1ac) = *(int *)(puVar3 + 0x1ac) + iVar11;
	*(int *)(puVar4 + 0x1a4) = *(int *)(puVar4 + 0x1a4) + iVar11;
	if ((*(uint *)(puVar6 + 0x5568) & 0x8000000) == 0) {
		*(int *)(puVar6 + 0x1a8) = *(int *)(puVar3 + 0x1ac);
		*(int *)(puVar6 + 0x1a0) = *(int *)(puVar4 + 0x1a4);
	}
	if (iVar8 == iVar12) {
		*(undefined4 *)ppuVar9[-0x1dbd] = 1;
	}
	return;
}

void AddPlrExperience(ulonglong param_1, uint param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, int param_7, int param_8, undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	uint *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	longlong lVar6;
	ulonglong uVar7;
	undefined **ppuVar8;
	longlong lVar9;
	longlong lVar10;
	char *pcVar11;
	undefined8 uVar12;
	ulonglong uVar13;
	int iVar14;
	longlong lVar15;
	undefined4 uVar16;
	longlong lVar17;
	undefined4 uVar18;
	longlong lVar19;
	int *piVar20;
	int iVar21;
	ulonglong uVar22;
	int iVar23;
	double dVar24;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	piVar20 = _DAT_100f3680;
	iVar23 = _DAT_100f3678;
	puVar5 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	lVar17 = (longlong)param_8;
	lVar15 = (longlong)param_7;
	ppuVar8 = &toc;
	uVar22 = ZEXT48(PTR_DAT_100f1828);
	uVar2 = *(uint *)PTR_DAT_100f1824;
	if ((uint)param_1 == uVar2) {
		uVar12 = param_3;
		if (3 < uVar2) {
			uVar12 = param_3;
			ppuVar8 = &toc;
			app_fatal(_DAT_100f3678, (ulonglong)uVar2, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98, in_stack_ffffff9c,
			    in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8, in_stack_ffffffac,
			    in_stack_ffffffb0, in_stack_ffffffb4);
		}
		if (3 < (param_1 & 0xffffffff)) {
			app_fatal(iVar23, param_1, uVar12, param_4, param_5, param_6, (int)lVar15, (int)lVar17,
			    in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98, in_stack_ffffff9c,
			    in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8, in_stack_ffffffac,
			    in_stack_ffffffb0, in_stack_ffffffb4);
		}
		uVar18 = (undefined4)lVar17;
		uVar16 = (undefined4)lVar15;
		if (0 < *(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x194)) {
			lVar9 = param_1 * 0x55ec;
			lVar19 = uVar22 + 0x1b4;
			dVar24 = *(double *)(ppuVar8 + -0x1302);
			lVar10 = lVar19 + lVar9;
			pcVar11 = (char *)lVar10;
			cVar1 = *pcVar11;
			iVar23 = (int)(((double)CONCAT44(0x43300000, (uint)param_3 ^ 0x80000000) - dVar24) * (*(double *)(ppuVar8 + -0x1300) * (((double)CONCAT44(0x43300000, param_2 ^ 0x80000000) - dVar24) - ((double)CONCAT44(0x43300000, (int)cVar1 ^ 0x80000000) - dVar24)) + *(double *)(ppuVar8 + -0x12fe)));
			uVar13 = (longlong)iVar23 & 0xffffffff;
			if (iVar23 < 0) {
				uVar13 = 0;
			}
			if (1 < (byte)*ppuVar8[-0x1dfc]) {
				if (cVar1 < '\0') {
					lVar6 = 0;
				} else {
					lVar6 = (longlong)cVar1;
				}
				if (0x31 < (int)lVar6) {
					lVar6 = 0x32;
				}
				uVar2 = piVar20[(int)lVar6] / 0x14 + (piVar20[(int)lVar6] >> 0x1f);
				uVar7 = (ulonglong)uVar2 + (ulonglong)(uVar2 >> 0x1f);
				if ((int)uVar13 < (int)uVar7) {
					uVar7 = uVar13;
				}
				uVar13 = lVar6 * 200;
				if ((int)uVar7 < (int)uVar13) {
					uVar13 = uVar7;
				}
			}
			lVar6 = uVar22 + lVar9;
			iVar23 = (int)lVar6;
			uVar2 = *(uint *)(iVar23 + 0x1b8);
			uVar22 = (ulonglong)uVar2;
			iVar14 = (int)uVar13;
			*(int *)(iVar23 + 0x1b8) = uVar2 + iVar14;
			lVar6 = lVar6 + 0x1b8;
			puVar3 = (uint *)lVar6;
			if (2000000000 < *puVar3) {
				*puVar3 = 2000000000;
			}
			uVar7 = (ulonglong)*puVar3;
			if ((int)*puVar3 < piVar20[0x31]) {
				iVar23 = 0;
				while (*piVar20 <= *(int *)(puVar5 + (int)lVar9 + 0x1b8)) {
					piVar20 = piVar20 + 1;
					iVar23 = iVar23 + 1;
				}
				cVar1 = *pcVar11;
				if (iVar23 != (int)cVar1) {
					iVar21 = 0;
					while (true) {
						uVar18 = (undefined4)lVar17;
						uVar16 = (undefined4)lVar15;
						iVar14 = (int)uVar13;
						if (iVar23 - (int)cVar1 <= iVar21)
							break;
						NextPlrLevel(param_1, lVar10, uVar7, uVar22, lVar6, iVar14, uVar16, uVar18, in_stack_ffffff88);
						iVar21 = iVar21 + 1;
					}
				}
				NetSendCmdParam1(0, 0x33, (longlong) * (char *)((int)lVar19 + *(int *)puVar4 * 0x55ec), uVar22, lVar6,
				    iVar14, uVar16, uVar18, in_stack_ffffff88);
			} else {
				*pcVar11 = '2';
			}
		}
	}
	return;
}

void AddPlrMonstExper(uint uParm1, int iParm2, char param_3)

{
	bool bVar1;
	uint uVar2;
	ulonglong uVar3;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	uVar3 = SEXT18(param_3);
	bVar1 = (uVar3 & 1) != 0;
	uVar2 = (uint)bVar1;
	if ((uVar3 & 2) != 0) {
		uVar2 = (uint)bVar1 + 1;
	}
	if ((uVar3 & 4) != 0) {
		uVar2 = uVar2 + 1;
	}
	if ((uVar3 & 8) != 0) {
		uVar2 = uVar2 + 1;
	}
	if (uVar2 != 0) {
		if ((uVar3 & (ulonglong)(uint)(1 << (ulonglong) * (uint *)PTR_DAT_100f1824)) != 0) {
			AddPlrExperience((ulonglong) * (uint *)PTR_DAT_100f1824, uParm1, (longlong)(iParm2 / (int)uVar2), 1,
			    uVar3, uParm1, in_r9, in_r10, in_stack_ffffffc8);
		}
	}
	return;
}

void InitPlayer(ulonglong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	char cVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	uint *puVar10;
	undefined *puVar11;
	undefined8 uVar12;
	int iVar13;
	undefined4 *puVar16;
	longlong lVar14;
	ulonglong uVar15;
	undefined4 uVar17;
	ulonglong uVar18;
	undefined uVar19;
	undefined uVar20;
	longlong lVar21;
	longlong lVar22;
	longlong lVar23;
	uint uVar24;
	int *piVar25;
	uint *puVar26;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined uVar27;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	iVar6 = _DAT_100f3674;
	puVar11 = PTR_DAT_100f204c;
	puVar10 = _DAT_100f2048;
	puVar5 = PTR_DAT_100f1828;
	puVar9 = PTR_DAT_100f1824;
	puVar8 = PTR_DAT_100f1818;
	puVar4 = PTR_DAT_100f17ec;
	lVar23 = (longlong)param_8;
	lVar22 = (longlong)param_7;
	lVar21 = (longlong)param_6;
	uVar15 = ZEXT48(&toc);
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal(_DAT_100f3674, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4);
	}
	uVar27 = (undefined)in_stack_ffffffa8;
	if (3 < *(uint *)puVar9) {
		app_fatal(iVar6, param_1, param_3, param_4, param_5, (int)lVar21, (int)lVar22, (int)lVar23,
		    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4);
	}
	iVar7 = (int)param_1;
	iVar6 = iVar7 * 0x55ec;
	puVar16 = (undefined4 *)(puVar5 + iVar6);
	ClearPlrRVars((int)puVar16);
	iVar13 = (int)uVar15;
	if (param_2 != 0) {
		*(undefined *)(puVar16 + 0x2e) = 4;
		puVar16[0x2d] = 0xffffffff;
		puVar16[0x2f] = 0xffffffff;
		puVar16[0x29] = puVar16[0x2d];
		*(undefined *)(puVar16 + 0x2a) = *(undefined *)(puVar16 + 0x2e);
		if ((puVar16[0x1e] & 0xf) == 4) {
			puVar16[0x4d] = 1;
		} else {
			puVar16[0x4d] = 0;
		}
		puVar5[iVar6 + 0x5594] = 0;
	}
	bVar1 = *puVar4;
	uVar18 = (ulonglong)bVar1;
	if ((uint)bVar1 != *(uint *)(puVar5 + iVar6 + 0x34)) {
		if (**(int **)(iVar13 + -0x7274) == 0)
			goto LAB_100931d0;
	}
	SetPlrAnims(param_1, uVar18, param_3, param_4, param_5, (int)lVar21, (int)lVar22, (int)lVar23,
	    in_stack_ffffff98);
	puVar3 = puVar5 + iVar6;
	*(undefined4 *)(puVar3 + 0x60) = 0;
	*(undefined4 *)(puVar3 + 100) = 0;
	*(undefined4 *)(puVar3 + 0x68) = 0;
	*(undefined4 *)(puVar3 + 0x6c) = 0;
	ClearPlrPVars(param_1, uVar18, param_3, param_4, param_5, (int)lVar21, (int)lVar22, (int)lVar23,
	    in_stack_ffffff98);
	if (*(int *)(puVar3 + 0x194) >> 6 == 0) {
		*puVar16 = 8;
		uVar18 = (ulonglong) * (uint *)(puVar3 + 0x44c);
		NewPlrAnim(param_1, puVar16 + 0x102, (ulonglong) * (uint *)(puVar3 + 0x448), 1, uVar18, (int)lVar21,
		    (int)lVar22, (int)lVar23, in_stack_ffffff98);
		*(int *)(puVar3 + 0x8c) = *(int *)(puVar3 + 0x88) + -1;
		*(int *)(puVar3 + 0x1ec) = *(int *)(puVar3 + 0x88) << 1;
	} else {
		*puVar16 = 0;
		uVar19 = (undefined) * (uint *)(puVar3 + 600);
		uVar18 = (ulonglong) * (uint *)(puVar3 + 0x25c);
		uVar20 = 3;
		NewPlrAnim(param_1, puVar16 + 0x86, (ulonglong) * (uint *)(puVar3 + 600), 3, uVar18, (int)lVar21,
		    (int)lVar22, (int)lVar23, in_stack_ffffff98);
		lVar14 = random(2, (ulonglong) * (uint *)(puVar3 + 600) - 1, uVar19, uVar20, (char)uVar18,
		    (char)lVar21, (char)lVar22, (char)lVar23, in_stack_ffffff98, in_stack_ffffff9f, uVar27);
		*(int *)(puVar3 + 0x8c) = (int)lVar14 + 1;
		lVar14 = random(2, 3, uVar19, uVar20, (char)uVar18, (char)lVar21, (char)lVar22, (char)lVar23,
		    in_stack_ffffff98, in_stack_ffffff9f, uVar27);
		*(int *)(puVar3 + 0x84) = (int)lVar14;
	}
	iVar13 = (int)uVar15;
	puVar3 = puVar5 + iVar6;
	*(undefined4 *)(puVar3 + 0x70) = 0;
	*(undefined4 *)(puVar3 + 0x98) = 0;
	if (iVar7 == *(int *)puVar9) {
		if ((param_2 == 0) || (*puVar4 != '\0')) {
			puVar16 = *(undefined4 **)(iVar13 + -0x77b4);
			*(undefined4 *)(puVar5 + iVar6 + 0x38) = **(undefined4 **)(iVar13 + -0x77b0);
			*(undefined4 *)(puVar5 + iVar6 + 0x3c) = *puVar16;
		}
		puVar4 = puVar5 + iVar6;
		*(undefined4 *)(puVar4 + 0x48) = *(undefined4 *)(puVar4 + 0x38);
		*(undefined4 *)(puVar4 + 0x4c) = *(undefined4 *)(puVar4 + 0x3c);
	} else {
		uVar24 = 0;
		*(undefined4 *)(puVar3 + 0x48) = *(undefined4 *)(puVar3 + 0x38);
		*(undefined4 *)(puVar3 + 0x4c) = *(undefined4 *)(puVar3 + 0x3c);
		puVar26 = puVar10;
		piVar25 = (int *)puVar11;
		do {
			uVar12 = PosOkPlayer(iVar7, (ulonglong)(uint)puVar16[0xe] + (ulonglong)*puVar26,
			    puVar16[0xf] + *piVar25, (char)puVar16[0xe], (char)uVar18, (char)lVar21,
			    (char)lVar22, (char)lVar23, in_stack_ffffff98);
			iVar13 = (int)uVar15;
			if ((int)uVar12 != 0)
				break;
			uVar24 = uVar24 + 1;
			puVar26 = puVar26 + 1;
			piVar25 = piVar25 + 1;
		} while (uVar24 < 8);
		*(uint *)(puVar3 + 0x38) = *(int *)(puVar3 + 0x38) + puVar10[uVar24];
		*(int *)(puVar3 + 0x3c) = *(int *)(puVar3 + 0x3c) + *(int *)(puVar11 + uVar24 * 4);
	}
	puVar16 = (undefined4 *)(puVar5 + iVar6 + 0x38);
	puVar4 = puVar5 + iVar6;
	*(undefined4 *)(puVar4 + 0x40) = *puVar16;
	*(undefined4 *)(puVar4 + 0x44) = *(undefined4 *)(puVar4 + 0x3c);
	puVar4[4] = 0xff;
	*(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
	if (iVar7 == *(int *)puVar9) {
		uVar15 = AddLight(*puVar16, *(undefined4 *)(puVar4 + 0x3c), (int)(char)puVar4[0x13a]);
		*(int *)(puVar4 + 0x9c) = (int)uVar15;
	} else {
		*(undefined4 *)(puVar4 + 0x9c) = 0xffffffff;
	}
	uVar12 = countLeadingZeros(*(int *)puVar9 - iVar7);
	uVar17 = AddVision(*puVar16, *(undefined4 *)(puVar4 + 0x3c), (int)(char)(puVar5 + iVar6)[0x13a],
	    (uint)uVar12 >> 5 & 0xff);
	*(undefined4 *)(puVar5 + iVar6 + 0xa0) = uVar17;
LAB_100931d0:
	puVar4 = puVar5 + iVar6;
	cVar2 = puVar4[0x15c];
	if (cVar2 == '\0') {
		*(undefined4 *)(puVar4 + 0x110) = 0x2000000;
		*(undefined4 *)(puVar4 + 0x10c) = 0;
	} else {
		if (cVar2 == '\x01') {
			*(undefined4 *)(puVar4 + 0x110) = 0x8000000;
			*(undefined4 *)(puVar4 + 0x10c) = 0;
		} else {
			if (cVar2 == '\x02') {
				*(undefined4 *)(puVar4 + 0x110) = 0x4000000;
				*(undefined4 *)(puVar4 + 0x10c) = 0;
			}
		}
	}
	puVar5 = puVar5 + iVar6;
	*(undefined4 *)(puVar5 + 0x1c0) = *(undefined4 *)(*(int *)(iVar13 + -0x5950) + (int)(char)puVar5[0x1b4] * 4);
	puVar5[0x139] = 0;
	if (iVar7 == *(int *)puVar9) {
		puVar16 = *(undefined4 **)(iVar13 + -0x75cc);
		**(undefined4 **)(iVar13 + -0x6f8c) = 0;
		*puVar16 = 0;
		*(undefined4 *)puVar8 = 0;
		*(undefined4 *)(puVar8 + 4) = 0;
		*(undefined4 *)(puVar8 + 0x10) = 0;
	}
	return;
}

void InitMultiView(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined4 *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	ppuVar5 = &toc;
	if (3 < *(uint *)PTR_DAT_100f1824) {
		ppuVar5 = &toc;
		app_fatal(_DAT_100f3674, (ulonglong) * (uint *)PTR_DAT_100f1824, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
		    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	iVar1 = *(int *)puVar3;
	puVar2 = (undefined4 *)ppuVar5[-0x1ded];
	*(undefined4 *)ppuVar5[-0x1dec] = *(undefined4 *)(puVar4 + iVar1 * 0x55ec + 0x38);
	*puVar2 = *(undefined4 *)(puVar4 + iVar1 * 0x55ec + 0x3c);
	return;
}

void CheckEFlag(ulonglong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	uint *puVar3;
	int *piVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined **ppuVar9;
	longlong lVar10;
	int iVar11;
	int iVar12;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	puVar8 = PTR_DAT_100f1a4c;
	puVar7 = PTR_DAT_100f1a38;
	puVar6 = PTR_DAT_100f1828;
	ppuVar9 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar9 = &toc;
		app_fatal(_DAT_100f3674, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98, in_stack_ffffff9c,
		    in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4);
	}
	iVar5 = (int)param_1 * 0x55ec;
	puVar3 = (uint *)(puVar6 + iVar5 + 0x38);
	uVar2 = *puVar3;
	piVar4 = (int *)(puVar6 + iVar5 + 0x3c);
	iVar12 = *piVar4 + 1;
	lVar10 = IsometricCoord((ulonglong)uVar2 - 1, iVar12);
	iVar1 = (int)((ulonglong)uVar2 - 1);
	iVar11 = *(int *)puVar8 + (int)lVar10 * 0x20;
	if (((ulonglong)(ushort)(*(ushort *)(iVar11 + 4) | *(ushort *)(iVar11 + 6) | *(ushort *)(iVar11 + 8) | *(ushort *)(iVar11 + 10) | *(ushort *)(iVar11 + 0xc) | *(ushort *)(iVar11 + 0xe) | *(ushort *)(iVar11 + 0x10) | *(ushort *)(iVar11 + 0x12)) | (longlong) * (char *)(*(int *)puVar7 + iVar1 * 0x70 + iVar12) | (ulonglong)(byte)ppuVar9[-0x1c8b][(int)*(short *)(*(int *)ppuVar9[-0x1d5f] + iVar1 * 0xe0 + iVar12 * 2)])
	    == 0) {
		*(undefined4 *)(puVar6 + iVar5 + 0x98) = 0;
	} else {
		*(undefined4 *)(puVar6 + iVar5 + 0x98) = 1;
	}
	if (param_2 == 1) {
		if (*(int *)(puVar6 + iVar5 + 0x98) == 1) {
			iVar1 = *piVar4;
			uVar2 = *puVar3;
			lVar10 = IsometricCoord((ulonglong)uVar2, iVar1 + 2);
			iVar11 = *(int *)puVar8 + (int)lVar10 * 0x20;
			if (((ulonglong)(ushort)(*(ushort *)(iVar11 + 4) | *(ushort *)(iVar11 + 6) | *(ushort *)(iVar11 + 8) | *(ushort *)(iVar11 + 10) | *(ushort *)(iVar11 + 0xc) | *(ushort *)(iVar11 + 0xe)
			         | *(ushort *)(iVar11 + 0x10) | *(ushort *)(iVar11 + 0x12))
			        | (longlong) * (char *)(*(int *)puVar7 + uVar2 * 0x70 + iVar1 + 2))
			    == 0) {
				uVar2 = *puVar3;
				iVar1 = *piVar4;
				lVar10 = IsometricCoord((ulonglong)uVar2 - 2, iVar1 + 1);
				iVar11 = *(int *)puVar8 + (int)lVar10 * 0x20;
				if (((ulonglong)(ushort)(*(ushort *)(iVar11 + 4) | *(ushort *)(iVar11 + 6) | *(ushort *)(iVar11 + 8) | *(ushort *)(iVar11 + 10) | *(ushort *)(iVar11 + 0xc) | *(ushort *)(iVar11 + 0xe) | *(ushort *)(iVar11 + 0x10) | *(ushort *)(iVar11 + 0x12)) | (longlong) * (char *)(*(int *)puVar7 + (int)((ulonglong)uVar2 - 2) * 0x70 + iVar1 + 1)) != 0) {
					*(int *)(puVar6 + iVar5 + 0x98) = 2;
				}
			}
		}
	}
	return;
}

ulonglong SolidLoc(int param_1, int param_2)

{
	if ((param_1 < 0) || (param_2 < 0)) {
		return 0;
	}
	if ((param_1 < 0x70) && (param_2 < 0x70)) {
		return (ulonglong)
		    * (byte *)(_DAT_100f1da4 + (int)*(short *)(*(int *)PTR_DAT_100f1a54 + param_1 * 0xe0 + param_2 * 2));
	}
	return 0;
}

// WARNING: Removing unreachable block (ram,0x100935e4)

ulonglong PlrDirOK(ulonglong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined8 uVar5;
	longlong lVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	uint uVar10;
	ulonglong uVar11;
	int iVar12;
	longlong lVar13;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f1834;
	uVar9 = (undefined)param_8;
	uVar8 = (undefined)param_7;
	uVar7 = (undefined)param_6;
	ppuVar4 = &toc;
	uVar11 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar4 = &toc;
		app_fatal(_DAT_100f3670, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	lVar6 = uVar11 + param_1 * 0x55ec;
	iVar1 = param_2 * 4;
	iVar2 = (int)lVar6;
	lVar13 = (ulonglong) * (uint *)(iVar2 + 0x38) + (ulonglong) * (uint *)(ppuVar4[-0x1c7b] + iVar1);
	iVar12 = *(int *)(iVar2 + 0x3c) + *(int *)(ppuVar4[-0x1c7c] + iVar1);
	iVar2 = (int)lVar13;
	if (*(short *)(*(int *)ppuVar4[-0x1d5f] + iVar2 * 0xe0 + iVar12 * 2) == 0) {
		uVar11 = 0;
	} else {
		uVar5 = PosOkPlayer((int)param_1, lVar13, iVar12, (char)lVar6, (char)iVar1, uVar7, uVar8, uVar9,
		    in_stack_ffffffb8);
		if ((int)uVar5 == 0) {
			uVar11 = 0;
		} else {
			uVar11 = 1;
			if (param_2 == 6) {
				uVar10 = 0;
				uVar11 = SolidLoc(iVar2, iVar12 + 1);
				if (((int)uVar11 == 0) && ((*(byte *)(*(int *)puVar3 + iVar2 * 0x70 + iVar12 + 1) & 0x20) == 0)) {
					uVar10 = 1;
				}
				uVar11 = (ulonglong)uVar10;
			}
			if (((int)uVar11 != 0) && (param_2 == 2)) {
				uVar10 = 0;
				uVar11 = SolidLoc(iVar2 + 1, iVar12);
				if (((int)uVar11 == 0) && ((*(byte *)(*(int *)puVar3 + iVar2 * 0x70 + iVar12 + 0x70) & 0x20) == 0)) {
					uVar10 = 1;
				}
				uVar11 = (ulonglong)uVar10;
			}
		}
	}
	return uVar11;
}

void PlrDirOK(int param_1, int param_2)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char *pcVar5;
	int iVar6;

	iVar2 = _DAT_100f1d68;
	iVar6 = param_2 + -1;
	iVar3 = (param_2 + 2) - iVar6;
	iVar1 = *(int *)PTR_DAT_100f1a48;
	if (param_2 + 1 < iVar6) {
		return;
	}
	do {
		iVar4 = (param_1 + -1) * 0x70 + iVar6;
		iVar6 = iVar6 + 1;
		pcVar5 = (char *)(iVar1 + iVar4);
		*(undefined *)(iVar2 + (int)*pcVar5) = 0;
		*(undefined *)(iVar2 + (int)pcVar5[0x70]) = 0;
		*(undefined *)(iVar2 + (int)pcVar5[0xe0]) = 0;
		iVar3 = iVar3 + -1;
	} while (iVar3 != 0);
	return;
}

void PlrDirOK(int param_1, int param_2)

{
	int iVar1;
	int iVar2;
	int iVar3;
	short *psVar4;
	int iVar5;
	char *pcVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar2 = _DAT_100f1da4;
	iVar1 = _DAT_100f1d68;
	if ((byte)(*PTR_DAT_100f183c - 1) < 2) {
		iVar9 = param_2 + -1;
		iVar7 = *(int *)PTR_DAT_100f1a54 + iVar9 * 2;
		iVar8 = *(int *)PTR_DAT_100f1a48 + iVar9;
		while (iVar9 <= param_2 + 1) {
			iVar5 = param_1 + -1;
			psVar4 = (short *)(iVar7 + iVar5 * 0xe0);
			iVar3 = (param_1 + 2) - iVar5;
			pcVar6 = (char *)(iVar8 + iVar5 * 0x70);
			if (iVar5 <= param_1 + 1) {
				do {
					if ((*(char *)(iVar2 + (int)*psVar4) == '\0') && (*pcVar6 != '\0')) {
						*(undefined *)(iVar1 + (int)*pcVar6) = 1;
					}
					psVar4 = psVar4 + 0x70;
					pcVar6 = pcVar6 + 0x70;
					iVar3 = iVar3 + -1;
				} while (iVar3 != 0);
			}
			iVar7 = iVar7 + 2;
			iVar8 = iVar8 + 1;
			iVar9 = iVar9 + 1;
		}
	} else {
		*(undefined *)(_DAT_100f1d68 + 1) = 1;
	}
	return;
}

void SetPlayerOld(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar1 = PTR_DAT_100f1828;
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal(_DAT_100f366c, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
		    in_stack_fffffff0, in_stack_fffffff4);
	}
	puVar1 = puVar1 + (int)param_1 * 0x55ec;
	*(undefined4 *)(puVar1 + 0x58) = *(undefined4 *)(puVar1 + 0x38);
	*(undefined4 *)(puVar1 + 0x5c) = *(undefined4 *)(puVar1 + 0x3c);
	return;
}

void FixPlayerLocation(ulonglong param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar4 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1818;
	ppuVar7 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal(_DAT_100f3668, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar5 = (int)param_1 * 0x55ec;
	puVar3 = puVar4 + iVar5;
	puVar4 = puVar4 + iVar5;
	*(undefined4 *)(puVar4 + 0x40) = *(undefined4 *)(puVar3 + 0x38);
	*(undefined4 *)(puVar4 + 0x44) = *(undefined4 *)(puVar4 + 0x3c);
	*(undefined4 *)(puVar4 + 0x48) = *(undefined4 *)(puVar3 + 0x38);
	*(undefined4 *)(puVar4 + 0x4c) = *(undefined4 *)(puVar4 + 0x3c);
	*(undefined4 *)(puVar4 + 0x60) = 0;
	*(undefined4 *)(puVar4 + 100) = 0;
	CheckEFlag(param_1, 0, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	*(undefined4 *)(puVar4 + 0x70) = param_2;
	if ((int)param_1 == *(int *)ppuVar7[-0x1deb]) {
		*(undefined4 *)puVar6 = 0;
		puVar1 = (undefined4 *)ppuVar7[-0x1dec];
		*(undefined4 *)(puVar6 + 4) = 0;
		puVar2 = (undefined4 *)ppuVar7[-0x1ded];
		*(undefined4 *)(puVar6 + 0x10) = 0;
		*puVar1 = *(undefined4 *)(puVar3 + 0x38);
		*puVar2 = *(undefined4 *)(puVar4 + 0x3c);
	}
	return;
}

void StartStand(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined4 *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	longlong lVar7;
	undefined8 uVar8;
	ulonglong uVar9;
	undefined4 uVar10;
	undefined4 uVar11;
	undefined4 uVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f1828;
	ppuVar5 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar5 = &toc;
		app_fatal(_DAT_100f3664, param_1, param_3, param_4, param_5, (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar12 = (undefined4)param_8;
	uVar11 = (undefined4)param_7;
	uVar10 = (undefined4)param_6;
	iVar3 = (int)param_1 * 0x55ec;
	if ((((puVar4 + iVar3)[0x139] != '\0') && (*(int *)(puVar4 + iVar3 + 0x194) == 0)) && ((int)param_1 == *(int *)ppuVar5[-0x1deb])) {
		SyncPlrKill(param_1, 0xffffffff, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		return;
	}
	if ((*(uint *)(puVar4 + iVar3 + 0x214) & 1) == 0) {
		LoadPlrGFX(param_1, 1);
	}
	puVar2 = (undefined4 *)(puVar4 + iVar3);
	uVar6 = (ulonglong)(uint)puVar2[0x96];
	uVar9 = (ulonglong)(uint)puVar2[0x97];
	uVar8 = 3;
	NewPlrAnim(param_1, puVar2 + (int)param_2 * 2 + 0x86, uVar6, 3, uVar9, uVar10, uVar11, uVar12,
	    in_stack_ffffffb8);
	*puVar2 = 0;
	FixPlayerLocation(param_1, (int)param_2, uVar6, uVar8, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffb8);
	FixPlrWalkTags(param_1, param_2, uVar6, uVar8, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffb8);
	lVar7 = (longlong)(char)param_1 + 1;
	uVar1 = *(uint *)ppuVar5[-0x1da0];
	*(undefined *)(uVar1 + puVar2[0xe] * 0x70 + puVar2[0xf]) = (char)lVar7;
	SetPlayerOld(param_1, (ulonglong)uVar1, lVar7, uVar8, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffb8);
	return;
}

void StartWalkStand(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	longlong lVar9;
	ulonglong uVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1818;
	ppuVar8 = &toc;
	uVar10 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar8 = &toc;
		app_fatal((int)PTR_s_StartWalkStand__illegal_player___100f3660, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar5 = (int)(param_1 * 0x55ec);
	*(undefined4 *)(puVar7 + iVar5) = 0;
	lVar9 = uVar10 + param_1 * 0x55ec;
	iVar4 = (int)lVar9;
	puVar3 = (undefined4 *)(puVar7 + iVar5 + 0x38);
	*(undefined4 *)(iVar4 + 0x40) = *puVar3;
	*(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x3c);
	*(undefined4 *)(iVar4 + 0x60) = 0;
	*(undefined4 *)(iVar4 + 100) = 0;
	CheckEFlag(param_1, 0, lVar9, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	if ((int)param_1 == *(int *)ppuVar8[-0x1deb]) {
		*(undefined4 *)puVar6 = 0;
		puVar1 = (undefined4 *)ppuVar8[-0x1dec];
		*(undefined4 *)(puVar6 + 4) = 0;
		puVar2 = (undefined4 *)ppuVar8[-0x1ded];
		*(undefined4 *)(puVar6 + 0x10) = 0;
		*puVar1 = *puVar3;
		*puVar2 = *(undefined4 *)(iVar4 + 0x3c);
	}
	return;
}

// WARNING: Removing unreachable block (ram,0x10093b88)

void PM_ChangeLightOff(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	int *piVar4;
	int iVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	longlong lVar8;
	int iVar9;
	int iVar11;
	longlong lVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = PTR_DAT_100f1828;
	ppuVar7 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal((int)PTR_s_PM_ChangeLightOff__illegal_playe_100f365c, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar5 = (int)param_1 * 0x55ec;
	puVar3 = puVar6 + iVar5;
	piVar4 = (int *)(puVar6 + iVar5 + 0x9c);
	iVar2 = *(int *)(puVar3 + 100) * 2;
	iVar5 = *(int *)(puVar3 + 0x60);
	iVar11 = iVar2 - iVar5;
	if (iVar11 < 0) {
		iVar11 = -iVar11;
		iVar9 = -1;
	} else {
		iVar9 = 1;
	}
	iVar5 = iVar5 + iVar2 >> 3;
	uVar1 = *(uint *)(ppuVar7[-0x1c50] + *piVar4 * 0x34 + 0x2c);
	lVar10 = (longlong)(iVar11 >> 3) * (longlong)iVar9;
	lVar8 = abs((longlong)iVar5 - (ulonglong) * (uint *)(ppuVar7[-0x1c50] + *piVar4 * 0x34 + 0x28));
	if ((2 < (int)lVar8) || (lVar8 = abs(lVar10 - (ulonglong)uVar1), 2 < (int)lVar8)) {
		ChangeLightOff(*piVar4, iVar5, (int)lVar10);
	}
	return;
}

void M_ChangeOffset(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int *piVar1;
	int iVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	ulonglong uVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar5 = PTR_DAT_100f1818;
	ppuVar6 = &toc;
	uVar10 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar6 = &toc;
		app_fatal((int)PTR_s_PM_ChangeOffset__illegal_player___100f3658, param_1, param_3, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	piVar1 = (int *)ppuVar6[-0x1deb];
	lVar8 = uVar10 + param_1 * 0x55ec;
	iVar4 = (int)lVar8;
	*(int *)(iVar4 + 0x1ec) = *(int *)(iVar4 + 0x1ec) + 1;
	iVar9 = *(int *)(iVar4 + 0x1e4);
	iVar2 = *(int *)(iVar4 + 0x1e8);
	*(int *)(iVar4 + 0x1e4) = iVar9 + *(int *)(iVar4 + 0x68);
	*(int *)(iVar4 + 0x1e8) = *(int *)(iVar4 + 0x1e8) + *(int *)(iVar4 + 0x6c);
	*(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x1e4) >> 8;
	*(int *)(iVar4 + 100) = *(int *)(iVar4 + 0x1e8) >> 8;
	uVar3 = *(int *)(iVar4 + 0x1e4) >> 8;
	iVar9 = (iVar9 >> 8) - uVar3;
	lVar7 = (ulonglong)(uint)(iVar2 >> 8) - (ulonglong)(uint)(*(int *)(iVar4 + 0x1e8) >> 8);
	if (((int)param_1 == *piVar1) && (*(int *)(puVar5 + 0x10) != 0)) {
		*(int *)puVar5 = *(int *)puVar5 + iVar9;
		*(int *)(puVar5 + 4) = *(int *)(puVar5 + 4) + (int)lVar7;
	}
	PM_ChangeLightOff(param_1, (ulonglong)uVar3, lVar7, lVar8, param_5, param_6, iVar9, param_8, in_stack_ffffffb8);
	return;
}

void StartWalk(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	int *piVar1;
	uint uVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	ulonglong uVar9;
	longlong lVar10;
	undefined8 uVar11;
	undefined8 uVar12;
	undefined8 uVar13;
	ulonglong uVar14;
	int iVar15;
	undefined4 uVar16;
	undefined4 uVar17;
	undefined4 uVar18;
	undefined4 uVar19;
	int iVar20;
	int iVar21;
	undefined4 *puVar22;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	puVar3 = PTR_DAT_100f1828;
	puVar7 = PTR_DAT_100f1824;
	puVar6 = PTR_DAT_100f1818;
	uVar17 = (undefined4)param_7;
	iVar15 = (int)param_6;
	ppuVar8 = &toc;
	uVar9 = param_2;
	uVar12 = param_3;
	uVar11 = param_4;
	uVar13 = param_5;
	if (3 < (param_1 & 0xffffffff)) {
		uVar9 = param_1;
		uVar12 = param_3;
		uVar11 = param_4;
		uVar13 = param_5;
		ppuVar8 = &toc;
		app_fatal((int)PTR_s_StartWalk__illegal_player__d_100f3654, param_1, param_3, param_4, param_5,
		    iVar15, uVar17, (int)param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98,
		    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
	}
	uVar19 = (undefined4)param_8;
	uVar18 = (undefined4)param_7;
	uVar16 = (undefined4)param_6;
	iVar5 = (int)param_1;
	iVar4 = iVar5 * 0x55ec;
	if ((((puVar3 + iVar4)[0x139] == '\0') || (*(int *)(puVar3 + iVar4 + 0x194) != 0)) || (iVar5 != *(int *)puVar7)) {
		SetPlayerOld(param_1, uVar9, uVar12, uVar11, uVar13, uVar16, uVar18, uVar19, in_stack_ffffff88);
		uVar2 = *(uint *)(puVar3 + iVar4 + 0x38);
		iVar21 = (int)param_4 + uVar2;
		iVar20 = (int)param_5 + *(int *)(puVar3 + iVar4 + 0x3c);
		uVar9 = PlrDirOK(param_1, iVar15, (ulonglong)uVar2, uVar11, uVar13, uVar16, uVar18, uVar19,
		    in_stack_ffffff88);
		if ((int)uVar9 != 0) {
			*(int *)(puVar3 + iVar4 + 0x40) = iVar21;
			*(int *)(puVar3 + iVar4 + 0x44) = iVar20;
			if (iVar5 == *(int *)puVar7) {
				piVar1 = (int *)ppuVar8[-0x1ded];
				*(uint *)(puVar6 + 8) = *(uint *)(puVar3 + iVar4 + 0x38) - *(int *)ppuVar8[-0x1dec];
				*(int *)(puVar6 + 0xc) = *(int *)(puVar3 + iVar4 + 0x3c) - *piVar1;
			}
			puVar22 = (undefined4 *)(puVar3 + iVar4);
			*(char *)(*(int *)ppuVar8[-0x1da0] + iVar21 * 0x70 + iVar20) = -1 - (char)param_1;
			*puVar22 = 1;
			puVar22[0x1a] = (int)param_2;
			puVar22[0x1b] = (int)param_3;
			puVar22[0x18] = 0;
			puVar22[0x19] = 0;
			puVar22[0x74] = (int)param_4;
			puVar22[0x75] = (int)param_5;
			puVar22[0x76] = iVar15;
			if ((puVar22[0x85] & 2) == 0) {
				LoadPlrGFX(param_1, 2);
			}
			puVar3 = puVar3 + iVar4;
			uVar9 = (ulonglong) * (uint *)(puVar3 + 0x2a0);
			uVar14 = (ulonglong) * (uint *)(puVar3 + 0x2a4);
			uVar12 = 0;
			NewPlrAnim(param_1, puVar22 + iVar15 * 2 + 0x98, uVar9, 0, uVar14, uVar16, uVar18, uVar19,
			    in_stack_ffffff88);
			*(int *)(puVar3 + 0x70) = iVar15;
			*(undefined4 *)(puVar3 + 0x1e4) = 0;
			*(undefined4 *)(puVar3 + 0x1e8) = 0;
			*(undefined4 *)(puVar3 + 0x1ec) = 0;
			CheckEFlag(param_1, 0, uVar9, uVar12, uVar14, uVar16, uVar18, uVar19, in_stack_ffffff88);
			if (iVar5 == *(int *)puVar7) {
				if (*(int *)ppuVar8[-0x1d9b] == 0) {
					lVar10 = abs((ulonglong) * (uint *)(puVar6 + 8));
					if (((int)lVar10 < 2) && (lVar10 = abs((ulonglong) * (uint *)(puVar6 + 0xc)), (int)lVar10 < 2)) {
						*(undefined4 *)(puVar6 + 0x10) = uVar17;
					} else {
						*(undefined4 *)(puVar6 + 0x10) = 0;
					}
				} else {
					lVar10 = abs((ulonglong) * (uint *)(puVar6 + 8));
					if (((int)lVar10 < 3) && (lVar10 = abs((ulonglong) * (uint *)(puVar6 + 0xc)), (int)lVar10 < 3)) {
						*(undefined4 *)(puVar6 + 0x10) = uVar17;
					} else {
						*(undefined4 *)(puVar6 + 0x10) = 0;
					}
				}
			}
		}
	} else {
		SyncPlrKill(param_1, 0xffffffff, uVar12, uVar11, uVar13, param_6, param_7, param_8, in_stack_ffffff88);
	}
	return;
}

void StartWalk2(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	int *piVar1;
	uint *puVar2;
	uint *puVar3;
	undefined4 *puVar4;
	undefined *puVar5;
	int iVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined **ppuVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	undefined8 uVar14;
	longlong lVar15;
	undefined8 uVar16;
	undefined8 uVar17;
	int iVar18;
	undefined4 uVar19;
	int iVar20;
	undefined4 uVar21;
	int iVar22;
	undefined4 uVar23;
	uint uVar24;
	uint uVar25;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	puVar10 = PTR_DAT_100f1950;
	puVar5 = PTR_DAT_100f1828;
	puVar9 = PTR_DAT_100f1824;
	puVar8 = PTR_DAT_100f1818;
	iVar22 = (int)param_8;
	iVar20 = (int)param_7;
	iVar18 = (int)param_6;
	ppuVar11 = &toc;
	uVar12 = param_2;
	uVar16 = param_3;
	uVar14 = param_4;
	uVar17 = param_5;
	if (3 < (param_1 & 0xffffffff)) {
		uVar12 = param_1;
		uVar16 = param_3;
		uVar14 = param_4;
		uVar17 = param_5;
		ppuVar11 = &toc;
		app_fatal((int)PTR_s_StartWalk2__illegal_player__d_100f3650, param_1, param_3, param_4, param_5,
		    iVar18, iVar20, iVar22, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98,
		    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
	}
	uVar23 = (undefined4)param_8;
	uVar21 = (undefined4)param_7;
	uVar19 = (undefined4)param_6;
	iVar7 = (int)param_1;
	iVar6 = iVar7 * 0x55ec;
	if ((((puVar5 + iVar6)[0x139] == '\0') || (*(int *)(puVar5 + iVar6 + 0x194) != 0)) || (iVar7 != *(int *)puVar9)) {
		SetPlayerOld(param_1, uVar12, uVar16, uVar14, uVar17, uVar19, uVar21, uVar23, in_stack_ffffff88);
		puVar2 = (uint *)(puVar5 + iVar6 + 0x38);
		puVar3 = (uint *)(puVar5 + iVar6 + 0x3c);
		uVar25 = iVar18 + *puVar2;
		uVar24 = iVar20 + *puVar3;
		uVar12 = PlrDirOK(param_1, iVar22, (ulonglong)*puVar2, uVar14, uVar17, uVar19, uVar21, uVar23,
		    in_stack_ffffff88);
		if ((int)uVar12 != 0) {
			*(uint *)(puVar5 + iVar6 + 0x40) = uVar25;
			*(uint *)(puVar5 + iVar6 + 0x44) = uVar24;
			if (iVar7 == *(int *)puVar9) {
				piVar1 = (int *)ppuVar11[-0x1ded];
				*(uint *)(puVar8 + 8) = *puVar2 - *(int *)ppuVar11[-0x1dec];
				*(uint *)(puVar8 + 0xc) = *puVar3 - *piVar1;
			}
			lVar15 = -1 - (longlong)(char)param_1;
			puVar4 = (undefined4 *)(puVar5 + iVar6);
			*(undefined *)(*(int *)puVar10 + *puVar2 * 0x70 + *puVar3) = (char)lVar15;
			puVar4[0x74] = *puVar2;
			puVar4[0x75] = *puVar3;
			*puVar2 = uVar25;
			*puVar3 = uVar24;
			*(char *)(*(int *)puVar10 + *puVar2 * 0x70 + *puVar3) = (char)param_1 + '\x01';
			puVar4[0x18] = (int)param_4;
			puVar4[0x19] = (int)param_5;
			uVar12 = (ulonglong)*puVar2;
			uVar13 = (ulonglong)*puVar3;
			ChangeLightXY(puVar4[0x27], *puVar2, *puVar3);
			PM_ChangeLightOff(param_1, uVar12, uVar13, lVar15, uVar17, uVar19, uVar21, uVar23, in_stack_ffffff88);
			*puVar4 = 2;
			puVar4[0x1a] = (int)param_2;
			puVar4[0x1b] = (int)param_3;
			puVar4[0x79] = (int)param_4 << 8;
			puVar4[0x7a] = (int)param_5 << 8;
			puVar4[0x76] = iVar22;
			if ((puVar4[0x85] & 2) == 0) {
				LoadPlrGFX(param_1, 2);
			}
			puVar5 = puVar5 + iVar6;
			uVar12 = (ulonglong) * (uint *)(puVar5 + 0x2a0);
			uVar13 = (ulonglong) * (uint *)(puVar5 + 0x2a4);
			uVar16 = 0;
			NewPlrAnim(param_1, puVar4 + iVar22 * 2 + 0x98, uVar12, 0, uVar13, uVar19, uVar21, uVar23,
			    in_stack_ffffff88);
			*(int *)(puVar5 + 0x70) = iVar22;
			*(undefined4 *)(puVar5 + 0x1ec) = 0;
			if (iVar22 == 7) {
				CheckEFlag(param_1, 1, uVar12, uVar16, uVar13, uVar19, uVar21, uVar23, in_stack_ffffff88);
			} else {
				CheckEFlag(param_1, 0, uVar12, uVar16, uVar13, uVar19, uVar21, uVar23, in_stack_ffffff88);
			}
			if (iVar7 == *(int *)puVar9) {
				if (*(int *)ppuVar11[-0x1d9b] == 0) {
					lVar15 = abs((ulonglong) * (uint *)(puVar8 + 8));
					if (((int)lVar15 < 2) && (lVar15 = abs((ulonglong) * (uint *)(puVar8 + 0xc)), (int)lVar15 < 2)) {
						*(undefined4 *)(puVar8 + 0x10) = param_11;
					} else {
						*(undefined4 *)(puVar8 + 0x10) = 0;
					}
				} else {
					lVar15 = abs((ulonglong) * (uint *)(puVar8 + 8));
					if (((int)lVar15 < 3) && (lVar15 = abs((ulonglong) * (uint *)(puVar8 + 0xc)), (int)lVar15 < 3)) {
						*(undefined4 *)(puVar8 + 0x10) = param_11;
					} else {
						*(undefined4 *)(puVar8 + 0x10) = 0;
					}
				}
			}
		}
	} else {
		SyncPlrKill(param_1, 0xffffffff, uVar16, uVar14, uVar17, param_6, param_7, param_8, in_stack_ffffff88);
	}
	return;
}

void StartWalk3(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, longlong param_8,
    undefined4 param_9, undefined param_10, uint param_11, int param_12,
    undefined4 param_13)

{
	int *piVar1;
	char *pcVar2;
	uint uVar3;
	uint *puVar4;
	uint *puVar5;
	int iVar6;
	int iVar7;
	undefined *puVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined *puVar14;
	undefined **ppuVar15;
	ulonglong uVar16;
	undefined8 uVar17;
	longlong lVar18;
	undefined8 uVar19;
	undefined8 uVar20;
	char cVar22;
	longlong lVar21;
	undefined4 uVar23;
	undefined4 uVar24;
	undefined4 uVar25;
	int iVar26;
	int iVar27;
	undefined4 *puVar28;
	ulonglong uVar29;
	int iVar30;
	longlong lVar31;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	puVar14 = PTR_DAT_100f1950;
	puVar8 = PTR_DAT_100f1828;
	puVar13 = PTR_DAT_100f1824;
	puVar12 = PTR_DAT_100f1818;
	iVar26 = (int)param_7;
	iVar27 = (int)param_6;
	ppuVar15 = &toc;
	uVar29 = ZEXT48(PTR_DAT_100f1828);
	uVar16 = param_2;
	uVar19 = param_3;
	uVar17 = param_4;
	uVar20 = param_5;
	lVar31 = param_8;
	if (3 < (param_1 & 0xffffffff)) {
		uVar16 = param_1;
		uVar19 = param_3;
		uVar17 = param_4;
		uVar20 = param_5;
		lVar31 = param_8;
		ppuVar15 = &toc;
		app_fatal((int)PTR_s_StartWalk3__illegal_player__d_100f364c, param_1, param_3, param_4, param_5,
		    iVar27, iVar26, (int)param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98,
		    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
	}
	uVar25 = (undefined4)lVar31;
	uVar24 = (undefined4)param_7;
	uVar23 = (undefined4)param_6;
	iVar9 = (int)(param_1 * 0x55ec);
	iVar30 = (int)param_1;
	if ((((puVar8 + iVar9)[0x139] == '\0') || (*(int *)(puVar8 + iVar9 + 0x194) != 0)) || (iVar30 != *(int *)puVar13)) {
		SetPlayerOld(param_1, uVar16, uVar19, uVar17, uVar20, uVar23, uVar24, uVar25, in_stack_ffffff88);
		puVar4 = (uint *)(puVar8 + iVar9 + 0x38);
		puVar5 = (uint *)(puVar8 + iVar9 + 0x3c);
		uVar3 = *puVar5;
		iVar27 = iVar27 + *puVar4;
		iVar26 = iVar26 + uVar3;
		param_8 = param_8 + (ulonglong)*puVar4;
		lVar31 = (ulonglong)param_11 + (ulonglong)uVar3;
		uVar16 = PlrDirOK(param_1, param_12, (ulonglong)uVar3, uVar17, uVar20, uVar23, uVar24, uVar25,
		    in_stack_ffffff88);
		if ((int)uVar16 != 0) {
			*(int *)(puVar8 + iVar9 + 0x40) = iVar27;
			*(int *)(puVar8 + iVar9 + 0x44) = iVar26;
			if (iVar30 == *(int *)puVar13) {
				piVar1 = (int *)ppuVar15[-0x1ded];
				*(uint *)(puVar12 + 8) = *puVar4 - *(int *)ppuVar15[-0x1dec];
				*(uint *)(puVar12 + 0xc) = *puVar5 - *piVar1;
			}
			cVar22 = -1 - (char)param_1;
			lVar18 = uVar29 + param_1 * 0x55ec;
			piVar1 = (int *)ppuVar15[-0x1de7];
			lVar21 = (longlong)cVar22;
			pcVar2 = ppuVar15[-0x1de5];
			*(char *)(*(int *)puVar14 + *puVar4 * 0x70 + *puVar5) = cVar22;
			*(char *)(*(int *)puVar14 + iVar27 * 0x70 + iVar26) = cVar22;
			iVar11 = (int)param_8;
			iVar6 = (int)lVar18;
			*(int *)(iVar6 + 0x1dc) = iVar11;
			iVar10 = (int)lVar31;
			iVar7 = iVar11 * 0x70 + iVar10;
			*(int *)(iVar6 + 0x1e0) = iVar10;
			*(byte *)(*piVar1 + iVar7) = *(byte *)(*piVar1 + iVar7) | 0x20;
			*(int *)(iVar6 + 0x60) = (int)param_4;
			*(int *)(iVar6 + 100) = (int)param_5;
			if (*pcVar2 != '\0') {
				ChangeLightXY(*(int *)(iVar6 + 0x9c), iVar11, iVar10);
				PM_ChangeLightOff(param_1, param_8, lVar31, lVar18, lVar21, uVar23, uVar24, uVar25, in_stack_ffffff88);
			}
			puVar28 = (undefined4 *)(puVar8 + iVar9);
			*puVar28 = 3;
			puVar28[0x1a] = (int)param_2;
			puVar28[0x1b] = (int)param_3;
			puVar28[0x74] = iVar27;
			puVar28[0x75] = iVar26;
			puVar28[0x79] = (int)param_4 << 8;
			puVar28[0x7a] = (int)param_5 << 8;
			puVar28[0x76] = param_12;
			if ((puVar28[0x85] & 2) == 0) {
				LoadPlrGFX(param_1, 2);
			}
			puVar8 = puVar8 + iVar9;
			uVar16 = (ulonglong) * (uint *)(puVar8 + 0x2a0);
			uVar29 = (ulonglong) * (uint *)(puVar8 + 0x2a4);
			uVar19 = 0;
			NewPlrAnim(param_1, puVar28 + param_12 * 2 + 0x98, uVar16, 0, uVar29, uVar23, uVar24, uVar25,
			    in_stack_ffffff88);
			*(int *)(puVar8 + 0x70) = param_12;
			*(undefined4 *)(puVar8 + 0x1ec) = 0;
			CheckEFlag(param_1, 0, uVar16, uVar19, uVar29, uVar23, uVar24, uVar25, in_stack_ffffff88);
			if (iVar30 == *(int *)puVar13) {
				if (*(int *)ppuVar15[-0x1d9b] == 0) {
					lVar31 = abs((ulonglong) * (uint *)(puVar12 + 8));
					if (((int)lVar31 < 2) && (lVar31 = abs((ulonglong) * (uint *)(puVar12 + 0xc)), (int)lVar31 < 2)) {
						*(undefined4 *)(puVar12 + 0x10) = param_13;
					} else {
						*(undefined4 *)(puVar12 + 0x10) = 0;
					}
				} else {
					lVar31 = abs((ulonglong) * (uint *)(puVar12 + 8));
					if (((int)lVar31 < 3) && (lVar31 = abs((ulonglong) * (uint *)(puVar12 + 0xc)), (int)lVar31 < 3)) {
						*(undefined4 *)(puVar12 + 0x10) = param_13;
					} else {
						*(undefined4 *)(puVar12 + 0x10) = 0;
					}
				}
			}
		}
	} else {
		SyncPlrKill(param_1, 0xffffffff, uVar19, uVar17, uVar20, param_6, param_7, lVar31, in_stack_ffffff88);
	}
	return;
}

void StartAttack(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	ulonglong uVar7;
	undefined4 uVar8;
	undefined4 uVar9;
	undefined4 uVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f1828;
	ppuVar4 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar4 = &toc;
		app_fatal((int)PTR_s_StartAttack__illegal_player__d_100f3648, param_1, param_3, param_4, param_5,
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar10 = (undefined4)param_8;
	uVar9 = (undefined4)param_7;
	uVar8 = (undefined4)param_6;
	iVar2 = (int)param_1 * 0x55ec;
	if ((((puVar3 + iVar2)[0x139] != '\0') && (*(int *)(puVar3 + iVar2 + 0x194) == 0)) && ((int)param_1 == *(int *)ppuVar4[-0x1deb])) {
		SyncPlrKill(param_1, 0xffffffff, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		return;
	}
	if ((*(uint *)(puVar3 + iVar2 + 0x214) & 4) == 0) {
		LoadPlrGFX(param_1, 4);
	}
	puVar1 = (undefined4 *)(puVar3 + iVar2);
	uVar5 = (ulonglong)(uint)puVar1[0xba];
	uVar7 = (ulonglong)(uint)puVar1[0xbb];
	uVar6 = 0;
	NewPlrAnim(param_1, puVar1 + (int)param_2 * 2 + 0xaa, uVar5, 0, uVar7, uVar8, uVar9, uVar10,
	    in_stack_ffffffb8);
	*puVar1 = 4;
	FixPlayerLocation(param_1, (int)param_2, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, in_stack_ffffffb8);
	SetPlayerOld(param_1, param_2, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, in_stack_ffffffb8);
	return;
}

void StartRangeAttack(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	undefined8 uVar7;
	ulonglong uVar8;
	undefined4 uVar9;
	undefined4 uVar10;
	undefined4 uVar11;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f1828;
	ppuVar4 = &toc;
	uVar7 = param_3;
	uVar6 = param_4;
	if (3 < (param_1 & 0xffffffff)) {
		uVar7 = param_3;
		uVar6 = param_4;
		ppuVar4 = &toc;
		app_fatal(_DAT_100f3644, param_1, param_3, param_4, param_5, (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar11 = (undefined4)param_8;
	uVar10 = (undefined4)param_7;
	uVar9 = (undefined4)param_6;
	iVar2 = (int)param_1 * 0x55ec;
	if ((((puVar3 + iVar2)[0x139] != '\0') && (*(int *)(puVar3 + iVar2 + 0x194) == 0)) && ((int)param_1 == *(int *)ppuVar4[-0x1deb])) {
		SyncPlrKill(param_1, 0xffffffff, uVar7, uVar6, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		return;
	}
	if ((*(uint *)(puVar3 + iVar2 + 0x214) & 4) == 0) {
		LoadPlrGFX(param_1, 4);
	}
	puVar1 = (undefined4 *)(puVar3 + iVar2);
	uVar5 = (ulonglong)(uint)puVar1[0xba];
	uVar8 = (ulonglong)(uint)puVar1[0xbb];
	uVar7 = 0;
	NewPlrAnim(param_1, puVar1 + (int)param_2 * 2 + 0xaa, uVar5, 0, uVar8, uVar9, uVar10, uVar11,
	    in_stack_ffffffb8);
	*puVar1 = 5;
	FixPlayerLocation(param_1, (int)param_2, uVar5, uVar7, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffb8);
	SetPlayerOld(param_1, param_2, uVar5, uVar7, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffb8);
	puVar1[0x74] = (int)param_3;
	puVar1[0x75] = (int)param_4;
	return;
}

void StartPlrBlock(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined4 *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	undefined8 uVar7;
	ulonglong uVar8;
	undefined4 uVar9;
	undefined4 uVar10;
	undefined4 uVar11;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f1828;
	ppuVar5 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar5 = &toc;
		app_fatal(_DAT_100f3640, param_1, param_3, param_4, param_5, (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar11 = (undefined4)param_8;
	uVar10 = (undefined4)param_7;
	uVar9 = (undefined4)param_6;
	iVar3 = (int)param_1 * 0x55ec;
	if ((((puVar4 + iVar3)[0x139] != '\0') && (*(int *)(puVar4 + iVar3 + 0x194) == 0)) && ((int)param_1 == *(int *)ppuVar5[-0x1deb])) {
		SyncPlrKill(param_1, 0xffffffff, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		return;
	}
	puVar1 = puVar4 + iVar3;
	PlaySfxLoc(0x3d, (ulonglong) * (uint *)(puVar1 + 0x38), (ulonglong) * (uint *)(puVar1 + 0x3c), param_4,
	    param_5, uVar9, uVar10, uVar11, in_stack_ffffffb8);
	if ((*(uint *)(puVar1 + 0x214) & 0x100) == 0) {
		LoadPlrGFX(param_1, 0x100);
	}
	puVar2 = (undefined4 *)(puVar4 + iVar3);
	uVar6 = (ulonglong)(uint)puVar2[0x124];
	uVar8 = (ulonglong)(uint)puVar2[0x125];
	uVar7 = 2;
	NewPlrAnim(param_1, puVar2 + (int)param_2 * 2 + 0x114, uVar6, 2, uVar8, uVar9, uVar10, uVar11,
	    in_stack_ffffffb8);
	*puVar2 = 6;
	FixPlayerLocation(param_1, (int)param_2, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffb8);
	SetPlayerOld(param_1, param_2, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffb8);
	return;
}

// WARNING: Removing unreachable block (ram,0x1009484c)

void StartSpell(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	longlong lVar8;
	undefined8 uVar9;
	ulonglong uVar10;
	undefined8 uVar11;
	undefined4 uVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	int iVar15;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar6 = PTR_DAT_100f1934;
	puVar5 = PTR_DAT_100f1828;
	ppuVar7 = &toc;
	uVar9 = param_3;
	uVar11 = param_4;
	if (3 < (param_1 & 0xffffffff)) {
		uVar9 = param_3;
		uVar11 = param_4;
		ppuVar7 = &toc;
		app_fatal(_DAT_100f363c, param_1, param_3, param_4, param_5, (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	uVar14 = (undefined4)param_8;
	uVar13 = (undefined4)param_7;
	uVar12 = (undefined4)param_6;
	iVar4 = (int)param_1;
	iVar3 = iVar4 * 0x55ec;
	if ((((puVar5 + iVar3)[0x139] == '\0') || (*(int *)(puVar5 + iVar3 + 0x194) != 0)) || (iVar4 != *(int *)ppuVar7[-0x1deb])) {
		iVar15 = (int)param_2;
		if (*ppuVar7[-0x1de5] != '\0') {
			puVar2 = puVar5 + iVar3;
			bVar1 = puVar6[*(int *)(puVar2 + 0xa4) * 0x38 + 2];
			if (bVar1 == 1) {
				if ((*(uint *)(puVar2 + 0x214) & 0x10) == 0) {
					LoadPlrGFX(param_1, 0x10);
				}
				param_5 = (ulonglong) * (uint *)(puVar5 + iVar3 + 0x3b8);
				uVar11 = 0;
				NewPlrAnim(param_1, puVar5 + iVar3 + iVar15 * 8 + 0x2f4,
				    (ulonglong) * (uint *)(puVar5 + iVar3 + 0x3b4), 0, param_5, uVar12, uVar13, uVar14,
				    in_stack_ffffffa8);
			} else {
				if (bVar1 == 0) {
					if ((*(uint *)(puVar2 + 0x214) & 0x20) == 0) {
						LoadPlrGFX(param_1, 0x20);
					}
					param_5 = (ulonglong) * (uint *)(puVar5 + iVar3 + 0x3b8);
					uVar11 = 0;
					NewPlrAnim(param_1, puVar5 + iVar3 + iVar15 * 8 + 0x334,
					    (ulonglong) * (uint *)(puVar5 + iVar3 + 0x3b4), 0, param_5, uVar12, uVar13, uVar14,
					    in_stack_ffffffa8);
				} else {
					if (bVar1 < 3) {
						if ((*(uint *)(puVar2 + 0x214) & 0x40) == 0) {
							LoadPlrGFX(param_1, 0x40);
						}
						param_5 = (ulonglong) * (uint *)(puVar5 + iVar3 + 0x3b8);
						uVar11 = 0;
						NewPlrAnim(param_1, puVar5 + iVar3 + iVar15 * 8 + 0x374,
						    (ulonglong) * (uint *)(puVar5 + iVar3 + 0x3b4), 0, param_5, uVar12, uVar13, uVar14, in_stack_ffffffa8);
					}
				}
			}
		}
		puVar2 = puVar5 + iVar3;
		uVar10 = (ulonglong) * (uint *)(puVar2 + 0x3c);
		PlaySfxLoc((ulonglong)(byte)puVar6[*(int *)(puVar5 + iVar3 + 0xa4) * 0x38 + 0x20],
		    (ulonglong) * (uint *)(puVar2 + 0x38), uVar10, uVar11, param_5, uVar12, uVar13, uVar14,
		    in_stack_ffffffa8);
		*(undefined4 *)(puVar5 + iVar3) = 9;
		FixPlayerLocation(param_1, iVar15, uVar10, uVar11, param_5, uVar12, uVar13, uVar14, in_stack_ffffffa8);
		SetPlayerOld(param_1, param_2, uVar10, uVar11, param_5, uVar12, uVar13, uVar14, in_stack_ffffffa8);
		*(int *)(puVar2 + 0x1d0) = (int)param_3;
		*(int *)(puVar2 + 0x1d4) = (int)param_4;
		lVar8 = GetSpellLevel(iVar4, *(int *)(puVar5 + iVar3 + 0xa4));
		*(int *)(puVar2 + 0x1dc) = (int)lVar8;
		*(undefined4 *)(puVar2 + 0x1ec) = 1;
	} else {
		SyncPlrKill(param_1, 0xffffffff, uVar9, uVar11, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	return;
}

void FixPlrWalkTags(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char *pcVar10;
	int iVar11;
	int iVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f1950;
	puVar3 = PTR_DAT_100f1834;
	puVar2 = PTR_DAT_100f1828;
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal(_DAT_100f3638, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar6 = (int)param_1;
	iVar7 = *(int *)(puVar2 + iVar6 * 0x55ec + 0x5c);
	iVar1 = *(int *)(puVar2 + iVar6 * 0x55ec + 0x58);
	iVar11 = iVar7 + -1;
	while (iVar11 <= iVar7 + 1) {
		iVar12 = iVar1 + -1;
		iVar5 = (iVar1 + 2) - iVar12;
		iVar9 = iVar12 * 0x70;
		if (iVar12 <= iVar1 + 1) {
			do {
				if ((((-1 < iVar12) && (iVar12 < 0x70)) && (-1 < iVar11)) && (iVar11 < 0x70)) {
					pcVar10 = (char *)(iVar11 + *(int *)puVar4 + iVar9);
					iVar8 = (int)*pcVar10;
					if ((iVar6 + 1 == iVar8) || (-1 - iVar6 == iVar8)) {
						*pcVar10 = '\0';
					}
				}
				iVar9 = iVar9 + 0x70;
				iVar12 = iVar12 + 1;
				iVar5 = iVar5 + -1;
			} while (iVar5 != 0);
		}
		iVar11 = iVar11 + 1;
	}
	if (((-1 < iVar1) && (iVar1 < 0x6f)) && ((-1 < iVar7 && (iVar7 < 0x6f)))) {
		iVar6 = *(int *)puVar3 + iVar1 * 0x70 + iVar7;
		*(byte *)(iVar6 + 0x70) = *(byte *)(iVar6 + 0x70) & 0xdf;
		iVar7 = *(int *)puVar3 + iVar1 * 0x70 + iVar7;
		*(byte *)(iVar7 + 1) = *(byte *)(iVar7 + 1) & 0xdf;
	}
	return;
}

void RemovePlrFromMap(int param_1)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	char *pcVar6;
	byte *pbVar7;
	int iVar8;
	int iVar9;
	longlong lVar10;

	puVar3 = PTR_DAT_100f1950;
	puVar2 = PTR_DAT_100f1834;
	iVar8 = param_1 + 1;
	param_1 = -1 - param_1;
	iVar9 = 1;
	do {
		lVar10 = 0x25;
		iVar5 = 0x70;
		do {
			iVar4 = iVar9 + *(int *)puVar3 + iVar5;
			if (param_1 == (int)*(char *)(iVar4 + -1)) {
			LAB_10094b4c:
				pbVar7 = (byte *)(iVar9 + *(int *)puVar2 + iVar5);
				bVar1 = *pbVar7;
				if ((bVar1 & 0x20) != 0) {
					*pbVar7 = bVar1 & 0xdf;
				}
			} else {
				if (param_1 == (int)*(char *)(iVar4 + -0x70))
					goto LAB_10094b4c;
			}
			iVar4 = iVar9 + *(int *)puVar3 + iVar5 + 0x70;
			if (param_1 == (int)*(char *)(iVar4 + -1)) {
			LAB_10094b9c:
				pbVar7 = (byte *)(iVar9 + *(int *)puVar2 + iVar5 + 0x70);
				bVar1 = *pbVar7;
				if ((bVar1 & 0x20) != 0) {
					*pbVar7 = bVar1 & 0xdf;
				}
			} else {
				if (param_1 == (int)*(char *)(iVar4 + -0x70))
					goto LAB_10094b9c;
			}
			iVar4 = iVar9 + *(int *)puVar3 + iVar5 + 0xe0;
			if (param_1 == (int)*(char *)(iVar4 + -1)) {
			LAB_10094bf0:
				pbVar7 = (byte *)(iVar9 + *(int *)puVar2 + iVar5 + 0xe0);
				bVar1 = *pbVar7;
				if ((bVar1 & 0x20) != 0) {
					*pbVar7 = bVar1 & 0xdf;
				}
			} else {
				if (param_1 == (int)*(char *)(iVar4 + -0x70))
					goto LAB_10094bf0;
			}
			iVar5 = iVar5 + 0x150;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
		iVar9 = iVar9 + 1;
		if (0x6f < iVar9) {
			iVar9 = 0;
			do {
				lVar10 = 0xe;
				iVar5 = 0;
				do {
					pcVar6 = (char *)(iVar9 + *(int *)puVar3 + iVar5);
					iVar4 = (int)*pcVar6;
					if ((iVar8 == iVar4) || (param_1 == iVar4)) {
						*pcVar6 = '\0';
					}
					pcVar6 = (char *)(iVar9 + *(int *)puVar3 + iVar5 + 0x70);
					iVar4 = (int)*pcVar6;
					if ((iVar8 == iVar4) || (param_1 == iVar4)) {
						*pcVar6 = '\0';
					}
					pcVar6 = (char *)(iVar9 + *(int *)puVar3 + iVar5 + 0xe0);
					iVar4 = (int)*pcVar6;
					if ((iVar8 == iVar4) || (param_1 == iVar4)) {
						*pcVar6 = '\0';
					}
					pcVar6 = (char *)(iVar9 + *(int *)puVar3 + iVar5 + 0x150);
					iVar4 = (int)*pcVar6;
					if ((iVar8 == iVar4) || (param_1 == iVar4)) {
						*pcVar6 = '\0';
					}
					pcVar6 = (char *)(iVar9 + *(int *)puVar3 + iVar5 + 0x1c0);
					iVar4 = (int)*pcVar6;
					if ((iVar8 == iVar4) || (param_1 == iVar4)) {
						*pcVar6 = '\0';
					}
					pcVar6 = (char *)(iVar9 + *(int *)puVar3 + iVar5 + 0x230);
					iVar4 = (int)*pcVar6;
					if ((iVar8 == iVar4) || (param_1 == iVar4)) {
						*pcVar6 = '\0';
					}
					pcVar6 = (char *)(iVar9 + *(int *)puVar3 + iVar5 + 0x2a0);
					iVar4 = (int)*pcVar6;
					if ((iVar8 == iVar4) || (param_1 == iVar4)) {
						*pcVar6 = '\0';
					}
					pcVar6 = (char *)(iVar9 + *(int *)puVar3 + iVar5 + 0x310);
					iVar4 = (int)*pcVar6;
					if ((iVar8 == iVar4) || (param_1 == iVar4)) {
						*pcVar6 = '\0';
					}
					iVar5 = iVar5 + 0x380;
					lVar10 = lVar10 + -1;
				} while (lVar10 != 0);
				iVar9 = iVar9 + 1;
			} while (iVar9 < 0x70);
			return;
		}
	} while (true);
}

void StartPlrHit(ulonglong param_1, char param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	longlong lVar9;
	undefined8 uVar10;
	ulonglong uVar11;
	undefined4 uVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	ulonglong uVar15;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = PTR_DAT_100f1828;
	ppuVar7 = &toc;
	uVar10 = param_3;
	if (3 < (param_1 & 0xffffffff)) {
		uVar10 = param_3;
		ppuVar7 = &toc;
		app_fatal(_DAT_100f3634, param_1, param_3, param_4, param_5, (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar14 = (undefined4)param_8;
	uVar13 = (undefined4)param_7;
	uVar12 = (undefined4)param_6;
	iVar5 = (int)param_1 * 0x55ec;
	if ((((puVar6 + iVar5)[0x139] != '\0') && (*(int *)(puVar6 + iVar5 + 0x194) == 0)) && ((int)param_1 == *(int *)ppuVar7[-0x1deb])) {
		SyncPlrKill(param_1, 0xffffffff, uVar10, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		return;
	}
	puVar3 = puVar6 + iVar5;
	cVar1 = puVar3[0x15c];
	if (cVar1 == '\0') {
		PlaySfxLoc(0x314, (ulonglong) * (uint *)(puVar3 + 0x38), (ulonglong) * (uint *)(puVar3 + 0x3c),
		    param_4, param_5, uVar12, uVar13, uVar14, in_stack_ffffffb8);
	} else {
		if (cVar1 == '\x01') {
			PlaySfxLoc(0x2a7, (ulonglong) * (uint *)(puVar3 + 0x38), (ulonglong) * (uint *)(puVar3 + 0x3c),
			    param_4, param_5, uVar12, uVar13, uVar14, in_stack_ffffffb8);
		} else {
			if (cVar1 == '\x02') {
				PlaySfxLoc(0x240, (ulonglong) * (uint *)(puVar3 + 0x38), (ulonglong) * (uint *)(puVar3 + 0x3c),
				    param_4, param_5, uVar12, uVar13, uVar14, in_stack_ffffffb8);
			}
		}
	}
	*(undefined4 *)ppuVar7[-0x1dbc] = 1;
	if ((param_2 >> 6 < (char)puVar6[iVar5 + 0x1b4]) && ((int)param_3 == 0)) {
		return;
	}
	uVar2 = *(uint *)(puVar6 + iVar5 + 0x70);
	uVar15 = (ulonglong)uVar2;
	if ((*(uint *)(puVar6 + iVar5 + 0x214) & 8) == 0) {
		LoadPlrGFX(param_1, 8);
	}
	puVar4 = (undefined4 *)(puVar6 + iVar5);
	uVar8 = (ulonglong)(uint)puVar4[0x100];
	uVar11 = (ulonglong)(uint)puVar4[0x101];
	uVar10 = 0;
	NewPlrAnim(param_1, puVar4 + uVar2 * 2 + 0xf0, uVar8, 0, uVar11, uVar12, uVar13, uVar14,
	    in_stack_ffffffb8);
	*puVar4 = 7;
	FixPlayerLocation(param_1, uVar2, uVar8, uVar10, uVar11, uVar12, uVar13, uVar14, in_stack_ffffffb8);
	puVar4[0x7b] = 1;
	FixPlrWalkTags(param_1, uVar15, uVar8, uVar10, uVar11, uVar12, uVar13, uVar14, in_stack_ffffffb8);
	lVar9 = (longlong)(char)param_1 + 1;
	uVar2 = *(uint *)ppuVar7[-0x1da0];
	*(undefined *)(uVar2 + puVar4[0xe] * 0x70 + puVar4[0xf]) = (char)lVar9;
	SetPlayerOld(param_1, (ulonglong)uVar2, lVar9, uVar10, uVar11, uVar12, uVar13, uVar14, in_stack_ffffffb8);
	return;
}

void RespawnDeadItem(int *param_1, int param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	uint uVar3;
	uint *puVar4;
	int *piVar5;
	undefined **ppuVar6;
	int iVar7;
	undefined uVar8;
	undefined uVar10;
	int *piVar9;
	longlong lVar11;
	longlong lVar12;
	ulonglong uVar13;
	longlong lVar14;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffdc;

	piVar5 = _DAT_100f1dec;
	puVar4 = _DAT_100f1ddc;
	ppuVar6 = &toc;
	uVar13 = ZEXT48(PTR_DAT_100f1940);
	if (*_DAT_100f1dec < 0x7f) {
		uVar8 = (undefined) * (short *)(param_1 + 1);
		uVar10 = (undefined)*param_1;
		iVar7 = FindGetItem(param_1[0x5a], *(short *)(param_1 + 1), *param_1);
		if (-1 < iVar7) {
			DrawInvMsg((int)ppuVar6[-0x1668], uVar8, uVar10, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8);
			SyncGetItem(param_2, param_3, param_1[0x5a], *(short *)(param_1 + 1), *param_1, 8, param_7, param_8,
			    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffdc);
		}
		uVar1 = *puVar4;
		*(char *)(*(int *)ppuVar6[-0x1da3] + param_2 * 0x70 + param_3) = (char)uVar1 + '\x01';
		lVar12 = (ulonglong)uVar1 * 0x170;
		puVar2 = ppuVar6[-0x1c78];
		iVar7 = *piVar5;
		lVar11 = uVar13 + lVar12 + -8;
		uVar3 = puVar4[0x7e - iVar7];
		lVar14 = 0x2e;
		*puVar4 = uVar3;
		*(uint *)(puVar2 + iVar7 * 4) = uVar1;
		piVar9 = param_1 + -2;
		do {
			iVar7 = piVar9[3];
			lVar11 = lVar11 + 8;
			*(int *)lVar11 = piVar9[2];
			((int *)lVar11)[1] = iVar7;
			lVar14 = lVar14 + -1;
			piVar9 = piVar9 + 2;
		} while (lVar14 != 0);
		lVar14 = uVar13 + lVar12;
		iVar7 = (int)lVar14;
		*(int *)(iVar7 + 0xc) = param_2;
		*(int *)(iVar7 + 0x10) = param_3;
		RespawnItem((ulonglong)uVar1, 1, (char)lVar14, (char)lVar11, (char)puVar2, (char)uVar3, (char)lVar12,
		    param_8, in_stack_ffffffb8);
		*piVar5 = *piVar5 + 1;
		param_1[2] = -1;
	}
	return;
}

void PlrDeadItem(ulonglong param_1, int *param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, uint param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	uint uVar4;
	undefined8 uVar3;
	uint uVar5;
	int *piVar6;
	longlong lVar7;
	undefined8 uVar8;
	undefined7 uVar9;
	undefined uVar10;
	uint uVar11;
	undefined4 uVar12;
	longlong lVar13;
	undefined4 uVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	longlong lVar18;
	ulonglong uVar19;
	longlong lVar20;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar2 = PTR_DAT_100f1828;
	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	lVar13 = (longlong)param_8;
	lVar20 = (longlong)param_7;
	lVar7 = (longlong)(int)param_6;
	uVar19 = ZEXT48(PTR_DAT_100f1828);
	if (param_2[2] != -1) {
		uVar8 = param_4;
		if (3 < (param_1 & 0xffffffff)) {
			uVar8 = param_4;
			app_fatal(_DAT_100f362c, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc,
			    in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc,
			    in_stack_ffffffd0, in_stack_ffffffd4);
		}
		lVar18 = param_1 * 0x55ec;
		puVar1 = puVar2 + (int)lVar18;
		uVar4 = (int)param_3 + *(int *)(puVar1 + 0x38);
		uVar5 = (int)param_4 + *(int *)(puVar1 + 0x3c);
		if (((int)param_3 != 0) || ((int)param_4 != 0)) {
			uVar3 = ItemSpaceOk(uVar4, uVar5);
			uVar14 = (undefined4)lVar13;
			uVar12 = (undefined4)lVar20;
			uVar11 = (uint)lVar7;
			if ((int)uVar3 != 0) {
				RespawnDeadItem(param_2, uVar4, uVar5, (char)uVar8, uVar10, (char)lVar7, (char)lVar20, (char)lVar13,
				    in_stack_ffffffa8);
				lVar20 = 0x2e;
				lVar7 = uVar19 + lVar18 + 0x53cc;
				piVar6 = param_2 + -2;
				do {
					iVar17 = piVar6[3];
					lVar7 = lVar7 + 8;
					*(int *)lVar7 = piVar6[2];
					((int *)lVar7)[1] = iVar17;
					lVar20 = lVar20 + -1;
					piVar6 = piVar6 + 2;
				} while (lVar20 != 0);
				NetSendCmdPItem(0, 0xb, (ulonglong)(uVar4 & 0xff), (ulonglong)(uVar5 & 0xff),
				    CONCAT71(uVar9, uVar10), uVar11, uVar12, uVar14, in_stack_ffffffa8);
				return;
			}
		}
		iVar17 = 1;
		puVar2 = puVar2 + (int)lVar18;
		do {
			iVar16 = -iVar17;
			while (iVar16 <= iVar17) {
				uVar4 = iVar16 + *(int *)(puVar2 + 0x3c);
				iVar15 = -iVar17;
				while (iVar15 <= iVar17) {
					uVar5 = iVar15 + *(int *)(puVar2 + 0x38);
					uVar3 = ItemSpaceOk(uVar5, uVar4);
					uVar14 = (undefined4)lVar13;
					uVar12 = (undefined4)lVar20;
					uVar11 = (uint)lVar7;
					if ((int)uVar3 != 0) {
						RespawnDeadItem(param_2, uVar5, uVar4, (char)uVar8, uVar10, (char)lVar7, (char)lVar20,
						    (char)lVar13, in_stack_ffffffa8);
						lVar20 = 0x2e;
						lVar7 = uVar19 + lVar18 + 0x53cc;
						piVar6 = param_2 + -2;
						do {
							iVar17 = piVar6[3];
							lVar7 = lVar7 + 8;
							*(int *)lVar7 = piVar6[2];
							((int *)lVar7)[1] = iVar17;
							lVar20 = lVar20 + -1;
							piVar6 = piVar6 + 2;
						} while (lVar20 != 0);
						NetSendCmdPItem(0, 0xb, (ulonglong)(uVar5 & 0xff), (ulonglong)(uVar4 & 0xff),
						    CONCAT71(uVar9, uVar10), uVar11, uVar12, uVar14, in_stack_ffffffa8);
						return;
					}
					iVar15 = iVar15 + 1;
				}
				iVar16 = iVar16 + 1;
			}
			iVar17 = iVar17 + 1;
		} while (iVar17 < 0x32);
	}
	return;
}

void StartPlayerKill(ulonglong param_1, uint param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	bool bVar1;
	char cVar2;
	undefined4 *puVar3;
	int *piVar4;
	int *piVar5;
	int iVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	int iVar10;
	undefined **ppuVar11;
	int iVar12;
	ulonglong uVar13;
	int iVar16;
	longlong lVar14;
	ulonglong uVar15;
	ulonglong uVar17;
	ulonglong uVar18;
	undefined4 uVar19;
	undefined4 uVar20;
	uint uVar21;
	undefined4 uVar22;
	undefined4 uVar23;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int iVar24;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	longlong lVar25;
	undefined8 unaff_r27;
	longlong lVar26;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	ulonglong uVar27;
	undefined4 in_stack_fffffe28;
	undefined in_stack_fffffe2f;
	undefined4 in_stack_fffffe38;
	undefined4 in_stack_fffffe3c;
	undefined4 in_stack_fffffe40;
	undefined4 in_stack_fffffe44;
	undefined4 in_stack_fffffe48;
	undefined4 in_stack_fffffe4c;
	undefined4 in_stack_fffffe50;
	undefined4 in_stack_fffffe54;
	uint local_1a8;
	ushort local_1a4;
	undefined auStack363[131];
	undefined4 local_e8;
	int local_e4;
	undefined4 local_2c;
	undefined4 uStack40;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar10 = _DAT_100f1de4;
	iVar12 = _DAT_100f1de0;
	puVar9 = PTR_DAT_100f1828;
	puVar8 = PTR_DAT_100f1824;
	ppuVar11 = &toc;
	local_2c = (undefined4)((ulonglong)unaff_r21 >> 0x20);
	uStack40 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar27 = ZEXT48(PTR_DAT_100f1828);
	lVar26 = param_1 * 0x55ec;
	lVar25 = uVar27 + lVar26;
	piVar5 = (int *)lVar25;
	if ((0 < piVar5[0x65]) || (*piVar5 != 8)) {
		iVar24 = (int)param_1;
		if (*(int *)PTR_DAT_100f1824 == iVar24) {
			param_3 = (ulonglong)(param_2 & 0xffff);
			ppuVar11 = &toc;
			NetSendCmdParam1(1, 0x26, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
			    in_stack_fffffe28);
		}
		uVar13 = 0;
		iVar6 = (int)lVar26;
		if ((1 < (byte)*ppuVar11[-0x1dfc]) && (*(int *)(puVar9 + iVar6 + 0x34) == 0x10)) {
			uVar13 = 1;
		}
		iVar16 = (int)uVar13;
		if (3 < (param_1 & 0xffffffff)) {
			uVar13 = param_1;
			app_fatal((int)ppuVar11[-0x166a], param_1, param_3, param_4, param_5, (int)param_6, (int)param_7,
			    (int)param_8, in_stack_fffffe28, in_stack_fffffe2f, in_stack_fffffe38,
			    in_stack_fffffe3c, in_stack_fffffe40, in_stack_fffffe44, in_stack_fffffe48,
			    in_stack_fffffe4c, in_stack_fffffe50, in_stack_fffffe54);
		}
		uVar23 = (undefined4)param_8;
		uVar22 = (undefined4)param_7;
		uVar20 = (undefined4)param_6;
		cVar2 = puVar9[iVar6 + 0x15c];
		if (cVar2 == '\0') {
			uVar13 = (ulonglong)(uint)piVar5[0xe];
			param_3 = (ulonglong)(uint)piVar5[0xf];
			PlaySfxLoc(0xb, uVar13, param_3, param_4, param_5, uVar20, uVar22, uVar23, in_stack_fffffe28);
		} else {
			if (cVar2 == '\x01') {
				uVar13 = (ulonglong)(uint)piVar5[0xe];
				param_3 = (ulonglong)(uint)piVar5[0xf];
				PlaySfxLoc(0x2aa, uVar13, param_3, param_4, param_5, uVar20, uVar22, uVar23, in_stack_fffffe28);
			} else {
				if (cVar2 == '\x02') {
					uVar13 = (ulonglong)(uint)piVar5[0xe];
					param_3 = (ulonglong)(uint)piVar5[0xf];
					PlaySfxLoc(0x243, uVar13, param_3, param_4, param_5, uVar20, uVar22, uVar23, in_stack_fffffe28);
				}
			}
		}
		if (piVar5[0x1e] != 0) {
			piVar5[0x1e] = 0;
			piVar5[0x85] = 0;
			SetPlrAnims(param_1, uVar13, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
			    in_stack_fffffe28);
		}
		if ((piVar5[0x85] & 0x80U) == 0) {
			LoadPlrGFX(param_1, 0x80);
		}
		uVar13 = (ulonglong)(uint)piVar5[0x112];
		uVar17 = 1;
		uVar18 = (ulonglong)(uint)piVar5[0x113];
		NewPlrAnim(param_1, piVar5 + piVar5[0x1c] * 2 + 0x102, uVar13, 1, uVar18, (int)param_6, (int)param_7, (int)param_8, in_stack_fffffe28);
		*piVar5 = 8;
		*(undefined *)(piVar5 + 0x4e) = 0;
		*(undefined *)((int)piVar5 + 0x139) = 1;
		SetPlayerHitPoints(param_1, 0, uVar13, uVar17, uVar18, (int)param_6, (int)param_7, (int)param_8,
		    in_stack_fffffe28);
		piVar5[0x7b] = 1;
		if (((iVar24 != *(int *)puVar8) && (param_2 == 0)) && (iVar16 == 0)) {
			piVar5[0x128] = -1;
			piVar5[0x184] = -1;
			piVar5[0x1e0] = -1;
			piVar5[0x23c] = -1;
			piVar5[0x298] = -1;
			piVar5[0x2f4] = -1;
			piVar5[0x350] = -1;
			CalcPlrInv(param_1, 0, uVar13, uVar17, uVar18, param_6, param_7, param_8, in_stack_fffffe28);
		}
		uVar22 = (undefined4)param_8;
		uVar20 = (undefined4)param_7;
		uVar21 = (uint)param_6;
		if ((uint)(byte)*ppuVar11[-0x1df9] == *(uint *)(puVar9 + iVar6 + 0x34)) {
			FixPlayerLocation(param_1, piVar5[0x1c], uVar13, uVar17, uVar18, uVar21, uVar20, uVar22, in_stack_fffffe28);
			RemovePlrFromMap(iVar24);
			uVar21 = *(uint *)ppuVar11[-0x1de7];
			uVar13 = (ulonglong)uVar21;
			lVar14 = (ulonglong)(uint)piVar5[0xe] * 0x70 + (ulonglong)(uint)piVar5[0xf];
			iVar7 = (int)lVar14;
			*(byte *)(uVar21 + iVar7) = *(byte *)(uVar21 + iVar7) | 4;
			SetPlayerOld(param_1, lVar14, uVar13, uVar17, uVar18, (int)param_6, (int)param_7, (int)param_8,
			    in_stack_fffffe28);
			uVar22 = (undefined4)param_8;
			uVar20 = (undefined4)param_7;
			uVar21 = (uint)param_6;
			if (iVar24 == *(int *)puVar8) {
				uVar13 = 1;
				puVar3 = (undefined4 *)ppuVar11[-0x1be3];
				uVar15 = ZEXT48(puVar3);
				*(undefined4 *)ppuVar11[-0x1dbc] = 1;
				piVar4 = (int *)ppuVar11[-0x1dd1];
				*puVar3 = 0x1e;
				if (0xb < *piVar4) {
					uVar15 = lVar25 + 0x53d4;
					uVar13 = 0;
					uVar17 = 0;
					PlrDeadItem(param_1, (int *)uVar15, 0, 0, uVar18, uVar21, uVar20, uVar22, in_stack_fffffe28);
					NewCursor(1, (char)uVar15, (char)uVar13, (char)uVar17, (char)uVar18, (char)param_6,
					    (char)param_7, (char)param_8, in_stack_fffffe28);
				}
				uVar22 = (undefined4)param_8;
				uVar20 = (undefined4)param_7;
				uVar21 = (uint)param_6;
				if (iVar16 == 0) {
					DropHalfPlayersGold(param_1, uVar15, uVar13, uVar17, uVar18, uVar21, uVar20, uVar22, in_stack_fffffe28);
					uVar19 = (undefined4)uVar18;
					uVar23 = (undefined4)uVar17;
					uVar22 = (undefined4)param_8;
					uVar20 = (undefined4)param_7;
					uVar21 = (uint)param_6;
					if (param_2 != 0xffffffff) {
						if (param_2 == 0) {
							lVar25 = lVar25 + 0x498;
							iVar24 = 6;
							do {
								uVar21 = (piVar5[0x1c] + iVar24) * 4 & 0x1c;
								uVar13 = (ulonglong) * (uint *)(iVar10 + uVar21);
								uVar17 = (ulonglong) * (uint *)(iVar12 + uVar21);
								PlrDeadItem(param_1, (int *)lVar25, uVar13, uVar17, uVar18, (uint)param_6, (int)param_7,
								    (int)param_8, in_stack_fffffe28);
								uVar22 = (undefined4)param_8;
								uVar20 = (undefined4)param_7;
								uVar21 = (uint)param_6;
								bVar1 = iVar24 != 0;
								lVar25 = lVar25 + 0x170;
								iVar24 = iVar24 + -1;
							} while (bVar1);
							CalcPlrInv(param_1, 0, uVar13, uVar17, uVar18, param_6, param_7, param_8, in_stack_fffffe28);
						} else {
							SetPlrHandItem((int)&local_1a8, 0x17, (char)uVar13, (char)uVar17, (char)uVar18, (char)param_6, (char)param_7, (char)param_8, in_stack_fffffe28);
							sprintf((int)auStack363, ppuVar11[-0x166b], piVar5 + 0x4f, uVar23, uVar19, uVar21,
							    uVar20, uVar22, in_stack_fffffe28, in_stack_fffffe2f, in_stack_fffffe3c,
							    in_stack_fffffe40, in_stack_fffffe44, in_stack_fffffe48, in_stack_fffffe4c,
							    in_stack_fffffe50, in_stack_fffffe54);
							cVar2 = puVar9[iVar6 + 0x15c];
							if (cVar2 == '\x02') {
								local_e8 = 0x13;
							} else {
								if (cVar2 == '\0') {
									local_e8 = 0x14;
								} else {
									if (cVar2 == '\x01') {
										local_e8 = 0x15;
									}
								}
							}
							uVar18 = uVar27 + lVar26;
							iVar12 = (int)uVar18;
							local_1a4 = (ushort)((int)*(char *)(iVar12 + 0x13c) << 8) | (short)*(char *)(iVar12 + 0x13d);
							uVar17 = (ulonglong) * (byte *)(iVar12 + 0x141);
							local_1a8 = (int)(char)*(byte *)(iVar12 + 0x141) | (int)*(char *)(iVar12 + 0x140) << 8 | (int)*(char *)(iVar12 + 0x13e) << 0x18 | (int)*(char *)(iVar12 + 0x13f) << 0x10;
							local_e4 = (int)*(char *)(iVar12 + 0x1b4);
							uVar13 = (ulonglong)local_1a8;
							iVar12 = FindGetItem(0x17, local_1a4, local_1a8);
							if (iVar12 == -1) {
								uVar13 = 0;
								uVar17 = 0;
								PlrDeadItem(param_1, (int *)&local_1a8, 0, 0, uVar18, uVar21, uVar20, uVar22,
								    in_stack_fffffe28);
							}
						}
					}
				}
			}
		}
		SetPlayerHitPoints(param_1, 0, uVar13, uVar17, uVar18, uVar21, uVar20, uVar22, in_stack_fffffe28);
	}
	return;
}

void DropHalfPlayersGold(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, uint param_6, int param_7, int param_8, undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	int *piVar7;
	ulonglong uVar6;
	undefined uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	int iVar16;
	int iVar17;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar2 = PTR_DAT_100f1828;
	uVar10 = (undefined7)((ulonglong)param_5 >> 8);
	uVar11 = (undefined)param_5;
	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)(int)param_6;
	uVar6 = ZEXT48(&toc);
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal(_DAT_100f3620, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar4 = (int)param_1;
	puVar3 = puVar2 + iVar4 * 0x55ec;
	piVar1 = (int *)(puVar2 + iVar4 * 0x55ec + 0x1c8);
	piVar7 = (int *)(puVar3 + 0x53d4);
	iVar16 = 0;
	iVar17 = *piVar1 >> 1;
	while (true) {
		uVar9 = (undefined)param_4;
		uVar8 = (undefined)param_3;
		iVar5 = (int)uVar6;
		if ((7 < iVar16) || (iVar17 < 1))
			break;
		puVar2 = puVar3 + iVar16 * 0x170;
		if (*(int *)(puVar2 + 0x485c) == 0xb) {
			iVar5 = *(int *)(puVar2 + 0x4918);
			if (iVar5 != 5000) {
				if (iVar17 < iVar5) {
					*(int *)(puVar2 + 0x4918) = iVar5 - iVar17;
					SetSpdbarGoldCurs(iVar4, iVar16);
					SetPlrHandItem((int)piVar7, 0, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
					    in_stack_ffffffa8);
					GetGoldSeed(iVar4, piVar7, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
					    in_stack_ffffffa8);
					SetPlrHandGoldCurs((int)piVar7);
					*(int *)(puVar3 + 0x5498) = iVar17;
					param_3 = 0;
					param_4 = 0;
					PlrDeadItem(param_1, piVar7, 0, 0, CONCAT71(uVar10, uVar11), (uint)lVar12, (int)lVar13,
					    (int)lVar14, in_stack_ffffffa8);
					iVar17 = 0;
				} else {
					iVar17 = iVar17 - iVar5;
					RemoveSpdBarItem(iVar4, iVar16, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
					    in_stack_ffffffa8);
					SetPlrHandItem((int)piVar7, 0, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
					    in_stack_ffffffa8);
					GetGoldSeed(iVar4, piVar7, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
					    in_stack_ffffffa8);
					SetPlrHandGoldCurs((int)piVar7);
					*(int *)(puVar3 + 0x5498) = *(int *)(puVar2 + 0x4918);
					param_3 = 0;
					param_4 = 0;
					PlrDeadItem(param_1, piVar7, 0, 0, CONCAT71(uVar10, uVar11), (uint)lVar12, (int)lVar13,
					    (int)lVar14, in_stack_ffffffa8);
					iVar16 = -1;
				}
			}
		}
		iVar16 = iVar16 + 1;
	}
	if (0 < iVar17) {
		iVar16 = 0;
		while (true) {
			uVar9 = (undefined)param_4;
			uVar8 = (undefined)param_3;
			iVar5 = (int)uVar6;
			if ((7 < iVar16) || (iVar17 < 1))
				break;
			puVar2 = puVar3 + iVar16 * 0x170;
			if (*(int *)(puVar2 + 0x485c) == 0xb) {
				iVar5 = *(int *)(puVar2 + 0x4918);
				if (iVar17 < iVar5) {
					*(int *)(puVar2 + 0x4918) = iVar5 - iVar17;
					SetSpdbarGoldCurs(iVar4, iVar16);
					SetPlrHandItem((int)piVar7, 0, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
					    in_stack_ffffffa8);
					GetGoldSeed(iVar4, piVar7, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
					    in_stack_ffffffa8);
					SetPlrHandGoldCurs((int)piVar7);
					*(int *)(puVar3 + 0x5498) = iVar17;
					param_3 = 0;
					param_4 = 0;
					PlrDeadItem(param_1, piVar7, 0, 0, CONCAT71(uVar10, uVar11), (uint)lVar12, (int)lVar13,
					    (int)lVar14, in_stack_ffffffa8);
					iVar17 = 0;
				} else {
					iVar17 = iVar17 - iVar5;
					RemoveSpdBarItem(iVar4, iVar16, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
					    in_stack_ffffffa8);
					SetPlrHandItem((int)piVar7, 0, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
					    in_stack_ffffffa8);
					GetGoldSeed(iVar4, piVar7, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
					    in_stack_ffffffa8);
					SetPlrHandGoldCurs((int)piVar7);
					*(int *)(puVar3 + 0x5498) = *(int *)(puVar2 + 0x4918);
					param_3 = 0;
					param_4 = 0;
					PlrDeadItem(param_1, piVar7, 0, 0, CONCAT71(uVar10, uVar11), (uint)lVar12, (int)lVar13,
					    (int)lVar14, in_stack_ffffffa8);
					iVar16 = -1;
				}
			}
			iVar16 = iVar16 + 1;
		}
	}
	**(undefined4 **)(iVar5 + -0x76bc) = 0xff;
	if (0 < iVar17) {
		lVar15 = 0;
		while (true) {
			uVar9 = (undefined)param_4;
			uVar8 = (undefined)param_3;
			iVar16 = (int)lVar15;
			if ((*(int *)(puVar3 + 0x4828) <= iVar16) || (iVar17 < 1))
				break;
			puVar2 = puVar3 + iVar16 * 0x170;
			if (*(int *)(puVar2 + 0xeb0) == 0xb) {
				iVar5 = *(int *)(puVar2 + 0xf6c);
				if (iVar5 != 5000) {
					if (iVar17 < iVar5) {
						*(int *)(puVar2 + 0xf6c) = iVar5 - iVar17;
						SetGoldCurs(iVar4, iVar16);
						SetPlrHandItem((int)piVar7, 0, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
						    in_stack_ffffffa8);
						GetGoldSeed(iVar4, piVar7, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
						    in_stack_ffffffa8);
						SetPlrHandGoldCurs((int)piVar7);
						*(int *)(puVar3 + 0x5498) = iVar17;
						param_3 = 0;
						param_4 = 0;
						PlrDeadItem(param_1, piVar7, 0, 0, CONCAT71(uVar10, uVar11), (uint)lVar12, (int)lVar13,
						    (int)lVar14, in_stack_ffffffa8);
						iVar17 = 0;
					} else {
						iVar17 = iVar17 - iVar5;
						RemoveInvItem(param_1, lVar15, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
						    in_stack_ffffffa8);
						SetPlrHandItem((int)piVar7, 0, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
						    in_stack_ffffffa8);
						GetGoldSeed(iVar4, piVar7, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
						    in_stack_ffffffa8);
						SetPlrHandGoldCurs((int)piVar7);
						*(int *)(puVar3 + 0x5498) = *(int *)(puVar2 + 0xf6c);
						param_3 = 0;
						param_4 = 0;
						PlrDeadItem(param_1, piVar7, 0, 0, CONCAT71(uVar10, uVar11), (uint)lVar12, (int)lVar13,
						    (int)lVar14, in_stack_ffffffa8);
						lVar15 = -1;
					}
				}
			}
			lVar15 = lVar15 + 1;
		}
		if (0 < iVar17) {
			lVar15 = 0;
			while (true) {
				uVar9 = (undefined)param_4;
				uVar8 = (undefined)param_3;
				iVar16 = (int)lVar15;
				if ((*(int *)(puVar3 + 0x4828) <= iVar16) || (iVar17 < 1))
					break;
				puVar2 = puVar3 + iVar16 * 0x170;
				if (*(int *)(puVar2 + 0xeb0) == 0xb) {
					iVar5 = *(int *)(puVar2 + 0xf6c);
					if (iVar17 < iVar5) {
						*(int *)(puVar2 + 0xf6c) = iVar5 - iVar17;
						SetGoldCurs(iVar4, iVar16);
						SetPlrHandItem((int)piVar7, 0, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
						    in_stack_ffffffa8);
						GetGoldSeed(iVar4, piVar7, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
						    in_stack_ffffffa8);
						SetPlrHandGoldCurs((int)piVar7);
						*(int *)(puVar3 + 0x5498) = iVar17;
						param_3 = 0;
						param_4 = 0;
						PlrDeadItem(param_1, piVar7, 0, 0, CONCAT71(uVar10, uVar11), (uint)lVar12, (int)lVar13,
						    (int)lVar14, in_stack_ffffffa8);
						iVar17 = 0;
					} else {
						iVar17 = iVar17 - iVar5;
						RemoveInvItem(param_1, lVar15, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
						    in_stack_ffffffa8);
						SetPlrHandItem((int)piVar7, 0, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
						    in_stack_ffffffa8);
						GetGoldSeed(iVar4, piVar7, uVar8, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
						    in_stack_ffffffa8);
						SetPlrHandGoldCurs((int)piVar7);
						*(int *)(puVar3 + 0x5498) = *(int *)(puVar2 + 0xf6c);
						param_3 = 0;
						param_4 = 0;
						PlrDeadItem(param_1, piVar7, 0, 0, CONCAT71(uVar10, uVar11), (uint)lVar12, (int)lVar13,
						    (int)lVar14, in_stack_ffffffa8);
						lVar15 = -1;
					}
				}
				lVar15 = lVar15 + 1;
			}
		}
	}
	uVar6 = CalculateGold(iVar4);
	*piVar1 = (int)uVar6;
	return;
}

void SyncPlrKill(ulonglong param_1, uint param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	int *piVar3;
	ulonglong uVar4;
	undefined4 in_stack_ffffffc8;

	uVar4 = ZEXT48(PTR_DAT_100f196c);
	if ((*(int *)(PTR_DAT_100f1828 + (int)param_1 * 0x55ec + 0x194) == 0) && (*PTR_DAT_100f17ec == '\0')) {
		SetPlayerHitPoints(param_1, 0x40, uVar4, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
		    in_stack_ffffffc8);
	} else {
		uVar2 = (ulonglong) * (uint *)PTR_DAT_100f1968;
		piVar3 = (int *)PTR_DAT_100f1970;
		if (0 < (int)*(uint *)PTR_DAT_100f1968) {
			do {
				if (((*(int *)(PTR_DAT_100f196c + *piVar3 * 0xb4) == 0xd) && (puVar1 = PTR_DAT_100f196c + *piVar3 * 0xb4, (int)param_1 == *(int *)(puVar1 + 0x78)))
				    && (*(int *)(puVar1 + 0x34) == 0)) {
					if (param_2 == 0xffffffff) {
						return;
					}
					*(uint *)(puVar1 + 0xb0) = param_2;
					return;
				}
				piVar3 = piVar3 + 1;
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
		}
		SetPlayerHitPoints(param_1, 0, uVar4, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
		    in_stack_ffffffc8);
		StartPlayerKill(param_1, param_2, uVar4, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void StartPlayerKill(ulonglong param_1, uint param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	StartPlayerKill(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void RemovePlrMissiles(uint param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	longlong lVar8;
	undefined7 uVar9;
	undefined uVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	int *piVar14;
	int iVar15;
	ulonglong uVar16;
	uint *puVar17;
	undefined4 in_stack_ffffffa8;

	puVar6 = PTR_DAT_100f196c;
	puVar5 = PTR_DAT_100f1968;
	puVar4 = PTR_DAT_100f187c;
	puVar3 = PTR_DAT_100f1824;
	uVar9 = (undefined7)(param_5 >> 8);
	uVar10 = (undefined)param_5;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	ppuVar7 = &toc;
	uVar16 = ZEXT48(PTR_DAT_100f187c);
	if ((*PTR_DAT_100f17ec != '\0') && (uVar1 = *(uint *)PTR_DAT_100f1824, param_1 == uVar1)) {
		puVar2 = PTR_DAT_100f187c + 0x20;
		if ((*(int *)(puVar2 + uVar1 * 0xe8) != 1) || (*(int *)(PTR_DAT_100f187c + uVar1 * 0xe8 + 0x24) != 0)) {
			ppuVar7 = &toc;
			M_StartKill((ulonglong)uVar1, (ulonglong)uVar1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
			iVar15 = *(int *)puVar3 * 0xe8;
			AddDead(*(int *)(puVar2 + iVar15), *(int *)(puVar4 + 0x24 + iVar15),
			    (uint) * (byte *)(*(int *)(puVar4 + iVar15 + 0xe0) + 0x1fd),
			    *(int *)(puVar4 + iVar15 + 0x48));
			param_4 = 0;
			uVar1 = *(uint *)ppuVar7[-0x1d9f];
			param_3 = (ulonglong)uVar1;
			*(undefined2 *)(uVar1 + *(int *)(puVar2 + *(int *)puVar3 * 0xe8) * 0xe0 + *(int *)(puVar4 + 0x24 + *(int *)puVar3 * 0xe8) * 2) = 0;
			lVar8 = uVar16 + (ulonglong) * (uint *)puVar3 * 0xe8;
			*(undefined4 *)((int)lVar8 + 0x70) = 1;
			DeleteMonsterList((char)lVar8, 1, (char)uVar1, 0, uVar10, (char)lVar11, (char)lVar12, (char)lVar13,
			    in_stack_ffffffa8);
		}
	}
	puVar17 = (uint *)ppuVar7[-0x1d98];
	iVar15 = 0;
	while (iVar15 < *(int *)puVar5) {
		uVar1 = *puVar17;
		if ((*(int *)(puVar6 + uVar1 * 0xb4) == 0x1e) && (puVar3 = puVar6 + uVar1 * 0xb4, param_1 == *(uint *)(puVar3 + 0x78))) {
			*(undefined4 *)(puVar4 + *(int *)(puVar3 + 0x98) * 0xe8 + 4) = *(undefined4 *)(puVar3 + 0x94);
		}
		piVar14 = (int *)(puVar6 + uVar1 * 0xb4);
		if ((*piVar14 == 0xd) && (param_1 == piVar14[0x1e])) {
			ClearMissileSpot(uVar1);
			DeleteMissile((ulonglong)uVar1, iVar15, param_3, param_4, CONCAT71(uVar9, uVar10), (int)lVar11,
			    (int)lVar12, (int)lVar13, in_stack_ffffffa8);
		}
		if ((*piVar14 == 0x22) && (param_1 == piVar14[0x1e])) {
			ClearMissileSpot(uVar1);
			DeleteMissile((ulonglong)uVar1, iVar15, param_3, param_4, CONCAT71(uVar9, uVar10), (int)lVar11,
			    (int)lVar12, (int)lVar13, in_stack_ffffffa8);
		}
		puVar17 = puVar17 + 1;
		iVar15 = iVar15 + 1;
	}
	return;
}

void InitLevelChange(ulonglong param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	uint uVar7;
	undefined8 uVar6;
	longlong lVar8;
	undefined7 uVar9;
	undefined uVar10;
	ulonglong uVar11;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f18a0;
	puVar3 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	uVar9 = (undefined7)(param_5 >> 8);
	uVar10 = (undefined)param_5;
	ppuVar5 = &toc;
	uVar11 = ZEXT48(PTR_DAT_100f1828);
	uVar7 = (uint)param_1;
	uVar7._3_1_ = RemovePlrMissiles(uVar7, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	if ((uVar7 == *(uint *)puVar4) && (*puVar2 != '\0')) {
		*puVar2 = 0;
		uVar6 = sfx_stop((undefined)uVar7, (char)param_2, (char)param_3, (char)param_4, uVar10,
		    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8);
		music_stop2(uVar6, param_2, param_3, param_4, CONCAT71(uVar9, uVar10), param_6, param_7, param_8,
		    in_stack_ffffffb8);
	}
	RemovePlrFromMap(uVar7);
	SetPlayerOld(param_1, param_2, param_3, param_4, CONCAT71(uVar9, uVar10), param_6, param_7, param_8,
	    in_stack_ffffffb8);
	uVar1 = *(uint *)puVar4;
	if (uVar7 == uVar1) {
		param_4 = (ulonglong)uVar1 + 1;
		param_3 = (ulonglong) * (uint *)ppuVar5[-0x1da0];
		lVar8 = uVar11 + (ulonglong)uVar1 * 0x55ec;
		*(undefined *)(*(uint *)ppuVar5[-0x1da0] + *(int *)((int)lVar8 + 0x38) * 0x70 + *(int *)((int)lVar8 + 0x3c))
		    = (char)param_4;
	} else {
		puVar2 = puVar3 + uVar7 * 0x55ec;
		lVar8 = 1;
		puVar2[*(int *)(puVar2 + 0x34) + 0x1f0] = 1;
	}
	ClrPlrPath(param_1, lVar8, param_3, param_4, CONCAT71(uVar9, uVar10), param_6, param_7, param_8,
	    in_stack_ffffffb8);
	puVar3 = puVar3 + uVar7 * 0x55ec;
	*(undefined4 *)(puVar3 + 0x20) = 0xffffffff;
	puVar3[0x13b] = 1;
	if (uVar7 == *(uint *)puVar4) {
		puVar3[0x5592] = 10;
	}
	return;
}

void StartNewLvl(ulonglong param_1, longlong param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined4 *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	int local_3c;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = PTR_s_StartNewLvl__illegal_player__d_100f361c;
	puVar5 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	uVar10 = (undefined7)(param_5 >> 8);
	uVar11 = (undefined)param_5;
	ppuVar7 = &toc;
	uVar9 = param_3;
	InitLevelChange(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal((int)puVar6, param_1, uVar9, param_4, CONCAT71(uVar10, uVar11), param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar1 = *(uint *)puVar4;
	uVar8 = (ulonglong)uVar1;
	if (3 < uVar1) {
		app_fatal((int)puVar6, uVar8, uVar9, param_4, CONCAT71(uVar10, uVar11), param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	if ((param_2 - 0x402U & 0xffffffff) < 8) {
		// WARNING: Could not recover jumptable at 0x10095e6c. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar7[-0x166f] + (int)(param_2 - 0x402U) * 4))();
		return;
	}
	app_fatal((int)ppuVar7[-0x166e], uVar8, uVar9, param_4, CONCAT71(uVar10, uVar11), param_6, param_7,
	    param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
	    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
	    in_stack_ffffffe0, in_stack_ffffffe4);
	if ((int)param_1 == *(int *)puVar4) {
		iVar3 = (int)param_1 * 0x55ec;
		puVar2 = (undefined4 *)ppuVar7[-0x1e03];
		*(undefined4 *)(puVar5 + iVar3) = 10;
		puVar5[iVar3 + 0x139] = 1;
		PostMessage((char)*puVar2, (char)param_2, 0, 0, uVar11, (char)param_6, (char)param_7, (char)param_8,
		    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
		if (1 < **(byte **)(local_3c + -0x77f0)) {
			NetSendCmdParam2(1, 0x1e, (ulonglong)((uint)param_2 & 0xffff), (ulonglong)((uint)param_3 & 0xffff),
			    CONCAT71(uVar10, uVar11), param_6, param_7, param_8, in_stack_ffffffb8);
		}
	}
	return;
}

void RestartTownLvl(ulonglong param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffb8;
	undefined uVar12;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f1828;
	uVar7 = (undefined7)(param_5 >> 8);
	uVar8 = (undefined)param_5;
	ppuVar5 = &toc;
	InitLevelChange(param_1, param_2, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
	    in_stack_ffffffb8);
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal((int)ppuVar5[-0x1670], param_1, param_3, param_4, CONCAT71(uVar7, uVar8), (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar3 = (int)param_1 * 0x55ec;
	puVar2 = puVar4 + iVar3;
	*(undefined4 *)(puVar2 + 0x34) = 0;
	puVar2[0x139] = 0;
	SetPlayerHitPoints(param_1, 0x40, param_3, param_4, CONCAT71(uVar7, uVar8), (int)param_6, (int)param_7,
	    (int)param_8, in_stack_ffffffb8);
	uVar12 = (undefined)in_stack_ffffffb8;
	uVar11 = (undefined)param_8;
	uVar10 = (undefined)param_7;
	uVar9 = (undefined)param_6;
	*(undefined4 *)(puVar2 + 0x1a8) = 0;
	uVar6 = (ulonglong) * (uint *)(puVar2 + 0x1ac) - (ulonglong) * (uint *)(puVar2 + 0x1a4);
	*(int *)(puVar2 + 0x1a0) = *(int *)(puVar2 + 0x1a8) - (int)uVar6;
	CalcPlrInv(param_1, 0, uVar6, (ulonglong) * (uint *)(puVar2 + 0x1a4), CONCAT71(uVar7, uVar8), param_6,
	    param_7, param_8, in_stack_ffffffb8);
	if ((int)param_1 == *(int *)ppuVar5[-0x1deb]) {
		puVar1 = (undefined4 *)ppuVar5[-0x1e03];
		*(undefined4 *)(puVar4 + iVar3) = 10;
		puVar2[0x139] = 1;
		PostMessage((char)*puVar1, 9, 0, 0, uVar8, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffbf, local_3c);
	}
	return;
}

void StartWarpLvl(ulonglong param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	int iVar9;
	undefined4 in_stack_ffffffb8;
	undefined uVar10;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	puVar3 = PTR_DAT_100f1828;
	uVar10 = (undefined)in_stack_ffffffb8;
	uVar5 = (undefined)param_5;
	uVar8 = (undefined)param_8;
	uVar7 = (undefined)param_7;
	uVar6 = (undefined)param_6;
	ppuVar4 = &toc;
	InitLevelChange(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	iVar9 = (int)param_1;
	if (*ppuVar4[-0x1dfc] != '\x01') {
		puVar2 = puVar3 + iVar9 * 0x55ec;
		if (*(int *)(puVar2 + 0x34) == 0) {
			*(undefined4 *)(puVar2 + 0x34) = *(undefined4 *)(ppuVar4[-0x1c52] + (int)param_2 * 0x18 + 0xc);
		} else {
			*(undefined4 *)(puVar2 + 0x34) = 0;
		}
	}
	if (iVar9 == *(int *)ppuVar4[-0x1deb]) {
		SetCurrentPortal((int)param_2);
		puVar1 = (undefined4 *)ppuVar4[-0x1e03];
		*(undefined4 *)(puVar3 + iVar9 * 0x55ec) = 10;
		puVar3[iVar9 * 0x55ec + 0x139] = 1;
		PostMessage((char)*puVar1, 6, 0, 0, uVar5, uVar6, uVar7, uVar8, uVar10, in_stack_ffffffbf, local_3c);
	}
	return;
}

undefined8
PM_DoStand(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11)

{
	return 0;
}

undefined8
PM_DoWalk(ulonglong param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	uint uVar3;
	int *piVar4;
	undefined *puVar5;
	int iVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined **ppuVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	undefined8 uVar14;
	undefined4 uVar15;
	undefined4 uVar16;
	undefined4 uVar17;
	uint *puVar18;
	int *piVar19;
	ulonglong uVar20;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar10 = PTR_DAT_100f1950;
	puVar9 = PTR_DAT_100f183c;
	puVar8 = PTR_DAT_100f1828;
	puVar7 = PTR_DAT_100f1818;
	ppuVar11 = &toc;
	uVar20 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar11 = &toc;
		app_fatal((int)PTR_s_PM_DoWalk__illegal_player__d_100f360c, param_1, param_3, param_4, param_5,
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffa8, in_stack_ffffffaf,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar6 = (int)(param_1 * 0x55ec);
	iVar1 = *(int *)(puVar8 + iVar6 + 0x8c);
	if (((iVar1 == 3) || ((iVar2 = *(int *)(puVar8 + iVar6 + 0x2a0), iVar2 == 8 && (iVar1 == 7)))) || ((iVar2 != 8 && (iVar1 == 4)))) {
		param_3 = (ulonglong) * (uint *)(puVar8 + iVar6 + 0x3c);
		PlaySfxLoc(0, (ulonglong) * (uint *)(puVar8 + iVar6 + 0x38), param_3, param_4, param_5, (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffffa8);
	}
	uVar12 = 8;
	if (*ppuVar11[-0x1df9] != '\0') {
		uVar12 = (ulonglong) * (uint *)(ppuVar11[-0x1be4] + (int)(char)puVar8[iVar6 + 0x15c] * 4);
	}
	puVar5 = puVar8 + iVar6;
	if ((int)uVar12 == *(int *)(puVar5 + 0x1ec)) {
		piVar19 = (int *)(puVar5 + 0x38);
		puVar18 = (uint *)(puVar5 + 0x3c);
		uVar14 = 0;
		uVar3 = *(uint *)puVar10;
		uVar13 = (ulonglong)uVar3;
		uVar12 = (longlong)(char)param_1 + 1;
		*(undefined *)(uVar3 + *(int *)(puVar5 + 0x38) * 0x70 + *(int *)(puVar5 + 0x3c)) = 0;
		*(int *)(puVar5 + 0x38) = *(int *)(puVar5 + 0x38) + *(int *)(puVar5 + 0x1d0);
		*(int *)(puVar5 + 0x3c) = *(int *)(puVar5 + 0x3c) + *(int *)(puVar5 + 0x1d4);
		*(undefined *)(*(int *)puVar10 + *(int *)(puVar5 + 0x38) * 0x70 + *(int *)(puVar5 + 0x3c)) = (char)uVar12;
		if (*puVar9 != '\0') {
			ChangeLightXY(*(int *)(puVar5 + 0x9c), *piVar19, *puVar18);
			uVar12 = (ulonglong)*puVar18;
			ChangeVisionXY(*(int *)(puVar5 + 0xa0), *piVar19, *puVar18);
		}
		uVar17 = (undefined4)param_8;
		uVar16 = (undefined4)param_7;
		uVar15 = (undefined4)param_6;
		if (((int)param_1 == *(int *)ppuVar11[-0x1deb]) && (*(int *)(puVar7 + 0x10) != 0)) {
			piVar4 = (int *)ppuVar11[-0x1ded];
			*(int *)ppuVar11[-0x1dec] = *piVar19 - *(int *)(puVar7 + 8);
			*piVar4 = *puVar18 - *(int *)(puVar7 + 0xc);
		}
		uVar20 = uVar20 + param_1 * 0x55ec;
		if (*(char *)((int)uVar20 + 4) == -1) {
			uVar20 = (ulonglong) * (uint *)((int)uVar20 + 0x1d8);
			StartStand(param_1, uVar20, uVar12, uVar13, uVar14, param_6, param_7, param_8, in_stack_ffffffa8);
		} else {
			StartWalkStand(param_1, uVar20, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
		}
		ClearPlrPVars(param_1, uVar20, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffa8);
		if (*puVar9 != '\0') {
			ChangeLightOff(*(int *)(puVar8 + iVar6 + 0x9c), 0, 0);
		}
		uVar14 = 1;
	} else {
		M_ChangeOffset(param_1, uVar12, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
		    in_stack_ffffffa8);
		uVar14 = 0;
	}
	return uVar14;
}

undefined8
PM_DoWalk2(ulonglong param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined **ppuVar9;
	undefined8 uVar10;
	ulonglong uVar11;
	undefined4 uVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	longlong lVar15;
	ulonglong uVar16;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar8 = PTR_DAT_100f183c;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1818;
	ppuVar9 = &toc;
	uVar16 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar9 = &toc;
		app_fatal((int)PTR_s_PM_DoWalk2__illegal_player__d_100f3608, param_1, param_3, param_4, param_5,
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffa8, in_stack_ffffffaf,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	lVar15 = param_1 * 0x55ec;
	iVar5 = (int)lVar15;
	iVar1 = *(int *)(puVar7 + iVar5 + 0x8c);
	if (((iVar1 == 3) || ((iVar2 = *(int *)(puVar7 + iVar5 + 0x2a0), iVar2 == 8 && (iVar1 == 7)))) || ((iVar2 != 8 && (iVar1 == 4)))) {
		param_3 = (ulonglong) * (uint *)(puVar7 + iVar5 + 0x3c);
		PlaySfxLoc(0, (ulonglong) * (uint *)(puVar7 + iVar5 + 0x38), param_3, param_4, param_5, (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffffa8);
	}
	uVar11 = 8;
	if (*ppuVar9[-0x1df9] != '\0') {
		uVar11 = (ulonglong) * (uint *)(ppuVar9[-0x1be4] + (int)(char)puVar7[iVar5 + 0x15c] * 4);
	}
	puVar4 = puVar7 + iVar5;
	if ((int)uVar11 == *(int *)(puVar4 + 0x1ec)) {
		uVar11 = 0;
		*(undefined *)(*(int *)ppuVar9[-0x1da0] + *(int *)(puVar4 + 0x1d0) * 0x70 + *(int *)(puVar4 + 0x1d4)) = 0;
		if (*puVar8 != '\0') {
			ChangeLightXY(*(int *)(puVar4 + 0x9c), *(undefined4 *)(puVar4 + 0x38),
			    *(undefined4 *)(puVar4 + 0x3c));
			uVar11 = (ulonglong) * (uint *)(puVar4 + 0x3c);
			ChangeVisionXY(*(int *)(puVar4 + 0xa0), *(undefined4 *)(puVar4 + 0x38), *(uint *)(puVar4 + 0x3c));
		}
		uVar14 = (undefined4)param_8;
		uVar13 = (undefined4)param_7;
		uVar12 = (undefined4)param_6;
		if (((int)param_1 == *(int *)ppuVar9[-0x1deb]) && (*(int *)(puVar6 + 0x10) != 0)) {
			uVar11 = uVar16 + lVar15;
			piVar3 = (int *)ppuVar9[-0x1ded];
			*(int *)ppuVar9[-0x1dec] = *(int *)((int)uVar11 + 0x38) - *(int *)(puVar6 + 8);
			*piVar3 = *(int *)((int)uVar11 + 0x3c) - *(int *)(puVar6 + 0xc);
		}
		uVar16 = uVar16 + lVar15;
		if (*(char *)((int)uVar16 + 4) == -1) {
			uVar16 = (ulonglong) * (uint *)((int)uVar16 + 0x1d8);
			StartStand(param_1, uVar16, uVar11, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
		} else {
			StartWalkStand(param_1, uVar16, uVar11, param_4, param_5, uVar12, uVar13, uVar14, in_stack_ffffffa8);
		}
		ClearPlrPVars(param_1, uVar16, uVar11, param_4, param_5, uVar12, uVar13, uVar14, in_stack_ffffffa8);
		if (*puVar8 != '\0') {
			ChangeLightOff(*(int *)(puVar7 + iVar5 + 0x9c), 0, 0);
		}
		uVar10 = 1;
	} else {
		M_ChangeOffset(param_1, uVar11, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
		    in_stack_ffffffa8);
		uVar10 = 0;
	}
	return uVar10;
}

undefined8
PM_DoWalk3(ulonglong param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	int *piVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined **ppuVar10;
	int iVar11;
	ulonglong uVar12;
	longlong lVar13;
	ulonglong uVar14;
	undefined8 uVar15;
	undefined4 uVar16;
	undefined4 uVar17;
	undefined4 uVar18;
	uint *puVar19;
	int *piVar20;
	ulonglong uVar21;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar9 = PTR_DAT_100f1950;
	puVar8 = PTR_DAT_100f183c;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1818;
	ppuVar10 = &toc;
	uVar21 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar10 = &toc;
		app_fatal((int)PTR_s_PM_DoWalk3__illegal_player__d_100f3604, param_1, param_3, param_4, param_5,
		    param_6, (int)param_7, (int)param_8, in_stack_ffffffa8, in_stack_ffffffaf,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar5 = (int)(param_1 * 0x55ec);
	iVar11 = *(int *)(puVar7 + iVar5 + 0x8c);
	if (((iVar11 == 3) || ((iVar1 = *(int *)(puVar7 + iVar5 + 0x2a0), iVar1 == 8 && (iVar11 == 7))))
	    || ((iVar1 != 8 && (iVar11 == 4)))) {
		param_3 = (ulonglong) * (uint *)(puVar7 + iVar5 + 0x3c);
		PlaySfxLoc(0, (ulonglong) * (uint *)(puVar7 + iVar5 + 0x38), param_3, param_4, param_5, param_6,
		    (int)param_7, (int)param_8, in_stack_ffffffa8);
	}
	uVar12 = 8;
	if (*ppuVar10[-0x1df9] != '\0') {
		uVar12 = (ulonglong) * (uint *)(ppuVar10[-0x1be4] + (int)(char)puVar7[iVar5 + 0x15c] * 4);
	}
	puVar4 = puVar7 + iVar5;
	if ((int)uVar12 == *(int *)(puVar4 + 0x1ec)) {
		piVar20 = (int *)(puVar4 + 0x38);
		puVar19 = (uint *)(puVar4 + 0x3c);
		uVar15 = 0;
		lVar13 = (ulonglong) * (uint *)(puVar4 + 0x38) * 0x70;
		uVar2 = *(uint *)puVar9;
		uVar14 = (ulonglong)uVar2;
		uVar12 = (longlong)(char)param_1 + 1;
		piVar3 = (int *)ppuVar10[-0x1de7];
		*(undefined *)(uVar2 + (int)lVar13 + *(int *)(puVar4 + 0x3c)) = 0;
		iVar11 = *(int *)(puVar4 + 0x1dc) * 0x70 + *(int *)(puVar4 + 0x1e0);
		*(byte *)(*piVar3 + iVar11) = *(byte *)(*piVar3 + iVar11) & 0xdf;
		*(undefined4 *)(puVar4 + 0x38) = *(undefined4 *)(puVar4 + 0x1d0);
		*(undefined4 *)(puVar4 + 0x3c) = *(undefined4 *)(puVar4 + 0x1d4);
		*(undefined *)(*(int *)puVar9 + *(int *)(puVar4 + 0x38) * 0x70 + *(int *)(puVar4 + 0x3c)) = (char)uVar12;
		if (*puVar8 != '\0') {
			ChangeLightXY(*(int *)(puVar4 + 0x9c), *piVar20, *puVar19);
			uVar12 = (ulonglong)*puVar19;
			ChangeVisionXY(*(int *)(puVar4 + 0xa0), *piVar20, *puVar19);
		}
		uVar16 = (undefined4)uVar15;
		uVar18 = (undefined4)param_8;
		uVar17 = (undefined4)param_7;
		if (((int)param_1 == *(int *)ppuVar10[-0x1deb]) && (*(int *)(puVar6 + 0x10) != 0)) {
			piVar3 = (int *)ppuVar10[-0x1ded];
			*(int *)ppuVar10[-0x1dec] = *piVar20 - *(int *)(puVar6 + 8);
			*piVar3 = *puVar19 - *(int *)(puVar6 + 0xc);
		}
		uVar21 = uVar21 + param_1 * 0x55ec;
		if (*(char *)((int)uVar21 + 4) == -1) {
			uVar21 = (ulonglong) * (uint *)((int)uVar21 + 0x1d8);
			StartStand(param_1, uVar21, uVar12, lVar13, uVar14, uVar15, param_7, param_8, in_stack_ffffffa8);
		} else {
			StartWalkStand(param_1, uVar21, uVar12, lVar13, uVar14, uVar16, uVar17, uVar18, in_stack_ffffffa8);
		}
		ClearPlrPVars(param_1, uVar21, uVar12, lVar13, uVar14, uVar16, uVar17, uVar18, in_stack_ffffffa8);
		if (*puVar8 != '\0') {
			ChangeLightOff(*(int *)(puVar7 + iVar5 + 0x9c), 0, 0);
		}
		uVar15 = 1;
	} else {
		M_ChangeOffset(param_1, uVar12, param_3, param_4, param_5, param_6, (int)param_7, (int)param_8,
		    in_stack_ffffffa8);
		uVar15 = 0;
	}
	return uVar15;
}

undefined8
WeaponDur(ulonglong param_1, longlong param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	int *piVar4;
	int iVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	longlong lVar8;
	ulonglong uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined4 uVar14;
	undefined4 uVar15;
	undefined4 uVar16;
	ulonglong uVar17;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = PTR_DAT_100f1828;
	uVar12 = (undefined7)(param_5 >> 8);
	uVar13 = (undefined)param_5;
	uVar10 = (undefined7)(param_4 >> 8);
	uVar11 = (undefined)param_4;
	ppuVar7 = &toc;
	uVar9 = ZEXT48(PTR_DAT_100f1824);
	uVar17 = ZEXT48(PTR_DAT_100f1828);
	if ((int)param_1 == *(int *)PTR_DAT_100f1824) {
		lVar8 = random(3, param_2, (char)PTR_DAT_100f1824, uVar11, uVar13, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffb8, in_stack_ffffffbf, (char)in_stack_ffffffc8);
		if ((int)lVar8 == 0) {
			if (3 < (param_1 & 0xffffffff)) {
				app_fatal((int)ppuVar7[-0x1674], param_1, uVar9, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
				    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
				    in_stack_ffffffe0, in_stack_ffffffe4);
			}
			uVar16 = (undefined4)param_8;
			uVar15 = (undefined4)param_7;
			uVar14 = (undefined4)param_6;
			lVar8 = param_1 * 0x55ec;
			iVar5 = (int)lVar8;
			piVar2 = (int *)(puVar6 + iVar5 + 0xa60);
			if (*piVar2 != -1) {
				iVar1 = (int)(uVar17 + lVar8);
				if (*(char *)(iVar1 + 0xb16) == '\x01') {
					uVar9 = uVar17 + lVar8 + 0xb44;
					iVar1 = *(int *)(iVar1 + 0xb44);
					if (iVar1 == 0xff) {
						return 0;
					}
					*(int *)uVar9 = iVar1 + -1;
					if (*(int *)uVar9 == 0) {
						NetSendCmdDelItem(1, 4, uVar9, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), uVar14, uVar15,
						    uVar16, in_stack_ffffffb8);
						*piVar2 = -1;
						CalcPlrInv(param_1, 1, uVar9, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), param_6,
						    param_7, param_8, in_stack_ffffffb8);
						return 1;
					}
				}
			}
			piVar3 = (int *)(puVar6 + iVar5 + 0xbd0);
			if (*piVar3 != -1) {
				iVar1 = (int)(uVar17 + lVar8);
				if (*(char *)(iVar1 + 0xc86) == '\x01') {
					uVar9 = uVar17 + lVar8 + 0xcb4;
					iVar1 = *(int *)(iVar1 + 0xcb4);
					if (iVar1 == 0xff) {
						return 0;
					}
					*(int *)uVar9 = iVar1 + -1;
					if (*(int *)uVar9 == 0) {
						NetSendCmdDelItem(1, 5, uVar9, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), uVar14, uVar15,
						    uVar16, in_stack_ffffffb8);
						*piVar3 = -1;
						CalcPlrInv(param_1, 1, uVar9, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), param_6,
						    param_7, param_8, in_stack_ffffffb8);
						return 1;
					}
				}
			}
			if ((*piVar2 == -1) && (*piVar3 == 5)) {
				uVar9 = uVar17 + lVar8 + 0xcb4;
				piVar4 = (int *)uVar9;
				if (*piVar4 == 0xff) {
					return 0;
				}
				*piVar4 = *piVar4 + -1;
				if (*piVar4 == 0) {
					NetSendCmdDelItem(1, 5, uVar9, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), uVar14, uVar15,
					    uVar16, in_stack_ffffffb8);
					*piVar3 = -1;
					CalcPlrInv(param_1, 1, uVar9, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), param_6,
					    param_7, param_8, in_stack_ffffffb8);
					return 1;
				}
			}
			if ((*piVar3 == -1) && (*piVar2 == 5)) {
				piVar3 = (int *)(puVar6 + iVar5 + 0xb44);
				if (*piVar3 == 0xff) {
					return 0;
				}
				*piVar3 = *piVar3 + -1;
				if (*piVar3 == 0) {
					NetSendCmdDelItem(1, 4, uVar9, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), uVar14, uVar15,
					    uVar16, in_stack_ffffffb8);
					*piVar2 = -1;
					CalcPlrInv(param_1, 1, uVar9, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), param_6,
					    param_7, param_8, in_stack_ffffffb8);
					return 1;
				}
			}
			return 0;
		}
	}
	return 0;
}

ulonglong PlrHitMonst(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	int *piVar5;
	int *piVar6;
	int iVar7;
	undefined *puVar8;
	uint *puVar9;
	int iVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined **ppuVar14;
	ulonglong uVar15;
	longlong lVar16;
	undefined8 uVar17;
	undefined uVar20;
	int iVar18;
	int iVar19;
	undefined uVar21;
	undefined uVar23;
	ulonglong uVar22;
	undefined8 unaff_r17;
	int iVar24;
	undefined8 unaff_r18;
	int iVar25;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	longlong lVar26;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	ulonglong uVar27;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;
	undefined uVar28;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	uint local_48[3];
	undefined4 local_3c;
	undefined4 uStack56;
	undefined4 uStack52;
	undefined4 uStack48;
	undefined4 uStack44;
	undefined4 uStack40;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar13 = PTR_DAT_100f18e0;
	puVar12 = PTR_DAT_100f187c;
	puVar11 = PTR_DAT_100f1828;
	iVar25 = (int)unaff_r18;
	ppuVar14 = &toc;
	local_3c = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
	uStack52 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
	uStack44 = (undefined4)((ulonglong)unaff_r21 >> 0x20);
	uStack40 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar27 = ZEXT48(PTR_DAT_100f1828);
	if (199 < (param_2 & 0xffffffff)) {
		ppuVar14 = &toc;
		app_fatal((int)PTR_s_PlrHitMonst__illegal_monster__d_100f35fc, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98,
		    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
	}
	uVar28 = (undefined)in_stack_ffffff98;
	uVar23 = (undefined)param_5;
	uVar21 = (undefined)param_4;
	uVar20 = (undefined)param_3;
	iVar10 = (int)param_2 * 0xe8;
	piVar5 = (int *)(puVar12 + iVar10 + 0x98);
	if (*piVar5 >> 6 == 0) {
		uVar15 = 0;
	} else {
		if ((**(char **)(puVar12 + iVar10 + 0xe0) == ' ') && ((puVar12 + iVar10)[8] == '\x02')) {
			uVar15 = 0;
		} else {
			piVar6 = (int *)(puVar12 + iVar10 + 4);
			if (*piVar6 == 0xe) {
				uVar15 = 0;
			} else {
				if (3 < (param_1 & 0xffffffff)) {
					app_fatal((int)ppuVar14[-0x1676], param_1, param_3, param_4, param_5, param_6, param_7,
					    param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98,
					    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8,
					    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
				}
				uVar15 = 0;
				lVar16 = random(4, 100, uVar20, uVar21, uVar23, (char)param_6, (char)param_7, (char)param_8,
				    in_stack_ffffff88, in_stack_ffffff8f, uVar28);
				iVar18 = (int)lVar16;
				if (*piVar6 == 0xf) {
					iVar18 = 0;
				}
				lVar26 = param_1 * 0x55ec;
				uVar22 = uVar27 + lVar26;
				iVar19 = (int)uVar22;
				uVar2 = *(uint *)(iVar19 + 0x5578);
				uVar21 = (undefined)uVar2;
				lVar16 = (ulonglong)(byte)puVar12[iVar10 + 0xce] - (ulonglong)uVar2;
				uVar20 = (undefined)lVar16;
				iVar24 = (((int)*(char *)(iVar19 + 0x1b4) + 0x32) - (int)lVar16) + (*(int *)(iVar19 + 0x170) >> 1);
				if (*(char *)(iVar19 + 0x15c) == '\0') {
					iVar24 = iVar24 + 0x14;
				}
				iVar7 = (int)lVar26;
				iVar24 = iVar24 + *(int *)(puVar11 + iVar7 + 0x5554);
				if (iVar24 < 5) {
					iVar24 = 5;
				}
				if (0x5f < iVar24) {
					iVar24 = 0x5f;
				}
				uVar17 = CheckMonsterHit(param_2, local_48, lVar16, (ulonglong)uVar2, uVar22, param_6, param_7,
				    param_8, in_stack_ffffff88);
				if ((int)uVar17 == 0) {
					if (iVar18 < iVar24) {
						puVar8 = puVar11 + iVar7;
						uVar2 = *(uint *)(puVar8 + 0x5544);
						lVar16 = random(5, ((ulonglong) * (uint *)(puVar8 + 0x5548) - (ulonglong)uVar2) + 1,
						    uVar20, uVar21, (char)uVar22, (char)param_6, (char)param_7,
						    (char)param_8, in_stack_ffffff88, in_stack_ffffff8f, uVar28);
						iVar24 = uVar2 + (int)lVar16;
						iVar18 = iVar24 * *(int *)(puVar8 + 0x5550);
						uVar2 = iVar18 / 100 + (iVar18 >> 0x1f);
						uVar15 = (ulonglong)(uVar2 >> 0x1f);
						iVar18 = *(int *)(puVar8 + 0x555c) + *(int *)(puVar8 + 0x184) + iVar24 + (int)((ulonglong)uVar2 + uVar15);
						if ((*(char *)(iVar19 + 0x15c) == '\0') && (cVar1 = *(char *)(iVar19 + 0x1b4), lVar16 = random(6, 100, (char)((ulonglong)uVar2 + uVar15), (byte)(uVar2 >> 0x1f), (char)uVar22, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88, in_stack_ffffff8f, uVar28), (int)lVar16 < (int)cVar1)) {
							iVar18 = iVar18 * 2;
						}
						iVar19 = *(int *)(puVar11 + iVar7 + 0xa60);
						lVar16 = -1;
						if ((iVar19 == 1) || (*(int *)(puVar11 + iVar7 + 0xbd0) == 1)) {
							lVar16 = 1;
						}
						if ((iVar19 == 4) || (*(int *)(puVar11 + iVar7 + 0xbd0) == 4)) {
							lVar16 = 4;
						}
						cVar1 = *(char *)(*(int *)(puVar12 + iVar10 + 0xe4) + 0x72);
						if (cVar1 != '\x01') {
							iVar19 = (int)lVar16;
							if (cVar1 < '\x01') {
								if (-1 < cVar1) {
									if (iVar19 == 1) {
										iVar18 = iVar18 - (iVar18 >> 1);
									}
									if (iVar19 == 4) {
										iVar18 = iVar18 + (iVar18 >> 1);
									}
								}
							} else {
								if (cVar1 < '\x03') {
									if (iVar19 == 4) {
										iVar18 = iVar18 - (iVar18 >> 1);
									}
									if (iVar19 == 1) {
										iVar18 = iVar18 + (iVar18 >> 1);
									}
								}
							}
						}
						puVar9 = (uint *)(puVar11 + iVar7 + 0x5568);
						uVar2 = *puVar9;
						if (((uVar2 & 0x40000000) != 0) && (cVar1 == '\x01')) {
							iVar18 = iVar18 * 3;
						}
						uVar3 = iVar18 * 0x40;
						if ((int)param_1 == *(int *)ppuVar14[-0x1deb]) {
							*piVar5 = *piVar5 + iVar18 * -0x40;
						}
						if ((uVar2 & 2) != 0) {
							lVar16 = random(7, (ulonglong)(uint)((int)uVar3 >> 3), (char)lVar16, (char)uVar15,
							    (char)uVar22, (char)param_6, (char)param_7, (char)param_8,
							    in_stack_ffffff88, in_stack_ffffff8f, uVar28);
							lVar26 = uVar27 + lVar26;
							iVar19 = (int)lVar26;
							iVar25 = (int)lVar16;
							*(int *)(iVar19 + 0x194) = *(int *)(iVar19 + 0x194) + iVar25;
							lVar16 = lVar26 + 0x194;
							if (*(int *)(puVar11 + iVar7 + 0x198) < *(int *)lVar16) {
								*(int *)lVar16 = *(int *)(puVar11 + iVar7 + 0x198);
							}
							puVar8 = puVar11 + iVar7;
							*(int *)(puVar8 + 0x18c) = *(int *)(puVar8 + 0x18c) + iVar25;
							if (*(int *)(puVar11 + iVar7 + 400) < *(int *)(puVar8 + 0x18c)) {
								*(int *)(puVar8 + 0x18c) = *(int *)(puVar11 + iVar7 + 400);
							}
							*(undefined4 *)puVar13 = 1;
						}
						uVar2 = *puVar9;
						if (((uVar2 & 0x6000) != 0) && ((uVar2 & 0x8000000) == 0)) {
							if ((uVar2 & 0x2000) != 0) {
								uVar4 = (iVar18 * 0xc0) / 100 + (iVar18 * 0xc0 >> 0x1f);
								iVar25 = uVar4 + (uVar4 >> 0x1f);
							}
							if ((uVar2 & 0x4000) != 0) {
								uVar2 = (iVar18 * 0x140) / 100 + (iVar18 * 0x140 >> 0x1f);
								iVar25 = uVar2 + (uVar2 >> 0x1f);
							}
							puVar8 = puVar11 + iVar7;
							*(int *)(puVar8 + 0x1a8) = *(int *)(puVar8 + 0x1a8) + iVar25;
							if (*(int *)(puVar11 + iVar7 + 0x1ac) < *(int *)(puVar8 + 0x1a8)) {
								*(int *)(puVar8 + 0x1a8) = *(int *)(puVar11 + iVar7 + 0x1ac);
							}
							puVar8 = puVar11 + iVar7;
							*(int *)(puVar8 + 0x1a0) = *(int *)(puVar8 + 0x1a0) + iVar25;
							if (*(int *)(puVar11 + iVar7 + 0x1a4) < *(int *)(puVar8 + 0x1a0)) {
								*(int *)(puVar8 + 0x1a0) = *(int *)(puVar11 + iVar7 + 0x1a4);
							}
							*(undefined4 *)ppuVar14[-0x1dbd] = 1;
						}
						uVar2 = *puVar9;
						if ((uVar2 & 0x18000) != 0) {
							if ((uVar2 & 0x8000) != 0) {
								uVar4 = (iVar18 * 0xc0) / 100 + (iVar18 * 0xc0 >> 0x1f);
								iVar25 = uVar4 + (uVar4 >> 0x1f);
							}
							if ((uVar2 & 0x10000) != 0) {
								uVar2 = (iVar18 * 0x140) / 100 + (iVar18 * 0x140 >> 0x1f);
								iVar25 = uVar2 + (uVar2 >> 0x1f);
							}
							puVar8 = puVar11 + iVar7;
							*(int *)(puVar8 + 0x194) = *(int *)(puVar8 + 0x194) + iVar25;
							if (*(int *)(puVar11 + iVar7 + 0x198) < *(int *)(puVar8 + 0x194)) {
								*(int *)(puVar8 + 0x194) = *(int *)(puVar11 + iVar7 + 0x198);
							}
							puVar8 = puVar11 + iVar7;
							*(int *)(puVar8 + 0x18c) = *(int *)(puVar8 + 0x18c) + iVar25;
							if (*(int *)(puVar11 + iVar7 + 400) < *(int *)(puVar8 + 0x18c)) {
								*(int *)(puVar8 + 0x18c) = *(int *)(puVar11 + iVar7 + 400);
							}
							*(undefined4 *)puVar13 = 1;
						}
						uVar2 = *puVar9;
						if ((uVar2 & 0x100) != 0) {
							*(uint *)(puVar12 + iVar10 + 0xa0) = *(uint *)(puVar12 + iVar10 + 0xa0) | 8;
						}
						if (*piVar5 >> 6 == 0) {
							if (*piVar6 == 0xf) {
								M_StartKill(param_2, param_1, lVar16, uVar15, uVar22, param_6, param_7, param_8,
								    in_stack_ffffff88);
								*piVar6 = 0xf;
							} else {
								M_StartKill(param_2, param_1, lVar16, uVar15, uVar22, param_6, param_7, param_8,
								    in_stack_ffffff88);
							}
						} else {
							if (*piVar6 == 0xf) {
								M_StartHit(param_2, param_1, (ulonglong)uVar3, uVar15, uVar22, param_6, param_7, param_8,
								    in_stack_ffffff88);
								*piVar6 = 0xf;
							} else {
								if ((uVar2 & 0x800) != 0) {
									M_GetKnockback(param_2, (ulonglong)uVar2, lVar16, uVar15, uVar22, param_6, param_7, param_8, in_stack_ffffff88);
								}
								M_StartHit(param_2, param_1, (ulonglong)uVar3, uVar15, uVar22, param_6, param_7, param_8,
								    in_stack_ffffff88);
							}
						}
						uVar15 = 1;
					}
				} else {
					uVar15 = (ulonglong)local_48[0];
				}
			}
		}
	}
	return uVar15;
}

undefined8
PlrHitPlr(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	undefined *puVar4;
	char *pcVar5;
	undefined *puVar6;
	int iVar7;
	undefined *puVar8;
	int iVar9;
	undefined **ppuVar10;
	longlong lVar11;
	int iVar13;
	ulonglong uVar12;
	undefined uVar17;
	longlong lVar14;
	ulonglong uVar15;
	int iVar16;
	undefined uVar19;
	ulonglong uVar18;
	undefined uVar21;
	ulonglong uVar20;
	undefined uVar23;
	longlong lVar22;
	char cVar24;
	undefined8 uVar25;
	int iVar26;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined uVar27;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar4 = PTR_s_PlrHitPlr__illegal_target_player_100f35f4;
	puVar8 = PTR_DAT_100f1828;
	ppuVar10 = &toc;
	cVar24 = (char)param_2;
	if (3 < ((longlong)cVar24 & 0xffffffffU)) {
		ppuVar10 = &toc;
		app_fatal((int)PTR_s_PlrHitPlr__illegal_target_player_100f35f4, (longlong)cVar24, param_3,
		    param_4, param_5, param_6, (int)param_7, (int)param_8, in_stack_ffffff98,
		    in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0,
		    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
		    in_stack_ffffffc4);
	}
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal((int)puVar4, param_1, param_3, param_4, param_5, param_6, (int)param_7, (int)param_8,
		    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4);
	}
	uVar27 = (undefined)in_stack_ffffffa8;
	uVar23 = (undefined)param_6;
	uVar21 = (undefined)param_5;
	uVar19 = (undefined)param_4;
	uVar17 = (undefined)param_3;
	iVar16 = (int)cVar24 * 0x55ec;
	uVar25 = 0;
	if ((puVar8 + iVar16)[0x139] == '\0') {
		if (((puVar8 + iVar16)[0x11c] & 1) == 0) {
			if (3 < (param_1 & 0xffffffff)) {
				app_fatal((int)ppuVar10[-0x1678], param_1, param_3, param_4, param_5, param_6, (int)param_7,
				    (int)param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8,
				    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8,
				    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
			}
			lVar11 = random(4, 100, uVar17, uVar19, uVar21, uVar23, (char)param_7, (char)param_8,
			    in_stack_ffffff98, in_stack_ffffff9f, uVar27);
			puVar4 = puVar8 + iVar16;
			iVar7 = (int)param_1 * 0x55ec;
			puVar6 = puVar8 + iVar7;
			pcVar5 = puVar8 + iVar7 + 0x1b4;
			uVar3 = *(int *)(puVar4 + 0x170) / 5 + (*(int *)(puVar4 + 0x170) >> 0x1f);
			uVar20 = (ulonglong)(uVar3 >> 0x1f);
			lVar22 = (ulonglong) * (uint *)(puVar4 + 0x554c) + (ulonglong) * (uint *)(puVar4 + 0x5558) + (ulonglong)uVar3 + uVar20;
			lVar14 = ((longlong)*pcVar5 + 0x32) - lVar22;
			iVar26 = (int)lVar14 + (*(int *)(puVar6 + 0x170) >> 1);
			if (puVar6[0x15c] == '\0') {
				iVar26 = iVar26 + 0x14;
			}
			iVar26 = iVar26 + *(int *)(puVar8 + iVar7 + 0x5554);
			if (iVar26 < 5) {
				iVar26 = 5;
			}
			if (0x5f < iVar26) {
				iVar26 = 0x5f;
			}
			if (((*(int *)(puVar8 + iVar16) == 0) || (*(int *)(puVar8 + iVar16) == 4)) && (puVar8[iVar16 + 0x138] != '\0')) {
				lVar14 = random(5, 100, (char)lVar14, (char)((ulonglong)uVar3 + uVar20),
				    (byte)(uVar3 >> 0x1f), (char)lVar22, (char)param_7, (char)param_8,
				    in_stack_ffffff98, in_stack_ffffff9f, uVar27);
				iVar13 = (int)lVar14;
			} else {
				iVar13 = 100;
			}
			cVar1 = (puVar8 + iVar16)[0x1b4];
			uVar3 = ((int)*pcVar5 - (int)cVar1) * 2;
			lVar14 = ((ulonglong) * (uint *)(puVar8 + iVar16 + 0x188) + (ulonglong) * (uint *)(puVar4 + 0x170)) - (ulonglong)uVar3;
			iVar9 = (int)lVar14;
			if (lVar14 < 0) {
				iVar9 = 0;
			}
			if (100 < iVar9) {
				iVar9 = 100;
			}
			if ((int)lVar11 < iVar26) {
				if (iVar13 < iVar9) {
					uVar15 = (ulonglong) * (uint *)(puVar8 + iVar7 + 0x38);
					uVar3 = *(uint *)(puVar8 + iVar7 + 0x3c);
					uVar18 = (ulonglong)uVar3;
					uVar12 = GetDirection((ulonglong) * (uint *)(puVar8 + iVar16 + 0x38),
					    *(int *)(puVar8 + iVar16 + 0x3c), uVar15, uVar3);
					StartPlrBlock((longlong)cVar24, uVar12, uVar15, uVar18, uVar20, lVar22, param_7, param_8,
					    in_stack_ffffff98);
				} else {
					puVar4 = puVar8 + iVar7;
					uVar2 = *(uint *)(puVar4 + 0x5544);
					lVar11 = random(5, ((ulonglong) * (uint *)(puVar4 + 0x5548) - (ulonglong)uVar2) + 1,
					    (char)uVar3, cVar1, (char)uVar20, (char)lVar22, (char)param_7,
					    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar27);
					iVar26 = uVar2 + (int)lVar11;
					iVar16 = iVar26 * *(int *)(puVar4 + 0x5550);
					uVar12 = 0;
					uVar3 = iVar16 / 100 + (iVar16 >> 0x1f);
					uVar15 = (ulonglong)(uVar3 >> 0x1f);
					uVar17 = (undefined)((ulonglong)uVar3 + uVar15);
					iVar16 = *(int *)(puVar4 + 0x555c) + *(int *)(puVar4 + 0x184) + iVar26 + (int)((ulonglong)uVar3 + uVar15);
					if (puVar6[0x15c] == '\0') {
						cVar1 = *pcVar5;
						uVar12 = 0;
						lVar11 = random(6, 100, uVar17, (byte)(uVar3 >> 0x1f), (char)uVar20, (char)lVar22,
						    (char)param_7, (char)param_8, in_stack_ffffff98, in_stack_ffffff9f,
						    uVar27);
						if ((int)lVar11 < (int)cVar1) {
							iVar16 = iVar16 * 2;
						}
					}
					puVar4 = puVar8 + iVar7;
					uVar3 = iVar16 << 6;
					if ((*(uint *)(puVar4 + 0x5568) & 2) != 0) {
						lVar11 = random(7, uVar12 & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar3 >> 3), uVar17, (char)uVar15, (char)uVar20, (char)lVar22, (char)param_7,
						    (char)param_8, in_stack_ffffff98, in_stack_ffffff9f, uVar27);
						*(int *)(puVar4 + 0x194) = *(int *)(puVar4 + 0x194) + (int)lVar11;
						if (*(int *)(puVar4 + 0x198) < *(int *)(puVar4 + 0x194)) {
							*(int *)(puVar4 + 0x194) = *(int *)(puVar4 + 0x198);
						}
						puVar4 = puVar8 + iVar7;
						*(int *)(puVar4 + 0x18c) = *(int *)(puVar4 + 0x18c) + (int)lVar11;
						if (*(int *)(puVar8 + iVar7 + 400) < *(int *)(puVar4 + 0x18c)) {
							*(int *)(puVar4 + 0x18c) = *(int *)(puVar8 + iVar7 + 400);
						}
						*(undefined4 *)ppuVar10[-0x1dbc] = 1;
					}
					if ((int)param_1 == *(int *)ppuVar10[-0x1deb]) {
						NetSendCmdDamage(1, param_2, (ulonglong)uVar3, uVar15, uVar20, (int)lVar22, (int)param_7,
						    (int)param_8, in_stack_ffffff98);
					}
					StartPlrHit((longlong)cVar24, (char)uVar3, 0, uVar15, uVar20, lVar22, param_7, param_8,
					    in_stack_ffffff98);
				}
				uVar25 = 1;
			}
		} else {
			uVar25 = 0;
		}
	} else {
		uVar25 = 0;
	}
	return uVar25;
}

ulonglong PlrHitObj(undefined8 param_1, int param_2, int param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	int iVar2;

	cVar1 = *(char *)(*(int *)PTR_DAT_100f194c + param_2 * 0x70 + param_3);
	if (cVar1 < '\x01') {
		iVar2 = -((int)cVar1 + 1);
	} else {
		iVar2 = (int)cVar1 + -1;
	}
	cVar1 = PTR_DAT_100f1948[iVar2 * 0x78 + 0x34];
	if (cVar1 == '\x01') {
		BreakObject();
	}
	return (ulonglong)(cVar1 == '\x01');
}

ulonglong PM_DoAttack(ulonglong param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, ulonglong param_8,
    undefined4 param_9)

{
	bool bVar1;
	byte bVar2;
	short sVar3;
	uint uVar4;
	int iVar5;
	uint *puVar6;
	int *piVar7;
	undefined *puVar8;
	int iVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined **ppuVar12;
	ulonglong uVar13;
	undefined8 uVar14;
	ulonglong uVar15;
	int iVar17;
	longlong lVar16;
	ulonglong uVar18;
	undefined4 uVar19;
	undefined4 uVar20;
	undefined4 uVar21;
	int iVar22;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar11 = PTR_DAT_100f1954;
	puVar10 = PTR_DAT_100f1828;
	ppuVar12 = &toc;
	iVar22 = 0;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar12 = &toc;
		app_fatal((int)PTR_s_PM_DoAttack__illegal_player__d_100f35ec, param_1, param_3, param_4, param_5,
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffff98, in_stack_ffffff9f,
		    in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
	}
	iVar9 = (int)param_1 * 0x55ec;
	puVar6 = (uint *)(puVar10 + iVar9 + 0x5568);
	piVar7 = (int *)(puVar10 + iVar9 + 0x8c);
	iVar5 = *piVar7;
	if (((*puVar6 & 0x20000) != 0) && (iVar5 == 1)) {
		*piVar7 = 2;
	}
	if (((*puVar6 & 0x40000) != 0) && ((iVar5 == 1 || (iVar5 == 3)))) {
		*piVar7 = *piVar7 + 1;
	}
	if (((*puVar6 & 0x80000) != 0) && (((iVar5 == 1 || (iVar5 == 3)) || (iVar5 == 5)))) {
		*piVar7 = *piVar7 + 1;
	}
	if (((*puVar6 & 0x100000) != 0) && ((iVar5 == 1 || (iVar5 == 4)))) {
		*piVar7 = *piVar7 + 2;
	}
	if (*piVar7 == *(int *)(puVar10 + iVar9 + 0x2f0) + -1) {
		param_3 = (ulonglong) * (uint *)(puVar10 + iVar9 + 0x3c);
		PlaySfxLoc(9, (ulonglong) * (uint *)(puVar10 + iVar9 + 0x38), param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8, in_stack_ffffff98);
	}
	if (*piVar7 == *(int *)(puVar10 + iVar9 + 0x2f0)) {
		puVar8 = puVar10 + iVar9;
		uVar18 = (ulonglong) * (uint *)(puVar8 + 0x38) + (ulonglong) * (uint *)(ppuVar12[-0x1c7b] + *(int *)(puVar8 + 0x70) * 4);
		uVar4 = *(uint *)puVar11;
		param_4 = (ulonglong)uVar4;
		iVar5 = (int)uVar18;
		uVar15 = (ulonglong) * (uint *)(puVar8 + 0x3c) + (ulonglong) * (uint *)(ppuVar12[-0x1c7c] + *(int *)(puVar8 + 0x70) * 4);
		iVar17 = (int)uVar15;
		sVar3 = *(short *)(uVar4 + iVar5 * 0xe0 + iVar17 * 2);
		param_3 = uVar18;
		if (sVar3 != 0) {
			if (sVar3 < 1) {
				uVar13 = -((longlong)sVar3 + 1);
			} else {
				uVar13 = (longlong)sVar3 - 1;
			}
			param_3 = uVar18;
			uVar14 = CanTalkToMonst(uVar13, uVar15, uVar18, param_4, param_5, (int)param_6, (int)param_7,
			    (int)param_8, in_stack_ffffff98);
			if ((int)uVar14 != 0) {
				*(undefined4 *)(puVar10 + iVar9 + 0x1d0) = 0;
				return 0;
			}
		}
		if ((*puVar6 & 0x10) != 0) {
			param_3 = 1;
			param_4 = 0;
			param_5 = 0;
			param_6 = 0x40;
			param_7 = 0;
			param_8 = param_1;
			AddMissile(uVar18, uVar15, 1, 0, 0, 0x40, 0, param_1, in_stack_ffffff98, in_stack_ffffff9f, 0, 0);
		}
		if ((*puVar6 & 0x20) != 0) {
			param_3 = 2;
			param_4 = 0;
			param_5 = 0;
			param_6 = 0x40;
			param_7 = 0;
			param_8 = param_1;
			AddMissile(uVar18, uVar15, 2, 0, 0, 0x40, 0, param_1, in_stack_ffffff98, in_stack_ffffff9f, 0, 0);
		}
		sVar3 = *(short *)(*(int *)puVar11 + iVar5 * 0xe0 + iVar17 * 2);
		if (sVar3 == 0) {
			param_3 = uVar18 * 0x70;
			bVar2 = *(byte *)(*(int *)ppuVar12[-0x1da0] + (int)param_3 + iVar17);
			if ((bVar2 == 0) || (ppuVar12[-0x911] != (undefined *)0x0)) {
				if ('\0' < *(char *)(*(int *)ppuVar12[-0x1da1] + (int)param_3 + iVar17)) {
					uVar18 = PlrHitObj(param_1, iVar5, iVar17, (char)param_4, (char)param_5, (char)param_6,
					    (char)param_7, (char)param_8, in_stack_ffffff98);
					iVar22 = (int)uVar18;
					param_3 = uVar15;
				}
			} else {
				if ((char)bVar2 < '\x01') {
					lVar16 = (longlong)(char)-(bVar2 + 1);
				} else {
					lVar16 = (ulonglong)bVar2 - 1;
				}
				uVar14 = PlrHitPlr(param_1, lVar16, param_3, param_4, param_5, (int)param_6, param_7, param_8,
				    in_stack_ffffff98);
				iVar22 = (int)uVar14;
			}
		} else {
			if (sVar3 < 1) {
				uVar15 = -((longlong)sVar3 + 1);
			} else {
				uVar15 = (longlong)sVar3 - 1;
			}
			uVar15 = PlrHitMonst(param_1, uVar15, param_3, param_4, param_5, (int)param_6, (int)param_7,
			    (int)param_8, in_stack_ffffff98);
			iVar22 = (int)uVar15;
		}
		if (iVar22 != 0) {
			uVar14 = WeaponDur(param_1, 0x1e, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffff98);
			uVar21 = (undefined4)param_8;
			uVar20 = (undefined4)param_7;
			uVar19 = (undefined4)param_6;
			if ((int)uVar14 != 0) {
				uVar15 = (ulonglong) * (uint *)(puVar8 + 0x70);
				StartStand(param_1, uVar15, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
				ClearPlrPVars(param_1, uVar15, param_3, param_4, param_5, uVar19, uVar20, uVar21, in_stack_ffffff98);
				return 1;
			}
		}
	}
	uVar21 = (undefined4)param_8;
	uVar20 = (undefined4)param_7;
	uVar19 = (undefined4)param_6;
	bVar1 = *piVar7 == *(int *)(puVar10 + iVar9 + 0x2e8);
	if (bVar1) {
		uVar15 = (ulonglong) * (uint *)(puVar10 + iVar9 + 0x70);
		StartStand(param_1, uVar15, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
		ClearPlrPVars(param_1, uVar15, param_3, param_4, param_5, uVar19, uVar20, uVar21, in_stack_ffffff98);
	}
	return (ulonglong)bVar1;
}

ulonglong PM_DoRangeAttack(ulonglong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, ulonglong param_8,
    undefined4 param_9)

{
	bool bVar1;
	int iVar2;
	uint *puVar3;
	int *piVar4;
	undefined *puVar5;
	int iVar6;
	undefined *puVar7;
	undefined8 uVar8;
	ulonglong uVar9;
	undefined4 uVar10;
	undefined4 uVar11;
	undefined4 uVar12;
	ulonglong uVar13;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar7 = PTR_DAT_100f1828;
	uVar13 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal((int)PTR_s_PM_DoRangeAttack__illegal_player_100f35e8, param_1, param_3, param_4,
		    param_5, (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffa8, in_stack_ffffffaf,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	uVar13 = uVar13 + param_1 * 0x55ec + 0x5568;
	puVar3 = (uint *)uVar13;
	iVar6 = (int)(param_1 * 0x55ec);
	piVar4 = (int *)(puVar7 + iVar6 + 0x8c);
	iVar2 = *piVar4;
	if (((*puVar3 & 0x20000) != 0) && (iVar2 == 1)) {
		*piVar4 = 2;
	}
	if (((*puVar3 & 0x40000) != 0) && ((iVar2 == 1 || (iVar2 == 3)))) {
		*piVar4 = *piVar4 + 1;
	}
	if (*piVar4 == *(int *)(puVar7 + iVar6 + 0x2f0)) {
		param_6 = 0;
		if ((*puVar3 & 8) != 0) {
			param_6 = 0x1b;
		}
		if ((*puVar3 & 0x2000000) != 0) {
			param_6 = 0x38;
		}
		puVar5 = puVar7 + iVar6;
		param_7 = 0;
		param_4 = (ulonglong) * (uint *)(puVar5 + 0x1d4);
		param_5 = (ulonglong) * (uint *)(puVar5 + 0x70);
		param_8 = param_1;
		AddMissile((ulonglong) * (uint *)(puVar7 + iVar6 + 0x38),
		    (ulonglong) * (uint *)(puVar7 + iVar6 + 0x3c), (ulonglong) * (uint *)(puVar5 + 0x1d0),
		    param_4, param_5, (int)param_6, 0, param_1, in_stack_ffffffa8, in_stack_ffffffaf, 4, 0);
		uVar13 = (ulonglong) * (uint *)(puVar7 + iVar6 + 0x3c);
		PlaySfxLoc(4, (ulonglong) * (uint *)(puVar7 + iVar6 + 0x38), uVar13, param_4, param_5, (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffffa8);
		uVar8 = WeaponDur(param_1, 0x28, uVar13, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar12 = (undefined4)param_8;
		uVar11 = (undefined4)param_7;
		uVar10 = (undefined4)param_6;
		if ((int)uVar8 != 0) {
			uVar9 = (ulonglong) * (uint *)(puVar5 + 0x70);
			StartStand(param_1, uVar9, uVar13, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
			ClearPlrPVars(param_1, uVar9, uVar13, param_4, param_5, uVar10, uVar11, uVar12, in_stack_ffffffa8);
			return 1;
		}
	}
	uVar12 = (undefined4)param_8;
	uVar11 = (undefined4)param_7;
	uVar10 = (undefined4)param_6;
	bVar1 = *(int *)(puVar7 + iVar6 + 0x2e8) <= *piVar4;
	if (bVar1) {
		uVar9 = (ulonglong) * (uint *)(puVar7 + iVar6 + 0x70);
		StartStand(param_1, uVar9, uVar13, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
		ClearPlrPVars(param_1, uVar9, uVar13, param_4, param_5, uVar10, uVar11, uVar12, in_stack_ffffffa8);
	}
	return (ulonglong)bVar1;
}

void ShieldDur(ulonglong param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	int *piVar1;
	int iVar2;
	undefined *puVar3;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f1828;
	if ((int)param_1 == *(int *)PTR_DAT_100f1824) {
		if (3 < (param_1 & 0xffffffff)) {
			app_fatal((int)PTR_s_ShieldDur__illegal_player__d_100f35e4, param_1, param_3, param_4, param_5,
			    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf,
			    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
			    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		}
		iVar2 = (int)param_1 * 0x55ec;
		if (*(int *)(puVar3 + iVar2 + 0xa60) == 5) {
			piVar1 = (int *)(puVar3 + iVar2 + 0xb44);
			if (*piVar1 == 0xff) {
				return;
			}
			*piVar1 = *piVar1 + -1;
			if (*piVar1 == 0) {
				NetSendCmdDelItem(1, 4, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffffb8);
				*(int *)(puVar3 + iVar2 + 0xa60) = -1;
				CalcPlrInv(param_1, 1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			}
		}
		if (*(int *)(puVar3 + iVar2 + 0xbd0) == 5) {
			piVar1 = (int *)(puVar3 + iVar2 + 0xcb4);
			if ((*piVar1 != 0xff) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
				NetSendCmdDelItem(1, 5, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffffb8);
				*(int *)(puVar3 + iVar2 + 0xbd0) = -1;
				CalcPlrInv(param_1, 1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			}
		}
	}
	return;
}

undefined8
PM_DoBlock(ulonglong param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	longlong lVar3;
	undefined8 uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	ulonglong uVar9;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined uVar10;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar2 = PTR_DAT_100f1828;
	uVar10 = (undefined)in_stack_ffffffd8;
	uVar7 = (undefined7)(param_5 >> 8);
	uVar8 = (undefined)param_5;
	uVar5 = (undefined7)(param_4 >> 8);
	uVar6 = (undefined)param_4;
	uVar9 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal((int)PTR_s_PM_DoBlock__illegal_player__d_100f35e0, param_1, param_3, param_4, param_5,
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffc8, in_stack_ffffffcf,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
		    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	lVar3 = uVar9 + param_1 * 0x55ec;
	iVar1 = (int)lVar3;
	if (((*(uint *)(iVar1 + 0x5568) & 0x1000000) != 0) && (param_3 = lVar3 + 0x8c, *(int *)(iVar1 + 0x8c) != 1)) {
		*(undefined4 *)param_3 = *(undefined4 *)(iVar1 + 0x490);
	}
	puVar2 = puVar2 + (int)(param_1 * 0x55ec);
	if (*(int *)(puVar2 + 0x8c) < *(int *)(puVar2 + 0x490)) {
		uVar4 = 0;
	} else {
		uVar9 = (ulonglong) * (uint *)(puVar2 + 0x70);
		StartStand(param_1, uVar9, param_3, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), param_6, param_7,
		    param_8, in_stack_ffffffc8);
		ClearPlrPVars(param_1, uVar9, param_3, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffffc8);
		uVar4 = 10;
		lVar3 = random(3, 10, (char)param_3, uVar6, uVar8, (char)param_6, (char)param_7, (char)param_8,
		    in_stack_ffffffc8, in_stack_ffffffcf, uVar10);
		if ((int)lVar3 == 0) {
			ShieldDur(param_1, uVar4, param_3, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), param_6, param_7, param_8, in_stack_ffffffc8);
		}
		uVar4 = 1;
	}
	return uVar4;
}

undefined8
PM_DoSpell(ulonglong param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, undefined8 param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	uint *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	undefined8 uVar7;
	ulonglong uVar8;
	undefined4 uVar9;
	undefined4 uVar10;
	undefined4 uVar11;
	char *pcVar12;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar5 = PTR_DAT_100f1914;
	puVar3 = PTR_DAT_100f1828;
	ppuVar6 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar6 = &toc;
		app_fatal((int)PTR_s_PM_DoSpell__illegal_player__d_100f35dc, param_1, param_3, param_4, param_5,
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffa8, in_stack_ffffffaf,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar4 = (int)param_1 * 0x55ec;
	puVar1 = puVar3 + iVar4;
	puVar2 = (uint *)(puVar3 + iVar4 + 0x1ec);
	if (*puVar2 == *(uint *)(puVar1 + 0x3bc)) {
		param_3 = (ulonglong) * (uint *)(puVar1 + 0x38);
		param_7 = 0;
		param_4 = (ulonglong) * (uint *)(puVar1 + 0x3c);
		param_5 = (ulonglong) * (uint *)(puVar1 + 0x1d0);
		param_6 = (ulonglong) * (uint *)(puVar1 + 0x1d4);
		param_8 = (ulonglong) * (uint *)(puVar1 + 0x1dc);
		CastSpell(param_1, *(int *)(puVar1 + 0xa4), param_3, param_4, param_5, param_6, 0,
		    *(uint *)(puVar1 + 0x1dc), in_stack_ffffffa8);
		if (puVar1[0xa9] == '\0') {
			pcVar12 = puVar1 + 0xb8;
			if (puVar1[0xb8] == '\x02') {
				uVar8 = 1;
				param_3 = SetCursorPos(0, 1, (ulonglong) * (uint *)(puVar1 + 0xb4) - 1);
				param_4 = (ulonglong) * (uint *)(puVar1 + 0x118);
				param_3 = (ulonglong) * (uint *)(puVar1 + 0x114) & param_3;
				if ((param_4 & uVar8 | param_3) == 0) {
					*(undefined4 *)(puVar1 + 0xb4) = 0xffffffff;
					*pcVar12 = '\x04';
					*(undefined4 *)puVar5 = 0xff;
				}
			}
			if (*pcVar12 == '\x03') {
				uVar8 = 1;
				param_3 = SetCursorPos(0, 1, (ulonglong) * (uint *)(puVar3 + iVar4 + 0xb4) - 1);
				param_4 = (ulonglong) * (uint *)(puVar3 + iVar4 + 0x5564);
				param_3 = (ulonglong) * (uint *)(puVar3 + iVar4 + 0x5560) & param_3;
				if ((param_4 & uVar8 | param_3) == 0) {
					*(uint *)(puVar3 + iVar4 + 0xb4) = 0xffffffff;
					*pcVar12 = '\x04';
					*(undefined4 *)puVar5 = 0xff;
				}
			}
		}
	}
	uVar11 = (undefined4)param_8;
	uVar10 = (undefined4)param_7;
	uVar9 = (undefined4)param_6;
	pcVar12 = ppuVar6[-0x1de5];
	*puVar2 = *puVar2 + 1;
	if (*pcVar12 == '\0') {
		uVar8 = (ulonglong)*puVar2;
		if (*(int *)(puVar3 + iVar4 + 0x3b4) < (int)*puVar2) {
			StartWalkStand(param_1, uVar8, param_3, param_4, param_5, uVar9, uVar10, uVar11, in_stack_ffffffa8);
			ClearPlrPVars(param_1, uVar8, param_3, param_4, param_5, uVar9, uVar10, uVar11, in_stack_ffffffa8);
			uVar7 = 1;
		} else {
			uVar7 = 0;
		}
	} else {
		puVar3 = puVar3 + iVar4;
		if (*(int *)(puVar3 + 0x8c) == *(int *)(puVar3 + 0x3b4)) {
			uVar8 = (ulonglong) * (uint *)(puVar3 + 0x70);
			StartStand(param_1, uVar8, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
			ClearPlrPVars(param_1, uVar8, param_3, param_4, param_5, uVar9, uVar10, uVar11, in_stack_ffffffa8);
			uVar7 = 1;
		} else {
			uVar7 = 0;
		}
	}
	return uVar7;
}

void ArmorDur(ulonglong param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	longlong lVar2;
	int iVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined *puVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined uVar11;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	uVar11 = (undefined)in_stack_ffffffc8;
	uVar8 = (undefined7)(param_5 >> 8);
	uVar9 = (undefined)param_5;
	uVar6 = (undefined7)(param_4 >> 8);
	uVar7 = (undefined)param_4;
	uVar4 = (undefined7)(param_3 >> 8);
	uVar5 = (undefined)param_3;
	ppuVar1 = &toc;
	if ((int)param_1 == *(int *)PTR_DAT_100f1824) {
		if (3 < (param_1 & 0xffffffff)) {
			ppuVar1 = &toc;
			app_fatal((int)PTR_s_ArmorDur__illegal_player__d_100f35d8, param_1, param_3, param_4, param_5,
			    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf,
			    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
			    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		}
		puVar10 = ppuVar1[-0x1dea] + (int)param_1 * 0x55ec;
		if ((*(int *)(puVar10 + 0xd40) != -1) || (*(int *)(puVar10 + 0x4a0) != -1)) {
			lVar2 = random(8, 3, uVar5, uVar7, uVar9, (char)param_6, (char)param_7, (char)param_8,
			    in_stack_ffffffb8, in_stack_ffffffbf, uVar11);
			iVar3 = (int)lVar2;
			if ((*(int *)(puVar10 + 0xd40) != -1) && (*(int *)(puVar10 + 0x4a0) == -1)) {
				iVar3 = 1;
			}
			if ((*(int *)(puVar10 + 0xd40) == -1) && (*(int *)(puVar10 + 0x4a0) != -1)) {
				iVar3 = 0;
			}
			if (iVar3 == 0) {
				puVar10 = puVar10 + 0x498;
			} else {
				puVar10 = puVar10 + 0xd38;
			}
			if ((*(int *)(puVar10 + 0xec) != 0xff) && (*(int *)(puVar10 + 0xec) = *(int *)(puVar10 + 0xec) + -1, *(int *)(puVar10 + 0xec) == 0)) {
				if (iVar3 == 0) {
					NetSendCmdDelItem(1, 0, CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
					    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffb8);
				} else {
					NetSendCmdDelItem(1, 6, CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
					    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffb8);
				}
				*(undefined4 *)(puVar10 + 8) = 0xffffffff;
				CalcPlrInv(param_1, 1, CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
				    param_6, param_7, param_8, in_stack_ffffffb8);
			}
		}
	}
	return;
}

undefined8
PM_DoGotHit(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint *puVar2;
	uint *puVar3;
	undefined *puVar4;
	longlong lVar5;
	ulonglong uVar6;
	undefined8 uVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined uVar11;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar4 = PTR_DAT_100f1828;
	uVar11 = (undefined)in_stack_ffffffd8;
	uVar10 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal((int)PTR_s_PM_DoGotHit__illegal_player__d_100f35d4, param_1, param_3, param_4, param_5,
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffc8, in_stack_ffffffcf,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
		    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	lVar5 = param_1 * 0x55ec;
	uVar8 = uVar10 + lVar5 + 0x5568;
	puVar2 = (uint *)uVar8;
	uVar10 = uVar10 + lVar5 + 0x8c;
	puVar3 = (uint *)uVar10;
	uVar1 = *puVar3;
	uVar9 = (ulonglong)uVar1;
	if (((*puVar2 & 0x200000) != 0) && (uVar1 == 3)) {
		*puVar3 = 4;
	}
	if (((*puVar2 & 0x400000) != 0) && ((uVar1 == 3 || (uVar1 == 5)))) {
		*puVar3 = *puVar3 + 1;
	}
	if (((*puVar2 & 0x800000) != 0) && (((uVar1 == 1 || (uVar1 == 3)) || (uVar1 == 5)))) {
		*puVar3 = *puVar3 + 1;
	}
	if ((int)*puVar3 < *(int *)(puVar4 + (int)lVar5 + 0x400)) {
		uVar7 = 0;
	} else {
		uVar6 = (ulonglong) * (uint *)(puVar4 + (int)lVar5 + 0x70);
		StartStand(param_1, uVar6, uVar10, uVar8, uVar9, param_6, param_7, param_8, in_stack_ffffffc8);
		ClearPlrPVars(param_1, uVar6, uVar10, uVar8, uVar9, (int)param_6, (int)param_7, (int)param_8,
		    in_stack_ffffffc8);
		uVar7 = 4;
		lVar5 = random(3, 4, (char)uVar10, (char)uVar8, (char)uVar9, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8, in_stack_ffffffcf, uVar11);
		if ((int)lVar5 != 0) {
			ArmorDur(param_1, uVar7, uVar10, uVar8, uVar9, param_6, param_7, param_8, in_stack_ffffffc8);
		}
		uVar7 = 1;
	}
	return uVar7;
}

undefined8
PM_DoDeath(ulonglong param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	char *pcVar2;
	int *piVar3;
	undefined *puVar4;
	int *piVar5;
	undefined **ppuVar6;
	int iVar7;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	piVar5 = _DAT_100f2044;
	puVar4 = PTR_DAT_100f1828;
	ppuVar6 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar6 = &toc;
		app_fatal((int)PTR_s_PM_DoDeath__illegal_player__d_100f35d0, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar7 = (int)param_1 * 0x55ec;
	piVar3 = (int *)(puVar4 + iVar7 + 0x1ec);
	if (*(int *)(puVar4 + iVar7 + 0x448) << 1 <= *piVar3) {
		if (((1 < *piVar5) && ((int)param_1 == *(int *)ppuVar6[-0x1deb])) && (*piVar5 = *piVar5 + -1, *piVar5 == 1)) {
			puVar1 = (undefined4 *)ppuVar6[-0x1d73];
			pcVar2 = ppuVar6[-0x1dfc];
			*puVar1 = 1;
			if (*pcVar2 == '\x01') {
				gamemenu_previous(0, ZEXT48(puVar1), param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffa8);
			}
		}
		puVar4 = puVar4 + iVar7;
		piVar5 = (int *)ppuVar6[-0x1de7];
		*(undefined4 *)(puVar4 + 0x80) = 10000;
		*(undefined4 *)(puVar4 + 0x8c) = *(undefined4 *)(puVar4 + 0x88);
		iVar7 = *(int *)(puVar4 + 0x38) * 0x70 + *(int *)(puVar4 + 0x3c);
		*(byte *)(*piVar5 + iVar7) = *(byte *)(*piVar5 + iVar7) | 4;
	}
	if (*piVar3 < 100) {
		*piVar3 = *piVar3 + 1;
	}
	return 0;
}

undefined8
PM_DoNewLvl(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11)

{
	return 0;
}

void CheckNewPath(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	uint *puVar1;
	uint *puVar2;
	char cVar3;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	int iVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined **ppuVar14;
	longlong lVar15;
	int iVar18;
	ulonglong uVar16;
	longlong lVar17;
	int iVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	undefined uVar23;
	undefined7 uVar24;
	undefined uVar25;
	int iVar26;
	uint *puVar27;
	int *piVar28;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined4 in_stack_ffffff88;
	undefined4 in_stack_ffffff8c;
	undefined4 in_stack_ffffff90;
	undefined4 in_stack_ffffff94;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;

	puVar13 = PTR_DAT_100f203c;
	puVar9 = PTR_DAT_100f194c;
	puVar8 = PTR_DAT_100f1948;
	puVar12 = PTR_DAT_100f187c;
	puVar11 = PTR_DAT_100f1828;
	puVar7 = PTR_DAT_100f1824;
	uVar24 = (undefined7)(param_5 >> 8);
	uVar25 = (undefined)param_5;
	ppuVar14 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar14 = &toc;
		app_fatal((int)PTR_s_CheckNewPath__illegal_player__d_100f35cc, param_1, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8, in_stack_ffffff78, in_stack_ffffff7f,
		    in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94,
		    in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4);
	}
	iVar10 = (int)param_1 * 0x55ec;
	puVar27 = (uint *)(puVar11 + iVar10 + 0x20);
	if (*(int *)(puVar11 + iVar10 + 0x20) == 0x14) {
		param_4 = 0;
		MakePlrPath(param_1, (ulonglong) * (uint *)(puVar12 + *(int *)(puVar11 + iVar10 + 0x24) * 0xe8 + 0x28),
		    (ulonglong) * (uint *)(puVar12 + *(int *)(puVar11 + iVar10 + 0x24) * 0xe8 + 0x2c), 0,
		    CONCAT71(uVar24, uVar25), (int)param_6, (int)param_7, (int)param_8, in_stack_ffffff78);
	}
	if (*puVar27 == 0x15) {
		param_4 = 0;
		MakePlrPath(param_1, (ulonglong) * (uint *)(puVar11 + *(int *)(puVar11 + iVar10 + 0x24) * 0x55ec + 0x40),
		    (ulonglong) * (uint *)(puVar11 + *(int *)(puVar11 + iVar10 + 0x24) * 0x55ec + 0x44), 0, CONCAT71(uVar24, uVar25), (int)param_6, (int)param_7, (int)param_8, in_stack_ffffff78);
	}
	uVar23 = (undefined)param_4;
	if (puVar11[iVar10 + 4] == -1) {
		uVar4 = *puVar27;
		if (uVar4 != 0xffffffff) {
			piVar28 = (int *)(puVar11 + iVar10);
			if (*piVar28 == 0) {
				uVar16 = (ulonglong)uVar4 - 9;
				if ((uVar16 & 0xffffffff) < 0x12) {
					// WARNING: Could not recover jumptable at 0x10098364. Too many branches
					// WARNING: Treating indirect jump as call
					(**(code **)(ppuVar14[-0x1683] + (int)uVar16 * 4))();
					return;
				}
				FixPlayerLocation(param_1, *(undefined4 *)(puVar11 + iVar10 + 0x70), (ulonglong)uVar4, param_4,
				    CONCAT71(uVar24, uVar25), (int)param_6, (int)param_7, (int)param_8,
				    in_stack_ffffff78);
				*puVar27 = 0xffffffff;
			} else {
				if ((*piVar28 == 4) && (*(int *)(puVar11 + *(int *)puVar7 * 0x55ec + 0x2f0) < piVar28[0x23])) {
					if (uVar4 == 9) {
						uVar20 = (ulonglong)(uint)piVar28[9];
						uVar21 = (ulonglong)(uint)piVar28[10];
						uVar16 = GetDirection((ulonglong)(uint)piVar28[0x10], piVar28[0x11], uVar20, piVar28[10]);
						StartAttack(param_1, uVar16, uVar20, uVar21, CONCAT71(uVar24, uVar25), param_6, param_7,
						    param_8, in_stack_ffffff78);
						*puVar27 = 0xffffffff;
					} else {
						if (uVar4 == 0x14) {
							iVar18 = piVar28[9];
							lVar15 = abs((ulonglong)(uint)piVar28[0xe] - (ulonglong) * (uint *)(puVar12 + iVar18 * 0xe8 + 0x28));
							lVar17 = abs((ulonglong)(uint)piVar28[0xf] - (ulonglong) * (uint *)(puVar12 + iVar18 * 0xe8 + 0x2c));
							if (((int)lVar15 < 2) && ((int)lVar17 < 2)) {
								uVar20 = (ulonglong) * (uint *)(puVar12 + iVar18 * 0xe8 + 0x28);
								uVar4 = *(uint *)(puVar12 + iVar18 * 0xe8 + 0x2c);
								uVar21 = (ulonglong)uVar4;
								uVar16 = GetDirection((ulonglong)(uint)piVar28[0x10], piVar28[0x11], uVar20, uVar4);
								StartAttack(param_1, uVar16, uVar20, uVar21, CONCAT71(uVar24, uVar25), param_6, param_7,
								    param_8, in_stack_ffffff78);
							}
							*puVar27 = 0xffffffff;
						} else {
							if (uVar4 == 0x15) {
								iVar18 = piVar28[9];
								puVar8 = puVar11 + 0x40;
								lVar15 = abs((ulonglong)(uint)piVar28[0xe] - (ulonglong) * (uint *)(puVar8 + iVar18 * 0x55ec));
								puVar9 = puVar11 + 0x44;
								lVar17 = abs((ulonglong)(uint)piVar28[0xf] - (ulonglong) * (uint *)(puVar9 + iVar18 * 0x55ec));
								if (((int)lVar15 < 2) && ((int)lVar17 < 2)) {
									uVar20 = (ulonglong) * (uint *)(puVar8 + iVar18 * 0x55ec);
									uVar4 = *(uint *)(puVar9 + iVar18 * 0x55ec);
									uVar21 = (ulonglong)uVar4;
									uVar16 = GetDirection((ulonglong) * (uint *)(puVar8 + iVar10),
									    *(int *)(puVar9 + iVar10), uVar20, uVar4);
									StartAttack(param_1, uVar16, uVar20, uVar21, CONCAT71(uVar24, uVar25), param_6, param_7,
									    param_8, in_stack_ffffff78);
								}
								*puVar27 = 0xffffffff;
							} else {
								if (uVar4 == 0xd) {
									iVar18 = piVar28[9];
									iVar26 = iVar18 * 0x78;
									puVar1 = (uint *)(puVar8 + iVar26 + 4);
									lVar15 = abs((ulonglong)(uint)piVar28[0xe] - (ulonglong)*puVar1);
									puVar2 = (uint *)(puVar8 + iVar26 + 8);
									lVar17 = abs((ulonglong)(uint)piVar28[0xf] - (ulonglong)*puVar2);
									iVar19 = (int)lVar17;
									if (1 < iVar19) {
										uVar4 = *puVar2;
										uVar23 = (undefined)uVar4;
										if (-1 - iVar18 == (int)*(char *)(*(int *)puVar9 + *puVar1 * 0x70 + uVar4 + -1)) {
											lVar17 = abs(((ulonglong)(uint)piVar28[0xf] - (ulonglong)uVar4) + 1);
											iVar19 = (int)lVar17;
										}
									}
									if (((int)lVar15 < 2) && (iVar19 < 2)) {
										if (puVar8[iVar26 + 0x34] == '\x01') {
											uVar20 = (ulonglong)*puVar1;
											uVar21 = (ulonglong)*puVar2;
											uVar16 = GetDirection((ulonglong)(uint)piVar28[0xe], piVar28[0xf], uVar20,
											    *puVar2);
											StartAttack(param_1, uVar16, uVar20, uVar21, CONCAT71(uVar24, uVar25), param_6,
											    param_7, param_8, in_stack_ffffff78);
										} else {
											OperateObject(param_1, iVar18, 0, uVar23, uVar25, (char)param_6, (char)param_7,
											    (char)param_8, in_stack_ffffff78);
										}
									}
								}
							}
						}
					}
				}
				if ((*piVar28 == 5) && (puVar8 = puVar11 + iVar10, *(int *)(puVar11 + *(int *)puVar7 * 0x55ec + 0x2f0) < *(int *)(puVar8 + 0x8c))) {
					uVar4 = *puVar27;
					if (uVar4 == 10) {
						uVar16 = GetDirection((ulonglong) * (uint *)(puVar8 + 0x38), *(int *)(puVar8 + 0x3c),
						    (ulonglong) * (uint *)(puVar8 + 0x24), *(uint *)(puVar8 + 0x28));
						StartRangeAttack(param_1, uVar16, (ulonglong) * (uint *)(puVar8 + 0x24),
						    (ulonglong) * (uint *)(puVar8 + 0x28), CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff78);
						*puVar27 = 0xffffffff;
					} else {
						if (uVar4 == 0x16) {
							iVar18 = *(int *)(puVar8 + 0x24);
							uVar16 = GetDirection((ulonglong) * (uint *)(puVar8 + 0x38), *(int *)(puVar8 + 0x3c),
							    (ulonglong) * (uint *)(puVar12 + iVar18 * 0xe8 + 0x28),
							    *(uint *)(puVar12 + iVar18 * 0xe8 + 0x2c));
							StartRangeAttack(param_1, uVar16, (ulonglong) * (uint *)(puVar12 + iVar18 * 0xe8 + 0x28),
							    (ulonglong) * (uint *)(puVar12 + iVar18 * 0xe8 + 0x2c),
							    CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff78);
							*puVar27 = 0xffffffff;
						} else {
							if (uVar4 == 0x17) {
								iVar18 = *(int *)(puVar8 + 0x24);
								uVar16 = GetDirection((ulonglong) * (uint *)(puVar8 + 0x38), *(int *)(puVar8 + 0x3c),
								    (ulonglong) * (uint *)(puVar11 + iVar18 * 0x55ec + 0x40),
								    *(uint *)(puVar11 + iVar18 * 0x55ec + 0x44));
								StartRangeAttack(param_1, uVar16, (ulonglong) * (uint *)(puVar11 + iVar18 * 0x55ec + 0x40),
								    (ulonglong) * (uint *)(puVar11 + iVar18 * 0x55ec + 0x44),
								    CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff78);
								*puVar27 = 0xffffffff;
							}
						}
					}
				}
				if ((*piVar28 == 9) && (puVar7 = puVar11 + iVar10, *(int *)(puVar7 + 0x3bc) < *(int *)(puVar7 + 0x8c))) {
					uVar4 = *puVar27;
					if (uVar4 == 0xc) {
						uVar16 = GetDirection((ulonglong) * (uint *)(puVar7 + 0x38), *(int *)(puVar7 + 0x3c),
						    (ulonglong) * (uint *)(puVar7 + 0x24), *(uint *)(puVar7 + 0x28));
						StartSpell(param_1, uVar16, (ulonglong) * (uint *)(puVar7 + 0x24),
						    (ulonglong) * (uint *)(puVar7 + 0x28), CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff78);
						*puVar27 = 0xffffffff;
					} else {
						if (uVar4 == 0x18) {
							iVar10 = *(int *)(puVar7 + 0x24);
							uVar16 = GetDirection((ulonglong) * (uint *)(puVar7 + 0x38), *(int *)(puVar7 + 0x3c),
							    (ulonglong) * (uint *)(puVar12 + iVar10 * 0xe8 + 0x28),
							    *(uint *)(puVar12 + iVar10 * 0xe8 + 0x2c));
							StartSpell(param_1, uVar16, (ulonglong) * (uint *)(puVar12 + iVar10 * 0xe8 + 0x28),
							    (ulonglong) * (uint *)(puVar12 + iVar10 * 0xe8 + 0x2c),
							    CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff78);
							*puVar27 = 0xffffffff;
						} else {
							if (uVar4 == 0x19) {
								iVar10 = *(int *)(puVar7 + 0x24);
								uVar16 = GetDirection((ulonglong) * (uint *)(puVar7 + 0x38), *(int *)(puVar7 + 0x3c),
								    (ulonglong) * (uint *)(puVar11 + iVar10 * 0x55ec + 0x40),
								    *(uint *)(puVar11 + iVar10 * 0x55ec + 0x44));
								StartSpell(param_1, uVar16, (ulonglong) * (uint *)(puVar11 + iVar10 * 0x55ec + 0x40),
								    (ulonglong) * (uint *)(puVar11 + iVar10 * 0x55ec + 0x44),
								    CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff78);
								*puVar27 = 0xffffffff;
							}
						}
					}
				}
			}
		}
	} else {
		piVar28 = (int *)(puVar11 + iVar10);
		if (*piVar28 == 0) {
			if (((int)param_1 == *(int *)puVar7) && ((uVar4 = *puVar27, uVar4 == 0x14 || (uVar4 == 0x15)))) {
				puVar7 = puVar11 + iVar10;
				uVar5 = *(uint *)(puVar7 + 0x24);
				if (uVar4 == 0x14) {
					lVar15 = abs((ulonglong) * (uint *)(puVar7 + 0x40) - (ulonglong) * (uint *)(puVar12 + uVar5 * 0xe8 + 0x28));
					iVar19 = (int)lVar15;
					lVar15 = abs((ulonglong) * (uint *)(puVar7 + 0x44) - (ulonglong) * (uint *)(puVar12 + uVar5 * 0xe8 + 0x2c));
					iVar18 = (int)lVar15;
					uVar20 = (ulonglong) * (uint *)(puVar7 + 0x44);
					uVar21 = (ulonglong) * (uint *)(puVar12 + uVar5 * 0xe8 + 0x28);
					uVar4 = *(uint *)(puVar12 + uVar5 * 0xe8 + 0x2c);
					uVar22 = (ulonglong)uVar4;
					uVar16 = GetDirection((ulonglong) * (uint *)(puVar7 + 0x40), *(uint *)(puVar7 + 0x44), uVar21,
					    uVar4);
				} else {
					puVar7 = puVar11 + 0x40;
					lVar15 = abs((ulonglong) * (uint *)(puVar7 + iVar10) - (ulonglong) * (uint *)(puVar7 + uVar5 * 0x55ec));
					puVar8 = puVar11 + 0x44;
					iVar19 = (int)lVar15;
					lVar15 = abs((ulonglong) * (uint *)(puVar8 + iVar10) - (ulonglong) * (uint *)(puVar8 + uVar5 * 0x55ec));
					uVar4 = *(uint *)(puVar8 + iVar10);
					uVar20 = (ulonglong)uVar4;
					iVar18 = (int)lVar15;
					uVar21 = (ulonglong) * (uint *)(puVar7 + uVar5 * 0x55ec);
					uVar6 = *(uint *)(puVar8 + uVar5 * 0x55ec);
					uVar22 = (ulonglong)uVar6;
					uVar16 = GetDirection((ulonglong) * (uint *)(puVar7 + iVar10), uVar4, uVar21, uVar6);
				}
				if ((iVar19 < 2) && (iVar18 < 2)) {
					ClrPlrPath(param_1, uVar20, uVar21, uVar22, CONCAT71(uVar24, uVar25), (int)param_6,
					    (int)param_7, (int)param_8, in_stack_ffffff78);
					if ((*(int *)(puVar12 + uVar5 * 0xe8 + 0xd4) == 0) || (*(int *)(puVar12 + uVar5 * 0xe8 + 0xd4) == 0x24)) {
						StartAttack(param_1, uVar16, uVar21, uVar22, CONCAT71(uVar24, uVar25), param_6, param_7,
						    param_8, in_stack_ffffff78);
					} else {
						TalktoMonster((ulonglong)uVar5, uVar20, uVar21, uVar22, CONCAT71(uVar24, uVar25), (int)param_6,
						    (int)param_7, (int)param_8, in_stack_ffffff78);
					}
					*puVar27 = 0xffffffff;
				}
			}
			if (*ppuVar14[-0x1df9] == '\0') {
				uVar21 = 0x800;
				uVar16 = 0x400;
				uVar20 = 0x200;
			} else {
				puVar7 = puVar13 + (int)(char)puVar11[iVar10 + 0x15c] * 0xc;
				uVar21 = (ulonglong) * (uint *)(puVar13 + (int)(char)puVar11[iVar10 + 0x15c] * 0xc);
				uVar16 = (ulonglong) * (uint *)(puVar7 + 4);
				uVar20 = (ulonglong) * (uint *)(puVar7 + 8);
			}
			cVar3 = puVar11[iVar10 + 4];
			if (((longlong)cVar3 & 0xffffffffU) < 9) {
				// WARNING: Could not recover jumptable at 0x100980d4. Too many branches
				// WARNING: Treating indirect jump as call
				(**(code **)(ppuVar14[-0x1682] + (int)cVar3 * 4))(*(code **)(ppuVar14[-0x1682] + (int)cVar3 * 4), uVar16);
				return;
			}
			*(undefined *)(piVar28 + 1) = *(undefined *)((int)piVar28 + 5);
			*(undefined *)((int)piVar28 + 5) = *(undefined *)((int)piVar28 + 6);
			*(undefined *)((int)piVar28 + 6) = *(undefined *)((int)piVar28 + 7);
			*(undefined *)((int)piVar28 + 7) = *(undefined *)(piVar28 + 2);
			*(undefined *)(piVar28 + 2) = *(undefined *)((int)piVar28 + 9);
			*(undefined *)((int)piVar28 + 9) = *(undefined *)((int)piVar28 + 10);
			*(undefined *)((int)piVar28 + 10) = *(undefined *)((int)piVar28 + 0xb);
			*(undefined *)((int)piVar28 + 0xb) = *(undefined *)(piVar28 + 3);
			*(undefined *)(piVar28 + 3) = *(undefined *)((int)piVar28 + 0xd);
			*(undefined *)((int)piVar28 + 0xd) = *(undefined *)((int)piVar28 + 0xe);
			*(undefined *)((int)piVar28 + 0xe) = *(undefined *)((int)piVar28 + 0xf);
			*(undefined *)((int)piVar28 + 0xf) = *(undefined *)(piVar28 + 4);
			*(undefined *)(piVar28 + 4) = *(undefined *)((int)piVar28 + 0x11);
			*(undefined *)((int)piVar28 + 0x11) = *(undefined *)((int)piVar28 + 0x12);
			*(undefined *)((int)piVar28 + 0x12) = *(undefined *)((int)piVar28 + 0x13);
			*(undefined *)((int)piVar28 + 0x13) = *(undefined *)(piVar28 + 5);
			*(undefined *)(piVar28 + 5) = *(undefined *)((int)piVar28 + 0x15);
			*(undefined *)((int)piVar28 + 0x15) = *(undefined *)((int)piVar28 + 0x16);
			*(undefined *)((int)piVar28 + 0x16) = *(undefined *)((int)piVar28 + 0x17);
			*(undefined *)((int)piVar28 + 0x17) = *(undefined *)(piVar28 + 6);
			*(undefined *)(piVar28 + 6) = *(undefined *)((int)piVar28 + 0x19);
			*(undefined *)((int)piVar28 + 0x19) = *(undefined *)((int)piVar28 + 0x1a);
			*(undefined *)((int)piVar28 + 0x1a) = *(undefined *)((int)piVar28 + 0x1b);
			*(undefined *)((int)piVar28 + 0x1b) = *(undefined *)(piVar28 + 7);
			(puVar11 + iVar10)[0x1c] = 0xff;
			if (*piVar28 == 0) {
				StartStand(param_1, (ulonglong) * (uint *)(puVar11 + iVar10 + 0x70), uVar20, uVar21,
				    CONCAT71(uVar24, uVar25), param_6, param_7, param_8, in_stack_ffffff78);
				*puVar27 = 0xffffffff;
			}
		}
	}
	return;
}

undefined8
PlrDeathModeOK(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined **ppuVar2;
	undefined8 uVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	ppuVar2 = &toc;
	if ((int)param_1 == *(int *)PTR_DAT_100f1824) {
		if (3 < (param_1 & 0xffffffff)) {
			ppuVar2 = &toc;
			app_fatal((int)PTR_s_PlrDeathModeOK__illegal_player___100f35c0, param_1, param_3, param_4,
			    param_5, param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf,
			    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
			    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		}
		iVar1 = *(int *)(ppuVar2[-0x1dea] + (int)param_1 * 0x55ec);
		if (iVar1 == 8) {
			uVar3 = 1;
		} else {
			if (iVar1 == 0xb) {
				uVar3 = 1;
			} else {
				if (iVar1 == 10) {
					uVar3 = 1;
				} else {
					uVar3 = 0;
				}
			}
		}
	} else {
		uVar3 = 1;
	}
	return uVar3;
}

void ValidatePlayer(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	int iVar6;
	undefined *puVar7;
	ulonglong uVar5;
	undefined *puVar8;
	int iVar9;
	int iVar10;
	longlong lVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar1 = PTR_DAT_100f1870;
	puVar8 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	ppuVar3 = &toc;
	uVar12 = 0;
	uVar13 = 0;
	if (3 < *(uint *)PTR_DAT_100f1824) {
		ppuVar3 = &toc;
		app_fatal((int)PTR_s_ValidatePlayer__illegal_player___100f35bc,
		    (ulonglong) * (uint *)PTR_DAT_100f1824, param_3, param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar6 = *(int *)puVar2 * 0x55ec;
	if ('2' < (char)puVar8[iVar6 + 0x1b4]) {
		puVar8[iVar6 + 0x1b4] = '2';
	}
	if (*(int *)(puVar8 + iVar6 + 0x1c0) < *(int *)(puVar8 + iVar6 + 0x1b8)) {
		*(int *)(puVar8 + iVar6 + 0x1b8) = *(int *)(puVar8 + iVar6 + 0x1c0);
	}
	iVar10 = 0;
	iVar9 = 0;
	puVar7 = puVar8 + iVar6;
	while (iVar9 < *(int *)(puVar8 + iVar6 + 0x4828)) {
		if (*(int *)(puVar7 + 0xeb0) == 0xb) {
			if (5000 < *(int *)(puVar7 + 0xf6c)) {
				*(undefined4 *)(puVar7 + 0xf6c) = 5000;
			}
			iVar10 = iVar10 + *(int *)(puVar7 + 0xf6c);
		}
		puVar7 = puVar7 + 0x170;
		iVar9 = iVar9 + 1;
	}
	iVar6 = *(int *)puVar2 * 0x55ec;
	if (iVar10 != *(int *)(puVar8 + iVar6 + 0x1c8)) {
		*(int *)(puVar8 + iVar6 + 0x1c8) = iVar10;
	}
	puVar7 = puVar8 + iVar6;
	if (*(int *)(puVar1 + (int)(char)puVar7[0x15c] * 0x10) < *(int *)(puVar7 + 0x164)) {
		*(int *)(puVar7 + 0x164) = *(int *)(puVar1 + (int)(char)puVar7[0x15c] * 0x10);
	}
	iVar9 = (int)(char)puVar7[0x15c] * 0x10;
	if (*(int *)(puVar1 + iVar9 + 4) < *(int *)(puVar8 + iVar6 + 0x16c)) {
		*(int *)(puVar8 + iVar6 + 0x16c) = *(int *)(puVar1 + iVar9 + 4);
	}
	if (*(int *)(puVar1 + iVar9 + 8) < *(int *)(puVar8 + iVar6 + 0x174)) {
		*(int *)(puVar8 + iVar6 + 0x174) = *(int *)(puVar1 + iVar9 + 8);
	}
	if (*(int *)(puVar1 + iVar9 + 0xc) < *(int *)(puVar8 + iVar6 + 0x17c)) {
		*(int *)(puVar8 + iVar6 + 0x17c) = *(int *)(puVar1 + iVar9 + 0xc);
	}
	puVar7 = puVar8 + iVar6 + 1;
	lVar11 = 1;
	puVar1 = ppuVar3[-0x1da7];
	do {
		if (*(int *)(puVar1 + 0x44) != -1) {
			uVar5 = 1;
			uVar4 = SetCursorPos(0, 1, lVar11 + -1);
			uVar12 = uVar12 | uVar5;
			uVar13 = uVar13 | uVar4;
			if ('\x0f' < (char)puVar7[0xc1]) {
				puVar7[0xc1] = 0xf;
			}
		}
		lVar11 = lVar11 + 1;
		puVar7 = puVar7 + 1;
		puVar1 = puVar1 + 0x38;
	} while ((int)lVar11 < 0x25);
	puVar8 = puVar8 + *(int *)puVar2 * 0x55ec;
	*(uint *)(puVar8 + 0x108) = *(uint *)(puVar8 + 0x108) & (uint)uVar12;
	*(uint *)(puVar8 + 0x104) = *(uint *)(puVar8 + 0x104) & (uint)uVar13;
	return;
}

void CheckCheatStats(int param_1)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1828;
	param_1 = param_1 * 0x55ec;
	if (0x2ee < *(int *)(PTR_DAT_100f1828 + param_1 + 0x160)) {
		*(int *)(PTR_DAT_100f1828 + param_1 + 0x160) = 0x2ee;
	}
	if (0x2ee < *(int *)(puVar1 + param_1 + 0x170)) {
		*(int *)(puVar1 + param_1 + 0x170) = 0x2ee;
	}
	if (0x2ee < *(int *)(puVar1 + param_1 + 0x168)) {
		*(int *)(puVar1 + param_1 + 0x168) = 0x2ee;
	}
	if (0x2ee < *(int *)(puVar1 + param_1 + 0x178)) {
		*(int *)(puVar1 + param_1 + 0x178) = 0x2ee;
	}
	if (0x1f400 < *(int *)(puVar1 + param_1 + 0x194)) {
		*(int *)(puVar1 + param_1 + 0x194) = 0x1f400;
	}
	if (*(int *)(puVar1 + param_1 + 0x1a8) < 0x1f401) {
		return;
	}
	*(int *)(puVar1 + param_1 + 0x1a8) = 0x1f400;
	return;
}

void ProcessPlayers(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	uint *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	undefined8 uVar10;
	int iVar11;
	ulonglong uVar12;
	longlong lVar13;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar3 = _DAT_100f1df8;
	puVar7 = PTR_DAT_100f18e0;
	puVar6 = PTR_DAT_100f18dc;
	puVar5 = PTR_DAT_100f1824;
	puVar4 = PTR_DAT_100f17ec;
	uVar8 = ZEXT48(&toc);
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	if (3 < *(uint *)PTR_DAT_100f1824) {
		app_fatal((int)PTR_s_ProcessPlayers__illegal_player___100f35b8,
		    (ulonglong) * (uint *)PTR_DAT_100f1824, param_3, param_4, param_5, (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	lVar13 = 4;
	do {
		lVar13 = lVar13 + -1;
	} while (lVar13 != 0);
	lVar13 = uVar12 + (ulonglong) * (uint *)puVar5 * 0x55ec + 0x5592;
	cVar1 = *(char *)lVar13;
	if (cVar1 != '\0') {
		*(char *)lVar13 = cVar1 + -1;
	}
	uVar2 = *puVar3;
	uVar9 = (ulonglong)uVar2;
	if ((0 < (int)uVar2) && (*puVar3 = uVar2 - 1, *puVar3 == 0)) {
		uVar9 = PlaySFX((ulonglong) * *(uint **)((int)uVar8 + -0x71dc));
	}
	ValidatePlayer(uVar9, lVar13, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
	    in_stack_ffffffa8);
	uVar9 = 0;
	do {
		puVar3 = (uint *)uVar12;
		if (((*(char *)((int)puVar3 + 0x1d) != '\0') && ((uint)(byte)*puVar4 == puVar3[0xd])) && ((iVar11 = (int)uVar9, iVar11 == *(int *)puVar5 || (*(char *)((int)puVar3 + 0x13b) == '\0')))) {
			CheckCheatStats(iVar11);
			uVar10 = PlrDeathModeOK(uVar9, lVar13, param_3, param_4, param_5, (int)param_6, (int)param_7,
			    (int)param_8, in_stack_ffffffa8);
			if (((int)uVar10 == 0) && ((int)puVar3[0x65] >> 6 == 0)) {
				lVar13 = -1;
				SyncPlrKill(uVar9, 0xffffffff, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffa8);
			}
			if (iVar11 == *(int *)puVar5) {
				if (((puVar3[0x155a] & 0x40) != 0) && (*puVar4 != '\0')) {
					puVar3[0x65] = puVar3[0x65] - 4;
					puVar3[99] = puVar3[99] - 4;
					if ((int)puVar3[0x65] >> 6 == 0) {
						lVar13 = 0;
						SyncPlrKill(uVar9, 0, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
					}
					*(undefined4 *)puVar7 = 1;
				}
				if (((puVar3[0x155a] & 0x8000000) != 0) && (param_3 = (ulonglong)puVar3[0x68], 0 < (int)puVar3[0x68])) {
					lVar13 = param_3 - (ulonglong)puVar3[0x6a];
					puVar3[0x68] = (uint)lVar13;
					puVar3[0x6a] = 0;
					*(undefined4 *)puVar6 = 1;
				}
			}
			if (*puVar3 < 0xb) {
				// WARNING: Could not recover jumptable at 0x1009929c. Too many branches
				// WARNING: Treating indirect jump as call
				(**(code **)(*(int *)((int)uVar8 + -0x5a1c) + *puVar3 * 4))();
				return;
			}
			CheckNewPath(uVar9, lVar13, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
			puVar3[0x21] = puVar3[0x21] + 1;
			if ((int)puVar3[0x20] < (int)puVar3[0x21]) {
				puVar3[0x21] = 0;
				puVar3[0x23] = puVar3[0x23] + 1;
				if ((int)puVar3[0x22] < (int)puVar3[0x23]) {
					puVar3[0x23] = 1;
				}
			}
		}
		uVar9 = uVar9 + 1;
		uVar12 = uVar12 + 0x55ec;
		if (3 < (int)uVar9) {
			return;
		}
	} while (true);
}

void ClrPlrPath(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined4 in_stack_ffffffc8;
	undefined uVar7;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	uVar7 = (undefined)in_stack_ffffffc8;
	uVar3 = (undefined)param_5;
	uVar2 = (undefined)param_4;
	uVar6 = (undefined)param_8;
	uVar5 = (undefined)param_7;
	uVar4 = (undefined)param_6;
	ppuVar1 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar1 = &toc;
		app_fatal((int)PTR_s_ClrPlrPath__illegal_player__d_100f35b0, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
		    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	memset((char)ppuVar1[-0x1dea] + (char)param_1 * -0x14 + '\x04', 0x19, 0xff, uVar2, uVar3, uVar4,
	    uVar5, uVar6, uVar7, in_stack_ffffffcf, local_2c);
	return;
}

undefined8
PosOkPlayer(int param_1, longlong param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	short sVar1;
	char cVar2;
	undefined **ppuVar3;
	undefined8 uVar4;
	ulonglong uVar5;
	int iVar6;

	ppuVar3 = &toc;
	if (param_2 < 0) {
		uVar4 = 0;
	} else {
		iVar6 = (int)param_2;
		if (iVar6 < 0x70) {
			if (param_3 < 0) {
				uVar4 = 0;
			} else {
				if (param_3 < 0x70) {
					uVar5 = SolidLoc(iVar6, param_3);
					if ((int)uVar5 == 0) {
						if (*(short *)(*(int *)ppuVar3[-0x1d5f] + iVar6 * 0xe0 + param_3 * 2) == 0) {
							uVar4 = 0;
						} else {
							cVar2 = *(char *)(*(int *)ppuVar3[-0x1da0] + iVar6 * 0x70 + param_3);
							if (cVar2 != '\0') {
								if (cVar2 < '\x01') {
									uVar5 = -((longlong)cVar2 + 1);
								} else {
									uVar5 = (longlong)cVar2 - 1;
								}
								if ((((int)uVar5 != param_1) && ((uVar5 & 0xffffffff) < 4)) && (*(int *)(ppuVar3[-0x1dea] + (int)uVar5 * 0x55ec + 0x194) != 0)) {
									return 0;
								}
							}
							sVar1 = *(short *)(*(int *)ppuVar3[-0x1d9f] + iVar6 * 0xe0 + param_3 * 2);
							if (sVar1 != 0) {
								if (*ppuVar3[-0x1df9] == '\0') {
									return 0;
								}
								if (sVar1 < 1) {
									return 0;
								}
								if (*(int *)(ppuVar3[-0x1dd5] + ((int)sVar1 + -1) * 0xe8 + 0x98) >> 6 != 0) {
									return 0;
								}
							}
							cVar2 = *(char *)(*(int *)ppuVar3[-0x1da1] + iVar6 * 0x70 + param_3);
							if (cVar2 != '\0') {
								if (cVar2 < '\x01') {
									cVar2 = -(cVar2 + '\x01');
								} else {
									cVar2 = cVar2 + -1;
								}
								if (*(int *)(ppuVar3[-0x1da2] + (int)cVar2 * 0x78 + 0x38) != 0) {
									return 0;
								}
							}
							uVar4 = 1;
						}
					} else {
						uVar4 = 0;
					}
				} else {
					uVar4 = 0;
				}
			}
		} else {
			uVar4 = 0;
		}
	}
	return uVar4;
}

void MakePlrPath(ulonglong param_1, longlong param_2, longlong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	int iVar6;
	int iVar7;
	undefined uVar8;
	uint uVar9;
	int iVar10;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar4 = PTR_DAT_100f1828;
	uVar8 = (undefined)param_8;
	ppuVar5 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar5 = &toc;
		app_fatal(_DAT_100f35ac, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4);
	}
	iVar3 = (int)param_1 * 0x55ec;
	uVar9 = (uint)param_2;
	*(uint *)(puVar4 + iVar3 + 0x48) = uVar9;
	iVar10 = (int)param_3;
	*(int *)(puVar4 + iVar3 + 0x4c) = iVar10;
	uVar2 = *(uint *)(puVar4 + iVar3 + 0x40);
	if ((uVar9 != uVar2) || (iVar10 != *(int *)(puVar4 + iVar3 + 0x44))) {
		iVar6 = FindPath(ZEXT48(ppuVar5[-0x1be6]), param_1, (ulonglong)uVar2,
		    (ulonglong) * (uint *)(puVar4 + iVar3 + 0x44), param_2, param_3,
		    (int)(puVar4 + iVar3 + 4), uVar8, in_stack_ffffffa8);
		if (iVar6 != 0) {
			iVar7 = iVar6;
			if ((int)param_4 == 0) {
				iVar7 = iVar6 + -1;
				cVar1 = (puVar4 + iVar3)[iVar6 + 3];
				if (((longlong)cVar1 & 0xffffffffU) < 9) {
					// WARNING: Could not recover jumptable at 0x100996d4. Too many branches
					// WARNING: Treating indirect jump as call
					(**(code **)(ppuVar5[-0x168a] + (int)cVar1 * 4))();
					return;
				}
				*(uint *)(puVar4 + iVar3 + 0x48) = uVar9;
				*(int *)(puVar4 + iVar3 + 0x4c) = iVar10;
			}
			puVar4[iVar7 + iVar3 + 4] = 0xff;
		}
	}
	return;
}

void CheckPlrSpell(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	int iVar10;
	undefined **ppuVar11;
	undefined8 uVar12;
	ulonglong uVar13;
	longlong lVar14;
	undefined uVar15;
	int iVar16;
	undefined *puVar17;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar9 = PTR_DAT_100f1978;
	puVar8 = PTR_DAT_100f1974;
	puVar7 = PTR_DAT_100f1928;
	puVar6 = PTR_DAT_100f1880;
	puVar5 = PTR_DAT_100f1874;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	uVar15 = (undefined)param_5;
	ppuVar11 = &toc;
	iVar16 = 0;
	if (3 < *(uint *)PTR_DAT_100f1824) {
		ppuVar11 = &toc;
		app_fatal(_DAT_100f35a4, (ulonglong) * (uint *)PTR_DAT_100f1824, param_3, param_4, param_5,
		    (int)param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	puVar17 = puVar4 + 0xb4;
	iVar10 = *(int *)puVar3 * 0x55ec;
	iVar2 = *(int *)(puVar17 + iVar10);
	if (iVar2 == -1) {
		cVar1 = puVar4[iVar10 + 0x15c];
		if (cVar1 == '\0') {
			PlaySFX(0x2f1);
		} else {
			if (cVar1 == '\x01') {
				PlaySFX(0x284);
			} else {
				if (cVar1 == '\x02') {
					PlaySFX(0x21d);
				}
			}
		}
	} else {
		if ((*ppuVar11[-0x1de5] == '\0') && (*(int *)(ppuVar11[-0x1da7] + iVar2 * 0x38 + 0x18) == 0)) {
			cVar1 = puVar4[iVar10 + 0x15c];
			if (cVar1 == '\0') {
				PlaySFX(0x2ea);
			} else {
				if (cVar1 == '\x01') {
					PlaySFX(0x27d);
				} else {
					if (cVar1 == '\x02') {
						PlaySFX(0x216);
					}
				}
			}
		} else {
			if ((*(int *)ppuVar11[-0x1dd1] == 1) && ((((*(int *)ppuVar11[-0x1dab] < 0x160 && ((*(int *)ppuVar11[-0x1df1] == 0 || (0x13f < *(int *)puVar7)))) && ((*(int *)ppuVar11[-0x1def] == 0 || (*(int *)puVar7 < 0x141)))) || ((*(int *)ppuVar11[-0x1dab] < 0x160 && ((((iVar2 == 2 || (iVar2 == 5)) || (iVar2 == 9)) || (iVar2 - 0x1aU < 2)))))))) {
				cVar1 = (puVar4 + 0xb8)[iVar10];
				if (cVar1 == '\x02') {
					uVar12 = UseScroll();
					iVar16 = (int)uVar12;
				} else {
					if (cVar1 < '\x02') {
						if (-1 < cVar1) {
							uVar12 = CheckSpell(*(int *)puVar3, iVar2, cVar1, 0, uVar15, (char)param_6, (char)param_7,
							    (char)param_8, in_stack_ffffffa8);
							iVar16 = (int)uVar12;
						}
					} else {
						if (cVar1 < '\x04') {
							uVar12 = UseStaff();
							iVar16 = (int)uVar12;
						}
					}
				}
				uVar15 = (undefined)param_8;
				if (iVar16 == 0) {
					if ((puVar4 + 0xb8)[*(int *)puVar3 * 0x55ec] == '\x01') {
						cVar1 = puVar4[*(int *)puVar3 * 0x55ec + 0x15c];
						if (cVar1 == '\0') {
							PlaySFX(0x2f2);
						} else {
							if (cVar1 == '\x01') {
								PlaySFX(0x285);
							} else {
								if (cVar1 == '\x02') {
									PlaySFX(0x21e);
								}
							}
						}
					}
				} else {
					iVar16 = *(int *)puVar3;
					iVar2 = *(int *)(puVar17 + iVar16 * 0x55ec);
					if (iVar2 == 6) {
						uVar13 = GetDirection((ulonglong) * (uint *)(puVar4 + iVar16 * 0x55ec + 0x38),
						    *(int *)(puVar4 + iVar16 * 0x55ec + 0x3c),
						    (ulonglong) * (uint *)puVar9, *(int *)puVar8);
						lVar14 = GetSpellLevel(*(int *)puVar3, *(int *)(puVar17 + *(int *)puVar3 * 0x55ec));
						NetSendCmdLocParam3(1, 0x54, (ulonglong)(*(uint *)puVar9 & 0xff),
						    (ulonglong)(*(uint *)puVar8 & 0xff),
						    (ulonglong)(*(uint *)(puVar17 + *(int *)puVar3 * 0x55ec) & 0xffff),
						    (uint)uVar13 & 0xffff, (uint)lVar14 & 0xffff, uVar15, in_stack_ffffffa8);
					} else {
						if (*(int *)puVar6 == -1) {
							if (*puVar5 == -1) {
								lVar14 = GetSpellLevel(iVar16, iVar2);
								NetSendCmdLocParam2(1, 0xe, (ulonglong)(*(uint *)puVar9 & 0xff),
								    (ulonglong)(*(uint *)puVar8 & 0xff),
								    (ulonglong)(*(uint *)(puVar17 + *(int *)puVar3 * 0x55ec) & 0xffff),
								    (uint)lVar14 & 0xffff, param_7, param_8, in_stack_ffffffa8);
							} else {
								lVar14 = GetSpellLevel(iVar16, iVar2);
								NetSendCmdParam3(1, 0x17, (longlong)(char)*puVar5,
								    (ulonglong)(*(uint *)(puVar17 + *(int *)puVar3 * 0x55ec) & 0xffff),
								    (ulonglong)((uint)lVar14 & 0xffff), param_6, param_7, param_8,
								    in_stack_ffffffa8);
							}
						} else {
							lVar14 = GetSpellLevel(iVar16, iVar2);
							NetSendCmdParam3(1, 0x16, (ulonglong)(*(uint *)puVar6 & 0xffff),
							    (ulonglong)(*(uint *)(puVar17 + *(int *)puVar3 * 0x55ec) & 0xffff),
							    (ulonglong)((uint)lVar14 & 0xffff), param_6, param_7, param_8,
							    in_stack_ffffffa8);
						}
					}
				}
			}
		}
	}
	return;
}

void SyncPlrAnim(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar2 = PTR_DAT_100f1828;
	ppuVar3 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		param_2 = param_1;
		ppuVar3 = &toc;
		app_fatal((int)PTR_s_SyncPlrAnim__illegal_player__d_100f35a0, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
		    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	uVar1 = *(uint *)(puVar2 + (int)(param_1 * 0x55ec));
	if (uVar1 < 0xc) {
		// WARNING: Could not recover jumptable at 0x10099b40. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar3[-0x168e] + uVar1 * 4))();
		return;
	}
	app_fatal((int)ppuVar3[-0x168d], param_2, param_3, param_1 * 0x55ec,
	    (ulonglong) * (uint *)(puVar2 + (int)(param_1 * 0x55ec) + 0x1c), param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
	    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
	    in_stack_fffffff0, in_stack_fffffff4);
	return;
}

void SyncInitPlrPos(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	undefined *puVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	ulonglong uVar10;
	int iVar11;
	undefined8 uVar12;
	int iVar13;
	ulonglong uVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	uint *puVar20;
	longlong lVar19;
	uint *puVar22;
	longlong lVar21;
	uint uVar24;
	longlong lVar23;
	int iVar25;
	longlong lVar26;
	longlong lVar27;
	undefined4 in_stack_ffffff88;

	puVar9 = PTR_DAT_100f1828;
	puVar8 = PTR_DAT_100f17ec;
	puVar4 = PTR_DAT_100f17e0;
	lVar18 = (longlong)param_8;
	lVar17 = (longlong)param_7;
	lVar16 = (longlong)param_6;
	lVar15 = (longlong)param_5;
	uVar10 = ZEXT48(&toc);
	iVar7 = (int)param_1;
	iVar5 = iVar7 * 0x55ec;
	piVar1 = (int *)(PTR_DAT_100f1828 + iVar5 + 0x38);
	piVar3 = (int *)(PTR_DAT_100f1828 + iVar5 + 0x48);
	*piVar3 = *piVar1;
	*(int *)(puVar9 + iVar5 + 0x4c) = *(int *)(puVar9 + iVar5 + 0x3c);
	if ((*puVar4 != '\x01') && (puVar4 = puVar9 + iVar5, (uint)(byte)*puVar8 == *(uint *)(puVar4 + 0x34))) {
		uVar24 = 0;
		puVar20 = _DAT_100f2048;
		puVar22 = (uint *)PTR_DAT_100f204c;
		do {
			uVar14 = (ulonglong) * (uint *)(puVar4 + 0x38);
			lVar27 = uVar14 + (ulonglong)*puVar20;
			lVar27._4_4_ = (int)lVar27;
			lVar26 = (ulonglong) * (uint *)(puVar4 + 0x3c) + (ulonglong)*puVar22;
			iVar13 = (int)lVar26;
			uVar12 = PosOkPlayer(iVar7, lVar27, iVar13, (char)*(uint *)(puVar4 + 0x38), (char)lVar15,
			    (char)lVar16, (char)lVar17, (char)lVar18, in_stack_ffffff88);
			if ((int)uVar12 != 0)
				break;
			uVar24 = uVar24 + 1;
			puVar22 = puVar22 + 1;
			puVar20 = puVar20 + 1;
		} while (uVar24 < 8);
		uVar12 = PosOkPlayer(iVar7, lVar27, iVar13, (char)uVar14, (char)lVar15, (char)lVar16, (char)lVar17,
		    (char)lVar18, in_stack_ffffff88);
		iVar11 = (int)uVar10;
		if ((int)uVar12 == 0) {
			bVar6 = false;
			lVar23 = 1;
			while (true) {
				iVar11 = (int)uVar10;
				lVar27._4_4_ = (int)lVar27;
				iVar13 = (int)lVar26;
				iVar25 = (int)lVar23;
				if ((0x31 < iVar25) || (bVar6))
					break;
				lVar21 = -lVar23;
				while (((int)lVar21 <= iVar25 && (!bVar6))) {
					lVar26 = lVar21 + (ulonglong) * (uint *)(puVar4 + 0x3c);
					lVar19 = -lVar23;
					while (((int)lVar19 <= iVar25 && (!bVar6))) {
						lVar27 = lVar19 + (ulonglong) * (uint *)(puVar4 + 0x38);
						uVar12 = PosOkPlayer(iVar7, lVar27, (int)lVar26, (char)uVar14, (char)lVar15, (char)lVar16,
						    (char)lVar17, (char)lVar18, in_stack_ffffff88);
						if (((int)uVar12 != 0) && (uVar12 = PosOkPortal((uint)(byte)*puVar8, (int)lVar27, (int)lVar26), (int)uVar12 == 0)) {
							bVar6 = true;
						}
						lVar19 = lVar19 + 1;
					}
					lVar21 = lVar21 + 1;
				}
				lVar23 = lVar23 + 1;
			}
		}
		*piVar1 = lVar27._4_4_;
		piVar1 = *(int **)(iVar11 + -0x7680);
		*(int *)(puVar9 + iVar5 + 0x3c) = iVar13;
		piVar2 = *(int **)(iVar11 + -0x77ac);
		*(char *)(*piVar1 + lVar27._4_4_ * 0x70 + iVar13) = (char)param_1 + '\x01';
		if (iVar7 == *piVar2) {
			piVar1 = *(int **)(iVar11 + -0x77b0);
			*(int *)(puVar9 + iVar5 + 0x40) = lVar27._4_4_;
			piVar2 = *(int **)(iVar11 + -0x77b4);
			*(int *)(puVar9 + iVar5 + 0x44) = iVar13;
			*piVar3 = lVar27._4_4_;
			*(int *)(puVar9 + iVar5 + 0x4c) = iVar13;
			*piVar1 = lVar27._4_4_;
			*piVar2 = iVar13;
		}
	}
	return;
}

void SyncInitPlr(ulonglong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined7 uVar2;
	undefined uVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	uVar6 = (undefined7)((ulonglong)param_5 >> 8);
	uVar7 = (undefined)param_5;
	uVar4 = (undefined7)((ulonglong)param_4 >> 8);
	uVar5 = (undefined)param_4;
	uVar2 = (undefined7)((ulonglong)param_3 >> 8);
	uVar3 = (undefined)param_3;
	if (3 < (param_1 & 0xffffffff)) {
		param_2 = param_1;
		app_fatal((int)PTR_s_SyncInitPlr__illegal_player__d_100f3594, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
		    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	uVar10 = (undefined)param_8;
	uVar9 = (undefined)param_7;
	uVar8 = (undefined)param_6;
	uVar1 = (undefined)param_2;
	SetPlrAnims(param_1, param_2, CONCAT71(uVar2, uVar3), CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7),
	    param_6, param_7, param_8, in_stack_ffffffc8);
	SyncInitPlrPos(param_1, uVar1, uVar3, uVar5, uVar7, uVar8, uVar9, uVar10, in_stack_ffffffc8);
	return;
}

void CheckStats(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	int *piVar8;
	int iVar9;
	int iVar10;
	int unaff_r30;
	longlong lVar11;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = PTR_DAT_100f1828;
	ppuVar7 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal((int)PTR_s_CheckStats__illegal_player__d_100f3590, param_1, param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	iVar5 = (int)param_1 * 0x55ec;
	cVar1 = puVar6[iVar5 + 0x15c];
	if (cVar1 == '\0') {
		unaff_r30 = 0;
	} else {
		if (cVar1 == '\x01') {
			unaff_r30 = 1;
		} else {
			if (cVar1 == '\x02') {
				unaff_r30 = 2;
			}
		}
	}
	puVar6 = puVar6 + iVar5;
	piVar8 = (int *)(ppuVar7[-0x1dd8] + unaff_r30 * 0x10);
	lVar11 = 2;
	iVar5 = *piVar8;
	iVar2 = piVar8[1];
	iVar9 = 0;
	iVar3 = piVar8[2];
	iVar4 = piVar8[3];
	do {
		if (iVar9 == 2) {
			if (iVar3 < *(int *)(puVar6 + 0x174)) {
				*(int *)(puVar6 + 0x174) = iVar3;
			} else {
				if (*(int *)(puVar6 + 0x174) < 0) {
					*(undefined4 *)(puVar6 + 0x174) = 0;
				}
			}
		} else {
			if (iVar9 < 2) {
				if (iVar9 == 0) {
					if (iVar5 < *(int *)(puVar6 + 0x164)) {
						*(int *)(puVar6 + 0x164) = iVar5;
					} else {
						if (*(int *)(puVar6 + 0x164) < 0) {
							*(undefined4 *)(puVar6 + 0x164) = 0;
						}
					}
				} else {
					if (-1 < iVar9) {
						if (iVar2 < *(int *)(puVar6 + 0x16c)) {
							*(int *)(puVar6 + 0x16c) = iVar2;
						} else {
							if (*(int *)(puVar6 + 0x16c) < 0) {
								*(undefined4 *)(puVar6 + 0x16c) = 0;
							}
						}
					}
				}
			} else {
				if (iVar9 < 4) {
					if (iVar4 < *(int *)(puVar6 + 0x17c)) {
						*(int *)(puVar6 + 0x17c) = iVar4;
					} else {
						if (*(int *)(puVar6 + 0x17c) < 0) {
							*(undefined4 *)(puVar6 + 0x17c) = 0;
						}
					}
				}
			}
		}
		iVar10 = iVar9 + 1;
		if (iVar10 == 2) {
			if (iVar3 < *(int *)(puVar6 + 0x174)) {
				*(int *)(puVar6 + 0x174) = iVar3;
			} else {
				if (*(int *)(puVar6 + 0x174) < 0) {
					*(undefined4 *)(puVar6 + 0x174) = 0;
				}
			}
		} else {
			if (iVar10 < 2) {
				if (iVar9 == -1) {
					if (iVar5 < *(int *)(puVar6 + 0x164)) {
						*(int *)(puVar6 + 0x164) = iVar5;
					} else {
						if (*(int *)(puVar6 + 0x164) < 0) {
							*(undefined4 *)(puVar6 + 0x164) = 0;
						}
					}
				} else {
					if (-1 < iVar10) {
						if (iVar2 < *(int *)(puVar6 + 0x16c)) {
							*(int *)(puVar6 + 0x16c) = iVar2;
						} else {
							if (*(int *)(puVar6 + 0x16c) < 0) {
								*(undefined4 *)(puVar6 + 0x16c) = 0;
							}
						}
					}
				}
			} else {
				if (iVar10 < 4) {
					if (iVar4 < *(int *)(puVar6 + 0x17c)) {
						*(int *)(puVar6 + 0x17c) = iVar4;
					} else {
						if (*(int *)(puVar6 + 0x17c) < 0) {
							*(undefined4 *)(puVar6 + 0x17c) = 0;
						}
					}
				}
			}
		}
		iVar9 = iVar9 + 2;
		lVar11 = lVar11 + -1;
	} while (lVar11 != 0);
	return;
}

void ModifyPlrStr(ulonglong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint *puVar2;
	uint *puVar3;
	int iVar4;
	undefined *puVar5;
	int iVar6;
	undefined **ppuVar7;
	longlong lVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined4 uVar11;
	undefined4 uVar12;
	undefined4 uVar13;
	ulonglong uVar14;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar5 = PTR_DAT_100f1828;
	ppuVar7 = &toc;
	uVar14 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal(_DAT_100f358c, param_1, param_3, param_4, param_5, (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar13 = (undefined4)param_8;
	uVar12 = (undefined4)param_7;
	uVar11 = (undefined4)param_6;
	lVar8 = param_1 * 0x55ec;
	uVar10 = uVar14 + lVar8 + 0x15c;
	iVar4 = (int)lVar8;
	puVar2 = (uint *)(puVar5 + iVar4 + 0x164);
	uVar1 = *puVar2;
	uVar9 = (ulonglong)uVar1;
	if (*(int *)(ppuVar7[-0x1dd8] + (int)*(char *)uVar10 * 0x10) < (int)(param_2 + uVar1)) {
		param_2 = *(int *)(ppuVar7[-0x1dd8] + (int)*(char *)uVar10 * 0x10) - uVar1;
	}
	puVar3 = (uint *)(puVar5 + iVar4 + 0x160);
	*puVar3 = *(int *)(puVar5 + iVar4 + 0x160) + param_2;
	*puVar2 = *puVar2 + param_2;
	if (*(char *)uVar10 == '\x01') {
		uVar9 = uVar14 + lVar8;
		iVar4 = (int)uVar9;
		uVar14 = (ulonglong) * (byte *)(iVar4 + 0x1b4);
		uVar10 = 0x51eb851f;
		iVar6 = (int)(char)*(byte *)(iVar4 + 0x1b4) * (*puVar3 + *(int *)(iVar4 + 0x170));
		uVar1 = iVar6 / 200 + (iVar6 >> 0x1f);
		*(int *)(iVar4 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	} else {
		uVar14 = (ulonglong)*puVar3;
		iVar6 = *puVar3 * (int)(char)(puVar5 + iVar4)[0x1b4];
		uVar1 = iVar6 / 100 + (iVar6 >> 0x1f);
		*(uint *)(puVar5 + iVar4 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	}
	CalcPlrInv(param_1, 1, uVar14, uVar9, uVar10, param_6, param_7, param_8, in_stack_ffffffb8);
	if ((int)param_1 == *(int *)ppuVar7[-0x1deb]) {
		NetSendCmdParam1(0, 0x4f, (ulonglong)(*puVar2 & 0xffff), uVar9, uVar10, uVar11, uVar12, uVar13,
		    in_stack_ffffffb8);
	}
	return;
}

void ModifyPlrMag(ulonglong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	uint *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	undefined4 uVar9;
	undefined4 uVar10;
	undefined4 uVar11;
	ulonglong uVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f1828;
	ppuVar6 = &toc;
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar6 = &toc;
		app_fatal(_DAT_100f3588, param_1, param_3, param_4, param_5, (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar11 = (undefined4)param_8;
	uVar10 = (undefined4)param_7;
	uVar9 = (undefined4)param_6;
	uVar7 = param_1 * 0x55ec;
	uVar12 = uVar12 + uVar7 + 0x15c;
	iVar5 = (int)uVar7;
	puVar3 = (uint *)(puVar4 + iVar5 + 0x16c);
	uVar1 = *puVar3;
	uVar8 = (ulonglong)uVar1;
	if (*(int *)(ppuVar6[-0x1dd8] + (int)*(char *)uVar12 * 0x10 + 4) < (int)(param_2 + uVar1)) {
		param_2 = *(int *)(ppuVar6[-0x1dd8] + (int)*(char *)uVar12 * 0x10 + 4) - uVar1;
	}
	*(int *)(puVar4 + iVar5 + 0x168) = *(int *)(puVar4 + iVar5 + 0x168) + param_2;
	*puVar3 = *puVar3 + param_2;
	iVar2 = param_2 << 6;
	if (*(char *)uVar12 == '\x02') {
		iVar2 = param_2 << 7;
	}
	puVar4 = puVar4 + iVar5;
	*(int *)(puVar4 + 0x1a4) = *(int *)(puVar4 + 0x1a4) + iVar2;
	*(int *)(puVar4 + 0x1ac) = *(int *)(puVar4 + 0x1ac) + iVar2;
	if ((*(uint *)(puVar4 + 0x5568) & 0x8000000) == 0) {
		*(int *)(puVar4 + 0x1a0) = *(int *)(puVar4 + 0x1a0) + iVar2;
		*(int *)(puVar4 + 0x1a8) = *(int *)(puVar4 + 0x1a8) + iVar2;
	}
	CalcPlrInv(param_1, 1, uVar7, uVar8, uVar12, param_6, param_7, param_8, in_stack_ffffffb8);
	if ((int)param_1 == *(int *)ppuVar6[-0x1deb]) {
		NetSendCmdParam1(0, 0x50, (ulonglong)(*puVar3 & 0xffff), uVar8, uVar12, uVar9, uVar10, uVar11,
		    in_stack_ffffffb8);
	}
	return;
}

void ModifyPlrDex(ulonglong param_1, int param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	int iVar6;
	undefined **ppuVar7;
	undefined4 uVar8;
	undefined4 uVar9;
	undefined4 uVar10;
	ulonglong uVar11;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar5 = PTR_DAT_100f1828;
	ppuVar7 = &toc;
	uVar11 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar7 = &toc;
		app_fatal(_DAT_100f3584, param_1, param_3, param_4, param_5, (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffb8,
		    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	}
	uVar10 = (undefined4)param_8;
	uVar9 = (undefined4)param_7;
	uVar8 = (undefined4)param_6;
	iVar4 = (int)(param_1 * 0x55ec);
	puVar2 = (uint *)(puVar5 + iVar4 + 0x174);
	uVar1 = *puVar2;
	if (*(int *)(ppuVar7[-0x1dd8] + (int)(char)puVar5[iVar4 + 0x15c] * 0x10 + 8) < (int)(param_2 + uVar1)) {
		param_2 = *(int *)(ppuVar7[-0x1dd8] + (int)(char)puVar5[iVar4 + 0x15c] * 0x10 + 8) - uVar1;
	}
	puVar3 = puVar5 + iVar4;
	*(int *)(puVar3 + 0x170) = *(int *)(puVar3 + 0x170) + param_2;
	*puVar2 = *puVar2 + param_2;
	CalcPlrInv(param_1, 1, (ulonglong)uVar1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	if (puVar5[iVar4 + 0x15c] == '\x01') {
		param_4 = uVar11 + param_1 * 0x55ec;
		iVar4 = (int)param_4;
		param_5 = 0x51eb851f;
		iVar6 = (int)*(char *)(iVar4 + 0x1b4) * (*(int *)(iVar4 + 0x160) + *(int *)(puVar3 + 0x170));
		uVar1 = iVar6 / 200 + (iVar6 >> 0x1f);
		*(int *)(iVar4 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	}
	if ((int)param_1 == *(int *)ppuVar7[-0x1deb]) {
		NetSendCmdParam1(0, 0x51, (ulonglong)(*puVar2 & 0xffff), param_4, param_5, uVar8, uVar9, uVar10,
		    in_stack_ffffffa8);
	}
	return;
}

void ModifyPlrVit(ulonglong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	uint *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined **ppuVar6;
	longlong lVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	undefined4 uVar10;
	undefined4 uVar11;
	undefined4 uVar12;
	ulonglong uVar13;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f1828;
	ppuVar6 = &toc;
	uVar13 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar6 = &toc;
		app_fatal(_DAT_100f3580, param_1, param_3, param_4, param_5, (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar12 = (undefined4)param_8;
	uVar11 = (undefined4)param_7;
	uVar10 = (undefined4)param_6;
	lVar7 = param_1 * 0x55ec;
	uVar9 = uVar13 + lVar7 + 0x15c;
	puVar3 = (uint *)(puVar4 + (int)lVar7 + 0x17c);
	uVar1 = *puVar3;
	uVar8 = (ulonglong)uVar1;
	if (*(int *)(ppuVar6[-0x1dd8] + (int)*(char *)uVar9 * 0x10 + 0xc) < (int)(param_2 + uVar1)) {
		param_2 = *(int *)(ppuVar6[-0x1dd8] + (int)*(char *)uVar9 * 0x10 + 0xc) - uVar1;
	}
	puVar4 = puVar4 + (int)lVar7;
	*(int *)(puVar4 + 0x178) = *(int *)(puVar4 + 0x178) + param_2;
	*puVar3 = *puVar3 + param_2;
	iVar2 = param_2 << 6;
	if (*(char *)uVar9 == '\0') {
		iVar2 = param_2 << 7;
	}
	uVar13 = uVar13 + lVar7;
	iVar5 = (int)uVar13;
	*(int *)(iVar5 + 0x18c) = *(int *)(iVar5 + 0x18c) + iVar2;
	*(int *)(iVar5 + 400) = *(int *)(iVar5 + 400) + iVar2;
	*(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + iVar2;
	*(int *)(iVar5 + 0x198) = *(int *)(iVar5 + 0x198) + iVar2;
	CalcPlrInv(param_1, 1, uVar13, uVar8, uVar9, param_6, param_7, param_8, in_stack_ffffffb8);
	if ((int)param_1 == *(int *)ppuVar6[-0x1deb]) {
		NetSendCmdParam1(0, 0x52, (ulonglong)(*puVar3 & 0xffff), uVar8, uVar9, uVar10, uVar11, uVar12,
		    in_stack_ffffffb8);
	}
	return;
}

void SetPlayerHitPoints(ulonglong param_1, int param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar2 = PTR_DAT_100f1828;
	ppuVar3 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar3 = &toc;
		app_fatal(_DAT_100f357c, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	piVar1 = (int *)ppuVar3[-0x1deb];
	puVar2 = puVar2 + (int)param_1 * 0x55ec;
	*(int *)(puVar2 + 0x194) = param_2;
	*(int *)(puVar2 + 0x18c) = param_2 - (*(int *)(puVar2 + 0x198) - *(int *)(puVar2 + 400));
	if ((int)param_1 == *piVar1) {
		*(undefined4 *)ppuVar3[-0x1dbc] = 1;
	}
	return;
}

void SetPlrStr(ulonglong param_1, undefined4 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	int iVar3;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar2 = PTR_DAT_100f1828;
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal((int)PTR_s_SetPlrStr__illegal_player__d_100f3578, param_1, param_3, param_4, param_5,
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	puVar2 = puVar2 + (int)param_1 * 0x55ec;
	*(undefined4 *)(puVar2 + 0x164) = param_2;
	CalcPlrInv(param_1, 1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	if (puVar2[0x15c] == '\x01') {
		iVar3 = (int)(char)puVar2[0x1b4] * (*(int *)(puVar2 + 0x160) + *(int *)(puVar2 + 0x170));
		uVar1 = iVar3 / 200 + (iVar3 >> 0x1f);
		*(uint *)(puVar2 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	} else {
		uVar1 = (*(int *)(puVar2 + 0x160) * (int)(char)puVar2[0x1b4]) / 100 + (*(int *)(puVar2 + 0x160) * (int)(char)puVar2[0x1b4] >> 0x1f);
		*(uint *)(puVar2 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	}
	return;
}

void SetPlrMag(ulonglong param_1, int param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	ulonglong uVar4;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f1828;
	uVar4 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal((int)PTR_s_SetPlrMag__illegal_player__d_100f3574, param_1, param_3, param_4, param_5,
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	*(int *)(puVar3 + (int)(param_1 * 0x55ec) + 0x16c) = param_2;
	iVar1 = param_2 << 6;
	if ((puVar3 + (int)(param_1 * 0x55ec))[0x15c] == '\x02') {
		iVar1 = param_2 << 7;
	}
	uVar4 = uVar4 + param_1 * 0x55ec;
	iVar2 = (int)uVar4;
	*(int *)(iVar2 + 0x1a4) = iVar1;
	*(int *)(iVar2 + 0x1ac) = iVar1;
	CalcPlrInv(param_1, 1, uVar4, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void SetPlrDex(ulonglong param_1, undefined4 param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	int iVar3;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar2 = PTR_DAT_100f1828;
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal((int)PTR_s_SetPlrDex__illegal_player__d_100f3570, param_1, param_3, param_4, param_5,
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	puVar2 = puVar2 + (int)param_1 * 0x55ec;
	*(undefined4 *)(puVar2 + 0x174) = param_2;
	CalcPlrInv(param_1, 1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	if (puVar2[0x15c] == '\x01') {
		iVar3 = (int)(char)puVar2[0x1b4] * (*(int *)(puVar2 + 0x160) + *(int *)(puVar2 + 0x170));
		uVar1 = iVar3 / 200 + (iVar3 >> 0x1f);
		*(uint *)(puVar2 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	} else {
		uVar1 = (*(int *)(puVar2 + 0x160) * (int)(char)puVar2[0x1b4]) / 100 + (*(int *)(puVar2 + 0x160) * (int)(char)puVar2[0x1b4] >> 0x1f);
		*(uint *)(puVar2 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	}
	return;
}

void SetPlrVit(ulonglong param_1, int param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	ulonglong uVar4;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_DAT_100f1828;
	uVar4 = ZEXT48(PTR_DAT_100f1828);
	if (3 < (param_1 & 0xffffffff)) {
		app_fatal((int)PTR_s_SetPlrVit__illegal_player__d_100f356c, param_1, param_3, param_4, param_5,
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffb8, in_stack_ffffffbf,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	*(int *)(puVar3 + (int)(param_1 * 0x55ec) + 0x17c) = param_2;
	iVar1 = param_2 << 6;
	if ((puVar3 + (int)(param_1 * 0x55ec))[0x15c] == '\0') {
		iVar1 = param_2 << 7;
	}
	uVar4 = uVar4 + param_1 * 0x55ec;
	iVar2 = (int)uVar4;
	*(int *)(iVar2 + 0x18c) = iVar1;
	*(int *)(iVar2 + 400) = iVar1;
	CalcPlrInv(param_1, 1, uVar4, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void InitDungMsgs(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	ppuVar1 = &toc;
	if (3 < (param_1 & 0xffffffff)) {
		ppuVar1 = &toc;
		app_fatal((int)PTR_s_InitDungMsgs__illegal_player__d_100f3568, param_1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
		    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	}
	ppuVar1[-0x1dea][(int)param_1 * 0x55ec + 0x5591] = 0;
	return;
}

void PlayDungMsgs(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	undefined **ppuVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar5 = _DAT_100f1df8;
	puVar4 = _DAT_100f1df4;
	puVar7 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	puVar2 = PTR_DAT_100f17e0;
	ppuVar6 = &toc;
	if (3 < *(uint *)PTR_DAT_100f1824) {
		ppuVar6 = &toc;
		app_fatal(_DAT_100f3564, (ulonglong) * (uint *)PTR_DAT_100f1824, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	cVar1 = *ppuVar6[-0x1df9];
	if ((((cVar1 == '\x01') && (puVar8 = puVar7 + *(int *)puVar3 * 0x55ec, puVar8[0x1f1] == '\0')) && (*puVar2 == '\x01')) && ((puVar8[0x5591] & 1) == 0)) {
		*puVar5 = 0x28;
		cVar1 = puVar8[0x15c];
		if (cVar1 == '\0') {
			*puVar4 = 0x336;
		} else {
			if (cVar1 == '\x01') {
				*puVar4 = 0x2c4;
			} else {
				if (cVar1 == '\x02') {
					*puVar4 = 0x25d;
				}
			}
		}
		puVar8[0x5591] = puVar8[0x5591] | 1;
		return;
	}
	if (((cVar1 == '\x05') && (puVar8 = puVar7 + *(int *)puVar3 * 0x55ec, puVar8[0x1f5] == '\0')) && ((*puVar2 == '\x01' && ((puVar8[0x5591] & 2) == 0)))) {
		*puVar5 = 0x28;
		cVar1 = puVar8[0x15c];
		if (cVar1 == '\0') {
			*puVar4 = 0x335;
		} else {
			if (cVar1 == '\x01') {
				*puVar4 = 0x2c3;
			} else {
				if (cVar1 == '\x02') {
					*puVar4 = 0x25c;
				}
			}
		}
		puVar8[0x5591] = puVar8[0x5591] | 2;
		return;
	}
	if (((cVar1 == '\t') && (puVar8 = puVar7 + *(int *)puVar3 * 0x55ec, puVar8[0x1f9] == '\0')) && ((*puVar2 == '\x01' && ((puVar8[0x5591] & 4) == 0)))) {
		*puVar5 = 0x28;
		cVar1 = puVar8[0x15c];
		if (cVar1 == '\0') {
			*puVar4 = 0x337;
		} else {
			if (cVar1 == '\x01') {
				*puVar4 = 0x2c5;
			} else {
				if (cVar1 == '\x02') {
					*puVar4 = 0x25e;
				}
			}
		}
		puVar8[0x5591] = puVar8[0x5591] | 4;
		return;
	}
	if ((((cVar1 == '\r') && (puVar8 = puVar7 + *(int *)puVar3 * 0x55ec, puVar8[0x1fd] == '\0')) && (*puVar2 == '\x01')) && ((puVar8[0x5591] & 8) == 0)) {
		*puVar5 = 0x28;
		cVar1 = puVar8[0x15c];
		if (cVar1 == '\0') {
			*puVar4 = 0x338;
		} else {
			if (cVar1 == '\x01') {
				*puVar4 = 0x2c6;
			} else {
				if (cVar1 == '\x02') {
					*puVar4 = 0x25f;
				}
			}
		}
		puVar8[0x5591] = puVar8[0x5591] | 8;
		return;
	}
	if (((cVar1 == '\x10') && (puVar7 = puVar7 + *(int *)puVar3 * 0x55ec, puVar7[0x1ff] == '\0')) && ((*puVar2 == '\x01' && ((puVar7[0x5591] & 0x10) == 0)))) {
		*puVar5 = 0x28;
		cVar1 = puVar7[0x15c];
		if (cVar1 == '\0') {
			*puVar4 = 0x345;
		} else {
			if (cVar1 == '\x01') {
				*puVar4 = 0x345;
			} else {
				if (cVar1 == '\x02') {
					*puVar4 = 0x345;
				}
			}
		}
		puVar7[0x5591] = puVar7[0x5591] | 0x10;
		return;
	}
	*puVar5 = 0;
	return;
}
