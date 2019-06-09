
ulonglong BLoad(void)

{
	byte bVar1;

	bVar1 = *_DAT_100f41d8;
	_DAT_100f41d8 = _DAT_100f41d8 + 1;
	return (ulonglong)bVar1;
}

ulonglong WLoad(void)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;

	pbVar2 = _DAT_100f41d8 + 1;
	bVar1 = *_DAT_100f41d8;
	pbVar3 = _DAT_100f41d8 + 2;
	pbVar4 = _DAT_100f41d8 + 3;
	_DAT_100f41d8 = _DAT_100f41d8 + 4;
	return (ulonglong)bVar1 << 0x18 | (ulonglong)*pbVar2 << 0x10 | (ulonglong)*pbVar3 << 8 | (ulonglong)*pbVar4;
}

ulonglong ILoad(void)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;

	pbVar2 = _DAT_100f41d8 + 1;
	bVar1 = *_DAT_100f41d8;
	pbVar3 = _DAT_100f41d8 + 2;
	pbVar4 = _DAT_100f41d8 + 3;
	_DAT_100f41d8 = _DAT_100f41d8 + 4;
	return (ulonglong)bVar1 << 0x18 | (ulonglong)*pbVar2 << 0x10 | (ulonglong)*pbVar3 << 8 | (ulonglong)*pbVar4;
}

undefined8 OLoad(void)

{
	if (*_DAT_100f41d8 == '\x01') {
		_DAT_100f41d8 = _DAT_100f41d8 + 1;
		return 1;
	}
	_DAT_100f41d8 = _DAT_100f41d8 + 1;
	return 0;
}

void LoadPlayer(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;
	byte *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy((uint *)(PTR_DAT_100f1828 + param_1 * 0x55ec), local_8, 0xb0, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffc8);
	ppuVar1[-0x137e] = local_8[0];
	return;
}

void LoadMonster(ulonglong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	longlong lVar3;
	undefined8 uVar4;
	undefined4 in_stack_ffffffb8;

	puVar1 = _DAT_100f41d8;
	ppuVar2 = &toc;
	uVar4 = 0xd8;
	lVar3 = ZEXT48(register0x0000000c) - 0x18;
	memcpy((uint *)(PTR_DAT_100f187c + (int)param_1 * 0xe8), (byte **)lVar3);
	ppuVar2[-0x137e] = puVar1;
	SyncMonsterAnim(param_1, lVar3, uVar4, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void LoadMissile(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	byte *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy((uint *)(PTR_DAT_100f196c + param_1 * 0xb4), local_8);
	ppuVar1[-0x137e] = local_8[0];
	return;
}

void LoadObject(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	byte *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy((uint *)(PTR_DAT_100f1948 + param_1 * 0x78), local_8);
	ppuVar1[-0x137e] = local_8[0];
	return;
}

void LoadItem(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	byte *local_18[6];

	ppuVar1 = &toc;
	local_18[0] = _DAT_100f41d8;
	memcpy((uint *)(PTR_DAT_100f1940 + param_1 * 0x170), local_18, 0x170, 1);
	ppuVar1[-0x137e] = local_18[0];
	GetItemFrm(param_1);
	return;
}

void LoadPremium(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	byte *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy((uint *)(_DAT_100f1e28 + param_1 * 0x170), local_8, 0x170, 1);
	ppuVar1[-0x137e] = local_8[0];
	return;
}

void LoadQuest(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	byte *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy(PTR_DAT_100f19cc + param_1 * 0x18, local_8);
	ppuVar1[-0x137e] = local_8[0];
	uVar2 = WLoad();
	*(int *)ppuVar1[-0x1c4c] = (int)uVar2;
	uVar2 = WLoad();
	*(int *)ppuVar1[-0x1c4d] = (int)uVar2;
	uVar2 = WLoad();
	*(int *)ppuVar1[-0x1c4e] = (int)uVar2;
	uVar2 = WLoad();
	*(int *)ppuVar1[-0x1c4f] = (int)uVar2;
	uVar2 = WLoad();
	*(int *)ppuVar1[-0x1d57] = (int)uVar2;
	return;
}

void LoadLighting(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	byte *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy((uint *)(PTR_DAT_100f1e90 + param_1 * 0x34), local_8);
	ppuVar1[-0x137e] = local_8[0];
	return;
}

void LoadVision(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	byte *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy((uint *)(_DAT_100f1e8c + param_1 * 0x34), local_8);
	ppuVar1[-0x137e] = local_8[0];
	return;
}

void LoadPortal(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	byte *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy((uint *)(_DAT_100f1e88 + param_1 * 0x18), local_8);
	ppuVar1[-0x137e] = local_8[0];
	return;
}

void LoadGame(undefined8 uParm1, undefined8 uParm2, undefined8 uParm3, undefined8 uParm4,
    undefined8 uParm5, undefined8 uParm6, undefined8 uParm7, undefined8 uParm8)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined8 uVar13;
	longlong lVar14;
	ulonglong uVar15;
	ulonglong uVar16;
	undefined uVar17;
	longlong lVar18;
	ulonglong uVar19;
	undefined uVar20;
	undefined7 uVar21;
	undefined uVar22;
	undefined7 uVar23;
	undefined uVar24;
	undefined7 uVar25;
	undefined uVar26;
	undefined4 uVar27;
	undefined4 uVar28;
	undefined uVar29;
	undefined4 uVar30;
	undefined4 uVar31;
	undefined uVar32;
	undefined4 uVar33;
	undefined4 uVar34;
	undefined uVar35;
	undefined8 in_r13;
	ulonglong uVar36;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	byte *pbVar37;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	int iVar38;
	int iVar39;
	undefined *puVar40;
	undefined8 unaff_r30;
	undefined4 *puVar41;
	uint *puVar42;
	int *piVar43;
	undefined *puVar44;
	int iVar45;
	undefined *puVar46;
	undefined8 unaff_r31;
	undefined4 *puVar47;
	int iVar48;
	uint param_11;
	undefined4 in_stack_fffffe58;
	undefined in_stack_fffffe5f;
	undefined4 in_stack_fffffe68;
	undefined4 in_stack_fffffe6c;
	undefined4 in_stack_fffffe70;
	undefined4 in_stack_fffffe74;
	undefined4 in_stack_fffffe78;
	undefined4 in_stack_fffffe7c;
	undefined4 in_stack_fffffe80;
	undefined4 in_stack_fffffe84;
	undefined auStack376[264];
	uint local_70;
	undefined4 local_6c;
	undefined4 local_68;
	undefined4 local_64;
	undefined4 local_60;
	undefined4 local_5c;
	undefined4 local_58;
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

	puVar12 = PTR_DAT_100f1e78;
	pbVar37 = PTR_DAT_100f1e74;
	puVar11 = PTR_DAT_100f1e6c;
	puVar10 = PTR_DAT_100f1e3c;
	puVar9 = PTR_DAT_100f1a44;
	puVar8 = PTR_DAT_100f1a40;
	puVar7 = PTR_DAT_100f1a3c;
	puVar6 = PTR_DAT_100f19a4;
	puVar5 = PTR_DAT_100f19a0;
	puVar44 = PTR_DAT_100f1968;
	puVar4 = PTR_DAT_100f1954;
	puVar3 = PTR_DAT_100f1950;
	puVar2 = PTR_DAT_100f194c;
	puVar46 = PTR_DAT_100f1944;
	puVar40 = PTR_DAT_100f1834;
	uVar34 = (undefined4)uParm8;
	uVar33 = (undefined4)((ulonglong)uParm8 >> 0x20);
	uVar31 = (undefined4)uParm7;
	uVar30 = (undefined4)((ulonglong)uParm7 >> 0x20);
	uVar28 = (undefined4)uParm6;
	uVar27 = (undefined4)((ulonglong)uParm6 >> 0x20);
	uVar26 = (undefined)uParm5;
	uVar25 = (undefined7)((ulonglong)uParm5 >> 8);
	uVar24 = (undefined)uParm4;
	uVar23 = (undefined7)((ulonglong)uParm4 >> 8);
	uVar22 = (undefined)uParm3;
	uVar21 = (undefined7)((ulonglong)uParm3 >> 8);
	uVar16 = ZEXT48(&toc);
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
	uVar36 = (ulonglong)_DAT_100f1dec;
	param_11 = (uint)uParm1;
	uVar13 = FreeGameMem((char)uParm1, (char)uParm2, uVar22, uVar24, uVar26, (char)uParm6, (char)uParm7,
	    (char)uParm8, in_stack_fffffe58);
	uVar17 = (undefined)uParm2;
	pfile_remove_temp_files(uVar13, uParm2, CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24), CONCAT71(uVar25, uVar26), uVar28, uVar31, uVar34, in_stack_fffffe58);
	pfile_get_game_name((int)auStack376, uVar17, uVar22, uVar24, uVar26, (char)uVar28, (char)uVar31, (char)uVar34,
	    in_stack_fffffe58);
	lVar18 = ZEXT48(register0x0000000c) - 0x74;
	lVar14 = pfile_read(ZEXT48(register0x0000000c) - 0x178, (uint *)lVar18, CONCAT71(uVar21, uVar22),
	    CONCAT71(uVar23, uVar24), CONCAT71(uVar25, uVar26), uVar28, uVar31, uVar34,
	    in_stack_fffffe58);
	local_70 = (uint)lVar14;
	*(uint *)((int)uVar16 + -0x4df8) = local_70;
	uVar15 = ILoad();
	if ((uVar15 - 0x52450000 & 0xffffffff) != 0x544c) {
		app_fatal(*(int *)((int)uVar16 + -0x5f68), lVar18, CONCAT71(uVar21, uVar22),
		    CONCAT71(uVar23, uVar24), CONCAT71(uVar25, uVar26), uVar28, uVar31, uVar34,
		    in_stack_fffffe58, in_stack_fffffe5f, in_stack_fffffe68, in_stack_fffffe6c,
		    in_stack_fffffe70, in_stack_fffffe74, in_stack_fffffe78, in_stack_fffffe7c,
		    in_stack_fffffe80, in_stack_fffffe84);
	}
	uVar13 = OLoad();
	**(undefined **)((int)uVar16 + -0x77d8) = (char)uVar13;
	uVar15 = WLoad();
	**(undefined **)((int)uVar16 + -0x77e0) = (char)uVar15;
	uVar15 = WLoad();
	**(undefined **)((int)uVar16 + -0x77e4) = (char)uVar15;
	uVar15 = WLoad();
	**(undefined **)((int)uVar16 + -0x7794) = (char)uVar15;
	uVar15 = WLoad();
	local_6c = (undefined4)uVar15;
	uVar15 = WLoad();
	local_68 = (undefined4)uVar15;
	uVar13 = OLoad();
	**(undefined4 **)((int)uVar16 + -0x77bc) = (int)uVar13;
	uVar13 = OLoad();
	puVar47 = *(undefined4 **)((int)uVar16 + -0x77c4);
	uVar19 = ZEXT48(puVar47);
	*puVar47 = (int)uVar13;
	uVar15 = WLoad();
	local_64 = (undefined4)uVar15;
	uVar15 = WLoad();
	local_60 = (undefined4)uVar15;
	uVar15 = WLoad();
	local_5c = (undefined4)uVar15;
	uVar15 = WLoad();
	puVar47 = *(undefined4 **)((int)uVar16 + -0x75ec);
	iVar38 = 0;
	local_58 = (undefined4)uVar15;
	puVar41 = *(undefined4 **)((int)uVar16 + -0x71f8);
	do {
		uVar15 = ILoad();
		*puVar47 = (int)uVar15;
		uVar15 = WLoad();
		iVar38 = iVar38 + 1;
		*puVar41 = (int)uVar15;
		puVar47 = puVar47 + 1;
		puVar41 = puVar41 + 1;
	} while (iVar38 < 0x11);
	LoadPlayer(**(int **)((int)uVar16 + -0x77ac), (char)uVar19, uVar22, uVar24, uVar26, (char)uVar28,
	    (char)uVar31, (char)uVar34, in_stack_fffffe58);
	iVar38 = 0;
	do {
		LoadQuest(iVar38, (char)uVar19, uVar22, uVar24, uVar26, (char)uVar28, (char)uVar31, (char)uVar34,
		    in_stack_fffffe58);
		iVar38 = iVar38 + 1;
	} while (iVar38 < 0x10);
	iVar38 = 0;
	do {
		LoadPortal(iVar38, (char)uVar19, uVar22, uVar24, uVar26, (char)uVar28, (char)uVar31, (char)uVar34,
		    in_stack_fffffe58);
		iVar38 = iVar38 + 1;
	} while (iVar38 < 4);
	uVar15 = 4;
	LoadGameLevel((ulonglong)param_11, 4, CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24),
	    CONCAT71(uVar25, uVar26), CONCAT44(uVar27, uVar28), CONCAT44(uVar30, uVar31),
	    CONCAT44(uVar33, uVar34), in_stack_fffffe58);
	SyncInitPlr((ulonglong) * *(uint **)((int)uVar16 + -0x77ac), uVar15, CONCAT71(uVar21, uVar22),
	    CONCAT71(uVar23, uVar24), CONCAT71(uVar25, uVar26), uVar28, uVar31, uVar34,
	    in_stack_fffffe58);
	SyncPlrAnim((ulonglong) * *(uint **)((int)uVar16 + -0x77ac), uVar15, CONCAT71(uVar21, uVar22),
	    CONCAT71(uVar23, uVar24), CONCAT71(uVar25, uVar26), uVar28, uVar31, uVar34,
	    in_stack_fffffe58);
	iVar38 = (int)uVar16;
	iVar39 = 0;
	puVar47 = *(undefined4 **)(iVar38 + -0x77b4);
	uVar15 = ZEXT48(puVar47);
	**(undefined4 **)(iVar38 + -0x77b0) = local_6c;
	puVar41 = *(undefined4 **)(iVar38 + -0x714c);
	*puVar47 = local_68;
	*(undefined4 *)puVar6 = local_64;
	*(undefined4 *)uVar36 = local_60;
	*(undefined4 *)puVar44 = local_5c;
	*(undefined4 *)puVar10 = local_58;
	do {
		uVar19 = ILoad();
		iVar39 = iVar39 + 1;
		*puVar41 = (int)uVar19;
		puVar41 = puVar41 + 1;
	} while (iVar39 < 200);
	if (**(char **)((int)uVar16 + -0x7794) != '\0') {
		iVar38 = 0;
		puVar47 = *(undefined4 **)((int)uVar16 + -0x7628);
		do {
			uVar19 = WLoad();
			iVar38 = iVar38 + 1;
			*puVar47 = (int)uVar19;
			puVar47 = puVar47 + 1;
		} while (iVar38 < 200);
		iVar38 = 0;
		puVar42 = *(uint **)((int)uVar16 + -0x7628);
		while (iVar38 < *(int *)puVar6) {
			LoadMonster((ulonglong)*puVar42, uVar15, CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24),
			    CONCAT71(uVar25, uVar26), uVar28, uVar31, uVar34, in_stack_fffffe58);
			puVar42 = puVar42 + 1;
			iVar38 = iVar38 + 1;
		}
		iVar38 = 0;
		piVar43 = *(int **)((int)uVar16 + -0x7660);
		do {
			uVar19 = BLoad();
			iVar38 = iVar38 + 1;
			*piVar43 = (int)(char)uVar19;
			piVar43 = piVar43 + 1;
		} while (iVar38 < 0x7d);
		iVar38 = 0;
		piVar43 = *(int **)((int)uVar16 + -0x7150);
		do {
			uVar19 = BLoad();
			iVar38 = iVar38 + 1;
			*piVar43 = (int)(char)uVar19;
			piVar43 = piVar43 + 1;
		} while (iVar38 < 0x7d);
		iVar38 = 0;
		piVar43 = *(int **)((int)uVar16 + -0x7660);
		while (iVar38 < *(int *)puVar44) {
			LoadMissile(*piVar43, (char)uVar15, uVar22, uVar24, uVar26, (char)uVar28, (char)uVar31, (char)uVar34, in_stack_fffffe58);
			piVar43 = piVar43 + 1;
			iVar38 = iVar38 + 1;
		}
		iVar38 = 0;
		piVar43 = *(int **)((int)uVar16 + -0x7190);
		do {
			uVar19 = BLoad();
			iVar38 = iVar38 + 1;
			*piVar43 = (int)(char)uVar19;
			piVar43 = piVar43 + 1;
		} while (iVar38 < 0x7f);
		iVar38 = 0;
		piVar43 = *(int **)((int)uVar16 + -0x7154);
		do {
			uVar19 = BLoad();
			iVar38 = iVar38 + 1;
			*piVar43 = (int)(char)uVar19;
			piVar43 = piVar43 + 1;
		} while (iVar38 < 0x7f);
		iVar38 = 0;
		piVar43 = *(int **)((int)uVar16 + -0x7190);
		while (iVar38 < *(int *)puVar10) {
			LoadObject(*piVar43, (char)uVar15, uVar22, uVar24, uVar26, (char)uVar28, (char)uVar31, (char)uVar34, in_stack_fffffe58);
			piVar43 = piVar43 + 1;
			iVar38 = iVar38 + 1;
		}
		iVar38 = 0;
		puVar42 = *(uint **)((int)uVar16 + -0x7190);
		while (iVar38 < *(int *)puVar10) {
			SyncObjectAnim((ulonglong)*puVar42);
			puVar42 = puVar42 + 1;
			iVar38 = iVar38 + 1;
		}
		uVar19 = WLoad();
		*(int *)puVar12 = (int)uVar19;
		iVar38 = 0;
		puVar44 = pbVar37;
		do {
			uVar19 = BLoad();
			iVar38 = iVar38 + 1;
			*puVar44 = (char)uVar19;
			puVar44 = puVar44 + 1;
		} while (iVar38 < 0x20);
		iVar38 = 0;
		while (iVar38 < *(int *)puVar12) {
			LoadLighting((uint)*pbVar37, (char)uVar15, uVar22, uVar24, uVar26, (char)uVar28, (char)uVar31,
			    (char)uVar34, in_stack_fffffe58);
			pbVar37 = pbVar37 + 1;
			iVar38 = iVar38 + 1;
		}
		uVar19 = WLoad();
		puVar47 = *(undefined4 **)((int)uVar16 + -0x7160);
		uVar15 = ZEXT48(puVar47);
		*puVar47 = (int)uVar19;
		uVar19 = WLoad();
		*(int *)puVar11 = (int)uVar19;
		iVar38 = 0;
		while (iVar38 < *(int *)puVar11) {
			LoadVision(iVar38, (char)uVar15, uVar22, uVar24, uVar26, (char)uVar28, (char)uVar31, (char)uVar34,
			    in_stack_fffffe58);
			iVar38 = iVar38 + 1;
		}
	}
	iVar38 = 0;
	piVar43 = *(int **)((int)uVar16 + -0x71e0);
	do {
		uVar19 = BLoad();
		iVar38 = iVar38 + 1;
		*piVar43 = (int)(char)uVar19;
		piVar43 = piVar43 + 1;
	} while (iVar38 < 0x7f);
	iVar38 = 0;
	piVar43 = *(int **)((int)uVar16 + -0x71f4);
	do {
		uVar19 = BLoad();
		iVar38 = iVar38 + 1;
		*piVar43 = (int)(char)uVar19;
		piVar43 = piVar43 + 1;
	} while (iVar38 < 0x7f);
	iVar38 = 0;
	piVar43 = *(int **)((int)uVar16 + -0x71e0);
	while (iVar38 < *(int *)uVar36) {
		LoadItem(*piVar43, (char)uVar15, uVar22, uVar24, uVar26, (char)uVar28, (char)uVar31, (char)uVar34,
		    in_stack_fffffe58);
		piVar43 = piVar43 + 1;
		iVar38 = iVar38 + 1;
	}
	iVar38 = 0;
	puVar47 = *(undefined4 **)((int)uVar16 + -0x7170);
	do {
		uVar13 = OLoad();
		iVar38 = iVar38 + 1;
		*puVar47 = (int)uVar13;
		puVar47 = puVar47 + 1;
	} while (iVar38 < 0x80);
	iVar38 = 0;
	do {
		iVar45 = 0;
		iVar39 = 0;
		do {
			uVar15 = BLoad();
			iVar45 = iVar45 + 1;
			iVar48 = *(int *)puVar9 + iVar39;
			iVar39 = iVar39 + 0x70;
			*(undefined *)(iVar38 + iVar48) = (char)uVar15;
		} while (iVar45 < 0x70);
		iVar38 = iVar38 + 1;
	} while (iVar38 < 0x70);
	iVar38 = 0;
	do {
		iVar45 = 0;
		iVar39 = 0;
		do {
			uVar15 = BLoad();
			iVar45 = iVar45 + 1;
			iVar48 = *(int *)puVar40 + iVar39;
			iVar39 = iVar39 + 0x70;
			*(undefined *)(iVar38 + iVar48) = (char)uVar15;
		} while (iVar45 < 0x70);
		iVar38 = iVar38 + 1;
	} while (iVar38 < 0x70);
	iVar38 = 0;
	do {
		iVar45 = 0;
		iVar39 = 0;
		do {
			uVar15 = BLoad();
			iVar45 = iVar45 + 1;
			iVar48 = *(int *)puVar3 + iVar39;
			iVar39 = iVar39 + 0x70;
			*(undefined *)(iVar38 + iVar48) = (char)uVar15;
		} while (iVar45 < 0x70);
		iVar38 = iVar38 + 1;
	} while (iVar38 < 0x70);
	iVar38 = 0;
	do {
		iVar45 = 0;
		iVar39 = 0;
		do {
			uVar15 = BLoad();
			iVar45 = iVar45 + 1;
			iVar48 = *(int *)puVar46 + iVar39;
			iVar39 = iVar39 + 0x70;
			*(undefined *)(iVar38 + iVar48) = (char)uVar15;
		} while (iVar45 < 0x70);
		iVar38 = iVar38 + 1;
	} while (iVar38 < 0x70);
	if (**(char **)((int)uVar16 + -0x7794) != '\0') {
		iVar38 = 0;
		iVar39 = 0;
		do {
			iVar48 = 0;
			iVar45 = 0;
			do {
				uVar15 = WLoad();
				iVar48 = iVar48 + 1;
				iVar1 = *(int *)puVar4 + iVar45;
				iVar45 = iVar45 + 0xe0;
				*(undefined2 *)(iVar39 + iVar1) = (short)uVar15;
			} while (iVar48 < 0x70);
			iVar38 = iVar38 + 1;
			iVar39 = iVar39 + 2;
		} while (iVar38 < 0x70);
		iVar38 = 0;
		do {
			iVar45 = 0;
			iVar39 = 0;
			do {
				uVar15 = BLoad();
				iVar45 = iVar45 + 1;
				iVar48 = *(int *)puVar5 + iVar39;
				iVar39 = iVar39 + 0x70;
				*(undefined *)(iVar38 + iVar48) = (char)uVar15;
			} while (iVar45 < 0x70);
			iVar38 = iVar38 + 1;
		} while (iVar38 < 0x70);
		iVar38 = 0;
		do {
			iVar45 = 0;
			iVar39 = 0;
			do {
				uVar15 = BLoad();
				iVar45 = iVar45 + 1;
				iVar48 = *(int *)puVar2 + iVar39;
				iVar39 = iVar39 + 0x70;
				*(undefined *)(iVar38 + iVar48) = (char)uVar15;
			} while (iVar45 < 0x70);
			iVar38 = iVar38 + 1;
		} while (iVar38 < 0x70);
		iVar38 = 0;
		do {
			iVar45 = 0;
			iVar39 = 0;
			do {
				uVar15 = BLoad();
				iVar45 = iVar45 + 1;
				iVar48 = *(int *)puVar9 + iVar39;
				iVar39 = iVar39 + 0x70;
				*(undefined *)(iVar38 + iVar48) = (char)uVar15;
			} while (iVar45 < 0x70);
			iVar38 = iVar38 + 1;
		} while (iVar38 < 0x70);
		iVar38 = 0;
		do {
			iVar45 = 0;
			iVar39 = 0;
			do {
				uVar15 = BLoad();
				iVar45 = iVar45 + 1;
				iVar48 = *(int *)puVar8 + iVar39;
				iVar39 = iVar39 + 0x70;
				*(undefined *)(iVar38 + iVar48) = (char)uVar15;
			} while (iVar45 < 0x70);
			iVar38 = iVar38 + 1;
		} while (iVar38 < 0x70);
		iVar38 = 0;
		puVar40 = *(undefined **)((int)uVar16 + -0x7798);
		do {
			iVar39 = 0;
			puVar46 = puVar40;
			do {
				uVar13 = OLoad();
				iVar39 = iVar39 + 1;
				*puVar46 = (char)uVar13;
				puVar46 = puVar46 + 0x28;
			} while (iVar39 < 0x28);
			iVar38 = iVar38 + 1;
			puVar40 = puVar40 + 1;
		} while (iVar38 < 0x28);
		iVar38 = 0;
		do {
			iVar45 = 0;
			iVar39 = 0;
			do {
				uVar15 = BLoad();
				iVar45 = iVar45 + 1;
				iVar48 = *(int *)puVar7 + iVar39;
				iVar39 = iVar39 + 0x70;
				*(undefined *)(iVar38 + iVar48) = (char)uVar15;
			} while (iVar45 < 0x70);
			iVar38 = iVar38 + 1;
		} while (iVar38 < 0x70);
	}
	uVar15 = WLoad();
	**(undefined4 **)((int)uVar16 + -0x71ac) = (int)uVar15;
	uVar15 = WLoad();
	puVar47 = *(undefined4 **)((int)uVar16 + -0x71b4);
	uVar36 = ZEXT48(puVar47);
	iVar38 = 0;
	*puVar47 = (int)uVar15;
	do {
		LoadPremium(iVar38, (char)uVar36, uVar22, uVar24, uVar26, (char)uVar28, (char)uVar31, (char)uVar34,
		    in_stack_fffffe58);
		iVar39 = (int)uVar16;
		iVar38 = iVar38 + 1;
	} while (iVar38 < 6);
	uVar13 = OLoad();
	**(undefined4 **)(iVar39 + -0x7778) = (int)uVar13;
	uVar16 = WLoad();
	puVar47 = *(undefined4 **)(iVar39 + -0x777c);
	uVar15 = ZEXT48(puVar47);
	*puVar47 = (int)uVar16;
	mem_free_dbg((ulonglong)local_70, (char)puVar47, uVar22, uVar24, uVar26, (char)uVar28, (char)uVar31,
	    (char)uVar34, in_stack_fffffe58);
	uVar13 = AutomapZoomReset();
	uVar35 = (undefined)uVar34;
	uVar32 = (undefined)uVar31;
	uVar29 = (undefined)uVar28;
	uVar20 = (undefined)uVar15;
	ResyncQuests(uVar13, uVar15, CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24), CONCAT71(uVar25, uVar26), uVar28, uVar31, uVar34, in_stack_fffffe58);
	uVar17 = SUB41(*(char **)(iVar39 + -0x7794), 0);
	if (**(char **)(iVar39 + -0x7794) != '\0') {
		uVar17 = ProcessLightList(uVar17, uVar20, uVar22, uVar24, uVar26, uVar29, uVar32, uVar35, in_stack_fffffe58);
	}
	uVar17 = RedoPlayerVision(uVar17, uVar20, uVar22, uVar24, uVar26, uVar29, uVar32, uVar35, in_stack_fffffe58);
	ProcessVisionList(uVar17, uVar20, uVar22, uVar24, uVar26, uVar29, uVar32, uVar35, in_stack_fffffe58);
	uVar17 = missiles_process_charge();
	ResetPal(uVar17, uVar20, uVar22, uVar24, uVar26, uVar29, uVar32, uVar35, in_stack_fffffe58);
	SetCursor_(1, uVar20, uVar22, uVar24, uVar26, uVar29, uVar32, uVar35, in_stack_fffffe58);
	**(undefined4 **)(iVar39 + -0x75a8) = 1;
	return;
}

void BSave(undefined param_1)

{
	undefined *puVar1;

	puVar1 = _DAT_100f41d8 + 1;
	*_DAT_100f41d8 = param_1;
	_DAT_100f41d8 = puVar1;
	return;
}

void WSave(undefined8 param_1)

{
	undefined *puVar1;

	puVar1 = _DAT_100f41d8 + 1;
	*_DAT_100f41d8 = (char)((ulonglong)param_1 >> 0x18);
	_DAT_100f41d8 = puVar1;
	puVar1 = _DAT_100f41d8 + 1;
	*_DAT_100f41d8 = (char)((ulonglong)param_1 >> 0x10);
	_DAT_100f41d8 = puVar1;
	puVar1 = _DAT_100f41d8 + 1;
	*_DAT_100f41d8 = (char)((ulonglong)param_1 >> 8);
	_DAT_100f41d8 = puVar1;
	puVar1 = _DAT_100f41d8 + 1;
	*_DAT_100f41d8 = (char)param_1;
	_DAT_100f41d8 = puVar1;
	return;
}

void ISave(undefined8 param_1)

{
	undefined *puVar1;

	puVar1 = _DAT_100f41d8 + 1;
	*_DAT_100f41d8 = (char)((ulonglong)param_1 >> 0x18);
	_DAT_100f41d8 = puVar1;
	puVar1 = _DAT_100f41d8 + 1;
	*_DAT_100f41d8 = (char)((ulonglong)param_1 >> 0x10);
	_DAT_100f41d8 = puVar1;
	puVar1 = _DAT_100f41d8 + 1;
	*_DAT_100f41d8 = (char)((ulonglong)param_1 >> 8);
	_DAT_100f41d8 = puVar1;
	puVar1 = _DAT_100f41d8 + 1;
	*_DAT_100f41d8 = (char)param_1;
	_DAT_100f41d8 = puVar1;
	return;
}

void OSave(int param_1)

{
	undefined *puVar1;

	if (param_1 != 0) {
		puVar1 = _DAT_100f41d8 + 1;
		*_DAT_100f41d8 = 1;
		_DAT_100f41d8 = puVar1;
		return;
	}
	puVar1 = _DAT_100f41d8 + 1;
	*_DAT_100f41d8 = 0;
	_DAT_100f41d8 = puVar1;
	return;
}

void SavePlayer(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;
	uint *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy(local_8, (uint *)(PTR_DAT_100f1828 + param_1 * 0x55ec), 0xb0, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffc8);
	*(uint **)(ppuVar1 + -0x137e) = local_8[0];
	return;
}

void SaveMonster(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	uint *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy(local_8, (uint *)(PTR_DAT_100f187c + param_1 * 0xe8));
	*(uint **)(ppuVar1 + -0x137e) = local_8[0];
	return;
}

void SaveMissile(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	uint *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy(local_8, (uint *)(PTR_DAT_100f196c + param_1 * 0xb4));
	*(uint **)(ppuVar1 + -0x137e) = local_8[0];
	return;
}

void SaveObject(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	uint *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy(local_8, (uint *)(PTR_DAT_100f1948 + param_1 * 0x78));
	*(uint **)(ppuVar1 + -0x137e) = local_8[0];
	return;
}

void SaveItem(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	uint *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy(local_8, (uint *)(PTR_DAT_100f1940 + param_1 * 0x170), 0x170, 1);
	*(uint **)(ppuVar1 + -0x137e) = local_8[0];
	return;
}

void SavePremium(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	uint *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy(local_8, (uint *)(_DAT_100f1e28 + param_1 * 0x170), 0x170, 1);
	*(uint **)(ppuVar1 + -0x137e) = local_8[0];
	return;
}

void SaveQuest(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	uint *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy(local_8, PTR_DAT_100f19cc + param_1 * 0x18);
	*(uint **)(ppuVar1 + -0x137e) = local_8[0];
	WSave((ulonglong) * (uint *)ppuVar1[-0x1c4c]);
	WSave((ulonglong) * (uint *)ppuVar1[-0x1c4d]);
	WSave((ulonglong) * (uint *)ppuVar1[-0x1c4e]);
	WSave((ulonglong) * (uint *)ppuVar1[-0x1c4f]);
	WSave((ulonglong) * (uint *)ppuVar1[-0x1d57]);
	return;
}

void SaveLighting(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	uint *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy(local_8, (uint *)(PTR_DAT_100f1e90 + param_1 * 0x34));
	*(uint **)(ppuVar1 + -0x137e) = local_8[0];
	return;
}

void SaveVision(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	uint *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy(local_8, (uint *)(_DAT_100f1e8c + param_1 * 0x34));
	*(uint **)(ppuVar1 + -0x137e) = local_8[0];
	return;
}

void SavePortal(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	uint *local_8[2];

	ppuVar1 = &toc;
	local_8[0] = _DAT_100f41d8;
	memcpy(local_8, (uint *)(_DAT_100f1e88 + param_1 * 0x18));
	*(uint **)(ppuVar1 + -0x137e) = local_8[0];
	return;
}

void SaveGame(undefined8 uParm1, undefined8 uParm2, undefined8 uParm3, undefined8 uParm4,
    undefined8 uParm5, undefined8 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	ulonglong uVar14;
	undefined8 extraout_r3;
	ulonglong uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined4 uVar19;
	undefined4 uVar20;
	undefined4 uVar21;
	undefined4 uVar22;
	undefined8 in_r13;
	ulonglong uVar23;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	byte *pbVar24;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	int iVar25;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	int iVar26;
	undefined8 unaff_r30;
	ulonglong uVar27;
	uint *puVar28;
	int *piVar29;
	undefined4 *puVar30;
	undefined *puVar31;
	int iVar32;
	byte *pbVar33;
	undefined8 unaff_r31;
	int iVar34;
	undefined4 in_stack_fffffe78;
	undefined auStack344[260];
	uint local_54;
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

	puVar13 = PTR_DAT_100f1e78;
	pbVar24 = PTR_DAT_100f1e74;
	puVar12 = PTR_DAT_100f1e6c;
	puVar11 = PTR_DAT_100f1e3c;
	puVar10 = PTR_DAT_100f1a44;
	puVar9 = PTR_DAT_100f1a40;
	puVar8 = PTR_DAT_100f1a3c;
	puVar7 = PTR_DAT_100f19a4;
	puVar6 = PTR_DAT_100f19a0;
	puVar31 = PTR_DAT_100f1968;
	puVar5 = PTR_DAT_100f1954;
	puVar4 = PTR_DAT_100f1950;
	puVar3 = PTR_DAT_100f194c;
	puVar2 = PTR_DAT_100f1944;
	puVar1 = PTR_DAT_100f1834;
	uVar22 = (undefined4)uParm6;
	uVar21 = (undefined4)((ulonglong)uParm6 >> 0x20);
	uVar20 = (undefined4)uParm5;
	uVar19 = (undefined4)((ulonglong)uParm5 >> 0x20);
	uVar14 = ZEXT48(&toc);
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
	uVar23 = (ulonglong)_DAT_100f1dec;
	codec_get_encoded_len(0x40003);
	local_54 = DiabloAllocPtr();
	*(uint *)((int)uVar14 + -0x4df8) = local_54;
	ISave(0x5245544c);
	OSave((uint) * *(byte **)((int)uVar14 + -0x77d8));
	WSave((ulonglong) * *(byte **)((int)uVar14 + -0x77e0));
	WSave((ulonglong) * *(byte **)((int)uVar14 + -0x77e4));
	WSave((ulonglong) * *(byte **)((int)uVar14 + -0x7794));
	WSave((ulonglong) * *(uint **)((int)uVar14 + -0x77b0));
	WSave((ulonglong) * *(uint **)((int)uVar14 + -0x77b4));
	OSave(**(int **)((int)uVar14 + -0x77bc));
	OSave(**(int **)((int)uVar14 + -0x77c4));
	WSave((ulonglong) * (uint *)puVar7);
	WSave((ulonglong) * (uint *)uVar23);
	WSave((ulonglong) * (uint *)puVar31);
	WSave((ulonglong) * (uint *)puVar11);
	iVar26 = 0;
	puVar28 = *(uint **)((int)uVar14 + -0x75ec);
	uVar15 = (ulonglong) * (uint *)((int)uVar14 + -0x71f8);
	uVar27 = uVar15;
	do {
		ISave((ulonglong)*puVar28);
		WSave((ulonglong) * (uint *)uVar27);
		iVar26 = iVar26 + 1;
		uVar27 = uVar27 + 4;
		puVar28 = puVar28 + 1;
	} while (iVar26 < 0x11);
	SavePlayer(**(int **)((int)uVar14 + -0x77ac), (char)uVar15, (char)uParm3, (char)uParm4, (char)uVar20, (char)uVar22, (char)uParm7, (char)uParm8, in_stack_fffffe78);
	iVar26 = 0;
	do {
		SaveQuest(iVar26, (char)uVar15, (char)uParm3, (char)uParm4, (char)uVar20, (char)uVar22,
		    (char)uParm7, (char)uParm8, in_stack_fffffe78);
		iVar26 = iVar26 + 1;
	} while (iVar26 < 0x10);
	iVar26 = 0;
	do {
		SavePortal(iVar26, (char)uVar15, (char)uParm3, (char)uParm4, (char)uVar20, (char)uVar22,
		    (char)uParm7, (char)uParm8, in_stack_fffffe78);
		iVar26 = iVar26 + 1;
	} while (iVar26 < 4);
	iVar26 = 0;
	puVar28 = *(uint **)((int)uVar14 + -0x714c);
	do {
		ISave((ulonglong)*puVar28);
		iVar26 = iVar26 + 1;
		puVar28 = puVar28 + 1;
	} while (iVar26 < 200);
	if (**(char **)((int)uVar14 + -0x7794) != '\0') {
		iVar26 = 0;
		puVar28 = *(uint **)((int)uVar14 + -0x7628);
		do {
			WSave((ulonglong)*puVar28);
			iVar26 = iVar26 + 1;
			puVar28 = puVar28 + 1;
		} while (iVar26 < 200);
		iVar26 = 0;
		piVar29 = *(int **)((int)uVar14 + -0x7628);
		while (iVar26 < *(int *)puVar7) {
			SaveMonster(*piVar29, (char)uVar15, (char)uParm3, (char)uParm4, (char)uVar20, (char)uVar22,
			    (char)uParm7, (char)uParm8, in_stack_fffffe78);
			piVar29 = piVar29 + 1;
			iVar26 = iVar26 + 1;
		}
		iVar26 = 0;
		puVar30 = *(undefined4 **)((int)uVar14 + -0x7660);
		do {
			BSave((char)*puVar30);
			iVar26 = iVar26 + 1;
			puVar30 = puVar30 + 1;
		} while (iVar26 < 0x7d);
		iVar26 = 0;
		puVar30 = *(undefined4 **)((int)uVar14 + -0x7150);
		do {
			BSave((char)*puVar30);
			iVar26 = iVar26 + 1;
			puVar30 = puVar30 + 1;
		} while (iVar26 < 0x7d);
		iVar26 = 0;
		piVar29 = *(int **)((int)uVar14 + -0x7660);
		while (iVar26 < *(int *)puVar31) {
			SaveMissile(*piVar29, (char)uVar15, (char)uParm3, (char)uParm4, (char)uVar20, (char)uVar22,
			    (char)uParm7, (char)uParm8, in_stack_fffffe78);
			piVar29 = piVar29 + 1;
			iVar26 = iVar26 + 1;
		}
		iVar26 = 0;
		puVar30 = *(undefined4 **)((int)uVar14 + -0x7190);
		do {
			BSave((char)*puVar30);
			iVar26 = iVar26 + 1;
			puVar30 = puVar30 + 1;
		} while (iVar26 < 0x7f);
		iVar26 = 0;
		puVar30 = *(undefined4 **)((int)uVar14 + -0x7154);
		do {
			BSave((char)*puVar30);
			iVar26 = iVar26 + 1;
			puVar30 = puVar30 + 1;
		} while (iVar26 < 0x7f);
		iVar26 = 0;
		piVar29 = *(int **)((int)uVar14 + -0x7190);
		while (iVar26 < *(int *)puVar11) {
			SaveObject(*piVar29, (char)uVar15, (char)uParm3, (char)uParm4, (char)uVar20, (char)uVar22,
			    (char)uParm7, (char)uParm8, in_stack_fffffe78);
			piVar29 = piVar29 + 1;
			iVar26 = iVar26 + 1;
		}
		WSave((ulonglong) * (uint *)puVar13);
		iVar26 = 0;
		puVar31 = pbVar24;
		do {
			BSave(*puVar31);
			iVar26 = iVar26 + 1;
			puVar31 = puVar31 + 1;
		} while (iVar26 < 0x20);
		iVar26 = 0;
		while (iVar26 < *(int *)puVar13) {
			SaveLighting((uint)*pbVar24, (char)uVar15, (char)uParm3, (char)uParm4, (char)uVar20, (char)uVar22,
			    (char)uParm7, (char)uParm8, in_stack_fffffe78);
			pbVar24 = pbVar24 + 1;
			iVar26 = iVar26 + 1;
		}
		WSave((ulonglong) * *(uint **)((int)uVar14 + -0x7160));
		WSave((ulonglong) * (uint *)puVar12);
		iVar26 = 0;
		while (iVar26 < *(int *)puVar12) {
			SaveVision(iVar26, (char)uVar15, (char)uParm3, (char)uParm4, (char)uVar20, (char)uVar22,
			    (char)uParm7, (char)uParm8, in_stack_fffffe78);
			iVar26 = iVar26 + 1;
		}
	}
	iVar26 = 0;
	puVar30 = *(undefined4 **)((int)uVar14 + -0x71e0);
	do {
		BSave((char)*puVar30);
		iVar26 = iVar26 + 1;
		puVar30 = puVar30 + 1;
	} while (iVar26 < 0x7f);
	iVar26 = 0;
	puVar30 = *(undefined4 **)((int)uVar14 + -0x71f4);
	do {
		BSave((char)*puVar30);
		iVar26 = iVar26 + 1;
		puVar30 = puVar30 + 1;
	} while (iVar26 < 0x7f);
	iVar26 = 0;
	piVar29 = *(int **)((int)uVar14 + -0x71e0);
	while (iVar26 < *(int *)uVar23) {
		SaveItem(*piVar29, (char)uVar15, (char)uParm3, (char)uParm4, (char)uVar20, (char)uVar22,
		    (char)uParm7, (char)uParm8, in_stack_fffffe78);
		piVar29 = piVar29 + 1;
		iVar26 = iVar26 + 1;
	}
	iVar26 = 0;
	piVar29 = *(int **)((int)uVar14 + -0x7170);
	do {
		OSave(*piVar29);
		iVar26 = iVar26 + 1;
		piVar29 = piVar29 + 1;
	} while (iVar26 < 0x80);
	iVar26 = 0;
	do {
		iVar32 = 0;
		iVar25 = 0;
		do {
			BSave(*(undefined *)(iVar26 + *(int *)puVar10 + iVar25));
			iVar32 = iVar32 + 1;
			iVar25 = iVar25 + 0x70;
		} while (iVar32 < 0x70);
		iVar26 = iVar26 + 1;
	} while (iVar26 < 0x70);
	iVar26 = 0;
	do {
		iVar32 = 0;
		iVar25 = 0;
		do {
			BSave(*(byte *)(iVar26 + *(int *)puVar1 + iVar25) & 0xf8);
			iVar32 = iVar32 + 1;
			iVar25 = iVar25 + 0x70;
		} while (iVar32 < 0x70);
		iVar26 = iVar26 + 1;
	} while (iVar26 < 0x70);
	iVar26 = 0;
	do {
		iVar32 = 0;
		iVar25 = 0;
		do {
			BSave(*(undefined *)(iVar26 + *(int *)puVar4 + iVar25));
			iVar32 = iVar32 + 1;
			iVar25 = iVar25 + 0x70;
		} while (iVar32 < 0x70);
		iVar26 = iVar26 + 1;
	} while (iVar26 < 0x70);
	iVar26 = 0;
	do {
		iVar32 = 0;
		iVar25 = 0;
		do {
			BSave(*(undefined *)(iVar26 + *(int *)puVar2 + iVar25));
			iVar32 = iVar32 + 1;
			iVar25 = iVar25 + 0x70;
		} while (iVar32 < 0x70);
		iVar26 = iVar26 + 1;
	} while (iVar26 < 0x70);
	if (**(char **)((int)uVar14 + -0x7794) != '\0') {
		iVar25 = 0;
		iVar26 = 0;
		do {
			iVar34 = 0;
			iVar32 = 0;
			do {
				WSave((longlong) * (short *)(iVar26 + *(int *)puVar5 + iVar32));
				iVar34 = iVar34 + 1;
				iVar32 = iVar32 + 0xe0;
			} while (iVar34 < 0x70);
			iVar25 = iVar25 + 1;
			iVar26 = iVar26 + 2;
		} while (iVar25 < 0x70);
		iVar26 = 0;
		do {
			iVar32 = 0;
			iVar25 = 0;
			do {
				BSave(*(undefined *)(iVar26 + *(int *)puVar6 + iVar25));
				iVar32 = iVar32 + 1;
				iVar25 = iVar25 + 0x70;
			} while (iVar32 < 0x70);
			iVar26 = iVar26 + 1;
		} while (iVar26 < 0x70);
		iVar26 = 0;
		do {
			iVar32 = 0;
			iVar25 = 0;
			do {
				BSave(*(undefined *)(iVar26 + *(int *)puVar3 + iVar25));
				iVar32 = iVar32 + 1;
				iVar25 = iVar25 + 0x70;
			} while (iVar32 < 0x70);
			iVar26 = iVar26 + 1;
		} while (iVar26 < 0x70);
		iVar26 = 0;
		do {
			iVar32 = 0;
			iVar25 = 0;
			do {
				BSave(*(undefined *)(iVar26 + *(int *)puVar10 + iVar25));
				iVar32 = iVar32 + 1;
				iVar25 = iVar25 + 0x70;
			} while (iVar32 < 0x70);
			iVar26 = iVar26 + 1;
		} while (iVar26 < 0x70);
		iVar26 = 0;
		do {
			iVar32 = 0;
			iVar25 = 0;
			do {
				BSave(*(undefined *)(iVar26 + *(int *)puVar9 + iVar25));
				iVar32 = iVar32 + 1;
				iVar25 = iVar25 + 0x70;
			} while (iVar32 < 0x70);
			iVar26 = iVar26 + 1;
		} while (iVar26 < 0x70);
		pbVar24 = *(byte **)((int)uVar14 + -0x7798);
		iVar26 = 0;
		do {
			iVar25 = 0;
			pbVar33 = pbVar24;
			do {
				OSave((uint)*pbVar33);
				iVar25 = iVar25 + 1;
				pbVar33 = pbVar33 + 0x28;
			} while (iVar25 < 0x28);
			iVar26 = iVar26 + 1;
			pbVar24 = pbVar24 + 1;
		} while (iVar26 < 0x28);
		iVar26 = 0;
		do {
			iVar32 = 0;
			iVar25 = 0;
			do {
				BSave(*(undefined *)(iVar26 + *(int *)puVar8 + iVar25));
				iVar32 = iVar32 + 1;
				iVar25 = iVar25 + 0x70;
			} while (iVar32 < 0x70);
			iVar26 = iVar26 + 1;
		} while (iVar26 < 0x70);
	}
	WSave((ulonglong) * *(uint **)((int)uVar14 + -0x71ac));
	WSave((ulonglong) * *(uint **)((int)uVar14 + -0x71b4));
	iVar26 = 0;
	do {
		SavePremium(iVar26, (char)uVar15, (char)uParm3, (char)uParm4, (char)uVar20, (char)uVar22,
		    (char)uParm7, (char)uParm8, in_stack_fffffe78);
		iVar25 = (int)uVar14;
		uVar18 = (undefined)uParm4;
		uVar17 = (undefined)uParm3;
		uVar16 = (undefined)uVar15;
		iVar26 = iVar26 + 1;
	} while (iVar26 < 6);
	OSave(**(int **)(iVar25 + -0x7778));
	WSave((ulonglong) * *(uint **)(iVar25 + -0x777c));
	pfile_get_game_name((int)auStack344, uVar16, uVar17, uVar18, (char)uVar20, (char)uVar22, (char)uParm7,
	    (char)uParm8, in_stack_fffffe78);
	uVar14 = codec_get_encoded_len((ulonglong) * (uint *)(iVar25 + -0x4df8) - (ulonglong)local_54);
	uVar27 = (ulonglong)local_54;
	uVar15 = (ulonglong) * (uint *)(iVar25 + -0x4df8) - (ulonglong)local_54;
	pfile_write_save_file(ZEXT48(register0x0000000c) - 0x158, uVar27, uVar15, uVar14, CONCAT44(uVar19, uVar20),
	    CONCAT44(uVar21, uVar22), uParm7, uParm8, in_stack_fffffe78);
	mem_free_dbg((ulonglong)local_54, (char)uVar27, (char)uVar15, (char)uVar14, (char)uVar20, (char)uVar22,
	    (char)uParm7, (char)uParm8, in_stack_fffffe78);
	uVar21 = (undefined4)uVar14;
	puVar30 = *(undefined4 **)(iVar25 + -0x75bc);
	*puVar30 = 1;
	pfile_rename_temp_to_perm(ZEXT48(puVar30), uVar27, uVar15, uVar14, CONCAT44(uVar19, uVar20), uVar22, uParm7, uParm8,
	    in_stack_fffffe78);
	pfile_write_hero(extraout_r3, uVar27, uVar15, uVar21, uVar20, uVar22, uParm7, uParm8, in_stack_fffffe78);
	return;
}

void SaveLevel(undefined8 uParm1, ulonglong uParm2, undefined8 uParm3, undefined8 uParm4,
    undefined8 uParm5, undefined8 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	uint *puVar11;
	undefined *puVar12;
	int iVar13;
	undefined4 uVar16;
	longlong lVar14;
	ulonglong uVar15;
	undefined uVar17;
	undefined4 uVar18;
	undefined4 uVar19;
	undefined uVar20;
	undefined4 uVar21;
	undefined4 uVar22;
	undefined uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined8 in_r13;
	ulonglong uVar26;
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
	byte *pbVar27;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	int iVar28;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	int iVar29;
	undefined8 unaff_r29;
	uint *puVar31;
	int *piVar32;
	undefined4 *puVar33;
	int *piVar34;
	ulonglong uVar30;
	undefined8 unaff_r30;
	int iVar35;
	byte *pbVar36;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffe78;
	undefined auStack344[268];
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

	piVar34 = (int *)PTR_DAT_100f1e40;
	puVar12 = PTR_DAT_100f1e3c;
	puVar11 = _DAT_100f1dec;
	puVar10 = PTR_DAT_100f1a44;
	puVar9 = PTR_DAT_100f1a40;
	puVar8 = PTR_DAT_100f1a3c;
	piVar32 = (int *)PTR_DAT_100f19a8;
	puVar7 = PTR_DAT_100f19a4;
	puVar6 = PTR_DAT_100f19a0;
	puVar5 = PTR_DAT_100f1954;
	puVar4 = PTR_DAT_100f194c;
	puVar3 = PTR_DAT_100f1944;
	puVar2 = PTR_DAT_100f183c;
	puVar1 = PTR_DAT_100f1834;
	uVar22 = (undefined4)uParm6;
	uVar21 = (undefined4)((ulonglong)uParm6 >> 0x20);
	uVar19 = (undefined4)uParm5;
	uVar18 = (undefined4)((ulonglong)uParm5 >> 0x20);
	uVar15 = ZEXT48(&toc);
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
	uVar26 = (ulonglong)_DAT_100f1df0;
	if (*PTR_DAT_100f17ec == '\0') {
		uVar16 = GetRndSeed((char)PTR_DAT_100f17ec, (char)uParm2, (char)uParm3, (char)uParm4, (char)uParm5, (char)uParm6, (char)uParm7, (char)uParm8, in_stack_fffffe78);
		puVar33 = *(undefined4 **)((int)uVar15 + -0x75ec);
		uParm2 = ZEXT48(puVar33);
		*puVar33 = uVar16;
	}
	codec_get_encoded_len(0x40003);
	lVar14 = DiabloAllocPtr();
	lVar14._7_1_ = (undefined)lVar14;
	*(undefined4 *)((int)uVar15 + -0x4df8) = (int)lVar14;
	if (*puVar2 != '\0') {
		iVar29 = 0;
		do {
			iVar35 = 0;
			iVar28 = 0;
			do {
				BSave(*(undefined *)(iVar29 + *(int *)puVar6 + iVar28));
				iVar35 = iVar35 + 1;
				iVar28 = iVar28 + 0x70;
			} while (iVar35 < 0x70);
			iVar29 = iVar29 + 1;
		} while (iVar29 < 0x70);
	}
	WSave((ulonglong) * (uint *)puVar7);
	WSave((ulonglong)*puVar11);
	WSave((ulonglong) * (uint *)puVar12);
	if (*puVar2 != '\0') {
		iVar29 = 0;
		puVar31 = (uint *)piVar32;
		do {
			WSave((ulonglong)*puVar31);
			iVar29 = iVar29 + 1;
			puVar31 = puVar31 + 1;
		} while (iVar29 < 200);
		iVar29 = 0;
		while (iVar29 < *(int *)puVar7) {
			SaveMonster(*piVar32, (char)uParm2, (char)uParm3, (char)uParm4, (char)uVar19, (char)uVar22,
			    (char)uParm7, (char)uParm8, in_stack_fffffe78);
			piVar32 = piVar32 + 1;
			iVar29 = iVar29 + 1;
		}
		iVar29 = 0;
		puVar33 = piVar34;
		do {
			BSave((char)*puVar33);
			iVar29 = iVar29 + 1;
			puVar33 = puVar33 + 1;
		} while (iVar29 < 0x7f);
		iVar29 = 0;
		puVar33 = *(undefined4 **)((int)uVar15 + -0x7154);
		do {
			BSave((char)*puVar33);
			iVar29 = iVar29 + 1;
			puVar33 = puVar33 + 1;
		} while (iVar29 < 0x7f);
		iVar29 = 0;
		while (iVar29 < *(int *)puVar12) {
			SaveObject(*piVar34, (char)uParm2, (char)uParm3, (char)uParm4, (char)uVar19, (char)uVar22,
			    (char)uParm7, (char)uParm8, in_stack_fffffe78);
			piVar34 = piVar34 + 1;
			iVar29 = iVar29 + 1;
		}
	}
	iVar29 = 0;
	uVar30 = uVar26;
	do {
		BSave((char)*(undefined4 *)uVar30);
		iVar29 = iVar29 + 1;
		uVar30 = uVar30 + 4;
	} while (iVar29 < 0x7f);
	iVar29 = 0;
	puVar33 = *(undefined4 **)((int)uVar15 + -0x71f4);
	do {
		BSave((char)*puVar33);
		iVar29 = iVar29 + 1;
		puVar33 = puVar33 + 1;
	} while (iVar29 < 0x7f);
	iVar29 = 0;
	while (iVar29 < (int)*puVar11) {
		SaveItem(*(int *)uVar26, (char)uParm2, (char)uParm3, (char)uParm4, (char)uVar19, (char)uVar22,
		    (char)uParm7, (char)uParm8, in_stack_fffffe78);
		uVar26 = uVar26 + 4;
		iVar29 = iVar29 + 1;
	}
	iVar29 = 0;
	do {
		iVar35 = 0;
		iVar28 = 0;
		do {
			BSave(*(byte *)(iVar29 + *(int *)puVar1 + iVar28) & 0xf8);
			iVar35 = iVar35 + 1;
			iVar28 = iVar28 + 0x70;
		} while (iVar35 < 0x70);
		iVar29 = iVar29 + 1;
	} while (iVar29 < 0x70);
	iVar29 = 0;
	do {
		iVar35 = 0;
		iVar28 = 0;
		do {
			BSave(*(undefined *)(iVar29 + *(int *)puVar3 + iVar28));
			iVar13 = (int)uVar15;
			uVar16 = (undefined4)uParm4;
			iVar35 = iVar35 + 1;
			iVar28 = iVar28 + 0x70;
		} while (iVar35 < 0x70);
		iVar29 = iVar29 + 1;
	} while (iVar29 < 0x70);
	if (*puVar2 != '\0') {
		iVar28 = 0;
		iVar29 = 0;
		do {
			iVar13 = 0;
			iVar35 = 0;
			do {
				WSave((longlong) * (short *)(iVar29 + *(int *)puVar5 + iVar35));
				iVar13 = iVar13 + 1;
				iVar35 = iVar35 + 0xe0;
			} while (iVar13 < 0x70);
			iVar28 = iVar28 + 1;
			iVar29 = iVar29 + 2;
		} while (iVar28 < 0x70);
		iVar29 = 0;
		do {
			iVar35 = 0;
			iVar28 = 0;
			do {
				BSave(*(undefined *)(iVar29 + *(int *)puVar4 + iVar28));
				iVar35 = iVar35 + 1;
				iVar28 = iVar28 + 0x70;
			} while (iVar35 < 0x70);
			iVar29 = iVar29 + 1;
		} while (iVar29 < 0x70);
		iVar29 = 0;
		do {
			iVar35 = 0;
			iVar28 = 0;
			do {
				BSave(*(undefined *)(iVar29 + *(int *)puVar10 + iVar28));
				iVar35 = iVar35 + 1;
				iVar28 = iVar28 + 0x70;
			} while (iVar35 < 0x70);
			iVar29 = iVar29 + 1;
		} while (iVar29 < 0x70);
		iVar29 = 0;
		do {
			iVar35 = 0;
			iVar28 = 0;
			do {
				BSave(*(undefined *)(iVar29 + *(int *)puVar9 + iVar28));
				iVar35 = iVar35 + 1;
				iVar28 = iVar28 + 0x70;
			} while (iVar35 < 0x70);
			iVar29 = iVar29 + 1;
		} while (iVar29 < 0x70);
		pbVar27 = *(byte **)((int)uVar15 + -0x7798);
		iVar29 = 0;
		do {
			iVar28 = 0;
			pbVar36 = pbVar27;
			do {
				OSave((uint)*pbVar36);
				iVar28 = iVar28 + 1;
				pbVar36 = pbVar36 + 0x28;
			} while (iVar28 < 0x28);
			iVar29 = iVar29 + 1;
			pbVar27 = pbVar27 + 1;
		} while (iVar29 < 0x28);
		iVar29 = 0;
		do {
			iVar35 = 0;
			iVar28 = 0;
			do {
				BSave(*(undefined *)(iVar29 + *(int *)puVar8 + iVar28));
				iVar13 = (int)uVar15;
				uVar16 = (undefined4)uParm4;
				iVar35 = iVar35 + 1;
				iVar28 = iVar28 + 0x70;
			} while (iVar35 < 0x70);
			iVar29 = iVar29 + 1;
		} while (iVar29 < 0x70);
	}
	GetTempLevelNames((int)auStack344, uParm2, uParm3, uVar16, uVar19, uVar22, uParm7, uParm8, in_stack_fffffe78);
	uVar15 = codec_get_encoded_len((ulonglong) * (uint *)(iVar13 + -0x4df8) - lVar14);
	uVar25 = (undefined)uParm8;
	uVar24 = (undefined)uParm7;
	uVar23 = (undefined)uVar22;
	uVar20 = (undefined)uVar19;
	uVar15._7_1_ = (undefined)uVar15;
	uVar26 = (ulonglong) * (uint *)(iVar13 + -0x4df8) - lVar14;
	uVar17 = (undefined)uVar26;
	pfile_write_save_file(ZEXT48(register0x0000000c) - 0x158, lVar14, uVar26, uVar15, CONCAT44(uVar18, uVar19),
	    CONCAT44(uVar21, uVar22), uParm7, uParm8, in_stack_fffffe78);
	mem_free_dbg(lVar14, (undefined)lVar14, uVar17, (undefined)uVar15, uVar20, uVar23, uVar24, uVar25,
	    in_stack_fffffe78);
	if (**(char **)(iVar13 + -0x77d8) == '\0') {
		*(undefined *)(*(int *)(iVar13 + -0x77a8) + **(int **)(iVar13 + -0x77ac) * 0x55ec + (uint) * *(byte **)(iVar13 + -0x77e4) + 0x1f0) = 1;
	} else {
		*(undefined *)(*(int *)(iVar13 + -0x77a8) + **(int **)(iVar13 + -0x77ac) * 0x55ec + (uint) * *(byte **)(iVar13 + -0x77e0) + 0x201) = 1;
	}
	return;
}

void LoadLevel(undefined8 uParm1, undefined8 uParm2, longlong lParm3, undefined8 uParm4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	int *piVar10;
	undefined *puVar11;
	undefined *puVar12;
	ulonglong uVar13;
	int iVar14;
	longlong lVar15;
	ulonglong uVar16;
	ulonglong uVar17;
	undefined8 uVar18;
	longlong lVar19;
	longlong lVar20;
	undefined uVar21;
	longlong lVar22;
	undefined uVar23;
	char cVar24;
	undefined uVar26;
	uint uVar25;
	undefined7 uVar27;
	undefined uVar28;
	undefined7 uVar29;
	undefined uVar30;
	undefined uVar31;
	undefined uVar32;
	undefined uVar33;
	undefined8 in_r13;
	ulonglong uVar34;
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
	undefined *puVar35;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	int iVar36;
	undefined8 unaff_r28;
	undefined4 *puVar37;
	uint *puVar38;
	int *piVar39;
	uint *puVar40;
	undefined8 unaff_r29;
	undefined *puVar41;
	undefined8 unaff_r30;
	int iVar42;
	int iVar43;
	int iVar44;
	undefined8 unaff_r31;
	longlong lVar45;
	undefined4 in_stack_fffffe68;
	char acStack344[268];
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

	puVar12 = PTR_DAT_100f1e90;
	puVar40 = (uint *)PTR_DAT_100f1e40;
	puVar11 = PTR_DAT_100f1e3c;
	piVar10 = _DAT_100f1dec;
	puVar9 = PTR_DAT_100f1a44;
	puVar8 = PTR_DAT_100f1a40;
	puVar7 = PTR_DAT_100f1a3c;
	puVar6 = PTR_DAT_100f19a4;
	puVar5 = PTR_DAT_100f19a0;
	puVar4 = PTR_DAT_100f1954;
	puVar3 = PTR_DAT_100f194c;
	puVar2 = PTR_DAT_100f1944;
	puVar41 = PTR_DAT_100f183c;
	puVar35 = PTR_DAT_100f1834;
	uVar30 = (undefined)uParm5;
	uVar29 = (undefined7)((ulonglong)uParm5 >> 8);
	uVar28 = (undefined)uParm4;
	uVar27 = (undefined7)((ulonglong)uParm4 >> 8);
	uVar13 = ZEXT48(&toc);
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
	uVar34 = (ulonglong)_DAT_100f1df0;
	GetPermLevelNames(acStack344, uParm2, lParm3, uParm4, uParm5, uParm6, uParm7, uParm8, in_stack_fffffe68);
	lVar22 = ZEXT48(register0x0000000c) - 0x54;
	lVar15 = pfile_read(ZEXT48(register0x0000000c) - 0x158, (uint *)lVar22, lParm3,
	    CONCAT71(uVar27, uVar28), CONCAT71(uVar29, uVar30), uParm6, uParm7, uParm8,
	    in_stack_fffffe68);
	*(undefined4 *)((int)uVar13 + -0x4df8) = (int)lVar15;
	if (*puVar41 != '\0') {
		iVar36 = 0;
		do {
			iVar42 = 0;
			iVar44 = 0;
			do {
				uVar16 = BLoad();
				iVar42 = iVar42 + 1;
				iVar43 = *(int *)puVar5 + iVar44;
				iVar44 = iVar44 + 0x70;
				*(undefined *)(iVar36 + iVar43) = (char)uVar16;
			} while (iVar42 < 0x70);
			iVar36 = iVar36 + 1;
		} while (iVar36 < 0x70);
		SetDead((char)uVar16, (char)lVar22, (char)lParm3, uVar28, uVar30, (char)uParm6, (char)uParm7,
		    (char)uParm8, in_stack_fffffe68);
	}
	uVar16 = WLoad();
	*(int *)puVar6 = (int)uVar16;
	uVar16 = WLoad();
	*piVar10 = (int)uVar16;
	uVar16 = WLoad();
	*(int *)puVar11 = (int)uVar16;
	if (*puVar41 != '\0') {
		iVar36 = 0;
		puVar37 = *(undefined4 **)((int)uVar13 + -0x7628);
		do {
			uVar16 = WLoad();
			iVar36 = iVar36 + 1;
			*puVar37 = (int)uVar16;
			puVar37 = puVar37 + 1;
		} while (iVar36 < 200);
		iVar36 = 0;
		puVar38 = *(uint **)((int)uVar13 + -0x7628);
		while (iVar36 < *(int *)puVar6) {
			LoadMonster((ulonglong)*puVar38, lVar22, lParm3, CONCAT71(uVar27, uVar28), CONCAT71(uVar29, uVar30), uParm6, uParm7, uParm8, in_stack_fffffe68);
			puVar38 = puVar38 + 1;
			iVar36 = iVar36 + 1;
		}
		iVar36 = 0;
		piVar39 = (int *)puVar40;
		do {
			uVar16 = BLoad();
			iVar36 = iVar36 + 1;
			*piVar39 = (int)(char)uVar16;
			piVar39 = piVar39 + 1;
		} while (iVar36 < 0x7f);
		iVar36 = 0;
		piVar39 = *(int **)((int)uVar13 + -0x7154);
		do {
			uVar16 = BLoad();
			iVar36 = iVar36 + 1;
			*piVar39 = (int)(char)uVar16;
			piVar39 = piVar39 + 1;
		} while (iVar36 < 0x7f);
		iVar36 = 0;
		piVar39 = (int *)puVar40;
		while (iVar36 < *(int *)puVar11) {
			LoadObject(*piVar39, (char)lVar22, (char)lParm3, uVar28, uVar30, (char)uParm6, (char)uParm7,
			    (char)uParm8, in_stack_fffffe68);
			piVar39 = piVar39 + 1;
			iVar36 = iVar36 + 1;
		}
		iVar36 = 0;
		while (iVar36 < *(int *)puVar11) {
			SyncObjectAnim((ulonglong)*puVar40);
			puVar40 = puVar40 + 1;
			iVar36 = iVar36 + 1;
		}
	}
	iVar36 = 0;
	uVar16 = uVar34;
	do {
		uVar17 = BLoad();
		iVar36 = iVar36 + 1;
		*(int *)uVar16 = (int)(char)uVar17;
		uVar16 = uVar16 + 4;
	} while (iVar36 < 0x7f);
	iVar36 = 0;
	piVar39 = *(int **)((int)uVar13 + -0x71f4);
	do {
		uVar16 = BLoad();
		iVar36 = iVar36 + 1;
		*piVar39 = (int)(char)uVar16;
		piVar39 = piVar39 + 1;
	} while (iVar36 < 0x7f);
	iVar36 = 0;
	while (iVar36 < *piVar10) {
		LoadItem(*(int *)uVar34, (char)lVar22, (char)lParm3, uVar28, uVar30, (char)uParm6, (char)uParm7,
		    (char)uParm8, in_stack_fffffe68);
		uVar34 = uVar34 + 4;
		iVar36 = iVar36 + 1;
	}
	iVar36 = 0;
	do {
		iVar42 = 0;
		iVar44 = 0;
		do {
			uVar34 = BLoad();
			iVar42 = iVar42 + 1;
			iVar43 = *(int *)puVar35 + iVar44;
			iVar44 = iVar44 + 0x70;
			*(undefined *)(iVar36 + iVar43) = (char)uVar34;
		} while (iVar42 < 0x70);
		iVar36 = iVar36 + 1;
	} while (iVar36 < 0x70);
	iVar36 = 0;
	do {
		iVar42 = 0;
		iVar44 = 0;
		do {
			uVar34 = BLoad();
			iVar14 = (int)uVar13;
			iVar42 = iVar42 + 1;
			iVar43 = *(int *)puVar2 + iVar44;
			iVar44 = iVar44 + 0x70;
			*(undefined *)(iVar36 + iVar43) = (char)uVar34;
		} while (iVar42 < 0x70);
		iVar36 = iVar36 + 1;
	} while (iVar36 < 0x70);
	if (*puVar41 != '\0') {
		iVar36 = 0;
		iVar44 = 0;
		do {
			iVar43 = 0;
			iVar42 = 0;
			do {
				uVar34 = WLoad();
				iVar43 = iVar43 + 1;
				iVar14 = *(int *)puVar4 + iVar42;
				iVar42 = iVar42 + 0xe0;
				*(undefined2 *)(iVar44 + iVar14) = (short)uVar34;
			} while (iVar43 < 0x70);
			iVar36 = iVar36 + 1;
			iVar44 = iVar44 + 2;
		} while (iVar36 < 0x70);
		iVar36 = 0;
		do {
			iVar42 = 0;
			iVar44 = 0;
			do {
				uVar34 = BLoad();
				iVar42 = iVar42 + 1;
				iVar43 = *(int *)puVar3 + iVar44;
				iVar44 = iVar44 + 0x70;
				*(undefined *)(iVar36 + iVar43) = (char)uVar34;
			} while (iVar42 < 0x70);
			iVar36 = iVar36 + 1;
		} while (iVar36 < 0x70);
		iVar36 = 0;
		do {
			iVar42 = 0;
			iVar44 = 0;
			do {
				uVar34 = BLoad();
				iVar42 = iVar42 + 1;
				iVar43 = *(int *)puVar9 + iVar44;
				iVar44 = iVar44 + 0x70;
				*(undefined *)(iVar36 + iVar43) = (char)uVar34;
			} while (iVar42 < 0x70);
			iVar36 = iVar36 + 1;
		} while (iVar36 < 0x70);
		iVar36 = 0;
		do {
			iVar42 = 0;
			iVar44 = 0;
			do {
				uVar34 = BLoad();
				iVar42 = iVar42 + 1;
				iVar43 = *(int *)puVar8 + iVar44;
				iVar44 = iVar44 + 0x70;
				*(undefined *)(iVar36 + iVar43) = (char)uVar34;
			} while (iVar42 < 0x70);
			iVar36 = iVar36 + 1;
		} while (iVar36 < 0x70);
		iVar36 = 0;
		puVar35 = *(undefined **)((int)uVar13 + -0x7798);
		do {
			iVar44 = 0;
			puVar41 = puVar35;
			do {
				uVar18 = OLoad();
				iVar14 = (int)uVar13;
				iVar44 = iVar44 + 1;
				*puVar41 = (char)uVar18;
				puVar41 = puVar41 + 0x28;
			} while (iVar44 < 0x28);
			iVar36 = iVar36 + 1;
			puVar35 = puVar35 + 1;
		} while (iVar36 < 0x28);
		lVar22 = 0;
		do {
			lVar45 = 7;
			lVar19 = 0;
			do {
				iVar44 = (int)lVar19;
				iVar36 = (int)lVar22;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44) = 0;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0x70) = 0;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0xe0) = 0;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0x150) = 0;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0x1c0) = 0;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0x230) = 0;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0x2a0) = 0;
				lVar20 = lVar19 + 0x380;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0x310) = 0;
				iVar44 = (int)lVar20;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44) = 0;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0x70) = 0;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0xe0) = 0;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0x150) = 0;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0x1c0) = 0;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0x230) = 0;
				*(undefined *)(iVar36 + *(int *)puVar7 + iVar44 + 0x2a0) = 0;
				lVar19 = lVar19 + 0x700;
				lParm3 = (ulonglong) * (uint *)puVar7 + lVar20 + 0x310;
				*(undefined *)(iVar36 + (int)lParm3) = 0;
				lVar45 = lVar45 + -1;
			} while (lVar45 != 0);
			lVar22 = lVar22 + 1;
		} while ((int)lVar22 < 0x70);
	}
	uVar18 = AutomapZoomReset();
	uVar33 = (undefined)uParm8;
	uVar32 = (undefined)uParm7;
	uVar31 = (undefined)uParm6;
	uVar26 = (undefined)lParm3;
	uVar23 = (undefined)lVar22;
	uVar21 = ResyncQuests(uVar18, lVar22, lParm3, CONCAT71(uVar27, uVar28), CONCAT71(uVar29, uVar30), uParm6,
	    uParm7, uParm8, in_stack_fffffe68);
	SyncPortals(uVar21, uVar23, uVar26, uVar28, uVar30, uVar31, uVar32, uVar33, in_stack_fffffe68);
	iVar36 = *(int *)(iVar14 + -0x77a8);
	**(undefined4 **)(iVar14 + -0x7168) = 1;
	bVar1 = **(byte **)(iVar14 + -0x77e4);
	uVar25 = (uint)bVar1;
	if ((*(char *)(iVar36 + 0x1d) != '\0') && (uVar25 == *(uint *)(iVar36 + 0x34))) {
		*(undefined4 *)(puVar12 + *(int *)(iVar36 + 0x9c) * 0x34 + 0x14) = 1;
	}
	if ((*(char *)(iVar36 + 0x5609) != '\0') && (uVar25 == *(uint *)(iVar36 + 0x5620))) {
		*(undefined4 *)(puVar12 + *(int *)(iVar36 + 0x5688) * 0x34 + 0x14) = 1;
	}
	if ((*(char *)(iVar36 + 0xabf5) != '\0') && (uVar25 == *(uint *)(iVar36 + 0xac0c))) {
		*(undefined4 *)(puVar12 + *(int *)(iVar36 + 0xac74) * 0x34 + 0x14) = 1;
	}
	cVar24 = *(char *)(iVar36 + 0x101e1);
	if ((cVar24 != '\0') && (cVar24 = (char)*(uint *)(iVar36 + 0x101f8), uVar25 == *(uint *)(iVar36 + 0x101f8))) {
		lVar22 = (ulonglong) * (uint *)(iVar36 + 0x10260) * 0x34 + 0x14;
		cVar24 = (char)lVar22;
		*(undefined4 *)(puVar12 + (int)lVar22) = 1;
	}
	mem_free_dbg(lVar15, cVar24, bVar1, uVar28, uVar30, uVar31, uVar32, uVar33, in_stack_fffffe68);
	return;
}
