
void FreeQuestText(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	MemFreeDbg((int **)&DAT_100f4208);
	MemFreeDbg((int **)(iVar1 + -0x4dcc));
	return;
}

void InitQuestText(void)

{
	undefined *puVar1;
	int iVar2;
	BYTE *pBVar3;

	iVar2 = 0x100f8fd0;
	pBVar3 = LoadFileInMem("Data\\MedTextS.CEL", (DWORD *)0x0);
	*(BYTE **)(iVar2 + -0x4dc8) = pBVar3;
	pBVar3 = LoadFileInMem(*(char **)(iVar2 + -0x5f4c), (DWORD *)0x0);
	*(BYTE **)(iVar2 + -0x4dcc) = pBVar3;
	puVar1 = *(undefined **)(iVar2 + -0x7108);
	**(undefined **)(iVar2 + -0x7730) = 0;
	*puVar1 = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitQTextMsg(int m)

{
	undefined *puVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	DWORD DVar5;
	int local_3c;

	iVar4 = 0x100f8fd0;
	iVar3 = m * 0x10;
	if (*(int *)(iVar3 + 0x1011e9cc) != 0) {
		_DAT_1019cbec = 0;
		sound_disable_music(1);
		puVar1 = *(undefined **)(iVar4 + -0x7730);
		**(undefined **)(iVar4 + -0x7108) = 1;
		iVar2 = *(int *)(iVar4 + -0x7114);
		*puVar1 = 1;
		*(undefined **)(iVar4 + -0x4dd0) = (&PTR_s__Ahh__the_story_of_our_King__is_i_1011e9c8)[m * 4];
		*(undefined4 *)(iVar4 + -0x4dd4) = 500;
		_DAT_10149198 = *(undefined4 *)(iVar2 + *(int *)(iVar3 + 0x1011e9d0) * 4 + -4);
		*(undefined4 *)(iVar4 + -0x4dd8) = _DAT_10149198;
		DVar5 = GetTickCount();
		*(DWORD *)(local_3c + -0x4ddc) = DVar5;
	}
	PlaySFX(*(int *)(iVar3 + 0x1011e9d4));
	return;
}

void FUN_1005bd38(undefined8 param_1,
    undefined8 param_2,
    ulonglong param_3,
    undefined8 param_4,
    undefined8 param_5,
    undefined4 param_6,
    undefined4 param_7,
    undefined4 param_8,
    undefined4 param_9)

{
	if (DAT_1014919c != '\0') {
		sound_disable_music(0);
		DAT_1014919c = '\0';
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawQTextBack(void)

{
	int iVar1;
	longlong lVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;

	iVar1 = 0x100f8fd0;
	CelDecodeOnly(0x58, 0x1e7, _DAT_100f4204, 1, 0x24f);
	lVar5 = 0x94;
	puVar4 = (undefined *)(**(int **)(iVar1 + -0x7804) + 0x5ac5b);
	do {
		lVar2 = 0x124;
		do {
			puVar3 = puVar4;
			lVar2 = lVar2 + -1;
			*puVar3 = 0;
			puVar4 = puVar3 + 2;
		} while (lVar2 != 0);
		puVar3[2] = 0;
		lVar2 = 0x124;
		puVar3 = puVar3 + -0x546;
		do {
			puVar4 = puVar3;
			lVar2 = lVar2 + -1;
			puVar4[1] = 0;
			puVar3 = puVar4 + 2;
		} while (lVar2 != 0);
		lVar5 = lVar5 + -1;
		puVar4 = puVar4 + -0x546;
	} while (lVar5 != 0);
	lVar5 = 0x124;
	do {
		lVar5 = lVar5 + -1;
		*puVar4 = 0;
		puVar4 = puVar4 + 2;
	} while (lVar5 != 0);
	*puVar4 = 0;
	return;
}

void PrintQTextChr(int sx, int sy, BYTE *pCelBuff, int nCel)

{
	ulonglong uVar1;
	ulonglong uVar2;
	int iVar3;
	char cVar6;
	ulonglong uVar4;
	undefined *puVar5;
	ulonglong uVar7;
	undefined *puVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined in_r7;
	ulonglong uVar11;
	undefined in_r8;
	longlong lVar12;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	ulonglong uVar13;
	undefined8 unaff_r31;
	undefined in_stack_ffffffab;
	uint local_28[5];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar3 = 0x100f8fd0;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	cVar6 = LockMemFile(
	    (longlong)(int)pCelBuff, (char)sy, (char)pCelBuff, (char)nCel, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab);
	uVar9 = (ulonglong) * *(uint **)(iVar3 + -0x7804);
	uVar7 = (ulonglong)uRam1019f0c4;
	uVar1 = (ulonglong)uRam1019f4d4;
	uVar13 = uVar9 + (ulonglong) * (uint *)(&DAT_1019ed80 + sy * 4) + (longlong)sx;
	uVar4 = BESwap_1003cdf8((longlong)cVar6, nCel, (int *)local_28);
	uVar10 = uVar4 + (ulonglong)local_28[0];
	do {
		lVar12 = 0x16;
		do {
			cVar6 = *(char *)uVar4;
			uVar4 = uVar4 + 1;
			uVar11 = SEXT18(cVar6);
			if ((longlong)uVar11 < 0) {
				uVar13 = uVar13 - uVar11;
				lVar12 = lVar12 + uVar11;
			} else {
				lVar12 = lVar12 - uVar11;
				if (((uVar13 & 0xffffffff) < (uVar9 + uVar7 & 0xffffffff)) || ((uVar9 + uVar1 & 0xffffffff) < (uVar13 & 0xffffffff))) {
					uVar4 = uVar4 + uVar11;
					uVar13 = uVar13 + uVar11;
				} else {
					if (cVar6 != '\0') {
						uVar2 = (ulonglong)((uint)(int)cVar6 >> 3);
						if ((uint)(int)cVar6 >> 3 != 0) {
							do {
								puVar5 = (undefined *)uVar4;
								puVar8 = (undefined *)uVar13;
								*puVar8 = *puVar5;
								puVar8[1] = puVar5[1];
								puVar8[2] = puVar5[2];
								puVar8[3] = puVar5[3];
								puVar8[4] = puVar5[4];
								puVar8[5] = puVar5[5];
								puVar8[6] = puVar5[6];
								uVar4 = uVar4 + 8;
								puVar8[7] = puVar5[7];
								uVar13 = uVar13 + 8;
								uVar2 = uVar2 - 1;
							} while (uVar2 != 0);
							uVar11 = uVar11 & 7;
							if (uVar11 == 0)
								goto LAB_1005bf54;
						}
						do {
							puVar5 = (undefined *)uVar4;
							uVar4 = uVar4 + 1;
							*(undefined *)uVar13 = *puVar5;
							uVar13 = uVar13 + 1;
							uVar11 = uVar11 - 1;
						} while (uVar11 != 0);
					}
				}
			}
		LAB_1005bf54:
		} while ((int)lVar12 != 0);
		uVar13 = uVar13 - 0x316;
		if ((uVar10 & 0xffffffff) == (uVar4 & 0xffffffff)) {
			UnlockMemFile((char)pCelBuff);
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawQText(void)

{
	byte bVar1;
	BYTE *pCelBuff;
	uint uVar2;
	undefined *puVar3;
	bool bVar4;
	undefined8 uVar5;
	longlong lVar6;
	DWORD DVar7;
	ulonglong in_r5;
	byte *pbVar8;
	ulonglong in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	int sy;
	undefined8 unaff_r24;
	longlong lVar9;
	undefined8 unaff_r25;
	ulonglong uVar10;
	undefined8 unaff_r26;
	ulonglong uVar11;
	ulonglong uVar12;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff18;
	int local_dc;
	byte local_b8[136];
	undefined4 local_30;
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

	uVar5 = 0x100f8fd0;
	local_30 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
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
	DrawQTextBack();
	uVar11 = (ulonglong) * (uint *)((int)uVar5 + -0x4dd0);
	sy = *(int *)((int)uVar5 + -0x4dd4);
	uVar10 = 0;
	bVar4 = false;
	while (lVar9 = 0x70, !bVar4) {
		lVar6 = 0;
		in_r6 = 0;
		in_r5 = uVar11;
		while (true) {
			pbVar8 = (byte *)in_r5;
			if (((*pbVar8 == 10) || (*pbVar8 == 0x7c)) || (0x21e < (int)lVar6))
				break;
			in_r5 = in_r5 + 1;
			bVar1 = (&DAT_100f64e8)[(uint)*pbVar8];
			if (bVar1 == 0) {
				in_r6 = in_r6 - 1;
			} else {
				local_b8[(int)in_r6] = bVar1;
				lVar6 = (ulonglong)(byte)(&DAT_10103d2c)[(uint)(byte)(&DAT_10103cac)[(uint)bVar1]] + lVar6 + 2;
			}
			in_r6 = in_r6 + 1;
		}
		lVar6 = (ZEXT48(register0x0000000c) - 0xb8) + in_r6;
		*(undefined *)lVar6 = 0;
		if (*pbVar8 == 0x7c) {
			*(undefined *)lVar6 = 0;
			bVar4 = true;
		} else {
			if (*pbVar8 != 10) {
				while ((*(char *)lVar6 != ' ' && (0 < (int)in_r6))) {
					*(char *)lVar6 = '\0';
					lVar6 = lVar6 + -1;
					in_r6 = in_r6 - 1;
				}
			}
		}
		lVar6 = ZEXT48(register0x0000000c) - 0xb8;
		while (*(byte *)lVar6 != 0) {
			uVar12 = uVar11 + 1;
			bVar1 = (&DAT_10103cac)[(uint)(byte)(&DAT_100f64e8)[(uint) * (byte *)lVar6]];
			in_r6 = (ulonglong)bVar1;
			if (*(char *)uVar12 == '\n') {
				uVar12 = uVar11 + 2;
			}
			if (bVar1 != 0) {
				pCelBuff = *(BYTE **)((int)uVar5 + -0x4dc8);
				in_r5 = ZEXT48(pCelBuff);
				PrintQTextChr((int)lVar9, sy, pCelBuff, (uint)bVar1);
			}
			lVar6 = lVar6 + 1;
			lVar9 = (ulonglong)(byte)(&DAT_10103d2c)[(uint)bVar1] + lVar9 + 2;
			uVar11 = uVar12;
		}
		if ((uVar10 & 0xffffffff) == 0) {
			uVar10 = uVar11;
		}
		sy = sy + 0x26;
		if (0x1f5 < sy) {
			bVar4 = true;
		}
	}
	DVar7 = GetTickCount();
	while (true) {
		if (_DAT_10149198 < 1) {
			*(int *)(local_dc + -0x4dd4) = *(int *)(local_dc + -0x4dd4) + -1;
			in_r5 = (ulonglong) * (uint *)(local_dc + -0x4dd4);
			*(int *)(local_dc + -0x4dd4) = *(uint *)(local_dc + -0x4dd4) + _DAT_10149198;
		} else {
			*(int *)(local_dc + -0x4dd8) = *(int *)(local_dc + -0x4dd8) + -1;
			if (*(int *)(local_dc + -0x4dd8) != 0) {
				*(int *)(local_dc + -0x4dd4) = *(int *)(local_dc + -0x4dd4) + -1;
			}
		}
		if (*(int *)(local_dc + -0x4dd8) == 0) {
			*(int *)(local_dc + -0x4dd8) = _DAT_10149198;
		}
		uVar2 = *(uint *)(local_dc + -0x4dd4);
		if ((int)uVar2 < 0xd2)
			break;
		*(int *)(local_dc + -0x4ddc) = *(int *)(local_dc + -0x4ddc) + 0x32;
		if (0x7ffffffe < DVar7 - *(int *)(local_dc + -0x4ddc)) {
			return;
		}
	}
	*(undefined4 *)(local_dc + -0x4dd0) = (int)uVar10;
	*(int *)(local_dc + -0x4dd4) = uVar2 + 0x26;
	if (**(char **)(local_dc + -0x4dd0) != '|') {
		return;
	}
	puVar3 = *(undefined **)(local_dc + -0x7730);
	*puVar3 = 0;
	FUN_1005bd38(ZEXT48(puVar3), (ulonglong)uVar2, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff18);
	return;
}