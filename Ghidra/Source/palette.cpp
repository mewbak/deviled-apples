
void palette_update(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	uVar2 = FUN_10016eb0();
	if ((int)uVar2 != 0) {
		SDrawUpdatePalette_wrapper2((char)ppuVar1[-0x16b9], param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void ApplyGamma(undefined *param_1, byte *param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	double dVar2;
	double dVar3;
	double dVar4;
	double dVar5;
	double dVar6;

	iVar1 = 0;
	dVar3 = ((double)CONCAT44(0x43300000, _DAT_100f4318 ^ 0x80000000) - _DAT_100f4338) / _DAT_100f4350;
	dVar4 = _DAT_100f4330;
	dVar5 = _DAT_100f4340;
	dVar6 = _DAT_100f4348;
	while (iVar1 < param_3) {
		dVar2 = pow(((double)CONCAT44(0x43300000, (uint)*param_2) - dVar4) * dVar5, dVar3);
		*param_1 = (char)(int)(dVar6 * dVar2);
		dVar2 = pow(((double)CONCAT44(0x43300000, (uint)param_2[1]) - dVar4) * dVar5, dVar3);
		param_1[1] = (char)(int)(dVar6 * dVar2);
		dVar2 = pow(((double)CONCAT44(0x43300000, (uint)param_2[2]) - dVar4) * dVar5, dVar3);
		iVar1 = iVar1 + 1;
		param_2 = param_2 + 4;
		param_1[2] = (char)(int)(dVar6 * dVar2);
		param_1 = param_1 + 4;
	}
	return;
}

void SaveGamma(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	uVar1 = SUB41(PTR_s_Diablo_100f1a08, 0);
	SRegSaveValue(uVar1, (char)PTR_s_Gamma_Correction_100f34e8, 0, (char)_DAT_100f4318, param_5, param_6,
	    param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	SRegSaveValue(uVar1, (char)*(undefined4 *)(local_2c + -0x5aec), 0,
	    (char)*(undefined4 *)(local_2c + -0x4cb4), param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

void LoadGamma(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	char cVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;
	int iVar7;

	puVar5 = PTR_s_Gamma_Correction_100f34e8;
	puVar4 = PTR_s_Diablo_100f1a08;
	iVar2 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	cVar3 = (char)(ZEXT48(register0x0000000c) - 0x50);
	*(undefined4 *)(iVar2 + 0x38) = _DAT_100f4318;
	iVar6 = SRegLoadValue((char)puVar4, (char)puVar5, 0, cVar3 + '8', param_5, param_6, param_7, param_8,
	    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
	    *(undefined4 *)(iVar2 + 0x14));
	iVar7 = *(int *)(iVar2 + 0x14);
	if (iVar6 == 0) {
		*(undefined4 *)(iVar2 + 0x38) = 100;
	}
	*(undefined4 *)(iVar7 + -0x4cb8) = *(undefined4 *)(iVar2 + 0x38);
	if (*(int *)(iVar7 + -0x4cb8) < 0x1e) {
		*(undefined4 *)(iVar7 + -0x4cb8) = 0x1e;
	} else {
		if (100 < *(int *)(iVar7 + -0x4cb8)) {
			*(undefined4 *)(iVar7 + -0x4cb8) = 100;
		}
	}
	uVar1 = *(int *)(iVar7 + -0x4cb8) / 5 + (*(int *)(iVar7 + -0x4cb8) >> 0x1f);
	*(int *)(iVar7 + -0x4cb8) = (uVar1 + (uVar1 >> 0x1f)) * 5;
	iVar7 = SRegLoadValue((char)puVar4, (char)*(undefined4 *)(iVar7 + -0x5aec), 0, cVar3 + '8', param_5,
	    param_6, param_7, param_8, *(undefined *)(iVar2 + 0xb),
	    *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
	if (iVar7 == 0) {
		*(undefined4 *)(iVar2 + 0x38) = 1;
	}
	*(undefined4 *)(*(int *)(iVar2 + 0x14) + -0x4cb4) = *(undefined4 *)(iVar2 + 0x38);
	return;
}

ulonglong palette_init(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	undefined4 in_stack_ffffffc8;
	undefined uVar4;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	uVar1 = _DAT_100f34ec;
	uVar4 = (undefined)in_stack_ffffffc8;
	ppuVar2 = &toc;
	uVar3 = (ulonglong)_DAT_100f34ec;
	LoadGamma(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	memcpy((char)uVar1, (char)ppuVar2[-0x16bc], 0, param_4, param_5, param_6, param_7, param_8, uVar4,
	    in_stack_ffffffcf, local_2c);
	return uVar3;
}

void LoadPalette(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined uVar4;
	longlong lVar2;
	undefined *puVar3;
	undefined uVar6;
	undefined *puVar5;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	longlong lVar12;
	undefined4 in_stack_fffffcb8;
	uint local_310;

	uVar8 = (undefined)param_5;
	uVar7 = (undefined)param_4;
	uVar11 = (undefined)param_8;
	uVar10 = (undefined)param_7;
	uVar9 = (undefined)param_6;
	ppuVar1 = &toc;
	WOpenFile(param_1, ZEXT48(register0x0000000c) - 0x310, 0, param_4, param_5, param_6, param_7, param_8,
	    in_stack_fffffcb8);
	uVar4 = 0xf4;
	uVar6 = 0;
	WReadFile((ulonglong)local_310);
	WCloseFile((char)local_310, uVar4, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, in_stack_fffffcb8);
	puVar5 = ppuVar1[-0x16bc];
	lVar12 = 0x20;
	lVar2 = ZEXT48(register0x0000000c) - 0x30c;
	do {
		puVar3 = (undefined *)lVar2;
		*puVar5 = *puVar3;
		puVar5[1] = puVar3[1];
		puVar5[2] = puVar3[2];
		puVar5[3] = 0;
		puVar5[4] = puVar3[3];
		puVar5[5] = puVar3[4];
		puVar5[6] = puVar3[5];
		puVar5[7] = 0;
		puVar5[8] = puVar3[6];
		puVar5[9] = puVar3[7];
		puVar5[10] = puVar3[8];
		puVar5[0xb] = 0;
		puVar5[0xc] = puVar3[9];
		puVar5[0xd] = puVar3[10];
		puVar5[0xe] = puVar3[0xb];
		puVar5[0xf] = 0;
		puVar5[0x10] = puVar3[0xc];
		puVar5[0x11] = puVar3[0xd];
		puVar5[0x12] = puVar3[0xe];
		puVar5[0x13] = 0;
		puVar5[0x14] = puVar3[0xf];
		puVar5[0x15] = puVar3[0x10];
		puVar5[0x16] = puVar3[0x11];
		puVar5[0x17] = 0;
		puVar5[0x18] = puVar3[0x12];
		puVar5[0x19] = puVar3[0x13];
		puVar5[0x1a] = puVar3[0x14];
		puVar5[0x1b] = 0;
		puVar5[0x1c] = puVar3[0x15];
		puVar5[0x1d] = puVar3[0x16];
		lVar2 = lVar2 + 0x18;
		puVar5[0x1e] = puVar3[0x17];
		puVar5[0x1f] = 0;
		puVar5 = puVar5 + 0x20;
		lVar12 = lVar12 + -1;
	} while (lVar12 != 0);
	return;
}

void LoadRndLvlPal(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	longlong lVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined4 in_stack_fffffeb8;
	undefined in_stack_fffffebf;
	undefined1 in_stack_fffffecb;
	undefined4 in_stack_fffffecc;
	undefined4 in_stack_fffffed0;
	undefined4 in_stack_fffffed4;
	undefined4 in_stack_fffffed8;
	undefined4 in_stack_fffffedc;
	undefined4 in_stack_fffffee0;
	undefined4 in_stack_fffffee4;
	undefined auStack280[280];

	ppuVar1 = &toc;
	if (param_1 == 0) {
		LoadPalette((ulonglong)_DAT_100f34dc, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_fffffeb8);
	} else {
		lVar2 = random(0, 4, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_fffffeb8, in_stack_fffffebf, in_stack_fffffecb);
		uVar3 = ZEXT48(ppuVar1[-0x16be]);
		lVar2 = lVar2 + 1;
		lVar4 = param_1;
		sprintf((int)auStack280, ppuVar1[-0x16be], (int)param_1, (int)param_1, (int)lVar2, param_6,
		    param_7, param_8, in_stack_fffffeb8, in_stack_fffffebf, in_stack_fffffecc,
		    in_stack_fffffed0, in_stack_fffffed4, in_stack_fffffed8, in_stack_fffffedc,
		    in_stack_fffffee0, in_stack_fffffee4);
		LoadPalette(ZEXT48(register0x0000000c) - 0x118, uVar3, param_1, lVar4, lVar2, param_6, param_7,
		    param_8, in_stack_fffffeb8);
	}
	return;
}

void ResetPal(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined8 uVar1;
	undefined4 in_stack_ffffffc8;

	uVar1 = FUN_10016ebc();
	uVar1._7_1_ = (undefined)uVar1;
	if ((int)uVar1 != 0) {
		uVar1 = FUN_10016ec4();
		uVar1._7_1_ = (undefined)uVar1;
		if ((int)uVar1 == 0) {
			return;
		}
	}
	SDrawUpdatePalette_wrapper((undefined)uVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void IncreaseGamma(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined4 in_stack_ffffffc8;

	if (_DAT_100f4318 < 100) {
		_DAT_100f4318 = _DAT_100f4318 + 5;
		if (100 < _DAT_100f4318) {
			_DAT_100f4318 = 100;
		}
		uVar3 = 0;
		uVar2 = SUB41(_DAT_100f34d4, 0);
		uVar1 = ApplyGamma(_DAT_100f34ec, _DAT_100f34d4, 0x100, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		palette_update(uVar1, uVar2, uVar3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void UpdateGamma(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined4 in_stack_ffffffc8;

	if (0x1e < _DAT_100f4318) {
		_DAT_100f4318 = _DAT_100f4318 + -5;
		if (_DAT_100f4318 < 0x1e) {
			_DAT_100f4318 = 0x1e;
		}
		uVar3 = 0;
		uVar2 = SUB41(_DAT_100f34d4, 0);
		uVar1 = ApplyGamma(_DAT_100f34ec, _DAT_100f34d4, 0x100, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		palette_update(uVar1, uVar2, uVar3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

longlong UpdateGamma(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	if (param_1 != 0) {
		_DAT_100f4318 = 0x82 - param_1;
		uVar4 = 0;
		uVar3 = SUB41(_DAT_100f34d4, 0);
		ppuVar1 = &toc;
		uVar2 = ApplyGamma(_DAT_100f34ec, _DAT_100f34d4, 0x100, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		palette_update(uVar2, uVar3, uVar4, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return 0x82 - ZEXT48(ppuVar1[-0x132e]);
}

void SetFadeLevel(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte *pbVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	byte *pbVar4;
	undefined uVar5;
	undefined *puVar6;
	undefined uVar7;
	longlong lVar8;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	ppuVar2 = &toc;
	uVar3 = FUN_10016eb0();
	if ((int)uVar3 != 0) {
		pbVar4 = ppuVar2[-0x16bf];
		lVar8 = 0x33;
		uVar3 = ZEXT48(ppuVar2[-0x16b9]);
		do {
			puVar6 = (undefined *)uVar3;
			*puVar6 = (char)(param_1 * (uint)*pbVar4 >> 8);
			puVar6[1] = (char)(param_1 * (uint)pbVar4[1] >> 8);
			puVar6[2] = (char)(param_1 * (uint)pbVar4[2] >> 8);
			puVar6[4] = (char)(param_1 * (uint)pbVar4[4] >> 8);
			puVar6[5] = (char)(param_1 * (uint)pbVar4[5] >> 8);
			puVar6[6] = (char)(param_1 * (uint)pbVar4[6] >> 8);
			puVar6[8] = (char)(param_1 * (uint)pbVar4[8] >> 8);
			puVar6[9] = (char)(param_1 * (uint)pbVar4[9] >> 8);
			puVar6[10] = (char)(param_1 * (uint)pbVar4[10] >> 8);
			puVar6[0xc] = (char)(param_1 * (uint)pbVar4[0xc] >> 8);
			puVar6[0xd] = (char)(param_1 * (uint)pbVar4[0xd] >> 8);
			puVar6[0xe] = (char)(param_1 * (uint)pbVar4[0xe] >> 8);
			puVar6[0x10] = (char)(param_1 * (uint)pbVar4[0x10] >> 8);
			puVar6[0x11] = (char)(param_1 * (uint)pbVar4[0x11] >> 8);
			pbVar1 = pbVar4 + 0x12;
			pbVar4 = pbVar4 + 0x14;
			puVar6[0x12] = (char)(param_1 * (uint)*pbVar1 >> 8);
			uVar3 = uVar3 + 0x14;
			uVar7 = (undefined)uVar3;
			lVar8 = lVar8 + -1;
		} while (lVar8 != 0);
		Sleep(3, uVar7, param_3, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffc8,
		    in_stack_ffffffcf, local_2c);
		uVar5 = FUN_10016eac();
		palette_update(uVar5, uVar7, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void BlackPalette(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	SetFadeLevel(0, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void PaletteFadeIn(int param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined8 uVar3;
	longlong lVar4;
	undefined uVar5;
	longlong lVar6;
	undefined uVar7;
	longlong lVar8;
	undefined uVar9;
	longlong lVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	int iVar14;
	ulonglong uVar15;
	undefined4 in_stack_ffffffb8;
	undefined uVar16;
	undefined in_stack_ffffffbf;
	int local_3c;

	puVar2 = PTR_DAT_100f34e0;
	puVar1 = _DAT_100f34d4;
	lVar12 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	uVar15 = ZEXT48(PTR_DAT_100f34e0);
	uVar3 = 0;
	ApplyGamma(_DAT_100f34d4, PTR_DAT_100f34e0, 0x100, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	iVar14 = 0;
	while (true) {
		uVar16 = (undefined)in_stack_ffffffb8;
		uVar5 = (undefined)lVar4;
		uVar7 = (undefined)lVar6;
		uVar9 = (undefined)lVar8;
		uVar11 = (undefined)lVar10;
		uVar13 = (undefined)lVar12;
		if (0xff < iVar14)
			break;
		SetFadeLevel(iVar14, (char)uVar15, (char)uVar3, uVar5, uVar7, uVar9, uVar11, uVar13, in_stack_ffffffb8);
		iVar14 = iVar14 + param_1;
	}
	SetFadeLevel(0x100, (char)uVar15, (char)uVar3, uVar5, uVar7, uVar9, uVar11, uVar13, in_stack_ffffffb8);
	memcpy((char)puVar1, (char)puVar2, 0, uVar5, uVar7, uVar9, uVar11, uVar13, uVar16, in_stack_ffffffbf,
	    local_3c);
	*(undefined *)(local_3c + -0x4cb0) = 1;
	return;
}

void PaletteFadeOut(int param_1, char param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	ulonglong uVar1;
	int iVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	int iVar10;
	undefined4 in_stack_ffffffc8;

	lVar9 = (longlong)param_8;
	lVar8 = (longlong)param_7;
	lVar7 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar5 = (longlong)param_4;
	lVar4 = (longlong)param_3;
	lVar3 = (longlong)param_2;
	uVar1 = ZEXT48(&toc);
	if (DAT_100f4320 != '\0') {
		iVar10 = 0x100;
		while (true) {
			iVar2 = (int)uVar1;
			if (iVar10 < 1)
				break;
			SetFadeLevel(iVar10, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
			    (char)lVar9, in_stack_ffffffc8);
			iVar10 = iVar10 - param_1;
		}
		SetFadeLevel(0, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
		    (char)lVar9, in_stack_ffffffc8);
		*(undefined *)(iVar2 + -0x4cb0) = 0;
	}
	return;
}

void palette_update_caves(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	uint uVar2;
	undefined *puVar3;
	uint uVar4;
	ulonglong uVar5;
	longlong lVar6;
	longlong lVar7;
	int iVar8;
	longlong lVar9;
	undefined4 in_stack_ffffffc8;
	undefined local_4;
	undefined uStack3;
	undefined uStack2;

	uVar4 = _DAT_100f34ec;
	uVar5 = (ulonglong)_DAT_100f34ec;
	if (_DAT_100f431c != 0) {
		uVar1 = *(undefined4 *)(_DAT_100f34ec + 4);
		lVar9 = 3;
		lVar6 = uVar5 + 4;
		lVar7 = 1;
		do {
			puVar3 = (undefined *)lVar6;
			lVar7 = lVar7 + 8;
			iVar8 = (int)lVar7;
			*puVar3 = puVar3[4];
			puVar3[1] = puVar3[5];
			puVar3[2] = puVar3[6];
			puVar3[4] = puVar3[8];
			puVar3[5] = puVar3[9];
			puVar3[6] = puVar3[10];
			puVar3[8] = puVar3[0xc];
			puVar3[9] = puVar3[0xd];
			puVar3[10] = puVar3[0xe];
			puVar3[0xc] = puVar3[0x10];
			puVar3[0xd] = puVar3[0x11];
			puVar3[0xe] = puVar3[0x12];
			puVar3[0x10] = puVar3[0x14];
			puVar3[0x11] = puVar3[0x15];
			puVar3[0x12] = puVar3[0x16];
			puVar3[0x14] = puVar3[0x18];
			puVar3[0x15] = puVar3[0x19];
			puVar3[0x16] = puVar3[0x1a];
			puVar3[0x18] = puVar3[0x1c];
			puVar3[0x19] = puVar3[0x1d];
			puVar3[0x1a] = puVar3[0x1e];
			puVar3[0x1c] = puVar3[0x20];
			puVar3[0x1d] = puVar3[0x21];
			puVar3[0x1e] = puVar3[0x22];
			lVar6 = lVar6 + 0x20;
			lVar9 = lVar9 + -1;
		} while (lVar9 != 0);
		lVar9 = uVar5 + (ulonglong)(uint)(iVar8 << 2);
		lVar6 = 0x1f - lVar7;
		if (iVar8 < 0x1f) {
			do {
				puVar3 = (undefined *)lVar9;
				lVar7 = lVar7 + 1;
				iVar8 = (int)lVar7;
				*puVar3 = puVar3[4];
				puVar3[1] = puVar3[5];
				puVar3[2] = puVar3[6];
				lVar9 = lVar9 + 4;
				lVar6 = lVar6 + -1;
			} while (lVar6 != 0);
		}
		local_4 = (undefined)((uint)uVar1 >> 0x18);
		uVar2 = iVar8 * 4;
		*(undefined *)(uVar4 + uVar2) = local_4;
		uStack3 = (undefined)((uint)uVar1 >> 0x10);
		iVar8 = (int)(uVar5 + (ulonglong)uVar2);
		*(undefined *)(iVar8 + 1) = uStack3;
		uStack2 = (undefined)((uint)uVar1 >> 8);
		*(undefined *)(iVar8 + 2) = uStack2;
		palette_update((char)uVar4, (char)(uVar5 + (ulonglong)uVar2), (char)uVar2, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void palette_update_quest_palette(longlong param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	byte *pbVar2;
	int iVar4;
	ulonglong uVar3;
	undefined uVar5;
	undefined uVar6;
	longlong lVar7;
	undefined4 *puVar8;
	undefined uVar9;
	ulonglong uVar10;
	longlong lVar11;
	undefined4 *puVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffc8;

	pbVar2 = _DAT_100f34d4;
	iVar4 = (int)-param_1 + 0x20;
	uVar6 = SUB41(_DAT_100f34d4, 0);
	uVar10 = (ulonglong)(uint)(iVar4 * 4);
	uVar3 = -param_1 + 0x21;
	lVar7 = ZEXT48(PTR_DAT_100f34e0) + uVar10;
	lVar11 = ZEXT48(_DAT_100f34d4) + uVar10;
	uVar13 = (undefined)lVar11;
	if (-1 < iVar4) {
		uVar1 = (uint)uVar3 >> 3;
		uVar10 = (ulonglong)uVar1;
		if (uVar1 != 0) {
			do {
				puVar8 = (undefined4 *)lVar7;
				puVar12 = (undefined4 *)lVar11;
				*puVar12 = *puVar8;
				puVar12[-1] = puVar8[-1];
				puVar12[-2] = puVar8[-2];
				puVar12[-3] = puVar8[-3];
				puVar12[-4] = puVar8[-4];
				puVar12[-5] = puVar8[-5];
				puVar12[-6] = puVar8[-6];
				lVar7 = lVar7 + -0x20;
				puVar12[-7] = puVar8[-7];
				lVar11 = lVar11 + -0x20;
				uVar13 = (undefined)lVar11;
				uVar10 = uVar10 - 1;
			} while (uVar10 != 0);
			uVar3 = uVar3 & 7;
			if (uVar3 == 0)
				goto LAB_1008e71c;
		}
		do {
			puVar8 = (undefined4 *)lVar7;
			lVar7 = lVar7 + -4;
			*(undefined4 *)lVar11 = *puVar8;
			lVar11 = lVar11 + -4;
			uVar13 = (undefined)lVar11;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	}
LAB_1008e71c:
	uVar9 = 0x20;
	uVar5 = ApplyGamma(_DAT_100f34ec, pbVar2, 0x20, uVar13, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	palette_update(uVar5, uVar6, uVar9, uVar13, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

ulonglong palette_get_colour_cycling(void)

{
	return (ulonglong)_DAT_100f431c;
}
