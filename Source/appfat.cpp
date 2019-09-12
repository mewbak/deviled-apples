
void va_start(void)

{
	return;
}

void TraceErrorDD(HRESULT hError, char *pszBuffer, DWORD dwMaxChars)

{
	char *_Source;
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
	undefined4 local_18;
	undefined4 local_14;
	undefined4 local_10;
	undefined4 local_c;
	undefined2 local_8;
	char local_6;

	if (hError == -0x7789fe98) {
		_Source = "DDERR_OUTOFCAPS";
	} else {
		if (hError < -0x7789fe98) {
			if (hError == -0x7789ff33) {
				_Source = "DDERR_NOCLIPLIST";
			} else {
				if (hError < -0x7789ff33) {
					if (hError == -0x7789ffa1) {
						_Source = "DDERR_INCOMPATIBLEPRIMARY";
					} else {
						if (hError < -0x7789ffa1) {
							if (hError == -0x7789fff6) {
								_Source = "DDERR_CANNOTATTACHSURFACE";
							} else {
								if (hError < -0x7789fff6) {
									if (hError == -0x7ff8fff2) {
										_Source = "DDERR_OUTOFMEMORY";
									} else {
										if (hError < -0x7ff8fff2) {
											if (hError == -0x7fffbffb) {
												_Source = "DDERR_GENERIC";
											} else {
												if ((-0x7fffbffc < hError) || (hError != -0x7fffbfff))
													goto LAB_10018c34;
												_Source = "DDERR_UNSUPPORTED";
											}
										} else {
											if (hError == -0x7789fffb) {
												_Source = "DDERR_ALREADYINITIALIZED";
											} else {
												if ((-0x7789fffc < hError) || (hError != -0x7ff8ffa9))
													goto LAB_10018c34;
												_Source = "DDERR_INVALIDPARAMS";
											}
										}
									}
								} else {
									if (hError == -0x7789ffc9) {
										_Source = "DDERR_EXCEPTION";
									} else {
										if (hError < -0x7789ffc9) {
											if (hError == -0x7789ffd8) {
												_Source = "DDERR_CURRENTLYNOTAVAIL";
											} else {
												if ((-0x7789ffd9 < hError) || (hError != -0x7789ffec))
													goto LAB_10018c34;
												_Source = "DDERR_CANNOTDETACHSURFACE";
											}
										} else {
											if (hError != -0x7789ffa6)
												goto LAB_10018c34;
											_Source = "DDERR_HEIGHTALIGN";
										}
									}
								}
							}
						} else {
							if (hError == -0x7789ff6f) {
								_Source = "DDERR_INVALIDPIXELFORMAT";
							} else {
								if (hError < -0x7789ff6f) {
									if (hError == -0x7789ff88) {
										_Source = "DDERR_INVALIDMODE";
									} else {
										if (hError < -0x7789ff88) {
											if (hError == -0x7789ff92) {
												_Source = "DDERR_INVALIDCLIPLIST";
											} else {
												if ((-0x7789ff93 < hError) || (hError != -0x7789ff9c))
													goto LAB_10018c34;
												_Source = "DDERR_INVALIDCAPS";
											}
										} else {
											if (hError != -0x7789ff7e)
												goto LAB_10018c34;
											_Source = "DDERR_INVALIDOBJECT";
										}
									}
								} else {
									if (hError == -0x7789ff56) {
										_Source = "DDERR_NO3D";
									} else {
										if (hError < -0x7789ff56) {
											if (hError == -0x7789ff60) {
												_Source = "DDERR_LOCKEDSURFACES";
											} else {
												if ((-0x7789ff61 < hError) || (hError != -0x7789ff6a))
													goto LAB_10018c34;
												_Source = "DDERR_INVALIDRECT";
											}
										} else {
											if (hError != -0x7789ff4c)
												goto LAB_10018c34;
											_Source = "DDERR_NOALPHAHW";
										}
									}
								}
							}
						}
					}
				} else {
					if (hError == -0x7789fefc) {
						_Source = "DDERR_NOOVERLAYHW";
					} else {
						if (hError < -0x7789fefc) {
							if (hError == -0x7789ff1f) {
								_Source = "DDERR_NOEXCLUSIVEMODE";
							} else {
								if (hError < -0x7789ff1f) {
									if (hError == -0x7789ff29) {
										_Source = "DDERR_NOCOLORKEY";
									} else {
										if (hError < -0x7789ff29) {
											if (hError == -0x7789ff2d) {
											LAB_10018c34:
												local_18 = s_DDERR_unknown_0x_x_100f6134._0_4_;
												local_14 = s_DDERR_unknown_0x_x_100f6134._4_4_;
												local_10 = s_DDERR_unknown_0x_x_100f6134._8_4_;
												local_c = s_DDERR_unknown_0x_x_100f6134._12_4_;
												local_8 = s_DDERR_unknown_0x_x_100f6134._16_2_;
												local_6 = s_DDERR_unknown_0x_x_100f6134[18];
												wsprintf((int)pszBuffer, &local_18, hError,
												    s_DDERR_unknown_0x_x_100f6134._8_4_, s_DDERR_unknown_0x_x_100f6134,
												    in_r8, in_r9, in_r10, in_stack_ffffffb8, in_stack_ffffffbf,
												    in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
												    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
												    in_stack_ffffffe4);
												return;
											}
											if (hError < -0x7789ff2d) {
												if (hError < -0x7789ff2e)
													goto LAB_10018c34;
												_Source = "DDERR_NOCOLORCONVHW";
											} else {
												if (-0x7789ff2c < hError)
													goto LAB_10018c34;
												_Source = "DDERR_NOCOOPERATIVELEVELSET";
											}
										} else {
											if (hError != -0x7789ff24)
												goto LAB_10018c34;
											_Source = "DDERR_NOCOLORKEYHW";
										}
									}
								} else {
									if (hError == -0x7789ff06) {
										_Source = "DDERR_NOMIRRORHW";
									} else {
										if (hError < -0x7789ff06) {
											if (hError == -0x7789ff10) {
												_Source = "DDERR_NOGDI";
											} else {
												if ((-0x7789ff11 < hError) || (hError != -0x7789ff1a))
													goto LAB_10018c34;
												_Source = "DDERR_NOFLIPHW";
											}
										} else {
											if (hError != -0x7789ff01)
												goto LAB_10018c34;
											_Source = "DDERR_NOTFOUND";
										}
									}
								}
							}
						} else {
							if (hError == -0x7789fec0) {
								_Source = "DDERR_NOT8BITCOLOR";
							} else {
								if (hError < -0x7789fec0) {
									if (hError == -0x7789feca) {
										_Source = "DDERR_NOSTRETCHHW";
									} else {
										if (hError < -0x7789feca) {
											if (hError == -0x7789fede) {
												_Source = "DDERR_NOROTATIONHW";
											} else {
												if ((-0x7789fedf < hError) || (hError != -0x7789fee8))
													goto LAB_10018c34;
												_Source = "DDERR_NORASTEROPHW";
											}
										} else {
											if (hError == -0x7789fec3) {
												_Source = "DDERR_NOT4BITCOLORINDEX";
											} else {
												if ((-0x7789fec4 < hError) || (hError < -0x7789fec4))
													goto LAB_10018c34;
												_Source = "DDERR_NOT4BITCOLOR";
											}
										}
									}
								} else {
									if (hError == -0x7789feac) {
										_Source = "DDERR_NOZBUFFERHW";
									} else {
										if (hError < -0x7789feac) {
											if (hError == -0x7789feb1) {
												_Source = "DDERR_NOVSYNCHW";
											} else {
												if ((-0x7789feb2 < hError) || (hError != -0x7789feb6))
													goto LAB_10018c34;
												_Source = "DDERR_NOTEXTUREHW";
											}
										} else {
											if (hError != -0x7789fea2)
												goto LAB_10018c34;
											_Source = "DDERR_NOZOVERLAYHW";
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			if (hError == -0x7789fdce) {
				_Source = "DDERR_DIRECTDRAWALREADYCREATED";
			} else {
				if (hError < -0x7789fdce) {
					if (hError == -0x7789fe3e) {
						_Source = "DDERR_SURFACELOST";
					} else {
						if (hError < -0x7789fe3e) {
							if (hError == -0x7789fe66) {
								_Source = "DDERR_SURFACEALREADYATTACHED";
							} else {
								if (hError < -0x7789fe66) {
									if (hError == -0x7789fe80) {
										_Source = "DDERR_OVERLAYCOLORKEYONLYONEACTIVE";
									} else {
										if (hError < -0x7789fe80) {
											if (hError == -0x7789fe83)
												goto LAB_10018c34;
											if (hError < -0x7789fe83) {
												if (hError < -0x7789fe84)
													goto LAB_10018c34;
												_Source = "DDERR_OUTOFVIDEOMEMORY";
											} else {
												if (-0x7789fe82 < hError)
													goto LAB_10018c34;
												_Source = "DDERR_OVERLAYCANTCLIP";
											}
										} else {
											if (hError == -0x7789fe70) {
												_Source = "DDERR_COLORKEYNOTSET";
											} else {
												if ((-0x7789fe71 < hError) || (hError != -0x7789fe7d))
													goto LAB_10018c34;
												_Source = "DDERR_PALETTEBUSY";
											}
										}
									}
								} else {
									if (hError == -0x7789fe4d) {
										_Source = "DDERR_CANTLOCKSURFACE";
									} else {
										if (hError < -0x7789fe4d) {
											if (hError == -0x7789fe52) {
												_Source = "DDERR_SURFACEBUSY";
											} else {
												if ((-0x7789fe53 < hError) || (hError != -0x7789fe5c))
													goto LAB_10018c34;
												_Source = "DDERR_SURFACEALREADYDEPENDENT";
											}
										} else {
											if (hError != -0x7789fe48)
												goto LAB_10018c34;
											_Source = "DDERR_SURFACEISOBSCURED";
										}
									}
								}
							}
						} else {
							if (hError == -0x7789fe02) {
								_Source = "DDERR_UNSUPPORTEDFORMAT";
							} else {
								if (hError < -0x7789fe02) {
									if (hError == -0x7789fe20) {
										_Source = "DDERR_TOOBIGSIZE";
									} else {
										if (hError < -0x7789fe20) {
											if (hError == -0x7789fe2a) {
												_Source = "DDERR_TOOBIGHEIGHT";
											} else {
												if ((-0x7789fe2b < hError) || (hError != -0x7789fe34))
													goto LAB_10018c34;
												_Source = "DDERR_SURFACENOTATTACHED";
											}
										} else {
											if (hError != -0x7789fe16)
												goto LAB_10018c34;
											_Source = "DDERR_TOOBIGWIDTH";
										}
									}
								} else {
									if (hError == -0x7789fde4) {
										_Source = "DDERR_WASSTILLDRAWING";
									} else {
										if (hError < -0x7789fde4) {
											if (hError == -0x7789fde7) {
												_Source = "DDERR_VERTICALBLANKINPROGRESS";
											} else {
												if ((-0x7789fde8 < hError) || (hError != -0x7789fdf8))
													goto LAB_10018c34;
												_Source = "DDERR_UNSUPPORTEDMASK";
											}
										} else {
											if (hError == -0x7789fdd0) {
												_Source = "DDERR_XALIGN";
											} else {
												if (hError < -0x7789fdd0)
													goto LAB_10018c34;
												_Source = "DDERR_INVALIDDIRECTDRAWGUID";
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (hError == -0x7789fdb9) {
						_Source = "DDERR_CANTDUPLICATE";
					} else {
						if (hError < -0x7789fdb9) {
							if (hError == -0x7789fdc3) {
								_Source = "DDERR_NOPALETTEHW";
							} else {
								if (hError < -0x7789fdc3) {
									if (hError == -0x7789fdc8) {
										_Source = "DDERR_NOCLIPPERATTACHED";
									} else {
										if (hError < -0x7789fdc8) {
											if (hError == -0x7789fdcb) {
												_Source = "DDERR_NOEMULATION";
											} else {
												if (hError < -0x7789fdcb) {
													if (hError < -0x7789fdcc) {
														_Source = "DDERR_NODIRECTDRAWHW";
													} else {
														_Source = "DDERR_PRIMARYSURFACEALREADYEXISTS";
													}
												} else {
													if (hError < -0x7789fdc9) {
														_Source = "DDERR_REGIONTOOSMALL";
													} else {
														_Source = "DDERR_CLIPPERISUSINGHWND";
													}
												}
											}
										} else {
											if (hError == -0x7789fdc5) {
												_Source = "DDERR_HWNDALREADYSET";
											} else {
												if (hError < -0x7789fdc5) {
													if (hError < -0x7789fdc6) {
														_Source = "DDERR_NOHWND";
													} else {
														_Source = "DDERR_HWNDSUBCLASSED";
													}
												} else {
													_Source = "DDERR_NOPALETTEATTACHED";
												}
											}
										}
									}
								} else {
									if (hError == -0x7789fdbe) {
										_Source = "DDERR_NOOVERLAYDEST";
									} else {
										if (hError < -0x7789fdbe) {
											if (hError == -0x7789fdc0) {
												_Source = "DDERR_NODDROPSHW";
											} else {
												if (hError < -0x7789fdc0) {
													if (hError < -0x7789fdc1) {
														_Source = "DDERR_BLTFASTCANTCLIP";
													} else {
														_Source = "DDERR_NOBLTHW";
													}
												} else {
													_Source = "DDERR_OVERLAYNOTVISIBLE";
												}
											}
										} else {
											if (hError == -0x7789fdbb) {
												_Source = "DDERR_EXCLUSIVEMODEALREADYSET";
											} else {
												if (hError < -0x7789fdbb) {
													if (hError < -0x7789fdbc) {
														_Source = "DDERR_INVALIDPOSITION";
													} else {
														_Source = "DDERR_NOTAOVERLAYSURFACE";
													}
												} else {
													_Source = "DDERR_NOTFLIPPABLE";
												}
											}
										}
									}
								}
							}
						} else {
							if (hError == -0x7789fd94) {
								_Source = "DDERR_DCALREADYCREATED";
							} else {
								if (hError < -0x7789fd94) {
									if (hError == -0x7789fdb3) {
										_Source = "DDERR_NOTPALETTIZED";
									} else {
										if (hError < -0x7789fdb3) {
											if (hError == -0x7789fdb6) {
												_Source = "DDERR_NODC";
											} else {
												if (hError < -0x7789fdb6) {
													if (hError < -0x7789fdb7) {
														_Source = "DDERR_NOTLOCKED";
													} else {
														_Source = "DDERR_CANTCREATEDC";
													}
												} else {
													if (hError < -0x7789fdb4) {
														_Source = "DDERR_WRONGMODE";
													} else {
														_Source = "DDERR_IMPLICITLYCREATED";
													}
												}
											}
										} else {
											if (hError == -0x7789fdb0) {
												_Source = "DDERR_INVALIDSURFACETYPE";
											} else {
												if ((-0x7789fdb1 < hError) || (hError < -0x7789fdb1))
													goto LAB_10018c34;
												_Source = "DDERR_NOMIPMAPHW";
											}
										}
									}
								} else {
									if (hError == -0x7789fd58) {
										_Source = "DDERR_NOTPAGELOCKED";
									} else {
										if (hError < -0x7789fd58) {
											if (hError == -0x7789fd6c) {
												_Source = "DDERR_CANTPAGEUNLOCK";
											} else {
												if ((-0x7789fd6d < hError) || (hError != -0x7789fd80))
													goto LAB_10018c34;
												_Source = "DDERR_CANTPAGELOCK";
											}
										} else {
											if (hError != 0)
												goto LAB_10018c34;
											_Source = "DD_OK";
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
	strncpy(pszBuffer, _Source, dwMaxChars);
	return;
}

void TraceErrorDS(HRESULT hError, char *pszBuffer, DWORD dwMaxChars)

{
	char *_Source;
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
	undefined4 local_18;
	undefined4 local_14;
	undefined4 local_10;
	undefined4 local_c;
	undefined2 local_8;
	char local_6;

	if (hError == -0x7787ffce) {
		_Source = "DSERR_INVALIDCALL";
	} else {
		if (hError < -0x7787ffce) {
			if (hError == -0x7ff8ffa9) {
				_Source = "DSERR_INVALIDPARAM";
			} else {
				if (hError < -0x7ff8ffa9) {
					if (hError == -0x7ffbfef0) {
						_Source = "DSERR_NOAGGREGATION";
					} else {
						if (hError < -0x7ffbfef0) {
							if (hError != -0x7fffbffe) {
							LAB_10018dec:
								local_18 = s_DSERR_unknown_0x_x_100f6147._0_4_;
								local_14 = s_DSERR_unknown_0x_x_100f6147._4_4_;
								local_10 = s_DSERR_unknown_0x_x_100f6147._8_4_;
								local_c = s_DSERR_unknown_0x_x_100f6147._12_4_;
								local_8 = s_DSERR_unknown_0x_x_100f6147._16_2_;
								local_6 = s_DSERR_unknown_0x_x_100f6147[18];
								wsprintf((int)pszBuffer, &local_18, hError, s_DSERR_unknown_0x_x_100f6147._8_4_,
								    s_DSERR_unknown_0x_x_100f6147, hError, in_r9, in_r10, in_stack_ffffffb8,
								    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
								    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
								return;
							}
							_Source = "E_NOINTERFACE";
						} else {
							if (hError != -0x7ff8fff2)
								goto LAB_10018dec;
							_Source = "DSERR_OUTOFMEMORY";
						}
					}
				} else {
					if (hError == -0x7787ffe2) {
						_Source = "DSERR_CONTROLUNAVAIL";
					} else {
						if ((-0x7787ffe3 < hError) || (hError != -0x7787fff6))
							goto LAB_10018dec;
						_Source = "DSERR_ALLOCATED";
					}
				}
			}
		} else {
			if (hError == -0x7787ff7e) {
				_Source = "DSERR_ALREADYINITIALIZED";
			} else {
				if (hError < -0x7787ff7e) {
					if (hError == -0x7787ff9c) {
						_Source = "DSERR_BADFORMAT";
					} else {
						if (hError < -0x7787ff9c) {
							if (hError != -0x7787ffba)
								goto LAB_10018dec;
							_Source = "DSERR_PRIOLEVELNEEDED";
						} else {
							if (hError != -0x7787ff88)
								goto LAB_10018dec;
							_Source = "DSERR_NODRIVER";
						}
					}
				} else {
					if (hError == 0) {
						_Source = "DS_OK";
					} else {
						if ((-1 < hError) || (hError != -0x7787ff6a))
							goto LAB_10018dec;
						_Source = "DSERR_BUFFERLOST";
					}
				}
			}
		}
	}
	strncpy(pszBuffer, _Source, dwMaxChars);
	return;
}

char *GetErrorStr(DWORD error_code)

{
	uint uVar1;
	BOOL BVar3;
	ulonglong uVar2;
	size_t sVar4;
	char *pcVar5;
	undefined4 uVar6;
	undefined *puVar7;
	undefined4 uVar8;
	undefined4 uVar9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar7 = &DAT_101272ea;
	uVar1 = error_code >> 0x10 & 0x1fff;
	if (uVar1 == 0x878) {
		TraceErrorDS(error_code, &DAT_101272ea, 0x100);
	} else {
		if (uVar1 == 0x876) {
			TraceErrorDD(error_code, &DAT_101272ea, 0x100);
		} else {
			BVar3 = SErrGetErrorStr(error_code, &DAT_101272ea, 0x100);
			if (BVar3 == 0) {
				uVar6 = 0x400;
				uVar8 = 0x100;
				uVar9 = 0;
				uVar2 = FormatMessage(0, 0, (char)error_code, 0, 0xea, 0, 0, (char)in_r10, (char)in_stack_ffffffc8,
				    in_stack_ffffffcf, local_2c);
				if ((uVar2 & 0xffffffff) == 0) {
					wsprintf((int)&DAT_101272ea, *(undefined4 *)(local_2c + -0x6770), error_code, uVar6, puVar7, uVar8,
					    uVar9, in_r10, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0,
					    in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
				}
			}
		}
	}
	sVar4 = strlen(&DAT_101272ea);
	pcVar5 = (char *)(sVar4 + 0x101272e9);
	if (0 < (int)sVar4) {
		do {
			pcVar5 = pcVar5 + -1;
			if ((*pcVar5 != '\r') && (*pcVar5 != '\n')) {
				return &DAT_101272ea;
			}
			*pcVar5 = '\0';
			sVar4 = sVar4 - 1;
		} while (sVar4 != 0);
	}
	return (char *)&DAT_101272ea;
}

char *TraceLastError(void)

{
	DWORD error_code;
	char *pcVar1;

	error_code = SErrGetLastError();
	pcVar1 = GetErrorStr(error_code);
	return pcVar1;
}

ulonglong MsgBox(char param_1,
    char param_2,
    undefined param_3,
    undefined param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;

	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	*(undefined4 *)(puVar1 + 0x38) = 1;
	_vsnprintf(&DAT_101271ea, 0x100, (int)param_1, (int)param_2, *puVar1);
	uRam101272e9 = 0;
	MessageBox(0xea, (char)(ZEXT48(register0x0000000c) - 0x50) + '8', param_1, param_2, param_5, param_6, param_7,
	    param_8, *(undefined4 *)(puVar1 + 8));
	return (ulonglong) * (uint *)(puVar1 + 0x38);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FreeDlg(void)

{
	int iVar1;
	DWORD DVar2;
	BOOL BVar3;
	int local_2c;

	if (DAT_100f3fc8 == '\0') {
		_DAT_100f3fcc = 0;
		DAT_100f3fc8 = '\x01';
	}
	if (_DAT_100f3fcc == 0) {
		_DAT_100f3fcc = 1;
		if (DAT_100f3fc0 == '\0') {
			DAT_100f3fc0 = '\x01';
			_DAT_100f3fc4 = 0;
		}
		if (DAT_100f3fb8 == '\0') {
			_DAT_100f3fbc = 0;
			DAT_100f3fb8 = '\x01';
		}
		iVar1 = 0x100f8fd0;
		if (_DAT_100f3fc4 != 0) {
			DVar2 = GetCurrentThreadId();
			iVar1 = local_2c;
			if (*(DWORD *)(local_2c + -0x5014) != DVar2) {
				Sleep(20000);
				iVar1 = local_2c;
			}
		}
		*(undefined4 *)(iVar1 + -0x500c) = 1;
		DVar2 = GetCurrentThreadId();
		*(DWORD *)(local_2c + -0x5014) = DVar2;
		dx_cleanup();
		if ((1 < **(byte **)(local_2c + -0x77f0)) && (BVar3 = SNetLeaveGame(3), BVar3 != 0)) {
			Sleep(2000);
		}
		SNetDestroy();
		ShowCursor(1);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void app_fatal(char *pszFmt, ...)

{
	undefined8 in_r4;
	undefined uVar1;
	undefined4 in_r5;
	undefined uVar2;
	undefined4 in_r6;
	undefined uVar3;
	undefined4 in_r7;
	undefined uVar4;
	undefined4 in_r8;
	undefined uVar5;
	undefined4 in_r9;
	undefined uVar6;
	undefined4 in_r10;
	undefined uVar7;
	char *pcStack00000018;
	undefined4 uStack0000001c;
	undefined4 uStack00000020;
	undefined4 uStack00000024;
	undefined4 uStack00000028;
	undefined4 uStack0000002c;
	undefined4 uStack00000030;
	undefined4 uStack00000034;
	undefined4 in_stack_ffffffc8;

	uVar7 = (undefined)in_r10;
	uVar6 = (undefined)in_r9;
	uVar5 = (undefined)in_r8;
	uVar4 = (undefined)in_r7;
	uVar3 = (undefined)in_r6;
	uVar2 = (undefined)in_r5;
	uVar1 = (undefined)in_r4;
	uStack0000001c = (undefined4)in_r4;
	if (DAT_100f3fb0 == '\0') {
		_DAT_100f3fb4 = 0;
		DAT_100f3fb0 = '\x01';
	}
	if (_DAT_100f3fb4 == 0) {
		_DAT_100f3fb4 = 1;
		pcStack00000018 = pszFmt;
		uStack00000020 = in_r5;
		uStack00000024 = in_r6;
		uStack00000028 = in_r7;
		uStack0000002c = in_r8;
		uStack00000030 = in_r9;
		uStack00000034 = in_r10;
		FreeDlg();
		va_start();
		if (pcStack00000018 != (char *)0x0) {
			uVar1 = 0x1c;
			MsgBox((char)pcStack00000018, 0x1c, uVar2, uVar3, uVar4, uVar5, uVar6, uVar7, in_stack_ffffffc8);
		}
		FUN_10017560();
		init_cleanup(0);
		FUN_1001756c(1, uVar1, uVar2, uVar3, uVar4, uVar5, uVar6, uVar7, in_stack_ffffffc8);
	}
	return;
}

void DrawDlg(char *pszFmt, ...)

{
	int iVar1;
	char cVar2;
	int iVar3;
	undefined4 in_r4;
	undefined4 in_r5;
	undefined4 in_r6;
	undefined uVar4;
	undefined4 in_r7;
	undefined uVar5;
	undefined4 in_r8;
	undefined uVar6;
	undefined4 in_r9;
	undefined uVar7;
	undefined4 in_r10;
	undefined uVar8;

	uVar8 = (undefined)in_r10;
	uVar7 = (undefined)in_r9;
	uVar6 = (undefined)in_r8;
	uVar5 = (undefined)in_r7;
	uVar4 = (undefined)in_r6;
	iVar3 = 0x100f8fd0;
	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x140);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	*(undefined4 *)(iVar1 + 0x15c) = in_r4;
	*(undefined4 *)(iVar1 + 0x160) = in_r5;
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0x140);
	*(undefined4 *)(iVar1 + 0x164) = in_r6;
	*(undefined4 *)(iVar1 + 0x168) = in_r7;
	*(undefined4 *)(iVar1 + 0x16c) = in_r8;
	*(undefined4 *)(iVar1 + 0x170) = in_r9;
	*(undefined4 *)(iVar1 + 0x174) = in_r10;
	*(char **)(iVar1 + 0x158) = pszFmt;
	FUN_100d58d8(iVar1 + 0x38, (char)*(undefined4 *)(iVar1 + 0x158), cVar2 + '\\', uVar4, uVar5, uVar6, uVar7, uVar8,
	    *(undefined4 *)(iVar1 + 8));
	SDrawMessageBox(cVar2 + '8', (char)*(undefined4 *)(iVar3 + -0x6778), 0x30, uVar4, uVar5, uVar6, uVar7, uVar8,
	    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf), *(undefined4 *)(iVar1 + 0x14));
	return;
}

void DSErrMsg(DWORD error_code, int log_line_nr, char *log_file_path)

{
	int iVar1;
	char *pcVar2;

	iVar1 = 0x100f8fd0;
	if (error_code != 0) {
		pcVar2 = GetErrorStr(error_code);
		app_fatal(*(char **)(iVar1 + -0x677c), log_file_path, log_line_nr, pcVar2);
	}
	return;
}

void ErrDlg(int template_id, DWORD error_code, char *log_file_path, int log_line_nr)

{
	undefined *puVar1;
	char *pcVar2;
	int iVar3;
	undefined uVar4;
	undefined uVar5;
	undefined4 in_r8;
	undefined uVar6;
	undefined4 in_r9;
	undefined uVar7;
	undefined4 in_r10;
	undefined uVar8;

	iVar3 = 0x100f8fd0;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x450);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	*(int *)(puVar1 + 0x468) = template_id;
	FreeDlg(*puVar1);
	pcVar2 = strrchr(log_file_path, 0x5c, *puVar1);
	if (pcVar2 != (char *)0x0) {
		log_file_path = pcVar2 + 1;
	}
	pcVar2 = GetErrorStr(error_code, *puVar1);
	wsprintf((int)(puVar1 + 0x238), *(undefined4 *)(iVar3 + -0x6780), pcVar2, log_file_path, log_line_nr, in_r8, in_r9,
	    in_r10, *(undefined4 *)(puVar1 + 8), puVar1[0xf], *(undefined4 *)(puVar1 + 0x1c), *(undefined4 *)(puVar1 + 0x20),
	    *(undefined4 *)(puVar1 + 0x24), *(undefined4 *)(puVar1 + 0x28), *(undefined4 *)(puVar1 + 0x2c),
	    *(undefined4 *)(puVar1 + 0x30), *(undefined4 *)(puVar1 + 0x34));
	uVar8 = (undefined)in_r10;
	uVar7 = (undefined)in_r9;
	uVar6 = (undefined)in_r8;
	uVar5 = (undefined)log_line_nr;
	uVar4 = SUB41(log_file_path, 0);
	wsprintf((int)(puVar1 + 0x38), *(undefined4 *)(iVar3 + -0x6784), puVar1 + 0x238, log_file_path, log_line_nr, in_r8,
	    in_r9, in_r10, *(undefined4 *)(puVar1 + 8), puVar1[0xf], *(undefined4 *)(puVar1 + 0x1c),
	    *(undefined4 *)(puVar1 + 0x20), *(undefined4 *)(puVar1 + 0x24), *(undefined4 *)(puVar1 + 0x28),
	    *(undefined4 *)(puVar1 + 0x2c), *(undefined4 *)(puVar1 + 0x30), *(undefined4 *)(puVar1 + 0x34));
	iVar3 = SDrawMessageBox((char)(ZEXT48(register0x0000000c) - 0x450) + '8', (char)*(undefined4 *)(iVar3 + -0x6788),
	    0x10, uVar4, uVar5, uVar6, uVar7, uVar8, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	if (iVar3 == -1) {
		app_fatal(*(char **)(*(int *)(puVar1 + 0x14) + -0x678c));
	}
	app_fatal((char *)0x0);
	return;
}

void FileErrDlg(char *error)

{
	undefined *puVar1;
	int iVar2;
	undefined4 in_r6;
	undefined uVar3;
	undefined4 in_r7;
	undefined uVar4;
	undefined4 in_r8;
	undefined uVar5;
	undefined4 in_r9;
	undefined uVar6;
	undefined4 in_r10;
	undefined uVar7;

	iVar2 = 0x100f8fd0;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x240);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	FreeDlg(*puVar1);
	uVar7 = (undefined)in_r10;
	uVar6 = (undefined)in_r9;
	uVar5 = (undefined)in_r8;
	uVar4 = (undefined)in_r7;
	uVar3 = (undefined)in_r6;
	if (error == (char *)0x0) {
		error = *(char **)(iVar2 + -0x6790);
	}
	wsprintf((int)(puVar1 + 0x38), *(undefined4 *)(iVar2 + -0x6794), error, in_r6, in_r7, in_r8, in_r9, in_r10,
	    *(undefined4 *)(puVar1 + 8), puVar1[0xf], *(undefined4 *)(puVar1 + 0x1c), *(undefined4 *)(puVar1 + 0x20),
	    *(undefined4 *)(puVar1 + 0x24), *(undefined4 *)(puVar1 + 0x28), *(undefined4 *)(puVar1 + 0x2c),
	    *(undefined4 *)(puVar1 + 0x30), *(undefined4 *)(puVar1 + 0x34));
	iVar2 = SDrawMessageBox((char)(ZEXT48(register0x0000000c) - 0x240) + '8', (char)*(undefined4 *)(iVar2 + -0x6798),
	    0x10, uVar3, uVar4, uVar5, uVar6, uVar7, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	if (iVar2 == -1) {
		app_fatal(*(char **)(*(int *)(puVar1 + 0x14) + -0x679c));
	}
	app_fatal((char *)0x0);
	return;
}

void DiskFreeDlg(char *error)

{
	undefined *puVar1;
	int iVar2;
	undefined4 in_r6;
	undefined uVar3;
	undefined4 in_r7;
	undefined uVar4;
	undefined4 in_r8;
	undefined uVar5;
	undefined4 in_r9;
	undefined uVar6;
	undefined4 in_r10;
	undefined uVar7;

	iVar2 = 0x100f8fd0;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x240);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	FreeDlg(*puVar1);
	uVar7 = (undefined)in_r10;
	uVar6 = (undefined)in_r9;
	uVar5 = (undefined)in_r8;
	uVar4 = (undefined)in_r7;
	uVar3 = (undefined)in_r6;
	wsprintf((int)(puVar1 + 0x38), *(undefined4 *)(iVar2 + -0x67a0), error, in_r6, in_r7, in_r8, in_r9, in_r10,
	    *(undefined4 *)(puVar1 + 8), puVar1[0xf], *(undefined4 *)(puVar1 + 0x1c), *(undefined4 *)(puVar1 + 0x20),
	    *(undefined4 *)(puVar1 + 0x24), *(undefined4 *)(puVar1 + 0x28), *(undefined4 *)(puVar1 + 0x2c),
	    *(undefined4 *)(puVar1 + 0x30), *(undefined4 *)(puVar1 + 0x34));
	iVar2 = SDrawMessageBox((char)(ZEXT48(register0x0000000c) - 0x240) + '8', (char)*(undefined4 *)(iVar2 + -0x67a4),
	    0x10, uVar3, uVar4, uVar5, uVar6, uVar7, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	if (iVar2 == -1) {
		app_fatal(*(char **)(*(int *)(puVar1 + 0x14) + -0x67a8));
	}
	app_fatal((char *)0x0);
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

BOOL InsertCDDlg(void)

{
	undefined8 uVar1;
	int iVar2;
	undefined uVar3;
	undefined in_r4;
	undefined uVar4;
	undefined in_r5;
	undefined uVar5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	int local_2c;

	iVar2 = ShowCursor(1);
	EnterNiceEventProcessing(
	    (char)iVar2, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	uVar5 = 0x41;
	uVar4 = (undefined) * (undefined4 *)(local_2c + -0x6798);
	iVar2 = SDrawMessageBox((char)*(undefined4 *)(local_2c + -0x67ac), uVar4, 0x41, in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	uVar3 = (undefined)iVar2;
	if (iVar2 == -1) {
		uVar3 = SUB41(*(char **)(local_2c + -0x67a8), 0);
		app_fatal(*(char **)(local_2c + -0x67a8));
	}
	LeaveNiceEventProcessing(
	    uVar3, uVar4, uVar5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffcb, in_stack_ffffffcf, local_2c);
	ShowCursor(0);
	uVar1 = countLeadingZeros(1 - iVar2);
	return (BOOL)((uint)uVar1 >> 5 & 0xff);
}