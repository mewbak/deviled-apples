
ulonglong effect_is_playing(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte *pbVar1;
	undefined8 uVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined4 in_stack_ffffffc8;

	lVar4 = ZEXT48(&DAT_100f8e50) + (longlong)param_1 * 0xc;
	pbVar1 = (byte *)lVar4;
	if (*(int *)(pbVar1 + 8) == 0) {
		if ((*pbVar1 & 1) == 0) {
			uVar3 = 0;
		} else {
			uVar2 = countLeadingZeros(_DAT_100f410c - (int)pbVar1);
			uVar3 = (ulonglong)((uint)uVar2 >> 5 & 0xff);
		}
	} else {
		uVar3 = snd_playing(*(int *)(pbVar1 + 8), (char)lVar4, param_3, param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffc8);
	}
	return uVar3;
}

void sfx_stop(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	if (_DAT_100f4110 != 0) {
		SFileDdaEnd((char)_DAT_100f4110, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		SFileCloseFile((char)*(undefined4 *)(local_2c + -0x4ec0), param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		*(undefined4 *)(local_2c + -0x4ec0) = 0;
		*(undefined4 *)(local_2c + -0x4ec4) = 0;
	}
	return;
}

void stream_play(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char cVar1;
	ulonglong uVar2;
	int iVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	int local_3c;

	cVar1 = -0x30;
	uVar4 = param_3;
	sfx_stop((char)param_1, (char)param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	uVar2 = sound_get_or_set_sound_volume(1);
	uVar7 = (undefined)((longlong)param_2 + uVar2);
	iVar3 = (int)((longlong)param_2 + uVar2);
	if (-0x641 < iVar3) {
		if (0 < iVar3) {
			uVar7 = 0;
		}
		iVar3 = SFileOpenFile((char)*(undefined4 *)(param_1 + 4), cVar1 + '@', uVar4, param_4, param_5,
		    param_6, param_7, param_8, (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
		if (iVar3 == 0) {
			*(undefined4 *)(local_3c + -0x4ec0) = 0;
		} else {
			uVar4 = 0;
			uVar5 = 0;
			uVar6 = 0;
			uVar8 = 0;
			iVar3 = SFileDdaBeginEx((char)*(undefined4 *)(local_3c + -0x4ec0), 0, 0, 0, uVar7, param_3, 0,
			    param_8, (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
			if (iVar3 == 0) {
				sfx_stop(0, uVar4, uVar5, uVar6, uVar7, param_3, uVar8, param_8, in_stack_ffffffb8);
			} else {
				*(int *)(local_3c + -0x4ec4) = param_1;
			}
		}
	}
	return;
}

void effects_update(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined uVar2;
	undefined uVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;
	uint local_8;
	uint local_4;

	if (_DAT_100f4110 != 0) {
		uVar2 = 0xfc;
		uVar3 = 0xf8;
		iVar1 = SFileDdaGetPos((char)_DAT_100f4110, 0xfc, 0xf8, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		if ((iVar1 != 0) && (local_8 <= local_4)) {
			sfx_stop((char)local_4, uVar2, uVar3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return;
}

void sound_stop(undefined param_1, char param_2, char param_3, char param_4, char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	bool bVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	undefined *puVar10;
	undefined4 in_stack_ffffffc8;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	lVar2 = (longlong)param_2;
	puVar10 = &DAT_100f8e50;
	iVar9 = 0x359;
	do {
		if (*(int *)(puVar10 + 8) != 0) {
			snd_stop_snd(*(int *)(puVar10 + 8), (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, in_stack_ffffffc8);
		}
		bVar1 = iVar9 != 0;
		puVar10 = puVar10 + 0xc;
		iVar9 = iVar9 + -1;
	} while (bVar1);
	return;
}

void InitMonsterSND(int iParm1)

{
	int iVar3;
	longlong lVar1;
	ulonglong uVar2;
	longlong lVar4;
	undefined uVar5;
	longlong lVar6;
	undefined uVar7;
	longlong lVar8;
	undefined uVar9;
	undefined4 uVar10;
	undefined8 in_r7;
	undefined4 uVar11;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	longlong lVar12;
	undefined8 unaff_r27;
	int iVar13;
	undefined8 unaff_r28;
	byte *pbVar14;
	undefined8 unaff_r29;
	int iVar15;
	undefined8 unaff_r30;
	char *pcVar16;
	undefined8 unaff_r31;
	byte *pbVar17;
	undefined4 in_stack_fffffea8;
	undefined in_stack_fffffeaf;
	undefined4 in_stack_fffffebc;
	undefined4 in_stack_fffffec0;
	undefined4 in_stack_fffffec4;
	undefined4 in_stack_fffffec8;
	undefined4 in_stack_fffffecc;
	undefined4 in_stack_fffffed0;
	undefined4 in_stack_fffffed4;
	undefined auStack296[268];
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar11 = (undefined4)in_r7;
	uVar10 = (undefined4)((ulonglong)in_r7 >> 0x20);
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (*_DAT_100f1d20 != '\0') {
		pcVar16 = &DAT_100fb688;
		pbVar14 = PTR_DAT_100f19c0 + iParm1 * 0x208;
		iVar13 = 0;
		iVar15 = _DAT_100f1d1c + (uint)*pbVar14 * 0x80;
		do {
			if ((*pcVar16 != 's') || (*(int *)(iVar15 + 0x14) != 0)) {
				lVar12 = 0;
				pbVar17 = pbVar14;
				do {
					lVar8 = lVar12 + 1;
					lVar6 = (longlong)*pcVar16;
					sprintf((int)auStack296, *(undefined4 *)(iVar15 + 0x10), (int)*pcVar16, (int)lVar8,
					    uVar11, in_r8, in_r9, in_r10, in_stack_fffffea8, in_stack_fffffeaf,
					    in_stack_fffffebc, in_stack_fffffec0, in_stack_fffffec4, in_stack_fffffec8,
					    in_stack_fffffecc, in_stack_fffffed0, in_stack_fffffed4);
					iVar3 = strlen((uint)auStack296);
					lVar1 = DiabloAllocPtr((longlong)iVar3 + 1);
					lVar4 = ZEXT48(register0x0000000c) - 0x128;
					strcpy((int)lVar1, (int)lVar4);
					uVar9 = (undefined)lVar8;
					uVar7 = (undefined)lVar6;
					uVar5 = (undefined)lVar4;
					uVar2 = sound_file_load(lVar1, lVar4, lVar6, lVar8, CONCAT44(uVar10, uVar11), in_r8, in_r9, in_r10,
					    in_stack_fffffea8);
					*(int *)(pbVar17 + 0x1cc) = (int)uVar2;
					if ((uVar2 & 0xffffffff) == 0) {
						mem_free_dbg(lVar1, uVar5, uVar7, uVar9, (char)uVar11, (char)in_r8, (char)in_r9, (char)in_r10,
						    in_stack_fffffea8);
					}
					lVar12 = lVar12 + 1;
					pbVar17 = pbVar17 + 4;
				} while ((int)lVar12 < 2);
			}
			iVar13 = iVar13 + 1;
			pbVar14 = pbVar14 + 8;
			pcVar16 = pcVar16 + 1;
		} while (iVar13 < 4);
	}
	return;
}

ulonglong FreeEffects(char param_1, char param_2, char param_3, char param_4, char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	ulonglong uVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	undefined *puVar15;
	undefined *puVar16;
	undefined *puVar17;
	undefined4 in_stack_ffffff98;

	puVar3 = PTR_DAT_100f19b8;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	lVar5 = (longlong)param_2;
	uVar4 = SEXT18(param_1);
	iVar14 = 0;
	puVar15 = PTR_DAT_100f19c0;
	while (iVar14 < *(int *)puVar3) {
		iVar13 = 0;
		puVar16 = puVar15;
		do {
			iVar12 = 0;
			puVar17 = puVar16;
			do {
				uVar1 = *(uint *)(puVar17 + 0x1cc);
				uVar4 = (ulonglong)uVar1;
				if (uVar1 != 0) {
					*(undefined4 *)(puVar17 + 0x1cc) = 0;
					uVar2 = *(uint *)(uVar1 + 0x1c);
					*(undefined4 *)(uVar1 + 0x1c) = 0;
					sound_file_cleanup(uVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
					    (char)lVar10, (char)lVar11, in_stack_ffffff98);
					uVar4 = mem_free_dbg((ulonglong)uVar2, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
					    (char)lVar9, (char)lVar10, (char)lVar11, in_stack_ffffff98);
				}
				iVar12 = iVar12 + 1;
				puVar17 = puVar17 + 4;
			} while (iVar12 < 2);
			iVar13 = iVar13 + 1;
			puVar16 = puVar16 + 8;
		} while (iVar13 < 4);
		puVar15 = puVar15 + 0x208;
		iVar14 = iVar14 + 1;
	}
	return uVar4;
}

undefined8
calc_snd_position(longlong param_1, longlong param_2, int *param_3, uint *param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	longlong lVar1;
	undefined8 uVar2;
	longlong lVar3;
	int iVar4;

	param_1 = param_1 - (ulonglong) * (uint *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x38);
	param_2 = param_2 - (ulonglong) * (uint *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x3c);
	*param_4 = ((int)param_1 - (int)param_2) * 0x100;
	lVar1 = abs((ulonglong)*param_4);
	if ((int)lVar1 < 0x1901) {
		lVar1 = abs(param_2);
		lVar3 = abs(param_1);
		if ((int)lVar1 < (int)lVar3) {
			lVar1 = abs(param_1);
			iVar4 = (int)lVar1;
		} else {
			lVar1 = abs(param_2);
			iVar4 = (int)lVar1;
		}
		*param_3 = iVar4 << 6;
		if (*param_3 < 0x1900) {
			*param_3 = -*param_3;
			uVar2 = 1;
		} else {
			uVar2 = 0;
		}
	} else {
		uVar2 = 0;
	}
	return uVar2;
}

void PlaySFX_priv(byte *param_1, longlong param_2, longlong param_3, longlong param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined8 uVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	ulonglong uVar6;
	undefined4 in_stack_ffffffb8;

	uVar6 = ZEXT48(PTR_DAT_100f1824);
	if (((((PTR_DAT_100f1828[*(int *)PTR_DAT_100f1824 * 0x55ec + 0x5592] == '\0') || (*PTR_DAT_100f17e0 == '\x01')) && (*_DAT_100f1d20 != '\0')) && ((*_DAT_100f1d18 != '\0' && (*_DAT_100f1d14 == '\0')))) && (((lVar3 = param_2, lVar4 = param_3, lVar5 = param_4, (*param_1 & 1) != 0 || ((lVar3 = param_2, lVar4 = param_3, lVar5 = param_4, (*param_1 & 2) != 0 || (lVar3 = param_2, lVar4 = param_3, lVar5 = param_4, *(int *)(param_1 + 8) == 0)))) || (lVar3 = param_2, lVar4 = param_3, lVar5 = param_4, uVar1 = snd_playing(*(int *)(param_1 + 8), (char)param_2, (char)param_3, (char)param_4, (char)PTR_DAT_100f1824, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8), (int)uVar1 == 0)))) {
		if ((int)param_2 != 0) {
			lVar4 = ZEXT48(register0x0000000c) - 0x18;
			lVar5 = ZEXT48(register0x0000000c) - 0x14;
			uVar2 = calc_snd_position(param_3, param_4, (int *)lVar4, (uint *)lVar5, (char)uVar6, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffffb8);
			lVar3 = param_4;
			if ((int)uVar2 == 0) {
				return;
			}
		}
		if ((*param_1 & 1) == 0) {
			if (*(int *)(param_1 + 8) == 0) {
				lVar3 = sound_file_load((ulonglong) * (uint *)(param_1 + 4), lVar3, lVar4, lVar5, uVar6, param_6,
				    param_7, param_8, in_stack_ffffffb8);
				*(int *)(param_1 + 8) = (int)lVar3;
			}
			if (*(uint *)(param_1 + 8) != 0) {
				snd_play_snd((ulonglong) * (uint *)(param_1 + 8), 0, 0);
			}
		} else {
			stream_play(param_1, 0, 0, (char)lVar5, (char)uVar6, (char)param_6, (char)param_7, (char)param_8,
			    in_stack_ffffffb8);
		}
	}
	return;
}

void PlayEffect(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined **ppuVar3;
	longlong lVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	undefined *puVar7;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined1 in_stack_ffffffbb;
	uint local_28;
	uint local_24[9];

	puVar7 = PTR_DAT_100f187c;
	ppuVar3 = &toc;
	if ((((PTR_DAT_100f1828[*(int *)PTR_DAT_100f1824 * 0x55ec + 0x5592] == '\0') && (lVar4 = random(0xa4, 2, (char)PTR_DAT_100f1824, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb), *ppuVar3[-0x1cac] != '\0')) && (*ppuVar3[-0x1cae] != '\0')) && (*ppuVar3[-0x1caf] == '\0')) {
		iVar2 = *(int *)(puVar7 + param_1 * 0xe8);
		uVar1 = *(uint *)(ppuVar3[-0x1d84] + (int)lVar4 * 4 + param_2 * 8 + iVar2 * 0x208 + 0x1cc);
		if (((uVar1 != 0) && (uVar5 = snd_playing(uVar1, (char)(param_2 * 8), (char)iVar2, (char)ppuVar3[-0x1d84], param_5, param_6, param_7, param_8, in_stack_ffffffa8), (int)uVar5 == 0)) && (puVar7 = puVar7 + param_1 * 0xe8, uVar6 = calc_snd_position((ulonglong) * (uint *)(puVar7 + 0x20), (ulonglong) * (uint *)(puVar7 + 0x24), (int *)&local_28, local_24, param_5, param_6, param_7, param_8, in_stack_ffffffa8), (int)uVar6 != 0)) {
			snd_play_snd((ulonglong)uVar1, (ulonglong)local_28, (ulonglong)local_24[0]);
		}
	}
	return;
}

longlong RndSFX(longlong param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	longlong lVar1;
	int iVar2;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined1 in_stack_ffffffdb;

	iVar2 = (int)param_1;
	if (iVar2 == 0x314) {
		lVar1 = 2;
	} else {
		if (iVar2 == 0x2d7) {
			lVar1 = 3;
		} else {
			if (iVar2 == 0x2da) {
				lVar1 = 3;
			} else {
				if (iVar2 == 0x2dd) {
					lVar1 = 3;
				} else {
					if (iVar2 == 0x240) {
						lVar1 = 2;
					} else {
						if (iVar2 == 0x2a7) {
							lVar1 = 2;
						} else {
							if (iVar2 == 9) {
								lVar1 = 2;
							} else {
								if (iVar2 == 0x56) {
									lVar1 = 2;
								} else {
									if (iVar2 == 0x1e) {
										lVar1 = 2;
									} else {
										if (iVar2 == 0x3f) {
											lVar1 = 2;
										} else {
											if (iVar2 == 0x10) {
												lVar1 = 2;
											} else {
												if (iVar2 != 0x2cb) {
													return param_1;
												}
												lVar1 = 3;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	lVar1 = random(0xa5, lVar1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8,
	    in_stack_ffffffcf, in_stack_ffffffdb);
	return param_1 + lVar1;
}

void PlaySFX(longlong lParm1, undefined param_2, undefined param_3, undefined param_4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined7 uVar3;
	undefined uVar4;
	undefined4 in_stack_ffffffc8;

	uVar4 = (undefined)uParm5;
	uVar3 = (undefined7)((ulonglong)uParm5 >> 8);
	ppuVar1 = &toc;
	lVar2 = RndSFX(lParm1, param_2, param_3, param_4, uVar4, (char)uParm6, (char)uParm7, (char)uParm8,
	    in_stack_ffffffc8);
	PlaySFX_priv((byte *)(ppuVar1 + (int)lVar2 * 3 + -0x60), 0, 0, 0, CONCAT71(uVar3, uVar4), uParm6, uParm7,
	    uParm8, in_stack_ffffffc8);
	return;
}

void PlaySfxLoc(longlong param_1, longlong param_2, longlong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	longlong lVar2;
	int iVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined4 in_stack_ffffffb8;

	uVar4 = (undefined7)((ulonglong)param_5 >> 8);
	uVar5 = (undefined)param_5;
	lVar2 = RndSFX(param_1, (char)param_2, (char)param_3, (undefined)param_4, uVar5, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffffb8);
	iVar3 = (int)lVar2;
	if (((-1 < iVar3) && (iVar3 < 4)) && (iVar1 = *(int *)(iVar3 * 0xc + 0x100f8e58), iVar1 != 0)) {
		*(undefined4 *)(iVar1 + 0x24) = 0;
	}
	PlaySFX_priv(&DAT_100f8e50 + iVar3 * 0xc, 1, param_2, param_3, CONCAT71(uVar4, uVar5), param_6, param_7,
	    param_8, in_stack_ffffffb8);
	return;
}

void FreeMonsterSnd(undefined param_1, char param_2, char param_3, char param_4, char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	undefined uVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	undefined *puVar14;
	undefined *puVar15;
	undefined *puVar16;
	undefined4 in_stack_ffffffa8;

	puVar1 = PTR_DAT_100f19b8;
	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	lVar4 = (longlong)param_2;
	ppuVar2 = &toc;
	uVar3 = snd_update(1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	uVar3 = sfx_stop(uVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffa8);
	sound_stop(uVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
	    (char)lVar10, in_stack_ffffffa8);
	puVar14 = ppuVar2[-0x1d84];
	iVar13 = 0;
	while (iVar13 < *(int *)puVar1) {
		iVar12 = 0;
		puVar15 = puVar14;
		do {
			iVar11 = 0;
			puVar16 = puVar15;
			do {
				snd_stop_snd(*(int *)(puVar16 + 0x1cc), (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
				    (char)lVar8, (char)lVar9, (char)lVar10, in_stack_ffffffa8);
				iVar11 = iVar11 + 1;
				puVar16 = puVar16 + 4;
			} while (iVar11 < 2);
			iVar12 = iVar12 + 1;
			puVar15 = puVar15 + 8;
		} while (iVar12 < 4);
		puVar14 = puVar14 + 0x208;
		iVar13 = iVar13 + 1;
	}
	return;
}

void sound_update(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined4 in_stack_ffffffc8;

	if (*_DAT_100f1d20 != '\0') {
		uVar1 = snd_update(0, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		effects_update(uVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void effects_cleanup_sfx(undefined param_1, char param_2, char param_3, char param_4, char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	ulonglong uVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	uint uVar10;
	longlong lVar11;
	undefined4 in_stack_ffffffb8;

	lVar9 = (longlong)param_8;
	lVar8 = (longlong)param_7;
	lVar7 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar5 = (longlong)param_4;
	lVar4 = (longlong)param_3;
	lVar3 = (longlong)param_2;
	uVar2 = ZEXT48(&toc);
	FreeMonsterSnd(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	lVar11 = uVar2 - 0x180;
	uVar10 = 0;
	do {
		uVar1 = *(uint *)((int)lVar11 + 8);
		if (uVar1 != 0) {
			sound_file_cleanup((ulonglong)uVar1, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
			    (char)lVar8, (char)lVar9, in_stack_ffffffb8);
			*(undefined4 *)((int)lVar11 + 8) = 0;
		}
		uVar10 = uVar10 + 1;
		lVar11 = lVar11 + 0xc;
	} while (uVar10 < 0x35a);
	return;
}

void priv_sound_init(byte param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	longlong lVar3;
	ulonglong uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	uint uVar14;
	byte *pbVar15;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)((ulonglong)param_4 >> 8);
	uVar8 = (undefined)param_4;
	uVar5 = (undefined7)((ulonglong)param_3 >> 8);
	uVar6 = (undefined)param_3;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	uVar4 = ZEXT48(_DAT_100f1d20);
	if (*_DAT_100f1d20 != '\0') {
		pbVar15 = &DAT_100f8e50;
		bVar2 = param_1 ^ param_1 & 0x70;
		uVar14 = 0;
		do {
			if (*(int *)(pbVar15 + 8) == 0) {
				bVar1 = *pbVar15;
				if ((bVar1 & 1) == 0) {
					if ((bVar2 == 0) || ((bVar2 & bVar1) != 0)) {
						if (((bVar1 & 0x70) == 0) || ((param_1 & 0x70 & bVar1) != 0)) {
							Sleep(1, (char)uVar4, uVar6, uVar8, uVar10, (char)lVar11, (char)lVar12, (char)lVar13,
							    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
							lVar3 = sound_file_load((ulonglong) * (uint *)(pbVar15 + 4), uVar4, CONCAT71(uVar5, uVar6),
							    CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10), (int)lVar11,
							    (int)lVar12, (int)lVar13, in_stack_ffffffb8);
							*(int *)(pbVar15 + 8) = (int)lVar3;
						}
					}
				}
			}
			uVar14 = uVar14 + 1;
			pbVar15 = pbVar15 + 0xc;
		} while (uVar14 < 0x35a);
		Sleep(1, (char)uVar4, uVar6, uVar8, uVar10, (char)lVar11, (char)lVar12, (char)lVar13,
		    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	}
	return;
}

void stream_update(undefined8 param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	byte bVar2;
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

	bVar2 = 0;
	if ((byte)*PTR_DAT_100f17e0 < 2) {
		param_2 = ZEXT48(PTR_DAT_100f1828);
		cVar1 = PTR_DAT_100f1828[*(int *)PTR_DAT_100f1824 * 0x55ec + 0x15c];
		if (cVar1 == '\0') {
			bVar2 = 0x20;
		} else {
			if (cVar1 == '\x01') {
				bVar2 = 0x10;
			} else {
				if (cVar1 == '\x02') {
					bVar2 = 0x40;
				} else {
					app_fatal((int)PTR_s_effects_1_100f2d28, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8,
					    in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8,
					    in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
				}
			}
		}
	} else {
		bVar2 = 0x70;
	}
	priv_sound_init(bVar2, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void sound_init(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	priv_sound_init(4, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void effects_play_sound(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint *puVar1;
	int iVar3;
	ulonglong uVar2;
	undefined uVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	uint uVar11;
	undefined *puVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	if ((*_DAT_100f1d20 != '\0') && (*_DAT_100f1d18 != '\0')) {
		uVar11 = 0;
		puVar12 = &DAT_100f8e50;
		do {
			uVar4 = param_1;
			iVar3 = _stricmp((char)*(undefined4 *)(puVar12 + 4), param_1, (char)lVar5, (char)lVar6,
			    (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)in_stack_ffffffb8,
			    in_stack_ffffffbf, local_3c);
			if ((iVar3 == 0) && (*(int *)(puVar12 + 8) != 0)) {
				puVar1 = (uint *)(uVar11 * 0xc + 0x100f8e58);
				uVar2 = snd_playing(*puVar1, uVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
				    (char)lVar9, (char)lVar10, in_stack_ffffffb8);
				if ((int)uVar2 != 0) {
					return;
				}
				snd_play_snd((ulonglong)*puVar1, 0, 0);
				return;
			}
			uVar11 = uVar11 + 1;
			puVar12 = puVar12 + 0xc;
		} while (uVar11 < 0x35a);
	}
	return;
}
