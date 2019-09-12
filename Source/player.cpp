
void SetPlayerGPtrs(BYTE *pData, BYTE **pAnim)

{
	int iVar1;
	char cVar2;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;

	cVar2 = LockMemFile((longlong)(int)pData, (char)pAnim, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb);
	*pAnim = pData;
	pAnim[1] = (BYTE *)((uint) * (byte *)((int)cVar2 + 3) << 0x18 | (uint) * (byte *)((int)cVar2 + 2) << 0x10 | (uint) * (byte *)((int)cVar2 + 1) << 8 | (uint) * (byte *)(int)cVar2);
	pAnim[2] = pData;
	iVar1 = (int)cVar2;
	pAnim[3] = (BYTE *)((uint) * (byte *)(iVar1 + 7) << 0x18 | (uint) * (byte *)(iVar1 + 6) << 0x10 | (uint) * (byte *)(iVar1 + 5) << 8 | (uint) * (byte *)(iVar1 + 4));
	pAnim[4] = pData;
	iVar1 = (int)cVar2;
	pAnim[5] = (BYTE *)((uint) * (byte *)(iVar1 + 0xb) << 0x18 | (uint) * (byte *)(iVar1 + 10) << 0x10 | (uint) * (byte *)(iVar1 + 9) << 8 | (uint) * (byte *)(iVar1 + 8));
	pAnim[6] = pData;
	iVar1 = (int)cVar2;
	pAnim[7] = (BYTE *)((uint) * (byte *)(iVar1 + 0xf) << 0x18 | (uint) * (byte *)(iVar1 + 0xe) << 0x10 | (uint) * (byte *)(iVar1 + 0xd) << 8 | (uint) * (byte *)(iVar1 + 0xc));
	pAnim[8] = pData;
	iVar1 = (int)cVar2;
	pAnim[9] = (BYTE *)((uint) * (byte *)(iVar1 + 0x13) << 0x18 | (uint) * (byte *)(iVar1 + 0x12) << 0x10 | (uint) * (byte *)(iVar1 + 0x11) << 8 | (uint) * (byte *)(iVar1 + 0x10));
	pAnim[10] = pData;
	iVar1 = (int)cVar2;
	pAnim[0xb] = (BYTE *)((uint) * (byte *)(iVar1 + 0x17) << 0x18 | (uint) * (byte *)(iVar1 + 0x16) << 0x10 | (uint) * (byte *)(iVar1 + 0x15) << 8 | (uint) * (byte *)(iVar1 + 0x14));
	pAnim[0xc] = pData;
	iVar1 = (int)cVar2;
	pAnim[0xd] = (BYTE *)((uint) * (byte *)(iVar1 + 0x1b) << 0x18 | (uint) * (byte *)(iVar1 + 0x1a) << 0x10 | (uint) * (byte *)(iVar1 + 0x19) << 8 | (uint) * (byte *)(iVar1 + 0x18));
	pAnim[0xe] = pData;
	iVar1 = (int)cVar2;
	pAnim[0xf] = (BYTE *)((uint) * (byte *)(iVar1 + 0x1f) << 0x18 | (uint) * (byte *)(iVar1 + 0x1e) << 0x10 | (uint) * (byte *)(iVar1 + 0x1d) << 8 | (uint) * (byte *)(iVar1 + 0x1c));
	UnlockMemFile((char)pData);
	return;
}

void LoadPlrGFX(int pnum, player_graphic gfxflag)

{
	uint uVar1;
	undefined4 uVar2;
	int iVar3;
	int iVar4;
	undefined8 uVar5;
	BYTE *pData;
	ulonglong uVar6;
	undefined4 in_r10;
	undefined8 in_r13;
	ulonglong uVar7;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	longlong unaff_r26;
	ulonglong unaff_r27;
	ulonglong unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	ulonglong uVar8;
	uint uVar9;
	undefined8 unaff_r31;
	longlong lVar10;
	undefined4 in_stack_fffffe68;
	undefined in_stack_fffffe6f;
	undefined4 in_stack_fffffe7c;
	undefined4 in_stack_fffffe80;
	undefined4 in_stack_fffffe84;
	undefined4 in_stack_fffffe88;
	undefined4 in_stack_fffffe8c;
	undefined4 in_stack_fffffe90;
	undefined4 in_stack_fffffe94;
	char acStack360[256];
	undefined auStack104[28];
	undefined4 local_4c;
	undefined4 uStack72;
	undefined4 uStack68;
	undefined4 uStack64;
	undefined4 uStack60;
	undefined4 uStack56;
	undefined4 uStack52;
	undefined4 uStack48;
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

	uVar8 = SEXT48(pnum);
	uVar5 = 0x100f8fd0;
	local_4c = (undefined4)((ulonglong)in_r13 >> 0x20);
	uStack72 = (undefined4)((ulonglong)unaff_r14 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
	uStack64 = (undefined4)((ulonglong)unaff_r16 >> 0x20);
	uStack60 = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
	uStack52 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
	uStack44 = (undefined4)((ulonglong)unaff_r21 >> 0x20);
	uStack40 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)(unaff_r27 >> 0x20);
	uStack16 = (undefined4)(unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar7 = ZEXT48(&DAT_100e8958);
	if (3 < (uVar8 & 0xffffffff)) {
		app_fatal("LoadPlrGFX: illegal player %d", uVar8);
	}
	iVar3 = (int)uVar5;
	uVar9 = *(uint *)(iVar3 + -0x58f0);
	uVar6 = (ulonglong)uVar9;
	lVar10 = (ulonglong) * (uint *)(iVar3 + -0x77a8) + uVar8 * 0x55ec;
	iVar4 = (int)lVar10;
	wsprintf((int)auStack104, *(undefined4 *)(iVar3 + -0x58ec),
	    (int)*(char *)(iVar3 + -0x4c5c + (int)*(char *)(iVar4 + 0x15c)),
	    (int)*(char *)(iVar3 + -0x4c60 + ((int)*(uint *)(iVar4 + 0x78) >> 4)),
	    (int)*(char *)(uVar9 + (*(uint *)(iVar4 + 0x78) & 0xf)), iVar3 + -0x4c5c, uVar9, in_r10, in_stack_fffffe68,
	    in_stack_fffffe6f, in_stack_fffffe7c, in_stack_fffffe80, in_stack_fffffe84, in_stack_fffffe88,
	    in_stack_fffffe8c, in_stack_fffffe90, in_stack_fffffe94);
	uVar8 = 1;
	uVar2 = *(undefined4 *)(*(int *)((int)uVar5 + -0x58f4) + (int)*(char *)(iVar4 + 0x15c) * 4);
	do {
		uVar9 = (uint)uVar8;
		if (0x17f < uVar8) {
			return;
		}
		if ((uVar8 & (longlong)(char)gfxflag) != 0) {
			if (uVar9 == 0x10) {
				if (leveltype != '\0') {
					unaff_r28 = (ulonglong) * (uint *)(iVar4 + 0x55d4);
					unaff_r26 = lVar10 + 0x2f4;
					unaff_r27 = ZEXT48(&DAT_100e8967);
					goto LAB_100919f4;
				}
			} else {
				if ((int)uVar9 < 0x10) {
					if (uVar9 == 4) {
						if (leveltype == '\0')
							goto LAB_10091a3c;
						unaff_r28 = (ulonglong) * (uint *)(iVar4 + 0x55d0);
						unaff_r26 = lVar10 + 0x2a8;
						unaff_r27 = ZEXT48(&DAT_100e8961);
					} else {
						if ((int)uVar9 < 4) {
							if (uVar9 == 2) {
								unaff_r27 = ZEXT48(&DAT_100e895b);
								if (leveltype != '\0') {
									unaff_r27 = uVar7;
								}
								unaff_r28 = (ulonglong) * (uint *)(iVar4 + 0x55cc);
								unaff_r26 = lVar10 + 0x260;
							} else {
								if ((1 < (int)uVar9) || ((int)uVar9 < 1))
									goto LAB_100919ec;
								if (leveltype == '\0') {
									uVar1 = *(uint *)((int)uVar5 + -0x58fc);
								} else {
									uVar1 = *(uint *)((int)uVar5 + -0x58f8);
								}
								unaff_r28 = (ulonglong) * (uint *)(iVar4 + 0x55c8);
								unaff_r26 = lVar10 + 0x218;
								unaff_r27 = (ulonglong)uVar1;
							}
						} else {
							if (uVar9 == 8) {
								if (leveltype == '\0')
									goto LAB_10091a3c;
								unaff_r28 = (ulonglong) * (uint *)(iVar4 + 0x55e0);
								unaff_r26 = lVar10 + 0x3c0;
								unaff_r27 = ZEXT48(&DAT_100e8964);
							} else {
							LAB_100919ec:
								app_fatal("PLR:2");
							}
						}
					}
				LAB_100919f4:
					wsprintf((int)acStack360, "PlrGFX\\%s\\%s\\%s%s.CL2", uVar2, auStack104, auStack104, (int)unaff_r27,
					    (int)uVar6, in_r10, in_stack_fffffe68, in_stack_fffffe6f, in_stack_fffffe7c, in_stack_fffffe80,
					    in_stack_fffffe84, in_stack_fffffe88, in_stack_fffffe8c, in_stack_fffffe90, in_stack_fffffe94);
					pData = (BYTE *)unaff_r28;
					LoadFileWithMemLock(acStack360, pData);
					FUN_100b8f64((int)pData);
					SetPlayerGPtrs(pData, (BYTE **)unaff_r26);
					*(uint *)(iVar4 + 0x214) = *(uint *)(iVar4 + 0x214) | uVar9;
				} else {
					if (uVar9 == 0x80) {
						if ((*(uint *)(iVar4 + 0x78) & 0xf) == 0) {
							unaff_r28 = (ulonglong) * (uint *)(iVar4 + 0x55e4);
							unaff_r26 = lVar10 + 0x408;
							unaff_r27 = ZEXT48(&DAT_100e895e);
							goto LAB_100919f4;
						}
					} else {
						if ((int)uVar9 < 0x80) {
							if (uVar9 == 0x40) {
								if (leveltype != '\0') {
									unaff_r28 = (ulonglong) * (uint *)(iVar4 + 0x55dc);
									unaff_r26 = lVar10 + 0x374;
									unaff_r27 = ZEXT48(&DAT_100e896d);
									goto LAB_100919f4;
								}
							} else {
								if ((0x3f < (int)uVar9) || (uVar9 != 0x20))
									goto LAB_100919ec;
								if (leveltype != '\0') {
									unaff_r28 = (ulonglong) * (uint *)(iVar4 + 0x55d8);
									unaff_r26 = lVar10 + 0x334;
									unaff_r27 = ZEXT48(&DAT_100e896a);
									goto LAB_100919f4;
								}
							}
						} else {
							if (uVar9 != 0x100)
								goto LAB_100919ec;
							if ((leveltype != '\0') && (*(char *)(iVar4 + 0x138) != '\0')) {
								unaff_r28 = (ulonglong) * (uint *)(iVar4 + 0x55e8);
								unaff_r26 = lVar10 + 0x450;
								unaff_r27 = ZEXT48(&DAT_100e8970);
								goto LAB_100919f4;
							}
						}
					}
				}
			}
		}
	LAB_10091a3c:
		uVar8 = (ulonglong)(uVar9 << 1);
	} while (true);
}

void InitPlayerGFX(int pnum)

{
	if (3 < ((longlong)pnum & 0xffffffffU)) {
		app_fatal("InitPlayerGFX: illegal player %d", (longlong)pnum);
	}
	if (*(int *)((int)plr + pnum * 0x55ec + 0x194) >> 6 == 0) {
		*(undefined4 *)((int)plr + pnum * 0x55ec + 0x78) = 0;
		LoadPlrGFX(pnum, (player_graphic)0x80);
	} else {
		LoadPlrGFX(pnum, (player_graphic)0x7f);
	}
	return;
}

DWORD GetPlrGFXSize(char *szCel)

{
	longlong lVar1;
	BOOL BVar2;
	uint uVar3;
	longlong in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	char *pcVar4;
	undefined8 unaff_r23;
	longlong lVar5;
	undefined8 unaff_r24;
	uint uVar6;
	undefined8 unaff_r25;
	uint uVar7;
	undefined8 unaff_r26;
	undefined **ppuVar8;
	undefined8 unaff_r27;
	char *pcVar9;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffe88;
	undefined in_stack_fffffe8f;
	undefined4 in_stack_fffffe9c;
	undefined4 in_stack_fffffea0;
	undefined4 in_stack_fffffea4;
	undefined4 in_stack_fffffea8;
	undefined4 in_stack_fffffeac;
	undefined4 in_stack_fffffeb0;
	undefined4 in_stack_fffffeb4;
	ulong local_148;
	char acStack324[256];
	undefined auStack68[24];
	undefined4 local_2c;
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

	lVar1 = 0x100f8fd0;
	local_2c = (undefined4)((ulonglong)unaff_r21 >> 0x20);
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
	uVar6 = 0;
	ppuVar8 = &PTR_s_Warrior_1010eb8c;
	pcVar9 = (char *)0x100f4374;
	uVar7 = 0;
	do {
		lVar5 = lVar1 + -0x4c60;
		while (pcVar4 = s_NUSDBAMHT_1010eb80, *(char *)lVar5 != '\0') {
			while (*pcVar4 != '\0') {
				wsprintf((int)auStack68, "%c%c%c", (int)*pcVar9, (int)*(char *)lVar5, (int)*pcVar4, (int)in_r8, in_r9,
				    in_r10, in_stack_fffffe88, in_stack_fffffe8f, in_stack_fffffe9c, in_stack_fffffea0,
				    in_stack_fffffea4, in_stack_fffffea8, in_stack_fffffeac, in_stack_fffffeb0, in_stack_fffffeb4);
				in_r8 = (longlong)(int)szCel;
				wsprintf((int)acStack324, "PlrGFX\\%s\\%s\\%s%s.CL2", *ppuVar8, auStack68, auStack68, szCel, in_r9,
				    in_r10, in_stack_fffffe88, in_stack_fffffe8f, in_stack_fffffe9c, in_stack_fffffea0,
				    in_stack_fffffea4, in_stack_fffffea8, in_stack_fffffeac, in_stack_fffffeb0, in_stack_fffffeb4);
				BVar2 = WOpenFile(acStack324, &local_148, 1);
				uVar3 = uVar7;
				if (BVar2 != 0) {
					uVar3 = WGetFileSize(local_148, (DWORD *)0x0);
					WCloseFile(local_148);
					if (uVar3 < uVar7) {
						uVar3 = uVar7;
					}
				}
				uVar7 = uVar3;
				pcVar4 = pcVar4 + 1;
			}
			lVar5 = lVar5 + 1;
		}
		uVar6 = uVar6 + 1;
		ppuVar8 = ppuVar8 + 1;
		pcVar9 = pcVar9 + 1;
	} while (uVar6 < 3);
	return (DWORD)uVar7;
}

void InitPlrGFXMem(int pnum)

{
	int iVar1;
	DWORD DVar2;
	DWORD DVar3;
	void *pvVar4;

	iVar1 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar1 = 0x100f8fd0;
		app_fatal("InitPlrGFXMem: illegal player %d", pnum);
	}
	if (*(char *)(iVar1 + -0x4c14) == '\0') {
		DVar2 = GetPlrGFXSize("ST");
		DVar3 = GetPlrGFXSize("AS");
		if (DVar2 < DVar3) {
			DVar2 = GetPlrGFXSize("AS");
		} else {
			DVar2 = GetPlrGFXSize("ST");
		}
		*(DWORD *)(iVar1 + -0x4c10) = DVar2;
		*(undefined *)(iVar1 + -0x4c14) = 1;
	}
	pvVar4 = AllocateMemFile(0, *(MEMFILE **)(iVar1 + -0x4c10), 0x5047464e);
	pnum = pnum * 0x55ec;
	*(void **)((int)plr + pnum + 0x55c8) = pvVar4;
	if (*(char *)(iVar1 + -0x4c1c) == '\0') {
		DVar2 = GetPlrGFXSize("WL");
		DVar3 = GetPlrGFXSize("AW");
		if (DVar2 < DVar3) {
			DVar2 = GetPlrGFXSize("AW");
		} else {
			DVar2 = GetPlrGFXSize("WL");
		}
		*(DWORD *)(iVar1 + -0x4c18) = DVar2;
		*(undefined *)(iVar1 + -0x4c1c) = 1;
	}
	pvVar4 = AllocateMemFile(0, *(MEMFILE **)(iVar1 + -0x4c18), 0x50474657);
	*(void **)((int)plr + pnum + 0x55cc) = pvVar4;
	if (*(char *)(iVar1 + -0x4c24) == '\0') {
		DVar2 = GetPlrGFXSize(*(char **)(iVar1 + -0x590c));
		*(DWORD *)(iVar1 + -0x4c20) = DVar2;
		*(undefined *)(iVar1 + -0x4c24) = 1;
	}
	pvVar4 = AllocateMemFile(0, *(MEMFILE **)(iVar1 + -0x4c20), 0x50474641);
	*(void **)((int)plr + pnum + 0x55d0) = pvVar4;
	if (*(char *)(iVar1 + -0x4c2c) == '\0') {
		DVar2 = GetPlrGFXSize(*(char **)(iVar1 + -0x5910));
		*(DWORD *)(iVar1 + -0x4c28) = DVar2;
		*(undefined *)(iVar1 + -0x4c2c) = 1;
	}
	pvVar4 = AllocateMemFile(0, *(MEMFILE **)(iVar1 + -0x4c28), 0x50474648);
	*(void **)((int)plr + pnum + 0x55e0) = pvVar4;
	if (*(char *)(iVar1 + -0x4c34) == '\0') {
		DVar2 = GetPlrGFXSize(*(char **)(iVar1 + -0x5914));
		*(DWORD *)(iVar1 + -0x4c30) = DVar2;
		*(undefined *)(iVar1 + -0x4c34) = 1;
	}
	pvVar4 = AllocateMemFile(0, *(MEMFILE **)(iVar1 + -0x4c30), 0x5047464c);
	*(void **)((int)plr + pnum + 0x55d4) = pvVar4;
	if (*(char *)(iVar1 + -0x4c3c) == '\0') {
		DVar2 = GetPlrGFXSize(*(char **)(iVar1 + -0x5918));
		*(DWORD *)(iVar1 + -0x4c38) = DVar2;
		*(undefined *)(iVar1 + -0x4c3c) = 1;
	}
	pvVar4 = AllocateMemFile(0, *(MEMFILE **)(iVar1 + -0x4c38), 0x50474646);
	*(void **)((int)plr + pnum + 0x55d8) = pvVar4;
	if (*(char *)(iVar1 + -0x4c44) == '\0') {
		DVar2 = GetPlrGFXSize(*(char **)(iVar1 + -0x591c));
		*(DWORD *)(iVar1 + -0x4c40) = DVar2;
		*(undefined *)(iVar1 + -0x4c44) = 1;
	}
	pvVar4 = AllocateMemFile(0, *(MEMFILE **)(iVar1 + -0x4c40), 0x50474654);
	*(void **)((int)plr + pnum + 0x55dc) = pvVar4;
	if (*(char *)(iVar1 + -0x4c4c) == '\0') {
		DVar2 = GetPlrGFXSize(*(char **)(iVar1 + -0x5908));
		*(DWORD *)(iVar1 + -0x4c48) = DVar2;
		*(undefined *)(iVar1 + -0x4c4c) = 1;
	}
	pvVar4 = AllocateMemFile(0, *(MEMFILE **)(iVar1 + -0x4c48), 0x50474644);
	*(void **)((int)plr + pnum + 0x55e4) = pvVar4;
	if (*(char *)(iVar1 + -0x4c54) == '\0') {
		DVar2 = GetPlrGFXSize(*(char **)(iVar1 + -0x5920));
		*(DWORD *)(iVar1 + -0x4c50) = DVar2;
		*(undefined *)(iVar1 + -0x4c54) = 1;
	}
	pvVar4 = AllocateMemFile(0, *(MEMFILE **)(iVar1 + -0x4c50), 0x50474642);
	*(void **)((int)plr + pnum + 0x55e8) = pvVar4;
	*(undefined4 *)((int)plr + pnum + 0x214) = 0;
	return;
}

void FreePlayerGFX(int pnum)

{
	int iVar1;

	if (3 < (uint)pnum) {
		app_fatal("FreePlayerGFX: illegal player %d", pnum);
	}
	pnum = pnum * 0x55ec;
	iVar1 = *(int *)((int)plr + pnum + 0x55c8);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			UnlockMemFile((char)iVar1);
		}
		MemFreeDbg((int **)((int)plr + pnum + 0x55c8));
	}
	iVar1 = *(int *)((int)plr + pnum + 0x55cc);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			UnlockMemFile((char)iVar1);
		}
		MemFreeDbg((int **)((int)plr + pnum + 0x55cc));
	}
	iVar1 = *(int *)((int)plr + pnum + 0x55d0);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			UnlockMemFile((char)iVar1);
		}
		MemFreeDbg((int **)((int)plr + pnum + 0x55d0));
	}
	iVar1 = *(int *)((int)plr + pnum + 0x55e0);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			UnlockMemFile((char)iVar1);
		}
		MemFreeDbg((int **)((int)plr + pnum + 0x55e0));
	}
	iVar1 = *(int *)((int)plr + pnum + 0x55d4);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			UnlockMemFile((char)iVar1);
		}
		MemFreeDbg((int **)((int)plr + pnum + 0x55d4));
	}
	iVar1 = *(int *)((int)plr + pnum + 0x55d8);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			UnlockMemFile((char)iVar1);
		}
		MemFreeDbg((int **)((int)plr + pnum + 0x55d8));
	}
	iVar1 = *(int *)((int)plr + pnum + 0x55dc);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			UnlockMemFile((char)iVar1);
		}
		MemFreeDbg((int **)((int)plr + pnum + 0x55dc));
	}
	iVar1 = *(int *)((int)plr + pnum + 0x55e4);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			UnlockMemFile((char)iVar1);
		}
		MemFreeDbg((int **)((int)plr + pnum + 0x55e4));
	}
	iVar1 = *(int *)((int)plr + pnum + 0x55e8);
	if (iVar1 != 0) {
		if (*(int *)(iVar1 + 0x8c) != 0) {
			UnlockMemFile((char)iVar1);
		}
		MemFreeDbg((int **)((int)plr + pnum + 0x55e8));
	}
	*(undefined4 *)((int)plr + pnum + 0x214) = 0;
	return;
}

void NewPlrAnim(int pnum, BYTE *Peq, int numFrames, int Delay, int width)

{
	if (3 < (uint)pnum) {
		app_fatal("NewPlrAnim: illegal player %d", pnum);
	}
	pnum = pnum * 0x55ec;
	*(BYTE **)((int)plr + pnum + 0x7c) = Peq;
	*(int *)((int)plr + pnum + 0x88) = numFrames;
	*(undefined4 *)((int)plr + pnum + 0x8c) = 1;
	*(undefined4 *)((int)plr + pnum + 0x84) = 0;
	*(int *)((int)plr + pnum + 0x80) = Delay;
	*(int *)((int)plr + pnum + 0x90) = width;
	*(int *)((int)plr + pnum + 0x94) = width + -0x40 >> 1;
	return;
}

void ClearPlrPVars(int pnum)

{
	if (3 < (uint)pnum) {
		app_fatal("ClearPlrPVars: illegal player %d", pnum);
	}
	pnum = pnum * 0x55ec;
	*(undefined4 *)((int)plr + pnum + 0x1d0) = 0;
	*(undefined4 *)((int)plr + pnum + 0x1d4) = 0;
	*(undefined4 *)((int)plr + pnum + 0x1d8) = 0;
	*(undefined4 *)((int)plr + pnum + 0x1dc) = 0;
	*(undefined4 *)((int)plr + pnum + 0x1e0) = 0;
	*(undefined4 *)((int)plr + pnum + 0x1e4) = 0;
	*(undefined4 *)((int)plr + pnum + 0x1e8) = 0;
	*(undefined4 *)((int)plr + pnum + 0x1ec) = 0;
	return;
}

void SetPlrAnims(int pnum)

{
	char cVar1;
	char cVar2;
	char *pcVar3;
	uint uVar4;
	int iVar5;

	iVar5 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar5 = 0x100f8fd0;
		app_fatal("SetPlrAnims: illegal player %d", pnum);
	}
	pnum = pnum * 0x55ec;
	pcVar3 = *(char **)(iVar5 + -0x7794);
	*(undefined4 *)((int)plr + pnum + 0x25c) = 0x60;
	*(undefined4 *)((int)plr + pnum + 0x2a4) = 0x60;
	*(undefined4 *)((int)plr + pnum + 0x2ec) = 0x80;
	*(undefined4 *)((int)plr + pnum + 0x404) = 0x60;
	*(undefined4 *)((int)plr + pnum + 0x3b8) = 0x60;
	*(undefined4 *)((int)plr + pnum + 0x44c) = 0x80;
	*(undefined4 *)((int)plr + pnum + 0x494) = 0x60;
	cVar1 = *pcVar3;
	cVar2 = *(char *)((int)plr + pnum + 0x15c);
	if (cVar1 == '\0') {
		iVar5 = (int)cVar2 * 0xb;
		*(int *)((int)plr + pnum + 600) = (int)*(char *)(iVar5 + 0x1010e9fb);
		*(int *)((int)plr + pnum + 0x2a0) = (int)*(char *)(iVar5 + 0x1010e9fc);
		*(int *)((int)plr + pnum + 0x448) = (int)*(char *)(iVar5 + 0x1010e9f8);
		*(int *)((int)plr + pnum + 0x3b4) = (int)*(char *)(iVar5 + 0x1010e9f9);
		*(int *)((int)plr + pnum + 0x3bc) = (int)*(char *)(iVar5 + 0x1010e9fe);
	} else {
		iVar5 = (int)cVar2 * 0xb;
		*(int *)((int)plr + pnum + 600) = (int)(char)(&DAT_1010e9f4)[iVar5];
		*(int *)((int)plr + pnum + 0x2a0) = (int)*(char *)(iVar5 + 0x1010e9f6);
		*(int *)((int)plr + pnum + 0x2e8) = (int)*(char *)(iVar5 + 0x1010e9f5);
		*(int *)((int)plr + pnum + 0x400) = (int)*(char *)(iVar5 + 0x1010e9fa);
		*(int *)((int)plr + pnum + 0x3b4) = (int)*(char *)(iVar5 + 0x1010e9f9);
		*(int *)((int)plr + pnum + 0x448) = (int)*(char *)(iVar5 + 0x1010e9f8);
		*(int *)((int)plr + pnum + 0x490) = (int)*(char *)(iVar5 + 0x1010e9f7);
		*(int *)((int)plr + pnum + 0x2f0) = (int)*(char *)(iVar5 + 0x1010e9fd);
		*(int *)((int)plr + pnum + 0x3bc) = (int)*(char *)(iVar5 + 0x1010e9fe);
	}
	uVar4 = *(uint *)((int)plr + pnum + 0x78) & 0xf;
	if (cVar2 == '\0') {
		if (uVar4 == 4) {
			if (cVar1 != '\0') {
				*(undefined4 *)((int)plr + pnum + 600) = 8;
			}
			*(undefined4 *)((int)plr + pnum + 0x2ec) = 0x60;
			*(undefined4 *)((int)plr + pnum + 0x2f0) = 0xb;
		} else {
			if (uVar4 == 5) {
				*(undefined4 *)((int)plr + pnum + 0x2e8) = 0x14;
				*(undefined4 *)((int)plr + pnum + 0x2f0) = 10;
			} else {
				if (uVar4 == 8) {
					*(undefined4 *)((int)plr + pnum + 0x2e8) = 0x10;
					*(undefined4 *)((int)plr + pnum + 0x2f0) = 0xb;
				}
			}
		}
	} else {
		if (cVar2 == '\x01') {
			if (uVar4 == 5) {
				*(undefined4 *)((int)plr + pnum + 0x2e8) = 0x16;
				*(undefined4 *)((int)plr + pnum + 0x2f0) = 0xd;
			} else {
				if (uVar4 == 4) {
					*(undefined4 *)((int)plr + pnum + 0x2e8) = 0xc;
					*(undefined4 *)((int)plr + pnum + 0x2f0) = 7;
				} else {
					if (uVar4 == 8) {
						*(undefined4 *)((int)plr + pnum + 0x2e8) = 0x10;
						*(undefined4 *)((int)plr + pnum + 0x2f0) = 0xb;
					}
				}
			}
		} else {
			if (cVar2 == '\x02') {
				*(undefined4 *)((int)plr + pnum + 0x3b8) = 0x80;
				if (uVar4 == 0) {
					*(undefined4 *)((int)plr + pnum + 0x2e8) = 0x14;
				} else {
					if (uVar4 == 1) {
						*(undefined4 *)((int)plr + pnum + 0x2f0) = 9;
					} else {
						if (uVar4 == 4) {
							*(undefined4 *)((int)plr + pnum + 0x2e8) = 0x14;
							*(undefined4 *)((int)plr + pnum + 0x2f0) = 0x10;
						} else {
							if (uVar4 == 5) {
								*(undefined4 *)((int)plr + pnum + 0x2e8) = 0x18;
								*(undefined4 *)((int)plr + pnum + 0x2f0) = 0x10;
							}
						}
					}
				}
			}
		}
	}
	return;
}

void ClearPlrRVars(PlayerStruct *p)

{
	p[1]._pSplLvl[4] = '\0';
	p[1]._pSplLvl[5] = '\0';
	p[1]._pSplLvl[6] = '\0';
	*(undefined2 *)(p[1]._pSplLvl + 7) = 0;
	*(undefined2 *)(p[1]._pSplLvl + 9) = 0;
	*(undefined2 *)(p[1]._pSplLvl + 0xb) = 0;
	*(undefined2 *)(p[1]._pSplLvl + 0xd) = 0;
	*(undefined2 *)(p[1]._pSplLvl + 0xf) = 0;
	*(undefined2 *)(p[1]._pSplLvl + 0x11) = 0;
	*(undefined2 *)(p[1]._pSplLvl + 0x13) = 0;
	*(undefined2 *)(p[1]._pSplLvl + 0x15) = 0;
	*(undefined4 *)(p[1]._pSplLvl + 0x1b) = 0;
	*(undefined4 *)(p[1]._pSplLvl + 0x1f) = 0;
	*(undefined4 *)(p[1]._pSplLvl + 0x23) = 0;
	*(undefined4 *)(p[1]._pSplLvl + 0x27) = 0;
	*(undefined4 *)(p[1]._pSplLvl + 0x2b) = 0;
	*(undefined4 *)(p[1]._pSplLvl + 0x2f) = 0;
	*(undefined4 *)(p[1]._pSplLvl + 0x33) = 0;
	return;
}

void CreatePlayer(int pnum, char c)

{
	uint uVar1;
	longlong lVar2;
	PlayerStruct *p;
	DWORD s;
	char cVar4;
	int iVar3;
	int iVar5;
	int iVar6;
	int local_5c;

	iVar6 = pnum * 0x55ec;
	p = (PlayerStruct *)((int)plr + iVar6);
	ClearPlrRVars(p);
	s = GetTickCount();
	SetRndSeed(s);
	if (3 < (uint)pnum) {
		app_fatal(*(char **)(local_5c + -0x5948), pnum);
	}
	*(char *)((int)plr + iVar6 + 0x15c) = c;
	iVar5 = (int)c * 4;
	cVar4 = (char)*(undefined4 *)(*(int *)(local_5c + -0x6f9c) + iVar5);
	if (cVar4 < '\0') {
		cVar4 = '\0';
	}
	iVar3 = *(int *)(local_5c + -0x6fa0);
	*(int *)((int)plr + iVar6 + 0x160) = (int)cVar4;
	*(int *)((int)plr + iVar6 + 0x164) = (int)cVar4;
	cVar4 = (char)*(undefined4 *)(iVar3 + iVar5);
	if (cVar4 < '\0') {
		cVar4 = '\0';
	}
	iVar3 = *(int *)(local_5c + -0x6fa4);
	*(int *)((int)plr + iVar6 + 0x168) = (int)cVar4;
	*(int *)((int)plr + iVar6 + 0x16c) = (int)cVar4;
	cVar4 = (char)*(undefined4 *)(iVar3 + iVar5);
	if (cVar4 < '\0') {
		cVar4 = '\0';
	}
	iVar3 = *(int *)(local_5c + -0x6fa8);
	*(int *)((int)plr + iVar6 + 0x170) = (int)cVar4;
	*(int *)((int)plr + iVar6 + 0x174) = (int)cVar4;
	cVar4 = (char)*(undefined4 *)(iVar3 + iVar5);
	if (cVar4 < '\0') {
		cVar4 = '\0';
	}
	*(int *)((int)plr + iVar6 + 0x178) = (int)cVar4;
	*(int *)((int)plr + iVar6 + 0x17c) = (int)cVar4;
	*(undefined4 *)((int)plr + iVar6 + 0x180) = 0;
	*(undefined *)((int)plr + iVar6 + 0x5590) = 0;
	*(undefined *)((int)plr + iVar6 + 0x5591) = 0;
	*(undefined *)((int)plr + iVar6 + 0x5592) = 0;
	*(undefined4 *)((int)plr + iVar6 + 0x55a8) = 0;
	if (*(char *)((int)plr + iVar6 + 0x15c) == '\x01') {
		iVar3 = (int)*(char *)((int)plr + iVar6 + 0x1b4) * (*(int *)((int)plr + iVar6 + 0x160) + *(int *)((int)plr + iVar6 + 0x170));
		uVar1 = iVar3 / 200 + (iVar3 >> 0x1f);
		*(int *)((int)plr + iVar6 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	} else {
		iVar3 = *(int *)((int)plr + iVar6 + 0x160) * (int)*(char *)((int)plr + iVar6 + 0x1b4);
		uVar1 = iVar3 / 100 + (iVar3 >> 0x1f);
		*(int *)((int)plr + iVar6 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	}
	*(undefined4 *)((int)plr + iVar6 + 0x188) = *(undefined4 *)(*(int *)(local_5c + -0x594c) + iVar5);
	*(int *)((int)plr + iVar6 + 0x194) = (*(int *)((int)plr + iVar6 + 0x178) + 10) * 0x40;
	if (*(char *)((int)plr + iVar6 + 0x15c) == '\0') {
		*(int *)((int)plr + iVar6 + 0x194) = *(int *)((int)plr + iVar6 + 0x194) << 1;
	}
	if (*(char *)((int)plr + iVar6 + 0x15c) == '\x01') {
		iVar5 = *(int *)((int)plr + iVar6 + 0x194);
		*(int *)((int)plr + iVar6 + 0x194) = iVar5 + (iVar5 >> 1);
	}
	*(undefined4 *)((int)plr + iVar6 + 0x198) = *(undefined4 *)((int)plr + iVar6 + 0x194);
	*(undefined4 *)((int)plr + iVar6 + 0x18c) = *(undefined4 *)((int)plr + iVar6 + 0x194);
	*(undefined4 *)((int)plr + iVar6 + 400) = *(undefined4 *)((int)plr + iVar6 + 0x194);
	*(int *)((int)plr + iVar6 + 0x1a8) = *(int *)((int)plr + iVar6 + 0x168) << 6;
	if (*(char *)((int)plr + iVar6 + 0x15c) == '\x02') {
		*(int *)((int)plr + iVar6 + 0x1a8) = *(int *)((int)plr + iVar6 + 0x1a8) << 1;
	}
	if (*(char *)((int)plr + iVar6 + 0x15c) == '\x01') {
		iVar5 = *(int *)((int)plr + iVar6 + 0x1a8);
		*(int *)((int)plr + iVar6 + 0x1a8) = iVar5 + (iVar5 >> 1);
	}
	iVar5 = *(int *)(local_5c + -0x5950);
	*(undefined4 *)((int)plr + iVar6 + 0x1ac) = *(undefined4 *)((int)plr + iVar6 + 0x1a8);
	*(undefined4 *)((int)plr + iVar6 + 0x1a0) = *(undefined4 *)((int)plr + iVar6 + 0x1a8);
	*(undefined4 *)((int)plr + iVar6 + 0x1a4) = *(undefined4 *)((int)plr + iVar6 + 0x1a8);
	*(undefined *)((int)plr + iVar6 + 0x1b4) = 1;
	*(undefined *)((int)plr + iVar6 + 0x1b5) = *(undefined *)((int)plr + iVar6 + 0x1b4);
	*(undefined4 *)((int)plr + iVar6 + 0x1b8) = 0;
	*(undefined4 *)((int)plr + iVar6 + 0x1bc) = *(undefined4 *)((int)plr + iVar6 + 0x1b8);
	*(undefined4 *)((int)plr + iVar6 + 0x1c0) = *(undefined4 *)(iVar5 + 4);
	*(undefined *)((int)plr + iVar6 + 0x1c4) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1c5) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1c6) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1c7) = 0;
	*(undefined *)((int)plr + iVar6 + 0x13a) = 10;
	*(undefined4 *)((int)plr + iVar6 + 0x1cc) = 0;
	if (c == '\0') {
		*(undefined4 *)((int)plr + iVar6 + 0x110) = 0x2000000;
		*(undefined4 *)((int)plr + iVar6 + 0x10c) = 0;
	} else {
		if (c == '\x01') {
			*(undefined4 *)((int)plr + iVar6 + 0x110) = 0x8000000;
			*(undefined4 *)((int)plr + iVar6 + 0x10c) = 0;
		} else {
			if (c == '\x02') {
				*(undefined4 *)((int)plr + iVar6 + 0x110) = 0x4000000;
				*(undefined4 *)((int)plr + iVar6 + 0x10c) = 0;
			}
		}
	}
	if (c == '\x02') {
		*(undefined4 *)((int)plr + iVar6 + 0x108) = 1;
		*(undefined4 *)((int)plr + iVar6 + 0x104) = 0;
	} else {
		*(undefined4 *)((int)plr + iVar6 + 0x108) = 0;
		*(undefined4 *)((int)plr + iVar6 + 0x104) = 0;
	}
	*(undefined *)((int)plr + iVar6 + 0xc1) = 0;
	*(undefined *)((int)plr + iVar6 + 0xc2) = 0;
	*(undefined *)((int)plr + iVar6 + 0xc3) = 0;
	*(undefined *)((int)plr + iVar6 + 0xc4) = 0;
	*(undefined *)((int)plr + iVar6 + 0xc5) = 0;
	*(undefined *)((int)plr + iVar6 + 0xc6) = 0;
	*(undefined *)((int)plr + iVar6 + 199) = 0;
	*(undefined *)((int)plr + iVar6 + 200) = 0;
	*(undefined *)((int)plr + iVar6 + 0xc9) = 0;
	*(undefined *)((int)plr + iVar6 + 0xca) = 0;
	*(undefined *)((int)plr + iVar6 + 0xcb) = 0;
	*(undefined *)((int)plr + iVar6 + 0xcc) = 0;
	*(undefined *)((int)plr + iVar6 + 0xcd) = 0;
	*(undefined *)((int)plr + iVar6 + 0xce) = 0;
	*(undefined *)((int)plr + iVar6 + 0xcf) = 0;
	*(undefined *)((int)plr + iVar6 + 0xd0) = 0;
	*(undefined *)((int)plr + iVar6 + 0xd1) = 0;
	*(undefined *)((int)plr + iVar6 + 0xd2) = 0;
	*(undefined *)((int)plr + iVar6 + 0xd3) = 0;
	*(undefined *)((int)plr + iVar6 + 0xd4) = 0;
	*(undefined *)((int)plr + iVar6 + 0xd5) = 0;
	*(undefined *)((int)plr + iVar6 + 0xd6) = 0;
	*(undefined *)((int)plr + iVar6 + 0xd7) = 0;
	*(undefined *)((int)plr + iVar6 + 0xd8) = 0;
	*(undefined *)((int)plr + iVar6 + 0xd9) = 0;
	*(undefined *)((int)plr + iVar6 + 0xda) = 0;
	*(undefined *)((int)plr + iVar6 + 0xdb) = 0;
	*(undefined *)((int)plr + iVar6 + 0xdc) = 0;
	*(undefined *)((int)plr + iVar6 + 0xdd) = 0;
	*(undefined *)((int)plr + iVar6 + 0xde) = 0;
	*(undefined *)((int)plr + iVar6 + 0xdf) = 0;
	*(undefined *)((int)plr + iVar6 + 0xe0) = 0;
	*(undefined *)((int)plr + iVar6 + 0xe1) = 0;
	*(undefined *)((int)plr + iVar6 + 0xe2) = 0;
	*(undefined *)((int)plr + iVar6 + 0xe3) = 0;
	*(undefined *)((int)plr + iVar6 + 0xe4) = 0;
	*(undefined *)((int)plr + iVar6 + 0xe5) = 0;
	*(undefined *)((int)plr + iVar6 + 0xe6) = 0;
	*(undefined *)((int)plr + iVar6 + 0xe7) = 0;
	*(undefined *)((int)plr + iVar6 + 0xe8) = 0;
	*(undefined *)((int)plr + iVar6 + 0xe9) = 0;
	*(undefined *)((int)plr + iVar6 + 0xea) = 0;
	*(undefined *)((int)plr + iVar6 + 0xeb) = 0;
	*(undefined *)((int)plr + iVar6 + 0xec) = 0;
	*(undefined *)((int)plr + iVar6 + 0xed) = 0;
	*(undefined *)((int)plr + iVar6 + 0xee) = 0;
	*(undefined *)((int)plr + iVar6 + 0xef) = 0;
	*(undefined *)((int)plr + iVar6 + 0xf0) = 0;
	*(undefined *)((int)plr + iVar6 + 0xf1) = 0;
	*(undefined *)((int)plr + iVar6 + 0xf2) = 0;
	*(undefined *)((int)plr + iVar6 + 0xf3) = 0;
	*(undefined *)((int)plr + iVar6 + 0xf4) = 0;
	*(undefined *)((int)plr + iVar6 + 0xf5) = 0;
	*(undefined *)((int)plr + iVar6 + 0xf6) = 0;
	*(undefined *)((int)plr + iVar6 + 0xf7) = 0;
	*(undefined *)((int)plr + iVar6 + 0xf8) = 0;
	*(undefined *)((int)plr + iVar6 + 0xf9) = 0;
	*(undefined *)((int)plr + iVar6 + 0xfa) = 0;
	*(undefined *)((int)plr + iVar6 + 0xfb) = 0;
	*(undefined *)((int)plr + iVar6 + 0xfc) = 0;
	*(undefined *)((int)plr + iVar6 + 0xfd) = 0;
	*(undefined *)((int)plr + iVar6 + 0xfe) = 0;
	*(undefined *)((int)plr + iVar6 + 0xff) = 0;
	*(undefined *)((int)plr + iVar6 + 0x100) = 0;
	*(undefined *)((int)plr + iVar6 + 0x11c) = 0;
	if (*(char *)((int)plr + iVar6 + 0x15c) == '\x02') {
		*(undefined *)((int)plr + iVar6 + 0xc2) = 2;
	}
	*(undefined4 *)((int)plr + iVar6 + 0x120) = 0xffffffff;
	*(undefined4 *)((int)plr + iVar6 + 0x124) = 0xffffffff;
	*(undefined4 *)((int)plr + iVar6 + 0x128) = 0xffffffff;
	if (c == '\0') {
		*(undefined4 *)((int)plr + iVar6 + 0x78) = 3;
	} else {
		if (c == '\x01') {
			*(undefined4 *)((int)plr + iVar6 + 0x78) = 4;
		} else {
			if (c == '\x02') {
				*(undefined4 *)((int)plr + iVar6 + 0x78) = 8;
			}
		}
	}
	*(undefined *)((int)plr + iVar6 + 0x1f0) = 0;
	lVar2 = 1;
	*(undefined *)((int)plr + iVar6 + 0x1f1) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1f2) = 0;
	*(undefined *)((int)plr + iVar6 + 499) = 0;
	*(undefined *)((int)plr + iVar6 + 500) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1f5) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1f6) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1f7) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1f8) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1f9) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1fa) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1fb) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1fc) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1fd) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1fe) = 0;
	*(undefined *)((int)plr + iVar6 + 0x1ff) = 0;
	iVar5 = 0x10;
	do {
		p->_pLvlVisited[iVar5] = false;
		lVar2 = lVar2 + -1;
		iVar5 = iVar5 + 1;
	} while (lVar2 != 0);
	*(undefined *)((int)plr + iVar6 + 0x201) = 0;
	lVar2 = 2;
	*(undefined *)((int)plr + iVar6 + 0x202) = 0;
	*(undefined *)((int)plr + iVar6 + 0x203) = 0;
	*(undefined *)((int)plr + iVar6 + 0x204) = 0;
	*(undefined *)((int)plr + iVar6 + 0x205) = 0;
	*(undefined *)((int)plr + iVar6 + 0x206) = 0;
	*(undefined *)((int)plr + iVar6 + 0x207) = 0;
	*(undefined *)((int)plr + iVar6 + 0x208) = 0;
	iVar5 = 8;
	do {
		p->_pSLvlVisited[iVar5] = false;
		lVar2 = lVar2 + -1;
		iVar5 = iVar5 + 1;
	} while (lVar2 != 0);
	*(undefined *)((int)plr + iVar6 + 0x13b) = 0;
	*(undefined *)((int)plr + iVar6 + 0x5590) = 0;
	*(undefined *)((int)plr + iVar6 + 0x5592) = 0;
	*(undefined *)((int)plr + iVar6 + 0x5593) = 0;
	*(undefined *)((int)plr + iVar6 + 0x5594) = 0;
	InitDungMsgs(pnum);
	CreatePlrItems(pnum);
	SetRndSeed(0);
	return;
}

int CalcStatDiff(int pnum)

{
	int iVar1;

	pnum = pnum * 0x55ec;
	iVar1 = (int)*(char *)((int)plr + pnum + 0x15c) * 0x10;
	return (*(int *)(&DAT_1010ea84 + iVar1) - *(int *)((int)plr + pnum + 0x164)) + (*(int *)(iVar1 + 0x1010ea88) - *(int *)((int)plr + pnum + 0x16c)) + (*(int *)(iVar1 + 0x1010ea8c) - *(int *)((int)plr + pnum + 0x174)) + (*(int *)(iVar1 + 0x1010ea90) - *(int *)((int)plr + pnum + 0x17c));
}

void NextPlrLevel(int pnum)

{
	char *pcVar1;
	int *piVar2;
	char cVar3;
	int *piVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar5 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar5 = 0x100f8fd0;
		app_fatal("NextPlrLevel: illegal player %d", pnum);
	}
	iVar8 = pnum * 0x55ec;
	pcVar1 = (char *)((int)plr + iVar8 + 0x1b4);
	*pcVar1 = *(char *)((int)plr + iVar8 + 0x1b4) + '\x01';
	*(char *)((int)plr + iVar8 + 0x1b5) = *(char *)((int)plr + iVar8 + 0x1b5) + '\x01';
	iVar6 = CalcStatDiff(pnum);
	if (iVar6 < 5) {
		iVar6 = CalcStatDiff(pnum);
		*(int *)((int)plr + iVar8 + 0x180) = iVar6;
	} else {
		*(int *)((int)plr + iVar8 + 0x180) = *(int *)((int)plr + iVar8 + 0x180) + 5;
	}
	*(undefined4 *)((int)plr + iVar8 + 0x1c0) = *(undefined4 *)(*(int *)(iVar5 + -0x5950) + (int)*pcVar1 * 4);
	if (*(char *)((int)plr + iVar8 + 0x15c) == '\x02') {
		iVar6 = 0x40;
	} else {
		iVar6 = 0x80;
	}
	cVar3 = **(char **)(iVar5 + -0x77f0);
	if (cVar3 == '\x01') {
		iVar6 = iVar6 + 1;
	}
	piVar4 = *(int **)(iVar5 + -0x77ac);
	*(int *)((int)plr + iVar8 + 0x198) = *(int *)((int)plr + iVar8 + 0x198) + iVar6;
	*(undefined4 *)((int)plr + iVar8 + 0x194) = *(undefined4 *)((int)plr + iVar8 + 0x198);
	*(int *)((int)plr + iVar8 + 400) = *(int *)((int)plr + iVar8 + 400) + iVar6;
	*(undefined4 *)((int)plr + iVar8 + 0x18c) = *(undefined4 *)((int)plr + iVar8 + 400);
	iVar6 = *piVar4;
	if (pnum == iVar6) {
		**(undefined4 **)(iVar5 + -0x76f0) = 1;
	}
	if (*(char *)((int)plr + iVar8 + 0x15c) == '\0') {
		iVar7 = 0x40;
	} else {
		iVar7 = 0x80;
	}
	if (cVar3 == '\x01') {
		iVar7 = iVar7 + 1;
	}
	piVar4 = (int *)((int)plr + iVar8 + 0x1ac);
	*piVar4 = *(int *)((int)plr + iVar8 + 0x1ac) + iVar7;
	piVar2 = (int *)((int)plr + iVar8 + 0x1a4);
	*piVar2 = *(int *)((int)plr + iVar8 + 0x1a4) + iVar7;
	if ((*(uint *)((int)plr + iVar8 + 0x5568) & 0x8000000) == 0) {
		*(int *)((int)plr + iVar8 + 0x1a8) = *piVar4;
		*(int *)((int)plr + iVar8 + 0x1a0) = *piVar2;
	}
	if (pnum == iVar6) {
		**(undefined4 **)(iVar5 + -0x76f4) = 1;
	}
	return;
}

void AddPlrExperience(int pnum, int lvl, int exp)

{
	uint *puVar1;
	char cVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char *pcVar7;
	int iVar8;
	int *piVar9;
	double dVar10;

	iVar5 = 0x100f8fd0;
	piVar9 = (int *)&DAT_1010eab4;
	if (pnum == myplr) {
		if (3 < (uint)myplr) {
			iVar5 = 0x100f8fd0;
			app_fatal("AddPlrExperience: illegal player %d");
		}
		if (3 < (uint)pnum) {
			app_fatal("AddPlrExperience: illegal player %d", pnum);
		}
		if (0 < *(int *)((int)plr + myplr * 0x55ec + 0x194)) {
			iVar6 = pnum * 0x55ec;
			dVar10 = *(double *)(iVar5 + -0x4c08);
			pcVar7 = (char *)((int)plr + iVar6 + 0x1b4);
			cVar2 = *pcVar7;
			iVar8 = (int)(((double)CONCAT44(0x43300000, exp ^ 0x80000000) - dVar10) * (*(double *)(iVar5 + -0x4c00) * (((double)CONCAT44(0x43300000, lvl ^ 0x80000000) - dVar10) - ((double)CONCAT44(0x43300000, (int)cVar2 ^ 0x80000000) - dVar10)) + *(double *)(iVar5 + -0x4bf8)));
			if (iVar8 < 0) {
				iVar8 = 0;
			}
			if (1 < **(byte **)(iVar5 + -0x77f0)) {
				if (cVar2 < '\0') {
					iVar5 = 0;
				} else {
					iVar5 = (int)cVar2;
				}
				if (0x31 < iVar5) {
					iVar5 = 0x32;
				}
				uVar3 = *(int *)(&DAT_1010eab4 + iVar5 * 4) / 0x14 + (*(int *)(&DAT_1010eab4 + iVar5 * 4) >> 0x1f);
				iVar4 = uVar3 + (uVar3 >> 0x1f);
				if (iVar8 < iVar4) {
					iVar4 = iVar8;
				}
				iVar8 = iVar5 * 200;
				if (iVar4 < iVar8) {
					iVar8 = iVar4;
				}
			}
			*(int *)((int)plr + iVar6 + 0x1b8) = *(int *)((int)plr + iVar6 + 0x1b8) + iVar8;
			puVar1 = (uint *)((int)plr + iVar6 + 0x1b8);
			if (2000000000 < *puVar1) {
				*puVar1 = 2000000000;
			}
			if ((int)*puVar1 < iRam1010eb78) {
				iVar5 = 0;
				while (*piVar9 <= *(int *)((int)plr + iVar6 + 0x1b8)) {
					piVar9 = piVar9 + 1;
					iVar5 = iVar5 + 1;
				}
				cVar2 = *pcVar7;
				if (iVar5 != (int)cVar2) {
					iVar8 = 0;
					while (iVar8 < iVar5 - (int)cVar2) {
						NextPlrLevel(pnum);
						iVar8 = iVar8 + 1;
					}
				}
				NetSendCmdParam1(0, '3', (short)*(char *)((int)plr + myplr * 0x55ec + 0x1b4));
			} else {
				*pcVar7 = '2';
			}
		}
	}
	return;
}

void AddPlrMonstExper(int lvl, int exp, char pmask)

{
	bool bVar1;
	uint uVar2;
	ulonglong uVar3;

	uVar3 = SEXT18(pmask);
	bVar1 = (uVar3 & 1) != 0;
	uVar2 = (uint)bVar1;
	if ((uVar3 & 2) != 0) {
		uVar2 = (uint)bVar1 + 1;
	}
	if ((uVar3 & 4) != 0) {
		uVar2 = uVar2 + 1;
	}
	if ((uVar3 & 8) != 0) {
		uVar2 = uVar2 + 1;
	}
	if ((uVar2 != 0) && ((uVar3 & (ulonglong)(uint)(1 << (ulonglong)(uint)myplr)) != 0)) {
		AddPlrExperience(myplr, lvl, exp / (int)uVar2);
	}
	return;
}

void InitPlayer(int pnum, BOOL FirstTime)

{
	char cVar1;
	undefined4 *puVar2;
	undefined8 uVar3;
	int iVar4;
	BOOL BVar5;
	int iVar6;
	uint uVar7;
	int *piVar8;
	int *piVar9;
	PlayerStruct *p;
	int iVar10;
	int *piVar11;
	int *piVar12;

	uVar3 = 0x100f8fd0;
	piVar12 = (int *)&DAT_1010e9ac;
	piVar11 = (int *)&DAT_1010e9d0;
	if (3 < (uint)pnum) {
		app_fatal("InitPlayer: illegal player %d", pnum);
	}
	if (3 < (uint)myplr) {
		app_fatal("InitPlayer: illegal player %d", pnum);
	}
	iVar10 = pnum * 0x55ec;
	p = (PlayerStruct *)((int)plr + iVar10);
	ClearPlrRVars(p);
	iVar4 = (int)uVar3;
	if (FirstTime != 0) {
		*(undefined *)((int)plr + iVar10 + 0xb8) = 4;
		*(undefined4 *)((int)plr + iVar10 + 0xb4) = 0xffffffff;
		*(undefined4 *)((int)plr + iVar10 + 0xbc) = 0xffffffff;
		*(undefined4 *)((int)plr + iVar10 + 0xa4) = *(undefined4 *)((int)plr + iVar10 + 0xb4);
		*(undefined *)((int)plr + iVar10 + 0xa8) = *(undefined *)((int)plr + iVar10 + 0xb8);
		if ((*(uint *)((int)plr + iVar10 + 0x78) & 0xf) == 4) {
			*(undefined4 *)((int)plr + iVar10 + 0x134) = 1;
		} else {
			*(undefined4 *)((int)plr + iVar10 + 0x134) = 0;
		}
		*(undefined *)((int)plr + iVar10 + 0x5594) = 0;
	}
	if ((uint)currlevel != *(uint *)((int)plr + iVar10 + 0x34)) {
		if (**(int **)(iVar4 + -0x7274) == 0)
			goto LAB_100931d0;
	}
	SetPlrAnims(pnum);
	*(undefined4 *)((int)plr + iVar10 + 0x60) = 0;
	*(undefined4 *)((int)plr + iVar10 + 100) = 0;
	*(undefined4 *)((int)plr + iVar10 + 0x68) = 0;
	*(undefined4 *)((int)plr + iVar10 + 0x6c) = 0;
	ClearPlrPVars(pnum);
	if (*(int *)((int)plr + iVar10 + 0x194) >> 6 == 0) {
		p->_pmode = 8;
		NewPlrAnim(pnum, (BYTE *)((int)plr + iVar10 + 0x408), *(int *)((int)plr + iVar10 + 0x448), 1,
		    *(int *)((int)plr + iVar10 + 0x44c));
		*(int *)((int)plr + iVar10 + 0x8c) = *(int *)((int)plr + iVar10 + 0x88) + -1;
		*(int *)((int)plr + iVar10 + 0x1ec) = *(int *)((int)plr + iVar10 + 0x88) << 1;
	} else {
		p->_pmode = 0;
		NewPlrAnim(pnum, (BYTE *)((int)plr + iVar10 + 0x218), *(int *)((int)plr + iVar10 + 600), 3,
		    *(int *)((int)plr + iVar10 + 0x25c));
		iVar4 = random('\x02', *(int *)((int)plr + iVar10 + 600) + -1);
		*(int *)((int)plr + iVar10 + 0x8c) = iVar4 + 1;
		iVar4 = random('\x02', 3);
		*(int *)((int)plr + iVar10 + 0x84) = iVar4;
	}
	iVar4 = (int)uVar3;
	*(undefined4 *)((int)plr + iVar10 + 0x70) = 0;
	*(undefined4 *)((int)plr + iVar10 + 0x98) = 0;
	if (pnum == myplr) {
		if ((FirstTime == 0) || (currlevel != 0)) {
			puVar2 = *(undefined4 **)(iVar4 + -0x77b4);
			*(undefined4 *)((int)plr + iVar10 + 0x38) = **(undefined4 **)(iVar4 + -0x77b0);
			*(undefined4 *)((int)plr + iVar10 + 0x3c) = *puVar2;
		}
		*(undefined4 *)((int)plr + iVar10 + 0x48) = *(undefined4 *)((int)plr + iVar10 + 0x38);
		*(undefined4 *)((int)plr + iVar10 + 0x4c) = *(undefined4 *)((int)plr + iVar10 + 0x3c);
	} else {
		piVar9 = (int *)((int)plr + iVar10 + 0x38);
		piVar8 = (int *)((int)plr + iVar10 + 0x3c);
		uVar7 = 0;
		*(undefined4 *)((int)plr + iVar10 + 0x48) = *(undefined4 *)((int)plr + iVar10 + 0x38);
		*(undefined4 *)((int)plr + iVar10 + 0x4c) = *(undefined4 *)((int)plr + iVar10 + 0x3c);
		do {
			BVar5 = PosOkPlayer(
			    pnum, *(int *)((int)plr + iVar10 + 0x38) + *piVar12, *(int *)((int)plr + iVar10 + 0x3c) + *piVar11);
			iVar4 = (int)uVar3;
			if (BVar5 != 0)
				break;
			uVar7 = uVar7 + 1;
			piVar12 = piVar12 + 1;
			piVar11 = piVar11 + 1;
		} while (uVar7 < 8);
		*piVar9 = *piVar9 + *(int *)(&DAT_1010e9ac + uVar7 * 4);
		*piVar8 = *piVar8 + *(int *)(&DAT_1010e9d0 + uVar7 * 4);
	}
	piVar12 = (int *)((int)plr + iVar10 + 0x38);
	*(int *)((int)plr + iVar10 + 0x40) = *piVar12;
	piVar11 = (int *)((int)plr + iVar10 + 0x3c);
	*(undefined4 *)((int)plr + iVar10 + 0x44) = *(undefined4 *)((int)plr + iVar10 + 0x3c);
	*(undefined *)((int)plr + iVar10 + 4) = 0xff;
	*(undefined4 *)((int)plr + iVar10 + 0x20) = 0xffffffff;
	if (pnum == myplr) {
		iVar6 = AddLight(*piVar12, *piVar11, (int)*(char *)((int)plr + iVar10 + 0x13a));
		*(int *)((int)plr + iVar10 + 0x9c) = iVar6;
	} else {
		*(undefined4 *)((int)plr + iVar10 + 0x9c) = 0xffffffff;
	}
	uVar3 = countLeadingZeros(myplr - pnum);
	iVar6 = AddVision(*piVar12, *piVar11, (int)*(char *)((int)plr + iVar10 + 0x13a), (uint)uVar3 >> 5 & 0xff);
	*(int *)((int)plr + iVar10 + 0xa0) = iVar6;
LAB_100931d0:
	cVar1 = *(char *)((int)plr + iVar10 + 0x15c);
	if (cVar1 == '\0') {
		*(undefined4 *)((int)plr + iVar10 + 0x110) = 0x2000000;
		*(undefined4 *)((int)plr + iVar10 + 0x10c) = 0;
	} else {
		if (cVar1 == '\x01') {
			*(undefined4 *)((int)plr + iVar10 + 0x110) = 0x8000000;
			*(undefined4 *)((int)plr + iVar10 + 0x10c) = 0;
		} else {
			if (cVar1 == '\x02') {
				*(undefined4 *)((int)plr + iVar10 + 0x110) = 0x4000000;
				*(undefined4 *)((int)plr + iVar10 + 0x10c) = 0;
			}
		}
	}
	*(undefined4 *)((int)plr + iVar10 + 0x1c0) = *(undefined4 *)(*(int *)(iVar4 + -0x5950) + (int)*(char *)((int)plr + iVar10 + 0x1b4) * 4);
	*(undefined *)((int)plr + iVar10 + 0x139) = 0;
	if (pnum == myplr) {
		puVar2 = *(undefined4 **)(iVar4 + -0x75cc);
		**(undefined4 **)(iVar4 + -0x6f8c) = 0;
		*puVar2 = 0;
		ScrollStruct_1012f2e8._sxoff = 0;
		ScrollStruct_1012f2e8._syoff = 0;
		ScrollStruct_1012f2e8._sdir = 0;
	}
	return;
}

void InitMultiView(void)

{
	undefined4 *puVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0x100f8fd0;
	if (3 < (uint)myplr) {
		iVar3 = 0x100f8fd0;
		app_fatal("InitPlayer: illegal player %d");
	}
	iVar2 = myplr * 0x55ec;
	puVar1 = *(undefined4 **)(iVar3 + -0x77b4);
	**(undefined4 **)(iVar3 + -0x77b0) = *(undefined4 *)((int)plr + iVar2 + 0x38);
	*puVar1 = *(undefined4 *)((int)plr + iVar2 + 0x3c);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckEFlag(int pnum, BOOL flag)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	int iVar4;
	int x;
	int x_00;
	int y;

	iVar4 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar4 = 0x100f8fd0;
		app_fatal("InitPlayer: illegal player %d", pnum);
	}
	pnum = pnum * 0x55ec;
	piVar1 = (int *)((int)plr + pnum + 0x38);
	piVar2 = (int *)((int)plr + pnum + 0x3c);
	x_00 = *piVar1 + -1;
	y = *piVar2 + 1;
	x = IsometricCoord(x_00, y);
	x = _DAT_1012f1cc + x * 0x20;
	if (((ulonglong)(ushort)(*(ushort *)(x + 4) | *(ushort *)(x + 6) | *(ushort *)(x + 8) | *(ushort *)(x + 10) | *(ushort *)(x + 0xc) | *(ushort *)(x + 0xe) | *(ushort *)(x + 0x10) | *(ushort *)(x + 0x12)) | (longlong) * (char *)(_DAT_1012f1a0 + x_00 * 0x70 + y) | (ulonglong) * (byte *)(*(int *)(iVar4 + -0x722c) + (int)*(short *)(**(int **)(iVar4 + -0x757c) + x_00 * 0xe0 + y * 2))) == 0) {
		*(undefined4 *)((int)plr + pnum + 0x98) = 0;
	} else {
		*(undefined4 *)((int)plr + pnum + 0x98) = 1;
	}
	if (flag == 1) {
		piVar3 = (int *)((int)plr + pnum + 0x98);
		if (*piVar3 == 1) {
			iVar4 = *piVar2;
			x = *piVar1;
			x_00 = IsometricCoord(x, iVar4 + 2);
			x_00 = _DAT_1012f1cc + x_00 * 0x20;
			if (((ulonglong)(ushort)(*(ushort *)(x_00 + 4) | *(ushort *)(x_00 + 6) | *(ushort *)(x_00 + 8) | *(ushort *)(x_00 + 10) | *(ushort *)(x_00 + 0xc) | *(ushort *)(x_00 + 0xe) | *(ushort *)(x_00 + 0x10) | *(ushort *)(x_00 + 0x12)) | (longlong) * (char *)(_DAT_1012f1a0 + x * 0x70 + iVar4 + 2)) == 0) {
				iVar4 = *piVar1;
				x = *piVar2;
				x_00 = IsometricCoord(iVar4 + -2, x + 1);
				x_00 = _DAT_1012f1cc + x_00 * 0x20;
				if (((ulonglong)(ushort)(*(ushort *)(x_00 + 4) | *(ushort *)(x_00 + 6) | *(ushort *)(x_00 + 8) | *(ushort *)(x_00 + 10) | *(ushort *)(x_00 + 0xc) | *(ushort *)(x_00 + 0xe) | *(ushort *)(x_00 + 0x10) | *(ushort *)(x_00 + 0x12)) | (longlong) * (char *)(_DAT_1012f1a0 + (iVar4 + -2) * 0x70 + x + 1)) != 0) {
					*piVar3 = 2;
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL SolidLoc(int x, int y)

{
	if ((x < 0) || (y < 0)) {
		return 0;
	}
	if ((x < 0x70) && (y < 0x70)) {
		return (BOOL)(uint)(byte)(&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2)];
	}
	return 0;
}

// WARNING: Removing unreachable block (ram,0x100935e4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL PlrDirOK(int pnum, int dir)

{
	int x;
	int iVar1;
	BOOL BVar2;
	int y;

	iVar1 = 0x100f8fd0;
	if (3 < ((longlong)pnum & 0xffffffffU)) {
		iVar1 = 0x100f8fd0;
		app_fatal("PlrDirOK: illegal player %d", (longlong)pnum);
	}
	x = *(int *)((int)plr + pnum * 0x55ec + 0x38) + *(int *)(*(int *)(iVar1 + -0x71ec) + dir * 4);
	y = *(int *)((int)plr + pnum * 0x55ec + 0x3c) + *(int *)(*(int *)(iVar1 + -0x71f0) + dir * 4);
	if (*(short *)(**(int **)(iVar1 + -0x757c) + x * 0xe0 + y * 2) == 0) {
		iVar1 = 0;
	} else {
		BVar2 = PosOkPlayer(pnum, x, y);
		if (BVar2 == 0) {
			iVar1 = 0;
		} else {
			iVar1 = 1;
			if (dir == 6) {
				iVar1 = 0;
				BVar2 = SolidLoc(x, y + 1);
				if ((BVar2 == 0) && ((*(byte *)(_DAT_1012f1bc + x * 0x70 + y + 1) & 0x20) == 0)) {
					iVar1 = 1;
				}
			}
			if ((iVar1 != 0) && (dir == 2)) {
				iVar1 = 0;
				BVar2 = SolidLoc(x + 1, y);
				if ((BVar2 == 0) && ((*(byte *)(_DAT_1012f1bc + x * 0x70 + y + 0x70) & 0x20) == 0)) {
					iVar1 = 1;
				}
			}
		}
	}
	return (BOOL)iVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PlrClrTrans(int x, int y)

{
	int iVar1;
	int iVar2;
	int iVar3;
	char *pcVar4;
	int iVar5;

	iVar1 = _DAT_1012f1c8;
	iVar5 = y + -1;
	iVar2 = (y + 2) - iVar5;
	if (y + 1 < iVar5) {
		return;
	}
	do {
		iVar3 = (x + -1) * 0x70 + iVar5;
		iVar5 = iVar5 + 1;
		pcVar4 = (char *)(iVar1 + iVar3);
		(&DAT_1012f1d8)[(int)*pcVar4] = 0;
		(&DAT_1012f1d8)[(int)pcVar4[0x70]] = 0;
		(&DAT_1012f1d8)[(int)pcVar4[0xe0]] = 0;
		iVar2 = iVar2 + -1;
	} while (iVar2 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PlrDoTrans(int x, int y)

{
	int iVar1;
	short *psVar2;
	int iVar3;
	char *pcVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if ((byte)(leveltype - 1U) < 2) {
		iVar7 = y + -1;
		iVar5 = _DAT_1012f1d4 + iVar7 * 2;
		iVar6 = _DAT_1012f1c8 + iVar7;
		while (iVar7 <= y + 1) {
			iVar3 = x + -1;
			psVar2 = (short *)(iVar5 + iVar3 * 0xe0);
			iVar1 = (x + 2) - iVar3;
			pcVar4 = (char *)(iVar6 + iVar3 * 0x70);
			if (iVar3 <= x + 1) {
				do {
					if (((&DAT_10130b33)[(int)*psVar2] == '\0') && (*pcVar4 != '\0')) {
						(&DAT_1012f1d8)[(int)*pcVar4] = 1;
					}
					psVar2 = psVar2 + 0x70;
					pcVar4 = pcVar4 + 0x70;
					iVar1 = iVar1 + -1;
				} while (iVar1 != 0);
			}
			iVar5 = iVar5 + 2;
			iVar6 = iVar6 + 1;
			iVar7 = iVar7 + 1;
		}
	} else {
		uRam1012f1d9 = 1;
	}
	return;
}

void SetPlayerOld(int pnum)

{
	if (3 < (uint)pnum) {
		app_fatal("SetPlayerOld: illegal player %d", pnum);
	}
	pnum = pnum * 0x55ec;
	*(undefined4 *)((int)plr + pnum + 0x58) = *(undefined4 *)((int)plr + pnum + 0x38);
	*(undefined4 *)((int)plr + pnum + 0x5c) = *(undefined4 *)((int)plr + pnum + 0x3c);
	return;
}

void FixPlayerLocation(int pnum, int bDir)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar4 = 0x100f8fd0;
		app_fatal("FixPlayerLocation: illegal player %d", pnum);
	}
	iVar3 = pnum * 0x55ec;
	*(undefined4 *)((int)plr + iVar3 + 0x40) = *(undefined4 *)((int)plr + iVar3 + 0x38);
	*(undefined4 *)((int)plr + iVar3 + 0x44) = *(undefined4 *)((int)plr + iVar3 + 0x3c);
	puVar1 = (undefined4 *)((int)plr + iVar3 + 0x38);
	*(undefined4 *)((int)plr + iVar3 + 0x48) = *puVar1;
	*(undefined4 *)((int)plr + iVar3 + 0x4c) = *(undefined4 *)((int)plr + iVar3 + 0x3c);
	*(undefined4 *)((int)plr + iVar3 + 0x60) = 0;
	*(undefined4 *)((int)plr + iVar3 + 100) = 0;
	CheckEFlag(pnum, 0);
	*(int *)((int)plr + iVar3 + 0x70) = bDir;
	if (pnum == **(int **)(iVar4 + -0x77ac)) {
		ScrollStruct_1012f2e8._sxoff = 0;
		ScrollStruct_1012f2e8._syoff = 0;
		puVar2 = *(undefined4 **)(iVar4 + -0x77b4);
		ScrollStruct_1012f2e8._sdir = 0;
		**(undefined4 **)(iVar4 + -0x77b0) = *puVar1;
		*puVar2 = *(undefined4 *)((int)plr + iVar3 + 0x3c);
	}
	return;
}

void StartStand(int pnum, int dir)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar1 = 0x100f8fd0;
		app_fatal("StartStand: illegal player %d", pnum);
	}
	iVar2 = pnum * 0x55ec;
	if (((*(char *)((int)plr + iVar2 + 0x139) != '\0') && (*(int *)((int)plr + iVar2 + 0x194) == 0)) && (pnum == **(int **)(iVar1 + -0x77ac))) {
		SyncPlrKill(pnum, -1);
		return;
	}
	if ((*(uint *)((int)plr + iVar2 + 0x214) & 1) == 0) {
		LoadPlrGFX(pnum, (player_graphic)0x1);
	}
	NewPlrAnim(pnum, (BYTE *)(&((PlayerStruct *)((int)plr + iVar2))->_pmode + dir * 2 + 0x86),
	    *(int *)((int)plr + iVar2 + 600), 3, *(int *)((int)plr + iVar2 + 0x25c));
	((PlayerStruct *)((int)plr + iVar2))->_pmode = 0;
	FixPlayerLocation(pnum, dir);
	FixPlrWalkTags(pnum);
	*(char *)(**(int **)(iVar1 + -0x7680) + *(int *)((int)plr + iVar2 + 0x38) * 0x70 + *(int *)((int)plr + iVar2 + 0x3c)) = (char)pnum + '\x01';
	SetPlayerOld(pnum);
	return;
}

void StartWalkStand(int pnum)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar4 = 0x100f8fd0;
		app_fatal("StartWalkStand: illegal player %d", pnum);
	}
	iVar3 = pnum * 0x55ec;
	((PlayerStruct *)((int)plr + iVar3))->_pmode = 0;
	puVar1 = (undefined4 *)((int)plr + iVar3 + 0x38);
	*(undefined4 *)((int)plr + iVar3 + 0x40) = *puVar1;
	*(undefined4 *)((int)plr + iVar3 + 0x44) = *(undefined4 *)((int)plr + iVar3 + 0x3c);
	*(undefined4 *)((int)plr + iVar3 + 0x60) = 0;
	*(undefined4 *)((int)plr + iVar3 + 100) = 0;
	CheckEFlag(pnum, 0);
	if (pnum == **(int **)(iVar4 + -0x77ac)) {
		ScrollStruct_1012f2e8._sxoff = 0;
		ScrollStruct_1012f2e8._syoff = 0;
		puVar2 = *(undefined4 **)(iVar4 + -0x77b4);
		ScrollStruct_1012f2e8._sdir = 0;
		**(undefined4 **)(iVar4 + -0x77b0) = *puVar1;
		*puVar2 = *(undefined4 *)((int)plr + iVar3 + 0x3c);
	}
	return;
}

// WARNING: Removing unreachable block (ram,0x10093b88)

void PM_ChangeLightOff(int pnum)

{
	int iVar1;
	int x;
	int *piVar2;
	int iVar3;
	int y;
	int iVar4;

	iVar3 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar3 = 0x100f8fd0;
		app_fatal("PM_ChangeLightOff: illegal player %d", pnum);
	}
	pnum = pnum * 0x55ec;
	piVar2 = (int *)((int)plr + pnum + 0x9c);
	x = *(int *)((int)plr + pnum + 100) * 2;
	iVar1 = *(int *)((int)plr + pnum + 0x60);
	iVar3 = *(int *)(iVar3 + -0x7140) + *piVar2 * 0x34;
	iVar4 = x - iVar1;
	if (iVar4 < 0) {
		iVar4 = -iVar4;
		y = -1;
	} else {
		y = 1;
	}
	x = iVar1 + x >> 3;
	iVar1 = *(int *)(iVar3 + 0x2c);
	y = (iVar4 >> 3) * y;
	iVar3 = abs(x - *(int *)(iVar3 + 0x28));
	if ((2 < iVar3) || (iVar3 = abs(y - iVar1), 2 < iVar3)) {
		ChangeLightOff(*piVar2, x, y);
	}
	return;
}

void PM_ChangeOffset(int pnum)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar4 = 0x100f8fd0;
		app_fatal("PM_ChangeOffset: illegal player %d", pnum);
	}
	iVar3 = pnum * 0x55ec;
	piVar1 = *(int **)(iVar4 + -0x77ac);
	*(int *)((int)plr + iVar3 + 0x1ec) = *(int *)((int)plr + iVar3 + 0x1ec) + 1;
	iVar4 = *(int *)((int)plr + iVar3 + 0x1e4);
	iVar2 = *(int *)((int)plr + iVar3 + 0x1e8);
	*(int *)((int)plr + iVar3 + 0x1e4) = iVar4 + *(int *)((int)plr + iVar3 + 0x68);
	*(int *)((int)plr + iVar3 + 0x1e8) = *(int *)((int)plr + iVar3 + 0x1e8) + *(int *)((int)plr + iVar3 + 0x6c);
	*(int *)((int)plr + iVar3 + 0x60) = *(int *)((int)plr + iVar3 + 0x1e4) >> 8;
	*(int *)((int)plr + iVar3 + 100) = *(int *)((int)plr + iVar3 + 0x1e8) >> 8;
	if ((pnum == *piVar1) && (ScrollStruct_1012f2e8._sdir != 0)) {
		ScrollStruct_1012f2e8._sxoff = ScrollStruct_1012f2e8._sxoff + ((iVar4 >> 8) - (*(int *)((int)plr + iVar3 + 0x1e4) >> 8));
		ScrollStruct_1012f2e8._syoff = ScrollStruct_1012f2e8._syoff + ((iVar2 >> 8) - (*(int *)((int)plr + iVar3 + 0x1e8) >> 8));
	}
	PM_ChangeLightOff(pnum);
	return;
}

void StartWalk(int pnum, int xvel, int yvel, int xadd, int yadd, int EndDir, int sdir)

{
	int *piVar1;
	int *piVar2;
	BOOL BVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar4 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar4 = 0x100f8fd0;
		app_fatal("StartWalk: illegal player %d", pnum);
	}
	iVar7 = pnum * 0x55ec;
	if (((*(char *)((int)plr + iVar7 + 0x139) == '\0') || (*(int *)((int)plr + iVar7 + 0x194) != 0)) || (pnum != myplr)) {
		SetPlayerOld(pnum);
		piVar1 = (int *)((int)plr + iVar7 + 0x38);
		piVar2 = (int *)((int)plr + iVar7 + 0x3c);
		iVar6 = xadd + *piVar1;
		iVar5 = yadd + *piVar2;
		BVar3 = PlrDirOK(pnum, EndDir);
		if (BVar3 != 0) {
			*(int *)((int)plr + iVar7 + 0x40) = iVar6;
			*(int *)((int)plr + iVar7 + 0x44) = iVar5;
			if (pnum == myplr) {
				ScrollStruct_1012f2e8._sdx = *piVar1 - **(int **)(iVar4 + -0x77b0);
				ScrollStruct_1012f2e8._sdy = *piVar2 - **(int **)(iVar4 + -0x77b4);
			}
			*(char *)(**(int **)(iVar4 + -0x7680) + iVar6 * 0x70 + iVar5) = -1 - (char)pnum;
			((PlayerStruct *)((int)plr + iVar7))->_pmode = 1;
			*(int *)((int)plr + iVar7 + 0x68) = xvel;
			*(int *)((int)plr + iVar7 + 0x6c) = yvel;
			*(undefined4 *)((int)plr + iVar7 + 0x60) = 0;
			*(undefined4 *)((int)plr + iVar7 + 100) = 0;
			*(int *)((int)plr + iVar7 + 0x1d0) = xadd;
			*(int *)((int)plr + iVar7 + 0x1d4) = yadd;
			*(int *)((int)plr + iVar7 + 0x1d8) = EndDir;
			if ((*(uint *)((int)plr + iVar7 + 0x214) & 2) == 0) {
				LoadPlrGFX(pnum, (player_graphic)0x2);
			}
			NewPlrAnim(pnum, (BYTE *)(&((PlayerStruct *)((int)plr + iVar7))->_pmode + EndDir * 2 + 0x98),
			    *(int *)((int)plr + iVar7 + 0x2a0), 0, *(int *)((int)plr + iVar7 + 0x2a4));
			*(int *)((int)plr + iVar7 + 0x70) = EndDir;
			*(undefined4 *)((int)plr + iVar7 + 0x1e4) = 0;
			*(undefined4 *)((int)plr + iVar7 + 0x1e8) = 0;
			*(undefined4 *)((int)plr + iVar7 + 0x1ec) = 0;
			CheckEFlag(pnum, 0);
			if (pnum == myplr) {
				if (**(int **)(iVar4 + -0x766c) == 0) {
					iVar4 = abs(ScrollStruct_1012f2e8._sdx);
					if ((1 < iVar4) || (iVar4 = abs(ScrollStruct_1012f2e8._sdy), ScrollStruct_1012f2e8._sdir = sdir, 1 < iVar4)) {
						ScrollStruct_1012f2e8._sdir = 0;
					}
				} else {
					iVar4 = abs(ScrollStruct_1012f2e8._sdx);
					if ((2 < iVar4) || (iVar4 = abs(ScrollStruct_1012f2e8._sdy), ScrollStruct_1012f2e8._sdir = sdir, 2 < iVar4)) {
						ScrollStruct_1012f2e8._sdir = 0;
					}
				}
			}
		}
	} else {
		SyncPlrKill(pnum, -1);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void StartWalk2(int pnum, int xvel, int yvel, int xoff, int yoff, int xadd, int yadd, int EndDir, int sdir)

{
	int *piVar1;
	int *piVar2;
	int iVar3;
	int iVar4;
	BOOL BVar5;
	int iVar6;
	int iVar7;
	int in_stack_00000038;

	iVar6 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar6 = 0x100f8fd0;
		app_fatal("StartWalk2: illegal player %d", pnum);
	}
	iVar7 = pnum * 0x55ec;
	if (((*(char *)((int)plr + iVar7 + 0x139) == '\0') || (*(int *)((int)plr + iVar7 + 0x194) != 0)) || (pnum != myplr)) {
		SetPlayerOld(pnum);
		piVar1 = (int *)((int)plr + iVar7 + 0x38);
		iVar3 = *piVar1;
		piVar2 = (int *)((int)plr + iVar7 + 0x3c);
		iVar4 = *piVar2;
		BVar5 = PlrDirOK(pnum, EndDir);
		if (BVar5 != 0) {
			*(int *)((int)plr + iVar7 + 0x40) = xadd + iVar3;
			*(int *)((int)plr + iVar7 + 0x44) = yadd + iVar4;
			if (pnum == myplr) {
				ScrollStruct_1012f2e8._sdx = *piVar1 - **(int **)(iVar6 + -0x77b0);
				ScrollStruct_1012f2e8._sdy = *piVar2 - **(int **)(iVar6 + -0x77b4);
			}
			*(char *)(_DAT_1012f1b8 + *piVar1 * 0x70 + *piVar2) = -1 - (char)pnum;
			*(int *)((int)plr + iVar7 + 0x1d0) = *piVar1;
			*(int *)((int)plr + iVar7 + 0x1d4) = *piVar2;
			*piVar1 = xadd + iVar3;
			*piVar2 = yadd + iVar4;
			*(char *)(_DAT_1012f1b8 + *piVar1 * 0x70 + *piVar2) = (char)pnum + '\x01';
			*(int *)((int)plr + iVar7 + 0x60) = xoff;
			*(int *)((int)plr + iVar7 + 100) = yoff;
			ChangeLightXY(*(int *)((int)plr + iVar7 + 0x9c), *piVar1, *piVar2);
			PM_ChangeLightOff(pnum);
			((PlayerStruct *)((int)plr + iVar7))->_pmode = 2;
			*(int *)((int)plr + iVar7 + 0x68) = xvel;
			*(int *)((int)plr + iVar7 + 0x6c) = yvel;
			*(int *)((int)plr + iVar7 + 0x1e4) = xoff << 8;
			*(int *)((int)plr + iVar7 + 0x1e8) = yoff << 8;
			*(int *)((int)plr + iVar7 + 0x1d8) = EndDir;
			if ((*(uint *)((int)plr + iVar7 + 0x214) & 2) == 0) {
				LoadPlrGFX(pnum, (player_graphic)0x2);
			}
			NewPlrAnim(pnum, (BYTE *)(&((PlayerStruct *)((int)plr + iVar7))->_pmode + EndDir * 2 + 0x98),
			    *(int *)((int)plr + iVar7 + 0x2a0), 0, *(int *)((int)plr + iVar7 + 0x2a4));
			*(int *)((int)plr + iVar7 + 0x70) = EndDir;
			*(undefined4 *)((int)plr + iVar7 + 0x1ec) = 0;
			if (EndDir == 7) {
				CheckEFlag(pnum, 1);
			} else {
				CheckEFlag(pnum, 0);
			}
			if (pnum == myplr) {
				if (**(int **)(iVar6 + -0x766c) == 0) {
					iVar6 = abs(ScrollStruct_1012f2e8._sdx);
					if ((iVar6 < 2) && (iVar6 = abs(ScrollStruct_1012f2e8._sdy), iVar6 < 2)) {
						ScrollStruct_1012f2e8._sdir = in_stack_00000038;
					} else {
						ScrollStruct_1012f2e8._sdir = 0;
					}
				} else {
					iVar6 = abs(ScrollStruct_1012f2e8._sdx);
					if ((iVar6 < 3) && (iVar6 = abs(ScrollStruct_1012f2e8._sdy), iVar6 < 3)) {
						ScrollStruct_1012f2e8._sdir = in_stack_00000038;
					} else {
						ScrollStruct_1012f2e8._sdir = 0;
					}
				}
			}
		}
	} else {
		SyncPlrKill(pnum, -1);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void StartWalk3(int pnum,
    int xvel,
    int yvel,
    int xoff,
    int yoff,
    int xadd,
    int yadd,
    int mapx,
    int mapy,
    int EndDir,
    int sdir)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	char *pcVar4;
	BOOL BVar5;
	int iVar6;
	int iVar7;
	char cVar8;
	int iVar9;
	int y;
	int in_stack_00000038;
	int dir;
	int in_stack_00000040;

	iVar6 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar6 = 0x100f8fd0;
		app_fatal("StartWalk3: illegal player %d", pnum);
	}
	iVar9 = pnum * 0x55ec;
	if (((*(char *)((int)plr + iVar9 + 0x139) == '\0') || (*(int *)((int)plr + iVar9 + 0x194) != 0)) || (pnum != myplr)) {
		SetPlayerOld(pnum);
		piVar1 = (int *)((int)plr + iVar9 + 0x38);
		piVar2 = (int *)((int)plr + iVar9 + 0x3c);
		xadd = xadd + *piVar1;
		yadd = yadd + *piVar2;
		mapx = mapx + *piVar1;
		y = in_stack_00000038 + *piVar2;
		BVar5 = PlrDirOK(pnum, dir);
		if (BVar5 != 0) {
			*(int *)((int)plr + iVar9 + 0x40) = xadd;
			*(int *)((int)plr + iVar9 + 0x44) = yadd;
			if (pnum == myplr) {
				ScrollStruct_1012f2e8._sdx = *piVar1 - **(int **)(iVar6 + -0x77b0);
				ScrollStruct_1012f2e8._sdy = *piVar2 - **(int **)(iVar6 + -0x77b4);
			}
			cVar8 = -1 - (char)pnum;
			piVar3 = *(int **)(iVar6 + -0x779c);
			pcVar4 = *(char **)(iVar6 + -0x7794);
			*(char *)(_DAT_1012f1b8 + *piVar1 * 0x70 + *piVar2) = cVar8;
			*(char *)(_DAT_1012f1b8 + xadd * 0x70 + yadd) = cVar8;
			*(int *)((int)plr + iVar9 + 0x1dc) = mapx;
			iVar7 = mapx * 0x70 + y;
			*(int *)((int)plr + iVar9 + 0x1e0) = y;
			*(byte *)(*piVar3 + iVar7) = *(byte *)(*piVar3 + iVar7) | 0x20;
			*(int *)((int)plr + iVar9 + 0x60) = xoff;
			*(int *)((int)plr + iVar9 + 100) = yoff;
			if (*pcVar4 != '\0') {
				ChangeLightXY(*(int *)((int)plr + iVar9 + 0x9c), mapx, y);
				PM_ChangeLightOff(pnum);
			}
			((PlayerStruct *)((int)plr + iVar9))->_pmode = 3;
			*(int *)((int)plr + iVar9 + 0x68) = xvel;
			*(int *)((int)plr + iVar9 + 0x6c) = yvel;
			*(int *)((int)plr + iVar9 + 0x1d0) = xadd;
			*(int *)((int)plr + iVar9 + 0x1d4) = yadd;
			*(int *)((int)plr + iVar9 + 0x1e4) = xoff << 8;
			*(int *)((int)plr + iVar9 + 0x1e8) = yoff << 8;
			*(int *)((int)plr + iVar9 + 0x1d8) = dir;
			if ((*(uint *)((int)plr + iVar9 + 0x214) & 2) == 0) {
				LoadPlrGFX(pnum, (player_graphic)0x2);
			}
			NewPlrAnim(pnum, (BYTE *)(&((PlayerStruct *)((int)plr + iVar9))->_pmode + dir * 2 + 0x98),
			    *(int *)((int)plr + iVar9 + 0x2a0), 0, *(int *)((int)plr + iVar9 + 0x2a4));
			*(int *)((int)plr + iVar9 + 0x70) = dir;
			*(undefined4 *)((int)plr + iVar9 + 0x1ec) = 0;
			CheckEFlag(pnum, 0);
			if (pnum == myplr) {
				if (**(int **)(iVar6 + -0x766c) == 0) {
					iVar6 = abs(ScrollStruct_1012f2e8._sdx);
					if ((iVar6 < 2) && (iVar6 = abs(ScrollStruct_1012f2e8._sdy), iVar6 < 2)) {
						ScrollStruct_1012f2e8._sdir = in_stack_00000040;
					} else {
						ScrollStruct_1012f2e8._sdir = 0;
					}
				} else {
					iVar6 = abs(ScrollStruct_1012f2e8._sdx);
					if ((iVar6 < 3) && (iVar6 = abs(ScrollStruct_1012f2e8._sdy), iVar6 < 3)) {
						ScrollStruct_1012f2e8._sdir = in_stack_00000040;
					} else {
						ScrollStruct_1012f2e8._sdir = 0;
					}
				}
			}
		}
	} else {
		SyncPlrKill(pnum, -1);
	}
	return;
}

void StartAttack(int pnum, int d)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar1 = 0x100f8fd0;
		app_fatal("StartAttack: illegal player %d", pnum);
	}
	iVar2 = pnum * 0x55ec;
	if (((*(char *)((int)plr + iVar2 + 0x139) != '\0') && (*(int *)((int)plr + iVar2 + 0x194) == 0)) && (pnum == **(int **)(iVar1 + -0x77ac))) {
		SyncPlrKill(pnum, -1);
		return;
	}
	if ((*(uint *)((int)plr + iVar2 + 0x214) & 4) == 0) {
		LoadPlrGFX(pnum, (player_graphic)0x4);
	}
	NewPlrAnim(pnum, (BYTE *)(&((PlayerStruct *)((int)plr + iVar2))->_pmode + d * 2 + 0xaa),
	    *(int *)((int)plr + iVar2 + 0x2e8), 0, *(int *)((int)plr + iVar2 + 0x2ec));
	((PlayerStruct *)((int)plr + iVar2))->_pmode = 4;
	FixPlayerLocation(pnum, d);
	SetPlayerOld(pnum);
	return;
}

void StartRangeAttack(int pnum, int d, int cx, int cy)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar1 = 0x100f8fd0;
		app_fatal("StartRangeAttack: illegal player %d", pnum);
	}
	iVar2 = pnum * 0x55ec;
	if (((*(char *)((int)plr + iVar2 + 0x139) != '\0') && (*(int *)((int)plr + iVar2 + 0x194) == 0)) && (pnum == **(int **)(iVar1 + -0x77ac))) {
		SyncPlrKill(pnum, -1);
		return;
	}
	if ((*(uint *)((int)plr + iVar2 + 0x214) & 4) == 0) {
		LoadPlrGFX(pnum, (player_graphic)0x4);
	}
	NewPlrAnim(pnum, (BYTE *)(&((PlayerStruct *)((int)plr + iVar2))->_pmode + d * 2 + 0xaa),
	    *(int *)((int)plr + iVar2 + 0x2e8), 0, *(int *)((int)plr + iVar2 + 0x2ec));
	((PlayerStruct *)((int)plr + iVar2))->_pmode = 5;
	FixPlayerLocation(pnum, d);
	SetPlayerOld(pnum);
	*(int *)((int)plr + iVar2 + 0x1d0) = cx;
	*(int *)((int)plr + iVar2 + 0x1d4) = cy;
	return;
}

void StartPlrBlock(int pnum, int dir)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar1 = 0x100f8fd0;
		app_fatal("StartPlrBlock: illegal player %d", pnum);
	}
	iVar2 = pnum * 0x55ec;
	if (((*(char *)((int)plr + iVar2 + 0x139) != '\0') && (*(int *)((int)plr + iVar2 + 0x194) == 0)) && (pnum == **(int **)(iVar1 + -0x77ac))) {
		SyncPlrKill(pnum, -1);
		return;
	}
	PlaySfxLoc(0x3d, *(int *)((int)plr + iVar2 + 0x38), *(int *)((int)plr + iVar2 + 0x3c));
	if ((*(uint *)((int)plr + iVar2 + 0x214) & 0x100) == 0) {
		LoadPlrGFX(pnum, (player_graphic)0x0);
	}
	NewPlrAnim(pnum, (BYTE *)(&((PlayerStruct *)((int)plr + iVar2))->_pmode + dir * 2 + 0x114),
	    *(int *)((int)plr + iVar2 + 0x490), 2, *(int *)((int)plr + iVar2 + 0x494));
	((PlayerStruct *)((int)plr + iVar2))->_pmode = 6;
	FixPlayerLocation(pnum, dir);
	SetPlayerOld(pnum);
	return;
}

// WARNING: Removing unreachable block (ram,0x1009484c)

void StartSpell(int pnum, int d, int cx, int cy)

{
	int *piVar1;
	byte bVar2;
	int iVar3;
	int iVar4;

	iVar3 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar3 = 0x100f8fd0;
		app_fatal("StartSpell: illegal player %d", pnum);
	}
	iVar4 = pnum * 0x55ec;
	if (((*(char *)((int)plr + iVar4 + 0x139) == '\0') || (*(int *)((int)plr + iVar4 + 0x194) != 0)) || (pnum != **(int **)(iVar3 + -0x77ac))) {
		if (**(char **)(iVar3 + -0x7794) != '\0') {
			bVar2 = *(byte *)(*(int *)((int)plr + iVar4 + 0xa4) * 0x38 + 0x1010efa2);
			if (bVar2 == 1) {
				if ((*(uint *)((int)plr + iVar4 + 0x214) & 0x10) == 0) {
					LoadPlrGFX(pnum, (player_graphic)0x10);
				}
				NewPlrAnim(pnum, (BYTE *)((int)plr + iVar4 + d * 8 + 0x2f4), *(int *)((int)plr + iVar4 + 0x3b4), 0,
				    *(int *)((int)plr + iVar4 + 0x3b8));
			} else {
				if (bVar2 == 0) {
					if ((*(uint *)((int)plr + iVar4 + 0x214) & 0x20) == 0) {
						LoadPlrGFX(pnum, (player_graphic)0x20);
					}
					NewPlrAnim(pnum, (BYTE *)((int)plr + iVar4 + d * 8 + 0x334), *(int *)((int)plr + iVar4 + 0x3b4), 0,
					    *(int *)((int)plr + iVar4 + 0x3b8));
				} else {
					if (bVar2 < 3) {
						if ((*(uint *)((int)plr + iVar4 + 0x214) & 0x40) == 0) {
							LoadPlrGFX(pnum, (player_graphic)0x40);
						}
						NewPlrAnim(pnum, (BYTE *)((int)plr + iVar4 + d * 8 + 0x374), *(int *)((int)plr + iVar4 + 0x3b4),
						    0, *(int *)((int)plr + iVar4 + 0x3b8));
					}
				}
			}
		}
		piVar1 = (int *)((int)plr + iVar4 + 0xa4);
		PlaySfxLoc((uint) * (byte *)(*piVar1 * 0x38 + 0x1010efc0), *(int *)((int)plr + iVar4 + 0x38),
		    *(int *)((int)plr + iVar4 + 0x3c));
		((PlayerStruct *)((int)plr + iVar4))->_pmode = 9;
		FixPlayerLocation(pnum, d);
		SetPlayerOld(pnum);
		*(int *)((int)plr + iVar4 + 0x1d0) = cx;
		*(int *)((int)plr + iVar4 + 0x1d4) = cy;
		iVar3 = GetSpellLevel(pnum, *piVar1);
		*(int *)((int)plr + iVar4 + 0x1dc) = iVar3;
		*(undefined4 *)((int)plr + iVar4 + 0x1ec) = 1;
	} else {
		SyncPlrKill(pnum, -1);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FixPlrWalkTags(int pnum)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char *pcVar6;
	int iVar7;
	int iVar8;

	if (3 < ((longlong)pnum & 0xffffffffU)) {
		app_fatal("FixPlrWalkTags: illegal player %d", (longlong)pnum);
	}
	iVar3 = *(int *)((int)plr + pnum * 0x55ec + 0x5c);
	iVar1 = *(int *)((int)plr + pnum * 0x55ec + 0x58);
	iVar7 = iVar3 + -1;
	while (iVar7 <= iVar3 + 1) {
		iVar8 = iVar1 + -1;
		iVar2 = (iVar1 + 2) - iVar8;
		iVar5 = iVar8 * 0x70;
		if (iVar8 <= iVar1 + 1) {
			do {
				if ((((-1 < iVar8) && (iVar8 < 0x70)) && (-1 < iVar7)) && (iVar7 < 0x70)) {
					pcVar6 = (char *)(iVar7 + _DAT_1012f1b8 + iVar5);
					iVar4 = (int)*pcVar6;
					if ((pnum + 1 == iVar4) || (-1 - pnum == iVar4)) {
						*pcVar6 = '\0';
					}
				}
				iVar5 = iVar5 + 0x70;
				iVar8 = iVar8 + 1;
				iVar2 = iVar2 + -1;
			} while (iVar2 != 0);
		}
		iVar7 = iVar7 + 1;
	}
	if (((-1 < iVar1) && (iVar1 < 0x6f)) && ((-1 < iVar3 && (iVar3 < 0x6f)))) {
		iVar7 = _DAT_1012f1bc + iVar1 * 0x70 + iVar3;
		*(byte *)(iVar7 + 0x70) = *(byte *)(iVar7 + 0x70) & 0xdf;
		iVar3 = _DAT_1012f1bc + iVar1 * 0x70 + iVar3;
		*(byte *)(iVar3 + 1) = *(byte *)(iVar3 + 1) & 0xdf;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void RemovePlrFromMap(int pnum)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	char *pcVar4;
	byte *pbVar5;
	int iVar6;
	int iVar7;
	longlong lVar8;

	iVar6 = pnum + 1;
	pnum = -1 - pnum;
	iVar7 = 1;
	do {
		lVar8 = 0x25;
		iVar3 = 0x70;
		do {
			iVar2 = iVar7 + _DAT_1012f1b8 + iVar3;
			if (pnum == (int)*(char *)(iVar2 + -1)) {
			LAB_10094b4c:
				pbVar5 = (byte *)(iVar7 + _DAT_1012f1bc + iVar3);
				bVar1 = *pbVar5;
				if ((bVar1 & 0x20) != 0) {
					*pbVar5 = bVar1 & 0xdf;
				}
			} else {
				if (pnum == (int)*(char *)(iVar2 + -0x70))
					goto LAB_10094b4c;
			}
			iVar2 = iVar7 + _DAT_1012f1b8 + iVar3 + 0x70;
			if (pnum == (int)*(char *)(iVar2 + -1)) {
			LAB_10094b9c:
				pbVar5 = (byte *)(iVar7 + _DAT_1012f1bc + iVar3 + 0x70);
				bVar1 = *pbVar5;
				if ((bVar1 & 0x20) != 0) {
					*pbVar5 = bVar1 & 0xdf;
				}
			} else {
				if (pnum == (int)*(char *)(iVar2 + -0x70))
					goto LAB_10094b9c;
			}
			iVar2 = iVar7 + _DAT_1012f1b8 + iVar3 + 0xe0;
			if (pnum == (int)*(char *)(iVar2 + -1)) {
			LAB_10094bf0:
				pbVar5 = (byte *)(iVar7 + _DAT_1012f1bc + iVar3 + 0xe0);
				bVar1 = *pbVar5;
				if ((bVar1 & 0x20) != 0) {
					*pbVar5 = bVar1 & 0xdf;
				}
			} else {
				if (pnum == (int)*(char *)(iVar2 + -0x70))
					goto LAB_10094bf0;
			}
			iVar3 = iVar3 + 0x150;
			lVar8 = lVar8 + -1;
		} while (lVar8 != 0);
		iVar7 = iVar7 + 1;
		if (0x6f < iVar7) {
			iVar7 = 0;
			do {
				lVar8 = 0xe;
				iVar3 = 0;
				do {
					pcVar4 = (char *)(iVar7 + _DAT_1012f1b8 + iVar3);
					iVar2 = (int)*pcVar4;
					if ((iVar6 == iVar2) || (pnum == iVar2)) {
						*pcVar4 = '\0';
					}
					pcVar4 = (char *)(iVar7 + _DAT_1012f1b8 + iVar3 + 0x70);
					iVar2 = (int)*pcVar4;
					if ((iVar6 == iVar2) || (pnum == iVar2)) {
						*pcVar4 = '\0';
					}
					pcVar4 = (char *)(iVar7 + _DAT_1012f1b8 + iVar3 + 0xe0);
					iVar2 = (int)*pcVar4;
					if ((iVar6 == iVar2) || (pnum == iVar2)) {
						*pcVar4 = '\0';
					}
					pcVar4 = (char *)(iVar7 + _DAT_1012f1b8 + iVar3 + 0x150);
					iVar2 = (int)*pcVar4;
					if ((iVar6 == iVar2) || (pnum == iVar2)) {
						*pcVar4 = '\0';
					}
					pcVar4 = (char *)(iVar7 + _DAT_1012f1b8 + iVar3 + 0x1c0);
					iVar2 = (int)*pcVar4;
					if ((iVar6 == iVar2) || (pnum == iVar2)) {
						*pcVar4 = '\0';
					}
					pcVar4 = (char *)(iVar7 + _DAT_1012f1b8 + iVar3 + 0x230);
					iVar2 = (int)*pcVar4;
					if ((iVar6 == iVar2) || (pnum == iVar2)) {
						*pcVar4 = '\0';
					}
					pcVar4 = (char *)(iVar7 + _DAT_1012f1b8 + iVar3 + 0x2a0);
					iVar2 = (int)*pcVar4;
					if ((iVar6 == iVar2) || (pnum == iVar2)) {
						*pcVar4 = '\0';
					}
					pcVar4 = (char *)(iVar7 + _DAT_1012f1b8 + iVar3 + 0x310);
					iVar2 = (int)*pcVar4;
					if ((iVar6 == iVar2) || (pnum == iVar2)) {
						*pcVar4 = '\0';
					}
					iVar3 = iVar3 + 0x380;
					lVar8 = lVar8 + -1;
				} while (lVar8 != 0);
				iVar7 = iVar7 + 1;
			} while (iVar7 < 0x70);
			return;
		}
	} while (true);
}

void StartPlrHit(int pnum, int dam, BOOL forcehit)

{
	char cVar1;
	int bDir;
	int iVar2;
	int iVar3;

	iVar2 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar2 = 0x100f8fd0;
		app_fatal("StartPlrHit: illegal player %d", pnum);
	}
	iVar3 = pnum * 0x55ec;
	if (((*(char *)((int)plr + iVar3 + 0x139) != '\0') && (*(int *)((int)plr + iVar3 + 0x194) == 0)) && (pnum == **(int **)(iVar2 + -0x77ac))) {
		SyncPlrKill(pnum, -1);
		return;
	}
	cVar1 = *(char *)((int)plr + iVar3 + 0x15c);
	if (cVar1 == '\0') {
		PlaySfxLoc(0x314, *(int *)((int)plr + iVar3 + 0x38), *(int *)((int)plr + iVar3 + 0x3c));
	} else {
		if (cVar1 == '\x01') {
			PlaySfxLoc(0x2a7, *(int *)((int)plr + iVar3 + 0x38), *(int *)((int)plr + iVar3 + 0x3c));
		} else {
			if (cVar1 == '\x02') {
				PlaySfxLoc(0x240, *(int *)((int)plr + iVar3 + 0x38), *(int *)((int)plr + iVar3 + 0x3c));
			}
		}
	}
	**(undefined4 **)(iVar2 + -0x76f0) = 1;
	if (((int)*(char *)((int)plr + iVar3 + 0x1b4) <= dam >> 6) || (forcehit != 0)) {
		bDir = *(int *)((int)plr + iVar3 + 0x70);
		if ((*(uint *)((int)plr + iVar3 + 0x214) & 8) == 0) {
			LoadPlrGFX(pnum, (player_graphic)0x8);
		}
		NewPlrAnim(pnum, (BYTE *)(&((PlayerStruct *)((int)plr + iVar3))->_pmode + bDir * 2 + 0xf0),
		    *(int *)((int)plr + iVar3 + 0x400), 0, *(int *)((int)plr + iVar3 + 0x404));
		((PlayerStruct *)((int)plr + iVar3))->_pmode = 7;
		FixPlayerLocation(pnum, bDir);
		*(undefined4 *)((int)plr + iVar3 + 0x1ec) = 1;
		FixPlrWalkTags(pnum);
		*(char *)(**(int **)(iVar2 + -0x7680) + *(int *)((int)plr + iVar3 + 0x38) * 0x70 + *(int *)((int)plr + iVar3 + 0x3c)) = (char)pnum + '\x01';
		SetPlayerOld(pnum);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void RespawnDeadItem(ItemStruct *itm, int x, int y)

{
	int iVar1;
	int iVar2;
	int i;
	int *piVar3;
	int *piVar4;
	int iVar5;
	longlong lVar6;

	iVar2 = 0x100f8fd0;
	if (_DAT_1013d984 < 0x7f) {
		i = FindGetItem(itm->IDidx, itm->_iCreateInfo, itm->_iSeed);
		if (-1 < i) {
			DrawInvMsg(*(char **)(iVar2 + -0x59a0));
			SyncGetItem(x, y, itm->IDidx, itm->_iCreateInfo, itm->_iSeed);
		}
		i = _DAT_1013d58c;
		*(char *)(**(int **)(iVar2 + -0x768c) + x * 0x70 + y) = (char)_DAT_1013d58c + '\x01';
		iVar5 = _DAT_1013d58c * 0x170;
		lVar6 = 0x2e;
		iVar1 = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		*(int *)(*(int *)(iVar2 + -0x71e0) + _DAT_1013d984 * 4) = _DAT_1013d58c;
		_DAT_1013d58c = iVar1;
		piVar3 = &itm->_iPLMR;
		piVar4 = (int *)(iVar5 + 0x1013d980);
		do {
			iVar2 = piVar3[3];
			piVar4[2] = piVar3[2];
			piVar4[3] = iVar2;
			lVar6 = lVar6 + -1;
			piVar3 = piVar3 + 2;
			piVar4 = piVar4 + 2;
		} while (lVar6 != 0);
		*(int *)(iVar5 + 0x1013d994) = x;
		*(int *)(iVar5 + 0x1013d998) = y;
		RespawnItem(i, 1);
		_DAT_1013d984 = _DAT_1013d984 + 1;
		itm->_itype = -1;
	}
	return;
}

void PlrDeadItem(int pnum, ItemStruct *itm, int xx, int yy)

{
	int i;
	BOOL BVar1;
	int i_00;
	int j;
	int *piVar2;
	int j_00;
	int *piVar3;
	int iVar4;
	longlong lVar5;

	if (itm->_itype != -1) {
		if (3 < (uint)pnum) {
			app_fatal("PlrDeadItem: illegal player %d", pnum);
		}
		pnum = pnum * 0x55ec;
		i = xx + *(int *)((int)plr + pnum + 0x38);
		j = yy + *(int *)((int)plr + pnum + 0x3c);
		if (((xx == 0) && (yy == 0)) || (BVar1 = ItemSpaceOk(i, j), BVar1 == 0)) {
			i = 1;
			do {
				j = -i;
				while (j <= i) {
					j_00 = j + *(int *)((int)plr + pnum + 0x3c);
					iVar4 = -i;
					while (iVar4 <= i) {
						i_00 = iVar4 + *(int *)((int)plr + pnum + 0x38);
						BVar1 = ItemSpaceOk(i_00, j_00);
						if (BVar1 != 0) {
							RespawnDeadItem(itm, i_00, j_00);
							lVar5 = 0x2e;
							piVar2 = &itm->_iPLMR;
							piVar3 = (int *)((int)plr + pnum + 0x53cc);
							do {
								i = piVar2[3];
								piVar3[2] = piVar2[2];
								piVar3[3] = i;
								lVar5 = lVar5 + -1;
								piVar2 = piVar2 + 2;
								piVar3 = piVar3 + 2;
							} while (lVar5 != 0);
							NetSendCmdPItem(0, '\v', (BYTE)i_00, (BYTE)j_00);
							return;
						}
						iVar4 = iVar4 + 1;
					}
					j = j + 1;
				}
				i = i + 1;
			} while (i < 0x32);
		} else {
			RespawnDeadItem(itm, i, j);
			lVar5 = 0x2e;
			piVar2 = &itm->_iPLMR;
			piVar3 = (int *)((int)plr + pnum + 0x53cc);
			do {
				iVar4 = piVar2[3];
				piVar3[2] = piVar2[2];
				piVar3[3] = iVar4;
				lVar5 = lVar5 + -1;
				piVar2 = piVar2 + 2;
				piVar3 = piVar3 + 2;
			} while (lVar5 != 0);
			NetSendCmdPItem(0, '\v', (BYTE)i, (BYTE)j);
		}
	}
	return;
}

void StartPlayerKill(int pnum, int earflag)

{
	char *pcVar1;
	bool bVar2;
	char cVar3;
	undefined4 *puVar4;
	int *piVar5;
	uint uVar6;
	int iVar7;
	int iVar8;
	undefined4 uVar9;
	int width;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 unaff_r21;
	ItemStruct *itm;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	PlayerStruct *pPVar10;
	undefined8 unaff_r27;
	int iVar11;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffe28;
	undefined in_stack_fffffe2f;
	undefined4 in_stack_fffffe3c;
	undefined4 in_stack_fffffe40;
	undefined4 in_stack_fffffe44;
	undefined4 in_stack_fffffe48;
	undefined4 in_stack_fffffe4c;
	undefined4 in_stack_fffffe50;
	undefined4 in_stack_fffffe54;
	ItemStruct local_1a8;
	undefined4 local_2c;
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

	iVar7 = 0x100f8fd0;
	local_2c = (undefined4)((ulonglong)unaff_r21 >> 0x20);
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
	iVar11 = pnum * 0x55ec;
	pPVar10 = (PlayerStruct *)((int)plr + iVar11);
	if ((0 < *(int *)((int)plr + iVar11 + 0x194)) || (pPVar10->_pmode != 8)) {
		if (myplr == pnum) {
			iVar7 = 0x100f8fd0;
			NetSendCmdParam1(1, '&', (WORD)earflag);
		}
		bVar2 = false;
		if ((1 < **(byte **)(iVar7 + -0x77f0)) && (*(int *)((int)plr + iVar11 + 0x34) == 0x10)) {
			bVar2 = true;
		}
		if (3 < (uint)pnum) {
			app_fatal(*(char **)(iVar7 + -0x59a8), pnum);
		}
		pcVar1 = (char *)((int)plr + iVar11 + 0x15c);
		cVar3 = *pcVar1;
		if (cVar3 == '\0') {
			PlaySfxLoc(0xb, *(int *)((int)plr + iVar11 + 0x38), *(int *)((int)plr + iVar11 + 0x3c));
		} else {
			if (cVar3 == '\x01') {
				PlaySfxLoc(0x2aa, *(int *)((int)plr + iVar11 + 0x38), *(int *)((int)plr + iVar11 + 0x3c));
			} else {
				if (cVar3 == '\x02') {
					PlaySfxLoc(0x243, *(int *)((int)plr + iVar11 + 0x38), *(int *)((int)plr + iVar11 + 0x3c));
				}
			}
		}
		if (*(int *)((int)plr + iVar11 + 0x78) != 0) {
			*(undefined4 *)((int)plr + iVar11 + 0x78) = 0;
			*(undefined4 *)((int)plr + iVar11 + 0x214) = 0;
			SetPlrAnims(pnum);
		}
		if ((*(uint *)((int)plr + iVar11 + 0x214) & 0x80) == 0) {
			LoadPlrGFX(pnum, (player_graphic)0x80);
		}
		uVar9 = 1;
		width = *(int *)((int)plr + iVar11 + 0x44c);
		NewPlrAnim(pnum, (BYTE *)(&pPVar10->_pmode + *(int *)((int)plr + iVar11 + 0x70) * 2 + 0x102),
		    *(int *)((int)plr + iVar11 + 0x448), 1, width);
		pPVar10->_pmode = 8;
		*(undefined *)((int)plr + iVar11 + 0x138) = 0;
		*(undefined *)((int)plr + iVar11 + 0x139) = 1;
		SetPlayerHitPoints(pnum, 0);
		*(undefined4 *)((int)plr + iVar11 + 0x1ec) = 1;
		if (((pnum != myplr) && (earflag == 0)) && (!bVar2)) {
			*(undefined4 *)((int)plr + iVar11 + 0x4a0) = 0xffffffff;
			*(undefined4 *)((int)plr + iVar11 + 0x610) = 0xffffffff;
			*(undefined4 *)((int)plr + iVar11 + 0x780) = 0xffffffff;
			*(undefined4 *)((int)plr + iVar11 + 0x8f0) = 0xffffffff;
			*(undefined4 *)((int)plr + iVar11 + 0xa60) = 0xffffffff;
			*(undefined4 *)((int)plr + iVar11 + 0xbd0) = 0xffffffff;
			*(undefined4 *)((int)plr + iVar11 + 0xd40) = 0xffffffff;
			CalcPlrInv(pnum, 0);
		}
		if ((uint) * *(byte **)(iVar7 + -0x77e4) == *(uint *)((int)plr + iVar11 + 0x34)) {
			FixPlayerLocation(pnum, *(int *)((int)plr + iVar11 + 0x70));
			RemovePlrFromMap(pnum);
			iVar8 = *(int *)((int)plr + iVar11 + 0x38) * 0x70 + *(int *)((int)plr + iVar11 + 0x3c);
			*(byte *)(**(int **)(iVar7 + -0x779c) + iVar8) = *(byte *)(**(int **)(iVar7 + -0x779c) + iVar8) | 4;
			SetPlayerOld(pnum);
			if (pnum == myplr) {
				puVar4 = *(undefined4 **)(iVar7 + -0x6f8c);
				**(undefined4 **)(iVar7 + -0x76f0) = 1;
				piVar5 = *(int **)(iVar7 + -0x7744);
				*puVar4 = 0x1e;
				if (0xb < *piVar5) {
					uVar9 = 0;
					PlrDeadItem(pnum, (ItemStruct *)((int)plr + iVar11 + 0x53d4), 0, 0);
					NewCursor(1);
				}
				if ((!bVar2) && (DropHalfPlayersGold(pnum), earflag != -1)) {
					if (earflag == 0) {
						itm = (ItemStruct *)((int)plr + iVar11 + 0x498);
						iVar7 = 6;
						do {
							uVar6 = (*(int *)((int)plr + iVar11 + 0x70) + iVar7) * 4 & 0x1c;
							PlrDeadItem(pnum, itm, *(int *)(&DAT_1010c890 + uVar6), *(int *)(&DAT_1010c8b0 + uVar6));
							bVar2 = iVar7 != 0;
							itm = itm + 1;
							iVar7 = iVar7 + -1;
						} while (bVar2);
						CalcPlrInv(pnum, 0);
					} else {
						SetPlrHandItem(&local_1a8, 0x17);
						wsprintf((int)local_1a8._iName, *(undefined4 *)(iVar7 + -0x59ac), iVar11 + 0x10186ffc, uVar9,
						    width, in_r8, in_r9, in_r10, in_stack_fffffe28, in_stack_fffffe2f, in_stack_fffffe3c,
						    in_stack_fffffe40, in_stack_fffffe44, in_stack_fffffe48, in_stack_fffffe4c,
						    in_stack_fffffe50, in_stack_fffffe54);
						cVar3 = *pcVar1;
						if (cVar3 == '\x02') {
							local_1a8._iCurs = 0x13;
						} else {
							if (cVar3 == '\0') {
								local_1a8._iCurs = 0x14;
							} else {
								if (cVar3 == '\x01') {
									local_1a8._iCurs = 0x15;
								}
							}
						}
						local_1a8._iCreateInfo = (ushort)((int)*(char *)((int)plr + iVar11 + 0x13c) << 8) | (short)*(char *)((int)plr + iVar11 + 0x13d);
						local_1a8._iSeed = (int)*(char *)((int)plr + iVar11 + 0x141) | (int)*(char *)((int)plr + iVar11 + 0x140) << 8 | (int)*(char *)((int)plr + iVar11 + 0x13e) << 0x18 | (int)*(char *)((int)plr + iVar11 + 0x13f) << 0x10;
						local_1a8._ivalue = (int)*(char *)((int)plr + iVar11 + 0x1b4);
						iVar7 = FindGetItem(0x17, local_1a8._iCreateInfo, local_1a8._iSeed);
						if (iVar7 == -1) {
							PlrDeadItem(pnum, &local_1a8, 0, 0);
						}
					}
				}
			}
		}
		SetPlayerHitPoints(pnum, 0);
	}
	return;
}

void DropHalfPlayersGold(int pnum)

{
	int *piVar1;
	int iVar2;
	undefined8 uVar3;
	int iVar4;
	ItemStruct *h;
	int *piVar5;
	int iVar6;
	int iv;
	PlayerStruct *pPVar7;

	uVar3 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		app_fatal("DropHalfPlayersGold: illegal player %d", pnum);
	}
	iVar2 = pnum * 0x55ec;
	pPVar7 = (PlayerStruct *)((int)plr + iVar2);
	piVar1 = (int *)((int)plr + iVar2 + 0x1c8);
	h = (ItemStruct *)((int)plr + iVar2 + 0x53d4);
	iv = 0;
	iVar6 = *piVar1 >> 1;
	while (true) {
		iVar4 = (int)uVar3;
		if ((7 < iv) || (iVar6 < 1))
			break;
		piVar5 = &pPVar7->_pmode + iv * 0x5c;
		if (piVar5[0x1217] == 0xb) {
			iVar4 = piVar5[0x1246];
			if (iVar4 != 5000) {
				if (iVar6 < iVar4) {
					piVar5[0x1246] = iVar4 - iVar6;
					SetSpdbarGoldCurs(pnum, iv);
					SetPlrHandItem(h, 0);
					GetGoldSeed(pnum, h);
					SetPlrHandGoldCurs(h);
					*(int *)((int)plr + iVar2 + 0x5498) = iVar6;
					PlrDeadItem(pnum, h, 0, 0);
					iVar6 = 0;
				} else {
					iVar6 = iVar6 - iVar4;
					RemoveSpdBarItem(pnum, iv);
					SetPlrHandItem(h, 0);
					GetGoldSeed(pnum, h);
					SetPlrHandGoldCurs(h);
					*(int *)((int)plr + iVar2 + 0x5498) = piVar5[0x1246];
					PlrDeadItem(pnum, h, 0, 0);
					iv = -1;
				}
			}
		}
		iv = iv + 1;
	}
	if (0 < iVar6) {
		iv = 0;
		while (true) {
			iVar4 = (int)uVar3;
			if ((7 < iv) || (iVar6 < 1))
				break;
			piVar5 = &pPVar7->_pmode + iv * 0x5c;
			if (piVar5[0x1217] == 0xb) {
				iVar4 = piVar5[0x1246];
				if (iVar6 < iVar4) {
					piVar5[0x1246] = iVar4 - iVar6;
					SetSpdbarGoldCurs(pnum, iv);
					SetPlrHandItem(h, 0);
					GetGoldSeed(pnum, h);
					SetPlrHandGoldCurs(h);
					*(int *)((int)plr + iVar2 + 0x5498) = iVar6;
					PlrDeadItem(pnum, h, 0, 0);
					iVar6 = 0;
				} else {
					iVar6 = iVar6 - iVar4;
					RemoveSpdBarItem(pnum, iv);
					SetPlrHandItem(h, 0);
					GetGoldSeed(pnum, h);
					SetPlrHandGoldCurs(h);
					*(int *)((int)plr + iVar2 + 0x5498) = piVar5[0x1246];
					PlrDeadItem(pnum, h, 0, 0);
					iv = -1;
				}
			}
			iv = iv + 1;
		}
	}
	**(undefined4 **)(iVar4 + -0x76bc) = 0xff;
	if (0 < iVar6) {
		iv = 0;
		while (true) {
			if ((*(int *)((int)plr + iVar2 + 0x4828) <= iv) || (iVar6 < 1))
				break;
			piVar5 = &pPVar7->_pmode + iv * 0x5c;
			if (piVar5[0x3ac] == 0xb) {
				iVar4 = piVar5[0x3db];
				if (iVar4 != 5000) {
					if (iVar6 < iVar4) {
						piVar5[0x3db] = iVar4 - iVar6;
						SetGoldCurs(pnum, iv);
						SetPlrHandItem(h, 0);
						GetGoldSeed(pnum, h);
						SetPlrHandGoldCurs(h);
						*(int *)((int)plr + iVar2 + 0x5498) = iVar6;
						PlrDeadItem(pnum, h, 0, 0);
						iVar6 = 0;
					} else {
						iVar6 = iVar6 - iVar4;
						RemoveInvItem(pnum, iv);
						SetPlrHandItem(h, 0);
						GetGoldSeed(pnum, h);
						SetPlrHandGoldCurs(h);
						*(int *)((int)plr + iVar2 + 0x5498) = piVar5[0x3db];
						PlrDeadItem(pnum, h, 0, 0);
						iv = -1;
					}
				}
			}
			iv = iv + 1;
		}
		if (0 < iVar6) {
			iv = 0;
			while ((iv < *(int *)((int)plr + iVar2 + 0x4828) && (0 < iVar6))) {
				piVar5 = &pPVar7->_pmode + iv * 0x5c;
				if (piVar5[0x3ac] == 0xb) {
					iVar4 = piVar5[0x3db];
					if (iVar6 < iVar4) {
						piVar5[0x3db] = iVar4 - iVar6;
						SetGoldCurs(pnum, iv);
						SetPlrHandItem(h, 0);
						GetGoldSeed(pnum, h);
						SetPlrHandGoldCurs(h);
						*(int *)((int)plr + iVar2 + 0x5498) = iVar6;
						PlrDeadItem(pnum, h, 0, 0);
						iVar6 = 0;
					} else {
						iVar6 = iVar6 - iVar4;
						RemoveInvItem(pnum, iv);
						SetPlrHandItem(h, 0);
						GetGoldSeed(pnum, h);
						SetPlrHandGoldCurs(h);
						*(int *)((int)plr + iVar2 + 0x5498) = piVar5[0x3db];
						PlrDeadItem(pnum, h, 0, 0);
						iv = -1;
					}
				}
				iv = iv + 1;
			}
		}
	}
	iVar6 = CalculateGold(pnum);
	*piVar1 = iVar6;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SyncPlrKill(int pnum, int earflag)

{
	ulonglong uVar1;
	int iVar2;
	int *piVar3;

	if ((*(int *)((int)plr + pnum * 0x55ec + 0x194) == 0) && (currlevel == 0)) {
		SetPlayerHitPoints(pnum, 0x40);
	} else {
		piVar3 = (int *)&DAT_1014939c;
		uVar1 = (ulonglong)_DAT_10149b70;
		if (0 < (int)_DAT_10149b70) {
			do {
				iVar2 = *piVar3 * 0xb4;
				if (((*(int *)(&DAT_10149b74 + iVar2) == 0xd) && (pnum == *(int *)(iVar2 + 0x10149bec))) && (*(int *)(iVar2 + 0x10149ba8) == 0)) {
					if (earflag == -1) {
						return;
					}
					*(int *)(iVar2 + 0x10149c24) = earflag;
					return;
				}
				piVar3 = piVar3 + 1;
				uVar1 = uVar1 - 1;
			} while (uVar1 != 0);
		}
		SetPlayerHitPoints(pnum, 0);
		StartPlayerKill(pnum, earflag);
	}
	return;
}

void thunk_StartPlayerKill(int pnum, int earflag)

{
	StartPlayerKill(pnum, earflag);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void RemovePlrMissiles(int pnum)

{
	int mi;
	int iVar1;
	int i;
	int *piVar2;

	i = 0x100f8fd0;
	if ((currlevel != 0) && (pnum == myplr)) {
		if ((*(int *)(myplr * 0xe8 + 0x10151a50) != 1) || (*(int *)(myplr * 0xe8 + 0x10151a54) != 0)) {
			i = 0x100f8fd0;
			M_StartKill(myplr, myplr);
			mi = myplr * 0xe8;
			AddDead(*(int *)(mi + 0x10151a50), *(int *)(mi + 0x10151a54), *(char *)(*(int *)(mi + 0x10151b10) + 0x1fd),
			    *(int *)(mi + 0x10151a78));
			*(undefined2 *)(**(int **)(i + -0x767c) + *(int *)(myplr * 0xe8 + 0x10151a50) * 0xe0 + *(int *)(myplr * 0xe8 + 0x10151a54) * 2) = 0;
			*(undefined4 *)(myplr * 0xe8 + 0x10151aa0) = 1;
			DeleteMonsterList();
		}
	}
	piVar2 = *(int **)(i + -0x7660);
	i = 0;
	while (i < _DAT_10149b70) {
		mi = *piVar2;
		iVar1 = mi * 0xb4;
		if ((*(int *)(&DAT_10149b74 + iVar1) == 0x1e) && (pnum == *(int *)(iVar1 + 0x10149bec))) {
			*(undefined4 *)(*(int *)(iVar1 + 0x10149c0c) * 0xe8 + 0x10151a34) = *(undefined4 *)(iVar1 + 0x10149c08);
		}
		iVar1 = mi * 0xb4;
		if ((*(int *)(&DAT_10149b74 + iVar1) == 0xd) && (pnum == *(int *)(iVar1 + 0x10149bec))) {
			ClearMissileSpot(mi);
			DeleteMissile(mi, i);
		}
		if ((*(int *)(&DAT_10149b74 + iVar1) == 0x22) && (pnum == *(int *)(iVar1 + 0x10149bec))) {
			ClearMissileSpot(mi);
			DeleteMissile(mi, i);
		}
		piVar2 = piVar2 + 1;
		i = i + 1;
	}
	return;
}

void InitLevelChange(int pnum)

{
	int iVar1;
	longlong lVar2;
	undefined8 in_r4;
	ulonglong in_r5;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;

	lVar2 = (longlong)pnum;
	iVar1 = 0x100f8fd0;
	RemovePlrMissiles(pnum);
	if ((pnum == myplr) && (DAT_1014919d != '\0')) {
		DAT_1014919d = '\0';
		sfx_stop();
		FUN_1005bd38(lVar2, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8);
	}
	RemovePlrFromMap(pnum);
	SetPlayerOld(pnum);
	if (pnum == myplr) {
		*(char *)(**(int **)(iVar1 + -0x7680) + *(int *)((int)plr + myplr * 0x55ec + 0x38) * 0x70 + *(int *)((int)plr + myplr * 0x55ec + 0x3c)) = (char)myplr + '\x01';
	} else {
		*(undefined *)((int)plr + pnum * 0x55ec + *(int *)((int)plr + pnum * 0x55ec + 0x34) + 0x1f0) = 1;
	}
	ClrPlrPath(pnum);
	iVar1 = pnum * 0x55ec;
	*(undefined4 *)((int)plr + iVar1 + 0x20) = 0xffffffff;
	*(undefined *)((int)plr + iVar1 + 0x13b) = 1;
	if (pnum == myplr) {
		*(undefined *)((int)plr + iVar1 + 0x5592) = 10;
	}
	return;
}

void StartNewLvl(int pnum, int fom, int lvl)

{
	undefined4 *puVar1;
	int iVar2;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	iVar2 = 0x100f8fd0;
	InitLevelChange(pnum);
	if (3 < ((longlong)pnum & 0xffffffffU)) {
		app_fatal("StartNewLvl: illegal player %d", (longlong)pnum);
	}
	if (3 < (uint)myplr) {
		app_fatal("StartNewLvl: illegal player %d");
	}
	if (fom - 0x402U < 8) {
		// WARNING: Could not recover jumptable at 0x10095e6c. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(*(int *)(iVar2 + -0x59bc) + (fom - 0x402U) * 4))();
		return;
	}
	app_fatal(*(char **)(iVar2 + -0x59b8));
	if (pnum == myplr) {
		puVar1 = *(undefined4 **)(iVar2 + -0x780c);
		((PlayerStruct *)((int)plr + pnum * 0x55ec))->_pmode = 10;
		*(undefined *)((int)plr + pnum * 0x55ec + 0x139) = 1;
		PostMessage((char)*puVar1, (char)fom, 0, 0, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf,
		    local_3c);
		if (1 < **(byte **)(local_3c + -0x77f0)) {
			NetSendCmdParam2(1, '\x1e', (WORD)fom, (WORD)lvl);
		}
	}
	return;
}

void RestartTownLvl(int pnum)

{
	undefined4 *puVar1;
	int iVar2;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	int iVar3;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	iVar2 = 0x100f8fd0;
	InitLevelChange(pnum);
	if (3 < (uint)pnum) {
		app_fatal(*(char **)(iVar2 + -0x59c0), pnum);
	}
	iVar3 = pnum * 0x55ec;
	*(undefined4 *)((int)plr + iVar3 + 0x34) = 0;
	*(undefined *)((int)plr + iVar3 + 0x139) = 0;
	SetPlayerHitPoints(pnum, 0x40);
	*(undefined4 *)((int)plr + iVar3 + 0x1a8) = 0;
	*(int *)((int)plr + iVar3 + 0x1a0) = *(int *)((int)plr + iVar3 + 0x1a8) - (*(int *)((int)plr + iVar3 + 0x1ac) - *(int *)((int)plr + iVar3 + 0x1a4));
	CalcPlrInv(pnum, 0);
	if (pnum == **(int **)(iVar2 + -0x77ac)) {
		puVar1 = *(undefined4 **)(iVar2 + -0x780c);
		((PlayerStruct *)((int)plr + iVar3))->_pmode = 10;
		*(undefined *)((int)plr + iVar3 + 0x139) = 1;
		PostMessage(
		    (char)*puVar1, 9, 0, 0, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	}
	return;
}

void StartWarpLvl(int pnum, int pidx)

{
	int iVar1;
	undefined4 *puVar2;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	iVar1 = 0x100f8fd0;
	InitLevelChange(pnum);
	if (**(char **)(iVar1 + -0x77f0) != '\x01') {
		puVar2 = (undefined4 *)((int)plr + pnum * 0x55ec + 0x34);
		if (*(int *)((int)plr + pnum * 0x55ec + 0x34) == 0) {
			*puVar2 = *(undefined4 *)(*(int *)(iVar1 + -29000) + pidx * 0x18 + 0xc);
		} else {
			*puVar2 = 0;
		}
	}
	if (pnum == **(int **)(iVar1 + -0x77ac)) {
		SetCurrentPortal(pidx);
		puVar2 = *(undefined4 **)(iVar1 + -0x780c);
		((PlayerStruct *)((int)plr + pnum * 0x55ec))->_pmode = 10;
		*(undefined *)((int)plr + pnum * 0x55ec + 0x139) = 1;
		PostMessage(
		    (char)*puVar2, 6, 0, 0, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	}
	return;
}

BOOL PM_DoStand(int pnum)

{
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL PM_DoWalk(int pnum)

{
	int iVar1;
	int *piVar2;
	int iVar3;
	BOOL BVar4;
	int iVar5;
	int *piVar6;
	int *piVar7;
	int iVar8;

	iVar3 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar3 = 0x100f8fd0;
		app_fatal("PM_DoWalk: illegal player %d", pnum);
	}
	iVar8 = pnum * 0x55ec;
	iVar5 = *(int *)((int)plr + iVar8 + 0x8c);
	if (((iVar5 == 3) || ((iVar1 = *(int *)((int)plr + iVar8 + 0x2a0), iVar1 == 8 && (iVar5 == 7)))) || ((iVar1 != 8 && (iVar5 == 4)))) {
		PlaySfxLoc(0, *(int *)((int)plr + iVar8 + 0x38), *(int *)((int)plr + iVar8 + 0x3c));
	}
	iVar5 = 8;
	if (**(char **)(iVar3 + -0x77e4) != '\0') {
		iVar5 = *(int *)(*(int *)(iVar3 + -0x6f90) + (int)*(char *)((int)plr + iVar8 + 0x15c) * 4);
	}
	if (iVar5 == *(int *)((int)plr + iVar8 + 0x1ec)) {
		piVar7 = (int *)((int)plr + iVar8 + 0x38);
		piVar6 = (int *)((int)plr + iVar8 + 0x3c);
		*(undefined *)(_DAT_1012f1b8 + *(int *)((int)plr + iVar8 + 0x38) * 0x70 + *(int *)((int)plr + iVar8 + 0x3c)) = 0;
		*(int *)((int)plr + iVar8 + 0x38) = *(int *)((int)plr + iVar8 + 0x38) + *(int *)((int)plr + iVar8 + 0x1d0);
		*(int *)((int)plr + iVar8 + 0x3c) = *(int *)((int)plr + iVar8 + 0x3c) + *(int *)((int)plr + iVar8 + 0x1d4);
		*(char *)(_DAT_1012f1b8 + *(int *)((int)plr + iVar8 + 0x38) * 0x70 + *(int *)((int)plr + iVar8 + 0x3c)) = (char)pnum + '\x01';
		if (leveltype != '\0') {
			ChangeLightXY(*(int *)((int)plr + iVar8 + 0x9c), *piVar7, *piVar6);
			ChangeVisionXY(*(int *)((int)plr + iVar8 + 0xa0), *piVar7, *piVar6);
		}
		if ((pnum == **(int **)(iVar3 + -0x77ac)) && (ScrollStruct_1012f2e8._sdir != 0)) {
			piVar2 = *(int **)(iVar3 + -0x77b4);
			**(int **)(iVar3 + -0x77b0) = *piVar7 - ScrollStruct_1012f2e8._sdx;
			*piVar2 = *piVar6 - ScrollStruct_1012f2e8._sdy;
		}
		if (*(char *)((int)plr + iVar8 + 4) == -1) {
			StartStand(pnum, *(int *)((int)plr + iVar8 + 0x1d8));
		} else {
			StartWalkStand(pnum);
		}
		ClearPlrPVars(pnum);
		if (leveltype != '\0') {
			ChangeLightOff(*(int *)((int)plr + iVar8 + 0x9c), 0, 0);
		}
		BVar4 = 1;
	} else {
		PM_ChangeOffset(pnum);
		BVar4 = 0;
	}
	return BVar4;
}

BOOL PM_DoWalk2(int pnum)

{
	int iVar1;
	int *piVar2;
	int iVar3;
	BOOL BVar4;
	int iVar5;
	int iVar6;

	iVar3 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar3 = 0x100f8fd0;
		app_fatal("PM_DoWalk2: illegal player %d", pnum);
	}
	iVar6 = pnum * 0x55ec;
	iVar5 = *(int *)((int)plr + iVar6 + 0x8c);
	if (((iVar5 == 3) || ((iVar1 = *(int *)((int)plr + iVar6 + 0x2a0), iVar1 == 8 && (iVar5 == 7)))) || ((iVar1 != 8 && (iVar5 == 4)))) {
		PlaySfxLoc(0, *(int *)((int)plr + iVar6 + 0x38), *(int *)((int)plr + iVar6 + 0x3c));
	}
	iVar5 = 8;
	if (**(char **)(iVar3 + -0x77e4) != '\0') {
		iVar5 = *(int *)(*(int *)(iVar3 + -0x6f90) + (int)*(char *)((int)plr + iVar6 + 0x15c) * 4);
	}
	if (iVar5 == *(int *)((int)plr + iVar6 + 0x1ec)) {
		*(undefined *)(**(int **)(iVar3 + -0x7680) + *(int *)((int)plr + iVar6 + 0x1d0) * 0x70 + *(int *)((int)plr + iVar6 + 0x1d4)) = 0;
		if (leveltype != '\0') {
			ChangeLightXY(
			    *(int *)((int)plr + iVar6 + 0x9c), *(int *)((int)plr + iVar6 + 0x38), *(int *)((int)plr + iVar6 + 0x3c));
			ChangeVisionXY(
			    *(int *)((int)plr + iVar6 + 0xa0), *(int *)((int)plr + iVar6 + 0x38), *(int *)((int)plr + iVar6 + 0x3c));
		}
		if ((pnum == **(int **)(iVar3 + -0x77ac)) && (ScrollStruct_1012f2e8._sdir != 0)) {
			piVar2 = *(int **)(iVar3 + -0x77b4);
			**(int **)(iVar3 + -0x77b0) = *(int *)((int)plr + iVar6 + 0x38) - ScrollStruct_1012f2e8._sdx;
			*piVar2 = *(int *)((int)plr + iVar6 + 0x3c) - ScrollStruct_1012f2e8._sdy;
		}
		if (*(char *)((int)plr + iVar6 + 4) == -1) {
			StartStand(pnum, *(int *)((int)plr + iVar6 + 0x1d8));
		} else {
			StartWalkStand(pnum);
		}
		ClearPlrPVars(pnum);
		if (leveltype != '\0') {
			ChangeLightOff(*(int *)((int)plr + iVar6 + 0x9c), 0, 0);
		}
		BVar4 = 1;
	} else {
		PM_ChangeOffset(pnum);
		BVar4 = 0;
	}
	return BVar4;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL PM_DoWalk3(int pnum)

{
	int iVar1;
	int *piVar2;
	int iVar3;
	BOOL BVar4;
	int iVar5;
	int *piVar6;
	int *piVar7;
	int iVar8;

	iVar3 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar3 = 0x100f8fd0;
		app_fatal("PM_DoWalk3: illegal player %d", pnum);
	}
	iVar8 = pnum * 0x55ec;
	iVar5 = *(int *)((int)plr + iVar8 + 0x8c);
	if (((iVar5 == 3) || ((iVar1 = *(int *)((int)plr + iVar8 + 0x2a0), iVar1 == 8 && (iVar5 == 7)))) || ((iVar1 != 8 && (iVar5 == 4)))) {
		PlaySfxLoc(0, *(int *)((int)plr + iVar8 + 0x38), *(int *)((int)plr + iVar8 + 0x3c));
	}
	iVar5 = 8;
	if (**(char **)(iVar3 + -0x77e4) != '\0') {
		iVar5 = *(int *)(*(int *)(iVar3 + -0x6f90) + (int)*(char *)((int)plr + iVar8 + 0x15c) * 4);
	}
	if (iVar5 == *(int *)((int)plr + iVar8 + 0x1ec)) {
		piVar7 = (int *)((int)plr + iVar8 + 0x38);
		piVar6 = (int *)((int)plr + iVar8 + 0x3c);
		piVar2 = *(int **)(iVar3 + -0x779c);
		*(undefined *)(_DAT_1012f1b8 + *(int *)((int)plr + iVar8 + 0x38) * 0x70 + *(int *)((int)plr + iVar8 + 0x3c)) = 0;
		iVar5 = *(int *)((int)plr + iVar8 + 0x1dc) * 0x70 + *(int *)((int)plr + iVar8 + 0x1e0);
		*(byte *)(*piVar2 + iVar5) = *(byte *)(*piVar2 + iVar5) & 0xdf;
		*(undefined4 *)((int)plr + iVar8 + 0x38) = *(undefined4 *)((int)plr + iVar8 + 0x1d0);
		*(undefined4 *)((int)plr + iVar8 + 0x3c) = *(undefined4 *)((int)plr + iVar8 + 0x1d4);
		*(char *)(_DAT_1012f1b8 + *(int *)((int)plr + iVar8 + 0x38) * 0x70 + *(int *)((int)plr + iVar8 + 0x3c)) = (char)pnum + '\x01';
		if (leveltype != '\0') {
			ChangeLightXY(*(int *)((int)plr + iVar8 + 0x9c), *piVar7, *piVar6);
			ChangeVisionXY(*(int *)((int)plr + iVar8 + 0xa0), *piVar7, *piVar6);
		}
		if ((pnum == **(int **)(iVar3 + -0x77ac)) && (ScrollStruct_1012f2e8._sdir != 0)) {
			piVar2 = *(int **)(iVar3 + -0x77b4);
			**(int **)(iVar3 + -0x77b0) = *piVar7 - ScrollStruct_1012f2e8._sdx;
			*piVar2 = *piVar6 - ScrollStruct_1012f2e8._sdy;
		}
		if (*(char *)((int)plr + iVar8 + 4) == -1) {
			StartStand(pnum, *(int *)((int)plr + iVar8 + 0x1d8));
		} else {
			StartWalkStand(pnum);
		}
		ClearPlrPVars(pnum);
		if (leveltype != '\0') {
			ChangeLightOff(*(int *)((int)plr + iVar8 + 0x9c), 0, 0);
		}
		BVar4 = 1;
	} else {
		PM_ChangeOffset(pnum);
		BVar4 = 0;
	}
	return BVar4;
}

BOOL WeaponDur(int pnum, int durrnd)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	int *piVar4;
	int *piVar5;

	iVar2 = 0x100f8fd0;
	if ((pnum != myplr) || (iVar3 = random('\x03', durrnd), iVar3 != 0)) {
		return 0;
	}
	if (3 < (uint)pnum) {
		app_fatal(*(char **)(iVar2 + -0x59d0), pnum);
	}
	iVar2 = pnum * 0x55ec;
	piVar1 = (int *)((int)plr + iVar2 + 0xa60);
	if ((*piVar1 != -1) && (*(char *)((int)plr + iVar2 + 0xb16) == '\x01')) {
		piVar4 = (int *)((int)plr + iVar2 + 0xb44);
		iVar3 = *(int *)((int)plr + iVar2 + 0xb44);
		if (iVar3 == 0xff) {
			return 0;
		}
		*piVar4 = iVar3 + -1;
		if (*piVar4 == 0) {
			NetSendCmdDelItem(1, '\x04');
			*piVar1 = -1;
			CalcPlrInv(pnum, 1);
			return 1;
		}
	}
	piVar4 = (int *)((int)plr + iVar2 + 0xbd0);
	if ((*piVar4 != -1) && (*(char *)((int)plr + iVar2 + 0xc86) == '\x01')) {
		piVar5 = (int *)((int)plr + iVar2 + 0xcb4);
		iVar3 = *(int *)((int)plr + iVar2 + 0xcb4);
		if (iVar3 == 0xff) {
			return 0;
		}
		*piVar5 = iVar3 + -1;
		if (*piVar5 == 0) {
			NetSendCmdDelItem(1, '\x05');
			*piVar4 = -1;
			CalcPlrInv(pnum, 1);
			return 1;
		}
	}
	if ((*piVar1 == -1) && (*piVar4 == 5)) {
		piVar5 = (int *)((int)plr + iVar2 + 0xcb4);
		if (*piVar5 == 0xff) {
			return 0;
		}
		*piVar5 = *piVar5 + -1;
		if (*piVar5 == 0) {
			NetSendCmdDelItem(1, '\x05');
			*piVar4 = -1;
			CalcPlrInv(pnum, 1);
			return 1;
		}
	}
	if ((*piVar4 == -1) && (*piVar1 == 5)) {
		piVar4 = (int *)((int)plr + iVar2 + 0xb44);
		if (*piVar4 == 0xff) {
			return 0;
		}
		*piVar4 = *piVar4 + -1;
		if (*piVar4 == 0) {
			NetSendCmdDelItem(1, '\x04');
			*piVar1 = -1;
			CalcPlrInv(pnum, 1);
			return 1;
		}
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL PlrHitMonst(int pnum, int m)

{
	int *piVar1;
	int *piVar2;
	uint *puVar3;
	int *piVar4;
	char cVar5;
	uint uVar6;
	uint uVar7;
	int iVar8;
	int iVar9;
	BOOL BVar10;
	int iVar11;
	int iVar12;
	undefined8 unaff_r17;
	int dam;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	int iVar13;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar14;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	BOOL local_48[3];
	undefined4 local_3c;
	undefined4 uStack56;
	undefined4 uStack52;
	undefined4 uStack48;
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

	iVar11 = (int)unaff_r18;
	iVar8 = 0x100f8fd0;
	local_3c = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
	uStack52 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
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
	if (199 < (uint)m) {
		iVar8 = 0x100f8fd0;
		app_fatal("PlrHitMonst: illegal monster %d", m);
	}
	iVar14 = m * 0xe8;
	piVar1 = (int *)(iVar14 + 0x10151ac8);
	if (*piVar1 >> 6 == 0) {
		local_48[0] = 0;
	} else {
		if ((**(char **)(iVar14 + 0x10151b10) == ' ') && (*(char *)(iVar14 + 0x10151a38) == '\x02')) {
			local_48[0] = 0;
		} else {
			piVar2 = (int *)(iVar14 + 0x10151a34);
			if (*piVar2 == 0xe) {
				local_48[0] = 0;
			} else {
				if (3 < (uint)pnum) {
					app_fatal(*(char **)(iVar8 + -23000), pnum);
				}
				iVar9 = random('\x04', 100);
				if (*piVar2 == 0xf) {
					iVar9 = 0;
				}
				iVar13 = pnum * 0x55ec;
				dam = (((int)*(char *)((int)plr + iVar13 + 0x1b4) + 0x32) - ((uint) * (byte *)(iVar14 + 0x10151afe) - *(int *)((int)plr + iVar13 + 0x5578))) + (*(int *)((int)plr + iVar13 + 0x170) >> 1);
				if (*(char *)((int)plr + iVar13 + 0x15c) == '\0') {
					dam = dam + 0x14;
				}
				dam = dam + *(int *)((int)plr + iVar13 + 0x5554);
				if (dam < 5) {
					dam = 5;
				}
				if (0x5f < dam) {
					dam = 0x5f;
				}
				BVar10 = CheckMonsterHit(m, local_48);
				if ((BVar10 == 0) && (local_48[0] = 0, iVar9 < dam)) {
					iVar9 = *(int *)((int)plr + iVar13 + 0x5544);
					dam = random('\x05', (*(int *)((int)plr + iVar13 + 0x5548) - iVar9) + 1);
					iVar9 = iVar9 + dam;
					dam = iVar9 * *(int *)((int)plr + iVar13 + 0x5550);
					uVar6 = dam / 100 + (dam >> 0x1f);
					iVar9 = *(int *)((int)plr + iVar13 + 0x555c) + *(int *)((int)plr + iVar13 + 0x184) + iVar9 + uVar6 + (uVar6 >> 0x1f);
					if ((*(char *)((int)plr + iVar13 + 0x15c) == '\0') && (cVar5 = *(char *)((int)plr + iVar13 + 0x1b4), dam = random('\x06', 100), dam < (int)cVar5)) {
						iVar9 = iVar9 * 2;
					}
					dam = *(int *)((int)plr + iVar13 + 0xa60);
					iVar12 = -1;
					if ((dam == 1) || (*(int *)((int)plr + iVar13 + 0xbd0) == 1)) {
						iVar12 = 1;
					}
					if ((dam == 4) || (*(int *)((int)plr + iVar13 + 0xbd0) == 4)) {
						iVar12 = 4;
					}
					cVar5 = *(char *)(*(int *)(iVar14 + 0x10151b14) + 0x72);
					if (cVar5 != '\x01') {
						if (cVar5 < '\x01') {
							if (-1 < cVar5) {
								if (iVar12 == 1) {
									iVar9 = iVar9 - (iVar9 >> 1);
								}
								if (iVar12 == 4) {
									iVar9 = iVar9 + (iVar9 >> 1);
								}
							}
						} else {
							if (cVar5 < '\x03') {
								if (iVar12 == 4) {
									iVar9 = iVar9 - (iVar9 >> 1);
								}
								if (iVar12 == 1) {
									iVar9 = iVar9 + (iVar9 >> 1);
								}
							}
						}
					}
					puVar3 = (uint *)((int)plr + iVar13 + 0x5568);
					uVar6 = *puVar3;
					if (((uVar6 & 0x40000000) != 0) && (cVar5 == '\x01')) {
						iVar9 = iVar9 * 3;
					}
					dam = iVar9 * 0x40;
					if (pnum == **(int **)(iVar8 + -0x77ac)) {
						*piVar1 = *piVar1 + iVar9 * -0x40;
					}
					if ((uVar6 & 2) != 0) {
						iVar11 = random('\a', dam >> 3);
						*(int *)((int)plr + iVar13 + 0x194) = *(int *)((int)plr + iVar13 + 0x194) + iVar11;
						piVar4 = (int *)((int)plr + iVar13 + 0x194);
						iVar12 = *(int *)((int)plr + iVar13 + 0x198);
						if (iVar12 < *piVar4) {
							*piVar4 = iVar12;
						}
						*(int *)((int)plr + iVar13 + 0x18c) = *(int *)((int)plr + iVar13 + 0x18c) + iVar11;
						piVar4 = (int *)((int)plr + iVar13 + 0x18c);
						iVar12 = *(int *)((int)plr + iVar13 + 400);
						if (iVar12 < *piVar4) {
							*piVar4 = iVar12;
						}
						_DAT_101282c0 = 1;
					}
					uVar6 = *puVar3;
					if (((uVar6 & 0x6000) != 0) && ((uVar6 & 0x8000000) == 0)) {
						if ((uVar6 & 0x2000) != 0) {
							uVar7 = (iVar9 * 0xc0) / 100 + (iVar9 * 0xc0 >> 0x1f);
							iVar11 = uVar7 + (uVar7 >> 0x1f);
						}
						if ((uVar6 & 0x4000) != 0) {
							uVar6 = (iVar9 * 0x140) / 100 + (iVar9 * 0x140 >> 0x1f);
							iVar11 = uVar6 + (uVar6 >> 0x1f);
						}
						*(int *)((int)plr + iVar13 + 0x1a8) = *(int *)((int)plr + iVar13 + 0x1a8) + iVar11;
						piVar4 = (int *)((int)plr + iVar13 + 0x1a8);
						iVar12 = *(int *)((int)plr + iVar13 + 0x1ac);
						if (iVar12 < *piVar4) {
							*piVar4 = iVar12;
						}
						*(int *)((int)plr + iVar13 + 0x1a0) = *(int *)((int)plr + iVar13 + 0x1a0) + iVar11;
						piVar4 = (int *)((int)plr + iVar13 + 0x1a0);
						iVar12 = *(int *)((int)plr + iVar13 + 0x1a4);
						if (iVar12 < *piVar4) {
							*piVar4 = iVar12;
						}
						**(undefined4 **)(iVar8 + -0x76f4) = 1;
					}
					uVar6 = *puVar3;
					if ((uVar6 & 0x18000) != 0) {
						if ((uVar6 & 0x8000) != 0) {
							uVar7 = (iVar9 * 0xc0) / 100 + (iVar9 * 0xc0 >> 0x1f);
							iVar11 = uVar7 + (uVar7 >> 0x1f);
						}
						if ((uVar6 & 0x10000) != 0) {
							uVar6 = (iVar9 * 0x140) / 100 + (iVar9 * 0x140 >> 0x1f);
							iVar11 = uVar6 + (uVar6 >> 0x1f);
						}
						*(int *)((int)plr + iVar13 + 0x194) = *(int *)((int)plr + iVar13 + 0x194) + iVar11;
						piVar4 = (int *)((int)plr + iVar13 + 0x194);
						iVar8 = *(int *)((int)plr + iVar13 + 0x198);
						if (iVar8 < *piVar4) {
							*piVar4 = iVar8;
						}
						*(int *)((int)plr + iVar13 + 0x18c) = *(int *)((int)plr + iVar13 + 0x18c) + iVar11;
						piVar4 = (int *)((int)plr + iVar13 + 0x18c);
						iVar8 = *(int *)((int)plr + iVar13 + 400);
						if (iVar8 < *piVar4) {
							*piVar4 = iVar8;
						}
						_DAT_101282c0 = 1;
					}
					uVar6 = *puVar3;
					if ((uVar6 & 0x100) != 0) {
						*(uint *)(iVar14 + 0x10151ad0) = *(uint *)(iVar14 + 0x10151ad0) | 8;
					}
					if (*piVar1 >> 6 == 0) {
						if (*piVar2 == 0xf) {
							M_StartKill(m, pnum);
							*piVar2 = 0xf;
						} else {
							M_StartKill(m, pnum);
						}
					} else {
						if (*piVar2 == 0xf) {
							M_StartHit(m, pnum, dam);
							*piVar2 = 0xf;
						} else {
							if ((uVar6 & 0x800) != 0) {
								M_GetKnockback(m);
							}
							M_StartHit(m, pnum, dam);
						}
					}
					local_48[0] = 1;
				}
			}
		}
	}
	return local_48[0];
}

BOOL PlrHitPlr(int pnum, char p)

{
	char cVar1;
	DWORD dwDam;
	uint uVar2;
	char *pcVar3;
	int *piVar4;
	longlong lVar5;
	int iVar6;
	BOOL BVar7;
	int iVar8;
	int iVar9;
	int dir;
	int iVar10;
	int iVar11;
	char *pcVar12;
	int iVar13;

	dir = 0x100f8fd0;
	if (3 < ((longlong)p & 0xffffffffU)) {
		dir = 0x100f8fd0;
		app_fatal("PlrHitPlr: illegal target player %d");
	}
	if (3 < (uint)pnum) {
		app_fatal("PlrHitPlr: illegal target player %d", pnum);
	}
	iVar11 = (int)p * 0x55ec;
	BVar7 = 0;
	if (*(char *)((int)plr + iVar11 + 0x139) == '\0') {
		if ((*(byte *)((int)plr + iVar11 + 0x11c) & 1) == 0) {
			if (3 < (uint)pnum) {
				app_fatal(*(char **)(dir + -0x59e0), pnum);
			}
			iVar8 = random('\x04', 100);
			iVar10 = *(int *)((int)plr + iVar11 + 0x170);
			iVar13 = pnum * 0x55ec;
			pcVar12 = (char *)((int)plr + iVar13 + 0x15c);
			pcVar3 = (char *)((int)plr + iVar13 + 0x1b4);
			uVar2 = iVar10 / 5 + (iVar10 >> 0x1f);
			iVar10 = (((int)*pcVar3 + 0x32) - (*(int *)((int)plr + iVar11 + 0x554c) + *(int *)((int)plr + iVar11 + 0x5558) + uVar2 + (uVar2 >> 0x1f))) + (*(int *)((int)plr + iVar13 + 0x170) >> 1);
			if (*pcVar12 == '\0') {
				iVar10 = iVar10 + 0x14;
			}
			iVar10 = iVar10 + *(int *)((int)plr + iVar13 + 0x5554);
			if (iVar10 < 5) {
				iVar10 = 5;
			}
			if (0x5f < iVar10) {
				iVar10 = 0x5f;
			}
			iVar9 = ((PlayerStruct *)((int)plr + iVar11))->_pmode;
			if (((iVar9 == 0) || (iVar9 == 4)) && (*(char *)((int)plr + iVar11 + 0x138) != '\0')) {
				iVar9 = random('\x05', 100);
			} else {
				iVar9 = 100;
			}
			lVar5 = ((ulonglong) * (uint *)((int)plr + iVar11 + 0x188) + (ulonglong) * (uint *)((int)plr + iVar11 + 0x170)) - (ulonglong)(uint)(((int)*pcVar3 - (int)*(char *)((int)plr + iVar11 + 0x1b4)) * 2);
			iVar6 = (int)lVar5;
			if (lVar5 < 0) {
				iVar6 = 0;
			}
			if (100 < iVar6) {
				iVar6 = 100;
			}
			if (iVar8 < iVar10) {
				if (iVar9 < iVar6) {
					dir = GetDirection(*(int *)((int)plr + iVar11 + 0x38), *(int *)((int)plr + iVar11 + 0x3c),
					    *(int *)((int)plr + iVar13 + 0x38), *(int *)((int)plr + iVar13 + 0x3c));
					StartPlrBlock((int)p, dir);
				} else {
					iVar11 = *(int *)((int)plr + iVar13 + 0x5544);
					iVar10 = random('\x05', (*(int *)((int)plr + iVar13 + 0x5548) - iVar11) + 1);
					iVar11 = iVar11 + iVar10;
					iVar10 = iVar11 * *(int *)((int)plr + iVar13 + 0x5550);
					uVar2 = iVar10 / 100 + (iVar10 >> 0x1f);
					iVar11 = *(int *)((int)plr + iVar13 + 0x555c) + *(int *)((int)plr + iVar13 + 0x184) + iVar11 + uVar2 + (uVar2 >> 0x1f);
					if ((*pcVar12 == '\0') && (cVar1 = *pcVar3, iVar10 = random('\x06', 100), iVar10 < (int)cVar1)) {
						iVar11 = iVar11 * 2;
					}
					dwDam = iVar11 << 6;
					if ((*(uint *)((int)plr + iVar13 + 0x5568) & 2) != 0) {
						iVar10 = random('\a', (int)dwDam >> 3);
						*(int *)((int)plr + iVar13 + 0x194) = *(int *)((int)plr + iVar13 + 0x194) + iVar10;
						iVar11 = *(int *)((int)plr + iVar13 + 0x198);
						if (iVar11 < *(int *)((int)plr + iVar13 + 0x194)) {
							*(int *)((int)plr + iVar13 + 0x194) = iVar11;
						}
						*(int *)((int)plr + iVar13 + 0x18c) = *(int *)((int)plr + iVar13 + 0x18c) + iVar10;
						piVar4 = (int *)((int)plr + iVar13 + 0x18c);
						iVar11 = *(int *)((int)plr + iVar13 + 400);
						if (iVar11 < *piVar4) {
							*piVar4 = iVar11;
						}
						**(undefined4 **)(dir + -0x76f0) = 1;
					}
					if (pnum == **(int **)(dir + -0x77ac)) {
						NetSendCmdDamage(1, p, dwDam);
					}
					StartPlrHit((int)p, dwDam, 0);
				}
				BVar7 = 1;
			}
		} else {
			BVar7 = 0;
		}
	} else {
		BVar7 = 0;
	}
	return BVar7;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL PlrHitObj(int pnum, int mx, int my)

{
	bool bVar1;
	char cVar2;
	int oi;

	cVar2 = *(char *)(_DAT_1012f1ac + mx * 0x70 + my);
	if (cVar2 < '\x01') {
		oi = -((int)cVar2 + 1);
	} else {
		oi = (int)cVar2 + -1;
	}
	bVar1 = *(char *)(oi * 0x78 + 0x1017e408) == '\x01';
	if (bVar1) {
		BreakObject(pnum, oi);
	}
	return (BOOL)(uint)bVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL PM_DoAttack(int pnum)

{
	uint *puVar1;
	int *piVar2;
	int *piVar3;
	bool bVar4;
	short sVar5;
	int m;
	BOOL BVar6;
	BOOL BVar7;
	int sy;
	int m_00;
	char p;
	int sx;
	int iVar8;
	int midam;
	int spllvl;

	m_00 = 0x100f8fd0;
	BVar7 = 0;
	if (3 < (uint)pnum) {
		m_00 = 0x100f8fd0;
		app_fatal("PM_DoAttack: illegal player %d", pnum);
	}
	iVar8 = pnum * 0x55ec;
	puVar1 = (uint *)((int)plr + iVar8 + 0x5568);
	piVar2 = (int *)((int)plr + iVar8 + 0x8c);
	sy = *piVar2;
	if (((*puVar1 & 0x20000) != 0) && (sy == 1)) {
		*piVar2 = 2;
	}
	if (((*puVar1 & 0x40000) != 0) && ((sy == 1 || (sy == 3)))) {
		*piVar2 = *piVar2 + 1;
	}
	if (((*puVar1 & 0x80000) != 0) && (((sy == 1 || (sy == 3)) || (sy == 5)))) {
		*piVar2 = *piVar2 + 1;
	}
	if (((*puVar1 & 0x100000) != 0) && ((sy == 1 || (sy == 4)))) {
		*piVar2 = *piVar2 + 2;
	}
	piVar3 = (int *)((int)plr + iVar8 + 0x2f0);
	if (*piVar2 == *piVar3 + -1) {
		PlaySfxLoc(9, *(int *)((int)plr + iVar8 + 0x38), *(int *)((int)plr + iVar8 + 0x3c));
	}
	if (*piVar2 == *piVar3) {
		sy = *(int *)((int)plr + iVar8 + 0x70) * 4;
		sx = *(int *)((int)plr + iVar8 + 0x38) + *(int *)(*(int *)(m_00 + -0x71ec) + sy);
		sy = *(int *)((int)plr + iVar8 + 0x3c) + *(int *)(*(int *)(m_00 + -0x71f0) + sy);
		sVar5 = *(short *)(_DAT_1012f1b4 + sx * 0xe0 + sy * 2);
		if (sVar5 != 0) {
			if (sVar5 < 1) {
				m = -((int)sVar5 + 1);
			} else {
				m = (int)sVar5 + -1;
			}
			BVar6 = CanTalkToMonst(m);
			if (BVar6 != 0) {
				*(undefined4 *)((int)plr + iVar8 + 0x1d0) = 0;
				return 0;
			}
		}
		if ((*puVar1 & 0x10) != 0) {
			AddMissile(sx, sy, 1, 0, 0, 0x40, '\0', pnum, midam, spllvl);
		}
		if ((*puVar1 & 0x20) != 0) {
			AddMissile(sx, sy, 2, 0, 0, 0x40, '\0', pnum, midam, spllvl);
		}
		sVar5 = *(short *)(_DAT_1012f1b4 + sx * 0xe0 + sy * 2);
		if (sVar5 == 0) {
			p = *(char *)(**(int **)(m_00 + -0x7680) + sx * 0x70 + sy);
			if ((p == '\0') || (*(int *)(m_00 + -0x2444) != 0)) {
				if ('\0' < *(char *)(**(int **)(m_00 + -0x7684) + sx * 0x70 + sy)) {
					BVar7 = PlrHitObj(pnum, sx, sy);
				}
			} else {
				if (p < '\x01') {
					p = -(p + '\x01');
				} else {
					p = p + -1;
				}
				BVar7 = PlrHitPlr(pnum, p);
			}
		} else {
			if (sVar5 < 1) {
				m_00 = -((int)sVar5 + 1);
			} else {
				m_00 = (int)sVar5 + -1;
			}
			BVar7 = PlrHitMonst(pnum, m_00);
		}
		if ((BVar7 != 0) && (BVar7 = WeaponDur(pnum, 0x1e), BVar7 != 0)) {
			StartStand(pnum, *(int *)((int)plr + iVar8 + 0x70));
			ClearPlrPVars(pnum);
			return 1;
		}
	}
	bVar4 = *piVar2 == *(int *)((int)plr + iVar8 + 0x2e8);
	if (bVar4) {
		StartStand(pnum, *(int *)((int)plr + iVar8 + 0x70));
		ClearPlrPVars(pnum);
	}
	return (BOOL)(uint)bVar4;
}

BOOL PM_DoRangeAttack(int pnum)

{
	uint *puVar1;
	int *piVar2;
	int *piVar3;
	int *piVar4;
	bool bVar5;
	BOOL BVar6;
	int mitype;
	int *piVar7;
	int iVar8;
	int midam;
	int spllvl;

	if (3 < (uint)pnum) {
		app_fatal("PM_DoRangeAttack: illegal player %d", pnum);
	}
	iVar8 = pnum * 0x55ec;
	puVar1 = (uint *)((int)plr + iVar8 + 0x5568);
	piVar2 = (int *)((int)plr + iVar8 + 0x8c);
	mitype = *piVar2;
	if (((*puVar1 & 0x20000) != 0) && (mitype == 1)) {
		*piVar2 = 2;
	}
	if (((*puVar1 & 0x40000) != 0) && ((mitype == 1 || (mitype == 3)))) {
		*piVar2 = *piVar2 + 1;
	}
	if (*piVar2 == *(int *)((int)plr + iVar8 + 0x2f0)) {
		mitype = 0;
		if ((*puVar1 & 8) != 0) {
			mitype = 0x1b;
		}
		if ((*puVar1 & 0x2000000) != 0) {
			mitype = 0x38;
		}
		piVar7 = (int *)((int)plr + iVar8 + 0x70);
		piVar3 = (int *)((int)plr + iVar8 + 0x38);
		piVar4 = (int *)((int)plr + iVar8 + 0x3c);
		AddMissile(*piVar3, *piVar4, *(int *)((int)plr + iVar8 + 0x1d0), *(int *)((int)plr + iVar8 + 0x1d4), *piVar7,
		    mitype, '\0', pnum, midam, spllvl);
		PlaySfxLoc(4, *piVar3, *piVar4);
		BVar6 = WeaponDur(pnum, 0x28);
		if (BVar6 != 0) {
			StartStand(pnum, *piVar7);
			ClearPlrPVars(pnum);
			return 1;
		}
	}
	bVar5 = *(int *)((int)plr + iVar8 + 0x2e8) <= *piVar2;
	if (bVar5) {
		StartStand(pnum, *(int *)((int)plr + iVar8 + 0x70));
		ClearPlrPVars(pnum);
	}
	return (BOOL)(uint)bVar5;
}

void ShieldDur(int pnum)

{
	int *piVar1;
	int *piVar2;
	int iVar3;

	if (pnum == myplr) {
		if (3 < (uint)pnum) {
			app_fatal("ShieldDur: illegal player %d", pnum);
		}
		iVar3 = pnum * 0x55ec;
		piVar2 = (int *)((int)plr + iVar3 + 0xa60);
		if (*piVar2 == 5) {
			piVar1 = (int *)((int)plr + iVar3 + 0xb44);
			if (*piVar1 == 0xff) {
				return;
			}
			*piVar1 = *piVar1 + -1;
			if (*piVar1 == 0) {
				NetSendCmdDelItem(1, '\x04');
				*piVar2 = -1;
				CalcPlrInv(pnum, 1);
			}
		}
		piVar2 = (int *)((int)plr + iVar3 + 0xbd0);
		if (*piVar2 == 5) {
			piVar1 = (int *)((int)plr + iVar3 + 0xcb4);
			if ((*piVar1 != 0xff) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
				NetSendCmdDelItem(1, '\x05');
				*piVar2 = -1;
				CalcPlrInv(pnum, 1);
			}
		}
	}
	return;
}

BOOL PM_DoBlock(int pnum)

{
	int iVar1;
	BOOL BVar2;

	if (3 < (uint)pnum) {
		app_fatal("PM_DoBlock: illegal player %d", pnum);
	}
	iVar1 = pnum * 0x55ec;
	if (((*(uint *)((int)plr + iVar1 + 0x5568) & 0x1000000) != 0) && (*(int *)((int)plr + iVar1 + 0x8c) != 1)) {
		*(undefined4 *)((int)plr + iVar1 + 0x8c) = *(undefined4 *)((int)plr + iVar1 + 0x490);
	}
	if (*(int *)((int)plr + iVar1 + 0x8c) < *(int *)((int)plr + iVar1 + 0x490)) {
		BVar2 = 0;
	} else {
		StartStand(pnum, *(int *)((int)plr + iVar1 + 0x70));
		ClearPlrPVars(pnum);
		iVar1 = random('\x03', 10);
		if (iVar1 == 0) {
			ShieldDur(pnum);
		}
		BVar2 = 1;
	}
	return BVar2;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL PM_DoSpell(int pnum)

{
	int *piVar1;
	uint *puVar2;
	int iVar3;
	ulonglong uVar4;
	BOOL BVar5;
	ulonglong uVar6;
	char *pcVar7;
	int iVar8;

	iVar3 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar3 = 0x100f8fd0;
		app_fatal("PM_DoSpell: illegal player %d", pnum);
	}
	iVar8 = pnum * 0x55ec;
	piVar1 = (int *)((int)plr + iVar8 + 0x1ec);
	if (*piVar1 == *(int *)((int)plr + iVar8 + 0x3bc)) {
		CastSpell(pnum, *(int *)((int)plr + iVar8 + 0xa4), *(int *)((int)plr + iVar8 + 0x38),
		    *(int *)((int)plr + iVar8 + 0x3c), *(int *)((int)plr + iVar8 + 0x1d0), *(int *)((int)plr + iVar8 + 0x1d4), 0,
		    *(int *)((int)plr + iVar8 + 0x1dc));
		if (*(char *)((int)plr + iVar8 + 0xa9) == '\0') {
			pcVar7 = (char *)((int)plr + iVar8 + 0xb8);
			if (*(char *)((int)plr + iVar8 + 0xb8) == '\x02') {
				uVar6 = 1;
				uVar4 = 64bitAndOperator(0, 1, (ulonglong) * (uint *)((int)plr + iVar8 + 0xb4) - 1);
				if (((ulonglong) * (uint *)((int)plr + iVar8 + 0x118) & uVar6 | (ulonglong) * (uint *)((int)plr + iVar8 + 0x114) & uVar4) == 0) {
					*(undefined4 *)((int)plr + iVar8 + 0xb4) = 0xffffffff;
					*pcVar7 = '\x04';
					_drawpanflag = 0xff;
				}
			}
			if (*pcVar7 == '\x03') {
				puVar2 = (uint *)((int)plr + iVar8 + 0xb4);
				uVar6 = 1;
				uVar4 = 64bitAndOperator(0, 1, (ulonglong)*puVar2 - 1);
				if (((ulonglong) * (uint *)((int)plr + iVar8 + 0x5564) & uVar6 | (ulonglong) * (uint *)((int)plr + iVar8 + 0x5560) & uVar4) == 0) {
					*puVar2 = 0xffffffff;
					*pcVar7 = '\x04';
					_drawpanflag = 0xff;
				}
			}
		}
	}
	pcVar7 = *(char **)(iVar3 + -0x7794);
	*piVar1 = *piVar1 + 1;
	if (*pcVar7 == '\0') {
		if (*(int *)((int)plr + iVar8 + 0x3b4) < *piVar1) {
			StartWalkStand(pnum);
			ClearPlrPVars(pnum);
			BVar5 = 1;
		} else {
			BVar5 = 0;
		}
	} else {
		if (*(int *)((int)plr + iVar8 + 0x8c) == *(int *)((int)plr + iVar8 + 0x3b4)) {
			StartStand(pnum, *(int *)((int)plr + iVar8 + 0x70));
			ClearPlrPVars(pnum);
			BVar5 = 1;
		} else {
			BVar5 = 0;
		}
	}
	return BVar5;
}

void ArmorDur(int pnum)

{
	int iVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	if (pnum == myplr) {
		if (3 < (uint)pnum) {
			iVar2 = 0x100f8fd0;
			app_fatal("ArmorDur: illegal player %d", pnum);
		}
		iVar2 = *(int *)(iVar2 + -0x77a8) + pnum * 0x55ec;
		if ((*(int *)(iVar2 + 0xd40) != -1) || (*(int *)(iVar2 + 0x4a0) != -1)) {
			iVar1 = random('\b', 3);
			if ((*(int *)(iVar2 + 0xd40) != -1) && (*(int *)(iVar2 + 0x4a0) == -1)) {
				iVar1 = 1;
			}
			if ((*(int *)(iVar2 + 0xd40) == -1) && (*(int *)(iVar2 + 0x4a0) != -1)) {
				iVar1 = 0;
			}
			if (iVar1 == 0) {
				iVar2 = iVar2 + 0x498;
			} else {
				iVar2 = iVar2 + 0xd38;
			}
			if ((*(int *)(iVar2 + 0xec) != 0xff) && (*(int *)(iVar2 + 0xec) = *(int *)(iVar2 + 0xec) + -1, *(int *)(iVar2 + 0xec) == 0)) {
				if (iVar1 == 0) {
					NetSendCmdDelItem(1, '\0');
				} else {
					NetSendCmdDelItem(1, '\x06');
				}
				*(undefined4 *)(iVar2 + 8) = 0xffffffff;
				CalcPlrInv(pnum, 1);
			}
		}
	}
	return;
}

BOOL PM_DoGotHit(int pnum)

{
	uint *puVar1;
	int *piVar2;
	int iVar3;
	BOOL BVar4;
	int iVar5;

	if (3 < (uint)pnum) {
		app_fatal("PM_DoGotHit: illegal player %d", pnum);
	}
	iVar5 = pnum * 0x55ec;
	puVar1 = (uint *)((int)plr + iVar5 + 0x5568);
	piVar2 = (int *)((int)plr + iVar5 + 0x8c);
	iVar3 = *piVar2;
	if (((*puVar1 & 0x200000) != 0) && (iVar3 == 3)) {
		*piVar2 = 4;
	}
	if (((*puVar1 & 0x400000) != 0) && ((iVar3 == 3 || (iVar3 == 5)))) {
		*piVar2 = *piVar2 + 1;
	}
	if (((*puVar1 & 0x800000) != 0) && (((iVar3 == 1 || (iVar3 == 3)) || (iVar3 == 5)))) {
		*piVar2 = *piVar2 + 1;
	}
	if (*piVar2 < *(int *)((int)plr + iVar5 + 0x400)) {
		BVar4 = 0;
	} else {
		StartStand(pnum, *(int *)((int)plr + iVar5 + 0x70));
		ClearPlrPVars(pnum);
		iVar3 = random('\x03', 4);
		if (iVar3 != 0) {
			ArmorDur(pnum);
		}
		BVar4 = 1;
	}
	return BVar4;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL PM_DoDeath(int pnum)

{
	int *piVar1;
	char *pcVar2;
	int *piVar3;
	int iVar4;
	int iVar5;

	iVar4 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar4 = 0x100f8fd0;
		app_fatal("PM_DoDeath: illegal player %d", pnum);
	}
	iVar5 = pnum * 0x55ec;
	piVar1 = (int *)((int)plr + iVar5 + 0x1ec);
	if (*(int *)((int)plr + iVar5 + 0x448) << 1 <= *piVar1) {
		if ((((1 < _DAT_10186eb8) && (pnum == **(int **)(iVar4 + -0x77ac))) && (_DAT_10186eb8 = _DAT_10186eb8 + -1, _DAT_10186eb8 == 1)) && (pcVar2 = *(char **)(iVar4 + -0x77f0), **(undefined4 **)(iVar4 + -0x75cc) = 1, *pcVar2 == '\x01')) {
			gamemenu_previous();
		}
		piVar3 = *(int **)(iVar4 + -0x779c);
		*(undefined4 *)((int)plr + iVar5 + 0x80) = 10000;
		*(undefined4 *)((int)plr + iVar5 + 0x8c) = *(undefined4 *)((int)plr + iVar5 + 0x88);
		iVar4 = *(int *)((int)plr + iVar5 + 0x38) * 0x70 + *(int *)((int)plr + iVar5 + 0x3c);
		*(byte *)(*piVar3 + iVar4) = *(byte *)(*piVar3 + iVar4) | 4;
	}
	if (*piVar1 < 100) {
		*piVar1 = *piVar1 + 1;
	}
	return 0;
}

BOOL PM_DoNewLvl(int pnum)

{
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckNewPath(int pnum)

{
	char cVar1;
	code *UNRECOVERED_JUMPTABLE;
	char *pcVar2;
	int iVar3;
	int iVar4;
	int d;
	int i;
	int i_00;
	ulonglong uVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	int *piVar8;
	int *piVar9;
	int *piVar10;
	int *piVar11;
	int *piVar12;
	int iVar13;
	PlayerStruct *pPVar14;

	i = 0x100f8fd0;
	if (3 < (uint)pnum) {
		i = 0x100f8fd0;
		app_fatal("CheckNewPath: illegal player %d", pnum);
	}
	iVar13 = pnum * 0x55ec;
	piVar12 = (int *)((int)plr + iVar13 + 0x20);
	if (*(int *)((int)plr + iVar13 + 0x20) == 0x14) {
		iVar3 = *(int *)((int)plr + iVar13 + 0x24) * 0xe8;
		MakePlrPath(pnum, *(int *)(iVar3 + 0x10151a58), *(int *)(iVar3 + 0x10151a5c), 0);
	}
	if (*piVar12 == 0x15) {
		iVar3 = *(int *)((int)plr + iVar13 + 0x24) * 0x55ec;
		MakePlrPath(pnum, *(int *)((int)plr + iVar3 + 0x40), *(int *)((int)plr + iVar3 + 0x44), 0);
	}
	pcVar2 = (char *)((int)plr + iVar13 + 4);
	if (*pcVar2 == -1) {
		iVar3 = *piVar12;
		if (iVar3 != -1) {
			pPVar14 = (PlayerStruct *)((int)plr + iVar13);
			if (pPVar14->_pmode == 0) {
				if (iVar3 - 9U < 0x12) {
					// WARNING: Could not recover jumptable at 0x10098364. Too many branches
					// WARNING: Treating indirect jump as call
					(**(code **)(*(int *)(i + -0x5a0c) + (iVar3 + -9) * 4))();
					return;
				}
				FixPlayerLocation(pnum, *(int *)((int)plr + iVar13 + 0x70));
				*piVar12 = -1;
			} else {
				if ((pPVar14->_pmode == 4) && (*(int *)((int)plr + myplr * 0x55ec + 0x2f0) < *(int *)((int)plr + iVar13 + 0x8c))) {
					if (iVar3 == 9) {
						i = GetDirection(*(int *)((int)plr + iVar13 + 0x40), *(int *)((int)plr + iVar13 + 0x44),
						    *(int *)((int)plr + iVar13 + 0x24), *(int *)((int)plr + iVar13 + 0x28));
						StartAttack(pnum, i);
						*piVar12 = -1;
					} else {
						if (iVar3 == 0x14) {
							iVar3 = *(int *)((int)plr + iVar13 + 0x24) * 0xe8;
							piVar8 = (int *)(iVar3 + 0x10151a58);
							i = abs(*(int *)((int)plr + iVar13 + 0x38) - *piVar8);
							piVar9 = (int *)(iVar3 + 0x10151a5c);
							iVar3 = abs(*(int *)((int)plr + iVar13 + 0x3c) - *piVar9);
							if ((i < 2) && (iVar3 < 2)) {
								i = GetDirection(*(int *)((int)plr + iVar13 + 0x40), *(int *)((int)plr + iVar13 + 0x44),
								    *piVar8, *piVar9);
								StartAttack(pnum, i);
							}
							*piVar12 = -1;
						} else {
							if (iVar3 == 0x15) {
								iVar3 = *(int *)((int)plr + iVar13 + 0x24) * 0x55ec;
								piVar9 = (int *)((int)plr + iVar3 + 0x40);
								i = abs(*(int *)((int)plr + iVar13 + 0x38) - *piVar9);
								piVar8 = (int *)((int)plr + iVar3 + 0x44);
								iVar3 = abs(*(int *)((int)plr + iVar13 + 0x3c) - *piVar8);
								if ((i < 2) && (iVar3 < 2)) {
									i = GetDirection(*(int *)((int)plr + iVar13 + 0x40),
									    *(int *)((int)plr + iVar13 + 0x44), *piVar9, *piVar8);
									StartAttack(pnum, i);
								}
								*piVar12 = -1;
							} else {
								if (iVar3 == 0xd) {
									i = *(int *)((int)plr + iVar13 + 0x24);
									iVar4 = i * 0x78;
									piVar8 = (int *)(iVar4 + 0x1017e3d8);
									iVar3 = abs(*(int *)((int)plr + iVar13 + 0x38) - *piVar8);
									piVar9 = (int *)(iVar4 + 0x1017e3dc);
									piVar11 = (int *)((int)plr + iVar13 + 0x3c);
									i_00 = abs(*(int *)((int)plr + iVar13 + 0x3c) - *piVar9);
									if ((1 < i_00) && (-1 - i == (int)*(char *)(_DAT_1012f1ac + *piVar8 * 0x70 + *piVar9 + -1))) {
										i_00 = abs((*piVar11 - *piVar9) + 1);
									}
									if ((iVar3 < 2) && (i_00 < 2)) {
										if (*(char *)(iVar4 + 0x1017e408) == '\x01') {
											i = GetDirection(
											    *(int *)((int)plr + iVar13 + 0x38), *piVar11, *piVar8, *piVar9);
											StartAttack(pnum, i);
										} else {
											OperateObject(pnum, i, 0);
										}
									}
								}
							}
						}
					}
				}
				if ((pPVar14->_pmode == 5) && (*(int *)((int)plr + myplr * 0x55ec + 0x2f0) < *(int *)((int)plr + iVar13 + 0x8c))) {
					i = *piVar12;
					if (i == 10) {
						piVar8 = (int *)((int)plr + iVar13 + 0x28);
						i = GetDirection(*(int *)((int)plr + iVar13 + 0x38), *(int *)((int)plr + iVar13 + 0x3c),
						    *(int *)((int)plr + iVar13 + 0x24), *piVar8);
						StartRangeAttack(pnum, i, *(int *)((int)plr + iVar13 + 0x24), *piVar8);
						*piVar12 = -1;
					} else {
						if (i == 0x16) {
							i = *(int *)((int)plr + iVar13 + 0x24) * 0xe8;
							piVar8 = (int *)(i + 0x10151a58);
							piVar9 = (int *)(i + 0x10151a5c);
							i = GetDirection(
							    *(int *)((int)plr + iVar13 + 0x38), *(int *)((int)plr + iVar13 + 0x3c), *piVar8, *piVar9);
							StartRangeAttack(pnum, i, *piVar8, *piVar9);
							*piVar12 = -1;
						} else {
							if (i == 0x17) {
								i = *(int *)((int)plr + iVar13 + 0x24) * 0x55ec;
								piVar8 = (int *)((int)plr + i + 0x40);
								piVar9 = (int *)((int)plr + i + 0x44);
								i = GetDirection(*(int *)((int)plr + iVar13 + 0x38), *(int *)((int)plr + iVar13 + 0x3c),
								    *piVar8, *piVar9);
								StartRangeAttack(pnum, i, *piVar8, *piVar9);
								*piVar12 = -1;
							}
						}
					}
				}
				if ((pPVar14->_pmode == 9) && (*(int *)((int)plr + iVar13 + 0x3bc) < *(int *)((int)plr + iVar13 + 0x8c))) {
					i = *piVar12;
					if (i == 0xc) {
						piVar9 = (int *)((int)plr + iVar13 + 0x24);
						piVar8 = (int *)((int)plr + iVar13 + 0x28);
						i = GetDirection(
						    *(int *)((int)plr + iVar13 + 0x38), *(int *)((int)plr + iVar13 + 0x3c), *piVar9, *piVar8);
						StartSpell(pnum, i, *piVar9, *piVar8);
						*piVar12 = -1;
					} else {
						if (i == 0x18) {
							i = *(int *)((int)plr + iVar13 + 0x24) * 0xe8;
							piVar8 = (int *)(i + 0x10151a58);
							piVar9 = (int *)(i + 0x10151a5c);
							i = GetDirection(
							    *(int *)((int)plr + iVar13 + 0x38), *(int *)((int)plr + iVar13 + 0x3c), *piVar8, *piVar9);
							StartSpell(pnum, i, *piVar8, *piVar9);
							*piVar12 = -1;
						} else {
							if (i == 0x19) {
								i = *(int *)((int)plr + iVar13 + 0x24) * 0x55ec;
								piVar8 = (int *)((int)plr + i + 0x40);
								piVar9 = (int *)((int)plr + i + 0x44);
								i = GetDirection(*(int *)((int)plr + iVar13 + 0x38), *(int *)((int)plr + iVar13 + 0x3c),
								    *piVar8, *piVar9);
								StartSpell(pnum, i, *piVar8, *piVar9);
								*piVar12 = -1;
							}
						}
					}
				}
			}
		}
	} else {
		if (((PlayerStruct *)((int)plr + iVar13))->_pmode == 0) {
			if ((pnum == myplr) && ((iVar3 = *piVar12, iVar3 == 0x14 || (iVar3 == 0x15)))) {
				i_00 = *(int *)((int)plr + iVar13 + 0x24);
				if (iVar3 == 0x14) {
					piVar8 = (int *)(i_00 * 0xe8 + 0x10151a58);
					iVar3 = abs(*(int *)((int)plr + iVar13 + 0x40) - *piVar8);
					piVar9 = (int *)(i_00 * 0xe8 + 0x10151a5c);
					iVar4 = abs(*(int *)((int)plr + iVar13 + 0x44) - *piVar9);
					d = GetDirection(
					    *(int *)((int)plr + iVar13 + 0x40), *(int *)((int)plr + iVar13 + 0x44), *piVar8, *piVar9);
				} else {
					piVar10 = (int *)((int)plr + iVar13 + 0x40);
					piVar9 = (int *)((int)plr + i_00 * 0x55ec + 0x40);
					iVar3 = abs(*piVar10 - *piVar9);
					piVar8 = (int *)((int)plr + i_00 * 0x55ec + 0x44);
					piVar11 = (int *)((int)plr + iVar13 + 0x44);
					iVar4 = abs(*piVar11 - *piVar8);
					d = GetDirection(*piVar10, *piVar11, *piVar9, *piVar8);
				}
				if ((iVar3 < 2) && (iVar4 < 2)) {
					ClrPlrPath(pnum);
					iVar3 = *(int *)(i_00 * 0xe8 + 0x10151b04);
					if ((iVar3 == 0) || (iVar3 == 0x24)) {
						StartAttack(pnum, d);
					} else {
						TalktoMonster(i_00);
					}
					*piVar12 = -1;
				}
			}
			if (**(char **)(i + -0x77e4) == '\0') {
				uVar7 = 0x800;
				uVar5 = 0x400;
				uVar6 = 0x200;
			} else {
				iVar3 = (int)*(char *)((int)plr + iVar13 + 0x15c) * 0xc;
				uVar7 = (ulonglong) * (uint *)(&DAT_1010ea18 + iVar3);
				uVar5 = (ulonglong) * (uint *)(iVar3 + 0x1010ea1c);
				uVar6 = (ulonglong) * (uint *)(iVar3 + 0x1010ea20);
			}
			cVar1 = *pcVar2;
			if (((longlong)cVar1 & 0xffffffffU) < 9) {
				UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(i + -0x5a08) + (int)cVar1 * 4);
				// WARNING: Could not recover jumptable at 0x100980d4. Too many branches
				// WARNING: Treating indirect jump as call
				(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE, uVar5, uVar6, uVar7);
				return;
			}
			*(undefined *)((int)plr + iVar13 + 4) = *(undefined *)((int)plr + iVar13 + 5);
			*(undefined *)((int)plr + iVar13 + 5) = *(undefined *)((int)plr + iVar13 + 6);
			*(undefined *)((int)plr + iVar13 + 6) = *(undefined *)((int)plr + iVar13 + 7);
			*(undefined *)((int)plr + iVar13 + 7) = *(undefined *)((int)plr + iVar13 + 8);
			*(undefined *)((int)plr + iVar13 + 8) = *(undefined *)((int)plr + iVar13 + 9);
			*(undefined *)((int)plr + iVar13 + 9) = *(undefined *)((int)plr + iVar13 + 10);
			*(undefined *)((int)plr + iVar13 + 10) = *(undefined *)((int)plr + iVar13 + 0xb);
			*(undefined *)((int)plr + iVar13 + 0xb) = *(undefined *)((int)plr + iVar13 + 0xc);
			*(undefined *)((int)plr + iVar13 + 0xc) = *(undefined *)((int)plr + iVar13 + 0xd);
			*(undefined *)((int)plr + iVar13 + 0xd) = *(undefined *)((int)plr + iVar13 + 0xe);
			*(undefined *)((int)plr + iVar13 + 0xe) = *(undefined *)((int)plr + iVar13 + 0xf);
			*(undefined *)((int)plr + iVar13 + 0xf) = *(undefined *)((int)plr + iVar13 + 0x10);
			*(undefined *)((int)plr + iVar13 + 0x10) = *(undefined *)((int)plr + iVar13 + 0x11);
			*(undefined *)((int)plr + iVar13 + 0x11) = *(undefined *)((int)plr + iVar13 + 0x12);
			*(undefined *)((int)plr + iVar13 + 0x12) = *(undefined *)((int)plr + iVar13 + 0x13);
			*(undefined *)((int)plr + iVar13 + 0x13) = *(undefined *)((int)plr + iVar13 + 0x14);
			*(undefined *)((int)plr + iVar13 + 0x14) = *(undefined *)((int)plr + iVar13 + 0x15);
			*(undefined *)((int)plr + iVar13 + 0x15) = *(undefined *)((int)plr + iVar13 + 0x16);
			*(undefined *)((int)plr + iVar13 + 0x16) = *(undefined *)((int)plr + iVar13 + 0x17);
			*(undefined *)((int)plr + iVar13 + 0x17) = *(undefined *)((int)plr + iVar13 + 0x18);
			*(undefined *)((int)plr + iVar13 + 0x18) = *(undefined *)((int)plr + iVar13 + 0x19);
			*(undefined *)((int)plr + iVar13 + 0x19) = *(undefined *)((int)plr + iVar13 + 0x1a);
			*(undefined *)((int)plr + iVar13 + 0x1a) = *(undefined *)((int)plr + iVar13 + 0x1b);
			*(undefined *)((int)plr + iVar13 + 0x1b) = *(undefined *)((int)plr + iVar13 + 0x1c);
			*(undefined *)((int)plr + iVar13 + 0x1c) = 0xff;
			if (((PlayerStruct *)((int)plr + iVar13))->_pmode == 0) {
				StartStand(pnum, *(int *)((int)plr + iVar13 + 0x70));
				*piVar12 = -1;
			}
		}
	}
	return;
}

BOOL PlrDeathModeOK(int p)

{
	int iVar1;
	BOOL BVar2;

	iVar1 = 0x100f8fd0;
	if (p == myplr) {
		if (3 < (uint)p) {
			iVar1 = 0x100f8fd0;
			app_fatal("PlrDeathModeOK: illegal player %d", p);
		}
		iVar1 = *(int *)(*(int *)(iVar1 + -0x77a8) + p * 0x55ec);
		if (iVar1 == 8) {
			BVar2 = 1;
		} else {
			if (iVar1 == 0xb) {
				BVar2 = 1;
			} else {
				if (iVar1 == 10) {
					BVar2 = 1;
				} else {
					BVar2 = 0;
				}
			}
		}
	} else {
		BVar2 = 1;
	}
	return BVar2;
}

void ValidatePlayer(void)

{
	char *pcVar1;
	int *piVar2;
	int iVar3;
	ulonglong uVar4;
	int iVar6;
	PlayerStruct *pPVar7;
	ulonglong uVar5;
	int iVar8;
	int iVar9;
	longlong lVar10;
	ulonglong uVar11;
	ulonglong uVar12;

	iVar3 = 0x100f8fd0;
	uVar11 = 0;
	uVar12 = 0;
	if (3 < (uint)myplr) {
		iVar3 = 0x100f8fd0;
		app_fatal("ValidatePlayer: illegal player %d");
	}
	iVar6 = myplr * 0x55ec;
	pcVar1 = (char *)((int)plr + iVar6 + 0x1b4);
	if ('2' < *pcVar1) {
		*pcVar1 = '2';
	}
	iVar8 = *(int *)((int)plr + iVar6 + 0x1c0);
	piVar2 = (int *)((int)plr + iVar6 + 0x1b8);
	if (iVar8 < *piVar2) {
		*piVar2 = iVar8;
	}
	pPVar7 = (PlayerStruct *)((int)plr + iVar6);
	iVar9 = 0;
	iVar8 = 0;
	while (iVar8 < *(int *)((int)plr + iVar6 + 0x4828)) {
		if (pPVar7->InvList[0]._iPLGetHit == 0xb) {
			if (5000 < *(int *)(pPVar7->InvList[1]._iName + 0x37)) {
				*(undefined4 *)(pPVar7->InvList[1]._iName + 0x37) = 5000;
			}
			iVar9 = iVar9 + *(int *)(pPVar7->InvList[1]._iName + 0x37);
		}
		pPVar7 = (PlayerStruct *)&pPVar7->_pDexterity;
		iVar8 = iVar8 + 1;
	}
	iVar6 = myplr * 0x55ec;
	piVar2 = (int *)((int)plr + iVar6 + 0x1c8);
	if (iVar9 != *piVar2) {
		*piVar2 = iVar9;
	}
	iVar8 = (int)*(char *)((int)plr + iVar6 + 0x15c);
	if (*(int *)(&DAT_1010ea84 + iVar8 * 0x10) < *(int *)((int)plr + iVar6 + 0x164)) {
		*(int *)((int)plr + iVar6 + 0x164) = *(int *)(&DAT_1010ea84 + iVar8 * 0x10);
	}
	iVar8 = iVar8 * 0x10;
	piVar2 = (int *)((int)plr + iVar6 + 0x16c);
	if (*(int *)(iVar8 + 0x1010ea88) < *piVar2) {
		*piVar2 = *(int *)(iVar8 + 0x1010ea88);
	}
	piVar2 = (int *)((int)plr + iVar6 + 0x174);
	if (*(int *)(iVar8 + 0x1010ea8c) < *piVar2) {
		*piVar2 = *(int *)(iVar8 + 0x1010ea8c);
	}
	piVar2 = (int *)((int)plr + iVar6 + 0x17c);
	if (*(int *)(iVar8 + 0x1010ea90) < *piVar2) {
		*piVar2 = *(int *)(iVar8 + 0x1010ea90);
	}
	iVar6 = iVar6 + 0x10186ec1;
	lVar10 = 1;
	iVar3 = *(int *)(iVar3 + -0x769c);
	do {
		if (*(int *)(iVar3 + 0x44) != -1) {
			uVar5 = 1;
			uVar4 = 64bitAndOperator(0, 1, lVar10 + -1);
			uVar11 = uVar11 | uVar5;
			uVar12 = uVar12 | uVar4;
			if ('\x0f' < *(char *)(iVar6 + 0xc1)) {
				*(undefined *)(iVar6 + 0xc1) = 0xf;
			}
		}
		lVar10 = lVar10 + 1;
		iVar6 = iVar6 + 1;
		iVar3 = iVar3 + 0x38;
	} while ((int)lVar10 < 0x25);
	iVar3 = myplr * 0x55ec;
	*(uint *)((int)plr + iVar3 + 0x108) = *(uint *)((int)plr + iVar3 + 0x108) & (uint)uVar11;
	*(uint *)((int)plr + iVar3 + 0x104) = *(uint *)((int)plr + iVar3 + 0x104) & (uint)uVar12;
	return;
}

void CheckCheatStats(int pnum)

{
	int *piVar1;

	pnum = pnum * 0x55ec;
	piVar1 = (int *)((int)plr + pnum + 0x160);
	if (0x2ee < *piVar1) {
		*piVar1 = 0x2ee;
	}
	piVar1 = (int *)((int)plr + pnum + 0x170);
	if (0x2ee < *piVar1) {
		*piVar1 = 0x2ee;
	}
	piVar1 = (int *)((int)plr + pnum + 0x168);
	if (0x2ee < *piVar1) {
		*piVar1 = 0x2ee;
	}
	piVar1 = (int *)((int)plr + pnum + 0x178);
	if (0x2ee < *piVar1) {
		*piVar1 = 0x2ee;
	}
	piVar1 = (int *)((int)plr + pnum + 0x194);
	if (0x1f400 < *piVar1) {
		*piVar1 = 0x1f400;
	}
	piVar1 = (int *)((int)plr + pnum + 0x1a8);
	if (*piVar1 < 0x1f401) {
		return;
	}
	*piVar1 = 0x1f400;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ProcessPlayers(void)

{
	char *pcVar1;
	char cVar2;
	undefined8 uVar3;
	BOOL BVar4;
	int pnum;
	PlayerStruct *pPVar5;
	longlong lVar6;

	uVar3 = 0x100f8fd0;
	pPVar5 = plr;
	if (3 < (uint)myplr) {
		app_fatal("ProcessPlayers: illegal player %d");
	}
	lVar6 = 4;
	do {
		lVar6 = lVar6 + -1;
	} while (lVar6 != 0);
	pcVar1 = (char *)((int)plr + myplr * 0x55ec + 0x5592);
	cVar2 = *pcVar1;
	if (cVar2 != '\0') {
		*pcVar1 = cVar2 + -1;
	}
	if ((0 < _DAT_1012d924) && (_DAT_1012d924 = _DAT_1012d924 + -1, _DAT_1012d924 == 0)) {
		PlaySFX(**(int **)((int)uVar3 + -0x71dc));
	}
	ValidatePlayer();
	pnum = 0;
	do {
		if (((pPVar5->plractive != false) && ((uint)currlevel == pPVar5->plrlevel)) && ((pnum == myplr || (pPVar5->_pLvlChanging == false)))) {
			CheckCheatStats(pnum);
			BVar4 = PlrDeathModeOK(pnum);
			if ((BVar4 == 0) && (pPVar5->_pHitPoints >> 6 == 0)) {
				SyncPlrKill(pnum, -1);
			}
			if (pnum == myplr) {
				if (((pPVar5[1]._peflag & 0x40U) != 0) && (currlevel != 0)) {
					pPVar5->_pHitPoints = pPVar5->_pHitPoints + -4;
					pPVar5->_pHPBase = pPVar5->_pHPBase + -4;
					if (pPVar5->_pHitPoints >> 6 == 0) {
						SyncPlrKill(pnum, 0);
					}
					_DAT_101282c0 = 1;
				}
				if (((pPVar5[1]._peflag & 0x8000000U) != 0) && (0 < pPVar5->_pManaBase)) {
					pPVar5->_pManaBase = pPVar5->_pManaBase - pPVar5->_pMana;
					pPVar5->_pMana = 0;
					_DAT_101282bc = 1;
				}
			}
			if ((uint)pPVar5->_pmode < 0xb) {
				// WARNING: Could not recover jumptable at 0x1009929c. Too many branches
				// WARNING: Treating indirect jump as call
				(**(code **)(*(int *)((int)uVar3 + -0x5a1c) + pPVar5->_pmode * 4))();
				return;
			}
			CheckNewPath(pnum);
			pPVar5->_pAnimCnt = pPVar5->_pAnimCnt + 1;
			if (pPVar5->_pAnimDelay < pPVar5->_pAnimCnt) {
				pPVar5->_pAnimCnt = 0;
				pPVar5->_pAnimFrame = pPVar5->_pAnimFrame + 1;
				if (pPVar5->_pAnimLen < pPVar5->_pAnimFrame) {
					pPVar5->_pAnimFrame = 1;
				}
			}
		}
		pnum = pnum + 1;
		pPVar5 = (PlayerStruct *)&pPVar5[1]._pSpellFlags;
		if (3 < pnum) {
			return;
		}
	} while (true);
}

void ClrPlrPath(int pnum)

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
	if (3 < ((longlong)pnum & 0xffffffffU)) {
		iVar1 = 0x100f8fd0;
		app_fatal("ClrPlrPath: illegal player %d", (longlong)pnum);
	}
	FillMemory((char)*(undefined4 *)(iVar1 + -0x77a8) + (char)pnum * -0x14 + '\x04', 0x19, 0xff, in_r6, in_r7, in_r8,
	    in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

BOOL PosOkPlayer(int pnum, int x, int y)

{
	short sVar1;
	char cVar2;
	int iVar3;
	BOOL BVar5;
	ulonglong uVar4;

	iVar3 = 0x100f8fd0;
	if (x < 0) {
		BVar5 = 0;
	} else {
		if (x < 0x70) {
			if (y < 0) {
				BVar5 = 0;
			} else {
				if (y < 0x70) {
					BVar5 = SolidLoc(x, y);
					if (BVar5 == 0) {
						if (*(short *)(**(int **)(iVar3 + -0x757c) + x * 0xe0 + y * 2) == 0) {
							BVar5 = 0;
						} else {
							cVar2 = *(char *)(**(int **)(iVar3 + -0x7680) + x * 0x70 + y);
							if (cVar2 != '\0') {
								if (cVar2 < '\x01') {
									uVar4 = -((longlong)cVar2 + 1);
								} else {
									uVar4 = (longlong)cVar2 - 1;
								}
								if ((((int)uVar4 != pnum) && ((uVar4 & 0xffffffff) < 4)) && (*(int *)(*(int *)(iVar3 + -0x77a8) + (int)uVar4 * 0x55ec + 0x194) != 0)) {
									return 0;
								}
							}
							sVar1 = *(short *)(**(int **)(iVar3 + -0x767c) + x * 0xe0 + y * 2);
							if (sVar1 != 0) {
								if (**(char **)(iVar3 + -0x77e4) == '\0') {
									return 0;
								}
								if (sVar1 < 1) {
									return 0;
								}
								if (*(int *)(*(int *)(iVar3 + -0x7754) + ((int)sVar1 + -1) * 0xe8 + 0x98) >> 6 != 0) {
									return 0;
								}
							}
							cVar2 = *(char *)(**(int **)(iVar3 + -0x7684) + x * 0x70 + y);
							if (cVar2 != '\0') {
								if (cVar2 < '\x01') {
									cVar2 = -(cVar2 + '\x01');
								} else {
									cVar2 = cVar2 + -1;
								}
								if (*(int *)(*(int *)(iVar3 + -0x7688) + (int)cVar2 * 0x78 + 0x38) != 0) {
									return 0;
								}
							}
							BVar5 = 1;
						}
					} else {
						BVar5 = 0;
					}
				} else {
					BVar5 = 0;
				}
			}
		} else {
			BVar5 = 0;
		}
	}
	return BVar5;
}

void MakePlrPath(int pnum, int xx, int yy, BOOL endspace)

{
	char cVar1;
	int *piVar2;
	int *piVar3;
	int iVar4;
	int sx;
	int iVar5;

	iVar4 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar4 = 0x100f8fd0;
		app_fatal("MakePlrPath: illegal player %d", pnum);
	}
	iVar5 = pnum * 0x55ec;
	piVar2 = (int *)((int)plr + iVar5 + 0x48);
	*piVar2 = xx;
	piVar3 = (int *)((int)plr + iVar5 + 0x4c);
	*piVar3 = yy;
	sx = *(int *)((int)plr + iVar5 + 0x40);
	if ((xx != sx) || (yy != *(int *)((int)plr + iVar5 + 0x44))) {
		sx = FindPath(*(PosOk **)(iVar4 + -0x6f98), pnum, sx, *(int *)((int)plr + iVar5 + 0x44), xx, yy,
		    (char *)((int)plr + iVar5 + 4));
		if (sx != 0) {
			if (endspace == 0) {
				sx = sx + -1;
				cVar1 = *(char *)((int)plr + iVar5 + sx + 4);
				if (((longlong)cVar1 & 0xffffffffU) < 9) {
					// WARNING: Could not recover jumptable at 0x100996d4. Too many branches
					// WARNING: Treating indirect jump as call
					(**(code **)(*(int *)(iVar4 + -0x5a28) + (int)cVar1 * 4))();
					return;
				}
				*piVar2 = xx;
				*piVar3 = yy;
			}
			*(undefined *)((int)plr + iVar5 + sx + 4) = 0xff;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckPlrSpell(void)

{
	char st;
	int iVar1;
	BOOL BVar2;
	int sn;
	int sn_00;
	WORD wParam2;

	sn = 0x100f8fd0;
	BVar2 = 0;
	if (3 < (uint)myplr) {
		sn = 0x100f8fd0;
		app_fatal("CheckPlrSpell: illegal player %d");
	}
	iVar1 = myplr * 0x55ec;
	sn_00 = *(int *)((int)plr + iVar1 + 0xb4);
	if (sn_00 == -1) {
		st = *(char *)((int)plr + iVar1 + 0x15c);
		if (st == '\0') {
			PlaySFX(0x2f1);
		} else {
			if (st == '\x01') {
				PlaySFX(0x284);
			} else {
				if (st == '\x02') {
					PlaySFX(0x21d);
				}
			}
		}
	} else {
		if ((**(char **)(sn + -0x7794) == '\0') && (*(int *)(*(int *)(sn + -0x769c) + sn_00 * 0x38 + 0x18) == 0)) {
			st = *(char *)((int)plr + iVar1 + 0x15c);
			if (st == '\0') {
				PlaySFX(0x2ea);
			} else {
				if (st == '\x01') {
					PlaySFX(0x27d);
				} else {
					if (st == '\x02') {
						PlaySFX(0x216);
					}
				}
			}
		} else {
			if ((**(int **)(sn + -0x7744) == 1) && ((((**(int **)(sn + -0x76ac) < 0x160 && ((**(int **)(sn + -0x77c4) == 0 || (0x13f < MouseX)))) && ((**(int **)(sn + -0x77bc) == 0 || (MouseX < 0x141)))) || ((**(int **)(sn + -0x76ac) < 0x160 && ((((sn_00 == 2 || (sn_00 == 5)) || (sn_00 == 9)) || (sn_00 - 0x1aU < 2)))))))) {
				st = *(char *)((int)plr + iVar1 + 0xb8);
				if (st == '\x02') {
					BVar2 = UseScroll();
				} else {
					if (st < '\x02') {
						if (-1 < st) {
							BVar2 = CheckSpell(myplr, sn_00, st, 0);
						}
					} else {
						if (st < '\x04') {
							BVar2 = UseStaff();
						}
					}
				}
				if (BVar2 == 0) {
					if (*(char *)((int)plr + myplr * 0x55ec + 0xb8) == '\x01') {
						st = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
						if (st == '\0') {
							PlaySFX(0x2f2);
						} else {
							if (st == '\x01') {
								PlaySFX(0x285);
							} else {
								if (st == '\x02') {
									PlaySFX(0x21e);
								}
							}
						}
					}
				} else {
					sn_00 = myplr * 0x55ec;
					sn = *(int *)((int)plr + sn_00 + 0xb4);
					if (sn == 6) {
						sn = GetDirection(*(int *)((int)plr + sn_00 + 0x38), *(int *)((int)plr + sn_00 + 0x3c),
						    _DAT_10128600, _DAT_101285fc);
						sn_00 = GetSpellLevel(myplr, *(int *)((int)plr + myplr * 0x55ec + 0xb4));
						NetSendCmdLocParam3(1, 'T', (BYTE)_DAT_10128600, (BYTE)_DAT_101285fc,
						    (WORD) * (undefined4 *)((int)plr + myplr * 0x55ec + 0xb4), (WORD)sn, (WORD)sn_00);
					} else {
						if (_DAT_101285f8 == -1) {
							if (DAT_101285f4 == -1) {
								GetSpellLevel(myplr, sn);
								NetSendCmdParam3(1, '\x0e', (ushort)_DAT_10128600 & 0xff, (ushort)_DAT_101285fc & 0xff,
								    (WORD) * (undefined4 *)((int)plr + myplr * 0x55ec + 0xb4));
							} else {
								sn = GetSpellLevel(myplr, sn);
								NetSendCmdLocParam2(1, '\x17', DAT_101285f4,
								    (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0xb4), (WORD)sn, wParam2);
							}
						} else {
							sn = GetSpellLevel(myplr, sn);
							NetSendCmdLocParam2(1, '\x16', (BYTE)_DAT_101285f8,
							    (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0xb4), (WORD)sn, wParam2);
						}
					}
				}
			}
		}
	}
	return;
}

void SyncPlrAnim(int pnum)

{
	uint uVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	if (3 < ((longlong)pnum & 0xffffffffU)) {
		iVar2 = 0x100f8fd0;
		app_fatal("SyncPlrAnim: illegal player %d", (longlong)pnum);
	}
	uVar1 = ((PlayerStruct *)((int)plr + pnum * 0x55ec))->_pmode;
	if (uVar1 < 0xc) {
		// WARNING: Could not recover jumptable at 0x10099b40. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(*(int *)(iVar2 + -0x5a38) + uVar1 * 4))();
		return;
	}
	app_fatal(*(char **)(iVar2 + -0x5a34));
	return;
}

void SyncInitPlrPos(int pnum)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	int *piVar4;
	bool bVar5;
	undefined8 uVar6;
	int iVar7;
	BOOL BVar8;
	int *piVar9;
	int iVar10;
	int *piVar11;
	uint uVar12;
	int iVar13;
	int y;
	int x;
	int iVar14;

	uVar6 = 0x100f8fd0;
	iVar14 = pnum * 0x55ec;
	piVar3 = (int *)((int)plr + iVar14 + 0x38);
	piVar1 = (int *)((int)plr + iVar14 + 0x48);
	*piVar1 = *piVar3;
	piVar4 = (int *)((int)plr + iVar14 + 0x3c);
	piVar2 = (int *)((int)plr + iVar14 + 0x4c);
	*piVar2 = *piVar4;
	if ((gbMaxPlayers != '\x01') && ((uint)currlevel == *(uint *)((int)plr + iVar14 + 0x34))) {
		piVar9 = (int *)&DAT_1010e9ac;
		uVar12 = 0;
		piVar11 = (int *)&DAT_1010e9d0;
		do {
			x = *(int *)((int)plr + iVar14 + 0x38) + *piVar9;
			y = *(int *)((int)plr + iVar14 + 0x3c) + *piVar11;
			BVar8 = PosOkPlayer(pnum, x, y);
			if (BVar8 != 0)
				break;
			uVar12 = uVar12 + 1;
			piVar11 = piVar11 + 1;
			piVar9 = piVar9 + 1;
		} while (uVar12 < 8);
		BVar8 = PosOkPlayer(pnum, x, y);
		iVar7 = (int)uVar6;
		if (BVar8 == 0) {
			bVar5 = false;
			iVar13 = 1;
			while ((iVar7 = (int)uVar6, iVar13 < 0x32 && (!bVar5))) {
				iVar7 = -iVar13;
				while ((iVar7 <= iVar13 && (!bVar5))) {
					y = iVar7 + *(int *)((int)plr + iVar14 + 0x3c);
					iVar10 = -iVar13;
					while ((iVar10 <= iVar13 && (!bVar5))) {
						x = iVar10 + *(int *)((int)plr + iVar14 + 0x38);
						BVar8 = PosOkPlayer(pnum, x, y);
						if ((BVar8 != 0) && (BVar8 = PosOkPortal((uint)currlevel, x, y), BVar8 == 0)) {
							bVar5 = true;
						}
						iVar10 = iVar10 + 1;
					}
					iVar7 = iVar7 + 1;
				}
				iVar13 = iVar13 + 1;
			}
		}
		*piVar3 = x;
		piVar3 = *(int **)(iVar7 + -0x7680);
		*piVar4 = y;
		piVar4 = *(int **)(iVar7 + -0x77ac);
		*(char *)(*piVar3 + x * 0x70 + y) = (char)pnum + '\x01';
		if (pnum == *piVar4) {
			piVar3 = *(int **)(iVar7 + -0x77b0);
			*(int *)((int)plr + iVar14 + 0x40) = x;
			piVar4 = *(int **)(iVar7 + -0x77b4);
			*(int *)((int)plr + iVar14 + 0x44) = y;
			*piVar1 = x;
			*piVar2 = y;
			*piVar3 = x;
			*piVar4 = y;
		}
	}
	return;
}

void SyncInitPlr(int pnum)

{
	if (3 < ((longlong)pnum & 0xffffffffU)) {
		app_fatal("SyncInitPlr: illegal player %d", (longlong)pnum);
	}
	SetPlrAnims(pnum);
	SyncInitPlrPos(pnum);
	return;
}

void CheckStats(int p)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	int iVar7;
	int iVar8;
	int unaff_r30;
	longlong lVar9;

	iVar5 = 0x100f8fd0;
	if (3 < (uint)p) {
		iVar5 = 0x100f8fd0;
		app_fatal("CheckStats: illegal player %d", p);
	}
	p = p * 0x55ec;
	cVar1 = *(char *)((int)plr + p + 0x15c);
	if (cVar1 == '\0') {
		unaff_r30 = 0;
	} else {
		if (cVar1 == '\x01') {
			unaff_r30 = 1;
		} else {
			if (cVar1 == '\x02') {
				unaff_r30 = 2;
			}
		}
	}
	piVar6 = (int *)(*(int *)(iVar5 + -0x7760) + unaff_r30 * 0x10);
	lVar9 = 2;
	iVar5 = *piVar6;
	iVar2 = piVar6[1];
	iVar7 = 0;
	iVar3 = piVar6[2];
	iVar4 = piVar6[3];
	do {
		if (iVar7 == 2) {
			iVar8 = *(int *)((int)plr + p + 0x174);
			if (iVar3 < iVar8) {
				*(int *)((int)plr + p + 0x174) = iVar3;
			} else {
				if (iVar8 < 0) {
					*(undefined4 *)((int)plr + p + 0x174) = 0;
				}
			}
		} else {
			if (iVar7 < 2) {
				if (iVar7 == 0) {
					iVar8 = *(int *)((int)plr + p + 0x164);
					if (iVar5 < iVar8) {
						*(int *)((int)plr + p + 0x164) = iVar5;
					} else {
						if (iVar8 < 0) {
							*(undefined4 *)((int)plr + p + 0x164) = 0;
						}
					}
				} else {
					if (-1 < iVar7) {
						iVar8 = *(int *)((int)plr + p + 0x16c);
						if (iVar2 < iVar8) {
							*(int *)((int)plr + p + 0x16c) = iVar2;
						} else {
							if (iVar8 < 0) {
								*(undefined4 *)((int)plr + p + 0x16c) = 0;
							}
						}
					}
				}
			} else {
				if (iVar7 < 4) {
					iVar8 = *(int *)((int)plr + p + 0x17c);
					if (iVar4 < iVar8) {
						*(int *)((int)plr + p + 0x17c) = iVar4;
					} else {
						if (iVar8 < 0) {
							*(undefined4 *)((int)plr + p + 0x17c) = 0;
						}
					}
				}
			}
		}
		iVar8 = iVar7 + 1;
		if (iVar8 == 2) {
			iVar8 = *(int *)((int)plr + p + 0x174);
			if (iVar3 < iVar8) {
				*(int *)((int)plr + p + 0x174) = iVar3;
			} else {
				if (iVar8 < 0) {
					*(undefined4 *)((int)plr + p + 0x174) = 0;
				}
			}
		} else {
			if (iVar8 < 2) {
				if (iVar7 == -1) {
					iVar8 = *(int *)((int)plr + p + 0x164);
					if (iVar5 < iVar8) {
						*(int *)((int)plr + p + 0x164) = iVar5;
					} else {
						if (iVar8 < 0) {
							*(undefined4 *)((int)plr + p + 0x164) = 0;
						}
					}
				} else {
					if (-1 < iVar8) {
						iVar8 = *(int *)((int)plr + p + 0x16c);
						if (iVar2 < iVar8) {
							*(int *)((int)plr + p + 0x16c) = iVar2;
						} else {
							if (iVar8 < 0) {
								*(undefined4 *)((int)plr + p + 0x16c) = 0;
							}
						}
					}
				}
			} else {
				if (iVar8 < 4) {
					iVar8 = *(int *)((int)plr + p + 0x17c);
					if (iVar4 < iVar8) {
						*(int *)((int)plr + p + 0x17c) = iVar4;
					} else {
						if (iVar8 < 0) {
							*(undefined4 *)((int)plr + p + 0x17c) = 0;
						}
					}
				}
			}
		}
		iVar7 = iVar7 + 2;
		lVar9 = lVar9 + -1;
	} while (lVar9 != 0);
	return;
}

void ModifyPlrStr(int p, int l)

{
	int *piVar1;
	int *piVar2;
	uint uVar3;
	char *pcVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar6 = 0x100f8fd0;
	if (3 < (uint)p) {
		iVar6 = 0x100f8fd0;
		app_fatal("ModifyPlrStr: illegal player %d", p);
	}
	iVar7 = p * 0x55ec;
	pcVar4 = (char *)((int)plr + iVar7 + 0x15c);
	piVar1 = (int *)((int)plr + iVar7 + 0x164);
	iVar5 = *(int *)(*(int *)(iVar6 + -0x7760) + (int)*pcVar4 * 0x10);
	if (iVar5 < l + *piVar1) {
		l = iVar5 - *piVar1;
	}
	piVar2 = (int *)((int)plr + iVar7 + 0x160);
	*piVar2 = *(int *)((int)plr + iVar7 + 0x160) + l;
	*piVar1 = *piVar1 + l;
	if (*pcVar4 == '\x01') {
		iVar5 = (int)*(char *)((int)plr + iVar7 + 0x1b4) * (*piVar2 + *(int *)((int)plr + iVar7 + 0x170));
		uVar3 = iVar5 / 200 + (iVar5 >> 0x1f);
		*(int *)((int)plr + iVar7 + 0x184) = uVar3 + (uVar3 >> 0x1f);
	} else {
		iVar5 = *piVar2 * (int)*(char *)((int)plr + iVar7 + 0x1b4);
		uVar3 = iVar5 / 100 + (iVar5 >> 0x1f);
		*(int *)((int)plr + iVar7 + 0x184) = uVar3 + (uVar3 >> 0x1f);
	}
	CalcPlrInv(p, 1);
	if (p == **(int **)(iVar6 + -0x77ac)) {
		NetSendCmdParam1(0, 'O', (WORD)*piVar1);
	}
	return;
}

void ModifyPlrMag(int p, int l)

{
	int *piVar1;
	int iVar2;
	char *pcVar3;
	int iVar4;
	int iVar5;

	iVar4 = 0x100f8fd0;
	if (3 < (uint)p) {
		iVar4 = 0x100f8fd0;
		app_fatal("ModifyPlrMag: illegal player %d", p);
	}
	iVar5 = p * 0x55ec;
	pcVar3 = (char *)((int)plr + iVar5 + 0x15c);
	piVar1 = (int *)((int)plr + iVar5 + 0x16c);
	iVar2 = *(int *)(*(int *)(iVar4 + -0x7760) + (int)*pcVar3 * 0x10 + 4);
	if (iVar2 < l + *piVar1) {
		l = iVar2 - *piVar1;
	}
	*(int *)((int)plr + iVar5 + 0x168) = *(int *)((int)plr + iVar5 + 0x168) + l;
	*piVar1 = *piVar1 + l;
	iVar2 = l << 6;
	if (*pcVar3 == '\x02') {
		iVar2 = l << 7;
	}
	*(int *)((int)plr + iVar5 + 0x1a4) = *(int *)((int)plr + iVar5 + 0x1a4) + iVar2;
	*(int *)((int)plr + iVar5 + 0x1ac) = *(int *)((int)plr + iVar5 + 0x1ac) + iVar2;
	if ((*(uint *)((int)plr + iVar5 + 0x5568) & 0x8000000) == 0) {
		*(int *)((int)plr + iVar5 + 0x1a0) = *(int *)((int)plr + iVar5 + 0x1a0) + iVar2;
		*(int *)((int)plr + iVar5 + 0x1a8) = *(int *)((int)plr + iVar5 + 0x1a8) + iVar2;
	}
	CalcPlrInv(p, 1);
	if (p == **(int **)(iVar4 + -0x77ac)) {
		NetSendCmdParam1(0, 'P', (WORD)*piVar1);
	}
	return;
}

void ModifyPlrDex(int p, int l)

{
	int *piVar1;
	int *piVar2;
	uint uVar3;
	char *pcVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar6 = 0x100f8fd0;
	if (3 < (uint)p) {
		iVar6 = 0x100f8fd0;
		app_fatal("ModifyPlrDex: illegal player %d", p);
	}
	iVar7 = p * 0x55ec;
	pcVar4 = (char *)((int)plr + iVar7 + 0x15c);
	piVar1 = (int *)((int)plr + iVar7 + 0x174);
	iVar5 = *(int *)(*(int *)(iVar6 + -0x7760) + (int)*pcVar4 * 0x10 + 8);
	if (iVar5 < l + *piVar1) {
		l = iVar5 - *piVar1;
	}
	piVar2 = (int *)((int)plr + iVar7 + 0x170);
	*piVar2 = *(int *)((int)plr + iVar7 + 0x170) + l;
	*piVar1 = *piVar1 + l;
	CalcPlrInv(p, 1);
	if (*pcVar4 == '\x01') {
		iVar5 = (int)*(char *)((int)plr + iVar7 + 0x1b4) * (*(int *)((int)plr + iVar7 + 0x160) + *piVar2);
		uVar3 = iVar5 / 200 + (iVar5 >> 0x1f);
		*(int *)((int)plr + iVar7 + 0x184) = uVar3 + (uVar3 >> 0x1f);
	}
	if (p == **(int **)(iVar6 + -0x77ac)) {
		NetSendCmdParam1(0, 'Q', (WORD)*piVar1);
	}
	return;
}

void ModifyPlrVit(int p, int l)

{
	int *piVar1;
	int iVar2;
	char *pcVar3;
	int iVar4;
	int iVar5;

	iVar4 = 0x100f8fd0;
	if (3 < (uint)p) {
		iVar4 = 0x100f8fd0;
		app_fatal("ModifyPlrVit: illegal player %d", p);
	}
	iVar5 = p * 0x55ec;
	pcVar3 = (char *)((int)plr + iVar5 + 0x15c);
	piVar1 = (int *)((int)plr + iVar5 + 0x17c);
	iVar2 = *(int *)(*(int *)(iVar4 + -0x7760) + (int)*pcVar3 * 0x10 + 0xc);
	if (iVar2 < l + *piVar1) {
		l = iVar2 - *piVar1;
	}
	*(int *)((int)plr + iVar5 + 0x178) = *(int *)((int)plr + iVar5 + 0x178) + l;
	*piVar1 = *piVar1 + l;
	iVar2 = l << 6;
	if (*pcVar3 == '\0') {
		iVar2 = l << 7;
	}
	*(int *)((int)plr + iVar5 + 0x18c) = *(int *)((int)plr + iVar5 + 0x18c) + iVar2;
	*(int *)((int)plr + iVar5 + 400) = *(int *)((int)plr + iVar5 + 400) + iVar2;
	*(int *)((int)plr + iVar5 + 0x194) = *(int *)((int)plr + iVar5 + 0x194) + iVar2;
	*(int *)((int)plr + iVar5 + 0x198) = *(int *)((int)plr + iVar5 + 0x198) + iVar2;
	CalcPlrInv(p, 1);
	if (p == **(int **)(iVar4 + -0x77ac)) {
		NetSendCmdParam1(0, 'R', (WORD)*piVar1);
	}
	return;
}

void SetPlayerHitPoints(int pnum, int val)

{
	int *piVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0x100f8fd0;
	if (3 < (uint)pnum) {
		iVar3 = 0x100f8fd0;
		app_fatal("SetPlayerHitPoints: illegal player %d", pnum);
	}
	iVar2 = pnum * 0x55ec;
	piVar1 = *(int **)(iVar3 + -0x77ac);
	*(int *)((int)plr + iVar2 + 0x194) = val;
	*(int *)((int)plr + iVar2 + 0x18c) = val - (*(int *)((int)plr + iVar2 + 0x198) - *(int *)((int)plr + iVar2 + 400));
	if (pnum == *piVar1) {
		**(undefined4 **)(iVar3 + -0x76f0) = 1;
	}
	return;
}

void SetPlrStr(int p, int v)

{
	uint uVar1;
	int iVar2;
	int iVar3;

	if (3 < (uint)p) {
		app_fatal("SetPlrStr: illegal player %d", p);
	}
	iVar2 = p * 0x55ec;
	*(int *)((int)plr + iVar2 + 0x164) = v;
	CalcPlrInv(p, 1);
	if (*(char *)((int)plr + iVar2 + 0x15c) == '\x01') {
		iVar3 = (int)*(char *)((int)plr + iVar2 + 0x1b4) * (*(int *)((int)plr + iVar2 + 0x160) + *(int *)((int)plr + iVar2 + 0x170));
		uVar1 = iVar3 / 200 + (iVar3 >> 0x1f);
		*(int *)((int)plr + iVar2 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	} else {
		iVar3 = *(int *)((int)plr + iVar2 + 0x160) * (int)*(char *)((int)plr + iVar2 + 0x1b4);
		uVar1 = iVar3 / 100 + (iVar3 >> 0x1f);
		*(int *)((int)plr + iVar2 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	}
	return;
}

void SetPlrMag(int p, int v)

{
	int iVar1;
	int iVar2;

	if (3 < (uint)p) {
		app_fatal("SetPlrMag: illegal player %d", p);
	}
	iVar2 = p * 0x55ec;
	*(int *)((int)plr + iVar2 + 0x16c) = v;
	iVar1 = v << 6;
	if (*(char *)((int)plr + iVar2 + 0x15c) == '\x02') {
		iVar1 = v << 7;
	}
	*(int *)((int)plr + iVar2 + 0x1a4) = iVar1;
	*(int *)((int)plr + iVar2 + 0x1ac) = iVar1;
	CalcPlrInv(p, 1);
	return;
}

void SetPlrDex(int p, int v)

{
	uint uVar1;
	int iVar2;
	int iVar3;

	if (3 < (uint)p) {
		app_fatal("SetPlrDex: illegal player %d", p);
	}
	iVar2 = p * 0x55ec;
	*(int *)((int)plr + iVar2 + 0x174) = v;
	CalcPlrInv(p, 1);
	if (*(char *)((int)plr + iVar2 + 0x15c) == '\x01') {
		iVar3 = (int)*(char *)((int)plr + iVar2 + 0x1b4) * (*(int *)((int)plr + iVar2 + 0x160) + *(int *)((int)plr + iVar2 + 0x170));
		uVar1 = iVar3 / 200 + (iVar3 >> 0x1f);
		*(int *)((int)plr + iVar2 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	} else {
		iVar3 = *(int *)((int)plr + iVar2 + 0x160) * (int)*(char *)((int)plr + iVar2 + 0x1b4);
		uVar1 = iVar3 / 100 + (iVar3 >> 0x1f);
		*(int *)((int)plr + iVar2 + 0x184) = uVar1 + (uVar1 >> 0x1f);
	}
	return;
}

void SetPlrVit(int p, int v)

{
	int iVar1;
	int iVar2;

	if (3 < (uint)p) {
		app_fatal("SetPlrVit: illegal player %d", p);
	}
	iVar2 = p * 0x55ec;
	*(int *)((int)plr + iVar2 + 0x17c) = v;
	iVar1 = v << 6;
	if (*(char *)((int)plr + iVar2 + 0x15c) == '\0') {
		iVar1 = v << 7;
	}
	*(int *)((int)plr + iVar2 + 0x18c) = iVar1;
	*(int *)((int)plr + iVar2 + 400) = iVar1;
	CalcPlrInv(p, 1);
	return;
}

void InitDungMsgs(int pnum)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	if (3 < ((longlong)pnum & 0xffffffffU)) {
		iVar1 = 0x100f8fd0;
		app_fatal("InitDungMsgs: illegal player %d", (longlong)pnum);
	}
	*(undefined *)(*(int *)(iVar1 + -0x77a8) + pnum * 0x55ec + 0x5591) = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PlayDungMsgs(void)

{
	char cVar1;
	int iVar2;
	byte *pbVar3;

	iVar2 = 0x100f8fd0;
	if (3 < (uint)myplr) {
		iVar2 = 0x100f8fd0;
		app_fatal("PlayDungMsgs: illegal player %d");
	}
	cVar1 = **(char **)(iVar2 + -0x77e4);
	if ((((cVar1 == '\x01') && (iVar2 = myplr * 0x55ec, *(char *)((int)plr + iVar2 + 0x1f1) == '\0')) && (gbMaxPlayers == '\x01')) && (pbVar3 = (byte *)((int)plr + iVar2 + 0x5591), (*(byte *)((int)plr + iVar2 + 0x5591) & 1) == 0)) {
		_DAT_1012d924 = 0x28;
		cVar1 = *(char *)((int)plr + iVar2 + 0x15c);
		if (cVar1 == '\0') {
			_DAT_1012d920 = 0x336;
		} else {
			if (cVar1 == '\x01') {
				_DAT_1012d920 = 0x2c4;
			} else {
				if (cVar1 == '\x02') {
					_DAT_1012d920 = 0x25d;
				}
			}
		}
		*pbVar3 = *pbVar3 | 1;
		return;
	}
	if (((cVar1 == '\x05') && (iVar2 = myplr * 0x55ec, *(char *)((int)plr + iVar2 + 0x1f5) == '\0')) && ((gbMaxPlayers == '\x01' && (pbVar3 = (byte *)((int)plr + iVar2 + 0x5591), (*(byte *)((int)plr + iVar2 + 0x5591) & 2) == 0)))) {
		_DAT_1012d924 = 0x28;
		cVar1 = *(char *)((int)plr + iVar2 + 0x15c);
		if (cVar1 == '\0') {
			_DAT_1012d920 = 0x335;
		} else {
			if (cVar1 == '\x01') {
				_DAT_1012d920 = 0x2c3;
			} else {
				if (cVar1 == '\x02') {
					_DAT_1012d920 = 0x25c;
				}
			}
		}
		*pbVar3 = *pbVar3 | 2;
		return;
	}
	if (((cVar1 == '\t') && (iVar2 = myplr * 0x55ec, *(char *)((int)plr + iVar2 + 0x1f9) == '\0')) && ((gbMaxPlayers == '\x01' && (pbVar3 = (byte *)((int)plr + iVar2 + 0x5591), (*(byte *)((int)plr + iVar2 + 0x5591) & 4) == 0)))) {
		_DAT_1012d924 = 0x28;
		cVar1 = *(char *)((int)plr + iVar2 + 0x15c);
		if (cVar1 == '\0') {
			_DAT_1012d920 = 0x337;
		} else {
			if (cVar1 == '\x01') {
				_DAT_1012d920 = 0x2c5;
			} else {
				if (cVar1 == '\x02') {
					_DAT_1012d920 = 0x25e;
				}
			}
		}
		*pbVar3 = *pbVar3 | 4;
		return;
	}
	if ((((cVar1 == '\r') && (iVar2 = myplr * 0x55ec, *(char *)((int)plr + iVar2 + 0x1fd) == '\0')) && (gbMaxPlayers == '\x01')) && (pbVar3 = (byte *)((int)plr + iVar2 + 0x5591), (*(byte *)((int)plr + iVar2 + 0x5591) & 8) == 0)) {
		_DAT_1012d924 = 0x28;
		cVar1 = *(char *)((int)plr + iVar2 + 0x15c);
		if (cVar1 == '\0') {
			_DAT_1012d920 = 0x338;
		} else {
			if (cVar1 == '\x01') {
				_DAT_1012d920 = 0x2c6;
			} else {
				if (cVar1 == '\x02') {
					_DAT_1012d920 = 0x25f;
				}
			}
		}
		*pbVar3 = *pbVar3 | 8;
		return;
	}
	if (((cVar1 == '\x10') && (iVar2 = myplr * 0x55ec, *(char *)((int)plr + iVar2 + 0x1ff) == '\0')) && ((gbMaxPlayers == '\x01' && (pbVar3 = (byte *)((int)plr + iVar2 + 0x5591), (*(byte *)((int)plr + iVar2 + 0x5591) & 0x10) == 0)))) {
		_DAT_1012d924 = 0x28;
		cVar1 = *(char *)((int)plr + iVar2 + 0x15c);
		if (cVar1 == '\0') {
			_DAT_1012d920 = 0x345;
		} else {
			if (cVar1 == '\x01') {
				_DAT_1012d920 = 0x345;
			} else {
				if (cVar1 == '\x02') {
					_DAT_1012d920 = 0x345;
				}
			}
		}
		*pbVar3 = *pbVar3 | 0x10;
		return;
	}
	_DAT_1012d924 = 0;
	return;
}
