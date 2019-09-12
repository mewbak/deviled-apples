
ulonglong FUN_1003cdc8(byte *param_1)

{
	return (ulonglong)param_1[3] << 0x18 | (ulonglong)param_1[2] << 0x10 | (ulonglong)param_1[1] << 8
	    | (ulonglong)*param_1;
}

ulonglong FUN_1003cdd0(int param_1, int param_2)

{
	byte *pbVar1;

	pbVar1 = (byte *)(param_1 + param_2 * 4);
	return (ulonglong)pbVar1[3] << 0x18 | (ulonglong)pbVar1[2] << 0x10 | (ulonglong)pbVar1[1] << 8 | (ulonglong)*pbVar1;
}

longlong FUN_1003cddc(int param_1, int param_2)

{
	byte *pbVar1;
	byte *pbVar2;

	pbVar1 = (byte *)(param_1 + param_2 * 4);
	pbVar2 = (byte *)(param_1 + (param_2 + 1) * 4);
	return ((ulonglong)pbVar2[3] << 0x18 | (ulonglong)pbVar2[2] << 0x10 | (ulonglong)pbVar2[1] << 8 | (ulonglong)*pbVar2) - ((ulonglong)pbVar1[3] << 0x18 | (ulonglong)pbVar1[2] << 0x10 | (ulonglong)pbVar1[1] << 8 | (ulonglong)*pbVar1);
}

longlong FUN_1003cdf8(longlong param_1, int param_2, int *param_3)

{
	byte *pbVar1;
	ulonglong uVar2;

	pbVar1 = (byte *)((int)param_1 + param_2 * 4);
	uVar2 = (ulonglong)pbVar1[3] << 0x18 | (ulonglong)pbVar1[2] << 0x10 | (ulonglong)pbVar1[1] << 8 | (ulonglong)*pbVar1;
	pbVar1 = (byte *)((int)param_1 + (param_2 + 1) * 4);
	*param_3 = ((uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 | (uint)*pbVar1) - (int)uVar2;
	return param_1 + uVar2;
}

longlong FUN_1003ce1c(longlong param_1, int param_2, int param_3, int param_4, int *param_5)

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

void CelDrawDatOnly(undefined4 *param_1, undefined4 *param_2, int param_3, longlong param_4)

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

	if (param_1 == (undefined4 *)0x0) {
		return;
	}
	if (param_2 == (undefined4 *)0x0) {
		return;
	}
	lVar12 = param_4;
	local_10 = param_1;
	local_c = param_2;
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
		if (((int)lVar12 == 0) && (local_10 = (undefined4 *)((int)local_10 - ((int)param_4 + 0x300)), lVar12 = param_4, (undefined4 *)((int)param_2 + param_3) == local_c)) {
			return;
		}
	} while (true);
}

void CelDecodeOnly(int param_1, undefined8 param_2, longlong param_3, undefined8 param_4,
    longlong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	int local_28[4];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar1 = PTR_DAT_100f17cc;
	uVar7 = (undefined)param_4;
	uVar6 = (undefined)param_3;
	uVar5 = (undefined)param_2;
	uVar11 = (undefined)param_8;
	uVar10 = (undefined)param_7;
	uVar9 = (undefined)param_6;
	ppuVar2 = &toc;
	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar8 = (char)param_5;
	uVar3 = FUN_100b8f7c(param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	if ((((uVar3 & 0xffffffff) != 0) && (*(int *)puVar1 != 0)) && ((uVar3 & 0xffffffff) != 0)) {
		lVar4 = FUN_1003cdf8(uVar3, (int)param_4, local_28);
		uVar5 = (undefined)lVar4;
		uVar6 = (undefined)local_28[0];
		uVar7 = (char)param_5;
		CelDrawDatOnly((undefined4 *)(*(int *)puVar1 + *(int *)(ppuVar2[-0x1da6] + (int)param_2 * 4) + param_1),
		    (undefined4 *)lVar4, local_28[0], param_5);
	}
	FUN_100b9100((int)param_3, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffa8);
	return;
}

void CelDecDatOnly(undefined4 *param_1, longlong param_2, undefined8 param_3, longlong param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	bool bVar1;
	ulonglong uVar2;
	longlong lVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined4 in_stack_ffffffb8;
	int local_18[6];

	uVar5 = (undefined)param_3;
	uVar4 = (undefined)param_2;
	uVar7 = (undefined)param_5;
	uVar10 = (undefined)param_8;
	uVar9 = (undefined)param_7;
	uVar8 = (undefined)param_6;
	uVar6 = (char)param_4;
	uVar2 = FUN_100b8f7c(param_2, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	bVar1 = (uVar2 & 0xffffffff) != 0;
	if (((bVar1) && (bVar1)) && (param_1 != (undefined4 *)0x0)) {
		lVar3 = FUN_1003cdf8(uVar2, (int)param_3, local_18);
		uVar4 = (undefined)lVar3;
		uVar5 = (undefined)local_18[0];
		uVar6 = (char)param_4;
		CelDrawDatOnly(param_1, (undefined4 *)lVar3, local_18[0], param_4);
	}
	FUN_100b9100((int)param_2, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, in_stack_ffffffb8);
	return;
}

void CelDrawHdrOnly(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	CelDrawHdrOnly_part(param_1, param_2, ZEXT48(register0x0000000c) - 8, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffc8);
	return;
}

void CelDrawHdrOnly_part(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffa8;
	int local_28;

	puVar2 = PTR_DAT_100f17cc;
	uVar6 = (undefined)param_3;
	uVar5 = (undefined)param_2;
	uVar11 = (undefined)param_8;
	ppuVar3 = &toc;
	uVar7 = (char)param_4;
	uVar8 = (char)param_5;
	uVar9 = (char)param_6;
	uVar10 = (char)param_7;
	uVar4 = FUN_100b915c((uint *)param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	if ((((uVar4 & 0xffffffff) != 0) && (*(int *)puVar2 != 0)) && ((uVar4 & 0xffffffff) != 0)) {
		uVar8 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
		uVar5 = (char)param_4;
		uVar6 = (char)param_6;
		uVar7 = (char)param_7;
		uVar4 = FUN_1003ce1c(uVar4, (int)param_4, param_6, param_7,
		    (int *)(ZEXT48(register0x0000000c) - 0x28));
		if ((uVar4 & 0xffffffff) != 0) {
			iVar1 = *(int *)puVar2;
			uVar8 = (undefined)iVar1;
			uVar6 = (undefined)local_28;
			uVar5 = (char)uVar4;
			uVar7 = (char)param_5;
			CelDrawDatOnly((undefined4 *)(iVar1 + *(int *)(ppuVar3[-0x1da6] + ((int)param_2 + param_6 * -0x10) * 4) + param_1), (undefined4 *)uVar4, local_28, param_5);
		}
	}
	FUN_100b91a4((int *)(uint *)param_3, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffa8);
	return;
}

void CelDecodeHdrOnly(undefined4 *param_1, longlong param_2, undefined8 param_3, longlong param_4,
    undefined8 param_5, int param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	bool bVar1;
	ulonglong uVar2;
	longlong lVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffa8;
	int local_28;

	uVar4 = (undefined)param_3;
	lVar3._7_1_ = (undefined)param_2;
	uVar9 = (undefined)param_8;
	uVar8 = (undefined)param_7;
	uVar5 = (char)param_4;
	uVar6 = (char)param_5;
	uVar7 = (char)param_6;
	uVar2 = FUN_100b8f7c(param_2, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	bVar1 = (uVar2 & 0xffffffff) != 0;
	if (((bVar1) && (bVar1)) && (param_1 != (undefined4 *)0x0)) {
		uVar6 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
		uVar4 = (char)param_5;
		uVar5 = (char)param_6;
		lVar3 = FUN_1003ce1c(uVar2, (int)param_3, (int)param_5, param_6,
		    (int *)(ZEXT48(register0x0000000c) - 0x28));
		lVar3._7_1_ = (undefined)lVar3;
		if (lVar3 != 0) {
			uVar4 = (undefined)local_28;
			uVar5 = (char)param_4;
			CelDrawDatOnly(param_1, (undefined4 *)lVar3, local_28, param_4);
		}
	}
	FUN_100b9100((int)param_2, (undefined)lVar3, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffa8);
	return;
}

void CelDecDatLightOnly(int param_1, byte *param_2, int param_3, longlong param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	longlong lVar4;
	undefined8 unaff_r27;
	longlong lVar5;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_28;
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
	if ((param_1 != 0) && (param_2 != (byte *)0x0)) {
		iVar2 = *(int *)PTR_DAT_100f1860;
		iVar3 = *_DAT_100f1d40;
		lVar5 = param_4;
		local_28 = param_1;
		local_24[0] = param_2;
		do {
			bVar1 = *local_24[0];
			lVar4 = (longlong)(char)bVar1;
			if (lVar4 < 0) {
				local_28 = local_28 - (int)(char)bVar1;
				local_24[0] = local_24[0] + 1;
			} else {
				lVar4 = -lVar4;
				local_24[0] = local_24[0] + 1;
				FUN_100c996c(&local_28, local_24, iVar2 + iVar3 * 0x100, (int)(char)bVar1);
			}
			lVar5 = lVar5 + lVar4;
		} while (((int)lVar5 != 0) || (local_28 = local_28 - ((int)param_4 + 0x300), lVar5 = param_4, param_2 + param_3 != local_24[0]));
	}
	return;
}

void CelDecDatLightTrans(ulonglong param_1, byte *param_2, int param_3, longlong param_4)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	byte *pbVar4;
	ulonglong uVar5;
	uint uVar6;
	undefined *puVar7;
	int iVar8;
	byte *pbVar9;
	longlong lVar10;
	ulonglong uVar11;
	uint uVar12;

	if (((param_1 & 0xffffffff) != 0) && (param_2 != (byte *)0x0)) {
		pbVar9 = param_2 + param_3;
		iVar8 = *(int *)PTR_DAT_100f1860 + *_DAT_100f1d40 * 0x100;
		uVar6 = (uint)param_1;
		do {
			lVar10 = param_4;
			do {
				bVar1 = *param_2;
				param_2 = param_2 + 1;
				uVar11 = SEXT18((char)bVar1);
				if ((longlong)uVar11 < 0) {
					param_1 = param_1 - uVar11;
					lVar10 = lVar10 + uVar11;
				} else {
					lVar10 = lVar10 - uVar11;
					uVar11 = (uVar11 & 0xffffffff00000000 | (ulonglong)(uint)((int)(char)bVar1 >> 1)) + (ulonglong)((char)bVar1 < '\0' && ((int)(char)bVar1 & 1U) != 0);
					uVar12 = (uint)uVar11;
					if (((uint)param_1 & 1) == (uVar6 & 1)) {
						if (uVar12 != 0) {
							uVar5 = (ulonglong)(uVar12 >> 3);
							if (uVar12 >> 3 != 0) {
								do {
									iVar3 = (int)param_1;
									*(undefined *)(iVar3 + 1) = *(undefined *)(iVar8 + (uint)param_2[1]);
									*(undefined *)(iVar3 + 3) = *(undefined *)(iVar8 + (uint)param_2[3]);
									*(undefined *)(iVar3 + 5) = *(undefined *)(iVar8 + (uint)param_2[5]);
									*(undefined *)(iVar3 + 7) = *(undefined *)(iVar8 + (uint)param_2[7]);
									*(undefined *)(iVar3 + 9) = *(undefined *)(iVar8 + (uint)param_2[9]);
									*(undefined *)(iVar3 + 0xb) = *(undefined *)(iVar8 + (uint)param_2[0xb]);
									*(undefined *)(iVar3 + 0xd) = *(undefined *)(iVar8 + (uint)param_2[0xd]);
									pbVar4 = param_2 + 0xf;
									param_2 = param_2 + 0x10;
									*(undefined *)(iVar3 + 0xf) = *(undefined *)(iVar8 + (uint)*pbVar4);
									param_1 = param_1 + 0x10;
									uVar5 = uVar5 - 1;
								} while (uVar5 != 0);
								uVar11 = uVar11 & 7;
								if (uVar11 == 0)
									goto LAB_1003d46c;
							}
							do {
								pbVar4 = param_2 + 1;
								param_2 = param_2 + 2;
								*(undefined *)((int)param_1 + 1) = *(undefined *)(iVar8 + (uint)*pbVar4);
								param_1 = param_1 + 2;
								uVar11 = uVar11 - 1;
							} while (uVar11 != 0);
						}
					LAB_1003d46c:
						if ((bVar1 & 1) != 0) {
							param_2 = param_2 + 1;
							param_1 = param_1 + 1;
						}
					} else {
						if (uVar12 != 0) {
							uVar5 = (ulonglong)(uVar12 >> 3);
							if (uVar12 >> 3 != 0) {
								do {
									puVar7 = (undefined *)param_1;
									*puVar7 = *(undefined *)(iVar8 + (uint)*param_2);
									puVar7[2] = *(undefined *)(iVar8 + (uint)param_2[2]);
									puVar7[4] = *(undefined *)(iVar8 + (uint)param_2[4]);
									puVar7[6] = *(undefined *)(iVar8 + (uint)param_2[6]);
									puVar7[8] = *(undefined *)(iVar8 + (uint)param_2[8]);
									puVar7[10] = *(undefined *)(iVar8 + (uint)param_2[10]);
									puVar7[0xc] = *(undefined *)(iVar8 + (uint)param_2[0xc]);
									pbVar4 = param_2 + 0xe;
									param_2 = param_2 + 0x10;
									puVar7[0xe] = *(undefined *)(iVar8 + (uint)*pbVar4);
									param_1 = param_1 + 0x10;
									uVar5 = uVar5 - 1;
								} while (uVar5 != 0);
								uVar11 = uVar11 & 7;
								if (uVar11 == 0)
									goto LAB_1003d528;
							}
							do {
								bVar2 = *param_2;
								param_2 = param_2 + 2;
								*(undefined *)param_1 = *(undefined *)(iVar8 + (uint)bVar2);
								param_1 = param_1 + 2;
								uVar11 = uVar11 - 1;
							} while (uVar11 != 0);
						}
					LAB_1003d528:
						if ((bVar1 & 1) != 0) {
							bVar1 = *param_2;
							param_2 = param_2 + 1;
							*(undefined *)param_1 = *(undefined *)(iVar8 + (uint)bVar1);
							param_1 = param_1 + 1;
						}
					}
				}
			} while ((int)lVar10 != 0);
			uVar6 = (uVar6 & 1) + 1;
			param_1 = param_1 - (param_4 + 0x300);
		} while (pbVar9 != param_2);
	}
	return;
}

void CelDecodeLightOnly(int param_1, undefined8 param_2, longlong param_3, undefined8 param_4,
    longlong param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined4 *puVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	int local_28[4];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar1 = PTR_DAT_100f17cc;
	uVar9 = (undefined)param_5;
	uVar8 = (undefined)param_4;
	uVar7 = (undefined)param_3;
	uVar6 = (undefined)param_2;
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	ppuVar2 = &toc;
	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar10 = uVar9;
	uVar3 = FUN_100b8f7c(param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	if ((((uVar3 & 0xffffffff) != 0) && (*(int *)puVar1 != 0)) && ((uVar3 & 0xffffffff) != 0)) {
		lVar4 = FUN_1003cdf8(uVar3, (int)param_4, local_28);
		uVar6 = (undefined)lVar4;
		puVar5 = (undefined4 *)(*(int *)puVar1 + *(int *)(ppuVar2[-0x1da6] + (int)param_2 * 4) + param_1);
		uVar7 = (undefined)local_28[0];
		if (*(int *)ppuVar2[-0x1ca4] == 0) {
			uVar8 = uVar9;
			CelDrawDatOnly(puVar5, (undefined4 *)lVar4, local_28[0], param_5);
		} else {
			uVar8 = uVar9;
			CelDecDatLightOnly((int)puVar5, (byte *)(undefined4 *)lVar4, local_28[0], param_5, uVar10, uVar11, uVar12,
			    uVar13, in_stack_ffffffa8);
		}
	}
	FUN_100b9100((int)param_3, uVar6, uVar7, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffa8);
	return;
}

void CelDecodeHdrLightOnly(int param_1, undefined8 param_2, longlong param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined4 *puVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined4 in_stack_ffffffa8;
	int local_28;

	puVar1 = PTR_DAT_100f17cc;
	uVar8 = (undefined)param_5;
	uVar7 = (undefined)param_4;
	uVar6 = (undefined)param_3;
	lVar4._7_1_ = (undefined)param_2;
	uVar12 = (undefined)param_8;
	ppuVar2 = &toc;
	uVar9 = uVar8;
	uVar10 = (char)param_6;
	uVar11 = (char)param_7;
	uVar3 = FUN_100b8f7c(param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	if ((((uVar3 & 0xffffffff) != 0) && (*(int *)puVar1 != 0)) && ((uVar3 & 0xffffffff) != 0)) {
		uVar9 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
		uVar6 = (char)param_6;
		uVar7 = (char)param_7;
		lVar4 = FUN_1003ce1c(uVar3, (int)param_4, param_6, param_7,
		    (int *)(ZEXT48(register0x0000000c) - 0x28));
		lVar4._7_1_ = (undefined)lVar4;
		if (lVar4 != 0) {
			puVar5 = (undefined4 *)(*(int *)puVar1 + *(int *)(ppuVar2[-0x1da6] + ((int)param_2 + param_6 * -0x10) * 4) + param_1);
			uVar6 = (undefined)local_28;
			if (*(int *)ppuVar2[-0x1ca4] == 0) {
				uVar7 = uVar8;
				CelDrawDatOnly(puVar5, (undefined4 *)lVar4, local_28, param_5);
			} else {
				uVar7 = uVar8;
				CelDecDatLightOnly((int)puVar5, (byte *)(undefined4 *)lVar4, local_28, param_5, uVar9, uVar10, uVar11,
				    uVar12, in_stack_ffffffa8);
			}
		}
	}
	FUN_100b9100((int)param_3, (undefined)lVar4, uVar6, uVar7, uVar9, uVar10, uVar11, uVar12,
	    in_stack_ffffffa8);
	return;
}

void CelDecodeHdrLightTrans(ulonglong param_1, longlong param_2, undefined8 param_3, longlong param_4,
    undefined8 param_5, int param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	bool bVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined4 *puVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined4 in_stack_ffffffa8;
	int local_28;

	uVar7 = (undefined)param_4;
	uVar6 = (undefined)param_3;
	lVar4._7_1_ = (undefined)param_2;
	uVar12 = (undefined)param_8;
	uVar11 = (undefined)param_7;
	ppuVar2 = &toc;
	uVar8 = uVar7;
	uVar9 = (char)param_5;
	uVar10 = (char)param_6;
	uVar3 = FUN_100b8f7c(param_2, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	bVar1 = (uVar3 & 0xffffffff) != 0;
	if (((bVar1) && (bVar1)) && ((param_1 & 0xffffffff) != 0)) {
		uVar9 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
		uVar6 = (char)param_5;
		uVar8 = (char)param_6;
		lVar4 = FUN_1003ce1c(uVar3, (int)param_3, (int)param_5, param_6,
		    (int *)(ZEXT48(register0x0000000c) - 0x28));
		lVar4._7_1_ = (undefined)lVar4;
		if (lVar4 != 0) {
			puVar5 = (undefined4 *)lVar4;
			uVar6 = (undefined)local_28;
			if (*(int *)ppuVar2[-0x1ca5] == 0) {
				if (*(int *)ppuVar2[-0x1ca4] == 0) {
					uVar8 = uVar7;
					CelDrawDatOnly((undefined4 *)param_1, puVar5, local_28, param_4);
				} else {
					uVar8 = uVar7;
					CelDecDatLightOnly((int)(undefined4 *)param_1, (byte *)puVar5, local_28, param_4, uVar9, uVar10,
					    uVar11, uVar12, in_stack_ffffffa8);
				}
			} else {
				uVar8 = uVar7;
				CelDecDatLightTrans(param_1, (byte *)puVar5, local_28, param_4);
			}
		}
	}
	FUN_100b9100((int)param_2, (undefined)lVar4, uVar6, uVar8, uVar9, uVar10, uVar11, uVar12,
	    in_stack_ffffffa8);
	return;
}

void CelDrawHdrLightRed(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	CelDrawHdrLightRed_part(param_1, param_2, ZEXT48(register0x0000000c) - 8, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffc8);
	return;
}

void CelDrawHdrLightRed_part(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	longlong lVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	byte *pbVar6;
	longlong lVar7;
	char cVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	ulonglong uVar13;
	longlong lVar14;
	char cVar15;
	char cVar16;
	char cVar17;
	undefined4 in_stack_ffffff98;
	uint local_38;

	puVar3 = PTR_DAT_100f17cc;
	uVar12 = (undefined)param_5;
	uVar10 = (undefined)param_3;
	cVar8 = (char)param_2;
	cVar16 = (char)param_8;
	ppuVar4 = &toc;
	lVar11._7_1_ = (char)param_4;
	uVar13._7_1_ = (char)param_6;
	cVar15 = (char)param_7;
	cVar17 = cVar16;
	uVar5 = FUN_100b915c((uint *)param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	if ((((uVar5 & 0xffffffff) != 0) && (*(int *)puVar3 != 0)) && ((uVar5 & 0xffffffff) != 0)) {
		uVar12 = (undefined)(ZEXT48(register0x0000000c) - 0x38);
		cVar8 = (char)param_4;
		uVar10 = (char)param_6;
		lVar11._7_1_ = (char)param_7;
		uVar5 = FUN_1003ce1c(uVar5, (int)param_4, param_6, param_7,
		    (int *)(ZEXT48(register0x0000000c) - 0x38));
		if ((uVar5 & 0xffffffff) != 0) {
			lVar9 = (ulonglong) * (uint *)puVar3 + (ulonglong) * (uint *)(ppuVar4[-0x1da6] + ((int)param_2 + param_6 * -0x10) * 4) + param_1;
			if (*(int *)ppuVar4[-0x1ddb] == 0) {
				lVar7 = 0x1000;
			} else {
				lVar7 = 0x400;
			}
			if (cVar16 == '\x02') {
				lVar7 = lVar7 + 0x100;
			}
			if ('\x03' < cVar16) {
				lVar7 = (ulonglong)(uint)(((int)cVar16 + -4) * 0x100) + lVar7 + 0x300;
			}
			uVar10 = (undefined)(param_5 + 0x300);
			uVar1 = *(uint *)ppuVar4[-0x1ddc];
			uVar13 = uVar5 + (ulonglong)local_38;
			uVar13._7_1_ = (undefined)uVar13;
			cVar8 = (char)((ulonglong)uVar1 + lVar7);
			lVar11 = param_5;
			do {
				do {
					cVar15 = *(char *)uVar5;
					uVar5 = uVar5 + 1;
					lVar14 = (longlong)cVar15;
					if (lVar14 < 0) {
						lVar9 = lVar9 - lVar14;
						lVar2 = lVar14;
					} else {
						lVar2 = -lVar14;
						do {
							pbVar6 = (byte *)uVar5;
							lVar14 = lVar14 + -1;
							cVar15 = (char)lVar14;
							uVar5 = uVar5 + 1;
							*(undefined *)lVar9 = *(undefined *)((int)((ulonglong)uVar1 + lVar7) + (uint)*pbVar6);
							lVar9 = lVar9 + 1;
						} while (lVar14 != 0);
					}
					lVar11 = lVar11 + lVar2;
					lVar11._7_1_ = (char)lVar11;
				} while ((int)lVar11 != 0);
				lVar9 = lVar9 - (param_5 + 0x300);
				uVar12 = (undefined)lVar9;
				lVar11 = param_5;
			} while ((uVar13 & 0xffffffff) != (uVar5 & 0xffffffff));
		}
	}
	FUN_100b91a4((int *)(uint *)param_3, cVar8, uVar10, (char)lVar11, uVar12, (undefined)uVar13, cVar15,
	    cVar17, in_stack_ffffff98);
	return;
}

void Cel2DecDatOnly(undefined4 *param_1, undefined4 *param_2, int param_3, longlong param_4)

{
	byte bVar1;
	byte bVar2;
	undefined2 uVar3;
	undefined4 uVar4;
	undefined4 *puVar5;
	undefined *puVar6;
	undefined4 *puVar8;
	ulonglong uVar7;
	undefined4 *puVar10;
	uint uVar11;
	ulonglong uVar9;
	undefined4 *puVar12;
	longlong lVar13;
	longlong lVar14;
	undefined4 *local_10;
	undefined4 *local_c;

	puVar6 = PTR_DAT_100f17c8;
	if (param_1 == (undefined4 *)0x0) {
		return;
	}
	if (param_2 == (undefined4 *)0x0) {
		return;
	}
	if (*(int *)PTR_DAT_100f17cc == 0) {
		return;
	}
	lVar13 = param_4;
	local_10 = param_1;
	local_c = param_2;
	do {
		puVar12 = (undefined4 *)((int)local_c + 1);
		bVar1 = *(byte *)local_c;
		lVar14 = (longlong)(char)bVar1;
		uVar11 = SEXT14((char)bVar1);
		if (lVar14 < 0) {
			lVar13 = lVar13 + lVar14;
			puVar10 = (undefined4 *)((int)local_10 - (int)(char)bVar1);
			local_c = puVar12;
		} else {
			lVar13 = lVar13 - lVar14;
			if (local_10 < *(undefined4 **)puVar6) {
				puVar10 = (undefined4 *)((int)local_10 + (int)(char)bVar1);
				puVar8 = (undefined4 *)((int)puVar12 + (int)(char)bVar1);
				if ((bVar1 & 1) != 0) {
					bVar2 = *(byte *)puVar12;
					puVar12 = (undefined4 *)((int)local_c + 2);
					uVar11 = (int)(char)bVar1 - 1;
					*(byte *)local_10 = bVar2;
					local_10 = (undefined4 *)((int)local_10 + 1);
				}
				if ((uVar11 & 2) != 0) {
					uVar3 = *(undefined2 *)puVar12;
					puVar12 = (undefined4 *)((int)puVar12 + 2);
					uVar11 = uVar11 - 2;
					*(undefined2 *)local_10 = uVar3;
					local_10 = (undefined4 *)((int)local_10 + 2);
				}
				uVar9 = (ulonglong)(uVar11 >> 2);
				local_c = puVar8;
				if (3 < (int)uVar11) {
					uVar7 = (ulonglong)(uVar11 >> 5);
					if (uVar11 >> 5 != 0) {
						do {
							*local_10 = *puVar12;
							local_10[1] = puVar12[1];
							local_10[2] = puVar12[2];
							local_10[3] = puVar12[3];
							local_10[4] = puVar12[4];
							local_10[5] = puVar12[5];
							local_10[6] = puVar12[6];
							puVar5 = puVar12 + 7;
							puVar12 = puVar12 + 8;
							local_10[7] = *puVar5;
							local_10 = local_10 + 8;
							uVar7 = uVar7 - 1;
						} while (uVar7 != 0);
						uVar9 = uVar9 & 7;
						local_c = puVar8;
						if ((uVar11 >> 2 & 7) == 0)
							goto LAB_1003dad8;
					}
					do {
						uVar4 = *puVar12;
						puVar12 = puVar12 + 1;
						*local_10 = uVar4;
						local_10 = local_10 + 1;
						uVar9 = uVar9 - 1;
						local_c = puVar8;
					} while (uVar9 != 0);
				}
			} else {
				puVar10 = (undefined4 *)((int)local_10 + (int)(char)bVar1);
				local_c = (undefined4 *)((int)puVar12 + (int)(char)bVar1);
			}
		}
	LAB_1003dad8:
		local_10 = puVar10;
		if (((int)lVar13 == 0) && (local_10 = (undefined4 *)((int)local_10 - ((int)param_4 + 0x300)), lVar13 = param_4, (undefined4 *)((int)param_2 + param_3) == local_c)) {
			return;
		}
	} while (true);
}

void Cel2DrawHdrOnly(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	Cel2DrawHdrOnly_part(param_1, param_2, ZEXT48(register0x0000000c) - 8, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffc8);
	return;
}

void Cel2DrawHdrOnly_part(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffa8;
	int local_28;

	puVar2 = PTR_DAT_100f17cc;
	uVar6 = (undefined)param_3;
	uVar5 = (undefined)param_2;
	uVar11 = (undefined)param_8;
	ppuVar3 = &toc;
	uVar7 = (char)param_4;
	uVar8 = (char)param_5;
	uVar9 = (char)param_6;
	uVar10 = (char)param_7;
	uVar4 = FUN_100b915c((uint *)param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	if ((((uVar4 & 0xffffffff) != 0) && (*(int *)puVar2 != 0)) && ((uVar4 & 0xffffffff) != 0)) {
		uVar8 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
		uVar5 = (char)param_4;
		uVar6 = (char)param_6;
		uVar7 = (char)param_7;
		uVar4 = FUN_1003ce1c(uVar4, (int)param_4, param_6, param_7,
		    (int *)(ZEXT48(register0x0000000c) - 0x28));
		if ((uVar4 & 0xffffffff) != 0) {
			iVar1 = *(int *)puVar2;
			uVar8 = (undefined)iVar1;
			uVar6 = (undefined)local_28;
			uVar5 = (char)uVar4;
			uVar7 = (char)param_5;
			Cel2DecDatOnly((undefined4 *)(iVar1 + *(int *)(ppuVar3[-0x1da6] + ((int)param_2 + param_6 * -0x10) * 4) + param_1), (undefined4 *)uVar4, local_28, param_5);
		}
	}
	FUN_100b91a4((int *)(uint *)param_3, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffa8);
	return;
}

void Cel2DecodeHdrOnly(undefined4 *param_1, longlong param_2, undefined8 param_3, longlong param_4,
    undefined8 param_5, int param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	bool bVar1;
	ulonglong uVar2;
	longlong lVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffa8;
	int local_28;

	uVar4 = (undefined)param_3;
	lVar3._7_1_ = (undefined)param_2;
	uVar9 = (undefined)param_8;
	uVar8 = (undefined)param_7;
	uVar5 = (char)param_4;
	uVar6 = (char)param_5;
	uVar7 = (char)param_6;
	uVar2 = FUN_100b8f7c(param_2, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	bVar1 = (uVar2 & 0xffffffff) != 0;
	if (((bVar1) && (bVar1)) && (param_1 != (undefined4 *)0x0)) {
		uVar6 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
		uVar4 = (char)param_5;
		uVar5 = (char)param_6;
		lVar3 = FUN_1003ce1c(uVar2, (int)param_3, (int)param_5, param_6,
		    (int *)(ZEXT48(register0x0000000c) - 0x28));
		lVar3._7_1_ = (undefined)lVar3;
		if (lVar3 != 0) {
			uVar4 = (undefined)local_28;
			uVar5 = (char)param_4;
			Cel2DecDatOnly(param_1, (undefined4 *)lVar3, local_28, param_4);
		}
	}
	FUN_100b9100((int)param_2, (undefined)lVar3, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffa8);
	return;
}

void Cel2DecDatLightOnly(uint param_1, byte *param_2, int param_3, longlong param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	byte *pbVar5;
	longlong lVar6;
	undefined8 unaff_r26;
	longlong lVar7;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	uint local_28;
	byte *local_24[3];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar4 = PTR_DAT_100f17c8;
	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (((param_1 != 0) && (param_2 != (byte *)0x0)) && (*(int *)PTR_DAT_100f17cc != 0)) {
		iVar2 = *(int *)PTR_DAT_100f1860;
		iVar3 = *_DAT_100f1d40;
		lVar7 = param_4;
		local_28 = param_1;
		local_24[0] = param_2;
		do {
			pbVar5 = local_24[0] + 1;
			bVar1 = *local_24[0];
			lVar6 = (longlong)(char)bVar1;
			if (lVar6 < 0) {
				lVar7 = lVar7 + lVar6;
				local_28 = local_28 - (int)(char)bVar1;
				local_24[0] = pbVar5;
			} else {
				lVar7 = lVar7 - lVar6;
				if (local_28 < *(uint *)puVar4) {
					local_24[0] = pbVar5;
					FUN_100c996c(&local_28, local_24, iVar2 + iVar3 * 0x100, (int)(char)bVar1);
				} else {
					local_28 = local_28 + (int)(char)bVar1;
					local_24[0] = pbVar5 + (int)(char)bVar1;
				}
			}
		} while (((int)lVar7 != 0) || (local_28 = local_28 - ((int)param_4 + 0x300), lVar7 = param_4, param_2 + param_3 != local_24[0]));
	}
	return;
}

void Cel2DecDatLightTrans(ulonglong param_1, ulonglong param_2, longlong param_3, longlong param_4)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	ulonglong uVar5;
	uint uVar6;
	undefined *puVar7;
	byte *pbVar8;
	int iVar9;
	ulonglong uVar10;
	longlong lVar11;
	ulonglong uVar12;
	uint uVar13;

	puVar4 = PTR_DAT_100f17c8;
	if ((((param_1 & 0xffffffff) != 0) && ((param_2 & 0xffffffff) != 0)) && (*(int *)PTR_DAT_100f17cc != 0)) {
		uVar10 = param_2 + param_3;
		iVar9 = *(int *)PTR_DAT_100f1860 + *_DAT_100f1d40 * 0x100;
		uVar6 = (uint)param_1;
		do {
			lVar11 = param_4;
			do {
				bVar1 = *(byte *)param_2;
				param_2 = param_2 + 1;
				uVar12 = SEXT18((char)bVar1);
				if ((longlong)uVar12 < 0) {
					param_1 = param_1 - uVar12;
					lVar11 = lVar11 + uVar12;
				} else {
					lVar11 = lVar11 - uVar12;
					if ((param_1 & 0xffffffff) < (ulonglong) * (uint *)puVar4) {
						uVar12 = (uVar12 & 0xffffffff00000000 | (ulonglong)(uint)((int)(char)bVar1 >> 1)) + (ulonglong)((char)bVar1 < '\0' && ((int)(char)bVar1 & 1U) != 0);
						uVar13 = (uint)uVar12;
						if (((uint)param_1 & 1) == (uVar6 & 1)) {
							if (uVar13 != 0) {
								uVar5 = (ulonglong)(uVar13 >> 3);
								if (uVar13 >> 3 != 0) {
									do {
										iVar2 = (int)param_2;
										iVar3 = (int)param_1;
										*(undefined *)(iVar3 + 1) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 1));
										*(undefined *)(iVar3 + 3) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 3));
										*(undefined *)(iVar3 + 5) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 5));
										*(undefined *)(iVar3 + 7) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 7));
										*(undefined *)(iVar3 + 9) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 9));
										*(undefined *)(iVar3 + 0xb) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 0xb));
										*(undefined *)(iVar3 + 0xd) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 0xd));
										param_2 = param_2 + 0x10;
										*(undefined *)(iVar3 + 0xf) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 0xf));
										param_1 = param_1 + 0x10;
										uVar5 = uVar5 - 1;
									} while (uVar5 != 0);
									uVar12 = uVar12 & 7;
									if (uVar12 == 0)
										goto LAB_1003decc;
								}
								do {
									iVar2 = (int)param_2;
									param_2 = param_2 + 2;
									*(undefined *)((int)param_1 + 1) = *(undefined *)(iVar9 + (uint) * (byte *)(iVar2 + 1));
									param_1 = param_1 + 2;
									uVar12 = uVar12 - 1;
								} while (uVar12 != 0);
							}
						LAB_1003decc:
							if ((bVar1 & 1) != 0) {
								param_2 = param_2 + 1;
								param_1 = param_1 + 1;
							}
						} else {
							if (uVar13 != 0) {
								uVar5 = (ulonglong)(uVar13 >> 3);
								if (uVar13 >> 3 != 0) {
									do {
										pbVar8 = (byte *)param_2;
										puVar7 = (undefined *)param_1;
										*puVar7 = *(undefined *)(iVar9 + (uint)*pbVar8);
										puVar7[2] = *(undefined *)(iVar9 + (uint)pbVar8[2]);
										puVar7[4] = *(undefined *)(iVar9 + (uint)pbVar8[4]);
										puVar7[6] = *(undefined *)(iVar9 + (uint)pbVar8[6]);
										puVar7[8] = *(undefined *)(iVar9 + (uint)pbVar8[8]);
										puVar7[10] = *(undefined *)(iVar9 + (uint)pbVar8[10]);
										puVar7[0xc] = *(undefined *)(iVar9 + (uint)pbVar8[0xc]);
										param_2 = param_2 + 0x10;
										puVar7[0xe] = *(undefined *)(iVar9 + (uint)pbVar8[0xe]);
										param_1 = param_1 + 0x10;
										uVar5 = uVar5 - 1;
									} while (uVar5 != 0);
									uVar12 = uVar12 & 7;
									if (uVar12 == 0)
										goto LAB_1003df88;
								}
								do {
									pbVar8 = (byte *)param_2;
									param_2 = param_2 + 2;
									*(undefined *)param_1 = *(undefined *)(iVar9 + (uint)*pbVar8);
									param_1 = param_1 + 2;
									uVar12 = uVar12 - 1;
								} while (uVar12 != 0);
							}
						LAB_1003df88:
							if ((bVar1 & 1) != 0) {
								pbVar8 = (byte *)param_2;
								param_2 = param_2 + 1;
								*(undefined *)param_1 = *(undefined *)(iVar9 + (uint)*pbVar8);
								param_1 = param_1 + 1;
							}
						}
					} else {
						param_2 = param_2 + uVar12;
						param_1 = param_1 + uVar12;
					}
				}
			} while ((int)lVar11 != 0);
			uVar6 = (uVar6 & 1) + 1;
			param_1 = param_1 - (param_4 + 0x300);
		} while ((uVar10 & 0xffffffff) != (param_2 & 0xffffffff));
	}
	return;
}

void Cel2DecodeHdrLight(int param_1, undefined8 param_2, longlong param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined4 *puVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined4 in_stack_ffffffa8;
	int local_28;

	puVar1 = PTR_DAT_100f17cc;
	uVar8 = (undefined)param_5;
	uVar7 = (undefined)param_4;
	uVar6 = (undefined)param_3;
	lVar4._7_1_ = (undefined)param_2;
	uVar12 = (undefined)param_8;
	ppuVar2 = &toc;
	uVar9 = uVar8;
	uVar10 = (char)param_6;
	uVar11 = (char)param_7;
	uVar3 = FUN_100b8f7c(param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	if ((((uVar3 & 0xffffffff) != 0) && (*(int *)puVar1 != 0)) && ((uVar3 & 0xffffffff) != 0)) {
		uVar9 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
		uVar6 = (char)param_6;
		uVar7 = (char)param_7;
		lVar4 = FUN_1003ce1c(uVar3, (int)param_4, param_6, param_7,
		    (int *)(ZEXT48(register0x0000000c) - 0x28));
		lVar4._7_1_ = (undefined)lVar4;
		if (lVar4 != 0) {
			puVar5 = (undefined4 *)(*(int *)puVar1 + *(int *)(ppuVar2[-0x1da6] + ((int)param_2 + param_6 * -0x10) * 4) + param_1);
			uVar6 = (undefined)local_28;
			if (*(int *)ppuVar2[-0x1ca4] == 0) {
				uVar7 = uVar8;
				Cel2DecDatOnly(puVar5, (undefined4 *)lVar4, local_28, param_5);
			} else {
				uVar7 = uVar8;
				Cel2DecDatLightOnly((uint)puVar5, (byte *)(undefined4 *)lVar4, local_28, param_5, uVar9, uVar10, uVar11,
				    uVar12, in_stack_ffffffa8);
			}
		}
	}
	FUN_100b9100((int)param_3, (undefined)lVar4, uVar6, uVar7, uVar9, uVar10, uVar11, uVar12,
	    in_stack_ffffffa8);
	return;
}

void Cel2DecodeLightTrans(ulonglong param_1, longlong param_2, undefined8 param_3, longlong param_4,
    undefined8 param_5, int param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	bool bVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffa8;
	uint local_28;

	uVar6 = (undefined)param_4;
	uVar5 = (undefined)param_3;
	uVar4 = (undefined)param_2;
	uVar11 = (undefined)param_8;
	uVar10 = (undefined)param_7;
	ppuVar2 = &toc;
	uVar7 = uVar6;
	uVar8 = (char)param_5;
	uVar9 = (char)param_6;
	uVar3 = FUN_100b8f7c(param_2, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	bVar1 = (uVar3 & 0xffffffff) != 0;
	if ((bVar1) && (bVar1)) {
		uVar8 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
		uVar5 = (char)param_5;
		uVar7 = (char)param_6;
		uVar3 = FUN_1003ce1c(uVar3, (int)param_3, (int)param_5, param_6,
		    (int *)(ZEXT48(register0x0000000c) - 0x28));
		uVar4 = (undefined)uVar3;
		if (uVar3 != 0) {
			uVar5 = (undefined)local_28;
			if (*(int *)ppuVar2[-0x1ca5] == 0) {
				if (*(int *)ppuVar2[-0x1ca4] == 0) {
					uVar7 = uVar6;
					Cel2DecDatOnly((undefined4 *)param_1, (undefined4 *)uVar3, local_28, param_4);
				} else {
					uVar7 = uVar6;
					Cel2DecDatLightOnly((uint)(undefined4 *)param_1, (byte *)(undefined4 *)uVar3, local_28, param_4,
					    uVar8, uVar9, uVar10, uVar11, in_stack_ffffffa8);
				}
			} else {
				uVar7 = uVar6;
				Cel2DecDatLightTrans(param_1, uVar3, (ulonglong)local_28, param_4);
			}
		}
	}
	FUN_100b9100((int)param_2, uVar4, uVar5, uVar7, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffa8);
	return;
}

void FUN_1003e170(longlong param_1, undefined8 param_2, longlong param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	byte *pbVar6;
	longlong lVar7;
	char cVar8;
	ulonglong uVar9;
	undefined uVar10;
	longlong lVar11;
	char cVar12;
	undefined uVar13;
	ulonglong uVar14;
	longlong lVar15;
	char cVar16;
	char cVar17;
	char cVar18;
	undefined4 in_stack_ffffff98;
	uint local_38;

	puVar3 = PTR_DAT_100f17cc;
	puVar2 = PTR_DAT_100f17c8;
	uVar13 = (undefined)param_5;
	uVar10 = (undefined)param_3;
	cVar8 = (char)param_2;
	cVar17 = (char)param_8;
	ppuVar4 = &toc;
	cVar12 = (char)param_4;
	uVar14._7_1_ = (char)param_6;
	cVar16 = (char)param_7;
	cVar18 = cVar17;
	uVar5 = FUN_100b8f7c(param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	if ((((uVar5 & 0xffffffff) != 0) && (*(int *)puVar3 != 0)) && ((uVar5 & 0xffffffff) != 0)) {
		uVar13 = (undefined)(ZEXT48(register0x0000000c) - 0x38);
		cVar8 = (char)param_4;
		uVar10 = (char)param_6;
		cVar12 = (char)param_7;
		uVar5 = FUN_1003ce1c(uVar5, (int)param_4, param_6, param_7,
		    (int *)(ZEXT48(register0x0000000c) - 0x38));
		if ((uVar5 & 0xffffffff) != 0) {
			uVar9 = (ulonglong) * (uint *)puVar3 + (ulonglong) * (uint *)(ppuVar4[-0x1da6] + ((int)param_2 + param_6 * -0x10) * 4) + param_1;
			if (*(int *)ppuVar4[-0x1ddb] == 0) {
				lVar7 = 0x1000;
			} else {
				lVar7 = 0x400;
			}
			if (cVar17 == '\x02') {
				lVar7 = lVar7 + 0x100;
			}
			if ('\x03' < cVar17) {
				lVar7 = (ulonglong)(uint)(((int)cVar17 + -4) * 0x100) + lVar7 + 0x300;
			}
			uVar10 = (undefined)(param_5 + 0x300);
			uVar1 = *(uint *)ppuVar4[-0x1ddc];
			uVar14 = uVar5 + (ulonglong)local_38;
			uVar14._7_1_ = (undefined)uVar14;
			cVar8 = (char)((ulonglong)uVar1 + lVar7);
			lVar11 = param_5;
			do {
				do {
					cVar16 = *(char *)uVar5;
					uVar5 = uVar5 + 1;
					lVar15 = (longlong)cVar16;
					if (lVar15 < 0) {
						uVar9 = uVar9 - lVar15;
						lVar11 = lVar11 + lVar15;
					} else {
						lVar11 = lVar11 - lVar15;
						if ((uVar9 & 0xffffffff) < (ulonglong) * (uint *)puVar2) {
							do {
								pbVar6 = (byte *)uVar5;
								lVar15 = lVar15 + -1;
								cVar16 = (char)lVar15;
								uVar5 = uVar5 + 1;
								*(undefined *)uVar9 = *(undefined *)((int)((ulonglong)uVar1 + lVar7) + (uint)*pbVar6);
								uVar9 = uVar9 + 1;
							} while (lVar15 != 0);
						} else {
							uVar5 = uVar5 + lVar15;
							uVar9 = uVar9 + lVar15;
						}
					}
					cVar12 = (char)lVar11;
				} while ((int)lVar11 != 0);
				uVar9 = uVar9 - (param_5 + 0x300);
				uVar13 = (undefined)uVar9;
				lVar11 = param_5;
			} while ((uVar14 & 0xffffffff) != (uVar5 & 0xffffffff));
		}
	}
	FUN_100b9100((int)param_3, cVar8, uVar10, cVar12, uVar13, (undefined)uVar14, cVar16, cVar18,
	    in_stack_ffffff98);
	return;
}

void CelDecodeRect(int param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, uint param_7, undefined4 param_8, undefined4 param_9)

{
	bool bVar1;
	byte *pbVar3;
	ulonglong uVar2;
	ulonglong uVar4;
	byte *pbVar6;
	uint uVar7;
	ulonglong uVar5;
	ulonglong uVar8;
	undefined2 *puVar9;
	undefined4 *puVar10;
	undefined uVar11;
	ulonglong uVar12;
	undefined4 *puVar13;
	undefined uVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	longlong lVar18;
	byte bVar19;
	undefined uVar20;
	undefined uVar21;
	undefined4 in_stack_ffffff98;
	byte *local_38;
	byte *local_34;
	uint local_30;

	uVar17 = (undefined)param_5;
	uVar15 = (undefined)param_4;
	uVar14 = (undefined)param_3;
	uVar11 = (undefined)param_2;
	uVar21 = (undefined)param_8;
	uVar20 = (undefined)param_7;
	bVar19 = (byte)param_6;
	uVar4 = FUN_100b8f7c(param_5, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	bVar1 = (uVar4 & 0xffffffff) != 0;
	if (((bVar1) && (bVar1)) && (param_1 != 0)) {
		uVar12 = ZEXT48(register0x0000000c) - 0x30;
		uVar4 = FUN_1003cdf8(uVar4, param_6, (int *)uVar12);
		local_34 = (byte *)uVar4;
		uVar8 = (longlong)(int)param_4 * (longlong)(int)param_3 + param_2;
		uVar4 = (uVar4 & 0xffffffff) + (ulonglong)local_30;
		uVar15 = (undefined)uVar4;
		local_38 = (byte *)(param_1 + (int)uVar8);
		lVar16 = (longlong)(int)param_7;
		do {
			pbVar3 = local_34 + 1;
			bVar19 = *local_34;
			lVar18 = (longlong)(char)bVar19;
			uVar7 = SEXT14((char)bVar19);
			if (lVar18 < 0) {
				lVar16 = lVar16 + lVar18;
				local_38 = local_38 + -(int)(char)bVar19;
				local_34 = pbVar3;
			} else {
				uVar12 = ZEXT48(local_38);
				uVar8 = ZEXT48(pbVar3);
				lVar16 = lVar16 - lVar18;
				pbVar6 = local_38 + (int)(char)bVar19;
				local_34 = pbVar3 + (int)(char)bVar19;
				if ((bVar19 & 1) != 0) {
					uVar8 = uVar8 + 1;
					uVar7 = (int)(char)bVar19 - 1;
					*local_38 = *pbVar3;
					uVar12 = uVar12 + 1;
				}
				if ((uVar7 & 2) != 0) {
					puVar9 = (undefined2 *)uVar8;
					uVar8 = uVar8 + 2;
					uVar7 = uVar7 - 2;
					*(undefined2 *)uVar12 = *puVar9;
					uVar12 = uVar12 + 2;
				}
				uVar5 = (ulonglong)(uVar7 >> 2);
				local_38 = pbVar6;
				if (3 < (int)uVar7) {
					uVar2 = (ulonglong)(uVar7 >> 5);
					if (uVar7 >> 5 != 0) {
						do {
							puVar10 = (undefined4 *)uVar8;
							puVar13 = (undefined4 *)uVar12;
							*puVar13 = *puVar10;
							puVar13[1] = puVar10[1];
							puVar13[2] = puVar10[2];
							puVar13[3] = puVar10[3];
							puVar13[4] = puVar10[4];
							puVar13[5] = puVar10[5];
							puVar13[6] = puVar10[6];
							uVar8 = uVar8 + 0x20;
							puVar13[7] = puVar10[7];
							uVar12 = uVar12 + 0x20;
							uVar2 = uVar2 - 1;
						} while (uVar2 != 0);
						uVar5 = uVar5 & 7;
						local_38 = pbVar6;
						if ((uVar7 >> 2 & 7) == 0)
							goto LAB_1003e47c;
					}
					do {
						puVar10 = (undefined4 *)uVar8;
						uVar8 = uVar8 + 4;
						*(undefined4 *)uVar12 = *puVar10;
						uVar12 = uVar12 + 4;
						uVar5 = uVar5 - 1;
						local_38 = pbVar6;
					} while (uVar5 != 0);
				}
			}
		LAB_1003e47c:
			uVar17 = (undefined)lVar16;
			uVar14 = (undefined)uVar12;
			uVar11 = (undefined)uVar8;
		} while (((int)lVar16 != 0) || (local_38 = local_38 + -((int)param_4 + param_7), lVar16 = (longlong)(int)param_7, (uVar4 & 0xffffffff) != ZEXT48(local_34)));
	}
	FUN_100b9100((int)param_5, uVar11, uVar14, uVar15, uVar17, bVar19, uVar20, uVar21, in_stack_ffffff98);
	return;
}

void CelDecodeClr(undefined param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, longlong param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	CelDecodeClr_part(param_1, param_2, param_3, ZEXT48(register0x0000000c) - 8, param_5, param_6, param_7,
	    param_8, in_stack_ffffffc8);
	return;
}

void CelDecodeClr_part(undefined param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, longlong param_6, int param_7, int param_8, undefined4 param_9)

{
	bool bVar1;
	longlong lVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	char *pcVar7;
	longlong lVar8;
	undefined uVar9;
	undefined uVar10;
	longlong lVar11;
	ulonglong uVar12;
	longlong lVar13;
	char cVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffff98;
	uint local_38;

	puVar4 = PTR_DAT_100f17cc;
	cVar14 = (char)param_6;
	lVar11._7_1_ = (undefined)param_4;
	uVar10 = (undefined)param_3;
	uVar9 = (undefined)param_2;
	ppuVar5 = &toc;
	uVar12._7_1_ = (char)param_5;
	uVar15 = (char)param_7;
	uVar16 = (char)param_8;
	uVar6 = FUN_100b915c((uint *)param_4, param_2, param_3, param_4, param_5, (int)param_6, param_7, param_8,
	    in_stack_ffffff98);
	bVar1 = (uVar6 & 0xffffffff) != 0;
	if (((bVar1) && (bVar1)) && (*(int *)puVar4 != 0)) {
		uVar12._7_1_ = (undefined)(ZEXT48(register0x0000000c) - 0x38);
		uVar9 = (char)param_5;
		uVar10 = (char)param_7;
		lVar11._7_1_ = (char)param_8;
		uVar6 = FUN_1003ce1c(uVar6, (int)param_5, param_7, param_8,
		    (int *)(ZEXT48(register0x0000000c) - 0x38));
		if ((uVar6 & 0xffffffff) != 0) {
			uVar10 = (undefined)(param_6 + 0x300);
			uVar12 = uVar6 + (ulonglong)local_38;
			uVar12._7_1_ = (undefined)uVar12;
			lVar8 = (ulonglong) * (uint *)puVar4 + (ulonglong) * (uint *)(ppuVar5[-0x1da6] + ((int)param_3 + param_7 * -0x10) * 4) + param_2;
			lVar11 = param_6;
			do {
				do {
					cVar14 = *(char *)uVar6;
					uVar6 = uVar6 + 1;
					lVar13 = (longlong)cVar14;
					if (lVar13 < 0) {
						lVar8 = lVar8 - lVar13;
						lVar2 = lVar13;
					} else {
						lVar2 = -lVar13;
						do {
							pcVar7 = (char *)uVar6;
							uVar6 = uVar6 + 1;
							if (*pcVar7 != '\0') {
								iVar3 = (int)lVar8;
								*(undefined *)(iVar3 + -0x300) = param_1;
								*(undefined *)(iVar3 + -1) = param_1;
								*(undefined *)(iVar3 + 1) = param_1;
								*(undefined *)(iVar3 + 0x300) = param_1;
							}
							lVar13 = lVar13 + -1;
							cVar14 = (char)lVar13;
							lVar8 = lVar8 + 1;
						} while (lVar13 != 0);
					}
					lVar11 = lVar11 + lVar2;
					lVar11._7_1_ = (undefined)lVar11;
				} while ((int)lVar11 != 0);
				lVar8 = lVar8 - (param_6 + 0x300);
				uVar9 = (undefined)lVar8;
				lVar11 = param_6;
			} while ((uVar12 & 0xffffffff) != (uVar6 & 0xffffffff));
		}
	}
	FUN_100b91a4((int *)(uint *)param_4, uVar9, uVar10, (undefined)lVar11, (undefined)uVar12, cVar14, uVar15, uVar16, in_stack_ffffff98);
	return;
}

void CelDrawHdrClrHL(undefined param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, longlong param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	CelDrawHdrClrHL_part(param_1, param_2, param_3, ZEXT48(register0x0000000c) - 8, param_5, param_6, param_7,
	    param_8, in_stack_ffffffc8);
	return;
}

void CelDrawHdrClrHL_part(undefined param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, longlong param_6, int param_7, int param_8, undefined4 param_9)

{
	bool bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	char *pcVar7;
	ulonglong uVar8;
	undefined uVar9;
	char cVar10;
	longlong lVar11;
	undefined uVar12;
	ulonglong uVar13;
	undefined uVar14;
	ulonglong uVar15;
	longlong lVar16;
	char cVar17;
	undefined uVar18;
	undefined4 in_stack_ffffff98;
	uint local_38;

	puVar4 = PTR_DAT_100f17cc;
	puVar3 = PTR_DAT_100f17c8;
	uVar15._7_1_ = (undefined)param_6;
	uVar12 = (undefined)param_4;
	cVar10 = (char)param_3;
	uVar9 = (undefined)param_2;
	ppuVar5 = &toc;
	uVar14 = (char)param_5;
	cVar17 = (char)param_7;
	uVar18 = (char)param_8;
	uVar6 = FUN_100b915c((uint *)param_4, param_2, param_3, param_4, param_5, (int)param_6, param_7, param_8,
	    in_stack_ffffff98);
	bVar1 = (uVar6 & 0xffffffff) != 0;
	if (((bVar1) && (bVar1)) && (*(int *)puVar4 != 0)) {
		uVar14 = (undefined)(ZEXT48(register0x0000000c) - 0x38);
		uVar9 = (char)param_5;
		cVar10 = (char)param_7;
		uVar12 = (char)param_8;
		uVar6 = FUN_1003ce1c(uVar6, (int)param_5, param_7, param_8,
		    (int *)(ZEXT48(register0x0000000c) - 0x38));
		if ((uVar6 & 0xffffffff) != 0) {
			uVar8 = (ulonglong) * (uint *)(ppuVar5[-0x1da6] + ((int)param_3 + param_7 * -0x10) * 4);
			uVar15 = uVar6 + (ulonglong)local_38;
			uVar15._7_1_ = (undefined)uVar15;
			cVar10 = (char)(param_6 + 0x300);
			uVar13 = (ulonglong) * (uint *)puVar4 + uVar8 + param_2;
			lVar11 = param_6;
			do {
				do {
					cVar17 = *(char *)uVar6;
					uVar6 = uVar6 + 1;
					lVar16 = (longlong)cVar17;
					if (lVar16 < 0) {
						uVar13 = uVar13 - lVar16;
						lVar11 = lVar11 + lVar16;
					} else {
						uVar8 = (ulonglong) * (uint *)puVar3;
						lVar11 = lVar11 - lVar16;
						if ((uVar13 & 0xffffffff) < uVar8) {
							if ((uVar13 & 0xffffffff) < (uVar8 - 0x300 & 0xffffffff)) {
								do {
									pcVar7 = (char *)uVar6;
									uVar6 = uVar6 + 1;
									if (*pcVar7 != '\0') {
										iVar2 = (int)uVar13;
										*(undefined *)(iVar2 + -0x300) = param_1;
										*(undefined *)(iVar2 + -1) = param_1;
										*(undefined *)(iVar2 + 1) = param_1;
										*(undefined *)(iVar2 + 0x300) = param_1;
									}
									lVar16 = lVar16 + -1;
									cVar17 = (char)lVar16;
									uVar13 = uVar13 + 1;
								} while (lVar16 != 0);
							} else {
								do {
									pcVar7 = (char *)uVar6;
									uVar6 = uVar6 + 1;
									if (*pcVar7 != '\0') {
										iVar2 = (int)uVar13;
										*(undefined *)(iVar2 + -0x300) = param_1;
										*(undefined *)(iVar2 + -1) = param_1;
										*(undefined *)(iVar2 + 1) = param_1;
									}
									lVar16 = lVar16 + -1;
									cVar17 = (char)lVar16;
									uVar13 = uVar13 + 1;
								} while (lVar16 != 0);
							}
						} else {
							uVar6 = uVar6 + lVar16;
							uVar13 = uVar13 + lVar16;
						}
					}
					uVar12 = (undefined)lVar11;
					uVar9 = (undefined)uVar8;
				} while ((int)lVar11 != 0);
				uVar13 = uVar13 - (param_6 + 0x300);
				uVar14 = (undefined)uVar13;
				lVar11 = param_6;
			} while ((uVar15 & 0xffffffff) != (uVar6 & 0xffffffff));
		}
	}
	FUN_100b91a4((int *)(uint *)param_4, uVar9, cVar10, uVar12, uVar14, (undefined)uVar15, cVar17, uVar18,
	    in_stack_ffffff98);
	return;
}

void ENG_set_pixel(int param_1, int param_2, undefined param_3)

{
	undefined *puVar1;

	if (param_2 < 0) {
		return;
	}
	if (0x27f < param_2) {
		return;
	}
	if (param_1 < 0x40) {
		return;
	}
	if (0x2bf < param_1) {
		return;
	}
	puVar1 = (undefined *)(*(int *)PTR_DAT_100f17cc + *(int *)(PTR_DAT_100f1938 + param_2 * 4) + param_1);
	if (*(undefined **)PTR_DAT_100f17c8 <= puVar1) {
		return;
	}
	*puVar1 = param_3;
	return;
}

void engine_draw_pixel(int param_1, int param_2)

{
	undefined *puVar1;

	if (*_DAT_100f1d38 == 0) {
		if (*_DAT_100f1d34 != 0) {
			if (param_2 < 0) {
				return;
			}
			if (0x27f < param_2) {
				return;
			}
			if (param_1 < 0x40) {
				return;
			}
			if (0x2bf < param_1) {
				return;
			}
		}
		puVar1 = (undefined *)(*(int *)PTR_DAT_100f17cc + *(int *)(PTR_DAT_100f1938 + param_2 * 4) + param_1);
	} else {
		if (*_DAT_100f1d34 != 0) {
			if (param_1 < 0) {
				return;
			}
			if (0x27f < param_1) {
				return;
			}
			if (param_2 < 0x40) {
				return;
			}
			if (0x2bf < param_2) {
				return;
			}
		}
		puVar1 = (undefined *)(*(int *)PTR_DAT_100f17cc + *(int *)(PTR_DAT_100f1938 + param_1 * 4) + param_2);
	}
	if (*(undefined **)PTR_DAT_100f17c8 <= puVar1) {
		return;
	}
	*puVar1 = *_DAT_100f1d30;
	return;
}

void DrawLine(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	int iVar6;
	ulonglong uVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	longlong lVar12;
	int iVar13;
	longlong lVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	int iVar22;

	puVar3 = _DAT_100f1d34;
	*_DAT_100f1d30 = param_5;
	puVar4 = _DAT_100f1d38;
	*puVar3 = 0;
	if (((int)param_1 < 0x40) || (0x2bf < (int)param_1)) {
		*puVar3 = 1;
	}
	if (((int)param_3 < 0x40) || (0x2bf < (int)param_3)) {
		*puVar3 = 1;
	}
	if (((int)param_2 < 0xa0) || (0x1ff < (int)param_2)) {
		*puVar3 = 1;
	}
	if (((int)param_4 < 0xa0) || (0x1ff < (int)param_4)) {
		*puVar3 = 1;
	}
	if ((longlong)(param_3 - param_1) < 0) {
		iVar6 = -1;
	} else {
		iVar6 = 1;
	}
	uVar21 = (longlong)(int)(param_3 - param_1) * (longlong)iVar6;
	if ((longlong)(param_4 - param_2) < 0) {
		iVar15 = -1;
	} else {
		iVar15 = 1;
	}
	uVar18 = (longlong)(int)(param_4 - param_2) * (longlong)iVar15;
	iVar8 = (int)uVar18;
	if (iVar6 == iVar15) {
		lVar14 = 1;
	} else {
		lVar14 = -1;
	}
	if ((int)uVar21 < iVar8) {
		param_1 = param_1 ^ param_2;
		param_3 = param_3 ^ param_4;
		param_2 = param_2 ^ param_1;
		*puVar4 = 1;
		param_4 = param_4 ^ param_3;
		uVar19 = uVar18 ^ uVar21 ^ uVar18;
		iVar8 = (int)uVar19;
		param_1 = param_1 ^ param_2;
		param_3 = param_3 ^ param_4;
		uVar21 = uVar21 ^ uVar18 ^ uVar19;
	} else {
		*puVar4 = 0;
	}
	uVar18 = param_4;
	uVar19 = param_3;
	if ((int)param_3 < (int)param_1) {
		uVar18 = param_2;
		uVar19 = param_1;
		param_2 = param_4;
		param_1 = param_3;
	}
	uVar5 = uVar21 - 1;
	iVar7 = (int)uVar5;
	iVar17 = (iVar7 >> 2) + (uint)(iVar7 < 0 && (uVar5 & 3) != 0);
	iVar15 = (iVar7 >> 2) + (uint)(iVar7 < 0 && (uVar5 & 3) != 0);
	iVar6 = iVar15 * 4;
	iVar16 = iVar7 + iVar15 * -4;
	engine_draw_pixel((int)param_1, (int)param_2);
	engine_draw_pixel((int)uVar19, (int)uVar18);
	uVar5 = (ulonglong)(uint)(iVar8 << 2) - (ulonglong)(uint)((int)uVar21 << 1);
	iVar15 = (int)lVar14;
	if ((longlong)uVar5 < 0) {
		lVar12 = (ulonglong)(uint)(iVar8 << 2) - uVar21;
		iVar22 = 0;
		while (true) {
			iVar13 = (int)lVar12;
			iVar11 = (int)param_2;
			iVar11 = (int)uVar18;
			iVar1 = (int)param_1;
			iVar2 = (int)uVar19;
			if (iVar17 <= iVar22)
				break;
			iVar9 = iVar1 + 1;
			iVar10 = iVar2 + -1;
			if (iVar13 < 0) {
				engine_draw_pixel(iVar9, iVar11);
				engine_draw_pixel(iVar1 + 2, iVar11);
				engine_draw_pixel(iVar10, iVar11);
				engine_draw_pixel(iVar2 + -2, iVar11);
				uVar21 = (ulonglong)(uint)(iVar8 << 2);
			} else {
				if (iVar13 < iVar8 << 1) {
					engine_draw_pixel(iVar9, iVar11);
					engine_draw_pixel(iVar1 + 2, iVar11 + iVar15);
					engine_draw_pixel(iVar10, iVar11);
					uVar18 = uVar18 - lVar14;
					engine_draw_pixel(iVar2 + -2, (int)uVar18);
				} else {
					engine_draw_pixel(iVar9, iVar11 + iVar15);
					engine_draw_pixel(iVar1 + 2, iVar11 + iVar15);
					uVar18 = uVar18 - lVar14;
					engine_draw_pixel(iVar10, (int)uVar18);
					engine_draw_pixel(iVar2 + -2, (int)uVar18);
				}
				param_2 = param_2 + lVar14;
				uVar21 = uVar5;
			}
			param_1 = param_1 + 2;
			uVar19 = uVar19 - 2;
			lVar12 = lVar12 + uVar21;
			iVar22 = iVar22 + 1;
		}
		if (iVar7 != iVar6) {
			if (iVar13 < 0) {
				engine_draw_pixel(iVar1 + 1, iVar11);
				if (1 < iVar16) {
					engine_draw_pixel(iVar1 + 2, iVar11);
				}
				if (2 < iVar16) {
					engine_draw_pixel(iVar2 + -1, iVar11);
				}
			} else {
				if (iVar13 < iVar8 << 1) {
					engine_draw_pixel(iVar1 + 1, iVar11);
					if (1 < iVar16) {
						engine_draw_pixel(iVar1 + 2, iVar11 + iVar15);
					}
					if (2 < iVar16) {
						engine_draw_pixel(iVar2 + -1, iVar11);
					}
				} else {
					engine_draw_pixel(iVar1 + 1, iVar11 + iVar15);
					if (1 < iVar16) {
						engine_draw_pixel(iVar1 + 2, iVar11 + iVar15);
					}
					if (2 < iVar16) {
						engine_draw_pixel(iVar2 + -1, iVar11 - iVar15);
					}
				}
			}
		}
	} else {
		iVar8 = iVar8 - (int)uVar21;
		iVar22 = iVar8 * 2;
		uVar20 = (ulonglong)(uint)(iVar8 * 4);
		lVar12 = uVar20 + uVar21;
		iVar8 = 0;
		while (true) {
			iVar13 = (int)lVar12;
			iVar11 = (int)param_2;
			iVar11 = (int)uVar18;
			iVar1 = (int)param_1;
			iVar2 = (int)uVar19;
			if (iVar17 <= iVar8)
				break;
			iVar9 = iVar1 + 1;
			iVar10 = iVar2 + -1;
			if (iVar13 < 1) {
				if (iVar13 < iVar22) {
					engine_draw_pixel(iVar9, iVar11);
					engine_draw_pixel(iVar1 + 2, iVar11 + iVar15);
					engine_draw_pixel(iVar10, iVar11);
					uVar18 = uVar18 - lVar14;
					engine_draw_pixel(iVar2 + -2, (int)uVar18);
				} else {
					engine_draw_pixel(iVar9, iVar11 + iVar15);
					engine_draw_pixel(iVar1 + 2, iVar11 + iVar15);
					uVar18 = uVar18 - lVar14;
					engine_draw_pixel(iVar10, (int)uVar18);
					engine_draw_pixel(iVar2 + -2, (int)uVar18);
				}
				param_2 = param_2 + lVar14;
				uVar21 = uVar5;
			} else {
				engine_draw_pixel(iVar9, (int)(param_2 + lVar14));
				param_2 = param_2 + lVar14 + lVar14;
				engine_draw_pixel(iVar1 + 2, (int)param_2);
				engine_draw_pixel(iVar10, (int)(uVar18 - lVar14));
				uVar18 = (uVar18 - lVar14) - lVar14;
				engine_draw_pixel(iVar2 + -2, (int)uVar18);
				uVar21 = uVar20;
			}
			lVar12 = lVar12 + uVar21;
			param_1 = param_1 + 2;
			uVar19 = uVar19 - 2;
			iVar8 = iVar8 + 1;
		}
		if (iVar7 != iVar6) {
			if (iVar13 < 1) {
				if (iVar13 < iVar22) {
					engine_draw_pixel(iVar1 + 1, iVar11);
					if (1 < iVar16) {
						engine_draw_pixel(iVar1 + 2, iVar11 + iVar15);
					}
					if (2 < iVar16) {
						engine_draw_pixel(iVar2 + -1, iVar11);
					}
				} else {
					engine_draw_pixel(iVar1 + 1, iVar11 + iVar15);
					if (1 < iVar16) {
						engine_draw_pixel(iVar1 + 2, iVar11 + iVar15);
					}
					if (2 < iVar16) {
						if (iVar22 < iVar13) {
							engine_draw_pixel(iVar2 + -1, iVar11 - iVar15);
						} else {
							engine_draw_pixel(iVar2 + -1, iVar11);
						}
					}
				}
			} else {
				engine_draw_pixel(iVar1 + 1, iVar11 + iVar15);
				if (1 < iVar16) {
					engine_draw_pixel(iVar1 + 2, iVar11 + iVar15 + iVar15);
				}
				if (2 < iVar16) {
					engine_draw_pixel(iVar2 + -1, iVar11 - iVar15);
				}
			}
		}
	}
	return;
}

ulonglong GetDirection(longlong param_1, int param_2, longlong param_3, int param_4)

{
	ulonglong uVar1;
	int iVar2;

	param_4 = param_4 - param_2;
	iVar2 = (int)(param_3 - param_1);
	if (-1 < param_3 - param_1) {
		if (-1 < param_4) {
			if (iVar2 <= param_4 * 2) {
				return (ulonglong)(iVar2 << 1 < param_4);
			}
			return 7;
		}
		uVar1 = 6;
		if (iVar2 << 1 < -param_4) {
			uVar1 = 5;
		}
		if (iVar2 <= param_4 * -2) {
			return uVar1;
		}
		return 7;
	}
	if (param_4 < 0) {
		uVar1 = 4;
		if (iVar2 * -2 < -param_4) {
			uVar1 = 5;
		}
		if (-iVar2 <= param_4 * -2) {
			return uVar1;
		}
		return 3;
	}
	uVar1 = 2;
	if (iVar2 * -2 < param_4) {
		uVar1 = 1;
	}
	if (-iVar2 <= param_4 * 2) {
		return uVar1;
	}
	return 3;
}

void SetRndSeed(undefined4 param_1)

{
	undefined4 *puVar1;

	puVar1 = _DAT_100f1d28;
	_DAT_100f4128 = param_1;
	*_DAT_100f1d2c = param_1;
	*puVar1 = 0;
	return;
}

void GetRndSeed(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	*_DAT_100f1d28 = *_DAT_100f1d28 + 1;
	_DAT_100f4128 = _DAT_100f4128 * 0x15a4e35 + 1;
	abs((ulonglong)_DAT_100f4128);
	return;
}

longlong random(undefined param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9, undefined param_10, undefined1 param_11)

{
	uint uVar1;
	longlong lVar2;
	ulonglong uVar3;
	int iVar4;
	undefined4 in_stack_ffffffc8;

	if (param_2 < 1) {
		lVar2 = 0;
	} else {
		iVar4 = (int)param_2;
		if (iVar4 < 0xffff) {
			uVar3 = GetRndSeed(0, (char)param_2, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
			uVar1 = (int)uVar3 >> 0x10;
			lVar2 = (uVar3 & 0xffffffff00000000 | (ulonglong)uVar1) - (longlong)((int)uVar1 / iVar4) * (longlong)iVar4;
		} else {
			lVar2 = GetRndSeed(0, (char)param_2, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
			lVar2 = lVar2 - (longlong)((int)lVar2 / iVar4) * (longlong)iVar4;
		}
	}
	return lVar2;
}

ulonglong DiabloAllocPtr(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	ulonglong uVar1;
	undefined uVar3;
	undefined8 uVar2;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	ulonglong uVar9;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	undefined4 in_stack_ffffffc8;

	uVar8 = (undefined)uParm5;
	uVar7 = (undefined7)((ulonglong)uParm5 >> 8);
	uVar9 = (ulonglong)_DAT_100f2d54;
	uVar4 = (undefined)_DAT_100f2d54;
	uVar3 = SUB41(PTR_DAT_100f2d58, 0);
	EnterCriticalSection(uVar3, param_2, param_3, param_4, uVar8, (char)uParm6, (char)uParm7, (char)uParm8,
	    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	uVar5 = 0xd2;
	uVar6 = 0;
	uVar1 = SMemAlloc(param_1, uVar4, 0xd2, 0, uVar8, (char)uParm6, (char)uParm7, (char)uParm8,
	    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	uVar3 = LeaveCriticalSection(uVar3, uVar4, uVar5, uVar6, uVar8, (char)uParm6, (char)uParm7, (char)uParm8,
	    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	if ((uVar1 & 0xffffffff) == 0) {
		uVar2 = SErrGetLastError(uVar3, uVar4, uVar5, uVar6, uVar8, (char)uParm6, (char)uParm7, (char)uParm8,
		    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
		ErrDlg(0x69, uVar2, uVar9, 0xef3, CONCAT71(uVar7, uVar8), uParm6, uParm7, uParm8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8);
	}
	return uVar1;
}

void mem_free_dbg(longlong param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	if (param_1 != 0) {
		uVar1 = SUB41(PTR_DAT_100f2d58, 0);
		EnterCriticalSection(uVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
		uVar2 = (undefined) * (undefined4 *)(local_2c + -0x627c);
		uVar3 = 0x23;
		uVar4 = 0;
		SMemFree((char)param_1, uVar2, 0x23, 0, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
		LeaveCriticalSection(uVar1, uVar2, uVar3, uVar4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
	}
	return;
}

longlong LoadFileInMem(longlong param_1, undefined4 *param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong extraout_r3;
	int iVar3;
	ulonglong uVar2;
	undefined uVar4;
	undefined8 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
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
	uint local_18;

	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)((ulonglong)param_4 >> 8);
	uVar8 = (undefined)param_4;
	ppuVar1 = &toc;
	uVar5 = 0;
	WOpenFile(param_1, ZEXT48(register0x0000000c) - 0x18, 0, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	WGetFileSize(local_18, 0, uVar5, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10), param_6, param_7, param_8, in_stack_ffffffb8);
	uVar6 = (undefined)extraout_r3;
	if (param_2 != (undefined4 *)0x0) {
		*param_2 = (int)extraout_r3;
	}
	if ((extraout_r3 & 0xffffffff) == 0) {
		app_fatal((int)ppuVar1[-0x18a0], param_1, uVar5, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar5 = 0;
	uVar2 = extraout_r3;
	iVar3 = DiabloAllocPtr((int)param_1, extraout_r3, 0, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
	    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffd0);
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	uVar2 = FUN_100b8f7c((longlong)iVar3, uVar2, uVar5, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
	    param_6, param_7, param_8, in_stack_ffffffb8);
	uVar4 = (undefined)uVar2;
	WReadFile((ulonglong)local_18);
	WCloseFile((char)local_18, uVar4, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffb8);
	FUN_100b9100(iVar3, uVar4, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffb8);
	return (longlong)iVar3;
}

ulonglong LoadFileWithMem(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	ulonglong extraout_r3;
	undefined uVar3;
	undefined8 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
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
	uint local_18;

	uVar8 = (undefined7)((ulonglong)param_5 >> 8);
	uVar9 = (undefined)param_5;
	uVar6 = (undefined7)((ulonglong)param_4 >> 8);
	uVar7 = (undefined)param_4;
	ppuVar1 = &toc;
	uVar2 = FUN_100b8f7c(param_2, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	uVar3 = (undefined)uVar2;
	if (uVar2 == 0) {
		app_fatal((int)ppuVar1[-0x18a1], param_1, param_3, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar4 = 0;
	WOpenFile(param_1, ZEXT48(register0x0000000c) - 0x18, 0, CONCAT71(uVar6, uVar7),
	    CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffffb8);
	WGetFileSize(local_18, 0, uVar4, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_6, param_7, param_8,
	    in_stack_ffffffb8);
	uVar5 = (undefined)extraout_r3;
	if (extraout_r3 == 0) {
		app_fatal((int)ppuVar1[-0x18a0], param_1, uVar4, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar12 = (undefined)param_8;
	uVar11 = (undefined)param_7;
	uVar10 = (undefined)param_6;
	if ((ulonglong) * (uint *)((int)param_2 + 0x90) < (extraout_r3 & 0xffffffff)) {
		app_fatal((int)ppuVar1[-0x18a2], param_1, uVar4, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	WReadFile((ulonglong)local_18);
	WCloseFile((char)local_18, uVar3, uVar5, uVar7, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffb8);
	FUN_100b9100((int)param_2, uVar3, uVar5, uVar7, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffb8);
	return extraout_r3;
}

longlong LoadFileWithMem2(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	longlong extraout_r3;
	undefined uVar2;
	undefined8 uVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
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
	uint local_18;

	uVar2 = (undefined)param_2;
	uVar6 = (undefined7)((ulonglong)param_5 >> 8);
	uVar7 = (undefined)param_5;
	uVar4 = (undefined7)((ulonglong)param_4 >> 8);
	uVar5 = (undefined)param_4;
	ppuVar1 = &toc;
	if (param_2 == 0) {
		ppuVar1 = &toc;
		app_fatal(_DAT_100f2d44, param_1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	uVar3 = 0;
	WOpenFile(param_1, ZEXT48(register0x0000000c) - 0x18, 0, CONCAT71(uVar4, uVar5),
	    CONCAT71(uVar6, uVar7), param_6, param_7, param_8, in_stack_ffffffb8);
	WGetFileSize(local_18, 0, uVar3, CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7), param_6, param_7, param_8,
	    in_stack_ffffffb8);
	uVar10 = (undefined)param_8;
	uVar9 = (undefined)param_7;
	uVar8 = (undefined)param_6;
	extraout_r3._7_1_ = (undefined)extraout_r3;
	if (extraout_r3 == 0) {
		app_fatal((int)ppuVar1[-0x18a0], param_1, uVar3, CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7),
		    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8,
		    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8,
		    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	}
	WReadFile((ulonglong)local_18);
	WCloseFile((char)local_18, uVar2, (undefined)extraout_r3, uVar5, uVar7, uVar8, uVar9, uVar10,
	    in_stack_ffffffb8);
	return extraout_r3;
}

void Cl2ApplyTrans(uint *param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	bool bVar1;
	longlong lVar2;
	longlong lVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	longlong lVar7;
	char cVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined7 uVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	longlong lVar18;
	undefined uVar19;
	longlong lVar20;
	undefined uVar21;
	int iVar22;
	longlong lVar23;
	longlong lVar24;
	undefined4 in_stack_ffffffa8;

	uVar14 = (undefined7)((ulonglong)param_5 >> 8);
	uVar15 = (undefined)param_5;
	uVar12 = (undefined7)((ulonglong)param_4 >> 8);
	uVar13 = (undefined)param_4;
	uVar10 = (undefined7)((ulonglong)param_3 >> 8);
	uVar11 = (undefined)param_3;
	lVar20 = (longlong)param_8;
	lVar18 = (longlong)param_7;
	lVar16 = (longlong)param_6;
	lVar7 = param_2;
	uVar4 = FUN_100b915c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	uVar5 = FUN_100b8f7c(param_2, lVar7, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
	    CONCAT71(uVar14, uVar15), (int)lVar16, (int)lVar18, (int)lVar20, in_stack_ffffffa8);
	iVar22 = 1;
	while (true) {
		uVar21 = (undefined)lVar20;
		uVar19 = (undefined)lVar18;
		uVar17 = (undefined)lVar16;
		uVar9 = (undefined)lVar7;
		if ((int)param_3 < iVar22)
			break;
		uVar6 = FUN_1003cdd0((int)uVar4, iVar22);
		lVar7 = FUN_1003cddc((int)uVar4, iVar22);
		lVar2 = lVar7 + -10;
		lVar23 = uVar4 + uVar6 + 10;
		while (true) {
			lVar24 = lVar23;
			lVar7 = lVar2;
			if ((int)lVar7 == 0)
				break;
			lVar23 = lVar24 + 1;
			lVar2 = lVar7 + -1;
			if (*(char *)lVar24 < '\0') {
				cVar8 = -*(char *)lVar24;
				lVar3 = (longlong)cVar8;
				if (cVar8 < 'B') {
					while (true) {
						bVar1 = cVar8 == '\0';
						cVar8 = cVar8 + -1;
						lVar2 = (lVar7 + -1) - lVar3;
						if (bVar1)
							break;
						*(byte *)lVar23 = *(byte *)((int)uVar5 + (uint) * (byte *)lVar23);
						lVar23 = lVar23 + 1;
					}
				} else {
					*(byte *)lVar23 = *(byte *)((int)uVar5 + (uint) * (byte *)lVar23);
					lVar2 = lVar7 + -2;
					lVar23 = lVar24 + 2;
				}
			}
		}
		iVar22 = iVar22 + 1;
	}
	FUN_100b9100((int)param_2, uVar9, uVar11, uVar13, uVar15, uVar17, uVar19, uVar21, in_stack_ffffffa8);
	FUN_100b91a4((int *)param_1, uVar9, uVar11, uVar13, uVar15, uVar17, uVar19, uVar21, in_stack_ffffffa8);
	return;
}

void Cl2DecDatFrm1(longlong param_1, char *param_2, longlong param_3, longlong param_4)

{
	char cVar1;
	longlong lVar2;
	char *pcVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;

	lVar6 = param_4;
	do {
		pcVar3 = param_2 + 1;
		lVar4 = param_3 + -1;
		lVar2 = (longlong)*param_2;
		if (lVar2 < 0) {
			lVar5 = -lVar2;
			if ((int)lVar5 < 0x42) {
				lVar4 = lVar4 + lVar2;
				do {
					cVar1 = *pcVar3;
					lVar5 = lVar5 + -1;
					pcVar3 = pcVar3 + 1;
					*(char *)param_1 = cVar1;
					param_1 = param_1 + 1;
				} while (lVar5 != 0);
			} else {
				cVar1 = *pcVar3;
				lVar5 = lVar5 + -0x41;
				lVar2 = -lVar5;
				pcVar3 = param_2 + 2;
				lVar4 = param_3 + -2;
				do {
					lVar5 = lVar5 + -1;
					*(char *)param_1 = cVar1;
					param_1 = param_1 + 1;
				} while (lVar5 != 0);
			}
			lVar6 = lVar6 + lVar2;
			if ((int)lVar6 == 0) {
				param_1 = (param_1 + -0x300) - param_4;
				lVar6 = param_4;
			}
		} else {
			do {
				if ((int)lVar6 < (int)lVar2) {
					lVar5 = lVar2 - lVar6;
					lVar2 = lVar6;
				} else {
					lVar5 = 0;
				}
				param_1 = param_1 + lVar2;
				lVar6 = lVar6 - lVar2;
				if (lVar6 == 0) {
					param_1 = (param_1 + -0x300) - param_4;
					lVar6 = param_4;
				}
				lVar2 = lVar5;
			} while ((int)lVar5 != 0);
		}
		param_3 = lVar4;
		param_2 = pcVar3;
	} while ((int)lVar4 != 0);
	return;
}

void Cl2DecDatFrm2(longlong param_1, char *param_2, longlong param_3, longlong param_4, undefined param_5)

{
	char cVar1;
	int iVar2;
	char *pcVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;

	lVar5 = param_4;
	do {
		pcVar3 = param_2 + 1;
		lVar4 = param_3 + -1;
		lVar6 = (longlong)*param_2;
		if (lVar6 < 0) {
			lVar7 = -lVar6;
			if ((int)lVar7 < 0x42) {
				lVar4 = lVar4 + lVar6;
				do {
					cVar1 = *pcVar3;
					pcVar3 = pcVar3 + 1;
					if (cVar1 != '\0') {
						iVar2 = (int)param_1;
						*(undefined *)(iVar2 + -1) = param_5;
						*(undefined *)(iVar2 + 1) = param_5;
						*(undefined *)(iVar2 + -0x300) = param_5;
						*(undefined *)(iVar2 + 0x300) = param_5;
					}
					lVar7 = lVar7 + -1;
					param_1 = param_1 + 1;
				} while (lVar7 != 0);
			} else {
				cVar1 = *pcVar3;
				lVar7 = lVar7 + -0x41;
				lVar4 = param_3 + -2;
				pcVar3 = param_2 + 2;
				lVar6 = lVar7;
				if (cVar1 == '\0')
					goto LAB_1003f5b8;
				*(undefined *)((int)param_1 + -1) = param_5;
				lVar6 = -lVar7;
				*(undefined *)((int)param_1 + (int)lVar7) = param_5;
				do {
					*(undefined *)((int)param_1 + -0x300) = param_5;
					lVar7 = lVar7 + -1;
					*(undefined *)((int)param_1 + 0x300) = param_5;
					param_1 = param_1 + 1;
				} while (lVar7 != 0);
			}
			lVar5 = lVar5 + lVar6;
			if ((int)lVar5 == 0) {
				param_1 = (param_1 + -0x300) - param_4;
				lVar5 = param_4;
			}
		} else {
		LAB_1003f5b8:
			do {
				if ((int)lVar5 < (int)lVar6) {
					lVar7 = lVar6 - lVar5;
					lVar6 = lVar5;
				} else {
					lVar7 = 0;
				}
				param_1 = param_1 + lVar6;
				lVar5 = lVar5 - lVar6;
				if (lVar5 == 0) {
					param_1 = (param_1 + -0x300) - param_4;
					lVar5 = param_4;
				}
				lVar6 = lVar7;
			} while ((int)lVar7 != 0);
		}
		param_3 = lVar4;
		param_2 = pcVar3;
		if ((int)lVar4 == 0) {
			return;
		}
	} while (true);
}

void Cl2DecDatLightTbl1(longlong param_1, byte *param_2, longlong param_3, longlong param_4, int param_5)

{
	byte bVar1;
	undefined uVar2;
	longlong lVar3;
	byte *pbVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;

	_DAT_100f4124 = (undefined4)param_4;
	lVar7 = param_4;
	do {
		pbVar4 = param_2 + 1;
		lVar5 = param_3 + -1;
		lVar3 = (longlong)(char)*param_2;
		if (lVar3 < 0) {
			lVar6 = -lVar3;
			if ((int)lVar6 < 0x42) {
				lVar5 = lVar5 + lVar3;
				do {
					bVar1 = *pbVar4;
					lVar6 = lVar6 + -1;
					pbVar4 = pbVar4 + 1;
					*(undefined *)param_1 = *(undefined *)(param_5 + (uint)bVar1);
					param_1 = param_1 + 1;
				} while (lVar6 != 0);
			} else {
				lVar6 = lVar6 + -0x41;
				lVar3 = -lVar6;
				lVar5 = param_3 + -2;
				uVar2 = *(undefined *)(param_5 + (uint)*pbVar4);
				pbVar4 = param_2 + 2;
				do {
					lVar6 = lVar6 + -1;
					*(undefined *)param_1 = uVar2;
					param_1 = param_1 + 1;
				} while (lVar6 != 0);
			}
			lVar7 = lVar7 + lVar3;
			if ((int)lVar7 == 0) {
				param_1 = (param_1 + -0x300) - param_4;
				lVar7 = param_4;
			}
		} else {
			do {
				if ((int)lVar7 < (int)lVar3) {
					lVar6 = lVar3 - lVar7;
					lVar3 = lVar7;
				} else {
					lVar6 = 0;
				}
				param_1 = param_1 + lVar3;
				lVar7 = lVar7 - lVar3;
				if (lVar7 == 0) {
					param_1 = (param_1 + -0x300) - param_4;
					lVar7 = param_4;
				}
				lVar3 = lVar6;
			} while ((int)lVar6 != 0);
		}
		param_3 = lVar5;
		param_2 = pbVar4;
	} while ((int)lVar5 != 0);
	return;
}

void Cl2DecDatFrm4(ulonglong param_1, longlong param_2, longlong param_3, longlong param_4)

{
	undefined uVar1;
	undefined *puVar2;
	longlong lVar3;
	undefined *puVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;

	puVar2 = PTR_DAT_100f17c8;
	lVar6 = param_4;
	do {
		lVar3 = param_2 + 1;
		lVar5 = param_3 + -1;
		lVar7 = (longlong) * (char *)param_2;
		lVar8 = lVar7;
		if (lVar7 < 0) {
			lVar8 = -lVar7;
			if ((int)lVar8 < 0x42) {
				lVar5 = lVar5 + lVar7;
				if ((ulonglong) * (uint *)puVar2 <= (param_1 & 0xffffffff)) {
					lVar3 = lVar3 + lVar8;
					goto LAB_1003f78c;
				}
				do {
					puVar4 = (undefined *)lVar3;
					lVar8 = lVar8 + -1;
					lVar3 = lVar3 + 1;
					*(undefined *)param_1 = *puVar4;
					param_1 = param_1 + 1;
				} while (lVar8 != 0);
			} else {
				lVar8 = lVar8 + -0x41;
				uVar1 = *(undefined *)lVar3;
				lVar3 = param_2 + 2;
				lVar5 = param_3 + -2;
				if ((ulonglong) * (uint *)puVar2 <= (param_1 & 0xffffffff))
					goto LAB_1003f78c;
				lVar7 = -lVar8;
				do {
					lVar8 = lVar8 + -1;
					*(undefined *)param_1 = uVar1;
					param_1 = param_1 + 1;
				} while (lVar8 != 0);
			}
			lVar6 = lVar6 + lVar7;
			if ((int)lVar6 == 0) {
				param_1 = (param_1 - 0x300) - param_4;
				lVar6 = param_4;
			}
		} else {
		LAB_1003f78c:
			do {
				if ((int)lVar6 < (int)lVar8) {
					lVar7 = lVar8 - lVar6;
					lVar8 = lVar6;
				} else {
					lVar7 = 0;
				}
				param_1 = param_1 + lVar8;
				lVar6 = lVar6 - lVar8;
				if (lVar6 == 0) {
					param_1 = (param_1 - 0x300) - param_4;
					lVar6 = param_4;
				}
				lVar8 = lVar7;
			} while ((int)lVar7 != 0);
		}
		param_2 = lVar3;
		param_3 = lVar5;
		if ((int)lVar5 == 0) {
			return;
		}
	} while (true);
}

void Cl2DecDatClrHL(ulonglong param_1, longlong param_2, longlong param_3, longlong param_4,
    undefined param_5)

{
	int iVar1;
	undefined *puVar2;
	longlong lVar3;
	char *pcVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;

	puVar2 = PTR_DAT_100f17c8;
	lVar6 = param_4;
	do {
		lVar3 = param_2 + 1;
		lVar5 = param_3 + -1;
		lVar7 = (longlong) * (char *)param_2;
		lVar8 = lVar7;
		if (lVar7 < 0) {
			lVar8 = -lVar7;
			if ((int)lVar8 < 0x42) {
				lVar5 = lVar5 + lVar7;
				if ((ulonglong) * (uint *)puVar2 <= (param_1 & 0xffffffff)) {
					lVar3 = lVar3 + lVar8;
					goto LAB_1003f8a8;
				}
				do {
					pcVar4 = (char *)lVar3;
					lVar3 = lVar3 + 1;
					if (*pcVar4 != '\0') {
						iVar1 = (int)param_1;
						*(undefined *)(iVar1 + -1) = param_5;
						*(undefined *)(iVar1 + 1) = param_5;
						*(undefined *)(iVar1 + -0x300) = param_5;
						*(undefined *)(iVar1 + 0x300) = param_5;
					}
					lVar8 = lVar8 + -1;
					param_1 = param_1 + 1;
				} while (lVar8 != 0);
			} else {
				pcVar4 = (char *)lVar3;
				lVar8 = lVar8 + -0x41;
				lVar5 = param_3 + -2;
				lVar3 = param_2 + 2;
				if ((*pcVar4 == '\0') || ((ulonglong) * (uint *)puVar2 <= (param_1 & 0xffffffff)))
					goto LAB_1003f8a8;
				*(undefined *)((int)param_1 + -1) = param_5;
				lVar7 = -lVar8;
				*(undefined *)((int)param_1 + (int)lVar8) = param_5;
				do {
					*(undefined *)((int)param_1 + -0x300) = param_5;
					lVar8 = lVar8 + -1;
					*(undefined *)((int)param_1 + 0x300) = param_5;
					param_1 = param_1 + 1;
				} while (lVar8 != 0);
			}
			lVar6 = lVar6 + lVar7;
			if ((int)lVar6 == 0) {
				param_1 = (param_1 - 0x300) - param_4;
				lVar6 = param_4;
			}
		} else {
		LAB_1003f8a8:
			do {
				if ((int)lVar6 < (int)lVar8) {
					lVar7 = lVar8 - lVar6;
					lVar8 = lVar6;
				} else {
					lVar7 = 0;
				}
				param_1 = param_1 + lVar8;
				lVar6 = lVar6 - lVar8;
				if (lVar6 == 0) {
					param_1 = (param_1 - 0x300) - param_4;
					lVar6 = param_4;
				}
				lVar8 = lVar7;
			} while ((int)lVar7 != 0);
		}
		param_2 = lVar3;
		param_3 = lVar5;
		if ((int)lVar5 == 0) {
			return;
		}
	} while (true);
}

void Cl2DecDatLightTbl2(ulonglong param_1, longlong param_2, longlong param_3, longlong param_4, int param_5)

{
	undefined uVar1;
	undefined *puVar2;
	longlong lVar3;
	byte *pbVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;

	puVar2 = PTR_DAT_100f17c8;
	lVar6 = param_4;
	do {
		lVar3 = param_2 + 1;
		lVar5 = param_3 + -1;
		lVar7 = (longlong) * (char *)param_2;
		lVar8 = lVar7;
		if (lVar7 < 0) {
			lVar8 = -lVar7;
			if ((int)lVar8 < 0x42) {
				lVar5 = lVar5 + lVar7;
				if ((ulonglong) * (uint *)puVar2 <= (param_1 & 0xffffffff)) {
					lVar3 = lVar3 + lVar8;
					goto LAB_1003f9a4;
				}
				do {
					pbVar4 = (byte *)lVar3;
					lVar8 = lVar8 + -1;
					lVar3 = lVar3 + 1;
					*(undefined *)param_1 = *(undefined *)(param_5 + (uint)*pbVar4);
					param_1 = param_1 + 1;
				} while (lVar8 != 0);
			} else {
				lVar8 = lVar8 + -0x41;
				pbVar4 = (byte *)lVar3;
				lVar3 = param_2 + 2;
				uVar1 = *(undefined *)(param_5 + (uint)*pbVar4);
				lVar5 = param_3 + -2;
				if ((ulonglong) * (uint *)puVar2 <= (param_1 & 0xffffffff))
					goto LAB_1003f9a4;
				lVar7 = -lVar8;
				do {
					lVar8 = lVar8 + -1;
					*(undefined *)param_1 = uVar1;
					param_1 = param_1 + 1;
				} while (lVar8 != 0);
			}
			lVar6 = lVar6 + lVar7;
			if ((int)lVar6 == 0) {
				param_1 = (param_1 - 0x300) - param_4;
				lVar6 = param_4;
			}
		} else {
		LAB_1003f9a4:
			do {
				if ((int)lVar6 < (int)lVar8) {
					lVar7 = lVar8 - lVar6;
					lVar8 = lVar6;
				} else {
					lVar7 = 0;
				}
				param_1 = param_1 + lVar8;
				lVar6 = lVar6 - lVar8;
				if (lVar6 == 0) {
					param_1 = (param_1 - 0x300) - param_4;
					lVar6 = param_4;
				}
				lVar8 = lVar7;
			} while ((int)lVar7 != 0);
		}
		param_2 = lVar3;
		param_3 = lVar5;
		if ((int)lVar5 == 0) {
			return;
		}
	} while (true);
}

void Cl2DecodeFrm1(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffa8;
	uint local_28;

	puVar2 = PTR_DAT_100f17cc;
	uVar6 = (undefined)param_3;
	uVar5 = (undefined)param_2;
	uVar11 = (undefined)param_8;
	ppuVar3 = &toc;
	uVar7 = (char)param_4;
	uVar8 = (char)param_5;
	uVar9 = (char)param_6;
	uVar10 = (char)param_7;
	uVar4 = FUN_100b915c((uint *)param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	if (((*(int *)puVar2 != 0) && ((uVar4 & 0xffffffff) != 0)) && (0 < (int)param_4)) {
		uVar8 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
		uVar5 = (char)param_4;
		uVar6 = (char)param_6;
		uVar7 = (char)param_7;
		uVar4 = FUN_1003ce1c(uVar4, (int)param_4, param_6, param_7,
		    (int *)(ZEXT48(register0x0000000c) - 0x28));
		if ((uVar4 & 0xffffffff) != 0) {
			uVar1 = *(uint *)puVar2;
			uVar8 = (undefined)uVar1;
			uVar6 = (undefined)local_28;
			uVar5 = (char)uVar4;
			uVar7 = (char)param_5;
			Cl2DecDatFrm1((ulonglong)uVar1 + (ulonglong) * (uint *)(ppuVar3[-0x1da6] + ((int)param_2 + param_6 * -0x10) * 4) + param_1, (char *)uVar4, (ulonglong)local_28, param_5);
		}
	}
	FUN_100b91a4((int *)(uint *)param_3, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffa8);
	return;
}

void Cl2DecodeFrm2(undefined param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, longlong param_6, int param_7, int param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined4 in_stack_ffffff98;
	uint local_38;

	puVar1 = PTR_DAT_100f17cc;
	uVar6 = (undefined)param_4;
	uVar5 = (undefined)param_3;
	uVar4 = (undefined)param_2;
	ppuVar2 = &toc;
	uVar7 = (char)param_5;
	uVar8 = (char)param_6;
	uVar9 = (char)param_7;
	uVar10 = (char)param_8;
	uVar3 = FUN_100b915c((uint *)param_4, param_2, param_3, param_4, param_5, (int)param_6, param_7, param_8,
	    in_stack_ffffff98);
	if (((*(int *)puVar1 != 0) && ((uVar3 & 0xffffffff) != 0)) && (0 < (int)param_5)) {
		uVar7 = (undefined)(ZEXT48(register0x0000000c) - 0x38);
		uVar4 = (char)param_5;
		uVar5 = (char)param_7;
		uVar6 = (char)param_8;
		uVar3 = FUN_1003ce1c(uVar3, (int)param_5, param_7, param_8,
		    (int *)(ZEXT48(register0x0000000c) - 0x38));
		if ((uVar3 & 0xffffffff) != 0) {
			uVar5 = (undefined)local_38;
			uVar4 = (char)uVar3;
			uVar6 = (char)param_6;
			uVar7 = param_1;
			Cl2DecDatFrm2((ulonglong) * (uint *)puVar1 + (ulonglong) * (uint *)(ppuVar2[-0x1da6] + ((int)param_3 + param_7 * -0x10) * 4) + param_2, (char *)uVar3, (ulonglong)local_38, param_6, param_1);
		}
	}
	FUN_100b91a4((int *)(uint *)param_4, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, in_stack_ffffff98);
	return;
}

void Cl2DecodeFrm3(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	longlong lVar4;
	longlong lVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	char cVar11;
	char cVar12;
	undefined4 in_stack_ffffff98;
	uint local_38;

	puVar1 = PTR_DAT_100f17cc;
	uVar7 = (undefined)param_4;
	uVar6 = (undefined)param_3;
	lVar4._7_1_ = (undefined)param_2;
	cVar11 = (char)param_8;
	ppuVar2 = &toc;
	uVar8 = (char)param_5;
	uVar9 = (char)param_6;
	uVar10 = (char)param_7;
	cVar12 = cVar11;
	uVar3 = FUN_100b915c((uint *)param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	if ((*(int *)puVar1 != 0) && ((uVar3 & 0xffffffff) != 0)) {
		if (0 < (int)param_4) {
			uVar8 = (undefined)(ZEXT48(register0x0000000c) - 0x38);
			uVar6 = (char)param_6;
			uVar7 = (char)param_7;
			lVar4 = FUN_1003ce1c(uVar3, (int)param_4, param_6, param_7,
			    (int *)(ZEXT48(register0x0000000c) - 0x38));
			lVar4._7_1_ = (undefined)lVar4;
			if (lVar4 != 0) {
				if (*(int *)ppuVar2[-0x1ddb] == 0) {
					lVar5 = 0x1000;
				} else {
					lVar5 = 0x400;
				}
				if (cVar11 == '\x02') {
					lVar5 = lVar5 + 0x100;
				}
				if ('\x03' < cVar11) {
					lVar5 = (ulonglong)(uint)(((int)cVar11 + -4) * 0x100) + lVar5 + 0x300;
				}
				uVar6 = (undefined)local_38;
				uVar8 = (undefined)((ulonglong) * (uint *)ppuVar2[-0x1ddc] + lVar5);
				uVar7 = (char)param_5;
				Cl2DecDatLightTbl1((ulonglong) * (uint *)puVar1 + (ulonglong) * (uint *)(ppuVar2[-0x1da6] + ((int)param_2 + param_6 * -0x10) * 4) + param_1, (byte *)lVar4, (ulonglong)local_38, param_5,
				    (int)((ulonglong) * (uint *)ppuVar2[-0x1ddc] + lVar5));
			}
		}
	}
	FUN_100b91a4((int *)(uint *)param_3, (undefined)lVar4, uVar6, uVar7, uVar8, uVar9, uVar10, cVar12,
	    in_stack_ffffff98);
	return;
}

void Cl2DecodeLightTbl(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	longlong lVar5;
	longlong lVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar10;
	longlong lVar9;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined4 in_stack_ffffffa8;
	uint local_28;

	puVar2 = PTR_DAT_100f17cc;
	uVar10 = (undefined)param_5;
	uVar8 = (undefined)param_4;
	uVar7 = (undefined)param_3;
	lVar5._7_1_ = (undefined)param_2;
	uVar14 = (undefined)param_8;
	ppuVar3 = &toc;
	uVar11 = uVar10;
	uVar12 = (char)param_6;
	uVar13 = (char)param_7;
	uVar4 = FUN_100b915c((uint *)param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	if ((*(int *)puVar2 != 0) && ((uVar4 & 0xffffffff) != 0)) {
		if (0 < (int)param_4) {
			uVar11 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
			uVar7 = (char)param_6;
			uVar8 = (char)param_7;
			lVar5 = FUN_1003ce1c(uVar4, (int)param_4, param_6, param_7,
			    (int *)(ZEXT48(register0x0000000c) - 0x28));
			lVar5._7_1_ = (undefined)lVar5;
			if (lVar5 != 0) {
				iVar1 = *(int *)ppuVar3[-0x1ca4];
				uVar11 = (undefined)iVar1;
				lVar6 = (ulonglong) * (uint *)puVar2 + (ulonglong) * (uint *)(ppuVar3[-0x1da6] + ((int)param_2 + param_6 * -0x10) * 4) + param_1;
				uVar7 = (undefined)local_28;
				if (iVar1 == 0) {
					uVar8 = uVar10;
					Cl2DecDatFrm1(lVar6, (char *)(byte *)lVar5, (ulonglong)local_28, param_5);
				} else {
					lVar9 = (ulonglong) * (uint *)ppuVar3[-0x1ddc] + (ulonglong)(uint)(iVar1 << 8);
					uVar11 = (undefined)lVar9;
					uVar8 = uVar10;
					Cl2DecDatLightTbl1(lVar6, (byte *)lVar5, (ulonglong)local_28, param_5, (int)lVar9);
				}
			}
		}
	}
	FUN_100b91a4((int *)(uint *)param_3, (undefined)lVar5, uVar7, uVar8, uVar11, uVar12, uVar13, uVar14,
	    in_stack_ffffffa8);
	return;
}

void Cl2DecodeFrm4(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffa8;
	uint local_28;

	puVar2 = PTR_DAT_100f17cc;
	uVar6 = (undefined)param_3;
	uVar5 = (undefined)param_2;
	uVar11 = (undefined)param_8;
	ppuVar3 = &toc;
	uVar7 = (char)param_4;
	uVar8 = (char)param_5;
	uVar9 = (char)param_6;
	uVar10 = (char)param_7;
	uVar4 = FUN_100b915c((uint *)param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	if (((*(int *)puVar2 != 0) && ((uVar4 & 0xffffffff) != 0)) && (0 < (int)param_4)) {
		uVar8 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
		uVar5 = (char)param_4;
		uVar6 = (char)param_6;
		uVar7 = (char)param_7;
		uVar4 = FUN_1003ce1c(uVar4, (int)param_4, param_6, param_7,
		    (int *)(ZEXT48(register0x0000000c) - 0x28));
		if ((uVar4 & 0xffffffff) != 0) {
			uVar1 = *(uint *)puVar2;
			uVar8 = (undefined)uVar1;
			uVar6 = (undefined)local_28;
			uVar5 = (char)uVar4;
			uVar7 = (char)param_5;
			Cl2DecDatFrm4((ulonglong)uVar1 + (ulonglong) * (uint *)(ppuVar3[-0x1da6] + ((int)param_2 + param_6 * -0x10) * 4) + param_1, uVar4, (ulonglong)local_28, param_5);
		}
	}
	FUN_100b91a4((int *)(uint *)param_3, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffa8);
	return;
}

void Cl2DecodeClrHL(undefined param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, longlong param_6, int param_7, int param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffff98;
	uint local_38;

	puVar4 = PTR_DAT_100f17cc;
	puVar3 = PTR_DAT_100f17c8;
	uVar9 = (undefined)param_4;
	uVar8 = (undefined)param_3;
	uVar7 = (undefined)param_2;
	ppuVar5 = &toc;
	uVar10 = (char)param_5;
	uVar11 = (char)param_6;
	uVar12 = (char)param_7;
	uVar13 = (char)param_8;
	uVar6 = FUN_100b915c((uint *)param_4, param_2, param_3, param_4, param_5, (int)param_6, param_7, param_8,
	    in_stack_ffffff98);
	if (((*(int *)puVar4 != 0) && ((uVar6 & 0xffffffff) != 0)) && (0 < (int)param_5)) {
		uVar10 = (undefined)(ZEXT48(register0x0000000c) - 0x38);
		uVar7 = (char)param_5;
		uVar8 = (char)param_7;
		uVar9 = (char)param_8;
		uVar6 = FUN_1003ce1c(uVar6, (int)param_5, param_7, param_8,
		    (int *)(ZEXT48(register0x0000000c) - 0x38));
		if ((uVar6 & 0xffffffff) != 0) {
			uVar1 = *(uint *)puVar4;
			uVar2 = *(uint *)(ppuVar5[-0x1da6] + ((int)param_3 + param_7 * -0x10) * 4);
			*(int *)puVar3 = *(int *)puVar3 + -0x300;
			uVar8 = (undefined)local_38;
			uVar7 = (char)uVar6;
			uVar9 = (char)param_6;
			uVar10 = param_1;
			Cl2DecDatClrHL((ulonglong)uVar1 + (ulonglong)uVar2 + param_2, uVar6, (ulonglong)local_38, param_6,
			    param_1);
			*(int *)puVar3 = *(int *)puVar3 + 0x300;
		}
	}
	FUN_100b91a4((int *)(uint *)param_4, uVar7, uVar8, uVar9, uVar10, uVar11, uVar12, uVar13,
	    in_stack_ffffff98);
	return;
}

void Cl2DecodeFrm5(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	longlong lVar4;
	longlong lVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	char cVar11;
	char cVar12;
	undefined4 in_stack_ffffff98;
	uint local_38;

	puVar1 = PTR_DAT_100f17cc;
	uVar7 = (undefined)param_4;
	uVar6 = (undefined)param_3;
	lVar4._7_1_ = (undefined)param_2;
	cVar11 = (char)param_8;
	ppuVar2 = &toc;
	uVar8 = (char)param_5;
	uVar9 = (char)param_6;
	uVar10 = (char)param_7;
	cVar12 = cVar11;
	uVar3 = FUN_100b915c((uint *)param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	if ((*(int *)puVar1 != 0) && ((uVar3 & 0xffffffff) != 0)) {
		if (0 < (int)param_4) {
			uVar8 = (undefined)(ZEXT48(register0x0000000c) - 0x38);
			uVar6 = (char)param_6;
			uVar7 = (char)param_7;
			lVar4 = FUN_1003ce1c(uVar3, (int)param_4, param_6, param_7,
			    (int *)(ZEXT48(register0x0000000c) - 0x38));
			lVar4._7_1_ = (undefined)lVar4;
			if (lVar4 != 0) {
				if (*(int *)ppuVar2[-0x1ddb] == 0) {
					lVar5 = 0x1000;
				} else {
					lVar5 = 0x400;
				}
				if (cVar11 == '\x02') {
					lVar5 = lVar5 + 0x100;
				}
				if ('\x03' < cVar11) {
					lVar5 = (ulonglong)(uint)(((int)cVar11 + -4) * 0x100) + lVar5 + 0x300;
				}
				uVar6 = (undefined)local_38;
				uVar8 = (undefined)((ulonglong) * (uint *)ppuVar2[-0x1ddc] + lVar5);
				uVar7 = (char)param_5;
				Cl2DecDatLightTbl2((ulonglong) * (uint *)puVar1 + (ulonglong) * (uint *)(ppuVar2[-0x1da6] + ((int)param_2 + param_6 * -0x10) * 4) + param_1, lVar4, (ulonglong)local_38, param_5,
				    (int)((ulonglong) * (uint *)ppuVar2[-0x1ddc] + lVar5));
			}
		}
	}
	FUN_100b91a4((int *)(uint *)param_3, (undefined)lVar4, uVar6, uVar7, uVar8, uVar9, uVar10, cVar12,
	    in_stack_ffffff98);
	return;
}

void Cl2DecodeFrm6(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	longlong lVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar9;
	longlong lVar8;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffa8;
	uint local_28;

	puVar2 = PTR_DAT_100f17cc;
	uVar9 = (undefined)param_5;
	uVar7 = (undefined)param_4;
	uVar6 = (undefined)param_3;
	lVar5._7_1_ = (undefined)param_2;
	uVar13 = (undefined)param_8;
	ppuVar3 = &toc;
	uVar10 = uVar9;
	uVar11 = (char)param_6;
	uVar12 = (char)param_7;
	uVar4 = FUN_100b915c((uint *)param_3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	if ((*(int *)puVar2 != 0) && ((uVar4 & 0xffffffff) != 0)) {
		if (0 < (int)param_4) {
			uVar10 = (undefined)(ZEXT48(register0x0000000c) - 0x28);
			uVar6 = (char)param_6;
			uVar7 = (char)param_7;
			lVar5 = FUN_1003ce1c(uVar4, (int)param_4, param_6, param_7,
			    (int *)(ZEXT48(register0x0000000c) - 0x28));
			lVar5._7_1_ = (undefined)lVar5;
			if (lVar5 != 0) {
				iVar1 = *(int *)ppuVar3[-0x1ca4];
				uVar10 = (undefined)iVar1;
				uVar4 = (ulonglong) * (uint *)puVar2 + (ulonglong) * (uint *)(ppuVar3[-0x1da6] + ((int)param_2 + param_6 * -0x10) * 4) + param_1;
				uVar6 = (undefined)local_28;
				if (iVar1 == 0) {
					uVar7 = uVar9;
					Cl2DecDatFrm4(uVar4, lVar5, (ulonglong)local_28, param_5);
				} else {
					lVar8 = (ulonglong) * (uint *)ppuVar3[-0x1ddc] + (ulonglong)(uint)(iVar1 << 8);
					uVar10 = (undefined)lVar8;
					uVar7 = uVar9;
					Cl2DecDatLightTbl2(uVar4, lVar5, (ulonglong)local_28, param_5, (int)lVar8);
				}
			}
		}
	}
	FUN_100b91a4((int *)(uint *)param_3, (undefined)lVar5, uVar6, uVar7, uVar10, uVar11, uVar12, uVar13,
	    in_stack_ffffffa8);
	return;
}

void PlayInGameMovie(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined8 uVar2;
	undefined uVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f1914;
	uVar8 = (undefined7)((ulonglong)param_5 >> 8);
	uVar9 = (undefined)param_5;
	uVar6 = (undefined7)((ulonglong)param_4 >> 8);
	uVar7 = (undefined)param_4;
	uVar4 = (undefined7)((ulonglong)param_3 >> 8);
	uVar5 = (undefined)param_3;
	PaletteFadeOut(8, (undefined)param_2, uVar5, uVar7, uVar9, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffffc8);
	uVar2 = 0;
	play_movie(param_1, 0, CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_6,
	    (int)param_7, param_8, in_stack_ffffffc8);
	ClearScreenBuffer();
	uVar12 = (undefined)param_8;
	uVar10 = (undefined)param_6;
	uVar3 = (undefined)uVar2;
	uVar11 = (undefined)param_7;
	*(undefined4 *)puVar1 = 0xff;
	scrollrt_draw_game_screen(1, uVar2, CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_6,
	    param_7, param_8, in_stack_ffffffc8);
	PaletteFadeIn(8, uVar3, uVar5, uVar7, uVar9, uVar10, uVar11, uVar12, in_stack_ffffffc8);
	*(undefined4 *)puVar1 = 0xff;
	return;
}
