
void WGetFileArchive(ulong hsFile, DWORD *retry, char *FileName)

{
	BOOL BVar1;
	int local_3c;
	ulong local_18[6];

	if (4 < *retry) {
		FileErrDlg(FileName);
	}
	if (((hsFile != 0) && (BVar1 = SFileGetFileArchive(hsFile, local_18), BVar1 != 0)) && (local_18[0] != **(ulong **)(local_3c + -0x7204))) {
		Sleep(0x14);
		*retry = *retry + 1;
		return;
	}
	BVar1 = InsertCDDlg();
	if (BVar1 == 0) {
		FileErrDlg(FileName);
	}
	return;
}

BOOL WCloseFile(ulong file)

{
	BOOL BVar1;

	BVar1 = SFileCloseFile(file);
	return BVar1;
}

LONG WGetFileSize(ulong hsFile, DWORD *lpFileSizeHigh)

{
	LONG LVar1;
	DWORD local_18[6];

	local_18[0] = 0;
	while (LVar1 = SFileGetFileSize(hsFile, lpFileSizeHigh), LVar1 == 0) {
		WGetFileArchive(hsFile, local_18, (char *)0x0);
	}
	return LVar1;
}

BOOL WOpenFile(char *FileName, ulong *phsFile, BOOL mayNotExist)

{
	BOOL BVar1;
	DWORD DVar2;
	DWORD local_18[6];

	local_18[0] = 0;
	while (true) {
		BVar1 = SFileOpenFile(FileName, phsFile);
		if (BVar1 != 0) {
			return 1;
		}
		if ((mayNotExist != 0) && (DVar2 = SErrGetLastError(), DVar2 == 2))
			break;
		WGetFileArchive(0, local_18, FileName);
	}
	return 0;
}

void WReadFile(ulong hsFile, LPVOID buf, DWORD to_read)

{
	int offset;
	BOOL BVar1;
	DWORD local_18;
	DWORD aDStack20[5];

	local_18 = 0;
	offset = WSetFilePointer(hsFile, 0, 0, 1);
	while (BVar1 = SFileReadFile(hsFile, buf, to_read, aDStack20, (LONG *)0x0), BVar1 == 0) {
		WGetFileArchive(hsFile, &local_18, (char *)0x0);
		WSetFilePointer(hsFile, offset, 0, 0);
	}
	return;
}

int WSetFilePointer(ulong file1, int offset, ulong file2, int whence)

{
	int iVar1;
	DWORD local_18[6];

	local_18[0] = 0;
	while (iVar1 = SFileSetFilePointer(file1, offset, file2, whence), iVar1 == -1) {
		WGetFileArchive(file1, local_18, (char *)0x0);
	}
	return iVar1;
}

void FillMemFile(MEMFILE *pMemFile)

{
	uint to_read;

	WSetFilePointer(pMemFile->file, pMemFile->offset, 0, 0);
	to_read = pMemFile->end - pMemFile->offset;
	if (pMemFile->buf_len < to_read) {
		to_read = pMemFile->buf_len;
	}
	if (to_read != 0) {
		WReadFile(pMemFile->file, pMemFile->buf, to_read);
	}
	pMemFile->bytes_to_read = to_read;
	pMemFile->dist = 0;
	return;
}

void *AllocateMemFile(ulong hsFile, MEMFILE *pMemFile, DWORD dwPos)

{
	uint uVar1;
	DWORD DVar2;
	BYTE *pBVar3;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	ZeroMemory((char)pMemFile, 0x1c, (char)dwPos, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb,
	    in_stack_ffffffbf, local_3c);
	DVar2 = WGetFileSize(hsFile, (DWORD *)0x0);
	pMemFile->end = DVar2;
	if (dwPos < 0x1001) {
		dwPos = 0x1000;
	}
	pMemFile->buf_len = dwPos;
	uVar1 = pMemFile->end;
	if (pMemFile->buf_len < uVar1) {
		uVar1 = pMemFile->buf_len;
	}
	pMemFile->buf_len = uVar1;
	pBVar3 = DiabloAllocPtr(pMemFile->buf_len);
	pMemFile->buf = pBVar3;
	pMemFile->file = hsFile;
	return (void *)pBVar3;
}

void FreeMemFile(MEMFILE *pMemFile)

{
	BYTE *p;

	p = pMemFile->buf;
	pMemFile->buf = (BYTE *)0x0;
	mem_free_dbg(p);
	return;
}

BOOL ReadMemFile(MEMFILE *pMemFile, void *lpBuf, int length)

{
	int iVar1;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	ulonglong uVar2;
	ulonglong uVar3;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	uVar2 = SEXT48(length);
	while (true) {
		if ((uVar2 & 0xffffffff) == 0) {
			return 1;
		}
		if (pMemFile->bytes_to_read == 0) {
			FillMemFile(pMemFile);
		}
		uVar3 = (ulonglong)pMemFile->bytes_to_read;
		if ((uVar2 & 0xffffffff) < (ulonglong)pMemFile->bytes_to_read) {
			uVar3 = uVar2;
		}
		if ((uVar3 & 0xffffffff) == 0)
			break;
		CopyMemory((char)lpBuf, (char)pMemFile->buf + (char)pMemFile->dist, (char)uVar3, in_r6, in_r7, in_r8, in_r9,
		    in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
		uVar2 = uVar2 - uVar3;
		iVar1 = (int)uVar3;
		pMemFile->offset = pMemFile->offset + iVar1;
		pMemFile->dist = pMemFile->dist + iVar1;
		pMemFile->bytes_to_read = pMemFile->bytes_to_read - iVar1;
	}
	return 0;
}

int SeekMemFile(MEMFILE *pMemFile, ULONG lDist, DWORD dwMethod)

{
	if (lDist < pMemFile->bytes_to_read) {
		pMemFile->bytes_to_read = pMemFile->bytes_to_read - lDist;
		pMemFile->dist = pMemFile->dist + lDist;
	} else {
		pMemFile->bytes_to_read = 0;
	}
	pMemFile->offset = pMemFile->offset + lDist;
	return (int)pMemFile->offset;
}

BOOL ReadWaveSection(MEMFILE *pMemFile, DWORD id, CKINFO *chunk)

{
	BOOL BVar2;
	int iVar3;
	DWORD DVar4;
	longlong lVar1;
	DWORD local_18;
	uint local_14;

	while (true) {
		BVar2 = ReadMemFile(pMemFile, &local_18, 8);
		if (BVar2 == 0) {
			return 0;
		}
		local_14 = local_14 << 0x18 | (local_14 >> 8 & 0xff) << 0x10 | (local_14 >> 0x10 & 0xff) << 8 | local_14 >> 0x18;
		if (local_18 == id)
			break;
		iVar3 = SeekMemFile(pMemFile, local_14, 1);
		if (iVar3 == -1) {
			return 0;
		}
	}
	chunk->dwSize = local_14;
	DVar4 = SeekMemFile(pMemFile, 0, 1);
	chunk->dwOffset = DVar4;
	lVar1 = -(ulonglong)chunk->dwOffset + -1;
	return (int)lVar1 - ((uint)(lVar1 == 0) + (int)-(ulonglong)chunk->dwOffset + -2) & 0xff;
}

// WARNING: Could not reconcile some variable overlaps

BOOL ReadWaveFile(MEMFILE *pMemFile, WAVEFORMATEX *pwfx, CKINFO *chunk)

{
	BOOL BVar1;
	int iVar2;
	undefined2 local_48;
	undefined2 local_46;
	uint local_44;
	uint local_40;
	undefined2 local_3c;
	undefined2 local_3a;
	int local_38[2];
	int local_30;
	CKINFO local_24[4];

	BVar1 = ReadMemFile(pMemFile, local_38, 0xc);
	if (BVar1 == 0) {
		BVar1 = 0;
	} else {
		if ((local_38[0] == 0x52494646) && (local_30 == 0x57415645)) {
			BVar1 = ReadWaveSection(pMemFile, 0x666d7420, local_24);
			if (BVar1 == 0) {
				BVar1 = 0;
			} else {
				if (local_24[0].dwSize < 0x10) {
					BVar1 = 0;
				} else {
					BVar1 = ReadMemFile(pMemFile, &local_48, 0x10);
					if (BVar1 == 0) {
						BVar1 = 0;
					} else {
						local_48 = CONCAT11((undefined)local_48, local_48._0_1_);
						local_46 = CONCAT11((undefined)local_46, local_46._0_1_);
						local_44 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 | local_44 >> 0x18;
						local_40 = local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8 | local_40 >> 0x18;
						local_3c = CONCAT11((undefined)local_3c, local_3c._0_1_);
						local_3a = CONCAT11((undefined)local_3a, local_3a._0_1_);
						iVar2 = SeekMemFile(pMemFile, local_24[0].dwSize - 0x10, 1);
						if (iVar2 == -1) {
							BVar1 = 0;
						} else {
							*(undefined2 *)pwfx = local_48;
							*(undefined2 *)(pwfx + 2) = local_46;
							*(uint *)(pwfx + 4) = local_44;
							*(uint *)(pwfx + 8) = local_40;
							*(undefined2 *)(pwfx + 0xc) = local_3c;
							*(undefined2 *)(pwfx + 0xe) = local_3a;
							*(undefined2 *)(pwfx + 0x10) = 0;
							if (chunk == (CKINFO *)0x0) {
								BVar1 = 1;
							} else {
								BVar1 = ReadWaveSection(pMemFile, 0x64617461, chunk);
							}
						}
					}
				}
			}
		} else {
			BVar1 = 0;
		}
	}
	return BVar1;
}

BOOL LoadWaveFormat(ulong hsFile, WAVEFORMATEX *pwfx)

{
	BOOL BVar1;
	MEMFILE MStack40;

	AllocateMemFile(hsFile, &MStack40, 0);
	BVar1 = ReadWaveFile(&MStack40, pwfx, (CKINFO *)0x0);
	FreeMemFile(&MStack40);
	return BVar1;
}

BYTE *LoadWaveFile(ulong hsFile, WAVEFORMATEX *pwfx, CKINFO *chunk)

{
	BOOL BVar1;
	MEMFILE MStack40;

	AllocateMemFile(hsFile, &MStack40, 0xffffffff);
	BVar1 = ReadWaveFile(&MStack40, pwfx, chunk);
	if (BVar1 == 0) {
		FreeMemFile(&MStack40);
		MStack40.buf = (BYTE *)0x0;
	}
	return MStack40.buf;
}

void thunk_mem_free_dbg(void *param_1)

{
	mem_free_dbg(param_1);
	return;
}