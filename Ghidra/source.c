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

typedef struct tWAVEFORMATEX tWAVEFORMATEX, *PtWAVEFORMATEX;

struct tWAVEFORMATEX {
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
};

typedef struct _DSBUFFERDESC _DSBUFFERDESC, *P_DSBUFFERDESC;

struct _DSBUFFERDESC {
};

typedef struct IDirectSoundBuffer IDirectSoundBuffer, *PIDirectSoundBuffer;

struct IDirectSoundBuffer {
};

typedef struct IUnknown IUnknown, *PIUnknown;

struct IUnknown {
};

typedef struct _DSCAPS _DSCAPS, *P_DSCAPS;

struct _DSCAPS {
};

typedef struct HWND__ HWND__, *PHWND__;

struct HWND__ {
};

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
	portalcpp();
	questscpp();
	setmapscpp();
	shacpp();
	soundcpp();
	spellscpp();
	storescpp();
	synccpp();
	themescpp();
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
	return;
}

void portalcpp(void)

{
	_DAT_100f43ec = _DAT_100f43e0;
	return;
}

void InitPortals(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined8 uVar1;
	int iVar2;
	undefined4 *puVar3;

	iVar2 = 0;
	puVar3 = _DAT_100f1e88;
	do {
		uVar1 = delta_portal_inited(iVar2);
		if ((int)uVar1 != 0) {
			*puVar3 = 0;
		}
		iVar2 = iVar2 + 1;
		puVar3 = puVar3 + 6;
	} while (iVar2 < 4);
	return;
}

void FUN_1009b2c0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6)

{
	int iVar1;

	iVar1 = _DAT_100f1e88;
	*(undefined4 *)(_DAT_100f1e88 + param_1 * 0x18) = param_2;
	iVar1 = iVar1 + param_1 * 0x18;
	*(undefined4 *)(iVar1 + 4) = param_3;
	*(undefined4 *)(iVar1 + 8) = param_4;
	*(undefined4 *)(iVar1 + 0xc) = param_5;
	*(undefined4 *)(iVar1 + 0x10) = param_6;
	*(undefined4 *)(iVar1 + 0x14) = 0;
	return;
}

void AddWarpMissile(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined uVar5;
	ulonglong uVar4;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	int iVar11;
	undefined4 *puVar12;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;

	puVar2 = PTR_DAT_100f1a3c;
	puVar1 = PTR_DAT_100f196c;
	uVar5 = (undefined)param_1;
	uVar7 = (undefined)param_3;
	uVar6 = (undefined)param_2;
	ppuVar3 = &toc;
	uVar9 = 10;
	puVar12 = (undefined4 *)(PTR_DAT_100f1ee8 + 300);
	uVar10 = 0;
	*(undefined4 *)(PTR_DAT_100f1ee8 + 300) = 0xffffffff;
	*(undefined *)(*(int *)puVar2 + (int)param_2 * 0x70 + (int)param_3) = 0;
	uVar8 = 0;
	uVar4 = AddMissile(0, 0, param_2, param_3, 0, 10, 0, param_1, in_stack_ffffffb8, in_stack_ffffffbf, 0, 0);
	iVar11 = (int)uVar4;
	if (iVar11 != -1) {
		SetMissDir(iVar11, 1, uVar6, uVar7, uVar8, uVar9, uVar10, uVar5, in_stack_ffffffb8);
		if (*ppuVar3[-0x1df9] != '\0') {
			puVar1 = puVar1 + iVar11 * 0xb4;
			uVar4 = AddLight(*(undefined4 *)(puVar1 + 4), *(undefined4 *)(puVar1 + 8), 0xf);
			*(int *)(puVar1 + 0x8c) = (int)uVar4;
		}
		*puVar12 = 0x81;
	}
	return;
}

void SyncPortals(undefined param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	longlong lVar4;
	undefined uVar5;
	longlong lVar6;
	undefined uVar7;
	longlong lVar8;
	undefined uVar9;
	longlong lVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	uint *puVar15;
	uint *puVar16;
	int *piVar17;
	undefined4 in_stack_ffffffa8;

	puVar3 = PTR_DAT_100f17f8;
	puVar2 = PTR_DAT_100f17f0;
	puVar1 = PTR_DAT_100f17ec;
	lVar12 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	lVar6 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar14 = 0;
	puVar16 = (uint *)PTR_DAT_100f2058;
	puVar15 = (uint *)PTR_DAT_100f2054;
	piVar17 = _DAT_100f1e88;
	do {
		if (*piVar17 != 0) {
			uVar5 = (undefined)lVar4;
			uVar7 = (undefined)lVar6;
			uVar9 = (undefined)lVar8;
			uVar11 = (undefined)lVar10;
			uVar13 = (undefined)lVar12;
			if (*puVar1 == 0) {
				AddWarpMissile(lVar14, (ulonglong)*puVar15, (ulonglong)*puVar16, uVar5, uVar7, uVar9, uVar11, uVar13,
				    in_stack_ffffffa8);
			} else {
				if (*puVar3 == '\0') {
					if ((uint)(byte)*puVar1 == piVar17[3]) {
						AddWarpMissile(lVar14, (ulonglong)(uint)piVar17[1], (ulonglong)(uint)piVar17[2], uVar5, uVar7,
						    uVar9, uVar11, uVar13, in_stack_ffffffa8);
					}
				} else {
					if ((uint)(byte)*puVar2 == piVar17[3]) {
						AddWarpMissile(lVar14, (ulonglong)(uint)piVar17[1], (ulonglong)(uint)piVar17[2], uVar5, uVar7,
						    uVar9, uVar11, uVar13, in_stack_ffffffa8);
					}
				}
			}
		}
		lVar14 = lVar14 + 1;
		puVar16 = puVar16 + 1;
		puVar15 = puVar15 + 1;
		piVar17 = piVar17 + 6;
	} while ((int)lVar14 < 4);
	return;
}

void AddInTownPortal(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined4 in_stack_ffffffc8;

	iVar1 = (int)param_1 * 4;
	AddWarpMissile(param_1, (ulonglong) * (uint *)(PTR_DAT_100f2054 + iVar1),
	    (ulonglong) * (uint *)(PTR_DAT_100f2058 + iVar1), param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffc8);
	return;
}

void ActivatePortal(int param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5,
    undefined4 param_6)

{
	int iVar1;

	iVar1 = _DAT_100f1e88;
	*(undefined4 *)(_DAT_100f1e88 + param_1 * 0x18) = 1;
	if (param_4 == 0) {
		return;
	}
	iVar1 = iVar1 + param_1 * 0x18;
	*(undefined4 *)(iVar1 + 4) = param_2;
	*(undefined4 *)(iVar1 + 8) = param_3;
	*(int *)(iVar1 + 0xc) = param_4;
	*(undefined4 *)(iVar1 + 0x10) = param_5;
	*(undefined4 *)(iVar1 + 0x14) = param_6;
	return;
}

void DeactivatePortal(int param_1)

{
	*(undefined4 *)(_DAT_100f1e88 + param_1 * 0x18) = 0;
	return;
}

undefined8 PortalOnLevel(int param_1)

{
	if ((uint)(byte)*PTR_DAT_100f17ec == *(uint *)(_DAT_100f1e88 + param_1 * 0x18 + 0xc)) {
		return 1;
	}
	if (*PTR_DAT_100f17ec == 0) {
		return 1;
	}
	return 0;
}

void RemovePortalMissile(int iParm1)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	longlong lVar8;
	int iVar9;
	undefined8 uVar10;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar11;
	uint *puVar12;
	ulonglong uVar13;
	undefined4 in_stack_ffffffa8;

	puVar7 = PTR_DAT_100f1a3c;
	puVar6 = PTR_DAT_100f196c;
	puVar5 = PTR_DAT_100f1968;
	puVar4 = PTR_DAT_100f1834;
	iVar11 = 0;
	uVar13 = ZEXT48(PTR_DAT_100f196c);
	iVar3 = _DAT_100f1e88 + iParm1 * 0x18;
	puVar12 = (uint *)PTR_DAT_100f1970;
	while (iVar11 < *(int *)puVar5) {
		uVar1 = *puVar12;
		lVar8 = (ulonglong)uVar1 * 0xb4;
		if ((*(int *)(puVar6 + (int)lVar8) == 10) && (lVar8 = uVar13 + lVar8, iVar2 = (int)lVar8, iParm1 == *(int *)(iVar2 + 0x78))) {
			uVar10 = 0;
			iVar9 = *(int *)(iVar2 + 4) * 0x70 + *(int *)(iVar2 + 8);
			*(byte *)(*(int *)puVar4 + iVar9) = *(byte *)(*(int *)puVar4 + iVar9) & 0xfe;
			*(undefined *)(*(int *)puVar7 + *(int *)(iVar2 + 4) * 0x70 + *(int *)(iVar2 + 8)) = 0;
			if (*(int *)(iVar3 + 0xc) != 0) {
				AddUnLight(*(int *)(iVar2 + 0x8c));
			}
			DeleteMissile((ulonglong)uVar1, iVar11, uVar10, lVar8, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
		}
		puVar12 = puVar12 + 1;
		iVar11 = iVar11 + 1;
	}
	return;
}

void SetCurrentPortal(undefined4 param_1)

{
	*(undefined4 *)PTR_DAT_100f2050 = param_1;
	return;
}

void FUN_1009b650(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined uVar9;
	longlong lVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	undefined4 in_stack_ffffffc8;

	puVar8 = PTR_DAT_100f2050;
	puVar7 = PTR_DAT_100f183c;
	puVar6 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	puVar4 = PTR_DAT_100f17f0;
	puVar3 = PTR_DAT_100f17ec;
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	uVar11 = ZEXT48(PTR_DAT_100f17f8);
	if (*PTR_DAT_100f17ec == '\0') {
		uVar1 = *(uint *)PTR_DAT_100f2050;
		lVar10 = (ulonglong)_DAT_100f1e88 + (ulonglong)uVar1 * 0x18;
		iVar2 = (int)lVar10;
		if (*(int *)(iVar2 + 0x14) == 0) {
			*PTR_DAT_100f17f8 = 0;
			*puVar3 = (char)*(undefined4 *)(iVar2 + 0xc);
			*(uint *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x34) = (uint)(byte)*puVar3;
			*puVar7 = (char)*(undefined4 *)(iVar2 + 0x10);
		} else {
			*PTR_DAT_100f17f8 = 1;
			uVar9 = (undefined) * (undefined4 *)(iVar2 + 0xc);
			*puVar4 = uVar9;
			*puVar3 = uVar9;
			*(uint *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x34) = (uint)(byte)*puVar4;
			*puVar7 = (char)*(undefined4 *)(iVar2 + 0x10);
		}
		if (uVar1 == *(uint *)puVar5) {
			NetSendCmd(1, 0x39, lVar10, uVar11, uVar12, puVar5, puVar7, uVar1, in_stack_ffffffc8);
			DeactivatePortal(*(int *)puVar8);
		}
	} else {
		*PTR_DAT_100f17f8 = 0;
		*puVar3 = 0;
		*(undefined4 *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x34) = 0;
		*puVar7 = 0;
	}
	return;
}

void GetPortalLvlPos(void)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;

	puVar5 = PTR_DAT_100f2058;
	puVar4 = PTR_DAT_100f1824;
	puVar3 = PTR_DAT_100f1820;
	puVar2 = PTR_DAT_100f181c;
	if (*PTR_DAT_100f17ec == '\0') {
		iVar1 = *(int *)PTR_DAT_100f2050;
		*(int *)PTR_DAT_100f1820 = *(int *)(PTR_DAT_100f2054 + iVar1 * 4) + 1;
		*(int *)puVar2 = *(int *)(puVar5 + iVar1 * 4) + 1;
		return;
	}
	iVar1 = *(int *)PTR_DAT_100f2050;
	iVar6 = _DAT_100f1e88 + iVar1 * 0x18;
	*(undefined4 *)PTR_DAT_100f1820 = *(undefined4 *)(iVar6 + 4);
	*(undefined4 *)puVar2 = *(undefined4 *)(iVar6 + 8);
	if (iVar1 == *(int *)puVar4) {
		return;
	}
	*(int *)puVar3 = *(int *)puVar3 + 1;
	*(int *)puVar2 = *(int *)puVar2 + 1;
	return;
}

undefined8 PosOkPortal(int param_1, int param_2, int param_3)

{
	int iVar1;
	int iVar2;

	iVar2 = param_2 + -1;
	iVar1 = param_3 + -1;
	if ((*_DAT_100f1e88 != 0) && (param_1 == _DAT_100f1e88[3])) {
		if ((param_2 == _DAT_100f1e88[1]) && (param_3 == _DAT_100f1e88[2])) {
			return 1;
		}
		if ((iVar2 == _DAT_100f1e88[1]) && (iVar1 == _DAT_100f1e88[2])) {
			return 1;
		}
	}
	if ((_DAT_100f1e88[6] != 0) && (param_1 == _DAT_100f1e88[9])) {
		if ((param_2 == _DAT_100f1e88[7]) && (param_3 == _DAT_100f1e88[8])) {
			return 1;
		}
		if ((iVar2 == _DAT_100f1e88[7]) && (iVar1 == _DAT_100f1e88[8])) {
			return 1;
		}
	}
	if ((_DAT_100f1e88[0xc] != 0) && (param_1 == _DAT_100f1e88[0xf])) {
		if ((param_2 == _DAT_100f1e88[0xd]) && (param_3 == _DAT_100f1e88[0xe])) {
			return 1;
		}
		if ((iVar2 == _DAT_100f1e88[0xd]) && (iVar1 == _DAT_100f1e88[0xe])) {
			return 1;
		}
	}
	if ((_DAT_100f1e88[0x12] != 0) && (param_1 == _DAT_100f1e88[0x15])) {
		if ((param_2 == _DAT_100f1e88[0x13]) && (param_3 == _DAT_100f1e88[0x14])) {
			return 1;
		}
		if ((iVar2 == _DAT_100f1e88[0x13]) && (iVar1 == _DAT_100f1e88[0x14])) {
			return 1;
		}
	}
	return 0;
}

void questscpp(void)

{
	_DAT_100f43f4 = _DAT_100f43f0;
	return;
}

void InitQuests(undefined param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined4 *puVar3;
	ulonglong uVar4;
	int iVar5;
	undefined8 uVar6;
	longlong lVar7;
	undefined *puVar8;
	ulonglong uVar9;
	undefined uVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	longlong lVar18;
	undefined uVar19;
	int iVar20;
	ulonglong uVar21;
	undefined *puVar22;
	ulonglong uVar23;
	longlong lVar24;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar22 = _DAT_100f1f64;
	puVar2 = PTR_DAT_100f19cc;
	puVar1 = PTR_DAT_100f17e0;
	lVar18 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	lVar14 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	uVar9 = SEXT18(param_3);
	uVar4 = ZEXT48(&toc);
	uVar23 = ZEXT48(PTR_DAT_100f19cc);
	if (*PTR_DAT_100f17e0 == '\x01') {
		PTR_DAT_100f19cc[2] = 0;
		puVar2[0x1a] = 0;
		puVar2[0x32] = 0;
		puVar2[0x4a] = 0;
		puVar2[0x62] = 0;
		puVar2[0x7a] = 0;
		puVar2[0x92] = 0;
		puVar2[0xaa] = 0;
		puVar2[0xc2] = 0;
		puVar2[0xda] = 0;
		puVar2[0xf2] = 0;
		puVar2[0x10a] = 0;
		puVar2[0x122] = 0;
		puVar2[0x13a] = 0;
		puVar2[0x152] = 0;
		puVar2[0x16a] = 0;
	} else {
		lVar7 = 0;
		lVar24 = 2;
		uVar9 = uVar23;
		puVar8 = _DAT_100f1f64;
		do {
			iVar20 = (int)uVar9;
			if ((*(uint *)(puVar8 + 8) & 1) == 0) {
				*(undefined *)(iVar20 + 2) = 0;
			}
			if ((*(uint *)(puVar8 + 0x1c) & 1) == 0) {
				*(undefined *)(iVar20 + 0x1a) = 0;
			}
			if ((*(uint *)(puVar8 + 0x30) & 1) == 0) {
				*(undefined *)(iVar20 + 0x32) = 0;
			}
			if ((*(uint *)(puVar8 + 0x44) & 1) == 0) {
				*(undefined *)(iVar20 + 0x4a) = 0;
			}
			if ((*(uint *)(puVar8 + 0x58) & 1) == 0) {
				*(undefined *)(iVar20 + 0x62) = 0;
			}
			if ((*(uint *)(puVar8 + 0x6c) & 1) == 0) {
				*(undefined *)(iVar20 + 0x7a) = 0;
			}
			if ((*(uint *)(puVar8 + 0x80) & 1) == 0) {
				*(undefined *)(iVar20 + 0x92) = 0;
			}
			if ((*(uint *)(puVar8 + 0x94) & 1) == 0) {
				*(undefined *)(iVar20 + 0xaa) = 0;
			}
			puVar8 = puVar8 + 0xa0;
			uVar9 = uVar9 + 0xc0;
			lVar7 = lVar7 + 7;
			lVar24 = lVar24 + -1;
		} while (lVar24 != 0);
	}
	puVar3 = _DAT_100f2078;
	uVar21 = 0;
	*(undefined4 *)PTR_DAT_100f1808 = 0;
	puVar8 = PTR_DAT_100f2074;
	*puVar3 = 1;
	iVar20 = 0;
	*(undefined4 *)puVar8 = 0;
	do {
		if (((byte)*puVar1 < 2) || ((*(uint *)(puVar22 + 8) & 1) != 0)) {
			puVar8 = (undefined *)uVar23;
			puVar8[1] = puVar22[3];
			if ((byte)*puVar1 < 2) {
				puVar8[2] = 1;
				*puVar8 = *puVar22;
				puVar8[0xf] = 0;
				*(undefined4 *)(puVar8 + 0x14) = 0;
			} else {
				*puVar8 = puVar22[1];
				uVar6 = delta_quest_inited(iVar20);
				if ((int)uVar6 == 0) {
					puVar8[2] = 1;
					puVar8[0xf] = 0;
					*(undefined4 *)(puVar8 + 0x14) = 0;
				}
				iVar20 = iVar20 + 1;
			}
			puVar8[0xc] = puVar22[5];
			*(undefined4 *)(puVar8 + 4) = 0;
			*(undefined4 *)(puVar8 + 8) = 0;
			puVar8[0xd] = (char)uVar21;
			puVar8[3] = puVar22[2];
			puVar8[0x10] = 0;
			puVar8[0xe] = (char)*(undefined4 *)(puVar22 + 0xc);
		}
		iVar5 = (int)uVar4;
		uVar19 = (undefined)lVar18;
		uVar17 = (undefined)lVar16;
		uVar15 = (undefined)lVar14;
		uVar13 = (undefined)lVar12;
		uVar11 = (undefined)lVar7;
		uVar10 = (undefined)uVar9;
		uVar21 = uVar21 + 1;
		uVar23 = uVar23 + 0x18;
		puVar22 = puVar22 + 0x14;
	} while ((uVar21 & 0xffffffff) < 0x10);
	if (*puVar1 == '\x01') {
		SetRndSeed(*(undefined4 *)(*(int *)(iVar5 + -0x75ec) + 0x3c));
		lVar7 = random(0, 2, uVar10, uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		if ((int)lVar7 == 0) {
			puVar2[0x122] = 0;
		} else {
			puVar2[0x13a] = 0;
		}
		lVar7 = random(0, 3, uVar10, uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		puVar22 = puVar2 + 2;
		puVar22[*(int *)(*(int *)(iVar5 + -0x5898) + (int)lVar7 * 4) * 0x18] = 0;
		lVar7 = random(0, 3, uVar10, uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		puVar22[*(int *)(*(int *)(iVar5 + -0x589c) + (int)lVar7 * 4) * 0x18] = 0;
		lVar7 = random(0, 3, uVar10, uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		puVar22[*(int *)(*(int *)(iVar5 + -0x58a0) + (int)lVar7 * 4) * 0x18] = 0;
		lVar7 = random(0, 2, uVar10, uVar11, uVar13, uVar15, uVar17, uVar19, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffbb);
		puVar22[*(int *)(*(int *)(iVar5 + -0x58a4) + (int)lVar7 * 4) * 0x18] = 0;
	}
	if (puVar2[0x122] == '\0') {
		puVar2[0x130] = 2;
	}
	if (puVar2[2] == '\0') {
		puVar2[0x10] = 2;
	}
	puVar2[0xb7] = 1;
	if (*puVar1 != '\x01') {
		puVar2[0x177] = 2;
	}
	return;
}

void CheckQuests(undefined8 uParm1, char param_2, undefined param_3, ulonglong uParm4, ulonglong uParm5, undefined8 uParm6, undefined8 uParm7, ulonglong uParm8)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	char *pcVar9;
	undefined *puVar10;
	undefined **ppuVar11;
	undefined8 uVar12;
	longlong lVar13;
	ulonglong uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 uVar17;
	undefined4 uVar18;
	undefined4 uVar19;
	int iVar20;
	ulonglong uVar21;
	char *pcVar22;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;

	puVar10 = PTR_DAT_100f2074;
	pcVar9 = _DAT_100f1dd0;
	puVar8 = PTR_DAT_100f19cc;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	puVar5 = PTR_DAT_100f17f8;
	puVar4 = PTR_DAT_100f17f0;
	puVar3 = PTR_DAT_100f17ec;
	puVar2 = PTR_DAT_100f17e0;
	ppuVar11 = &toc;
	uVar21 = ZEXT48(PTR_DAT_100f19cc);
	uVar12 = QuestStatus(0xf);
	if ((((int)uVar12 != 0) && (*puVar2 != '\x01')) && (puVar8[0x177] == '\x02')) {
		lVar13 = (ulonglong)(uint)(*(int *)ppuVar11[-0x1d54] << 1) + 0x16;
		param_3 = (undefined)lVar13;
		AddObject(0x53, *(int *)ppuVar11[-0x1d53] * 2 + 0x14, (int)lVar13, (char)uParm4, (char)uParm5,
		    (char)uParm6, (char)uParm7, (char)uParm8, in_stack_ffffff98);
		puVar8[0x177] = 3;
		param_2 = '\x0f';
		NetSendCmdQuest(1);
	}
	if (*puVar2 == '\x01') {
		if (((*puVar3 == puVar8[0x168]) && (*puVar5 == '\0')) && (1 < (byte)puVar8[0x177])) {
			if ((puVar8[0x16a] == '\x02') || (puVar8[0x16a] == '\x03')) {
				if ((puVar8[0x178] == '\0') || (puVar8[0x178] == '\x02')) {
					uParm5 = 0;
					lVar13 = (ulonglong)(uint)(*(int *)(puVar8 + 0x16c) << 1) + 0x10;
					param_3 = (undefined)lVar13;
					*(int *)(puVar8 + 0x16c) = (int)lVar13;
					uParm4 = (ulonglong)(uint)(*(int *)(puVar8 + 0x170) << 1) + 0x10;
					param_2 = (char)uParm4;
					*(int *)(puVar8 + 0x170) = (int)uParm4;
					uParm6 = 0x41;
					uParm7 = 0;
					uParm8 = (ulonglong) * (uint *)puVar6;
					AddMissile(lVar13, uParm4, lVar13, uParm4, 0, 0x41, 0, uParm8, in_stack_ffffff98,
					    in_stack_ffffff9f, 0, 0);
					puVar8[0x178] = 1;
					if (puVar8[0x16a] == '\x02') {
						puVar8[0x177] = 3;
					}
				}
			}
		}
		if ((((puVar8[0x16a] == '\x03') && (*puVar5 != '\0')) && (*puVar4 == '\x05')) && (puVar8[0x178] == '\x04')) {
			param_2 = ' ';
			param_3 = 0x23;
			uParm4 = 0x20;
			uParm8 = (ulonglong) * (uint *)puVar6;
			uParm5 = 0;
			uParm6 = 0x41;
			uParm7 = 0;
			AddMissile(0x23, 0x20, 0x23, 0x20, 0, 0x41, 0, uParm8, in_stack_ffffff98, in_stack_ffffff9f, 0, 0);
			puVar8[0x178] = 3;
		}
		uVar19 = (undefined4)uParm8;
		uVar18 = (undefined4)uParm7;
		uVar17 = (undefined4)uParm6;
		uVar19._3_1_ = (undefined)uParm8;
		uVar18._3_1_ = (undefined)uParm7;
		uVar17._3_1_ = (undefined)uParm6;
		uVar16 = (undefined)uParm5;
		uVar15 = (undefined)uParm4;
		if (*puVar5 == '\0') {
			if (*(int *)(puVar7 + *(int *)puVar6 * 0x55ec) == 0) {
				iVar20 = 0;
				do {
					pcVar22 = (char *)uVar21;
					if (((*puVar3 == *pcVar22) && (pcVar22[0xc] != '\0')) && (pcVar22[2] != '\0')) {
						uVar1 = *(uint *)puVar6;
						if ((*(int *)(puVar7 + uVar1 * 0x55ec + 0x38) == *(int *)(pcVar22 + 4)) && (*(int *)(puVar7 + uVar1 * 0x55ec + 0x3c) == *(int *)(pcVar22 + 8))) {
							if (pcVar22[3] != -1) {
								*pcVar9 = pcVar22[3];
							}
							StartNewLvl((ulonglong)uVar1, 0x405, (ulonglong)(byte)pcVar22[0xc], uParm4, uParm5,
							    (int)uParm6, (int)uParm7, (int)uParm8, in_stack_ffffff98);
						}
					}
					iVar20 = iVar20 + 1;
					uVar21 = uVar21 + 0x18;
				} while (iVar20 < 0x10);
			}
		} else {
			if (*puVar4 == puVar8[0x144]) {
				param_3 = (undefined)(uVar21 + 0x13a);
				param_2 = puVar8[0x13a];
				if ((((param_2 != '\x01') && (*ppuVar11[-0x1de5] == puVar8[0x13b])) && (*(int *)ppuVar11[-0x1d8b] == 4)) && (param_2 != '\x03')) {
					*(undefined *)(uVar21 + 0x13a) = 3;
					uVar21 = (ulonglong) * (uint *)(puVar7 + *(int *)puVar6 * 0x55ec + 0x38);
					uVar14 = (ulonglong) * (uint *)(puVar7 + *(int *)puVar6 * 0x55ec + 0x3c);
					PlaySfxLoc(0xc, uVar21, uVar14, uParm4, uParm5, uVar17, uVar18, uVar19, in_stack_ffffff98);
					uVar19._3_1_ = (undefined)uVar19;
					uVar18._3_1_ = (undefined)uVar18;
					uVar17._3_1_ = (undefined)uVar17;
					uVar16 = (undefined)uParm5;
					uVar15 = (undefined)uParm4;
					param_3 = (undefined)uVar14;
					param_2 = (char)uVar21;
					LoadPalette(ZEXT48(ppuVar11[-0x162a]), uVar21, uVar14, uParm4, uParm5, uVar17, uVar18, uVar19,
					    in_stack_ffffff98);
					*(undefined4 *)puVar10 = 0x20;
				}
			}
			if (0 < (int)*(uint *)puVar10) {
				palette_update_quest_palette((ulonglong) * (uint *)puVar10, param_2, param_3, uVar15, uVar16, (undefined)uVar17,
				    (undefined)uVar18, (undefined)uVar19, in_stack_ffffff98);
				*(int *)puVar10 = *(int *)puVar10 + -1;
			}
		}
	}
	return;
}

undefined8
ForceQuests(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	char *pcVar5;
	char *pcVar6;
	byte *pbVar7;
	int iVar8;
	longlong lVar9;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar4 = PTR_DAT_100f1978;
	puVar3 = PTR_DAT_100f1974;
	if (*PTR_DAT_100f17e0 == '\x01') {
		iVar8 = 0;
		pbVar7 = PTR_DAT_100f19cc;
		do {
			if (((iVar8 != 0xf) && (*PTR_DAT_100f17ec == *pbVar7)) && (pbVar7[0xc] != 0)) {
				lVar9 = 7;
				iVar1 = *(int *)(pbVar7 + 4);
				iVar2 = *(int *)(pbVar7 + 8);
				pcVar5 = PTR_DAT_100f3724;
				pcVar6 = PTR_DAT_100f3720;
				do {
					if ((*(int *)PTR_DAT_100f1978 == iVar1 + (int)*pcVar5) && (*(int *)PTR_DAT_100f1974 == iVar2 + (int)*pcVar6)) {
						sprintf((int)PTR_DAT_100f192c, PTR_s_To__s_100f371c,
						    *(undefined4 *)(PTR_PTR_s_King_Leoric_s_Tomb_100f2070 + ((uint)(byte)PTR_DAT_100f19cc[(uint)pbVar7[0xd] * 0x18 + 0xc] - 1) * 4),
						    PTR_DAT_100f3720, pcVar5, pcVar6, pbVar7, (uint)(byte)*PTR_DAT_100f17ec,
						    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
						    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
						    in_stack_ffffffe4);
						*(int *)puVar4 = iVar1;
						*(int *)puVar3 = iVar2;
						return 1;
					}
					pcVar5 = pcVar5 + 1;
					pcVar6 = pcVar6 + 1;
					lVar9 = lVar9 + -1;
				} while (lVar9 != 0);
			}
			iVar8 = iVar8 + 1;
			pbVar7 = pbVar7 + 0x18;
		} while (iVar8 < 0x10);
	}
	return 0;
}

undefined8 QuestStatus(int param_1)

{
	if (*PTR_DAT_100f17f8 != '\0') {
		return 0;
	}
	if (*PTR_DAT_100f17ec != PTR_DAT_100f19cc[param_1 * 0x18]) {
		return 0;
	}
	if (PTR_DAT_100f19cc[param_1 * 0x18 + 2] == '\0') {
		return 0;
	}
	if ((*PTR_DAT_100f17e0 != '\x01') && ((*(uint *)(_DAT_100f1f64 + param_1 * 0x14 + 8) & 1) == 0)) {
		return 0;
	}
	return 1;
}

void FUN_1009c1a8(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	short *psVar10;
	int *piVar11;
	int iVar12;
	char *pcVar13;
	int iVar14;
	int iVar15;
	longlong lVar16;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;

	puVar9 = PTR_DAT_100f1edc;
	puVar8 = PTR_DAT_100f1ed8;
	puVar7 = _DAT_100f1df8;
	puVar6 = _DAT_100f1df4;
	puVar5 = PTR_DAT_100f1a54;
	puVar4 = PTR_DAT_100f19cc;
	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	cVar1 = **(char **)(PTR_DAT_100f187c + param_1 * 0xe8 + 0xe0);
	if (cVar1 == '2') {
		PTR_DAT_100f19cc[0x122] = 3;
		*puVar7 = 0x1e;
		cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
		if (cVar1 == '\0') {
			*puVar6 = 0x322;
		} else {
			if (cVar1 == '\x01') {
				*puVar6 = 0x2b5;
			} else {
				if (cVar1 == '\x02') {
					*puVar6 = 0x24e;
				}
			}
		}
		if (param_2 != 0) {
			NetSendCmdQuest(1, 0xc);
		}
	} else {
		if (cVar1 == '3') {
			PTR_DAT_100f19cc[0x92] = 3;
			*puVar7 = 0x1e;
			cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
			if (cVar1 == '\0') {
				*puVar6 = 800;
			} else {
				if (cVar1 == '\x01') {
					*puVar6 = 0x2b3;
				} else {
					if (cVar1 == '\x02') {
						*puVar6 = 0x24c;
					}
				}
			}
			if (param_2 != 0) {
				NetSendCmdQuest(1, 6);
			}
		} else {
			iVar12 = *(int *)(PTR_DAT_100f187c + param_1 * 0xe8 + 0xdc);
			if (iVar12 == *(int *)(PTR_DAT_100f1f44 + 4)) {
				PTR_DAT_100f19cc[0x32] = 3;
				*puVar7 = 0x1e;
				cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
				if (cVar1 == '\0') {
					*puVar6 = 0x30c;
				} else {
					if (cVar1 == '\x01') {
						*puVar6 = 0x29f;
					} else {
						if (cVar1 == '\x02') {
							*puVar6 = 0x238;
						}
					}
				}
			} else {
				if (iVar12 == *(int *)(PTR_DAT_100f1f44 + 0x44)) {
					PTR_DAT_100f19cc[0x4a] = 3;
					*puVar7 = 0x1e;
					cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
					if (cVar1 == '\0') {
						*puVar6 = 0x30d;
					} else {
						if (cVar1 == '\x01') {
							*puVar6 = 0x2a0;
						} else {
							if (cVar1 == '\x02') {
								*puVar6 = 0x239;
							}
						}
					}
				} else {
					if ((iVar12 == *(int *)(PTR_DAT_100f1f44 + 0x84)) && (*PTR_DAT_100f17e0 != '\x01')) {
						pcVar13 = PTR_DAT_100f19cc + 0x16a;
						PTR_DAT_100f19cc[0x16a] = 3;
						puVar4[0x177] = 7;
						iVar14 = 0;
						*puVar7 = 0x1e;
						iVar12 = 0;
						puVar4[0x7a] = 2;
						do {
							lVar16 = 0x10;
							cVar1 = *pcVar13;
							psVar10 = (short *)(*(int *)puVar5 + iVar12);
							piVar11 = (int *)(puVar9 + *(int *)puVar8 * 0x10);
							iVar15 = 0;
							do {
								if ((*psVar10 == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								if ((psVar10[0x70] == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15 + 1;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								if ((psVar10[0xe0] == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15 + 2;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								if ((psVar10[0x150] == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15 + 3;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								if ((psVar10[0x1c0] == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15 + 4;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								if ((psVar10[0x230] == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15 + 5;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								if ((psVar10[0x2a0] == 0x172) && (cVar1 == '\x03')) {
									*piVar11 = iVar15 + 6;
									piVar11[1] = iVar14;
									piVar11[2] = 0x402;
									piVar11 = piVar11 + 4;
									*(int *)puVar8 = *(int *)puVar8 + 1;
								}
								psVar10 = psVar10 + 0x310;
								iVar15 = iVar15 + 7;
								lVar16 = lVar16 + -1;
							} while (lVar16 != 0);
							iVar14 = iVar14 + 1;
							iVar12 = iVar12 + 2;
						} while (iVar14 < 0x70);
						cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
						if (cVar1 == '\0') {
							*puVar6 = 0x323;
						} else {
							if (cVar1 == '\x01') {
								*puVar6 = 0x2b6;
							} else {
								if (cVar1 == '\x02') {
									*puVar6 = 0x24f;
								}
							}
						}
						if (param_2 != 0) {
							NetSendCmdQuest(1, 0xf);
							NetSendCmdQuest(1, 5);
						}
					} else {
						if ((iVar12 == *(int *)(PTR_DAT_100f1f44 + 0x84)) && (*PTR_DAT_100f17e0 == '\x01')) {
							PTR_DAT_100f19cc[0x16a] = 3;
							*puVar7 = 0x1e;
							InitVPTriggers();
							puVar4[0x177] = 7;
							puVar4[0x178] = 4;
							puVar4[0x7a] = 2;
							AddMissile(0x23, 0x20, 0x23, 0x20, 0, 0x41, 0, (ulonglong) * (uint *)puVar2, in_stack_ffffffa8, in_stack_ffffffaf, 0, 0);
							cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
							if (cVar1 == '\0') {
								*puVar6 = 0x323;
								return;
							}
							if (cVar1 == '\x01') {
								*puVar6 = 0x2b6;
								return;
							}
							if (cVar1 != '\x02') {
								return;
							}
							*puVar6 = 0x24f;
							return;
						}
						if (iVar12 == *(int *)(PTR_DAT_100f1f44 + 0x104)) {
							PTR_DAT_100f19cc[0x10a] = 3;
							*puVar7 = 0x1e;
							cVar1 = puVar3[*(int *)puVar2 * 0x55ec + 0x15c];
							if (cVar1 == '\0') {
								*puVar6 = 0x32e;
							} else {
								if (cVar1 == '\x01') {
									*puVar6 = 0x2c1;
								} else {
									if (cVar1 == '\x02') {
										*puVar6 = 0x25a;
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

void FUN_1009c764(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	DRLG_RectTrans(*(int *)PTR_DAT_100f1a84 * 2 + 0x13, *(int *)PTR_DAT_100f1a80 * 2 + 0x13,
	    *(int *)PTR_DAT_100f1a84 * 2 + 0x1a, *(int *)PTR_DAT_100f1a80 * 2 + 0x1a);
	return;
}

void FUN_1009c7b4(int param_1, int param_2, int param_3)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f19cc + param_1 * 0x18;
	*(int *)(puVar1 + 4) = param_2 * 2 + 0x1c;
	*(int *)(puVar1 + 8) = param_3 * 2 + 0x17;
	return;
}

void FUN_1009c7dc(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	uint *puVar3;
	int *piVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	longlong lVar8;
	undefined8 uVar9;
	undefined uVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	longlong lVar15;
	undefined uVar16;
	longlong lVar17;
	undefined uVar18;
	longlong lVar19;
	undefined4 in_stack_ffffffb8;
	int *local_18[6];

	ppuVar6 = &toc;
	uVar9 = 0;
	uVar7 = LoadFileInMem(ZEXT48(PTR_s_Levels_L4Data_Warlord2_DUN_100f3718), (undefined4 *)0x0, param_3,
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	local_18[0] = (int *)uVar7;
	uVar7 = FUN_100b8f7c(uVar7 & 0xffffffff, uVar9, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	bVar1 = *(byte *)uVar7;
	uVar10 = (undefined)(param_1 * 0x28);
	bVar2 = ((byte *)uVar7)[2];
	lVar17 = uVar7 + 4;
	puVar3 = (uint *)ppuVar6[-0x1d56];
	*(uint *)ppuVar6[-0x1d55] = (uint)bVar1;
	lVar14 = (ulonglong)bVar1 + param_1;
	lVar14._7_1_ = (undefined)lVar14;
	piVar4 = (int *)ppuVar6[-0x1d53];
	*puVar3 = (uint)bVar2;
	puVar5 = ppuVar6[-0x1df3];
	lVar15 = (ulonglong)bVar2 + param_2;
	lVar15._7_1_ = (undefined)lVar15;
	*piVar4 = (int)param_1;
	uVar7 = ZEXT48(ppuVar6[-0x1d54]);
	lVar12 = ZEXT48(puVar5) + param_2;
	*(int *)ppuVar6[-0x1d54] = (int)param_2;
	while (true) {
		uVar18 = (undefined)lVar17;
		uVar16 = (undefined)param_2;
		uVar13 = (undefined)lVar12;
		uVar11 = (undefined)uVar7;
		if ((int)lVar15 <= (int)param_2)
			break;
		lVar8 = lVar12 + param_1 * 0x28;
		lVar19 = lVar14 - param_1;
		if ((int)param_1 < (int)lVar14) {
			do {
				uVar7 = (ulonglong) * (byte *)lVar17;
				if (*(byte *)lVar17 == 0) {
					uVar7 = 6;
				}
				*(undefined *)lVar8 = (char)uVar7;
				lVar8 = lVar8 + 0x28;
				lVar17 = lVar17 + 2;
				lVar19 = lVar19 + -1;
			} while (lVar19 != 0);
		}
		lVar12 = lVar12 + 1;
		param_2 = param_2 + 1;
	}
	FUN_100b9100((int)local_18[0], uVar10, uVar11, uVar13, (undefined)lVar14, (undefined)lVar15, uVar16,
	    uVar18, in_stack_ffffffb8);
	mem_free_dbg(local_18, uVar10, uVar11, uVar13, (undefined)lVar14, (undefined)lVar15, uVar16, uVar18,
	    in_stack_ffffffb8);
	return;
}

void FUN_1009c8c8(int param_1, longlong param_2, longlong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	byte bVar2;
	uint *puVar3;
	int *piVar4;
	undefined *puVar5;
	int iVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	longlong lVar9;
	undefined8 uVar10;
	undefined uVar11;
	undefined uVar12;
	longlong lVar13;
	undefined uVar14;
	longlong lVar15;
	longlong lVar16;
	undefined uVar17;
	longlong lVar18;
	undefined uVar19;
	ulonglong uVar20;
	int iVar21;
	int iVar22;
	longlong lVar23;
	undefined4 in_stack_ffffffa8;
	int *local_28[10];

	ppuVar7 = &toc;
	uVar10 = 0;
	uVar20 = ZEXT48(PTR_DAT_100f19cc);
	lVar13 = param_3;
	uVar8 = LoadFileInMem(ZEXT48(PTR_s_Levels_L2Data_Bonestr1_DUN_100f3714), (undefined4 *)0x0, param_3,
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	local_28[0] = (int *)uVar8;
	uVar8 = FUN_100b8f7c(uVar8 & 0xffffffff, uVar10, lVar13, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	bVar1 = *(byte *)uVar8;
	bVar2 = ((byte *)uVar8)[2];
	lVar18 = uVar8 + 4;
	puVar3 = (uint *)ppuVar7[-0x1d56];
	*(uint *)ppuVar7[-0x1d55] = (uint)bVar1;
	lVar15 = (ulonglong)bVar1 + param_2;
	lVar15._7_1_ = (undefined)lVar15;
	piVar4 = (int *)ppuVar7[-0x1d53];
	*puVar3 = (uint)bVar2;
	puVar5 = ppuVar7[-0x1df3];
	lVar16 = (ulonglong)bVar2 + param_3;
	lVar16._7_1_ = (undefined)lVar16;
	iVar21 = (int)param_2;
	*piVar4 = iVar21;
	uVar8 = ZEXT48(ppuVar7[-0x1d54]);
	lVar13 = ZEXT48(puVar5) + param_3;
	iVar22 = (int)param_3;
	*(int *)ppuVar7[-0x1d54] = iVar22;
	while (true) {
		uVar19 = (undefined)lVar18;
		uVar17 = (undefined)param_3;
		uVar14 = (undefined)lVar13;
		uVar12 = (undefined)uVar8;
		if ((int)lVar16 <= (int)param_3)
			break;
		lVar9 = lVar13 + param_2 * 0x28;
		lVar23 = lVar15 - param_2;
		if (iVar21 < (int)lVar15) {
			do {
				uVar8 = (ulonglong) * (byte *)lVar18;
				if (*(byte *)lVar18 == 0) {
					uVar8 = 3;
				}
				*(undefined *)lVar9 = (char)uVar8;
				lVar9 = lVar9 + 0x28;
				lVar18 = lVar18 + 2;
				lVar23 = lVar23 + -1;
			} while (lVar23 != 0);
		}
		lVar13 = lVar13 + 1;
		param_3 = param_3 + 1;
	}
	lVar13 = uVar20 + (longlong)param_1 * 0x18;
	iVar6 = (int)lVar13;
	*(int *)(iVar6 + 4) = iVar21 * 2 + 0x16;
	*(int *)(iVar6 + 8) = iVar22 * 2 + 0x17;
	uVar11 = (undefined)lVar13;
	FUN_100b9100((int)local_28[0], uVar11, uVar12, uVar14, (undefined)lVar15, (undefined)lVar16, uVar17,
	    uVar19, in_stack_ffffffa8);
	mem_free_dbg(local_28, uVar11, uVar12, uVar14, (undefined)lVar15, (undefined)lVar16, uVar17, uVar19,
	    in_stack_ffffffa8);
	return;
}

void FUN_1009c9ec(int param_1, int param_2, undefined8 param_3, undefined8 param_4, longlong param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	uint *puVar1;
	int *piVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	longlong lVar7;
	undefined uVar8;
	byte bVar9;
	byte bVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffb8;
	int *local_18[6];

	ppuVar4 = &toc;
	uVar6 = 0;
	uVar5 = LoadFileInMem(ZEXT48(PTR_s_Levels_L1Data_Banner1_DUN_100f3710), (undefined4 *)0x0, param_3,
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	uVar16 = (undefined)param_8;
	local_18[0] = (int *)uVar5;
	uVar5 = FUN_100b8f7c(uVar5 & 0xffffffff, uVar6, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	bVar9 = *(byte *)uVar5;
	lVar14 = uVar5 + 4;
	bVar10 = ((byte *)uVar5)[2];
	lVar12 = 0;
	puVar1 = (uint *)ppuVar4[-0x1d56];
	*(uint *)ppuVar4[-0x1d55] = (uint)bVar9;
	piVar2 = (int *)ppuVar4[-0x1d53];
	*puVar1 = (uint)bVar10;
	puVar3 = ppuVar4[-0x1d50];
	*piVar2 = param_1;
	lVar7 = ZEXT48(puVar3) + (longlong)param_2;
	*(int *)ppuVar4[-0x1d54] = param_2;
	while (true) {
		uVar15 = (undefined)lVar14;
		uVar13 = (undefined)lVar12;
		uVar11 = (undefined)param_5;
		uVar8 = (undefined)lVar7;
		if ((int)(uint)bVar10 <= (int)lVar12)
			break;
		param_5 = 0;
		uVar5 = (ulonglong)bVar9;
		if (bVar9 != 0) {
			do {
				if (*(char *)lVar14 != '\0') {
					*(char *)((int)lVar7 + (param_1 + (int)param_5) * 0x28) = *(char *)lVar14;
				}
				lVar14 = lVar14 + 2;
				param_5 = param_5 + 1;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
		}
		lVar7 = lVar7 + 1;
		lVar12 = lVar12 + 1;
	}
	FUN_100b9100((int)local_18[0], uVar8, bVar9, bVar10, uVar11, uVar13, uVar15, uVar16, in_stack_ffffffb8);
	mem_free_dbg(local_18, uVar8, bVar9, bVar10, uVar11, uVar13, uVar15, uVar16, in_stack_ffffffb8);
	return;
}

void FUN_1009cac8(int param_1, int param_2, undefined8 param_3, undefined8 param_4, longlong param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	int *piVar1;
	uint *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	longlong lVar7;
	undefined uVar8;
	byte bVar9;
	byte bVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffb8;
	int *local_18[6];

	ppuVar4 = &toc;
	uVar6 = 0;
	uVar5 = LoadFileInMem(ZEXT48(PTR_s_Levels_L2Data_Blind1_DUN_100f370c), (undefined4 *)0x0, param_3,
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	uVar16 = (undefined)param_8;
	local_18[0] = (int *)uVar5;
	uVar5 = FUN_100b8f7c(uVar5 & 0xffffffff, uVar6, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	bVar9 = *(byte *)uVar5;
	lVar14 = uVar5 + 4;
	bVar10 = ((byte *)uVar5)[2];
	lVar12 = 0;
	piVar1 = (int *)ppuVar4[-0x1d54];
	*(int *)ppuVar4[-0x1d53] = param_1;
	puVar2 = (uint *)ppuVar4[-0x1d55];
	*piVar1 = param_2;
	puVar3 = ppuVar4[-0x1d50];
	*puVar2 = (uint)bVar9;
	lVar7 = ZEXT48(puVar3) + (longlong)param_2;
	*(uint *)ppuVar4[-0x1d56] = (uint)bVar10;
	while (true) {
		uVar15 = (undefined)lVar14;
		uVar13 = (undefined)lVar12;
		uVar11 = (undefined)param_5;
		uVar8 = (undefined)lVar7;
		if ((int)(uint)bVar10 <= (int)lVar12)
			break;
		param_5 = 0;
		uVar5 = (ulonglong)bVar9;
		if (bVar9 != 0) {
			do {
				if (*(char *)lVar14 != '\0') {
					*(char *)((int)lVar7 + (param_1 + (int)param_5) * 0x28) = *(char *)lVar14;
				}
				lVar14 = lVar14 + 2;
				param_5 = param_5 + 1;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
		}
		lVar7 = lVar7 + 1;
		lVar12 = lVar12 + 1;
	}
	FUN_100b9100((int)local_18[0], uVar8, bVar9, bVar10, uVar11, uVar13, uVar15, uVar16, in_stack_ffffffb8);
	mem_free_dbg(local_18, uVar8, bVar9, bVar10, uVar11, uVar13, uVar15, uVar16, in_stack_ffffffb8);
	return;
}

void FUN_1009cba4(int param_1, int param_2, undefined8 param_3, undefined8 param_4, longlong param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	int *piVar1;
	uint *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	longlong lVar7;
	undefined uVar8;
	byte bVar9;
	byte bVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffb8;
	int *local_18[6];

	ppuVar4 = &toc;
	uVar6 = 0;
	uVar5 = LoadFileInMem(ZEXT48(PTR_s_Levels_L2Data_Blood2_DUN_100f3708), (undefined4 *)0x0, param_3,
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	uVar16 = (undefined)param_8;
	local_18[0] = (int *)uVar5;
	uVar5 = FUN_100b8f7c(uVar5 & 0xffffffff, uVar6, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	bVar9 = *(byte *)uVar5;
	lVar14 = uVar5 + 4;
	bVar10 = ((byte *)uVar5)[2];
	lVar12 = 0;
	piVar1 = (int *)ppuVar4[-0x1d54];
	*(int *)ppuVar4[-0x1d53] = param_1;
	puVar2 = (uint *)ppuVar4[-0x1d55];
	*piVar1 = param_2;
	puVar3 = ppuVar4[-0x1df3];
	*puVar2 = (uint)bVar9;
	lVar7 = ZEXT48(puVar3) + (longlong)param_2;
	*(uint *)ppuVar4[-0x1d56] = (uint)bVar10;
	while (true) {
		uVar15 = (undefined)lVar14;
		uVar13 = (undefined)lVar12;
		uVar11 = (undefined)param_5;
		uVar8 = (undefined)lVar7;
		if ((int)(uint)bVar10 <= (int)lVar12)
			break;
		param_5 = 0;
		uVar5 = (ulonglong)bVar9;
		if (bVar9 != 0) {
			do {
				if (*(char *)lVar14 != '\0') {
					*(char *)((int)lVar7 + (param_1 + (int)param_5) * 0x28) = *(char *)lVar14;
				}
				lVar14 = lVar14 + 2;
				param_5 = param_5 + 1;
				uVar5 = uVar5 - 1;
			} while (uVar5 != 0);
		}
		lVar7 = lVar7 + 1;
		lVar12 = lVar12 + 1;
	}
	FUN_100b9100((int)local_18[0], uVar8, bVar9, bVar10, uVar11, uVar13, uVar15, uVar16, in_stack_ffffffb8);
	mem_free_dbg(local_18, uVar8, bVar9, bVar10, uVar11, uVar13, uVar15, uVar16, in_stack_ffffffb8);
	return;
}

void DRLG_CheckQuests(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined8 uVar2;
	int iVar3;
	undefined *puVar4;

	uVar1 = ZEXT48(&toc);
	iVar3 = 0;
	puVar4 = PTR_DAT_100f19cc;
	while ((uVar2 = QuestStatus(iVar3), (int)uVar2 == 0 || (8 < ((ulonglong)(byte)puVar4[1] - 6 & 0xffffffff)))) {
		iVar3 = iVar3 + 1;
		puVar4 = puVar4 + 0x18;
		if (0xf < iVar3) {
			return;
		}
	}
	// WARNING: Could not recover jumptable at 0x1009ccdc. Too many branches
	// WARNING: Treating indirect jump as call
	(**(code **)(*(int *)((int)uVar1 + -0x58cc) + (int)((ulonglong)(byte)puVar4[1] - 6) * 4))();
	return;
}

void FUN_1009cd7c(void)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;

	puVar5 = PTR_DAT_100f1e9c;
	puVar4 = PTR_DAT_100f1e98;
	puVar3 = PTR_DAT_100f1e94;
	puVar2 = PTR_DAT_100f19cc;
	bVar1 = *PTR_DAT_100f17f0;
	if (bVar1 == 3) {
		return;
	}
	if (2 < bVar1) {
		if (bVar1 == 5) {
			*(int *)PTR_DAT_100f1ea0 = *(int *)(PTR_DAT_100f19cc + 0x16c) + 1;
			*(int *)puVar5 = *(int *)(puVar2 + 0x170) + -1;
			*(uint *)puVar4 = (uint)(byte)puVar2[0x168];
			*(undefined4 *)puVar3 = 4;
			return;
		}
		if (4 < bVar1) {
			return;
		}
		*(undefined4 *)PTR_DAT_100f1ea0 = *(undefined4 *)(PTR_DAT_100f19cc + 0x13c);
		*(int *)puVar5 = *(int *)(puVar2 + 0x140) + 1;
		*(uint *)puVar4 = (uint)(byte)puVar2[0x138];
		*(undefined4 *)puVar3 = 1;
		return;
	}
	if (bVar1 == 1) {
		*(int *)PTR_DAT_100f1ea0 = *(int *)(PTR_DAT_100f19cc + 0x124) + 1;
		*(undefined4 *)puVar5 = *(undefined4 *)(puVar2 + 0x128);
		*(uint *)puVar4 = (uint)(byte)puVar2[0x120];
		*(undefined4 *)puVar3 = 1;
		return;
	}
	if (bVar1 == 0) {
		return;
	}
	*(int *)PTR_DAT_100f1ea0 = *(int *)(PTR_DAT_100f19cc + 0x154) + 1;
	*(undefined4 *)puVar5 = *(undefined4 *)(puVar2 + 0x158);
	*(uint *)puVar4 = (uint)(byte)puVar2[0x150];
	*(undefined4 *)puVar3 = 2;
	return;
}

void GetReturnLvlPos(void)

{
	undefined *puVar1;
	undefined *puVar2;

	if (PTR_DAT_100f19cc[0x16a] == '\x03') {
		PTR_DAT_100f19cc[0x178] = 2;
	}
	puVar1 = PTR_DAT_100f1e9c;
	*(undefined4 *)PTR_DAT_100f1820 = *(undefined4 *)PTR_DAT_100f1ea0;
	puVar2 = PTR_DAT_100f1e98;
	*(undefined4 *)PTR_DAT_100f181c = *(undefined4 *)puVar1;
	puVar1 = PTR_DAT_100f1e94;
	*PTR_DAT_100f17ec = (char)*(undefined4 *)puVar2;
	*PTR_DAT_100f183c = (char)*(undefined4 *)puVar1;
	return;
}

void ResyncMPQuests(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined8 uVar4;
	uint uVar5;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f19cc;
	puVar1 = PTR_DAT_100f17ec;
	ppuVar3 = &toc;
	if (PTR_DAT_100f19cc[0x122] == '\x01') {
		if (((int)((uint)(byte)PTR_DAT_100f19cc[0x120] - 1) <= (int)(uint)(byte)*PTR_DAT_100f17ec) && ((uint)(byte)*PTR_DAT_100f17ec <= (uint)(byte)PTR_DAT_100f19cc[0x120] + 1)) {
			PTR_DAT_100f19cc[0x122] = 2;
			ppuVar3 = &toc;
			NetSendCmdQuest(1, 0xc);
		}
	}
	if (puVar2[0x92] == '\x01') {
		uVar5 = (uint)(byte)*puVar1;
		if (((int)((uint)(byte)puVar2[0x90] - 1) <= (int)uVar5) && (uVar5 <= (uint)(byte)puVar2[0x90] + 1)) {
			puVar2[0x92] = 2;
			NetSendCmdQuest(1, 6);
		}
	}
	if ((puVar2[0x16a] == '\x01') && ((uint)(byte)*puVar1 == (uint)(byte)puVar2[0x168] - 1)) {
		puVar2[0x16a] = 2;
		NetSendCmdQuest(1, 0xf);
	}
	uVar4 = QuestStatus(0xf);
	if ((int)uVar4 != 0) {
		AddObject(0x53, *(int *)ppuVar3[-0x1d53] * 2 + 0x14, *(int *)ppuVar3[-0x1d54] * 2 + 0x16,
		    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void ResyncQuests(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	undefined uVar2;
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
	undefined8 uVar14;
	ulonglong uVar15;
	longlong lVar16;
	undefined4 uVar17;
	longlong lVar18;
	undefined4 uVar19;
	longlong lVar20;
	undefined4 uVar21;
	longlong lVar22;
	int iVar23;
	uint *puVar24;
	uint *puVar25;
	undefined4 in_stack_ffffff88;

	puVar13 = PTR_DAT_100f206c;
	puVar25 = (uint *)PTR_DAT_100f1e40;
	puVar12 = PTR_DAT_100f1e3c;
	puVar11 = PTR_DAT_100f1ab8;
	puVar10 = PTR_DAT_100f1a84;
	puVar9 = PTR_DAT_100f1a80;
	puVar8 = PTR_DAT_100f1a7c;
	puVar7 = PTR_DAT_100f1a78;
	puVar6 = PTR_DAT_100f19cc;
	puVar5 = PTR_DAT_100f17f8;
	puVar4 = PTR_DAT_100f17f0;
	puVar3 = PTR_DAT_100f17ec;
	lVar20 = (longlong)param_8;
	lVar18 = (longlong)param_7;
	lVar16 = (longlong)param_6;
	if ((*PTR_DAT_100f17f8 != '\0') && (*PTR_DAT_100f17f0 == PTR_DAT_100f19cc[0x144])) {
		bVar1 = PTR_DAT_100f19cc[0x13a];
		uVar15 = (ulonglong)bVar1;
		if ((bVar1 != 1) && (*PTR_DAT_100f183c == PTR_DAT_100f19cc[0x13b])) {
			if (bVar1 == 3) {
				LoadPalette(ZEXT48(PTR_s_Levels_L3Data_L3pwater_pal_100f3728), uVar15, param_3, param_4,
				    param_5, param_6, param_7, param_8, in_stack_ffffff88);
			} else {
				LoadPalette((ulonglong)_DAT_100f3700, uVar15, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff88);
			}
			lVar22 = 0;
			do {
				palette_update_quest_palette(lVar22, (char)uVar15, (char)param_3, (char)param_4, (char)param_5, (char)lVar16,
				    (char)lVar18, (char)lVar20, in_stack_ffffff88);
				lVar22 = lVar22 + 1;
			} while ((int)lVar22 < 0x21);
		}
	}
	uVar14 = QuestStatus(7);
	uVar21 = (undefined4)lVar20;
	uVar19 = (undefined4)lVar18;
	uVar17 = (undefined4)lVar16;
	if ((int)uVar14 != 0) {
		if (puVar6[0xb7] == '\x01') {
			ObjChangeMapResync((ulonglong) * (uint *)puVar10 + (ulonglong) * (uint *)puVar8 + -2,
			    (ulonglong) * (uint *)puVar9 + (ulonglong) * (uint *)puVar7 + -2,
			    (int)((ulonglong) * (uint *)puVar10 + (ulonglong) * (uint *)puVar8) + 1,
			    (ulonglong) * (uint *)puVar9 + (ulonglong) * (uint *)puVar7 + 1, param_5, uVar17, uVar19, uVar21, in_stack_ffffff88);
		}
		if (puVar6[0xb7] == '\x02') {
			uVar15 = (ulonglong) * (uint *)puVar9 + (ulonglong) * (uint *)puVar7 + 1;
			ObjChangeMapResync((ulonglong) * (uint *)puVar10 + (ulonglong) * (uint *)puVar8 + -2,
			    (ulonglong) * (uint *)puVar9 + (ulonglong) * (uint *)puVar7 + -2,
			    (int)((ulonglong) * (uint *)puVar10 + (ulonglong) * (uint *)puVar8) + 1, uVar15,
			    param_5, (int)lVar16, (int)lVar18, (int)lVar20, in_stack_ffffff88);
			ObjChangeMapResync((ulonglong) * (uint *)puVar10, (ulonglong) * (uint *)puVar9,
			    *(uint *)puVar10 + (*(int *)puVar8 >> 1) + 2,
			    (ulonglong) * (uint *)puVar9 + ((uVar15 & 0xffffffff00000000 | (ulonglong)(uint)(*(int *)puVar7 >> 1)) - 2),
			    param_5, (int)lVar16, (int)lVar18, (int)lVar20, in_stack_ffffff88);
			iVar23 = 0;
			puVar24 = puVar25;
			while (iVar23 < *(int *)puVar12) {
				SyncObjectAnim((ulonglong)*puVar24);
				puVar24 = puVar24 + 1;
				iVar23 = iVar23 + 1;
			}
			uVar2 = *puVar11;
			*puVar11 = 9;
			DRLG_MRectTrans(*(int *)puVar10, *(int *)puVar9, *(int *)puVar10 + (*(int *)puVar8 >> 1) + 4,
			    *(int *)puVar9 + (*(int *)puVar7 >> 1));
			*puVar11 = uVar2;
		}
		uVar21 = (undefined4)lVar20;
		uVar19 = (undefined4)lVar18;
		uVar17 = (undefined4)lVar16;
		if (puVar6[0xb7] == '\x03') {
			ObjChangeMapResync((ulonglong) * (uint *)puVar10, (ulonglong) * (uint *)puVar9,
			    *(uint *)puVar10 + *(int *)puVar8 + 1,
			    (ulonglong) * (uint *)puVar9 + (ulonglong) * (uint *)puVar7 + 1, param_5, uVar17, uVar19, uVar21, in_stack_ffffff88);
			iVar23 = 0;
			puVar24 = puVar25;
			while (true) {
				uVar21 = (undefined4)lVar20;
				uVar19 = (undefined4)lVar18;
				uVar17 = (undefined4)lVar16;
				if (*(int *)puVar12 <= iVar23)
					break;
				SyncObjectAnim((ulonglong)*puVar24);
				puVar24 = puVar24 + 1;
				iVar23 = iVar23 + 1;
			}
			uVar2 = *puVar11;
			*puVar11 = 9;
			DRLG_MRectTrans(*(int *)puVar10, *(int *)puVar9, *(int *)puVar10 + (*(int *)puVar8 >> 1) + 4,
			    *(int *)puVar9 + (*(int *)puVar7 >> 1));
			*puVar11 = uVar2;
		}
	}
	if (*puVar3 == puVar6[0x18]) {
		if ((puVar6[0x1a] == '\x01') && (puVar6[0x27] == '\0')) {
			param_5 = 1;
			SpawnQuestItem(0x13, 0, 0, 5, 1, (char)uVar17, (char)uVar19, (char)uVar21, in_stack_ffffff88);
			puVar6[0x27] = 1;
		} else {
			if (puVar6[0x1a] == '\x02') {
				if ((byte)puVar6[0x27] < 5) {
					if (6 < (byte)puVar6[0x27]) {
						*(undefined4 *)(puVar13 + 0x44) = 0xffffffff;
					}
				} else {
					*(undefined4 *)(puVar13 + 0x44) = 0x7b;
					*(undefined4 *)(puVar13 + 0x184) = 0xffffffff;
				}
			}
		}
	}
	if ((((uint)(byte)*puVar3 == (uint)(byte)puVar6[0x60] + 1) && (puVar6[0x62] == '\x02')) && (puVar6[0x6f] == '\0')) {
		puVar6[0x6f] = 1;
		param_5 = 1;
		SpawnQuestItem(0xf, 0, 0, 5, 1, (char)uVar17, (char)uVar19, (char)uVar21, in_stack_ffffff88);
	}
	if ((*puVar5 != '\0') && (*puVar4 == '\x05')) {
		if (3 < (byte)puVar6[0x177]) {
			ObjChangeMapResync(1, 0xb, 0x14, 0x12, param_5, uVar17, uVar19, uVar21, in_stack_ffffff88);
		}
		if (5 < (byte)puVar6[0x177]) {
			ObjChangeMapResync(1, 0x12, 0x14, 0x18, param_5, uVar17, uVar19, uVar21, in_stack_ffffff88);
		}
		if (6 < (byte)puVar6[0x177]) {
			InitVPTriggers();
		}
		iVar23 = 0;
		while (iVar23 < *(int *)puVar12) {
			SyncObjectAnim((ulonglong)*puVar25);
			puVar25 = puVar25 + 1;
			iVar23 = iVar23 + 1;
		}
	}
	if ((*puVar3 == puVar6[0x168]) && (*puVar5 == '\0')) {
		if (((puVar6[0x178] == 1) || (2 < (byte)puVar6[0x178])) && ((puVar6[0x16a] == '\x02' || (puVar6[0x16a] == '\x03')))) {
			puVar6[0x178] = 2;
		}
	}
	return;
}

void PrintQLString(longlong param_1, int param_2, int param_3, ulonglong param_4, ulonglong param_5,
    undefined8 param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint *puVar5;
	ulonglong uVar6;
	longlong lVar7;
	int iVar9;
	longlong lVar8;
	byte *pbVar10;
	int iVar11;
	int iVar12;
	longlong lVar13;
	longlong lVar14;
	ulonglong uVar15;
	ulonglong uVar16;
	ulonglong uVar17;
	longlong lVar18;
	longlong lVar19;
	ulonglong uVar20;
	longlong lVar21;
	undefined4 in_stack_ffffff78;

	puVar5 = _DAT_100f2078;
	puVar4 = PTR_DAT_100f2068;
	puVar3 = PTR_DAT_100f185c;
	lVar19 = (longlong)param_8;
	lVar18 = (longlong)param_7;
	uVar17 = ZEXT48(PTR_DAT_100f1db4);
	uVar2 = *(uint *)(PTR_DAT_100f1db4 + param_2 * 4);
	lVar21 = param_1 + (ulonglong) * (uint *)(PTR_DAT_100f1938 + uVar2 * 4 + 0x330) + 0x60;
	uVar15 = param_4;
	uVar16 = param_5;
	iVar9 = strlen((uint)param_4);
	uVar20 = 0;
	if (param_3 != 0) {
		lVar14 = 0;
		iVar12 = 0;
		lVar13 = 0;
		if (0 < iVar9) {
			if ((8 < iVar9) && (uVar6 = (ulonglong)(iVar9 - 1U >> 3), 0 < iVar9 + -8)) {
				do {
					pbVar10 = (byte *)((uint)param_4 + (int)lVar13);
					lVar13 = lVar13 + 8;
					uVar17 = (ulonglong)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[5]]];
					uVar16 = (ulonglong)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[6]]];
					uVar15 = (ulonglong)(byte)(&DAT_100f64e8)[(uint)pbVar10[7]];
					lVar14 = (ulonglong)(byte)(&DAT_100f6230)
					             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[7]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[6]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[5]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[4]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[3]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[2]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[1]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar10]]]
					    + lVar14 + 8;
					uVar6 = uVar6 - 1;
				} while (uVar6 != 0);
			}
			iVar12 = (int)lVar14;
			lVar7 = (longlong)iVar9 - lVar13;
			lVar8 = param_4 + lVar13;
			if ((int)lVar13 < iVar9) {
				do {
					pbVar10 = (byte *)lVar8;
					lVar8 = lVar8 + 1;
					lVar14 = (ulonglong)(byte)(&DAT_100f6230)
					             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar10]]]
					    + lVar14 + 1;
					iVar12 = (int)lVar14;
					lVar7 = lVar7 + -1;
				} while (lVar7 != 0);
			}
		}
		if (iVar12 < 0x101) {
			uVar20 = (ulonglong)(uint)(0x101 - iVar12 >> 1);
		}
		lVar21 = lVar21 + uVar20;
	}
	iVar12 = (int)param_1;
	if (*(int *)puVar4 == param_2) {
		if (param_3 == 0) {
			iVar11 = iVar12 + 0x4c;
		} else {
			iVar11 = iVar12 + (int)uVar20 + 0x4c;
		}
		uVar15 = (ulonglong)*puVar5;
		uVar16 = 0xc;
		CelDecodeOnly(iVar11, (ulonglong)uVar2 + 0xcd, (ulonglong) * (uint *)puVar3, uVar15, 0xc, (int)uVar17,
		    (int)lVar18, (int)lVar19, in_stack_ffffff78);
	}
	iVar11 = 0;
	while (true) {
		if (iVar9 <= iVar11)
			break;
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint) * (byte *)param_4]];
		uVar20 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar20 + 1;
		if ((bVar1 != 0) && ((int)uVar20 < 0x102)) {
			CPrintString(lVar21, (ulonglong)bVar1, param_5, uVar15, uVar16, (int)uVar17, (int)lVar18, (int)lVar19, in_stack_ffffff78);
		}
		iVar11 = iVar11 + 1;
		param_4 = param_4 + 1;
		lVar21 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar21 + 1;
	}
	if (*(int *)puVar4 == param_2) {
		if (param_3 == 0) {
			iVar12 = 0x154 - iVar12;
		} else {
			iVar12 = iVar12 + (int)uVar20 + 100;
		}
		CelDecodeOnly(iVar12, (ulonglong)uVar2 + 0xcd, (ulonglong) * (uint *)puVar3, (ulonglong)*puVar5, 0xc,
		    (int)uVar17, (int)lVar18, (int)lVar19, in_stack_ffffff78);
	}
	return;
}

void DrawQuestLog(void)

{
	int iVar1;
	int *piVar2;
	uint *puVar3;
	ulonglong uVar4;
	undefined4 uVar5;
	undefined8 in_r8;
	undefined4 uVar6;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar7;
	int iVar8;
	int *piVar9;
	undefined4 in_stack_ffffffb8;

	puVar3 = _DAT_100f2078;
	piVar2 = _DAT_100f205c;
	iVar1 = _DAT_100f1f64;
	uVar6 = (undefined4)in_r8;
	uVar5 = (undefined4)((ulonglong)in_r8 >> 0x20);
	uVar4 = ZEXT48(&toc);
	PrintQLString(0, 2, 1, (ulonglong)_DAT_100f36fc, 3, in_r8, in_r9, in_r10, in_stack_ffffffb8);
	CelDecodeOnly(0x40, 0x1ff, (ulonglong) * *(uint **)((int)uVar4 + -0x7700), 1, 0x140, uVar6, in_r9, in_r10,
	    in_stack_ffffffb8);
	iVar8 = 0;
	piVar9 = *(int **)((int)uVar4 + -0x6f70);
	iVar7 = **(int **)((int)uVar4 + -0x6f6c);
	while (iVar8 < *piVar2) {
		PrintQLString(0, iVar7, 1, (ulonglong) * (uint *)(iVar1 + *piVar9 * 0x14 + 0x10), 0,
		    CONCAT44(uVar5, uVar6), in_r9, in_r10, in_stack_ffffffb8);
		iVar7 = iVar7 + 2;
		piVar9 = piVar9 + 1;
		iVar8 = iVar8 + 1;
	}
	PrintQLString(0, 0x16, 1, (ulonglong) * (uint *)((int)uVar4 + -0x58d8), 0, CONCAT44(uVar5, uVar6), in_r9,
	    in_r10, in_stack_ffffffb8);
	*puVar3 = (*puVar3 & 7) + 1;
	return;
}

void FUN_1009d7a0(void)

{
	int *piVar1;
	int *piVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined *puVar5;
	int *piVar6;
	int iVar7;
	longlong lVar8;

	piVar2 = _DAT_100f2064;
	piVar1 = _DAT_100f205c;
	*_DAT_100f205c = 0;
	puVar3 = PTR_DAT_100f2068;
	lVar8 = 4;
	iVar7 = 0;
	piVar6 = _DAT_100f2060;
	puVar5 = PTR_DAT_100f19cc;
	do {
		if ((puVar5[2] == '\x02') && (*(int *)(puVar5 + 0x14) != 0)) {
			*piVar6 = iVar7;
			piVar6 = piVar6 + 1;
			*piVar1 = *piVar1 + 1;
		}
		if ((puVar5[0x1a] == '\x02') && (*(int *)(puVar5 + 0x2c) != 0)) {
			*piVar6 = iVar7 + 1;
			piVar6 = piVar6 + 1;
			*piVar1 = *piVar1 + 1;
		}
		if ((puVar5[0x32] == '\x02') && (*(int *)(puVar5 + 0x44) != 0)) {
			*piVar6 = iVar7 + 2;
			piVar6 = piVar6 + 1;
			*piVar1 = *piVar1 + 1;
		}
		if ((puVar5[0x4a] == '\x02') && (*(int *)(puVar5 + 0x5c) != 0)) {
			*piVar6 = iVar7 + 3;
			piVar6 = piVar6 + 1;
			*piVar1 = *piVar1 + 1;
		}
		puVar5 = puVar5 + 0x60;
		iVar7 = iVar7 + 4;
		lVar8 = lVar8 + -1;
	} while (lVar8 != 0);
	iVar7 = *piVar1;
	if (iVar7 < 6) {
		*piVar2 = 8;
	} else {
		*piVar2 = 5 - (iVar7 >> 1);
	}
	if (iVar7 == 0) {
		*(undefined4 *)puVar3 = 0x16;
	} else {
		*(int *)puVar3 = *piVar2;
	}
	puVar4 = _DAT_100f2078;
	*(undefined4 *)PTR_DAT_100f1808 = 1;
	*puVar4 = 1;
	return;
}

void QuestlogUp(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;

	if (*_DAT_100f205c != 0) {
		iVar1 = *(int *)PTR_DAT_100f2068;
		if (iVar1 == *_DAT_100f2064) {
			*(undefined4 *)PTR_DAT_100f2068 = 0x16;
		} else {
			if (iVar1 == 0x16) {
				*(int *)PTR_DAT_100f2068 = (*_DAT_100f205c + -1) * 2 + *_DAT_100f2064;
			} else {
				*(int *)PTR_DAT_100f2068 = iVar1 + -2;
			}
		}
		PlaySFX(0x45);
	}
	return;
}

void QuestlogDown(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;

	if (*_DAT_100f205c != 0) {
		iVar1 = *(int *)PTR_DAT_100f2068;
		if (iVar1 == 0x16) {
			*(int *)PTR_DAT_100f2068 = *_DAT_100f2064;
		} else {
			if (iVar1 == (*_DAT_100f205c + -1) * 2 + *_DAT_100f2064) {
				*(undefined4 *)PTR_DAT_100f2068 = 0x16;
			} else {
				*(int *)PTR_DAT_100f2068 = iVar1 + 2;
			}
		}
		PlaySFX(0x45);
	}
	return;
}

void QuestlogEnter(void)

{
	uint uVar1;
	undefined **ppuVar2;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	ppuVar2 = &toc;
	PlaySFX(0x46);
	if (*(int *)ppuVar2[-0x1bdd] != 0) {
		uVar1 = *(uint *)ppuVar2[-0x1bda];
		if (uVar1 != 0x16) {
			InitQTextMsg((uint)(byte)ppuVar2[-0x1d81]
			                                [*(int *)(ppuVar2[-0x1bdc] + ((int)(uVar1 - *(int *)ppuVar2[-0x1bdb]) >> 1) * 4) * 0x18 + 0xe],
			    ZEXT48(ppuVar2[-0x1bdc]), (ulonglong)uVar1, in_r6, in_r7, in_r8,
			    in_r9, in_r10, in_stack_ffffffc8);
		}
	}
	*(undefined4 *)ppuVar2[-0x1df2] = 0;
	return;
}

void QuestlogESC(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	int *piVar2;
	int *piVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	puVar4 = PTR_DAT_100f2068;
	piVar3 = _DAT_100f2064;
	piVar2 = _DAT_100f205c;
	uVar1 = (*(int *)PTR_DAT_100f1924 + -0x20) / 6 + (*(int *)PTR_DAT_100f1924 + -0x20 >> 0x1f) >> 1;
	iVar5 = uVar1 + (uVar1 >> 0x1f);
	if (*_DAT_100f205c != 0) {
		iVar6 = 0;
		iVar7 = 0;
		while (iVar6 < *piVar2) {
			if (iVar5 == iVar7 + *piVar3) {
				*(int *)puVar4 = iVar5;
				QuestlogEnter();
			}
			iVar7 = iVar7 + 2;
			iVar6 = iVar6 + 1;
		}
	}
	if (iVar5 == 0x16) {
		*(undefined4 *)puVar4 = 0x16;
		QuestlogEnter();
	}
	return;
}

void SetMultiQuest(int param_1, undefined8 param_2, uint param_3, int param_4)

{
	byte bVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f19cc;
	bVar1 = PTR_DAT_100f19cc[param_1 * 0x18 + 2];
	if (bVar1 == 3) {
		return;
	}
	if ((int)(uint)bVar1 < (int)param_2) {
		PTR_DAT_100f19cc[param_1 * 0x18 + 2] = (byte)param_2;
	}
	puVar2 = puVar2 + param_1 * 0x18;
	*(uint *)(puVar2 + 0x14) = *(uint *)(puVar2 + 0x14) | param_3;
	if (param_4 <= (int)(uint)(byte)puVar2[0xf]) {
		return;
	}
	puVar2[0xf] = (char)param_4;
	return;
}

void setmapscpp(void)

{
	_DAT_100f4428 = _DAT_100f4400;
	return;
}

int FUN_100a2e14(longlong lParm1, undefined8 uParm2)

{
	ulonglong uVar1;
	int iVar2;
	ulonglong uVar3;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	uVar1 = (ulonglong) * (uint *)PTR_DAT_100f1e3c;
	uVar3 = ZEXT48(PTR_DAT_100f1e40);
	if (0 < (int)*(uint *)PTR_DAT_100f1e3c) {
		do {
			iVar2 = *(int *)uVar3 * 0x78;
			if (((int)lParm1 == *(int *)(PTR_DAT_100f1948 + iVar2 + 4)) && ((int)uParm2 == *(int *)(PTR_DAT_100f1948 + iVar2 + 8))) {
				return *(int *)uVar3;
			}
			uVar3 = uVar3 + 4;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	app_fatal(_DAT_100f37a0, lParm1, uParm2, uVar3, ZEXT48(PTR_DAT_100f1948), (int)lParm1, in_r9, in_r10,
	    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
	    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
	    in_stack_fffffff0, in_stack_fffffff4);
	return 0xffffffff;
}

void AddSKingObjs(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;

	iVar1 = FUN_100a2e14(0x40, 0x22, param_3, param_4, param_5, param_6, param_7, param_8);
	SetObjMapRange(iVar1, 0x14, 7, 0x17, 10, 1);
	iVar1 = FUN_100a2e14(0x40, 0x3b);
	SetObjMapRange(iVar1, 0x14, 0xe, 0x15, 0x10, 2);
	iVar1 = FUN_100a2e14(0x1b, 0x25);
	SetObjMapRange(iVar1, 8, 1, 0xf, 0xb, 3);
	iVar1 = FUN_100a2e14(0x2e, 0x23);
	SetObjMapRange(iVar1, 8, 1, 0xf, 0xb, 3);
	iVar1 = FUN_100a2e14(0x31, 0x35);
	SetObjMapRange(iVar1, 8, 1, 0xf, 0xb, 3);
	iVar1 = FUN_100a2e14(0x1b, 0x35);
	SetObjMapRange(iVar1, 8, 1, 0xf, 0xb, 3);
	return;
}

void AddSChamObjs(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;

	iVar1 = FUN_100a2e14(0x25, 0x1e, param_3, param_4, param_5, param_6, param_7, param_8);
	SetObjMapRange(iVar1, 0x11, 0, 0x15, 5, 1);
	iVar1 = FUN_100a2e14(0x25, 0x2e);
	SetObjMapRange(iVar1, 0xd, 0, 0x10, 5, 2);
	return;
}

void AddVileObjs(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;

	iVar1 = FUN_100a2e14(0x1a, 0x2d, param_3, param_4, param_5, param_6, param_7, param_8);
	SetObjMapRange(iVar1, 1, 1, 9, 10, 1);
	iVar1 = FUN_100a2e14(0x2d, 0x2e);
	SetObjMapRange(iVar1, 0xb, 1, 0x14, 10, 2);
	iVar1 = FUN_100a2e14(0x23, 0x24);
	SetObjMapRange(iVar1, 7, 0xb, 0xd, 0x12, 3);
	return;
}

void DRLG_SetMapTrans(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	uint uVar6;
	ulonglong uVar7;
	undefined8 uVar8;
	longlong lVar9;
	int iVar10;
	undefined uVar11;
	ulonglong uVar12;
	undefined uVar13;
	longlong lVar14;
	int iVar15;
	undefined uVar16;
	longlong lVar17;
	undefined *puVar18;
	byte *pbVar19;
	undefined uVar20;
	undefined uVar22;
	longlong lVar21;
	ulonglong uVar23;
	undefined uVar24;
	longlong lVar25;
	undefined4 in_stack_ffffffb8;
	int *local_14[5];

	puVar5 = PTR_DAT_100f1a48;
	uVar23 = SEXT48(param_8);
	lVar21 = (longlong)param_7;
	uVar8 = 0;
	uVar7 = LoadFileInMem(param_1, (undefined4 *)0x0, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	local_14[0] = (int *)uVar7;
	uVar7 = FUN_100b8f7c(uVar7 & 0xffffffff, uVar8, param_3, param_4, param_5, param_6, (int)lVar21,
	    (int)uVar23, in_stack_ffffffb8);
	bVar1 = *(byte *)uVar7;
	lVar14 = 0;
	uVar6 = (uint)((byte *)uVar7)[2];
	uVar3 = (uint)bVar1 * 2;
	uVar16 = (undefined)uVar3;
	iVar4 = uVar6 * 2;
	lVar9 = (ulonglong)(uVar3 * iVar4 * 2) * 3;
	uVar12 = (ulonglong)((uint)bVar1 * uVar6 * 2) + 2 + lVar9;
	lVar17 = uVar7 + 2 + uVar12;
	while (true) {
		uVar24 = (undefined)uVar23;
		uVar22 = (undefined)lVar21;
		uVar20 = (undefined)lVar17;
		iVar15._3_1_ = (undefined)lVar14;
		uVar13 = (undefined)uVar12;
		uVar11 = (undefined)lVar9;
		iVar15 = (int)lVar14;
		if (iVar4 <= iVar15)
			break;
		uVar12 = 0;
		if (bVar1 != 0) {
			if (8 < uVar3) {
				uVar7 = (ulonglong)(uVar3 - 1 >> 3);
				iVar10 = 0;
				if (0 < (int)(uVar3 - 8)) {
					do {
						uVar12 = uVar12 + 8;
						puVar18 = (undefined *)lVar17;
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x710) = *puVar18;
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x780) = puVar18[2];
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x7f0) = puVar18[4];
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x860) = puVar18[6];
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x8d0) = puVar18[8];
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x940) = puVar18[10];
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x9b0) = puVar18[0xc];
						uVar23 = (ulonglong)(byte)puVar18[0xe];
						lVar17 = lVar17 + 0x10;
						iVar2 = *(int *)puVar5 + iVar10;
						iVar10 = iVar10 + 0x380;
						*(byte *)(iVar15 + iVar2 + 0xa20) = puVar18[0xe];
						uVar7 = uVar7 - 1;
					} while (uVar7 != 0);
				}
			}
			lVar21 = uVar12 * 0x70;
			lVar9 = (ulonglong)uVar3 - uVar12;
			lVar25 = lVar9;
			if ((int)uVar12 < (int)uVar3) {
				do {
					pbVar19 = (byte *)lVar17;
					uVar12 = (ulonglong)*pbVar19;
					lVar17 = lVar17 + 2;
					lVar9 = (ulonglong) * (uint *)puVar5 + lVar21;
					lVar21 = lVar21 + 0x70;
					lVar9 = lVar9 + 0x710;
					*(byte *)(iVar15 + (int)lVar9) = *pbVar19;
					lVar25 = lVar25 + -1;
				} while (lVar25 != 0);
			}
		}
		lVar14 = lVar14 + 1;
	}
	FUN_100b9100((int)local_14[0], uVar11, uVar13, (undefined)iVar15, uVar16, uVar20, uVar22, uVar24,
	    in_stack_ffffffb8);
	mem_free_dbg(local_14, uVar11, uVar13, (undefined)iVar15, uVar16, uVar20, uVar22, uVar24,
	    in_stack_ffffffb8);
	return;
}

void LoadSetMap(void)

{
	byte bVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined **ppuVar4;
	undefined **ppuVar5;
	undefined **ppuVar6;
	undefined uVar7;
	undefined8 uVar8;
	undefined uVar10;
	undefined8 uVar9;
	undefined8 in_r6;
	undefined uVar12;
	undefined uVar13;
	undefined8 uVar11;
	undefined7 uVar14;
	undefined8 in_r7;
	undefined uVar15;
	undefined4 in_r8;
	undefined uVar16;
	undefined4 in_r9;
	undefined uVar17;
	undefined4 in_r10;
	undefined uVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;

	puVar2 = PTR_DAT_100f19cc;
	uVar15 = (undefined)in_r7;
	uVar14 = (undefined7)((ulonglong)in_r7 >> 8);
	ppuVar3 = &toc;
	ppuVar4 = &toc;
	ppuVar5 = &toc;
	ppuVar6 = &toc;
	uVar21 = (ulonglong)_DAT_100f3768;
	uVar20 = (ulonglong)_DAT_100f375c;
	uVar19 = (ulonglong)_DAT_100f3754;
	uVar22 = (ulonglong)_DAT_100f3794;
	bVar1 = *PTR_DAT_100f17f0;
	if (bVar1 == 3) {
		LoadPreL1Dungeon(uVar21, 0x14, 0x32, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0);
		uVar8 = 0x14;
		uVar9 = 0x32;
		LoadL1Dungeon(ZEXT48(ppuVar5[-0x161b]));
		LoadPalette(ZEXT48(ppuVar5[-0x161c]), uVar8, uVar9, in_r6, CONCAT71(uVar14, uVar15), in_r8, in_r9,
		    in_r10, in_stack_ffffffb8);
		uVar8 = 0;
		uVar9 = 0x70;
		uVar11 = 0x70;
		AddL1Objs(0, 0, 0x70, 0x70, uVar15, (char)in_r8, (char)in_r9, (char)in_r10, in_stack_ffffffb8);
		DRLG_SetMapTrans(uVar21, uVar8, uVar9, uVar11, CONCAT71(uVar14, uVar15), in_r8, in_r9, in_r10,
		    in_stack_ffffffb8);
	} else {
		if (bVar1 < 3) {
			if (bVar1 == 1) {
				if (PTR_DAT_100f19cc[0x122] == '\x01') {
					PTR_DAT_100f19cc[0x122] = 2;
					puVar2[0x12f] = 1;
				}
				LoadPreL1Dungeon((ulonglong)_DAT_100f379c, 0x53, 0x2d, in_r6, in_r7, in_r8, in_r9, in_r10,
				    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0);
				uVar8 = 0x53;
				uVar9 = 0x2d;
				LoadL1Dungeon(ZEXT48(ppuVar3[-0x160e]));
				uVar18 = (undefined)in_r10;
				uVar17 = (undefined)in_r9;
				uVar16 = (undefined)in_r8;
				uVar12 = (undefined)in_r6;
				uVar7 = (undefined)uVar9;
				LoadPalette(uVar22, uVar8, uVar9, in_r6, CONCAT71(uVar14, uVar15), in_r8, in_r9, in_r10,
				    in_stack_ffffffb8);
				DRLG_AreaTrans(2, ppuVar3[-0x1610], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
				DRLG_ListTrans(2, ppuVar3[-0x1611], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
				DRLG_AreaTrans(5, ppuVar3[-0x1612], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
				DRLG_ListTrans(7, ppuVar3[-0x1613], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
				uVar12 = 0;
				uVar10 = 0x70;
				uVar13 = 0x70;
				uVar7 = AddL1Objs(0, 0, 0x70, 0x70, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
				AddSKingObjs(uVar7, uVar12, uVar10, uVar13, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
				InitSKingTriggers();
			} else {
				if (bVar1 != 0) {
					LoadPreL2Dungeon((ulonglong)_DAT_100f3780, 0x45, 0x27, in_r6, in_r7, in_r8, in_r9, in_r10,
					    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0);
					uVar8 = 0x45;
					uVar9 = 0x27;
					LoadL2Dungeon(ZEXT48(ppuVar4[-0x1615]), 0x45, 0x27, in_r6, CONCAT71(uVar14, uVar15), in_r8, in_r9,
					    in_r10, in_stack_ffffffb8);
					uVar18 = (undefined)in_r10;
					uVar17 = (undefined)in_r9;
					uVar16 = (undefined)in_r8;
					uVar12 = (undefined)in_r6;
					uVar7 = (undefined)uVar9;
					LoadPalette(ZEXT48(ppuVar4[-0x1616]), uVar8, uVar9, in_r6, CONCAT71(uVar14, uVar15), in_r8,
					    in_r9, in_r10, in_stack_ffffffb8);
					DRLG_ListTrans(5, ppuVar4[-0x1617], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
					DRLG_AreaTrans(2, ppuVar4[-0x1618], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
					DRLG_ListTrans(9, ppuVar4[-0x1619], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
					uVar12 = 0;
					uVar10 = 0x70;
					uVar13 = 0x70;
					uVar7 = AddL2Objs(0, 0, 0x70, 0x70, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
					AddSChamObjs(uVar7, uVar12, uVar10, uVar13, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
					InitSChambTriggers();
				}
			}
		} else {
			if (bVar1 == 5) {
				if (PTR_DAT_100f19cc[0x16a] == '\x03') {
					PTR_DAT_100f19cc[0x178] = 4;
				} else {
					if (PTR_DAT_100f19cc[0x16a] == '\x02') {
						PTR_DAT_100f19cc[0x178] = 3;
					}
				}
				LoadPreL1Dungeon(uVar19, 0x23, 0x24, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8,
				    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0);
				uVar8 = 0x23;
				uVar9 = 0x24;
				LoadL1Dungeon(ZEXT48(ppuVar6[-0x1620]));
				LoadPalette(uVar22, uVar8, uVar9, in_r6, CONCAT71(uVar14, uVar15), in_r8, in_r9, in_r10,
				    in_stack_ffffffb8);
				uVar8 = 0;
				uVar9 = 0x70;
				uVar11 = 0x70;
				uVar7 = AddL1Objs(0, 0, 0x70, 0x70, uVar15, (char)in_r8, (char)in_r9, (char)in_r10,
				    in_stack_ffffffb8);
				AddVileObjs(uVar7, (char)uVar8, (char)uVar9, (char)uVar11, uVar15, (char)in_r8, (char)in_r9,
				    (char)in_r10, in_stack_ffffffb8);
				DRLG_SetMapTrans(uVar19, uVar8, uVar9, uVar11, CONCAT71(uVar14, uVar15), in_r8, in_r9, in_r10,
				    in_stack_ffffffb8);
				InitNoTriggers();
			} else {
				if (bVar1 < 5) {
					if (PTR_DAT_100f19cc[0x13a] == '\x01') {
						PTR_DAT_100f19cc[0x13a] = '\x02';
					}
					LoadPreL3Dungeon(uVar20, 0x13, 0x32, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8,
					    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0);
					uVar8 = 0x14;
					uVar9 = 0x32;
					LoadL3Dungeon(uVar20, 0x14, 0x32, in_r6, CONCAT71(uVar14, uVar15), in_r8, in_r9, in_r10,
					    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0);
					LoadPalette(ZEXT48(ppuVar5[-0x161e]), uVar8, uVar9, in_r6, CONCAT71(uVar14, uVar15), in_r8,
					    in_r9, in_r10, in_stack_ffffffb8);
					InitPWaterTriggers();
				}
			}
		}
	}
	return;
}

void shacpp(void)

{
	_DAT_100f4430 = _DAT_100f442c;
	return;
}

void FUN_100a34c0(undefined4 *param_1)

{
	*param_1 = 0x67452301;
	param_1[1] = 0xefcdab89;
	param_1[2] = 0x98badcfe;
	param_1[3] = 0x10325476;
	param_1[4] = 0xc3d2e1f0;
	param_1[5] = 0;
	param_1[6] = 0;
	return;
}

void FUN_100a350c(uint *param_1)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	int *piVar4;
	int *piVar5;
	uint *puVar6;
	uint uVar7;
	uint uVar8;
	uint uVar9;
	uint *puVar10;
	uint uVar11;
	uint uVar12;
	uint *puVar13;
	int *piVar14;
	uint uVar15;
	uint uVar16;
	uint *puVar17;
	uint uVar18;
	longlong lVar19;
	longlong lVar20;
	uint local_160[16];
	uint local_120[4];
	int local_110[20];
	int local_c0[20];
	int local_70[28];

	lVar19 = 2;
	puVar13 = local_160;
	puVar17 = puVar13;
	puVar10 = param_1;
	do {
		*puVar17 = (uint) * (byte *)((int)puVar10 + 0x1f) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x1e) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x1d) << 8 | (uint) * (byte *)(puVar10 + 7);
		puVar17[1] = (uint) * (byte *)((int)puVar10 + 0x23) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x22) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x21) << 8 | (uint) * (byte *)(puVar10 + 8);
		puVar17[2] = (uint) * (byte *)((int)puVar10 + 0x27) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x26) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x25) << 8 | (uint) * (byte *)(puVar10 + 9);
		puVar17[3] = (uint) * (byte *)((int)puVar10 + 0x2b) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x2a) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x29) << 8 | (uint) * (byte *)(puVar10 + 10);
		puVar17[4] = (uint) * (byte *)((int)puVar10 + 0x2f) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x2e) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x2d) << 8 | (uint) * (byte *)(puVar10 + 0xb);
		puVar17[5] = (uint) * (byte *)((int)puVar10 + 0x33) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x32) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x31) << 8 | (uint) * (byte *)(puVar10 + 0xc);
		puVar6 = puVar10 + 0xe;
		puVar17[6] = (uint) * (byte *)((int)puVar10 + 0x37) << 0x18 | (uint) * (byte *)((int)puVar10 + 0x36) << 0x10 | (uint) * (byte *)((int)puVar10 + 0x35) << 8 | (uint) * (byte *)(puVar10 + 0xd);
		pbVar1 = (byte *)((int)puVar10 + 0x3b);
		pbVar2 = (byte *)((int)puVar10 + 0x3a);
		pbVar3 = (byte *)((int)puVar10 + 0x39);
		puVar10 = puVar10 + 8;
		puVar17[7] = (uint)*pbVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 | (uint) * (byte *)puVar6;
		puVar17 = puVar17 + 8;
		lVar19 = lVar19 + -1;
	} while (lVar19 != 0);
	puVar17 = local_120;
	lVar19 = 8;
	do {
		*puVar17 = puVar17[-0x10] ^ puVar17[-0xe] ^ puVar17[-3] ^ puVar17[-8];
		puVar17[1] = puVar17[-0xf] ^ puVar17[-0xd] ^ puVar17[-2] ^ puVar17[-7];
		puVar17[2] = puVar17[-0xe] ^ puVar17[-0xc] ^ puVar17[-1] ^ puVar17[-6];
		puVar17[3] = puVar17[-0xd] ^ puVar17[-0xb] ^ *puVar17 ^ puVar17[-5];
		puVar17[4] = puVar17[-0xc] ^ puVar17[-10] ^ puVar17[1] ^ puVar17[-4];
		puVar17[5] = puVar17[-0xb] ^ puVar17[-9] ^ puVar17[2] ^ puVar17[-3];
		puVar17[6] = puVar17[-10] ^ puVar17[-8] ^ puVar17[3] ^ puVar17[-2];
		puVar17[7] = puVar17[-9] ^ puVar17[-7] ^ puVar17[4] ^ puVar17[-1];
		puVar17 = puVar17 + 8;
		lVar19 = lVar19 + -1;
	} while (lVar19 != 0);
	uVar18 = *param_1;
	lVar20 = 2;
	uVar12 = param_1[1];
	uVar15 = param_1[2];
	uVar7 = param_1[3];
	uVar9 = param_1[4];
	lVar19 = 0;
	do {
		uVar11 = uVar12 << 0x1e | (int)uVar12 >> 2;
		uVar12 = (uVar18 << 5 | (int)uVar18 >> 0x1b) + (uVar12 & uVar15 | uVar7 & ~uVar12) + uVar9 + *puVar13 + 0x5a827999;
		uVar16 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar18 & uVar11 | uVar15 & ~uVar18) + uVar7 + puVar13[1] + 0x5a827999;
		uVar9 = uVar18 << 0x1e | (int)uVar18 >> 2;
		uVar7 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		uVar8 = (uVar16 * 0x20 | (int)uVar16 >> 0x1b) + (uVar12 & uVar9 | uVar11 & ~uVar12) + uVar15 + puVar13[2] + 0x5a827999;
		uVar12 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar16 & uVar7 | uVar9 & ~uVar16) + uVar11 + puVar13[3] + 0x5a827999;
		uVar18 = uVar16 * 0x40000000 | (int)uVar16 >> 2;
		uVar15 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar8 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar8 & uVar18 | uVar7 & ~uVar8) + uVar9 + puVar13[4] + 0x5a827999;
		uVar11 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar12 & uVar15 | uVar18 & ~uVar12) + uVar7 + puVar13[5] + 0x5a827999;
		puVar17 = puVar13 + 6;
		puVar10 = puVar13 + 7;
		uVar9 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		puVar13 = puVar13 + 8;
		lVar19 = lVar19 + 8;
		uVar7 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar12 = (uVar11 * 0x20 | (int)uVar11 >> 0x1b) + (uVar8 & uVar9 | uVar15 & ~uVar8) + uVar18 + *puVar17 + 0x5a827999;
		uVar18 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar11 & uVar7 | uVar9 & ~uVar11) + uVar15 + *puVar10 + 0x5a827999;
		uVar15 = uVar11 * 0x40000000 | (int)uVar11 >> 2;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	puVar17 = local_160 + (int)lVar19;
	lVar20 = 0x14 - lVar19;
	uVar11 = uVar12;
	uVar8 = uVar9;
	if ((int)lVar19 < 0x14) {
		do {
			uVar9 = uVar7;
			uVar7 = uVar15;
			uVar12 = uVar18;
			uVar18 = *puVar17;
			puVar17 = puVar17 + 1;
			uVar18 = (uVar12 << 5 | (int)uVar12 >> 0x1b) + (uVar11 & uVar7 | uVar9 & ~uVar11) + uVar8 + uVar18 + 0x5a827999;
			uVar15 = uVar11 << 0x1e | (int)uVar11 >> 2;
			lVar20 = lVar20 + -1;
			uVar11 = uVar12;
			uVar8 = uVar9;
		} while (lVar20 != 0);
	}
	piVar14 = local_110;
	lVar20 = 2;
	lVar19 = 0x14;
	do {
		uVar11 = uVar12 << 0x1e | (int)uVar12 >> 2;
		uVar12 = (uVar18 << 5 | (int)uVar18 >> 0x1b) + (uVar7 ^ uVar12 ^ uVar15) + uVar9 + *piVar14 + 0x6ed9eba1;
		uVar16 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar15 ^ uVar18 ^ uVar11) + uVar7 + piVar14[1] + 0x6ed9eba1;
		uVar9 = uVar18 << 0x1e | (int)uVar18 >> 2;
		uVar7 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		uVar8 = (uVar16 * 0x20 | (int)uVar16 >> 0x1b) + (uVar11 ^ uVar12 ^ uVar9) + uVar15 + piVar14[2] + 0x6ed9eba1;
		uVar12 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar9 ^ uVar16 ^ uVar7) + uVar11 + piVar14[3] + 0x6ed9eba1;
		uVar18 = uVar16 * 0x40000000 | (int)uVar16 >> 2;
		uVar15 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar8 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar7 ^ uVar8 ^ uVar18) + uVar9 + piVar14[4] + 0x6ed9eba1;
		uVar11 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar18 ^ uVar12 ^ uVar15) + uVar7 + piVar14[5] + 0x6ed9eba1;
		piVar4 = piVar14 + 6;
		piVar5 = piVar14 + 7;
		uVar9 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		piVar14 = piVar14 + 8;
		lVar19 = lVar19 + 8;
		uVar7 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar12 = (uVar11 * 0x20 | (int)uVar11 >> 0x1b) + (uVar15 ^ uVar8 ^ uVar9) + uVar18 + *piVar4 + 0x6ed9eba1;
		uVar18 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar9 ^ uVar11 ^ uVar7) + uVar15 + *piVar5 + 0x6ed9eba1;
		uVar15 = uVar11 * 0x40000000 | (int)uVar11 >> 2;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	puVar17 = local_160 + (int)lVar19;
	lVar20 = 0x28 - lVar19;
	uVar11 = uVar7;
	uVar8 = uVar9;
	uVar16 = uVar12;
	if ((int)lVar19 < 0x28) {
		do {
			uVar12 = uVar18;
			uVar7 = uVar15;
			uVar9 = uVar11;
			uVar18 = *puVar17;
			puVar17 = puVar17 + 1;
			uVar18 = (uVar12 << 5 | (int)uVar12 >> 0x1b) + (uVar9 ^ uVar16 ^ uVar7) + uVar8 + uVar18 + 0x6ed9eba1;
			uVar15 = uVar16 << 0x1e | (int)uVar16 >> 2;
			lVar20 = lVar20 + -1;
			uVar11 = uVar7;
			uVar8 = uVar9;
			uVar16 = uVar12;
		} while (lVar20 != 0);
	}
	piVar14 = local_c0;
	lVar20 = 2;
	lVar19 = 0x28;
	do {
		uVar11 = uVar12 << 0x1e | (int)uVar12 >> 2;
		uVar12 = (uVar18 << 5 | (int)uVar18 >> 0x1b) + (uVar15 & uVar7 | uVar12 & (uVar15 | uVar7)) + uVar9 + *piVar14 + -0x70e44324;
		uVar16 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar11 & uVar15 | uVar18 & (uVar11 | uVar15)) + uVar7 + piVar14[1] + -0x70e44324;
		uVar9 = uVar18 << 0x1e | (int)uVar18 >> 2;
		uVar7 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		uVar8 = (uVar16 * 0x20 | (int)uVar16 >> 0x1b) + (uVar9 & uVar11 | uVar12 & (uVar9 | uVar11)) + uVar15 + piVar14[2] + -0x70e44324;
		uVar12 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar7 & uVar9 | uVar16 & (uVar7 | uVar9)) + uVar11 + piVar14[3] + -0x70e44324;
		uVar18 = uVar16 * 0x40000000 | (int)uVar16 >> 2;
		uVar15 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar8 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar18 & uVar7 | uVar8 & (uVar18 | uVar7)) + uVar9 + piVar14[4] + -0x70e44324;
		uVar11 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar15 & uVar18 | uVar12 & (uVar15 | uVar18)) + uVar7 + piVar14[5] + -0x70e44324;
		piVar4 = piVar14 + 6;
		piVar5 = piVar14 + 7;
		uVar9 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		piVar14 = piVar14 + 8;
		lVar19 = lVar19 + 8;
		uVar7 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar12 = (uVar11 * 0x20 | (int)uVar11 >> 0x1b) + (uVar9 & uVar15 | uVar8 & (uVar9 | uVar15)) + uVar18 + *piVar4 + -0x70e44324;
		uVar18 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar7 & uVar9 | uVar11 & (uVar7 | uVar9)) + uVar15 + *piVar5 + -0x70e44324;
		uVar15 = uVar11 * 0x40000000 | (int)uVar11 >> 2;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	puVar17 = local_160 + (int)lVar19;
	lVar20 = 0x3c - lVar19;
	uVar11 = uVar12;
	uVar8 = uVar9;
	uVar16 = uVar7;
	if ((int)lVar19 < 0x3c) {
		do {
			uVar7 = uVar15;
			uVar9 = uVar16;
			uVar12 = uVar18;
			uVar18 = *puVar17;
			puVar17 = puVar17 + 1;
			uVar18 = (uVar12 << 5 | (int)uVar12 >> 0x1b) + (uVar7 & uVar9 | uVar11 & (uVar7 | uVar9)) + uVar8 + uVar18 + -0x70e44324;
			uVar15 = uVar11 << 0x1e | (int)uVar11 >> 2;
			lVar20 = lVar20 + -1;
			uVar11 = uVar12;
			uVar8 = uVar9;
			uVar16 = uVar7;
		} while (lVar20 != 0);
	}
	piVar14 = local_70;
	lVar20 = 2;
	lVar19 = 0x3c;
	do {
		uVar11 = uVar12 << 0x1e | (int)uVar12 >> 2;
		uVar12 = (uVar18 << 5 | (int)uVar18 >> 0x1b) + (uVar7 ^ uVar12 ^ uVar15) + uVar9 + *piVar14 + -0x359d3e2a;
		uVar16 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar15 ^ uVar18 ^ uVar11) + uVar7 + piVar14[1] + -0x359d3e2a;
		uVar9 = uVar18 << 0x1e | (int)uVar18 >> 2;
		uVar7 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		uVar8 = (uVar16 * 0x20 | (int)uVar16 >> 0x1b) + (uVar11 ^ uVar12 ^ uVar9) + uVar15 + piVar14[2] + -0x359d3e2a;
		uVar12 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar9 ^ uVar16 ^ uVar7) + uVar11 + piVar14[3] + -0x359d3e2a;
		uVar18 = uVar16 * 0x40000000 | (int)uVar16 >> 2;
		uVar15 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar8 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar7 ^ uVar8 ^ uVar18) + uVar9 + piVar14[4] + -0x359d3e2a;
		uVar11 = (uVar8 * 0x20 | (int)uVar8 >> 0x1b) + (uVar18 ^ uVar12 ^ uVar15) + uVar7 + piVar14[5] + -0x359d3e2a;
		piVar4 = piVar14 + 6;
		piVar5 = piVar14 + 7;
		uVar9 = uVar12 * 0x40000000 | (int)uVar12 >> 2;
		piVar14 = piVar14 + 8;
		lVar19 = lVar19 + 8;
		uVar7 = uVar8 * 0x40000000 | (int)uVar8 >> 2;
		uVar12 = (uVar11 * 0x20 | (int)uVar11 >> 0x1b) + (uVar15 ^ uVar8 ^ uVar9) + uVar18 + *piVar4 + -0x359d3e2a;
		uVar18 = (uVar12 * 0x20 | (int)uVar12 >> 0x1b) + (uVar9 ^ uVar11 ^ uVar7) + uVar15 + *piVar5 + -0x359d3e2a;
		uVar15 = uVar11 * 0x40000000 | (int)uVar11 >> 2;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	puVar17 = local_160 + (int)lVar19;
	lVar20 = 0x50 - lVar19;
	uVar11 = uVar12;
	uVar8 = uVar9;
	uVar16 = uVar7;
	if ((int)lVar19 < 0x50) {
		do {
			uVar7 = uVar15;
			uVar9 = uVar16;
			uVar12 = uVar18;
			uVar18 = *puVar17;
			puVar17 = puVar17 + 1;
			uVar18 = (uVar12 << 5 | (int)uVar12 >> 0x1b) + (uVar9 ^ uVar11 ^ uVar7) + uVar8 + uVar18 + -0x359d3e2a;
			uVar15 = uVar11 << 0x1e | (int)uVar11 >> 2;
			lVar20 = lVar20 + -1;
			uVar11 = uVar12;
			uVar8 = uVar9;
			uVar16 = uVar7;
		} while (lVar20 != 0);
	}
	*param_1 = *param_1 + uVar18;
	param_1[1] = param_1[1] + uVar12;
	param_1[2] = param_1[2] + uVar15;
	param_1[3] = param_1[3] + uVar7;
	param_1[4] = param_1[4] + uVar9;
	return;
}

// WARNING: Removing unreachable block (ram,0x100a422c)

void FUN_100a4200(uint *param_1, undefined8 param_2, int param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	lVar5 = (longlong)param_8;
	lVar4 = (longlong)param_7;
	lVar3 = (longlong)param_6;
	lVar2 = (longlong)param_5;
	lVar1 = (longlong)param_4;
	param_1[5] = param_1[5] + param_3 * 8;
	param_1[6] = param_1[6] + (param_3 >> 0x1d);
	while (0x3f < param_3) {
		memcpy((char)param_1 + '\x1c', (char)param_2, 0x40, (char)lVar1, (char)lVar2, (char)lVar3,
		    (char)lVar4, (char)lVar5, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		FUN_100a350c(param_1);
		param_2._7_1_ = (char)param_2 + '@';
		param_3 = param_3 + -0x40;
	}
	return;
}

void FUN_100a42a0(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	memset((char)_DAT_100f37a4, 0x14, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

void SHA1Result(int param_1, uint *param_2)

{
	uint uVar1;
	uint *puVar2;

	if (param_2 == (uint *)0x0) {
		return;
	}
	puVar2 = (uint *)(_DAT_100f37a4 + param_1 * 0x5c);
	uVar1 = *puVar2;
	*param_2 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	uVar1 = puVar2[1];
	param_2[1] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	uVar1 = puVar2[2];
	param_2[2] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	uVar1 = puVar2[3];
	param_2[3] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	uVar1 = puVar2[4];
	param_2[4] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
	return;
}

void SHA1Calculate(int param_1, undefined8 param_2, uint *param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_100a4200((uint *)(_DAT_100f37a4 + param_1 * 0x5c), param_2, 0x40, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	if (param_3 != (uint *)0x0) {
		SHA1Result(param_1, param_3);
	}
	return;
}

void FUN_100a43b4(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	FUN_100a34c0((undefined4 *)(_DAT_100f37a4 + param_1 * 0x5c));
	return;
}

void soundcpp(void)

{
	_DAT_100f4438 = _DAT_100f4434;
	return;
}

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

void spellscpp(void)

{
	_DAT_100f4470 = _DAT_100f446c;
	return;
}

longlong GetManaAmount(int param_1, int param_2)

{
	ulonglong uVar1;
	int iVar2;
	uint uVar3;
	longlong lVar4;
	int iVar5;
	ulonglong uVar6;
	int iVar7;
	ulonglong uVar8;
	ulonglong uVar9;

	param_1 = param_1 * 0x55ec;
	lVar4 = 0;
	iVar5 = 0;
	uVar1 = (longlong)(char)(PTR_DAT_100f1828 + param_1)[param_2 + 0xc1] + (longlong)(char)(PTR_DAT_100f1828 + param_1)[0x5570] + -1;
	if ((longlong)uVar1 < 0) {
		uVar1 = 0;
	}
	iVar2 = param_2 * 0x38;
	uVar3 = (uint)uVar1;
	uVar9 = (ulonglong)(byte)(PTR_DAT_100f1934 + iVar2)[0x24];
	if (0 < (int)uVar3) {
		uVar6 = (ulonglong)(uVar3 >> 3);
		uVar8 = uVar1;
		if (uVar3 >> 3 != 0) {
			do {
				lVar4 = lVar4 + uVar9 * 8;
				iVar5 = (int)lVar4;
				uVar6 = uVar6 - 1;
			} while (uVar6 != 0);
			uVar8 = uVar1 & 7;
			if (uVar8 == 0)
				goto LAB_100a50e4;
		}
		do {
			lVar4 = lVar4 + uVar9;
			iVar5 = (int)lVar4;
			uVar8 = uVar8 - 1;
		} while (uVar8 != 0);
	}
LAB_100a50e4:
	if (param_2 == 1) {
		iVar5 = iVar5 >> 1;
	}
	if ((param_2 == 0x20) && (0 < (int)uVar3)) {
		iVar7 = (int)(uint)(byte)(PTR_DAT_100f1934 + iVar2)[1] >> 3;
		iVar5 = 0;
		if (0 < (int)uVar3) {
			uVar8 = (ulonglong)(uVar3 >> 3);
			uVar9 = uVar1;
			iVar5 = 0;
			if (uVar3 >> 3 != 0) {
				do {
					iVar5 = iVar5 + iVar7 * 8;
					uVar8 = uVar8 - 1;
				} while (uVar8 != 0);
				uVar9 = uVar1 & 7;
				if (uVar9 == 0)
					goto LAB_100a5158;
			}
			do {
				iVar5 = iVar5 + iVar7;
				uVar9 = uVar9 - 1;
			} while (uVar9 != 0);
		}
	}
LAB_100a5158:
	if (PTR_DAT_100f1934[iVar2 + 1] == 0xff) {
		iVar7 = (*(uint *)(PTR_DAT_100f1828 + param_1 + 0x1a4) & 0xff) - iVar5;
	} else {
		iVar7 = (uint)(byte)PTR_DAT_100f1934[iVar2 + 1] - iVar5;
	}
	if (param_2 == 2) {
		iVar7 = ((uint)(byte)PTR_DAT_100f1934[0x71] + (int)(char)PTR_DAT_100f1828[param_1 + 0x1b4] * 2)
		    - iVar5;
	}
	if (param_2 == 0x22) {
		iVar7 = ((uint)(byte)PTR_DAT_100f1934[0x71] + (int)(char)PTR_DAT_100f1828[param_1 + 0x1b4] * 2)
		    - iVar5;
	}
	iVar7 = iVar7 * 0x40;
	if ((param_2 == 0x20) && (0 < (longlong)uVar1)) {
		uVar9 = (ulonglong)(uVar3 >> 3);
		if (uVar3 >> 3 != 0) {
			do {
				uVar9 = uVar9 - 1;
			} while (uVar9 != 0);
			uVar1 = uVar1 & 7;
			if (uVar1 == 0)
				goto LAB_100a5238;
		}
		do {
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
LAB_100a5238:
	if (PTR_DAT_100f1828[param_1 + 0x15c] == '\x01') {
		iVar7 = iVar7 - (iVar7 >> 2);
	}
	if (iVar7 >> 6 < (int)(uint)(byte)PTR_DAT_100f1934[iVar2 + 0x25]) {
		iVar7 = (uint)(byte)PTR_DAT_100f1934[iVar2 + 0x25] << 6;
	}
	iVar7 = iVar7 * (100 - (int)(char)PTR_DAT_100f1828[param_1 + 0x5571]);
	uVar3 = iVar7 / 100 + (iVar7 >> 0x1f);
	return ((longlong)(int)((ulonglong)((longlong)iVar7 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar3) + (ulonglong)(uVar3 >> 0x1f);
}

void UseMana(longlong param_1, int param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char cVar1;
	undefined4 *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	int iVar6;
	longlong lVar5;
	undefined4 in_stack_ffffffc8;

	ppuVar4 = &toc;
	iVar6 = (int)param_1;
	if (iVar6 == *(int *)PTR_DAT_100f1824) {
		puVar3 = PTR_DAT_100f1828 + iVar6 * 0x55ec;
		cVar1 = puVar3[0xa8];
		if (cVar1 == '\x02') {
			RemoveScroll(param_1, (char)param_2, (char)PTR_DAT_100f1824, (char)PTR_DAT_100f1828, param_5,
			    param_6, param_7, param_8, in_stack_ffffffc8);
		} else {
			if (cVar1 < '\x02') {
				if ((cVar1 != '\0') && (-1 < cVar1)) {
					lVar5 = GetManaAmount(iVar6, param_2);
					puVar2 = (undefined4 *)ppuVar4[-0x1dbd];
					*(int *)(puVar3 + 0x1a8) = *(int *)(puVar3 + 0x1a8) - (int)lVar5;
					*(int *)(puVar3 + 0x1a0) = *(int *)(puVar3 + 0x1a0) - (int)lVar5;
					*puVar2 = 1;
				}
			} else {
				if ((cVar1 != '\x04') && (cVar1 < '\x04')) {
					UseStaffCharge(iVar6, (char)param_2, (char)PTR_DAT_100f1824, (char)PTR_DAT_100f1828, param_5,
					    param_6, param_7, param_8, in_stack_ffffffc8);
				}
			}
		}
	}
	return;
}

undefined8
CheckSpell(int param_1, int param_2, char param_3, int param_4, undefined param_5, undefined param_6,
    undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined **ppuVar1;
	undefined8 uVar2;
	longlong lVar3;

	ppuVar1 = &toc;
	if ((param_4 == 0) && (*(int *)PTR_DAT_100f188c != 1)) {
		return 0;
	}
	if (param_3 == '\0') {
		uVar2 = 1;
	} else {
		lVar3 = GetSpellLevel(param_1, param_2);
		if ((int)lVar3 < 1) {
			uVar2 = 0;
		} else {
			lVar3 = GetManaAmount(param_1, param_2);
			if (*(int *)(ppuVar1[-0x1dea] + param_1 * 0x55ec + 0x1a8) < (int)lVar3) {
				uVar2 = 0;
			} else {
				uVar2 = 1;
			}
		}
	}
	return uVar2;
}

void CastSpell(longlong param_1, int param_2, ulonglong param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, longlong param_7, int param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	undefined uVar3;
	undefined8 uVar4;
	undefined uVar5;
	ulonglong uVar6;
	undefined uVar7;
	byte bVar8;
	char cVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	undefined *puVar13;
	int iVar14;
	ulonglong unaff_r31;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;

	puVar1 = PTR_DAT_100f1934;
	cVar9 = (char)param_7;
	lVar11 = (longlong)param_8;
	iVar14 = (int)param_7;
	if (iVar14 == 1) {
		unaff_r31 = (ulonglong) * (uint *)(PTR_DAT_100f187c + (int)param_1 * 0xe8 + 0x48);
	} else {
		if ((iVar14 < 1) && (-1 < iVar14)) {
			unaff_r31 = (ulonglong) * (uint *)(PTR_DAT_100f1828 + (int)param_1 * 0x55ec + 0x70);
			cVar9 = '\0';
			if (param_2 == 6) {
				unaff_r31 = (ulonglong) * (uint *)(PTR_DAT_100f1828 + (int)param_1 * 0x55ec + 0x1d8);
			}
		}
	}
	puVar13 = PTR_DAT_100f1934 + param_2 * 0x38;
	iVar14 = 0;
	uVar2 = param_3;
	uVar4 = param_4;
	uVar6 = param_5;
	while (true) {
		uVar12 = (undefined)lVar11;
		uVar10 = (undefined)param_7;
		uVar7 = (undefined)uVar6;
		uVar5 = (undefined)uVar4;
		uVar3 = (undefined)uVar2;
		bVar8 = puVar13[0x21];
		if ((bVar8 == 0) || (2 < iVar14))
			break;
		param_7 = (longlong)cVar9;
		uVar2 = param_5;
		uVar4 = param_6;
		uVar6 = unaff_r31;
		lVar11 = param_1;
		AddMissile(param_3, param_4, param_5, param_6, unaff_r31, (uint)bVar8, param_7, param_1,
		    in_stack_ffffff88, in_stack_ffffff8f, 0, param_8);
		puVar13 = puVar13 + 1;
		iVar14 = iVar14 + 1;
	}
	if (puVar1[param_2 * 0x38 + 0x21] == '\n') {
		UseMana(param_1, 7, uVar3, uVar5, uVar7, bVar8, uVar10, uVar12, in_stack_ffffff88);
	}
	if (puVar1[param_2 * 0x38 + 0x21] == '4') {
		UseMana(param_1, 0x1e, uVar3, uVar5, uVar7, bVar8, uVar10, uVar12, in_stack_ffffff88);
		iVar14 = (param_8 >> 1) + 3;
		while (0 < iVar14) {
			AddMissile(param_3, param_4, param_5, param_6, unaff_r31, 0x34, (longlong)cVar9, param_1,
			    in_stack_ffffff88, in_stack_ffffff8f, 0, param_8);
			iVar14 = iVar14 + -1;
		}
	}
	return;
}

void PlacePlayer(undefined8 param_1, undefined param_2, undefined param_3, undefined param_4,
    char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	int *piVar1;
	int *piVar2;
	undefined *puVar3;
	bool bVar4;
	int iVar5;
	undefined *puVar6;
	ulonglong uVar7;
	int iVar8;
	undefined8 uVar9;
	int iVar10;
	ulonglong uVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	uint uVar18;
	uint *puVar19;
	uint *puVar21;
	longlong lVar20;
	int iVar22;
	longlong lVar23;
	longlong lVar24;
	undefined4 in_stack_ffffff98;

	puVar6 = PTR_DAT_100f1828;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	uVar7 = ZEXT48(&toc);
	iVar5 = (int)param_1;
	puVar3 = PTR_DAT_100f1828 + iVar5 * 0x55ec;
	if ((uint)(byte)*PTR_DAT_100f17ec == *(uint *)(puVar3 + 0x34)) {
		uVar18 = 0;
		puVar21 = _DAT_100f2048;
		puVar19 = (uint *)PTR_DAT_100f204c;
		do {
			uVar11 = (ulonglong) * (uint *)(puVar3 + 0x38);
			lVar24 = uVar11 + (ulonglong)*puVar21;
			lVar24._4_4_ = (int)lVar24;
			lVar23 = (ulonglong) * (uint *)(puVar3 + 0x3c) + (ulonglong)*puVar19;
			iVar10 = (int)lVar23;
			uVar9 = PosOkPlayer(iVar5, lVar24, iVar10, (char)*(uint *)(puVar3 + 0x38), (char)lVar12,
			    (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff98);
			if ((int)uVar9 != 0)
				break;
			uVar18 = uVar18 + 1;
			puVar19 = puVar19 + 1;
			puVar21 = puVar21 + 1;
		} while (uVar18 < 8);
		uVar9 = PosOkPlayer(iVar5, lVar24, iVar10, (char)uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
		    (char)lVar15, in_stack_ffffff98);
		iVar8 = (int)uVar7;
		if ((int)uVar9 == 0) {
			bVar4 = false;
			lVar20 = 1;
			while (true) {
				iVar8 = (int)uVar7;
				lVar24._4_4_ = (int)lVar24;
				iVar10 = (int)lVar23;
				iVar22 = (int)lVar20;
				if ((0x31 < iVar22) || (bVar4))
					break;
				lVar17 = -lVar20;
				while (((int)lVar17 <= iVar22 && (!bVar4))) {
					lVar23 = lVar17 + (ulonglong) * (uint *)(puVar3 + 0x3c);
					lVar16 = -lVar20;
					while (((int)lVar16 <= iVar22 && (!bVar4))) {
						lVar24 = lVar16 + (ulonglong) * (uint *)(puVar3 + 0x38);
						uVar9 = PosOkPlayer(iVar5, lVar24, (int)lVar23, (char)uVar11, (char)lVar12, (char)lVar13,
						    (char)lVar14, (char)lVar15, in_stack_ffffff98);
						if ((int)uVar9 != 0) {
							bVar4 = true;
						}
						lVar16 = lVar16 + 1;
					}
					lVar17 = lVar17 + 1;
				}
				lVar20 = lVar20 + 1;
			}
		}
		piVar1 = *(int **)(iVar8 + -0x7680);
		*(int *)(puVar6 + iVar5 * 0x55ec + 0x38) = lVar24._4_4_;
		piVar2 = *(int **)(iVar8 + -0x77ac);
		*(int *)(puVar6 + iVar5 * 0x55ec + 0x3c) = iVar10;
		*(char *)(*piVar1 + lVar24._4_4_ * 0x70 + iVar10) = (char)param_1 + '\x01';
		if (iVar5 == *piVar2) {
			piVar1 = *(int **)(iVar8 + -0x77b4);
			**(int **)(iVar8 + -0x77b0) = lVar24._4_4_;
			*piVar1 = iVar10;
		}
	}
	return;
}

void DoResurrect(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	undefined uVar9;
	int iVar8;
	ulonglong uVar10;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;

	puVar5 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	ppuVar6 = &toc;
	iVar8 = (int)param_2;
	uVar7 = param_2;
	if ((char)param_2 != -1) {
		uVar7 = (ulonglong) * (uint *)(PTR_DAT_100f1828 + iVar8 * 0x55ec + 0x3c);
		param_3 = (ulonglong) * (uint *)(PTR_DAT_100f1828 + iVar8 * 0x55ec + 0x38);
		param_5 = 0;
		param_6 = 0x3e;
		param_7 = 0;
		param_4 = uVar7;
		param_8 = param_1;
		ppuVar6 = &toc;
		AddMissile(param_3, uVar7, param_3, uVar7, 0, 0x3e, 0, param_1, in_stack_ffffffa8, in_stack_ffffffaf, 0,
		    0);
	}
	if ((int)param_1 == *(int *)puVar2) {
		NewCursor(1, (char)uVar7, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffa8);
	}
	if ((char)param_2 != -1) {
		iVar4 = iVar8 * 0x55ec;
		if (*(int *)(puVar5 + iVar4 + 0x194) == 0) {
			if (iVar8 == *(int *)puVar2) {
				puVar1 = (undefined4 *)ppuVar6[-0x1d73];
				*puVar1 = 0;
				gamemenu_off((char)puVar1, (char)uVar7, (char)param_3, (char)param_4, (char)param_5,
				    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffa8);
				uVar7 = ZEXT48(ppuVar6[-0x1dbc]);
				puVar1 = (undefined4 *)ppuVar6[-0x1dbd];
				*(undefined4 *)ppuVar6[-0x1dbc] = 1;
				*puVar1 = 1;
			}
			uVar9 = (undefined)uVar7;
			ClrPlrPath(param_2, uVar7, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
			    in_stack_ffffffa8);
			puVar2 = puVar5 + iVar4;
			*(undefined4 *)(puVar2 + 0x20) = 0xffffffff;
			puVar2[0x139] = 0;
			PlacePlayer(param_2, uVar9, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffffa8);
			iVar8 = 0x280;
			if (*(int *)(puVar2 + 400) < 0x280) {
				iVar8 = *(int *)(puVar2 + 400);
			}
			SetPlayerHitPoints(param_2, iVar8, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
			    in_stack_ffffffa8);
			puVar3 = puVar5 + iVar4;
			*(int *)(puVar3 + 0x18c) = *(int *)(puVar5 + iVar4 + 0x194) - (*(int *)(puVar3 + 0x198) - *(int *)(puVar2 + 400));
			*(undefined4 *)(puVar3 + 0x1a8) = 0;
			uVar10 = (ulonglong) * (uint *)(puVar3 + 0x1a4);
			uVar7 = (ulonglong) * (uint *)(puVar3 + 0x1ac) - uVar10;
			*(int *)(puVar3 + 0x1a0) = *(int *)(puVar3 + 0x1a8) - (int)uVar7;
			CalcPlrInv(param_2, 1, uVar7, uVar10, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
			if ((uint)(byte)*ppuVar6[-0x1df9] == *(uint *)(puVar3 + 0x34)) {
				StartStand(param_2, (ulonglong) * (uint *)(puVar3 + 0x70), uVar7, uVar10, param_5, param_6,
				    param_7, param_8, in_stack_ffffffa8);
			} else {
				*(undefined4 *)(puVar5 + iVar4) = 0;
			}
		}
	}
	return;
}

void DoHealOther(int param_1, undefined8 param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	int iVar2;
	undefined *puVar3;
	ulonglong uVar4;
	longlong lVar5;
	ulonglong uVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	int iVar13;
	int *piVar14;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar3 = PTR_DAT_100f1828;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	uVar4 = ZEXT48(&toc);
	uVar6 = ZEXT48(PTR_DAT_100f1824);
	if (param_1 == *(int *)PTR_DAT_100f1824) {
		NewCursor(1, (char)param_2, (char)PTR_DAT_100f1824, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	if ((char)param_2 != -1) {
		iVar2 = (int)param_2 * 0x55ec;
		piVar14 = (int *)(puVar3 + iVar2 + 0x194);
		if (*(int *)(puVar3 + iVar2 + 0x194) >> 6 != 0) {
			lVar5 = random(0x39, 10, (char)uVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
			    (char)lVar11, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
			iVar13 = ((int)lVar5 + 1) * 0x40;
			iVar12 = 0;
			while (iVar12 < (int)(char)puVar3[param_1 * 0x55ec + 0x1b4]) {
				lVar5 = random(0x39, 4, (char)uVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
				    (char)lVar11, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				iVar12 = iVar12 + 1;
				iVar13 = iVar13 + ((int)lVar5 + 1) * 0x40;
			}
			iVar12 = 0;
			while (true) {
				lVar5 = GetSpellLevel(param_1, 0x22);
				if ((int)lVar5 <= iVar12)
					break;
				lVar5 = random(0x39, 6, (char)uVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
				    (char)lVar11, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
				iVar12 = iVar12 + 1;
				iVar13 = iVar13 + ((int)lVar5 + 1) * 0x40;
			}
			if (puVar3[param_1 * 0x55ec + 0x15c] == '\0') {
				iVar13 = iVar13 << 1;
			}
			if (puVar3[param_1 * 0x55ec + 0x15c] == '\x01') {
				iVar13 = iVar13 + (iVar13 >> 1);
			}
			*piVar14 = *piVar14 + iVar13;
			if (*(int *)(puVar3 + iVar2 + 0x198) < *piVar14) {
				*piVar14 = *(int *)(puVar3 + iVar2 + 0x198);
			}
			puVar1 = puVar3 + iVar2;
			*(int *)(puVar1 + 0x18c) = *(int *)(puVar1 + 0x18c) + iVar13;
			if (*(int *)(puVar3 + iVar2 + 400) < *(int *)(puVar1 + 0x18c)) {
				*(int *)(puVar1 + 0x18c) = *(int *)(puVar3 + iVar2 + 400);
			}
			**(undefined4 **)((int)uVar4 + -0x76f0) = 1;
		}
	}
	return;
}

void storescpp(void)

{
	_DAT_100f4478 = _DAT_100f4474;
	return;
}

void InitStores(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined4 *puVar3;
	int iVar4;
	undefined **ppuVar5;
	longlong lVar6;
	undefined4 in_stack_ffffffb8;

	iVar4 = _DAT_100f1e28;
	ppuVar5 = &toc;
	lVar6 = LoadFileInMem((ulonglong)_DAT_100f3920, (undefined4 *)0x0, param_3, param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	puVar1 = (undefined4 *)ppuVar5[-0x1c67];
	*puVar1 = (int)lVar6;
	lVar6 = LoadFileInMem(ZEXT48(ppuVar5[-0x15ad]), (undefined4 *)0x0, ZEXT48(puVar1), param_4, param_5,
	    param_6, param_7, param_8, in_stack_ffffffb8);
	puVar1 = (undefined4 *)ppuVar5[-0x1ddd];
	*puVar1 = (int)lVar6;
	lVar6 = LoadFileInMem(ZEXT48(ppuVar5[-0x15ae]), (undefined4 *)0x0, ZEXT48(puVar1), param_4, param_5,
	    param_6, param_7, param_8, in_stack_ffffffb8);
	*(int *)ppuVar5[-0x1ca2] = (int)lVar6;
	ClearSText(0, 0x18);
	puVar1 = (undefined4 *)ppuVar5[-0x1bbc];
	*ppuVar5[-0x1dd9] = 0;
	puVar2 = ppuVar5[-0x1bbd];
	*puVar1 = 1;
	puVar1 = (undefined4 *)ppuVar5[-0x1bbe];
	*puVar2 = 0;
	puVar3 = (undefined4 *)ppuVar5[-0x1c6b];
	*puVar1 = 0;
	puVar1 = (undefined4 *)ppuVar5[-0x1c6d];
	*puVar3 = 0;
	puVar2 = ppuVar5[-0x1c6f];
	*puVar1 = 1;
	puVar1 = (undefined4 *)ppuVar5[-0x1c6e];
	*(undefined4 *)(iVar4 + 8) = 0xffffffff;
	*(undefined4 *)(iVar4 + 0x178) = 0xffffffff;
	*(undefined4 *)(iVar4 + 0x2e8) = 0xffffffff;
	*(undefined4 *)(iVar4 + 0x458) = 0xffffffff;
	*(undefined4 *)(iVar4 + 0x5c8) = 0xffffffff;
	*(undefined4 *)(iVar4 + 0x738) = 0xffffffff;
	*(undefined4 *)(puVar2 + 8) = 0xffffffff;
	*puVar1 = 0;
	return;
}

void SetupTownStores(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	int iVar4;
	longlong lVar3;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	ulonglong unaff_r29;
	ulonglong uVar8;
	ulonglong uVar9;
	longlong lVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	int local_3c;

	puVar2 = PTR_DAT_100f1828;
	puVar1 = PTR_DAT_100f1824;
	uVar9 = ZEXT48(PTR_DAT_100f1828);
	iVar4 = GetTickCount(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	uVar6 = SUB41(*(byte **)(local_3c + -0x77e4), 0);
	uVar7 = (undefined) * (int *)(local_3c + -0x75ec);
	SetRndSeed(*(int *)(*(int *)(local_3c + -0x75ec) + (uint) * *(byte **)(local_3c + -0x77e4) * 4) * iVar4);
	if (**(char **)(local_3c + -0x77f0) == '\x01') {
		lVar10 = 0x11;
		uVar8 = 0;
		lVar3 = uVar9 + (ulonglong) * (uint *)puVar1 * 0x55ec;
		uVar9 = 0;
		do {
			if (*(char *)((int)lVar3 + 0x1f0) != '\0') {
				uVar8 = uVar9;
			}
			lVar3 = lVar3 + 1;
			uVar5 = (undefined)lVar3;
			uVar9 = uVar9 + 1;
			uVar6 = (undefined)uVar9;
			lVar10 = lVar10 + -1;
		} while (lVar10 != 0);
	} else {
		lVar3 = uVar9 + (ulonglong) * (uint *)puVar1 * 0x55ec;
		uVar5 = (undefined)lVar3;
		uVar8 = unaff_r29 & 0xffffffff00000000 | (ulonglong)(uint)((int)*(char *)((int)lVar3 + 0x1b4) >> 1);
	}
	uVar8 = uVar8 + 2;
	if ((int)uVar8 < 6) {
		uVar8 = 6;
	}
	if (0x10 < (int)uVar8) {
		uVar8 = 0x10;
	}
	SpawnStoreGold(uVar5, uVar6, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	SpawnSmith(uVar8, uVar6, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	SpawnWitch(uVar8, uVar6, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	SpawnHealer(uVar8, uVar6, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	SpawnBoy((longlong)(char)(puVar2 + 0x1b4)[*(int *)puVar1 * 0x55ec], uVar6, uVar7, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	SpawnPremium((int)(char)(puVar2 + 0x1b4)[*(int *)puVar1 * 0x55ec], uVar6, uVar7, param_4, param_5,
	    param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void FreeStoreMem(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	mem_free_dbg((int **)PTR_DAT_100f1e34, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)ppuVar1[-0x1ddd], param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)ppuVar1[-0x1ca2], param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void DrawSTextBack(void)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	CelDecodeOnly(0x198, 0x1e7, (ulonglong) * (uint *)PTR_DAT_100f1e34, 1, 0x10f, in_r8, in_r9, in_r10,
	    in_stack_ffffffc8);
	lVar5 = 0x94;
	puVar4 = (undefined *)(*(int *)ppuVar1[-0x1e01] + 0x5ad9b);
	do {
		lVar2 = 0x84;
		do {
			puVar3 = puVar4;
			lVar2 = lVar2 + -1;
			*puVar3 = 0;
			puVar4 = puVar3 + 2;
		} while (lVar2 != 0);
		puVar3[2] = 0;
		lVar2 = 0x84;
		puVar3 = puVar3 + -0x406;
		do {
			puVar4 = puVar3;
			lVar2 = lVar2 + -1;
			puVar4[1] = 0;
			puVar3 = puVar4 + 2;
		} while (lVar2 != 0);
		lVar5 = lVar5 + -1;
		puVar4 = puVar4 + -0x406;
	} while (lVar5 != 0);
	lVar5 = 0x84;
	do {
		lVar5 = lVar5 + -1;
		*puVar4 = 0;
		puVar4 = puVar4 + 2;
	} while (lVar5 != 0);
	return;
}

void PrintSString(longlong lParm1, int iParm2, int iParm3, ulonglong uParm4, longlong lParm5, int iParm6)

{
	uint *puVar1;
	byte bVar2;
	char *pcVar3;
	ulonglong uVar4;
	longlong lVar5;
	ulonglong uVar6;
	int iVar7;
	int iVar9;
	longlong lVar8;
	byte *pbVar10;
	int iVar11;
	longlong lVar12;
	ulonglong uVar13;
	int iVar14;
	longlong lVar15;
	undefined4 uVar16;
	ulonglong uVar17;
	undefined4 uVar18;
	undefined8 in_r13;
	ulonglong uVar19;
	int *piVar20;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	longlong lVar21;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	longlong lVar22;
	int iVar23;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	int iVar24;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	ulonglong uVar25;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	int iVar26;
	undefined8 unaff_r28;
	longlong lVar27;
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
	byte abStack117[41];
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

	pcVar3 = _DAT_100f20dc;
	uVar6 = ZEXT48(&toc);
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
	uVar17 = (ulonglong)_DAT_100f20d4;
	uVar19 = (ulonglong)_DAT_100f20d0;
	lVar15 = (longlong)*_DAT_100f20dc;
	lVar21 = (ulonglong) * (uint *)(PTR_DAT_100f1db4 + iParm2 * 4) + (ulonglong) * (uint *)(_DAT_100f20d4 + iParm2 * 0x9c + 4);
	if (lVar15 == 0) {
		lVar22 = 0x1a0;
	} else {
		lVar22 = 0x60;
	}
	iVar23 = (int)lVar22;
	puVar1 = (uint *)(PTR_DAT_100f1938 + (int)lVar21 * 4 + 0x330);
	lVar27 = lParm1 + (ulonglong)*puVar1 + lVar22;
	uVar13 = uParm4;
	lVar22 = lParm5;
	iVar14 = iParm6;
	iVar9 = strlen((uint)uParm4);
	if (*pcVar3 == '\0') {
		iVar24 = 0x101;
	} else {
		iVar24 = 0x241;
	}
	uVar25 = 0;
	if (iParm3 != 0) {
		lVar12 = 0;
		iVar11 = 0;
		lVar22 = 0;
		if (0 < iVar9) {
			if ((8 < iVar9) && (uVar4 = (ulonglong)(iVar9 - 1U >> 3), 0 < iVar9 + -8)) {
				do {
					pbVar10 = (byte *)((uint)uParm4 + (int)lVar22);
					lVar22 = lVar22 + 8;
					uVar13 = (ulonglong)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[5]]];
					lVar12 = (ulonglong)(byte)(&DAT_100f6230)
					             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[7]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[6]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[5]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[4]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[3]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[2]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar10[1]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar10]]]
					    + lVar12 + 8;
					uVar4 = uVar4 - 1;
				} while (uVar4 != 0);
			}
			iVar11 = (int)lVar12;
			lVar5 = (longlong)iVar9 - lVar22;
			lVar8 = uParm4 + lVar22;
			if ((int)lVar22 < iVar9) {
				do {
					pbVar10 = (byte *)lVar8;
					lVar8 = lVar8 + 1;
					lVar12 = (ulonglong)(byte)(&DAT_100f6230)
					             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar10]]]
					    + lVar12 + 1;
					iVar11 = (int)lVar12;
					lVar5 = lVar5 + -1;
				} while (lVar5 != 0);
			}
		}
		if (iVar11 < iVar24) {
			uVar25 = (ulonglong)(uint)(iVar24 - iVar11 >> 1);
		}
		lVar27 = lVar27 + uVar25;
	}
	iVar11 = (int)lParm1;
	if (*(int *)uVar19 == iParm2) {
		iVar26 = iVar23;
		if (iParm3 != 0) {
			iVar26 = (int)uVar25 + iVar23;
		}
		lVar22 = 0xc;
		uVar13 = (ulonglong) * *(uint **)((int)uVar6 + -0x6ef0);
		CelDecodeOnly(iVar11 + iVar26 + -0x14, lVar21 + 0xcd, (ulonglong) * *(uint **)((int)uVar6 + -0x7774),
		    uVar13, 0xc, iVar14, (int)lVar15, (int)uVar17, in_stack_ffffff58);
	}
	iVar26 = 0;
	while (true) {
		piVar20 = (int *)uVar19;
		iVar7 = (int)uVar6;
		uVar16 = (undefined4)lVar15;
		uVar18 = (undefined4)uVar17;
		if (iVar9 <= iVar26)
			break;
		bVar2 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint) * (byte *)uParm4]];
		uVar25 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar2] + uVar25 + 1;
		if ((bVar2 != 0) && ((int)uVar25 <= iVar24)) {
			CPrintString(lVar27, (ulonglong)bVar2, lParm5, uVar13, lVar22, iVar14, uVar16, uVar18,
			    in_stack_ffffff58);
		}
		iVar26 = iVar26 + 1;
		uParm4 = uParm4 + 1;
		lVar27 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar2] + lVar27 + 1;
	}
	if ((iParm3 == 0) && (-1 < iParm6)) {
		sprintf((int)(abStack117 + 1), *(undefined4 *)(iVar7 + -0x56bc), iParm6, (int)uVar13,
		    (int)lVar22, iVar14, uVar16, uVar18, in_stack_ffffff58, in_stack_ffffff5f,
		    in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
		    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
		lParm1 = ((ulonglong)*puVar1 + 0x290) - lParm1;
		iVar9 = strlen((uint)(abStack117 + 1));
		pbVar10 = abStack117 + iVar9;
		while (true) {
			piVar20 = (int *)uVar19;
			uVar18 = (undefined4)uVar17;
			uVar16 = (undefined4)lVar15;
			iVar7 = (int)uVar6;
			iVar9 = iVar9 + -1;
			if (iVar9 < 0)
				break;
			bVar2 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar10]];
			lParm1 = lParm1 - ((ulonglong)(byte)(&DAT_100f6230)[(uint)bVar2] + 1);
			if (bVar2 != 0) {
				CPrintString(lParm1, (ulonglong)bVar2, lParm5, uVar13, lVar22, iVar14, uVar16, uVar18,
				    in_stack_ffffff58);
			}
			pbVar10 = pbVar10 + -1;
		}
	}
	if (*piVar20 == iParm2) {
		if (iParm3 == 0) {
			iVar11 = 0x294 - iVar11;
		} else {
			iVar11 = iVar11 + (int)uVar25 + iVar23 + 4;
		}
		CelDecodeOnly(iVar11, lVar21 + 0xcd, (ulonglong) * *(uint **)(iVar7 + -0x7774),
		    (ulonglong) * *(uint **)(iVar7 + -0x6ef0), 0xc, iVar14, uVar16, uVar18, in_stack_ffffff58);
	}
	return;
}

void DrawSLine(int param_1)

{
	undefined uVar1;
	int iVar2;
	longlong lVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	int iVar8;
	longlong lVar7;
	int iVar9;
	longlong lVar10;

	if (*_DAT_100f20dc == '\x01') {
		iVar5 = 0x22b5a;
		iVar8 = *(int *)(PTR_DAT_100f1938 + *(int *)(PTR_DAT_100f1db4 + param_1 * 4) * 4 + 0x318) + 0x5a;
		iVar2 = 0x92;
		iVar9 = 0xb6;
	} else {
		iVar5 = 0x22c9a;
		iVar8 = *(int *)(PTR_DAT_100f1938 + *(int *)(PTR_DAT_100f1db4 + param_1 * 4) * 4 + 0x318) + 0x19a;
		iVar2 = 0x42;
		iVar9 = 0x1f6;
	}
	lVar3 = (ulonglong)(uint)(iVar2 << 2) + 2;
	lVar10 = 3;
	puVar6 = (undefined *)(*(int *)PTR_DAT_100f17cc + iVar5);
	puVar4 = (undefined *)(*(int *)PTR_DAT_100f17cc + iVar8);
	lVar7 = lVar3;
	do {
		do {
			uVar1 = *puVar6;
			lVar7 = lVar7 + -1;
			puVar6 = puVar6 + 1;
			*puVar4 = uVar1;
			puVar4 = puVar4 + 1;
		} while (lVar7 != 0);
		lVar10 = lVar10 + -1;
		puVar6 = puVar6 + iVar9;
		puVar4 = puVar4 + iVar9;
		lVar7 = lVar3;
	} while (lVar10 != 0);
	return;
}

void DrawSArrows(int iParm1, int iParm2)

{
	uint uVar1;
	uint *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	int iVar6;
	undefined8 in_r8;
	int iVar7;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar8;
	longlong lVar9;
	uint *puVar10;
	uint *puVar11;
	undefined4 in_stack_ffffffa8;

	puVar3 = PTR_DAT_100f1db4;
	puVar2 = _DAT_100f1d48;
	uVar4 = ZEXT48(&toc);
	puVar11 = (uint *)(PTR_DAT_100f1db4 + iParm1 * 4);
	puVar10 = (uint *)(PTR_DAT_100f1db4 + iParm2 * 4);
	uVar5 = (ulonglong)*puVar11;
	lVar9 = uVar5 + 0xcc;
	lVar8 = (ulonglong)*puVar10 + 0xcc;
	if (*_DAT_100f20cc == -1) {
		CelDecodeOnly(0x299, lVar9, (ulonglong)*_DAT_100f1d48, 10, 0xc, (int)in_r8, in_r9, in_r10,
		    in_stack_ffffffa8);
	} else {
		CelDecodeOnly(0x299, lVar9, (ulonglong)*_DAT_100f1d48, 0xc, 0xc, (int)in_r8, in_r9, in_r10,
		    in_stack_ffffffa8);
	}
	if (**(char **)((int)uVar4 + -0x6f08) == -1) {
		CelDecodeOnly(0x299, lVar8, (ulonglong)*puVar2, 9, 0xc, (int)in_r8, in_r9, in_r10, in_stack_ffffffa8);
	} else {
		CelDecodeOnly(0x299, lVar8, (ulonglong)*puVar2, 0xb, 0xc, (int)in_r8, in_r9, in_r10, in_stack_ffffffa8);
	}
	lVar9 = uVar5 + 0xd8;
	while ((int)lVar9 < (int)lVar8) {
		CelDecodeOnly(0x299, lVar9, (ulonglong)*puVar2, 0xe, 0xc, (int)in_r8, in_r9, in_r10, in_stack_ffffffa8);
		lVar9 = lVar9 + 0xc;
	}
	iVar6 = (int)uVar4;
	iVar7 = **(int **)(iVar6 + -0x6f00);
	if (iVar7 == 0x16) {
		iVar7 = **(int **)(iVar6 + -0x6f0c);
	}
	if (**(int **)(iVar6 + -0x6f10) < 2) {
		lVar8 = 0;
	} else {
		iVar6 = (((**(int **)(iVar6 + -0x6f14) + (iVar7 - **(int **)(iVar6 + -0x6f18) >> 2)) * 1000) / (**(int **)(iVar6 + -0x6f10) + -1)) * ((*puVar10 - *puVar11) + -0x18);
		uVar1 = iVar6 / 1000 + (iVar6 >> 0x1f);
		lVar8 = ((longlong)(int)((ulonglong)((longlong)iVar6 * 0x10624dd3) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar1) + (ulonglong)(uVar1 >> 0x1f);
	}
	CelDecodeOnly(0x299, (ulonglong) * (uint *)(puVar3 + iParm1 * 4 + 4) + lVar8 + 0xcc, (ulonglong)*puVar2, 0xd, 0xc, iVar7, in_r9, in_r10, in_stack_ffffffa8);
	return;
}

void DrawSTextHelp(void)

{
	undefined4 *puVar1;

	puVar1 = _DAT_100f20d0;
	*_DAT_100f20dc = 1;
	*puVar1 = 0xffffffff;
	return;
}

void ClearSText(int param_1, int param_2)

{
	ulonglong uVar1;
	uint uVar2;
	undefined4 *puVar3;

	puVar3 = (undefined4 *)(_DAT_100f20d4 + param_1 * 0x9c);
	uVar2 = param_2 - param_1;
	if (param_2 <= param_1) {
		return;
	}
	uVar1 = (ulonglong)(uVar2 >> 3);
	if (uVar2 >> 3 != 0) {
		do {
			*puVar3 = 0;
			puVar3[1] = 0;
			*(undefined *)(puVar3 + 2) = 0;
			puVar3[0x22] = 0;
			*(undefined *)(puVar3 + 0x23) = 0;
			puVar3[0x24] = 0;
			puVar3[0x25] = 0;
			puVar3[0x26] = 0xffffffff;
			puVar3[0x27] = 0;
			puVar3[0x28] = 0;
			*(undefined *)(puVar3 + 0x29) = 0;
			puVar3[0x49] = 0;
			*(undefined *)(puVar3 + 0x4a) = 0;
			puVar3[0x4b] = 0;
			puVar3[0x4c] = 0;
			puVar3[0x4d] = 0xffffffff;
			puVar3[0x4e] = 0;
			puVar3[0x4f] = 0;
			*(undefined *)(puVar3 + 0x50) = 0;
			puVar3[0x70] = 0;
			*(undefined *)(puVar3 + 0x71) = 0;
			puVar3[0x72] = 0;
			puVar3[0x73] = 0;
			puVar3[0x74] = 0xffffffff;
			puVar3[0x75] = 0;
			puVar3[0x76] = 0;
			*(undefined *)(puVar3 + 0x77) = 0;
			puVar3[0x97] = 0;
			*(undefined *)(puVar3 + 0x98) = 0;
			puVar3[0x99] = 0;
			puVar3[0x9a] = 0;
			puVar3[0x9b] = 0xffffffff;
			puVar3[0x9c] = 0;
			puVar3[0x9d] = 0;
			*(undefined *)(puVar3 + 0x9e) = 0;
			puVar3[0xbe] = 0;
			*(undefined *)(puVar3 + 0xbf) = 0;
			puVar3[0xc0] = 0;
			puVar3[0xc1] = 0;
			puVar3[0xc2] = 0xffffffff;
			puVar3[0xc3] = 0;
			puVar3[0xc4] = 0;
			*(undefined *)(puVar3 + 0xc5) = 0;
			puVar3[0xe5] = 0;
			*(undefined *)(puVar3 + 0xe6) = 0;
			puVar3[0xe7] = 0;
			puVar3[0xe8] = 0;
			puVar3[0xe9] = 0xffffffff;
			puVar3[0xea] = 0;
			puVar3[0xeb] = 0;
			*(undefined *)(puVar3 + 0xec) = 0;
			puVar3[0x10c] = 0;
			*(undefined *)(puVar3 + 0x10d) = 0;
			puVar3[0x10e] = 0;
			puVar3[0x10f] = 0;
			puVar3[0x110] = 0xffffffff;
			puVar3[0x111] = 0;
			puVar3[0x112] = 0;
			*(undefined *)(puVar3 + 0x113) = 0;
			puVar3[0x133] = 0;
			*(undefined *)(puVar3 + 0x134) = 0;
			puVar3[0x135] = 0;
			puVar3[0x136] = 0;
			puVar3[0x137] = 0xffffffff;
			puVar3 = puVar3 + 0x138;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
		uVar2 = uVar2 & 7;
		if (uVar2 == 0) {
			return;
		}
	}
	do {
		*puVar3 = 0;
		puVar3[1] = 0;
		*(undefined *)(puVar3 + 2) = 0;
		puVar3[0x22] = 0;
		*(undefined *)(puVar3 + 0x23) = 0;
		puVar3[0x24] = 0;
		puVar3[0x25] = 0;
		puVar3[0x26] = 0xffffffff;
		puVar3 = puVar3 + 0x27;
		uVar2 = uVar2 - 1;
	} while (uVar2 != 0);
	return;
}

void FUN_100a6430(int param_1)

{
	int iVar1;

	iVar1 = _DAT_100f20d4 + param_1 * 0x9c;
	*(undefined4 *)(_DAT_100f20d4 + param_1 * 0x9c) = 0;
	*(undefined4 *)(iVar1 + 4) = 0;
	*(undefined *)(iVar1 + 8) = 0;
	*(undefined4 *)(iVar1 + 0x90) = 1;
	return;
}

void FUN_100a6458(int param_1, undefined4 param_2)

{
	*(undefined4 *)(_DAT_100f20d4 + param_1 * 0x9c + 0x98) = param_2;
	return;
}

void FUN_100a646c(int param_1, undefined4 param_2)

{
	*(undefined4 *)(_DAT_100f20d4 + param_1 * 0x9c + 4) = param_2;
	return;
}

void FUN_100a6480(undefined4 param_1, int param_2, undefined4 param_3, int param_4, undefined param_5,
    undefined4 param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined4 *puVar1;

	puVar1 = (undefined4 *)(_DAT_100f20d4 + param_2 * 0x9c);
	*puVar1 = param_1;
	puVar1[1] = 0;
	strcpy((int)(puVar1 + 2), param_4);
	puVar1[0x22] = param_3;
	*(undefined *)(puVar1 + 0x23) = param_5;
	puVar1[0x24] = 0;
	puVar1[0x25] = param_6;
	return;
}

void FUN_100a64e4(int param_1, int param_2, undefined8 param_3, char *param_4, undefined4 param_5,
    undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff38;
	undefined in_stack_ffffff3f;
	undefined4 in_stack_ffffff4c;
	undefined4 in_stack_ffffff50;
	undefined4 in_stack_ffffff54;
	undefined4 in_stack_ffffff58;
	undefined4 in_stack_ffffff5c;
	undefined4 in_stack_ffffff60;
	undefined4 in_stack_ffffff64;
	char local_98[132];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar3 = PTR_DAT_100f3910;
	puVar2 = PTR_DAT_100f191c;
	uVar5 = (undefined)param_3;
	ppuVar4 = &toc;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	local_98[0] = '\0';
	if (*(int *)(param_1 + 0x38) != 0) {
		uVar6 = uVar5;
		ppuVar4 = &toc;
		if ((*(char *)(param_1 + 0x3c) != '\x02') && (uVar6 = uVar5, ppuVar4 = &toc, *(char *)(param_1 + 0x14c) != -1)) {
			uVar6 = uVar5;
			ppuVar4 = &toc;
			PrintItemPower(*(char *)(param_1 + 0x14c), (char)param_1, uVar5, (char)param_4, (char)param_5,
			    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff38);
			strcat((int)local_98, (int)puVar2);
		}
		if (*(char *)(param_1 + 0x14d) != -1) {
			PrintItemPower(*(char *)(param_1 + 0x14d), (char)param_1, uVar6, (char)param_4, (char)param_5,
			    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff38);
			if (local_98[0] != '\0') {
				strcat((int)local_98, (int)puVar3);
			}
			strcat((int)local_98, (int)puVar2);
		}
	}
	if (*(int *)(param_1 + 0xdc) == 0x17) {
		param_4 = *(char **)(param_1 + 0xe8);
		if (param_4 != (char *)0x0) {
			sprintf((int)puVar2, ppuVar4[-0x15b1], *(undefined4 *)(param_1 + 0xe4), param_4, param_5,
			    param_6, param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
			    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
			    in_stack_ffffff60, in_stack_ffffff64);
			if (local_98[0] != '\0') {
				strcat((int)local_98, (int)puVar3);
			}
			strcat((int)local_98, (int)puVar2);
		}
	}
	if (local_98[0] != '\0') {
		param_4 = local_98;
		param_6 = 0;
		param_5 = (int)param_3;
		FUN_100a6480(0x28, param_2, 0, (int)param_4, uVar5, 0, (char)param_7, (char)param_8, in_stack_ffffff38);
		param_2 = param_2 + 1;
	}
	local_98[0] = '\0';
	if (*(char *)(param_1 + 0xbe) == '\x01') {
		param_4 = *(char **)(param_1 + 0xd0);
		sprintf((int)local_98, ppuVar4[-0x15b2], *(undefined4 *)(param_1 + 0xcc), param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
		    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
		    in_stack_ffffff60, in_stack_ffffff64);
	}
	if (*(char *)(param_1 + 0xbe) == '\x02') {
		sprintf((int)local_98, ppuVar4[-0x15b3], *(undefined4 *)(param_1 + 0xd4), param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
		    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
		    in_stack_ffffff60, in_stack_ffffff64);
	}
	iVar1 = *(int *)(param_1 + 0xf0);
	if ((iVar1 == 0xff) || (iVar1 == 0)) {
		strcat((int)local_98, (int)ppuVar4[-0x15b4]);
	} else {
		sprintf((int)puVar2, ppuVar4[-0x15b5], *(undefined4 *)(param_1 + 0xec), iVar1, param_5, param_6,
		    param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
		    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
		    in_stack_ffffff60, in_stack_ffffff64);
		strcat((int)local_98, (int)puVar2);
	}
	uVar7 = (undefined)param_8;
	uVar6 = (undefined)param_7;
	if (*(int *)(param_1 + 8) == 0) {
		local_98[0] = '\0';
	}
	if ((longlong) * (char *)(param_1 + 0x160) + (ulonglong) * (byte *)(param_1 + 0x161) + (longlong) * (char *)(param_1 + 0x162) == 0) {
		strcat((int)local_98, (int)ppuVar4[-0x15b6]);
	} else {
		strcpy((int)puVar2, (int)ppuVar4[-0x15b7]);
		if (*(char *)(param_1 + 0x160) != '\0') {
			sprintf((int)puVar2, ppuVar4[-0x15b8], puVar2, (int)*(char *)(param_1 + 0x160), param_5,
			    param_6, param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
			    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
			    in_stack_ffffff60, in_stack_ffffff64);
		}
		if (*(byte *)(param_1 + 0x161) != 0) {
			sprintf((int)puVar2, ppuVar4[-0x15b9], puVar2, (uint) * (byte *)(param_1 + 0x161), param_5,
			    param_6, param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
			    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
			    in_stack_ffffff60, in_stack_ffffff64);
		}
		uVar7 = (undefined)param_8;
		uVar6 = (undefined)param_7;
		if (*(char *)(param_1 + 0x162) != '\0') {
			sprintf((int)puVar2, ppuVar4[-0x15ba], puVar2, (int)*(char *)(param_1 + 0x162), param_5,
			    param_6, param_7, param_8, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
			    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
			    in_stack_ffffff60, in_stack_ffffff64);
		}
		strcat((int)local_98, (int)puVar2);
	}
	FUN_100a6480(0x28, param_2, 0, (int)local_98, uVar5, 0, uVar6, uVar7, in_stack_ffffff38);
	if ((*(char *)(param_1 + 0x3c) == '\x02') && (*(int *)(param_1 + 0x38) != 0)) {
		FUN_100a6480(0x28, param_2 + 1, 0, (int)ppuVar4[-0x15bb], uVar5, 0, uVar6, uVar7, in_stack_ffffff38);
	}
	return;
}

void StoreAutoPlace(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	undefined4 uVar2;
	undefined *puVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	int iVar13;
	ulonglong uVar14;
	int iVar15;
	longlong lVar16;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f1824;
	lVar12 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	uVar5 = ZEXT48(&toc);
	uVar14 = ZEXT48(PTR_DAT_100f1828);
	SetICursor(*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x5494) + 0xc);
	iVar13 = (int)uVar5;
	uVar6 = 0;
	uVar1 = **(uint **)(iVar13 + -0x7648);
	uVar4 = (ulonglong)uVar1;
	iVar15 = **(int **)(iVar13 + -0x764c);
	if ((uVar1 == 1) && (iVar15 == 1)) {
		lVar10 = uVar14 + (ulonglong) * (uint *)puVar3 * 0x55ec;
		if ((*(int *)((int)lVar10 + 0x5538) != 0) && (*(int *)(iVar13 + *(int *)((int)lVar10 + 0x553c) * 0x4c + 0x3898) != 0)) {
			lVar11 = 0;
			lVar7 = lVar10;
			while (((int)lVar11 < 8 && ((int)uVar6 == 0))) {
				if (*(int *)((int)lVar7 + 0x485c) == -1) {
					lVar16 = 0x2e;
					lVar9 = lVar7 + 0x484c;
					lVar8 = lVar10 + 0x53cc;
					do {
						lVar8 = lVar8 + 8;
						uVar2 = ((undefined4 *)lVar8)[1];
						lVar9 = lVar9 + 8;
						*(undefined4 *)lVar9 = *(undefined4 *)lVar8;
						((undefined4 *)lVar9)[1] = uVar2;
						lVar16 = lVar16 + -1;
					} while (lVar16 != 0);
					uVar6 = 1;
				}
				lVar7 = lVar7 + 0x170;
				lVar11 = lVar11 + 1;
			}
		}
		iVar13 = 0x1e;
		while ((iVar13 < 0x28 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 1, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
		}
		iVar13 = 0x14;
		while ((iVar13 < 0x1e && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 1, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
		}
		iVar13 = 10;
		while ((iVar13 < 0x14 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 1, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
		}
		iVar13 = 0;
		while ((iVar13 < 10 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 1, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
		}
	}
	if ((uVar1 == 1) && (iVar15 == 2)) {
		iVar13 = 0x1d;
		while ((0x13 < iVar13 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 2, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + -1;
		}
		iVar13 = 9;
		while ((-1 < iVar13 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 2, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + -1;
		}
		iVar13 = 0x13;
		while ((9 < iVar13 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 2, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + -1;
		}
	}
	if ((uVar1 == 1) && (iVar15 == 3)) {
		iVar13 = 0;
		while ((iVar13 < 0x14 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 3, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
		}
	}
	if ((uVar1 == 2) && (iVar15 == 2)) {
		iVar13 = 0;
		lVar7 = uVar5 + 0x35c4;
		while ((iVar13 < 10 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, *(int *)lVar7, uVar4, 2, 1, (char)lVar10, (char)lVar11,
			    (char)lVar12, in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
			lVar7 = lVar7 + 4;
		}
		iVar13 = 0x15;
		while ((iVar13 < 0x1d && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 2, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 2;
		}
		iVar13 = 1;
		while ((iVar13 < 9 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 2, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 2;
		}
		iVar13 = 10;
		while ((iVar13 < 0x13 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar13, uVar4, 2, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar13 = iVar13 + 1;
		}
	}
	if ((uVar1 == 2) && (iVar15 == 3)) {
		iVar15 = 0;
		while ((iVar15 < 9 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar15, uVar4, 3, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar15 = iVar15 + 1;
		}
		iVar15 = 10;
		while ((iVar15 < 0x13 && ((int)uVar6 == 0))) {
			uVar6 = AutoPlace(*(int *)puVar3, iVar15, uVar4, 3, 1, (char)lVar10, (char)lVar11, (char)lVar12,
			    in_stack_ffffffb8);
			iVar15 = iVar15 + 1;
		}
	}
	return;
}

void FUN_100a6bc4(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_Welcome_to_the_100f38e0;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	FUN_100a6480(0, 1, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 3, 1, (int)ppuVar3[-0x15bd], 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 7, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 10, 1, (int)ppuVar3[-0x15bf], 1, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0xc, 1, (int)ppuVar3[-0x15c0], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0xe, 1, (int)ppuVar3[-0x15c1], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0x10, 1, (int)ppuVar3[-0x15c2], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0x12, 1, (int)ppuVar3[-0x15c3], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0x14, 1, (int)ppuVar3[-0x15c4], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6430(5);
	*(undefined4 *)ppuVar3[-0x1bc4] = 0x14;
	return;
}

void FUN_100a6d04(int iParm1)

{
	int *piVar1;
	int *piVar2;
	ulonglong uVar3;
	char *pcVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 in_r9;
	undefined4 in_r10;
	ulonglong uVar7;
	int iVar8;
	int iVar9;
	undefined4 in_stack_ffffffa8;

	piVar2 = _DAT_100f20d0;
	piVar1 = _DAT_100f20b4;
	uVar3 = ZEXT48(&toc);
	ClearSText(5, 0x15);
	iVar9 = *(int *)((int)uVar3 + -0x71a4) + iParm1 * 0x170;
	**(undefined4 **)((int)uVar3 + -0x6f18) = 5;
	iVar8 = 5;
	do {
		if (*(int *)(iVar9 + 8) != -1) {
			uVar7 = (ulonglong)(*(char *)(iVar9 + 0x3c) != '\0');
			if (*(int *)(iVar9 + 0x164) == 0) {
				uVar7 = 2;
			}
			uVar5 = (undefined4)uVar7;
			if (*(char *)(iVar9 + 0x3c) == '\0') {
				pcVar4 = (char *)(iVar9 + 0x3d);
				uVar6 = 1;
				FUN_100a6480(0x14, iVar8, 0, (int)pcVar4, (char)uVar7, 1, (char)in_r9, (char)in_r10,
				    in_stack_ffffffa8);
			} else {
				pcVar4 = (char *)(iVar9 + 0x7d);
				uVar6 = 1;
				FUN_100a6480(0x14, iVar8, 0, (int)pcVar4, (char)uVar7, 1, (char)in_r9, (char)in_r10,
				    in_stack_ffffffa8);
			}
			FUN_100a6458(iVar8, *(undefined4 *)(iVar9 + 200));
			FUN_100a64e4(iVar9, iVar8 + 1, uVar7, pcVar4, uVar5, uVar6, in_r9, in_r10, in_stack_ffffffa8);
			*piVar1 = iVar8;
			iVar9 = iVar9 + 0x170;
		}
		iVar8 = iVar8 + 4;
	} while (iVar8 < 0x14);
	iVar8 = *piVar2;
	if ((*(int *)(*(int *)((int)uVar3 + -0x6efc) + iVar8 * 0x9c + 0x94) == 0) && (iVar8 != 0x16)) {
		*piVar2 = *piVar1;
	}
	return;
}

void FUN_100a6e2c(void)

{
	undefined *puVar1;
	undefined *puVar2;
	int *piVar3;
	uint *puVar4;
	int *piVar5;
	undefined4 *puVar6;
	undefined **ppuVar7;
	undefined *puVar8;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined uVar9;
	undefined4 in_r10;
	undefined uVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = _DAT_100f20d8;
	piVar5 = _DAT_100f20c0;
	puVar4 = _DAT_100f20bc;
	piVar3 = _DAT_100f20b0;
	puVar2 = PTR_DAT_100f191c;
	puVar1 = PTR_DAT_100f1828;
	uVar10 = (undefined)in_r10;
	uVar9 = (undefined)in_r9;
	ppuVar7 = &toc;
	*_DAT_100f20dc = 1;
	*puVar6 = 1;
	puVar8 = PTR_DAT_100f1824;
	*puVar4 = 0;
	sprintf((int)puVar2, PTR_s_I_have_these_items_for_sale___Yo_100f38bc,
	    *(undefined4 *)(puVar1 + *(int *)puVar8 * 0x55ec + 0x1c8), in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
	    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
	    in_stack_ffffffe4);
	FUN_100a6480(0, 1, 1, (int)puVar2, 3, 0, uVar9, uVar10, in_stack_ffffffb8);
	FUN_100a6430(3);
	FUN_100a6430(0x15);
	FUN_100a6d04((ulonglong)*puVar4);
	FUN_100a6480(0, 0x16, 1, (int)ppuVar7[-0x15c6], 0, 0, uVar9, uVar10, in_stack_ffffffb8);
	FUN_100a646c(0x16, 6);
	*piVar5 = 0;
	puVar8 = ppuVar7[-0x1c69];
	while (*(int *)(puVar8 + 8) != -1) {
		puVar8 = puVar8 + 0x170;
		*piVar5 = *piVar5 + 1;
	}
	*piVar3 = *piVar5 + -4;
	if (*piVar3 < 0) {
		*piVar3 = 0;
	}
	return;
}

void FUN_100a6f44(int iParm1)

{
	int *piVar1;
	int *piVar2;
	ulonglong uVar3;
	char *pcVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar7;
	ulonglong uVar8;
	int iVar9;
	int iVar10;
	undefined4 in_stack_ffffffa8;

	piVar2 = _DAT_100f20d0;
	piVar1 = _DAT_100f20b4;
	iVar10 = _DAT_100f1e28;
	uVar3 = ZEXT48(&toc);
	ClearSText(5, 0x15);
	**(undefined4 **)((int)uVar3 + -0x6f18) = 5;
	iVar7 = 0;
	iVar9 = iVar10;
	while (iParm1 != 0) {
		if (*(int *)(iVar9 + 8) != -1) {
			iParm1 = iParm1 + -1;
		}
		iVar9 = iVar9 + 0x170;
		iVar7 = iVar7 + 1;
	}
	iVar10 = iVar10 + iVar7 * 0x170;
	iVar9 = 5;
	while ((iVar9 < 0x14 && (iVar7 < 6))) {
		if (*(int *)(iVar10 + 8) == -1) {
			if (iVar7 < 6) {
				iVar9 = iVar9 + -4;
			}
		} else {
			uVar8 = (ulonglong)(*(char *)(iVar10 + 0x3c) != '\0');
			if (*(int *)(iVar10 + 0x164) == 0) {
				uVar8 = 2;
			}
			uVar5 = (undefined4)uVar8;
			pcVar4 = (char *)(iVar10 + 0x7d);
			uVar6 = 1;
			FUN_100a6480(0x14, iVar9, 0, (int)pcVar4, (char)uVar8, 1, (char)in_r9, (char)in_r10, in_stack_ffffffa8);
			FUN_100a6458(iVar9, *(undefined4 *)(iVar10 + 200));
			FUN_100a64e4(iVar10, iVar9 + 1, uVar8, pcVar4, uVar5, uVar6, in_r9, in_r10, in_stack_ffffffa8);
			*piVar1 = iVar9;
		}
		iVar10 = iVar10 + 0x170;
		iVar7 = iVar7 + 1;
		iVar9 = iVar9 + 4;
	}
	iVar10 = *piVar2;
	if ((*(int *)(*(int *)((int)uVar3 + -0x6efc) + iVar10 * 0x9c + 0x94) == 0) && (iVar10 != 0x16)) {
		*piVar2 = *piVar1;
	}
	return;
}

undefined8
FUN_100a7094(undefined8 uParm1, undefined8 uParm2, undefined param_3, undefined param_4,
    undefined8 uParm5, undefined8 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	int *piVar5;
	uint *puVar6;
	int *piVar7;
	undefined4 *puVar8;
	undefined **ppuVar9;
	undefined **ppuVar10;
	undefined8 uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	piVar7 = _DAT_100f20c0;
	puVar6 = _DAT_100f20bc;
	piVar5 = _DAT_100f20b0;
	iVar4 = _DAT_100f1e28;
	puVar3 = PTR_DAT_100f191c;
	uVar13 = (undefined)uParm8;
	uVar12 = (undefined)uParm7;
	ppuVar10 = &toc;
	ppuVar9 = &toc;
	*_DAT_100f20c0 = 0;
	if (*(int *)(iVar4 + 8) != -1) {
		*piVar7 = *piVar7 + 1;
	}
	if (*(int *)(iVar4 + 0x178) != -1) {
		*piVar7 = *piVar7 + 1;
	}
	if (*(int *)(iVar4 + 0x2e8) != -1) {
		*piVar7 = *piVar7 + 1;
	}
	if (*(int *)(iVar4 + 0x458) != -1) {
		*piVar7 = *piVar7 + 1;
	}
	if (*(int *)(iVar4 + 0x5c8) != -1) {
		*piVar7 = *piVar7 + 1;
	}
	if (*(int *)(iVar4 + 0x738) != -1) {
		*piVar7 = *piVar7 + 1;
	}
	puVar8 = _DAT_100f20d8;
	if (*piVar7 == 0) {
		StartStore('\x01', (char)iVar4 + -0x40, param_3, param_4, (char)uParm5, (char)uParm6, uVar12, uVar13,
		    in_stack_ffffffb8);
		uVar11 = 0;
		*(undefined4 *)ppuVar9[-0x1bc0] = 0xe;
	} else {
		*_DAT_100f20dc = 1;
		puVar1 = PTR_DAT_100f1824;
		*puVar8 = 1;
		puVar2 = PTR_DAT_100f1828;
		*puVar6 = 0;
		sprintf((int)puVar3, PTR_s_I_have_these_premium_items_for_s_100f38b4,
		    *(undefined4 *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x1c8), puVar2, (int)uParm5,
		    (int)uParm6, uParm7, uParm8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
		FUN_100a6480(0, 1, 1, (int)puVar3, 3, 0, uVar12, uVar13, in_stack_ffffffb8);
		FUN_100a6430(3);
		FUN_100a6430(0x15);
		FUN_100a6480(0, 0x16, 1, (int)ppuVar10[-0x15c6], 0, 0, uVar12, uVar13, in_stack_ffffffb8);
		FUN_100a646c(0x16, 6);
		*piVar5 = *piVar7 + -4;
		if (*piVar5 < 0) {
			*piVar5 = 0;
		}
		FUN_100a6f44((ulonglong)*puVar6);
		uVar11 = 1;
	}
	return uVar11;
}

undefined8 FUN_100a7258(int param_1)

{
	int iVar1;

	iVar1 = *(int *)(PTR_DAT_100f1828 + param_1 * 0x170 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0xeb0);
	if (iVar1 == -1) {
		return 0;
	}
	if (iVar1 == 0) {
		return 0;
	}
	if (iVar1 == 0xb) {
		return 0;
	}
	if (iVar1 == 0xe) {
		return 0;
	}
	if (iVar1 == 10) {
		return 0;
	}
	if (*(int *)(PTR_DAT_100f1828 + param_1 * 0x170 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1010) == 0x21) {
		return 0;
	}
	return 1;
}

void FUN_100a72e4(int iParm1)

{
	int *piVar1;
	int *piVar2;
	int *piVar3;
	undefined **ppuVar4;
	undefined4 uVar5;
	char *pcVar6;
	undefined4 uVar7;
	undefined4 uVar8;
	undefined4 in_r9;
	undefined4 in_r10;
	ulonglong uVar9;
	int iVar10;
	undefined *puVar11;
	undefined4 in_stack_ffffffa8;

	piVar3 = _DAT_100f20c0;
	piVar2 = _DAT_100f20b4;
	piVar1 = _DAT_100f20b0;
	ppuVar4 = &toc;
	ClearSText(5, 0x15);
	puVar11 = ppuVar4[-0x1bc9] + iParm1 * 0x170;
	*(undefined4 *)ppuVar4[-0x1bc6] = 5;
	iVar10 = 5;
	while ((iVar10 < 0x14 && (iParm1 < *piVar3))) {
		if (*(int *)(puVar11 + 8) != -1) {
			uVar9 = (ulonglong)(puVar11[0x3c] != '\0');
			if (*(int *)(puVar11 + 0x164) == 0) {
				uVar9 = 2;
			}
			uVar7 = (undefined4)uVar9;
			if ((puVar11[0x3c] == '\0') || (*(int *)(puVar11 + 0x38) == 0)) {
				pcVar6 = puVar11 + 0x3d;
				uVar8 = 1;
				FUN_100a6480(0x14, iVar10, 0, (int)pcVar6, (char)uVar9, 1, (char)in_r9, (char)in_r10,
				    in_stack_ffffffa8);
				uVar5 = *(undefined4 *)(puVar11 + 0xc4);
			} else {
				pcVar6 = puVar11 + 0x7d;
				uVar8 = 1;
				FUN_100a6480(0x14, iVar10, 0, (int)pcVar6, (char)uVar9, 1, (char)in_r9, (char)in_r10,
				    in_stack_ffffffa8);
				uVar5 = *(undefined4 *)(puVar11 + 200);
			}
			FUN_100a6458(iVar10, uVar5);
			FUN_100a64e4((int)puVar11, iVar10 + 1, uVar9, pcVar6, uVar7, uVar8, in_r9, in_r10, in_stack_ffffffa8);
			*piVar2 = iVar10;
		}
		puVar11 = puVar11 + 0x170;
		iParm1 = iParm1 + 1;
		iVar10 = iVar10 + 4;
	}
	*piVar1 = *piVar3 + -4;
	if (*piVar1 < 0) {
		*piVar1 = 0;
	}
	return;
}

void FUN_100a7428(void)

{
	uint uVar1;
	undefined4 *puVar2;
	undefined4 uVar3;
	bool bVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	uint *puVar9;
	uint *puVar10;
	undefined *puVar11;
	ulonglong uVar12;
	undefined8 uVar13;
	int iVar14;
	undefined4 *puVar15;
	longlong in_r6;
	undefined *puVar16;
	longlong in_r7;
	undefined8 in_r8;
	undefined4 in_r9;
	undefined uVar17;
	undefined4 in_r10;
	undefined uVar18;
	longlong lVar19;
	int iVar20;
	ulonglong uVar21;
	longlong lVar22;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar11 = PTR_DAT_100f38b8;
	puVar2 = _DAT_100f20d8;
	puVar10 = _DAT_100f20c0;
	puVar9 = _DAT_100f20bc;
	puVar8 = PTR_DAT_100f20ac;
	puVar7 = PTR_DAT_100f20a8;
	puVar6 = PTR_DAT_100f191c;
	puVar16 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	uVar12 = ZEXT48(&toc);
	lVar19 = 0;
	uVar21 = ZEXT48(PTR_DAT_100f20ac);
	iVar20 = 0;
	bVar4 = false;
	*_DAT_100f20dc = 1;
	*puVar10 = 0;
	*(undefined4 *)(puVar8 + 8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x178) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2e8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x458) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x5c8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x738) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x8a8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0xa18) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0xb88) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0xcf8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0xe68) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0xfd8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1148) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x12b8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1428) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1598) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1708) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1878) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x19e8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 7000) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1cc8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1e38) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x1fa8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2118) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2288) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x23f8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2568) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x26d8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2848) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x29b8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2b28) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2c98) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2e08) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x2f78) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x30e8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3258) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x33c8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3538) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x36a8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3818) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3988) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3af8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3c68) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3dd8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x3f48) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x40b8) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x4228) = 0xffffffff;
	*(undefined4 *)(puVar8 + 0x4398) = 0xffffffff;
	while (true) {
		uVar18 = (undefined)in_r10;
		uVar17 = (undefined)in_r9;
		iVar14 = *(int *)puVar5 * 0x55ec;
		if (*(int *)(puVar16 + iVar14 + 0x4828) <= (int)lVar19)
			break;
		uVar13 = FUN_100a7258((int)lVar19);
		if ((int)uVar13 != 0) {
			uVar1 = *puVar10;
			lVar22 = 0x2e;
			in_r7 = uVar21 + (ulonglong)uVar1 * 0x170;
			in_r6 = in_r7 + -8;
			bVar4 = true;
			puVar15 = (undefined4 *)(puVar16 + *(int *)puVar5 * 0x55ec + iVar20 + 0xea0);
			do {
				uVar3 = puVar15[3];
				in_r6 = in_r6 + 8;
				*(undefined4 *)in_r6 = puVar15[2];
				((undefined4 *)in_r6)[1] = uVar3;
				lVar22 = lVar22 + -1;
				puVar15 = puVar15 + 2;
			} while (lVar22 != 0);
			iVar14 = (int)in_r7;
			if ((*(char *)(iVar14 + 0x3c) != '\0') && (*(int *)(iVar14 + 0x38) != 0)) {
				*(undefined4 *)(iVar14 + 0xc4) = *(undefined4 *)(iVar14 + 200);
			}
			*(int *)(iVar14 + 0xc4) = *(int *)(iVar14 + 0xc4) >> 2;
			if (*(int *)(iVar14 + 0xc4) == 0) {
				*(undefined4 *)(iVar14 + 0xc4) = 1;
			}
			*(undefined4 *)(iVar14 + 200) = *(undefined4 *)(iVar14 + 0xc4);
			puVar7[uVar1] = (char)lVar19;
			*puVar10 = *puVar10 + 1;
		}
		iVar20 = iVar20 + 0x170;
		lVar19 = lVar19 + 1;
	}
	iVar20 = (int)uVar12;
	if (bVar4) {
		puVar16 = puVar16 + iVar14;
		*puVar2 = 1;
		puVar2 = *(undefined4 **)(iVar20 + -0x6f20);
		*puVar9 = 0;
		uVar3 = *(undefined4 *)(iVar20 + -0x5724);
		*puVar2 = *(undefined4 *)(puVar16 + 0x4828);
		sprintf((int)puVar6, uVar3, *(undefined4 *)(puVar16 + 0x1c8), puVar16, (int)in_r7, (int)in_r8,
		    in_r9, in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4);
		FUN_100a6480(0, 1, 1, (int)puVar6, 3, 0, uVar17, uVar18, in_stack_ffffff98);
		FUN_100a6430(3);
		FUN_100a6430(0x15);
		FUN_100a72e4((ulonglong)*puVar9);
		FUN_100a6480(0, 0x16, 1, (int)puVar11, 0, 1, uVar17, uVar18, in_stack_ffffff98);
		FUN_100a646c(0x16, 6);
	} else {
		*puVar2 = 0;
		sprintf((int)puVar6, *(undefined4 *)(iVar20 + -0x5720),
		    *(undefined4 *)(puVar16 + iVar14 + 0x1c8), (int)in_r6, (int)in_r7, (int)in_r8, in_r9,
		    in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
		    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
		    in_stack_ffffffc4);
		FUN_100a6480(0, 1, 1, (int)puVar6, 3, 0, uVar17, uVar18, in_stack_ffffff98);
		FUN_100a6430(3);
		FUN_100a6430(0x15);
		FUN_100a6480(0, 0x16, 1, (int)puVar11, 0, 1, uVar17, uVar18, in_stack_ffffff98);
		FUN_100a646c(0x16, 6);
	}
	return;
}

undefined8 FUN_100a7734(int param_1)

{
	int iVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f1828 + param_1 * 0x170 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	iVar1 = *(int *)(puVar2 + 0xeb0);
	if (iVar1 == -1) {
		return 0;
	}
	if (iVar1 == 0) {
		return 0;
	}
	if (iVar1 == 0xb) {
		return 0;
	}
	if (iVar1 == 0xe) {
		return 0;
	}
	if (*(int *)(puVar2 + 0xf94) == *(int *)(puVar2 + 0xf98)) {
		return 0;
	}
	return 1;
}

void FUN_100a77b4(int param_1, undefined param_2)

{
	undefined4 uVar1;
	uint uVar2;
	undefined *puVar3;
	int *piVar4;
	int iVar5;
	undefined *puVar6;
	undefined4 *puVar7;
	undefined4 *puVar8;
	longlong lVar9;

	piVar4 = _DAT_100f20c0;
	lVar9 = 0x2e;
	puVar6 = PTR_DAT_100f20ac + *_DAT_100f20c0 * 0x170;
	puVar7 = (undefined4 *)(param_1 + -8);
	puVar8 = (undefined4 *)(puVar6 + -8);
	do {
		uVar1 = puVar7[3];
		puVar8[2] = puVar7[2];
		puVar8[3] = uVar1;
		lVar9 = lVar9 + -1;
		puVar7 = puVar7 + 2;
		puVar8 = puVar8 + 2;
	} while (lVar9 != 0);
	if (puVar6[0x3c] != '\0') {
		if (*(int *)(puVar6 + 0x38) != 0) {
			uVar2 = (*(int *)(puVar6 + 200) * 0x1e) / 100 + (*(int *)(puVar6 + 200) * 0x1e >> 0x1f);
			*(uint *)(puVar6 + 0xc4) = uVar2 + (uVar2 >> 0x1f);
		}
	}
	iVar5 = (((*(int *)(puVar6 + 0xf0) - *(int *)(puVar6 + 0xec)) * 100) / *(int *)(puVar6 + 0xf0)) * *(int *)(puVar6 + 0xc4);
	uVar2 = iVar5 / 100 + (iVar5 >> 0x1f);
	lVar9 = ((longlong)(int)((ulonglong)((longlong)iVar5 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U
	            | (ulonglong)uVar2)
	    + (ulonglong)(uVar2 >> 0x1f);
	iVar5 = (int)lVar9;
	if (lVar9 == 0) {
		if ((puVar6[0x3c] != '\0') && (*(int *)(puVar6 + 0x38) != 0)) {
			return;
		}
		iVar5 = 1;
	}
	if (1 < iVar5) {
		iVar5 = iVar5 >> 1;
	}
	*(int *)(puVar6 + 200) = iVar5;
	puVar3 = PTR_DAT_100f20a8;
	*(int *)(puVar6 + 0xc4) = iVar5;
	iVar5 = *piVar4;
	*piVar4 = iVar5 + 1;
	puVar3[iVar5] = param_2;
	return;
}

void FUN_100a78ac(void)

{
	undefined4 *puVar1;
	undefined4 uVar2;
	bool bVar3;
	undefined *puVar4;
	undefined *puVar5;
	uint *puVar6;
	undefined4 *puVar7;
	undefined *puVar8;
	ulonglong uVar9;
	undefined8 uVar10;
	int iVar11;
	undefined *puVar12;
	undefined8 in_r6;
	undefined *puVar13;
	undefined8 in_r7;
	undefined8 in_r8;
	undefined4 in_r9;
	undefined uVar14;
	undefined4 in_r10;
	undefined uVar15;
	longlong lVar16;
	int iVar17;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar8 = PTR_DAT_100f38b8;
	puVar7 = _DAT_100f20d8;
	puVar1 = _DAT_100f20c0;
	puVar6 = _DAT_100f20bc;
	puVar5 = PTR_DAT_100f191c;
	puVar13 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	uVar9 = ZEXT48(&toc);
	bVar3 = false;
	*_DAT_100f20dc = 1;
	puVar12 = PTR_DAT_100f20ac;
	*puVar1 = 0;
	*(undefined4 *)(puVar12 + 8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x178) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2e8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x458) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x5c8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x738) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x8a8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0xa18) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0xb88) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0xcf8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0xe68) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0xfd8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1148) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x12b8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1428) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1598) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1708) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1878) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x19e8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 7000) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1cc8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1e38) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x1fa8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2118) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2288) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x23f8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2568) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x26d8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2848) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x29b8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2b28) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2c98) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2e08) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x2f78) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x30e8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3258) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x33c8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3538) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x36a8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3818) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3988) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3af8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3c68) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3dd8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x3f48) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x40b8) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x4228) = 0xffffffff;
	*(undefined4 *)(puVar12 + 0x4398) = 0xffffffff;
	puVar12 = puVar13 + *(int *)puVar4 * 0x55ec;
	if ((*(int *)(puVar12 + 0x4a0) != -1) && (*(int *)(puVar12 + 0x584) != *(int *)(puVar12 + 0x588))) {
		bVar3 = true;
		FUN_100a77b4((int)(puVar13 + *(int *)puVar4 * 0x55ec + 0x498), 0xff);
	}
	puVar12 = puVar13 + *(int *)puVar4 * 0x55ec;
	if ((*(int *)(puVar12 + 0xd40) != -1) && (*(int *)(puVar12 + 0xe24) != *(int *)(puVar12 + 0xe28))) {
		bVar3 = true;
		FUN_100a77b4((int)(puVar13 + *(int *)puVar4 * 0x55ec + 0xd38), 0xfe);
	}
	puVar12 = puVar13 + *(int *)puVar4 * 0x55ec;
	if ((*(int *)(puVar12 + 0xa60) != -1) && (*(int *)(puVar12 + 0xb44) != *(int *)(puVar12 + 0xb48))) {
		bVar3 = true;
		FUN_100a77b4((int)(puVar13 + *(int *)puVar4 * 0x55ec + 0xa58), 0xfd);
	}
	puVar12 = puVar13 + *(int *)puVar4 * 0x55ec;
	if ((*(int *)(puVar12 + 0xbd0) != -1) && (*(int *)(puVar12 + 0xcb4) != *(int *)(puVar12 + 0xcb8))) {
		bVar3 = true;
		FUN_100a77b4((int)(puVar13 + *(int *)puVar4 * 0x55ec + 0xbc8), 0xfc);
	}
	lVar16 = 0;
	iVar17 = 0;
	while (true) {
		uVar15 = (undefined)in_r10;
		uVar14 = (undefined)in_r9;
		iVar11 = *(int *)puVar4 * 0x55ec;
		if (*(int *)(puVar13 + iVar11 + 0x4828) <= (int)lVar16)
			break;
		uVar10 = FUN_100a7734((int)lVar16);
		if ((int)uVar10 != 0) {
			bVar3 = true;
			FUN_100a77b4((int)(puVar13 + *(int *)puVar4 * 0x55ec + iVar17 + 0xea8), (char)lVar16);
		}
		iVar17 = iVar17 + 0x170;
		lVar16 = lVar16 + 1;
	}
	iVar17 = (int)uVar9;
	if (bVar3) {
		puVar13 = puVar13 + iVar11;
		*puVar7 = 1;
		puVar1 = *(undefined4 **)(iVar17 + -0x6f20);
		*puVar6 = 0;
		uVar2 = *(undefined4 *)(iVar17 + -0x572c);
		*puVar1 = *(undefined4 *)(puVar13 + 0x4828);
		sprintf((int)puVar5, uVar2, *(undefined4 *)(puVar13 + 0x1c8), puVar13, (int)in_r7, (int)in_r8,
		    in_r9, in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc,
		    in_stack_ffffffc0, in_stack_ffffffc4);
		FUN_100a6480(0, 1, 1, (int)puVar5, 3, 0, uVar14, uVar15, in_stack_ffffff98);
		FUN_100a6430(3);
		FUN_100a6430(0x15);
		FUN_100a72e4((ulonglong)*puVar6);
		FUN_100a6480(0, 0x16, 1, (int)puVar8, 0, 1, uVar14, uVar15, in_stack_ffffff98);
		FUN_100a646c(0x16, 6);
	} else {
		*puVar7 = 0;
		sprintf((int)puVar5, *(undefined4 *)(iVar17 + -0x5728),
		    *(undefined4 *)(puVar13 + iVar11 + 0x1c8), (int)in_r6, (int)in_r7, (int)in_r8, in_r9,
		    in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
		    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
		    in_stack_ffffffc4);
		FUN_100a6480(0, 1, 1, (int)puVar5, 3, 0, uVar14, uVar15, in_stack_ffffff98);
		FUN_100a6430(3);
		FUN_100a6430(0x15);
		FUN_100a6480(0, 0x16, 1, (int)puVar8, 0, 1, uVar14, uVar15, in_stack_ffffff98);
		FUN_100a646c(0x16, 6);
	}
	return;
}

void FUN_100a7c20(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_Witch_s_shack_100f38a0;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	FUN_100a6480(0, 2, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 9, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0xc, 1, (int)ppuVar3[-0x15cd], 1, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0xe, 1, (int)ppuVar3[-0x15ce], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0x10, 1, (int)ppuVar3[-0x15c2], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0x12, 1, (int)ppuVar3[-0x15cf], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0x14, 1, (int)ppuVar3[-0x15d0], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6430(5);
	*(undefined4 *)ppuVar3[-0x1bc4] = 0x14;
	return;
}

void FUN_100a7d28(int iParm1)

{
	int *piVar1;
	int *piVar2;
	ulonglong uVar3;
	char *pcVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 in_r9;
	undefined4 in_r10;
	ulonglong uVar7;
	int iVar8;
	int iVar9;
	undefined4 in_stack_ffffffa8;

	piVar2 = _DAT_100f20d0;
	piVar1 = _DAT_100f20b4;
	uVar3 = ZEXT48(&toc);
	ClearSText(5, 0x15);
	iVar9 = *(int *)((int)uVar3 + -0x7178) + iParm1 * 0x170;
	**(undefined4 **)((int)uVar3 + -0x6f18) = 5;
	iVar8 = 5;
	do {
		if (*(int *)(iVar9 + 8) != -1) {
			uVar7 = (ulonglong)(*(char *)(iVar9 + 0x3c) != '\0');
			if (*(int *)(iVar9 + 0x164) == 0) {
				uVar7 = 2;
			}
			uVar5 = (undefined4)uVar7;
			if (*(char *)(iVar9 + 0x3c) == '\0') {
				pcVar4 = (char *)(iVar9 + 0x3d);
				uVar6 = 1;
				FUN_100a6480(0x14, iVar8, 0, (int)pcVar4, (char)uVar7, 1, (char)in_r9, (char)in_r10,
				    in_stack_ffffffa8);
			} else {
				pcVar4 = (char *)(iVar9 + 0x7d);
				uVar6 = 1;
				FUN_100a6480(0x14, iVar8, 0, (int)pcVar4, (char)uVar7, 1, (char)in_r9, (char)in_r10,
				    in_stack_ffffffa8);
			}
			FUN_100a6458(iVar8, *(undefined4 *)(iVar9 + 200));
			FUN_100a64e4(iVar9, iVar8 + 1, uVar7, pcVar4, uVar5, uVar6, in_r9, in_r10, in_stack_ffffffa8);
			*piVar1 = iVar8;
			iVar9 = iVar9 + 0x170;
		}
		iVar8 = iVar8 + 4;
	} while (iVar8 < 0x14);
	iVar8 = *piVar2;
	if ((*(int *)(*(int *)((int)uVar3 + -0x6efc) + iVar8 * 0x9c + 0x94) == 0) && (iVar8 != 0x16)) {
		*piVar2 = *piVar1;
	}
	return;
}

void FUN_100a7e50(void)

{
	undefined *puVar1;
	undefined *puVar2;
	int *piVar3;
	uint *puVar4;
	int *piVar5;
	undefined4 *puVar6;
	undefined **ppuVar7;
	undefined *puVar8;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined uVar9;
	undefined4 in_r10;
	undefined uVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = _DAT_100f20d8;
	piVar5 = _DAT_100f20c0;
	puVar4 = _DAT_100f20bc;
	piVar3 = _DAT_100f20b0;
	puVar2 = PTR_DAT_100f191c;
	uVar10 = (undefined)in_r10;
	uVar9 = (undefined)in_r9;
	ppuVar7 = &toc;
	*_DAT_100f20dc = 1;
	*puVar6 = 1;
	puVar8 = PTR_DAT_100f1824;
	*puVar4 = 0;
	puVar1 = PTR_DAT_100f1828;
	*piVar3 = 0x14;
	sprintf((int)puVar2, PTR_s_I_have_these_items_for_sale___Yo_100f38bc,
	    *(undefined4 *)(puVar1 + *(int *)puVar8 * 0x55ec + 0x1c8), in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
	    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
	    in_stack_ffffffe4);
	FUN_100a6480(0, 1, 1, (int)puVar2, 3, 0, uVar9, uVar10, in_stack_ffffffb8);
	FUN_100a6430(3);
	FUN_100a6430(0x15);
	FUN_100a7d28((ulonglong)*puVar4);
	FUN_100a6480(0, 0x16, 1, (int)ppuVar7[-0x15c6], 0, 0, uVar9, uVar10, in_stack_ffffffb8);
	FUN_100a646c(0x16, 6);
	*piVar5 = 0;
	puVar8 = ppuVar7[-0x1c5e];
	while (*(int *)(puVar8 + 8) != -1) {
		puVar8 = puVar8 + 0x170;
		*piVar5 = *piVar5 + 1;
	}
	*piVar3 = *piVar5 + -4;
	if (*piVar3 < 0) {
		*piVar3 = 0;
	}
	return;
}

ulonglong FUN_100a7f70(int param_1)

{
	int iVar1;
	int iVar2;
	ulonglong uVar3;

	if (param_1 < 0) {
		iVar2 = *(int *)PTR_DAT_100f1824 * 0x55ec + (param_1 + 1) * -0x170 + 0x4854;
	} else {
		iVar2 = *(int *)PTR_DAT_100f1824 * 0x55ec + param_1 * 0x170 + 0xea8;
	}
	iVar1 = *(int *)(PTR_DAT_100f1828 + iVar2 + 8);
	uVar3 = (ulonglong)(iVar1 == 0);
	if (iVar1 == 10) {
		uVar3 = 1;
	}
	iVar2 = *(int *)(PTR_DAT_100f1828 + iVar2 + 0x168);
	if ((5 < iVar2) && (iVar2 < 0x17)) {
		uVar3 = 0;
	}
	if (iVar2 == 0x21) {
		uVar3 = 0;
	}
	return uVar3;
}

void FUN_100a8008(void)

{
	uint uVar1;
	undefined4 uVar2;
	undefined4 *puVar3;
	int iVar4;
	undefined *puVar5;
	bool bVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	uint *puVar11;
	uint *puVar12;
	undefined4 *puVar13;
	undefined *puVar14;
	ulonglong uVar15;
	ulonglong uVar16;
	longlong lVar17;
	longlong in_r6;
	longlong in_r7;
	undefined8 in_r8;
	undefined4 in_r9;
	undefined uVar18;
	undefined4 in_r10;
	undefined uVar19;
	longlong lVar20;
	longlong lVar21;
	ulonglong uVar22;
	ulonglong uVar23;
	longlong lVar24;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	puVar14 = PTR_DAT_100f38b8;
	puVar13 = _DAT_100f20d8;
	puVar12 = _DAT_100f20c0;
	puVar11 = _DAT_100f20bc;
	puVar10 = PTR_DAT_100f20ac;
	puVar9 = PTR_DAT_100f20a8;
	puVar8 = PTR_DAT_100f191c;
	puVar5 = PTR_DAT_100f1828;
	puVar7 = PTR_DAT_100f1824;
	uVar15 = ZEXT48(&toc);
	lVar20 = 0;
	uVar22 = ZEXT48(PTR_DAT_100f20ac);
	lVar21 = 0;
	bVar6 = false;
	uVar23 = ZEXT48(PTR_DAT_100f1828);
	*_DAT_100f20dc = 1;
	*puVar12 = 0;
	*(undefined4 *)(puVar10 + 8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x178) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2e8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x458) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x5c8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x738) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x8a8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0xa18) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0xb88) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0xcf8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0xe68) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0xfd8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1148) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x12b8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1428) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1598) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1708) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1878) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x19e8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 7000) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1cc8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1e38) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x1fa8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2118) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2288) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x23f8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2568) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x26d8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2848) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x29b8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2b28) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2c98) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2e08) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x2f78) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x30e8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3258) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x33c8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3538) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x36a8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3818) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3988) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3af8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3c68) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3dd8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x3f48) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x40b8) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x4228) = 0xffffffff;
	*(undefined4 *)(puVar10 + 0x4398) = 0xffffffff;
	while ((int)lVar20 < *(int *)(puVar5 + *(int *)puVar7 * 0x55ec + 0x4828)) {
		uVar16 = FUN_100a7f70((int)lVar20);
		if ((int)uVar16 != 0) {
			uVar1 = *puVar12;
			lVar24 = 0x2e;
			in_r7 = uVar22 + (ulonglong)uVar1 * 0x170;
			in_r6 = in_r7 + -8;
			lVar17 = uVar23 + (ulonglong) * (uint *)puVar7 * 0x55ec + lVar21 + 0xea0;
			bVar6 = true;
			do {
				lVar17 = lVar17 + 8;
				uVar2 = ((undefined4 *)lVar17)[1];
				in_r6 = in_r6 + 8;
				*(undefined4 *)in_r6 = *(undefined4 *)lVar17;
				((undefined4 *)in_r6)[1] = uVar2;
				lVar24 = lVar24 + -1;
			} while (lVar24 != 0);
			iVar4 = (int)in_r7;
			if ((*(char *)(iVar4 + 0x3c) != '\0') && (*(int *)(iVar4 + 0x38) != 0)) {
				*(undefined4 *)(iVar4 + 0xc4) = *(undefined4 *)(iVar4 + 200);
			}
			*(int *)(iVar4 + 0xc4) = *(int *)(iVar4 + 0xc4) >> 2;
			if (*(int *)(iVar4 + 0xc4) == 0) {
				*(undefined4 *)(iVar4 + 0xc4) = 1;
			}
			*(undefined4 *)(iVar4 + 200) = *(undefined4 *)(iVar4 + 0xc4);
			puVar9[uVar1] = (char)lVar20;
			*puVar12 = *puVar12 + 1;
		}
		lVar21 = lVar21 + 0x170;
		lVar20 = lVar20 + 1;
	}
	lVar20 = 0;
	lVar21 = 0;
	do {
		if (*(int *)(puVar5 + *(int *)puVar7 * 0x55ec + (int)lVar21 + 0x485c) != -1) {
			uVar16 = FUN_100a7f70((int)-(lVar20 + 1));
			if ((int)uVar16 != 0) {
				uVar1 = *puVar12;
				lVar24 = 0x2e;
				lVar17 = uVar22 + (ulonglong)uVar1 * 0x170;
				in_r7 = lVar17 + -8;
				in_r6 = uVar23 + (ulonglong) * (uint *)puVar7 * 0x55ec + lVar21 + 0x484c;
				bVar6 = true;
				do {
					in_r6 = in_r6 + 8;
					uVar2 = ((undefined4 *)in_r6)[1];
					in_r7 = in_r7 + 8;
					*(undefined4 *)in_r7 = *(undefined4 *)in_r6;
					((undefined4 *)in_r7)[1] = uVar2;
					lVar24 = lVar24 + -1;
				} while (lVar24 != 0);
				iVar4 = (int)lVar17;
				if ((*(char *)(iVar4 + 0x3c) != '\0') && (*(int *)(iVar4 + 0x38) != 0)) {
					*(undefined4 *)(iVar4 + 0xc4) = *(undefined4 *)(iVar4 + 200);
				}
				*(int *)(iVar4 + 0xc4) = *(int *)(iVar4 + 0xc4) >> 2;
				if (*(int *)(iVar4 + 0xc4) == 0) {
					*(undefined4 *)(iVar4 + 0xc4) = 1;
				}
				*(undefined4 *)(iVar4 + 200) = *(undefined4 *)(iVar4 + 0xc4);
				puVar9[uVar1] = (char)-(lVar20 + 1);
				*puVar12 = *puVar12 + 1;
			}
		}
		uVar19 = (undefined)in_r10;
		uVar18 = (undefined)in_r9;
		lVar20 = lVar20 + 1;
		lVar21 = lVar21 + 0x170;
	} while ((int)lVar20 < 8);
	iVar4 = (int)uVar15;
	if (bVar6) {
		puVar3 = *(undefined4 **)(iVar4 + -0x6f20);
		*puVar13 = 1;
		uVar2 = *(undefined4 *)(iVar4 + -0x5724);
		*puVar11 = 0;
		puVar5 = puVar5 + *(int *)puVar7 * 0x55ec;
		*puVar3 = *(undefined4 *)(puVar5 + 0x4828);
		sprintf((int)puVar8, uVar2, *(undefined4 *)(puVar5 + 0x1c8), puVar5, (int)in_r7, (int)in_r8,
		    in_r9, in_r10, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9c,
		    in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8, in_stack_ffffffac,
		    in_stack_ffffffb0, in_stack_ffffffb4);
		FUN_100a6480(0, 1, 1, (int)puVar8, 3, 0, uVar18, uVar19, in_stack_ffffff88);
		FUN_100a6430(3);
		FUN_100a6430(0x15);
		FUN_100a72e4((ulonglong)*puVar11);
		FUN_100a6480(0, 0x16, 1, (int)puVar14, 0, 1, uVar18, uVar19, in_stack_ffffff88);
		FUN_100a646c(0x16, 6);
	} else {
		uVar2 = *(undefined4 *)(iVar4 + -0x5720);
		*puVar13 = 0;
		sprintf((int)puVar8, uVar2, *(undefined4 *)(puVar5 + *(int *)puVar7 * 0x55ec + 0x1c8),
		    (int)in_r6, (int)in_r7, (int)in_r8, in_r9, in_r10, in_stack_ffffff88, in_stack_ffffff8f,
		    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4, in_stack_ffffffa8,
		    in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
		FUN_100a6480(0, 1, 1, (int)puVar8, 3, 0, uVar18, uVar19, in_stack_ffffff88);
		FUN_100a6430(3);
		FUN_100a6430(0x15);
		FUN_100a6480(0, 0x16, 1, (int)puVar14, 0, 1, uVar18, uVar19, in_stack_ffffff88);
		FUN_100a646c(0x16, 6);
	}
	return;
}

undefined8 FUN_100a8418(int param_1)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1828 + param_1 * 0x170 + *(int *)PTR_DAT_100f1824 * 0x55ec;
	if (*(int *)(puVar1 + 0xeb0) != 10) {
		return 0;
	}
	if (*(int *)(puVar1 + 0xf8c) == *(int *)(puVar1 + 0xf90)) {
		return 0;
	}
	return 1;
}

void FUN_100a845c(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11, undefined4 param_12,
    undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16,
    undefined4 param_17, undefined4 param_18, int param_19, undefined4 param_20)

{
	int iVar1;
	undefined4 uVar2;
	uint uVar3;
	undefined *puVar4;
	int *piVar5;
	undefined4 *puVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined4 *puVar10;
	longlong lVar11;

	piVar5 = _DAT_100f20c0;
	puVar8 = PTR_DAT_100f20ac;
	lVar11 = 0x2e;
	iVar1 = *_DAT_100f20c0;
	iVar7 = iVar1 * 0x170;
	puVar10 = (undefined4 *)&stack0x00000010;
	puVar6 = (undefined4 *)(PTR_DAT_100f20ac + iVar7 + -8);
	do {
		uVar2 = puVar10[3];
		puVar6[2] = puVar10[2];
		puVar6[3] = uVar2;
		puVar4 = PTR_DAT_100f20a8;
		lVar11 = lVar11 + -1;
		puVar10 = puVar10 + 2;
		puVar6 = puVar6 + 2;
	} while (lVar11 != 0);
	puVar9 = puVar8 + iVar7;
	puVar8 = puVar8 + iVar7;
	*(int *)(puVar9 + 0xc4) = *(int *)(puVar9 + 0xc4) + *(int *)(PTR_DAT_100f1934 + param_19 * 0x38 + 0x34);
	iVar7 = (((*(int *)(puVar8 + 0xe8) - *(int *)(puVar8 + 0xe4)) * 100) / *(int *)(puVar8 + 0xe8)) * *(int *)(puVar9 + 0xc4);
	uVar3 = iVar7 / 100 + (iVar7 >> 0x1f);
	*(int *)(puVar9 + 0xc4) = (int)(uVar3 + (uVar3 >> 0x1f)) >> 1;
	*(undefined4 *)(puVar8 + 200) = *(undefined4 *)(puVar9 + 0xc4);
	puVar4[iVar1] = (undefined)param_20;
	*piVar5 = *piVar5 + 1;
	return;
}

void FUN_100a8548(void)

{
	undefined4 uVar1;
	bool bVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint *puVar5;
	undefined4 *puVar6;
	undefined *puVar7;
	ulonglong uVar8;
	undefined8 uVar9;
	int iVar10;
	undefined *puVar11;
	undefined4 *puVar12;
	undefined4 *puVar13;
	ulonglong in_r6;
	undefined *puVar14;
	ulonglong in_r7;
	ulonglong in_r8;
	ulonglong in_r9;
	undefined uVar15;
	ulonglong in_r10;
	undefined uVar16;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar17;
	undefined8 unaff_r25;
	int iVar18;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar19;
	undefined4 in_stack_fffffe48;
	undefined in_stack_fffffe4f;
	undefined4 local_1a8;
	undefined4 local_1a4;
	undefined4 local_1a0;
	uint local_19c;
	uint local_198;
	uint local_194;
	uint local_190;
	uint local_18c;
	undefined4 in_stack_ffffff38;
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar7 = PTR_DAT_100f38b8;
	puVar6 = _DAT_100f20d8;
	puVar13 = _DAT_100f20c0;
	puVar5 = _DAT_100f20bc;
	puVar4 = PTR_DAT_100f191c;
	puVar14 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	uVar8 = ZEXT48(&toc);
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	bVar2 = false;
	*_DAT_100f20dc = 1;
	puVar11 = PTR_DAT_100f20ac;
	*puVar13 = 0;
	*(undefined4 *)(puVar11 + 8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x178) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2e8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x458) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x5c8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x738) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x8a8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0xa18) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0xb88) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0xcf8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0xe68) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0xfd8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1148) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x12b8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1428) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1598) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1708) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1878) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x19e8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 7000) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1cc8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1e38) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x1fa8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2118) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2288) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x23f8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2568) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x26d8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2848) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x29b8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2b28) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2c98) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2e08) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x2f78) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x30e8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3258) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x33c8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3538) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x36a8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3818) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3988) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3af8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3c68) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3dd8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x3f48) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x40b8) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x4228) = 0xffffffff;
	*(undefined4 *)(puVar11 + 0x4398) = 0xffffffff;
	puVar11 = puVar14 + *(int *)puVar3 * 0x55ec;
	if ((*(int *)(puVar11 + 0xa60) == 10) && (*(int *)(puVar11 + 0xb3c) != *(int *)(puVar11 + 0xb40))) {
		lVar19 = 0x2e;
		bVar2 = true;
		puVar13 = (undefined4 *)&stack0xfffffe50;
		puVar12 = (undefined4 *)(puVar11 + 0xa50);
		do {
			uVar1 = puVar12[3];
			puVar13[2] = puVar12[2];
			puVar13[3] = uVar1;
			lVar19 = lVar19 + -1;
			puVar13 = puVar13 + 2;
			puVar12 = puVar12 + 2;
		} while (lVar19 != 0);
		in_r6 = (ulonglong)local_19c;
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		FUN_100a845c((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, in_stack_ffffff38, 0xffffffff);
	}
	iVar17 = 0;
	iVar18 = 0;
	while (true) {
		uVar16 = (undefined)in_r10;
		uVar15 = (undefined)in_r9;
		iVar10 = *(int *)puVar3 * 0x55ec;
		if (*(int *)(puVar14 + iVar10 + 0x4828) <= iVar17)
			break;
		uVar9 = FUN_100a8418(iVar17);
		if ((int)uVar9 != 0) {
			lVar19 = 0x2e;
			bVar2 = true;
			puVar13 = (undefined4 *)&stack0xfffffe50;
			puVar12 = (undefined4 *)(puVar14 + *(int *)puVar3 * 0x55ec + iVar18 + 0xea0);
			do {
				uVar1 = puVar12[3];
				puVar13[2] = puVar12[2];
				puVar13[3] = uVar1;
				lVar19 = lVar19 + -1;
				puVar13 = puVar13 + 2;
				puVar12 = puVar12 + 2;
			} while (lVar19 != 0);
			in_r6 = (ulonglong)local_19c;
			in_r7 = (ulonglong)local_198;
			in_r8 = (ulonglong)local_194;
			in_r9 = (ulonglong)local_190;
			in_r10 = (ulonglong)local_18c;
			FUN_100a845c((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
			    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
			    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
			    local_190, local_18c, in_stack_ffffff38, iVar17);
		}
		iVar18 = iVar18 + 0x170;
		iVar17 = iVar17 + 1;
	}
	iVar17 = (int)uVar8;
	if (bVar2) {
		puVar14 = puVar14 + iVar10;
		*puVar6 = 1;
		puVar13 = *(undefined4 **)(iVar17 + -0x6f20);
		*puVar5 = 0;
		uVar1 = *(undefined4 *)(iVar17 + -0x5748);
		*puVar13 = *(undefined4 *)(puVar14 + 0x4828);
		sprintf((int)puVar4, uVar1, *(undefined4 *)(puVar14 + 0x1c8), puVar14, (int)in_r7, (int)in_r8,
		    (int)in_r9, (int)in_r10, in_stack_fffffe48, in_stack_fffffe4f, local_1a4, local_1a0,
		    local_19c, local_198, local_194, local_190, local_18c);
		FUN_100a6480(0, 1, 1, (int)puVar4, 3, 0, uVar15, uVar16, in_stack_fffffe48);
		FUN_100a6430(3);
		FUN_100a6430(0x15);
		FUN_100a72e4((ulonglong)*puVar5);
		FUN_100a6480(0, 0x16, 1, (int)puVar7, 0, 1, uVar15, uVar16, in_stack_fffffe48);
		FUN_100a646c(0x16, 6);
	} else {
		*puVar6 = 0;
		sprintf((int)puVar4, *(undefined4 *)(iVar17 + -0x5744),
		    *(undefined4 *)(puVar14 + iVar10 + 0x1c8), (int)in_r6, (int)in_r7, (int)in_r8,
		    (int)in_r9, (int)in_r10, in_stack_fffffe48, in_stack_fffffe4f, local_1a4, local_1a0,
		    local_19c, local_198, local_194, local_190, local_18c);
		FUN_100a6480(0, 1, 1, (int)puVar4, 3, 0, uVar15, uVar16, in_stack_fffffe48);
		FUN_100a6430(3);
		FUN_100a6430(0x15);
		FUN_100a6480(0, 0x16, 1, (int)puVar7, 0, 1, uVar15, uVar16, in_stack_fffffe48);
		FUN_100a646c(0x16, 6);
	}
	return;
}

void FUN_100a888c(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined **ppuVar2;
	undefined4 in_stack_ffffffc8;

	ppuVar2 = &toc;
	StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	puVar1 = (undefined4 *)ppuVar2[-0x1bbe];
	*ppuVar2[-0x1bbd] = 1;
	*puVar1 = 0;
	ClearSText(5, 0x17);
	FUN_100a6480(0, 0xe, 1, (int)ppuVar2[-0x15d3], 0, 1, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_100a88f8(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	*(undefined4 *)ppuVar1[-0x1bbe] = 0;
	ClearSText(5, 0x17);
	FUN_100a6480(0, 0xe, 1, (int)ppuVar1[-0x15d4], 0, 1, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_100a8958(undefined8 uParm1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined4 uParm7, undefined4 uParm8)

{
	char cVar1;
	int iVar2;
	uint uVar3;
	bool bVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined **ppuVar9;
	int iVar10;
	char *pcVar11;
	undefined4 uVar12;
	undefined4 uVar13;
	undefined uVar14;
	undefined uVar15;
	ulonglong uVar16;
	undefined4 in_stack_ffffffb8;

	puVar8 = PTR_DAT_100f20a4;
	puVar7 = PTR_DAT_100f191c;
	puVar6 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	ppuVar9 = &toc;
	StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, param_3, param_4, param_5, param_6,
	    (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	*(undefined4 *)ppuVar9[-0x1bbe] = 0;
	ClearSText(5, 0x17);
	iVar10 = *(int *)puVar5 * 0x55ec;
	cVar1 = puVar6[iVar10 + 0x5410];
	uVar16 = (ulonglong)(cVar1 != '\0');
	if (*(int *)(puVar6 + iVar10 + 0x5538) == 0) {
		uVar16 = 2;
	}
	uVar12 = (undefined4)uVar16;
	iVar2 = *(int *)puVar8;
	bVar4 = iVar2 != 0x11 && cVar1 != '\0';
	if (((cVar1 != '\0') && (*(int *)(puVar6 + iVar10 + 0x540c) == 0)) && (bVar4 = iVar2 != 4 && (iVar2 != 7 && (iVar2 != 3 && bVar4)), iVar2 == 8)) {
		bVar4 = false;
	}
	if (bVar4) {
		pcVar11 = puVar6 + iVar10 + 0x5451;
		uVar13 = 0;
		FUN_100a6480(0x14, 8, 0, (int)pcVar11, (char)uVar16, 0, (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	} else {
		pcVar11 = puVar6 + iVar10 + 0x5411;
		uVar13 = 0;
		FUN_100a6480(0x14, 8, 0, (int)pcVar11, (char)uVar16, 0, (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	}
	FUN_100a6458(8, *(undefined4 *)(puVar6 + *(int *)puVar5 * 0x55ec + 0x549c));
	uVar15 = (undefined)uParm8;
	uVar14 = (undefined)uParm7;
	FUN_100a64e4((int)(puVar6 + *(int *)puVar5 * 0x55ec + 0x53d4), 9, uVar16, pcVar11, uVar12, uVar13,
	    uParm7, uParm8, in_stack_ffffffb8);
	uVar3 = *(uint *)puVar8;
	if (uVar3 < 0x13) {
		// WARNING: Could not recover jumptable at 0x100a8ad8. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar9[-0x15dd] + uVar3 * 4))();
		return;
	}
	FUN_100a6480(0, 0xf, 1, (int)puVar7, 0, 0, uVar14, uVar15, in_stack_ffffffb8);
	FUN_100a6480(0, 0x12, 1, (int)ppuVar9[-0x15db], 0, 1, uVar14, uVar15, in_stack_ffffffb8);
	FUN_100a6480(0, 0x14, 1, (int)ppuVar9[-0x15dc], 0, 1, uVar14, uVar15, in_stack_ffffffb8);
	return;
}

void FUN_100a8ba0(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_s_Talk_to_Wirt_100f3854;
	puVar2 = PTR_s_Say_goodbye_100f3840;
	puVar1 = _DAT_100f20d8;
	ppuVar5 = &toc;
	*_DAT_100f20dc = 0;
	puVar4 = PTR_s_Wirt_the_Peg_legged_boy_100f3858;
	*puVar1 = 0;
	FUN_100a6480(0, 2, 1, (int)puVar4, 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6430(5);
	if (*(int *)(ppuVar5[-0x1c6f] + 8) == -1) {
		FUN_100a6480(0, 0xc, 1, (int)puVar3, 1, 1, param_7, param_8, in_stack_ffffffc8);
		FUN_100a6480(0, 0x12, 1, (int)puVar2, 0, 1, param_7, param_8, in_stack_ffffffc8);
	} else {
		FUN_100a6480(0, 8, 1, (int)puVar3, 1, 1, param_7, param_8, in_stack_ffffffc8);
		FUN_100a6480(0, 0xc, 1, (int)ppuVar5[-0x15e0], 3, 0, param_7, param_8, in_stack_ffffffc8);
		FUN_100a6480(0, 0xe, 1, (int)ppuVar5[-0x15e1], 3, 0, param_7, param_8, in_stack_ffffffc8);
		FUN_100a6480(0, 0x10, 1, (int)ppuVar5[-0x15e2], 3, 0, param_7, param_8, in_stack_ffffffc8);
		FUN_100a6480(0, 0x12, 1, (int)ppuVar5[-0x15e3], 0, 1, param_7, param_8, in_stack_ffffffc8);
		FUN_100a6480(0, 0x14, 1, (int)puVar2, 0, 1, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void FUN_100a8d00(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined **ppuVar5;
	undefined4 in_r6;
	char *pcVar6;
	undefined4 in_r7;
	int iVar7;
	undefined4 in_r8;
	undefined4 uVar8;
	undefined4 in_r9;
	undefined uVar9;
	undefined4 in_r10;
	undefined uVar10;
	bool bVar11;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar4 = _DAT_100f20d8;
	puVar3 = PTR_DAT_100f1e14;
	puVar2 = PTR_DAT_100f191c;
	ppuVar5 = &toc;
	*_DAT_100f20dc = 1;
	puVar1 = PTR_DAT_100f1824;
	*puVar4 = 0;
	sprintf((int)puVar2, PTR_s_I_have_this_item_for_sale___Your_100f383c,
	    *(undefined4 *)(PTR_DAT_100f1828 + *(int *)puVar1 * 0x55ec + 0x1c8), in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0,
	    in_stack_fffffff4);
	FUN_100a6480(0, 1, 1, (int)puVar2, 3, 0, (char)in_r9, (char)in_r10, in_stack_ffffffc8);
	FUN_100a6430(3);
	FUN_100a6430(0x15);
	bVar11 = puVar3[0x3c] != '\0';
	if (*(int *)(puVar3 + 0x164) == 0) {
		bVar11 = true;
	}
	if (puVar3[0x3c] == '\0') {
		pcVar6 = puVar3 + 0x3d;
		iVar7 = (int)bVar11;
		uVar8 = 1;
		FUN_100a6480(0x14, 10, 0, (int)pcVar6, bVar11, 1, (char)in_r9, (char)in_r10, in_stack_ffffffc8);
	} else {
		pcVar6 = puVar3 + 0x7d;
		iVar7 = (int)bVar11;
		uVar8 = 1;
		FUN_100a6480(0x14, 10, 0, (int)pcVar6, bVar11, 1, (char)in_r9, (char)in_r10, in_stack_ffffffc8);
	}
	FUN_100a6458(10, *(int *)(puVar3 + 200) + (*(int *)(puVar3 + 200) >> 1));
	uVar10 = (undefined)in_r10;
	uVar9 = (undefined)in_r9;
	FUN_100a64e4((int)puVar3, 0xb, (longlong)bVar11, pcVar6, iVar7, uVar8, in_r9, in_r10, in_stack_ffffffc8);
	FUN_100a6480(0, 0x16, 1, (int)ppuVar5[-0x15e6], 0, 1, uVar9, uVar10, in_stack_ffffffc8);
	FUN_100a646c(0x16, 6);
	return;
}

void FUN_100a8e50(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_Welcome_to_the_100f38e0;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	FUN_100a6480(0, 1, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 3, 1, (int)ppuVar3[-0x15e7], 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 9, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0xc, 1, (int)ppuVar3[-0x15e8], 1, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0xe, 1, (int)ppuVar3[-0x15e9], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0x10, 1, (int)ppuVar3[-0x15ce], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0x12, 1, (int)ppuVar3[-0x15ea], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6430(5);
	*(undefined4 *)ppuVar3[-0x1bc4] = 0x14;
	return;
}

void FUN_100a8f58(int iParm1)

{
	int *piVar1;
	int *piVar2;
	ulonglong uVar3;
	char *pcVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 uVar7;
	int iVar8;
	int iVar9;
	undefined4 in_stack_ffffffa8;

	piVar2 = _DAT_100f20d0;
	piVar1 = _DAT_100f20b4;
	uVar3 = ZEXT48(&toc);
	ClearSText(5, 0x15);
	iVar9 = *(int *)((int)uVar3 + -0x71c0) + iParm1 * 0x170;
	**(undefined4 **)((int)uVar3 + -0x6f18) = 5;
	iVar8 = 5;
	do {
		if (*(int *)(iVar9 + 8) != -1) {
			uVar7 = 0;
			if (*(int *)(iVar9 + 0x164) == 0) {
				uVar7 = 2;
			}
			uVar5 = (undefined4)uVar7;
			pcVar4 = (char *)(iVar9 + 0x3d);
			uVar6 = 1;
			FUN_100a6480(0x14, iVar8, 0, (int)pcVar4, (char)uVar7, 1, (char)in_r9, (char)in_r10, in_stack_ffffffa8);
			FUN_100a6458(iVar8, *(undefined4 *)(iVar9 + 200));
			FUN_100a64e4(iVar9, iVar8 + 1, uVar7, pcVar4, uVar5, uVar6, in_r9, in_r10, in_stack_ffffffa8);
			*piVar1 = iVar8;
			iVar9 = iVar9 + 0x170;
		}
		iVar8 = iVar8 + 4;
	} while (iVar8 < 0x14);
	iVar8 = *piVar2;
	if ((*(int *)(*(int *)((int)uVar3 + -0x6efc) + iVar8 * 0x9c + 0x94) == 0) && (iVar8 != 0x16)) {
		*piVar2 = *piVar1;
	}
	return;
}

void FUN_100a9048(void)

{
	undefined *puVar1;
	undefined *puVar2;
	int *piVar3;
	uint *puVar4;
	int *piVar5;
	undefined4 *puVar6;
	undefined **ppuVar7;
	undefined *puVar8;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined uVar9;
	undefined4 in_r10;
	undefined uVar10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar6 = _DAT_100f20d8;
	piVar5 = _DAT_100f20c0;
	puVar4 = _DAT_100f20bc;
	piVar3 = _DAT_100f20b0;
	puVar2 = PTR_DAT_100f191c;
	puVar1 = PTR_DAT_100f1828;
	uVar10 = (undefined)in_r10;
	uVar9 = (undefined)in_r9;
	ppuVar7 = &toc;
	*_DAT_100f20dc = 1;
	*puVar6 = 1;
	puVar8 = PTR_DAT_100f1824;
	*puVar4 = 0;
	sprintf((int)puVar2, PTR_s_I_have_these_items_for_sale___Yo_100f38bc,
	    *(undefined4 *)(puVar1 + *(int *)puVar8 * 0x55ec + 0x1c8), in_r6, in_r7, in_r8, in_r9,
	    in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
	    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
	    in_stack_ffffffe4);
	FUN_100a6480(0, 1, 1, (int)puVar2, 3, 0, uVar9, uVar10, in_stack_ffffffb8);
	FUN_100a6430(3);
	FUN_100a6430(0x15);
	FUN_100a8f58((ulonglong)*puVar4);
	FUN_100a6480(0, 0x16, 1, (int)ppuVar7[-0x15c6], 0, 0, uVar9, uVar10, in_stack_ffffffb8);
	FUN_100a646c(0x16, 6);
	*piVar5 = 0;
	puVar8 = ppuVar7[-0x1c70];
	while (*(int *)(puVar8 + 8) != -1) {
		puVar8 = puVar8 + 0x170;
		*piVar5 = *piVar5 + 1;
	}
	*piVar3 = *piVar5 + -4;
	if (*piVar3 < 0) {
		*piVar3 = 0;
	}
	return;
}

void FUN_100a9160(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_The_Town_Elder_100f3824;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	FUN_100a6480(0, 2, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 9, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0xc, 1, (int)ppuVar3[-0x15ec], 1, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0xe, 1, (int)ppuVar3[-0x15ed], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0x12, 1, (int)ppuVar3[-0x15e4], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6430(5);
	return;
}

undefined8 FUN_100a9224(int param_1)

{
	if (*(int *)(param_1 + 8) == -1) {
		return 0;
	}
	if (*(char *)(param_1 + 0x3c) == '\0') {
		return 0;
	}
	if (*(int *)(param_1 + 0x38) != 0) {
		return 0;
	}
	return 1;
}

void FUN_100a9268(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined param_9, undefined param_10, undefined4 param_11, undefined4 param_12,
    undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16,
    undefined4 param_17, undefined4 param_18, undefined4 param_19)

{
	int iVar1;
	undefined4 uVar2;
	undefined *puVar3;
	undefined *puVar4;
	int *piVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	int iVar8;
	longlong lVar9;

	piVar5 = _DAT_100f20c0;
	puVar4 = PTR_DAT_100f20ac;
	lVar9 = 0x2e;
	iVar1 = *_DAT_100f20c0;
	iVar8 = iVar1 * 0x170;
	puVar6 = (undefined4 *)&stack0x00000010;
	puVar7 = (undefined4 *)(PTR_DAT_100f20ac + iVar8 + -8);
	do {
		uVar2 = puVar6[3];
		puVar7[2] = puVar6[2];
		puVar7[3] = uVar2;
		puVar3 = PTR_DAT_100f20a8;
		lVar9 = lVar9 + -1;
		puVar6 = puVar6 + 2;
		puVar7 = puVar7 + 2;
	} while (lVar9 != 0);
	*(undefined4 *)(puVar4 + iVar8 + 0xc4) = 100;
	*(undefined4 *)(puVar4 + iVar8 + 200) = 100;
	puVar3[iVar1] = (undefined)param_19;
	*piVar5 = *piVar5 + 1;
	return;
}

void FUN_100a92f8(void)

{
	undefined4 uVar1;
	bool bVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	uint *puVar6;
	undefined4 *puVar7;
	undefined *puVar8;
	ulonglong uVar9;
	undefined8 uVar10;
	undefined4 *puVar11;
	undefined4 *puVar12;
	undefined *puVar13;
	ulonglong in_r7;
	ulonglong in_r8;
	ulonglong in_r9;
	undefined uVar14;
	ulonglong in_r10;
	undefined uVar15;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar16;
	undefined8 unaff_r25;
	int iVar17;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar18;
	undefined4 in_stack_fffffe48;
	undefined in_stack_fffffe4f;
	undefined4 local_1a8;
	undefined4 local_1a4;
	undefined4 local_1a0;
	undefined4 local_19c;
	uint local_198;
	uint local_194;
	uint local_190;
	uint local_18c;
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar8 = PTR_DAT_100f38b8;
	puVar7 = _DAT_100f20d8;
	puVar12 = _DAT_100f20c0;
	puVar6 = _DAT_100f20bc;
	puVar5 = PTR_DAT_100f191c;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	uVar9 = ZEXT48(&toc);
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	bVar2 = false;
	*_DAT_100f20dc = 1;
	puVar13 = PTR_DAT_100f20ac;
	*puVar12 = 0;
	*(undefined4 *)(puVar13 + 8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x178) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2e8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x458) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x5c8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x738) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x8a8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0xa18) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0xb88) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0xcf8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0xe68) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0xfd8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1148) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x12b8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1428) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1598) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1708) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1878) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x19e8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 7000) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1cc8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1e38) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x1fa8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2118) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2288) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x23f8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2568) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x26d8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2848) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x29b8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2b28) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2c98) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2e08) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x2f78) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x30e8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3258) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x33c8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3538) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x36a8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3818) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3988) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3af8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3c68) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3dd8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x3f48) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x40b8) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x4228) = 0xffffffff;
	*(undefined4 *)(puVar13 + 0x4398) = 0xffffffff;
	uVar10 = FUN_100a9224((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0x498));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x490);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		FUN_100a9268((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xffffffff);
	}
	uVar10 = FUN_100a9224((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0xd38));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xd30);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		FUN_100a9268((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xfffffffe);
	}
	uVar10 = FUN_100a9224((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0xa58));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xa50);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		FUN_100a9268((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xfffffffd);
	}
	uVar10 = FUN_100a9224((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0xbc8));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xbc0);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		FUN_100a9268((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xfffffffc);
	}
	uVar10 = FUN_100a9224((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0x608));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x600);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		FUN_100a9268((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xfffffffb);
	}
	uVar10 = FUN_100a9224((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0x778));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x770);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		FUN_100a9268((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xfffffffa);
	}
	uVar10 = FUN_100a9224((int)(puVar4 + *(int *)puVar3 * 0x55ec + 0x8e8));
	if ((int)uVar10 != 0) {
		lVar18 = 0x2e;
		bVar2 = true;
		puVar12 = (undefined4 *)&stack0xfffffe50;
		puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x8e0);
		do {
			uVar1 = puVar11[3];
			puVar12[2] = puVar11[2];
			puVar12[3] = uVar1;
			lVar18 = lVar18 + -1;
			puVar12 = puVar12 + 2;
			puVar11 = puVar11 + 2;
		} while (lVar18 != 0);
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		FUN_100a9268((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
		    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
		    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
		    local_190, local_18c, 0xfffffff9);
	}
	iVar16 = 0;
	iVar17 = 0;
	while (true) {
		uVar15 = (undefined)in_r10;
		uVar14 = (undefined)in_r9;
		puVar13 = puVar4 + *(int *)puVar3 * 0x55ec;
		if (*(int *)(puVar13 + 0x4828) <= iVar16)
			break;
		uVar10 = FUN_100a9224((int)(puVar13 + iVar17 + 0xea8));
		if ((int)uVar10 != 0) {
			lVar18 = 0x2e;
			bVar2 = true;
			puVar12 = (undefined4 *)&stack0xfffffe50;
			puVar11 = (undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + iVar17 + 0xea0);
			do {
				uVar1 = puVar11[3];
				puVar12[2] = puVar11[2];
				puVar12[3] = uVar1;
				lVar18 = lVar18 + -1;
				puVar12 = puVar12 + 2;
				puVar11 = puVar11 + 2;
			} while (lVar18 != 0);
			in_r7 = (ulonglong)local_198;
			in_r8 = (ulonglong)local_194;
			in_r9 = (ulonglong)local_190;
			in_r10 = (ulonglong)local_18c;
			FUN_100a9268((char)local_1a8, (char)local_1a4, (char)local_1a0, (char)local_19c, (char)local_198,
			    (char)local_194, (char)local_190, (char)local_18c, (char)in_stack_fffffe48,
			    in_stack_fffffe4f, local_1a8, local_1a4, local_1a0, local_19c, local_198, local_194,
			    local_190, local_18c, iVar16);
		}
		iVar17 = iVar17 + 0x170;
		iVar16 = iVar16 + 1;
	}
	iVar16 = (int)uVar9;
	if (bVar2) {
		puVar12 = *(undefined4 **)(iVar16 + -0x6f20);
		*puVar7 = 1;
		uVar1 = *(undefined4 *)(iVar16 + -0x57bc);
		*puVar6 = 0;
		*puVar12 = *(undefined4 *)(puVar13 + 0x4828);
		sprintf((int)puVar5, uVar1, *(undefined4 *)(puVar13 + 0x1c8), puVar13, (int)in_r7, (int)in_r8,
		    (int)in_r9, (int)in_r10, in_stack_fffffe48, in_stack_fffffe4f, local_1a4, local_1a0,
		    local_19c, local_198, local_194, local_190, local_18c);
		FUN_100a6480(0, 1, 1, (int)puVar5, 3, 0, uVar14, uVar15, in_stack_fffffe48);
		FUN_100a6430(3);
		FUN_100a6430(0x15);
		FUN_100a72e4((ulonglong)*puVar6);
		FUN_100a6480(0, 0x16, 1, (int)puVar8, 0, 1, uVar14, uVar15, in_stack_fffffe48);
		FUN_100a646c(0x16, 6);
	} else {
		uVar1 = *(undefined4 *)(iVar16 + -0x57b8);
		*puVar7 = 0;
		sprintf((int)puVar5, uVar1, *(undefined4 *)(puVar13 + 0x1c8), puVar13, (int)in_r7, (int)in_r8,
		    (int)in_r9, (int)in_r10, in_stack_fffffe48, in_stack_fffffe4f, local_1a4, local_1a0,
		    local_19c, local_198, local_194, local_190, local_18c);
		FUN_100a6480(0, 1, 1, (int)puVar5, 3, 0, uVar14, uVar15, in_stack_fffffe48);
		FUN_100a6430(3);
		FUN_100a6430(0x15);
		FUN_100a6480(0, 0x16, 1, (int)puVar8, 0, 1, uVar14, uVar15, in_stack_fffffe48);
		FUN_100a646c(0x16, 6);
	}
	return;
}

void FUN_100a9920(undefined8 uParm1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined4 uParm7, undefined4 uParm8)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	char *pcVar4;
	undefined4 uVar5;
	undefined uVar6;
	undefined uVar7;
	ulonglong uVar8;
	undefined4 uVar9;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f1828;
	puVar1 = PTR_DAT_100f1824;
	ppuVar3 = &toc;
	StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, param_3, param_4, param_5, param_6,
	    (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	*(undefined4 *)ppuVar3[-0x1bbe] = 0;
	ClearSText(5, 0x17);
	uVar8 = (ulonglong)(puVar2[*(int *)puVar1 * 0x55ec + 0x5410] != '\0');
	if (*(int *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x5538) == 0) {
		uVar8 = 2;
	}
	uVar9 = (undefined4)uVar8;
	FUN_100a6480(0, 7, 1, (int)ppuVar3[-0x15f0], 0, 0, (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	pcVar4 = puVar2 + *(int *)puVar1 * 0x55ec + 0x5451;
	uVar5 = 0;
	FUN_100a6480(0x14, 0xb, 0, (int)pcVar4, (char)uVar8, 0, (char)uParm7, (char)uParm8, in_stack_ffffffb8);
	uVar7 = (undefined)uParm8;
	uVar6 = (undefined)uParm7;
	FUN_100a64e4((int)(puVar2 + *(int *)puVar1 * 0x55ec + 0x53d4), 0xc, uVar8, pcVar4, uVar9, uVar5, uParm7,
	    uParm8, in_stack_ffffffb8);
	FUN_100a6480(0, 0x12, 1, (int)ppuVar3[-0x15f1], 0, 1, uVar6, uVar7, in_stack_ffffffb8);
	return;
}

void FUN_100a9a34(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined4 *puVar5;
	ulonglong uVar6;
	int iVar7;
	int iVar8;
	int *piVar9;
	int iVar10;
	undefined4 in_r6;
	int iVar11;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined uVar12;
	undefined4 in_r10;
	undefined uVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	longlong lVar18;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar5 = _DAT_100f20d8;
	puVar4 = PTR_PTR_s_Griswold_100f20a0;
	puVar3 = PTR_DAT_100f209c;
	puVar2 = PTR_DAT_100f206c;
	puVar1 = PTR_DAT_100f191c;
	uVar6 = ZEXT48(&toc);
	*_DAT_100f20dc = 0;
	*puVar5 = 0;
	sprintf((int)puVar1, PTR_s_Talk_to__s_100f3808, *(undefined4 *)(puVar4 + *(int *)puVar3 * 4),
	    in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc,
	    in_stack_ffffffc0, in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc,
	    in_stack_ffffffd0, in_stack_ffffffd4);
	FUN_100a6480(0, 2, 1, (int)puVar1, 3, 0, (char)in_r9, (char)in_r10, in_stack_ffffffa8);
	FUN_100a6430(5);
	iVar17 = *(int *)((int)uVar6 + -0x7604);
	lVar18 = 4;
	piVar9 = (int *)(puVar2 + *(int *)puVar3 * 0x40);
	iVar11 = 0;
	iVar8 = iVar17;
	do {
		if (((*(char *)(iVar8 + 2) == '\x02') && (*piVar9 != -1)) && (*(int *)(iVar8 + 0x14) != 0)) {
			iVar11 = iVar11 + 1;
		}
		if (((*(char *)(iVar8 + 0x1a) == '\x02') && (piVar9[1] != -1)) && (*(int *)(iVar8 + 0x2c) != 0)) {
			iVar11 = iVar11 + 1;
		}
		if (((*(char *)(iVar8 + 0x32) == '\x02') && (piVar9[2] != -1)) && (*(int *)(iVar8 + 0x44) != 0)) {
			iVar11 = iVar11 + 1;
		}
		if (((*(char *)(iVar8 + 0x4a) == '\x02') && (piVar9[3] != -1)) && (*(int *)(iVar8 + 0x5c) != 0)) {
			iVar11 = iVar11 + 1;
		}
		iVar8 = iVar8 + 0x60;
		piVar9 = piVar9 + 4;
		lVar18 = lVar18 + -1;
	} while (lVar18 != 0);
	if (iVar11 < 7) {
		iVar11 = 0xf - iVar11;
		iVar8 = 2;
	} else {
		iVar11 = 0xe - (iVar11 >> 1);
		iVar8 = 1;
	}
	iVar14 = 0;
	iVar15 = *(int *)((int)uVar6 + -0x706c);
	iVar10 = iVar11 + -2;
	iVar16 = 0;
	do {
		if (((*(char *)(iVar17 + 2) == '\x02') && (*(int *)(puVar2 + *(int *)puVar3 * 0x40 + iVar16) != -1)) && (*(int *)(iVar17 + 0x14) != 0)) {
			FUN_100a6480(0, iVar11, 1, *(int *)(iVar15 + 0x10), 0, 1, (char)in_r9, (char)in_r10, in_stack_ffffffa8);
			iVar11 = iVar11 + iVar8;
		}
		uVar13 = (undefined)in_r10;
		uVar12 = (undefined)in_r9;
		iVar7 = (int)uVar6;
		iVar14 = iVar14 + 1;
		iVar16 = iVar16 + 4;
		iVar15 = iVar15 + 0x14;
		iVar17 = iVar17 + 0x18;
	} while (iVar14 < 0x10);
	FUN_100a6480(0, iVar10, 1, *(int *)(iVar7 + -0x57cc), 1, 1, uVar12, uVar13, in_stack_ffffffa8);
	FUN_100a6480(0, 0x16, 1, *(int *)(iVar7 + -0x5718), 0, 1, uVar12, uVar13, in_stack_ffffffa8);
	return;
}

void FUN_100a9c84(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_Welcome_to_the_100f38e0;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	FUN_100a6480(0, 1, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 3, 1, (int)ppuVar3[-0x15f4], 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 9, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0xc, 1, (int)ppuVar3[-0x15f5], 1, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0x12, 1, (int)ppuVar3[-0x15f6], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6430(5);
	*(undefined4 *)ppuVar3[-0x1bc4] = 0x14;
	return;
}

void FUN_100a9d54(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_Gillian_100f37f4;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	FUN_100a6480(0, 2, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 9, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0xc, 1, (int)ppuVar3[-0x15f8], 1, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0x12, 1, (int)ppuVar3[-0x15e4], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6430(5);
	*(undefined4 *)ppuVar3[-0x1bc4] = 0x14;
	return;
}

void FUN_100a9e08(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_s_Farnham_the_Drunk_100f37ec;
	puVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	*_DAT_100f20dc = 0;
	*puVar1 = 0;
	FUN_100a6480(0, 2, 1, (int)puVar2, 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 9, 1, (int)ppuVar3[-0x15be], 3, 0, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0xc, 1, (int)ppuVar3[-0x15fa], 1, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6480(0, 0x12, 1, (int)ppuVar3[-0x15fb], 0, 1, param_7, param_8, in_stack_ffffffc8);
	FUN_100a6430(5);
	*(undefined4 *)ppuVar3[-0x1bc4] = 0x14;
	return;
}

void StartStore(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	int *piVar3;
	int *piVar4;
	undefined **ppuVar5;
	undefined *puVar6;
	longlong lVar7;
	int iVar8;
	undefined param_3_00;
	undefined param_4_00;
	undefined4 param_9_00;

	piVar4 = _DAT_100f20d0;
	piVar3 = _DAT_100f20c0;
	puVar2 = PTR_DAT_100f1814;
	puVar6 = PTR_DAT_100f1808;
	ppuVar5 = &toc;
	param_4_00 = SUB41(PTR_DAT_100f1808, 0);
	*(undefined4 *)PTR_DAT_100f1810 = 0;
	puVar1 = PTR_DAT_100f180c;
	*(undefined4 *)puVar2 = 0;
	*(undefined4 *)puVar1 = 0;
	puVar1 = PTR_DAT_100f18cc;
	param_3_00 = SUB41(PTR_DAT_100f18cc, 0);
	*(undefined4 *)puVar6 = 0;
	*(undefined4 *)puVar1 = 0;
	ClearSText(0, 0x18);
	ReleaseStoreBtn();
	if (((longlong)param_1 & 0xffffffffU) < 0x18) {
		// WARNING: Could not recover jumptable at 0x100a9f38. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar5[-0x15fc] + (int)param_1 * 4))();
		return;
	}
	puVar6 = ppuVar5[-0x1bbf];
	lVar7 = 0;
	while ((iVar8 = (int)lVar7, iVar8 < 0x18 && (*(int *)(puVar6 + 0x94) == 0))) {
		puVar6 = puVar6 + 0x9c;
		lVar7 = lVar7 + 1;
	}
	if (iVar8 == 0x18) {
		*piVar4 = -1;
	} else {
		*piVar4 = iVar8;
	}
	*ppuVar5[-0x1dd9] = param_1;
	if ((param_1 == '\x02') && (*piVar3 == 0)) {
		StartStore('\x01', (char)lVar7, param_3_00, param_4_00, param_5, param_6, param_7, param_8, param_9_00);
	}
	return;
}

void DrawSText(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	uint *puVar5;

	puVar2 = PTR_DAT_100f20e0;
	piVar1 = _DAT_100f20d8;
	ppuVar3 = &toc;
	if (*_DAT_100f20dc == '\0') {
		DrawSTextBack();
	} else {
		DrawQTextBack(_DAT_100f20dc, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	}
	if ((*piVar1 != 0) && (((longlong)(char)*ppuVar3[-0x1dd9] & 0xffffffffU) < 0x13)) {
		// WARNING: Could not recover jumptable at 0x100aa114. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar3[-0x15fd] + (int)(char)*ppuVar3[-0x1dd9] * 4))();
		return;
	}
	lVar4 = 0;
	puVar5 = (uint *)ppuVar3[-0x1bbf];
	do {
		if (puVar5[0x24] != 0) {
			DrawSLine((int)lVar4);
		}
		if (*(char *)(puVar5 + 2) != '\0') {
			PrintSString((ulonglong)*puVar5, lVar4, (ulonglong)puVar5[0x22], puVar5 + 2,
			    (ulonglong) * (byte *)(puVar5 + 0x23), (ulonglong)puVar5[0x26]);
		}
		lVar4 = lVar4 + 1;
		puVar5 = puVar5 + 0x27;
	} while ((int)lVar4 < 0x18);
	if (*piVar1 != 0) {
		DrawSArrows(4, 0x14);
	}
	*(uint *)puVar2 = (*(uint *)puVar2 & 7) + 1;
	return;
}

void STextESC(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	undefined7 uVar9;
	undefined8 in_r7;
	undefined uVar10;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	puVar4 = PTR_DAT_100f20a4;
	puVar3 = PTR_DAT_100f18a0;
	puVar2 = PTR_DAT_100f186c;
	puVar1 = PTR_DAT_100f183c;
	uVar10 = (undefined)in_r7;
	uVar9 = (undefined7)((ulonglong)in_r7 >> 8);
	uVar8 = ZEXT48(PTR_DAT_100f18a0);
	uVar7 = ZEXT48(PTR_DAT_100f20a4);
	uVar6 = ZEXT48(PTR_DAT_100f186c);
	if (*PTR_DAT_100f18a0 == '\0') {
		if (((longlong)(char)*PTR_DAT_100f186c & 0xffffffffU) < 0x18) {
			// WARNING: Could not recover jumptable at 0x100aa264. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(_DAT_100f37d8 + (int)(char)*PTR_DAT_100f186c * 4))();
			return;
		}
	} else {
		uVar5 = ZEXT48(PTR_DAT_100f183c);
		*PTR_DAT_100f18a0 = 0;
		if (*puVar1 == '\0') {
			uVar5 = sfx_stop((char)puVar1, (char)puVar2, (char)puVar4, (char)puVar3, uVar10, (char)in_r8,
			    (char)in_r9, (char)in_r10, in_stack_ffffffc8);
		}
		music_stop2(uVar5, uVar6, uVar7, uVar8, CONCAT71(uVar9, uVar10), in_r8, in_r9, in_r10, in_stack_ffffffc8);
	}
	return;
}

void STextUp(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	int iVar4;
	undefined **ppuVar5;

	iVar4 = _DAT_100f20d4;
	piVar3 = _DAT_100f20d0;
	piVar2 = _DAT_100f20bc;
	ppuVar5 = &toc;
	PlaySFX(0x45, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	iVar1 = *piVar3;
	if (iVar1 != -1) {
		if (*(int *)ppuVar5[-0x1bbe] == 0) {
			if (iVar1 == 0) {
				*piVar3 = 0x17;
			} else {
				*piVar3 = iVar1 + -1;
			}
			while (*(int *)(iVar4 + *piVar3 * 0x9c + 0x94) == 0) {
				if (*piVar3 == 0) {
					*piVar3 = 0x17;
				} else {
					*piVar3 = *piVar3 + -1;
				}
			}
		} else {
			if (iVar1 == *(int *)ppuVar5[-0x1bc6]) {
				iVar1 = *piVar2;
				if (iVar1 != 0) {
					*piVar2 = iVar1 + -1;
				}
			} else {
				*piVar3 = iVar1 + -1;
				while (*(int *)(iVar4 + *piVar3 * 0x9c + 0x94) == 0) {
					if (*piVar3 == 0) {
						*piVar3 = 0x17;
					} else {
						*piVar3 = *piVar3 + -1;
					}
				}
			}
		}
	}
	return;
}

void STextDown(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	int iVar4;
	undefined **ppuVar5;

	iVar4 = _DAT_100f20d4;
	piVar3 = _DAT_100f20d0;
	piVar2 = _DAT_100f20bc;
	ppuVar5 = &toc;
	PlaySFX(0x45, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	iVar1 = *piVar3;
	if (iVar1 != -1) {
		if (*(int *)ppuVar5[-0x1bbe] == 0) {
			if (iVar1 == 0x17) {
				*piVar3 = 0;
			} else {
				*piVar3 = iVar1 + 1;
			}
			while (*(int *)(iVar4 + *piVar3 * 0x9c + 0x94) == 0) {
				if (*piVar3 == 0x17) {
					*piVar3 = 0;
				} else {
					*piVar3 = *piVar3 + 1;
				}
			}
		} else {
			if (iVar1 == *(int *)ppuVar5[-0x1bc7]) {
				iVar1 = *piVar2;
				if (iVar1 < *(int *)ppuVar5[-0x1bc8]) {
					*piVar2 = iVar1 + 1;
				}
			} else {
				*piVar3 = iVar1 + 1;
				while (*(int *)(iVar4 + *piVar3 * 0x9c + 0x94) == 0) {
					if (*piVar3 == 0x17) {
						*piVar3 = 0;
					} else {
						*piVar3 = *piVar3 + 1;
					}
				}
			}
		}
	}
	return;
}

void STextPrior(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	undefined **ppuVar4;

	piVar3 = _DAT_100f20d0;
	piVar2 = _DAT_100f20bc;
	ppuVar4 = &toc;
	PlaySFX(0x45, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	iVar1 = *piVar3;
	if ((iVar1 != -1) && (*(int *)ppuVar4[-0x1bbe] != 0)) {
		if (iVar1 == *(int *)ppuVar4[-0x1bc6]) {
			if (*piVar2 != 0) {
				*piVar2 = *piVar2 + -4;
			}
			if (*piVar2 < 0) {
				*piVar2 = 0;
			}
		} else {
			*piVar3 = *(int *)ppuVar4[-0x1bc6];
		}
	}
	return;
}

void STextNext(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	undefined **ppuVar4;

	piVar3 = _DAT_100f20d0;
	piVar2 = _DAT_100f20bc;
	ppuVar4 = &toc;
	PlaySFX(0x45, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
	iVar1 = *piVar3;
	if ((iVar1 != -1) && (*(int *)ppuVar4[-0x1bbe] != 0)) {
		if (iVar1 == *(int *)ppuVar4[-0x1bc7]) {
			iVar1 = *(int *)ppuVar4[-0x1bc8];
			if (*piVar2 < iVar1) {
				*piVar2 = *piVar2 + 4;
			}
			if (iVar1 < *piVar2) {
				*piVar2 = iVar1;
			}
		} else {
			*piVar3 = *(int *)ppuVar4[-0x1bc7];
		}
	}
	return;
}

void FUN_100aa71c(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	if (*_DAT_100f20d0 - 10U < 0xb) {
		// WARNING: Could not recover jumptable at 0x100aa74c. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f37d4 + (*_DAT_100f20d0 - 10U) * 4))(*(code **)(PTR_PTR_LAB_100f37d4 + (*_DAT_100f20d0 - 10U) * 4), param_2, param_3, param_4, param_5, param_6, param_7, param_8);
		return;
	}
	return;
}

void SetGoldCurs(int param_1, int param_2)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1828 + param_2 * 0x170 + param_1 * 0x55ec;
	if (0x9c3 < *(int *)(puVar1 + 0xf6c)) {
		*(undefined4 *)(puVar1 + 0xf68) = 6;
		return;
	}
	if (*(int *)(puVar1 + 0xf6c) < 0x3e9) {
		*(undefined4 *)(puVar1 + 0xf68) = 4;
		return;
	}
	*(undefined4 *)(puVar1 + 0xf68) = 5;
	return;
}

void SetSpdbarGoldCurs(int param_1, int param_2)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1828 + param_2 * 0x170 + param_1 * 0x55ec;
	if (0x9c3 < *(int *)(puVar1 + 0x4918)) {
		*(undefined4 *)(puVar1 + 0x4914) = 6;
		return;
	}
	if (*(int *)(puVar1 + 0x4918) < 0x3e9) {
		*(undefined4 *)(puVar1 + 0x4914) = 4;
		return;
	}
	*(undefined4 *)(puVar1 + 0x4914) = 5;
	return;
}

void FUN_100aa87c(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	int iVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	int iVar16;
	undefined4 in_stack_ffffffb8;

	puVar5 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	lVar11 = (longlong)param_5;
	lVar10 = (longlong)param_4;
	lVar9 = (longlong)param_3;
	uVar6 = ZEXT48(&toc);
	uVar8 = CalculateGold(*(int *)PTR_DAT_100f1824);
	iVar16 = 0;
	*(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x1c8) = (int)uVar8 - param_1;
	while (true) {
		iVar7 = (int)uVar6;
		if ((7 < iVar16) || (param_1 < 1))
			break;
		iVar7 = *(int *)puVar4;
		puVar3 = puVar5 + iVar7 * 0x55ec + iVar16 * 0x170;
		if (*(int *)(puVar3 + 0x485c) == 0xb) {
			iVar2 = *(int *)(puVar3 + 0x4918);
			if (iVar2 != 5000) {
				if (param_1 < iVar2) {
					*(int *)(puVar3 + 0x4918) = iVar2 - param_1;
					SetSpdbarGoldCurs(iVar7, iVar16);
					param_1 = 0;
				} else {
					param_1 = param_1 - iVar2;
					RemoveSpdBarItem(iVar7, iVar16, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
					    (char)lVar14, in_stack_ffffffb8);
					iVar16 = -1;
				}
			}
		}
		iVar16 = iVar16 + 1;
	}
	if (0 < param_1) {
		iVar16 = 0;
		while (true) {
			iVar7 = (int)uVar6;
			if ((7 < iVar16) || (param_1 < 1))
				break;
			iVar7 = *(int *)puVar4;
			puVar3 = puVar5 + iVar7 * 0x55ec + iVar16 * 0x170;
			if (*(int *)(puVar3 + 0x485c) == 0xb) {
				iVar2 = *(int *)(puVar3 + 0x4918);
				if (param_1 < iVar2) {
					*(int *)(puVar3 + 0x4918) = iVar2 - param_1;
					SetSpdbarGoldCurs(iVar7, iVar16);
					param_1 = 0;
				} else {
					param_1 = param_1 - iVar2;
					RemoveSpdBarItem(iVar7, iVar16, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13,
					    (char)lVar14, in_stack_ffffffb8);
					iVar16 = -1;
				}
			}
			iVar16 = iVar16 + 1;
		}
	}
	**(undefined4 **)(iVar7 + -0x76bc) = 0xff;
	if (0 < param_1) {
		lVar15 = 0;
		while (true) {
			uVar1 = *(uint *)puVar4;
			puVar3 = puVar5 + uVar1 * 0x55ec;
			iVar16 = (int)lVar15;
			if ((*(int *)(puVar3 + 0x4828) <= iVar16) || (param_1 < 1))
				break;
			puVar3 = puVar3 + iVar16 * 0x170;
			if (*(int *)(puVar3 + 0xeb0) == 0xb) {
				iVar7 = *(int *)(puVar3 + 0xf6c);
				if (iVar7 != 5000) {
					if (param_1 < iVar7) {
						*(int *)(puVar3 + 0xf6c) = iVar7 - param_1;
						SetGoldCurs(uVar1, iVar16);
						param_1 = 0;
					} else {
						param_1 = param_1 - iVar7;
						RemoveInvItem((ulonglong)uVar1, lVar15, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
						    (char)lVar13, (char)lVar14, in_stack_ffffffb8);
						lVar15 = -1;
					}
				}
			}
			lVar15 = lVar15 + 1;
		}
		if (0 < param_1) {
			lVar15 = 0;
			while (true) {
				uVar1 = *(uint *)puVar4;
				puVar3 = puVar5 + uVar1 * 0x55ec;
				iVar16 = (int)lVar15;
				if ((*(int *)(puVar3 + 0x4828) <= iVar16) || (param_1 < 1))
					break;
				puVar3 = puVar3 + iVar16 * 0x170;
				if (*(int *)(puVar3 + 0xeb0) == 0xb) {
					iVar7 = *(int *)(puVar3 + 0xf6c);
					if (param_1 < iVar7) {
						*(int *)(puVar3 + 0xf6c) = iVar7 - param_1;
						SetGoldCurs(uVar1, iVar16);
						param_1 = 0;
					} else {
						param_1 = param_1 - iVar7;
						RemoveInvItem((ulonglong)uVar1, lVar15, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
						    (char)lVar13, (char)lVar14, in_stack_ffffffb8);
						lVar15 = -1;
					}
				}
				lVar15 = lVar15 + 1;
			}
		}
	}
	return;
}

void FUN_100aaae4(undefined8 uParm1, undefined param_2, undefined param_3, ulonglong uParm4,
    ulonglong uParm5, undefined param_6, undefined8 uParm7, undefined8 uParm8)

{
	undefined4 uVar1;
	int iVar2;
	undefined *puVar3;
	uint uVar4;
	ulonglong uVar5;
	undefined **ppuVar6;
	longlong lVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	undefined4 in_stack_ffffffb8;

	uVar4 = _DAT_100f1e2c;
	puVar3 = PTR_DAT_100f1824;
	uVar11 = (undefined)uParm8;
	uVar10 = (undefined7)((ulonglong)uParm8 >> 8);
	uVar9 = (undefined)uParm7;
	uVar8 = (undefined7)((ulonglong)uParm7 >> 8);
	ppuVar6 = &toc;
	uVar13 = (ulonglong)_DAT_100f1e2c;
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	FUN_100aa87c(*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x549c), param_2,
	    param_3, (char)uParm4, (char)uParm5, param_6, uVar9, uVar11, in_stack_ffffffb8);
	lVar7 = uVar12 + (ulonglong) * (uint *)puVar3 * 0x55ec;
	iVar2 = (int)lVar7;
	if (*(char *)(iVar2 + 0x5410) == '\0') {
		*(undefined4 *)(iVar2 + 0x540c) = 0;
	}
	StoreAutoPlace((char)lVar7, param_2, param_3, (char)uParm4, (char)uParm5, param_6, uVar9, uVar11,
	    in_stack_ffffffb8);
	uVar12 = ZEXT48(ppuVar6[-0x1bce]);
	uVar5 = (ulonglong) * (uint *)ppuVar6[-0x1bce] + ((ulonglong) * (uint *)ppuVar6[-0x1bc3] - (ulonglong) * (uint *)ppuVar6[-0x1bc6] & 0xffffffff00000000 | (ulonglong)(uint)((int)((ulonglong) * (uint *)ppuVar6[-0x1bc3] - (ulonglong) * (uint *)ppuVar6[-0x1bc6]) >> 2));
	if ((int)uVar5 == 0x13) {
		*(undefined4 *)(uVar4 + 7000) = 0xffffffff;
	} else {
		uParm5 = uVar13 + uVar5 * 0x170;
		while (*(int *)((int)uParm5 + 0x178) != -1) {
			lVar7 = 0x2e;
			uParm4 = uParm5 - 8;
			uVar12 = uParm5 + 0x168;
			do {
				uVar12 = uVar12 + 8;
				uVar1 = ((undefined4 *)uVar12)[1];
				uParm4 = uParm4 + 8;
				*(undefined4 *)uParm4 = *(undefined4 *)uVar12;
				((undefined4 *)uParm4)[1] = uVar1;
				lVar7 = lVar7 + -1;
			} while (lVar7 != 0);
			uParm5 = uParm5 + 0x170;
			uVar5 = uVar5 + 1;
		}
		*(undefined4 *)(uVar4 + (int)uVar5 * 0x170 + 8) = 0xffffffff;
	}
	CalcPlrInv((ulonglong) * (uint *)puVar3, 1, uVar12, uParm4, uParm5, uVar5, CONCAT71(uVar8, uVar9),
	    CONCAT71(uVar10, uVar11), in_stack_ffffffb8);
	return;
}

void FUN_100aac00(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	undefined4 uVar4;
	uint uVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	int *piVar10;
	uint *puVar11;
	int *piVar12;
	longlong lVar13;
	ulonglong uVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	ulonglong uVar18;
	undefined uVar19;
	ulonglong uVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	longlong lVar24;
	undefined uVar25;
	longlong lVar26;
	undefined uVar27;
	longlong lVar28;
	undefined4 in_stack_ffffffb8;

	piVar12 = _DAT_100f20d0;
	piVar10 = _DAT_100f20c4;
	puVar9 = PTR_DAT_100f1980;
	puVar8 = PTR_DAT_100f197c;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	lVar26 = (longlong)param_8;
	lVar24 = (longlong)param_7;
	uVar20 = (ulonglong)_DAT_100f1e2c;
	uVar18 = ZEXT48(PTR_DAT_100f1828);
	iVar1 = *_DAT_100f20d0;
	uVar15 = SUB41(PTR_DAT_100f1828, 0);
	uVar17 = (undefined)_DAT_100f1e2c;
	if (iVar1 == 0x16) {
		StartStore('\x01', param_2, 0x16, uVar15, uVar17, param_6, param_7, param_8, in_stack_ffffffb8);
		*piVar12 = 0xc;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 2;
		puVar11 = _DAT_100f20bc;
		*piVar10 = iVar1;
		piVar10 = _DAT_100f20b8;
		uVar2 = *puVar11;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		uVar22 = (ulonglong) * (uint *)puVar6 * 0x55ec;
		lVar16 = uVar18 + uVar22;
		iVar3 = *(int *)((int)lVar16 + 0x1c8);
		lVar13 = uVar20 + ((ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar10 >> 2)) * 0x170;
		if (iVar3 < *(int *)((int)lVar13 + 200)) {
			StartStore('\t', (char)iVar3, (char)lVar16, uVar15, uVar17, (char)uVar22, param_7, param_8,
			    in_stack_ffffffb8);
		} else {
			lVar16 = lVar16 + 0x53cc;
			lVar28 = 0x2e;
			lVar13 = lVar13 + -8;
			do {
				lVar13 = lVar13 + 8;
				uVar4 = ((undefined4 *)lVar13)[1];
				lVar16 = lVar16 + 8;
				*(undefined4 *)lVar16 = *(undefined4 *)lVar13;
				((undefined4 *)lVar16)[1] = uVar4;
				lVar28 = lVar28 + -1;
			} while (lVar28 != 0);
			SetCursor_(*(int *)(puVar7 + (int)uVar22 + 0x5494) + 0xc, (char)lVar13, (char)lVar16, uVar15,
			    uVar17, (char)uVar22, param_7, param_8, in_stack_ffffffb8);
			uVar14 = 0;
			lVar28 = 0;
			while (true) {
				uVar23 = (undefined)uVar22;
				uVar21 = (undefined)uVar20;
				uVar19 = (undefined)uVar18;
				uVar17 = (undefined)lVar16;
				uVar15 = (undefined)lVar13;
				uVar25 = (undefined)lVar24;
				uVar27 = (undefined)lVar26;
				if ((0x27 < (int)lVar28) || ((int)uVar14 != 0))
					break;
				iVar1 = *(int *)puVar9;
				uVar20 = 0;
				uVar2 = iVar1 / 0x1c + (iVar1 >> 0x1f);
				uVar22 = (longlong)(int)((ulonglong)((longlong)iVar1 * -0x6db6db6d) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar2;
				uVar5 = *(int *)puVar8 / 0x1c + (*(int *)puVar8 >> 0x1f);
				lVar16 = uVar22 + (ulonglong)(uVar2 >> 0x1f);
				uVar18 = (ulonglong)uVar5 + (ulonglong)(uVar5 >> 0x1f);
				lVar13 = lVar28;
				uVar14 = AutoPlace(*(int *)puVar6, (int)lVar28, lVar16, (int)uVar18, 0, (char)uVar2, uVar25,
				    uVar27, in_stack_ffffffb8);
				lVar28 = lVar28 + 1;
			}
			if ((int)uVar14 == 0) {
				StartStore('\n', uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			} else {
				StartStore('\v', uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			}
			SetCursor_(1, uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
		}
	}
	return;
}

void FUN_100aad84(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int *piVar1;
	int *piVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint uVar5;
	undefined **ppuVar6;
	longlong lVar7;
	int iVar8;
	longlong lVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	undefined4 in_stack_ffffffb8;

	uVar5 = _DAT_100f1e28;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	ppuVar6 = &toc;
	uVar11 = (ulonglong)_DAT_100f1e28;
	uVar10 = ZEXT48(PTR_DAT_100f1828);
	FUN_100aa87c(*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x549c), param_2,
	    param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	lVar7 = uVar10 + (ulonglong) * (uint *)puVar3 * 0x55ec;
	iVar8 = (int)lVar7;
	if (*(char *)(iVar8 + 0x5410) == '\0') {
		*(undefined4 *)(iVar8 + 0x540c) = 0;
	}
	StoreAutoPlace((char)lVar7, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	lVar7 = 0;
	piVar1 = (int *)ppuVar6[-0x1bce];
	lVar9 = 0;
	iVar8 = *piVar1 + (*(int *)ppuVar6[-0x1bc3] - *(int *)ppuVar6[-0x1bc6] >> 2);
	while (-1 < iVar8) {
		if (*(int *)((int)uVar11 + 8) != -1) {
			iVar8 = iVar8 + -1;
			lVar7 = lVar9;
		}
		uVar11 = uVar11 + 0x170;
		lVar9 = lVar9 + 1;
	}
	piVar2 = (int *)ppuVar6[-0x1c6b];
	*(undefined4 *)(uVar5 + (int)lVar7 * 0x170 + 8) = 0xffffffff;
	*piVar2 = *piVar2 + -1;
	SpawnPremium((int)(char)puVar4[*(int *)puVar3 * 0x55ec + 0x1b4], (char)piVar2, (char)piVar1,
	    (char)uVar11, (char)lVar7, (char)lVar9, param_7, param_8, in_stack_ffffffb8);
	return;
}

void FUN_100aae8c(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	undefined4 uVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	int *piVar9;
	uint *puVar10;
	uint *puVar11;
	longlong lVar12;
	undefined uVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	undefined uVar16;
	ulonglong uVar17;
	longlong lVar18;
	undefined uVar19;
	ulonglong uVar20;
	undefined uVar21;
	undefined uVar22;
	ulonglong uVar23;
	undefined uVar24;
	longlong lVar25;
	undefined uVar26;
	longlong lVar27;
	longlong lVar28;
	undefined4 in_stack_ffffffb8;

	puVar10 = _DAT_100f20d0;
	puVar11 = _DAT_100f20c4;
	puVar8 = PTR_DAT_100f1980;
	puVar7 = PTR_DAT_100f197c;
	puVar6 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	uVar15 = ZEXT48(PTR_DAT_100f1828);
	uVar14 = (ulonglong)_DAT_100f1e28;
	uVar1 = *_DAT_100f20d0;
	uVar20 = (ulonglong)uVar1;
	uVar21 = (undefined)uVar1;
	uVar13 = SUB41(PTR_DAT_100f1828, 0);
	if (uVar1 == 0x16) {
		StartStore('\x01', param_2, (char)_DAT_100f1e28, uVar13, param_5, uVar21, param_7, param_8,
		    in_stack_ffffffb8);
		*puVar10 = 0xe;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 0x12;
		puVar10 = _DAT_100f20bc;
		lVar25 = 0;
		*puVar11 = uVar1;
		piVar9 = _DAT_100f20b8;
		lVar27 = 0;
		uVar2 = *puVar10;
		uVar23 = (ulonglong)uVar2;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		lVar12 = uVar23 + (ulonglong)(uint)((int)(uVar1 - *piVar9) >> 2);
		uVar17 = uVar14;
		while (-1 < (int)lVar12) {
			if (*(int *)((int)uVar17 + 8) != -1) {
				lVar12 = lVar12 + -1;
				lVar25 = lVar27;
			}
			uVar17 = uVar17 + 0x170;
			lVar27 = lVar27 + 1;
		}
		lVar18 = (ulonglong) * (uint *)puVar5 * 0x55ec;
		lVar12 = uVar14 + lVar25 * 0x170;
		lVar27 = uVar15 + lVar18;
		iVar3 = *(int *)((int)lVar27 + 0x1c8);
		if (iVar3 < *(int *)((int)lVar12 + 200)) {
			StartStore('\t', (char)iVar3, (char)lVar27, uVar13, (char)lVar18, uVar21, (char)uVar2, (char)lVar25, in_stack_ffffffb8);
		} else {
			lVar27 = lVar27 + 0x53cc;
			lVar28 = 0x2e;
			lVar12 = lVar12 + -8;
			do {
				lVar12 = lVar12 + 8;
				uVar4 = ((undefined4 *)lVar12)[1];
				lVar27 = lVar27 + 8;
				*(undefined4 *)lVar27 = *(undefined4 *)lVar12;
				((undefined4 *)lVar27)[1] = uVar4;
				lVar28 = lVar28 + -1;
			} while (lVar28 != 0);
			SetCursor_(*(int *)(puVar6 + (int)lVar18 + 0x5494) + 0xc, (char)lVar12, (char)lVar27, uVar13,
			    (char)lVar18, uVar21, (char)uVar2, (char)lVar25, in_stack_ffffffb8);
			uVar14 = 0;
			lVar28 = 0;
			while (true) {
				uVar22 = (undefined)uVar20;
				uVar19 = (undefined)lVar18;
				uVar16 = (undefined)uVar15;
				uVar21 = (undefined)lVar27;
				uVar13 = (undefined)lVar12;
				uVar24 = (undefined)uVar23;
				uVar26 = (undefined)lVar25;
				if ((0x27 < (int)lVar28) || ((int)uVar14 != 0))
					break;
				iVar3 = *(int *)puVar8;
				lVar18 = 0;
				uVar1 = iVar3 / 0x1c + (iVar3 >> 0x1f);
				uVar20 = (longlong)(int)((ulonglong)((longlong)iVar3 * -0x6db6db6d) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar1;
				uVar2 = *(int *)puVar7 / 0x1c + (*(int *)puVar7 >> 0x1f);
				lVar27 = uVar20 + (ulonglong)(uVar1 >> 0x1f);
				uVar15 = (ulonglong)uVar2 + (ulonglong)(uVar2 >> 0x1f);
				lVar12 = lVar28;
				uVar14 = AutoPlace(*(int *)puVar5, (int)lVar28, lVar27, (int)uVar15, 0, (char)uVar1, uVar24,
				    uVar26, in_stack_ffffffb8);
				lVar28 = lVar28 + 1;
			}
			if ((int)uVar14 == 0) {
				StartStore('\n', uVar13, uVar21, uVar16, uVar19, uVar22, uVar24, uVar26, in_stack_ffffffb8);
			} else {
				StartStore('\v', uVar13, uVar21, uVar16, uVar19, uVar22, uVar24, uVar26, in_stack_ffffffb8);
			}
			SetCursor_(1, uVar13, uVar21, uVar16, uVar19, uVar22, uVar24, uVar26, in_stack_ffffffb8);
		}
	}
	return;
}

undefined8
FUN_100ab044(int param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	ulonglong uVar3;
	undefined **ppuVar4;
	undefined8 uVar5;
	undefined *puVar6;
	int iVar7;
	undefined *puVar8;
	longlong lVar9;
	ulonglong uVar10;
	int iVar11;
	int iVar12;
	undefined4 in_stack_ffffffb8;

	ppuVar4 = &toc;
	iVar12 = (int)((longlong)param_1 * 0x170);
	uVar1 = *(uint *)(PTR_DAT_100f20ac + iVar12 + 200);
	uVar10 = (ulonglong)uVar1;
	uVar2 = (int)uVar1 / 5000 + ((int)uVar1 >> 0x1f);
	iVar7 = uVar2 + (uVar2 >> 0x1f);
	if (uVar10 != (((longlong)(int)((ulonglong)((longlong)(int)uVar1 * 0x68db8bad) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar2) + (ulonglong)(uVar2 >> 0x1f)) * 5000) {
		iVar7 = iVar7 + 1;
	}
	SetCursor_(*(int *)(PTR_DAT_100f20ac + iVar12 + 0xc0) + 0xc, (char)uVar2, (char)PTR_DAT_100f20ac,
	    (char)((longlong)param_1 * 0x170), param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	uVar1 = *(int *)ppuVar4[-0x1d94] / 0x1c + (*(int *)ppuVar4[-0x1d94] >> 0x1f);
	uVar2 = *(int *)ppuVar4[-0x1d95] / 0x1c + (*(int *)ppuVar4[-0x1d95] >> 0x1f);
	lVar9 = (ulonglong)uVar1 + (ulonglong)(uVar1 >> 0x1f);
	iVar12 = (int)lVar9 * (uVar2 + (uVar2 >> 0x1f));
	SetCursor_(1, (byte)(uVar2 >> 0x1f), (char)lVar9, (byte)(uVar1 >> 0x1f), param_5, param_6, param_7,
	    param_8, in_stack_ffffffb8);
	if (iVar12 < iVar7) {
		lVar9 = 4;
		puVar8 = ppuVar4[-0x1dea] + *(int *)ppuVar4[-0x1deb] * 0x55ec;
		puVar6 = puVar8;
		do {
			if (puVar6[0x482c] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x482d] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x482e] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x482f] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x4830] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x4831] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x4832] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x4833] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x4834] == '\0') {
				iVar12 = iVar12 + 1;
			}
			if (puVar6[0x4835] == '\0') {
				iVar12 = iVar12 + 1;
			}
			puVar6 = puVar6 + 10;
			lVar9 = lVar9 + -1;
		} while (lVar9 != 0);
		uVar3 = (ulonglong) * (uint *)(puVar8 + 0x4828);
		if (0 < (int)*(uint *)(puVar8 + 0x4828)) {
			do {
				if (*(int *)(puVar8 + 0xeb0) == 0xb) {
					uVar1 = *(uint *)(puVar8 + 0xf6c);
					if (uVar1 != 5000) {
						if ((int)((int)uVar10 + uVar1) < 0x1389) {
							uVar10 = 0;
						} else {
							uVar10 = uVar10 - (5000 - (ulonglong)uVar1);
						}
					}
				}
				puVar8 = puVar8 + 0x170;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
		}
		iVar11 = (int)uVar10;
		uVar1 = iVar11 / 5000 + (iVar11 >> 0x1f);
		iVar7 = uVar1 + (uVar1 >> 0x1f);
		if (uVar10 != (((longlong)(int)((ulonglong)((longlong)iVar11 * 0x68db8bad) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar1) + (ulonglong)(uVar1 >> 0x1f)) * 5000) {
			iVar7 = iVar7 + 1;
		}
		if (iVar12 < iVar7) {
			uVar5 = 0;
		} else {
			uVar5 = 1;
		}
	} else {
		uVar5 = 1;
	}
	return uVar5;
}

void FUN_100ab2d0(undefined4 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined4 uVar3;
	uint uVar4;
	int iVar5;
	bool bVar6;
	undefined *puVar7;
	undefined *puVar8;
	longlong lVar9;
	undefined4 *puVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	ulonglong uVar18;
	longlong lVar19;
	undefined4 in_stack_ffffffa8;

	puVar8 = PTR_DAT_100f1e5c;
	puVar7 = PTR_DAT_100f1824;
	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	uVar18 = ZEXT48(PTR_DAT_100f1828);
	bVar6 = false;
	iVar15 = 0;
	while (true) {
		if (0x27 < iVar15) {
			return;
		}
		if (bVar6)
			break;
		uVar1 = *(uint *)puVar7;
		uVar4 = iVar15 / 10 + (iVar15 >> 0x1f);
		iVar16 = (uVar4 + (uVar4 >> 0x1f)) * 10;
		lVar9 = uVar18 + (ulonglong)uVar1 * 0x55ec;
		iVar17 = iVar15 + (uVar4 + (uVar4 >> 0x1f)) * -10;
		iVar5 = (int)lVar9;
		if (*(char *)(iVar5 + iVar17 + iVar16 + 0x482c) == '\0') {
			uVar2 = *(uint *)(iVar5 + 0x4828);
			GetGoldSeed(uVar1, (int *)puVar8, (char)lVar9, (byte)(uVar4 >> 0x1f), bVar6, (char)lVar12,
			    (char)lVar13, (char)lVar14, in_stack_ffffffa8);
			uVar1 = *(uint *)puVar7;
			lVar19 = 0x2e;
			lVar11 = uVar18 + (ulonglong)uVar1 * 0x55ec;
			lVar12 = lVar11 + (ulonglong)uVar2 * 0x170;
			lVar9 = lVar12 + 0xea0;
			puVar10 = (undefined4 *)(puVar8 + -8);
			do {
				uVar3 = puVar10[3];
				lVar9 = lVar9 + 8;
				*(undefined4 *)lVar9 = puVar10[2];
				((undefined4 *)lVar9)[1] = uVar3;
				lVar19 = lVar19 + -1;
				puVar10 = puVar10 + 2;
			} while (lVar19 != 0);
			iVar5 = (int)lVar11;
			*(int *)(iVar5 + 0x4828) = *(int *)(iVar5 + 0x4828) + 1;
			*(undefined *)(iVar5 + iVar17 + iVar16 + 0x482c) = (char)*(undefined4 *)(iVar5 + 0x4828);
			*(undefined4 *)((int)lVar12 + 0xf6c) = param_1;
			SetGoldCurs(uVar1, uVar2);
			bVar6 = true;
		}
		iVar15 = iVar15 + 1;
	}
	return;
}

void FUN_100ab3e8(undefined param_1, undefined param_2, undefined param_3, char param_4,
    undefined param_5, char param_6, undefined param_7, char param_8, undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	undefined4 uVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	uint *puVar8;
	longlong lVar9;
	longlong lVar10;
	ulonglong uVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	ulonglong uVar16;
	ulonglong uVar17;
	ulonglong uVar18;
	int iVar19;
	int iVar20;
	ulonglong uVar21;
	undefined4 in_stack_ffffffb8;

	puVar8 = _DAT_100f20c0;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_6;
	lVar12 = (longlong)param_4;
	uVar11 = ZEXT48(PTR_DAT_100f2098);
	uVar16 = ZEXT48(PTR_DAT_100f20a8);
	uVar17 = ZEXT48(PTR_DAT_100f20ac);
	uVar21 = ZEXT48(PTR_DAT_100f1828);
	lVar9 = (ulonglong) * (uint *)PTR_DAT_100f2098 + (ulonglong)(uint)(*_DAT_100f20c4 - *_DAT_100f20b8 >> 2);
	cVar1 = PTR_DAT_100f20a8[(uint)lVar9];
	if (cVar1 < '\0') {
		RemoveSpdBarItem(*(int *)PTR_DAT_100f1824, -((int)cVar1 + 1), (char)PTR_DAT_100f2098, param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffb8);
	} else {
		RemoveInvItem((ulonglong) * (uint *)PTR_DAT_100f1824, (longlong)cVar1, (char)PTR_DAT_100f2098, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	lVar13 = uVar17 + lVar9 * 0x170;
	uVar2 = *(uint *)((int)lVar13 + 200);
	uVar18 = (ulonglong)uVar2;
	*puVar8 = *puVar8 - 1;
	uVar3 = *puVar8;
	uVar17 = (ulonglong)uVar3;
	if ((uint)lVar9 != uVar3) {
		lVar14 = uVar16 + lVar9;
		while ((int)lVar9 < (int)uVar3) {
			lVar10 = 0x2e;
			lVar12 = lVar13 + -8;
			uVar11 = lVar13 + 0x168;
			do {
				uVar11 = uVar11 + 8;
				uVar4 = ((undefined4 *)uVar11)[1];
				lVar12 = lVar12 + 8;
				*(undefined4 *)lVar12 = *(undefined4 *)uVar11;
				((undefined4 *)lVar12)[1] = uVar4;
				lVar10 = lVar10 + -1;
			} while (lVar10 != 0);
			lVar13 = lVar13 + 0x170;
			lVar9 = lVar9 + 1;
			*(undefined *)lVar14 = ((undefined *)lVar14)[1];
			lVar14 = lVar14 + 1;
		}
	}
	iVar20 = 0;
	lVar9 = 0;
	*(uint *)(puVar7 + *(int *)puVar6 * 0x55ec + 0x1c8) = *(int *)(puVar7 + *(int *)puVar6 * 0x55ec + 0x1c8) + uVar2;
	while (true) {
		uVar2 = *(uint *)puVar6;
		lVar10 = uVar21 + (ulonglong)uVar2 * 0x55ec;
		iVar19 = (int)uVar18;
		if ((*(int *)((int)lVar10 + 0x4828) <= iVar20) || (iVar19 < 1))
			break;
		iVar5 = (int)(lVar10 + lVar9);
		if (*(int *)(iVar5 + 0xeb0) == 0xb) {
			lVar12 = lVar10 + lVar9 + 0xf6c;
			uVar3 = *(uint *)(iVar5 + 0xf6c);
			if (uVar3 != 5000) {
				if ((int)(iVar19 + uVar3) < 0x1389) {
					*(int *)lVar12 = iVar19 + uVar3;
					SetGoldCurs(uVar2, iVar20);
					uVar18 = 0;
				} else {
					uVar11 = 5000 - (ulonglong)uVar3;
					*(int *)lVar12 = 5000;
					uVar18 = uVar18 - uVar11;
					SetGoldCurs(uVar2, iVar20);
				}
			}
		}
		lVar9 = lVar9 + 0x170;
		iVar20 = iVar20 + 1;
	}
	if (0 < iVar19) {
		while (true) {
			if ((int)uVar18 < 0x1389)
				break;
			FUN_100ab2d0(5000, (char)lVar10, (char)uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
			    (char)uVar17, (char)lVar15, in_stack_ffffffb8);
			uVar18 = uVar18 - 5000;
		}
		FUN_100ab2d0((int)uVar18, (char)lVar10, (char)uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
		    (char)uVar17, (char)lVar15, in_stack_ffffffb8);
	}
	return;
}

void FUN_100ab5b0(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	undefined4 uVar3;
	undefined4 uVar4;
	int *piVar5;
	uint *puVar6;
	int *piVar7;
	longlong lVar8;
	undefined8 uVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	longlong lVar13;
	undefined uVar14;
	longlong lVar15;
	undefined4 in_stack_ffffffc8;

	piVar7 = _DAT_100f20d0;
	piVar5 = _DAT_100f20c4;
	iVar1 = *_DAT_100f20d0;
	if (iVar1 == 0x16) {
		StartStore('\x01', param_2, param_3, 0x16, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*piVar7 = 0x10;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 3;
		puVar6 = _DAT_100f20bc;
		lVar15 = 0x2e;
		*piVar5 = iVar1;
		piVar5 = _DAT_100f20b8;
		uVar2 = *puVar6;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		lVar8 = (ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar5 >> 2);
		lVar11 = ZEXT48(PTR_DAT_100f20ac) + lVar8 * 0x170 + -8;
		lVar13 = ZEXT48(PTR_DAT_100f1828) + (ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec + 0x53cc;
		do {
			lVar11 = lVar11 + 8;
			uVar12 = (undefined)lVar11;
			uVar4 = *(undefined4 *)lVar11;
			uVar10 = (undefined)uVar4;
			uVar3 = ((undefined4 *)lVar11)[1];
			lVar13 = lVar13 + 8;
			uVar14 = (undefined)lVar13;
			*(undefined4 *)lVar13 = uVar4;
			((undefined4 *)lVar13)[1] = uVar3;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		uVar9 = FUN_100ab044((int)lVar8, uVar10, uVar12, uVar14, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		if ((int)uVar9 == 0) {
			StartStore('\n', uVar10, uVar12, uVar14, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		} else {
			StartStore('\v', uVar10, uVar12, uVar14, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		}
	}
	return;
}

void FUN_100ab694(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	int iVar7;
	undefined4 in_stack_ffffffb8;

	puVar5 = PTR_DAT_100f20ac;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	ppuVar6 = &toc;
	FUN_100aa87c(*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x549c), param_2,
	    param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	puVar2 = ppuVar6[-0x1bca];
	iVar7 = *(int *)ppuVar6[-0x1bce] + (*(int *)ppuVar6[-0x1bc3] - *(int *)ppuVar6[-0x1bc6] >> 2);
	*(undefined4 *)(puVar5 + iVar7 * 0x170 + 0xec) = *(undefined4 *)(puVar5 + iVar7 * 0x170 + 0xf0);
	cVar1 = puVar2[iVar7];
	if (cVar1 < '\0') {
		if (cVar1 == -1) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x584) = *(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x588);
		}
		if (cVar1 == -2) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xe24) = *(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xe28);
		}
		if (cVar1 == -3) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xb44) = *(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xb48);
		}
		if (cVar1 == -4) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xcb4) = *(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xcb8);
		}
	} else {
		*(undefined4 *)(puVar4 + (int)cVar1 * 0x170 + *(int *)puVar3 * 0x55ec + 0xf94) = *(undefined4 *)(puVar4 + (int)cVar1 * 0x170 + *(int *)puVar3 * 0x55ec + 0xf98);
	}
	return;
}

void FUN_100ab7bc(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	undefined4 uVar3;
	undefined *puVar4;
	undefined *puVar5;
	int *piVar6;
	uint *puVar7;
	int *piVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	ulonglong uVar12;
	undefined uVar13;
	ulonglong uVar14;
	undefined uVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	undefined4 in_stack_ffffffb8;

	piVar8 = _DAT_100f20d0;
	piVar6 = _DAT_100f20c4;
	puVar5 = PTR_DAT_100f20ac;
	puVar4 = PTR_DAT_100f1828;
	uVar14 = ZEXT48(PTR_DAT_100f20ac);
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	iVar1 = *_DAT_100f20d0;
	uVar13 = SUB41(PTR_DAT_100f1828, 0);
	uVar15 = SUB41(PTR_DAT_100f20ac, 0);
	if (iVar1 == 0x16) {
		StartStore('\x01', param_2, param_3, uVar13, uVar15, 0x16, param_7, param_8, in_stack_ffffffb8);
		*piVar8 = 0x12;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 4;
		puVar7 = _DAT_100f20bc;
		lVar18 = 0x2e;
		*piVar6 = iVar1;
		piVar6 = _DAT_100f20b8;
		uVar2 = *puVar7;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		lVar16 = ((ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar6 >> 2)) * 0x170;
		lVar17 = (ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec;
		lVar9 = uVar14 + lVar16 + -8;
		lVar11 = uVar12 + lVar17 + 0x53cc;
		do {
			lVar9 = lVar9 + 8;
			uVar3 = ((undefined4 *)lVar9)[1];
			lVar11 = lVar11 + 8;
			*(undefined4 *)lVar11 = *(undefined4 *)lVar9;
			((undefined4 *)lVar11)[1] = uVar3;
			lVar18 = lVar18 + -1;
		} while (lVar18 != 0);
		uVar10 = (undefined) * (int *)(puVar4 + (int)lVar17 + 0x1c8);
		if (*(int *)(puVar4 + (int)lVar17 + 0x1c8) < *(int *)(puVar5 + (int)lVar16 + 200)) {
			StartStore('\t', uVar10, (char)lVar11, uVar13, uVar15, (char)lVar16, (char)lVar17, param_8,
			    in_stack_ffffffb8);
		} else {
			StartStore('\v', uVar10, (char)lVar11, uVar13, uVar15, (char)lVar16, (char)lVar17, param_8,
			    in_stack_ffffffb8);
		}
	}
	return;
}

void FUN_100ab8ac(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	if (*_DAT_100f20d0 - 0xcU < 9) {
		// WARNING: Could not recover jumptable at 0x100ab8dc. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f37d0 + (*_DAT_100f20d0 - 0xcU) * 4))(*(code **)(PTR_PTR_LAB_100f37d0 + (*_DAT_100f20d0 - 0xcU) * 4), param_2, param_3,
		    param_4, param_5, param_6, param_7, param_8);
		return;
	}
	return;
}

void FUN_100ab968(void)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	longlong lVar5;
	int iVar6;
	undefined4 uVar7;
	undefined uVar8;
	longlong lVar9;
	undefined uVar10;
	ulonglong uVar11;
	ulonglong in_r6;
	ulonglong in_r7;
	undefined7 uVar12;
	undefined8 in_r8;
	undefined uVar13;
	undefined7 uVar14;
	undefined8 in_r9;
	undefined uVar15;
	undefined7 uVar16;
	undefined8 in_r10;
	undefined uVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	undefined4 in_stack_ffffffb8;

	puVar3 = PTR_DAT_100f1e58;
	puVar2 = PTR_DAT_100f1828;
	puVar1 = PTR_DAT_100f1824;
	uVar17 = (undefined)in_r10;
	uVar16 = (undefined7)((ulonglong)in_r10 >> 8);
	uVar15 = (undefined)in_r9;
	uVar14 = (undefined7)((ulonglong)in_r9 >> 8);
	uVar13 = (undefined)in_r8;
	uVar12 = (undefined7)((ulonglong)in_r8 >> 8);
	uVar11 = ZEXT48(PTR_DAT_100f2098);
	uVar19 = ZEXT48(PTR_DAT_100f1e58);
	uVar18 = ZEXT48(PTR_DAT_100f1828);
	uVar10 = (undefined)*_DAT_100f20b8;
	uVar4 = (ulonglong)*_DAT_100f20c4 - (ulonglong)*_DAT_100f20b8;
	lVar5 = (ulonglong) * (uint *)PTR_DAT_100f2098 + (uVar4 & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar4 >> 2));
	iVar6 = (int)lVar5;
	if (iVar6 < 3) {
		uVar7 = GetRndSeed((char)*(uint *)PTR_DAT_100f2098, uVar10, (char)PTR_DAT_100f2098, (char)in_r6,
		    (char)in_r7, uVar13, uVar15, uVar17, in_stack_ffffffb8);
		lVar9 = uVar18 + (ulonglong) * (uint *)puVar1 * 0x55ec;
		uVar10 = (undefined)lVar9;
		*(undefined4 *)((int)lVar9 + 0x53d4) = uVar7;
	}
	uVar8 = FUN_100aa87c(*(int *)(puVar2 + *(int *)puVar1 * 0x55ec + 0x549c), uVar10, (char)uVar11,
	    (char)in_r6, (char)in_r7, uVar13, uVar15, uVar17, in_stack_ffffffb8);
	StoreAutoPlace(uVar8, uVar10, (char)uVar11, (char)in_r6, (char)in_r7, uVar13, uVar15, uVar17,
	    in_stack_ffffffb8);
	if (iVar6 < 3) {
		CalcPlrInv((ulonglong) * (uint *)puVar1, 1, uVar11, in_r6, in_r7, CONCAT71(uVar12, uVar13),
		    CONCAT71(uVar14, uVar15), CONCAT71(uVar16, uVar17), in_stack_ffffffb8);
	} else {
		if (iVar6 == 0x13) {
			*(undefined4 *)(puVar3 + 7000) = 0xffffffff;
		} else {
			in_r7 = uVar19 + lVar5 * 0x170;
			while (*(int *)((int)in_r7 + 0x178) != -1) {
				lVar9 = 0x2e;
				in_r6 = in_r7 - 8;
				uVar11 = in_r7 + 0x168;
				do {
					uVar11 = uVar11 + 8;
					uVar7 = ((undefined4 *)uVar11)[1];
					in_r6 = in_r6 + 8;
					*(undefined4 *)in_r6 = *(undefined4 *)uVar11;
					((undefined4 *)in_r6)[1] = uVar7;
					lVar9 = lVar9 + -1;
				} while (lVar9 != 0);
				in_r7 = in_r7 + 0x170;
				lVar5 = lVar5 + 1;
			}
			*(undefined4 *)(puVar3 + (int)lVar5 * 0x170 + 8) = 0xffffffff;
		}
		CalcPlrInv((ulonglong) * (uint *)puVar1, 1, uVar11, in_r6, in_r7, CONCAT71(uVar12, uVar13),
		    CONCAT71(uVar14, uVar15), CONCAT71(uVar16, uVar17), in_stack_ffffffb8);
	}
	return;
}

void S_WBuyEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	undefined4 uVar4;
	uint uVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	int *piVar10;
	uint *puVar11;
	int *piVar12;
	longlong lVar13;
	ulonglong uVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	ulonglong uVar18;
	undefined uVar19;
	ulonglong uVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	longlong lVar24;
	undefined uVar25;
	longlong lVar26;
	undefined uVar27;
	longlong lVar28;
	undefined4 in_stack_ffffffb8;

	piVar12 = _DAT_100f20d0;
	piVar10 = _DAT_100f20c4;
	puVar9 = PTR_DAT_100f1980;
	puVar8 = PTR_DAT_100f197c;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	lVar26 = (longlong)param_8;
	lVar24 = (longlong)param_7;
	uVar20 = ZEXT48(PTR_DAT_100f1e58);
	uVar18 = ZEXT48(PTR_DAT_100f1828);
	iVar1 = *_DAT_100f20d0;
	uVar15 = SUB41(PTR_DAT_100f1828, 0);
	uVar17 = SUB41(PTR_DAT_100f1e58, 0);
	if (iVar1 == 0x16) {
		StartStore('\x05', param_2, 0x16, uVar15, uVar17, param_6, param_7, param_8, in_stack_ffffffb8);
		*piVar12 = 0xe;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 6;
		puVar11 = _DAT_100f20bc;
		*piVar10 = iVar1;
		piVar10 = _DAT_100f20b8;
		uVar2 = *puVar11;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		uVar22 = (ulonglong) * (uint *)puVar6 * 0x55ec;
		lVar16 = uVar18 + uVar22;
		iVar3 = *(int *)((int)lVar16 + 0x1c8);
		lVar13 = uVar20 + ((ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar10 >> 2)) * 0x170;
		if (iVar3 < *(int *)((int)lVar13 + 200)) {
			StartStore('\t', (char)iVar3, (char)lVar16, uVar15, uVar17, (char)uVar22, param_7, param_8,
			    in_stack_ffffffb8);
		} else {
			lVar16 = lVar16 + 0x53cc;
			lVar28 = 0x2e;
			lVar13 = lVar13 + -8;
			do {
				lVar13 = lVar13 + 8;
				uVar4 = ((undefined4 *)lVar13)[1];
				lVar16 = lVar16 + 8;
				*(undefined4 *)lVar16 = *(undefined4 *)lVar13;
				((undefined4 *)lVar16)[1] = uVar4;
				lVar28 = lVar28 + -1;
			} while (lVar28 != 0);
			SetCursor_(*(int *)(puVar7 + (int)uVar22 + 0x5494) + 0xc, (char)lVar13, (char)lVar16, uVar15,
			    uVar17, (char)uVar22, param_7, param_8, in_stack_ffffffb8);
			uVar14 = 0;
			lVar28 = 0;
			while (true) {
				uVar23 = (undefined)uVar22;
				uVar21 = (undefined)uVar20;
				uVar19 = (undefined)uVar18;
				uVar17 = (undefined)lVar16;
				uVar15 = (undefined)lVar13;
				uVar25 = (undefined)lVar24;
				uVar27 = (undefined)lVar26;
				if ((0x27 < (int)lVar28) || ((int)uVar14 != 0))
					break;
				iVar1 = *(int *)puVar9;
				uVar20 = 0;
				uVar2 = iVar1 / 0x1c + (iVar1 >> 0x1f);
				uVar22 = (longlong)(int)((ulonglong)((longlong)iVar1 * -0x6db6db6d) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar2;
				uVar5 = *(int *)puVar8 / 0x1c + (*(int *)puVar8 >> 0x1f);
				lVar16 = uVar22 + (ulonglong)(uVar2 >> 0x1f);
				uVar18 = (ulonglong)uVar5 + (ulonglong)(uVar5 >> 0x1f);
				lVar13 = lVar28;
				uVar14 = SpecialAutoPlace(*(int *)puVar6, (int)lVar28, lVar16, (int)uVar18, 0, (char)uVar2, uVar25,
				    uVar27, in_stack_ffffffb8);
				lVar28 = lVar28 + 1;
			}
			if ((int)uVar14 == 0) {
				StartStore('\n', uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			} else {
				StartStore('\v', uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			}
			SetCursor_(1, uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
		}
	}
	return;
}

void FUN_100abc24(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	undefined4 uVar3;
	undefined4 uVar4;
	int *piVar5;
	uint *puVar6;
	int *piVar7;
	longlong lVar8;
	undefined8 uVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	longlong lVar13;
	undefined uVar14;
	longlong lVar15;
	undefined4 in_stack_ffffffc8;

	piVar7 = _DAT_100f20d0;
	piVar5 = _DAT_100f20c4;
	iVar1 = *_DAT_100f20d0;
	if (iVar1 == 0x16) {
		StartStore('\x05', param_2, param_3, 0x16, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		*piVar7 = 0x10;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 7;
		puVar6 = _DAT_100f20bc;
		lVar15 = 0x2e;
		*piVar5 = iVar1;
		piVar5 = _DAT_100f20b8;
		uVar2 = *puVar6;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		lVar8 = (ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar5 >> 2);
		lVar11 = ZEXT48(PTR_DAT_100f20ac) + lVar8 * 0x170 + -8;
		lVar13 = ZEXT48(PTR_DAT_100f1828) + (ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec + 0x53cc;
		do {
			lVar11 = lVar11 + 8;
			uVar12 = (undefined)lVar11;
			uVar4 = *(undefined4 *)lVar11;
			uVar10 = (undefined)uVar4;
			uVar3 = ((undefined4 *)lVar11)[1];
			lVar13 = lVar13 + 8;
			uVar14 = (undefined)lVar13;
			*(undefined4 *)lVar13 = uVar4;
			((undefined4 *)lVar13)[1] = uVar3;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		uVar9 = FUN_100ab044((int)lVar8, uVar10, uVar12, uVar14, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
		if ((int)uVar9 == 0) {
			StartStore('\n', uVar10, uVar12, uVar14, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		} else {
			StartStore('\v', uVar10, uVar12, uVar14, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
		}
	}
	return;
}

void FUN_100abd08(undefined8 uParm1, undefined param_2, undefined param_3, undefined8 uParm4,
    undefined8 uParm5, undefined8 uParm6, undefined8 uParm7, undefined8 uParm8)

{
	undefined *puVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined7 uVar14;
	undefined uVar15;
	undefined7 uVar16;
	undefined uVar17;
	undefined4 in_stack_ffffffb8;

	puVar5 = PTR_DAT_100f20ac;
	puVar2 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	uVar17 = (undefined)uParm8;
	uVar16 = (undefined7)((ulonglong)uParm8 >> 8);
	uVar15 = (undefined)uParm7;
	uVar14 = (undefined7)((ulonglong)uParm7 >> 8);
	uVar13 = (undefined)uParm6;
	uVar12 = (undefined7)((ulonglong)uParm6 >> 8);
	uVar11 = (undefined)uParm5;
	uVar10 = (undefined7)((ulonglong)uParm5 >> 8);
	uVar9 = (undefined)uParm4;
	uVar8 = (undefined7)((ulonglong)uParm4 >> 8);
	ppuVar6 = &toc;
	FUN_100aa87c(*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x549c), param_2,
	    param_3, uVar9, uVar11, uVar13, uVar15, uVar17, in_stack_ffffffb8);
	puVar1 = ppuVar6[-0x1bca];
	uVar7 = (ulonglong) * (uint *)ppuVar6[-0x1bce] + ((ulonglong) * (uint *)ppuVar6[-0x1bc3] - (ulonglong) * (uint *)ppuVar6[-0x1bc6] & 0xffffffff00000000 | (ulonglong)(uint)((int)((ulonglong) * (uint *)ppuVar6[-0x1bc3] - (ulonglong) * (uint *)ppuVar6[-0x1bc6]) >> 2));
	iVar3 = (int)uVar7;
	*(undefined4 *)(puVar5 + iVar3 * 0x170 + 0xe4) = *(undefined4 *)(puVar5 + iVar3 * 0x170 + 0xe8);
	if ((char)puVar1[iVar3] < '\0') {
		puVar2 = puVar2 + *(int *)puVar4 * 0x55ec;
		*(undefined4 *)(puVar2 + 0xb3c) = *(undefined4 *)(puVar2 + 0xb40);
	} else {
		puVar2 = puVar2 + (int)(char)puVar1[iVar3] * 0x170 + *(int *)puVar4 * 0x55ec;
		*(undefined4 *)(puVar2 + 0xf8c) = *(undefined4 *)(puVar2 + 0xf90);
	}
	CalcPlrInv((ulonglong) * (uint *)puVar4, 1, uVar7, CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11),
	    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), CONCAT71(uVar16, uVar17),
	    in_stack_ffffffb8);
	return;
}

void FUN_100abde0(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	undefined4 uVar3;
	undefined *puVar4;
	undefined *puVar5;
	int *piVar6;
	uint *puVar7;
	int *piVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	ulonglong uVar12;
	undefined uVar13;
	ulonglong uVar14;
	undefined uVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	undefined4 in_stack_ffffffb8;

	piVar8 = _DAT_100f20d0;
	piVar6 = _DAT_100f20c4;
	puVar5 = PTR_DAT_100f20ac;
	puVar4 = PTR_DAT_100f1828;
	uVar14 = ZEXT48(PTR_DAT_100f20ac);
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	iVar1 = *_DAT_100f20d0;
	uVar13 = SUB41(PTR_DAT_100f1828, 0);
	uVar15 = SUB41(PTR_DAT_100f20ac, 0);
	if (iVar1 == 0x16) {
		StartStore('\x05', param_2, param_3, uVar13, uVar15, 0x16, param_7, param_8, in_stack_ffffffb8);
		*piVar8 = 0x12;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 8;
		puVar7 = _DAT_100f20bc;
		lVar18 = 0x2e;
		*piVar6 = iVar1;
		piVar6 = _DAT_100f20b8;
		uVar2 = *puVar7;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		lVar16 = ((ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar6 >> 2)) * 0x170;
		lVar17 = (ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec;
		lVar9 = uVar14 + lVar16 + -8;
		lVar11 = uVar12 + lVar17 + 0x53cc;
		do {
			lVar9 = lVar9 + 8;
			uVar3 = ((undefined4 *)lVar9)[1];
			lVar11 = lVar11 + 8;
			*(undefined4 *)lVar11 = *(undefined4 *)lVar9;
			((undefined4 *)lVar11)[1] = uVar3;
			lVar18 = lVar18 + -1;
		} while (lVar18 != 0);
		uVar10 = (undefined) * (int *)(puVar4 + (int)lVar17 + 0x1c8);
		if (*(int *)(puVar4 + (int)lVar17 + 0x1c8) < *(int *)(puVar5 + (int)lVar16 + 200)) {
			StartStore('\t', uVar10, (char)lVar11, uVar13, uVar15, (char)lVar16, (char)lVar17, param_8,
			    in_stack_ffffffb8);
		} else {
			StartStore('\v', uVar10, (char)lVar11, uVar13, uVar15, (char)lVar16, (char)lVar17, param_8,
			    in_stack_ffffffb8);
		}
	}
	return;
}

void FUN_100abed0(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined4 *puVar6;
	int *piVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffc8;

	piVar7 = _DAT_100f20c4;
	puVar6 = _DAT_100f20bc;
	puVar5 = PTR_DAT_100f20a4;
	puVar4 = PTR_DAT_100f2094;
	uVar11 = SUB41(PTR_DAT_100f20a4, 0);
	uVar10 = SUB41(_DAT_100f20c4, 0);
	iVar1 = *(int *)(PTR_DAT_100f1e14 + 8);
	if ((iVar1 != -1) && (uVar9 = (undefined)*_DAT_100f20d0, *_DAT_100f20d0 == 0x12)) {
		uVar8 = SUB41(PTR_DAT_100f1828, 0);
		if (*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1c8) < 0x32) {
			*(undefined4 *)PTR_DAT_100f20a4 = 0xc;
			puVar4 = PTR_DAT_100f2098;
			*piVar7 = 0x12;
			*(undefined4 *)puVar4 = *puVar6;
			StartStore('\t', (char)puVar4, (char)puVar6, uVar9, uVar10, uVar11, param_7, param_8,
			    in_stack_ffffffc8);
			return;
		}
		FUN_100aa87c(0x32, uVar8, param_3, uVar9, uVar10, uVar11, param_7, param_8, in_stack_ffffffc8);
		StartStore('\r', uVar8, param_3, uVar9, uVar10, uVar11, param_7, param_8, in_stack_ffffffc8);
		return;
	}
	iVar2 = *_DAT_100f20d0;
	if (((iVar2 == 8) && (iVar1 != -1)) || ((iVar2 == 0xc && (iVar1 == -1)))) {
		*(undefined4 *)PTR_DAT_100f209c = 8;
		puVar3 = PTR_DAT_100f2090;
		*(undefined4 *)puVar5 = 0xc;
		*piVar7 = iVar2;
		*(undefined4 *)puVar4 = 0xe1;
		*(undefined4 *)puVar3 = 0xea;
		StartStore('\x13', (char)puVar3, (char)puVar4, 0xe1, uVar10, uVar11, (char)iVar2, param_8,
		    in_stack_ffffffc8);
	} else {
		*PTR_DAT_100f186c = 0;
	}
	return;
}

void FUN_100abfdc(undefined8 uParm1, undefined param_2, undefined param_3, undefined8 uParm4,
    undefined8 uParm5, undefined8 uParm6, undefined8 uParm7, undefined8 uParm8)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f1824;
	uVar14 = (undefined)uParm8;
	uVar13 = (undefined7)((ulonglong)uParm8 >> 8);
	uVar12 = (undefined)uParm7;
	uVar11 = (undefined7)((ulonglong)uParm7 >> 8);
	uVar10 = (undefined)uParm6;
	uVar9 = (undefined7)((ulonglong)uParm6 >> 8);
	uVar8 = (undefined)uParm5;
	uVar7 = (undefined7)((ulonglong)uParm5 >> 8);
	uVar6 = (undefined)uParm4;
	uVar5 = (undefined7)((ulonglong)uParm4 >> 8);
	ppuVar3 = &toc;
	uVar4 = FUN_100aa87c(*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x549c),
	    param_2, param_3, uVar6, uVar8, uVar10, uVar12, uVar14, in_stack_ffffffc8);
	StoreAutoPlace(uVar4, param_2, param_3, uVar6, uVar8, uVar10, uVar12, uVar14, in_stack_ffffffc8);
	puVar1 = (undefined4 *)ppuVar3[-0x1bcb];
	*(undefined4 *)(ppuVar3[-0x1c6f] + 8) = 0xffffffff;
	*puVar1 = 0xc;
	CalcPlrInv((ulonglong) * (uint *)puVar2, 1, 0xffffffffffffffff, CONCAT71(uVar5, uVar6),
	    CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10), CONCAT71(uVar11, uVar12),
	    CONCAT71(uVar13, uVar14), in_stack_ffffffc8);
	return;
}

void FUN_100ac044(void)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	uint uVar6;
	undefined *puVar7;
	uint *puVar8;
	uint *puVar9;
	undefined uVar11;
	undefined4 uVar10;
	longlong lVar12;
	undefined uVar13;
	ulonglong uVar14;
	ulonglong in_r6;
	ulonglong in_r7;
	undefined param_6;
	undefined7 uVar15;
	undefined8 in_r9;
	undefined uVar16;
	undefined7 uVar17;
	undefined8 in_r10;
	undefined uVar18;
	int iVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	undefined4 in_stack_ffffffa8;

	puVar9 = _DAT_100f20c4;
	puVar8 = _DAT_100f20b8;
	puVar7 = PTR_DAT_100f2098;
	uVar6 = _DAT_100f1e10;
	puVar5 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	puVar3 = PTR_DAT_100f17e0;
	uVar18 = (undefined)in_r10;
	uVar17 = (undefined7)((ulonglong)in_r10 >> 8);
	uVar16 = (undefined)in_r9;
	uVar15 = (undefined7)((ulonglong)in_r9 >> 8);
	uVar20 = (ulonglong)_DAT_100f1e10;
	uVar21 = ZEXT48(PTR_DAT_100f1828);
	uVar13 = (undefined)*_DAT_100f20b8;
	uVar1 = *(uint *)PTR_DAT_100f2098;
	uVar14 = (ulonglong)uVar1;
	iVar19 = uVar1 + ((int)(*_DAT_100f20c4 - *_DAT_100f20b8) >> 2);
	uVar11 = (undefined)*_DAT_100f20c4;
	if (*PTR_DAT_100f17e0 == '\x01') {
		if (iVar19 < 2) {
			uVar10 = GetRndSeed(uVar11, uVar13, (char)uVar1, (char)in_r6, (char)in_r7, param_6, uVar16, uVar18,
			    in_stack_ffffffa8);
			lVar12 = uVar21 + (ulonglong) * (uint *)puVar4 * 0x55ec;
			uVar13 = (undefined)lVar12;
			*(undefined4 *)((int)lVar12 + 0x53d4) = uVar10;
		}
	} else {
		if (iVar19 < 3) {
			uVar10 = GetRndSeed(uVar11, uVar13, (char)uVar1, (char)in_r6, (char)in_r7, param_6, uVar16, uVar18,
			    in_stack_ffffffa8);
			lVar12 = uVar21 + (ulonglong) * (uint *)puVar4 * 0x55ec;
			uVar13 = (undefined)lVar12;
			*(undefined4 *)((int)lVar12 + 0x53d4) = uVar10;
		}
	}
	FUN_100aa87c(*(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x549c), uVar13, (char)uVar14, (char)in_r6,
	    (char)in_r7, param_6, uVar16, uVar18, in_stack_ffffffa8);
	lVar12 = uVar21 + (ulonglong) * (uint *)puVar4 * 0x55ec;
	iVar2 = (int)lVar12;
	if (*(char *)(iVar2 + 0x5410) == '\0') {
		*(undefined4 *)(iVar2 + 0x540c) = 0;
	}
	StoreAutoPlace((char)lVar12, uVar13, (char)uVar14, (char)in_r6, (char)in_r7, param_6, uVar16, uVar18,
	    in_stack_ffffffa8);
	if (*puVar3 == '\x01') {
		if (iVar19 < 2) {
			return;
		}
	} else {
		if (iVar19 < 3) {
			return;
		}
	}
	uVar21 = (ulonglong) * (uint *)puVar7 + ((ulonglong)*puVar9 - (ulonglong)*puVar8 & 0xffffffff00000000 | (ulonglong)(uint)((int)((ulonglong)*puVar9 - (ulonglong)*puVar8) >> 2));
	if ((int)uVar21 == 0x13) {
		*(undefined4 *)(uVar6 + 7000) = 0xffffffff;
	} else {
		in_r7 = uVar20 + uVar21 * 0x170;
		while (*(int *)((int)in_r7 + 0x178) != -1) {
			lVar12 = 0x2e;
			in_r6 = in_r7 - 8;
			uVar14 = in_r7 + 0x168;
			do {
				uVar14 = uVar14 + 8;
				uVar10 = ((undefined4 *)uVar14)[1];
				in_r6 = in_r6 + 8;
				*(undefined4 *)in_r6 = *(undefined4 *)uVar14;
				((undefined4 *)in_r6)[1] = uVar10;
				lVar12 = lVar12 + -1;
			} while (lVar12 != 0);
			in_r7 = in_r7 + 0x170;
			uVar21 = uVar21 + 1;
		}
		*(undefined4 *)(uVar6 + (int)uVar21 * 0x170 + 8) = 0xffffffff;
	}
	CalcPlrInv((ulonglong) * (uint *)puVar4, 1, uVar14, in_r6, in_r7, uVar21, CONCAT71(uVar15, uVar16),
	    CONCAT71(uVar17, uVar18), in_stack_ffffffa8);
	return;
}

void FUN_100ac1d0(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	undefined4 uVar2;
	uint uVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined4 *puVar10;
	undefined4 *puVar11;
	ulonglong uVar12;
	longlong lVar13;
	longlong lVar14;
	ulonglong uVar15;
	ulonglong uVar16;
	undefined uVar17;
	undefined uVar18;
	ulonglong uVar19;
	undefined uVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	longlong lVar24;
	undefined uVar25;
	longlong lVar26;
	undefined uVar27;
	ulonglong uVar28;
	longlong lVar29;
	undefined4 in_stack_ffffffb8;

	puVar11 = _DAT_100f20c4;
	puVar9 = PTR_DAT_100f1e14;
	puVar8 = PTR_DAT_100f1980;
	puVar7 = PTR_DAT_100f197c;
	puVar6 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f1824;
	lVar26 = (longlong)param_8;
	lVar24 = (longlong)param_7;
	uVar19 = ZEXT48(PTR_DAT_100f1828);
	uVar16 = ZEXT48(PTR_DAT_100f1e14);
	if (*_DAT_100f20d0 == 10) {
		*(undefined4 *)PTR_DAT_100f20a4 = 0xd;
		puVar10 = _DAT_100f20bc;
		*puVar11 = 10;
		*(undefined4 *)PTR_DAT_100f2098 = *puVar10;
		iVar1 = *(int *)(puVar9 + 200);
		uVar22 = (ulonglong) * (uint *)puVar5 * 0x55ec;
		lVar13 = uVar19 + uVar22;
		uVar17 = SUB41(puVar9, 0);
		uVar20 = SUB41(puVar6, 0);
		if (*(int *)((int)lVar13 + 0x1c8) < iVar1 + (iVar1 >> 1)) {
			StartStore('\t', (char)lVar13, (char)iVar1, uVar17, uVar20, (char)uVar22, param_7, param_8,
			    in_stack_ffffffb8);
		} else {
			lVar13 = lVar13 + 0x53cc;
			lVar29 = 0x2e;
			lVar14 = uVar16 - 8;
			do {
				lVar14 = lVar14 + 8;
				uVar2 = ((undefined4 *)lVar14)[1];
				lVar13 = lVar13 + 8;
				*(undefined4 *)lVar13 = *(undefined4 *)lVar14;
				((undefined4 *)lVar13)[1] = uVar2;
				lVar29 = lVar29 + -1;
			} while (lVar29 != 0);
			lVar13 = uVar19 + uVar22;
			uVar3 = *(uint *)((int)lVar13 + 0x549c);
			uVar15 = (ulonglong)uVar3;
			*(int *)((int)lVar13 + 0x549c) = uVar3 + ((int)uVar3 >> 1);
			SetCursor_(*(int *)(puVar6 + (int)uVar22 + 0x5494) + 0xc, (char)uVar3, (char)lVar13, uVar17,
			    uVar20, (char)uVar22, param_7, param_8, in_stack_ffffffb8);
			uVar12 = 0;
			uVar28 = 0;
			while (true) {
				uVar23 = (undefined)uVar22;
				uVar21 = (undefined)uVar19;
				uVar18 = (undefined)uVar16;
				uVar20 = (undefined)lVar13;
				uVar17 = (undefined)uVar15;
				uVar25 = (undefined)lVar24;
				uVar27 = (undefined)lVar26;
				if ((0x27 < (int)uVar28) || ((int)uVar12 != 0))
					break;
				iVar1 = *(int *)puVar8;
				uVar19 = 0;
				uVar3 = iVar1 / 0x1c + (iVar1 >> 0x1f);
				uVar22 = (longlong)(int)((ulonglong)((longlong)iVar1 * -0x6db6db6d) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar3;
				uVar4 = *(int *)puVar7 / 0x1c + (*(int *)puVar7 >> 0x1f);
				lVar13 = uVar22 + (ulonglong)(uVar3 >> 0x1f);
				uVar16 = (ulonglong)uVar4 + (ulonglong)(uVar4 >> 0x1f);
				uVar15 = uVar28;
				uVar12 = AutoPlace(*(int *)puVar5, (int)uVar28, lVar13, (int)uVar16, 0, (char)uVar3, uVar25,
				    uVar27, in_stack_ffffffb8);
				uVar28 = uVar28 + 1;
			}
			if ((int)uVar12 == 0) {
				StartStore('\n', uVar17, uVar20, uVar18, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			} else {
				StartStore('\v', uVar17, uVar20, uVar18, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			}
			SetCursor_(1, uVar17, uVar20, uVar18, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
		}
	} else {
		*PTR_DAT_100f186c = 0;
	}
	return;
}

void FUN_100ac350(void)

{
	char cVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
	undefined7 uVar6;
	undefined8 in_r6;
	undefined uVar7;
	undefined7 uVar8;
	undefined8 in_r7;
	undefined uVar9;
	undefined7 uVar10;
	undefined8 in_r8;
	undefined uVar11;
	undefined7 uVar12;
	undefined8 in_r9;
	undefined uVar13;
	undefined7 uVar14;
	undefined8 in_r10;
	undefined uVar15;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	uVar15 = (undefined)in_r10;
	uVar14 = (undefined7)((ulonglong)in_r10 >> 8);
	uVar13 = (undefined)in_r9;
	uVar12 = (undefined7)((ulonglong)in_r9 >> 8);
	uVar11 = (undefined)in_r8;
	uVar10 = (undefined7)((ulonglong)in_r8 >> 8);
	uVar9 = (undefined)in_r7;
	uVar8 = (undefined7)((ulonglong)in_r7 >> 8);
	uVar7 = (undefined)in_r6;
	uVar6 = (undefined7)((ulonglong)in_r6 >> 8);
	cVar1 = PTR_DAT_100f20a8[*(int *)PTR_DAT_100f2098 + (*_DAT_100f20c4 - *_DAT_100f20b8 >> 2)];
	uVar5 = SEXT18(cVar1);
	if ((longlong)uVar5 < 0) {
		if (cVar1 == -1) {
			*(undefined4 *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x4d0) = 1;
		}
		if (cVar1 == -2) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xd70) = 1;
		}
		if (cVar1 == -3) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xa90) = 1;
		}
		if (cVar1 == -4) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0xc00) = 1;
		}
		if (cVar1 == -5) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x640) = 1;
		}
		if (cVar1 == -6) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x7b0) = 1;
		}
		if (cVar1 == -7) {
			*(undefined4 *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x920) = 1;
		}
	} else {
		*(undefined4 *)(PTR_DAT_100f1828 + (int)cVar1 * 0x170 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0xee0) = 1;
	}
	iVar2 = *(int *)puVar3;
	*(undefined4 *)(puVar4 + iVar2 * 0x55ec + 0x540c) = 1;
	FUN_100aa87c(*(int *)(puVar4 + iVar2 * 0x55ec + 0x549c), 1, cVar1, uVar7, uVar9, uVar11, uVar13, uVar15,
	    in_stack_ffffffb8);
	CalcPlrInv((ulonglong) * (uint *)puVar3, 1, uVar5, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9),
	    CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15),
	    in_stack_ffffffb8);
	return;
}

void FUN_100ac4bc(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	int *piVar3;
	undefined **ppuVar4;
	undefined4 in_stack_ffffffc8;

	piVar3 = _DAT_100f20d0;
	ppuVar4 = &toc;
	if (*_DAT_100f20d0 == 0x12) {
		if (*(uint *)PTR_DAT_100f20a4 < 0x13) {
			// WARNING: Could not recover jumptable at 0x100ac500. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(PTR_PTR_LAB_100f37cc + *(uint *)PTR_DAT_100f20a4 * 4))();
			return;
		}
		StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
	} else {
		StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, param_3, param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8);
		puVar1 = (undefined4 *)ppuVar4[-0x1bce];
		puVar2 = (undefined4 *)ppuVar4[-0x1bc5];
		*piVar3 = *(int *)ppuVar4[-0x1bc3];
		*puVar2 = *puVar1;
	}
	return;
}

void FUN_100ac5a4(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	if (*_DAT_100f20d0 - 0xcU < 7) {
		// WARNING: Could not recover jumptable at 0x100ac5ec. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f37c8 + (*_DAT_100f20d0 - 0xcU) * 4))(*(code **)(PTR_PTR_LAB_100f37c8 + (*_DAT_100f20d0 - 0xcU) * 4), param_2, param_3,
		    param_4, param_5, param_6, param_7, param_8);
		return;
	}
	return;
}

void S_HBuyEnter(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	undefined4 uVar4;
	uint uVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	int *piVar10;
	uint *puVar11;
	int *piVar12;
	longlong lVar13;
	ulonglong uVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	ulonglong uVar18;
	undefined uVar19;
	ulonglong uVar20;
	undefined uVar21;
	ulonglong uVar22;
	undefined uVar23;
	longlong lVar24;
	undefined uVar25;
	longlong lVar26;
	undefined uVar27;
	longlong lVar28;
	undefined4 in_stack_ffffffb8;

	piVar12 = _DAT_100f20d0;
	piVar10 = _DAT_100f20c4;
	puVar9 = PTR_DAT_100f1980;
	puVar8 = PTR_DAT_100f197c;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	lVar26 = (longlong)param_8;
	lVar24 = (longlong)param_7;
	uVar20 = (ulonglong)_DAT_100f1e10;
	uVar18 = ZEXT48(PTR_DAT_100f1828);
	iVar1 = *_DAT_100f20d0;
	uVar15 = SUB41(PTR_DAT_100f1828, 0);
	uVar17 = (undefined)_DAT_100f1e10;
	if (iVar1 == 0x16) {
		StartStore('\x0e', param_2, 0x16, uVar15, uVar17, param_6, param_7, param_8, in_stack_ffffffb8);
		*piVar12 = 0x10;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 0x10;
		puVar11 = _DAT_100f20bc;
		*piVar10 = iVar1;
		piVar10 = _DAT_100f20b8;
		uVar2 = *puVar11;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		uVar22 = (ulonglong) * (uint *)puVar6 * 0x55ec;
		lVar16 = uVar18 + uVar22;
		iVar3 = *(int *)((int)lVar16 + 0x1c8);
		lVar13 = uVar20 + ((ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar10 >> 2)) * 0x170;
		if (iVar3 < *(int *)((int)lVar13 + 200)) {
			StartStore('\t', (char)iVar3, (char)lVar16, uVar15, uVar17, (char)uVar22, param_7, param_8,
			    in_stack_ffffffb8);
		} else {
			lVar16 = lVar16 + 0x53cc;
			lVar28 = 0x2e;
			lVar13 = lVar13 + -8;
			do {
				lVar13 = lVar13 + 8;
				uVar4 = ((undefined4 *)lVar13)[1];
				lVar16 = lVar16 + 8;
				*(undefined4 *)lVar16 = *(undefined4 *)lVar13;
				((undefined4 *)lVar16)[1] = uVar4;
				lVar28 = lVar28 + -1;
			} while (lVar28 != 0);
			SetCursor_(*(int *)(puVar7 + (int)uVar22 + 0x5494) + 0xc, (char)lVar13, (char)lVar16, uVar15,
			    uVar17, (char)uVar22, param_7, param_8, in_stack_ffffffb8);
			uVar14 = 0;
			lVar28 = 0;
			while (true) {
				uVar23 = (undefined)uVar22;
				uVar21 = (undefined)uVar20;
				uVar19 = (undefined)uVar18;
				uVar17 = (undefined)lVar16;
				uVar15 = (undefined)lVar13;
				uVar25 = (undefined)lVar24;
				uVar27 = (undefined)lVar26;
				if ((0x27 < (int)lVar28) || ((int)uVar14 != 0))
					break;
				iVar1 = *(int *)puVar9;
				uVar20 = 0;
				uVar2 = iVar1 / 0x1c + (iVar1 >> 0x1f);
				uVar22 = (longlong)(int)((ulonglong)((longlong)iVar1 * -0x6db6db6d) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar2;
				uVar5 = *(int *)puVar8 / 0x1c + (*(int *)puVar8 >> 0x1f);
				lVar16 = uVar22 + (ulonglong)(uVar2 >> 0x1f);
				uVar18 = (ulonglong)uVar5 + (ulonglong)(uVar5 >> 0x1f);
				lVar13 = lVar28;
				uVar14 = SpecialAutoPlace(*(int *)puVar6, (int)lVar28, lVar16, (int)uVar18, 0, (char)uVar2, uVar25,
				    uVar27, in_stack_ffffffb8);
				lVar28 = lVar28 + 1;
			}
			if ((int)uVar14 == 0) {
				StartStore('\n', uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			} else {
				StartStore('\v', uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
			}
			SetCursor_(1, uVar15, uVar17, uVar19, uVar21, uVar23, uVar25, uVar27, in_stack_ffffffb8);
		}
	}
	return;
}

void FUN_100ac848(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f20a4;
	iVar1 = *_DAT_100f20d0;
	if (iVar1 == 0xe) {
		StartStore('\x11', param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		if (iVar1 < 0xe) {
			if (iVar1 == 0xc) {
				*(undefined4 *)PTR_DAT_100f209c = 4;
				puVar4 = _DAT_100f20c4;
				*(undefined4 *)puVar2 = 0xf;
				puVar3 = PTR_DAT_100f2094;
				*puVar4 = 0xc;
				puVar2 = PTR_DAT_100f2090;
				*(undefined4 *)puVar3 = 0x97;
				*(undefined4 *)puVar2 = 0x9f;
				StartStore('\x13', (char)puVar2, (char)puVar3, 0x97, param_5, param_6, param_7, param_8,
				    in_stack_ffffffc8);
			}
		} else {
			if (iVar1 == 0x12) {
				*PTR_DAT_100f186c = 0;
			}
		}
	}
	return;
}

void FUN_100ac8f0(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	uint uVar2;
	undefined4 uVar3;
	undefined *puVar4;
	undefined *puVar5;
	int *piVar6;
	uint *puVar7;
	int *piVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	ulonglong uVar12;
	undefined uVar13;
	ulonglong uVar14;
	undefined uVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	undefined4 in_stack_ffffffb8;

	piVar8 = _DAT_100f20d0;
	piVar6 = _DAT_100f20c4;
	puVar5 = PTR_DAT_100f20ac;
	puVar4 = PTR_DAT_100f1828;
	uVar14 = ZEXT48(PTR_DAT_100f20ac);
	uVar12 = ZEXT48(PTR_DAT_100f1828);
	iVar1 = *_DAT_100f20d0;
	uVar13 = SUB41(PTR_DAT_100f1828, 0);
	uVar15 = SUB41(PTR_DAT_100f20ac, 0);
	if (iVar1 == 0x16) {
		StartStore('\x0f', param_2, param_3, uVar13, uVar15, 0x16, param_7, param_8, in_stack_ffffffb8);
		*piVar8 = 0xe;
	} else {
		*(undefined4 *)PTR_DAT_100f20a4 = 0x11;
		puVar7 = _DAT_100f20bc;
		lVar18 = 0x2e;
		*piVar6 = iVar1;
		piVar6 = _DAT_100f20b8;
		uVar2 = *puVar7;
		*(uint *)PTR_DAT_100f2098 = uVar2;
		lVar16 = ((ulonglong)uVar2 + (ulonglong)(uint)(iVar1 - *piVar6 >> 2)) * 0x170;
		lVar17 = (ulonglong) * (uint *)PTR_DAT_100f1824 * 0x55ec;
		lVar9 = uVar14 + lVar16 + -8;
		lVar11 = uVar12 + lVar17 + 0x53cc;
		do {
			lVar9 = lVar9 + 8;
			uVar3 = ((undefined4 *)lVar9)[1];
			lVar11 = lVar11 + 8;
			*(undefined4 *)lVar11 = *(undefined4 *)lVar9;
			((undefined4 *)lVar11)[1] = uVar3;
			lVar18 = lVar18 + -1;
		} while (lVar18 != 0);
		uVar10 = (undefined) * (int *)(puVar4 + (int)lVar17 + 0x1c8);
		if (*(int *)(puVar4 + (int)lVar17 + 0x1c8) < *(int *)(puVar5 + (int)lVar16 + 200)) {
			StartStore('\t', uVar10, (char)lVar11, uVar13, uVar15, (char)lVar16, (char)lVar17, param_8,
			    in_stack_ffffffb8);
		} else {
			StartStore('\v', uVar10, (char)lVar11, uVar13, uVar15, (char)lVar16, (char)lVar17, param_8,
			    in_stack_ffffffb8);
		}
	}
	return;
}

void FUN_100ac9e0(undefined8 uParm1, undefined param_2, undefined8 uParm3, undefined param_4,
    undefined param_5, undefined param_6, undefined4 uParm7, undefined4 uParm8)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint *puVar5;
	undefined **ppuVar6;
	undefined *puVar7;
	longlong lVar8;
	int *piVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	longlong lVar12;
	longlong lVar13;
	int iVar14;
	longlong lVar15;
	undefined *puVar16;
	int iVar17;
	longlong lVar18;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	puVar5 = _DAT_100f20d0;
	puVar4 = PTR_DAT_100f209c;
	puVar16 = PTR_DAT_100f2094;
	puVar3 = PTR_DAT_100f206c;
	ppuVar6 = &toc;
	uVar1 = *_DAT_100f20d0;
	uVar10 = (ulonglong)uVar1;
	if (uVar1 == 0x16) {
		StartStore((char)*(undefined4 *)PTR_DAT_100f20a4, param_2, 0x16, param_4, param_5, param_6,
		    (char)uParm7, (char)uParm8, in_stack_ffffffa8);
		*puVar5 = *(uint *)ppuVar6[-0x1bc3];
	} else {
		uVar2 = *(uint *)PTR_DAT_100f209c;
		uVar11 = (ulonglong)uVar2;
		lVar18 = 4;
		lVar8 = ZEXT48(PTR_DAT_100f206c) + (ulonglong)(uVar2 << 6);
		lVar13 = 0;
		lVar12 = 0;
		puVar7 = PTR_DAT_100f19cc;
		do {
			piVar9 = (int *)lVar8;
			if (((puVar7[2] == '\x02') && (*piVar9 != -1)) && (*(int *)(puVar7 + 0x14) != 0)) {
				lVar13 = lVar13 + 1;
			}
			if (((puVar7[0x1a] == '\x02') && (piVar9[1] != -1)) && (*(int *)(puVar7 + 0x2c) != 0)) {
				lVar13 = lVar13 + 1;
			}
			if (((puVar7[0x32] == '\x02') && (piVar9[2] != -1)) && (*(int *)(puVar7 + 0x44) != 0)) {
				lVar13 = lVar13 + 1;
			}
			if (((puVar7[0x4a] == '\x02') && (piVar9[3] != -1)) && (*(int *)(puVar7 + 0x5c) != 0)) {
				lVar13 = lVar13 + 1;
			}
			iVar14 = (int)lVar13;
			puVar7 = puVar7 + 0x60;
			lVar8 = lVar8 + 0x10;
			lVar12 = lVar12 + 3;
			lVar18 = lVar18 + -1;
		} while (lVar18 != 0);
		if (iVar14 < 7) {
			lVar15 = 0xf - lVar13;
			lVar18 = 2;
		} else {
			lVar15 = 0xe - (ulonglong)(uint)(iVar14 >> 1);
			lVar18 = 1;
		}
		if (uVar1 == (int)lVar15 - 2U) {
			SetRndSeed(*(undefined4 *)(PTR_DAT_100f1878 + uVar2 * 0x10c + 0x8c));
			uVar1 = *(uint *)puVar16;
			uVar10 = (ulonglong)uVar1;
			lVar13 = ((ulonglong) * (uint *)ppuVar6[-0x1bd0] - uVar10) + 1;
			lVar8 = random(0, lVar13, (char)uVar1, (char)uVar11, (char)lVar12, (char)iVar14, (char)uParm7,
			    (char)uParm8, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
			InitQTextMsg(*(int *)puVar16 + (int)lVar8, lVar13, uVar10, uVar11, lVar12, iVar14, uParm7, uParm8,
			    in_stack_ffffffa8);
		} else {
			iVar14 = 0;
			iVar17 = 0;
			puVar16 = PTR_DAT_100f19cc;
			do {
				if (((puVar16[2] == '\x02') && (*(int *)(puVar3 + *(int *)puVar4 * 0x40 + iVar17) != -1)) && (*(int *)(puVar16 + 0x14) != 0)) {
					if ((uint)lVar15 == *puVar5) {
						InitQTextMsg(*(int *)(puVar3 + *(int *)puVar4 * 0x40 + iVar17), lVar8, uVar10, uVar11,
						    lVar12, (int)lVar13, uParm7, uParm8, in_stack_ffffffa8);
					}
					lVar15 = lVar15 + lVar18;
				}
				iVar14 = iVar14 + 1;
				iVar17 = iVar17 + 4;
				puVar16 = puVar16 + 0x18;
			} while (iVar14 < 0x10);
		}
	}
	return;
}

void FUN_100acc04(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f20a4;
	iVar1 = *_DAT_100f20d0;
	if (iVar1 == 0x12) {
		*PTR_DAT_100f186c = 0;
	} else {
		if ((iVar1 < 0x12) && (iVar1 == 0xc)) {
			*(undefined4 *)PTR_DAT_100f209c = 3;
			puVar4 = _DAT_100f20c4;
			*(undefined4 *)puVar2 = 0x15;
			puVar3 = PTR_DAT_100f2094;
			*puVar4 = 0xc;
			puVar2 = PTR_DAT_100f2090;
			*(undefined4 *)puVar3 = 0xa1;
			*(undefined4 *)puVar2 = 0xa8;
			StartStore('\x13', (char)puVar2, (char)puVar3, 0xa1, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return;
}

void FUN_100acc94(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f20a4;
	iVar1 = *_DAT_100f20d0;
	if (iVar1 == 0x12) {
		*PTR_DAT_100f186c = 0;
	} else {
		if ((iVar1 < 0x12) && (iVar1 == 0xc)) {
			*(undefined4 *)PTR_DAT_100f209c = 7;
			puVar4 = _DAT_100f20c4;
			*(undefined4 *)puVar2 = 0x17;
			puVar3 = PTR_DAT_100f2094;
			*puVar4 = 0xc;
			puVar2 = PTR_DAT_100f2090;
			*(undefined4 *)puVar3 = 0xb4;
			*(undefined4 *)puVar2 = 0xbb;
			StartStore('\x13', (char)puVar2, (char)puVar3, 0xb4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return;
}

void FUN_100acd24(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f20a4;
	iVar1 = *_DAT_100f20d0;
	if (iVar1 == 0x12) {
		*PTR_DAT_100f186c = 0;
	} else {
		if ((iVar1 < 0x12) && (iVar1 == 0xc)) {
			*(undefined4 *)PTR_DAT_100f209c = 5;
			puVar4 = _DAT_100f20c4;
			*(undefined4 *)puVar2 = 0x16;
			puVar3 = PTR_DAT_100f2094;
			*puVar4 = 0xc;
			puVar2 = PTR_DAT_100f2090;
			*(undefined4 *)puVar3 = 0xc9;
			*(undefined4 *)puVar2 = 0xd3;
			StartStore('\x13', (char)puVar2, (char)puVar3, 0xc9, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
		}
	}
	return;
}

void STextEnter(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f18a0;
	puVar1 = PTR_DAT_100f183c;
	uVar10 = (undefined7)((ulonglong)param_5 >> 8);
	uVar11 = (undefined)param_5;
	uVar8 = (undefined7)((ulonglong)param_4 >> 8);
	uVar9 = (undefined)param_4;
	uVar6 = (undefined7)(param_3 >> 8);
	uVar7 = (undefined)param_3;
	ppuVar3 = &toc;
	uVar5 = ZEXT48(PTR_DAT_100f18a0);
	if (*PTR_DAT_100f18a0 == '\0') {
		PlaySFX(0x46);
		if (((longlong)(char)*ppuVar3[-0x1dd9] & 0xffffffffU) < 0x18) {
			// WARNING: Could not recover jumptable at 0x100ace20. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(ppuVar3[-0x1603] + (int)(char)*ppuVar3[-0x1dd9] * 4))();
			return;
		}
	} else {
		uVar4 = ZEXT48(PTR_DAT_100f183c);
		*PTR_DAT_100f18a0 = 0;
		if (*puVar1 == '\0') {
			uVar4 = sfx_stop((char)puVar1, (char)puVar2, uVar7, uVar9, uVar11, (char)param_6, (char)param_7,
			    (char)param_8, in_stack_ffffffc8);
		}
		music_stop2(uVar4, uVar5, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11),
		    param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

void CheckStoreBtn(void)

{
	char cVar1;
	int iVar2;
	uint uVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;
	char *pcVar7;
	char *pcVar8;
	ulonglong uVar9;
	longlong lVar10;
	ulonglong uVar11;
	undefined uVar12;
	ulonglong uVar13;
	undefined uVar14;
	ulonglong uVar15;
	undefined uVar16;
	ulonglong uVar17;
	undefined uVar18;
	undefined8 in_r8;
	undefined4 uVar19;
	undefined uVar20;
	undefined4 in_r9;
	undefined uVar21;
	undefined4 in_r10;
	undefined uVar22;
	longlong lVar23;
	int iVar24;
	undefined4 in_stack_ffffffb8;

	pcVar8 = _DAT_100f20cc;
	pcVar7 = _DAT_100f20c8;
	puVar6 = PTR_DAT_100f18a0;
	puVar5 = PTR_DAT_100f183c;
	uVar22 = (undefined)in_r10;
	uVar21 = (undefined)in_r9;
	uVar19 = (undefined4)in_r8;
	uVar11 = ZEXT48(PTR_DAT_100f18a0);
	uVar17 = ZEXT48(PTR_DAT_100f1928);
	uVar18 = SUB41(PTR_DAT_100f1928, 0);
	uVar15 = ZEXT48(_DAT_100f20d0);
	uVar16 = SUB41(_DAT_100f20d0, 0);
	uVar13 = (ulonglong)_DAT_100f20d4;
	uVar14 = (undefined)_DAT_100f20d4;
	if (*PTR_DAT_100f18a0 == '\0') {
		if (*_DAT_100f20d0 != -1) {
			iVar2 = *(int *)PTR_DAT_100f1924;
			uVar20 = (undefined)iVar2;
			if ((0x1f < iVar2) && (iVar2 < 0x141)) {
				if (*_DAT_100f20dc == '\0') {
					iVar24 = *(int *)PTR_DAT_100f1928;
					if (iVar24 < 0x158) {
						return;
					}
				} else {
					iVar24 = *(int *)PTR_DAT_100f1928;
					if (iVar24 < 0x18) {
						return;
					}
				}
				if (iVar24 < 0x269) {
					iVar24 = (iVar2 + -0x20) / 6 + (iVar2 + -0x20 >> 0x1f);
					uVar3 = *_DAT_100f20d8;
					uVar12 = (undefined)uVar3;
					uVar4 = iVar24 >> 1;
					lVar23 = ((longlong)iVar24 & 0xffffffff00000000U | (ulonglong)uVar4) + (ulonglong)(uVar4 >> 0x1f);
					iVar24 = (int)lVar23;
					if ((uVar3 == 0) || (*(int *)PTR_DAT_100f1928 < 0x259)) {
						if (4 < iVar24) {
							if (0x16 < iVar24) {
								lVar23 = 0x16;
							}
							if (((uVar3 != 0) && ((int)lVar23 < 0x15)) && (iVar24 = _DAT_100f20d4 + (int)lVar23 * 0x9c, *(int *)(iVar24 + 0x94) == 0)) {
								if (*(int *)(iVar24 + -0xa4) == 0) {
									if (*(int *)(iVar24 + -8) != 0) {
										lVar23 = lVar23 + -1;
									}
								} else {
									lVar23 = lVar23 + -2;
								}
							}
							lVar10 = uVar13 + lVar23 * 0x9c;
							if ((*(int *)((int)lVar10 + 0x94) != 0) || ((uVar3 != 0 && ((int)lVar23 == 0x16)))) {
								*_DAT_100f20d0 = (int)lVar23;
								STextEnter(lVar10, (ulonglong)uVar3, uVar13, uVar15, uVar17, iVar2, in_r9, in_r10,
								    in_stack_ffffffb8);
							}
						}
					} else {
						if (iVar24 == 4) {
							cVar1 = *_DAT_100f20cc;
							if (cVar1 < '\x01') {
								STextUp(cVar1, uVar12, uVar14, uVar16, uVar18, uVar20, uVar21, uVar22,
								    in_stack_ffffffb8);
								*pcVar8 = '\n';
							} else {
								*_DAT_100f20cc = cVar1 + -1;
							}
						}
						if (iVar24 == 0x14) {
							cVar1 = *pcVar7;
							if (cVar1 < '\x01') {
								STextDown(cVar1, uVar12, uVar14, uVar16, uVar18, uVar20, uVar21, uVar22,
								    in_stack_ffffffb8);
								*pcVar7 = '\n';
							} else {
								*pcVar7 = cVar1 + -1;
							}
						}
					}
				}
			}
		}
	} else {
		uVar9 = ZEXT48(PTR_DAT_100f183c);
		*PTR_DAT_100f18a0 = 0;
		if (*puVar5 == '\0') {
			uVar9 = sfx_stop((char)puVar5, (char)puVar6, uVar14, uVar16, uVar18, (char)in_r8, uVar21, uVar22,
			    in_stack_ffffffb8);
		}
		music_stop2(uVar9, uVar11, uVar13, uVar15, uVar17, uVar19, in_r9, in_r10, in_stack_ffffffb8);
	}
	return;
}

void ReleaseStoreBtn(void)

{
	undefined *puVar1;

	puVar1 = _DAT_100f20c8;
	*_DAT_100f20cc = 0xff;
	*puVar1 = 0xff;
	return;
}

void synccpp(void)

{
	_DAT_100f4480 = _DAT_100f447c;
	return;
}

ulonglong sync_one_monster(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ushort uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	int iVar8;
	longlong lVar9;
	longlong lVar10;
	ulonglong uVar11;
	ushort *puVar12;
	int iVar13;
	undefined *puVar14;
	int *piVar15;

	iVar8 = _DAT_100f392c;
	iVar7 = _DAT_100f3928;
	puVar6 = PTR_DAT_100f19a4;
	puVar5 = PTR_DAT_100f187c;
	puVar4 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f1824;
	uVar11 = SEXT18(param_1);
	iVar13 = 0;
	piVar15 = (int *)PTR_DAT_100f19a8;
	while (iVar13 < *(int *)puVar6) {
		iVar2 = *piVar15;
		puVar14 = puVar5 + iVar2 * 0xe8;
		lVar9 = abs((ulonglong) * (uint *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x3c) - (ulonglong) * (uint *)(puVar14 + 0x24));
		lVar10 = abs((ulonglong) * (uint *)(puVar4 + *(int *)puVar3 * 0x55ec + 0x38) - (ulonglong) * (uint *)(puVar14 + 0x20));
		iVar2 = iVar2 * 2;
		puVar12 = (ushort *)(iVar8 + iVar2);
		*puVar12 = (short)lVar10 + (short)lVar9;
		if (puVar14[0xa4] == '\0') {
			uVar11 = (ulonglong)*puVar12;
			*puVar12 = *puVar12 + 0x1000;
		} else {
			puVar12 = (ushort *)(iVar7 + iVar2);
			uVar1 = *puVar12;
			uVar11 = (ulonglong)uVar1;
			if (uVar1 != 0) {
				*puVar12 = uVar1 - 1;
			}
		}
		piVar15 = piVar15 + 1;
		iVar13 = iVar13 + 1;
	}
	return uVar11;
}

void FUN_100ad21c(undefined *param_1, undefined8 param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	ushort uVar1;
	undefined *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined uVar5;
	undefined **ppuVar6;
	ulonglong uVar7;
	undefined2 uVar8;

	puVar4 = PTR_DAT_100f187c;
	ppuVar6 = &toc;
	iVar3 = (int)param_2;
	puVar2 = PTR_DAT_100f187c + iVar3 * 0xe8;
	*param_1 = (char)param_2;
	param_1[1] = (char)*(undefined4 *)(puVar2 + 0x20);
	param_1[2] = (char)*(undefined4 *)(puVar2 + 0x24);
	uVar7 = encode_enemy(iVar3);
	puVar2 = ppuVar6[-0x15a9];
	param_1[3] = (char)uVar7;
	uVar1 = *(ushort *)(puVar2 + iVar3 * 2);
	uVar5 = (undefined)uVar1;
	if (0xff < uVar1) {
		uVar5 = 0xff;
	}
	param_1[4] = uVar5;
	uVar8 = 0xffff;
	*(ushort *)(puVar2 + iVar3 * 2) = 0xffff;
	if (puVar4[iVar3 * 0xe8 + 0xa4] != '\0') {
		uVar8 = 0xfffe;
	}
	*(undefined2 *)(ppuVar6[-0x15aa] + iVar3 * 2) = uVar8;
	return;
}

ulonglong sync_monster_active(undefined *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	ushort uVar2;
	uint uVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	undefined uVar6;
	ulonglong uVar7;
	ulonglong uVar8;
	undefined4 in_stack_ffffffc8;

	uVar6 = SUB41(PTR_DAT_100f19a4, 0);
	uVar5 = 0xffffffffffffffff;
	uVar8 = 0xffffffffffffffff;
	uVar8._7_1_ = 0xff;
	uVar4 = (ulonglong) * (uint *)PTR_DAT_100f19a4;
	uVar7 = ZEXT48(PTR_DAT_100f19a8);
	uVar7._7_1_ = SUB41(PTR_DAT_100f19a8, 0);
	if (0 < (int)*(uint *)PTR_DAT_100f19a4) {
		do {
			uVar3 = *(uint *)uVar7;
			param_7 = (undefined)uVar3;
			uVar2 = *(ushort *)(_DAT_100f392c + uVar3 * 2);
			uVar6 = (undefined)uVar2;
			if (((ulonglong)uVar2 < (uVar8 & 0xffffffff)) && (*(ushort *)(_DAT_100f3928 + uVar3 * 2) < 0xfffe)) {
				uVar5 = (ulonglong)uVar3;
				uVar8 = (ulonglong)uVar2;
			}
			uVar8._7_1_ = (undefined)uVar8;
			uVar7 = uVar7 + 4;
			uVar7._7_1_ = (undefined)uVar7;
			uVar4 = uVar4 - 1;
		} while (uVar4 != 0);
	}
	bVar1 = (int)uVar5 != -1;
	if (bVar1) {
		FUN_100ad21c(param_1, uVar5, uVar6, (char)_DAT_100f392c, (char)_DAT_100f3928, (undefined)uVar7,
		    param_7, (undefined)uVar8, in_stack_ffffffc8);
	}
	return (ulonglong)bVar1;
}

ulonglong sync_monster_active2(undefined *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	int iVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	int iVar6;
	undefined4 in_stack_ffffffc8;

	uVar5 = 0xfffe;
	uVar4 = 0xffffffffffffffff;
	iVar6 = 0;
	while (iVar2 = *(int *)PTR_DAT_100f19a4, iVar6 < iVar2) {
		if (iVar2 <= _DAT_100f4490) {
			_DAT_100f4490 = 0;
		}
		uVar3 = (ulonglong)
		    * (ushort *)(_DAT_100f3928 + *(uint *)(PTR_DAT_100f19a8 + _DAT_100f4490 * 4) * 2);
		if (uVar3 < uVar5) {
			uVar4 = (ulonglong) * (uint *)(PTR_DAT_100f19a8 + _DAT_100f4490 * 4);
			uVar5 = uVar3;
		}
		iVar6 = iVar6 + 1;
		_DAT_100f4490 = _DAT_100f4490 + 1;
	}
	bVar1 = (int)uVar4 != -1;
	if (bVar1) {
		FUN_100ad21c(param_1, uVar4, (char)iVar2, 0, (char)PTR_DAT_100f19a8, (char)_DAT_100f3928,
		    (char)PTR_DAT_100f19a4, (char)uVar5, in_stack_ffffffc8);
	}
	return (ulonglong)bVar1;
}

void SyncPlrInv(int param_1)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 *puVar4;
	int iVar5;

	puVar2 = PTR_DAT_100f1940;
	if (*_DAT_100f1dec < 1) {
		*(undefined *)(param_1 + 6) = 0xff;
	} else {
		if (*_DAT_100f1dec <= _DAT_100f448c) {
			_DAT_100f448c = 0;
		}
		iVar1 = *(int *)(_DAT_100f1df0 + _DAT_100f448c * 4);
		iVar5 = iVar1 * 0x170;
		_DAT_100f448c = _DAT_100f448c + 1;
		*(undefined *)(param_1 + 6) = (char)iVar1;
		puVar3 = puVar2 + iVar5;
		*(undefined *)(param_1 + 7) = (char)*(undefined4 *)(puVar3 + 0xc);
		*(undefined *)(param_1 + 8) = (char)*(undefined4 *)(puVar3 + 0x10);
		*(undefined2 *)(param_1 + 9) = (short)*(undefined4 *)(puVar3 + 0x168);
		if (*(int *)(puVar3 + 0x168) == 0x17) {
			*(ushort *)(param_1 + 0xb) = (ushort)((int)(char)puVar3[0x44] << 8) | (short)(char)puVar3[0x45];
			*(uint *)(param_1 + 0xd) = (int)(char)puVar3[0x49] | (int)(char)puVar3[0x48] << 8 | (int)(char)puVar3[0x46] << 0x18 | (int)(char)puVar3[0x47] << 0x10;
			*(undefined *)(param_1 + 0x11) = puVar3[0x4a];
			*(undefined *)(param_1 + 0x12) = puVar3[0x4b];
			*(undefined *)(param_1 + 0x13) = puVar3[0x4c];
			*(undefined *)(param_1 + 0x14) = puVar3[0x4d];
			*(undefined *)(param_1 + 0x15) = puVar3[0x4e];
			*(ushort *)(param_1 + 0x16) = (ushort) * (undefined4 *)(puVar3 + 0xc4) | (ushort)((int)(char)puVar3[0x4f] << 8) | ((short)*(undefined4 *)(puVar3 + 0xc0) + -0x13) * 0x40;
			*(uint *)(param_1 + 0x18) = (int)(char)puVar3[0x53] | (int)(char)puVar3[0x52] << 8 | (int)(char)puVar3[0x50] << 0x18 | (int)(char)puVar3[0x51] << 0x10;
		} else {
			*(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(puVar3 + 4);
			*(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(puVar2 + iVar5);
			*(undefined *)(param_1 + 0x11) = (char)*(undefined4 *)(puVar3 + 0x38);
			*(undefined *)(param_1 + 0x12) = (char)*(undefined4 *)(puVar3 + 0xec);
			*(undefined *)(param_1 + 0x13) = (char)*(undefined4 *)(puVar3 + 0xf0);
			*(undefined *)(param_1 + 0x14) = (char)*(undefined4 *)(puVar3 + 0xe4);
			*(undefined *)(param_1 + 0x15) = (char)*(undefined4 *)(puVar3 + 0xe8);
			if (*(int *)(puVar3 + 0x168) == 0) {
				*(undefined2 *)(param_1 + 0x16) = (short)*(undefined4 *)(puVar3 + 0xc4);
			}
		}
	}
	puVar4 = (undefined4 *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + _DAT_100f4488 * 0x170 + 0x498);
	if (puVar4[2] == -1) {
		*(undefined *)(param_1 + 0x1c) = 0xff;
	} else {
		*(undefined *)(param_1 + 0x1c) = (char)_DAT_100f4488;
		*(undefined2 *)(param_1 + 0x1d) = (short)puVar4[0x5a];
		*(undefined2 *)(param_1 + 0x1f) = *(undefined2 *)(puVar4 + 1);
		*(undefined4 *)(param_1 + 0x21) = *puVar4;
		*(undefined *)(param_1 + 0x25) = (char)puVar4[0xe];
	}
	*(undefined2 *)(param_1 + 2) = CONCAT11(*(undefined *)(param_1 + 3), *(undefined *)(param_1 + 2));
	*(undefined2 *)(param_1 + 9) = CONCAT11(*(undefined *)(param_1 + 10), *(undefined *)(param_1 + 9));
	*(undefined2 *)(param_1 + 0xb) = CONCAT11(*(undefined *)(param_1 + 0xc), *(undefined *)(param_1 + 0xb));
	*(uint *)(param_1 + 0xd) = (uint) * (byte *)(param_1 + 0x10) << 0x18 | (uint) * (byte *)(param_1 + 0xf) << 0x10 | (uint) * (byte *)(param_1 + 0xe) << 8 | (uint) * (byte *)(param_1 + 0xd);
	*(undefined2 *)(param_1 + 0x16) = CONCAT11(*(undefined *)(param_1 + 0x17), *(undefined *)(param_1 + 0x16));
	*(uint *)(param_1 + 0x18) = (uint) * (byte *)(param_1 + 0x1b) << 0x18 | (uint) * (byte *)(param_1 + 0x1a) << 0x10 | (uint) * (byte *)(param_1 + 0x19) << 8 | (uint) * (byte *)(param_1 + 0x18);
	*(undefined2 *)(param_1 + 0x1d) = CONCAT11(*(undefined *)(param_1 + 0x1e), *(undefined *)(param_1 + 0x1d));
	*(undefined2 *)(param_1 + 0x1f) = CONCAT11(*(undefined *)(param_1 + 0x20), *(undefined *)(param_1 + 0x1f));
	*(uint *)(param_1 + 0x21) = (uint) * (byte *)(param_1 + 0x24) << 0x18 | (uint) * (byte *)(param_1 + 0x23) << 0x10 | (uint) * (byte *)(param_1 + 0x22) << 8 | (uint) * (byte *)(param_1 + 0x21);
	if (_DAT_100f4488 + 1 < 7) {
		_DAT_100f4488 = _DAT_100f4488 + 1;
		return;
	}
	_DAT_100f4488 = 0;
	return;
}

ulonglong sync_all_monsters(undefined *param_1, ulonglong param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined uVar4;
	ulonglong uVar2;
	int iVar3;
	ulonglong uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	undefined *puVar13;
	undefined4 in_stack_ffffffb8;

	puVar1 = PTR_DAT_100f19a4;
	puVar13 = PTR_DAT_100f17ec;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	if ((0 < *(int *)PTR_DAT_100f19a4) && (0x2a < (param_2 & 0xffffffff))) {
		*param_1 = 0x23;
		uVar5 = (ulonglong)(byte)*puVar13;
		param_2 = param_2 - 0x26;
		param_1[1] = *puVar13;
		*(undefined2 *)(param_1 + 2) = 0;
		puVar13 = param_1 + 0x26;
		uVar4 = SyncPlrInv((int)param_1);
		sync_one_monster(uVar4, (char)uVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10,
		    (char)lVar11, in_stack_ffffffb8);
		iVar12 = 0;
		while ((iVar12 < *(int *)puVar1 && (4 < (param_2 & 0xffffffff)))) {
			iVar3 = 0;
			if (iVar12 < 2) {
				uVar2 = sync_monster_active2(puVar13, (char)uVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
				    (char)lVar10, (char)lVar11, in_stack_ffffffb8);
				iVar3 = (int)uVar2;
			}
			if (iVar3 == 0) {
				uVar2 = sync_monster_active(puVar13, (char)uVar5, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
				    (char)lVar10, (char)lVar11, in_stack_ffffffb8);
				iVar3 = (int)uVar2;
			}
			if (iVar3 == 0) {
				return param_2;
			}
			*(ushort *)(param_1 + 2) = CONCAT11(param_1[3], param_1[2]);
			*(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 5;
			puVar13 = puVar13 + 5;
			param_2 = param_2 - 5;
			iVar12 = iVar12 + 1;
			*(ushort *)(param_1 + 2) = CONCAT11(param_1[3], param_1[2]);
		}
	}
	return param_2;
}

void FUN_100ad7cc(int param_1, byte *param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	uint uVar2;
	int iVar3;
	uint *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	longlong lVar9;
	longlong lVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	uint *puVar13;
	int iVar15;
	byte bVar16;
	ulonglong uVar14;
	byte bVar18;
	ulonglong uVar17;
	undefined7 uVar19;
	undefined uVar20;
	undefined uVar21;
	undefined uVar22;
	undefined uVar23;
	undefined4 in_stack_ffffffa8;

	puVar8 = PTR_DAT_100f1954;
	puVar5 = PTR_DAT_100f187c;
	puVar7 = PTR_DAT_100f1828;
	puVar6 = PTR_DAT_100f1824;
	uVar19 = (undefined7)((ulonglong)param_5 >> 8);
	uVar20 = (undefined)param_5;
	bVar1 = *param_2;
	uVar12 = (ulonglong)bVar1;
	if (*(int *)(PTR_DAT_100f187c + (uint)bVar1 * 0xe8 + 0x98) != 0) {
		iVar15 = 0;
		puVar13 = (uint *)PTR_DAT_100f19a8;
		while ((iVar15 < *(int *)PTR_DAT_100f19a4 && ((uint)bVar1 != *puVar13))) {
			puVar13 = puVar13 + 1;
			iVar15 = iVar15 + 1;
		}
		iVar15 = (uint)bVar1 * 0xe8;
		puVar13 = (uint *)(PTR_DAT_100f187c + iVar15 + 0x24);
		lVar9 = abs((ulonglong)
		        * (uint *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x3c)
		    - (ulonglong)*puVar13);
		puVar4 = (uint *)(puVar5 + iVar15 + 0x20);
		lVar10 = abs((ulonglong) * (uint *)(puVar7 + *(int *)puVar6 * 0x55ec + 0x38) - (ulonglong)*puVar4);
		uVar11 = lVar10 + lVar9;
		if (0xff < (uVar11 & 0xffffffff)) {
			uVar11 = 0xff;
		}
		if (((ulonglong)param_2[4] <= (uVar11 & 0xffffffff)) && (((uVar11 & 0xffffffff) != (ulonglong)param_2[4] || (param_1 <= *(int *)puVar6)))) {
			if (((uint)param_2[1] != *(uint *)(puVar5 + iVar15 + 0x28)) || ((uint)param_2[2] != *(uint *)(puVar5 + iVar15 + 0x2c))) {
				iVar3 = *(int *)(puVar5 + iVar15 + 4);
				if ((iVar3 != 0xe) && (iVar3 != 0xf)) {
					lVar9 = abs((ulonglong)*puVar4 - (ulonglong)param_2[1]);
					lVar10 = abs((ulonglong)*puVar13 - (ulonglong)param_2[2]);
					uVar23 = (undefined)param_8;
					uVar22 = (undefined)param_7;
					uVar21 = (undefined)param_6;
					if (((int)lVar9 < 3) && ((int)lVar10 < 3)) {
						iVar3 = *(int *)(puVar5 + iVar15 + 4);
						if ((iVar3 < 1) || (3 < iVar3)) {
							uVar14 = (ulonglong)param_2[1];
							uVar17 = (ulonglong)param_2[2];
							uVar11 = GetDirection((ulonglong)*puVar4, *puVar13, uVar14, (uint)param_2[2]);
							uVar14 = DirOK(uVar12, (uint)uVar11, uVar14, uVar17, CONCAT71(uVar19, uVar20),
							    param_6, param_7, param_8, in_stack_ffffffa8);
							if ((int)uVar14 != 0) {
								M_ClearSquares((uint)bVar1);
								uVar2 = *(uint *)puVar8;
								*(undefined2 *)(uVar2 + *puVar4 * 0xe0 + *puVar13 * 2) = (short)(uVar12 + 1);
								M_WalkDir(uVar12, (uint)uVar11, (ulonglong)uVar2, uVar12 + 1, CONCAT71(uVar19, uVar20), param_6, param_7, param_8, in_stack_ffffffa8);
								puVar5[iVar15 + 0xa4] = 0xff;
							}
						}
					} else {
						if (*(short *)(*(int *)puVar8 + (uint)param_2[1] * 0xe0 + (uint)param_2[2] * 2) == 0) {
							M_ClearSquares((uint)bVar1);
							*(short *)(*(int *)puVar8 + (uint)param_2[1] * 0xe0 + (uint)param_2[2] * 2) = (ushort)bVar1 + 1;
							*puVar4 = (uint)param_2[1];
							*puVar13 = (uint)param_2[2];
							decode_enemy((uint)bVar1, (uint)param_2[3]);
							puVar5 = puVar5 + iVar15;
							bVar16 = puVar5[0x50];
							bVar18 = puVar5[0x51];
							uVar12 = GetDirection((ulonglong)param_2[1], (uint)param_2[2], (ulonglong)bVar16,
							    (uint)bVar18);
							M_StartStand((uint)bVar1, (int)uVar12, bVar16, bVar18, uVar20, uVar21, uVar22, uVar23,
							    in_stack_ffffffa8);
							puVar5[0xa4] = 0xff;
						}
					}
					decode_enemy((uint)bVar1, (uint)param_2[3]);
				}
			}
		}
	}
	return;
}

longlong sync_update(int param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	char *pcVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	ushort uVar7;
	longlong lVar8;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar2 = PTR_DAT_100f17ec;
	lVar6 = (longlong)param_8;
	lVar5 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	ppuVar3 = &toc;
	lVar8 = param_2 + 0x26;
	pcVar1 = (char *)param_2;
	*(ushort *)(pcVar1 + 2) = CONCAT11(pcVar1[3], pcVar1[2]);
	*(ushort *)(pcVar1 + 9) = CONCAT11(pcVar1[10], pcVar1[9]);
	*(ushort *)(pcVar1 + 0xb) = CONCAT11(pcVar1[0xc], pcVar1[0xb]);
	*(uint *)(pcVar1 + 0xd) = (uint)(byte)pcVar1[0x10] << 0x18 | (uint)(byte)pcVar1[0xf] << 0x10 | (uint)(byte)pcVar1[0xe] << 8 | (uint)(byte)pcVar1[0xd];
	*(ushort *)(pcVar1 + 0x16) = CONCAT11(pcVar1[0x17], pcVar1[0x16]);
	*(uint *)(pcVar1 + 0x18) = (uint)(byte)pcVar1[0x1b] << 0x18 | (uint)(byte)pcVar1[0x1a] << 0x10 | (uint)(byte)pcVar1[0x19] << 8 | (uint)(byte)pcVar1[0x18];
	*(ushort *)(pcVar1 + 0x1d) = CONCAT11(pcVar1[0x1e], pcVar1[0x1d]);
	*(ushort *)(pcVar1 + 0x1f) = CONCAT11(pcVar1[0x20], pcVar1[0x1f]);
	*(uint *)(pcVar1 + 0x21) = (uint)(byte)pcVar1[0x24] << 0x18 | (uint)(byte)pcVar1[0x23] << 0x10 | (uint)(byte)pcVar1[0x22] << 8 | (uint)(byte)pcVar1[0x21];
	if (*pcVar1 != '#') {
		ppuVar3 = &toc;
		app_fatal(_DAT_100f3924, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8, in_stack_ffffffcc,
		    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4);
	}
	if (*ppuVar3[-0x1caf] == '\x01') {
		lVar4 = (ulonglong) * (ushort *)(pcVar1 + 2) + 0x26;
	} else {
		if (param_1 == *(int *)ppuVar3[-0x1deb]) {
			lVar4 = (ulonglong) * (ushort *)(pcVar1 + 2) + 0x26;
		} else {
			uVar7 = *(ushort *)(pcVar1 + 2);
			while (4 < uVar7) {
				if (*puVar2 == pcVar1[1]) {
					FUN_100ad7cc(param_1, (byte *)lVar8, param_3, param_4, param_5, (int)lVar4, (int)lVar5,
					    (int)lVar6, in_stack_ffffffb8);
				}
				delta_sync_monster((byte *)lVar8, (uint)(byte)pcVar1[1]);
				lVar8 = lVar8 + 5;
				uVar7 = uVar7 - 5;
			}
			lVar4 = (ulonglong) * (ushort *)(pcVar1 + 2) + 0x26;
		}
	}
	return lVar4;
}

void sync_init(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	_DAT_100f4490 = *(int *)PTR_DAT_100f1824 << 4;
	memset((char)_DAT_100f3928, 0x90, 0xff, (char)PTR_DAT_100f1824, param_5, param_6, param_7, param_8,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

void themescpp(void)

{
	_DAT_100f44ac = _DAT_100f44a8;
	return;
}

undefined8 FUN_100adc04(int param_1)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	char *pcVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	puVar3 = PTR_DAT_100f2108;
	iVar11 = 0;
	iVar10 = 0;
	iVar9 = 0;
	iVar1 = *(int *)(PTR_DAT_100f2004 + param_1 * 8 + 4);
	iVar4 = 0;
	do {
		do {
			if (iVar9 != 0) {
				*(int *)PTR_DAT_100f210c = iVar11;
				puVar2 = PTR_DAT_100f2104;
				*(int *)puVar3 = iVar10;
				*(int *)puVar2 = iVar9;
				return 1;
			}
			iVar7 = iVar11 * 0x70;
			pcVar6 = (char *)(*(int *)PTR_DAT_100f1a48 + iVar7 + iVar10);
			if ((int)*pcVar6 == iVar1) {
				iVar5 = *(int *)PTR_DAT_100f1a54 + iVar11 * 0xe0 + iVar4;
				if (((((PTR_DAT_100f1d98[(int)*(short *)(iVar5 + -2)] != '\0') && (*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar5 + -0xe0)) == '\0')) && (*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar5 + 0xe0)) == '\0')) && (((int)pcVar6[-0x70] == iVar1 && ((int)pcVar6[0x70] == iVar1)))) && ((iVar8 = *(int *)PTR_DAT_100f194c + iVar7 + iVar10, *(char *)(iVar8 + -0x71) == '\0' && (*(char *)(iVar8 + 0x6f) == '\0')))) {
					iVar9 = 1;
				}
				if ((((iVar9 == 0) && (PTR_DAT_100f1d98[(int)*(short *)(iVar5 + -0xe0)] != '\0')) && ((*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar5 + -2)) == '\0' && (((*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar5 + 2)) == '\0' && ((int)pcVar6[-1] == iVar1)) && ((int)pcVar6[1] == iVar1)))))) && ((iVar7 = *(int *)PTR_DAT_100f194c + iVar7 + iVar10, *(char *)(iVar7 + -0x71) == '\0' && (*(char *)(iVar7 + -0x6f) == '\0')))) {
					iVar9 = 2;
				}
			}
		} while ((iVar9 != 0) || (iVar11 = iVar11 + 1, iVar11 != 0x70));
		iVar10 = iVar10 + 1;
		iVar4 = iVar4 + 2;
		iVar11 = 0;
	} while (iVar10 != 0x70);
	return 0;
}

undefined8
FUN_100addbc(int param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	bool bVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	longlong lVar6;
	longlong lVar7;
	int *piVar8;
	int *piVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined1 in_stack_ffffffbb;

	puVar4 = PTR_DAT_100f394c;
	puVar3 = PTR_DAT_100f3948;
	iVar2 = _DAT_100f1da4;
	ppuVar5 = &toc;
	iVar12 = 0;
	iVar11 = 0;
	lVar6 = random(0, 5, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8,
	    in_stack_ffffffaf, in_stack_ffffffbb);
	lVar7 = lVar6 + 1;
	while (true) {
		do {
			do {
				while (true) {
					if ((int)lVar7 < 1) {
						piVar8 = (int *)ppuVar5[-0x1bb2];
						*(int *)ppuVar5[-0x1bb1] = iVar12;
						*piVar8 = iVar11;
						return 1;
					}
					bVar1 = false;
					if (((int)*(char *)(*(int *)ppuVar5[-0x1d62] + iVar12 * 0x70 + iVar11) == *(int *)(ppuVar5[-0x1bf3] + param_1 * 8 + 4)) && (*(char *)(iVar2 + (int)*(short *)(*(int *)ppuVar5[-0x1d5f] + iVar12 * 0xe0 + iVar11 * 2)) == '\0')) {
						bVar1 = true;
						iVar10 = 0;
						piVar8 = (int *)puVar4;
						piVar9 = (int *)puVar3;
						while ((bVar1 && (iVar10 < 0x19))) {
							if (*(char *)(iVar2 + (int)*(short *)(*(int *)ppuVar5[-0x1d5f] + (iVar12 + *piVar8) * 0xe0 + (iVar11 + *piVar9) * 2)) != '\0') {
								bVar1 = false;
							}
							if (*(int *)(ppuVar5[-0x1bf3] + param_1 * 8 + 4) != (int)*(char *)(*(int *)ppuVar5[-0x1d62] + iVar11 + (iVar12 + *piVar8) * 0x70 + *piVar9)) {
								bVar1 = false;
							}
							piVar8 = piVar8 + 1;
							piVar9 = piVar9 + 1;
							iVar10 = iVar10 + 1;
						}
					}
					if (!bVar1)
						break;
					lVar7 = lVar7 + -1;
				}
				iVar12 = iVar12 + 1;
			} while (iVar12 != 0x70);
			iVar11 = iVar11 + 1;
			iVar12 = 0;
		} while (iVar11 != 0x70);
		if ((int)lVar7 == (int)(lVar6 + 1))
			break;
		iVar11 = 0;
	}
	return 0;
}

undefined8
FUN_100adf44(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	byte *pbVar13;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f19b8;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	uVar3 = ZEXT48(&toc);
	if ((byte)(*PTR_DAT_100f183c - 1) < 2) {
		iVar12 = 0;
		pbVar13 = PTR_DAT_100f19c0;
		while (iVar12 < *(int *)puVar2) {
			uVar4 = IsSkel((uint)*pbVar13);
			if ((int)uVar4 != 0) {
				piVar1 = *(int **)((int)uVar3 + -0x6ecc);
				*piVar1 = iVar12;
				uVar5 = FUN_100addbc(param_1, (char)piVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
				    (char)lVar10, (char)lVar11, in_stack_ffffffb8);
				return uVar5;
			}
			pbVar13 = pbVar13 + 0x208;
			iVar12 = iVar12 + 1;
		}
	}
	return 0;
}

undefined8
FUN_100adff0(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	undefined8 uVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	byte *pbVar13;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f19b8;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	uVar3 = ZEXT48(&toc);
	iVar12 = 0;
	pbVar13 = PTR_DAT_100f19c0;
	while (true) {
		if (*(int *)puVar2 <= iVar12) {
			return 0;
		}
		uVar4 = IsGoat((uint)*pbVar13);
		if ((int)uVar4 != 0)
			break;
		pbVar13 = pbVar13 + 0x208;
		iVar12 = iVar12 + 1;
	}
	piVar1 = *(int **)((int)uVar3 + -0x6ecc);
	*piVar1 = iVar12;
	uVar5 = FUN_100addbc(param_1, (char)piVar1, (char)lVar6, (char)lVar7, (char)lVar8, (char)lVar9,
	    (char)lVar10, (char)lVar11, in_stack_ffffffb8);
	return uVar5;
}

undefined8
FUN_100ae084(longlong param_1, longlong param_2, int param_3, longlong param_4, undefined param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;
	undefined *puVar7;
	longlong lVar8;
	ulonglong uVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	int iVar13;
	uint *puVar14;
	uint *puVar15;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	puVar7 = PTR_DAT_100f2004;
	iVar6 = _DAT_100f1da4;
	puVar5 = PTR_DAT_100f1a54;
	puVar4 = PTR_DAT_100f1a48;
	puVar3 = PTR_DAT_100f194c;
	lVar12 = (longlong)param_8;
	lVar11 = (longlong)param_7;
	lVar10 = (longlong)param_6;
	uVar9 = ZEXT48(PTR_DAT_100f2004);
	iVar13 = 0;
	puVar15 = (uint *)PTR_DAT_100f3944;
	puVar14 = (uint *)PTR_DAT_100f3940;
	while (true) {
		lVar8 = param_1 + (ulonglong)*puVar15;
		if (lVar8 < 0) {
			return 0;
		}
		uVar1 = *puVar14;
		if ((longlong)(param_2 + (ulonglong)uVar1) < 0) {
			return 0;
		}
		if (*(char *)(iVar6 + (int)*(short *)(*(int *)puVar5 + (int)lVar8 * 0xe0 + (int)(param_2 + (ulonglong)uVar1) * 2))
		    != '\0') {
			return 0;
		}
		iVar2 = (int)lVar8 * 0x70;
		if (*(int *)(puVar7 + param_3 * 8 + 4) != (int)*(char *)((int)param_2 + *(int *)puVar4 + iVar2 + uVar1))
			break;
		if (*(char *)((int)param_2 + *(int *)puVar3 + iVar2 + uVar1) != '\0') {
			return 0;
		}
		if (((int)param_4 != -1) && (lVar8 = random(0, param_4, (char)lVar8, (char)uVar1, (char)uVar9, (char)lVar10, (char)lVar11, (char)lVar12, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar8 == 0)) {
			return 0;
		}
		iVar13 = iVar13 + 1;
		puVar14 = puVar14 + 1;
		puVar15 = puVar15 + 1;
		if (8 < iVar13) {
			return 1;
		}
	}
	return 0;
}

undefined8
FUN_100ae1ac(int param_1, undefined param_2, undefined param_3, undefined param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	ulonglong uVar3;
	undefined8 uVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	longlong lVar9;
	undefined8 unaff_r29;
	longlong lVar10;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	char cStack41;
	undefined4 local_28;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar2 = PTR_DAT_100f183c;
	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	uVar3 = ZEXT48(&toc);
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar9 = 1;
	local_28 = _DAT_100f44b0;
	do {
		lVar10 = 1;
		do {
			uVar4 = FUN_100ae084(lVar10, lVar9, param_1, (longlong)(&cStack41)[(uint)(byte)*puVar2],
			    (char)lVar5, (char)lVar6, (char)lVar7, (char)lVar8, in_stack_ffffffa8);
			if ((int)uVar4 != 0) {
				puVar1 = *(undefined4 **)((int)uVar3 + -0x6ec8);
				**(undefined4 **)((int)uVar3 + -0x6ec4) = (int)lVar10;
				*puVar1 = (int)lVar9;
				return 1;
			}
			lVar10 = lVar10 + 1;
		} while ((int)lVar10 < 0x6f);
		lVar9 = lVar9 + 1;
	} while ((int)lVar9 < 0x6f);
	return 0;
}

undefined8 FUN_100ae248(ulonglong param_1)

{
	undefined8 uVar1;

	if ((param_1 & 0xffffffff) < 0x11) {
		// WARNING: Could not recover jumptable at 0x100ae268. Too many branches
		// WARNING: Treating indirect jump as call
		uVar1 = (**(code **)(PTR_PTR_LAB_100f393c + (int)param_1 * 4))(param_1, *(code **)(PTR_PTR_LAB_100f393c + (int)param_1 * 4),
		    ZEXT48(PTR_DAT_100f183c));
		return uVar1;
	}
	return 1;
}

void SpecialThemeFit(undefined8 param_1, ulonglong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;

	ppuVar1 = &toc;
	FUN_100ae248(param_2);
	if ((param_2 & 0xffffffff) < 0x11) {
		// WARNING: Could not recover jumptable at 0x100ae384. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar1[-0x15a6] + (int)param_2 * 4))();
		return;
	}
	return;
}

undefined8 CheckThemeRoom(char param_1)

{
	ulonglong uVar1;
	char *pcVar2;
	char *pcVar3;
	int *piVar4;
	byte *pbVar5;
	char *pcVar6;
	short *psVar7;
	byte *pbVar8;
	short *psVar9;
	int iVar10;
	int iVar11;
	longlong lVar12;

	uVar1 = (ulonglong) * (uint *)PTR_DAT_100f1ed8;
	pcVar2 = *(char **)PTR_DAT_100f1a48;
	piVar4 = (int *)PTR_DAT_100f1edc;
	if (0 < (int)*(uint *)PTR_DAT_100f1ed8) {
		do {
			if (param_1 == pcVar2[*piVar4 * 0x70 + piVar4[1]]) {
				return 0;
			}
			piVar4 = piVar4 + 4;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	iVar11 = 0;
	pbVar8 = *(byte **)PTR_DAT_100f1834;
	iVar10 = 0;
	pcVar6 = pcVar2;
	do {
		lVar12 = 0x10;
		pbVar5 = pbVar8;
		pcVar3 = pcVar6;
		do {
			if (param_1 == *pcVar3) {
				if ((*pbVar5 & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			if (param_1 == pcVar3[0x70]) {
				if ((pbVar5[0x70] & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			if (param_1 == pcVar3[0xe0]) {
				if ((pbVar5[0xe0] & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			if (param_1 == pcVar3[0x150]) {
				if ((pbVar5[0x150] & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			if (param_1 == pcVar3[0x1c0]) {
				if ((pbVar5[0x1c0] & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			if (param_1 == pcVar3[0x230]) {
				if ((pbVar5[0x230] & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			if (param_1 == pcVar3[0x2a0]) {
				if ((pbVar5[0x2a0] & 8) != 0) {
					return 0;
				}
				iVar11 = iVar11 + 1;
			}
			pcVar3 = pcVar3 + 0x310;
			pbVar5 = pbVar5 + 0x310;
			lVar12 = lVar12 + -1;
		} while (lVar12 != 0);
		iVar10 = iVar10 + 1;
		pbVar8 = pbVar8 + 1;
		pcVar6 = pcVar6 + 1;
	} while (iVar10 < 0x70);
	if ((*PTR_DAT_100f183c == '\x01') && ((iVar11 < 9 || (100 < iVar11)))) {
		return 0;
	}
	iVar10 = 0;
	psVar9 = *(short **)PTR_DAT_100f1a54;
	do {
		lVar12 = 0x38;
		pcVar6 = pcVar2;
		psVar7 = psVar9;
		do {
			if ((param_1 == *pcVar6) && (*(char *)(_DAT_100f1da4 + (int)*psVar7) == '\0')) {
				if ((param_1 != pcVar6[-0x70]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[-0x70]) == '\0')) {
					return 0;
				}
				if ((param_1 != pcVar6[0x70]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[0x70]) == '\0')) {
					return 0;
				}
				if ((param_1 != pcVar6[-1]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[-1]) == '\0')) {
					return 0;
				}
				if ((param_1 != pcVar6[1]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[1]) == '\0')) {
					return 0;
				}
			}
			if ((param_1 == pcVar6[0x70]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[0x70]) == '\0')) {
				if ((param_1 != *pcVar6) && (*(char *)(_DAT_100f1da4 + (int)*psVar7) == '\0')) {
					return 0;
				}
				if ((param_1 != pcVar6[0xe0]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[0xe0]) == '\0')) {
					return 0;
				}
				if ((param_1 != pcVar6[0x6f]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[0x6f]) == '\0')) {
					return 0;
				}
				if ((param_1 != pcVar6[0x71]) && (*(char *)(_DAT_100f1da4 + (int)psVar7[0x71]) == '\0')) {
					return 0;
				}
			}
			pcVar6 = pcVar6 + 0xe0;
			psVar7 = psVar7 + 0xe0;
			lVar12 = lVar12 + -1;
		} while (lVar12 != 0);
		iVar10 = iVar10 + 1;
		psVar9 = psVar9 + 1;
		pcVar2 = pcVar2 + 1;
		if (0x6f < iVar10) {
			return 1;
		}
	} while (true);
}

void InitThemes(undefined param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	ulonglong uVar8;
	longlong lVar9;
	undefined8 uVar10;
	int iVar12;
	longlong lVar11;
	int iVar13;
	undefined *puVar14;
	ulonglong uVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	longlong lVar19;
	longlong lVar20;
	longlong lVar21;
	undefined *puVar22;
	undefined *puVar23;
	char *pcVar24;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	iVar7 = _DAT_100f3934;
	pcVar24 = PTR_DAT_100f2004;
	puVar5 = PTR_DAT_100f2000;
	puVar14 = PTR_DAT_100f1fe0;
	puVar3 = PTR_DAT_100f1f28;
	puVar23 = PTR_DAT_100f1d64;
	puVar2 = PTR_DAT_100f1d60;
	puVar22 = PTR_DAT_100f183c;
	lVar20 = (longlong)param_8;
	lVar19 = (longlong)param_7;
	lVar18 = (longlong)param_6;
	lVar17 = (longlong)param_5;
	lVar16 = (longlong)param_4;
	*(undefined4 *)PTR_DAT_100f2000 = 0;
	*(undefined4 *)puVar3 = 0xffffffff;
	puVar4 = PTR_DAT_100f2100;
	*(undefined4 *)puVar14 = 1;
	puVar14 = PTR_DAT_100f20f0;
	*(undefined4 *)puVar4 = 1;
	puVar4 = PTR_DAT_100f20f8;
	*(undefined4 *)puVar14 = 1;
	puVar6 = PTR_DAT_100f20fc;
	*(undefined4 *)puVar4 = 1;
	puVar14 = PTR_DAT_100f20f4;
	*(undefined4 *)puVar6 = 1;
	puVar4 = PTR_DAT_100f20ec;
	*(undefined4 *)puVar14 = 1;
	puVar14 = PTR_DAT_100f20e8;
	*(undefined4 *)puVar4 = 1;
	puVar4 = PTR_DAT_100f1fd8;
	*(undefined4 *)puVar14 = 0;
	puVar14 = PTR_DAT_100f17ec;
	*(undefined4 *)puVar4 = 1;
	puVar4 = PTR_DAT_100f20e4;
	if (*puVar14 != '\x10') {
		if (*puVar22 == '\x01') {
			*(undefined4 *)PTR_DAT_100f20e4 = 0;
			lVar21 = 0;
			*(undefined4 *)(puVar4 + 4) = 0;
			*(undefined4 *)(puVar4 + 8) = 0;
			*(undefined4 *)(puVar4 + 0xc) = 0;
			while (((int)lVar21 < 0x100 && (*(int *)puVar5 < 0x32))) {
				uVar10 = CheckThemeRoom((char)lVar21);
				if ((int)uVar10 != 0) {
					uVar1 = *(int *)puVar5 * 8;
					uVar15 = (ulonglong)uVar1;
					*(int *)(pcVar24 + uVar1 + 4) = (int)lVar21;
					lVar9 = random(0, 4, (char)uVar1, (char)lVar16, (char)lVar17, (char)lVar18, (char)lVar19,
					    (char)lVar20, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
					uVar8 = (ulonglong) * (uint *)(iVar7 + (int)lVar9 * 4);
					while (iVar13 = SpecialThemeFit((ulonglong) * (uint *)puVar5, uVar8, (char)uVar15, (char)lVar16,
					           (char)lVar17, (char)lVar18, (char)lVar19, (char)lVar20,
					           in_stack_ffffff98),
					    iVar13 == 0) {
						uVar8 = random(0, 0x11, (char)uVar15, (char)lVar16, (char)lVar17, (char)lVar18,
						    (char)lVar19, (char)lVar20, in_stack_ffffff98, in_stack_ffffff9f,
						    in_stack_ffffffab);
					}
					pcVar24[*(int *)puVar5 * 8] = (char)uVar8;
					*(int *)puVar5 = *(int *)puVar5 + 1;
				}
				lVar21 = lVar21 + 1;
			}
		}
		if ((byte)(*puVar22 - 2) < 3) {
			iVar13 = *(int *)puVar2;
			lVar21 = 0;
			if (0 < iVar13) {
				if ((8 < iVar13) && (uVar8 = (ulonglong)(iVar13 - 1U >> 3), puVar14 = pcVar24, 0 < iVar13 + -8)) {
					do {
						*puVar14 = 0xff;
						lVar21 = lVar21 + 8;
						puVar14[8] = 0xff;
						puVar14[0x10] = 0xff;
						puVar14[0x18] = 0xff;
						puVar14[0x20] = 0xff;
						puVar14[0x28] = 0xff;
						puVar14[0x30] = 0xff;
						puVar14[0x38] = 0xff;
						puVar14 = puVar14 + 0x40;
						uVar8 = uVar8 - 1;
					} while (uVar8 != 0);
				}
				puVar14 = pcVar24 + (int)lVar21 * 8;
				lVar9 = (ulonglong) * (uint *)puVar2 - lVar21;
				if ((int)lVar21 < (int)*(uint *)puVar2) {
					do {
						*puVar14 = 0xff;
						puVar14 = puVar14 + 8;
						lVar9 = lVar9 + -1;
					} while (lVar9 != 0);
				}
			}
			uVar10 = QuestStatus(3);
			if ((int)uVar10 != 0) {
				lVar9 = 0;
				puVar14 = pcVar24;
				puVar22 = puVar23;
				while (iVar13 = (int)lVar9, iVar13 < *(int *)puVar2) {
					*(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar22 + 8);
					iVar12 = SpecialThemeFit(lVar9, 5, (char)lVar21, (char)lVar16, (char)lVar17, (char)lVar18,
					    (char)lVar19, (char)lVar20, in_stack_ffffff98);
					if (iVar12 != 0) {
						pcVar24[iVar13 * 8] = 5;
						*(int *)puVar3 = iVar13;
						break;
					}
					puVar22 = puVar22 + 0x14;
					puVar14 = puVar14 + 8;
					lVar9 = lVar9 + 1;
				}
			}
			lVar9 = 0;
			while ((int)lVar9 < *(int *)puVar2) {
				if (*pcVar24 == -1) {
					*(undefined4 *)(pcVar24 + 4) = *(undefined4 *)(puVar23 + 8);
					lVar11 = random(0, 4, (char)lVar21, (char)lVar16, (char)lVar17, (char)lVar18, (char)lVar19, (char)lVar20, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
					uVar8 = (ulonglong) * (uint *)(iVar7 + (int)lVar11 * 4);
					while (iVar13 = SpecialThemeFit(lVar9, uVar8, (char)lVar21, (char)lVar16, (char)lVar17,
					           (char)lVar18, (char)lVar19, (char)lVar20, in_stack_ffffff98),
					    iVar13 == 0) {
						uVar8 = random(0, 0x11, (char)lVar21, (char)lVar16, (char)lVar17, (char)lVar18,
						    (char)lVar19, (char)lVar20, in_stack_ffffff98, in_stack_ffffff9f,
						    in_stack_ffffffab);
					}
					*pcVar24 = (char)uVar8;
				}
				pcVar24 = pcVar24 + 8;
				puVar23 = puVar23 + 0x14;
				lVar9 = lVar9 + 1;
			}
			*(int *)puVar5 = *(int *)puVar5 + *(int *)puVar2;
		}
	}
	return;
}

void HoldThemeRooms(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	char cVar4;
	int iVar5;
	int iVar6;
	undefined *puVar7;
	int iVar8;
	int iVar9;
	longlong lVar10;

	puVar3 = PTR_DAT_100f2000;
	puVar2 = PTR_DAT_100f1a48;
	puVar1 = PTR_DAT_100f1834;
	if (*PTR_DAT_100f17ec != '\x10') {
		if (*PTR_DAT_100f183c == '\x01') {
			iVar8 = 0;
			puVar7 = PTR_DAT_100f2004;
			while (iVar8 < *(int *)puVar3) {
				iVar9 = 0;
				cVar4 = (char)*(undefined4 *)(puVar7 + 4);
				do {
					lVar10 = 0x10;
					iVar6 = 0;
					do {
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6)) {
							*(byte *)(iVar9 + *(int *)puVar1 + iVar6) = *(byte *)(iVar9 + *(int *)puVar1 + iVar6) | 8;
						}
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6 + 0x70)) {
							iVar5 = *(int *)puVar1 + iVar6 + 0x70;
							*(byte *)(iVar9 + iVar5) = *(byte *)(iVar9 + iVar5) | 8;
						}
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6 + 0xe0)) {
							iVar5 = *(int *)puVar1 + iVar6 + 0xe0;
							*(byte *)(iVar9 + iVar5) = *(byte *)(iVar9 + iVar5) | 8;
						}
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6 + 0x150)) {
							iVar5 = *(int *)puVar1 + iVar6 + 0x150;
							*(byte *)(iVar9 + iVar5) = *(byte *)(iVar9 + iVar5) | 8;
						}
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6 + 0x1c0)) {
							iVar5 = *(int *)puVar1 + iVar6 + 0x1c0;
							*(byte *)(iVar9 + iVar5) = *(byte *)(iVar9 + iVar5) | 8;
						}
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6 + 0x230)) {
							iVar5 = *(int *)puVar1 + iVar6 + 0x230;
							*(byte *)(iVar9 + iVar5) = *(byte *)(iVar9 + iVar5) | 8;
						}
						if (cVar4 == *(char *)(iVar9 + *(int *)puVar2 + iVar6 + 0x2a0)) {
							iVar5 = *(int *)puVar1 + iVar6 + 0x2a0;
							*(byte *)(iVar9 + iVar5) = *(byte *)(iVar9 + iVar5) | 8;
						}
						iVar6 = iVar6 + 0x310;
						lVar10 = lVar10 + -1;
					} while (lVar10 != 0);
					iVar9 = iVar9 + 1;
				} while (iVar9 < 0x70);
				puVar7 = puVar7 + 8;
				iVar8 = iVar8 + 1;
			}
		} else {
			DRLG_HoldThemeRooms();
		}
	}
	return;
}

void FUN_100aedb4(int param_1, longlong param_2, undefined param_3, undefined param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	ulonglong uVar8;
	undefined **ppuVar9;
	longlong lVar10;
	int iVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int iVar18;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar19;
	undefined8 unaff_r25;
	int iVar20;
	undefined8 unaff_r26;
	int iVar21;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffdd8;
	undefined in_stack_fffffddf;
	undefined in_stack_fffffdeb;
	uint local_1f8[113];
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

	iVar7 = _DAT_100f1da4;
	puVar6 = PTR_DAT_100f1a54;
	puVar5 = PTR_DAT_100f1a48;
	puVar4 = PTR_DAT_100f194c;
	puVar3 = PTR_DAT_100f1944;
	lVar17 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	lVar15 = (longlong)param_6;
	lVar14 = (longlong)param_5;
	ppuVar9 = &toc;
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
	lVar10 = 0;
	uVar13 = 0;
	uVar8 = (ulonglong) * (uint *)PTR_DAT_100f19b8;
	uVar12 = ZEXT48(PTR_DAT_100f19c0);
	uVar12._7_1_ = SUB41(PTR_DAT_100f19c0, 0);
	if (0 < (int)*(uint *)PTR_DAT_100f19b8) {
		do {
			if ((*(byte *)((int)uVar12 + 1) & 1) != 0) {
				iVar11 = (int)lVar10;
				lVar10 = lVar10 + 1;
				local_1f8[iVar11] = (uint)uVar13;
			}
			uVar12 = uVar12 + 0x208;
			uVar12._7_1_ = (undefined)uVar12;
			uVar13 = uVar13 + 1;
			uVar8 = uVar8 - 1;
		} while (uVar8 != 0);
	}
	lVar10 = random(0, lVar10, (undefined)uVar12, (char)uVar13, param_5, param_6, param_7, param_8,
	    in_stack_fffffdd8, in_stack_fffffddf, in_stack_fffffdeb);
	uVar8 = (ulonglong)(uint)((int)lVar10 * 4);
	puVar1 = ppuVar9[-0x1bf3];
	uVar2 = local_1f8[(int)lVar10];
	iVar11 = 0;
	iVar19 = 0;
	do {
		iVar21 = 0;
		iVar20 = 0;
		iVar18 = 0;
		do {
			if ((int)*(char *)(iVar11 + *(int *)puVar5 + iVar21) == *(int *)(puVar1 + param_1 * 8 + 4)) {
				if (*(char *)(iVar7 + (int)*(short *)(iVar19 + *(int *)puVar6 + iVar20)) == '\0') {
					if (((*(char *)(iVar11 + *(int *)puVar3 + iVar21) == '\0') && (*(char *)(iVar11 + *(int *)puVar4 + iVar21) == '\0')) && (lVar10 = random(0, param_2, (char)uVar8, (char)uVar13, (char)lVar14, (char)lVar15, (char)lVar16, (char)lVar17, in_stack_fffffdd8, in_stack_fffffddf, in_stack_fffffdeb), (int)lVar10 == 0)) {
						uVar8 = random(0, 8, (char)uVar8, (char)uVar13, (char)lVar14, (char)lVar15, (char)lVar16, (char)lVar17, in_stack_fffffdd8, in_stack_fffffddf, in_stack_fffffdeb);
						lVar14 = 1;
						uVar13 = (ulonglong)uVar2;
						AddMonster(iVar18, iVar11, (int)uVar8, uVar2, 1, (char)lVar15, (char)lVar16, (char)lVar17,
						    in_stack_fffffdd8);
					}
				}
			}
			iVar18 = iVar18 + 1;
			iVar20 = iVar20 + 0xe0;
			iVar21 = iVar21 + 0x70;
		} while (iVar18 < 0x70);
		iVar11 = iVar11 + 1;
		iVar19 = iVar19 + 2;
	} while (iVar11 < 0x70);
	return;
}

void FUN_100aef28(int param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	longlong lVar6;
	uint uVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	ulonglong uVar14;
	undefined8 unaff_r23;
	int iVar15;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar16;
	undefined8 unaff_r26;
	int iVar17;
	undefined8 unaff_r27;
	int iVar18;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;
	char cStack57;
	undefined4 local_38;
	uint local_34;
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

	puVar5 = PTR_DAT_100f2004;
	iVar4 = _DAT_100f1da4;
	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1a48;
	puVar1 = PTR_DAT_100f183c;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar10 = (longlong)param_5;
	lVar9 = (longlong)param_4;
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
	uVar14 = 0;
	iVar16 = 0;
	uVar8 = (ulonglong)_DAT_100f44b4;
	local_34 = _DAT_100f44b4;
	local_38 = _DAT_100f44b8;
	do {
		iVar18 = 0;
		iVar17 = 0;
		iVar15 = 0;
		do {
			if ((((int)*(char *)((int)uVar14 + *(int *)puVar2 + iVar18) == *(int *)(puVar5 + param_1 * 8 + 4)) && (*(char *)(iVar4 + (int)*(short *)(iVar16 + *(int *)puVar3 + iVar17)) == '\0')) && (lVar6 = random(0, (longlong) * (char *)((int)&local_34 + ((uint)(byte)*puVar1 - 1)), (char)uVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar6 == 0)) {
				lVar6 = random(0, (longlong) * (char *)((int)&local_34 + ((uint)(byte)*puVar1 - 1)),
				    (char)uVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
				    (char)lVar13, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
				if ((int)lVar6 == 0) {
					uVar7 = 0x39;
				} else {
					uVar7 = 0x3a;
				}
				uVar8 = uVar14;
				AddObject(uVar7, iVar15, (int)uVar14, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12,
				    (char)lVar13, in_stack_ffffff98);
			}
			iVar15 = iVar15 + 1;
			iVar17 = iVar17 + 0xe0;
			iVar18 = iVar18 + 0x70;
		} while (iVar15 < 0x70);
		uVar14 = uVar14 + 1;
		iVar16 = iVar16 + 2;
	} while ((int)uVar14 < 0x70);
	FUN_100aedb4(param_1, (longlong)(&cStack57)[(uint)(byte)*puVar1], (char)uVar8, (char)lVar9,
	    (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98);
	return;
}

void FUN_100af05c(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffb8;
	char cStack25;
	undefined4 local_18;

	puVar2 = PTR_DAT_100f210c;
	puVar1 = PTR_DAT_100f2108;
	ppuVar3 = &toc;
	local_18 = _DAT_100f44bc;
	FUN_100adc04(param_1);
	if (*(int *)ppuVar3[-0x1bb3] == 1) {
		AddObject(9, *(int *)puVar2 + -1, *(int *)puVar1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		AddObject(0x3c, *(int *)puVar2, *(int *)puVar1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		AddObject(9, *(int *)puVar2 + 1, *(int *)puVar1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
	} else {
		AddObject(9, *(int *)puVar2, *(int *)puVar1 + -1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		AddObject(0x3b, *(int *)puVar2, *(int *)puVar1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		AddObject(9, *(int *)puVar2, *(int *)puVar1 + 1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
	}
	FUN_100aedb4(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar3[-0x1de5]], (char)ppuVar3[-0x1de5],
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void FUN_100af148(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined **ppuVar2;
	longlong lVar3;
	int iVar4;
	int iVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined1 in_stack_ffffffcb;
	char cStack25;
	undefined4 local_18;

	iVar1 = _DAT_100f1da4;
	ppuVar2 = &toc;
	local_18 = _DAT_100f44c0;
	lVar3 = random(0, 100, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcb);
	lVar3 = lVar3 + 1;
	iVar4 = 0;
	uVar8 = (undefined) * (int *)ppuVar2[-0x1d5f];
	iVar5 = 0;
	while (uVar9 = (undefined)lVar3, 0 < (int)lVar3) {
		if (((int)*(char *)(*(int *)ppuVar2[-0x1d62] + iVar4 * 0x70 + iVar5) == *(int *)(ppuVar2[-0x1bf3] + param_1 * 8 + 4)) && (*(char *)(iVar1 + (int)*(short *)(*(int *)ppuVar2[-0x1d5f] + iVar4 * 0xe0 + iVar5 * 2)) == '\0')) {
			lVar3 = lVar3 + -1;
		}
		if ((0 < (int)lVar3) && (iVar4 = iVar4 + 1, iVar4 == 0x70)) {
			iVar5 = iVar5 + 1;
			iVar4 = 0;
			if (iVar5 == 0x70) {
				iVar5 = 0;
			}
		}
	}
	uVar6 = 0;
	uVar7 = 1;
	CreateRndItem(iVar4, iVar5, 1, 0, 1, uVar8, uVar9, param_8, in_stack_ffffffb8);
	ItemNoFlippy();
	FUN_100aedb4(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar2[-0x1de5]], (char)ppuVar2[-0x1de5],
	    uVar6, uVar7, uVar8, uVar9, param_8, in_stack_ffffffb8);
	return;
}

void FUN_100af258(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	longlong lVar6;
	ulonglong uVar7;
	undefined8 uVar8;
	undefined uVar9;
	char cVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	ulonglong uVar14;
	undefined8 unaff_r31;
	ulonglong uVar15;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;
	char cStack41;
	undefined4 local_28;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	puVar4 = PTR_DAT_100f194c;
	puVar3 = PTR_DAT_100f183c;
	ppuVar5 = &toc;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	local_28 = _DAT_100f44c4;
	FUN_100adf44(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	uVar1 = *(uint *)ppuVar5[-0x1bb1];
	uVar15 = (ulonglong)uVar1;
	uVar2 = *(uint *)ppuVar5[-0x1bb2];
	uVar14 = (ulonglong)uVar2;
	uVar13 = (undefined)uVar2;
	uVar9 = uVar13;
	AddObject(3, uVar1, uVar2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	cVar10 = (&cStack41)[(uint)(byte)*puVar3];
	lVar6 = random(0, (longlong)cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		uVar11 = (undefined)(uVar15 - 1);
		uVar12 = (undefined)(uVar14 - 1);
		uVar9 = AddObject(0xb, (int)(uVar15 - 1), (int)(uVar14 - 1), param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffa8);
	} else {
		uVar7 = PreSpawnSkeleton((char)lVar6, cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar11 = (undefined)(uVar15 - 1);
		uVar12 = (undefined)(uVar14 - 1);
		uVar8 = SpawnSkeleton((int)uVar7, uVar15 - 1, (int)(uVar14 - 1), param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffa8);
		uVar9 = (undefined)uVar8;
	}
	uVar7 = PreSpawnSkeleton(uVar9, uVar11, uVar12, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	uVar9 = (undefined)(uVar14 - 1);
	SpawnSkeleton((int)uVar7, uVar15, (int)(uVar14 - 1), param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	cVar10 = (&cStack41)[(uint)(byte)*puVar3];
	lVar6 = random(0, (longlong)cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		uVar9 = (undefined)(uVar14 - 1);
		AddObject(0xd, uVar1 + 1, (int)(uVar14 - 1), param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	} else {
		uVar7 = PreSpawnSkeleton((char)lVar6, cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar9 = (undefined)(uVar14 - 1);
		SpawnSkeleton((int)uVar7, uVar15 + 1, (int)(uVar14 - 1), param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	cVar10 = (&cStack41)[(uint)(byte)*puVar3];
	lVar6 = random(0, (longlong)cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		uVar9 = uVar13;
		AddObject(0xc, uVar1 - 1, uVar2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	} else {
		uVar7 = PreSpawnSkeleton((char)lVar6, cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar9 = uVar13;
		SpawnSkeleton((int)uVar7, uVar15 - 1, uVar2, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	cVar10 = (&cStack41)[(uint)(byte)*puVar3];
	lVar6 = random(0, (longlong)cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		AddObject(0xc, uVar1 + 1, uVar2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	} else {
		uVar7 = PreSpawnSkeleton((char)lVar6, cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		SpawnSkeleton((int)uVar7, uVar15 + 1, uVar2, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	cVar10 = (&cStack41)[(uint)(byte)*puVar3];
	lVar6 = random(0, (longlong)cVar10, uVar13, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		uVar13 = (undefined)(uVar15 - 1);
		uVar11 = (undefined)(uVar14 + 1);
		uVar9 = AddObject(0xd, (int)(uVar15 - 1), (int)(uVar14 + 1), param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffa8);
	} else {
		uVar7 = PreSpawnSkeleton((char)lVar6, cVar10, uVar13, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar13 = (undefined)(uVar15 - 1);
		uVar11 = (undefined)(uVar14 + 1);
		uVar8 = SpawnSkeleton((int)uVar7, uVar15 - 1, (int)(uVar14 + 1), param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffa8);
		uVar9 = (undefined)uVar8;
	}
	uVar7 = PreSpawnSkeleton(uVar9, uVar13, uVar11, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	uVar9 = (undefined)(uVar14 + 1);
	SpawnSkeleton((int)uVar7, uVar15, (int)(uVar14 + 1), param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	cVar10 = (&cStack41)[(uint)(byte)*puVar3];
	lVar6 = random(0, (longlong)cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	if ((int)lVar6 == 0) {
		AddObject(0xb, uVar1 + 1, uVar2 + 1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	} else {
		uVar14 = PreSpawnSkeleton((char)lVar6, cVar10, uVar9, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		SpawnSkeleton((int)uVar14, uVar15 + 1, uVar2 + 1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffa8);
	}
	if (*(char *)(*(int *)puVar4 + uVar1 * 0x70 + uVar2 + -3) == '\0') {
		AddObject(0x3d, uVar1, uVar2 - 2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	if (*(char *)(*(int *)puVar4 + uVar1 * 0x70 + uVar2 + 3) == '\0') {
		AddObject(0x3d, uVar1, uVar2 + 2, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	}
	return;
}

void FUN_100af4a8(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	int iVar7;
	undefined **ppuVar8;
	longlong lVar9;
	ulonglong uVar10;
	int iVar11;
	ulonglong uVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	int iVar18;
	undefined8 unaff_r20;
	int iVar19;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	int iVar20;
	undefined8 unaff_r23;
	int iVar21;
	undefined8 unaff_r24;
	int iVar22;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	int iVar23;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;
	char cStack69;
	undefined4 local_44;
	undefined4 local_40[2];
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

	iVar7 = _DAT_100f1da4;
	puVar6 = PTR_DAT_100f1a54;
	puVar5 = PTR_DAT_100f1a48;
	puVar4 = PTR_DAT_100f1940;
	puVar3 = PTR_DAT_100f183c;
	lVar17 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	lVar15 = (longlong)param_6;
	lVar14 = (longlong)param_5;
	lVar13 = (longlong)param_4;
	uVar12 = SEXT18(param_3);
	ppuVar8 = &toc;
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
	local_40[0] = _DAT_100f44c8;
	local_44 = _DAT_100f44cc;
	GetRndSeed((char)param_1, (char)_DAT_100f44c8, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffff88);
	puVar2 = ppuVar8[-0x1bf3];
	iVar18 = 0;
	iVar20 = 0;
	do {
		iVar22 = 0;
		iVar21 = 0;
		iVar19 = 0;
		do {
			if (((int)*(char *)(iVar18 + *(int *)puVar5 + iVar22) == *(int *)(puVar2 + param_1 * 8 + 4))
			    && (*(char *)(iVar7 + (int)*(short *)(iVar20 + *(int *)puVar6 + iVar21)) == '\0')) {
				lVar9 = random(0, (longlong) * (char *)((int)local_40 + ((uint)(byte)*puVar3 - 1)),
				    (char)uVar12, (char)lVar13, (char)lVar14, (char)lVar15, (char)lVar16,
				    (char)lVar17, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
				uVar10 = random(0, (longlong) * (char *)((int)local_40 + ((uint)(byte)*puVar3 - 1)),
				    (char)uVar12, (char)lVar13, (char)lVar14, (char)lVar15, (char)lVar16,
				    (char)lVar17, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
				if ((uVar10 & 0x7fffffff) == 0) {
					uVar12 = 0;
					lVar13 = 0xb;
					lVar14 = 0;
					lVar15 = 0;
					lVar16 = 1;
					CreateTypeItem(iVar19, iVar18, 0, 0xb, 0, 0, 1, (char)lVar17, in_stack_ffffff88);
					ItemNoFlippy();
				}
				iVar23 = (int)lVar9;
				if (iVar23 == 0) {
					lVar13 = 0;
					lVar14 = 1;
					CreateRndItem(iVar19, iVar18, 0, 0, 1, (char)lVar15, (char)lVar16, (char)lVar17, in_stack_ffffff88);
					ItemNoFlippy();
				} else {
					if (iVar23 < (int)*(char *)((int)local_40 + ((uint)(byte)*puVar3 - 1)) + -2)
						goto LAB_100af624;
				}
				iVar11 = ItemNoFlippy();
				bVar1 = *puVar3;
				uVar12 = (ulonglong)bVar1;
				if (((int)*(char *)((int)local_40 + ((uint)bVar1 - 1)) + -2 <= iVar23) && (bVar1 != 1)) {
					*(int *)(puVar4 + iVar11 * 0x170 + 0xc4) = *(int *)(puVar4 + iVar11 * 0x170 + 0xc4) >> 1;
				}
			}
		LAB_100af624:
			iVar19 = iVar19 + 1;
			iVar21 = iVar21 + 0xe0;
			iVar22 = iVar22 + 0x70;
		} while (iVar19 < 0x70);
		iVar18 = iVar18 + 1;
		iVar20 = iVar20 + 2;
		if (0x6f < iVar18) {
			FUN_100aedb4(param_1, (longlong)(&cStack69)[(uint)(byte)*puVar3], (char)uVar12, (char)lVar13,
			    (char)lVar14, (char)lVar15, (char)lVar16, (char)lVar17, in_stack_ffffff88);
			return;
		}
	} while (true);
}

void FUN_100af674(int param_1, undefined param_2, undefined param_3, undefined param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	ulonglong uVar6;
	int iVar7;
	undefined8 uVar8;
	longlong lVar9;
	undefined uVar10;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	longlong lVar16;
	undefined uVar17;
	longlong lVar18;
	undefined uVar19;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	longlong lVar20;
	undefined8 unaff_r23;
	longlong lVar21;
	undefined8 unaff_r24;
	int iVar22;
	undefined8 unaff_r25;
	int iVar23;
	undefined8 unaff_r26;
	int iVar24;
	undefined8 unaff_r27;
	ulonglong uVar25;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;
	undefined4 local_48;
	undefined4 local_44[6];
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

	puVar5 = PTR_DAT_100f210c;
	puVar4 = PTR_DAT_100f2108;
	puVar3 = PTR_DAT_100f1954;
	puVar2 = PTR_DAT_100f194c;
	puVar1 = PTR_DAT_100f183c;
	lVar18 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	lVar14 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	uVar6 = ZEXT48(&toc);
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
	uVar25 = ZEXT48(PTR_DAT_100f1948);
	local_44[0] = _DAT_100f44d0;
	local_48 = _DAT_100f44d4;
	FUN_100adc04(param_1);
	if (**(int **)((int)uVar6 + -0x6ecc) == 1) {
		AddObject(0x41, *(int *)puVar5 + -1, *(int *)puVar4, param_4, (char)lVar12, (char)lVar14,
		    (char)lVar16, (char)lVar18, in_stack_ffffff88);
		AddObject(0x3f, *(int *)puVar5, *(int *)puVar4, param_4, (char)lVar12, (char)lVar14, (char)lVar16,
		    (char)lVar18, in_stack_ffffff88);
		AddObject(0x41, *(int *)puVar5 + 1, *(int *)puVar4, param_4, (char)lVar12, (char)lVar14,
		    (char)lVar16, (char)lVar18, in_stack_ffffff88);
	} else {
		AddObject(0x41, *(int *)puVar5, *(int *)puVar4 + -1, param_4, (char)lVar12, (char)lVar14,
		    (char)lVar16, (char)lVar18, in_stack_ffffff88);
		AddObject(0x3e, *(int *)puVar5, *(int *)puVar4, param_4, (char)lVar12, (char)lVar14, (char)lVar16,
		    (char)lVar18, in_stack_ffffff88);
		AddObject(0x41, *(int *)puVar5, *(int *)puVar4 + 1, param_4, (char)lVar12, (char)lVar14,
		    (char)lVar16, (char)lVar18, in_stack_ffffff88);
	}
	lVar20 = 1;
	iVar22 = 2;
	do {
		lVar21 = 1;
		iVar24 = 0xe0;
		iVar23 = 0x70;
		do {
			uVar11 = 0xff;
			uVar10 = (char)param_1;
			uVar8 = FUN_100ae084(lVar21, lVar20, param_1, -1, (char)lVar12, (char)lVar14, (char)lVar16,
			    (char)lVar18, in_stack_ffffff88);
			if ((((int)uVar8 != 0) && (*(short *)(iVar22 + *(int *)puVar3 + iVar24) == 0)) && (lVar9 = random(0, (longlong) * (char *)((int)local_44 + ((uint)(byte)*puVar1 - 1)), uVar10, uVar11, (char)lVar12, (char)lVar14, (char)lVar16, (char)lVar18, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b), (int)lVar9 == 0)) {
				uVar10 = (char)lVar20;
				AddObject(0x40, (int)lVar21, (int)lVar20, uVar11, (char)lVar12, (char)lVar14, (char)lVar16,
				    (char)lVar18, in_stack_ffffff88);
				lVar9 = random(0, (ulonglong)(uint)((int)*(char *)((int)local_44 + ((uint)(byte)*puVar1 - 1)) << 1), uVar10, uVar11, (char)lVar12, (char)lVar14, (char)lVar16,
				    (char)lVar18, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b);
				if ((int)lVar9 != 0) {
					lVar9 = uVar25 + ((longlong) * (char *)((int)lVar20 + *(int *)puVar2 + iVar23) + -1) * 0x78;
					uVar10 = (undefined)lVar9;
					iVar7 = (int)lVar9;
					*(undefined *)(iVar7 + 0x40) = 0;
					*(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + 2;
				}
			}
			uVar19 = (undefined)lVar18;
			uVar17 = (undefined)lVar16;
			uVar15 = (undefined)lVar14;
			uVar13 = (undefined)lVar12;
			iVar7 = (int)uVar6;
			lVar21 = lVar21 + 1;
			iVar23 = iVar23 + 0x70;
			iVar24 = iVar24 + 0xe0;
		} while ((int)lVar21 < 0x6f);
		lVar20 = lVar20 + 1;
		iVar22 = iVar22 + 2;
	} while ((int)lVar20 < 0x6f);
	uVar8 = QuestStatus(3);
	if ((int)uVar8 == 0) {
		FUN_100aedb4(param_1, (longlong) * (char *)((int)&local_48 + (uint)(byte)*puVar1), uVar10, uVar11,
		    uVar13, uVar15, uVar17, uVar19, in_stack_ffffff88);
	} else {
		if (param_1 != **(int **)(iVar7 + -0x70a8)) {
			FUN_100aedb4(param_1, (longlong) * (char *)((int)&local_48 + (uint)(byte)*puVar1), uVar10, uVar11,
			    uVar13, uVar15, uVar17, uVar19, in_stack_ffffff88);
		}
	}
	return;
}

void FUN_100af890(int param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined8 uVar6;
	longlong lVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	ulonglong uVar14;
	undefined8 unaff_r23;
	longlong lVar15;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar16;
	undefined8 unaff_r26;
	int iVar17;
	undefined8 unaff_r27;
	int iVar18;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;
	char cStack57;
	undefined4 local_38;
	uint local_34;
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

	puVar5 = PTR_DAT_100f2004;
	iVar4 = _DAT_100f1da4;
	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1a48;
	puVar1 = PTR_DAT_100f183c;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar10 = (longlong)param_5;
	lVar9 = (longlong)param_4;
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
	uVar14 = 1;
	iVar16 = 2;
	uVar8 = (ulonglong)_DAT_100f44d8;
	local_34 = _DAT_100f44d8;
	local_38 = _DAT_100f44dc;
	do {
		lVar15 = 1;
		iVar18 = 0x70;
		iVar17 = 0xe0;
		do {
			if (((int)*(char *)((int)uVar14 + *(int *)puVar2 + iVar18) == *(int *)(puVar5 + param_1 * 8 + 4)) && (*(char *)(iVar4 + (int)*(short *)(iVar16 + *(int *)puVar3 + iVar17)) == '\0')) {
				lVar9 = -1;
				uVar8 = (longlong)param_1;
				uVar6 = FUN_100ae084(lVar15, uVar14, param_1, -1, (char)lVar10, (char)lVar11, (char)lVar12,
				    (char)lVar13, in_stack_ffffff98);
				if (((int)uVar6 != 0) && (lVar7 = random(0, (longlong) * (char *)((int)&local_38 + (uint)(byte)*puVar1 + 3), (char)uVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar7 == 0)) {
					uVar8 = uVar14;
					AddObject(0x1e, (int)lVar15, (int)uVar14, (char)lVar9, (char)lVar10, (char)lVar11,
					    (char)lVar12, (char)lVar13, in_stack_ffffff98);
				}
			}
			lVar15 = lVar15 + 1;
			iVar17 = iVar17 + 0xe0;
			iVar18 = iVar18 + 0x70;
		} while ((int)lVar15 < 0x6f);
		uVar14 = uVar14 + 1;
		iVar16 = iVar16 + 2;
	} while ((int)uVar14 < 0x6f);
	FUN_100aedb4(param_1, (longlong)(&cStack57)[(uint)(byte)*puVar1], (char)uVar8, (char)lVar9,
	    (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98);
	return;
}

void FUN_100af9b8(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;
	char cStack25;
	undefined4 local_18;

	ppuVar1 = &toc;
	local_18 = _DAT_100f44e0;
	FUN_100addbc(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	AddObject(0x42, *(int *)ppuVar1[-0x1bb1], *(int *)ppuVar1[-0x1bb2], param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	FUN_100aedb4(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar1[-0x1de5]], (char)ppuVar1[-0x1de5],
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void FUN_100afa20(int param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined8 uVar6;
	longlong lVar7;
	ulonglong uVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	ulonglong uVar14;
	undefined8 unaff_r23;
	longlong lVar15;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar16;
	undefined8 unaff_r26;
	int iVar17;
	undefined8 unaff_r27;
	int iVar18;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;
	char cStack57;
	undefined4 local_38;
	uint local_34;
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

	puVar5 = PTR_DAT_100f2004;
	iVar4 = _DAT_100f1da4;
	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1a48;
	puVar1 = PTR_DAT_100f183c;
	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	lVar11 = (longlong)param_6;
	lVar10 = (longlong)param_5;
	lVar9 = (longlong)param_4;
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
	uVar14 = 1;
	iVar16 = 2;
	uVar8 = (ulonglong)_DAT_100f44e4;
	local_34 = _DAT_100f44e4;
	local_38 = _DAT_100f44e8;
	do {
		lVar15 = 1;
		iVar18 = 0x70;
		iVar17 = 0xe0;
		do {
			if (((int)*(char *)((int)uVar14 + *(int *)puVar2 + iVar18) == *(int *)(puVar5 + param_1 * 8 + 4)) && (*(char *)(iVar4 + (int)*(short *)(iVar16 + *(int *)puVar3 + iVar17)) == '\0')) {
				lVar9 = -1;
				uVar8 = (longlong)param_1;
				uVar6 = FUN_100ae084(lVar15, uVar14, param_1, -1, (char)lVar10, (char)lVar11, (char)lVar12,
				    (char)lVar13, in_stack_ffffff98);
				if (((int)uVar6 != 0) && (lVar7 = random(0, (longlong) * (char *)((int)&local_38 + (uint)(byte)*puVar1 + 3), (char)uVar8, (char)lVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar7 == 0)) {
					uVar8 = uVar14;
					AddObject(0x43, (int)lVar15, (int)uVar14, (char)lVar9, (char)lVar10, (char)lVar11,
					    (char)lVar12, (char)lVar13, in_stack_ffffff98);
				}
			}
			lVar15 = lVar15 + 1;
			iVar17 = iVar17 + 0xe0;
			iVar18 = iVar18 + 0x70;
		} while ((int)lVar15 < 0x6f);
		uVar14 = uVar14 + 1;
		iVar16 = iVar16 + 2;
	} while ((int)uVar14 < 0x6f);
	FUN_100aedb4(param_1, (longlong)(&cStack57)[(uint)(byte)*puVar1], (char)uVar8, (char)lVar9,
	    (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, in_stack_ffffff98);
	return;
}

void FUN_100afb48(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;
	char cStack25;
	undefined4 local_18;

	ppuVar1 = &toc;
	local_18 = _DAT_100f44ec;
	FUN_100addbc(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	AddObject(0x4c, *(int *)ppuVar1[-0x1bb1], *(int *)ppuVar1[-0x1bb2], param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	FUN_100aedb4(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar1[-0x1de5]], (char)ppuVar1[-0x1de5],
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void FUN_100afbb0(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	undefined8 uVar8;
	longlong lVar9;
	ulonglong uVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	ulonglong uVar16;
	undefined8 unaff_r22;
	longlong lVar17;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar18;
	undefined8 unaff_r25;
	int iVar19;
	undefined8 unaff_r26;
	int iVar20;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;
	char cStack73;
	undefined4 local_48;
	undefined4 local_44;
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

	puVar6 = PTR_DAT_100f1fe0;
	iVar5 = _DAT_100f1da4;
	puVar4 = PTR_DAT_100f1a54;
	puVar3 = PTR_DAT_100f1a48;
	puVar2 = PTR_DAT_100f183c;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	lVar11 = (longlong)param_4;
	uVar10 = SEXT18(param_3);
	ppuVar7 = &toc;
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
	local_44 = _DAT_100f44f0;
	local_48 = _DAT_100f44f4;
	if (*(int *)PTR_DAT_100f1fe0 != 0) {
		ppuVar7 = &toc;
		FUN_100ae1ac(param_1, (char)_DAT_100f44f0, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffff88);
		uVar10 = (ulonglong) * (uint *)ppuVar7[-0x1bb2];
		AddObject(0x4d, *(int *)ppuVar7[-0x1bb1], *(uint *)ppuVar7[-0x1bb2], (char)lVar11, (char)lVar12,
		    (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff88);
	}
	puVar1 = ppuVar7[-0x1bf3];
	uVar16 = 0;
	iVar18 = 0;
	do {
		iVar20 = 0;
		iVar19 = 0;
		lVar17 = 0;
		do {
			if (((int)*(char *)((int)uVar16 + *(int *)puVar3 + iVar20) == *(int *)(puVar1 + param_1 * 8 + 4)) && (*(char *)(iVar5 + (int)*(short *)(iVar18 + *(int *)puVar4 + iVar19)) == '\0')) {
				lVar11 = -1;
				uVar10 = (longlong)param_1;
				uVar8 = FUN_100ae084(lVar17, uVar16, param_1, -1, (char)lVar12, (char)lVar13, (char)lVar14,
				    (char)lVar15, in_stack_ffffff88);
				if (((int)uVar8 != 0) && (lVar9 = random(0, (longlong) * (char *)((int)&local_48 + (uint)(byte)*puVar2 + 3), (char)uVar10, (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b), (int)lVar9 == 0)) {
					uVar10 = uVar16;
					AddObject(0x4e, (int)lVar17, (int)uVar16, (char)lVar11, (char)lVar12, (char)lVar13,
					    (char)lVar14, (char)lVar15, in_stack_ffffff88);
				}
			}
			lVar17 = lVar17 + 1;
			iVar19 = iVar19 + 0xe0;
			iVar20 = iVar20 + 0x70;
		} while ((int)lVar17 < 0x70);
		uVar16 = uVar16 + 1;
		iVar18 = iVar18 + 2;
	} while ((int)uVar16 < 0x70);
	FUN_100aedb4(param_1, (longlong)(&cStack73)[(uint)(byte)*puVar2], (char)uVar10, (char)lVar11,
	    (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff88);
	*(undefined4 *)puVar6 = 0;
	return;
}

void FUN_100afd10(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	undefined4 in_stack_ffffff98;

	puVar7 = PTR_DAT_100f210c;
	puVar6 = PTR_DAT_100f2108;
	puVar5 = PTR_DAT_100f2104;
	iVar4 = _DAT_100f1da4;
	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1a48;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	ppuVar8 = &toc;
	FUN_100adff0(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
	AddObject(0x4f, *(int *)puVar7, *(int *)puVar6, param_4, param_5, (char)lVar9, (char)lVar10,
	    (char)lVar11, in_stack_ffffff98);
	puVar1 = ppuVar8[-0x1bf3];
	iVar12 = *(int *)puVar6 + -1;
	iVar14 = iVar12 * 2;
	while (iVar12 <= *(int *)puVar6 + 1) {
		iVar13 = *(int *)puVar7 + -1;
		iVar16 = iVar13 * 0x70;
		iVar15 = iVar13 * 0xe0;
		while (iVar13 <= *(int *)puVar7 + 1) {
			if ((((int)*(char *)(iVar12 + *(int *)puVar2 + iVar16) == *(int *)(puVar1 + param_1 * 8 + 4))
			        && (*(char *)(iVar4 + (int)*(short *)(iVar14 + *(int *)puVar3 + iVar15)) == '\0'))
			    && ((iVar13 != *(int *)puVar7 || (iVar12 != *(int *)puVar6)))) {
				AddMonster(iVar13, iVar12, 1, *(int *)puVar5, 1, (char)lVar9, (char)lVar10, (char)lVar11,
				    in_stack_ffffff98);
			}
			iVar16 = iVar16 + 0x70;
			iVar15 = iVar15 + 0xe0;
			iVar13 = iVar13 + 1;
		}
		iVar14 = iVar14 + 2;
		iVar12 = iVar12 + 1;
	}
	return;
}

void FUN_100afe2c(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;
	char cStack25;
	undefined4 local_18;

	ppuVar1 = &toc;
	local_18 = _DAT_100f44f8;
	FUN_100addbc(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	AddObject(0x50, *(int *)ppuVar1[-0x1bb1], *(int *)ppuVar1[-0x1bb2], param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	FUN_100aedb4(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar1[-0x1de5]], (char)ppuVar1[-0x1de5],
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void FUN_100afe94(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;
	char cStack25;
	undefined4 local_18;

	ppuVar1 = &toc;
	local_18 = _DAT_100f44fc;
	FUN_100addbc(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	AddObject(0x51, *(int *)ppuVar1[-0x1bb1], *(int *)ppuVar1[-0x1bb2], param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	FUN_100aedb4(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar1[-0x1de5]], (char)ppuVar1[-0x1de5],
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void FUN_100afefc(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffb8;
	char cStack25;
	undefined4 local_18;

	ppuVar1 = &toc;
	local_18 = _DAT_100f4500;
	FUN_100addbc(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	AddObject(0x52, *(int *)ppuVar1[-0x1bb1], *(int *)ppuVar1[-0x1bb2], param_4, param_5, param_6,
	    param_7, param_8, in_stack_ffffffb8);
	FUN_100aedb4(param_1, (longlong)(&cStack25)[(uint)(byte)*ppuVar1[-0x1de5]], (char)ppuVar1[-0x1de5],
	    param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	return;
}

void FUN_100aff64(int param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;
	ulonglong uVar6;
	int iVar7;
	undefined8 uVar8;
	longlong lVar9;
	ulonglong uVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	ulonglong uVar16;
	undefined8 unaff_r23;
	longlong lVar17;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar18;
	undefined8 unaff_r26;
	int iVar19;
	undefined8 unaff_r27;
	int iVar20;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;
	char cStack57;
	undefined4 local_38;
	uint local_34;
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

	puVar5 = PTR_DAT_100f2004;
	iVar4 = _DAT_100f1da4;
	puVar3 = PTR_DAT_100f1a54;
	puVar2 = PTR_DAT_100f1a48;
	puVar1 = PTR_DAT_100f183c;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	lVar11 = (longlong)param_4;
	uVar6 = ZEXT48(&toc);
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
	uVar16 = 0;
	iVar18 = 0;
	uVar10 = (ulonglong)_DAT_100f4504;
	local_34 = _DAT_100f4504;
	local_38 = _DAT_100f4508;
	do {
		iVar20 = 0;
		iVar19 = 0;
		lVar17 = 0;
		do {
			if (((int)*(char *)((int)uVar16 + *(int *)puVar2 + iVar20) == *(int *)(puVar5 + param_1 * 8 + 4)) && (*(char *)(iVar4 + (int)*(short *)(iVar18 + *(int *)puVar3 + iVar19)) == '\0')) {
				lVar11 = -1;
				uVar10 = (longlong)param_1;
				uVar8 = FUN_100ae084(lVar17, uVar16, param_1, -1, (char)lVar12, (char)lVar13, (char)lVar14,
				    (char)lVar15, in_stack_ffffff98);
				if (((int)uVar8 != 0) && (lVar9 = random(0, (longlong)(&cStack57)[(uint)(byte)*puVar1], (char)uVar10, (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab), (int)lVar9 == 0)) {
					uVar10 = uVar16;
					AddObject(0x5b, (int)lVar17, (int)uVar16, (char)lVar11, (char)lVar12, (char)lVar13,
					    (char)lVar14, (char)lVar15, in_stack_ffffff98);
				}
			}
			iVar7 = (int)uVar6;
			lVar17 = lVar17 + 1;
			iVar19 = iVar19 + 0xe0;
			iVar20 = iVar20 + 0x70;
		} while ((int)lVar17 < 0x70);
		uVar16 = uVar16 + 1;
		iVar18 = iVar18 + 2;
	} while ((int)uVar16 < 0x70);
	FUN_100aedb4(param_1, (longlong) * (char *)((int)&local_38 + (uint)(byte)*puVar1 + 3), (char)uVar10,
	    (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff98);
	**(undefined4 **)(iVar7 + -0x6ee8) = 1;
	return;
}

void FUN_100b0098(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	undefined8 uVar8;
	longlong lVar9;
	ulonglong uVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	ulonglong uVar16;
	undefined8 unaff_r22;
	longlong lVar17;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar18;
	undefined8 unaff_r25;
	int iVar19;
	undefined8 unaff_r26;
	int iVar20;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined in_stack_ffffff9b;
	char cStack73;
	undefined4 local_48;
	undefined4 local_44;
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

	puVar6 = PTR_DAT_100f1fd8;
	iVar5 = _DAT_100f1da4;
	puVar4 = PTR_DAT_100f1a54;
	puVar3 = PTR_DAT_100f1a48;
	puVar2 = PTR_DAT_100f183c;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	lVar11 = (longlong)param_4;
	uVar10 = SEXT18(param_3);
	ppuVar7 = &toc;
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
	local_44 = _DAT_100f450c;
	local_48 = _DAT_100f4510;
	if (*(int *)PTR_DAT_100f1fd8 != 0) {
		ppuVar7 = &toc;
		FUN_100ae1ac(param_1, (char)_DAT_100f450c, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffff88);
		uVar10 = (ulonglong) * (uint *)ppuVar7[-0x1bb2];
		AddObject(0x5c, *(int *)ppuVar7[-0x1bb1], *(uint *)ppuVar7[-0x1bb2], (char)lVar11, (char)lVar12,
		    (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff88);
	}
	puVar1 = ppuVar7[-0x1bf3];
	uVar16 = 0;
	iVar18 = 0;
	do {
		iVar20 = 0;
		iVar19 = 0;
		lVar17 = 0;
		do {
			if (((int)*(char *)((int)uVar16 + *(int *)puVar3 + iVar20) == *(int *)(puVar1 + param_1 * 8 + 4)) && (*(char *)(iVar5 + (int)*(short *)(iVar18 + *(int *)puVar4 + iVar19)) == '\0')) {
				lVar11 = -1;
				uVar10 = (longlong)param_1;
				uVar8 = FUN_100ae084(lVar17, uVar16, param_1, -1, (char)lVar12, (char)lVar13, (char)lVar14,
				    (char)lVar15, in_stack_ffffff88);
				if (((int)uVar8 != 0) && (lVar9 = random(0, (longlong) * (char *)((int)&local_48 + (uint)(byte)*puVar2 + 3), (char)uVar10, (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9b), (int)lVar9 == 0)) {
					uVar10 = uVar16;
					AddObject(0x5d, (int)lVar17, (int)uVar16, (char)lVar11, (char)lVar12, (char)lVar13,
					    (char)lVar14, (char)lVar15, in_stack_ffffff88);
				}
			}
			lVar17 = lVar17 + 1;
			iVar19 = iVar19 + 0xe0;
			iVar20 = iVar20 + 0x70;
		} while ((int)lVar17 < 0x70);
		uVar16 = uVar16 + 1;
		iVar18 = iVar18 + 2;
	} while ((int)uVar16 < 0x70);
	FUN_100aedb4(param_1, (longlong)(&cStack73)[(uint)(byte)*puVar2], (char)uVar10, (char)lVar11,
	    (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffff88);
	*(undefined4 *)puVar6 = 0;
	return;
}

void UpdateL4Trans(void)

{
	undefined *puVar1;
	int iVar2;
	char *pcVar3;
	int iVar4;
	longlong lVar5;

	puVar1 = PTR_DAT_100f1a48;
	iVar4 = 0;
	do {
		lVar5 = 0xe;
		iVar2 = 0;
		do {
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0x70);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0xe0);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0x150);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0x1c0);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0x230);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0x2a0);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			pcVar3 = (char *)(iVar4 + *(int *)puVar1 + iVar2 + 0x310);
			if (*pcVar3 != '\0') {
				*pcVar3 = '\x01';
			}
			iVar2 = iVar2 + 0x380;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
	} while (iVar4 < 0x70);
	return;
}

void CreateThemeRooms(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	code *UNRECOVERED_JUMPTABLE;
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;
	char *pcVar7;

	puVar5 = PTR_DAT_100f210c;
	puVar4 = PTR_DAT_100f2108;
	pcVar7 = PTR_DAT_100f2004;
	puVar3 = PTR_DAT_100f2000;
	puVar2 = PTR_DAT_100f1fe8;
	if (*PTR_DAT_100f17ec != '\x10') {
		*(undefined4 *)PTR_DAT_100f1fe8 = 1;
		iVar6 = 0;
		while (puVar1 = PTR_DAT_100f183c, iVar6 < *(int *)puVar3) {
			*(undefined4 *)puVar5 = 0;
			*(undefined4 *)puVar4 = 0;
			if (((longlong)*pcVar7 & 0xffffffffU) < 0x11) {
				UNRECOVERED_JUMPTABLE = *(code **)(_DAT_100f3930 + (int)*pcVar7 * 4);
				// WARNING: Could not recover jumptable at 0x100b03b4. Too many branches
				// WARNING: Treating indirect jump as call
				(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
				return;
			}
			pcVar7 = pcVar7 + 8;
			iVar6 = iVar6 + 1;
		}
		*(undefined4 *)puVar2 = 0;
		if ((*puVar1 == '\x04') && (0 < *(int *)PTR_DAT_100f1d60)) {
			UpdateL4Trans();
		}
	}
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
