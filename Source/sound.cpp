
void snd_update(int param_1, char param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	uint uVar9;
	int *piVar10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	int local_18;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	lVar2 = (longlong)param_2;
	uVar9 = 0;
	piVar10 = _DAT_100f37c0;
	do {
		if (*piVar10 != 0) {
			if (param_1 == 0) {
				lVar2 = -0x18;
				iVar1 = GetStatus__18IDirectSoundBufferFPUl((char)*piVar10, 0xe8, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
				    (char)lVar7, (char)lVar8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
				if ((iVar1 == 0) && (local_18 == 1))
					goto LAB_100a4464;
			}
			Stop__18IDirectSoundBufferFv((char)*piVar10, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
			    (char)lVar7, (char)lVar8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			Release__18IDirectSoundBufferFv((char)*piVar10, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
			    (char)lVar7, (char)lVar8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			*piVar10 = 0;
		}
	LAB_100a4464:
		uVar9 = uVar9 + 1;
		piVar10 = piVar10 + 1;
		if (7 < uVar9) {
			return;
		}
	} while (true);
}

ulonglong sound_dup_channel(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar2;
	ulonglong uVar1;
	longlong lVar3;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	if (*PTR_DAT_100f208c != '\0') {
		lVar3 = 8;
		iVar2 = 0;
		uVar1 = (ulonglong)_DAT_100f37c0;
		do {
			if (*(int *)uVar1 == 0) {
				lVar3 = (ulonglong)_DAT_100f37c0 + (ulonglong)(uint)(iVar2 << 2);
				iVar2 = DuplicateSoundBuffer__12IDirectSoundFP18IDirectSoundBufferPP18IDirectSoundBuffer((char)_DAT_100f445c, param_1, (char)lVar3, (char)_DAT_100f37c0, param_5,
				    param_6, param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
				if (iVar2 == 0) {
					return (ulonglong) * (uint *)lVar3;
				}
				return 0;
			}
			uVar1 = uVar1 + 4;
			iVar2 = iVar2 + 1;
			lVar3 = lVar3 + -1;
		} while (lVar3 != 0);
	}
	return 0;
}

void sound_load_volume(undefined8 param_1, int *param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined4 uVar3;
	int iVar4;

	iVar2 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	uVar3 = _DAT_100f37bc;
	*(int *)(iVar2 + 0x38) = *param_2;
	iVar4 = SRegLoadValue((char)uVar3, (undefined)param_1, 0,
	    (char)(ZEXT48(register0x0000000c) - 0x50) + '8', param_5, param_6, param_7,
	    param_8, *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
	    *(undefined4 *)(iVar2 + 0x14));
	if (iVar4 == 0) {
		*(undefined4 *)(iVar2 + 0x38) = 0;
	}
	*param_2 = *(int *)(iVar2 + 0x38);
	if (*param_2 < -0x640) {
		*param_2 = -0x640;
	} else {
		if (0 < *param_2) {
			*param_2 = 0;
		}
	}
	uVar1 = *param_2 / 100 + (*param_2 >> 0x1f);
	*param_2 = (uVar1 + (uVar1 >> 0x1f)) * 100;
	return;
}

void sound_store_volume(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	SRegSaveValue((char)_DAT_100f37bc, param_1, 0, param_2, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

undefined8
sound_file_reload(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	int iVar2;
	undefined8 uVar1;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;
	undefined uStack37;
	uint local_24;
	undefined uStack29;
	uint local_1c;
	uint local_18;

	iVar2 = Restore__18IDirectSoundBufferFv((undefined)param_2, (undefined)param_2, (undefined)param_3, (char)param_4,
	    (char)param_5, (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	if (iVar2 == 0) {
		uVar1 = 0;
		WOpenFile((ulonglong) * (uint *)(param_1 + 0x1c), ZEXT48(register0x0000000c) - 0x18, 0, param_4,
		    param_5, param_6, param_7, param_8, in_stack_ffffffa8);
		WSetFilePointer(local_18, (ulonglong) * (uint *)(param_1 + 0x18), 0, 0, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar4 = (undefined) * (undefined4 *)(param_1 + 0x14);
		uVar5 = 0xe4;
		uVar6 = 0xdc;
		uVar7 = 0xe0;
		uVar8 = 0xd8;
		uVar3 = 0;
		uVar9 = 0;
		iVar2 = Lock__18IDirectSoundBufferFUlUlPvPUlPvPUlUl((undefined)param_2, 0, uVar4, 0xe4, 0xdc, 0xe0, 0xd8, 0, (char)in_stack_ffffffa8,
		    in_stack_ffffffaf, local_4c);
		if (iVar2 == 0) {
			WReadFile((ulonglong)local_18, (ulonglong)local_1c, (ulonglong)local_24);
			uVar3 = (undefined)local_1c;
			uVar4 = (undefined)local_24;
			uVar5 = uStack29;
			uVar6 = uStack37;
			iVar2 = Unlock__18IDirectSoundBufferFPvUlPvUl((undefined)param_2, uVar3, uVar4, uStack29, uStack37, uVar7, uVar8, uVar9,
			    (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
			if (iVar2 == 0) {
				uVar1 = 1;
			}
		}
		WCloseFile((char)local_18, uVar3, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffa8);
	} else {
		uVar1 = 0;
	}
	return uVar1;
}

void snd_stop_snd(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
		Stop__18IDirectSoundBufferFv((char)*(int *)(param_1 + 0x20), param_2, param_3, param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	}
	return;
}

ulonglong snd_playing(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined8 uVar2;
	ulonglong uVar3;
	int iVar4;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x40);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	if (param_1 == 0) {
		uVar3 = 0;
	} else {
		if (*(int *)(param_1 + 0x20) == 0) {
			uVar3 = 0;
		} else {
			iVar4 = GetStatus__18IDirectSoundBufferFPUl((char)*(int *)(param_1 + 0x20),
			    (char)(ZEXT48(register0x0000000c) - 0x40) + '8', param_3, param_4, param_5,
			    param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
			    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
			if (iVar4 == 0) {
				uVar2 = countLeadingZeros(1 - *(int *)(iVar1 + 0x38));
				uVar3 = (ulonglong)((uint)uVar2 >> 5 & 0xff);
			} else {
				uVar3 = 0;
			}
		}
	}
	return uVar3;
}

void snd_play_snd(int iParm1, longlong lParm2, undefined param_3, undefined param_4, undefined8 uParm5,
    undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	longlong lVar1;
	ulonglong uVar2;
	undefined uVar4;
	longlong lVar3;
	undefined uVar5;
	undefined uVar7;
	undefined8 uVar6;
	undefined8 uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined uVar11;
	int iVar12;
	ulonglong uVar13;
	undefined4 in_stack_ffffffb8;
	undefined uVar14;
	undefined in_stack_ffffffbf;
	int local_3c;
	int iVar15;

	uVar10 = (undefined)uParm5;
	uVar9 = (undefined7)((ulonglong)uParm5 >> 8);
	uVar5 = (undefined)lParm2;
	if (((iParm1 != 0) && (*_DAT_100f1d18 != '\0')) && (uVar13 = (ulonglong) * (uint *)(iParm1 + 0x20), *(uint *)(iParm1 + 0x20) != 0)) {
		uVar7 = param_3;
		lVar1 = GetTickCount((char)_DAT_100f1d18, uVar5, param_3, param_4, uVar10, (char)uParm6, (char)uParm7,
		    (char)uParm8, (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
		if ((lVar1 - (ulonglong) * (uint *)(iParm1 + 0x24) & 0xffffffff) < 0x50) {
			GetTickCount((char)lVar1, uVar5, uVar7, param_4, uVar10, (char)uParm6, (char)uParm7, (char)uParm8,
			    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
		} else {
			iVar15 = local_3c;
			uVar2 = snd_playing(iParm1, uVar5, uVar7, param_4, uVar10, (char)uParm6, (char)uParm7, (char)uParm8,
			    in_stack_ffffffb8);
			if (((int)uVar2 == 0) || (uVar13 = sound_dup_channel((char)*(undefined4 *)(iParm1 + 0x20), uVar5, uVar7, param_4, uVar10, (char)uParm6, (char)uParm7, (char)uParm8, in_stack_ffffffb8), uVar13 != 0)) {
				lParm2 = lParm2 + (ulonglong) * (uint *)(local_3c + -0x4b6c);
				uVar5 = (undefined)lParm2;
				iVar12 = (int)lParm2;
				if (iVar12 < -0x640) {
					uVar5 = 0xc0;
				} else {
					if (0 < iVar12) {
						uVar5 = 0;
					}
				}
				uVar4 = (undefined)uVar13;
				SetVolume(uVar4, uVar5, uVar7, param_4, uVar10, (char)uParm6, (char)uParm7, (char)uParm8,
				    (char)in_stack_ffffffb8, in_stack_ffffffbf, iVar15);
				SetPan__18IDirectSoundBufferFl(uVar4, param_3, uVar7, param_4, uVar10, (char)uParm6, (char)uParm7, (char)uParm8,
				    (char)in_stack_ffffffb8, in_stack_ffffffbf, iVar15);
				uVar6 = 0;
				uVar8 = 0;
				lVar3 = Play__18IDirectSoundBufferFUlUlUl(uVar4, 0, 0, 0, uVar10, (char)uParm6, (char)uParm7, (char)uParm8,
				    (char)in_stack_ffffffb8, in_stack_ffffffbf, iVar15);
				uVar14 = (undefined)in_stack_ffffffb8;
				uVar11 = (undefined)uParm8;
				uVar7 = (undefined)uParm7;
				uVar5 = (undefined)uParm6;
				if ((lVar3 + 0x77880000U & 0xffffffff) == 0x96) {
					uVar6 = sound_file_reload(iParm1, uVar13, uVar6, uVar8, CONCAT71(uVar9, uVar10), uParm6, uParm7, uParm8, in_stack_ffffffb8);
					if ((int)uVar6 != 0) {
						Play__18IDirectSoundBufferFUlUlUl(uVar4, 0, 0, 0, uVar10, uVar5, uVar7, uVar11, uVar14, in_stack_ffffffbf, iVar15);
					}
				} else {
					if ((int)lVar3 != 0) {
						DSErrMsg(lVar3, 0x128, (ulonglong) * (uint *)(iVar15 + -0x5818), uVar8,
						    CONCAT71(uVar9, uVar10), uParm6, uParm7, uParm8, in_stack_ffffffb8);
					}
				}
				*(undefined4 *)(iParm1 + 0x24) = (int)lVar1;
			}
		}
	}
	return;
}

void sound_CreateSoundBuffer(undefined8 uParm1, undefined8 uParm2, undefined param_3, undefined param_4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined4 uVar1;
	int iVar2;
	char cVar3;
	undefined8 uVar4;
	undefined8 uVar5;
	undefined7 uVar6;
	undefined uVar7;

	uVar7 = (undefined)uParm5;
	uVar6 = (undefined7)((ulonglong)uParm5 >> 8);
	iVar2 = (int)(ZEXT48(register0x0000000c) - 0x60);
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	cVar3 = (char)(ZEXT48(register0x0000000c) - 0x60);
	memset(cVar3 + '8', 0x14, param_3, param_4, uVar7, (char)uParm6, (char)uParm7, (char)uParm8,
	    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
	uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0x14) + -0x4b74);
	*(undefined4 *)(iVar2 + 0x38) = 0x14;
	*(undefined4 *)(iVar2 + 0x3c) = 0xc2;
	uVar5 = 0;
	*(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)((int)uParm1 + 0x14);
	*(int *)(iVar2 + 0x48) = (int)uParm1;
	uVar4 = CreateSoundBuffer__12IDirectSoundFP13_DSBUFFERDESCPP18IDirectSoundBufferP8IUnknown((char)uVar1, cVar3 + '8', (char)uParm1 + ' ', 0, uVar7, (char)uParm6, (char)uParm7,
	    (char)uParm8, *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
	    *(undefined4 *)(iVar2 + 0x14));
	if ((int)uVar4 != 0) {
		DSErrMsg(uVar4, 0x13f, (ulonglong) * (uint *)(*(int *)(iVar2 + 0x14) + -0x5818), uVar5,
		    CONCAT71(uVar6, uVar7), uParm6, uParm7, uParm8, *(undefined4 *)(iVar2 + 8));
	}
	return;
}

longlong sound_file_load(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined2 *puVar1;
	longlong lVar2;
	undefined uVar6;
	int iVar5;
	ulonglong uVar3;
	undefined8 uVar4;
	undefined uVar7;
	undefined uVar9;
	longlong lVar8;
	ulonglong uVar10;
	longlong lVar11;
	ulonglong uVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined uVar15;
	undefined4 uVar16;
	undefined uVar17;
	ulonglong uVar18;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	int local_4c;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	uint local_28;
	undefined uStack33;
	uint local_20;
	undefined uStack25;
	uint local_18;

	uVar10 = ZEXT48(register0x0000000c);
	uVar18 = (ulonglong)_DAT_100f37b8;
	uVar18._7_1_ = (undefined)_DAT_100f37b8;
	if (_DAT_100f445c == 0) {
		lVar2 = 0;
	} else {
		uVar9 = 0;
		WOpenFile(param_1, uVar10 - 0x18, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
		lVar2 = DiabloAllocPtr(0x28);
		uVar7 = 0x28;
		uVar6 = memset((char)lVar2, 0x28, uVar9, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf,
		    local_4c);
		puVar1 = (undefined2 *)lVar2;
		*(int *)(puVar1 + 0xe) = (int)param_1;
		iVar5 = GetTickCount(uVar6, uVar7, uVar9, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
		lVar8 = lVar2 + 0x14;
		*(int *)(puVar1 + 0x12) = iVar5 + -0x51;
		iVar5 = local_4c;
		uVar3 = LoadWaveFile(local_18, puVar1, (uint *)lVar8, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		if (uVar3 == 0) {
			app_fatal(*(int *)(local_4c + -0x581c), (ulonglong) * (uint *)(puVar1 + 0xe), lVar8, param_4,
			    param_5, param_6, param_7, param_8, in_stack_ffffffa8, in_stack_ffffffaf,
			    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
			    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
		}
		sound_CreateSoundBuffer(lVar2);
		lVar8 = uVar10 - 0x1c;
		lVar11 = uVar10 - 0x24;
		uVar13 = (undefined4)(uVar10 - 0x20);
		uVar14 = (undefined4)(uVar10 - 0x28);
		uVar16 = 0;
		uVar4 = Lock__18IDirectSoundBufferFUlUlPvPUlPvPUlUl((char)*(undefined4 *)(puVar1 + 0x10), 0, (char)*(undefined4 *)(puVar1 + 10),
		    (char)lVar8, (char)lVar11, (char)(uVar10 - 0x20), (char)(uVar10 - 0x28), 0,
		    (char)in_stack_ffffffa8, in_stack_ffffffaf, iVar5);
		uVar7 = (undefined)lVar11;
		uVar6 = (undefined)lVar8;
		if ((int)uVar4 != 0) {
			DSErrMsg(uVar4, 0x163, uVar18, lVar8, lVar11, uVar13, uVar14, uVar16, in_stack_ffffffa8);
		}
		memcpy(uStack25, (char)uVar3 + (char)*(undefined4 *)(puVar1 + 0xc), uStack33, uVar6, uVar7,
		    (char)uVar13, (char)uVar14, (char)uVar16, (char)in_stack_ffffffa8, in_stack_ffffffaf,
		    iVar5);
		uVar10 = (ulonglong)local_20;
		uVar12 = (ulonglong)local_28;
		uVar4 = Unlock__18IDirectSoundBufferFPvUlPvUl((char)*(undefined4 *)(puVar1 + 0x10), uStack25, uStack33, (char)local_20,
		    (char)local_28, (char)uVar13, (char)uVar14, (char)uVar16, (char)in_stack_ffffffa8, in_stack_ffffffaf, iVar5);
		uVar17 = (undefined)uVar16;
		uVar15 = (undefined)uVar14;
		uVar9 = (undefined)uVar13;
		uVar7 = (undefined)uVar12;
		uVar6 = (undefined)uVar10;
		if ((int)uVar4 != 0) {
			uStack25 = 0x6a;
			uStack33 = (undefined)uVar18;
			DSErrMsg(uVar4, 0x16a, uVar18, uVar10, uVar12, uVar13, uVar14, uVar16, in_stack_ffffffa8);
		}
		mem_free_dbg(uVar3, uStack25, uStack33, uVar6, uVar7, uVar9, uVar15, uVar17, in_stack_ffffffa8);
		WCloseFile((char)local_18, uStack25, uStack33, uVar6, uVar7, uVar9, uVar15, uVar17, in_stack_ffffffa8);
	}
	return lVar2;
}

void sound_file_cleanup(longlong param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	if (param_1 != 0) {
		iVar1 = (int)param_1;
		if (*(int *)(iVar1 + 0x20) != 0) {
			Stop__18IDirectSoundBufferFv((char)*(int *)(iVar1 + 0x20), param_2, param_3, param_4, param_5, param_6, param_7,
			    param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
			Release__18IDirectSoundBufferFv((char)*(undefined4 *)(iVar1 + 0x20), param_2, param_3, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
			*(undefined4 *)(iVar1 + 0x20) = 0;
		}
		mem_free_dbg(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void sound_create_primary_buffer(uint param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined *puVar2;
	int iVar3;
	char cVar4;
	uint uVar5;
	undefined **ppuVar6;
	int iVar7;
	undefined8 uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	ulonglong uVar16;

	uVar11 = (undefined7)((ulonglong)param_5 >> 8);
	uVar12 = (undefined)param_5;
	ppuVar6 = &toc;
	uVar16 = (ulonglong)_DAT_100f37b8;
	iVar3 = (int)(ZEXT48(register0x0000000c) - 0xd0);
	*(BADSPACEBASE **)iVar3 = register0x0000000c;
	if (DAT_100f4450 == '\0') {
		_DAT_100f4454 = 0;
		DAT_100f4450 = '\x01';
	}
	cVar4 = (char)(ZEXT48(register0x0000000c) - 0xd0);
	if (param_1 == 0) {
		memset(cVar4 + -0x54, 0x14, (char)param_3, (char)param_4, uVar12, (char)param_6, (char)param_7,
		    (char)param_8, *(undefined *)(iVar3 + 0xb), *(undefined *)(iVar3 + 0xf),
		    *(undefined4 *)(iVar3 + 0x14));
		uVar1 = *(undefined4 *)(*(uint *)(iVar3 + 0x14) - 0x4b74);
		*(undefined4 *)(iVar3 + 0xac) = 0x14;
		param_3 = (ulonglong) * (uint *)(iVar3 + 0x14) - 0x4b7c;
		*(undefined4 *)(iVar3 + 0xb0) = 1;
		param_4 = 0;
		uVar8 = CreateSoundBuffer__12IDirectSoundFP13_DSBUFFERDESCPP18IDirectSoundBufferP8IUnknown((char)uVar1, cVar4 + -0x54, (char)param_3, 0, uVar12, (char)param_6, (char)param_7,
		    (char)param_8, *(undefined *)(iVar3 + 0xb), *(undefined *)(iVar3 + 0xf),
		    *(undefined4 *)(iVar3 + 0x14));
		ppuVar6 = *(undefined ***)(iVar3 + 0x14);
		if ((int)uVar8 != 0) {
			param_3 = uVar16;
			DSErrMsg(uVar8, 0x1a2, uVar16, param_4, CONCAT71(uVar11, uVar12), param_6, param_7, param_8,
			    *(undefined4 *)(iVar3 + 8));
		}
	}
	if (ppuVar6[-0x12df] != (undefined *)0x0) {
		puVar2 = ppuVar6[-0x12dd];
		*(undefined4 *)(iVar3 + 0x4c) = 0x60;
		uVar8 = GetCaps__12IDirectSoundFP7_DSCAPS((char)puVar2, cVar4 + 'L', (char)param_3, (char)param_4, uVar12, (char)param_6,
		    (char)param_7, (char)param_8, *(undefined *)(iVar3 + 0xb),
		    *(undefined *)(iVar3 + 0xf), *(undefined4 *)(iVar3 + 0x14));
		iVar7 = *(int *)(iVar3 + 0x14);
		if ((int)uVar8 != 0) {
			DSErrMsg(uVar8, 0x1aa, uVar16, param_4, CONCAT71(uVar11, uVar12), param_6, param_7, param_8,
			    *(undefined4 *)(iVar3 + 8));
			param_3 = uVar16;
		}
		uVar15 = (undefined)param_8;
		uVar14 = (undefined)param_7;
		uVar13 = (undefined)param_6;
		uVar10 = (undefined)param_4;
		uVar9 = (undefined)param_3;
		if ((param_1 == 0) || (uVar16 = LoadWaveFormat(param_1, (undefined2 *)(iVar3 + 0x38), param_3, param_4, CONCAT71(uVar11, uVar12), param_6, param_7, param_8, *(undefined4 *)(iVar3 + 8)), (int)uVar16 == 0)) {
			memset(cVar4 + '8', 0x12, uVar9, uVar10, uVar12, uVar13, uVar14, uVar15,
			    *(undefined *)(iVar3 + 0xb), *(undefined *)(iVar3 + 0xf),
			    *(undefined4 *)(iVar3 + 0x14));
			iVar7 = *(int *)(iVar3 + 0x14);
			*(undefined2 *)(iVar3 + 0x38) = 1;
			*(undefined4 *)(iVar3 + 0x3c) = 0x5622;
			*(undefined2 *)(iVar3 + 0x46) = 0x10;
			*(undefined2 *)(iVar3 + 0x3a) = 2;
			*(undefined2 *)(iVar3 + 0x48) = 0;
		}
		*(undefined2 *)(iVar3 + 0x3a) = 2;
		uVar5 = (uint) * (ushort *)(iVar3 + 0x3a) * (uint) * (ushort *)(iVar3 + 0x46);
		*(short *)(iVar3 + 0x44) = (short)((int)uVar5 >> 3) + (ushort)((int)uVar5 < 0 && (uVar5 & 7) != 0);
		uVar1 = *(undefined4 *)(iVar7 + -0x4b7c);
		*(int *)(iVar3 + 0x40) = *(int *)(iVar3 + 0x3c) * (uint) * (ushort *)(iVar3 + 0x44);
		SetFormat__18IDirectSoundBufferFP13tWAVEFORMATEX((char)uVar1, cVar4 + '8', (char)*(int *)(iVar3 + 0x3c), uVar10, uVar12, uVar13, uVar14,
		    uVar15, *(undefined *)(iVar3 + 0xb), *(undefined *)(iVar3 + 0xf),
		    *(undefined4 *)(iVar3 + 0x14));
	}
	return;
}

void sound_DirectSoundCreate(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	_DAT_100f4460 = 0;
	DirectSoundCreate(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

void snd_init(undefined8 uParm1, undefined8 uParm2, undefined param_3, undefined param_4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	byte *pbVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined **ppuVar4;
	int iVar5;
	char cVar6;
	ulonglong uVar7;
	undefined uVar8;
	longlong lVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined4 in_stack_ffffffb8;
	undefined uVar16;
	undefined in_stack_ffffffbf;
	undefined **local_3c;

	uVar12 = (undefined)uParm5;
	uVar11 = (undefined7)((ulonglong)uParm5 >> 8);
	ppuVar4 = &toc;
	sound_load_volume((ulonglong)_DAT_100f37b0, (int *)&DAT_100f4464, param_3, param_4, uVar12, (char)uParm6,
	    (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	pbVar1 = ppuVar4[-0x1cae];
	puVar2 = ppuVar4[-0x1609];
	*pbVar1 = (~((byte)((uint)ppuVar4[-0x12db] >> 0x18) ^ 0xff) >> 7) + (ZEXT48(ppuVar4[-0x12db]) < 0xfffffffffffff9c1) & 1;
	sound_load_volume(ZEXT48(puVar2), (int *)(ppuVar4 + -0x12e5), (char)pbVar1, param_4, uVar12, (char)uParm6,
	    (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	puVar2 = ppuVar4[-0x12e5];
	cVar6 = (char)ppuVar4 + -0x74;
	lVar9 = -0x640 - ZEXT48(puVar2);
	*ppuVar4[-0x1c9f] = (~((byte)((uint)puVar2 >> 0x18) ^ 0xff) >> 7) + (ZEXT48(puVar2) < 0xfffffffffffff9c1) & 1;
	uVar8 = 0;
	iVar5 = sound_DirectSoundCreate(0, cVar6, 0, (char)lVar9, uVar12, (char)uParm6, (char)uParm7, (char)uParm8,
	    in_stack_ffffffb8);
	uVar16 = (undefined)in_stack_ffffffb8;
	uVar15 = (undefined)uParm8;
	uVar14 = (undefined)uParm7;
	uVar13 = (undefined)uParm6;
	uVar10 = (undefined)lVar9;
	if (iVar5 != 0) {
		ppuVar4[-0x12dd] = (undefined *)0x0;
	}
	ppuVar3 = ppuVar4 + -0x12dd;
	if (*ppuVar3 != (undefined *)0x0) {
		uVar7 = 3;
		ppuVar4 = local_3c;
		iVar5 = SetCooperativeLevel__12IDirectSoundFP6HWND__Ul((char)*ppuVar3, (char)uParm1, 3, uVar10, uVar12, uVar13, uVar14, uVar15, uVar16,
		    in_stack_ffffffbf, local_3c);
		uVar16 = (undefined)in_stack_ffffffb8;
		uVar15 = (undefined)uParm8;
		uVar14 = (undefined)uParm7;
		uVar13 = (undefined)uParm6;
		uVar10 = (undefined)lVar9;
		uVar8 = (undefined)uVar7;
		cVar6 = (char)uParm1;
		local_3c = ppuVar4;
		if (iVar5 == 0) {
			local_3c = ppuVar4;
			sound_create_primary_buffer(0, uParm1, uVar7, lVar9, CONCAT71(uVar11, uVar12), uParm6, uParm7, uParm8,
			    in_stack_ffffffb8);
		}
	}
	SVidInitialize((char)ppuVar4[-0x12dd], cVar6, uVar8, uVar10, uVar12, uVar13, uVar14, uVar15, uVar16,
	    in_stack_ffffffbf, local_3c);
	SFileDdaInitialize((char)local_3c[-0x12dd], cVar6, uVar8, uVar10, uVar12, uVar13, uVar14, uVar15, uVar16,
	    in_stack_ffffffbf, local_3c);
	*local_3c[-0x1cac] = '\x01' - (local_3c[-0x12dd] == (undefined *)0x0);
	return;
}

void sound_cleanup(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	char *pcVar2;
	undefined uVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	pcVar2 = _DAT_100f1d20;
	uVar3 = snd_update(1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	uVar3 = SVidDestroy(uVar3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	SFileDdaDestroy(uVar3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	if (*(int *)(local_2c + -0x4b74) != 0) {
		Release__12IDirectSoundFv((char)*(int *)(local_2c + -0x4b74), param_2, param_3, param_4, param_5, param_6, param_7,
		    param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		*(undefined4 *)(local_2c + -0x4b74) = 0;
	}
	if (*pcVar2 != '\0') {
		uVar1 = *(undefined4 *)(local_2c + -0x5820);
		*pcVar2 = '\0';
		sound_store_volume((char)uVar1, (char)*(undefined4 *)(local_2c + -0x4b6c), param_3, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffc8);
		sound_store_volume((char)*(undefined4 *)(local_2c + -0x5824), (char)*(undefined4 *)(local_2c + -0x4b94), param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void music_stop(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	if (_DAT_100f4458 != 0) {
		SFileDdaEnd((char)_DAT_100f4458, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		SFileCloseFile((char)*(undefined4 *)(local_2c + -0x4b78), param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		*(undefined4 *)(local_2c + -0x4b78) = 0;
		*(undefined4 *)(local_2c + -0x4b90) = 6;
	}
	return;
}

void music_start(int param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	int iVar2;
	longlong lVar3;
	undefined uVar4;
	undefined4 in_stack_ffffffc8;
	undefined uVar5;
	undefined in_stack_ffffffcf;
	int local_2c;
	int iVar6;

	uVar1 = ZEXT48(&toc);
	music_stop((char)param_1, (undefined)param_2, (char)param_3, (char)param_4, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
	iVar6 = (int)uVar1;
	if ((*(int *)(iVar6 + -0x4b74) != 0) && (**(char **)(iVar6 + -0x727c) != '\0')) {
		lVar3 = uVar1 - 0x4b78;
		iVar2 = SFileOpenFile((char)*(undefined4 *)(*(int *)(iVar6 + -0x5828) + param_1 * 4), (char)lVar3, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
		    (char)param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		uVar5 = (undefined)in_stack_ffffffc8;
		uVar4 = (undefined)param_8;
		iVar6 = local_2c;
		sound_create_primary_buffer(*(uint *)(local_2c + -0x4b78), lVar3, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		if (iVar2 == 0) {
			*(undefined4 *)(local_2c + -0x4b78) = 0;
		} else {
			SFileDdaBeginEx((char)*(undefined4 *)(local_2c + -0x4b78), 0, 0, 0,
			    (char)*(undefined4 *)(local_2c + -0x4b94), 0, 0, uVar4, uVar5, in_stack_ffffffcf,
			    iVar6);
			*(int *)(iVar6 + -0x4b90) = param_1;
		}
	}
	return;
}

void sound_disable_music(int param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	if (DAT_100f4448 == '\0') {
		param_2 = 6;
		_DAT_100f444c = 6;
		DAT_100f4448 = '\x01';
	}
	if (param_1 == 0) {
		if (_DAT_100f444c != 6) {
			if (_DAT_100f4440 == 6) {
				ppuVar1 = &toc;
				music_start(_DAT_100f444c, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffc8);
			}
			ppuVar1[-0x12e1] = (undefined *)0x6;
		}
	} else {
		_DAT_100f444c = _DAT_100f4440;
		music_stop((char)param_1, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	return;
}

ulonglong sound_get_or_set_music_volume(undefined *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined **local_2c;

	ppuVar2 = &toc;
	puVar1 = _DAT_100f443c;
	if (param_1 != &DAT_00000001) {
		_DAT_100f443c = param_1;
		if (_DAT_100f4458 != 0) {
			_DAT_100f443c = param_1;
			ppuVar2 = local_2c;
			SFileDdaSetVolume((char)_DAT_100f4458, (char)param_1, 0, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		}
		puVar1 = ppuVar2[-0x12e5];
	}
	return ZEXT48(puVar1);
}

ulonglong sound_get_or_set_sound_volume(uint param_1)

{
	if (param_1 == 1) {
		return (ulonglong)_DAT_100f4464;
	}
	_DAT_100f4464 = param_1;
	return (ulonglong)param_1;
}
