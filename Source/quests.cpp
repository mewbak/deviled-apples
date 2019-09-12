
void InitQuests(void)

{
	undefined8 uVar1;
	int iVar2;
	BOOL BVar3;
	int i;
	uchar *puVar4;
	QuestStruct *pQVar5;
	ulonglong uVar6;
	QuestStruct *pQVar7;
	uchar *puVar8;
	longlong lVar9;

	uVar1 = 0x100f8fd0;
	puVar8 = &DAT_1010eccc;
	pQVar7 = quests;
	if (gbMaxPlayers == '\x01') {
		quests[0]._qactive = '\0';
		quests[1]._qactive = '\0';
		quests[2]._qactive = '\0';
		quests[3]._qactive = '\0';
		quests[4]._qactive = '\0';
		quests[5]._qactive = '\0';
		quests[6]._qactive = '\0';
		quests[7]._qactive = '\0';
		quests[8]._qactive = '\0';
		quests[9]._qactive = '\0';
		quests[10]._qactive = '\0';
		quests[11]._qactive = '\0';
		quests[12]._qactive = '\0';
		quests[13]._qactive = '\0';
		quests[14]._qactive = '\0';
		quests[15]._qactive = '\0';
	} else {
		lVar9 = 2;
		pQVar5 = pQVar7;
		puVar4 = puVar8;
		do {
			if ((*(uint *)(puVar4 + 8) & 1) == 0) {
				pQVar5->_qactive = '\0';
			}
			if ((*(uint *)(puVar4 + 0x1c) & 1) == 0) {
				pQVar5[1]._qactive = '\0';
			}
			if ((*(uint *)(puVar4 + 0x30) & 1) == 0) {
				pQVar5[2]._qactive = '\0';
			}
			if ((*(uint *)(puVar4 + 0x44) & 1) == 0) {
				pQVar5[3]._qactive = '\0';
			}
			if ((*(uint *)(puVar4 + 0x58) & 1) == 0) {
				pQVar5[4]._qactive = '\0';
			}
			if ((*(uint *)(puVar4 + 0x6c) & 1) == 0) {
				pQVar5[5]._qactive = '\0';
			}
			if ((*(uint *)(puVar4 + 0x80) & 1) == 0) {
				pQVar5[6]._qactive = '\0';
			}
			if ((*(uint *)(puVar4 + 0x94) & 1) == 0) {
				pQVar5[7]._qactive = '\0';
			}
			puVar4 = puVar4 + 0xa0;
			pQVar5 = pQVar5 + 8;
			lVar9 = lVar9 + -1;
		} while (lVar9 != 0);
	}
	uVar6 = 0;
	_DAT_1019cbec = 0;
	_DAT_1019cbe8 = 1;
	i = 0;
	_DAT_1019cb98 = 0;
	do {
		if (((byte)gbMaxPlayers < 2) || ((*(uint *)(puVar8 + 8) & 1) != 0)) {
			pQVar7->_qtype = puVar8[3];
			if ((byte)gbMaxPlayers < 2) {
				pQVar7->_qactive = '\x01';
				pQVar7->_qlevel = *puVar8;
				pQVar7->_qvar1 = '\0';
				pQVar7->_qlog = 0;
			} else {
				pQVar7->_qlevel = puVar8[1];
				BVar3 = delta_quest_inited(i);
				if (BVar3 == 0) {
					pQVar7->_qactive = '\x01';
					pQVar7->_qvar1 = '\0';
					pQVar7->_qlog = 0;
				}
				i = i + 1;
			}
			pQVar7->_qslvl = puVar8[5];
			pQVar7->_qtx = 0;
			pQVar7->_qty = 0;
			pQVar7->_qidx = (uchar)uVar6;
			pQVar7->_qlvltype = puVar8[2];
			pQVar7->_qvar2 = '\0';
			pQVar7->_qmsg = (uchar) * (undefined4 *)(puVar8 + 0xc);
		}
		iVar2 = (int)uVar1;
		uVar6 = uVar6 + 1;
		pQVar7 = pQVar7 + 1;
		puVar8 = puVar8 + 0x14;
	} while ((uVar6 & 0xffffffff) < 0x10);
	if (gbMaxPlayers == '\x01') {
		SetRndSeed(*(int *)(*(int *)(iVar2 + -0x75ec) + 0x3c));
		i = random('\0', 2);
		if (i == 0) {
			quests[12]._qactive = '\0';
		} else {
			quests[13]._qactive = '\0';
		}
		i = random('\0', 3);
		quests[*(int *)(*(int *)(iVar2 + -0x5898) + i * 4)]._qactive = '\0';
		i = random('\0', 3);
		quests[*(int *)(*(int *)(iVar2 + -0x589c) + i * 4)]._qactive = '\0';
		i = random('\0', 3);
		quests[*(int *)(*(int *)(iVar2 + -0x58a0) + i * 4)]._qactive = '\0';
		i = random('\0', 2);
		quests[*(int *)(*(int *)(iVar2 + -0x58a4) + i * 4)]._qactive = '\0';
	}
	if (quests[12]._qactive == '\0') {
		quests[12]._qvar2 = '\x02';
	}
	if (quests[0]._qactive == '\0') {
		quests[0]._qvar2 = '\x02';
	}
	if (gbMaxPlayers != '\x01') {
		quests[15]._qvar1 = '\x02';
	}
	quests[7]._qvar1 = '\x01';
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void CheckQuests(void)

{
	int iVar1;
	BOOL BVar2;
	QuestStruct *pQVar3;
	int midam;
	int spllvl;

	iVar1 = 0x100f8fd0;
	pQVar3 = quests;
	BVar2 = QuestStatus(0xf);
	if (((BVar2 != 0) && (gbMaxPlayers != '\x01')) && (quests[15]._qvar1 == '\x02')) {
		AddObject(0x53, **(int **)(iVar1 + -0x754c) * 2 + 0x14, **(int **)(iVar1 + -0x7550) * 2 + 0x16);
		quests[15]._qvar1 = '\x03';
		NetSendCmdQuest(1, '\x0f');
	}
	if (gbMaxPlayers == '\x01') {
		if (((currlevel == quests[15]._qlevel) && (DAT_1012f316 == '\0')) && (1 < quests[15]._qvar1)) {
			if ((quests[15]._qactive == '\x02') || (quests[15]._qactive == '\x03')) {
				if ((quests[15]._qvar2 == '\0') || (quests[15]._qvar2 == '\x02')) {
					quests[15]._qtx = quests[15]._qtx * 2 + 0x10;
					quests[15]._qty = quests[15]._qty * 2 + 0x10;
					AddMissile(quests[15]._qtx, quests[15]._qty, quests[15]._qtx, quests[15]._qty, 0, 0x41, '\0', myplr,
					    midam, spllvl);
					quests[15]._qvar2 = '\x01';
					if (quests[15]._qactive == '\x02') {
						quests[15]._qvar1 = '\x03';
					}
				}
			}
		}
		if ((((quests[15]._qactive == '\x03') && (DAT_1012f316 != '\0')) && (DAT_1012f315 == '\x05')) && (quests[15]._qvar2 == '\x04')) {
			AddMissile(0x23, 0x20, 0x23, 0x20, 0, 0x41, '\0', myplr, midam, spllvl);
			quests[15]._qvar2 = '\x03';
		}
		if (DAT_1012f316 == '\0') {
			if (((PlayerStruct *)((int)plr + myplr * 0x55ec))->_pmode == 0) {
				iVar1 = 0;
				do {
					if (((currlevel == pQVar3->_qlevel) && (pQVar3->_qslvl != '\0')) && (pQVar3->_qactive != '\0')) {
						if ((*(int *)((int)plr + myplr * 0x55ec + 0x38) == pQVar3->_qtx) && (*(int *)((int)plr + myplr * 0x55ec + 0x3c) == pQVar3->_qty)) {
							if (pQVar3->_qlvltype != -1) {
								DAT_1012f314 = pQVar3->_qlvltype;
							}
							StartNewLvl(myplr, 0x405, (uint)pQVar3->_qslvl);
						}
					}
					iVar1 = iVar1 + 1;
					pQVar3 = pQVar3 + 1;
				} while (iVar1 < 0x10);
			}
		} else {
			if (DAT_1012f315 == quests[13]._qslvl) {
				if ((((quests[13]._qactive != '\x01') && (**(uchar **)(iVar1 + -0x7794) == quests[13]._qlvltype)) && (**(int **)(iVar1 + -0x762c) == 4)) && (quests[13]._qactive != '\x03')) {
					quests[13]._qactive = '\x03';
					PlaySfxLoc(
					    0xc, *(int *)((int)plr + myplr * 0x55ec + 0x38), *(int *)((int)plr + myplr * 0x55ec + 0x3c));
					LoadPalette(*(char **)(iVar1 + -0x58a8));
					_DAT_1019cb98 = 0x20;
				}
			}
			if (0 < _DAT_1019cb98) {
				palette_update_quest_palette(_DAT_1019cb98);
				_DAT_1019cb98 = _DAT_1019cb98 + -1;
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL ForceQuests(void)

{
	int iVar1;
	int iVar2;
	char *pcVar3;
	char *pcVar4;
	QuestStruct *pQVar5;
	int iVar6;
	longlong lVar7;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	pQVar5 = quests;
	if (gbMaxPlayers == '\x01') {
		iVar6 = 0;
		do {
			if (((iVar6 != 0xf) && (currlevel == pQVar5->_qlevel)) && (pQVar5->_qslvl != '\0')) {
				lVar7 = 7;
				iVar1 = pQVar5->_qtx;
				iVar2 = pQVar5->_qty;
				pcVar3 = &DAT_1010ee0c;
				pcVar4 = &DAT_1010ee13;
				do {
					if ((_DAT_10128600 == iVar1 + (int)*pcVar3) && (_DAT_101285fc == iVar2 + (int)*pcVar4)) {
						wsprintf((int)&DAT_101283d5, "To %s",
						    (&PTR_s_King_Leoric_s_Tomb_1010ee1c)[(uint)quests[(uint)pQVar5->_qidx]._qslvl - 1],
						    &DAT_1010ee13, pcVar3, pcVar4, pQVar5, (uint)currlevel, in_stack_ffffffb8,
						    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
						    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
						_DAT_101285fc = iVar2;
						_DAT_10128600 = iVar1;
						return 1;
					}
					pcVar3 = pcVar3 + 1;
					pcVar4 = pcVar4 + 1;
					lVar7 = lVar7 + -1;
				} while (lVar7 != 0);
			}
			iVar6 = iVar6 + 1;
			pQVar5 = pQVar5 + 1;
		} while (iVar6 < 0x10);
	}
	return 0;
}

BOOL QuestStatus(int i)

{
	if (DAT_1012f316 != '\0') {
		return 0;
	}
	if (currlevel != quests[i]._qlevel) {
		return 0;
	}
	if (quests[i]._qactive == '\0') {
		return 0;
	}
	if ((gbMaxPlayers != '\x01') && ((*(uint *)(i * 0x14 + 0x1010ecd4) & 1) == 0)) {
		return 0;
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckQuestKill(int m, BOOL sendmsg)

{
	char cVar1;
	uchar uVar2;
	short *psVar3;
	int *piVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	longlong lVar8;
	int midam;
	int spllvl;

	cVar1 = **(char **)(m * 0xe8 + 0x10151b10);
	if (cVar1 == '2') {
		quests[12]._qactive = '\x03';
		_DAT_1012d924 = 0x1e;
		cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
		if (cVar1 == '\0') {
			_DAT_1012d920 = 0x322;
		} else {
			if (cVar1 == '\x01') {
				_DAT_1012d920 = 0x2b5;
			} else {
				if (cVar1 == '\x02') {
					_DAT_1012d920 = 0x24e;
				}
			}
		}
		if (sendmsg != 0) {
			NetSendCmdQuest(1, '\f');
		}
	} else {
		if (cVar1 == '3') {
			quests[6]._qactive = '\x03';
			_DAT_1012d924 = 0x1e;
			cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
			if (cVar1 == '\0') {
				_DAT_1012d920 = 800;
			} else {
				if (cVar1 == '\x01') {
					_DAT_1012d920 = 0x2b3;
				} else {
					if (cVar1 == '\x02') {
						_DAT_1012d920 = 0x24c;
					}
				}
			}
			if (sendmsg != 0) {
				NetSendCmdQuest(1, '\x06');
			}
		} else {
			iVar5 = *(int *)(m * 0xe8 + 0x10151b0c);
			if (iVar5 == iRam1010babc) {
				quests[2]._qactive = '\x03';
				_DAT_1012d924 = 0x1e;
				cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
				if (cVar1 == '\0') {
					_DAT_1012d920 = 0x30c;
				} else {
					if (cVar1 == '\x01') {
						_DAT_1012d920 = 0x29f;
					} else {
						if (cVar1 == '\x02') {
							_DAT_1012d920 = 0x238;
						}
					}
				}
			} else {
				if (iVar5 == iRam1010bafc) {
					quests[3]._qactive = '\x03';
					_DAT_1012d924 = 0x1e;
					cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
					if (cVar1 == '\0') {
						_DAT_1012d920 = 0x30d;
					} else {
						if (cVar1 == '\x01') {
							_DAT_1012d920 = 0x2a0;
						} else {
							if (cVar1 == '\x02') {
								_DAT_1012d920 = 0x239;
							}
						}
					}
				} else {
					if ((iVar5 == iRam1010bb3c) && (gbMaxPlayers != '\x01')) {
						quests[15]._qactive = '\x03';
						quests[15]._qvar1 = '\a';
						iVar6 = 0;
						_DAT_1012d924 = 0x1e;
						iVar5 = 0;
						quests[5]._qactive = '\x02';
						do {
							uVar2 = quests[15]._qactive;
							lVar8 = 0x10;
							psVar3 = (short *)(_DAT_1012f1d4 + iVar5);
							piVar4 = (int *)(&DAT_101aca9c + _numtrigs * 0x10);
							iVar7 = 0;
							do {
								if ((*psVar3 == 0x172) && (uVar2 == '\x03')) {
									*piVar4 = iVar7;
									piVar4[1] = iVar6;
									piVar4[2] = 0x402;
									piVar4 = piVar4 + 4;
									_numtrigs = _numtrigs + 1;
								}
								if ((psVar3[0x70] == 0x172) && (uVar2 == '\x03')) {
									*piVar4 = iVar7 + 1;
									piVar4[1] = iVar6;
									piVar4[2] = 0x402;
									piVar4 = piVar4 + 4;
									_numtrigs = _numtrigs + 1;
								}
								if ((psVar3[0xe0] == 0x172) && (uVar2 == '\x03')) {
									*piVar4 = iVar7 + 2;
									piVar4[1] = iVar6;
									piVar4[2] = 0x402;
									piVar4 = piVar4 + 4;
									_numtrigs = _numtrigs + 1;
								}
								if ((psVar3[0x150] == 0x172) && (uVar2 == '\x03')) {
									*piVar4 = iVar7 + 3;
									piVar4[1] = iVar6;
									piVar4[2] = 0x402;
									piVar4 = piVar4 + 4;
									_numtrigs = _numtrigs + 1;
								}
								if ((psVar3[0x1c0] == 0x172) && (uVar2 == '\x03')) {
									*piVar4 = iVar7 + 4;
									piVar4[1] = iVar6;
									piVar4[2] = 0x402;
									piVar4 = piVar4 + 4;
									_numtrigs = _numtrigs + 1;
								}
								if ((psVar3[0x230] == 0x172) && (uVar2 == '\x03')) {
									*piVar4 = iVar7 + 5;
									piVar4[1] = iVar6;
									piVar4[2] = 0x402;
									piVar4 = piVar4 + 4;
									_numtrigs = _numtrigs + 1;
								}
								if ((psVar3[0x2a0] == 0x172) && (uVar2 == '\x03')) {
									*piVar4 = iVar7 + 6;
									piVar4[1] = iVar6;
									piVar4[2] = 0x402;
									piVar4 = piVar4 + 4;
									_numtrigs = _numtrigs + 1;
								}
								psVar3 = psVar3 + 0x310;
								iVar7 = iVar7 + 7;
								lVar8 = lVar8 + -1;
							} while (lVar8 != 0);
							iVar6 = iVar6 + 1;
							iVar5 = iVar5 + 2;
						} while (iVar6 < 0x70);
						cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
						if (cVar1 == '\0') {
							_DAT_1012d920 = 0x323;
						} else {
							if (cVar1 == '\x01') {
								_DAT_1012d920 = 0x2b6;
							} else {
								if (cVar1 == '\x02') {
									_DAT_1012d920 = 0x24f;
								}
							}
						}
						if (sendmsg != 0) {
							NetSendCmdQuest(1, '\x0f');
							NetSendCmdQuest(1, '\x05');
						}
					} else {
						if ((iVar5 == iRam1010bb3c) && (gbMaxPlayers == '\x01')) {
							quests[15]._qactive = '\x03';
							_DAT_1012d924 = 0x1e;
							InitVPTriggers();
							quests[15]._qvar1 = '\a';
							quests[15]._qvar2 = '\x04';
							quests[5]._qactive = '\x02';
							AddMissile(0x23, 0x20, 0x23, 0x20, 0, 0x41, '\0', myplr, midam, spllvl);
							cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
							if (cVar1 == '\0') {
								_DAT_1012d920 = 0x323;
								return;
							}
							if (cVar1 == '\x01') {
								_DAT_1012d920 = 0x2b6;
								return;
							}
							if (cVar1 != '\x02') {
								return;
							}
							_DAT_1012d920 = 0x24f;
							return;
						}
						if (iVar5 == iRam1010bbbc) {
							quests[11]._qactive = '\x03';
							_DAT_1012d924 = 0x1e;
							cVar1 = *(char *)((int)plr + myplr * 0x55ec + 0x15c);
							if (cVar1 == '\0') {
								_DAT_1012d920 = 0x32e;
							} else {
								if (cVar1 == '\x01') {
									_DAT_1012d920 = 0x2c1;
								} else {
									if (cVar1 == '\x02') {
										_DAT_1012d920 = 0x25a;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawButcher(void)

{
	DRLG_RectTrans(
	    _DAT_1013b36c * 2 + 0x13, _DAT_1013b368 * 2 + 0x13, _DAT_1013b36c * 2 + 0x1a, _DAT_1013b368 * 2 + 0x1a);
	return;
}

void DrawSkelKing(int q, int x, int y)

{
	quests[q]._qtx = x * 2 + 0x1c;
	quests[q]._qty = y * 2 + 0x17;
	return;
}

void DrawWarLord(int x, int y)

{
	byte bVar1;
	byte bVar2;
	uint *puVar3;
	int *piVar4;
	uint uVar5;
	int iVar6;
	longlong lVar7;
	char cVar9;
	longlong lVar8;
	undefined uVar10;
	undefined in_r5;
	undefined in_r6;
	longlong lVar11;
	undefined in_r7;
	longlong lVar12;
	undefined in_r8;
	undefined in_r9;
	longlong lVar13;
	undefined in_r10;
	longlong lVar14;
	longlong lVar15;
	undefined in_stack_ffffffbb;
	int *local_18[6];

	lVar13 = (longlong)y;
	lVar7 = (longlong)x;
	iVar6 = 0x100f8fd0;
	uVar10 = 0;
	local_18[0] = (int *)LoadFileInMem("Levels\\L4Data\\Warlord2.DUN", (DWORD *)0x0);
	cVar9 = LockMemFile(ZEXT48(local_18[0]), uVar10, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	bVar1 = *(byte *)(int)cVar9;
	bVar2 = *(byte *)((int)cVar9 + 2);
	lVar14 = (longlong)cVar9 + 4;
	puVar3 = *(uint **)(iVar6 + -0x7558);
	**(uint **)(iVar6 + -0x7554) = (uint)bVar1;
	lVar12 = (ulonglong)bVar1 + lVar7;
	piVar4 = *(int **)(iVar6 + -0x754c);
	*puVar3 = (uint)bVar2;
	uVar5 = *(uint *)(iVar6 + -0x77cc);
	*piVar4 = x;
	lVar11 = (ulonglong)uVar5 + lVar13;
	**(int **)(iVar6 + -0x7550) = y;
	while ((int)lVar13 < (int)((uint)bVar2 + y)) {
		lVar8 = lVar11 + lVar7 * 0x28;
		lVar15 = lVar12 - lVar7;
		if (x < (int)lVar12) {
			do {
				cVar9 = *(char *)lVar14;
				if (cVar9 == '\0') {
					cVar9 = '\x06';
				}
				*(char *)lVar8 = cVar9;
				lVar8 = lVar8 + 0x28;
				lVar14 = lVar14 + 2;
				lVar15 = lVar15 + -1;
			} while (lVar15 != 0);
		}
		lVar11 = lVar11 + 1;
		lVar13 = lVar13 + 1;
	}
	UnlockMemFile((char)local_18[0]);
	MemFreeDbg(local_18);
	return;
}

void DrawSChamber(int q, int x, int y)

{
	byte bVar1;
	byte bVar2;
	uint *puVar3;
	int *piVar4;
	uint uVar5;
	int iVar6;
	char cVar8;
	longlong lVar7;
	longlong lVar9;
	undefined uVar10;
	undefined uVar11;
	undefined in_r6;
	longlong lVar12;
	undefined in_r7;
	longlong lVar13;
	undefined in_r8;
	undefined in_r9;
	longlong lVar14;
	undefined in_r10;
	longlong lVar15;
	longlong lVar16;
	undefined in_stack_ffffffab;
	int *local_28[10];

	lVar14 = (longlong)y;
	uVar11 = (undefined)y;
	lVar9 = (longlong)x;
	iVar6 = 0x100f8fd0;
	uVar10 = 0;
	local_28[0] = (int *)LoadFileInMem("Levels\\L2Data\\Bonestr1.DUN", (DWORD *)0x0);
	cVar8 = LockMemFile(ZEXT48(local_28[0]), uVar10, uVar11, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab);
	bVar1 = *(byte *)(int)cVar8;
	bVar2 = *(byte *)((int)cVar8 + 2);
	lVar15 = (longlong)cVar8 + 4;
	puVar3 = *(uint **)(iVar6 + -0x7558);
	**(uint **)(iVar6 + -0x7554) = (uint)bVar1;
	lVar13 = (ulonglong)bVar1 + lVar9;
	piVar4 = *(int **)(iVar6 + -0x754c);
	*puVar3 = (uint)bVar2;
	uVar5 = *(uint *)(iVar6 + -0x77cc);
	*piVar4 = x;
	lVar12 = (ulonglong)uVar5 + lVar14;
	**(int **)(iVar6 + -0x7550) = y;
	while ((int)lVar14 < (int)((uint)bVar2 + y)) {
		lVar7 = lVar12 + lVar9 * 0x28;
		lVar16 = lVar13 - lVar9;
		if (x < (int)lVar13) {
			do {
				cVar8 = *(char *)lVar15;
				if (cVar8 == '\0') {
					cVar8 = '\x03';
				}
				*(char *)lVar7 = cVar8;
				lVar7 = lVar7 + 0x28;
				lVar15 = lVar15 + 2;
				lVar16 = lVar16 + -1;
			} while (lVar16 != 0);
		}
		lVar12 = lVar12 + 1;
		lVar14 = lVar14 + 1;
	}
	quests[q]._qtx = x * 2 + 0x16;
	quests[q]._qty = y * 2 + 0x17;
	UnlockMemFile((char)local_28[0]);
	MemFreeDbg(local_28);
	return;
}

void DrawLTBanner(int x, int y)

{
	byte bVar1;
	byte bVar2;
	uint *puVar3;
	int *piVar4;
	int iVar5;
	char cVar6;
	undefined uVar8;
	int iVar7;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	int iVar9;
	undefined in_r9;
	longlong lVar10;
	undefined in_r10;
	ulonglong uVar11;
	undefined in_stack_ffffffbb;
	int *local_18[6];

	iVar5 = 0x100f8fd0;
	uVar8 = 0;
	local_18[0] = (int *)LoadFileInMem("Levels\\L1Data\\Banner1.DUN", (DWORD *)0x0);
	cVar6 = LockMemFile(ZEXT48(local_18[0]), uVar8, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	bVar1 = *(byte *)(int)cVar6;
	lVar10 = (longlong)cVar6 + 4;
	bVar2 = *(byte *)((int)cVar6 + 2);
	iVar9 = 0;
	puVar3 = *(uint **)(iVar5 + -0x7558);
	**(uint **)(iVar5 + -0x7554) = (uint)bVar1;
	piVar4 = *(int **)(iVar5 + -0x754c);
	*puVar3 = (uint)bVar2;
	iVar7 = *(int *)(iVar5 + -0x7540);
	*piVar4 = x;
	iVar7 = iVar7 + y;
	**(int **)(iVar5 + -0x7550) = y;
	while (iVar9 < (int)(uint)bVar2) {
		iVar5 = 0;
		uVar11 = (ulonglong)bVar1;
		if (bVar1 != 0) {
			do {
				if (*(char *)lVar10 != '\0') {
					*(char *)(iVar7 + (x + iVar5) * 0x28) = *(char *)lVar10;
				}
				lVar10 = lVar10 + 2;
				iVar5 = iVar5 + 1;
				uVar11 = uVar11 - 1;
			} while (uVar11 != 0);
		}
		iVar7 = iVar7 + 1;
		iVar9 = iVar9 + 1;
	}
	UnlockMemFile((char)local_18[0]);
	MemFreeDbg(local_18);
	return;
}

void DrawBlind(int x, int y)

{
	byte bVar1;
	byte bVar2;
	int *piVar3;
	uint *puVar4;
	int iVar5;
	char cVar6;
	undefined uVar8;
	int iVar7;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	int iVar9;
	undefined in_r9;
	longlong lVar10;
	undefined in_r10;
	ulonglong uVar11;
	undefined in_stack_ffffffbb;
	int *local_18[6];

	iVar5 = 0x100f8fd0;
	uVar8 = 0;
	local_18[0] = (int *)LoadFileInMem("Levels\\L2Data\\Blind1.DUN", (DWORD *)0x0);
	cVar6 = LockMemFile(ZEXT48(local_18[0]), uVar8, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	bVar1 = *(byte *)(int)cVar6;
	lVar10 = (longlong)cVar6 + 4;
	bVar2 = *(byte *)((int)cVar6 + 2);
	iVar9 = 0;
	piVar3 = *(int **)(iVar5 + -0x7550);
	**(int **)(iVar5 + -0x754c) = x;
	puVar4 = *(uint **)(iVar5 + -0x7554);
	*piVar3 = y;
	iVar7 = *(int *)(iVar5 + -0x7540);
	*puVar4 = (uint)bVar1;
	iVar7 = iVar7 + y;
	**(uint **)(iVar5 + -0x7558) = (uint)bVar2;
	while (iVar9 < (int)(uint)bVar2) {
		iVar5 = 0;
		uVar11 = (ulonglong)bVar1;
		if (bVar1 != 0) {
			do {
				if (*(char *)lVar10 != '\0') {
					*(char *)(iVar7 + (x + iVar5) * 0x28) = *(char *)lVar10;
				}
				lVar10 = lVar10 + 2;
				iVar5 = iVar5 + 1;
				uVar11 = uVar11 - 1;
			} while (uVar11 != 0);
		}
		iVar7 = iVar7 + 1;
		iVar9 = iVar9 + 1;
	}
	UnlockMemFile((char)local_18[0]);
	MemFreeDbg(local_18);
	return;
}

void DrawBlood(int x, int y)

{
	byte bVar1;
	byte bVar2;
	int *piVar3;
	uint *puVar4;
	int iVar5;
	char cVar6;
	undefined uVar8;
	int iVar7;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	int iVar9;
	undefined in_r9;
	longlong lVar10;
	undefined in_r10;
	ulonglong uVar11;
	undefined in_stack_ffffffbb;
	int *local_18[6];

	iVar5 = 0x100f8fd0;
	uVar8 = 0;
	local_18[0] = (int *)LoadFileInMem("Levels\\L2Data\\Blood2.DUN", (DWORD *)0x0);
	cVar6 = LockMemFile(ZEXT48(local_18[0]), uVar8, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	bVar1 = *(byte *)(int)cVar6;
	lVar10 = (longlong)cVar6 + 4;
	bVar2 = *(byte *)((int)cVar6 + 2);
	iVar9 = 0;
	piVar3 = *(int **)(iVar5 + -0x7550);
	**(int **)(iVar5 + -0x754c) = x;
	puVar4 = *(uint **)(iVar5 + -0x7554);
	*piVar3 = y;
	iVar7 = *(int *)(iVar5 + -0x77cc);
	*puVar4 = (uint)bVar1;
	iVar7 = iVar7 + y;
	**(uint **)(iVar5 + -0x7558) = (uint)bVar2;
	while (iVar9 < (int)(uint)bVar2) {
		iVar5 = 0;
		uVar11 = (ulonglong)bVar1;
		if (bVar1 != 0) {
			do {
				if (*(char *)lVar10 != '\0') {
					*(char *)(iVar7 + (x + iVar5) * 0x28) = *(char *)lVar10;
				}
				lVar10 = lVar10 + 2;
				iVar5 = iVar5 + 1;
				uVar11 = uVar11 - 1;
			} while (uVar11 != 0);
		}
		iVar7 = iVar7 + 1;
		iVar9 = iVar9 + 1;
	}
	UnlockMemFile((char)local_18[0]);
	MemFreeDbg(local_18);
	return;
}

void DRLG_CheckQuests(int x, int y)

{
	ulonglong uVar1;
	undefined8 uVar2;
	BOOL BVar3;
	int i;
	QuestStruct *pQVar4;

	uVar2 = 0x100f8fd0;
	pQVar4 = quests;
	i = 0;
	while ((BVar3 = QuestStatus(i), BVar3 == 0 || (uVar1 = (ulonglong)pQVar4->_qtype - 6, 8 < (uVar1 & 0xffffffff)))) {
		i = i + 1;
		pQVar4 = pQVar4 + 1;
		if (0xf < i) {
			return;
		}
	}
	// WARNING: Could not recover jumptable at 0x1009ccdc. Too many branches
	// WARNING: Treating indirect jump as call
	(**(code **)(*(int *)((int)uVar2 + -0x58cc) + (int)uVar1 * 4))();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetReturnLvlPos(void)

{
	if (DAT_1012f315 == 3) {
		return;
	}
	if (2 < DAT_1012f315) {
		if (DAT_1012f315 == 5) {
			_DAT_1019cbf0 = 4;
			_DAT_1019cbf4 = (uint)quests[15]._qlevel;
			_DAT_1019cbf8 = quests[15]._qty + -1;
			_DAT_1019cbfc = quests[15]._qtx + 1;
			return;
		}
		if (4 < DAT_1012f315) {
			return;
		}
		_DAT_1019cbf0 = 1;
		_DAT_1019cbf4 = (uint)quests[13]._qlevel;
		_DAT_1019cbf8 = quests[13]._qty + 1;
		_DAT_1019cbfc = quests[13]._qtx;
		return;
	}
	if (DAT_1012f315 == 1) {
		_DAT_1019cbf0 = 1;
		_DAT_1019cbf4 = (uint)quests[12]._qlevel;
		_DAT_1019cbf8 = quests[12]._qty;
		_DAT_1019cbfc = quests[12]._qtx + 1;
		return;
	}
	if (DAT_1012f315 == 0) {
		return;
	}
	_DAT_1019cbf0 = 2;
	_DAT_1019cbf4 = (uint)quests[14]._qlevel;
	_DAT_1019cbf8 = quests[14]._qty;
	_DAT_1019cbfc = quests[14]._qtx + 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void GetReturnLvlPos(void)

{
	if (quests[15]._qactive == '\x03') {
		quests[15]._qvar2 = '\x02';
	}
	_DAT_1012f30c = _DAT_1019cbf8;
	_DAT_1012f310 = _DAT_1019cbfc;
	currlevel = (byte)_DAT_1019cbf4;
	leveltype = (char)_DAT_1019cbf0;
	return;
}

void ResyncMPQuests(void)

{
	int iVar1;
	BOOL BVar2;

	iVar1 = 0x100f8fd0;
	if (quests[12]._qactive == '\x01') {
		if (((int)((uint)quests[12]._qlevel - 1) <= (int)(uint)currlevel) && ((uint)currlevel <= (uint)quests[12]._qlevel + 1)) {
			quests[12]._qactive = '\x02';
			iVar1 = 0x100f8fd0;
			NetSendCmdQuest(1, '\f');
		}
	}
	if (quests[6]._qactive == '\x01') {
		if (((int)((uint)quests[6]._qlevel - 1) <= (int)(uint)currlevel) && ((uint)currlevel <= (uint)quests[6]._qlevel + 1)) {
			quests[6]._qactive = '\x02';
			NetSendCmdQuest(1, '\x06');
		}
	}
	if ((quests[15]._qactive == '\x01') && ((uint)currlevel == (uint)quests[15]._qlevel - 1)) {
		quests[15]._qactive = '\x02';
		NetSendCmdQuest(1, '\x0f');
	}
	BVar2 = QuestStatus(0xf);
	if (BVar2 != 0) {
		AddObject(0x53, **(int **)(iVar1 + -0x754c) * 2 + 0x14, **(int **)(iVar1 + -0x7550) * 2 + 0x16);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ResyncQuests(void)

{
	undefined uVar1;
	BOOL BVar2;
	int n;
	int *piVar3;
	int *piVar4;

	piVar4 = (int *)&DAT_1017e10c;
	if ((((DAT_1012f316 != '\0') && (DAT_1012f315 == quests[13]._qslvl)) && (quests[13]._qactive != '\x01')) && (leveltype == quests[13]._qlvltype)) {
		if (quests[13]._qactive == '\x03') {
			LoadPalette("Levels\\L3Data\\L3pwater.pal");
		} else {
			LoadPalette("Levels\\L3Data\\L3pfoul.pal");
		}
		n = 0;
		do {
			palette_update_quest_palette(n);
			n = n + 1;
		} while (n < 0x21);
	}
	BVar2 = QuestStatus(7);
	if (BVar2 != 0) {
		if (quests[7]._qvar1 == '\x01') {
			ObjChangeMapResync(_DAT_1013b36c + _DAT_1013b364 + -2, _DAT_1013b368 + _DAT_1013b360 + -2,
			    _DAT_1013b36c + _DAT_1013b364 + 1, _DAT_1013b368 + _DAT_1013b360 + 1);
		}
		if (quests[7]._qvar1 == '\x02') {
			ObjChangeMapResync(_DAT_1013b36c + _DAT_1013b364 + -2, _DAT_1013b368 + _DAT_1013b360 + -2,
			    _DAT_1013b36c + _DAT_1013b364 + 1, _DAT_1013b368 + _DAT_1013b360 + 1);
			ObjChangeMapResync(_DAT_1013b36c, _DAT_1013b368, _DAT_1013b36c + (_DAT_1013b364 >> 1) + 2,
			    _DAT_1013b368 + (_DAT_1013b360 >> 1) + -2);
			n = 0;
			piVar3 = piVar4;
			while (uVar1 = DAT_1012f2d8, n < _DAT_1017e3d0) {
				SyncObjectAnim(*piVar3);
				piVar3 = piVar3 + 1;
				n = n + 1;
			}
			DAT_1012f2d8 = 9;
			DRLG_MRectTrans(_DAT_1013b36c, _DAT_1013b368, _DAT_1013b36c + (_DAT_1013b364 >> 1) + 4,
			    _DAT_1013b368 + (_DAT_1013b360 >> 1));
			DAT_1012f2d8 = uVar1;
		}
		if (quests[7]._qvar1 == '\x03') {
			ObjChangeMapResync(
			    _DAT_1013b36c, _DAT_1013b368, _DAT_1013b36c + _DAT_1013b364 + 1, _DAT_1013b368 + _DAT_1013b360 + 1);
			n = 0;
			piVar3 = piVar4;
			while (uVar1 = DAT_1012f2d8, n < _DAT_1017e3d0) {
				SyncObjectAnim(*piVar3);
				piVar3 = piVar3 + 1;
				n = n + 1;
			}
			DAT_1012f2d8 = 9;
			DRLG_MRectTrans(_DAT_1013b36c, _DAT_1013b368, _DAT_1013b36c + (_DAT_1013b364 >> 1) + 4,
			    _DAT_1013b368 + (_DAT_1013b360 >> 1));
			DAT_1012f2d8 = uVar1;
		}
	}
	if (currlevel == quests[1]._qlevel) {
		if ((quests[1]._qactive == '\x01') && (quests[1]._qvar1 == '\0')) {
			SpawnQuestItem(0x13, 0, 0, 5, 1);
			quests[1]._qvar1 = '\x01';
		} else {
			if (quests[1]._qactive == '\x02') {
				if (quests[1]._qvar1 < 5) {
					if (6 < quests[1]._qvar1) {
						uRam1012004c = 0xffffffff;
					}
				} else {
					uRam1012004c = 0x7b;
					uRam1012018c = 0xffffffff;
				}
			}
		}
	}
	if ((((uint)currlevel == (uint)quests[4]._qlevel + 1) && (quests[4]._qactive == '\x02')) && (quests[4]._qvar1 == '\0')) {
		quests[4]._qvar1 = '\x01';
		SpawnQuestItem(0xf, 0, 0, 5, 1);
	}
	if ((DAT_1012f316 != '\0') && (DAT_1012f315 == '\x05')) {
		if (3 < quests[15]._qvar1) {
			ObjChangeMapResync(1, 0xb, 0x14, 0x12);
		}
		if (5 < quests[15]._qvar1) {
			ObjChangeMapResync(1, 0x12, 0x14, 0x18);
		}
		if (6 < quests[15]._qvar1) {
			InitVPTriggers();
		}
		n = 0;
		while (n < _DAT_1017e3d0) {
			SyncObjectAnim(*piVar4);
			piVar4 = piVar4 + 1;
			n = n + 1;
		}
	}
	if ((currlevel == quests[15]._qlevel) && (DAT_1012f316 == '\0')) {
		if (((quests[15]._qvar2 == '\x01') || (2 < quests[15]._qvar2)) && ((quests[15]._qactive == '\x02' || (quests[15]._qactive == '\x03')))) {
			quests[15]._qvar2 = '\x02';
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PrintQLString(int x, int y, BOOL cjustflag, char *str, int col)

{
	byte bVar1;
	int iVar2;
	ulonglong uVar3;
	int iVar4;
	size_t sVar5;
	byte *pbVar6;
	int iVar7;
	longlong lVar8;
	ulonglong uVar9;
	longlong lVar10;

	iVar2 = *(int *)(&DAT_1010f7b8 + y * 4);
	lVar10 = (longlong)x + (ulonglong) * (uint *)(iVar2 * 4 + 0x1019f0b0) + 0x60;
	sVar5 = strlen(str);
	uVar9 = 0;
	if (cjustflag != 0) {
		lVar8 = 0;
		lVar8._4_4_ = 0;
		iVar7 = 0;
		if (0 < (int)sVar5) {
			if ((8 < (int)sVar5) && (uVar3 = (ulonglong)(sVar5 - 1 >> 3), 0 < (int)(sVar5 - 8))) {
				do {
					pbVar6 = (byte *)(str + iVar7);
					iVar7 = iVar7 + 8;
					lVar8 = (ulonglong)(byte)(
					            &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[7]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[6]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[5]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[4]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[3]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[2]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[1]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar6]]]
					    + lVar8 + 8;
					uVar3 = uVar3 - 1;
				} while (uVar3 != 0);
			}
			lVar8._4_4_ = (int)lVar8;
			iVar4 = sVar5 - iVar7;
			pbVar6 = (byte *)(str + iVar7);
			if (iVar7 < (int)sVar5) {
				do {
					bVar1 = *pbVar6;
					pbVar6 = pbVar6 + 1;
					lVar8 = (ulonglong)(byte)(
					            &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]]
					    + lVar8 + 1;
					lVar8._4_4_ = (int)lVar8;
					iVar4 = iVar4 + -1;
				} while (iVar4 != 0);
			}
		}
		if (lVar8._4_4_ < 0x101) {
			uVar9 = (ulonglong)(uint)(0x101 - lVar8._4_4_ >> 1);
		}
		lVar10 = lVar10 + uVar9;
	}
	if (_DAT_1019cbe4 == y) {
		if (cjustflag == 0) {
			iVar7 = 0x4c;
		} else {
			iVar7 = (int)uVar9 + 0x4c;
		}
		CelDecodeOnly(x + iVar7, iVar2 + 0xcd, _DAT_101ab4b4, _DAT_1019cbe8, 0xc);
	}
	iVar7 = 0;
	while (iVar7 < (int)sVar5) {
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)(byte)*str]];
		uVar9 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar9 + 1;
		if ((bVar1 != 0) && ((int)uVar9 < 0x102)) {
			CPrintString((int)lVar10, (uint)bVar1, (char)col);
		}
		iVar7 = iVar7 + 1;
		str = (char *)((byte *)str + 1);
		lVar10 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar10 + 1;
	}
	if (_DAT_1019cbe4 == y) {
		if (cjustflag == 0) {
			x = 0x154 - x;
		} else {
			x = x + (int)uVar9 + 100;
		}
		CelDecodeOnly(x, iVar2 + 0xcd, _DAT_101ab4b4, _DAT_1019cbe8, 0xc);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawQuestLog(void)

{
	undefined8 uVar1;
	int y;
	int iVar2;
	int *piVar3;

	uVar1 = 0x100f8fd0;
	PrintQLString(0, 2, 1, "Quest Log", 3);
	CelDecodeOnly(0x40, 0x1ff, **(BYTE ***)((int)uVar1 + -0x7700), 1, 0x140);
	iVar2 = 0;
	piVar3 = *(int **)((int)uVar1 + -0x6f70);
	y = **(int **)((int)uVar1 + -0x6f6c);
	while (iVar2 < _DAT_1019cbe0) {
		PrintQLString(0, y, 1, *(char **)(*piVar3 * 0x14 + 0x1010ecdc), 0);
		y = y + 2;
		piVar3 = piVar3 + 1;
		iVar2 = iVar2 + 1;
	}
	PrintQLString(0, 0x16, 1, *(char **)((int)uVar1 + -0x58d8), 0);
	_DAT_1019cbe8 = (_DAT_1019cbe8 & 7) + 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void StartQuestlog(void)

{
	QuestStruct *pQVar1;
	int *piVar2;
	int iVar3;
	longlong lVar4;

	_DAT_1019cbe0 = 0;
	lVar4 = 4;
	pQVar1 = quests;
	iVar3 = 0;
	piVar2 = (int *)&DAT_1019cb9c;
	do {
		if ((pQVar1->_qactive == '\x02') && (pQVar1->_qlog != 0)) {
			*piVar2 = iVar3;
			piVar2 = piVar2 + 1;
			_DAT_1019cbe0 = _DAT_1019cbe0 + 1;
		}
		if ((pQVar1[1]._qactive == '\x02') && (pQVar1[1]._qlog != 0)) {
			*piVar2 = iVar3 + 1;
			piVar2 = piVar2 + 1;
			_DAT_1019cbe0 = _DAT_1019cbe0 + 1;
		}
		if ((pQVar1[2]._qactive == '\x02') && (pQVar1[2]._qlog != 0)) {
			*piVar2 = iVar3 + 2;
			piVar2 = piVar2 + 1;
			_DAT_1019cbe0 = _DAT_1019cbe0 + 1;
		}
		if ((pQVar1[3]._qactive == '\x02') && (pQVar1[3]._qlog != 0)) {
			*piVar2 = iVar3 + 3;
			piVar2 = piVar2 + 1;
			_DAT_1019cbe0 = _DAT_1019cbe0 + 1;
		}
		pQVar1 = pQVar1 + 4;
		iVar3 = iVar3 + 4;
		lVar4 = lVar4 + -1;
	} while (lVar4 != 0);
	if (_DAT_1019cbe0 < 6) {
		_DAT_1019cbdc = 8;
	} else {
		_DAT_1019cbdc = 5 - (_DAT_1019cbe0 >> 1);
	}
	if (_DAT_1019cbe0 == 0) {
		_DAT_1019cbe4 = 0x16;
	} else {
		_DAT_1019cbe4 = _DAT_1019cbdc;
	}
	_DAT_1019cbe8 = 1;
	_DAT_1019cbec = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void QuestlogUp(void)

{
	if (_DAT_1019cbe0 != 0) {
		if (_DAT_1019cbe4 == _DAT_1019cbdc) {
			_DAT_1019cbe4 = 0x16;
		} else {
			if (_DAT_1019cbe4 == 0x16) {
				_DAT_1019cbe4 = (_DAT_1019cbe0 + -1) * 2 + _DAT_1019cbdc;
			} else {
				_DAT_1019cbe4 = _DAT_1019cbe4 + -2;
			}
		}
		PlaySFX(0x45);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void QuestlogDown(void)

{
	if (_DAT_1019cbe0 != 0) {
		if (_DAT_1019cbe4 == 0x16) {
			_DAT_1019cbe4 = _DAT_1019cbdc;
		} else {
			if (_DAT_1019cbe4 == (_DAT_1019cbe0 + -1) * 2 + _DAT_1019cbdc) {
				_DAT_1019cbe4 = 0x16;
			} else {
				_DAT_1019cbe4 = _DAT_1019cbe4 + 2;
			}
		}
		PlaySFX(0x45);
	}
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void QuestlogEnter(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	PlaySFX(0x46);
	if ((**(int **)(iVar1 + -0x6f74) != 0) && (**(int **)(iVar1 + -0x6f68) != 0x16)) {
		InitQTextMsg((uint) * (byte *)(*(int *)(iVar1 + -0x7604) + *(int *)(*(int *)(iVar1 + -0x6f70) + (**(int **)(iVar1 + -0x6f68) - **(int **)(iVar1 + -0x6f6c) >> 1) * 4) * 0x18 + 0xe));
	}
	**(undefined4 **)(iVar1 + -0x77c8) = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void QuestlogESC(void)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	uVar1 = (_MouseY + -0x20) / 6 + (_MouseY + -0x20 >> 0x1f) >> 1;
	iVar2 = uVar1 + (uVar1 >> 0x1f);
	if (_DAT_1019cbe0 != 0) {
		iVar3 = 0;
		iVar4 = 0;
		while (iVar3 < _DAT_1019cbe0) {
			if (iVar2 == iVar4 + _DAT_1019cbdc) {
				_DAT_1019cbe4 = iVar2;
				QuestlogEnter();
			}
			iVar4 = iVar4 + 2;
			iVar3 = iVar3 + 1;
		}
	}
	if (iVar2 == 0x16) {
		_DAT_1019cbe4 = 0x16;
		QuestlogEnter();
	}
	return;
}

void SetMultiQuest(int q, int s, int l, int v1)

{
	byte bVar1;

	bVar1 = quests[q]._qactive;
	if (bVar1 == 3) {
		return;
	}
	if ((int)(uint)bVar1 < s) {
		quests[q]._qactive = (byte)s;
	}
	quests[q]._qlog = quests[q]._qlog | l;
	if (v1 <= (int)(uint)quests[q]._qvar1) {
		return;
	}
	quests[q]._qvar1 = (uchar)v1;
	return;
}
