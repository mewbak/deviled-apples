
void DrawSpellCel(int xp, int yp, BYTE *Trans, int nCel, int w)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	char cVar5;
	longlong lVar4;
	longlong lVar6;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	byte *pbVar7;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffffab;
	int local_28;
	byte *local_24;
	int local_20[3];
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
	cVar5 = LockMemFile(
	    (longlong)(int)Trans, (char)yp, (char)Trans, (char)nCel, (char)w, in_r8, in_r9, in_r10, in_stack_ffffffab);
	iVar2 = *(int *)(iVar3 + -0x7694);
	local_28 = **(int **)(iVar3 + -0x7804) + *(int *)(*(int *)(iVar3 + -0x7698) + yp * 4) + xp;
	lVar4 = BESwap_1003cdf8((longlong)cVar5, nCel, local_20);
	local_24 = (byte *)lVar4;
	pbVar7 = local_24 + local_20[0];
	lVar4 = (longlong)w;
	do {
		bVar1 = *local_24;
		lVar6 = (longlong)(char)bVar1;
		if (lVar6 < 0) {
			local_28 = local_28 - (int)(char)bVar1;
			local_24 = local_24 + 1;
		} else {
			lVar6 = -lVar6;
			local_24 = local_24 + 1;
			asm_Cel2DecDatOnly(&local_28, &local_24, iVar2, (int)(char)bVar1);
		}
		lVar4 = lVar4 + lVar6;
	} while (((int)lVar4 != 0) || (local_28 = (local_28 + -0x300) - w, lVar4 = (longlong)w, local_24 != pbVar7));
	UnlockMemFile((char)Trans);
	return;
}

void SetSpellTrans(char t)

{
	char cVar1;
	char cVar2;
	int iVar3;
	char cVar4;
	char cVar5;
	char cVar6;
	char cVar7;
	char cVar8;
	char cVar9;
	char *pcVar10;
	char cVar11;
	longlong lVar12;

	pcVar10 = &DAT_101281ac;
	if (t == '\0') {
		lVar12 = 4;
		cVar11 = '\0';
		do {
			*pcVar10 = cVar11;
			pcVar10[1] = cVar11 + '\x01';
			pcVar10[2] = cVar11 + '\x02';
			pcVar10[3] = cVar11 + '\x03';
			pcVar10[4] = cVar11 + '\x04';
			pcVar10[5] = cVar11 + '\x05';
			pcVar10[6] = cVar11 + '\x06';
			pcVar10[7] = cVar11 + '\a';
			pcVar10[8] = cVar11 + '\b';
			pcVar10[9] = cVar11 + '\t';
			pcVar10[10] = cVar11 + '\n';
			pcVar10[0xb] = cVar11 + '\v';
			pcVar10[0xc] = cVar11 + '\f';
			pcVar10[0xd] = cVar11 + '\r';
			pcVar10[0xe] = cVar11 + '\x0e';
			pcVar10[0xf] = cVar11 + '\x0f';
			cVar1 = cVar11 + '\x18';
			pcVar10[0x10] = cVar11 + '\x10';
			pcVar10[0x11] = cVar11 + '\x11';
			cVar9 = cVar11 + '\x19';
			pcVar10[0x12] = cVar11 + '\x12';
			cVar8 = cVar11 + '\x1a';
			pcVar10[0x13] = cVar11 + '\x13';
			cVar7 = cVar11 + '\x1b';
			pcVar10[0x14] = cVar11 + '\x14';
			cVar6 = cVar11 + '\x1c';
			pcVar10[0x15] = cVar11 + '\x15';
			cVar5 = cVar11 + '\x1d';
			pcVar10[0x16] = cVar11 + '\x16';
			cVar4 = cVar11 + '\x1e';
			pcVar10[0x17] = cVar11 + '\x17';
			cVar2 = cVar11 + '\x1f';
			cVar11 = cVar11 + ' ';
			pcVar10[0x18] = cVar1;
			pcVar10[0x19] = cVar9;
			pcVar10[0x1a] = cVar8;
			pcVar10[0x1b] = cVar7;
			pcVar10[0x1c] = cVar6;
			pcVar10[0x1d] = cVar5;
			pcVar10[0x1e] = cVar4;
			pcVar10[0x1f] = cVar2;
			pcVar10 = pcVar10 + 0x20;
			lVar12 = lVar12 + -1;
		} while (lVar12 != 0);
	}
	pcVar10 = (char *)0x1012822c;
	lVar12 = 4;
	cVar11 = -0x80;
	do {
		*pcVar10 = cVar11;
		pcVar10[1] = cVar11 + '\x01';
		pcVar10[2] = cVar11 + '\x02';
		pcVar10[3] = cVar11 + '\x03';
		pcVar10[4] = cVar11 + '\x04';
		pcVar10[5] = cVar11 + '\x05';
		pcVar10[6] = cVar11 + '\x06';
		pcVar10[7] = cVar11 + '\a';
		pcVar10[8] = cVar11 + '\b';
		pcVar10[9] = cVar11 + '\t';
		pcVar10[10] = cVar11 + '\n';
		pcVar10[0xb] = cVar11 + '\v';
		pcVar10[0xc] = cVar11 + '\f';
		pcVar10[0xd] = cVar11 + '\r';
		pcVar10[0xe] = cVar11 + '\x0e';
		pcVar10[0xf] = cVar11 + '\x0f';
		cVar1 = cVar11 + '\x18';
		pcVar10[0x10] = cVar11 + '\x10';
		pcVar10[0x11] = cVar11 + '\x11';
		cVar9 = cVar11 + '\x19';
		pcVar10[0x12] = cVar11 + '\x12';
		cVar8 = cVar11 + '\x1a';
		pcVar10[0x13] = cVar11 + '\x13';
		cVar7 = cVar11 + '\x1b';
		pcVar10[0x14] = cVar11 + '\x14';
		cVar6 = cVar11 + '\x1c';
		pcVar10[0x15] = cVar11 + '\x15';
		cVar5 = cVar11 + '\x1d';
		pcVar10[0x16] = cVar11 + '\x16';
		cVar4 = cVar11 + '\x1e';
		pcVar10[0x17] = cVar11 + '\x17';
		cVar2 = cVar11 + '\x1f';
		cVar11 = cVar11 + ' ';
		pcVar10[0x18] = cVar1;
		pcVar10[0x19] = cVar9;
		pcVar10[0x1a] = cVar8;
		pcVar10[0x1b] = cVar7;
		pcVar10[0x1c] = cVar6;
		pcVar10[0x1d] = cVar5;
		pcVar10[0x1e] = cVar4;
		pcVar10[0x1f] = cVar2;
		pcVar10 = pcVar10 + 0x20;
		lVar12 = lVar12 + -1;
	} while (lVar12 != 0);
	uRam101282ab = 0;
	if (t == '\x03') {
		uRam1012823c = 0xd1;
		uRam1012823d = 0xd3;
		uRam1012823e = 0xd5;
		uRam1012824c = 0xd0;
		uRam1012826c = 0xd0;
		uRam1012824d = 0xd1;
		uRam1012826d = 0xd1;
		uRam1012824e = 0xd2;
		uRam1012826e = 0xd2;
		uRam1012824f = 0xd3;
		uRam1012826f = 0xd3;
		uRam10128250 = 0xd4;
		uRam10128270 = 0xd4;
		uRam10128251 = 0xd5;
		uRam10128271 = 0xd5;
		uRam10128252 = 0xd6;
		uRam10128272 = 0xd6;
		uRam10128253 = 0xd7;
		uRam10128273 = 0xd7;
		uRam10128254 = 0xd8;
		uRam10128274 = 0xd8;
		uRam10128255 = 0xd9;
		uRam10128275 = 0xd9;
		uRam10128256 = 0xda;
		uRam10128276 = 0xda;
		uRam10128257 = 0xdb;
		uRam10128277 = 0xdb;
		uRam10128258 = 0xdc;
		uRam10128278 = 0xdc;
		uRam10128259 = 0xdd;
		uRam10128279 = 0xdd;
		uRam1012825a = 0xde;
		uRam1012827a = 0xde;
		uRam1012825b = 0xdf;
		uRam1012827b = 0xdf;
	} else {
		if (t < '\x03') {
			if (t == '\x01') {
				uRam1012823c = 0xb1;
				uRam1012823d = 0xb3;
				uRam1012823e = 0xb5;
				uRam1012824c = 0xb0;
				uRam1012826c = 0xb0;
				uRam1012827c = 0xb0;
				uRam1012824d = 0xb1;
				uRam1012826d = 0xb1;
				uRam1012827d = 0xb1;
				uRam1012824e = 0xb2;
				uRam1012826e = 0xb2;
				uRam1012827e = 0xb2;
				uRam1012824f = 0xb3;
				uRam1012826f = 0xb3;
				uRam1012827f = 0xb3;
				uRam10128250 = 0xb4;
				uRam10128270 = 0xb4;
				uRam10128280 = 0xb4;
				uRam10128251 = 0xb5;
				uRam10128271 = 0xb5;
				uRam10128281 = 0xb5;
				uRam10128252 = 0xb6;
				uRam10128272 = 0xb6;
				uRam10128282 = 0xb6;
				uRam10128253 = 0xb7;
				uRam10128273 = 0xb7;
				uRam10128283 = 0xb7;
				uRam10128254 = 0xb8;
				uRam10128274 = 0xb8;
				uRam10128284 = 0xb8;
				uRam10128255 = 0xb9;
				uRam10128275 = 0xb9;
				uRam10128285 = 0xb9;
				uRam10128256 = 0xba;
				uRam10128276 = 0xba;
				uRam10128286 = 0xba;
				uRam10128257 = 0xbb;
				uRam10128277 = 0xbb;
				uRam10128287 = 0xbb;
				uRam10128258 = 0xbc;
				uRam10128278 = 0xbc;
				uRam10128288 = 0xbc;
				uRam10128259 = 0xbd;
				uRam10128279 = 0xbd;
				uRam10128289 = 0xbd;
				uRam1012825a = 0xbe;
				uRam1012827a = 0xbe;
				uRam1012828a = 0xbe;
				uRam1012825b = 0xbf;
				uRam1012827b = 0xbf;
				uRam1012828b = 0xbf;
			} else {
				if ('\0' < t) {
					uRam1012823c = 0xa1;
					uRam1012823d = 0xa3;
					uRam1012823e = 0xa5;
					uRam1012826c = 0xa0;
					uRam1012827c = 0xa0;
					uRam1012826d = 0xa1;
					uRam1012827d = 0xa1;
					uRam1012826e = 0xa2;
					uRam1012827e = 0xa2;
					uRam1012826f = 0xa3;
					uRam1012827f = 0xa3;
					uRam10128270 = 0xa4;
					uRam10128280 = 0xa4;
					uRam10128271 = 0xa5;
					uRam10128281 = 0xa5;
					uRam10128272 = 0xa6;
					uRam10128282 = 0xa6;
					uRam10128273 = 0xa7;
					uRam10128283 = 0xa7;
					uRam10128274 = 0xa8;
					uRam10128284 = 0xa8;
					uRam10128275 = 0xa9;
					uRam10128285 = 0xa9;
					uRam10128276 = 0xaa;
					uRam10128286 = 0xaa;
					uRam10128277 = 0xab;
					uRam10128287 = 0xab;
					uRam10128278 = 0xac;
					uRam10128288 = 0xac;
					uRam10128279 = 0xad;
					uRam10128289 = 0xad;
					uRam1012827a = 0xae;
					uRam1012828a = 0xae;
					uRam1012827b = 0xaf;
					uRam1012828b = 0xaf;
				}
			}
		} else {
			if (t < '\x05') {
				uRam1012823c = 0xf1;
				uRam1012823d = 0xf3;
				uRam1012823e = 0xf5;
				uRam1012824c = 0xf0;
				uRam1012826c = 0xf0;
				uRam1012827c = 0xf0;
				uRam1012824d = 0xf1;
				uRam1012826d = 0xf1;
				uRam1012827d = 0xf1;
				uRam1012824e = 0xf2;
				uRam1012826e = 0xf2;
				uRam1012827e = 0xf2;
				uRam1012824f = 0xf3;
				uRam1012826f = 0xf3;
				uRam1012827f = 0xf3;
				uRam10128250 = 0xf4;
				uRam10128270 = 0xf4;
				uRam10128280 = 0xf4;
				uRam10128251 = 0xf5;
				uRam10128271 = 0xf5;
				uRam10128281 = 0xf5;
				uRam10128252 = 0xf6;
				uRam10128272 = 0xf6;
				uRam10128282 = 0xf6;
				uRam10128253 = 0xf7;
				uRam10128273 = 0xf7;
				uRam10128283 = 0xf7;
				iVar3 = 0x101282a4;
				lVar12 = 7;
				cVar11 = -8;
				do {
					*(char *)(iVar3 + -0x50) = cVar11;
					*(char *)(iVar3 + -0x30) = cVar11;
					*(char *)(iVar3 + -0x20) = cVar11;
					iVar3 = iVar3 + 1;
					lVar12 = lVar12 + -1;
					cVar11 = cVar11 + '\x01';
				} while (lVar12 != 0);
				uRam1012825b = 0;
				uRam1012827b = 0;
				uRam1012828b = 0;
			}
		}
	}
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void DrawSpell(void)

{
	char cVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	BOOL BVar5;
	char cVar6;
	char t;

	iVar4 = 0x100f8fd0;
	iVar3 = myplr * 0x55ec;
	t = *(char *)((int)plr + iVar3 + 0xb8);
	cVar6 = (char)*(undefined4 *)((int)plr + iVar3 + 0xb4);
	cVar1 = *(char *)((int)plr + iVar3 + 0x5570);
	cVar2 = *(char *)((int)plr + iVar3 + (int)cVar6 + 0xc1);
	if ((t == '\x01') && ((int)cVar6 != -1)) {
		iVar4 = 0x100f8fd0;
		BVar5 = CheckSpell(myplr, (int)cVar6, '\x01', 1);
		if (BVar5 == 0) {
			t = '\x04';
		}
		if ((int)cVar2 + (int)cVar1 < 1) {
			t = '\x04';
		}
	}
	if (((**(char **)(iVar4 + -0x77e4) == '\0') && (t != '\x04')) && (*(int *)(*(int *)(iVar4 + -0x769c) + (int)cVar6 * 0x38 + 0x18) == 0)) {
		t = '\x04';
	}
	if (*(int *)((int)plr + myplr * 0x55ec + 0xb4) < 0) {
		t = '\x04';
	}
	SetSpellTrans(t);
	if (cVar6 == -1) {
		DrawSpellCel(0x275, 0x277, *(BYTE **)(iVar4 + -0x4fb0), 0x1b, 0x38);
	} else {
		DrawSpellCel(0x275, 0x277, *(BYTE **)(iVar4 + -0x4fb0), (int)*(char *)(iVar4 + -0x2cf8 + (int)cVar6), 0x38);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawSpellList(void)

{
	uint uVar1;
	char t;
	longlong lVar2;
	PlayerStruct *pPVar3;
	PlayerStruct *pPVar4;
	undefined4 uVar5;
	int iVar6;
	ulonglong uVar7;
	int iVar8;
	int nCel;
	undefined4 uVar9;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	ulonglong in_r13;
	longlong lVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	longlong unaff_r19;
	int iVar13;
	int iVar14;
	int yp;
	int xp;
	longlong lVar15;
	undefined4 in_stack_ffffff68;
	undefined in_stack_ffffff6f;
	undefined4 in_stack_ffffff7c;
	undefined4 in_stack_ffffff80;
	undefined4 in_stack_ffffff84;
	undefined4 in_stack_ffffff88;
	undefined4 in_stack_ffffff8c;
	undefined4 in_stack_ffffff90;
	undefined4 in_stack_ffffff94;
	int local_68;
	uint local_60;
	int local_58;

	lVar2 = 0x100f8fd0;
	xp = 0x27c;
	yp = 0x1ef;
	_DAT_101282b0 = -1;
	DAT_101283d5 = 0;
	ClearPanel();
	iVar14 = 0;
	do {
		if (iVar14 == 2) {
			SetSpellTrans('\x02');
			local_68 = 0x2c;
			local_60 = *(uint *)((int)plr + myplr * 0x55ec + 0x114);
			in_r13 = (ulonglong) * (uint *)((int)plr + myplr * 0x55ec + 0x118);
		} else {
			if (iVar14 < 2) {
				if (iVar14 == 0) {
					SetSpellTrans('\0');
					local_68 = 0x2e;
					local_60 = *(uint *)((int)plr + myplr * 0x55ec + 0x10c);
					in_r13 = (ulonglong) * (uint *)((int)plr + myplr * 0x55ec + 0x110);
				} else {
					if (-1 < iVar14) {
						local_68 = 0x2f;
						local_60 = *(uint *)((int)plr + myplr * 0x55ec + 0x104);
						in_r13 = (ulonglong) * (uint *)((int)plr + myplr * 0x55ec + 0x108);
					}
				}
			} else {
				if (iVar14 < 4) {
					SetSpellTrans('\x03');
					local_68 = 0x2d;
					local_60 = *(uint *)((int)plr + myplr * 0x55ec + 0x5560);
					in_r13 = (ulonglong) * (uint *)((int)plr + myplr * 0x55ec + 0x5564);
				}
			}
		}
		local_58 = 0x1010efd8;
		uVar12 = 1;
		lVar10 = lVar2 + -0x2cf7;
		uVar11 = 0;
		iVar13 = 1;
		do {
			if ((in_r13 & uVar12 | (ulonglong)local_60 & uVar11) != 0) {
				if (iVar14 == 1) {
					unaff_r19 = (longlong) * (char *)(myplr * 0x55ec + iVar13 + 0x10186f81) + (longlong) * (char *)((int)plr + myplr * 0x55ec + 0x5570);
					if (unaff_r19 < 0) {
						unaff_r19 = 0;
					}
					if ((int)unaff_r19 < 1) {
						t = '\x04';
					} else {
						t = '\x01';
					}
					SetSpellTrans(t);
				}
				if ((**(char **)((int)lVar2 + -0x77e4) == '\0') && (*(int *)(local_58 + 0x18) == 0)) {
					SetSpellTrans('\x04');
				}
				DrawSpellCel(xp, yp, *(BYTE **)((int)lVar2 + -0x4fb0), (int)*(char *)lVar10, 0x38);
				iVar6 = (int)lVar2;
				if ((((xp + -0x40 <= **(int **)(iVar6 + -0x76a8)) && (**(int **)(iVar6 + -0x76a8) < xp + -8)) && (yp + -0xd8 <= **(int **)(iVar6 + -0x76ac))) && (**(int **)(iVar6 + -0x76ac) < yp + -0xa0)) {
					uVar9 = 0x38;
					iVar8 = local_68;
					_DAT_101282ac = iVar14;
					_DAT_101282b0 = iVar13;
					DrawSpellCel(xp, yp, *(BYTE **)(iVar6 + -0x4fb0), local_68, 0x38);
					iVar6 = (int)lVar2;
					if (iVar14 == 2) {
						wsprintf((int)&DAT_101283d5, *(undefined4 *)(iVar6 + -0x6488),
						    *(undefined4 *)(_DAT_101282b0 * 0x38 + 0x1010efa4), iVar8, uVar9, in_r8, in_r9, in_r10,
						    in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7c, in_stack_ffffff80,
						    in_stack_ffffff84, in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90,
						    in_stack_ffffff94);
						iVar6 = 0;
						pPVar4 = (PlayerStruct *)((int)plr + myplr * 0x55ec);
						uVar1 = *(uint *)((int)plr + myplr * 0x55ec + 0x4828);
						uVar7 = (ulonglong)uVar1;
						pPVar3 = pPVar4;
						if (0 < (int)uVar1) {
							do {
								if (((pPVar3->InvList[0]._iPLGetHit != -1) && ((iVar8 = *(int *)(pPVar3->InvList[1]._iIName + 0xf), iVar8 == 0x15 || (iVar8 == 0x16)))) && (_DAT_101282b0 == *(int *)(pPVar3->InvList[1]._iIName + 0x13))) {
									iVar6 = iVar6 + 1;
								}
								pPVar3 = (PlayerStruct *)&pPVar3->_pDexterity;
								uVar7 = uVar7 - 1;
							} while (uVar7 != 0);
						}
						lVar15 = 2;
						do {
							if (((pPVar4->SpdList[0]._iPLGetHit != -1) && ((iVar8 = *(int *)(pPVar4->SpdList[1]._iIName + 0xf), iVar8 == 0x15 || (iVar8 == 0x16)))) && (_DAT_101282b0 == *(int *)(pPVar4->SpdList[1]._iIName + 0x13))) {
								iVar6 = iVar6 + 1;
							}
							if ((pPVar4->SpdList[1]._iPLGetHit != -1) && (((iVar8 = *(int *)(pPVar4->SpdList[2]._iIName + 0xf), iVar8 == 0x15 || (iVar8 == 0x16)) && (_DAT_101282b0 == *(int *)(pPVar4->SpdList[2]._iIName + 0x13))))) {
								iVar6 = iVar6 + 1;
							}
							if (((pPVar4->SpdList[2]._iPLGetHit != -1) && ((iVar8 = *(int *)(pPVar4->SpdList[3]._iIName + 0xf), iVar8 == 0x15 || (iVar8 == 0x16)))) && (_DAT_101282b0 == *(int *)(pPVar4->SpdList[3]._iIName + 0x13))) {
								iVar6 = iVar6 + 1;
							}
							iVar8 = pPVar4->SpdList[3]._iPLGetHit;
							if (((iVar8 != -1) && ((iVar8 = *(int *)(pPVar4->SpdList[4]._iIName + 0xf), iVar8 == 0x15 || (iVar8 == 0x16)))) && (iVar8 = *(int *)(pPVar4->SpdList[4]._iIName + 0x13), _DAT_101282b0 == iVar8)) {
								iVar6 = iVar6 + 1;
							}
							pPVar4 = (PlayerStruct *)&pPVar4->InvBody[1]._iFlags;
							lVar15 = lVar15 + -1;
						} while (lVar15 != 0);
						if (iVar6 == 1) {
							strcpy(&DAT_101282d4, *(char **)((int)lVar2 + -0x648c));
						} else {
							wsprintf((int)&DAT_101282d4, *(undefined4 *)((int)lVar2 + -0x6490), iVar6, iVar8, uVar9,
							    in_r8, in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7c,
							    in_stack_ffffff80, in_stack_ffffff84, in_stack_ffffff88, in_stack_ffffff8c,
							    in_stack_ffffff90, in_stack_ffffff94);
						}
						AddPanelString(&DAT_101282d4, 1);
					} else {
						if (iVar14 < 2) {
							if (iVar14 == 0) {
								wsprintf((int)&DAT_101283d5, *(undefined4 *)(iVar6 + -0x6474),
								    *(undefined4 *)(_DAT_101282b0 * 0x38 + 0x1010efa8), iVar8, uVar9, in_r8, in_r9,
								    in_r10, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7c, in_stack_ffffff80,
								    in_stack_ffffff84, in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90,
								    in_stack_ffffff94);
							} else {
								if (-1 < iVar14) {
									uVar5 = *(undefined4 *)(_DAT_101282b0 * 0x38 + 0x1010efa4);
									wsprintf((int)&DAT_101283d5, *(undefined4 *)(iVar6 + -0x6478), uVar5, iVar8, uVar9,
									    in_r8, in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7c,
									    in_stack_ffffff80, in_stack_ffffff84, in_stack_ffffff88, in_stack_ffffff8c,
									    in_stack_ffffff90, in_stack_ffffff94);
									if (_DAT_101282b0 == 0x1f) {
										wsprintf((int)&DAT_101282d4, *(undefined4 *)((int)lVar2 + -0x647c), uVar5, iVar8,
										    uVar9, in_r8, in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f,
										    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84, in_stack_ffffff88,
										    in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94);
										AddPanelString(&DAT_101282d4, 1);
									}
									if ((int)unaff_r19 == 0) {
										wsprintf((int)&DAT_101282d4, *(undefined4 *)((int)lVar2 + -0x6480), uVar5, iVar8,
										    uVar9, in_r8, in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f,
										    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84, in_stack_ffffff88,
										    in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94);
									} else {
										wsprintf((int)&DAT_101282d4, *(undefined4 *)((int)lVar2 + -0x6484),
										    (int)unaff_r19, iVar8, uVar9, in_r8, in_r9, in_r10, in_stack_ffffff68,
										    in_stack_ffffff6f, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84,
										    in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94);
									}
									AddPanelString(&DAT_101282d4, 1);
								}
							}
						} else {
							if (iVar14 < 4) {
								wsprintf((int)&DAT_101283d5, *(undefined4 *)(iVar6 + -0x6494),
								    *(undefined4 *)(_DAT_101282b0 * 0x38 + 0x1010efa4), iVar8, uVar9, in_r8, in_r9,
								    in_r10, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7c, in_stack_ffffff80,
								    in_stack_ffffff84, in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90,
								    in_stack_ffffff94);
								iVar6 = *(int *)((int)plr + myplr * 0x55ec + 0xb3c);
								if (iVar6 == 1) {
									strcpy(&DAT_101282d4, *(char **)((int)lVar2 + -0x6498));
								} else {
									wsprintf((int)&DAT_101282d4, *(undefined4 *)((int)lVar2 + -0x649c), iVar6, iVar8,
									    uVar9, in_r8, in_r9, in_r10, in_stack_ffffff68, in_stack_ffffff6f,
									    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84, in_stack_ffffff88,
									    in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94);
								}
								AddPanelString(&DAT_101282d4, 1);
							}
						}
					}
					iVar8 = 0;
					iVar6 = 0;
					do {
						pPVar3 = (PlayerStruct *)((int)plr + myplr * 0x55ec);
						if ((_DAT_101282b0 == *(int *)((int)pPVar3->_pSplHotKey + iVar6)) && (_DAT_101282ac == (int)pPVar3->_pSplTHotKey[iVar8])) {
							nCel = iVar8 + 0x30;
							uVar9 = 0x38;
							DrawSpellCel(xp, yp, *(BYTE **)((int)lVar2 + -0x4fb0), nCel, 0x38);
							wsprintf((int)&DAT_101282d4, "Spell Hot Key #F%i", iVar8 + 5, nCel, uVar9, in_r8, in_r9,
							    in_r10, in_stack_ffffff68, in_stack_ffffff6f, in_stack_ffffff7c, in_stack_ffffff80,
							    in_stack_ffffff84, in_stack_ffffff88, in_stack_ffffff8c, in_stack_ffffff90,
							    in_stack_ffffff94);
							AddPanelString(&DAT_101282d4, 1);
						}
						iVar8 = iVar8 + 1;
						iVar6 = iVar6 + 4;
					} while (iVar8 < 4);
				}
				xp = xp + -0x38;
				if (xp == 0x14) {
					xp = 0x27c;
					yp = yp + -0x38;
				}
			}
			uVar11 = 64bitAndOperator(uVar11, uVar12, 1);
			iVar13 = iVar13 + 1;
			local_58 = local_58 + 0x38;
			lVar10 = lVar10 + 1;
		} while (iVar13 < 0x25);
		if (((in_r13 | (ulonglong)local_60) != 0) && (xp != 0x27c)) {
			xp = xp + -0x38;
		}
		if (xp == 0x14) {
			xp = 0x27c;
			yp = yp + -0x38;
		}
		iVar14 = iVar14 + 1;
	} while (iVar14 < 4);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetSpell(void)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	int iVar3;
	int iVar4;

	iVar3 = 0x100f8fd0;
	_DAT_101282b4 = 0;
	if (_DAT_101282b0 != -1) {
		ClearPanel();
		puVar1 = *(undefined4 **)(iVar3 + -0x76b0);
		iVar4 = **(int **)(iVar3 + -0x77ac) * 0x55ec;
		puVar2 = *(undefined4 **)(iVar3 + -0x76bc);
		*(int *)((int)plr + iVar4 + 0xb4) = _DAT_101282b0;
		*(undefined *)((int)plr + iVar4 + 0xb8) = (char)*puVar1;
		*puVar2 = 0xff;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetSpeedSpell(int slot)

{
	int iVar1;
	int iVar2;
	int iVar3;
	PlayerStruct *pPVar4;

	iVar2 = _DAT_101282b0;
	iVar1 = _DAT_101282ac;
	if (_DAT_101282b0 == -1) {
		return;
	}
	iVar3 = myplr * 0x55ec;
	if ((_DAT_101282b0 == *(int *)((int)plr + iVar3 + 0x120)) && (_DAT_101282ac == (int)*(char *)((int)plr + iVar3 + 0x130))) {
		*(undefined4 *)((int)plr + iVar3 + 0x120) = 0xffffffff;
	}
	if ((iVar2 == *(int *)((int)plr + iVar3 + 0x124)) && (iVar1 == (int)*(char *)((int)plr + iVar3 + 0x131))) {
		*(undefined4 *)((int)plr + iVar3 + 0x124) = 0xffffffff;
	}
	if ((iVar2 == *(int *)((int)plr + iVar3 + 0x128)) && (iVar1 == (int)*(char *)((int)plr + iVar3 + 0x132))) {
		*(undefined4 *)((int)plr + iVar3 + 0x128) = 0xffffffff;
	}
	if ((iVar2 == *(int *)((int)plr + iVar3 + 300)) && (iVar1 == (int)*(char *)((int)plr + iVar3 + 0x133))) {
		*(undefined4 *)((int)plr + iVar3 + 300) = 0xffffffff;
	}
	pPVar4 = (PlayerStruct *)((int)plr + myplr * 0x55ec);
	pPVar4->_pSplHotKey[slot] = _DAT_101282b0;
	pPVar4->_pSplTHotKey[slot] = (char)_DAT_101282ac;
	return;
}

void ToggleSpell(int slot)

{
	char *pcVar1;
	char cVar2;
	uint uVar3;
	undefined4 *puVar4;
	int iVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	ulonglong unaff_r26;
	ulonglong unaff_r27;
	int iVar8;

	iVar5 = 0x100f8fd0;
	iVar8 = myplr * 0x55ec;
	uVar3 = ((PlayerStruct *)((int)plr + iVar8))->_pSplHotKey[slot];
	if (uVar3 != 0xffffffff) {
		pcVar1 = ((PlayerStruct *)((int)plr + iVar8))->_pSplTHotKey + slot;
		cVar2 = *pcVar1;
		if (cVar2 == '\x02') {
			unaff_r27 = (ulonglong) * (uint *)((int)plr + iVar8 + 0x114);
			unaff_r26 = (ulonglong) * (uint *)((int)plr + iVar8 + 0x118);
		} else {
			if (cVar2 < '\x02') {
				if (cVar2 == '\0') {
					unaff_r27 = (ulonglong) * (uint *)((int)plr + iVar8 + 0x10c);
					unaff_r26 = (ulonglong) * (uint *)((int)plr + iVar8 + 0x110);
				} else {
					if (-1 < cVar2) {
						unaff_r27 = (ulonglong) * (uint *)((int)plr + iVar8 + 0x104);
						unaff_r26 = (ulonglong) * (uint *)((int)plr + iVar8 + 0x108);
					}
				}
			} else {
				if (cVar2 < '\x04') {
					unaff_r27 = (ulonglong) * (uint *)((int)plr + iVar8 + 0x5560);
					unaff_r26 = (ulonglong) * (uint *)((int)plr + iVar8 + 0x5564);
				}
			}
		}
		uVar7 = 1;
		uVar6 = 64bitAndOperator(0, 1, (ulonglong)uVar3 - 1);
		if ((unaff_r26 & uVar7 | unaff_r27 & uVar6) != 0) {
			puVar4 = *(undefined4 **)(iVar5 + -0x76bc);
			*(uint *)((int)plr + iVar8 + 0xb4) = uVar3;
			*(char *)((int)plr + iVar8 + 0xb8) = *pcVar1;
			*puVar4 = 0xff;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CPrintString(int nOffset, int nCel, char col)

{
	longlong lVar1;
	ulonglong uVar2;
	longlong lVar3;
	int iVar4;
	char cVar8;
	ulonglong uVar5;
	undefined *puVar6;
	char *pcVar7;
	longlong lVar9;
	byte bVar10;
	undefined in_r6;
	ulonglong uVar11;
	undefined in_r7;
	longlong lVar12;
	undefined *puVar13;
	undefined in_r8;
	ulonglong uVar14;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	uint local_18[6];

	iVar4 = 0x100f8fd0;
	cVar8 = LockMemFile((ulonglong)_DAT_100f402c, (char)nCel, col, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	uVar5 = BESwap_1003cdf8((longlong)cVar8, nCel, (int *)local_18);
	lVar12 = (ulonglong) * *(uint **)(iVar4 + -0x7804) + (longlong)nOffset;
	uVar11 = uVar5 + (ulonglong)local_18[0];
	if (col == '\x01') {
		do {
			lVar9 = 0xd;
			do {
				pcVar7 = (char *)uVar5;
				uVar5 = uVar5 + 1;
				lVar3 = (longlong)*pcVar7;
				if (lVar3 < 0) {
					lVar12 = lVar12 - lVar3;
					lVar1 = lVar3;
				} else {
					lVar1 = -lVar3;
					do {
						bVar10 = *(byte *)uVar5;
						uVar5 = uVar5 + 1;
						if (bVar10 < 0xfe) {
							if (0xef < bVar10) {
								bVar10 = bVar10 - 0x3e;
							}
						} else {
							bVar10 = 0xbf;
						}
						lVar3 = lVar3 + -1;
						*(byte *)lVar12 = bVar10;
						lVar12 = lVar12 + 1;
					} while (lVar3 != 0);
				}
				lVar9 = lVar9 + lVar1;
			} while ((int)lVar9 != 0);
			lVar12 = lVar12 + -0x30d;
		} while ((uVar5 & 0xffffffff) != (uVar11 & 0xffffffff));
	} else {
		if (col < '\x01') {
			if (-1 < col) {
				do {
					lVar9 = 0xd;
					do {
						cVar8 = *(char *)uVar5;
						uVar5 = uVar5 + 1;
						uVar14 = SEXT18(cVar8);
						if ((longlong)uVar14 < 0) {
							lVar12 = lVar12 - uVar14;
							lVar9 = lVar9 + uVar14;
						} else {
							lVar9 = lVar9 - uVar14;
							if (cVar8 != '\0') {
								uVar2 = (ulonglong)((uint)(int)cVar8 >> 3);
								if ((uint)(int)cVar8 >> 3 != 0) {
									do {
										puVar6 = (undefined *)uVar5;
										puVar13 = (undefined *)lVar12;
										*puVar13 = *puVar6;
										puVar13[1] = puVar6[1];
										puVar13[2] = puVar6[2];
										puVar13[3] = puVar6[3];
										puVar13[4] = puVar6[4];
										puVar13[5] = puVar6[5];
										puVar13[6] = puVar6[6];
										uVar5 = uVar5 + 8;
										puVar13[7] = puVar6[7];
										lVar12 = lVar12 + 8;
										uVar2 = uVar2 - 1;
									} while (uVar2 != 0);
									uVar14 = uVar14 & 7;
									if (uVar14 == 0)
										goto LAB_1001d068;
								}
								do {
									puVar6 = (undefined *)uVar5;
									uVar5 = uVar5 + 1;
									*(undefined *)lVar12 = *puVar6;
									lVar12 = lVar12 + 1;
									uVar14 = uVar14 - 1;
								} while (uVar14 != 0);
							}
						}
					LAB_1001d068:
					} while ((int)lVar9 != 0);
					lVar12 = lVar12 + -0x30d;
				} while ((uVar5 & 0xffffffff) != (uVar11 & 0xffffffff));
				goto LAB_1001d1bc;
			}
		} else {
			if (col < '\x03') {
				do {
					lVar9 = 0xd;
					do {
						pcVar7 = (char *)uVar5;
						uVar5 = uVar5 + 1;
						lVar3 = (longlong)*pcVar7;
						if (lVar3 < 0) {
							lVar12 = lVar12 - lVar3;
							lVar1 = lVar3;
						} else {
							lVar1 = -lVar3;
							do {
								bVar10 = *(byte *)uVar5;
								uVar5 = uVar5 + 1;
								if (0xef < bVar10) {
									bVar10 = bVar10 - 0x10;
								}
								lVar3 = lVar3 + -1;
								*(byte *)lVar12 = bVar10;
								lVar12 = lVar12 + 1;
							} while (lVar3 != 0);
						}
						lVar9 = lVar9 + lVar1;
					} while ((int)lVar9 != 0);
					lVar12 = lVar12 + -0x30d;
				} while ((uVar5 & 0xffffffff) != (uVar11 & 0xffffffff));
				goto LAB_1001d1bc;
			}
		}
		do {
			lVar9 = 0xd;
			do {
				pcVar7 = (char *)uVar5;
				uVar5 = uVar5 + 1;
				lVar3 = (longlong)*pcVar7;
				if (lVar3 < 0) {
					lVar12 = lVar12 - lVar3;
					lVar1 = lVar3;
				} else {
					lVar1 = -lVar3;
					do {
						bVar10 = *(byte *)uVar5;
						uVar5 = uVar5 + 1;
						if (0xef < bVar10) {
							if (bVar10 < 0xfe) {
								bVar10 = bVar10 - 0x2e;
							} else {
								bVar10 = 0xcf;
							}
						}
						lVar3 = lVar3 + -1;
						*(byte *)lVar12 = bVar10;
						lVar12 = lVar12 + 1;
					} while (lVar3 != 0);
				}
				lVar9 = lVar9 + lVar1;
			} while ((int)lVar9 != 0);
			lVar12 = lVar12 + -0x30d;
		} while ((uVar5 & 0xffffffff) != (uVar11 & 0xffffffff));
	}
LAB_1001d1bc:
	UnlockMemFile((char)*(undefined4 *)(iVar4 + -0x4fa4));
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddPanelString(char *str, BOOL just)

{
	bool bVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	strcpy(&DAT_101284f0 + _DAT_101284d8 * 0x40, str);
	bVar1 = _DAT_101284d8 < 4;
	*(BOOL *)(*(int *)(iVar2 + -0x76c8) + _DAT_101284d8 * 4) = just;
	if (bVar1) {
		_DAT_101284d8 = _DAT_101284d8 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ClearPanel(void)

{
	_DAT_101284d8 = 0;
	_DAT_101284dc = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawPanelBox(int x, int y, int w, int h, int sx, int sy)

{
	undefined2 uVar1;
	undefined4 uVar2;
	undefined4 *puVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	undefined4 *puVar6;
	longlong lVar7;
	undefined4 *puVar8;
	uint uVar9;
	undefined4 *local_c;
	undefined4 *local_8;

	lVar7 = (longlong)h;
	local_8 = (undefined4 *)(_DAT_100f4018 + y * 0x280 + x);
	local_c = (undefined4 *)(_DAT_101271e4 + sy * 0x300 + sx);
	do {
		puVar6 = local_8;
		puVar8 = local_c;
		uVar9 = w;
		if ((w & 1U) != 0) {
			puVar6 = (undefined4 *)((int)local_8 + 1);
			uVar9 = w - 1;
			*(undefined *)local_c = *(undefined *)local_8;
			puVar8 = (undefined4 *)((int)local_c + 1);
		}
		if ((uVar9 & 2) != 0) {
			uVar1 = *(undefined2 *)puVar6;
			puVar6 = (undefined4 *)((int)puVar6 + 2);
			uVar9 = uVar9 - 2;
			*(undefined2 *)puVar8 = uVar1;
			puVar8 = (undefined4 *)((int)puVar8 + 2);
		}
		uVar5 = (ulonglong)(uVar9 >> 2);
		if (3 < (int)uVar9) {
			uVar4 = (ulonglong)(uVar9 >> 5);
			if (uVar9 >> 5 != 0) {
				do {
					*puVar8 = *puVar6;
					puVar8[1] = puVar6[1];
					puVar8[2] = puVar6[2];
					puVar8[3] = puVar6[3];
					puVar8[4] = puVar6[4];
					puVar8[5] = puVar6[5];
					puVar8[6] = puVar6[6];
					puVar3 = puVar6 + 7;
					puVar6 = puVar6 + 8;
					puVar8[7] = *puVar3;
					puVar8 = puVar8 + 8;
					uVar4 = uVar4 - 1;
				} while (uVar4 != 0);
				uVar5 = uVar5 & 7;
				if ((uVar9 >> 2 & 7) == 0)
					goto LAB_1001d378;
			}
			do {
				uVar2 = *puVar6;
				puVar6 = puVar6 + 1;
				*puVar8 = uVar2;
				puVar8 = puVar8 + 1;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
		}
	LAB_1001d378:
		lVar7 = lVar7 + -1;
		local_8 = local_8 + 0xa0;
		local_c = local_c + 0xc0;
		if (lVar7 == 0) {
			return;
		}
	} while (true);
}

void thunk_ClearPanel(void)

{
	ClearPanel();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetFlaskHeight(BYTE *pCelBuff, int min, int max, int c, int r)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	longlong lVar4;
	longlong lVar5;
	undefined4 *local_10;
	undefined4 *local_c;

	local_10 = (undefined4 *)(_DAT_101271e4 + r * 0x300 + c);
	lVar4 = (longlong)max - (longlong)min;
	local_c = (undefined4 *)(pCelBuff + min * 0x58);
	do {
		lVar5 = 0xb;
		puVar2 = local_c + 0x16;
		puVar3 = local_10;
		do {
			*puVar3 = *local_c;
			puVar1 = local_c + 1;
			local_c = local_c + 2;
			puVar3[1] = *puVar1;
			puVar3 = puVar3 + 2;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		lVar4 = lVar4 + -1;
		local_10 = local_10 + 0xc0;
		local_c = puVar2;
	} while (lVar4 != 0);
	return;
}

void DrawFlask(BYTE *pCelBuff, int w, int nSrcOff, BYTE *pBuff, int nDstOff, int h)

{
	longlong lVar1;
	byte *local_18;
	byte *local_14[5];

	lVar1 = (longlong)h;
	local_14[0] = pCelBuff + nSrcOff;
	local_18 = pBuff + nDstOff;
	do {
		asm_DrawFlask(&local_18, local_14, 0x3b);
		lVar1 = lVar1 + -1;
		local_14[0] = local_14[0] + w + -0x3b;
		local_18 = local_18 + 0x2c5;
	} while (lVar1 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawLifeFlask(void)

{
	int h;
	int iVar1;

	iVar1 = 0x100f8fd0;
	h = myplr * 0x55ec;
	*(int *)((int)plr + h + 0x19c) = (int)(_DAT_100f4040 * (((double)CONCAT44(0x43300000, *(uint *)((int)plr + h + 0x194) ^ 0x80000000) - _DAT_100f4038) / ((double)CONCAT44(0x43300000, *(uint *)((int)plr + h + 0x198) ^ 0x80000000) - _DAT_100f4038)));
	h = *(int *)((int)plr + h + 0x19c);
	if (0x50 < h) {
		h = 0x50;
	}
	h = 0x50 - h;
	if (0xb < h) {
		h = 0xb;
	}
	h = h + 2;
	DrawFlask(_DAT_100f4010, 0x58, 0x115, _DAT_101271e4, 0x5d9ad, h);
	if (h != 0xd) {
		DrawFlask(*(BYTE **)(iVar1 + -0x4fb8), 0x280, h * 0x280 + 0x7ed, _DAT_101271e4, h * 0x300 + 0x5d9ad, 0xd - h);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void UpdateLifeFlask(void)

{
	int iVar1;
	int h;

	iVar1 = myplr * 0x55ec;
	h = (int)(_DAT_100f4040 * (((double)CONCAT44(0x43300000, *(uint *)((int)plr + iVar1 + 0x194) ^ 0x80000000) - _DAT_100f4038) / ((double)CONCAT44(0x43300000, *(uint *)((int)plr + iVar1 + 0x198) ^ 0x80000000) - _DAT_100f4038)));
	*(int *)((int)plr + iVar1 + 0x19c) = h;
	if (0x45 < h) {
		h = 0x45;
	}
	if (h != 0x45) {
		SetFlaskHeight(_DAT_100f4010, 0x10, 0x55 - h, 0xa0, 0x200);
	}
	if (h != 0) {
		DrawPanelBox(0x60, 0x55 - h, 0x58, h, 0xa0, 0x245 - h);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawManaFlask(void)

{
	int h;
	int iVar1;

	iVar1 = 0x100f8fd0;
	h = *(int *)((int)plr + myplr * 0x55ec + 0x1b0);
	if (0x50 < h) {
		h = 0x50;
	}
	h = 0x50 - h;
	if (0xb < h) {
		h = 0xb;
	}
	h = h + 2;
	DrawFlask(_DAT_100f4014, 0x58, 0x115, _DAT_101271e4, 0x5db1b, h);
	if (h != 0xd) {
		DrawFlask(*(BYTE **)(iVar1 + -0x4fb8), 0x280, h * 0x280 + 0x95b, _DAT_101271e4, h * 0x300 + 0x5db1b, 0xd - h);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void control_update_life_mana(void)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	double local_18;
	double local_8;

	iVar3 = myplr * 0x55ec;
	uVar4 = *(uint *)((int)plr + iVar3 + 0x1ac);
	uVar1 = *(uint *)((int)plr + iVar3 + 0x1a8);
	if ((int)uVar4 < 0) {
		uVar4 = 0;
	}
	if ((int)uVar1 < 0) {
		uVar1 = 0;
	}
	if (uVar4 == 0) {
		iVar2 = 0;
	} else {
		local_8 = (double)CONCAT44(0x43300000, uVar1 ^ 0x80000000);
		iVar2 = (int)(_DAT_100f4040 * ((local_8 - _DAT_100f4038) / ((double)CONCAT44(0x43300000, uVar4 ^ 0x80000000) - _DAT_100f4038)));
	}
	*(int *)((int)plr + iVar3 + 0x1b0) = iVar2;
	local_18 = (double)CONCAT44(0x43300000, *(uint *)((int)plr + iVar3 + 0x194) ^ 0x80000000);
	*(int *)((int)plr + iVar3 + 0x19c) = (int)(_DAT_100f4040 * ((local_18 - _DAT_100f4038) / ((double)CONCAT44(0x43300000, *(uint *)((int)plr + iVar3 + 0x198) ^ 0x80000000) - _DAT_100f4038)));
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void UpdateManaFlask(void)

{
	uint uVar1;
	int iVar2;
	uint uVar3;
	int h;

	iVar2 = myplr * 0x55ec;
	uVar3 = *(uint *)((int)plr + iVar2 + 0x1ac);
	uVar1 = *(uint *)((int)plr + iVar2 + 0x1a8);
	if ((int)uVar3 < 0) {
		uVar3 = 0;
	}
	if ((int)uVar1 < 0) {
		uVar1 = 0;
	}
	if (uVar3 == 0) {
		h = 0;
	} else {
		h = (int)(_DAT_100f4040 * (((double)CONCAT44(0x43300000, uVar1 ^ 0x80000000) - _DAT_100f4038) / ((double)CONCAT44(0x43300000, uVar3 ^ 0x80000000) - _DAT_100f4038)));
	}
	*(int *)((int)plr + iVar2 + 0x1b0) = h;
	if (0x45 < h) {
		h = 0x45;
	}
	if (h != 0x45) {
		SetFlaskHeight(_DAT_100f4014, 0x10, 0x55 - h, 0x210, 0x200);
	}
	if (h != 0) {
		DrawPanelBox(0x1d0, 0x55 - h, 0x58, h, 0x210, 0x245 - h);
	}
	DrawSpell();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitControlPan(void)

{
	char cVar1;
	undefined4 *puVar2;
	char *pszName;
	undefined4 *puVar3;
	int *piVar4;
	int iVar5;
	int iVar6;
	BYTE *pBVar7;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined in_stack_ffffff7b;
	undefined in_stack_ffffff7f;
	int local_7c;
	int *local_38[2];
	int *local_30[5];
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar5 = 0x100f8fd0;
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (gbMaxPlayers == '\x01') {
		pBVar7 = DiabloAllocPtr(0x16800);
		*(BYTE **)(iVar5 + -0x4fb8) = pBVar7;
		ZeroMemory((char)*(undefined4 *)(iVar5 + -0x4fb8), 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffff7b, in_stack_ffffff7f, local_7c);
	} else {
		pBVar7 = DiabloAllocPtr(0x2d000);
		*(BYTE **)(iVar5 + -0x4fb8) = pBVar7;
		ZeroMemory((char)*(undefined4 *)(iVar5 + -0x4fb8), 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffff7b, in_stack_ffffff7f, local_7c);
	}
	iVar5 = local_7c;
	pBVar7 = DiabloAllocPtr(0x1e40);
	*(BYTE **)(local_7c + -0x4fbc) = pBVar7;
	ZeroMemory((char)*(undefined4 *)(local_7c + -0x4fbc), 0x40, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffff7b, in_stack_ffffff7f, iVar5);
	iVar6 = iVar5;
	pBVar7 = DiabloAllocPtr(0x1e40);
	*(BYTE **)(iVar5 + -0x4fc0) = pBVar7;
	ZeroMemory((char)*(undefined4 *)(iVar5 + -0x4fc0), 0x40, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffff7b, in_stack_ffffff7f, iVar6);
	pBVar7 = LoadFileInMem(*(char **)(iVar6 + -0x64a4), (DWORD *)0x0);
	*(BYTE **)(iVar6 + -0x4fa4) = pBVar7;
	pBVar7 = LoadFileInMem(*(char **)(iVar6 + -0x64a8), (DWORD *)0x0);
	*(BYTE **)(iVar6 + -0x4fa8) = pBVar7;
	pBVar7 = LoadFileInMem(*(char **)(iVar6 + -0x64ac), (DWORD *)0x0);
	*(BYTE **)(iVar6 + -0x4fb0) = pBVar7;
	SetSpellTrans('\0');
	local_30[0] = (int *)LoadFileInMem(*(char **)(iVar6 + -0x64b0), (DWORD *)0x0);
	CelDecodeRect(*(BYTE **)(iVar6 + -0x4fb8), 0, 0x8f, 0x280, (BYTE *)local_30[0], 1, 0x280);
	MemFreeDbg(local_30);
	local_30[0] = (int *)LoadFileInMem(*(char **)(iVar6 + -0x64b4), (DWORD *)0x0);
	CelDecodeRect(*(BYTE **)(iVar6 + -0x4fc0), 0, 0x57, 0x58, (BYTE *)local_30[0], 1, 0x58);
	CelDecodeRect(*(BYTE **)(iVar6 + -0x4fbc), 0, 0x57, 0x58, (BYTE *)local_30[0], 2, 0x58);
	MemFreeDbg(local_30);
	**(undefined4 **)(iVar6 + -0x76d0) = 0;
	if (gbMaxPlayers != '\x01') {
		local_38[0] = (int *)LoadFileInMem(*(char **)(iVar6 + -0x64b8), (DWORD *)0x0);
		CelDecodeRect(*(BYTE **)(iVar6 + -0x4fb8), 0, 0x11f, 0x280, (BYTE *)local_38[0], 1, 0x280);
		MemFreeDbg(local_38);
		pBVar7 = LoadFileInMem(*(char **)(iVar6 + -0x64bc), (DWORD *)0x0);
		*(BYTE **)(iVar6 + -0x4fe4) = pBVar7;
		pBVar7 = LoadFileInMem(*(char **)(iVar6 + -0x64c0), (DWORD *)0x0);
		*(BYTE **)(iVar6 + -0x4fe8) = pBVar7;
		*(undefined4 *)(iVar6 + -0x4fd8) = 0;
		**(undefined **)(iVar6 + -0x64c4) = 0;
		*(undefined *)(iVar6 + -0x4fe0) = 1;
		*(undefined *)(iVar6 + -0x4fdf) = 1;
		*(undefined *)(iVar6 + -0x4fde) = 1;
		*(undefined *)(iVar6 + -0x4fdd) = 1;
		_DAT_10127e78 = 0;
		uRam10127e7c = 0;
		uRam10127e80 = 0;
	}
	puVar2 = *(undefined4 **)(iVar6 + -0x76d8);
	**(undefined4 **)(iVar6 + -0x76d4) = 0;
	pszName = *(char **)(iVar6 + -0x64cc);
	*puVar2 = 0;
	pBVar7 = LoadFileInMem(pszName, (DWORD *)0x0);
	*(BYTE **)(iVar6 + -0x4fa0) = pBVar7;
	_DAT_1012818c = 0;
	uRam10128190 = 0;
	uRam10128194 = 0;
	uRam10128198 = 0;
	uRam1012819c = 0;
	uRam101281a0 = 0;
	uRam101281a4 = 0;
	uRam101281a8 = 0;
	**(undefined4 **)(iVar6 + -0x76e0) = 0;
	if (gbMaxPlayers == '\x01') {
		_DAT_1012817c = 6;
	} else {
		_DAT_1012817c = 8;
	}
	pBVar7 = LoadFileInMem(*(char **)(iVar6 + -0x64d0), (DWORD *)0x0);
	*(BYTE **)(iVar6 + -0x4fac) = pBVar7;
	_DAT_10128168 = 0;
	pszName = *(char **)(iVar6 + -0x64d4);
	uRam1012816c = 0;
	uRam10128170 = 0;
	uRam10128174 = 0;
	**(undefined4 **)(iVar6 + -0x76ec) = 0;
	pBVar7 = LoadFileInMem(pszName, (DWORD *)0x0);
	*(BYTE **)(iVar6 + -0x4fc4) = pBVar7;
	strcpy(*(char **)(iVar6 + -0x76a4), *(char **)(iVar6 + -0x64d8));
	thunk_ClearPanel();
	puVar2 = *(undefined4 **)(iVar6 + -0x76f4);
	**(undefined4 **)(iVar6 + -0x76f0) = 1;
	puVar3 = *(undefined4 **)(iVar6 + -0x77c4);
	*puVar2 = 1;
	puVar2 = *(undefined4 **)(iVar6 + -0x76b8);
	*puVar3 = 0;
	pszName = *(char **)(iVar6 + -0x64dc);
	*puVar2 = 0;
	pBVar7 = LoadFileInMem(pszName, (DWORD *)0x0);
	*(BYTE **)(iVar6 + -0x4fc8) = pBVar7;
	pBVar7 = LoadFileInMem(*(char **)(iVar6 + -0x64e0), (DWORD *)0x0);
	*(BYTE **)(iVar6 + -0x4fcc) = pBVar7;
	pBVar7 = LoadFileInMem(*(char **)(iVar6 + -0x64e4), (DWORD *)0x0);
	*(BYTE **)(iVar6 + -0x4fd0) = pBVar7;
	puVar2 = *(undefined4 **)(iVar6 + -0x77c0);
	**(undefined4 **)(iVar6 + -0x76f8) = 0;
	piVar4 = *(int **)(iVar6 + -0x77ac);
	*puVar2 = 0;
	cVar1 = *(char *)(*(int *)(iVar6 + -0x77a8) + *piVar4 * 0x55ec + 0x15c);
	if (cVar1 == '\0') {
		_DAT_100f6420 = 0x1a;
	} else {
		if (cVar1 == '\x01') {
			_DAT_100f6420 = 0x1c;
		} else {
			if (cVar1 == '\x02') {
				_DAT_100f6420 = 0x1b;
			}
		}
	}
	pBVar7 = LoadFileInMem(*(char **)(iVar6 + -0x64e8), (DWORD *)0x0);
	**(BYTE ***)(iVar6 + -0x7700) = pBVar7;
	pBVar7 = LoadFileInMem(*(char **)(iVar6 + -0x64ec), (DWORD *)0x0);
	*(BYTE **)(iVar6 + -0x4fb4) = pBVar7;
	puVar2 = *(undefined4 **)(iVar6 + -0x7708);
	**(undefined4 **)(iVar6 + -0x7704) = 0;
	puVar3 = *(undefined4 **)(iVar6 + -0x770c);
	*puVar2 = 0;
	puVar2 = *(undefined4 **)(iVar6 + -0x7710);
	*puVar3 = 0;
	puVar3 = *(undefined4 **)(iVar6 + -0x7714);
	*puVar2 = 0;
	*puVar3 = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ClearCtrlPan(void)

{
	DrawPanelBox(0, _DAT_100f3ff8 + 0x10, 0x280, 0x80, 0x40, 0x200);
	DrawInfoBox();
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void DrawCtrlPan(void)

{
	undefined8 uVar1;
	int iVar2;
	int iVar3;
	int *piVar4;
	int *piVar5;

	uVar1 = 0x100f8fd0;
	piVar5 = (int *)&DAT_1012818c;
	iVar3 = 0;
	piVar4 = (int *)&DAT_100f6300;
	do {
		if (*piVar5 == 0) {
			DrawPanelBox(*piVar4, piVar4[1] + -0x150, 0x47, 0x14, *piVar4 + 0x40, piVar4[1] + 0xa0);
		} else {
			CelDecodeOnly(*piVar4 + 0x40, piVar4[1] + 0xb2, *(BYTE **)((int)uVar1 + -0x4fa0), iVar3 + 1, 0x47);
		}
		iVar2 = (int)uVar1;
		iVar3 = iVar3 + 1;
		piVar4 = piVar4 + 5;
		piVar5 = piVar5 + 1;
	} while (iVar3 < 6);
	if (**(int **)(iVar2 + -0x76e4) == 8) {
		CelDecodeOnly(0x97, 0x27a, *(BYTE **)(iVar2 + -0x4fe4), iRam101281a4 + 1, 0x21);
		if (*(int *)(iVar2 + -0x2444) == 0) {
			CelDecodeOnly(0x24f, 0x27a, *(BYTE **)(iVar2 + -0x4fe4), iRam101281a8 + 5, 0x21);
		} else {
			CelDecodeOnly(0x24f, 0x27a, *(BYTE **)(iVar2 + -0x4fe4), iRam101281a8 + 3, 0x21);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DoSpeedBook(void)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	uint uVar7;
	uint uVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	ulonglong unaff_r18;
	ulonglong uVar11;
	ulonglong unaff_r19;
	ulonglong uVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	iVar15 = 0x27c;
	_DAT_101282b4 = 1;
	iVar14 = myplr * 0x55ec;
	if (*(int *)((int)plr + iVar14 + 0xb4) != -1) {
		uVar1 = *(uint *)((int)plr + iVar14 + 0x10c);
		iVar13 = 0;
		uVar2 = *(uint *)((int)plr + iVar14 + 0x110);
		uVar3 = *(uint *)((int)plr + iVar14 + 0x104);
		uVar4 = *(uint *)((int)plr + iVar14 + 0x108);
		uVar5 = *(uint *)((int)plr + iVar14 + 0x114);
		uVar6 = *(uint *)((int)plr + iVar14 + 0x118);
		uVar7 = *(uint *)((int)plr + iVar14 + 0x5560);
		uVar8 = *(uint *)((int)plr + iVar14 + 0x5564);
		do {
			uVar11 = (ulonglong)uVar6;
			uVar12 = (ulonglong)uVar5;
			if (iVar13 != 2) {
				if (iVar13 < 2) {
					uVar11 = (ulonglong)uVar2;
					uVar12 = (ulonglong)uVar1;
					if ((iVar13 != 0) && (uVar11 = (ulonglong)uVar4, uVar12 = (ulonglong)uVar3, iVar13 < 0)) {
						uVar11 = unaff_r18;
						uVar12 = unaff_r19;
					}
				} else {
					uVar11 = unaff_r18;
					uVar12 = unaff_r19;
					if (iVar13 < 4) {
						uVar11 = (ulonglong)uVar8;
						uVar12 = (ulonglong)uVar7;
					}
				}
			}
			uVar10 = 1;
			uVar9 = 0;
			iVar14 = 1;
			do {
				if (((uVar11 & uVar10 | uVar12 & uVar9) != 0) && (iVar15 = iVar15 + -0x38, iVar15 == 0x14)) {
					iVar15 = 0x27c;
				}
				uVar9 = 64bitAndOperator();
				iVar14 = iVar14 + 1;
			} while (iVar14 < 0x25);
			if (((uVar11 | uVar12) != 0) && (iVar15 != 0x27c)) {
				iVar15 = iVar15 + -0x38;
			}
			if (iVar15 == 0x14) {
				iVar15 = 0x27c;
			}
			iVar13 = iVar13 + 1;
			unaff_r18 = uVar11;
			unaff_r19 = uVar12;
		} while (iVar13 < 4);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DoPanBtn(void)

{
	int iVar1;
	int iVar2;
	ulonglong uVar3;
	int *piVar4;
	undefined4 *puVar5;

	iVar2 = MouseX;
	iVar1 = _MouseY;
	uVar3 = (ulonglong)_DAT_1012817c;
	piVar4 = (int *)&DAT_100f6300;
	puVar5 = (undefined4 *)&DAT_1012818c;
	if (0 < (int)_DAT_1012817c) {
		do {
			if ((((*piVar4 <= iVar2) && (iVar2 <= *piVar4 + piVar4[2])) && (piVar4[1] <= iVar1)) && (iVar1 <= piVar4[1] + piVar4[3])) {
				*puVar5 = 1;
				_DAT_10128188 = 1;
				_DAT_10128184 = 1;
			}
			piVar4 = piVar4 + 5;
			puVar5 = puVar5 + 1;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	}
	if (((_DAT_101282b4 == 0) && (0x234 < MouseX)) && ((MouseX < 0x26d && ((0x19f < _MouseY && (_MouseY < 0x1d8)))))) {
		DoSpeedBook();
		gamemenu_off();
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void control_set_button_down(int btn_id)

{
	*(undefined4 *)(&DAT_1012818c + btn_id * 4) = 1;
	_DAT_10128184 = 1;
	_DAT_10128188 = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void control_check_btn_press(void)

{
	if ((((iRam100f633c <= MouseX) && (MouseX <= iRam100f633c + iRam100f6344)) && (iRam100f6340 <= _MouseY)) && (_MouseY <= iRam100f6340 + iRam100f6348)) {
		control_set_button_down(3);
	}
	if (((iRam100f6378 <= MouseX) && (MouseX <= iRam100f6378 + iRam100f6380)) && ((iRam100f637c <= _MouseY && (_MouseY <= iRam100f637c + iRam100f6384)))) {
		control_set_button_down(6);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DoAutoMap(void)

{
	if ((currlevel == 0) && (gbMaxPlayers == '\x01')) {
		InitDiabloMsg('\x01');
	} else {
		if (_DAT_10127e74 == 0) {
			StartAutomap();
		} else {
			_DAT_10127e74 = 0;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void CheckPanelInfo(void)

{
	uint uVar1;
	longlong lVar2;
	ulonglong uVar3;
	int iVar4;
	longlong lVar5;
	char cVar6;
	int iVar7;
	ulonglong in_r6;
	undefined4 uVar8;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar9;
	int iVar10;
	longlong lVar11;
	longlong lVar12;
	int *piVar13;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined4 in_stack_ffffff8c;
	undefined4 in_stack_ffffff90;
	undefined4 in_stack_ffffff94;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;

	lVar2 = 0x100f8fd0;
	uVar3 = ZEXT48(plr);
	_DAT_10128180 = 0;
	ClearPanel();
	iVar10 = 0;
	lVar5 = lVar2 + -0x2c10;
	lVar12 = lVar2 + -0x2cd0;
	lVar11 = lVar2 + -0x2c30;
	while (true) {
		uVar8 = (undefined4)in_r6;
		iVar4 = (int)lVar2;
		if (_DAT_1012817c <= iVar10)
			break;
		piVar13 = (int *)lVar12;
		uVar1 = piVar13[1];
		in_r6 = (ulonglong)uVar1;
		if (((*piVar13 <= MouseX) && (MouseX <= *piVar13 + piVar13[2])) && (((int)uVar1 <= _MouseY && (_MouseY <= (int)(uVar1 + piVar13[3]))))) {
			if (iVar10 == 7) {
				if (_DAT_100f6b8c == 0) {
					strcpy(&DAT_101283d5, "Player attack");
				} else {
					strcpy(&DAT_101283d5, "Player friendly");
				}
			} else {
				strcpy(&DAT_101283d5, *(char **)lVar5);
			}
			if (*(int *)lVar11 != 0) {
				wsprintf((int)&DAT_101282d4, "Hotkey : %s", *(int *)lVar11, (int)in_r6, in_r7, in_r8, in_r9, in_r10,
				    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94,
				    in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4);
				AddPanelString(&DAT_101282d4, 1);
			}
			DAT_101283d4 = 0;
			_DAT_10128180 = 1;
			_DAT_101284dc = 1;
		}
		lVar12 = lVar12 + 0x14;
		lVar5 = lVar5 + 4;
		lVar11 = lVar11 + 4;
		iVar10 = iVar10 + 1;
	}
	if ((((**(int **)(iVar4 + -0x76b8) == 0) && (0x234 < MouseX)) && (MouseX < 0x26d)) && ((0x19f < _MouseY && (_MouseY < 0x1d8)))) {
		strcpy(&DAT_101283d5, *(char **)(iVar4 + -0x6500));
		DAT_101283d4 = 0;
		_DAT_10128180 = 1;
		_DAT_101284dc = 1;
		strcpy(&DAT_101282d4, *(char **)(iVar4 + -0x6504));
		AddPanelString(&DAT_101282d4, 1);
		iVar9 = (int)uVar3;
		iVar7 = iVar9 + myplr * 0x55ec;
		iVar10 = *(int *)(iVar7 + 0xb4);
		if (iVar10 != -1) {
			cVar6 = *(char *)(iVar7 + 0xb8);
			if (cVar6 == '\x02') {
				wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar4 + -0x6488),
				    *(undefined4 *)(iVar10 * 0x38 + 0x1010efa4), uVar8, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff78,
				    in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98,
				    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4);
				AddPanelString(&DAT_101282d4, 1);
				iVar7 = 0;
				lVar5 = uVar3 + (ulonglong)(uint)myplr * 0x55ec;
				uVar1 = *(uint *)((int)lVar5 + 0x4828);
				uVar3 = (ulonglong)uVar1;
				lVar2 = lVar5;
				if (0 < (int)uVar1) {
					do {
						iVar9 = (int)lVar2;
						if (((*(int *)(iVar9 + 0xeb0) != -1) && ((*(int *)(iVar9 + 0xf84) == 0x15 || (*(int *)(iVar9 + 0xf84) == 0x16)))) && (iVar10 == *(int *)(iVar9 + 0xf88))) {
							iVar7 = iVar7 + 1;
						}
						lVar2 = lVar2 + 0x170;
						uVar3 = uVar3 - 1;
					} while (uVar3 != 0);
				}
				lVar2 = 2;
				do {
					iVar9 = (int)lVar5;
					if ((*(int *)(iVar9 + 0x485c) != -1) && (((*(int *)(iVar9 + 0x4930) == 0x15 || (*(int *)(iVar9 + 0x4930) == 0x16)) && (iVar10 == *(int *)(iVar9 + 0x4934))))) {
						iVar7 = iVar7 + 1;
					}
					if (((*(int *)(iVar9 + 0x49cc) != -1) && ((*(int *)(iVar9 + 0x4aa0) == 0x15 || (*(int *)(iVar9 + 0x4aa0) == 0x16)))) && (iVar10 == *(int *)(iVar9 + 0x4aa4))) {
						iVar7 = iVar7 + 1;
					}
					if (((*(int *)(iVar9 + 0x4b3c) != -1) && ((*(int *)(iVar9 + 0x4c10) == 0x15 || (*(int *)(iVar9 + 0x4c10) == 0x16)))) && (iVar10 == *(int *)(iVar9 + 0x4c14))) {
						iVar7 = iVar7 + 1;
					}
					if ((*(int *)(iVar9 + 0x4cac) != -1) && (((*(int *)(iVar9 + 0x4d80) == 0x15 || (*(int *)(iVar9 + 0x4d80) == 0x16)) && (iVar10 == *(int *)(iVar9 + 0x4d84))))) {
						iVar7 = iVar7 + 1;
					}
					lVar5 = lVar5 + 0x5c0;
					lVar2 = lVar2 + -1;
				} while (lVar2 != 0);
				if (iVar7 == 1) {
					strcpy(&DAT_101282d4, *(char **)(iVar4 + -0x648c));
				} else {
					wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar4 + -0x6490), iVar7, uVar8, in_r7, in_r8, in_r9,
					    in_r10, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90,
					    in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4);
				}
				AddPanelString(&DAT_101282d4, 1);
			} else {
				if (cVar6 < '\x02') {
					if (cVar6 == '\0') {
						wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar4 + -0x6474),
						    *(undefined4 *)(iVar10 * 0x38 + 0x1010efa8), uVar8, in_r7, in_r8, in_r9, in_r10,
						    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90,
						    in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0,
						    in_stack_ffffffa4);
						AddPanelString(&DAT_101282d4, 1);
					} else {
						if (-1 < cVar6) {
							wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar4 + -0x6478),
							    *(undefined4 *)(iVar10 * 0x38 + 0x1010efa4), uVar8, in_r7, in_r8, in_r9, in_r10,
							    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90,
							    in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0,
							    in_stack_ffffffa4);
							AddPanelString(&DAT_101282d4, 1);
							iVar9 = iVar9 + myplr * 0x55ec;
							lVar2 = (longlong) * (char *)(iVar9 + iVar10 + 0xc1) + (longlong) * (char *)(iVar9 + 0x5570);
							iVar10 = (int)lVar2;
							if (lVar2 < 0) {
								iVar10 = 0;
							}
							if (iVar10 == 0) {
								wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar4 + -0x6480), 0, uVar8, in_r7, in_r8,
								    in_r9, in_r10, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c,
								    in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c,
								    in_stack_ffffffa0, in_stack_ffffffa4);
							} else {
								wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar4 + -0x6484), iVar10, uVar8, in_r7,
								    in_r8, in_r9, in_r10, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c,
								    in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c,
								    in_stack_ffffffa0, in_stack_ffffffa4);
							}
							AddPanelString(&DAT_101282d4, 1);
						}
					}
				} else {
					if (cVar6 < '\x04') {
						wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar4 + -0x6494),
						    *(undefined4 *)(iVar10 * 0x38 + 0x1010efa4), uVar8, in_r7, in_r8, in_r9, in_r10,
						    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90,
						    in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0,
						    in_stack_ffffffa4);
						AddPanelString(&DAT_101282d4, 1);
						iVar10 = *(int *)(iVar9 + myplr * 0x55ec + 0xb3c);
						if (iVar10 == 1) {
							strcpy(&DAT_101282d4, *(char **)(iVar4 + -0x6498));
						} else {
							wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar4 + -0x649c), iVar10, uVar8, in_r7, in_r8,
							    in_r9, in_r10, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c,
							    in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c,
							    in_stack_ffffffa0, in_stack_ffffffa4);
						}
						AddPanelString(&DAT_101282d4, 1);
					}
				}
			}
		}
	}
	if (((0xbe < MouseX) && (MouseX < 0x1b5)) && ((0x164 < _MouseY && (_MouseY < 0x181)))) {
		cVar6 = CheckInvHLight();
		**(char **)(iVar4 + -0x772c) = cVar6;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckBtnUp(void)

{
	uint uVar1;
	int *piVar2;
	int *piVar3;
	int iVar4;

	iVar4 = 0;
	uVar1 = 0;
	piVar3 = (int *)&DAT_1012818c;
	piVar2 = (int *)&DAT_100f6300;
	_DAT_10128188 = 1;
	_DAT_10128184 = 0;
	do {
		if (*piVar3 != 0) {
			*piVar3 = 0;
			if ((*piVar2 <= MouseX) && (MouseX <= *piVar2 + piVar2[2])) {
				if ((piVar2[1] <= _MouseY) && ((_MouseY <= piVar2[1] + piVar2[3] && (uVar1 < 8)))) {
					// WARNING: Could not recover jumptable at 0x1001e810. Too many branches
					// WARNING: Treating indirect jump as call
					(**(code **)((int)&PTR_LAB_100f64c8 + iVar4))();
					return;
				}
			}
		}
		uVar1 = uVar1 + 1;
		piVar2 = piVar2 + 5;
		iVar4 = iVar4 + 4;
		piVar3 = piVar3 + 1;
		if (7 < (int)uVar1) {
			gamemenu_off();
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FreeControlPan(void)

{
	void *p;
	int iVar1;

	p = _DAT_100f4018;
	iVar1 = 0x100f8fd0;
	_DAT_100f4018 = (void *)0x0;
	mem_free_dbg(p);
	p = *(void **)(iVar1 + -0x4fbc);
	*(undefined4 *)(iVar1 + -0x4fbc) = 0;
	mem_free_dbg(p);
	p = *(void **)(iVar1 + -0x4fc0);
	*(undefined4 *)(iVar1 + -0x4fc0) = 0;
	mem_free_dbg(p);
	MemFreeDbg((int **)(iVar1 + -0x4fa4));
	MemFreeDbg((int **)(iVar1 + -0x4fa8));
	MemFreeDbg((int **)(iVar1 + -0x4fb0));
	MemFreeDbg((int **)(iVar1 + -0x4fa0));
	MemFreeDbg((int **)(iVar1 + -0x4fe4));
	MemFreeDbg((int **)(iVar1 + -0x4fe8));
	MemFreeDbg((int **)(iVar1 + -0x4fac));
	MemFreeDbg((int **)(iVar1 + -0x4fc4));
	MemFreeDbg(*(int ***)(iVar1 + -0x7700));
	MemFreeDbg((int **)(iVar1 + -0x4fc8));
	MemFreeDbg((int **)(iVar1 + -0x4fcc));
	MemFreeDbg((int **)(iVar1 + -0x4fd0));
	MemFreeDbg((int **)(iVar1 + -0x4fb4));
	return;
}

BOOL control_WriteStringToBuffer(BYTE *str)

{
	byte bVar1;
	longlong lVar2;

	lVar2 = 0;
	do {
		if (*str == 0) {
			return 1;
		}
		bVar1 = *str;
		str = str + 1;
		lVar2 = lVar2 + (ulonglong)(byte)(&DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]];
	} while ((int)lVar2 < 0x7d);
	return 0;
}

void control_print_info_str(int y, char *str, BOOL center, int lines)

{
	byte bVar1;
	longlong lVar2;
	byte *pbVar3;
	ulonglong uVar4;
	ulonglong uVar5;

	uVar4 = 0;
	uVar5 = (ulonglong) * (uint *)(&DAT_100f6274 + lines * 0x14 + y * 4);
	if (center == 1) {
		lVar2 = 0;
		pbVar3 = (byte *)str;
		while (true) {
			if (*pbVar3 == 0)
				break;
			bVar1 = *pbVar3;
			pbVar3 = pbVar3 + 1;
			lVar2 = (ulonglong)(byte)(
			            &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]]
			    + lVar2 + 2;
		}
		if ((int)lVar2 < 0x120) {
			uVar4 = (ulonglong)(uint)(0x120 - (int)lVar2 >> 1);
		}
		uVar5 = uVar5 + uVar4;
	}
	while (*str != 0) {
		bVar1 = *str;
		str = (char *)((byte *)str + 1);
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		uVar4 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar4 + 2;
		if (bVar1 != 0) {
			if ((int)uVar4 < 0x120) {
				CPrintString((int)uVar5, (uint)bVar1, DAT_101283d4);
			}
		}
		uVar5 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar5 + 2;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void control_draw_info_str(void)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	char *str;
	BOOL *pBVar4;

	iVar2 = 0x100f8fd0;
	if (_DAT_10128154 == 0) {
		bVar1 = DAT_101283d5 == '\0';
		if (!bVar1) {
			iVar2 = 0x100f8fd0;
			control_print_info_str(0, &DAT_101283d5, 1, _DAT_101284d8);
		}
		iVar3 = 0;
		pBVar4 = *(BOOL **)(iVar2 + -0x76c8);
		str = *(char **)(iVar2 + -0x76c0);
		while (iVar3 < _DAT_101284d8) {
			control_print_info_str(iVar3 + (uint)!bVar1, str, *pBVar4, _DAT_101284d8 - (uint)bVar1);
			pBVar4 = pBVar4 + 1;
			str = str + 0x40;
			iVar3 = iVar3 + 1;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawInfoBox(void)

{
	char cVar1;
	int iVar2;
	char *pcVar3;
	int nGold;
	undefined4 uVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 in_r9;
	undefined4 in_r10;
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
	uVar4 = 0x3c;
	uVar5 = 0xf1;
	uVar6 = 0x22e;
	DrawPanelBox(0xb1, 0x3e, 0x120, 0x3c, 0xf1, 0x22e);
	if ((((**(int **)(iVar2 + -0x76d4) == 0) && (_trigflag == 0)) && (**(char **)(iVar2 + -0x772c) == -1)) && (_DAT_101282b4 == 0)) {
		DAT_101283d5 = '\0';
		DAT_101283d4 = 0;
		ClearPanel();
	}
	if (_DAT_101282b4 == 0) {
		if (_trigflag == 0) {
			if (**(int **)(iVar2 + -0x7744) < 0xc) {
				if ((int)**(char **)(iVar2 + -0x7748) != -1) {
					GetItemStr((int)**(char **)(iVar2 + -0x7748));
				}
				if ((int)**(char **)(iVar2 + -0x774c) != -1) {
					GetObjectStr((int)**(char **)(iVar2 + -0x774c));
				}
				if (_DAT_101285f8 != -1) {
					if (**(char **)(iVar2 + -0x7794) == '\0') {
						strcpy(&DAT_101283d5, (char *)(*(int *)(iVar2 + -0x7758) + _DAT_101285f8 * 0x10c + 0xa0));
					} else {
						DAT_101283d4 = 0;
						strcpy(&DAT_101283d5, *(char **)(_DAT_101285f8 * 0xe8 + 0x10151b0c));
						ClearPanel();
						if (*(char *)(_DAT_101285f8 * 0xe8 + 0x10151af0) == '\0') {
							PrintMonstHistory((uint) * *(byte **)(_DAT_101285f8 * 0xe8 + 0x10151b10));
						} else {
							DAT_101283d4 = 3;
							PrintUniqueHistory();
						}
					}
				}
				if (DAT_101285f4 != -1) {
					DAT_101283d4 = 3;
					strcpy(&DAT_101283d5, (char *)((int)plr + (int)DAT_101285f4 * 0x55ec + 0x13c));
					ClearPanel();
					wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x6518),
					    (int)*(char *)((int)plr + (int)DAT_101285f4 * 0x55ec + 0x1b4), uVar4, uVar5, uVar6, in_r9,
					    in_r10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
					    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
					AddPanelString(&DAT_101282d4, 1);
					wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x651c),
					    *(int *)((int)plr + (int)DAT_101285f4 * 0x55ec + 0x194) >> 6,
					    *(int *)((int)plr + (int)DAT_101285f4 * 0x55ec + 0x198) >> 6, uVar5, uVar6, in_r9, in_r10,
					    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
					    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
					AddPanelString(&DAT_101282d4, 1);
				}
			} else {
				nGold = myplr * 0x55ec;
				if (*(int *)((int)plr + nGold + 0x53dc) == 0xb) {
					nGold = *(int *)((int)plr + nGold + 0x5498);
					pcVar3 = get_pieces_str(nGold);
					wsprintf((int)&DAT_101283d5, *(undefined4 *)(iVar2 + -0x6510), nGold, pcVar3, uVar5, uVar6, in_r9,
					    in_r10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
					    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
				} else {
					if (*(int *)((int)plr + nGold + 0x5538) == 0) {
						ClearPanel();
						AddPanelString(*(char **)(iVar2 + -0x6514), 1);
						**(undefined4 **)(iVar2 + -0x76cc) = 1;
					} else {
						if (*(int *)((int)plr + nGold + 0x540c) == 0) {
							strcpy(&DAT_101283d5, (char *)((int)plr + nGold + 0x5411));
						} else {
							strcpy(&DAT_101283d5, (char *)((int)plr + nGold + 0x5451));
						}
						cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x5410);
						if (cVar1 == '\x01') {
							DAT_101283d4 = 1;
						}
						if (cVar1 == '\x02') {
							DAT_101283d4 = 3;
						}
					}
				}
			}
			goto LAB_1001eed0;
		}
	}
	DAT_101283d4 = 0;
LAB_1001eed0:
	if ((DAT_101283d5 != '\0') || (**(int **)(iVar2 + -0x76c4) != 0)) {
		control_draw_info_str();
	}
	return;
}

void ADD_PlrStringXY(int x, int y, int width, char *pszStr, char col)

{
	byte bVar1;
	longlong lVar2;
	byte *pbVar3;
	ulonglong uVar4;
	int iVar5;

	uVar4 = 0;
	iVar5 = (width - x) + 1;
	lVar2 = 0;
	pbVar3 = (byte *)pszStr;
	while (true) {
		if (*pbVar3 == 0)
			break;
		bVar1 = *pbVar3;
		pbVar3 = pbVar3 + 1;
		lVar2 = (ulonglong)(byte)(&DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]] + lVar2 + 1;
	}
	if ((int)lVar2 < iVar5) {
		uVar4 = (ulonglong)(uint)(iVar5 - (int)lVar2 >> 1);
	}
	lVar2 = (longlong)x + (ulonglong) * (uint *)(y * 4 + 0x1019f000) + 0x40 + uVar4;
	while (*pszStr != 0) {
		bVar1 = *pszStr;
		pszStr = (char *)((byte *)pszStr + 1);
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		uVar4 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar4 + 1;
		if (bVar1 != 0) {
			if ((int)uVar4 < iVar5) {
				CPrintString((int)lVar2, (uint)bVar1, col);
			}
		}
		lVar2 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar2 + 1;
	}
	return;
}

void PrintGameStr(int x, int y, char *str, int color)

{
	byte bVar1;
	longlong lVar2;

	lVar2 = (longlong)x + (ulonglong) * (uint *)(y * 4 + 0x1019f000) + 0x40;
	while (*str != 0) {
		bVar1 = *str;
		str = (char *)((byte *)str + 1);
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		if (bVar1 != 0) {
			CPrintString((int)lVar2, (uint)bVar1, (char)color);
		}
		lVar2 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar2 + 1;
	}
	return;
}

void MY_PlrStringXY(int x, int y, int width, char *pszStr, char col, int base)

{
	byte bVar1;
	longlong lVar2;
	byte *pbVar3;
	longlong lVar4;
	ulonglong uVar5;
	int iVar6;

	lVar4 = (longlong)base;
	uVar5 = 0;
	iVar6 = (width - x) + 1;
	lVar2 = 0;
	pbVar3 = (byte *)pszStr;
	while (true) {
		if (*pbVar3 == 0)
			break;
		bVar1 = *pbVar3;
		pbVar3 = pbVar3 + 1;
		lVar2 = (ulonglong)(byte)(&DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]] + lVar4 + lVar2;
	}
	if ((int)lVar2 < iVar6) {
		uVar5 = (ulonglong)(uint)(iVar6 - (int)lVar2 >> 1);
	}
	lVar2 = (longlong)x + (ulonglong) * (uint *)(y * 4 + 0x1019f000) + 0x40 + uVar5;
	while (*pszStr != 0) {
		bVar1 = *pszStr;
		pszStr = (char *)((byte *)pszStr + 1);
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		uVar5 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar4 + uVar5;
		if (bVar1 != 0) {
			if ((int)uVar5 < iVar6) {
				CPrintString((int)lVar2, (uint)bVar1, col);
			}
		}
		lVar2 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar4 + lVar2;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawChr(void)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char *pszStr;
	undefined4 uVar7;
	uint uVar8;
	uint uVar9;
	undefined4 uVar10;
	undefined4 uVar11;
	uint uVar12;
	undefined4 in_r8;
	undefined4 in_r9;
	int iVar13;
	undefined4 in_r10;
	undefined8 unaff_r20;
	bool col;
	undefined8 unaff_r21;
	int iVar14;
	undefined8 unaff_r22;
	int iVar15;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff58;
	undefined in_stack_ffffff5f;
	undefined4 in_stack_ffffff6c;
	undefined4 in_stack_ffffff70;
	undefined4 in_stack_ffffff74;
	undefined4 in_stack_ffffff78;
	undefined4 in_stack_ffffff7c;
	undefined4 in_stack_ffffff80;
	undefined4 in_stack_ffffff84;
	char acStack120[72];
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

	iVar5 = 0x100f8fd0;
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
	CelDecodeOnly(0x40, 0x1ff, _DAT_100f4028, 1, 0x140);
	pszStr = (char *)((int)plr + myplr * 0x55ec + 0x13c);
	uVar7 = 0;
	ADD_PlrStringXY(0x14, 0x20, 0x97, pszStr, '\0');
	cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
	if (cVar1 == '\0') {
		pszStr = *(char **)(iVar5 + -0x6520);
		uVar7 = 0;
		ADD_PlrStringXY(0xa8, 0x20, 299, pszStr, '\0');
	} else {
		if (cVar1 == '\x01') {
			pszStr = *(char **)(iVar5 + -0x6524);
			uVar7 = 0;
			ADD_PlrStringXY(0xa8, 0x20, 299, pszStr, '\0');
		} else {
			if (cVar1 == '\x02') {
				pszStr = *(char **)(iVar5 + -0x6528);
				uVar7 = 0;
				ADD_PlrStringXY(0xa8, 0x20, 299, pszStr, '\0');
			}
		}
	}
	wsprintf((int)acStack120, &DAT_100ddbd0, (int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4), pszStr, uVar7, in_r8,
	    in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74,
	    in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pszStr = acStack120;
	uVar7 = 0;
	ADD_PlrStringXY(0x42, 0x45, 0x6d, pszStr, '\0');
	wsprintf((int)acStack120, &DAT_100ddbd3, *(undefined4 *)((int)plr + myplr * 0x55ec + 0x1b8), pszStr, uVar7, in_r8,
	    in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74,
	    in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pszStr = acStack120;
	uVar7 = 0;
	ADD_PlrStringXY(0xd8, 0x45, 300, pszStr, '\0');
	if (*(char *)((int)plr + myplr * 0x55ec + 0x1b4) == '2') {
		strcpy(acStack120, *(char **)(iVar5 + -0x6534));
		uVar7 = 3;
	} else {
		wsprintf((int)acStack120, &DAT_100ddbd3, *(undefined4 *)((int)plr + myplr * 0x55ec + 0x1c0), pszStr, uVar7,
		    in_r8, in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
		    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
		uVar7 = 0;
	}
	pszStr = acStack120;
	ADD_PlrStringXY(0xd8, 0x61, 300, pszStr, (char)uVar7);
	wsprintf((int)acStack120, &DAT_100ddbd0, *(undefined4 *)((int)plr + myplr * 0x55ec + 0x1c8), pszStr, uVar7, in_r8,
	    in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74,
	    in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pszStr = acStack120;
	uVar7 = 0;
	ADD_PlrStringXY(0xd8, 0x92, 300, pszStr, '\0');
	iVar4 = myplr * 0x55ec;
	iVar6 = *(int *)((int)plr + iVar4 + 0x5558);
	uVar8 = (uint)(0 < iVar6);
	if (iVar6 < 0) {
		uVar8 = 2;
	}
	iVar13 = *(int *)((int)plr + iVar4 + 0x170);
	uVar9 = iVar13 / 5 + (iVar13 >> 0x1f);
	wsprintf((int)acStack120, &DAT_100ddbd0, *(int *)((int)plr + iVar4 + 0x554c) + iVar6 + uVar9 + (uVar9 >> 0x1f),
	    pszStr, uVar7, in_r8, in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
	    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pszStr = acStack120;
	ADD_PlrStringXY(0x102, 0xb7, 0x12d, pszStr, (char)uVar8);
	iVar6 = *(int *)((int)plr + myplr * 0x55ec + 0x5554);
	col = 0 < iVar6;
	if (iVar6 < 0) {
		col = true;
	}
	wsprintf((int)acStack120, &DAT_100ddbdc, (*(int *)((int)plr + myplr * 0x55ec + 0x170) >> 1) + iVar6 + 0x32, pszStr,
	    uVar8, in_r8, in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
	    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	ADD_PlrStringXY(0x102, 0xd3, 0x12d, acStack120, col);
	iVar4 = myplr * 0x55ec;
	iVar6 = *(int *)((int)plr + iVar4 + 0x5550);
	uVar8 = (uint)(0 < iVar6);
	if (iVar6 < 0) {
		uVar8 = 2;
	}
	iVar13 = *(int *)((int)plr + iVar4 + 0x5544);
	iVar2 = *(int *)((int)plr + iVar4 + 0xa60);
	iVar15 = *(int *)((int)plr + iVar4 + 0x555c);
	uVar9 = (iVar13 * iVar6) / 100 + (iVar13 * iVar6 >> 0x1f);
	iVar14 = iVar13 + uVar9 + (uVar9 >> 0x1f) + iVar15;
	if (iVar2 == 3) {
		if (*(char *)((int)plr + iVar4 + 0x15c) == '\x01') {
			iVar14 = iVar14 + *(int *)((int)plr + iVar4 + 0x184);
		} else {
			iVar14 = iVar14 + (*(int *)((int)plr + iVar4 + 0x184) >> 1);
		}
	} else {
		iVar14 = iVar14 + *(int *)((int)plr + iVar4 + 0x184);
	}
	iVar3 = *(int *)((int)plr + iVar4 + 0x5548);
	uVar9 = (iVar3 * iVar6) / 100 + (iVar3 * iVar6 >> 0x1f);
	iVar15 = iVar3 + uVar9 + (uVar9 >> 0x1f) + iVar15;
	if (iVar2 == 3) {
		if (*(char *)((int)plr + iVar4 + 0x15c) == '\x01') {
			iVar15 = iVar15 + *(int *)((int)plr + iVar4 + 0x184);
		} else {
			iVar15 = iVar15 + (*(int *)((int)plr + iVar4 + 0x184) >> 1);
		}
	} else {
		iVar15 = iVar15 + *(int *)((int)plr + iVar4 + 0x184);
	}
	wsprintf((int)acStack120, *(undefined4 *)(iVar5 + -0x653c), iVar14, iVar15, iVar3, (PlayerStruct *)((int)plr + iVar4),
	    iVar13, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74,
	    in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	if ((iVar14 < 100) && (iVar15 < 100)) {
		pszStr = acStack120;
		uVar7 = 0;
		MY_PlrStringXY(0x102, 0xef, 0x12d, pszStr, (char)uVar8, 0);
	} else {
		pszStr = acStack120;
		uVar7 = 0xffffffff;
		MY_PlrStringXY(0xfe, 0xef, 0x131, pszStr, (char)uVar8, -1);
	}
	cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x1c5);
	uVar9 = (uint)(cVar1 != '\0');
	if ((int)cVar1 < 0x4b) {
		wsprintf((int)acStack120, &DAT_100ddbdc, (int)cVar1, pszStr, uVar8, uVar7, iVar13, in_r10, in_stack_ffffff58,
		    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
		    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	} else {
		uVar9 = 3;
		wsprintf((int)acStack120, &DAT_100ddbe7, (int)cVar1, pszStr, uVar8, uVar7, iVar13, in_r10, in_stack_ffffff58,
		    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
		    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	}
	pszStr = acStack120;
	ADD_PlrStringXY(0x101, 0x114, 300, pszStr, (char)uVar9);
	cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x1c6);
	uVar8 = (uint)(cVar1 != '\0');
	if ((int)cVar1 < 0x4b) {
		wsprintf((int)acStack120, &DAT_100ddbdc, (int)cVar1, pszStr, uVar9, uVar7, iVar13, in_r10, in_stack_ffffff58,
		    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
		    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	} else {
		uVar8 = 3;
		wsprintf((int)acStack120, &DAT_100ddbe7, (int)cVar1, pszStr, uVar9, uVar7, iVar13, in_r10, in_stack_ffffff58,
		    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
		    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	}
	pszStr = acStack120;
	ADD_PlrStringXY(0x101, 0x130, 300, pszStr, (char)uVar8);
	cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x1c7);
	uVar9 = (uint)(cVar1 != '\0');
	if ((int)cVar1 < 0x4b) {
		wsprintf((int)acStack120, &DAT_100ddbdc, (int)cVar1, pszStr, uVar8, uVar7, iVar13, in_r10, in_stack_ffffff58,
		    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
		    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	} else {
		uVar9 = 3;
		wsprintf((int)acStack120, &DAT_100ddbe7, (int)cVar1, pszStr, uVar8, uVar7, iVar13, in_r10, in_stack_ffffff58,
		    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
		    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	}
	pszStr = acStack120;
	ADD_PlrStringXY(0x101, 0x14c, 300, pszStr, (char)uVar9);
	uVar10 = 0;
	wsprintf((int)acStack120, &DAT_100ddbd0, *(undefined4 *)((int)plr + myplr * 0x55ec + 0x164), pszStr, uVar9, uVar7,
	    iVar13, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74,
	    in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	if (*(int *)((int)plr + myplr * 0x55ec + 0x164) == *(int *)(&DAT_1010ea84 + (int)*(char *)((int)plr + myplr * 0x55ec + 0x15c) * 0x10)) {
		uVar10 = 3;
	}
	pszStr = acStack120;
	ADD_PlrStringXY(0x5f, 0x9b, 0x7e, pszStr, (char)uVar10);
	uVar11 = 0;
	wsprintf((int)acStack120, &DAT_100ddbd0, *(undefined4 *)((int)plr + myplr * 0x55ec + 0x16c), pszStr, uVar10, uVar7,
	    iVar13, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74,
	    in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	if (*(int *)((int)plr + myplr * 0x55ec + 0x16c) == *(int *)((int)*(char *)((int)plr + myplr * 0x55ec + 0x15c) * 0x10 + 0x1010ea88)) {
		uVar11 = 3;
	}
	pszStr = acStack120;
	ADD_PlrStringXY(0x5f, 0xb7, 0x7e, pszStr, (char)uVar11);
	uVar10 = 0;
	wsprintf((int)acStack120, &DAT_100ddbd0, *(undefined4 *)((int)plr + myplr * 0x55ec + 0x174), pszStr, uVar11, uVar7,
	    iVar13, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74,
	    in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	if (*(int *)((int)plr + myplr * 0x55ec + 0x174) == *(int *)((int)*(char *)((int)plr + myplr * 0x55ec + 0x15c) * 0x10 + 0x1010ea8c)) {
		uVar10 = 3;
	}
	pszStr = acStack120;
	ADD_PlrStringXY(0x5f, 0xd3, 0x7e, pszStr, (char)uVar10);
	uVar11 = 0;
	wsprintf((int)acStack120, &DAT_100ddbd0, *(undefined4 *)((int)plr + myplr * 0x55ec + 0x17c), pszStr, uVar10, uVar7,
	    iVar13, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74,
	    in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	if (*(int *)((int)plr + myplr * 0x55ec + 0x17c) == *(int *)((int)*(char *)((int)plr + myplr * 0x55ec + 0x15c) * 0x10 + 0x1010ea90)) {
		uVar11 = 3;
	}
	pszStr = acStack120;
	ADD_PlrStringXY(0x5f, 0xef, 0x7e, pszStr, (char)uVar11);
	iVar4 = *(int *)((int)plr + myplr * 0x55ec + 0x164);
	iVar6 = *(int *)((int)plr + myplr * 0x55ec + 0x160);
	uVar8 = (uint)(iVar4 < iVar6);
	if (iVar6 < iVar4) {
		uVar8 = 2;
	}
	wsprintf((int)acStack120, &DAT_100ddbd0, iVar6, pszStr, uVar11, uVar7, iVar13, in_r10, in_stack_ffffff58,
	    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pszStr = acStack120;
	ADD_PlrStringXY(0x8f, 0x9b, 0xad, pszStr, (char)uVar8);
	iVar4 = *(int *)((int)plr + myplr * 0x55ec + 0x16c);
	iVar6 = *(int *)((int)plr + myplr * 0x55ec + 0x168);
	uVar9 = (uint)(iVar4 < iVar6);
	if (iVar6 < iVar4) {
		uVar9 = 2;
	}
	wsprintf((int)acStack120, &DAT_100ddbd0, iVar6, pszStr, uVar8, uVar7, iVar13, in_r10, in_stack_ffffff58,
	    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pszStr = acStack120;
	ADD_PlrStringXY(0x8f, 0xb7, 0xad, pszStr, (char)uVar9);
	iVar6 = *(int *)((int)plr + myplr * 0x55ec + 0x170);
	iVar4 = *(int *)((int)plr + myplr * 0x55ec + 0x174);
	uVar8 = (uint)(iVar4 < iVar6);
	if (iVar6 < iVar4) {
		uVar8 = 2;
	}
	wsprintf((int)acStack120, &DAT_100ddbd0, iVar6, pszStr, uVar9, uVar7, iVar13, in_r10, in_stack_ffffff58,
	    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pszStr = acStack120;
	ADD_PlrStringXY(0x8f, 0xd3, 0xad, pszStr, (char)uVar8);
	iVar4 = *(int *)((int)plr + myplr * 0x55ec + 0x17c);
	iVar6 = *(int *)((int)plr + myplr * 0x55ec + 0x178);
	uVar9 = (uint)(iVar4 < iVar6);
	if (iVar6 < iVar4) {
		uVar9 = 2;
	}
	wsprintf((int)acStack120, &DAT_100ddbd0, iVar6, pszStr, uVar8, uVar7, iVar13, in_r10, in_stack_ffffff58,
	    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pszStr = acStack120;
	ADD_PlrStringXY(0x8f, 0xef, 0xad, pszStr, (char)uVar9);
	if ((0 < *(int *)((int)plr + myplr * 0x55ec + 0x180)) && (iVar6 = CalcStatDiff(myplr), iVar6 < *(int *)((int)plr + myplr * 0x55ec + 0x180))) {
		iVar6 = CalcStatDiff(myplr);
		*(int *)((int)plr + myplr * 0x55ec + 0x180) = iVar6;
	}
	iVar6 = *(int *)((int)plr + myplr * 0x55ec + 0x180);
	if (0 < iVar6) {
		wsprintf((int)acStack120, &DAT_100ddbd0, iVar6, pszStr, uVar9, uVar7, iVar13, in_r10, in_stack_ffffff58,
		    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
		    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
		pszStr = acStack120;
		uVar9 = 2;
		ADD_PlrStringXY(0x5f, 0x10a, 0x7e, pszStr, '\x02');
		iVar6 = (int)*(char *)((int)plr + myplr * 0x55ec + 0x15c);
		if (*(int *)((int)plr + myplr * 0x55ec + 0x164) < *(int *)(&DAT_1010ea84 + iVar6 * 0x10)) {
			pszStr = (char *)(_DAT_10128168 + 2);
			uVar9 = 0x29;
			CelDecodeOnly(0xc9, 0x13f, *(BYTE **)(iVar5 + -0x4fac), (int)pszStr, 0x29);
		}
		iVar6 = iVar6 * 0x10;
		if (*(int *)((int)plr + myplr * 0x55ec + 0x16c) < *(int *)(iVar6 + 0x1010ea88)) {
			pszStr = (char *)(iRam1012816c + 4);
			uVar9 = 0x29;
			CelDecodeOnly(0xc9, 0x15b, *(BYTE **)(iVar5 + -0x4fac), (int)pszStr, 0x29);
		}
		if (*(int *)((int)plr + myplr * 0x55ec + 0x174) < *(int *)(iVar6 + 0x1010ea8c)) {
			pszStr = (char *)(iRam10128170 + 6);
			uVar9 = 0x29;
			CelDecodeOnly(0xc9, 0x178, *(BYTE **)(iVar5 + -0x4fac), (int)pszStr, 0x29);
		}
		if (*(int *)((int)plr + myplr * 0x55ec + 0x17c) < *(int *)(iVar6 + 0x1010ea90)) {
			pszStr = (char *)(iRam10128174 + 8);
			uVar9 = 0x29;
			CelDecodeOnly(0xc9, 0x194, *(BYTE **)(iVar5 + -0x4fac), (int)pszStr, 0x29);
		}
	}
	iVar5 = *(int *)((int)plr + myplr * 0x55ec + 0x198);
	col = *(int *)((int)plr + myplr * 0x55ec + 400) < iVar5;
	uVar12 = (uint)col;
	uVar8 = (uint)col;
	wsprintf((int)acStack120, &DAT_100ddbd0, iVar5 >> 6, pszStr, uVar9, uVar7, iVar13, in_r10, in_stack_ffffff58,
	    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pszStr = acStack120;
	ADD_PlrStringXY(0x5f, 0x130, 0x7e, pszStr, col);
	iVar5 = *(int *)((int)plr + myplr * 0x55ec + 0x194);
	if (iVar5 != *(int *)((int)plr + myplr * 0x55ec + 0x198)) {
		uVar12 = 2;
	}
	wsprintf((int)acStack120, &DAT_100ddbd0, iVar5 >> 6, pszStr, uVar8, uVar7, iVar13, in_r10, in_stack_ffffff58,
	    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pszStr = acStack120;
	ADD_PlrStringXY(0x8f, 0x130, 0xae, pszStr, (char)uVar12);
	iVar5 = *(int *)((int)plr + myplr * 0x55ec + 0x1ac);
	col = *(int *)((int)plr + myplr * 0x55ec + 0x1a4) < iVar5;
	uVar8 = (uint)col;
	wsprintf((int)acStack120, &DAT_100ddbd0, iVar5 >> 6, pszStr, uVar12, uVar7, iVar13, in_r10, in_stack_ffffff58,
	    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	pszStr = acStack120;
	ADD_PlrStringXY(0x5f, 0x14c, 0x7e, pszStr, col);
	iVar5 = *(int *)((int)plr + myplr * 0x55ec + 0x1a8);
	if (iVar5 != *(int *)((int)plr + myplr * 0x55ec + 0x1ac)) {
		col = true;
	}
	wsprintf((int)acStack120, &DAT_100ddbd0, iVar5 >> 6, pszStr, uVar8, uVar7, iVar13, in_r10, in_stack_ffffff58,
	    in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
	    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
	ADD_PlrStringXY(0x8f, 0x14c, 0xae, acStack120, col);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckLvlBtn(void)

{
	if (_DAT_10128160 != 0) {
		return;
	}
	if (MouseX < 0x28) {
		return;
	}
	if (0x51 < MouseX) {
		return;
	}
	if (_MouseY < 0x139) {
		return;
	}
	if (0x14f < _MouseY) {
		return;
	}
	_DAT_10128160 = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ReleaseLvlBtn(void)

{
	if ((((0x27 < MouseX) && (MouseX < 0x52)) && (0x138 < _MouseY)) && (_MouseY < 0x150)) {
		_DAT_101282b8 = 1;
	}
	_DAT_10128160 = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawLevelUpIcon(void)

{
	int iVar1;
	int nCel;

	iVar1 = 0x100f8fd0;
	if (stextflag == '\0') {
		if (_DAT_10128160 == 0) {
			nCel = 2;
		} else {
			nCel = 3;
		}
		ADD_PlrStringXY(0, 0x12f, 0x78, "Level Up", '\0');
		CelDecodeOnly(0x68, 0x1ef, *(BYTE **)(iVar1 + -0x4fac), nCel, 0x29);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckChrBtns(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	int *piVar8;
	int *piVar9;
	undefined4 *puVar10;
	int iVar11;
	int iVar12;
	longlong lVar13;

	iVar5 = MouseX;
	iVar4 = _MouseY;
	if ((_DAT_10128164 == 0) && (iVar6 = myplr * 0x55ec, *(int *)((int)plr + iVar6 + 0x180) != 0)) {
		lVar13 = 2;
		piVar9 = (int *)&DAT_100f63e0;
		puVar10 = (undefined4 *)&DAT_10128168;
		piVar7 = (int *)(&DAT_1010ea84 + (int)*(char *)((int)plr + iVar6 + 0x15c) * 0x10);
		iVar1 = *(int *)((int)plr + iVar6 + 0x164);
		iVar11 = 0;
		iVar2 = *(int *)((int)plr + iVar6 + 0x16c);
		iVar3 = *(int *)((int)plr + iVar6 + 0x174);
		iVar6 = *(int *)((int)plr + iVar6 + 0x17c);
		do {
			if (iVar11 == 2) {
				if (iVar3 < *piVar7)
					goto LAB_1001fe80;
			} else {
				if (iVar11 < 2) {
					if (iVar11 == 0) {
						if (iVar1 < *piVar7)
							goto LAB_1001fe80;
					} else {
						if ((-1 < iVar11) && (iVar2 < *piVar7)) {
						LAB_1001fe80:
							if ((*piVar9 <= iVar5) && (((iVar5 <= *piVar9 + piVar9[2] && (piVar9[1] <= iVar4)) && (iVar4 <= piVar9[1] + piVar9[3])))) {
								*puVar10 = 1;
								_DAT_10128164 = 1;
							}
						}
					}
				} else {
					if ((iVar11 < 4) && (iVar6 < *piVar7))
						goto LAB_1001fe80;
				}
			}
			iVar12 = iVar11 + 1;
			piVar8 = piVar7 + 1;
			if (iVar12 == 2) {
				if (iVar3 < *piVar8)
					goto LAB_1001ff38;
			} else {
				if (iVar12 < 2) {
					if (iVar11 == -1) {
						if (iVar1 < *piVar8)
							goto LAB_1001ff38;
					} else {
						if ((-1 < iVar12) && (iVar2 < *piVar8)) {
						LAB_1001ff38:
							if ((piVar9[4] <= iVar5) && (((iVar5 <= piVar9[4] + piVar9[6] && (piVar9[5] <= iVar4)) && (iVar4 <= piVar9[5] + piVar9[7])))) {
								puVar10[1] = 1;
								_DAT_10128164 = 1;
							}
						}
					}
				} else {
					if ((iVar12 < 4) && (iVar6 < *piVar8))
						goto LAB_1001ff38;
				}
			}
			piVar7 = piVar7 + 2;
			piVar9 = piVar9 + 8;
			puVar10 = puVar10 + 2;
			iVar11 = iVar11 + 2;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void ReleaseChrBtns(void)

{
	int iVar1;
	int *piVar2;
	int *piVar3;

	iVar1 = 0;
	piVar3 = (int *)&DAT_10128168;
	piVar2 = (int *)&DAT_100f63e0;
	_DAT_10128164 = 0;
	do {
		if (*piVar3 != 0) {
			*piVar3 = 0;
			if ((((*piVar2 <= MouseX) && (MouseX <= *piVar2 + piVar2[2])) && (piVar2[1] <= _MouseY)) && (_MouseY <= piVar2[1] + piVar2[3])) {
				if (iVar1 == 2) {
					NetSendCmdParam1(1, '\x05', 1);
					*(int *)((int)plr + myplr * 0x55ec + 0x180) = *(int *)((int)plr + myplr * 0x55ec + 0x180) + -1;
				} else {
					if (iVar1 < 2) {
						if (iVar1 == 0) {
							NetSendCmdParam1(1, '\x03', 1);
							*(int *)((int)plr + myplr * 0x55ec + 0x180) = *(int *)((int)plr + myplr * 0x55ec + 0x180) + -1;
						} else {
							if (-1 < iVar1) {
								NetSendCmdParam1(1, '\x04', 1);
								*(int *)((int)plr + myplr * 0x55ec + 0x180) = *(int *)((int)plr + myplr * 0x55ec + 0x180) + -1;
							}
						}
					} else {
						if (iVar1 < 4) {
							NetSendCmdParam1(1, '\x06', 1);
							*(int *)((int)plr + myplr * 0x55ec + 0x180) = *(int *)((int)plr + myplr * 0x55ec + 0x180) + -1;
						}
					}
				}
			}
		}
		iVar1 = iVar1 + 1;
		piVar2 = piVar2 + 4;
		piVar3 = piVar3 + 1;
	} while (iVar1 < 4);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int DrawDurIcon4Item(ItemStruct *pItem, int x, int c)

{
	int iVar1;

	iVar1 = pItem->_itype;
	if ((iVar1 != -1) && (pItem->_iDurability < 6)) {
		if (c == 0) {
			if (pItem->_iClass == '\x01') {
				if (iVar1 == 4) {
					c = 5;
				} else {
					if (iVar1 < 4) {
						if (iVar1 == 2) {
							c = 6;
						} else {
							if (iVar1 < 2) {
								if (0 < iVar1) {
									c = 2;
								}
							} else {
								c = 7;
							}
						}
					} else {
						if (iVar1 == 10) {
							c = 8;
						}
					}
				}
			} else {
				c = 1;
			}
		}
		if (2 < pItem->_iDurability) {
			c = c + 8;
		}
		CelDecodeOnly(x, 0x1ef, _DAT_100f400c, c, 0x20);
		x = x + -0x28;
	}
	return x;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawDurIcon(void)

{
	int iVar1;
	int x;

	if (((_DAT_101282b8 == 0) && (_DAT_1019cbec == 0)) || ((_DAT_1013c970 == 0 && (_DAT_10128158 == 0)))) {
		x = 0x290;
		if ((_DAT_1013c970 != 0) || (_DAT_10128158 != 0)) {
			x = 0x150;
		}
		iVar1 = myplr * 0x55ec;
		x = DrawDurIcon4Item((ItemStruct *)((int)plr + iVar1 + 0x498), x, 4);
		x = DrawDurIcon4Item((ItemStruct *)((int)plr + iVar1 + 0xd38), x, 3);
		x = DrawDurIcon4Item((ItemStruct *)((int)plr + iVar1 + 0xa58), x, 0);
		DrawDurIcon4Item((ItemStruct *)((int)plr + iVar1 + 0xbc8), x, 0);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void RedBack(void)

{
	byte *pbVar1;
	longlong lVar2;
	byte bVar3;
	longlong lVar4;
	byte *local_18;
	int local_14;
	byte *local_10[4];

	if (_DAT_10129140 == 0) {
		local_14 = 0x1200;
	} else {
		local_14 = 0x600;
	}
	if (leveltype == '\x04') {
		lVar4 = 0x160;
		local_10[0] = (byte *)(_DAT_101271e4 + 0x1e040);
		local_14 = _DAT_101b2028 + local_14;
		do {
			lVar2 = 0x280;
			pbVar1 = local_10[0];
			do {
				local_10[0] = pbVar1;
				bVar3 = *local_10[0];
				if (0x1f < bVar3) {
					bVar3 = *(byte *)(local_14 + (uint)bVar3);
				}
				lVar2 = lVar2 + -1;
				*local_10[0] = bVar3;
				pbVar1 = local_10[0] + 1;
			} while (lVar2 != 0);
			lVar4 = lVar4 + -1;
			local_10[0] = local_10[0] + 0x81;
		} while (lVar4 != 0);
	} else {
		lVar4 = 0x160;
		local_10[0] = (byte *)(_DAT_101271e4 + 0x1e040);
		local_14 = _DAT_101b2028 + local_14;
		do {
			local_18 = local_10[0];
			asm_Cel2DecDatOnly(local_10, &local_18, local_14, 0x280);
			lVar4 = lVar4 + -1;
			local_10[0] = local_10[0] + 0x80;
		} while (lVar4 != 0);
	}
	return;
}

void PrintSBookStr(int x, int y, BOOL cjustflag, char *pszStr, char col)

{
	byte bVar1;
	longlong lVar2;
	byte *pbVar3;
	ulonglong uVar4;
	longlong lVar5;

	uVar4 = 0;
	lVar5 = (longlong)x + (ulonglong) * (uint *)(&DAT_1019ed80 + y * 4) + 0x1b8;
	if (cjustflag != 0) {
		lVar2 = 0;
		pbVar3 = (byte *)pszStr;
		while (true) {
			if (*pbVar3 == 0)
				break;
			bVar1 = *pbVar3;
			pbVar3 = pbVar3 + 1;
			lVar2 = (ulonglong)(byte)(
			            &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]]
			    + lVar2 + 1;
		}
		if ((int)lVar2 < 0xde) {
			uVar4 = (ulonglong)(uint)(0xde - (int)lVar2 >> 1);
		}
		lVar5 = lVar5 + uVar4;
	}
	while (*pszStr != 0) {
		bVar1 = *pszStr;
		pszStr = (char *)((byte *)pszStr + 1);
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]];
		uVar4 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar4 + 1;
		if (bVar1 != 0) {
			if ((int)uVar4 < 0xdf) {
				CPrintString((int)lVar5, (uint)bVar1, col);
			}
		}
		lVar5 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar5 + 1;
	}
	return;
}

char GetSBookTrans(int ii, BOOL townok)

{
	uint uVar1;
	int iVar2;
	ulonglong uVar3;
	BOOL BVar4;
	ulonglong uVar5;
	int iVar6;
	char cVar7;

	iVar2 = 0x100f8fd0;
	cVar7 = '\x01';
	uVar5 = 1;
	uVar3 = 64bitAndOperator(0, 1, (longlong)ii + -1);
	iVar6 = myplr * 0x55ec;
	if ((uVar5 & (ulonglong) * (uint *)((int)plr + iVar6 + 0x5564) | uVar3 & (ulonglong) * (uint *)((int)plr + iVar6 + 0x5560)) != 0) {
		cVar7 = '\x03';
	}
	uVar1 = 1 << (longlong)ii + -1;
	if ((uVar1 & *(uint *)((int)plr + iVar6 + 0x110) | (int)uVar1 >> 0x1f & *(uint *)((int)plr + iVar6 + 0x10c)) != 0) {
		cVar7 = '\0';
	}
	if (cVar7 == '\x01') {
		BVar4 = CheckSpell(myplr, ii, '\x01', 1);
		if (BVar4 == 0) {
			cVar7 = '\x04';
		}
		if ((char)(*(char *)((int)plr + myplr * 0x55ec + ii + 0xc1) + *(char *)((int)plr + myplr * 0x55ec + 0x5570)) < '\x01') {
			cVar7 = '\x04';
		}
	}
	if ((((townok != 0) && (**(char **)(iVar2 + -0x77e4) == '\0')) && (cVar7 != '\x04')) && (*(int *)(*(int *)(iVar2 + -0x769c) + ii * 0x38 + 0x18) == 0)) {
		cVar7 = '\x04';
	}
	return cVar7;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawSpellBook(void)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	undefined8 uVar7;
	ulonglong uVar8;
	char t;
	int iVar9;
	ulonglong uVar10;
	longlong ii;
	char *pszStr;
	int iVar11;
	undefined *puVar12;
	int iVar13;
	undefined4 uVar14;
	longlong lVar15;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 in_r13;
	ulonglong uVar16;
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
	int iVar17;
	undefined8 unaff_r25;
	int iVar18;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	int yp;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined4 in_stack_ffffff8c;
	undefined4 in_stack_ffffff90;
	undefined4 in_stack_ffffff94;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	int local_58;
	int local_54[2];
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

	uVar7 = 0x100f8fd0;
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
	uVar16 = ZEXT48("Spell Level 0 - Unusable");
	CelDecodeOnly(0x180, 0x1ff, _DAT_100f4008, 1, 0x140);
	lVar15 = (ulonglong)_DAT_1012815c * 0x4c;
	CelDecodeOnly((int)lVar15 + 0x187, 0x1fc, *(BYTE **)((int)uVar7 + -0x4fcc), _DAT_1012815c + 1, 0x4c);
	yp = 0xd7;
	iVar18 = 1;
	ii._4_4_ = myplr * 0x55ec;
	uVar1 = *(uint *)((int)plr + ii._4_4_ + 0x5560);
	iVar17 = 4;
	uVar2 = *(uint *)((int)plr + ii._4_4_ + 0x104);
	uVar3 = *(uint *)((int)plr + ii._4_4_ + 0x5564);
	uVar4 = *(uint *)((int)plr + ii._4_4_ + 0x108);
	uVar5 = *(uint *)((int)plr + ii._4_4_ + 0x10c);
	uVar6 = *(uint *)((int)plr + ii._4_4_ + 0x110);
	do {
		ii._4_4_ = *(int *)(_DAT_1012815c * 0x1c + iVar17 + 0x100f641c);
		if (ii._4_4_ != -1) {
			uVar10 = 1;
			uVar8 = 64bitAndOperator(0, 1, ii._4_4_ + -1);
			if (((ulonglong)(uVar6 | uVar3 | uVar4) & uVar10 | (ulonglong)(uVar5 | uVar1 | uVar2) & uVar8) != 0) {
				t = GetSBookTrans(ii._4_4_, 1);
				SetSpellTrans(t);
				DrawSpellCel(
				    0x18b, yp, *(BYTE **)((int)uVar7 + -0x4fd0), (int)*(char *)((int)uVar7 + -0x2cf8 + ii._4_4_), 0x25);
				if ((ii._4_4_ == *(int *)((int)plr + myplr * 0x55ec + 0xb4)) && (t == *(char *)((int)plr + myplr * 0x55ec + 0xb8))) {
					SetSpellTrans('\0');
					DrawSpellCel(0x18b, yp, *(BYTE **)((int)uVar7 + -0x4fd0), 0x2b, 0x25);
				}
				pszStr = *(char **)(*(int *)((int)uVar7 + -0x769c) + ii._4_4_ * 0x38 + 4);
				iVar13 = 0;
				PrintSBookStr(10, yp + -0x17, 0, pszStr, '\0');
				t = GetSBookTrans(ii._4_4_, 0);
				if (t == '\x03') {
					wsprintf((int)&DAT_101282d4, "Staff (%i charges)",
					    *(undefined4 *)((int)plr + myplr * 0x55ec + 0xb3c), pszStr, iVar13, (int)lVar15, in_r9, in_r10,
					    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94,
					    in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4);
				} else {
					if ((t < '\x03') && (t == '\0')) {
						strcpy(&DAT_101282d4, "Skill");
					} else {
						iVar9 = GetManaAmount(myplr, ii._4_4_);
						iVar9 = iVar9 >> 6;
						GetDamageAmt(ii._4_4_, local_54, &local_58);
						if (local_54[0] == -1) {
							iVar11 = local_54[0];
							wsprintf((int)&DAT_101282d4, "Mana: %i   Dam: n/a", iVar9, 0xffffffff, iVar13, (int)lVar15,
							    in_r9, in_r10, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c,
							    in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c,
							    in_stack_ffffffa0, in_stack_ffffffa4);
						} else {
							iVar11 = local_54[0];
							iVar13 = local_58;
							wsprintf((int)&DAT_101282d4, "Mana: %i  Dam: %i - %i", iVar9, local_54[0], local_58,
							    (int)lVar15, in_r9, in_r10, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c,
							    in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c,
							    in_stack_ffffffa0, in_stack_ffffffa4);
						}
						if (ii._4_4_ == 0x24) {
							wsprintf((int)&DAT_101282d4, "Mana: %i  Dam: 1/3 tgt hp", iVar9, iVar11, iVar13,
							    (int)lVar15, in_r9, in_r10, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c,
							    in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c,
							    in_stack_ffffffa0, in_stack_ffffffa4);
						}
						uVar14 = 0;
						puVar12 = &DAT_101282d4;
						PrintSBookStr(10, yp + -1, 0, &DAT_101282d4, '\0');
						ii = (longlong) * (char *)(myplr * 0x55ec + ii._4_4_ + 0x10186f81) + (longlong) * (char *)((int)plr + myplr * 0x55ec + 0x5570);
						ii._4_4_ = (int)ii;
						if (ii < 0) {
							ii._4_4_ = 0;
						}
						if (ii._4_4_ == 0) {
							wsprintf((int)&DAT_101282d4, (int)uVar16, 0, puVar12, uVar14, (int)lVar15, in_r9, in_r10,
							    in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90,
							    in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0,
							    in_stack_ffffffa4);
						} else {
							wsprintf((int)&DAT_101282d4, "Spell Level %i", ii._4_4_, puVar12, uVar14, (int)lVar15,
							    in_r9, in_r10, in_stack_ffffff78, in_stack_ffffff7f, in_stack_ffffff8c,
							    in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98, in_stack_ffffff9c,
							    in_stack_ffffffa0, in_stack_ffffffa4);
						}
					}
				}
				PrintSBookStr(10, yp + -0xc, 0, &DAT_101282d4, '\0');
			}
		}
		iVar18 = iVar18 + 1;
		iVar17 = iVar17 + 4;
		yp = yp + 0x2b;
	} while (iVar18 < 8);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckSBook(void)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	undefined4 *puVar6;
	uint uVar7;
	uint uVar8;
	int iVar9;
	int iVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	undefined uVar13;
	int iVar14;

	iVar9 = MouseX;
	iVar10 = 0x100f8fd0;
	if ((((0x14a < MouseX) && (MouseX < 0x170)) && (0x11 < _MouseY)) && (_MouseY < 0x13a)) {
		uVar8 = (_MouseY + -0x12) / 0x2b + (_MouseY + -0x12 >> 0x1f);
		iVar14 = myplr * 0x55ec;
		uVar1 = *(uint *)((int)plr + iVar14 + 0x5560);
		uVar2 = *(uint *)((int)plr + iVar14 + 0x104);
		uVar3 = *(uint *)((int)plr + iVar14 + 0x5564);
		uVar4 = *(uint *)((int)plr + iVar14 + 0x108);
		uVar7 = *(uint *)(&DAT_100f6420 + _DAT_1012815c * 0x1c + (uVar8 + (uVar8 >> 0x1f)) * 4);
		uVar8 = *(uint *)((int)plr + iVar14 + 0x10c);
		uVar5 = *(uint *)((int)plr + iVar14 + 0x110);
		if (uVar7 != 0xffffffff) {
			uVar12 = 1;
			uVar11 = 64bitAndOperator(0, 1, (ulonglong)uVar7 - 1);
			if (((ulonglong)(uVar5 | uVar3 | uVar4) & uVar12 | (ulonglong)(uVar8 | uVar1 | uVar2) & uVar11) != 0) {
				uVar13 = 1;
				if ((uVar12 & (ulonglong)uVar3 | uVar11 & (ulonglong)uVar1) != 0) {
					uVar13 = 3;
				}
				if ((uVar12 & (ulonglong)uVar5 | uVar11 & (ulonglong)uVar8) != 0) {
					uVar13 = 0;
				}
				puVar6 = *(undefined4 **)(iVar10 + -0x76bc);
				*(uint *)((int)plr + iVar14 + 0xb4) = uVar7;
				*(undefined *)((int)plr + iVar14 + 0xb8) = uVar13;
				*puVar6 = 0xff;
			}
		}
	}
	if (((0x146 < iVar9) && (iVar9 < 0x279)) && ((0x13f < _MouseY && (_MouseY < 0x15d)))) {
		uVar1 = (iVar9 + -0x147) / 0x4c + (iVar9 + -0x147 >> 0x1f);
		_DAT_1012815c = uVar1 + (uVar1 >> 0x1f);
	}
	return;
}

char *get_pieces_str(int nGold)

{
	if (nGold == 1) {
		return PTR_s_piece_100f2a74;
	}
	return PTR_s_pieces_100f2a70;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawGoldSplit(int amount)

{
	byte bVar1;
	int iVar2;
	char *pszStr;
	undefined4 uVar3;
	byte *pbVar4;
	undefined4 uVar5;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar6;
	int sx;
	byte *pbVar7;
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
	lVar6 = 0;
	pbVar7 = &DAT_101282d4;
	uVar3 = 1;
	uVar5 = 0x105;
	CelDecodeOnly(0x19f, 0x152, _DAT_100f401c, 1, 0x105);
	wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x6564), _DAT_101282c8, uVar3, uVar5, in_r8, in_r9, in_r10,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
	    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	uVar3 = 3;
	pbVar4 = pbVar7;
	ADD_PlrStringXY(0x16e, 0x57, 600, &DAT_101282d4, '\x03');
	pszStr = get_pieces_str(_DAT_101282c8);
	wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x6568), pszStr, pbVar4, uVar3, in_r8, in_r9, in_r10,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
	    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	ADD_PlrStringXY(0x16e, 0x67, 600, &DAT_101282d4, '\x03');
	pszStr = *(char **)(iVar2 + -0x656c);
	uVar3 = 3;
	ADD_PlrStringXY(0x16e, 0x79, 600, pszStr, '\x03');
	if (amount < 1) {
		sx = 0x1c2;
	} else {
		wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x6570), amount, pszStr, uVar3, in_r8, in_r9, in_r10,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4,
		    in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
		PrintGameStr(0x184, 0x8c, &DAT_101282d4, 0);
		sx = 0;
		while (bVar1 = *pbVar7, sx < (int)(char)bVar1) {
			pbVar7 = pbVar7 + 1;
			sx = sx + 1;
			lVar6 = (ulonglong)(byte)(
			            &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]]
			    + lVar6 + 1;
		}
		sx = (int)lVar6 + 0x1c4;
	}
	CelDecodeOnly(sx, 300, **(BYTE ***)(iVar2 + -0x7774), _DAT_101282d0, 0xc);
	_DAT_101282d0 = (_DAT_101282d0 & 7) + 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void control_drop_gold(char vkey)

{
	char cVar1;
	size_t sVar2;
	int iVar3;
	size_t sVar4;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	char *_Str;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_4c;
	char acStack41[21];
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
	if (*(int *)((int)plr + myplr * 0x55ec + 0x194) >> 6 == 0) {
		_DAT_10128178 = 0;
		_DAT_101282cc = 0;
	} else {
		memset(acStack41 + 1, 0, 6);
		_itoa(_DAT_101282cc, acStack41 + 1, 10);
		if (vkey == '\r') {
			if (0 < _DAT_101282cc) {
				control_remove_gold(myplr, **(int **)(local_4c + -0x7710));
			}
			_DAT_10128178 = 0;
		} else {
			if (vkey == '\x1b') {
				_DAT_10128178 = 0;
				_DAT_101282cc = 0;
			} else {
				if (vkey == '\b') {
					sVar2 = strlen(acStack41 + 1);
					acStack41[sVar2] = '\0';
					_DAT_101282cc = atoi(acStack41 + 1);
				} else {
					if ((-1 < (longlong)vkey + -0x30) && ((int)((longlong)vkey + -0x30) < 10)) {
						if ((_DAT_101282cc != 0) || (iVar3 = atoi(acStack41 + 1), cVar1 = vkey, iVar3 <= _DAT_101282c8)) {
							sVar2 = strlen(acStack41 + 1);
							_Str = acStack41 + 1;
							_Str[sVar2] = vkey;
							iVar3 = atoi(_Str);
							if (_DAT_101282c8 < iVar3) {
								return;
							}
							sVar2 = strlen(_Str);
							sVar4 = strlen(_Str);
							cVar1 = acStack41[1];
							if (sVar2 < sVar4) {
								return;
							}
						}
						acStack41[1] = cVar1;
						_DAT_101282cc = atoi(acStack41 + 1);
					}
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void control_remove_gold(int pnum, int gold_index)

{
	int iVar1;
	int iVar2;
	ItemStruct *h;

	if (gold_index < 0x2f) {
		gold_index = gold_index + -7;
		iVar1 = (int)plr + gold_index * 0x170 + pnum * 0x55ec;
		*(int *)(iVar1 + 0xf6c) = *(int *)(iVar1 + 0xf6c) - _DAT_101282cc;
		if (*(int *)(iVar1 + 0xf6c) < 1) {
			RemoveInvItem(pnum, gold_index);
		} else {
			SetGoldCurs(pnum, gold_index);
		}
	} else {
		gold_index = gold_index + -0x2f;
		iVar1 = (int)plr + gold_index * 0x170 + pnum * 0x55ec;
		*(int *)(iVar1 + 0x4918) = *(int *)(iVar1 + 0x4918) - _DAT_101282cc;
		if (*(int *)(iVar1 + 0x4918) < 1) {
			RemoveSpdBarItem(pnum, gold_index);
		} else {
			SetSpdbarGoldCurs(pnum, gold_index);
		}
	}
	iVar2 = pnum * 0x55ec;
	h = (ItemStruct *)((int)plr + iVar2 + 0x53d4);
	SetPlrHandItem(h, 0);
	GetGoldSeed(pnum, h);
	*(int *)((int)plr + iVar2 + 0x5498) = _DAT_101282cc;
	*(undefined4 *)((int)plr + iVar2 + 0x5538) = 1;
	control_set_gold_curs(pnum);
	iVar1 = CalculateGold(pnum);
	*(int *)((int)plr + iVar2 + 0x1c8) = iVar1;
	_DAT_101282cc = 0;
	return;
}

void control_set_gold_curs(int pnum)

{
	int iVar1;

	pnum = pnum * 0x55ec;
	iVar1 = *(int *)((int)plr + pnum + 0x5498);
	if (iVar1 < 0x9c4) {
		if (iVar1 < 0x3e9) {
			*(undefined4 *)((int)plr + pnum + 0x5494) = 4;
		} else {
			*(undefined4 *)((int)plr + pnum + 0x5494) = 5;
		}
	} else {
		*(undefined4 *)((int)plr + pnum + 0x5494) = 6;
	}
	NewCursor(*(int *)((int)plr + pnum + 0x5494) + 0xc);
	return;
}

char *control_print_talk_msg(char *msg, int x, int y, int *nOffset, int just)

{
	byte bVar1;
	longlong lVar2;

	lVar2 = (longlong)x + 0x108;
	*nOffset = x + *(int *)(&DAT_1019ed80 + (y + 0x216) * 4) + 0x108;
	while (true) {
		if (*msg == 0) {
			return (char *)0x0;
		}
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)(byte)*msg]];
		lVar2 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar2 + 1;
		if (0x202 < (int)lVar2)
			break;
		msg = (char *)((byte *)msg + 1);
		if (bVar1 != 0) {
			CPrintString(*nOffset, (uint)bVar1, (char)just);
		}
		*nOffset = (uint)(byte)(&DAT_100f6230)[(uint)bVar1] + *nOffset + 1;
	}
	return (char *)(byte *)msg;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawTalkPan(void)

{
	longlong lVar1;
	char *msg;
	int nCel;
	undefined8 unaff_r23;
	int just;
	undefined8 unaff_r24;
	int iVar2;
	undefined8 unaff_r25;
	int y;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	int sy;
	undefined8 unaff_r28;
	int *piVar3;
	undefined8 unaff_r29;
	longlong lVar4;
	undefined8 unaff_r30;
	int y_00;
	int iVar5;
	undefined8 unaff_r31;
	int local_38[5];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar1 = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (_DAT_10128154 != 0) {
		DrawPanelBox(0xaf, _DAT_100f3ff8 + 0x14, 0x126, 5, 0xef, 0x204);
		iVar2 = 0;
		do {
			DrawPanelBox((iVar2 >> 1) + 0xaf, iVar2 + *(int *)((int)lVar1 + -0x4fd8) + 0x19, 0x125 - iVar2, 1,
			    (iVar2 >> 1) + 0xef, iVar2 + 0x209);
			iVar2 = iVar2 + 1;
		} while (iVar2 < 10);
		DrawPanelBox(0xb9, *(int *)((int)lVar1 + -0x4fd8) + 0x23, 0x112, 0x1e, 0xf9, 0x213);
		DrawPanelBox(0xb4, *(int *)((int)lVar1 + -0x4fd8) + 0x41, 0x11c, 5, 0xf4, 0x231);
		iVar2 = 0;
		do {
			DrawPanelBox(0xb4, iVar2 + *(int *)((int)lVar1 + -0x4fd8) + 0x46, iVar2 + 0x11c, 1, 0xf4, iVar2 + 0x236);
			iVar2 = iVar2 + 1;
		} while (iVar2 < 10);
		DrawPanelBox(0xaa, *(int *)((int)lVar1 + -0x4fd8) + 0x50, 0x136, 0x37, 0xea, 0x240);
		iVar2 = 0;
		msg = *(char **)((int)lVar1 + -0x64c4);
		y_00 = 0;
		do {
			msg = control_print_talk_msg(msg, 0, y_00, local_38, 0);
			if (msg == (char *)0x0)
				break;
			iVar2 = iVar2 + 1;
			y_00 = y_00 + 0xd;
		} while (iVar2 < 3);
		if (msg != (char *)0x0) {
			*msg = '\0';
		}
		iVar2 = (int)lVar1;
		CelDecDatOnly((BYTE *)(**(int **)(iVar2 + -0x7804) + local_38[0]), **(BYTE ***)(iVar2 + -0x7774),
		    *(int *)(iVar2 + -0x4fd4), 0xc);
		y_00 = (int)lVar1;
		iVar5 = 0;
		piVar3 = *(int **)(y_00 + -0x64c8);
		iVar2 = *(int *)(y_00 + -0x77a8);
		lVar4 = lVar1 + -0x4fe0;
		sy = 0x254;
		*(int *)(y_00 + -0x4fd4) = (*(uint *)(y_00 + -0x4fd4) & 7) + 1;
		y_00 = 0;
		y = 0x3c;
		do {
			if (y_00 != myplr) {
				if (*(char *)lVar4 == '\0') {
					just = 2;
					if (iVar5 == 0) {
						nCel = 1;
					} else {
						nCel = 2;
					}
					if (*piVar3 != 0) {
						nCel = nCel + 4;
					}
					CelDecodeOnly(0xec, sy, *(BYTE **)((int)lVar1 + -0x4fe8), nCel, 0x3d);
				} else {
					just = 3;
					if (*piVar3 != 0) {
						if (iVar5 == 0) {
							nCel = 3;
						} else {
							nCel = 4;
						}
						CelDecodeOnly(0xec, sy, *(BYTE **)((int)lVar1 + -0x4fe8), nCel, 0x3d);
					}
				}
				if (*(char *)(iVar2 + 0x1d) != '\0') {
					control_print_talk_msg((char *)(iVar2 + 0x13c), 0x2e, y, local_38, just);
				}
				piVar3 = piVar3 + 1;
				sy = sy + 0x12;
				y = y + 0x12;
				iVar5 = iVar5 + 1;
			}
			y_00 = y_00 + 1;
			iVar2 = iVar2 + 0x55ec;
			lVar4 = lVar4 + 1;
		} while (y_00 < 4);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL control_check_talk_btn(void)

{
	uint uVar1;

	if (_DAT_10128154 == 0) {
		return 0;
	}
	if (MouseX < 0xac) {
		return 0;
	}
	if (_MouseY < 0x1a5) {
		return 0;
	}
	if (0xe9 < MouseX) {
		return 0;
	}
	if (0x1db < _MouseY) {
		return 0;
	}
	_DAT_10127e78 = 0;
	uVar1 = (_MouseY + -0x1a5) / 0x12 + (_MouseY + -0x1a5 >> 0x1f);
	uRam10127e7c = 0;
	uRam10127e80 = 0;
	*(undefined4 *)(&DAT_10127e78 + (uVar1 + (uVar1 >> 0x1f)) * 4) = 1;
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void control_release_talk_btn(void)

{
	uint uVar1;
	undefined8 uVar2;
	int iVar3;
	int iVar4;

	if (_DAT_10128154 == 0) {
		return;
	}
	_DAT_10127e78 = 0;
	uRam10127e7c = 0;
	uRam10127e80 = 0;
	if (MouseX < 0xac) {
		_DAT_10127e78 = 0;
		uRam10127e7c = 0;
		uRam10127e80 = 0;
		return;
	}
	if (_MouseY < 0x1a5) {
		_DAT_10127e78 = 0;
		uRam10127e7c = 0;
		uRam10127e80 = 0;
		return;
	}
	if (0xe9 < MouseX) {
		_DAT_10127e78 = 0;
		uRam10127e7c = 0;
		uRam10127e80 = 0;
		return;
	}
	if (0x1db < _MouseY) {
		_DAT_10127e78 = 0;
		uRam10127e7c = 0;
		uRam10127e80 = 0;
		return;
	}
	uVar1 = (_MouseY + -0x1a5) / 0x12 + (_MouseY + -0x1a5 >> 0x1f);
	iVar4 = uVar1 + (uVar1 >> 0x1f);
	iVar3 = 0;
	while ((iVar3 < 4 && (iVar4 != -1))) {
		if (iVar3 != myplr) {
			iVar4 = iVar4 + -1;
		}
		iVar3 = iVar3 + 1;
	}
	if (4 < iVar3) {
		_DAT_10127e78 = 0;
		uRam10127e7c = 0;
		uRam10127e80 = 0;
		return;
	}
	uVar2 = countLeadingZeros((uint) * (byte *)(iVar3 + 0x100f3fef));
	*(undefined *)(iVar3 + 0x100f3fef) = (char)((uint)uVar2 >> 5);
	return;
}

void control_reset_talk_msg(void)

{
	BOOL BVar1;
	uint pmask;

	pmask = (uint)(DAT_100f3ff0 != '\0');
	if (cRam100f3ff1 != '\0') {
		pmask = pmask | 2;
	}
	if (cRam100f3ff2 != '\0') {
		pmask = pmask | 4;
	}
	if (cRam100f3ff3 != '\0') {
		pmask = pmask | 8;
	}
	BVar1 = msgcmd_add_server_cmd_W(&DAT_10128104);
	if (BVar1 == 0) {
		NetSendCmdString(pmask, &DAT_10128104);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void control_type_message(void)

{
	if (gbMaxPlayers == '\x01') {
		return;
	}
	DAT_100f3ff5 = DAT_100f3ff4;
	_DAT_100f3ff8 = 0x90;
	_DAT_100f3ffc = 1;
	_DAT_10127e78 = 0;
	uRam10127e7c = 0;
	uRam10127e80 = 0;
	DAT_10128104 = 0;
	_DAT_10128154 = 1;
	_drawpanflag = 0xff;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void control_reset_talk(void)

{
	_DAT_100f3ff8 = 0;
	_DAT_10128154 = 0;
	_drawpanflag = 0xff;
	return;
}

void control_press_enter(void)

{
	uint uVar1;
	undefined8 uVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	char *_Str1;

	uVar2 = 0x100f8fd0;
	_Str1 = &DAT_10127e84;
	if (DAT_10128104 != '\0') {
		control_reset_talk_msg();
		uVar5 = 0;
		do {
			iVar4 = strcmp(_Str1, &DAT_10128104);
			iVar3 = (int)uVar2;
			if (iVar4 == 0)
				break;
			uVar5 = uVar5 + 1;
			_Str1 = _Str1 + 0x50;
		} while ((int)uVar5 < 8);
		if ((int)uVar5 < 8) {
			uVar1 = (uint) * (byte *)(iVar3 + -0x4fdc) - 1 & 7;
			if (uVar5 != uVar1) {
				strcpy(&DAT_10127e84 + uVar5 * 0x50, &DAT_10127e84 + uVar1 * 0x50);
				strcpy(&DAT_10127e84 + uVar1 * 0x50, &DAT_10128104);
			}
		} else {
			strcpy(&DAT_10127e84 + (uint) * (byte *)(iVar3 + -0x4fdc) * 0x50, &DAT_10128104);
			*(char *)(iVar3 + -0x4fdc) = *(char *)(iVar3 + -0x4fdc) + '\x01';
			*(byte *)(iVar3 + -0x4fdc) = *(byte *)(iVar3 + -0x4fdc) & 7;
		}
		*(undefined *)(iVar3 + -0x4fdb) = *(undefined *)(iVar3 + -0x4fdc);
		DAT_10128104 = '\0';
	}
	control_reset_talk();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL control_talk_last_key(int vkey)

{
	BOOL BVar1;
	size_t sVar2;

	if (gbMaxPlayers == '\x01') {
		BVar1 = 0;
	} else {
		if (_DAT_10128154 == 0) {
			BVar1 = 0;
		} else {
			if ((uint)vkey < 0x20) {
				BVar1 = 0;
			} else {
				sVar2 = strlen(&DAT_10128104);
				if ((int)sVar2 < 0x4e) {
					(&DAT_10128104)[sVar2] = (char)vkey;
					*(undefined *)(sVar2 + 0x10128105) = 0;
				}
				BVar1 = 1;
			}
		}
	}
	return BVar1;
}

void control_up_down(int v)

{
	char cVar1;

	cVar1 = (char)v;
	DAT_100f3ff5 = DAT_100f3ff5 + cVar1 & 7;
	if ((&DAT_10127e84)[(uint)DAT_100f3ff5 * 0x50] == '\0') {
		DAT_100f3ff5 = DAT_100f3ff5 + cVar1 & 7;
		if ((&DAT_10127e84)[(uint)DAT_100f3ff5 * 0x50] == '\0') {
			DAT_100f3ff5 = DAT_100f3ff5 + cVar1 & 7;
			if ((&DAT_10127e84)[(uint)DAT_100f3ff5 * 0x50] == '\0') {
				DAT_100f3ff5 = DAT_100f3ff5 + cVar1 & 7;
				if ((&DAT_10127e84)[(uint)DAT_100f3ff5 * 0x50] == '\0') {
					DAT_100f3ff5 = DAT_100f3ff5 + cVar1 & 7;
					if ((&DAT_10127e84)[(uint)DAT_100f3ff5 * 0x50] == '\0') {
						DAT_100f3ff5 = DAT_100f3ff5 + cVar1 & 7;
						if ((&DAT_10127e84)[(uint)DAT_100f3ff5 * 0x50] == '\0') {
							DAT_100f3ff5 = DAT_100f3ff5 + cVar1 & 7;
							if ((&DAT_10127e84)[(uint)DAT_100f3ff5 * 0x50] == '\0') {
								DAT_100f3ff5 = DAT_100f3ff5 + cVar1 & 7;
								if ((&DAT_10127e84)[(uint)DAT_100f3ff5 * 0x50] != '\0') {
									strcpy(&DAT_10128104, &DAT_10127e84 + (uint)DAT_100f3ff5 * 0x50);
								}
							} else {
								strcpy(&DAT_10128104, &DAT_10127e84 + (uint)DAT_100f3ff5 * 0x50);
							}
						} else {
							strcpy(&DAT_10128104, &DAT_10127e84 + (uint)DAT_100f3ff5 * 0x50);
						}
					} else {
						strcpy(&DAT_10128104, &DAT_10127e84 + (uint)DAT_100f3ff5 * 0x50);
					}
				} else {
					strcpy(&DAT_10128104, &DAT_10127e84 + (uint)DAT_100f3ff5 * 0x50);
				}
			} else {
				strcpy(&DAT_10128104, &DAT_10127e84 + (uint)DAT_100f3ff5 * 0x50);
			}
		} else {
			strcpy(&DAT_10128104, &DAT_10127e84 + (uint)DAT_100f3ff5 * 0x50);
		}
	} else {
		strcpy(&DAT_10128104, &DAT_10127e84 + (uint)DAT_100f3ff5 * 0x50);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL control_presskeys(int vkey)

{
	BOOL BVar1;
	size_t sVar2;

	if (gbMaxPlayers == '\x01') {
		BVar1 = 0;
	} else {
		if (_DAT_10128154 == 0) {
			BVar1 = 0;
		} else {
			if (vkey != 0x20) {
				if (vkey == 0x1b) {
					control_reset_talk();
				} else {
					if (vkey == 0xd) {
						control_press_enter();
					} else {
						if (vkey == 8) {
							sVar2 = strlen(&DAT_10128104);
							if (0 < (int)sVar2) {
								*(undefined *)(sVar2 + 0x10128103) = 0;
							}
						} else {
							if (vkey == 0x28) {
								control_up_down(1);
							} else {
								if (vkey != 0x26) {
									return 0;
								}
								control_up_down(-1);
							}
						}
					}
				}
			}
			BVar1 = 1;
		}
	}
	return BVar1;
}