typedef unsigned char undefined;

typedef unsigned char byte;
typedef long long longlong;
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned short ushort;

void FUN_10000000(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined4 in_stack_ffffffc8;

	FUN_10010668();
	FUN_100138ec();
	FUN_10014bfc();
	FUN_10015ac4();
	FUN_10015b5c();
	uVar1 = FUN_10015c7c();
	FUN_100174ac(uVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	tmsgcpp();
	towncpp();
	townercpp();
	trackcpp();
	trigscpp();
	FUN_100b8540();
	uVar1 = msgcmd(uVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	renderEnd();
	FUN_100c9f80();
	FUN_100cafe4();
	FUN_100cd854();
	FUN_100cf66c();
	FUN_100cffe4();
	return;
}

longlong FUN_100001dc(ulonglong param_1, ulonglong param_2, longlong param_3, ulonglong param_4,
    undefined8 param_5, ulonglong param_6)

{
	ulonglong uVar1;
	ulonglong uVar2;
	longlong lVar3;
	uint uVar5;
	ulonglong uVar4;
	uint uVar7;
	ulonglong uVar6;
	ulonglong uVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	longlong lVar11;
	ulonglong uVar12;
	longlong lVar13;
	bool bVar14;
	bool bVar15;

	uVar5 = (uint)param_1;
	lVar3 = countLeadingZeros(uVar5);
	uVar7 = (uint)param_2;
	lVar11 = countLeadingZeros(uVar7);
	if (uVar5 == 0) {
		lVar3 = lVar11 + 0x20;
	}
	lVar11 = countLeadingZeros((int)param_3);
	lVar13 = countLeadingZeros((int)param_4);
	if ((int)param_3 == 0) {
		lVar11 = lVar13 + 0x20;
	}
	if ((int)lVar3 <= (int)lVar11) {
		lVar13 = 0x40 - (lVar11 + 1);
		lVar11 = lVar3 + lVar13;
		lVar13 = (0x40 - lVar3) - lVar13;
		if ((int)lVar13 < 0x20) {
			uVar8 = 0x20U - lVar13 & 0xffffffff00000000;
			uVar9 = param_6 & 0xffffffff00000000 | (ulonglong)(uVar7 >> lVar13) | uVar8 | (ulonglong)(uVar5 << 0x20U - lVar13);
			uVar8 = uVar8 | (ulonglong)(uVar5 >> lVar13);
		} else {
			uVar9 = param_6 & 0xffffffff00000000 | (ulonglong)(uVar5 >> lVar13 + -0x20);
			uVar8 = 0;
		}
		if ((int)lVar11 < 0x20) {
			uVar4 = param_1 & 0xffffffff00000000 | (ulonglong)(uVar5 << lVar11) | 0x20U - lVar11 & 0xffffffff00000000 | (ulonglong)(uVar7 >> 0x20U - lVar11);
			uVar6 = param_2 & 0xffffffff00000000 | (ulonglong)(uVar7 << lVar11);
		} else {
			uVar4 = param_1 & 0xffffffff00000000 | (ulonglong)(uVar7 << lVar11 + -0x20);
			uVar6 = 0;
		}
		bVar14 = false;
		do {
			bVar15 = CARRY8(uVar6, (ulonglong)bVar14);
			uVar1 = uVar6 + (ulonglong)bVar14;
			bVar14 = CARRY8(uVar6, uVar1);
			uVar6 = uVar6 + uVar1;
			uVar1 = (ulonglong)(bVar15 || bVar14);
			bVar15 = CARRY8(uVar4, uVar1);
			uVar1 = uVar4 + uVar1;
			bVar14 = CARRY8(uVar4, uVar1);
			uVar4 = uVar4 + uVar1;
			uVar1 = (ulonglong)(bVar15 || bVar14);
			uVar2 = uVar9 + uVar1;
			uVar10 = uVar9 + uVar2;
			uVar1 = uVar8 * 2 + (ulonglong)(CARRY8(uVar9, uVar1) || CARRY8(uVar9, uVar2));
			uVar2 = (ulonglong)(uVar10 < param_4) + param_3;
			uVar12 = uVar1 - uVar2;
			uVar8 = uVar1;
			uVar9 = uVar10;
			if (-1 < (longlong)uVar12) {
				uVar8 = uVar12;
				uVar9 = uVar10 - param_4;
			}
			bVar14 = -1 < (longlong)uVar12 || uVar2 <= uVar1;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		return uVar4 * 2 + (ulonglong)(CARRY8(uVar6, (ulonglong)bVar14) || CARRY8(uVar6, uVar6 + (ulonglong)bVar14));
	}
	return 0;
}

void entry(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined8 uVar1;
	undefined uVar2;
	undefined4 in_stack_ffffffc8;

	FUN_100003dc();
	uVar2 = 0xf8;
	uVar1 = FUN_10016be0(0, 0xf8, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	FUN_10000520((char)uVar1, uVar2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	FUN_100d9148(0, uVar2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

undefined8
FUN_10002634(int param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined8 uVar1;
	undefined4 in_stack_fffffd98;
	byte abStack564[512];
	undefined auStack52[20];
	ushort local_20;

	strcpy((int)abStack564, param_1);
	uVar1 = FUN_100028c0(abStack564, (int)auStack52, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_fffffd98);
	if ((int)uVar1 == 0) {
		uVar1 = 0;
	} else {
		if (local_20 == 1) {
			uVar1 = 0;
		} else {
			if (local_20 < 4) {
				uVar1 = 1;
			} else {
				if (local_20 < 6) {
					uVar1 = 2;
				} else {
					if (local_20 < 8) {
						uVar1 = 3;
					} else {
						if (local_20 < 10) {
							uVar1 = 4;
						} else {
							if (local_20 < 0xd) {
								uVar1 = 5;
							} else {
								if (local_20 < 0x11) {
									uVar1 = 6;
								} else {
									if (local_20 < 0x14) {
										uVar1 = 7;
									} else {
										if (local_20 < 0x19) {
											uVar1 = 8;
										} else {
											if (local_20 < 0x1e) {
												uVar1 = 9;
											} else {
												if (local_20 < 0x23) {
													uVar1 = 10;
												} else {
													if (local_20 < 0x28) {
														uVar1 = 0xb;
													} else {
														if (local_20 < 0x30) {
															uVar1 = 0xc;
														} else {
															uVar1 = 0xd;
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
		}
	}
	return uVar1;
}

undefined8
FUN_100028c0(byte *param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined8 uVar1;
	int iVar2;
	ulonglong uVar3;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	int local_6c;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	int local_38;
	undefined4 local_34;
	int local_30;
	int local_2c;
	int local_28;
	int local_24;
	uint local_20;
	uint local_1c;
	uint local_18[6];

	uVar3 = (ulonglong)param_1[3] << 0x18 | (ulonglong)param_1[2] << 0x10 | (ulonglong)param_1[1] << 8
	    | (ulonglong)*param_1;
	memset((char)param_2, 0x2c, param_3, param_4, param_5, param_6, param_7, param_8,
	    (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	if ((*param_1 == 0) || ((((uVar3 - 0x44520000 & 0xffffffff) != 0x544c && ((uVar3 - 0x44530000 & 0xffffffff) != 0x4852)) && ((uVar3 - 0x44540000 & 0xffffffff) != 0x5354)))) {
		uVar1 = 0;
	} else {
		iVar2 = FUN_100d7c60((char *)(param_1 + 4), *(uint *)(local_6c + -0x6d94), local_18, &local_1c,
		    &local_20, &local_24, &local_28, &local_2c, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
		if (iVar2 == 9) {
			if (((uVar3 - 0x44520000 & 0xffffffff) == 0x544c) && (local_38 != 0)) {
				uVar1 = 0;
			} else {
				if (((uVar3 - 0x44530000 & 0xffffffff) == 0x4852) && (local_38 == 0)) {
					uVar1 = 0;
				} else {
					if (local_18[0] == 0) {
						uVar1 = 0;
					} else {
						if (local_18[0] < 100) {
							if (local_1c < 3) {
								if (local_20 < 4) {
									if (((local_24 < 0) || (local_28 < 0)) || ((local_2c < 0 || (local_30 < 0)))) {
										uVar1 = 0;
									} else {
										*(undefined2 *)(param_2 + 0x14) = (short)local_18[0];
										uVar1 = 1;
										*(undefined *)(param_2 + 0x16) = (char)local_1c;
										*(undefined *)(param_2 + 0x17) = (char)local_20;
										*(ushort *)(param_2 + 0x18) = (ushort)local_24 & 0xff;
										*(ushort *)(param_2 + 0x1a) = (ushort)local_28 & 0xff;
										*(ushort *)(param_2 + 0x1c) = (ushort)local_2c & 0xff;
										*(ushort *)(param_2 + 0x1e) = (ushort)local_30 & 0xff;
										*(undefined4 *)(param_2 + 0x20) = local_34;
										*(int *)(param_2 + 0x28) = local_38;
									}
								} else {
									uVar1 = 0;
								}
							} else {
								uVar1 = 0;
							}
						} else {
							uVar1 = 0;
						}
					}
				}
			}
		} else {
			uVar1 = 0;
		}
	}
	return uVar1;
}

void FUN_10002bac(int param_1, undefined8 param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined **ppuVar1;
	undefined uVar2;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined **local_2c;

	ppuVar1 = &toc;
	uVar2 = param_4;
	if (param_1 != 0) {
		uVar2 = param_4;
		ppuVar1 = local_2c;
		SStrCopy((char)param_1, (char)_DAT_100f2234, (undefined)param_2, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		local_2c = ppuVar1;
	}
	if (param_3 != 0) {
		SStrCopy((char)param_3, (char)ppuVar1[-0x1b62], param_4, uVar2, param_5, param_6, param_7,
		    param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	}
	return;
}

void FUN_10003dec(undefined4 param_1)

{
	_DAT_100f3cdc = param_1;
	return;
}

void FUN_10005a08(undefined4 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined4 uVar3;
	undefined4 uVar4;
	undefined4 uVar5;
	int iVar6;
	char cVar7;
	undefined **ppuVar8;
	ulonglong uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;

	uVar9 = ZEXT48(register0x0000000c);
	ppuVar8 = &toc;
	iVar6 = (int)(uVar9 - 0x120);
	*(BADSPACEBASE **)iVar6 = register0x0000000c;
	uVar11 = 0;
	FUN_10002bac(iVar6 + 0x38, 0x80, 0, 0, param_5, param_6, param_7, param_8, *(undefined4 *)(iVar6 + 8));
	cVar7 = (char)(uVar9 - 0x120);
	uVar10 = 0x50;
	memcpy(cVar7 + -0x38, (char)ppuVar8[-0x14a9], 0x50, uVar11, param_5, param_6, param_7, param_8,
	    *(undefined *)(iVar6 + 0xb), *(undefined *)(iVar6 + 0xf), *(undefined4 *)(iVar6 + 0x14));
	*(undefined4 *)(iVar6 + 200) = 0x50;
	*(undefined4 *)(iVar6 + 0xd0) = param_1;
	memset(cVar7 + -0x48, 0x10, uVar10, uVar11, param_5, param_6, param_7, param_8,
	    *(undefined *)(iVar6 + 0xb), *(undefined *)(iVar6 + 0xf), *(undefined4 *)(iVar6 + 0x14));
	iVar1 = *(int *)(iVar6 + 0x14);
	iVar2 = *(int *)(iVar1 + -0x529c);
	*(undefined4 *)(iVar6 + 0xb8) = 0x10;
	uVar3 = *(undefined4 *)(iVar1 + -0x52a0);
	uVar10 = (undefined)uVar3;
	*(undefined4 *)(iVar6 + 0xbc) = 0x5343424c;
	uVar4 = *(undefined4 *)(iVar1 + -0x52a8);
	uVar12 = (undefined)uVar4;
	uVar5 = *(undefined4 *)(iVar1 + -0x52ac);
	uVar13 = (undefined)uVar5;
	uVar15 = (undefined)(uVar9 - 0xe8);
	*(undefined4 *)(iVar6 + 0xc0) = *(undefined4 *)(iVar2 + 0x18);
	uVar11 = (undefined)(uVar9 - 0x58);
	uVar14 = 0;
	*(undefined4 *)(iVar6 + 0xc4) = 0;
	uVar9 = FUN_10004614(iVar6 + 0xb8, iVar2, uVar3, uVar9 - 0x58, uVar4, uVar5, 0, (int)(uVar9 - 0xe8),
	    *(undefined4 *)(iVar6 + 8), *(undefined *)(iVar6 + 0xf),
	    *(undefined4 *)(iVar6 + 0x28));
	if ((int)uVar9 != 0) {
		FUN_100059a0(param_1, 1, uVar10, uVar11, uVar12, uVar13, uVar14, uVar15, *(undefined4 *)(iVar6 + 8));
	}
	return;
}

ulonglong FUN_10007b20(void)

{
	uint uVar1;

	uVar1 = 0;
	if ((_DAT_100f3d60 != 0) && (_DAT_100f3d64 < 6)) {
		uVar1 = 1;
	}
	return (ulonglong)uVar1;
}

void FUN_10007b48(undefined4 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	undefined **ppuVar1;
	ulonglong uVar2;

	ppuVar1 = &toc;
	uVar2 = FUN_10007b20();
	if ((int)uVar2 != 0) {
		ppuVar1[-0x149c] = (undefined *)0x0;
	}
	return;
}

void FUN_10007bf0(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	if (_DAT_100f3d60 == 0) {
		FUN_100da3e4(param_1, 0x10, 0x32, (char)_DAT_100f2484, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		*(undefined4 *)(local_2c + -0x5270) = 1;
	}
	return;
}

void FUN_10007c40(undefined *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	if ((_DAT_100f3d70 != 0) && (param_1 != _DAT_100f3d74)) {
		if (_DAT_100f3d78 != 0) {
			ppuVar1 = &toc;
			FUN_10015b14((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
		ppuVar1[-0x1497] = param_1;
	}
	return;
}

ulonglong FUN_10007c94(void)

{
	if (_DAT_100f3d70 == 0) {
		return 0;
	}
	return (ulonglong)*_DAT_100f2498;
}

void FUN_10008128(void)

{
	_DAT_100f3d74 = 0;
	_DAT_100f3d78 = 0;
	return;
}

void FUN_10008254(undefined8 param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;
	undefined uVar2;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	uVar2 = (undefined)in_stack_ffffffc8;
	ppuVar1 = &toc;
	FUN_10008138(param_2, (char)param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	FUN_100da3e4((undefined)param_1, 1, 0x37, (char)ppuVar1[-0x1ad1], param_5, param_6, param_7, param_8,
	    uVar2, in_stack_ffffffcf, local_2c);
	return;
}

longlong FUN_100082d4(int param_1)

{
	return ZEXT48(PTR_DAT_100f24c4) + (ulonglong)(uint)(param_1 << 2);
}

void FUN_100082e4(undefined *param_1)

{
	longlong lVar1;

	lVar1 = 0x10;
	do {
		*param_1 = 0;
		param_1[1] = 0;
		param_1[2] = 0;
		param_1[4] = 0;
		param_1[5] = 0;
		param_1[6] = 0;
		param_1[8] = 0;
		param_1[9] = 0;
		param_1[10] = 0;
		param_1[0xc] = 0;
		param_1[0xd] = 0;
		param_1[0xe] = 0;
		param_1[0x10] = 0;
		param_1[0x11] = 0;
		param_1[0x12] = 0;
		param_1[0x14] = 0;
		param_1[0x15] = 0;
		param_1[0x16] = 0;
		param_1[0x18] = 0;
		param_1[0x19] = 0;
		param_1[0x1a] = 0;
		param_1[0x1c] = 0;
		param_1[0x1d] = 0;
		param_1[0x1e] = 0;
		param_1[0x20] = 0;
		param_1[0x21] = 0;
		param_1[0x22] = 0;
		param_1[0x24] = 0;
		param_1[0x25] = 0;
		param_1[0x26] = 0;
		param_1[0x28] = 0;
		param_1[0x29] = 0;
		param_1[0x2a] = 0;
		param_1[0x2c] = 0;
		param_1[0x2d] = 0;
		param_1[0x2e] = 0;
		param_1[0x30] = 0;
		param_1[0x31] = 0;
		param_1[0x32] = 0;
		param_1[0x34] = 0;
		param_1[0x35] = 0;
		param_1[0x36] = 0;
		param_1[0x38] = 0;
		param_1[0x39] = 0;
		param_1[0x3a] = 0;
		param_1[0x3c] = 0;
		param_1[0x3d] = 0;
		param_1[0x3e] = 0;
		param_1 = param_1 + 0x40;
		lVar1 = lVar1 + -1;
	} while (lVar1 != 0);
	return;
}

void FUN_10008520(undefined8 param_1, undefined4 *param_2, undefined4 *param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_100083e4(param_1, param_2, param_3, 0, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_10008544(undefined8 param_1, undefined4 *param_2, undefined4 *param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_100083e4(param_1, param_2, param_3, 1, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_10008750(int *param_1, int param_2, int param_3)

{
	param_1[2] = param_1[2] - *param_1;
	param_1[2] = param_2 + param_1[2] + -1;
	*param_1 = param_2;
	param_1[3] = param_1[3] - param_1[1];
	param_1[3] = param_3 + param_1[3] + -1;
	param_1[1] = param_3;
	return;
}

void FUN_1000908c(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	puVar1 = (undefined4 *)
	    SMemAlloc(0x10, (char)_DAT_100f24c0, 0xe, 0, param_5, param_6, param_7, param_8,
	        in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	if (puVar1 != (undefined4 *)0x0) {
		*puVar1 = 0;
		puVar1[1] = 0;
		puVar1[2] = 0;
		puVar1[3] = 0;
		*(undefined *)(puVar1 + 4) = 0;
	}
	return;
}

void FUN_100090e0(int *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	if (param_1 != (int *)0x0) {
		uVar1 = (undefined)_DAT_100f24c0;
		if (*param_1 != 0) {
			SMemFree((char)*param_1, uVar1, 0x20, 0, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
			    in_stack_ffffffcf, local_2c);
		}
		SMemFree((char)param_1, uVar1, 0x21, 0, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
	}
	return;
}

void FUN_10009150(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	if (param_1 != 0) {
		if (param_2 == 0) {
			*(undefined *)(param_1 + 0x10) = 0;
		} else {
			strncpy(param_1 + 0x10, param_2, 0xff);
			*(undefined *)(param_1 + 0x10f) = 0;
		}
	}
	return;
}

void FUN_100091a4(void)

{
	char cVar1;
	int *piVar2;
	char *pcVar3;
	undefined *puVar4;
	int iVar5;

	piVar2 = _DAT_100f24a4;
	if (_DAT_100f3d88 == (undefined *)0x0) {
		return;
	}
	if (_DAT_100f3d8c == (char *)0x0) {
		return;
	}
	iVar5 = 0;
	pcVar3 = _DAT_100f3d8c;
	puVar4 = _DAT_100f3d88;
	while (iVar5 < *piVar2 * piVar2[1]) {
		cVar1 = *pcVar3;
		pcVar3 = pcVar3 + 1;
		if (cVar1 == '\0') {
			*puVar4 = 0xff;
		} else {
			*puVar4 = 0;
		}
		puVar4 = puVar4 + 1;
		iVar5 = iVar5 + 1;
	}
	return;
}

void FUN_100094cc(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	FUN_100da3e4(param_1, 3, (char)_DAT_100f3d98 * -0x18, 0, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

ulonglong FUN_10009ab8(void)

{
	return (ulonglong)_DAT_100f3dcc;
}

longlong FUN_10009c4c(void)

{
	return ZEXT48(PTR_DAT_100f251c) + 4;
}

ulonglong FUN_1000a0a4(void)

{
	return (ulonglong)_DAT_100f3dac;
}

ulonglong FUN_1000a0ac(void)

{
	return (ulonglong)_DAT_100f3dc4;
}

void FUN_1000b94c(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11, undefined4 param_12)

{
	_DAT_100f3df4 = 1;
	_DAT_100f3df8 = 2;
	return;
}

void FUN_1000b9e4(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined4 in_stack_ffffffc8;

	iVar1 = FUN_100dbf44(param_1, param_2);
	if (iVar1 < 100) {
		FUN_1000b4e8(param_1, (char)iVar1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	} else {
		FUN_1000b968(param_1, (char)iVar1, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

void FUN_1000c868(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	SMemAlloc(0x10, (char)_DAT_100f261c, 0x80, 0, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	return;
}

void FUN_1000c89c(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	if (param_1 != 0) {
		SMemFree((char)param_1, (char)_DAT_100f261c, 0x86, 0, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	}
	return;
}

void FUN_1000c8d4(undefined4 *param_1, char param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined4 in_stack_ffffffc8;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	lVar2 = (longlong)param_2;
	while (param_1 != (undefined4 *)0x0) {
		puVar1 = (undefined4 *)*param_1;
		FUN_1000c89c((int)param_1, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
		    (char)lVar7, (char)lVar8, in_stack_ffffffc8);
		param_1 = puVar1;
	}
	return;
}

undefined4 *FUN_1000c910(undefined4 param_1, undefined4 *param_2)

{
	*param_2 = param_1;
	return param_2;
}

void FUN_1000cde0(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	lVar2 = FUN_1000cd48((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	FUN_1000bee8(param_1, 0x451, ppuVar1[-0x145f], (int)lVar2, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

undefined4 *FUN_1000d038(int param_1)

{
	undefined4 *puVar1;

	puVar1 = _DAT_100f3e58;
	while ((puVar1 != (undefined4 *)0x0 && (param_1 != 0))) {
		puVar1 = (undefined4 *)*puVar1;
		param_1 = param_1 + -1;
	}
	return puVar1;
}

void FUN_1000dc58(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	longlong lVar1;
	ulonglong uVar2;
	int iVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	lVar1 = FUN_1000da0c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	if ((int)lVar1 == 0) {
		lVar1 = SErrGetLastError((char)lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		if ((lVar1 + 0x7af00000U & 0xffffffff) == 0x77) {
			*(undefined4 *)(local_2c + -0x5194) = 1;
			FUN_1000d8d8((int)param_1, 0, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		} else {
			uVar2 = FUN_1000ed28();
			iVar3 = (int)uVar2;
			if (iVar3 == 0x4d4f444d) {
				uVar2 = SErrGetLastError((char)uVar2, 0, param_3, param_4, param_5, param_6, param_7, param_8,
				    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
				if ((uVar2 & 0xffffffff) == 0x4c6) {
					FUN_1000dbe4(param_1, 0x2e, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffffc8);
				} else {
					FUN_1000dbe4(param_1, 0x35, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffffc8);
				}
			} else {
				if (iVar3 < 0x4d4f444d) {
					if (iVar3 != 0x4950584e) {
						if (0x4950584d < iVar3) {
							return;
						}
						if (iVar3 != 0x41544c4b) {
							return;
						}
					}
				} else {
					if (iVar3 != 0x5343424c) {
						return;
					}
				}
				FUN_1000dbe4(param_1, 0x2c, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			}
		}
	} else {
		FUN_1000d8d8((int)param_1, 1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void FUN_1000ed10(undefined4 param_1)

{
	_DAT_100f3e70 = param_1;
	return;
}

void FUN_1000efcc(undefined4 *param_1, char param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined4 in_stack_ffffffc8;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	lVar2 = (longlong)param_2;
	while (param_1 != (undefined4 *)0x0) {
		puVar1 = (undefined4 *)*param_1;
		FUN_1000ef94((int)param_1, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
		    (char)lVar7, (char)lVar8, in_stack_ffffffc8);
		param_1 = puVar1;
	}
	return;
}

undefined4 *FUN_1000f008(undefined4 param_1, undefined4 *param_2)

{
	*param_2 = param_1;
	return param_2;
}

undefined4 *
FUN_1000f014(undefined4 *param_1, byte *param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	ulonglong uVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	undefined4 *puVar11;
	undefined4 *puVar12;
	undefined4 *puVar13;
	undefined4 in_stack_ffffffb8;

	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	lVar4 = (longlong)(int)param_2;
	puVar1 = param_1;
	puVar2 = (undefined4 *)0x0;
	puVar12 = (undefined4 *)0;
	while ((puVar11 = puVar2, puVar13 = puVar1, puVar13 != (undefined4 *)0x0 && (puVar11 == (undefined4 *)0x0))) {
		lVar4 = (longlong)(int)param_2;
		uVar3 = strcmp((byte *)(puVar13 + 1), param_2);
		puVar1 = puVar13;
		puVar2 = puVar13;
		if ((int)uVar3 != 0) {
			puVar1 = (undefined4 *)*puVar13;
			puVar2 = puVar11;
			puVar12 = puVar13;
		}
	}
	if (puVar11 != (undefined4 *)0x0) {
		if (puVar12 == (undefined4 *)0x0) {
			param_1 = (undefined4 *)*puVar11;
		} else {
			*puVar12 = *puVar11;
		}
		FUN_1000ef94((int)puVar11, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
		    (char)lVar9, (char)lVar10, in_stack_ffffffb8);
	}
	return param_1;
}

undefined4 *
FUN_1000f0b0(undefined4 *param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	ulonglong uVar8;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	uVar8 = SEXT48((int)param_1);
	while (((uVar8 & 0xffffffff) != 0 && (iVar1 = _stricmp((char)uVar8 + '\x04', param_2, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, in_stack_ffffffcb, in_stack_ffffffcf, local_2c), iVar1 != 0))) {
		uVar8 = (ulonglong) * (uint *)uVar8;
	}
	return (uint *)uVar8;
}

ulonglong FUN_1000f340(void)

{
	return (ulonglong)_DAT_100f3eb4;
}

void FUN_1000f6a8(char *param_1)

{
	while (true) {
		if (*param_1 == '\0')
			break;
		*param_1 = *param_1 + -1;
		param_1 = param_1 + 1;
	}
	return;
}

undefined8
FUN_1000f75c(byte *param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	byte bVar1;
	byte *pbVar3;
	undefined8 uVar2;

	pbVar3 = FUN_100d7da8((int)param_1, _DAT_100f267c);
	if (pbVar3 == (byte *)0x0) {
		pbVar3 = FUN_100d7da8((int)param_1, param_2);
		if (pbVar3 == (byte *)0x0) {
			while (bVar1 = *param_1, bVar1 != 0) {
				if (bVar1 < 0x20) {
					return 1;
				}
				if ((0x7e < bVar1) && (bVar1 < 0xc0)) {
					return 1;
				}
				param_1 = param_1 + 1;
			}
			uVar2 = 0;
		} else {
			uVar2 = 1;
		}
	} else {
		uVar2 = 1;
	}
	return uVar2;
}

ulonglong FUN_10010454(byte *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	int iVar3;
	undefined8 uVar2;
	ulonglong uVar4;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	iVar3 = strlen((uint)param_1);
	uVar4 = (ulonglong)(iVar3 != 0);
	if ((ppuVar1[-0x1447] == (undefined *)0x1) && ((uVar2 = FUN_1000f6b8((int)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8), (int)uVar2 != 0 || (uVar2 = FUN_1000f75c(param_1, (int)ppuVar1[-0x1a61], param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8), (int)uVar2 != 0)))) {
		uVar4 = 0;
	}
	return uVar4;
}

void FUN_10010668(void)

{
	_DAT_100f3ebc = _DAT_100f3e7c;
	return;
}

undefined4 *FUN_1001071c(undefined4 *param_1, undefined4 *param_2)

{
	undefined4 *puVar1;
	undefined4 *puVar2;

	puVar2 = (undefined4 *)0x0;
	puVar1 = param_1;
	while (puVar1 != (undefined4 *)0x0) {
		puVar2 = puVar1;
		puVar1 = (undefined4 *)*puVar1;
	}
	*param_2 = 0;
	if (puVar2 != (undefined4 *)0x0) {
		*(undefined4 **)puVar2 = param_2;
		return param_1;
	}
	return param_2;
}

void FUN_10010768(undefined4 *param_1, int param_2)

{
	while (true) {
		if (param_1 == (undefined4 *)0x0) {
			return;
		}
		if (param_1[1] == param_2)
			break;
		param_1 = (undefined4 *)*param_1;
	}
	return;
}

undefined4 *
FUN_10010774(undefined4 *param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	ulonglong uVar8;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	uVar8 = SEXT48((int)param_1);
	while (((uVar8 & 0xffffffff) != 0 && (iVar1 = _stricmp((char)uVar8 + '\f', param_2, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, in_stack_ffffffcb, in_stack_ffffffcf, local_2c), iVar1 != 0))) {
		uVar8 = (ulonglong) * (uint *)uVar8;
	}
	return (uint *)uVar8;
}

void FUN_100107d4(undefined4 *param_1)

{
	while (param_1 != (undefined4 *)0x0) {
		param_1[2] = 0;
		param_1 = (undefined4 *)*param_1;
	}
	return;
}

undefined4 *
FUN_100107f0(undefined4 *param_1, char param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	undefined4 *puVar2;
	ulonglong uVar3;
	undefined4 *puVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	undefined4 *puVar12;
	undefined4 in_stack_ffffffc8;

	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	lVar5 = (longlong)param_2;
	uVar3 = ZEXT48(&toc);
	puVar2 = param_1;
	puVar12 = (undefined4 *)0x0;
	while (puVar4 = puVar2, puVar4 != (undefined4 *)0x0) {
		if ((puVar4[2] == 0) && (puVar4[1] != 0)) {
			if (puVar12 == (undefined4 *)0x0) {
				param_1 = (undefined4 *)*puVar4;
			} else {
				*puVar12 = *puVar4;
			}
			FUN_100106a8((int)puVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
			    (char)lVar10, (char)lVar11, in_stack_ffffffc8);
			iVar1 = (int)uVar3;
			*(undefined4 *)(iVar1 + -0x50f8) = 1;
			*(int *)(iVar1 + -0x50f4) = *(int *)(iVar1 + -0x50f4) + -1;
			if (puVar12 == (undefined4 *)0x0) {
				puVar2 = (undefined4 *)*param_1;
			} else {
				puVar2 = (undefined4 *)*puVar12;
			}
		} else {
			puVar2 = (undefined4 *)*puVar4;
			puVar12 = puVar4;
		}
	}
	return param_1;
}


void FUN_10010d1c(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	lVar2 = FUN_10010c84((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	FUN_1000bee8(param_1, 0x451, ppuVar1[-0x143d], (int)lVar2, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

undefined4 *FUN_10011108(int param_1)

{
	undefined4 *puVar1;

	puVar1 = _DAT_100f3ee0;
	while ((puVar1 != (undefined4 *)0x0 && (param_1 != 0))) {
		puVar1 = (undefined4 *)*puVar1;
		param_1 = param_1 + -1;
	}
	return puVar1;
}

void FUN_10011bac(undefined8 uParm1)

{
	undefined *puVar1;
	char cVar2;
	undefined *puVar3;
	ulonglong uVar4;
	undefined4 *puVar5;
	undefined uVar7;
	longlong lVar6;
	undefined uVar8;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar9;

	puVar3 = PTR_s__s__d_100f26b0;
	uVar8 = 0;
	lVar9 = ZEXT48(register0x0000000c) - 0x150;
	puVar1 = (undefined *)lVar9;
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	FUN_10002bac((int)(puVar1 + 0xb8), 0x80, 0, 0, (char)in_r7, (char)in_r8, (char)in_r9, (char)in_r10,
	    *(undefined4 *)(puVar1 + 8));
	cVar2 = (char)lVar9;
	uVar7 = 0x80;
	ConvertText_WindowsToMac(cVar2 + -0x48, cVar2 + '8', 0x80, uVar8, (char)in_r7, (char)in_r8, (char)in_r9, (char)in_r10,
	    puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	uVar4 = (ulonglong) * (uint *)(puVar1 + 0x14);
	strcpy(puVar1 + 0xb8, puVar1 + 0x38, *puVar1);
	puVar5 = FUN_10010774(*(undefined4 **)((int)uVar4 + -0x50f0), cVar2 + -0x48, uVar7, uVar8, (char)in_r7, (char)in_r8, (char)in_r9, (char)in_r10, *(undefined4 *)(puVar1 + 8));
	if (puVar5 == (undefined4 *)0x0) {
		strcpy((int)uParm1, puVar1 + 0xb8, *puVar1);
	} else {
		lVar9 = 2;
		do {
			uVar8 = (undefined)lVar9;
			lVar6 = ZEXT48(register0x0000000c) - 0x98;
			uVar7 = (undefined)lVar6;
			sprintf((int)uParm1, puVar3, (int)lVar6, (int)lVar9, in_r7, in_r8, in_r9, in_r10,
			    *(undefined4 *)(puVar1 + 8), puVar1[0xf], *(undefined4 *)(puVar1 + 0x1c),
			    *(undefined4 *)(puVar1 + 0x20), *(undefined4 *)(puVar1 + 0x24),
			    *(undefined4 *)(puVar1 + 0x28), *(undefined4 *)(puVar1 + 0x2c),
			    *(undefined4 *)(puVar1 + 0x30), *(undefined4 *)(puVar1 + 0x34));
			puVar5 = FUN_10010774(*(undefined4 **)((int)uVar4 + -0x50f0), (char)uParm1, uVar7, uVar8,
			    (char)in_r7, (char)in_r8, (char)in_r9, (char)in_r10,
			    *(undefined4 *)(puVar1 + 8));
			lVar9 = lVar9 + 1;
		} while (puVar5 != (undefined4 *)0x0);
	}
	return;
}

void FUN_100138ec(void)

{
	_DAT_100f3efc = _DAT_100f3ef8;
	return;
}

void FUN_100138f8(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	SMemAlloc(8, (char)_DAT_100f2780, 0x52, 0, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	return;
}

void FUN_1001392c(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	if (param_1 != 0) {
		SMemFree((char)param_1, (char)_DAT_100f2780, 0x57, 0, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	}
	return;
}

void FUN_10013964(undefined4 *param_1, char param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined4 in_stack_ffffffc8;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	lVar2 = (longlong)param_2;
	while (param_1 != (undefined4 *)0x0) {
		puVar1 = (undefined4 *)*param_1;
		FUN_1001392c((int)param_1, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
		    (char)lVar7, (char)lVar8, in_stack_ffffffc8);
		param_1 = puVar1;
	}
	return;
}

undefined4 *FUN_100139a0(undefined4 param_1, undefined4 *param_2)

{
	*param_2 = param_1;
	return param_2;
}

undefined4 *FUN_10013dc0(int param_1)

{
	undefined4 *puVar1;

	puVar1 = _DAT_100f3f1c;
	while ((puVar1 != (undefined4 *)0x0 && (param_1 != 0))) {
		puVar1 = (undefined4 *)*puVar1;
		param_1 = param_1 + -1;
	}
	return puVar1;
}

ulonglong FUN_10014a34(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	if (param_1 == 0x4d4f444d) {
		SErrSetLastError(0xc6, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
	}
	return (ulonglong)(param_1 != 0x4d4f444d);
}

ulonglong FUN_10014a74(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	int iVar2;
	undefined uVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	ppuVar1 = &toc;
	uVar3 = (undefined) * (undefined4 *)(_DAT_100f3f1c + 4);
	iVar2 = FUN_100149bc((char)*(undefined4 *)(_DAT_100f3f08 + 8), uVar3, param_3, param_4, param_5,
	    param_6, param_7, param_8, in_stack_ffffffc8);
	if (iVar2 == 0) {
		SErrSetLastError(0x71, uVar3, param_3, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	} else {
		FUN_10013964((undefined4 *)ppuVar1[-0x142d], uVar3, param_3, param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffc8);
	}
	return (ulonglong)(iVar2 != 0);
}

void FUN_10014b78(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
    undefined4 param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	uVar6 = (undefined)param_5;
	uVar5 = (undefined)param_4;
	uVar4 = (undefined)param_3;
	uVar3 = (undefined)param_2;
	_DAT_100f3f1c = 0;
	_DAT_100f3f18 = 0;
	_DAT_100f3f04 = param_5;
	_DAT_100f3f08 = param_4;
	_DAT_100f3f0c = param_3;
	_DAT_100f3f10 = param_2;
	uVar2 = SNetEnumDevices((char)_DAT_100f2730, uVar3, uVar4, uVar5, uVar6, param_6, param_7, param_8,
	    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	iVar1 = *(int *)(local_2c + -0x50b8);
	if (iVar1 == 1) {
		FUN_10014a74(uVar2, uVar3, uVar4, uVar5, uVar6, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		if ((iVar1 < 1) && (-1 < iVar1)) {
			FUN_10014a34(param_1, uVar3, uVar4, uVar5, uVar6, param_6, param_7, param_8, in_stack_ffffffc8);
		} else {
			FUN_10014ad0(uVar2, uVar3, uVar4, uVar5, uVar6, param_6, param_7, param_8, in_stack_ffffffc8);
		}
	}
	return;
}

void FUN_10014bfc(void)

{
	_DAT_100f3f20 = _DAT_100f3f00;
	return;
}

void FUN_10015678(undefined4 param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined uVar2;
	undefined uVar3;
	undefined4 in_stack_ffffffc8;
	undefined uVar4;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;
	undefined4 in_stack_ffffffd8;

	uVar3 = (undefined)param_2;
	ppuVar1 = &toc;
	uVar2 = (undefined)param_1;
	FUN_10015448(uVar2, uVar3, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	FUN_10015554(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8,
	    in_stack_ffffffcf, in_stack_ffffffd8);
	uVar4 = (undefined)in_stack_ffffffc8;
	FUN_1001519c(uVar2, uVar3, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	FUN_100da3e4(uVar2, 2, 0x37, (char)ppuVar1[-0x1a02], param_5, param_6, param_7, param_8, uVar4,
	    in_stack_ffffffcf, local_2c);
	return;
}

void FUN_10015ac4(void)

{
	_DAT_100f3f48 = _DAT_100f3f40;
	return;
}

undefined FUN_10015ad0(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	if (_DAT_100f3f50 != 0) {
		param_1 = FUN_100dbf44(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	}
	return param_1;
}

void FUN_10015b14(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_10015ad0((char)_DAT_100f27dc, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void FUN_10015b38(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_10015ad0((char)_DAT_100f27d8, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void FUN_10015b5c(void)

{
	_DAT_100f3f54 = _DAT_100f3f4c;
	return;
}

void FUN_10015c40(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	uVar1 = (ulonglong)_DAT_100f3f5c;
	_DAT_100f3f5c = (uint)(uVar1 - 1);
	if (uVar1 - 1 == 0) {
		WinCompatShutdown((char)*(undefined4 *)PTR_DAT_100f176c, param_2, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	}
	return;
}

void FUN_10015c7c(void)

{
	_DAT_100f3f68 = _DAT_100f3f58;
	return;
}

void FUN_10015f3c(undefined2 *param_1, uint param_2, char param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	*(uint *)(param_1 + 1) = (param_2 & 0xff) << 8;
	if (param_3 == '\0') {
		*param_1 = 4;
		FUN_10018224((char)param_1, (char)param_2, 0, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	} else {
		*param_1 = 3;
		FUN_10018200((char)param_1, (char)param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return;
}

// WARNING: Removing unreachable block (ram,0x10015fc0)

ulonglong FUN_10015f84(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	ushort *puVar3;
	undefined4 in_stack_ffffffb8;
	undefined *local_18;
	undefined2 local_14;
	undefined2 uStack18;
	undefined2 local_10;
	undefined2 uStack14;
	undefined2 local_c;
	ushort uStack10;

	ppuVar1 = &toc;
	uVar2 = FUN_10017e5c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	if (((uVar2 & 0xff) == 0) && (puVar3 = (ushort *)param_1, *puVar3 < 9)) {
		if ((*(ushort *)((int)ppuVar1 + -0x5062) != puVar3[6]) || (*(ushort *)(ppuVar1 + -0x1419) != puVar3[5])) {
			FUN_10018028((int)puVar3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8);
			ppuVar1[-0x1419] = *(undefined **)(puVar3 + 5);
		}
		if (*(ushort *)((int)ppuVar1 + -0x5052) != puVar3[7]) {
			local_18 = ppuVar1[-0xbcd];
			local_14 = (undefined2)((uint)ppuVar1[-0xbcc] >> 0x10);
			uStack18 = (undefined2)((uint) * (undefined4 *)(puVar3 + 3) >> 0x10);
			local_10 = (undefined2) * (undefined4 *)(puVar3 + 3);
			uStack14 = (undefined2)((uint) * (undefined4 *)(puVar3 + 5) >> 0x10);
			local_c = (undefined2) * (undefined4 *)(puVar3 + 5);
			uStack10 = puVar3[7];
			*(ushort *)((int)ppuVar1 + -0x5052) = *(ushort *)((int)ppuVar1 + -0x5052) ^ puVar3[7];
			if ((*(ushort *)((int)ppuVar1 + -0x5052) & 0x100) != 0) {
				FUN_10015f3c((undefined2 *)&local_18, 0x37, '\x01' - ((puVar3[7] & 0x100) == 0), param_4,
				    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			}
			if ((*(ushort *)((int)ppuVar1 + -0x5052) & 0x200) != 0) {
				FUN_10015f3c((undefined2 *)&local_18, 0x38, '\x01' - ((puVar3[7] & 0x200) == 0), param_4,
				    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			}
			if ((*(ushort *)((int)ppuVar1 + -0x5052) & 0x400) != 0) {
				FUN_10015f3c((undefined2 *)&local_18, 0x39, '\x01' - ((puVar3[7] & 0x400) == 0), param_4,
				    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			}
			if ((*(ushort *)((int)ppuVar1 + -0x5052) & 0x800) != 0) {
				FUN_10015f3c((undefined2 *)&local_18, 0x3a, '\x01' - ((puVar3[7] & 0x800) == 0), param_4,
				    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			}
			if ((*(ushort *)((int)ppuVar1 + -0x5052) & 0x1000) != 0) {
				FUN_10015f3c((undefined2 *)&local_18, 0x3b, '\x01' - ((puVar3[7] & 0x1000) == 0), param_4,
				    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			}
			*(ushort *)((int)ppuVar1 + -0x5052) = puVar3[7];
		}
	}
	return uVar2;
}

void FUN_10016150(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_10017e98(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_10016248(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	short sVar2;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	sVar2 = FindWindow((char)*(undefined4 *)((int)param_1 + 10),
	    (char)(ZEXT48(register0x0000000c) - 0x50) + '8', param_3, param_4, param_5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
	    *(undefined4 *)(iVar1 + 0x14));
	if (((longlong)sVar2 & 0xffffffffU) < 9) {
		// WARNING: Could not recover jumptable at 0x1001628c. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(*(int *)(iVar1 + 0x14) + -0x2f24 + (int)sVar2 * 4))();
		return;
	}
	return;
}

void FUN_100163e4(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_10018224(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_10016514(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	FUN_10018248();
	return;
}

ulonglong FUN_10016534(void)

{
	return (ulonglong)(*(int *)(iRam00000b60 + 2) != 0);
}

undefined8
FUN_100167c0(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ushort uVar1;
	undefined *puVar2;
	char cVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	undefined8 uVar7;
	uint uVar8;
	undefined8 unaff_r31;

	uVar6 = ZEXT48(register0x0000000c);
	ppuVar4 = &toc;
	puVar2 = (undefined *)(uVar6 - 0x60);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	FUN_1001654c((short *)(puVar2 + 0x40), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined4 *)(puVar2 + 8));
	if (*(short *)(puVar2 + 0x40) == 7) {
		unaff_r31 = 1;
	}
	uVar5 = FUN_10015f84(uVar6 - 0x20, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined4 *)(puVar2 + 8));
	cVar3 = (char)(uVar6 - 0x60);
	if ((uVar5 & 0xff) == 0) {
		uVar1 = *(ushort *)(puVar2 + 0x40);
		if (uVar1 == 0xf) {
			uVar5 = FUN_10015e94((undefined2 *)(puVar2 + 0x40), param_2, param_3, param_4, param_5, param_6,
			    param_7, param_8, *(undefined4 *)(puVar2 + 8));
			if ((uVar5 & 0xff) != 0) {
				uVar6 = FUN_10015f84(uVar6 - 0x20, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
				    *(undefined4 *)(puVar2 + 8));
				if ((uVar6 & 0xff) == 0) {
					FUN_1001647c(*puVar2);
				}
			}
		} else {
			if (uVar1 < 0x18) {
				// WARNING: Could not recover jumptable at 0x10016848. Too many branches
				// WARNING: Treating indirect jump as call
				uVar7 = (*(code *)ppuVar4[(uint)uVar1 - 0xbc0])();
				return uVar7;
			}
			FUN_10016514(cVar3 + '@', param_2, param_3, param_4, param_5, param_6, param_7, param_8,
			    *(undefined4 *)(puVar2 + 8));
		}
	}
	uVar8 = FUN_10016150(cVar3 + '@', param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined4 *)(puVar2 + 8));
	if ((uVar8 & 0xff) != 0) {
		unaff_r31 = 1;
	}
	return unaff_r31;
}

undefined8
FUN_10016af4(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	char cVar2;
	undefined8 uVar3;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x40);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0x40);
	uVar3 = AEGetAttributePtr(param_1, 0x73, 0x2a, cVar2 + '8', 0, 0, cVar2 + '<', param_8,
	    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
	    *(undefined4 *)(iVar1 + 0x14));
	if ((short)uVar3 == -0x6a5) {
		uVar3 = 0;
	} else {
		if ((short)uVar3 == 0) {
			uVar3 = 0xfffffffffffff954;
		}
	}
	return uVar3;
}

undefined8
FUN_10016be0(undefined param_1, char param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined **ppuVar1;
	undefined8 uVar2;
	ulonglong uVar3;
	undefined uVar4;
	longlong lVar5;
	undefined uVar6;
	longlong lVar7;
	undefined uVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	longlong lVar13;
	undefined uVar14;
	longlong lVar15;
	undefined uVar16;
	longlong lVar17;
	undefined uVar18;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	lVar17 = (longlong)param_8;
	lVar15 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar11 = (longlong)param_5;
	lVar9 = (longlong)param_4;
	lVar7 = (longlong)param_3;
	lVar5 = (longlong)param_2;
	ppuVar1 = &toc;
	uVar2 = FUN_10016b58(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	uVar3 = FUN_10017d5c((char)uVar2, (char)lVar5, (char)lVar7, (char)lVar9, (char)lVar11, (char)lVar13,
	    (char)lVar15, (char)lVar17, in_stack_ffffffc8);
	uVar18 = (undefined)lVar17;
	uVar16 = (undefined)lVar15;
	uVar14 = (undefined)lVar13;
	uVar12 = (undefined)lVar11;
	uVar10 = (undefined)lVar9;
	uVar8 = (undefined)lVar7;
	uVar6 = (undefined)lVar5;
	uVar4 = (undefined)uVar3;
	if ((uVar3 & 0xff) != 0) {
		LMSetSysEvtMask((char)*(undefined2 *)(ppuVar1 + -0x1415), uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, uVar18, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		while (true) {
			uVar3 = FUN_10017d34();
			uVar6 = (undefined)lVar5;
			uVar8 = (undefined)lVar7;
			uVar10 = (undefined)lVar9;
			uVar12 = (undefined)lVar11;
			uVar14 = (undefined)lVar13;
			uVar16 = (undefined)lVar15;
			uVar18 = (undefined)lVar17;
			if ((uVar3 & 0xff) == 0)
				break;
			FUN_100167c0((char)uVar3, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, uVar18, in_stack_ffffffc8);
		}
		uVar4 = FUN_10017e34((char)uVar3, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, uVar18,
		    in_stack_ffffffc8);
	}
	FUN_10016bbc(uVar4, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, uVar18, in_stack_ffffffc8);
	return 0;
}

void FUN_100174ac(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	_DAT_100f3f90 = _DAT_100f3f80;
	uVar1 = (undefined)_DAT_100f2808;
	InitializeCriticalSection(uVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffc8,
	    in_stack_ffffffcf, local_2c);
	FUN_1000058c(uVar1, (char)*(undefined4 *)(local_2c + -0x7810),
	    (char)*(undefined4 *)(local_2c + -0x67d8), param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void FUN_10017554(void)

{
	DAT_100f3fa4 = 1;
	return;
}

ulonglong FUN_100175b0(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	bVar1 = DAT_100f3fa4 != '\0';
	if (bVar1) {
		Msg_PostGameMessage(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	}
	return (ulonglong)bVar1;
}

ulonglong FUN_100175ec(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	bVar1 = DAT_100f3fa4 != '\0';
	if (bVar1) {
		Msg_PostGameKeyMessage(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
	}
	return (ulonglong)bVar1;
}

ulonglong FUN_1001766c(short *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	short sVar3;
	short sVar4;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	uVar2 = 0;
	if (DAT_100f3fa4 != '\0') {
		uVar2 = FUN_100cd794(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		sVar3 = (short)*(undefined4 *)(*(int *)ppuVar1[-0x1e06] + 8) + -1;
		sVar4 = (short)*(undefined4 *)(*(int *)ppuVar1[-0x1e06] + 0xc) + -1;
		if ((uVar2 & 0xff) != 0) {
			if (param_1[1] < 0) {
				param_1[1] = 0;
			}
			if (sVar3 < param_1[1]) {
				param_1[1] = sVar3;
			}
			if (*param_1 < 0) {
				*param_1 = 0;
			}
			if (sVar4 < *param_1) {
				*param_1 = sVar4;
			}
		}
	}
	return uVar2;
}

void FUN_100177b8(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined **ppuVar2;
	undefined uVar5;
	ulonglong uVar3;
	uint uVar4;
	undefined uVar6;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	uint uVar7;
	undefined8 unaff_r28;
	uint uVar8;
	undefined8 unaff_r29;
	byte bVar9;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined4 local_38;
	undefined4 local_34;
	undefined4 local_30;
	undefined4 local_2c;
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	bVar9 = (byte)unaff_r29;
	uVar6 = (undefined)unaff_r30;
	uVar7 = (uint)unaff_r27;
	uVar8 = (uint)unaff_r28;
	ppuVar2 = &toc;
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	FUN_100cdfa8(&local_2c, &local_30, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
	local_30._3_1_ = -(char)local_30;
	uVar5 = FUN_100ce298((undefined)local_2c, (char)local_30, param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffff98);
	uVar3 = FUN_100ce034(uVar5, (char)local_30, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	uVar4 = (uint)uVar3;
	if ((uVar3 & 0xff) != 0) {
		FUN_100ce264(&local_38);
		local_34 = local_38;
		uVar3 = FUN_1001766c((short *)&local_34, (char)local_30, param_3, param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffff98);
		if ((uVar3 & 0xff) != 0) {
			uVar5 = 0;
			if (((uVar4 & 0xff) == 1) && ((*(ushort *)(param_1 + 0xe) & 0x100) != 0)) {
				uVar4 = 3;
				uVar5 = 1;
			} else {
				if (((uVar4 & 0xff) == 2) && (*(char *)((int)ppuVar2 + -0x502b) != '\0')) {
					uVar4 = 4;
				}
			}
			uVar1 = uVar4 & 0xff;
			if (uVar1 == 3) {
				uVar6 = 4;
				bVar9 = 2;
				uVar8 = 1;
				uVar7 = 1;
			} else {
				if (uVar1 < 3) {
					if (uVar1 == 1) {
						uVar6 = 1;
						bVar9 = 1;
						uVar8 = 1;
						uVar7 = 0;
					} else {
						if (uVar1 != 0) {
							uVar6 = 2;
							bVar9 = 1;
							uVar8 = 0;
							uVar7 = 0;
						}
					}
				} else {
					if (uVar1 < 5) {
						uVar6 = 5;
						bVar9 = 2;
						uVar8 = 0;
						uVar7 = 1;
					}
				}
			}
			if (((ulonglong) * (byte *)((int)ppuVar2 + -0x5029) != (ulonglong)(uVar8 & 0xff)) && (((uVar8 & 0xff) != 0 || ((*(byte *)((int)ppuVar2 + -0x5029) != 0 && ((ulonglong) * (byte *)((int)ppuVar2 + -0x502a) == (ulonglong)(uVar7 & 0xff))))))) {
				if ((*(ushort *)(param_1 + 0xe) & 0x200) != 0) {
					bVar9 = bVar9 | 4;
				}
				if ((*(ushort *)(param_1 + 0xe) & 0x1000) != 0) {
					bVar9 = bVar9 | 8;
				}
				uVar3 = FUN_100175b0(uVar6, bVar9, (char)local_34, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff98);
				uVar6 = 0;
				if (((uVar8 & 0xff) != 0) && ((uVar3 & 0xff) != 0)) {
					uVar6 = 1;
				}
				*(undefined *)((int)ppuVar2 + -0x5029) = uVar6;
				uVar6 = 0;
				if (((uVar8 & 0xff) != 0) && ((uVar4 & 0xff) == 3)) {
					uVar6 = 1;
				}
				*(undefined *)((int)ppuVar2 + -0x502a) = uVar6;
				*(undefined *)((int)ppuVar2 + -0x502b) = uVar5;
			}
		}
	}
	return;
}

void FUN_10017990(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	undefined8 uVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	undefined uVar5;
	bool bVar6;
	bool bVar7;
	uint uVar8;
	undefined4 in_stack_ffffffb8;

	ppuVar3 = &toc;
	uVar4 = FUN_100cde78();
	if ((uVar4 & 0xff) != 0) {
		uVar8 = 0;
		bVar1 = false;
		bVar6 = false;
		bVar7 = false;
		if ((*(char *)((int)ppuVar3 + -0x5035) != '\0') && (*(char *)((int)ppuVar3 + -0x5036) != '\0')) {
			bVar7 = true;
		}
		if ((bVar7) && (*(char *)(ppuVar3 + -0x140e) != '\0')) {
			bVar6 = true;
		}
		if ((bVar6) && (*(char *)((int)ppuVar3 + -0x5037) == '\0')) {
			bVar1 = true;
		}
		if ((bVar1) && (*(char *)(ppuVar3 + -0x140d) == '\0')) {
			uVar8 = 1;
		}
		uVar4 = FUN_100cdf10();
		uVar2 = countLeadingZeros((uint)uVar4 & 0xff);
		uVar5 = (undefined)uVar8;
		if (uVar8 != ((uint)uVar2 >> 5 & 0xff)) {
			if (*(char *)((int)ppuVar3 + -0x5029) != '\0') {
				if (*(char *)((int)ppuVar3 + -0x502a) == '\0') {
					uVar5 = 2;
				} else {
					uVar5 = 5;
				}
				bVar6 = false;
				bVar7 = false;
				uVar4 = FUN_100175b0(uVar5, 0, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
				uVar5 = (undefined)uVar4;
				*(undefined *)((int)ppuVar3 + -0x5029) = 0;
				*(undefined *)((int)ppuVar3 + -0x502a) = 0;
			}
			if (uVar8 == 0) {
				FUN_100cdf30(uVar5, bVar6, bVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			} else {
				uVar5 = FUN_100cdf6c(uVar5, bVar6, bVar7, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				FUN_100ce2d8(uVar5, bVar6, bVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			}
		}
	}
	return;
}

ulonglong FUN_10017aa8(uint param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined8 uVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffc8;

	uVar1 = countLeadingZeros(param_1 & 0xff);
	uVar2 = (ulonglong)DAT_100f3f9b;
	DAT_100f3f9b = (char)((uint)uVar1 >> 5);
	FUN_10017990((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return uVar2;
}

ulonglong FUN_10017ae8(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined4 in_stack_ffffffc8;

	uVar1 = (ulonglong)DAT_100f3f9a;
	DAT_100f3f9a = param_1;
	FUN_10017990(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return uVar1;
}

ulonglong FUN_10017b1c(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined4 in_stack_ffffffc8;

	uVar1 = (ulonglong)DAT_100f3f98;
	DAT_100f3f98 = param_1;
	FUN_10017990(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return uVar1;
}

void FUN_10017e34(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined4 in_stack_ffffffc8;

	uVar1 = FUN_100cb428(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	FUN_10017cec(uVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	FUN_10017d30();
	return;
}

void FUN_10017e5c(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char *pcVar1;
	undefined4 in_stack_ffffffc8;

	pcVar1 = _DAT_100f17d8;
	*_DAT_100f17d8 = '\x01' - ((*(ushort *)((int)param_1 + 0xe) & 0x400) == 0);
	FUN_10017b78(param_1, (char)pcVar1, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

undefined8
FUN_10017e98(undefined param_1, char param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined uVar4;
	ulonglong uVar2;
	ulonglong uVar3;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	puVar1 = PTR_DAT_100f17dc;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	lVar5 = (longlong)param_2;
	if (DAT_100f3f99 == '\0') {
		uVar4 = 0xdc;
	} else {
		uVar4 = 0xff;
	}
	uVar4 = DirectSoundTickle(uVar4, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	uVar2 = TickCount(uVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
	    (char)lVar11, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	do {
		lVar12 = 1;
		do {
			if (*(char *)(local_3c + -0x5033) != '\0') {
				return 0;
			}
			if (*puVar1 != '\0') {
				return 0;
			}
			uVar4 = YieldToThinThread(0, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
			    (char)lVar10, (char)lVar11, in_stack_ffffffbb, in_stack_ffffffbf,
			    local_3c);
			lVar12 = lVar12 + -1;
		} while (0 < lVar12);
		uVar3 = TickCount(uVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		if ((uVar2 & 0xffffffff) != (uVar3 & 0xffffffff)) {
			return 0;
		}
	} while (true);
}

ulonglong FUN_10017f48(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	undefined uVar3;
	byte bVar4;
	ulonglong uVar5;
	undefined4 in_stack_ffffffb8;
	undefined4 local_18[6];

	ppuVar1 = &toc;
	uVar5 = 0;
	if ((*(ushort *)(param_1 + 0xe) & 0x100) != 0) {
		DAT_100f3fa6 = 1;
	}
	local_18[0] = *(undefined4 *)(param_1 + 10);
	uVar2 = FUN_1001766c((short *)local_18, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	if ((uVar2 & 0xff) != 0) {
		if (*(char *)((int)ppuVar1 + -0x502a) == '\0') {
			uVar3 = 1;
		} else {
			uVar3 = 4;
		}
		if (*(char *)((int)ppuVar1 + -0x502a) == '\0') {
			bVar4 = 1;
		} else {
			bVar4 = 2;
		}
		if ((*(ushort *)(param_1 + 0xe) & 0x200) != 0) {
			bVar4 = bVar4 | 4;
		}
		if ((*(ushort *)(param_1 + 0xe) & 0x1000) != 0) {
			bVar4 = bVar4 | 8;
		}
		uVar5 = FUN_100175b0(uVar3, bVar4, (char)local_18[0], param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		*(undefined *)((int)ppuVar1 + -0x5029) = (char)uVar5;
		if ((uVar5 & 0xff) == 0) {
			*(undefined *)((int)ppuVar1 + -0x502a) = 0;
		}
	}
	return uVar5;
}

ulonglong FUN_10018028(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	byte bVar4;
	ulonglong uVar5;
	undefined4 in_stack_ffffffb8;
	undefined4 local_18[6];

	ppuVar2 = &toc;
	uVar5 = 0;
	local_18[0] = *(undefined4 *)(param_1 + 10);
	uVar3 = FUN_1001766c((short *)local_18, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	if ((uVar3 & 0xff) != 0) {
		if (*(char *)((int)ppuVar2 + -0x5029) == '\0') {
			bVar4 = 0;
		} else {
			if (*(char *)((int)ppuVar2 + -0x502a) == '\0') {
				bVar4 = 1;
			} else {
				bVar4 = 2;
			}
		}
		if ((*(ushort *)(param_1 + 0xe) & 0x200) != 0) {
			bVar4 = bVar4 | 4;
		}
		if ((*(ushort *)(param_1 + 0xe) & 0x1000) != 0) {
			bVar4 = bVar4 | 8;
		}
		if (*(char *)((int)ppuVar2 + -0x5029) != '\0') {
			if (*(char *)((int)ppuVar2 + -0x502a) == '\0') {
				bVar1 = 1;
			} else {
				bVar1 = 2;
			}
			bVar4 = bVar4 | bVar1;
		}
		uVar5 = FUN_100175b0(0, bVar4, (char)local_18[0], param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
	}
	return uVar5;
}

ulonglong FUN_10018108(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	byte bVar4;
	ulonglong uVar5;
	undefined4 in_stack_ffffffb8;
	undefined4 local_18[6];

	ppuVar2 = &toc;
	uVar5 = 0;
	local_18[0] = *(undefined4 *)(param_1 + 10);
	uVar3 = FUN_1001766c((short *)local_18, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	if (((uVar3 & 0xff) != 0) && (*(char *)((int)ppuVar2 + -0x5029) != '\0')) {
		if (*(char *)((int)ppuVar2 + -0x502a) == '\0') {
			uVar1 = 2;
		} else {
			uVar1 = 5;
		}
		bVar4 = 0;
		if ((*(ushort *)(param_1 + 0xe) & 0x200) != 0) {
			bVar4 = 4;
		}
		if ((*(ushort *)(param_1 + 0xe) & 0x1000) != 0) {
			bVar4 = bVar4 | 8;
		}
		uVar5 = FUN_100175b0(uVar1, bVar4, (char)local_18[0], param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
	}
	*(undefined *)((int)ppuVar2 + -0x502a) = 0;
	*(undefined *)((int)ppuVar2 + -0x5029) = 0;
	return uVar5;
}

void FUN_100181c4(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_100175ec(param_2, (char)((uint) * (undefined4 *)((int)param_1 + 2) >> 8),
	    (char)*(undefined4 *)((int)param_1 + 2), (char)*(undefined2 *)((int)param_1 + 0xe),
	    param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_10018200(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_100181c4(param_1, 1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_10018224(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_100181c4(param_1, 0, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

undefined8 FUN_10018248(void)

{
	return 0;
}

ulonglong FUN_10018250(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined4 in_stack_ffffffc8;
	undefined uVar4;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	DAT_100f3f99 = 1;
	FUN_10017990(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	uVar4 = (undefined)in_stack_ffffffc8;
	uVar2 = 0;
	uVar3 = 0;
	uVar1 = FUN_100175b0(0x1c, 0, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	SwitchVideoMode(1, uVar2, uVar3, param_4, param_5, param_6, param_7, param_8, uVar4, in_stack_ffffffcf,
	    local_2c);
	FUN_100dbf44();
	return uVar1;
}

ulonglong FUN_100182b8(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined4 in_stack_ffffffc8;

	DAT_100f3f99 = 0;
	FUN_10017990(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	uVar1 = FUN_100175b0(0x1c, 1, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	FUN_100dbf44();
	return uVar1;
}

void FUN_10018348(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_100cd378(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void tmsgcpp(void)

{
	_DAT_100f4518 = _DAT_100f4514;
	return;
}

ulonglong tmsg_get(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	ulonglong uVar2;
	longlong lVar3;
	char cVar4;
	byte bVar5;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	if (_DAT_100f4520 == 0) {
		uVar2 = 0;
	} else {
		lVar3 = GetTickCount(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		puVar1 = *(undefined4 **)(local_2c + -0x4ab0);
		if ((longlong)((ulonglong)(uint)puVar1[1] - lVar3) < 0) {
			cVar4 = (char)puVar1 + '\t';
			*(undefined4 *)(local_2c + -0x4ab0) = *puVar1;
			bVar5 = *(byte *)(puVar1 + 2);
			uVar2 = (ulonglong)bVar5;
			memcpy(param_1, cVar4, bVar5, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
			mem_free_dbg(ZEXT48(puVar1), cVar4, bVar5, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		} else {
			uVar2 = 0;
		}
	}
	return uVar2;
}

void tmsg_add(undefined8 param_1, byte param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	int iVar3;
	undefined4 *puVar4;
	byte bVar5;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	bVar5 = param_2;
	puVar2 = (undefined4 *)DiabloAllocPtr((ulonglong)((int)(char)param_2 & 0xffU) + 0xc);
	*puVar2 = 0;
	iVar3 = GetTickCount((char)puVar2, bVar5, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	puVar2[1] = iVar3 + 500;
	*(byte *)(puVar2 + 2) = param_2;
	memcpy((char)puVar2 + '\t', (undefined)param_1, (char)((int)(char)param_2 & 0xffU), param_4,
	    param_5, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	puVar1 = (undefined4 *)(local_3c + -0x4ab0);
	do {
		puVar4 = puVar1;
		puVar1 = (undefined4 *)*puVar4;
	} while (puVar1 != (undefined4 *)0x0);
	*(undefined4 **)puVar4 = puVar2;
	return;
}

void tmsg_start(void)

{
	return;
}

undefined tmsg_cleanup(undefined param_1, char param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 uVar2;
	int iVar3;
	ulonglong uVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	undefined4 in_stack_ffffffc8;

	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	lVar5 = (longlong)param_2;
	uVar4 = ZEXT48(&toc);
	while (iVar3 = (int)uVar4, *(int *)(iVar3 + -0x4ab0) != 0) {
		puVar1 = *(undefined4 **)(iVar3 + -0x4ab0);
		uVar2 = *puVar1;
		*(undefined4 *)(iVar3 + -0x4ab0) = 0;
		param_1 = mem_free_dbg(ZEXT48(puVar1), (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
		    (char)lVar9, (char)lVar10, (char)lVar11, in_stack_ffffffc8);
		*(undefined4 *)((int)uVar4 + -0x4ab0) = uVar2;
	}
	return param_1;
}

void towncpp(void)

{
	_DAT_100f4524 = _DAT_100f451c;
	return;
}

void FUN_100b0678(undefined *param_1)

{
	undefined *puVar1;
	longlong lVar2;
	int iVar3;
	int iVar4;
	longlong lVar5;

	puVar1 = PTR_DAT_100f17c8;
	lVar5 = 4;
	iVar3 = 0x1e;
	do {
		if (param_1 < *(undefined **)puVar1) {
			return;
		}
		param_1 = param_1 + iVar3;
		lVar2 = lVar5;
		do {
			lVar2 = lVar2 + -1;
			*param_1 = 0;
			param_1 = param_1 + 1;
		} while (lVar2 != 0);
		lVar5 = lVar5 + 4;
		iVar4 = iVar3 + -2;
		param_1 = param_1 + iVar3 + -0x340;
		iVar3 = iVar4;
	} while (iVar4 != 0);
	lVar5 = 0x3c;
	iVar3 = 2;
	do {
		if (param_1 < *(undefined **)puVar1) {
			return;
		}
		param_1 = param_1 + iVar3;
		lVar2 = lVar5;
		do {
			lVar2 = lVar2 + -1;
			*param_1 = 0;
			param_1 = param_1 + 1;
		} while (lVar2 != 0);
		iVar4 = iVar3 + 2;
		param_1 = param_1 + iVar3 + -0x340;
		lVar5 = lVar5 + -4;
		iVar3 = iVar4;
	} while (iVar4 != 0x20);
	return;
}

void town_clear_low_buf(undefined *param_1)

{
	undefined *puVar1;
	longlong lVar2;
	int iVar3;
	longlong lVar4;

	puVar1 = PTR_DAT_100f17c8;
	iVar3 = 0x1e;
	lVar4 = 4;
	do {
		if (param_1 < *(undefined **)puVar1) {
			param_1 = param_1 + iVar3;
			lVar2 = lVar4;
			do {
				lVar2 = lVar2 + -1;
				*param_1 = 0;
				param_1 = param_1 + 1;
			} while (lVar2 != 0);
			param_1 = param_1 + iVar3;
		} else {
			param_1 = param_1 + 0x40;
		}
		iVar3 = iVar3 + -2;
		lVar4 = lVar4 + 4;
		param_1 = param_1 + -0x340;
	} while (iVar3 != 0);
	iVar3 = 2;
	lVar4 = 0x3c;
	do {
		if (param_1 < *(undefined **)puVar1) {
			param_1 = param_1 + iVar3;
			lVar2 = lVar4;
			do {
				lVar2 = lVar2 + -1;
				*param_1 = 0;
				param_1 = param_1 + 1;
			} while (lVar2 != 0);
			param_1 = param_1 + iVar3;
		} else {
			param_1 = param_1 + 0x40;
		}
		iVar3 = iVar3 + 2;
		lVar4 = lVar4 + -4;
		param_1 = param_1 + -0x340;
	} while (iVar3 != 0x20);
	return;
}

void town_special_lower(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11, undefined4 param_12)

{
	return;
}

void FUN_100b07bc(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11, undefined4 param_12)

{
	return;
}

void town_draw_clipped_e_flag_2(longlong param_1, longlong param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	ushort uVar1;
	uint *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	ushort *puVar13;
	undefined4 in_stack_ffffffa8;

	puVar2 = _DAT_100f2080;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	ppuVar3 = &toc;
	uVar6 = param_3;
	uVar7 = param_4;
	uVar8 = param_5;
	lVar4 = IsometricCoord(param_2, (int)param_3);
	uVar5 = ZEXT48(ppuVar3[-0x1d61]);
	iVar12 = 0;
	puVar13 = (ushort *)(*(int *)ppuVar3[-0x1d61] + (int)lVar4 * 0x20);
	lVar4 = param_1;
	do {
		uVar1 = *puVar13;
		*puVar2 = (uint)uVar1;
		if (uVar1 != 0) {
			drawLowerScreen(lVar4, (char)uVar5, (char)uVar6, (char)uVar7, (char)uVar8, (char)lVar9, (char)lVar10,
			    (char)lVar11, in_stack_ffffffa8);
		}
		uVar1 = puVar13[1];
		*puVar2 = (uint)uVar1;
		if (uVar1 != 0) {
			drawLowerScreen(lVar4 + 0x20, (char)uVar5, (char)uVar6, (char)uVar7, (char)uVar8, (char)lVar9,
			    (char)lVar10, (char)lVar11, in_stack_ffffffa8);
		}
		iVar12 = iVar12 + 2;
		puVar13 = puVar13 + 2;
		lVar4 = lVar4 + -0x6000;
	} while (iVar12 < 0xc);
	FUN_100b088c(param_1, param_2, param_3, param_4, param_5, 0, (char)lVar10, (char)lVar11, in_stack_ffffffa8);
	return;
}

void FUN_100b088c(undefined8 param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, int param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	short sVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined *puVar14;
	undefined *puVar15;
	undefined *puVar16;
	undefined **ppuVar17;
	char cVar18;
	char cVar19;
	char cVar20;
	char cVar21;
	char cVar22;
	char cVar23;
	undefined uVar24;
	undefined uVar25;
	ulonglong uVar26;
	undefined uVar27;
	longlong lVar28;
	longlong lVar29;
	undefined4 in_stack_ffffff88;
	undefined uVar30;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;

	puVar16 = PTR_DAT_100f1954;
	puVar15 = PTR_DAT_100f1950;
	puVar6 = PTR_DAT_100f1940;
	puVar14 = PTR_DAT_100f1880;
	puVar7 = PTR_DAT_100f1878;
	puVar13 = PTR_DAT_100f1874;
	puVar12 = PTR_DAT_100f1834;
	puVar8 = PTR_DAT_100f1828;
	cVar22 = (char)param_5;
	cVar20 = (char)param_4;
	uVar24 = (undefined)param_6;
	ppuVar17 = &toc;
	iVar9 = (int)param_2;
	iVar3 = iVar9 * 0x70;
	uVar25 = SUB41(PTR_DAT_100f1938, 0);
	uVar26 = ZEXT48(PTR_DAT_100f17cc);
	iVar4 = (int)param_3;
	cVar18 = *(char *)(*(int *)PTR_DAT_100f1944 + iVar3 + iVar4);
	lVar29 = (ulonglong) * (uint *)PTR_DAT_100f17cc + (ulonglong) * (uint *)(PTR_DAT_100f1938 + (int)param_5 * 4) + param_4;
	cVar21 = cVar20;
	cVar23 = cVar22;
	if (cVar18 != '\0') {
		iVar10 = (int)(char)(cVar18 + -1) * 0x170;
		puVar5 = PTR_DAT_100f1940 + iVar10;
		uVar2 = *(uint *)(puVar5 + 0x28);
		ppuVar17 = &toc;
		if ((char)(cVar18 + -1) == *PTR_DAT_100f1888) {
			uVar26 = 8;
			ppuVar17 = &toc;
			CelDrawHdrClrHL(0xb5, param_4 - (ulonglong)uVar2, param_5, (ulonglong) * (uint *)(puVar5 + 0x18),
			    (ulonglong) * (uint *)(puVar5 + 0x20), (ulonglong) * (uint *)(puVar5 + 0x24), 0, 8,
			    in_stack_ffffff88);
		}
		puVar6 = puVar6 + iVar10;
		cVar18 = (char)*(uint *)(puVar6 + 0x18);
		cVar21 = (char)*(uint *)(puVar6 + 0x20);
		cVar23 = (char)*(uint *)(puVar6 + 0x24);
		uVar24 = 0;
		uVar25 = 8;
		Cel2DrawHdrOnly((int)(param_4 - (ulonglong)uVar2), param_5, (ulonglong) * (uint *)(puVar6 + 0x18),
		    (ulonglong) * (uint *)(puVar6 + 0x20), (ulonglong) * (uint *)(puVar6 + 0x24), 0, 8,
		    (int)uVar26, in_stack_ffffff88);
	}
	if ((*(byte *)(*(int *)puVar12 + iVar3 + iVar4) & 0x10) != 0) {
		iVar10 = (int)*(short *)(*(int *)puVar16 + iVar9 * 0xe0 + iVar4 * 2 + -2) + 1;
		iVar11 = iVar10 * -0x10c;
		puVar6 = puVar7 + iVar11;
		uVar2 = *(uint *)(puVar6 + 0x44);
		if (-iVar10 == *(int *)puVar14) {
			uVar26 = 8;
			CelDrawHdrClrHL_part(0xa6, param_4 - (ulonglong)uVar2, param_5, (ulonglong) * (uint *)(puVar6 + 0x24),
			    (ulonglong) * (uint *)(puVar6 + 0x34), (ulonglong) * (uint *)(puVar6 + 0x40), 0, 8,
			    in_stack_ffffff88);
		}
		puVar6 = puVar7 + iVar11;
		cVar18 = (char)*(uint *)(puVar6 + 0x24);
		cVar21 = (char)*(uint *)(puVar6 + 0x34);
		cVar23 = (char)*(uint *)(puVar6 + 0x40);
		uVar24 = 0;
		uVar25 = 8;
		Cel2DrawHdrOnly_part((int)(param_4 - (ulonglong)uVar2), param_5, (ulonglong) * (uint *)(puVar6 + 0x24),
		    (ulonglong) * (uint *)(puVar6 + 0x34), (ulonglong) * (uint *)(puVar6 + 0x40), 0, 8,
		    (int)uVar26, in_stack_ffffff88);
	}
	sVar1 = *(short *)(*(int *)puVar16 + iVar9 * 0xe0 + iVar4 * 2);
	if (0 < sVar1) {
		iVar11 = (int)sVar1 + -1;
		iVar10 = iVar11 * 0x10c;
		puVar6 = puVar7 + iVar10;
		uVar2 = *(uint *)(puVar6 + 0x44);
		if (iVar11 == *(int *)puVar14) {
			uVar26 = 8;
			CelDrawHdrClrHL_part(0xa6, param_4 - (ulonglong)uVar2, param_5, (ulonglong) * (uint *)(puVar6 + 0x24),
			    (ulonglong) * (uint *)(puVar6 + 0x34), (ulonglong) * (uint *)(puVar6 + 0x40), 0, 8,
			    in_stack_ffffff88);
		}
		puVar7 = puVar7 + iVar10;
		cVar18 = (char)*(uint *)(puVar7 + 0x24);
		cVar21 = (char)*(uint *)(puVar7 + 0x34);
		cVar23 = (char)*(uint *)(puVar7 + 0x40);
		uVar24 = 0;
		uVar25 = 8;
		Cel2DrawHdrOnly_part((int)(param_4 - (ulonglong)uVar2), param_5, (ulonglong) * (uint *)(puVar7 + 0x24),
		    (ulonglong) * (uint *)(puVar7 + 0x34), (ulonglong) * (uint *)(puVar7 + 0x40), 0, 8,
		    (int)uVar26, in_stack_ffffff88);
	}
	if ((*(byte *)(*(int *)puVar12 + iVar3 + iVar4) & 0x20) != 0) {
		cVar18 = -(*(char *)(*(int *)puVar15 + iVar3 + iVar4 + -1) + '\x01');
		iVar10 = (int)cVar18 * 0x55ec;
		puVar6 = puVar8 + iVar10;
		uVar2 = *(uint *)(puVar6 + 100);
		lVar28 = (param_4 + (ulonglong) * (uint *)(puVar6 + 0x60)) - (ulonglong) * (uint *)(puVar6 + 0x94);
		if (cVar18 == *puVar13) {
			uVar26 = 8;
			Cl2DecodeClrHL(0xa5, lVar28, param_5 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar6 + 0x7c),
			    (ulonglong) * (uint *)(puVar6 + 0x8c), (ulonglong) * (uint *)(puVar6 + 0x90), 0, 8,
			    in_stack_ffffff88);
		}
		puVar6 = puVar8 + iVar10;
		cVar18 = (char)*(uint *)(puVar6 + 0x7c);
		cVar21 = (char)*(uint *)(puVar6 + 0x8c);
		cVar23 = (char)*(uint *)(puVar6 + 0x90);
		uVar24 = 0;
		uVar25 = 8;
		Cl2DecodeFrm4(lVar28, param_5 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar6 + 0x7c),
		    (ulonglong) * (uint *)(puVar6 + 0x8c), (ulonglong) * (uint *)(puVar6 + 0x90), 0, 8,
		    (int)uVar26, in_stack_ffffff88);
		if (param_6 != 0) {
			if (*(int *)(puVar6 + 0x98) != 0) {
				cVar18 = (char)(param_3 + 1);
				cVar21 = (char)(param_4 - 0x40);
				cVar23 = cVar22;
				town_draw_clipped_e_flag_2(lVar29 + -0x40, param_2 - 1, param_3 + 1, param_4 - 0x40, param_5, uVar24, uVar25,
				    (char)uVar26, in_stack_ffffff88);
			}
		}
	}
	if ((*(byte *)(*(int *)puVar12 + iVar3 + iVar4) & 4) != 0) {
		cVar23 = '\0';
		uVar24 = 8;
		uVar25 = 1;
		cVar18 = cVar20;
		cVar21 = cVar22;
		DrawDeadPlayer(param_2, param_3, param_4, param_5, 0, 8, 1, uVar26, in_stack_ffffff88);
	}
	cVar19 = *(char *)(*(int *)puVar15 + iVar3 + iVar4);
	if ('\0' < cVar19) {
		cVar19 = cVar19 + -1;
		iVar10 = (int)cVar19 * 0x55ec;
		puVar6 = puVar8 + iVar10;
		uVar2 = *(uint *)(puVar6 + 100);
		lVar28 = (param_4 + (ulonglong) * (uint *)(puVar6 + 0x60)) - (ulonglong) * (uint *)(puVar6 + 0x94);
		if (cVar19 == *puVar13) {
			uVar26 = 8;
			Cl2DecodeClrHL(0xa5, lVar28, param_5 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar6 + 0x7c),
			    (ulonglong) * (uint *)(puVar6 + 0x8c), (ulonglong) * (uint *)(puVar6 + 0x90), 0, 8,
			    in_stack_ffffff88);
		}
		puVar8 = puVar8 + iVar10;
		cVar18 = (char)*(uint *)(puVar8 + 0x7c);
		cVar21 = (char)*(uint *)(puVar8 + 0x8c);
		cVar23 = (char)*(uint *)(puVar8 + 0x90);
		uVar24 = 0;
		uVar25 = 8;
		Cl2DecodeFrm4(lVar28, param_5 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar8 + 0x7c),
		    (ulonglong) * (uint *)(puVar8 + 0x8c), (ulonglong) * (uint *)(puVar8 + 0x90), 0, 8,
		    (int)uVar26, in_stack_ffffff88);
		if (param_6 != 0) {
			if (*(int *)(puVar8 + 0x98) != 0) {
				cVar18 = (char)(param_3 + 1);
				cVar21 = (char)(param_4 - 0x40);
				cVar23 = cVar22;
				town_draw_clipped_e_flag_2(lVar29 + -0x40, param_2 - 1, param_3 + 1, param_4 - 0x40, param_5, uVar24, uVar25,
				    (char)uVar26, in_stack_ffffff88);
			}
		}
	}
	uVar30 = (undefined)in_stack_ffffff88;
	uVar27 = (undefined)uVar26;
	if ((*(byte *)(*(int *)puVar12 + iVar3 + iVar4) & 1) != 0) {
		cVar23 = '\0';
		uVar24 = 8;
		uVar25 = 0;
		cVar18 = cVar20;
		cVar21 = cVar22;
		DrawClippedMissile(iVar9, param_3, param_4, param_5, 0, 8, 0, uVar26, in_stack_ffffff88);
	}
	cVar20 = *(char *)(*(int *)ppuVar17[-0x1d66] + iVar3 + iVar4);
	if (cVar20 != '\0') {
		town_special_lower((char)lVar29, cVar20, cVar18, cVar21, cVar23, uVar24, uVar25, uVar27, uVar30,
		    in_stack_ffffff8f, in_stack_ffffff98, in_stack_ffffff9c);
	}
	return;
}

void town_draw_lower(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    int param_5, longlong param_6, char param_7, char param_8, undefined4 param_9)

{
	short sVar1;
	ushort uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	uint *puVar7;
	longlong lVar8;
	ulonglong uVar9;
	longlong lVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	ushort *puVar18;
	uint *puVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	undefined4 in_stack_ffffff88;

	puVar7 = _DAT_100f2080;
	puVar6 = PTR_DAT_100f1a54;
	puVar5 = PTR_DAT_100f1a4c;
	puVar4 = PTR_DAT_100f1938;
	puVar3 = PTR_DAT_100f17cc;
	lVar16 = (longlong)param_8;
	lVar15 = (longlong)param_7;
	uVar13 = SEXT48(param_5);
	iVar24 = (int)param_4;
	uVar9 = param_4;
	lVar14 = param_6;
	if (param_6 != 0) {
		iVar22 = (int)param_2;
		if ((((iVar22 < 0) || (0x6f < iVar22)) || (iVar20 = (int)param_1, iVar20 < 0)) || (0x6f < iVar20)) {
			uVar9 = param_4;
			lVar14 = param_6;
			town_clear_low_buf((undefined *)(*(int *)PTR_DAT_100f17cc + *(int *)(PTR_DAT_100f1938 + iVar24 * 4) + (int)param_3));
		} else {
			sVar1 = *(short *)(*(int *)PTR_DAT_100f1a54 + iVar20 * 0xe0 + iVar22 * 2);
			*_DAT_100f2080 = (int)sVar1;
			if (((longlong)sVar1 & 0xffffffffU) == 0) {
				uVar9 = param_4;
				lVar14 = param_6;
				town_clear_low_buf((undefined *)(*(int *)puVar3 + *(int *)(puVar4 + iVar24 * 4) + (int)param_3));
			} else {
				uVar12 = (ulonglong) * (uint *)puVar3;
				lVar10 = (ulonglong) * (uint *)(puVar4 + iVar24 * 4) + param_3;
				lVar17 = uVar12 + lVar10 + 0x20;
				uVar9 = param_2;
				lVar14 = param_6;
				lVar8 = IsometricCoord(param_1, iVar22);
				iVar22 = 1;
				puVar18 = (ushort *)(*(int *)puVar5 + (int)lVar8 * 0x20 + 2);
				do {
					uVar2 = *puVar18;
					*puVar7 = (uint)uVar2;
					if (uVar2 != 0) {
						drawLowerScreen(lVar17, (char)uVar9, (char)lVar10, (char)uVar12, (char)uVar13, (char)lVar14,
						    (char)lVar15, (char)lVar16, in_stack_ffffff88);
					}
					iVar22 = iVar22 + 2;
					puVar18 = puVar18 + 2;
					lVar17 = lVar17 + -0x6000;
				} while (iVar22 < 0x11);
				lVar14 = 0;
				uVar9 = param_3;
				uVar13 = param_4;
				FUN_100b088c((ulonglong) * (uint *)puVar3 + (ulonglong) * (uint *)(puVar4 + iVar24 * 4) + param_3, param_1, param_2, param_3,
				    param_4, 0, (char)lVar15, (char)lVar16, in_stack_ffffff88);
			}
		}
		param_1 = param_1 + 1;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
	}
	lVar8 = param_1 * 0xe0;
	puVar19 = (uint *)(puVar4 + iVar24 * 4);
	iVar24 = (int)param_2 << 1;
	iVar22 = 0;
	while (true) {
		iVar23 = (int)param_2;
		iVar21 = (int)param_1;
		iVar20 = (int)param_3;
		if (param_5 - (int)param_6 <= iVar22)
			break;
		if (((iVar23 < 0) || (0x6f < iVar23)) || ((iVar21 < 0 || (0x6f < iVar21)))) {
			town_clear_low_buf((undefined *)(*(int *)puVar3 + *puVar19 + iVar20));
		} else {
			*puVar7 = (int)*(short *)(*(int *)puVar6 + (int)lVar8 + iVar24);
			if (*puVar7 == 0) {
				town_clear_low_buf((undefined *)(*(int *)puVar3 + *puVar19 + iVar20));
			} else {
				uVar11 = (ulonglong) * (uint *)puVar3;
				lVar17 = uVar11 + (ulonglong)*puVar19 + param_3;
				uVar12 = param_2;
				lVar10 = IsometricCoord(param_1, iVar23);
				iVar20 = 0;
				puVar18 = (ushort *)(*(int *)puVar5 + (int)lVar10 * 0x20);
				do {
					uVar2 = *puVar18;
					*puVar7 = (uint)uVar2;
					if (uVar2 != 0) {
						drawLowerScreen(lVar17, (char)uVar12, (char)uVar11, (char)uVar9, (char)uVar13, (char)lVar14,
						    (char)lVar15, (char)lVar16, in_stack_ffffff88);
					}
					uVar2 = puVar18[1];
					*puVar7 = (uint)uVar2;
					if (uVar2 != 0) {
						drawLowerScreen(lVar17 + 0x20, (char)uVar12, (char)uVar11, (char)uVar9, (char)uVar13,
						    (char)lVar14, (char)lVar15, (char)lVar16, in_stack_ffffff88);
					}
					iVar20 = iVar20 + 2;
					puVar18 = puVar18 + 2;
					lVar17 = lVar17 + -0x6000;
				} while (iVar20 < 0x10);
				lVar14 = 1;
				uVar9 = param_3;
				uVar13 = param_4;
				FUN_100b088c((ulonglong) * (uint *)puVar3 + (ulonglong)*puVar19 + param_3, param_1, param_2,
				    param_3, param_4, 1, (char)lVar15, (char)lVar16, in_stack_ffffff88);
			}
		}
		lVar8 = lVar8 + 0xe0;
		param_1 = param_1 + 1;
		iVar24 = iVar24 + -2;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
		iVar22 = iVar22 + 1;
	}
	if ((int)param_6 != 0) {
		if (((iVar23 < 0) || (0x6f < iVar23)) || ((iVar21 < 0 || (0x6f < iVar21)))) {
			town_clear_low_buf((undefined *)(*(int *)puVar3 + *puVar19 + iVar20));
		} else {
			*puVar7 = (int)*(short *)(*(int *)puVar6 + iVar21 * 0xe0 + iVar23 * 2);
			if (*puVar7 == 0) {
				town_clear_low_buf((undefined *)(*(int *)puVar3 + *puVar19 + iVar20));
			} else {
				uVar11 = (ulonglong) * (uint *)puVar3;
				lVar10 = uVar11 + (ulonglong)*puVar19 + param_3;
				uVar12 = param_2;
				lVar8 = IsometricCoord(param_1, iVar23);
				iVar24 = 0;
				puVar18 = (ushort *)(*(int *)puVar5 + (int)lVar8 * 0x20);
				do {
					uVar2 = *puVar18;
					*puVar7 = (uint)uVar2;
					if (uVar2 != 0) {
						drawLowerScreen(lVar10, (char)uVar12, (char)uVar11, (char)uVar9, (char)uVar13, (char)lVar14,
						    (char)lVar15, (char)lVar16, in_stack_ffffff88);
					}
					iVar24 = iVar24 + 2;
					puVar18 = puVar18 + 2;
					lVar10 = lVar10 + -0x6000;
				} while (iVar24 < 0x10);
				FUN_100b088c((ulonglong) * (uint *)puVar3 + (ulonglong)*puVar19 + param_3, param_1, param_2,
				    param_3, param_4, 0, (char)lVar15, (char)lVar16, in_stack_ffffff88);
			}
		}
	}
	return;
}

void FUN_100b1078(longlong param_1, longlong param_2, ulonglong param_3, longlong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, char param_8,
    undefined4 param_9)

{
	ushort uVar1;
	uint *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	longlong lVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	longlong lVar11;
	int iVar12;
	longlong lVar13;
	int iVar14;
	undefined4 in_stack_ffffff98;

	puVar2 = _DAT_100f2080;
	lVar11 = (longlong)param_8;
	ppuVar3 = &toc;
	lVar13 = param_1;
	if (param_4 != 0) {
		lVar13 = param_1 + param_4 * 0x6000;
	}
	uVar6 = param_3;
	lVar7 = param_4;
	uVar8 = param_5;
	uVar9 = param_6;
	uVar10 = param_7;
	lVar4 = IsometricCoord(param_2, (int)param_3);
	uVar5 = ZEXT48(ppuVar3[-0x1d61]);
	iVar12 = 0;
	iVar14 = *(int *)ppuVar3[-0x1d61] + (int)lVar4 * 0x20;
	do {
		if ((int)param_4 <= iVar12) {
			uVar1 = *(ushort *)(iVar14 + 4);
			*puVar2 = (uint)uVar1;
			if (uVar1 != 0) {
				drawLowerScreen(lVar13, (char)uVar5, (char)uVar6, (char)lVar7, (char)uVar8, (char)uVar9, (char)uVar10, (char)lVar11, in_stack_ffffff98);
			}
			uVar1 = *(ushort *)(iVar14 + 6);
			*puVar2 = (uint)uVar1;
			if (uVar1 != 0) {
				drawLowerScreen(lVar13 + 0x20, (char)uVar5, (char)uVar6, (char)lVar7, (char)uVar8, (char)uVar9,
				    (char)uVar10, (char)lVar11, in_stack_ffffff98);
			}
		}
		iVar12 = iVar12 + 1;
		iVar14 = iVar14 + 4;
		lVar13 = lVar13 + -0x6000;
	} while (iVar12 < 6);
	if ((int)param_5 < 8) {
		town_draw_clipped_town_2(param_1, param_2, param_3, param_4, param_5, param_6, param_7, 0, in_stack_ffffff98);
	}
	return;
}

void town_draw_clipped_town_2(longlong param_1, ulonglong param_2, ulonglong param_3, longlong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	short sVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined **ppuVar12;
	char cVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;
	undefined uVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	undefined *puVar24;
	int iVar25;
	int iVar26;
	undefined *puVar27;
	undefined *puVar28;
	int iVar29;
	longlong lVar30;
	undefined4 in_stack_ffffff78;
	undefined uVar31;
	undefined in_stack_ffffff7f;
	undefined4 in_stack_ffffff88;
	undefined4 in_stack_ffffff8c;

	puVar6 = PTR_DAT_100f1954;
	puVar11 = PTR_DAT_100f1950;
	puVar10 = PTR_DAT_100f1880;
	puVar27 = PTR_DAT_100f1878;
	puVar9 = PTR_DAT_100f1874;
	puVar8 = PTR_DAT_100f1834;
	puVar28 = PTR_DAT_100f1828;
	uVar16 = (undefined)param_5;
	uVar20 = (undefined)param_7;
	uVar18 = (undefined)param_6;
	uVar23 = (undefined)param_4;
	uVar14 = (undefined)param_3;
	ppuVar12 = &toc;
	iVar7 = (int)param_2;
	iVar3 = iVar7 * 0x70;
	iVar4 = (int)param_3;
	cVar13 = *(char *)(*(int *)PTR_DAT_100f1944 + iVar3 + iVar4);
	iVar29 = (int)param_5;
	uVar22 = param_8;
	uVar15 = uVar23;
	uVar17 = uVar16;
	uVar19 = uVar18;
	uVar21 = uVar20;
	if (cVar13 != '\0') {
		cVar13 = cVar13 + -1;
		iVar26 = (int)cVar13 * 0x170;
		puVar5 = PTR_DAT_100f1940 + iVar26;
		uVar2 = *(uint *)(puVar5 + 0x28);
		uVar22 = param_8;
		ppuVar12 = &toc;
		puVar24 = PTR_DAT_100f1940;
		if (cVar13 == *PTR_DAT_100f1888) {
			uVar22 = 8;
			ppuVar12 = &toc;
			puVar24 = PTR_DAT_100f1940;
			CelDrawHdrClrHL(0xb5, param_6 - (ulonglong)uVar2, param_7, (ulonglong) * (uint *)(puVar5 + 0x18),
			    (ulonglong) * (uint *)(puVar5 + 0x20), (ulonglong) * (uint *)(puVar5 + 0x24), iVar29, 8,
			    in_stack_ffffff78);
		}
		puVar24 = puVar24 + iVar26;
		uVar14 = (undefined) * (uint *)(puVar24 + 0x18);
		uVar15 = (undefined) * (uint *)(puVar24 + 0x20);
		uVar17 = (undefined) * (uint *)(puVar24 + 0x24);
		uVar21 = 8;
		uVar19 = uVar16;
		Cel2DrawHdrOnly((int)(param_6 - (ulonglong)uVar2), param_7, (ulonglong) * (uint *)(puVar24 + 0x18),
		    (ulonglong) * (uint *)(puVar24 + 0x20), (ulonglong) * (uint *)(puVar24 + 0x24), iVar29, 8,
		    (int)uVar22, in_stack_ffffff78);
	}
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 0x10) != 0) {
		iVar26 = (int)*(short *)(*(int *)puVar6 + iVar7 * 0xe0 + iVar4 * 2 + -2) + 1;
		iVar25 = iVar26 * -0x10c;
		puVar5 = puVar27 + iVar25;
		uVar2 = *(uint *)(puVar5 + 0x44);
		if (-iVar26 == *(int *)puVar10) {
			uVar22 = 8;
			CelDrawHdrClrHL_part(0xa6, param_6 - (ulonglong)uVar2, param_7, (ulonglong) * (uint *)(puVar5 + 0x24),
			    (ulonglong) * (uint *)(puVar5 + 0x34), (ulonglong) * (uint *)(puVar5 + 0x40), iVar29, 8,
			    in_stack_ffffff78);
		}
		puVar5 = puVar27 + iVar25;
		uVar14 = (undefined) * (uint *)(puVar5 + 0x24);
		uVar15 = (undefined) * (uint *)(puVar5 + 0x34);
		uVar17 = (undefined) * (uint *)(puVar5 + 0x40);
		uVar21 = 8;
		uVar19 = uVar16;
		Cel2DrawHdrOnly_part((int)(param_6 - (ulonglong)uVar2), param_7, (ulonglong) * (uint *)(puVar5 + 0x24),
		    (ulonglong) * (uint *)(puVar5 + 0x34), (ulonglong) * (uint *)(puVar5 + 0x40), iVar29, 8,
		    (int)uVar22, in_stack_ffffff78);
	}
	sVar1 = *(short *)(*(int *)puVar6 + iVar7 * 0xe0 + iVar4 * 2);
	if (0 < sVar1) {
		iVar25 = (int)sVar1 + -1;
		iVar26 = iVar25 * 0x10c;
		puVar6 = puVar27 + iVar26;
		uVar2 = *(uint *)(puVar6 + 0x44);
		if (iVar25 == *(int *)puVar10) {
			uVar22 = 8;
			CelDrawHdrClrHL_part(0xa6, param_6 - (ulonglong)uVar2, param_7, (ulonglong) * (uint *)(puVar6 + 0x24),
			    (ulonglong) * (uint *)(puVar6 + 0x34), (ulonglong) * (uint *)(puVar6 + 0x40), iVar29, 8,
			    in_stack_ffffff78);
		}
		puVar27 = puVar27 + iVar26;
		uVar14 = (undefined) * (uint *)(puVar27 + 0x24);
		uVar15 = (undefined) * (uint *)(puVar27 + 0x34);
		uVar17 = (undefined) * (uint *)(puVar27 + 0x40);
		uVar21 = 8;
		uVar19 = uVar16;
		Cel2DrawHdrOnly_part((int)(param_6 - (ulonglong)uVar2), param_7, (ulonglong) * (uint *)(puVar27 + 0x24),
		    (ulonglong) * (uint *)(puVar27 + 0x34), (ulonglong) * (uint *)(puVar27 + 0x40), iVar29, 8,
		    (int)uVar22, in_stack_ffffff78);
	}
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 0x20) != 0) {
		cVar13 = -(*(char *)(*(int *)puVar11 + iVar3 + iVar4 + -1) + '\x01');
		iVar26 = (int)cVar13 * 0x55ec;
		puVar27 = puVar28 + iVar26;
		uVar2 = *(uint *)(puVar27 + 100);
		lVar30 = (param_6 + (ulonglong) * (uint *)(puVar27 + 0x60)) - (ulonglong) * (uint *)(puVar27 + 0x94);
		if (cVar13 == *puVar9) {
			uVar22 = 8;
			Cl2DecodeClrHL(0xa5, lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar27 + 0x7c),
			    (ulonglong) * (uint *)(puVar27 + 0x8c), (ulonglong) * (uint *)(puVar27 + 0x90), iVar29,
			    8, in_stack_ffffff78);
		}
		puVar27 = puVar28 + iVar26;
		uVar14 = (undefined) * (uint *)(puVar27 + 0x7c);
		uVar15 = (undefined) * (uint *)(puVar27 + 0x8c);
		uVar17 = (undefined) * (uint *)(puVar27 + 0x90);
		uVar21 = 8;
		uVar19 = uVar16;
		Cl2DecodeFrm4(lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar27 + 0x7c),
		    (ulonglong) * (uint *)(puVar27 + 0x8c), (ulonglong) * (uint *)(puVar27 + 0x90), iVar29, 8,
		    (int)uVar22, in_stack_ffffff78);
		if ((int)param_8 != 0) {
			if (*(int *)(puVar27 + 0x98) != 0) {
				uVar14 = (undefined)(param_3 + 1);
				uVar19 = (undefined)(param_6 - 0x40);
				uVar15 = uVar23;
				uVar17 = uVar16;
				uVar21 = uVar20;
				FUN_100b1078(param_1 + -0x40, param_2 - 1, param_3 + 1, param_4, param_5, param_6 - 0x40, param_7,
				    (char)uVar22, in_stack_ffffff78);
			}
		}
	}
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 4) != 0) {
		uVar19 = 8;
		uVar21 = 1;
		uVar14 = uVar18;
		uVar15 = uVar20;
		uVar17 = uVar16;
		DrawDeadPlayer(param_2, param_3, param_6, param_7, param_5, 8, 1, uVar22, in_stack_ffffff78);
	}
	cVar13 = *(char *)(*(int *)puVar11 + iVar3 + iVar4);
	if ('\0' < cVar13) {
		cVar13 = cVar13 + -1;
		iVar26 = (int)cVar13 * 0x55ec;
		puVar27 = puVar28 + iVar26;
		uVar2 = *(uint *)(puVar27 + 100);
		lVar30 = (param_6 + (ulonglong) * (uint *)(puVar27 + 0x60)) - (ulonglong) * (uint *)(puVar27 + 0x94);
		if (cVar13 == *puVar9) {
			uVar22 = 8;
			Cl2DecodeClrHL(0xa5, lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar27 + 0x7c),
			    (ulonglong) * (uint *)(puVar27 + 0x8c), (ulonglong) * (uint *)(puVar27 + 0x90), iVar29,
			    8, in_stack_ffffff78);
		}
		puVar28 = puVar28 + iVar26;
		uVar14 = (undefined) * (uint *)(puVar28 + 0x7c);
		uVar15 = (undefined) * (uint *)(puVar28 + 0x8c);
		uVar17 = (undefined) * (uint *)(puVar28 + 0x90);
		uVar21 = 8;
		uVar19 = uVar16;
		Cl2DecodeFrm4(lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar28 + 0x7c),
		    (ulonglong) * (uint *)(puVar28 + 0x8c), (ulonglong) * (uint *)(puVar28 + 0x90), iVar29, 8,
		    (int)uVar22, in_stack_ffffff78);
		if ((int)param_8 != 0) {
			if (*(int *)(puVar28 + 0x98) != 0) {
				uVar14 = (undefined)(param_3 + 1);
				uVar19 = (undefined)(param_6 - 0x40);
				uVar15 = uVar23;
				uVar17 = uVar16;
				uVar21 = uVar20;
				FUN_100b1078(param_1 + -0x40, param_2 - 1, param_3 + 1, param_4, param_5, param_6 - 0x40, param_7,
				    (char)uVar22, in_stack_ffffff78);
			}
		}
	}
	uVar31 = (undefined)in_stack_ffffff78;
	uVar23 = (undefined)uVar22;
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 1) != 0) {
		uVar19 = 8;
		uVar21 = 0;
		uVar14 = uVar18;
		uVar15 = uVar20;
		uVar17 = uVar16;
		DrawClippedMissile(iVar7, param_3, param_6, param_7, param_5, 8, 0, uVar22, in_stack_ffffff78);
	}
	cVar13 = *(char *)(*(int *)ppuVar12[-0x1d66] + iVar3 + iVar4);
	if (cVar13 != '\0') {
		town_special_lower((char)param_1 + (char)*(undefined4 *)(ppuVar12[-0x1da6] + iVar29 * 0x40), cVar13,
		    uVar14, uVar15, uVar17, uVar19, uVar21, uVar23, uVar31, in_stack_ffffff7f,
		    in_stack_ffffff88, in_stack_ffffff8c);
	}
	return;
}

void town_draw_lower_2(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    int param_5, longlong param_6, int param_7, char param_8, undefined4 param_9,
    undefined param_10, undefined4 param_11)

{
	short sVar1;
	ushort uVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	uint *puVar8;
	longlong lVar9;
	ulonglong uVar10;
	longlong lVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	longlong lVar16;
	ulonglong uVar17;
	uint *puVar18;
	int iVar19;
	ulonglong uVar20;
	uint *puVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	longlong lVar26;
	longlong lVar27;
	undefined4 in_stack_ffffff78;

	puVar8 = _DAT_100f2080;
	puVar7 = PTR_DAT_100f1a54;
	puVar6 = PTR_DAT_100f1938;
	puVar5 = PTR_DAT_100f17cc;
	lVar16 = (longlong)param_8;
	uVar15 = SEXT48(param_7);
	uVar13 = SEXT48(param_5);
	uVar17 = ZEXT48(PTR_DAT_100f1a4c);
	iVar4 = (int)param_6;
	uVar3 = (iVar4 + 1) * 2;
	uVar20 = (ulonglong)uVar3;
	iVar19 = (int)param_4;
	uVar14 = param_6;
	if (param_7 != 0) {
		iVar22 = (int)param_2;
		if ((((iVar22 < 0) || (0x6f < iVar22)) || (iVar24 = (int)param_1, iVar24 < 0)) || (0x6f < iVar24)) {
			uVar14 = param_6;
			town_clear_low_buf((undefined *)(*(int *)PTR_DAT_100f17cc + *(int *)(PTR_DAT_100f1938 + iVar19 * 4) + (int)param_3));
		} else {
			sVar1 = *(short *)(*(int *)PTR_DAT_100f1a54 + iVar24 * 0xe0 + iVar22 * 2);
			*_DAT_100f2080 = (int)sVar1;
			if (((longlong)sVar1 & 0xffffffffU) == 0) {
				uVar14 = param_6;
				town_clear_low_buf((undefined *)(*(int *)puVar5 + *(int *)(puVar6 + iVar19 * 4) + (int)param_3));
			} else {
				uVar12 = (ulonglong) * (uint *)puVar5;
				lVar11 = (ulonglong) * (uint *)(puVar6 + iVar19 * 4) + param_3;
				lVar26 = uVar12 + lVar11 + -0x5fe0;
				uVar14 = param_6;
				lVar9 = IsometricCoord(param_1, iVar22);
				uVar10 = (ulonglong) * (uint *)uVar17;
				iVar22 = 0;
				lVar9 = uVar10 + (ulonglong)(uint)((int)lVar9 << 5);
				do {
					if ((iVar4 <= iVar22) && (uVar2 = *(ushort *)((int)lVar9 + 6), *puVar8 = (uint)uVar2, uVar2 != 0)) {
						drawLowerScreen(lVar26, (char)uVar10, (char)lVar11, (char)uVar12, (char)uVar13, (char)uVar14,
						    (char)uVar15, (char)lVar16, in_stack_ffffff78);
					}
					iVar22 = iVar22 + 1;
					lVar9 = lVar9 + 4;
					lVar26 = lVar26 + -0x6000;
				} while (iVar22 < 7);
				if ((int)uVar3 < 8) {
					lVar16 = 0;
					uVar13 = uVar20;
					uVar14 = param_3;
					uVar15 = param_4;
					town_draw_clipped_town_2((ulonglong) * (uint *)puVar5 + (ulonglong) * (uint *)(puVar6 + iVar19 * 4) + param_3, param_1, param_2, param_6,
					    uVar20, param_3, param_4, 0, in_stack_ffffff78);
				}
			}
		}
		param_1 = param_1 + 1;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
	}
	puVar21 = (uint *)(puVar6 + iVar19 * 4);
	lVar9 = param_1 * 0xe0;
	iVar19 = (int)param_2 << 1;
	iVar22 = 0;
	while (true) {
		puVar18 = (uint *)uVar17;
		iVar23 = (int)param_2;
		iVar25 = (int)param_1;
		iVar24 = (int)param_3;
		if (param_5 - param_7 <= iVar22)
			break;
		if (((iVar23 < 0) || (0x6f < iVar23)) || ((iVar25 < 0 || (0x6f < iVar25)))) {
			town_clear_low_buf((undefined *)(*(int *)puVar5 + *puVar21 + iVar24));
		} else {
			*puVar8 = (int)*(short *)(*(int *)puVar7 + (int)lVar9 + iVar19);
			if (*puVar8 == 0) {
				town_clear_low_buf((undefined *)(*(int *)puVar5 + *puVar21 + iVar24));
			} else {
				uVar12 = (ulonglong) * (uint *)puVar5;
				lVar26 = (ulonglong)*puVar21 + param_3;
				lVar27 = uVar12 + lVar26 + -0x6000;
				lVar11 = IsometricCoord(param_1, iVar23);
				uVar10 = (ulonglong) * (uint *)uVar17;
				iVar24 = 0;
				lVar11 = uVar10 + (ulonglong)(uint)((int)lVar11 << 5);
				do {
					if (iVar4 <= iVar24) {
						uVar2 = *(ushort *)((int)lVar11 + 4);
						*puVar8 = (uint)uVar2;
						if (uVar2 != 0) {
							drawLowerScreen(lVar27, (char)uVar10, (char)lVar26, (char)uVar12, (char)uVar13, (char)uVar14,
							    (char)uVar15, (char)lVar16, in_stack_ffffff78);
						}
						uVar2 = *(ushort *)((int)lVar11 + 6);
						*puVar8 = (uint)uVar2;
						if (uVar2 != 0) {
							drawLowerScreen(lVar27 + 0x20, (char)uVar10, (char)lVar26, (char)uVar12, (char)uVar13,
							    (char)uVar14, (char)uVar15, (char)lVar16, in_stack_ffffff78);
						}
					}
					iVar24 = iVar24 + 1;
					lVar11 = lVar11 + 4;
					lVar27 = lVar27 + -0x6000;
				} while (iVar24 < 7);
				if ((int)uVar3 < 8) {
					lVar16 = 1;
					uVar13 = uVar20;
					uVar14 = param_3;
					uVar15 = param_4;
					town_draw_clipped_town_2((ulonglong) * (uint *)puVar5 + (ulonglong)*puVar21 + param_3 + uVar20 * -0x3000, param_1, param_2, param_6, uVar20, param_3, param_4, 1, in_stack_ffffff78);
				}
			}
		}
		lVar9 = lVar9 + 0xe0;
		param_1 = param_1 + 1;
		iVar19 = iVar19 + -2;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
		iVar22 = iVar22 + 1;
	}
	if (param_7 != 0) {
		if ((((iVar23 < 0) || (0x6f < iVar23)) || (iVar25 < 0)) || (0x6f < iVar25)) {
			town_clear_low_buf((undefined *)(*(int *)puVar5 + *puVar21 + iVar24));
		} else {
			*puVar8 = (int)*(short *)(*(int *)puVar7 + iVar25 * 0xe0 + iVar23 * 2);
			if (*puVar8 == 0) {
				town_clear_low_buf((undefined *)(*(int *)puVar5 + *puVar21 + iVar24));
			} else {
				uVar10 = (ulonglong) * (uint *)puVar5;
				lVar11 = (ulonglong)*puVar21 + param_3;
				lVar26 = uVar10 + lVar11 + -0x6000;
				lVar9 = IsometricCoord(param_1, iVar23);
				uVar17 = (ulonglong)*puVar18;
				iVar19 = 0;
				lVar9 = uVar17 + (ulonglong)(uint)((int)lVar9 << 5);
				do {
					if ((iVar4 <= iVar19) && (uVar2 = *(ushort *)((int)lVar9 + 4), *puVar8 = (uint)uVar2, uVar2 != 0)) {
						drawLowerScreen(lVar26, (char)uVar17, (char)lVar11, (char)uVar10, (char)uVar13, (char)uVar14,
						    (char)uVar15, (char)lVar16, in_stack_ffffff78);
					}
					iVar19 = iVar19 + 1;
					lVar9 = lVar9 + 4;
					lVar26 = lVar26 + -0x6000;
				} while (iVar19 < 7);
				if ((int)uVar3 < 8) {
					town_draw_clipped_town_2((ulonglong) * (uint *)puVar5 + (ulonglong)*puVar21 + param_3, param_1, param_2,
					    param_6, uVar20, param_3, param_4, 0, in_stack_ffffff78);
				}
			}
		}
	}
	return;
}

void FUN_100b19d0(longlong param_1, longlong param_2, ulonglong param_3, undefined8 param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, char param_8,
    undefined4 param_9)

{
	ushort uVar1;
	uint *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	undefined8 uVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	longlong lVar11;
	int iVar12;
	ushort *puVar13;
	undefined4 in_stack_ffffff98;

	puVar2 = _DAT_100f2080;
	lVar11 = (longlong)param_8;
	ppuVar3 = &toc;
	uVar6 = param_3;
	uVar7 = param_4;
	uVar8 = param_5;
	uVar9 = param_6;
	uVar10 = param_7;
	lVar4 = IsometricCoord(param_2, (int)param_3);
	uVar5 = ZEXT48(ppuVar3[-0x1d61]);
	iVar12 = 0;
	puVar13 = (ushort *)(*(int *)ppuVar3[-0x1d61] + (int)lVar4 * 0x20);
	lVar4 = param_1;
	do {
		if (iVar12 <= (int)param_4) {
			uVar1 = *puVar13;
			*puVar2 = (uint)uVar1;
			if (uVar1 != 0) {
				drawUpperScreen(lVar4, (char)uVar5, (char)uVar6, (char)uVar7, (char)uVar8, (char)uVar9, (char)uVar10,
				    (char)lVar11, in_stack_ffffff98);
			}
			uVar1 = puVar13[1];
			*puVar2 = (uint)uVar1;
			if (uVar1 != 0) {
				drawUpperScreen(lVar4 + 0x20, (char)uVar5, (char)uVar6, (char)uVar7, (char)uVar8, (char)uVar9,
				    (char)uVar10, (char)lVar11, in_stack_ffffff98);
			}
		}
		iVar12 = iVar12 + 1;
		puVar13 = puVar13 + 2;
		lVar4 = lVar4 + -0x6000;
	} while (iVar12 < 7);
	FUN_100b1aac(param_1, param_2, param_3, param_4, param_5, param_6, param_7, 0, in_stack_ffffff98);
	return;
}

void FUN_100b1aac(longlong param_1, ulonglong param_2, ulonglong param_3, undefined8 param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	short sVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined **ppuVar12;
	char cVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;
	undefined uVar20;
	undefined uVar21;
	int iVar23;
	ulonglong uVar22;
	undefined uVar24;
	undefined *puVar25;
	int iVar26;
	int iVar27;
	undefined *puVar28;
	undefined *puVar29;
	longlong lVar30;
	undefined4 in_stack_ffffff78;
	undefined uVar31;
	undefined in_stack_ffffff7f;
	undefined4 in_stack_ffffff88;
	undefined4 in_stack_ffffff8c;

	puVar6 = PTR_DAT_100f1954;
	puVar11 = PTR_DAT_100f1950;
	puVar10 = PTR_DAT_100f1880;
	puVar28 = PTR_DAT_100f1878;
	puVar9 = PTR_DAT_100f1874;
	puVar8 = PTR_DAT_100f1834;
	puVar29 = PTR_DAT_100f1828;
	uVar16 = (undefined)param_5;
	uVar20 = (undefined)param_7;
	uVar18 = (undefined)param_6;
	uVar24 = (undefined)param_4;
	uVar14 = (undefined)param_3;
	ppuVar12 = &toc;
	iVar7 = (int)param_2;
	iVar3 = iVar7 * 0x70;
	iVar4 = (int)param_3;
	cVar13 = *(char *)(*(int *)PTR_DAT_100f1944 + iVar3 + iVar4);
	iVar23 = (int)param_5;
	uVar22 = param_8;
	uVar15 = uVar24;
	uVar17 = uVar16;
	uVar19 = uVar18;
	uVar21 = uVar20;
	if (cVar13 != '\0') {
		cVar13 = cVar13 + -1;
		iVar27 = (int)cVar13 * 0x170;
		puVar5 = PTR_DAT_100f1940 + iVar27;
		uVar2 = *(uint *)(puVar5 + 0x28);
		uVar22 = param_8;
		ppuVar12 = &toc;
		puVar25 = PTR_DAT_100f1940;
		if (cVar13 == *PTR_DAT_100f1888) {
			uVar22 = param_5;
			ppuVar12 = &toc;
			puVar25 = PTR_DAT_100f1940;
			CelDecodeClr(0xb5, param_6 - (ulonglong)uVar2, param_7, (ulonglong) * (uint *)(puVar5 + 0x18),
			    (ulonglong) * (uint *)(puVar5 + 0x20), (ulonglong) * (uint *)(puVar5 + 0x24), 0, iVar23,
			    in_stack_ffffff78);
		}
		puVar25 = puVar25 + iVar27;
		uVar14 = (undefined) * (uint *)(puVar25 + 0x18);
		uVar15 = (undefined) * (uint *)(puVar25 + 0x20);
		uVar17 = (undefined) * (uint *)(puVar25 + 0x24);
		uVar19 = 0;
		uVar21 = uVar16;
		CelDrawHdrOnly((int)(param_6 - (ulonglong)uVar2), param_7, (ulonglong) * (uint *)(puVar25 + 0x18),
		    (ulonglong) * (uint *)(puVar25 + 0x20), (ulonglong) * (uint *)(puVar25 + 0x24), 0, iVar23,
		    (int)uVar22, in_stack_ffffff78);
	}
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 0x10) != 0) {
		iVar27 = (int)*(short *)(*(int *)puVar6 + iVar7 * 0xe0 + iVar4 * 2 + -2) + 1;
		iVar26 = iVar27 * -0x10c;
		puVar5 = puVar28 + iVar26;
		uVar2 = *(uint *)(puVar5 + 0x44);
		if (-iVar27 == *(int *)puVar10) {
			uVar22 = param_5;
			CelDecodeClr_part(0xa6, param_6 - (ulonglong)uVar2, param_7, (ulonglong) * (uint *)(puVar5 + 0x24),
			    (ulonglong) * (uint *)(puVar5 + 0x34), (ulonglong) * (uint *)(puVar5 + 0x40), 0, iVar23,
			    in_stack_ffffff78);
		}
		puVar5 = puVar28 + iVar26;
		uVar14 = (undefined) * (uint *)(puVar5 + 0x24);
		uVar15 = (undefined) * (uint *)(puVar5 + 0x34);
		uVar17 = (undefined) * (uint *)(puVar5 + 0x40);
		uVar19 = 0;
		uVar21 = uVar16;
		CelDrawHdrOnly_part((int)(param_6 - (ulonglong)uVar2), param_7, (ulonglong) * (uint *)(puVar5 + 0x24),
		    (ulonglong) * (uint *)(puVar5 + 0x34), (ulonglong) * (uint *)(puVar5 + 0x40), 0, iVar23,
		    (int)uVar22, in_stack_ffffff78);
	}
	sVar1 = *(short *)(*(int *)puVar6 + iVar7 * 0xe0 + iVar4 * 2);
	if (0 < sVar1) {
		iVar26 = (int)sVar1 + -1;
		iVar27 = iVar26 * 0x10c;
		puVar6 = puVar28 + iVar27;
		uVar2 = *(uint *)(puVar6 + 0x44);
		if (iVar26 == *(int *)puVar10) {
			uVar22 = param_5;
			CelDecodeClr_part(0xa6, param_6 - (ulonglong)uVar2, param_7, (ulonglong) * (uint *)(puVar6 + 0x24),
			    (ulonglong) * (uint *)(puVar6 + 0x34), (ulonglong) * (uint *)(puVar6 + 0x40), 0, iVar23,
			    in_stack_ffffff78);
		}
		puVar28 = puVar28 + iVar27;
		uVar14 = (undefined) * (uint *)(puVar28 + 0x24);
		uVar15 = (undefined) * (uint *)(puVar28 + 0x34);
		uVar17 = (undefined) * (uint *)(puVar28 + 0x40);
		uVar19 = 0;
		uVar21 = uVar16;
		CelDrawHdrOnly_part((int)(param_6 - (ulonglong)uVar2), param_7, (ulonglong) * (uint *)(puVar28 + 0x24),
		    (ulonglong) * (uint *)(puVar28 + 0x34), (ulonglong) * (uint *)(puVar28 + 0x40), 0, iVar23,
		    (int)uVar22, in_stack_ffffff78);
	}
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 0x20) != 0) {
		cVar13 = -(*(char *)(*(int *)puVar11 + iVar3 + iVar4 + -1) + '\x01');
		iVar27 = (int)cVar13 * 0x55ec;
		puVar28 = puVar29 + iVar27;
		uVar2 = *(uint *)(puVar28 + 100);
		lVar30 = (param_6 + (ulonglong) * (uint *)(puVar28 + 0x60)) - (ulonglong) * (uint *)(puVar28 + 0x94);
		if (cVar13 == *puVar9) {
			uVar22 = param_5;
			Cl2DecodeFrm2(0xa5, lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar28 + 0x7c),
			    (ulonglong) * (uint *)(puVar28 + 0x8c), (ulonglong) * (uint *)(puVar28 + 0x90), 0,
			    iVar23, in_stack_ffffff78);
		}
		puVar28 = puVar29 + iVar27;
		uVar14 = (undefined) * (uint *)(puVar28 + 0x7c);
		uVar15 = (undefined) * (uint *)(puVar28 + 0x8c);
		uVar17 = (undefined) * (uint *)(puVar28 + 0x90);
		uVar19 = 0;
		uVar21 = uVar16;
		Cl2DecodeFrm1(lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar28 + 0x7c),
		    (ulonglong) * (uint *)(puVar28 + 0x8c), (ulonglong) * (uint *)(puVar28 + 0x90), 0, iVar23,
		    (int)uVar22, in_stack_ffffff78);
		if ((int)param_8 != 0) {
			if (*(int *)(puVar28 + 0x98) != 0) {
				uVar14 = (undefined)(param_3 + 1);
				uVar19 = (undefined)(param_6 - 0x40);
				uVar15 = uVar24;
				uVar17 = uVar16;
				uVar21 = uVar20;
				FUN_100b19d0(param_1 + -0x40, param_2 - 1, param_3 + 1, param_4, param_5, param_6 - 0x40, param_7,
				    (char)uVar22, in_stack_ffffff78);
			}
		}
	}
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 4) != 0) {
		uVar17 = 0;
		uVar21 = 0;
		uVar14 = uVar18;
		uVar15 = uVar20;
		uVar19 = uVar16;
		DrawDeadPlayer(param_2, param_3, param_6, param_7, 0, param_5, 0, uVar22, in_stack_ffffff78);
	}
	cVar13 = *(char *)(*(int *)puVar11 + iVar3 + iVar4);
	if ('\0' < cVar13) {
		cVar13 = cVar13 + -1;
		iVar27 = (int)cVar13 * 0x55ec;
		puVar28 = puVar29 + iVar27;
		uVar2 = *(uint *)(puVar28 + 100);
		lVar30 = (param_6 + (ulonglong) * (uint *)(puVar28 + 0x60)) - (ulonglong) * (uint *)(puVar28 + 0x94);
		if (cVar13 == *puVar9) {
			uVar22 = param_5;
			Cl2DecodeFrm2(0xa5, lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar28 + 0x7c),
			    (ulonglong) * (uint *)(puVar28 + 0x8c), (ulonglong) * (uint *)(puVar28 + 0x90), 0,
			    iVar23, in_stack_ffffff78);
		}
		puVar29 = puVar29 + iVar27;
		uVar14 = (undefined) * (uint *)(puVar29 + 0x7c);
		uVar15 = (undefined) * (uint *)(puVar29 + 0x8c);
		uVar17 = (undefined) * (uint *)(puVar29 + 0x90);
		uVar19 = 0;
		uVar21 = uVar16;
		Cl2DecodeFrm1(lVar30, param_7 + (ulonglong)uVar2, (ulonglong) * (uint *)(puVar29 + 0x7c),
		    (ulonglong) * (uint *)(puVar29 + 0x8c), (ulonglong) * (uint *)(puVar29 + 0x90), 0, iVar23,
		    (int)uVar22, in_stack_ffffff78);
		if ((int)param_8 != 0) {
			if (*(int *)(puVar29 + 0x98) != 0) {
				uVar14 = (undefined)(param_3 + 1);
				uVar19 = (undefined)(param_6 - 0x40);
				uVar15 = uVar24;
				uVar17 = uVar16;
				uVar21 = uVar20;
				FUN_100b19d0(param_1 + -0x40, param_2 - 1, param_3 + 1, param_4, param_5, param_6 - 0x40, param_7,
				    (char)uVar22, in_stack_ffffff78);
			}
		}
	}
	uVar31 = (undefined)in_stack_ffffff78;
	uVar24 = (undefined)uVar22;
	if ((*(byte *)(*(int *)puVar8 + iVar3 + iVar4) & 1) != 0) {
		uVar17 = 0;
		uVar21 = 0;
		uVar14 = uVar18;
		uVar15 = uVar20;
		uVar19 = uVar16;
		DrawMissile(iVar7, param_3, param_6, param_7, 0, param_5, 0, uVar22, in_stack_ffffff78);
	}
	cVar13 = *(char *)(*(int *)ppuVar12[-0x1d66] + iVar3 + iVar4);
	if (cVar13 != '\0') {
		FUN_100b07bc((char)param_1, cVar13, uVar14, uVar15, uVar17, uVar19, uVar21, uVar24, uVar31,
		    in_stack_ffffff7f, in_stack_ffffff88, in_stack_ffffff8c);
	}
	return;
}

void town_draw_upper(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    int param_5, ulonglong param_6, int param_7, char param_8, undefined4 param_9)

{
	short sVar1;
	ushort uVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	uint *puVar9;
	ulonglong uVar10;
	longlong lVar11;
	ulonglong uVar12;
	longlong lVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	ulonglong uVar16;
	ulonglong uVar17;
	ulonglong uVar18;
	longlong lVar19;
	longlong lVar20;
	ushort *puVar21;
	uint *puVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	undefined4 in_stack_ffffff78;

	puVar9 = _DAT_100f2080;
	puVar8 = PTR_DAT_100f1a54;
	puVar7 = PTR_DAT_100f1a4c;
	puVar6 = PTR_DAT_100f1938;
	puVar5 = PTR_DAT_100f17cc;
	lVar19 = (longlong)param_8;
	uVar18 = SEXT48(param_7);
	uVar16 = SEXT48(param_5);
	iVar4 = (int)param_6;
	uVar3 = (iVar4 + 1) * 2;
	uVar10 = (ulonglong)uVar3;
	if (8 < (int)uVar3) {
		uVar10 = 8;
	}
	iVar27 = (int)param_4;
	uVar12 = param_4;
	uVar17 = param_6;
	if (param_7 != 0) {
		iVar25 = (int)param_2;
		if ((((iVar25 < 0) || (0x6f < iVar25)) || (iVar23 = (int)param_1, iVar23 < 0)) || (0x6f < iVar23)) {
			uVar12 = param_4;
			uVar17 = param_6;
			FUN_100b0678((undefined *)(*(int *)PTR_DAT_100f17cc + *(int *)(PTR_DAT_100f1938 + iVar27 * 4) + (int)param_3));
		} else {
			sVar1 = *(short *)(*(int *)PTR_DAT_100f1a54 + iVar23 * 0xe0 + iVar25 * 2);
			*_DAT_100f2080 = (int)sVar1;
			if (((longlong)sVar1 & 0xffffffffU) == 0) {
				uVar12 = param_4;
				uVar17 = param_6;
				FUN_100b0678((undefined *)(*(int *)puVar5 + *(int *)(puVar6 + iVar27 * 4) + (int)param_3));
			} else {
				uVar15 = (ulonglong) * (uint *)puVar5;
				lVar13 = (ulonglong) * (uint *)(puVar6 + iVar27 * 4) + param_3;
				lVar20 = uVar15 + lVar13 + 0x20;
				uVar12 = param_2;
				uVar17 = param_6;
				lVar11 = IsometricCoord(param_1, iVar25);
				iVar23 = 0;
				iVar25 = *(int *)puVar7 + (int)lVar11 * 0x20;
				do {
					if ((iVar23 <= iVar4) && (uVar2 = *(ushort *)(iVar25 + 2), *puVar9 = (uint)uVar2, uVar2 != 0)) {
						drawUpperScreen(lVar20, (char)uVar12, (char)lVar13, (char)uVar15, (char)uVar16, (char)uVar17,
						    (char)uVar18, (char)lVar19, in_stack_ffffff78);
					}
					iVar23 = iVar23 + 1;
					iVar25 = iVar25 + 4;
					lVar20 = lVar20 + -0x6000;
				} while (iVar23 < 7);
				lVar19 = 0;
				uVar12 = param_6;
				uVar16 = uVar10;
				uVar17 = param_3;
				uVar18 = param_4;
				FUN_100b1aac((ulonglong) * (uint *)puVar5 + (ulonglong) * (uint *)(puVar6 + iVar27 * 4) + param_3, param_1, param_2, param_6,
				    uVar10, param_3, param_4, 0, in_stack_ffffff78);
			}
		}
		param_1 = param_1 + 1;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
	}
	lVar11 = param_1 * 0xe0;
	puVar22 = (uint *)(puVar6 + iVar27 * 4);
	iVar27 = (int)param_2 << 1;
	iVar25 = 0;
	while (true) {
		iVar26 = (int)param_2;
		iVar24 = (int)param_1;
		iVar23 = (int)param_3;
		if (param_5 - param_7 <= iVar25)
			break;
		if (((iVar26 < 0) || (0x6f < iVar26)) || ((iVar24 < 0 || (0x6f < iVar24)))) {
			FUN_100b0678((undefined *)(*(int *)puVar5 + *puVar22 + iVar23));
		} else {
			*puVar9 = (int)*(short *)(*(int *)puVar8 + (int)lVar11 + iVar27);
			if (*puVar9 == 0) {
				FUN_100b0678((undefined *)(*(int *)puVar5 + *puVar22 + iVar23));
			} else {
				uVar14 = (ulonglong) * (uint *)puVar5;
				lVar20 = uVar14 + (ulonglong)*puVar22 + param_3;
				uVar15 = param_2;
				lVar13 = IsometricCoord(param_1, iVar26);
				iVar23 = 0;
				lVar13 = (ulonglong) * (uint *)puVar7 + (ulonglong)(uint)((int)lVar13 << 5);
				do {
					if (iVar23 <= iVar4) {
						uVar2 = *(ushort *)lVar13;
						*puVar9 = (uint)uVar2;
						if (uVar2 != 0) {
							drawUpperScreen(lVar20, (char)uVar15, (char)uVar14, (char)uVar12, (char)uVar16, (char)uVar17,
							    (char)uVar18, (char)lVar19, in_stack_ffffff78);
						}
						uVar2 = *(ushort *)((int)lVar13 + 2);
						*puVar9 = (uint)uVar2;
						if (uVar2 != 0) {
							drawUpperScreen(lVar20 + 0x20, (char)uVar15, (char)uVar14, (char)uVar12, (char)uVar16,
							    (char)uVar17, (char)uVar18, (char)lVar19, in_stack_ffffff78);
						}
					}
					iVar23 = iVar23 + 1;
					lVar13 = lVar13 + 4;
					lVar20 = lVar20 + -0x6000;
				} while (iVar23 < 7);
				lVar19 = 1;
				uVar12 = param_6;
				uVar16 = uVar10;
				uVar17 = param_3;
				uVar18 = param_4;
				FUN_100b1aac((ulonglong) * (uint *)puVar5 + (ulonglong)*puVar22 + param_3, param_1, param_2,
				    param_6, uVar10, param_3, param_4, 1, in_stack_ffffff78);
			}
		}
		lVar11 = lVar11 + 0xe0;
		param_1 = param_1 + 1;
		iVar27 = iVar27 + -2;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
		iVar25 = iVar25 + 1;
	}
	if (param_7 != 0) {
		if ((((iVar26 < 0) || (0x6f < iVar26)) || (iVar24 < 0)) || (0x6f < iVar24)) {
			FUN_100b0678((undefined *)(*(int *)puVar5 + *puVar22 + iVar23));
		} else {
			*puVar9 = (int)*(short *)(*(int *)puVar8 + iVar24 * 0xe0 + iVar26 * 2);
			if (*puVar9 == 0) {
				FUN_100b0678((undefined *)(*(int *)puVar5 + *puVar22 + iVar23));
			} else {
				uVar14 = (ulonglong) * (uint *)puVar5;
				lVar13 = uVar14 + (ulonglong)*puVar22 + param_3;
				uVar15 = param_2;
				lVar11 = IsometricCoord(param_1, iVar26);
				iVar27 = 0;
				puVar21 = (ushort *)(*(int *)puVar7 + (int)lVar11 * 0x20);
				do {
					if ((iVar27 <= iVar4) && (uVar2 = *puVar21, *puVar9 = (uint)uVar2, uVar2 != 0)) {
						drawUpperScreen(lVar13, (char)uVar15, (char)uVar14, (char)uVar12, (char)uVar16, (char)uVar17,
						    (char)uVar18, (char)lVar19, in_stack_ffffff78);
					}
					iVar27 = iVar27 + 1;
					puVar21 = puVar21 + 2;
					lVar13 = lVar13 + -0x6000;
				} while (iVar27 < 7);
				FUN_100b1aac((ulonglong) * (uint *)puVar5 + (ulonglong)*puVar22 + param_3, param_1, param_2,
				    param_6, uVar10, param_3, param_4, 0, in_stack_ffffff78);
			}
		}
	}
	return;
}

void T_DrawGame(longlong param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, char param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	undefined8 uVar7;
	longlong lVar8;
	longlong lVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	int iVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	int iVar15;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffd0;

	puVar5 = _DAT_100f1d74;
	puVar4 = PTR_DAT_100f1938;
	puVar3 = PTR_DAT_100f180c;
	puVar2 = PTR_DAT_100f17cc;
	puVar1 = PTR_DAT_100f17c8;
	lVar8 = (longlong)param_8;
	uVar10 = param_1 - 10;
	uVar11 = param_2 - 1;
	iVar12 = 10;
	*_DAT_100f1d78 = 0x280;
	puVar6 = _DAT_100f1d70;
	*puVar5 = 0x160;
	puVar5 = _DAT_100f1d6c;
	*puVar6 = 10;
	*puVar5 = 0xb;
	uVar14 = (ulonglong) * (uint *)PTR_DAT_100f1818 + 0x40;
	uVar13 = (ulonglong) * (uint *)(PTR_DAT_100f1818 + 4) + 0xaf;
	if ((*(int *)puVar3 != 0) || (*(int *)PTR_DAT_100f1808 != 0)) {
		iVar12 = 6;
		uVar10 = param_1 - 8;
		uVar11 = param_2 - 3;
		uVar14 = (ulonglong) * (uint *)PTR_DAT_100f1818 + 0x160;
	}
	if ((*(int *)PTR_DAT_100f1814 != 0) || (*(int *)PTR_DAT_100f1810 != 0)) {
		iVar12 = 6;
		uVar10 = uVar10 + 2;
		uVar11 = uVar11 - 2;
		uVar14 = uVar14 - 0x20;
	}
	if (*(uint *)(PTR_DAT_100f1818 + 0x10) < 9) {
		// WARNING: Could not recover jumptable at 0x100b23cc. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f3968 + *(uint *)(PTR_DAT_100f1818 + 0x10) * 4))();
		return;
	}
	lVar9 = 0;
	*(int *)puVar1 = *(int *)puVar2 + *(int *)(puVar4 + 0x280);
	do {
		town_draw_upper(uVar10, uVar11, uVar14, uVar13, iVar12, lVar9, 0, (char)lVar8, in_stack_ffffffa8);
		uVar11 = uVar11 + 1;
		uVar7 = 1;
		town_draw_upper(uVar10, uVar11, uVar14 - 0x20, uVar13 + 0x10, iVar12, lVar9, 1, (char)lVar8,
		    in_stack_ffffffa8);
		lVar9 = lVar9 + 1;
		uVar13 = uVar13 + 0x20;
		uVar10 = uVar10 + 1;
	} while ((int)lVar9 < 7);
	iVar15 = 0;
	*(int *)puVar1 = *(int *)puVar2 + *(int *)(puVar4 + 0x800);
	while (iVar15 < 5) {
		town_draw_lower(uVar10, uVar11, uVar14, uVar13, iVar12, 0, (char)uVar7, (char)lVar8, in_stack_ffffffa8);
		uVar11 = uVar11 + 1;
		town_draw_lower(uVar10, uVar11, uVar14 - 0x20, uVar13 + 0x10, iVar12, 1, (char)uVar7, (char)lVar8,
		    in_stack_ffffffa8);
		uVar10 = uVar10 + 1;
		uVar13 = uVar13 + 0x20;
		iVar15 = iVar15 + 1;
	}
	lVar9 = 0;
	do {
		town_draw_lower_2(uVar10, uVar11, uVar14, uVar13, iVar12, lVar9, 0, (char)lVar8, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffd0);
		uVar11 = uVar11 + 1;
		town_draw_lower_2(uVar10, uVar11, uVar14 - 0x20, uVar13 + 0x10, iVar12, lVar9, 1, (char)lVar8,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffd0);
		lVar9 = lVar9 + 1;
		uVar13 = uVar13 + 0x20;
		uVar10 = uVar10 + 1;
	} while ((int)lVar9 < 7);
	return;
}

void T_DrawZoom(longlong param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, char param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	undefined2 uVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined2 *puVar11;
	int iVar12;
	undefined *puVar13;
	int iVar14;
	undefined2 *puVar15;
	longlong lVar16;
	undefined8 uVar17;
	int iVar18;
	longlong lVar19;
	int iVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	ulonglong uVar23;
	ulonglong uVar24;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffd0;

	puVar7 = _DAT_100f1d74;
	puVar5 = _DAT_100f1d6c;
	puVar4 = PTR_DAT_100f1938;
	puVar2 = PTR_DAT_100f17cc;
	puVar13 = PTR_DAT_100f17c8;
	lVar16 = (longlong)param_8;
	uVar9 = ZEXT48(&toc);
	uVar21 = param_1 - 6;
	uVar22 = param_2 - 1;
	*_DAT_100f1d78 = 0x180;
	puVar6 = _DAT_100f1d70;
	*puVar7 = 0xc0;
	*puVar6 = 6;
	puVar3 = PTR_DAT_100f1818;
	*puVar5 = 6;
	uVar10 = (ulonglong) * (uint *)puVar3;
	uVar24 = uVar10 + 0x40;
	uVar23 = (ulonglong) * (uint *)(puVar3 + 4) + 0x8f;
	if (8 < *(uint *)(puVar3 + 0x10)) {
		lVar19 = 0;
		*(int *)puVar13 = *(int *)puVar2 + *(int *)(puVar4 + 0x23c);
		do {
			town_draw_upper(uVar21, uVar22, uVar24, uVar23, 6, lVar19, 0, (char)lVar16, in_stack_ffffffa8);
			uVar22 = uVar22 + 1;
			uVar17 = 1;
			town_draw_upper(uVar21, uVar22, uVar10 + 0x20, uVar23 + 0x10, 6, lVar19, 1, (char)lVar16,
			    in_stack_ffffffa8);
			lVar19 = lVar19 + 1;
			uVar23 = uVar23 + 0x20;
			uVar21 = uVar21 + 1;
		} while ((int)lVar19 < 7);
		iVar20 = 0;
		*(int *)puVar13 = *(int *)puVar2 + *(int *)(puVar4 + 0x500);
		while (iVar20 < 0) {
			town_draw_lower(uVar21, uVar22, uVar24, uVar23, 6, 0, (char)uVar17, (char)lVar16, in_stack_ffffffa8);
			uVar22 = uVar22 + 1;
			town_draw_lower(uVar21, uVar22, uVar10 + 0x20, uVar23 + 0x10, 6, 1, (char)uVar17, (char)lVar16,
			    in_stack_ffffffa8);
			uVar21 = uVar21 + 1;
			uVar23 = uVar23 + 0x20;
			iVar20 = iVar20 + 1;
		}
		lVar19 = 0;
		do {
			town_draw_lower_2(uVar21, uVar22, uVar24, uVar23, 6, lVar19, 0, (char)lVar16, in_stack_ffffffa8,
			    in_stack_ffffffaf, in_stack_ffffffd0);
			uVar22 = uVar22 + 1;
			town_draw_lower_2(uVar21, uVar22, uVar10 + 0x20, uVar23 + 0x10, 6, lVar19, 1, (char)lVar16,
			    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffd0);
			lVar19 = lVar19 + 1;
			uVar23 = uVar23 + 0x20;
			uVar21 = uVar21 + 1;
		} while ((int)lVar19 < 7);
		iVar20 = (int)uVar9;
		if ((**(int **)(iVar20 + -0x77c4) == 0) && (**(int **)(iVar20 + -0x77c8) == 0)) {
			if ((**(int **)(iVar20 + -0x77bc) == 0) && (**(int **)(iVar20 + -0x77c0) == 0)) {
				iVar12 = 0x3bd60;
				iVar20 = 0x5fa40;
				iVar14 = 0x140;
			} else {
				iVar12 = 0x3bdb0;
				iVar20 = 0x5fa40;
				iVar14 = 0xa0;
			}
		} else {
			iVar12 = 0x3bdb0;
			iVar20 = 0x5fb80;
			iVar14 = 0xa0;
		}
		iVar18 = iVar14 + 0x300;
		puVar11 = (undefined2 *)(*(int *)puVar2 + iVar20);
		puVar13 = (undefined *)(*(int *)puVar2 + iVar12);
		puVar15 = puVar11 + 0x180;
		lVar16 = 0xb0;
		iVar20 = iVar14;
		do {
			do {
				uVar1 = *puVar13;
				iVar20 = iVar20 + -1;
				puVar13 = puVar13 + 1;
				uVar8 = CONCAT11(uVar1, uVar1);
				*puVar11 = uVar8;
				puVar11 = puVar11 + 1;
				*puVar15 = uVar8;
				puVar15 = puVar15 + 1;
			} while (iVar20 != 0);
			lVar16 = lVar16 + -1;
			puVar13 = puVar13 + -iVar18;
			puVar15 = puVar15 + iVar18 * 0x7fffffff;
			puVar11 = puVar11 + iVar18 * 0x7fffffff;
			iVar20 = iVar14;
		} while (lVar16 != 0);
		return;
	}
	// WARNING: Could not recover jumptable at 0x100b2624. Too many branches
	// WARNING: Treating indirect jump as call
	(**(code **)(_DAT_100f3964 + *(uint *)(puVar3 + 0x10) * 4))();
	return;
}

void T_DrawView(longlong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	undefined uVar7;
	ulonglong uVar8;
	undefined uVar9;
	ulonglong uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined4 in_stack_ffffffc8;

	puVar4 = _DAT_100f1d3c;
	puVar2 = PTR_DAT_100f1918;
	puVar1 = PTR_DAT_100f18a0;
	uVar13 = (undefined7)((ulonglong)param_5 >> 8);
	uVar14 = (undefined)param_5;
	ppuVar5 = &toc;
	uVar10 = ZEXT48(_DAT_100f1d3c);
	*_DAT_100f1d40 = 0;
	puVar3 = PTR_DAT_100f1964;
	uVar8 = ZEXT48(PTR_DAT_100f1964);
	*puVar4 = 0;
	uVar11 = SUB41(puVar4, 0);
	uVar9 = SUB41(puVar3, 0);
	if (*(int *)puVar3 == 0) {
		T_DrawZoom(param_1, param_2, uVar9, uVar11, uVar14, (char)param_6, (char)param_7, (char)param_8,
		    in_stack_ffffffc8);
	} else {
		T_DrawGame(param_1, param_2, uVar9, uVar11, uVar14, (char)param_6, (char)param_7, (char)param_8,
		    in_stack_ffffffc8);
	}
	if (*(int *)ppuVar5[-0x1dde] != 0) {
		DrawAutomap((char)ppuVar5[-0x1dde], (char)param_2, (char)uVar8, (char)uVar10, uVar14, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if ((*ppuVar5[-0x1dd9] != '\0') && (*puVar1 == '\0')) {
		DrawSText((char)ppuVar5[-0x1dd9], (char)param_2, (char)uVar8, (char)uVar10, uVar14, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if (*(int *)ppuVar5[-0x1def] == 0) {
		if (*(int *)ppuVar5[-0x1df0] != 0) {
			DrawSpellBook();
		}
	} else {
		DrawInv();
	}
	DrawDurIcon();
	if (*(int *)ppuVar5[-0x1df1] == 0) {
		if (*(int *)ppuVar5[-0x1df2] == 0) {
			param_2 = ZEXT48(ppuVar5[-0x1dea]);
			if ((*(int *)(ppuVar5[-0x1dea] + *(int *)ppuVar5[-0x1deb] * 0x55ec + 0x180) != 0) && (*(int *)puVar2 == 0)) {
				DrawLevelUpIcon();
			}
		} else {
			DrawQuestLog();
		}
	} else {
		DrawChr();
	}
	uVar6 = ZEXT48(ppuVar5[-0x1d9d]);
	if (*(int *)ppuVar5[-0x1d9d] != 0) {
		uVar6 = DrawUniqueInfo();
	}
	uVar17 = (undefined)param_8;
	uVar16 = (undefined)param_7;
	uVar15 = (undefined)param_6;
	uVar12 = (undefined)uVar10;
	uVar11 = (undefined)uVar8;
	uVar9 = (undefined)param_2;
	if (*puVar1 != '\0') {
		DrawQText(uVar6, param_2, uVar8, uVar10, CONCAT71(uVar13, uVar14), param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	if (*(int *)puVar2 != 0) {
		DrawSpellList();
	}
	if (*(int *)ppuVar5[-0x1dc1] != 0) {
		DrawGoldSplit((ulonglong) * (uint *)ppuVar5[-0x1dc2]);
	}
	if (*(int *)ppuVar5[-0x1d75] != 0) {
		DrawHelp();
	}
	if (*ppuVar5[-0x1d76] != '\0') {
		DrawDiabloMsg();
	}
	if ((*(int *)ppuVar5[-0x1d74] != 0) && (*(int *)ppuVar5[-0x1d73] == 0)) {
		gmenu_draw_pause();
	}
	DrawPlrMsg();
	gmenu_draw();
	doom_draw();
	uVar7 = DrawInfoBox();
	uVar7 = DrawLifeFlask(uVar7, uVar9, uVar11, uVar12, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffc8);
	DrawManaFlask(uVar7, uVar9, uVar11, uVar12, uVar14, uVar15, uVar16, uVar17, in_stack_ffffffc8);
	return;
}

void SetTownMicros(undefined8 param_1, undefined8 param_2, longlong param_3, longlong param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	short sVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined4 *puVar7;
	undefined4 *puVar8;
	undefined4 *puVar9;
	undefined4 *puVar10;
	ulonglong uVar11;
	int iVar12;
	ulonglong uVar13;
	longlong lVar14;
	undefined2 *puVar15;
	undefined uVar16;
	uint uVar17;
	undefined uVar18;
	longlong lVar19;
	longlong lVar20;
	longlong lVar21;
	int iVar22;
	longlong lVar23;
	int iVar24;
	int iVar25;
	longlong lVar26;
	undefined4 in_stack_ffffff78;

	puVar10 = _DAT_100f1d78;
	puVar9 = _DAT_100f1d74;
	puVar8 = _DAT_100f1d70;
	puVar7 = _DAT_100f1d6c;
	puVar6 = PTR_DAT_100f1a60;
	puVar5 = PTR_DAT_100f1a54;
	puVar4 = PTR_DAT_100f1a4c;
	uVar18 = (undefined)param_5;
	lVar21 = (longlong)param_8;
	lVar20 = (longlong)param_7;
	lVar19 = (longlong)param_6;
	uVar11 = ZEXT48(&toc);
	uVar13 = FUN_100b8f7c((ulonglong) * (uint *)PTR_DAT_100f1a60, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff78);
	iVar22 = 0;
	iVar24 = 0;
	do {
		lVar23 = 0;
		iVar25 = 0;
		do {
			sVar1 = *(short *)(iVar24 + *(int *)puVar5 + iVar25);
			lVar14 = IsometricCoord(lVar23, iVar22);
			iVar12 = (int)uVar11;
			lVar14 = (ulonglong) * (uint *)puVar4 + (ulonglong)(uint)((int)lVar14 << 5);
			uVar16 = (undefined)lVar14;
			if (sVar1 == 0) {
				puVar15 = (undefined2 *)lVar14;
				*puVar15 = 0;
				puVar15[1] = 0;
				puVar15[2] = 0;
				puVar15[3] = 0;
				puVar15[4] = 0;
				puVar15[5] = 0;
				puVar15[6] = 0;
				puVar15[7] = 0;
				puVar15[8] = 0;
				puVar15[9] = 0;
				puVar15[10] = 0;
				puVar15[0xb] = 0;
				puVar15[0xc] = 0;
				puVar15[0xd] = 0;
				puVar15[0xe] = 0;
				puVar15[0xf] = 0;
			} else {
				lVar26 = 2;
				param_4 = uVar13 + (ulonglong)(uint)(((int)sVar1 + -1) * 0x20);
				param_3 = 0;
				do {
					uVar17 = (uint)param_3;
					iVar3 = (int)param_4;
					puVar2 = (undefined *)(iVar3 + (0xe - (uVar17 & 0xe)) * 2);
					puVar15 = (undefined2 *)lVar14;
					*puVar15 = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + ((0xe - (uVar17 + 1 & 0xe)) + (uVar17 + 1 & 1)) * 2);
					puVar15[1] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + (0xe - (uVar17 + 2 & 0xe)) * 2);
					puVar15[2] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + ((0xe - (uVar17 + 3 & 0xe)) + (uVar17 + 3 & 1)) * 2);
					puVar15[3] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + (0xe - (uVar17 + 4 & 0xe)) * 2);
					puVar15[4] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + ((0xe - (uVar17 + 5 & 0xe)) + (uVar17 + 5 & 1)) * 2);
					puVar15[5] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + (0xe - (uVar17 + 6 & 0xe)) * 2);
					puVar15[6] = CONCAT11(puVar2[1], *puVar2);
					puVar2 = (undefined *)(iVar3 + ((0xe - (uVar17 + 7 & 0xe)) + (uVar17 + 7 & 1)) * 2);
					param_3 = param_3 + 8;
					puVar15[7] = CONCAT11(puVar2[1], *puVar2);
					lVar14 = lVar14 + 0x10;
					uVar16 = (undefined)lVar14;
					lVar26 = lVar26 + -1;
				} while (lVar26 != 0);
			}
			lVar23 = lVar23 + 1;
			iVar25 = iVar25 + 0xe0;
		} while ((int)lVar23 < 0x70);
		iVar22 = iVar22 + 1;
		iVar24 = iVar24 + 2;
	} while (iVar22 < 0x70);
	FUN_100b9100(*(int *)puVar6, uVar16, (char)param_3, (char)param_4, uVar18, (char)lVar19, (char)lVar20,
	    (char)lVar21, in_stack_ffffff78);
	if (**(int **)(iVar12 + -0x766c) == 0) {
		*puVar10 = 0x180;
		*puVar9 = 0xe0;
		*puVar8 = 6;
		*puVar7 = 7;
	} else {
		*puVar10 = 0x280;
		*puVar9 = 0x160;
		*puVar8 = 10;
		*puVar7 = 0xb;
	}
	return;
}

void FUN_100b2d3c(longlong param_1, longlong param_2, longlong param_3, undefined8 param_4,
    longlong param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	short sVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	longlong lVar8;
	undefined uVar9;
	ulonglong uVar10;
	undefined uVar11;
	undefined8 uVar12;
	longlong lVar13;
	undefined uVar14;
	longlong lVar15;
	undefined uVar16;
	longlong lVar17;
	undefined uVar18;
	longlong lVar19;
	undefined uVar20;
	longlong lVar21;
	undefined uVar22;
	longlong lVar23;
	undefined4 in_stack_ffffffa8;

	puVar5 = PTR_DAT_100f1a54;
	lVar21 = (longlong)param_8;
	lVar19 = (longlong)param_7;
	lVar17 = (longlong)param_6;
	lVar8 = param_2;
	lVar13 = param_3;
	uVar12 = param_4;
	lVar15 = param_5;
	uVar6 = FUN_100b8f7c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	uVar7 = FUN_100b8f7c(param_2, lVar8, lVar13, uVar12, lVar15, (int)lVar17, (int)lVar19, (int)lVar21,
	    in_stack_ffffffa8);
	uVar10 = (ulonglong)(uint)((int)param_4 << 1);
	lVar15 = 4;
	lVar13 = 0;
	while (true) {
		uVar22 = (undefined)lVar21;
		uVar20 = (undefined)lVar19;
		uVar18 = (undefined)lVar17;
		uVar16 = (undefined)lVar15;
		uVar14 = (undefined)lVar13;
		uVar11 = (undefined)uVar10;
		uVar9 = (undefined)lVar8;
		if (param_6 <= (int)lVar13)
			break;
		lVar8 = param_3 * 0xe0;
		lVar23 = param_5;
		if (0 < (int)param_5) {
			do {
				puVar2 = (undefined *)((int)uVar7 + (int)lVar15);
				sVar1 = CONCAT11(puVar2[1], *puVar2);
				iVar4 = (int)lVar8;
				iVar3 = (int)uVar10;
				if (sVar1 == 0) {
					lVar19 = 0;
					*(undefined2 *)(iVar3 + *(int *)puVar5 + iVar4) = 0;
					*(undefined2 *)(iVar3 + *(int *)puVar5 + iVar4 + 0xe0) = 0;
					*(undefined2 *)(iVar3 + *(int *)puVar5 + iVar4 + 2) = 0;
					lVar17 = (ulonglong) * (uint *)puVar5 + lVar8;
					*(undefined2 *)(iVar3 + (int)lVar17 + 0xe2) = 0;
				} else {
					puVar2 = (undefined *)((int)uVar6 + ((int)sVar1 + -1) * 8);
					*(short *)(iVar3 + *(int *)puVar5 + iVar4) = CONCAT11(puVar2[1], *puVar2) + 1;
					*(short *)(iVar3 + *(int *)puVar5 + iVar4 + 0xe0) = CONCAT11(puVar2[3], puVar2[2]) + 1;
					lVar21 = (longlong)CONCAT11(puVar2[5], puVar2[4]) + 1;
					*(undefined2 *)(iVar3 + *(int *)puVar5 + iVar4 + 2) = (short)lVar21;
					lVar17 = (ulonglong) * (uint *)puVar5 + lVar8;
					lVar19 = (longlong)CONCAT11(puVar2[7], puVar2[6]) + 1;
					*(undefined2 *)(iVar3 + (int)lVar17 + 0xe2) = (short)lVar19;
				}
				lVar8 = lVar8 + 0x1c0;
				lVar15 = lVar15 + 2;
				lVar23 = lVar23 + -1;
			} while (lVar23 != 0);
		}
		uVar10 = uVar10 + 4;
		lVar13 = lVar13 + 1;
	}
	FUN_100b9100((int)param_1, uVar9, uVar11, uVar14, uVar16, uVar18, uVar20, uVar22, in_stack_ffffffa8);
	FUN_100b9100((int)param_2, uVar9, uVar11, uVar14, uVar16, uVar18, uVar20, uVar22, in_stack_ffffffa8);
	return;
}

void FUN_100b2eac(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	ulonglong uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f1a54;
	uVar11 = (undefined)param_8;
	uVar10 = (undefined)param_7;
	uVar9 = (undefined)param_6;
	uVar5 = FUN_100b8f7c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	lVar8 = uVar5 + (ulonglong)(uint)(((int)param_4 + -1) * 8);
	puVar2 = (undefined *)lVar8;
	uVar1 = (int)param_3 * 2;
	iVar3 = (int)(param_2 * 0xe0);
	*(short *)(*(int *)puVar4 + iVar3 + uVar1) = CONCAT11(puVar2[1], *puVar2) + 1;
	*(short *)(*(int *)puVar4 + iVar3 + uVar1 + 0xe0) = CONCAT11(puVar2[3], puVar2[2]) + 1;
	*(short *)(*(int *)puVar4 + iVar3 + uVar1 + 2) = CONCAT11(puVar2[5], puVar2[4]) + 1;
	lVar7 = (longlong)CONCAT11(puVar2[7], puVar2[6]) + 1;
	lVar6 = (ulonglong) * (uint *)puVar4 + param_2 * 0xe0 + (ulonglong)uVar1;
	*(undefined2 *)((int)lVar6 + 0xe2) = (short)lVar7;
	FUN_100b9100((int)param_1, (char)lVar6, (char)lVar7, (char)uVar1, (char)lVar8, uVar9, uVar10, uVar11,
	    in_stack_ffffffb8);
	return;
}

void T_Pass3(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined8 uVar10;
	undefined uVar11;
	undefined8 uVar12;
	undefined uVar13;
	undefined8 uVar14;
	undefined *puVar15;
	undefined4 uVar16;
	undefined uVar17;
	longlong lVar18;
	undefined4 uVar19;
	undefined uVar20;
	longlong lVar21;
	undefined4 uVar22;
	undefined uVar23;
	int iVar24;
	int iVar26;
	longlong lVar25;
	longlong lVar27;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;
	int *local_18;
	int *local_14[5];

	puVar15 = PTR_DAT_100f1a54;
	puVar5 = PTR_DAT_100f1824;
	uVar6 = ZEXT48(&toc);
	iVar24 = 0;
	lVar21 = 0;
	do {
		lVar18 = 0;
		lVar27 = 0xe;
		uVar14 = 0;
		uVar12 = 0;
		uVar10 = 0;
		do {
			iVar4 = (int)lVar18;
			iVar26 = (int)lVar21;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4 + 0xe0) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4 + 2) = 0;
			iVar2 = iVar4 + 0x1c0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4 + 0xe2) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar2) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar2 + 0xe0) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar2 + 2) = 0;
			iVar3 = iVar4 + 0x380;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar2 + 0xe2) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar3) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar3 + 0xe0) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar3 + 2) = 0;
			iVar4 = iVar4 + 0x540;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar3 + 0xe2) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4 + 0xe0) = 0;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4 + 2) = 0;
			lVar18 = lVar18 + 0x700;
			*(undefined2 *)(iVar26 + *(int *)puVar15 + iVar4 + 0xe2) = 0;
			lVar27 = lVar27 + -1;
		} while (lVar27 != 0);
		iVar24 = iVar24 + 2;
		lVar21 = lVar21 + 4;
	} while (iVar24 < 0x70);
	lVar27 = LoadFileInMem((ulonglong)_DAT_100f3960, (undefined4 *)0x0, 0, 0, 0, puVar15, (int)lVar18,
	    (int)lVar21, in_stack_ffffffb8);
	local_14[0] = (int *)lVar27;
	uVar7 = LoadFileInMem((ulonglong) * (uint *)((int)uVar6 + -0x5674), (undefined4 *)0x0, uVar10, uVar12,
	    uVar14, puVar15, (int)lVar18, (int)lVar21, in_stack_ffffffb8);
	local_18 = (int *)uVar7;
	uVar10 = 0x2e;
	uVar12 = 0x2e;
	uVar8 = (undefined)uVar7;
	uVar14 = 0x19;
	uVar16 = 0x19;
	FUN_100b2d3c(ZEXT48(local_14[0]), uVar7 & 0xffffffff, 0x2e, 0x2e, 0x19, 0x19, (int)lVar18, (int)lVar21,
	    in_stack_ffffffb8);
	mem_free_dbg(&local_18, uVar8, (char)uVar10, (char)uVar12, (char)uVar14, (char)uVar16, (char)lVar18,
	    (char)lVar21, in_stack_ffffffb8);
	uVar7 = LoadFileInMem((ulonglong) * (uint *)((int)uVar6 + -0x5678), (undefined4 *)0x0, uVar10, uVar12,
	    uVar14, uVar16, (int)lVar18, (int)lVar21, in_stack_ffffffb8);
	local_18 = (int *)uVar7;
	uVar10 = 0x2e;
	uVar12 = 0;
	uVar8 = (undefined)uVar7;
	uVar14 = 0x19;
	uVar16 = 0x17;
	FUN_100b2d3c(ZEXT48(local_14[0]), uVar7 & 0xffffffff, 0x2e, 0, 0x19, 0x17, (int)lVar18, (int)lVar21,
	    in_stack_ffffffb8);
	mem_free_dbg(&local_18, uVar8, (char)uVar10, (char)uVar12, (char)uVar14, (char)uVar16, (char)lVar18,
	    (char)lVar21, in_stack_ffffffb8);
	uVar7 = LoadFileInMem((ulonglong) * (uint *)((int)uVar6 + -0x567c), (undefined4 *)0x0, uVar10, uVar12,
	    uVar14, uVar16, (int)lVar18, (int)lVar21, in_stack_ffffffb8);
	local_18 = (int *)uVar7;
	uVar10 = 0;
	uVar12 = 0x2e;
	uVar8 = (undefined)uVar7;
	uVar14 = 0x17;
	uVar16 = 0x19;
	FUN_100b2d3c(ZEXT48(local_14[0]), uVar7 & 0xffffffff, 0, 0x2e, 0x17, 0x19, (int)lVar18, (int)lVar21,
	    in_stack_ffffffb8);
	mem_free_dbg(&local_18, uVar8, (char)uVar10, (char)uVar12, (char)uVar14, (char)uVar16, (char)lVar18,
	    (char)lVar21, in_stack_ffffffb8);
	uVar7 = LoadFileInMem((ulonglong) * (uint *)((int)uVar6 + -0x5680), (undefined4 *)0x0, uVar10, uVar12,
	    uVar14, uVar16, (int)lVar18, (int)lVar21, in_stack_ffffffb8);
	local_18 = (int *)uVar7;
	uVar10 = 0;
	lVar27 = 0;
	uVar8 = (undefined)uVar7;
	uVar12 = 0x17;
	uVar14 = 0x17;
	FUN_100b2d3c(ZEXT48(local_14[0]), uVar7 & 0xffffffff, 0, 0, 0x17, 0x17, (int)lVar18, (int)lVar21,
	    in_stack_ffffffb8);
	mem_free_dbg(&local_18, uVar8, (char)uVar10, (char)lVar27, (char)uVar12, (char)uVar14, (char)lVar18,
	    (char)lVar21, in_stack_ffffffb8);
	uVar22 = (undefined4)lVar21;
	uVar19 = (undefined4)lVar18;
	uVar16 = (undefined4)uVar14;
	iVar24 = (int)uVar6;
	if (**(char **)(iVar24 + -0x77f0) == '\x01') {
		iVar26 = *(int *)(iVar24 + -0x77a8) + 0x5590;
		if ((*(byte *)(iVar26 + *(int *)puVar5 * 0x55ec) & 1) == 0) {
			uVar10 = 0x14;
			lVar27 = 0x140;
			FUN_100b2eac(ZEXT48(local_14[0]), 0x30, 0x14, 0x140, uVar12, uVar16, uVar19, uVar22, in_stack_ffffffb8);
		}
		if ((*(byte *)(iVar26 + *(int *)puVar5 * 0x55ec) & 2) == 0) {
			FUN_100b2eac(ZEXT48(local_14[0]), 0x10, 0x44, 0x14c, uVar12, (int)uVar14, (int)lVar18, (int)lVar21,
			    in_stack_ffffffb8);
			uVar10 = 0x46;
			lVar27 = 0x14b;
			FUN_100b2eac(ZEXT48(local_14[0]), 0x10, 0x46, 0x14b, uVar12, (int)uVar14, (int)lVar18, (int)lVar21,
			    in_stack_ffffffb8);
		}
		uVar22 = (undefined4)lVar21;
		uVar19 = (undefined4)lVar18;
		uVar16 = (undefined4)uVar14;
		iVar24 = (int)uVar6;
		if ((*(byte *)(iVar26 + *(int *)puVar5 * 0x55ec) & 4) == 0) {
			lVar25 = 0x24;
			do {
				lVar27 = random(0, 4, (char)uVar10, (char)lVar27, (char)uVar12, (char)uVar14, (char)lVar18,
				    (char)lVar21, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
				lVar27 = lVar27 + 1;
				uVar10 = 0x4e;
				FUN_100b2eac(ZEXT48(local_14[0]), lVar25, 0x4e, lVar27, uVar12, (int)uVar14, (int)lVar18,
				    (int)lVar21, in_stack_ffffffb8);
				uVar22 = (undefined4)lVar21;
				uVar19 = (undefined4)lVar18;
				uVar16 = (undefined4)uVar14;
				iVar24 = (int)uVar6;
				lVar25 = lVar25 + 1;
			} while ((int)lVar25 < 0x2e);
		}
	}
	uVar23 = (undefined)uVar22;
	uVar20 = (undefined)uVar19;
	uVar17 = (undefined)uVar16;
	uVar8 = (undefined)uVar12;
	cVar1 = *(char *)(*(int *)(iVar24 + -0x7604) + 0x13a);
	if ((cVar1 == '\x03') || (cVar1 == '\0')) {
		uVar9 = 0x3c;
		uVar11 = 0x46;
		uVar13 = 0x47;
		FUN_100b2eac(ZEXT48(local_14[0]), 0x3c, 0x46, 0x47, uVar12, uVar16, uVar19, uVar22, in_stack_ffffffb8);
	} else {
		uVar9 = 0x3c;
		uVar11 = 0x46;
		uVar13 = 0x56;
		FUN_100b2eac(ZEXT48(local_14[0]), 0x3c, 0x46, 0x156, uVar12, uVar16, uVar19, uVar22, in_stack_ffffffb8);
	}
	mem_free_dbg(local_14, uVar9, uVar11, uVar13, uVar8, uVar17, uVar20, uVar23, in_stack_ffffffb8);
	return;
}

void CreateTown(undefined8 uParm1)

{
	short sVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	undefined uVar10;
	int iVar9;
	longlong lVar8;
	longlong lVar11;
	undefined uVar13;
	longlong lVar12;
	undefined uVar15;
	longlong lVar14;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar16;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	puVar4 = PTR_DAT_100f1a9c;
	puVar6 = PTR_DAT_100f1a54;
	puVar5 = PTR_DAT_100f1a38;
	uVar10 = (undefined)uParm1;
	ppuVar7 = &toc;
	uVar15 = 10;
	iVar9 = (int)uParm1;
	*(undefined4 *)PTR_DAT_100f1aa0 = 10;
	puVar3 = PTR_DAT_100f1a98;
	*(undefined4 *)puVar4 = 10;
	puVar4 = PTR_DAT_100f1a94;
	*(undefined4 *)puVar3 = 0x54;
	puVar3 = PTR_DAT_100f181c;
	uVar13 = SUB41(PTR_DAT_100f181c, 0);
	*(undefined4 *)puVar4 = 0x54;
	puVar4 = PTR_DAT_100f1820;
	if (iVar9 == 0) {
		*(undefined4 *)PTR_DAT_100f1820 = 0x4b;
		*(undefined4 *)puVar3 = 0x44;
	} else {
		if (iVar9 == 1) {
			*(undefined4 *)PTR_DAT_100f1820 = 0x19;
			*(undefined4 *)puVar3 = 0x1f;
		} else {
			if (iVar9 == 7) {
				iVar9 = *(int *)PTR_DAT_100f2110;
				uVar10 = (undefined)iVar9;
				if (iVar9 == 5) {
					*(undefined4 *)PTR_DAT_100f1820 = 0x31;
					*(undefined4 *)puVar3 = 0x16;
				}
				if (iVar9 == 9) {
					*(undefined4 *)puVar4 = 0x12;
					*(undefined4 *)puVar3 = 0x45;
				}
				if (iVar9 == 0xd) {
					*(undefined4 *)puVar4 = 0x29;
					*(undefined4 *)puVar3 = 0x51;
				}
			}
		}
	}
	T_Pass3(uVar10, (char)puVar4, uVar13, 10, (char)in_r7, (char)in_r8, (char)in_r9, (char)in_r10,
	    in_stack_ffffffc8);
	memset((char)*(undefined4 *)ppuVar7[-0x1d63], 0, uVar13, uVar15, (char)in_r7, (char)in_r8,
	    (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x779c), 0, uVar13, uVar15, (char)in_r7, (char)in_r8,
	    (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x7680), 0, uVar13, uVar15, (char)in_r7, (char)in_r8,
	    (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x767c), 0, uVar13, uVar15, (char)in_r7, (char)in_r8,
	    (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x7684), 0, uVar13, uVar15, (char)in_r7, (char)in_r8,
	    (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	memset((char)**(undefined4 **)(local_2c + -0x768c), 0, uVar13, uVar15, (char)in_r7, (char)in_r8,
	    (char)in_r9, (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	memset((char)*(undefined4 *)puVar5, 0, uVar13, uVar15, (char)in_r7, (char)in_r8, (char)in_r9,
	    (char)in_r10, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	lVar14 = 0;
	lVar12 = 0;
	do {
		lVar8 = 0;
		lVar16 = 0x70;
		lVar11 = 0;
		do {
			sVar1 = *(short *)((int)lVar12 + *(int *)puVar6 + (int)lVar8);
			iVar9 = (int)lVar14;
			iVar2 = (int)lVar11;
			if (sVar1 == 0x168) {
				in_r7 = 1;
				*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 1;
			} else {
				if (sVar1 == 0x166) {
					in_r7 = 2;
					*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 2;
				} else {
					if (sVar1 == 0x81) {
						in_r7 = 6;
						*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 6;
					} else {
						if (sVar1 == 0x82) {
							in_r7 = 7;
							*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 7;
						} else {
							if (sVar1 == 0x80) {
								in_r7 = 8;
								*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 8;
							} else {
								if (sVar1 == 0x75) {
									in_r7 = 9;
									*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 9;
								} else {
									if (sVar1 == 0x9d) {
										in_r7 = 10;
										*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 10;
									} else {
										if (sVar1 == 0x9e) {
											in_r7 = 0xb;
											*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0xb;
										} else {
											if (sVar1 == 0x9c) {
												in_r7 = 0xc;
												*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0xc;
											} else {
												if (sVar1 == 0xa2) {
													in_r7 = 0xd;
													*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0xd;
												} else {
													if (sVar1 == 0xa0) {
														in_r7 = 0xe;
														*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0xe;
													} else {
														if (sVar1 == 0xd6) {
															in_r7 = 0xf;
															*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0xf;
														} else {
															if (sVar1 == 0xd4) {
																in_r7 = 0x10;
																*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0x10;
															} else {
																if (sVar1 == 0xd9) {
																	in_r7 = 0x11;
																	*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0x11;
																} else {
																	if (sVar1 == 0xd8) {
																		in_r7 = 0x12;
																		*(undefined *)(iVar9 + *(int *)puVar5 + iVar2) = 0x12;
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
					}
				}
			}
			lVar8 = lVar8 + 0xe0;
			lVar11 = lVar11 + 0x70;
			lVar16 = lVar16 + -1;
		} while (lVar16 != 0);
		lVar14 = lVar14 + 1;
		lVar12 = lVar12 + 2;
	} while ((int)lVar14 < 0x70);
	SetTownMicros(lVar8, lVar11, lVar12, lVar14, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	return;
}

void townercpp(void)

{
	_DAT_100f452c = _DAT_100f4528;
	return;
}

longlong GetActiveTowner(int param_1)

{
	ulonglong uVar1;
	undefined *puVar2;
	longlong lVar3;

	lVar3 = 0;
	uVar1 = (ulonglong) * (uint *)PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	if (0 < (int)*(uint *)PTR_DAT_100f2120) {
		do {
			if (param_1 == *(int *)(puVar2 + 4)) {
				return lVar3;
			}
			puVar2 = puVar2 + 0x10c;
			lVar3 = lVar3 + 1;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	return -1;
}

void FUN_100b368c(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int *piVar1;
	byte *pbVar2;
	ulonglong uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	int iVar10;
	undefined4 in_stack_ffffffc8;

	uVar6 = (undefined)param_5;
	uVar5 = (undefined)param_4;
	uVar4 = (undefined)param_2;
	uVar9 = (undefined)param_8;
	uVar8 = (undefined)param_7;
	uVar7 = (undefined)param_6;
	uVar3 = FUN_100b8f7c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	iVar10 = (int)param_1;
	piVar1 = (int *)param_2;
	*piVar1 = iVar10;
	pbVar2 = (byte *)uVar3;
	piVar1[1] = (uint)pbVar2[3] << 0x18 | (uint)pbVar2[2] << 0x10 | (uint)pbVar2[1] << 8 | (uint)*pbVar2;
	piVar1[2] = iVar10;
	piVar1[3] = (uint)pbVar2[7] << 0x18 | (uint)pbVar2[6] << 0x10 | (uint)pbVar2[5] << 8 | (uint)pbVar2[4];
	piVar1[4] = iVar10;
	piVar1[5] = (uint)pbVar2[0xb] << 0x18 | (uint)pbVar2[10] << 0x10 | (uint)pbVar2[9] << 8 | (uint)pbVar2[8];
	piVar1[6] = iVar10;
	piVar1[7] = (uint)pbVar2[0xf] << 0x18 | (uint)pbVar2[0xe] << 0x10 | (uint)pbVar2[0xd] << 8 | (uint)pbVar2[0xc];
	piVar1[8] = iVar10;
	piVar1[9] = (uint)pbVar2[0x13] << 0x18 | (uint)pbVar2[0x12] << 0x10 | (uint)pbVar2[0x11] << 8 | (uint)pbVar2[0x10];
	piVar1[10] = iVar10;
	piVar1[0xb] = (uint)pbVar2[0x17] << 0x18 | (uint)pbVar2[0x16] << 0x10 | (uint)pbVar2[0x15] << 8 | (uint)pbVar2[0x14];
	piVar1[0xc] = iVar10;
	piVar1[0xd] = (uint)pbVar2[0x1b] << 0x18 | (uint)pbVar2[0x1a] << 0x10 | (uint)pbVar2[0x19] << 8 | (uint)pbVar2[0x18];
	piVar1[0xe] = iVar10;
	piVar1[0xf] = (uint)pbVar2[0x1f] << 0x18 | (uint)pbVar2[0x1e] << 0x10 | (uint)pbVar2[0x1d] << 8 | (uint)pbVar2[0x1c];
	FUN_100b9100(iVar10, uVar4, 0x1c, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
	return;
}

void FUN_100b3750(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1878 + param_1 * 0x10c;
	*(undefined4 *)(puVar1 + 0x24) = param_2;
	*(undefined4 *)(puVar1 + 0x30) = param_3;
	*(undefined4 *)(puVar1 + 0x34) = 1;
	*(undefined4 *)(puVar1 + 0x2c) = 0;
	*(undefined4 *)(puVar1 + 0x28) = param_4;
	return;
}

void FUN_100b377c(longlong param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5,
    int param_6, undefined param_7, undefined4 param_8, undefined4 param_9)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined4 uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	int local_4c;

	puVar4 = PTR_DAT_100f1878;
	uVar9 = (undefined)param_8;
	uVar7 = (undefined)param_6;
	uVar6 = (undefined)param_5;
	uVar8 = param_7;
	memset((char)PTR_DAT_100f1878 + (char)(param_1 * 0x10c), 0xc, (char)param_3, (char)param_4, uVar6,
	    uVar7, param_7, uVar9, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	puVar4 = puVar4 + (int)(param_1 * 0x10c);
	*(undefined4 *)(puVar4 + 0x54) = param_3;
	iVar3 = param_2 + -0x40 >> 1;
	piVar1 = *(int **)(local_4c + -0x767c);
	*(int *)(puVar4 + 0x40) = param_2;
	*(int *)(puVar4 + 0x44) = iVar3;
	*(undefined4 *)(puVar4 + 0x58) = 0;
	*(undefined4 *)(puVar4 + 4) = param_4;
	*(int *)(puVar4 + 8) = param_5;
	*(int *)(puVar4 + 0xc) = param_6;
	iVar2 = *piVar1;
	*(undefined2 *)(iVar2 + param_5 * 0xe0 + param_6 * 2) = (short)(param_1 + 1);
	puVar4[0x3c] = param_7;
	*(undefined4 *)(puVar4 + 0x48) = param_8;
	uVar5 = GetRndSeed((char)iVar2, (char)piVar1, (char)(param_1 + 1), (char)iVar3, uVar6, uVar7, uVar8,
	    uVar9, in_stack_ffffffa8);
	*(undefined4 *)(puVar4 + 0x8c) = uVar5;
	return;
}

void FUN_100b3830(int param_1)

{
	undefined *puVar1;
	int *piVar2;
	undefined *puVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = param_1;
	if (*(int *)PTR_DAT_100f211c != 0) {
		iVar4 = param_1 + 1;
	}
	lVar5 = 4;
	puVar1 = PTR_DAT_100f1878 + param_1 * 0x10c;
	piVar2 = (int *)(PTR_DAT_100f206c + iVar4 * 0x40);
	puVar3 = PTR_DAT_100f19cc;
	do {
		puVar1[0x5c] = puVar3[1];
		puVar1[0x5d] = (char)*piVar2;
		if (*piVar2 == -1) {
			puVar1[0x5e] = 0;
		} else {
			puVar1[0x5e] = 1;
		}
		puVar1[0x5f] = puVar3[0x19];
		puVar1[0x60] = (char)piVar2[1];
		if (piVar2[1] == -1) {
			puVar1[0x61] = 0;
		} else {
			puVar1[0x61] = 1;
		}
		puVar1[0x62] = puVar3[0x31];
		puVar1[99] = (char)piVar2[2];
		if (piVar2[2] == -1) {
			puVar1[100] = 0;
		} else {
			puVar1[100] = 1;
		}
		puVar1[0x65] = puVar3[0x49];
		puVar1[0x66] = (char)piVar2[3];
		if (piVar2[3] == -1) {
			puVar1[0x67] = 0;
		} else {
			puVar1[0x67] = 1;
		}
		puVar3 = puVar3 + 0x60;
		puVar1 = puVar1 + 0xc;
		piVar2 = piVar2 + 4;
		lVar5 = lVar5 + -1;
	} while (lVar5 != 0);
	return;
}

void InitSmith(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 0;
	uVar10 = 0x3e;
	uVar11 = 0x3f;
	uVar13 = 0;
	uVar14 = 10;
	FUN_100b377c((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 0, 0x3e, 0x3f, 0, 10, in_stack_ffffffb8);
	FUN_100b3830(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x157d]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x10;
	FUN_100b3750(iVar1, puVar2 + iVar6 + 200, *(undefined4 *)(puVar8 + 0x100), 3);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x157e]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitBarOwner(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffa8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 3;
	uVar10 = 0x37;
	uVar11 = 0x3e;
	uVar13 = 3;
	*(undefined4 *)PTR_DAT_100f2118 = 0;
	uVar14 = 10;
	FUN_100b377c((ulonglong) * (uint *)puVar3, 0x60, 1, 3, 0x37, 0x3e, 3, 10, in_stack_ffffffa8);
	FUN_100b3830(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x157f]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffa8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x10;
	FUN_100b3750(iVar1, puVar2 + iVar6 + 200, *(undefined4 *)(puVar8 + 0x100), 3);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x1580]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitTownDead(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 2;
	uVar10 = 0x18;
	uVar11 = 0x20;
	uVar13 = 0xffffffff;
	uVar14 = 10;
	FUN_100b377c((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 2, 0x18, 0x20, 0xff, 10, in_stack_ffffffb8);
	FUN_100b3830(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x1581]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 8;
	FUN_100b3750(iVar1, puVar2 + iVar6 + 0xe0, *(undefined4 *)(puVar8 + 0x100), 6);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x1582]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitWitch(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 6;
	uVar10 = 0x50;
	uVar11 = 0x14;
	uVar13 = 5;
	uVar14 = 10;
	FUN_100b377c((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 6, 0x50, 0x14, 5, 10, in_stack_ffffffb8);
	FUN_100b3830(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x1583]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x13;
	FUN_100b3750(iVar1, puVar2 + iVar6 + 0xc0, *(undefined4 *)(puVar8 + 0x100), 6);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x1584]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitBarmaid(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 7;
	uVar10 = 0x2b;
	uVar11 = 0x42;
	uVar13 = 0xffffffff;
	uVar14 = 10;
	FUN_100b377c((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 7, 0x2b, 0x42, 0xff, 10, in_stack_ffffffb8);
	FUN_100b3830(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x1585]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x12;
	FUN_100b3750(iVar1, puVar2 + iVar6 + 0xc0, *(undefined4 *)(puVar8 + 0x100), 6);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x1586]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitBoy(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 8;
	uVar10 = 0xb;
	*(undefined4 *)PTR_DAT_100f211c = 1;
	uVar11 = 0x35;
	uVar13 = 0xffffffff;
	uVar14 = 10;
	FUN_100b377c((ulonglong) * (uint *)puVar3, 0x60, 1, 8, 0xb, 0x35, 0xff, 10, in_stack_ffffffb8);
	FUN_100b3830(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x1587]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x14;
	FUN_100b3750(iVar1, puVar2 + iVar6 + 0xc0, *(undefined4 *)(puVar8 + 0x100), 6);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x1588]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitHealer(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 1;
	uVar10 = 0x37;
	uVar11 = 0x4f;
	uVar13 = 1;
	uVar14 = 10;
	FUN_100b377c((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 1, 0x37, 0x4f, 1, 10, in_stack_ffffffb8);
	FUN_100b3830(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x1589]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x14;
	FUN_100b3750(iVar1, puVar2 + iVar6 + 0xf8, *(undefined4 *)(puVar8 + 0x100), 6);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x158a]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitTeller(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 4;
	uVar10 = 0x3e;
	uVar11 = 0x47;
	uVar13 = 2;
	uVar14 = 10;
	FUN_100b377c((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 4, 0x3e, 0x47, 2, 10, in_stack_ffffffb8);
	FUN_100b3830(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x158b]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x19;
	FUN_100b3750(iVar1, puVar2 + iVar6 + 0xc0, *(undefined4 *)(puVar8 + 0x100), 3);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x158c]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitDrunk(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	longlong lVar5;
	int iVar6;
	undefined8 uVar7;
	undefined *puVar8;
	undefined8 uVar9;
	undefined8 uVar10;
	undefined4 uVar11;
	undefined *puVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f1878;
	ppuVar4 = &toc;
	uVar7 = 1;
	uVar9 = 5;
	uVar10 = 0x47;
	uVar11 = 0x54;
	uVar13 = 4;
	uVar14 = 10;
	FUN_100b377c((ulonglong) * (uint *)PTR_DAT_100f2120, 0x60, 1, 5, 0x47, 0x54, 4, 10, in_stack_ffffffb8);
	FUN_100b3830(*(int *)puVar3);
	lVar5 = LoadFileInMem(ZEXT48(ppuVar4[-0x158d]), (undefined4 *)0x0, uVar7, uVar9, uVar10, uVar11, uVar13,
	    uVar14, in_stack_ffffffb8);
	iVar1 = *(int *)puVar3;
	iVar6 = iVar1 * 0x10c;
	puVar12 = puVar2 + iVar6;
	puVar8 = puVar2 + iVar6;
	*(int *)(puVar12 + 0x104) = (int)lVar5;
	*(undefined4 *)(puVar8 + 0x108) = 0;
	*(undefined4 *)(puVar8 + 0xc0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xc4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xcc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xd4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xd8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xdc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xe4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xe8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xec) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf0) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xf4) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0xf8) = *(undefined4 *)(puVar12 + 0x104);
	*(undefined4 *)(puVar8 + 0xfc) = *(undefined4 *)(puVar12 + 0x108);
	*(undefined4 *)(puVar8 + 0x100) = 0x12;
	FUN_100b3750(iVar1, puVar2 + iVar6 + 0xc0, *(undefined4 *)(puVar8 + 0x100), 3);
	strcpy((int)(puVar2 + *(int *)puVar3 * 0x10c + 0xa0), (int)ppuVar4[-0x158e]);
	*(int *)puVar3 = *(int *)puVar3 + 1;
	return;
}

void InitCows(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	ulonglong uVar13;
	longlong lVar14;
	short *psVar15;
	undefined uVar16;
	undefined8 uVar17;
	undefined uVar19;
	int iVar18;
	undefined uVar20;
	int iVar21;
	undefined uVar22;
	undefined4 uVar23;
	undefined uVar24;
	undefined4 uVar25;
	undefined uVar26;
	ulonglong uVar27;
	int iVar28;
	int *piVar29;
	int *piVar30;
	uint *puVar31;
	ulonglong uVar32;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	iVar12 = _DAT_100f3984;
	iVar11 = _DAT_100f3980;
	iVar10 = _DAT_100f397c;
	puVar9 = PTR_DAT_100f2120;
	puVar8 = PTR_DAT_100f1954;
	puVar7 = PTR_DAT_100f1878;
	uVar13 = ZEXT48(&toc);
	uVar32 = ZEXT48(PTR_DAT_100f1878);
	lVar14 = LoadFileInMem((ulonglong)_DAT_100f3994, (undefined4 *)0x0, param_3, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffff98);
	iVar2 = (int)uVar13;
	*(undefined4 *)(iVar2 + -0x4a8c) = (int)lVar14;
	iVar28 = 0;
	puVar31 = *(uint **)(iVar2 + -0x5640);
	piVar30 = *(int **)(iVar2 + -0x5644);
	piVar29 = *(int **)(iVar2 + -0x5648);
	do {
		uVar1 = *puVar31;
		uVar27 = (ulonglong)uVar1;
		iVar2 = *piVar30;
		iVar3 = *piVar29;
		uVar17 = 9;
		uVar23 = 0xffffffff;
		uVar25 = 10;
		iVar21 = iVar2;
		FUN_100b377c((ulonglong) * (uint *)puVar9, 0x80, 0, 9, uVar1, iVar2, 0xff, 10, in_stack_ffffff98);
		uVar26 = (undefined)uVar25;
		uVar24 = (undefined)uVar23;
		uVar22 = (undefined)iVar21;
		uVar4 = *(uint *)((int)uVar13 + -0x4a8c);
		lVar14 = uVar32 + (ulonglong) * (uint *)puVar9 * 0x10c;
		iVar5 = (int)lVar14;
		*(uint *)(iVar5 + 0x104) = uVar4;
		*(undefined4 *)(iVar5 + 0x108) = 0;
		FUN_100b368c((ulonglong) * (uint *)(iVar5 + 0x104), lVar14 + 0xc0, (ulonglong)uVar4, uVar17, uVar27,
		    iVar21, uVar23, uVar25, in_stack_ffffff98);
		uVar4 = *(uint *)puVar9;
		lVar14 = uVar32 + (ulonglong)uVar4 * 0x10c;
		iVar5 = (int)lVar14;
		*(undefined4 *)(iVar5 + 0x100) = 0xc;
		lVar14 = lVar14 + 0x100;
		uVar20 = (undefined)lVar14;
		uVar23 = *(undefined4 *)lVar14;
		uVar16 = (undefined)uVar23;
		uVar19 = 3;
		FUN_100b3750(uVar4, iVar5 + iVar3 * 8 + 0xc0, uVar23, 3);
		lVar14 = random(0, 0xb, uVar16, uVar19, uVar20, uVar22, uVar24, uVar26, in_stack_ffffff98,
		    in_stack_ffffff9f, in_stack_ffffffab);
		puVar6 = puVar7 + *(int *)puVar9 * 0x10c;
		*(int *)(puVar6 + 0x34) = (int)lVar14 + 1;
		*(undefined4 *)(puVar6 + 0x54) = 1;
		strcpy((int)(puVar6 + 0xa0), iVar12);
		iVar3 = iVar3 * 4;
		iVar5 = *(int *)(iVar11 + iVar3);
		iVar18 = iVar2 + *(int *)(iVar10 + iVar3);
		iVar21 = *(int *)puVar8 + uVar1 * 0xe0;
		iVar3 = iVar18 * 2;
		if (*(short *)(iVar21 + iVar3) == 0) {
			*(short *)(iVar21 + iVar3) = -((short)*(undefined4 *)puVar9 + 1);
		}
		iVar3 = (uVar1 + iVar5) * 0xe0;
		psVar15 = (short *)(*(int *)puVar8 + iVar3 + iVar2 * 2);
		if (*psVar15 == 0) {
			*psVar15 = -((short)*(undefined4 *)puVar9 + 1);
		}
		psVar15 = (short *)(*(int *)puVar8 + iVar3 + iVar18 * 2);
		if (*psVar15 == 0) {
			*psVar15 = -((short)*(undefined4 *)puVar9 + 1);
		}
		iVar28 = iVar28 + 1;
		piVar30 = piVar30 + 1;
		*(int *)puVar9 = *(int *)puVar9 + 1;
		piVar29 = piVar29 + 1;
		puVar31 = puVar31 + 1;
	} while (iVar28 < 3);
	return;
}

void InitTowners(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined uVar6;
	undefined8 uVar5;
	ulonglong uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f2120;
	puVar2 = PTR_DAT_100f211c;
	uVar12 = (undefined7)((ulonglong)param_5 >> 8);
	uVar13 = (undefined)param_5;
	uVar10 = (undefined7)((ulonglong)param_4 >> 8);
	uVar11 = (undefined)param_4;
	uVar8 = (undefined7)((ulonglong)param_3 >> 8);
	uVar9 = (undefined)param_3;
	ppuVar4 = &toc;
	uVar7 = ZEXT48(PTR_DAT_100f2120);
	*(undefined4 *)PTR_DAT_100f2120 = 0;
	*(undefined4 *)puVar2 = 0;
	uVar6 = InitSmith((char)puVar2, (char)puVar3, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	InitHealer(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffffc8);
	uVar6 = SUB41(ppuVar4[-0x1d81], 0);
	cVar1 = ppuVar4[-0x1d81][0x92];
	if ((cVar1 != '\0') && (cVar1 != '\x03')) {
		uVar6 = InitTownDead(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	}
	uVar6 = InitBarOwner(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar6 = InitTeller(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar6 = InitDrunk(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar6 = InitWitch(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar6 = InitBarmaid(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar5 = InitBoy(uVar6, (char)uVar7, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	InitCows(uVar5, uVar7, CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
	    param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FreeTownerGFX(undefined param_1, char param_2, char param_3, char param_4, char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	ulonglong uVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	int iVar9;
	undefined *puVar10;
	undefined4 in_stack_ffffffb8;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	lVar2 = (longlong)param_2;
	uVar1 = ZEXT48(&toc);
	iVar9 = 0;
	puVar10 = PTR_DAT_100f1878;
	do {
		if (*(int *)(puVar10 + 0x104) == *(int *)((int)uVar1 + -0x4a8c)) {
			*(undefined4 *)(puVar10 + 0x104) = 0;
		} else {
			if (*(int *)(puVar10 + 0x104) != 0) {
				mem_free_dbg((int **)(puVar10 + 0x104), (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
				    (char)lVar6, (char)lVar7, (char)lVar8, in_stack_ffffffb8);
			}
		}
		iVar9 = iVar9 + 1;
		puVar10 = puVar10 + 0x10c;
	} while (iVar9 < 0x10);
	mem_free_dbg((int **)((int)uVar1 + -0x4a8c), (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5,
	    (char)lVar6, (char)lVar7, (char)lVar8, in_stack_ffffffb8);
	return;
}

void FUN_100b4834(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	longlong lVar5;
	undefined8 uVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined *puVar13;
	undefined4 in_stack_ffffffb8;

	uVar11 = (undefined7)((ulonglong)param_5 >> 8);
	uVar12 = (undefined)param_5;
	uVar9 = (undefined7)((ulonglong)param_4 >> 8);
	uVar10 = (undefined)param_4;
	ppuVar3 = &toc;
	uVar8 = param_1 * 0x10c;
	piVar1 = (int *)(PTR_DAT_100f1878 + (int)uVar8 + 0x50);
	if (*piVar1 != 0) {
		puVar2 = PTR_DAT_100f1878 + (int)uVar8;
		puVar13 = PTR_DAT_100f1828 + *(int *)(puVar2 + 0x90) * 0x55ec;
		lVar4 = abs((ulonglong) * (uint *)(puVar2 + 8) - (ulonglong) * (uint *)(puVar13 + 0x38));
		uVar7 = (ulonglong) * (uint *)(puVar13 + 0x3c);
		lVar5 = abs((ulonglong) * (uint *)(puVar2 + 0xc) - uVar7);
		if ((1 < (int)lVar4) || (1 < (int)lVar5)) {
			*piVar1 = 0;
		}
		if (*piVar1 == 0) {
			puVar2 = ppuVar3[-0x1dcc];
			*puVar2 = 0;
			uVar6 = sfx_stop((char)puVar2, (char)uVar7, (char)uVar8, uVar10, uVar12, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffffb8);
			music_stop2(uVar6, uVar7, uVar8, CONCAT71(uVar9, uVar10), CONCAT71(uVar11, uVar12), param_6, param_7,
			    param_8, in_stack_ffffffb8);
		}
	}
	return;
}

void FUN_100b48f0(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffb8;

	lVar1 = GetActiveTowner(0);
	FUN_100b4834(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void FUN_100b4918(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffb8;

	lVar1 = GetActiveTowner(3);
	FUN_100b4834(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void FUN_100b4940(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	longlong lVar6;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f19cc;
	puVar3 = PTR_DAT_100f1878;
	ppuVar5 = &toc;
	lVar6 = GetActiveTowner(2);
	FUN_100b4834(lVar6, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	if (*ppuVar5[-0x1dcc] == '\0') {
		if ((puVar4[0x92] == '\x02') && (*(int *)(puVar4 + 0xa4) == 0)) {
			return;
		}
		if (puVar4[0x92] != '\x01') {
			iVar2 = (int)lVar6 * 0x10c;
			puVar1 = ppuVar5[-0x1596];
			*(undefined4 *)(puVar3 + iVar2 + 0x28) = 1000;
			*(undefined4 *)(puVar3 + iVar2 + 0x34) = 1;
			strcpy((int)(puVar3 + iVar2 + 0xa0), (int)puVar1);
		}
	}
	if (puVar4[0x92] != '\x01') {
		*(undefined4 *)(puVar3 + (int)lVar6 * 0x10c + 0x2c) = 0;
	}
	return;
}

void FUN_100b4a00(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(1);
	FUN_100b4834(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_100b4a28(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(4);
	FUN_100b4834(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_100b4a50(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(5);
	FUN_100b4834(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_100b4a78(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(8);
	FUN_100b4834(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_100b4aa0(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(6);
	FUN_100b4834(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_100b4ac8(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(7);
	FUN_100b4834(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_100b4af0(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = GetActiveTowner(9);
	FUN_100b4834(lVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void ProcessTowners(undefined param_1, undefined param_2, char param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	ulonglong uVar3;
	int iVar4;
	undefined *puVar5;

	puVar2 = PTR_DAT_100f3974;
	uVar3 = SEXT18(param_3);
	iVar4 = 0;
	puVar5 = PTR_DAT_100f1878;
	do {
		if (*(uint *)(puVar5 + 4) < 10) {
			// WARNING: Could not recover jumptable at 0x100b4b58. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(PTR_PTR_LAB_100f3970 + *(uint *)(puVar5 + 4) * 4))(*(code **)(PTR_PTR_LAB_100f3970 + *(uint *)(puVar5 + 4) * 4), param_2, uVar3, param_4,
			    param_5, param_6, param_7, param_8);
			return;
		}
		*(int *)(puVar5 + 0x2c) = *(int *)(puVar5 + 0x2c) + 1;
		if (*(int *)(puVar5 + 0x28) <= *(int *)(puVar5 + 0x2c)) {
			param_2 = 0;
			*(undefined4 *)(puVar5 + 0x2c) = 0;
			bVar1 = puVar5[0x3c];
			uVar3 = (ulonglong)bVar1;
			if ((char)bVar1 < '\0') {
				*(int *)(puVar5 + 0x34) = *(int *)(puVar5 + 0x34) + 1;
				if (*(int *)(puVar5 + 0x30) < *(int *)(puVar5 + 0x34)) {
					*(undefined4 *)(puVar5 + 0x34) = 1;
				}
			} else {
				*(int *)(puVar5 + 0x38) = *(int *)(puVar5 + 0x38) + 1;
				if ((puVar2 + (int)(char)bVar1 * 0x94)[*(int *)(puVar5 + 0x38)] == -1) {
					*(undefined4 *)(puVar5 + 0x38) = 0;
				}
				*(int *)(puVar5 + 0x34) = (int)(char)(puVar2 + (int)(char)bVar1 * 0x94)[*(int *)(puVar5 + 0x38)];
			}
		}
		iVar4 = iVar4 + 1;
		puVar5 = puVar5 + 0x10c;
	} while (iVar4 < 0x10);
	return;
}

undefined *PlrHasItem(int param_1, int param_2, int *param_3)

{
	int iVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	*param_3 = 0;
	while (true) {
		if (*(int *)(puVar2 + 0x4828) <= *param_3) {
			return (undefined *)0x0;
		}
		iVar1 = *param_3 * 0x170;
		if (param_2 == *(int *)(puVar2 + iVar1 + 0x1010))
			break;
		*param_3 = *param_3 + 1;
	}
	return puVar2 + iVar1 + 0xea8;
}

void CowSFX(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	undefined *puVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined *puVar9;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f1828;
	uVar7 = (undefined7)((ulonglong)param_5 >> 8);
	uVar8 = (undefined)param_5;
	uVar5 = (undefined7)((ulonglong)param_4 >> 8);
	uVar6 = (undefined)param_4;
	ppuVar2 = &toc;
	if (DAT_100f4534 == '\0') {
		_DAT_100f4538 = -1;
		DAT_100f4534 = '\x01';
	}
	if ((_DAT_100f4538 == -1) || (ppuVar2 = &toc, uVar3 = effect_is_playing(_DAT_100f4538, (undefined)param_2, (undefined)param_3, uVar6, uVar8, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8), (int)uVar3 == 0)) {
		ppuVar2[-0x12a4] = ppuVar2[-0x12a4] + 1;
		if (ppuVar2[-0x12a4] < (undefined *)0x8) {
			if (ppuVar2[-0x12a4] == (undefined *)0x4) {
				ppuVar2[-0x12a6] = (undefined *)0xed;
			} else {
				ppuVar2[-0x12a6] = (undefined *)0xec;
			}
		} else {
			puVar9 = puVar4 + param_1 * 0x55ec;
			PlaySfxLoc(0xec, (ulonglong) * (uint *)(puVar9 + 0x38), (ulonglong) * (uint *)(puVar9 + 0x3c) + 5,
			    CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), param_6, param_7, param_8,
			    in_stack_ffffffb8);
			ppuVar2[-0x12a4] = (undefined *)0x4;
			puVar1 = ppuVar2[-0x12a5] + 1;
			ppuVar2[-0x12a6] = *(undefined **)(ppuVar2[-0x1599] + (int)ppuVar2[-0x12a5] * 0xc + (int)(char)puVar9[0x15c] * 4);
			ppuVar2[-0x12a5] = puVar1;
			if (2 < (int)puVar1) {
				ppuVar2[-0x12a5] = (undefined *)0x0;
			}
		}
		puVar4 = puVar4 + param_1 * 0x55ec;
		PlaySfxLoc(ZEXT48(ppuVar2[-0x12a6]), (ulonglong) * (uint *)(puVar4 + 0x38),
		    (ulonglong) * (uint *)(puVar4 + 0x3c), CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8),
		    param_6, param_7, param_8, in_stack_ffffffb8);
	}
	return;
}

void TownerTalk(int param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	ulonglong uVar1;
	undefined4 in_stack_ffffffc8;

	uVar1 = ZEXT48(PTR_DAT_100f2114);
	_DAT_100f4540 = 0;
	_DAT_100f453c = 0;
	*(undefined4 *)PTR_DAT_100f2114 = 1;
	InitQTextMsg(param_1, uVar1, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void TalkToTowner(longlong param_1, longlong param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	int *piVar2;
	uint *puVar3;
	uint *puVar4;
	int *piVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined **ppuVar14;
	longlong lVar15;
	longlong lVar16;
	int iVar18;
	undefined *puVar19;
	ulonglong uVar17;
	undefined *puVar20;
	ulonglong uVar21;
	undefined uVar22;
	undefined uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined uVar26;
	undefined uVar27;
	undefined uVar28;
	longlong lVar29;
	char *pcVar30;
	ulonglong uVar31;
	ulonglong uVar32;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;
	undefined4 in_stack_ffffff9c;
	uint local_3c;

	puVar13 = PTR_DAT_100f2114;
	puVar12 = PTR_DAT_100f206c;
	puVar11 = PTR_DAT_100f19cc;
	puVar10 = PTR_DAT_100f18a0;
	puVar9 = PTR_DAT_100f1878;
	puVar20 = PTR_DAT_100f1828;
	puVar19 = PTR_DAT_100f17e0;
	uVar22 = (undefined)param_2;
	uVar17 = ZEXT48(register0x0000000c);
	ppuVar14 = &toc;
	uVar31 = ZEXT48(PTR_DAT_100f19cc);
	uVar32 = ZEXT48(PTR_DAT_100f1878);
	random(6, 3, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
	random(6, 4, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
	random(6, 5, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
	iVar8 = (int)param_1;
	iVar7 = iVar8 * 0x55ec;
	lVar29 = param_2 * 0x10c;
	iVar6 = (int)lVar29;
	puVar3 = (uint *)(puVar9 + iVar6 + 8);
	lVar15 = abs((ulonglong) * (uint *)(puVar20 + iVar7 + 0x38) - (ulonglong)*puVar3);
	puVar4 = (uint *)(puVar9 + iVar6 + 0xc);
	uVar21 = (ulonglong)*puVar4;
	lVar16 = abs((ulonglong) * (uint *)(puVar20 + iVar7 + 0x3c) - uVar21);
	if (1 < (int)lVar15) {
		return;
	}
	if (1 < (int)lVar16) {
		return;
	}
	if (*puVar10 != '\0') {
		return;
	}
	piVar2 = (int *)ppuVar14[-0x1dd1];
	piVar5 = (int *)(puVar9 + iVar6 + 0x58);
	*piVar5 = 0;
	if ((0xb < *piVar2) && (iVar18 = DropItemBeforeTrig(), iVar18 == 0)) {
		return;
	}
	lVar15 = GetActiveTowner(3);
	iVar18 = (int)param_2;
	if (iVar18 == (int)lVar15) {
		if ((puVar20[iVar7 + 0x1f0] == '\0') && (*piVar5 == 0)) {
			iVar6 = (int)(uVar32 + lVar29);
			*(undefined4 *)(iVar6 + 0x50) = 0x96;
			*(int *)(iVar6 + 0x90) = iVar8;
			InitQTextMsg(0x102, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffff88);
			*piVar5 = 1;
		}
		if (((puVar20 + iVar7)[0x1f2] != '\0') || ((puVar20 + iVar7)[500] != '\0')) {
			pcVar30 = puVar11 + 0x122;
			if (puVar11[0x122] != '\0') {
				if (((puVar11[0x122] != '\0') && (puVar11[0x130] == '\0')) && (*piVar5 == 0)) {
					puVar11[0x130] = 1;
					*(undefined4 *)(puVar11 + 0x134) = 1;
					if (*pcVar30 == '\x01') {
						*pcVar30 = '\x02';
						puVar11[0x12f] = 1;
					}
					iVar6 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar6 + 0x50) = 0x96;
					*(int *)(iVar6 + 0x90) = iVar8;
					InitQTextMsg(1, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffff88);
					*piVar5 = 1;
					NetSendCmdQuest(1, 0xc);
				}
				if (((*pcVar30 == '\x03') && (puVar11[0x130] == '\x01')) && (*piVar5 == 0)) {
					param_3 = 2;
					puVar11[0x130] = 2;
					puVar11[0x12f] = 2;
					iVar6 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar6 + 0x50) = 0x96;
					*(int *)(iVar6 + 0x90) = iVar8;
					InitQTextMsg(3, uVar32 + lVar29, 2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88);
					*piVar5 = 1;
					NetSendCmdQuest(1, 0xc);
				}
			}
		}
		if ((*puVar19 == '\x01') && (puVar20[iVar7 + 499] != '\0')) {
			pcVar30 = puVar11 + 0xaa;
			if (puVar11[0xaa] != '\0') {
				if ((((byte)(puVar11[0xaa] - 1) < 2) && (puVar11[0xb8] == '\0')) && (*piVar5 == 0)) {
					puVar11[0xb8] = 1;
					if (*pcVar30 == '\x01') {
						puVar11[0xb7] = 1;
						*pcVar30 = '\x02';
					}
					*(undefined4 *)(puVar11 + 0xbc) = 1;
					iVar7 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar7 + 0x50) = 0x96;
					*(int *)(iVar7 + 0x90) = iVar8;
					InitQTextMsg(0xc, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffff88);
					*piVar5 = 1;
				}
				if (puVar11[0xb8] == '\x01') {
					param_3 = uVar17 - 0x3c;
					puVar19 = PlrHasItem(iVar8, 0xc, (int *)param_3);
					if ((puVar19 != (undefined *)0x0) && (*piVar5 == 0)) {
						*pcVar30 = '\x03';
						puVar11[0xb7] = 3;
						RemoveInvItem(param_1, (ulonglong)local_3c, (char)param_3, (char)param_4, (char)param_5,
						    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
						param_3 = (ulonglong)*puVar4 + 1;
						CreateItem(5, *puVar3, (int)param_3, (char)param_4, (char)param_5, (char)param_6,
						    (char)param_7, (char)param_8, in_stack_ffffff88);
						iVar7 = (int)(uVar32 + lVar29);
						*(undefined4 *)(iVar7 + 0x50) = 0x96;
						*(int *)(iVar7 + 0x90) = iVar8;
						InitQTextMsg(0xd, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffff88);
						*piVar5 = 1;
					}
				}
			}
		}
		uVar28 = (undefined)param_8;
		uVar27 = (undefined)param_7;
		uVar26 = (undefined)param_6;
		uVar25 = (undefined)param_5;
		uVar24 = (undefined)param_4;
		uVar23 = (undefined)param_3;
		if (*puVar10 != '\0') {
			return;
		}
		TownerTalk(0xa0, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
		    in_stack_ffffff8f, in_stack_ffffff9c);
		if (*(int *)puVar13 == 0) {
			return;
		}
		StartStore('\x15', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
		return;
	}
	lVar15 = GetActiveTowner(2);
	uVar27 = (undefined)param_8;
	uVar26 = (undefined)param_7;
	uVar25 = (undefined)param_6;
	uVar24 = (undefined)param_5;
	uVar23 = (undefined)param_3;
	if (iVar18 == (int)lVar15) {
		lVar15 = uVar31 + 0x92;
		uVar22 = (undefined)lVar15;
		cVar1 = puVar11[0x92];
		if (cVar1 == '\x02') {
			uVar28 = (undefined)(uVar31 + 0x9f);
			if (puVar11[0x9f] == '\x01') {
				*(undefined4 *)(puVar9 + iVar6 + 0x50) = 0x96;
				*(int *)(puVar9 + iVar6 + 0x90) = iVar8;
				*(undefined *)(uVar31 + 0x9f) = 1;
				pcVar30 = puVar20 + iVar7 + 0x15c;
				if ((*pcVar30 == '\0') && (uVar17 = effect_is_playing(0x2d1, uVar28, uVar23, uVar22, uVar24, uVar25, uVar26, uVar27, in_stack_ffffff88), (int)uVar17 == 0)) {
					PlaySFX(0x2d1);
				} else {
					if ((*pcVar30 == '\x01') && (uVar17 = effect_is_playing(0x26a, uVar28, uVar23, uVar22, uVar24, uVar25, uVar26, uVar27, in_stack_ffffff88), (int)uVar17 == 0)) {
						PlaySFX(0x26a);
					} else {
						if ((*pcVar30 == '\x02') && (uVar17 = effect_is_playing(0x203, uVar28, uVar23, uVar22, uVar24, uVar25, uVar26, uVar27, in_stack_ffffff88), (int)uVar17 == 0)) {
							PlaySFX(0x203);
						}
					}
				}
				*piVar5 = 1;
				return;
			}
		}
		if ((cVar1 == '\x03') && (puVar11[0x9f] == '\x01')) {
			puVar11[0x9f] = 1;
			*(undefined4 *)(puVar9 + iVar6 + 0x50) = 0x96;
			*(int *)(puVar9 + iVar6 + 0x90) = iVar8;
			*piVar5 = 1;
			return;
		}
		if (cVar1 != '\x01') {
			if (cVar1 != '\x02') {
				return;
			}
			if (puVar11[0x9f] != '\0') {
				return;
			}
		}
		*(undefined *)lVar15 = 2;
		*(undefined4 *)(puVar11 + 0xa4) = 1;
		puVar11[0x9e] = 0x3f;
		puVar11[0x9f] = 1;
		iVar7 = (int)(uVar32 + lVar29);
		*(undefined4 *)(iVar7 + 0x50) = 0x32;
		*(int *)(iVar7 + 0x90) = iVar8;
		*(undefined4 *)(iVar7 + 0x94) = 3;
		InitQTextMsg(0x3f, uVar32 + lVar29, 0x32, lVar15, param_5, param_6, param_7, param_8, in_stack_ffffff88);
		*piVar5 = 1;
		NetSendCmdQuest(1, 6);
		return;
	}
	lVar15 = GetActiveTowner(0);
	if (iVar18 == (int)lVar15) {
		if (*puVar19 == '\x01') {
			if (puVar20[iVar7 + 500] != '\0') {
				pcVar30 = puVar11 + 2;
				if (puVar11[2] != '\0') {
					if ((puVar11[2] != '\0') && (puVar11[0x10] == '\0')) {
						puVar11[0x10] = 1;
						*(undefined4 *)(puVar11 + 0x14) = 1;
						if (*pcVar30 == '\x01') {
							*pcVar30 = '\x02';
							puVar11[0xf] = 1;
						}
						iVar6 = (int)(uVar32 + lVar29);
						*(undefined4 *)(iVar6 + 0x50) = 0x96;
						*(int *)(iVar6 + 0x90) = iVar8;
						InitQTextMsg(0x73, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffff88);
						*piVar5 = 1;
					}
					if (puVar11[0x10] == '\x01') {
						param_3 = uVar17 - 0x3c;
						puVar19 = PlrHasItem(iVar8, 9, (int *)param_3);
						if ((puVar19 != (undefined *)0x0) && (*piVar5 == 0)) {
							*pcVar30 = '\x03';
							puVar11[0x10] = 2;
							puVar11[0xf] = 2;
							RemoveInvItem(param_1, (ulonglong)local_3c, (char)param_3, (char)param_4, (char)param_5,
							    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
							param_3 = (ulonglong)*puVar4 + 1;
							CreateItem(2, *puVar3, (int)param_3, (char)param_4, (char)param_5, (char)param_6,
							    (char)param_7, (char)param_8, in_stack_ffffff88);
							iVar6 = (int)(uVar32 + lVar29);
							*(undefined4 *)(iVar6 + 0x50) = 0x96;
							*(int *)(iVar6 + 0x90) = iVar8;
							InitQTextMsg(0x75, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffff88);
							*piVar5 = 1;
						}
					}
				}
			}
			if (puVar20[iVar7 + 0x1f9] != '\0') {
				pcVar30 = puVar11 + 0xf2;
				if (puVar11[0xf2] != '\0') {
					if (((((byte)(puVar11[0xf2] - 1) < 2) && (puVar11[0x100] == '\0')) && (*piVar5 == 0)) && ((puVar11[0x10] == '\x02' || ((puVar11[2] == '\x02' && (puVar11[0x10] == '\x01')))))) {
						puVar11[0x100] = 1;
						*(undefined4 *)(puVar11 + 0x104) = 1;
						if (*pcVar30 == '\x01') {
							*pcVar30 = '\x02';
							puVar11[0xff] = 1;
						}
						iVar7 = (int)(uVar32 + lVar29);
						*(undefined4 *)(iVar7 + 0x50) = 0x96;
						*(int *)(iVar7 + 0x90) = iVar8;
						InitQTextMsg(0x58, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffff88);
						*piVar5 = 1;
					}
					if (puVar11[0x100] == '\x01') {
						param_3 = uVar17 - 0x3c;
						puVar19 = PlrHasItem(iVar8, 0x10, (int *)param_3);
						if ((puVar19 != (undefined *)0x0) && (*piVar5 == 0)) {
							*pcVar30 = '\x03';
							puVar11[0x100] = 2;
							puVar11[0xff] = 2;
							RemoveInvItem(param_1, (ulonglong)local_3c, (char)param_3, (char)param_4, (char)param_5,
							    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
							param_3 = (ulonglong)*puVar4 + 1;
							CreateItem(8, *puVar3, (int)param_3, (char)param_4, (char)param_5, (char)param_6,
							    (char)param_7, (char)param_8, in_stack_ffffff88);
							iVar7 = (int)(uVar32 + lVar29);
							*(undefined4 *)(iVar7 + 0x50) = 0x96;
							*(int *)(iVar7 + 0x90) = iVar8;
							InitQTextMsg(0x5a, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffff88);
							*piVar5 = 1;
						}
					}
				}
			}
		}
		uVar28 = (undefined)param_8;
		uVar27 = (undefined)param_7;
		uVar26 = (undefined)param_6;
		uVar25 = (undefined)param_5;
		uVar24 = (undefined)param_4;
		uVar23 = (undefined)param_3;
		if (*puVar10 != '\0') {
			return;
		}
		TownerTalk(0xbc, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
		    in_stack_ffffff8f, in_stack_ffffff9c);
		if (*(int *)puVar13 == 0) {
			return;
		}
		StartStore('\x01', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
		return;
	}
	lVar15 = GetActiveTowner(6);
	if (iVar18 != (int)lVar15) {
		lVar15 = GetActiveTowner(7);
		uVar28 = (undefined)param_8;
		uVar27 = (undefined)param_7;
		uVar26 = (undefined)param_6;
		uVar25 = (undefined)param_5;
		uVar24 = (undefined)param_4;
		uVar23 = (undefined)param_3;
		if (iVar18 == (int)lVar15) {
			if (*puVar10 != '\0') {
				return;
			}
			TownerTalk(0xb3, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
			    in_stack_ffffff8f, in_stack_ffffff9c);
			if (*(int *)puVar13 == 0) {
				return;
			}
			StartStore('\x17', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
			return;
		}
		lVar15 = GetActiveTowner(5);
		uVar28 = (undefined)param_8;
		uVar27 = (undefined)param_7;
		uVar26 = (undefined)param_6;
		uVar25 = (undefined)param_5;
		uVar24 = (undefined)param_4;
		uVar23 = (undefined)param_3;
		if (iVar18 == (int)lVar15) {
			if (*puVar10 != '\0') {
				return;
			}
			TownerTalk(200, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
			    in_stack_ffffff8f, in_stack_ffffff9c);
			if (*(int *)puVar13 == 0) {
				return;
			}
			StartStore('\x16', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
			return;
		}
		lVar15 = GetActiveTowner(1);
		if (iVar18 == (int)lVar15) {
			if (*puVar19 == '\x01') {
				if ((puVar20[iVar7 + 0x1f1] != '\0') && (*piVar5 == 0)) {
					if (puVar11[0x13a] == '\x01') {
						puVar11[0x13a] = 2;
						param_3 = 0x27;
						*(undefined4 *)(puVar11 + 0x14c) = 1;
						puVar11[0x146] = 0x27;
						puVar11[0x147] = 1;
						iVar7 = (int)(uVar32 + lVar29);
						*(undefined4 *)(iVar7 + 0x50) = 0x96;
						*(int *)(iVar7 + 0x90) = iVar8;
						InitQTextMsg(0x27, uVar32 + lVar29, 0x27, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffff88);
						*piVar5 = 1;
					} else {
						if ((puVar11[0x13a] == '\x03') && (puVar11[0x147] != '\x02')) {
							puVar11[0x147] = 2;
							iVar7 = (int)(uVar32 + lVar29);
							*(undefined4 *)(iVar7 + 0x50) = 0x96;
							*(int *)(iVar7 + 0x90) = iVar8;
							InitQTextMsg(0x29, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffff88);
							param_3 = (ulonglong)*puVar4 + 1;
							CreateItem(4, *puVar3, (int)param_3, (char)param_4, (char)param_5, (char)param_6,
							    (char)param_7, (char)param_8, in_stack_ffffff88);
							*piVar5 = 1;
						}
					}
				}
				if ((puVar11[0x1a] == '\x02') && (puVar11[0x26] == -0x7e)) {
					param_3 = uVar17 - 0x3c;
					puVar19 = PlrHasItem(iVar8, 0x12, (int *)param_3);
					if (puVar19 != (undefined *)0x0) {
						RemoveInvItem(param_1, (ulonglong)local_3c, (char)param_3, (char)param_4, (char)param_5,
						    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
						uVar17 = (ulonglong)*puVar3;
						param_4 = 0;
						param_3 = (ulonglong)*puVar4 + 1;
						param_5 = 0;
						SpawnQuestItem(0x14, *puVar3, (int)param_3, 0, 0, (char)param_6, (char)param_7, (char)param_8,
						    in_stack_ffffff88);
						InitQTextMsg(0x7c, uVar17, param_3, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffff88);
						puVar11[0x27] = 7;
						*(undefined4 *)(puVar12 + 0x44) = 0xffffffff;
					}
				}
			}
			uVar28 = (undefined)param_8;
			uVar27 = (undefined)param_7;
			uVar26 = (undefined)param_6;
			uVar25 = (undefined)param_5;
			uVar24 = (undefined)param_4;
			uVar23 = (undefined)param_3;
			if (*puVar10 != '\0') {
				return;
			}
			TownerTalk(0xa9, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
			    in_stack_ffffff8f, in_stack_ffffff9c);
			if (*(int *)puVar13 == 0) {
				return;
			}
			StartStore('\x0e', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
			return;
		}
		lVar15 = GetActiveTowner(8);
		uVar28 = (undefined)param_8;
		uVar27 = (undefined)param_7;
		uVar26 = (undefined)param_6;
		uVar25 = (undefined)param_5;
		uVar24 = (undefined)param_4;
		uVar23 = (undefined)param_3;
		if (iVar18 == (int)lVar15) {
			if (*puVar10 != '\0') {
				return;
			}
			TownerTalk(0xe0, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
			    in_stack_ffffff8f, in_stack_ffffff9c);
			if (*(int *)puVar13 == 0) {
				return;
			}
			StartStore('\f', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
			return;
		}
		lVar15 = GetActiveTowner(4);
		if (iVar18 != (int)lVar15) {
			if (*(int *)(puVar9 + iVar6 + 4) != 9) {
				return;
			}
			if (*puVar10 != '\0') {
				return;
			}
			CowSFX(iVar8, uVar21, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88);
			return;
		}
		if (*puVar19 == '\x01') {
			if (puVar11[0x16a] == '\x01') {
				param_3 = uVar17 - 0x3c;
				puVar20 = PlrHasItem(iVar8, 0x21, (int *)param_3);
				if (puVar20 != (undefined *)0x0) {
					RemoveInvItem(param_1, (ulonglong)local_3c, (char)param_3, (char)param_4, (char)param_5,
					    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
					puVar11[0x177] = 2;
					iVar7 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar7 + 0x50) = 0x96;
					*(int *)(iVar7 + 0x90) = iVar8;
					InitQTextMsg(0x17, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffff88);
					*piVar5 = 1;
					puVar11[0x16a] = '\x02';
					*(undefined4 *)(puVar11 + 0x17c) = 1;
					goto LAB_100b5a9c;
				}
			}
			if ((puVar11[0x16a] == '\x03') && (puVar11[0x177] == '\a')) {
				puVar11[0x177] = 8;
				iVar7 = (int)(uVar32 + lVar29);
				*(undefined4 *)(iVar7 + 0x50) = 0x96;
				*(int *)(iVar7 + 0x90) = iVar8;
				InitQTextMsg(0x19, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff88);
				*piVar5 = 1;
				*(undefined4 *)(puVar11 + 0x8c) = 1;
			}
		}
	LAB_100b5a9c:
		if (*puVar19 != '\x01') {
			if ((puVar11[0x16a] == '\x02') && (*(int *)(puVar11 + 0x17c) == 0)) {
				iVar7 = (int)(uVar32 + lVar29);
				*(undefined4 *)(iVar7 + 0x50) = 0x96;
				*(int *)(iVar7 + 0x90) = iVar8;
				InitQTextMsg(0x17, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff88);
				*piVar5 = 1;
				*(undefined4 *)(puVar11 + 0x17c) = 1;
				NetSendCmdQuest(1, 0xf);
			} else {
				if ((puVar11[0x16a] == '\x03') && (puVar11[0x177] == '\a')) {
					puVar11[0x177] = 8;
					iVar7 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar7 + 0x50) = 0x96;
					*(int *)(iVar7 + 0x90) = iVar8;
					InitQTextMsg(0x19, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffff88);
					*piVar5 = 1;
					NetSendCmdQuest(1, 0xf);
					*(undefined4 *)(puVar11 + 0x8c) = 1;
					NetSendCmdQuest(1, 5);
				}
			}
		}
		uVar28 = (undefined)param_8;
		uVar27 = (undefined)param_7;
		uVar26 = (undefined)param_6;
		uVar25 = (undefined)param_5;
		uVar24 = (undefined)param_4;
		uVar23 = (undefined)param_3;
		if (*puVar10 != '\0') {
			return;
		}
		TownerTalk(0x96, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88,
		    in_stack_ffffff8f, in_stack_ffffff9c);
		if (*(int *)puVar13 == 0) {
			return;
		}
		StartStore('\x0f', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
		return;
	}
	pcVar30 = puVar11 + 0x1a;
	if (puVar11[0x1a] == '\x01') {
		param_3 = uVar17 - 0x3c;
		puVar19 = PlrHasItem(iVar8, 0x13, (int *)param_3);
		if (puVar19 != (undefined *)0x0) {
			RemoveInvItem(param_1, (ulonglong)local_3c, (char)param_3, (char)param_4, (char)param_5,
			    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff88);
			param_3 = 2;
			*pcVar30 = '\x02';
			*(undefined4 *)(puVar11 + 0x2c) = 1;
			puVar11[0x27] = 2;
			iVar7 = (int)(uVar32 + lVar29);
			*(undefined4 *)(iVar7 + 0x50) = 0x96;
			*(int *)(iVar7 + 0x90) = iVar8;
			InitQTextMsg(0x80, uVar32 + lVar29, 2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88);
			*piVar5 = 1;
			goto LAB_100b5768;
		}
	}
	if (*pcVar30 == '\x02') {
		if (((byte)puVar11[0x27] < 2) || (4 < (byte)puVar11[0x27])) {
			param_3 = uVar17 - 0x3c;
			puVar19 = PlrHasItem(iVar8, 0x14, (int *)param_3);
			if (puVar19 == (undefined *)0x0) {
				param_3 = uVar17 - 0x3c;
				puVar19 = PlrHasItem(iVar8, 0x12, (int *)param_3);
				if ((puVar19 != (undefined *)0x0) && (param_3 = uVar31 + 0x28, puVar11[0x28] != -0x7d)) {
					iVar7 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar7 + 0x50) = 0x96;
					*(int *)(iVar7 + 0x90) = iVar8;
					*(undefined *)param_3 = 0x83;
					InitQTextMsg(0x83, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffff88);
					*piVar5 = 1;
				}
			} else {
				iVar7 = (int)(uVar32 + lVar29);
				*(undefined4 *)(iVar7 + 0x50) = 0x96;
				*(int *)(iVar7 + 0x90) = iVar8;
				InitQTextMsg(0x84, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff88);
				*pcVar30 = '\x03';
				*piVar5 = 1;
				ppuVar14[*(int *)(puVar19 + 0x168) * 0x13 + 0xe26] = (undefined *)0x1;
			}
		} else {
			uVar23 = (undefined)(uVar17 - 0x3c);
			puVar19 = PlrHasItem(iVar8, 0x11, (int *)(uVar17 - 0x3c));
			if (puVar19 == (undefined *)0x0) {
				param_3 = uVar31 + 0x26;
				if (puVar11[0x26] != -0x7f) {
					iVar7 = (int)(uVar32 + lVar29);
					*(undefined4 *)(iVar7 + 0x50) = 0x96;
					*(int *)(iVar7 + 0x90) = iVar8;
					*(undefined *)param_3 = 0x81;
					InitQTextMsg(0x81, uVar32 + lVar29, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffff88);
					*piVar5 = 1;
				}
			} else {
				RemoveInvItem(param_1, (ulonglong)local_3c, uVar23, (char)param_4, (char)param_5, (char)param_6,
				    (char)param_7, (char)param_8, in_stack_ffffff88);
				puVar11[0x27] = 5;
				*(undefined4 *)(puVar12 + 0x44) = 0x7b;
				param_3 = 0x96;
				*(undefined4 *)(puVar12 + 0x184) = 0xffffffff;
				iVar7 = (int)(uVar32 + lVar29);
				*(undefined4 *)(iVar7 + 0x50) = 0x96;
				*(int *)(iVar7 + 0x90) = iVar8;
				puVar11[0x26] = 0x82;
				InitQTextMsg(0x82, uVar32 + lVar29, 0x96, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffff88);
				*piVar5 = 1;
			}
		}
	}
LAB_100b5768:
	uVar28 = (undefined)param_8;
	uVar27 = (undefined)param_7;
	uVar26 = (undefined)param_6;
	uVar25 = (undefined)param_5;
	uVar24 = (undefined)param_4;
	uVar23 = (undefined)param_3;
	if ((*puVar10 == '\0') && (TownerTalk(0xd4, iVar18, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9c), *(int *)puVar13 != 0)) {
		StartStore('\x05', uVar22, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28, in_stack_ffffff88);
	}
	return;
}

void trackcpp(void)

{
	_DAT_100f4548 = _DAT_100f4530;
	return;
}

void track_process(void)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	longlong lVar6;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	puVar4 = PTR_DAT_100f1978;
	puVar3 = PTR_DAT_100f1974;
	if ((((((_DAT_100f4558 != 0) && (iVar5 = *(int *)PTR_DAT_100f1978, -1 < iVar5)) && (iVar5 < 0x6f))
	         && ((iVar1 = *(int *)PTR_DAT_100f1974, -1 < iVar1 && (iVar1 < 0x6f))))
	        && ((lVar6 = (ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec,
	            6 < *(int *)(PTR_DAT_100f1828 + (int)lVar6 + 0x1ec) || (*(int *)(PTR_DAT_100f1828 + (int)lVar6) == 0))))
	    && ((iVar2 = (int)(ZEXT48(PTR_DAT_100f1828) + lVar6), iVar5 != *(int *)(iVar2 + 0x48) || (iVar1 != *(int *)(iVar2 + 0x4c))))) {
		iVar5 = GetTickCount((char)(ZEXT48(PTR_DAT_100f1828) + lVar6), (char)PTR_DAT_100f1828, (char)iVar5, (char)iVar1, (char)lVar6, (char)in_r8, (char)in_r9, (char)in_r10,
		    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
		if (299 < iVar5 - *(int *)(local_2c + -0x4a80)) {
			*(int *)(local_2c + -0x4a80) = iVar5;
			NetSendCmdLoc(1, 1, (ulonglong)(*(uint *)puVar4 & 0xff), (ulonglong)(*(uint *)puVar3 & 0xff), lVar6, in_r8, in_r9, in_r10, in_stack_ffffffc8);
			if (*(char *)(local_2c + -0x4a7c) == '\0') {
				*(undefined *)(local_2c + -0x4a7c) = 1;
			}
		}
	}
	return;
}

void track_repeat_walk(undefined8 uParm1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	uint uVar1;
	int iVar2;
	undefined4 uVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	iVar2 = (int)uParm1;
	if (_DAT_100f4558 != iVar2) {
		if (iVar2 == 0) {
			_DAT_100f4558 = iVar2;
			if (DAT_100f4554 != '\0') {
				DAT_100f4554 = '\0';
				_DAT_100f4558 = iVar2;
			}
		} else {
			DAT_100f4554 = '\0';
			_DAT_100f4558 = iVar2;
			uVar3 = GetTickCount((char)uParm1, param_2, param_3, param_4, param_5, (char)uParm6, (char)uParm7,
			    (char)uParm8, (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
			*(undefined4 *)(local_2c + -0x4a80) = uVar3;
			*(int *)(local_2c + -0x4a80) = *(int *)(local_2c + -0x4a80) + 0xfa;
			uVar1 = *(uint *)(local_2c + -0x4a80);
			*(int *)(local_2c + -0x4a80) = uVar1 - 300;
			NetSendCmdLoc(1, 1, (ulonglong)(**(uint **)(local_2c + -0x7658) & 0xff),
			    (ulonglong)(**(uint **)(local_2c + -0x765c) & 0xff), (ulonglong)uVar1, uParm6,
			    uParm7, uParm8, in_stack_ffffffc8);
		}
	}
	return;
}

ulonglong track_isscrolling(void)

{
	return (ulonglong)DAT_100f4554;
}

void trigscpp(void)

{
	_DAT_100f455c = _DAT_100f454c;
	return;
}

void InitNoTriggers(void)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1890;
	*(undefined4 *)PTR_DAT_100f1ed8 = 0;
	*(undefined4 *)puVar1 = 0;
	return;
}

void InitTownTriggers(void)

{
	byte bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;

	puVar6 = PTR_DAT_100f1edc;
	puVar4 = PTR_DAT_100f1ed8;
	*(undefined4 *)PTR_DAT_100f1edc = 0x19;
	puVar7 = PTR_DAT_100f17e0;
	*(undefined4 *)(puVar6 + 4) = 0x1d;
	puVar5 = PTR_DAT_100f2124;
	*(undefined4 *)(puVar6 + 8) = 0x402;
	*(undefined4 *)puVar4 = 1;
	puVar3 = PTR_DAT_100f1824;
	if (*puVar7 == '\x04') {
		*(undefined4 *)puVar5 = 1;
		*(undefined4 *)(puVar5 + 4) = 1;
		*(undefined4 *)(puVar5 + 8) = 1;
		*(undefined4 *)(puVar6 + 0x10) = 0x31;
		*(undefined4 *)(puVar6 + 0x14) = 0x15;
		*(undefined4 *)(puVar6 + 0x18) = 0x407;
		*(undefined4 *)(puVar6 + 0x1c) = 5;
		*(int *)puVar4 = *(int *)puVar4 + 1;
		*(undefined4 *)(puVar6 + 0x20) = 0x11;
		*(undefined4 *)(puVar6 + 0x24) = 0x45;
		*(undefined4 *)(puVar6 + 0x28) = 0x407;
		*(undefined4 *)(puVar6 + 0x2c) = 9;
		*(int *)puVar4 = *(int *)puVar4 + 1;
		*(undefined4 *)(puVar6 + 0x30) = 0x29;
		*(undefined4 *)(puVar6 + 0x34) = 0x50;
		*(undefined4 *)(puVar6 + 0x38) = 0x407;
		*(undefined4 *)(puVar6 + 0x3c) = 0xd;
		*(int *)puVar4 = *(int *)puVar4 + 1;
	} else {
		*(undefined4 *)puVar5 = 0;
		puVar7 = PTR_DAT_100f1828;
		*(undefined4 *)(puVar5 + 4) = 0;
		*(undefined4 *)(puVar5 + 8) = 0;
		bVar1 = puVar7[*(int *)puVar3 * 0x55ec + 0x5590];
		if ((bVar1 & 1) != 0) {
			*(undefined4 *)(puVar6 + 0x10) = 0x31;
			*(undefined4 *)(puVar6 + 0x14) = 0x15;
			*(undefined4 *)(puVar6 + 0x18) = 0x407;
			*(undefined4 *)(puVar6 + 0x1c) = 5;
			*(int *)puVar4 = *(int *)puVar4 + 1;
			*(undefined4 *)puVar5 = 1;
		}
		if ((bVar1 & 2) != 0) {
			iVar2 = *(int *)puVar4;
			*(undefined4 *)(puVar6 + iVar2 * 0x10) = 0x11;
			puVar7 = puVar6 + iVar2 * 0x10;
			*(undefined4 *)(puVar7 + 4) = 0x45;
			*(undefined4 *)(puVar7 + 8) = 0x407;
			*(undefined4 *)(puVar7 + 0xc) = 9;
			*(int *)puVar4 = *(int *)puVar4 + 1;
			*(undefined4 *)(puVar5 + 4) = 1;
		}
		if ((bVar1 & 4) != 0) {
			iVar2 = *(int *)puVar4;
			*(undefined4 *)(puVar6 + iVar2 * 0x10) = 0x29;
			puVar6 = puVar6 + iVar2 * 0x10;
			*(undefined4 *)(puVar6 + 4) = 0x50;
			*(undefined4 *)(puVar6 + 8) = 0x407;
			*(undefined4 *)(puVar6 + 0xc) = 0xd;
			*(int *)puVar4 = *(int *)puVar4 + 1;
			*(undefined4 *)(puVar5 + 8) = 1;
		}
	}
	*(undefined4 *)PTR_DAT_100f1890 = 0;
	return;
}

void InitL1Triggers(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int *piVar4;
	short *psVar5;
	short *psVar6;
	int iVar7;
	int iVar8;
	longlong lVar9;

	puVar2 = PTR_DAT_100f1ed8;
	puVar1 = PTR_DAT_100f1a54;
	iVar8 = 0;
	*(undefined4 *)PTR_DAT_100f1ed8 = 0;
	puVar3 = PTR_DAT_100f1edc;
	psVar6 = *(short **)puVar1;
	do {
		lVar9 = 0x38;
		iVar7 = 0;
		psVar5 = psVar6;
		do {
			if (*psVar5 == 0x81) {
				piVar4 = (int *)(puVar3 + *(int *)puVar2 * 0x10);
				*piVar4 = iVar7;
				piVar4[1] = iVar8;
				piVar4[2] = 0x403;
				*(int *)puVar2 = *(int *)puVar2 + 1;
			}
			if (*psVar5 == 0x73) {
				piVar4 = (int *)(puVar3 + *(int *)puVar2 * 0x10);
				*piVar4 = iVar7;
				piVar4[1] = iVar8;
				piVar4[2] = 0x402;
				*(int *)puVar2 = *(int *)puVar2 + 1;
			}
			if (psVar5[0x70] == 0x81) {
				piVar4 = (int *)(puVar3 + *(int *)puVar2 * 0x10);
				*piVar4 = iVar7 + 1;
				piVar4[1] = iVar8;
				piVar4[2] = 0x403;
				*(int *)puVar2 = *(int *)puVar2 + 1;
			}
			if (psVar5[0x70] == 0x73) {
				piVar4 = (int *)(puVar3 + *(int *)puVar2 * 0x10);
				*piVar4 = iVar7 + 1;
				piVar4[1] = iVar8;
				piVar4[2] = 0x402;
				*(int *)puVar2 = *(int *)puVar2 + 1;
			}
			psVar5 = psVar5 + 0xe0;
			iVar7 = iVar7 + 2;
			lVar9 = lVar9 + -1;
		} while (lVar9 != 0);
		iVar8 = iVar8 + 1;
		psVar6 = psVar6 + 1;
	} while (iVar8 < 0x70);
	*(undefined4 *)PTR_DAT_100f1890 = 0;
	return;
}

void InitL2Triggers(void)

{
	short *psVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int *piVar10;
	short *psVar11;
	short *psVar12;
	longlong lVar13;

	puVar5 = PTR_DAT_100f1ed8;
	puVar4 = PTR_DAT_100f19cc;
	iVar9 = 0;
	*(undefined4 *)PTR_DAT_100f1ed8 = 0;
	puVar6 = PTR_DAT_100f1edc;
	psVar12 = *(short **)PTR_DAT_100f1a54;
	iVar2 = *(int *)(puVar4 + 0x154);
	iVar3 = *(int *)(puVar4 + 0x158);
	do {
		lVar13 = 0x38;
		iVar7 = 0;
		psVar11 = psVar12;
		do {
			if ((*psVar11 == 0x10b) && ((iVar7 != iVar2 || (iVar9 != iVar3)))) {
				piVar10 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar10 = iVar7;
				piVar10[1] = iVar9;
				piVar10[2] = 0x403;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar11 == 0x22f) {
				piVar10 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar10 = iVar7;
				piVar10[1] = iVar9;
				piVar10[2] = 0x408;
				piVar10[3] = 0;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar11 == 0x10f) {
				piVar10 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar10 = iVar7;
				piVar10[1] = iVar9;
				piVar10[2] = 0x402;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			psVar1 = psVar11 + 0x70;
			iVar8 = iVar7 + 1;
			if ((*psVar1 == 0x10b) && ((iVar8 != iVar2 || (iVar9 != iVar3)))) {
				piVar10 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar10 = iVar8;
				piVar10[1] = iVar9;
				piVar10[2] = 0x403;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar1 == 0x22f) {
				piVar10 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar10 = iVar8;
				piVar10[1] = iVar9;
				piVar10[2] = 0x408;
				piVar10[3] = 0;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar1 == 0x10f) {
				piVar10 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar10 = iVar8;
				piVar10[1] = iVar9;
				piVar10[2] = 0x402;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			psVar11 = psVar11 + 0xe0;
			iVar7 = iVar7 + 2;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar9 = iVar9 + 1;
		psVar12 = psVar12 + 1;
	} while (iVar9 < 0x70);
	*(undefined4 *)PTR_DAT_100f1890 = 0;
	return;
}

void InitL3Triggers(void)

{
	short *psVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	int *piVar6;
	short *psVar7;
	short *psVar8;
	int iVar9;
	int iVar10;
	longlong lVar11;

	puVar3 = PTR_DAT_100f1ed8;
	puVar2 = PTR_DAT_100f1a54;
	iVar5 = 0;
	*(undefined4 *)PTR_DAT_100f1ed8 = 0;
	puVar4 = PTR_DAT_100f1edc;
	psVar8 = *(short **)puVar2;
	do {
		lVar11 = 0x38;
		iVar9 = 0;
		psVar7 = psVar8;
		do {
			if (*psVar7 == 0xab) {
				piVar6 = (int *)(puVar4 + *(int *)puVar3 * 0x10);
				*piVar6 = iVar9;
				piVar6[1] = iVar5;
				piVar6[2] = 0x403;
				*(int *)puVar3 = *(int *)puVar3 + 1;
			}
			if (*psVar7 == 0xa8) {
				piVar6 = (int *)(puVar4 + *(int *)puVar3 * 0x10);
				*piVar6 = iVar9;
				piVar6[1] = iVar5;
				piVar6[2] = 0x402;
				*(int *)puVar3 = *(int *)puVar3 + 1;
			}
			if (*psVar7 == 0x225) {
				piVar6 = (int *)(puVar4 + *(int *)puVar3 * 0x10);
				*piVar6 = iVar9;
				piVar6[1] = iVar5;
				piVar6[2] = 0x408;
				*(int *)puVar3 = *(int *)puVar3 + 1;
			}
			psVar1 = psVar7 + 0x70;
			iVar10 = iVar9 + 1;
			if (*psVar1 == 0xab) {
				piVar6 = (int *)(puVar4 + *(int *)puVar3 * 0x10);
				*piVar6 = iVar10;
				piVar6[1] = iVar5;
				piVar6[2] = 0x403;
				*(int *)puVar3 = *(int *)puVar3 + 1;
			}
			if (*psVar1 == 0xa8) {
				piVar6 = (int *)(puVar4 + *(int *)puVar3 * 0x10);
				*piVar6 = iVar10;
				piVar6[1] = iVar5;
				piVar6[2] = 0x402;
				*(int *)puVar3 = *(int *)puVar3 + 1;
			}
			if (*psVar1 == 0x225) {
				piVar6 = (int *)(puVar4 + *(int *)puVar3 * 0x10);
				*piVar6 = iVar10;
				piVar6[1] = iVar5;
				piVar6[2] = 0x408;
				*(int *)puVar3 = *(int *)puVar3 + 1;
			}
			psVar7 = psVar7 + 0xe0;
			iVar9 = iVar9 + 2;
			lVar11 = lVar11 + -1;
		} while (lVar11 != 0);
		iVar5 = iVar5 + 1;
		psVar8 = psVar8 + 1;
	} while (iVar5 < 0x70);
	*(undefined4 *)PTR_DAT_100f1890 = 0;
	return;
}

void InitL4Triggers(void)

{
	short *psVar1;
	char cVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	int iVar8;
	int *piVar9;
	short *psVar10;
	short *psVar11;
	int iVar12;
	longlong lVar13;

	puVar5 = PTR_DAT_100f1ed8;
	puVar4 = PTR_DAT_100f1a54;
	iVar8 = 0;
	*(undefined4 *)PTR_DAT_100f1ed8 = 0;
	puVar6 = PTR_DAT_100f1edc;
	puVar3 = PTR_DAT_100f19cc;
	psVar11 = *(short **)puVar4;
	do {
		lVar13 = 0x38;
		iVar7 = 0;
		psVar10 = psVar11;
		do {
			if (*psVar10 == 0x53) {
				piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar9 = iVar7;
				piVar9[1] = iVar8;
				piVar9[2] = 0x403;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar10 == 0x1a6) {
				piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar9 = iVar7;
				piVar9[1] = iVar8;
				piVar9[2] = 0x408;
				piVar9[3] = 0;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar10 == 0x78) {
				piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar9 = iVar7;
				piVar9[1] = iVar8;
				piVar9[2] = 0x402;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			psVar1 = psVar10 + 0x70;
			iVar12 = iVar7 + 1;
			if (*psVar1 == 0x53) {
				piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar9 = iVar12;
				piVar9[1] = iVar8;
				piVar9[2] = 0x403;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar1 == 0x1a6) {
				piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar9 = iVar12;
				piVar9[1] = iVar8;
				piVar9[2] = 0x408;
				piVar9[3] = 0;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if (*psVar1 == 0x78) {
				piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
				*piVar9 = iVar12;
				piVar9[1] = iVar8;
				piVar9[2] = 0x402;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			psVar10 = psVar10 + 0xe0;
			iVar7 = iVar7 + 2;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar8 = iVar8 + 1;
		psVar11 = psVar11 + 1;
	} while (iVar8 < 0x70);
	iVar7 = 0;
	iVar8 = 0;
	do {
		lVar13 = 0x10;
		cVar2 = puVar3[0x16a];
		psVar11 = (short *)(*(int *)puVar4 + iVar8);
		piVar9 = (int *)(puVar6 + *(int *)puVar5 * 0x10);
		iVar12 = 0;
		do {
			if ((*psVar11 == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if ((psVar11[0x70] == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12 + 1;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if ((psVar11[0xe0] == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12 + 2;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if ((psVar11[0x150] == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12 + 3;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if ((psVar11[0x1c0] == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12 + 4;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if ((psVar11[0x230] == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12 + 5;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			if ((psVar11[0x2a0] == 0x172) && (cVar2 == '\x03')) {
				*piVar9 = iVar12 + 6;
				piVar9[1] = iVar7;
				piVar9[2] = 0x402;
				piVar9 = piVar9 + 4;
				*(int *)puVar5 = *(int *)puVar5 + 1;
			}
			psVar11 = psVar11 + 0x310;
			iVar12 = iVar12 + 7;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar7 = iVar7 + 1;
		iVar8 = iVar8 + 2;
	} while (iVar7 < 0x70);
	*(undefined4 *)PTR_DAT_100f1890 = 0;
	return;
}

void InitSKingTriggers(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1edc;
	*(undefined4 *)PTR_DAT_100f1ed8 = 1;
	puVar1 = PTR_DAT_100f1890;
	*(undefined4 *)puVar2 = 0x52;
	*(undefined4 *)(puVar2 + 4) = 0x2a;
	*(undefined4 *)(puVar2 + 8) = 0x404;
	*(undefined4 *)puVar1 = 0;
	return;
}

void InitSChambTriggers(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1edc;
	*(undefined4 *)PTR_DAT_100f1ed8 = 1;
	puVar1 = PTR_DAT_100f1890;
	*(undefined4 *)puVar2 = 0x46;
	*(undefined4 *)(puVar2 + 4) = 0x27;
	*(undefined4 *)(puVar2 + 8) = 0x404;
	*(undefined4 *)puVar1 = 0;
	return;
}

void InitPWaterTriggers(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1edc;
	*(undefined4 *)PTR_DAT_100f1ed8 = 1;
	puVar1 = PTR_DAT_100f1890;
	*(undefined4 *)puVar2 = 0x1e;
	*(undefined4 *)(puVar2 + 4) = 0x53;
	*(undefined4 *)(puVar2 + 8) = 0x404;
	*(undefined4 *)puVar1 = 0;
	return;
}

void InitVPTriggers(void)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1edc;
	*(undefined4 *)PTR_DAT_100f1ed8 = 1;
	puVar1 = PTR_DAT_100f1890;
	*(undefined4 *)puVar2 = 0x23;
	*(undefined4 *)(puVar2 + 4) = 0x20;
	*(undefined4 *)(puVar2 + 8) = 0x404;
	*(undefined4 *)puVar1 = 0;
	return;
}

undefined8
FUN_100b6834(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	int *piVar3;
	int iVar4;
	short *psVar5;
	longlong lVar6;

	puVar2 = PTR_DAT_100f1978;
	puVar1 = PTR_DAT_100f1974;
	psVar5 = (short *)(*(int *)PTR_DAT_100f1a54 + *(int *)PTR_DAT_100f1978 * 0xe0 + *(int *)PTR_DAT_100f1974 * 2);
	piVar3 = (int *)PTR_DAT_100f3a3c;
	while (*piVar3 != -1) {
		if (*piVar3 == (int)*psVar5) {
			strcpy((int)PTR_DAT_100f192c, (int)PTR_s_Down_to_dungeon_100f3a38);
			*(undefined4 *)puVar2 = 0x19;
			*(undefined4 *)puVar1 = 0x1d;
			return 1;
		}
		piVar3 = piVar3 + 1;
	}
	piVar3 = (int *)PTR_DAT_100f3a34;
	if (*(int *)PTR_DAT_100f2124 != 0) {
		while (*piVar3 != -1) {
			if (*piVar3 == (int)*psVar5) {
				strcpy((int)PTR_DAT_100f192c, (int)PTR_s_Down_to_catacombs_100f3a30);
				*(undefined4 *)puVar2 = 0x31;
				*(undefined4 *)puVar1 = 0x15;
				return 1;
			}
			piVar3 = piVar3 + 1;
		}
	}
	if (*(int *)(PTR_DAT_100f2124 + 4) != 0) {
		lVar6 = 0x16;
		iVar4 = 0x4af;
		do {
			if (iVar4 == (int)*psVar5) {
				strcpy((int)PTR_DAT_100f192c, (int)PTR_s_Down_to_caves_100f3a2c);
				*(undefined4 *)puVar2 = 0x11;
				*(undefined4 *)puVar1 = 0x45;
				return 1;
			}
			iVar4 = iVar4 + 1;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
	}
	if (*(int *)(PTR_DAT_100f2124 + 8) != 0) {
		lVar6 = 0x10;
		iVar4 = 0x4d8;
		do {
			if (iVar4 == (int)*psVar5) {
				strcpy((int)PTR_DAT_100f192c, (int)PTR_s_Down_to_hell_100f3a28);
				*(undefined4 *)puVar2 = 0x29;
				*(undefined4 *)puVar1 = 0x50;
				return 1;
			}
			iVar4 = iVar4 + 1;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
	}
	return 0;
}

undefined8 ForceL1Trig(void)

{
	byte bVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	undefined *puVar14;
	undefined *puVar15;
	int iVar16;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar17;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar11 = PTR_s_Up_to_level__i_100f3a20;
	puVar15 = PTR_s_Up_to_town_100f3a1c;
	puVar10 = PTR_s_Down_to_level__i_100f3a14;
	puVar9 = PTR_DAT_100f1edc;
	puVar8 = PTR_DAT_100f1ed8;
	puVar7 = PTR_DAT_100f1a54;
	puVar6 = PTR_DAT_100f1978;
	puVar5 = PTR_DAT_100f1974;
	puVar4 = PTR_DAT_100f192c;
	puVar3 = PTR_DAT_100f17ec;
	uVar13 = ZEXT48(&toc);
	piVar17 = (int *)PTR_DAT_100f3a24;
	while (*piVar17 != -1) {
		if (*piVar17 == (int)*(short *)(*(int *)puVar7 + *(int *)puVar6 * 0xe0 + *(int *)puVar5 * 2)) {
			bVar1 = *puVar3;
			if (bVar1 < 2) {
				strcpy((int)puVar4, (int)puVar15);
			} else {
				sprintf((int)puVar4, puVar11, (uint)bVar1 - 1, in_r6, in_r7, in_r8, in_r9, in_r10,
				    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
				    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
				    in_stack_ffffffc4);
			}
			uVar2 = *(uint *)puVar8;
			uVar12 = (ulonglong)uVar2;
			iVar16 = 0;
			puVar14 = puVar9;
			if (0 < (int)uVar2) {
				do {
					if (*(int *)(puVar14 + 8) == 0x403) {
						*(undefined4 *)puVar6 = *(undefined4 *)(puVar9 + iVar16 * 0x10);
						*(undefined4 *)puVar5 = *(undefined4 *)(puVar9 + iVar16 * 0x10 + 4);
						return 1;
					}
					puVar14 = puVar14 + 0x10;
					iVar16 = iVar16 + 1;
					uVar12 = uVar12 - 1;
				} while (uVar12 != 0);
			}
		}
		piVar17 = piVar17 + 1;
	}
	piVar17 = *(int **)((int)uVar13 + -0x55b8);
	do {
		if (*piVar17 == -1) {
			return 0;
		}
		if (*piVar17 == (int)*(short *)(*(int *)puVar7 + *(int *)puVar6 * 0xe0 + *(int *)puVar5 * 2)) {
			sprintf((int)puVar4, puVar10, (uint)(byte)*puVar3 + 1, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			uVar2 = *(uint *)puVar8;
			uVar13 = (ulonglong)uVar2;
			iVar16 = 0;
			puVar15 = puVar9;
			if (0 < (int)uVar2) {
				do {
					if (*(int *)(puVar15 + 8) == 0x402) {
						*(undefined4 *)puVar6 = *(undefined4 *)(puVar9 + iVar16 * 0x10);
						*(undefined4 *)puVar5 = *(undefined4 *)(puVar9 + iVar16 * 0x10 + 4);
						return 1;
					}
					puVar15 = puVar15 + 0x10;
					iVar16 = iVar16 + 1;
					uVar13 = uVar13 - 1;
				} while (uVar13 != 0);
			}
		}
		piVar17 = piVar17 + 1;
	} while (true);
}

undefined8 ForceL2Trig(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined *puVar13;
	longlong lVar11;
	longlong lVar12;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	uint *puVar14;
	int iVar15;
	int *piVar16;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar8 = PTR_s_Down_to_level__i_100f3a14;
	puVar7 = PTR_DAT_100f1edc;
	puVar6 = PTR_DAT_100f1ed8;
	puVar5 = PTR_DAT_100f1a54;
	puVar4 = PTR_DAT_100f1978;
	puVar3 = PTR_DAT_100f1974;
	puVar2 = PTR_DAT_100f192c;
	puVar1 = PTR_DAT_100f17ec;
	uVar10 = ZEXT48(&toc);
	piVar16 = (int *)PTR_DAT_100f3a10;
	while (*piVar16 != -1) {
		if (*piVar16 == (int)*(short *)(*(int *)puVar5 + *(int *)puVar4 * 0xe0 + *(int *)puVar3 * 2)) {
			iVar15 = 0;
			puVar14 = (uint *)puVar7;
			while (iVar15 < *(int *)puVar6) {
				if (puVar14[2] == 0x403) {
					lVar11 = abs((ulonglong)*puVar14 - (ulonglong) * (uint *)puVar4);
					lVar12 = abs((ulonglong)puVar14[1] - (ulonglong) * (uint *)puVar3);
					if (((int)lVar11 < 4) && ((int)lVar12 < 4)) {
						sprintf((int)puVar2, *(undefined4 *)((int)uVar10 + -0x55b0), (uint)(byte)*puVar1 - 1,
						    in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff98, in_stack_ffffff9f,
						    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8,
						    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
						*(undefined4 *)puVar4 = *(undefined4 *)(puVar7 + iVar15 * 0x10);
						*(undefined4 *)puVar3 = *(undefined4 *)(puVar7 + iVar15 * 0x10 + 4);
						return 1;
					}
				}
				puVar14 = puVar14 + 4;
				iVar15 = iVar15 + 1;
			}
		}
		piVar16 = piVar16 + 1;
	}
	piVar16 = *(int **)((int)uVar10 + -0x55c4);
	while (*piVar16 != -1) {
		if (*piVar16 == (int)*(short *)(*(int *)puVar5 + *(int *)puVar4 * 0xe0 + *(int *)puVar3 * 2)) {
			sprintf((int)puVar2, puVar8, (uint)(byte)*puVar1 + 1, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			uVar9 = (ulonglong) * (uint *)puVar6;
			iVar15 = 0;
			puVar13 = puVar7;
			if (0 < (int)*(uint *)puVar6) {
				do {
					if (*(int *)(puVar13 + 8) == 0x402) {
						*(undefined4 *)puVar4 = *(undefined4 *)(puVar7 + iVar15 * 0x10);
						*(undefined4 *)puVar3 = *(undefined4 *)(puVar7 + iVar15 * 0x10 + 4);
						return 1;
					}
					puVar13 = puVar13 + 0x10;
					iVar15 = iVar15 + 1;
					uVar9 = uVar9 - 1;
				} while (uVar9 != 0);
			}
		}
		piVar16 = piVar16 + 1;
	}
	if (*puVar1 == '\x05') {
		piVar16 = *(int **)((int)uVar10 + -0x55c8);
		while (*piVar16 != -1) {
			if (*piVar16 == (int)*(short *)(*(int *)puVar5 + *(int *)puVar4 * 0xe0 + *(int *)puVar3 * 2)) {
				iVar15 = 0;
				puVar14 = (uint *)puVar7;
				while (iVar15 < *(int *)puVar6) {
					if (puVar14[2] == 0x408) {
						lVar11 = abs((ulonglong)*puVar14 - (ulonglong) * (uint *)puVar4);
						lVar12 = abs((ulonglong)puVar14[1] - (ulonglong) * (uint *)puVar3);
						if (((int)lVar11 < 4) && ((int)lVar12 < 4)) {
							strcpy((int)puVar2, *(int *)((int)uVar10 + -0x55b4));
							*(undefined4 *)puVar4 = *(undefined4 *)(puVar7 + iVar15 * 0x10);
							*(undefined4 *)puVar3 = *(undefined4 *)(puVar7 + iVar15 * 0x10 + 4);
							return 1;
						}
					}
					puVar14 = puVar14 + 4;
					iVar15 = iVar15 + 1;
				}
			}
			piVar16 = piVar16 + 1;
		}
	}
	return 0;
}

undefined8 ForceL3Trig(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined *puVar13;
	short *psVar14;
	undefined *puVar15;
	longlong lVar11;
	longlong lVar12;
	int iVar16;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar17;
	uint *puVar18;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar15 = PTR_s_Up_to_level__i_100f3a20;
	puVar8 = PTR_s_Down_to_level__i_100f3a14;
	puVar7 = PTR_DAT_100f1edc;
	puVar6 = PTR_DAT_100f1ed8;
	puVar5 = PTR_DAT_100f1a54;
	puVar4 = PTR_DAT_100f1978;
	puVar3 = PTR_DAT_100f1974;
	puVar2 = PTR_DAT_100f192c;
	puVar1 = PTR_DAT_100f17ec;
	uVar10 = ZEXT48(&toc);
	piVar17 = (int *)PTR_DAT_100f3a04;
	while (*piVar17 != -1) {
		if (*piVar17 == (int)*(short *)(*(int *)puVar5 + *(int *)puVar4 * 0xe0 + *(int *)puVar3 * 2)) {
			sprintf((int)puVar2, puVar15, (uint)(byte)*puVar1 - 1, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4);
			uVar9 = (ulonglong) * (uint *)puVar6;
			iVar16 = 0;
			puVar13 = puVar7;
			if (0 < (int)*(uint *)puVar6) {
				do {
					if (*(int *)(puVar13 + 8) == 0x403) {
						*(undefined4 *)puVar4 = *(undefined4 *)(puVar7 + iVar16 * 0x10);
						*(undefined4 *)puVar3 = *(undefined4 *)(puVar7 + iVar16 * 0x10 + 4);
						return 1;
					}
					puVar13 = puVar13 + 0x10;
					iVar16 = iVar16 + 1;
					uVar9 = uVar9 - 1;
				} while (uVar9 != 0);
			}
		}
		piVar17 = piVar17 + 1;
	}
	piVar17 = *(int **)((int)uVar10 + -0x55d0);
	while (iVar16 = *piVar17, iVar16 != -1) {
		psVar14 = (short *)(*(int *)puVar5 + *(int *)puVar4 * 0xe0 + *(int *)puVar3 * 2);
		if (((iVar16 == (int)*psVar14) || (iVar16 == (int)psVar14[0x70])) || (iVar16 == (int)psVar14[0xe0])) {
			sprintf((int)puVar2, puVar8, (uint)(byte)*puVar1 + 1, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4);
			uVar9 = (ulonglong) * (uint *)puVar6;
			iVar16 = 0;
			puVar15 = puVar7;
			if (0 < (int)*(uint *)puVar6) {
				do {
					if (*(int *)(puVar15 + 8) == 0x402) {
						*(undefined4 *)puVar4 = *(undefined4 *)(puVar7 + iVar16 * 0x10);
						*(undefined4 *)puVar3 = *(undefined4 *)(puVar7 + iVar16 * 0x10 + 4);
						return 1;
					}
					puVar15 = puVar15 + 0x10;
					iVar16 = iVar16 + 1;
					uVar9 = uVar9 - 1;
				} while (uVar9 != 0);
			}
		}
		piVar17 = piVar17 + 1;
	}
	if (*puVar1 == '\t') {
		piVar17 = *(int **)((int)uVar10 + -0x55d4);
		while (*piVar17 != -1) {
			if (*piVar17 == (int)*(short *)(*(int *)puVar5 + *(int *)puVar4 * 0xe0 + *(int *)puVar3 * 2)) {
				iVar16 = 0;
				puVar18 = (uint *)puVar7;
				while (iVar16 < *(int *)puVar6) {
					if (puVar18[2] == 0x408) {
						lVar11 = abs((ulonglong)*puVar18 - (ulonglong) * (uint *)puVar4);
						lVar12 = abs((ulonglong)puVar18[1] - (ulonglong) * (uint *)puVar3);
						if (((int)lVar11 < 4) && ((int)lVar12 < 4)) {
							strcpy((int)puVar2, *(int *)((int)uVar10 + -0x55b4));
							*(undefined4 *)puVar4 = *(undefined4 *)(puVar7 + iVar16 * 0x10);
							*(undefined4 *)puVar3 = *(undefined4 *)(puVar7 + iVar16 * 0x10 + 4);
							return 1;
						}
					}
					puVar18 = puVar18 + 4;
					iVar16 = iVar16 + 1;
				}
			}
			piVar17 = piVar17 + 1;
		}
	}
	return 0;
}

undefined8 ForceL4Trig(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined *puVar13;
	undefined *puVar14;
	longlong lVar11;
	longlong lVar12;
	undefined *puVar15;
	int iVar16;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int *piVar17;
	uint *puVar18;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar14 = PTR_s_Up_to_level__i_100f3a20;
	puVar8 = PTR_s_Down_to_level__i_100f3a14;
	puVar7 = PTR_s_Down_to_Diablo_100f39e8;
	puVar6 = PTR_DAT_100f1edc;
	puVar5 = PTR_DAT_100f1ed8;
	puVar4 = PTR_DAT_100f1a54;
	puVar3 = PTR_DAT_100f1978;
	puVar2 = PTR_DAT_100f1974;
	puVar1 = PTR_DAT_100f192c;
	puVar15 = PTR_DAT_100f17ec;
	uVar10 = ZEXT48(&toc);
	piVar17 = (int *)PTR_DAT_100f39f8;
	while (*piVar17 != -1) {
		if (*piVar17 == (int)*(short *)(*(int *)puVar4 + *(int *)puVar3 * 0xe0 + *(int *)puVar2 * 2)) {
			sprintf((int)puVar1, puVar14, (uint)(byte)*puVar15 - 1, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			uVar9 = (ulonglong) * (uint *)puVar5;
			iVar16 = 0;
			puVar13 = puVar6;
			if (0 < (int)*(uint *)puVar5) {
				do {
					if (*(int *)(puVar13 + 8) == 0x403) {
						*(undefined4 *)puVar3 = *(undefined4 *)(puVar6 + iVar16 * 0x10);
						*(undefined4 *)puVar2 = *(undefined4 *)(puVar6 + iVar16 * 0x10 + 4);
						return 1;
					}
					puVar13 = puVar13 + 0x10;
					iVar16 = iVar16 + 1;
					uVar9 = uVar9 - 1;
				} while (uVar9 != 0);
			}
		}
		piVar17 = piVar17 + 1;
	}
	piVar17 = *(int **)((int)uVar10 + -0x55dc);
	while (true) {
		iVar16 = (int)uVar10;
		if (*piVar17 == -1)
			break;
		if (*piVar17 == (int)*(short *)(*(int *)puVar4 + *(int *)puVar3 * 0xe0 + *(int *)puVar2 * 2)) {
			sprintf((int)puVar1, puVar8, (uint)(byte)*puVar15 + 1, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
			    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
			    in_stack_ffffffc4);
			uVar9 = (ulonglong) * (uint *)puVar5;
			iVar16 = 0;
			puVar14 = puVar6;
			if (0 < (int)*(uint *)puVar5) {
				do {
					if (*(int *)(puVar14 + 8) == 0x402) {
						*(undefined4 *)puVar3 = *(undefined4 *)(puVar6 + iVar16 * 0x10);
						*(undefined4 *)puVar2 = *(undefined4 *)(puVar6 + iVar16 * 0x10 + 4);
						return 1;
					}
					puVar14 = puVar14 + 0x10;
					iVar16 = iVar16 + 1;
					uVar9 = uVar9 - 1;
				} while (uVar9 != 0);
			}
		}
		piVar17 = piVar17 + 1;
	}
	if (*puVar15 == '\r') {
		piVar17 = *(int **)(iVar16 + -0x55e0);
		while (true) {
			iVar16 = (int)uVar10;
			if (*piVar17 == -1)
				break;
			if (*piVar17 == (int)*(short *)(*(int *)puVar4 + *(int *)puVar3 * 0xe0 + *(int *)puVar2 * 2)) {
				iVar16 = 0;
				puVar18 = (uint *)puVar6;
				while (iVar16 < *(int *)puVar5) {
					if (puVar18[2] == 0x408) {
						lVar11 = abs((ulonglong)*puVar18 - (ulonglong) * (uint *)puVar3);
						lVar12 = abs((ulonglong)puVar18[1] - (ulonglong) * (uint *)puVar2);
						if (((int)lVar11 < 4) && ((int)lVar12 < 4)) {
							strcpy((int)puVar1, *(int *)((int)uVar10 + -0x55b4));
							*(undefined4 *)puVar3 = *(undefined4 *)(puVar6 + iVar16 * 0x10);
							*(undefined4 *)puVar2 = *(undefined4 *)(puVar6 + iVar16 * 0x10 + 4);
							return 1;
						}
					}
					puVar18 = puVar18 + 4;
					iVar16 = iVar16 + 1;
				}
			}
			piVar17 = piVar17 + 1;
		}
	}
	if (*puVar15 == '\x0f') {
		piVar17 = *(int **)(iVar16 + -0x55e4);
		while (*piVar17 != -1) {
			if (*piVar17 == (int)*(short *)(*(int *)puVar4 + *(int *)puVar3 * 0xe0 + *(int *)puVar2 * 2)) {
				strcpy((int)puVar1, (int)puVar7);
				uVar10 = (ulonglong) * (uint *)puVar5;
				iVar16 = 0;
				puVar15 = puVar6;
				if (0 < (int)*(uint *)puVar5) {
					do {
						if (*(int *)(puVar15 + 8) == 0x402) {
							*(undefined4 *)puVar3 = *(undefined4 *)(puVar6 + iVar16 * 0x10);
							*(undefined4 *)puVar2 = *(undefined4 *)(puVar6 + iVar16 * 0x10 + 4);
							return 1;
						}
						puVar15 = puVar15 + 0x10;
						iVar16 = iVar16 + 1;
						uVar10 = uVar10 - 1;
					} while (uVar10 != 0);
				}
			}
			piVar17 = piVar17 + 1;
		}
	}
	return 0;
}

void Freeupstairs(void)

{
	undefined *puVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	int iVar8;

	puVar2 = PTR_DAT_100f1ed8;
	puVar1 = PTR_DAT_100f1834;
	iVar8 = 0;
	piVar7 = (int *)PTR_DAT_100f1edc;
	while (iVar8 < *(int *)puVar2) {
		iVar4 = *piVar7;
		iVar6 = piVar7[1];
		iVar5 = iVar6 + -2;
		iVar3 = *(int *)puVar1 + (iVar4 + -2) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + -1) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + iVar4 * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 1) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 2) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar5 = iVar6 + -1;
		iVar3 = *(int *)puVar1 + (iVar4 + -2) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + -1) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + iVar4 * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 1) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 2) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar5 = iVar6 + 1;
		iVar3 = *(int *)puVar1 + (iVar4 + -2) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + -1) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + iVar4 * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 1) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 2) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + -2) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + -1) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + iVar4 * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 1) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 2) * 0x70;
		*(byte *)(iVar5 + iVar3) = *(byte *)(iVar5 + iVar3) | 8;
		iVar6 = iVar6 + 2;
		piVar7 = piVar7 + 4;
		iVar8 = iVar8 + 1;
		iVar3 = *(int *)puVar1 + (iVar4 + -2) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + -1) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + iVar4 * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar3 = *(int *)puVar1 + (iVar4 + 1) * 0x70;
		*(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 8;
		iVar4 = *(int *)puVar1 + (iVar4 + 2) * 0x70;
		*(byte *)(iVar6 + iVar4) = *(byte *)(iVar6 + iVar4) | 8;
	}
	return;
}

undefined8 ForceSKingTrig(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int *piVar4;
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

	puVar3 = PTR_DAT_100f1edc;
	puVar2 = PTR_DAT_100f1978;
	puVar1 = PTR_DAT_100f1974;
	piVar4 = (int *)PTR_DAT_100f3a24;
	while (true) {
		if (*piVar4 == -1) {
			return 0;
		}
		if (*piVar4 == (int)*(short *)(*(int *)PTR_DAT_100f1a54 + *(int *)PTR_DAT_100f1978 * 0xe0 + *(int *)PTR_DAT_100f1974 * 2))
			break;
		piVar4 = piVar4 + 1;
	}
	sprintf((int)PTR_DAT_100f192c, PTR_s_Back_to_Level__i_100f39e4,
	    (uint)(byte)PTR_DAT_100f19cc[0x120], in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
	    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	*(undefined4 *)puVar2 = *(undefined4 *)puVar3;
	*(undefined4 *)puVar1 = *(undefined4 *)(puVar3 + 4);
	return 1;
}

undefined8 ForceSChambTrig(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int *piVar4;
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

	puVar3 = PTR_DAT_100f1edc;
	puVar2 = PTR_DAT_100f1978;
	puVar1 = PTR_DAT_100f1974;
	piVar4 = (int *)PTR_DAT_100f3a0c;
	while (true) {
		if (*piVar4 == -1) {
			return 0;
		}
		if (*piVar4 == (int)*(short *)(*(int *)PTR_DAT_100f1a54 + *(int *)PTR_DAT_100f1978 * 0xe0 + *(int *)PTR_DAT_100f1974 * 2))
			break;
		piVar4 = piVar4 + 1;
	}
	sprintf((int)PTR_DAT_100f192c, PTR_s_Back_to_Level__i_100f39e4,
	    (uint)(byte)PTR_DAT_100f19cc[0x150], in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
	    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	*(undefined4 *)puVar2 = *(undefined4 *)puVar3;
	*(undefined4 *)puVar1 = *(undefined4 *)(puVar3 + 4);
	return 1;
}

undefined8 ForcePWaterTrig(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int *piVar4;
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

	puVar3 = PTR_DAT_100f1edc;
	puVar2 = PTR_DAT_100f1978;
	puVar1 = PTR_DAT_100f1974;
	piVar4 = (int *)PTR_DAT_100f3a00;
	while (true) {
		if (*piVar4 == -1) {
			return 0;
		}
		if (*piVar4 == (int)*(short *)(*(int *)PTR_DAT_100f1a54 + *(int *)PTR_DAT_100f1978 * 0xe0 + *(int *)PTR_DAT_100f1974 * 2))
			break;
		piVar4 = piVar4 + 1;
	}
	sprintf((int)PTR_DAT_100f192c, PTR_s_Back_to_Level__i_100f39e4,
	    (uint)(byte)PTR_DAT_100f19cc[0x138], in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
	    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	*(undefined4 *)puVar2 = *(undefined4 *)puVar3;
	*(undefined4 *)puVar1 = *(undefined4 *)(puVar3 + 4);
	return 1;
}

// WARNING: Removing unreachable block (ram,0x100b78e0)

void CheckTrigForce(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined uVar7;
	undefined4 uVar6;
	undefined8 uVar5;
	undefined4 in_stack_ffffffc8;

	puVar4 = PTR_DAT_100f1924;
	puVar3 = PTR_DAT_100f1890;
	puVar2 = PTR_DAT_100f183c;
	*(undefined4 *)PTR_DAT_100f1890 = 0;
	if (*(int *)puVar4 < 0x160) {
		uVar7 = SUB41(PTR_DAT_100f17f8, 0);
		if (*PTR_DAT_100f17f8 == '\0') {
			bVar1 = *puVar2;
			if (bVar1 == 2) {
				uVar6 = ForceL2Trig();
				uVar7 = (undefined)uVar6;
				*(undefined4 *)puVar3 = uVar6;
			} else {
				if (bVar1 < 2) {
					if (bVar1 == 0) {
						uVar5 = FUN_100b6834(uVar7, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffffc8);
						uVar7 = (undefined)uVar5;
						*(int *)puVar3 = (int)uVar5;
					} else {
						uVar6 = ForceL1Trig();
						uVar7 = (undefined)uVar6;
						*(undefined4 *)puVar3 = uVar6;
					}
				} else {
					if (bVar1 == 4) {
						uVar6 = ForceL4Trig();
						uVar7 = (undefined)uVar6;
						*(undefined4 *)puVar3 = uVar6;
					} else {
						if (bVar1 < 4) {
							uVar6 = ForceL3Trig();
							uVar7 = (undefined)uVar6;
							*(undefined4 *)puVar3 = uVar6;
						}
					}
				}
			}
			if ((*puVar2 != '\0') && (*(int *)puVar3 == 0)) {
				uVar5 = ForceQuests(uVar7, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffc8);
				*(int *)puVar3 = (int)uVar5;
			}
		} else {
			bVar1 = *PTR_DAT_100f17f0;
			if (bVar1 != 3) {
				if (bVar1 < 3) {
					if (bVar1 == 1) {
						uVar6 = ForceSKingTrig();
						*(undefined4 *)puVar3 = uVar6;
					} else {
						if (bVar1 != 0) {
							uVar6 = ForceSChambTrig();
							*(undefined4 *)puVar3 = uVar6;
						}
					}
				} else {
					if (bVar1 < 5) {
						uVar6 = ForcePWaterTrig();
						*(undefined4 *)puVar3 = uVar6;
					}
				}
			}
		}
		if (*(int *)puVar3 != 0) {
			ClearPanel();
		}
	}
	return;
}

void CheckTriggers(void)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	ulonglong uVar11;
	int iVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	ulonglong in_r7;
	undefined *puVar16;
	ulonglong in_r9;
	undefined4 uVar17;
	uint uVar18;
	undefined8 in_r10;
	undefined4 uVar19;
	int iVar20;
	char unaff_r18;
	ulonglong unaff_r19;
	ulonglong unaff_r20;
	int iVar21;
	uint *puVar22;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar10 = PTR_s_Unknown_trigger_msg_100f39e0;
	puVar9 = PTR_DAT_100f2110;
	puVar8 = PTR_DAT_100f1ed8;
	puVar7 = PTR_DAT_100f1e98;
	puVar6 = PTR_DAT_100f188c;
	puVar5 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	puVar3 = PTR_DAT_100f17ec;
	puVar2 = PTR_DAT_100f17e0;
	if (*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec) == 0) {
		iVar21 = 0;
		puVar22 = (uint *)PTR_DAT_100f1edc;
		while (iVar21 < *(int *)puVar8) {
			uVar11 = (ulonglong) * (uint *)puVar4;
			iVar12 = *(uint *)puVar4 * 0x55ec;
			puVar16 = puVar5 + iVar12;
			uVar14 = (ulonglong) * (uint *)(puVar16 + 0x38);
			if ((*(uint *)(puVar16 + 0x38) == *puVar22) && (uVar15 = (ulonglong) * (uint *)(puVar16 + 0x3c), *(uint *)(puVar16 + 0x3c) == puVar22[1])) {
				uVar18 = puVar22[2];
				uVar13 = (ulonglong)uVar18;
				uVar17 = (undefined4)in_r9;
				uVar19 = (undefined4)in_r10;
				if (uVar18 == 0x404) {
					StartNewLvl(uVar11, uVar13, (ulonglong) * (uint *)puVar7, uVar15, in_r7, puVar16, uVar17, uVar19,
					    in_stack_ffffff98);
				} else {
					if ((int)uVar18 < 0x404) {
						if (uVar18 == 0x402) {
							if ((0xb < *(int *)puVar6) && (iVar12 = DropItemBeforeTrig(), iVar12 != 0)) {
								return;
							}
							StartNewLvl((ulonglong) * (uint *)puVar4, (ulonglong)puVar22[2],
							    (ulonglong)(byte)*puVar3 + 1, uVar15, in_r7, puVar16, (int)in_r9, (int)in_r10,
							    in_stack_ffffff98);
						} else {
							if ((int)uVar18 < 0x402) {
							LAB_100b7c08:
								app_fatal((int)puVar10, uVar13, uVar14, uVar15, in_r7, puVar16, uVar17, uVar19,
								    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8,
								    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
							} else {
								if ((0xb < *(int *)puVar6) && (iVar12 = DropItemBeforeTrig(), iVar12 != 0)) {
									return;
								}
								StartNewLvl((ulonglong) * (uint *)puVar4, (ulonglong)puVar22[2],
								    (ulonglong)(byte)*puVar3 - 1, uVar15, in_r7, puVar16, (int)in_r9,
								    (int)in_r10, in_stack_ffffff98);
							}
						}
					} else {
						if (uVar18 == 0x408) {
							*(uint *)puVar9 = (uint)(byte)*puVar3;
							StartNewLvl(uVar11, (ulonglong)puVar22[2], 0, uVar15, in_r7, puVar16, uVar17, uVar19,
							    in_stack_ffffff98);
						} else {
							if ((0x407 < (int)uVar18) || ((int)uVar18 < 0x407))
								goto LAB_100b7c08;
							in_r7 = (ulonglong)(byte)*puVar2;
							if (*puVar2 != 1) {
								uVar18 = puVar22[3];
								in_r9 = (ulonglong)uVar18;
								in_r10 = 0;
								if ((uVar18 == 5) && (in_r7 = SEXT18((char)puVar16[0x1b4]), (char)puVar16[0x1b4] < '\b')) {
									unaff_r19 = uVar15 + 1;
									in_r10 = 1;
									unaff_r18 = '(';
									unaff_r20 = uVar14;
								}
								if ((uVar18 == 9) && (in_r7 = SEXT18((char)puVar16[0x1b4]), (char)puVar16[0x1b4] < '\r')) {
									unaff_r20 = uVar14 + 1;
									in_r10 = 1;
									unaff_r18 = ')';
									unaff_r19 = uVar15;
								}
								if ((uVar18 == 0xd) && (in_r7 = SEXT18((char)puVar16[0x1b4]), (char)puVar16[0x1b4] < '\x11')) {
									unaff_r19 = uVar15 + 1;
									in_r10 = 1;
									unaff_r18 = '*';
									unaff_r20 = uVar14;
								}
								iVar20 = (int)in_r10;
								if (iVar20 != 0) {
									cVar1 = puVar5[iVar12 + 0x15c];
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
									InitDiabloMsg(unaff_r18);
									NetSendCmdLoc(1, 1, (ulonglong)((uint)unaff_r20 & 0xff),
									    (ulonglong)((uint)unaff_r19 & 0xff), in_r7, puVar16, uVar18, iVar20,
									    in_stack_ffffff98);
									return;
								}
							}
							StartNewLvl(uVar11, uVar13, (ulonglong)puVar22[3], uVar15, in_r7, puVar16, (int)in_r9,
							    (int)in_r10, in_stack_ffffff98);
						}
					}
				}
			}
			puVar22 = puVar22 + 4;
			iVar21 = iVar21 + 1;
		}
	}
	return;
}

void FUN_100b8540(void)

{
	_DAT_100f456c = _DAT_100f4568;
	return;
}

ulonglong FUN_100be958(uint *param_1)

{
	return (ulonglong)*param_1;
}

undefined8 FUN_100bec88(undefined8 param_1, undefined8 param_2)

{
	return param_2;
}

void msgcmd(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined4 uVar2;
	undefined4 uVar3;
	undefined4 *puVar4;
	ulonglong uVar5;
	undefined4 in_stack_ffffffc8;

	puVar4 = _DAT_100f3ae8;
	uVar3 = _DAT_100f3adc;
	uVar2 = _DAT_100f213c;
	uVar5 = ZEXT48(_DAT_100f3ae8);
	uVar1 = (uint)(uVar5 + 4);
	_DAT_100f4630 = _DAT_100f461c;
	_DAT_100f3ae8[1] = 0;
	puVar4[2] = 0;
	*puVar4 = 0;
	*(uint *)uVar1 = uVar1;
	puVar4[2] = ~uVar1;
	FUN_1000058c((char)puVar4, (char)uVar2, (char)uVar3, 0, (char)puVar4, (char)(uVar5 + 4), param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_100bf280(uint param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	int iVar5;
	ulonglong uVar2;
	undefined8 uVar3;
	longlong lVar4;
	undefined uVar6;
	undefined4 in_stack_ffffffb8;
	undefined uVar7;
	undefined in_stack_ffffffbf;
	int local_3c;
	int iVar8;

	ppuVar1 = &toc;
	iVar5 = strlen(param_1);
	if ((longlong)iVar5 != 0) {
		if (((longlong)iVar5 + 1U & 0xffffffff) < 0x81) {
			uVar2 = FUN_100be958((uint *)ppuVar1[-0x1533]);
			uVar3 = SMemAlloc(0x88, (char)uVar2, 0xfe, 8, param_5, param_6, param_7, param_8,
			    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
			iVar8 = local_3c;
			lVar4 = FUN_100bec88(0x88, uVar3);
			lVar4._4_4_ = (int **)lVar4;
			if (lVar4 != 0) {
				lVar4._4_4_ = (int **)FUN_100bf468(lVar4._4_4_);
			}
			uVar7 = (undefined)in_stack_ffffffb8;
			uVar6 = 0;
			FUN_100bf338(*(int ***)(local_3c + -0x54d0), lVar4._4_4_, 2, (int **)0x0, param_5, param_6, param_7,
			    param_8, in_stack_ffffffb8);
			memcpy((char)lVar4._4_4_ + '\b', (char)param_1, (char)iVar5 + '\x01', uVar6, param_5, param_6,
			    param_7, param_8, uVar7, in_stack_ffffffbf, iVar8);
		}
	}
	return;
}

void FUN_100bf338(int **param_1, int **param_2, int param_3, int **param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int *piVar1;
	int *piVar2;
	undefined uVar3;
	int **ppiVar4;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	ppiVar4 = param_2;
	if (param_2 == (int **)0x0) {
		ppiVar4 = param_1 + 1;
	}
	piVar1 = *ppiVar4;
	uVar3 = SUB41(piVar1, 0);
	if ((piVar1 != (int *)0x0) && (piVar1 != (int *)0x0)) {
		piVar2 = ppiVar4[1];
		if ((int)piVar2 < 1) {
			piVar2 = (int *)~(uint)piVar2;
		} else {
			piVar2 = (int *)((int)((int)ppiVar4 - piVar1[1]) + (int)piVar2);
		}
		*(int **)piVar2 = piVar1;
		uVar3 = SUB41(ppiVar4[1], 0);
		param_5 = SUB41(*ppiVar4, 0);
		*(int **)(*ppiVar4 + 1) = ppiVar4[1];
		*ppiVar4 = (int *)0x0;
		ppiVar4[1] = (int *)0x0;
	}
	if (param_4 == (int **)0x0) {
		param_4 = param_1 + 1;
	} else {
		if (param_4 == (int **)0x0) {
			param_4 = param_1 + 1;
		}
	}
	if (param_3 == 2) {
		piVar1 = *param_4;
		*ppiVar4 = piVar1;
		ppiVar4[1] = (int *)piVar1[1];
		*(int ***)(piVar1 + 1) = param_2;
		*(int ***)param_4 = ppiVar4;
	} else {
		if ((param_3 < 2) && (0 < param_3)) {
			*(int ***)ppiVar4 = param_4;
			ppiVar4[1] = param_4[1];
			piVar1 = param_4[1];
			param_1 = (int **)*param_1;
			if ((int)piVar1 < 1) {
				param_1 = (int **)~(uint)piVar1;
			} else {
				if ((int)param_1 < 0) {
					param_1 = (int **)((int)param_4 - (*param_4)[1]);
				}
				param_1 = (int **)((int)param_1 + (int)piVar1);
			}
			*(int ***)param_1 = ppiVar4;
			*(int ***)(param_4 + 1) = param_2;
		} else {
			FUN_100bec54((char)_DAT_100f3afc, (char)_DAT_100f3af8, (char)param_3, (char)param_4, param_5, uVar3, (char)ppiVar4, param_8, in_stack_ffffffab, in_stack_ffffffaf, in_stack_ffffffb8,
			    in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8,
			    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
		}
	}
	return;
}

void FUN_100bf468(undefined4 *param_1)

{
	*param_1 = 0;
	param_1[1] = 0;
	return;
}

void msgcmd_cmd_cleanup(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	uint *puVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	longlong lVar5;
	undefined uVar6;
	longlong lVar7;
	undefined uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	puVar2 = _DAT_100f3b04;
	iVar1 = _DAT_100f3b00;
	lVar12 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	lVar9 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	while (true) {
		uVar8 = (undefined)lVar7;
		uVar6 = (undefined)lVar5;
		uVar4 = FUN_100bf4f4(iVar1);
		if (uVar4 == 0)
			break;
		FUN_100bf508((int *)uVar4, -1, uVar6, uVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
		    in_stack_ffffffb8);
		uVar3 = FUN_100be958(puVar2);
		lVar5 = -2;
		lVar7 = 0;
		SMemFree((char)uVar4, (char)uVar3, 0xfe, 0, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
		    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	}
	return;
}

ulonglong FUN_100bf4f4(int param_1)

{
	if (0 < (int)*(uint *)(param_1 + 8)) {
		return (ulonglong) * (uint *)(param_1 + 8);
	}
	return 0;
}

int *FUN_100bf508(int *param_1, short param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	ulonglong uVar3;
	int *piVar4;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	uVar3 = SEXT48((int)param_1);
	if (uVar3 != 0) {
		if (uVar3 != 0) {
			iVar1 = *param_1;
			param_3 = (undefined)iVar1;
			if (iVar1 != 0) {
				uVar2 = param_1[1];
				if ((int)uVar2 < 1) {
					piVar4 = (int *)~uVar2;
				} else {
					piVar4 = (int *)((int)param_1 + (uVar2 - *(int *)(iVar1 + 4)));
				}
				*piVar4 = iVar1;
				param_3 = (undefined)param_1[1];
				*(int *)(*param_1 + 4) = param_1[1];
				*param_1 = 0;
				param_1[1] = 0;
			}
			if ((uVar3 & 0xffffffff) != 0) {
				iVar1 = *param_1;
				param_3 = (undefined)iVar1;
				if (iVar1 != 0) {
					uVar2 = param_1[1];
					if ((int)uVar2 < 1) {
						piVar4 = (int *)~uVar2;
					} else {
						piVar4 = (int *)((int)param_1 + (uVar2 - *(int *)(iVar1 + 4)));
					}
					*piVar4 = iVar1;
					param_3 = (undefined)param_1[1];
					*(int *)(*param_1 + 4) = param_1[1];
					*param_1 = 0;
					param_1[1] = 0;
				}
			}
		}
		if (0 < param_2) {
			__dl((char)param_1, (char)param_2, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		}
	}
	return param_1;
}

void msgcmd_send_chat(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	ulonglong uVar2;
	longlong lVar3;
	ulonglong uVar4;
	undefined4 in_stack_ffffffb8;
	undefined uVar5;
	undefined in_stack_ffffffbf;
	int local_3c;
	int iVar6;

	iVar1 = _DAT_100f3b00;
	uVar2 = (ulonglong) * (uint *)(_DAT_100f3b00 + 8);
	if ((int)*(uint *)(_DAT_100f3b00 + 8) < 1) {
		uVar2 = 0;
	}
	if (uVar2 != 0) {
		if (DAT_100f4638 == '\0') {
			param_1 = 0;
			_DAT_100f463c = 0;
			DAT_100f4638 = '\x01';
		}
		lVar3 = GetTickCount(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
		if (1999 < (lVar3 - (ulonglong) * (uint *)(local_3c + -0x4994) & 0xffffffff)) {
			*(undefined4 *)(local_3c + -0x4994) = (int)lVar3;
			SNetSendServerChatCommand((char)uVar2 + '\b', param_2, param_3, param_4, param_5, param_6, param_7, param_8,
			    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
			iVar6 = local_3c;
			FUN_100bf6b0(iVar1, (int)(int *)uVar2);
			uVar5 = (undefined)in_stack_ffffffb8;
			FUN_100bf508((int *)uVar2, -1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			uVar4 = FUN_100be958(*(uint **)(local_3c + -0x54cc));
			SMemFree((char)uVar2, (char)uVar4, 0xfe, 0, param_5, param_6, param_7, param_8, uVar5,
			    in_stack_ffffffbf, iVar6);
		}
	}
	return;
}

ulonglong FUN_100bf6b0(int param_1, int param_2)

{
	if (param_2 == 0) {
		param_2 = param_1 + 4;
	}
	if ((int)*(uint *)(param_2 + 4) < 1) {
		return 0;
	}
	return (ulonglong) * (uint *)(param_2 + 4);
}

undefined8
msgcmd_add_server_cmd_W(byte *param_1, char param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	undefined8 uVar2;
	int iVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	undefined8 unaff_r27;
	uint uVar11;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined *puVar12;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	byte *pbVar13;
	undefined4 in_stack_ffffff38;
	undefined local_98[132];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar7 = (longlong)param_5;
	lVar6 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	lVar4 = (longlong)param_2;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (*param_1 == 0x2f) {
		puVar12 = local_98;
		uVar11 = 0;
		pbVar13 = param_1;
		while (iVar3 = strlen((uint)param_1), uVar11 < iVar3 + 1U) {
			bVar1 = *pbVar13;
			uVar11 = uVar11 + 1;
			pbVar13 = pbVar13 + 1;
			*puVar12 = (&DAT_100f64e8)[(uint)bVar1];
			puVar12 = puVar12 + 1;
		}
		FUN_100bf280((uint)local_98, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8,
		    (char)lVar9, (char)lVar10, in_stack_ffffff38);
		uVar2 = 1;
	} else {
		uVar2 = 0;
	}
	return uVar2;
}

void renderEnd(void)

{
	_DAT_100f4648 = _DAT_100f4644;
	return;
}

void FUN_100c8778(undefined4 *param_1, int *param_2)

{
	undefined *puVar1;
	undefined *puVar2;

	puVar1 = (undefined *)*param_1;
	puVar2 = (undefined *)*param_2;
	*(undefined **)param_1 = puVar1 + 0x20;
	*param_2 = *param_2 + 0x20;
	*puVar1 = *puVar2;
	puVar1[2] = puVar2[2];
	puVar1[4] = puVar2[4];
	puVar1[6] = puVar2[6];
	puVar1[8] = puVar2[8];
	puVar1[10] = puVar2[10];
	puVar1[0xc] = puVar2[0xc];
	puVar1[0xe] = puVar2[0xe];
	puVar1[0x10] = puVar2[0x10];
	puVar1[0x12] = puVar2[0x12];
	puVar1[0x14] = puVar2[0x14];
	puVar1[0x16] = puVar2[0x16];
	puVar1[0x18] = puVar2[0x18];
	puVar1[0x1a] = puVar2[0x1a];
	puVar1[0x1c] = puVar2[0x1c];
	puVar1[0x1e] = puVar2[0x1e];
	return;
}

void FUN_100c8818(int *param_1, int *param_2)

{
	int iVar1;
	int iVar2;

	iVar1 = *param_1;
	iVar2 = *param_2;
	*param_1 = iVar1 + 0x20;
	*param_2 = *param_2 + 0x20;
	*(undefined *)(iVar1 + 1) = *(undefined *)(iVar2 + 1);
	*(undefined *)(iVar1 + 3) = *(undefined *)(iVar2 + 3);
	*(undefined *)(iVar1 + 5) = *(undefined *)(iVar2 + 5);
	*(undefined *)(iVar1 + 7) = *(undefined *)(iVar2 + 7);
	*(undefined *)(iVar1 + 9) = *(undefined *)(iVar2 + 9);
	*(undefined *)(iVar1 + 0xb) = *(undefined *)(iVar2 + 0xb);
	*(undefined *)(iVar1 + 0xd) = *(undefined *)(iVar2 + 0xd);
	*(undefined *)(iVar1 + 0xf) = *(undefined *)(iVar2 + 0xf);
	*(undefined *)(iVar1 + 0x11) = *(undefined *)(iVar2 + 0x11);
	*(undefined *)(iVar1 + 0x13) = *(undefined *)(iVar2 + 0x13);
	*(undefined *)(iVar1 + 0x15) = *(undefined *)(iVar2 + 0x15);
	*(undefined *)(iVar1 + 0x17) = *(undefined *)(iVar2 + 0x17);
	*(undefined *)(iVar1 + 0x19) = *(undefined *)(iVar2 + 0x19);
	*(undefined *)(iVar1 + 0x1b) = *(undefined *)(iVar2 + 0x1b);
	*(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar2 + 0x1d);
	*(undefined *)(iVar1 + 0x1f) = *(undefined *)(iVar2 + 0x1f);
	return;
}

void FUN_100c88b8(undefined4 *param_1, int *param_2, uint param_3)

{
	undefined4 *puVar1;
	undefined4 *puVar2;

	puVar1 = (undefined4 *)*param_1;
	puVar2 = (undefined4 *)*param_2;
	*(undefined4 **)param_1 = puVar1 + 8;
	*param_2 = *param_2 + 0x20;
	if (param_3 == 0xffffffff) {
		*puVar1 = *puVar2;
		puVar1[1] = puVar2[1];
		puVar1[2] = puVar2[2];
		puVar1[3] = puVar2[3];
		puVar1[4] = puVar2[4];
		puVar1[5] = puVar2[5];
		puVar1[6] = puVar2[6];
		puVar1[7] = puVar2[7];
		return;
	}
	if ((param_3 & 0x80000000) != 0) {
		*(undefined *)puVar1 = *(undefined *)puVar2;
	}
	if ((param_3 & 0x40000000) != 0) {
		*(undefined *)((int)puVar1 + 1) = *(undefined *)((int)puVar2 + 1);
	}
	if ((param_3 & 0x20000000) != 0) {
		*(undefined *)((int)puVar1 + 2) = *(undefined *)((int)puVar2 + 2);
	}
	if ((param_3 & 0x10000000) != 0) {
		*(undefined *)((int)puVar1 + 3) = *(undefined *)((int)puVar2 + 3);
	}
	if ((param_3 & 0x8000000) != 0) {
		*(undefined *)(puVar1 + 1) = *(undefined *)(puVar2 + 1);
	}
	if ((param_3 & 0x4000000) != 0) {
		*(undefined *)((int)puVar1 + 5) = *(undefined *)((int)puVar2 + 5);
	}
	if ((param_3 & 0x2000000) != 0) {
		*(undefined *)((int)puVar1 + 6) = *(undefined *)((int)puVar2 + 6);
	}
	if ((param_3 & 0x1000000) != 0) {
		*(undefined *)((int)puVar1 + 7) = *(undefined *)((int)puVar2 + 7);
	}
	if ((param_3 & 0x800000) != 0) {
		*(undefined *)(puVar1 + 2) = *(undefined *)(puVar2 + 2);
	}
	if ((param_3 & 0x400000) != 0) {
		*(undefined *)((int)puVar1 + 9) = *(undefined *)((int)puVar2 + 9);
	}
	if ((param_3 & 0x200000) != 0) {
		*(undefined *)((int)puVar1 + 10) = *(undefined *)((int)puVar2 + 10);
	}
	if ((param_3 & 0x100000) != 0) {
		*(undefined *)((int)puVar1 + 0xb) = *(undefined *)((int)puVar2 + 0xb);
	}
	if ((param_3 & 0x80000) != 0) {
		*(undefined *)(puVar1 + 3) = *(undefined *)(puVar2 + 3);
	}
	if ((param_3 & 0x40000) != 0) {
		*(undefined *)((int)puVar1 + 0xd) = *(undefined *)((int)puVar2 + 0xd);
	}
	if ((param_3 & 0x20000) != 0) {
		*(undefined *)((int)puVar1 + 0xe) = *(undefined *)((int)puVar2 + 0xe);
	}
	if ((param_3 & 0x10000) != 0) {
		*(undefined *)((int)puVar1 + 0xf) = *(undefined *)((int)puVar2 + 0xf);
	}
	if ((param_3 & 0x8000) != 0) {
		*(undefined *)(puVar1 + 4) = *(undefined *)(puVar2 + 4);
	}
	if ((param_3 & 0x4000) != 0) {
		*(undefined *)((int)puVar1 + 0x11) = *(undefined *)((int)puVar2 + 0x11);
	}
	if ((param_3 & 0x2000) != 0) {
		*(undefined *)((int)puVar1 + 0x12) = *(undefined *)((int)puVar2 + 0x12);
	}
	if ((param_3 & 0x1000) != 0) {
		*(undefined *)((int)puVar1 + 0x13) = *(undefined *)((int)puVar2 + 0x13);
	}
	if ((param_3 & 0x800) != 0) {
		*(undefined *)(puVar1 + 5) = *(undefined *)(puVar2 + 5);
	}
	if ((param_3 & 0x400) != 0) {
		*(undefined *)((int)puVar1 + 0x15) = *(undefined *)((int)puVar2 + 0x15);
	}
	if ((param_3 & 0x200) != 0) {
		*(undefined *)((int)puVar1 + 0x16) = *(undefined *)((int)puVar2 + 0x16);
	}
	if ((param_3 & 0x100) != 0) {
		*(undefined *)((int)puVar1 + 0x17) = *(undefined *)((int)puVar2 + 0x17);
	}
	if ((param_3 & 0x80) != 0) {
		*(undefined *)(puVar1 + 6) = *(undefined *)(puVar2 + 6);
	}
	if ((param_3 & 0x40) != 0) {
		*(undefined *)((int)puVar1 + 0x19) = *(undefined *)((int)puVar2 + 0x19);
	}
	if ((param_3 & 0x20) != 0) {
		*(undefined *)((int)puVar1 + 0x1a) = *(undefined *)((int)puVar2 + 0x1a);
	}
	if ((param_3 & 0x10) != 0) {
		*(undefined *)((int)puVar1 + 0x1b) = *(undefined *)((int)puVar2 + 0x1b);
	}
	if ((param_3 & 8) != 0) {
		*(undefined *)(puVar1 + 7) = *(undefined *)(puVar2 + 7);
	}
	if ((param_3 & 4) != 0) {
		*(undefined *)((int)puVar1 + 0x1d) = *(undefined *)((int)puVar2 + 0x1d);
	}
	if ((param_3 & 2) != 0) {
		*(undefined *)((int)puVar1 + 0x1e) = *(undefined *)((int)puVar2 + 0x1e);
	}
	if ((param_3 & 1) == 0) {
		return;
	}
	*(undefined *)((int)puVar1 + 0x1f) = *(undefined *)((int)puVar2 + 0x1f);
	return;
}

void FUN_100c8b28(int *param_1, undefined param_2)

{
	undefined *puVar1;

	puVar1 = (undefined *)*param_1;
	*(undefined **)param_1 = puVar1 + 0x20;
	puVar1[0x1e] = param_2;
	puVar1[0x1c] = param_2;
	puVar1[0x1a] = param_2;
	puVar1[0x18] = param_2;
	puVar1[0x16] = param_2;
	puVar1[0x14] = param_2;
	puVar1[0x12] = param_2;
	puVar1[0x10] = param_2;
	puVar1[0xe] = param_2;
	puVar1[0xc] = param_2;
	puVar1[10] = param_2;
	puVar1[8] = param_2;
	puVar1[6] = param_2;
	puVar1[4] = param_2;
	puVar1[2] = param_2;
	*puVar1 = param_2;
	return;
}

void FUN_100c8b78(int *param_1, undefined param_2)

{
	int iVar1;

	iVar1 = *param_1;
	*param_1 = iVar1 + 0x20;
	*(undefined *)(iVar1 + 0x1f) = param_2;
	*(undefined *)(iVar1 + 0x1d) = param_2;
	*(undefined *)(iVar1 + 0x1b) = param_2;
	*(undefined *)(iVar1 + 0x19) = param_2;
	*(undefined *)(iVar1 + 0x17) = param_2;
	*(undefined *)(iVar1 + 0x15) = param_2;
	*(undefined *)(iVar1 + 0x13) = param_2;
	*(undefined *)(iVar1 + 0x11) = param_2;
	*(undefined *)(iVar1 + 0xf) = param_2;
	*(undefined *)(iVar1 + 0xd) = param_2;
	*(undefined *)(iVar1 + 0xb) = param_2;
	*(undefined *)(iVar1 + 9) = param_2;
	*(undefined *)(iVar1 + 7) = param_2;
	*(undefined *)(iVar1 + 5) = param_2;
	*(undefined *)(iVar1 + 3) = param_2;
	*(undefined *)(iVar1 + 1) = param_2;
	return;
}

void FUN_100c8bc8(int *param_1, undefined4 param_2, uint param_3)

{
	undefined4 *puVar1;
	undefined uVar2;

	puVar1 = (undefined4 *)*param_1;
	*(undefined4 **)param_1 = puVar1 + 8;
	if (param_3 == 0xffffffff) {
		puVar1[7] = param_2;
		puVar1[6] = param_2;
		puVar1[5] = param_2;
		puVar1[4] = param_2;
		puVar1[3] = param_2;
		puVar1[2] = param_2;
		puVar1[1] = param_2;
		*puVar1 = param_2;
		return;
	}
	uVar2 = (undefined)param_2;
	if ((param_3 & 0x80000000) != 0) {
		*(undefined *)puVar1 = uVar2;
	}
	if ((param_3 & 0x40000000) != 0) {
		*(undefined *)((int)puVar1 + 1) = uVar2;
	}
	if ((param_3 & 0x20000000) != 0) {
		*(undefined *)((int)puVar1 + 2) = uVar2;
	}
	if ((param_3 & 0x10000000) != 0) {
		*(undefined *)((int)puVar1 + 3) = uVar2;
	}
	if ((param_3 & 0x8000000) != 0) {
		*(undefined *)(puVar1 + 1) = uVar2;
	}
	if ((param_3 & 0x4000000) != 0) {
		*(undefined *)((int)puVar1 + 5) = uVar2;
	}
	if ((param_3 & 0x2000000) != 0) {
		*(undefined *)((int)puVar1 + 6) = uVar2;
	}
	if ((param_3 & 0x1000000) != 0) {
		*(undefined *)((int)puVar1 + 7) = uVar2;
	}
	if ((param_3 & 0x800000) != 0) {
		*(undefined *)(puVar1 + 2) = uVar2;
	}
	if ((param_3 & 0x400000) != 0) {
		*(undefined *)((int)puVar1 + 9) = uVar2;
	}
	if ((param_3 & 0x200000) != 0) {
		*(undefined *)((int)puVar1 + 10) = uVar2;
	}
	if ((param_3 & 0x100000) != 0) {
		*(undefined *)((int)puVar1 + 0xb) = uVar2;
	}
	if ((param_3 & 0x80000) != 0) {
		*(undefined *)(puVar1 + 3) = uVar2;
	}
	if ((param_3 & 0x40000) != 0) {
		*(undefined *)((int)puVar1 + 0xd) = uVar2;
	}
	if ((param_3 & 0x20000) != 0) {
		*(undefined *)((int)puVar1 + 0xe) = uVar2;
	}
	if ((param_3 & 0x10000) != 0) {
		*(undefined *)((int)puVar1 + 0xf) = uVar2;
	}
	if ((param_3 & 0x8000) != 0) {
		*(undefined *)(puVar1 + 4) = uVar2;
	}
	if ((param_3 & 0x4000) != 0) {
		*(undefined *)((int)puVar1 + 0x11) = uVar2;
	}
	if ((param_3 & 0x2000) != 0) {
		*(undefined *)((int)puVar1 + 0x12) = uVar2;
	}
	if ((param_3 & 0x1000) != 0) {
		*(undefined *)((int)puVar1 + 0x13) = uVar2;
	}
	if ((param_3 & 0x800) != 0) {
		*(undefined *)(puVar1 + 5) = uVar2;
	}
	if ((param_3 & 0x400) != 0) {
		*(undefined *)((int)puVar1 + 0x15) = uVar2;
	}
	if ((param_3 & 0x200) != 0) {
		*(undefined *)((int)puVar1 + 0x16) = uVar2;
	}
	if ((param_3 & 0x100) != 0) {
		*(undefined *)((int)puVar1 + 0x17) = uVar2;
	}
	if ((param_3 & 0x80) != 0) {
		*(undefined *)(puVar1 + 6) = uVar2;
	}
	if ((param_3 & 0x40) != 0) {
		*(undefined *)((int)puVar1 + 0x19) = uVar2;
	}
	if ((param_3 & 0x20) != 0) {
		*(undefined *)((int)puVar1 + 0x1a) = uVar2;
	}
	if ((param_3 & 0x10) != 0) {
		*(undefined *)((int)puVar1 + 0x1b) = uVar2;
	}
	if ((param_3 & 8) != 0) {
		*(undefined *)(puVar1 + 7) = uVar2;
	}
	if ((param_3 & 4) != 0) {
		*(undefined *)((int)puVar1 + 0x1d) = uVar2;
	}
	if ((param_3 & 2) != 0) {
		*(undefined *)((int)puVar1 + 0x1e) = uVar2;
	}
	if ((param_3 & 1) == 0) {
		return;
	}
	*(undefined *)((int)puVar1 + 0x1f) = uVar2;
	return;
}

void FUN_100c8d88(undefined4 *param_1, byte **param_2, int param_3)

{
	undefined *puVar1;
	byte *pbVar2;

	puVar1 = (undefined *)*param_1;
	pbVar2 = *param_2;
	*(undefined **)param_1 = puVar1 + 0x20;
	*param_2 = *param_2 + 0x20;
	*puVar1 = *(undefined *)(param_3 + (uint)*pbVar2);
	puVar1[1] = *(undefined *)(param_3 + (uint)pbVar2[1]);
	puVar1[2] = *(undefined *)(param_3 + (uint)pbVar2[2]);
	puVar1[3] = *(undefined *)(param_3 + (uint)pbVar2[3]);
	puVar1[4] = *(undefined *)(param_3 + (uint)pbVar2[4]);
	puVar1[5] = *(undefined *)(param_3 + (uint)pbVar2[5]);
	puVar1[6] = *(undefined *)(param_3 + (uint)pbVar2[6]);
	puVar1[7] = *(undefined *)(param_3 + (uint)pbVar2[7]);
	puVar1[8] = *(undefined *)(param_3 + (uint)pbVar2[8]);
	puVar1[9] = *(undefined *)(param_3 + (uint)pbVar2[9]);
	puVar1[10] = *(undefined *)(param_3 + (uint)pbVar2[10]);
	puVar1[0xb] = *(undefined *)(param_3 + (uint)pbVar2[0xb]);
	puVar1[0xc] = *(undefined *)(param_3 + (uint)pbVar2[0xc]);
	puVar1[0xd] = *(undefined *)(param_3 + (uint)pbVar2[0xd]);
	puVar1[0xe] = *(undefined *)(param_3 + (uint)pbVar2[0xe]);
	puVar1[0xf] = *(undefined *)(param_3 + (uint)pbVar2[0xf]);
	puVar1[0x10] = *(undefined *)(param_3 + (uint)pbVar2[0x10]);
	puVar1[0x11] = *(undefined *)(param_3 + (uint)pbVar2[0x11]);
	puVar1[0x12] = *(undefined *)(param_3 + (uint)pbVar2[0x12]);
	puVar1[0x13] = *(undefined *)(param_3 + (uint)pbVar2[0x13]);
	puVar1[0x14] = *(undefined *)(param_3 + (uint)pbVar2[0x14]);
	puVar1[0x15] = *(undefined *)(param_3 + (uint)pbVar2[0x15]);
	puVar1[0x16] = *(undefined *)(param_3 + (uint)pbVar2[0x16]);
	puVar1[0x17] = *(undefined *)(param_3 + (uint)pbVar2[0x17]);
	puVar1[0x18] = *(undefined *)(param_3 + (uint)pbVar2[0x18]);
	puVar1[0x19] = *(undefined *)(param_3 + (uint)pbVar2[0x19]);
	puVar1[0x1a] = *(undefined *)(param_3 + (uint)pbVar2[0x1a]);
	puVar1[0x1b] = *(undefined *)(param_3 + (uint)pbVar2[0x1b]);
	puVar1[0x1c] = *(undefined *)(param_3 + (uint)pbVar2[0x1c]);
	puVar1[0x1d] = *(undefined *)(param_3 + (uint)pbVar2[0x1d]);
	puVar1[0x1e] = *(undefined *)(param_3 + (uint)pbVar2[0x1e]);
	puVar1[0x1f] = *(undefined *)(param_3 + (uint)pbVar2[0x1f]);
	return;
}

void FUN_100c8f28(undefined4 *param_1, byte **param_2, int param_3)

{
	undefined *puVar1;
	byte *pbVar2;

	puVar1 = (undefined *)*param_1;
	pbVar2 = *param_2;
	*(undefined **)param_1 = puVar1 + 0x20;
	*param_2 = *param_2 + 0x20;
	*puVar1 = *(undefined *)(param_3 + (uint)*pbVar2);
	puVar1[2] = *(undefined *)(param_3 + (uint)pbVar2[2]);
	puVar1[4] = *(undefined *)(param_3 + (uint)pbVar2[4]);
	puVar1[6] = *(undefined *)(param_3 + (uint)pbVar2[6]);
	puVar1[8] = *(undefined *)(param_3 + (uint)pbVar2[8]);
	puVar1[10] = *(undefined *)(param_3 + (uint)pbVar2[10]);
	puVar1[0xc] = *(undefined *)(param_3 + (uint)pbVar2[0xc]);
	puVar1[0xe] = *(undefined *)(param_3 + (uint)pbVar2[0xe]);
	puVar1[0x10] = *(undefined *)(param_3 + (uint)pbVar2[0x10]);
	puVar1[0x12] = *(undefined *)(param_3 + (uint)pbVar2[0x12]);
	puVar1[0x14] = *(undefined *)(param_3 + (uint)pbVar2[0x14]);
	puVar1[0x16] = *(undefined *)(param_3 + (uint)pbVar2[0x16]);
	puVar1[0x18] = *(undefined *)(param_3 + (uint)pbVar2[0x18]);
	puVar1[0x1a] = *(undefined *)(param_3 + (uint)pbVar2[0x1a]);
	puVar1[0x1c] = *(undefined *)(param_3 + (uint)pbVar2[0x1c]);
	puVar1[0x1e] = *(undefined *)(param_3 + (uint)pbVar2[0x1e]);
	return;
}

void FUN_100c9008(int *param_1, int *param_2, int param_3)

{
	int iVar1;
	int iVar2;

	iVar1 = *param_1;
	iVar2 = *param_2;
	*param_1 = iVar1 + 0x20;
	*param_2 = *param_2 + 0x20;
	*(undefined *)(iVar1 + 1) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 1));
	*(undefined *)(iVar1 + 3) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 3));
	*(undefined *)(iVar1 + 5) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 5));
	*(undefined *)(iVar1 + 7) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 7));
	*(undefined *)(iVar1 + 9) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 9));
	*(undefined *)(iVar1 + 0xb) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0xb));
	*(undefined *)(iVar1 + 0xd) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0xd));
	*(undefined *)(iVar1 + 0xf) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0xf));
	*(undefined *)(iVar1 + 0x11) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x11));
	*(undefined *)(iVar1 + 0x13) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x13));
	*(undefined *)(iVar1 + 0x15) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x15));
	*(undefined *)(iVar1 + 0x17) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x17));
	*(undefined *)(iVar1 + 0x19) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x19));
	*(undefined *)(iVar1 + 0x1b) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x1b));
	*(undefined *)(iVar1 + 0x1d) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x1d));
	*(undefined *)(iVar1 + 0x1f) = *(undefined *)(param_3 + (uint) * (byte *)(iVar2 + 0x1f));
	return;
}

void FUN_100c90e8(undefined4 *param_1, byte **param_2, int param_3, uint param_4)

{
	undefined *puVar1;
	byte *pbVar2;

	puVar1 = (undefined *)*param_1;
	pbVar2 = *param_2;
	*(undefined **)param_1 = puVar1 + 0x20;
	*param_2 = *param_2 + 0x20;
	if (param_4 == 0xffffffff) {
		*puVar1 = *(undefined *)(param_3 + (uint)*pbVar2);
		puVar1[1] = *(undefined *)(param_3 + (uint)pbVar2[1]);
		puVar1[2] = *(undefined *)(param_3 + (uint)pbVar2[2]);
		puVar1[3] = *(undefined *)(param_3 + (uint)pbVar2[3]);
		puVar1[4] = *(undefined *)(param_3 + (uint)pbVar2[4]);
		puVar1[5] = *(undefined *)(param_3 + (uint)pbVar2[5]);
		puVar1[6] = *(undefined *)(param_3 + (uint)pbVar2[6]);
		puVar1[7] = *(undefined *)(param_3 + (uint)pbVar2[7]);
		puVar1[8] = *(undefined *)(param_3 + (uint)pbVar2[8]);
		puVar1[9] = *(undefined *)(param_3 + (uint)pbVar2[9]);
		puVar1[10] = *(undefined *)(param_3 + (uint)pbVar2[10]);
		puVar1[0xb] = *(undefined *)(param_3 + (uint)pbVar2[0xb]);
		puVar1[0xc] = *(undefined *)(param_3 + (uint)pbVar2[0xc]);
		puVar1[0xd] = *(undefined *)(param_3 + (uint)pbVar2[0xd]);
		puVar1[0xe] = *(undefined *)(param_3 + (uint)pbVar2[0xe]);
		puVar1[0xf] = *(undefined *)(param_3 + (uint)pbVar2[0xf]);
		puVar1[0x10] = *(undefined *)(param_3 + (uint)pbVar2[0x10]);
		puVar1[0x11] = *(undefined *)(param_3 + (uint)pbVar2[0x11]);
		puVar1[0x12] = *(undefined *)(param_3 + (uint)pbVar2[0x12]);
		puVar1[0x13] = *(undefined *)(param_3 + (uint)pbVar2[0x13]);
		puVar1[0x14] = *(undefined *)(param_3 + (uint)pbVar2[0x14]);
		puVar1[0x15] = *(undefined *)(param_3 + (uint)pbVar2[0x15]);
		puVar1[0x16] = *(undefined *)(param_3 + (uint)pbVar2[0x16]);
		puVar1[0x17] = *(undefined *)(param_3 + (uint)pbVar2[0x17]);
		puVar1[0x18] = *(undefined *)(param_3 + (uint)pbVar2[0x18]);
		puVar1[0x19] = *(undefined *)(param_3 + (uint)pbVar2[0x19]);
		puVar1[0x1a] = *(undefined *)(param_3 + (uint)pbVar2[0x1a]);
		puVar1[0x1b] = *(undefined *)(param_3 + (uint)pbVar2[0x1b]);
		puVar1[0x1c] = *(undefined *)(param_3 + (uint)pbVar2[0x1c]);
		puVar1[0x1d] = *(undefined *)(param_3 + (uint)pbVar2[0x1d]);
		puVar1[0x1e] = *(undefined *)(param_3 + (uint)pbVar2[0x1e]);
		puVar1[0x1f] = *(undefined *)(param_3 + (uint)pbVar2[0x1f]);
		return;
	}
	if ((param_4 & 0x80000000) != 0) {
		*puVar1 = *(undefined *)(param_3 + (uint)*pbVar2);
	}
	if ((param_4 & 0x40000000) != 0) {
		puVar1[1] = *(undefined *)(param_3 + (uint)pbVar2[1]);
	}
	if ((param_4 & 0x20000000) != 0) {
		puVar1[2] = *(undefined *)(param_3 + (uint)pbVar2[2]);
	}
	if ((param_4 & 0x10000000) != 0) {
		puVar1[3] = *(undefined *)(param_3 + (uint)pbVar2[3]);
	}
	if ((param_4 & 0x8000000) != 0) {
		puVar1[4] = *(undefined *)(param_3 + (uint)pbVar2[4]);
	}
	if ((param_4 & 0x4000000) != 0) {
		puVar1[5] = *(undefined *)(param_3 + (uint)pbVar2[5]);
	}
	if ((param_4 & 0x2000000) != 0) {
		puVar1[6] = *(undefined *)(param_3 + (uint)pbVar2[6]);
	}
	if ((param_4 & 0x1000000) != 0) {
		puVar1[7] = *(undefined *)(param_3 + (uint)pbVar2[7]);
	}
	if ((param_4 & 0x800000) != 0) {
		puVar1[8] = *(undefined *)(param_3 + (uint)pbVar2[8]);
	}
	if ((param_4 & 0x400000) != 0) {
		puVar1[9] = *(undefined *)(param_3 + (uint)pbVar2[9]);
	}
	if ((param_4 & 0x200000) != 0) {
		puVar1[10] = *(undefined *)(param_3 + (uint)pbVar2[10]);
	}
	if ((param_4 & 0x100000) != 0) {
		puVar1[0xb] = *(undefined *)(param_3 + (uint)pbVar2[0xb]);
	}
	if ((param_4 & 0x80000) != 0) {
		puVar1[0xc] = *(undefined *)(param_3 + (uint)pbVar2[0xc]);
	}
	if ((param_4 & 0x40000) != 0) {
		puVar1[0xd] = *(undefined *)(param_3 + (uint)pbVar2[0xd]);
	}
	if ((param_4 & 0x20000) != 0) {
		puVar1[0xe] = *(undefined *)(param_3 + (uint)pbVar2[0xe]);
	}
	if ((param_4 & 0x10000) != 0) {
		puVar1[0xf] = *(undefined *)(param_3 + (uint)pbVar2[0xf]);
	}
	if ((param_4 & 0x8000) != 0) {
		puVar1[0x10] = *(undefined *)(param_3 + (uint)pbVar2[0x10]);
	}
	if ((param_4 & 0x4000) != 0) {
		puVar1[0x11] = *(undefined *)(param_3 + (uint)pbVar2[0x11]);
	}
	if ((param_4 & 0x2000) != 0) {
		puVar1[0x12] = *(undefined *)(param_3 + (uint)pbVar2[0x12]);
	}
	if ((param_4 & 0x1000) != 0) {
		puVar1[0x13] = *(undefined *)(param_3 + (uint)pbVar2[0x13]);
	}
	if ((param_4 & 0x800) != 0) {
		puVar1[0x14] = *(undefined *)(param_3 + (uint)pbVar2[0x14]);
	}
	if ((param_4 & 0x400) != 0) {
		puVar1[0x15] = *(undefined *)(param_3 + (uint)pbVar2[0x15]);
	}
	if ((param_4 & 0x200) != 0) {
		puVar1[0x16] = *(undefined *)(param_3 + (uint)pbVar2[0x16]);
	}
	if ((param_4 & 0x100) != 0) {
		puVar1[0x17] = *(undefined *)(param_3 + (uint)pbVar2[0x17]);
	}
	if ((param_4 & 0x80) != 0) {
		puVar1[0x18] = *(undefined *)(param_3 + (uint)pbVar2[0x18]);
	}
	if ((param_4 & 0x40) != 0) {
		puVar1[0x19] = *(undefined *)(param_3 + (uint)pbVar2[0x19]);
	}
	if ((param_4 & 0x20) != 0) {
		puVar1[0x1a] = *(undefined *)(param_3 + (uint)pbVar2[0x1a]);
	}
	if ((param_4 & 0x10) != 0) {
		puVar1[0x1b] = *(undefined *)(param_3 + (uint)pbVar2[0x1b]);
	}
	if ((param_4 & 8) != 0) {
		puVar1[0x1c] = *(undefined *)(param_3 + (uint)pbVar2[0x1c]);
	}
	if ((param_4 & 4) != 0) {
		puVar1[0x1d] = *(undefined *)(param_3 + (uint)pbVar2[0x1d]);
	}
	if ((param_4 & 2) != 0) {
		puVar1[0x1e] = *(undefined *)(param_3 + (uint)pbVar2[0x1e]);
	}
	if ((param_4 & 1) == 0) {
		return;
	}
	puVar1[0x1f] = *(undefined *)(param_3 + (uint)pbVar2[0x1f]);
	return;
}

void FUN_100c9518(undefined4 *param_1, int *param_2, longlong param_3)

{
	undefined *puVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;

	puVar5 = (undefined *)*param_1;
	uVar4 = (uint)param_3;
	puVar6 = (undefined *)*param_2;
	*(undefined **)param_1 = puVar5 + uVar4;
	uVar3 = (ulonglong)(uVar4 >> 2);
	*param_2 = *param_2 + uVar4;
	if ((int)uVar4 < 4)
		goto LAB_100c960c;
	uVar2 = (ulonglong)(uVar4 >> 5);
	if (uVar4 >> 5 == 0) {
	LAB_100c95ec:
		do {
			*puVar5 = *puVar6;
			puVar1 = puVar6 + 2;
			puVar6 = puVar6 + 4;
			puVar5[2] = *puVar1;
			puVar5 = puVar5 + 4;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	} else {
		do {
			*puVar5 = *puVar6;
			puVar5[2] = puVar6[2];
			puVar5[4] = puVar6[4];
			puVar5[6] = puVar6[6];
			puVar5[8] = puVar6[8];
			puVar5[10] = puVar6[10];
			puVar5[0xc] = puVar6[0xc];
			puVar5[0xe] = puVar6[0xe];
			puVar5[0x10] = puVar6[0x10];
			puVar5[0x12] = puVar6[0x12];
			puVar5[0x14] = puVar6[0x14];
			puVar5[0x16] = puVar6[0x16];
			puVar5[0x18] = puVar6[0x18];
			puVar5[0x1a] = puVar6[0x1a];
			puVar5[0x1c] = puVar6[0x1c];
			puVar1 = puVar6 + 0x1e;
			puVar6 = puVar6 + 0x20;
			puVar5[0x1e] = *puVar1;
			puVar5 = puVar5 + 0x20;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
		uVar3 = uVar3 & 7;
		if ((uVar4 >> 2 & 7) != 0)
			goto LAB_100c95ec;
	}
	param_3 = param_3 - (ulonglong)(uVar4 & 0xfffffffc);
LAB_100c960c:
	if ((int)param_3 != 0) {
		do {
			if (((uint)puVar5 & 1) == 0) {
				*puVar5 = *puVar6;
			}
			puVar5 = puVar5 + 1;
			puVar6 = puVar6 + 1;
			param_3 = param_3 + -1;
		} while (param_3 != 0);
		return;
	}
	return;
}

void FUN_100c9638(undefined4 *param_1, int *param_2, longlong param_3)

{
	undefined *puVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;

	puVar5 = (undefined *)*param_1;
	uVar4 = (uint)param_3;
	puVar6 = (undefined *)*param_2;
	*(undefined **)param_1 = puVar5 + uVar4;
	uVar3 = (ulonglong)(uVar4 >> 2);
	*param_2 = *param_2 + uVar4;
	if ((int)uVar4 < 4)
		goto LAB_100c972c;
	uVar2 = (ulonglong)(uVar4 >> 5);
	if (uVar4 >> 5 == 0) {
	LAB_100c970c:
		do {
			puVar5[1] = puVar6[1];
			puVar1 = puVar6 + 3;
			puVar6 = puVar6 + 4;
			puVar5[3] = *puVar1;
			puVar5 = puVar5 + 4;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	} else {
		do {
			puVar5[1] = puVar6[1];
			puVar5[3] = puVar6[3];
			puVar5[5] = puVar6[5];
			puVar5[7] = puVar6[7];
			puVar5[9] = puVar6[9];
			puVar5[0xb] = puVar6[0xb];
			puVar5[0xd] = puVar6[0xd];
			puVar5[0xf] = puVar6[0xf];
			puVar5[0x11] = puVar6[0x11];
			puVar5[0x13] = puVar6[0x13];
			puVar5[0x15] = puVar6[0x15];
			puVar5[0x17] = puVar6[0x17];
			puVar5[0x19] = puVar6[0x19];
			puVar5[0x1b] = puVar6[0x1b];
			puVar5[0x1d] = puVar6[0x1d];
			puVar1 = puVar6 + 0x1f;
			puVar6 = puVar6 + 0x20;
			puVar5[0x1f] = *puVar1;
			puVar5 = puVar5 + 0x20;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
		uVar3 = uVar3 & 7;
		if ((uVar4 >> 2 & 7) != 0)
			goto LAB_100c970c;
	}
	param_3 = param_3 - (ulonglong)(uVar4 & 0xfffffffc);
LAB_100c972c:
	if ((int)param_3 != 0) {
		do {
			if (((uint)puVar5 & 1) != 0) {
				*puVar5 = *puVar6;
			}
			puVar5 = puVar5 + 1;
			puVar6 = puVar6 + 1;
			param_3 = param_3 + -1;
		} while (param_3 != 0);
		return;
	}
	return;
}

void FUN_100c9758(undefined4 *param_1, int *param_2, longlong param_3, int *param_4)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;

	iVar1 = (int)param_3;
	puVar2 = (undefined *)*param_1;
	puVar3 = (undefined *)*param_2;
	iVar4 = *param_4;
	*(undefined **)param_1 = puVar2 + iVar1;
	*param_2 = *param_2 + iVar1;
	if (iVar1 != 0) {
		do {
			if (iVar4 < 0) {
				*puVar2 = *puVar3;
			}
			iVar4 = iVar4 << 1;
			puVar2 = puVar2 + 1;
			puVar3 = puVar3 + 1;
			param_3 = param_3 + -1;
		} while (param_3 != 0);
	}
	*param_4 = iVar4;
	return;
}

void FUN_100c97ac(int *param_1, longlong param_2, undefined param_3)

{
	ulonglong uVar1;
	ulonglong uVar2;
	uint uVar3;
	undefined *puVar4;

	puVar4 = (undefined *)*param_1;
	uVar3 = (uint)param_2;
	*(undefined **)param_1 = puVar4 + uVar3;
	uVar2 = (ulonglong)(uVar3 >> 2);
	if ((int)uVar3 < 4)
		goto LAB_100c9844;
	uVar1 = (ulonglong)(uVar3 >> 5);
	if (uVar3 >> 5 == 0) {
	LAB_100c9830:
		do {
			puVar4[2] = param_3;
			*puVar4 = param_3;
			puVar4 = puVar4 + 4;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	} else {
		do {
			puVar4[2] = param_3;
			*puVar4 = param_3;
			puVar4[6] = param_3;
			puVar4[4] = param_3;
			puVar4[10] = param_3;
			puVar4[8] = param_3;
			puVar4[0xe] = param_3;
			puVar4[0xc] = param_3;
			puVar4[0x12] = param_3;
			puVar4[0x10] = param_3;
			puVar4[0x16] = param_3;
			puVar4[0x14] = param_3;
			puVar4[0x1a] = param_3;
			puVar4[0x18] = param_3;
			puVar4[0x1e] = param_3;
			puVar4[0x1c] = param_3;
			puVar4 = puVar4 + 0x20;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
		uVar2 = uVar2 & 7;
		if ((uVar3 >> 2 & 7) != 0)
			goto LAB_100c9830;
	}
	param_2 = param_2 - (ulonglong)(uVar3 & 0xfffffffc);
LAB_100c9844:
	if ((int)param_2 != 0) {
		do {
			if (((uint)puVar4 & 1) == 0) {
				*puVar4 = param_3;
			}
			puVar4 = puVar4 + 1;
			param_2 = param_2 + -1;
		} while (param_2 != 0);
		return;
	}
	return;
}

void FUN_100c986c(int *param_1, longlong param_2, undefined param_3)

{
	ulonglong uVar1;
	ulonglong uVar2;
	uint uVar3;
	undefined *puVar4;

	puVar4 = (undefined *)*param_1;
	uVar3 = (uint)param_2;
	*(undefined **)param_1 = puVar4 + uVar3;
	uVar2 = (ulonglong)(uVar3 >> 2);
	if ((int)uVar3 < 4)
		goto LAB_100c9904;
	uVar1 = (ulonglong)(uVar3 >> 5);
	if (uVar3 >> 5 == 0) {
	LAB_100c98f0:
		do {
			puVar4[3] = param_3;
			puVar4[1] = param_3;
			puVar4 = puVar4 + 4;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
	} else {
		do {
			puVar4[3] = param_3;
			puVar4[1] = param_3;
			puVar4[7] = param_3;
			puVar4[5] = param_3;
			puVar4[0xb] = param_3;
			puVar4[9] = param_3;
			puVar4[0xf] = param_3;
			puVar4[0xd] = param_3;
			puVar4[0x13] = param_3;
			puVar4[0x11] = param_3;
			puVar4[0x17] = param_3;
			puVar4[0x15] = param_3;
			puVar4[0x1b] = param_3;
			puVar4[0x19] = param_3;
			puVar4[0x1f] = param_3;
			puVar4[0x1d] = param_3;
			puVar4 = puVar4 + 0x20;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
		uVar2 = uVar2 & 7;
		if ((uVar3 >> 2 & 7) != 0)
			goto LAB_100c98f0;
	}
	param_2 = param_2 - (ulonglong)(uVar3 & 0xfffffffc);
LAB_100c9904:
	if ((int)param_2 != 0) {
		do {
			if (((uint)puVar4 & 1) != 0) {
				*puVar4 = param_3;
			}
			puVar4 = puVar4 + 1;
			param_2 = param_2 + -1;
		} while (param_2 != 0);
		return;
	}
	return;
}

void FUN_100c992c(int *param_1, longlong param_2, int *param_3, undefined param_4)

{
	undefined *puVar1;
	int iVar2;

	puVar1 = (undefined *)*param_1;
	iVar2 = *param_3;
	*(undefined **)param_1 = puVar1 + (int)param_2;
	if ((int)param_2 != 0) {
		do {
			if (iVar2 < 0) {
				*puVar1 = param_4;
			}
			iVar2 = iVar2 << 1;
			puVar1 = puVar1 + 1;
			param_2 = param_2 + -1;
		} while (param_2 != 0);
	}
	*param_3 = iVar2;
	return;
}

void FUN_100c996c(undefined4 *param_1, byte **param_2, int param_3, uint param_4)

{
	byte bVar1;
	byte bVar2;
	uint uVar3;
	uint uVar4;
	byte *pbVar5;
	byte *pbVar6;
	byte *pbVar7;
	ulonglong uVar8;
	ulonglong uVar9;
	undefined *puVar10;
	byte *pbVar11;
	byte *pbVar12;

	puVar10 = (undefined *)*param_1;
	pbVar12 = *param_2;
	*(undefined **)param_1 = puVar10 + param_4;
	*param_2 = *param_2 + param_4;
	if ((param_4 & 1) != 0) {
		bVar1 = *pbVar12;
		pbVar12 = pbVar12 + 1;
		param_4 = param_4 - 1;
		*puVar10 = *(undefined *)(param_3 + (uint)bVar1);
		puVar10 = puVar10 + 1;
	}
	if ((param_4 & 2) != 0) {
		bVar1 = pbVar12[1];
		bVar2 = *pbVar12;
		pbVar12 = pbVar12 + 2;
		param_4 = param_4 - 2;
		*puVar10 = *(undefined *)(param_3 + ((int)CONCAT11(bVar1, bVar2) & 0xffU));
		puVar10[1] = *(undefined *)(param_3 + ((int)CONCAT11(bVar1, bVar2) >> 8 & 0xffU));
		puVar10 = puVar10 + 2;
	}
	uVar9 = (ulonglong)(param_4 >> 2);
	if (3 < (int)param_4) {
		uVar8 = (ulonglong)(param_4 >> 4);
		if (param_4 >> 4 != 0) {
			do {
				uVar3 = (int)((uint)pbVar12[3] << 0x18 | (uint)pbVar12[2] << 0x10 | (uint)pbVar12[1] << 8 | (uint)*pbVar12) >> 8;
				*puVar10 = *(undefined *)(param_3 + (uint)*pbVar12);
				uVar4 = (int)uVar3 >> 8;
				puVar10[1] = *(undefined *)(param_3 + (uVar3 & 0xff));
				puVar10[2] = *(undefined *)(param_3 + (uVar4 & 0xff));
				puVar10[3] = *(undefined *)(param_3 + ((int)uVar4 >> 8 & 0xffU));
				uVar3 = (int)((uint)pbVar12[7] << 0x18 | (uint)pbVar12[6] << 0x10 | (uint)pbVar12[5] << 8 | (uint)pbVar12[4]) >> 8;
				puVar10[4] = *(undefined *)(param_3 + (uint)pbVar12[4]);
				uVar4 = (int)uVar3 >> 8;
				puVar10[5] = *(undefined *)(param_3 + (uVar3 & 0xff));
				puVar10[6] = *(undefined *)(param_3 + (uVar4 & 0xff));
				puVar10[7] = *(undefined *)(param_3 + ((int)uVar4 >> 8 & 0xffU));
				pbVar11 = pbVar12 + 0xc;
				uVar3 = (int)((uint)pbVar12[0xb] << 0x18 | (uint)pbVar12[10] << 0x10 | (uint)pbVar12[9] << 8
				            | (uint)pbVar12[8])
				    >> 8;
				puVar10[8] = *(undefined *)(param_3 + (uint)pbVar12[8]);
				uVar4 = (int)uVar3 >> 8;
				puVar10[9] = *(undefined *)(param_3 + (uVar3 & 0xff));
				puVar10[10] = *(undefined *)(param_3 + (uVar4 & 0xff));
				puVar10[0xb] = *(undefined *)(param_3 + ((int)uVar4 >> 8 & 0xffU));
				pbVar5 = pbVar12 + 0xf;
				pbVar6 = pbVar12 + 0xe;
				pbVar7 = pbVar12 + 0xd;
				pbVar12 = pbVar12 + 0x10;
				uVar3 = (int)((uint)*pbVar5 << 0x18 | (uint)*pbVar6 << 0x10 | (uint)*pbVar7 << 8 | (uint)*pbVar11) >> 8;
				puVar10[0xc] = *(undefined *)(param_3 + (uint)*pbVar11);
				uVar4 = (int)uVar3 >> 8;
				puVar10[0xd] = *(undefined *)(param_3 + (uVar3 & 0xff));
				puVar10[0xe] = *(undefined *)(param_3 + (uVar4 & 0xff));
				puVar10[0xf] = *(undefined *)(param_3 + ((int)uVar4 >> 8 & 0xffU));
				puVar10 = puVar10 + 0x10;
				uVar8 = uVar8 - 1;
			} while (uVar8 != 0);
			uVar9 = uVar9 & 3;
			if ((param_4 >> 2 & 3) == 0) {
				return;
			}
		}
		do {
			pbVar5 = pbVar12 + 3;
			pbVar6 = pbVar12 + 2;
			pbVar7 = pbVar12 + 1;
			bVar1 = *pbVar12;
			pbVar12 = pbVar12 + 4;
			uVar3 = (int)((uint)*pbVar5 << 0x18 | (uint)*pbVar6 << 0x10 | (uint)*pbVar7 << 8 | (uint)bVar1) >> 8;
			*puVar10 = *(undefined *)(param_3 + (uint)bVar1);
			uVar4 = (int)uVar3 >> 8;
			puVar10[1] = *(undefined *)(param_3 + (uVar3 & 0xff));
			puVar10[2] = *(undefined *)(param_3 + (uVar4 & 0xff));
			puVar10[3] = *(undefined *)(param_3 + ((int)uVar4 >> 8 & 0xffU));
			puVar10 = puVar10 + 4;
			uVar9 = uVar9 - 1;
		} while (uVar9 != 0);
		return;
	}
	return;
}

void FUN_100c9b6c(undefined4 *param_1, byte **param_2, int param_3, longlong param_4)

{
	byte *pbVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	uint uVar4;
	undefined *puVar5;
	byte *pbVar6;

	puVar5 = (undefined *)*param_1;
	uVar4 = (uint)param_4;
	pbVar6 = *param_2;
	*(undefined **)param_1 = puVar5 + uVar4;
	uVar3 = (ulonglong)(uVar4 >> 2);
	*param_2 = *param_2 + uVar4;
	if ((int)uVar4 < 4)
		goto LAB_100c9ca8;
	uVar2 = (ulonglong)(uVar4 >> 5);
	if (uVar4 >> 5 == 0) {
	LAB_100c9c80:
		do {
			*puVar5 = *(undefined *)(param_3 + (uint)*pbVar6);
			pbVar1 = pbVar6 + 2;
			pbVar6 = pbVar6 + 4;
			puVar5[2] = *(undefined *)(param_3 + (uint)*pbVar1);
			puVar5 = puVar5 + 4;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	} else {
		do {
			*puVar5 = *(undefined *)(param_3 + (uint)*pbVar6);
			puVar5[2] = *(undefined *)(param_3 + (uint)pbVar6[2]);
			puVar5[4] = *(undefined *)(param_3 + (uint)pbVar6[4]);
			puVar5[6] = *(undefined *)(param_3 + (uint)pbVar6[6]);
			puVar5[8] = *(undefined *)(param_3 + (uint)pbVar6[8]);
			puVar5[10] = *(undefined *)(param_3 + (uint)pbVar6[10]);
			puVar5[0xc] = *(undefined *)(param_3 + (uint)pbVar6[0xc]);
			puVar5[0xe] = *(undefined *)(param_3 + (uint)pbVar6[0xe]);
			puVar5[0x10] = *(undefined *)(param_3 + (uint)pbVar6[0x10]);
			puVar5[0x12] = *(undefined *)(param_3 + (uint)pbVar6[0x12]);
			puVar5[0x14] = *(undefined *)(param_3 + (uint)pbVar6[0x14]);
			puVar5[0x16] = *(undefined *)(param_3 + (uint)pbVar6[0x16]);
			puVar5[0x18] = *(undefined *)(param_3 + (uint)pbVar6[0x18]);
			puVar5[0x1a] = *(undefined *)(param_3 + (uint)pbVar6[0x1a]);
			puVar5[0x1c] = *(undefined *)(param_3 + (uint)pbVar6[0x1c]);
			pbVar1 = pbVar6 + 0x1e;
			pbVar6 = pbVar6 + 0x20;
			puVar5[0x1e] = *(undefined *)(param_3 + (uint)*pbVar1);
			puVar5 = puVar5 + 0x20;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
		uVar3 = uVar3 & 7;
		if ((uVar4 >> 2 & 7) != 0)
			goto LAB_100c9c80;
	}
	param_4 = param_4 - (ulonglong)(uVar4 & 0xfffffffc);
LAB_100c9ca8:
	if ((int)param_4 != 0) {
		do {
			if (((uint)puVar5 & 1) == 0) {
				*puVar5 = *(undefined *)(param_3 + (uint)*pbVar6);
			}
			puVar5 = puVar5 + 1;
			pbVar6 = pbVar6 + 1;
			param_4 = param_4 + -1;
		} while (param_4 != 0);
		return;
	}
	return;
}

void FUN_100c9cd8(undefined4 *param_1, byte **param_2, int param_3, longlong param_4)

{
	byte *pbVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	uint uVar4;
	undefined *puVar5;
	byte *pbVar6;

	puVar5 = (undefined *)*param_1;
	uVar4 = (uint)param_4;
	pbVar6 = *param_2;
	*(undefined **)param_1 = puVar5 + uVar4;
	uVar3 = (ulonglong)(uVar4 >> 2);
	*param_2 = *param_2 + uVar4;
	if ((int)uVar4 < 4)
		goto LAB_100c9e14;
	uVar2 = (ulonglong)(uVar4 >> 5);
	if (uVar4 >> 5 == 0) {
	LAB_100c9dec:
		do {
			puVar5[1] = *(undefined *)(param_3 + (uint)pbVar6[1]);
			pbVar1 = pbVar6 + 3;
			pbVar6 = pbVar6 + 4;
			puVar5[3] = *(undefined *)(param_3 + (uint)*pbVar1);
			puVar5 = puVar5 + 4;
			uVar3 = uVar3 - 1;
		} while (uVar3 != 0);
	} else {
		do {
			puVar5[1] = *(undefined *)(param_3 + (uint)pbVar6[1]);
			puVar5[3] = *(undefined *)(param_3 + (uint)pbVar6[3]);
			puVar5[5] = *(undefined *)(param_3 + (uint)pbVar6[5]);
			puVar5[7] = *(undefined *)(param_3 + (uint)pbVar6[7]);
			puVar5[9] = *(undefined *)(param_3 + (uint)pbVar6[9]);
			puVar5[0xb] = *(undefined *)(param_3 + (uint)pbVar6[0xb]);
			puVar5[0xd] = *(undefined *)(param_3 + (uint)pbVar6[0xd]);
			puVar5[0xf] = *(undefined *)(param_3 + (uint)pbVar6[0xf]);
			puVar5[0x11] = *(undefined *)(param_3 + (uint)pbVar6[0x11]);
			puVar5[0x13] = *(undefined *)(param_3 + (uint)pbVar6[0x13]);
			puVar5[0x15] = *(undefined *)(param_3 + (uint)pbVar6[0x15]);
			puVar5[0x17] = *(undefined *)(param_3 + (uint)pbVar6[0x17]);
			puVar5[0x19] = *(undefined *)(param_3 + (uint)pbVar6[0x19]);
			puVar5[0x1b] = *(undefined *)(param_3 + (uint)pbVar6[0x1b]);
			puVar5[0x1d] = *(undefined *)(param_3 + (uint)pbVar6[0x1d]);
			pbVar1 = pbVar6 + 0x1f;
			pbVar6 = pbVar6 + 0x20;
			puVar5[0x1f] = *(undefined *)(param_3 + (uint)*pbVar1);
			puVar5 = puVar5 + 0x20;
			uVar2 = uVar2 - 1;
		} while (uVar2 != 0);
		uVar3 = uVar3 & 7;
		if ((uVar4 >> 2 & 7) != 0)
			goto LAB_100c9dec;
	}
	param_4 = param_4 - (ulonglong)(uVar4 & 0xfffffffc);
LAB_100c9e14:
	if ((int)param_4 != 0) {
		do {
			if (((uint)puVar5 & 1) != 0) {
				*puVar5 = *(undefined *)(param_3 + (uint)*pbVar6);
			}
			puVar5 = puVar5 + 1;
			pbVar6 = pbVar6 + 1;
			param_4 = param_4 + -1;
		} while (param_4 != 0);
		return;
	}
	return;
}

void FUN_100c9e44(undefined4 *param_1, byte **param_2, int param_3, longlong param_4, int *param_5)

{
	int iVar1;
	undefined *puVar2;
	byte *pbVar3;
	int iVar4;

	iVar1 = (int)param_4;
	puVar2 = (undefined *)*param_1;
	pbVar3 = *param_2;
	iVar4 = *param_5;
	*(undefined **)param_1 = puVar2 + iVar1;
	*param_2 = *param_2 + iVar1;
	if (iVar1 != 0) {
		do {
			if (iVar4 < 0) {
				*puVar2 = *(undefined *)(param_3 + (uint)*pbVar3);
			}
			iVar4 = iVar4 << 1;
			puVar2 = puVar2 + 1;
			pbVar3 = pbVar3 + 1;
			param_4 = param_4 + -1;
		} while (param_4 != 0);
	}
	*param_5 = iVar4;
	return;
}

void FUN_100c9e9c(byte **param_1, byte **param_2, uint param_3)

{
	byte bVar1;
	byte bVar2;
	uint uVar3;
	ulonglong uVar4;
	uint uVar5;
	byte *pbVar6;
	byte *pbVar7;

	pbVar6 = *param_1;
	pbVar7 = *param_2;
	*param_1 = pbVar6 + param_3;
	*param_2 = *param_2 + param_3;
	if ((param_3 & 1) != 0) {
		bVar1 = *pbVar7;
		pbVar7 = pbVar7 + 1;
		if (bVar1 != 0) {
			*pbVar6 = bVar1;
		}
		pbVar6 = pbVar6 + 1;
		param_3 = param_3 - 1;
	}
	if ((param_3 & 2) != 0) {
		bVar1 = pbVar7[1];
		bVar2 = *pbVar7;
		if (CONCAT11(bVar1, bVar2) != 0) {
			if (bVar2 != 0) {
				*pbVar6 = bVar2;
			}
			if (bVar1 != 0) {
				pbVar6[1] = bVar1;
			}
		}
		pbVar6 = pbVar6 + 2;
		pbVar7 = pbVar7 + 2;
		param_3 = param_3 - 2;
	}
	uVar4 = (ulonglong)(param_3 >> 2);
	if ((int)param_3 < 4) {
		return;
	}
	do {
		bVar1 = *pbVar7;
		uVar5 = (uint)pbVar7[3] << 0x18 | (uint)pbVar7[2] << 0x10 | (uint)pbVar7[1] << 8 | (uint)bVar1;
		if (uVar5 != 0) {
			uVar5 = (int)uVar5 >> 8;
			if (bVar1 != 0) {
				*pbVar6 = bVar1;
			}
			uVar3 = uVar5 & 0xff;
			uVar5 = (int)uVar5 >> 8;
			if (uVar3 != 0) {
				pbVar6[1] = (byte)uVar3;
			}
			uVar3 = uVar5 & 0xff;
			if (uVar3 != 0) {
				pbVar6[2] = (byte)uVar3;
			}
			uVar5 = (int)uVar5 >> 8 & 0xff;
			if (uVar5 != 0) {
				pbVar6[3] = (byte)uVar5;
			}
		}
		pbVar6 = pbVar6 + 4;
		pbVar7 = pbVar7 + 4;
		uVar4 = uVar4 - 1;
	} while (uVar4 != 0);
	return;
}

void FUN_100c9f80(void)

{
	_DAT_100f4650 = _DAT_100f464c;
	return;
}

ulonglong FUN_100c9f8c(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	lVar1 = GetToolTrapAddress(0x9f, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	lVar2 = GetOSTrapAddress(0x94, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return (ulonglong)(lVar1 != lVar2);
}

undefined8
FUN_100c9fe4(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	ulonglong uVar2;
	undefined8 uVar3;
	short sVar4;
	undefined4 in_stack_ffffffb8;
	undefined4 local_18;
	undefined2 local_14;
	undefined2 local_12;
	short local_10[8];

	local_10[0] = 0;
	local_12 = 0;
	local_14 = 0;
	local_18 = 0;
	uVar2 = FUN_100c9f8c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	if ((uVar2 & 0xff) == 0) {
		uVar3 = 0;
	} else {
		sVar4 = FUN_100ca1c4(local_10, &local_12, &local_14, &local_18, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		uVar3 = 0;
		if (sVar4 == 0) {
			uVar3 = 1;
			bVar1 = true;
			if ((local_10[0] != -1) && (local_10[0] != -2)) {
				bVar1 = false;
			}
			if ((!bVar1) && (local_10[0] != -5)) {
				uVar3 = 0;
			}
		}
	}
	return uVar3;
}

short FUN_100ca1c4(undefined2 *param_1, undefined2 *param_2, undefined2 *param_3, undefined4 *param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	short sVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined4 in_stack_ffffff88;
	undefined auStack72[26];
	undefined2 local_2e;
	undefined2 local_2c;
	undefined2 local_2a;
	undefined2 local_28;
	undefined4 local_26;

	uVar5 = SUB41(param_4, 0);
	uVar4 = SUB41(param_3, 0);
	uVar3 = SUB41(param_2, 0);
	uVar1 = FUN_100c9f8c((char)param_1, uVar3, uVar4, uVar5, param_5, param_6, param_7, param_8,
	    in_stack_ffffff88);
	if ((uVar1 & 0xff) == 0) {
		sVar2 = -0x13a0;
	} else {
		local_2e = 5;
		local_26 = 0;
		sVar2 = FUN_100ca3f0((int)auStack72, uVar3, uVar4, uVar5, param_5, param_6, param_7, param_8,
		    in_stack_ffffff88);
		if (sVar2 == 0) {
			*param_1 = local_2c;
			*param_2 = local_2a;
			*param_3 = local_28;
			*param_4 = local_26;
		}
	}
	return sVar2;
}

undefined2
FUN_100ca264(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined2 uVar2;
	undefined4 in_stack_ffffff98;
	undefined auStack56[26];
	undefined2 local_1e;
	undefined2 local_1c;
	undefined2 local_1a;

	uVar1 = FUN_100c9f8c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	if ((uVar1 & 0xff) == 0) {
		uVar2 = 0xec60;
	} else {
		local_1e = 0;
		local_1c = 0;
		local_1a = 0;
		uVar2 = FUN_100ca3f0((int)auStack56, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffff98);
	}
	return uVar2;
}

undefined2
FUN_100ca2ac(undefined2 param_1, undefined2 param_2, undefined4 param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined2 uVar2;
	undefined uVar3;
	undefined uVar4;
	undefined4 in_stack_ffffff88;
	undefined auStack72[26];
	undefined2 local_2e;
	undefined2 local_2c;
	undefined2 local_2a;
	undefined4 local_28;

	uVar4 = (undefined)param_3;
	uVar3 = (undefined)param_2;
	uVar1 = FUN_100c9f8c((char)param_1, uVar3, uVar4, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff88);
	if ((uVar1 & 0xff) == 0) {
		uVar2 = 0xec60;
	} else {
		local_2e = 2;
		local_2c = param_1;
		local_2a = param_2;
		local_28 = param_3;
		uVar2 = FUN_100ca3f0((int)auStack72, uVar3, uVar4, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffff88);
	}
	return uVar2;
}

void FUN_100ca484(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	char cVar2;
	undefined2 uVar3;
	short sVar4;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x80);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	if ((((DAT_100f4662 != '\0') && (DAT_100f4660 != '\0')) && ((param_1 != '\0' || (DAT_100f4661 != '\0')))) && ((param_1 == '\0' || (DAT_100f4661 == '\0')))) {
		cVar2 = (char)(ZEXT48(register0x0000000c) - 0x80);
		DAT_100f4661 = '\0';
		*(undefined2 *)(iVar1 + 0x52) = 0x79;
		*(undefined4 *)(iVar1 + 0x4a) = 0;
		*(undefined2 *)(iVar1 + 0x50) = _DAT_100f465c;
		*(undefined2 *)(iVar1 + 0x4e) = _DAT_100f465e;
		sVar4 = PBStatusSync(cVar2 + '8', param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x14));
		if ((sVar4 == 0) && (0xc00 < *(short *)(iVar1 + 0x54))) {
			*(undefined2 *)(iVar1 + 0x52) = 0x72;
			*(undefined4 *)(iVar1 + 0x4a) = 0;
			*(undefined2 *)(iVar1 + 0x50) = *(undefined2 *)(*(int *)(iVar1 + 0x14) + -0x4974);
			*(undefined2 *)(iVar1 + 0x4e) = *(undefined2 *)(*(int *)(iVar1 + 0x14) + -0x4972);
			if (param_1 == '\0') {
				uVar3 = 0xffff;
			} else {
				uVar3 = 0xc00;
			}
			*(undefined2 *)(iVar1 + 0x54) = uVar3;
			sVar4 = PBControlSync(cVar2 + '8', param_2, param_3, param_4, param_5, param_6, param_7, param_8,
			    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
			    *(undefined4 *)(iVar1 + 0x14));
			if ((sVar4 == 0) && (param_1 != '\0')) {
				*(undefined *)(*(int *)(iVar1 + 0x14) + -0x496f) = 1;
			}
		}
	}
	return;
}

undefined8
FUN_100ca5c4(longlong param_1, undefined2 *param_2, undefined2 *param_3, undefined param_4, char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	int iVar2;
	char cVar3;
	undefined **ppuVar4;
	short sVar7;
	uint uVar5;
	int *piVar6;
	longlong lVar8;
	longlong lVar9;
	undefined8 uVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	short sVar15;
	longlong lVar16;

	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	lVar11 = (longlong)param_5;
	lVar9 = (longlong)(int)param_3;
	lVar8 = (longlong)(int)param_2;
	ppuVar4 = &toc;
	uVar10 = 0;
	sVar15 = 0;
	lVar1 = ZEXT48(register0x0000000c) - 0x210;
	iVar2 = (int)lVar1;
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	lVar16 = ZEXT48(register0x0000000c) - 0x1a5;
	do {
		do {
			do {
				sVar15 = sVar15 + 1;
				cVar3 = (char)lVar1;
				*(short *)(iVar2 + 0x188) = sVar15;
				*(undefined4 *)(iVar2 + 0x17e) = (int)lVar16;
				*(undefined2 *)(iVar2 + 0x182) = 0;
				*(undefined *)((int)ppuVar4 + -0x496e) = 0;
				sVar7 = PBHGetVInfoSync(cVar3 + 'l', (char)lVar8, (char)lVar9, (char)uVar10, (char)lVar11,
				    (char)lVar12, (char)lVar13, (char)lVar14, *(undefined *)(iVar2 + 0xb),
				    *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
				if (sVar7 != 0) {
					return 0;
				}
				lVar9 = 0;
				uVar10 = 0;
				lVar8 = param_1;
				uVar5 = EqualString((char)lVar16, (char)param_1, 0, 0, (char)lVar11, (char)lVar12, (char)lVar13,
				    (char)lVar14, *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
				    *(undefined4 *)(iVar2 + 0x14));
				ppuVar4 = *(undefined ***)(iVar2 + 0x14);
			} while (((uVar5 & 0xff) == 0) || (*(short *)(iVar2 + 0x1ae) < 1));
			piVar6 = (int *)GetDCtlEntry((char)*(undefined2 *)(iVar2 + 0x1b0), (char)lVar8, (char)lVar9,
			    (char)uVar10, (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14,
			    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
			    *(undefined4 *)(iVar2 + 0x14));
			ppuVar4 = *(undefined ***)(iVar2 + 0x14);
		} while (piVar6 == (int *)0x0);
		if ((*(ushort *)(*piVar6 + 4) & 4) != 0) {
			*(undefined2 *)(iVar2 + 0x52) = 0x2b;
			*(undefined4 *)(iVar2 + 0x4a) = 0;
			*(undefined4 *)(iVar2 + 0x54) = 0x64657674;
			*(undefined2 *)(iVar2 + 0x50) = *(undefined2 *)(iVar2 + 0x1b0);
			*(undefined2 *)(iVar2 + 0x4e) = *(undefined2 *)(iVar2 + 0x182);
			sVar7 = PBStatusSync(cVar3 + '8', (char)lVar8, (char)lVar9, (char)uVar10, (char)lVar11,
			    (char)lVar12, (char)lVar13, (char)lVar14, *(undefined *)(iVar2 + 0xb),
			    *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
			ppuVar4 = *(undefined ***)(iVar2 + 0x14);
			if ((sVar7 == 0) && (*(int *)(iVar2 + 0x58) == 0x6364726d)) {
				*(undefined *)((int)ppuVar4 + -0x496e) = 1;
			}
		}
	} while (*(char *)((int)ppuVar4 + -0x496e) == '\0');
	*param_2 = *(undefined2 *)(iVar2 + 0x182);
	*param_3 = *(undefined2 *)(iVar2 + 0x1b0);
	return 1;
}

void FUN_100ca9d4(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	int iVar2;
	uint uVar3;
	undefined uVar4;
	double dVar5;
	undefined in_stack_ffffff9b;
	undefined in_stack_ffffff9f;
	int local_5c;

	uVar4 = 0x24;
	memset((char)param_1, 0x24, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff9b,
	    in_stack_ffffff9f, local_5c);
	GetDefaultOutputVolume((char)param_1 + '\x04', uVar4, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff9b, in_stack_ffffff9f, local_5c);
	*(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 4) & 0xffff;
	if (*(int *)(param_1 + 0x10) < 0) {
		*(undefined4 *)(param_1 + 0x10) = 0;
	}
	*(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 4) >> 0x10;
	if (*(int *)(param_1 + 0x14) < 0) {
		*(undefined4 *)(param_1 + 0x14) = 0;
	}
	iVar2 = *(int *)(param_1 + 0x10);
	if (iVar2 < *(int *)(param_1 + 0x14)) {
		iVar2 = *(int *)(param_1 + 0x14);
	}
	*(int *)(param_1 + 8) = iVar2;
	if (0x100 < *(int *)(param_1 + 8)) {
		*(undefined4 *)(param_1 + 8) = 0x100;
	}
	if (*(uint *)(param_1 + 8) == 0) {
		uVar1 = *(undefined4 *)(local_5c + -0x4960);
		*(undefined4 *)(param_1 + 0x18) = uVar1;
		*(undefined4 *)(param_1 + 0x1c) = uVar1;
	} else {
		dVar5 = *(double *)(local_5c + -0x4968);
		*(float *)(param_1 + 0x18) = (float)((double)CONCAT44(0x43300000, *(uint *)(param_1 + 0x10) ^ 0x80000000) - dVar5) / (float)((double)CONCAT44(0x43300000, *(uint *)(param_1 + 8) ^ 0x80000000) - dVar5);
		*(float *)(param_1 + 0x1c) = (float)((double)CONCAT44(0x43300000, *(uint *)(param_1 + 0x14) ^ 0x80000000) - dVar5) / (float)((double)CONCAT44(0x43300000, *(uint *)(param_1 + 8) ^ 0x80000000) - dVar5);
	}
	uVar3 = *(int *)(param_1 + 8) * 7;
	*(int *)(param_1 + 0xc) = ((int)uVar3 >> 8) + (uint)((int)uVar3 < 0 && (uVar3 & 0xff) != 0) + 1;
	return;
}

void FUN_100cab2c(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	double dVar1;
	int iVar2;
	uint uVar3;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	iVar2 = (param_1 + -1) * 0x100 + 6;
	uVar3 = iVar2 / 7 + (iVar2 >> 0x1f);
	uVar3 = uVar3 + (uVar3 >> 0x1f) ^ 0x80000000;
	dVar1 = (double)CONCAT44(0x43300000, uVar3) - _DAT_100f4668;
	*(int *)(param_2 + 0x10) = (int)((float)((double)CONCAT44(0x43300000, uVar3) - _DAT_100f4668) * *(float *)(param_2 + 0x18));
	*(int *)(param_2 + 0x14) = (int)((float)dVar1 * *(float *)(param_2 + 0x1c));
	*(uint *)(param_2 + 0x20) = *(int *)(param_2 + 0x14) << 0x10 | *(uint *)(param_2 + 0x10);
	SetDefaultOutputVolume((char)*(undefined4 *)(param_2 + 0x20), (char)param_2, 0, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffab, in_stack_ffffffaf, local_4c);
	return;
}

void FUN_100cafe4(void)

{
	_DAT_100f4664 = _DAT_100f4658;
	return;
}

void FUN_100cc068(undefined8 param_1, int param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	ulonglong uVar2;
	undefined8 uVar3;
	undefined uVar4;
	char cVar5;
	undefined4 in_stack_ffffffc8;
	undefined uVar6;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	uVar2 = FUN_100b8970((undefined)param_1, 4, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(uint *)(param_2 + 8) = (uint)uVar2 & 0xff;
	uVar2 = FUN_100b8970((undefined)param_1, 7, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(uint *)(param_2 + 0xc) = (uint)uVar2 & 0xff;
	uVar2 = FUN_100b8970((undefined)param_1, 8, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(uint *)(param_2 + 0x10) = (uint)uVar2 & 0xff;
	uVar2 = FUN_100b8970((undefined)param_1, 0x14, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(uint *)(param_2 + 0x14) = (uint)uVar2 & 0xff;
	uVar2 = FUN_100b8970((undefined)param_1, 9, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(uint *)(param_2 + 0x534) = (uint)uVar2 & 0xff;
	uVar2 = FUN_100b8a24((undefined)param_1, 0xf, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(uint *)(param_2 + 0x1c) = (uint)uVar2 & 0xff;
	uVar3 = FUN_100b87dc((undefined)param_1, 0x10, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(int *)(param_2 + 0x520) = (int)(short)uVar3;
	uVar3 = FUN_100b87dc((undefined)param_1, 0x11, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(int *)(param_2 + 0x524) = (int)(short)uVar3;
	uVar2 = FUN_100b8970((undefined)param_1, 0x16, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(uint *)(param_2 + 0x52c) = (uint)uVar2 & 0xff;
	uVar4 = 0x15;
	uVar3 = FUN_100b87dc((undefined)param_1, 0x15, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*(int *)(param_2 + 0x530) = 9 - (int)(short)uVar3;
	uVar2 = FUN_100cda0c((char)uVar3, uVar4, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	if ((uVar2 & 0xff) != 0) {
		uVar2 = FUN_100b8970((undefined)param_1, 0x12, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		*(uint *)(param_2 + 0x528) = (uint)uVar2 & 0xff;
	}
	cVar1 = (char)param_2;
	cVar5 = cVar1 + ' ';
	uVar4 = 0xc;
	FUN_100b85b4((undefined)param_1, 0xc, cVar5, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	p2cstr(cVar1 + ' ', uVar4, cVar5, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffc8,
	    in_stack_ffffffcf, local_2c);
	cVar5 = cVar1 + ' ';
	uVar4 = 0x19;
	FUN_100b85b4((undefined)param_1, 0x19, cVar5, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	p2cstr(cVar1 + ' ', uVar4, cVar5, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffc8,
	    in_stack_ffffffcf, local_2c);
	cVar5 = cVar1 + ' ';
	uVar4 = 0x1b;
	FUN_100b85b4((undefined)param_1, 0x1b, cVar5, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	p2cstr(cVar1 + ' ', uVar4, cVar5, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffc8,
	    in_stack_ffffffcf, local_2c);
	cVar5 = cVar1 + ' ';
	uVar4 = 0x1d;
	FUN_100b85b4((undefined)param_1, 0x1d, cVar5, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	p2cstr(cVar1 + ' ', uVar4, cVar5, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffc8,
	    in_stack_ffffffcf, local_2c);
	uVar6 = (undefined)in_stack_ffffffc8;
	cVar5 = cVar1 + ' ';
	uVar4 = 0x1f;
	FUN_100b85b4((undefined)param_1, 0x1f, cVar5, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	p2cstr(cVar1 + ' ', uVar4, cVar5, param_4, param_5, param_6, param_7, param_8, uVar6, in_stack_ffffffcf,
	    local_2c);
	return;
}

undefined8
FUN_100cceb4(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	short sVar3;
	undefined8 uVar2;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x40);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	sVar3 = Gestalt(0x72, (char)(ZEXT48(register0x0000000c) - 0x40) + '8', param_3, param_4, param_5,
	    param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
	    *(undefined4 *)(iVar1 + 0x14));
	uVar2 = 0;
	if ((sVar3 == 0) && ((*(uint *)(iVar1 + 0x38) & 1) != 0)) {
		uVar2 = 1;
	}
	if (*(int *)(*(int *)(iVar1 + 0x14) + -0x7894) == 0) {
		uVar2 = 0;
	}
	return uVar2;
}

longlong FUN_100ccf10(char *param_1, char *param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	uint uVar2;
	longlong unaff_r30;
	undefined4 in_stack_ffffffb8;

	uVar1 = FUN_100cceb4((char)param_1, (char)param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	uVar2 = (uint)uVar1;
	if ((uVar1 & 0xff) != 0) {
		unaff_r30 = FUN_100ccbb4((char)param_1, (char)param_2, param_3, param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffb8);
		if (unaff_r30 < 0) {
			uVar2 = 0;
		}
	}
	if ((uVar2 & 0xff) == 0) {
		unaff_r30 = FUN_100ccd60(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
	}
	return unaff_r30;
}

void FUN_100cd310(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3)

{
	if (param_1 != (undefined4 *)0x0) {
		*param_1 = 0x280;
	}
	if (param_2 != (undefined4 *)0x0) {
		*param_2 = 0x1e0;
	}
	if (param_3 == (undefined4 *)0x0) {
		return;
	}
	*param_3 = 8;
	return;
}

ulonglong FUN_100cd794(short *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	int local_18;
	int local_14[5];

	uVar1 = 0;
	if (param_1 != (short *)0x0) {
		if (*_DAT_100f17b8 != 0) {
			local_14[0] = (int)param_1[1];
			local_18 = (int)*param_1;
			uVar1 = FUN_100dbf44(local_14, &local_18, (ulonglong)*_DAT_100f17b8, param_4, param_5, param_6,
			    param_7, param_8);
			if ((uVar1 & 0xff) != 0) {
				param_1[1] = (short)local_14[0];
				*param_1 = (short)local_18;
			}
		}
	}
	return uVar1;
}

void FUN_100cd854(void)

{
	_DAT_100f4690 = _DAT_100f468c;
	return;
}

undefined8
FUN_100cd860(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined8 uVar1;
	int iVar2;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	if (ISpStartup == (undefined *)0x0) {
		uVar1 = 0;
	} else {
		iVar2 = ISpStartup(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		if (iVar2 == 0) {
			uVar1 = 1;
		} else {
			uVar1 = 0;
		}
	}
	return uVar1;
}

longlong FUN_100cd8ac(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	short sVar3;
	short sVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	ulonglong uVar10;
	longlong lVar11;

	uVar6 = 0x6e;
	lVar11 = 0;
	sVar4 = -1;
	uVar10 = 0;
	uVar7 = 0;
	iVar2 = (int)(ZEXT48(register0x0000000c) - 0xa0);
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	uVar8 = 0xe8;
	uVar9 = 0xe4;
	sVar3 = FindFolder(0, 0x6e, 0, 0xe8, 0xe4, param_6, param_7, param_8, *(undefined *)(iVar2 + 0xb),
	    *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
	if (sVar3 == 0) {
		uVar8 = 0x9c;
		uVar6 = (undefined) * (undefined4 *)(iVar2 + 0x84);
		uVar7 = (undefined) * (undefined4 *)(*(int *)(iVar2 + 0x14) + -0x5440);
		sVar3 = FSMakeFSSpec((char)*(undefined2 *)(iVar2 + 0x88), uVar6, uVar7, 0x9c, uVar9, param_6, param_7,
		    param_8, *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
		    *(undefined4 *)(iVar2 + 0x14));
		if (sVar3 == 0) {
			uVar6 = 1;
			sVar4 = FSpOpenResFile((char)(ZEXT48(register0x0000000c) - 0xa0) + '<', 1, uVar7, uVar8, uVar9,
			    param_6, param_7, param_8, *(undefined *)(iVar2 + 0xb),
			    *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
			if (sVar4 != -1) {
				sVar3 = ResError((char)sVar4, uVar6, uVar7, uVar8, uVar9, param_6, param_7, param_8,
				    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
				    *(undefined4 *)(iVar2 + 0x14));
				if (sVar3 == 0) {
					uVar6 = 1;
					uVar10 = Get1Resource(0x73, 1, uVar7, uVar8, uVar9, param_6, param_7, param_8,
					    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
					    *(undefined4 *)(iVar2 + 0x14));
					if (uVar10 != 0) {
						sVar3 = ResError((char)uVar10, uVar6, uVar7, uVar8, uVar9, param_6, param_7, param_8,
						    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
						    *(undefined4 *)(iVar2 + 0x14));
						if (sVar3 == 0) {
							uVar5 = LoadResource((char)uVar10, uVar6, uVar7, uVar8, uVar9, param_6, param_7, param_8,
							    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
							    *(undefined4 *)(iVar2 + 0x14));
							if ((*(uint **)uVar10 != (uint *)0x0) && (sVar3 = ResError(uVar5, uVar6, uVar7, uVar8, uVar9, param_6, param_7, param_8, *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14)), sVar3 == 0)) {
								uVar1 = **(uint **)uVar10;
								uVar6 = (undefined)uVar1;
								lVar11 = -((ulonglong)(uVar1 < 0x1700000) - 1);
							}
						}
					}
				}
			}
		}
	}
	if ((uVar10 & 0xffffffff) != 0) {
		ReleaseResource((char)uVar10, uVar6, uVar7, uVar8, uVar9, param_6, param_7, param_8,
		    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
		    *(undefined4 *)(iVar2 + 0x14));
	}
	if (sVar4 != -1) {
		CloseResFile((char)sVar4, uVar6, uVar7, uVar8, uVar9, param_6, param_7, param_8,
		    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf),
		    *(undefined4 *)(iVar2 + 0x14));
	}
	return lVar11;
}

undefined8
FUN_100cda0c(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	char cVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	short sVar6;
	undefined8 uVar5;
	undefined uVar7;
	int iVar8;

	ppuVar3 = &toc;
	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	uVar4 = FUN_100cd8ac(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined4 *)(iVar1 + 8));
	uVar7 = (undefined)uVar4;
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0x50);
	if ((uVar4 & 0xff) != 0) {
		sVar6 = Gestalt(0x20, cVar2 + '8', param_3, param_4, param_5, param_6, param_7, param_8,
		    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x14));
		if ((sVar6 == 0) && ((*(uint *)(iVar1 + 0x38) & 1) != 0)) {
			iVar8 = 0x860;
		} else {
			iVar8 = 0x810;
		}
		param_2 = 0xe8;
		sVar6 = Gestalt(0x76, 0xe8, param_3, param_4, param_5, param_6, param_7, param_8,
		    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x14));
		uVar7 = (undefined)sVar6;
		ppuVar3 = *(undefined ***)(iVar1 + 0x14);
		if (sVar6 != 0) {
			return 0;
		}
		if (*(int *)(iVar1 + 0x38) < iVar8) {
			return 0;
		}
	}
	if ((*(char *)((int)ppuVar3 + -0x4933) == '\0') && (uVar4 = FUN_100cd860(uVar7, param_2, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined4 *)(iVar1 + 8)), (uVar4 & 0xff) == 0)) {
		uVar5 = 0;
	} else {
		uVar7 = ISpGetVersion(cVar2 + '<', param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x14));
		if ((*(char *)(*(int *)(iVar1 + 0x14) + -0x4933) == '\0') && (sVar6 = ISpShutdown(uVar7, param_2, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14)), sVar6 != 0)) {
			uVar5 = 0;
		} else {
			if ((*(char *)(iVar1 + 0x3c) == '\0') || ((*(char *)(iVar1 + 0x3c) == '\x01' && (*(byte *)(iVar1 + 0x3d) < 0x20)))) {
				uVar5 = 0;
			} else {
				uVar5 = 1;
			}
		}
	}
	return uVar5;
}

ulonglong FUN_100cde78(void)

{
	return (ulonglong)DAT_100f469c;
}

ulonglong FUN_100cdf10(void)

{
	return (ulonglong)((~_DAT_100f4698 >> 0x1f) + (uint)(_DAT_100f4698 == 0) & 1);
}

undefined8
FUN_100ce0e4(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	int iVar2;
	int iVar3;
	short sVar5;
	ulonglong uVar4;
	undefined uVar6;
	undefined uVar7;
	undefined8 uVar8;

	uVar7 = 0;
	uVar8 = 0;
	iVar2 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	*(undefined4 *)(iVar2 + 0x3c) = 0;
	uVar6 = 0xe8;
	sVar5 = Gestalt(0x76, 0xe8, 0, param_4, param_5, param_6, param_7, param_8, *(undefined *)(iVar2 + 0xb),
	    *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
	iVar3 = *(int *)(iVar2 + 0x14);
	if ((sVar5 == 0) && (0xfff < *(int *)(iVar2 + 0x38))) {
		uVar8 = 1;
	} else {
		if ((((*(int *)(iVar3 + -0x6e2c) == 0) || ((((*(int *)(iVar3 + -0x6e30) == 0 || (*(int *)(iVar3 + -0x6e34) == 0)) || (*(int *)(iVar3 + -0x6e38) == 0)) || ((*(int *)(iVar3 + -0x6e3c) == 0 || (*(int *)(iVar3 + -0x6e40) == 0)))))) || (*(int *)(iVar3 + -0x6e44) == 0)) || ((*(int *)(iVar3 + -0x6e48) == 0 || (*(int *)(iVar3 + -0x6e4c) == 0)))) {
			uVar8 = 0;
		} else {
			uVar4 = FUN_100d3368((char)(ZEXT48(register0x0000000c) - 0x50) + '<', uVar6, uVar7, param_4,
			    param_5, param_6, param_7, param_8, *(undefined4 *)(iVar2 + 8));
			if (((short)uVar4 == 0) && (uVar6 = param_1, uVar4 = FUN_100d3254((char)*(undefined4 *)(iVar2 + 0x3c), param_1, uVar7, param_4, param_5, param_6, param_7, param_8, *(undefined4 *)(iVar2 + 8)), (short)uVar4 == 0)) {
				uVar6 = 0;
				uVar4 = FUN_100d330c((char)*(undefined4 *)(iVar2 + 0x3c), 0, uVar7, param_4, param_5, param_6,
				    param_7, param_8, *(undefined4 *)(iVar2 + 8));
				if ((short)uVar4 == 0) {
					uVar1 = *(undefined4 *)(iVar2 + 0x3c);
					*(undefined *)(iVar3 + -0x4928) = 1;
					*(undefined4 *)(iVar3 + -0x492c) = uVar1;
					return 1;
				}
			}
			if (*(int *)(iVar2 + 0x3c) != 0) {
				FUN_100d33b8((char)*(int *)(iVar2 + 0x3c), uVar6, uVar7, param_4, param_5, param_6, param_7,
				    param_8, *(undefined4 *)(iVar2 + 8));
			}
		}
	}
	return uVar8;
}

void FUN_100ce228(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined uVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	uVar2 = 0;
	FUN_100d31f8((char)_DAT_100f46a4, 0, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	FUN_100d33b8((char)ppuVar1[-0x124b], uVar2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	ppuVar1[-0x124b] = (undefined *)0x0;
	*(undefined *)(ppuVar1 + -0x124a) = 0;
	return;
}

void FUN_100ce264(undefined4 *param_1)

{
	if ((DAT_100f46a8 != '\0') && (_DAT_100f46a4 != 0)) {
		*param_1 = *(undefined4 *)(*(int *)(_DAT_100f46a4 + 4) + 0x10);
		return;
	}
	*param_1 = _DAT_100f469e;
	return;
}

void FUN_100ce298(char param_1, char param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	char cVar2;
	undefined4 in_stack_ffffffc8;

	uVar1 = (int)param_1 << 0xe;
	cVar2 = (char)(uVar1 >> 0x10) + ((int)uVar1 < 0 && (uVar1 & 0xc000) != 0);
	uVar1 = (int)param_2 << 0xe;
	FUN_100d30d8((char)_DAT_100f46a4, cVar2,
	    (char)(uVar1 >> 0x10) + ((int)uVar1 < 0 && (uVar1 & 0xc000) != 0), cVar2, param_5,
	    param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_100ce2d8(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_100d31a8((char)_DAT_100f46a4, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void FUN_100ce378(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	SMemAlloc(0x88, (char)PTR_s_SELREGN_CPP_100f3bd0, 0x52, 0, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

void FUN_100ce3ac(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	if (param_1 != 0) {
		SMemFree((char)param_1, (char)PTR_s_SELREGN_CPP_100f3bd0, 0x58, 0, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	}
	return;
}

void FUN_100ce3e4(undefined4 *param_1, char param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined4 in_stack_ffffffc8;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	lVar2 = (longlong)param_2;
	while (param_1 != (undefined4 *)0x0) {
		puVar1 = (undefined4 *)*param_1;
		FUN_100ce3ac((int)param_1, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
		    (char)lVar7, (char)lVar8, in_stack_ffffffc8);
		param_1 = puVar1;
	}
	return;
}

undefined4 *FUN_100ce420(undefined4 param_1, undefined4 *param_2)

{
	*param_2 = param_1;
	return param_2;
}

undefined8
FUN_100ce42c(char param_1, char param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	ulonglong uVar3;
	longlong lVar4;
	char *pcVar5;
	undefined4 *puVar6;
	ulonglong uVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	int iVar14;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f178c;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar10 = (longlong)param_5;
	lVar9 = (longlong)param_4;
	lVar8 = (longlong)param_3;
	uVar7 = SEXT18(param_2);
	lVar4 = (longlong)param_1;
	uVar3 = ZEXT48(&toc);
	iVar14 = *(int *)(PTR_DAT_100f178c + 8);
	while (true) {
		if (iVar14 < 1) {
			return 1;
		}
		puVar6 = (undefined4 *)
		    FUN_100ce378((char)lVar4, (char)uVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
		        (char)lVar12, (char)lVar13, in_stack_ffffffb8);
		if (puVar6 == (undefined4 *)0x0)
			break;
		*puVar6 = 0;
		puVar6[1] = iVar14;
		pcVar5 = FUN_100cfa98((int)puVar2, iVar14, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11,
		    (char)lVar12, (char)lVar13, in_stack_ffffffb8);
		strcpy((int)(puVar6 + 2), (int)pcVar5);
		puVar6 = FUN_100ce420(*(undefined4 *)((int)uVar3 + -0x491c), puVar6);
		lVar4 = (longlong)(int)puVar6;
		iVar1 = (int)uVar3;
		uVar7 = (ulonglong) * (uint *)(iVar1 + -0x4920);
		iVar14 = iVar14 + -1;
		*(undefined4 **)(iVar1 + -0x491c) = puVar6;
		*(int *)(iVar1 + -0x4920) = *(uint *)(iVar1 + -0x4920) + 1;
	}
	return 0;
}

void FUN_100cf66c(void)

{
	_DAT_100f46b8 = _DAT_100f46ac;
	return;
}

void FUN_100cf804(int param_1, longlong param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	int iVar8;
	longlong lVar9;
	int iVar10;
	undefined4 in_stack_ffffffb8;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	iVar10 = 1;
	lVar9 = 0x564;
	iVar8 = 1;
	while (iVar8 <= *(int *)(param_1 + 8)) {
		lVar1 = FUN_100cfa3c(param_1, iVar8, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
		    (char)lVar7, in_stack_ffffffb8);
		lVar1 = abs(lVar1 * 0x3c - param_2);
		if ((int)lVar1 < (int)lVar9) {
			lVar9 = lVar1;
			iVar10 = iVar8;
		}
		iVar8 = iVar8 + 1;
	}
	FUN_100cfb08(param_1, iVar10);
	return;
}

int FUN_100cf988(int param_1, int param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	ulonglong uVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	int iVar11;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar9 = (longlong)param_8;
	lVar8 = (longlong)param_7;
	lVar7 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar5 = (longlong)param_4;
	lVar4 = (longlong)param_3;
	lVar3 = (longlong)param_2;
	uVar1 = (ulonglong) * (uint *)(param_1 + 0x10);
	if (((*(uint *)(param_1 + 0x10) != 0) && (0 < param_2)) && (param_2 <= *(int *)(param_1 + 8))) {
		iVar11 = 1;
		lVar10 = 0;
		while ((iVar11 < param_2 * 3 && ((int)lVar10 < *(int *)(param_1 + 0x14)))) {
			lVar2 = SStrLen((char)uVar1, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
			    (char)lVar8, (char)lVar9, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
			iVar11 = iVar11 + 1;
			uVar1 = uVar1 + lVar2 + 1;
			lVar10 = lVar10 + lVar2 + 1;
		}
		if (((int)lVar10 < *(int *)(param_1 + 0x14)) && (iVar11 <= param_2 * 3)) {
			param_1 = (int)uVar1;
		}
	}
	return param_1;
}

void FUN_100cfa3c(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	undefined uVar2;
	char *pcVar3;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	int aiStack24[6];

	uVar2 = (undefined)param_2;
	pcVar3 = (char *)FUN_100cf988(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	if (*pcVar3 != '\0') {
		iVar1 = SStrLen((char)pcVar3, uVar2, param_3, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
		pcVar3 = pcVar3 + iVar1 + 1;
	}
	FUN_100d8d28((int)pcVar3, aiStack24, 10, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

char *FUN_100cfa98(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	undefined uVar2;
	char *pcVar3;
	undefined4 in_stack_ffffffc8;
	undefined uVar4;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	uVar4 = (undefined)in_stack_ffffffc8;
	uVar2 = (undefined)param_2;
	pcVar3 = (char *)FUN_100cf988(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	if (*pcVar3 != '\0') {
		iVar1 = SStrLen((char)pcVar3, uVar2, param_3, param_4, param_5, param_6, param_7, param_8, uVar4,
		    in_stack_ffffffcf, local_2c);
		pcVar3 = pcVar3 + iVar1 + 1;
	}
	if (*pcVar3 != '\0') {
		iVar1 = SStrLen((char)pcVar3, uVar2, param_3, param_4, param_5, param_6, param_7, param_8, uVar4,
		    in_stack_ffffffcf, local_2c);
		pcVar3 = pcVar3 + iVar1 + 1;
	}
	return pcVar3;
}

void FUN_100cfb08(int param_1, int param_2)

{
	if (*(int *)(param_1 + 0x10) == 0) {
		return;
	}
	if (param_2 < 1) {
		return;
	}
	if (*(int *)(param_1 + 8) < param_2) {
		return;
	}
	if (99 < param_2) {
		param_2 = 99;
	}
	*(int *)(param_1 + 0xc) = param_2;
	*(undefined4 *)(param_1 + 4) = 1;
	return;
}

void FUN_100cffe4(void)

{
	_DAT_100f46c0 = _DAT_100f46bc;
	return;
}

ulonglong FUN_100d2504(longlong param_1, char param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	ushort uVar1;
	int iVar2;
	ulonglong uVar3;
	longlong lVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	undefined4 in_stack_ffffffc8;

	lVar12 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	lVar9 = (longlong)param_5;
	lVar8 = (longlong)param_4;
	lVar7 = (longlong)param_3;
	uVar6 = SEXT18(param_2);
	iVar2 = (int)param_1;
	*(undefined2 *)(iVar2 + 4) = 0x1000;
	do {
		uVar5 = FUN_100d2644(iVar2, (char)uVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
		    (char)lVar11, (char)lVar12, in_stack_ffffffc8);
		if (0x304 < ((uint)uVar5 & 0xffff)) {
		LAB_100d2608:
			FUN_100dbf44(param_1 + 0x101e, (ulonglong)((uint) * (ushort *)(iVar2 + 4) - 0x1000 & 0xffff),
			    (ulonglong) * (uint *)(iVar2 + 0x12));
			return uVar5;
		}
		if (((uint)uVar5 & 0xffff) < 0x100) {
			uVar1 = *(ushort *)(iVar2 + 4);
			*(short *)(iVar2 + 4) = uVar1 + 1;
			*(undefined *)(iVar2 + (uint)uVar1 + 0x1e) = (char)uVar5;
		} else {
			uVar5 = uVar5 - 0xfe;
			uVar3 = FUN_100d2874(iVar2, (short)uVar5, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
			    (char)lVar11, (char)lVar12, in_stack_ffffffc8);
			if ((uVar3 & 0xffff) == 0) {
				uVar5 = 0x306;
				goto LAB_100d2608;
			}
			uVar6 = (ulonglong) * (ushort *)(iVar2 + 4);
			lVar7 = param_1 + uVar6 + 0x1e;
			*(short *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) + (short)uVar5;
			lVar4 = lVar7 - (ulonglong)((uint)uVar3 & 0xffff);
			do {
				uVar5 = uVar5 - 1;
				*(undefined *)lVar7 = *(undefined *)lVar4;
				lVar4 = lVar4 + 1;
				lVar7 = lVar7 + 1;
			} while ((uVar5 & 0xffff) != 0);
		}
		if (0x1fff < *(ushort *)(iVar2 + 4)) {
			FUN_100dbf44(param_1 + 0x101e, 0x1000, (ulonglong) * (uint *)(iVar2 + 0x12));
			uVar6 = param_1 + 0x101e;
			lVar7 = (ulonglong) * (ushort *)(iVar2 + 4) - 0x1000;
			memcpy((undefined4 *)(iVar2 + 0x1e), (undefined4 *)uVar6, lVar7);
			*(short *)(iVar2 + 4) = *(short *)(iVar2 + 4) + -0x1000;
		}
	} while (true);
}

ulonglong FUN_100d2644(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	ushort uVar3;
	uint uVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	undefined4 in_stack_ffffffb8;

	if ((*(ushort *)(param_1 + 10) & 1) == 0) {
		uVar5 = FUN_100d2950(param_1, 1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		if ((uVar5 & 0xffff) == 0) {
			if (*(short *)(param_1 + 2) == 0) {
				uVar5 = (ulonglong)((uint) * (ushort *)(param_1 + 10) & 0xff);
				uVar6 = FUN_100d2950(param_1, 8, param_3, param_4, param_5, param_6, param_7, param_8,
				    in_stack_ffffffb8);
				if ((uVar6 & 0xffff) != 0) {
					uVar5 = 0x306;
				}
			} else {
				uVar3 = *(ushort *)(param_1 + 10);
				if ((uVar3 & 0xff) == 0) {
					uVar5 = FUN_100d2950(param_1, 8, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffffb8);
					if ((uVar5 & 0xffff) != 0) {
						return 0x306;
					}
					uVar5 = (ulonglong) * (byte *)(param_1 + ((uint) * (ushort *)(param_1 + 10) & 0xff) + 0x2ea2);
				} else {
					bVar1 = *(byte *)(param_1 + ((uint)uVar3 & 0xff) + 0x2c22);
					uVar5 = (ulonglong)bVar1;
					if (bVar1 == 0xff) {
						if ((uVar3 & 0x3f) == 0) {
							uVar5 = FUN_100d2950(param_1, 6, param_3, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffffb8);
							if ((uVar5 & 0xffff) != 0) {
								return 0x306;
							}
							uVar5 = (ulonglong)
							    * (byte *)(param_1 + ((uint) * (ushort *)(param_1 + 10) & 0x7f) + 0x2e22);
						} else {
							uVar5 = FUN_100d2950(param_1, 4, param_3, param_4, param_5, param_6, param_7, param_8,
							    in_stack_ffffffb8);
							if ((uVar5 & 0xffff) != 0) {
								return 0x306;
							}
							uVar5 = (ulonglong)
							    * (byte *)(param_1 + ((uint) * (ushort *)(param_1 + 10) & 0xff) + 0x2d22);
						}
					}
				}
				uVar6 = FUN_100d2950(param_1, (ulonglong) * (byte *)(param_1 + (int)uVar5 + 0x2fa2), param_3,
				    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
				if ((uVar6 & 0xffff) != 0) {
					uVar5 = 0x306;
				}
			}
		} else {
			uVar5 = 0x306;
		}
	} else {
		uVar5 = FUN_100d2950(param_1, 1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		if ((uVar5 & 0xffff) == 0) {
			bVar1 = *(byte *)(param_1 + ((uint) * (ushort *)(param_1 + 10) & 0xff) + 0x2b22);
			uVar5 = (ulonglong)bVar1;
			uVar4 = (uint)bVar1;
			uVar6 = FUN_100d2950(param_1, (ulonglong) * (byte *)(param_1 + uVar4 + 0x30e2), param_3, param_4,
			    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			if ((uVar6 & 0xffff) == 0) {
				bVar2 = *(byte *)(param_1 + uVar4 + 0x30f2);
				if (bVar2 != 0) {
					uVar5 = (ulonglong) * (ushort *)(param_1 + 10) & (uVar6 & 0xffffffff00000000 | (ulonglong)(uint)(1 << (ulonglong)bVar2)) - 1;
					uVar6 = FUN_100d2950(param_1, (ulonglong)bVar2, (char)*(ushort *)(param_1 + 10), param_4,
					    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
					if (((uVar6 & 0xffff) != 0) && (uVar4 + (int)uVar5 != 0x10e)) {
						return 0x306;
					}
					uVar5 = (ulonglong) * (ushort *)(param_1 + (uint)bVar1 * 2 + 0x3102) + uVar5;
				}
				uVar5 = uVar5 + 0x100;
			} else {
				uVar5 = 0x306;
			}
		} else {
			uVar5 = 0x306;
		}
	}
	return uVar5;
}

longlong FUN_100d2874(int param_1, short param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	ulonglong uVar2;
	longlong lVar3;
	ulonglong uVar4;
	undefined4 in_stack_ffffffb8;

	bVar1 = *(byte *)(param_1 + ((uint) * (ushort *)(param_1 + 10) & 0xff) + 0x2a22);
	uVar2 = FUN_100d2950(param_1, (ulonglong) * (byte *)(param_1 + (uint)bVar1 + 0x30a2), param_3, param_4,
	    param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	if ((uVar2 & 0xffff) == 0) {
		if (param_2 == 2) {
			uVar4 = (ulonglong)((uint)bVar1 << 2 | (uint) * (ushort *)(param_1 + 10) & 3);
			uVar2 = FUN_100d2950(param_1, 2, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8);
			if ((uVar2 & 0xffff) != 0) {
				return 0;
			}
		} else {
			uVar4 = (ulonglong)((uint)bVar1 << (ulonglong) * (ushort *)(param_1 + 6)) | (ulonglong)(*(ushort *)(param_1 + 10) & *(ushort *)(param_1 + 8));
			uVar2 = FUN_100d2950(param_1, (ulonglong) * (ushort *)(param_1 + 6), param_3, param_4, param_5,
			    param_6, param_7, param_8, in_stack_ffffffb8);
			if ((uVar2 & 0xffff) != 0) {
				return 0;
			}
		}
		lVar3 = uVar4 + 1;
	} else {
		lVar3 = 0;
	}
	return lVar3;
}

undefined8
FUN_100d2950(int param_1, longlong param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;

	if ((ulonglong) * (ushort *)(param_1 + 0xc) < (ulonglong)((uint)param_2 & 0xffff)) {
		*(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) >> (ulonglong) * (ushort *)(param_1 + 0xc);
		if (*(short *)(param_1 + 0xe) == *(short *)(param_1 + 0x10)) {
			*(undefined2 *)(param_1 + 0xe) = 0x800;
			uVar1 = FUN_100dbf44((longlong)param_1 + 0x2222, (ulonglong) * (ushort *)(param_1 + 0xe),
			    (ulonglong) * (uint *)(param_1 + 0x12), param_4, param_5, param_6, param_7,
			    param_8);
			*(undefined2 *)(param_1 + 0x10) = (short)uVar1;
			if ((uVar1 & 0xffff) == 0) {
				return 1;
			}
			*(undefined2 *)(param_1 + 0xe) = 0;
		}
		*(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | (ushort) * (byte *)(param_1 + (uint) * (ushort *)(param_1 + 0xe) + 0x2222) << 8;
		*(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + 1;
		*(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) >> param_2 - (ulonglong) * (ushort *)(param_1 + 0xc);
		*(short *)(param_1 + 0xc) = 8 - ((short)param_2 - *(short *)(param_1 + 0xc));
	} else {
		*(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) >> param_2;
		*(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) - (short)param_2;
	}
	return 0;
}

longlong FUN_100d3428(int param_1, int param_2)

{
	longlong lVar1;
	int iVar2;
	int iVar3;

	iVar2 = 1;
	iVar3 = 1;
	if (param_1 < 0) {
		param_1 = -param_1;
		iVar2 = -1;
	}
	if (param_2 < 0) {
		param_2 = -param_2;
		iVar3 = -1;
	}
	lVar1 = (longlong)param_1 * (longlong)iVar2 - (longlong)iVar3 * (longlong)(iVar2 * iVar3 * (param_1 / param_2) * param_2);
	if (lVar1 == 0) {
		return lVar1;
	}
	if (-1 < iVar2 * iVar3) {
		return lVar1;
	}
	return lVar1 + (longlong)param_2 * (longlong)iVar3;
}

undefined8 FUN_100d34a8(short *param_1, char *param_2, int param_3)

{
	if (param_2 == (char *)0x0) {
		return 0;
	}
	if (param_3 == 0) {
		return 0xffffffffffffffff;
	}
	if (param_1 != (short *)0x0) {
		*param_1 = (short)*param_2;
	}
	if (*param_2 == '\0') {
		return 0;
	}
	return 1;
}

char *FUN_100d594c(int param_1, char **param_2, uint *param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	uint uVar7;
	uint uVar8;
	uint uVar9;
	char **ppcVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	uint uVar14;
	ulonglong uVar15;
	longlong lVar16;
	int iVar17;
	char *pcVar18;
	char *pcVar19;
	undefined4 local_58;
	uint local_54;
	uint local_50;
	uint local_4c;
	char *local_48;
	char *local_44;
	uint local_40;

	iVar13 = _DAT_100f1a6c;
	uVar15 = ZEXT48(&toc);
	pcVar18 = (char *)(param_1 + 1);
	local_58 = *_DAT_100f3c1c;
	local_54 = _DAT_100f3c1c[1];
	local_50 = _DAT_100f3c1c[2];
	local_4c = _DAT_100f3c1c[3];
	local_48 = (char *)_DAT_100f3c1c[4];
	local_44 = (char *)_DAT_100f3c1c[5];
	local_40 = _DAT_100f3c1c[6];
	uVar2 = _DAT_100f3c1c[7];
	bVar12 = true;
	uVar3 = _DAT_100f3c1c[8];
	uVar4 = _DAT_100f3c1c[9];
	uVar5 = _DAT_100f3c1c[10];
	uVar6 = _DAT_100f3c1c[0xb];
	uVar7 = _DAT_100f3c1c[0xc];
	uVar8 = _DAT_100f3c1c[0xd];
	uVar9 = _DAT_100f3c1c[0xe];
	cVar1 = *pcVar18;
	lVar16 = (longlong)cVar1;
	if (cVar1 == '%') {
		local_58 = local_58 & 0xffffff00 | 0x25;
		*param_3 = local_58;
		param_3[1] = local_54;
		param_3[2] = local_50;
		param_3[3] = local_4c;
		*(char **)(param_3 + 4) = local_48;
		*(char **)(param_3 + 5) = local_44;
		param_3[6] = local_40;
		param_3[7] = uVar2;
		param_3[8] = uVar3;
		param_3[9] = uVar4;
		param_3[10] = uVar5;
		param_3[0xb] = uVar6;
		param_3[0xc] = uVar7;
		param_3[0xd] = uVar8;
		param_3[0xe] = uVar9;
		return (char *)(param_1 + 2);
	}
	if (cVar1 == '*') {
		local_58 = CONCAT13(1, local_58._1_3_);
		pcVar18 = (char *)(param_1 + 2);
		lVar16 = (longlong)*pcVar18;
	}
	do {
		if ((*(byte *)(iVar13 + ((uint)lVar16 & 0xff)) & 0x10) != 0) {
			local_54 = 0;
			do {
				pcVar19 = pcVar18;
				local_54 = ((int)lVar16 + local_54 * 10) - 0x30;
				pcVar18 = pcVar19 + 1;
				lVar16 = (longlong)*pcVar18;
			} while ((*(byte *)(iVar13 + ((int)*pcVar18 & 0xffU)) & 0x10) != 0);
			if (local_54 == 0) {
				local_58 = CONCAT31(local_58._0_3_, 0xff);
				*param_3 = local_58;
				param_3[1] = 0;
				param_3[2] = local_50;
				param_3[3] = local_4c;
				*(char **)(param_3 + 4) = local_48;
				*(char **)(param_3 + 5) = local_44;
				param_3[6] = local_40;
				param_3[7] = uVar2;
				param_3[8] = uVar3;
				param_3[9] = uVar4;
				param_3[10] = uVar5;
				param_3[0xb] = uVar6;
				param_3[0xc] = uVar7;
				param_3[0xd] = uVar8;
				param_3[0xe] = uVar9;
				return pcVar19 + 2;
			}
			local_58._1_3_ = CONCAT12(1, local_58._2_2_);
			local_58 = local_58 & 0xff000000 | (uint)local_58._1_3_;
		}
		uVar14 = local_58;
		pcVar19 = pcVar18;
		if ((int)lVar16 == 0x76) {
			local_50 = 1;
			pcVar19 = pcVar18 + 1;
			lVar16 = (longlong)*pcVar19;
		}
		iVar17 = (int)lVar16;
		bVar11 = true;
		if (iVar17 == 0x68) {
			local_58 = local_58 & 0xffff0000 | 0x200;
			if (pcVar19[1] == 'h') {
				local_58 = uVar14 & 0xffff0000 | 0x100;
				pcVar19 = pcVar19 + 1;
				lVar16 = (longlong)*pcVar19;
			} else {
				local_4c = 8;
			}
		} else {
			if (iVar17 < 0x68) {
				if (iVar17 == 0x4c) {
					local_58 = local_58 & 0xffff0000 | 0x600;
				} else {
				LAB_100d5c2c:
					local_4c = 0x10;
					bVar11 = false;
				}
			} else {
				if (iVar17 != 0x6c)
					goto LAB_100d5c2c;
				local_58 = local_58 & 0xffff0000 | 0x300;
				if (pcVar19[1] == 'l') {
					local_58 = uVar14 & 0xffff0000 | 0x400;
					pcVar19 = pcVar19 + 1;
					lVar16 = (longlong)*pcVar19;
				} else {
					local_4c = 4;
				}
			}
		}
		if (bVar11) {
			pcVar19 = pcVar19 + 1;
			lVar16 = (longlong)*pcVar19;
		}
		if (((local_50 == 0) && ((int)lVar16 == 0x76)) && (local_4c != 0)) {
			local_50 = 1;
			pcVar19 = pcVar19 + 1;
			lVar16 = (longlong)*pcVar19;
		}
		local_58 = local_58 & 0xffffff00;
		if ((lVar16 - 0x45U & 0xffffffff) < 0x34) {
			// WARNING: Could not recover jumptable at 0x100d5c98. Too many branches
			// WARNING: Treating indirect jump as call
			pcVar18 = (char *)(**(code **)(*(int *)((int)uVar15 + -0x53b8) + (int)(lVar16 - 0x45U) * 4))();
			return pcVar18;
		}
		if ((local_50 != 0) || (!bVar12)) {
			local_58._0_3_ = (undefined3)(local_58 >> 8);
			local_58 = CONCAT31(local_58._0_3_, 0xff);
			*param_3 = local_58;
			param_3[1] = local_54;
			param_3[2] = local_50;
			param_3[3] = local_4c;
			*(char **)(param_3 + 4) = local_48;
			*(char **)(param_3 + 5) = local_44;
			param_3[6] = local_40;
			param_3[7] = uVar2;
			param_3[8] = uVar3;
			param_3[9] = uVar4;
			param_3[10] = uVar5;
			param_3[0xb] = uVar6;
			param_3[0xc] = uVar7;
			param_3[0xd] = uVar8;
			param_3[0xe] = uVar9;
			return pcVar19 + 1;
		}
		bVar12 = false;
		if ((int)lVar16 == 0x40) {
			ppcVar10 = (char **)*param_2;
			*(char ***)param_2 = ppcVar10 + 1;
			local_48 = *ppcVar10;
			local_40 = strlen((uint)local_48);
			while ((0 < (int)local_40 && (*local_48 == ' '))) {
				local_48 = local_48 + 1;
				local_40 = local_40 - 1;
			}
			while ((0 < (int)local_40 && (local_48[local_40 - 1] == ' '))) {
				local_40 = local_40 - 1;
			}
		} else {
			local_40 = 1;
			local_48 = pcVar19;
		}
		local_44 = local_48;
		local_58._0_1_ = (char)(local_58 >> 0x18);
		pcVar18 = pcVar19 + 1;
		lVar16 = (longlong)*pcVar18;
		if ((local_58._0_1_ == '\0') && (*pcVar18 == '*')) {
			local_58 = CONCAT13(1, local_58._1_3_);
			pcVar18 = pcVar19 + 2;
			lVar16 = (longlong)*pcVar18;
		}
	} while (true);
}

// WARNING: Removing unreachable block (ram,0x100d6d40)
// WARNING: Removing unreachable block (ram,0x100d7ad4)
// WARNING: Removing unreachable block (ram,0x100d6850)

ulonglong FUN_100d60d8(ulonglong uParm1, longlong lParm2, longlong lParm3, longlong lParm4,
    longlong lParm5, ulonglong uParm6, longlong lParm7, undefined param_8)

{
	bool bVar1;
	byte bVar2;
	undefined4 *puVar3;
	int iVar4;
	char *pcVar8;
	int iVar9;
	undefined8 uVar5;
	ulonglong uVar6;
	short *psVar10;
	int iVar11;
	ulonglong uVar7;
	ulonglong uVar12;
	undefined8 in_r13;
	longlong unaff_r14;
	float fVar13;
	longlong unaff_r15;
	ulonglong unaff_r16;
	undefined8 unaff_r17;
	longlong lVar14;
	undefined8 unaff_r18;
	longlong unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	int iVar15;
	undefined8 unaff_r22;
	longlong lVar16;
	ulonglong unaff_r23;
	double *pdVar17;
	undefined8 unaff_r24;
	uint uVar18;
	longlong unaff_r25;
	longlong unaff_r26;
	undefined8 unaff_r27;
	int iVar19;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar20;
	double dVar21;
	uint *param_11;
	undefined4 in_stack_fffffef8;
	undefined4 local_d4;
	undefined4 local_d0;
	undefined4 local_cc;
	undefined4 local_c8;
	char local_c0;
	char local_bf;
	byte local_be;
	byte local_bd;
	uint local_bc;
	int local_b8;
	int local_b4;
	char *local_b0;
	char *local_ac;
	uint local_a8;
	byte local_84[8];
	int local_7c;
	uint local_78;
	float local_68;
	float local_64;
	int local_60;
	uint local_5c;
	char *local_58;
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

	iVar11 = _DAT_100f1a6c;
	uVar7 = ZEXT48(register0x0000000c);
	local_4c = (undefined4)((ulonglong)in_r13 >> 0x20);
	uStack72 = (undefined4)((ulonglong)unaff_r14 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
	uStack64 = (undefined4)(unaff_r16 >> 0x20);
	uStack60 = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
	uStack52 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
	uStack44 = (undefined4)((ulonglong)unaff_r21 >> 0x20);
	uStack40 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)(unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	local_58 = (char *)&local_c0;
	local_5c = 0;
	param_11 = (uint *)lParm4;
	lVar14 = uVar7 - 0xd4;
	lVar20 = 0;
	local_60 = 0;
LAB_100d7b1c:
	do {
		bVar2 = *(byte *)lParm3;
		if (bVar2 == 0) {
		LAB_100d7b28:
			iVar11 = FUN_100dbf44(lParm2, 0, 2);
			if ((iVar11 == 0) || (local_60 != 0)) {
				uVar7 = (ulonglong)local_5c;
			} else {
				uVar7 = 0xffffffffffffffff;
			}
			return uVar7;
		}
		if ((*(byte *)(iVar11 + (uint)bVar2) & 6) != 0) {
			do {
				lParm3 = lParm3 + 1;
			} while ((*(byte *)(iVar11 + (uint) * (byte *)lParm3) & 6) != 0);
			while (local_84[0] = FUN_100dbf44(lParm2, 0, 0),
			    (*(byte *)(iVar11 + ((int)(char)local_84[0] & 0xffU)) & 6) != 0) {
				lVar20 = lVar20 + 1;
			}
			FUN_100dbf44(lParm2, local_84[0], 1);
			goto LAB_100d7b1c;
		}
		if (bVar2 != 0x25) {
			local_84[0] = FUN_100dbf44(lParm2, 0, 0);
			if ((uint)bVar2 != (int)(char)local_84[0]) {
				FUN_100dbf44(lParm2, local_84[0], 1);
				goto LAB_100d7b28;
			}
			lVar20 = lVar20 + 1;
			lParm3 = lParm3 + 1;
			goto LAB_100d7b1c;
		}
		pcVar8 = FUN_100d594c((int)(byte *)lParm3, (char **)&stack0x00000024, &local_c0, (char)lParm4,
		    (char)lParm5, (char)uParm6, (char)lParm7, param_8, in_stack_fffffef8);
		lParm3 = (longlong)(int)pcVar8;
		if (local_b8 == 0) {
			if ((local_c0 == '\0') && (local_bd != 0x25)) {
				unaff_r23 = (ulonglong)*param_11;
				param_11 = param_11 + 1;
			} else {
				unaff_r23 = 0;
			}
		} else {
			local_d4 = 0;
			local_d0 = 0;
			local_cc = 0;
			local_c8 = 0;
			unaff_r25 = 0;
			while (local_84[0] = FUN_100dbf44(lParm2, 0, 0),
			    (*(byte *)(iVar11 + ((int)(char)local_84[0] & 0xffU)) & 6) != 0) {
				lVar20 = lVar20 + 1;
			}
			FUN_100dbf44(lParm2, local_84[0], 1);
		}
		if ((local_bd != 0x6e) && (iVar9 = FUN_100dbf44(lParm2, 0, 2), iVar9 != 0))
			goto LAB_100d7b28;
		pdVar17 = (double *)unaff_r23;
		iVar9 = (int)unaff_r25;
		iVar4 = (int)lVar14;
		if (local_bd != 100) {
			if (99 < local_bd) {
				if (local_bd == 0x73) {
					if (local_b8 != 0)
						goto LAB_100d7b28;
					local_84[0] = FUN_100dbf44(lParm2, 0, 0);
					while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
						lVar20 = lVar20 + 1;
						local_84[0] = FUN_100dbf44(lParm2, 0, 0);
					}
					FUN_100dbf44(lParm2, local_84[0], 1);
				LAB_100d78b0:
					if (local_b8 != 0)
						goto LAB_100d7b28;
					if ((unaff_r23 & 0xffffffff) == 0) {
						local_78 = 0;
						while (((bVar1 = local_bc != 0, local_bc = local_bc - 1, bVar1 && (local_84[0] = FUN_100dbf44(lParm2, 0, 0), local_84[0] != 0xff)) && (((ulonglong)(uint)(1 << (ulonglong)((uint)local_84[0] & 7)) & (ulonglong)(byte)local_58[((int)(uint)local_84[0] >> 3) + 0x1c]) != 0))) {
							local_78 = local_78 + 1;
						}
						if (local_78 == 0) {
							FUN_100dbf44(lParm2, local_84[0], 1);
							goto LAB_100d7b28;
						}
					} else {
						local_78 = 0;
						while (true) {
							bVar1 = local_bc == 0;
							local_bc = local_bc - 1;
							psVar10 = (short *)unaff_r23;
							if (((bVar1) || (local_84[0] = FUN_100dbf44(lParm2, 0, 0), local_84[0] == 0xff)) || (lParm4 = 1, ((ulonglong)(uint)(1 << (ulonglong)((uint)local_84[0] & 7)) & (ulonglong)(byte)local_58[((int)(uint)local_84[0] >> 3) + 0x1c]) == 0))
								break;
							if (local_be == 7) {
								FUN_100d34a8(psVar10, (char *)local_84, 1);
								unaff_r23 = unaff_r23 + 2;
							} else {
								*(byte *)psVar10 = local_84[0];
								unaff_r23 = unaff_r23 + 1;
							}
							local_78 = local_78 + 1;
						}
						if (local_78 == 0) {
							FUN_100dbf44(lParm2, local_84[0], 1);
							goto LAB_100d7b28;
						}
						if (local_be == 7) {
							*psVar10 = 0;
						} else {
							*(undefined *)psVar10 = 0;
						}
						local_5c = local_5c + 1;
					}
					lVar20 = lVar20 + (ulonglong)local_78;
					if (-1 < (int)local_bc) {
						FUN_100dbf44(lParm2, local_84[0], 1);
					}
					local_60 = local_60 + 1;
				} else {
					if (local_bd < 0x73) {
						if (local_bd != 0x6e) {
							if (local_bd < 0x6e) {
								if (local_bd == 0x69) {
									uVar6 = 0;
									goto LAB_100d63b0;
								}
								if ((local_bd < 0x69) && (local_bd < 0x68))
									goto LAB_100d6d98;
							} else {
								if (local_bd < 0x70) {
									uVar6 = 8;
									goto LAB_100d68cc;
								}
							}
							goto LAB_100d7b28;
						}
						if ((unaff_r23 & 0xffffffff) != 0) {
							if (local_be == 2) {
								*(short *)pdVar17 = (short)lVar20;
							} else {
								fVar13 = (float)lVar20;
								if (local_be < 2) {
									if (local_be == 0) {
										*(float *)pdVar17 = fVar13;
									} else {
										*(char *)pdVar17 = (char)lVar20;
									}
								} else {
									if (local_be == 4) {
										*(float *)((int)pdVar17 + 4) = fVar13;
										*(int *)pdVar17 = (int)fVar13 >> 0x1f;
									} else {
										if (local_be < 4) {
											*(float *)pdVar17 = fVar13;
										}
									}
								}
							}
						}
					} else {
						if (local_bd == 0x78)
							goto LAB_100d68c8;
						if ((0x77 < local_bd) || (local_bd != 0x75))
							goto LAB_100d7b28;
						uVar6 = 10;
					LAB_100d68cc:
						lVar16 = lVar14 + unaff_r25;
						iVar15 = iVar9 << 1;
						iVar9 = iVar9 << 2;
					LAB_100d68d8:
						while (true) {
							if (local_be == 4) {
								unaff_r16 = (ulonglong)local_bc;
								lParm5 = uVar7 - 0x78;
								uParm6 = uVar7 - 0x7c;
								lParm7 = uVar7 - 0x80;
								lParm4 = lParm2;
								unaff_r15 = FUN_100d88c4(uVar6, local_bc, uParm1, lParm2, lParm5, uParm6,
								    (undefined4 *)lParm7, param_8, in_stack_fffffef8);
							} else {
								lParm5 = uVar7 - 0x78;
								uParm6 = uVar7 - 0x7c;
								lParm7 = uVar7 - 0x80;
								lParm4 = lParm2;
								unaff_r19 = FUN_100d858c(uVar6, local_bc, uParm1, lParm2, (int *)lParm5,
								    (undefined4 *)uParm6, (undefined4 *)lParm7, param_8,
								    in_stack_fffffef8);
							}
							if (local_78 == 0)
								goto LAB_100d7b28;
							lVar20 = lVar20 + (ulonglong)local_78;
							if (local_7c != 0) {
								if (local_be == 4) {
									bVar1 = unaff_r16 != 0;
									unaff_r16 = -unaff_r16;
									unaff_r15 = -((ulonglong)bVar1 + unaff_r15);
								} else {
									unaff_r19 = -unaff_r19;
								}
							}
							fVar13 = (float)unaff_r19;
							if (local_b8 == 0) {
								if ((unaff_r23 & 0xffffffff) != 0) {
									if (local_be == 2) {
										*(short *)pdVar17 = (short)unaff_r19;
									} else {
										if (local_be < 2) {
											if (local_be == 0) {
												*(float *)pdVar17 = fVar13;
											} else {
												*(char *)pdVar17 = (char)unaff_r19;
											}
										} else {
											if (local_be == 4) {
												*(float *)((int)pdVar17 + 4) = (float)unaff_r16;
												*(float *)pdVar17 = (float)unaff_r15;
											} else {
												if (local_be < 4) {
													*(float *)pdVar17 = fVar13;
												}
											}
										}
									}
									local_5c = local_5c + 1;
								}
								goto LAB_100d6d88;
							}
							if (local_c0 == '\0')
								break;
							local_84[0] = FUN_100dbf44(lParm2, 0, 0);
							if (local_84[0] == 0xff) {
							LAB_100d6cfc:
								FUN_100dbf44(lParm2, local_84[0], 1);
								goto LAB_100d6d88;
							}
							unaff_r25 = unaff_r25 + 1;
							iVar9 = iVar9 + 4;
							iVar15 = iVar15 + 2;
							lVar16 = lVar16 + 1;
							if (local_b4 <= (int)unaff_r25)
								goto LAB_100d6cfc;
							uVar5 = countLeadingZeros(-local_a8);
							uVar18 = (uint)uVar5 >> 5;
							if (local_a8 != 0) {
								iVar19 = 0;
								while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
									local_84[0] = FUN_100dbf44(lParm2, 0, 1);
									lVar20 = lVar20 + 1;
								}
								do {
									if (local_84[0] == 0xff)
										break;
									uVar5 = countLeadingZeros((int)local_b0[iVar19] - (int)(char)local_84[0]);
									uVar18 = (uint)uVar5 >> 5;
									if (local_84[0] != local_b0[iVar19])
										break;
									local_84[0] = FUN_100dbf44(lParm2, 0, 0);
									iVar19 = iVar19 + 1;
									lVar20 = lVar20 + 1;
								} while (iVar19 < (int)local_a8);
							}
							if ((uVar18 == 0) || (local_84[0] == 0xff))
								goto LAB_100d6d88;
							while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
								local_84[0] = FUN_100dbf44(lParm2, 0, 0);
								lVar20 = lVar20 + 1;
							}
							FUN_100dbf44(lParm2, local_84[0], 1);
						}
						if (local_be == 2) {
							*(undefined2 *)(iVar4 + iVar15) = (short)unaff_r19;
						} else {
							if (local_be < 2) {
								if (local_be == 0) {
									*(undefined *)lVar16 = (char)unaff_r19;
								}
							} else {
								if (local_be < 4) {
									*(float *)(iVar4 + iVar9) = fVar13;
								}
							}
						}
						local_84[0] = FUN_100dbf44(lParm2, 0, 0);
						if (local_84[0] == 0xff) {
						LAB_100d6b30:
							FUN_100dbf44(lParm2, local_84[0], 1);
						} else {
							unaff_r25 = unaff_r25 + 1;
							iVar9 = iVar9 + 4;
							iVar15 = iVar15 + 2;
							lVar16 = lVar16 + 1;
							if (local_b4 <= (int)unaff_r25)
								goto LAB_100d6b30;
							uVar5 = countLeadingZeros(-local_a8);
							uVar18 = (uint)uVar5 >> 5;
							if (local_a8 != 0) {
								iVar19 = 0;
								while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
									local_84[0] = FUN_100dbf44(lParm2, 0, 1);
									lVar20 = lVar20 + 1;
								}
								do {
									if (local_84[0] == 0xff)
										break;
									uVar5 = countLeadingZeros((int)local_b0[iVar19] - (int)(char)local_84[0]);
									uVar18 = (uint)uVar5 >> 5;
									if (local_84[0] != local_b0[iVar19])
										break;
									local_84[0] = FUN_100dbf44(lParm2, 0, 0);
									iVar19 = iVar19 + 1;
									lVar20 = lVar20 + 1;
								} while (iVar19 < (int)local_a8);
							}
							if ((uVar18 != 0) && (local_84[0] != 0xff)) {
								while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
									local_84[0] = FUN_100dbf44(lParm2, 0, 0);
									lVar20 = lVar20 + 1;
								}
								FUN_100dbf44(lParm2, local_84[0], 1);
								goto LAB_100d68d8;
							}
						}
						puVar3 = (undefined4 *)*param_11;
						*puVar3 = local_d4;
						puVar3[1] = local_d0;
						puVar3[2] = local_cc;
						puVar3[3] = local_c8;
						local_5c = local_5c + 1;
						param_11 = param_11 + 1;
					LAB_100d6d88:
						local_60 = local_60 + 1;
					}
				}
				goto LAB_100d7b1c;
			}
			if (local_bd == 0x58) {
			LAB_100d68c8:
				uVar6 = 0x10;
				goto LAB_100d68cc;
			}
			if (local_bd < 0x58) {
				if (local_bd != 0x45) {
					if (local_bd < 0x45) {
						if ((local_bd != 0x25) || (local_b8 != 0))
							goto LAB_100d7b28;
						while (local_84[0] = FUN_100dbf44(lParm2, 0, 0),
						    (*(byte *)(iVar11 + ((int)(char)local_84[0] & 0xffU)) & 6) != 0) {
							lVar20 = lVar20 + 1;
						}
						if (local_84[0] != 0x25) {
							FUN_100dbf44(lParm2, local_84[0], 1);
							goto LAB_100d7b28;
						}
						lVar20 = lVar20 + 1;
						goto LAB_100d7b1c;
					}
					if (local_bd != 0x47)
						goto LAB_100d7b28;
				}
			} else {
				if (local_bd != 0x61) {
					if (local_bd < 0x61) {
						if (local_bd == 0x5b)
							goto LAB_100d78b0;
						goto LAB_100d7b28;
					}
					if (local_bd < 99)
						goto LAB_100d7b28;
					if (local_bf == '\0') {
						local_bc = 1;
					}
					if (local_b8 == 0) {
						if ((unaff_r23 & 0xffffffff) == 0) {
							local_78 = 0;
							while ((bVar1 = local_bc != 0, local_bc = local_bc - 1, bVar1 && (local_84[0] = FUN_100dbf44(lParm2, 0, 0), local_84[0] != 0xff))) {
								local_78 = local_78 + 1;
							}
							if (local_78 == 0)
								goto LAB_100d7b28;
						} else {
							local_78 = 0;
							while ((bVar1 = local_bc != 0, local_bc = local_bc - 1, bVar1 && (local_84[0] = FUN_100dbf44(lParm2, 0, 0), local_84[0] != 0xff))) {
								if (local_be == 7) {
									FUN_100d34a8((short *)unaff_r23, (char *)local_84, 1);
								} else {
									*(byte *)(short *)unaff_r23 = local_84[0];
								}
								unaff_r23 = unaff_r23 + 1;
								local_78 = local_78 + 1;
							}
							if (local_78 == 0)
								goto LAB_100d7b28;
							lVar20 = lVar20 + (ulonglong)local_78;
							local_5c = local_5c + 1;
						}
					} else {
						if (local_c0 == '\0') {
							if (iVar9 == 0) {
								local_b0 = local_ac;
								local_a8 = (uint)(*local_ac != '\0');
							}
							uVar6 = (ulonglong)(uint)(iVar9 << 2);
							uVar12 = (ulonglong)(uint)(iVar9 << 1);
							lVar16 = (uVar7 - 0xd4) + unaff_r25;
							while (true) {
								uVar12 = uVar12 + 2;
								uVar6 = uVar6 + 4;
								if (local_be == 2) {
									if (2 < (int)local_bc)
										goto LAB_100d7b28;
									unaff_r26 = (uVar7 - 0xd4) + (uVar12 - (ulonglong)local_bc);
								} else {
									if (local_be < 2) {
										if ((local_be == 0) && (unaff_r26 = lVar16, 1 < (int)local_bc))
											goto LAB_100d7b28;
									} else {
										if (local_be < 4) {
											if (4 < (int)local_bc)
												goto LAB_100d7b28;
											unaff_r26 = (uVar7 - 0xd4) + (uVar6 - (ulonglong)local_bc);
										}
									}
								}
								local_78 = 0;
								uVar18 = local_bc;
								while ((bVar1 = uVar18 != 0, uVar18 = uVar18 - 1, bVar1 && (local_84[0] = FUN_100dbf44(lParm2, 0, 0), local_84[0] != 0xff))) {
									*(byte *)unaff_r26 = local_84[0];
									unaff_r26 = unaff_r26 + 1;
									local_78 = local_78 + 1;
								}
								if (local_78 == 0)
									goto LAB_100d7b28;
								lVar20 = lVar20 + (ulonglong)local_78;
								local_84[0] = FUN_100dbf44(lParm2, 0, 0);
								if (local_84[0] == 0xff)
									break;
								unaff_r25 = unaff_r25 + 1;
								lVar16 = lVar16 + 1;
								if (local_b4 <= (int)unaff_r25)
									break;
								uVar5 = countLeadingZeros(-local_a8);
								uVar18 = (uint)uVar5 >> 5;
								if (local_a8 != 0) {
									iVar9 = 0;
									while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
										local_84[0] = FUN_100dbf44(lParm2, 0, 1);
										lVar20 = lVar20 + 1;
									}
									do {
										if (local_84[0] == 0xff)
											break;
										uVar5 = countLeadingZeros((int)local_b0[iVar9] - (int)(char)local_84[0]);
										uVar18 = (uint)uVar5 >> 5;
										if (local_84[0] != local_b0[iVar9])
											break;
										local_84[0] = FUN_100dbf44(lParm2, 0, 0);
										iVar9 = iVar9 + 1;
										lVar20 = lVar20 + 1;
									} while (iVar9 < (int)local_a8);
								}
								if ((uVar18 == 0) || (local_84[0] == 0xff))
									goto LAB_100d7480;
								while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
									local_84[0] = FUN_100dbf44(lParm2, 0, 0);
									lVar20 = lVar20 + 1;
								}
								FUN_100dbf44(lParm2, local_84[0], 1);
							}
							FUN_100dbf44(lParm2, local_84[0], 1);
						LAB_100d7480:
							puVar3 = (undefined4 *)*param_11;
							*puVar3 = local_d4;
							puVar3[1] = local_d0;
							puVar3[2] = local_cc;
							puVar3[3] = local_c8;
							local_5c = local_5c + 1;
							param_11 = param_11 + 1;
						} else {
							while (true) {
								local_78 = 0;
								while ((bVar1 = local_bc != 0, local_bc = local_bc - 1, bVar1 && (local_84[0] = FUN_100dbf44(lParm2, 0, 0), local_84[0] != 0xff))) {
									local_78 = local_78 + 1;
								}
								if (local_78 == 0)
									goto LAB_100d7b28;
								local_84[0] = FUN_100dbf44(lParm2, 0, 0);
								if ((local_84[0] == 0xff) || (unaff_r25 = unaff_r25 + 1, local_b4 <= (int)unaff_r25))
									break;
								uVar5 = countLeadingZeros(-local_a8);
								uVar18 = (uint)uVar5 >> 5;
								if (local_a8 != 0) {
									iVar9 = 0;
									while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
										local_84[0] = FUN_100dbf44(lParm2, 0, 1);
										lVar20 = lVar20 + 1;
									}
									do {
										if (local_84[0] == 0xff)
											break;
										uVar5 = countLeadingZeros((int)local_b0[iVar9] - (int)(char)local_84[0]);
										uVar18 = (uint)uVar5 >> 5;
										if (local_84[0] != local_b0[iVar9])
											break;
										local_84[0] = FUN_100dbf44(lParm2, 0, 0);
										iVar9 = iVar9 + 1;
										lVar20 = lVar20 + 1;
									} while (iVar9 < (int)local_a8);
								}
								if ((uVar18 == 0) || (local_84[0] == 0xff))
									goto LAB_100d77b0;
								while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
									local_84[0] = FUN_100dbf44(lParm2, 0, 0);
									lVar20 = lVar20 + 1;
								}
								FUN_100dbf44(lParm2, local_84[0], 1);
							}
							FUN_100dbf44(lParm2, local_84[0], 1);
						}
					}
				LAB_100d77b0:
					local_60 = local_60 + 1;
					goto LAB_100d7b1c;
				}
			}
		LAB_100d6d98:
			iVar9 = iVar9 << 2;
		LAB_100d6d9c:
			while (true) {
				lParm4 = uVar7 - 0x78;
				lParm5 = uVar7 - 0x80;
				dVar21 = FUN_100d7ecc(local_bc, uParm1, lParm2, (int *)lParm4, (int *)lParm5, (char)uParm6,
				    (char)lParm7, param_8, in_stack_fffffef8);
				if (local_78 == 0)
					goto LAB_100d7b28;
				lVar20 = lVar20 + (ulonglong)local_78;
				if (local_b8 == 0) {
					if ((unaff_r23 & 0xffffffff) != 0) {
						if (local_be == 5) {
							*pdVar17 = dVar21;
						} else {
							if (local_be < 5) {
								if (local_be == 0) {
									*(float *)pdVar17 = (float)dVar21;
								}
							} else {
								if (local_be < 7) {
									*pdVar17 = dVar21;
								}
							}
						}
						local_5c = local_5c + 1;
					}
					goto LAB_100d7198;
				}
				if (local_c0 == '\0')
					break;
				local_84[0] = FUN_100dbf44(lParm2, 0, 0);
				if (local_84[0] == 0xff) {
				LAB_100d7124:
					FUN_100dbf44(lParm2, local_84[0], 1);
					goto LAB_100d7198;
				}
				unaff_r25 = unaff_r25 + 1;
				iVar9 = iVar9 + 4;
				if (local_b4 <= (int)unaff_r25)
					goto LAB_100d7124;
				uVar5 = countLeadingZeros(-local_a8);
				uVar18 = (uint)uVar5 >> 5;
				if (local_a8 != 0) {
					iVar15 = 0;
					while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
						local_84[0] = FUN_100dbf44(lParm2, 0, 1);
						lVar20 = lVar20 + 1;
					}
					do {
						if (local_84[0] == 0xff)
							break;
						uVar5 = countLeadingZeros((int)local_b0[iVar15] - (int)(char)local_84[0]);
						uVar18 = (uint)uVar5 >> 5;
						if (local_84[0] != local_b0[iVar15])
							break;
						local_84[0] = FUN_100dbf44(lParm2, 0, 0);
						iVar15 = iVar15 + 1;
						lVar20 = lVar20 + 1;
					} while (iVar15 < (int)local_a8);
				}
				if ((uVar18 == 0) || (local_84[0] == 0xff))
					goto LAB_100d7198;
				while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
					local_84[0] = FUN_100dbf44(lParm2, 0, 0);
					lVar20 = lVar20 + 1;
				}
				FUN_100dbf44(lParm2, local_84[0], 1);
			}
			*(float *)(iVar4 + iVar9) = (float)dVar21;
			if (local_be == 0) {
				local_b4 = 4;
			}
			local_84[0] = FUN_100dbf44(lParm2, 0, 0);
			if (local_84[0] == 0xff) {
			LAB_100d6f60:
				FUN_100dbf44(lParm2, local_84[0], 1);
			} else {
				unaff_r25 = unaff_r25 + 1;
				iVar9 = iVar9 + 4;
				if (local_b4 <= (int)unaff_r25)
					goto LAB_100d6f60;
				uVar5 = countLeadingZeros(-local_a8);
				uVar18 = (uint)uVar5 >> 5;
				if (local_a8 != 0) {
					iVar15 = 0;
					while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
						local_84[0] = FUN_100dbf44(lParm2, 0, 1);
						lVar20 = lVar20 + 1;
					}
					do {
						if (local_84[0] == 0xff)
							break;
						uVar5 = countLeadingZeros((int)local_b0[iVar15] - (int)(char)local_84[0]);
						uVar18 = (uint)uVar5 >> 5;
						if (local_84[0] != local_b0[iVar15])
							break;
						local_84[0] = FUN_100dbf44(lParm2, 0, 0);
						iVar15 = iVar15 + 1;
						lVar20 = lVar20 + 1;
					} while (iVar15 < (int)local_a8);
				}
				if ((uVar18 != 0) && (local_84[0] != 0xff)) {
					while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
						local_84[0] = FUN_100dbf44(lParm2, 0, 0);
						lVar20 = lVar20 + 1;
					}
					FUN_100dbf44(lParm2, local_84[0], 1);
					goto LAB_100d6d9c;
				}
			}
			puVar3 = (undefined4 *)*param_11;
			*puVar3 = local_d4;
			puVar3[1] = local_d0;
			puVar3[2] = local_cc;
			puVar3[3] = local_c8;
			local_5c = local_5c + 1;
			param_11 = param_11 + 1;
		LAB_100d7198:
			local_60 = local_60 + 1;
			goto LAB_100d7b1c;
		}
		uVar6 = 10;
	LAB_100d63b0:
		lVar16 = lVar14 + unaff_r25;
		iVar15 = iVar9 << 1;
		iVar9 = iVar9 << 2;
	LAB_100d63bc:
		while (true) {
			if (local_be == 4) {
				unaff_r16 = (ulonglong)local_bc;
				lParm5 = uVar7 - 0x78;
				uParm6 = uVar7 - 0x7c;
				lParm7 = uVar7 - 0x80;
				lParm4 = lParm2;
				unaff_r15 = FUN_100d88c4(uVar6, local_bc, uParm1, lParm2, lParm5, uParm6, (undefined4 *)lParm7,
				    param_8, in_stack_fffffef8);
			} else {
				lParm5 = uVar7 - 0x78;
				uParm6 = uVar7 - 0x7c;
				lParm7 = uVar7 - 0x80;
				lParm4 = lParm2;
				unaff_r19 = FUN_100d858c(uVar6, local_bc, uParm1, lParm2, (int *)lParm5, (undefined4 *)uParm6,
				    (undefined4 *)lParm7, param_8, in_stack_fffffef8);
			}
			if (local_78 == 0)
				goto LAB_100d7b28;
			lVar20 = lVar20 + (ulonglong)local_78;
			if (local_be == 4) {
				local_64 = (float)unaff_r16;
				local_68 = (float)unaff_r15;
				if (local_7c != 0) {
					local_64 = (float)-(int)local_64;
					local_68 = (float)-((uint)(unaff_r16 != 0) + (int)(float)unaff_r15);
				}
			} else {
				unaff_r14 = unaff_r19;
				if (local_7c != 0) {
					unaff_r14 = -unaff_r19;
				}
			}
			fVar13 = (float)unaff_r14;
			if (local_b8 == 0) {
				if ((unaff_r23 & 0xffffffff) != 0) {
					if (local_be == 2) {
						*(short *)pdVar17 = (short)unaff_r14;
					} else {
						if (local_be < 2) {
							if (local_be == 0) {
								*(float *)pdVar17 = fVar13;
							} else {
								*(char *)pdVar17 = (char)unaff_r14;
							}
						} else {
							if (local_be == 4) {
								*(float *)((int)pdVar17 + 4) = local_64;
								*(float *)pdVar17 = local_68;
							} else {
								if (local_be < 4) {
									*(float *)pdVar17 = fVar13;
								}
							}
						}
					}
					local_5c = local_5c + 1;
				}
				goto LAB_100d68a8;
			}
			if (local_c0 == '\0')
				break;
			local_84[0] = FUN_100dbf44(lParm2, 0, 0);
			if (local_84[0] == 0xff) {
			LAB_100d6810:
				FUN_100dbf44(lParm2, local_84[0], 1);
				goto LAB_100d68a8;
			}
			unaff_r25 = unaff_r25 + 1;
			iVar9 = iVar9 + 4;
			iVar15 = iVar15 + 2;
			lVar16 = lVar16 + 1;
			if (local_b4 <= (int)unaff_r25)
				goto LAB_100d6810;
			uVar5 = countLeadingZeros(-local_a8);
			uVar18 = (uint)uVar5 >> 5;
			if (local_a8 != 0) {
				iVar19 = 0;
				while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
					local_84[0] = FUN_100dbf44(lParm2, 0, 1);
					lVar20 = lVar20 + 1;
				}
				do {
					if (local_84[0] == 0xff)
						break;
					uVar5 = countLeadingZeros((int)local_b0[iVar19] - (int)(char)local_84[0]);
					uVar18 = (uint)uVar5 >> 5;
					if (local_84[0] != local_b0[iVar19])
						break;
					local_84[0] = FUN_100dbf44(lParm2, 0, 0);
					iVar19 = iVar19 + 1;
					lVar20 = lVar20 + 1;
				} while (iVar19 < (int)local_a8);
			}
			if ((uVar18 == 0) || (local_84[0] == 0xff))
				goto LAB_100d68a8;
			while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
				local_84[0] = FUN_100dbf44(lParm2, 0, 0);
				lVar20 = lVar20 + 1;
			}
			FUN_100dbf44(lParm2, local_84[0], 1);
		}
		if (local_be == 2) {
			*(undefined2 *)(iVar4 + iVar15) = (short)unaff_r14;
		} else {
			if (local_be < 2) {
				if (local_be == 0) {
					*(undefined *)lVar16 = (char)unaff_r14;
				}
			} else {
				if (local_be < 4) {
					*(float *)(iVar4 + iVar9) = fVar13;
				}
			}
		}
		local_84[0] = FUN_100dbf44(lParm2, 0, 0);
		if (local_84[0] == 0xff) {
		LAB_100d6644:
			FUN_100dbf44(lParm2, local_84[0], 1);
		} else {
			unaff_r25 = unaff_r25 + 1;
			iVar9 = iVar9 + 4;
			iVar15 = iVar15 + 2;
			lVar16 = lVar16 + 1;
			if (local_b4 <= (int)unaff_r25)
				goto LAB_100d6644;
			uVar5 = countLeadingZeros(-local_a8);
			uVar18 = (uint)uVar5 >> 5;
			if (local_a8 != 0) {
				iVar19 = 0;
				while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
					local_84[0] = FUN_100dbf44(lParm2, 0, 1);
					lVar20 = lVar20 + 1;
				}
				do {
					if (local_84[0] == 0xff)
						break;
					uVar5 = countLeadingZeros((int)local_b0[iVar19] - (int)(char)local_84[0]);
					uVar18 = (uint)uVar5 >> 5;
					if (local_84[0] != local_b0[iVar19])
						break;
					local_84[0] = FUN_100dbf44(lParm2, 0, 0);
					iVar19 = iVar19 + 1;
					lVar20 = lVar20 + 1;
				} while (iVar19 < (int)local_a8);
			}
			if ((uVar18 != 0) && (local_84[0] != 0xff)) {
				while ((*(byte *)(iVar11 + (uint)local_84[0]) & 6) != 0) {
					local_84[0] = FUN_100dbf44(lParm2, 0, 0);
					lVar20 = lVar20 + 1;
				}
				FUN_100dbf44(lParm2, local_84[0], 1);
				goto LAB_100d63bc;
			}
		}
		puVar3 = (undefined4 *)*param_11;
		*puVar3 = local_d4;
		puVar3[1] = local_d0;
		puVar3[2] = local_cc;
		puVar3[3] = local_c8;
		local_5c = local_5c + 1;
		param_11 = param_11 + 1;
	LAB_100d68a8:
		local_60 = local_60 + 1;
	} while (true);
}

undefined8
FUN_100d7c04(char *param_1, undefined8 param_2, undefined8 param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined8 uVar1;
	char *local_8;
	undefined4 local_4;

	if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
		uVar1 = 0xffffffffffffffff;
	} else {
		local_4 = 0;
		local_8 = param_1;
		uVar1 = FUN_100d60d8((ulonglong)_DAT_100f21b4, &local_8, param_2, param_3, param_5, param_6, param_7,
		    param_8);
	}
	return uVar1;
}

void FUN_100d7c60(char *param_1, uint param_2, undefined4 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11, undefined4 param_12,
    undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16,
    undefined4 param_17)

{
	undefined4 in_stack_ffffffc8;

	FUN_100d7c04(param_1, (ulonglong)param_2, ZEXT48(register0x0000000c) + 0x20, (undefined)param_4,
	    (undefined)param_5, (undefined)param_6, (undefined)param_7, (undefined)param_8,
	    in_stack_ffffffc8);
	return;
}

byte *FUN_100d7da8(int param_1, int param_2)

{
	byte bVar1;
	byte *pbVar2;
	byte local_20[32];

	pbVar2 = (byte *)(param_2 + -1);
	while (true) {
		pbVar2 = pbVar2 + 1;
		bVar1 = *pbVar2;
		if (bVar1 == 0)
			break;
		local_20[(int)(uint)bVar1 >> 3] = local_20[(int)(uint)bVar1 >> 3] | (byte)(1 << (ulonglong)((uint)bVar1 & 7));
	}
	pbVar2 = (byte *)(param_1 + -1);
	do {
		pbVar2 = pbVar2 + 1;
		bVar1 = *pbVar2;
		if (bVar1 == 0) {
			return (byte *)0x0;
		}
	} while (((ulonglong)(uint)(1 << (ulonglong)((uint)bVar1 & 7)) & (ulonglong)local_20[(int)(uint)bVar1 >> 3]) == 0);
	return pbVar2;
}

double FUN_100d7ecc(int param_1, undefined8 param_2, undefined8 param_3, int *param_4, int *param_5,
    undefined param_6, undefined param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	byte bVar2;
	byte bVar3;
	char cVar4;
	undefined4 uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	double *pdVar10;
	byte **ppbVar11;
	undefined4 *puVar12;
	longlong lVar13;
	uint uVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	longlong lVar18;
	undefined uVar19;
	ulonglong uVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	longlong lVar24;
	undefined uVar25;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	uint uVar26;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	longlong lVar27;
	undefined8 unaff_r26;
	longlong lVar28;
	int iVar29;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	int iVar30;
	undefined8 unaff_r31;
	ulonglong uVar31;
	uint uVar32;
	double dVar33;
	undefined auStack115[51];
	undefined4 local_40;
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

	puVar12 = _DAT_100f3c24;
	ppbVar11 = _DAT_100f21c4;
	lVar24 = (longlong)param_8;
	lVar18 = (longlong)(int)param_5;
	lVar16 = (longlong)(int)param_4;
	local_40 = (undefined4)((ulonglong)unaff_r16 >> 0x20);
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
	uVar20 = ZEXT48(_DAT_100f3c24);
	lVar1 = ZEXT48(register0x0000000c) - 0xb0;
	iVar7 = (int)lVar1;
	*(BADSPACEBASE **)iVar7 = register0x0000000c;
	uVar22 = ZEXT48(*ppbVar11);
	bVar2 = **ppbVar11;
	uVar5 = puVar12[1];
	*(undefined4 *)(iVar7 + 0x38) = *puVar12;
	*(undefined4 *)(iVar7 + 0x3c) = uVar5;
	uVar5 = puVar12[3];
	*(undefined4 *)(iVar7 + 0x40) = puVar12[2];
	*(undefined4 *)(iVar7 + 0x44) = uVar5;
	pdVar10 = _DAT_100f21c0;
	uVar5 = puVar12[5];
	*(undefined4 *)(iVar7 + 0x48) = puVar12[4];
	*(undefined4 *)(iVar7 + 0x4c) = uVar5;
	iVar6 = _DAT_100f1a6c;
	uVar5 = puVar12[7];
	*(undefined4 *)(iVar7 + 0x50) = puVar12[6];
	*(undefined4 *)(iVar7 + 0x54) = uVar5;
	uVar5 = puVar12[9];
	*(undefined4 *)(iVar7 + 0x58) = puVar12[8];
	*(undefined4 *)(iVar7 + 0x5c) = uVar5;
	*(undefined2 *)(iVar7 + 0x60) = *(undefined2 *)(puVar12 + 10);
	*param_5 = 0;
	uVar31 = 1;
	iVar29 = 0;
	bVar9 = false;
	bVar8 = false;
	lVar28 = 0;
	lVar27 = 0;
	iVar30 = 1;
	lVar13 = FUN_100dbf44(param_3, 0, 0);
	while (true) {
		uVar25 = (undefined)lVar24;
		uVar23 = (undefined)uVar22;
		uVar21 = (undefined)uVar20;
		uVar19 = (undefined)lVar18;
		uVar17 = (undefined)lVar16;
		if (((param_1 < iVar30) || (uVar14 = (uint)lVar13, uVar14 == 0xffffffff)) || (uVar32 = (uint)uVar31, (uVar31 & 0x1800) != 0))
			break;
		if (uVar32 == 0x20) {
			if ((*(byte *)(iVar6 + (uVar14 & 0xff)) & 0x10) == 0) {
				uVar31 = 0x40;
			} else {
				if (*(byte *)(iVar7 + 0x3c) < 0x14) {
					if ((uVar14 != 0x30) || (*(byte *)(iVar7 + 0x3c) != 0)) {
						bVar3 = *(byte *)(iVar7 + 0x3c);
						*(char *)(iVar7 + 0x3c) = bVar3 + 1;
						(&stack0xffffff88)[(uint)bVar3 + 5] = (char)lVar13;
					}
					lVar27 = lVar27 + -1;
				}
				iVar30 = iVar30 + 1;
				lVar13 = FUN_100dbf44(param_3, 0, 0);
			}
		} else {
			if (uVar32 < 0x20) {
				if (uVar32 == 4) {
					if (uVar14 == 0x30) {
						iVar30 = iVar30 + 1;
						lVar13 = FUN_100dbf44(param_3, 0, 0);
					} else {
						uVar31 = 8;
					}
				} else {
					uVar26 = (uint)bVar2;
					if (uVar32 < 4) {
						if (uVar32 == 2) {
							if (uVar14 == uVar26) {
								uVar31 = 0x10;
								iVar30 = iVar30 + 1;
								lVar13 = FUN_100dbf44(param_3, 0, 0);
							} else {
								if ((*(byte *)(iVar6 + (uVar14 & 0xff)) & 0x10) == 0) {
									uVar31 = 0x1000;
								} else {
									if (uVar14 == 0x30) {
										uVar31 = 4;
										iVar30 = iVar30 + 1;
										lVar13 = FUN_100dbf44(param_3, 0, 0);
									} else {
										uVar31 = 8;
									}
								}
							}
						} else {
							if ((uVar32 < 2) && (uVar32 != 0)) {
								if ((*(byte *)(iVar6 + (uVar14 & 0xff)) & 6) == 0) {
									if (uVar14 == 0x2b) {
										iVar30 = iVar30 + 1;
										lVar13 = FUN_100dbf44(param_3, 0, 0);
									} else {
										if (uVar14 == 0x2d) {
											iVar30 = iVar30 + 1;
											lVar13 = FUN_100dbf44(param_3, 0, 0);
											bVar9 = true;
										}
									}
									uVar31 = 2;
								} else {
									lVar13 = FUN_100dbf44(param_3, 0, 0);
									iVar29 = iVar29 + 1;
								}
							}
						}
					} else {
						if (uVar32 == 0x10) {
							if ((*(byte *)(iVar6 + (uVar14 & 0xff)) & 0x10) == 0) {
								uVar31 = 0x1000;
							} else {
								uVar31 = 0x20;
							}
						} else {
							if ((uVar32 < 0x10) && (uVar32 == 8)) {
								if ((*(byte *)(iVar6 + (uVar14 & 0xff)) & 0x10) == 0) {
									if (uVar14 == uVar26) {
										uVar31 = 0x20;
										iVar30 = iVar30 + 1;
										lVar13 = FUN_100dbf44(param_3, 0, 0);
									} else {
										uVar31 = 0x40;
									}
								} else {
									bVar3 = *(byte *)(iVar7 + 0x3c);
									if (bVar3 < 0x14) {
										*(char *)(iVar7 + 0x3c) = bVar3 + 1;
										(&stack0xffffff88)[(uint)bVar3 + 5] = (char)(uVar14 & 0xff);
									} else {
										lVar27 = lVar27 + 1;
									}
									iVar30 = iVar30 + 1;
									lVar13 = FUN_100dbf44(param_3, 0, 0);
								}
							}
						}
					}
				}
			} else {
				if (uVar32 == 0x100) {
					if ((*(byte *)(iVar6 + (uVar14 & 0xff)) & 0x10) == 0) {
						uVar31 = 0x1000;
					} else {
						if (uVar14 == 0x30) {
							uVar31 = 0x200;
							iVar30 = iVar30 + 1;
							lVar13 = FUN_100dbf44(param_3, 0, 0);
						} else {
							uVar31 = 0x400;
						}
					}
				} else {
					if (uVar32 < 0x100) {
						if (uVar32 == 0x80) {
							if (uVar14 == 0x2b) {
								iVar30 = iVar30 + 1;
								lVar13 = FUN_100dbf44(param_3, 0, 0);
							} else {
								if (uVar14 == 0x2d) {
									iVar30 = iVar30 + 1;
									lVar13 = FUN_100dbf44(param_3, 0, 0);
									bVar8 = true;
								}
							}
							uVar31 = 0x100;
						} else {
							if ((uVar32 < 0x80) && (uVar32 == 0x40)) {
								if ((uVar14 == 0x45) || (uVar14 == 0x65)) {
									uVar31 = 0x80;
									iVar30 = iVar30 + 1;
									lVar13 = FUN_100dbf44(param_3, 0, 0);
								} else {
									uVar31 = 0x800;
								}
							}
						}
					} else {
						if (uVar32 == 0x400) {
							if ((*(byte *)(iVar6 + (uVar14 & 0xff)) & 0x10) == 0) {
								uVar31 = 0x800;
							} else {
								lVar28 = lVar13 + lVar28 * 10 + -0x30;
								if (0x7fff < (int)lVar28) {
									*param_5 = 1;
								}
								iVar30 = iVar30 + 1;
								lVar13 = FUN_100dbf44(param_3, 0, 0);
							}
						} else {
							if ((uVar32 < 0x400) && (uVar32 == 0x200)) {
								if (uVar14 == 0x30) {
									iVar30 = iVar30 + 1;
									lVar13 = FUN_100dbf44(param_3, 0, 0);
								} else {
									uVar31 = 0x400;
								}
							}
						}
					}
				}
			}
		}
	}
	if ((uVar31 & 0xe2c) == 0) {
		*param_4 = 0;
	} else {
		*param_4 = iVar30 + iVar29 + -1;
	}
	uVar15 = 1;
	FUN_100dbf44(param_3);
	iVar6 = *(int *)(iVar7 + 0x14);
	if (bVar8) {
		lVar28 = -lVar28;
	}
	lVar13 = lVar1 + (ulonglong) * (byte *)(iVar7 + 0x3c) + 0x3d;
	uVar20 = (ulonglong) * (byte *)(iVar7 + 0x3c);
	while (((int)uVar20 != 0 && (lVar13 = lVar13 + -1, *(char *)lVar13 == '0'))) {
		lVar27 = lVar27 + 1;
		uVar20 = uVar20 - 1;
	}
	*(undefined *)(iVar7 + 0x3c) = (char)uVar20;
	cVar4 = *(char *)(iVar7 + 0x3c);
	if (cVar4 == '\0') {
		*(undefined *)(iVar7 + 0x3c) = 1;
		*(undefined *)(iVar7 + 0x3d) = 0x30;
	}
	iVar29 = (int)(lVar28 + lVar27);
	if ((iVar29 < -0x8000) || (0x7fff < iVar29)) {
		*param_5 = 1;
	}
	if (*param_5 == 0) {
		*(undefined2 *)(iVar7 + 0x3a) = (short)(lVar28 + lVar27);
		dVar33 = (double)dec2num((char)lVar1 + '8', cVar4, uVar15, uVar17, uVar19, uVar21, uVar23, uVar25,
		    *(undefined *)(iVar7 + 0xb), *(undefined *)(iVar7 + 0xf),
		    *(undefined4 *)(iVar7 + 0x14));
		iVar7 = *(int *)(iVar7 + 0x14);
		if ((*(double *)(iVar7 + -0x48e0) == dVar33) || (**(double **)(iVar7 + -0x6e14) <= dVar33)) {
			if (**(double **)(iVar7 + -0x6e18) < dVar33) {
				*param_5 = 1;
				dVar33 = *pdVar10;
			}
		} else {
			*param_5 = 1;
			dVar33 = *(double *)(iVar7 + -0x48d8);
		}
		if (bVar9) {
			dVar33 = (double)((ulonglong)dVar33 & 0x7fffffffffffffff | ~(ulonglong)dVar33 & 0x8000000000000000);
		}
	} else {
		if (bVar8) {
			dVar33 = *(double *)(iVar6 + -0x48d8);
		} else {
			if (bVar9) {
				dVar33 = (double)((ulonglong)*pdVar10 & 0x7fffffffffffffff | ~(ulonglong)*pdVar10 & 0x8000000000000000);
			} else {
				dVar33 = *pdVar10;
			}
		}
	}
	return dVar33;
}

// WARNING: Removing unreachable block (ram,0x100d888c)

undefined8
FUN_100d858c(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4, int *param_5,
    undefined4 *param_6, undefined4 *param_7, undefined param_8, undefined4 param_9)

{
	undefined8 uVar1;
	undefined8 unaff_r19;
	uint uVar2;
	int iVar3;
	undefined **local_5c;

	*param_7 = 0;
	*param_6 = 0;
	uVar2 = 1;
	iVar3 = 0;
	if ((((param_1 < 0) || ((int)param_1 == 1)) || (0x24 < (int)param_1)) || (param_2 < 1)) {
		uVar2 = 0x40;
		local_5c = &toc;
	} else {
		iVar3 = 1;
		unaff_r19 = FUN_100dbf44(param_4, 0, 0);
	}
	while (((iVar3 <= param_2 && ((int)unaff_r19 != -1)) && ((uVar2 & 0x60) == 0))) {
		if (uVar2 < 0x11) {
			// WARNING: Could not recover jumptable at 0x100d8648. Too many branches
			// WARNING: Treating indirect jump as call
			uVar1 = (**(code **)(local_5c[-0x14e9] + uVar2 * 4))();
			return uVar1;
		}
	}
	*param_5 = 0;
	FUN_100dbf44(param_4, unaff_r19, 1);
	return 0;
}

// WARNING: Removing unreachable block (ram,0x100d8c44)

undefined8
FUN_100d88c4(ulonglong param_1, int param_2, ulonglong param_3, undefined8 param_4, undefined8 param_5,
    ulonglong param_6, undefined4 *param_7, undefined param_8, undefined4 param_9)

{
	ulonglong uVar1;
	undefined8 uVar2;
	undefined8 unaff_r20;
	int iVar3;
	uint uVar4;
	int iVar5;
	uint local_6c;

	uVar1 = ZEXT48(&toc);
	*param_7 = 0;
	*(undefined4 *)param_6 = 0;
	uVar4 = 1;
	iVar3 = 0;
	iVar5 = (int)param_1;
	if (((((longlong)param_1 < 0) || (iVar5 == 1)) || (0x24 < iVar5)) || (param_2 < 1)) {
		uVar4 = 0x40;
		uVar2 = param_5;
	} else {
		iVar3 = 1;
		param_3 = 0;
		uVar2 = param_5;
		unaff_r20 = FUN_100dbf44(param_4, 0);
		uVar1 = (ulonglong)local_6c;
	}
	if (iVar5 != 0) {
		FUN_100001dc(0xffffffffffffffff, 0xffffffffffffffff,
		    param_3 & 0xffffffff00000000 | (ulonglong)(uint)(iVar5 >> 0x1f), param_1, uVar2,
		    param_6);
	}
	while (((iVar3 <= param_2 && ((int)unaff_r20 != -1)) && ((uVar4 & 0x60) == 0))) {
		if (uVar4 < 0x11) {
			// WARNING: Could not recover jumptable at 0x100d899c. Too many branches
			// WARNING: Treating indirect jump as call
			uVar2 = (**(code **)(*(int *)((int)uVar1 + -0x53a8) + uVar4 * 4))();
			return uVar2;
		}
	}
	*(undefined4 *)param_5 = 0;
	FUN_100dbf44(param_4, unaff_r20, 1);
	return 0;
}

longlong FUN_100d8c80(int param_1, int *param_2, longlong param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined4 in_stack_ffffffa8;
	int local_20;
	int local_1c;
	int local_18[6];

	ppuVar1 = &toc;
	lVar2 = FUN_100d858c(param_3, 0x7fffffff, (ulonglong)_DAT_100f21b4, ZEXT48(register0x0000000c) - 0x28, local_18, &local_1c, &local_20, param_8, in_stack_ffffffa8);
	if (param_2 != (int *)0x0) {
		*param_2 = param_1 + local_18[0];
	}
	if (local_20 == 0) {
		if (local_1c != 0) {
			lVar2 = -lVar2;
		}
	} else {
		*(undefined4 *)ppuVar1[-0x1b82] = 0x22;
		lVar2 = -1;
	}
	return lVar2;
}

ulonglong FUN_100d8d28(int param_1, int *param_2, longlong param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined **ppuVar1;
	ulonglong uVar2;
	undefined4 in_stack_ffffffa8;
	int local_20;
	int local_1c;
	int local_18[6];

	ppuVar1 = &toc;
	uVar2 = FUN_100d858c(param_3, 0x7fffffff, (ulonglong)_DAT_100f21b4, ZEXT48(register0x0000000c) - 0x28, local_18, &local_1c, &local_20, param_8, in_stack_ffffffa8);
	if (param_2 != (int *)0x0) {
		*param_2 = param_1 + local_18[0];
	}
	if (((local_20 == 0) && ((local_1c != 0 || ((uVar2 & 0xffffffff) < 0x80000000)))) && ((local_1c == 0 || ((uVar2 & 0xffffffff) < 0x80000001)))) {
		if (local_1c != 0) {
			uVar2 = -uVar2;
		}
	} else {
		if (local_1c == 0) {
			uVar2 = 0xffffffff7fffffff;
		} else {
			uVar2 = 0xffffffff80000000;
		}
		*(undefined4 *)ppuVar1[-0x1b82] = 0x22;
	}
	return uVar2;
}

undefined8
FUN_100d8e3c(int param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	bool bVar1;
	longlong lVar2;
	undefined8 uVar3;

	uVar3 = 0;
	lVar2 = FUN_100d3428(param_1, 4);
	if ((int)lVar2 == 0) {
		bVar1 = true;
		lVar2 = FUN_100d3428(param_1, 100);
		if (((int)lVar2 == 0) && (lVar2 = FUN_100d3428(param_1, 400), (int)lVar2 != 100)) {
			bVar1 = false;
		}
		if (bVar1) {
			uVar3 = 1;
		}
	}
	return uVar3;
}

void FUN_100d8ec8(uint param_1, uint *param_2, undefined param_3, undefined param_4, undefined param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	short sVar1;
	uint uVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	undefined8 uVar10;
	ulonglong uVar11;
	longlong lVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	uint uVar15;
	uint uVar16;
	undefined4 in_stack_ffffffb8;

	lVar12 = (longlong)param_8;
	lVar8 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	uVar4 = ZEXT48(&toc);
	if (param_2 != (uint *)0x0) {
		uVar15 = (uint)(((longlong)(int)param_1 & 0xffffffffU) * 0xc22e4507 >> 0x30);
		uVar11 = (ulonglong)uVar15;
		lVar9 = uVar11 + 1;
		uVar4._4_4_ = (int)((ulonglong)(lVar9 * 0x24924925) >> 0x20);
		lVar7 = (longlong)(int)uVar15 * 0x15180;
		uVar10 = 0xffffffffffffffff;
		param_2[8] = 0xffffffff;
		param_2[6] = (int)lVar9 + (((uint)((int)lVar9 - uVar4._4_4_) >> 1) + uVar4._4_4_ >> 2) * -7;
		uVar13 = (longlong)(int)param_1 + (longlong)(int)uVar15 * -0x15180;
		uVar15 = 0;
		uVar14 = uVar11;
		while (true) {
			uVar5 = FUN_100d8e3c(uVar15, (char)lVar7, (char)lVar9, (char)uVar10, (char)uVar11, (char)lVar6,
			    (char)lVar8, (char)lVar12, in_stack_ffffffb8);
			uVar4._4_4_ = (int)uVar4;
			if ((int)uVar5 == 0) {
				uVar3 = 0x16d;
			} else {
				uVar3 = 0x16e;
			}
			if ((uVar14 & 0xffffffff) < uVar3)
				break;
			uVar14 = uVar14 - uVar3;
			uVar15 = uVar15 + 1;
		}
		param_2[5] = uVar15;
		param_2[7] = (uint)uVar14;
		uVar16 = 0;
		lVar6 = FUN_100d8e3c(uVar15, (char)lVar7, (char)lVar9, (char)uVar10, (char)uVar11, (char)lVar6,
		    (char)lVar8, (char)lVar12, in_stack_ffffffb8);
		lVar8 = (ulonglong) * (uint *)(uVar4._4_4_ + -0x6e04) + lVar6 * 0x1a;
		lVar6 = lVar8;
		while (((longlong) * (short *)((int)lVar6 + 2) & 0xffffffffU) <= (uVar14 & 0xffffffff)) {
			lVar6 = lVar6 + 2;
			uVar16 = uVar16 + 1;
		}
		sVar1 = *(short *)((int)lVar8 + uVar16 * 2);
		uVar15 = (uint)((uVar13 & 0xffffffff) * 0x91a2b3c5 >> 0x2b);
		uVar13 = uVar13 + (ulonglong)uVar15 * -0xe10;
		uVar2 = (uint)((uVar13 & 0xffffffff) * 0x88888889 >> 0x25);
		param_2[4] = uVar16;
		param_2[3] = ((uint)uVar14 - (int)sVar1) + 1;
		param_2[2] = uVar15;
		param_2[1] = uVar2;
		*param_2 = (int)uVar13 + uVar2 * -0x3c;
	}
	return;
}

void FUN_100d902c(undefined4 *param_1)

{
	*param_1 = 0;
	param_1[1] = 0;
	param_1[2] = 0;
	param_1[3] = 1;
	param_1[4] = 0;
	param_1[5] = 0;
	param_1[6] = 1;
	param_1[7] = 0;
	param_1[8] = 0xffffffff;
	return;
}

void FUN_100d9060(undefined4 *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;

	lVar1 = FUN_100d90e4((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	if (param_1 != (undefined4 *)0x0) {
		*param_1 = (int)lVar1;
	}
	return;
}

ulonglong FUN_100d9098(uint *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined4 in_stack_ffffffc8;

	uVar1 = ZEXT48(_DAT_100f3c30);
	if (param_1 == (uint *)0x0) {
		FUN_100d902c(_DAT_100f3c30);
	} else {
		FUN_100d8ec8(*param_1, _DAT_100f3c30, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	return uVar1;
}
