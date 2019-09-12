
void InitL3Dungeon(void)

{
	byte *pbVar1;
	undefined *puVar2;
	undefined in_r5;
	undefined *puVar3;
	undefined in_r6;
	int iVar4;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	byte *pbVar5;
	longlong lVar6;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	int local_3c;

	pbVar5 = dungeon;
	ZeroMemory(0xf0, 0x40, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	puVar3 = *(undefined **)(local_3c + -0x7514);
	iVar4 = 0;
	do {
		lVar6 = 5;
		pbVar1 = pbVar5;
		puVar2 = puVar3;
		do {
			*pbVar1 = 0;
			*puVar2 = 0;
			pbVar1[0x28] = 0;
			puVar2[0x28] = 0;
			pbVar1[0x50] = 0;
			puVar2[0x50] = 0;
			pbVar1[0x78] = 0;
			puVar2[0x78] = 0;
			pbVar1[0xa0] = 0;
			puVar2[0xa0] = 0;
			pbVar1[200] = 0;
			puVar2[200] = 0;
			pbVar1[0xf0] = 0;
			puVar2[0xf0] = 0;
			pbVar1[0x118] = 0;
			pbVar1 = pbVar1 + 0x140;
			puVar2[0x118] = 0;
			puVar2 = puVar2 + 0x140;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
		iVar4 = iVar4 + 1;
		puVar3 = puVar3 + 1;
		pbVar5 = pbVar5 + 1;
	} while (iVar4 < 0x28);
	return;
}

BOOL DRLG_L3FillRoom(int x1, int y1, int x2, int y2)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	byte *pbVar5;
	byte *pbVar6;
	byte *pbVar7;
	byte *pbVar8;
	ulonglong uVar9;
	uint uVar10;
	int iVar11;
	int iVar12;
	byte *pbVar13;
	longlong lVar14;
	byte *pbVar15;
	byte *pbVar16;

	if ((((1 < x1) && (x2 < 0x22)) && (1 < y1)) && (y2 < 0x26)) {
		pbVar15 = dungeon + y1;
		lVar14 = 0;
		pbVar16 = pbVar15;
		iVar12 = y1;
		while (iVar12 <= y2) {
			pbVar13 = pbVar16 + x1 * 0x28;
			uVar10 = (x2 + 1) - x1;
			if (x1 <= x2) {
				uVar9 = (ulonglong)(uVar10 >> 3);
				if (uVar10 >> 3 != 0) {
					do {
						bVar1 = *pbVar13;
						pbVar2 = pbVar13 + 0x28;
						pbVar3 = pbVar13 + 0x50;
						pbVar4 = pbVar13 + 0x78;
						pbVar5 = pbVar13 + 0xa0;
						pbVar6 = pbVar13 + 200;
						pbVar7 = pbVar13 + 0xf0;
						pbVar8 = pbVar13 + 0x118;
						pbVar13 = pbVar13 + 0x140;
						lVar14 = lVar14 + (ulonglong)bVar1 + (ulonglong)*pbVar2 + (ulonglong)*pbVar3 + (ulonglong)*pbVar4 + (ulonglong)*pbVar5 + (ulonglong)*pbVar6 + (ulonglong)*pbVar7 + (ulonglong)*pbVar8;
						uVar9 = uVar9 - 1;
					} while (uVar9 != 0);
					uVar10 = uVar10 & 7;
					if (uVar10 == 0)
						goto LAB_10031604;
				}
				do {
					bVar1 = *pbVar13;
					pbVar13 = pbVar13 + 0x28;
					lVar14 = lVar14 + (ulonglong)bVar1;
					uVar10 = uVar10 - 1;
				} while (uVar10 != 0);
			}
		LAB_10031604:
			pbVar16 = pbVar16 + 1;
			iVar12 = iVar12 + 1;
		}
		if ((int)lVar14 == 0) {
			iVar11 = x1 + 1;
			pbVar16 = dungeon + y1;
			iVar12 = y1;
			while (true) {
				do {
					iVar12 = iVar12 + 1;
					pbVar16 = pbVar16 + 1;
					if (y2 <= iVar12) {
						iVar12 = x1 * 0x28;
						pbVar13 = dungeon + iVar12 + y1;
						pbVar16 = dungeon + x2 * 0x28 + y1;
						while (y1 <= y2) {
							iVar11 = random('\0', 2);
							if (iVar11 != 0) {
								*pbVar13 = 1;
							}
							iVar11 = random('\0', 2);
							if (iVar11 != 0) {
								*pbVar16 = 1;
							}
							pbVar13 = pbVar13 + 1;
							pbVar16 = pbVar16 + 1;
							y1 = y1 + 1;
						}
						pbVar15 = pbVar15 + iVar12;
						pbVar16 = dungeon + y2 + iVar12;
						while (x1 <= x2) {
							iVar12 = random('\0', 2);
							if (iVar12 != 0) {
								*pbVar15 = 1;
							}
							iVar12 = random('\0', 2);
							if (iVar12 != 0) {
								*pbVar16 = 1;
							}
							pbVar15 = pbVar15 + 0x28;
							pbVar16 = pbVar16 + 0x28;
							x1 = x1 + 1;
						}
						return 1;
					}
					pbVar13 = pbVar16 + iVar11 * 0x28;
					uVar10 = x2 - iVar11;
				} while (x2 <= iVar11);
				uVar9 = (ulonglong)(uVar10 >> 3);
				if (uVar10 >> 3 != 0)
					break;
				do {
					*pbVar13 = 1;
					pbVar13 = pbVar13 + 0x28;
					uVar10 = uVar10 - 1;
				joined_r0x10031680:
				} while (uVar10 != 0);
			}
			do {
				*pbVar13 = 1;
				pbVar13[0x28] = 1;
				pbVar13[0x50] = 1;
				pbVar13[0x78] = 1;
				pbVar13[0xa0] = 1;
				pbVar13[200] = 1;
				pbVar13[0xf0] = 1;
				pbVar13[0x118] = 1;
				pbVar13 = pbVar13 + 0x140;
				uVar9 = uVar9 - 1;
			} while (uVar9 != 0);
			uVar10 = uVar10 & 7;
			goto joined_r0x10031680;
		}
	}
	return 0;
}

void DRLG_L3CreateBlock(int x, int y, int obs, int dir)

{
	int v;
	int v_00;
	int iVar1;
	BOOL BVar2;
	int y2;
	int x2;
	int y1;
	int x1;

	v = random('\0', 2);
	v = v + 3;
	v_00 = random('\0', 2);
	v_00 = v_00 + 3;
	if (dir == 0) {
		y2 = y + -1;
		y1 = y2 - v_00;
		if (v < obs) {
			iVar1 = random('\0', v);
			x1 = x + iVar1;
		}
		if (v == obs) {
			x1 = x;
		}
		if (obs < v) {
			iVar1 = random('\0', v);
			x1 = x - iVar1;
		}
		x2 = x1 + v;
	}
	if (dir == 3) {
		x2 = x + -1;
		x1 = x2 - v;
		if (v_00 < obs) {
			iVar1 = random('\0', v_00);
			y1 = y + iVar1;
		}
		if (v_00 == obs) {
			y1 = y;
		}
		if (obs < v_00) {
			iVar1 = random('\0', v_00);
			y1 = y - iVar1;
		}
		y2 = y1 + v_00;
	}
	if (dir == 2) {
		y1 = y + 1;
		y2 = y + v_00 + 1;
		if (v < obs) {
			iVar1 = random('\0', v);
			x1 = x + iVar1;
		}
		if (v == obs) {
			x1 = x;
		}
		if (obs < v) {
			iVar1 = random('\0', v);
			x1 = x - iVar1;
		}
		x2 = x1 + v;
	}
	if (dir == 1) {
		x1 = x + 1;
		x2 = x + v + 1;
		if (v_00 < obs) {
			iVar1 = random('\0', v_00);
			y1 = y + iVar1;
		}
		if (v_00 == obs) {
			y1 = y;
		}
		if (obs < v_00) {
			iVar1 = random('\0', v_00);
			y1 = y - iVar1;
		}
		y2 = y1 + v_00;
	}
	BVar2 = DRLG_L3FillRoom(x1, y1, x2, y2);
	if (BVar2 == 1) {
		iVar1 = random('\0', 4);
		if ((iVar1 != 0) && (dir != 2)) {
			DRLG_L3CreateBlock(x1, y1, v_00, 0);
		}
		if ((iVar1 != 0) && (dir != 3)) {
			DRLG_L3CreateBlock(x2, y1, v, 1);
		}
		if ((iVar1 != 0) && (dir != 0)) {
			DRLG_L3CreateBlock(x1, y2, v_00, 2);
		}
		if ((iVar1 != 0) && (dir != 1)) {
			DRLG_L3CreateBlock(x1, y1, v, 3);
		}
	}
	return;
}

void DRLG_L3FloorArea(int x1, int y1, int x2, int y2)

{
	ulonglong uVar1;
	uint uVar2;
	byte *pbVar3;
	byte *pbVar4;

	pbVar4 = dungeon + y1;
	do {
		if (y2 < y1) {
			return;
		}
		pbVar3 = pbVar4 + x1 * 0x28;
		uVar2 = (x2 + 1) - x1;
		if (x1 <= x2) {
			uVar1 = (ulonglong)(uVar2 >> 3);
			if (uVar2 >> 3 != 0) {
				do {
					*pbVar3 = 1;
					pbVar3[0x28] = 1;
					pbVar3[0x50] = 1;
					pbVar3[0x78] = 1;
					pbVar3[0xa0] = 1;
					pbVar3[200] = 1;
					pbVar3[0xf0] = 1;
					pbVar3[0x118] = 1;
					pbVar3 = pbVar3 + 0x140;
					uVar1 = uVar1 - 1;
				} while (uVar1 != 0);
				uVar2 = uVar2 & 7;
				if (uVar2 == 0)
					goto LAB_10031a58;
			}
			do {
				*pbVar3 = 1;
				pbVar3 = pbVar3 + 0x28;
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
		}
	LAB_10031a58:
		pbVar4 = pbVar4 + 1;
		y1 = y1 + 1;
	} while (true);
}

void DRLG_L3FillDiags(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	byte *pbVar5;
	byte *pbVar6;

	pbVar5 = dungeon;
	iVar3 = 0;
	do {
		iVar4 = 0;
		pbVar6 = pbVar5;
		do {
			iVar2 = (uint)*pbVar6 * 8 + (uint)pbVar6[0x28] * 4 + (uint)pbVar6[1] * 2 + (uint)pbVar6[0x29];
			if (iVar2 == 6) {
				iVar1 = random('\0', 2);
				if (iVar1 == 0) {
					*pbVar6 = 1;
				} else {
					pbVar6[0x29] = 1;
				}
			}
			if (iVar2 == 9) {
				iVar2 = random('\0', 2);
				if (iVar2 == 0) {
					pbVar6[0x28] = 1;
				} else {
					pbVar6[1] = 1;
				}
			}
			iVar4 = iVar4 + 1;
			pbVar6 = pbVar6 + 0x28;
		} while (iVar4 < 0x27);
		iVar3 = iVar3 + 1;
		pbVar5 = pbVar5 + 1;
	} while (iVar3 < 0x27);
	return;
}

void DRLG_L3FillSingles(void)

{
	byte *pbVar1;
	byte *pbVar2;
	int iVar3;
	longlong lVar4;

	iVar3 = 1;
	pbVar1 = dungeon;
	do {
		pbVar2 = pbVar1 + 0x29;
		lVar4 = 0x13;
		do {
			if ((((*pbVar2 == 0) && ((uint)pbVar2[-0x29] + (uint)pbVar2[-1] + (uint)pbVar2[0x27] == 3)) && ((uint)pbVar2[-0x28] + (uint)pbVar2[0x28] == 2)) && ((uint)pbVar2[-0x27] + (uint)pbVar2[1] + (uint)pbVar2[0x29] == 3)) {
				*pbVar2 = 1;
			}
			if (((pbVar2[0x28] == 0) && ((uint)pbVar2[-1] + (uint)pbVar2[0x27] + (uint)pbVar2[0x4f] == 3)) && (((uint)*pbVar2 + (uint)pbVar2[0x50] == 2 && ((uint)pbVar2[1] + (uint)pbVar2[0x29] + (uint)pbVar2[0x51] == 3)))) {
				pbVar2[0x28] = 1;
			}
			pbVar2 = pbVar2 + 0x50;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		iVar3 = iVar3 + 1;
		pbVar1 = pbVar1 + 1;
	} while (iVar3 < 0x27);
	return;
}

void DRLG_L3FillStraights(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	byte *pbVar5;
	byte *pbVar6;
	byte *pbVar7;
	int unaff_r29;
	int unaff_r30;
	byte *pbVar8;

	pbVar8 = dungeon;
	iVar4 = 0;
	pbVar5 = pbVar8;
	do {
		iVar1 = 0;
		iVar3 = 0;
		pbVar6 = pbVar5;
		do {
			if ((*pbVar6 == 0) && (pbVar6[1] == 1)) {
				if (iVar1 == 0) {
					unaff_r30 = iVar3;
				}
				iVar1 = iVar1 + 1;
			} else {
				if ((3 < iVar1) && (iVar1 = random('\0', 2), iVar1 != 0)) {
					pbVar7 = pbVar5 + unaff_r30 * 0x28;
					iVar1 = unaff_r30;
					while (iVar1 < iVar3) {
						iVar2 = random('\0', 2);
						*pbVar7 = (byte)iVar2;
						pbVar7 = pbVar7 + 0x28;
						iVar1 = iVar1 + 1;
					}
				}
				iVar1 = 0;
			}
			iVar3 = iVar3 + 1;
			pbVar6 = pbVar6 + 0x28;
		} while (iVar3 < 0x25);
		iVar4 = iVar4 + 1;
		pbVar5 = pbVar5 + 1;
	} while (iVar4 < 0x27);
	iVar4 = 0;
	pbVar5 = pbVar8;
	do {
		iVar1 = 0;
		iVar3 = 0;
		pbVar6 = pbVar5;
		do {
			if ((*pbVar6 == 1) && (pbVar6[1] == 0)) {
				if (iVar1 == 0) {
					unaff_r30 = iVar3;
				}
				iVar1 = iVar1 + 1;
			} else {
				if ((3 < iVar1) && (iVar1 = random('\0', 2), iVar1 != 0)) {
					pbVar7 = pbVar5 + unaff_r30 * 0x28;
					iVar1 = unaff_r30;
					while (iVar1 < iVar3) {
						iVar2 = random('\0', 2);
						pbVar7[1] = (byte)iVar2;
						pbVar7 = pbVar7 + 0x28;
						iVar1 = iVar1 + 1;
					}
				}
				iVar1 = 0;
			}
			iVar3 = iVar3 + 1;
			pbVar6 = pbVar6 + 0x28;
		} while (iVar3 < 0x25);
		iVar4 = iVar4 + 1;
		pbVar5 = pbVar5 + 1;
	} while (iVar4 < 0x27);
	iVar4 = 0;
	pbVar5 = pbVar8;
	do {
		iVar1 = 0;
		iVar3 = 0;
		pbVar6 = pbVar5;
		do {
			if ((*pbVar6 == 0) && (pbVar6[0x28] == 1)) {
				if (iVar1 == 0) {
					unaff_r29 = iVar3;
				}
				iVar1 = iVar1 + 1;
			} else {
				if ((3 < iVar1) && (iVar1 = random('\0', 2), iVar1 != 0)) {
					pbVar7 = pbVar5 + unaff_r29;
					iVar1 = unaff_r29;
					while (iVar1 < iVar3) {
						iVar2 = random('\0', 2);
						*pbVar7 = (byte)iVar2;
						pbVar7 = pbVar7 + 1;
						iVar1 = iVar1 + 1;
					}
				}
				iVar1 = 0;
			}
			iVar3 = iVar3 + 1;
			pbVar6 = pbVar6 + 1;
		} while (iVar3 < 0x25);
		iVar4 = iVar4 + 1;
		pbVar5 = pbVar5 + 0x28;
	} while (iVar4 < 0x27);
	iVar4 = 0;
	do {
		iVar1 = 0;
		iVar3 = 0;
		pbVar5 = pbVar8;
		do {
			if ((*pbVar5 == 1) && (pbVar5[0x28] == 0)) {
				if (iVar1 == 0) {
					unaff_r29 = iVar3;
				}
				iVar1 = iVar1 + 1;
			} else {
				if ((3 < iVar1) && (iVar1 = random('\0', 2), iVar1 != 0)) {
					pbVar6 = pbVar8 + unaff_r29;
					iVar1 = unaff_r29;
					while (iVar1 < iVar3) {
						iVar2 = random('\0', 2);
						pbVar6[0x28] = (byte)iVar2;
						pbVar6 = pbVar6 + 1;
						iVar1 = iVar1 + 1;
					}
				}
				iVar1 = 0;
			}
			iVar3 = iVar3 + 1;
			pbVar5 = pbVar5 + 1;
		} while (iVar3 < 0x25);
		iVar4 = iVar4 + 1;
		pbVar8 = pbVar8 + 0x28;
	} while (iVar4 < 0x27);
	return;
}

void DRLG_L3Edges(void)

{
	dungeon[0][39] = 0;
	dungeon[1][39] = 0;
	dungeon[2][39] = 0;
	dungeon[3][39] = 0;
	dungeon[4][39] = 0;
	dungeon[5][39] = 0;
	dungeon[6][39] = 0;
	dungeon[7][39] = 0;
	dungeon[8][39] = 0;
	dungeon[9][39] = 0;
	dungeon[10][39] = 0;
	dungeon[11][39] = 0;
	dungeon[12][39] = 0;
	dungeon[13][39] = 0;
	dungeon[14][39] = 0;
	dungeon[15][39] = 0;
	dungeon[16][39] = 0;
	dungeon[17][39] = 0;
	dungeon[18][39] = 0;
	dungeon[19][39] = 0;
	dungeon[20][39] = 0;
	dungeon[21][39] = 0;
	dungeon[22][39] = 0;
	dungeon[23][39] = 0;
	dungeon[24][39] = 0;
	dungeon[25][39] = 0;
	dungeon[26][39] = 0;
	dungeon[27][39] = 0;
	dungeon[28][39] = 0;
	dungeon[29][39] = 0;
	dungeon[30][39] = 0;
	dungeon[31][39] = 0;
	dungeon[32][39] = 0;
	dungeon[33][39] = 0;
	dungeon[34][39] = 0;
	dungeon[35][39] = 0;
	dungeon[36][39] = 0;
	dungeon[37][39] = 0;
	dungeon[38][39] = 0;
	dungeon[39][0] = 0;
	dungeon[39][1] = 0;
	dungeon[39][2] = 0;
	dungeon[39][3] = 0;
	dungeon[39][4] = 0;
	dungeon[39][5] = 0;
	dungeon[39][6] = 0;
	dungeon[39][7] = 0;
	dungeon[39][8] = 0;
	dungeon[39][9] = 0;
	dungeon[39][10] = 0;
	dungeon[39][11] = 0;
	dungeon[39][12] = 0;
	dungeon[39][13] = 0;
	dungeon[39][14] = 0;
	dungeon[39][15] = 0;
	dungeon[39][16] = 0;
	dungeon[39][17] = 0;
	dungeon[39][18] = 0;
	dungeon[39][19] = 0;
	dungeon[39][20] = 0;
	dungeon[39][21] = 0;
	dungeon[39][22] = 0;
	dungeon[39][23] = 0;
	dungeon[39][24] = 0;
	dungeon[39][25] = 0;
	dungeon[39][26] = 0;
	dungeon[39][27] = 0;
	dungeon[39][28] = 0;
	dungeon[39][29] = 0;
	dungeon[39][30] = 0;
	dungeon[39][31] = 0;
	dungeon[39][32] = 0;
	dungeon[39][33] = 0;
	dungeon[39][34] = 0;
	dungeon[39][35] = 0;
	dungeon[39][36] = 0;
	dungeon[39][37] = 0;
	dungeon[39][38] = 0;
	dungeon[39][39] = 0;
	return;
}

int DRLG_L3GetFloorArea(void)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	byte *pbVar5;
	byte *pbVar6;
	byte *pbVar7;
	byte *pbVar8;
	byte *pbVar9;
	byte *pbVar10;
	byte *pbVar11;
	byte *pbVar12;
	byte *pbVar13;
	byte *pbVar14;
	byte *pbVar15;
	byte *pbVar16;
	byte *pbVar17;
	byte *pbVar18;
	byte *pbVar19;
	byte *pbVar20;
	byte *pbVar21;
	byte *pbVar22;
	byte *pbVar23;
	byte *pbVar24;
	byte *pbVar25;
	byte *pbVar26;
	byte *pbVar27;
	byte *pbVar28;
	byte *pbVar29;
	byte *pbVar30;
	byte *pbVar31;
	byte *pbVar32;
	byte *pbVar33;
	byte *pbVar34;
	byte *pbVar35;
	byte *pbVar36;
	byte *pbVar37;
	byte *pbVar38;
	byte *pbVar39;
	byte *pbVar40;
	byte *pbVar41;
	byte *pbVar42;
	byte *pbVar43;
	byte *pbVar44;
	byte *pbVar45;
	byte *pbVar46;
	byte *pbVar47;
	byte *pbVar48;
	byte *pbVar49;
	byte *pbVar50;
	byte *pbVar51;
	byte *pbVar52;
	byte *pbVar53;
	byte *pbVar54;
	byte *pbVar55;
	byte *pbVar56;
	byte *pbVar57;
	byte *pbVar58;
	byte *pbVar59;
	byte *pbVar60;
	byte *pbVar61;
	byte *pbVar62;
	byte *pbVar63;
	byte *pbVar64;
	byte *pbVar65;
	byte *pbVar66;
	byte *pbVar67;
	byte *pbVar68;
	byte *pbVar69;
	byte *pbVar70;
	byte *pbVar71;
	byte *pbVar72;
	byte *pbVar73;
	byte *pbVar74;
	byte *pbVar75;
	byte *pbVar76;
	byte *pbVar77;
	byte *pbVar78;
	byte *pbVar79;
	longlong lVar80;
	byte *pbVar81;
	byte *pbVar82;
	longlong lVar83;

	pbVar81 = dungeon;
	lVar83 = 0x14;
	lVar80 = 0;
	do {
		bVar1 = *pbVar81;
		pbVar2 = pbVar81 + 0x28;
		pbVar3 = pbVar81 + 0x50;
		pbVar4 = pbVar81 + 0x78;
		pbVar5 = pbVar81 + 0xa0;
		pbVar6 = pbVar81 + 200;
		pbVar7 = pbVar81 + 0xf0;
		pbVar8 = pbVar81 + 0x118;
		pbVar9 = pbVar81 + 0x140;
		pbVar10 = pbVar81 + 0x168;
		pbVar11 = pbVar81 + 400;
		pbVar12 = pbVar81 + 0x1b8;
		pbVar13 = pbVar81 + 0x1e0;
		pbVar14 = pbVar81 + 0x208;
		pbVar15 = pbVar81 + 0x230;
		pbVar16 = pbVar81 + 600;
		pbVar17 = pbVar81 + 0x280;
		pbVar18 = pbVar81 + 0x2a8;
		pbVar19 = pbVar81 + 0x2d0;
		pbVar20 = pbVar81 + 0x2f8;
		pbVar21 = pbVar81 + 800;
		pbVar22 = pbVar81 + 0x348;
		pbVar23 = pbVar81 + 0x370;
		pbVar24 = pbVar81 + 0x398;
		pbVar25 = pbVar81 + 0x3c0;
		pbVar26 = pbVar81 + 1000;
		pbVar27 = pbVar81 + 0x410;
		pbVar28 = pbVar81 + 0x438;
		pbVar29 = pbVar81 + 0x460;
		pbVar30 = pbVar81 + 0x488;
		pbVar31 = pbVar81 + 0x4b0;
		pbVar32 = pbVar81 + 0x4d8;
		pbVar33 = pbVar81 + 0x500;
		pbVar34 = pbVar81 + 0x528;
		pbVar35 = pbVar81 + 0x550;
		pbVar36 = pbVar81 + 0x578;
		pbVar37 = pbVar81 + 0x5a0;
		pbVar38 = pbVar81 + 0x5c8;
		pbVar39 = pbVar81 + 0x5f0;
		pbVar40 = pbVar81 + 0x618;
		pbVar82 = pbVar81 + 1;
		pbVar41 = pbVar81 + 0x29;
		pbVar42 = pbVar81 + 0x51;
		pbVar43 = pbVar81 + 0x79;
		pbVar44 = pbVar81 + 0xa1;
		pbVar45 = pbVar81 + 0xc9;
		pbVar46 = pbVar81 + 0xf1;
		pbVar47 = pbVar81 + 0x119;
		pbVar48 = pbVar81 + 0x141;
		pbVar49 = pbVar81 + 0x169;
		pbVar50 = pbVar81 + 0x191;
		pbVar51 = pbVar81 + 0x1b9;
		pbVar52 = pbVar81 + 0x1e1;
		pbVar53 = pbVar81 + 0x209;
		pbVar54 = pbVar81 + 0x231;
		pbVar55 = pbVar81 + 0x259;
		pbVar56 = pbVar81 + 0x281;
		pbVar57 = pbVar81 + 0x2a9;
		pbVar58 = pbVar81 + 0x2d1;
		pbVar59 = pbVar81 + 0x2f9;
		pbVar60 = pbVar81 + 0x321;
		pbVar61 = pbVar81 + 0x349;
		pbVar62 = pbVar81 + 0x371;
		pbVar63 = pbVar81 + 0x399;
		pbVar64 = pbVar81 + 0x3c1;
		pbVar65 = pbVar81 + 0x3e9;
		pbVar66 = pbVar81 + 0x411;
		pbVar67 = pbVar81 + 0x439;
		pbVar68 = pbVar81 + 0x461;
		pbVar69 = pbVar81 + 0x489;
		pbVar70 = pbVar81 + 0x4b1;
		pbVar71 = pbVar81 + 0x4d9;
		pbVar72 = pbVar81 + 0x501;
		pbVar73 = pbVar81 + 0x529;
		pbVar74 = pbVar81 + 0x551;
		pbVar75 = pbVar81 + 0x579;
		pbVar76 = pbVar81 + 0x5a1;
		pbVar77 = pbVar81 + 0x5c9;
		pbVar78 = pbVar81 + 0x5f1;
		pbVar79 = pbVar81 + 0x619;
		pbVar81 = pbVar81 + 2;
		lVar80 = lVar80 + (ulonglong)bVar1 + (ulonglong)*pbVar2 + (ulonglong)*pbVar3 + (ulonglong)*pbVar4 + (ulonglong)*pbVar5 + (ulonglong)*pbVar6 + (ulonglong)*pbVar7 + (ulonglong)*pbVar8 + (ulonglong)*pbVar9 + (ulonglong)*pbVar10 + (ulonglong)*pbVar11 + (ulonglong)*pbVar12 + (ulonglong)*pbVar13 + (ulonglong)*pbVar14 + (ulonglong)*pbVar15 + (ulonglong)*pbVar16 + (ulonglong)*pbVar17 + (ulonglong)*pbVar18 + (ulonglong)*pbVar19 + (ulonglong)*pbVar20 + (ulonglong)*pbVar21 + (ulonglong)*pbVar22 + (ulonglong)*pbVar23 + (ulonglong)*pbVar24 + (ulonglong)*pbVar25 + (ulonglong)*pbVar26 + (ulonglong)*pbVar27 + (ulonglong)*pbVar28 + (ulonglong)*pbVar29 + (ulonglong)*pbVar30 + (ulonglong)*pbVar31 + (ulonglong)*pbVar32 + (ulonglong)*pbVar33 + (ulonglong)*pbVar34 + (ulonglong)*pbVar35 + (ulonglong)*pbVar36 + (ulonglong)*pbVar37 + (ulonglong)*pbVar38 + (ulonglong)*pbVar39 + (ulonglong)*pbVar40 + (ulonglong)*pbVar82 + (ulonglong)*pbVar41 + (ulonglong)*pbVar42 + (ulonglong)*pbVar43 + (ulonglong)*pbVar44 + (ulonglong)*pbVar45 + (ulonglong)*pbVar46 + (ulonglong)*pbVar47 + (ulonglong)*pbVar48 + (ulonglong)*pbVar49 + (ulonglong)*pbVar50 + (ulonglong)*pbVar51 + (ulonglong)*pbVar52 + (ulonglong)*pbVar53 + (ulonglong)*pbVar54 + (ulonglong)*pbVar55 + (ulonglong)*pbVar56 + (ulonglong)*pbVar57 + (ulonglong)*pbVar58 + (ulonglong)*pbVar59 + (ulonglong)*pbVar60 + (ulonglong)*pbVar61 + (ulonglong)*pbVar62 + (ulonglong)*pbVar63 + (ulonglong)*pbVar64 + (ulonglong)*pbVar65 + (ulonglong)*pbVar66 + (ulonglong)*pbVar67 + (ulonglong)*pbVar68 + (ulonglong)*pbVar69 + (ulonglong)*pbVar70 + (ulonglong)*pbVar71 + (ulonglong)*pbVar72 + (ulonglong)*pbVar73 + (ulonglong)*pbVar74 + (ulonglong)*pbVar75 + (ulonglong)*pbVar76 + (ulonglong)*pbVar77 + (ulonglong)*pbVar78 + (ulonglong)*pbVar79;
		lVar83 = lVar83 + -1;
	} while (lVar83 != 0);
	return (int)lVar80;
}

void DRLG_L3MakeMegas(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	byte *pbVar4;
	byte *pbVar5;

	pbVar4 = dungeon;
	iVar2 = 0;
	do {
		iVar3 = 0;
		pbVar5 = pbVar4;
		do {
			iVar1 = (uint)*pbVar5 * 8 + (uint)pbVar5[0x28] * 4 + (uint)pbVar5[1] * 2 + (uint)pbVar5[0x29];
			if (iVar1 == 6) {
				iVar1 = random('\0', 2);
				if (iVar1 == 0) {
					iVar1 = 0xc;
				} else {
					iVar1 = 5;
				}
			}
			if (iVar1 == 9) {
				iVar1 = random('\0', 2);
				if (iVar1 == 0) {
					iVar1 = 0xd;
				} else {
					iVar1 = 0xe;
				}
			}
			iVar3 = iVar3 + 1;
			*pbVar5 = (&DAT_100f89bc)[iVar1];
			pbVar5 = pbVar5 + 0x28;
		} while (iVar3 < 0x27);
		iVar2 = iVar2 + 1;
		pbVar4[0x618] = 8;
		pbVar4 = pbVar4 + 1;
	} while (iVar2 < 0x27);
	dungeon[0][39] = 8;
	dungeon[1][39] = 8;
	dungeon[2][39] = 8;
	dungeon[3][39] = 8;
	dungeon[4][39] = 8;
	dungeon[5][39] = 8;
	dungeon[6][39] = 8;
	dungeon[7][39] = 8;
	dungeon[8][39] = 8;
	dungeon[9][39] = 8;
	dungeon[10][39] = 8;
	dungeon[11][39] = 8;
	dungeon[12][39] = 8;
	dungeon[13][39] = 8;
	dungeon[14][39] = 8;
	dungeon[15][39] = 8;
	dungeon[16][39] = 8;
	dungeon[17][39] = 8;
	dungeon[18][39] = 8;
	dungeon[19][39] = 8;
	dungeon[20][39] = 8;
	dungeon[21][39] = 8;
	dungeon[22][39] = 8;
	dungeon[23][39] = 8;
	dungeon[24][39] = 8;
	dungeon[25][39] = 8;
	dungeon[26][39] = 8;
	dungeon[27][39] = 8;
	dungeon[28][39] = 8;
	dungeon[29][39] = 8;
	dungeon[30][39] = 8;
	dungeon[31][39] = 8;
	dungeon[32][39] = 8;
	dungeon[33][39] = 8;
	dungeon[34][39] = 8;
	dungeon[35][39] = 8;
	dungeon[36][39] = 8;
	dungeon[37][39] = 8;
	dungeon[38][39] = 8;
	dungeon[39][39] = 8;
	return;
}

void DRLG_L3River(void)

{
	byte bVar1;
	int *piVar2;
	int *piVar3;
	bool bVar4;
	ulonglong uVar5;
	longlong lVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	uint v;
	int iVar10;
	int *piVar11;
	int *piVar12;
	undefined8 unaff_r15;
	int iVar13;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	int iVar14;
	undefined8 unaff_r20;
	int iVar15;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar16;
	longlong unaff_r26;
	undefined8 unaff_r27;
	int iVar17;
	longlong unaff_r28;
	int iVar18;
	undefined8 unaff_r29;
	ulonglong unaff_r30;
	int iVar19;
	ulonglong unaff_r31;
	int local_504[100];
	int local_374[99];
	int aiStack488[105];
	undefined4 local_44;
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

	local_44 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
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
	uStack8 = (undefined4)(unaff_r30 >> 0x20);
	uStack4 = (undefined4)(unaff_r31 >> 0x20);
	iVar17 = 0;
	iVar16 = 0;
	do {
		if ((199 < iVar16) || (3 < iVar17)) {
			return;
		}
		bVar4 = false;
		while ((!bVar4 && (iVar16 < 200))) {
			iVar7 = 0;
			iVar16 = iVar16 + 1;
			iVar8 = 0;
			iVar13 = 0;
			while (((bVar1 = dungeon[iVar7 * 0x28 + iVar8], bVar1 < 0x19 || (0x1c < bVar1)) && (iVar13 < 100))) {
				iVar7 = random('\0', 0x28);
				iVar8 = random('\0', 0x28);
				iVar13 = iVar13 + 1;
				while (((dungeon[iVar7 * 0x28 + iVar8] < 0x19 || (0x1c < dungeon[iVar7 * 0x28 + iVar8])) && (iVar8 < 0x28))) {
					iVar7 = iVar7 + 1;
					if (0x27 < iVar7) {
						iVar7 = 0;
						iVar8 = iVar8 + 1;
					}
				}
			}
			if (99 < iVar13) {
				return;
			}
			if (bVar1 == 0x1b) {
				aiStack488[1] = 0x29;
				unaff_r31 = 1;
				unaff_r29 = 0;
			} else {
				if (bVar1 < 0x1b) {
					if (bVar1 == 0x19) {
						aiStack488[1] = 0x28;
						unaff_r31 = 3;
						unaff_r29 = 2;
					} else {
						if (0x18 < bVar1) {
							aiStack488[1] = 0x26;
							unaff_r31 = 0;
							unaff_r29 = 1;
						}
					}
				} else {
					if (bVar1 < 0x1d) {
						aiStack488[1] = 0x27;
						unaff_r31 = 2;
						unaff_r29 = 3;
					}
				}
			}
			unaff_r28 = 1;
			iVar10 = 4;
			iVar13 = 0;
			piVar12 = local_504 + 1;
			local_504[0] = iVar7;
			local_374[0] = iVar8;
			while (true) {
				piVar11 = piVar12;
				iVar9 = (int)unaff_r28;
				iVar19 = (int)unaff_r30;
				iVar14 = (int)unaff_r31;
				if ((3 < iVar13) || (99 < iVar9))
					break;
				if (iVar13 == 0) {
					iVar9 = random('\0', 4);
					unaff_r31 = SEXT48(iVar9);
				} else {
					unaff_r31 = (ulonglong)(iVar14 + 1U & 3);
				}
				while (true) {
					iVar13 = iVar13 + 1;
					iVar9 = (int)unaff_r31;
					if ((iVar9 != (int)unaff_r29) && (iVar9 != iVar10))
						break;
					unaff_r31 = (ulonglong)(iVar9 + 1U & 3);
				}
				iVar14 = iVar8;
				if ((iVar9 == 0) && (iVar14 = iVar8, 0 < iVar8)) {
					iVar14 = iVar8 + -1;
				}
				if ((iVar9 == 1) && (iVar14 < 0x28)) {
					iVar14 = iVar14 + 1;
				}
				iVar15 = iVar7;
				if ((iVar9 == 2) && (iVar15 = iVar7, iVar7 < 0x28)) {
					iVar15 = iVar7 + 1;
				}
				if ((iVar9 == 3) && (0 < iVar15)) {
					iVar15 = iVar15 + -1;
				}
				piVar12 = piVar11;
				if (dungeon[iVar15 * 0x28 + iVar14] == 7) {
					iVar13 = 0;
					if (iVar9 < 2) {
						v = random('\0', 2);
						piVar11[200] = (v & 0xff) + 0x11;
					} else {
						v = random('\0', 2);
						piVar11[200] = (v & 0xff) + 0xf;
					}
					*piVar11 = iVar15;
					unaff_r28 = unaff_r28 + 1;
					piVar11[100] = iVar14;
					piVar12 = piVar11 + 1;
					iVar18 = (int)unaff_r28;
					if (((iVar9 == 0) && (iVar19 == 2)) || ((iVar9 == 3 && (iVar19 == 1)))) {
						if (2 < iVar18) {
							piVar11[199] = 0x16;
						}
						if (iVar9 == 0) {
							iVar10 = 1;
						} else {
							iVar10 = 2;
						}
					}
					if (((iVar9 == 0) && (iVar19 == 3)) || ((iVar9 == 2 && (iVar19 == 1)))) {
						if (2 < iVar18) {
							piVar11[199] = 0x15;
						}
						if (iVar9 == 0) {
							iVar10 = 1;
						} else {
							iVar10 = 3;
						}
					}
					if (((iVar9 == 1) && (iVar19 == 2)) || ((iVar9 == 3 && (iVar19 == 0)))) {
						if (2 < iVar18) {
							piVar11[199] = 0x14;
						}
						if (iVar9 == 1) {
							iVar10 = 0;
						} else {
							iVar10 = 2;
						}
					}
					if (((iVar9 == 1) && (iVar19 == 3)) || ((unaff_r30 = unaff_r31, iVar8 = iVar14, iVar7 = iVar15, iVar9 == 2 && (unaff_r30 = unaff_r31, iVar8 = iVar14, iVar7 = iVar15, iVar19 == 0)))) {
						if (2 < iVar18) {
							piVar11[199] = 0x13;
						}
						if (iVar9 == 1) {
							iVar10 = 0;
							unaff_r30 = unaff_r31;
							iVar8 = iVar14;
							iVar7 = iVar15;
						} else {
							iVar10 = 3;
							unaff_r30 = unaff_r31;
							iVar8 = iVar14;
							iVar7 = iVar15;
						}
					}
				}
			}
			if ((iVar14 == 0) && ((iVar13 = iVar7 * 0x28 + iVar8, *(char *)(iVar13 + 0x1013bfef) == '\n' && (*(char *)(iVar13 + 0x1013bfee) == '\b')))) {
				local_504[iVar9] = iVar7;
				local_374[iVar9] = iVar8 + -1;
				aiStack488[iVar9 + 1] = 0x18;
				if (iVar19 == 2) {
					aiStack488[iVar9] = 0x16;
				}
				if (iVar19 == 3) {
					aiStack488[iVar9] = 0x15;
				}
				bVar4 = true;
			}
			if (((iVar14 == 1) && (iVar13 = iVar7 * 0x28 + iVar8, dungeon[iVar13 + 1] == 2)) && (dungeon[iVar13 + 2] == 8)) {
				local_504[iVar9] = iVar7;
				local_374[iVar9] = iVar8 + 1;
				aiStack488[iVar9 + 1] = 0x2a;
				if (iVar19 == 2) {
					aiStack488[iVar9] = 0x14;
				}
				if (iVar19 == 3) {
					aiStack488[iVar9] = 0x13;
				}
				bVar4 = true;
			}
			if (((iVar14 == 2) && (iVar13 = iVar7 * 0x28 + iVar8, dungeon[iVar13 + 0x28] == 4)) && (dungeon[iVar13 + 0x50] == 8)) {
				local_504[iVar9] = iVar7 + 1;
				local_374[iVar9] = iVar8;
				aiStack488[iVar9 + 1] = 0x2b;
				if (iVar19 == 0) {
					aiStack488[iVar9] = 0x13;
				}
				if (iVar19 == 1) {
					aiStack488[iVar9] = 0x15;
				}
				bVar4 = true;
			}
			if (((iVar14 == 3) && (iVar13 = iVar7 * 0x28 + iVar8, *(char *)(iVar13 + 0x1013bfc8) == '\t')) && (*(char *)(iVar13 + 0x1013bfa0) == '\b')) {
				local_504[iVar9] = iVar7 + -1;
				local_374[iVar9] = iVar8;
				aiStack488[iVar9 + 1] = 0x17;
				if (iVar19 == 0) {
					aiStack488[iVar9] = 0x14;
				}
				if (iVar19 == 1) {
					aiStack488[iVar9] = 0x16;
				}
				bVar4 = true;
			}
		}
		v = (uint)unaff_r28;
		if ((bVar4) && ((int)v < 7)) {
			bVar4 = false;
		}
		if (bVar4) {
			iVar8 = 0;
			iVar7 = 0;
			while ((iVar8 == 0 && (iVar7 < 0x1e))) {
				iVar7 = iVar7 + 1;
				iVar10 = random('\0', v);
				unaff_r26 = (longlong)iVar10;
				piVar12 = local_504 + iVar10;
				iVar13 = aiStack488[iVar10 + 1];
				if (((iVar13 == 0xf) || (iVar13 == 0x10)) && ((iVar9 = *piVar12 * 0x28 + local_374[iVar10], *(char *)(iVar9 + 0x1013bfef) == '\a' && (dungeon[iVar9 + 1] == 7)))) {
					iVar8 = 1;
				}
				if (((iVar13 - 0x11U < 2) && (iVar13 = *piVar12 * 0x28 + local_374[iVar10], *(char *)(iVar13 + 0x1013bfc8) == '\a')) && (dungeon[iVar13 + 0x28] == 7)) {
					iVar8 = 2;
				}
				iVar13 = local_374[iVar10];
				piVar11 = local_504;
				iVar10 = *piVar12;
				iVar9 = 0;
				while ((iVar9 < (int)v && (iVar8 != 0))) {
					if (((iVar8 == 1) && ((iVar13 + -1 == piVar11[100] || (iVar13 + 1 == piVar11[100])))) && (iVar10 == *piVar11)) {
						iVar8 = 0;
					}
					if ((iVar8 == 2) && (((iVar10 + -1 == *piVar11 || (iVar10 + 1 == *piVar11)) && (iVar13 == piVar11[100])))) {
						iVar8 = 0;
					}
					piVar11 = piVar11 + 1;
					iVar9 = iVar9 + 1;
				}
			}
			if (iVar8 != 0) {
				if (iVar8 == 1) {
					local_504[(int)unaff_r26 + 200] = 0x2c;
				} else {
					local_504[(int)unaff_r26 + 200] = 0x2d;
				}
				iVar17 = iVar17 + 1;
				unaff_r26 = 0;
				if (-1 < (int)v) {
					if (8 < (int)(v + 1)) {
						uVar5 = (ulonglong)(v >> 3);
						piVar12 = local_504;
						if (-1 < (int)(v - 8)) {
							do {
								unaff_r26 = unaff_r26 + 8;
								dungeon[*piVar12 * 0x28 + piVar12[100]] = (byte)piVar12[200];
								dungeon[piVar12[1] * 0x28 + piVar12[0x65]] = (byte)piVar12[0xc9];
								dungeon[piVar12[2] * 0x28 + piVar12[0x66]] = (byte)piVar12[0xca];
								dungeon[piVar12[3] * 0x28 + piVar12[0x67]] = (byte)piVar12[0xcb];
								dungeon[piVar12[4] * 0x28 + piVar12[0x68]] = (byte)piVar12[0xcc];
								dungeon[piVar12[5] * 0x28 + piVar12[0x69]] = (byte)piVar12[0xcd];
								dungeon[piVar12[6] * 0x28 + piVar12[0x6a]] = (byte)piVar12[0xce];
								piVar11 = piVar12 + 7;
								piVar2 = piVar12 + 0xcf;
								piVar3 = piVar12 + 0x6b;
								piVar12 = piVar12 + 8;
								dungeon[*piVar11 * 0x28 + *piVar3] = (byte)*piVar2;
								uVar5 = uVar5 - 1;
							} while (uVar5 != 0);
						}
					}
					piVar12 = local_504 + (int)unaff_r26;
					lVar6 = (unaff_r28 + 1) - unaff_r26;
					if ((int)unaff_r26 <= (int)v) {
						do {
							iVar8 = *piVar12;
							unaff_r26 = unaff_r26 + 1;
							piVar11 = piVar12 + 200;
							piVar2 = piVar12 + 100;
							piVar12 = piVar12 + 1;
							dungeon[iVar8 * 0x28 + *piVar2] = (byte)*piVar11;
							lVar6 = lVar6 + -1;
						} while (lVar6 != 0);
					}
				}
			}
		}
	} while (true);
}

BOOL DRLG_L3SpawnEdge(int x, int y, int *totarea)

{
	byte bVar1;
	BOOL BVar2;
	byte *pbVar3;

	if (0x28 < *totarea) {
		return 1;
	}
	if ((((x < 0) || (y < 0)) || (0x27 < x)) || (0x27 < y)) {
		return 1;
	}
	bVar1 = dungeon[x * 0x28 + y];
	if ((bVar1 & 0x80) != 0) {
		return 0;
	}
	if (0xf < bVar1) {
		return 1;
	}
	dungeon[x * 0x28 + y] = bVar1 | 0x80;
	pbVar3 = &DAT_100f8c96 + (uint)bVar1;
	*totarea = *totarea + 1;
	if (((*pbVar3 & 8) != 0) && (BVar2 = DRLG_L3SpawnEdge(x, y + -1, totarea), BVar2 == 1)) {
		return 1;
	}
	if (((*pbVar3 & 4) != 0) && (BVar2 = DRLG_L3SpawnEdge(x, y + 1, totarea), BVar2 == 1)) {
		return 1;
	}
	if (((*pbVar3 & 2) != 0) && (BVar2 = DRLG_L3SpawnEdge(x + 1, y, totarea), BVar2 == 1)) {
		return 1;
	}
	if (((*pbVar3 & 1) != 0) && (BVar2 = DRLG_L3SpawnEdge(x + -1, y, totarea), BVar2 == 1)) {
		return 1;
	}
	if (((*pbVar3 & 0x80) != 0) && (BVar2 = DRLG_L3Spawn(x, y + -1, totarea), BVar2 == 1)) {
		return 1;
	}
	if (((*pbVar3 & 0x40) != 0) && (BVar2 = DRLG_L3Spawn(x, y + 1, totarea), BVar2 == 1)) {
		return 1;
	}
	if (((*pbVar3 & 0x20) != 0) && (BVar2 = DRLG_L3Spawn(x + 1, y, totarea), BVar2 == 1)) {
		return 1;
	}
	if (((*pbVar3 & 0x10) != 0) && (BVar2 = DRLG_L3Spawn(x + -1, y, totarea), BVar2 == 1)) {
		return 1;
	}
	return 0;
}

BOOL DRLG_L3Spawn(int x, int y, int *totarea)

{
	byte bVar1;
	BOOL BVar2;
	byte *pbVar3;

	if (0x28 < *totarea) {
		return 1;
	}
	if ((((x < 0) || (y < 0)) || (0x27 < x)) || (0x27 < y)) {
		return 1;
	}
	bVar1 = dungeon[x * 0x28 + y];
	if ((bVar1 & 0x80) != 0) {
		return 0;
	}
	if (0xf < bVar1) {
		return 1;
	}
	dungeon[x * 0x28 + y] = bVar1 | 0x80;
	*totarea = *totarea + 1;
	if (bVar1 == 8) {
		BVar2 = DRLG_L3Spawn(x + 1, y, totarea);
		if (BVar2 == 1) {
			return 1;
		}
		BVar2 = DRLG_L3Spawn(x + -1, y, totarea);
		if (BVar2 == 1) {
			return 1;
		}
		BVar2 = DRLG_L3Spawn(x, y + 1, totarea);
		if (BVar2 == 1) {
			return 1;
		}
		BVar2 = DRLG_L3Spawn(x, y + -1, totarea);
		if (BVar2 == 1) {
			return 1;
		}
	} else {
		pbVar3 = &DAT_100f8ca5 + (uint)bVar1;
		if (((*pbVar3 & 8) != 0) && (BVar2 = DRLG_L3SpawnEdge(x, y + -1, totarea), BVar2 == 1)) {
			return 1;
		}
		if (((*pbVar3 & 4) != 0) && (BVar2 = DRLG_L3SpawnEdge(x, y + 1, totarea), BVar2 == 1)) {
			return 1;
		}
		if (((*pbVar3 & 2) != 0) && (BVar2 = DRLG_L3SpawnEdge(x + 1, y, totarea), BVar2 == 1)) {
			return 1;
		}
		if (((*pbVar3 & 1) != 0) && (BVar2 = DRLG_L3SpawnEdge(x + -1, y, totarea), BVar2 == 1)) {
			return 1;
		}
	}
	return 0;
}

void DRLG_L3Pool(void)

{
	byte bVar1;
	int x;
	int y;
	longlong lVar2;
	undefined8 uVar3;
	int iVar4;
	BOOL BVar5;
	longlong lVar6;
	longlong lVar7;
	byte *pbVar8;
	longlong lVar9;
	int iVar10;
	int iVar11;
	undefined8 unaff_r24;
	longlong lVar12;
	undefined8 unaff_r25;
	longlong lVar13;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	byte *pbVar14;
	undefined8 unaff_r28;
	byte *pbVar15;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	uint local_28[2];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar3 = 0x100f8fd0;
	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	pbVar14 = dungeon;
	lVar12 = 0;
	do {
		y = (int)lVar12;
		lVar13 = 0;
		pbVar15 = pbVar14;
		do {
			if (*pbVar15 == 8) {
				x = (int)lVar13;
				*pbVar15 = 0x88;
				local_28[0] = 1;
				if (x + 1 < 0x28) {
					iVar4 = DRLG_L3Spawn(x + 1, y, (int *)local_28);
				} else {
					iVar4 = 1;
				}
				if ((lVar13 + -1 < 1) || (iVar4 != 0)) {
					iVar4 = 1;
				} else {
					iVar4 = DRLG_L3Spawn(x + -1, y, (int *)local_28);
				}
				if ((y + 1 < 0x28) && (iVar4 == 0)) {
					iVar4 = DRLG_L3Spawn(x, y + 1, (int *)local_28);
				} else {
					iVar4 = 1;
				}
				if ((lVar12 + -1 < 1) || (iVar4 != 0)) {
					BVar5 = 1;
				} else {
					BVar5 = DRLG_L3Spawn(x, y + -1, (int *)local_28);
				}
				iVar4 = random('\0', 100);
				lVar2 = lVar12 - (ulonglong)local_28[0];
				lVar9 = ZEXT48(dungeon) + lVar2;
				while (true) {
					iVar10 = (int)lVar2;
					if ((int)(y + local_28[0]) <= iVar10)
						break;
					lVar6 = lVar13 - (ulonglong)local_28[0];
					lVar7 = lVar9 + lVar6 * 0x28;
					while (true) {
						iVar11 = (int)lVar6;
						if ((int)(x + local_28[0]) <= iVar11)
							break;
						pbVar8 = (byte *)lVar7;
						if ((((((*pbVar8 & 0x80) != 0) && (-1 < iVar10)) && (iVar10 < 0x28)) && ((-1 < iVar11 && (iVar11 < 0x28)))) && ((*pbVar8 = *pbVar8 & 0x7f, 4 < (int)local_28[0] && ((iVar4 < 0x19 && (BVar5 == 0)))))) {
							bVar1 = (&DAT_100f8cb4)[(uint)*pbVar8];
							if ((bVar1 != 0) && (bVar1 < 0x26)) {
								*pbVar8 = bVar1;
							}
							*(undefined *)((int)uVar3 + -0x4ef8) = 1;
						}
						lVar7 = lVar7 + 0x28;
						lVar6 = lVar6 + 1;
					}
					lVar9 = lVar9 + 1;
					lVar2 = lVar2 + 1;
				}
			}
			lVar13 = lVar13 + 1;
			pbVar15 = pbVar15 + 0x28;
		} while ((int)lVar13 < 0x28);
		lVar12 = lVar12 + 1;
		pbVar14 = pbVar14 + 1;
	} while ((int)lVar12 < 0x28);
	return;
}

void DRLG_L3PoolFix(void)

{
	byte *pbVar1;
	byte *pbVar2;
	int iVar3;
	longlong lVar4;

	iVar3 = 0;
	pbVar2 = dungeon;
	do {
		lVar4 = 0x28;
		pbVar1 = pbVar2;
		do {
			if (((((((*pbVar1 == 8) && (0x18 < pbVar1[-0x29])) && (pbVar1[-0x29] < 0x2a)) && ((0x18 < pbVar1[-0x28] && (pbVar1[-0x28] < 0x2a)))) && ((0x18 < pbVar1[-0x27] && ((pbVar1[-0x27] < 0x2a && (0x18 < pbVar1[-1])))))) && (pbVar1[-1] < 0x2a)) && ((((0x18 < pbVar1[1] && (pbVar1[1] < 0x2a)) && (0x18 < pbVar1[0x27])) && (((pbVar1[0x27] < 0x2a && (0x18 < pbVar1[0x28])) && ((pbVar1[0x28] < 0x2a && ((0x18 < pbVar1[0x29] && (pbVar1[0x29] < 0x2a)))))))))) {
				*pbVar1 = 0x21;
			}
			pbVar1 = pbVar1 + 0x28;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
		iVar3 = iVar3 + 1;
		pbVar2 = pbVar2 + 1;
	} while (iVar3 < 0x28);
	return;
}

BOOL DRLG_L3PlaceMiniSet(BYTE *miniset, int tmin, int tmax, int cx, int cy, BOOL setview, int ldir)

{
	byte bVar1;
	byte bVar2;
	int *piVar3;
	bool bVar4;
	undefined8 uVar5;
	byte *pbVar6;
	int v;
	int v_00;
	undefined *puVar8;
	longlong lVar7;
	int iVar9;
	longlong lVar10;
	int iVar11;
	int iVar12;
	longlong lVar13;
	int iVar14;
	int unaff_r28;
	int unaff_r31;
	ulonglong uVar15;
	BOOL BStack0000002c;
	int iStack00000030;

	uVar5 = 0x100f8fd0;
	bVar1 = *miniset;
	bVar2 = miniset[1];
	if ((longlong)tmax - (longlong)tmin == 0) {
		tmin = 1;
		BStack0000002c = setview;
		iStack00000030 = ldir;
	} else {
		BStack0000002c = setview;
		iStack00000030 = ldir;
		v = random('\0', (int)((longlong)tmax - (longlong)tmin));
		tmin = tmin + v;
	}
	v = 0x28 - (uint)bVar1;
	lVar13 = (longlong)(int)(uint)bVar2 * (longlong)(int)(uint)bVar1 + 2;
	v_00 = 0x28 - (uint)bVar2;
	iVar14 = 0;
	while (true) {
		if (tmin <= iVar14) {
			v = (int)uVar5;
			if (BStack0000002c == 1) {
				piVar3 = *(int **)(v + -0x77b4);
				**(int **)(v + -0x77b0) = unaff_r31 * 2 + 0x11;
				*piVar3 = unaff_r28 * 2 + 0x13;
			}
			if (iStack00000030 == 0) {
				piVar3 = *(int **)(v + -0x7520);
				**(int **)(v + -0x751c) = unaff_r31 * 2 + 0x11;
				*piVar3 = unaff_r28 * 2 + 0x13;
			}
			return 0;
		}
		unaff_r31 = random('\0', v);
		unaff_r28 = random('\0', v_00);
		bVar4 = false;
		iVar11 = 0;
		while ((!bVar4 && (iVar11 < 200))) {
			iVar11 = iVar11 + 1;
			bVar4 = true;
			if ((cx != -1) && (((int)(cx - (uint)bVar1) <= unaff_r31 && (unaff_r31 <= cx + 0xc)))) {
				unaff_r31 = random('\0', v);
				unaff_r28 = random('\0', v_00);
				bVar4 = false;
			}
			if (((cy != -1) && ((int)(cy - (uint)bVar2) <= unaff_r28)) && (unaff_r28 <= cy + 0xc)) {
				unaff_r31 = random('\0', v);
				unaff_r28 = random('\0', v_00);
				bVar4 = false;
			}
			pbVar6 = dungeon + unaff_r28;
			puVar8 = &DAT_1013b370 + unaff_r28;
			lVar7 = (longlong)(int)miniset + 2;
			iVar12 = 0;
			while ((iVar12 < (int)(uint)bVar2 && (bVar4))) {
				iVar9 = 0;
				while ((iVar9 < (int)(uint)bVar1 && (bVar4))) {
					if ((*(byte *)lVar7 != 0) && (*(byte *)lVar7 != pbVar6[(unaff_r31 + iVar9) * 0x28])) {
						bVar4 = false;
					}
					if (puVar8[(unaff_r31 + iVar9) * 0x28] != '\0') {
						bVar4 = false;
					}
					lVar7 = lVar7 + 1;
					iVar9 = iVar9 + 1;
				}
				pbVar6 = pbVar6 + 1;
				puVar8 = puVar8 + 1;
				iVar12 = iVar12 + 1;
			}
			if ((!bVar4) && (unaff_r31 = unaff_r31 + 1, unaff_r31 == v)) {
				unaff_r28 = unaff_r28 + 1;
				unaff_r31 = 0;
				if (unaff_r28 == v_00) {
					unaff_r28 = 0;
				}
			}
		}
		if (199 < iVar11)
			break;
		pbVar6 = dungeon + unaff_r28;
		iVar11 = 0;
		lVar7 = lVar13;
		while (iVar11 < (int)(uint)bVar2) {
			lVar10 = (longlong)(int)miniset + lVar7;
			iVar12 = 0;
			uVar15 = (ulonglong)bVar1;
			if (bVar1 != 0) {
				do {
					if (*(byte *)lVar10 != 0) {
						pbVar6[(unaff_r31 + iVar12) * 0x28] = *(byte *)lVar10;
					}
					lVar7 = lVar7 + 1;
					lVar10 = lVar10 + 1;
					iVar12 = iVar12 + 1;
					uVar15 = uVar15 - 1;
				} while (uVar15 != 0);
			}
			pbVar6 = pbVar6 + 1;
			iVar11 = iVar11 + 1;
		}
		iVar14 = iVar14 + 1;
	}
	return 1;
}

void DRLG_L3PlaceRndSet(BYTE *miniset, int rndper)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	byte *pbVar7;
	byte *pbVar8;
	undefined *puVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	undefined *puVar15;
	byte *pbVar16;
	byte *pbVar17;
	ulonglong uVar18;

	pbVar16 = dungeon;
	puVar15 = &DAT_1013b370;
	iVar12 = 0;
	bVar1 = *miniset;
	bVar2 = miniset[1];
	iVar5 = (uint)bVar2 * (uint)bVar1;
	iVar14 = iVar5 + 2;
	while (iVar12 < (int)(0x28 - (uint)bVar2)) {
		iVar13 = 0;
		pbVar17 = pbVar16;
		while (iVar13 < (int)(0x28 - (uint)bVar1)) {
			pbVar7 = miniset + 2;
			bVar4 = true;
			iVar6 = 0;
			pbVar8 = pbVar16;
			puVar9 = puVar15;
			while ((iVar6 < (int)(uint)bVar2 && (bVar4))) {
				iVar10 = 0;
				while ((iVar10 < (int)(uint)bVar1 && (bVar4))) {
					if ((*pbVar7 != 0) && (*pbVar7 != pbVar8[(iVar13 + iVar10) * 0x28])) {
						bVar4 = false;
					}
					if (puVar9[(iVar13 + iVar10) * 0x28] != '\0') {
						bVar4 = false;
					}
					pbVar7 = pbVar7 + 1;
					iVar10 = iVar10 + 1;
				}
				pbVar8 = pbVar8 + 1;
				puVar9 = puVar9 + 1;
				iVar6 = iVar6 + 1;
			}
			if (((0x53 < miniset[iVar5 + 2]) && (miniset[iVar14] < 0x65)) && (bVar4)) {
				bVar3 = pbVar17[-0x28];
				if ((0x53 < bVar3) && (bVar3 < 0x65)) {
					bVar4 = false;
				}
				if ((0x53 < pbVar17[0x28]) && (bVar3 < 0x65)) {
					bVar4 = false;
				}
				if ((0x53 < pbVar17[1]) && (bVar3 < 0x65)) {
					bVar4 = false;
				}
				if ((0x53 < pbVar17[-1]) && (bVar3 < 0x65)) {
					bVar4 = false;
				}
			}
			if ((bVar4) && (iVar6 = random('\0', 100), iVar6 < rndper)) {
				iVar10 = 0;
				iVar6 = iVar14;
				pbVar8 = pbVar16;
				while (iVar10 < (int)(uint)bVar2) {
					pbVar7 = miniset + iVar6;
					iVar11 = 0;
					uVar18 = (ulonglong)bVar1;
					if (bVar1 != 0) {
						do {
							if (*pbVar7 != 0) {
								pbVar8[(iVar13 + iVar11) * 0x28] = *pbVar7;
							}
							iVar6 = iVar6 + 1;
							pbVar7 = pbVar7 + 1;
							iVar11 = iVar11 + 1;
							uVar18 = uVar18 - 1;
						} while (uVar18 != 0);
					}
					pbVar8 = pbVar8 + 1;
					iVar10 = iVar10 + 1;
				}
			}
			pbVar17 = pbVar17 + 0x28;
			iVar13 = iVar13 + 1;
		}
		pbVar16 = pbVar16 + 1;
		puVar15 = puVar15 + 1;
		iVar12 = iVar12 + 1;
	}
	return;
}

BOOL WoodVertU(int i, int y)

{
	byte bVar1;

	i = i * 0x28;
	if (((0x98 < dungeon[i + y + 0x28]) || (dungeon[i + y + 0x28] < 0x82)) && ((bVar1 = *(byte *)(i + y + 0x1013bfc8), 0x98 < bVar1 || (bVar1 < 0x82)))) {
		bVar1 = dungeon[i + y];
		if (bVar1 == 7) {
			return 1;
		}
		if (bVar1 == 10) {
			return 1;
		}
		if (bVar1 == 0x7e) {
			return 1;
		}
		if (bVar1 == 0x81) {
			return 1;
		}
		if (bVar1 == 0x86) {
			return 1;
		}
		if (bVar1 == 0x88) {
			return 1;
		}
	}
	return 0;
}

BOOL WoodVertD(int i, int y)

{
	byte bVar1;

	i = i * 0x28;
	if (((0x98 < dungeon[i + y + 0x28]) || (dungeon[i + y + 0x28] < 0x82)) && ((bVar1 = *(byte *)(i + y + 0x1013bfc8), 0x98 < bVar1 || (bVar1 < 0x82)))) {
		bVar1 = dungeon[i + y];
		if (bVar1 == 7) {
			return 1;
		}
		if (bVar1 == 2) {
			return 1;
		}
		if (bVar1 == 0x86) {
			return 1;
		}
		if (bVar1 == 0x88) {
			return 1;
		}
	}
	return 0;
}

BOOL WoodHorizL(int x, int j)

{
	byte bVar1;

	x = x * 0x28;
	if (((0x98 < dungeon[x + j + 1]) || (dungeon[x + j + 1] < 0x82)) && ((bVar1 = *(byte *)(x + j + 0x1013bfef), 0x98 < bVar1 || (bVar1 < 0x82)))) {
		bVar1 = dungeon[x + j];
		if (bVar1 == 7) {
			return 1;
		}
		if (bVar1 == 9) {
			return 1;
		}
		if (bVar1 == 0x79) {
			return 1;
		}
		if (bVar1 == 0x7c) {
			return 1;
		}
		if (bVar1 == 0x87) {
			return 1;
		}
		if (bVar1 == 0x89) {
			return 1;
		}
	}
	return 0;
}

BOOL WoodHorizR(int x, int j)

{
	byte bVar1;

	x = x * 0x28;
	if (((0x98 < dungeon[x + j + 1]) || (dungeon[x + j + 1] < 0x82)) && ((bVar1 = *(byte *)(x + j + 0x1013bfef), 0x98 < bVar1 || (bVar1 < 0x82)))) {
		bVar1 = dungeon[x + j];
		if (bVar1 == 7) {
			return 1;
		}
		if (bVar1 == 4) {
			return 1;
		}
		if (bVar1 == 0x87) {
			return 1;
		}
		if (bVar1 == 0x89) {
			return 1;
		}
	}
	return 0;
}

void AddFenceDoors(void)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	int iVar4;
	longlong lVar5;

	iVar4 = 0;
	pbVar3 = dungeon;
	do {
		lVar5 = 0x14;
		pbVar2 = pbVar3;
		do {
			if ((((*pbVar2 == 7) && (pbVar2[-0x28] < 0x99)) && (0x81 < pbVar2[-0x28])) && ((pbVar2[0x28] < 0x99 && (0x81 < pbVar2[0x28])))) {
				*pbVar2 = 0x92;
			} else {
				if (((*pbVar2 == 7) && ((pbVar2[-1] < 0x99 && (0x81 < pbVar2[-1])))) && ((pbVar2[1] < 0x99 && (0x81 < pbVar2[1])))) {
					*pbVar2 = 0x93;
				}
			}
			pbVar1 = pbVar2 + 0x28;
			if ((((*pbVar1 == 7) && (*pbVar2 < 0x99)) && (0x81 < *pbVar2)) && ((pbVar2[0x50] < 0x99 && (0x81 < pbVar2[0x50])))) {
				*pbVar1 = 0x92;
			} else {
				if ((((*pbVar1 == 7) && ((pbVar2[0x27] < 0x99 && (0x81 < pbVar2[0x27])))) && (pbVar2[0x29] < 0x99)) && (0x81 < pbVar2[0x29])) {
					*pbVar1 = 0x93;
				}
			}
			pbVar2 = pbVar2 + 0x50;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar4 < 0x28);
	return;
}

void FenceDoorFix(void)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	byte *pbVar4;
	byte *pbVar5;
	int iVar6;
	longlong lVar7;

	iVar6 = 0;
	pbVar5 = dungeon;
	do {
		lVar7 = 0x28;
		pbVar4 = pbVar5;
		do {
			bVar1 = *pbVar4;
			if ((bVar1 == 0x92) && ((((0x98 < pbVar4[0x28] || (pbVar4[0x28] < 0x82)) || (0x98 < pbVar4[-0x28])) || (pbVar4[-0x28] < 0x82)))) {
				*pbVar4 = 7;
			} else {
				if (((((bVar1 == 0x92) && (bVar2 = pbVar4[0x28], bVar2 != 0x82)) && (bVar3 = pbVar4[-0x28], bVar3 != 0x82)) && (((bVar2 != 0x84 && (bVar3 != 0x84)) && (((bVar2 != 0x85 && (((bVar3 != 0x85 && (bVar2 != 0x86)) && (bVar3 != 0x86)))) && ((bVar2 != 0x88 && (bVar3 != 0x88)))))))) && ((bVar2 != 0x8a && (((bVar3 != 0x8a && (bVar2 != 0x8c)) && (bVar3 != 0x8c)))))) {
					*pbVar4 = 7;
				} else {
					if ((bVar1 == 0x93) && ((((0x98 < pbVar4[1] || (pbVar4[1] < 0x82)) || (0x98 < pbVar4[-1])) || (pbVar4[-1] < 0x82)))) {
						*pbVar4 = 7;
					} else {
						if ((((bVar1 == 0x93) && (bVar1 = pbVar4[1], bVar1 != 0x83)) && ((bVar2 = pbVar4[-1], bVar2 != 0x83 && ((bVar1 != 0x84 && (bVar2 != 0x84)))))) && ((bVar1 != 0x85 && ((((((bVar2 != 0x85 && (bVar1 != 0x87)) && (bVar2 != 0x87)) && ((bVar1 != 0x89 && (bVar2 != 0x89)))) && ((bVar1 != 0x8a && ((bVar2 != 0x8a && (bVar1 != 0x8b)))))) && (bVar2 != 0x8b)))))) {
							*pbVar4 = 7;
						}
					}
				}
			}
			pbVar4 = pbVar4 + 0x28;
			lVar7 = lVar7 + -1;
		} while (lVar7 != 0);
		iVar6 = iVar6 + 1;
		pbVar5 = pbVar5 + 1;
	} while (iVar6 < 0x28);
	return;
}

void DRLG_L3Wood(void)

{
	longlong lVar1;
	ulonglong uVar2;
	int x;
	longlong lVar3;
	BOOL BVar4;
	int iVar5;
	int iVar6;
	int y;
	int y_00;
	int y_01;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	ulonglong uVar12;
	char *pcVar14;
	ulonglong uVar13;
	ulonglong uVar15;

	uVar2 = ZEXT48(dungeon);
	lVar10 = 0;
	uVar12 = uVar2;
	do {
		lVar9 = 0;
		lVar8 = 0;
		uVar13 = uVar12;
		uVar15 = uVar2;
		do {
			pcVar14 = (char *)uVar13;
			if ((*pcVar14 == '\n') && (x = random('\0', 2), x != 0)) {
				lVar3 = uVar12 + lVar8;
				lVar7 = lVar9;
				while (*(char *)lVar3 == '\n') {
					lVar3 = lVar3 + 0x28;
					lVar7 = lVar7 + 1;
				}
				if (0 < (lVar7 + -1) - lVar9) {
					lVar3 = lVar9 + 1;
					lVar11 = uVar12 + lVar3 * 0x28;
					*pcVar14 = '\x7f';
					while (x = (int)(lVar7 + -1), (int)lVar3 < x) {
						x = random('\0', 2);
						if (x == 0) {
							*(undefined *)lVar11 = 0x81;
						} else {
							*(undefined *)lVar11 = 0x7e;
						}
						lVar11 = lVar11 + 0x28;
						lVar3 = lVar3 + 1;
					}
					*(undefined *)((int)uVar12 + x * 0x28) = 0x80;
				}
			}
			if ((*pcVar14 == '\t') && (x = random('\0', 2), x != 0)) {
				lVar3 = uVar15 + lVar10;
				lVar7 = lVar10;
				while (*(char *)lVar3 == '\t') {
					lVar3 = lVar3 + 1;
					lVar7 = lVar7 + 1;
				}
				if (0 < (lVar7 + -1) - lVar10) {
					lVar11 = lVar10 + uVar15;
					*pcVar14 = '{';
					lVar3 = lVar10;
					while (true) {
						lVar11 = lVar11 + 1;
						lVar3 = lVar3 + 1;
						x = (int)(lVar7 + -1);
						if (x <= (int)lVar3)
							break;
						x = random('\0', 2);
						if (x == 0) {
							*(undefined *)lVar11 = 0x7c;
						} else {
							*(undefined *)lVar11 = 0x79;
						}
					}
					*(undefined *)((int)uVar15 + x) = 0x7a;
				}
			}
			if ((((*pcVar14 == '\v') && (pcVar14[0x28] == '\n')) && (pcVar14[1] == '\t')) && (x = random('\0', 2), x != 0)) {
				lVar3 = lVar9 + 1;
				lVar11 = uVar12 + lVar3 * 0x28;
				*pcVar14 = '}';
				lVar7 = lVar11;
				while (*(char *)lVar7 == '\n') {
					lVar7 = lVar7 + 0x28;
					lVar3 = lVar3 + 1;
				}
				x = (int)lVar3 + -1;
				lVar7 = lVar9;
				while (lVar7 = lVar7 + 1, (int)lVar7 < x) {
					y_01 = random('\0', 2);
					if (y_01 == 0) {
						*(undefined *)lVar11 = 0x81;
					} else {
						*(undefined *)lVar11 = 0x7e;
					}
					lVar11 = lVar11 + 0x28;
				}
				lVar11 = lVar10 + uVar15 + 1;
				*(undefined *)((int)uVar12 + x * 0x28) = 0x80;
				lVar3 = lVar11;
				lVar7 = lVar10;
				while (lVar1 = lVar10, *(char *)lVar3 == '\t') {
					lVar3 = lVar3 + 1;
					lVar7 = lVar7 + 1;
				}
				while (true) {
					if ((int)lVar7 <= (int)(lVar1 + 1))
						break;
					x = random('\0', 2);
					if (x == 0) {
						*(undefined *)lVar11 = 0x7c;
					} else {
						*(undefined *)lVar11 = 0x79;
					}
					lVar11 = lVar11 + 1;
					lVar1 = lVar1 + 1;
				}
				*(undefined *)((int)uVar15 + (int)lVar7) = 0x7a;
			}
			lVar9 = lVar9 + 1;
			uVar15 = uVar15 + 0x28;
			lVar8 = lVar8 + 0x28;
			uVar13 = uVar13 + 0x28;
		} while ((int)lVar9 < 0x27);
		lVar10 = lVar10 + 1;
		uVar12 = uVar12 + 1;
	} while ((int)lVar10 < 0x27);
	lVar10 = 0;
	uVar12 = uVar2;
	do {
		lVar8 = 0;
		uVar13 = uVar2;
		uVar15 = uVar12;
		do {
			if ((*(char *)uVar15 == '\a') && (x = random('\0', 1), x == 0)) {
				x = (int)lVar8;
				y_01 = (int)lVar10;
				BVar4 = SkipThemeRoom(x, y_01);
				if (BVar4 != 0) {
					iVar5 = random('\0', 2);
					lVar9 = lVar10;
					if (iVar5 == 0) {
						while (true) {
							y = (int)lVar9;
							BVar4 = WoodVertU(x, y);
							lVar7 = lVar10;
							if (BVar4 == 0)
								break;
							lVar9 = lVar9 + -1;
						}
						while (true) {
							y_00 = (int)lVar7;
							BVar4 = WoodVertD(x, y_00);
							if (BVar4 == 0)
								break;
							lVar7 = lVar7 + 1;
						}
						lVar7 = lVar9 + 1;
						x = (y_00 + -1) - (int)lVar7;
						if ((1 < x) && (*(char *)((int)uVar13 + y_00 + -1) != '\a' && *(char *)((int)uVar13 + y + 1) != '\a')) {
							x = random('\0', x + -1);
							lVar9 = lVar9 + uVar13;
							while (true) {
								lVar9 = lVar9 + 1;
								if (y_00 + -1 < (int)lVar7)
									break;
								if ((int)lVar7 != y + x + 2) {
									pcVar14 = (char *)lVar9;
									if (*pcVar14 == '\a') {
										iVar6 = random('\0', 2);
										if (iVar6 == 0) {
											*pcVar14 = -0x77;
										} else {
											*pcVar14 = -0x79;
										}
									}
									if (*pcVar14 == '\n') {
										*pcVar14 = -0x7d;
									}
									if (*pcVar14 == '~') {
										*pcVar14 = -0x7b;
									}
									if (*pcVar14 == -0x7f) {
										*pcVar14 = -0x7b;
									}
									if (*pcVar14 == '\x02') {
										*pcVar14 = -0x75;
									}
									if (*pcVar14 == -0x7a) {
										*pcVar14 = -0x76;
									}
									if (*pcVar14 == -0x78) {
										*pcVar14 = -0x76;
									}
								}
								lVar7 = lVar7 + 1;
							}
						}
					}
					lVar9 = lVar8;
					if (iVar5 == 1) {
						while (true) {
							BVar4 = WoodHorizL((int)lVar9, y_01);
							lVar7 = lVar8;
							if (BVar4 == 0)
								break;
							lVar9 = lVar9 + -1;
						}
						while (true) {
							x = (int)lVar7;
							BVar4 = WoodHorizR(x, y_01);
							if (BVar4 == 0)
								break;
							lVar7 = lVar7 + 1;
						}
						lVar7 = uVar12 + (lVar9 + 1) * 0x28;
						lVar3 = lVar9 + 1;
						y_01 = (x + -1) - (int)lVar3;
						if ((1 < y_01) && (*(char *)((int)uVar12 + (x + -1) * 0x28) != '\a' && *(char *)lVar7 != '\a')) {
							y_01 = random('\0', y_01 + -1);
							while ((int)lVar3 <= x + -1) {
								if ((int)lVar3 != (int)lVar9 + y_01 + 2) {
									pcVar14 = (char *)lVar7;
									if (*pcVar14 == '\a') {
										iVar5 = random('\0', 2);
										if (iVar5 == 0) {
											*pcVar14 = -0x78;
										} else {
											*pcVar14 = -0x7a;
										}
									}
									if (*pcVar14 == '\t') {
										*pcVar14 = -0x7e;
									}
									if (*pcVar14 == 'y') {
										*pcVar14 = -0x7c;
									}
									if (*pcVar14 == '|') {
										*pcVar14 = -0x7c;
									}
									if (*pcVar14 == '\x04') {
										*pcVar14 = -0x74;
									}
									if (*pcVar14 == -0x79) {
										*pcVar14 = -0x76;
									}
									if (*pcVar14 == -0x77) {
										*pcVar14 = -0x76;
									}
								}
								lVar7 = lVar7 + 0x28;
								lVar3 = lVar3 + 1;
							}
						}
					}
				}
			}
			lVar8 = lVar8 + 1;
			uVar13 = uVar13 + 0x28;
			uVar15 = uVar15 + 0x28;
		} while ((int)lVar8 < 0x28);
		lVar10 = lVar10 + 1;
		uVar12 = uVar12 + 1;
	} while ((int)lVar10 < 0x28);
	AddFenceDoors();
	FenceDoorFix();
	return;
}

BOOL DRLG_L3Anvil(void)

{
	int *piVar1;
	uint *puVar2;
	uint *puVar3;
	uint uVar4;
	bool bVar5;
	byte bVar6;
	byte bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	BOOL BVar11;
	int v;
	byte *pbVar12;
	byte *pbVar13;
	byte *pbVar14;
	undefined *puVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	uint uVar19;
	ulonglong uVar20;
	uint uVar21;
	ulonglong uVar22;

	bVar7 = bRam100f8ba3;
	bVar6 = DAT_100f8ba2;
	iVar8 = 0x100f8fd0;
	uVar20 = (ulonglong)DAT_100f8ba2;
	uVar4 = (uint)DAT_100f8ba2;
	iVar9 = random('\0', 0x28 - uVar4);
	v = 0x28 - (uint)bVar7;
	iVar10 = random('\0', v);
	bVar5 = false;
	iVar18 = 0;
	while (true) {
		uVar21 = (uint)bVar6;
		uVar19 = (uint)bVar7;
		if ((bVar5) || (199 < iVar18))
			break;
		pbVar12 = (byte *)0x100f8ba4;
		pbVar13 = dungeon + iVar10;
		puVar15 = &DAT_1013b370 + iVar10;
		iVar18 = iVar18 + 1;
		bVar5 = true;
		iVar17 = 0;
		while ((iVar17 < (int)uVar19 && (bVar5))) {
			iVar16 = 0;
			pbVar14 = pbVar12;
			while ((iVar16 < (int)uVar21 && (bVar5))) {
				if ((*pbVar14 != 0) && (*pbVar14 != pbVar13[(iVar9 + iVar16) * 0x28])) {
					bVar5 = false;
				}
				if (puVar15[(iVar9 + iVar16) * 0x28] != '\0') {
					bVar5 = false;
				}
				pbVar14 = pbVar14 + 1;
				pbVar12 = pbVar12 + 1;
				iVar16 = iVar16 + 1;
			}
			pbVar13 = pbVar13 + 1;
			puVar15 = puVar15 + 1;
			iVar17 = iVar17 + 1;
		}
		if (!bVar5) {
			iVar9 = iVar9 + 1;
			if (iVar9 == 0x28 - uVar4) {
				iVar10 = iVar10 + 1;
				iVar9 = 0;
				if (iVar10 == v) {
					iVar10 = 0;
				}
			}
		}
	}
	if (iVar18 < 200) {
		pbVar13 = dungeon + iVar10;
		puVar15 = &DAT_1013b370 + iVar10;
		pbVar12 = (byte *)(uVar19 * uVar21 + 0x100f8ba4);
		v = 0;
		while (v < (int)uVar19) {
			iVar18 = 0;
			uVar22 = uVar20;
			pbVar14 = pbVar12;
			if (bVar6 != 0) {
				do {
					if (*pbVar12 != 0) {
						pbVar13[(iVar9 + iVar18) * 0x28] = *pbVar12;
					}
					pbVar12 = pbVar12 + 1;
					iVar17 = (iVar9 + iVar18) * 0x28;
					pbVar14 = pbVar14 + 1;
					iVar18 = iVar18 + 1;
					puVar15[iVar17] = puVar15[iVar17] | 0x80;
					uVar22 = uVar22 - 1;
				} while (uVar22 != 0);
			}
			pbVar12 = pbVar14;
			pbVar13 = pbVar13 + 1;
			puVar15 = puVar15 + 1;
			v = v + 1;
		}
		BVar11 = 0;
		piVar1 = *(int **)(iVar8 + -0x7550);
		**(int **)(iVar8 + -0x754c) = iVar9;
		puVar2 = *(uint **)(iVar8 + -0x7554);
		*piVar1 = iVar10;
		puVar3 = *(uint **)(iVar8 + -0x7558);
		*puVar2 = uVar21;
		*puVar3 = uVar19;
	} else {
		BVar11 = 1;
	}
	return BVar11;
}

void FixL3Warp(void)

{
	byte *pbVar1;
	byte *pbVar2;
	int iVar3;
	int iVar4;
	longlong lVar5;

	pbVar2 = dungeon;
	iVar4 = 0;
	do {
		lVar5 = 0x28;
		iVar3 = 0;
		pbVar1 = pbVar2;
		do {
			if ((((*pbVar1 == 0x7d) && (pbVar1[0x28] == 0x7d)) && (pbVar1[1] == 0x7d)) && (pbVar1[0x29] == 0x7d)) {
				pbVar2 = dungeon + iVar4 + iVar3 * 0x28;
				dungeon[iVar3 * 0x28 + iVar4] = 0x9c;
				pbVar2[0x28] = 0x9b;
				pbVar2[1] = 0x99;
				pbVar2[0x29] = 0x9a;
				return;
			}
			if ((*pbVar1 == 5) && (pbVar1[0x29] == 7)) {
				*pbVar1 = 7;
			}
			pbVar1 = pbVar1 + 0x28;
			iVar3 = iVar3 + 1;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar2 = pbVar2 + 1;
		if (0x27 < iVar4) {
			return;
		}
	} while (true);
}

void FixL3HallofHeroes(void)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	int iVar4;
	longlong lVar5;

	pbVar3 = dungeon;
	iVar4 = 0;
	pbVar2 = pbVar3;
	do {
		lVar5 = 4;
		pbVar1 = pbVar2;
		do {
			if ((*pbVar1 == 5) && (pbVar1[0x29] == 7)) {
				*pbVar1 = 7;
			}
			if ((pbVar1[0x28] == 5) && (pbVar1[0x51] == 7)) {
				pbVar1[0x28] = 7;
			}
			if ((pbVar1[0x50] == 5) && (pbVar1[0x79] == 7)) {
				pbVar1[0x50] = 7;
			}
			if ((pbVar1[0x78] == 5) && (pbVar1[0xa1] == 7)) {
				pbVar1[0x78] = 7;
			}
			if ((pbVar1[0xa0] == 5) && (pbVar1[0xc9] == 7)) {
				pbVar1[0xa0] = 7;
			}
			if ((pbVar1[200] == 5) && (pbVar1[0xf1] == 7)) {
				pbVar1[200] = 7;
			}
			if ((pbVar1[0xf0] == 5) && (pbVar1[0x119] == 7)) {
				pbVar1[0xf0] = 7;
			}
			if ((pbVar1[0x118] == 5) && (pbVar1[0x141] == 7)) {
				pbVar1[0x118] = 7;
			}
			if ((pbVar1[0x140] == 5) && (pbVar1[0x169] == 7)) {
				pbVar1[0x140] = 7;
			}
			if ((pbVar1[0x168] == 5) && (pbVar1[0x191] == 7)) {
				pbVar1[0x168] = 7;
			}
			pbVar1 = pbVar1 + 400;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar2 = pbVar2 + 1;
	} while (iVar4 < 0x28);
	iVar4 = 0;
	do {
		lVar5 = 0x14;
		pbVar2 = pbVar3;
		do {
			if (((*pbVar2 == 5) && (pbVar2[0x29] == 0xc)) && (pbVar2[0x28] == 7)) {
				*pbVar2 = 7;
				pbVar2[1] = 7;
				pbVar2[0x29] = 7;
			}
			if (((*pbVar2 == 5) && (pbVar2[0x29] == 0xc)) && (pbVar2[1] == 7)) {
				*pbVar2 = 7;
				pbVar2[0x28] = 7;
				pbVar2[0x29] = 7;
			}
			pbVar1 = pbVar2 + 0x28;
			if (((*pbVar1 == 5) && (pbVar2[0x51] == 0xc)) && (pbVar2[0x50] == 7)) {
				*pbVar1 = 7;
				pbVar2[0x29] = 7;
				pbVar2[0x51] = 7;
			}
			if (((*pbVar1 == 5) && (pbVar2[0x51] == 0xc)) && (pbVar2[0x29] == 7)) {
				*pbVar1 = 7;
				pbVar2[0x50] = 7;
				pbVar2[0x51] = 7;
			}
			pbVar2 = pbVar2 + 0x50;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar4 = iVar4 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar4 < 0x28);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L3LockRec(int x, int y)

{
	int iVar1;
	BYTE *p;
	int iVar2;
	int iVar3;
	int *piVar4;
	int *piVar5;
	int iVar6;

	iVar6 = 0;
	p = DiabloAllocPtr(24000);
	do {
		if (0 < iVar6) {
			iVar6 = iVar6 + -1;
			x = *(int *)(p + iVar6 * 0xc);
			y = *(int *)(p + iVar6 * 0xc + 1);
		}
		if ((&DAT_1012b7a4)[x * 0x28 + y] != '\0') {
			iVar3 = iVar6 + 1;
			(&DAT_1012b7a4)[x * 0x28 + y] = '\0';
			iVar2 = iVar6 + 2;
			iVar1 = iVar6 + 3;
			piVar4 = (int *)(p + iVar6 * 0xc);
			_DAT_1012b7a0 = _DAT_1012b7a0 + 1;
			iVar6 = iVar6 + 4;
			*piVar4 = x + 1;
			piVar4[1] = y;
			piVar5 = (int *)(p + iVar3 * 0xc);
			piVar4[2] = 4;
			*piVar5 = x + -1;
			piVar4 = (int *)(p + iVar2 * 0xc);
			piVar5[1] = y;
			piVar5[2] = 3;
			*piVar4 = x;
			piVar5 = (int *)(p + iVar1 * 0xc);
			piVar4[1] = y + 1;
			piVar4[2] = 2;
			*piVar5 = x;
			piVar5[1] = y + -1;
			piVar5[2] = 1;
		}
	} while (0 < iVar6);
	mem_free_dbg(p);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL DRLG_L3Lockout(void)

{
	int x;
	int y;
	byte *pbVar1;
	undefined *puVar2;
	byte *pbVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	longlong lVar8;

	iVar6 = 0;
	pbVar3 = dungeon;
	iVar7 = 0;
	puVar4 = &DAT_1012b7a4;
	do {
		lVar8 = 5;
		iVar5 = 0;
		pbVar1 = pbVar3;
		puVar2 = puVar4;
		do {
			if (*pbVar1 == 0) {
				*puVar2 = 0;
			} else {
				*puVar2 = 1;
				iVar7 = iVar7 + 1;
				y = iVar6;
				x = iVar5;
			}
			if (pbVar1[0x28] == 0) {
				puVar2[0x28] = 0;
			} else {
				puVar2[0x28] = 1;
				iVar7 = iVar7 + 1;
				y = iVar6;
				x = iVar5 + 1;
			}
			if (pbVar1[0x50] == 0) {
				puVar2[0x50] = 0;
			} else {
				puVar2[0x50] = 1;
				iVar7 = iVar7 + 1;
				y = iVar6;
				x = iVar5 + 2;
			}
			if (pbVar1[0x78] == 0) {
				puVar2[0x78] = 0;
			} else {
				puVar2[0x78] = 1;
				iVar7 = iVar7 + 1;
				y = iVar6;
				x = iVar5 + 3;
			}
			if (pbVar1[0xa0] == 0) {
				puVar2[0xa0] = 0;
			} else {
				puVar2[0xa0] = 1;
				iVar7 = iVar7 + 1;
				y = iVar6;
				x = iVar5 + 4;
			}
			if (pbVar1[200] == 0) {
				puVar2[200] = 0;
			} else {
				puVar2[200] = 1;
				iVar7 = iVar7 + 1;
				y = iVar6;
				x = iVar5 + 5;
			}
			if (pbVar1[0xf0] == 0) {
				puVar2[0xf0] = 0;
			} else {
				puVar2[0xf0] = 1;
				iVar7 = iVar7 + 1;
				y = iVar6;
				x = iVar5 + 6;
			}
			if (pbVar1[0x118] == 0) {
				puVar2[0x118] = 0;
			} else {
				puVar2[0x118] = 1;
				iVar7 = iVar7 + 1;
				y = iVar6;
				x = iVar5 + 7;
			}
			pbVar1 = pbVar1 + 0x140;
			puVar2 = puVar2 + 0x140;
			iVar5 = iVar5 + 8;
			lVar8 = lVar8 + -1;
		} while (lVar8 != 0);
		iVar6 = iVar6 + 1;
		puVar4 = puVar4 + 1;
		pbVar3 = pbVar3 + 1;
	} while (iVar6 < 0x28);
	_DAT_1012b7a0 = 0;
	DRLG_L3LockRec(x, y);
	return (BOOL)(uint)(iVar7 == _DAT_1012b7a0);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L3(int entry)

{
	byte *pbVar1;
	undefined8 uVar2;
	int iVar3;
	int iVar4;
	BOOL BVar5;
	byte *pbVar6;
	int y1;
	int x1;
	int genok;
	byte *pbVar7;
	longlong lVar8;

	uVar2 = 0x100f8fd0;
	pbVar7 = dungeon;
	DAT_100f40d8 = 0;
	do {
		do {
			do {
				InitL3Dungeon();
				iVar3 = random('\0', 0x14);
				x1 = iVar3 + 10;
				iVar4 = random('\0', 0x14);
				y1 = iVar4 + 10;
				DRLG_L3FillRoom(x1, y1, iVar3 + 0xc, iVar4 + 0xc);
				DRLG_L3CreateBlock(x1, y1, 2, 0);
				DRLG_L3CreateBlock(iVar3 + 0xc, y1, 2, 1);
				DRLG_L3CreateBlock(x1, iVar4 + 0xc, 2, 2);
				DRLG_L3CreateBlock(x1, y1, 2, 3);
				BVar5 = QuestStatus(10);
				if (BVar5 != 0) {
					iVar3 = random('\0', 10);
					iVar4 = random('\0', 10);
					DRLG_L3FloorArea(iVar3 + 10, iVar4 + 10, iVar3 + 0x16, iVar4 + 0x16);
				}
				DRLG_L3FillDiags();
				DRLG_L3FillSingles();
				DRLG_L3FillStraights();
				DRLG_L3FillDiags();
				DRLG_L3Edges();
				iVar3 = DRLG_L3GetFloorArea();
				if (iVar3 < 600) {
					iVar3 = 0;
				} else {
					iVar3 = DRLG_L3Lockout();
				}
			} while (iVar3 == 0);
			DRLG_L3MakeMegas();
			if (entry == 0) {
				genok = DRLG_L3PlaceMiniSet(&DAT_100f89cc, 1, 1, -1, -1, 1, 0);
				if (genok == 0) {
					genok = DRLG_L3PlaceMiniSet(&DAT_100f89e0, 1, 1, -1, -1, 0, 1);
				}
				if ((genok == 0) && (currlevel == 9)) {
					genok = DRLG_L3PlaceMiniSet(&DAT_100f89f4, 1, 1, -1, -1, 0, 6);
				}
			} else {
				if (entry == 1) {
					genok = DRLG_L3PlaceMiniSet(&DAT_100f89cc, 1, 1, -1, -1, 0, 0);
					if (genok == 0) {
						genok = DRLG_L3PlaceMiniSet(&DAT_100f89e0, 1, 1, -1, -1, 1, 1);
						_DAT_1012f310 = _DAT_1012f310 + 2;
						_DAT_1012f30c = _DAT_1012f30c + -2;
					}
					if ((genok == 0) && (currlevel == 9)) {
						genok = DRLG_L3PlaceMiniSet(&DAT_100f89f4, 1, 1, -1, -1, 0, 6);
					}
				} else {
					genok = DRLG_L3PlaceMiniSet(&DAT_100f89cc, 1, 1, -1, -1, 0, 0);
					if (genok == 0) {
						genok = DRLG_L3PlaceMiniSet(&DAT_100f89e0, 1, 1, -1, -1, 0, 1);
					}
					if ((genok == 0) && (currlevel == 9)) {
						genok = DRLG_L3PlaceMiniSet(&DAT_100f89f4, 1, 1, -1, -1, 1, 6);
					}
				}
			}
			if ((genok == 0) && (BVar5 = QuestStatus(10), BVar5 != 0)) {
				genok = DRLG_L3Anvil();
			}
		} while (genok == 1);
		DRLG_L3Pool();
		iVar3 = (int)uVar2;
	} while (*(char *)(iVar3 + -0x4ef8) == '\0');
	DRLG_L3PoolFix();
	FixL3Warp();
	DRLG_L3PlaceRndSet(&DAT_100f8b60, 0x46);
	DRLG_L3PlaceRndSet(&DAT_100f8b6e, 0x46);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x454), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x446), 0x1e);
	DRLG_L3PlaceRndSet(&DAT_100f8b60, 100);
	DRLG_L3PlaceRndSet(&DAT_100f8b6e, 100);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x438), 0x5a);
	FixL3HallofHeroes();
	DRLG_L3River();
	BVar5 = QuestStatus(10);
	if (BVar5 != 0) {
		pbVar6 = dungeon + **(int **)(iVar3 + -0x7550) + **(int **)(iVar3 + -0x754c) * 0x28;
		pbVar6[0x11d] = 7;
		pbVar6[0x145] = 7;
		pbVar6[0x16d] = 7;
		if ((pbVar6[0x195] == 0x11) || (pbVar6[0x195] == 0x12)) {
			pbVar6[0x195] = 0x2d;
		}
	}
	DRLG_PlaceThemeRooms(5, 10, 7, 0, 0);
	DRLG_L3Wood();
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x5c8), 10);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x5a6), 10);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x584), 10);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x562), 0x14);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x538), 0x14);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x50e), 0x14);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4fa), 0x14);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4e6), 0x14);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4d2), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4be), 0x14);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4b8), 0x14);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4b2), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4ac), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4a6), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4a0), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x49a), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x494), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x48e), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x488), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x482), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x47c), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x476), 0x1e);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4f10), 0x19);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4f0c), 0x19);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4f08), 0x19);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4f04), 0x19);
	DRLG_L3PlaceRndSet((BYTE *)(iVar3 + -0x4f00), 0x19);
	pbVar6 = *(byte **)(iVar3 + -0x7540);
	lVar8 = 0x14;
	do {
		*pbVar6 = *pbVar7;
		pbVar6[0x28] = pbVar7[0x28];
		pbVar6[0x50] = pbVar7[0x50];
		pbVar6[0x78] = pbVar7[0x78];
		pbVar6[0xa0] = pbVar7[0xa0];
		pbVar6[200] = pbVar7[200];
		pbVar6[0xf0] = pbVar7[0xf0];
		pbVar6[0x118] = pbVar7[0x118];
		pbVar6[0x140] = pbVar7[0x140];
		pbVar6[0x168] = pbVar7[0x168];
		pbVar6[400] = pbVar7[400];
		pbVar6[0x1b8] = pbVar7[0x1b8];
		pbVar6[0x1e0] = pbVar7[0x1e0];
		pbVar6[0x208] = pbVar7[0x208];
		pbVar6[0x230] = pbVar7[0x230];
		pbVar6[600] = pbVar7[600];
		pbVar6[0x280] = pbVar7[0x280];
		pbVar6[0x2a8] = pbVar7[0x2a8];
		pbVar6[0x2d0] = pbVar7[0x2d0];
		pbVar6[0x2f8] = pbVar7[0x2f8];
		pbVar6[800] = pbVar7[800];
		pbVar6[0x348] = pbVar7[0x348];
		pbVar6[0x370] = pbVar7[0x370];
		pbVar6[0x398] = pbVar7[0x398];
		pbVar6[0x3c0] = pbVar7[0x3c0];
		pbVar6[1000] = pbVar7[1000];
		pbVar6[0x410] = pbVar7[0x410];
		pbVar6[0x438] = pbVar7[0x438];
		pbVar6[0x460] = pbVar7[0x460];
		pbVar6[0x488] = pbVar7[0x488];
		pbVar6[0x4b0] = pbVar7[0x4b0];
		pbVar6[0x4d8] = pbVar7[0x4d8];
		pbVar6[0x500] = pbVar7[0x500];
		pbVar6[0x528] = pbVar7[0x528];
		pbVar6[0x550] = pbVar7[0x550];
		pbVar6[0x578] = pbVar7[0x578];
		pbVar6[0x5a0] = pbVar7[0x5a0];
		pbVar6[0x5c8] = pbVar7[0x5c8];
		pbVar6[0x5f0] = pbVar7[0x5f0];
		pbVar6[0x618] = pbVar7[0x618];
		pbVar6[1] = pbVar7[1];
		pbVar6[0x29] = pbVar7[0x29];
		pbVar6[0x51] = pbVar7[0x51];
		pbVar6[0x79] = pbVar7[0x79];
		pbVar6[0xa1] = pbVar7[0xa1];
		pbVar6[0xc9] = pbVar7[0xc9];
		pbVar6[0xf1] = pbVar7[0xf1];
		pbVar6[0x119] = pbVar7[0x119];
		pbVar6[0x141] = pbVar7[0x141];
		pbVar6[0x169] = pbVar7[0x169];
		pbVar6[0x191] = pbVar7[0x191];
		pbVar6[0x1b9] = pbVar7[0x1b9];
		pbVar6[0x1e1] = pbVar7[0x1e1];
		pbVar6[0x209] = pbVar7[0x209];
		pbVar6[0x231] = pbVar7[0x231];
		pbVar6[0x259] = pbVar7[0x259];
		pbVar6[0x281] = pbVar7[0x281];
		pbVar6[0x2a9] = pbVar7[0x2a9];
		pbVar6[0x2d1] = pbVar7[0x2d1];
		pbVar6[0x2f9] = pbVar7[0x2f9];
		pbVar6[0x321] = pbVar7[0x321];
		pbVar6[0x349] = pbVar7[0x349];
		pbVar6[0x371] = pbVar7[0x371];
		pbVar6[0x399] = pbVar7[0x399];
		pbVar6[0x3c1] = pbVar7[0x3c1];
		pbVar6[0x3e9] = pbVar7[0x3e9];
		pbVar6[0x411] = pbVar7[0x411];
		pbVar6[0x439] = pbVar7[0x439];
		pbVar6[0x461] = pbVar7[0x461];
		pbVar6[0x489] = pbVar7[0x489];
		pbVar6[0x4b1] = pbVar7[0x4b1];
		pbVar6[0x4d9] = pbVar7[0x4d9];
		pbVar6[0x501] = pbVar7[0x501];
		pbVar6[0x529] = pbVar7[0x529];
		pbVar6[0x551] = pbVar7[0x551];
		pbVar6[0x579] = pbVar7[0x579];
		pbVar6[0x5a1] = pbVar7[0x5a1];
		pbVar6[0x5c9] = pbVar7[0x5c9];
		pbVar6[0x5f1] = pbVar7[0x5f1];
		pbVar1 = pbVar7 + 0x619;
		pbVar7 = pbVar7 + 2;
		pbVar6[0x619] = *pbVar1;
		pbVar6 = pbVar6 + 2;
		lVar8 = lVar8 + -1;
	} while (lVar8 != 0);
	DRLG_Init_Globals();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_L3Pass3(void)

{
	undefined *puVar1;
	short sVar2;
	int iVar3;
	char cVar4;
	undefined in_r4;
	byte *pbVar5;
	undefined in_r5;
	short sVar6;
	undefined in_r6;
	short sVar8;
	byte *pbVar7;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	short sVar12;
	int iVar9;
	int iVar10;
	int iVar11;
	undefined in_r10;
	int iVar13;
	int iVar14;
	longlong lVar15;
	undefined in_stack_ffffffbb;

	iVar3 = 0x100f8fd0;
	cVar4 = LockMemFile((ulonglong)_DAT_1013b350, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	iVar13 = (int)cVar4;
	sVar6 = CONCAT11(*(undefined *)(iVar13 + 0x39), *(undefined *)(iVar13 + 0x38)) + 1;
	sVar8 = CONCAT11(*(undefined *)(iVar13 + 0x3b), *(undefined *)(iVar13 + 0x3a)) + 1;
	sVar12 = CONCAT11(*(undefined *)(iVar13 + 0x3d), *(undefined *)(iVar13 + 0x3c)) + 1;
	iVar14 = 0;
	sVar2 = CONCAT11(*(undefined *)(iVar13 + 0x3f), *(undefined *)(iVar13 + 0x3e)) + 1;
	iVar13 = 0;
	do {
		lVar15 = 0xe;
		iVar9 = 0;
		do {
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar9) = sVar6;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar9 + 0xe0) = sVar8;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar9 + 2) = sVar12;
			iVar10 = iVar9 + 0x1c0;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar9 + 0xe2) = sVar2;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10) = sVar6;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10 + 0xe0) = sVar8;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10 + 2) = sVar12;
			iVar11 = iVar9 + 0x380;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10 + 0xe2) = sVar2;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar11) = sVar6;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar11 + 0xe0) = sVar8;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar11 + 2) = sVar12;
			iVar10 = iVar9 + 0x540;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar11 + 0xe2) = sVar2;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10) = sVar6;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10 + 0xe0) = sVar8;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10 + 2) = sVar12;
			iVar9 = iVar9 + 0x700;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar10 + 0xe2) = sVar2;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		iVar14 = iVar14 + 2;
		iVar13 = iVar13 + 4;
	} while (iVar14 < 0x70);
	pbVar7 = *(byte **)(iVar3 + -0x77cc);
	iVar3 = 0;
	iVar13 = 0x20;
	do {
		lVar15 = 0x28;
		iVar14 = 0xe00;
		pbVar5 = pbVar7;
		do {
			if ((longlong)((ulonglong)*pbVar5 - 1) < 0) {
				sVar2 = 0;
				sVar6 = 0;
				sVar12 = 0;
				sVar8 = 0;
			} else {
				puVar1 = (undefined *)((int)cVar4 + (int)((ulonglong)*pbVar5 - 1) * 8);
				sVar2 = CONCAT11(puVar1[1], *puVar1) + 1;
				sVar6 = CONCAT11(puVar1[3], puVar1[2]) + 1;
				sVar12 = CONCAT11(puVar1[5], puVar1[4]) + 1;
				sVar8 = CONCAT11(puVar1[7], puVar1[6]) + 1;
			}
			pbVar5 = pbVar5 + 0x28;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar14) = sVar2;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar14 + 0xe0) = sVar6;
			*(short *)(iVar13 + _DAT_1012f1d4 + iVar14 + 2) = sVar12;
			iVar9 = _DAT_1012f1d4 + iVar14;
			iVar14 = iVar14 + 0x1c0;
			*(short *)(iVar13 + iVar9 + 0xe2) = sVar8;
			lVar15 = lVar15 + -1;
		} while (lVar15 != 0);
		iVar3 = iVar3 + 1;
		pbVar7 = pbVar7 + 1;
		iVar13 = iVar13 + 4;
	} while (iVar3 < 0x28);
	UnlockMemFile((char)_DAT_1013b350);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CreateL3Dungeon(DWORD rseed, int entry)

{
	short sVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	int nYPos;
	int nXPos;
	int iVar4;
	int iVar5;

	nYPos = 0x100f8fd0;
	SetRndSeed(rseed);
	puVar2 = *(undefined4 **)(nYPos + -0x7534);
	**(undefined4 **)(nYPos + -30000) = 0x10;
	puVar3 = *(undefined4 **)(nYPos + -0x7538);
	*puVar2 = 0x10;
	puVar2 = *(undefined4 **)(nYPos + -0x753c);
	*puVar3 = 0x60;
	*puVar2 = 0x60;
	DRLG_InitTrans();
	DRLG_InitSetPC();
	DRLG_L3(entry);
	DRLG_L3Pass3();
	nYPos = 0;
	iVar4 = 0;
	do {
		nXPos = 0;
		iVar5 = 0;
		do {
			sVar1 = *(short *)(iVar4 + _DAT_1012f1d4 + iVar5);
			if ((sVar1 < 0x38) || (0x93 < sVar1)) {
				if ((sVar1 < 0x9a) || (0xa1 < sVar1)) {
					if (sVar1 == 0x96) {
						DoLighting(nXPos, nYPos, 7, -1);
					} else {
						if (sVar1 == 0x98) {
							DoLighting(nXPos, nYPos, 7, -1);
						}
					}
				} else {
					DoLighting(nXPos, nYPos, 7, -1);
				}
			} else {
				DoLighting(nXPos, nYPos, 7, -1);
			}
			nXPos = nXPos + 1;
			iVar5 = iVar5 + 0xe0;
		} while (nXPos < 0x70);
		nYPos = nYPos + 1;
		iVar4 = iVar4 + 2;
	} while (nYPos < 0x70);
	DRLG_SetPC();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void LoadL3Dungeon(char *sFileName, int vx, int vy)

{
	byte bVar1;
	byte bVar2;
	short sVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	int nYPos;
	char cVar7;
	char *pcVar6;
	undefined uVar9;
	char *pcVar8;
	undefined uVar10;
	undefined in_r6;
	char *pcVar11;
	undefined in_r7;
	int iVar12;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar13;
	undefined8 unaff_r27;
	int nXPos;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	int iVar14;
	undefined8 unaff_r31;
	ulonglong uVar15;
	int iStack0000001c;
	int iStack00000020;
	undefined in_stack_ffffffab;
	int *local_28[5];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	nYPos = 0x100f8fd0;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	iStack0000001c = vx;
	iStack00000020 = vy;
	InitL3Dungeon();
	uVar10 = 0x10;
	puVar4 = *(undefined4 **)(nYPos + -0x7534);
	**(undefined4 **)(nYPos + -30000) = 0x10;
	puVar5 = *(undefined4 **)(nYPos + -0x7538);
	*puVar4 = 0x10;
	puVar4 = *(undefined4 **)(nYPos + -0x753c);
	*puVar5 = 0x60;
	*puVar4 = 0x60;
	DRLG_InitTrans();
	uVar9 = 0;
	local_28[0] = (int *)LoadFileInMem(sFileName, (DWORD *)0x0);
	cVar7 = LockMemFile(ZEXT48(local_28[0]), uVar9, uVar10, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab);
	pcVar11 = *(char **)(nYPos + -0x77cc);
	lVar13 = (longlong)cVar7 + 4;
	bVar1 = *(byte *)(int)cVar7;
	iVar12 = 0;
	bVar2 = *(byte *)((int)cVar7 + 2);
	pcVar8 = pcVar11;
	while (iVar12 < (int)(uint)bVar2) {
		uVar15 = (ulonglong)bVar1;
		pcVar6 = pcVar8;
		if (bVar1 != 0) {
			do {
				if (*(char *)lVar13 == '\0') {
					*pcVar6 = '\a';
				} else {
					*pcVar6 = *(char *)lVar13;
				}
				lVar13 = lVar13 + 2;
				pcVar6 = pcVar6 + 0x28;
				uVar15 = uVar15 - 1;
			} while (uVar15 != 0);
		}
		pcVar8 = pcVar8 + 1;
		iVar12 = iVar12 + 1;
	}
	iVar12 = 0;
	do {
		lVar13 = 4;
		pcVar8 = pcVar11;
		do {
			if (*pcVar8 == '\0') {
				*pcVar8 = '\b';
			}
			if (pcVar8[0x28] == '\0') {
				pcVar8[0x28] = '\b';
			}
			if (pcVar8[0x50] == '\0') {
				pcVar8[0x50] = '\b';
			}
			if (pcVar8[0x78] == '\0') {
				pcVar8[0x78] = '\b';
			}
			if (pcVar8[0xa0] == '\0') {
				pcVar8[0xa0] = '\b';
			}
			if (pcVar8[200] == '\0') {
				pcVar8[200] = '\b';
			}
			if (pcVar8[0xf0] == '\0') {
				pcVar8[0xf0] = '\b';
			}
			if (pcVar8[0x118] == '\0') {
				pcVar8[0x118] = '\b';
			}
			if (pcVar8[0x140] == '\0') {
				pcVar8[0x140] = '\b';
			}
			if (pcVar8[0x168] == '\0') {
				pcVar8[0x168] = '\b';
			}
			pcVar8 = pcVar8 + 400;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
		iVar12 = iVar12 + 1;
		pcVar11 = pcVar11 + 1;
	} while (iVar12 < 0x28);
	*(undefined4 *)(nYPos + -0x4ef4) = 0x70;
	DRLG_L3Pass3();
	DRLG_Init_Globals();
	puVar4 = *(undefined4 **)(nYPos + -0x77b4);
	**(undefined4 **)(nYPos + -0x77b0) = 0x1f;
	*puVar4 = 0x53;
	SetMapMonsters((BYTE *)local_28[0], 0, 0);
	SetMapObjects((BYTE *)local_28[0], 0, 0);
	nYPos = 0;
	iVar12 = 0;
	do {
		nXPos = 0;
		iVar14 = 0;
		do {
			sVar3 = *(short *)(iVar12 + _DAT_1012f1d4 + iVar14);
			if ((sVar3 < 0x38) || (0x93 < sVar3)) {
				if ((sVar3 < 0x9a) || (0xa1 < sVar3)) {
					if (sVar3 == 0x96) {
						DoLighting(nXPos, nYPos, 7, -1);
					} else {
						if (sVar3 == 0x98) {
							DoLighting(nXPos, nYPos, 7, -1);
						}
					}
				} else {
					DoLighting(nXPos, nYPos, 7, -1);
				}
			} else {
				DoLighting(nXPos, nYPos, 7, -1);
			}
			nXPos = nXPos + 1;
			iVar14 = iVar14 + 0xe0;
		} while (nXPos < 0x70);
		nYPos = nYPos + 1;
		iVar12 = iVar12 + 2;
	} while (nYPos < 0x70);
	UnlockMemFile((char)local_28[0]);
	MemFreeDbg(local_28);
	return;
}

void LoadPreL3Dungeon(char *sFileName, int vx, int vy)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	char cVar5;
	byte *pbVar4;
	undefined uVar7;
	byte *pbVar6;
	undefined uVar9;
	byte *pbVar8;
	undefined in_r6;
	int iVar11;
	longlong lVar10;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	longlong lVar12;
	undefined in_r10;
	ulonglong uVar13;
	longlong lVar14;
	int iStack0000001c;
	int iStack00000020;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;
	int *local_18[6];

	uVar9 = (undefined)vy;
	iVar3 = 0x100f8fd0;
	pbVar8 = dungeon;
	iStack0000001c = vx;
	iStack00000020 = vy;
	InitL3Dungeon();
	DRLG_InitTrans();
	uVar7 = 0;
	local_18[0] = (int *)LoadFileInMem(sFileName, (DWORD *)0x0);
	cVar5 = LockMemFile(ZEXT48(local_18[0]), uVar7, uVar9, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	bVar1 = *(byte *)(int)cVar5;
	bVar2 = *(byte *)((int)cVar5 + 2);
	lVar12 = (longlong)cVar5 + 4;
	iVar11 = 0;
	pbVar6 = pbVar8;
	while (iVar11 < (int)(uint)bVar2) {
		uVar13 = (ulonglong)bVar1;
		pbVar4 = pbVar6;
		if (bVar1 != 0) {
			do {
				if (*(byte *)lVar12 == 0) {
					*pbVar4 = 7;
				} else {
					*pbVar4 = *(byte *)lVar12;
				}
				lVar12 = lVar12 + 2;
				pbVar4 = pbVar4 + 0x28;
				uVar13 = uVar13 - 1;
			} while (uVar13 != 0);
		}
		pbVar6 = pbVar6 + 1;
		iVar11 = iVar11 + 1;
	}
	lVar10 = 0;
	do {
		lVar14 = 4;
		cVar5 = '\0';
		pbVar6 = pbVar8;
		do {
			if (*pbVar6 == 0) {
				*pbVar6 = 8;
			}
			if (pbVar6[0x28] == 0) {
				pbVar6[0x28] = 8;
			}
			if (pbVar6[0x50] == 0) {
				pbVar6[0x50] = 8;
			}
			if (pbVar6[0x78] == 0) {
				pbVar6[0x78] = 8;
			}
			if (pbVar6[0xa0] == 0) {
				pbVar6[0xa0] = 8;
			}
			if (pbVar6[200] == 0) {
				pbVar6[200] = 8;
			}
			if (pbVar6[0xf0] == 0) {
				pbVar6[0xf0] = 8;
			}
			if (pbVar6[0x118] == 0) {
				pbVar6[0x118] = 8;
			}
			if (pbVar6[0x140] == 0) {
				pbVar6[0x140] = 8;
			}
			if (pbVar6[0x168] == 0) {
				pbVar6[0x168] = 8;
			}
			pbVar6 = pbVar6 + 400;
			cVar5 = cVar5 + '\t';
			lVar14 = lVar14 + -1;
		} while (lVar14 != 0);
		lVar10 = lVar10 + 1;
		pbVar8 = pbVar8 + 1;
	} while ((int)lVar10 < 0x28);
	CopyMemory((char)*(undefined4 *)(iVar3 + -0x7540), 0xf0, 0x40, (char)lVar10, cVar5, bVar2, (char)lVar12, in_r10,
	    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	UnlockMemFile((char)local_18[0]);
	MemFreeDbg(local_18);
	return;
}
