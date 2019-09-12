
void ClearCursor(void)

{
	_DAT_100f440c = 0;
	_DAT_100f441c = 0;
	return;
}

ulonglong scrollrt_draw_cursor_back_buffer(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	int iVar2;
	ulonglong uVar3;
	int iVar4;
	ulonglong uVar5;
	longlong lVar6;

	uVar5 = SEXT18(param_1);
	uVar3 = ZEXT48(&toc);
	if (_DAT_100f441c != 0) {
		uVar5 = (ulonglong)_DAT_100f374c;
		lVar6 = (ulonglong) * (uint *)PTR_DAT_100f17cc + ((ulonglong)_DAT_100f4420 + 0xa0) * 0x300 + (ulonglong)_DAT_100f4424 + 0x40;
		iVar4 = _DAT_100f4418;
		while (true) {
			bVar1 = iVar4 == 0;
			iVar4 = iVar4 + -1;
			iVar2 = (int)uVar3;
			if (bVar1)
				break;
			memcpy(lVar6, uVar5, (ulonglong) * (uint *)(iVar2 + -0x4bb4));
			lVar6 = lVar6 + 0x300;
			uVar5 = uVar5 + (ulonglong) * (uint *)((int)uVar3 + -0x4bb4);
		}
		uVar5 = (ulonglong) * (uint *)(iVar2 + -0x4bb8);
		*(undefined4 *)(iVar2 + -0x4bbc) = *(undefined4 *)(iVar2 + -0x4bac);
		*(undefined4 *)(iVar2 + -0x4bc0) = *(undefined4 *)(iVar2 + -0x4bb0);
		*(undefined4 *)(iVar2 + -0x4bc4) = *(undefined4 *)(iVar2 + -0x4bb4);
		*(uint *)(iVar2 + -0x4bc8) = *(uint *)(iVar2 + -0x4bb8);
		*(undefined4 *)(iVar2 + -0x4bb4) = 0;
	}
	return uVar5;
}

void scrollrt_draw_cursor_item(void)

{
	bool bVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	longlong lVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	int iVar14;
	undefined8 in_r10;
	undefined4 uVar15;
	char cVar16;
	ulonglong uVar17;
	longlong lVar18;
	uint uVar19;
	undefined4 in_stack_ffffff98;

	puVar10 = PTR_DAT_100f199c;
	puVar9 = PTR_DAT_100f1980;
	puVar8 = PTR_DAT_100f197c;
	puVar7 = PTR_DAT_100f188c;
	puVar6 = PTR_DAT_100f1828;
	puVar5 = PTR_DAT_100f17cc;
	uVar13 = ZEXT48(&toc);
	if (((0 < *(int *)PTR_DAT_100f188c) && (*(int *)PTR_DAT_100f1980 != 0)) && (*(int *)PTR_DAT_100f197c != 0)) {
		lVar11 = (ulonglong) * (uint *)PTR_DAT_100f1928 - 1;
		if (lVar11 < 0) {
			lVar11 = 0;
		} else {
			if (0x27f < (int)lVar11) {
				return;
			}
		}
		uVar12 = (ulonglong) * (uint *)PTR_DAT_100f1924 - 1;
		if ((longlong)uVar12 < 0) {
			uVar12 = 0;
		} else {
			if (0x1df < (int)uVar12) {
				return;
			}
		}
		uVar19 = (uint)lVar11;
		_DAT_100f441c = uVar19 + *(int *)PTR_DAT_100f1980 + 1;
		if (0x27f < _DAT_100f441c) {
			_DAT_100f441c = 0x27f;
		}
		_DAT_100f4424 = uVar19 & 0xfffffffc;
		_DAT_100f4420 = (int)uVar12;
		_DAT_100f441c = (_DAT_100f441c | 3) + (1 - _DAT_100f4424);
		_DAT_100f4418 = _DAT_100f4420 + *(int *)PTR_DAT_100f197c + 1;
		if (0x1df < _DAT_100f4418) {
			_DAT_100f4418 = 0x1df;
		}
		iVar14 = _DAT_100f4418 + (1 - _DAT_100f4420);
		uVar17 = (ulonglong)_DAT_100f374c;
		lVar18 = (ulonglong) * (uint *)PTR_DAT_100f17cc + ((uVar12 & 0xffffffff) + 0xa0) * 0x300 + (ulonglong)_DAT_100f4424 + 0x40;
		_DAT_100f4418 = iVar14;
		while (true) {
			bVar1 = iVar14 == 0;
			iVar14 = iVar14 + -1;
			iVar4 = (int)uVar13;
			if (bVar1)
				break;
			memcpy(uVar17, lVar18, (ulonglong) * (uint *)(iVar4 + -0x4bb4));
			lVar18 = lVar18 + 0x300;
			uVar17 = uVar17 + (ulonglong) * (uint *)((int)uVar13 + -0x4bb4);
		}
		uVar2 = *(uint *)puVar9;
		**(int **)(iVar4 + -0x7808) = (*(int *)puVar5 + *(int *)(*(int *)(iVar4 + -0x7698) + 0xa00)) - (uVar2 + 2);
		uVar3 = *(uint *)puVar7;
		if ((int)uVar3 < 0xc) {
			Cel2DrawHdrOnly(uVar19 + 0x41, uVar12 + (ulonglong) * (uint *)puVar8 + 0xa0,
			    (ulonglong) * (uint *)puVar10, (ulonglong)uVar3, (ulonglong)uVar2, 0, 8, (int)in_r10,
			    in_stack_ffffff98);
		} else {
			cVar16 = -0x3b;
			iVar14 = **(int **)(iVar4 + -0x77ac) * 0x55ec;
			if (puVar6[iVar14 + 0x5410] != '\0') {
				cVar16 = -0x4b;
			}
			if (*(int *)(puVar6 + iVar14 + 0x5538) == 0) {
				cVar16 = -0x1b;
			}
			uVar15 = 8;
			CelDrawHdrClrHL(cVar16, lVar11 + 0x41, uVar12 + (ulonglong) * (uint *)puVar8 + 0xa0,
			    (ulonglong) * (uint *)puVar10, (ulonglong)uVar3, (ulonglong)uVar2, 0, 8,
			    in_stack_ffffff98);
			if (cVar16 == -0x1b) {
				FUN_1003e170(lVar11 + 0x41, uVar12 + (ulonglong) * (uint *)puVar8 + 0xa0,
				    (ulonglong) * (uint *)puVar10, (ulonglong) * (uint *)puVar7,
				    (ulonglong) * (uint *)puVar9, 0, 8, 1, in_stack_ffffff98);
			} else {
				Cel2DrawHdrOnly(uVar19 + 0x41, uVar12 + (ulonglong) * (uint *)puVar8 + 0xa0,
				    (ulonglong) * (uint *)puVar10, (ulonglong) * (uint *)puVar7,
				    (ulonglong) * (uint *)puVar9, 0, 8, uVar15, in_stack_ffffff98);
			}
		}
	}
	return;
}

void DrawMissile(int param_1, longlong param_2, longlong param_3, ulonglong param_4, ulonglong param_5,
    ulonglong param_6, ulonglong param_7, longlong param_8, undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	longlong lVar8;
	undefined uVar9;
	undefined uVar11;
	longlong lVar10;
	undefined uVar12;
	undefined uVar13;
	int iVar15;
	undefined uVar16;
	ulonglong uVar14;
	undefined uVar17;
	undefined uVar18;
	undefined uVar21;
	undefined uVar22;
	undefined4 uVar20;
	longlong lVar19;
	int iVar23;
	int iVar24;
	longlong lVar25;
	uint *puVar26;
	ulonglong uVar27;
	undefined4 in_stack_ffffff98;

	puVar5 = PTR_DAT_100f1968;
	uVar20 = (undefined4)param_8;
	uVar18 = (undefined)param_7;
	uVar16 = (undefined)param_6;
	uVar13 = (undefined)param_5;
	uVar11 = (undefined)param_3;
	uVar9 = (undefined)param_2;
	uVar12 = (undefined)param_4;
	uVar27 = ZEXT48(PTR_DAT_100f196c);
	iVar3 = (int)param_2;
	cVar1 = *(char *)(*(int *)PTR_DAT_100f1a3c + param_1 * 0x70 + iVar3);
	iVar23 = (int)param_7;
	iVar15 = (int)param_6;
	iVar15 = (int)param_5;
	if (cVar1 == -1) {
		iVar24 = 0;
		lVar10 = param_3;
		uVar6 = param_4;
		uVar7 = param_5;
		uVar14 = param_6;
		puVar26 = (uint *)PTR_DAT_100f1970;
		while (true) {
			uVar18 = (undefined)param_7;
			uVar16 = (undefined)uVar14;
			uVar13 = (undefined)uVar7;
			uVar11 = (undefined)lVar10;
			uVar9 = (undefined)param_2;
			uVar12 = (undefined)uVar6;
			if (*(int *)puVar5 <= iVar24) {
				return;
			}
			if (0x7c < (int)*puVar26) {
				return;
			}
			lVar25 = uVar27 + (ulonglong)*puVar26 * 0xb4;
			iVar4 = (int)lVar25;
			if ((((*(int *)(iVar4 + 4) == param_1) && (*(int *)(iVar4 + 8) == iVar3)) && (*(int *)(iVar4 + 0x6c) == iVar23)) && (*(int *)(iVar4 + 100) != 0))
				break;
		LAB_1009e064:
			puVar26 = puVar26 + 1;
			iVar24 = iVar24 + 1;
		}
		uVar6 = FUN_100b915c((uint *)(iVar4 + 0x40), param_2, lVar10, uVar6, uVar7, (int)uVar14, (int)param_7,
		    (int)param_8, in_stack_ffffff98);
		uVar21 = (undefined)param_8;
		if (uVar6 == 0) {
			FUN_100b91a4((int *)(iVar4 + 0x40), uVar9, uVar11, uVar12, uVar13, uVar16, uVar18, uVar21,
			    in_stack_ffffff98);
		} else {
			if (0 < *(int *)(iVar4 + 0x60)) {
				uVar7 = FUN_1003cdc8((byte *)uVar6);
				uVar21 = (undefined)param_8;
				if ((int)uVar7 < 0x33) {
					uVar7 = FUN_1003cdc8((byte *)uVar6);
					uVar21 = (undefined)param_8;
					uVar2 = *(uint *)(iVar4 + 0x60);
					uVar6 = (ulonglong)uVar2;
					uVar12 = (undefined)uVar2;
					if ((int)uVar2 <= (int)uVar7) {
						param_2 = (ulonglong) * (uint *)(iVar4 + 0x10) + param_4;
						lVar8 = ((ulonglong) * (uint *)(iVar4 + 0xc) + param_3) - (ulonglong) * (uint *)(iVar4 + 0x54);
						if (*(uint *)(iVar4 + 0x70) == 0) {
							if (*(int *)(iVar4 + 0x68) == 0) {
								uVar7 = (ulonglong) * (uint *)(iVar4 + 0x50);
								lVar10 = lVar25 + 0x40;
								uVar14 = param_5;
								param_7 = param_6;
								Cl2DecodeFrm1(lVar8, param_2, lVar10, uVar6, uVar7, iVar15, iVar15, (int)param_8,
								    in_stack_ffffff98);
							} else {
								uVar7 = (ulonglong) * (uint *)(iVar4 + 0x50);
								lVar10 = lVar25 + 0x40;
								uVar14 = param_5;
								param_7 = param_6;
								Cl2DecodeLightTbl(lVar8, param_2, lVar10, uVar6, uVar7, iVar15, iVar15, (int)param_8,
								    in_stack_ffffff98);
							}
						} else {
							uVar7 = (ulonglong) * (uint *)(iVar4 + 0x50);
							param_8 = (ulonglong) * (uint *)(iVar4 + 0x70) + 3;
							lVar10 = lVar25 + 0x40;
							uVar14 = param_5;
							param_7 = param_6;
							Cl2DecodeFrm3(lVar8, param_2, lVar10, uVar6, uVar7, iVar15, iVar15, (int)param_8,
							    in_stack_ffffff98);
						}
						FUN_100b91a4((int *)(iVar4 + 0x40), (char)param_2, (char)lVar10, (char)uVar6, (char)uVar7,
						    (char)uVar14, (char)param_7, (char)param_8, in_stack_ffffff98);
						goto LAB_1009e064;
					}
				}
			}
			FUN_100b91a4((int *)(iVar4 + 0x40), uVar9, uVar11, uVar12, uVar13, uVar16, uVar18, uVar21,
			    in_stack_ffffff98);
		}
	} else {
		lVar10 = uVar27 + ((longlong)cVar1 + -1) * 0xb4;
		iVar3 = (int)lVar10;
		if ((*(int *)(iVar3 + 0x6c) == iVar23) && (*(int *)(iVar3 + 100) != 0)) {
			uVar21 = uVar13;
			uVar17 = uVar16;
			uVar27 = FUN_100b915c((uint *)(iVar3 + 0x40), param_2, param_3, param_4, param_5, iVar15, iVar23,
			    uVar20, in_stack_ffffff98);
			uVar22 = (undefined)uVar20;
			if (uVar27 == 0) {
				FUN_100b91a4((int *)(iVar3 + 0x40), uVar9, uVar11, uVar12, uVar21, uVar17, uVar18, uVar22,
				    in_stack_ffffff98);
			} else {
				if (0 < *(int *)(iVar3 + 0x60)) {
					uVar6 = FUN_1003cdc8((byte *)uVar27);
					uVar22 = (undefined)uVar20;
					if ((int)uVar6 < 0x33) {
						uVar27 = FUN_1003cdc8((byte *)uVar27);
						uVar22 = (undefined)uVar20;
						uVar2 = *(uint *)(iVar3 + 0x60);
						uVar6 = (ulonglong)uVar2;
						uVar12 = (undefined)uVar2;
						if ((int)uVar2 <= (int)uVar27) {
							lVar8 = (ulonglong) * (uint *)(iVar3 + 0x10) + param_4;
							uVar9 = (undefined)lVar8;
							lVar25 = ((ulonglong) * (uint *)(iVar3 + 0xc) + param_3) - (ulonglong) * (uint *)(iVar3 + 0x54);
							if (*(uint *)(iVar3 + 0x70) == 0) {
								if (*(int *)(iVar3 + 0x68) == 0) {
									uVar18 = (undefined) * (uint *)(iVar3 + 0x50);
									uVar11 = (undefined)(lVar10 + 0x40);
									Cl2DecodeFrm1(lVar25, lVar8, lVar10 + 0x40, uVar6, (ulonglong) * (uint *)(iVar3 + 0x50),
									    iVar15, iVar15, uVar20, in_stack_ffffff98);
								} else {
									uVar18 = (undefined) * (uint *)(iVar3 + 0x50);
									uVar11 = (undefined)(lVar10 + 0x40);
									Cl2DecodeLightTbl(lVar25, lVar8, lVar10 + 0x40, uVar6, (ulonglong) * (uint *)(iVar3 + 0x50),
									    iVar15, iVar15, uVar20, in_stack_ffffff98);
								}
							} else {
								uVar18 = (undefined) * (uint *)(iVar3 + 0x50);
								lVar19 = (ulonglong) * (uint *)(iVar3 + 0x70) + 3;
								uVar22 = (undefined)lVar19;
								uVar11 = (undefined)(lVar10 + 0x40);
								Cl2DecodeFrm3(lVar25, lVar8, lVar10 + 0x40, uVar6, (ulonglong) * (uint *)(iVar3 + 0x50),
								    iVar15, iVar15, (int)lVar19, in_stack_ffffff98);
							}
							FUN_100b91a4((int *)(iVar3 + 0x40), uVar9, uVar11, uVar12, uVar18, uVar13, uVar16, uVar22,
							    in_stack_ffffff98);
							return;
						}
					}
				}
				FUN_100b91a4((int *)(iVar3 + 0x40), uVar9, uVar11, uVar12, uVar21, uVar17, uVar18, uVar22,
				    in_stack_ffffff98);
			}
		}
	}
	return;
}

void DrawClippedMissile(int param_1, longlong param_2, longlong param_3, ulonglong param_4, ulonglong param_5,
    ulonglong param_6, ulonglong param_7, longlong param_8, undefined4 param_9)

{
	char cVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	longlong lVar8;
	undefined uVar9;
	undefined uVar11;
	longlong lVar10;
	undefined uVar12;
	undefined uVar13;
	int iVar15;
	undefined uVar16;
	ulonglong uVar14;
	undefined uVar17;
	undefined uVar18;
	undefined uVar21;
	undefined uVar22;
	undefined4 uVar20;
	longlong lVar19;
	int iVar23;
	int iVar24;
	longlong lVar25;
	uint *puVar26;
	ulonglong uVar27;
	undefined4 in_stack_ffffff98;

	puVar5 = PTR_DAT_100f1968;
	uVar20 = (undefined4)param_8;
	uVar18 = (undefined)param_7;
	uVar16 = (undefined)param_6;
	uVar13 = (undefined)param_5;
	uVar11 = (undefined)param_3;
	uVar9 = (undefined)param_2;
	uVar12 = (undefined)param_4;
	uVar27 = ZEXT48(PTR_DAT_100f196c);
	iVar3 = (int)param_2;
	cVar1 = *(char *)(*(int *)PTR_DAT_100f1a3c + param_1 * 0x70 + iVar3);
	iVar23 = (int)param_7;
	iVar15 = (int)param_6;
	iVar15 = (int)param_5;
	if (cVar1 == -1) {
		iVar24 = 0;
		lVar10 = param_3;
		uVar6 = param_4;
		uVar7 = param_5;
		uVar14 = param_6;
		puVar26 = (uint *)PTR_DAT_100f1970;
		while (true) {
			uVar18 = (undefined)param_7;
			uVar16 = (undefined)uVar14;
			uVar13 = (undefined)uVar7;
			uVar11 = (undefined)lVar10;
			uVar9 = (undefined)param_2;
			uVar12 = (undefined)uVar6;
			if (*(int *)puVar5 <= iVar24) {
				return;
			}
			if (0x7c < (int)*puVar26) {
				return;
			}
			lVar25 = uVar27 + (ulonglong)*puVar26 * 0xb4;
			iVar4 = (int)lVar25;
			if ((((*(int *)(iVar4 + 4) == param_1) && (*(int *)(iVar4 + 8) == iVar3)) && (*(int *)(iVar4 + 0x6c) == iVar23)) && (*(int *)(iVar4 + 100) != 0))
				break;
		LAB_1009e308:
			puVar26 = puVar26 + 1;
			iVar24 = iVar24 + 1;
		}
		uVar6 = FUN_100b915c((uint *)(iVar4 + 0x40), param_2, lVar10, uVar6, uVar7, (int)uVar14, (int)param_7,
		    (int)param_8, in_stack_ffffff98);
		uVar21 = (undefined)param_8;
		if (uVar6 == 0) {
			FUN_100b91a4((int *)(iVar4 + 0x40), uVar9, uVar11, uVar12, uVar13, uVar16, uVar18, uVar21,
			    in_stack_ffffff98);
		} else {
			if (0 < *(int *)(iVar4 + 0x60)) {
				uVar7 = FUN_1003cdc8((byte *)uVar6);
				uVar21 = (undefined)param_8;
				if ((int)uVar7 < 0x33) {
					uVar7 = FUN_1003cdc8((byte *)uVar6);
					uVar21 = (undefined)param_8;
					uVar2 = *(uint *)(iVar4 + 0x60);
					uVar6 = (ulonglong)uVar2;
					uVar12 = (undefined)uVar2;
					if ((int)uVar2 <= (int)uVar7) {
						param_2 = (ulonglong) * (uint *)(iVar4 + 0x10) + param_4;
						lVar8 = ((ulonglong) * (uint *)(iVar4 + 0xc) + param_3) - (ulonglong) * (uint *)(iVar4 + 0x54);
						if (*(uint *)(iVar4 + 0x70) == 0) {
							if (*(int *)(iVar4 + 0x68) == 0) {
								uVar7 = (ulonglong) * (uint *)(iVar4 + 0x50);
								lVar10 = lVar25 + 0x40;
								uVar14 = param_5;
								param_7 = param_6;
								Cl2DecodeFrm4(lVar8, param_2, lVar10, uVar6, uVar7, iVar15, iVar15, (int)param_8,
								    in_stack_ffffff98);
							} else {
								uVar7 = (ulonglong) * (uint *)(iVar4 + 0x50);
								lVar10 = lVar25 + 0x40;
								uVar14 = param_5;
								param_7 = param_6;
								Cl2DecodeFrm6(lVar8, param_2, lVar10, uVar6, uVar7, iVar15, iVar15, (int)param_8,
								    in_stack_ffffff98);
							}
						} else {
							uVar7 = (ulonglong) * (uint *)(iVar4 + 0x50);
							param_8 = (ulonglong) * (uint *)(iVar4 + 0x70) + 3;
							lVar10 = lVar25 + 0x40;
							uVar14 = param_5;
							param_7 = param_6;
							Cl2DecodeFrm5(lVar8, param_2, lVar10, uVar6, uVar7, iVar15, iVar15, (int)param_8,
							    in_stack_ffffff98);
						}
						FUN_100b91a4((int *)(iVar4 + 0x40), (char)param_2, (char)lVar10, (char)uVar6, (char)uVar7,
						    (char)uVar14, (char)param_7, (char)param_8, in_stack_ffffff98);
						goto LAB_1009e308;
					}
				}
			}
			FUN_100b91a4((int *)(iVar4 + 0x40), uVar9, uVar11, uVar12, uVar13, uVar16, uVar18, uVar21,
			    in_stack_ffffff98);
		}
	} else {
		lVar10 = uVar27 + ((longlong)cVar1 + -1) * 0xb4;
		iVar3 = (int)lVar10;
		if ((*(int *)(iVar3 + 0x6c) == iVar23) && (*(int *)(iVar3 + 100) != 0)) {
			uVar21 = uVar13;
			uVar17 = uVar16;
			uVar27 = FUN_100b915c((uint *)(iVar3 + 0x40), param_2, param_3, param_4, param_5, iVar15, iVar23,
			    uVar20, in_stack_ffffff98);
			uVar22 = (undefined)uVar20;
			if (uVar27 == 0) {
				FUN_100b91a4((int *)(iVar3 + 0x40), uVar9, uVar11, uVar12, uVar21, uVar17, uVar18, uVar22,
				    in_stack_ffffff98);
			} else {
				if (0 < *(int *)(iVar3 + 0x60)) {
					uVar6 = FUN_1003cdc8((byte *)uVar27);
					uVar22 = (undefined)uVar20;
					if ((int)uVar6 < 0x33) {
						uVar27 = FUN_1003cdc8((byte *)uVar27);
						uVar22 = (undefined)uVar20;
						uVar2 = *(uint *)(iVar3 + 0x60);
						uVar6 = (ulonglong)uVar2;
						uVar12 = (undefined)uVar2;
						if ((int)uVar2 <= (int)uVar27) {
							lVar8 = (ulonglong) * (uint *)(iVar3 + 0x10) + param_4;
							uVar9 = (undefined)lVar8;
							lVar25 = ((ulonglong) * (uint *)(iVar3 + 0xc) + param_3) - (ulonglong) * (uint *)(iVar3 + 0x54);
							if (*(uint *)(iVar3 + 0x70) == 0) {
								if (*(int *)(iVar3 + 0x68) == 0) {
									uVar18 = (undefined) * (uint *)(iVar3 + 0x50);
									uVar11 = (undefined)(lVar10 + 0x40);
									Cl2DecodeFrm4(lVar25, lVar8, lVar10 + 0x40, uVar6, (ulonglong) * (uint *)(iVar3 + 0x50),
									    iVar15, iVar15, uVar20, in_stack_ffffff98);
								} else {
									uVar18 = (undefined) * (uint *)(iVar3 + 0x50);
									uVar11 = (undefined)(lVar10 + 0x40);
									Cl2DecodeFrm6(lVar25, lVar8, lVar10 + 0x40, uVar6, (ulonglong) * (uint *)(iVar3 + 0x50),
									    iVar15, iVar15, uVar20, in_stack_ffffff98);
								}
							} else {
								uVar18 = (undefined) * (uint *)(iVar3 + 0x50);
								lVar19 = (ulonglong) * (uint *)(iVar3 + 0x70) + 3;
								uVar22 = (undefined)lVar19;
								uVar11 = (undefined)(lVar10 + 0x40);
								Cl2DecodeFrm5(lVar25, lVar8, lVar10 + 0x40, uVar6, (ulonglong) * (uint *)(iVar3 + 0x50),
								    iVar15, iVar15, (int)lVar19, in_stack_ffffff98);
							}
							FUN_100b91a4((int *)(iVar3 + 0x40), uVar9, uVar11, uVar12, uVar18, uVar13, uVar16, uVar22,
							    in_stack_ffffff98);
							return;
						}
					}
				}
				FUN_100b91a4((int *)(iVar3 + 0x40), uVar9, uVar11, uVar12, uVar21, uVar17, uVar18, uVar22,
				    in_stack_ffffff98);
			}
		}
	}
	return;
}

void DrawMonster(int param_1, undefined8 param_2, longlong param_3, undefined8 param_4,
    ulonglong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	uint *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar18;
	int iVar17;
	char cVar19;
	longlong lVar20;
	undefined4 in_stack_ffffff98;

	puVar4 = PTR_DAT_100f187c;
	uVar12 = (undefined)param_5;
	uVar10 = (undefined)param_3;
	uVar8 = (undefined)param_2;
	uVar9 = (undefined)param_4;
	uVar18 = (undefined)param_8;
	uVar16 = (undefined)param_7;
	uVar14 = (undefined)param_6;
	ppuVar5 = &toc;
	if ((param_5 & 0xffffffff) < 200) {
		lVar20 = ZEXT48(PTR_DAT_100f187c) + param_5 * 0xe8 + 0x54;
		lVar20._7_1_ = (undefined)lVar20;
		uVar6._4_4_ = (uint *)lVar20;
		uVar11 = uVar9;
		uVar13 = uVar14;
		uVar15 = uVar16;
		uVar6 = FUN_100b915c(uVar6._4_4_, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffff98);
		if (uVar6 == 0) {
			FUN_100b91a4((int *)uVar6._4_4_, uVar8, uVar10, uVar11, uVar12, uVar13, uVar15, uVar18,
			    in_stack_ffffff98);
		} else {
			iVar3 = (int)(param_5 * 0xe8);
			puVar2 = (uint *)(puVar4 + iVar3 + 0x68);
			if (0 < (int)*puVar2) {
				uVar7 = FUN_1003cdc8((byte *)uVar6);
				if ((int)uVar7 < 0x33) {
					uVar6 = FUN_1003cdc8((byte *)uVar6);
					uVar1 = *puVar2;
					uVar11 = (undefined)uVar1;
					if ((int)uVar1 <= (int)uVar6) {
						if ((*(byte *)(*(int *)ppuVar5[-0x1de7] + param_1 * 0x70 + (int)param_2) & 0x40) == 0) {
							uVar8 = (undefined) * (uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x1ec);
							uVar10 = 1;
							Cl2DecodeFrm3(param_3, param_4, lVar20, (ulonglong)uVar1,
							    (ulonglong) * (uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x1ec), param_6,
							    param_7, 1, in_stack_ffffff98);
							FUN_100b91a4((int *)uVar6._4_4_, uVar9, (undefined)lVar20, uVar11, uVar8, uVar14, uVar16,
							    uVar10, in_stack_ffffff98);
							return;
						}
						iVar17 = 0;
						if ((puVar4 + iVar3)[0xc0] != '\0') {
							iVar17 = (uint)(byte)(puVar4 + iVar3)[0xc1] + 4;
						}
						if (*(int *)(puVar4 + iVar3 + 4) == 0xf) {
							iVar17 = 2;
						}
						if ((*(int *)(ppuVar5[-0x1dea] + *(int *)ppuVar5[-0x1deb] * 0x55ec + 0x1cc) != 0) && (8 < *(int *)ppuVar5[-0x1ca4])) {
							iVar17 = 1;
						}
						cVar19 = (char)iVar17;
						if (cVar19 == '\0') {
							uVar8 = (undefined)*puVar2;
							uVar10 = (undefined) * (uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x1ec);
							Cl2DecodeLightTbl(param_3, param_4, lVar20, (ulonglong)*puVar2,
							    (ulonglong) * (uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x1ec), param_6,
							    param_7, iVar17, in_stack_ffffff98);
						} else {
							uVar8 = (undefined)*puVar2;
							uVar10 = (undefined) * (uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x1ec);
							Cl2DecodeFrm3(param_3, param_4, lVar20, (ulonglong)*puVar2,
							    (ulonglong) * (uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x1ec), param_6,
							    param_7, iVar17, in_stack_ffffff98);
						}
						FUN_100b91a4((int *)uVar6._4_4_, uVar9, (undefined)lVar20, uVar8, uVar10, uVar14, uVar16,
						    cVar19, in_stack_ffffff98);
						return;
					}
				}
			}
			FUN_100b91a4((int *)uVar6._4_4_, uVar8, uVar10, uVar11, uVar12, uVar13, uVar15, uVar18,
			    in_stack_ffffff98);
		}
	}
	return;
}

void DrawClippedMonster(int param_1, undefined8 param_2, longlong param_3, undefined8 param_4,
    ulonglong param_5, int param_6, int param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	uint *puVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar18;
	int iVar17;
	char cVar19;
	longlong lVar20;
	undefined4 in_stack_ffffff98;

	puVar4 = PTR_DAT_100f187c;
	uVar12 = (undefined)param_5;
	uVar10 = (undefined)param_3;
	uVar8 = (undefined)param_2;
	uVar9 = (undefined)param_4;
	uVar18 = (undefined)param_8;
	uVar16 = (undefined)param_7;
	uVar14 = (undefined)param_6;
	ppuVar5 = &toc;
	if ((param_5 & 0xffffffff) < 200) {
		lVar20 = ZEXT48(PTR_DAT_100f187c) + param_5 * 0xe8 + 0x54;
		lVar20._7_1_ = (undefined)lVar20;
		uVar6._4_4_ = (uint *)lVar20;
		uVar11 = uVar9;
		uVar13 = uVar14;
		uVar15 = uVar16;
		uVar6 = FUN_100b915c(uVar6._4_4_, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffff98);
		if (uVar6 == 0) {
			FUN_100b91a4((int *)uVar6._4_4_, uVar8, uVar10, uVar11, uVar12, uVar13, uVar15, uVar18,
			    in_stack_ffffff98);
		} else {
			iVar3 = (int)(param_5 * 0xe8);
			puVar2 = (uint *)(puVar4 + iVar3 + 0x68);
			if (0 < (int)*puVar2) {
				uVar7 = FUN_1003cdc8((byte *)uVar6);
				if ((int)uVar7 < 0x33) {
					uVar6 = FUN_1003cdc8((byte *)uVar6);
					uVar1 = *puVar2;
					uVar11 = (undefined)uVar1;
					if ((int)uVar1 <= (int)uVar6) {
						if ((*(byte *)(*(int *)ppuVar5[-0x1de7] + param_1 * 0x70 + (int)param_2) & 0x40) == 0) {
							uVar8 = (undefined) * (uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x1ec);
							uVar10 = 1;
							Cl2DecodeFrm5(param_3, param_4, lVar20, (ulonglong)uVar1,
							    (ulonglong) * (uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x1ec), param_6,
							    param_7, 1, in_stack_ffffff98);
							FUN_100b91a4((int *)uVar6._4_4_, uVar9, (undefined)lVar20, uVar11, uVar8, uVar14, uVar16,
							    uVar10, in_stack_ffffff98);
							return;
						}
						iVar17 = 0;
						if ((puVar4 + iVar3)[0xc0] != '\0') {
							iVar17 = (uint)(byte)(puVar4 + iVar3)[0xc1] + 4;
						}
						if (*(int *)(puVar4 + iVar3 + 4) == 0xf) {
							iVar17 = 2;
						}
						if ((*(int *)(ppuVar5[-0x1dea] + *(int *)ppuVar5[-0x1deb] * 0x55ec + 0x1cc) != 0) && (8 < *(int *)ppuVar5[-0x1ca4])) {
							iVar17 = 1;
						}
						cVar19 = (char)iVar17;
						if (cVar19 == '\0') {
							uVar8 = (undefined)*puVar2;
							uVar10 = (undefined) * (uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x1ec);
							Cl2DecodeFrm6(param_3, param_4, lVar20, (ulonglong)*puVar2,
							    (ulonglong) * (uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x1ec), param_6,
							    param_7, iVar17, in_stack_ffffff98);
						} else {
							uVar8 = (undefined)*puVar2;
							uVar10 = (undefined) * (uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x1ec);
							Cl2DecodeFrm5(param_3, param_4, lVar20, (ulonglong)*puVar2,
							    (ulonglong) * (uint *)(*(int *)(puVar4 + iVar3 + 0xe0) + 0x1ec), param_6,
							    param_7, iVar17, in_stack_ffffff98);
						}
						FUN_100b91a4((int *)uVar6._4_4_, uVar9, (undefined)lVar20, uVar8, uVar10, uVar14, uVar16,
						    cVar19, in_stack_ffffff98);
						return;
					}
				}
			}
			FUN_100b91a4((int *)uVar6._4_4_, uVar8, uVar10, uVar11, uVar12, uVar13, uVar15, uVar18,
			    in_stack_ffffff98);
		}
	}
	return;
}

void DrawPlayer(int param_1, int param_2, undefined8 param_3, longlong param_4, undefined8 param_5,
    ulonglong param_6, undefined8 param_7, longlong param_8, undefined4 param_9,
    undefined param_10, int param_11, int param_12)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int *piVar6;
	int iVar7;
	undefined **ppuVar8;
	ulonglong uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	int iVar15;
	undefined uVar16;
	int iVar17;
	ulonglong uVar18;
	undefined4 in_stack_ffffff88;

	piVar6 = _DAT_100f1d40;
	puVar5 = PTR_DAT_100f19b4;
	puVar4 = PTR_DAT_100f1834;
	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	iVar17 = (int)param_8;
	uVar16 = (undefined)param_7;
	uVar14 = (undefined)param_6;
	uVar13 = (undefined)param_5;
	uVar12 = (undefined)param_4;
	uVar11 = (undefined)param_3;
	ppuVar8 = &toc;
	uVar18 = ZEXT48(PTR_DAT_100f19b4);
	uVar1 = *(uint *)PTR_DAT_100f1834;
	uVar10 = (undefined)uVar1;
	if (((((*(byte *)(uVar1 + param_2 * 0x70 + (int)param_3) & 0x40) != 0) || (*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1cc) != 0)) || ((*PTR_DAT_100f17f8 == '\0' && (*PTR_DAT_100f17ec == '\0')))) && ((param_6 & 0xffffffff) != 0)) {
		uVar9._4_4_ = (uint *)param_6;
		iVar15 = (int)param_7;
		uVar9 = FUN_100b915c(uVar9._4_4_, (ulonglong)uVar1, param_3, param_4, param_5, uVar9._4_4_, iVar15,
		    iVar17, in_stack_ffffff88);
		uVar9 = FUN_1003cdc8((byte *)uVar9);
		FUN_100b91a4((int *)uVar9._4_4_, uVar10, uVar11, uVar12, uVar13, uVar14, uVar16, (char)iVar17,
		    in_stack_ffffff88);
		if (((0 < iVar15) && ((int)uVar9 < 0x33)) && (iVar15 <= (int)uVar9)) {
			if (param_1 == (int)(char)*ppuVar8[-0x1dd7]) {
				iVar17 = param_12;
				Cl2DecodeFrm2(0xa5, param_4, param_5, param_6, param_7, param_8, param_11, param_12,
				    in_stack_ffffff88);
			}
			if (param_1 == *(int *)puVar2) {
				Cl2DecodeFrm1(param_4, param_5, param_6, param_7, param_8, param_11, param_12, iVar17,
				    in_stack_ffffff88);
				if ((puVar3 + param_1 * 0x55ec)[0x5594] != '\0') {
					Cl2DecodeFrm1((param_4 + (ulonglong) * (uint *)(puVar3 + param_1 * 0x55ec + 0x94)) - (ulonglong) * (uint *)(puVar5 + 0xb78), param_5, uVar18 + 0xa98, 1,
					    (ulonglong) * (uint *)(puVar5 + 0xb38), param_11, param_12, iVar17,
					    in_stack_ffffff88);
				}
			} else {
				if (((*(byte *)(*(int *)puVar4 + param_2 * 0x70 + (int)param_3) & 0x40) == 0) || ((*(int *)(puVar3 + *(int *)puVar2 * 0x55ec + 0x1cc) != 0 && (8 < *piVar6)))) {
					Cl2DecodeFrm3(param_4, param_5, param_6, param_7, param_8, param_11, param_12, 1, in_stack_ffffff88);
					if ((puVar3 + param_1 * 0x55ec)[0x5594] != '\0') {
						Cl2DecodeFrm3((param_4 + (ulonglong) * (uint *)(puVar3 + param_1 * 0x55ec + 0x94)) - (ulonglong) * (uint *)(puVar5 + 0xb78), param_5, uVar18 + 0xa98, 1,
						    (ulonglong) * (uint *)(puVar5 + 0xb38), param_11, param_12, 1, in_stack_ffffff88);
					}
				} else {
					iVar15 = *piVar6;
					if (iVar15 < 5) {
						iVar7 = 0;
					} else {
						iVar7 = iVar15 + -5;
					}
					*piVar6 = iVar7;
					Cl2DecodeLightTbl(param_4, param_5, param_6, param_7, param_8, param_11, param_12, iVar17,
					    in_stack_ffffff88);
					if ((puVar3 + param_1 * 0x55ec)[0x5594] != '\0') {
						Cl2DecodeLightTbl((param_4 + (ulonglong) * (uint *)(puVar3 + param_1 * 0x55ec + 0x94)) - (ulonglong) * (uint *)(puVar5 + 0xb78), param_5, uVar18 + 0xa98, 1,
						    (ulonglong) * (uint *)(puVar5 + 0xb38), param_11, param_12, iVar17,
						    in_stack_ffffff88);
					}
					*piVar6 = iVar15;
				}
			}
		}
	}
	return;
}

void DrawClippedPlayer(int param_1, int param_2, undefined8 param_3, longlong param_4, undefined8 param_5,
    ulonglong param_6, undefined8 param_7, longlong param_8, undefined4 param_9,
    undefined param_10, int param_11, int param_12)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int *piVar6;
	int iVar7;
	undefined **ppuVar8;
	ulonglong uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	int iVar15;
	undefined uVar16;
	int iVar17;
	ulonglong uVar18;
	undefined4 in_stack_ffffff88;

	piVar6 = _DAT_100f1d40;
	puVar5 = PTR_DAT_100f19b4;
	puVar4 = PTR_DAT_100f1834;
	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	iVar17 = (int)param_8;
	uVar16 = (undefined)param_7;
	uVar14 = (undefined)param_6;
	uVar13 = (undefined)param_5;
	uVar12 = (undefined)param_4;
	uVar11 = (undefined)param_3;
	ppuVar8 = &toc;
	uVar18 = ZEXT48(PTR_DAT_100f19b4);
	uVar1 = *(uint *)PTR_DAT_100f1834;
	uVar10 = (undefined)uVar1;
	if ((((*(byte *)(uVar1 + param_2 * 0x70 + (int)param_3) & 0x40) != 0) || (*(int *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x1cc) != 0)) && ((param_6 & 0xffffffff) != 0)) {
		uVar9._4_4_ = (uint *)param_6;
		iVar15 = (int)param_7;
		uVar9 = FUN_100b915c(uVar9._4_4_, (ulonglong)uVar1, param_3, param_4, param_5, uVar9._4_4_, iVar15,
		    iVar17, in_stack_ffffff88);
		uVar9 = FUN_1003cdc8((byte *)uVar9);
		FUN_100b91a4((int *)uVar9._4_4_, uVar10, uVar11, uVar12, uVar13, uVar14, uVar16, (char)iVar17,
		    in_stack_ffffff88);
		if (((0 < iVar15) && ((int)uVar9 < 0x33)) && (iVar15 <= (int)uVar9)) {
			if (param_1 == (int)(char)*ppuVar8[-0x1dd7]) {
				iVar17 = param_12;
				Cl2DecodeClrHL(0xa5, param_4, param_5, param_6, param_7, param_8, param_11, param_12,
				    in_stack_ffffff88);
			}
			if (param_1 == *(int *)puVar2) {
				Cl2DecodeFrm4(param_4, param_5, param_6, param_7, param_8, param_11, param_12, iVar17,
				    in_stack_ffffff88);
				if ((puVar3 + param_1 * 0x55ec)[0x5594] != '\0') {
					Cl2DecodeFrm4((param_4 + (ulonglong) * (uint *)(puVar3 + param_1 * 0x55ec + 0x94)) - (ulonglong) * (uint *)(puVar5 + 0xb78), param_5, uVar18 + 0xa98, 1,
					    (ulonglong) * (uint *)(puVar5 + 0xb38), param_11, param_12, iVar17,
					    in_stack_ffffff88);
				}
			} else {
				if (((*(byte *)(*(int *)puVar4 + param_2 * 0x70 + (int)param_3) & 0x40) == 0) || ((*(int *)(puVar3 + *(int *)puVar2 * 0x55ec + 0x1cc) != 0 && (8 < *piVar6)))) {
					Cl2DecodeFrm5(param_4, param_5, param_6, param_7, param_8, param_11, param_12, 1, in_stack_ffffff88);
					if ((puVar3 + param_1 * 0x55ec)[0x5594] != '\0') {
						Cl2DecodeFrm5((param_4 + (ulonglong) * (uint *)(puVar3 + param_1 * 0x55ec + 0x94)) - (ulonglong) * (uint *)(puVar5 + 0xb78), param_5, uVar18 + 0xa98, 1,
						    (ulonglong) * (uint *)(puVar5 + 0xb38), param_11, param_12, 1, in_stack_ffffff88);
					}
				} else {
					iVar15 = *piVar6;
					if (iVar15 < 5) {
						iVar7 = 0;
					} else {
						iVar7 = iVar15 + -5;
					}
					*piVar6 = iVar7;
					Cl2DecodeFrm6(param_4, param_5, param_6, param_7, param_8, param_11, param_12, iVar17,
					    in_stack_ffffff88);
					if ((puVar3 + param_1 * 0x55ec)[0x5594] != '\0') {
						Cl2DecodeFrm6((param_4 + (ulonglong) * (uint *)(puVar3 + param_1 * 0x55ec + 0x94)) - (ulonglong) * (uint *)(puVar5 + 0xb78), param_5, uVar18 + 0xa98, 1,
						    (ulonglong) * (uint *)(puVar5 + 0xb38), param_11, param_12, iVar17,
						    in_stack_ffffff88);
					}
					*piVar6 = iVar15;
				}
			}
		}
	}
	return;
}

void DrawDeadPlayer(ulonglong param_1, ulonglong param_2, ulonglong param_3, longlong param_4,
    longlong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined uVar8;
	undefined uVar10;
	longlong lVar9;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	longlong lVar15;
	undefined *puVar16;
	undefined4 in_stack_ffffff98;

	puVar4 = PTR_DAT_100f1834;
	puVar16 = PTR_DAT_100f1828;
	puVar3 = PTR_DAT_100f17ec;
	_DAT_100f4404 = _DAT_100f3744;
	if ((int)param_7 != 0) {
		_DAT_100f4404 = _DAT_100f3748;
	}
	iVar2 = (int)param_1 * 0x70 + (int)param_2;
	lVar15 = 0;
	*(byte *)(*(int *)PTR_DAT_100f1834 + iVar2) = *(byte *)(*(int *)PTR_DAT_100f1834 + iVar2) & 0xfb;
	uVar6 = param_2;
	uVar7 = param_3;
	lVar9 = param_4;
	do {
		uVar5 = FUN_100b915c(*(uint **)(puVar16 + 0x7c), uVar6, uVar7, lVar9, param_5, (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffff98);
		uVar8 = (undefined)uVar7;
		uVar10 = (undefined)lVar9;
		uVar11 = (undefined)param_5;
		uVar12 = (undefined)param_6;
		uVar13 = (undefined)param_7;
		uVar14 = (undefined)param_8;
		if ((puVar16[0x1d] == '\0') || (*(int *)(puVar16 + 0x194) != 0)) {
		LAB_1009edb4:
			FUN_100b91a4(*(int **)(puVar16 + 0x7c), (char)uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, uVar14,
			    in_stack_ffffff98);
		} else {
			uVar1 = *(uint *)(puVar16 + 0x34);
			uVar6 = (ulonglong)uVar1;
			uVar6._7_1_ = (undefined)uVar1;
			if ((uVar1 != (uint)(byte)*puVar3) || ((*(int *)(puVar16 + 0x38) != (int)param_1 || (*(int *)(puVar16 + 0x3c) != (int)param_2))))
				goto LAB_1009edb4;
			if ((uVar5 & 0xffffffff) == 0) {
				FUN_100b91a4(*(int **)(puVar16 + 0x7c), (undefined)uVar6, uVar8, uVar10, uVar11, uVar12, uVar13,
				    uVar14, in_stack_ffffff98);
				return;
			}
			uVar6 = FUN_1003cdc8((byte *)uVar5);
			if (((*(int *)(puVar16 + 0x8c) < 1) || (0x32 < (int)uVar6)) || ((int)uVar6 < *(int *)(puVar16 + 0x8c))) {
				FUN_100b91a4(*(int **)(puVar16 + 0x7c), (undefined)uVar6, uVar8, uVar10, uVar11, uVar12, uVar13,
				    uVar14, in_stack_ffffff98);
				return;
			}
			*(byte *)(iVar2 + *(int *)puVar4) = *(byte *)(iVar2 + *(int *)puVar4) | 4;
			param_6 = (ulonglong) * (uint *)(puVar16 + 0x7c);
			param_5 = (ulonglong) * (uint *)(puVar16 + 100) + param_4;
			param_7 = (ulonglong) * (uint *)(puVar16 + 0x8c);
			param_8 = (ulonglong) * (uint *)(puVar16 + 0x90);
			lVar9 = ((ulonglong) * (uint *)(puVar16 + 0x60) + param_3) - (ulonglong) * (uint *)(puVar16 + 0x94);
			uVar6 = param_1;
			uVar7 = param_2;
			FUN_100dbf44(lVar15);
			FUN_100b91a4(*(int **)(puVar16 + 0x7c), (char)uVar6, (char)uVar7, (char)lVar9, (char)param_5,
			    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffff98);
		}
		lVar15 = lVar15 + 1;
		puVar16 = puVar16 + 0x55ec;
		if (3 < (int)lVar15) {
			return;
		}
	} while (true);
}

void DrawObject(longlong param_1, longlong param_2, ulonglong param_3, longlong param_4,
    longlong param_5, undefined *param_6, uint param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	uint uVar2;
	uint uVar3;
	uint *puVar4;
	uint *puVar5;
	int iVar6;
	undefined *puVar7;
	char cVar8;
	undefined **ppuVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar17;
	longlong lVar16;
	undefined *puVar18;
	undefined uVar19;
	char cVar20;
	char cVar21;
	undefined uVar22;
	uint uVar23;
	undefined uVar24;
	longlong lVar25;
	longlong lVar26;
	ulonglong uVar27;
	undefined4 in_stack_ffffffa8;

	puVar7 = PTR_DAT_100f1948;
	uVar15 = (undefined)param_4;
	ppuVar9 = &toc;
	uVar27 = ZEXT48(PTR_DAT_100f1948);
	bVar1 = *(byte *)(*(int *)PTR_DAT_100f194c + (int)param_1 * 0x70 + (int)param_2);
	uVar23 = (uint)bVar1;
	if ((char)bVar1 < '\x01') {
		cVar8 = -(bVar1 + 1);
		puVar18 = PTR_DAT_100f1948 + (int)cVar8 * 0x78;
		if ((int)param_5 != *(int *)(puVar18 + 0x44)) {
			return;
		}
		param_6 = (undefined *)0x0;
		param_7 = 8;
		param_5 = (ulonglong) * (uint *)(puVar18 + 4) - param_1;
		uVar23 = *(int *)(puVar18 + 8) - (int)param_2;
		param_2 = (ulonglong)(uint)((int)param_5 << 5) + (param_3 - (ulonglong) * (uint *)(puVar18 + 0x2c));
		param_3 = (ulonglong)(uVar23 * 0x20);
		lVar26 = param_2 - param_3;
		lVar25 = param_4 + (ulonglong)(uint)((int)param_5 << 4) + (ulonglong)(uVar23 * 0x10);
	} else {
		cVar8 = bVar1 - 1;
		if ((int)param_5 != *(int *)(PTR_DAT_100f1948 + (int)cVar8 * 0x78 + 0x44)) {
			return;
		}
		lVar26 = param_3 - (ulonglong) * (uint *)(PTR_DAT_100f1948 + (int)cVar8 * 0x78 + 0x2c);
		lVar25 = param_4;
		puVar18 = param_6;
	}
	uVar19 = SUB41(puVar18, 0);
	uVar14 = (undefined)param_3;
	uVar12 = (undefined)param_2;
	uVar17 = (undefined)param_5;
	uVar22 = (undefined)param_7;
	cVar20 = (char)param_6;
	uVar13 = (undefined)lVar25;
	if (((int)cVar8 & 0xffU) < 0x7f) {
		iVar6 = (int)((longlong)cVar8 * 0x78);
		puVar4 = (uint *)(PTR_DAT_100f1948 + iVar6 + 0x14);
		cVar21 = cVar8;
		uVar10 = FUN_100b8f7c((ulonglong)*puVar4, param_2, param_3, param_4, param_5, puVar18, (int)cVar8,
		    uVar23, in_stack_ffffffa8);
		uVar24 = (undefined)uVar23;
		if (uVar10 == 0) {
			FUN_100b9100(*puVar4, uVar12, uVar14, uVar15, uVar17, uVar19, cVar21, uVar24, in_stack_ffffffa8);
		} else {
			puVar5 = (uint *)(puVar7 + iVar6 + 0x24);
			if (0 < (int)*puVar5) {
				uVar11 = FUN_1003cdc8((byte *)uVar10);
				uVar24 = (undefined)uVar23;
				if ((int)uVar11 < 0x33) {
					uVar11 = FUN_1003cdc8((byte *)uVar10);
					uVar24 = (undefined)uVar23;
					uVar2 = *puVar5;
					uVar17 = (undefined)uVar2;
					if ((int)uVar2 <= (int)uVar11) {
						if (cVar8 == *ppuVar9[-0x1dd3]) {
							uVar15 = (undefined)*puVar4;
							uVar3 = *(uint *)(puVar7 + iVar6 + 0x28);
							uVar19 = (undefined)uVar3;
							uVar12 = (char)lVar26;
							uVar14 = uVar13;
							cVar21 = cVar20;
							uVar23 = param_7;
							CelDecodeClr(0xc2, lVar26, lVar25, (ulonglong)*puVar4, (ulonglong)uVar2, (ulonglong)uVar3,
							    (int)param_6, param_7, in_stack_ffffffa8);
						}
						uVar17 = (undefined)uVar23;
						lVar16 = uVar27 + (longlong)cVar8 * 0x78;
						iVar6 = (int)lVar16;
						if (*(int *)(iVar6 + 0xc) == 0) {
							if ((uVar10 & 0xffffffff) == 0) {
								FUN_100b9100(*puVar4, uVar12, uVar14, uVar15, (char)lVar16, uVar19, cVar21, uVar17,
								    in_stack_ffffffa8);
								return;
							}
							uVar15 = (undefined)*puVar4;
							uVar12 = (undefined)*puVar5;
							uVar14 = (undefined) * (uint *)(iVar6 + 0x28);
							CelDrawHdrOnly((int)lVar26, lVar25, (ulonglong)*puVar4, (ulonglong)*puVar5,
							    (ulonglong) * (uint *)(iVar6 + 0x28), (int)param_6, param_7, uVar23,
							    in_stack_ffffffa8);
						} else {
							uVar15 = (undefined)*puVar4;
							uVar12 = (undefined)*puVar5;
							uVar14 = (undefined) * (uint *)(iVar6 + 0x28);
							CelDecodeHdrLightOnly((int)lVar26, lVar25, (ulonglong)*puVar4, (ulonglong)*puVar5,
							    (ulonglong) * (uint *)(iVar6 + 0x28), (int)param_6, param_7, uVar23,
							    in_stack_ffffffa8);
						}
						FUN_100b9100(*puVar4, uVar13, uVar15, uVar12, uVar14, cVar20, uVar22, uVar17, in_stack_ffffffa8);
						return;
					}
				}
			}
			FUN_100b9100(*puVar4, uVar12, uVar14, uVar15, uVar17, uVar19, cVar21, uVar24, in_stack_ffffffa8);
		}
	}
	return;
}

void DrawClippedObject(longlong param_1, longlong param_2, ulonglong param_3, longlong param_4,
    longlong param_5, undefined *param_6, uint param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	uint uVar2;
	uint *puVar3;
	uint *puVar4;
	undefined *puVar5;
	int iVar6;
	char cVar7;
	undefined **ppuVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined *puVar16;
	undefined uVar17;
	undefined uVar18;
	char cVar19;
	undefined uVar20;
	uint uVar21;
	undefined uVar22;
	longlong lVar23;
	longlong lVar24;
	undefined4 in_stack_ffffffa8;

	puVar5 = PTR_DAT_100f1948;
	uVar14 = (undefined)param_4;
	ppuVar8 = &toc;
	bVar1 = *(byte *)(*(int *)PTR_DAT_100f194c + (int)param_1 * 0x70 + (int)param_2);
	uVar21 = (uint)bVar1;
	if ((char)bVar1 < '\x01') {
		cVar7 = -(bVar1 + 1);
		puVar16 = PTR_DAT_100f1948 + (int)cVar7 * 0x78;
		if ((int)param_5 != *(int *)(puVar16 + 0x44)) {
			return;
		}
		param_6 = (undefined *)0x0;
		param_7 = 8;
		param_5 = (ulonglong) * (uint *)(puVar16 + 4) - param_1;
		uVar21 = *(int *)(puVar16 + 8) - (int)param_2;
		param_2 = (ulonglong)(uint)((int)param_5 << 5) + (param_3 - (ulonglong) * (uint *)(puVar16 + 0x2c));
		param_3 = (ulonglong)(uVar21 * 0x20);
		lVar24 = param_2 - param_3;
		lVar23 = param_4 + (ulonglong)(uint)((int)param_5 << 4) + (ulonglong)(uVar21 * 0x10);
	} else {
		cVar7 = bVar1 - 1;
		if ((int)param_5 != *(int *)(PTR_DAT_100f1948 + (int)cVar7 * 0x78 + 0x44)) {
			return;
		}
		lVar24 = param_3 - (ulonglong) * (uint *)(PTR_DAT_100f1948 + (int)cVar7 * 0x78 + 0x2c);
		lVar23 = param_4;
		puVar16 = param_6;
	}
	uVar17 = SUB41(puVar16, 0);
	uVar13 = (undefined)param_3;
	uVar11 = (undefined)param_2;
	uVar15 = (undefined)param_5;
	uVar20 = (undefined)param_7;
	uVar18 = SUB41(param_6, 0);
	uVar12 = (undefined)lVar23;
	if (((int)cVar7 & 0xffU) < 0x7f) {
		iVar6 = (int)cVar7 * 0x78;
		puVar3 = (uint *)(PTR_DAT_100f1948 + iVar6 + 0x14);
		cVar19 = cVar7;
		uVar9 = FUN_100b8f7c((ulonglong)*puVar3, param_2, param_3, param_4, param_5, puVar16, (int)cVar7,
		    uVar21, in_stack_ffffffa8);
		uVar22 = (undefined)uVar21;
		if (uVar9 == 0) {
			FUN_100b9100(*puVar3, uVar11, uVar13, uVar14, uVar15, uVar17, cVar19, uVar22, in_stack_ffffffa8);
		} else {
			puVar4 = (uint *)(puVar5 + iVar6 + 0x24);
			if (0 < (int)*puVar4) {
				uVar10 = FUN_1003cdc8((byte *)uVar9);
				uVar22 = (undefined)uVar21;
				if ((int)uVar10 < 0x33) {
					uVar9 = FUN_1003cdc8((byte *)uVar9);
					uVar22 = (undefined)uVar21;
					uVar2 = *puVar4;
					uVar15 = (undefined)uVar2;
					if ((int)uVar2 <= (int)uVar9) {
						if (cVar7 == *ppuVar8[-0x1dd3]) {
							uVar21 = param_7;
							CelDrawHdrClrHL(0xc2, lVar24, lVar23, (ulonglong)*puVar3, (ulonglong)uVar2,
							    (ulonglong) * (uint *)(puVar5 + iVar6 + 0x28), (int)param_6, param_7,
							    in_stack_ffffffa8);
						}
						uVar14 = (undefined)uVar21;
						puVar5 = puVar5 + iVar6;
						if (*(int *)(puVar5 + 0xc) == 0) {
							uVar11 = (undefined)*puVar3;
							uVar13 = (undefined)*puVar4;
							uVar15 = (undefined) * (uint *)(puVar5 + 0x28);
							Cel2DrawHdrOnly((int)lVar24, lVar23, (ulonglong)*puVar3, (ulonglong)*puVar4,
							    (ulonglong) * (uint *)(puVar5 + 0x28), (int)param_6, param_7, uVar21,
							    in_stack_ffffffa8);
						} else {
							uVar11 = (undefined)*puVar3;
							uVar13 = (undefined)*puVar4;
							uVar15 = (undefined) * (uint *)(puVar5 + 0x28);
							FUN_1003dfcc((int)lVar24, lVar23, (ulonglong)*puVar3, (ulonglong)*puVar4,
							    (ulonglong) * (uint *)(puVar5 + 0x28), (int)param_6, param_7, uVar21,
							    in_stack_ffffffa8);
						}
						FUN_100b9100(*puVar3, uVar12, uVar11, uVar13, uVar15, uVar18, uVar20, uVar14, in_stack_ffffffa8);
						return;
					}
				}
			}
			FUN_100b9100(*puVar3, uVar11, uVar13, uVar14, uVar15, uVar17, cVar19, uVar22, in_stack_ffffffa8);
		}
	}
	return;
}

void scrollrt_draw_clipped_e_flag_2(longlong param_1, longlong param_2, int param_3, ulonglong param_4, ulonglong param_5,
    undefined param_6, undefined param_7, char param_8, undefined4 param_9)

{
	ushort uVar1;
	int iVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	uint *puVar6;
	uint uVar7;
	undefined *puVar8;
	undefined *puVar9;
	uint *puVar10;
	int *piVar11;
	int *piVar12;
	uint uVar13;
	uint *puVar14;
	undefined *puVar15;
	uint *puVar16;
	undefined **ppuVar17;
	longlong lVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	ulonglong uVar23;
	longlong lVar24;
	longlong lVar25;
	int iVar26;
	longlong lVar27;
	undefined4 in_stack_ffffff88;

	puVar16 = _DAT_100f2088;
	puVar15 = _DAT_100f2084;
	puVar14 = _DAT_100f2080;
	piVar12 = _DAT_100f1d80;
	uVar7 = _DAT_100f1d68;
	piVar11 = _DAT_100f1d40;
	puVar10 = _DAT_100f1d3c;
	puVar9 = PTR_DAT_100f1a48;
	puVar8 = PTR_DAT_100f1a44;
	lVar25 = (longlong)param_8;
	ppuVar17 = &toc;
	uVar21 = (ulonglong)_DAT_100f1d68;
	iVar2 = *_DAT_100f1d40;
	uVar3 = *_DAT_100f1d3c;
	lVar24 = param_2 * 0x70 + (longlong)param_3;
	uVar4 = *_DAT_100f2088;
	*_DAT_100f2088 = (int)*(short *)(*(int *)PTR_DAT_100f1a54 + (int)param_2 * 0xe0 + param_3 * 2);
	uVar13 = _DAT_100f1da0;
	uVar23 = (ulonglong)_DAT_100f1da0;
	*piVar11 = (int)*(char *)(*(int *)puVar8 + (int)lVar24);
	uVar5 = *puVar16;
	uVar22 = (ulonglong)uVar5;
	*puVar10 = (uint)(*(byte *)(uVar13 + uVar5) & *(byte *)(uVar7 + (int)*(char *)(*(int *)puVar9 + (int)lVar24)));
	lVar18 = IsometricCoord(param_2, param_3);
	puVar6 = (uint *)ppuVar17[-0x1d61];
	uVar19 = ZEXT48(puVar6);
	uVar7 = (int)lVar18 << 5;
	uVar20 = (ulonglong)uVar7;
	uVar5 = *puVar6;
	*puVar15 = 1;
	lVar18 = (ulonglong)uVar5 + uVar20;
	uVar1 = *(ushort *)lVar18;
	*puVar14 = (uint)uVar1;
	if (uVar1 != 0) {
		drawLowerScreen(param_1, (char)puVar6, (char)uVar7, (char)uVar21, (char)uVar22, (char)uVar23,
		    (char)lVar24, (char)lVar25, in_stack_ffffff88);
	}
	*puVar15 = 2;
	uVar1 = ((ushort *)lVar18)[1];
	*puVar14 = (uint)uVar1;
	if (uVar1 != 0) {
		drawLowerScreen(param_1 + 0x20, (char)uVar19, (char)uVar20, (char)uVar21, (char)uVar22, (char)uVar23,
		    (char)lVar24, (char)lVar25, in_stack_ffffff88);
	}
	*puVar15 = 0;
	iVar26 = 2;
	lVar27 = param_1;
	while (true) {
		lVar18 = lVar18 + 4;
		if (*piVar12 <= iVar26)
			break;
		uVar1 = *(ushort *)lVar18;
		*puVar14 = (uint)uVar1;
		if (uVar1 != 0) {
			drawLowerScreen(lVar27 + -0x6000, (char)uVar19, (char)uVar20, (char)uVar21, (char)uVar22, (char)uVar23, (char)lVar24, (char)lVar25, in_stack_ffffff88);
		}
		uVar1 = ((ushort *)lVar18)[1];
		*puVar14 = (uint)uVar1;
		if (uVar1 != 0) {
			drawLowerScreen(lVar27 + -0x5fe0, (char)uVar19, (char)uVar20, (char)uVar21, (char)uVar22, (char)uVar23, (char)lVar24, (char)lVar25, in_stack_ffffff88);
		}
		iVar26 = iVar26 + 2;
		lVar27 = lVar27 + -0x6000;
	}
	scrollrt_draw_clipped_dungeon(param_1, param_2, (longlong)param_3, param_4, param_5, 0, (char)lVar24, (char)lVar25,
	    in_stack_ffffff88);
	*piVar11 = iVar2;
	*puVar10 = uVar3;
	*puVar16 = uVar4;
	return;
}

void scrollrt_draw_clipped_dungeon(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, uint param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	byte bVar2;
	char cVar3;
	byte bVar4;
	char cVar5;
	byte bVar6;
	char cVar7;
	char cVar8;
	short sVar9;
	short sVar10;
	uint uVar11;
	uint uVar12;
	uint uVar13;
	int iVar14;
	undefined *puVar15;
	undefined *puVar16;
	int iVar17;
	int iVar18;
	uint *puVar19;
	undefined **ppuVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	ulonglong uVar23;
	longlong lVar24;
	undefined uVar25;
	ulonglong uVar26;
	undefined uVar27;
	ulonglong uVar28;
	undefined uVar29;
	undefined uVar31;
	ulonglong uVar30;
	undefined uVar32;
	undefined uVar34;
	uint uVar33;
	undefined uVar36;
	uint uVar35;
	ulonglong uVar37;
	undefined4 uVar38;
	char cVar39;
	ulonglong uVar40;
	longlong lVar41;
	undefined4 in_stack_ffffff68;
	undefined in_stack_ffffff6f;

	puVar19 = _DAT_100f207c;
	puVar16 = PTR_DAT_100f1828;
	uVar31 = (undefined)param_5;
	ppuVar20 = &toc;
	iVar18 = (int)param_2;
	iVar17 = (int)param_3;
	iVar14 = iVar18 * 0x70 + iVar17;
	uVar11 = *(uint *)PTR_DAT_100f1954;
	uVar37 = (ulonglong)uVar11;
	uVar26 = (ulonglong) * (uint *)PTR_DAT_100f1944;
	uVar23 = (ulonglong) * (uint *)PTR_DAT_100f1a48;
	uVar35 = *(uint *)PTR_DAT_100f1a38;
	sVar10 = *(short *)(uVar11 + iVar18 * 0xe0 + iVar17 * 2);
	cVar3 = *(char *)(uVar35 + iVar14);
	bVar4 = *(byte *)(*(int *)PTR_DAT_100f1834 + iVar14);
	cVar5 = *(char *)(*(int *)PTR_DAT_100f19a0 + iVar14);
	cVar39 = *(char *)(*(int *)PTR_DAT_100f194c + iVar14);
	bVar6 = *(byte *)(*(uint *)PTR_DAT_100f1944 + iVar14);
	cVar7 = *(char *)(*(int *)PTR_DAT_100f1950 + iVar14);
	cVar8 = *(char *)(*(uint *)PTR_DAT_100f1a48 + iVar14);
	cVar1 = *(char *)(*(int *)PTR_DAT_100f1950 + iVar18 * 0x70 + iVar17 + -1);
	sVar9 = *(short *)(uVar11 + iVar18 * 0xe0 + iVar17 * 2 + -2);
	uVar28 = param_4;
	uVar30 = param_5;
	uVar33 = param_6;
	if ((*(int *)PTR_DAT_100f19c8 != 0) && (uVar28 = param_4, uVar30 = param_5, uVar33 = param_6, (bVar4 & 0x40) != 0)) {
		uVar26 = 1;
		uVar23 = (ulonglong) * (uint *)PTR_DAT_100f19c4;
		uVar28 = 0x40;
		uVar30 = 0;
		uVar33 = 8;
		ppuVar20 = &toc;
		FUN_1003dbe8((undefined4 *)param_1, uVar23, 1, 0x40, 0, 8, uVar35, uVar11, in_stack_ffffff68);
	}
	if ((*(int *)ppuVar20[-0x1c39] != 0) && ((bVar4 & 1) != 0)) {
		uVar30 = 0;
		uVar33 = 8;
		uVar35 = 1;
		uVar23 = param_3;
		uVar26 = param_4;
		uVar28 = param_5;
		DrawClippedMissile(iVar18, param_3, param_4, param_5, 0, 8, 1, uVar37, in_stack_ffffff68);
	}
	if (*(int *)ppuVar20[-0x1ca4] < (int)(char)*ppuVar20[-0x1c33]) {
		if (cVar5 != '\0') {
			uVar23 = ZEXT48(ppuVar20[-0x1d85]);
			lVar41 = uVar23 + ((ulonglong)((int)cVar5 & 0x1f) - 1) * 0x50;
			iVar14 = (int)lVar41;
			uVar40 = lVar41 + (ulonglong)(uint)((int)(char)((byte)((uint)(int)cVar5 >> 5) & 7) << 3);
			lVar41 = param_4 - (ulonglong) * (uint *)(iVar14 + 0x48);
			uVar21._4_4_ = (uint *)uVar40;
			uVar21 = FUN_100b915c(uVar21._4_4_, uVar23, uVar26, uVar28, uVar30, uVar33, uVar35, (int)uVar37,
			    in_stack_ffffff68);
			if (uVar21 == 0) {
				FUN_100b91a4((int *)uVar21._4_4_, (char)uVar23, (char)uVar26, (char)uVar28, (char)uVar30,
				    (char)uVar33, (char)uVar35, (char)uVar37, in_stack_ffffff68);
			} else {
				if (0 < *(int *)(iVar14 + 0x40)) {
					uVar22 = FUN_1003cdc8((byte *)uVar21);
					if ((int)uVar22 < 0x33) {
						uVar21 = FUN_1003cdc8((byte *)uVar21);
						uVar28 = (ulonglong) * (uint *)(iVar14 + 0x40);
						if ((int)*(uint *)(iVar14 + 0x40) <= (int)uVar21) {
							bVar2 = *(byte *)(iVar14 + 0x4c);
							uVar37 = (ulonglong)bVar2;
							if (bVar2 == 0) {
								uVar30 = (ulonglong) * (uint *)(iVar14 + 0x44);
								uVar33 = 0;
								uVar35 = 8;
								uVar23 = param_5;
								Cl2DecodeFrm6(lVar41, param_5, uVar40, uVar28, uVar30, 0, 8, (uint)bVar2, in_stack_ffffff68);
								uVar26 = uVar40;
							} else {
								uVar30 = (ulonglong) * (uint *)(iVar14 + 0x44);
								uVar33 = 0;
								uVar35 = 8;
								uVar23 = param_5;
								Cl2DecodeFrm5(lVar41, param_5, uVar40, uVar28, uVar30, 0, 8, (uint)bVar2, in_stack_ffffff68);
								uVar26 = uVar40;
							}
							FUN_100b91a4((int *)uVar21._4_4_, (char)uVar23, (char)uVar26, (char)uVar28, (char)uVar30,
							    (char)uVar33, (char)uVar35, (char)uVar37, in_stack_ffffff68);
							goto LAB_1009f63c;
						}
					}
				}
				FUN_100b91a4((int *)uVar21._4_4_, (char)uVar23, (char)uVar26, (char)uVar28, (char)uVar30,
				    (char)uVar33, (char)uVar35, (char)uVar37, in_stack_ffffff68);
			}
		}
	LAB_1009f63c:
		if (cVar39 != '\0') {
			uVar30 = 1;
			uVar33 = 0;
			uVar35 = 8;
			uVar23 = param_3;
			uVar26 = param_4;
			uVar28 = param_5;
			FUN_1009f07c(param_2, param_3, param_4, param_5, 1, (undefined *)0x0, 8, (char)uVar37,
			    in_stack_ffffff68);
		}
	}
	if (bVar6 != 0) {
		puVar15 = ppuVar20[-0x1da4] + ((int)(char)bVar6 + -1) * 0x170;
		if ((*(int *)(puVar15 + 0x34) == 0) && (bVar6 < 0x80)) {
			uVar21 = FUN_100b8f7c((ulonglong) * (uint *)(puVar15 + 0x18), uVar23, uVar26, uVar28, uVar30, uVar33,
			    uVar35, (int)uVar37, in_stack_ffffff68);
			if (uVar21 == 0) {
				FUN_100b9100(*(int *)(puVar15 + 0x18), (char)uVar23, (char)uVar26, (char)uVar28, (char)uVar30,
				    (char)uVar33, (char)uVar35, (char)uVar37, in_stack_ffffff68);
			} else {
				if (0 < *(int *)(puVar15 + 0x20)) {
					uVar40 = FUN_1003cdc8((byte *)uVar21);
					if ((int)uVar40 < 0x33) {
						uVar21 = FUN_1003cdc8((byte *)uVar21);
						uVar30 = (ulonglong) * (uint *)(puVar15 + 0x20);
						if ((int)*(uint *)(puVar15 + 0x20) <= (int)uVar21) {
							uVar11 = *(uint *)(puVar15 + 0x28);
							if ((int)(char)bVar6 + -1 == (int)(char)*ppuVar20[-0x1dd2]) {
								uVar37 = 8;
								CelDrawHdrClrHL(0xb5, param_4 - (ulonglong)uVar11, param_5,
								    (ulonglong) * (uint *)(puVar15 + 0x18), uVar30,
								    (ulonglong) * (uint *)(puVar15 + 0x24), 0, 8, in_stack_ffffff68);
							}
							uVar26 = (ulonglong) * (uint *)(puVar15 + 0x18);
							uVar28 = (ulonglong) * (uint *)(puVar15 + 0x20);
							uVar30 = (ulonglong) * (uint *)(puVar15 + 0x24);
							uVar33 = 0;
							uVar35 = 8;
							uVar23 = param_5;
							FUN_1003dfcc((int)(param_4 - (ulonglong)uVar11), param_5, uVar26, uVar28, uVar30, 0, 8,
							    (int)uVar37, in_stack_ffffff68);
							FUN_100b9100(*(int *)(puVar15 + 0x18), (char)uVar23, (char)uVar26, (char)uVar28,
							    (char)uVar30, (char)uVar33, (char)uVar35, (char)uVar37, in_stack_ffffff68);
							goto LAB_1009f750;
						}
					}
				}
				FUN_100b9100(*(int *)(puVar15 + 0x18), (char)uVar23, (char)uVar26, (char)uVar28, (char)uVar30,
				    (char)uVar33, (char)uVar35, (char)uVar37, in_stack_ffffff68);
			}
		}
	}
LAB_1009f750:
	if ((bVar4 & 0x20) != 0) {
		lVar41 = (longlong)cVar1 + 1;
		uVar21 = -lVar41;
		if ((uVar21 & 0xffffffff) < 4) {
			uVar26 = param_3 - 1;
			puVar15 = puVar16 + (int)lVar41 * -0x55ec;
			uVar30 = (ulonglong) * (uint *)(puVar15 + 100) + param_5;
			uVar28 = ((ulonglong) * (uint *)(puVar15 + 0x60) + param_4) - (ulonglong) * (uint *)(puVar15 + 0x94);
			uVar33 = *(uint *)(puVar15 + 0x7c);
			uVar35 = *(uint *)(puVar15 + 0x8c);
			uVar37 = (ulonglong) * (uint *)(puVar15 + 0x90);
			uVar23 = param_2;
			DrawClippedPlayer((int)uVar21, iVar18, uVar26, uVar28, uVar30, (ulonglong)uVar33, (ulonglong)uVar35,
			    uVar37, in_stack_ffffff68, in_stack_ffffff6f, 0, 8);
			if (param_6 != 0) {
				if (*(int *)(puVar15 + 0x98) != 0) {
					if (*(int *)(puVar15 + 0x98) == 2) {
						scrollrt_draw_clipped_e_flag_2(param_1 - 0x3060, param_2 - 2, iVar17 + 1, param_4 - 0x60, param_5 - 0x10,
						    (char)uVar33, (char)uVar35, (char)uVar37, in_stack_ffffff68);
					}
					uVar23 = param_2 - 1;
					uVar26 = param_3 + 1;
					uVar28 = param_4 - 0x40;
					uVar30 = param_5;
					scrollrt_draw_clipped_e_flag_2(param_1 - 0x40, uVar23, (int)uVar26, uVar28, param_5, (char)uVar33, (char)uVar35,
					    (char)uVar37, in_stack_ffffff68);
				}
			}
		}
	}
	uVar36 = (undefined)uVar35;
	uVar34 = (undefined)uVar33;
	uVar32 = (undefined)uVar30;
	if ((bVar4 & 0x10) != 0) {
		if ((bVar4 & 0x40) == 0) {
			if (*(int *)(puVar16 + *(int *)ppuVar20[-0x1deb] * 0x55ec + 0x1cc) == 0)
				goto LAB_1009f928;
		}
		if (sVar9 < 0) {
			*puVar19 = -((int)sVar9 + 1);
			if (*puVar19 < 200) {
				lVar41 = ZEXT48(ppuVar20[-0x1dd5]) + (ulonglong)*puVar19 * 0xe8;
				iVar14 = (int)lVar41;
				if ((*(uint *)(iVar14 + 0xa0) & 1) == 0) {
					uVar11 = *(uint *)(iVar14 + 0xe0);
					uVar23 = (ulonglong)uVar11;
					if (uVar11 != 0) {
						uVar12 = *(uint *)(iVar14 + 0x38);
						uVar27 = (undefined)uVar12;
						uVar13 = *(uint *)(iVar14 + 0x3c);
						uVar29 = (undefined)uVar13;
						lVar24 = (ulonglong)uVar12 + param_4;
						uVar28 = (ulonglong)uVar13 + param_5;
						uVar26 = lVar24 - (ulonglong) * (uint *)(uVar11 + 0x1f0);
						FUN_100b915c((uint *)(iVar14 + 0x54), lVar24, (ulonglong)uVar12, (ulonglong)uVar13, uVar30,
						    uVar33, uVar35, (int)uVar37, in_stack_ffffff68);
						uVar25 = (undefined)*puVar19;
						if (*puVar19 == *(uint *)ppuVar20[-0x1dd4]) {
							uVar32 = (undefined) * (uint *)(iVar14 + 0x68);
							uVar11 = *(uint *)(*(int *)(iVar14 + 0xe0) + 0x1ec);
							uVar34 = (undefined)uVar11;
							lVar41 = lVar41 + 0x54;
							uVar29 = (undefined)lVar41;
							uVar36 = 0;
							uVar37 = 8;
							uVar25 = (char)uVar26;
							uVar27 = (char)uVar28;
							Cl2DecodeClrHL(0xe9, uVar26, uVar28, lVar41, (ulonglong) * (uint *)(iVar14 + 0x68),
							    (ulonglong)uVar11, 0, 8, in_stack_ffffff68);
						}
						FUN_100b91a4((int *)(iVar14 + 0x54), uVar25, uVar27, uVar29, uVar32, uVar34, uVar36,
						    (char)uVar37, in_stack_ffffff68);
						uVar30 = (ulonglong)*puVar19;
						uVar33 = 0;
						uVar35 = 8;
						uVar23 = param_3;
						DrawClippedMonster(iVar18, param_3, uVar26, uVar28, uVar30, 0, 8, (int)uVar37, in_stack_ffffff68);
						if (param_6 != 0) {
							if (*(int *)(iVar14 + 0x6c) != 0) {
								uVar23 = param_2 - 1;
								uVar26 = param_3 + 1;
								uVar28 = param_4 - 0x40;
								uVar30 = param_5;
								scrollrt_draw_clipped_e_flag_2(param_1 - 0x40, uVar23, (int)uVar26, uVar28, param_5, (char)uVar33,
								    (char)uVar35, (char)uVar37, in_stack_ffffff68);
							}
						}
					}
				}
			}
		}
	}
LAB_1009f928:
	if ((bVar4 & 4) != 0) {
		uVar30 = 0;
		uVar33 = 8;
		uVar35 = 1;
		uVar23 = param_3;
		uVar26 = param_4;
		uVar28 = param_5;
		DrawDeadPlayer(param_2, param_3, param_4, param_5, 0, 8, 1, uVar37, in_stack_ffffff68);
	}
	if (('\0' < cVar7) && (uVar21 = (longlong)cVar7 - 1, (uVar21 & 0xffffffff) < 4)) {
		iVar14 = (int)uVar21;
		puVar15 = puVar16 + iVar14 * 0x55ec;
		uVar30 = (ulonglong) * (uint *)(puVar15 + 100) + param_5;
		uVar28 = ((ulonglong) * (uint *)(puVar15 + 0x60) + param_4) - (ulonglong) * (uint *)(puVar15 + 0x94);
		uVar33 = *(uint *)(puVar15 + 0x7c);
		uVar35 = *(uint *)(puVar15 + 0x8c);
		uVar37 = (ulonglong) * (uint *)(puVar15 + 0x90);
		uVar23 = param_2;
		uVar26 = param_3;
		DrawClippedPlayer(iVar14, iVar18, param_3, uVar28, uVar30, (ulonglong)uVar33, (ulonglong)uVar35, uVar37,
		    in_stack_ffffff68, in_stack_ffffff6f, 0, 8);
		if ((param_6 != 0) && (*(int *)(puVar15 + 0x98) != 0)) {
			if (*(int *)(puVar15 + 0x98) == 2) {
				scrollrt_draw_clipped_e_flag_2(param_1 - 0x3060, param_2 - 2, iVar17 + 1, param_4 - 0x60, param_5 - 0x10,
				    (char)uVar33, (char)uVar35, (char)uVar37, in_stack_ffffff68);
			}
			uVar23 = param_2 - 1;
			uVar26 = param_3 + 1;
			uVar28 = param_4 - 0x40;
			uVar30 = param_5;
			scrollrt_draw_clipped_e_flag_2(param_1 - 0x40, uVar23, (int)uVar26, uVar28, param_5, (char)uVar33, (char)uVar35,
			    (char)uVar37, in_stack_ffffff68);
		}
	}
	uVar36 = (undefined)uVar35;
	uVar34 = (undefined)uVar33;
	uVar32 = (undefined)uVar30;
	if (0 < sVar10) {
		if ((bVar4 & 0x40) == 0) {
			if (*(int *)(puVar16 + *(int *)ppuVar20[-0x1deb] * 0x55ec + 0x1cc) == 0)
				goto LAB_1009fb10;
		}
		*puVar19 = (int)sVar10 - 1;
		if (*puVar19 < 200) {
			lVar41 = ZEXT48(ppuVar20[-0x1dd5]) + (ulonglong)*puVar19 * 0xe8;
			iVar14 = (int)lVar41;
			if ((*(uint *)(iVar14 + 0xa0) & 1) == 0) {
				uVar11 = *(uint *)(iVar14 + 0xe0);
				uVar23 = (ulonglong)uVar11;
				if (uVar11 != 0) {
					uVar12 = *(uint *)(iVar14 + 0x38);
					uVar27 = (undefined)uVar12;
					uVar13 = *(uint *)(iVar14 + 0x3c);
					uVar29 = (undefined)uVar13;
					lVar24 = (ulonglong)uVar12 + param_4;
					uVar28 = (ulonglong)uVar13 + param_5;
					uVar26 = lVar24 - (ulonglong) * (uint *)(uVar11 + 0x1f0);
					FUN_100b915c((uint *)(iVar14 + 0x54), lVar24, (ulonglong)uVar12, (ulonglong)uVar13, uVar30,
					    uVar33, uVar35, (int)uVar37, in_stack_ffffff68);
					uVar25 = (undefined)*puVar19;
					if (*puVar19 == *(uint *)ppuVar20[-0x1dd4]) {
						uVar32 = (undefined) * (uint *)(iVar14 + 0x68);
						uVar11 = *(uint *)(*(int *)(iVar14 + 0xe0) + 0x1ec);
						uVar34 = (undefined)uVar11;
						lVar41 = lVar41 + 0x54;
						uVar29 = (undefined)lVar41;
						uVar36 = 0;
						uVar37 = 8;
						uVar25 = (char)uVar26;
						uVar27 = (char)uVar28;
						Cl2DecodeClrHL(0xe9, uVar26, uVar28, lVar41, (ulonglong) * (uint *)(iVar14 + 0x68),
						    (ulonglong)uVar11, 0, 8, in_stack_ffffff68);
					}
					FUN_100b91a4((int *)(iVar14 + 0x54), uVar25, uVar27, uVar29, uVar32, uVar34, uVar36, (char)uVar37, in_stack_ffffff68);
					uVar30 = (ulonglong)*puVar19;
					uVar33 = 0;
					uVar35 = 8;
					uVar23 = param_3;
					DrawClippedMonster(iVar18, param_3, uVar26, uVar28, uVar30, 0, 8, (int)uVar37, in_stack_ffffff68);
					if (param_6 != 0) {
						if (*(int *)(iVar14 + 0x6c) != 0) {
							uVar23 = param_2 - 1;
							uVar26 = param_3 + 1;
							uVar28 = param_4 - 0x40;
							uVar30 = param_5;
							scrollrt_draw_clipped_e_flag_2(param_1 - 0x40, uVar23, (int)uVar26, uVar28, param_5, (char)uVar33,
							    (char)uVar35, (char)uVar37, in_stack_ffffff68);
						}
					}
				}
			}
		}
	}
LAB_1009fb10:
	uVar38 = (undefined4)uVar37;
	if ((bVar4 & 1) != 0) {
		uVar30 = 0;
		uVar33 = 8;
		uVar35 = 0;
		uVar23 = param_3;
		uVar26 = param_4;
		uVar28 = param_5;
		DrawClippedMissile(iVar18, param_3, param_4, param_5, 0, 8, 0, uVar37, in_stack_ffffff68);
	}
	if (cVar39 != '\0') {
		if (*(int *)ppuVar20[-0x1ca4] < (int)(char)*ppuVar20[-0x1c33]) {
			uVar30 = 0;
			uVar33 = 0;
			uVar35 = 8;
			uVar26 = param_4;
			uVar28 = param_5;
			DrawClippedObject(param_2, param_3, param_4, param_5, 0, (undefined *)0x0, 8, (char)uVar38,
			    in_stack_ffffff68);
			uVar23 = param_3;
		}
	}
	uVar27 = (undefined)uVar33;
	uVar36 = (undefined)uVar28;
	uVar34 = (undefined)uVar26;
	uVar32 = (undefined)uVar23;
	uVar25 = (undefined)uVar30;
	if (bVar6 != 0) {
		puVar16 = ppuVar20[-0x1da4] + ((int)(char)bVar6 + -1) * 0x170;
		if ((*(int *)(puVar16 + 0x34) != 0) && (bVar6 < 0x80)) {
			uVar23 = FUN_100b8f7c((ulonglong) * (uint *)(puVar16 + 0x18), uVar23, uVar26, uVar28, uVar30, uVar33,
			    uVar35, uVar38, in_stack_ffffff68);
			if (uVar23 == 0) {
				FUN_100b9100(*(int *)(puVar16 + 0x18), uVar32, uVar34, uVar36, uVar25, uVar27, (char)uVar35,
				    (char)uVar38, in_stack_ffffff68);
			} else {
				if (0 < *(int *)(puVar16 + 0x20)) {
					uVar26 = FUN_1003cdc8((byte *)uVar23);
					if ((int)uVar26 < 0x33) {
						uVar23 = FUN_1003cdc8((byte *)uVar23);
						uVar11 = *(uint *)(puVar16 + 0x20);
						uVar25 = (undefined)uVar11;
						if ((int)uVar11 <= (int)uVar23) {
							uVar33 = *(uint *)(puVar16 + 0x28);
							if ((int)(char)bVar6 + -1 == (int)(char)*ppuVar20[-0x1dd2]) {
								uVar38 = 8;
								CelDrawHdrClrHL(0xb5, param_4 - (ulonglong)uVar33, param_5,
								    (ulonglong) * (uint *)(puVar16 + 0x18), (ulonglong)uVar11,
								    (ulonglong) * (uint *)(puVar16 + 0x24), 0, 8, in_stack_ffffff68);
							}
							uVar32 = (undefined) * (uint *)(puVar16 + 0x18);
							uVar34 = (undefined) * (uint *)(puVar16 + 0x20);
							uVar36 = (undefined) * (uint *)(puVar16 + 0x24);
							uVar25 = 0;
							uVar35 = 8;
							FUN_1003dfcc((int)(param_4 - (ulonglong)uVar33), param_5,
							    (ulonglong) * (uint *)(puVar16 + 0x18), (ulonglong) * (uint *)(puVar16 + 0x20), (ulonglong) * (uint *)(puVar16 + 0x24), 0, 8, uVar38, in_stack_ffffff68);
							FUN_100b9100(*(int *)(puVar16 + 0x18), uVar31, uVar32, uVar34, uVar36, uVar25, (char)uVar35,
							    (char)uVar38, in_stack_ffffff68);
							goto LAB_1009fc68;
						}
					}
				}
				FUN_100b9100(*(int *)(puVar16 + 0x18), uVar32, uVar34, uVar36, uVar25, uVar27, (char)uVar35,
				    (char)uVar38, in_stack_ffffff68);
			}
		}
	}
LAB_1009fc68:
	if (cVar3 != '\0') {
		puVar19 = (uint *)ppuVar20[-0x1d5d];
		*(uint *)ppuVar20[-0x1ca5] = (uint)(byte)ppuVar20[-0x1c9a][(int)cVar8];
		FUN_1003e0a4(param_1, (ulonglong)*puVar19, (longlong)cVar3, 0x40, 0, 8, uVar35, uVar38,
		    in_stack_ffffff68);
	}
	return;
}

void scrollrt_draw_lower(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    int param_5, int param_6, char param_7, char param_8, undefined4 param_9,
    undefined param_10, undefined4 param_11)

{
	char cVar1;
	ushort uVar2;
	uint uVar3;
	uint uVar4;
	ushort *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	int *piVar8;
	uint *puVar9;
	undefined *puVar10;
	int *piVar11;
	ulonglong uVar12;
	longlong lVar13;
	int iVar15;
	undefined uVar16;
	longlong lVar14;
	undefined uVar17;
	undefined uVar19;
	ulonglong uVar18;
	undefined uVar20;
	byte bVar22;
	ulonglong uVar21;
	ulonglong uVar23;
	undefined uVar25;
	undefined8 uVar24;
	undefined uVar27;
	longlong lVar26;
	longlong lVar28;
	longlong lVar29;
	ulonglong uVar30;
	int iVar31;
	ulonglong uVar32;
	int iVar33;
	longlong lVar34;
	int iVar35;
	uint *puVar36;
	int iVar37;
	ushort *puVar38;
	longlong lVar39;
	undefined4 in_stack_ffffff78;

	piVar11 = _DAT_100f2088;
	puVar10 = _DAT_100f2084;
	puVar9 = _DAT_100f2080;
	piVar8 = _DAT_100f1d80;
	puVar7 = PTR_DAT_100f1938;
	puVar6 = PTR_DAT_100f17cc;
	lVar29 = (longlong)param_8;
	lVar28 = (longlong)param_7;
	lVar26 = (longlong)param_6;
	uVar32 = SEXT48(param_5);
	uVar12 = ZEXT48(&toc);
	uVar30 = ZEXT48(PTR_DAT_100f1a48);
	iVar15 = (int)param_2;
	uVar18 = param_3;
	uVar21 = param_4;
	uVar23 = uVar32;
	lVar13 = IsometricCoord(param_1, iVar15);
	uVar27 = (undefined)lVar26;
	iVar33 = (int)uVar12;
	puVar38 = (ushort *)(**(int **)(iVar33 + -0x7584) + (int)lVar13 * 0x20);
	iVar31 = (int)param_4;
	if (param_6 != 0) {
		if (((param_2 & 0xffffffff) < 0x70) && ((param_1 & 0xffffffff) < 0x70)) {
			*piVar11 = (int)*(short *)(**(int **)(iVar33 + -0x757c) + (int)param_1 * 0xe0 + iVar15 * 2);
			iVar15 = (int)param_1 * 0x70 + iVar15;
			**(int **)(iVar33 + -0x7290) = (int)*(char *)(**(int **)(iVar33 + -0x758c) + iVar15);
			if (*piVar11 == 0) {
				world_draw_black_tile((ulonglong) * (uint *)puVar6 + (ulonglong) * (uint *)(puVar7 + iVar31 * 4) + param_3, (char)*(uint *)puVar6,
				    (char)uVar18, (char)uVar21, (char)uVar23, uVar27, (char)lVar28, (char)lVar29,
				    in_stack_ffffff78);
			} else {
				uVar25 = 2;
				bVar22 = *(byte *)(*(int *)(iVar33 + -0x7230) + *piVar11);
				uVar3 = *(uint *)(puVar7 + iVar31 * 4);
				uVar16 = (undefined)uVar3;
				uVar4 = *(uint *)puVar6;
				uVar19 = (undefined)uVar4;
				**(uint **)(iVar33 + -0x7294) = (uint)(bVar22 & *(byte *)(*(int *)(iVar33 + -0x7268) + (int)*(char *)(*(int *)uVar30 + iVar15)));
				lVar13 = (ulonglong)uVar4 + (ulonglong)uVar3 + param_3 + 0x20;
				*puVar10 = 2;
				uVar2 = puVar38[1];
				*puVar9 = (uint)uVar2;
				if (uVar2 != 0) {
					uVar25 = 2;
					drawLowerScreen(lVar13, uVar16, uVar19, bVar22, 2, uVar27, (char)lVar28, (char)lVar29,
					    in_stack_ffffff78);
				}
				*puVar10 = 0;
				uVar2 = puVar38[3];
				*puVar9 = (uint)uVar2;
				if (uVar2 != 0) {
					drawLowerScreen(lVar13 + -0x6000, uVar16, uVar19, bVar22, uVar25, uVar27, (char)lVar28, (char)lVar29, in_stack_ffffff78);
				}
				uVar2 = puVar38[5];
				*puVar9 = (uint)uVar2;
				if (uVar2 != 0) {
					drawLowerScreen(lVar13 + -0xc000, uVar16, uVar19, bVar22, uVar25, uVar27, (char)lVar28, (char)lVar29, in_stack_ffffff78);
				}
				uVar2 = puVar38[7];
				*puVar9 = (uint)uVar2;
				if (uVar2 != 0) {
					drawLowerScreen(lVar13 + -0x12000, uVar16, uVar19, bVar22, uVar25, uVar27, (char)lVar28,
					    (char)lVar29, in_stack_ffffff78);
				}
				uVar2 = puVar38[9];
				*puVar9 = (uint)uVar2;
				if (uVar2 != 0) {
					drawLowerScreen(lVar13 + -0x18000, uVar16, uVar19, bVar22, uVar25, uVar27, (char)lVar28,
					    (char)lVar29, in_stack_ffffff78);
				}
				uVar2 = puVar38[0xb];
				*puVar9 = (uint)uVar2;
				if ((uVar2 != 0) && (**(char **)((int)uVar12 + -0x7794) == '\x04')) {
					drawLowerScreen(lVar13 + -0x1e000, uVar16, uVar19, bVar22, uVar25, uVar27, (char)lVar28,
					    (char)lVar29, in_stack_ffffff78);
				}
				lVar26 = 0;
				uVar18 = param_2;
				uVar21 = param_3;
				uVar23 = param_4;
				scrollrt_draw_clipped_dungeon((ulonglong) * (uint *)puVar6 + (ulonglong) * (uint *)(puVar7 + iVar31 * 4) + param_3, param_1, param_2, param_3,
				    param_4, 0, (char)lVar28, (char)lVar29, in_stack_ffffff78);
			}
		}
		param_1 = param_1 + 1;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
		puVar38 = puVar38 + 0x10;
		uVar32 = uVar32 - 1;
	}
	lVar13 = param_1 * 0xe0;
	lVar34 = param_1 * 0x70;
	puVar36 = (uint *)(puVar7 + iVar31 * 4);
	iVar33 = (int)param_2 << 1;
	while (true) {
		iVar31 = (int)uVar12;
		iVar35 = (int)uVar32;
		uVar32 = uVar32 - 1;
		iVar15 = (int)param_2;
		iVar37 = (int)param_1;
		uVar27 = (undefined)lVar26;
		uVar25 = (undefined)lVar28;
		uVar16 = (undefined)lVar29;
		if (((iVar35 == 0) || (iVar15 < 0)) || (0x6f < iVar37))
			break;
		if ((iVar15 < 0x70) && (-1 < iVar37)) {
			iVar15 = (int)lVar34 + iVar15;
			*piVar11 = (int)*(short *)(**(int **)(iVar31 + -0x757c) + (int)lVar13 + iVar33);
			**(int **)(iVar31 + -0x7290) = (int)*(char *)(**(int **)(iVar31 + -0x758c) + iVar15);
			if (*piVar11 == 0) {
				world_draw_black_tile((ulonglong) * (uint *)puVar6 + (ulonglong)*puVar36 + param_3, 0, (char)uVar18,
				    (char)uVar21, (char)uVar23, uVar27, uVar25, uVar16, in_stack_ffffff78);
			} else {
				uVar24 = 1;
				uVar3 = *puVar36;
				uVar18 = (ulonglong)uVar3;
				cVar1 = *(char *)(*(int *)uVar30 + iVar15);
				bVar22 = *(byte *)(*(int *)(iVar31 + -0x7230) + *piVar11);
				uVar21 = (ulonglong)bVar22;
				lVar14 = (longlong)cVar1;
				lVar39 = (ulonglong) * (uint *)puVar6 + uVar18 + param_3;
				**(uint **)(iVar31 + -0x7294) = (uint)(bVar22 & *(byte *)(*(int *)(iVar31 + -0x7268) + (int)cVar1));
				*puVar10 = 1;
				uVar2 = *puVar38;
				*puVar9 = (uint)uVar2;
				if (uVar2 != 0) {
					drawLowerScreen(lVar39, cVar1, (char)uVar3, bVar22, 1, uVar27, uVar25, uVar16, in_stack_ffffff78);
				}
				*puVar10 = 2;
				uVar2 = puVar38[1];
				*puVar9 = (uint)uVar2;
				if (uVar2 != 0) {
					drawLowerScreen(lVar39 + 0x20, (char)lVar14, (char)uVar18, (char)uVar21, (char)uVar24,
					    (char)lVar26, (char)lVar28, (char)lVar29, in_stack_ffffff78);
				}
				*puVar10 = 0;
				iVar15 = 2;
				puVar5 = puVar38;
				while (true) {
					if (*piVar8 <= iVar15)
						break;
					uVar2 = puVar5[2];
					*puVar9 = (uint)uVar2;
					if (uVar2 != 0) {
						drawLowerScreen(lVar39 + -0x6000, (char)lVar14, (char)uVar18, (char)uVar21, (char)uVar24,
						    (char)lVar26, (char)lVar28, (char)lVar29, in_stack_ffffff78);
					}
					uVar2 = puVar5[3];
					*puVar9 = (uint)uVar2;
					if (uVar2 != 0) {
						drawLowerScreen(lVar39 + -0x5fe0, (char)lVar14, (char)uVar18, (char)uVar21, (char)uVar24,
						    (char)lVar26, (char)lVar28, (char)lVar29, in_stack_ffffff78);
					}
					iVar15 = iVar15 + 2;
					lVar39 = lVar39 + -0x6000;
					puVar5 = puVar5 + 2;
				}
				lVar26 = 1;
				uVar18 = param_2;
				uVar21 = param_3;
				uVar23 = param_4;
				scrollrt_draw_clipped_dungeon((ulonglong) * (uint *)puVar6 + (ulonglong)*puVar36 + param_3, param_1, param_2,
				    param_3, param_4, 1, (char)lVar28, (char)lVar29, in_stack_ffffff78);
			}
		}
		lVar13 = lVar13 + 0xe0;
		lVar34 = lVar34 + 0x70;
		param_1 = param_1 + 1;
		iVar33 = iVar33 + -2;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
		puVar38 = puVar38 + 0x10;
	}
	if (((param_6 != 0) && ((param_2 & 0xffffffff) < 0x70)) && ((param_1 & 0xffffffff) < 0x70)) {
		*piVar11 = (int)*(short *)(**(int **)(iVar31 + -0x757c) + iVar37 * 0xe0 + iVar15 * 2);
		iVar15 = iVar37 * 0x70 + iVar15;
		**(int **)(iVar31 + -0x7290) = (int)*(char *)(**(int **)(iVar31 + -0x758c) + iVar15);
		if (*piVar11 == 0) {
			world_draw_black_tile((ulonglong) * (uint *)puVar6 + (ulonglong)*puVar36 + param_3, (char)*(uint *)puVar6,
			    (char)uVar18, (char)uVar21, (char)uVar23, uVar27, uVar25, uVar16, in_stack_ffffff78);
		} else {
			uVar19 = 1;
			uVar20 = (undefined)*puVar36;
			bVar22 = *(byte *)(*(int *)(iVar31 + -0x7230) + *piVar11);
			uVar17 = (undefined) * (uint *)puVar6;
			lVar13 = (ulonglong) * (uint *)puVar6 + (ulonglong)*puVar36 + param_3;
			**(uint **)(iVar31 + -0x7294) = (uint)(bVar22 & *(byte *)(*(int *)(iVar31 + -0x7268) + (int)*(char *)(*(int *)uVar30 + iVar15)));
			*puVar10 = 1;
			uVar2 = *puVar38;
			*puVar9 = (uint)uVar2;
			if (uVar2 != 0) {
				uVar19 = 1;
				drawLowerScreen(lVar13, uVar17, uVar20, bVar22, 1, uVar27, uVar25, uVar16, in_stack_ffffff78);
			}
			*puVar10 = 0;
			uVar2 = puVar38[2];
			*puVar9 = (uint)uVar2;
			if (uVar2 != 0) {
				drawLowerScreen(lVar13 + -0x6000, uVar17, uVar20, bVar22, uVar19, uVar27, uVar25, uVar16,
				    in_stack_ffffff78);
			}
			uVar2 = puVar38[4];
			*puVar9 = (uint)uVar2;
			if (uVar2 != 0) {
				drawLowerScreen(lVar13 + -0xc000, uVar17, uVar20, bVar22, uVar19, uVar27, uVar25, uVar16,
				    in_stack_ffffff78);
			}
			uVar2 = puVar38[6];
			*puVar9 = (uint)uVar2;
			if (uVar2 != 0) {
				drawLowerScreen(lVar13 + -0x12000, uVar17, uVar20, bVar22, uVar19, uVar27, uVar25, uVar16,
				    in_stack_ffffff78);
			}
			uVar2 = puVar38[8];
			*puVar9 = (uint)uVar2;
			if (uVar2 != 0) {
				drawLowerScreen(lVar13 + -0x18000, uVar17, uVar20, bVar22, uVar19, uVar27, uVar25, uVar16,
				    in_stack_ffffff78);
			}
			uVar2 = puVar38[10];
			*puVar9 = (uint)uVar2;
			if ((uVar2 != 0) && (**(char **)(iVar31 + -0x7794) == '\x04')) {
				drawLowerScreen(lVar13 + -0x1e000, uVar17, uVar20, bVar22, uVar19, uVar27, uVar25, uVar16,
				    in_stack_ffffff78);
			}
			scrollrt_draw_clipped_dungeon((ulonglong) * (uint *)puVar6 + (ulonglong)*puVar36 + param_3, param_1, param_2,
			    param_3, param_4, 0, uVar25, uVar16, in_stack_ffffff78);
		}
	}
	return;
}

void scrollrt_draw_clipped_e_flag(longlong param_1, longlong param_2, int param_3, longlong param_4, ulonglong param_5,
    ulonglong param_6, ulonglong param_7, undefined param_8, undefined4 param_9)

{
	ushort uVar1;
	int iVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	uint *puVar7;
	int *piVar8;
	int iVar9;
	uint *puVar10;
	int *piVar11;
	undefined **ppuVar12;
	longlong lVar13;
	undefined uVar14;
	undefined uVar15;
	byte bVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;
	undefined uVar20;
	int iVar21;
	int iVar22;
	longlong lVar23;
	undefined4 in_stack_ffffff88;

	piVar11 = _DAT_100f2088;
	puVar10 = _DAT_100f2080;
	piVar8 = _DAT_100f1d40;
	puVar7 = _DAT_100f1d3c;
	puVar5 = PTR_DAT_100f1a44;
	uVar19 = (undefined)param_7;
	uVar18 = (undefined)param_6;
	uVar17 = (undefined)param_5;
	ppuVar12 = &toc;
	iVar21 = (int)param_2 * 0x70 + param_3;
	iVar2 = *_DAT_100f1d40;
	uVar3 = *_DAT_100f1d3c;
	iVar4 = *_DAT_100f2088;
	*_DAT_100f2088 = (int)*(short *)(*(int *)PTR_DAT_100f1a54 + (int)param_2 * 0xe0 + param_3 * 2);
	iVar9 = _DAT_100f1da0;
	iVar22 = _DAT_100f1d68;
	puVar6 = PTR_DAT_100f1a48;
	lVar23 = param_1 + param_4 * 0x6000;
	uVar20 = (undefined)_DAT_100f1da0;
	uVar15 = (undefined)_DAT_100f1d68;
	*piVar8 = (int)*(char *)(*(int *)puVar5 + iVar21);
	bVar16 = *(byte *)(iVar9 + *piVar11);
	*puVar7 = (uint)(bVar16 & *(byte *)(iVar22 + (int)*(char *)(*(int *)puVar6 + iVar21)));
	lVar13 = IsometricCoord(param_2, param_3);
	uVar14 = SUB41(ppuVar12[-0x1d61], 0);
	iVar21 = (int)param_4;
	iVar22 = *(int *)ppuVar12[-0x1d61] + (int)lVar13 * 0x20;
	lVar13 = lVar23;
	if (iVar21 == 2) {
	LAB_100a03a0:
		uVar1 = *(ushort *)(iVar22 + 0xc);
		lVar23 = lVar13 + -0x6000;
		*puVar10 = (uint)uVar1;
		if (uVar1 != 0) {
			drawLowerScreen(lVar23, uVar14, uVar15, bVar16, uVar17, uVar18, uVar19, uVar20, in_stack_ffffff88);
		}
		uVar1 = *(ushort *)(iVar22 + 0xe);
		*puVar10 = (uint)uVar1;
		if (uVar1 != 0) {
			drawLowerScreen(lVar13 + -0x5fe0, uVar14, uVar15, bVar16, uVar17, uVar18, uVar19, uVar20,
			    in_stack_ffffff88);
		}
	} else {
		if (iVar21 < 2) {
			if (iVar21 == 0) {
				uVar1 = *(ushort *)(iVar22 + 4);
				*puVar10 = (uint)uVar1;
				if (uVar1 != 0) {
					drawLowerScreen(lVar23, uVar14, uVar15, bVar16, uVar17, uVar18, uVar19, uVar20, in_stack_ffffff88);
				}
				uVar1 = *(ushort *)(iVar22 + 6);
				*puVar10 = (uint)uVar1;
				if (uVar1 != 0) {
					drawLowerScreen(lVar23 + 0x20, uVar14, uVar15, bVar16, uVar17, uVar18, uVar19, uVar20,
					    in_stack_ffffff88);
				}
			} else {
				if (iVar21 < 0)
					goto LAB_100a0404;
			}
			uVar1 = *(ushort *)(iVar22 + 8);
			lVar13 = lVar23 + -0x6000;
			*puVar10 = (uint)uVar1;
			if (uVar1 != 0) {
				drawLowerScreen(lVar13, uVar14, uVar15, bVar16, uVar17, uVar18, uVar19, uVar20, in_stack_ffffff88);
			}
			uVar1 = *(ushort *)(iVar22 + 10);
			*puVar10 = (uint)uVar1;
			if (uVar1 != 0) {
				drawLowerScreen(lVar23 + -0x5fe0, uVar14, uVar15, bVar16, uVar17, uVar18, uVar19, uVar20,
				    in_stack_ffffff88);
			}
			goto LAB_100a03a0;
		}
		if (3 < iVar21)
			goto LAB_100a0404;
	}
	uVar1 = *(ushort *)(iVar22 + 0x10);
	*puVar10 = (uint)uVar1;
	if (uVar1 != 0) {
		drawLowerScreen(lVar23 + -0x6000, uVar14, uVar15, bVar16, uVar17, uVar18, uVar19, uVar20, in_stack_ffffff88);
	}
	uVar1 = *(ushort *)(iVar22 + 0x12);
	*puVar10 = (uint)uVar1;
	if (uVar1 != 0) {
		drawLowerScreen(lVar23 + -0x5fe0, uVar14, uVar15, bVar16, uVar17, uVar18, uVar19, uVar20, in_stack_ffffff88);
	}
LAB_100a0404:
	if ((int)param_5 < 8) {
		scrollrt_draw_clipped_dungeon_2(param_1, param_2, (longlong)param_3, param_4, param_5, param_6, param_7, 0,
		    in_stack_ffffff88);
	}
	*piVar8 = iVar2;
	*puVar7 = uVar3;
	*piVar11 = iVar4;
	return;
}

void scrollrt_draw_clipped_dungeon_2(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	char cVar1;
	byte bVar2;
	char cVar3;
	char cVar4;
	char cVar5;
	byte bVar6;
	byte bVar7;
	char cVar8;
	char cVar9;
	short sVar10;
	uint uVar11;
	uint uVar12;
	uint uVar13;
	int iVar14;
	undefined *puVar15;
	int iVar16;
	uint *puVar17;
	int iVar18;
	undefined **ppuVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	longlong lVar23;
	undefined uVar24;
	int iVar26;
	ulonglong uVar25;
	undefined uVar27;
	ulonglong uVar28;
	undefined uVar29;
	undefined *puVar31;
	ulonglong uVar30;
	undefined uVar32;
	undefined uVar34;
	undefined *puVar33;
	undefined uVar35;
	uint uVar36;
	undefined uVar38;
	uint uVar37;
	int iVar39;
	undefined4 uVar40;
	undefined *puVar41;
	ulonglong uVar42;
	longlong lVar43;
	undefined4 in_stack_ffffff68;
	undefined in_stack_ffffff6f;

	puVar17 = _DAT_100f207c;
	uVar36 = (uint)param_7;
	puVar33 = (undefined *)param_6;
	puVar31 = (undefined *)param_5;
	uVar35 = (undefined)param_5;
	uVar36._3_1_ = (undefined)param_7;
	ppuVar19 = &toc;
	iVar16 = (int)param_2;
	iVar26 = (int)param_3;
	iVar18 = iVar16 * 0x70 + iVar26;
	uVar22 = (ulonglong) * (uint *)PTR_DAT_100f1a48;
	cVar3 = *(char *)(*(int *)PTR_DAT_100f194c + iVar18);
	uVar25 = (ulonglong) * (uint *)PTR_DAT_100f1954 + param_2 * 0xe0 + (ulonglong)(uint)(iVar26 * 2);
	cVar4 = *(char *)(*(int *)PTR_DAT_100f19a0 + iVar18);
	cVar5 = *(char *)(*(int *)PTR_DAT_100f1a38 + iVar18);
	bVar6 = *(byte *)(*(int *)PTR_DAT_100f1834 + iVar18);
	bVar7 = *(byte *)(*(int *)PTR_DAT_100f1944 + iVar18);
	cVar8 = *(char *)(*(int *)PTR_DAT_100f1950 + iVar18);
	cVar9 = *(char *)(*(uint *)PTR_DAT_100f1a48 + iVar18);
	iVar18 = (int)*(short *)(*(uint *)PTR_DAT_100f1954 + (int)(param_2 * 0xe0) + iVar26 * 2);
	cVar1 = *(char *)(*(int *)PTR_DAT_100f1950 + iVar16 * 0x70 + iVar26 + -1);
	sVar10 = *(short *)((int)uVar25 + -2);
	iVar39 = (int)param_8;
	uVar28 = param_4;
	uVar30 = param_5;
	uVar37 = uVar36;
	puVar41 = PTR_DAT_100f1828;
	if ((*(int *)PTR_DAT_100f19c8 != 0) && (uVar28 = param_4, uVar30 = param_5, uVar37 = uVar36, puVar41 = PTR_DAT_100f1828, (bVar6 & 0x40) != 0)) {
		uVar22 = (ulonglong) * (uint *)PTR_DAT_100f19c4;
		uVar25 = 1;
		uVar28 = 0x40;
		puVar33 = &DAT_00000008;
		uVar30 = param_5;
		uVar37 = uVar36;
		ppuVar19 = &toc;
		puVar41 = PTR_DAT_100f1828;
		FUN_1003dbe8((undefined4 *)param_1, uVar22, 1, 0x40, param_5, 8, uVar36, iVar39, in_stack_ffffff68);
	}
	if ((*(int *)ppuVar19[-0x1c39] != 0) && ((bVar6 & 1) != 0)) {
		puVar33 = &DAT_00000008;
		uVar37 = 1;
		uVar22 = param_3;
		uVar25 = param_6;
		uVar28 = param_7;
		uVar30 = param_5;
		DrawClippedMissile(iVar16, param_3, param_6, param_7, param_5, 8, 1, param_8, in_stack_ffffff68);
	}
	if (*(int *)ppuVar19[-0x1ca4] < (int)(char)*ppuVar19[-0x1c33]) {
		if (cVar4 != '\0') {
			uVar22 = ZEXT48(ppuVar19[-0x1d85]);
			lVar43 = uVar22 + ((ulonglong)((int)cVar4 & 0x1f) - 1) * 0x50;
			iVar14 = (int)lVar43;
			uVar42 = lVar43 + (ulonglong)(uint)((int)(char)((byte)((uint)(int)cVar4 >> 5) & 7) << 3);
			lVar43 = param_6 - (ulonglong) * (uint *)(iVar14 + 0x48);
			uVar20._4_4_ = (uint *)uVar42;
			uVar20 = FUN_100b915c(uVar20._4_4_, uVar22, uVar25, uVar28, uVar30, puVar33, uVar37, (int)param_8,
			    in_stack_ffffff68);
			if (uVar20 == 0) {
				FUN_100b91a4((int *)uVar20._4_4_, (char)uVar22, (char)uVar25, (char)uVar28, (char)uVar30,
				    (char)puVar33, (char)uVar37, (char)param_8, in_stack_ffffff68);
			} else {
				if (0 < *(int *)(iVar14 + 0x40)) {
					uVar21 = FUN_1003cdc8((byte *)uVar20);
					if ((int)uVar21 < 0x33) {
						uVar20 = FUN_1003cdc8((byte *)uVar20);
						uVar28 = (ulonglong) * (uint *)(iVar14 + 0x40);
						if ((int)*(uint *)(iVar14 + 0x40) <= (int)uVar20) {
							bVar2 = *(byte *)(iVar14 + 0x4c);
							param_8 = (ulonglong)bVar2;
							if (bVar2 == 0) {
								uVar30 = (ulonglong) * (uint *)(iVar14 + 0x44);
								uVar37 = 8;
								uVar22 = param_7;
								puVar33 = puVar31;
								Cl2DecodeFrm6(lVar43, param_7, uVar42, uVar28, uVar30, (int)puVar31, 8, (uint)bVar2,
								    in_stack_ffffff68);
								uVar25 = uVar42;
							} else {
								uVar30 = (ulonglong) * (uint *)(iVar14 + 0x44);
								uVar37 = 8;
								uVar22 = param_7;
								puVar33 = puVar31;
								Cl2DecodeFrm5(lVar43, param_7, uVar42, uVar28, uVar30, (int)puVar31, 8, (uint)bVar2,
								    in_stack_ffffff68);
								uVar25 = uVar42;
							}
							FUN_100b91a4((int *)uVar20._4_4_, (char)uVar22, (char)uVar25, (char)uVar28, (char)uVar30,
							    (char)puVar33, (char)uVar37, (char)param_8, in_stack_ffffff68);
							goto LAB_100a0694;
						}
					}
				}
				FUN_100b91a4((int *)uVar20._4_4_, (char)uVar22, (char)uVar25, (char)uVar28, (char)uVar30,
				    (char)puVar33, (char)uVar37, (char)param_8, in_stack_ffffff68);
			}
		}
	LAB_100a0694:
		if (cVar3 != '\0') {
			uVar30 = 1;
			uVar37 = 8;
			uVar22 = param_3;
			uVar25 = param_6;
			uVar28 = param_7;
			puVar33 = puVar31;
			DrawClippedObject(param_2, param_3, param_6, param_7, 1, puVar31, 8, (char)param_8, in_stack_ffffff68);
		}
	}
	if (bVar7 != 0) {
		puVar15 = ppuVar19[-0x1da4] + ((int)(char)bVar7 + -1) * 0x170;
		if ((*(int *)(puVar15 + 0x34) == 0) && (bVar7 < 0x80)) {
			uVar20 = FUN_100b8f7c((ulonglong) * (uint *)(puVar15 + 0x18), uVar22, uVar25, uVar28, uVar30, puVar33, uVar37, (int)param_8, in_stack_ffffff68);
			if (uVar20 == 0) {
				FUN_100b9100(*(int *)(puVar15 + 0x18), (char)uVar22, (char)uVar25, (char)uVar28, (char)uVar30,
				    (char)puVar33, (char)uVar37, (char)param_8, in_stack_ffffff68);
			} else {
				if (0 < *(int *)(puVar15 + 0x20)) {
					uVar42 = FUN_1003cdc8((byte *)uVar20);
					if ((int)uVar42 < 0x33) {
						uVar20 = FUN_1003cdc8((byte *)uVar20);
						uVar30 = (ulonglong) * (uint *)(puVar15 + 0x20);
						if ((int)*(uint *)(puVar15 + 0x20) <= (int)uVar20) {
							uVar11 = *(uint *)(puVar15 + 0x28);
							if ((int)(char)bVar7 + -1 == (int)(char)*ppuVar19[-0x1dd2]) {
								param_8 = 8;
								CelDrawHdrClrHL(0xb5, param_6 - (ulonglong)uVar11, param_7,
								    (ulonglong) * (uint *)(puVar15 + 0x18), uVar30,
								    (ulonglong) * (uint *)(puVar15 + 0x24), (int)puVar31, 8, in_stack_ffffff68);
							}
							uVar25 = (ulonglong) * (uint *)(puVar15 + 0x18);
							uVar28 = (ulonglong) * (uint *)(puVar15 + 0x20);
							uVar30 = (ulonglong) * (uint *)(puVar15 + 0x24);
							uVar37 = 8;
							uVar22 = param_7;
							puVar33 = puVar31;
							FUN_1003dfcc((int)(param_6 - (ulonglong)uVar11), param_7, uVar25, uVar28, uVar30,
							    (int)puVar31, 8, (int)param_8, in_stack_ffffff68);
							FUN_100b9100(*(int *)(puVar15 + 0x18), (char)uVar22, (char)uVar25, (char)uVar28,
							    (char)uVar30, (char)puVar33, (char)uVar37, (char)param_8, in_stack_ffffff68);
							goto LAB_100a07ac;
						}
					}
				}
				FUN_100b9100(*(int *)(puVar15 + 0x18), (char)uVar22, (char)uVar25, (char)uVar28, (char)uVar30,
				    (char)puVar33, (char)uVar37, (char)param_8, in_stack_ffffff68);
			}
		}
	}
LAB_100a07ac:
	if ((bVar6 & 0x20) != 0) {
		lVar43 = (longlong)cVar1 + 1;
		uVar20 = -lVar43;
		if ((uVar20 & 0xffffffff) < 4) {
			uVar25 = param_3 - 1;
			puVar15 = puVar41 + (int)lVar43 * -0x55ec;
			uVar30 = (ulonglong) * (uint *)(puVar15 + 100) + param_7;
			uVar28 = ((ulonglong) * (uint *)(puVar15 + 0x60) + param_6) - (ulonglong) * (uint *)(puVar15 + 0x94);
			puVar33 = *(undefined **)(puVar15 + 0x7c);
			uVar37 = *(uint *)(puVar15 + 0x8c);
			param_8 = (ulonglong) * (uint *)(puVar15 + 0x90);
			uVar22 = param_2;
			DrawClippedPlayer((int)uVar20, iVar16, uVar25, uVar28, uVar30, ZEXT48(puVar33), (ulonglong)uVar37, param_8, in_stack_ffffff68, in_stack_ffffff6f, puVar31, 8);
			if (iVar39 != 0) {
				if (*(int *)(puVar15 + 0x98) != 0) {
					if (*(int *)(puVar15 + 0x98) == 2) {
						scrollrt_draw_clipped_e_flag(param_1 - 0x3060, param_2 - 2, iVar26 + 1, param_4, param_5, param_6 - 0x60,
						    param_7 - 0x10, (char)param_8, in_stack_ffffff68);
					}
					uVar22 = param_2 - 1;
					uVar25 = param_3 + 1;
					puVar33 = (undefined *)(param_6 - 0x40);
					uVar28 = param_4;
					uVar30 = param_5;
					uVar37 = uVar36;
					scrollrt_draw_clipped_e_flag(param_1 - 0x40, uVar22, (int)uVar25, param_4, param_5, param_6 - 0x40, param_7,
					    (char)param_8, in_stack_ffffff68);
				}
			}
		}
	}
	uVar38 = (undefined)uVar37;
	uVar34 = SUB41(puVar33, 0);
	uVar32 = (undefined)uVar30;
	if ((bVar6 & 0x10) != 0) {
		if ((bVar6 & 0x40) == 0) {
			if (*(int *)(puVar41 + *(int *)ppuVar19[-0x1deb] * 0x55ec + 0x1cc) == 0)
				goto LAB_100a0998;
		}
		if (sVar10 < 0) {
			*puVar17 = -((int)sVar10 + 1);
			if (*puVar17 < 200) {
				lVar43 = ZEXT48(ppuVar19[-0x1dd5]) + (ulonglong)*puVar17 * 0xe8;
				iVar14 = (int)lVar43;
				if ((*(uint *)(iVar14 + 0xa0) & 1) == 0) {
					uVar11 = *(uint *)(iVar14 + 0xe0);
					uVar22 = (ulonglong)uVar11;
					if (uVar11 != 0) {
						uVar12 = *(uint *)(iVar14 + 0x38);
						uVar27 = (undefined)uVar12;
						uVar13 = *(uint *)(iVar14 + 0x3c);
						uVar29 = (undefined)uVar13;
						lVar23 = (ulonglong)uVar12 + param_6;
						uVar28 = (ulonglong)uVar13 + param_7;
						uVar25 = lVar23 - (ulonglong) * (uint *)(uVar11 + 0x1f0);
						FUN_100b915c((uint *)(iVar14 + 0x54), lVar23, (ulonglong)uVar12, (ulonglong)uVar13, uVar30,
						    puVar33, uVar37, (int)param_8, in_stack_ffffff68);
						uVar24 = (undefined)*puVar17;
						if (*puVar17 == *(uint *)ppuVar19[-0x1dd4]) {
							uVar32 = (undefined) * (uint *)(iVar14 + 0x68);
							uVar37 = *(uint *)(*(int *)(iVar14 + 0xe0) + 0x1ec);
							uVar34 = (undefined)uVar37;
							lVar43 = lVar43 + 0x54;
							uVar29 = (undefined)lVar43;
							param_8 = 8;
							uVar24 = (char)uVar25;
							uVar27 = (char)uVar28;
							uVar38 = uVar35;
							Cl2DecodeClrHL(0xe9, uVar25, uVar28, lVar43, (ulonglong) * (uint *)(iVar14 + 0x68),
							    (ulonglong)uVar37, (int)puVar31, 8, in_stack_ffffff68);
						}
						FUN_100b91a4((int *)(iVar14 + 0x54), uVar24, uVar27, uVar29, uVar32, uVar34, uVar38,
						    (char)param_8, in_stack_ffffff68);
						uVar30 = (ulonglong)*puVar17;
						uVar37 = 8;
						uVar22 = param_3;
						puVar33 = puVar31;
						DrawClippedMonster(iVar16, param_3, uVar25, uVar28, uVar30, (int)puVar31, 8, (int)param_8,
						    in_stack_ffffff68);
						if (iVar39 != 0) {
							if (*(int *)(iVar14 + 0x6c) == 0) {
								uVar22 = param_2 - 1;
								uVar25 = param_3 + 1;
								puVar33 = (undefined *)(param_6 - 0x40);
								uVar28 = param_4;
								uVar30 = param_5;
								uVar37 = uVar36;
								scrollrt_draw_clipped_e_flag(param_1 - 0x40, uVar22, (int)uVar25, param_4, param_5, param_6 - 0x40,
								    param_7, (char)param_8, in_stack_ffffff68);
							}
						}
					}
				}
			}
		}
	}
LAB_100a0998:
	if ((bVar6 & 4) != 0) {
		puVar33 = &DAT_00000008;
		uVar37 = 1;
		uVar22 = param_3;
		uVar25 = param_6;
		uVar28 = param_7;
		uVar30 = param_5;
		DrawDeadPlayer(param_2, param_3, param_6, param_7, param_5, 8, 1, param_8, in_stack_ffffff68);
	}
	if (('\0' < cVar8) && (uVar20 = (longlong)cVar8 - 1, (uVar20 & 0xffffffff) < 4)) {
		iVar14 = (int)uVar20;
		puVar15 = puVar41 + iVar14 * 0x55ec;
		uVar30 = (ulonglong) * (uint *)(puVar15 + 100) + param_7;
		uVar28 = ((ulonglong) * (uint *)(puVar15 + 0x60) + param_6) - (ulonglong) * (uint *)(puVar15 + 0x94);
		puVar33 = *(undefined **)(puVar15 + 0x7c);
		uVar37 = *(uint *)(puVar15 + 0x8c);
		param_8 = (ulonglong) * (uint *)(puVar15 + 0x90);
		uVar22 = param_2;
		uVar25 = param_3;
		DrawClippedPlayer(iVar14, iVar16, param_3, uVar28, uVar30, ZEXT48(puVar33), (ulonglong)uVar37, param_8,
		    in_stack_ffffff68, in_stack_ffffff6f, puVar31, 8);
		if ((iVar39 != 0) && (*(int *)(puVar15 + 0x98) != 0)) {
			if (*(int *)(puVar15 + 0x98) == 2) {
				scrollrt_draw_clipped_e_flag(param_1 - 0x3060, param_2 - 2, iVar26 + 1, param_4, param_5, param_6 - 0x60,
				    param_7 - 0x10, (char)param_8, in_stack_ffffff68);
			}
			uVar22 = param_2 - 1;
			uVar25 = param_3 + 1;
			puVar33 = (undefined *)(param_6 - 0x40);
			uVar28 = param_4;
			uVar30 = param_5;
			uVar37 = uVar36;
			scrollrt_draw_clipped_e_flag(param_1 - 0x40, uVar22, (int)uVar25, param_4, param_5, param_6 - 0x40, param_7,
			    (char)param_8, in_stack_ffffff68);
		}
	}
	uVar38 = (undefined)uVar37;
	uVar34 = SUB41(puVar33, 0);
	uVar32 = (undefined)uVar30;
	if (0 < iVar18) {
		if ((bVar6 & 0x40) == 0) {
			if (*(int *)(puVar41 + *(int *)ppuVar19[-0x1deb] * 0x55ec + 0x1cc) == 0)
				goto LAB_100a0b9c;
		}
		*puVar17 = iVar18 - 1;
		if (*puVar17 < 200) {
			lVar43 = ZEXT48(ppuVar19[-0x1dd5]) + (ulonglong)*puVar17 * 0xe8;
			iVar18 = (int)lVar43;
			if ((*(uint *)(iVar18 + 0xa0) & 1) == 0) {
				uVar11 = *(uint *)(iVar18 + 0xe0);
				uVar22 = (ulonglong)uVar11;
				if (uVar11 != 0) {
					uVar12 = *(uint *)(iVar18 + 0x38);
					uVar27 = (undefined)uVar12;
					uVar13 = *(uint *)(iVar18 + 0x3c);
					uVar29 = (undefined)uVar13;
					lVar23 = (ulonglong)uVar12 + param_6;
					uVar28 = (ulonglong)uVar13 + param_7;
					uVar25 = lVar23 - (ulonglong) * (uint *)(uVar11 + 0x1f0);
					FUN_100b915c((uint *)(iVar18 + 0x54), lVar23, (ulonglong)uVar12, (ulonglong)uVar13, uVar30,
					    puVar33, uVar37, (int)param_8, in_stack_ffffff68);
					uVar24 = (undefined)*puVar17;
					if (*puVar17 == *(uint *)ppuVar19[-0x1dd4]) {
						uVar32 = (undefined) * (uint *)(iVar18 + 0x68);
						uVar37 = *(uint *)(*(int *)(iVar18 + 0xe0) + 0x1ec);
						uVar34 = (undefined)uVar37;
						lVar43 = lVar43 + 0x54;
						uVar29 = (undefined)lVar43;
						param_8 = 8;
						uVar24 = (char)uVar25;
						uVar27 = (char)uVar28;
						uVar38 = uVar35;
						Cl2DecodeClrHL(0xe9, uVar25, uVar28, lVar43, (ulonglong) * (uint *)(iVar18 + 0x68),
						    (ulonglong)uVar37, (int)puVar31, 8, in_stack_ffffff68);
					}
					FUN_100b91a4((int *)(iVar18 + 0x54), uVar24, uVar27, uVar29, uVar32, uVar34, uVar38,
					    (char)param_8, in_stack_ffffff68);
					uVar30 = (ulonglong)*puVar17;
					uVar37 = 8;
					uVar22 = param_3;
					puVar33 = puVar31;
					DrawClippedMonster(iVar16, param_3, uVar25, uVar28, uVar30, (int)puVar31, 8, (int)param_8,
					    in_stack_ffffff68);
					if (iVar39 != 0) {
						if (*(int *)(iVar18 + 0x6c) == 0) {
							uVar22 = param_2 - 1;
							uVar25 = param_3 + 1;
							puVar33 = (undefined *)(param_6 - 0x40);
							uVar30 = param_5;
							uVar37 = uVar36;
							scrollrt_draw_clipped_e_flag(param_1 - 0x40, uVar22, (int)uVar25, param_4, param_5, param_6 - 0x40, param_7,
							    (char)param_8, in_stack_ffffff68);
							uVar28 = param_4;
						}
					}
				}
			}
		}
	}
LAB_100a0b9c:
	uVar40 = (undefined4)param_8;
	if ((bVar6 & 1) != 0) {
		puVar33 = &DAT_00000008;
		uVar37 = 0;
		uVar22 = param_3;
		uVar25 = param_6;
		uVar28 = param_7;
		uVar30 = param_5;
		DrawClippedMissile(iVar16, param_3, param_6, param_7, param_5, 8, 0, param_8, in_stack_ffffff68);
	}
	if (cVar3 != '\0') {
		if (*(int *)ppuVar19[-0x1ca4] < (int)(char)*ppuVar19[-0x1c33]) {
			uVar30 = 0;
			uVar37 = 8;
			uVar25 = param_6;
			uVar28 = param_7;
			puVar33 = puVar31;
			DrawClippedObject(param_2, param_3, param_6, param_7, 0, puVar31, 8, (char)uVar40, in_stack_ffffff68);
			uVar22 = param_3;
		}
	}
	uVar27 = SUB41(puVar33, 0);
	uVar34 = (undefined)uVar28;
	uVar32 = (undefined)uVar25;
	uVar38 = (undefined)uVar22;
	uVar24 = (undefined)uVar30;
	if (bVar7 != 0) {
		puVar41 = ppuVar19[-0x1da4] + ((int)(char)bVar7 + -1) * 0x170;
		if ((*(int *)(puVar41 + 0x34) != 0) && (bVar7 < 0x80)) {
			uVar22 = FUN_100b8f7c((ulonglong) * (uint *)(puVar41 + 0x18), uVar22, uVar25, uVar28, uVar30, puVar33, uVar37, uVar40, in_stack_ffffff68);
			if (uVar22 == 0) {
				FUN_100b9100(*(int *)(puVar41 + 0x18), uVar38, uVar32, uVar34, uVar24, uVar27, (char)uVar37,
				    (char)uVar40, in_stack_ffffff68);
			} else {
				if (0 < *(int *)(puVar41 + 0x20)) {
					uVar25 = FUN_1003cdc8((byte *)uVar22);
					if ((int)uVar25 < 0x33) {
						uVar22 = FUN_1003cdc8((byte *)uVar22);
						uVar36 = *(uint *)(puVar41 + 0x20);
						uVar24 = (undefined)uVar36;
						if ((int)uVar36 <= (int)uVar22) {
							uVar11 = *(uint *)(puVar41 + 0x28);
							if ((int)(char)bVar7 + -1 == (int)(char)*ppuVar19[-0x1dd2]) {
								uVar40 = 8;
								CelDrawHdrClrHL(0xb5, param_6 - (ulonglong)uVar11, param_7,
								    (ulonglong) * (uint *)(puVar41 + 0x18), (ulonglong)uVar36,
								    (ulonglong) * (uint *)(puVar41 + 0x24), (int)puVar31, 8, in_stack_ffffff68);
							}
							uVar38 = (undefined) * (uint *)(puVar41 + 0x18);
							uVar32 = (undefined) * (uint *)(puVar41 + 0x20);
							uVar34 = (undefined) * (uint *)(puVar41 + 0x24);
							uVar37 = 8;
							FUN_1003dfcc((int)(param_6 - (ulonglong)uVar11), param_7,
							    (ulonglong) * (uint *)(puVar41 + 0x18), (ulonglong) * (uint *)(puVar41 + 0x20), (ulonglong) * (uint *)(puVar41 + 0x24), (int)puVar31, 8, uVar40,
							    in_stack_ffffff68);
							FUN_100b9100(*(int *)(puVar41 + 0x18), (undefined)uVar36, uVar38, uVar32, uVar34, uVar35,
							    (char)uVar37, (char)uVar40, in_stack_ffffff68);
							goto LAB_100a0cf8;
						}
					}
				}
				FUN_100b9100(*(int *)(puVar41 + 0x18), uVar38, uVar32, uVar34, uVar24, uVar27, (char)uVar37,
				    (char)uVar40, in_stack_ffffff68);
			}
		}
	}
LAB_100a0cf8:
	if (cVar5 != '\0') {
		puVar17 = (uint *)ppuVar19[-0x1d5d];
		*(uint *)ppuVar19[-0x1ca5] = (uint)(byte)ppuVar19[-0x1c9a][(int)cVar9];
		FUN_1003e0a4(param_1, (ulonglong)*puVar17, (longlong)cVar5, 0x40, param_5, 8, uVar37, uVar40,
		    in_stack_ffffff68);
	}
	return;
}

void scrollrt_draw_lower_2(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    int param_5, ulonglong param_6, int param_7, char param_8, undefined4 param_9,
    undefined param_10, undefined4 param_11)

{
	byte bVar1;
	byte bVar2;
	ushort uVar3;
	int *piVar4;
	uint uVar5;
	int iVar6;
	undefined *puVar7;
	undefined *puVar8;
	int *piVar9;
	uint *puVar10;
	int *piVar11;
	longlong lVar12;
	int iVar15;
	ulonglong uVar13;
	ulonglong uVar14;
	ulonglong uVar16;
	ulonglong uVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	longlong lVar22;
	uint *puVar23;
	ulonglong uVar24;
	ulonglong uVar25;
	longlong lVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	longlong lVar32;
	undefined4 in_stack_ffffff78;

	piVar11 = _DAT_100f2088;
	puVar10 = _DAT_100f2080;
	piVar9 = _DAT_100f1d80;
	puVar8 = PTR_DAT_100f1938;
	puVar7 = PTR_DAT_100f17cc;
	lVar22 = (longlong)param_8;
	uVar21 = SEXT48(param_7);
	uVar25 = SEXT48(param_5);
	uVar14 = ZEXT48(&toc);
	iVar15 = (int)param_2;
	uVar19 = uVar25;
	uVar20 = param_6;
	lVar12 = IsometricCoord(param_1, iVar15);
	iVar31 = (int)uVar14;
	iVar6 = (int)param_6;
	uVar5 = (iVar6 + 1) * 2;
	uVar24 = (ulonglong)uVar5;
	iVar28 = **(int **)(iVar31 + -0x7584) + (int)lVar12 * 0x20;
	uVar13 = param_4;
	if (param_7 != 0) {
		uVar13 = param_4;
		if ((((-1 < iVar15) && (uVar13 = param_4, iVar15 < 0x70)) && (iVar29 = (int)param_1, uVar13 = param_4, -1 < iVar29)) && (uVar13 = param_4, iVar29 < 0x70)) {
			*piVar11 = (int)*(short *)(**(int **)(iVar31 + -0x757c) + iVar29 * 0xe0 + iVar15 * 2);
			iVar15 = iVar29 * 0x70 + iVar15;
			**(int **)(iVar31 + -0x7290) = (int)*(char *)(**(int **)(iVar31 + -0x758c) + iVar15);
			uVar13 = param_4;
			if (*piVar11 != 0) {
				iVar29 = 0;
				puVar23 = (uint *)(puVar8 + (int)param_4 * 4);
				bVar1 = *(byte *)(*(int *)(iVar31 + -0x7230) + *piVar11);
				uVar17 = (ulonglong)bVar1;
				uVar13 = (ulonglong)*puVar23;
				uVar16 = (ulonglong) * (uint *)puVar7;
				**(uint **)(iVar31 + -0x7294) = (uint)(bVar1 & *(byte *)(*(int *)(iVar31 + -0x7268) + (int)*(char *)(**(int **)(iVar31 + -0x7588) + iVar15)));
				lVar12 = uVar16 + uVar13 + param_3 + -0x5fe0;
				iVar31 = iVar28;
				while (iVar29 < (*piVar9 >> 1) + -1) {
					if ((iVar6 <= iVar29) && (uVar3 = *(ushort *)(iVar31 + 6), *puVar10 = (uint)uVar3, uVar3 != 0)) {
						drawLowerScreen(lVar12, (char)uVar13, (char)uVar16, (char)uVar17, (char)uVar19, (char)uVar20,
						    (char)uVar21, (char)lVar22, in_stack_ffffff78);
					}
					lVar12 = lVar12 + -0x6000;
					iVar31 = iVar31 + 4;
					iVar29 = iVar29 + 1;
				}
				uVar13 = param_4;
				if ((int)uVar5 < 8) {
					lVar22 = 0;
					uVar19 = uVar24;
					uVar20 = param_3;
					uVar13 = param_4;
					scrollrt_draw_clipped_dungeon_2((ulonglong) * (uint *)puVar7 + (ulonglong)*puVar23 + param_3 + uVar24 * -0x3000, param_1, param_2, param_6, uVar24, param_3, param_4, 0, in_stack_ffffff78);
					uVar21 = param_4;
				}
			}
		}
		param_1 = param_1 + 1;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
		uVar25 = uVar25 - 1;
		iVar28 = iVar28 + 0x20;
	}
	puVar23 = (uint *)(puVar8 + (int)uVar13 * 4);
	lVar12 = param_1 * 0xe0;
	lVar26 = param_1 * 0x70;
	iVar31 = (int)param_2 << 1;
	while (true) {
		iVar27 = (int)uVar25;
		uVar25 = uVar25 - 1;
		iVar30 = (int)param_1;
		iVar15 = (int)param_2;
		iVar29 = (int)uVar14;
		if (((iVar27 == 0) || (0x6f < iVar30)) || (iVar15 < 0))
			break;
		uVar16 = uVar13;
		if ((iVar15 < 0x70) && (uVar16 = uVar13, -1 < iVar30)) {
			iVar15 = (int)lVar26 + iVar15;
			piVar4 = *(int **)(iVar29 + -0x758c);
			*piVar11 = (int)*(short *)(**(int **)(iVar29 + -0x757c) + (int)lVar12 + iVar31);
			**(int **)(iVar29 + -0x7290) = (int)*(char *)(*piVar4 + iVar15);
			uVar16 = uVar13;
			if (*piVar11 != 0) {
				iVar27 = 0;
				bVar1 = *(byte *)(**(int **)(iVar29 + -0x7588) + iVar15);
				uVar17 = (ulonglong)bVar1;
				uVar19 = (ulonglong)*puVar23 + param_3;
				uVar16 = (ulonglong) * (uint *)puVar7;
				bVar2 = *(byte *)(*(int *)(iVar29 + -0x7230) + *piVar11);
				uVar18 = (ulonglong)bVar2;
				lVar32 = uVar16 + (uVar19 - 0x6000);
				**(uint **)(iVar29 + -0x7294) = (uint)(bVar2 & *(byte *)(*(int *)(iVar29 + -0x7268) + (int)(char)bVar1));
				iVar15 = iVar28;
				while (iVar27 < (*piVar9 >> 1) + -1) {
					if (iVar6 <= iVar27) {
						uVar3 = *(ushort *)(iVar15 + 4);
						*puVar10 = (uint)uVar3;
						if (uVar3 != 0) {
							drawLowerScreen(lVar32, (char)uVar16, (char)uVar17, (char)uVar18, (char)uVar19, (char)uVar20,
							    (char)uVar21, (char)lVar22, in_stack_ffffff78);
						}
						uVar3 = *(ushort *)(iVar15 + 6);
						*puVar10 = (uint)uVar3;
						if (uVar3 != 0) {
							drawLowerScreen(lVar32 + 0x20, (char)uVar16, (char)uVar17, (char)uVar18, (char)uVar19,
							    (char)uVar20, (char)uVar21, (char)lVar22, in_stack_ffffff78);
						}
					}
					iVar15 = iVar15 + 4;
					iVar27 = iVar27 + 1;
					lVar32 = lVar32 + -0x6000;
				}
				uVar16 = uVar13;
				if ((int)uVar5 < 8) {
					lVar22 = 1;
					uVar19 = uVar24;
					uVar20 = param_3;
					uVar16 = uVar13;
					scrollrt_draw_clipped_dungeon_2(((ulonglong) * (uint *)puVar7 + (ulonglong)*puVar23 + param_3) - (ulonglong)(uint)((iVar6 + 1) * 0x6000), param_1, param_2, param_6, uVar24,
					    param_3, uVar13, 1, in_stack_ffffff78);
					uVar21 = uVar13;
				}
			}
		}
		lVar12 = lVar12 + 0xe0;
		lVar26 = lVar26 + 0x70;
		param_1 = param_1 + 1;
		iVar31 = iVar31 + -2;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
		iVar28 = iVar28 + 0x20;
		uVar13 = uVar16;
	}
	if (((param_7 != 0) && ((param_2 & 0xffffffff) < 0x70)) && ((param_1 & 0xffffffff) < 0x70)) {
		*piVar11 = (int)*(short *)(**(int **)(iVar29 + -0x757c) + iVar30 * 0xe0 + iVar15 * 2);
		iVar15 = iVar30 * 0x70 + iVar15;
		**(int **)(iVar29 + -0x7290) = (int)*(char *)(**(int **)(iVar29 + -0x758c) + iVar15);
		if (*piVar11 != 0) {
			iVar31 = 0;
			lVar12 = (ulonglong)*puVar23 + param_3;
			bVar1 = *(byte *)(*(int *)(iVar29 + -0x7230) + *piVar11);
			uVar25 = (ulonglong)bVar1;
			uVar14 = (ulonglong) * (uint *)puVar7;
			lVar26 = uVar14 + lVar12 + -0x6000;
			**(uint **)(iVar29 + -0x7294) = (uint)(bVar1 & *(byte *)(*(int *)(iVar29 + -0x7268) + (int)*(char *)(**(int **)(iVar29 + -0x7588) + iVar15)));
			while (iVar31 < (*piVar9 >> 1) + -1) {
				if ((iVar6 <= iVar31) && (uVar3 = *(ushort *)(iVar28 + 4), *puVar10 = (uint)uVar3, uVar3 != 0)) {
					drawLowerScreen(lVar26, (char)uVar14, (char)uVar25, (char)lVar12, (char)uVar19, (char)uVar20,
					    (char)uVar21, (char)lVar22, in_stack_ffffff78);
				}
				lVar26 = lVar26 + -0x6000;
				iVar28 = iVar28 + 4;
				iVar31 = iVar31 + 1;
			}
			if ((int)uVar5 < 8) {
				scrollrt_draw_clipped_dungeon_2((ulonglong) * (uint *)puVar7 + (ulonglong)*puVar23 + param_3 + uVar24 * -0x3000,
				    param_1, param_2, param_6, uVar24, param_3, uVar13, 0, in_stack_ffffff78);
			}
		}
	}
	return;
}

void scrollrt_draw_e_flag(longlong param_1, longlong param_2, int param_3, ulonglong param_4, ulonglong param_5,
    ulonglong param_6, ulonglong param_7, undefined param_8, undefined4 param_9)

{
	ushort uVar1;
	int iVar2;
	uint uVar3;
	int iVar4;
	uint *puVar5;
	uint uVar6;
	uint uVar7;
	undefined *puVar8;
	undefined *puVar9;
	uint *puVar10;
	int *piVar11;
	int iVar12;
	int *piVar13;
	uint *puVar14;
	undefined *puVar15;
	int *piVar16;
	undefined **ppuVar17;
	longlong lVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	ulonglong uVar23;
	ulonglong uVar24;
	ulonglong uVar25;
	longlong lVar26;
	int iVar27;
	undefined4 in_stack_ffffff88;

	piVar16 = _DAT_100f2088;
	puVar15 = _DAT_100f2084;
	puVar14 = _DAT_100f2080;
	uVar6 = _DAT_100f1da0;
	piVar13 = _DAT_100f1d80;
	piVar11 = _DAT_100f1d40;
	puVar10 = _DAT_100f1d3c;
	puVar9 = PTR_DAT_100f1a48;
	puVar8 = PTR_DAT_100f1a44;
	ppuVar17 = &toc;
	iVar2 = *_DAT_100f1d40;
	uVar3 = *_DAT_100f1d3c;
	iVar4 = *_DAT_100f2088;
	iVar27 = (int)param_2 * 0x70 + param_3;
	uVar25 = (ulonglong)_DAT_100f1da0;
	*_DAT_100f2088 = (int)*(short *)(*(int *)PTR_DAT_100f1a54 + (int)param_2 * 0xe0 + param_3 * 2);
	iVar12 = _DAT_100f1d68;
	*piVar11 = (int)*(char *)(*(int *)puVar8 + iVar27);
	*puVar10 = (uint)(*(byte *)(uVar6 + *piVar16) & *(byte *)(iVar12 + (int)*(char *)(*(int *)puVar9 + iVar27)));
	uVar21 = param_4;
	uVar22 = param_5;
	uVar23 = param_6;
	uVar24 = param_7;
	lVar18 = IsometricCoord(param_2, param_3);
	puVar5 = (uint *)ppuVar17[-0x1d61];
	uVar19 = ZEXT48(puVar5);
	uVar7 = (int)lVar18 << 5;
	uVar20 = (ulonglong)uVar7;
	uVar6 = *puVar5;
	*puVar15 = 1;
	lVar18 = (ulonglong)uVar6 + uVar20;
	uVar1 = *(ushort *)lVar18;
	*puVar14 = (uint)uVar1;
	if (uVar1 != 0) {
		drawUpperScreen(param_1, (char)puVar5, (char)uVar7, (char)uVar21, (char)uVar22, (char)uVar23,
		    (char)uVar24, (char)uVar25, in_stack_ffffff88);
	}
	*puVar15 = 2;
	uVar1 = ((ushort *)lVar18)[1];
	*puVar14 = (uint)uVar1;
	if (uVar1 != 0) {
		drawUpperScreen(param_1 + 0x20, (char)uVar19, (char)uVar20, (char)uVar21, (char)uVar22, (char)uVar23,
		    (char)uVar24, (char)uVar25, in_stack_ffffff88);
	}
	*puVar15 = 0;
	iVar27 = 1;
	lVar26 = param_1;
	while (lVar18 = lVar18 + 4, iVar27 < (*piVar13 >> 1) + -1) {
		if (iVar27 <= (int)param_4) {
			uVar1 = *(ushort *)lVar18;
			*puVar14 = (uint)uVar1;
			if (uVar1 != 0) {
				drawUpperScreen(lVar26 + -0x6000, (char)uVar19, (char)uVar20, (char)uVar21, (char)uVar22,
				    (char)uVar23, (char)uVar24, (char)uVar25, in_stack_ffffff88);
			}
			uVar1 = ((ushort *)lVar18)[1];
			*puVar14 = (uint)uVar1;
			if (uVar1 != 0) {
				drawUpperScreen(lVar26 + -0x5fe0, (char)uVar19, (char)uVar20, (char)uVar21, (char)uVar22,
				    (char)uVar23, (char)uVar24, (char)uVar25, in_stack_ffffff88);
			}
		}
		iVar27 = iVar27 + 1;
		lVar26 = lVar26 + -0x6000;
	}
	scrollrt_draw_dungeon(param_1, param_2, (longlong)param_3, param_4, param_5, param_6, param_7, 0, in_stack_ffffff88);
	*piVar11 = iVar2;
	*puVar10 = uVar3;
	*piVar16 = iVar4;
	return;
}

void scrollrt_draw_dungeon(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	char cVar1;
	byte bVar2;
	char cVar3;
	char cVar4;
	char cVar5;
	byte bVar6;
	byte bVar7;
	char cVar8;
	char cVar9;
	short sVar10;
	uint uVar11;
	uint uVar12;
	uint uVar13;
	int iVar14;
	undefined *puVar15;
	int iVar16;
	uint *puVar17;
	int iVar18;
	undefined **ppuVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	longlong lVar23;
	undefined uVar24;
	int iVar26;
	ulonglong uVar25;
	undefined uVar27;
	ulonglong uVar28;
	undefined uVar29;
	uint uVar31;
	ulonglong uVar30;
	undefined uVar32;
	undefined uVar34;
	uint uVar33;
	undefined uVar36;
	undefined uVar37;
	uint uVar35;
	int iVar38;
	uint uVar39;
	undefined *puVar40;
	ulonglong uVar41;
	longlong lVar42;
	undefined4 in_stack_ffffff68;
	undefined in_stack_ffffff6f;

	puVar17 = _DAT_100f207c;
	uVar39 = (uint)param_7;
	uVar31 = (uint)param_5;
	uVar33 = (uint)param_6;
	uVar36 = (undefined)param_7;
	ppuVar19 = &toc;
	iVar16 = (int)param_2;
	iVar26 = (int)param_3;
	iVar18 = iVar16 * 0x70 + iVar26;
	uVar22 = (ulonglong) * (uint *)PTR_DAT_100f1a48;
	cVar3 = *(char *)(*(int *)PTR_DAT_100f194c + iVar18);
	uVar25 = (ulonglong) * (uint *)PTR_DAT_100f1954 + param_2 * 0xe0 + (ulonglong)(uint)(iVar26 * 2);
	cVar4 = *(char *)(*(int *)PTR_DAT_100f19a0 + iVar18);
	cVar5 = *(char *)(*(int *)PTR_DAT_100f1a38 + iVar18);
	bVar6 = *(byte *)(*(int *)PTR_DAT_100f1834 + iVar18);
	bVar7 = *(byte *)(*(int *)PTR_DAT_100f1944 + iVar18);
	cVar8 = *(char *)(*(int *)PTR_DAT_100f1950 + iVar18);
	cVar9 = *(char *)(*(uint *)PTR_DAT_100f1a48 + iVar18);
	iVar18 = (int)*(short *)(*(uint *)PTR_DAT_100f1954 + (int)(param_2 * 0xe0) + iVar26 * 2);
	cVar1 = *(char *)(*(int *)PTR_DAT_100f1950 + iVar16 * 0x70 + iVar26 + -1);
	sVar10 = *(short *)((int)uVar25 + -2);
	iVar38 = (int)param_8;
	uVar28 = param_4;
	uVar30 = param_5;
	uVar35 = uVar39;
	puVar40 = PTR_DAT_100f1828;
	if ((*(int *)PTR_DAT_100f19c8 != 0) && (uVar28 = param_4, uVar30 = param_5, uVar35 = uVar39, puVar40 = PTR_DAT_100f1828, (bVar6 & 0x40) != 0)) {
		uVar22 = (ulonglong) * (uint *)PTR_DAT_100f19c4;
		uVar25 = 1;
		uVar28 = 0x40;
		uVar30 = 0;
		uVar33 = uVar31;
		uVar35 = uVar39;
		ppuVar19 = &toc;
		puVar40 = PTR_DAT_100f1828;
		CelDecodeHdrOnly((undefined4 *)param_1, uVar22, 1, 0x40, 0, uVar31, uVar39, iVar38, in_stack_ffffff68);
	}
	if ((*(int *)ppuVar19[-0x1c39] != 0) && ((bVar6 & 1) != 0)) {
		uVar30 = 0;
		uVar35 = 1;
		uVar22 = param_3;
		uVar25 = param_6;
		uVar28 = param_7;
		uVar33 = uVar31;
		DrawMissile(iVar16, param_3, param_6, param_7, 0, param_5, 1, param_8, in_stack_ffffff68);
	}
	if (*(int *)ppuVar19[-0x1ca4] < (int)(char)*ppuVar19[-0x1c33]) {
		if (cVar4 != '\0') {
			uVar22 = ZEXT48(ppuVar19[-0x1d85]);
			lVar42 = uVar22 + ((ulonglong)((int)cVar4 & 0x1f) - 1) * 0x50;
			iVar14 = (int)lVar42;
			uVar41 = lVar42 + (ulonglong)(uint)((int)(char)((byte)((uint)(int)cVar4 >> 5) & 7) << 3);
			lVar42 = param_6 - (ulonglong) * (uint *)(iVar14 + 0x48);
			uVar20._4_4_ = (uint *)uVar41;
			uVar20 = FUN_100b915c(uVar20._4_4_, uVar22, uVar25, uVar28, uVar30, uVar33, uVar35, (int)param_8,
			    in_stack_ffffff68);
			if (uVar20 == 0) {
				FUN_100b91a4((int *)uVar20._4_4_, (char)uVar22, (char)uVar25, (char)uVar28, (char)uVar30,
				    (char)uVar33, (char)uVar35, (char)param_8, in_stack_ffffff68);
			} else {
				if (0 < *(int *)(iVar14 + 0x40)) {
					uVar21 = FUN_1003cdc8((byte *)uVar20);
					if ((int)uVar21 < 0x33) {
						uVar20 = FUN_1003cdc8((byte *)uVar20);
						uVar28 = (ulonglong) * (uint *)(iVar14 + 0x40);
						if ((int)*(uint *)(iVar14 + 0x40) <= (int)uVar20) {
							bVar2 = *(byte *)(iVar14 + 0x4c);
							param_8 = (ulonglong)bVar2;
							if (bVar2 == 0) {
								uVar30 = (ulonglong) * (uint *)(iVar14 + 0x44);
								uVar33 = 0;
								uVar22 = param_7;
								uVar35 = uVar31;
								Cl2DecodeLightTbl(lVar42, param_7, uVar41, uVar28, uVar30, 0, uVar31, (uint)bVar2,
								    in_stack_ffffff68);
								uVar25 = uVar41;
							} else {
								uVar30 = (ulonglong) * (uint *)(iVar14 + 0x44);
								uVar33 = 0;
								uVar22 = param_7;
								uVar35 = uVar31;
								Cl2DecodeFrm3(lVar42, param_7, uVar41, uVar28, uVar30, 0, uVar31, (uint)bVar2,
								    in_stack_ffffff68);
								uVar25 = uVar41;
							}
							FUN_100b91a4((int *)uVar20._4_4_, (char)uVar22, (char)uVar25, (char)uVar28, (char)uVar30,
							    (char)uVar33, (char)uVar35, (char)param_8, in_stack_ffffff68);
							goto LAB_100a15ec;
						}
					}
				}
				FUN_100b91a4((int *)uVar20._4_4_, (char)uVar22, (char)uVar25, (char)uVar28, (char)uVar30,
				    (char)uVar33, (char)uVar35, (char)param_8, in_stack_ffffff68);
			}
		}
	LAB_100a15ec:
		if (cVar3 != '\0') {
			uVar30 = 1;
			uVar33 = 0;
			uVar22 = param_3;
			uVar25 = param_6;
			uVar28 = param_7;
			uVar35 = uVar31;
			DrawObject(param_2, param_3, param_6, param_7, 1, (undefined *)0x0, uVar31, (char)param_8,
			    in_stack_ffffff68);
		}
	}
	if (bVar7 != 0) {
		puVar15 = ppuVar19[-0x1da4] + ((int)(char)bVar7 + -1) * 0x170;
		if ((*(int *)(puVar15 + 0x34) == 0) && (bVar7 < 0x80)) {
			uVar20 = FUN_100b8f7c((ulonglong) * (uint *)(puVar15 + 0x18), uVar22, uVar25, uVar28, uVar30, uVar33,
			    uVar35, (int)param_8, in_stack_ffffff68);
			if (uVar20 == 0) {
				FUN_100b9100(*(int *)(puVar15 + 0x18), (char)uVar22, (char)uVar25, (char)uVar28, (char)uVar30,
				    (char)uVar33, (char)uVar35, (char)param_8, in_stack_ffffff68);
			} else {
				if (0 < *(int *)(puVar15 + 0x20)) {
					uVar41 = FUN_1003cdc8((byte *)uVar20);
					if ((int)uVar41 < 0x33) {
						uVar20 = FUN_1003cdc8((byte *)uVar20);
						uVar30 = (ulonglong) * (uint *)(puVar15 + 0x20);
						if ((int)*(uint *)(puVar15 + 0x20) <= (int)uVar20) {
							uVar11 = *(uint *)(puVar15 + 0x28);
							if ((int)(char)bVar7 + -1 == (int)(char)*ppuVar19[-0x1dd2]) {
								param_8 = param_5;
								CelDecodeClr(0xb5, param_6 - (ulonglong)uVar11, param_7,
								    (ulonglong) * (uint *)(puVar15 + 0x18), uVar30,
								    (ulonglong) * (uint *)(puVar15 + 0x24), 0, uVar31, in_stack_ffffff68);
							}
							uVar25 = (ulonglong) * (uint *)(puVar15 + 0x18);
							uVar28 = (ulonglong) * (uint *)(puVar15 + 0x20);
							uVar30 = (ulonglong) * (uint *)(puVar15 + 0x24);
							uVar33 = 0;
							uVar22 = param_7;
							uVar35 = uVar31;
							CelDecodeHdrLightOnly((int)(param_6 - (ulonglong)uVar11), param_7, uVar25, uVar28, uVar30, 0, uVar31,
							    (int)param_8, in_stack_ffffff68);
							FUN_100b9100(*(int *)(puVar15 + 0x18), (char)uVar22, (char)uVar25, (char)uVar28,
							    (char)uVar30, (char)uVar33, (char)uVar35, (char)param_8, in_stack_ffffff68);
							goto LAB_100a1704;
						}
					}
				}
				FUN_100b9100(*(int *)(puVar15 + 0x18), (char)uVar22, (char)uVar25, (char)uVar28, (char)uVar30,
				    (char)uVar33, (char)uVar35, (char)param_8, in_stack_ffffff68);
			}
		}
	}
LAB_100a1704:
	if ((bVar6 & 0x20) != 0) {
		lVar42 = (longlong)cVar1 + 1;
		uVar20 = -lVar42;
		if ((uVar20 & 0xffffffff) < 4) {
			uVar25 = param_3 - 1;
			puVar15 = puVar40 + (int)lVar42 * -0x55ec;
			uVar30 = (ulonglong) * (uint *)(puVar15 + 100) + param_7;
			uVar28 = ((ulonglong) * (uint *)(puVar15 + 0x60) + param_6) - (ulonglong) * (uint *)(puVar15 + 0x94);
			uVar33 = *(uint *)(puVar15 + 0x7c);
			uVar35 = *(uint *)(puVar15 + 0x8c);
			param_8 = (ulonglong) * (uint *)(puVar15 + 0x90);
			uVar22 = param_2;
			DrawPlayer((int)uVar20, iVar16, uVar25, uVar28, uVar30, (ulonglong)uVar33, (ulonglong)uVar35,
			    param_8, in_stack_ffffff68, in_stack_ffffff6f, 0, uVar31);
			if (iVar38 != 0) {
				if (*(int *)(puVar15 + 0x98) != 0) {
					if (*(int *)(puVar15 + 0x98) == 2) {
						scrollrt_draw_e_flag(param_1 - 0x3060, param_2 - 2, iVar26 + 1, param_4, param_5, param_6 - 0x60,
						    param_7 - 0x10, (char)param_8, in_stack_ffffff68);
					}
					uVar22 = param_2 - 1;
					uVar25 = param_3 + 1;
					uVar33 = (uint)(param_6 - 0x40);
					uVar28 = param_4;
					uVar30 = param_5;
					uVar35 = uVar39;
					scrollrt_draw_e_flag(param_1 - 0x40, uVar22, (int)uVar25, param_4, param_5, param_6 - 0x40, param_7,
					    (char)param_8, in_stack_ffffff68);
				}
			}
		}
	}
	uVar37 = (undefined)uVar35;
	uVar34 = (undefined)uVar33;
	uVar32 = (undefined)uVar30;
	if ((bVar6 & 0x10) != 0) {
		if ((bVar6 & 0x40) == 0) {
			if (*(int *)(puVar40 + *(int *)ppuVar19[-0x1deb] * 0x55ec + 0x1cc) == 0)
				goto LAB_100a18f0;
		}
		if (sVar10 < 0) {
			*puVar17 = -((int)sVar10 + 1);
			if (*puVar17 < 200) {
				lVar42 = ZEXT48(ppuVar19[-0x1dd5]) + (ulonglong)*puVar17 * 0xe8;
				iVar14 = (int)lVar42;
				if ((*(uint *)(iVar14 + 0xa0) & 1) == 0) {
					uVar11 = *(uint *)(iVar14 + 0xe0);
					uVar22 = (ulonglong)uVar11;
					if (uVar11 != 0) {
						uVar12 = *(uint *)(iVar14 + 0x38);
						uVar27 = (undefined)uVar12;
						uVar13 = *(uint *)(iVar14 + 0x3c);
						uVar29 = (undefined)uVar13;
						lVar23 = (ulonglong)uVar12 + param_6;
						uVar28 = (ulonglong)uVar13 + param_7;
						uVar25 = lVar23 - (ulonglong) * (uint *)(uVar11 + 0x1f0);
						FUN_100b915c((uint *)(iVar14 + 0x54), lVar23, (ulonglong)uVar12, (ulonglong)uVar13, uVar30,
						    uVar33, uVar35, (int)param_8, in_stack_ffffff68);
						uVar24 = (undefined)*puVar17;
						if (*puVar17 == *(uint *)ppuVar19[-0x1dd4]) {
							uVar32 = (undefined) * (uint *)(iVar14 + 0x68);
							uVar33 = *(uint *)(*(int *)(iVar14 + 0xe0) + 0x1ec);
							uVar34 = (undefined)uVar33;
							lVar42 = lVar42 + 0x54;
							uVar29 = (undefined)lVar42;
							uVar37 = 0;
							param_8 = param_5;
							uVar24 = (char)uVar25;
							uVar27 = (char)uVar28;
							Cl2DecodeFrm2(0xe9, uVar25, uVar28, lVar42, (ulonglong) * (uint *)(iVar14 + 0x68),
							    (ulonglong)uVar33, 0, uVar31, in_stack_ffffff68);
						}
						FUN_100b91a4((int *)(iVar14 + 0x54), uVar24, uVar27, uVar29, uVar32, uVar34, uVar37,
						    (char)param_8, in_stack_ffffff68);
						uVar30 = (ulonglong)*puVar17;
						uVar33 = 0;
						uVar22 = param_3;
						uVar35 = uVar31;
						DrawMonster(iVar16, param_3, uVar25, uVar28, uVar30, 0, uVar31, (int)param_8, in_stack_ffffff68);
						if (iVar38 != 0) {
							if (*(int *)(iVar14 + 0x6c) == 0) {
								uVar22 = param_2 - 1;
								uVar25 = param_3 + 1;
								uVar33 = (uint)(param_6 - 0x40);
								uVar28 = param_4;
								uVar30 = param_5;
								uVar35 = uVar39;
								scrollrt_draw_e_flag(param_1 - 0x40, uVar22, (int)uVar25, param_4, param_5, param_6 - 0x40,
								    param_7, (char)param_8, in_stack_ffffff68);
							}
						}
					}
				}
			}
		}
	}
LAB_100a18f0:
	if ((bVar6 & 4) != 0) {
		uVar30 = 0;
		uVar35 = 0;
		uVar22 = param_3;
		uVar25 = param_6;
		uVar28 = param_7;
		uVar33 = uVar31;
		DrawDeadPlayer(param_2, param_3, param_6, param_7, 0, param_5, 0, param_8, in_stack_ffffff68);
	}
	if (('\0' < cVar8) && (uVar20 = (longlong)cVar8 - 1, (uVar20 & 0xffffffff) < 4)) {
		iVar14 = (int)uVar20;
		puVar15 = puVar40 + iVar14 * 0x55ec;
		uVar30 = (ulonglong) * (uint *)(puVar15 + 100) + param_7;
		uVar28 = ((ulonglong) * (uint *)(puVar15 + 0x60) + param_6) - (ulonglong) * (uint *)(puVar15 + 0x94);
		uVar33 = *(uint *)(puVar15 + 0x7c);
		uVar35 = *(uint *)(puVar15 + 0x8c);
		param_8 = (ulonglong) * (uint *)(puVar15 + 0x90);
		uVar22 = param_2;
		uVar25 = param_3;
		DrawPlayer(iVar14, iVar16, param_3, uVar28, uVar30, (ulonglong)uVar33, (ulonglong)uVar35, param_8,
		    in_stack_ffffff68, in_stack_ffffff6f, 0, uVar31);
		if ((iVar38 != 0) && (*(int *)(puVar15 + 0x98) != 0)) {
			if (*(int *)(puVar15 + 0x98) == 2) {
				scrollrt_draw_e_flag(param_1 - 0x3060, param_2 - 2, iVar26 + 1, param_4, param_5, param_6 - 0x60,
				    param_7 - 0x10, (char)param_8, in_stack_ffffff68);
			}
			uVar22 = param_2 - 1;
			uVar25 = param_3 + 1;
			uVar33 = (uint)(param_6 - 0x40);
			uVar28 = param_4;
			uVar30 = param_5;
			uVar35 = uVar39;
			scrollrt_draw_e_flag(param_1 - 0x40, uVar22, (int)uVar25, param_4, param_5, param_6 - 0x40, param_7,
			    (char)param_8, in_stack_ffffff68);
		}
	}
	uVar37 = (undefined)uVar35;
	uVar34 = (undefined)uVar33;
	uVar32 = (undefined)uVar30;
	if (0 < iVar18) {
		if ((bVar6 & 0x40) == 0) {
			if (*(int *)(puVar40 + *(int *)ppuVar19[-0x1deb] * 0x55ec + 0x1cc) == 0)
				goto LAB_100a1af4;
		}
		*puVar17 = iVar18 - 1;
		if (*puVar17 < 200) {
			lVar42 = ZEXT48(ppuVar19[-0x1dd5]) + (ulonglong)*puVar17 * 0xe8;
			iVar18 = (int)lVar42;
			if ((*(uint *)(iVar18 + 0xa0) & 1) == 0) {
				uVar11 = *(uint *)(iVar18 + 0xe0);
				uVar22 = (ulonglong)uVar11;
				if (uVar11 != 0) {
					uVar12 = *(uint *)(iVar18 + 0x38);
					uVar27 = (undefined)uVar12;
					uVar13 = *(uint *)(iVar18 + 0x3c);
					uVar29 = (undefined)uVar13;
					lVar23 = (ulonglong)uVar12 + param_6;
					uVar28 = (ulonglong)uVar13 + param_7;
					uVar25 = lVar23 - (ulonglong) * (uint *)(uVar11 + 0x1f0);
					FUN_100b915c((uint *)(iVar18 + 0x54), lVar23, (ulonglong)uVar12, (ulonglong)uVar13, uVar30,
					    uVar33, uVar35, (int)param_8, in_stack_ffffff68);
					uVar24 = (undefined)*puVar17;
					if (*puVar17 == *(uint *)ppuVar19[-0x1dd4]) {
						uVar32 = (undefined) * (uint *)(iVar18 + 0x68);
						uVar33 = *(uint *)(*(int *)(iVar18 + 0xe0) + 0x1ec);
						uVar34 = (undefined)uVar33;
						lVar42 = lVar42 + 0x54;
						uVar29 = (undefined)lVar42;
						uVar37 = 0;
						param_8 = param_5;
						uVar24 = (char)uVar25;
						uVar27 = (char)uVar28;
						Cl2DecodeFrm2(0xe9, uVar25, uVar28, lVar42, (ulonglong) * (uint *)(iVar18 + 0x68),
						    (ulonglong)uVar33, 0, uVar31, in_stack_ffffff68);
					}
					FUN_100b91a4((int *)(iVar18 + 0x54), uVar24, uVar27, uVar29, uVar32, uVar34, uVar37,
					    (char)param_8, in_stack_ffffff68);
					uVar30 = (ulonglong)*puVar17;
					uVar33 = 0;
					uVar22 = param_3;
					uVar35 = uVar31;
					DrawMonster(iVar16, param_3, uVar25, uVar28, uVar30, 0, uVar31, (int)param_8, in_stack_ffffff68);
					if (iVar38 != 0) {
						if (*(int *)(iVar18 + 0x6c) == 0) {
							uVar22 = param_2 - 1;
							uVar25 = param_3 + 1;
							uVar33 = (uint)(param_6 - 0x40);
							uVar30 = param_5;
							uVar35 = uVar39;
							scrollrt_draw_e_flag(param_1 - 0x40, uVar22, (int)uVar25, param_4, param_5, param_6 - 0x40, param_7,
							    (char)param_8, in_stack_ffffff68);
							uVar28 = param_4;
						}
					}
				}
			}
		}
	}
LAB_100a1af4:
	uVar39 = (uint)param_8;
	if ((bVar6 & 1) != 0) {
		uVar30 = 0;
		uVar35 = 0;
		uVar22 = param_3;
		uVar25 = param_6;
		uVar28 = param_7;
		uVar33 = uVar31;
		DrawMissile(iVar16, param_3, param_6, param_7, 0, param_5, 0, param_8, in_stack_ffffff68);
	}
	if (cVar3 != '\0') {
		if (*(int *)ppuVar19[-0x1ca4] < (int)(char)*ppuVar19[-0x1c33]) {
			uVar30 = 0;
			uVar33 = 0;
			uVar25 = param_6;
			uVar28 = param_7;
			uVar35 = uVar31;
			DrawObject(param_2, param_3, param_6, param_7, 0, (undefined *)0x0, uVar31, (char)uVar39,
			    in_stack_ffffff68);
			uVar22 = param_3;
		}
	}
	uVar27 = (undefined)uVar33;
	uVar37 = (undefined)uVar28;
	uVar34 = (undefined)uVar25;
	uVar32 = (undefined)uVar22;
	uVar24 = (undefined)uVar30;
	if (bVar7 != 0) {
		puVar40 = ppuVar19[-0x1da4] + ((int)(char)bVar7 + -1) * 0x170;
		if ((*(int *)(puVar40 + 0x34) != 0) && (bVar7 < 0x80)) {
			uVar22 = FUN_100b8f7c((ulonglong) * (uint *)(puVar40 + 0x18), uVar22, uVar25, uVar28, uVar30, uVar33,
			    uVar35, uVar39, in_stack_ffffff68);
			if (uVar22 == 0) {
				FUN_100b9100(*(int *)(puVar40 + 0x18), uVar32, uVar34, uVar37, uVar24, uVar27, (char)uVar35,
				    (char)uVar39, in_stack_ffffff68);
			} else {
				if (0 < *(int *)(puVar40 + 0x20)) {
					uVar25 = FUN_1003cdc8((byte *)uVar22);
					if ((int)uVar25 < 0x33) {
						uVar22 = FUN_1003cdc8((byte *)uVar22);
						uVar33 = *(uint *)(puVar40 + 0x20);
						uVar24 = (undefined)uVar33;
						if ((int)uVar33 <= (int)uVar22) {
							uVar11 = *(uint *)(puVar40 + 0x28);
							if ((int)(char)bVar7 + -1 == (int)(char)*ppuVar19[-0x1dd2]) {
								uVar39 = uVar31;
								CelDecodeClr(0xb5, param_6 - (ulonglong)uVar11, param_7,
								    (ulonglong) * (uint *)(puVar40 + 0x18), (ulonglong)uVar33,
								    (ulonglong) * (uint *)(puVar40 + 0x24), 0, uVar31, in_stack_ffffff68);
							}
							uVar32 = (undefined) * (uint *)(puVar40 + 0x18);
							uVar34 = (undefined) * (uint *)(puVar40 + 0x20);
							uVar37 = (undefined) * (uint *)(puVar40 + 0x24);
							uVar24 = 0;
							uVar35 = uVar31;
							CelDecodeHdrLightOnly((int)(param_6 - (ulonglong)uVar11), param_7,
							    (ulonglong) * (uint *)(puVar40 + 0x18), (ulonglong) * (uint *)(puVar40 + 0x20), (ulonglong) * (uint *)(puVar40 + 0x24), 0, uVar31, uVar39, in_stack_ffffff68);
							FUN_100b9100(*(int *)(puVar40 + 0x18), uVar36, uVar32, uVar34, uVar37, uVar24, (char)uVar35,
							    (char)uVar39, in_stack_ffffff68);
							goto LAB_100a1c50;
						}
					}
				}
				FUN_100b9100(*(int *)(puVar40 + 0x18), uVar32, uVar34, uVar37, uVar24, uVar27, (char)uVar35,
				    (char)uVar39, in_stack_ffffff68);
			}
		}
	}
LAB_100a1c50:
	if (cVar5 != '\0') {
		puVar17 = (uint *)ppuVar19[-0x1d5d];
		*(uint *)ppuVar19[-0x1ca5] = (uint)(byte)ppuVar19[-0x1c9a][(int)cVar9];
		CelDecodeHdrLightTrans(param_1, (ulonglong)*puVar17, (longlong)cVar5, 0x40, 0, uVar31, uVar35, uVar39,
		    in_stack_ffffff68);
	}
	return;
}

void scrollrt_draw_upper(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4,
    int param_5, ulonglong param_6, int param_7, char param_8, undefined4 param_9,
    undefined param_10, int param_11, undefined4 param_12)

{
	ushort uVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	ushort *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	int *piVar9;
	uint *puVar10;
	undefined *puVar11;
	int *piVar12;
	ulonglong uVar13;
	longlong lVar14;
	int iVar15;
	undefined uVar16;
	ulonglong uVar17;
	undefined uVar19;
	ulonglong uVar18;
	byte bVar21;
	ulonglong uVar20;
	undefined uVar24;
	ulonglong uVar22;
	undefined8 uVar23;
	ulonglong uVar25;
	undefined uVar26;
	ulonglong uVar27;
	undefined uVar28;
	undefined uVar30;
	longlong lVar29;
	ulonglong uVar31;
	int iVar32;
	longlong lVar33;
	uint *puVar34;
	ushort *puVar35;
	int iVar36;
	int iVar37;
	longlong lVar38;
	undefined4 in_stack_ffffff78;
	uint local_54;

	piVar12 = _DAT_100f2088;
	puVar11 = _DAT_100f2084;
	puVar10 = _DAT_100f2080;
	piVar9 = _DAT_100f1d80;
	puVar8 = PTR_DAT_100f1938;
	puVar7 = PTR_DAT_100f17cc;
	lVar29 = (longlong)param_8;
	uVar27 = SEXT48(param_7);
	uVar22 = SEXT48(param_5);
	uVar13 = ZEXT48(&toc);
	iVar15 = (int)param_2;
	uVar17 = param_3;
	uVar25 = param_6;
	uVar31 = param_4;
	lVar14 = IsometricCoord(param_1, iVar15);
	uVar30 = (undefined)lVar29;
	uVar28 = (undefined)uVar27;
	uVar26 = (undefined)uVar25;
	uVar24 = (undefined)uVar22;
	iVar4 = (int)param_6;
	iVar32 = (int)uVar13;
	local_54 = (iVar4 + 1) * 2;
	puVar35 = (ushort *)(**(int **)(iVar32 + -0x7584) + (int)lVar14 * 0x20);
	if (8 < (int)local_54) {
		local_54 = 8;
	}
	param_11 = param_5;
	if (param_7 != 0) {
		if ((((-1 < iVar15) && (iVar15 < 0x70)) && (iVar36 = (int)param_1, -1 < iVar36)) && (iVar36 < 0x70)) {
			*piVar12 = (int)*(short *)(**(int **)(iVar32 + -0x757c) + iVar36 * 0xe0 + iVar15 * 2);
			iVar15 = iVar36 * 0x70 + iVar15;
			**(int **)(iVar32 + -0x7290) = (int)*(char *)(**(int **)(iVar32 + -0x758c) + iVar15);
			iVar36 = (int)uVar31;
			if (*piVar12 == 0) {
				world_draw_black_tile((ulonglong) * (uint *)puVar7 + (ulonglong) * (uint *)(puVar8 + iVar36 * 4) + param_3, (char)*(uint *)puVar7,
				    (char)uVar17, (char)param_4, uVar24, uVar26, uVar28, uVar30, in_stack_ffffff78);
			} else {
				bVar21 = *(byte *)(*(int *)(iVar32 + -0x7230) + *piVar12);
				uVar2 = *(uint *)(puVar8 + iVar36 * 4);
				uVar16 = (undefined)uVar2;
				uVar3 = *(uint *)puVar7;
				uVar19 = (undefined)uVar3;
				**(uint **)(iVar32 + -0x7294) = (uint)(bVar21 & *(byte *)(*(int *)(iVar32 + -0x7268) + (int)*(char *)(**(int **)(iVar32 + -0x7588) + iVar15)));
				lVar14 = (ulonglong)uVar3 + (ulonglong)uVar2 + param_3 + 0x20;
				uVar27 = uVar31;
				if ((-1 < iVar4) && (uVar1 = puVar35[1], *puVar10 = (uint)uVar1, uVar27 = uVar31, uVar1 != 0)) {
					*puVar11 = 2;
					drawUpperScreen(lVar14, uVar16, uVar19, bVar21, uVar24, uVar26, uVar28, uVar30, in_stack_ffffff78);
					*puVar11 = 0;
					uVar27 = uVar31;
				}
				if ((0 < iVar4) && (uVar1 = puVar35[3], *puVar10 = (uint)uVar1, uVar1 != 0)) {
					drawUpperScreen(lVar14 + -0x6000, uVar16, uVar19, bVar21, uVar24, uVar26, uVar28, uVar30,
					    in_stack_ffffff78);
				}
				if ((1 < iVar4) && (uVar1 = puVar35[5], *puVar10 = (uint)uVar1, uVar1 != 0)) {
					drawUpperScreen(lVar14 + -0xc000, uVar16, uVar19, bVar21, uVar24, uVar26, uVar28, uVar30,
					    in_stack_ffffff78);
				}
				if ((2 < iVar4) && (uVar1 = puVar35[7], *puVar10 = (uint)uVar1, uVar1 != 0)) {
					drawUpperScreen(lVar14 + -0x12000, uVar16, uVar19, bVar21, uVar24, uVar26, uVar28, uVar30,
					    in_stack_ffffff78);
				}
				uVar22 = (ulonglong)local_54;
				lVar29 = 0;
				uVar17 = param_2;
				param_4 = param_6;
				uVar25 = param_3;
				uVar31 = uVar27;
				scrollrt_draw_dungeon((ulonglong) * (uint *)puVar7 + (ulonglong) * (uint *)(puVar8 + iVar36 * 4) + param_3, param_1, param_2, param_6,
				    uVar22, param_3, uVar27, 0, in_stack_ffffff78);
			}
		}
		param_1 = param_1 + 1;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
		param_11 = param_5 + -1;
		puVar35 = puVar35 + 0x10;
	}
	lVar14 = param_1 * 0xe0;
	lVar33 = param_1 * 0x70;
	puVar34 = (uint *)(puVar8 + (int)uVar31 * 4);
	iVar32 = (int)param_2 << 1;
	iVar15 = 0;
	while (true) {
		iVar36 = (int)param_2;
		iVar37 = (int)param_1;
		uVar24 = (undefined)uVar25;
		uVar26 = (undefined)uVar27;
		uVar28 = (undefined)lVar29;
		iVar5 = (int)uVar13;
		if (param_11 <= iVar15)
			break;
		if ((((-1 < iVar36) && (iVar36 < 0x70)) && (-1 < iVar37)) && (iVar37 < 0x70)) {
			iVar36 = (int)lVar33 + iVar36;
			*piVar12 = (int)*(short *)(**(int **)(iVar5 + -0x757c) + (int)lVar14 + iVar32);
			**(int **)(iVar5 + -0x7290) = (int)*(char *)(**(int **)(iVar5 + -0x758c) + iVar36);
			if (*piVar12 == 0) {
				world_draw_black_tile((ulonglong) * (uint *)puVar7 + (ulonglong)*puVar34 + param_3, 0, (char)uVar17,
				    (char)param_4, (char)uVar22, uVar24, uVar26, uVar28, in_stack_ffffff78);
			} else {
				uVar23 = 1;
				uVar2 = *puVar34;
				uVar18 = (ulonglong)uVar2;
				bVar21 = *(byte *)(*(int *)(iVar5 + -0x7230) + *piVar12);
				uVar20 = (ulonglong)bVar21;
				uVar3 = *(uint *)puVar7;
				uVar22 = (ulonglong)uVar3;
				lVar38 = uVar22 + uVar18 + param_3;
				**(uint **)(iVar5 + -0x7294) = (uint)(bVar21 & *(byte *)(*(int *)(iVar5 + -0x7268) + (int)*(char *)(**(int **)(iVar5 + -0x7588) + iVar36)));
				*puVar11 = 1;
				uVar1 = *puVar35;
				*puVar10 = (uint)uVar1;
				uVar17 = uVar27;
				if (uVar1 != 0) {
					drawUpperScreen(lVar38, (char)uVar3, (char)uVar2, bVar21, 1, uVar24, uVar26, uVar28,
					    in_stack_ffffff78);
					uVar17 = uVar27;
				}
				uVar27 = uVar31;
				*puVar11 = 2;
				uVar1 = puVar35[1];
				*puVar10 = (uint)uVar1;
				if (uVar1 != 0) {
					drawUpperScreen(lVar38 + 0x20, (char)uVar22, (char)uVar18, (char)uVar20, (char)uVar23,
					    (char)uVar25, (char)uVar17, (char)lVar29, in_stack_ffffff78);
				}
				*puVar11 = 0;
				iVar36 = 1;
				puVar6 = puVar35;
				while (true) {
					if ((*piVar9 >> 1) + -1 <= iVar36)
						break;
					if (iVar36 <= iVar4) {
						uVar1 = puVar6[2];
						*puVar10 = (uint)uVar1;
						if (uVar1 != 0) {
							drawUpperScreen(lVar38 + -0x6000, (char)uVar22, (char)uVar18, (char)uVar20, (char)uVar23,
							    (char)uVar25, (char)uVar17, (char)lVar29, in_stack_ffffff78);
						}
						uVar1 = puVar6[3];
						*puVar10 = (uint)uVar1;
						if (uVar1 != 0) {
							drawUpperScreen(lVar38 + -0x5fe0, (char)uVar22, (char)uVar18, (char)uVar20, (char)uVar23,
							    (char)uVar25, (char)uVar17, (char)lVar29, in_stack_ffffff78);
						}
					}
					iVar36 = iVar36 + 1;
					lVar38 = lVar38 + -0x6000;
					puVar6 = puVar6 + 2;
				}
				uVar22 = (ulonglong)local_54;
				lVar29 = 1;
				uVar17 = param_2;
				param_4 = param_6;
				uVar25 = param_3;
				uVar31 = uVar27;
				scrollrt_draw_dungeon((ulonglong) * (uint *)puVar7 + (ulonglong)*puVar34 + param_3, param_1, param_2,
				    param_6, uVar22, param_3, uVar27, 1, in_stack_ffffff78);
			}
		}
		lVar14 = lVar14 + 0xe0;
		lVar33 = lVar33 + 0x70;
		param_1 = param_1 + 1;
		iVar32 = iVar32 + -2;
		param_2 = param_2 - 1;
		param_3 = param_3 + 0x40;
		puVar35 = puVar35 + 0x10;
		iVar15 = iVar15 + 1;
	}
	if (((param_7 != 0) && (-1 < iVar36)) && ((iVar36 < 0x70 && ((-1 < iVar37 && (iVar37 < 0x70)))))) {
		*piVar12 = (int)*(short *)(**(int **)(iVar5 + -0x757c) + iVar37 * 0xe0 + iVar36 * 2);
		iVar36 = iVar37 * 0x70 + iVar36;
		**(int **)(iVar5 + -0x7290) = (int)*(char *)(**(int **)(iVar5 + -0x758c) + iVar36);
		if (*piVar12 == 0) {
			world_draw_black_tile((ulonglong) * (uint *)puVar7 + (ulonglong)*puVar34 + param_3, (char)*(uint *)puVar7,
			    (char)uVar17, (char)param_4, (char)uVar22, uVar24, uVar26, uVar28, in_stack_ffffff78);
		} else {
			uVar19 = (undefined)*puVar34;
			uVar30 = 1;
			bVar21 = *(byte *)(*(int *)(iVar5 + -0x7230) + *piVar12);
			uVar16 = (undefined) * (uint *)puVar7;
			lVar14 = (ulonglong) * (uint *)puVar7 + (ulonglong)*puVar34 + param_3;
			**(uint **)(iVar5 + -0x7294) = (uint)(bVar21 & *(byte *)(*(int *)(iVar5 + -0x7268) + (int)*(char *)(**(int **)(iVar5 + -0x7588) + iVar36)));
			*puVar11 = 1;
			if ((-1 < iVar4) && (uVar1 = *puVar35, *puVar10 = (uint)uVar1, uVar1 != 0)) {
				uVar30 = 1;
				drawUpperScreen(lVar14, uVar16, uVar19, bVar21, 1, uVar24, uVar26, uVar28, in_stack_ffffff78);
			}
			*puVar11 = 0;
			if ((0 < iVar4) && (uVar1 = puVar35[2], *puVar10 = (uint)uVar1, uVar1 != 0)) {
				drawUpperScreen(lVar14 + -0x6000, uVar16, uVar19, bVar21, uVar30, uVar24, uVar26, uVar28,
				    in_stack_ffffff78);
			}
			if ((1 < iVar4) && (uVar1 = puVar35[4], *puVar10 = (uint)uVar1, uVar1 != 0)) {
				drawUpperScreen(lVar14 + -0xc000, uVar16, uVar19, bVar21, uVar30, uVar24, uVar26, uVar28,
				    in_stack_ffffff78);
			}
			if ((2 < iVar4) && (uVar1 = puVar35[6], *puVar10 = (uint)uVar1, uVar1 != 0)) {
				drawUpperScreen(lVar14 + -0x12000, uVar16, uVar19, bVar21, uVar30, uVar24, uVar26, uVar28,
				    in_stack_ffffff78);
			}
			scrollrt_draw_dungeon((ulonglong) * (uint *)puVar7 + (ulonglong)*puVar34 + param_3, param_1, param_2,
			    param_6, (ulonglong)local_54, param_3, uVar31, 0, in_stack_ffffff78);
		}
	}
	return;
}

void DrawGame(longlong param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, char param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	ulonglong uVar7;
	undefined8 uVar8;
	longlong lVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	int iVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	int iVar16;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;

	puVar5 = _DAT_100f1d74;
	puVar4 = PTR_DAT_100f1938;
	puVar3 = PTR_DAT_100f180c;
	puVar2 = PTR_DAT_100f17cc;
	puVar1 = PTR_DAT_100f17c8;
	lVar9 = (longlong)param_8;
	uVar7 = ZEXT48(&toc);
	uVar11 = param_1 - 10;
	uVar12 = param_2 - 1;
	iVar13 = 10;
	*_DAT_100f1d78 = 0x280;
	puVar6 = _DAT_100f1d70;
	*puVar5 = 0x160;
	puVar5 = _DAT_100f1d6c;
	*puVar6 = 10;
	*puVar5 = 0xb;
	uVar15 = (ulonglong) * (uint *)PTR_DAT_100f1818 + 0x40;
	uVar14 = (ulonglong) * (uint *)(PTR_DAT_100f1818 + 4) + 0xaf;
	if ((*(int *)puVar3 != 0) || (*(int *)PTR_DAT_100f1808 != 0)) {
		iVar13 = 6;
		uVar11 = param_1 - 8;
		uVar12 = param_2 - 3;
		uVar15 = (ulonglong) * (uint *)PTR_DAT_100f1818 + 0x160;
	}
	if ((*(int *)PTR_DAT_100f1814 != 0) || (*(int *)PTR_DAT_100f1810 != 0)) {
		iVar13 = 6;
		uVar11 = uVar11 + 2;
		uVar12 = uVar12 - 2;
		uVar15 = uVar15 - 0x20;
	}
	if (*(uint *)(PTR_DAT_100f1818 + 0x10) < 9) {
		// WARNING: Could not recover jumptable at 0x100a2340. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(_DAT_100f3740 + *(uint *)(PTR_DAT_100f1818 + 0x10) * 4))();
		return;
	}
	uVar10 = 0;
	*(int *)puVar1 = *(int *)puVar2 + *(int *)(puVar4 + 0x280);
	do {
		scrollrt_draw_upper(uVar11, uVar12, uVar15, uVar14, iVar13, uVar10, 0, (char)lVar9, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffc8, in_stack_ffffffd0);
		uVar12 = uVar12 + 1;
		uVar8 = 1;
		scrollrt_draw_upper(uVar11, uVar12, uVar15 - 0x20, uVar14 + 0x10, iVar13, uVar10, 1, (char)lVar9,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffc8, in_stack_ffffffd0);
		uVar10 = uVar10 + 1;
		uVar14 = uVar14 + 0x20;
		uVar11 = uVar11 + 1;
	} while ((int)uVar10 < 4);
	iVar16 = 0;
	*(int *)puVar1 = *(int *)puVar2 + *(int *)(puVar4 + 0x800);
	while (iVar16 < 8) {
		scrollrt_draw_lower(uVar11, uVar12, uVar15, uVar14, iVar13, 0, (char)uVar8, (char)lVar9, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffcc);
		uVar12 = uVar12 + 1;
		scrollrt_draw_lower(uVar11, uVar12, uVar15 - 0x20, uVar14 + 0x10, iVar13, 1, (char)uVar8, (char)lVar9,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffcc);
		uVar11 = uVar11 + 1;
		uVar14 = uVar14 + 0x20;
		iVar16 = iVar16 + 1;
	}
	uVar10 = 0;
	**(undefined **)((int)uVar7 + -0x6f4c) = 0;
	do {
		scrollrt_draw_lower_2(uVar11, uVar12, uVar15, uVar14, iVar13, uVar10, 0, (char)lVar9, in_stack_ffffffa8,
		    in_stack_ffffffaf, in_stack_ffffffd0);
		uVar12 = uVar12 + 1;
		scrollrt_draw_lower_2(uVar11, uVar12, uVar15 - 0x20, uVar14 + 0x10, iVar13, uVar10, 1, (char)lVar9,
		    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffd0);
		uVar10 = uVar10 + 1;
		uVar14 = uVar14 + 0x20;
		uVar11 = uVar11 + 1;
	} while ((int)uVar10 < 4);
	return;
}

void DrawZoom(longlong param_1, longlong param_2, undefined param_3, undefined param_4,
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
	undefined2 *puVar10;
	ulonglong uVar11;
	int iVar12;
	undefined *puVar13;
	int iVar14;
	undefined2 *puVar15;
	longlong lVar16;
	undefined8 uVar17;
	int iVar18;
	ulonglong uVar19;
	int iVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	ulonglong uVar23;
	ulonglong uVar24;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
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
	uVar11 = (ulonglong) * (uint *)puVar3;
	uVar24 = uVar11 + 0x40;
	uVar23 = (ulonglong) * (uint *)(puVar3 + 4) + 0x8f;
	if (8 < *(uint *)(puVar3 + 0x10)) {
		uVar19 = 0;
		*(int *)puVar13 = *(int *)puVar2 + *(int *)(puVar4 + 0x23c);
		do {
			scrollrt_draw_upper(uVar21, uVar22, uVar24, uVar23, 6, uVar19, 0, (char)lVar16, in_stack_ffffffa8,
			    in_stack_ffffffaf, in_stack_ffffffc8, in_stack_ffffffd0);
			uVar22 = uVar22 + 1;
			uVar17 = 1;
			scrollrt_draw_upper(uVar21, uVar22, uVar11 + 0x20, uVar23 + 0x10, 6, uVar19, 1, (char)lVar16,
			    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffc8, in_stack_ffffffd0);
			uVar19 = uVar19 + 1;
			uVar23 = uVar23 + 0x20;
			uVar21 = uVar21 + 1;
		} while ((int)uVar19 < 4);
		iVar20 = 0;
		*(int *)puVar13 = *(int *)puVar2 + *(int *)(puVar4 + 0x500);
		while (iVar20 < 3) {
			scrollrt_draw_lower(uVar21, uVar22, uVar24, uVar23, 6, 0, (char)uVar17, (char)lVar16, in_stack_ffffffa8,
			    in_stack_ffffffaf, in_stack_ffffffcc);
			uVar22 = uVar22 + 1;
			scrollrt_draw_lower(uVar21, uVar22, uVar11 + 0x20, uVar23 + 0x10, 6, 1, (char)uVar17, (char)lVar16,
			    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffcc);
			uVar21 = uVar21 + 1;
			uVar23 = uVar23 + 0x20;
			iVar20 = iVar20 + 1;
		}
		uVar19 = 0;
		**(undefined **)((int)uVar9 + -0x6f4c) = 0;
		do {
			scrollrt_draw_lower_2(uVar21, uVar22, uVar24, uVar23, 6, uVar19, 0, (char)lVar16, in_stack_ffffffa8,
			    in_stack_ffffffaf, in_stack_ffffffd0);
			uVar22 = uVar22 + 1;
			scrollrt_draw_lower_2(uVar21, uVar22, uVar11 + 0x20, uVar23 + 0x10, 6, uVar19, 1, (char)lVar16,
			    in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffd0);
			uVar19 = uVar19 + 1;
			uVar23 = uVar23 + 0x20;
			uVar21 = uVar21 + 1;
		} while ((int)uVar19 < 4);
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
		puVar10 = (undefined2 *)(*(int *)puVar2 + iVar20);
		puVar13 = (undefined *)(*(int *)puVar2 + iVar12);
		puVar15 = puVar10 + 0x180;
		lVar16 = 0xb0;
		iVar20 = iVar14;
		do {
			do {
				uVar1 = *puVar13;
				iVar20 = iVar20 + -1;
				puVar13 = puVar13 + 1;
				uVar8 = CONCAT11(uVar1, uVar1);
				*puVar10 = uVar8;
				puVar10 = puVar10 + 1;
				*puVar15 = uVar8;
				puVar15 = puVar15 + 1;
			} while (iVar20 != 0);
			lVar16 = lVar16 + -1;
			puVar13 = puVar13 + -iVar18;
			puVar15 = puVar15 + iVar18 * 0x7fffffff;
			puVar10 = puVar10 + iVar18 * 0x7fffffff;
			iVar20 = iVar14;
		} while (lVar16 != 0);
		return;
	}
	// WARNING: Could not recover jumptable at 0x100a2570. Too many branches
	// WARNING: Treating indirect jump as call
	(**(code **)(_DAT_100f373c + *(uint *)(puVar3 + 0x10) * 4))();
	return;
}

void DrawView(longlong param_1, ulonglong param_2, undefined8 param_3, ulonglong param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	undefined uVar3;
	undefined uVar4;
	ulonglong uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f1918;
	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)(param_4 >> 8);
	uVar8 = (undefined)param_4;
	ppuVar2 = &toc;
	uVar5 = ZEXT48(PTR_DAT_100f1964);
	if (*(int *)PTR_DAT_100f1964 == 0) {
		DrawZoom(param_1, param_2, (char)PTR_DAT_100f1964, uVar8, uVar10, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	} else {
		DrawGame(param_1, param_2, (char)PTR_DAT_100f1964, uVar8, uVar10, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffc8);
	}
	if (*(int *)ppuVar2[-0x1dde] != 0) {
		DrawAutomap((char)ppuVar2[-0x1dde], (char)param_2, (char)uVar5, uVar8, uVar10, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if (*(int *)ppuVar2[-0x1def] == 0) {
		if (*(int *)ppuVar2[-0x1df0] != 0) {
			DrawSpellBook();
		}
	} else {
		DrawInv();
	}
	DrawDurIcon();
	if (*(int *)ppuVar2[-0x1df1] == 0) {
		if (*(int *)ppuVar2[-0x1df2] == 0) {
			param_2 = ZEXT48(ppuVar2[-0x1dea]);
			if ((*(int *)(ppuVar2[-0x1dea] + *(int *)ppuVar2[-0x1deb] * 0x55ec + 0x180) != 0) && (*(int *)puVar1 == 0)) {
				DrawLevelUpIcon();
			}
		} else {
			DrawQuestLog();
		}
	} else {
		DrawChr();
	}
	if (*(int *)ppuVar2[-0x1d9d] != 0) {
		DrawUniqueInfo();
	}
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	uVar6 = (undefined)uVar5;
	uVar4 = (undefined)param_2;
	if (*ppuVar2[-0x1dcc] != '\0') {
		DrawQText(ZEXT48(ppuVar2[-0x1dcc]), param_2, uVar5, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10), param_6, param_7, param_8, in_stack_ffffffc8);
	}
	if (*(int *)puVar1 != 0) {
		DrawSpellList();
	}
	if (*(int *)ppuVar2[-0x1dc1] != 0) {
		DrawGoldSplit((ulonglong) * (uint *)ppuVar2[-0x1dc2]);
	}
	if (*(int *)ppuVar2[-0x1d75] != 0) {
		DrawHelp();
	}
	if (*ppuVar2[-0x1d76] != '\0') {
		DrawDiabloMsg();
	}
	if (*(int *)ppuVar2[-0x1d73] == 0) {
		if (*(int *)ppuVar2[-0x1d74] != 0) {
			gmenu_draw_pause();
		}
	} else {
		RedBack((char)ppuVar2[-0x1d73], uVar4, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13,
		    in_stack_ffffffc8);
	}
	DrawPlrMsg();
	gmenu_draw();
	doom_draw();
	uVar3 = DrawInfoBox();
	uVar3 = DrawLifeFlask(uVar3, uVar4, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffc8);
	DrawManaFlask(uVar3, uVar4, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffc8);
	return;
}

void ClearScreenBuffer(undefined8 uParm1, undefined param_2, undefined param_3, undefined8 uParm4,
    undefined8 uParm5, undefined4 uParm6, undefined4 uParm7, undefined4 uParm8)

{
	undefined **ppuVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	longlong lVar4;
	longlong lVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffc8;

	uVar9 = (undefined)uParm5;
	uVar8 = (undefined7)((ulonglong)uParm5 >> 8);
	uVar7 = (undefined)uParm4;
	uVar6 = (undefined7)((ulonglong)uParm4 >> 8);
	ppuVar1 = &toc;
	lock_buf(3, param_2, param_3, uVar7, uVar9, (char)uParm6, (char)uParm7, (char)uParm8,
	    in_stack_ffffffc8);
	lVar4 = 0x1e0;
	puVar2 = (undefined4 *)(*(int *)ppuVar1[-0x1e01] + 0x1e040);
	do {
		lVar5 = 0xa0;
		do {
			puVar3 = puVar2;
			lVar5 = lVar5 + -1;
			*puVar3 = 0;
			puVar2 = puVar3 + 1;
		} while (lVar5 != 0);
		lVar4 = lVar4 + -1;
		puVar2 = puVar3 + 0x21;
	} while (lVar4 != 0);
	unlock_buf(3, 0, 0, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), uParm6, uParm7, uParm8,
	    in_stack_ffffffc8);
	return;
}

void DrawMain(longlong param_1, int param_2, int param_3, int param_4, longlong param_5, int param_6,
    undefined8 param_7, undefined4 param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	undefined8 uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	int iVar11;
	undefined uVar12;
	undefined *puVar13;
	undefined uVar14;
	undefined uVar15;

	puVar13 = PTR_DAT_100f1dc0;
	uVar9 = (undefined7)((ulonglong)param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar8 = (undefined)param_4;
	uVar7 = (undefined)param_3;
	uVar6 = (undefined)param_2;
	iVar2 = (int)(ZEXT48(register0x0000000c) - 0x60);
	*(BADSPACEBASE **)iVar2 = register0x0000000c;
	if (*(int *)puVar13 != 0) {
		iVar11 = param_6;
		Sleep(1, uVar6, uVar7, uVar8, uVar10, (char)param_6, (char)puVar13, (char)param_8,
		    *(undefined *)(iVar2 + 0xb), *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
		iVar3 = *(int *)(iVar2 + 0x14);
		uVar4 = Lock((char)(ZEXT48(register0x0000000c) - 0x60) + '8', uVar6, uVar7, uVar8, uVar10,
		    (char)iVar11, (char)puVar13, (char)param_8, *(undefined4 *)(iVar2 + 8));
		uVar5 = (undefined)uVar4;
		if ((int)uVar4 != 0) {
			if (*(int *)(iVar2 + 0x38) != 0) {
				param_1 = 0x1e0;
			}
			if (0 < (int)param_1) {
				uVar6 = 0;
				uVar7 = 0x80;
				uVar8 = (char)param_1;
				uVar5 = DoBlitScreen(0, 0, 0x280, param_1, CONCAT71(uVar9, uVar10), iVar11, puVar13, param_8,
				    *(undefined4 *)(iVar2 + 8));
			}
			uVar15 = (undefined)param_8;
			uVar14 = SUB41(puVar13, 0);
			uVar12 = (undefined)iVar11;
			if ((int)param_1 < 0x1e0) {
				if ((int)param_5 != 0) {
					uVar6 = 0x65;
					uVar8 = 0x1c;
					uVar5 = DoBlitScreen(0xcc, 0x165, 0xe8, 0x1c, CONCAT71(uVar9, uVar10), iVar11, puVar13, param_8,
					    *(undefined4 *)(iVar2 + 8));
				}
				if (param_2 != 0) {
					uVar6 = 0x8e;
					uVar8 = 0x3c;
					uVar5 = DoBlitScreen(0xb0, 0x18e, 0x120, 0x3c, CONCAT71(uVar9, uVar10), iVar11, puVar13, param_8,
					    *(undefined4 *)(iVar2 + 8));
				}
				if (param_4 != 0) {
					DoBlitScreen(0x1cc, 0x160, 0x58, 0x48, CONCAT71(uVar9, uVar10), iVar11, puVar13, param_8,
					    *(undefined4 *)(iVar2 + 8));
					uVar6 = 0xa0;
					uVar8 = 0x38;
					uVar5 = DoBlitScreen(0x234, 0x1a0, 0x38, 0x38, CONCAT71(uVar9, uVar10), iVar11, puVar13, param_8,
					    *(undefined4 *)(iVar2 + 8));
				}
				if (param_3 != 0) {
					uVar6 = 0x60;
					uVar8 = 0x48;
					uVar5 = DoBlitScreen(0x60, 0x160, 0x58, 0x48, CONCAT71(uVar9, uVar10), iVar11, puVar13, param_8,
					    *(undefined4 *)(iVar2 + 8));
				}
				if (param_6 != 0) {
					DoBlitScreen(8, 0x165, 0x48, 0x77, CONCAT71(uVar9, uVar10), iVar11, puVar13, param_8,
					    *(undefined4 *)(iVar2 + 8));
					uVar6 = 0x65;
					uVar8 = 0x30;
					DoBlitScreen(0x22c, 0x165, 0x48, 0x30, CONCAT71(uVar9, uVar10), iVar11, puVar13, param_8,
					    *(undefined4 *)(iVar2 + 8));
					uVar5 = SUB41(*(byte **)(iVar3 + -0x77f0), 0);
					if (1 < **(byte **)(iVar3 + -0x77f0)) {
						DoBlitScreen(0x54, 0x1bb, 0x24, 0x20, CONCAT71(uVar9, uVar10), iVar11, puVar13, param_8,
						    *(undefined4 *)(iVar2 + 8));
						uVar6 = 0xbb;
						uVar8 = 0x20;
						uVar5 = DoBlitScreen(0x20c, 0x1bb, 0x24, 0x20, CONCAT71(uVar9, uVar10), iVar11, puVar13, param_8, *(undefined4 *)(iVar2 + 8));
					}
				}
				if (*(uint *)(iVar3 + -0x4bc4) != 0) {
					uVar6 = (undefined) * (uint *)(iVar3 + -0x4bc0);
					uVar8 = (undefined) * (uint *)(iVar3 + -0x4bc8);
					uVar5 = DoBlitScreen((ulonglong) * (uint *)(iVar3 + -0x4bbc),
					    (ulonglong) * (uint *)(iVar3 + -0x4bc0),
					    (ulonglong) * (uint *)(iVar3 + -0x4bc4),
					    (ulonglong) * (uint *)(iVar3 + -0x4bc8), CONCAT71(uVar9, uVar10), iVar11,
					    puVar13, param_8, *(undefined4 *)(iVar2 + 8));
				}
				uVar15 = (undefined)param_8;
				uVar14 = SUB41(puVar13, 0);
				uVar12 = (undefined)iVar11;
				uVar1 = *(uint *)(iVar3 + -0x4bb4);
				uVar7 = (undefined)uVar1;
				if (uVar1 != 0) {
					uVar6 = (undefined) * (uint *)(iVar3 + -0x4bb0);
					uVar8 = (undefined) * (uint *)(iVar3 + -0x4bb8);
					uVar5 = DoBlitScreen((ulonglong) * (uint *)(iVar3 + -0x4bac),
					    (ulonglong) * (uint *)(iVar3 + -0x4bb0), (ulonglong)uVar1,
					    (ulonglong) * (uint *)(iVar3 + -0x4bb8), CONCAT71(uVar9, uVar10), iVar11,
					    puVar13, param_8, *(undefined4 *)(iVar2 + 8));
				}
			}
			Unlock(uVar5, uVar6, uVar7, uVar8, uVar10, uVar12, uVar14, uVar15, *(undefined4 *)(iVar2 + 8));
			Sleep(1, uVar6, uVar7, uVar8, uVar10, uVar12, uVar14, uVar15, *(undefined *)(iVar2 + 0xb),
			    *(undefined *)(iVar2 + 0xf), *(undefined4 *)(iVar2 + 0x14));
		}
	}
	return;
}

void scrollrt_draw_game_screen(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined uVar2;
	ulonglong uVar3;
	longlong lVar4;
	undefined8 uVar5;
	undefined8 uVar6;
	undefined8 uVar7;
	undefined4 uVar8;
	undefined4 uVar9;
	longlong lVar10;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f1914;
	uVar3 = ZEXT48(PTR_DAT_100f1914);
	if (*(int *)PTR_DAT_100f1914 == 0xff) {
		*(undefined4 *)PTR_DAT_100f1914 = 0;
		lVar10 = 0x1e0;
	} else {
		lVar10 = 0;
	}
	if (param_1 != 0) {
		lock_buf(0, (char)puVar1, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
		scrollrt_draw_cursor_item();
		unlock_buf(0, uVar3, param_3, param_4, param_5, param_6, (int)param_7, param_8, in_stack_ffffffc8);
	}
	uVar9 = (undefined4)param_7;
	lVar4 = 0;
	uVar5 = 0;
	uVar6 = 0;
	uVar7 = 0;
	uVar8 = 0;
	DrawMain(lVar10, 0, 0, 0, 0, 0, param_7, param_8, in_stack_ffffffc8);
	if (param_1 != 0) {
		uVar2 = lock_buf(0, (char)lVar4, (char)uVar5, (char)uVar6, (char)uVar7, (char)uVar8, (char)uVar9,
		    (char)param_8, in_stack_ffffffc8);
		scrollrt_draw_cursor_back_buffer(uVar2, (char)lVar4, (char)uVar5, (char)uVar6, (char)uVar7, (char)uVar8, (char)uVar9,
		    (char)param_8, in_stack_ffffffc8);
		unlock_buf(0, lVar4, uVar5, uVar6, uVar7, uVar8, uVar9, param_8, in_stack_ffffffc8);
	}
	return;
}

void DrawAndBlit(undefined8 param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4,
    undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined4 param_8,
    undefined4 param_9)

{
	bool bVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined **ppuVar9;
	undefined uVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	int iVar14;
	undefined4 uVar15;
	longlong lVar16;
	longlong lVar17;
	undefined4 in_stack_ffffffa8;

	puVar8 = PTR_DAT_100f1960;
	puVar7 = PTR_DAT_100f1914;
	puVar6 = PTR_DAT_100f18e0;
	puVar5 = PTR_DAT_100f18dc;
	puVar4 = PTR_DAT_100f18b4;
	puVar3 = PTR_DAT_100f1820;
	puVar2 = PTR_DAT_100f181c;
	ppuVar9 = &toc;
	if (*(int *)PTR_DAT_100f1a2c != 0) {
		if (*(int *)PTR_DAT_100f1914 == 0xff) {
			*(undefined4 *)PTR_DAT_100f18e0 = 1;
			lVar17 = 0;
			bVar1 = true;
			*(undefined4 *)puVar5 = 1;
			lVar16 = 0x1e0;
			*(undefined4 *)puVar4 = 1;
			*(undefined4 *)puVar8 = 1;
		} else {
			if (*(int *)PTR_DAT_100f1914 != 1) {
				return;
			}
			lVar17 = 1;
			bVar1 = false;
			lVar16 = 0x160;
		}
		*(undefined4 *)puVar7 = 0;
		lock_buf(0, (undefined)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffa8);
		if (*ppuVar9[-0x1de5] == '\0') {
			uVar11 = (ulonglong) * (uint *)puVar2;
			uVar10 = T_DrawView((ulonglong) * (uint *)puVar3, uVar11, param_3, param_4, param_5, param_6,
			    (int)param_7, param_8, in_stack_ffffffa8);
		} else {
			uVar11 = (ulonglong) * (uint *)puVar2;
			uVar10 = DrawView((ulonglong) * (uint *)puVar3, uVar11, param_3, param_4, param_5, param_6,
			    (int)param_7, param_8, in_stack_ffffffa8);
		}
		if (bVar1) {
			uVar10 = ClearCtrlPan(uVar10, (char)uVar11, (char)param_3, (char)param_4, (char)param_5,
			    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffa8);
		}
		if (*(int *)puVar6 != 0) {
			uVar10 = UpdateLifeFlask(uVar10, (char)uVar11, (char)param_3, (char)param_4, (char)param_5,
			    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffa8);
		}
		if (*(int *)puVar5 != 0) {
			UpdateManaFlask(uVar10, (char)uVar11, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffffa8);
		}
		if (*(int *)puVar4 != 0) {
			DrawCtrlPan();
		}
		if (*(int *)puVar8 != 0) {
			DrawInvBelt();
		}
		if (*(int *)ppuVar9[-0x1db4] != 0) {
			DrawTalkPan();
			lVar16 = 0x1e0;
		}
		scrollrt_draw_cursor_item();
		unlock_buf(0, uVar11, param_3, param_4, param_5, param_6, (int)param_7, param_8, in_stack_ffffffa8);
		uVar15 = (undefined4)param_7;
		uVar11 = (ulonglong) * (uint *)puVar6;
		uVar12 = (ulonglong) * (uint *)puVar5;
		uVar13 = (ulonglong) * (uint *)puVar8;
		iVar14 = *(int *)puVar4;
		DrawMain(lVar16, (int)lVar17, *(uint *)puVar6, *(uint *)puVar5, uVar13, iVar14, param_7, param_8,
		    in_stack_ffffffa8);
		uVar10 = lock_buf(0, (char)lVar17, (char)uVar11, (char)uVar12, (char)uVar13, (char)iVar14,
		    (char)uVar15, (char)param_8, in_stack_ffffffa8);
		scrollrt_draw_cursor_back_buffer(uVar10, (char)lVar17, (char)uVar11, (char)uVar12, (char)uVar13, (char)iVar14,
		    (char)uVar15, (char)param_8, in_stack_ffffffa8);
		unlock_buf(0, lVar17, uVar11, uVar12, uVar13, iVar14, uVar15, param_8, in_stack_ffffffa8);
		*(undefined4 *)puVar6 = 0;
		*(undefined4 *)puVar5 = 0;
		*(undefined4 *)puVar4 = 0;
		*(undefined4 *)puVar8 = 0;
	}
	return;
}

void DoBlitScreen(longlong param_1, longlong param_2, ulonglong param_3, longlong param_4,
    longlong param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	bool bVar1;
	undefined **ppuVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	uint uVar6;
	undefined4 *puVar7;
	ulonglong uVar8;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	longlong lVar9;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	ulonglong uVar10;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar11;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 local_5c;
	int local_34;
	undefined4 local_30;
	int local_2c;
	undefined4 local_28;
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar11 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar3 = (longlong)param_6;
	ppuVar2 = &toc;
	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	local_34 = (int)param_2;
	if (_DAT_100f3f88 == 0) {
		local_30 = (undefined4)param_1;
		local_2c = local_34 + (int)param_4;
		local_28 = (undefined4)(param_1 + param_3);
		lVar4 = GetTickCount((char)(param_1 + param_3), (char)param_2, (char)param_3, (char)param_4,
		    (char)param_5, (char)param_6, (char)param_7, (char)param_8,
		    (char)in_stack_ffffff98, in_stack_ffffff9f, local_5c);
		bVar1 = false;
		do {
			uVar6 = FUN_100dbf44();
			uVar6._3_1_ = (undefined)uVar6;
			if ((uVar6 & 0xff) == 0) {
				uVar6 = FUN_100dbf44();
				uVar6._3_1_ = (undefined)uVar6;
				if ((uVar6 & 0xff) == 0)
					goto LAB_10017430;
			}
			lVar5 = GetTickCount((undefined)uVar6, (char)param_2, (char)param_3, (char)param_4, (char)param_5,
			    (char)lVar3, (char)lVar9, (char)lVar11, (char)in_stack_ffffff98,
			    in_stack_ffffff9f, local_5c);
		} while ((lVar4 - lVar5 & 0xffffffffU) < 0x1389);
		bVar1 = true;
	LAB_10017430:
		if (!bVar1) {
			FUN_100dbf44(&local_34, 0x40, 0xa0);
		}
	} else {
		lVar11 = 0x300 - param_3;
		lVar11._4_4_ = (int)lVar11;
		lVar3 = (longlong)(int)_DAT_100f3f84;
		lVar9 = (ulonglong)_DAT_100f3f84 - param_3;
		lock_buf(6, (char)_DAT_100f3f84, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff98);
		lVar3 = ZEXT48(ppuVar2[-0x1412]) + param_1 + (longlong)local_34 * lVar3;
		param_1 = param_1 + (param_2 + 0xa0) * 0x300 + 0x40 + (ulonglong) * (uint *)ppuVar2[-0x1e01];
		if (((uint)(undefined8 *)param_1 & 7) == ((uint)(undefined8 *)lVar3 & 7)) {
			param_6 = lVar11._4_4_;
			FUN_10017074((undefined8 *)lVar3, (undefined8 *)param_1, (uint)param_3, (int)param_4, (int)lVar9,
			    lVar11._4_4_);
			param_5 = lVar9;
		} else {
			uVar10 = (ulonglong)((uint)param_3 >> 2);
			uVar8 = uVar10;
			do {
				do {
					puVar7 = (undefined4 *)param_1;
					param_3 = uVar8 - 1;
					param_1 = param_1 + 4;
					*(undefined4 *)lVar3 = *puVar7;
					lVar3 = lVar3 + 4;
					uVar8 = param_3;
				} while (param_3 != 0);
				param_4 = param_4 + -1;
				param_1 = param_1 + lVar11;
				lVar3 = lVar3 + lVar9;
				uVar8 = uVar10;
			} while (param_4 != 0);
		}
		unlock_buf(6, param_1, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
	}
	return;
}
