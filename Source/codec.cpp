
void thunk_SHA1Clear(void)

{
	SHA1Clear();
	return;
}

void codec_init_key(int unused, char *pszPassword)

{
	bool bVar1;
	byte bVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	undefined *puVar6;
	char cVar7;
	ulonglong uVar8;
	undefined8 uVar9;
	longlong lVar10;
	char *pcVar11;
	byte *pbVar12;
	undefined8 in_r5;
	char cVar13;
	undefined uVar14;
	undefined8 in_r6;
	longlong lVar15;
	undefined8 in_r7;
	ulonglong uVar16;
	undefined8 in_r8;
	undefined8 in_r9;
	ulonglong uVar17;
	undefined8 in_r10;
	int n;
	int iVar18;
	int iVar19;
	int iVar20;
	longlong lVar21;
	longlong lVar22;
	byte local_f8[84];
	undefined local_a4;
	undefined uStack163;
	char acStack92[92];

	lVar10 = (longlong)(int)pszPassword;
	uVar8 = ZEXT48(register0x0000000c);
	puVar6 = (undefined *)(uVar8 - 0x130);
	*(BADSPACEBASE **)puVar6 = register0x0000000c;
	*(int *)(puVar6 + 0x148) = unused;
	uVar9 = vc_srand(0x58, (char)pszPassword, (char)in_r5, (char)in_r6, (char)in_r7, (char)in_r8, (char)in_r9,
	    (char)in_r10, puVar6[0xb], puVar6[0xf], *(undefined4 *)(puVar6 + 0x14));
	lVar21 = uVar8 - 0xa4;
	n = 0x87;
	do {
		uVar9 = vc_rand((char)uVar9, (char)lVar10, (char)in_r5, (char)in_r6, (char)in_r7, (char)in_r8, (char)in_r9,
		    (char)in_r10, puVar6[0xb], puVar6[0xf], *(undefined4 *)(puVar6 + 0x14));
		bVar1 = n != 0;
		*(undefined *)lVar21 = (char)uVar9;
		lVar21 = lVar21 + 1;
		n = n + -1;
	} while (bVar1);
	*(ushort *)(puVar6 + 0x8c) = CONCAT11(uStack163, local_a4);
	lVar10 = uVar8 - 0xe4;
	lVar21 = 8;
	n = 0;
	do {
		if (pszPassword[n] == '\0') {
			n = 0;
		}
		iVar18 = n + 1;
		pcVar11 = (char *)lVar10;
		*pcVar11 = pszPassword[n];
		if (pszPassword[iVar18] == '\0') {
			iVar18 = 0;
		}
		n = iVar18 + 1;
		pcVar11[1] = pszPassword[iVar18];
		if (pszPassword[n] == '\0') {
			n = 0;
		}
		iVar18 = n + 1;
		pcVar11[2] = pszPassword[n];
		if (pszPassword[iVar18] == '\0') {
			iVar18 = 0;
		}
		n = iVar18 + 1;
		pcVar11[3] = pszPassword[iVar18];
		if (pszPassword[n] == '\0') {
			n = 0;
		}
		iVar18 = n + 1;
		pcVar11[4] = pszPassword[n];
		if (pszPassword[iVar18] == '\0') {
			iVar18 = 0;
		}
		n = iVar18 + 1;
		pcVar11[5] = pszPassword[iVar18];
		if (pszPassword[n] == '\0') {
			n = 0;
		}
		iVar18 = n + 1;
		pcVar11[6] = pszPassword[n];
		if (pszPassword[iVar18] == '\0') {
			iVar18 = 0;
		}
		n = iVar18 + 1;
		pcVar11[7] = pszPassword[iVar18];
		lVar10 = lVar10 + 8;
		lVar21 = lVar21 + -1;
	} while (lVar21 != 0);
	SHA1Reset(0, *puVar6);
	// WARNING: Load size is inaccurate
	SHA1Calculate(0, puVar6 + 0x4c, *(char *)(puVar6 + 8));
	SHA1Clear(*puVar6);
	lVar22 = 0x11;
	uVar9 = 0x66666667;
	lVar10 = uVar8 - 0xa4;
	lVar21 = 0;
	do {
		iVar20 = (int)lVar21;
		pbVar12 = (byte *)lVar10;
		uVar3 = iVar20 / 0x14 + (iVar20 >> 0x1f);
		n = iVar20 + 1;
		uVar4 = n / 0x14 + (n >> 0x1f);
		iVar18 = iVar20 + 2;
		uVar5 = iVar18 / 0x14 + (iVar18 >> 0x1f);
		*pbVar12 = *pbVar12 ^ local_f8[iVar20 + (uVar3 + (uVar3 >> 0x1f)) * -0x14];
		iVar19 = iVar20 + 3;
		uVar3 = iVar19 / 0x14 + (iVar19 >> 0x1f);
		pbVar12[1] = pbVar12[1] ^ local_f8[n + (uVar4 + (uVar4 >> 0x1f)) * -0x14];
		n = iVar20 + 4;
		uVar4 = n / 0x14 + (n >> 0x1f);
		pbVar12[2] = pbVar12[2] ^ local_f8[iVar18 + (uVar5 + (uVar5 >> 0x1f)) * -0x14];
		iVar18 = iVar20 + 5;
		uVar5 = iVar18 / 0x14 + (iVar18 >> 0x1f);
		pbVar12[3] = pbVar12[3] ^ local_f8[iVar19 + (uVar3 + (uVar3 >> 0x1f)) * -0x14];
		iVar20 = iVar20 + 6;
		uVar3 = iVar20 / 0x14 + (iVar20 >> 0x1f);
		pbVar12[4] = pbVar12[4] ^ local_f8[n + (uVar4 + (uVar4 >> 0x1f)) * -0x14];
		n = (int)(lVar21 + 7);
		pbVar12[5] = pbVar12[5] ^ local_f8[iVar18 + (uVar5 + (uVar5 >> 0x1f)) * -0x14];
		uVar4 = n / 0x14 + (n >> 0x1f);
		uVar16 = (ulonglong)(uVar4 >> 0x1f);
		cVar13 = (char)((ulonglong)uVar4 + uVar16) * '\x14';
		pbVar12[6] = pbVar12[6] ^ local_f8[iVar20 + (uVar3 + (uVar3 >> 0x1f)) * -0x14];
		lVar15 = lVar21 + 7 + ((ulonglong)uVar4 + uVar16) * -0x14;
		lVar21 = lVar21 + 8;
		bVar2 = pbVar12[7];
		uVar17 = (ulonglong)bVar2;
		pbVar12[7] = bVar2 ^ local_f8[(int)lVar15];
		lVar10 = lVar10 + 8;
		lVar22 = lVar22 + -1;
	} while (lVar22 != 0);
	*(ushort *)(puVar6 + 0x8c) = CONCAT11(uStack163, local_a4);
	cVar7 = (char)(uVar8 - 0x130);
	ZeroMemory(cVar7 + 'L', 0x40, cVar13, (char)lVar15, (byte)(uVar4 >> 0x1f), 0x67, bVar2, (char)lVar21, puVar6[0xb],
	    puVar6[0xf], *(undefined4 *)(puVar6 + 0x14));
	ZeroMemory(cVar7 + '8', 0x14, cVar13, (char)lVar15, (char)uVar16, (char)uVar9, (char)uVar17, (char)lVar21,
	    puVar6[0xb], puVar6[0xf], *(undefined4 *)(puVar6 + 0x14));
	n = 0;
	do {
		SHA1Reset(n, *puVar6);
		uVar14 = 0;
		// WARNING: Load size is inaccurate
		SHA1Calculate(n, acStack92, *(char *)(puVar6 + 8));
		n = n + 1;
	} while (n < 3);
	ZeroMemory(cVar7 + -0x74, 0x88, uVar14, (char)lVar15, (char)uVar16, (char)uVar9, (char)uVar17, (char)lVar21,
	    puVar6[0xb], puVar6[0xf], *(undefined4 *)(puVar6 + 0x14));
	return;
}

int codec_decode(BYTE *pbSrcDst, DWORD size, char *pszPassword)

{
	longlong lVar1;
	byte bVar2;
	uint uVar3;
	uint uVar4;
	undefined *puVar5;
	char cVar6;
	int *piVar7;
	longlong lVar8;
	byte *pbVar9;
	longlong lVar10;
	int iVar11;
	undefined uVar12;
	longlong in_r6;
	undefined uVar13;
	ulonglong in_r7;
	undefined uVar14;
	longlong in_r8;
	undefined uVar15;
	ulonglong in_r9;
	undefined uVar16;
	ulonglong in_r10;
	int iVar17;
	undefined uVar18;
	int iVar19;
	int iVar20;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar21;
	undefined8 unaff_r26;
	int iVar22;
	undefined8 unaff_r27;
	longlong lVar23;
	undefined8 unaff_r28;
	uint uVar24;
	undefined8 unaff_r29;
	uint uVar25;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar26;
	byte local_b4[148];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar8 = (longlong)(int)pszPassword;
	lVar23 = (longlong)(int)pbSrcDst;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar1 = ZEXT48(register0x0000000c) - 0x110;
	puVar5 = (undefined *)lVar1;
	*(BADSPACEBASE **)puVar5 = register0x0000000c;
	codec_init_key(0, pszPassword, *puVar5);
	if ((8 < size) && (uVar24 = size - 8, (uVar24 & 0x3f) == 0)) {
		uVar25 = uVar24;
		while (true) {
			uVar12 = (undefined)lVar8;
			uVar13 = (undefined)in_r6;
			uVar14 = (undefined)in_r7;
			uVar15 = (undefined)in_r8;
			uVar16 = (undefined)in_r9;
			uVar18 = (undefined)in_r10;
			cVar6 = (char)lVar1;
			if (uVar25 == 0)
				break;
			CopyMemory(cVar6 + 'p', (char)lVar23, 0x40, uVar13, uVar14, uVar15, uVar16, uVar18, puVar5[0xb],
			    puVar5[0xf], *(undefined4 *)(puVar5 + 0x14));
			// WARNING: Load size is inaccurate
			SHA1Result(0, *(char *)(puVar5 + 8));
			lVar8 = ZEXT48(register0x0000000c) - 0xa0;
			lVar26 = 8;
			lVar10 = 0;
			do {
				iVar11 = (int)lVar10;
				iVar21 = iVar11 + 1;
				iVar22 = iVar11 + 2;
				pbVar9 = (byte *)lVar8;
				iVar20 = iVar11 + 3;
				uVar3 = iVar11 / 0x14 + (iVar11 >> 0x1f);
				iVar19 = iVar11 + 4;
				iVar17 = iVar11 + 5;
				in_r8 = lVar10 + 6;
				in_r6 = lVar10 + 7;
				lVar10 = lVar10 + 8;
				uVar4 = iVar21 / 0x14 + (iVar21 >> 0x1f);
				*pbVar9 = local_b4[iVar11 + (uVar3 + (uVar3 >> 0x1f)) * -0x14] ^ *pbVar9;
				uVar3 = iVar22 / 0x14 + (iVar22 >> 0x1f);
				pbVar9[1] = local_b4[iVar21 + (uVar4 + (uVar4 >> 0x1f)) * -0x14] ^ pbVar9[1];
				uVar4 = iVar20 / 0x14 + (iVar20 >> 0x1f);
				pbVar9[2] = local_b4[iVar22 + (uVar3 + (uVar3 >> 0x1f)) * -0x14] ^ pbVar9[2];
				uVar3 = iVar19 / 0x14 + (iVar19 >> 0x1f);
				pbVar9[3] = local_b4[iVar20 + (uVar4 + (uVar4 >> 0x1f)) * -0x14] ^ pbVar9[3];
				uVar4 = iVar17 / 0x14 + (iVar17 >> 0x1f);
				pbVar9[4] = local_b4[iVar19 + (uVar3 + (uVar3 >> 0x1f)) * -0x14] ^ pbVar9[4];
				iVar19 = (int)in_r8;
				in_r9 = (ulonglong)pbVar9[5];
				uVar3 = iVar19 / 0x14 + (iVar19 >> 0x1f);
				iVar11 = (int)in_r6;
				bVar2 = local_b4[iVar17 + (uVar4 + (uVar4 >> 0x1f)) * -0x14];
				in_r10 = (ulonglong)bVar2;
				pbVar9[5] = bVar2 ^ pbVar9[5];
				uVar4 = iVar11 / 0x14 + (iVar11 >> 0x1f);
				bVar2 = local_b4[iVar19 + (uVar3 + (uVar3 >> 0x1f)) * -0x14];
				in_r7 = (ulonglong)bVar2;
				pbVar9[6] = bVar2 ^ pbVar9[6];
				pbVar9[7] = local_b4[iVar11 + (uVar4 + (uVar4 >> 0x1f)) * -0x14] ^ pbVar9[7];
				lVar8 = lVar8 + 8;
				lVar26 = lVar26 + -1;
			} while (lVar26 != 0);
			uVar12 = 0;
			// WARNING: Load size is inaccurate
			SHA1Calculate(0, puVar5 + 0x70, *(char *)(puVar5 + 8));
			ZeroMemory(cVar6 + '\\', 0x14, uVar12, (char)in_r6, (char)in_r7, (char)in_r8, (char)in_r9, (char)in_r10,
			    puVar5[0xb], puVar5[0xf], *(undefined4 *)(puVar5 + 0x14));
			lVar8 = 0x40;
			CopyMemory((char)lVar23, cVar6 + 'p', 0x40, (char)in_r6, (char)in_r7, (char)in_r8, (char)in_r9,
			    (char)in_r10, puVar5[0xb], puVar5[0xf], *(undefined4 *)(puVar5 + 0x14));
			lVar23 = lVar23 + 0x40;
			uVar25 = uVar25 - 0x40;
		}
		ZeroMemory(cVar6 + 'p', 0x80, uVar12, uVar13, uVar14, uVar15, uVar16, uVar18, puVar5[0xb], puVar5[0xf],
		    *(undefined4 *)(puVar5 + 0x14));
		piVar7 = (int *)lVar23;
		if (*(char *)(piVar7 + 1) == '\0') {
			// WARNING: Load size is inaccurate
			SHA1Result(0, *(char *)(puVar5 + 8));
			if (*piVar7 == *(int *)(puVar5 + 0x48)) {
				bVar2 = *(byte *)((int)piVar7 + 5);
				thunk_SHA1Clear(*puVar5);
				return uVar24 - (0x40 - (uint)bVar2);
			}
			ZeroMemory(cVar6 + 'H', 0x14, uVar12, uVar13, uVar14, uVar15, uVar16, uVar18, puVar5[0xb], puVar5[0xf],
			    *(undefined4 *)(puVar5 + 0x14));
		}
		thunk_SHA1Clear(*puVar5);
	}
	return 0;
}

DWORD codec_get_encoded_len(DWORD dwSrcBytes)

{
	if ((dwSrcBytes & 0x3f) != 0) {
		dwSrcBytes = dwSrcBytes + (0x40 - (dwSrcBytes & 0x3f));
	}
	return dwSrcBytes + 8;
}

void codec_encode(BYTE *pbSrcDst, DWORD size, int size_64, char *pszPassword)

{
	longlong lVar1;
	byte bVar2;
	byte bVar3;
	byte bVar4;
	byte bVar5;
	uint uVar6;
	uint uVar7;
	undefined *puVar8;
	char cVar9;
	DWORD DVar11;
	longlong lVar10;
	byte *pbVar12;
	longlong lVar13;
	int iVar14;
	char cVar16;
	ulonglong uVar15;
	longlong lVar17;
	undefined uVar18;
	ulonglong in_r7;
	undefined uVar19;
	longlong in_r8;
	undefined uVar20;
	ulonglong in_r9;
	undefined uVar21;
	ulonglong in_r10;
	int iVar22;
	undefined uVar23;
	int iVar24;
	int iVar25;
	undefined8 unaff_r24;
	ulonglong uVar26;
	undefined8 unaff_r25;
	int iVar27;
	undefined8 unaff_r26;
	int iVar28;
	undefined8 unaff_r27;
	longlong lVar29;
	undefined4 *puVar30;
	undefined8 unaff_r28;
	ulonglong uVar31;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar32;
	byte local_b4[148];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar17 = (longlong)(int)pszPassword;
	uVar31 = SEXT48((int)size);
	lVar29 = (longlong)(int)pbSrcDst;
	iVar14 = 0x100f8fd0;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar1 = ZEXT48(register0x0000000c) - 0x110;
	puVar8 = (undefined *)lVar1;
	*(BADSPACEBASE **)puVar8 = register0x0000000c;
	uVar15 = (longlong)size_64;
	DVar11 = codec_get_encoded_len(size, *puVar8);
	if (((longlong)size_64 & 0xffffffffU) != (ulonglong)DVar11) {
		app_fatal(*(char **)(iVar14 + -0x6578));
	}
	codec_init_key(1, pszPassword, *puVar8);
	uVar26 = 0;
	while (true) {
		uVar18 = (undefined)lVar17;
		uVar19 = (undefined)in_r7;
		uVar20 = (undefined)in_r8;
		uVar21 = (undefined)in_r9;
		uVar23 = (undefined)in_r10;
		cVar9 = (char)lVar1;
		if ((uVar31 & 0xffffffff) == 0)
			break;
		uVar26 = uVar31;
		if (0x3f < (uVar31 & 0xffffffff)) {
			uVar26 = 0x40;
		}
		cVar16 = (char)uVar26;
		cVar16 = cVar16;
		CopyMemory(cVar9 + 'p', (char)lVar29, cVar16, uVar18, uVar19, uVar20, uVar21, uVar23, puVar8[0xb], puVar8[0xf],
		    *(undefined4 *)(puVar8 + 0x14));
		if ((uVar26 & 0xffffffff) < 0x40) {
			ZeroMemory(cVar9 + 'p' + cVar16, '@' - cVar16, cVar16, uVar18, uVar19, uVar20, uVar21, uVar23, puVar8[0xb],
			    puVar8[0xf], *(undefined4 *)(puVar8 + 0x14));
		}
		// WARNING: Load size is inaccurate
		SHA1Result(0, *(char *)(puVar8 + 8));
		// WARNING: Load size is inaccurate
		SHA1Calculate(0, puVar8 + 0x70, *(char *)(puVar8 + 8));
		lVar10 = ZEXT48(register0x0000000c) - 0xa0;
		lVar32 = 8;
		lVar13 = 0;
		do {
			iVar14 = (int)lVar13;
			iVar27 = iVar14 + 1;
			iVar28 = iVar14 + 2;
			pbVar12 = (byte *)lVar10;
			iVar25 = iVar14 + 3;
			uVar6 = iVar14 / 0x14 + (iVar14 >> 0x1f);
			iVar24 = iVar14 + 4;
			iVar22 = iVar14 + 5;
			in_r8 = lVar13 + 6;
			lVar17 = lVar13 + 7;
			lVar13 = lVar13 + 8;
			uVar7 = iVar27 / 0x14 + (iVar27 >> 0x1f);
			*pbVar12 = local_b4[iVar14 + (uVar6 + (uVar6 >> 0x1f)) * -0x14] ^ *pbVar12;
			uVar6 = iVar28 / 0x14 + (iVar28 >> 0x1f);
			pbVar12[1] = local_b4[iVar27 + (uVar7 + (uVar7 >> 0x1f)) * -0x14] ^ pbVar12[1];
			uVar7 = iVar25 / 0x14 + (iVar25 >> 0x1f);
			pbVar12[2] = local_b4[iVar28 + (uVar6 + (uVar6 >> 0x1f)) * -0x14] ^ pbVar12[2];
			uVar6 = iVar24 / 0x14 + (iVar24 >> 0x1f);
			pbVar12[3] = local_b4[iVar25 + (uVar7 + (uVar7 >> 0x1f)) * -0x14] ^ pbVar12[3];
			uVar7 = iVar22 / 0x14 + (iVar22 >> 0x1f);
			pbVar12[4] = local_b4[iVar24 + (uVar6 + (uVar6 >> 0x1f)) * -0x14] ^ pbVar12[4];
			iVar24 = (int)in_r8;
			bVar2 = pbVar12[5];
			in_r9 = (ulonglong)bVar2;
			uVar6 = iVar24 / 0x14 + (iVar24 >> 0x1f);
			iVar14 = (int)lVar17;
			bVar3 = local_b4[iVar22 + (uVar7 + (uVar7 >> 0x1f)) * -0x14];
			in_r10 = (ulonglong)bVar3;
			pbVar12[5] = bVar3 ^ bVar2;
			uVar7 = iVar14 / 0x14 + (iVar14 >> 0x1f);
			bVar4 = local_b4[iVar24 + (uVar6 + (uVar6 >> 0x1f)) * -0x14];
			in_r7 = (ulonglong)bVar4;
			pbVar12[6] = bVar4 ^ pbVar12[6];
			bVar5 = local_b4[iVar14 + (uVar7 + (uVar7 >> 0x1f)) * -0x14];
			pbVar12[7] = bVar5 ^ pbVar12[7];
			lVar10 = lVar10 + 8;
			lVar32 = lVar32 + -1;
		} while (lVar32 != 0);
		ZeroMemory(cVar9 + '\\', 0x14, bVar5, (char)lVar17, bVar4, (char)in_r8, bVar2, bVar3, puVar8[0xb], puVar8[0xf],
		    *(undefined4 *)(puVar8 + 0x14));
		uVar15 = 0x40;
		CopyMemory((char)lVar29, cVar9 + 'p', 0x40, (char)lVar17, (char)in_r7, (char)in_r8, (char)in_r9, (char)in_r10,
		    puVar8[0xb], puVar8[0xf], *(undefined4 *)(puVar8 + 0x14));
		lVar29 = lVar29 + 0x40;
		uVar31 = uVar31 - uVar26;
	}
	ZeroMemory(cVar9 + 'p', 0x80, (char)uVar15, uVar18, uVar19, uVar20, uVar21, uVar23, puVar8[0xb], puVar8[0xf],
	    *(undefined4 *)(puVar8 + 0x14));
	// WARNING: Load size is inaccurate
	SHA1Result(0, *(char *)(puVar8 + 8));
	puVar30 = (undefined4 *)lVar29;
	*puVar30 = *(undefined4 *)(puVar8 + 0x48);
	*(undefined *)(puVar30 + 1) = 0;
	*(undefined *)((int)puVar30 + 5) = (char)uVar26;
	*(undefined2 *)((int)puVar30 + 6) = 0;
	thunk_SHA1Clear(*puVar8);
	return;
}
