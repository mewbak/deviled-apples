
int FindPath(undefined8 param_1, undefined8 param_2, longlong param_3, longlong param_4,
    longlong param_5, longlong param_6, int param_7, undefined param_8, undefined4 param_9)

{
	undefined4 *puVar1;
	undefined4 *puVar2;
	int iVar3;
	char *pcVar4;
	int iVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	longlong lVar9;
	ulonglong uVar10;
	int iVar13;
	undefined8 uVar11;
	longlong lVar12;
	undefined uVar15;
	undefined *puVar14;
	undefined uVar16;
	undefined uVar19;
	longlong lVar17;
	int iVar18;
	undefined uVar20;
	ulonglong uVar21;
	undefined4 in_stack_ffffff98;

	iVar5 = _DAT_100f34f8;
	puVar7 = PTR_DAT_100f2024;
	puVar14 = PTR_DAT_100f2020;
	puVar6 = PTR_DAT_100f2014;
	uVar20 = (undefined)param_5;
	uVar19 = (undefined)param_4;
	uVar16 = (undefined)param_3;
	uVar15 = (undefined)param_2;
	ppuVar8 = &toc;
	uVar21 = ZEXT48(PTR_DAT_100f2024);
	*(undefined4 *)PTR_DAT_100f2024 = 0;
	lVar17 = param_6;
	lVar12 = (longlong)param_7;
	lVar9 = path_new_step((char)param_1, uVar15, uVar16, uVar19, uVar20, (char)param_6, (char)param_7,
	    (char)puVar7, in_stack_ffffff98);
	*(int *)puVar14 = (int)lVar9;
	lVar9 = path_new_step((char)lVar9, uVar15, uVar16, uVar19, uVar20, (char)lVar17, (char)lVar12,
	    (char)uVar21, in_stack_ffffff98);
	puVar1 = (undefined4 *)ppuVar8[-0x1bed];
	puVar2 = (undefined4 *)ppuVar8[-0x1bee];
	*puVar1 = (int)lVar9;
	*puVar2 = 0;
	lVar9 = path_new_step((char)lVar9, (char)puVar2, (char)puVar1, uVar19, uVar20, (char)lVar17, (char)lVar12, (char)uVar21, in_stack_ffffff98);
	pcVar4 = (char *)lVar9;
	pcVar4[2] = '\0';
	uVar10 = path_get_h_cost(param_3, param_4, param_5, param_6, uVar20, (char)lVar17, (char)lVar12,
	    (char)uVar21, in_stack_ffffff98);
	pcVar4[1] = (char)uVar10;
	*pcVar4 = pcVar4[2] + pcVar4[1];
	*(int *)(pcVar4 + 4) = (int)param_3;
	*(int *)(pcVar4 + 8) = (int)param_4;
	*(char **)(*(int *)puVar14 + 0x30) = pcVar4;
	while (true) {
		iVar13 = GetNextPath();
		if (iVar13 == 0) {
			return 0;
		}
		if ((*(int *)(iVar13 + 4) == (int)param_5) && (*(int *)(iVar13 + 8) == (int)param_6))
			break;
		uVar11 = path_get_path(param_1, param_2, iVar13, param_5, param_6, (char)lVar17, (char)lVar12,
		    (char)uVar21, in_stack_ffffff98);
		if ((int)uVar11 == 0) {
			return 0;
		}
	}
	lVar17 = 0;
	while (true) {
		iVar3 = *(int *)(iVar13 + 0xc);
		iVar18 = (int)lVar17;
		if ((iVar3 == 0) || (0x18 < iVar18))
			break;
		lVar17 = lVar17 + 1;
		*(int *)(puVar6 + iVar18 * 4) = (int)*(char *)(iVar5 + (*(int *)(iVar13 + 4) - *(int *)(iVar3 + 4)) + (*(int *)(iVar13 + 8) - *(int *)(iVar3 + 8)) * 3 + 4);
		iVar13 = *(int *)(iVar13 + 0xc);
	}
	if (iVar18 == 0x19) {
		return 0;
	}
	lVar12 = 0;
	if (iVar18 < 1) {
		return 0;
	}
	if ((8 < iVar18) && (uVar10 = (ulonglong)(iVar18 - 1U >> 3), 0 < iVar18 + -8)) {
		do {
			iVar5 = (int)lVar12;
			puVar14 = (undefined *)(param_7 + iVar5);
			*puVar14 = (char)*(undefined4 *)(puVar6 + (iVar18 - iVar5) * 4 + -4);
			puVar14[1] = (char)*(undefined4 *)(puVar6 + (iVar18 - (iVar5 + 1)) * 4 + -4);
			lVar12 = lVar12 + 8;
			puVar14[2] = (char)*(undefined4 *)(puVar6 + (iVar18 - (iVar5 + 2)) * 4 + -4);
			puVar14[3] = (char)*(undefined4 *)(puVar6 + (iVar18 - (iVar5 + 3)) * 4 + -4);
			puVar14[4] = (char)*(undefined4 *)(puVar6 + (iVar18 - (iVar5 + 4)) * 4 + -4);
			puVar14[5] = (char)*(undefined4 *)(puVar6 + (iVar18 - (iVar5 + 5)) * 4 + -4);
			puVar14[6] = (char)*(undefined4 *)(puVar6 + (iVar18 - (iVar5 + 6)) * 4 + -4);
			puVar14[7] = (char)*(undefined4 *)(puVar6 + (iVar18 - (iVar5 + 7)) * 4 + -4);
			uVar10 = uVar10 - 1;
		} while (uVar10 != 0);
	}
	lVar17 = lVar17 - lVar12;
	lVar9 = (longlong)param_7 + lVar12;
	if (iVar18 <= (int)lVar12) {
		return (int)lVar12;
	}
	do {
		iVar5 = (int)lVar12;
		lVar12 = lVar12 + 1;
		*(undefined *)lVar9 = (char)*(undefined4 *)(puVar6 + (iVar18 - iVar5) * 4 + -4);
		lVar9 = lVar9 + 1;
		lVar17 = lVar17 + -1;
	} while (lVar17 != 0);
	return (int)lVar12;
}

ulonglong path_get_h_cost(longlong param_1, longlong param_2, longlong param_3, longlong param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	longlong lVar2;
	longlong lVar3;
	int iVar4;
	int iVar5;

	lVar2 = abs(param_1 - param_3);
	lVar3 = abs(param_2 - param_4);
	iVar4 = (int)lVar3;
	iVar5 = (int)lVar2;
	iVar1 = iVar4;
	if (iVar5 < iVar4) {
		iVar1 = iVar5;
	}
	if (iVar4 < iVar5) {
		iVar4 = iVar5;
	}
	return (ulonglong)(uint)((iVar1 + iVar4) * 2);
}

undefined8 path_check_equal(int param_1, int param_2, int param_3)

{
	if ((*(int *)(param_1 + 4) != param_2) && (*(int *)(param_1 + 8) != param_3)) {
		return 3;
	}
	return 2;
}

int GetNextPath(void)

{
	int iVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f201c;
	iVar1 = *(int *)(*(int *)PTR_DAT_100f2020 + 0x30);
	if (iVar1 == 0) {
		return 0;
	}
	*(undefined4 *)(*(int *)PTR_DAT_100f2020 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
	*(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(*(int *)puVar2 + 0x30);
	*(int *)(*(int *)puVar2 + 0x30) = iVar1;
	return iVar1;
}

ulonglong path_solid_pieces(int param_1, int param_2, int param_3)

{
	char cVar1;
	undefined8 uVar2;
	int iVar3;
	undefined4 uVar4;
	ulonglong uVar5;

	uVar5 = 1;
	cVar1 = *(char *)(_DAT_100f34f8 + (param_2 - *(int *)(param_1 + 4)) + (param_3 - *(int *)(param_1 + 8)) * 3 + 4);
	if (cVar1 == '\a') {
		iVar3 = *(int *)PTR_DAT_100f1a54 + param_2 * 0xe0 + param_3 * 2;
		uVar4 = 1;
		if ((*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar3 + -2)) == '\0') && (*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar3 + -0xe0)) == '\0')) {
			uVar4 = 0;
		}
		uVar2 = countLeadingZeros(uVar4);
		uVar5 = (ulonglong)((uint)uVar2 >> 5 & 0xff);
	} else {
		if (cVar1 < '\a') {
			if (cVar1 == '\x05') {
				iVar3 = *(int *)PTR_DAT_100f1a54 + param_2 * 0xe0 + param_3 * 2;
				uVar4 = 1;
				if ((*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar3 + 2)) == '\0') && (*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar3 + 0xe0)) == '\0')) {
					uVar4 = 0;
				}
				uVar2 = countLeadingZeros(uVar4);
				uVar5 = (ulonglong)((uint)uVar2 >> 5 & 0xff);
			} else {
				if ('\x04' < cVar1) {
					iVar3 = *(int *)PTR_DAT_100f1a54 + param_2 * 0xe0 + param_3 * 2;
					uVar4 = 1;
					if ((*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar3 + 2)) == '\0') && (*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar3 + -0xe0)) == '\0')) {
						uVar4 = 0;
					}
					uVar2 = countLeadingZeros(uVar4);
					uVar5 = (ulonglong)((uint)uVar2 >> 5 & 0xff);
				}
			}
		} else {
			if (cVar1 < '\t') {
				iVar3 = *(int *)PTR_DAT_100f1a54 + param_2 * 0xe0 + param_3 * 2;
				uVar4 = 1;
				if ((*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar3 + 0xe0)) == '\0') && (*(char *)(_DAT_100f1da4 + (int)*(short *)(iVar3 + -2)) == '\0')) {
					uVar4 = 0;
				}
				uVar2 = countLeadingZeros(uVar4);
				uVar5 = (ulonglong)((uint)uVar2 >> 5 & 0xff);
			}
		}
	}
	return uVar5;
}

undefined8
path_get_path(undefined8 param_1, undefined8 param_2, int param_3, longlong param_4, longlong param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	ulonglong uVar2;
	undefined8 uVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	int iVar7;
	longlong lVar8;
	longlong lVar9;
	char *pcVar10;
	char *pcVar11;
	undefined4 in_stack_ffffff98;

	lVar6 = (longlong)param_8;
	lVar5 = (longlong)param_7;
	lVar4 = (longlong)param_6;
	iVar7 = 0;
	pcVar11 = _DAT_100f34f4;
	pcVar10 = _DAT_100f34f0;
	while (true) {
		lVar9 = (ulonglong) * (uint *)(param_3 + 4) + (longlong)*pcVar11;
		lVar8 = (ulonglong) * (uint *)(param_3 + 8) + (longlong)*pcVar10;
		lVar1 = FUN_100dbf44(param_2, lVar9, lVar8);
		if ((((lVar1 != 0) && (uVar2 = path_solid_pieces(param_3, (int)lVar9, (int)lVar8), (int)uVar2 != 0)) || (((int)lVar1 == 0 && (((int)lVar9 == (int)param_4 && ((int)lVar8 == (int)param_5)))))) && (uVar3 = path_parent_path(param_3, lVar9, lVar8, param_4, param_5, (char)lVar4, (char)lVar5, (char)lVar6, in_stack_ffffff98), (int)uVar3 == 0))
			break;
		iVar7 = iVar7 + 1;
		pcVar10 = pcVar10 + 1;
		pcVar11 = pcVar11 + 1;
		if (7 < iVar7) {
			return 1;
		}
	}
	return 0;
}

undefined8
path_parent_path(int param_1, longlong param_2, longlong param_3, longlong param_4, longlong param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	longlong lVar1;
	char *pcVar3;
	ulonglong uVar2;
	undefined uVar6;
	int iVar4;
	int iVar5;
	undefined uVar7;
	int iVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	int iVar13;
	undefined4 in_stack_ffffffa8;

	uVar11 = (undefined)param_4;
	uVar10 = (undefined)param_3;
	uVar6 = (undefined)param_2;
	uVar12 = (undefined)param_5;
	iVar4 = (int)param_2;
	iVar8 = (int)param_3;
	uVar9 = uVar10;
	lVar1 = path_check_equal(param_1, iVar4, iVar8);
	lVar1 = (longlong) * (char *)(param_1 + 2) + lVar1;
	pcVar3 = (char *)path_get_node1(iVar4, iVar8);
	iVar13 = (int)lVar1;
	iVar13._3_1_ = (char)lVar1;
	if (pcVar3 == (char *)0x0) {
		uVar7 = uVar10;
		pcVar3 = (char *)path_get_node2(iVar4, iVar8);
		if (pcVar3 == (char *)0x0) {
			lVar1 = path_new_step(0, uVar7, uVar9, uVar11, uVar12, param_6, param_7, param_8, in_stack_ffffffa8);
			if (lVar1 == 0) {
				return 0;
			}
			pcVar3 = (char *)lVar1;
			*(int *)(pcVar3 + 0xc) = param_1;
			pcVar3[2] = (char)iVar13;
			uVar2 = path_get_h_cost(param_2, param_3, param_4, param_5, uVar12, param_6, param_7, param_8,
			    in_stack_ffffffa8);
			pcVar3[1] = (char)uVar2;
			*pcVar3 = (char)iVar13 + pcVar3[1];
			*(int *)(pcVar3 + 4) = iVar4;
			*(int *)(pcVar3 + 8) = iVar8;
			path_next_node(pcVar3);
			iVar4 = 0;
			if ((((((*(int *)(param_1 + 0x10) != 0) && (iVar4 = 1, *(int *)(param_1 + 0x14) != 0)) && (iVar4 = 2, *(int *)(param_1 + 0x18) != 0)) && ((iVar4 = 3, *(int *)(param_1 + 0x1c) != 0 && (iVar4 = 4, *(int *)(param_1 + 0x20) != 0)))) && (iVar4 = 5, *(int *)(param_1 + 0x24) != 0)) && ((iVar4 = 6, *(int *)(param_1 + 0x28) != 0 && (iVar4 = 7, *(int *)(param_1 + 0x2c) != 0)))) {
				iVar4 = 8;
			}
			*(char **)(param_1 + iVar4 * 4 + 0x10) = pcVar3;
		} else {
			iVar5 = 0;
			if ((((*(int *)(param_1 + 0x10) != 0) && (iVar5 = 1, *(int *)(param_1 + 0x14) != 0)) && (iVar5 = 2, *(int *)(param_1 + 0x18) != 0)) && (((iVar5 = 3, *(int *)(param_1 + 0x1c) != 0 && (iVar5 = 4, *(int *)(param_1 + 0x20) != 0)) && ((iVar5 = 5, *(int *)(param_1 + 0x24) != 0 && ((iVar5 = 6, *(int *)(param_1 + 0x28) != 0 && (iVar5 = 7, *(int *)(param_1 + 0x2c) != 0)))))))) {
				iVar5 = 8;
			}
			*(char **)(param_1 + iVar5 * 4 + 0x10) = pcVar3;
			if ((iVar13 < (int)pcVar3[2]) && (uVar2 = path_solid_pieces(param_1, iVar4, iVar8), (int)uVar2 != 0)) {
				*(int *)(pcVar3 + 0xc) = param_1;
				pcVar3[2] = (char)iVar13;
				*pcVar3 = (char)iVar13 + pcVar3[1];
				path_set_coords(pcVar3, uVar6, uVar10, uVar11, uVar12, param_6, param_7, param_8, in_stack_ffffffa8);
			}
		}
	} else {
		iVar5 = 0;
		if ((((*(int *)(param_1 + 0x10) != 0) && (iVar5 = 1, *(int *)(param_1 + 0x14) != 0)) && (iVar5 = 2, *(int *)(param_1 + 0x18) != 0)) && (((iVar5 = 3, *(int *)(param_1 + 0x1c) != 0 && (iVar5 = 4, *(int *)(param_1 + 0x20) != 0)) && ((iVar5 = 5, *(int *)(param_1 + 0x24) != 0 && ((iVar5 = 6, *(int *)(param_1 + 0x28) != 0 && (iVar5 = 7, *(int *)(param_1 + 0x2c) != 0)))))))) {
			iVar5 = 8;
		}
		*(char **)(param_1 + iVar5 * 4 + 0x10) = pcVar3;
		if ((iVar13 < (int)pcVar3[2]) && (uVar2 = path_solid_pieces(param_1, iVar4, iVar8), (int)uVar2 != 0)) {
			*(int *)(pcVar3 + 0xc) = param_1;
			pcVar3[2] = (char)iVar13;
			*pcVar3 = (char)iVar13 + pcVar3[1];
		}
	}
	return 1;
}

int path_get_node1(int param_1, int param_2)

{
	int iVar1;

	iVar1 = *(int *)(*(int *)PTR_DAT_100f2020 + 0x30);
	while (true) {
		if (iVar1 == 0) {
			return 0;
		}
		if ((*(int *)(iVar1 + 4) == param_1) && (*(int *)(iVar1 + 8) == param_2))
			break;
		iVar1 = *(int *)(iVar1 + 0x30);
	}
	return iVar1;
}

int path_get_node2(int param_1, int param_2)

{
	int iVar1;

	iVar1 = *(int *)(*(int *)PTR_DAT_100f201c + 0x30);
	while (true) {
		if (iVar1 == 0) {
			return 0;
		}
		if ((*(int *)(iVar1 + 4) == param_1) && (*(int *)(iVar1 + 8) == param_2))
			break;
		iVar1 = *(int *)(iVar1 + 0x30);
	}
	return iVar1;
}

void path_next_node(char *param_1)

{
	char *pcVar1;
	char *pcVar2;
	char *pcVar3;

	pcVar2 = *(char **)PTR_DAT_100f2020;
	if (*(char **)(pcVar2 + 0x30) == (char *)0x0) {
		*(char **)(pcVar2 + 0x30) = param_1;
		return;
	}
	pcVar1 = *(char **)(pcVar2 + 0x30);
	while ((pcVar3 = pcVar1, pcVar3 != (char *)0x0 && (*pcVar3 < *param_1))) {
		pcVar1 = *(char **)(pcVar3 + 0x30);
		pcVar2 = pcVar3;
	}
	*(char **)(param_1 + 0x30) = pcVar3;
	*(char **)(pcVar2 + 0x30) = param_1;
	return;
}

void path_set_coords(undefined4 param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char *pcVar1;
	undefined *puVar2;
	ulonglong uVar3;
	undefined8 uVar4;
	ulonglong uVar5;
	int iVar6;
	ulonglong uVar7;

	puVar2 = PTR_DAT_100f2018;
	path_push_active_step(param_1);
	do {
		if (*(int *)puVar2 == 0) {
			return;
		}
		uVar3 = path_pop_active_step();
		iVar6 = 0;
		uVar7 = uVar3;
		do {
			pcVar1 = *(char **)((int)uVar7 + 0x10);
			if (pcVar1 == (char *)0x0)
				break;
			uVar4._4_4_ = (int)uVar3;
			uVar4 = path_check_equal(uVar4._4_4_, *(int *)(pcVar1 + 4), *(int *)(pcVar1 + 8));
			if ((int)*(char *)(uVar4._4_4_ + 2) + (int)uVar4 < (int)pcVar1[2]) {
				uVar5 = path_solid_pieces(uVar4._4_4_, *(int *)(pcVar1 + 4), *(int *)(pcVar1 + 8));
				if ((int)uVar5 != 0) {
					*(int *)(pcVar1 + 0xc) = uVar4._4_4_;
					uVar4 = path_check_equal(uVar4._4_4_, *(int *)(pcVar1 + 4), *(int *)(pcVar1 + 8));
					pcVar1[2] = *(char *)(uVar4._4_4_ + 2) + (char)uVar4;
					*pcVar1 = pcVar1[2] + pcVar1[1];
					path_push_active_step(pcVar1);
				}
			}
			iVar6 = iVar6 + 1;
			uVar7 = uVar7 + 4;
		} while (iVar6 < 8);
	} while (true);
}

void path_push_active_step(undefined4 param_1)

{
	int iVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f2010;
	iVar1 = *(int *)PTR_DAT_100f2018;
	*(int *)PTR_DAT_100f2018 = iVar1 + 1;
	*(undefined4 *)(puVar2 + iVar1 * 4) = param_1;
	return;
}

ulonglong path_pop_active_step(void)

{
	int iVar1;
	undefined *puVar2;

	puVar2 = PTR_DAT_100f2010;
	iVar1 = *(int *)PTR_DAT_100f2018;
	*(int *)PTR_DAT_100f2018 = iVar1 + -1;
	return (ulonglong) * (uint *)(puVar2 + (iVar1 + -1) * 4);
}

longlong path_new_step(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	longlong lVar2;
	ulonglong uVar3;
	undefined4 in_stack_ffffffc8;

	uVar1 = *(uint *)PTR_DAT_100f2024;
	if (uVar1 == 300) {
		lVar2 = 0;
	} else {
		uVar3 = ZEXT48(PTR_DAT_100f200c);
		*(uint *)PTR_DAT_100f2024 = uVar1 + 1;
		lVar2 = uVar3 + (ulonglong)uVar1 * 0x34;
		memset(lVar2, 0, 0x34, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	}
	return lVar2;
}
