
void InitMonsterTRN(int monst, BOOL special)

{
	uint *puVar1;
	byte bVar2;
	char cVar5;
	char *pcVar4;
	longlong lVar3;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	int iVar6;
	int iVar7;
	byte *pbVar8;
	byte *pbVar9;
	int iVar10;
	byte *pbVar11;
	longlong lVar12;
	undefined in_stack_ffffffab;

	monst = monst * 0x208;
	puVar1 = (uint *)((int)Monsters + monst + 0x34b);
	cVar5 = LockMemFile((ulonglong)*puVar1, (char)special, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab);
	lVar3 = (longlong)cVar5;
	lVar12 = 0x20;
	do {
		pcVar4 = (char *)lVar3;
		if (*pcVar4 == -1) {
			*pcVar4 = '\0';
		}
		if (pcVar4[1] == -1) {
			pcVar4[1] = '\0';
		}
		if (pcVar4[2] == -1) {
			pcVar4[2] = '\0';
		}
		if (pcVar4[3] == -1) {
			pcVar4[3] = '\0';
		}
		if (pcVar4[4] == -1) {
			pcVar4[4] = '\0';
		}
		if (pcVar4[5] == -1) {
			pcVar4[5] = '\0';
		}
		if (pcVar4[6] == -1) {
			pcVar4[6] = '\0';
		}
		if (pcVar4[7] == -1) {
			pcVar4[7] = '\0';
		}
		lVar3 = lVar3 + 8;
		lVar12 = lVar12 + -1;
	} while (lVar12 != 0);
	if (special == 0) {
		iVar10 = 5;
	} else {
		iVar10 = 6;
	}
	iVar6 = 0;
	pbVar8 = (byte *)((int)Monsters + monst + 0x147);
	pbVar9 = pbVar8;
	while (iVar6 < iVar10) {
		if (((iVar6 != 1) || (bVar2 = *pbVar8, bVar2 < 0x69)) || (0x6c < bVar2)) {
			iVar7 = 0;
			pbVar11 = pbVar9;
			do {
				Cl2ApplyTrans(pbVar11 + 8, *(BYTE **)((int)Monsters + monst + 0x34b), *(int *)(pbVar9 + 0x48));
				iVar7 = iVar7 + 1;
				pbVar11 = pbVar11 + 8;
			} while (iVar7 < 8);
		}
		pbVar9 = pbVar9 + 0x4c;
		iVar6 = iVar6 + 1;
	}
	UnlockMemFile((char)*puVar1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitLevelMonsters(void)

{
	undefined4 *puVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int *piVar10;
	int iVar11;
	longlong lVar12;

	iVar3 = 0x100f8fd0;
	iVar11 = 0;
	nummtypes = 0;
	_DAT_10151700 = 0;
	_DAT_101516fc = 0;
	Monsters[1].mtype = '\0';
	Monsters[2].Anims[4].Data[2]._0_1_ = 0;
	Monsters[4].Anims[1].Data[1]._0_1_ = 0;
	Monsters[5].Anims[5].Data[5]._0_1_ = 0;
	Monsters[7].Anims[2].Data[4]._0_1_ = 0;
	Monsters[8].width2._0_1_ = 0;
	Monsters[10].Anims[3].Data[7]._0_1_ = 0;
	Monsters[12].Anims[0].Data[6]._0_1_ = 0;
	Monsters[13].Anims[5].CMem._0_1_ = 0;
	Monsters[15].Anims[1].Rate._0_1_ = 0;
	uRam101507a9 = 0;
	uRam101509b1 = 0;
	uRam10150bb9 = 0;
	uRam10150dc1 = 0;
	uRam10150fc9 = 0;
	uRam101511d1 = 0;
	ClrAllMonsters();
	puVar1 = *(undefined4 **)(iVar3 + -0x7084);
	**(undefined4 **)(iVar3 + -0x762c) = 0;
	lVar12 = 5;
	piVar10 = *(int **)(iVar3 + -0x7628);
	*puVar1 = 200;
	do {
		*piVar10 = iVar11;
		piVar10[1] = iVar11 + 1;
		piVar10[2] = iVar11 + 2;
		piVar10[3] = iVar11 + 3;
		piVar10[4] = iVar11 + 4;
		piVar10[5] = iVar11 + 5;
		piVar10[6] = iVar11 + 6;
		piVar10[7] = iVar11 + 7;
		piVar10[8] = iVar11 + 8;
		piVar10[9] = iVar11 + 9;
		piVar10[10] = iVar11 + 10;
		piVar10[0xb] = iVar11 + 0xb;
		piVar10[0xc] = iVar11 + 0xc;
		piVar10[0xd] = iVar11 + 0xd;
		piVar10[0xe] = iVar11 + 0xe;
		piVar10[0xf] = iVar11 + 0xf;
		piVar10[0x10] = iVar11 + 0x10;
		piVar10[0x11] = iVar11 + 0x11;
		piVar10[0x12] = iVar11 + 0x12;
		piVar10[0x13] = iVar11 + 0x13;
		piVar10[0x14] = iVar11 + 0x14;
		piVar10[0x15] = iVar11 + 0x15;
		piVar10[0x16] = iVar11 + 0x16;
		piVar10[0x17] = iVar11 + 0x17;
		piVar10[0x18] = iVar11 + 0x18;
		piVar10[0x19] = iVar11 + 0x19;
		iVar9 = iVar11 + 0x21;
		piVar10[0x1a] = iVar11 + 0x1a;
		iVar8 = iVar11 + 0x22;
		piVar10[0x1b] = iVar11 + 0x1b;
		iVar7 = iVar11 + 0x23;
		piVar10[0x1c] = iVar11 + 0x1c;
		iVar6 = iVar11 + 0x24;
		piVar10[0x1d] = iVar11 + 0x1d;
		iVar5 = iVar11 + 0x25;
		piVar10[0x1e] = iVar11 + 0x1e;
		iVar4 = iVar11 + 0x26;
		piVar10[0x1f] = iVar11 + 0x1f;
		iVar2 = iVar11 + 0x27;
		piVar10[0x20] = iVar11 + 0x20;
		iVar11 = iVar11 + 0x28;
		piVar10[0x21] = iVar9;
		piVar10[0x22] = iVar8;
		piVar10[0x23] = iVar7;
		piVar10[0x24] = iVar6;
		piVar10[0x25] = iVar5;
		piVar10[0x26] = iVar4;
		piVar10[0x27] = iVar2;
		piVar10 = piVar10 + 0x28;
		lVar12 = lVar12 + -1;
	} while (lVar12 != 0);
	**(undefined4 **)(iVar3 + -0x7088) = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int AddMonsterType(int type, int placeflag)

{
	byte bVar1;
	int monst;
	undefined8 uVar2;
	uint uVar3;
	byte *pbVar4;
	int iVar5;

	monst = nummtypes;
	iVar5 = 0;
	pbVar4 = (byte *)((int)&Monsters[0].trans_file + 3);
	uVar3 = 0;
	while ((iVar5 < nummtypes && (uVar3 == 0))) {
		bVar1 = *pbVar4;
		pbVar4 = pbVar4 + 0x208;
		iVar5 = iVar5 + 1;
		uVar2 = countLeadingZeros((uint)bVar1 - type);
		uVar3 = (uint)uVar2 >> 5 & 0xff;
	}
	iVar5 = iVar5 + -1;
	if (uVar3 == 0) {
		iVar5 = nummtypes * 0x208;
		nummtypes = nummtypes + 1;
		*(undefined *)((int)Monsters + iVar5 + 0x147) = (char)type;
		_DAT_10151700 = _DAT_10151700 + *(int *)(type * 0x80 + 0x101081cc);
		InitMonsterGFX(monst);
		InitMonsterSND(monst);
		iVar5 = monst;
	}
	*(byte *)((int)Monsters + iVar5 * 0x208 + 0x148) = *(byte *)((int)Monsters + iVar5 * 0x208 + 0x148) | (byte)placeflag;
	return iVar5;
}

// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void GetLevelMTypes(void)

{
	uint uVar1;
	uint uVar2;
	byte bVar3;
	undefined8 uVar4;
	int iVar5;
	BOOL BVar6;
	int iVar7;
	int v;
	undefined *puVar8;
	int iVar9;
	uint uVar10;
	int iVar11;
	undefined8 unaff_r20;
	int *piVar12;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int mt;
	undefined8 unaff_r23;
	byte *pbVar13;
	undefined8 unaff_r24;
	byte *pbVar14;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar15;
	int local_518[112];
	int aiStack856[202];
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

	uVar4 = 0x100f8fd0;
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
	pbVar13 = &DAT_1010ba48;
	puVar8 = &DAT_101081c8;
	AddMonsterType(0x6d, 2);
	if (currlevel == 0x10) {
		AddMonsterType(0x6c, 1);
		AddMonsterType(0x60, 1);
		AddMonsterType(0x6e, 2);
	} else {
		if (**(char **)((int)uVar4 + -0x77d8) == '\0') {
			BVar6 = QuestStatus(6);
			if (BVar6 != 0) {
				AddMonsterType(0x33, 2);
			}
			BVar6 = QuestStatus(2);
			if (BVar6 != 0) {
				AddMonsterType((int)DAT_1010bab8, 4);
			}
			BVar6 = QuestStatus(3);
			if (BVar6 != 0) {
				AddMonsterType((int)cRam1010baf8, 4);
			}
			BVar6 = QuestStatus(7);
			if (BVar6 != 0) {
				AddMonsterType((int)cRam1010bb18, 4);
			}
			BVar6 = QuestStatus(4);
			if (BVar6 != 0) {
				AddMonsterType((int)cRam1010bb98, 4);
			}
			BVar6 = QuestStatus(0xb);
			if (BVar6 != 0) {
				AddMonsterType((int)cRam1010bbb8, 4);
			}
			iVar5 = (int)uVar4;
			if ((**(char **)(iVar5 + -0x77f0) != '\x01') && (currlevel == *(byte *)(*(int *)(iVar5 + -0x7604) + 0x120))) {
				AddMonsterType(0x32, 4);
				iVar11 = 0x101085c8;
				pbVar14 = (byte *)0x1010ba50;
				v = 0;
				mt = 8;
				do {
					BVar6 = IsSkel(mt);
					iVar5 = (int)uVar4;
					if (BVar6 != 0) {
						iVar9 = (int)*(char *)(iVar11 + 0x55) * 0xf;
						iVar7 = (int)*(char *)(iVar11 + 0x54) * 0xf;
						uVar1 = iVar9 / 0x1e + (iVar9 >> 0x1f);
						uVar2 = iVar7 / 0x1e + (iVar7 >> 0x1f);
						if ((((int)(uVar2 + (uVar2 >> 0x1f) + 1) <= (int)(uint)currlevel) && ((int)(uint)currlevel <= (int)(uVar1 + (uVar1 >> 0x1f) + 1))) && ((*pbVar14 & 3) != 0)) {
							local_518[v] = mt;
							v = v + 1;
						}
					}
					mt = mt + 1;
					pbVar14 = pbVar14 + 1;
					iVar11 = iVar11 + 0x80;
				} while (mt < 0x1c);
				v = random('X', v);
				AddMonsterType(local_518[v], 1);
			}
			bVar3 = currlevel;
			lVar15 = 0x25;
			mt = 0;
			v = 0;
			piVar12 = (int *)((int)aiStack856 + 4U);
			do {
				uVar1 = ((int)(char)puVar8[0x55] * 0xf) / 0x1e + ((int)(char)puVar8[0x55] * 0xf >> 0x1f);
				uVar2 = ((int)(char)puVar8[0x54] * 0xf) / 0x1e + ((int)(char)puVar8[0x54] * 0xf >> 0x1f);
				if ((((int)(uVar2 + (uVar2 >> 0x1f) + 1) <= (int)(uint)bVar3) && ((int)(uint)bVar3 <= (int)(uVar1 + (uVar1 >> 0x1f) + 1))) && ((*pbVar13 & 3) != 0)) {
					*piVar12 = v;
					piVar12 = piVar12 + 1;
					mt = mt + 1;
				}
				uVar1 = ((int)(char)puVar8[0xd5] * 0xf) / 0x1e + ((int)(char)puVar8[0xd5] * 0xf >> 0x1f);
				uVar2 = ((int)(char)puVar8[0xd4] * 0xf) / 0x1e + ((int)(char)puVar8[0xd4] * 0xf >> 0x1f);
				uVar10 = (uint)bVar3;
				if ((((int)(uVar2 + (uVar2 >> 0x1f) + 1) <= (int)uVar10) && ((int)uVar10 <= (int)(uVar1 + (uVar1 >> 0x1f) + 1))) && ((pbVar13[1] & 3) != 0)) {
					*piVar12 = v + 1;
					piVar12 = piVar12 + 1;
					mt = mt + 1;
				}
				uVar1 = ((int)(char)puVar8[0x155] * 0xf) / 0x1e + ((int)(char)puVar8[0x155] * 0xf >> 0x1f);
				uVar2 = ((int)(char)puVar8[0x154] * 0xf) / 0x1e + ((int)(char)puVar8[0x154] * 0xf >> 0x1f);
				if ((((int)(uVar2 + (uVar2 >> 0x1f) + 1) <= (int)uVar10) && ((int)uVar10 <= (int)(uVar1 + (uVar1 >> 0x1f) + 1))) && ((pbVar13[2] & 3) != 0)) {
					*piVar12 = v + 2;
					piVar12 = piVar12 + 1;
					mt = mt + 1;
				}
				puVar8 = puVar8 + 0x180;
				pbVar13 = pbVar13 + 3;
				v = v + 3;
				lVar15 = lVar15 + -1;
			} while (lVar15 != 0);
			if (**(int **)(iVar5 + -0x7094) == 0) {
				iVar5 = mt << 2;
				while (((0 < mt && (nummtypes < 0x10)) && (_DAT_10151700 < 4000))) {
					v = mt << 2;
					iVar11 = 4000 - _DAT_10151700;
					iVar7 = 0;
					piVar12 = (int *)((int)aiStack856 + 4U);
					while (iVar7 < mt) {
						if (iVar11 < *(int *)(*piVar12 * 0x80 + 0x101081cc)) {
							v = v + -4;
							mt = mt + -1;
							iVar5 = iVar5 + -4;
							*piVar12 = *(int *)((int)aiStack856 + 4U + v);
						} else {
							piVar12 = piVar12 + 1;
							iVar7 = iVar7 + 1;
						}
					}
					if (mt != 0) {
						v = random('X', mt);
						piVar12 = (int *)((int)aiStack856 + (v + 1) * 4);
						AddMonsterType(*piVar12, 1);
						iVar5 = iVar5 + -4;
						mt = mt + -1;
						*piVar12 = *(int *)((int)aiStack856 + 4U + iVar5);
					}
				}
			} else {
				v = 0;
				piVar12 = *(int **)(iVar5 + -0x7098);
				while (v < _DAT_10129130) {
					AddMonsterType(*piVar12, 1);
					piVar12 = piVar12 + 1;
					v = v + 1;
				}
			}
		} else {
			if (**(char **)((int)uVar4 + -0x77e0) == '\x01') {
				AddMonsterType(0x32, 4);
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitMonsterGFX(int monst)

{
	byte bVar1;
	int *piVar2;
	int iVar3;
	int iVar4;
	BYTE *pBVar5;
	char cVar6;
	undefined uVar7;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	int iVar8;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	int iVar9;
	undefined8 unaff_r24;
	int *piVar10;
	undefined8 unaff_r25;
	int *piVar11;
	undefined8 unaff_r26;
	int *piVar12;
	undefined8 unaff_r27;
	int *piVar13;
	undefined8 unaff_r28;
	char *pcVar14;
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
	char acStack320[268];
	undefined4 local_34;
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

	local_34 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
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
	iVar9 = monst * 0x208;
	piVar11 = (int *)((int)Monsters + iVar9 + 0x147);
	pcVar14 = animletter;
	iVar8 = 0;
	bVar1 = *(byte *)piVar11;
	iVar3 = (uint)bVar1 * 0x80;
	piVar10 = (int *)(&DAT_101081c8 + iVar3);
	piVar13 = piVar10;
	piVar12 = piVar11;
	do {
		cVar6 = *pcVar14;
		if (((cVar6 != 's') || (*(int *)(iVar3 + 0x101081d4) != 0)) && (0 < piVar13[8])) {
			wsprintf((int)acStack320, *(undefined4 *)(iVar3 + 0x101081d0), (int)cVar6, in_r6, in_r7, in_r8, in_r9,
			    in_r10, in_stack_fffffe88, in_stack_fffffe8f, in_stack_fffffe9c, in_stack_fffffea0, in_stack_fffffea4,
			    in_stack_fffffea8, in_stack_fffffeac, in_stack_fffffeb0, in_stack_fffffeb4);
			uVar7 = 0;
			pBVar5 = LoadFileInMem(acStack320, (DWORD *)0x0);
			*(BYTE **)(piVar12 + 1) = pBVar5;
			cVar6 = LockMemFile((ulonglong)(uint)piVar12[1], uVar7, cVar6, (char)in_r6, (char)in_r7, (char)in_r8,
			    (char)in_r9, (char)in_r10, (char)in_stack_fffffe88);
			if ((*(byte *)piVar11 == 0x6d) && ((*pcVar14 == 's' || (*pcVar14 == 'd')))) {
				piVar12[2] = piVar12[1];
				piVar12[3] = 0;
				piVar12[4] = piVar12[1];
				piVar12[5] = 0;
				piVar12[6] = piVar12[1];
				piVar12[7] = 0;
				piVar12[8] = piVar12[1];
				piVar12[9] = 0;
				piVar12[10] = piVar12[1];
				piVar12[0xb] = 0;
				piVar12[0xc] = piVar12[1];
				piVar12[0xd] = 0;
				piVar12[0xe] = piVar12[1];
				piVar12[0xf] = 0;
				piVar12[0x10] = piVar12[1];
				piVar12[0x11] = 0;
			} else {
				piVar12[2] = piVar12[1];
				piVar12[3] = (uint) * (byte *)((int)cVar6 + 3) << 0x18 | (uint) * (byte *)((int)cVar6 + 2) << 0x10 | (uint) * (byte *)((int)cVar6 + 1) << 8 | (uint) * (byte *)(int)cVar6;
				piVar12[4] = piVar12[1];
				iVar4 = (int)cVar6;
				piVar12[5] = (uint) * (byte *)(iVar4 + 7) << 0x18 | (uint) * (byte *)(iVar4 + 6) << 0x10 | (uint) * (byte *)(iVar4 + 5) << 8 | (uint) * (byte *)(iVar4 + 4);
				piVar12[6] = piVar12[1];
				iVar4 = (int)cVar6;
				piVar12[7] = (uint) * (byte *)(iVar4 + 0xb) << 0x18 | (uint) * (byte *)(iVar4 + 10) << 0x10 | (uint) * (byte *)(iVar4 + 9) << 8 | (uint) * (byte *)(iVar4 + 8);
				piVar12[8] = piVar12[1];
				iVar4 = (int)cVar6;
				piVar12[9] = (uint) * (byte *)(iVar4 + 0xf) << 0x18 | (uint) * (byte *)(iVar4 + 0xe) << 0x10 | (uint) * (byte *)(iVar4 + 0xd) << 8 | (uint) * (byte *)(iVar4 + 0xc);
				piVar12[10] = piVar12[1];
				iVar4 = (int)cVar6;
				piVar12[0xb] = (uint) * (byte *)(iVar4 + 0x13) << 0x18 | (uint) * (byte *)(iVar4 + 0x12) << 0x10 | (uint) * (byte *)(iVar4 + 0x11) << 8 | (uint) * (byte *)(iVar4 + 0x10);
				piVar12[0xc] = piVar12[1];
				iVar4 = (int)cVar6;
				piVar12[0xd] = (uint) * (byte *)(iVar4 + 0x17) << 0x18 | (uint) * (byte *)(iVar4 + 0x16) << 0x10 | (uint) * (byte *)(iVar4 + 0x15) << 8 | (uint) * (byte *)(iVar4 + 0x14);
				piVar12[0xe] = piVar12[1];
				iVar4 = (int)cVar6;
				piVar12[0xf] = (uint) * (byte *)(iVar4 + 0x1b) << 0x18 | (uint) * (byte *)(iVar4 + 0x1a) << 0x10 | (uint) * (byte *)(iVar4 + 0x19) << 8 | (uint) * (byte *)(iVar4 + 0x18);
				piVar12[0x10] = piVar12[1];
				iVar4 = (int)cVar6;
				piVar12[0x11] = (uint) * (byte *)(iVar4 + 0x1f) << 0x18 | (uint) * (byte *)(iVar4 + 0x1e) << 0x10 | (uint) * (byte *)(iVar4 + 0x1d) << 8 | (uint) * (byte *)(iVar4 + 0x1c);
			}
			UnlockMemFile((char)piVar12[1]);
		}
		iVar8 = iVar8 + 1;
		pcVar14 = pcVar14 + 1;
		piVar12[0x12] = piVar13[8];
		piVar2 = piVar13 + 0xe;
		piVar13 = piVar13 + 1;
		piVar12 = piVar12 + 0x13;
		*piVar12 = *piVar2;
	} while (iVar8 < 6);
	iVar8 = *piVar10;
	*(int *)((int)Monsters + iVar9 + 0x333) = iVar8;
	*(int *)((int)Monsters + iVar9 + 0x337) = iVar8 + -0x40 >> 1;
	*(undefined *)((int)Monsters + iVar9 + 0x33b) = (char)*(undefined4 *)(iVar3 + 0x10108220);
	*(undefined *)((int)Monsters + iVar9 + 0x33c) = (char)*(undefined4 *)(iVar3 + 0x10108224);
	*(undefined4 *)((int)Monsters + iVar9 + 0x33f) = *(undefined4 *)(iVar3 + 0x101081d4);
	*(undefined *)((int)Monsters + iVar9 + 0x343) = *(undefined *)(iVar3 + 0x10108232);
	*(int **)((int)Monsters + iVar9 + 0x347) = piVar10;
	if (*(int *)(iVar3 + 0x101081e0) != 0) {
		pBVar5 = LoadFileInMem(*(char **)(iVar3 + 0x101081e4), (DWORD *)0x0);
		*(BYTE **)((int)Monsters + iVar9 + 0x34b) = pBVar5;
		InitMonsterTRN(monst, *(BOOL *)(iVar3 + 0x101081d4));
		MemFreeDbg((int **)((int)Monsters + iVar9 + 0x34b));
	}
	if (0x3b < bVar1) {
		if ((bVar1 < 0x40) && ((_DAT_101516fc & 1) == 0)) {
			_DAT_101516fc = _DAT_101516fc | 1;
			LoadMissileGFX('\x18');
		}
	}
	if (0x4b < bVar1) {
		if ((bVar1 < 0x50) && ((_DAT_101516fc & 2) == 0)) {
			_DAT_101516fc = _DAT_101516fc | 2;
			LoadMissileGFX('\x15');
		}
	}
	if ((bVar1 == 0x65) && ((_DAT_101516fc & 4) == 0)) {
		_DAT_101516fc = _DAT_101516fc | 4;
		LoadMissileGFX('\x16');
		LoadMissileGFX('\x17');
	}
	if ((bVar1 == 0x66) && ((_DAT_101516fc & 0x20) == 0)) {
		_DAT_101516fc = _DAT_101516fc | 0x20;
		LoadMissileGFX('(');
		LoadMissileGFX(')');
	}
	if ((bVar1 == 0x67) && ((_DAT_101516fc & 0x40) == 0)) {
		_DAT_101516fc = _DAT_101516fc | 0x40;
		LoadMissileGFX(',');
		LoadMissileGFX('-');
	}
	if ((bVar1 == 0x68) && ((_DAT_101516fc & 0x80) == 0)) {
		_DAT_101516fc = _DAT_101516fc | 0x80;
		LoadMissileGFX('*');
		LoadMissileGFX('+');
	}
	if (0x47 < bVar1) {
		if ((bVar1 < 0x4c) && ((_DAT_101516fc & 8) == 0)) {
			_DAT_101516fc = _DAT_101516fc | 8;
			LoadMissileGFX('\x19');
		}
	}
	if (0x2d < bVar1) {
		if ((bVar1 < 0x32) && ((_DAT_101516fc & 0x10) == 0)) {
			_DAT_101516fc = _DAT_101516fc | 0x10;
			LoadMissileGFX('\x1f');
			LoadMissileGFX(' ');
			LoadMissileGFX('!');
		}
	}
	if (bVar1 == 0x6e) {
		LoadMissileGFX('\'');
	}
	return;
}

void ClearMVars(int i)

{
	i = i * 0xe8;
	*(undefined4 *)(i + 0x10151aa4) = 0;
	*(undefined4 *)(i + 0x10151aa8) = 0;
	*(undefined4 *)(i + 0x10151aac) = 0;
	*(undefined4 *)(i + 0x10151ab0) = 0;
	*(undefined4 *)(i + 0x10151ab4) = 0;
	*(undefined4 *)(i + 0x10151ab8) = 0;
	*(undefined4 *)(i + 0x10151abc) = 0;
	*(undefined4 *)(i + 0x10151ac0) = 0;
	return;
}

void InitMonster(int i, int rd, int mtype, int x, int y)

{
	int *piVar1;
	int *piVar2;
	undefined4 uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char *pcVar7;
	short *psVar8;
	char *pcVar9;
	char *pcVar10;
	char *pcVar11;
	char *pcVar12;
	char *pcVar13;
	char *pcVar14;
	char *pcVar15;
	char *pcVar16;

	iVar4 = 0x100f8fd0;
	i = i * 0xe8;
	iVar5 = mtype * 0x208;
	pcVar16 = (char *)((int)Monsters + iVar5 + 0x147);
	*(int *)(i + 0x10151a78) = rd;
	*(int *)(i + 0x10151a50) = x;
	*(int *)(i + 0x10151a54) = y;
	*(int *)(i + 0x10151a58) = x;
	*(int *)(i + 0x10151a5c) = y;
	*(int *)(i + 0x10151a60) = x;
	*(int *)(i + 0x10151a64) = y;
	*(int *)(&DAT_10151a30 + i) = mtype;
	*(undefined4 *)(i + 0x10151a34) = 0;
	*(undefined4 *)(i + 0x10151b0c) = *(undefined4 *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x50);
	*(char **)(i + 0x10151b10) = pcVar16;
	*(undefined4 *)(i + 0x10151b14) = *(undefined4 *)((int)Monsters + iVar5 + 0x347);
	uVar3 = *(undefined4 *)(pcVar16 + rd * 8 + 0xc);
	*(undefined4 *)(i + 0x10151a84) = *(undefined4 *)(pcVar16 + rd * 8 + 8);
	*(undefined4 *)(i + 0x10151a88) = uVar3;
	*(undefined4 *)(i + 0x10151a8c) = *(undefined4 *)((int)Monsters + iVar5 + 0x193);
	iVar6 = random('X', *(int *)(i + 0x10151a8c) + -1);
	*(int *)(i + 0x10151a90) = iVar6;
	*(undefined4 *)(i + 0x10151a94) = *(undefined4 *)((int)Monsters + iVar5 + 399);
	iVar6 = random('X', *(int *)(i + 0x10151a94) + -1);
	*(int *)(i + 0x10151a98) = iVar6 + 1;
	if (*pcVar16 == 'n') {
		iVar6 = random('X', 1);
		*(int *)(i + 0x10151ac4) = (iVar6 + 0x682) * 0x40;
	} else {
		iVar6 = random('X',
		    ((uint) * (byte *)((int)Monsters + iVar5 + 0x33c) - (uint) * (byte *)((int)Monsters + iVar5 + 0x33b)) + 1);
		*(int *)(i + 0x10151ac4) = ((uint) * (byte *)((int)Monsters + iVar5 + 0x33b) + iVar6) * 0x40;
	}
	if (**(char **)(iVar4 + -0x77f0) == '\x01') {
		*(int *)(i + 0x10151ac4) = *(int *)(i + 0x10151ac4) >> 1;
		if (*(int *)(i + 0x10151ac4) < 0x40) {
			*(int *)(i + 0x10151ac4) = 0x40;
		}
	}
	piVar1 = (int *)(i + 0x10151ac4);
	piVar2 = (int *)(i + 0x10151ac8);
	*piVar2 = *piVar1;
	*(char *)(i + 0x10151acc) = *(char *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x60);
	*(undefined *)(i + 0x10151acd) = *(undefined *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x68);
	*(undefined *)(i + 0x10151a38) = 1;
	*(undefined4 *)(i + 0x10151a3c) = 0;
	*(undefined4 *)(i + 0x10151a40) = 0;
	*(undefined4 *)(i + 0x10151a44) = 0;
	*(undefined4 *)(i + 0x10151a48) = 0;
	*(undefined *)(i + 0x10151a4c) = 0;
	*(undefined4 *)(i + 0x10151aa0) = 0;
	*(undefined *)(i + 0x10151af0) = 0;
	*(undefined *)(i + 0x10151ad4) = 0;
	iVar6 = GetRndSeed();
	*(int *)(i + 0x10151ae4) = iVar6;
	iVar6 = GetRndSeed();
	*(int *)(i + 0x10151ae8) = iVar6;
	pcVar7 = (char *)(i + 0x10151af4);
	psVar8 = (short *)(i + 0x10151af6);
	pcVar9 = (char *)(i + 0x10151af8);
	*(undefined *)(i + 0x10151af3) = 0;
	pcVar10 = (char *)(i + 0x10151af9);
	pcVar11 = (char *)(i + 0x10151afa);
	pcVar12 = (char *)(i + 0x10151afb);
	pcVar13 = (char *)(i + 0x10151afc);
	pcVar14 = (char *)(i + 0x10151afd);
	pcVar15 = (char *)(i + 0x10151afe);
	*(undefined *)(i + 0x10151af4) = *(undefined *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x56);
	*(undefined2 *)(i + 0x10151af6) = *(undefined2 *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x7c);
	*(undefined *)(i + 0x10151af8) = *(undefined *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x69);
	*(undefined *)(i + 0x10151af9) = *(undefined *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x6b);
	*(undefined *)(i + 0x10151afa) = *(undefined *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x6c);
	*(undefined *)(i + 0x10151afb) = *(undefined *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x6d);
	*(undefined *)(i + 0x10151afc) = *(undefined *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x6f);
	*(undefined *)(i + 0x10151afd) = *(undefined *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x70);
	*(undefined *)(i + 0x10151afe) = *(undefined *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x71);
	*(undefined2 *)(i + 0x10151b00) = *(undefined2 *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x74);
	*(undefined *)(i + 0x10151b08) = 0;
	*(undefined *)(i + 0x10151b09) = 0;
	*(undefined4 *)(i + 0x10151ad0) = *(undefined4 *)(*(int *)((int)Monsters + iVar5 + 0x347) + 100);
	*(undefined4 *)(i + 0x10151b04) = 0;
	if (*(char *)(i + 0x10151acc) == '\f') {
		uVar3 = *(undefined4 *)(pcVar16 + rd * 8 + 0x188);
		*(undefined4 *)(i + 0x10151a84) = *(undefined4 *)(pcVar16 + rd * 8 + 0x184);
		*(undefined4 *)(i + 0x10151a88) = uVar3;
		*(undefined4 *)(i + 0x10151a98) = 1;
		*(uint *)(i + 0x10151ad0) = *(uint *)(i + 0x10151ad0) | 4;
		*(undefined4 *)(i + 0x10151a34) = 7;
	}
	iVar4 = **(int **)(iVar4 + -0x7184);
	if (iVar4 == 1) {
		*piVar1 = *piVar1 * 3 + 0x40;
		*piVar2 = *piVar1;
		*pcVar7 = *pcVar7 + '\x0f';
		*psVar8 = *psVar8 * 2 + 2000;
		*pcVar9 = *pcVar9 + 'U';
		*pcVar10 = *pcVar10 * '\x02' + '\x04';
		*pcVar11 = *pcVar11 * '\x02' + '\x04';
		*pcVar12 = *pcVar12 + 'U';
		*pcVar13 = *pcVar13 * '\x02' + '\x04';
		*pcVar14 = *pcVar14 * '\x02' + '\x04';
		*pcVar15 = *pcVar15 + '2';
	}
	if (iVar4 == 2) {
		*piVar1 = *piVar1 * 4 + 0xc0;
		*piVar2 = *piVar1;
		*pcVar7 = *pcVar7 + '\x1e';
		*psVar8 = *psVar8 * 4 + 4000;
		*pcVar9 = *pcVar9 + 'x';
		*pcVar10 = *pcVar10 * '\x04' + '\x06';
		*pcVar11 = *pcVar11 * '\x04' + '\x06';
		*pcVar12 = *pcVar12 + 'x';
		*pcVar13 = *pcVar13 * '\x04' + '\x06';
		*pcVar14 = *pcVar14 * '\x04' + '\x06';
		*pcVar15 = *pcVar15 + 'P';
		*(undefined2 *)(i + 0x10151b00) = *(undefined2 *)(*(int *)((int)Monsters + iVar5 + 0x347) + 0x76);
	}
	return;
}

void ClrAllMonsters(void)

{
	int iVar1;
	int i;
	undefined *puVar2;

	i = 0;
	puVar2 = &DAT_10151a30;
	do {
		ClearMVars(i);
		*(char **)(puVar2 + 0xdc) = s_Invalid_Monster_1010c6f8;
		puVar2[8] = 0;
		*(undefined4 *)(puVar2 + 4) = 0;
		*(undefined4 *)(puVar2 + 0x74) = 0;
		*(undefined4 *)(puVar2 + 0x78) = 0;
		*(undefined4 *)(puVar2 + 0x20) = 0;
		*(undefined4 *)(puVar2 + 0x24) = 0;
		*(undefined4 *)(puVar2 + 0x28) = 0;
		*(undefined4 *)(puVar2 + 0x2c) = 0;
		*(undefined4 *)(puVar2 + 0x30) = 0;
		*(undefined4 *)(puVar2 + 0x34) = 0;
		iVar1 = random('Y', 8);
		*(int *)(puVar2 + 0x48) = iVar1;
		*(undefined4 *)(puVar2 + 0x40) = 0;
		*(undefined4 *)(puVar2 + 0x44) = 0;
		*(undefined4 *)(puVar2 + 0x54) = 0;
		*(undefined4 *)(puVar2 + 0x58) = 0;
		*(undefined4 *)(puVar2 + 0x5c) = 0;
		*(undefined4 *)(puVar2 + 0x60) = 0;
		*(undefined4 *)(puVar2 + 100) = 0;
		*(undefined4 *)(puVar2 + 0x68) = 0;
		*(undefined4 *)(puVar2 + 0xa0) = 0;
		*(undefined4 *)(puVar2 + 0x70) = 0;
		iVar1 = random('Y', (uint)DAT_1017de94);
		*(int *)(puVar2 + 0x4c) = iVar1;
		i = i + 1;
		puVar2[0x50] = (char)*(undefined4 *)((int)plr + *(int *)(puVar2 + 0x4c) * 0x55ec + 0x40);
		puVar2[0x51] = (char)*(undefined4 *)((int)plr + *(int *)(puVar2 + 0x4c) * 0x55ec + 0x44);
		puVar2 = puVar2 + 0xe8;
	} while (i < 200);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL MonstPlace(int xp, int yp)

{
	byte bVar1;
	BOOL BVar2;
	int iVar3;

	if ((((xp < 0) || (0x6f < xp)) || (yp < 0)) || (0x6f < yp)) {
		BVar2 = 0;
	} else {
		if (*(short *)(_DAT_1012f1b4 + xp * 0xe0 + yp * 2) == 0) {
			iVar3 = xp * 0x70 + yp;
			if (*(char *)(_DAT_1012f1b8 + iVar3) == '\0') {
				bVar1 = *(byte *)(_DAT_1012f1bc + iVar3);
				if ((bVar1 & 2) == 0) {
					if ((bVar1 & 8) == 0) {
						BVar2 = SolidLoc(xp, yp);
						if (BVar2 == 0) {
							BVar2 = 1;
						} else {
							BVar2 = 0;
						}
					} else {
						BVar2 = 0;
					}
				} else {
					BVar2 = 0;
				}
			} else {
				BVar2 = 0;
			}
		} else {
			BVar2 = 0;
		}
	}
	return BVar2;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PlaceMonster(int i, int mtype, int x, int y)

{
	int rd;

	*(short *)(_DAT_1012f1b4 + x * 0xe0 + y * 2) = (short)i + 1;
	rd = random('Z', 8);
	InitMonster(i, rd, mtype, x, y);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PlaceUniqueMonst(int uniqindex, int miniontype, int unpackfilesize)

{
	short sVar1;
	bool bVar2;
	int iVar4;
	undefined8 uVar3;
	uint uVar5;
	byte *pbVar6;
	int iVar7;
	int mtype;
	BOOL BVar8;
	int *piVar9;
	short *psVar10;
	int x;
	int iVar11;
	longlong lVar12;
	ulonglong uVar13;
	short *psVar14;
	int yp;
	ulonglong uVar15;
	undefined4 uVar16;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 in_r13;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	int mtype_00;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	longlong lVar17;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	int iVar18;
	undefined8 unaff_r30;
	longlong lVar19;
	int xp;
	undefined8 unaff_r31;
	int yp_00;
	int num;
	undefined4 in_stack_ffffff38;
	undefined in_stack_ffffff3f;
	undefined4 in_stack_ffffff4c;
	undefined4 in_stack_ffffff50;
	undefined4 in_stack_ffffff54;
	undefined4 in_stack_ffffff58;
	undefined4 in_stack_ffffff5c;
	undefined4 in_stack_ffffff60;
	undefined4 in_stack_ffffff64;
	char acStack152[76];
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

	lVar12 = (longlong)miniontype;
	uVar3 = 0x100f8fd0;
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
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	iVar11 = uniqindex * 0x20;
	x = 0;
	uVar15 = (ulonglong)(uint)(_DAT_101516f8 << 8) + 0x1300;
	iVar4 = nummonsters * 0xe8;
	if ((int)uVar15 < 0x1b00) {
		mtype_00 = 0;
		uVar13 = (ulonglong)(uint)nummtypes;
		pbVar6 = (byte *)((int)&Monsters[0].trans_file + 3);
		num = unpackfilesize;
		if (0 < nummtypes) {
			do {
				num = unpackfilesize;
				if ((uint)*pbVar6 == (int)(char)(&DAT_1010bab8)[iVar11])
					break;
				pbVar6 = pbVar6 + 0x208;
				mtype_00 = mtype_00 + 1;
				uVar13 = uVar13 - 1;
				num = unpackfilesize;
			} while (uVar13 != 0);
		}
	LAB_10069d5c:
		do {
			iVar7 = random('[', 0x50);
			lVar17 = (longlong)iVar7 + 0x10;
			mtype = random('[', 0x50);
			yp = mtype + 0x10;
			lVar19 = (longlong)iVar7 + 0xd;
			iVar18 = 0;
			while (xp = (int)lVar19, xp < iVar7 + 0x13) {
				yp_00 = mtype + 0xd;
				while (yp_00 < mtype + 0x13) {
					if ((((-1 < yp_00) && (yp_00 < 0x70)) && (-1 < xp)) && ((xp < 0x70 && (BVar8 = MonstPlace(xp, yp_00), BVar8 != 0)))) {
						iVar18 = iVar18 + 1;
					}
					yp_00 = yp_00 + 1;
				}
				lVar19 = lVar19 + 1;
			}
			if (iVar18 < 9) {
				x = x + 1;
				if (x < 1000)
					goto LAB_10069d5c;
			}
			BVar8 = MonstPlace((int)lVar17, yp);
			mtype = (int)lVar12;
			iVar7 = (int)uVar3;
			uVar16 = (undefined4)uVar15;
		} while (BVar8 == 0);
		if (uniqindex == 3) {
			lVar17 = (ulonglong)(uint)(_DAT_1013b36c << 1) + 0x18;
			yp = _DAT_1013b368 * 2 + 0x1c;
		}
		if (uniqindex == 8) {
			lVar17 = (ulonglong)(uint)(_DAT_1013b36c << 1) + 0x16;
			yp = _DAT_1013b368 * 2 + 0x17;
		}
		if (uniqindex == 2) {
			bVar2 = true;
			x = 0;
			uVar13 = (ulonglong) * *(uint **)(iVar7 + -0x7270);
			piVar9 = *(int **)(iVar7 + -0x726c);
			if (0 < (int)**(uint **)(iVar7 + -0x7270)) {
				do {
					if ((x == **(int **)(iVar7 + -0x70a8)) && (bVar2)) {
						bVar2 = false;
						uVar15 = (ulonglong)(uint)(*piVar9 << 1);
						lVar17 = uVar15 + 0x14;
						yp = piVar9[1] * 2 + 0x14;
					}
					uVar16 = (undefined4)uVar15;
					piVar9 = piVar9 + 5;
					x = x + 1;
					uVar13 = uVar13 - 1;
				} while (uVar13 != 0);
			}
		}
		if (gbMaxPlayers == '\x01') {
			if (uniqindex == 4) {
				lVar17 = 0x20;
				yp = 0x2e;
			}
			if (uniqindex == 5) {
				lVar17 = 0x28;
				yp = 0x2d;
			}
			if (uniqindex == 6) {
				lVar17 = 0x26;
				yp = 0x31;
			}
			if (uniqindex == 1) {
				lVar17 = 0x23;
				yp = 0x2f;
			}
		} else {
			if (uniqindex == 4) {
				lVar17 = (ulonglong)(uint)(_DAT_1013b36c << 1) + 0x13;
				yp = _DAT_1013b368 * 2 + 0x16;
			}
			if (uniqindex == 5) {
				lVar17 = (ulonglong)(uint)(_DAT_1013b36c << 1) + 0x15;
				yp = _DAT_1013b368 * 2 + 0x13;
			}
			if (uniqindex == 6) {
				lVar17 = (ulonglong)(uint)(_DAT_1013b36c << 1) + 0x15;
				yp = _DAT_1013b368 * 2 + 0x19;
			}
		}
		x = (int)lVar17;
		if (uniqindex == 9) {
			uVar5 = 0;
			yp = 0;
			psVar14 = **(short ***)(iVar7 + -0x757c);
			while ((x = (int)lVar17, yp < 0x70 && (uVar5 == 0))) {
				lVar17 = 0;
				psVar10 = psVar14;
				while (((int)lVar17 < 0x70 && (uVar5 == 0))) {
					sVar1 = *psVar10;
					psVar10 = psVar10 + 0x70;
					lVar17 = lVar17 + 1;
					uVar3 = countLeadingZeros(0x16f - (int)sVar1);
					uVar5 = (uint)uVar3 >> 5 & 0xff;
				}
				psVar14 = psVar14 + 1;
				yp = yp + 1;
			}
		}
		PlaceMonster(nummonsters, mtype_00, x, yp);
		*(char *)(iVar4 + 0x10151af0) = (char)uniqindex + '\x01';
		if (*(char *)(iVar11 + 0x1010bac4) == '\0') {
			*(char *)(iVar4 + 0x10151af4) = *(char *)(iVar4 + 0x10151af4) + '\x05';
		} else {
			*(char *)(iVar4 + 0x10151af4) = *(char *)(iVar11 + 0x1010bac4) << 1;
		}
		*(short *)(iVar4 + 0x10151af6) = *(short *)(iVar4 + 0x10151af6) << 1;
		*(undefined4 *)(iVar4 + 0x10151b0c) = *(undefined4 *)(iVar11 + 0x1010babc);
		*(int *)(iVar4 + 0x10151ac4) = (uint) * (ushort *)(iVar11 + 0x1010bac6) << 6;
		if ((gbMaxPlayers == '\x01') && (*(int *)(iVar4 + 0x10151ac4) = *(int *)(iVar4 + 0x10151ac4) >> 1, *(int *)(iVar4 + 0x10151ac4) < 0x40)) {
			*(undefined4 *)(iVar4 + 0x10151ac4) = 0x40;
		}
		*(undefined4 *)(iVar4 + 0x10151ac8) = *(undefined4 *)(iVar4 + 0x10151ac4);
		*(undefined *)(iVar4 + 0x10151acc) = *(undefined *)(iVar11 + 0x1010bac8);
		*(undefined *)(iVar4 + 0x10151acd) = *(undefined *)(iVar11 + 0x1010bac9);
		*(undefined *)(iVar4 + 0x10151af9) = *(undefined *)(iVar11 + 0x1010baca);
		*(undefined *)(iVar4 + 0x10151afa) = *(undefined *)(iVar11 + 0x1010bacb);
		*(undefined *)(iVar4 + 0x10151afc) = *(undefined *)(iVar11 + 0x1010baca);
		*(undefined *)(iVar4 + 0x10151afd) = *(undefined *)(iVar11 + 0x1010bacb);
		*(undefined2 *)(iVar4 + 0x10151b00) = *(undefined2 *)(iVar11 + 0x1010bacc);
		*(undefined4 *)(iVar4 + 0x10151b04) = *(undefined4 *)(iVar11 + 0x1010bad4);
		x = AddLight(*(int *)(iVar4 + 0x10151a50), *(int *)(iVar4 + 0x10151a54), 3);
		*(undefined *)(iVar4 + 0x10151b0b) = (char)x;
		if ((gbMaxPlayers != '\x01') && (*(char *)(iVar4 + 0x10151acc) == '\x1d')) {
			*(undefined4 *)(iVar4 + 0x10151b04) = 0;
		}
		if (((gbMaxPlayers == '\x01') || (*(char *)(iVar4 + 0x10151acc) != '\x1c')) || (*(byte *)(*(int *)(iVar7 + -0x7604) + 0x177) < 4)) {
			if (*(int *)(iVar4 + 0x10151b04) != 0) {
				*(undefined *)(iVar4 + 0x10151a38) = 6;
			}
		} else {
			*(undefined *)(iVar4 + 0x10151a38) = 1;
		}
		if (_DAT_1012f31c == 1) {
			*(int *)(iVar4 + 0x10151ac4) = *(int *)(iVar4 + 0x10151ac4) * 3 + 0x40;
			*(undefined4 *)(iVar4 + 0x10151ac8) = *(undefined4 *)(iVar4 + 0x10151ac4);
			*(char *)(iVar4 + 0x10151af4) = *(char *)(iVar4 + 0x10151af4) + '\x0f';
			*(short *)(iVar4 + 0x10151af6) = *(short *)(iVar4 + 0x10151af6) * 2 + 2000;
			*(char *)(iVar4 + 0x10151af9) = *(char *)(iVar4 + 0x10151af9) * '\x02' + '\x04';
			*(char *)(iVar4 + 0x10151afa) = *(char *)(iVar4 + 0x10151afa) * '\x02' + '\x04';
			*(char *)(iVar4 + 0x10151afc) = *(char *)(iVar4 + 0x10151afc) * '\x02' + '\x04';
			*(char *)(iVar4 + 0x10151afd) = *(char *)(iVar4 + 0x10151afd) * '\x02' + '\x04';
		}
		if (_DAT_1012f31c == 2) {
			*(int *)(iVar4 + 0x10151ac4) = *(int *)(iVar4 + 0x10151ac4) * 4 + 0xc0;
			*(undefined4 *)(iVar4 + 0x10151ac8) = *(undefined4 *)(iVar4 + 0x10151ac4);
			*(char *)(iVar4 + 0x10151af4) = *(char *)(iVar4 + 0x10151af4) + '\x1e';
			*(short *)(iVar4 + 0x10151af6) = *(short *)(iVar4 + 0x10151af6) * 4 + 4000;
			*(char *)(iVar4 + 0x10151af9) = *(char *)(iVar4 + 0x10151af9) * '\x04' + '\x06';
			*(char *)(iVar4 + 0x10151afa) = *(char *)(iVar4 + 0x10151afa) * '\x04' + '\x06';
			*(char *)(iVar4 + 0x10151afc) = *(char *)(iVar4 + 0x10151afc) * '\x04' + '\x06';
			*(char *)(iVar4 + 0x10151afd) = *(char *)(iVar4 + 0x10151afd) * '\x04' + '\x06';
		}
		wsprintf((int)acStack152, *(undefined4 *)(iVar7 + -0x5cd0), *(undefined4 *)(iVar11 + 0x1010bac0), yp, uVar16,
		    in_r8, in_r9, in_r10, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c, in_stack_ffffff50,
		    in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c, in_stack_ffffff60, in_stack_ffffff64);
		LoadFileWithMem(acStack152, (void *)(**(int **)(iVar7 + -0x7770) + _DAT_101516f8 * 0x100 + 0x1300));
		*(undefined *)(iVar4 + 0x10151af1) = (char)_DAT_101516f8;
		_DAT_101516f8 = _DAT_101516f8 + 1;
		if ((*(ushort *)(iVar11 + 0x1010bace) & 4) != 0) {
			*(undefined *)(iVar4 + 0x10151af8) = *(undefined *)(iVar11 + 0x1010bad0);
			*(undefined *)(iVar4 + 0x10151afb) = *(undefined *)(iVar11 + 0x1010bad0);
		}
		if ((*(ushort *)(iVar11 + 0x1010bace) & 8) != 0) {
			*(undefined *)(iVar4 + 0x10151afe) = *(undefined *)(iVar11 + 0x1010bad0);
		}
		x = nummonsters;
		nummonsters = nummonsters + 1;
		if ((*(ushort *)(iVar11 + 0x1010bace) & 1) != 0) {
			PlaceGroup(mtype, num, (uint) * (ushort *)(iVar11 + 0x1010bace), x);
		}
		if (*(char *)(iVar4 + 0x10151acc) != '\f') {
			iVar11 = *(int *)(iVar4 + 0x10151b10) + *(int *)(iVar4 + 0x10151a78) * 8;
			uVar16 = *(undefined4 *)(iVar11 + 0xc);
			*(undefined4 *)(iVar4 + 0x10151a84) = *(undefined4 *)(iVar11 + 8);
			*(undefined4 *)(iVar4 + 0x10151a88) = uVar16;
			iVar11 = random('X', *(int *)(iVar4 + 0x10151a94) + -1);
			*(int *)(iVar4 + 0x10151a98) = iVar11 + 1;
			*(uint *)(iVar4 + 0x10151ad0) = *(uint *)(iVar4 + 0x10151ad0) & 0xfffffffb;
			*(undefined4 *)(iVar4 + 0x10151a34) = 0;
		}
	}
	return;
}

void PlaceUniques(void)

{
	byte bVar1;
	undefined8 uVar2;
	byte *pbVar3;
	int iVar4;
	uint uVar5;
	int uniqindex;
	char *pcVar6;

	uniqindex = 0;
	pcVar6 = &DAT_1010bab8;
	while (*pcVar6 != -1) {
		if (currlevel == pcVar6[0xc]) {
			uVar5 = 0;
			iVar4 = 0;
			pbVar3 = (byte *)((int)&Monsters[0].trans_file + 3);
			while ((iVar4 < nummtypes && (uVar5 == 0))) {
				bVar1 = *pbVar3;
				pbVar3 = pbVar3 + 0x208;
				iVar4 = iVar4 + 1;
				uVar2 = countLeadingZeros((int)*pcVar6 - (uint)bVar1);
				uVar5 = (uint)uVar2 >> 5 & 0xff;
			}
			if ((uniqindex == 0) && (quests[2]._qactive == '\0')) {
				uVar5 = 0;
			}
			if ((uniqindex == 2) && (quests[3]._qactive == '\0')) {
				uVar5 = 0;
			}
			if ((uniqindex == 3) && (quests[7]._qactive == '\0')) {
				uVar5 = 0;
			}
			if ((uniqindex == 7) && (quests[4]._qactive == '\0')) {
				uVar5 = 0;
			}
			if ((uniqindex == 8) && (quests[11]._qactive == '\0')) {
				uVar5 = 0;
			}
			if (uVar5 != 0) {
				PlaceUniqueMonst(uniqindex, iVar4 + -1, 8);
			}
		}
		pcVar6 = pcVar6 + 0x20;
		uniqindex = uniqindex + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PlaceQuestMonsters(void)

{
	undefined8 uVar1;
	int iVar2;
	BOOL BVar3;
	undefined8 unaff_r23;
	int miniontype;
	undefined8 unaff_r24;
	byte *pbVar4;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int *local_38[5];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar1 = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (DAT_1012f316 == '\0') {
		BVar3 = QuestStatus(6);
		if (BVar3 != 0) {
			PlaceUniqueMonst(9, 0, 0);
		}
		iVar2 = (int)uVar1;
		if ((currlevel == quests[12]._qlevel) && (gbMaxPlayers != '\x01')) {
			miniontype = 0;
			pbVar4 = *(byte **)(iVar2 + -0x7610);
			while (true) {
				iVar2 = (int)uVar1;
				if (nummtypes <= miniontype)
					break;
				BVar3 = IsSkel((uint)*pbVar4);
				iVar2 = (int)uVar1;
				if (BVar3 != 0)
					break;
				pbVar4 = pbVar4 + 0x208;
				miniontype = miniontype + 1;
			}
			PlaceUniqueMonst(1, miniontype, 0x1e);
		}
		BVar3 = QuestStatus(7);
		if (BVar3 != 0) {
			local_38[0] = (int *)LoadFileInMem(*(char **)(iVar2 + -0x5cd4), (DWORD *)0x0);
			SetMapMonsters((BYTE *)local_38[0], _DAT_1013b36c << 1, _DAT_1013b368 << 1);
			MemFreeDbg(local_38);
		}
		BVar3 = QuestStatus(9);
		if (BVar3 != 0) {
			local_38[0] = (int *)LoadFileInMem(*(char **)(iVar2 + -0x5cd8), (DWORD *)0x0);
			SetMapMonsters((BYTE *)local_38[0], _DAT_1013b36c << 1, _DAT_1013b368 << 1);
			MemFreeDbg(local_38);
		}
		BVar3 = QuestStatus(8);
		if (BVar3 != 0) {
			local_38[0] = (int *)LoadFileInMem(*(char **)(iVar2 + -0x5cdc), (DWORD *)0x0);
			SetMapMonsters((BYTE *)local_38[0], _DAT_1013b36c << 1, _DAT_1013b368 << 1);
			MemFreeDbg(local_38);
		}
		BVar3 = QuestStatus(10);
		if (BVar3 != 0) {
			local_38[0] = (int *)LoadFileInMem(*(char **)(iVar2 + -0x5ce0), (DWORD *)0x0);
			SetMapMonsters((BYTE *)local_38[0], (_DAT_1013b36c + 1) * 2, (_DAT_1013b368 + 1) * 2);
			MemFreeDbg(local_38);
		}
		BVar3 = QuestStatus(0xb);
		if (BVar3 != 0) {
			local_38[0] = (int *)LoadFileInMem(*(char **)(iVar2 + -0x5ce4), (DWORD *)0x0);
			SetMapMonsters((BYTE *)local_38[0], _DAT_1013b36c << 1, _DAT_1013b368 << 1);
			MemFreeDbg(local_38);
			AddMonsterType((int)cRam1010bbb8, 1);
		}
		BVar3 = QuestStatus(4);
		if (BVar3 != 0) {
			AddMonsterType((int)cRam1010bb98, 1);
		}
		BVar3 = QuestStatus(3);
		if ((BVar3 != 0) && (**(int **)(iVar2 + -0x70a8) == -1)) {
			quests[3]._qactive = '\0';
		}
		if ((currlevel == quests[15]._qlevel) && (gbMaxPlayers != '\x01')) {
			AddMonsterType((int)cRam1010bb38, 4);
			AddMonsterType((int)cRam1010bb58, 4);
			PlaceUniqueMonst(4, 0, 0);
			PlaceUniqueMonst(5, 0, 0);
			PlaceUniqueMonst(6, 0, 0);
			local_38[0] = (int *)LoadFileInMem(*(char **)(iVar2 + -0x5ce8), (DWORD *)0x0);
			SetMapMonsters((BYTE *)local_38[0], _DAT_1013b36c << 1, _DAT_1013b368 << 1);
			MemFreeDbg(local_38);
		}
	} else {
		if (DAT_1012f315 == '\x01') {
			PlaceUniqueMonst(1, 0, 0);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PlaceGroup(int mtype, int num, int leaderf, int leader)

{
	undefined4 uVar1;
	uint uVar2;
	int iVar3;
	undefined8 uVar4;
	int yp;
	int xp;
	BOOL BVar5;
	int iVar6;
	undefined4 *puVar7;
	int iVar8;
	ulonglong uVar9;
	int iVar10;
	int iVar11;
	longlong lVar12;
	int xp_00;
	int yp_00;
	int local_58;

	uVar4 = 0x100f8fd0;
	uVar9 = ZEXT48(&DAT_1012f1b4);
	uVar2 = leaderf & 2;
	lVar12 = 0;
	iVar3 = leader * 0xe8;
	local_58 = 0;
	do {
		while ((int)lVar12 != 0) {
			lVar12 = lVar12 + -1;
			nummonsters = nummonsters + -1;
			*(undefined2 *)(*(int *)uVar9 + *(int *)(nummonsters * 0xe8 + 0x10151a50) * 0xe0 + *(int *)(nummonsters * 0xe8 + 0x10151a54) * 2) = 0;
		}
		if ((leaderf & 1U) == 0) {
			do {
				xp = random(']', 0x50);
				xp = xp + 0x10;
				yp = random(']', 0x50);
				yp = yp + 0x10;
				BVar5 = MonstPlace(xp, yp);
			} while (BVar5 == 0);
		} else {
			yp = random('\\', 8);
			xp = *(int *)(iVar3 + 0x10151a50) + *(int *)(&DAT_1010c890 + yp * 4);
			yp = *(int *)(iVar3 + 0x10151a54) + *(int *)(*(int *)((int)uVar4 + -0x71f0) + yp * 4);
		}
		yp_00 = **(int **)((int)uVar4 + -0x7084);
		if (yp_00 < nummonsters + num) {
			num = yp_00 - nummonsters;
		}
		iVar10 = 0;
		iVar11 = 0;
		yp_00 = yp;
		xp_00 = xp;
		while ((iVar10 < num && (iVar11 < 100))) {
			BVar5 = MonstPlace(xp_00, yp_00);
			if (((BVar5 == 0) || (*(char *)(_DAT_1012f1c8 + xp_00 * 0x70 + yp_00) != *(char *)(xp * 0x70 + yp + _DAT_1012f1c8))) || ((uVar2 != 0 && ((iVar6 = abs(xp_00 - xp), 3 < iVar6 || (iVar6 = abs(yp_00 - yp), 3 < iVar6)))))) {
				iVar11 = iVar11 + 1;
			} else {
				PlaceMonster(nummonsters, mtype, xp_00, yp_00);
				if ((leaderf & 1U) != 0) {
					iVar6 = nummonsters * 0xe8;
					*(int *)(iVar6 + 0x10151ac4) = *(int *)(iVar6 + 0x10151ac4) << 1;
					*(undefined4 *)(iVar6 + 0x10151ac8) = *(undefined4 *)(iVar6 + 0x10151ac4);
					*(undefined *)(iVar6 + 0x10151acd) = *(undefined *)(iVar3 + 0x10151acd);
					if (uVar2 != 0) {
						*(undefined *)(iVar6 + 0x10151b08) = (char)leader;
						*(undefined *)(iVar6 + 0x10151b09) = 1;
						*(undefined *)(iVar6 + 0x10151acc) = *(undefined *)(iVar3 + 0x10151acc);
					}
					if (*(char *)(iVar6 + 0x10151acc) != '\f') {
						puVar7 = (undefined4 *)(*(int *)(iVar6 + 0x10151b10) + *(int *)(iVar6 + 0x10151a78) * 8 + 8);
						uVar1 = puVar7[1];
						*(undefined4 *)(iVar6 + 0x10151a84) = *puVar7;
						*(undefined4 *)(iVar6 + 0x10151a88) = uVar1;
						iVar6 = random('X', *(int *)(iVar6 + 0x10151a94) + -1);
						iVar8 = nummonsters * 0xe8;
						*(int *)(iVar8 + 0x10151a98) = iVar6 + 1;
						*(uint *)(iVar8 + 0x10151ad0) = *(uint *)(iVar8 + 0x10151ad0) & 0xfffffffb;
						*(undefined4 *)(iVar8 + 0x10151a34) = 0;
					}
				}
				lVar12 = lVar12 + 1;
				iVar10 = iVar10 + 1;
				nummonsters = nummonsters + 1;
			}
			iVar6 = random('^', 8);
			xp_00 = xp_00 + *(int *)(&DAT_1010c890 + iVar6 * 4);
			iVar6 = random('^', 8);
			yp_00 = yp_00 + *(int *)(&DAT_1010c890 + iVar6 * 4);
		}
	} while (((int)lVar12 < num) && (local_58 = local_58 + 1, local_58 < 10));
	if (uVar2 != 0) {
		*(undefined *)(iVar3 + 0x10151b0a) = (char)lVar12;
	}
	return;
}

void LoadDiabMonsts(void)

{
	int iVar1;
	int *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = (int *)LoadFileInMem("Levels\\L4Data\\diab1.DUN", (DWORD *)0x0);
	SetMapMonsters((BYTE *)local_8[0], **(int **)(iVar1 + -0x72ec) << 1, **(int **)(iVar1 + -0x72f0) << 1);
	MemFreeDbg(local_8);
	local_8[0] = (int *)LoadFileInMem(*(char **)(iVar1 + -0x5cf0), (DWORD *)0x0);
	SetMapMonsters((BYTE *)local_8[0], **(int **)(iVar1 + -0x72f4) << 1, **(int **)(iVar1 + -0x72f8) << 1);
	MemFreeDbg(local_8);
	local_8[0] = (int *)LoadFileInMem(*(char **)(iVar1 + -0x5cf4), (DWORD *)0x0);
	SetMapMonsters((BYTE *)local_8[0], **(int **)(iVar1 + -0x72fc) << 1, **(int **)(iVar1 + -0x7300) << 1);
	MemFreeDbg(local_8);
	local_8[0] = (int *)LoadFileInMem(*(char **)(iVar1 + -0x5cf8), (DWORD *)0x0);
	SetMapMonsters((BYTE *)local_8[0], **(int **)(iVar1 + -0x7304) << 1, **(int **)(iVar1 + -0x7308) << 1);
	MemFreeDbg(local_8);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitMonsters(void)

{
	uint uVar1;
	ulonglong uVar2;
	undefined8 uVar3;
	BOOL BVar4;
	int mtype;
	int x;
	undefined8 unaff_r21;
	int y;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int *piVar5;
	int *piVar6;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	int v;
	undefined8 unaff_r27;
	int iVar7;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_1f8[115];
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

	uVar3 = 0x100f8fd0;
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
	v = 0;
	piVar6 = (int *)&DAT_101aca9c;
	if (DAT_1012f316 == '\0') {
		AddMonster(1, 0, 0, 0, 0);
		AddMonster(1, 0, 0, 0, 0);
		AddMonster(1, 0, 0, 0, 0);
		AddMonster(1, 0, 0, 0, 0);
	}
	if ((DAT_1012f316 == '\0') && (currlevel == 0x10)) {
		LoadDiabMonsts();
	}
	iVar7 = **(int **)((int)uVar3 + -0x70f8);
	if (currlevel == 0xf) {
		iVar7 = 1;
	}
	mtype = 0;
	piVar5 = piVar6;
	while (mtype < iVar7) {
		x = -2;
		do {
			y = -2;
			do {
				DoVision(x + *piVar5, y + piVar5[1], 0xf, 0, 0);
				y = y + 1;
			} while (y < 2);
			x = x + 1;
		} while (x < 2);
		piVar5 = piVar5 + 4;
		mtype = mtype + 1;
	}
	PlaceQuestMonsters();
	if (DAT_1012f316 == '\0') {
		PlaceUniques();
		mtype = 0;
		x = 0x10;
		do {
			y = 0x10;
			do {
				BVar4 = SolidLoc(x, y);
				if (BVar4 == 0) {
					mtype = mtype + 1;
				}
				y = y + 1;
			} while (y < 0x60);
			x = x + 1;
		} while (x < 0x60);
		x = (int)uVar3;
		uVar1 = mtype / 0x1e + (mtype >> 0x1f);
		_DAT_10151a28 = uVar1 + (uVar1 >> 0x1f);
		if (**(char **)(x + -0x77f0) != '\x01') {
			_DAT_10151a28 = _DAT_10151a28 + (_DAT_10151a28 >> 1);
		}
		if (0xbe < _DAT_10151a28 + nummonsters) {
			_DAT_10151a28 = 0xbe - nummonsters;
		}
		_DAT_10151a28 = nummonsters + _DAT_10151a28;
		mtype = *(int *)(x + -0x7610);
		y = 0;
		uVar2 = (ulonglong) * *(uint **)(x + -0x7618);
		if (0 < (int)**(uint **)(x + -0x7618)) {
			do {
				if ((*(byte *)(mtype + 1) & 1) != 0) {
					local_1f8[v] = y;
					v = v + 1;
				}
				mtype = mtype + 0x208;
				y = y + 1;
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
		}
		while (nummonsters < _DAT_10151a28) {
			mtype = random('_', v);
			mtype = local_1f8[mtype];
			if ((currlevel == 1) || (x = random('_', 2), x == 0)) {
				x = 1;
			} else {
				if (currlevel == 2) {
					x = random('_', 2);
					x = x + 2;
				} else {
					x = random('_', 3);
					x = x + 3;
				}
			}
			PlaceGroup(mtype, x, 0, 0);
		}
	}
	v = 0;
	while (v < iVar7) {
		mtype = -2;
		do {
			x = -2;
			do {
				DoUnVision(mtype + *piVar6, x + piVar6[1], 0xf);
				x = x + 1;
			} while (x < 2);
			mtype = mtype + 1;
		} while (mtype < 2);
		piVar6 = piVar6 + 4;
		v = v + 1;
	}
	return;
}

void SetMapMonsters(BYTE *pMap, int startx, int starty)

{
	int iVar1;
	int i;
	int iVar2;
	char cVar4;
	uint uVar3;
	int mtype;
	uint uVar5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar6;
	short *psVar7;
	int iVar8;
	int iVar9;
	undefined in_stack_ffffff9b;

	iVar2 = 0x100f8fd0;
	cVar4 = LockMemFile(
	    (longlong)(int)pMap, (char)startx, (char)starty, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff9b);
	AddMonsterType(0x6d, 2);
	AddMonster(1, 0, 0, 0, 0);
	AddMonster(1, 0, 0, 0, 0);
	AddMonster(1, 0, 0, 0, 0);
	AddMonster(1, 0, 0, 0, 0);
	if ((**(char **)(iVar2 + -0x77d8) != '\0') && (**(char **)(iVar2 + -0x77e0) == '\x05')) {
		AddMonsterType((int)cRam1010bb38, 4);
		AddMonsterType((int)cRam1010bb58, 4);
		AddMonsterType((int)cRam1010bb78, 4);
		PlaceUniqueMonst(4, 0, 0);
		PlaceUniqueMonst(5, 0, 0);
		PlaceUniqueMonst(6, 0, 0);
	}
	uVar5 = SEXT24(CONCAT11(*(undefined *)((int)cVar4 + 1), *(undefined *)(int)cVar4));
	uVar3 = SEXT24(CONCAT11(*(undefined *)((int)cVar4 + 3), *(undefined *)((int)cVar4 + 2)));
	iVar2 = (uVar5 & 0x7fff) * 2;
	iVar1 = (uVar3 & 0x7fff) * 2;
	lVar6 = (longlong)cVar4 + 4 + (ulonglong)((uVar5 & 0xffff) * (uVar3 & 0xffff) * 2) + (ulonglong)(uint)(iVar2 * iVar1 * 2);
	iVar8 = 0;
	while (iVar8 < iVar1) {
		iVar9 = 0;
		while (iVar9 < iVar2) {
			psVar7 = (short *)lVar6;
			if (*psVar7 != 0) {
				mtype = AddMonsterType(
				    (int)*(char *)((int)CONCAT11(*(undefined *)((int)psVar7 + 1), *(undefined *)psVar7) + 0x1010b9c7), 2);
				i = nummonsters;
				nummonsters = nummonsters + 1;
				PlaceMonster(i, mtype, iVar9 + startx + 0x10, iVar8 + starty + 0x10);
			}
			lVar6 = lVar6 + 2;
			iVar9 = iVar9 + 1;
		}
		iVar8 = iVar8 + 1;
	}
	UnlockMemFile((char)pMap);
	return;
}

void DeleteMonster(int i)

{
	undefined4 uVar1;

	nummonsters = nummonsters + -1;
	uVar1 = *(undefined4 *)(&DAT_10151708 + nummonsters * 4);
	*(undefined4 *)(&DAT_10151708 + nummonsters * 4) = *(undefined4 *)(&DAT_10151708 + i * 4);
	*(undefined4 *)(&DAT_10151708 + i * 4) = uVar1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int AddMonster(int x, int y, int dir, int mtype, BOOL InMap)

{
	int iVar1;
	int i;

	if (nummonsters < 200) {
		iVar1 = nummonsters + 1;
		i = *(int *)(&DAT_10151708 + nummonsters * 4);
		nummonsters = iVar1;
		if (InMap != 0) {
			nummonsters = iVar1;
			*(short *)(_DAT_1012f1b4 + x * 0xe0 + y * 2) = (short)i + 1;
		}
		InitMonster(i, dir, mtype, x, y);
	} else {
		i = -1;
	}
	return i;
}

void NewMonsterAnim(int i, AnimStruct *anim, int md)

{
	BYTE *pBVar1;

	i = i * 0xe8;
	pBVar1 = (&anim->CMem + md * 2)[2];
	*(BYTE **)(i + 0x10151a84) = (&anim->CMem + md * 2)[1];
	*(BYTE **)(i + 0x10151a88) = pBVar1;
	*(BYTE **)(i + 0x10151a94) = anim[1].Data[5];
	*(undefined4 *)(i + 0x10151a98) = 1;
	*(undefined4 *)(i + 0x10151a90) = 0;
	*(BYTE **)(i + 0x10151a8c) = anim[1].Data[6];
	*(int *)(i + 0x10151a78) = md;
	*(uint *)(i + 0x10151ad0) = *(uint *)(i + 0x10151ad0) & 0xfffffff9;
	return;
}

BOOL M_Ranged(int i)

{
	char cVar1;

	cVar1 = *(char *)(i * 0xe8 + 0x10151acc);
	if ((((cVar1 != '\x03') && (cVar1 != '\a')) && (cVar1 != '\x0e')) && (cVar1 != '\x1d')) {
		return 0;
	}
	return 1;
}

BOOL M_Talker(int i)

{
	char cVar1;

	cVar1 = *(char *)(i * 0xe8 + 0x10151acc);
	if ((((cVar1 != '\x1c') && (cVar1 != '\x12')) && (1 < (byte)(cVar1 - 0x16U))) && (2 < (byte)(cVar1 - 0x1dU))) {
		return 0;
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void M_Enemy(int i)

{
	uint uVar1;
	int iVar4;
	undefined8 uVar2;
	undefined8 uVar3;
	int iVar5;
	int iVar6;
	BOOL BVar7;
	int iVar8;
	int iVar9;
	int i_00;
	int *piVar10;
	int *piVar11;
	PlayerStruct *pPVar12;
	ulonglong unaff_r27;
	ulonglong unaff_r28;
	uint uVar13;
	int iVar14;
	int iVar15;

	uVar3 = 0x100f8fd0;
	iVar5 = 0x100f8fd0;
	iVar15 = -1;
	iVar14 = -1;
	uVar13 = 0;
	iVar4 = i * 0xe8;
	if ((*(uint *)(iVar4 + 0x10151ad0) & 0x20) == 0) {
		i_00 = 0;
		pPVar12 = plr;
		do {
			if ((((pPVar12->plractive != false) && ((uint)currlevel == pPVar12->plrlevel)) && (pPVar12->_pLvlChanging == false)) && ((pPVar12->_pHitPoints != 0 || (gbMaxPlayers == '\x01')))) {
				uVar2 = countLeadingZeros((int)*(char *)(_DAT_1012f1c8 + pPVar12->WorldX * 0x70 + pPVar12->WorldY) - (int)*(char *)(_DAT_1012f1c8 + *(int *)(iVar4 + 0x10151a50) * 0x70 + *(int *)(iVar4 + 0x10151a54)));
				uVar1 = (uint)uVar2 >> 5 & 0xff;
				iVar5 = abs(*(int *)(iVar4 + 0x10151a54) - pPVar12->WorldY);
				iVar6 = abs(*(int *)(iVar4 + 0x10151a50) - pPVar12->WorldX);
				if (iVar5 < iVar6) {
					iVar5 = abs(*(int *)(iVar4 + 0x10151a50) - pPVar12->WorldX);
				} else {
					iVar5 = abs(*(int *)(iVar4 + 0x10151a54) - pPVar12->WorldY);
				}
				if ((((uVar1 != 0) && (uVar13 == 0)) || (((uVar1 != 0 || (uVar13 == 0)) && (iVar5 < iVar14)))) || (iVar15 == -1)) {
					*(uint *)(iVar4 + 0x10151ad0) = *(uint *)(iVar4 + 0x10151ad0) & 0xffffffef;
					unaff_r28 = (ulonglong)(pPVar12->_px & 0xff);
					unaff_r27 = (ulonglong)(pPVar12->_py & 0xff);
					uVar13 = uVar1;
					iVar14 = iVar5;
					iVar15 = i_00;
				}
			}
			iVar5 = (int)uVar3;
			i_00 = i_00 + 1;
			pPVar12 = (PlayerStruct *)&pPVar12[1]._pSpellFlags;
		} while (i_00 < 4);
	}
	piVar11 = *(int **)(iVar5 + -0x7628);
	iVar5 = 0;
	do {
		if (nummonsters <= iVar5) {
			if (iVar15 == -1) {
				*(uint *)(iVar4 + 0x10151ad0) = *(uint *)(iVar4 + 0x10151ad0) | 0x400;
			} else {
				*(int *)(iVar4 + 0x10151a7c) = iVar15;
				*(undefined *)(iVar4 + 0x10151a80) = (char)unaff_r28;
				*(undefined *)(iVar4 + 0x10151a81) = (char)unaff_r27;
				*(uint *)(iVar4 + 0x10151ad0) = *(uint *)(iVar4 + 0x10151ad0) & 0xfffffbff;
			}
			return;
		}
		i_00 = *piVar11;
		if (i_00 != i) {
			iVar6 = i_00 * 0xe8;
			piVar10 = (int *)(iVar6 + 0x10151a50);
			if ((*(int *)(iVar6 + 0x10151a50) != 1) || (*(int *)(iVar6 + 0x10151a54) != 0)) {
				BVar7 = M_Talker(i_00);
				if (BVar7 != 0) {
					if (*(int *)(iVar6 + 0x10151b04) != 0)
						goto LAB_1006b59c;
				}
				if ((*(uint *)(iVar4 + 0x10151ad0) & 0x20) == 0) {
					iVar8 = abs(*piVar10 - *(int *)(iVar4 + 0x10151a50));
					if (iVar8 < 2) {
						iVar8 = abs(*(int *)(iVar6 + 0x10151a54) - *(int *)(iVar4 + 0x10151a54));
						if (iVar8 < 2)
							goto LAB_1006b4a0;
					}
					BVar7 = M_Ranged(i);
					if (BVar7 == 0)
						goto LAB_1006b59c;
				}
			LAB_1006b4a0:
				if (((*(uint *)(iVar4 + 0x10151ad0) & 0x20) != 0) || ((*(uint *)(iVar6 + 0x10151ad0) & 0x20) != 0)) {
					uVar3 = countLeadingZeros((int)*(char *)(_DAT_1012f1c8 + *piVar10 * 0x70 + *(int *)(iVar6 + 0x10151a54)) - (int)*(char *)(_DAT_1012f1c8 + *(int *)(iVar4 + 0x10151a50) * 0x70 + *(int *)(iVar4 + 0x10151a54)));
					uVar1 = (uint)uVar3 >> 5 & 0xff;
					iVar8 = abs(*(int *)(iVar4 + 0x10151a54) - *(int *)(iVar6 + 0x10151a54));
					iVar9 = abs(*(int *)(iVar4 + 0x10151a50) - *piVar10);
					if (iVar8 < iVar9) {
						iVar8 = abs(*(int *)(iVar4 + 0x10151a50) - *piVar10);
					} else {
						iVar8 = abs(*(int *)(iVar4 + 0x10151a54) - *(int *)(iVar6 + 0x10151a54));
					}
					if ((((uVar1 != 0) && (uVar13 == 0)) || (((uVar1 != 0 || (uVar13 == 0)) && (iVar8 < iVar14)))) || (iVar15 == -1)) {
						*(uint *)(iVar4 + 0x10151ad0) = *(uint *)(iVar4 + 0x10151ad0) | 0x10;
						unaff_r28 = (ulonglong)(*(uint *)(iVar6 + 0x10151a58) & 0xff);
						unaff_r27 = (ulonglong)(*(uint *)(iVar6 + 0x10151a5c) & 0xff);
						uVar13 = uVar1;
						iVar14 = iVar8;
						iVar15 = i_00;
					}
				}
			}
		}
	LAB_1006b59c:
		piVar11 = piVar11 + 1;
		iVar5 = iVar5 + 1;
	} while (true);
}

int M_GetDir(int i)

{
	int iVar1;

	i = i * 0xe8;
	iVar1 = GetDirection(*(int *)(i + 0x10151a50), *(int *)(i + 0x10151a54), (uint) * (byte *)(i + 0x10151a80),
	    (uint) * (byte *)(i + 0x10151a81));
	return iVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void M_CheckEFlag(int i)

{
	int iVar1;
	int iVar2;
	uint uVar3;
	int x;
	int y;

	iVar1 = 0x100f8fd0;
	i = i * 0xe8;
	x = *(int *)(i + 0x10151a50) + -1;
	y = *(int *)(i + 0x10151a54) + 1;
	if (_DAT_100fb824 == 0) {
		uVar3 = _DAT_1012f1d0 + x * 0xe00 + y * 0x20;
		if (uVar3 < _DAT_1012f1d0) {
			*(undefined4 *)(i + 0x10151a9c) = 0;
			return;
		}
	} else {
		iVar1 = 0x100f8fd0;
		iVar2 = IsometricCoord(x, y);
		uVar3 = **(uint **)(iVar1 + -0x7584) + iVar2 * 0x20;
		if (uVar3 < **(uint **)(iVar1 + -0x7584)) {
			*(undefined4 *)(i + 0x10151a9c) = 0;
			return;
		}
	}
	if (((ulonglong)(ushort)(*(ushort *)(uVar3 + 4) | *(ushort *)(uVar3 + 6) | *(ushort *)(uVar3 + 8) | *(ushort *)(uVar3 + 10) | *(ushort *)(uVar3 + 0xc) | *(ushort *)(uVar3 + 0xe) | *(ushort *)(uVar3 + 0x10) | *(ushort *)(uVar3 + 0x12)) | (longlong) * (char *)(**(int **)(iVar1 + -0x7598) + x * 0x70 + y)) == 0) {
		*(undefined4 *)(i + 0x10151a9c) = 0;
	} else {
		*(undefined4 *)(i + 0x10151a9c) = 1;
	}
	return;
}

void M_StartStand(int i, int md)

{
	char *pcVar1;
	int iVar2;

	ClearMVars(i);
	iVar2 = i * 0xe8;
	pcVar1 = *(char **)(iVar2 + 0x10151b10);
	if (*pcVar1 == 'm') {
		NewMonsterAnim(i, (AnimStruct *)(pcVar1 + 0x50), md);
	} else {
		NewMonsterAnim(i, (AnimStruct *)(pcVar1 + 4), md);
	}
	*(undefined4 *)(iVar2 + 0x10151aa4) = *(undefined4 *)(iVar2 + 0x10151a34);
	*(undefined4 *)(iVar2 + 0x10151aa8) = 0;
	*(undefined4 *)(iVar2 + 0x10151a34) = 0;
	*(undefined4 *)(iVar2 + 0x10151a68) = 0;
	*(undefined4 *)(iVar2 + 0x10151a6c) = 0;
	*(undefined4 *)(iVar2 + 0x10151a58) = *(undefined4 *)(iVar2 + 0x10151a50);
	*(undefined4 *)(iVar2 + 0x10151a5c) = *(undefined4 *)(iVar2 + 0x10151a54);
	*(undefined4 *)(iVar2 + 0x10151a60) = *(undefined4 *)(iVar2 + 0x10151a50);
	*(undefined4 *)(iVar2 + 0x10151a64) = *(undefined4 *)(iVar2 + 0x10151a54);
	*(int *)(iVar2 + 0x10151a78) = md;
	M_CheckEFlag(i);
	M_Enemy(i);
	return;
}

void M_StartDelay(int i, int len)

{
	if (len < 1) {
		return;
	}
	i = i * 0xe8;
	if (*(char *)(i + 0x10151acc) == '\x1c') {
		return;
	}
	*(int *)(i + 0x10151aa8) = len;
	*(undefined4 *)(i + 0x10151a34) = 0xd;
	return;
}

void M_StartSpStand(int i, int md)

{
	int iVar1;

	iVar1 = i * 0xe8;
	NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar1 + 0x10151b10) + 0x180), md);
	*(undefined4 *)(iVar1 + 0x10151a34) = 0xb;
	*(undefined4 *)(iVar1 + 0x10151a68) = 0;
	*(undefined4 *)(iVar1 + 0x10151a6c) = 0;
	*(undefined4 *)(iVar1 + 0x10151a58) = *(undefined4 *)(iVar1 + 0x10151a50);
	*(undefined4 *)(iVar1 + 0x10151a5c) = *(undefined4 *)(iVar1 + 0x10151a54);
	*(undefined4 *)(iVar1 + 0x10151a60) = *(undefined4 *)(iVar1 + 0x10151a50);
	*(undefined4 *)(iVar1 + 0x10151a64) = *(undefined4 *)(iVar1 + 0x10151a54);
	*(int *)(iVar1 + 0x10151a78) = md;
	M_CheckEFlag(i);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void M_StartWalk3(int i, int xvel, int yvel, int xoff, int yoff, int xadd, int yadd, int mapx, int mapy, int EndDir)

{
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = i * 0xe8;
	iVar1 = xoff + *(int *)(iVar2 + 0x10151a50);
	iVar3 = yoff + *(int *)(iVar2 + 0x10151a54);
	*(short *)(_DAT_1012f1b4 + iVar1 * 0xe0 + iVar3 * 2) = -1 - (short)i;
	*(undefined4 *)(iVar2 + 0x10151a34) = 1;
	*(undefined4 *)(iVar2 + 0x10151a60) = *(undefined4 *)(iVar2 + 0x10151a50);
	*(undefined4 *)(iVar2 + 0x10151a64) = *(undefined4 *)(iVar2 + 0x10151a54);
	*(int *)(iVar2 + 0x10151a58) = iVar1;
	*(int *)(iVar2 + 0x10151a5c) = iVar3;
	*(int *)(iVar2 + 0x10151a70) = xvel;
	*(int *)(iVar2 + 0x10151a74) = yvel;
	*(int *)(iVar2 + 0x10151aa4) = xoff;
	*(int *)(iVar2 + 0x10151aa8) = yoff;
	*(int *)(iVar2 + 0x10151aac) = xadd;
	*(int *)(iVar2 + 0x10151a78) = xadd;
	NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar2 + 0x10151b10) + 0x50), xadd);
	*(undefined4 *)(iVar2 + 0x10151ab8) = 0;
	*(undefined4 *)(iVar2 + 0x10151abc) = 0;
	*(undefined4 *)(iVar2 + 0x10151ac0) = 0;
	M_CheckEFlag(i);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void M_StartWalk(int i, int xvel, int yvel, int xadd, int yadd, int EndDir)

{
	int iVar1;
	int in_r9;
	int md;
	int iVar2;

	iVar2 = i * 0xe8;
	EndDir = EndDir + *(int *)(iVar2 + 0x10151a50);
	iVar1 = in_r9 + *(int *)(iVar2 + 0x10151a54);
	*(short *)(_DAT_1012f1b4 + *(int *)(iVar2 + 0x10151a50) * 0xe0 + *(int *)(iVar2 + 0x10151a54) * 2) = -1 - (short)i;
	*(undefined4 *)(iVar2 + 0x10151aa4) = *(undefined4 *)(iVar2 + 0x10151a50);
	*(undefined4 *)(iVar2 + 0x10151aa8) = *(undefined4 *)(iVar2 + 0x10151a54);
	*(undefined4 *)(iVar2 + 0x10151a60) = *(undefined4 *)(iVar2 + 0x10151a50);
	*(undefined4 *)(iVar2 + 0x10151a64) = *(undefined4 *)(iVar2 + 0x10151a54);
	*(int *)(iVar2 + 0x10151a50) = EndDir;
	*(int *)(iVar2 + 0x10151a54) = iVar1;
	*(int *)(iVar2 + 0x10151a58) = EndDir;
	*(int *)(iVar2 + 0x10151a5c) = iVar1;
	*(short *)(_DAT_1012f1b4 + EndDir * 0xe0 + iVar1 * 2) = (short)i + 1;
	if (*(char *)(iVar2 + 0x10151af0) != '\0') {
		ChangeLightXY((uint) * (byte *)(iVar2 + 0x10151b0b), *(int *)(iVar2 + 0x10151a50), *(int *)(iVar2 + 0x10151a54));
	}
	*(int *)(iVar2 + 0x10151a68) = xadd;
	*(int *)(iVar2 + 0x10151a6c) = yadd;
	*(undefined4 *)(iVar2 + 0x10151a34) = 2;
	*(int *)(iVar2 + 0x10151a70) = xvel;
	*(int *)(iVar2 + 0x10151a74) = yvel;
	*(int *)(iVar2 + 0x10151aac) = md;
	*(int *)(iVar2 + 0x10151a78) = md;
	NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar2 + 0x10151b10) + 0x50), md);
	*(int *)(iVar2 + 0x10151ab8) = xadd << 4;
	*(int *)(iVar2 + 0x10151abc) = yadd << 4;
	*(undefined4 *)(iVar2 + 0x10151ac0) = 0;
	M_CheckEFlag(i);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void M_StartWalk2(int i, int xvel, int yvel, int xoff, int yoff, int xadd, int yadd, int EndDir)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	int iVar4;
	short sVar5;
	int y;
	int iVar6;
	int in_stack_00000038;
	int md;

	iVar4 = 0x100f8fd0;
	iVar6 = i * 0xe8;
	piVar1 = (int *)(iVar6 + 0x10151a50);
	piVar2 = (int *)(iVar6 + 0x10151a54);
	xadd = xadd + *piVar1;
	y = in_stack_00000038 + *piVar2;
	yadd = yadd + *piVar2;
	EndDir = EndDir + *piVar1;
	if (*(char *)(iVar6 + 0x10151af0) != '\0') {
		iVar4 = 0x100f8fd0;
		ChangeLightXY((uint) * (byte *)(iVar6 + 0x10151b0b), EndDir, y);
	}
	sVar5 = -1 - (short)i;
	piVar3 = *(int **)(iVar4 + -0x779c);
	iVar4 = EndDir * 0x70 + y;
	*(short *)(_DAT_1012f1b4 + *piVar1 * 0xe0 + *piVar2 * 2) = sVar5;
	*(short *)(_DAT_1012f1b4 + xadd * 0xe0 + yadd * 2) = sVar5;
	*(int *)(iVar6 + 0x10151ab0) = EndDir;
	*(int *)(iVar6 + 0x10151ab4) = y;
	*(byte *)(*piVar3 + iVar4) = *(byte *)(*piVar3 + iVar4) | 0x10;
	*(int *)(iVar6 + 0x10151a60) = *piVar1;
	*(int *)(iVar6 + 0x10151a64) = *piVar2;
	*(int *)(iVar6 + 0x10151a58) = xadd;
	*(int *)(iVar6 + 0x10151a5c) = yadd;
	*(int *)(iVar6 + 0x10151a68) = xoff;
	*(int *)(iVar6 + 0x10151a6c) = yoff;
	*(undefined4 *)(iVar6 + 0x10151a34) = 3;
	*(int *)(iVar6 + 0x10151a70) = xvel;
	*(int *)(iVar6 + 0x10151a74) = yvel;
	*(int *)(iVar6 + 0x10151aa4) = xadd;
	*(int *)(iVar6 + 0x10151aa8) = yadd;
	*(int *)(iVar6 + 0x10151aac) = md;
	*(int *)(iVar6 + 0x10151a78) = md;
	NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar6 + 0x10151b10) + 0x50), md);
	*(int *)(iVar6 + 0x10151ab8) = xoff << 4;
	*(int *)(iVar6 + 0x10151abc) = yoff << 4;
	*(undefined4 *)(iVar6 + 0x10151ac0) = 0;
	M_CheckEFlag(i);
	return;
}

void M_StartAttack(int i)

{
	int iVar1;
	int md;

	md = M_GetDir(i);
	iVar1 = i * 0xe8;
	NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar1 + 0x10151b10) + 0x9c), md);
	*(undefined4 *)(iVar1 + 0x10151a34) = 4;
	*(undefined4 *)(iVar1 + 0x10151a68) = 0;
	*(undefined4 *)(iVar1 + 0x10151a6c) = 0;
	*(undefined4 *)(iVar1 + 0x10151a58) = *(undefined4 *)(iVar1 + 0x10151a50);
	*(undefined4 *)(iVar1 + 0x10151a5c) = *(undefined4 *)(iVar1 + 0x10151a54);
	*(undefined4 *)(iVar1 + 0x10151a60) = *(undefined4 *)(iVar1 + 0x10151a50);
	*(undefined4 *)(iVar1 + 0x10151a64) = *(undefined4 *)(iVar1 + 0x10151a54);
	*(int *)(iVar1 + 0x10151a78) = md;
	M_CheckEFlag(i);
	return;
}

void M_StartRAttack(int i, int missile_type, int dam)

{
	int iVar1;
	int md;

	md = M_GetDir(i);
	iVar1 = i * 0xe8;
	NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar1 + 0x10151b10) + 0x9c), md);
	*(undefined4 *)(iVar1 + 0x10151a34) = 10;
	*(int *)(iVar1 + 0x10151aa4) = missile_type;
	*(int *)(iVar1 + 0x10151aa8) = dam;
	*(undefined4 *)(iVar1 + 0x10151a68) = 0;
	*(undefined4 *)(iVar1 + 0x10151a6c) = 0;
	*(undefined4 *)(iVar1 + 0x10151a58) = *(undefined4 *)(iVar1 + 0x10151a50);
	*(undefined4 *)(iVar1 + 0x10151a5c) = *(undefined4 *)(iVar1 + 0x10151a54);
	*(undefined4 *)(iVar1 + 0x10151a60) = *(undefined4 *)(iVar1 + 0x10151a50);
	*(undefined4 *)(iVar1 + 0x10151a64) = *(undefined4 *)(iVar1 + 0x10151a54);
	*(int *)(iVar1 + 0x10151a78) = md;
	M_CheckEFlag(i);
	return;
}

void M_StartRSpAttack(int i, int missile_type, int dam)

{
	int iVar1;
	int md;

	md = M_GetDir(i);
	iVar1 = i * 0xe8;
	NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar1 + 0x10151b10) + 0x180), md);
	*(undefined4 *)(iVar1 + 0x10151a34) = 0xc;
	*(int *)(iVar1 + 0x10151aa4) = missile_type;
	*(undefined4 *)(iVar1 + 0x10151aa8) = 0;
	*(int *)(iVar1 + 0x10151aac) = dam;
	*(undefined4 *)(iVar1 + 0x10151a68) = 0;
	*(undefined4 *)(iVar1 + 0x10151a6c) = 0;
	*(undefined4 *)(iVar1 + 0x10151a58) = *(undefined4 *)(iVar1 + 0x10151a50);
	*(undefined4 *)(iVar1 + 0x10151a5c) = *(undefined4 *)(iVar1 + 0x10151a54);
	*(undefined4 *)(iVar1 + 0x10151a60) = *(undefined4 *)(iVar1 + 0x10151a50);
	*(undefined4 *)(iVar1 + 0x10151a64) = *(undefined4 *)(iVar1 + 0x10151a54);
	*(int *)(iVar1 + 0x10151a78) = md;
	M_CheckEFlag(i);
	return;
}

void M_StartSpAttack(int i)

{
	int iVar1;
	int md;

	md = M_GetDir(i);
	iVar1 = i * 0xe8;
	NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar1 + 0x10151b10) + 0x180), md);
	*(undefined4 *)(iVar1 + 0x10151a34) = 7;
	*(undefined4 *)(iVar1 + 0x10151a68) = 0;
	*(undefined4 *)(iVar1 + 0x10151a6c) = 0;
	*(undefined4 *)(iVar1 + 0x10151a58) = *(undefined4 *)(iVar1 + 0x10151a50);
	*(undefined4 *)(iVar1 + 0x10151a5c) = *(undefined4 *)(iVar1 + 0x10151a54);
	*(undefined4 *)(iVar1 + 0x10151a60) = *(undefined4 *)(iVar1 + 0x10151a50);
	*(undefined4 *)(iVar1 + 0x10151a64) = *(undefined4 *)(iVar1 + 0x10151a54);
	*(int *)(iVar1 + 0x10151a78) = md;
	M_CheckEFlag(i);
	return;
}

void M_StartEat(int i)

{
	int iVar1;

	iVar1 = i * 0xe8;
	NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar1 + 0x10151b10) + 0x180), *(int *)(iVar1 + 0x10151a78));
	*(undefined4 *)(iVar1 + 0x10151a34) = 7;
	*(undefined4 *)(iVar1 + 0x10151a68) = 0;
	*(undefined4 *)(iVar1 + 0x10151a6c) = 0;
	*(undefined4 *)(iVar1 + 0x10151a58) = *(undefined4 *)(iVar1 + 0x10151a50);
	*(undefined4 *)(iVar1 + 0x10151a5c) = *(undefined4 *)(iVar1 + 0x10151a54);
	*(undefined4 *)(iVar1 + 0x10151a60) = *(undefined4 *)(iVar1 + 0x10151a50);
	*(undefined4 *)(iVar1 + 0x10151a64) = *(undefined4 *)(iVar1 + 0x10151a54);
	M_CheckEFlag(i);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void M_ClearSquares(int i)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	short *psVar7;
	int iVar8;
	int iVar9;

	iVar4 = *(int *)(i * 0xe8 + 0x10151a64);
	iVar1 = *(int *)(i * 0xe8 + 0x10151a60);
	iVar9 = iVar4 + -1;
	iVar3 = iVar9 * 2;
	while (iVar9 <= iVar4 + 1) {
		if ((-1 < iVar9) && (iVar9 < 0x70)) {
			iVar8 = iVar1 + -1;
			iVar2 = (iVar1 + 2) - iVar8;
			iVar6 = iVar8 * 0xe0;
			if (iVar8 <= iVar1 + 1) {
				do {
					if ((-1 < iVar8) && (iVar8 < 0x70)) {
						psVar7 = (short *)(iVar3 + _DAT_1012f1b4 + iVar6);
						iVar5 = (int)*psVar7;
						if ((-1 - i == iVar5) || (i + 1 == iVar5)) {
							*psVar7 = 0;
						}
					}
					iVar6 = iVar6 + 0xe0;
					iVar8 = iVar8 + 1;
					iVar2 = iVar2 + -1;
				} while (iVar2 != 0);
			}
		}
		iVar3 = iVar3 + 2;
		iVar9 = iVar9 + 1;
	}
	if (iVar1 + 1 < 0x70) {
		iVar3 = _DAT_1012f1bc + iVar1 * 0x70 + iVar4;
		*(byte *)(iVar3 + 0x70) = *(byte *)(iVar3 + 0x70) & 0xef;
	}
	if (iVar4 + 1 < 0x70) {
		iVar4 = _DAT_1012f1bc + iVar1 * 0x70 + iVar4;
		*(byte *)(iVar4 + 1) = *(byte *)(iVar4 + 1) & 0xef;
	}
	return;
}

void M_GetKnockback(int i)

{
	int *piVar1;
	int *piVar2;
	int iVar3;
	uint mdir;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	int iVar7;

	iVar5 = 0x100f8fd0;
	iVar7 = i * 0xe8;
	mdir = *(int *)(iVar7 + 0x10151a78) + 4U & 7;
	BVar6 = DirOK(i, mdir);
	if (BVar6 != 0) {
		M_ClearSquares(i);
		iVar4 = mdir * 4;
		iVar3 = *(int *)(iVar5 + -0x71f0);
		piVar1 = (int *)(iVar7 + 0x10151a60);
		*piVar1 = *(int *)(iVar7 + 0x10151a60) + *(int *)(*(int *)(iVar5 + -0x71ec) + iVar4);
		piVar2 = (int *)(iVar7 + 0x10151a64);
		*piVar2 = *(int *)(iVar7 + 0x10151a64) + *(int *)(iVar3 + iVar4);
		NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar7 + 0x10151b10) + 0xe8), *(int *)(iVar7 + 0x10151a78));
		*(undefined4 *)(iVar7 + 0x10151a34) = 5;
		*(undefined4 *)(iVar7 + 0x10151a68) = 0;
		*(undefined4 *)(iVar7 + 0x10151a6c) = 0;
		*(int *)(iVar7 + 0x10151a50) = *piVar1;
		*(int *)(iVar7 + 0x10151a54) = *piVar2;
		*(undefined4 *)(iVar7 + 0x10151a58) = *(undefined4 *)(iVar7 + 0x10151a50);
		*(undefined4 *)(iVar7 + 0x10151a5c) = *(undefined4 *)(iVar7 + 0x10151a54);
		*piVar1 = *(int *)(iVar7 + 0x10151a50);
		*piVar2 = *(int *)(iVar7 + 0x10151a54);
		M_CheckEFlag(i);
		M_ClearSquares(i);
		*(short *)(**(int **)(iVar5 + -0x767c) + *(int *)(iVar7 + 0x10151a50) * 0xe0 + *(int *)(iVar7 + 0x10151a54) * 2) = (short)i + 1;
	}
	return;
}

void M_StartHit(int i, int pnum, int dam)

{
	byte **ppbVar1;
	byte bVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar3 = 0x100f8fd0;
	if (-1 < (longlong)pnum) {
		*(byte *)(i * 0xe8 + 0x10151af3) = *(byte *)(i * 0xe8 + 0x10151af3) | (byte)(1 << (longlong)pnum);
	}
	if (pnum == myplr) {
		iVar3 = 0x100f8fd0;
		delta_monster_hp(i, *(int *)(i * 0xe8 + 0x10151ac8), currlevel);
		NetSendCmdParam2(0, '%', (WORD)i, (WORD)dam);
	}
	PlayEffect(i, 1);
	iVar5 = i * 0xe8;
	ppbVar1 = (byte **)(iVar5 + 0x10151b10);
	if (((0x1c < **ppbVar1) && (**ppbVar1 < 0x21)) || ((int)*(char *)(iVar5 + 0x10151af4) + 3 <= dam >> 6)) {
		if (-1 < pnum) {
			*(int *)(iVar5 + 0x10151a7c) = pnum;
			*(undefined *)(iVar5 + 0x10151a80) = (char)*(undefined4 *)((int)plr + pnum * 0x55ec + 0x40);
			*(undefined *)(iVar5 + 0x10151a81) = (char)*(undefined4 *)((int)plr + pnum * 0x55ec + 0x44);
			*(uint *)(iVar5 + 0x10151ad0) = *(uint *)(iVar5 + 0x10151ad0) & 0xffffffef;
			iVar4 = M_GetDir(i);
			*(int *)(iVar5 + 0x10151a78) = iVar4;
		}
		bVar2 = **ppbVar1;
		if (bVar2 == 0x27) {
			M_Teleport(i);
		} else {
			if ((0xf < bVar2) && (bVar2 < 0x14)) {
				*(undefined *)(iVar5 + 0x10151a38) = 1;
			}
		}
		if (*(int *)(iVar5 + 0x10151a34) != 0xf) {
			NewMonsterAnim(i, (AnimStruct *)(*ppbVar1 + 0xe8), *(int *)(iVar5 + 0x10151a78));
			*(int *)(iVar5 + 0x10151a34) = 5;
			*(undefined4 *)(iVar5 + 0x10151a68) = 0;
			*(undefined4 *)(iVar5 + 0x10151a6c) = 0;
			*(undefined4 *)(iVar5 + 0x10151a50) = *(undefined4 *)(iVar5 + 0x10151a60);
			*(undefined4 *)(iVar5 + 0x10151a54) = *(undefined4 *)(iVar5 + 0x10151a64);
			*(undefined4 *)(iVar5 + 0x10151a58) = *(undefined4 *)(iVar5 + 0x10151a50);
			*(undefined4 *)(iVar5 + 0x10151a5c) = *(undefined4 *)(iVar5 + 0x10151a54);
			*(undefined4 *)(iVar5 + 0x10151a60) = *(undefined4 *)(iVar5 + 0x10151a50);
			*(undefined4 *)(iVar5 + 0x10151a64) = *(undefined4 *)(iVar5 + 0x10151a54);
			M_CheckEFlag(i);
			M_ClearSquares(i);
			*(short *)(**(int **)(iVar3 + -0x767c) + *(int *)(iVar5 + 0x10151a50) * 0xe0 + *(int *)(iVar5 + 0x10151a54) * 2) = (WORD)i + 1;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void M_DiabloDeath(int i, BOOL sendmsg)

{
	int iVar1;
	undefined8 uVar2;
	int i_00;
	int iVar3;
	int iVar4;
	uint uVar5;
	int *piVar6;
	double dVar7;

	uVar2 = 0x100f8fd0;
	iVar1 = i * 0xe8;
	PlaySFX(0x359);
	*(undefined *)(*(int *)((int)uVar2 + -0x7604) + 0x7a) = 3;
	if (sendmsg != 0) {
		NetSendCmdQuest(1, '\x05');
	}
	i_00 = (int)uVar2;
	iVar3 = 0;
	piVar6 = *(int **)(i_00 + -0x7628);
	*(undefined *)(i_00 + -0x4d88) = **(undefined **)(i_00 + -0x72b8);
	**(undefined4 **)(i_00 + -0x75a8) = 0;
	while (i_00 = (int)uVar2, iVar3 < nummonsters) {
		i_00 = *piVar6;
		if ((i_00 != i) && (*(char *)(iVar1 + 0x10151ad4) != '\0')) {
			iVar4 = i_00 * 0xe8;
			NewMonsterAnim(i_00, (AnimStruct *)(*(int *)(iVar4 + 0x10151b10) + 0x134), *(int *)(iVar4 + 0x10151a78));
			*(undefined4 *)(iVar4 + 0x10151a34) = 6;
			*(undefined4 *)(iVar4 + 0x10151a68) = 0;
			*(undefined4 *)(iVar4 + 0x10151a6c) = 0;
			*(undefined4 *)(iVar4 + 0x10151aa4) = 0;
			*(undefined4 *)(iVar4 + 0x10151a50) = *(undefined4 *)(iVar4 + 0x10151a60);
			*(undefined4 *)(iVar4 + 0x10151a54) = *(undefined4 *)(iVar4 + 0x10151a64);
			*(undefined4 *)(iVar4 + 0x10151a58) = *(undefined4 *)(iVar4 + 0x10151a50);
			*(undefined4 *)(iVar4 + 0x10151a5c) = *(undefined4 *)(iVar4 + 0x10151a54);
			*(undefined4 *)(iVar4 + 0x10151a60) = *(undefined4 *)(iVar4 + 0x10151a50);
			*(undefined4 *)(iVar4 + 0x10151a64) = *(undefined4 *)(iVar4 + 0x10151a54);
			M_CheckEFlag(i_00);
			M_ClearSquares(i_00);
			*(short *)(_DAT_1012f1b4 + *(int *)(iVar4 + 0x10151a50) * 0xe0 + *(int *)(iVar4 + 0x10151a54) * 2) = (short)i_00 + 1;
		}
		piVar6 = piVar6 + 1;
		iVar3 = iVar3 + 1;
	}
	AddLight(*(int *)(iVar1 + 0x10151a50), *(int *)(iVar1 + 0x10151a54), 8);
	DoVision(*(int *)(iVar1 + 0x10151a50), *(int *)(iVar1 + 0x10151a54), 8, 0, 1);
	iVar3 = abs(_DAT_1012f30c - *(int *)(iVar1 + 0x10151a54));
	iVar4 = abs(_DAT_1012f310 - *(int *)(iVar1 + 0x10151a50));
	if (iVar3 < iVar4) {
		uVar5 = abs(_DAT_1012f310 - *(int *)(iVar1 + 0x10151a50));
	} else {
		uVar5 = abs(_DAT_1012f30c - *(int *)(iVar1 + 0x10151a54));
	}
	if (0x14 < (int)uVar5) {
		uVar5 = 0x14;
	}
	*(int *)(iVar1 + 0x10151aac) = _DAT_1012f310 << 0x10;
	*(int *)(iVar1 + 0x10151ab0) = _DAT_1012f30c << 0x10;
	dVar7 = *(double *)(i_00 + -0x4d80);
	*(int *)(iVar1 + 0x10151ab4) = (int)(((double)CONCAT44(
	                                          0x43300000, *(int *)(iVar1 + 0x10151aac) + *(int *)(iVar1 + 0x10151a50) * -0x10000 ^ 0x80000000)
	                                         - dVar7)
	    / ((double)CONCAT44(0x43300000, uVar5 ^ 0x80000000) - dVar7));
	*(int *)(iVar1 + 0x10151ab8) = (int)(((double)CONCAT44(
	                                          0x43300000, *(int *)(iVar1 + 0x10151ab0) + *(int *)(iVar1 + 0x10151a54) * -0x10000 ^ 0x80000000)
	                                         - dVar7)
	    / ((double)CONCAT44(0x43300000, uVar5 ^ 0x80000000) - dVar7));
	return;
}

void M2MStartHit(int mid, int i, int dam)

{
	byte bVar1;
	int iVar2;
	byte **ppbVar3;
	int iVar4;

	iVar2 = 0x100f8fd0;
	if (199 < (uint)mid) {
		iVar2 = 0x100f8fd0;
		app_fatal("Invalid monster %d getting hit by monster", mid);
	}
	iVar4 = mid * 0xe8;
	ppbVar3 = (byte **)(iVar4 + 0x10151b10);
	if (*(int *)(iVar4 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar2 + -0x5d00), mid, (ulonglong) * (uint *)(iVar4 + 0x10151b0c));
	}
	if (-1 < i) {
		*(byte *)(i * 0xe8 + 0x10151af3) = *(byte *)(i * 0xe8 + 0x10151af3) | (byte)(1 << (longlong)i);
	}
	delta_monster_hp(mid, *(int *)(iVar4 + 0x10151ac8), **(BYTE **)(iVar2 + -0x77e4));
	NetSendCmdParam2(0, '%', (WORD)mid, (WORD)dam);
	PlayEffect(mid, 1);
	if (((0x1c < **ppbVar3) && (**ppbVar3 < 0x21)) || ((int)*(char *)(iVar4 + 0x10151af4) + 3 <= dam >> 6)) {
		if (-1 < i) {
			*(uint *)(iVar4 + 0x10151a78) = *(int *)(i * 0xe8 + 0x10151a78) + 4U & 7;
		}
		bVar1 = **ppbVar3;
		if (bVar1 == 0x27) {
			M_Teleport(mid);
		} else {
			if ((0xf < bVar1) && (bVar1 < 0x14)) {
				*(undefined *)(iVar4 + 0x10151a38) = 1;
			}
		}
		if (*(int *)(iVar4 + 0x10151a34) != 0xf) {
			if (**ppbVar3 != 0x6d) {
				NewMonsterAnim(mid, (AnimStruct *)(*ppbVar3 + 0xe8), *(int *)(iVar4 + 0x10151a78));
				*(int *)(iVar4 + 0x10151a34) = 5;
			}
			*(undefined4 *)(iVar4 + 0x10151a68) = 0;
			*(undefined4 *)(iVar4 + 0x10151a6c) = 0;
			*(undefined4 *)(iVar4 + 0x10151a50) = *(undefined4 *)(iVar4 + 0x10151a60);
			*(undefined4 *)(iVar4 + 0x10151a54) = *(undefined4 *)(iVar4 + 0x10151a64);
			*(undefined4 *)(iVar4 + 0x10151a58) = *(undefined4 *)(iVar4 + 0x10151a50);
			*(undefined4 *)(iVar4 + 0x10151a5c) = *(undefined4 *)(iVar4 + 0x10151a54);
			*(undefined4 *)(iVar4 + 0x10151a60) = *(undefined4 *)(iVar4 + 0x10151a50);
			*(undefined4 *)(iVar4 + 0x10151a64) = *(undefined4 *)(iVar4 + 0x10151a54);
			M_CheckEFlag(mid);
			M_ClearSquares(mid);
			*(short *)(**(int **)(iVar2 + -0x767c) + *(int *)(iVar4 + 0x10151a50) * 0xe0 + *(int *)(iVar4 + 0x10151a54) * 2) = (WORD)mid + 1;
		}
	}
	return;
}

void MonstStartKill(int i, int pnum, BOOL sendmsg)

{
	int iVar1;
	BOOL BVar2;
	int md;
	int iVar3;
	int midam;
	int spllvl;

	iVar1 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar1 = 0x100f8fd0;
		app_fatal("MonstStartKill: Invalid monster %d", i);
	}
	iVar3 = i * 0xe8;
	if (*(int *)(iVar3 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar1 + -0x5d08), i, (ulonglong) * (uint *)(iVar3 + 0x10151b0c));
	}
	if (-1 < pnum) {
		*(byte *)(iVar3 + 0x10151af3) = *(byte *)(iVar3 + 0x10151af3) | (byte)(1 << (longlong)pnum);
	}
	if (((uint)pnum < 4) && (4 < (uint)i)) {
		AddPlrMonstExper(
		    (int)*(char *)(iVar3 + 0x10151af4), (uint) * (ushort *)(iVar3 + 0x10151af6), *(char *)(iVar3 + 0x10151af3));
	}
	md = (uint) * *(byte **)(iVar3 + 0x10151b10) * 4;
	*(int *)(*(int *)(iVar1 + -0x714c) + md) = *(int *)(*(int *)(iVar1 + -0x714c) + md) + 1;
	*(undefined4 *)(iVar3 + 0x10151ac8) = 0;
	SetRndSeed(*(int *)(iVar3 + 0x10151ae4));
	BVar2 = QuestStatus(2);
	if ((BVar2 == 0) || (*(int *)(iVar3 + 0x10151b0c) != *(int *)(*(int *)(iVar1 + -0x708c) + 4))) {
		if (3 < i) {
			SpawnItem(i, *(int *)(iVar3 + 0x10151a50), *(int *)(iVar3 + 0x10151a54), sendmsg);
		}
	} else {
		CreateTypeItem(*(int *)(iVar3 + 0x10151a50) + 1, *(int *)(iVar3 + 0x10151a54) + 1, 1, 4, 0, 1, 0);
	}
	if (**(char **)(iVar3 + 0x10151b10) == 'n') {
		M_DiabloDeath(i, 1);
	} else {
		PlayEffect(i, 2);
	}
	if (pnum < 0) {
		md = *(int *)(iVar3 + 0x10151a78);
	} else {
		md = M_GetDir(i);
	}
	*(int *)(iVar3 + 0x10151a78) = md;
	NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar3 + 0x10151b10) + 0x134), md);
	*(undefined4 *)(iVar3 + 0x10151a34) = 6;
	*(undefined4 *)(iVar3 + 0x10151a68) = 0;
	*(undefined4 *)(iVar3 + 0x10151a6c) = 0;
	*(undefined4 *)(iVar3 + 0x10151aa4) = 0;
	*(undefined4 *)(iVar3 + 0x10151a50) = *(undefined4 *)(iVar3 + 0x10151a60);
	*(undefined4 *)(iVar3 + 0x10151a54) = *(undefined4 *)(iVar3 + 0x10151a64);
	*(undefined4 *)(iVar3 + 0x10151a58) = *(undefined4 *)(iVar3 + 0x10151a50);
	*(undefined4 *)(iVar3 + 0x10151a5c) = *(undefined4 *)(iVar3 + 0x10151a54);
	*(undefined4 *)(iVar3 + 0x10151a60) = *(undefined4 *)(iVar3 + 0x10151a50);
	*(undefined4 *)(iVar3 + 0x10151a64) = *(undefined4 *)(iVar3 + 0x10151a54);
	M_CheckEFlag(i);
	M_ClearSquares(i);
	*(short *)(**(int **)(iVar1 + -0x767c) + *(int *)(iVar3 + 0x10151a50) * 0xe0 + *(int *)(iVar3 + 0x10151a54) * 2) = (short)i + 1;
	CheckQuestKill(i, sendmsg);
	M_FallenFear(*(int *)(iVar3 + 0x10151a50), *(int *)(iVar3 + 0x10151a54));
	if ((0x2d < **(byte **)(iVar3 + 0x10151b10)) && (**(byte **)(iVar3 + 0x10151b10) < 0x32)) {
		AddMissile(*(int *)(iVar3 + 0x10151a50), *(int *)(iVar3 + 0x10151a54), 0, 0, 0, 0x3b, '\x01', i, midam, spllvl);
	}
	return;
}

void M2MStartKill(int i, int mid)

{
	int *piVar1;
	int *piVar2;
	int iVar3;
	ulonglong uVar4;
	uint md;
	byte **ppbVar5;
	int iVar6;
	int midam;
	int spllvl;

	uVar4 = SEXT48(i);
	iVar3 = 0x100f8fd0;
	if (199 < (uVar4 & 0xffffffff)) {
		iVar3 = 0x100f8fd0;
		app_fatal("M2MStartKill: Invalid monster (attacker) %d", uVar4);
	}
	if (199 < (uint)mid) {
		app_fatal(*(char **)(iVar3 + -0x5d10), mid);
	}
	if (*(int *)(i * 0xe8 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar3 + -0x5d14), mid, (ulonglong) * (uint *)(mid * 0xe8 + 0x10151b0c));
	}
	iVar6 = mid * 0xe8;
	piVar1 = (int *)(iVar6 + 0x10151a50);
	piVar2 = (int *)(iVar6 + 0x10151a54);
	delta_kill_monster(mid, (BYTE)*piVar1, (BYTE)*piVar2, **(BYTE **)(iVar3 + -0x77e4));
	NetSendCmdLocParam1(0, '$', (BYTE)*piVar1, (BYTE)*piVar2, (WORD)mid);
	*(byte *)(iVar6 + 0x10151af3) = *(byte *)(iVar6 + 0x10151af3) | (byte)(1 << uVar4);
	if ((uVar4 & 0xffffffff) < 4) {
		AddPlrMonstExper(
		    (int)*(char *)(iVar6 + 0x10151af4), (uint) * (ushort *)(iVar6 + 0x10151af6), *(byte *)(iVar6 + 0x10151af3));
	}
	ppbVar5 = (byte **)(iVar6 + 0x10151b10);
	*(int *)(*(int *)(iVar3 + -0x714c) + (uint) * *ppbVar5 * 4) = *(int *)(*(int *)(iVar3 + -0x714c) + (uint) * *ppbVar5 * 4) + 1;
	*(undefined4 *)(iVar6 + 0x10151ac8) = 0;
	SetRndSeed(*(int *)(iVar6 + 0x10151ae4));
	if (3 < (uint)mid) {
		SpawnItem(mid, *piVar1, *piVar2, 1);
	}
	if (**ppbVar5 == 0x6e) {
		M_DiabloDeath(mid, 1);
	} else {
		PlayEffect(i, 2);
	}
	PlayEffect(mid, 2);
	md = *(int *)(i * 0xe8 + 0x10151a78) + 4U & 7;
	if (**ppbVar5 == 0x6d) {
		md = 0;
	}
	*(uint *)(iVar6 + 0x10151a78) = md;
	NewMonsterAnim(mid, (AnimStruct *)(*ppbVar5 + 0x134), md);
	*(undefined4 *)(iVar6 + 0x10151a34) = 6;
	*(undefined4 *)(iVar6 + 0x10151a68) = 0;
	*(undefined4 *)(iVar6 + 0x10151a6c) = 0;
	*piVar1 = *(int *)(iVar6 + 0x10151a60);
	*piVar2 = *(int *)(iVar6 + 0x10151a64);
	*(int *)(iVar6 + 0x10151a58) = *piVar1;
	*(int *)(iVar6 + 0x10151a5c) = *piVar2;
	*(int *)(iVar6 + 0x10151a60) = *piVar1;
	*(int *)(iVar6 + 0x10151a64) = *piVar2;
	M_CheckEFlag(mid);
	M_ClearSquares(mid);
	*(short *)(**(int **)(iVar3 + -0x767c) + *piVar1 * 0xe0 + *piVar2 * 2) = (WORD)mid + 1;
	CheckQuestKill(mid, 1);
	M_FallenFear(*piVar1, *piVar2);
	if ((0x2d < **ppbVar5) && (**ppbVar5 < 0x32)) {
		AddMissile(*piVar1, *piVar2, 0, 0, 0, 0x3b, '\x01', mid, midam, spllvl);
	}
	return;
}

void M_StartKill(int i, int pnum)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	int iVar3;

	iVar3 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar3 = 0x100f8fd0;
		app_fatal("M_StartKill: Invalid monster %d", i);
	}
	if (**(int **)(iVar3 + -0x77ac) == pnum) {
		puVar1 = (undefined4 *)(i * 0xe8 + 0x10151a50);
		puVar2 = (undefined4 *)(i * 0xe8 + 0x10151a54);
		delta_kill_monster(i, (BYTE)*puVar1, (BYTE)*puVar2, currlevel);
		if (i == pnum) {
			NetSendCmdLocParam1(0, 'W', (BYTE)*puVar1, (BYTE)*puVar2, (ushort)currlevel);
		} else {
			NetSendCmdLocParam1(0, '$', (BYTE)*puVar1, (BYTE)*puVar2, (WORD)i);
		}
	}
	MonstStartKill(i, pnum, 1);
	return;
}

void M_SyncStartKill(int i, int x, int y, int pnum)

{
	int iVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar2 = 0x100f8fd0;
		app_fatal("M_SyncStartKill: Invalid monster %d", i);
	}
	iVar1 = i * 0xe8;
	if ((*(int *)(iVar1 + 0x10151ac8) != 0) && (*(int *)(iVar1 + 0x10151a34) != 6)) {
		if (*(short *)(**(int **)(iVar2 + -0x767c) + x * 0xe0 + y * 2) == 0) {
			M_ClearSquares(i);
			*(int *)(iVar1 + 0x10151a50) = x;
			*(int *)(iVar1 + 0x10151a54) = y;
			*(int *)(iVar1 + 0x10151a60) = x;
			*(int *)(iVar1 + 0x10151a64) = y;
		}
		if (*(int *)(iVar1 + 0x10151a34) == 0xf) {
			MonstStartKill(i, pnum, 0);
			*(int *)(iVar1 + 0x10151a34) = 0xf;
		} else {
			MonstStartKill(i, pnum, 0);
		}
	}
	return;
}

void M_StartFadein(int i, int md, BOOL backwards)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar1 = 0x100f8fd0;
		app_fatal("M_StartFadein: Invalid monster %d", i);
	}
	iVar2 = i * 0xe8;
	if (*(int *)(iVar2 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar1 + -0x5d24), i, (ulonglong) * (uint *)(iVar2 + 0x10151b0c));
	}
	NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar2 + 0x10151b10) + 0x180), md);
	*(undefined4 *)(iVar2 + 0x10151a34) = 8;
	*(undefined4 *)(iVar2 + 0x10151a68) = 0;
	*(undefined4 *)(iVar2 + 0x10151a6c) = 0;
	*(undefined4 *)(iVar2 + 0x10151a58) = *(undefined4 *)(iVar2 + 0x10151a50);
	*(undefined4 *)(iVar2 + 0x10151a5c) = *(undefined4 *)(iVar2 + 0x10151a54);
	*(undefined4 *)(iVar2 + 0x10151a60) = *(undefined4 *)(iVar2 + 0x10151a50);
	*(undefined4 *)(iVar2 + 0x10151a64) = *(undefined4 *)(iVar2 + 0x10151a54);
	M_CheckEFlag(i);
	*(int *)(iVar2 + 0x10151a78) = md;
	*(uint *)(iVar2 + 0x10151ad0) = *(uint *)(iVar2 + 0x10151ad0) & 0xfffffffe;
	if (backwards != 0) {
		*(uint *)(iVar2 + 0x10151ad0) = *(uint *)(iVar2 + 0x10151ad0) | 2;
		*(undefined4 *)(iVar2 + 0x10151a98) = *(undefined4 *)(iVar2 + 0x10151a94);
	}
	return;
}

void M_StartFadeout(int i, int md, BOOL backwards)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar1 = 0x100f8fd0;
		app_fatal("M_StartFadeout: Invalid monster %d", i);
	}
	iVar2 = i * 0xe8;
	if (*(int *)(iVar2 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar1 + -0x5d2c), i, (ulonglong) * (uint *)(iVar2 + 0x10151b0c));
	}
	NewMonsterAnim(i, (AnimStruct *)(*(int *)(iVar2 + 0x10151b10) + 0x180), md);
	*(undefined4 *)(iVar2 + 0x10151a34) = 9;
	*(undefined4 *)(iVar2 + 0x10151a68) = 0;
	*(undefined4 *)(iVar2 + 0x10151a6c) = 0;
	*(undefined4 *)(iVar2 + 0x10151a58) = *(undefined4 *)(iVar2 + 0x10151a50);
	*(undefined4 *)(iVar2 + 0x10151a5c) = *(undefined4 *)(iVar2 + 0x10151a54);
	*(undefined4 *)(iVar2 + 0x10151a60) = *(undefined4 *)(iVar2 + 0x10151a50);
	*(undefined4 *)(iVar2 + 0x10151a64) = *(undefined4 *)(iVar2 + 0x10151a54);
	M_CheckEFlag(i);
	*(int *)(iVar2 + 0x10151a78) = md;
	if (backwards != 0) {
		*(uint *)(iVar2 + 0x10151ad0) = *(uint *)(iVar2 + 0x10151ad0) | 2;
		*(undefined4 *)(iVar2 + 0x10151a98) = *(undefined4 *)(iVar2 + 0x10151a94);
	}
	return;
}

void M_StartHeal(int i)

{
	undefined4 uVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar2 = 0x100f8fd0;
		app_fatal("M_StartHeal: Invalid monster %d", i);
	}
	iVar3 = i * 0xe8;
	if (*(int *)(iVar3 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar2 + -0x5d34), i, (ulonglong) * (uint *)(iVar3 + 0x10151b0c));
	}
	iVar2 = *(int *)(iVar3 + 0x10151b10) + *(int *)(iVar3 + 0x10151a78) * 8;
	uVar1 = *(undefined4 *)(iVar2 + 0x188);
	*(undefined4 *)(iVar3 + 0x10151a84) = *(undefined4 *)(iVar2 + 0x184);
	*(undefined4 *)(iVar3 + 0x10151a88) = uVar1;
	*(undefined4 *)(iVar3 + 0x10151a98) = *(undefined4 *)(*(int *)(iVar3 + 0x10151b10) + 0x1c4);
	*(uint *)(iVar3 + 0x10151ad0) = *(uint *)(iVar3 + 0x10151ad0) | 2;
	*(undefined4 *)(iVar3 + 0x10151a34) = 0x10;
	iVar2 = random('a', 5);
	*(int *)(iVar3 + 0x10151aa4) = *(int *)(iVar3 + 0x10151ac4) / ((iVar2 + 4) * 0x10);
	return;
}

// WARNING: Removing unreachable block (ram,0x1006d274)

void M_ChangeLightOffset(int monst)

{
	int iVar1;
	int iVar2;
	int iVar3;

	if (199 < (uint)monst) {
		app_fatal("M_ChangeLightOffset: Invalid monster %d", monst);
	}
	monst = monst * 0xe8;
	iVar1 = *(int *)(monst + 0x10151a6c) * 2;
	iVar3 = iVar1 - *(int *)(monst + 0x10151a68);
	if (iVar3 < 0) {
		iVar3 = -iVar3;
		iVar2 = -1;
	} else {
		iVar2 = 1;
	}
	ChangeLightOff(
	    (uint) * (byte *)(monst + 0x10151b0b), *(int *)(monst + 0x10151a68) + iVar1 >> 3, (iVar3 >> 3) * iVar2);
	return;
}

BOOL M_DoStand(int i)

{
	char *pcVar1;
	undefined4 uVar2;
	int iVar3;
	int iVar4;

	iVar3 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar3 = 0x100f8fd0;
		app_fatal("M_DoStand: Invalid monster %d", i);
	}
	iVar4 = i * 0xe8;
	if (*(int *)(iVar4 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar3 + -0x5d40), i, (ulonglong) * (uint *)(iVar4 + 0x10151b0c));
	}
	pcVar1 = *(char **)(iVar4 + 0x10151b10);
	if (*pcVar1 == 'm') {
		uVar2 = *(undefined4 *)(pcVar1 + *(int *)(iVar4 + 0x10151a78) * 8 + 0x58);
		*(undefined4 *)(iVar4 + 0x10151a84) = *(undefined4 *)(pcVar1 + *(int *)(iVar4 + 0x10151a78) * 8 + 0x54);
		*(undefined4 *)(iVar4 + 0x10151a88) = uVar2;
	} else {
		uVar2 = *(undefined4 *)(pcVar1 + *(int *)(iVar4 + 0x10151a78) * 8 + 0xc);
		*(undefined4 *)(iVar4 + 0x10151a84) = *(undefined4 *)(pcVar1 + *(int *)(iVar4 + 0x10151a78) * 8 + 8);
		*(undefined4 *)(iVar4 + 0x10151a88) = uVar2;
	}
	if (*(int *)(iVar4 + 0x10151a98) == *(int *)(iVar4 + 0x10151a94)) {
		M_Enemy(i);
	}
	*(int *)(iVar4 + 0x10151aa8) = *(int *)(iVar4 + 0x10151aa8) + 1;
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL M_DoWalk(int i)

{
	int iVar1;
	BOOL BVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar1 = 0x100f8fd0;
		app_fatal("M_DoWalk: Invalid monster %d", i);
	}
	iVar3 = i * 0xe8;
	if (*(int *)(iVar3 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar1 + -0x5d48), i, (ulonglong) * (uint *)(iVar3 + 0x10151b0c));
	}
	iVar1 = *(int *)(iVar3 + 0x10151ac0);
	if (iVar1 == *(int *)(*(int *)(iVar3 + 0x10151b10) + 0x94)) {
		*(undefined2 *)(_DAT_1012f1b4 + *(int *)(iVar3 + 0x10151a50) * 0xe0 + *(int *)(iVar3 + 0x10151a54) * 2) = 0;
		*(int *)(iVar3 + 0x10151a50) = *(int *)(iVar3 + 0x10151a50) + *(int *)(iVar3 + 0x10151aa4);
		*(int *)(iVar3 + 0x10151a54) = *(int *)(iVar3 + 0x10151a54) + *(int *)(iVar3 + 0x10151aa8);
		*(short *)(_DAT_1012f1b4 + *(int *)(iVar3 + 0x10151a50) * 0xe0 + *(int *)(iVar3 + 0x10151a54) * 2) = (short)i + 1;
		if (*(char *)(iVar3 + 0x10151af0) != '\0') {
			ChangeLightXY(
			    (uint) * (byte *)(iVar3 + 0x10151b0b), *(int *)(iVar3 + 0x10151a50), *(int *)(iVar3 + 0x10151a54));
		}
		M_StartStand(i, *(int *)(iVar3 + 0x10151a78));
		BVar2 = 1;
	} else {
		if (*(int *)(iVar3 + 0x10151a90) == 0) {
			*(int *)(iVar3 + 0x10151ac0) = iVar1 + 1;
			*(int *)(iVar3 + 0x10151ab8) = *(int *)(iVar3 + 0x10151ab8) + *(int *)(iVar3 + 0x10151a70);
			*(int *)(iVar3 + 0x10151abc) = *(int *)(iVar3 + 0x10151abc) + *(int *)(iVar3 + 0x10151a74);
			*(int *)(iVar3 + 0x10151a68) = *(int *)(iVar3 + 0x10151ab8) >> 4;
			*(int *)(iVar3 + 0x10151a6c) = *(int *)(iVar3 + 0x10151abc) >> 4;
		}
		BVar2 = 0;
	}
	if (*(char *)(iVar3 + 0x10151af0) != '\0') {
		M_ChangeLightOffset(i);
	}
	return BVar2;
}

BOOL M_DoWalk2(int i)

{
	int iVar1;
	int iVar2;
	BOOL BVar3;
	int iVar4;

	iVar2 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar2 = 0x100f8fd0;
		app_fatal("M_DoWalk2: Invalid monster %d", i);
	}
	iVar4 = i * 0xe8;
	if (*(int *)(iVar4 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar2 + -0x5d50), i, (ulonglong) * (uint *)(iVar4 + 0x10151b0c));
	}
	iVar1 = *(int *)(iVar4 + 0x10151ac0);
	if (iVar1 == *(int *)(*(int *)(iVar4 + 0x10151b10) + 0x94)) {
		*(undefined2 *)(**(int **)(iVar2 + -0x767c) + *(int *)(iVar4 + 0x10151aa4) * 0xe0 + *(int *)(iVar4 + 0x10151aa8) * 2) = 0;
		if (*(char *)(iVar4 + 0x10151af0) != '\0') {
			ChangeLightXY(
			    (uint) * (byte *)(iVar4 + 0x10151b0b), *(int *)(iVar4 + 0x10151a50), *(int *)(iVar4 + 0x10151a54));
		}
		M_StartStand(i, *(int *)(iVar4 + 0x10151a78));
		BVar3 = 1;
	} else {
		if (*(int *)(iVar4 + 0x10151a90) == 0) {
			*(int *)(iVar4 + 0x10151ac0) = iVar1 + 1;
			*(int *)(iVar4 + 0x10151ab8) = *(int *)(iVar4 + 0x10151ab8) + *(int *)(iVar4 + 0x10151a70);
			*(int *)(iVar4 + 0x10151abc) = *(int *)(iVar4 + 0x10151abc) + *(int *)(iVar4 + 0x10151a74);
			*(int *)(iVar4 + 0x10151a68) = *(int *)(iVar4 + 0x10151ab8) >> 4;
			*(int *)(iVar4 + 0x10151a6c) = *(int *)(iVar4 + 0x10151abc) >> 4;
		}
		BVar3 = 0;
	}
	if (*(char *)(iVar4 + 0x10151af0) != '\0') {
		M_ChangeLightOffset(i);
	}
	return BVar3;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL M_DoWalk3(int i)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	BOOL BVar4;
	int iVar5;

	iVar3 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar3 = 0x100f8fd0;
		app_fatal("M_DoWalk3: Invalid monster %d", i);
	}
	iVar5 = i * 0xe8;
	if (*(int *)(iVar5 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar3 + -0x5d58), i, (ulonglong) * (uint *)(iVar5 + 0x10151b0c));
	}
	iVar2 = *(int *)(iVar5 + 0x10151ac0);
	if (iVar2 == *(int *)(*(int *)(iVar5 + 0x10151b10) + 0x94)) {
		piVar1 = *(int **)(iVar3 + -0x779c);
		*(undefined2 *)(_DAT_1012f1b4 + *(int *)(iVar5 + 0x10151a50) * 0xe0 + *(int *)(iVar5 + 0x10151a54) * 2) = 0;
		*(undefined4 *)(iVar5 + 0x10151a50) = *(undefined4 *)(iVar5 + 0x10151aa4);
		*(undefined4 *)(iVar5 + 0x10151a54) = *(undefined4 *)(iVar5 + 0x10151aa8);
		iVar3 = *(int *)(iVar5 + 0x10151ab0) * 0x70 + *(int *)(iVar5 + 0x10151ab4);
		*(byte *)(*piVar1 + iVar3) = *(byte *)(*piVar1 + iVar3) & 0xef;
		*(short *)(_DAT_1012f1b4 + *(int *)(iVar5 + 0x10151a50) * 0xe0 + *(int *)(iVar5 + 0x10151a54) * 2) = (short)i + 1;
		if (*(char *)(iVar5 + 0x10151af0) != '\0') {
			ChangeLightXY(
			    (uint) * (byte *)(iVar5 + 0x10151b0b), *(int *)(iVar5 + 0x10151a50), *(int *)(iVar5 + 0x10151a54));
		}
		M_StartStand(i, *(int *)(iVar5 + 0x10151a78));
		BVar4 = 1;
	} else {
		if (*(int *)(iVar5 + 0x10151a90) == 0) {
			*(int *)(iVar5 + 0x10151ac0) = iVar2 + 1;
			*(int *)(iVar5 + 0x10151ab8) = *(int *)(iVar5 + 0x10151ab8) + *(int *)(iVar5 + 0x10151a70);
			*(int *)(iVar5 + 0x10151abc) = *(int *)(iVar5 + 0x10151abc) + *(int *)(iVar5 + 0x10151a74);
			*(int *)(iVar5 + 0x10151a68) = *(int *)(iVar5 + 0x10151ab8) >> 4;
			*(int *)(iVar5 + 0x10151a6c) = *(int *)(iVar5 + 0x10151abc) >> 4;
		}
		BVar4 = 0;
	}
	if (*(char *)(iVar5 + 0x10151af0) != '\0') {
		M_ChangeLightOffset(i);
	}
	return BVar4;
}

void M_TryM2MHit(int i, int mid, int hper, int mind, int maxd)

{
	int *piVar1;
	int *piVar2;
	int dam;
	BOOL BVar3;
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
	BOOL aBStack56[5];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	dam = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (199 < (uint)mid) {
		dam = 0x100f8fd0;
		app_fatal("M_TryM2MHit: Invalid monster %d", mid);
	}
	iVar4 = mid * 0xe8;
	if (*(char **)(iVar4 + 0x10151b10) == (char *)0x0) {
		app_fatal(*(char **)(dam + -0x5d60), mid, (ulonglong) * (uint *)(iVar4 + 0x10151b0c));
	}
	piVar1 = (int *)(iVar4 + 0x10151ac8);
	if ((*piVar1 >> 6 != 0) && ((**(char **)(iVar4 + 0x10151b10) != ' ' || (*(char *)(iVar4 + 0x10151a38) != '\x02')))) {
		dam = random('\x04', 100);
		piVar2 = (int *)(iVar4 + 0x10151a34);
		if (*piVar2 == 0xf) {
			dam = 0;
		}
		BVar3 = CheckMonsterHit(mid, aBStack56);
		if ((BVar3 == 0) && (dam < hper)) {
			iVar4 = random('\x05', (maxd - mind) + 1);
			dam = (mind + iVar4) * 0x40;
			*piVar1 = *piVar1 + (mind + iVar4) * -0x40;
			if (*piVar1 >> 6 == 0) {
				if (*piVar2 == 0xf) {
					M2MStartKill(i, mid);
					*piVar2 = 0xf;
				} else {
					M2MStartKill(i, mid);
				}
			} else {
				if (*piVar2 == 0xf) {
					M2MStartHit(mid, i, dam);
					*piVar2 = 0xf;
				} else {
					M2MStartHit(mid, i, dam);
				}
			}
		}
	}
	return;
}

void M_TryH2HHit(int i, int pnum, int Hit, int MinDam, int MaxDam)

{
	int *piVar1;
	int *piVar2;
	char cVar3;
	uint uVar4;
	uint *puVar6;
	char *pcVar7;
	longlong lVar5;
	int iVar8;
	int dam;
	int iVar10;
	int iVar11;
	int dir;
	ulonglong uVar9;
	BOOL BVar12;
	int *piVar13;
	int *piVar14;
	int *piVar15;
	int y;
	int iVar16;

	dir = 0x100f8fd0;
	if (199 < (uint)i) {
		dir = 0x100f8fd0;
		app_fatal("M_TryH2HHit: Invalid monster %d", i);
	}
	y = i * 0xe8;
	if (*(int *)(y + 0x10151b10) == 0) {
		app_fatal(*(char **)(dir + -0x5d68), i, (ulonglong) * (uint *)(y + 0x10151b0c));
	}
	if ((*(uint *)(y + 0x10151ad0) & 0x10) == 0) {
		iVar16 = pnum * 0x55ec;
		piVar1 = (int *)((int)plr + iVar16 + 0x194);
		if (*piVar1 >> 6 != 0) {
			if ((*(char *)((int)plr + iVar16 + 0x139) == '\0') && ((*(byte *)((int)plr + iVar16 + 0x11c) & 1) == 0)) {
				piVar14 = (int *)((int)plr + iVar16 + 0x38);
				dam = abs(*(int *)(y + 0x10151a50) - *(int *)((int)plr + iVar16 + 0x38));
				piVar15 = (int *)((int)plr + iVar16 + 0x3c);
				iVar10 = abs(*(int *)(y + 0x10151a54) - *(int *)((int)plr + iVar16 + 0x3c));
				if ((dam < 2) && (iVar10 < 2)) {
					iVar10 = random('b', 100);
					puVar6 = (uint *)((int)plr + iVar16 + 0x170);
					pcVar7 = (char *)((int)plr + iVar16 + 0x1b4);
					uVar4 = *puVar6;
					uVar4 = (int)uVar4 / 5 + ((int)uVar4 >> 0x1f);
					dam = ((Hit + 0x1e) - (*(int *)((int)plr + iVar16 + 0x554c) + *(int *)((int)plr + iVar16 + 0x5558) + uVar4 + (uVar4 >> 0x1f))) + ((int)*(char *)(y + 0x10151af4) - (int)*pcVar7) * 2;
					if (dam < 0xf) {
						dam = 0xf;
					}
					cVar3 = **(char **)(dir + -0x77e4);
					if ((cVar3 == '\x0e') && (dam < 0x14)) {
						dam = 0x14;
					}
					if ((cVar3 == '\x0f') && (dam < 0x19)) {
						dam = 0x19;
					}
					if ((cVar3 == '\x10') && (dam < 0x1e)) {
						dam = 0x1e;
					}
					iVar11 = ((PlayerStruct *)((int)plr + iVar16))->_pmode;
					if (((iVar11 == 0) || (iVar11 == 4)) && (*(char *)((int)plr + iVar16 + 0x138) != '\0')) {
						iVar11 = random('b', 100);
					} else {
						iVar11 = 100;
					}
					lVar5 = ((ulonglong) * (uint *)((int)plr + iVar16 + 0x188) + (ulonglong)*puVar6) - (ulonglong)(uint)(((int)*(char *)(y + 0x10151af4) - (int)*pcVar7) * 2);
					iVar8 = (int)lVar5;
					if (lVar5 < 0) {
						iVar8 = 0;
					}
					if (100 < iVar8) {
						iVar8 = 100;
					}
					if (iVar10 < dam) {
						if (iVar11 < iVar8) {
							dir = GetDirection(*piVar14, *piVar15, *(int *)(y + 0x10151a50), *(int *)(y + 0x10151a54));
							StartPlrBlock(pnum, dir);
						} else {
							if ((**(char **)(y + 0x10151b10) == '\x03') && (pnum == **(int **)(dir + -0x77ac))) {
								dam = -1;
								piVar13 = *(int **)(dir + -0x7660);
								uVar9 = (ulonglong) * *(uint **)(dir + -0x7668);
								iVar10 = -1;
								if (0 < (int)**(uint **)(dir + -0x7668)) {
									do {
										iVar11 = *piVar13 * 0xb4;
										dam = iVar10;
										if ((*(int *)(&DAT_10149b74 + iVar11) == 0xd) && (dam = iVar10, pnum == *(int *)(iVar11 + 0x10149bec))) {
											dam = *piVar13;
										}
										piVar13 = piVar13 + 1;
										uVar9 = uVar9 - 1;
										iVar10 = dam;
									} while (uVar9 != 0);
								}
								piVar13 = (int *)((int)plr + iVar16 + 0x198);
								if ((0x40 < *piVar13) && (piVar2 = (int *)((int)plr + iVar16 + 400), 0x40 < *piVar2)) {
									*piVar13 = *piVar13 + -0x40;
									if ((*piVar13 < *piVar1) && (*piVar1 = *piVar13, -1 < dam)) {
										*(int *)(dam * 0xb4 + 0x10149c08) = *piVar1;
									}
									*piVar2 = *piVar2 + -0x40;
									piVar13 = (int *)((int)plr + iVar16 + 0x18c);
									if ((*piVar2 < *piVar13) && (*piVar13 = *piVar2, -1 < dam)) {
										*(int *)(dam * 0xb4 + 0x10149c0c) = *piVar13;
									}
								}
							}
							dam = random('c', ((MaxDam - MinDam) + 1) * 0x40);
							dam = MinDam * 0x40 + dam + *(int *)((int)plr + iVar16 + 0x556c) * 0x40;
							if (dam < 0x40) {
								dam = 0x40;
							}
							if (pnum == **(int **)(dir + -0x77ac)) {
								*piVar1 = *piVar1 - dam;
								*(int *)((int)plr + iVar16 + 0x18c) = *(int *)((int)plr + iVar16 + 0x18c) - dam;
							}
							if ((*(uint *)((int)plr + iVar16 + 0x5568) & 0x4000000) != 0) {
								iVar10 = random('c', 3);
								*(int *)(y + 0x10151ac8) = *(int *)(y + 0x10151ac8) + (iVar10 + 1) * -0x40;
								if (*(int *)(y + 0x10151ac8) >> 6 == 0) {
									M_StartKill(i, pnum);
								} else {
									M_StartHit(i, pnum, (iVar10 + 1) * 0x40);
								}
							}
							if ((((*(uint *)(y + 0x10151ad0) & 0x1000) == 0) && (**(char **)(y + 0x10151b10) == '2')) && (**(char **)(dir + -0x77f0) != '\x01')) {
								*(int *)(y + 0x10151ac8) = *(int *)(y + 0x10151ac8) + dam;
							}
							iVar10 = *(int *)((int)plr + iVar16 + 0x198);
							if (iVar10 < *piVar1) {
								*piVar1 = iVar10;
								*(undefined4 *)((int)plr + iVar16 + 0x18c) = *(undefined4 *)((int)plr + iVar16 + 400);
							}
							if (*piVar1 >> 6 == 0) {
								SyncPlrKill(pnum, 0);
							} else {
								StartPlrHit(pnum, dam, 0);
								if ((*(uint *)(y + 0x10151ad0) & 0x80) != 0) {
									if (((PlayerStruct *)((int)plr + iVar16))->_pmode != 7) {
										StartPlrHit(pnum, 0, 1);
									}
									y = *(int *)(y + 0x10151a78) * 4;
									dam = *piVar14 + *(int *)(*(int *)(dir + -0x71ec) + y);
									y = *piVar15 + *(int *)(*(int *)(dir + -0x71f0) + y);
									BVar12 = PosOkPlayer(pnum, dam, y);
									if (BVar12 != 0) {
										*piVar14 = dam;
										*piVar15 = y;
										FixPlayerLocation(pnum, *(int *)((int)plr + iVar16 + 0x70));
										FixPlrWalkTags(pnum);
										*(char *)(**(int **)(dir + -0x7680) + dam * 0x70 + y) = (char)pnum + '\x01';
										SetPlayerOld(pnum);
									}
								}
							}
						}
					}
				}
			}
		}
	} else {
		M_TryM2MHit(i, pnum, Hit, MinDam, MaxDam);
	}
	return;
}

BOOL M_DoAttack(int i)

{
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar2 = 0x100f8fd0;
		app_fatal("M_DoAttack: Invalid monster %d", i);
	}
	iVar3 = i * 0xe8;
	if (*(int *)(iVar3 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar2 + -0x5d70), i, (ulonglong) * (uint *)(iVar3 + 0x10151b0c));
	}
	if (*(int *)(iVar3 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar2 + -0x5d74), i, (ulonglong) * (uint *)(iVar3 + 0x10151b0c));
	}
	if ((*(uint *)(iVar3 + 0x10151a98) == (uint) * (byte *)(*(int *)(iVar3 + 0x10151b14) + 0x6a)) && (M_TryH2HHit(i, *(int *)(iVar3 + 0x10151a7c), (uint) * (byte *)(iVar3 + 0x10151af8), (uint) * (byte *)(iVar3 + 0x10151af9), (uint) * (byte *)(iVar3 + 0x10151afa)), *(char *)(iVar3 + 0x10151acc) != '\x18')) {
		PlayEffect(i, 0);
	}
	if (((0x3b < **(byte **)(iVar3 + 0x10151b10)) && (**(byte **)(iVar3 + 0x10151b10) < 0x40)) && (*(int *)(iVar3 + 0x10151a98) == 9)) {
		M_TryH2HHit(i, *(int *)(iVar3 + 0x10151a7c), (uint) * (byte *)(iVar3 + 0x10151af8) + 10,
		    (uint) * (byte *)(iVar3 + 0x10151af9) - 2, (uint) * (byte *)(iVar3 + 0x10151afa) - 2);
		PlayEffect(i, 0);
	}
	if (((0x4b < **(byte **)(iVar3 + 0x10151b10)) && (**(byte **)(iVar3 + 0x10151b10) < 0x50)) && (*(int *)(iVar3 + 0x10151a98) == 0xd)) {
		M_TryH2HHit(i, *(int *)(iVar3 + 0x10151a7c), (uint) * (byte *)(iVar3 + 0x10151af8) - 0x14,
		    (uint) * (byte *)(iVar3 + 0x10151af9) + 4, (uint) * (byte *)(iVar3 + 0x10151afa) + 4);
		PlayEffect(i, 0);
	}
	if ((*(char *)(iVar3 + 0x10151acc) == '\x18') && (*(int *)(iVar3 + 0x10151a98) == 1)) {
		PlayEffect(i, 0);
	}
	bVar1 = *(int *)(iVar3 + 0x10151a98) == *(int *)(iVar3 + 0x10151a94);
	if (bVar1) {
		M_StartStand(i, *(int *)(iVar3 + 0x10151a78));
	}
	return (BOOL)(uint)bVar1;
}

BOOL M_DoRAttack(int i)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int midam;
	int spllvl;

	iVar2 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar2 = 0x100f8fd0;
		app_fatal("M_DoRAttack: Invalid monster %d", i);
	}
	iVar4 = i * 0xe8;
	if (*(int *)(iVar4 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar2 + -0x5d7c), i, (ulonglong) * (uint *)(iVar4 + 0x10151b0c));
	}
	if (*(int *)(iVar4 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar2 + -0x5d80), i, (ulonglong) * (uint *)(iVar4 + 0x10151b0c));
	}
	if (*(uint *)(iVar4 + 0x10151a98) == (uint) * (byte *)(*(int *)(iVar4 + 0x10151b14) + 0x6a)) {
		if (*(int *)(iVar4 + 0x10151aa4) != -1) {
			if (*(int *)(iVar4 + 0x10151aa4) == 0x34) {
				iVar2 = 3;
			} else {
				iVar2 = 1;
			}
			iVar3 = 0;
			while (iVar3 < iVar2) {
				AddMissile(*(int *)(iVar4 + 0x10151a50), *(int *)(iVar4 + 0x10151a54),
				    (uint) * (byte *)(iVar4 + 0x10151a80), (uint) * (byte *)(iVar4 + 0x10151a81),
				    *(int *)(iVar4 + 0x10151a78), *(int *)(iVar4 + 0x10151aa4), '\x01', i, midam, spllvl);
				iVar3 = iVar3 + 1;
			}
		}
		PlayEffect(i, 0);
	}
	bVar1 = *(uint *)(iVar4 + 0x10151a98) == *(uint *)(iVar4 + 0x10151a94);
	if (bVar1) {
		M_StartStand(i, *(int *)(iVar4 + 0x10151a78));
	}
	return (BOOL)(uint)bVar1;
}

int M_DoRSpAttack(int i)

{
	uint *puVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int midam;
	int spllvl;

	iVar3 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar3 = 0x100f8fd0;
		app_fatal("M_DoRSpAttack: Invalid monster %d", i);
	}
	iVar4 = i * 0xe8;
	if (*(int *)(iVar4 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar3 + -0x5d88), i, (ulonglong) * (uint *)(iVar4 + 0x10151b0c));
	}
	if (*(int *)(iVar4 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar3 + -0x5d8c), i, (ulonglong) * (uint *)(iVar4 + 0x10151b0c));
	}
	puVar1 = (uint *)(iVar4 + 0x10151a98);
	if ((*puVar1 == (uint) * (byte *)(*(int *)(iVar4 + 0x10151b14) + 0x6e)) && (*(int *)(iVar4 + 0x10151a90) == 0)) {
		AddMissile(*(int *)(iVar4 + 0x10151a50), *(int *)(iVar4 + 0x10151a54), (uint) * (byte *)(iVar4 + 0x10151a80),
		    (uint) * (byte *)(iVar4 + 0x10151a81), *(int *)(iVar4 + 0x10151a78), *(int *)(iVar4 + 0x10151aa4), '\x01', i,
		    midam, spllvl);
		PlayEffect(i, 3);
	}
	if ((*(char *)(iVar4 + 0x10151acc) == '\x1a') && (*puVar1 == 3)) {
		iVar3 = *(int *)(iVar4 + 0x10151aa8);
		*(int *)(iVar4 + 0x10151aa8) = iVar3 + 1;
		if (iVar3 == 0) {
			*(uint *)(iVar4 + 0x10151ad0) = *(uint *)(iVar4 + 0x10151ad0) | 4;
		} else {
			if (*(int *)(iVar4 + 0x10151aa8) == 0xf) {
				*(uint *)(iVar4 + 0x10151ad0) = *(uint *)(iVar4 + 0x10151ad0) & 0xfffffffb;
			}
		}
	}
	bVar2 = *puVar1 == *(uint *)(iVar4 + 0x10151a94);
	if (bVar2) {
		M_StartStand(i, *(int *)(iVar4 + 0x10151a78));
	}
	return (int)(uint)bVar2;
}

BOOL M_DoSAttack(int i)

{
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar2 = 0x100f8fd0;
		app_fatal("M_DoSAttack: Invalid monster %d", i);
	}
	iVar3 = i * 0xe8;
	if (*(int *)(iVar3 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar2 + -0x5d94), i, (ulonglong) * (uint *)(iVar3 + 0x10151b0c));
	}
	if (*(int *)(iVar3 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar2 + -0x5d98), i, (ulonglong) * (uint *)(iVar3 + 0x10151b0c));
	}
	if (*(uint *)(iVar3 + 0x10151a98) == (uint) * (byte *)(*(int *)(iVar3 + 0x10151b14) + 0x6e)) {
		M_TryH2HHit(i, *(int *)(iVar3 + 0x10151a7c), (uint) * (byte *)(iVar3 + 0x10151afb),
		    (uint) * (byte *)(iVar3 + 0x10151afc), (uint) * (byte *)(iVar3 + 0x10151afd));
	}
	bVar1 = *(uint *)(iVar3 + 0x10151a98) == *(uint *)(iVar3 + 0x10151a94);
	if (bVar1) {
		M_StartStand(i, *(int *)(iVar3 + 0x10151a78));
	}
	return (BOOL)(uint)bVar1;
}

BOOL M_DoFadein(int i)

{
	uint *puVar1;
	BOOL BVar2;
	int iVar3;

	if (199 < (uint)i) {
		app_fatal("M_DoFadein: Invalid monster %d", i);
	}
	iVar3 = i * 0xe8;
	puVar1 = (uint *)(iVar3 + 0x10151ad0);
	if ((((*puVar1 & 2) == 0) || (*(int *)(iVar3 + 0x10151a98) != 1)) && (((*puVar1 & 2) != 0 || (*(int *)(iVar3 + 0x10151a98) != *(int *)(iVar3 + 0x10151a94))))) {
		BVar2 = 0;
	} else {
		M_StartStand(i, *(int *)(iVar3 + 0x10151a78));
		BVar2 = 1;
		*puVar1 = *puVar1 & 0xfffffffd;
	}
	return BVar2;
}

BOOL M_DoFadeout(int i)

{
	uint *puVar1;
	BOOL BVar2;
	int iVar3;

	if (199 < (uint)i) {
		app_fatal("M_DoFadeout: Invalid monster %d", i);
	}
	iVar3 = i * 0xe8;
	puVar1 = (uint *)(iVar3 + 0x10151ad0);
	if ((((*puVar1 & 2) == 0) || (*(int *)(iVar3 + 0x10151a98) != 1)) && (((*puVar1 & 2) != 0 || (*(int *)(iVar3 + 0x10151a98) != *(int *)(iVar3 + 0x10151a94))))) {
		BVar2 = 0;
	} else {
		if ((**(byte **)(iVar3 + 0x10151b10) < 0x48) || (0x4b < **(byte **)(iVar3 + 0x10151b10))) {
			*puVar1 = *puVar1 & 0xfffffffd;
			*puVar1 = *puVar1 | 1;
		} else {
			*puVar1 = *puVar1 & 0xfffffffd;
		}
		M_StartStand(i, *(int *)(iVar3 + 0x10151a78));
		BVar2 = 1;
	}
	return BVar2;
}

int M_DoHeal(int i)

{
	uint uVar1;
	int iVar2;

	if (199 < (uint)i) {
		app_fatal("M_DoHeal: Invalid monster %d", i);
	}
	i = i * 0xe8;
	uVar1 = *(uint *)(i + 0x10151ad0);
	if ((uVar1 & 8) == 0) {
		if (*(int *)(i + 0x10151a98) == 1) {
			*(uint *)(i + 0x10151ad0) = uVar1 & 0xfffffffd;
			*(uint *)(i + 0x10151ad0) = *(uint *)(i + 0x10151ad0) | 4;
			iVar2 = *(int *)(i + 0x10151ac8) + *(int *)(i + 0x10151aa4);
			if (iVar2 < *(int *)(i + 0x10151ac4)) {
				*(int *)(i + 0x10151ac8) = iVar2;
			} else {
				*(int *)(i + 0x10151ac8) = *(int *)(i + 0x10151ac4);
				*(uint *)(i + 0x10151ad0) = *(uint *)(i + 0x10151ad0) & 0xfffffffb;
				*(undefined4 *)(i + 0x10151a34) = 7;
			}
		}
	} else {
		*(uint *)(i + 0x10151ad0) = uVar1 & 0xfffffffb;
		*(undefined4 *)(i + 0x10151a34) = 7;
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int M_DoTalk(int i)

{
	uint *puVar1;
	int iVar2;
	undefined uVar3;
	int iVar4;
	BOOL BVar5;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar6;
	int *piVar7;
	int iVar8;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	iVar4 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar4 = 0x100f8fd0;
		app_fatal("M_DoTalk: Invalid monster %d", i);
	}
	iVar8 = i * 0xe8;
	M_StartStand(i, *(int *)(iVar8 + 0x10151a78));
	piVar7 = (int *)(iVar8 + 0x10151b04);
	iVar2 = *(int *)(iVar4 + -0x710c);
	*(undefined *)(iVar8 + 0x10151a38) = 7;
	BVar5 = effect_is_playing(*(int *)(iVar2 + *(int *)(iVar8 + 0x10151b04) * 0x10 + 0xc));
	if (BVar5 == 0) {
		InitQTextMsg(*piVar7);
		piVar6 = (int *)(iVar8 + 0x10151b0c);
		if (*(int *)(iVar8 + 0x10151b0c) == iRam1010babc) {
			if (*piVar7 == 0x90) {
				quests[2]._qactive = '\x02';
			}
			quests[2]._qlog = 1;
			if ((*piVar7 == 0x91) && (puVar1 = (uint *)(iVar8 + 0x10151ad0), (*puVar1 & 0x40) == 0)) {
				SpawnItem(i, *(int *)(iVar8 + 0x10151a50) + 1, *(int *)(iVar8 + 0x10151a54) + 1, 1);
				*puVar1 = *puVar1 | 0x40;
			}
		}
		if (((*piVar6 == iRam1010bafc) && (*piVar7 == 0x94)) && (puVar1 = (uint *)(iVar8 + 0x10151ad0), (*puVar1 & 0x40) == 0)) {
			quests[3]._qactive = '\x02';
			quests[3]._qlog = 1;
			in_r7 = 0x18;
			in_r8 = 1;
			in_r9 = 0;
			CreateTypeItem(*(int *)(iVar8 + 0x10151a50) + 1, *(int *)(iVar8 + 0x10151a54) + 1, 0, 0, 0x18, 1, 0);
			*puVar1 = *puVar1 | 0x40;
		}
		if (*piVar6 == iRam1010bb1c) {
			if ((*piVar7 == 0x14) && (puVar1 = (uint *)(iVar8 + 0x10151ad0), (*puVar1 & 0x40) == 0)) {
				ObjChangeMap(_DAT_1013b36c, _DAT_1013b368, _DAT_1013b36c + (_DAT_1013b364 >> 1) + 2,
				    _DAT_1013b368 + (_DAT_1013b360 >> 1) + -2);
				uVar3 = DAT_1012f2d8;
				DAT_1012f2d8 = 9;
				DRLG_MRectTrans(_DAT_1013b36c, _DAT_1013b368, _DAT_1013b36c + (_DAT_1013b364 >> 1) + 4,
				    _DAT_1013b368 + (_DAT_1013b360 >> 1));
				quests[7]._qvar1 = '\x02';
				if (quests[7]._qactive == '\x01') {
					quests[7]._qactive = '\x02';
				}
				DAT_1012f2d8 = uVar3;
				*puVar1 = *puVar1 | 0x40;
			}
			if (quests[7]._qvar1 < 2) {
				wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar4 + -0x5dac), *piVar7,
				    *(undefined4 *)(iVar8 + 0x10151ad0), in_r7, in_r8, in_r9, in_r10, in_stack_ffffff88,
				    in_stack_ffffff8f, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8,
				    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
				app_fatal(&DAT_101282d4);
			}
		}
		if (*piVar6 == iRam1010bb9c) {
			if (*piVar7 == 0x51) {
				quests[4]._qactive = '\x02';
				quests[4]._qlog = 1;
			}
			if ((*piVar7 == 0x53) && (puVar1 = (uint *)(iVar8 + 0x10151ad0), (*puVar1 & 0x40) == 0)) {
				SpawnUnique(6, *(int *)(iVar8 + 0x10151a50) + 1, *(int *)(iVar8 + 0x10151a54) + 1);
				*puVar1 = *puVar1 | 0x40;
			}
		}
		if (*piVar6 == iRam1010bbbc) {
			quests[11]._qvar1 = '\x02';
		}
		if ((*piVar6 == iRam1010bb3c) && (**(char **)(iVar4 + -0x77f0) != '\x01')) {
			quests[15]._qvar1 = '\x06';
			*(undefined *)(iVar8 + 0x10151a38) = 1;
			*(undefined *)(iVar8 + 0x10151ad4) = 0xff;
			*piVar7 = 0;
		}
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void M_Teleport(int i)

{
	byte bVar1;
	byte bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	int iVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int x;
	longlong lVar12;
	longlong unaff_r28;
	int y;
	longlong unaff_r29;

	iVar4 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar4 = 0x100f8fd0;
		app_fatal("M_Teleport: Invalid monster %d", i);
	}
	iVar4 = *(int *)(iVar4 + -0x7754) + i * 0xe8;
	bVar3 = false;
	if (*(int *)(iVar4 + 4) != 0xf) {
		bVar1 = *(byte *)(iVar4 + 0x50);
		bVar2 = *(byte *)(iVar4 + 0x51);
		iVar5 = random('d', 2);
		lVar9 = (ulonglong)(uint)(iVar5 << 1) - 1;
		iVar5 = random('d', 2);
		lVar8 = (ulonglong)(uint)(iVar5 << 1) - 1;
		lVar10 = -lVar9;
		iVar5 = -1;
		while ((iVar5 < 2 && (!bVar3))) {
			lVar12 = -lVar8;
			lVar11 = (ulonglong)bVar1 + lVar10;
			iVar7 = -1;
			while ((iVar7 < 1 && (!bVar3))) {
				if (((iVar5 != 0) || (iVar7 != 0)) && ((((unaff_r28 = (ulonglong)bVar2 + lVar12, unaff_r29 = lVar11, -1 < unaff_r28 && (y = (int)unaff_r28, unaff_r29 = lVar11, y < 0x70)) && (x = (int)lVar11, unaff_r29 = lVar11, -1 < x)) && ((((unaff_r29 = lVar11, x < 0x70 && (unaff_r29 = lVar11, x != *(int *)(iVar4 + 0x20))) && (unaff_r29 = lVar11, y != *(int *)(iVar4 + 0x24))) && (BVar6 = PosOkMonst(i, x, y), unaff_r29 = lVar11, BVar6 != 0)))))) {
					bVar3 = true;
					unaff_r29 = lVar11;
				}
				lVar12 = lVar12 + lVar8;
				iVar7 = iVar7 + 1;
			}
			lVar10 = lVar10 + lVar9;
			iVar5 = iVar5 + 1;
		}
		if (bVar3) {
			M_ClearSquares(i);
			*(undefined2 *)(_DAT_1012f1b4 + *(int *)(iVar4 + 0x20) * 0xe0 + *(int *)(iVar4 + 0x24) * 2) = 0;
			*(short *)(_DAT_1012f1b4 + (int)unaff_r29 * 0xe0 + (int)unaff_r28 * 2) = (short)i + 1;
			*(int *)(iVar4 + 0x30) = (int)unaff_r29;
			*(int *)(iVar4 + 0x34) = (int)unaff_r28;
			iVar5 = M_GetDir(i);
			*(int *)(iVar4 + 0x48) = iVar5;
			M_CheckEFlag(i);
		}
	}
	return;
}

BOOL M_DoGotHit(int i)

{
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar2 = 0x100f8fd0;
		app_fatal("M_DoGotHit: Invalid monster %d", i);
	}
	iVar3 = i * 0xe8;
	if (*(int *)(iVar3 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar2 + -0x5db8), i, (ulonglong) * (uint *)(iVar3 + 0x10151b0c));
	}
	bVar1 = *(int *)(iVar3 + 0x10151a98) == *(int *)(iVar3 + 0x10151a94);
	if (bVar1) {
		M_StartStand(i, *(int *)(iVar3 + 0x10151a78));
	}
	return (BOOL)(uint)bVar1;
}

void M_UpdateLeader(int i)

{
	ulonglong uVar1;
	int iVar2;
	int *piVar3;

	iVar2 = 0x100f8fd0;
	if (199 < ((longlong)i & 0xffffffffU)) {
		iVar2 = 0x100f8fd0;
		app_fatal("M_UpdateLeader: Invalid monster %d", (longlong)i);
	}
	piVar3 = *(int **)(iVar2 + -0x7628);
	uVar1 = (ulonglong) * *(uint **)(iVar2 + -0x762c);
	if (0 < (int)**(uint **)(iVar2 + -0x762c)) {
		do {
			iVar2 = *piVar3 * 0xe8;
			if ((*(char *)(iVar2 + 0x10151b09) == '\x01') && (i == (uint) * (byte *)(iVar2 + 0x10151b08))) {
				*(undefined *)(iVar2 + 0x10151b09) = 0;
			}
			piVar3 = piVar3 + 1;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	if (*(char *)(i * 0xe8 + 0x10151b09) == '\x01') {
		iVar2 = (uint) * (byte *)(i * 0xe8 + 0x10151b08) * 0xe8;
		*(char *)(iVar2 + 0x10151b0a) = *(char *)(iVar2 + 0x10151b0a) + -1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DoEnding(void)

{
	char cVar1;
	undefined uVar2;
	int iVar3;
	int volume;
	int local_3c;

	iVar3 = 0x100f8fd0;
	if (1 < (byte)gbMaxPlayers) {
		SNetLeaveGame(0x40000004);
		iVar3 = local_3c;
	}
	music_stop();
	if (1 < (byte)gbMaxPlayers) {
		Sleep(1000);
		iVar3 = local_3c;
	}
	cVar1 = *(char *)(*(int *)(iVar3 + -0x77a8) + **(int **)(iVar3 + -0x77ac) * 0x55ec + 0x15c);
	if (cVar1 == '\0') {
		play_movie(*(char **)(iVar3 + -24000), 0);
	} else {
		if (cVar1 == '\x02') {
			play_movie(*(char **)(iVar3 + -0x5dc4), 0);
		} else {
			play_movie(*(char **)(iVar3 + -0x5dc8), 0);
		}
	}
	play_movie(*(char **)(iVar3 + -0x5dcc), 0);
	uVar2 = DAT_1010ef60;
	DAT_1010ef60 = 1;
	volume = sound_get_or_set_music_volume(1);
	sound_get_or_set_music_volume(0);
	music_start(2);
	_DAT_1015cf70 = 1;
	play_movie(*(char **)(iVar3 + -0x5dd0), 1);
	_DAT_1015cf70 = 0;
	music_stop();
	sound_get_or_set_music_volume(volume);
	DAT_1010ef60 = uVar2;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PrepDoEnding(void)

{
	uint *puVar1;
	uint uVar2;
	uint uVar3;

	DAT_1010ef61 = DAT_100f4248;
	cineflag = 1;
	_gbRunGame = 0;
	_DAT_10186eb4 = 0;
	uVar3 = _DAT_1012f31c + 1;
	puVar1 = (uint *)((int)plr + myplr * 0x55ec + 0x55a8);
	uVar2 = *puVar1;
	if (uVar3 < uVar2) {
		uVar3 = uVar2;
	}
	*puVar1 = uVar3;
	if (1 < (byte)gbMaxPlayers) {
		if (plr[0]._pHitPoints >> 6 == 0) {
			plr[0]._pHitPoints = 0x40;
		}
		if (plr[0]._pMana >> 6 == 0) {
			plr[0]._pMana = 0x40;
		}
	}
	if (1 < (byte)gbMaxPlayers) {
		if ((int)plr[1]._pLAnim[7] >> 6 == 0) {
			plr[1]._pLAnim[7] = (uchar *)0x40;
		}
		if ((int)plr[1]._pFAnim[4] >> 6 == 0) {
			plr[1]._pFAnim[4] = (uchar *)0x40;
		}
	}
	if (1 < (byte)gbMaxPlayers) {
		if (plr[2].InvBody[0]._iName._23_4_ >> 6 == 0) {
			plr[2].InvBody[0]._iName._23_4_ = 0x40;
		}
		if (plr[2].InvBody[0]._iName._43_4_ >> 6 == 0) {
			plr[2].InvBody[0]._iName._43_4_ = 0x40;
		}
	}
	if (1 < (byte)gbMaxPlayers) {
		if (plr[3].InvBody[1]._iSeed >> 6 == 0) {
			plr[3].InvBody[1]._iSeed = 0x40;
		}
		if (plr[3].InvBody[1]._iAnimFlag >> 6 == 0) {
			plr[0]._pmode = 0xb;
			plr[0]._pInvincible = true;
			plr[1]._284_4_ = 0xb;
			plr[1]._pWAnim[5]._1_1_ = 1;
			plr[2]._pNFrames = 0xb;
			plr[2]._pBFrames._1_1_ = 1;
			plr[3]._pBAnim[1] = &DAT_0000000b;
			plr[3].InvBody[0]._iPLLR._1_1_ = 1;
			plr[3].InvBody[1]._iAnimFlag = 0x40;
			return;
		}
		plr[0]._pmode = 0xb;
		plr[0]._pInvincible = true;
		plr[1]._284_4_ = 0xb;
		plr[1]._pWAnim[5]._1_1_ = 1;
		plr[2]._pNFrames = 0xb;
		plr[2]._pBFrames._1_1_ = 1;
		plr[3]._pBAnim[1] = &DAT_0000000b;
		plr[3].InvBody[0]._iPLLR._1_1_ = 1;
		return;
	}
	plr[0]._pmode = 0xb;
	plr[0]._pInvincible = true;
	plr[1]._284_4_ = 0xb;
	plr[1]._pWAnim[5]._1_1_ = 1;
	plr[2]._pNFrames = 0xb;
	plr[2]._pBFrames._1_1_ = 1;
	plr[3]._pBAnim[1] = &DAT_0000000b;
	plr[3].InvBody[0]._iPLLR._1_1_ = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL M_DoDeath(int i)

{
	char *pcVar1;
	longlong lVar2;
	int iVar3;
	int iVar4;

	iVar3 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar3 = 0x100f8fd0;
		app_fatal("M_DoDeath: Invalid monster %d", i);
	}
	iVar4 = i * 0xe8;
	if (*(char **)(iVar4 + 0x10151b10) == (char *)0x0) {
		app_fatal(*(char **)(iVar3 + -0x5dd8), i, (ulonglong) * (uint *)(iVar4 + 0x10151b0c));
	}
	*(int *)(iVar4 + 0x10151aa4) = *(int *)(iVar4 + 0x10151aa4) + 1;
	pcVar1 = *(char **)(iVar4 + 0x10151b10);
	if (*pcVar1 == 'n') {
		lVar2 = (ulonglong) * (uint *)(iVar4 + 0x10151a50) - (ulonglong)_DAT_1012f310;
		if (lVar2 < 0) {
			iVar3 = -1;
		} else {
			if ((int)lVar2 < 1) {
				iVar3 = 0;
			} else {
				iVar3 = 1;
			}
		}
		_DAT_1012f310 = _DAT_1012f310 + iVar3;
		lVar2 = (ulonglong) * (uint *)(iVar4 + 0x10151a54) - (ulonglong)_DAT_1012f30c;
		if (lVar2 < 0) {
			iVar3 = -1;
		} else {
			if ((int)lVar2 < 1) {
				iVar3 = 0;
			} else {
				iVar3 = 1;
			}
		}
		_DAT_1012f30c = _DAT_1012f30c + iVar3;
		if (*(int *)(iVar4 + 0x10151aa4) == 0x8c) {
			PrepDoEnding();
		}
	} else {
		if (*(int *)(iVar4 + 0x10151a98) == *(int *)(iVar4 + 0x10151a94)) {
			if (*(char *)(iVar4 + 0x10151af0) == '\0') {
				AddDead(*(int *)(iVar4 + 0x10151a50), *(int *)(iVar4 + 0x10151a54), pcVar1[0x1fd],
				    *(int *)(iVar4 + 0x10151a78));
			} else {
				AddDead(*(int *)(iVar4 + 0x10151a50), *(int *)(iVar4 + 0x10151a54), *(char *)(iVar4 + 0x10151af2),
				    *(int *)(iVar4 + 0x10151a78));
			}
			*(undefined2 *)(**(int **)(iVar3 + -0x767c) + *(int *)(iVar4 + 0x10151a50) * 0xe0 + *(int *)(iVar4 + 0x10151a54) * 2) = 0;
			*(undefined4 *)(iVar4 + 0x10151aa0) = 1;
			M_UpdateLeader(i);
		}
	}
	return 0;
}

BOOL M_DoSpStand(int i)

{
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar2 = 0x100f8fd0;
		app_fatal("M_DoSpStand: Invalid monster %d", i);
	}
	iVar3 = i * 0xe8;
	if (*(int *)(iVar3 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar2 + -0x5de0), i, (ulonglong) * (uint *)(iVar3 + 0x10151b0c));
	}
	if (*(uint *)(iVar3 + 0x10151a98) == (uint) * (byte *)(*(int *)(iVar3 + 0x10151b14) + 0x6e)) {
		PlayEffect(i, 3);
	}
	bVar1 = *(uint *)(iVar3 + 0x10151a98) == *(uint *)(iVar3 + 0x10151a94);
	if (bVar1) {
		M_StartStand(i, *(int *)(iVar3 + 0x10151a78));
	}
	return (BOOL)(uint)bVar1;
}

BOOL M_DoDelay(int i)

{
	undefined4 uVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar2 = 0x100f8fd0;
		app_fatal("M_DoDelay: Invalid monster %d", i);
	}
	iVar3 = i * 0xe8;
	if (*(int *)(iVar3 + 0x10151b10) == 0) {
		app_fatal(*(char **)(iVar2 + -0x5de8), i, (ulonglong) * (uint *)(iVar3 + 0x10151b0c));
	}
	iVar2 = M_GetDir(i);
	iVar2 = *(int *)(iVar3 + 0x10151b10) + iVar2 * 8;
	uVar1 = *(undefined4 *)(iVar2 + 0xc);
	*(undefined4 *)(iVar3 + 0x10151a84) = *(undefined4 *)(iVar2 + 8);
	*(undefined4 *)(iVar3 + 0x10151a88) = uVar1;
	if (*(char *)(iVar3 + 0x10151acc) == '\x1c') {
		if ((8 < *(int *)(iVar3 + 0x10151aa8)) || (*(int *)(iVar3 + 0x10151aa8) < 0)) {
			*(undefined4 *)(iVar3 + 0x10151aa8) = 8;
		}
	}
	iVar2 = *(int *)(iVar3 + 0x10151aa8);
	*(int *)(iVar3 + 0x10151aa8) = iVar2 + -1;
	if (iVar2 == 0) {
		uVar1 = *(undefined4 *)(iVar3 + 0x10151a98);
		M_StartStand(i, *(int *)(iVar3 + 0x10151a78));
		*(undefined4 *)(iVar3 + 0x10151a98) = uVar1;
	}
	return (BOOL)(uint)(iVar2 == 0);
}

BOOL M_DoStone(int i)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar1 = 0x100f8fd0;
		app_fatal("M_DoStone: Invalid monster %d", i);
	}
	i = i * 0xe8;
	if (*(int *)(i + 0x10151ac8) == 0) {
		*(undefined2 *)(**(int **)(iVar1 + -0x767c) + *(int *)(i + 0x10151a50) * 0xe0 + *(int *)(i + 0x10151a54) * 2) = 0;
		*(undefined4 *)(i + 0x10151aa0) = 1;
	}
	return 0;
}

void M_WalkDir(int i, int md)

{
	code *UNRECOVERED_JUMPTABLE;
	int iVar1;

	iVar1 = 0x100f8fd0;
	if (199 < ((longlong)i & 0xffffffffU)) {
		iVar1 = 0x100f8fd0;
		app_fatal("M_WalkDir: Invalid monster %d", (longlong)i);
	}
	if ((uint)md < 8) {
		UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + -0x5df8) + md * 4);
		// WARNING: Could not recover jumptable at 0x1006f4d4. Too many branches
		// WARNING: Treating indirect jump as call
		(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,
		    (ulonglong) * (uint *)(*(int *)(*(int *)(iVar1 + -0x7754) + i * 0xe8 + 0xe0) + 0x94) - 1);
		return;
	}
	return;
}

void GroupUnity(int i)

{
	int iVar1;
	ulonglong uVar2;
	int iVar3;
	BOOL BVar4;
	int iVar5;
	int *piVar6;
	uint unaff_r28;
	char *pcVar7;
	int iVar8;

	iVar3 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar3 = 0x100f8fd0;
		app_fatal("GroupUnity: Invalid monster %d", i);
	}
	iVar8 = i * 0xe8;
	pcVar7 = (char *)(iVar8 + 0x10151b09);
	if (*(char *)(iVar8 + 0x10151b09) != '\0') {
		unaff_r28 = (uint) * (byte *)(iVar8 + 0x10151b08);
		iVar1 = (uint) * (byte *)(iVar8 + 0x10151b08) * 0xe8;
		BVar4 = LineClearF(*(Clear **)(iVar3 + -0x70b4), *(int *)(iVar8 + 0x10151a50), *(int *)(iVar8 + 0x10151a54),
		    *(int *)(iVar1 + 0x10151a58), *(int *)(iVar1 + 0x10151a5c));
		if ((BVar4 == 0) && (*pcVar7 == '\x01')) {
			*(char *)(iVar1 + 0x10151b0a) = *(char *)(iVar1 + 0x10151b0a) + -1;
			*pcVar7 = '\x02';
		} else {
			if ((BVar4 != 0) && (((*pcVar7 == '\x02' && (iVar5 = abs(*(int *)(iVar8 + 0x10151a50) - *(int *)(iVar1 + 0x10151a58)), iVar5 < 4)) && (iVar5 = abs(*(int *)(iVar8 + 0x10151a54) - *(int *)(iVar1 + 0x10151a5c)), iVar5 < 4)))) {
				*(char *)(iVar1 + 0x10151b0a) = *(char *)(iVar1 + 0x10151b0a) + '\x01';
				*pcVar7 = '\x01';
			}
		}
	}
	if (*pcVar7 == '\x01') {
		iVar3 = unaff_r28 * 0xe8;
		if (*(byte *)(iVar3 + 0x10151ad4) < *(byte *)(iVar8 + 0x10151ad4)) {
			*(undefined4 *)(iVar3 + 0x10151adc) = *(undefined4 *)(iVar8 + 0x10151a50);
			*(undefined4 *)(iVar3 + 0x10151ae0) = *(undefined4 *)(iVar8 + 0x10151a54);
			*(byte *)(iVar3 + 0x10151ad4) = *(byte *)(iVar8 + 0x10151ad4) - 1;
		}
		if (*(char *)(iVar3 + 0x10151acc) == '\f') {
			if ((*(uint *)(iVar3 + 0x10151ad0) & 4) != 0) {
				*(uint *)(iVar3 + 0x10151ad0) = *(uint *)(iVar3 + 0x10151ad0) & 0xfffffffb;
				*(undefined4 *)(iVar3 + 0x10151a34) = 7;
			}
		}
	} else {
		if ((*(byte *)(iVar8 + 0x10151af0) != 0) && ((*(ushort *)(*(int *)(iVar3 + -0x708c) + (uint) * (byte *)(iVar8 + 0x10151af0) * 0x20 + -10) & 2) != 0)) {
			piVar6 = *(int **)(iVar3 + -0x7628);
			uVar2 = (ulonglong) * *(uint **)(iVar3 + -0x762c);
			if (0 < (int)**(uint **)(iVar3 + -0x762c)) {
				do {
					iVar3 = *piVar6 * 0xe8;
					if ((*(char *)(iVar3 + 0x10151b09) == '\x01') && (i == (uint) * (byte *)(iVar3 + 0x10151b08))) {
						if (*(byte *)(iVar3 + 0x10151ad4) < *(byte *)(iVar8 + 0x10151ad4)) {
							*(undefined4 *)(iVar3 + 0x10151adc) = *(undefined4 *)(iVar8 + 0x10151a50);
							*(undefined4 *)(iVar3 + 0x10151ae0) = *(undefined4 *)(iVar8 + 0x10151a54);
							*(char *)(iVar3 + 0x10151ad4) = *(char *)(iVar8 + 0x10151ad4) + -1;
						}
						if (*(char *)(iVar3 + 0x10151acc) == '\f') {
							if ((*(uint *)(iVar3 + 0x10151ad0) & 4) != 0) {
								*(uint *)(iVar3 + 0x10151ad0) = *(uint *)(iVar3 + 0x10151ad0) & 0xfffffffb;
								*(undefined4 *)(iVar3 + 0x10151a34) = 7;
							}
						}
					}
					piVar6 = piVar6 + 1;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
			}
		}
	}
	return;
}

BOOL M_CallWalk(int i, int md)

{
	bool bVar1;
	bool bVar2;
	BOOL BVar3;
	int mdir;
	int iVar4;

	BVar3 = DirOK(i, md);
	mdir = random('e', 2);
	if (mdir == 0) {
		bVar2 = true;
		bVar1 = true;
		mdir = md;
		if (BVar3 == 0) {
			mdir = *(int *)(&DAT_1010c850 + md * 4);
			BVar3 = DirOK(i, mdir);
			if (BVar3 == 0) {
				bVar1 = false;
			}
		}
		if (!bVar1) {
			mdir = *(int *)(&DAT_1010c830 + md * 4);
			BVar3 = DirOK(i, mdir);
			if (BVar3 == 0) {
				bVar2 = false;
			}
		}
	} else {
		bVar2 = true;
		bVar1 = true;
		mdir = md;
		if (BVar3 == 0) {
			mdir = *(int *)(&DAT_1010c830 + md * 4);
			BVar3 = DirOK(i, mdir);
			if (BVar3 == 0) {
				bVar1 = false;
			}
		}
		if (!bVar1) {
			mdir = *(int *)(&DAT_1010c850 + md * 4);
			BVar3 = DirOK(i, mdir);
			if (BVar3 == 0) {
				bVar2 = false;
			}
		}
	}
	iVar4 = random('f', 2);
	if (iVar4 == 0) {
		iVar4 = 1;
		bVar1 = true;
		if (!bVar2) {
			mdir = *(int *)(&DAT_1010c830 + *(int *)(&DAT_1010c830 + md * 4) * 4);
			BVar3 = DirOK(i, mdir);
			if (BVar3 == 0) {
				bVar1 = false;
			}
		}
		if (!bVar1) {
			mdir = *(int *)(&DAT_1010c850 + *(int *)(&DAT_1010c850 + md * 4) * 4);
			BVar3 = DirOK(i, mdir);
			if (BVar3 == 0) {
				iVar4 = 0;
			}
		}
	} else {
		iVar4 = 1;
		bVar1 = true;
		if (!bVar2) {
			mdir = *(int *)(&DAT_1010c850 + *(int *)(&DAT_1010c850 + md * 4) * 4);
			BVar3 = DirOK(i, mdir);
			if (BVar3 == 0) {
				bVar1 = false;
			}
		}
		if (!bVar1) {
			mdir = *(int *)(&DAT_1010c830 + *(int *)(&DAT_1010c830 + md * 4) * 4);
			BVar3 = DirOK(i, mdir);
			if (BVar3 == 0) {
				iVar4 = 0;
			}
		}
	}
	if (iVar4 != 0) {
		M_WalkDir(i, mdir);
	}
	return (BOOL)iVar4;
}

BOOL M_PathWalk(int i)

{
	PosOk *PosOk;
	int iVar1;
	int iVar2;
	char local_28[40];

	iVar1 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar1 = 0x100f8fd0;
		app_fatal("M_PathWalk: Invalid monster %d", i);
	}
	iVar2 = i * 0xe8;
	if ((*(uint *)(iVar2 + 0x10151ad0) & 0x200) == 0) {
		PosOk = *(PosOk **)(iVar1 + -0x70c4);
	} else {
		PosOk = *(PosOk **)(iVar1 + -0x70c0);
	}
	iVar2 = FindPath(PosOk, i, *(int *)(iVar2 + 0x10151a50), *(int *)(iVar2 + 0x10151a54),
	    (uint) * (byte *)(iVar2 + 0x10151a80), (uint) * (byte *)(iVar2 + 0x10151a81), local_28);
	if (iVar2 != 0) {
		M_CallWalk(i, (int)*(char *)(*(int *)(iVar1 + -0x5e04) + (int)local_28[0]));
	}
	return (BOOL)(uint)(iVar2 != 0);
}

BOOL M_CallWalk2(int i, int md)

{
	bool bVar1;
	BOOL BVar2;
	int mdir;
	int iVar3;

	BVar2 = DirOK(i, md);
	mdir = random('e', 2);
	if (mdir == 0) {
		iVar3 = 1;
		bVar1 = true;
		mdir = md;
		if (BVar2 == 0) {
			mdir = *(int *)(&DAT_1010c850 + md * 4);
			BVar2 = DirOK(i, mdir);
			if (BVar2 == 0) {
				bVar1 = false;
			}
		}
		if (!bVar1) {
			mdir = *(int *)(&DAT_1010c830 + md * 4);
			BVar2 = DirOK(i, mdir);
			if (BVar2 == 0) {
				iVar3 = 0;
			}
		}
	} else {
		iVar3 = 1;
		bVar1 = true;
		mdir = md;
		if (BVar2 == 0) {
			mdir = *(int *)(&DAT_1010c830 + md * 4);
			BVar2 = DirOK(i, mdir);
			if (BVar2 == 0) {
				bVar1 = false;
			}
		}
		if (!bVar1) {
			mdir = *(int *)(&DAT_1010c850 + md * 4);
			BVar2 = DirOK(i, mdir);
			if (BVar2 == 0) {
				iVar3 = 0;
			}
		}
	}
	if (iVar3 != 0) {
		M_WalkDir(i, mdir);
	}
	return (BOOL)iVar3;
}

BOOL M_DumbWalk(int i, int md)

{
	BOOL BVar1;

	BVar1 = DirOK(i, md);
	if (BVar1 != 0) {
		M_WalkDir(i, md);
	}
	return BVar1;
}

BOOL M_RoundWalk(int i, int md, int *dir)

{
	int mdir;
	int iVar1;
	BOOL BVar2;
	BOOL BVar3;
	undefined8 uVar4;
	int mdir_00;

	iVar1 = 0x100f8fd0;
	if (*dir == 0) {
		mdir = *(int *)(&DAT_1010c850 + *(int *)(&DAT_1010c850 + md * 4) * 4);
	} else {
		mdir = *(int *)(&DAT_1010c830 + *(int *)(&DAT_1010c830 + md * 4) * 4);
	}
	BVar2 = DirOK(i, mdir);
	mdir_00 = mdir;
	if (BVar2 == 0) {
		if (*dir == 0) {
			mdir_00 = *(int *)(&DAT_1010c830 + mdir * 4);
			BVar2 = 1;
			BVar3 = DirOK(i, mdir_00);
			if (BVar3 == 0) {
				mdir_00 = *(int *)(&DAT_1010c830 + *(int *)(&DAT_1010c830 + mdir * 4) * 4);
				BVar3 = DirOK(i, mdir_00);
				if (BVar3 == 0) {
					BVar2 = 0;
				}
			}
		} else {
			mdir_00 = *(int *)(&DAT_1010c850 + mdir * 4);
			BVar2 = 1;
			BVar3 = DirOK(i, mdir_00);
			if (BVar3 == 0) {
				mdir_00 = *(int *)(&DAT_1010c850 + *(int *)(&DAT_1010c850 + mdir * 4) * 4);
				BVar3 = DirOK(i, mdir_00);
				if (BVar3 == 0) {
					BVar2 = 0;
				}
			}
		}
	}
	if (BVar2 == 0) {
		iVar1 = *(int *)(iVar1 + -0x7104);
		uVar4 = countLeadingZeros(*dir);
		*dir = (uint)uVar4 >> 5 & 0xff;
		BVar2 = M_CallWalk(i, *(int *)(iVar1 + mdir * 4));
	} else {
		M_WalkDir(i, mdir_00);
	}
	return BVar2;
}

void MAI_Zombie(int i)

{
	undefined4 uVar1;
	int _X;
	int _X_00;
	int iVar2;
	int iVar3;
	int md;
	int iVar4;

	md = 0x100f8fd0;
	if (199 < (uint)i) {
		md = 0x100f8fd0;
		app_fatal("MAI_Zombie: Invalid monster %d", i);
	}
	iVar4 = *(int *)(md + -0x7754) + i * 0xe8;
	if (*(int *)(iVar4 + 4) == 0) {
		if ((*(byte *)(**(int **)(md + -0x779c) + *(int *)(iVar4 + 0x20) * 0x70 + *(int *)(iVar4 + 0x24)) & 2) != 0) {
			md = *(int *)(iVar4 + 0x48);
			_X = *(int *)(iVar4 + 0x20) - (uint) * (byte *)(iVar4 + 0x50);
			_X_00 = *(int *)(iVar4 + 0x24) - (uint) * (byte *)(iVar4 + 0x51);
			iVar2 = random('g', 100);
			iVar3 = abs(_X);
			if ((iVar3 < 2) && (iVar3 = abs(_X_00), iVar3 < 2)) {
				if (iVar2 < (int)((uint) * (byte *)(iVar4 + 0x9d) * 2 + 10)) {
					M_StartAttack(i);
				}
			} else {
				if (iVar2 < (int)((uint) * (byte *)(iVar4 + 0x9d) * 2 + 10)) {
					_X = abs(_X);
					if ((_X < (int)((uint) * (byte *)(iVar4 + 0x9d) * 2 + 4)) && (_X = abs(_X_00), _X < (int)((uint) * (byte *)(iVar4 + 0x9d) * 2 + 4))) {
						md = M_GetDir(i);
						M_CallWalk(i, md);
					} else {
						_X = random('h', 100);
						if (_X < (int)((uint) * (byte *)(iVar4 + 0x9d) * 2 + 0x14)) {
							md = random('h', 8);
						}
						M_DumbWalk(i, md);
					}
				}
			}
			if (*(int *)(iVar4 + 4) == 0) {
				md = *(int *)(iVar4 + 0xe0) + *(int *)(iVar4 + 0x48) * 8;
				uVar1 = *(undefined4 *)(md + 0xc);
				*(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(md + 8);
				*(undefined4 *)(iVar4 + 0x58) = uVar1;
			}
		}
	}
	return;
}

void MAI_SkelSd(int i)

{
	byte bVar1;
	byte bVar2;
	int y1;
	undefined4 uVar3;
	int iVar4;
	int md;
	int x1;

	iVar4 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar4 = 0x100f8fd0;
		app_fatal("MAI_SkelSd: Invalid monster %d", i);
	}
	iVar4 = *(int *)(iVar4 + -0x7754) + i * 0xe8;
	if ((*(int *)(iVar4 + 4) == 0) && (*(char *)(iVar4 + 0xa4) != '\0')) {
		x1 = *(int *)(iVar4 + 0x20);
		bVar1 = *(byte *)(iVar4 + 0x50);
		y1 = *(int *)(iVar4 + 0x24);
		bVar2 = *(byte *)(iVar4 + 0x51);
		md = GetDirection(x1, y1, *(int *)(iVar4 + 0xac), *(int *)(iVar4 + 0xb0));
		*(int *)(iVar4 + 0x48) = md;
		x1 = abs(x1 - (uint)bVar1);
		if ((x1 < 2) && (x1 = abs(y1 - (uint)bVar2), x1 < 2)) {
			if ((*(int *)(iVar4 + 0x74) == 0xd) || (x1 = random('i', 100), x1 < (int)((uint) * (byte *)(iVar4 + 0x9d) * 2 + 0x14))) {
				M_StartAttack(i);
			} else {
				x1 = random('i', 10);
				M_StartDelay(i, x1 + 10 + (uint) * (byte *)(iVar4 + 0x9d) * -2);
			}
		} else {
			if ((*(int *)(iVar4 + 0x74) == 0xd) || (x1 = random('j', 100), (int)((uint) * (byte *)(iVar4 + 0x9d) * -4 + 0x23) <= x1)) {
				M_CallWalk(i, md);
			} else {
				x1 = random('j', 10);
				M_StartDelay(i, x1 + 0xf + (uint) * (byte *)(iVar4 + 0x9d) * -2);
			}
		}
		if (*(int *)(iVar4 + 4) == 0) {
			x1 = *(int *)(iVar4 + 0xe0) + md * 8;
			uVar3 = *(undefined4 *)(x1 + 0xc);
			*(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(x1 + 8);
			*(undefined4 *)(iVar4 + 0x58) = uVar3;
		}
	}
	return;
}

BOOL MAI_Path(int i)

{
	int iVar1;
	BOOL BVar2;
	byte bVar3;
	int iVar4;

	iVar1 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar1 = 0x100f8fd0;
		app_fatal("MAI_Path: Invalid monster %d", i);
	}
	iVar4 = *(int *)(iVar1 + -0x7754) + i * 0xe8;
	if ((**(char **)(iVar4 + 0xe0) != 'm') && ((((*(char *)(iVar4 + 0xa4) == '\0' || (*(int *)(iVar4 + 4) != 0)) || ((*(char *)(iVar4 + 8) != '\x01' && (1 < (byte)(*(char *)(iVar4 + 8) - 4U))))) || ((*(int *)(iVar4 + 0x20) == 1 && (*(int *)(iVar4 + 0x24) == 0)))))) {
		return 0;
	}
	BVar2 = LineClearF1(*(Clear **)(iVar1 + -0x70c8), i, *(int *)(iVar4 + 0x20), *(int *)(iVar4 + 0x24),
	    (uint) * (byte *)(iVar4 + 0x50), (uint) * (byte *)(iVar4 + 0x51));
	if ((BVar2 == 0) || ((4 < *(byte *)(iVar4 + 0x1c) && (*(byte *)(iVar4 + 0x1c) < 8)))) {
		if ((*(uint *)(iVar4 + 0xa0) & 0x200) != 0) {
			MonstCheckDoors(i);
		}
		bVar3 = *(char *)(iVar4 + 0x1c) + 1;
		*(byte *)(iVar4 + 0x1c) = bVar3;
		if (bVar3 < 5) {
			return 0;
		}
		BVar2 = M_PathWalk(i);
		if (BVar2 != 0) {
			return 1;
		}
	}
	if (**(char **)(iVar4 + 0xe0) != 'm') {
		*(undefined *)(iVar4 + 0x1c) = 0;
	}
	return 0;
}

// WARNING: Removing unreachable block (ram,0x100705f8)

void MAI_Snake(int i)

{
	byte bVar1;
	byte bVar2;
	undefined4 uVar3;
	uint uVar4;
	int _X;
	int _X_00;
	int midir;
	int iVar6;
	int iVar7;
	BOOL BVar8;
	longlong lVar5;
	longlong lVar9;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int iVar10;
	int midam;
	int spllvl;
	undefined4 local_2c;
	undefined2 local_28;
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar7 = 0x100f8fd0;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (199 < (uint)i) {
		iVar7 = 0x100f8fd0;
		app_fatal("MAI_Snake: Invalid monster %d", i);
	}
	local_2c = **(undefined4 **)(iVar7 + -0x5e18);
	iVar10 = *(int *)(iVar7 + -0x7754) + i * 0xe8;
	local_28 = *(undefined2 *)(*(undefined4 **)(iVar7 + -0x5e18) + 1);
	uVar3 = *(undefined4 *)(iVar10 + 0x4c);
	if ((*(int *)(iVar10 + 4) == 0) && (*(char *)(iVar10 + 0xa4) != '\0')) {
		bVar1 = *(byte *)(iVar10 + 0x50);
		bVar2 = *(byte *)(iVar10 + 0x51);
		_X = *(int *)(iVar10 + 0x20) - (uint)bVar1;
		_X_00 = *(int *)(iVar10 + 0x24) - (uint)bVar2;
		midir = GetDirection(
		    *(int *)(iVar10 + 0x20), *(int *)(iVar10 + 0x24), *(int *)(iVar10 + 0xac), *(int *)(iVar10 + 0xb0));
		*(int *)(iVar10 + 0x48) = midir;
		iVar6 = abs(_X);
		if ((iVar6 < 2) && (iVar6 = abs(_X_00), iVar6 < 2)) {
			if (((*(int *)(iVar10 + 0x74) == 0xd) || (*(int *)(iVar10 + 0x74) == 0xe)) || (iVar7 = random('i', 100), iVar7 < (int)((uint) * (byte *)(iVar10 + 0x9d) + 0x14))) {
				M_StartAttack(i);
			} else {
				iVar7 = random('i', 10);
				M_StartDelay(i, (iVar7 + 10) - (uint) * (byte *)(iVar10 + 0x9d));
			}
		} else {
			_X = abs(_X);
			if ((((_X < 3) && (_X = abs(_X_00), _X < 3)) && (BVar8 = LineClearF1(*(Clear **)(iVar7 + -0x70c4), i, *(int *)(iVar10 + 0x20), *(int *)(iVar10 + 0x24), (uint)bVar1, (uint)bVar2), BVar8 != 0)) && (*(int *)(iVar10 + 0x74) != 0xe)) {
				_X = AddMissile(*(int *)(iVar10 + 0x20), *(int *)(iVar10 + 0x24), (uint)bVar1, (uint)bVar2, midir, 0x14,
				    (char)uVar3, i, midam, spllvl);
				if (_X != -1) {
					PlayEffect(i, 0);
					*(short *)(**(int **)(iVar7 + -0x767c) + *(int *)(iVar10 + 0x20) * 0xe0 + *(int *)(iVar10 + 0x24) * 2) = -((short)i + 1);
					*(undefined4 *)(iVar10 + 4) = 0xe;
				}
			} else {
				if ((*(int *)(iVar10 + 0x74) == 0xd) || (iVar7 = random('j', 100), (int)((uint) * (byte *)(iVar10 + 0x9d) * -2 + 0x23) <= iVar7)) {
					lVar9 = (longlong)midir + (longlong) * (char *)((int)&local_2c + *(int *)(iVar10 + 0xc));
					if (lVar9 < 0) {
						lVar9 = lVar9 + 8;
					} else {
						if (7 < (int)lVar9) {
							lVar9 = lVar9 + -8;
						}
					}
					iVar7 = *(int *)(iVar10 + 0xc) + 1;
					*(int *)(iVar10 + 0xc) = iVar7;
					if (5 < iVar7) {
						*(undefined4 *)(iVar10 + 0xc) = 0;
					}
					uVar4 = *(uint *)(iVar10 + 0x10);
					lVar5 = lVar9 - (ulonglong)uVar4;
					iVar7 = (int)lVar5;
					if (lVar5 < 0) {
						iVar7 = iVar7 + 8;
					} else {
						if (7 < iVar7) {
							iVar7 = iVar7 + -8;
						}
					}
					if (0 < iVar7) {
						if (iVar7 < 4) {
							iVar7 = uVar4 + 1;
							if (7 < iVar7) {
								iVar7 = uVar4 - 7;
							}
							*(int *)(iVar10 + 0x10) = iVar7;
						} else {
							if (iVar7 == 4) {
								*(undefined4 *)(iVar10 + 0x10) = (int)lVar9;
							} else {
								lVar9 = (ulonglong)uVar4 - 1;
								iVar7 = (int)lVar9;
								if (lVar9 < 0) {
									iVar7 = uVar4 + 7;
								} else {
									if (7 < iVar7) {
										iVar7 = uVar4 - 9;
									}
								}
								*(int *)(iVar10 + 0x10) = iVar7;
							}
						}
					}
					BVar8 = M_DumbWalk(i, *(int *)(iVar10 + 0x10));
					if (BVar8 == 0) {
						M_CallWalk2(i, *(int *)(iVar10 + 0x48));
					}
				} else {
					iVar7 = random('j', 10);
					M_StartDelay(i, (iVar7 + 0xf) - (uint) * (byte *)(iVar10 + 0x9d));
				}
			}
		}
		if (*(int *)(iVar10 + 4) == 0) {
			iVar7 = *(int *)(iVar10 + 0xe0) + *(int *)(iVar10 + 0x48) * 8;
			uVar3 = *(undefined4 *)(iVar7 + 0xc);
			*(undefined4 *)(iVar10 + 0x54) = *(undefined4 *)(iVar7 + 8);
			*(undefined4 *)(iVar10 + 0x58) = uVar3;
		}
	}
	return;
}

void MAI_Bat(int i)

{
	byte bVar1;
	byte bVar2;
	undefined4 uVar3;
	int _X;
	int _X_00;
	int md;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	int iVar7;
	int iVar8;
	int midam;
	int spllvl;

	iVar7 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar7 = 0x100f8fd0;
		app_fatal("MAI_Bat: Invalid monster %d", i);
	}
	iVar8 = *(int *)(iVar7 + -0x7754) + i * 0xe8;
	uVar3 = *(undefined4 *)(iVar8 + 0x4c);
	if ((*(int *)(iVar8 + 4) == 0) && (*(char *)(iVar8 + 0xa4) != '\0')) {
		_X = *(int *)(iVar8 + 0x20) - (uint) * (byte *)(iVar8 + 0x50);
		_X_00 = *(int *)(iVar8 + 0x24) - (uint) * (byte *)(iVar8 + 0x51);
		md = GetDirection(*(int *)(iVar8 + 0x20), *(int *)(iVar8 + 0x24), *(int *)(iVar8 + 0xac), *(int *)(iVar8 + 0xb0));
		*(int *)(iVar8 + 0x48) = md;
		iVar4 = random('k', 100);
		if (*(char *)(iVar8 + 8) == '\x02') {
			if (*(int *)(iVar8 + 0xc) == 0) {
				M_CallWalk(i, *(int *)(*(int *)(iVar7 + -0x7104) + md * 4));
				*(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + 1;
			} else {
				_X = random('l', 2);
				if (_X == 0) {
					M_CallWalk(i, *(int *)(*(int *)(iVar7 + -0x70bc) + md * 4));
				} else {
					M_CallWalk(i, *(int *)(*(int *)(iVar7 + -0x70b8) + md * 4));
				}
				*(undefined *)(iVar8 + 8) = 1;
			}
		} else {
			bVar1 = *(byte *)(iVar8 + 0x50);
			bVar2 = *(byte *)(iVar8 + 0x51);
			if ((**(char **)(iVar8 + 0xe0) == '(') && ((((iVar5 = abs(_X), 4 < iVar5 || (iVar5 = abs(_X_00), 4 < iVar5)) && (iVar4 < (int)((uint) * (byte *)(iVar8 + 0x9d) * 4 + 0x21))) && (BVar6 = LineClearF1(*(Clear **)(iVar7 + -0x70c4), i, *(int *)(iVar8 + 0x20), *(int *)(iVar8 + 0x24), (uint)bVar1, (uint)bVar2), BVar6 != 0)))) {
				_X = AddMissile(*(int *)(iVar8 + 0x20), *(int *)(iVar8 + 0x24), (uint)bVar1, (uint)bVar2, md, 0x14,
				    (char)uVar3, i, midam, spllvl);
				if (_X != -1) {
					*(short *)(**(int **)(iVar7 + -0x767c) + *(int *)(iVar8 + 0x20) * 0xe0 + *(int *)(iVar8 + 0x24) * 2) = -((short)i + 1);
					*(undefined4 *)(iVar8 + 4) = 0xe;
				}
			} else {
				iVar7 = abs(_X);
				if ((iVar7 < 2) && (iVar7 = abs(_X_00), iVar7 < 2)) {
					if (iVar4 < (int)((uint) * (byte *)(iVar8 + 0x9d) * 4 + 8)) {
						M_StartAttack(i);
						*(undefined *)(iVar8 + 8) = 2;
						*(undefined4 *)(iVar8 + 0xc) = 0;
						if (**(char **)(iVar8 + 0xe0) == ')') {
							bVar1 = *(byte *)(iVar8 + 0x50);
							random('m', 10);
							AddMissile((uint)bVar1, (uint) * (byte *)(iVar8 + 0x51), (uint)bVar1 + 1, 0, -1, 8, '\x01',
							    i, midam, spllvl);
						}
					}
				} else {
					if (((0x14 < *(int *)(iVar8 + 0x78)) && (iVar4 < (int)((uint) * (byte *)(iVar8 + 0x9d) + 0xd))) || (((*(int *)(iVar8 + 0x74) == 1 || (*(int *)(iVar8 + 0x74) - 2U < 2)) && ((*(int *)(iVar8 + 0x78) == 0 && (iVar4 < (int)((uint) * (byte *)(iVar8 + 0x9d) + 0x3f))))))) {
						M_CallWalk(i, md);
					}
				}
			}
			if (*(int *)(iVar8 + 4) == 0) {
				iVar7 = *(int *)(iVar8 + 0xe0) + md * 8;
				uVar3 = *(undefined4 *)(iVar7 + 0xc);
				*(undefined4 *)(iVar8 + 0x54) = *(undefined4 *)(iVar7 + 8);
				*(undefined4 *)(iVar8 + 0x58) = uVar3;
			}
		}
	}
	return;
}

void MAI_SkelBow(int i)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	undefined4 uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	BOOL BVar8;
	int iVar9;
	int iVar10;

	iVar9 = 0x100f8fd0;
	BVar8 = 0;
	if (199 < (uint)i) {
		iVar9 = 0x100f8fd0;
		app_fatal("MAI_SkelBow: Invalid monster %d", i);
	}
	iVar10 = *(int *)(iVar9 + -0x7754) + i * 0xe8;
	if ((*(int *)(iVar10 + 4) == 0) && (*(char *)(iVar10 + 0xa4) != '\0')) {
		bVar1 = *(byte *)(iVar10 + 0x50);
		iVar7 = *(int *)(iVar10 + 0x20);
		bVar2 = *(byte *)(iVar10 + 0x51);
		iVar3 = *(int *)(iVar10 + 0x24);
		iVar5 = M_GetDir(i);
		*(int *)(iVar10 + 0x48) = iVar5;
		iVar6 = random('n', 100);
		iVar7 = abs(iVar7 - (uint)bVar1);
		if (((iVar7 < 4) && (iVar7 = abs(iVar3 - (uint)bVar2), iVar7 < 4)) && (((0x14 < *(int *)(iVar10 + 0x78) && (iVar6 < (int)((uint) * (byte *)(iVar10 + 0x9d) * 2 + 0xd))) || (((*(int *)(iVar10 + 0x74) == 1 || (*(int *)(iVar10 + 0x74) - 2U < 2)) && ((*(int *)(iVar10 + 0x78) == 0 && (iVar6 < (int)((uint) * (byte *)(iVar10 + 0x9d) * 2 + 0x3f))))))))) {
			BVar8 = M_DumbWalk(i, *(int *)(*(int *)(iVar9 + -0x7104) + iVar5 * 4));
		}
		bVar1 = *(byte *)(iVar10 + 0x50);
		bVar2 = *(byte *)(iVar10 + 0x51);
		if (((BVar8 == 0) && (iVar9 = random('n', 100), iVar9 < (int)((uint) * (byte *)(iVar10 + 0x9d) * 2 + 3))) && (BVar8 = LineClear(*(int *)(iVar10 + 0x20), *(int *)(iVar10 + 0x24), (uint)bVar1, (uint)bVar2), BVar8 != 0)) {
			M_StartRAttack(i, 0, 4);
		}
		if (*(int *)(iVar10 + 4) == 0) {
			iVar9 = *(int *)(iVar10 + 0xe0) + iVar5 * 8;
			uVar4 = *(undefined4 *)(iVar9 + 0xc);
			*(undefined4 *)(iVar10 + 0x54) = *(undefined4 *)(iVar9 + 8);
			*(undefined4 *)(iVar10 + 0x58) = uVar4;
		}
	}
	return;
}

void MAI_Fat(int i)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	undefined4 uVar4;
	int iVar5;
	int md;
	int iVar6;
	int iVar7;

	iVar5 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar5 = 0x100f8fd0;
		app_fatal("MAI_Fat: Invalid monster %d", i);
	}
	iVar5 = *(int *)(iVar5 + -0x7754) + i * 0xe8;
	if ((*(int *)(iVar5 + 4) == 0) && (*(char *)(iVar5 + 0xa4) != '\0')) {
		bVar1 = *(byte *)(iVar5 + 0x50);
		iVar7 = *(int *)(iVar5 + 0x20);
		bVar2 = *(byte *)(iVar5 + 0x51);
		iVar3 = *(int *)(iVar5 + 0x24);
		md = M_GetDir(i);
		*(int *)(iVar5 + 0x48) = md;
		iVar6 = random('o', 100);
		iVar7 = abs(iVar7 - (uint)bVar1);
		if ((iVar7 < 2) && (iVar7 = abs(iVar3 - (uint)bVar2), iVar7 < 2)) {
			iVar7 = (uint) * (byte *)(iVar5 + 0x9d) * 4;
			if (iVar6 < iVar7 + 0xf) {
				M_StartAttack(i);
			} else {
				if (iVar6 < iVar7 + 0x14) {
					M_StartSpAttack(i);
				}
			}
		} else {
			if (((0x14 < *(int *)(iVar5 + 0x78)) && (iVar6 < (int)((uint) * (byte *)(iVar5 + 0x9d) * 4 + 0x14))) || (((*(int *)(iVar5 + 0x74) == 1 || (*(int *)(iVar5 + 0x74) - 2U < 2)) && ((*(int *)(iVar5 + 0x78) == 0 && (iVar6 < (int)((uint) * (byte *)(iVar5 + 0x9d) * 4 + 0x46))))))) {
				M_CallWalk(i, md);
			}
		}
		if (*(int *)(iVar5 + 4) == 0) {
			iVar7 = *(int *)(iVar5 + 0xe0) + md * 8;
			uVar4 = *(undefined4 *)(iVar7 + 0xc);
			*(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar7 + 8);
			*(undefined4 *)(iVar5 + 0x58) = uVar4;
		}
	}
	return;
}

void MAI_Sneak(int i)

{
	undefined4 uVar1;
	int _X;
	int _X_00;
	int md;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar3 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar3 = 0x100f8fd0;
		app_fatal("MAI_Sneak: Invalid monster %d", i);
	}
	iVar5 = *(int *)(iVar3 + -0x7754) + i * 0xe8;
	if (*(int *)(iVar5 + 4) == 0) {
		if (**(char **)(iVar3 + -0x70cc) != *(char *)(**(int **)(iVar3 + -0x758c) + *(int *)(iVar5 + 0x20) * 0x70 + *(int *)(iVar5 + 0x24))) {
			_X = *(int *)(iVar5 + 0x20) - (uint) * (byte *)(iVar5 + 0x50);
			_X_00 = *(int *)(iVar5 + 0x24) - (uint) * (byte *)(iVar5 + 0x51);
			md = M_GetDir(i);
			iVar4 = -(uint) * (byte *)(iVar5 + 0x9d);
			if (*(int *)(iVar5 + 0x74) == 5) {
				*(undefined *)(iVar5 + 8) = 2;
				*(undefined4 *)(iVar5 + 0xc) = 0;
			} else {
				iVar2 = abs(_X);
				if (((iVar4 + 8 <= iVar2) || (iVar2 = abs(_X_00), iVar4 + 8 <= iVar2)) || (8 < *(int *)(iVar5 + 0xc))) {
					*(undefined *)(iVar5 + 8) = 1;
					*(undefined4 *)(iVar5 + 0xc) = 0;
				}
			}
			if (*(char *)(iVar5 + 8) == '\x02') {
				if ((*(uint *)(iVar5 + 0xa0) & 0x10) != 0) {
					md = *(int *)(iVar5 + 0x4c) * 0x55ec;
					md = GetDirection(*(int *)(iVar5 + 0x20), *(int *)(iVar5 + 0x24), *(int *)((int)plr + md + 0x50),
					    *(int *)((int)plr + md + 0x54));
				}
				md = *(int *)(*(int *)(iVar3 + -0x7104) + md * 4);
				if (**(char **)(iVar5 + 0xe0) == '\x1f') {
					iVar2 = random('p', 2);
					if (iVar2 == 0) {
						md = *(int *)(*(int *)(iVar3 + -0x70bc) + md * 4);
					} else {
						md = *(int *)(*(int *)(iVar3 + -0x70b8) + md * 4);
					}
				}
			}
			*(int *)(iVar5 + 0x48) = md;
			iVar3 = random('p', 100);
			iVar2 = abs(_X);
			if (((iVar2 < iVar4 + 5) && (iVar2 = abs(_X_00), iVar2 < iVar4 + 5)) && ((*(uint *)(iVar5 + 0xa0) & 1) != 0)) {
				M_StartFadein(i, md, 0);
			} else {
				iVar2 = abs(_X);
				if (((iVar2 < iVar4 + 6) && (iVar2 = abs(_X_00), iVar2 < iVar4 + 6)) || ((*(uint *)(iVar5 + 0xa0) & 1) != 0)) {
					if ((*(char *)(iVar5 + 8) == '\x02') || (((iVar4 = abs(_X), 1 < iVar4 || (iVar4 = abs(_X_00), 1 < iVar4)) && (((0x14 < *(int *)(iVar5 + 0x78) && (iVar3 < (int)((uint) * (byte *)(iVar5 + 0x9d) * 4 + 0xe))) || ((((*(int *)(iVar5 + 0x74) == 1 || (*(int *)(iVar5 + 0x74) - 2U < 2)) && (*(int *)(iVar5 + 0x78) == 0)) && (iVar3 < (int)((uint) * (byte *)(iVar5 + 0x9d) * 4 + 0x40))))))))) {
						*(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + 1;
						M_CallWalk(i, md);
					}
				} else {
					M_StartFadeout(i, md, 1);
				}
			}
			if (*(int *)(iVar5 + 4) == 0) {
				iVar4 = abs(_X);
				if (((iVar4 < 2) && (iVar4 = abs(_X_00), iVar4 < 2)) && (iVar3 < (int)((uint) * (byte *)(iVar5 + 0x9d) * 4 + 10))) {
					M_StartAttack(i);
				} else {
					iVar3 = *(int *)(iVar5 + 0xe0) + md * 8;
					uVar1 = *(undefined4 *)(iVar3 + 0xc);
					*(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar3 + 8);
					*(undefined4 *)(iVar5 + 0x58) = uVar1;
				}
			}
			return;
		}
		return;
	}
	return;
}

void MAI_Fireman(int i)

{
	byte bVar1;
	byte bVar2;
	char cVar3;
	int iVar4;
	undefined4 uVar5;
	int iVar6;
	int md;
	BOOL BVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int midam;
	int spllvl;

	iVar6 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar6 = 0x100f8fd0;
		app_fatal("MAI_Fireman: Invalid monster %d", i);
	}
	iVar10 = i * 0xe8;
	if ((*(int *)(iVar10 + 0x10151a34) == 0) && (*(char *)(iVar10 + 0x10151ad4) != '\0')) {
		bVar1 = *(byte *)(iVar10 + 0x10151a80);
		bVar2 = *(byte *)(iVar10 + 0x10151a81);
		iVar9 = *(int *)(iVar10 + 0x10151a50);
		iVar4 = *(int *)(iVar10 + 0x10151a54);
		uVar5 = *(undefined4 *)(iVar10 + 0x10151a7c);
		md = M_GetDir(i);
		cVar3 = *(char *)(iVar10 + 0x10151a38);
		if (cVar3 == '\x01') {
			BVar7 = LineClear(*(int *)(iVar10 + 0x10151a50), *(int *)(iVar10 + 0x10151a54), (uint)bVar1, (uint)bVar2);
			if (BVar7 != 0) {
				iVar8 = AddMissile(*(int *)(iVar10 + 0x10151a50), *(int *)(iVar10 + 0x10151a54), (uint)bVar1, (uint)bVar2,
				    md, 0x32, (char)uVar5, i, midam, spllvl);
				if (iVar8 != -1) {
					*(undefined4 *)(iVar10 + 0x10151a34) = 0xe;
					*(undefined *)(iVar10 + 0x10151a38) = 5;
					*(undefined4 *)(iVar10 + 0x10151a3c) = 0;
				}
			}
		} else {
			if (cVar3 == '\x05') {
				if (*(int *)(iVar10 + 0x10151a3c) == 3) {
					*(undefined *)(iVar10 + 0x10151a38) = 1;
					M_StartFadeout(i, md, 1);
				} else {
					BVar7 = LineClear(*(int *)(iVar10 + 0x10151a50), *(int *)(iVar10 + 0x10151a54), (uint)bVar1, (uint)bVar2);
					if (BVar7 == 0) {
						iVar8 = random('p', 10);
						M_StartDelay(i, iVar8 + 5);
						*(int *)(iVar10 + 0x10151a3c) = *(int *)(iVar10 + 0x10151a3c) + 1;
					} else {
						M_StartRAttack(i, 0x33, 4);
						*(int *)(iVar10 + 0x10151a3c) = *(int *)(iVar10 + 0x10151a3c) + 1;
					}
				}
			} else {
				if (cVar3 == '\x02') {
					M_StartFadein(i, md, 0);
					*(undefined *)(iVar10 + 0x10151a38) = 5;
				}
			}
		}
		*(int *)(iVar10 + 0x10151a78) = md;
		random('p', 100);
		if (*(int *)(iVar10 + 0x10151a34) == 0) {
			iVar9 = abs(iVar9 - (uint)bVar1);
			if (((iVar9 < 2) && (iVar9 = abs(iVar4 - (uint)bVar2), iVar9 < 2)) && (*(char *)(iVar10 + 0x10151a38) == '\x01')) {
				M_TryH2HHit(i, *(int *)(iVar10 + 0x10151a7c), (uint) * (byte *)(iVar10 + 0x10151af8),
				    (uint) * (byte *)(iVar10 + 0x10151af9), (uint) * (byte *)(iVar10 + 0x10151afa));
				iVar6 = *(int *)(iVar6 + -0x7104);
				*(undefined *)(iVar10 + 0x10151a38) = 2;
				BVar7 = M_CallWalk(i, *(int *)(iVar6 + md * 4));
				if (BVar7 == 0) {
					M_StartFadein(i, md, 0);
					*(undefined *)(iVar10 + 0x10151a38) = 5;
				}
			} else {
				BVar7 = M_CallWalk(i, md);
				if ((BVar7 == 0) && ((*(char *)(iVar10 + 0x10151a38) == '\x01' || (*(char *)(iVar10 + 0x10151a38) == '\x02')))) {
					M_StartFadein(i, md, 0);
					*(undefined *)(iVar10 + 0x10151a38) = 5;
				}
			}
		}
	}
	return;
}

void MAI_Fallen(int i)

{
	byte bVar1;
	short sVar2;
	int iVar3;
	longlong lVar4;
	int iVar5;
	int iVar6;
	int md;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;

	md = 0x100f8fd0;
	if (199 < (uint)i) {
		md = 0x100f8fd0;
		app_fatal("MAI_Fallen: Invalid monster %d", i);
	}
	iVar6 = i * 0xe8;
	if (*(char *)(iVar6 + 0x10151a38) == '\x05') {
		if (*(int *)(iVar6 + 0x10151a3c) == 0) {
			*(undefined *)(iVar6 + 0x10151a38) = 1;
		} else {
			*(int *)(iVar6 + 0x10151a3c) = *(int *)(iVar6 + 0x10151a3c) + -1;
		}
	}
	if ((*(int *)(iVar6 + 0x10151a34) == 0) && (*(char *)(iVar6 + 0x10151ad4) != '\0')) {
		if ((*(char *)(iVar6 + 0x10151a38) == '\x02') && (iVar5 = *(int *)(iVar6 + 0x10151a3c), *(int *)(iVar6 + 0x10151a3c) = iVar5 + -1, iVar5 == 0)) {
			iVar5 = *(int *)(md + -0x7104);
			*(undefined *)(iVar6 + 0x10151a38) = 1;
			M_StartStand(i, *(int *)(iVar5 + *(int *)(iVar6 + 0x10151a78) * 4));
		}
		if (*(int *)(iVar6 + 0x10151a98) == *(int *)(iVar6 + 0x10151a94)) {
			iVar5 = random('q', 4);
			if (iVar5 == 0) {
				if ((*(uint *)(iVar6 + 0x10151ad0) & 8) == 0) {
					M_StartSpStand(i, *(int *)(iVar6 + 0x10151a78));
					iVar5 = (uint) * (byte *)(iVar6 + 0x10151acd) * 2 + 2;
					if (*(int *)(iVar6 + 0x10151ac4) - iVar5 < *(int *)(iVar6 + 0x10151ac8)) {
						*(int *)(iVar6 + 0x10151ac8) = *(int *)(iVar6 + 0x10151ac4);
					} else {
						*(int *)(iVar6 + 0x10151ac8) = *(int *)(iVar6 + 0x10151ac8) + iVar5;
					}
				}
				lVar7 = (ulonglong) * (byte *)(iVar6 + 0x10151acd) * 2;
				lVar8 = lVar7 + 4;
				md = **(int **)(md + -0x767c);
				lVar10 = -lVar8;
				lVar11 = lVar10;
				while (true) {
					iVar5 = (int)lVar11;
					if ((int)lVar8 < iVar5)
						break;
					lVar4 = lVar7 + 5 + lVar8;
					lVar9 = lVar10;
					if ((int)lVar10 <= (int)lVar8) {
						do {
							iVar3 = (int)lVar9;
							if ((((-1 < iVar5) && (iVar5 < 0x70)) && (-1 < iVar3)) && (((iVar3 < 0x70 && (sVar2 = *(short *)(md + (*(int *)(iVar6 + 0x10151a50) + iVar3) * 0xe0 + (*(int *)(iVar6 + 0x10151a54) + iVar5) * 2), 0 < sVar2)) && (iVar3 = ((int)sVar2 + -1) * 0xe8, *(char *)(iVar3 + 0x10151acc) == '\b')))) {
								*(undefined *)(iVar3 + 0x10151a38) = 5;
								*(int *)(iVar3 + 0x10151a3c) = ((uint) * (byte *)(iVar6 + 0x10151acd) * 2 + 7) * 0xf;
							}
							lVar9 = lVar9 + 1;
							lVar4 = lVar4 + -1;
						} while (lVar4 != 0);
					}
					lVar11 = lVar11 + 1;
				}
			}
		} else {
			if (*(char *)(iVar6 + 0x10151a38) == '\x02') {
				M_CallWalk(i, *(int *)(iVar6 + 0x10151a78));
			} else {
				if (*(char *)(iVar6 + 0x10151a38) == '\x05') {
					bVar1 = *(byte *)(iVar6 + 0x10151a81);
					md = *(int *)(iVar6 + 0x10151a54);
					iVar6 = abs(*(int *)(iVar6 + 0x10151a50) - (uint) * (byte *)(iVar6 + 0x10151a80));
					if ((iVar6 < 2) && (md = abs(md - (uint)bVar1), md < 2)) {
						M_StartAttack(i);
					} else {
						md = M_GetDir(i);
						M_CallWalk(i, md);
					}
				} else {
					MAI_SkelSd(i);
				}
			}
		}
	}
	return;
}

void MAI_Cleaver(int i)

{
	byte bVar1;
	byte bVar2;
	int y1;
	undefined4 uVar3;
	int iVar4;
	int md;
	int x1;

	iVar4 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar4 = 0x100f8fd0;
		app_fatal("MAI_Cleaver: Invalid monster %d", i);
	}
	iVar4 = *(int *)(iVar4 + -0x7754) + i * 0xe8;
	if ((*(int *)(iVar4 + 4) == 0) && (*(char *)(iVar4 + 0xa4) != '\0')) {
		x1 = *(int *)(iVar4 + 0x20);
		bVar1 = *(byte *)(iVar4 + 0x50);
		y1 = *(int *)(iVar4 + 0x24);
		bVar2 = *(byte *)(iVar4 + 0x51);
		md = GetDirection(x1, y1, *(int *)(iVar4 + 0xac), *(int *)(iVar4 + 0xb0));
		*(int *)(iVar4 + 0x48) = md;
		x1 = abs(x1 - (uint)bVar1);
		if ((x1 < 2) && (x1 = abs(y1 - (uint)bVar2), x1 < 2)) {
			M_StartAttack(i);
		} else {
			M_CallWalk(i, md);
		}
		if (*(int *)(iVar4 + 4) == 0) {
			x1 = *(int *)(iVar4 + 0xe0) + md * 8;
			uVar3 = *(undefined4 *)(x1 + 0xc);
			*(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(x1 + 8);
			*(undefined4 *)(iVar4 + 0x58) = uVar3;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MAI_Round(int i, BOOL special)

{
	byte bVar1;
	byte bVar2;
	undefined4 uVar3;
	int iVar4;
	int _X;
	int _X_00;
	int mdir;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	BOOL BVar9;

	iVar4 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar4 = 0x100f8fd0;
		app_fatal("MAI_Round: Invalid monster %d", i);
	}
	iVar4 = *(int *)(iVar4 + -0x7754) + i * 0xe8;
	if ((*(int *)(iVar4 + 4) == 0) && (*(char *)(iVar4 + 0xa4) != '\0')) {
		bVar1 = *(byte *)(iVar4 + 0x50);
		bVar2 = *(byte *)(iVar4 + 0x51);
		_X = *(int *)(iVar4 + 0x20) - (uint)bVar1;
		_X_00 = *(int *)(iVar4 + 0x24) - (uint)bVar2;
		mdir = GetDirection(*(int *)(iVar4 + 0x20), *(int *)(iVar4 + 0x24), *(int *)(iVar4 + 0xac), *(int *)(iVar4 + 0xb0));
		if (*(char *)(iVar4 + 0xa4) != -1) {
			MonstCheckDoors(i);
		}
		iVar5 = random('r', 100);
		iVar6 = abs(_X);
		if ((((iVar6 < 2) && (iVar6 = abs(_X_00), iVar6 < 2)) || (*(char *)(iVar4 + 0xa4) != -1)) || (iVar6 = (uint)bVar1 * 0x70, *(char *)(_DAT_1012f1c8 + *(int *)(iVar4 + 0x20) * 0x70 + *(int *)(iVar4 + 0x24)) != *(char *)(_DAT_1012f1c8 + iVar6 + (uint)bVar2))) {
			*(undefined *)(iVar4 + 8) = 1;
		} else {
			if ((*(char *)(iVar4 + 8) == '\x04') || (((iVar7 = abs(_X), 3 < iVar7 || (iVar7 = abs(_X_00), 3 < iVar7)) && (iVar7 = random('s', 4), iVar7 == 0)))) {
				if (*(char *)(iVar4 + 8) != '\x04') {
					*(undefined4 *)(iVar4 + 0xc) = 0;
					iVar7 = random('t', 2);
					*(int *)(iVar4 + 0x10) = iVar7;
				}
				*(undefined *)(iVar4 + 8) = 4;
				iVar7 = abs(_X_00);
				iVar8 = abs(_X);
				if (iVar7 < iVar8) {
					iVar7 = abs(_X);
				} else {
					iVar7 = abs(_X_00);
				}
				iVar8 = *(int *)(iVar4 + 0xc);
				*(int *)(iVar4 + 0xc) = iVar8 + 1;
				if (((iVar8 < iVar7 << 1) || (BVar9 = DirOK(i, mdir), BVar9 == 0)) && (*(char *)(_DAT_1012f1c8 + *(int *)(iVar4 + 0x20) * 0x70 + *(int *)(iVar4 + 0x24)) == *(char *)(_DAT_1012f1c8 + iVar6 + (uint)bVar2))) {
					BVar9 = M_RoundWalk(i, mdir, (int *)(iVar4 + 0x10));
					if (BVar9 == 0) {
						iVar6 = random('}', 10);
						M_StartDelay(i, iVar6 + 10);
					}
				} else {
					*(undefined *)(iVar4 + 8) = 1;
				}
			}
		}
		if (*(char *)(iVar4 + 8) == '\x01') {
			_X = abs(_X);
			if ((_X < 2) && (_X = abs(_X_00), _X < 2)) {
				if (iVar5 < (int)((uint) * (byte *)(iVar4 + 0x9d) * 2 + 0x17)) {
					*(int *)(iVar4 + 0x48) = mdir;
					if (((special == 0) || (*(int *)(iVar4 + 0x94) >> 1 <= *(int *)(iVar4 + 0x98))) || (_X = random('u', 2), _X == 0)) {
						M_StartAttack(i);
					} else {
						M_StartSpAttack(i);
					}
				}
			} else {
				if (((0x14 < *(int *)(iVar4 + 0x78)) && (iVar5 < (int)((uint) * (byte *)(iVar4 + 0x9d) * 2 + 0x1c))) || ((((*(int *)(iVar4 + 0x74) == 1 || (*(int *)(iVar4 + 0x74) - 2U < 2)) && (*(int *)(iVar4 + 0x78) == 0)) && (iVar5 < (int)((uint) * (byte *)(iVar4 + 0x9d) * 2 + 0x4e))))) {
					M_CallWalk(i, mdir);
				}
			}
		}
		if (*(int *)(iVar4 + 4) == 0) {
			_X = *(int *)(iVar4 + 0xe0) + mdir * 8;
			uVar3 = *(undefined4 *)(_X + 0xc);
			*(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(_X + 8);
			*(undefined4 *)(iVar4 + 0x58) = uVar3;
		}
	}
	return;
}

void MAI_GoatMc(int i)

{
	MAI_Round(i, 1);
	return;
}

void MAI_Ranged(int i, int missile_type, BOOL special)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	undefined4 uVar4;
	int iVar5;
	int iVar6;
	int md;
	int iVar7;
	BOOL BVar8;

	md = 0x100f8fd0;
	if (199 < (uint)i) {
		md = 0x100f8fd0;
		app_fatal("MAI_Ranged: Invalid monster %d", i);
	}
	iVar5 = i * 0xe8;
	if (*(int *)(iVar5 + 0x10151a34) == 0) {
		if ((*(char *)(iVar5 + 0x10151ad4) == -1) || ((*(uint *)(iVar5 + 0x10151ad0) & 0x10) != 0)) {
			bVar1 = *(byte *)(iVar5 + 0x10151a80);
			bVar2 = *(byte *)(iVar5 + 0x10151a81);
			iVar7 = *(int *)(iVar5 + 0x10151a50);
			iVar3 = *(int *)(iVar5 + 0x10151a54);
			iVar6 = M_GetDir(i);
			if (*(char *)(iVar5 + 0x10151ad4) != -1) {
				MonstCheckDoors(i);
			}
			*(int *)(iVar5 + 0x10151a78) = iVar6;
			if (*(int *)(iVar5 + 0x10151aa4) == 10) {
				md = random('v', 0x14);
				M_StartDelay(i, md);
			} else {
				iVar7 = abs(iVar7 - (uint)bVar1);
				if (((iVar7 < 4) && (iVar7 = abs(iVar3 - (uint)bVar2), iVar7 < 4)) && (iVar7 = random('w', 100), iVar7 < (int)((uint) * (byte *)(iVar5 + 0x10151acd) * 10 + 0x46))) {
					M_CallWalk(i, *(int *)(*(int *)(md + -0x7104) + iVar6 * 4));
				}
			}
			if (*(int *)(iVar5 + 0x10151a34) == 0) {
				BVar8 = LineClear(*(int *)(iVar5 + 0x10151a50), *(int *)(iVar5 + 0x10151a54), (uint)bVar1, (uint)bVar2);
				if (BVar8 == 0) {
					md = *(int *)(iVar5 + 0x10151b10) + iVar6 * 8;
					uVar4 = *(undefined4 *)(md + 0xc);
					*(undefined4 *)(iVar5 + 0x10151a84) = *(undefined4 *)(md + 8);
					*(undefined4 *)(iVar5 + 0x10151a88) = uVar4;
				} else {
					if (special == 0) {
						M_StartRAttack(i, missile_type, 4);
					} else {
						M_StartRSpAttack(i, missile_type, 4);
					}
				}
			}
		} else {
			if (*(char *)(iVar5 + 0x10151ad4) != '\0') {
				md = GetDirection(*(int *)(iVar5 + 0x10151a50), *(int *)(iVar5 + 0x10151a54), *(int *)(iVar5 + 0x10151adc),
				    *(int *)(iVar5 + 0x10151ae0));
				M_CallWalk(i, md);
			}
		}
	}
	return;
}

void MAI_GoatBow(int i)

{
	MAI_Ranged(i, 0, 0);
	return;
}

void MAI_Succ(int i)

{
	MAI_Ranged(i, 0x18, 0);
	return;
}

void MAI_AcidUniq(int i)

{
	MAI_Ranged(i, 0x39, 1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MAI_Scav(int i)

{
	int x2;
	bool bVar1;
	int iVar2;
	BOOL BVar3;
	int unaff_r26;
	int y1;
	int iVar4;

	if (199 < (uint)i) {
		app_fatal("MAI_Scav: Invalid monster %d", i);
	}
	iVar4 = i * 0xe8;
	bVar1 = false;
	if (*(int *)(iVar4 + 0x10151a34) == 0) {
		if ((*(int *)(iVar4 + 0x10151ac8) < *(int *)(iVar4 + 0x10151ac4) >> 1) && (*(char *)(iVar4 + 0x10151a38) != '\x03')) {
			if (*(char *)(iVar4 + 0x10151b09) != '\0') {
				iVar2 = (uint) * (byte *)(iVar4 + 0x10151b08) * 0xe8;
				*(char *)(iVar2 + 0x10151b0a) = *(char *)(iVar2 + 0x10151b0a) + -1;
				*(undefined *)(iVar4 + 0x10151b09) = 0;
			}
			*(undefined *)(iVar4 + 0x10151a38) = 3;
			*(undefined4 *)(iVar4 + 0x10151a44) = 10;
		}
		if ((*(char *)(iVar4 + 0x10151a38) == '\x03') && (*(int *)(iVar4 + 0x10151a44) != 0)) {
			*(int *)(iVar4 + 0x10151a44) = *(int *)(iVar4 + 0x10151a44) + -1;
			if (*(char *)(_DAT_1012f1b0 + *(int *)(iVar4 + 0x10151a50) * 0x70 + *(int *)(iVar4 + 0x10151a54)) == '\0') {
				if (*(int *)(iVar4 + 0x10151a3c) == 0) {
					iVar2 = random('x', 2);
					if (iVar2 == 0) {
						iVar2 = 4;
						while ((-5 < iVar2 && (!bVar1))) {
							unaff_r26 = 4;
							while ((-5 < unaff_r26 && (!bVar1))) {
								if ((-1 < iVar2) && (((iVar2 < 0x70 && (-1 < unaff_r26)) && (unaff_r26 < 0x70)))) {
									bVar1 = false;
									x2 = *(int *)(iVar4 + 0x10151a50) + unaff_r26;
									y1 = *(int *)(iVar4 + 0x10151a54);
									if ((*(char *)(iVar2 + _DAT_1012f1b0 + x2 * 0x70 + y1) != '\0') && (BVar3 = LineClearF((Clear *)&PTR_CheckNoSolid_100f4ce8, *(int *)(iVar4 + 0x10151a50), y1, x2, y1 + iVar2), BVar3 != 0)) {
										bVar1 = true;
									}
								}
								unaff_r26 = unaff_r26 + -1;
							}
							iVar2 = iVar2 + -1;
						}
						y1 = unaff_r26 + 1;
						iVar2 = iVar2 + 1;
					} else {
						iVar2 = -4;
						while ((iVar2 < 5 && (!bVar1))) {
							unaff_r26 = -4;
							while ((unaff_r26 < 5 && (!bVar1))) {
								if ((-1 < iVar2) && (((iVar2 < 0x70 && (-1 < unaff_r26)) && (unaff_r26 < 0x70)))) {
									bVar1 = false;
									x2 = *(int *)(iVar4 + 0x10151a50) + unaff_r26;
									y1 = *(int *)(iVar4 + 0x10151a54);
									if ((*(char *)(iVar2 + _DAT_1012f1b0 + x2 * 0x70 + y1) != '\0') && (BVar3 = LineClearF((Clear *)&PTR_CheckNoSolid_100f4ce8, *(int *)(iVar4 + 0x10151a50), y1, x2, y1 + iVar2), BVar3 != 0)) {
										bVar1 = true;
									}
								}
								unaff_r26 = unaff_r26 + 1;
							}
							iVar2 = iVar2 + 1;
						}
						y1 = unaff_r26 + -1;
						iVar2 = iVar2 + -1;
					}
					if (bVar1) {
						*(int *)(iVar4 + 0x10151a3c) = *(int *)(iVar4 + 0x10151a50) + y1 + 1;
						*(int *)(iVar4 + 0x10151a40) = *(int *)(iVar4 + 0x10151a54) + iVar2 + 1;
					}
				}
				if (*(int *)(iVar4 + 0x10151a3c) != 0) {
					iVar2 = GetDirection(*(int *)(iVar4 + 0x10151a50), *(int *)(iVar4 + 0x10151a54),
					    *(int *)(iVar4 + 0x10151a3c) + -1, *(int *)(iVar4 + 0x10151a40) + -1);
					*(int *)(iVar4 + 0x10151a78) = iVar2;
					M_CallWalk(i, *(int *)(iVar4 + 0x10151a78));
				}
			} else {
				M_StartEat(i);
				if ((*(uint *)(iVar4 + 0x10151ad0) & 8) == 0) {
					*(int *)(iVar4 + 0x10151ac8) = *(int *)(iVar4 + 0x10151ac8) + 0x40;
				}
				if ((*(int *)(iVar4 + 0x10151ac4) >> 1) + (*(int *)(iVar4 + 0x10151ac4) >> 2) <= *(int *)(iVar4 + 0x10151ac8)) {
					*(undefined *)(iVar4 + 0x10151a38) = 1;
					*(undefined4 *)(iVar4 + 0x10151a3c) = 0;
					*(undefined4 *)(iVar4 + 0x10151a40) = 0;
				}
			}
		}
		if (*(int *)(iVar4 + 0x10151a34) == 0) {
			MAI_SkelSd(i);
		}
	}
	return;
}

void MAI_Garg(int i)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	BOOL BVar8;
	int iVar9;

	iVar7 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar7 = 0x100f8fd0;
		app_fatal("MAI_Garg: Invalid monster %d", i);
	}
	iVar9 = *(int *)(iVar7 + -0x7754) + i * 0xe8;
	iVar6 = *(int *)(iVar9 + 0xac);
	iVar2 = *(int *)(iVar9 + 0x20);
	iVar3 = *(int *)(iVar9 + 0xb0);
	iVar4 = *(int *)(iVar9 + 0x24);
	iVar5 = M_GetDir(i);
	if ((*(char *)(iVar9 + 0xa4) == '\0') || ((*(uint *)(iVar9 + 0xa0) & 4) == 0)) {
		if ((*(int *)(iVar9 + 4) == 0) && (*(char *)(iVar9 + 0xa4) != '\0')) {
			if ((*(int *)(iVar9 + 0x98) < *(int *)(iVar9 + 0x94) >> 1) && ((*(uint *)(iVar9 + 0xa0) & 8) == 0)) {
				*(undefined *)(iVar9 + 8) = 2;
			}
			if (*(char *)(iVar9 + 8) == '\x02') {
				iVar6 = abs(iVar2 - iVar6);
				if ((iVar6 < (int)((uint) * (byte *)(iVar9 + 0x9d) + 2)) && (iVar6 = abs(iVar4 - iVar3), iVar6 < (int)((uint) * (byte *)(iVar9 + 0x9d) + 2))) {
					BVar8 = M_CallWalk(i, *(int *)(*(int *)(iVar7 + -0x7104) + iVar5 * 4));
					if (BVar8 == 0) {
						*(undefined *)(iVar9 + 8) = 1;
					}
				} else {
					*(undefined *)(iVar9 + 8) = 1;
					M_StartHeal(i);
				}
			}
			MAI_Round(i, 0);
		}
	} else {
		M_Enemy(i);
		bVar1 = *(byte *)(iVar9 + 0x51);
		iVar7 = *(int *)(iVar9 + 0x24);
		iVar6 = abs(*(int *)(iVar9 + 0x20) - (uint) * (byte *)(iVar9 + 0x50));
		if ((iVar6 < (int)((uint) * (byte *)(iVar9 + 0x9d) + 2)) && (iVar7 = abs(iVar7 - (uint)bVar1), iVar7 < (int)((uint) * (byte *)(iVar9 + 0x9d) + 2))) {
			*(uint *)(iVar9 + 0xa0) = *(uint *)(iVar9 + 0xa0) & 0xfffffffb;
		}
	}
	return;
}

void MAI_RoundRanged(int i, int missile_type, BOOL checkdoors, int dam, int lessmissiles)

{
	byte bVar1;
	byte bVar2;
	int _X;
	int _X_00;
	int mdir;
	int iVar3;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	ulonglong uVar7;
	int iVar8;

	uVar7 = SEXT48(lessmissiles);
	iVar5 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar5 = 0x100f8fd0;
		app_fatal("MAI_RoundRanged: Invalid monster %d", i);
	}
	iVar8 = *(int *)(iVar5 + -0x7754) + i * 0xe8;
	if ((*(int *)(iVar8 + 4) == 0) && (*(char *)(iVar8 + 0xa4) != '\0')) {
		bVar1 = *(byte *)(iVar8 + 0x50);
		bVar2 = *(byte *)(iVar8 + 0x51);
		_X = *(int *)(iVar8 + 0x20) - (uint)bVar1;
		_X_00 = *(int *)(iVar8 + 0x24) - (uint)bVar2;
		mdir = GetDirection(*(int *)(iVar8 + 0x20), *(int *)(iVar8 + 0x24), *(int *)(iVar8 + 0xac), *(int *)(iVar8 + 0xb0));
		if ((checkdoors != 0) && (*(char *)(iVar8 + 0xa4) != -1)) {
			MonstCheckDoors(i);
		}
		iVar3 = random('y', 10000);
		iVar4 = abs(_X);
		if ((((iVar4 < 2) && (iVar4 = abs(_X_00), iVar4 < 2)) || (*(char *)(iVar8 + 0xa4) != -1)) || (*(char *)(**(int **)(iVar5 + -0x7588) + *(int *)(iVar8 + 0x20) * 0x70 + *(int *)(iVar8 + 0x24)) != *(char *)(**(int **)(iVar5 + -0x7588) + (uint)bVar1 * 0x70 + (uint)bVar2))) {
			*(undefined *)(iVar8 + 8) = 1;
		} else {
			if ((*(char *)(iVar8 + 8) == '\x04') || (((iVar5 = abs(_X), 2 < iVar5 || (iVar5 = abs(_X_00), 2 < iVar5)) && (iVar5 = random('z', 4 << uVar7), iVar5 == 0)))) {
				if (*(char *)(iVar8 + 8) != '\x04') {
					*(undefined4 *)(iVar8 + 0xc) = 0;
					iVar5 = random('{', 2);
					*(int *)(iVar8 + 0x10) = iVar5;
				}
				*(undefined *)(iVar8 + 8) = 4;
				iVar5 = abs(_X_00);
				iVar4 = abs(_X);
				if (iVar5 < iVar4) {
					iVar5 = abs(_X);
				} else {
					iVar5 = abs(_X_00);
				}
				iVar4 = *(int *)(iVar8 + 0xc);
				*(int *)(iVar8 + 0xc) = iVar4 + 1;
				if ((iVar4 < iVar5 << 1) || (BVar6 = DirOK(i, mdir), BVar6 == 0)) {
					if ((iVar3<(int)((uint) * (byte *)(iVar8 + 0x9d) * 500 + 500)>> (uVar7 & 0x3f)) && (BVar6 = LineClear(*(int *)(iVar8 + 0x20), *(int *)(iVar8 + 0x24), (uint)bVar1, (uint)bVar2), BVar6 != 0)) {
						M_StartRSpAttack(i, missile_type, dam);
					} else {
						M_RoundWalk(i, mdir, (int *)(iVar8 + 0x10));
					}
				} else {
					*(undefined *)(iVar8 + 8) = 1;
				}
			}
		}
		if (*(char *)(iVar8 + 8) == '\x01') {
			iVar5 = abs(_X);
			if (((((iVar5 < 3) && (iVar5 = abs(_X_00), iVar5 < 3)) || ((int)((uint) * (byte *)(iVar8 + 0x9d) * 500 + 1000) >> (uVar7 & 0x3f) <= iVar3)) && ((int)((uint) * (byte *)(iVar8 + 0x9d) * 500 + 500) >> (uVar7 & 0x3f) <= iVar3)) || (BVar6 = LineClear(*(int *)(iVar8 + 0x20), *(int *)(iVar8 + 0x24), (uint)bVar1, (uint)bVar2), BVar6 == 0)) {
				iVar5 = abs(_X);
				if ((iVar5 < 2) && (iVar5 = abs(_X_00), iVar5 < 2)) {
					if (iVar3 < (int)((uint) * (byte *)(iVar8 + 0x9d) * 1000 + 6000)) {
						*(int *)(iVar8 + 0x48) = mdir;
						M_StartAttack(i);
					}
				} else {
					_X = random('|', 100);
					iVar5 = (uint) * (byte *)(iVar8 + 0x9d) * 1000;
					if ((_X < iVar5 + 5000) || (((*(int *)(iVar8 + 0x74) == 1 || (*(int *)(iVar8 + 0x74) - 2U < 2)) && ((*(int *)(iVar8 + 0x78) == 0 && (_X < iVar5 + 8000)))))) {
						M_CallWalk(i, mdir);
					}
				}
			} else {
				M_StartRSpAttack(i, missile_type, dam);
			}
		}
		if (*(int *)(iVar8 + 4) == 0) {
			iVar5 = random('}', 10);
			M_StartDelay(i, iVar5 + 5);
		}
	}
	return;
}

void MAI_Magma(int i)

{
	MAI_RoundRanged(i, 0x15, 1, 4, 0);
	return;
}

void MAI_Storm(int i)

{
	MAI_RoundRanged(i, 0x16, 1, 4, 0);
	return;
}

void MAI_Acid(int i)

{
	MAI_RoundRanged(i, 0x39, 0, 4, 1);
	return;
}

void MAI_Diablo(int i)

{
	MAI_RoundRanged(i, 0x43, 0, 0x28, 0);
	return;
}

void MAI_RR2(int i, int mistype, int dam)

{
	byte bVar1;
	byte bVar2;
	int _X;
	int _X_00;
	int mdir;
	int iVar3;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	int iVar7;

	iVar5 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar5 = 0x100f8fd0;
		app_fatal("MAI_RR2: Invalid monster %d", i);
	}
	iVar7 = *(int *)(iVar5 + -0x7754) + i * 0xe8;
	bVar1 = *(byte *)(iVar7 + 0x51);
	_X_00 = *(int *)(iVar7 + 0x24);
	_X = abs(*(int *)(iVar7 + 0x20) - (uint) * (byte *)(iVar7 + 0x50));
	if ((_X < 5) && (_X_00 = abs(_X_00 - (uint)bVar1), _X_00 < 5)) {
		if ((*(int *)(iVar7 + 4) == 0) && (*(char *)(iVar7 + 0xa4) != '\0')) {
			bVar1 = *(byte *)(iVar7 + 0x50);
			bVar2 = *(byte *)(iVar7 + 0x51);
			_X_00 = *(int *)(iVar7 + 0x20) - (uint)bVar1;
			_X = *(int *)(iVar7 + 0x24) - (uint)bVar2;
			mdir = GetDirection(
			    *(int *)(iVar7 + 0x20), *(int *)(iVar7 + 0x24), *(int *)(iVar7 + 0xac), *(int *)(iVar7 + 0xb0));
			if (*(char *)(iVar7 + 0xa4) != -1) {
				MonstCheckDoors(i);
			}
			iVar3 = random('y', 100);
			iVar4 = abs(_X_00);
			if ((((iVar4 < 2) && (iVar4 = abs(_X), iVar4 < 2)) || (*(char *)(iVar7 + 0xa4) != -1)) || (*(char *)(**(int **)(iVar5 + -0x7588) + *(int *)(iVar7 + 0x20) * 0x70 + *(int *)(iVar7 + 0x24)) != *(char *)(**(int **)(iVar5 + -0x7588) + (uint)bVar1 * 0x70 + (uint)bVar2))) {
				*(undefined *)(iVar7 + 8) = 1;
			} else {
				if (((*(char *)(iVar7 + 8) == '\x04') || (iVar5 = abs(_X_00), 2 < iVar5)) || (iVar5 = abs(_X), 2 < iVar5)) {
					if (*(char *)(iVar7 + 8) != '\x04') {
						*(undefined4 *)(iVar7 + 0xc) = 0;
						iVar5 = random('{', 2);
						*(int *)(iVar7 + 0x10) = iVar5;
					}
					*(undefined *)(iVar7 + 8) = 4;
					*(undefined4 *)(iVar7 + 0x14) = 4;
					iVar5 = abs(_X);
					iVar4 = abs(_X_00);
					if (iVar5 < iVar4) {
						iVar5 = abs(_X_00);
					} else {
						iVar5 = abs(_X);
					}
					iVar4 = *(int *)(iVar7 + 0xc);
					*(int *)(iVar7 + 0xc) = iVar4 + 1;
					if ((iVar4 < iVar5 << 1) || (BVar6 = DirOK(i, mdir), BVar6 == 0)) {
						if (iVar3 < (int)((uint) * (byte *)(iVar7 + 0x9d) * 5 + 0x50)) {
							M_RoundWalk(i, mdir, (int *)(iVar7 + 0x10));
						}
					} else {
						*(undefined *)(iVar7 + 8) = 1;
					}
				}
			}
			if (*(char *)(iVar7 + 8) == '\x01') {
				iVar5 = abs(_X_00);
				if (((((iVar5 < 3) && (iVar5 = abs(_X), iVar5 < 3)) || ((int)((uint) * (byte *)(iVar7 + 0x9d) * 5 + 10) <= iVar3)) && (((int)((uint) * (byte *)(iVar7 + 0x9d) * 5 + 5) <= iVar3 && (*(int *)(iVar7 + 0x14) != 4)))) || (BVar6 = LineClear(*(int *)(iVar7 + 0x20), *(int *)(iVar7 + 0x24), (uint)bVar1, (uint)bVar2), BVar6 == 0)) {
					iVar5 = abs(_X_00);
					if ((iVar5 < 2) && (iVar5 = abs(_X), iVar5 < 2)) {
						iVar5 = random('|', 100);
						if (iVar5 < (int)((uint) * (byte *)(iVar7 + 0x9d) * 10 + 0x28)) {
							*(int *)(iVar7 + 0x48) = mdir;
							iVar5 = random('|', 2);
							if (iVar5 == 0) {
								M_StartRSpAttack(i, mistype, dam);
							} else {
								M_StartAttack(i);
							}
						}
					} else {
						_X_00 = random('|', 100);
						iVar5 = (uint) * (byte *)(iVar7 + 0x9d) * 10;
						if ((_X_00 < iVar5 + 0x32) || ((((*(int *)(iVar7 + 0x74) == 1 || (*(int *)(iVar7 + 0x74) - 2U < 2)) && (*(int *)(iVar7 + 0x78) == 0)) && (_X_00 < iVar5 + 0x50)))) {
							M_CallWalk(i, mdir);
						}
					}
				} else {
					M_StartRSpAttack(i, mistype, dam);
				}
				*(undefined4 *)(iVar7 + 0x14) = 1;
			}
			if (*(int *)(iVar7 + 4) == 0) {
				iVar5 = random('}', 10);
				M_StartDelay(i, iVar5 + 5);
			}
		}
	} else {
		MAI_SkelSd(i);
	}
	return;
}

void MAI_Mega(int i)

{
	MAI_RR2(i, 0x31, 0);
	return;
}

void MAI_Golum(int i)

{
	char *pcVar1;
	short sVar2;
	int y1;
	int iVar3;
	int iVar4;
	int *piVar5;
	uint mdir;
	undefined8 uVar6;
	int iVar7;
	int x1;
	BOOL BVar8;
	int iVar9;
	int iVar10;
	longlong lVar11;

	iVar9 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar9 = 0x100f8fd0;
		app_fatal("MAI_Golum: Invalid monster %d", i);
	}
	iVar10 = i * 0xe8;
	if (((((*(int *)(iVar10 + 0x10151a50) != 1) || (*(int *)(iVar10 + 0x10151a54) != 0)) && (x1 = *(int *)(iVar10 + 0x10151a34), x1 != 6)) && (x1 != 0xb)) && ((x1 < 1 || (3 < x1)))) {
		if ((*(uint *)(iVar10 + 0x10151ad0) & 0x10) == 0) {
			M_Enemy(i);
		}
		uVar6 = countLeadingZeros(*(uint *)(iVar10 + 0x10151ad0) & 0x400);
		mdir = (uint)uVar6 >> 5 & 0xff;
		if (*(int *)(iVar10 + 0x10151a34) != 4) {
			x1 = *(int *)(iVar10 + 0x10151a50);
			iVar7 = *(int *)(iVar10 + 0x10151a7c) * 0xe8;
			y1 = *(int *)(iVar10 + 0x10151a54);
			iVar3 = *(int *)(iVar7 + 0x10151a58);
			iVar4 = *(int *)(iVar7 + 0x10151a5c);
			iVar7 = GetDirection(x1, y1, *(int *)(iVar7 + 0x10151a50), *(int *)(iVar7 + 0x10151a54));
			*(int *)(iVar10 + 0x10151a78) = iVar7;
			x1 = abs(x1 - iVar3);
			if (((x1 < 2) && (x1 = abs(y1 - iVar4), x1 < 2)) && (mdir != 0)) {
				*(undefined *)(iVar10 + 0x10151a80) = (char)*(undefined4 *)(*(int *)(iVar10 + 0x10151a7c) * 0xe8 + 0x10151a50);
				*(undefined *)(iVar10 + 0x10151a81) = (char)*(undefined4 *)(*(int *)(iVar10 + 0x10151a7c) * 0xe8 + 0x10151a54);
				pcVar1 = (char *)(*(int *)(iVar10 + 0x10151a7c) * 0xe8 + 0x10151ad4);
				if (*pcVar1 == '\0') {
					piVar5 = *(int **)(iVar9 + -0x767c);
					*pcVar1 = -1;
					lVar11 = 5;
					x1 = 0;
					*(undefined4 *)(*(int *)(iVar10 + 0x10151a7c) * 0xe8 + 0x10151adc) = *(undefined4 *)(iVar10 + 0x10151a50);
					*(undefined4 *)(*(int *)(iVar10 + 0x10151a7c) * 0xe8 + 0x10151ae0) = *(undefined4 *)(iVar10 + 0x10151a54);
					iVar9 = *piVar5;
					do {
						sVar2 = *(short *)(iVar9 + (*(int *)(iVar10 + 0x10151a50) + -2) * 0xe0 + (*(int *)(iVar10 + 0x10151a54) + x1 + -2) * 2);
						if (0 < sVar2) {
							*(undefined *)((int)sVar2 * 0xe8 + 0x10151ad4) = 0xff;
						}
						sVar2 = *(short *)(iVar9 + (*(int *)(iVar10 + 0x10151a50) + -1) * 0xe0 + (*(int *)(iVar10 + 0x10151a54) + x1 + -2) * 2);
						if (0 < sVar2) {
							*(undefined *)((int)sVar2 * 0xe8 + 0x10151ad4) = 0xff;
						}
						sVar2 = *(short *)(iVar9 + *(int *)(iVar10 + 0x10151a50) * 0xe0 + (*(int *)(iVar10 + 0x10151a54) + x1 + -2) * 2);
						if (0 < sVar2) {
							*(undefined *)((int)sVar2 * 0xe8 + 0x10151ad4) = 0xff;
						}
						sVar2 = *(short *)(iVar9 + (*(int *)(iVar10 + 0x10151a50) + 1) * 0xe0 + (*(int *)(iVar10 + 0x10151a54) + x1 + -2) * 2);
						if (0 < sVar2) {
							*(undefined *)((int)sVar2 * 0xe8 + 0x10151ad4) = 0xff;
						}
						sVar2 = *(short *)(iVar9 + (*(int *)(iVar10 + 0x10151a50) + 2) * 0xe0 + (*(int *)(iVar10 + 0x10151a54) + x1 + -2) * 2);
						if (0 < sVar2) {
							*(undefined *)((int)sVar2 * 0xe8 + 0x10151ad4) = 0xff;
						}
						x1 = x1 + 1;
						lVar11 = lVar11 + -1;
					} while (lVar11 != 0);
				}
				M_StartAttack(i);
			} else {
				if ((mdir == 0) || (BVar8 = MAI_Path(i), BVar8 == 0)) {
					*(char *)(iVar10 + 0x10151a4c) = *(char *)(iVar10 + 0x10151a4c) + '\x01';
					if (8 < *(byte *)(iVar10 + 0x10151a4c)) {
						*(undefined *)(iVar10 + 0x10151a4c) = 5;
					}
					iVar9 = M_CallWalk(i, *(int *)(*(int *)(iVar9 + -0x77a8) + i * 0x55ec + 0x70));
					if (iVar9 == 0) {
						mdir = iVar7 - 1U & 7;
						iVar10 = 0;
						while ((iVar10 < 8 && (iVar9 == 0))) {
							mdir = mdir + 1 & 7;
							iVar9 = DirOK(i, mdir);
							iVar10 = iVar10 + 1;
						}
						if (iVar9 != 0) {
							M_WalkDir(i, mdir);
						}
					}
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MAI_SkelKing(int i)

{
	byte bVar1;
	byte bVar2;
	undefined4 uVar3;
	int _X;
	int _X_00;
	int mdir;
	int iVar4;
	int iVar5;
	int iVar6;
	BOOL BVar7;
	int iVar8;
	int iVar9;

	iVar8 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar8 = 0x100f8fd0;
		app_fatal("MAI_SkelKing: Invalid monster %d", i);
	}
	iVar9 = *(int *)(iVar8 + -0x7754) + i * 0xe8;
	if ((*(int *)(iVar9 + 4) == 0) && (*(char *)(iVar9 + 0xa4) != '\0')) {
		bVar1 = *(byte *)(iVar9 + 0x50);
		bVar2 = *(byte *)(iVar9 + 0x51);
		_X = *(int *)(iVar9 + 0x20) - (uint)bVar1;
		_X_00 = *(int *)(iVar9 + 0x24) - (uint)bVar2;
		mdir = GetDirection(*(int *)(iVar9 + 0x20), *(int *)(iVar9 + 0x24), *(int *)(iVar9 + 0xac), *(int *)(iVar9 + 0xb0));
		if (*(char *)(iVar9 + 0xa4) != -1) {
			MonstCheckDoors(i);
		}
		iVar4 = random('~', 100);
		iVar5 = abs(_X);
		if ((((iVar5 < 2) && (iVar5 = abs(_X_00), iVar5 < 2)) || (*(char *)(iVar9 + 0xa4) != -1)) || (*(char *)(_DAT_1012f1c8 + *(int *)(iVar9 + 0x20) * 0x70 + *(int *)(iVar9 + 0x24)) != *(char *)(_DAT_1012f1c8 + (uint)bVar1 * 0x70 + (uint)bVar2))) {
			*(undefined *)(iVar9 + 8) = 1;
		} else {
			if ((*(char *)(iVar9 + 8) == '\x04') || (((iVar5 = abs(_X), 2 < iVar5 || (iVar5 = abs(_X_00), 2 < iVar5)) && (iVar5 = random('\x7f', 4), iVar5 == 0)))) {
				if (*(char *)(iVar9 + 8) != '\x04') {
					*(undefined4 *)(iVar9 + 0xc) = 0;
					iVar5 = random(-0x80, 2);
					*(int *)(iVar9 + 0x10) = iVar5;
				}
				*(undefined *)(iVar9 + 8) = 4;
				iVar5 = abs(_X_00);
				iVar6 = abs(_X);
				if (iVar5 < iVar6) {
					iVar5 = abs(_X);
				} else {
					iVar5 = abs(_X_00);
				}
				iVar6 = *(int *)(iVar9 + 0xc);
				*(int *)(iVar9 + 0xc) = iVar6 + 1;
				if (((iVar6 < iVar5 << 1) || (BVar7 = DirOK(i, mdir), BVar7 == 0)) && (*(char *)(_DAT_1012f1c8 + *(int *)(iVar9 + 0x20) * 0x70 + *(int *)(iVar9 + 0x24)) == *(char *)(_DAT_1012f1c8 + (uint)bVar1 * 0x70 + (uint)bVar2))) {
					BVar7 = M_RoundWalk(i, mdir, (int *)(iVar9 + 0x10));
					if (BVar7 == 0) {
						iVar5 = random('}', 10);
						M_StartDelay(i, iVar5 + 10);
					}
				} else {
					*(undefined *)(iVar9 + 8) = 1;
				}
			}
		}
		if (*(char *)(iVar9 + 8) == '\x01') {
			if ((**(char **)(iVar8 + -0x77f0) == '\x01') && (((((iVar5 = abs(_X), 2 < iVar5 || (iVar5 = abs(_X_00), 2 < iVar5)) && (iVar4 < (int)((uint) * (byte *)(iVar9 + 0x9d) * 4 + 0x23))) || (iVar4 < 6)) && (BVar7 = LineClear(*(int *)(iVar9 + 0x20), *(int *)(iVar9 + 0x24), (uint)bVar1, (uint)bVar2), BVar7 != 0)))) {
				_X = *(int *)(iVar9 + 0x20) + *(int *)(*(int *)(iVar8 + -0x71ec) + mdir * 4);
				_X_00 = *(int *)(iVar9 + 0x24) + *(int *)(*(int *)(iVar8 + -0x71f0) + mdir * 4);
				BVar7 = PosOkMonst(i, _X, _X_00);
				if ((BVar7 != 0) && (**(int **)(iVar8 + -0x762c) < 200)) {
					M_SpawnSkel(_X, _X_00, mdir);
					M_StartSpStand(i, mdir);
				}
			} else {
				iVar8 = abs(_X);
				if ((iVar8 < 2) && (iVar8 = abs(_X_00), iVar8 < 2)) {
					if (iVar4 < (int)((uint) * (byte *)(iVar9 + 0x9d) + 0x14)) {
						*(int *)(iVar9 + 0x48) = mdir;
						M_StartAttack(i);
					}
				} else {
					iVar8 = random(-0x7f, 100);
					if ((iVar8 < (int)((uint) * (byte *)(iVar9 + 0x9d) + 0x19)) || (((*(int *)(iVar9 + 0x74) == 1 || (*(int *)(iVar9 + 0x74) - 2U < 2)) && ((*(int *)(iVar9 + 0x78) == 0 && (iVar8 < (int)((uint) * (byte *)(iVar9 + 0x9d) + 0x4b))))))) {
						M_CallWalk(i, mdir);
					} else {
						iVar8 = random(-0x7e, 10);
						M_StartDelay(i, iVar8 + 10);
					}
				}
			}
		}
		if (*(int *)(iVar9 + 4) == 0) {
			iVar8 = *(int *)(iVar9 + 0xe0) + mdir * 8;
			uVar3 = *(undefined4 *)(iVar8 + 0xc);
			*(undefined4 *)(iVar9 + 0x54) = *(undefined4 *)(iVar8 + 8);
			*(undefined4 *)(iVar9 + 0x58) = uVar3;
		}
	}
	return;
}

void MAI_Rhino(int i)

{
	byte bVar1;
	byte bVar2;
	undefined4 uVar3;
	int _X;
	int _X_00;
	int md;
	int iVar4;
	int iVar5;
	int iVar6;
	BOOL BVar7;
	int iVar8;
	int iVar9;
	int midam;
	int spllvl;

	iVar8 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar8 = 0x100f8fd0;
		app_fatal("MAI_Rhino: Invalid monster %d", i);
	}
	iVar9 = *(int *)(iVar8 + -0x7754) + i * 0xe8;
	if ((*(int *)(iVar9 + 4) == 0) && (*(char *)(iVar9 + 0xa4) != '\0')) {
		bVar1 = *(byte *)(iVar9 + 0x50);
		bVar2 = *(byte *)(iVar9 + 0x51);
		_X = *(int *)(iVar9 + 0x20) - (uint)bVar1;
		_X_00 = *(int *)(iVar9 + 0x24) - (uint)bVar2;
		md = GetDirection(*(int *)(iVar9 + 0x20), *(int *)(iVar9 + 0x24), *(int *)(iVar9 + 0xac), *(int *)(iVar9 + 0xb0));
		if (*(char *)(iVar9 + 0xa4) != -1) {
			MonstCheckDoors(i);
		}
		iVar4 = random(-0x7d, 100);
		iVar5 = abs(_X);
		if ((iVar5 < 2) && (iVar5 = abs(_X_00), iVar5 < 2)) {
			*(undefined *)(iVar9 + 8) = 1;
		} else {
			if ((*(char *)(iVar9 + 8) == '\x04') || (((iVar5 = abs(_X), 4 < iVar5 || (iVar5 = abs(_X_00), 4 < iVar5)) && (iVar5 = random(-0x7c, 4), iVar5 != 0)))) {
				if (*(char *)(iVar9 + 8) != '\x04') {
					*(undefined4 *)(iVar9 + 0xc) = 0;
					iVar5 = random(-0x7b, 2);
					*(int *)(iVar9 + 0x10) = iVar5;
				}
				*(undefined *)(iVar9 + 8) = 4;
				iVar5 = abs(_X_00);
				iVar6 = abs(_X);
				if (iVar5 < iVar6) {
					iVar5 = abs(_X);
				} else {
					iVar5 = abs(_X_00);
				}
				iVar6 = *(int *)(iVar9 + 0xc);
				*(int *)(iVar9 + 0xc) = iVar6 + 1;
				if ((iVar6 < iVar5 << 1) && (*(char *)(**(int **)(iVar8 + -0x7588) + *(int *)(iVar9 + 0x20) * 0x70 + *(int *)(iVar9 + 0x24)) == *(char *)(**(int **)(iVar8 + -0x7588) + (uint)bVar1 * 0x70 + (uint)bVar2))) {
					BVar7 = M_RoundWalk(i, md, (int *)(iVar9 + 0x10));
					if (BVar7 == 0) {
						iVar5 = random('}', 10);
						M_StartDelay(i, iVar5 + 10);
					}
				} else {
					*(undefined *)(iVar9 + 8) = 1;
				}
			}
		}
		if (*(char *)(iVar9 + 8) == '\x01') {
			iVar5 = abs(_X);
			if (((iVar5 < 5) && (iVar5 = abs(_X_00), iVar5 < 5)) || (((int)((uint) * (byte *)(iVar9 + 0x9d) * 2 + 0x2b) <= iVar4 || (BVar7 = LineClearF1(*(Clear **)(iVar8 + -0x70c4), i, *(int *)(iVar9 + 0x20), *(int *)(iVar9 + 0x24), (uint)bVar1, (uint)bVar2), BVar7 == 0)))) {
				iVar8 = abs(_X);
				if ((iVar8 < 2) && (iVar8 = abs(_X_00), iVar8 < 2)) {
					if (iVar4 < (int)((uint) * (byte *)(iVar9 + 0x9d) * 2 + 0x1c)) {
						*(int *)(iVar9 + 0x48) = md;
						M_StartAttack(i);
					}
				} else {
					_X = random(-0x7a, 100);
					iVar8 = (uint) * (byte *)(iVar9 + 0x9d) * 2;
					if ((_X < iVar8 + 0x21) || ((((*(int *)(iVar9 + 0x74) == 1 || (*(int *)(iVar9 + 0x74) - 2U < 2)) && (*(int *)(iVar9 + 0x78) == 0)) && (_X < iVar8 + 0x53)))) {
						M_CallWalk(i, md);
					} else {
						iVar8 = random(-0x79, 10);
						M_StartDelay(i, iVar8 + 10);
					}
				}
			} else {
				_X = AddMissile(*(int *)(iVar9 + 0x20), *(int *)(iVar9 + 0x24), (uint)bVar1, (uint)bVar2, md, 0x14,
				    (char)*(undefined4 *)(iVar9 + 0x4c), i, midam, spllvl);
				if (_X != -1) {
					if (*(int *)(*(int *)(iVar9 + 0xe4) + 0x14) != 0) {
						PlayEffect(i, 3);
					}
					*(short *)(**(int **)(iVar8 + -0x767c) + *(int *)(iVar9 + 0x20) * 0xe0 + *(int *)(iVar9 + 0x24) * 2) = -((short)i + 1);
					*(undefined4 *)(iVar9 + 4) = 0xe;
				}
			}
		}
		if (*(int *)(iVar9 + 4) == 0) {
			iVar8 = *(int *)(iVar9 + 0xe0) + *(int *)(iVar9 + 0x48) * 8;
			uVar3 = *(undefined4 *)(iVar8 + 0xc);
			*(undefined4 *)(iVar9 + 0x54) = *(undefined4 *)(iVar8 + 8);
			*(undefined4 *)(iVar9 + 0x58) = uVar3;
		}
	}
	return;
}

void MAI_Counselor(int i)

{
	byte bVar1;
	byte bVar2;
	char cVar3;
	int _X;
	int _X_00;
	int md;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	int iVar7;
	int iVar8;
	int midam;
	int spllvl;

	iVar7 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar7 = 0x100f8fd0;
		app_fatal("MAI_Counselor: Invalid monster %d", i);
	}
	iVar8 = i * 0xe8;
	if ((*(int *)(iVar8 + 0x10151a34) == 0) && (*(char *)(iVar8 + 0x10151ad4) != '\0')) {
		bVar1 = *(byte *)(iVar8 + 0x10151a80);
		bVar2 = *(byte *)(iVar8 + 0x10151a81);
		_X = *(int *)(iVar8 + 0x10151a50) - (uint)bVar1;
		_X_00 = *(int *)(iVar8 + 0x10151a54) - (uint)bVar2;
		md = GetDirection(*(int *)(iVar8 + 0x10151a50), *(int *)(iVar8 + 0x10151a54), *(int *)(iVar8 + 0x10151adc),
		    *(int *)(iVar8 + 0x10151ae0));
		if (*(char *)(iVar8 + 0x10151ad4) != -1) {
			MonstCheckDoors(i);
		}
		iVar4 = random('y', 100);
		cVar3 = *(char *)(iVar8 + 0x10151a38);
		if (cVar3 == '\x02') {
			_X = *(int *)(iVar8 + 0x10151a3c);
			*(int *)(iVar8 + 0x10151a3c) = _X + 1;
			if (_X < 4) {
				M_CallWalk(i, *(int *)(*(int *)(iVar7 + -0x7104) + md * 4));
			} else {
				*(undefined *)(iVar8 + 0x10151a38) = 1;
				M_StartFadein(i, md, 1);
			}
		} else {
			if (cVar3 == '\x04') {
				iVar4 = abs(_X_00);
				iVar5 = abs(_X);
				if (iVar4 < iVar5) {
					iVar4 = abs(_X);
				} else {
					iVar4 = abs(_X_00);
				}
				_X = abs(_X);
				if ((((_X < 2) && (_X = abs(_X_00), _X < 2)) || (*(char *)(iVar8 + 0x10151ad4) != -1)) || (*(char *)(**(int **)(iVar7 + -0x7588) + *(int *)(iVar8 + 0x10151a50) * 0x70 + *(int *)(iVar8 + 0x10151a54)) != *(char *)(**(int **)(iVar7 + -0x7588) + (uint)bVar1 * 0x70 + (uint)bVar2))) {
					*(undefined *)(iVar8 + 0x10151a38) = 1;
					M_StartFadein(i, md, 1);
				} else {
					iVar7 = *(int *)(iVar8 + 0x10151a3c);
					*(int *)(iVar8 + 0x10151a3c) = iVar7 + 1;
					if ((iVar7 < iVar4 << 1) || (BVar6 = DirOK(i, md), BVar6 == 0)) {
						M_RoundWalk(i, md, (int *)(iVar8 + 0x10151a40));
					} else {
						*(undefined *)(iVar8 + 0x10151a38) = 1;
						M_StartFadein(i, md, 1);
					}
				}
			} else {
				if (cVar3 == '\x01') {
					_X = abs(_X);
					if ((_X < 2) && (_X = abs(_X_00), _X < 2)) {
						*(int *)(iVar8 + 0x10151a78) = md;
						if (*(int *)(iVar8 + 0x10151ac8) < *(int *)(iVar8 + 0x10151ac4) >> 1) {
							*(undefined *)(iVar8 + 0x10151a38) = 2;
							*(undefined4 *)(iVar8 + 0x10151a3c) = 0;
							M_StartFadeout(i, md, 0);
						} else {
							if ((*(int *)(iVar8 + 0x10151aa4) == 0xd) || (iVar7 = random('i', 100), iVar7 < (int)((uint) * (byte *)(iVar8 + 0x10151acd) * 2 + 0x14))) {
								M_StartRAttack(i, -1, 0);
								AddMissile(*(int *)(iVar8 + 0x10151a50), *(int *)(iVar8 + 0x10151a54), 0, 0,
								    *(int *)(iVar8 + 0x10151a78), 0xb, '\x01', i, midam, spllvl);
								AddMissile(*(int *)(iVar8 + 0x10151a50), *(int *)(iVar8 + 0x10151a54), 0, 0,
								    *(int *)(iVar8 + 0x10151a78), 0xc, '\x01', i, midam, spllvl);
							} else {
								iVar7 = random('i', 10);
								M_StartDelay(i, iVar7 + 10 + (uint) * (byte *)(iVar8 + 0x10151acd) * -2);
							}
						}
					} else {
						if ((iVar4 < (int)((uint) * (byte *)(iVar8 + 0x10151acd) * 5 + 0x32)) && (BVar6 = LineClear(*(int *)(iVar8 + 0x10151a50), *(int *)(iVar8 + 0x10151a54), (uint)bVar1, (uint)bVar2), BVar6 != 0)) {
							_X = random(
							    'M', ((uint) * (byte *)(iVar8 + 0x10151afa) - (uint) * (byte *)(iVar8 + 0x10151af9)) + 1);
							M_StartRAttack(i, (uint) * (byte *)(iVar7 + -0x4d90 + (uint) * (byte *)(iVar8 + 0x10151acd)),
							    (uint) * (byte *)(iVar8 + 0x10151af9) + _X);
						} else {
							iVar7 = random('|', 100);
							if (iVar7 < 0x1e) {
								*(undefined *)(iVar8 + 0x10151a38) = 4;
								*(undefined4 *)(iVar8 + 0x10151a3c) = 0;
								M_StartFadeout(i, md, 0);
							} else {
								iVar7 = random('i', 10);
								M_StartDelay(i, iVar7 + 10 + (uint) * (byte *)(iVar8 + 0x10151acd) * -2);
							}
						}
					}
				}
			}
		}
		if (*(int *)(iVar8 + 0x10151a34) == 0) {
			iVar7 = random('}', 10);
			M_StartDelay(i, iVar7 + 5);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MAI_Garbud(int i)

{
	int iVar1;
	int iVar2;
	undefined4 uVar3;
	int iVar4;
	BOOL BVar5;
	int iVar6;
	int iVar7;

	if (199 < (uint)i) {
		app_fatal("MAI_Garbud: Invalid monster %d", i);
	}
	iVar7 = i * 0xe8;
	if (*(int *)(iVar7 + 0x10151a34) == 0) {
		iVar6 = *(int *)(iVar7 + 0x10151a50);
		iVar1 = *(int *)(iVar7 + 0x10151a54);
		iVar4 = M_GetDir(i);
		iVar2 = *(int *)(iVar7 + 0x10151b04);
		if (iVar2 < 0x93) {
			if ((0x8f < iVar2) && ((*(byte *)(_DAT_1012f1bc + iVar6 * 0x70 + iVar1) & 2) == 0)) {
				if (*(char *)(iVar7 + 0x10151a38) == '\a') {
					*(int *)(iVar7 + 0x10151b04) = iVar2 + 1;
					*(undefined *)(iVar7 + 0x10151a38) = 6;
				}
			}
		}
		if (((((*(byte *)(_DAT_1012f1bc + iVar6 * 0x70 + iVar1) & 2) != 0) && (*(int *)(iVar7 + 0x10151b04) == 0x93)) && (BVar5 = effect_is_playing(0x34a), BVar5 == 0)) && (*(char *)(iVar7 + 0x10151a38) == '\a')) {
			*(undefined *)(iVar7 + 0x10151a38) = 1;
			*(undefined *)(iVar7 + 0x10151ad4) = 0xff;
			*(undefined4 *)(iVar7 + 0x10151b04) = 0;
		}
		if ((*(char *)(iVar7 + 0x10151a38) == '\x01') || (*(char *)(iVar7 + 0x10151a38) == '\x04')) {
			MAI_Round(i, 1);
		}
		*(int *)(iVar7 + 0x10151a78) = iVar4;
		if (*(int *)(iVar7 + 0x10151a34) == 0) {
			iVar6 = *(int *)(iVar7 + 0x10151b10) + iVar4 * 8;
			uVar3 = *(undefined4 *)(iVar6 + 0xc);
			*(undefined4 *)(iVar7 + 0x10151a84) = *(undefined4 *)(iVar6 + 8);
			*(undefined4 *)(iVar7 + 0x10151a88) = uVar3;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MAI_Zhar(int i)

{
	char cVar1;
	undefined4 uVar2;
	int iVar3;
	int _X;
	int _X_00;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	int iVar7;

	if (199 < (uint)i) {
		app_fatal("MAI_Zhar: Invalid monster %d", i);
	}
	iVar7 = i * 0xe8;
	if (*(int *)(iVar7 + 0x10151a34) == 0) {
		_X = *(int *)(iVar7 + 0x10151a50);
		_X_00 = *(int *)(iVar7 + 0x10151a54);
		iVar3 = M_GetDir(i);
		if ((*(int *)(iVar7 + 0x10151b04) == 0x94) && ((*(byte *)(_DAT_1012f1bc + _X * 0x70 + _X_00) & 2) == 0)) {
			if (*(char *)(iVar7 + 0x10151a38) == '\a') {
				*(undefined4 *)(iVar7 + 0x10151b04) = 0x95;
				*(undefined *)(iVar7 + 0x10151a38) = 6;
			}
		}
		if ((*(byte *)(_DAT_1012f1bc + _X * 0x70 + _X_00) & 2) != 0) {
			_X = *(int *)(iVar7 + 0x10151a54) - (uint) * (byte *)(iVar7 + 0x10151a81);
			_X_00 = *(int *)(iVar7 + 0x10151a50) - (uint) * (byte *)(iVar7 + 0x10151a80);
			iVar4 = abs(_X);
			iVar5 = abs(_X_00);
			if (iVar4 < iVar5) {
				abs(_X_00);
			} else {
				abs(_X);
			}
			if (((*(int *)(iVar7 + 0x10151b04) == 0x95) && (BVar6 = effect_is_playing(0x358), BVar6 == 0)) && (*(char *)(iVar7 + 0x10151a38) == '\a')) {
				*(undefined *)(iVar7 + 0x10151a38) = 1;
				*(undefined *)(iVar7 + 0x10151ad4) = 0xff;
				*(undefined4 *)(iVar7 + 0x10151b04) = 0;
			}
		}
		cVar1 = *(char *)(iVar7 + 0x10151a38);
		if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x04')) {
			MAI_Counselor(i);
		}
		*(int *)(iVar7 + 0x10151a78) = iVar3;
		if (*(int *)(iVar7 + 0x10151a34) == 0) {
			_X = *(int *)(iVar7 + 0x10151b10) + iVar3 * 8;
			uVar2 = *(undefined4 *)(_X + 0xc);
			*(undefined4 *)(iVar7 + 0x10151a84) = *(undefined4 *)(_X + 8);
			*(undefined4 *)(iVar7 + 0x10151a88) = uVar2;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MAI_SnotSpil(int i)

{
	int iVar1;
	int iVar2;
	undefined4 uVar3;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	int iVar7;

	iVar4 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar4 = 0x100f8fd0;
		app_fatal("MAI_SnotSpil: Invalid monster %d", i);
	}
	iVar7 = i * 0xe8;
	if (*(int *)(iVar7 + 0x10151a34) == 0) {
		iVar1 = *(int *)(iVar7 + 0x10151a50);
		iVar2 = *(int *)(iVar7 + 0x10151a54);
		iVar5 = M_GetDir(i);
		if (((*(int *)(iVar7 + 0x10151b04) == 0x14) && ((*(byte *)(_DAT_1012f1bc + iVar1 * 0x70 + iVar2) & 2) == 0)) && (*(char *)(iVar7 + 0x10151a38) == '\a')) {
			*(undefined4 *)(iVar7 + 0x10151b04) = 0x15;
			*(undefined *)(iVar7 + 0x10151a38) = 6;
		}
		if (*(int *)(iVar7 + 0x10151b04) == 0x15) {
			if (quests[7]._qvar1 == '\x03') {
				*(undefined4 *)(iVar7 + 0x10151b04) = 0;
				*(undefined *)(iVar7 + 0x10151a38) = 1;
			}
		}
		if ((*(byte *)(_DAT_1012f1bc + iVar1 * 0x70 + iVar2) & 2) != 0) {
			if (((*(int *)(iVar7 + 0x10151b04) == 0x16) && (BVar6 = effect_is_playing(0x354), BVar6 == 0)) && (*(char *)(iVar7 + 0x10151a38) == '\a')) {
				ObjChangeMap(**(int **)(iVar4 + -0x754c), **(int **)(iVar4 + -0x7550),
				    **(int **)(iVar4 + -0x754c) + **(int **)(iVar4 + -0x7554) + 1,
				    **(int **)(iVar4 + -0x7550) + **(int **)(iVar4 + -0x7558) + 1);
				quests[7]._qvar1 = '\x03';
				RedoPlayerVision();
				*(undefined *)(iVar7 + 0x10151a38) = 1;
				*(undefined *)(iVar7 + 0x10151ad4) = 0xff;
				*(undefined4 *)(iVar7 + 0x10151b04) = 0;
			}
			if ((quests[7]._qvar1 == '\x03') && ((*(char *)(iVar7 + 0x10151a38) == '\x01' || (*(char *)(iVar7 + 0x10151a38) == '\x05')))) {
				MAI_Fallen(i);
			}
		}
		*(int *)(iVar7 + 0x10151a78) = iVar5;
		if (*(int *)(iVar7 + 0x10151a34) == 0) {
			iVar4 = *(int *)(iVar7 + 0x10151b10) + iVar5 * 8;
			uVar3 = *(undefined4 *)(iVar4 + 0xc);
			*(undefined4 *)(iVar7 + 0x10151a84) = *(undefined4 *)(iVar4 + 8);
			*(undefined4 *)(iVar7 + 0x10151a88) = uVar3;
		}
	}
	return;
}

void MAI_Lazurus(int i)

{
	char cVar1;
	int iVar2;
	undefined4 uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	BOOL BVar7;
	int iVar8;

	iVar5 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar5 = 0x100f8fd0;
		app_fatal("MAI_Lazurus: Invalid monster %d", i);
	}
	iVar8 = i * 0xe8;
	if (*(int *)(iVar8 + 0x10151a34) == 0) {
		iVar4 = *(int *)(iVar8 + 0x10151a50);
		iVar2 = *(int *)(iVar8 + 0x10151a54);
		iVar6 = M_GetDir(i);
		if ((*(byte *)(**(int **)(iVar5 + -0x779c) + iVar4 * 0x70 + iVar2) & 2) != 0) {
			if (gbMaxPlayers == '\x01') {
				if ((((*(int *)(iVar8 + 0x10151b04) == 0x23) && (*(char *)(iVar8 + 0x10151a38) == '\x06')) && (iVar4 = **(int **)(iVar5 + -0x77ac) * 0x55ec, *(int *)((int)plr + iVar4 + 0x38) == 0x23)) && (*(int *)((int)plr + iVar4 + 0x3c) == 0x2e)) {
					PlayInGameMovie(*(char **)(iVar5 + -0x5e70));
					*(undefined4 *)(iVar8 + 0x10151a34) = 0x11;
					quests[15]._qvar1 = '\x05';
				}
				if (((*(int *)(iVar8 + 0x10151b04) == 0x23) && (BVar7 = effect_is_playing(0x34f), BVar7 == 0)) && (*(char *)(iVar8 + 0x10151a38) == '\a')) {
					ObjChangeMapResync(1, 0x12, 0x14, 0x18);
					RedoPlayerVision();
					quests[15]._qvar1 = '\x06';
					*(undefined *)(iVar8 + 0x10151a38) = 1;
					*(undefined *)(iVar8 + 0x10151ad4) = 0xff;
					*(undefined4 *)(iVar8 + 0x10151b04) = 0;
				}
			}
			if (((gbMaxPlayers != '\x01') && (*(int *)(iVar8 + 0x10151b04) == 0x23)) && ((*(char *)(iVar8 + 0x10151a38) == '\x06' && (quests[15]._qvar1 < 4)))) {
				*(undefined4 *)(iVar8 + 0x10151a34) = 0x11;
			}
		}
		cVar1 = *(char *)(iVar8 + 0x10151a38);
		if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x04')) {
			*(undefined4 *)(iVar8 + 0x10151b04) = 0;
			MAI_Counselor(i);
		}
		*(int *)(iVar8 + 0x10151a78) = iVar6;
		if ((*(int *)(iVar8 + 0x10151a34) == 0) || (*(int *)(iVar8 + 0x10151a34) == 0x11)) {
			iVar5 = *(int *)(iVar8 + 0x10151b10) + iVar6 * 8;
			uVar3 = *(undefined4 *)(iVar5 + 0xc);
			*(undefined4 *)(iVar8 + 0x10151a84) = *(undefined4 *)(iVar5 + 8);
			*(undefined4 *)(iVar8 + 0x10151a88) = uVar3;
		}
	}
	return;
}

void MAI_Lazhelp(int i)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	undefined4 uVar4;
	int iVar5;
	int unaff_r28;
	int iVar6;

	iVar5 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar5 = 0x100f8fd0;
		app_fatal("MAI_Lazhelp: Invalid monster %d", i);
	}
	iVar6 = i * 0xe8;
	if (*(int *)(iVar6 + 0x10151a34) == 0) {
		iVar2 = *(int *)(iVar6 + 0x10151a50);
		iVar3 = *(int *)(iVar6 + 0x10151a54);
		unaff_r28 = M_GetDir(i);
		if ((*(byte *)(**(int **)(iVar5 + -0x779c) + iVar2 * 0x70 + iVar3) & 2) != 0) {
			bVar1 = **(char **)(iVar5 + -0x77f0) != '\x01';
			if (bVar1) {
				if (bVar1) {
					*(undefined *)(iVar6 + 0x10151a38) = 1;
				}
			} else {
				if (*(byte *)(*(int *)(iVar5 + -0x7604) + 0x177) < 6) {
					*(undefined *)(iVar6 + 0x10151a38) = 6;
				} else {
					*(undefined *)(iVar6 + 0x10151a38) = 1;
					*(undefined4 *)(iVar6 + 0x10151b04) = 0;
				}
			}
		}
		if (*(char *)(iVar6 + 0x10151a38) == '\x01') {
			MAI_Succ(i);
		}
		*(int *)(iVar6 + 0x10151a78) = unaff_r28;
	}
	if (*(int *)(iVar6 + 0x10151a34) == 0) {
		iVar5 = *(int *)(iVar6 + 0x10151b10) + unaff_r28 * 8;
		uVar4 = *(undefined4 *)(iVar5 + 0xc);
		*(undefined4 *)(iVar6 + 0x10151a84) = *(undefined4 *)(iVar5 + 8);
		*(undefined4 *)(iVar6 + 0x10151a88) = uVar4;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MAI_Lachdanan(int i)

{
	int iVar1;
	int iVar2;
	undefined4 uVar3;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	int iVar7;

	iVar4 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar4 = 0x100f8fd0;
		app_fatal("MAI_Lachdanan: Invalid monster %d", i);
	}
	iVar7 = i * 0xe8;
	if (*(int *)(iVar7 + 0x10151a34) == 0) {
		iVar1 = *(int *)(iVar7 + 0x10151a50);
		iVar2 = *(int *)(iVar7 + 0x10151a54);
		iVar5 = M_GetDir(i);
		if ((*(int *)(iVar7 + 0x10151b04) == 0x51) && ((*(byte *)(_DAT_1012f1bc + iVar1 * 0x70 + iVar2) & 2) == 0)) {
			if (*(char *)(iVar7 + 0x10151a38) == '\a') {
				*(undefined4 *)(iVar7 + 0x10151b04) = 0x52;
				*(undefined *)(iVar7 + 0x10151a38) = 6;
			}
		}
		if (((((*(byte *)(_DAT_1012f1bc + iVar1 * 0x70 + iVar2) & 2) != 0) && (*(int *)(iVar7 + 0x10151b04) == 0x53)) && (BVar6 = effect_is_playing(0x34e), BVar6 == 0)) && (*(char *)(iVar7 + 0x10151a38) == '\a')) {
			iVar4 = *(int *)(iVar4 + -0x7604);
			*(undefined4 *)(iVar7 + 0x10151b04) = 0;
			*(undefined *)(iVar4 + 0x62) = 3;
			M_StartKill(i, -1);
		}
		*(int *)(iVar7 + 0x10151a78) = iVar5;
		if (*(int *)(iVar7 + 0x10151a34) == 0) {
			iVar4 = *(int *)(iVar7 + 0x10151b10) + iVar5 * 8;
			uVar3 = *(undefined4 *)(iVar4 + 0xc);
			*(undefined4 *)(iVar7 + 0x10151a84) = *(undefined4 *)(iVar4 + 8);
			*(undefined4 *)(iVar7 + 0x10151a88) = uVar3;
		}
	}
	return;
}

void MAI_Warlord(int i)

{
	int iVar1;
	int iVar2;
	undefined4 uVar3;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	int iVar7;

	iVar4 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar4 = 0x100f8fd0;
		app_fatal("MAI_Warlord: Invalid monster %d", i);
	}
	iVar7 = i * 0xe8;
	if (*(int *)(iVar7 + 0x10151a34) == 0) {
		iVar1 = *(int *)(iVar7 + 0x10151a50);
		iVar2 = *(int *)(iVar7 + 0x10151a54);
		iVar5 = M_GetDir(i);
		if ((*(byte *)(**(int **)(iVar4 + -0x779c) + iVar1 * 0x70 + iVar2) & 2) != 0) {
			if ((*(int *)(iVar7 + 0x10151b04) == 0x6e) && (*(char *)(iVar7 + 0x10151a38) == '\x06')) {
				*(undefined4 *)(iVar7 + 0x10151a34) = 0x11;
			}
			if (((*(int *)(iVar7 + 0x10151b04) == 0x6e) && (BVar6 = effect_is_playing(0x355), BVar6 == 0)) && (*(char *)(iVar7 + 0x10151a38) == '\a')) {
				*(undefined *)(iVar7 + 0x10151a38) = 1;
				*(undefined *)(iVar7 + 0x10151ad4) = 0xff;
				*(undefined4 *)(iVar7 + 0x10151b04) = 0;
			}
		}
		if (*(char *)(iVar7 + 0x10151a38) == '\x01') {
			MAI_SkelSd(i);
		}
		*(int *)(iVar7 + 0x10151a78) = iVar5;
		if ((*(int *)(iVar7 + 0x10151a34) == 0) || (*(int *)(iVar7 + 0x10151a34) == 0x11)) {
			iVar4 = *(int *)(iVar7 + 0x10151b10) + iVar5 * 8;
			uVar3 = *(undefined4 *)(iVar4 + 0xc);
			*(undefined4 *)(iVar7 + 0x10151a84) = *(undefined4 *)(iVar4 + 8);
			*(undefined4 *)(iVar7 + 0x10151a88) = uVar3;
		}
	}
	return;
}

void DeleteMonsterList(void)

{
	int i;

	if (iRam10151aa0 != 0) {
		uRam10151a50 = 1;
		uRam10151a54 = 0;
		uRam10151a58 = 0;
		uRam10151a5c = 0;
		uRam10151a60 = 0;
		uRam10151a64 = 0;
		iRam10151aa0 = 0;
	}
	if (iRam10151b88 != 0) {
		uRam10151b38 = 1;
		uRam10151b3c = 0;
		uRam10151b40 = 0;
		uRam10151b44 = 0;
		uRam10151b48 = 0;
		uRam10151b4c = 0;
		iRam10151b88 = 0;
	}
	if (iRam10151c70 != 0) {
		uRam10151c20 = 1;
		uRam10151c24 = 0;
		uRam10151c28 = 0;
		uRam10151c2c = 0;
		uRam10151c30 = 0;
		uRam10151c34 = 0;
		iRam10151c70 = 0;
	}
	if (iRam10151d58 != 0) {
		uRam10151d08 = 1;
		uRam10151d0c = 0;
		uRam10151d10 = 0;
		uRam10151d14 = 0;
		uRam10151d18 = 0;
		uRam10151d1c = 0;
		iRam10151d58 = 0;
	}
	i = 4;
	while (i < nummonsters) {
		if (*(int *)(*(int *)(&DAT_10151708 + i * 4) * 0xe8 + 0x10151aa0) == 0) {
			i = i + 1;
		} else {
			DeleteMonster(i);
			i = 0;
		}
	}
	return;
}

// WARNING: Removing unreachable block (ram,0x10074860)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ProcessMonsters(void)

{
	char cVar1;
	int bActivate;
	int iVar2;
	undefined4 uVar3;
	ulonglong uVar4;
	int iVar5;
	int iVar6;
	BOOL BVar7;
	int *piVar8;
	int iVar9;
	uint local_6c;

	uVar4 = 0x100f8fd0;
	DeleteMonsterList();
	piVar8 = *(int **)((int)uVar4 + -0x7628);
	iVar9 = 0;
	while (true) {
		if (nummonsters <= iVar9) {
			DeleteMonsterList();
			return;
		}
		bActivate = *piVar8;
		iVar5 = bActivate * 0xe8;
		if (1 < (byte)gbMaxPlayers) {
			SetRndSeed(*(int *)(iVar5 + 0x10151ae8));
			iVar6 = GetRndSeed();
			*(int *)(iVar5 + 0x10151ae8) = iVar6;
		}
		if ((((*(uint *)(bActivate * 0xe8 + 0x10151ad0) & 8) == 0) && (iVar6 = *(int *)(iVar5 + 0x10151ac8), iVar6 < *(int *)(iVar5 + 0x10151ac4))) && (iVar6 >> 6 != 0)) {
			cVar1 = *(char *)(iVar5 + 0x10151af4);
			if ((int)cVar1 < 2) {
				*(int *)(iVar5 + 0x10151ac8) = iVar6 + (int)cVar1;
			} else {
				*(int *)(iVar5 + 0x10151ac8) = iVar6 + ((int)cVar1 >> 1);
			}
		}
		iVar6 = *(int *)(iVar5 + 0x10151a50);
		iVar2 = *(int *)(iVar5 + 0x10151a54);
		if ((((*(byte *)(_DAT_1012f1bc + iVar6 * 0x70 + iVar2) & 2) != 0) && (*(char *)(iVar5 + 0x10151ad4) == '\0')) && (**(char **)(iVar5 + 0x10151b10) == '3')) {
			PlaySFX(0x346);
		}
		if ((*(uint *)(iVar5 + 0x10151ad0) & 0x10) == 0) {
			if (3 < *(uint *)(iVar5 + 0x10151a7c)) {
				app_fatal("Illegal enemy player %d for monster \"%s\"", (ulonglong) * (uint *)(iVar5 + 0x10151a7c),
				    (ulonglong) * (uint *)(iVar5 + 0x10151b0c));
			}
			*(undefined *)(iVar5 + 0x10151a80) = (char)*(undefined4 *)((int)plr + *(int *)(iVar5 + 0x10151a7c) * 0x55ec + 0x40);
			*(undefined *)(iVar5 + 0x10151a81) = (char)*(undefined4 *)((int)plr + *(int *)(iVar5 + 0x10151a7c) * 0x55ec + 0x44);
			if ((*(byte *)(_DAT_1012f1bc + iVar6 * 0x70 + iVar2) & 2) == 0) {
				if ((*(char *)(iVar5 + 0x10151ad4) != '\0') && (*(char *)(iVar5 + 0x10151acc) != 'n')) {
					*(char *)(iVar5 + 0x10151ad4) = *(char *)(iVar5 + 0x10151ad4) + -1;
				}
			} else {
				*(undefined *)(iVar5 + 0x10151ad4) = 0xff;
				*(undefined4 *)(iVar5 + 0x10151adc) = *(undefined4 *)((int)plr + *(int *)(iVar5 + 0x10151a7c) * 0x55ec + 0x40);
				*(undefined4 *)(iVar5 + 0x10151ae0) = *(undefined4 *)((int)plr + *(int *)(iVar5 + 0x10151a7c) * 0x55ec + 0x44);
			}
		} else {
			if (199 < *(uint *)(iVar5 + 0x10151a7c)) {
				app_fatal("Illegal enemy monster %d for monster \"%s\"", (ulonglong) * (uint *)(iVar5 + 0x10151a7c),
				    (ulonglong) * (uint *)(iVar5 + 0x10151b0c));
			}
			uVar3 = *(undefined4 *)(*(int *)(iVar5 + 0x10151a7c) * 0xe8 + 0x10151a58);
			*(undefined4 *)(iVar5 + 0x10151adc) = uVar3;
			*(undefined *)(iVar5 + 0x10151a80) = (char)uVar3;
			uVar3 = *(undefined4 *)(*(int *)(iVar5 + 0x10151a7c) * 0xe8 + 0x10151a5c);
			*(undefined4 *)(iVar5 + 0x10151ae0) = uVar3;
			*(undefined *)(iVar5 + 0x10151a81) = (char)uVar3;
		}
		if ((*(uint *)(iVar5 + 0x10151ad0) & 0x100) == 0) {
			fnMenu(bActivate);
			uVar4 = (ulonglong)local_6c;
		} else {
			BVar7 = MAI_Path(bActivate);
			if (BVar7 == 0) {
				fnMenu(bActivate);
				uVar4 = (ulonglong)local_6c;
			}
		}
		if (*(uint *)(iVar5 + 0x10151a34) < 0x12)
			break;
		if (((*(int *)(iVar5 + 0x10151a34) != 0xf) && (*(int *)(iVar5 + 0x10151a90) = *(int *)(iVar5 + 0x10151a90) + 1, (*(uint *)(iVar5 + 0x10151ad0) & 4) == 0)) && (*(int *)(iVar5 + 0x10151a8c) <= *(int *)(iVar5 + 0x10151a90))) {
			*(undefined4 *)(iVar5 + 0x10151a90) = 0;
			if ((*(uint *)(iVar5 + 0x10151ad0) & 2) == 0) {
				*(int *)(iVar5 + 0x10151a98) = *(int *)(iVar5 + 0x10151a98) + 1;
				if (*(int *)(iVar5 + 0x10151a94) < *(int *)(iVar5 + 0x10151a98)) {
					*(undefined4 *)(iVar5 + 0x10151a98) = 1;
				}
			} else {
				*(int *)(iVar5 + 0x10151a98) = *(int *)(iVar5 + 0x10151a98) + -1;
				if (*(int *)(iVar5 + 0x10151a98) == 0) {
					*(undefined4 *)(iVar5 + 0x10151a98) = *(undefined4 *)(iVar5 + 0x10151a94);
				}
			}
		}
		piVar8 = piVar8 + 1;
		iVar9 = iVar9 + 1;
	}
	// WARNING: Could not recover jumptable at 0x10074740. Too many branches
	// WARNING: Treating indirect jump as call
	(**(code **)(*(int *)((int)uVar4 + -0x5e88) + *(uint *)(iVar5 + 0x10151a34) * 4))();
	return;
}

void FreeMonsters(void)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	CMonster *local_r25_128;
	CMonster *pCVar4;
	char *_animletter;

	iVar3 = 0;
	local_r25_128 = (CMonster *)((int)&Monsters[0].trans_file + 3);
	while (iVar3 < nummtypes) {
		iVar2 = 0;
		bVar1 = local_r25_128->mtype;
		pCVar4 = local_r25_128;
		_animletter = animletter;
		do {
			if ((*_animletter != 's') || (*(int *)((uint)bVar1 * 0x80 + 0x101081d4) != 0)) {
				MemFreeDbg((int **)pCVar4->Anims);
			}
			iVar2 = iVar2 + 1;
			pCVar4 = (CMonster *)(pCVar4->Anims[1].Data + 6);
			_animletter = _animletter + 1;
		} while (iVar2 < 6);
		local_r25_128 = (CMonster *)(local_r25_128[1].Anims[4].Data + 2);
		iVar3 = iVar3 + 1;
	}
	FreeMissiles2();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL DirOK(int i, int mdir)

{
	short sVar1;
	int iVar3;
	undefined8 uVar2;
	BOOL BVar4;
	int iVar5;
	uint uVar6;
	int y;
	short *psVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int x;
	int iVar12;

	iVar5 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar5 = 0x100f8fd0;
		app_fatal("DirOK: Invalid monster %d", i);
	}
	iVar12 = i * 0xe8;
	y = *(int *)(iVar12 + 0x10151a54) + *(int *)(*(int *)(iVar5 + -0x71f0) + mdir * 4);
	x = *(int *)(iVar12 + 0x10151a50) + *(int *)(*(int *)(iVar5 + -0x71ec) + mdir * 4);
	if (((y < 0x70) && (-1 < x)) && (x < 0x70)) {
		BVar4 = PosOkMonst(i, x, y);
		if (BVar4 == 0) {
			uVar6 = 0;
		} else {
			if (mdir == 6) {
				BVar4 = SolidLoc(x, y + 1);
				if (BVar4 != 0) {
					return 0;
				}
				if ((*(byte *)(_DAT_1012f1bc + x * 0x70 + y + 1) & 0x10) != 0) {
					return 0;
				}
			} else {
				if (mdir == 2) {
					BVar4 = SolidLoc(x + 1, y);
					if (BVar4 != 0) {
						return 0;
					}
					if ((*(byte *)(_DAT_1012f1bc + x * 0x70 + y + 0x70) & 0x10) != 0) {
						return 0;
					}
				} else {
					if (mdir == 4) {
						BVar4 = SolidLoc(x + 1, y);
						if (BVar4 != 0) {
							return 0;
						}
						BVar4 = SolidLoc(x, y + 1);
						if (BVar4 != 0) {
							return 0;
						}
					} else {
						if (mdir == 0) {
							BVar4 = SolidLoc(x + -1, y);
							if (BVar4 != 0) {
								return 0;
							}
							BVar4 = SolidLoc(x, y + -1);
							if (BVar4 != 0) {
								return 0;
							}
						}
					}
				}
			}
			if (*(char *)(iVar12 + 0x10151b09) == '\x01') {
				uVar6 = 0;
				iVar5 = abs(x - *(int *)((uint) * (byte *)(iVar12 + 0x10151b08) * 0xe8 + 0x10151a58));
				if ((iVar5 < 4) && (iVar5 = abs(y - *(int *)((uint) * (byte *)(iVar12 + 0x10151b08) * 0xe8 + 0x10151a5c)), iVar5 < 4)) {
					uVar6 = 1;
				}
			} else {
				if ((*(byte *)(iVar12 + 0x10151af0) == 0) || ((*(ushort *)(*(int *)(iVar5 + -0x708c) + (uint) * (byte *)(iVar12 + 0x10151af0) * 0x20 + -10) & 2) == 0)) {
					uVar6 = 1;
				} else {
					iVar10 = x + -3;
					iVar5 = **(int **)(iVar5 + -0x767c) + iVar10 * 0xe0;
					iVar9 = 0;
					while (iVar10 <= x + 3) {
						iVar11 = y + -3;
						iVar3 = (y + 4) - iVar11;
						psVar7 = (short *)(iVar5 + iVar11 * 2);
						if (iVar11 <= y + 3) {
							do {
								if (((-1 < iVar11) && (iVar11 < 0x70)) && ((-1 < iVar10 && (iVar10 < 0x70)))) {
									sVar1 = *psVar7;
									iVar8 = (int)sVar1;
									if (sVar1 < 0) {
										iVar8 = -(int)sVar1;
									}
									if (iVar8 != 0) {
										iVar8 = iVar8 + -1;
									}
									iVar8 = iVar8 * 0xe8;
									if ((((*(char *)(iVar8 + 0x10151b09) == '\x01') && (i == (uint) * (byte *)(iVar8 + 0x10151b08))) && (iVar10 == *(int *)(iVar8 + 0x10151a58))) && (iVar11 == *(int *)(iVar8 + 0x10151a5c))) {
										iVar9 = iVar9 + 1;
									}
								}
								psVar7 = psVar7 + 1;
								iVar11 = iVar11 + 1;
								iVar3 = iVar3 + -1;
							} while (iVar3 != 0);
						}
						iVar5 = iVar5 + 0xe0;
						iVar10 = iVar10 + 1;
					}
					uVar2 = countLeadingZeros((uint) * (byte *)(iVar12 + 0x10151b0a) - iVar9);
					uVar6 = (uint)uVar2 >> 5 & 0xff;
				}
			}
		}
	} else {
		uVar6 = 0;
	}
	return (BOOL)uVar6;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL PosOkMissile(int x, int y)

{
	undefined8 uVar1;
	undefined4 uVar2;

	uVar2 = 1;
	if (((&DAT_1012fb31)[(int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2)] == '\0') && ((*(byte *)(_DAT_1012f1bc + x * 0x70 + y) & 0x10) == 0)) {
		uVar2 = 0;
	}
	uVar1 = countLeadingZeros(uVar2);
	return (BOOL)((uint)uVar1 >> 5 & 0xff);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL CheckNoSolid(int x, int y)

{
	undefined8 uVar1;

	uVar1 = countLeadingZeros((uint)(byte)(&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + x * 0xe0 + y * 2)]);
	return (BOOL)((uint)uVar1 >> 5 & 0xff);
}

BOOL LineClearF(Clear *Clear, int x1, int y1, int x2, int y2)

{
	ulonglong uVar1;
	bool bVar2;
	bool bVar3;
	BOOL BVar4;
	int iVar6;
	int bActivate;
	ulonglong uVar5;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	int _X;
	longlong lVar10;
	int _X_00;
	longlong lVar11;
	longlong lVar12;
	int iVar13;

	lVar7 = (longlong)y2;
	lVar8 = (longlong)x2;
	lVar12 = (longlong)y1;
	lVar11 = (longlong)x1;
	lVar10 = lVar7 - lVar12;
	lVar9 = lVar8 - lVar11;
	bVar3 = false;
	_X_00 = (int)lVar10;
	iVar6 = abs(_X_00);
	_X = (int)lVar9;
	bActivate = abs(_X);
	if (iVar6 < bActivate) {
		if (_X < 0) {
			lVar9 = -lVar9;
			_X_00 = -_X_00;
			lVar11 = lVar8;
			lVar12 = lVar7;
			x2 = x1;
			y2 = y1;
		}
		iVar6 = (int)lVar9;
		if (_X_00 < 1) {
			uVar5 = (ulonglong)(uint)(_X_00 << 1);
			lVar9 = lVar9 + uVar5;
			lVar8 = -1;
		} else {
			uVar5 = (ulonglong)(uint)(_X_00 << 1);
			iVar6 = -iVar6;
			lVar9 = uVar5 - lVar9;
			lVar8 = 1;
		}
		while (true) {
			iVar13 = (int)lVar12;
			bActivate = (int)lVar11;
			if ((bVar3) || ((bActivate == x2 && (iVar13 == y2))))
				break;
			uVar1 = uVar5;
			if (((uint)lVar9 >> 0x1f) + (uint)(lVar9 == 0) == ((~(uint)lVar8 >> 0x1f) + 1 & 1)) {
				lVar12 = lVar12 + lVar8;
				uVar1 = (ulonglong)(uint)((_X_00 + iVar6) * 2);
			}
			lVar9 = lVar9 + uVar1;
			lVar11 = lVar11 + 1;
			bActivate = (int)lVar11;
			bVar3 = false;
			bVar2 = true;
			if ((bActivate == x1) && ((int)lVar12 == y1)) {
				bVar2 = false;
			}
			if ((bVar2) && (fnMenu(bActivate), bActivate == 0)) {
				bVar3 = true;
			}
		}
	} else {
		if (_X_00 < 0) {
			lVar10 = -lVar10;
			_X = -_X;
			lVar11 = lVar8;
			lVar12 = lVar7;
			x2 = x1;
			y2 = y1;
		}
		iVar6 = (int)lVar10;
		if (_X < 1) {
			uVar5 = (ulonglong)(uint)(_X << 1);
			lVar10 = lVar10 + uVar5;
			lVar8 = -1;
		} else {
			uVar5 = (ulonglong)(uint)(_X << 1);
			iVar6 = -iVar6;
			lVar10 = uVar5 - lVar10;
			lVar8 = 1;
		}
		while (true) {
			iVar13 = (int)lVar12;
			bActivate = (int)lVar11;
			if ((bVar3) || ((iVar13 == y2 && (bActivate == x2))))
				break;
			uVar1 = uVar5;
			if (((uint)lVar10 >> 0x1f) + (uint)(lVar10 == 0) == ((~(uint)lVar8 >> 0x1f) + 1 & 1)) {
				lVar11 = lVar11 + lVar8;
				uVar1 = (ulonglong)(uint)((_X + iVar6) * 2);
			}
			_X_00 = (int)lVar11;
			lVar10 = lVar10 + uVar1;
			lVar12 = lVar12 + 1;
			bVar3 = false;
			bVar2 = true;
			if (((int)lVar12 == y1) && (_X_00 == x1)) {
				bVar2 = false;
			}
			if ((bVar2) && (fnMenu(_X_00), _X_00 == 0)) {
				bVar3 = true;
			}
		}
	}
	BVar4 = 0;
	if ((bActivate == x2) && (iVar13 == y2)) {
		BVar4 = 1;
	}
	return BVar4;
}

BOOL LineClear(int x1, int y1, int x2, int y2)

{
	BOOL BVar1;

	BVar1 = LineClearF((Clear *)&PTR_PosOkMissile_100f4cc8, x1, y1, x2, y2);
	return BVar1;
}

BOOL LineClearF1(Clear *Clear, int monst, int x1, int y1, int x2, int y2)

{
	ulonglong uVar1;
	bool bVar2;
	bool bVar3;
	BOOL BVar4;
	int iVar6;
	int iVar7;
	ulonglong uVar5;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	int _X;
	longlong lVar11;
	int _X_00;
	longlong lVar12;
	longlong lVar13;
	int iVar14;

	lVar8 = (longlong)y2;
	lVar9 = (longlong)x2;
	lVar13 = (longlong)y1;
	lVar12 = (longlong)x1;
	lVar11 = lVar8 - lVar13;
	lVar10 = lVar9 - lVar12;
	bVar3 = false;
	_X_00 = (int)lVar11;
	iVar6 = abs(_X_00);
	_X = (int)lVar10;
	iVar7 = abs(_X);
	if (iVar6 < iVar7) {
		if (_X < 0) {
			lVar10 = -lVar10;
			_X_00 = -_X_00;
			lVar12 = lVar9;
			lVar13 = lVar8;
			x2 = x1;
			y2 = y1;
		}
		iVar6 = (int)lVar10;
		if (_X_00 < 1) {
			uVar5 = (ulonglong)(uint)(_X_00 << 1);
			lVar10 = lVar10 + uVar5;
			lVar9 = -1;
		} else {
			uVar5 = (ulonglong)(uint)(_X_00 << 1);
			iVar6 = -iVar6;
			lVar10 = uVar5 - lVar10;
			lVar9 = 1;
		}
		while (true) {
			iVar14 = (int)lVar13;
			iVar7 = (int)lVar12;
			if ((bVar3) || ((iVar7 == x2 && (iVar14 == y2))))
				break;
			uVar1 = uVar5;
			if (((uint)lVar10 >> 0x1f) + (uint)(lVar10 == 0) == ((~(uint)lVar9 >> 0x1f) + 1 & 1)) {
				lVar13 = lVar13 + lVar9;
				uVar1 = (ulonglong)(uint)((_X_00 + iVar6) * 2);
			}
			lVar10 = lVar10 + uVar1;
			lVar12 = lVar12 + 1;
			bVar3 = false;
			bVar2 = true;
			if (((int)lVar12 == x1) && ((int)lVar13 == y1)) {
				bVar2 = false;
			}
			if ((bVar2) && (iVar7 = monst, fnMenu(monst), iVar7 == 0)) {
				bVar3 = true;
			}
		}
	} else {
		if (_X_00 < 0) {
			lVar11 = -lVar11;
			_X = -_X;
			lVar12 = lVar9;
			lVar13 = lVar8;
			x2 = x1;
			y2 = y1;
		}
		iVar6 = (int)lVar11;
		if (_X < 1) {
			uVar5 = (ulonglong)(uint)(_X << 1);
			lVar11 = lVar11 + uVar5;
			lVar9 = -1;
		} else {
			uVar5 = (ulonglong)(uint)(_X << 1);
			iVar6 = -iVar6;
			lVar11 = uVar5 - lVar11;
			lVar9 = 1;
		}
		while (true) {
			iVar14 = (int)lVar13;
			iVar7 = (int)lVar12;
			if ((bVar3) || ((iVar14 == y2 && (iVar7 == x2))))
				break;
			uVar1 = uVar5;
			if (((uint)lVar11 >> 0x1f) + (uint)(lVar11 == 0) == ((~(uint)lVar9 >> 0x1f) + 1 & 1)) {
				lVar12 = lVar12 + lVar9;
				uVar1 = (ulonglong)(uint)((_X + iVar6) * 2);
			}
			lVar11 = lVar11 + uVar1;
			lVar13 = lVar13 + 1;
			bVar3 = false;
			bVar2 = true;
			if (((int)lVar13 == y1) && ((int)lVar12 == x1)) {
				bVar2 = false;
			}
			if ((bVar2) && (_X_00 = monst, fnMenu(monst), _X_00 == 0)) {
				bVar3 = true;
			}
		}
	}
	BVar4 = 0;
	if ((iVar7 == x2) && (iVar14 == y2)) {
		BVar4 = 1;
	}
	return BVar4;
}

void SyncMonsterAnim(int i)

{
	undefined4 uVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar2 = 0x100f8fd0;
		app_fatal("SyncMonsterAnim: Invalid monster %d", i);
	}
	i = i * 0xe8;
	*(int *)(i + 0x10151b10) = (int)Monsters + *(int *)(&DAT_10151a30 + i) * 0x208 + 0x147;
	*(undefined4 *)(i + 0x10151b14) = *(undefined4 *)((int)Monsters + *(int *)(&DAT_10151a30 + i) * 0x208 + 0x347);
	if (*(byte *)(i + 0x10151af0) == 0) {
		*(undefined4 *)(i + 0x10151b0c) = *(undefined4 *)(*(int *)(i + 0x10151b14) + 0x50);
	} else {
		*(undefined4 *)(i + 0x10151b0c) = *(undefined4 *)(*(int *)(iVar2 + -0x708c) + (uint) * (byte *)(i + 0x10151af0) * 0x20 + -0x1c);
	}
	if (*(uint *)(i + 0x10151a34) < 0x12) {
		// WARNING: Could not recover jumptable at 0x100753fc. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(*(int *)(iVar2 + -0x5e94) + *(uint *)(i + 0x10151a34) * 4))();
		return;
	}
	iVar2 = *(int *)(i + 0x10151b10) + *(int *)(i + 0x10151a78) * 8;
	uVar1 = *(undefined4 *)(iVar2 + 0xc);
	*(undefined4 *)(i + 0x10151a84) = *(undefined4 *)(iVar2 + 8);
	*(undefined4 *)(i + 0x10151a88) = uVar1;
	*(undefined4 *)(i + 0x10151a98) = 1;
	*(undefined4 *)(i + 0x10151a94) = *(undefined4 *)(*(int *)(i + 0x10151b10) + 0x48);
	return;
}

// WARNING: Removing unreachable block (ram,0x1007575c)
// WARNING: Removing unreachable block (ram,0x10075770)
// WARNING: Removing unreachable block (ram,0x10075784)
// WARNING: Removing unreachable block (ram,0x10075790)

void M_FallenFear(int x, int y)

{
	ulonglong uVar1;
	int iVar2;
	int *piVar3;

	iVar2 = 0;
	piVar3 = (int *)&DAT_10151708;
	while (true) {
		if (nummonsters <= iVar2) {
			return;
		}
		uVar1 = (ulonglong) * *(byte **)(*piVar3 * 0xe8 + 0x10151b10) - 4;
		if ((uVar1 & 0xffffffff) < 0xc)
			break;
		piVar3 = piVar3 + 1;
		iVar2 = iVar2 + 1;
	}
	// WARNING: Could not recover jumptable at 0x10075720. Too many branches
	// WARNING: Treating indirect jump as call
	(*(code *)(&PTR_LAB_1010ca10)[(int)uVar1])();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PrintMonstHistory(int mt)

{
	ushort uVar1;
	int iVar2;
	size_t sVar3;
	int iVar4;
	undefined4 in_r6;
	int iVar5;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar6;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	iVar2 = 0x100f8fd0;
	piVar6 = (int *)(&DAT_101513d8 + mt * 4);
	wsprintf((int)&DAT_101282d4, "Total kills : %i", *piVar6, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8,
	    in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
	    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	AddPanelString(&DAT_101282d4, 1);
	if (0x1d < *piVar6) {
		iVar4 = *(int *)(mt * 0x80 + 0x10108220);
		iVar5 = *(int *)(mt * 0x80 + 0x10108224);
		if (**(char **)(iVar2 + -0x77f0) == '\x01') {
			iVar4 = iVar4 >> 1;
			iVar5 = iVar5 >> 1;
		}
		if (iVar4 < 1) {
			iVar4 = 1;
		}
		if (iVar5 < 1) {
			iVar5 = 1;
		}
		if (_DAT_1012f31c == 1) {
			iVar4 = iVar4 * 3 + 1;
			iVar5 = iVar5 * 3 + 1;
		}
		if (_DAT_1012f31c == 2) {
			iVar4 = iVar4 * 4 + 3;
			iVar5 = iVar5 * 4 + 3;
		}
		wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x5ea0), iVar4, iVar5, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
		AddPanelString(&DAT_101282d4, 1);
	}
	if (0xe < *piVar6) {
		if (_DAT_1012f31c == 2) {
			uVar1 = *(ushort *)(mt * 0x80 + 0x1010823e);
		} else {
			uVar1 = *(ushort *)(mt * 0x80 + 0x1010823c);
		}
		if ((uVar1 & 0x3f) == 0) {
			strcpy(&DAT_101282d4, *(char **)(iVar2 + -0x5ea4));
			AddPanelString(&DAT_101282d4, 1);
		} else {
			if ((uVar1 & 7) != 0) {
				strcpy(&DAT_101282d4, *(char **)(iVar2 + -0x5ea8));
				if ((uVar1 & 1) != 0) {
					strcat(&DAT_101282d4, "Magic ");
				}
				if ((uVar1 & 2) != 0) {
					strcat(&DAT_101282d4, "Fire ");
				}
				if ((uVar1 & 4) != 0) {
					strcat(&DAT_101282d4, "Lightning ");
				}
				sVar3 = strlen(&DAT_101282d4);
				*(undefined *)(sVar3 + 0x101282d3) = 0;
				AddPanelString(&DAT_101282d4, 1);
			}
			if ((uVar1 & 0x38) != 0) {
				strcpy(&DAT_101282d4, *(char **)(iVar2 + -0x5eb8));
				if ((uVar1 & 8) != 0) {
					strcat(&DAT_101282d4, "Magic ");
				}
				if ((uVar1 & 0x10) != 0) {
					strcat(&DAT_101282d4, "Fire ");
				}
				if ((uVar1 & 0x20) != 0) {
					strcat(&DAT_101282d4, "Lightning ");
				}
				sVar3 = strlen(&DAT_101282d4);
				*(undefined *)(sVar3 + 0x101282d3) = 0;
				AddPanelString(&DAT_101282d4, 1);
			}
		}
	}
	**(undefined4 **)(iVar2 + -0x76cc) = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PrintUniqueHistory(void)

{
	ushort uVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	uVar1 = *(ushort *)(_DAT_101285f8 * 0xe8 + 0x10151b00);
	if ((uVar1 & 0x3f) == 0) {
		strcpy(&DAT_101282d4, "No resistances");
		AddPanelString(&DAT_101282d4, 1);
		strcpy(&DAT_101282d4, "No Immunities");
		AddPanelString(&DAT_101282d4, 1);
	} else {
		if ((uVar1 & 7) == 0) {
			iVar2 = 0x100f8fd0;
			strcpy(&DAT_101282d4, "No resistances");
		} else {
			iVar2 = 0x100f8fd0;
			strcpy(&DAT_101282d4, "Some Magic Resistances");
		}
		AddPanelString(&DAT_101282d4, 1);
		if ((uVar1 & 0x38) == 0) {
			strcpy(&DAT_101282d4, "No Immunities");
		} else {
			strcpy(&DAT_101282d4, *(char **)(iVar2 + -0x5ec8));
		}
		AddPanelString(&DAT_101282d4, 1);
	}
	**(undefined4 **)(iVar2 + -0x76cc) = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MissToMonst(int i, int x, int y)

{
	byte bVar1;
	char cVar2;
	short sVar3;
	uint i_00;
	int iVar4;
	int iVar5;
	int x_00;
	BOOL BVar6;
	longlong lVar7;
	int pnum;
	int y_00;
	int iVar8;

	x_00 = 0x100f8fd0;
	if (0x7c < (uint)i) {
		x_00 = 0x100f8fd0;
		app_fatal("MissToMonst: Invalid missile %d", i);
	}
	pnum = *(int *)(x_00 + -0x7664) + i * 0xb4;
	i_00 = *(uint *)(pnum + 0x78);
	if (199 < i_00) {
		app_fatal(*(char **)(x_00 + -0x5ed0), (ulonglong)i_00);
	}
	x_00 = *(int *)(pnum + 4);
	y_00 = *(int *)(pnum + 8);
	*(short *)(_DAT_1012f1b4 + x * 0xe0 + y * 2) = (short)i_00 + 1;
	iVar5 = i_00 * 0xe8;
	*(undefined4 *)(iVar5 + 0x10151a78) = *(undefined4 *)(pnum + 0x2c);
	*(int *)(iVar5 + 0x10151a50) = x;
	*(int *)(iVar5 + 0x10151a54) = y;
	M_StartStand(i_00, *(int *)(iVar5 + 0x10151a78));
	if ((**(byte **)(iVar5 + 0x10151b10) < 0x48) || (0x4b < **(byte **)(iVar5 + 0x10151b10))) {
		if ((*(uint *)(iVar5 + 0x10151ad0) & 0x10) == 0) {
			M_StartHit(i_00, -1, 0);
		} else {
			M2MStartHit(i_00, -1, 0);
		}
	} else {
		M_StartFadein(i_00, *(int *)(iVar5 + 0x10151a78), 0);
	}
	if ((*(uint *)(iVar5 + 0x10151ad0) & 0x10) == 0) {
		cVar2 = *(char *)(_DAT_1012f1b8 + x_00 * 0x70 + y_00);
		lVar7 = (longlong)cVar2 + -1;
		if ((('\0' < cVar2) && (bVar1 = **(byte **)(iVar5 + 0x10151b10), bVar1 != 0x28)) && ((bVar1 < 0x48 || (0x4b < bVar1)))) {
			pnum = (int)lVar7;
			M_TryH2HHit(i_00, pnum, 500, (uint) * (byte *)(iVar5 + 0x10151afc), (uint) * (byte *)(iVar5 + 0x10151afd));
			if ((pnum == (int)*(char *)(_DAT_1012f1b8 + x_00 * 0x70 + y_00) + -1) && ((**(byte **)(iVar5 + 0x10151b10) < 0x59 || (0x5c < **(byte **)(iVar5 + 0x10151b10))))) {
				iVar4 = pnum * 0x55ec;
				iVar8 = ((PlayerStruct *)((int)plr + iVar4))->_pmode;
				if ((iVar8 != 7) && (iVar8 != 8)) {
					StartPlrHit(pnum, 0, 1);
				}
				iVar5 = *(int *)(iVar5 + 0x10151a78) * 4;
				x_00 = x_00 + *(int *)(&DAT_1010c890 + iVar5);
				y_00 = y_00 + *(int *)(&DAT_1010c8b0 + iVar5);
				BVar6 = PosOkPlayer(pnum, x_00, y_00);
				if (BVar6 != 0) {
					*(int *)((int)plr + iVar4 + 0x38) = x_00;
					*(int *)((int)plr + iVar4 + 0x3c) = y_00;
					FixPlayerLocation(pnum, *(int *)((int)plr + iVar4 + 0x70));
					FixPlrWalkTags(pnum);
					*(char *)(_DAT_1012f1b8 + x_00 * 0x70 + y_00) = (char)lVar7 + '\x01';
					SetPlayerOld(pnum);
				}
			}
		}
	} else {
		sVar3 = *(short *)(_DAT_1012f1b4 + x_00 * 0xe0 + y_00 * 2);
		if (((0 < sVar3) && (bVar1 = **(byte **)(iVar5 + 0x10151b10), bVar1 != 0x28)) && ((bVar1 < 0x48 || (0x4b < bVar1)))) {
			M_TryM2MHit(
			    i_00, (int)sVar3 + -1, 500, (uint) * (byte *)(iVar5 + 0x10151afc), (uint) * (byte *)(iVar5 + 0x10151afd));
			if ((**(byte **)(iVar5 + 0x10151b10) < 0x59) || (0x5c < **(byte **)(iVar5 + 0x10151b10))) {
				iVar8 = x_00 * 0xe0 + y_00 * 2;
				pnum = *(int *)(iVar5 + 0x10151a78) * 4;
				x_00 = x_00 + *(int *)(&DAT_1010c890 + pnum);
				y_00 = y_00 + *(int *)(&DAT_1010c8b0 + pnum);
				BVar6 = PosOkMonst((int)*(short *)(_DAT_1012f1b4 + iVar8) + -1, x_00, y_00);
				if (BVar6 != 0) {
					sVar3 = *(short *)(_DAT_1012f1b4 + iVar8);
					*(short *)(_DAT_1012f1b4 + x_00 * 0xe0 + y_00 * 2) = sVar3;
					pnum = ((int)sVar3 + -1) * 0xe8;
					*(undefined2 *)(_DAT_1012f1b4 + iVar8) = 0;
					*(int *)(pnum + 0x10151a50) = x_00;
					*(int *)(pnum + 0x10151a58) = x_00;
					*(int *)(pnum + 0x10151a54) = y_00;
					*(int *)(pnum + 0x10151a5c) = y_00;
				}
			}
		}
	}
	return;
}

BOOL PosOkMonst(int i, int x, int y)

{
	char cVar1;
	bool bVar2;
	bool bVar3;
	int iVar5;
	ulonglong uVar4;
	int iVar6;
	BOOL BVar7;
	int *piVar8;
	int iVar9;

	iVar6 = 0x100f8fd0;
	iVar9 = 0;
	bVar2 = false;
	bVar3 = false;
	BVar7 = SolidLoc(x, y);
	if (BVar7 == 0) {
		if (*(char *)(**(int **)(iVar6 + -0x7680) + x * 0x70 + y) == '\0') {
			bVar2 = true;
		}
	}
	if (bVar2) {
		if (*(short *)(**(int **)(iVar6 + -0x767c) + x * 0xe0 + y * 2) == 0) {
			iVar9 = 1;
		}
	}
	if (iVar9 != 0) {
		cVar1 = *(char *)(**(int **)(iVar6 + -0x7684) + x * 0x70 + y);
		if (cVar1 != '\0') {
			if (cVar1 < '\x01') {
				iVar5 = -((int)cVar1 + 1);
			} else {
				iVar5 = (int)cVar1 + -1;
			}
			if (*(int *)(*(int *)(iVar6 + -0x7688) + iVar5 * 0x78 + 0x38) != 0) {
				iVar9 = 0;
			}
		}
	}
	if ((iVar9 != 0) && (cVar1 = *(char *)(**(int **)(iVar6 + -0x7594) + x * 0x70 + y), cVar1 != '\0')) {
		if (-1 < i) {
			if ('\0' < cVar1) {
				if (*(int *)(&DAT_10149b74 + (int)cVar1 * 0xb4) == 5) {
					bVar3 = true;
				} else {
					piVar8 = *(int **)(iVar6 + -0x7660);
					uVar4 = (ulonglong) * *(uint **)(iVar6 + -0x7668);
					bVar2 = false;
					if (0 < (int)**(uint **)(iVar6 + -0x7668)) {
						do {
							bVar3 = bVar2;
							if (*(int *)(&DAT_10149b74 + *piVar8 * 0xb4) == 5) {
								bVar3 = true;
							}
							piVar8 = piVar8 + 1;
							uVar4 = uVar4 - 1;
							bVar2 = bVar3;
						} while (uVar4 != 0);
					}
				}
			}
			if (((bVar3) && ((*(ushort *)(i * 0xe8 + 0x10151b00) & 0x10) == 0)) || ((bVar3 && (**(char **)(i * 0xe8 + 0x10151b10) == 'n')))) {
				iVar9 = 0;
			}
		}
	}
	return (BOOL)iVar9;
}

BOOL PosOkMonst2(int i, int x, int y)

{
	char cVar1;
	bool bVar2;
	bool bVar3;
	undefined8 uVar4;
	int iVar6;
	ulonglong uVar5;
	int iVar7;
	BOOL BVar8;
	uint uVar9;
	int *piVar10;

	iVar7 = 0x100f8fd0;
	bVar2 = false;
	BVar8 = SolidLoc(x, y);
	uVar4 = countLeadingZeros(BVar8);
	uVar9 = (uint)uVar4 >> 5 & 0xff;
	if (uVar9 != 0) {
		cVar1 = *(char *)(**(int **)(iVar7 + -0x7684) + x * 0x70 + y);
		if (cVar1 != '\0') {
			if (cVar1 < '\x01') {
				iVar6 = -((int)cVar1 + 1);
			} else {
				iVar6 = (int)cVar1 + -1;
			}
			if (*(int *)(*(int *)(iVar7 + -0x7688) + iVar6 * 0x78 + 0x38) != 0) {
				uVar9 = 0;
			}
		}
	}
	if ((uVar9 != 0) && (cVar1 = *(char *)(**(int **)(iVar7 + -0x7594) + x * 0x70 + y), cVar1 != '\0')) {
		if (-1 < i) {
			if ('\0' < cVar1) {
				if (*(int *)(&DAT_10149b74 + (int)cVar1 * 0xb4) == 5) {
					bVar2 = true;
				} else {
					piVar10 = *(int **)(iVar7 + -0x7660);
					uVar5 = (ulonglong) * *(uint **)(iVar7 + -0x7668);
					bVar3 = false;
					if (0 < (int)**(uint **)(iVar7 + -0x7668)) {
						do {
							bVar2 = bVar3;
							if (*(int *)(&DAT_10149b74 + *piVar10 * 0xb4) == 5) {
								bVar2 = true;
							}
							piVar10 = piVar10 + 1;
							uVar5 = uVar5 - 1;
							bVar3 = bVar2;
						} while (uVar5 != 0);
					}
				}
			}
			if (((bVar2) && ((*(ushort *)(i * 0xe8 + 0x10151b00) & 0x10) == 0)) || ((bVar2 && (**(char **)(i * 0xe8 + 0x10151b10) == 'n')))) {
				uVar9 = 0;
			}
		}
	}
	return (BOOL)uVar9;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL PosOkMonst3(int i, int x, int y)

{
	char cVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar10;
	ulonglong uVar9;
	int iVar11;
	int iVar12;
	BOOL BVar13;
	int *piVar14;
	int iVar15;

	iVar11 = 0x100f8fd0;
	iVar15 = x * 0x70;
	iVar12 = 1;
	bVar8 = false;
	bVar7 = false;
	cVar1 = *(char *)(_DAT_1012f1ac + iVar15 + y);
	if (cVar1 != '\0') {
		if (cVar1 < '\x01') {
			iVar10 = -((int)cVar1 + 1);
		} else {
			iVar10 = (int)cVar1 + -1;
		}
		iVar2 = *(int *)(&DAT_1017e3d4 + iVar10 * 0x78);
		bVar7 = true;
		bVar6 = true;
		bVar5 = true;
		bVar4 = true;
		bVar3 = true;
		if ((iVar2 != 1) && (iVar2 != 2)) {
			bVar3 = false;
		}
		if ((!bVar3) && (iVar2 != 0x2a)) {
			bVar4 = false;
		}
		if ((!bVar4) && (iVar2 != 0x2b)) {
			bVar5 = false;
		}
		if ((!bVar5) && (iVar2 != 0x4a)) {
			bVar6 = false;
		}
		if ((!bVar6) && (iVar2 != 0x4b)) {
			bVar7 = false;
		}
		if ((*(int *)(iVar10 * 0x78 + 0x1017e40c) != 0) && (!bVar7)) {
			iVar12 = 0;
		}
	}
	if (iVar12 != 0) {
		iVar12 = 0;
		bVar4 = false;
		bVar3 = true;
		iVar11 = 0x100f8fd0;
		BVar13 = SolidLoc(x, y);
		if ((BVar13 != 0) && (!bVar7)) {
			bVar3 = false;
		}
		if ((bVar3) && (*(char *)(**(int **)(iVar11 + -0x7680) + iVar15 + y) == '\0')) {
			bVar4 = true;
		}
		if ((bVar4) && (*(short *)(**(int **)(iVar11 + -0x767c) + x * 0xe0 + y * 2) == 0)) {
			iVar12 = 1;
		}
	}
	if (((iVar12 != 0) && (cVar1 = *(char *)(**(int **)(iVar11 + -0x7594) + iVar15 + y), cVar1 != '\0')) && (-1 < i)) {
		if ('\0' < cVar1) {
			if (*(int *)(&DAT_10149b74 + (int)cVar1 * 0xb4) == 5) {
				bVar8 = true;
			} else {
				piVar14 = *(int **)(iVar11 + -0x7660);
				uVar9 = (ulonglong) * *(uint **)(iVar11 + -0x7668);
				bVar7 = false;
				if (0 < (int)**(uint **)(iVar11 + -0x7668)) {
					do {
						bVar8 = bVar7;
						if (*(int *)(&DAT_10149b74 + *piVar14 * 0xb4) == 5) {
							bVar8 = true;
						}
						piVar14 = piVar14 + 1;
						uVar9 = uVar9 - 1;
						bVar7 = bVar8;
					} while (uVar9 != 0);
				}
			}
		}
		if (((bVar8) && ((*(ushort *)(i * 0xe8 + 0x10151b00) & 0x10) == 0)) || ((bVar8 && (**(char **)(i * 0xe8 + 0x10151b10) == 'n')))) {
			iVar12 = 0;
		}
	}
	return (BOOL)iVar12;
}

BOOL IsSkel(int mt)

{
	bool bVar1;
	bool bVar2;
	BOOL BVar3;

	BVar3 = 1;
	bVar2 = true;
	bVar1 = false;
	if ((7 < mt) && (mt < 0xc)) {
		bVar1 = true;
	}
	if (!bVar1) {
		bVar1 = false;
		if ((0x13 < mt) && (mt < 0x18)) {
			bVar1 = true;
		}
		if (!bVar1) {
			bVar2 = false;
		}
	}
	if (!bVar2) {
		bVar1 = false;
		if ((0x17 < mt) && (mt < 0x1c)) {
			bVar1 = true;
		}
		if (!bVar1) {
			BVar3 = 0;
		}
	}
	return BVar3;
}

BOOL IsGoat(int mt)

{
	bool bVar1;
	BOOL BVar2;

	BVar2 = 1;
	bVar1 = false;
	if ((0x21 < mt) && (mt < 0x26)) {
		bVar1 = true;
	}
	if (!bVar1) {
		bVar1 = false;
		if ((0x29 < mt) && (mt < 0x2e)) {
			bVar1 = true;
		}
		if (!bVar1) {
			BVar2 = 0;
		}
	}
	return BVar2;
}

int M_SpawnSkel(int x, int y, int dir)

{
	int i;
	BOOL BVar1;
	int v;
	int iVar2;
	byte *pbVar3;
	byte *pbVar4;

	i = 0;
	pbVar3 = (byte *)((int)&Monsters[0].trans_file + 3);
	v = 0;
	pbVar4 = pbVar3;
	while (i < nummtypes) {
		BVar1 = IsSkel((uint)*pbVar4);
		if (BVar1 != 0) {
			v = v + 1;
		}
		pbVar4 = pbVar4 + 0x208;
		i = i + 1;
	}
	if (v == 0) {
		i = -1;
	} else {
		i = random(-0x78, v);
		iVar2 = 0;
		v = 0;
		while ((v < nummtypes && (iVar2 <= i))) {
			BVar1 = IsSkel((uint)*pbVar3);
			if (BVar1 != 0) {
				iVar2 = iVar2 + 1;
			}
			pbVar3 = pbVar3 + 0x208;
			v = v + 1;
		}
		i = AddMonster(x, y, dir, v + -1, 1);
		if (i != -1) {
			M_StartSpStand(i, dir);
		}
	}
	return i;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ActivateSpawn(int i, int x, int y, int dir)

{
	int iVar1;

	iVar1 = i * 0xe8;
	*(short *)(_DAT_1012f1b4 + x * 0xe0 + y * 2) = (short)i + 1;
	*(int *)(iVar1 + 0x10151a50) = x;
	*(int *)(iVar1 + 0x10151a54) = y;
	*(int *)(iVar1 + 0x10151a58) = x;
	*(int *)(iVar1 + 0x10151a5c) = y;
	*(int *)(iVar1 + 0x10151a60) = x;
	*(int *)(iVar1 + 0x10151a64) = y;
	M_StartSpStand(i, dir);
	return;
}

BOOL SpawnSkeleton(int ii, int x, int y)

{
	BOOL BVar1;
	int y_00;
	uint uVar2;
	int x_00;
	undefined8 unaff_r22;
	uint uVar3;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	uint *puVar4;
	int y1;
	undefined8 unaff_r26;
	uint *puVar5;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	uint local_58[12];
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
	if (ii == -1) {
		BVar1 = 0;
	} else {
		BVar1 = PosOkMonst(-1, x, y);
		if (BVar1 == 0) {
			y_00 = y + -1;
			puVar4 = local_58;
			uVar3 = 0;
			while (y_00 <= y + 1) {
				x_00 = x + -1;
				puVar5 = puVar4;
				while (x_00 <= x + 1) {
					uVar2 = PosOkMonst(-1, x_00, y_00);
					*puVar5 = uVar2;
					x_00 = x_00 + 1;
					uVar2 = *puVar5;
					puVar5 = puVar5 + 3;
					uVar3 = uVar3 | uVar2;
				}
				puVar4 = puVar4 + 1;
				y_00 = y_00 + 1;
			}
			if (uVar3 == 0) {
				return 0;
			}
			y_00 = random(-0x77, 0xf);
			x_00 = 0;
			y_00 = y_00 + 1;
			y1 = 0;
			while (0 < y_00) {
				if (local_58[y1 + x_00 * 3] != 0) {
					y_00 = y_00 + -1;
				}
				if ((0 < y_00) && (x_00 = x_00 + 1, x_00 == 3)) {
					y1 = y1 + 1;
					x_00 = 0;
					if (y1 == 3) {
						y1 = 0;
					}
				}
			}
			x_00 = x_00 + x + -1;
			y1 = y1 + y + -1;
			y_00 = GetDirection(x_00, y1, x, y);
			ActivateSpawn(ii, x_00, y1, y_00);
		} else {
			y_00 = GetDirection(x, y, x, y);
			ActivateSpawn(ii, x, y, y_00);
		}
		BVar1 = 1;
	}
	return BVar1;
}

int PreSpawnSkeleton(void)

{
	int i;
	BOOL BVar1;
	int v;
	int iVar2;
	byte *pbVar3;
	byte *pbVar4;

	i = 0;
	pbVar3 = (byte *)((int)&Monsters[0].trans_file + 3);
	v = 0;
	pbVar4 = pbVar3;
	while (i < nummtypes) {
		BVar1 = IsSkel((uint)*pbVar4);
		if (BVar1 != 0) {
			v = v + 1;
		}
		pbVar4 = pbVar4 + 0x208;
		i = i + 1;
	}
	if (v == 0) {
		i = -1;
	} else {
		i = random(-0x78, v);
		iVar2 = 0;
		v = 0;
		while ((v < nummtypes && (iVar2 <= i))) {
			BVar1 = IsSkel((uint)*pbVar3);
			if (BVar1 != 0) {
				iVar2 = iVar2 + 1;
			}
			pbVar3 = pbVar3 + 0x208;
			v = v + 1;
		}
		i = AddMonster(0, 0, 0, v + -1, 0);
		if (i != -1) {
			M_StartStand(i, 0);
		}
	}
	return i;
}

void TalktoMonster(int i)

{
	int pnum;
	BOOL BVar1;
	ItemStruct *pIVar2;
	int iVar3;
	int local_18[6];

	pnum = 0x100f8fd0;
	if (199 < (uint)i) {
		pnum = 0x100f8fd0;
		app_fatal("TalktoMonster: Invalid monster %d", i);
	}
	iVar3 = *(int *)(pnum + -0x7754) + i * 0xe8;
	pnum = *(int *)(iVar3 + 0x4c);
	*(undefined4 *)(iVar3 + 4) = 0x11;
	if ((*(char *)(iVar3 + 0x9c) == '\x17') || (*(char *)(iVar3 + 0x9c) == '\x1e')) {
		BVar1 = QuestStatus(7);
		if ((BVar1 != 0) && ((quests[7]._qvar1 == '\x02' && (pIVar2 = PlrHasItem(pnum, 0xc, local_18), pIVar2 != (ItemStruct *)0x0)))) {
			RemoveInvItem(pnum, local_18[0]);
			quests[7]._qactive = '\x03';
			*(undefined4 *)(iVar3 + 0xd4) = 0x16;
			*(undefined *)(iVar3 + 8) = 6;
		}
		BVar1 = QuestStatus(4);
		if (((BVar1 != 0) && (0x50 < *(int *)(iVar3 + 0xd4))) && (pIVar2 = PlrHasItem(pnum, 0xf, local_18), pIVar2 != (ItemStruct *)0x0)) {
			RemoveInvItem(pnum, local_18[0]);
			*(undefined4 *)(iVar3 + 0xd4) = 0x53;
			*(undefined *)(iVar3 + 8) = 6;
		}
	}
	return;
}

void SpawnGolum(int i, int x, int y, int mi)

{
	int iVar1;
	int iVar2;
	uint uVar3;
	char cVar4;
	int iVar5;
	int iVar6;

	iVar5 = 0x100f8fd0;
	if (199 < (uint)i) {
		iVar5 = 0x100f8fd0;
		app_fatal("SpawnGolum: Invalid monster %d", i);
	}
	iVar1 = *(int *)(iVar5 + -0x7664);
	iVar6 = i * 0xe8;
	*(short *)(**(int **)(iVar5 + -0x767c) + x * 0xe0 + y * 2) = (short)i + 1;
	*(int *)(iVar6 + 0x10151a50) = x;
	*(int *)(iVar6 + 0x10151a54) = y;
	*(int *)(iVar6 + 0x10151a58) = x;
	*(int *)(iVar6 + 0x10151a5c) = y;
	*(int *)(iVar6 + 0x10151a60) = x;
	*(int *)(iVar6 + 0x10151a64) = y;
	*(undefined *)(iVar6 + 0x10151a4c) = 0;
	iVar1 = *(int *)(iVar1 + mi * 0xb4 + 0x30);
	iVar2 = *(int *)((int)plr + i * 0x55ec + 0x1ac);
	cVar4 = (char)(iVar1 << 1);
	uVar3 = iVar2 / 3 + (iVar2 >> 0x1f);
	*(int *)(iVar6 + 0x10151ac4) = iVar1 * 0x280 + (uVar3 + (uVar3 >> 0x1f)) * 2;
	*(undefined4 *)(iVar6 + 0x10151ac8) = *(undefined4 *)(iVar6 + 0x10151ac4);
	*(undefined *)(iVar6 + 0x10151afe) = 0x19;
	*(char *)(iVar6 + 0x10151af8) = (char)iVar1 + (char)(iVar1 << 2) + (char)((int)*(char *)((int)plr + i * 0x55ec + 0x1b4) << 1) + '(';
	*(char *)(iVar6 + 0x10151af9) = cVar4 + '\b';
	*(char *)(iVar6 + 0x10151afa) = cVar4 + '\x10';
	*(uint *)(iVar6 + 0x10151ad0) = *(uint *)(iVar6 + 0x10151ad0) | 0x20;
	M_StartSpStand(i, 0);
	M_Enemy(i);
	if (i == **(int **)(iVar5 + -0x77ac)) {
		NetSendCmdGolem((BYTE) * (int *)(iVar6 + 0x10151a50), (BYTE) * (int *)(iVar6 + 0x10151a54),
		    (BYTE) * (undefined4 *)(iVar6 + 0x10151a78), (BYTE) * (undefined4 *)(iVar6 + 0x10151a7c),
		    *(int *)(iVar6 + 0x10151ac8), **(BYTE **)(iVar5 + -0x77e4));
	}
	return;
}

BOOL CanTalkToMonst(int m)

{
	char cVar1;
	int iVar2;
	BOOL BVar3;

	iVar2 = 0x100f8fd0;
	if (199 < ((longlong)m & 0xffffffffU)) {
		iVar2 = 0x100f8fd0;
		app_fatal("CanTalkToMonst: Invalid monster %d", (longlong)m);
	}
	cVar1 = *(char *)(*(int *)(iVar2 + -0x7754) + m * 0xe8 + 8);
	if (cVar1 == '\x06') {
		BVar3 = 1;
	} else {
		if (cVar1 == '\a') {
			BVar3 = 1;
		} else {
			BVar3 = 0;
		}
	}
	return BVar3;
}

BOOL CheckMonsterHit(int m, BOOL *ret)

{
	BOOL BVar1;

	if (199 < (uint)m) {
		app_fatal("CheckMonsterHit: Invalid monster %d", m);
	}
	m = m * 0xe8;
	if (*(char *)(m + 0x10151acc) == '\f') {
		if ((*(uint *)(m + 0x10151ad0) & 4) != 0) {
			*(uint *)(m + 0x10151ad0) = *(uint *)(m + 0x10151ad0) & 0xfffffffb;
			*(undefined4 *)(m + 0x10151a34) = 7;
			*ret = 1;
			return 1;
		}
	}
	if (((**(byte **)(m + 0x10151b10) < 0x69) || (0x6c < **(byte **)(m + 0x10151b10))) || (*(char *)(m + 0x10151a38) == '\x01')) {
		BVar1 = 0;
	} else {
		*ret = 0;
		BVar1 = 1;
	}
	return BVar1;
}

int encode_enemy(int m)

{
	m = m * 0xe8;
	if ((*(uint *)(m + 0x10151ad0) & 0x10) != 0) {
		return *(int *)(m + 0x10151a7c) + 4;
	}
	return *(int *)(m + 0x10151a7c);
}

void decode_enemy(int m, int enemy)

{
	int iVar1;

	if ((uint)enemy < 4) {
		m = m * 0xe8;
		*(uint *)(m + 0x10151ad0) = *(uint *)(m + 0x10151ad0) & 0xffffffef;
		*(int *)(m + 0x10151a7c) = enemy;
		*(undefined *)(m + 0x10151a80) = (char)*(undefined4 *)((int)plr + enemy * 0x55ec + 0x40);
		*(undefined *)(m + 0x10151a81) = (char)*(undefined4 *)((int)plr + enemy * 0x55ec + 0x44);
		return;
	}
	m = m * 0xe8;
	iVar1 = (enemy + -4) * 0xe8;
	*(uint *)(m + 0x10151ad0) = *(uint *)(m + 0x10151ad0) | 0x10;
	*(int *)(m + 0x10151a7c) = enemy + -4;
	*(undefined *)(m + 0x10151a80) = (char)*(undefined4 *)(iVar1 + 0x10151a58);
	*(undefined *)(m + 0x10151a81) = (char)*(undefined4 *)(iVar1 + 0x10151a5c);
	return;
}
