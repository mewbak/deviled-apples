
void FUN_10015c88(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	ulonglong uVar1;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	uVar1 = GetMenuHandle(0x83, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	if ((uVar1 & 0xffffffff) != 0) {
		CheckItem((char)uVar1, 3, **(undefined **)(local_2c + -0x7814), param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	}
	return;
}

undefined8 FUN_10015ccc(uint param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	short sVar3;
	undefined8 uVar2;
	ulonglong uVar4;
	undefined uVar5;
	undefined uVar7;
	ushort uVar6;
	undefined8 uVar8;
	int iVar9;

	uVar5 = 0xb8;
	iVar9 = -1;
	uVar8 = 0;
	uVar7 = (undefined)(param_1 & 0xff);
	sVar3 = (short)(param_1 >> 0x10);
	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x150);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	uVar6 = (ushort)(param_1 & 0xff);
	if (sVar3 == 0x82) {
		switch (uVar6) {
		case 1:
			iVar9 = 8;
			break;
		case 3:
			iVar9 = 9;
			break;
		case 4:
			iVar9 = 10;
			break;
		case 5:
			iVar9 = 0xb;
			break;
		case 6:
			iVar9 = 0xc;
			break;
		case 8:
			iVar9 = 0xd;
		}
	} else {
		if (sVar3 < 0x82) {
			if (sVar3 == 0x80) {
				if (uVar6 == 1) {
					iVar9 = 1;
				} else {
					uVar4 = GetMenuHandle(0x80, 0xb8, param_3, param_4, param_5, param_6, param_7, param_8,
					    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
					if ((uVar4 & 0xffffffff) != 0) {
						param_3 = 0xea;
						uVar5 = uVar7;
						GetMenuItemText((char)uVar4, uVar7, 0xea, param_4, param_5, param_6, param_7, param_8,
						    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
						OpenDeskAcc((char)(ZEXT48(register0x0000000c) - 0x150) + ':', uVar5, param_3, param_4, param_5,
						    param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
						    *(undefined4 *)(iVar1 + 0x14));
					}
				}
			} else {
				if (0x7f < sVar3) {
					switch (uVar6) {
					case 1:
					case 4:
						iVar9 = 4;
						break;
					case 2:
						iVar9 = 2;
						break;
					case 5:
						iVar9 = 5;
						break;
					case 7:
						iVar9 = 7;
					}
				}
			}
		} else {
			if (sVar3 < 0x84) {
				if (uVar6 == 3) {
					uVar2 = countLeadingZeros((uint)DAT_101271b8);
					DAT_101271b8 = (byte)((uint)uVar2 >> 5);
				} else {
					if (uVar6 < 3) {
						if (uVar6 == 1) {
							iVar9 = 0x80;
						} else {
							if (uVar6 != 0) {
								iVar9 = 0x81;
							}
						}
					} else {
						if (uVar6 < 5) {
							iVar9 = 0x82;
						}
					}
				}
			}
		}
	}
	if (-1 < iVar9) {
		uVar8 = FUN_10018348(iVar9, uVar5, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined4 *)(iVar1 + 8));
	}
	HiliteMenu(0, uVar5, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	return uVar8;
}

undefined8 FUN_10015e94(undefined2 *param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	ulonglong uVar2;
	undefined uVar3;
	undefined8 uVar4;
	undefined4 in_stack_ffffffb8;
	undefined uVar5;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	uVar5 = (undefined)in_stack_ffffffb8;
	uVar4 = 0;
	*param_1 = 0;
	uVar1 = *(uint *)(param_1 + 1);
	if (uVar1 >> 0x18 == 1) {
		if ((uVar1 & 1) == 0) {
			EnterNiceEventProcessing((char)uVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, uVar5,
			    in_stack_ffffffbf, local_3c);
			uVar5 = (undefined)in_stack_ffffffb8;
			uVar2 = FUN_10018250(
			    (char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			uVar3 = (undefined)uVar2;
		} else {
			uVar2 = FUN_100182b8(
			    (char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			uVar3 = LeaveNiceEventProcessing((char)uVar2, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
			    uVar5, in_stack_ffffffbf, local_3c);
		}
		uVar2 = FrontWindow(
		    uVar3, param_2, param_3, param_4, param_5, param_6, param_7, param_8, uVar5, in_stack_ffffffbf, local_3c);
		if ((uVar2 & 0xffffffff) != 0) {
			*param_1 = 8;
			uVar4 = 1;
			param_1[7] = (short)*(undefined4 *)(param_1 + 1);
			*(int *)(param_1 + 1) = (int)uVar2;
		}
	}
	return uVar4;
}

void FUN_10015f3c(undefined2 *param_1,
    uint param_2,
    char param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	*(uint *)(param_1 + 1) = (param_2 & 0xff) << 8;
	if (param_3 == '\0') {
		*param_1 = 4;
		FUN_10018224((char)param_1, (char)param_2, 0, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	} else {
		*param_1 = 3;
		FUN_10018200(
		    (char)param_1, (char)param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return;
}

// WARNING: Removing unreachable block (ram,0x10015fc0)

ulonglong FUN_10015f84(undefined8 param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	ulonglong uVar2;
	ushort *puVar3;
	undefined4 in_stack_ffffffb8;
	undefined4 local_18;
	undefined2 local_14;
	undefined2 uStack18;
	undefined2 local_10;
	undefined2 uStack14;
	undefined2 local_c;
	ushort uStack10;

	iVar1 = 0x100f8fd0;
	uVar2 = FUN_10017e5c(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	if (((uVar2 & 0xff) == 0) && (puVar3 = (ushort *)param_1, *puVar3 < 9)) {
		if ((*(ushort *)(iVar1 + -0x5062) != puVar3[6]) || (*(ushort *)(iVar1 + -0x5064) != puVar3[5])) {
			FUN_10018028((int)puVar3, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			*(undefined4 *)(iVar1 + -0x5064) = *(undefined4 *)(puVar3 + 5);
		}
		if (*(ushort *)(iVar1 + -0x5052) != puVar3[7]) {
			local_18 = *(undefined4 *)(iVar1 + -0x2f34);
			local_14 = (undefined2)((uint) * (undefined4 *)(iVar1 + -0x2f30) >> 0x10);
			uStack18 = (undefined2)((uint) * (undefined4 *)(puVar3 + 3) >> 0x10);
			local_10 = (undefined2) * (undefined4 *)(puVar3 + 3);
			uStack14 = (undefined2)((uint) * (undefined4 *)(puVar3 + 5) >> 0x10);
			local_c = (undefined2) * (undefined4 *)(puVar3 + 5);
			uStack10 = puVar3[7];
			*(ushort *)(iVar1 + -0x5052) = *(ushort *)(iVar1 + -0x5052) ^ puVar3[7];
			if ((*(ushort *)(iVar1 + -0x5052) & 0x100) != 0) {
				FUN_10015f3c((undefined2 *)&local_18, 0x37, '\x01' - ((puVar3[7] & 0x100) == 0), param_4, param_5,
				    param_6, param_7, param_8, in_stack_ffffffb8);
			}
			if ((*(ushort *)(iVar1 + -0x5052) & 0x200) != 0) {
				FUN_10015f3c((undefined2 *)&local_18, 0x38, '\x01' - ((puVar3[7] & 0x200) == 0), param_4, param_5,
				    param_6, param_7, param_8, in_stack_ffffffb8);
			}
			if ((*(ushort *)(iVar1 + -0x5052) & 0x400) != 0) {
				FUN_10015f3c((undefined2 *)&local_18, 0x39, '\x01' - ((puVar3[7] & 0x400) == 0), param_4, param_5,
				    param_6, param_7, param_8, in_stack_ffffffb8);
			}
			if ((*(ushort *)(iVar1 + -0x5052) & 0x800) != 0) {
				FUN_10015f3c((undefined2 *)&local_18, 0x3a, '\x01' - ((puVar3[7] & 0x800) == 0), param_4, param_5,
				    param_6, param_7, param_8, in_stack_ffffffb8);
			}
			if ((*(ushort *)(iVar1 + -0x5052) & 0x1000) != 0) {
				FUN_10015f3c((undefined2 *)&local_18, 0x3b, '\x01' - ((puVar3[7] & 0x1000) == 0), param_4, param_5,
				    param_6, param_7, param_8, in_stack_ffffffb8);
			}
			*(ushort *)(iVar1 + -0x5052) = puVar3[7];
		}
	}
	return uVar2;
}

void FUN_10016150(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_10017e98(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_10016170(char param_1,
    char param_2,
    undefined param_3,
    undefined param_4,
    char param_5,
    char param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined4 uVar2;
	undefined4 uVar3;
	undefined *puVar4;
	char cVar5;
	int *piVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	int nHeight;
	int bRepaint;

	bRepaint = (int)param_6;
	nHeight = (int)param_5;
	puVar4 = (undefined *)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)puVar4 = register0x0000000c;
	piVar6 = (int *)GetGrayRgn(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, puVar4[0xb],
	    puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
	uVar1 = *(undefined4 *)(*(int *)(puVar4 + 0x14) + -0x5060);
	uVar8 = 0xf0;
	uVar2 = *(undefined4 *)(*piVar6 + 2);
	uVar9 = (undefined)uVar2;
	uVar3 = *(undefined4 *)(*piVar6 + 6);
	*(undefined4 *)(puVar4 + 0x40) = uVar2;
	*(undefined4 *)(puVar4 + 0x44) = uVar3;
	*(undefined4 *)(puVar4 + 0x38) = uVar1;
	uVar7 = (undefined) * (undefined4 *)((int)param_1 + 10);
	DragWindow(param_2, uVar7, 0xf0, uVar9, (char)nHeight, (char)bRepaint, param_7, param_8, puVar4[0xb], puVar4[0xf],
	    *(undefined4 *)(puVar4 + 0x14));
	cVar5 = (char)(ZEXT48(register0x0000000c) - 0x50);
	GetPort(cVar5 + '<', uVar7, uVar8, uVar9, (char)nHeight, (char)bRepaint, param_7, param_8, puVar4[0xb], puVar4[0xf],
	    *(undefined4 *)(puVar4 + 0x14));
	SetPort(param_2, uVar7, uVar8, uVar9, (char)nHeight, (char)bRepaint, param_7, param_8, puVar4[0xb], puVar4[0xf],
	    *(undefined4 *)(puVar4 + 0x14));
	LocalToGlobal(cVar5 + '8', uVar7, uVar8, uVar9, (char)nHeight, (char)bRepaint, param_7, param_8, puVar4[0xb],
	    puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
	SetPort((char)*(undefined4 *)(puVar4 + 0x3c), uVar7, uVar8, uVar9, (char)nHeight, (char)bRepaint, param_7, param_8,
	    puVar4[0xb], puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
	*(ushort *)(puVar4 + 0x3a) = *(short *)(puVar4 + 0x3a) + 3U & 0xfff8;
	MoveWindow(
	    (int)param_2, (int)*(short *)(puVar4 + 0x3a), (int)*(short *)(puVar4 + 0x38), 0, nHeight, bRepaint, *puVar4);
	fnMenu(**(undefined4 **)(*(int *)(puVar4 + 0x14) + -0x7818), *puVar4);
	return;
}

void FUN_10016248(char param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	short sVar2;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	sVar2 = FindWindow((char)*(undefined4 *)((int)param_1 + 10), (char)(ZEXT48(register0x0000000c) - 0x50) + '8',
	    param_3, param_4, param_5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
	    *(undefined4 *)(iVar1 + 0x14));
	if (((longlong)sVar2 & 0xffffffffU) < 9) {
		// WARNING: Could not recover jumptable at 0x1001628c. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(*(int *)(iVar1 + 0x14) + -0x2f24 + (int)sVar2 * 4))();
		return;
	}
	return;
}

void FUN_100162f8(int param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_10018108(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10016318(short *param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined uVar3;
	uint uVar2;
	undefined8 uVar1;
	char cVar4;
	char cVar5;
	undefined uVar6;
	uint uVar7;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	uVar3 = 0xb4;
	_DAT_101271b4 = 0;
	uVar7 = 0;
	cVar4 = (char)*(undefined4 *)(param_1 + 1);
	if (((param_1[7] & 0x100U) != 0) && (cVar4 == '.')) {
		_DAT_101271b4 = 1;
	}
	uVar6 = (undefined)_DAT_101271b4;
	cVar5 = cVar4;
	if (_DAT_101271b4 != 0) {
		cVar5 = cVar4;
		uVar3 = Msg_CommandPeriod(0xb4, cVar4, uVar6, param_4, param_5, param_6, param_7, param_8,
		    (char)in_stack_ffffffb8, in_stack_ffffffbf, local_3c);
	}
	if ((param_1[7] & 0x100U) != 0) {
		if (*param_1 != 5) {
			FUN_10015c88(uVar3, cVar5, uVar6, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
			uVar2 = MenuKey(cVar4, cVar5, uVar6, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffb8,
			    in_stack_ffffffbf, local_3c);
			if ((uVar2 & 0xff) != 0) {
				uVar1 = FUN_10015ccc(uVar2, cVar5, uVar6, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
				uVar7 = (uint)uVar1;
			}
		}
	}
	if ((uVar7 & 0xff) == 0) {
		FUN_10018200((char)param_1, cVar5, uVar6, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	}
	return;
}

void FUN_100163e4(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	FUN_10018224(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void FUN_10016404(char param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined uVar2;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	GetPort((char)(ZEXT48(register0x0000000c) - 0x50) + '8', param_2, param_3, param_4, param_5, param_6, param_7,
	    param_8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	uVar2 = (undefined) * (undefined4 *)((int)param_1 + 2);
	SetPort(uVar2, param_2, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	BeginUpdate(uVar2, param_2, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	FUN_10018314(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined4 *)(iVar1 + 8));
	EndUpdate(uVar2, param_2, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	SetPort((char)*(undefined4 *)(iVar1 + 0x38), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	return;
}

void FUN_1001647c(void)

{
	return;
}

void FUN_10016480(int param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined uVar2;
	undefined uVar3;
	undefined uVar4;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	if ((short)((uint) * (undefined4 *)(param_1 + 2) >> 0x10) != 0) {
		DILoad((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
		    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
		uVar4 = 0x4b;
		SetPt((char)(ZEXT48(register0x0000000c) - 0x50) + '8', 100, 0x4b, param_4, param_5, param_6, param_7, param_8,
		    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
		uVar3 = (undefined) * (undefined4 *)(param_1 + 2);
		uVar2 = DIBadMount((char)*(undefined4 *)(iVar1 + 0x38), uVar3, uVar4, param_4, param_5, param_6, param_7,
		    param_8, *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
		DIUnload(uVar2, uVar3, uVar4, param_4, param_5, param_6, param_7, param_8, *(undefined *)(iVar1 + 0xb),
		    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	}
	return;
}

void FUN_100164f0(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	AEProcessAppleEvent(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	return;
}

void FUN_10016514(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	FUN_10018248();
	return;
}

ulonglong FUN_10016534(void)

{
	return (ulonglong)(*(int *)(iRam00000b60 + 2) != 0);
}

ulonglong FUN_1001654c(short *param_1,
    undefined param_2,
    char param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	short sVar2;
	int iVar3;
	undefined *puVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	undefined8 uVar9;
	int iVar10;
	int iVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	uint uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;

	uVar16 = SUB41(param_1, 0);
	bVar6 = false;
	bVar8 = false;
	bVar5 = false;
	puVar4 = (undefined *)(ZEXT48(register0x0000000c) - 0x70);
	*(BADSPACEBASE **)puVar4 = register0x0000000c;
	uVar17 = uVar16;
	uVar12 = OSEventAvail(0xff, uVar16, param_3, param_4, param_5, param_6, param_7, param_8, puVar4[0xb], puVar4[0xf],
	    *(undefined4 *)(puVar4 + 0x14));
	uVar13 = FUN_10016534(*puVar4);
	if ((uVar13 & 0xff) != 0) {
		NiceEventProcessingForDuration(0x3c, uVar17, param_3, param_4, param_5, param_6, param_7, param_8, puVar4[0xb],
		    puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
	}
	iVar3 = *(int *)(param_1 + 3);
	uVar14 = IsNiceEventProcessing((char)iVar3, uVar17, param_3, param_4, param_5, param_6, param_7, param_8,
	    puVar4[0xb], puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
	uVar15 = (undefined)uVar14;
	iVar11 = *(int *)(puVar4 + 0x14);
	if (((uVar14 & 0xff) != 0) || ((param_1[7] & 0x1b00U) == 0x1b00)) {
		bVar5 = true;
		bVar6 = true;
	}
	bVar1 = false;
	if ((uVar12 & 0xff) != 0) {
		bVar1 = DAT_101271b8 == '\0';
		sVar2 = *param_1;
		uVar15 = (undefined)sVar2;
		bVar6 = (bool)(bVar6 | !bVar1);
		if (sVar2 == 3) {
			uVar17 = 0;
			param_3 = (char)*(undefined4 *)(param_1 + 1);
			uVar9 = countLeadingZeros(0x1100 - ((uint)(ushort)param_1[7] & 0x1100));
			uVar14 = (uint)uVar9 >> 5;
			uVar15 = (undefined)uVar14;
			if ((((param_1[7] & 0x300U) == 0x300) && ('/' < param_3)) && (param_3 < ':')) {
				bVar6 = true;
				uVar17 = 0;
				uVar15 = NiceEventProcessingForDuration(0x78, 0, param_3, param_4, param_5, param_6, param_7, param_8,
				    puVar4[0xb], puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
				iVar11 = *(int *)(puVar4 + 0x14);
				bVar8 = true;
			} else {
				if (((uVar14 & 0xff) != 0) && (param_3 == '/')) {
					bVar6 = true;
					uVar17 = 0;
					uVar15 = NiceEventProcessingForDuration(0x78, 0, 0x2f, param_4, param_5, param_6, param_7, param_8,
					    puVar4[0xb], puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
					iVar11 = *(int *)(puVar4 + 0x14);
				}
			}
		} else {
			if (sVar2 == 7) {
				bVar6 = true;
				uVar15 = NiceEventProcessingForDuration(0x78, uVar17, param_3, param_4, param_5, param_6, param_7,
				    param_8, puVar4[0xb], puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
				iVar11 = *(int *)(puVar4 + 0x14);
			}
		}
	}
	bVar7 = false;
	if (!bVar6) {
		uVar15 = (undefined) * (int *)(iVar11 + -0x5058);
		iVar10 = iVar3 - *(int *)(iVar11 + -0x5058);
		if (DAT_101271b8 == '\0') {
			if (0x78 < iVar10) {
				bVar7 = true;
				uVar14 = CheckUpdate((char)(ZEXT48(register0x0000000c) - 0x70) + '8', uVar17, param_3, param_4, param_5,
				    param_6, param_7, param_8, puVar4[0xb], puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
				uVar15 = (undefined)uVar14;
				iVar11 = *(int *)(puVar4 + 0x14);
				if ((uVar14 & 0xff) != 0) {
					bVar7 = true;
					bVar6 = true;
				}
			}
		} else {
			if (0xf < iVar10) {
				bVar6 = true;
			}
		}
	}
	if (bVar6) {
		bVar6 = true;
		if ((!bVar5) && (DAT_101271b8 == '\0')) {
			bVar6 = false;
		}
		if (bVar6) {
			uVar17 = 5;
		} else {
			uVar17 = 0;
		}
		uVar15 = 0;
		uVar12 = WaitNextEvent(0xff, uVar16, uVar17, 0, param_5, param_6, param_7, param_8, puVar4[0xb], puVar4[0xf],
		    *(undefined4 *)(puVar4 + 0x14));
		iVar11 = *(int *)(puVar4 + 0x14);
		*(int *)(iVar11 + -0x5058) = iVar3;
		LMSetSysEvtMask((char)*(undefined2 *)(iVar11 + -0x5054), uVar16, uVar17, uVar15, param_5, param_6, param_7,
		    param_8, puVar4[0xb], puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
		iVar11 = *(int *)(puVar4 + 0x14);
	} else {
		if (bVar7) {
			SystemTask(uVar15, uVar17, param_3, param_4, param_5, param_6, param_7, param_8, puVar4[0xb], puVar4[0xf],
			    *(undefined4 *)(puVar4 + 0x14));
			iVar11 = *(int *)(puVar4 + 0x14);
			*(int *)(iVar11 + -0x5058) = iVar3;
		}
		if (bVar1) {
			uVar12 = GetOSEvent(0xff, uVar16, param_3, param_4, param_5, param_6, param_7, param_8, puVar4[0xb],
			    puVar4[0xf], *(undefined4 *)(puVar4 + 0x14));
			iVar11 = *(int *)(puVar4 + 0x14);
		}
	}
	if (bVar8) {
		fnMenu(**(undefined4 **)(iVar11 + -0x7818), *puVar4);
	}
	return uVar12;
}

undefined8 FUN_100167c0(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	ushort uVar1;
	undefined *puVar2;
	char cVar3;
	int iVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	undefined8 uVar7;
	uint uVar8;
	undefined8 unaff_r31;

	uVar6 = ZEXT48(register0x0000000c);
	iVar4 = 0x100f8fd0;
	puVar2 = (undefined *)(uVar6 - 0x60);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	FUN_1001654c((short *)(puVar2 + 0x40), param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    *(undefined4 *)(puVar2 + 8));
	if (*(short *)(puVar2 + 0x40) == 7) {
		unaff_r31 = 1;
	}
	uVar5 = FUN_10015f84(
	    uVar6 - 0x20, param_2, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined4 *)(puVar2 + 8));
	cVar3 = (char)(uVar6 - 0x60);
	if ((uVar5 & 0xff) == 0) {
		uVar1 = *(ushort *)(puVar2 + 0x40);
		if (uVar1 == 0xf) {
			uVar5 = FUN_10015e94((undefined2 *)(puVar2 + 0x40), param_2, param_3, param_4, param_5, param_6, param_7,
			    param_8, *(undefined4 *)(puVar2 + 8));
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
				uVar7 = (**(code **)(iVar4 + -0x2f00 + (uint)uVar1 * 4))();
				return uVar7;
			}
			FUN_10016514(
			    cVar3 + '@', param_2, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined4 *)(puVar2 + 8));
		}
	}
	uVar8 = FUN_10016150(
	    cVar3 + '@', param_2, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined4 *)(puVar2 + 8));
	if ((uVar8 & 0xff) != 0) {
		unaff_r31 = 1;
	}
	return unaff_r31;
}

int FUN_100168f8(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	longlong hWnd;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	iVar1 = GetNewMBar(0x80, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	if (iVar1 != 0) {
		SetMenuBar((char)iVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
		DisposeHandle((char)iVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
		hWnd = GetMenuHandle(0x80, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
		hWnd._4_4_ = (HWND)hWnd;
		if (hWnd != 0) {
			AppendResMenu((char)hWnd, 0x52, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
			    in_stack_ffffffcf, local_2c);
			hWnd._4_4_ = (HWND)DisableItem((char)hWnd, 1, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		}
		iVar1 = DrawMenuBar(hWnd._4_4_);
	}
	return iVar1;
}

void FUN_10016988(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined uVar2;
	undefined uVar3;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	uVar1 = NewRoutineDescriptor(
	    0xb0, 0xe0, 1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	uVar2 = NewRoutineDescriptor((char)*(undefined4 *)(local_3c + -0x7824), 0xe0, 1, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	uVar3 = NewRoutineDescriptor((char)*(undefined4 *)(local_3c + -0x7828), 0xe0, 1, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	AEInstallEventHandler(
	    0x74, 0x70, uVar1, 0, 0, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	AEInstallEventHandler(
	    0x74, 99, uVar2, 0, 0, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	AEInstallEventHandler(
	    0x74, 0x74, uVar3, 0, 0, param_6, param_7, param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	return;
}

undefined8 FUN_10016af4(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	char cVar2;
	undefined8 uVar3;

	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x40);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0x40);
	uVar3 = AEGetAttributePtr(param_1, 0x73, 0x2a, cVar2 + '8', 0, 0, cVar2 + '<', param_8, *(undefined *)(iVar1 + 0xb),
	    *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	if ((short)uVar3 == -0x6a5) {
		uVar3 = 0;
	} else {
		if ((short)uVar3 == 0) {
			uVar3 = 0xfffffffffffff954;
		}
	}
	return uVar3;
}

undefined8 FUN_10016b58(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined uVar2;
	undefined2 uVar1;
	undefined4 in_stack_ffffffc8;
	undefined uVar3;
	undefined in_stack_ffffffcf;
	int local_2c;

	uVar2 = EnableMemFile2(1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, (char)in_stack_ffffffc8,
	    in_stack_ffffffcf, local_2c);
	uVar2 = FUN_100168f8(uVar2, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	uVar3 = (undefined)in_stack_ffffffc8;
	uVar2 = FUN_10016988(uVar2, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	uVar1 = LMGetSysEvtMask(
	    uVar2, param_2, param_3, param_4, param_5, param_6, param_7, param_8, uVar3, in_stack_ffffffcf, local_2c);
	*(undefined2 *)(local_2c + -0x5054) = uVar1;
	*(ushort *)(local_2c + -0x5054) = *(ushort *)(local_2c + -0x5054) | 0x10;
	if (*(int *)(local_2c + -0x7868) != 0) {
		LogFile_SetLogName((char)*(undefined4 *)(local_2c + -0x67f0), param_2, param_3, param_4, param_5, param_6,
		    param_7, param_8, uVar3, in_stack_ffffffcf, local_2c);
	}
	return 1;
}

void FUN_10016bbc(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	MacInitCursor(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	return;
}

undefined8 FUN_10016be0(undefined param_1,
    char param_2,
    char param_3,
    char param_4,
    char param_5,
    char param_6,
    char param_7,
    char param_8,
    undefined4 param_9)

{
	int iVar1;
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
	iVar1 = 0x100f8fd0;
	uVar2 = FUN_10016b58(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	uVar3 = FUN_10017d5c((char)uVar2, (char)lVar5, (char)lVar7, (char)lVar9, (char)lVar11, (char)lVar13, (char)lVar15,
	    (char)lVar17, in_stack_ffffffc8);
	uVar18 = (undefined)lVar17;
	uVar16 = (undefined)lVar15;
	uVar14 = (undefined)lVar13;
	uVar12 = (undefined)lVar11;
	uVar10 = (undefined)lVar9;
	uVar8 = (undefined)lVar7;
	uVar6 = (undefined)lVar5;
	uVar4 = (undefined)uVar3;
	if ((uVar3 & 0xff) != 0) {
		LMSetSysEvtMask((char)*(undefined2 *)(iVar1 + -0x5054), uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, uVar18,
		    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
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
		uVar4 = FUN_10017e34((char)uVar3, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, uVar18, in_stack_ffffffc8);
	}
	FUN_10016bbc(uVar4, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, uVar18, in_stack_ffffffc8);
	return 0;
}

void dx_init(HWND hWnd)

{
	undefined uVar1;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	SetFocus((HWND)hWnd);
	ShowWindow__FP6HWND__i(
	    (char)hWnd, 1, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	*(undefined4 *)(local_3c + -0x2448) = 1;
	uVar1 = SDrawVidDriverInitialize(
	    (char)hWnd, 1, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	palette_init();
	SDrawUpdatePalette(0, 0, uVar1, 1, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	**(undefined4 **)(local_3c + -0x7800) = 1;
	return;
}

void lock_buf_priv(void)

{
	int *piVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;

	puVar2 = (undefined *)(ZEXT48(register0x0000000c) - 0x40);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	EnterCriticalSection(&DAT_101271bc, *puVar2);
	iVar3 = *(int *)(puVar2 + 0x14);
	if (*(int *)(iVar3 + -0x5044) == 0) {
		iVar4 = SDrawLockSurface(3, 0, (char)(ZEXT48(register0x0000000c) - 0x40) + '8', 0, 0, in_r8, in_r9, in_r10,
		    puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		iVar3 = *(int *)(puVar2 + 0x14);
		if (iVar4 != 0) {
			iVar4 = *(int *)(puVar2 + 0x38);
			piVar1 = *(int **)(iVar3 + -0x7808);
			**(int **)(iVar3 + -0x7804) = iVar4;
			*piVar1 = *piVar1 + iVar4;
		}
	}
	*(int *)(iVar3 + -0x5044) = *(int *)(iVar3 + -0x5044) + 1;
	return;
}

void lock_buf(BYTE idx)

{
	lock_buf_priv();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void unlock_buf_priv(void)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	iVar3 = 0x100f8fd0;
	if (_DAT_100f3f8c == 0) {
		iVar3 = 0x100f8fd0;
		app_fatal("draw main unlock error");
	}
	if (_DAT_101271e4 == 0) {
		app_fatal(*(char **)(iVar3 + -0x67d0));
	}
	*(int *)(iVar3 + -0x5044) = *(int *)(iVar3 + -0x5044) + -1;
	iVar2 = _DAT_101271e4;
	if ((*(int *)(iVar3 + -0x5044) == 0) && (_DAT_101271e4 != 0)) {
		piVar1 = *(int **)(iVar3 + -0x7808);
		*piVar1 = *piVar1 - _DAT_101271e4;
		iVar3 = local_3c;
		SDrawUnlockSurface(
		    3, (char)iVar2, 0, 0, (char)piVar1, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		_DAT_101271e4 = 0;
	}
	LeaveCriticalSection(*(LPCRITICAL_SECTION *)(iVar3 + -0x67c8));
	return;
}

void unlock_buf(BYTE idx)

{
	unlock_buf_priv();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dx_cleanup(void)

{
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	fullscreen = 0;
	if (_DAT_1012915c != 0) {
		ShowWindow__FP6HWND__i((char)_DAT_1012915c, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb,
		    in_stack_ffffffcf, local_2c);
	}
	SDrawDestroy();
	EnterCriticalSection((LPCRITICAL_SECTION)&DAT_101271bc);
	*(undefined4 *)(local_2c + -0x5044) = 0;
	**(undefined4 **)(local_2c + -0x7804) = 0;
	LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_101271bc);
	return;
}

void WaitForVerticalBlank(void)

{
	return;
}

ulonglong is_fullscreen(void)

{
	return (ulonglong)(uint)fullscreen;
}

undefined8 IsLost(void)

{
	return 0;
}

undefined8 Restore(void)

{
	return 1;
}

void ResetPal(void)

{
	SDrawRealizePalette();
	return;
}

void SDrawUpdatePalette(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	SDrawUpdatePalette(
	    0, 0, param_1, 1, param_5, param_6, param_7, param_8, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	return;
}

undefined8 Lock(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    char param_6,
    char param_7,
    char param_8,
    undefined4 param_9)

{
	char cVar1;
	bool bVar2;
	code *pcVar3;
	DWORD DVar4;
	DWORD DVar5;
	int iVar6;
	longlong lVar7;
	undefined uVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	undefined8 uVar13;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	lVar11 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar7 = (longlong)param_6;
	uVar13 = 0;
	pcVar3 = vid_exref;
	fnMenu((BOOL)vid_exref);
	if (((uint)pcVar3 & 0xff) == 0) {
		uVar13 = 1;
	} else {
		DVar4 = GetTickCount();
		bVar2 = false;
		do {
			pcVar3 = vid_exref;
			fnMenu((BOOL)vid_exref);
			if (((uint)pcVar3 & 0xff) == 0) {
				pcVar3 = vid_exref;
				fnMenu((BOOL)vid_exref);
				uVar12 = (undefined)lVar11;
				uVar10 = (undefined)lVar9;
				uVar8 = (undefined)lVar7;
				cVar1 = (char)local_3c;
				if (((uint)pcVar3 & 0xff) == 0)
					goto LAB_10016fc0;
			}
			DVar5 = GetTickCount();
			uVar12 = (undefined)lVar11;
			uVar10 = (undefined)lVar9;
			uVar8 = (undefined)lVar7;
			cVar1 = (char)local_3c;
		} while (DVar4 - DVar5 < 0x1389);
		bVar2 = true;
	LAB_10016fc0:
		if (!bVar2) {
			iVar6 = SDrawLockSurface(0, 0, cVar1 + -0x48, cVar1 + -0x4c, 0, uVar8, uVar10, uVar12, in_stack_ffffffbb,
			    in_stack_ffffffbf, local_3c);
			if (iVar6 == 0) {
				*(undefined4 *)(local_3c + -0x5048) = 0;
				*(undefined4 *)(local_3c + -0x504c) = 0;
			} else {
				uVar13 = 1;
			}
		}
	}
	return uVar13;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined Unlock(undefined param_1,
    undefined param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	if (_DAT_100f3f88 != 0) {
		param_1 = SDrawUnlockSurface(0, (char)_DAT_100f3f88, 0, 0, param_5, param_6, param_7, param_8,
		    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
		*(undefined4 *)(local_2c + -0x504c) = 0;
		*(undefined4 *)(local_2c + -0x5048) = 0;
	}
	return param_1;
}

// WARNING: Removing unreachable block (ram,0x100170c4)
// WARNING: Removing unreachable block (ram,0x10017110)

void asm_DoBlitScreen(undefined8 *param_1, undefined8 *param_2, int param_3, int param_4, int param_5, int param_6)

{
	undefined4 uVar1;
	uint uVar2;
	undefined8 *puVar3;
	uint uVar4;
	uint uVar5;
	ulonglong uVar6;
	uint uVar7;
	ulonglong uVar8;
	undefined8 uVar9;

	uVar4 = (uint)param_1 & 4;
	uVar7 = param_3 - uVar4;
	uVar2 = uVar7 >> 6;
	uVar5 = uVar7 >> 3 & 7;
	do {
		if (param_4 == 0) {
			return;
		}
		if (uVar4 != 0) {
			uVar1 = *(undefined4 *)param_2;
			param_2 = (undefined8 *)((int)param_2 + 4);
			*(undefined4 *)param_1 = uVar1;
			param_1 = (undefined8 *)((int)param_1 + 4);
		}
		uVar8 = (ulonglong)uVar5;
		if (uVar5 != 0) {
			do {
				uVar9 = *param_2;
				param_2 = param_2 + 1;
				*param_1 = uVar9;
				param_1 = param_1 + 1;
				uVar8 = uVar8 - 1;
			} while (uVar8 != 0);
		}
		if (uVar2 != 0) {
			uVar6 = (ulonglong)(uVar7 >> 8);
			uVar8 = (ulonglong)uVar2;
			if (uVar7 >> 8 != 0) {
				do {
					*param_1 = *param_2;
					param_1[1] = param_2[1];
					param_1[2] = param_2[2];
					param_1[3] = param_2[3];
					param_1[4] = param_2[4];
					param_1[5] = param_2[5];
					param_1[6] = param_2[6];
					param_1[7] = param_2[7];
					param_1[8] = param_2[8];
					param_1[9] = param_2[9];
					param_1[10] = param_2[10];
					param_1[0xb] = param_2[0xb];
					param_1[0xc] = param_2[0xc];
					param_1[0xd] = param_2[0xd];
					param_1[0xe] = param_2[0xe];
					param_1[0xf] = param_2[0xf];
					param_1[0x10] = param_2[0x10];
					param_1[0x11] = param_2[0x11];
					param_1[0x12] = param_2[0x12];
					param_1[0x13] = param_2[0x13];
					param_1[0x14] = param_2[0x14];
					param_1[0x15] = param_2[0x15];
					param_1[0x16] = param_2[0x16];
					param_1[0x17] = param_2[0x17];
					param_1[0x18] = param_2[0x18];
					param_1[0x19] = param_2[0x19];
					param_1[0x1a] = param_2[0x1a];
					param_1[0x1b] = param_2[0x1b];
					param_1[0x1c] = param_2[0x1c];
					param_1[0x1d] = param_2[0x1d];
					param_1[0x1e] = param_2[0x1e];
					puVar3 = param_2 + 0x1f;
					param_2 = param_2 + 0x20;
					param_1[0x1f] = *puVar3;
					param_1 = param_1 + 0x20;
					uVar6 = uVar6 - 1;
				} while (uVar6 != 0);
				uVar8 = (ulonglong)uVar2 & 3;
				if ((uVar2 & 3) == 0)
					goto LAB_100172ac;
			}
			do {
				*param_1 = *param_2;
				param_1[1] = param_2[1];
				param_1[2] = param_2[2];
				param_1[3] = param_2[3];
				param_1[4] = param_2[4];
				param_1[5] = param_2[5];
				param_1[6] = param_2[6];
				puVar3 = param_2 + 7;
				param_2 = param_2 + 8;
				param_1[7] = *puVar3;
				param_1 = param_1 + 8;
				uVar8 = uVar8 - 1;
			} while (uVar8 != 0);
		}
	LAB_100172ac:
		if ((uVar7 & 4) != 0) {
			uVar1 = *(undefined4 *)param_2;
			param_2 = (undefined8 *)((int)param_2 + 4);
			*(undefined4 *)param_1 = uVar1;
			param_1 = (undefined8 *)((int)param_1 + 4);
		}
		param_2 = (undefined8 *)((int)param_2 + param_6);
		param_1 = (undefined8 *)((int)param_1 + param_5);
		param_4 = param_4 + -1;
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DoBlitScreen(DWORD dwX, DWORD dwY, DWORD dwWdt, DWORD dwHgt)

{
	undefined4 uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	undefined8 *puVar5;
	DWORD DVar6;
	DWORD DVar7;
	code *pcVar8;
	undefined8 *puVar9;
	ulonglong uVar10;
	longlong lVar11;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	int iVar12;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	DWORD local_34;
	DWORD local_30;
	int local_2c;
	int local_28;
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar11 = (longlong)(int)dwHgt;
	iVar4 = 0x100f8fd0;
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	if (_DAT_100f3f88 == 0) {
		local_28 = dwX + dwWdt;
		local_2c = dwY + dwHgt;
		local_34 = dwY;
		local_30 = dwX;
		DVar6 = GetTickCount();
		bVar2 = false;
		do {
			pcVar8 = vid_exref;
			fnMenu((BOOL)vid_exref);
			if ((((uint)pcVar8 & 0xff) == 0) && (pcVar8 = vid_exref, fnMenu((BOOL)vid_exref), ((uint)pcVar8 & 0xff) == 0))
				goto LAB_10017430;
			DVar7 = GetTickCount();
		} while (DVar6 - DVar7 < 0x1389);
		bVar2 = true;
	LAB_10017430:
		if (!bVar2) {
			fnMenu((BOOL)&local_34);
		}
	} else {
		iVar3 = dwY * _DAT_100f3f84;
		iVar12 = _DAT_100f3f84 - dwWdt;
		lock_buf('\x06');
		puVar5 = (undefined8 *)(*(int *)(iVar4 + -0x5048) + dwX + iVar3);
		puVar9 = (undefined8 *)(dwX + (dwY + 0xa0) * 0x300 + 0x40 + **(int **)(iVar4 + -0x7804));
		if (((uint)puVar9 & 7) == ((uint)puVar5 & 7)) {
			asm_DoBlitScreen(puVar5, puVar9, dwWdt, dwHgt, iVar12, 0x300 - dwWdt);
		} else {
			uVar10 = (ulonglong)(dwWdt >> 2);
			do {
				do {
					uVar1 = *(undefined4 *)puVar9;
					uVar10 = uVar10 - 1;
					puVar9 = (undefined8 *)((int)puVar9 + 4);
					*(undefined4 *)puVar5 = uVar1;
					puVar5 = (undefined8 *)((int)puVar5 + 4);
				} while (uVar10 != 0);
				lVar11 = lVar11 + -1;
				puVar9 = (undefined8 *)((int)puVar9 + (0x300 - dwWdt));
				puVar5 = (undefined8 *)((int)puVar5 + iVar12);
				uVar10 = (ulonglong)(dwWdt >> 2);
			} while (lVar11 != 0);
		}
		unlock_buf('\x06');
	}
	return;
}

void MessageBox(undefined param_1,
    char param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined uVar1;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	if (*(int *)(int)param_2 == 0) {
		uVar1 = 0x40;
	} else {
		uVar1 = 0x10;
	}
	SDrawMessageBox(param_1, 0xa6, uVar1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffcb,
	    in_stack_ffffffcf, local_2c);
	return;
}
