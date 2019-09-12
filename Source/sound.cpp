
void snd_update(BOOL bStopAll)

{
	int iVar1;
	undefined8 in_r4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	uint uVar2;
	int *piVar3;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	int local_18;

	piVar3 = (int *)&DAT_1019feb0;
	uVar2 = 0;
	do {
		if (*piVar3 != 0) {
			if (bStopAll == 0) {
				in_r4 = 0xffffffffffffffe8;
				iVar1 = GetStatus__18IDirectSoundBufferFPUl((char)*piVar3, 0xe8, in_r5, in_r6, in_r7, in_r8, in_r9,
				    in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
				if ((iVar1 == 0) && (local_18 == 1))
					goto LAB_100a4464;
			}
			Stop__18IDirectSoundBufferFv((char)*piVar3, (char)in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			Release__18IDirectSoundBufferFv((char)*piVar3, (char)in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			*piVar3 = 0;
		}
	LAB_100a4464:
		uVar2 = uVar2 + 1;
		piVar3 = piVar3 + 1;
		if (7 < uVar2) {
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

IDirectSoundBuffer *sound_dup_channel(IDirectSoundBuffer *DSB)

{
	int *piVar1;
	int iVar2;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar3;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	piVar1 = (int *)&DAT_1019feb0;
	if (DAT_1010ef62 != '\0') {
		lVar3 = 8;
		iVar2 = 0;
		do {
			if (*piVar1 == 0) {
				lVar3 = ZEXT48(&DAT_1019feb0) + (ulonglong)(uint)(iVar2 << 2);
				iVar2 = DuplicateSoundBuffer__12IDirectSoundFP18IDirectSoundBufferPP18IDirectSoundBuffer(
				    (char)_DAT_100f445c, (char)DSB, (char)lVar3, 0xb0, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb,
				    in_stack_ffffffcf, local_2c);
				if (iVar2 == 0) {
					return *(IDirectSoundBuffer **)lVar3;
				}
				return (IDirectSoundBuffer *)0x0;
			}
			piVar1 = piVar1 + 1;
			iVar2 = iVar2 + 1;
			lVar3 = lVar3 + -1;
		} while (lVar3 != 0);
	}
	return (IDirectSoundBuffer *)0x0;
}

void sound_load_volume(char *value_name, int *value)

{
	uint uVar1;
	BOOL BVar2;
	int local_18[6];

	local_18[0] = *value;
	BVar2 = SRegLoadValue("Diablo", value_name, '\0', local_18);
	if (BVar2 == 0) {
		local_18[0] = 0;
	}
	*value = local_18[0];
	if (*value < -0x640) {
		*value = -0x640;
	} else {
		if (0 < *value) {
			*value = 0;
		}
	}
	uVar1 = *value / 100 + (*value >> 0x1f);
	*value = (uVar1 + (uVar1 >> 0x1f)) * 100;
	return;
}

void sound_store_volume(char *key, int value)

{
	SRegSaveValue("Diablo", key, '\0', value);
	return;
}

BOOL sound_file_reload(TSnd *sound_file, IDirectSoundBuffer *DSB)

{
	undefined *puVar1;
	char cVar2;
	int iVar3;
	BOOL BVar4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined uVar5;
	undefined in_r9;
	undefined uVar6;
	undefined in_r10;
	undefined uVar7;

	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x60);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	iVar3._3_1_ = SUB41(DSB, 0);
	iVar3 = Restore__18IDirectSoundBufferFv((undefined)iVar3, (undefined)iVar3, in_r5, in_r6, in_r7, in_r8, in_r9,
	    in_r10, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	if (iVar3 == 0) {
		BVar4 = 0;
		WOpenFile(sound_file->sound_path, puVar1 + 0x48, 0, *puVar1);
		WSetFilePointer(*(undefined4 *)(puVar1 + 0x48), (sound_file->chunk).dwOffset, 0, 0, *puVar1);
		cVar2 = (char)(ZEXT48(register0x0000000c) - 0x60);
		uVar5 = 0xe0;
		uVar6 = 0xd8;
		uVar7 = 0;
		iVar3 = Lock__18IDirectSoundBufferFUlUlPvPUlPvPUlUl((undefined)iVar3, 0, (char)(sound_file->chunk).dwSize,
		    cVar2 + 'D', cVar2 + '<', 0xe0, 0xd8, 0, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		if (iVar3 == 0) {
			WReadFile(
			    *(undefined4 *)(puVar1 + 0x48), *(undefined4 *)(puVar1 + 0x44), *(undefined4 *)(puVar1 + 0x3c), *puVar1);
			iVar3 = Unlock__18IDirectSoundBufferFPvUlPvUl((undefined)iVar3, (char)*(undefined4 *)(puVar1 + 0x44),
			    (char)*(undefined4 *)(puVar1 + 0x3c), (char)*(undefined4 *)(puVar1 + 0x40),
			    (char)*(undefined4 *)(puVar1 + 0x38), uVar5, uVar6, uVar7, puVar1[0xb], puVar1[0xf],
			    *(undefined4 *)(puVar1 + 0x14));
			if (iVar3 == 0) {
				BVar4 = 1;
			}
		}
		WCloseFile(*(undefined4 *)(puVar1 + 0x48), *puVar1);
	} else {
		BVar4 = 0;
	}
	return BVar4;
}

void snd_stop_snd(TSnd *pSnd)

{
	undefined in_r4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	if ((pSnd != (TSnd *)0x0) && (pSnd->DSB != (IDirectSoundBuffer *)0x0)) {
		Stop__18IDirectSoundBufferFv((char)pSnd->DSB, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	}
	return;
}

BOOL snd_playing(TSnd *pSnd)

{
	int iVar1;
	undefined8 uVar2;
	int iVar3;
	uint uVar4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x40);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	if (pSnd == (TSnd *)0x0) {
		uVar4 = 0;
	} else {
		if (pSnd->DSB == (IDirectSoundBuffer *)0x0) {
			uVar4 = 0;
		} else {
			iVar3 = GetStatus__18IDirectSoundBufferFPUl((char)pSnd->DSB,
			    (char)(ZEXT48(register0x0000000c) - 0x40) + '8', in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
			    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
			if (iVar3 == 0) {
				uVar2 = countLeadingZeros(1 - *(int *)(iVar1 + 0x38));
				uVar4 = (uint)uVar2 >> 5 & 0xff;
			} else {
				uVar4 = 0;
			}
		}
	}
	return (BOOL)uVar4;
}

void snd_play_snd(TSnd *pSnd, int lVolume, int lPan)

{
	char *tc;
	BOOL BVar2;
	IDirectSoundBuffer *DSB;
	undefined uVar3;
	longlong lVar1;
	undefined uVar4;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	int _lVolume;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	if (((pSnd != (TSnd *)0x0) && (DAT_1010ef61 != '\0')) && (DSB = pSnd->DSB, DSB != (IDirectSoundBuffer *)0x0)) {
		uVar4 = (char)lPan;
		tc = (char *)GetTickCount();
		if (tc + -pSnd->start_tc < (char *)0x50) {
			GetTickCount();
		} else {
			BVar2 = snd_playing(pSnd);
			if ((BVar2 == 0) || (DSB = sound_dup_channel(pSnd->DSB), DSB != (IDirectSoundBuffer *)0x0)) {
				SetVolume((int)DSB);
				uVar3 = SUB41(DSB, 0);
				SetPan__18IDirectSoundBufferFl(uVar3, (char)lPan, uVar4, in_r6, in_r7, in_r8, in_r9, in_r10,
				    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
				lVar1 = Play__18IDirectSoundBufferFUlUlUl(
				    uVar3, 0, 0, 0, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
				if ((lVar1 + 0x77880000U & 0xffffffff) == 0x96) {
					BVar2 = sound_file_reload(pSnd, DSB);
					if (BVar2 != 0) {
						Play__18IDirectSoundBufferFUlUlUl(uVar3, 0, 0, 0, in_r7, in_r8, in_r9, in_r10,
						    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
					}
				} else {
					if ((DWORD)lVar1 != 0) {
						DSErrMsg((DWORD)lVar1, 0x128, *(char **)(local_3c + -0x5818));
					}
				}
				*(char **)&pSnd->start_tc = tc;
			}
		}
	}
	return;
}

void sound_CreateSoundBuffer(TSnd *sound_file)

{
	undefined4 uVar1;
	undefined *puVar2;
	char cVar3;
	int error_code;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;

	puVar2 = (undefined *)(ZEXT48(register0x0000000c) - 0x60);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	cVar3 = (char)(ZEXT48(register0x0000000c) - 0x60);
	ZeroMemory(cVar3 + '8', 0x14, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, puVar2[0xb], puVar2[0xf],
	    *(undefined4 *)(puVar2 + 0x14));
	uVar1 = *(undefined4 *)(*(int *)(puVar2 + 0x14) + -0x4b74);
	*(undefined4 *)(puVar2 + 0x38) = 0x14;
	*(undefined4 *)(puVar2 + 0x3c) = 0xc2;
	*(DWORD *)(puVar2 + 0x40) = (sound_file->chunk).dwSize;
	*(TSnd **)(puVar2 + 0x48) = sound_file;
	error_code = CreateSoundBuffer__12IDirectSoundFP13_DSBUFFERDESCPP18IDirectSoundBufferP8IUnknown((char)uVar1,
	    cVar3 + '8', (char)sound_file + ' ', 0, in_r7, in_r8, in_r9, in_r10, puVar2[0xb], puVar2[0xf],
	    *(undefined4 *)(puVar2 + 0x14));
	if (error_code != 0) {
		DSErrMsg(error_code, 0x13f, *(undefined4 *)(*(int *)(puVar2 + 0x14) + -0x5818), *puVar2);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

TSnd *sound_file_load(char *path)

{
	TSnd *sound_file;
	DWORD DVar1;
	BYTE *pBVar2;
	DWORD error_code;
	undefined in_r6;
	undefined uVar3;
	undefined in_r7;
	undefined uVar4;
	undefined in_r8;
	undefined uVar5;
	undefined in_r9;
	undefined uVar6;
	undefined in_r10;
	undefined uVar7;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	int local_4c;
	int iVar8;
	undefined uStack37;
	undefined uStack33;
	undefined uStack29;
	undefined uStack25;
	ulong local_18[6];

	if (_DAT_100f445c == 0) {
		sound_file = (TSnd *)0x0;
	} else {
		uVar3 = 0;
		WOpenFile(path, local_18, 0);
		sound_file = (TSnd *)DiabloAllocPtr(0x28);
		ZeroMemory((char)sound_file, 0x28, uVar3, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab,
		    in_stack_ffffffaf, local_4c);
		sound_file->sound_path = path;
		DVar1 = GetTickCount();
		sound_file->start_tc = DVar1 - 0x51;
		iVar8 = local_4c;
		pBVar2 = LoadWaveFile(local_18[0], (WAVEFORMATEX *)sound_file, &sound_file->chunk);
		if (pBVar2 == (BYTE *)0x0) {
			app_fatal(*(char **)(local_4c + -0x581c), ZEXT48(sound_file->sound_path));
		}
		sound_CreateSoundBuffer(sound_file);
		uVar3 = 0xe4;
		uVar4 = 0xdc;
		uVar5 = 0xe0;
		uVar6 = 0xd8;
		uVar7 = 0;
		error_code = Lock__18IDirectSoundBufferFUlUlPvPUlPvPUlUl((char)sound_file->DSB, 0,
		    (char)(sound_file->chunk).dwSize, 0xe4, 0xdc, 0xe0, 0xd8, 0, in_stack_ffffffab, in_stack_ffffffaf, iVar8);
		if (error_code != 0) {
			DSErrMsg(error_code, 0x163, "SOUND.CPP");
		}
		CopyMemory(uStack25, (char)pBVar2 + (char)(sound_file->chunk).dwOffset, uStack33, uVar3, uVar4, uVar5, uVar6,
		    uVar7, in_stack_ffffffab, in_stack_ffffffaf, iVar8);
		error_code = Unlock__18IDirectSoundBufferFPvUlPvUl((char)sound_file->DSB, uStack25, uStack33, uStack29,
		    uStack37, uVar5, uVar6, uVar7, in_stack_ffffffab, in_stack_ffffffaf, iVar8);
		if (error_code != 0) {
			DSErrMsg(error_code, 0x16a, "SOUND.CPP");
		}
		thunk_mem_free_dbg(pBVar2);
		WCloseFile(local_18[0]);
	}
	return sound_file;
}

void sound_file_cleanup(TSnd *sound_file)

{
	undefined in_r4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	if (sound_file != (TSnd *)0x0) {
		if (sound_file->DSB != (IDirectSoundBuffer *)0x0) {
			Stop__18IDirectSoundBufferFv((char)sound_file->DSB, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
			Release__18IDirectSoundBufferFv((char)sound_file->DSB, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
			sound_file->DSB = (IDirectSoundBuffer *)0x0;
		}
		mem_free_dbg(sound_file);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sound_create_primary_buffer(ulong music_track)

{
	undefined4 uVar1;
	undefined *puVar2;
	char cVar3;
	uint uVar4;
	int iVar5;
	int error_code;
	BOOL BVar6;
	char in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;

	iVar5 = 0x100f8fd0;
	puVar2 = (undefined *)(ZEXT48(register0x0000000c) - 0xd0);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	if (DAT_100f4450 == '\0') {
		_DAT_100f4454 = 0;
		DAT_100f4450 = '\x01';
	}
	cVar3 = (char)(ZEXT48(register0x0000000c) - 0xd0);
	if (music_track == 0) {
		ZeroMemory(cVar3 + -0x54, 0x14, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, puVar2[0xb], puVar2[0xf],
		    *(undefined4 *)(puVar2 + 0x14));
		uVar1 = *(undefined4 *)(*(int *)(puVar2 + 0x14) + -0x4b74);
		*(undefined4 *)(puVar2 + 0xac) = 0x14;
		in_r5 = (char)*(int *)(puVar2 + 0x14) + -0x7c;
		*(undefined4 *)(puVar2 + 0xb0) = 1;
		in_r6 = 0;
		error_code = CreateSoundBuffer__12IDirectSoundFP13_DSBUFFERDESCPP18IDirectSoundBufferP8IUnknown((char)uVar1,
		    cVar3 + -0x54, in_r5, 0, in_r7, in_r8, in_r9, in_r10, puVar2[0xb], puVar2[0xf],
		    *(undefined4 *)(puVar2 + 0x14));
		iVar5 = *(int *)(puVar2 + 0x14);
		if (error_code != 0) {
			in_r5 = -0x52;
			DSErrMsg(error_code, 0x1a2, "SOUND.CPP", *puVar2);
		}
	}
	if (*(int *)(iVar5 + -0x4b7c) != 0) {
		uVar1 = *(undefined4 *)(iVar5 + -0x4b74);
		*(undefined4 *)(puVar2 + 0x4c) = 0x60;
		error_code = GetCaps__12IDirectSoundFP7_DSCAPS((char)uVar1, cVar3 + 'L', in_r5, in_r6, in_r7, in_r8, in_r9,
		    in_r10, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		iVar5 = *(int *)(puVar2 + 0x14);
		if (error_code != 0) {
			in_r5 = -0x52;
			DSErrMsg(error_code, 0x1aa, "SOUND.CPP", *puVar2);
		}
		if ((music_track == 0) || (BVar6 = LoadWaveFormat(music_track, puVar2 + 0x38, *puVar2), BVar6 == 0)) {
			ZeroMemory(cVar3 + '8', 0x12, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, puVar2[0xb], puVar2[0xf],
			    *(undefined4 *)(puVar2 + 0x14));
			iVar5 = *(int *)(puVar2 + 0x14);
			*(undefined2 *)(puVar2 + 0x38) = 1;
			*(undefined4 *)(puVar2 + 0x3c) = 0x5622;
			*(undefined2 *)(puVar2 + 0x46) = 0x10;
			*(undefined2 *)(puVar2 + 0x3a) = 2;
			*(undefined2 *)(puVar2 + 0x48) = 0;
		}
		*(undefined2 *)(puVar2 + 0x3a) = 2;
		uVar4 = (uint) * (ushort *)(puVar2 + 0x3a) * (uint) * (ushort *)(puVar2 + 0x46);
		*(ushort *)(puVar2 + 0x44) = (short)((int)uVar4 >> 3) + (ushort)((int)uVar4 < 0 && (uVar4 & 7) != 0);
		uVar1 = *(undefined4 *)(iVar5 + -0x4b7c);
		*(uint *)(puVar2 + 0x40) = *(int *)(puVar2 + 0x3c) * (uint) * (ushort *)(puVar2 + 0x44);
		SetFormat__18IDirectSoundBufferFP13tWAVEFORMATEX((char)uVar1, cVar3 + '8', (char)*(int *)(puVar2 + 0x3c), in_r6,
		    in_r7, in_r8, in_r9, in_r10, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sound_DirectSoundCreate(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	_DAT_100f4460 = 0;
	DirectSoundCreate(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	return;
}

void snd_init(HWND hWnd)

{
	char *value_name;
	uint uVar1;
	int *piVar2;
	int iVar3;
	int iVar4;
	char cVar5;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined4 in_stack_ffffffb8;
	undefined uVar6;
	undefined in_stack_ffffffbf;
	int local_3c;

	iVar3 = 0x100f8fd0;
	sound_load_volume(s_Sound_Volume_1010ef7c, (int *)&DAT_100f4464);
	value_name = *(char **)(iVar3 + -0x5824);
	**(byte **)(iVar3 + -0x72b8) = (~((byte)(*(uint *)(iVar3 + -0x4b6c) >> 0x18) ^ 0xff) >> 7) + ((ulonglong) * (uint *)(iVar3 + -0x4b6c) < 0xfffffffffffff9c1) & 1;
	sound_load_volume(value_name, (int *)(iVar3 + -0x4b94));
	uVar6 = (undefined)in_stack_ffffffb8;
	uVar1 = *(uint *)(iVar3 + -0x4b94);
	cVar5 = -0x40 - (char)uVar1;
	**(byte **)(iVar3 + -0x727c) = (~((byte)(uVar1 >> 0x18) ^ 0xff) >> 7) + ((ulonglong)uVar1 < 0xfffffffffffff9c1) & 1;
	iVar4 = sound_DirectSoundCreate(0, (char)iVar3 + -0x74, 0, cVar5, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8);
	if (iVar4 != 0) {
		*(undefined4 *)(iVar3 + -0x4b74) = 0;
	}
	piVar2 = (int *)(iVar3 + -0x4b74);
	if (*piVar2 != 0) {
		iVar3 = local_3c;
		iVar4 = SetCooperativeLevel__12IDirectSoundFP6HWND__Ul(
		    (char)*piVar2, (char)hWnd, 3, cVar5, in_r7, in_r8, in_r9, in_r10, uVar6, in_stack_ffffffbf, local_3c);
		local_3c = iVar3;
		if (iVar4 == 0) {
			local_3c = iVar3;
			sound_create_primary_buffer(0);
		}
	}
	SVidInitialize(*(ulong *)(iVar3 + -0x4b74));
	SFileDdaInitialize(*(ulong *)(local_3c + -0x4b74));
	**(char **)(local_3c + -0x72b0) = '\x01' - (*(int *)(local_3c + -0x4b74) == 0);
	return;
}

void sound_cleanup(void)

{
	undefined in_r4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	snd_update(1);
	SVidDestroy();
	SFileDdaDestroy();
	if (*(int *)(local_2c + -0x4b74) != 0) {
		Release__12IDirectSoundFv((char)*(int *)(local_2c + -0x4b74), in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		*(undefined4 *)(local_2c + -0x4b74) = 0;
	}
	if (DAT_1019fed0 != '\0') {
		DAT_1019fed0 = '\0';
		sound_store_volume(*(char **)(local_2c + -0x5820), *(int *)(local_2c + -0x4b6c));
		sound_store_volume(*(char **)(local_2c + -0x5824), *(int *)(local_2c + -0x4b94));
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void music_stop(void)

{
	int local_2c;

	if (_DAT_100f4458 != 0) {
		SFileDdaEnd(_DAT_100f4458);
		SFileCloseFile(*(ulong *)(local_2c + -0x4b78));
		*(undefined4 *)(local_2c + -0x4b78) = 0;
		*(undefined4 *)(local_2c + -0x4b90) = 6;
	}
	return;
}

void music_start(int nTrack)

{
	int iVar1;
	BOOL BVar2;
	int local_2c;

	iVar1 = 0x100f8fd0;
	music_stop();
	if ((*(int *)(iVar1 + -0x4b74) != 0) && (**(char **)(iVar1 + -0x727c) != '\0')) {
		BVar2 = SFileOpenFile(*(char **)(*(int *)(iVar1 + -0x5828) + nTrack * 4), (ulong *)(iVar1 + -0x4b78));
		iVar1 = local_2c;
		sound_create_primary_buffer(*(ulong *)(local_2c + -0x4b78));
		if (BVar2 == 0) {
			*(undefined4 *)(iVar1 + -0x4b78) = 0;
		} else {
			SFileDdaBeginEx(*(ulong *)(iVar1 + -0x4b78), 0x40000, 0x40000, 0, *(int *)(iVar1 + -0x4b94), 0, 0);
			*(int *)(local_2c + -0x4b90) = nTrack;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sound_disable_music(BOOL disable)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	if (DAT_100f4448 == '\0') {
		_DAT_100f444c = 6;
		DAT_100f4448 = '\x01';
	}
	if (disable == 0) {
		if (_DAT_100f444c != 6) {
			if (_DAT_100f4440 == 6) {
				iVar1 = 0x100f8fd0;
				music_start(_DAT_100f444c);
			}
			*(undefined4 *)(iVar1 + -0x4b84) = 6;
		}
	} else {
		_DAT_100f444c = _DAT_100f4440;
		music_stop();
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int sound_get_or_set_music_volume(int volume)

{
	int iVar1;
	int local_2c;

	iVar1 = _DAT_100f443c;
	if (volume != 1) {
		iVar1 = 0x100f8fd0;
		_DAT_100f443c = volume;
		if (_DAT_100f4458 != 0) {
			_DAT_100f443c = volume;
			SFileDdaSetVolume(_DAT_100f4458, volume, 0);
			iVar1 = local_2c;
		}
		iVar1 = *(int *)(iVar1 + -0x4b94);
	}
	return iVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int sound_get_or_set_sound_volume(int volume)

{
	if (volume == 1) {
		return _DAT_100f4464;
	}
	_DAT_100f4464 = volume;
	return volume;
}