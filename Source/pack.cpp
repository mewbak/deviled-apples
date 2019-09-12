
void PackItem(PkItemStruct *id, ItemStruct *is)

{
	if (is->_itype == -1) {
		id->idx = 0xffff;
		return;
	}
	id->idx = (WORD)is->IDidx;
	if (is->IDidx == 0x17) {
		id->iCreateInfo = (ushort)((int)is->_iName[7] << 8) | (short)is->_iName[8];
		id->iSeed = (int)is->_iName[0xc] | (int)is->_iName[0xb] << 8 | (int)is->_iName[9] << 0x18 | (int)is->_iName[10] << 0x10;
		id->bId = is->_iName[0xd];
		id->bDur = is->_iName[0xe];
		id->bMDur = is->_iName[0xf];
		id->bCh = is->_iName[0x10];
		id->bMCh = is->_iName[0x11];
		id->wValue = (ushort)is->_ivalue | (ushort)((int)is->_iName[0x12] << 8) | ((short)is->_iCurs + -0x13) * 0x40;
		id->dwBuff = (int)is->_iName[0x16] | (int)is->_iName[0x15] << 8 | (int)is->_iName[0x13] << 0x18 | (int)is->_iName[0x14] << 0x10;
		return;
	}
	id->iSeed = is->_iSeed;
	id->iCreateInfo = is->_iCreateInfo;
	id->bId = (char)is->_iIdentified + (char)((int)is->_iMagical << 1);
	id->bDur = (BYTE)is->_iDurability;
	id->bMDur = (BYTE)is->_iMaxDur;
	id->bCh = (BYTE)is->_iCharges;
	id->bMCh = (BYTE)is->_iMaxCharges;
	if (is->IDidx != 0) {
		return;
	}
	id->wValue = (WORD)is->_ivalue;
	return;
}

void PackPlayer(PkPlayerStruct *pPack, int pnum, BOOL manashield)

{
	bool bVar1;
	undefined4 uVar2;
	longlong lVar3;
	ulonglong uVar4;
	char *pcVar5;
	char *pcVar6;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	ItemStruct *is;
	PkItemStruct *id;
	int iVar7;
	PlayerStruct *local_r31_52;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	uint local_4c;

	ZeroMemory((char)pPack, 0xf2, (char)manashield, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab,
	    in_stack_ffffffaf, local_4c);
	uVar4 = (ulonglong)local_4c;
	local_r31_52 = (PlayerStruct *)(*(int *)(local_4c - 0x77a8) + pnum * 0x55ec);
	pPack->px = (BYTE)local_r31_52->destAction;
	pPack->py = (BYTE)local_r31_52->destParam1;
	pPack->targx = (BYTE)local_r31_52->destParam2;
	pPack->targy = (BYTE)local_r31_52->plrlevel;
	pPack->pName[0] = (char)local_r31_52->WorldX;
	pPack->pName[1] = (char)local_r31_52->WorldY;
	pPack->pName[2] = (char)local_r31_52->_ptargx;
	pPack->pName[3] = (char)local_r31_52->_ptargy;
	strcpy(pPack->pName + 4, local_r31_52->_pName);
	pPack->pBaseVit = local_r31_52->_pClass;
	pPack->pLevel = (char)local_r31_52->_pBaseStr;
	pPack->pStatPts = (BYTE)local_r31_52->_pBaseMag;
	*(char *)&pPack->pExperience = (char)local_r31_52->_pBaseDex;
	*(undefined *)((int)&pPack->pExperience + 1) = (char)local_r31_52->_pBaseVit;
	*(char *)((int)&pPack->pExperience + 2) = local_r31_52->_pLevel;
	*(undefined *)((int)&pPack->pExperience + 3) = (char)local_r31_52->_pStatPts;
	pPack->pGold = local_r31_52->_pExperience;
	pPack->pHPBase = local_r31_52->_pGold;
	pPack->pMaxHPBase = local_r31_52->_pHPBase;
	pPack->pManaBase = local_r31_52->_pMaxHPBase;
	pPack->pMaxManaBase = local_r31_52->_pManaBase;
	*(int *)pPack->pSplLvl = local_r31_52->_pMaxManaBase;
	uVar2 = *(undefined4 *)&local_r31_52->_pMemSpells;
	pPack->InvBody[0].iSeed = *(DWORD *)((int)&local_r31_52->_pMemSpells + 4);
	*(undefined4 *)((int)&pPack->pMemSpells + 4) = uVar2;
	lVar3 = 5;
	pPack->pSplLvl[4] = local_r31_52->_pSplLvl[0];
	pPack->pSplLvl[5] = local_r31_52->_pSplLvl[1];
	pPack->pSplLvl[6] = local_r31_52->_pSplLvl[2];
	pPack->pSplLvl[7] = local_r31_52->_pSplLvl[3];
	pPack->pSplLvl[8] = local_r31_52->_pSplLvl[4];
	pPack->pSplLvl[9] = local_r31_52->_pSplLvl[5];
	pPack->pSplLvl[10] = local_r31_52->_pSplLvl[6];
	pPack->pSplLvl[0xb] = local_r31_52->_pSplLvl[7];
	pPack->pSplLvl[0xc] = local_r31_52->_pSplLvl[8];
	pPack->pSplLvl[0xd] = local_r31_52->_pSplLvl[9];
	pPack->pSplLvl[0xe] = local_r31_52->_pSplLvl[10];
	pPack->pSplLvl[0xf] = local_r31_52->_pSplLvl[0xb];
	pPack->pSplLvl[0x10] = local_r31_52->_pSplLvl[0xc];
	pPack->pSplLvl[0x11] = local_r31_52->_pSplLvl[0xd];
	pPack->pSplLvl[0x12] = local_r31_52->_pSplLvl[0xe];
	pPack->pSplLvl[0x13] = local_r31_52->_pSplLvl[0xf];
	pPack->pSplLvl[0x14] = local_r31_52->_pSplLvl[0x10];
	pPack->pSplLvl[0x15] = local_r31_52->_pSplLvl[0x11];
	pPack->pSplLvl[0x16] = local_r31_52->_pSplLvl[0x12];
	pPack->pSplLvl[0x17] = local_r31_52->_pSplLvl[0x13];
	pPack->pSplLvl[0x18] = local_r31_52->_pSplLvl[0x14];
	pPack->pSplLvl[0x19] = local_r31_52->_pSplLvl[0x15];
	pPack->pSplLvl[0x1a] = local_r31_52->_pSplLvl[0x16];
	pPack->pSplLvl[0x1b] = local_r31_52->_pSplLvl[0x17];
	pPack->pSplLvl[0x1c] = local_r31_52->_pSplLvl[0x18];
	pPack->pSplLvl[0x1d] = local_r31_52->_pSplLvl[0x19];
	pPack->pSplLvl[0x1e] = local_r31_52->_pSplLvl[0x1a];
	pPack->pSplLvl[0x1f] = local_r31_52->_pSplLvl[0x1b];
	pPack->pSplLvl[0x20] = local_r31_52->_pSplLvl[0x1c];
	pPack->pSplLvl[0x21] = local_r31_52->_pSplLvl[0x1d];
	pPack->pSplLvl[0x22] = local_r31_52->_pSplLvl[0x1e];
	pPack->pSplLvl[0x23] = local_r31_52->_pSplLvl[0x1f];
	iVar7 = 0x20;
	do {
		pPack->pSplLvl[iVar7 + 4] = local_r31_52->_pSplLvl[iVar7];
		lVar3 = lVar3 + -1;
		iVar7 = iVar7 + 1;
	} while (lVar3 != 0);
	id = (PkItemStruct *)&pPack->InvBody[0].iCreateInfo;
	is = (ItemStruct *)&local_r31_52->InvBody[0]._iPLHP;
	iVar7 = 6;
	do {
		PackItem(id, is);
		bVar1 = iVar7 != 0;
		id = id + 1;
		is = is + 1;
		iVar7 = iVar7 + -1;
	} while (bVar1);
	id = (PkItemStruct *)&pPack->InvList[0].iCreateInfo;
	is = (ItemStruct *)&local_r31_52->InvList[0]._iPLHP;
	iVar7 = 0x27;
	do {
		PackItem(id, is);
		bVar1 = iVar7 != 0;
		id = id + 1;
		is = is + 1;
		iVar7 = iVar7 + -1;
	} while (bVar1);
	lVar3 = 5;
	iVar7 = 0;
	do {
		pcVar5 = (char *)((int)&local_r31_52->SpdList[0]._iPLToHit + iVar7);
		pcVar6 = pPack->InvGrid + iVar7 + 4;
		iVar7 = iVar7 + 8;
		*pcVar6 = *pcVar5;
		pcVar6[1] = pcVar5[1];
		pcVar6[2] = pcVar5[2];
		pcVar6[3] = pcVar5[3];
		pcVar6[4] = pcVar5[4];
		pcVar6[5] = pcVar5[5];
		pcVar6[6] = pcVar5[6];
		pcVar6[7] = pcVar5[7];
		lVar3 = lVar3 + -1;
	} while (lVar3 != 0);
	id = (PkItemStruct *)&pPack->SpdList[0].iCreateInfo;
	is = (ItemStruct *)&local_r31_52->SpdList[0]._iPLHP;
	*(undefined *)((int)&pPack->SpdList[0].iSeed + 3) = (char)local_r31_52->SpdList[0]._iPLDam;
	iVar7 = 7;
	do {
		PackItem(id, is);
		bVar1 = iVar7 != 0;
		id = id + 1;
		is = is + 1;
		iVar7 = iVar7 + -1;
	} while (bVar1);
	pcVar5 = *(char **)((int)uVar4 + -0x77f0);
	pPack->dwReserved[0] = *(int *)(local_r31_52[1]._pSplLvl + 0x17);
	if ((*pcVar5 == '\x01') || (manashield != 0)) {
		*(char *)pPack->wReserved = local_r31_52[1]._pSplLvl[3];
	} else {
		*(undefined *)pPack->wReserved = 0;
	}
	return;
}

void UnPackItem(PkItemStruct *is, ItemStruct *id)

{
	ushort uVar1;
	int iVar2;
	int *piVar3;
	int *piVar4;
	longlong lVar5;
	int ivalue;
	int ibuff;

	uVar1 = is->idx;
	if (uVar1 == 0xffff) {
		id->_itype = -1;
	} else {
		if (uVar1 == 0x17) {
			RecreateEar(0x7f, is->iCreateInfo, is->iSeed, (uint)is->bId, (uint)is->bDur, (uint)is->bMDur, (uint)is->bCh,
			    (uint)is->bMCh, ivalue, ibuff);
		} else {
			RecreateItem(0x7f, (uint)uVar1, is->iCreateInfo, is->iSeed, (uint)is->wValue);
			uRam10149054 = (undefined)((int)(uint)is->bId >> 1);
			uRam10149050 = (uint)is->bId & 1;
			uRam10149104 = (uint)is->bDur;
			uRam10149108 = (uint)is->bMDur;
			uRam101490fc = (uint)is->bCh;
			uRam10149100 = (uint)is->bMCh;
		}
		lVar5 = 0x2e;
		piVar3 = (int *)0x10149010;
		piVar4 = &id->_iPLMR;
		do {
			iVar2 = piVar3[3];
			piVar4[2] = piVar3[2];
			piVar4[3] = iVar2;
			lVar5 = lVar5 + -1;
			piVar3 = piVar3 + 2;
			piVar4 = piVar4 + 2;
		} while (lVar5 != 0);
	}
	return;
}

void VerifyGoldSeeds(PlayerStruct *pPlayer)

{
	int iVar1;
	int iVar2;
	PlayerStruct *pPVar3;

	iVar2 = 0;
	pPVar3 = pPlayer;
	while (iVar2 < pPlayer->SpdList[0]._iPLDam) {
		if (pPVar3->InvList[1]._iPLMR == 0) {
			iVar1 = 0;
			while (iVar1 < pPlayer->SpdList[0]._iPLDam) {
				if (((iVar2 != iVar1) && ((&pPlayer->_pmode + iVar1 * 0x5c)[0x404] == 0)) && (pPVar3->InvList[0]._iPLHP == (&pPlayer->_pmode + iVar1 * 0x5c)[0x3aa])) {
					iVar1 = GetRndSeed();
					pPVar3->InvList[0]._iPLHP = iVar1;
					iVar1 = -1;
				}
				iVar1 = iVar1 + 1;
			}
		}
		pPVar3 = (PlayerStruct *)&pPVar3->_pDexterity;
		iVar2 = iVar2 + 1;
	}
	return;
}

void UnPackPlayer(PkPlayerStruct *pPack, int pnum, BOOL killok)

{
	bool bVar1;
	undefined4 uVar2;
	int iVar4;
	longlong lVar3;
	undefined8 uVar5;
	char *pcVar6;
	char *pcVar7;
	ItemStruct *id;
	PkItemStruct *is;
	int iVar8;
	PlayerStruct *p;

	uVar5 = 0x100f8fd0;
	iVar4 = pnum * 0x55ec;
	p = (PlayerStruct *)((int)plr + iVar4);
	ClearPlrRVars(p);
	*(uint *)((int)plr + iVar4 + 0x38) = (uint)(byte)pPack->pName[0];
	*(uint *)((int)plr + iVar4 + 0x3c) = (uint)(byte)pPack->pName[1];
	*(uint *)((int)plr + iVar4 + 0x40) = (uint)(byte)pPack->pName[0];
	*(uint *)((int)plr + iVar4 + 0x44) = (uint)(byte)pPack->pName[1];
	*(uint *)((int)plr + iVar4 + 0x48) = (uint)(byte)pPack->pName[2];
	*(uint *)((int)plr + iVar4 + 0x4c) = (uint)(byte)pPack->pName[3];
	*(uint *)((int)plr + iVar4 + 0x34) = (uint)pPack->targy;
	ClrPlrPath(pnum);
	*(undefined4 *)((int)plr + iVar4 + 0x20) = 0xffffffff;
	strcpy((char *)((int)plr + iVar4 + 0x13c), pPack->pName + 4);
	*(BYTE *)((int)plr + iVar4 + 0x15c) = pPack->pBaseVit;
	InitPlayer(pnum, 1);
	*(uint *)((int)plr + iVar4 + 0x164) = (uint)(byte)pPack->pLevel;
	*(uint *)((int)plr + iVar4 + 0x160) = (uint)(byte)pPack->pLevel;
	*(uint *)((int)plr + iVar4 + 0x16c) = (uint)pPack->pStatPts;
	*(uint *)((int)plr + iVar4 + 0x168) = (uint)pPack->pStatPts;
	*(uint *)((int)plr + iVar4 + 0x174) = (uint) * (byte *)&pPack->pExperience;
	*(uint *)((int)plr + iVar4 + 0x170) = (uint) * (byte *)&pPack->pExperience;
	*(uint *)((int)plr + iVar4 + 0x17c) = (uint) * (byte *)((int)&pPack->pExperience + 1);
	*(uint *)((int)plr + iVar4 + 0x178) = (uint) * (byte *)((int)&pPack->pExperience + 1);
	*(undefined *)((int)plr + iVar4 + 0x1b4) = *(undefined *)((int)&pPack->pExperience + 2);
	*(uint *)((int)plr + iVar4 + 0x180) = (uint) * (byte *)((int)&pPack->pExperience + 3);
	*(int *)((int)plr + iVar4 + 0x1b8) = pPack->pGold;
	*(int *)((int)plr + iVar4 + 0x1c8) = pPack->pHPBase;
	*(int *)((int)plr + iVar4 + 400) = pPack->pManaBase;
	*(int *)((int)plr + iVar4 + 0x18c) = pPack->pMaxHPBase;
	if ((killok == 0) && (*(int *)((int)plr + iVar4 + 0x18c) >> 6 < 1)) {
		*(undefined4 *)((int)plr + iVar4 + 0x18c) = 0x40;
	}
	lVar3 = 5;
	*(undefined4 *)((int)plr + iVar4 + 0x1a4) = *(undefined4 *)pPack->pSplLvl;
	*(int *)((int)plr + iVar4 + 0x1a0) = pPack->pMaxManaBase;
	uVar2 = *(undefined4 *)((int)&pPack->pMemSpells + 4);
	*(DWORD *)((int)plr + iVar4 + 0x108) = pPack->InvBody[0].iSeed;
	*(undefined4 *)((int)plr + iVar4 + 0x104) = uVar2;
	*(char *)((int)plr + iVar4 + 0xc1) = pPack->pSplLvl[4];
	*(char *)((int)plr + iVar4 + 0xc2) = pPack->pSplLvl[5];
	*(char *)((int)plr + iVar4 + 0xc3) = pPack->pSplLvl[6];
	*(char *)((int)plr + iVar4 + 0xc4) = pPack->pSplLvl[7];
	*(char *)((int)plr + iVar4 + 0xc5) = pPack->pSplLvl[8];
	*(char *)((int)plr + iVar4 + 0xc6) = pPack->pSplLvl[9];
	*(char *)((int)plr + iVar4 + 199) = pPack->pSplLvl[10];
	*(char *)((int)plr + iVar4 + 200) = pPack->pSplLvl[0xb];
	*(char *)((int)plr + iVar4 + 0xc9) = pPack->pSplLvl[0xc];
	*(char *)((int)plr + iVar4 + 0xca) = pPack->pSplLvl[0xd];
	*(char *)((int)plr + iVar4 + 0xcb) = pPack->pSplLvl[0xe];
	*(char *)((int)plr + iVar4 + 0xcc) = pPack->pSplLvl[0xf];
	*(char *)((int)plr + iVar4 + 0xcd) = pPack->pSplLvl[0x10];
	*(char *)((int)plr + iVar4 + 0xce) = pPack->pSplLvl[0x11];
	*(char *)((int)plr + iVar4 + 0xcf) = pPack->pSplLvl[0x12];
	*(char *)((int)plr + iVar4 + 0xd0) = pPack->pSplLvl[0x13];
	*(char *)((int)plr + iVar4 + 0xd1) = pPack->pSplLvl[0x14];
	*(char *)((int)plr + iVar4 + 0xd2) = pPack->pSplLvl[0x15];
	*(char *)((int)plr + iVar4 + 0xd3) = pPack->pSplLvl[0x16];
	*(char *)((int)plr + iVar4 + 0xd4) = pPack->pSplLvl[0x17];
	*(char *)((int)plr + iVar4 + 0xd5) = pPack->pSplLvl[0x18];
	*(char *)((int)plr + iVar4 + 0xd6) = pPack->pSplLvl[0x19];
	*(char *)((int)plr + iVar4 + 0xd7) = pPack->pSplLvl[0x1a];
	*(char *)((int)plr + iVar4 + 0xd8) = pPack->pSplLvl[0x1b];
	*(char *)((int)plr + iVar4 + 0xd9) = pPack->pSplLvl[0x1c];
	*(char *)((int)plr + iVar4 + 0xda) = pPack->pSplLvl[0x1d];
	*(char *)((int)plr + iVar4 + 0xdb) = pPack->pSplLvl[0x1e];
	*(char *)((int)plr + iVar4 + 0xdc) = pPack->pSplLvl[0x1f];
	*(char *)((int)plr + iVar4 + 0xdd) = pPack->pSplLvl[0x20];
	*(char *)((int)plr + iVar4 + 0xde) = pPack->pSplLvl[0x21];
	*(char *)((int)plr + iVar4 + 0xdf) = pPack->pSplLvl[0x22];
	*(char *)((int)plr + iVar4 + 0xe0) = pPack->pSplLvl[0x23];
	iVar8 = 0x20;
	do {
		p->_pSplLvl[iVar8] = pPack->pSplLvl[iVar8 + 4];
		lVar3 = lVar3 + -1;
		iVar8 = iVar8 + 1;
	} while (lVar3 != 0);
	is = (PkItemStruct *)&pPack->InvBody[0].iCreateInfo;
	id = (ItemStruct *)((int)plr + iVar4 + 0x498);
	iVar8 = 6;
	do {
		UnPackItem(is, id);
		bVar1 = iVar8 != 0;
		is = is + 1;
		id = id + 1;
		iVar8 = iVar8 + -1;
	} while (bVar1);
	is = (PkItemStruct *)&pPack->InvList[0].iCreateInfo;
	id = (ItemStruct *)((int)plr + iVar4 + 0xea8);
	iVar8 = 0x27;
	do {
		UnPackItem(is, id);
		bVar1 = iVar8 != 0;
		is = is + 1;
		id = id + 1;
		iVar8 = iVar8 + -1;
	} while (bVar1);
	lVar3 = 5;
	iVar8 = 0;
	do {
		pcVar6 = pPack->InvGrid + iVar8 + 4;
		pcVar7 = (char *)((int)&p->SpdList[0]._iPLToHit + iVar8);
		iVar8 = iVar8 + 8;
		*pcVar7 = *pcVar6;
		pcVar7[1] = pcVar6[1];
		pcVar7[2] = pcVar6[2];
		pcVar7[3] = pcVar6[3];
		pcVar7[4] = pcVar6[4];
		pcVar7[5] = pcVar6[5];
		pcVar7[6] = pcVar6[6];
		pcVar7[7] = pcVar6[7];
		lVar3 = lVar3 + -1;
	} while (lVar3 != 0);
	*(uint *)((int)plr + iVar4 + 0x4828) = (uint) * (byte *)((int)&pPack->SpdList[0].iSeed + 3);
	VerifyGoldSeeds(p);
	is = (PkItemStruct *)&pPack->SpdList[0].iCreateInfo;
	id = (ItemStruct *)((int)plr + iVar4 + 0x4854);
	iVar8 = 7;
	do {
		UnPackItem(is, id);
		bVar1 = iVar8 != 0;
		is = is + 1;
		id = id + 1;
		iVar8 = iVar8 + -1;
	} while (bVar1);
	if (pnum == **(int **)((int)uVar5 + -0x77ac)) {
		uRam101a63c0 = 0xffffffff;
		uRam101a6530 = 0xffffffff;
		uRam101a66a0 = 0xffffffff;
		uRam101a6810 = 0xffffffff;
		uRam101a6980 = 0xffffffff;
		uRam101a6af0 = 0xffffffff;
		uRam101a6c60 = 0xffffffff;
		uRam101a6dd0 = 0xffffffff;
		uRam101a6f40 = 0xffffffff;
		uRam101a70b0 = 0xffffffff;
		uRam101a7220 = 0xffffffff;
		uRam101a7390 = 0xffffffff;
		uRam101a7500 = 0xffffffff;
		uRam101a7670 = 0xffffffff;
		uRam101a77e0 = 0xffffffff;
		uRam101a7950 = 0xffffffff;
		iVar8 = 0x101a7ab8;
		lVar3 = 4;
		do {
			*(undefined4 *)(iVar8 + 8) = 0xffffffff;
			iVar8 = iVar8 + 0x170;
			lVar3 = lVar3 + -1;
		} while (lVar3 != 0);
	}
	CalcPlrInv(pnum, 0);
	*(undefined *)((int)plr + iVar4 + 0x5590) = 0;
	*(undefined *)((int)plr + iVar4 + 0x5591) = 0;
	*(undefined *)((int)plr + iVar4 + 0x5592) = 0;
	*(int *)((int)plr + iVar4 + 0x55a8) = pPack->dwReserved[0];
	*(char *)((int)plr + iVar4 + 0x5593) = pPack->bReserved[2];
	*(undefined *)((int)plr + iVar4 + 0x5594) = *(undefined *)pPack->wReserved;
	return;
}