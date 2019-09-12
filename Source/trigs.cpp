
void InitNoTriggers(void)

{
	_trigflag = 0;
	_numtrigs = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitTownTriggers(void)

{
	bool bVar1;
	byte bVar2;
	int iVar3;

	_DAT_101aca9c = 0x19;
	uRam101acaa0 = 0x1d;
	uRam101acaa4 = 0x402;
	_numtrigs = 1;
	if (gbMaxPlayers == '\x04') {
		_DAT_101aca84 = 1;
		uRam101aca88 = 1;
		uRam101aca8c = 1;
		uRam101acaac = 0x31;
		uRam101acab0 = 0x15;
		uRam101acab4 = 0x407;
		uRam101acab8 = 5;
		uRam101acabc = 0x11;
		uRam101acac0 = 0x45;
		uRam101acac4 = 0x407;
		uRam101acac8 = 9;
		uRam101acacc = 0x29;
		uRam101acad0 = 0x50;
		uRam101acad4 = 0x407;
		uRam101acad8 = 0xd;
		_numtrigs = 4;
	} else {
		uRam101aca8c = 0;
		bVar2 = *(byte *)((int)plr + myplr * 0x55ec + 0x5590);
		bVar1 = (bVar2 & 1) != 0;
		if (bVar1) {
			uRam101acaac = 0x31;
			uRam101acab0 = 0x15;
			uRam101acab4 = 0x407;
			uRam101acab8 = 5;
			_numtrigs = 2;
		}
		_DAT_101aca84 = (uint)bVar1;
		bVar1 = (bVar2 & 2) != 0;
		if (bVar1) {
			iVar3 = _numtrigs * 0x10;
			*(undefined4 *)(&DAT_101aca9c + iVar3) = 0x11;
			*(undefined4 *)(iVar3 + 0x101acaa0) = 0x45;
			*(undefined4 *)(iVar3 + 0x101acaa4) = 0x407;
			*(undefined4 *)(iVar3 + 0x101acaa8) = 9;
			_numtrigs = _numtrigs + 1;
		}
		uRam101aca88 = (uint)bVar1;
		if ((bVar2 & 4) != 0) {
			iVar3 = _numtrigs * 0x10;
			*(undefined4 *)(&DAT_101aca9c + iVar3) = 0x29;
			*(undefined4 *)(iVar3 + 0x101acaa0) = 0x50;
			*(undefined4 *)(iVar3 + 0x101acaa4) = 0x407;
			*(undefined4 *)(iVar3 + 0x101acaa8) = 0xd;
			_numtrigs = _numtrigs + 1;
			uRam101aca8c = 1;
		}
	}
	_trigflag = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitL1Triggers(void)

{
	int iVar1;
	short *psVar2;
	short *psVar3;
	int iVar4;
	int iVar5;
	longlong lVar6;

	iVar5 = 0;
	_numtrigs = 0;
	psVar3 = _DAT_1012f1d4;
	do {
		lVar6 = 0x38;
		iVar4 = 0;
		psVar2 = psVar3;
		do {
			if (*psVar2 == 0x81) {
				iVar1 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar1) = iVar4;
				*(int *)(iVar1 + 0x101acaa0) = iVar5;
				*(undefined4 *)(iVar1 + 0x101acaa4) = 0x403;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar2 == 0x73) {
				iVar1 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar1) = iVar4;
				*(int *)(iVar1 + 0x101acaa0) = iVar5;
				*(undefined4 *)(iVar1 + 0x101acaa4) = 0x402;
				_numtrigs = _numtrigs + 1;
			}
			if (psVar2[0x70] == 0x81) {
				iVar1 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar1) = iVar4 + 1;
				*(int *)(iVar1 + 0x101acaa0) = iVar5;
				*(undefined4 *)(iVar1 + 0x101acaa4) = 0x403;
				_numtrigs = _numtrigs + 1;
			}
			if (psVar2[0x70] == 0x73) {
				iVar1 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar1) = iVar4 + 1;
				*(int *)(iVar1 + 0x101acaa0) = iVar5;
				*(undefined4 *)(iVar1 + 0x101acaa4) = 0x402;
				_numtrigs = _numtrigs + 1;
			}
			psVar2 = psVar2 + 0xe0;
			iVar4 = iVar4 + 2;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar5 = iVar5 + 1;
		psVar3 = psVar3 + 1;
	} while (iVar5 < 0x70);
	_trigflag = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitL2Triggers(void)

{
	short *psVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	short *psVar8;
	short *psVar9;
	longlong lVar10;

	iVar4 = quests[14]._qty;
	iVar3 = quests[14]._qtx;
	iVar7 = 0;
	_numtrigs = 0;
	psVar9 = _DAT_1012f1d4;
	do {
		lVar10 = 0x38;
		iVar5 = 0;
		psVar8 = psVar9;
		do {
			if ((*psVar8 == 0x10b) && ((iVar5 != iVar3 || (iVar7 != iVar4)))) {
				iVar6 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar6) = iVar5;
				*(int *)(iVar6 + 0x101acaa0) = iVar7;
				*(undefined4 *)(iVar6 + 0x101acaa4) = 0x403;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar8 == 0x22f) {
				iVar6 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar6) = iVar5;
				*(int *)(iVar6 + 0x101acaa0) = iVar7;
				*(undefined4 *)(iVar6 + 0x101acaa4) = 0x408;
				*(undefined4 *)(iVar6 + 0x101acaa8) = 0;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar8 == 0x10f) {
				iVar6 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar6) = iVar5;
				*(int *)(iVar6 + 0x101acaa0) = iVar7;
				*(undefined4 *)(iVar6 + 0x101acaa4) = 0x402;
				_numtrigs = _numtrigs + 1;
			}
			psVar1 = psVar8 + 0x70;
			iVar6 = iVar5 + 1;
			if ((*psVar1 == 0x10b) && ((iVar6 != iVar3 || (iVar7 != iVar4)))) {
				iVar2 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar2) = iVar6;
				*(int *)(iVar2 + 0x101acaa0) = iVar7;
				*(undefined4 *)(iVar2 + 0x101acaa4) = 0x403;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar1 == 0x22f) {
				iVar2 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar2) = iVar6;
				*(int *)(iVar2 + 0x101acaa0) = iVar7;
				*(undefined4 *)(iVar2 + 0x101acaa4) = 0x408;
				*(undefined4 *)(iVar2 + 0x101acaa8) = 0;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar1 == 0x10f) {
				iVar2 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar2) = iVar6;
				*(int *)(iVar2 + 0x101acaa0) = iVar7;
				*(undefined4 *)(iVar2 + 0x101acaa4) = 0x402;
				_numtrigs = _numtrigs + 1;
			}
			psVar8 = psVar8 + 0xe0;
			iVar5 = iVar5 + 2;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
		iVar7 = iVar7 + 1;
		psVar9 = psVar9 + 1;
	} while (iVar7 < 0x70);
	_trigflag = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitL3Triggers(void)

{
	short *psVar1;
	int iVar2;
	int iVar3;
	short *psVar4;
	short *psVar5;
	int iVar6;
	int iVar7;
	longlong lVar8;

	iVar3 = 0;
	_numtrigs = 0;
	psVar5 = _DAT_1012f1d4;
	do {
		lVar8 = 0x38;
		iVar6 = 0;
		psVar4 = psVar5;
		do {
			if (*psVar4 == 0xab) {
				iVar7 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar7) = iVar6;
				*(int *)(iVar7 + 0x101acaa0) = iVar3;
				*(undefined4 *)(iVar7 + 0x101acaa4) = 0x403;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar4 == 0xa8) {
				iVar7 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar7) = iVar6;
				*(int *)(iVar7 + 0x101acaa0) = iVar3;
				*(undefined4 *)(iVar7 + 0x101acaa4) = 0x402;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar4 == 0x225) {
				iVar7 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar7) = iVar6;
				*(int *)(iVar7 + 0x101acaa0) = iVar3;
				*(undefined4 *)(iVar7 + 0x101acaa4) = 0x408;
				_numtrigs = _numtrigs + 1;
			}
			psVar1 = psVar4 + 0x70;
			iVar7 = iVar6 + 1;
			if (*psVar1 == 0xab) {
				iVar2 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar2) = iVar7;
				*(int *)(iVar2 + 0x101acaa0) = iVar3;
				*(undefined4 *)(iVar2 + 0x101acaa4) = 0x403;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar1 == 0xa8) {
				iVar2 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar2) = iVar7;
				*(int *)(iVar2 + 0x101acaa0) = iVar3;
				*(undefined4 *)(iVar2 + 0x101acaa4) = 0x402;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar1 == 0x225) {
				iVar2 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar2) = iVar7;
				*(int *)(iVar2 + 0x101acaa0) = iVar3;
				*(undefined4 *)(iVar2 + 0x101acaa4) = 0x408;
				_numtrigs = _numtrigs + 1;
			}
			psVar4 = psVar4 + 0xe0;
			iVar6 = iVar6 + 2;
			lVar8 = lVar8 + -1;
		} while (lVar8 != 0);
		iVar3 = iVar3 + 1;
		psVar5 = psVar5 + 1;
	} while (iVar3 < 0x70);
	_trigflag = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitL4Triggers(void)

{
	short *psVar1;
	int iVar2;
	uchar uVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	short *psVar7;
	short *psVar8;
	int iVar9;
	longlong lVar10;

	iVar5 = 0;
	_numtrigs = 0;
	psVar8 = _DAT_1012f1d4;
	do {
		lVar10 = 0x38;
		iVar4 = 0;
		psVar7 = psVar8;
		do {
			if (*psVar7 == 0x53) {
				iVar9 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar9) = iVar4;
				*(int *)(iVar9 + 0x101acaa0) = iVar5;
				*(undefined4 *)(iVar9 + 0x101acaa4) = 0x403;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar7 == 0x1a6) {
				iVar9 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar9) = iVar4;
				*(int *)(iVar9 + 0x101acaa0) = iVar5;
				*(undefined4 *)(iVar9 + 0x101acaa4) = 0x408;
				*(undefined4 *)(iVar9 + 0x101acaa8) = 0;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar7 == 0x78) {
				iVar9 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar9) = iVar4;
				*(int *)(iVar9 + 0x101acaa0) = iVar5;
				*(undefined4 *)(iVar9 + 0x101acaa4) = 0x402;
				_numtrigs = _numtrigs + 1;
			}
			psVar1 = psVar7 + 0x70;
			iVar9 = iVar4 + 1;
			if (*psVar1 == 0x53) {
				iVar2 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar2) = iVar9;
				*(int *)(iVar2 + 0x101acaa0) = iVar5;
				*(undefined4 *)(iVar2 + 0x101acaa4) = 0x403;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar1 == 0x1a6) {
				iVar2 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar2) = iVar9;
				*(int *)(iVar2 + 0x101acaa0) = iVar5;
				*(undefined4 *)(iVar2 + 0x101acaa4) = 0x408;
				*(undefined4 *)(iVar2 + 0x101acaa8) = 0;
				_numtrigs = _numtrigs + 1;
			}
			if (*psVar1 == 0x78) {
				iVar2 = _numtrigs * 0x10;
				*(int *)(&DAT_101aca9c + iVar2) = iVar9;
				*(int *)(iVar2 + 0x101acaa0) = iVar5;
				*(undefined4 *)(iVar2 + 0x101acaa4) = 0x402;
				_numtrigs = _numtrigs + 1;
			}
			psVar7 = psVar7 + 0xe0;
			iVar4 = iVar4 + 2;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
		iVar5 = iVar5 + 1;
		psVar8 = psVar8 + 1;
	} while (iVar5 < 0x70);
	iVar4 = 0;
	iVar5 = 0;
	do {
		uVar3 = quests[15]._qactive;
		lVar10 = 0x10;
		psVar8 = (short *)((int)_DAT_1012f1d4 + iVar5);
		piVar6 = (int *)(&DAT_101aca9c + _numtrigs * 0x10);
		iVar9 = 0;
		do {
			if ((*psVar8 == 0x172) && (uVar3 == '\x03')) {
				*piVar6 = iVar9;
				piVar6[1] = iVar4;
				piVar6[2] = 0x402;
				piVar6 = piVar6 + 4;
				_numtrigs = _numtrigs + 1;
			}
			if ((psVar8[0x70] == 0x172) && (uVar3 == '\x03')) {
				*piVar6 = iVar9 + 1;
				piVar6[1] = iVar4;
				piVar6[2] = 0x402;
				piVar6 = piVar6 + 4;
				_numtrigs = _numtrigs + 1;
			}
			if ((psVar8[0xe0] == 0x172) && (uVar3 == '\x03')) {
				*piVar6 = iVar9 + 2;
				piVar6[1] = iVar4;
				piVar6[2] = 0x402;
				piVar6 = piVar6 + 4;
				_numtrigs = _numtrigs + 1;
			}
			if ((psVar8[0x150] == 0x172) && (uVar3 == '\x03')) {
				*piVar6 = iVar9 + 3;
				piVar6[1] = iVar4;
				piVar6[2] = 0x402;
				piVar6 = piVar6 + 4;
				_numtrigs = _numtrigs + 1;
			}
			if ((psVar8[0x1c0] == 0x172) && (uVar3 == '\x03')) {
				*piVar6 = iVar9 + 4;
				piVar6[1] = iVar4;
				piVar6[2] = 0x402;
				piVar6 = piVar6 + 4;
				_numtrigs = _numtrigs + 1;
			}
			if ((psVar8[0x230] == 0x172) && (uVar3 == '\x03')) {
				*piVar6 = iVar9 + 5;
				piVar6[1] = iVar4;
				piVar6[2] = 0x402;
				piVar6 = piVar6 + 4;
				_numtrigs = _numtrigs + 1;
			}
			if ((psVar8[0x2a0] == 0x172) && (uVar3 == '\x03')) {
				*piVar6 = iVar9 + 6;
				piVar6[1] = iVar4;
				piVar6[2] = 0x402;
				piVar6 = piVar6 + 4;
				_numtrigs = _numtrigs + 1;
			}
			psVar8 = psVar8 + 0x310;
			iVar9 = iVar9 + 7;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
		iVar4 = iVar4 + 1;
		iVar5 = iVar5 + 2;
	} while (iVar4 < 0x70);
	_trigflag = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitSKingTriggers(void)

{
	_trigflag = 0;
	_numtrigs = 1;
	_DAT_101aca9c = 0x52;
	uRam101acaa0 = 0x2a;
	uRam101acaa4 = 0x404;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitSChambTriggers(void)

{
	_trigflag = 0;
	_numtrigs = 1;
	_DAT_101aca9c = 0x46;
	uRam101acaa0 = 0x27;
	uRam101acaa4 = 0x404;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitPWaterTriggers(void)

{
	_trigflag = 0;
	_numtrigs = 1;
	_DAT_101aca9c = 0x1e;
	uRam101acaa0 = 0x53;
	uRam101acaa4 = 0x404;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitVPTriggers(void)

{
	_trigflag = 0;
	_numtrigs = 1;
	_DAT_101aca9c = 0x23;
	uRam101acaa0 = 0x20;
	uRam101acaa4 = 0x404;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL ForceTownTrig(void)

{
	int *piVar1;
	int iVar2;
	short *psVar3;
	longlong lVar4;

	piVar1 = (int *)&DAT_10120314;
	psVar3 = (short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2);
	while (*piVar1 != -1) {
		if (*piVar1 == (int)*psVar3) {
			strcpy(&DAT_101283d5, "Down to dungeon");
			_DAT_101285fc = 0x1d;
			_DAT_10128600 = 0x19;
			return 1;
		}
		piVar1 = piVar1 + 1;
	}
	if (_DAT_101aca84 != 0) {
		piVar1 = (int *)&DAT_10120340;
		while (*piVar1 != -1) {
			if (*piVar1 == (int)*psVar3) {
				strcpy(&DAT_101283d5, "Down to catacombs");
				_DAT_101285fc = 0x15;
				_DAT_10128600 = 0x31;
				return 1;
			}
			piVar1 = piVar1 + 1;
		}
	}
	if (iRam101aca88 != 0) {
		lVar4 = 0x16;
		iVar2 = 0x4af;
		do {
			if (iVar2 == (int)*psVar3) {
				strcpy(&DAT_101283d5, "Down to caves");
				_DAT_101285fc = 0x45;
				_DAT_10128600 = 0x11;
				return 1;
			}
			iVar2 = iVar2 + 1;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
	}
	if (iRam101aca8c != 0) {
		lVar4 = 0x10;
		iVar2 = 0x4d8;
		do {
			if (iVar2 == (int)*psVar3) {
				strcpy(&DAT_101283d5, "Down to hell");
				_DAT_101285fc = 0x50;
				_DAT_10128600 = 0x29;
				return 1;
			}
			iVar2 = iVar2 + 1;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

BOOL ForceL1Trig(void)

{
	ulonglong uVar1;
	undefined8 uVar2;
	undefined *puVar3;
	int iVar4;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar5;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	uVar2 = 0x100f8fd0;
	piVar5 = (int *)&DAT_10120374;
	while (*piVar5 != -1) {
		if (*piVar5 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2)) {
			if (currlevel < 2) {
				strcpy(&DAT_101283d5, "Up to town");
			} else {
				wsprintf((int)&DAT_101283d5, "Up to level %i", (uint)currlevel - 1, in_r6, in_r7, in_r8, in_r9,
				    in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
				    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
				    in_stack_ffffffc4);
			}
			uVar1 = (ulonglong)_numtrigs;
			iVar4 = 0;
			puVar3 = &DAT_101aca9c;
			if (0 < (int)_numtrigs) {
				do {
					if (*(int *)(puVar3 + 8) == 0x403) {
						_DAT_101285fc = *(undefined4 *)(iVar4 * 0x10 + 0x101acaa0);
						_DAT_10128600 = *(undefined4 *)(&DAT_101aca9c + iVar4 * 0x10);
						return 1;
					}
					puVar3 = puVar3 + 0x10;
					iVar4 = iVar4 + 1;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
			}
		}
		piVar5 = piVar5 + 1;
	}
	piVar5 = *(int **)((int)uVar2 + -0x55b8);
	do {
		if (*piVar5 == -1) {
			return 0;
		}
		if (*piVar5 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2)) {
			wsprintf((int)&DAT_101283d5, "Down to level %i", (uint)currlevel + 1, in_r6, in_r7, in_r8, in_r9,
			    in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			uVar1 = (ulonglong)_numtrigs;
			iVar4 = 0;
			puVar3 = &DAT_101aca9c;
			if (0 < (int)_numtrigs) {
				do {
					if (*(int *)(puVar3 + 8) == 0x402) {
						_DAT_101285fc = *(undefined4 *)(iVar4 * 0x10 + 0x101acaa0);
						_DAT_10128600 = *(undefined4 *)(&DAT_101aca9c + iVar4 * 0x10);
						return 1;
					}
					puVar3 = puVar3 + 0x10;
					iVar4 = iVar4 + 1;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
			}
		}
		piVar5 = piVar5 + 1;
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

BOOL ForceL2Trig(void)

{
	ulonglong uVar1;
	undefined8 uVar2;
	int iVar3;
	int iVar4;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar5;
	int iVar6;
	int *piVar7;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	uVar2 = 0x100f8fd0;
	piVar7 = (int *)&DAT_101203cc;
	while (*piVar7 != -1) {
		if (*piVar7 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2)) {
			iVar6 = 0;
			piVar5 = (int *)&DAT_101aca9c;
			while (iVar6 < (int)_numtrigs) {
				if (piVar5[2] == 0x403) {
					iVar3 = abs(*piVar5 - _DAT_10128600);
					iVar4 = abs(piVar5[1] - _DAT_101285fc);
					if ((iVar3 < 4) && (iVar4 < 4)) {
						wsprintf((int)&DAT_101283d5, *(undefined4 *)((int)uVar2 + -0x55b0), (uint)currlevel - 1,
						    in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff98, in_stack_ffffff9f,
						    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8,
						    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
						_DAT_101285fc = *(undefined4 *)(iVar6 * 0x10 + 0x101acaa0);
						_DAT_10128600 = *(undefined4 *)(&DAT_101aca9c + iVar6 * 0x10);
						return 1;
					}
				}
				piVar5 = piVar5 + 4;
				iVar6 = iVar6 + 1;
			}
		}
		piVar7 = piVar7 + 1;
	}
	piVar7 = *(int **)((int)uVar2 + -0x55c4);
	while (*piVar7 != -1) {
		if (*piVar7 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2)) {
			wsprintf((int)&DAT_101283d5, "Down to level %i", (uint)currlevel + 1, in_r6, in_r7, in_r8, in_r9,
			    in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			uVar1 = (ulonglong)_numtrigs;
			iVar6 = 0;
			piVar5 = (int *)&DAT_101aca9c;
			if (0 < (int)_numtrigs) {
				do {
					if (piVar5[2] == 0x402) {
						_DAT_101285fc = *(undefined4 *)(iVar6 * 0x10 + 0x101acaa0);
						_DAT_10128600 = *(undefined4 *)(&DAT_101aca9c + iVar6 * 0x10);
						return 1;
					}
					piVar5 = piVar5 + 4;
					iVar6 = iVar6 + 1;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
			}
		}
		piVar7 = piVar7 + 1;
	}
	if (currlevel == 5) {
		piVar7 = *(int **)((int)uVar2 + -0x55c8);
		while (*piVar7 != -1) {
			if (*piVar7 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2)) {
				iVar6 = 0;
				piVar5 = (int *)&DAT_101aca9c;
				while (iVar6 < (int)_numtrigs) {
					if (piVar5[2] == 0x408) {
						iVar3 = abs(*piVar5 - _DAT_10128600);
						iVar4 = abs(piVar5[1] - _DAT_101285fc);
						if ((iVar3 < 4) && (iVar4 < 4)) {
							strcpy(&DAT_101283d5, *(char **)((int)uVar2 + -0x55b4));
							_DAT_101285fc = *(undefined4 *)(iVar6 * 0x10 + 0x101acaa0);
							_DAT_10128600 = *(undefined4 *)(&DAT_101aca9c + iVar6 * 0x10);
							return 1;
						}
					}
					piVar5 = piVar5 + 4;
					iVar6 = iVar6 + 1;
				}
			}
			piVar7 = piVar7 + 1;
		}
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

BOOL ForceL3Trig(void)

{
	ulonglong uVar1;
	undefined8 uVar2;
	short *psVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar7;
	int *piVar8;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	uVar2 = 0x100f8fd0;
	piVar7 = (int *)&DAT_101203f8;
	while (*piVar7 != -1) {
		if (*piVar7 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2)) {
			wsprintf((int)&DAT_101283d5, "Up to level %i", (uint)currlevel - 1, in_r6, in_r7, in_r8, in_r9,
			    in_r10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4);
			uVar1 = (ulonglong)_numtrigs;
			iVar6 = 0;
			piVar8 = (int *)&DAT_101aca9c;
			if (0 < (int)_numtrigs) {
				do {
					if (piVar8[2] == 0x403) {
						_DAT_101285fc = *(undefined4 *)(iVar6 * 0x10 + 0x101acaa0);
						_DAT_10128600 = *(undefined4 *)(&DAT_101aca9c + iVar6 * 0x10);
						return 1;
					}
					piVar8 = piVar8 + 4;
					iVar6 = iVar6 + 1;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
			}
		}
		piVar7 = piVar7 + 1;
	}
	piVar7 = *(int **)((int)uVar2 + -0x55d0);
	while (iVar6 = *piVar7, iVar6 != -1) {
		psVar3 = (short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2);
		if (((iVar6 == (int)*psVar3) || (iVar6 == (int)psVar3[0x70])) || (iVar6 == (int)psVar3[0xe0])) {
			wsprintf((int)&DAT_101283d5, "Down to level %i", (uint)currlevel + 1, in_r6, in_r7, in_r8, in_r9,
			    in_r10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4);
			uVar1 = (ulonglong)_numtrigs;
			iVar6 = 0;
			piVar8 = (int *)&DAT_101aca9c;
			if (0 < (int)_numtrigs) {
				do {
					if (piVar8[2] == 0x402) {
						_DAT_101285fc = *(undefined4 *)(iVar6 * 0x10 + 0x101acaa0);
						_DAT_10128600 = *(undefined4 *)(&DAT_101aca9c + iVar6 * 0x10);
						return 1;
					}
					piVar8 = piVar8 + 4;
					iVar6 = iVar6 + 1;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
			}
		}
		piVar7 = piVar7 + 1;
	}
	if (currlevel == 9) {
		piVar7 = *(int **)((int)uVar2 + -0x55d4);
		while (*piVar7 != -1) {
			if (*piVar7 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2)) {
				iVar6 = 0;
				piVar8 = (int *)&DAT_101aca9c;
				while (iVar6 < (int)_numtrigs) {
					if (piVar8[2] == 0x408) {
						iVar4 = abs(*piVar8 - _DAT_10128600);
						iVar5 = abs(piVar8[1] - _DAT_101285fc);
						if ((iVar4 < 4) && (iVar5 < 4)) {
							strcpy(&DAT_101283d5, *(char **)((int)uVar2 + -0x55b4));
							_DAT_101285fc = *(undefined4 *)(iVar6 * 0x10 + 0x101acaa0);
							_DAT_10128600 = *(undefined4 *)(&DAT_101aca9c + iVar6 * 0x10);
							return 1;
						}
					}
					piVar8 = piVar8 + 4;
					iVar6 = iVar6 + 1;
				}
			}
			piVar7 = piVar7 + 1;
		}
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

BOOL ForceL4Trig(void)

{
	ulonglong uVar1;
	undefined8 uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar6;
	int *piVar7;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	uVar2 = 0x100f8fd0;
	piVar6 = (int *)&DAT_10120490;
	while (*piVar6 != -1) {
		if (*piVar6 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2)) {
			wsprintf((int)&DAT_101283d5, "Up to level %i", (uint)currlevel - 1, in_r6, in_r7, in_r8, in_r9,
			    in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			uVar1 = (ulonglong)_numtrigs;
			iVar5 = 0;
			piVar7 = (int *)&DAT_101aca9c;
			if (0 < (int)_numtrigs) {
				do {
					if (piVar7[2] == 0x403) {
						_DAT_101285fc = *(undefined4 *)(iVar5 * 0x10 + 0x101acaa0);
						_DAT_10128600 = *(undefined4 *)(&DAT_101aca9c + iVar5 * 0x10);
						return 1;
					}
					piVar7 = piVar7 + 4;
					iVar5 = iVar5 + 1;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
			}
		}
		piVar6 = piVar6 + 1;
	}
	piVar6 = *(int **)((int)uVar2 + -0x55dc);
	while (true) {
		iVar5 = (int)uVar2;
		if (*piVar6 == -1)
			break;
		if (*piVar6 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2)) {
			wsprintf((int)&DAT_101283d5, "Down to level %i", (uint)currlevel + 1, in_r6, in_r7, in_r8, in_r9,
			    in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			uVar1 = (ulonglong)_numtrigs;
			iVar5 = 0;
			piVar7 = (int *)&DAT_101aca9c;
			if (0 < (int)_numtrigs) {
				do {
					if (piVar7[2] == 0x402) {
						_DAT_101285fc = *(undefined4 *)(iVar5 * 0x10 + 0x101acaa0);
						_DAT_10128600 = *(undefined4 *)(&DAT_101aca9c + iVar5 * 0x10);
						return 1;
					}
					piVar7 = piVar7 + 4;
					iVar5 = iVar5 + 1;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
			}
		}
		piVar6 = piVar6 + 1;
	}
	if (currlevel == 0xd) {
		piVar6 = *(int **)(iVar5 + -0x55e0);
		while (true) {
			iVar5 = (int)uVar2;
			if (*piVar6 == -1)
				break;
			if (*piVar6 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2)) {
				iVar5 = 0;
				piVar7 = (int *)&DAT_101aca9c;
				while (iVar5 < (int)_numtrigs) {
					if (piVar7[2] == 0x408) {
						iVar3 = abs(*piVar7 - _DAT_10128600);
						iVar4 = abs(piVar7[1] - _DAT_101285fc);
						if ((iVar3 < 4) && (iVar4 < 4)) {
							strcpy(&DAT_101283d5, *(char **)((int)uVar2 + -0x55b4));
							_DAT_101285fc = *(undefined4 *)(iVar5 * 0x10 + 0x101acaa0);
							_DAT_10128600 = *(undefined4 *)(&DAT_101aca9c + iVar5 * 0x10);
							return 1;
						}
					}
					piVar7 = piVar7 + 4;
					iVar5 = iVar5 + 1;
				}
			}
			piVar6 = piVar6 + 1;
		}
	}
	if (currlevel == 0xf) {
		piVar6 = *(int **)(iVar5 + -0x55e4);
		while (*piVar6 != -1) {
			if (*piVar6 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2)) {
				strcpy(&DAT_101283d5, "Down to Diablo");
				uVar1 = (ulonglong)_numtrigs;
				iVar5 = 0;
				piVar7 = (int *)&DAT_101aca9c;
				if (0 < (int)_numtrigs) {
					do {
						if (piVar7[2] == 0x402) {
							_DAT_101285fc = *(undefined4 *)(iVar5 * 0x10 + 0x101acaa0);
							_DAT_10128600 = *(undefined4 *)(&DAT_101aca9c + iVar5 * 0x10);
							return 1;
						}
						piVar7 = piVar7 + 4;
						iVar5 = iVar5 + 1;
						uVar1 = uVar1 - 1;
					} while (uVar1 != 0);
				}
			}
			piVar6 = piVar6 + 1;
		}
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Freeupstairs(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int *piVar5;
	int iVar6;

	iVar6 = 0;
	piVar5 = (int *)&DAT_101aca9c;
	while (iVar6 < _numtrigs) {
		iVar2 = *piVar5;
		iVar4 = piVar5[1];
		iVar3 = iVar4 + -2;
		iVar1 = _DAT_1012f1bc + (iVar2 + -2) * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + -1) * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + iVar2 * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + 1) * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + 2) * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar3 = iVar4 + -1;
		iVar1 = _DAT_1012f1bc + (iVar2 + -2) * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + -1) * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + iVar2 * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + 1) * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + 2) * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar3 = iVar4 + 1;
		iVar1 = _DAT_1012f1bc + (iVar2 + -2) * 0x70;
		*(byte *)(iVar4 + iVar1) = *(byte *)(iVar4 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + -1) * 0x70;
		*(byte *)(iVar4 + iVar1) = *(byte *)(iVar4 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + iVar2 * 0x70;
		*(byte *)(iVar4 + iVar1) = *(byte *)(iVar4 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + 1) * 0x70;
		*(byte *)(iVar4 + iVar1) = *(byte *)(iVar4 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + 2) * 0x70;
		*(byte *)(iVar4 + iVar1) = *(byte *)(iVar4 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + -2) * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + -1) * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + iVar2 * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + 1) * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + 2) * 0x70;
		*(byte *)(iVar3 + iVar1) = *(byte *)(iVar3 + iVar1) | 8;
		iVar4 = iVar4 + 2;
		piVar5 = piVar5 + 4;
		iVar6 = iVar6 + 1;
		iVar1 = _DAT_1012f1bc + (iVar2 + -2) * 0x70;
		*(byte *)(iVar4 + iVar1) = *(byte *)(iVar4 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + -1) * 0x70;
		*(byte *)(iVar4 + iVar1) = *(byte *)(iVar4 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + iVar2 * 0x70;
		*(byte *)(iVar4 + iVar1) = *(byte *)(iVar4 + iVar1) | 8;
		iVar1 = _DAT_1012f1bc + (iVar2 + 1) * 0x70;
		*(byte *)(iVar4 + iVar1) = *(byte *)(iVar4 + iVar1) | 8;
		iVar2 = _DAT_1012f1bc + (iVar2 + 2) * 0x70;
		*(byte *)(iVar4 + iVar2) = *(byte *)(iVar4 + iVar2) | 8;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

BOOL ForceSKingTrig(void)

{
	int *piVar1;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	piVar1 = (int *)&DAT_10120374;
	while (true) {
		if (*piVar1 == -1) {
			return 0;
		}
		if (*piVar1 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2))
			break;
		piVar1 = piVar1 + 1;
	}
	wsprintf((int)&DAT_101283d5, "Back to Level %i", (uint)quests[12]._qlevel, in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
	    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	_DAT_101285fc = uRam101acaa0;
	_DAT_10128600 = _DAT_101aca9c;
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

BOOL ForceSChambTrig(void)

{
	int *piVar1;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	piVar1 = (int *)&DAT_101203d8;
	while (true) {
		if (*piVar1 == -1) {
			return 0;
		}
		if (*piVar1 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2))
			break;
		piVar1 = piVar1 + 1;
	}
	wsprintf((int)&DAT_101283d5, "Back to Level %i", (uint)quests[14]._qlevel, in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
	    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	_DAT_101285fc = uRam101acaa0;
	_DAT_10128600 = _DAT_101aca9c;
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

BOOL ForcePWaterTrig(void)

{
	int *piVar1;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	piVar1 = (int *)&DAT_10120434;
	while (true) {
		if (*piVar1 == -1) {
			return 0;
		}
		if (*piVar1 == (int)*(short *)(_DAT_1012f1d4 + _DAT_10128600 * 0xe0 + _DAT_101285fc * 2))
			break;
		piVar1 = piVar1 + 1;
	}
	wsprintf((int)&DAT_101283d5, "Back to Level %i", (uint)quests[13]._qlevel, in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
	    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	_DAT_101285fc = uRam101acaa0;
	_DAT_10128600 = _DAT_101aca9c;
	return 1;
}

// WARNING: Removing unreachable block (ram,0x100b78e0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CheckTrigForce(void)

{
	_trigflag = 0;
	if (_MouseY < 0x160) {
		if (DAT_1012f316 == '\0') {
			if (leveltype == 2) {
				_trigflag = ForceL2Trig();
			} else {
				if (leveltype < 2) {
					if (leveltype == 0) {
						_trigflag = ForceTownTrig();
					} else {
						_trigflag = ForceL1Trig();
					}
				} else {
					if (leveltype == 4) {
						_trigflag = ForceL4Trig();
					} else {
						if (leveltype < 4) {
							_trigflag = ForceL3Trig();
						}
					}
				}
			}
			if ((leveltype != 0) && (_trigflag == 0)) {
				_trigflag = ForceQuests();
			}
		} else {
			if (DAT_1012f315 != 3) {
				if (DAT_1012f315 < 3) {
					if (DAT_1012f315 == 1) {
						_trigflag = ForceSKingTrig();
					} else {
						if (DAT_1012f315 != 0) {
							_trigflag = ForceSChambTrig();
						}
					}
				} else {
					if (DAT_1012f315 < 5) {
						_trigflag = ForcePWaterTrig();
					}
				}
			}
		}
		if (_trigflag != 0) {
			ClearPanel();
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void CheckTriggers(void)

{
	char cVar1;
	uint fom;
	uint uVar2;
	bool bVar3;
	int iVar4;
	BOOL BVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	char e;
	ulonglong unaff_r19;
	ulonglong unaff_r20;
	int iVar8;
	uint *puVar9;

	if (((PlayerStruct *)((int)plr + myplr * 0x55ec))->_pmode == 0) {
		puVar9 = (uint *)&DAT_101aca9c;
		iVar8 = 0;
		while (iVar8 < _numtrigs) {
			iVar4 = myplr * 0x55ec;
			fom = *(uint *)((int)plr + iVar4 + 0x38);
			uVar6 = (ulonglong)fom;
			if ((fom == *puVar9) && (fom = *(uint *)((int)plr + iVar4 + 0x3c), uVar7 = (ulonglong)fom, fom == puVar9[1])) {
				fom = puVar9[2];
				if (fom == 0x404) {
					StartNewLvl(myplr, 0x404, _DAT_1019cbf4);
				} else {
					if ((int)fom < 0x404) {
						if (fom == 0x402) {
							if ((0xb < _DAT_1012861c) && (BVar5 = DropItemBeforeTrig(), BVar5 != 0)) {
								return;
							}
							StartNewLvl(myplr, puVar9[2], (uint)currlevel + 1);
						} else {
							if ((int)fom < 0x402) {
							LAB_100b7c08:
								app_fatal("Unknown trigger msg");
							} else {
								if ((0xb < _DAT_1012861c) && (BVar5 = DropItemBeforeTrig(), BVar5 != 0)) {
									return;
								}
								StartNewLvl(myplr, puVar9[2], (uint)currlevel - 1);
							}
						}
					} else {
						if (fom == 0x408) {
							_DAT_101aca94 = (uint)currlevel;
							StartNewLvl(myplr, puVar9[2], 0);
						} else {
							if ((0x407 < (int)fom) || ((int)fom < 0x407))
								goto LAB_100b7c08;
							if (gbMaxPlayers != '\x01') {
								uVar2 = puVar9[3];
								bVar3 = false;
								if ((uVar2 == 5) && (*(char *)((int)plr + iVar4 + 0x1b4) < '\b')) {
									unaff_r19 = uVar7 + 1;
									bVar3 = true;
									e = '(';
									unaff_r20 = uVar6;
								}
								if ((uVar2 == 9) && (*(char *)((int)plr + iVar4 + 0x1b4) < '\r')) {
									unaff_r20 = uVar6 + 1;
									bVar3 = true;
									e = ')';
									unaff_r19 = uVar7;
								}
								if ((uVar2 == 0xd) && (*(char *)((int)plr + iVar4 + 0x1b4) < '\x11')) {
									unaff_r19 = uVar7 + 1;
									bVar3 = true;
									e = '*';
									unaff_r20 = uVar6;
								}
								if (bVar3) {
									cVar1 = *(char *)((int)plr + iVar4 + 0x15c);
									if (cVar1 == '\0') {
										PlaySFX(0x2fa);
									} else {
										if (cVar1 == '\x01') {
											PlaySFX(0x28d);
										} else {
											if (cVar1 == '\x02') {
												PlaySFX(0x226);
											}
										}
									}
									InitDiabloMsg(e);
									NetSendCmdLoc(1, '\x01', (BYTE)unaff_r20, (BYTE)unaff_r19);
									return;
								}
							}
							StartNewLvl(myplr, fom, puVar9[3]);
						}
					}
				}
			}
			puVar9 = puVar9 + 4;
			iVar8 = iVar8 + 1;
		}
	}
	return;
}