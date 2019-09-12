
void palette_update(void)

{
	int iVar1;
	ulonglong uVar2;
	undefined in_r4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffc8;

	iVar1 = 0x100f8fd0;
	uVar2 = is_fullscreen();
	if ((int)uVar2 != 0) {
		SDrawUpdatePalette(
		    (char)*(undefined4 *)(iVar1 + -0x5ae4), in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ApplyGamma(undefined *param_1,
    byte *param_2,
    int param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	double dVar2;
	double _Y;
	double dVar3;
	double dVar4;
	double dVar5;

	iVar1 = 0;
	_Y = ((double)CONCAT44(0x43300000, _DAT_100f4318 ^ 0x80000000) - _DAT_100f4338) / _DAT_100f4350;
	dVar3 = _DAT_100f4330;
	dVar4 = _DAT_100f4340;
	dVar5 = _DAT_100f4348;
	while (iVar1 < param_3) {
		dVar2 = pow(((double)CONCAT44(0x43300000, (uint)*param_2) - dVar3) * dVar4, _Y);
		*param_1 = (char)(int)(dVar5 * dVar2);
		dVar2 = pow(((double)CONCAT44(0x43300000, (uint)param_2[1]) - dVar3) * dVar4, _Y);
		param_1[1] = (char)(int)(dVar5 * dVar2);
		dVar2 = pow(((double)CONCAT44(0x43300000, (uint)param_2[2]) - dVar3) * dVar4, _Y);
		iVar1 = iVar1 + 1;
		param_2 = param_2 + 4;
		param_1[2] = (char)(int)(dVar5 * dVar2);
		param_1 = param_1 + 4;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SaveGamma(void)

{
	int local_2c;

	SRegSaveValue(s_Diablo_1010ca40, s_Gamma_Correction_1010e8b8, '\0', _DAT_100f4318);
	SRegSaveValue(s_Diablo_1010ca40, *(char **)(local_2c + -0x5aec), '\0', *(DWORD *)(local_2c + -0x4cb4));
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void LoadGamma(void)

{
	uint uVar1;
	BOOL BVar2;
	int local_3c;
	int local_18[6];

	local_18[0] = _DAT_100f4318;
	BVar2 = SRegLoadValue(s_Diablo_1010ca40, s_Gamma_Correction_1010e8b8, '\0', local_18);
	if (BVar2 == 0) {
		local_18[0] = 100;
	}
	*(int *)(local_3c + -0x4cb8) = local_18[0];
	if (*(int *)(local_3c + -0x4cb8) < 0x1e) {
		*(undefined4 *)(local_3c + -0x4cb8) = 0x1e;
	} else {
		if (100 < *(int *)(local_3c + -0x4cb8)) {
			*(undefined4 *)(local_3c + -0x4cb8) = 100;
		}
	}
	uVar1 = *(int *)(local_3c + -0x4cb8) / 5 + (*(int *)(local_3c + -0x4cb8) >> 0x1f);
	*(int *)(local_3c + -0x4cb8) = (uVar1 + (uVar1 >> 0x1f)) * 5;
	BVar2 = SRegLoadValue(s_Diablo_1010ca40, *(char **)(local_3c + -0x5aec), '\0', local_18);
	if (BVar2 == 0) {
		local_18[0] = 1;
	}
	*(int *)(local_3c + -0x4cb4) = local_18[0];
	return;
}

void palette_init(void)

{
	int iVar1;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	iVar1 = 0x100f8fd0;
	LoadGamma();
	CopyMemory(0x5c, (char)*(undefined4 *)(iVar1 + -0x5af0), 0, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	return;
}

void LoadPalette(char *pszFileName)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;
	ulong local_310;
	undefined local_30c[780];

	iVar2 = 0x100f8fd0;
	WOpenFile(pszFileName, &local_310, 0);
	WReadFile(local_310, local_30c, 0x300);
	WCloseFile(local_310);
	puVar4 = *(undefined **)(iVar2 + -0x5af0);
	lVar5 = 0x20;
	puVar3 = local_30c;
	do {
		*puVar4 = *puVar3;
		puVar4[1] = puVar3[1];
		puVar4[2] = puVar3[2];
		puVar4[3] = 0;
		puVar4[4] = puVar3[3];
		puVar4[5] = puVar3[4];
		puVar4[6] = puVar3[5];
		puVar4[7] = 0;
		puVar4[8] = puVar3[6];
		puVar4[9] = puVar3[7];
		puVar4[10] = puVar3[8];
		puVar4[0xb] = 0;
		puVar4[0xc] = puVar3[9];
		puVar4[0xd] = puVar3[10];
		puVar4[0xe] = puVar3[0xb];
		puVar4[0xf] = 0;
		puVar4[0x10] = puVar3[0xc];
		puVar4[0x11] = puVar3[0xd];
		puVar4[0x12] = puVar3[0xe];
		puVar4[0x13] = 0;
		puVar4[0x14] = puVar3[0xf];
		puVar4[0x15] = puVar3[0x10];
		puVar4[0x16] = puVar3[0x11];
		puVar4[0x17] = 0;
		puVar4[0x18] = puVar3[0x12];
		puVar4[0x19] = puVar3[0x13];
		puVar4[0x1a] = puVar3[0x14];
		puVar4[0x1b] = 0;
		puVar4[0x1c] = puVar3[0x15];
		puVar4[0x1d] = puVar3[0x16];
		puVar1 = puVar3 + 0x17;
		puVar3 = puVar3 + 0x18;
		puVar4[0x1e] = *puVar1;
		puVar4[0x1f] = 0;
		puVar4 = puVar4 + 0x20;
		lVar5 = lVar5 + -1;
	} while (lVar5 != 0);
	return;
}

void LoadRndLvlPal(int l)

{
	int iVar1;
	int iVar2;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_fffffeb8;
	undefined in_stack_fffffebf;
	undefined4 in_stack_fffffecc;
	undefined4 in_stack_fffffed0;
	undefined4 in_stack_fffffed4;
	undefined4 in_stack_fffffed8;
	undefined4 in_stack_fffffedc;
	undefined4 in_stack_fffffee0;
	undefined4 in_stack_fffffee4;
	char acStack280[280];

	iVar1 = 0x100f8fd0;
	if (l == 0) {
		LoadPalette("Levels\\TownData\\Town.pal");
	} else {
		iVar2 = random('\0', 4);
		wsprintf((int)acStack280, *(undefined4 *)(iVar1 + -0x5af8), l, l, iVar2 + 1, in_r8, in_r9, in_r10,
		    in_stack_fffffeb8, in_stack_fffffebf, in_stack_fffffecc, in_stack_fffffed0, in_stack_fffffed4,
		    in_stack_fffffed8, in_stack_fffffedc, in_stack_fffffee0, in_stack_fffffee4);
		LoadPalette(acStack280);
	}
	return;
}

void ResetPal(void)

{
	undefined8 uVar1;

	uVar1 = IsLost();
	if (((int)uVar1 == 0) || (uVar1 = Restore(), (int)uVar1 != 0)) {
		ResetPal();
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void IncreaseGamma(void)

{
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffc8;

	if (_DAT_100f4318 < 100) {
		_DAT_100f4318 = _DAT_100f4318 + 5;
		if (100 < _DAT_100f4318) {
			_DAT_100f4318 = 100;
		}
		ApplyGamma(&DAT_10181f5c, &DAT_1018235c, 0x100, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
		palette_update();
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DecreaseGamma(void)

{
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffc8;

	if (0x1e < _DAT_100f4318) {
		_DAT_100f4318 = _DAT_100f4318 + -5;
		if (_DAT_100f4318 < 0x1e) {
			_DAT_100f4318 = 0x1e;
		}
		ApplyGamma(&DAT_10181f5c, &DAT_1018235c, 0x100, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
		palette_update();
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int UpdateGamma(int gamma)

{
	int iVar1;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffc8;

	iVar1 = 0x100f8fd0;
	if (gamma != 0) {
		_DAT_100f4318 = 0x82 - gamma;
		iVar1 = 0x100f8fd0;
		ApplyGamma(&DAT_10181f5c, &DAT_1018235c, 0x100, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
		palette_update();
	}
	return 0x82 - *(int *)(iVar1 + -0x4cb8);
}

void SetFadeLevel(DWORD fadeval)

{
	byte *pbVar1;
	int iVar2;
	ulonglong uVar3;
	byte *pbVar4;
	undefined *puVar5;
	longlong lVar6;

	iVar2 = 0x100f8fd0;
	uVar3 = is_fullscreen();
	if ((int)uVar3 != 0) {
		pbVar4 = *(byte **)(iVar2 + -0x5afc);
		lVar6 = 0x33;
		puVar5 = *(undefined **)(iVar2 + -0x5ae4);
		do {
			*puVar5 = (char)(fadeval * (uint)*pbVar4 >> 8);
			puVar5[1] = (char)(fadeval * (uint)pbVar4[1] >> 8);
			puVar5[2] = (char)(fadeval * (uint)pbVar4[2] >> 8);
			puVar5[4] = (char)(fadeval * (uint)pbVar4[4] >> 8);
			puVar5[5] = (char)(fadeval * (uint)pbVar4[5] >> 8);
			puVar5[6] = (char)(fadeval * (uint)pbVar4[6] >> 8);
			puVar5[8] = (char)(fadeval * (uint)pbVar4[8] >> 8);
			puVar5[9] = (char)(fadeval * (uint)pbVar4[9] >> 8);
			puVar5[10] = (char)(fadeval * (uint)pbVar4[10] >> 8);
			puVar5[0xc] = (char)(fadeval * (uint)pbVar4[0xc] >> 8);
			puVar5[0xd] = (char)(fadeval * (uint)pbVar4[0xd] >> 8);
			puVar5[0xe] = (char)(fadeval * (uint)pbVar4[0xe] >> 8);
			puVar5[0x10] = (char)(fadeval * (uint)pbVar4[0x10] >> 8);
			puVar5[0x11] = (char)(fadeval * (uint)pbVar4[0x11] >> 8);
			pbVar1 = pbVar4 + 0x12;
			pbVar4 = pbVar4 + 0x14;
			puVar5[0x12] = (char)(fadeval * (uint)*pbVar1 >> 8);
			puVar5 = puVar5 + 0x14;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		Sleep(3);
		WaitForVerticalBlank();
		palette_update();
	}
	return;
}

void BlackPalette(void)

{
	SetFadeLevel(0);
	return;
}

void PaletteFadeIn(int fr)

{
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	DWORD fadeval;
	undefined4 in_stack_ffffffb8;
	undefined uVar1;
	undefined in_stack_ffffffbf;
	int local_3c;

	ApplyGamma(&DAT_1018235c, &DAT_1018275c, 0x100, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8);
	fadeval = 0;
	while (uVar1 = (undefined)in_stack_ffffffb8, (int)fadeval < 0x100) {
		SetFadeLevel(fadeval);
		fadeval = fadeval + fr;
	}
	SetFadeLevel(0x100);
	CopyMemory(0x5c, 0x5c, 0, in_r6, in_r7, in_r8, in_r9, in_r10, uVar1, in_stack_ffffffbf, local_3c);
	*(undefined *)(local_3c + -0x4cb0) = 1;
	return;
}

void PaletteFadeOut(int fr)

{
	undefined8 uVar1;
	int iVar2;
	DWORD fadeval;

	uVar1 = 0x100f8fd0;
	if (DAT_100f4320 != '\0') {
		fadeval = 0x100;
		while (true) {
			iVar2 = (int)uVar1;
			if ((int)fadeval < 1)
				break;
			SetFadeLevel(fadeval);
			fadeval = fadeval - fr;
		}
		SetFadeLevel(0);
		*(undefined *)(iVar2 + -0x4cb0) = 0;
	}
	return;
}

void palette_update_caves(void)

{
	undefined4 uVar1;
	undefined *puVar2;
	longlong lVar3;
	int iVar4;
	longlong lVar5;
	undefined local_4;
	undefined uStack3;
	undefined uStack2;

	uVar1 = uRam10181f60;
	if (color_cycling_enabled != 0) {
		lVar5 = 3;
		puVar2 = (undefined *)0x10181f60;
		lVar3 = 1;
		do {
			lVar3 = lVar3 + 8;
			iVar4 = (int)lVar3;
			*puVar2 = puVar2[4];
			puVar2[1] = puVar2[5];
			puVar2[2] = puVar2[6];
			puVar2[4] = puVar2[8];
			puVar2[5] = puVar2[9];
			puVar2[6] = puVar2[10];
			puVar2[8] = puVar2[0xc];
			puVar2[9] = puVar2[0xd];
			puVar2[10] = puVar2[0xe];
			puVar2[0xc] = puVar2[0x10];
			puVar2[0xd] = puVar2[0x11];
			puVar2[0xe] = puVar2[0x12];
			puVar2[0x10] = puVar2[0x14];
			puVar2[0x11] = puVar2[0x15];
			puVar2[0x12] = puVar2[0x16];
			puVar2[0x14] = puVar2[0x18];
			puVar2[0x15] = puVar2[0x19];
			puVar2[0x16] = puVar2[0x1a];
			puVar2[0x18] = puVar2[0x1c];
			puVar2[0x19] = puVar2[0x1d];
			puVar2[0x1a] = puVar2[0x1e];
			puVar2[0x1c] = puVar2[0x20];
			puVar2[0x1d] = puVar2[0x21];
			puVar2[0x1e] = puVar2[0x22];
			puVar2 = puVar2 + 0x20;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		puVar2 = &DAT_10181f5c + iVar4 * 4;
		lVar5 = 0x1f - lVar3;
		if (iVar4 < 0x1f) {
			do {
				lVar3 = lVar3 + 1;
				iVar4 = (int)lVar3;
				*puVar2 = puVar2[4];
				puVar2[1] = puVar2[5];
				puVar2[2] = puVar2[6];
				puVar2 = puVar2 + 4;
				lVar5 = lVar5 + -1;
			} while (lVar5 != 0);
		}
		local_4 = (undefined)((uint)uVar1 >> 0x18);
		iVar4 = iVar4 * 4;
		(&DAT_10181f5c)[iVar4] = local_4;
		uStack3 = (undefined)((uint)uVar1 >> 0x10);
		*(undefined *)(iVar4 + 0x10181f5d) = uStack3;
		uStack2 = (undefined)((uint)uVar1 >> 8);
		*(undefined *)(iVar4 + 0x10181f5e) = uStack2;
		palette_update();
	}
	return;
}

void palette_update_quest_palette(int n)

{
	uint uVar1;
	int iVar3;
	ulonglong uVar2;
	longlong lVar4;
	undefined4 *puVar5;
	ulonglong uVar6;
	longlong lVar7;
	undefined4 *puVar8;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffc8;

	iVar3 = (int)-(longlong)n + 0x20;
	uVar6 = (ulonglong)(uint)(iVar3 * 4);
	uVar2 = -(longlong)n + 0x21;
	lVar4 = ZEXT48(&DAT_1018275c) + uVar6;
	lVar7 = ZEXT48(&DAT_1018235c) + uVar6;
	lVar7._7_1_ = (undefined)lVar7;
	if (-1 < iVar3) {
		uVar1 = (uint)uVar2 >> 3;
		uVar6 = (ulonglong)uVar1;
		if (uVar1 != 0) {
			do {
				puVar5 = (undefined4 *)lVar4;
				puVar8 = (undefined4 *)lVar7;
				*puVar8 = *puVar5;
				puVar8[-1] = puVar5[-1];
				puVar8[-2] = puVar5[-2];
				puVar8[-3] = puVar5[-3];
				puVar8[-4] = puVar5[-4];
				puVar8[-5] = puVar5[-5];
				puVar8[-6] = puVar5[-6];
				lVar4 = lVar4 + -0x20;
				puVar8[-7] = puVar5[-7];
				lVar7 = lVar7 + -0x20;
				lVar7._7_1_ = (undefined)lVar7;
				uVar6 = uVar6 - 1;
			} while (uVar6 != 0);
			uVar2 = uVar2 & 7;
			if (uVar2 == 0)
				goto LAB_1008e71c;
		}
		do {
			puVar5 = (undefined4 *)lVar4;
			lVar4 = lVar4 + -4;
			*(undefined4 *)lVar7 = *puVar5;
			lVar7 = lVar7 + -4;
			lVar7._7_1_ = (undefined)lVar7;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	}
LAB_1008e71c:
	ApplyGamma(&DAT_10181f5c, &DAT_1018235c, 0x20, (undefined)lVar7, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	palette_update();
	return;
}

BOOL palette_get_colour_cycling(void)

{
	return color_cycling_enabled;
}

BOOL palette_set_color_cycling(BOOL enabled)

{
	color_cycling_enabled = enabled;
	return enabled;
}
