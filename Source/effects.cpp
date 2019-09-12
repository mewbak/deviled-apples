
BOOL effect_is_playing(int nSFX)

{
	undefined8 uVar1;
	BOOL rv;

	if (sgSFX[nSFX].pSnd == (TSnd *)0x0) {
		if ((sgSFX[nSFX].bFlags & 1) == 0) {
			rv = 0;
		} else {
			uVar1 = countLeadingZeros((TSFX *)((int)sfx_data_cur - (int)(sgSFX + nSFX)));
			rv = (uint)uVar1 >> 5 & 0xff;
		}
	} else {
		rv = snd_playing(sgSFX[nSFX].pSnd);
	}
	return rv;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sfx_stop(void)

{
	int local_2c;

	if (_DAT_100f4110 != 0) {
		SFileDdaEnd(_DAT_100f4110);
		SFileCloseFile(*(ulong *)(local_2c + -0x4ec0));
		*(undefined4 *)(local_2c + -0x4ec0) = 0;
		*(undefined4 *)(local_2c + -0x4ec4) = 0;
	}
	return;
}

void stream_play(TSFX *pSFX, int lVolume, int lPan)

{
	int iVar1;
	int iVar2;
	BOOL BVar3;
	int local_3c;

	iVar1 = 0x100f8fd0;
	sfx_stop();
	iVar2 = sound_get_or_set_sound_volume(1);
	lVolume = lVolume + iVar2;
	if (-0x641 < lVolume) {
		if (0 < lVolume) {
			lVolume = 0;
		}
		BVar3 = SFileOpenFile(pSFX->pszName, (ulong *)(iVar1 + -0x4ec0));
		if (BVar3 == 0) {
			*(undefined4 *)(local_3c + -0x4ec0) = 0;
		} else {
			BVar3 = SFileDdaBeginEx(*(ulong *)(local_3c + -0x4ec0), 0x40000, 0, 0, lVolume, lPan, 0);
			if (BVar3 == 0) {
				sfx_stop();
			} else {
				*(TSFX **)(local_3c + -0x4ec4) = pSFX;
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void effects_update(void)

{
	BOOL BVar1;
	uint local_8;
	uint local_4;

	if (((_DAT_100f4110 != 0) && (BVar1 = SFileDdaGetPos(_DAT_100f4110, &local_4, &local_8), BVar1 != 0)) && (local_8 <= local_4)) {
		sfx_stop();
	}
	return;
}

void sound_stop(void)

{
	bool bVar1;
	int iVar2;
	TSFX *pTVar3;

	pTVar3 = sgSFX;
	iVar2 = 0x359;
	do {
		if (pTVar3->pSnd != (TSnd *)0x0) {
			snd_stop_snd(pTVar3->pSnd);
		}
		bVar1 = iVar2 != 0;
		pTVar3 = pTVar3 + 1;
		iVar2 = iVar2 + -1;
	} while (bVar1);
	return;
}

void InitMonsterSND(int monst)

{
	byte bVar1;
	size_t sVar2;
	BYTE *p;
	TSnd *pTVar3;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	int iVar4;
	undefined8 unaff_r27;
	int iVar5;
	undefined8 unaff_r28;
	byte *pbVar6;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	char *pcVar7;
	undefined8 unaff_r31;
	byte *pbVar8;
	undefined4 in_stack_fffffea8;
	undefined in_stack_fffffeaf;
	undefined4 in_stack_fffffebc;
	undefined4 in_stack_fffffec0;
	undefined4 in_stack_fffffec4;
	undefined4 in_stack_fffffec8;
	undefined4 in_stack_fffffecc;
	undefined4 in_stack_fffffed0;
	undefined4 in_stack_fffffed4;
	char acStack296[268];
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
	if (DAT_1019fed0 != '\0') {
		pcVar7 = &DAT_100fb688;
		pbVar6 = (byte *)((int)Monsters + monst * 0x208 + 0x147);
		bVar1 = *pbVar6;
		iVar5 = 0;
		do {
			if ((*pcVar7 != 's') || (*(int *)((uint)bVar1 * 0x80 + 0x101081dc) != 0)) {
				iVar4 = 0;
				pbVar8 = pbVar6;
				do {
					wsprintf((int)acStack296, *(undefined4 *)((uint)bVar1 * 0x80 + 0x101081d8), (int)*pcVar7, iVar4 + 1,
					    in_r7, in_r8, in_r9, in_r10, in_stack_fffffea8, in_stack_fffffeaf, in_stack_fffffebc,
					    in_stack_fffffec0, in_stack_fffffec4, in_stack_fffffec8, in_stack_fffffecc, in_stack_fffffed0,
					    in_stack_fffffed4);
					sVar2 = strlen(acStack296);
					p = DiabloAllocPtr(sVar2 + 1);
					strcpy((char *)p, acStack296);
					pTVar3 = sound_file_load((char *)p);
					*(TSnd **)(pbVar8 + 0x1cc) = pTVar3;
					if (pTVar3 == (TSnd *)0x0) {
						mem_free_dbg(p);
					}
					iVar4 = iVar4 + 1;
					pbVar8 = pbVar8 + 4;
				} while (iVar4 < 2);
			}
			iVar5 = iVar5 + 1;
			pbVar6 = pbVar6 + 8;
			pcVar7 = pcVar7 + 1;
		} while (iVar5 < 4);
	}
	return;
}

void FreeEffects(void)

{
	TSnd *sound_file;
	char *p;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = 0;
	iVar4 = (int)&Monsters[0].trans_file + 3;
	while (iVar3 < nummtypes) {
		iVar2 = 0;
		iVar5 = iVar4;
		do {
			iVar1 = 0;
			iVar6 = iVar5;
			do {
				sound_file = *(TSnd **)(iVar6 + 0x1cc);
				if (sound_file != (TSnd *)0x0) {
					*(undefined4 *)(iVar6 + 0x1cc) = 0;
					p = sound_file->sound_path;
					sound_file->sound_path = (char *)0x0;
					sound_file_cleanup(sound_file);
					mem_free_dbg(p);
				}
				iVar1 = iVar1 + 1;
				iVar6 = iVar6 + 4;
			} while (iVar1 < 2);
			iVar2 = iVar2 + 1;
			iVar5 = iVar5 + 8;
		} while (iVar2 < 4);
		iVar4 = iVar4 + 0x208;
		iVar3 = iVar3 + 1;
	}
	return;
}

BOOL calc_snd_position(int x, int y, int *plVolume, int *plPan)

{
	int iVar1;
	BOOL BVar2;
	int iVar3;

	x = x - *(int *)((int)plr + myplr * 0x55ec + 0x38);
	y = y - *(int *)((int)plr + myplr * 0x55ec + 0x3c);
	*plPan = (x - y) * 0x100;
	iVar1 = abs(*plPan);
	if (iVar1 < 0x1901) {
		iVar1 = abs(y);
		iVar3 = abs(x);
		if (iVar1 < iVar3) {
			iVar1 = abs(x);
		} else {
			iVar1 = abs(y);
		}
		*plVolume = iVar1 << 6;
		if (*plVolume < 0x1900) {
			*plVolume = -*plVolume;
			BVar2 = 1;
		} else {
			BVar2 = 0;
		}
	} else {
		BVar2 = 0;
	}
	return BVar2;
}

void PlaySFX_priv(TSFX *pSFX, BOOL loc, int x, int y)

{
	BOOL BVar1;
	TSnd *pTVar2;
	int local_18;
	int local_14[5];

	if (((((*(char *)((int)plr + myplr * 0x55ec + 0x5592) == '\0') || (gbMaxPlayers == '\x01')) && (DAT_1019fed0 != '\0')) && ((DAT_1010ef61 != '\0' && (gbBufferMsgs == 0)))) && ((((pSFX->bFlags & 1) != 0 || (((pSFX->bFlags & 2) != 0 || (pSFX->pSnd == (TSnd *)0x0)))) || (BVar1 = snd_playing(pSFX->pSnd), BVar1 == 0)))) {
		local_14[0] = 0;
		local_18 = 0;
		if ((loc != 0) && (BVar1 = calc_snd_position(x, y, &local_18, local_14), BVar1 == 0)) {
			return;
		}
		if ((pSFX->bFlags & 1) == 0) {
			if (pSFX->pSnd == (TSnd *)0x0) {
				pTVar2 = sound_file_load(pSFX->pszName);
				pSFX->pSnd = pTVar2;
			}
			if (pSFX->pSnd != (TSnd *)0x0) {
				snd_play_snd(pSFX->pSnd, local_18, local_14[0]);
			}
		} else {
			stream_play(pSFX, local_18, local_14[0]);
		}
	}
	return;
}

void PlayEffect(int i, int mode)

{
	TSnd *pSnd;
	int iVar1;
	int iVar2;
	BOOL BVar3;
	int local_28;
	int local_24[9];

	iVar1 = 0x100f8fd0;
	if ((((*(char *)((int)plr + myplr * 0x55ec + 0x5592) == '\0') && (iVar2 = random(-0x5c, 2), **(char **)(iVar1 + -0x72b0) != '\0')) && (**(char **)(iVar1 + -0x72b8) != '\0')) && (**(char **)(iVar1 + -0x72bc) == '\0')) {
		i = i * 0xe8;
		pSnd = *(TSnd **)(*(int *)(iVar1 + -0x7610) + *(int *)(&DAT_10151a30 + i) * 0x208 + mode * 8 + iVar2 * 4 + 0x1cc);
		if (((pSnd != (TSnd *)0x0) && (BVar3 = snd_playing(pSnd), BVar3 == 0)) && (BVar3 = calc_snd_position(*(int *)(i + 0x10151a50), *(int *)(i + 0x10151a54), &local_28, local_24), BVar3 != 0)) {
			snd_play_snd(pSnd, local_28, local_24[0]);
		}
	}
	return;
}

int RndSFX(int psfx)

{
	int v;

	if (psfx == 0x314) {
		v = 2;
	} else {
		if (psfx == 0x2d7) {
			v = 3;
		} else {
			if (psfx == 0x2da) {
				v = 3;
			} else {
				if (psfx == 0x2dd) {
					v = 3;
				} else {
					if (psfx == 0x240) {
						v = 2;
					} else {
						if (psfx == 0x2a7) {
							v = 2;
						} else {
							if (psfx == 9) {
								v = 2;
							} else {
								if (psfx == 0x56) {
									v = 2;
								} else {
									if (psfx == 0x1e) {
										v = 2;
									} else {
										if (psfx == 0x3f) {
											v = 2;
										} else {
											if (psfx == 0x10) {
												v = 2;
											} else {
												if (psfx != 0x2cb) {
													return psfx;
												}
												v = 3;
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
	v = random(-0x5b, v);
	return psfx + v;
}

void PlaySFX(int psfx)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	iVar2 = RndSFX(psfx);
	PlaySFX_priv((TSFX *)(iVar1 + -0x180 + iVar2 * 0xc), 0, 0, 0);
	return;
}

void PlaySfxLoc(int psfx, int x, int y)

{
	int iVar1;

	iVar1 = RndSFX(psfx);
	if (((-1 < iVar1) && (iVar1 < 4)) && (sgSFX[iVar1].pSnd != (TSnd *)0x0)) {
		(sgSFX[iVar1].pSnd)->start_tc = 0;
	}
	PlaySFX_priv(sgSFX + iVar1, 1, x, y);
	return;
}

void FreeMonsterSnd(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar1 = 0x100f8fd0;
	snd_update(1);
	sfx_stop();
	sound_stop();
	iVar1 = *(int *)(iVar1 + -0x7610);
	iVar4 = 0;
	while (iVar4 < nummtypes) {
		iVar3 = 0;
		iVar5 = iVar1;
		do {
			iVar2 = 0;
			iVar6 = iVar5;
			do {
				snd_stop_snd(*(TSnd **)(iVar6 + 0x1cc));
				iVar2 = iVar2 + 1;
				iVar6 = iVar6 + 4;
			} while (iVar2 < 2);
			iVar3 = iVar3 + 1;
			iVar5 = iVar5 + 8;
		} while (iVar3 < 4);
		iVar1 = iVar1 + 0x208;
		iVar4 = iVar4 + 1;
	}
	return;
}

void sound_update(void)

{
	if (DAT_1019fed0 != '\0') {
		snd_update(0);
		effects_update();
	}
	return;
}

void effects_cleanup_sfx(void)

{
	TSnd *sound_file;
	uint uVar1;
	longlong lVar2;

	lVar2 = 0x100f8fd0;
	FreeMonsterSnd();
	lVar2 = lVar2 + -0x180;
	uVar1 = 0;
	do {
		sound_file = *(TSnd **)((int)lVar2 + 8);
		if (sound_file != (TSnd *)0x0) {
			sound_file_cleanup(sound_file);
			*(undefined4 *)((int)lVar2 + 8) = 0;
		}
		uVar1 = uVar1 + 1;
		lVar2 = lVar2 + 0xc;
	} while (uVar1 < 0x35a);
	return;
}

void priv_sound_init(BYTE bLoadMask)

{
	byte bVar1;
	byte bVar2;
	TSnd *pTVar3;
	uint uVar4;
	TSFX *pTVar5;

	if (DAT_1019fed0 != '\0') {
		pTVar5 = sgSFX;
		bVar2 = bLoadMask ^ bLoadMask & 0x70;
		uVar4 = 0;
		do {
			if (pTVar5->pSnd == (TSnd *)0x0) {
				bVar1 = pTVar5->bFlags;
				if ((bVar1 & 1) == 0) {
					if ((bVar2 == 0) || ((bVar2 & bVar1) != 0)) {
						if (((bVar1 & 0x70) == 0) || ((bLoadMask & 0x70 & bVar1) != 0)) {
							Sleep(1);
							pTVar3 = sound_file_load(pTVar5->pszName);
							pTVar5->pSnd = pTVar3;
						}
					}
				}
			}
			uVar4 = uVar4 + 1;
			pTVar5 = pTVar5 + 1;
		} while (uVar4 < 0x35a);
		Sleep(1);
	}
	return;
}

void stream_update(void)

{
	char cVar1;
	BYTE bLoadMask;

	bLoadMask = '\0';
	if ((byte)gbMaxPlayers < 2) {
		cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
		if (cVar1 == '\0') {
			bLoadMask = ' ';
		} else {
			if (cVar1 == '\x01') {
				bLoadMask = '\x10';
			} else {
				if (cVar1 == '\x02') {
					bLoadMask = '@';
				} else {
					app_fatal("effects:1");
				}
			}
		}
	} else {
		bLoadMask = 'p';
	}
	priv_sound_init(bLoadMask);
	return;
}

void sound_init(void)

{
	priv_sound_init('\x04');
	return;
}

void effects_play_sound(char *snd_file)

{
	int iVar1;
	BOOL BVar2;
	uint uVar3;
	TSFX *pTVar4;

	if ((DAT_1019fed0 != '\0') && (DAT_1010ef61 != '\0')) {
		uVar3 = 0;
		pTVar4 = sgSFX;
		do {
			iVar1 = _stricmp(pTVar4->pszName, snd_file);
			if ((iVar1 == 0) && (pTVar4->pSnd != (TSnd *)0x0)) {
				BVar2 = snd_playing(sgSFX[uVar3].pSnd);
				if (BVar2 != 0) {
					return;
				}
				snd_play_snd(sgSFX[uVar3].pSnd, 0, 0);
				return;
			}
			uVar3 = uVar3 + 1;
			pTVar4 = pTVar4 + 1;
		} while (uVar3 < 0x35a);
	}
	return;
}