
ulonglong BESwap_1003cdc8(byte *param_1)

{
	return (ulonglong)param_1[3] << 0x18 | (ulonglong)param_1[2] << 0x10 | (ulonglong)param_1[1] << 8 | (ulonglong)*param_1;
}

ulonglong BESwap_1003cdd0(int param_1, int param_2)

{
	byte *pbVar1;

	pbVar1 = (byte *)(param_1 + param_2 * 4);
	return (ulonglong)pbVar1[3] << 0x18 | (ulonglong)pbVar1[2] << 0x10 | (ulonglong)pbVar1[1] << 8 | (ulonglong)*pbVar1;
}

longlong BESwap_1003cddc(int param_1, int param_2)

{
	byte *pbVar1;
	byte *pbVar2;

	pbVar1 = (byte *)(param_1 + param_2 * 4);
	pbVar2 = (byte *)(param_1 + (param_2 + 1) * 4);
	return ((ulonglong)pbVar2[3] << 0x18 | (ulonglong)pbVar2[2] << 0x10 | (ulonglong)pbVar2[1] << 8 | (ulonglong)*pbVar2) - ((ulonglong)pbVar1[3] << 0x18 | (ulonglong)pbVar1[2] << 0x10 | (ulonglong)pbVar1[1] << 8 | (ulonglong)*pbVar1);
}

longlong BESwap_1003cdf8(longlong param_1, int param_2, int *param_3)

{
	byte *pbVar1;
	ulonglong uVar2;

	pbVar1 = (byte *)((int)param_1 + param_2 * 4);
	uVar2 = (ulonglong)pbVar1[3] << 0x18 | (ulonglong)pbVar1[2] << 0x10 | (ulonglong)pbVar1[1] << 8 | (ulonglong)*pbVar1;
	pbVar1 = (byte *)((int)param_1 + (param_2 + 1) * 4);
	*param_3 = ((uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 | (uint)*pbVar1) - (int)uVar2;
	return param_1 + uVar2;
}

longlong BESwap_1003ce1c(longlong param_1, int param_2, int param_3, int param_4, int *param_5)

{
	byte *pbVar1;
	short sVar2;
	undefined *puVar3;
	int iVar4;
	ulonglong uVar5;
	longlong lVar6;

	pbVar1 = (byte *)((int)param_1 + param_2 * 4);
	uVar5 = (ulonglong)pbVar1[3] << 0x18 | (ulonglong)pbVar1[2] << 0x10 | (ulonglong)pbVar1[1] << 8 | (ulonglong)*pbVar1;
	lVar6 = param_1 + uVar5;
	iVar4 = (int)lVar6;
	puVar3 = (undefined *)(iVar4 + param_3);
	sVar2 = CONCAT11(puVar3[1], *puVar3);
	if ((longlong)sVar2 != 0) {
		if (param_4 == 8) {
			iVar4 = 0;
		} else {
			puVar3 = (undefined *)(iVar4 + param_4);
			iVar4 = (int)CONCAT11(puVar3[1], *puVar3);
		}
		if (iVar4 == 0) {
			pbVar1 = (byte *)((int)param_1 + (param_2 + 1) * 4);
			iVar4 = ((uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 | (uint)*pbVar1) - (int)uVar5;
		}
		*param_5 = iVar4 - (int)sVar2;
		return lVar6 + (longlong)sVar2;
	}
	return 0;
}

void CelDrawDatOnly(BYTE *pDecodeTo, BYTE *pRLEBytes, int nDataSize, int nWidth)

{
	byte bVar1;
	byte bVar2;
	undefined2 uVar3;
	undefined4 uVar4;
	undefined4 *puVar5;
	undefined4 *puVar7;
	ulonglong uVar6;
	undefined4 *puVar9;
	uint uVar10;
	ulonglong uVar8;
	undefined4 *puVar11;
	longlong lVar12;
	longlong lVar13;
	undefined4 *local_10;
	undefined4 *local_c;

	if (pDecodeTo == (BYTE *)0x0) {
		return;
	}
	if (pRLEBytes == (BYTE *)0x0) {
		return;
	}
	lVar12 = (longlong)nWidth;
	local_10 = (undefined4 *)pDecodeTo;
	local_c = (undefined4 *)pRLEBytes;
	do {
		puVar11 = (undefined4 *)((int)local_c + 1);
		bVar1 = *(byte *)local_c;
		lVar13 = (longlong)(char)bVar1;
		uVar10 = SEXT14((char)bVar1);
		if (lVar13 < 0) {
			lVar12 = lVar12 + lVar13;
			puVar9 = (undefined4 *)((int)local_10 - (int)(char)bVar1);
			local_c = puVar11;
		} else {
			lVar12 = lVar12 - lVar13;
			puVar9 = (undefined4 *)((int)local_10 + (int)(char)bVar1);
			puVar7 = (undefined4 *)((int)puVar11 + (int)(char)bVar1);
			if ((bVar1 & 1) != 0) {
				bVar2 = *(byte *)puVar11;
				puVar11 = (undefined4 *)((int)local_c + 2);
				uVar10 = (int)(char)bVar1 - 1;
				*(byte *)local_10 = bVar2;
				local_10 = (undefined4 *)((int)local_10 + 1);
			}
			if ((uVar10 & 2) != 0) {
				uVar3 = *(undefined2 *)puVar11;
				puVar11 = (undefined4 *)((int)puVar11 + 2);
				uVar10 = uVar10 - 2;
				*(undefined2 *)local_10 = uVar3;
				local_10 = (undefined4 *)((int)local_10 + 2);
			}
			uVar8 = (ulonglong)(uVar10 >> 2);
			local_c = puVar7;
			if (3 < (int)uVar10) {
				uVar6 = (ulonglong)(uVar10 >> 5);
				if (uVar10 >> 5 != 0) {
					do {
						*local_10 = *puVar11;
						local_10[1] = puVar11[1];
						local_10[2] = puVar11[2];
						local_10[3] = puVar11[3];
						local_10[4] = puVar11[4];
						local_10[5] = puVar11[5];
						local_10[6] = puVar11[6];
						puVar5 = puVar11 + 7;
						puVar11 = puVar11 + 8;
						local_10[7] = *puVar5;
						local_10 = local_10 + 8;
						uVar6 = uVar6 - 1;
					} while (uVar6 != 0);
					uVar8 = uVar8 & 7;
					local_c = puVar7;
					if ((uVar10 >> 2 & 7) == 0)
						goto LAB_1003cfb8;
				}
				do {
					uVar4 = *puVar11;
					puVar11 = puVar11 + 1;
					*local_10 = uVar4;
					local_10 = local_10 + 1;
					uVar8 = uVar8 - 1;
					local_c = puVar7;
				} while (uVar8 != 0);
			}
		}
	LAB_1003cfb8:
		local_10 = puVar9;
		if (((int)lVar12 == 0) && (local_10 = (undefined4 *)((int)local_10 - (nWidth + 0x300)), lVar12 = (longlong)nWidth, (undefined4 *)(pRLEBytes + nDataSize) == local_c)) {
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CelDecodeOnly(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffffab;
	int local_28[4];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2._7_1_ = LockMemFile((longlong)(int)pCelBuff, (char)sy, (char)pCelBuff, (char)nCel, (char)nWidth, in_r8, in_r9,
	    in_r10, in_stack_ffffffab);
	uVar2 = SEXT18((char)uVar2);
	if ((((uVar2 & 0xffffffff) != 0) && (_DAT_101271e4 != 0)) && ((uVar2 & 0xffffffff) != 0)) {
		lVar3 = BESwap_1003cdf8(uVar2, nCel, local_28);
		CelDrawDatOnly((BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + sy * 4) + sx), (BYTE *)lVar3,
		    local_28[0], nWidth);
	}
	UnlockMemFile((char)pCelBuff);
	return;
}

void CelDecDatOnly(BYTE *pBuff, BYTE *pCelBuff, int nCel, int nWidth)

{
	bool bVar1;
	char cVar3;
	longlong lVar2;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	int local_18[6];

	cVar3 = LockMemFile((longlong)(int)pCelBuff, (char)pCelBuff, (char)nCel, (char)nWidth, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffbb);
	bVar1 = ((longlong)cVar3 & 0xffffffffU) != 0;
	if (((bVar1) && (bVar1)) && (pBuff != (BYTE *)0x0)) {
		lVar2 = BESwap_1003cdf8((longlong)cVar3, nCel, local_18);
		CelDrawDatOnly(pBuff, (BYTE *)lVar2, local_18[0], nWidth);
	}
	UnlockMemFile((char)pCelBuff);
	return;
}

void thunk_CelDrawHdrOnly(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	BYTE *local_8;
	undefined4 local_4;

	local_4 = 0;
	local_8 = pCelBuff;
	CelDrawHdrOnly(sx, sy, (BYTE *)&local_8, nCel, nWidth, CelSkip, CelCap);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CelDrawHdrOnly(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	int iVar1;
	ulonglong uVar2;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_28[2];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2 = LockMemFileIf((uint *)pCelBuff);
	if (((((uVar2 & 0xffffffff) != 0) && (_DAT_101271e4 != 0)) && ((uVar2 & 0xffffffff) != 0)) && (uVar2 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, local_28), (uVar2 & 0xffffffff) != 0)) {
		CelDrawDatOnly((BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + sx),
		    (BYTE *)uVar2, local_28[0], nWidth);
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

void CelDecodeHdrOnly(BYTE *pBuff, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	bool bVar1;
	char cVar3;
	longlong lVar2;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffffab;
	int local_28[4];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	cVar3 = LockMemFile((longlong)(int)pCelBuff, (char)pCelBuff, (char)nCel, (char)nWidth, (char)CelSkip, (char)CelCap,
	    in_r9, in_r10, in_stack_ffffffab);
	bVar1 = ((longlong)cVar3 & 0xffffffffU) != 0;
	if ((((bVar1) && (bVar1)) && (pBuff != (BYTE *)0x0)) && (lVar2 = BESwap_1003ce1c((longlong)cVar3, nCel, CelSkip, CelCap, local_28), lVar2 != 0)) {
		CelDrawDatOnly(pBuff, (BYTE *)lVar2, local_28[0], nWidth);
	}
	UnlockMemFile((char)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CelDecDatLightOnly(BYTE *pDecodeTo, BYTE *pRLEBytes, int nDataSize, int nWidth)

{
	byte bVar1;
	longlong lVar2;
	undefined8 unaff_r27;
	longlong lVar3;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	int iVar4;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	BYTE *local_28;
	byte *local_24[4];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if ((pDecodeTo != (BYTE *)0x0) && (pRLEBytes != (BYTE *)0x0)) {
		iVar4 = _DAT_101b2028 + _DAT_1019fd94 * 0x100;
		lVar3 = (longlong)nWidth;
		local_28 = pDecodeTo;
		local_24[0] = pRLEBytes;
		do {
			bVar1 = *local_24[0];
			lVar2 = (longlong)(char)bVar1;
			if (lVar2 < 0) {
				local_28 = local_28 + -(int)(char)bVar1;
				local_24[0] = local_24[0] + 1;
			} else {
				lVar2 = -lVar2;
				local_24[0] = local_24[0] + 1;
				asm_Cel2DecDatOnly(&local_28, local_24, iVar4, (int)(char)bVar1);
			}
			lVar3 = lVar3 + lVar2;
		} while (((int)lVar3 != 0) || (local_28 = local_28 + -(nWidth + 0x300), lVar3 = (longlong)nWidth, pRLEBytes + nDataSize != local_24[0]));
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CelDecDatLightTrans(BYTE *pDecodeTo, BYTE *pRLEBytes, int nDataSize, int nWidth)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	byte *pbVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	undefined *puVar7;
	int iVar8;
	byte *pbVar9;
	longlong lVar10;
	ulonglong uVar11;
	uint uVar12;

	uVar6 = SEXT48((int)pDecodeTo);
	if (((uVar6 & 0xffffffff) != 0) && (pRLEBytes != (BYTE *)0x0)) {
		pbVar9 = pRLEBytes + nDataSize;
		iVar8 = _DAT_101b2028 + _DAT_1019fd94 * 0x100;
		do {
			lVar10 = (longlong)nWidth;
			do {
				bVar1 = *pRLEBytes;
				pRLEBytes = pRLEBytes + 1;
				uVar11 = SEXT18((char)bVar1);
				if ((longlong)uVar11 < 0) {
					uVar6 = uVar6 - uVar11;
					lVar10 = lVar10 + uVar11;
				} else {
					lVar10 = lVar10 - uVar11;
					uVar11 = (uVar11 & 0xffffffff00000000 | (ulonglong)(uint)((int)(char)bVar1 >> 1)) + (ulonglong)((char)bVar1 < '\0' && ((int)(char)bVar1 & 1U) != 0);
					uVar12 = (uint)uVar11;
					if (((uint)uVar6 & 1) == ((uint)pDecodeTo & 1)) {
						if (uVar12 != 0) {
							uVar5 = (ulonglong)(uVar12 >> 3);
							if (uVar12 >> 3 != 0) {
								do {
									iVar3 = (int)uVar6;
									*(undefined *)(iVar3 + 1) = *(undefined *)(iVar8 + (uint)pRLEBytes[1]);
									*(undefined *)(iVar3 + 3) = *(undefined *)(iVar8 + (uint)pRLEBytes[3]);
									*(undefined *)(iVar3 + 5) = *(undefined *)(iVar8 + (uint)pRLEBytes[5]);
									*(undefined *)(iVar3 + 7) = *(undefined *)(iVar8 + (uint)pRLEBytes[7]);
									*(undefined *)(iVar3 + 9) = *(undefined *)(iVar8 + (uint)pRLEBytes[9]);
									*(undefined *)(iVar3 + 0xb) = *(undefined *)(iVar8 + (uint)pRLEBytes[0xb]);
									*(undefined *)(iVar3 + 0xd) = *(undefined *)(iVar8 + (uint)pRLEBytes[0xd]);
									pbVar4 = pRLEBytes + 0xf;
									pRLEBytes = pRLEBytes + 0x10;
									*(undefined *)(iVar3 + 0xf) = *(undefined *)(iVar8 + (uint)*pbVar4);
									uVar6 = uVar6 + 0x10;
									uVar5 = uVar5 - 1;
								} while (uVar5 != 0);
								uVar11 = uVar11 & 7;
								if (uVar11 == 0)
									goto LAB_1003d46c;
							}
							do {
								pbVar4 = pRLEBytes + 1;
								pRLEBytes = pRLEBytes + 2;
								*(undefined *)((int)uVar6 + 1) = *(undefined *)(iVar8 + (uint)*pbVar4);
								uVar6 = uVar6 + 2;
								uVar11 = uVar11 - 1;
							} while (uVar11 != 0);
						}
					LAB_1003d46c:
						if ((bVar1 & 1) != 0) {
							pRLEBytes = pRLEBytes + 1;
							uVar6 = uVar6 + 1;
						}
					} else {
						if (uVar12 != 0) {
							uVar5 = (ulonglong)(uVar12 >> 3);
							if (uVar12 >> 3 != 0) {
								do {
									puVar7 = (undefined *)uVar6;
									*puVar7 = *(undefined *)(iVar8 + (uint)*pRLEBytes);
									puVar7[2] = *(undefined *)(iVar8 + (uint)pRLEBytes[2]);
									puVar7[4] = *(undefined *)(iVar8 + (uint)pRLEBytes[4]);
									puVar7[6] = *(undefined *)(iVar8 + (uint)pRLEBytes[6]);
									puVar7[8] = *(undefined *)(iVar8 + (uint)pRLEBytes[8]);
									puVar7[10] = *(undefined *)(iVar8 + (uint)pRLEBytes[10]);
									puVar7[0xc] = *(undefined *)(iVar8 + (uint)pRLEBytes[0xc]);
									pbVar4 = pRLEBytes + 0xe;
									pRLEBytes = pRLEBytes + 0x10;
									puVar7[0xe] = *(undefined *)(iVar8 + (uint)*pbVar4);
									uVar6 = uVar6 + 0x10;
									uVar5 = uVar5 - 1;
								} while (uVar5 != 0);
								uVar11 = uVar11 & 7;
								if (uVar11 == 0)
									goto LAB_1003d528;
							}
							do {
								bVar2 = *pRLEBytes;
								pRLEBytes = pRLEBytes + 2;
								*(undefined *)uVar6 = *(undefined *)(iVar8 + (uint)bVar2);
								uVar6 = uVar6 + 2;
								uVar11 = uVar11 - 1;
							} while (uVar11 != 0);
						}
					LAB_1003d528:
						if ((bVar1 & 1) != 0) {
							bVar1 = *pRLEBytes;
							pRLEBytes = pRLEBytes + 1;
							*(undefined *)uVar6 = *(undefined *)(iVar8 + (uint)bVar1);
							uVar6 = uVar6 + 1;
						}
					}
				}
			} while ((int)lVar10 != 0);
			pDecodeTo = (BYTE *)(((uint)pDecodeTo & 1) + 1);
			uVar6 = uVar6 - ((longlong)nWidth + 0x300);
		} while (pbVar9 != pRLEBytes);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CelDecodeLightOnly(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	BYTE *pDecodeTo;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffffab;
	int local_28[4];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2._7_1_ = LockMemFile((longlong)(int)pCelBuff, (char)sy, (char)pCelBuff, (char)nCel, (char)nWidth, in_r8, in_r9,
	    in_r10, in_stack_ffffffab);
	uVar2 = SEXT18((char)uVar2);
	if ((((uVar2 & 0xffffffff) != 0) && (_DAT_101271e4 != 0)) && ((uVar2 & 0xffffffff) != 0)) {
		lVar3 = BESwap_1003cdf8(uVar2, nCel, local_28);
		pDecodeTo = (BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + sy * 4) + sx);
		if (**(int **)(iVar1 + -0x7290) == 0) {
			CelDrawDatOnly(pDecodeTo, (BYTE *)lVar3, local_28[0], nWidth);
		} else {
			CelDecDatLightOnly(pDecodeTo, (BYTE *)lVar3, local_28[0], nWidth);
		}
	}
	UnlockMemFile((char)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CelDecodeHdrLightOnly(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	BYTE *pDecodeTo;
	undefined in_r10;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffffab;
	int local_28[2];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2._7_1_ = LockMemFile((longlong)(int)pCelBuff, (char)sy, (char)pCelBuff, (char)nCel, (char)nWidth,
	    (char)CelSkip, (char)CelCap, in_r10, in_stack_ffffffab);
	uVar2 = SEXT18((char)uVar2);
	if (((((uVar2 & 0xffffffff) != 0) && (_DAT_101271e4 != 0)) && ((uVar2 & 0xffffffff) != 0)) && (lVar3 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, local_28), lVar3 != 0)) {
		pDecodeTo = (BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + sx);
		if (**(int **)(iVar1 + -0x7290) == 0) {
			CelDrawDatOnly(pDecodeTo, (BYTE *)lVar3, local_28[0], nWidth);
		} else {
			CelDecDatLightOnly(pDecodeTo, (BYTE *)lVar3, local_28[0], nWidth);
		}
	}
	UnlockMemFile((char)pCelBuff);
	return;
}

void CelDecodeHdrLightTrans(BYTE *pBuff, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	bool bVar1;
	int iVar2;
	char cVar4;
	longlong lVar3;
	BYTE *pRLEBytes;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffffab;
	int local_28[4];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar2 = 0x100f8fd0;
	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	cVar4 = LockMemFile((longlong)(int)pCelBuff, (char)pCelBuff, (char)nCel, (char)nWidth, (char)CelSkip, (char)CelCap,
	    in_r9, in_r10, in_stack_ffffffab);
	bVar1 = ((longlong)cVar4 & 0xffffffffU) != 0;
	if ((((bVar1) && (bVar1)) && (pBuff != (BYTE *)0x0)) && (lVar3 = BESwap_1003ce1c((longlong)cVar4, nCel, CelSkip, CelCap, local_28), lVar3 != 0)) {
		pRLEBytes = (BYTE *)lVar3;
		if (**(int **)(iVar2 + -0x7294) == 0) {
			if (**(int **)(iVar2 + -0x7290) == 0) {
				CelDrawDatOnly(pBuff, pRLEBytes, local_28[0], nWidth);
			} else {
				CelDecDatLightOnly(pBuff, pRLEBytes, local_28[0], nWidth);
			}
		} else {
			CelDecDatLightTrans(pBuff, pRLEBytes, local_28[0], nWidth);
		}
	}
	UnlockMemFile((char)pCelBuff);
	return;
}

void thunk_CelDrawHdrLightRed(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap, char light)

{
	BYTE *local_8;
	undefined4 local_4;

	local_4 = 0;
	local_8 = pCelBuff;
	CelDrawHdrLightRed(sx, sy, (BYTE *)&local_8, nCel, nWidth, CelSkip, CelCap, light);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CelDrawHdrLightRed(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap, char light)

{
	longlong lVar1;
	int iVar2;
	ulonglong uVar3;
	char *pcVar4;
	byte *pbVar5;
	longlong lVar6;
	int iVar8;
	longlong lVar7;
	longlong lVar9;
	ulonglong uVar10;
	longlong lVar11;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	uint local_38[5];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar9 = (longlong)nWidth;
	iVar2 = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar3 = LockMemFileIf((uint *)pCelBuff);
	if (((((uVar3 & 0xffffffff) != 0) && (_DAT_101271e4 != 0)) && ((uVar3 & 0xffffffff) != 0)) && (uVar3 = BESwap_1003ce1c(uVar3, nCel, CelSkip, CelCap, (int *)local_38), (uVar3 & 0xffffffff) != 0)) {
		lVar6 = (ulonglong)_DAT_101271e4 + (ulonglong) * (uint *)(*(int *)(iVar2 + -0x7698) + (sy + CelSkip * -0x10) * 4) + (longlong)sx;
		if (**(int **)(iVar2 + -0x776c) == 0) {
			iVar8 = 0x1000;
		} else {
			iVar8 = 0x400;
		}
		if (light == '\x02') {
			iVar8 = iVar8 + 0x100;
		}
		if ('\x03' < light) {
			iVar8 = ((int)light + -4) * 0x100 + iVar8 + 0x300;
		}
		iVar2 = **(int **)(iVar2 + -0x7770);
		uVar10 = uVar3 + (ulonglong)local_38[0];
		lVar7 = lVar9;
		do {
			pcVar4 = (char *)uVar3;
			uVar3 = uVar3 + 1;
			lVar11 = (longlong)*pcVar4;
			if (lVar11 < 0) {
				lVar6 = lVar6 - lVar11;
				lVar1 = lVar11;
			} else {
				lVar1 = -lVar11;
				do {
					pbVar5 = (byte *)uVar3;
					lVar11 = lVar11 + -1;
					uVar3 = uVar3 + 1;
					*(undefined *)lVar6 = *(undefined *)(iVar2 + iVar8 + (uint)*pbVar5);
					lVar6 = lVar6 + 1;
				} while (lVar11 != 0);
			}
			lVar7 = lVar7 + lVar1;
		} while (((int)lVar7 != 0) || (lVar6 = lVar6 - (lVar9 + 0x300), lVar7 = lVar9, (uVar10 & 0xffffffff) != (uVar3 & 0xffffffff)));
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cel2DecDatLightOnly(BYTE *pDecodeTo, BYTE *pRLEBytes, int nDataSize, int nWidth)

{
	byte bVar1;
	byte bVar2;
	undefined2 uVar3;
	undefined4 uVar4;
	undefined4 *puVar5;
	undefined4 *puVar7;
	ulonglong uVar6;
	undefined4 *puVar9;
	uint uVar10;
	ulonglong uVar8;
	undefined4 *puVar11;
	longlong lVar12;
	longlong lVar13;
	undefined4 *local_10;
	undefined4 *local_c;

	if (pDecodeTo == (BYTE *)0x0) {
		return;
	}
	if (pRLEBytes == (BYTE *)0x0) {
		return;
	}
	if (_DAT_101271e4 == 0) {
		return;
	}
	lVar12 = (longlong)nWidth;
	local_10 = (undefined4 *)pDecodeTo;
	local_c = (undefined4 *)pRLEBytes;
	do {
		puVar11 = (undefined4 *)((int)local_c + 1);
		bVar1 = *(byte *)local_c;
		lVar13 = (longlong)(char)bVar1;
		uVar10 = SEXT14((char)bVar1);
		if (lVar13 < 0) {
			lVar12 = lVar12 + lVar13;
			puVar9 = (undefined4 *)((int)local_10 - (int)(char)bVar1);
			local_c = puVar11;
		} else {
			lVar12 = lVar12 - lVar13;
			if (local_10 < _DAT_1019fd84) {
				puVar9 = (undefined4 *)((int)local_10 + (int)(char)bVar1);
				puVar7 = (undefined4 *)((int)puVar11 + (int)(char)bVar1);
				if ((bVar1 & 1) != 0) {
					bVar2 = *(byte *)puVar11;
					puVar11 = (undefined4 *)((int)local_c + 2);
					uVar10 = (int)(char)bVar1 - 1;
					*(byte *)local_10 = bVar2;
					local_10 = (undefined4 *)((int)local_10 + 1);
				}
				if ((uVar10 & 2) != 0) {
					uVar3 = *(undefined2 *)puVar11;
					puVar11 = (undefined4 *)((int)puVar11 + 2);
					uVar10 = uVar10 - 2;
					*(undefined2 *)local_10 = uVar3;
					local_10 = (undefined4 *)((int)local_10 + 2);
				}
				uVar8 = (ulonglong)(uVar10 >> 2);
				local_c = puVar7;
				if (3 < (int)uVar10) {
					uVar6 = (ulonglong)(uVar10 >> 5);
					if (uVar10 >> 5 != 0) {
						do {
							*local_10 = *puVar11;
							local_10[1] = puVar11[1];
							local_10[2] = puVar11[2];
							local_10[3] = puVar11[3];
							local_10[4] = puVar11[4];
							local_10[5] = puVar11[5];
							local_10[6] = puVar11[6];
							puVar5 = puVar11 + 7;
							puVar11 = puVar11 + 8;
							local_10[7] = *puVar5;
							local_10 = local_10 + 8;
							uVar6 = uVar6 - 1;
						} while (uVar6 != 0);
						uVar8 = uVar8 & 7;
						local_c = puVar7;
						if ((uVar10 >> 2 & 7) == 0)
							goto LAB_1003dad8;
					}
					do {
						uVar4 = *puVar11;
						puVar11 = puVar11 + 1;
						*local_10 = uVar4;
						local_10 = local_10 + 1;
						uVar8 = uVar8 - 1;
						local_c = puVar7;
					} while (uVar8 != 0);
				}
			} else {
				puVar9 = (undefined4 *)((int)local_10 + (int)(char)bVar1);
				local_c = (undefined4 *)((int)puVar11 + (int)(char)bVar1);
			}
		}
	LAB_1003dad8:
		local_10 = puVar9;
		if (((int)lVar12 == 0) && (local_10 = (undefined4 *)((int)local_10 - (nWidth + 0x300)), lVar12 = (longlong)nWidth, (undefined4 *)(pRLEBytes + nDataSize) == local_c)) {
			return;
		}
	} while (true);
}

void thunk_Cel2DrawHdrOnly(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	BYTE *local_8;
	undefined4 local_4;

	local_4 = 0;
	local_8 = pCelBuff;
	Cel2DrawHdrOnly(sx, sy, (BYTE *)&local_8, nCel, nWidth, CelSkip, CelCap);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cel2DrawHdrOnly(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	int iVar1;
	ulonglong uVar2;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_28[2];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2 = LockMemFileIf((uint *)pCelBuff);
	if (((((uVar2 & 0xffffffff) != 0) && (_DAT_101271e4 != 0)) && ((uVar2 & 0xffffffff) != 0)) && (uVar2 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, local_28), (uVar2 & 0xffffffff) != 0)) {
		Cel2DecDatLightOnly(
		    (BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + sx), (BYTE *)uVar2,
		    local_28[0], nWidth);
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

void Cel2DecodeHdrOnly(BYTE *pBuff, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	bool bVar1;
	char cVar3;
	longlong lVar2;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffffab;
	int local_28[4];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	cVar3 = LockMemFile((longlong)(int)pCelBuff, (char)pCelBuff, (char)nCel, (char)nWidth, (char)CelSkip, (char)CelCap,
	    in_r9, in_r10, in_stack_ffffffab);
	bVar1 = ((longlong)cVar3 & 0xffffffffU) != 0;
	if ((((bVar1) && (bVar1)) && (pBuff != (BYTE *)0x0)) && (lVar2 = BESwap_1003ce1c((longlong)cVar3, nCel, CelSkip, CelCap, local_28), lVar2 != 0)) {
		Cel2DecDatLightOnly(pBuff, (BYTE *)lVar2, local_28[0], nWidth);
	}
	UnlockMemFile((char)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cel2DecDatOnly(BYTE *pDecodeTo, BYTE *pRLEBytes, int nDataSize, int nWidth)

{
	byte bVar1;
	byte *pbVar2;
	longlong lVar3;
	undefined8 unaff_r26;
	longlong lVar4;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	int iVar5;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	BYTE *local_28;
	byte *local_24[3];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (((pDecodeTo != (BYTE *)0x0) && (pRLEBytes != (BYTE *)0x0)) && (_DAT_101271e4 != 0)) {
		iVar5 = _DAT_101b2028 + _DAT_1019fd94 * 0x100;
		lVar4 = (longlong)nWidth;
		local_28 = pDecodeTo;
		local_24[0] = pRLEBytes;
		do {
			pbVar2 = local_24[0] + 1;
			bVar1 = *local_24[0];
			lVar3 = (longlong)(char)bVar1;
			if (lVar3 < 0) {
				lVar4 = lVar4 + lVar3;
				local_28 = local_28 + -(int)(char)bVar1;
				local_24[0] = pbVar2;
			} else {
				lVar4 = lVar4 - lVar3;
				if (local_28 < _DAT_1019fd84) {
					local_24[0] = pbVar2;
					asm_Cel2DecDatOnly(&local_28, local_24, iVar5, (int)(char)bVar1);
				} else {
					local_28 = local_28 + (int)(char)bVar1;
					local_24[0] = pbVar2 + (int)(char)bVar1;
				}
			}
		} while (((int)lVar4 != 0) || (local_28 = local_28 + -(nWidth + 0x300), lVar4 = (longlong)nWidth, pRLEBytes + nDataSize != local_24[0]));
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cel2DecDatLightTrans(BYTE *pDecodeTo, BYTE *pRLEBytes, int nDataSize, int nWidth)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	undefined *puVar6;
	ulonglong uVar7;
	byte *pbVar8;
	int iVar9;
	ulonglong uVar10;
	longlong lVar11;
	ulonglong uVar12;
	uint uVar13;

	uVar7 = SEXT48((int)pRLEBytes);
	uVar5 = SEXT48((int)pDecodeTo);
	if ((((uVar5 & 0xffffffff) != 0) && ((uVar7 & 0xffffffff) != 0)) && (_DAT_101271e4 != 0)) {
		uVar10 = uVar7 + (longlong)nDataSize;
		iVar9 = _DAT_101b2028 + _DAT_1019fd94 * 0x100;
		do {
			lVar11 = (longlong)nWidth;
			do {
				bVar1 = *(byte *)uVar7;
				uVar7 = uVar7 + 1;
				uVar12 = SEXT18((char)bVar1);
				if ((longlong)uVar12 < 0) {
					uVar5 = uVar5 - uVar12;
					lVar11 = lVar11 + uVar12;
				} else {
					lVar11 = lVar11 - uVar12;
					if ((uVar5 & 0xffffffff) < (ulonglong)_DAT_1019fd84) {
						uVar12 = (uVar12 & 0xffffffff00000000 | (ulonglong)(uint)((int)(char)bVar1 >> 1)) + (ulonglong)((char)bVar1 < '\0' && ((int)(char)bVar1 & 1U) != 0);
						uVar13 = (uint)uVar12;
						if (((uint)uVar5 & 1) == ((uint)pDecodeTo & 1)) {
							if (uVar13 != 0) {
								uVar4 = (ulonglong)(uVar13 >> 3);
								if (uVar13 >> 3 != 0) {
									do {
										iVar2 = (int)uVar7;
										iVar3 = (int)uVar5;
										*(undefined *)(iVar3 + 1) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 1));
										*(undefined *)(iVar3 + 3) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 3));
										*(undefined *)(iVar3 + 5) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 5));
										*(undefined *)(iVar3 + 7) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 7));
										*(undefined *)(iVar3 + 9) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 9));
										*(undefined *)(iVar3 + 0xb) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 0xb));
										*(undefined *)(iVar3 + 0xd) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 0xd));
										uVar7 = uVar7 + 0x10;
										*(undefined *)(iVar3 + 0xf) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 0xf));
										uVar5 = uVar5 + 0x10;
										uVar4 = uVar4 - 1;
									} while (uVar4 != 0);
									uVar12 = uVar12 & 7;
									if (uVar12 == 0)
										goto LAB_1003decc;
								}
								do {
									iVar2 = (int)uVar7;
									uVar7 = uVar7 + 2;
									*(undefined *)((int)uVar5 + 1) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 1));
									uVar5 = uVar5 + 2;
									uVar12 = uVar12 - 1;
								} while (uVar12 != 0);
							}
						LAB_1003decc:
							if ((bVar1 & 1) != 0) {
								uVar7 = uVar7 + 1;
								uVar5 = uVar5 + 1;
							}
						} else {
							if (uVar13 != 0) {
								uVar4 = (ulonglong)(uVar13 >> 3);
								if (uVar13 >> 3 != 0) {
									do {
										pbVar8 = (byte *)uVar7;
										puVar6 = (undefined *)uVar5;
										*puVar6 = *(undefined *)(iVar9 + (uint)*pbVar8);
										puVar6[2] = *(undefined *)(iVar9 + (uint)pbVar8[2]);
										puVar6[4] = *(undefined *)(iVar9 + (uint)pbVar8[4]);
										puVar6[6] = *(undefined *)(iVar9 + (uint)pbVar8[6]);
										puVar6[8] = *(undefined *)(iVar9 + (uint)pbVar8[8]);
										puVar6[10] = *(undefined *)(iVar9 + (uint)pbVar8[10]);
										puVar6[0xc] = *(undefined *)(iVar9 + (uint)pbVar8[0xc]);
										uVar7 = uVar7 + 0x10;
										puVar6[0xe] = *(undefined *)(iVar9 + (uint)pbVar8[0xe]);
										uVar5 = uVar5 + 0x10;
										uVar4 = uVar4 - 1;
									} while (uVar4 != 0);
									uVar12 = uVar12 & 7;
									if (uVar12 == 0)
										goto LAB_1003df88;
								}
								do {
									pbVar8 = (byte *)uVar7;
									uVar7 = uVar7 + 2;
									*(undefined *)uVar5 = *(undefined *)(iVar9 + (uint)*pbVar8);
									uVar5 = uVar5 + 2;
									uVar12 = uVar12 - 1;
								} while (uVar12 != 0);
							}
						LAB_1003df88:
							if ((bVar1 & 1) != 0) {
								pbVar8 = (byte *)uVar7;
								uVar7 = uVar7 + 1;
								*(undefined *)uVar5 = *(undefined *)(iVar9 + (uint)*pbVar8);
								uVar5 = uVar5 + 1;
							}
						}
					} else {
						uVar7 = uVar7 + uVar12;
						uVar5 = uVar5 + uVar12;
					}
				}
			} while ((int)lVar11 != 0);
			pDecodeTo = (BYTE *)(((uint)pDecodeTo & 1) + 1);
			uVar5 = uVar5 - ((longlong)nWidth + 0x300);
		} while ((uVar10 & 0xffffffff) != (uVar7 & 0xffffffff));
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cel2DecodeHdrLight(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	BYTE *pDecodeTo;
	undefined in_r10;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffffab;
	int local_28[2];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2._7_1_ = LockMemFile((longlong)(int)pCelBuff, (char)sy, (char)pCelBuff, (char)nCel, (char)nWidth,
	    (char)CelSkip, (char)CelCap, in_r10, in_stack_ffffffab);
	uVar2 = SEXT18((char)uVar2);
	if (((((uVar2 & 0xffffffff) != 0) && (_DAT_101271e4 != 0)) && ((uVar2 & 0xffffffff) != 0)) && (lVar3 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, local_28), lVar3 != 0)) {
		pDecodeTo = (BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + sx);
		if (**(int **)(iVar1 + -0x7290) == 0) {
			Cel2DecDatLightOnly(pDecodeTo, (BYTE *)lVar3, local_28[0], nWidth);
		} else {
			Cel2DecDatOnly(pDecodeTo, (BYTE *)lVar3, local_28[0], nWidth);
		}
	}
	UnlockMemFile((char)pCelBuff);
	return;
}

void Cel2DecodeLightTrans(BYTE *pBuff, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	bool bVar1;
	int iVar2;
	char cVar4;
	longlong lVar3;
	BYTE *pRLEBytes;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffffab;
	int local_28[4];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar2 = 0x100f8fd0;
	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	cVar4 = LockMemFile((longlong)(int)pCelBuff, (char)pCelBuff, (char)nCel, (char)nWidth, (char)CelSkip, (char)CelCap,
	    in_r9, in_r10, in_stack_ffffffab);
	bVar1 = ((longlong)cVar4 & 0xffffffffU) != 0;
	if (((bVar1) && (bVar1)) && (lVar3 = BESwap_1003ce1c((longlong)cVar4, nCel, CelSkip, CelCap, local_28), lVar3 != 0)) {
		pRLEBytes = (BYTE *)lVar3;
		if (**(int **)(iVar2 + -0x7294) == 0) {
			if (**(int **)(iVar2 + -0x7290) == 0) {
				Cel2DecDatLightOnly(pBuff, pRLEBytes, local_28[0], nWidth);
			} else {
				Cel2DecDatOnly(pBuff, pRLEBytes, local_28[0], nWidth);
			}
		} else {
			Cel2DecDatLightTrans(pBuff, pRLEBytes, local_28[0], nWidth);
		}
	}
	UnlockMemFile((char)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cel2DrawHdrLightRed(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap, char light)

{
	int iVar1;
	char cVar5;
	ulonglong uVar2;
	char *pcVar3;
	byte *pbVar4;
	ulonglong uVar6;
	int iVar8;
	longlong lVar7;
	longlong lVar9;
	ulonglong uVar10;
	longlong lVar11;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffff9b;
	uint local_38[4];
	undefined4 local_28;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar9 = (longlong)nWidth;
	iVar1 = 0x100f8fd0;
	local_28 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	cVar5 = LockMemFile((longlong)(int)pCelBuff, (char)sy, (char)pCelBuff, (char)nCel, (char)nWidth, (char)CelSkip,
	    (char)CelCap, light, in_stack_ffffff9b);
	uVar2 = SEXT18(cVar5);
	if (((((uVar2 & 0xffffffff) != 0) && (_DAT_101271e4 != 0)) && ((uVar2 & 0xffffffff) != 0)) && (uVar2 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, (int *)local_38), (uVar2 & 0xffffffff) != 0)) {
		uVar6 = (ulonglong)_DAT_101271e4 + (ulonglong) * (uint *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + (longlong)sx;
		if (**(int **)(iVar1 + -0x776c) == 0) {
			iVar8 = 0x1000;
		} else {
			iVar8 = 0x400;
		}
		if (light == '\x02') {
			iVar8 = iVar8 + 0x100;
		}
		if ('\x03' < light) {
			iVar8 = ((int)light + -4) * 0x100 + iVar8 + 0x300;
		}
		iVar1 = **(int **)(iVar1 + -0x7770);
		uVar10 = uVar2 + (ulonglong)local_38[0];
		lVar7 = lVar9;
		do {
			pcVar3 = (char *)uVar2;
			uVar2 = uVar2 + 1;
			lVar11 = (longlong)*pcVar3;
			if (lVar11 < 0) {
				uVar6 = uVar6 - lVar11;
				lVar7 = lVar7 + lVar11;
			} else {
				lVar7 = lVar7 - lVar11;
				if ((uVar6 & 0xffffffff) < (ulonglong)_DAT_1019fd84) {
					do {
						pbVar4 = (byte *)uVar2;
						lVar11 = lVar11 + -1;
						uVar2 = uVar2 + 1;
						*(undefined *)uVar6 = *(undefined *)(iVar1 + iVar8 + (uint)*pbVar4);
						uVar6 = uVar6 + 1;
					} while (lVar11 != 0);
				} else {
					uVar2 = uVar2 + lVar11;
					uVar6 = uVar6 + lVar11;
				}
			}
		} while (((int)lVar7 != 0) || (uVar6 = uVar6 - (lVar9 + 0x300), lVar7 = lVar9, (uVar10 & 0xffffffff) != (uVar2 & 0xffffffff)));
	}
	UnlockMemFile((char)pCelBuff);
	return;
}

void CelDecodeRect(BYTE *pBuff, int always_0, int hgt, int wdt, BYTE *pCelBuff, int nCel, int nWidth)

{
	bool bVar1;
	byte bVar2;
	byte bVar3;
	undefined2 uVar4;
	undefined4 uVar5;
	undefined4 *puVar6;
	undefined4 *puVar8;
	ulonglong uVar7;
	char cVar13;
	longlong lVar9;
	undefined4 *puVar11;
	uint uVar12;
	ulonglong uVar10;
	undefined4 *puVar14;
	undefined4 *puVar15;
	longlong lVar16;
	undefined in_r10;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffff9b;
	undefined4 *local_38;
	undefined4 *local_34;
	int local_30[5];
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	cVar13 = LockMemFile((longlong)(int)pCelBuff, (char)always_0, (char)hgt, (char)wdt, (char)pCelBuff, (char)nCel,
	    (char)nWidth, in_r10, in_stack_ffffff9b);
	bVar1 = ((longlong)cVar13 & 0xffffffffU) != 0;
	if (((bVar1) && (bVar1)) && (pBuff != (BYTE *)0x0)) {
		lVar9 = BESwap_1003cdf8((longlong)cVar13, nCel, local_30);
		local_34 = (undefined4 *)lVar9;
		puVar15 = (undefined4 *)((int)local_34 + local_30[0]);
		local_38 = (undefined4 *)(pBuff + wdt * hgt + always_0);
		lVar9 = (longlong)nWidth;
		do {
			puVar14 = (undefined4 *)((int)local_34 + 1);
			bVar2 = *(byte *)local_34;
			lVar16 = (longlong)(char)bVar2;
			uVar12 = SEXT14((char)bVar2);
			if (lVar16 < 0) {
				lVar9 = lVar9 + lVar16;
				puVar11 = (undefined4 *)((int)local_38 - (int)(char)bVar2);
				local_34 = puVar14;
			} else {
				lVar9 = lVar9 - lVar16;
				puVar11 = (undefined4 *)((int)local_38 + (int)(char)bVar2);
				puVar8 = (undefined4 *)((int)puVar14 + (int)(char)bVar2);
				if ((bVar2 & 1) != 0) {
					bVar3 = *(byte *)puVar14;
					puVar14 = (undefined4 *)((int)local_34 + 2);
					uVar12 = (int)(char)bVar2 - 1;
					*(byte *)local_38 = bVar3;
					local_38 = (undefined4 *)((int)local_38 + 1);
				}
				if ((uVar12 & 2) != 0) {
					uVar4 = *(undefined2 *)puVar14;
					puVar14 = (undefined4 *)((int)puVar14 + 2);
					uVar12 = uVar12 - 2;
					*(undefined2 *)local_38 = uVar4;
					local_38 = (undefined4 *)((int)local_38 + 2);
				}
				uVar10 = (ulonglong)(uVar12 >> 2);
				local_34 = puVar8;
				if (3 < (int)uVar12) {
					uVar7 = (ulonglong)(uVar12 >> 5);
					if (uVar12 >> 5 != 0) {
						do {
							*local_38 = *puVar14;
							local_38[1] = puVar14[1];
							local_38[2] = puVar14[2];
							local_38[3] = puVar14[3];
							local_38[4] = puVar14[4];
							local_38[5] = puVar14[5];
							local_38[6] = puVar14[6];
							puVar6 = puVar14 + 7;
							puVar14 = puVar14 + 8;
							local_38[7] = *puVar6;
							local_38 = local_38 + 8;
							uVar7 = uVar7 - 1;
						} while (uVar7 != 0);
						uVar10 = uVar10 & 7;
						local_34 = puVar8;
						if ((uVar12 >> 2 & 7) == 0)
							goto LAB_1003e47c;
					}
					do {
						uVar5 = *puVar14;
						puVar14 = puVar14 + 1;
						*local_38 = uVar5;
						local_38 = local_38 + 1;
						uVar10 = uVar10 - 1;
						local_34 = puVar8;
					} while (uVar10 != 0);
				}
			}
		LAB_1003e47c:
			local_38 = puVar11;
		} while (((int)lVar9 != 0) || (local_38 = (undefined4 *)((int)local_38 - (wdt + nWidth)), lVar9 = (longlong)nWidth, puVar15 != local_34));
	}
	UnlockMemFile((char)pCelBuff);
	return;
}

void thunk_CelDecodeClr(char col, int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	BYTE *local_8;
	undefined4 local_4;

	local_4 = 0;
	local_8 = pCelBuff;
	CelDecodeClr(col, sx, sy, (BYTE *)&local_8, nCel, nWidth, CelSkip, CelCap);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CelDecodeClr(char col, int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	bool bVar1;
	longlong lVar2;
	int iVar3;
	ulonglong uVar4;
	char *pcVar5;
	longlong lVar6;
	longlong lVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	uint local_38[5];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar9 = (longlong)nWidth;
	iVar3 = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar4 = LockMemFileIf((uint *)pCelBuff);
	bVar1 = (uVar4 & 0xffffffff) != 0;
	if ((((bVar1) && (bVar1)) && (_DAT_101271e4 != 0)) && (uVar4 = BESwap_1003ce1c(uVar4, nCel, CelSkip, CelCap, (int *)local_38), (uVar4 & 0xffffffff) != 0)) {
		uVar8 = uVar4 + (ulonglong)local_38[0];
		lVar6 = (ulonglong)_DAT_101271e4 + (ulonglong) * (uint *)(*(int *)(iVar3 + -0x7698) + (sy + CelSkip * -0x10) * 4) + (longlong)sx;
		lVar7 = lVar9;
		do {
			pcVar5 = (char *)uVar4;
			uVar4 = uVar4 + 1;
			lVar10 = (longlong)*pcVar5;
			if (lVar10 < 0) {
				lVar6 = lVar6 - lVar10;
				lVar2 = lVar10;
			} else {
				lVar2 = -lVar10;
				do {
					pcVar5 = (char *)uVar4;
					uVar4 = uVar4 + 1;
					if (*pcVar5 != '\0') {
						iVar3 = (int)lVar6;
						*(char *)(iVar3 + -0x300) = col;
						*(char *)(iVar3 + -1) = col;
						*(char *)(iVar3 + 1) = col;
						*(char *)(iVar3 + 0x300) = col;
					}
					lVar10 = lVar10 + -1;
					lVar6 = lVar6 + 1;
				} while (lVar10 != 0);
			}
			lVar7 = lVar7 + lVar2;
		} while (((int)lVar7 != 0) || (lVar6 = lVar6 - (lVar9 + 0x300), lVar7 = lVar9, (uVar8 & 0xffffffff) != (uVar4 & 0xffffffff)));
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

void thunk_CelDrawHdrClrHL(char col, int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	BYTE *local_8;
	undefined4 local_4;

	local_4 = 0;
	local_8 = pCelBuff;
	CelDrawHdrClrHL(col, sx, sy, (BYTE *)&local_8, nCel, nWidth, CelSkip, CelCap);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CelDrawHdrClrHL(char col, int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	bool bVar1;
	int iVar2;
	ulonglong uVar3;
	char *pcVar4;
	longlong lVar5;
	ulonglong uVar6;
	longlong lVar7;
	ulonglong uVar8;
	longlong lVar9;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	uint local_38[4];
	undefined4 local_28;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar7 = (longlong)nWidth;
	iVar2 = 0x100f8fd0;
	local_28 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar3 = LockMemFileIf((uint *)pCelBuff);
	bVar1 = (uVar3 & 0xffffffff) != 0;
	if ((((bVar1) && (bVar1)) && (_DAT_101271e4 != 0)) && (uVar3 = BESwap_1003ce1c(uVar3, nCel, CelSkip, CelCap, (int *)local_38), (uVar3 & 0xffffffff) != 0)) {
		uVar8 = uVar3 + (ulonglong)local_38[0];
		uVar6 = (ulonglong)_DAT_101271e4 + (ulonglong) * (uint *)(*(int *)(iVar2 + -0x7698) + (sy + CelSkip * -0x10) * 4) + (longlong)sx;
		lVar5 = lVar7;
		do {
			pcVar4 = (char *)uVar3;
			uVar3 = uVar3 + 1;
			lVar9 = (longlong)*pcVar4;
			if (lVar9 < 0) {
				uVar6 = uVar6 - lVar9;
				lVar5 = lVar5 + lVar9;
			} else {
				lVar5 = lVar5 - lVar9;
				if ((uVar6 & 0xffffffff) < (ulonglong)_DAT_1019fd84) {
					if ((uVar6 & 0xffffffff) < (ulonglong)(_DAT_1019fd84 - 0x300)) {
						do {
							pcVar4 = (char *)uVar3;
							uVar3 = uVar3 + 1;
							if (*pcVar4 != '\0') {
								iVar2 = (int)uVar6;
								*(char *)(iVar2 + -0x300) = col;
								*(char *)(iVar2 + -1) = col;
								*(char *)(iVar2 + 1) = col;
								*(char *)(iVar2 + 0x300) = col;
							}
							lVar9 = lVar9 + -1;
							uVar6 = uVar6 + 1;
						} while (lVar9 != 0);
					} else {
						do {
							pcVar4 = (char *)uVar3;
							uVar3 = uVar3 + 1;
							if (*pcVar4 != '\0') {
								iVar2 = (int)uVar6;
								*(char *)(iVar2 + -0x300) = col;
								*(char *)(iVar2 + -1) = col;
								*(char *)(iVar2 + 1) = col;
							}
							lVar9 = lVar9 + -1;
							uVar6 = uVar6 + 1;
						} while (lVar9 != 0);
					}
				} else {
					uVar3 = uVar3 + lVar9;
					uVar6 = uVar6 + lVar9;
				}
			}
		} while (((int)lVar5 != 0) || (uVar6 = uVar6 - (lVar7 + 0x300), lVar5 = lVar7, (uVar8 & 0xffffffff) != (uVar3 & 0xffffffff)));
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ENG_set_pixel(int sx, int sy, BYTE col)

{
	BYTE *pBVar1;

	if (sy < 0) {
		return;
	}
	if (0x27f < sy) {
		return;
	}
	if (sx < 0x40) {
		return;
	}
	if (0x2bf < sx) {
		return;
	}
	pBVar1 = (BYTE *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + sy * 4) + sx);
	if (_DAT_1019fd84 <= pBVar1) {
		return;
	}
	*pBVar1 = col;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void engine_draw_pixel(int sx, int sy)

{
	if (_DAT_1012ed5c == 0) {
		if (_DAT_1012ed54 != 0) {
			if (sy < 0) {
				return;
			}
			if (0x27f < sy) {
				return;
			}
			if (sx < 0x40) {
				return;
			}
			if (0x2bf < sx) {
				return;
			}
		}
		sx = *(int *)(&DAT_1019ed80 + sy * 4) + sx;
	} else {
		if (_DAT_1012ed54 != 0) {
			if (sx < 0) {
				return;
			}
			if (0x27f < sx) {
				return;
			}
			if (sy < 0x40) {
				return;
			}
			if (0x2bf < sy) {
				return;
			}
		}
		sx = *(int *)(&DAT_1019ed80 + sx * 4) + sy;
	}
	if (_DAT_1019fd84 <= (undefined *)(_DAT_101271e4 + sx)) {
		return;
	}
	*(undefined *)(_DAT_101271e4 + sx) = DAT_1012ed58;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawLine(int x0, int y0, int x1, int y1, BYTE col)

{
	bool bVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	longlong lVar9;
	int sx;
	int sx_00;
	longlong lVar10;
	int sy_00;
	longlong lVar11;
	longlong lVar12;
	int iVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	int iVar23;

	lVar12 = (longlong)y1;
	lVar11 = (longlong)x1;
	lVar10 = (longlong)y0;
	lVar9 = (longlong)x0;
	_DAT_1012ed54 = 0;
	if ((x0 < 0x40) || (0x2bf < x0)) {
		_DAT_1012ed54 = 1;
	}
	if ((x1 < 0x40) || (0x2bf < x1)) {
		_DAT_1012ed54 = 1;
	}
	if ((y0 < 0xa0) || (0x1ff < y0)) {
		_DAT_1012ed54 = 1;
	}
	if ((y1 < 0xa0) || (0x1ff < y1)) {
		_DAT_1012ed54 = 1;
	}
	if (lVar11 - lVar9 < 0) {
		iVar6 = -1;
	} else {
		iVar6 = 1;
	}
	uVar22 = (longlong)(int)(lVar11 - lVar9) * (longlong)iVar6;
	if (lVar12 - lVar10 < 0) {
		iVar17 = -1;
	} else {
		iVar17 = 1;
	}
	uVar20 = (longlong)(int)(lVar12 - lVar10) * (longlong)iVar17;
	iVar8 = (int)uVar20;
	if (iVar6 == iVar17) {
		lVar14 = 1;
	} else {
		lVar14 = -1;
	}
	bVar1 = (int)uVar22 < iVar8;
	if (bVar1) {
		uVar2 = y0 ^ x0 ^ y0;
		lVar10 = (longlong)(int)uVar2;
		uVar3 = y1 ^ x1 ^ y1;
		lVar12 = (longlong)(int)uVar3;
		uVar21 = uVar20 ^ uVar22 ^ uVar20;
		iVar8 = (int)uVar21;
		lVar9 = (longlong)(int)(x0 ^ y0 ^ uVar2);
		lVar11 = (longlong)(int)(x1 ^ y1 ^ uVar3);
		uVar22 = uVar22 ^ uVar20 ^ uVar21;
	}
	_DAT_1012ed5c = (uint)bVar1;
	lVar15 = lVar12;
	lVar16 = lVar11;
	if ((int)lVar11 < (int)lVar9) {
		lVar15 = lVar10;
		lVar16 = lVar9;
		lVar10 = lVar12;
		lVar9 = lVar11;
	}
	uVar20 = uVar22 - 1;
	iVar7 = (int)uVar20;
	iVar19 = (iVar7 >> 2) + (uint)(iVar7 < 0 && (uVar20 & 3) != 0);
	iVar17 = (iVar7 >> 2) + (uint)(iVar7 < 0 && (uVar20 & 3) != 0);
	iVar6 = iVar17 * 4;
	iVar18 = iVar7 + iVar17 * -4;
	DAT_1012ed58 = col;
	engine_draw_pixel((int)lVar9, (int)lVar10);
	engine_draw_pixel((int)lVar16, (int)lVar15);
	uVar20 = (ulonglong)(uint)(iVar8 << 2) - (ulonglong)(uint)((int)uVar22 << 1);
	iVar17 = (int)lVar14;
	if ((longlong)uVar20 < 0) {
		lVar11 = (ulonglong)(uint)(iVar8 << 2) - uVar22;
		iVar23 = 0;
		while (true) {
			iVar13 = (int)lVar11;
			sy_00 = (int)lVar10;
			sy_00 = (int)lVar15;
			iVar4 = (int)lVar9;
			iVar5 = (int)lVar16;
			if (iVar19 <= iVar23)
				break;
			sx = iVar4 + 1;
			sx_00 = iVar5 + -1;
			if (iVar13 < 0) {
				engine_draw_pixel(sx, sy_00);
				engine_draw_pixel(iVar4 + 2, sy_00);
				engine_draw_pixel(sx_00, sy_00);
				engine_draw_pixel(iVar5 + -2, sy_00);
				uVar22 = (ulonglong)(uint)(iVar8 << 2);
			} else {
				if (iVar13 < iVar8 << 1) {
					engine_draw_pixel(sx, sy_00);
					engine_draw_pixel(iVar4 + 2, sy_00 + iVar17);
					engine_draw_pixel(sx_00, sy_00);
					lVar15 = lVar15 - lVar14;
					engine_draw_pixel(iVar5 + -2, (int)lVar15);
				} else {
					engine_draw_pixel(sx, sy_00 + iVar17);
					engine_draw_pixel(iVar4 + 2, sy_00 + iVar17);
					lVar15 = lVar15 - lVar14;
					engine_draw_pixel(sx_00, (int)lVar15);
					engine_draw_pixel(iVar5 + -2, (int)lVar15);
				}
				lVar10 = lVar10 + lVar14;
				uVar22 = uVar20;
			}
			lVar9 = lVar9 + 2;
			lVar16 = lVar16 + -2;
			lVar11 = lVar11 + uVar22;
			iVar23 = iVar23 + 1;
		}
		if (iVar7 != iVar6) {
			if (iVar13 < 0) {
				engine_draw_pixel(iVar4 + 1, sy_00);
				if (1 < iVar18) {
					engine_draw_pixel(iVar4 + 2, sy_00);
				}
				if (2 < iVar18) {
					engine_draw_pixel(iVar5 + -1, sy_00);
				}
			} else {
				if (iVar13 < iVar8 << 1) {
					engine_draw_pixel(iVar4 + 1, sy_00);
					if (1 < iVar18) {
						engine_draw_pixel(iVar4 + 2, sy_00 + iVar17);
					}
					if (2 < iVar18) {
						engine_draw_pixel(iVar5 + -1, sy_00);
					}
				} else {
					engine_draw_pixel(iVar4 + 1, sy_00 + iVar17);
					if (1 < iVar18) {
						engine_draw_pixel(iVar4 + 2, sy_00 + iVar17);
					}
					if (2 < iVar18) {
						engine_draw_pixel(iVar5 + -1, sy_00 - iVar17);
					}
				}
			}
		}
	} else {
		iVar8 = iVar8 - (int)uVar22;
		iVar23 = iVar8 * 2;
		uVar21 = (ulonglong)(uint)(iVar8 * 4);
		lVar11 = uVar21 + uVar22;
		iVar8 = 0;
		while (true) {
			iVar13 = (int)lVar11;
			sy_00 = (int)lVar10;
			sy_00 = (int)lVar15;
			iVar4 = (int)lVar9;
			iVar5 = (int)lVar16;
			if (iVar19 <= iVar8)
				break;
			sx = iVar4 + 1;
			sx_00 = iVar5 + -1;
			if (iVar13 < 1) {
				if (iVar13 < iVar23) {
					engine_draw_pixel(sx, sy_00);
					engine_draw_pixel(iVar4 + 2, sy_00 + iVar17);
					engine_draw_pixel(sx_00, sy_00);
					lVar15 = lVar15 - lVar14;
					engine_draw_pixel(iVar5 + -2, (int)lVar15);
				} else {
					engine_draw_pixel(sx, sy_00 + iVar17);
					engine_draw_pixel(iVar4 + 2, sy_00 + iVar17);
					lVar15 = lVar15 - lVar14;
					engine_draw_pixel(sx_00, (int)lVar15);
					engine_draw_pixel(iVar5 + -2, (int)lVar15);
				}
				lVar10 = lVar10 + lVar14;
				uVar22 = uVar20;
			} else {
				engine_draw_pixel(sx, (int)(lVar10 + lVar14));
				lVar10 = lVar10 + lVar14 + lVar14;
				engine_draw_pixel(iVar4 + 2, (int)lVar10);
				engine_draw_pixel(sx_00, (int)(lVar15 - lVar14));
				lVar15 = (lVar15 - lVar14) - lVar14;
				engine_draw_pixel(iVar5 + -2, (int)lVar15);
				uVar22 = uVar21;
			}
			lVar11 = lVar11 + uVar22;
			lVar9 = lVar9 + 2;
			lVar16 = lVar16 + -2;
			iVar8 = iVar8 + 1;
		}
		if (iVar7 != iVar6) {
			if (iVar13 < 1) {
				if (iVar13 < iVar23) {
					engine_draw_pixel(iVar4 + 1, sy_00);
					if (1 < iVar18) {
						engine_draw_pixel(iVar4 + 2, sy_00 + iVar17);
					}
					if (2 < iVar18) {
						engine_draw_pixel(iVar5 + -1, sy_00);
					}
				} else {
					engine_draw_pixel(iVar4 + 1, sy_00 + iVar17);
					if (1 < iVar18) {
						engine_draw_pixel(iVar4 + 2, sy_00 + iVar17);
					}
					if (2 < iVar18) {
						if (iVar23 < iVar13) {
							engine_draw_pixel(iVar5 + -1, sy_00 - iVar17);
						} else {
							engine_draw_pixel(iVar5 + -1, sy_00);
						}
					}
				}
			} else {
				engine_draw_pixel(iVar4 + 1, sy_00 + iVar17);
				if (1 < iVar18) {
					engine_draw_pixel(iVar4 + 2, sy_00 + iVar17 + iVar17);
				}
				if (2 < iVar18) {
					engine_draw_pixel(iVar5 + -1, sy_00 - iVar17);
				}
			}
		}
	}
	return;
}

int GetDirection(int x1, int y1, int x2, int y2)

{
	int iVar1;
	int iVar2;

	y2 = y2 - y1;
	iVar2 = (int)((longlong)x2 - (longlong)x1);
	if (-1 < (longlong)x2 - (longlong)x1) {
		if (-1 < y2) {
			if (iVar2 <= y2 * 2) {
				return (int)(uint)(iVar2 << 1 < y2);
			}
			return 7;
		}
		iVar1 = 6;
		if (iVar2 << 1 < -y2) {
			iVar1 = 5;
		}
		if (iVar2 <= y2 * -2) {
			return iVar1;
		}
		return 7;
	}
	if (y2 < 0) {
		iVar1 = 4;
		if (iVar2 * -2 < -y2) {
			iVar1 = 5;
		}
		if (-iVar2 <= y2 * -2) {
			return iVar1;
		}
		return 3;
	}
	iVar1 = 2;
	if (iVar2 * -2 < y2) {
		iVar1 = 1;
	}
	if (-iVar2 <= y2 * 2) {
		return iVar1;
	}
	return 3;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetRndSeed(int s)

{
	_DAT_100f4128 = s;
	_DAT_1012ed4c = s;
	_DAT_1012ed50 = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int GetRndSeed(void)

{
	int iVar1;

	_DAT_1012ed50 = _DAT_1012ed50 + 1;
	_DAT_100f4128 = _DAT_100f4128 * 0x15a4e35 + 1;
	iVar1 = abs(_DAT_100f4128);
	return iVar1;
}

int random(BYTE idx, int v)

{
	int iVar1;
	BYTE BStack0000001b;

	if (v < 1) {
		iVar1 = 0;
	} else {
		if (v < 0xffff) {
			BStack0000001b = idx;
			iVar1 = GetRndSeed();
			iVar1 = (iVar1 >> 0x10) - ((iVar1 >> 0x10) / v) * v;
		} else {
			BStack0000001b = idx;
			iVar1 = GetRndSeed();
			iVar1 = iVar1 - (iVar1 / v) * v;
		}
	}
	return iVar1;
}

void engine_debug_trap(BOOL show_cursor)

{
	return;
}

BYTE *DiabloAllocPtr(DWORD dwBytes)

{
	BYTE *pBVar1;
	DWORD error_code;

	EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1012ed28);
	pBVar1 = (BYTE *)SMemAlloc(dwBytes, "ENGINE.CPP", 0xed2, 0);
	LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1012ed28);
	if (pBVar1 == (BYTE *)0x0) {
		error_code = SErrGetLastError();
		ErrDlg(0x69, error_code, "ENGINE.CPP", 0xef3);
	}
	return pBVar1;
}

void mem_free_dbg(void *p)

{
	int local_2c;

	if (p != (void *)0x0) {
		EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1012ed28);
		SMemFree(p, *(char **)(local_2c + -0x627c), 0xf23, '\0');
		LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1012ed28);
	}
	return;
}

BYTE *LoadFileInMem(char *pszName, DWORD *pdwFileLen)

{
	int iVar1;
	MEMFILE *pMemFile;
	BYTE *pBVar2;
	char cVar3;
	undefined uVar4;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	ulong local_18[6];

	iVar1 = 0x100f8fd0;
	WOpenFile(pszName, local_18, 0);
	pMemFile = (MEMFILE *)WGetFileSize(local_18[0], (DWORD *)0x0);
	pMemFile._3_1_ = SUB41(pMemFile, 0);
	if (pdwFileLen != (DWORD *)0x0) {
		*(MEMFILE **)pdwFileLen = pMemFile;
	}
	if (pMemFile == (MEMFILE *)0x0) {
		app_fatal(*(char **)(iVar1 + -0x6280), pszName);
	}
	uVar4 = 0;
	pBVar2 = (BYTE *)AllocateMemFile((ulong)pszName, pMemFile, 0);
	cVar3 = LockMemFile(
	    (longlong)(int)pBVar2, pMemFile._3_1_, uVar4, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	WReadFile(local_18[0], (LPVOID)(int)cVar3, (DWORD)pMemFile);
	WCloseFile(local_18[0]);
	UnlockMemFile((char)pBVar2);
	return pBVar2;
}

DWORD LoadFileWithMemLock(char *pszName, void *p)

{
	int iVar1;
	char cVar2;
	DWORD to_read;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	ulong local_18[6];

	iVar1 = 0x100f8fd0;
	cVar2 = LockMemFile((longlong)(int)p, (char)p, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	if (cVar2 == '\0') {
		app_fatal(*(char **)(iVar1 + -0x6284), pszName);
	}
	WOpenFile(pszName, local_18, 0);
	to_read = WGetFileSize(local_18[0], (DWORD *)0x0);
	if ((longlong)(int)to_read == 0) {
		app_fatal(*(char **)(iVar1 + -0x6280), pszName);
	}
	if ((ulonglong) * (uint *)((int)p + 0x90) < ((longlong)(int)to_read & 0xffffffffU)) {
		app_fatal(*(char **)(iVar1 + -0x6288), pszName);
	}
	WReadFile(local_18[0], (LPVOID)(int)cVar2, to_read);
	WCloseFile(local_18[0]);
	UnlockMemFile((char)p);
	return to_read;
}

DWORD LoadFileWithMem(char *pszName, void *p)

{
	int iVar1;
	DWORD to_read;
	ulong local_18[6];

	iVar1 = 0x100f8fd0;
	if (p == (void *)0x0) {
		iVar1 = 0x100f8fd0;
		app_fatal("LoadFileWithMem(NULL):\n%s", pszName);
	}
	WOpenFile(pszName, local_18, 0);
	to_read = WGetFileSize(local_18[0], (DWORD *)0x0);
	if (to_read == 0) {
		app_fatal(*(char **)(iVar1 + -0x6280), pszName);
	}
	WReadFile(local_18[0], p, to_read);
	WCloseFile(local_18[0]);
	return to_read;
}

void Cl2ApplyTrans(BYTE *p, BYTE *ttbl, int nCel)

{
	bool bVar1;
	longlong lVar2;
	ulonglong uVar3;
	char cVar6;
	ulonglong uVar4;
	longlong lVar5;
	char cVar7;
	undefined uVar9;
	longlong lVar8;
	undefined uVar10;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	int iVar11;
	longlong lVar12;
	longlong lVar13;
	undefined in_stack_ffffffab;

	uVar10 = (undefined)nCel;
	uVar9 = (char)ttbl;
	uVar3 = LockMemFileIf((uint *)p);
	cVar6 = LockMemFile((longlong)(int)ttbl, uVar9, uVar10, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab);
	iVar11 = 1;
	while (iVar11 <= nCel) {
		uVar4 = BESwap_1003cdd0((int)uVar3, iVar11);
		lVar5 = BESwap_1003cddc((int)uVar3, iVar11);
		lVar5 = lVar5 + -10;
		lVar12 = uVar3 + uVar4 + 10;
		while (true) {
			lVar13 = lVar12;
			lVar8 = lVar5;
			if ((int)lVar8 == 0)
				break;
			lVar12 = lVar13 + 1;
			lVar5 = lVar8 + -1;
			if (*(char *)lVar13 < '\0') {
				cVar7 = -*(char *)lVar13;
				lVar2 = (longlong)cVar7;
				if (cVar7 < 'B') {
					while (true) {
						bVar1 = cVar7 == '\0';
						cVar7 = cVar7 + -1;
						lVar5 = (lVar8 + -1) - lVar2;
						if (bVar1)
							break;
						*(byte *)lVar12 = *(byte *)((int)cVar6 + (uint) * (byte *)lVar12);
						lVar12 = lVar12 + 1;
					}
				} else {
					*(byte *)lVar12 = *(byte *)((int)cVar6 + (uint) * (byte *)lVar12);
					lVar5 = lVar8 + -2;
					lVar12 = lVar13 + 2;
				}
			}
		}
		iVar11 = iVar11 + 1;
	}
	UnlockMemFile((char)ttbl);
	UnlockMemFileIf((int *)p);
	return;
}

void Cl2DecDatFrm1(BYTE *pDecodeTo, BYTE *pRLEBytes, int nDataSize, int nWidth)

{
	BYTE BVar1;
	longlong lVar2;
	longlong lVar3;
	BYTE *pBVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;

	lVar6 = (longlong)nWidth;
	lVar3 = (longlong)(int)pDecodeTo;
	lVar8 = (longlong)nDataSize;
	lVar9 = lVar6;
	do {
		pBVar4 = pRLEBytes + 1;
		lVar5 = lVar8 + -1;
		lVar2 = (longlong)(char)*pRLEBytes;
		if (lVar2 < 0) {
			lVar7 = -lVar2;
			if ((int)lVar7 < 0x42) {
				lVar5 = lVar5 + lVar2;
				do {
					BVar1 = *pBVar4;
					lVar7 = lVar7 + -1;
					pBVar4 = pBVar4 + 1;
					*(BYTE *)lVar3 = BVar1;
					lVar3 = lVar3 + 1;
				} while (lVar7 != 0);
			} else {
				BVar1 = *pBVar4;
				lVar7 = lVar7 + -0x41;
				lVar2 = -lVar7;
				pBVar4 = pRLEBytes + 2;
				lVar5 = lVar8 + -2;
				do {
					lVar7 = lVar7 + -1;
					*(BYTE *)lVar3 = BVar1;
					lVar3 = lVar3 + 1;
				} while (lVar7 != 0);
			}
			lVar9 = lVar9 + lVar2;
			if ((int)lVar9 == 0) {
				lVar3 = (lVar3 + -0x300) - lVar6;
				lVar9 = lVar6;
			}
		} else {
			do {
				if ((int)lVar9 < (int)lVar2) {
					lVar8 = lVar2 - lVar9;
					lVar2 = lVar9;
				} else {
					lVar8 = 0;
				}
				lVar3 = lVar3 + lVar2;
				lVar9 = lVar9 - lVar2;
				if (lVar9 == 0) {
					lVar3 = (lVar3 + -0x300) - lVar6;
					lVar9 = lVar6;
				}
				lVar2 = lVar8;
			} while ((int)lVar8 != 0);
		}
		lVar8 = lVar5;
		pRLEBytes = pBVar4;
	} while ((int)lVar5 != 0);
	return;
}

void Cl2DecDatFrm2(BYTE *pDecodeTo, BYTE *pRLEBytes, int nDataSize, int nWidth, char col)

{
	BYTE BVar1;
	int iVar2;
	longlong lVar3;
	BYTE *pBVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;

	lVar6 = (longlong)nWidth;
	lVar3 = (longlong)(int)pDecodeTo;
	lVar10 = (longlong)nDataSize;
	lVar7 = lVar6;
	do {
		pBVar4 = pRLEBytes + 1;
		lVar5 = lVar10 + -1;
		lVar8 = (longlong)(char)*pRLEBytes;
		if (lVar8 < 0) {
			lVar9 = -lVar8;
			if ((int)lVar9 < 0x42) {
				lVar5 = lVar5 + lVar8;
				do {
					BVar1 = *pBVar4;
					pBVar4 = pBVar4 + 1;
					if (BVar1 != '\0') {
						iVar2 = (int)lVar3;
						*(char *)(iVar2 + -1) = col;
						*(char *)(iVar2 + 1) = col;
						*(char *)(iVar2 + -0x300) = col;
						*(char *)(iVar2 + 0x300) = col;
					}
					lVar9 = lVar9 + -1;
					lVar3 = lVar3 + 1;
				} while (lVar9 != 0);
			} else {
				BVar1 = *pBVar4;
				lVar9 = lVar9 + -0x41;
				lVar5 = lVar10 + -2;
				pBVar4 = pRLEBytes + 2;
				lVar8 = lVar9;
				if (BVar1 == '\0')
					goto LAB_1003f5b8;
				*(char *)((int)lVar3 + -1) = col;
				lVar8 = -lVar9;
				*(char *)((int)lVar3 + (int)lVar9) = col;
				do {
					*(char *)((int)lVar3 + -0x300) = col;
					lVar9 = lVar9 + -1;
					*(char *)((int)lVar3 + 0x300) = col;
					lVar3 = lVar3 + 1;
				} while (lVar9 != 0);
			}
			lVar7 = lVar7 + lVar8;
			if ((int)lVar7 == 0) {
				lVar3 = (lVar3 + -0x300) - lVar6;
				lVar7 = lVar6;
			}
		} else {
		LAB_1003f5b8:
			do {
				if ((int)lVar7 < (int)lVar8) {
					lVar10 = lVar8 - lVar7;
					lVar8 = lVar7;
				} else {
					lVar10 = 0;
				}
				lVar3 = lVar3 + lVar8;
				lVar7 = lVar7 - lVar8;
				if (lVar7 == 0) {
					lVar3 = (lVar3 + -0x300) - lVar6;
					lVar7 = lVar6;
				}
				lVar8 = lVar10;
			} while ((int)lVar10 != 0);
		}
		lVar10 = lVar5;
		pRLEBytes = pBVar4;
		if ((int)lVar5 == 0) {
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cl2DecDatLightTbl1(BYTE *pDecodeTo, BYTE *pRLEBytes, int nDataSize, int nWidth, BYTE *pTable)

{
	byte bVar1;
	BYTE BVar2;
	longlong lVar3;
	longlong lVar4;
	byte *pbVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;

	lVar7 = (longlong)nWidth;
	lVar4 = (longlong)(int)pDecodeTo;
	lVar9 = (longlong)nDataSize;
	lVar10 = lVar7;
	_DAT_100f4124 = nWidth;
	do {
		pbVar5 = pRLEBytes + 1;
		lVar6 = lVar9 + -1;
		lVar3 = (longlong)(char)*pRLEBytes;
		if (lVar3 < 0) {
			lVar8 = -lVar3;
			if ((int)lVar8 < 0x42) {
				lVar6 = lVar6 + lVar3;
				do {
					bVar1 = *pbVar5;
					lVar8 = lVar8 + -1;
					pbVar5 = pbVar5 + 1;
					*(BYTE *)lVar4 = pTable[(uint)bVar1];
					lVar4 = lVar4 + 1;
				} while (lVar8 != 0);
			} else {
				lVar8 = lVar8 + -0x41;
				lVar3 = -lVar8;
				lVar6 = lVar9 + -2;
				BVar2 = pTable[(uint)*pbVar5];
				pbVar5 = pRLEBytes + 2;
				do {
					lVar8 = lVar8 + -1;
					*(BYTE *)lVar4 = BVar2;
					lVar4 = lVar4 + 1;
				} while (lVar8 != 0);
			}
			lVar10 = lVar10 + lVar3;
			if ((int)lVar10 == 0) {
				lVar4 = (lVar4 + -0x300) - lVar7;
				lVar10 = lVar7;
			}
		} else {
			do {
				if ((int)lVar10 < (int)lVar3) {
					lVar9 = lVar3 - lVar10;
					lVar3 = lVar10;
				} else {
					lVar9 = 0;
				}
				lVar4 = lVar4 + lVar3;
				lVar10 = lVar10 - lVar3;
				if (lVar10 == 0) {
					lVar4 = (lVar4 + -0x300) - lVar7;
					lVar10 = lVar7;
				}
				lVar3 = lVar9;
			} while ((int)lVar9 != 0);
		}
		lVar9 = lVar6;
		pRLEBytes = pbVar5;
	} while ((int)lVar6 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cl2DecDatFrm4(BYTE *pDecodeTo, BYTE *pRLEBytes, int nDataSize, int nWidth)

{
	undefined uVar1;
	ulonglong uVar2;
	longlong lVar3;
	undefined *puVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;

	lVar7 = (longlong)nWidth;
	uVar2 = SEXT48((int)pDecodeTo);
	lVar11 = (longlong)(int)pRLEBytes;
	lVar5 = (longlong)nDataSize;
	lVar8 = lVar7;
	do {
		lVar3 = lVar11 + 1;
		lVar6 = lVar5 + -1;
		lVar9 = (longlong) * (char *)lVar11;
		lVar10 = lVar9;
		if (lVar9 < 0) {
			lVar10 = -lVar9;
			if ((int)lVar10 < 0x42) {
				lVar6 = lVar6 + lVar9;
				if ((ulonglong)_DAT_1019fd84 <= (uVar2 & 0xffffffff)) {
					lVar3 = lVar3 + lVar10;
					goto LAB_1003f78c;
				}
				do {
					puVar4 = (undefined *)lVar3;
					lVar10 = lVar10 + -1;
					lVar3 = lVar3 + 1;
					*(undefined *)uVar2 = *puVar4;
					uVar2 = uVar2 + 1;
				} while (lVar10 != 0);
			} else {
				lVar10 = lVar10 + -0x41;
				uVar1 = *(undefined *)lVar3;
				lVar3 = lVar11 + 2;
				lVar6 = lVar5 + -2;
				if ((ulonglong)_DAT_1019fd84 <= (uVar2 & 0xffffffff))
					goto LAB_1003f78c;
				lVar9 = -lVar10;
				do {
					lVar10 = lVar10 + -1;
					*(undefined *)uVar2 = uVar1;
					uVar2 = uVar2 + 1;
				} while (lVar10 != 0);
			}
			lVar8 = lVar8 + lVar9;
			if ((int)lVar8 == 0) {
				uVar2 = (uVar2 - 0x300) - lVar7;
				lVar8 = lVar7;
			}
		} else {
		LAB_1003f78c:
			do {
				if ((int)lVar8 < (int)lVar10) {
					lVar11 = lVar10 - lVar8;
					lVar10 = lVar8;
				} else {
					lVar11 = 0;
				}
				uVar2 = uVar2 + lVar10;
				lVar8 = lVar8 - lVar10;
				if (lVar8 == 0) {
					uVar2 = (uVar2 - 0x300) - lVar7;
					lVar8 = lVar7;
				}
				lVar10 = lVar11;
			} while ((int)lVar11 != 0);
		}
		lVar11 = lVar3;
		lVar5 = lVar6;
		if ((int)lVar6 == 0) {
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cl2DecDatClrHL(BYTE *pDecodeTo, BYTE *pRLEBytes, int nDataSize, int nWidth, char col)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	char *pcVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;

	lVar7 = (longlong)nWidth;
	uVar2 = SEXT48((int)pDecodeTo);
	lVar11 = (longlong)(int)pRLEBytes;
	lVar5 = (longlong)nDataSize;
	lVar8 = lVar7;
	do {
		lVar3 = lVar11 + 1;
		lVar6 = lVar5 + -1;
		lVar9 = (longlong) * (char *)lVar11;
		lVar10 = lVar9;
		if (lVar9 < 0) {
			lVar10 = -lVar9;
			if ((int)lVar10 < 0x42) {
				lVar6 = lVar6 + lVar9;
				if ((ulonglong)_DAT_1019fd84 <= (uVar2 & 0xffffffff)) {
					lVar3 = lVar3 + lVar10;
					goto LAB_1003f8a8;
				}
				do {
					pcVar4 = (char *)lVar3;
					lVar3 = lVar3 + 1;
					if (*pcVar4 != '\0') {
						iVar1 = (int)uVar2;
						*(char *)(iVar1 + -1) = col;
						*(char *)(iVar1 + 1) = col;
						*(char *)(iVar1 + -0x300) = col;
						*(char *)(iVar1 + 0x300) = col;
					}
					lVar10 = lVar10 + -1;
					uVar2 = uVar2 + 1;
				} while (lVar10 != 0);
			} else {
				pcVar4 = (char *)lVar3;
				lVar10 = lVar10 + -0x41;
				lVar6 = lVar5 + -2;
				lVar3 = lVar11 + 2;
				if ((*pcVar4 == '\0') || ((ulonglong)_DAT_1019fd84 <= (uVar2 & 0xffffffff)))
					goto LAB_1003f8a8;
				*(char *)((int)uVar2 + -1) = col;
				lVar9 = -lVar10;
				*(char *)((int)uVar2 + (int)lVar10) = col;
				do {
					*(char *)((int)uVar2 + -0x300) = col;
					lVar10 = lVar10 + -1;
					*(char *)((int)uVar2 + 0x300) = col;
					uVar2 = uVar2 + 1;
				} while (lVar10 != 0);
			}
			lVar8 = lVar8 + lVar9;
			if ((int)lVar8 == 0) {
				uVar2 = (uVar2 - 0x300) - lVar7;
				lVar8 = lVar7;
			}
		} else {
		LAB_1003f8a8:
			do {
				if ((int)lVar8 < (int)lVar10) {
					lVar11 = lVar10 - lVar8;
					lVar10 = lVar8;
				} else {
					lVar11 = 0;
				}
				uVar2 = uVar2 + lVar10;
				lVar8 = lVar8 - lVar10;
				if (lVar8 == 0) {
					uVar2 = (uVar2 - 0x300) - lVar7;
					lVar8 = lVar7;
				}
				lVar10 = lVar11;
			} while ((int)lVar11 != 0);
		}
		lVar11 = lVar3;
		lVar5 = lVar6;
		if ((int)lVar6 == 0) {
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cl2DecDatLightTbl2(BYTE *pDecodeTo, BYTE *pRLEBytes, int nDataSize, int nWidth, BYTE *pTable)

{
	BYTE BVar1;
	ulonglong uVar2;
	longlong lVar3;
	byte *pbVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;

	lVar7 = (longlong)nWidth;
	uVar2 = SEXT48((int)pDecodeTo);
	lVar11 = (longlong)(int)pRLEBytes;
	lVar5 = (longlong)nDataSize;
	lVar8 = lVar7;
	do {
		lVar3 = lVar11 + 1;
		lVar6 = lVar5 + -1;
		lVar9 = (longlong) * (char *)lVar11;
		lVar10 = lVar9;
		if (lVar9 < 0) {
			lVar10 = -lVar9;
			if ((int)lVar10 < 0x42) {
				lVar6 = lVar6 + lVar9;
				if ((ulonglong)_DAT_1019fd84 <= (uVar2 & 0xffffffff)) {
					lVar3 = lVar3 + lVar10;
					goto LAB_1003f9a4;
				}
				do {
					pbVar4 = (byte *)lVar3;
					lVar10 = lVar10 + -1;
					lVar3 = lVar3 + 1;
					*(BYTE *)uVar2 = pTable[(uint)*pbVar4];
					uVar2 = uVar2 + 1;
				} while (lVar10 != 0);
			} else {
				lVar10 = lVar10 + -0x41;
				pbVar4 = (byte *)lVar3;
				lVar3 = lVar11 + 2;
				BVar1 = pTable[(uint)*pbVar4];
				lVar6 = lVar5 + -2;
				if ((ulonglong)_DAT_1019fd84 <= (uVar2 & 0xffffffff))
					goto LAB_1003f9a4;
				lVar9 = -lVar10;
				do {
					lVar10 = lVar10 + -1;
					*(BYTE *)uVar2 = BVar1;
					uVar2 = uVar2 + 1;
				} while (lVar10 != 0);
			}
			lVar8 = lVar8 + lVar9;
			if ((int)lVar8 == 0) {
				uVar2 = (uVar2 - 0x300) - lVar7;
				lVar8 = lVar7;
			}
		} else {
		LAB_1003f9a4:
			do {
				if ((int)lVar8 < (int)lVar10) {
					lVar11 = lVar10 - lVar8;
					lVar10 = lVar8;
				} else {
					lVar11 = 0;
				}
				uVar2 = uVar2 + lVar10;
				lVar8 = lVar8 - lVar10;
				if (lVar8 == 0) {
					uVar2 = (uVar2 - 0x300) - lVar7;
					lVar8 = lVar7;
				}
				lVar10 = lVar11;
			} while ((int)lVar11 != 0);
		}
		lVar11 = lVar3;
		lVar5 = lVar6;
		if ((int)lVar6 == 0) {
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cl2DecodeFrm1(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	int iVar1;
	ulonglong uVar2;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_28[2];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2 = LockMemFileIf((uint *)pCelBuff);
	if ((((_DAT_101271e4 != 0) && ((uVar2 & 0xffffffff) != 0)) && (0 < nCel)) && (uVar2 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, local_28), (uVar2 & 0xffffffff) != 0)) {
		Cl2DecDatFrm1((BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + sx),
		    (BYTE *)uVar2, local_28[0], nWidth);
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cl2DecodeFrm2(char col, int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	int iVar1;
	ulonglong uVar2;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_38[5];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2 = LockMemFileIf((uint *)pCelBuff);
	if ((((_DAT_101271e4 != 0) && ((uVar2 & 0xffffffff) != 0)) && (0 < nCel)) && (uVar2 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, local_38), (uVar2 & 0xffffffff) != 0)) {
		Cl2DecDatFrm2((BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + sx),
		    (BYTE *)uVar2, local_38[0], nWidth, col);
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cl2DecodeFrm3(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap, char light)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	int iVar4;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_38[5];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2 = LockMemFileIf((uint *)pCelBuff);
	if ((((_DAT_101271e4 != 0) && ((uVar2 & 0xffffffff) != 0)) && (0 < nCel)) && (lVar3 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, local_38), lVar3 != 0)) {
		if (**(int **)(iVar1 + -0x776c) == 0) {
			iVar4 = 0x1000;
		} else {
			iVar4 = 0x400;
		}
		if (light == '\x02') {
			iVar4 = iVar4 + 0x100;
		}
		if ('\x03' < light) {
			iVar4 = ((int)light + -4) * 0x100 + iVar4 + 0x300;
		}
		Cl2DecDatLightTbl1((BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + sx),
		    (BYTE *)lVar3, local_38[0], nWidth, (BYTE *)(**(int **)(iVar1 + -0x7770) + iVar4));
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cl2DecodeLightTbl(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	BYTE *pDecodeTo;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_28[2];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2 = LockMemFileIf((uint *)pCelBuff);
	if ((((_DAT_101271e4 != 0) && ((uVar2 & 0xffffffff) != 0)) && (0 < nCel)) && (lVar3 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, local_28), lVar3 != 0)) {
		pDecodeTo = (BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + sx);
		if (**(int **)(iVar1 + -0x7290) == 0) {
			Cl2DecDatFrm1(pDecodeTo, (BYTE *)lVar3, local_28[0], nWidth);
		} else {
			Cl2DecDatLightTbl1(pDecodeTo, (BYTE *)lVar3, local_28[0], nWidth,
			    (BYTE *)(**(int **)(iVar1 + -0x7770) + **(int **)(iVar1 + -0x7290) * 0x100));
		}
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cl2DecodeFrm4(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	int iVar1;
	ulonglong uVar2;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_28[2];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2 = LockMemFileIf((uint *)pCelBuff);
	if ((((_DAT_101271e4 != 0) && ((uVar2 & 0xffffffff) != 0)) && (0 < nCel)) && (uVar2 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, local_28), (uVar2 & 0xffffffff) != 0)) {
		Cl2DecDatFrm4((BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + sx),
		    (BYTE *)uVar2, local_28[0], nWidth);
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cl2DecodeClrHL(char col, int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	int iVar1;
	ulonglong uVar2;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_38[4];
	undefined4 local_28;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_28 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2 = LockMemFileIf((uint *)pCelBuff);
	if ((((_DAT_101271e4 != 0) && ((uVar2 & 0xffffffff) != 0)) && (0 < nCel)) && (uVar2 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, local_38), (uVar2 & 0xffffffff) != 0)) {
		_DAT_1019fd84 = _DAT_1019fd84 + -0x300;
		Cl2DecDatClrHL((BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + sx),
		    (BYTE *)uVar2, local_38[0], nWidth, col);
		_DAT_1019fd84 = _DAT_1019fd84 + 0x300;
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cl2DecodeFrm5(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap, char light)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	int iVar4;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_38[5];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2 = LockMemFileIf((uint *)pCelBuff);
	if ((((_DAT_101271e4 != 0) && ((uVar2 & 0xffffffff) != 0)) && (0 < nCel)) && (lVar3 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, local_38), lVar3 != 0)) {
		if (**(int **)(iVar1 + -0x776c) == 0) {
			iVar4 = 0x1000;
		} else {
			iVar4 = 0x400;
		}
		if (light == '\x02') {
			iVar4 = iVar4 + 0x100;
		}
		if ('\x03' < light) {
			iVar4 = ((int)light + -4) * 0x100 + iVar4 + 0x300;
		}
		Cl2DecDatLightTbl2((BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + sx),
		    (BYTE *)lVar3, local_38[0], nWidth, (BYTE *)(**(int **)(iVar1 + -0x7770) + iVar4));
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Cl2DecodeFrm6(int sx, int sy, BYTE *pCelBuff, int nCel, int nWidth, int CelSkip, int CelCap)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	BYTE *pDecodeTo;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_28[2];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar1 = 0x100f8fd0;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar2 = LockMemFileIf((uint *)pCelBuff);
	if ((((_DAT_101271e4 != 0) && ((uVar2 & 0xffffffff) != 0)) && (0 < nCel)) && (lVar3 = BESwap_1003ce1c(uVar2, nCel, CelSkip, CelCap, local_28), lVar3 != 0)) {
		pDecodeTo = (BYTE *)(_DAT_101271e4 + *(int *)(*(int *)(iVar1 + -0x7698) + (sy + CelSkip * -0x10) * 4) + sx);
		if (**(int **)(iVar1 + -0x7290) == 0) {
			Cl2DecDatFrm4(pDecodeTo, (BYTE *)lVar3, local_28[0], nWidth);
		} else {
			Cl2DecDatLightTbl2(pDecodeTo, (BYTE *)lVar3, local_28[0], nWidth,
			    (BYTE *)(**(int **)(iVar1 + -0x7770) + **(int **)(iVar1 + -0x7290) * 0x100));
		}
	}
	UnlockMemFileIf((int *)pCelBuff);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PlayInGameMovie(char *pszMovie)

{
	PaletteFadeOut(8);
	play_movie(pszMovie, 0);
	ClearScreenBuffer();
	_drawpanflag = 0xff;
	scrollrt_draw_game_screen(1);
	PaletteFadeIn(8);
	_drawpanflag = 0xff;
	return;
}