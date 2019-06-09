
void SHA1Clear(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_100a42a0(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void codec_init_key(undefined4 param_1, int param_2, char param_3, char param_4, char param_5, char param_6, char param_7, char param_8, undefined4 param_9, undefined param_10,
    undefined4 param_11)

{
	bool bVar1;
	byte bVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	int iVar6;
	ulonglong uVar7;
	undefined8 uVar8;
	longlong lVar9;
	undefined *puVar10;
	undefined uVar12;
	byte *pbVar11;
	longlong lVar13;
	longlong lVar14;
	undefined uVar15;
	char cVar16;
	undefined uVar17;
	undefined uVar19;
	longlong lVar18;
	undefined uVar21;
	ulonglong uVar20;
	undefined uVar22;
	longlong lVar23;
	undefined uVar25;
	ulonglong uVar24;
	longlong lVar26;
	undefined uVar31;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	longlong lVar32;
	longlong lVar33;
	byte local_f8[84];
	undefined local_a4;
	undefined uStack163;

	lVar26 = (longlong)param_8;
	lVar23 = (longlong)param_7;
	lVar18 = (longlong)param_6;
	lVar14 = (longlong)param_5;
	lVar33 = (longlong)param_4;
	lVar13 = (longlong)param_3;
	lVar9 = (longlong)param_2;
	uVar7 = ZEXT48(register0x0000000c);
	iVar6 = (int)(uVar7 - 0x130);
	*(BADSPACEBASE **)iVar6 = register0x0000000c;
	*(undefined4 *)(iVar6 + 0x148) = param_1;
	uVar8 = vc_srand(0x58, (char)param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined *)(iVar6 + 0xb), *(undefined *)(iVar6 + 0xf),
	    *(undefined4 *)(iVar6 + 0x14));
	lVar32 = uVar7 - 0xa4;
	iVar27 = 0x87;
	do {
		uVar8 = vc_rand((char)uVar8, (char)lVar9, (char)lVar13, (char)lVar33, (char)lVar14, (char)lVar18,
		    (char)lVar23, (char)lVar26, *(undefined *)(iVar6 + 0xb),
		    *(undefined *)(iVar6 + 0xf), *(undefined4 *)(iVar6 + 0x14));
		uVar31 = (undefined)lVar26;
		uVar25 = (undefined)lVar23;
		uVar22 = (undefined)lVar18;
		uVar21 = (undefined)lVar14;
		uVar19 = (undefined)lVar33;
		bVar1 = iVar27 != 0;
		*(undefined *)lVar32 = (char)uVar8;
		lVar32 = lVar32 + 1;
		iVar27 = iVar27 + -1;
	} while (bVar1);
	*(undefined2 *)(iVar6 + 0x8c) = CONCAT11(uStack163, local_a4);
	lVar9 = uVar7 - 0xe4;
	lVar33 = 8;
	lVar13 = 0;
	cVar16 = '\0';
	do {
		if (*(char *)(param_2 + (int)lVar13) == '\0') {
			lVar13 = 0;
		}
		lVar14 = lVar13 + 1;
		puVar10 = (undefined *)lVar9;
		*puVar10 = *(undefined *)(param_2 + (int)lVar13);
		if (*(char *)(param_2 + (int)lVar14) == '\0') {
			lVar14 = 0;
		}
		lVar13 = lVar14 + 1;
		puVar10[1] = *(undefined *)(param_2 + (int)lVar14);
		if (*(char *)(param_2 + (int)lVar13) == '\0') {
			lVar13 = 0;
		}
		lVar14 = lVar13 + 1;
		puVar10[2] = *(undefined *)(param_2 + (int)lVar13);
		if (*(char *)(param_2 + (int)lVar14) == '\0') {
			lVar14 = 0;
		}
		lVar13 = lVar14 + 1;
		puVar10[3] = *(undefined *)(param_2 + (int)lVar14);
		if (*(char *)(param_2 + (int)lVar13) == '\0') {
			lVar13 = 0;
		}
		lVar14 = lVar13 + 1;
		puVar10[4] = *(undefined *)(param_2 + (int)lVar13);
		if (*(char *)(param_2 + (int)lVar14) == '\0') {
			lVar14 = 0;
		}
		lVar13 = lVar14 + 1;
		puVar10[5] = *(undefined *)(param_2 + (int)lVar14);
		if (*(char *)(param_2 + (int)lVar13) == '\0') {
			lVar13 = 0;
		}
		lVar14 = lVar13 + 1;
		puVar10[6] = *(undefined *)(param_2 + (int)lVar13);
		if (*(char *)(param_2 + (int)lVar14) == '\0') {
			lVar14 = 0;
		}
		lVar13 = lVar14 + 1;
		cVar16 = cVar16 + '\a';
		puVar10[7] = *(undefined *)(param_2 + (int)lVar14);
		lVar9 = lVar9 + 8;
		lVar33 = lVar33 + -1;
	} while (lVar33 != 0);
	FUN_100a43b4(0, (char)lVar13, cVar16, uVar19, uVar21, uVar22, uVar25, uVar31, *(undefined4 *)(iVar6 + 8));
	uVar15 = (undefined)(uVar7 - 0xe4);
	uVar17 = (undefined)(uVar7 - 0xf8);
	uVar12 = SHA1Calculate(0, uVar7 - 0xe4, (uint *)(uVar7 - 0xf8), uVar19, uVar21, uVar22, uVar25, uVar31,
	    *(undefined4 *)(iVar6 + 8));
	FUN_100a42a0(uVar12, uVar15, uVar17, uVar19, uVar21, uVar22, uVar25, uVar31, *(undefined4 *)(iVar6 + 8));
	lVar33 = 0x11;
	uVar8 = 0x66666667;
	lVar9 = uVar7 - 0xa4;
	lVar13 = 0;
	do {
		iVar30 = (int)lVar13;
		pbVar11 = (byte *)lVar9;
		uVar3 = iVar30 / 0x14 + (iVar30 >> 0x1f);
		iVar27 = iVar30 + 1;
		uVar4 = iVar27 / 0x14 + (iVar27 >> 0x1f);
		iVar28 = iVar30 + 2;
		uVar5 = iVar28 / 0x14 + (iVar28 >> 0x1f);
		*pbVar11 = *pbVar11 ^ local_f8[iVar30 + (uVar3 + (uVar3 >> 0x1f)) * -0x14];
		iVar29 = iVar30 + 3;
		uVar3 = iVar29 / 0x14 + (iVar29 >> 0x1f);
		pbVar11[1] = pbVar11[1] ^ local_f8[iVar27 + (uVar4 + (uVar4 >> 0x1f)) * -0x14];
		iVar27 = iVar30 + 4;
		uVar4 = iVar27 / 0x14 + (iVar27 >> 0x1f);
		pbVar11[2] = pbVar11[2] ^ local_f8[iVar28 + (uVar5 + (uVar5 >> 0x1f)) * -0x14];
		iVar28 = iVar30 + 5;
		uVar5 = iVar28 / 0x14 + (iVar28 >> 0x1f);
		pbVar11[3] = pbVar11[3] ^ local_f8[iVar29 + (uVar3 + (uVar3 >> 0x1f)) * -0x14];
		iVar30 = iVar30 + 6;
		uVar3 = iVar30 / 0x14 + (iVar30 >> 0x1f);
		pbVar11[4] = pbVar11[4] ^ local_f8[iVar27 + (uVar4 + (uVar4 >> 0x1f)) * -0x14];
		iVar27 = (int)(lVar13 + 7);
		pbVar11[5] = pbVar11[5] ^ local_f8[iVar28 + (uVar5 + (uVar5 >> 0x1f)) * -0x14];
		uVar4 = iVar27 / 0x14 + (iVar27 >> 0x1f);
		uVar20 = (ulonglong)(uVar4 >> 0x1f);
		lVar14 = ((ulonglong)uVar4 + uVar20) * 0x14;
		pbVar11[6] = pbVar11[6] ^ local_f8[iVar30 + (uVar3 + (uVar3 >> 0x1f)) * -0x14];
		lVar18 = lVar13 + 7 + ((ulonglong)uVar4 + uVar20) * -0x14;
		lVar13 = lVar13 + 8;
		bVar2 = pbVar11[7];
		uVar24 = (ulonglong)bVar2;
		pbVar11[7] = bVar2 ^ local_f8[(int)lVar18];
		lVar9 = lVar9 + 8;
		lVar33 = lVar33 + -1;
	} while (lVar33 != 0);
	*(undefined2 *)(iVar6 + 0x8c) = CONCAT11(uStack163, local_a4);
	cVar16 = (char)(uVar7 - 0x130);
	memset(cVar16 + 'L', 0x40, (char)lVar14, (char)lVar18, (byte)(uVar4 >> 0x1f), 0x67, bVar2,
	    (char)lVar13, *(undefined *)(iVar6 + 0xb), *(undefined *)(iVar6 + 0xf),
	    *(undefined4 *)(iVar6 + 0x14));
	lVar9 = 0x14;
	memset(cVar16 + '8', 0x14, (char)lVar14, (char)lVar18, (char)uVar20, (char)uVar8, (char)uVar24,
	    (char)lVar13, *(undefined *)(iVar6 + 0xb), *(undefined *)(iVar6 + 0xf),
	    *(undefined4 *)(iVar6 + 0x14));
	iVar27 = 0;
	do {
		FUN_100a43b4(iVar27, (char)lVar9, (char)lVar14, (char)lVar18, (char)uVar20, (char)uVar8, (char)uVar24,
		    (char)lVar13, *(undefined4 *)(iVar6 + 8));
		lVar14 = 0;
		lVar9 = uVar7 - 0x5c;
		SHA1Calculate(iVar27, uVar7 - 0x5c, (uint *)0x0, (char)lVar18, (char)uVar20, (char)uVar8, (char)uVar24,
		    (char)lVar13, *(undefined4 *)(iVar6 + 8));
		iVar27 = iVar27 + 1;
	} while (iVar27 < 3);
	memset(cVar16 + -0x74, 0x88, (char)lVar14, (char)lVar18, (char)uVar20, (char)uVar8, (char)uVar24,
	    (char)lVar13, *(undefined *)(iVar6 + 0xb), *(undefined *)(iVar6 + 0xf),
	    *(undefined4 *)(iVar6 + 0x14));
	return;
}

longlong codec_decode(uint *param_1, ulonglong param_2, int param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	uint uVar4;
	uint uVar5;
	undefined *puVar6;
	char cVar7;
	int *piVar8;
	ulonglong uVar9;
	longlong lVar10;
	byte *pbVar11;
	undefined uVar12;
	longlong lVar13;
	int iVar14;
	undefined uVar15;
	undefined uVar16;
	longlong lVar17;
	undefined uVar18;
	ulonglong uVar19;
	undefined uVar20;
	longlong lVar21;
	undefined uVar22;
	ulonglong uVar23;
	undefined uVar24;
	int iVar26;
	ulonglong uVar25;
	undefined uVar27;
	int iVar28;
	int iVar29;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar30;
	undefined8 unaff_r26;
	int iVar31;
	undefined8 unaff_r27;
	longlong lVar32;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	ulonglong uVar33;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar34;
	byte local_b4[148];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar25 = SEXT18(param_8);
	uVar23 = SEXT18(param_7);
	lVar21 = (longlong)param_6;
	uVar19 = SEXT18(param_5);
	lVar17 = (longlong)param_4;
	lVar10 = (longlong)param_3;
	lVar32 = (longlong)(int)param_1;
	uVar9 = ZEXT48(register0x0000000c);
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	puVar6 = (undefined *)(uVar9 - 0x110);
	*(BADSPACEBASE **)puVar6 = register0x0000000c;
	codec_init_key(0, param_3, (char)param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined4 *)(puVar6 + 8), puVar6[0xf], *(undefined4 *)(puVar6 + 0x18));
	if ((8 < (param_2 & 0xffffffff)) && (param_2 = param_2 - 8, (param_2 & 0x3f) == 0)) {
		uVar33 = param_2;
		while (true) {
			uVar16 = (undefined)lVar10;
			uVar18 = (undefined)lVar17;
			uVar20 = (undefined)uVar19;
			uVar22 = (undefined)lVar21;
			uVar24 = (undefined)uVar23;
			uVar27 = (undefined)uVar25;
			cVar7 = (char)(uVar9 - 0x110);
			if ((uVar33 & 0xffffffff) == 0)
				break;
			memcpy(cVar7 + 'p', (char)lVar32, 0x40, uVar18, uVar20, uVar22, uVar24, uVar27, puVar6[0xb],
			    puVar6[0xf], *(undefined4 *)(puVar6 + 0x14));
			SHA1Result(0, puVar6 + 0x5c, *puVar6);
			lVar10 = uVar9 - 0xa0;
			lVar34 = 8;
			lVar13 = 0;
			do {
				iVar14 = (int)lVar13;
				iVar30 = iVar14 + 1;
				iVar31 = iVar14 + 2;
				pbVar11 = (byte *)lVar10;
				iVar29 = iVar14 + 3;
				uVar4 = iVar14 / 0x14 + (iVar14 >> 0x1f);
				iVar28 = iVar14 + 4;
				iVar26 = iVar14 + 5;
				lVar21 = lVar13 + 6;
				lVar17 = lVar13 + 7;
				lVar13 = lVar13 + 8;
				uVar5 = iVar30 / 0x14 + (iVar30 >> 0x1f);
				*pbVar11 = local_b4[iVar14 + (uVar4 + (uVar4 >> 0x1f)) * -0x14] ^ *pbVar11;
				uVar4 = iVar31 / 0x14 + (iVar31 >> 0x1f);
				pbVar11[1] = local_b4[iVar30 + (uVar5 + (uVar5 >> 0x1f)) * -0x14] ^ pbVar11[1];
				uVar5 = iVar29 / 0x14 + (iVar29 >> 0x1f);
				pbVar11[2] = local_b4[iVar31 + (uVar4 + (uVar4 >> 0x1f)) * -0x14] ^ pbVar11[2];
				uVar4 = iVar28 / 0x14 + (iVar28 >> 0x1f);
				pbVar11[3] = local_b4[iVar29 + (uVar5 + (uVar5 >> 0x1f)) * -0x14] ^ pbVar11[3];
				uVar5 = iVar26 / 0x14 + (iVar26 >> 0x1f);
				pbVar11[4] = local_b4[iVar28 + (uVar4 + (uVar4 >> 0x1f)) * -0x14] ^ pbVar11[4];
				iVar28 = (int)lVar21;
				bVar1 = pbVar11[5];
				uVar23 = (ulonglong)bVar1;
				uVar4 = iVar28 / 0x14 + (iVar28 >> 0x1f);
				iVar14 = (int)lVar17;
				bVar2 = local_b4[iVar26 + (uVar5 + (uVar5 >> 0x1f)) * -0x14];
				uVar25 = (ulonglong)bVar2;
				pbVar11[5] = bVar2 ^ bVar1;
				uVar5 = iVar14 / 0x14 + (iVar14 >> 0x1f);
				bVar3 = local_b4[iVar28 + (uVar4 + (uVar4 >> 0x1f)) * -0x14];
				uVar19 = (ulonglong)bVar3;
				pbVar11[6] = bVar3 ^ pbVar11[6];
				pbVar11[7] = local_b4[iVar14 + (uVar5 + (uVar5 >> 0x1f)) * -0x14] ^ pbVar11[7];
				lVar10 = lVar10 + 8;
				lVar34 = lVar34 + -1;
			} while (lVar34 != 0);
			uVar16 = 0;
			SHA1Calculate(0, uVar9 - 0xa0, (uint *)0x0, (char)lVar17, bVar3, (char)lVar21, bVar1, bVar2,
			    *(undefined4 *)(puVar6 + 8));
			memset(cVar7 + '\\', 0x14, uVar16, (char)lVar17, (char)uVar19, (char)lVar21, (char)uVar23,
			    (char)uVar25, puVar6[0xb], puVar6[0xf], *(undefined4 *)(puVar6 + 0x14));
			lVar10 = 0x40;
			memcpy((char)lVar32, cVar7 + 'p', 0x40, (char)lVar17, (char)uVar19, (char)lVar21, (char)uVar23,
			    (char)uVar25, puVar6[0xb], puVar6[0xf], *(undefined4 *)(puVar6 + 0x14));
			lVar32 = lVar32 + 0x40;
			uVar33 = uVar33 - 0x40;
		}
		uVar15 = 0x80;
		uVar12 = memset(cVar7 + 'p', 0x80, uVar16, uVar18, uVar20, uVar22, uVar24, uVar27, puVar6[0xb],
		    puVar6[0xf], *(undefined4 *)(puVar6 + 0x14));
		piVar8 = (int *)lVar32;
		if (*(char *)(piVar8 + 1) == '\0') {
			uVar12 = (undefined)(uVar9 - 200);
			SHA1Result(0, (int)(uVar9 - 200), *puVar6);
			if (*piVar8 == *(int *)(puVar6 + 0x48)) {
				bVar1 = *(byte *)((int)piVar8 + 5);
				SHA1Clear((char)*piVar8, uVar12, uVar16, uVar18, uVar20, uVar22, uVar24, uVar27,
				    *(undefined4 *)(puVar6 + 8));
				return param_2 - (0x40 - (ulonglong)bVar1);
			}
			uVar15 = 0x14;
			uVar12 = memset(cVar7 + 'H', 0x14, uVar16, uVar18, uVar20, uVar22, uVar24, uVar27, puVar6[0xb],
			    puVar6[0xf], *(undefined4 *)(puVar6 + 0x14));
		}
		SHA1Clear(uVar12, uVar15, uVar16, uVar18, uVar20, uVar22, uVar24, uVar27, *(undefined4 *)(puVar6 + 8));
	}
	return 0;
}

longlong codec_get_encoded_len(ulonglong param_1)

{
	if ((param_1 & 0x3f) != 0) {
		param_1 = param_1 + (0x40 - (ulonglong)((uint)param_1 & 0x3f));
	}
	return param_1 + 8;
}

void codec_encode(uint *param_1, ulonglong param_2, ulonglong param_3, longlong param_4,
    ulonglong param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	byte bVar4;
	undefined4 uVar5;
	uint uVar6;
	uint uVar7;
	undefined *puVar8;
	char cVar9;
	ulonglong uVar10;
	undefined **ppuVar11;
	ulonglong uVar12;
	longlong lVar13;
	byte *pbVar14;
	longlong lVar15;
	int iVar16;
	undefined uVar17;
	char cVar19;
	ulonglong uVar18;
	undefined uVar20;
	longlong lVar21;
	undefined uVar22;
	undefined uVar23;
	longlong lVar24;
	undefined uVar25;
	ulonglong uVar26;
	undefined uVar27;
	int iVar29;
	ulonglong uVar28;
	undefined uVar30;
	int iVar31;
	int iVar32;
	undefined8 unaff_r24;
	ulonglong uVar33;
	undefined8 unaff_r25;
	int iVar34;
	undefined8 unaff_r26;
	int iVar35;
	undefined8 unaff_r27;
	longlong lVar36;
	undefined4 *puVar37;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar38;
	byte local_b4[148];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar28 = SEXT48(param_8);
	uVar26 = SEXT48(param_7);
	lVar24 = (longlong)param_6;
	lVar36 = (longlong)(int)param_1;
	uVar10 = ZEXT48(register0x0000000c);
	ppuVar11 = &toc;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	puVar8 = (undefined *)(uVar10 - 0x110);
	*(BADSPACEBASE **)puVar8 = register0x0000000c;
	uVar33 = param_2;
	uVar18 = param_3;
	lVar21 = param_4;
	uVar12 = codec_get_encoded_len(param_2, *puVar8);
	if ((param_3 & 0xffffffff) != (uVar12 & 0xffffffff)) {
		app_fatal((int)ppuVar11[-0x195e], uVar33, uVar18, lVar21, param_5, (int)lVar24, (int)uVar26,
		    (int)uVar28, *(undefined4 *)(puVar8 + 8), puVar8[0xf], *(undefined4 *)(puVar8 + 0x18),
		    *(undefined4 *)(puVar8 + 0x1c), *(undefined4 *)(puVar8 + 0x20),
		    *(undefined4 *)(puVar8 + 0x24), *(undefined4 *)(puVar8 + 0x28),
		    *(undefined4 *)(puVar8 + 0x2c), *(undefined4 *)(puVar8 + 0x30),
		    *(undefined4 *)(puVar8 + 0x34));
	}
	codec_init_key(1, (int)param_4, (char)uVar18, (char)lVar21, (char)param_5, (char)lVar24, (char)uVar26,
	    (char)uVar28, *(undefined4 *)(puVar8 + 8), puVar8[0xf], *(undefined4 *)(puVar8 + 0x18));
	uVar33 = 0;
	while (true) {
		uVar20 = (undefined)uVar18;
		uVar22 = (undefined)lVar21;
		uVar23 = (undefined)param_5;
		uVar25 = (undefined)lVar24;
		uVar27 = (undefined)uVar26;
		uVar30 = (undefined)uVar28;
		cVar9 = (char)(uVar10 - 0x110);
		if ((param_2 & 0xffffffff) == 0)
			break;
		uVar33 = param_2;
		if (0x3f < (param_2 & 0xffffffff)) {
			uVar33 = 0x40;
		}
		cVar19 = (char)uVar33;
		cVar19 = cVar19;
		memcpy(cVar9 + 'p', (char)lVar36, cVar19, uVar22, uVar23, uVar25, uVar27, uVar30, puVar8[0xb],
		    puVar8[0xf], *(undefined4 *)(puVar8 + 0x14));
		if ((uVar33 & 0xffffffff) < 0x40) {
			memset(cVar9 + 'p' + cVar19, '@' - cVar19, cVar19, uVar22, uVar23, uVar25, uVar27, uVar30,
			    puVar8[0xb], puVar8[0xf], *(undefined4 *)(puVar8 + 0x14));
		}
		SHA1Result(0, puVar8 + 0x5c, *puVar8);
		SHA1Calculate(0, uVar10 - 0xa0, (uint *)0x0, uVar22, uVar23, uVar25, uVar27, uVar30,
		    *(undefined4 *)(puVar8 + 8));
		lVar13 = uVar10 - 0xa0;
		lVar38 = 8;
		lVar15 = 0;
		do {
			iVar16 = (int)lVar15;
			iVar34 = iVar16 + 1;
			iVar35 = iVar16 + 2;
			pbVar14 = (byte *)lVar13;
			iVar32 = iVar16 + 3;
			uVar6 = iVar16 / 0x14 + (iVar16 >> 0x1f);
			iVar31 = iVar16 + 4;
			iVar29 = iVar16 + 5;
			lVar24 = lVar15 + 6;
			lVar21 = lVar15 + 7;
			lVar15 = lVar15 + 8;
			uVar7 = iVar34 / 0x14 + (iVar34 >> 0x1f);
			*pbVar14 = local_b4[iVar16 + (uVar6 + (uVar6 >> 0x1f)) * -0x14] ^ *pbVar14;
			uVar6 = iVar35 / 0x14 + (iVar35 >> 0x1f);
			pbVar14[1] = local_b4[iVar34 + (uVar7 + (uVar7 >> 0x1f)) * -0x14] ^ pbVar14[1];
			uVar7 = iVar32 / 0x14 + (iVar32 >> 0x1f);
			pbVar14[2] = local_b4[iVar35 + (uVar6 + (uVar6 >> 0x1f)) * -0x14] ^ pbVar14[2];
			uVar6 = iVar31 / 0x14 + (iVar31 >> 0x1f);
			pbVar14[3] = local_b4[iVar32 + (uVar7 + (uVar7 >> 0x1f)) * -0x14] ^ pbVar14[3];
			uVar7 = iVar29 / 0x14 + (iVar29 >> 0x1f);
			pbVar14[4] = local_b4[iVar31 + (uVar6 + (uVar6 >> 0x1f)) * -0x14] ^ pbVar14[4];
			iVar31 = (int)lVar24;
			bVar1 = pbVar14[5];
			uVar26 = (ulonglong)bVar1;
			uVar6 = iVar31 / 0x14 + (iVar31 >> 0x1f);
			iVar16 = (int)lVar21;
			bVar2 = local_b4[iVar29 + (uVar7 + (uVar7 >> 0x1f)) * -0x14];
			uVar28 = (ulonglong)bVar2;
			pbVar14[5] = bVar2 ^ bVar1;
			uVar7 = iVar16 / 0x14 + (iVar16 >> 0x1f);
			bVar3 = local_b4[iVar31 + (uVar6 + (uVar6 >> 0x1f)) * -0x14];
			param_5 = (ulonglong)bVar3;
			pbVar14[6] = bVar3 ^ pbVar14[6];
			bVar4 = local_b4[iVar16 + (uVar7 + (uVar7 >> 0x1f)) * -0x14];
			pbVar14[7] = bVar4 ^ pbVar14[7];
			lVar13 = lVar13 + 8;
			lVar38 = lVar38 + -1;
		} while (lVar38 != 0);
		memset(cVar9 + '\\', 0x14, bVar4, (char)lVar21, bVar3, (char)lVar24, bVar1, bVar2, puVar8[0xb],
		    puVar8[0xf], *(undefined4 *)(puVar8 + 0x14));
		uVar18 = 0x40;
		memcpy((char)lVar36, cVar9 + 'p', 0x40, (char)lVar21, (char)param_5, (char)lVar24, (char)uVar26,
		    (char)uVar28, puVar8[0xb], puVar8[0xf], *(undefined4 *)(puVar8 + 0x14));
		lVar36 = lVar36 + 0x40;
		param_2 = param_2 - uVar33;
	}
	memset(cVar9 + 'p', 0x80, uVar20, uVar22, uVar23, uVar25, uVar27, uVar30, puVar8[0xb], puVar8[0xf],
	    *(undefined4 *)(puVar8 + 0x14));
	uVar17 = (undefined)(uVar10 - 200);
	SHA1Result(0, (int)(uVar10 - 200), *puVar8);
	uVar5 = *(undefined4 *)(puVar8 + 0x48);
	puVar37 = (undefined4 *)lVar36;
	*puVar37 = uVar5;
	*(undefined *)(puVar37 + 1) = 0;
	*(undefined *)((int)puVar37 + 5) = (char)uVar33;
	*(undefined2 *)((int)puVar37 + 6) = 0;
	SHA1Clear((char)uVar5, uVar17, uVar20, uVar22, uVar23, uVar25, uVar27, uVar30,
	    *(undefined4 *)(puVar8 + 8));
	return;
}
