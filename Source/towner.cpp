
int GetActiveTowner(int t)

{
	ulonglong uVar1;
	undefined *puVar2;
	int iVar3;

	iVar3 = 0;
	puVar2 = &DAT_101ab9c4;
	uVar1 = (ulonglong)(uint)numtowners;
	if (0 < numtowners) {
		do {
			if (t == *(int *)(puVar2 + 4)) {
				return iVar3;
			}
			puVar2 = puVar2 + 0x10c;
			iVar3 = iVar3 + 1;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	return -1;
}

void SetTownerGPtrs(BYTE *pData, BYTE **pAnim)

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

	cVar2 = LockMemFile((longlong)(int)pData, (char)pAnim, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb);
	*pAnim = pData;
	pAnim[1] = (BYTE *)((uint) * (byte *)((int)cVar2 + 3) << 0x18 | (uint) * (byte *)((int)cVar2 + 2) << 0x10 | (uint) * (byte *)((int)cVar2 + 1) << 8
	    | (uint) * (byte *)(int)cVar2);
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
	pAnim[9] = (BYTE *)((uint) * (byte *)(iVar1 + 0x13) << 0x18 | (uint) * (byte *)(iVar1 + 0x12) << 0x10
	    | (uint) * (byte *)(iVar1 + 0x11) << 8 | (uint) * (byte *)(iVar1 + 0x10));
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

void NewTownerAnim(int tnum, BYTE *pAnim, int numFrames, int Delay)

{
	tnum = tnum * 0x10c;
	*(BYTE **)(tnum + 0x101ab9e8) = pAnim;
	*(int *)(tnum + 0x101ab9f4) = numFrames;
	*(undefined4 *)(tnum + 0x101ab9f8) = 1;
	*(undefined4 *)(tnum + 0x101ab9f0) = 0;
	*(int *)(tnum + 0x101ab9ec) = Delay;
	return;
}

void InitTownerInfo(int i, int w, int sel, int t, int x, int y, int ao, int tp)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	int local_4c;

	ZeroMemory((char)((longlong)i * 0x10c) + -0x3c, 0xc, (char)sel, (char)t, (char)x, (char)y, (char)ao,
	    (char)tp, in_stack_ffffffab, in_stack_ffffffaf, local_4c);
	iVar2 = (int)((longlong)i * 0x10c);
	*(int *)(iVar2 + 0x101aba18) = sel;
	piVar1 = *(int **)(local_4c + -0x767c);
	*(int *)(iVar2 + 0x101aba04) = w;
	*(int *)(iVar2 + 0x101aba08) = w + -0x40 >> 1;
	*(undefined4 *)(iVar2 + 0x101aba1c) = 0;
	*(int *)(iVar2 + 0x101ab9c8) = t;
	*(int *)(iVar2 + 0x101ab9cc) = x;
	*(int *)(iVar2 + 0x101ab9d0) = y;
	*(short *)(*piVar1 + x * 0xe0 + y * 2) = (short)i + 1;
	*(undefined *)(iVar2 + 0x101aba00) = (char)ao;
	*(int *)(iVar2 + 0x101aba0c) = tp;
	iVar3 = GetRndSeed();
	*(int *)(iVar2 + 0x101aba50) = iVar3;
	return;
}

void InitQstSnds(int i)

{
	undefined *puVar1;
	int *piVar2;
	QuestStruct *pQVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = i;
	if (boyloadflag != 0) {
		iVar4 = i + 1;
	}
	pQVar3 = quests;
	lVar5 = 4;
	puVar1 = &DAT_101ab9c4 + i * 0x10c;
	piVar2 = (int *)(&DAT_10120008 + iVar4 * 0x40);
	do {
		puVar1[0x5c] = pQVar3->_qtype;
		puVar1[0x5d] = (char)*piVar2;
		if (*piVar2 == -1) {
			puVar1[0x5e] = 0;
		} else {
			puVar1[0x5e] = 1;
		}
		puVar1[0x5f] = pQVar3[1]._qtype;
		puVar1[0x60] = (char)piVar2[1];
		if (piVar2[1] == -1) {
			puVar1[0x61] = 0;
		} else {
			puVar1[0x61] = 1;
		}
		puVar1[0x62] = pQVar3[2]._qtype;
		puVar1[99] = (char)piVar2[2];
		if (piVar2[2] == -1) {
			puVar1[100] = 0;
		} else {
			puVar1[100] = 1;
		}
		puVar1[0x65] = pQVar3[3]._qtype;
		puVar1[0x66] = (char)piVar2[3];
		if (piVar2[3] == -1) {
			puVar1[0x67] = 0;
		} else {
			puVar1[0x67] = 1;
		}
		pQVar3 = pQVar3 + 4;
		puVar1 = puVar1 + 0xc;
		piVar2 = piVar2 + 4;
		lVar5 = lVar5 + -1;
	} while (lVar5 != 0);
	return;
}

void InitSmith(void)

{
	int tnum;
	int iVar1;
	BYTE *pBVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	InitTownerInfo(numtowners, 0x60, 1, 0, 0x3e, 0x3f, 0, 10);
	InitQstSnds(numtowners);
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x55f4), (DWORD *)0x0);
	tnum = numtowners;
	iVar3 = numtowners * 0x10c;
	*(BYTE **)(iVar3 + 0x101abac8) = pBVar2;
	*(undefined4 *)(iVar3 + 0x101abacc) = 0;
	*(undefined4 *)(iVar3 + 0x101aba84) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba88) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba8c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba90) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba94) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba98) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba9c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaa4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaac) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abab4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101ababc) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abac0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(int *)(iVar3 + 0x101abac4) = 0x10;
	NewTownerAnim(tnum, (BYTE *)(iVar3 + 0x101aba8c), *(int *)(iVar3 + 0x101abac4), 3);
	strcpy((char *)(numtowners * 0x10c + 0x101aba64), *(char **)(iVar1 + -0x55f8));
	numtowners = numtowners + 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitBarOwner(void)

{
	int tnum;
	int iVar1;
	BYTE *pBVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	_DAT_101ab9b4 = 0;
	InitTownerInfo(numtowners, 0x60, 1, 3, 0x37, 0x3e, 3, 10);
	InitQstSnds(numtowners);
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x55fc), (DWORD *)0x0);
	tnum = numtowners;
	iVar3 = numtowners * 0x10c;
	*(BYTE **)(iVar3 + 0x101abac8) = pBVar2;
	*(undefined4 *)(iVar3 + 0x101abacc) = 0;
	*(undefined4 *)(iVar3 + 0x101aba84) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba88) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba8c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba90) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba94) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba98) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba9c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaa4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaac) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abab4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101ababc) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abac0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(int *)(iVar3 + 0x101abac4) = 0x10;
	NewTownerAnim(tnum, (BYTE *)(iVar3 + 0x101aba8c), *(int *)(iVar3 + 0x101abac4), 3);
	strcpy((char *)(numtowners * 0x10c + 0x101aba64), *(char **)(iVar1 + -0x5600));
	numtowners = numtowners + 1;
	return;
}

void InitTownDead(void)

{
	int tnum;
	int iVar1;
	BYTE *pBVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	InitTownerInfo(numtowners, 0x60, 1, 2, 0x18, 0x20, -1, 10);
	InitQstSnds(numtowners);
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x5604), (DWORD *)0x0);
	tnum = numtowners;
	iVar3 = numtowners * 0x10c;
	*(BYTE **)(iVar3 + 0x101abac8) = pBVar2;
	*(undefined4 *)(iVar3 + 0x101abacc) = 0;
	*(undefined4 *)(iVar3 + 0x101aba84) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba88) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba8c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba90) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba94) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba98) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba9c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaa4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaac) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abab4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101ababc) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abac0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(int *)(iVar3 + 0x101abac4) = 8;
	NewTownerAnim(tnum, (BYTE *)(iVar3 + 0x101abaa4), *(int *)(iVar3 + 0x101abac4), 6);
	strcpy((char *)(numtowners * 0x10c + 0x101aba64), *(char **)(iVar1 + -0x5608));
	numtowners = numtowners + 1;
	return;
}

void InitWitch(void)

{
	int tnum;
	int iVar1;
	BYTE *pBVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	InitTownerInfo(numtowners, 0x60, 1, 6, 0x50, 0x14, 5, 10);
	InitQstSnds(numtowners);
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x560c), (DWORD *)0x0);
	tnum = numtowners;
	iVar3 = numtowners * 0x10c;
	*(BYTE **)(iVar3 + 0x101abac8) = pBVar2;
	*(undefined4 *)(iVar3 + 0x101abacc) = 0;
	*(undefined4 *)(iVar3 + 0x101aba84) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba88) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba8c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba90) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba94) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba98) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba9c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaa4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaac) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abab4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101ababc) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abac0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(int *)(iVar3 + 0x101abac4) = 0x13;
	NewTownerAnim(tnum, (BYTE *)(iVar3 + 0x101aba84), *(int *)(iVar3 + 0x101abac4), 6);
	strcpy((char *)(numtowners * 0x10c + 0x101aba64), *(char **)(iVar1 + -0x5610));
	numtowners = numtowners + 1;
	return;
}

void InitBarmaid(void)

{
	int tnum;
	int iVar1;
	BYTE *pBVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	InitTownerInfo(numtowners, 0x60, 1, 7, 0x2b, 0x42, -1, 10);
	InitQstSnds(numtowners);
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x5614), (DWORD *)0x0);
	tnum = numtowners;
	iVar3 = numtowners * 0x10c;
	*(BYTE **)(iVar3 + 0x101abac8) = pBVar2;
	*(undefined4 *)(iVar3 + 0x101abacc) = 0;
	*(undefined4 *)(iVar3 + 0x101aba84) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba88) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba8c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba90) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba94) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba98) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba9c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaa4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaac) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abab4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101ababc) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abac0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(int *)(iVar3 + 0x101abac4) = 0x12;
	NewTownerAnim(tnum, (BYTE *)(iVar3 + 0x101aba84), *(int *)(iVar3 + 0x101abac4), 6);
	strcpy((char *)(numtowners * 0x10c + 0x101aba64), *(char **)(iVar1 + -0x5618));
	numtowners = numtowners + 1;
	return;
}

void InitBoy(void)

{
	int tnum;
	int iVar1;
	BYTE *pBVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	boyloadflag = 1;
	InitTownerInfo(numtowners, 0x60, 1, 8, 0xb, 0x35, -1, 10);
	InitQstSnds(numtowners);
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x561c), (DWORD *)0x0);
	tnum = numtowners;
	iVar3 = numtowners * 0x10c;
	*(BYTE **)(iVar3 + 0x101abac8) = pBVar2;
	*(undefined4 *)(iVar3 + 0x101abacc) = 0;
	*(undefined4 *)(iVar3 + 0x101aba84) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba88) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba8c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba90) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba94) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba98) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba9c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaa4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaac) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abab4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101ababc) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abac0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(int *)(iVar3 + 0x101abac4) = 0x14;
	NewTownerAnim(tnum, (BYTE *)(iVar3 + 0x101aba84), *(int *)(iVar3 + 0x101abac4), 6);
	strcpy((char *)(numtowners * 0x10c + 0x101aba64), *(char **)(iVar1 + -0x5620));
	numtowners = numtowners + 1;
	return;
}

void InitHealer(void)

{
	int tnum;
	int iVar1;
	BYTE *pBVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	InitTownerInfo(numtowners, 0x60, 1, 1, 0x37, 0x4f, 1, 10);
	InitQstSnds(numtowners);
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x5624), (DWORD *)0x0);
	tnum = numtowners;
	iVar3 = numtowners * 0x10c;
	*(BYTE **)(iVar3 + 0x101abac8) = pBVar2;
	*(undefined4 *)(iVar3 + 0x101abacc) = 0;
	*(undefined4 *)(iVar3 + 0x101aba84) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba88) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba8c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba90) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba94) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba98) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba9c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaa4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaac) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abab4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101ababc) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abac0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(int *)(iVar3 + 0x101abac4) = 0x14;
	NewTownerAnim(tnum, (BYTE *)(iVar3 + 0x101ababc), *(int *)(iVar3 + 0x101abac4), 6);
	strcpy((char *)(numtowners * 0x10c + 0x101aba64), *(char **)(iVar1 + -0x5628));
	numtowners = numtowners + 1;
	return;
}

void InitTeller(void)

{
	int tnum;
	int iVar1;
	BYTE *pBVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	InitTownerInfo(numtowners, 0x60, 1, 4, 0x3e, 0x47, 2, 10);
	InitQstSnds(numtowners);
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x562c), (DWORD *)0x0);
	tnum = numtowners;
	iVar3 = numtowners * 0x10c;
	*(BYTE **)(iVar3 + 0x101abac8) = pBVar2;
	*(undefined4 *)(iVar3 + 0x101abacc) = 0;
	*(undefined4 *)(iVar3 + 0x101aba84) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba88) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba8c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba90) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba94) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba98) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba9c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaa4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaac) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abab4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101ababc) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abac0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(int *)(iVar3 + 0x101abac4) = 0x19;
	NewTownerAnim(tnum, (BYTE *)(iVar3 + 0x101aba84), *(int *)(iVar3 + 0x101abac4), 3);
	strcpy((char *)(numtowners * 0x10c + 0x101aba64), *(char **)(iVar1 + -0x5630));
	numtowners = numtowners + 1;
	return;
}

void InitDrunk(void)

{
	int tnum;
	int iVar1;
	BYTE *pBVar2;
	int iVar3;

	iVar1 = 0x100f8fd0;
	InitTownerInfo(numtowners, 0x60, 1, 5, 0x47, 0x54, 4, 10);
	InitQstSnds(numtowners);
	pBVar2 = LoadFileInMem(*(char **)(iVar1 + -0x5634), (DWORD *)0x0);
	tnum = numtowners;
	iVar3 = numtowners * 0x10c;
	*(BYTE **)(iVar3 + 0x101abac8) = pBVar2;
	*(undefined4 *)(iVar3 + 0x101abacc) = 0;
	*(undefined4 *)(iVar3 + 0x101aba84) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba88) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba8c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba90) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba94) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101aba98) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101aba9c) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaa4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abaa8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abaac) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101abab4) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abab8) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(undefined4 *)(iVar3 + 0x101ababc) = *(undefined4 *)(iVar3 + 0x101abac8);
	*(undefined4 *)(iVar3 + 0x101abac0) = *(undefined4 *)(iVar3 + 0x101abacc);
	*(int *)(iVar3 + 0x101abac4) = 0x12;
	NewTownerAnim(tnum, (BYTE *)(iVar3 + 0x101aba84), *(int *)(iVar3 + 0x101abac4), 3);
	strcpy((char *)(numtowners * 0x10c + 0x101aba64), *(char **)(iVar1 + -0x5638));
	numtowners = numtowners + 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitCows(void)

{
	int y;
	int iVar1;
	undefined8 uVar2;
	BYTE *pBVar3;
	int tnum;
	int iVar4;
	short *psVar5;
	int x;
	int iVar6;
	int iVar7;
	int *piVar8;
	int *piVar9;
	int *piVar10;

	uVar2 = 0x100f8fd0;
	pBVar3 = LoadFileInMem("Towners\\Animals\\Cow.CEL", (DWORD *)0x0);
	x = (int)uVar2;
	*(BYTE **)(x + -0x4a8c) = pBVar3;
	iVar7 = 0;
	piVar10 = *(int **)(x + -0x5640);
	piVar9 = *(int **)(x + -0x5644);
	piVar8 = *(int **)(x + -0x5648);
	do {
		x = *piVar10;
		y = *piVar9;
		iVar1 = *piVar8;
		InitTownerInfo(numtowners, 0x80, 0, 9, x, y, -1, 10);
		tnum = numtowners * 0x10c;
		*(undefined4 *)(tnum + 0x101abac8) = *(undefined4 *)((int)uVar2 + -0x4a8c);
		*(undefined4 *)(tnum + 0x101abacc) = 0;
		SetTownerGPtrs(*(BYTE **)(tnum + 0x101abac8), (BYTE **)(tnum + 0x101aba84));
		tnum = numtowners;
		iVar4 = numtowners * 0x10c;
		*(undefined4 *)(iVar4 + 0x101abac4) = 0xc;
		NewTownerAnim(tnum, (BYTE *)(iVar4 + iVar1 * 8 + 0x101aba84), *(int *)(iVar4 + 0x101abac4), 3);
		tnum = random('\0', 0xb);
		iVar4 = numtowners * 0x10c;
		*(int *)(iVar4 + 0x101ab9f8) = tnum + 1;
		*(undefined4 *)(iVar4 + 0x101aba18) = 1;
		strcpy((char *)(iVar4 + 0x101aba64), "Cow");
		iVar1 = iVar1 * 4;
		tnum = *(int *)(&DAT_1011ffe8 + iVar1);
		iVar1 = *(int *)(&DAT_1011ffc8 + iVar1);
		iVar6 = _DAT_1012f1b4 + x * 0xe0;
		iVar4 = (y + tnum) * 2;
		if (*(short *)(iVar6 + iVar4) == 0) {
			*(short *)(iVar6 + iVar4) = -((short)numtowners + 1);
		}
		x = (x + iVar1) * 0xe0;
		psVar5 = (short *)(_DAT_1012f1b4 + x + y * 2);
		if (*psVar5 == 0) {
			*psVar5 = -((short)numtowners + 1);
		}
		psVar5 = (short *)(_DAT_1012f1b4 + x + (y + tnum) * 2);
		if (*psVar5 == 0) {
			*psVar5 = -((short)numtowners + 1);
		}
		iVar7 = iVar7 + 1;
		piVar9 = piVar9 + 1;
		numtowners = numtowners + 1;
		piVar8 = piVar8 + 1;
		piVar10 = piVar10 + 1;
	} while (iVar7 < 3);
	return;
}

void InitTowners(void)

{
	char cVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	numtowners = 0;
	boyloadflag = 0;
	InitSmith();
	InitHealer();
	cVar1 = *(char *)(*(int *)(iVar2 + -0x7604) + 0x92);
	if ((cVar1 != '\0') && (cVar1 != '\x03')) {
		InitTownDead();
	}
	InitBarOwner();
	InitTeller();
	InitDrunk();
	InitWitch();
	InitBarmaid();
	InitBoy();
	InitCows();
	return;
}

void FreeTownerGFX(void)

{
	undefined8 uVar1;
	int iVar2;
	undefined *puVar3;

	uVar1 = 0x100f8fd0;
	puVar3 = &DAT_101ab9c4;
	iVar2 = 0;
	do {
		if (*(int *)(puVar3 + 0x104) == *(int *)((int)uVar1 + -0x4a8c)) {
			*(undefined4 *)(puVar3 + 0x104) = 0;
		} else {
			if (*(int *)(puVar3 + 0x104) != 0) {
				MemFreeDbg((int **)(puVar3 + 0x104));
			}
		}
		iVar2 = iVar2 + 1;
		puVar3 = puVar3 + 0x10c;
	} while (iVar2 < 0x10);
	MemFreeDbg((int **)((int)uVar1 + -0x4a8c));
	return;
}

void TownCtrlMsg(int i)

{
	uint uVar1;
	int *piVar2;
	int iVar3;
	int iVar5;
	int iVar6;
	int iVar7;
	ulonglong uVar4;
	ulonglong uVar8;
	ulonglong uVar9;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;

	iVar3 = 0x100f8fd0;
	uVar9 = (longlong)i * 0x10c;
	iVar7 = (int)uVar9;
	piVar2 = (int *)(iVar7 + 0x101aba14);
	if (*piVar2 != 0) {
		iVar5 = *(int *)(iVar7 + 0x101aba54) * 0x55ec;
		iVar6 = abs(*(int *)(iVar7 + 0x101ab9cc) - *(int *)((int)plr + iVar5 + 0x38));
		uVar1 = *(uint *)((int)plr + iVar5 + 0x3c);
		uVar8 = (ulonglong)uVar1;
		iVar7 = abs(*(int *)(iVar7 + 0x101ab9d0) - uVar1);
		if ((1 < iVar6) || (1 < iVar7)) {
			*piVar2 = 0;
		}
		if (*piVar2 == 0) {
			uVar4 = ZEXT48(*(undefined **)(iVar3 + -0x7730));
			**(undefined **)(iVar3 + -0x7730) = 0;
			sfx_stop();
			FUN_1005bd38(uVar4, uVar8, uVar9, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8);
		}
	}
	return;
}

void TownBlackSmith(void)

{
	int i;

	i = GetActiveTowner(0);
	TownCtrlMsg(i);
	return;
}

void TownBarOwner(void)

{
	int i;

	i = GetActiveTowner(3);
	TownCtrlMsg(i);
	return;
}

void TownDead(void)

{
	char *_Source;
	int iVar1;
	int i;
	int iVar2;

	iVar1 = 0x100f8fd0;
	i = GetActiveTowner(2);
	TownCtrlMsg(i);
	if (**(char **)(iVar1 + -0x7730) == '\0') {
		if ((quests[6]._qactive == '\x02') && (quests[6]._qlog == 0)) {
			return;
		}
		if (quests[6]._qactive != '\x01') {
			iVar2 = i * 0x10c;
			_Source = *(char **)(iVar1 + -0x5658);
			*(undefined4 *)(iVar2 + 0x101ab9ec) = 1000;
			*(undefined4 *)(iVar2 + 0x101ab9f8) = 1;
			strcpy((char *)(iVar2 + 0x101aba64), _Source);
		}
	}
	if (quests[6]._qactive != '\x01') {
		*(undefined4 *)(i * 0x10c + 0x101ab9f0) = 0;
	}
	return;
}

void TownHealer(void)

{
	int i;

	i = GetActiveTowner(1);
	TownCtrlMsg(i);
	return;
}

void TownStory(void)

{
	int i;

	i = GetActiveTowner(4);
	TownCtrlMsg(i);
	return;
}

void TownDrunk(void)

{
	int i;

	i = GetActiveTowner(5);
	TownCtrlMsg(i);
	return;
}

void TownBoy(void)

{
	int i;

	i = GetActiveTowner(8);
	TownCtrlMsg(i);
	return;
}

void TownWitch(void)

{
	int i;

	i = GetActiveTowner(6);
	TownCtrlMsg(i);
	return;
}

void TownBarMaid(void)

{
	int i;

	i = GetActiveTowner(7);
	TownCtrlMsg(i);
	return;
}

void TownCow(void)

{
	int i;

	i = GetActiveTowner(9);
	TownCtrlMsg(i);
	return;
}

void ProcessTowners(void)

{
	undefined8 uVar1;
	int iVar2;
	undefined *puVar3;

	uVar1 = 0x100f8fd0;
	puVar3 = &DAT_101ab9c4;
	iVar2 = 0;
	do {
		if (*(uint *)(puVar3 + 4) < 10) {
			switch (*(undefined4 *)(*(int *)((int)uVar1 + -0x5660) + *(uint *)(puVar3 + 4) * 4)) {
			case 0x100b4b5c:
				TownBlackSmith();
				break;
			case 0x100b4b64:
				TownHealer();
				break;
			case 0x100b4b6c:
				TownDead();
				break;
			case 0x100b4b74:
				TownBarOwner();
				break;
			case 0x100b4b7c:
				TownStory();
				break;
			case 0x100b4b84:
				TownDrunk();
				break;
			case 0x100b4b8c:
				TownBoy();
				break;
			case 0x100b4b94:
				TownWitch();
				break;
			case 0x100b4b9c:
				TownBarMaid();
				break;
			case 0x100b4ba4:
				TownCow();
			}
		}
		*(int *)(puVar3 + 0x2c) = *(int *)(puVar3 + 0x2c) + 1;
		if (*(int *)(puVar3 + 0x28) <= *(int *)(puVar3 + 0x2c)) {
			*(undefined4 *)(puVar3 + 0x2c) = 0;
			if ((char)puVar3[0x3c] < '\0') {
				*(int *)(puVar3 + 0x34) = *(int *)(puVar3 + 0x34) + 1;
				if (*(int *)(puVar3 + 0x30) < *(int *)(puVar3 + 0x34)) {
					*(undefined4 *)(puVar3 + 0x34) = 1;
				}
			} else {
				*(int *)(puVar3 + 0x38) = *(int *)(puVar3 + 0x38) + 1;
				if ((&DAT_1011fc2c + (int)(char)puVar3[0x3c] * 0x94)[*(int *)(puVar3 + 0x38)] == -1) {
					*(undefined4 *)(puVar3 + 0x38) = 0;
				}
				*(int *)(puVar3 + 0x34) = (int)(char)(&DAT_1011fc2c + (int)(char)puVar3[0x3c] * 0x94)[*(int *)(puVar3 + 0x38)];
			}
		}
		iVar2 = iVar2 + 1;
		puVar3 = puVar3 + 0x10c;
	} while (iVar2 < 0x10);
	return;
}

ItemStruct *PlrHasItem(int pnum, int item, int *i)

{
	int iVar1;
	PlayerStruct *pPVar2;

	pPVar2 = (PlayerStruct *)((int)plr + pnum * 0x55ec);
	*i = 0;
	while (true) {
		iVar1 = *i;
		if (*(int *)((int)plr + pnum * 0x55ec + 0x4828) <= iVar1) {
			return (ItemStruct *)0x0;
		}
		if (item == pPVar2->InvList[iVar1 + 1]._iPLMR)
			break;
		*i = *i + 1;
	}
	return (ItemStruct *)&pPVar2->InvList[iVar1]._iPLHP;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CowSFX(int pnum)

{
	int iVar1;
	int iVar2;
	int iVar3;
	BOOL BVar4;

	iVar3 = 0x100f8fd0;
	if (DAT_100f4534 == '\0') {
		_CowPlaying = -1;
		DAT_100f4534 = '\x01';
	}
	if ((_CowPlaying == -1) || (iVar3 = 0x100f8fd0, BVar4 = effect_is_playing(_CowPlaying), BVar4 == 0)) {
		*(int *)(iVar3 + -0x4a90) = *(int *)(iVar3 + -0x4a90) + 1;
		if (*(uint *)(iVar3 + -0x4a90) < 8) {
			if (*(uint *)(iVar3 + -0x4a90) == 4) {
				*(undefined4 *)(iVar3 + -0x4a98) = 0xed;
			} else {
				*(undefined4 *)(iVar3 + -0x4a98) = 0xec;
			}
		} else {
			iVar1 = pnum * 0x55ec;
			PlaySfxLoc(0xec, *(int *)((int)plr + iVar1 + 0x38), *(int *)((int)plr + iVar1 + 0x3c) + 5);
			*(undefined4 *)(iVar3 + -0x4a90) = 4;
			iVar2 = *(int *)(iVar3 + -0x4a94) + 1;
			*(undefined4 *)(iVar3 + -0x4a98) = *(undefined4 *)(*(int *)(iVar3 + -0x5664) + *(int *)(iVar3 + -0x4a94) * 0xc + (int)*(char *)((int)plr + iVar1 + 0x15c) * 4);
			*(int *)(iVar3 + -0x4a94) = iVar2;
			if (2 < iVar2) {
				*(undefined4 *)(iVar3 + -0x4a94) = 0;
			}
		}
		PlaySfxLoc(*(int *)(iVar3 + -0x4a98), *(int *)((int)plr + pnum * 0x55ec + 0x38),
		    *(int *)((int)plr + pnum * 0x55ec + 0x3c));
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void TownerTalk(int first, int t)

{
	int iStack0000001c;

	_DAT_100f4540 = 0;
	_DAT_100f453c = 0;
	_DAT_101ab9bc = 1;
	iStack0000001c = t;
	InitQTextMsg(first);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void TalkToTowner(int p, int t)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	char *pcVar4;
	int *piVar5;
	int iVar6;
	int iVar7;
	BOOL BVar8;
	ItemStruct *pIVar9;
	int iVar10;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	int iVar11;
	undefined8 unaff_r22;
	int iVar12;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int local_3c;
	undefined4 local_38;
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

	iVar10 = 0x100f8fd0;
	local_38 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
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
	random('\x06', 3);
	random('\x06', 4);
	random('\x06', 5);
	iVar11 = p * 0x55ec;
	iVar12 = t * 0x10c;
	piVar1 = (int *)(iVar12 + 0x101ab9cc);
	iVar6 = abs(*(int *)((int)plr + iVar11 + 0x38) - *piVar1);
	piVar2 = (int *)(iVar12 + 0x101ab9d0);
	iVar7 = abs(*(int *)((int)plr + iVar11 + 0x3c) - *piVar2);
	if (((iVar6 < 2) && (iVar7 < 2)) && (DAT_1014919d == '\0')) {
		piVar5 = *(int **)(iVar10 + -0x7744);
		piVar3 = (int *)(iVar12 + 0x101aba1c);
		*piVar3 = 0;
		if ((*piVar5 < 0xc) || (BVar8 = DropItemBeforeTrig(), BVar8 != 0)) {
			iVar6 = GetActiveTowner(3);
			if (t == iVar6) {
				if ((*(char *)((int)plr + iVar11 + 0x1f0) == '\0') && (*piVar3 == 0)) {
					*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
					*(int *)(iVar12 + 0x101aba54) = p;
					InitQTextMsg(0x102);
					*piVar3 = 1;
				}
				if (((*(char *)((int)plr + iVar11 + 0x1f2) != '\0') || (*(char *)((int)plr + iVar11 + 500) != '\0')) && (quests[12]._qactive != '\0')) {
					if (((quests[12]._qactive != '\0') && (quests[12]._qvar2 == '\0')) && (*piVar3 == 0)) {
						quests[12]._qvar2 = '\x01';
						quests[12]._qlog = 1;
						if (quests[12]._qactive == '\x01') {
							quests[12]._qactive = '\x02';
							quests[12]._qvar1 = '\x01';
						}
						*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
						*(int *)(iVar12 + 0x101aba54) = p;
						InitQTextMsg(1);
						*piVar3 = 1;
						NetSendCmdQuest(1, '\f');
					}
					if (((quests[12]._qactive == '\x03') && (quests[12]._qvar2 == '\x01')) && (*piVar3 == 0)) {
						quests[12]._qvar2 = '\x02';
						quests[12]._qvar1 = '\x02';
						*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
						*(int *)(iVar12 + 0x101aba54) = p;
						InitQTextMsg(3);
						*piVar3 = 1;
						NetSendCmdQuest(1, '\f');
					}
				}
				if (((gbMaxPlayers == '\x01') && (*(char *)((int)plr + iVar11 + 499) != '\0')) && (quests[7]._qactive != '\0')) {
					if ((((byte)(quests[7]._qactive - 1) < 2) && (quests[7]._qvar2 == '\0')) && (*piVar3 == 0)) {
						quests[7]._qvar2 = '\x01';
						if (quests[7]._qactive == '\x01') {
							quests[7]._qvar1 = '\x01';
							quests[7]._qactive = '\x02';
						}
						quests[7]._qlog = 1;
						*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
						*(int *)(iVar12 + 0x101aba54) = p;
						InitQTextMsg(0xc);
						*piVar3 = 1;
					}
					if (((quests[7]._qvar2 == '\x01') && (pIVar9 = PlrHasItem(p, 0xc, &local_3c), pIVar9 != (ItemStruct *)0x0)) && (*piVar3 == 0)) {
						quests[7]._qactive = '\x03';
						quests[7]._qvar1 = '\x03';
						RemoveInvItem(p, local_3c);
						CreateItem(5, *piVar1, *piVar2 + 1);
						*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
						*(int *)(iVar12 + 0x101aba54) = p;
						InitQTextMsg(0xd);
						*piVar3 = 1;
					}
				}
				if ((DAT_1014919d == '\0') && (TownerTalk(0xa0, t), _DAT_101ab9bc != 0)) {
					StartStore('\x15');
				}
			} else {
				iVar6 = GetActiveTowner(2);
				if (t == iVar6) {
					if ((quests[6]._qactive == '\x02') && (quests[6]._qvar1 == '\x01')) {
						*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
						*(int *)(iVar12 + 0x101aba54) = p;
						quests[6]._qvar1 = '\x01';
						pcVar4 = (char *)((int)plr + iVar11 + 0x15c);
						if ((*pcVar4 == '\0') && (BVar8 = effect_is_playing(0x2d1), BVar8 == 0)) {
							PlaySFX(0x2d1);
						} else {
							if ((*pcVar4 == '\x01') && (BVar8 = effect_is_playing(0x26a), BVar8 == 0)) {
								PlaySFX(0x26a);
							} else {
								if ((*pcVar4 == '\x02') && (BVar8 = effect_is_playing(0x203), BVar8 == 0)) {
									PlaySFX(0x203);
								}
							}
						}
						*piVar3 = 1;
					} else {
						if ((quests[6]._qactive == '\x03') && (quests[6]._qvar1 == '\x01')) {
							quests[6]._qvar1 = '\x01';
							*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
							*(int *)(iVar12 + 0x101aba54) = p;
							*piVar3 = 1;
						} else {
							if ((quests[6]._qactive == '\x01') || ((quests[6]._qactive == '\x02' && (quests[6]._qvar1 == '\0')))) {
								quests[6]._qactive = '\x02';
								quests[6]._qlog = 1;
								quests[6]._qmsg = '?';
								quests[6]._qvar1 = '\x01';
								*(undefined4 *)(iVar12 + 0x101aba14) = 0x32;
								*(int *)(iVar12 + 0x101aba54) = p;
								*(undefined4 *)(iVar12 + 0x101aba58) = 3;
								InitQTextMsg(0x3f);
								*piVar3 = 1;
								NetSendCmdQuest(1, '\x06');
							}
						}
					}
				} else {
					iVar6 = GetActiveTowner(0);
					if (t == iVar6) {
						if (gbMaxPlayers == '\x01') {
							if ((*(char *)((int)plr + iVar11 + 500) != '\0') && (quests[0]._qactive != '\0')) {
								if ((quests[0]._qactive != '\0') && (quests[0]._qvar2 == '\0')) {
									quests[0]._qvar2 = '\x01';
									quests[0]._qlog = 1;
									if (quests[0]._qactive == '\x01') {
										quests[0]._qactive = '\x02';
										quests[0]._qvar1 = '\x01';
									}
									*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
									*(int *)(iVar12 + 0x101aba54) = p;
									InitQTextMsg(0x73);
									*piVar3 = 1;
								}
								if (((quests[0]._qvar2 == '\x01') && (pIVar9 = PlrHasItem(p, 9, &local_3c), pIVar9 != (ItemStruct *)0x0)) && (*piVar3 == 0)) {
									quests[0]._qactive = '\x03';
									quests[0]._qvar2 = '\x02';
									quests[0]._qvar1 = '\x02';
									RemoveInvItem(p, local_3c);
									CreateItem(2, *piVar1, *piVar2 + 1);
									*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
									*(int *)(iVar12 + 0x101aba54) = p;
									InitQTextMsg(0x75);
									*piVar3 = 1;
								}
							}
							if ((*(char *)((int)plr + iVar11 + 0x1f9) != '\0') && (quests[10]._qactive != '\0')) {
								if ((((byte)(quests[10]._qactive - 1) < 2) && ((quests[10]._qvar2 == '\0' && (*piVar3 == 0)))) && ((quests[0]._qvar2 == '\x02' || ((quests[0]._qactive == '\x02' && (quests[0]._qvar2 == '\x01')))))) {
									quests[10]._qvar2 = '\x01';
									quests[10]._qlog = 1;
									if (quests[10]._qactive == '\x01') {
										quests[10]._qactive = '\x02';
										quests[10]._qvar1 = '\x01';
									}
									*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
									*(int *)(iVar12 + 0x101aba54) = p;
									InitQTextMsg(0x58);
									*piVar3 = 1;
								}
								if (((quests[10]._qvar2 == '\x01') && (pIVar9 = PlrHasItem(p, 0x10, &local_3c), pIVar9 != (ItemStruct *)0x0)) && (*piVar3 == 0)) {
									quests[10]._qactive = '\x03';
									quests[10]._qvar2 = '\x02';
									quests[10]._qvar1 = '\x02';
									RemoveInvItem(p, local_3c);
									CreateItem(8, *piVar1, *piVar2 + 1);
									*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
									*(int *)(iVar12 + 0x101aba54) = p;
									InitQTextMsg(0x5a);
									*piVar3 = 1;
								}
							}
						}
						if ((DAT_1014919d == '\0') && (TownerTalk(0xbc, t), _DAT_101ab9bc != 0)) {
							StartStore('\x01');
						}
					} else {
						iVar6 = GetActiveTowner(6);
						if (t == iVar6) {
							if ((quests[1]._qactive == '\x01') && (pIVar9 = PlrHasItem(p, 0x13, &local_3c), pIVar9 != (ItemStruct *)0x0)) {
								RemoveInvItem(p, local_3c);
								quests[1]._qactive = '\x02';
								quests[1]._qlog = 1;
								quests[1]._qvar1 = '\x02';
								*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
								*(int *)(iVar12 + 0x101aba54) = p;
								InitQTextMsg(0x80);
								*piVar3 = 1;
							} else {
								if (quests[1]._qactive == '\x02') {
									if ((quests[1]._qvar1 < 2) || (4 < quests[1]._qvar1)) {
										pIVar9 = PlrHasItem(p, 0x14, &local_3c);
										if (pIVar9 == (ItemStruct *)0x0) {
											pIVar9 = PlrHasItem(p, 0x12, &local_3c);
											if ((pIVar9 != (ItemStruct *)0x0) && (quests[1]._qvar2 != -0x7d)) {
												*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
												*(int *)(iVar12 + 0x101aba54) = p;
												quests[1]._qvar2 = -0x7d;
												InitQTextMsg(0x83);
												*piVar3 = 1;
											}
										} else {
											*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
											*(int *)(iVar12 + 0x101aba54) = p;
											InitQTextMsg(0x84);
											quests[1]._qactive = '\x03';
											*piVar3 = 1;
											*(undefined4 *)(iVar10 + pIVar9->IDidx * 0x4c + 0x3898) = 1;
										}
									} else {
										pIVar9 = PlrHasItem(p, 0x11, &local_3c);
										if (pIVar9 == (ItemStruct *)0x0) {
											if (quests[1]._qmsg != -0x7f) {
												*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
												*(int *)(iVar12 + 0x101aba54) = p;
												quests[1]._qmsg = -0x7f;
												InitQTextMsg(0x81);
												*piVar3 = 1;
											}
										} else {
											RemoveInvItem(p, local_3c);
											quests[1]._qvar1 = '\x05';
											uRam1012004c = 0x7b;
											uRam1012018c = 0xffffffff;
											*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
											*(int *)(iVar12 + 0x101aba54) = p;
											quests[1]._qmsg = -0x7e;
											InitQTextMsg(0x82);
											*piVar3 = 1;
										}
									}
								}
							}
							if ((DAT_1014919d == '\0') && (TownerTalk(0xd4, t), _DAT_101ab9bc != 0)) {
								StartStore('\x05');
							}
						} else {
							iVar10 = GetActiveTowner(7);
							if (t == iVar10) {
								if ((DAT_1014919d == '\0') && (TownerTalk(0xb3, t), _DAT_101ab9bc != 0)) {
									StartStore('\x17');
								}
							} else {
								iVar10 = GetActiveTowner(5);
								if (t == iVar10) {
									if ((DAT_1014919d == '\0') && (TownerTalk(200, t), _DAT_101ab9bc != 0)) {
										StartStore('\x16');
									}
								} else {
									iVar10 = GetActiveTowner(1);
									if (t == iVar10) {
										if (gbMaxPlayers == '\x01') {
											if ((*(char *)((int)plr + iVar11 + 0x1f1) != '\0') && (*piVar3 == 0)) {
												if (quests[13]._qactive == '\x01') {
													quests[13]._qactive = '\x02';
													quests[13]._qlog = 1;
													quests[13]._qmsg = '\'';
													quests[13]._qvar1 = '\x01';
													*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
													*(int *)(iVar12 + 0x101aba54) = p;
													InitQTextMsg(0x27);
													*piVar3 = 1;
												} else {
													if ((quests[13]._qactive == '\x03') && (quests[13]._qvar1 != '\x02')) {
														quests[13]._qvar1 = '\x02';
														*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
														*(int *)(iVar12 + 0x101aba54) = p;
														InitQTextMsg(0x29);
														CreateItem(4, *piVar1, *piVar2 + 1);
														*piVar3 = 1;
													}
												}
											}
											if (((quests[1]._qactive == '\x02') && (quests[1]._qmsg == -0x7e)) && (pIVar9 = PlrHasItem(p, 0x12, &local_3c), pIVar9 != (ItemStruct *)0x0)) {
												RemoveInvItem(p, local_3c);
												SpawnQuestItem(0x14, *piVar1, *piVar2 + 1, 0, 0);
												InitQTextMsg(0x7c);
												quests[1]._qvar1 = '\a';
												uRam1012004c = 0xffffffff;
											}
										}
										if ((DAT_1014919d == '\0') && (TownerTalk(0xa9, t), _DAT_101ab9bc != 0)) {
											StartStore('\x0e');
										}
									} else {
										iVar10 = GetActiveTowner(8);
										if (t == iVar10) {
											if ((DAT_1014919d == '\0') && (TownerTalk(0xe0, t), _DAT_101ab9bc != 0)) {
												StartStore('\f');
											}
										} else {
											iVar10 = GetActiveTowner(4);
											if (t == iVar10) {
												if (gbMaxPlayers == '\x01') {
													if ((quests[15]._qactive == '\x01') && (pIVar9 = PlrHasItem(p, 0x21, &local_3c), pIVar9 != (ItemStruct *)0x0)) {
														RemoveInvItem(p, local_3c);
														quests[15]._qvar1 = '\x02';
														*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
														*(int *)(iVar12 + 0x101aba54) = p;
														InitQTextMsg(0x17);
														*piVar3 = 1;
														quests[15]._qactive = '\x02';
														quests[15]._qlog = 1;
													} else {
														if ((quests[15]._qactive == '\x03') && (quests[15]._qvar1 == '\a')) {
															quests[15]._qvar1 = '\b';
															*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
															*(int *)(iVar12 + 0x101aba54) = p;
															InitQTextMsg(0x19);
															*piVar3 = 1;
															quests[5]._qlog = 1;
														}
													}
												}
												if (gbMaxPlayers != '\x01') {
													if ((quests[15]._qactive == '\x02') && (quests[15]._qlog == 0)) {
														*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
														*(int *)(iVar12 + 0x101aba54) = p;
														InitQTextMsg(0x17);
														*piVar3 = 1;
														quests[15]._qlog = 1;
														NetSendCmdQuest(1, '\x0f');
													} else {
														if ((quests[15]._qactive == '\x03') && (quests[15]._qvar1 == '\a')) {
															quests[15]._qvar1 = '\b';
															*(undefined4 *)(iVar12 + 0x101aba14) = 0x96;
															*(int *)(iVar12 + 0x101aba54) = p;
															InitQTextMsg(0x19);
															*piVar3 = 1;
															NetSendCmdQuest(1, '\x0f');
															quests[5]._qlog = 1;
															NetSendCmdQuest(1, '\x05');
														}
													}
												}
												if ((DAT_1014919d == '\0') && (TownerTalk(0x96, t), _DAT_101ab9bc != 0)) {
													StartStore('\x0f');
												}
											} else {
												if ((*(int *)(iVar12 + 0x101ab9c8) == 9) && (DAT_1014919d == '\0')) {
													CowSFX(p);
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
	}
	return;
}