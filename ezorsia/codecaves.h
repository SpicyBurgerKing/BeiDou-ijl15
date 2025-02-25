#pragma once
int nStatusBarY = 0;
__declspec(naked) void AdjustStatusBar() {
	__asm {
		push nStatusBarY
		push ebx // horizontal position; 0
		mov ecx, esi
		jmp dword ptr[dwStatusBarPosRetn]
	}
}

__declspec(naked) void AdjustStatusBarBG() {
	__asm {
		push nStatusBarY
		movsd
		push 0
		jmp dword ptr[dwStatusBarBackgroundPosRetn]
	}
}

__declspec(naked) void AdjustStatusBarInput() {
	__asm {
		push nStatusBarY
		push edi
		lea ecx, [esi + 0x0CD0]
		jmp dword ptr[dwStatusBarInputPosRetn]
	}
}

__declspec(naked) void PositionLoginDlg() {
	__asm {
		push 0x000000B4
		push 400
		push - 48	// y
		push - 185	// x
		jmp dword ptr[dwLoginCreateDlgRtn]
	}
}
__declspec(naked) void PositionLoginUsername() {
	__asm {
		push 0x0F
		push 0x00000084
		push 127	// y
		push 0		// x
		jmp dword ptr[dwLoginUsernameRtn]
	}
}
__declspec(naked) void PositionLoginPassword() {
	__asm {
		push 0x0F
		push 0x78
		push 127	// y
		push 272	// x
		jmp dword ptr[dwLoginPasswordRtn]
	}
}
__declspec(naked) void PositionBossBarY() {
	__asm {	//finally working!, originally posted by Angxl
		//push 22	//modification
		push edi	//part of original memory
		push dword ptr ss : [ebp - 68]	//part of original memory
		lea eax, dword ptr ss : [ebp - 32]	//part of original memory
		jmp dword ptr[dwBossBarRetn]
	}
}
__declspec(naked) void PositionBossBarY1() {
	__asm {	//finally working!, originally posted by Angxl
		push 22	//modification
		//push edi	//part of original memory
		push dword ptr ss : [ebp - 68]	//part of original memory
		lea eax, dword ptr ss : [ebp - 32]	//part of original memory
		jmp dword ptr[dwBossBarRetn]
	}
}

int serverMessageExists;
__declspec(naked) void PositionBossBarY2() {
	__asm {
		mov esi, eax
		and dword ptr ss : [ebp - 4] , 0
		mov serverMessageExists, esi
		jmp dword ptr[dwBossBarRetn2]
	}
}

int myHeight = -(Client::m_nGameHeight - 600) / 2;
int myWidth = -(Client::m_nGameWidth - 800) / 2;

__declspec(naked) void CashShopFix() {
	__asm {
		push    eax //vCanvas //originally posted by shavitash		//fixed
		push    ebx //nZ
		push    ebx //uHeight
		push    ebx //uWidth
		push	myHeight//84//myHeight //nTop - do the math yourself, this wont compile obviously
		push	myWidth//283//myWidth //nLeft - same as above
		jmp dword ptr[dwCashFixRtm]
	}
}

int nHeightOfsetted1 = 0; int nWidthOfsetted1 = 0; int nTopOfsetted1 = 0; int nLeftOfsetted1 = 0;
int nHeightOfsetted2 = 0; int nWidthOfsetted2 = 0; int nTopOfsetted2 = 0; int nLeftOfsetted2 = 0;
int nHeightOfsetted3 = 0; int nWidthOfsetted3 = 0; int nTopOfsetted3 = 0; int nLeftOfsetted3 = 0;
int nHeightOfsetted4 = 0; int nWidthOfsetted4 = 0; int nTopOfsetted4 = 0; int nLeftOfsetted4 = 0;
int nHeightOfsetted5 = 0; int nWidthOfsetted5 = 0; int nTopOfsetted5 = 0; int nLeftOfsetted5 = 0;
int nHeightOfsetted6 = 0; int nWidthOfsetted6 = 0; int nTopOfsetted6 = 0;
int nHeightOfsetted7 = 0; int nWidthOfsetted7 = 0; int nTopOfsetted7 = 0; int nLeftOfsetted7 = 0;
int nHeightOfsetted8 = 0; int nWidthOfsetted8 = 0; int nTopOfsetted8 = 0; int nLeftOfsetted8 = 0;

__declspec(naked) void CashShopFix1() {
	__asm {
		push	nHeightOfsetted1
		push	nWidthOfsetted1
		push	nTopOfsetted1
		push	nLeftOfsetted1
		jmp dword ptr[dwCashFix1Rtm]
	}
}

__declspec(naked) void CashShopFix2() {
	__asm {
		push	nHeightOfsetted2
		push	nWidthOfsetted2
		push	nTopOfsetted2
		push	nLeftOfsetted2
		jmp dword ptr[dwCashFix2Rtm]
	}
}

__declspec(naked) void CashShopFix3() {
	__asm {
		push	nHeightOfsetted3
		push	nWidthOfsetted3
		push	nTopOfsetted3
		push	nLeftOfsetted3
		jmp dword ptr[dwCashFix3Rtm]
	}
}

__declspec(naked) void CashShopFix4() {
	__asm {
		push	nHeightOfsetted4
		push	nWidthOfsetted4
		push	nTopOfsetted4
		push	nLeftOfsetted4
		jmp dword ptr[dwCashFix4Rtm]
	}
}

__declspec(naked) void CashShopFix5() {
	__asm {
		push	nHeightOfsetted5
		push	nWidthOfsetted5
		push	nTopOfsetted5
		push	nLeftOfsetted5
		jmp dword ptr[dwCashFix5Rtm]
	}
}

__declspec(naked) void CashShopFix6() {
	__asm {
		push	nHeightOfsetted6
		push	nWidthOfsetted6
		push	nTopOfsetted6
		jmp dword ptr[dwCashFix6Rtm]
	}
}

__declspec(naked) void CashShopFix7() {
	__asm {
		push	nHeightOfsetted7
		push	nWidthOfsetted7
		push	nTopOfsetted7
		push	nLeftOfsetted7
		jmp dword ptr[dwCashFix7Rtm]
	}
}

__declspec(naked) void CashShopFix8() {
	__asm {
		push	nHeightOfsetted8
		push	nWidthOfsetted8
		push	nTopOfsetted8
		push	nLeftOfsetted8
		jmp dword ptr[dwCashFix8Rtm]
	}
}

__declspec(naked) void CashShopFixOnOff() {	//could be improved upon because idk if it's the right way to do it or if it might cause issues
	__asm {
		pop	ebx
		push ecx
		mov ecx, dword ptr[dwCashFixOnOffCall]
		call ecx
		add esp, 4
		leave
		retn    4
	}
}

int nHeightOfsettedPrev = 0; int nWidthOfsettedPrev = 0; int nTopOfsettedPrev = 0; int nLeftOfsettedPrev = 0;

__declspec(naked) void CashShopFixPrev() {
	__asm {
		push	nHeightOfsettedPrev
		push	nWidthOfsettedPrev
		push	nTopOfsettedPrev
		push	nLeftOfsettedPrev
		jmp dword ptr[dwCashFixPrevRtm]
	}
}

int iHeightOfsetted1 = 0; int iWidthOfsetted1 = 0; int iTopOfsetted1 = 0; int iLeftOfsetted1 = 0;
int iHeightOfsetted2 = 0; int iWidthOfsetted2 = 0; int iTopOfsetted2 = 0; int iLeftOfsetted2 = 0;
int iHeightOfsetted3 = 0; int iWidthOfsetted3 = 0; int iTopOfsetted3 = 0; int iLeftOfsetted3 = 0;
int iHeightOfsetted4 = 0; int iWidthOfsetted4 = 0; int iTopOfsetted4 = 0; int iLeftOfsetted4 = 0;
int iHeightOfsetted5 = 0; int iWidthOfsetted5 = 0; int iTopOfsetted5 = 0; int iLeftOfsetted5 = 0;
int iHeightOfsetted6 = 0; int iWidthOfsetted6 = 0; int iTopOfsetted6 = 0; int iLeftOfsetted6 = 0;
int iHeightOfsetted7 = 0; int iWidthOfsetted7 = 0; int iTopOfsetted7 = 0; int iLeftOfsetted7 = 0;
int iHeightOfsetted8 = 0; int iWidthOfsetted8 = 0; int iTopOfsetted8 = 0; int iLeftOfsetted8 = 0;

__declspec(naked) void ITCFix1() {
	__asm {
		push	iHeightOfsetted1
		push	iWidthOfsetted1
		push	iTopOfsetted1
		push	iLeftOfsetted1
		jmp dword ptr[dwITCFix1Rtm]
	}
}

__declspec(naked) void ITCFix2() {
	__asm {
		push	iHeightOfsetted2
		push	iWidthOfsetted2
		push	iTopOfsetted2
		push	iLeftOfsetted2
		jmp dword ptr[dwITCFix2Rtm]
	}
}

__declspec(naked) void ITCFix3() {
	__asm {
		push	iHeightOfsetted3
		push	iWidthOfsetted3
		push	iTopOfsetted3
		push	iLeftOfsetted3
		jmp dword ptr[dwITCFix3Rtm]
	}
}

__declspec(naked) void ITCFix4() {
	__asm {
		push	iHeightOfsetted4
		push	iWidthOfsetted4
		push	iTopOfsetted4
		push	iLeftOfsetted4
		jmp dword ptr[dwITCFix4Rtm]
	}
}

__declspec(naked) void ITCFix5() {
	__asm {
		push    10
		push	iHeightOfsetted5
		push	iWidthOfsetted5
		push	iTopOfsetted5
		push	iLeftOfsetted5
		jmp dword ptr[dwITCFix5Rtm]
	}
}

__declspec(naked) void ITCFix6() {
	__asm {
		push	iHeightOfsetted6
		push	iWidthOfsetted6
		push	iTopOfsetted6
		push	iLeftOfsetted6
		jmp dword ptr[dwITCFix6Rtm]
	}
}

__declspec(naked) void ITCFix7() {
	__asm {
		push	iHeightOfsetted7
		push	iWidthOfsetted7
		push	iTopOfsetted7
		push	iLeftOfsetted7
		jmp dword ptr[dwITCFix7Rtm]
	}
}

__declspec(naked) void ITCFix8() {
	__asm {
		push	iHeightOfsetted8
		push	iWidthOfsetted8
		push	iTopOfsetted8
		push	iLeftOfsetted8
		jmp dword ptr[dwITCFix8Rtm]
	}
}

int nTopOfsettedVerFix = 0; int nLeftOfsettedVerFix = 0;

__declspec(naked) void VersionNumberFix() {
	__asm {
		mov    eax, nLeftOfsettedVerFix
		sub    eax, DWORD PTR[ebp - 0x1c]
		push	nTopOfsettedVerFix
		jmp dword ptr[dwVersionNumberFixRtm]
	}
}

int myAlwaysViewRestoreFixOffset = 0;

__declspec(naked) void AlwaysViewRestoreFix() {
	__asm {
		test	eax, eax
		jnz C_Dest
		mov ecx, myAlwaysViewRestoreFixOffset
		push myAlwaysViewRestoreFixOffset
		jmp dword ptr[dwAlwaysViewRestorerFixRtm]
		C_Dest:
		mov ecx, DWORD PTR[eax]
		push eax
		jmp dword ptr[dwAlwaysViewRestorerFixRtm]
	}
}

//int nHeightOfsettedloginFrameFix = 0; int nWidthOfsettedloginFrameFix = 0;
//int nTopOfsettedloginFrameFix = 0; int nLeftOfsettedloginFrameFix = 0;

//__declspec(naked) void loginFrameFix() {
//	__asm {
//		pop ebx
////		push 1
//		push 0
//		push 1
//		push	nHeightOfsettedloginFrameFix
//		push	nWidthOfsettedloginFrameFix
//		push	nTopOfsettedloginFrameFix
//		push	nLeftOfsettedloginFrameFix
//		push esi
//		call dword ptr[dwloginFrameFixCall]
//		add esp, 4
//		leave
//		retn 4
//	}
//}

int nHeightOfsettedLoginBackCanvasFix = 0; int nWidthOfsettedLoginBackCanvasFix = 0;
int nTopOfsettedLoginBackCanvasFix = 0; int nLeftOfsettedLoginBackCanvasFix = 0;

__declspec(naked) void ccLoginBackCanvasFix() {
	__asm {
		push	nHeightOfsettedLoginBackCanvasFix
		push	nWidthOfsettedLoginBackCanvasFix
		push	nTopOfsettedLoginBackCanvasFix
		push	nLeftOfsettedLoginBackCanvasFix
		jmp dword ptr[dwLoginBackCanvasFixRetn]
	}
}

int nHeightOfsettedLoginViewRecFix = 0; int nWidthOfsettedLoginViewRecFix = 0;
int nTopOfsettedLoginViewRecFix = 0; int nLeftOfsettedLoginViewRecFix = 0;

__declspec(naked) void ccLoginViewRecFix() {
	__asm {
		push	nHeightOfsettedLoginViewRecFix
		push	nWidthOfsettedLoginViewRecFix
		push	nTopOfsettedLoginViewRecFix
		push	nLeftOfsettedLoginViewRecFix
		jmp dword ptr[dwLoginViewRecFixRetn]
	}
}

int yOffsetOfLoginBackBtnFix = 0; int xOffsetOfLoginBackBtnFix = 0;

__declspec(naked) void ccLoginBackBtnFix() {	//un used
	__asm {
		mov    esi, yOffsetOfLoginBackBtnFix
		push	esi
		mov    edi, xOffsetOfLoginBackBtnFix
		push	edi
		push   0x3e8
		jmp dword ptr[dwLoginBackBtnFixRetn]
	}
}

int a1x = 0; int a2x = 0; int a2y = 0; int a3 = 0; int a1y = 0; 

__declspec(naked) void ccLoginDescriptorFix() {
	__asm {
		and	edx, 0x3f
		add    edx, 0x21
		add    edx, a2y
		cmp     ecx, edi
		setl   bl
		mov     ecx, esi
		mov    DWORD PTR[esi + 0x4], 0xaf7084
		mov    DWORD PTR[esi + 0x8], 0xaf7080
		neg     ebx
		sbb     ebx, ebx
		and ebx, a3	//and ebx, 0x64
		add     ebx, eax
		push    ebx
		push    edx
		xor eax, eax
		add eax, a1x //a1x
		push    eax
		push    edx
		push    eax
		push    edx
		mov    eax, a2x	//mov    eax, 0xffffff6b
		push    eax
		push	edi
		jmp dword ptr[dwLoginDescriptorFixRetn]
	}
}

int MoreGainMsgsOffset = 6;

__declspec(naked) void ccMoreGainMsgs() {
	__asm {
		mov    eax, DWORD PTR[edi + 0x10]
		cmp    eax, MoreGainMsgsOffset
		jmp dword ptr[dwMoreGainMsgsRetn]
	}
}

int MoreGainMsgsFadeOffset = 0;

__declspec(naked) void ccMoreGainMsgsFade() {
	__asm {
		add eax,MoreGainMsgsFadeOffset
		push 3
		jmp dword ptr[dwMoreGainMsgsFadeRetn]
	}
}

int MoreGainMsgsFade1Offset = 0;

__declspec(naked) void ccMoreGainMsgsFade1() {
	__asm {
		push MoreGainMsgsFade1Offset
		jmp dword ptr[dwMoreGainMsgsFade1Retn]
	}
}

int yOffsetOfMuruengraidPlayer = 50; int xOffsetOfMuruengraidPlayer = 169;

__declspec(naked) void ccMuruengraidPlayer() {
	__asm {
		push yOffsetOfMuruengraidPlayer
		push xOffsetOfMuruengraidPlayer
		push ecx
		jmp dword ptr[dwMuruengraidPlayerRetn]
	}
}

int yOffsetOfMuruengraidClock = 26; int xOffsetOfMuruengraidClock = 400;

__declspec(naked) void ccMuruengraidClock() {
	__asm {
		push yOffsetOfMuruengraidClock
		push xOffsetOfMuruengraidClock
		push ecx
		jmp dword ptr[dwMuruengraidClockRetn]
	}
}

int yOffsetOfMuruengraidMonster = 50; int xOffsetOfMuruengraidMonster = 631;

__declspec(naked) void ccMuruengraidMonster() {
	__asm {
		push yOffsetOfMuruengraidMonster
		push xOffsetOfMuruengraidMonster
		push ecx
		jmp dword ptr[dwMuruengraidMonsterRetn]
	}
}

int yOffsetOfMuruengraidMonster1 = 32; int xOffsetOfMuruengraidMonster1 = 317;

__declspec(naked) void ccMuruengraidMonster1() {	
	__asm {
		push yOffsetOfMuruengraidMonster1
		push xOffsetOfMuruengraidMonster1
		jmp dword ptr[dwMuruengraidMonster1Retn]
	}
}

int yOffsetOfMuruengraidMonster2 = 32; int xOffsetOfMuruengraidMonster2 = 482;

__declspec(naked) void ccMuruengraidMonster2() {
	__asm {
		push yOffsetOfMuruengraidMonster2
		push xOffsetOfMuruengraidMonster2
		jmp dword ptr[dwMuruengraidMonster2Retn]
	}
}

int yOffsetOfMuruengraidEngBar = 86; int xOffsetOfMuruengraidEngBar = 17;

__declspec(naked) void ccMuruengraidEngBar() {
	__asm {
		push yOffsetOfMuruengraidEngBar
		push xOffsetOfMuruengraidEngBar
		push ecx
		jmp dword ptr[dwMuruengraidEngBarRetn]
	}
}

int yOffsetOfMuruengraidEngBar1 = 130; int xOffsetOfMuruengraidEngBar1 = 20;

__declspec(naked) void ccMuruengraidEngBar1() {
	__asm {
		push yOffsetOfMuruengraidEngBar1
		push xOffsetOfMuruengraidEngBar1
		push ecx
		jmp dword ptr[dwMuruengraidEngBar1Retn]
	}
}

int yOffsetOfMuruengraidEngBar2 = 80; int xOffsetOfMuruengraidEngBar2 = 9;

__declspec(naked) void ccMuruengraidEngBar2() {
	__asm {
		push yOffsetOfMuruengraidEngBar2
		push xOffsetOfMuruengraidEngBar2
		push ecx
		jmp dword ptr[dwMuruengraidEngBar2Retn]
	}
}

int yOffsetOfMuruengraidClearRoundUI = 260; int xOffsetOfMuruengraidClearRoundUI = 400;

__declspec(naked) void ccMuruengraidClearRoundUI() {
	__asm {
		mov ecx, esi
		push yOffsetOfMuruengraidClearRoundUI
		push xOffsetOfMuruengraidClearRoundUI
		jmp dword ptr[dwMuruengraidClearRoundUIRetn]
	}
}

int yOffsetOfMuruengraidTimerCanvas = 28; int xOffsetOfMuruengraidTimerCanvas = 112;

__declspec(naked) void ccMuruengraidTimerCanvas() {
	__asm {
		push yOffsetOfMuruengraidTimerCanvas
		movsd
		push xOffsetOfMuruengraidTimerCanvas
		jmp dword ptr[dwMuruengraidTimerCanvasRetn]
	}
}

int yOffsetOfMuruengraidTimerMinutes = 0; int xOffsetOfMuruengraidTimerMinutes = 0;

__declspec(naked) void ccMuruengraidTimerMinutes() {
	__asm {
		mov    DWORD PTR[esi + 0x848], edi
		push eax
		push yOffsetOfMuruengraidTimerMinutes
		push xOffsetOfMuruengraidTimerMinutes
		jmp dword ptr[dwMuruengraidTimerMinutesRetn]
	}
}

int yOffsetOfMuruengraidTimerSeconds = 0; int xOffsetOfMuruengraidTimerSeconds = 68;

__declspec(naked) void ccMuruengraidTimerSeconds() {
	__asm {
		mov ecx, esi
		push edx
		push yOffsetOfMuruengraidTimerSeconds
		push xOffsetOfMuruengraidTimerSeconds
		jmp dword ptr[dwMuruengraidTimerSecondsRetn]
	}
}

int yOffsetOfMuruengraidTimerBar = 16; int xOffsetOfMuruengraidTimerBar = 345;

__declspec(naked) void ccMuruengraidTimerBar() {
	__asm {
		push yOffsetOfMuruengraidTimerBar
		push xOffsetOfMuruengraidTimerBar
		jmp dword ptr[dwMuruengraidTimerBarRetn]
	}
}

int xOffsetOfMuruengraidMonster1_2 = 318;

__declspec(naked) void ccMuruengraidMonster1_2() {
	__asm {
		mov    edx,xOffsetOfMuruengraidMonster1_2
		jmp dword ptr[dwMuruengraidMonster1_2Retn]
	}
}

__declspec(naked) void ccStatsSubMov() {
	__asm {
		mov     ecx, esi
		add   DWORD PTR[ebp + 0x8], 84 //260-176
		push   DWORD PTR[ebp + 0x8]
		jmp dword ptr[dwStatsSubMovRetn]
	}
}
//beginning of packed client run caves

__declspec(naked) void ccCLoginSendCheckPasswordPacket() {
	__asm {
		jmp dword ptr[dwCLoginSendCheckPasswordPacketRetn]
	}
}

__declspec(naked) void cc0x0044E550() {
	__asm {
		jmp dword ptr[dw0x0044E550Retn]
	}
}

__declspec(naked) void cc0x0044E5BE() {
	__asm {
		jmp dword ptr[dw0x0044E5BERetn]
	}
}

__declspec(naked) void cc0x0044E5DB() {
	__asm {
		jmp dword ptr[dw0x0044E5DBRetn]
	}
}

__declspec(naked) void cc0x0044E6AC() {
	__asm {
		jmp dword ptr[dw0x0044E6ACRetn]
	}
}

__declspec(naked) void cc0x0044E71D() {
	__asm {
		jmp dword ptr[dw0x0044E71DRetn]
	}
}

__declspec(naked) void cc0x0044E80C() {
	__asm {
		jmp dword ptr[dw0x0044E80CRetn]
	}
}

__declspec(naked) void cc0x0044E8B4() {
	__asm {
		jmp dword ptr[dw0x0044E8B4Retn]
	}
}

__declspec(naked) void cc0x0044EA22() {
	__asm {
		jmp dword ptr[dw0x0044EA22Retn]
	}
}

__declspec(naked) void cc0x0044EA6F() {
	__asm {
		jmp dword ptr[dw0x0044EA6FRetn]
	}
}

__declspec(naked) void cc0x0044EBD6() {
	__asm {
		jmp dword ptr[dw0x0044EBD6Retn]
	}
}

__declspec(naked) void cc0x0044ECA1() {
	__asm {
		jmp dword ptr[dw0x0044ECA1Retn]
	}
}

__declspec(naked) void cc0x0044ED32() {
	__asm {
		jmp dword ptr[dw0x0044ED32Retn]
	}
}

__declspec(naked) void cc0x0044ED52() {
	__asm {
		jmp dword ptr[dw0x0044ED52Retn]
	}
}

__declspec(naked) void cc0x0044EED3() {
	__asm {
		jmp dword ptr[dw0x0044EED3Retn]
	}
}

__declspec(naked) void cc0x00494943() {
	__asm {
		jmp dword ptr[dw0x00494943Retn]
	}
}

__declspec(naked) void cc0x00494BB6() {
	__asm {
		jmp dword ptr[dw0x00494BB6Retn]
	}
}

__declspec(naked) void cc0x00494CA9() {
	__asm {
		jmp dword ptr[dw0x00494CA9Retn]
	}
}

__declspec(naked) void cc0x00494CF0() {
	__asm {
		jmp dword ptr[dw0x00494CF0Retn]
	}
}

__declspec(naked) void cc0x00494D3B() {
	__asm {
		jmp dword ptr[dw0x00494D3BRetn]
	}
}

__declspec(naked) void cc0x00494EAF() {
	__asm {
		jmp dword ptr[dw0x00494EAFRetn]
	}
}

__declspec(naked) void cc0x00494EEC() {
	__asm {
		jmp dword ptr[dw0x00494EECRetn]
	}
}

__declspec(naked) void cc0x00494F87() {
	__asm {
		jmp dword ptr[dw0x00494F87Retn]
	}
}

__declspec(naked) void cc0x009F4E84() {
	__asm {
		jmp dword ptr[dw0x009F4E84Retn]
	}
}

__declspec(naked) void cc0x009F4EC3() {
	__asm {
		jmp dword ptr[dw0x009F4EC3Retn]
	}
}

__declspec(naked) void cc0x009F4F12() {
	__asm {
		jmp dword ptr[dw0x009F4F12Retn]
	}
}

__declspec(naked) void cc0x009F4FC6() {
	__asm {
		jmp dword ptr[dw0x009F4FC6Retn]
	}
}

__declspec(naked) void cc0x009F503C() {
	__asm {
		jmp dword ptr[dw0x009F503CRetn]
	}
}

__declspec(naked) void cc0x009F51A7() {
	__asm {
		jmp dword ptr[dw0x009F51A7Retn]
	}
}

__declspec(naked) void cc0x009F526F() {
	__asm {
		jmp dword ptr[dw0x009F526FRetn]
	}
}

__declspec(naked) void cc0x009F5653() {
	__asm {
		jmp dword ptr[dw0x009F5653Retn]
	}
}

__declspec(naked) void cc0x009F5833() {
	__asm {
		jmp dword ptr[dw0x009F5833Retn]
	}
}

__declspec(naked) void cc0x009F5C2C() {
	__asm {
		jmp dword ptr[dw0x009F5C2CRetn]
	}
}

__declspec(naked) void cc0x009F5CA3() {
	__asm {
		jmp dword ptr[dw0x009F5CA3Retn]
	}
}

__declspec(naked) void cc0x009F5FBD() {
	__asm {
		jmp dword ptr[dw0x009F5FBDRetn]
	}
}

__declspec(naked) void cc0x009F631C() {
	__asm {
		jmp dword ptr[dw0x009F631CRetn]
	}
}

__declspec(naked) void cc0x009F691F() {
	__asm {
		jmp dword ptr[dw0x009F691FRetn]
	}
}

__declspec(naked) void cc0x009F6F36() {
	__asm {
		jmp dword ptr[dw0x009F6F36Retn]
	}
}

__declspec(naked) void cc0x009F6F5C() {
	__asm {
		jmp dword ptr[dw0x009F6F5CRetn]
	}
}

__declspec(naked) void cc0x009F7CFA() {
	__asm {
		jmp dword ptr[dw0x009F7CFARetn]
	}
}

__declspec(naked) void cc0x009F7D83() {
	__asm {
		jmp dword ptr[dw0x009F7D83Retn]
	}
}

__declspec(naked) void cc0x009F81FB() {
	__asm {
		jmp dword ptr[dw0x009F81FBRetn]
	}
}

__declspec(naked) void cc0x009F84E9() {
	__asm {
		jmp dword ptr[dw0x009F84E9Retn]
	}
}

__declspec(naked) void cc0x009F8AD4() {
	__asm {
		jmp dword ptr[dw0x009F8AD4Retn]
	}
}

__declspec(naked) void cc0x00A4BB39() {
	__asm {
		jmp dword ptr[dw0x00A4BB39Retn]
	}
}

__declspec(naked) void cc0x00A4BC79() {
	__asm {
		jmp dword ptr[dw0x00A4BC79Retn]
	}
}

__declspec(naked) void cc0x00A4BD05() {
	__asm {
		jmp dword ptr[dw0x00A4BD05Retn]
	}
}

__declspec(naked) void cc0x00A4BD4E() {
	__asm {
		jmp dword ptr[dw0x00A4BD4ERetn]
	}
}

__declspec(naked) void cc0x00A4BD99() {
	__asm {
		jmp dword ptr[dw0x00A4BD99Retn]
	}
}

__declspec(naked) void cc0x00A4BDE3() {
	__asm {
		jmp dword ptr[dw0x00A4BDE3Retn]
	}
}

__declspec(naked) void cc0x00A4BDFE() {
	__asm {
		jmp dword ptr[dw0x00A4BDFERetn]
	}
}

__declspec(naked) void cc0x00A4BE47() {
	__asm {
		jmp dword ptr[dw0x00A4BE47Retn]
	}
}


const char myWzFile[] = "TamingMob";
const char* ptrmyWzFile = myWzFile;

int MINT = 51+1;
const DWORD dwTesting = 0x009F74D2;
const DWORD dwTestingRetn = 0x009F74EA;
const int TestingNOPs = 24;
__declspec(naked) void testingCodeCave() {
	__asm {
		mov    DWORD PTR[ebp - 0x78], 0xb3f434
		mov    DWORD PTR[ebp - 0x74], 0xb3f42c
		mov    DWORD PTR[ebp - 0x70], 0xb3f428
		mov    DWORD PTR[ebp - 0x6C], 0xb3f428
		mov    DWORD PTR[ebp - 0x18], edi
		jmp dword ptr[dwTestingRetn]
	}
}

const DWORD dwTesting2 = 0x005549F8;
const DWORD dwTesting2Retn = 0x005549FD;
const int Testing2NOPs = 5;
__declspec(naked) void testingCodeCave2() {
	__asm {
		//call dword ptr[custom_sub_4289B7]
		jmp dword ptr[dwTesting2Retn]
	}
}

const DWORD dwTesting3 = 0x005556CC;
const DWORD dwTesting3Retn = 0x005556D5;
const int Testing3NOPs = 9;
__declspec(naked) void testingCodeCave3() {
	__asm {
		mov    DWORD PTR[esi + 0x848], edi
		push eax
		push 80//0
		push 250//0
		jmp dword ptr[dwTesting3Retn]
	}
}

const DWORD dwTesting4 = 0x005556E6;
const DWORD dwTesting4Retn = 0x005556EC;
const int Testing4NOPs = 6;
__declspec(naked) void testingCodeCave4() {
	__asm {
		mov ecx,esi
		push edx
		push 80//0
		push 318//68
		jmp dword ptr[dwTesting4Retn]
	}
}


DWORD fixMouseWheelAddr = 0x009E8090;
DWORD fixMouseWheelRetJmpAddr = 0x009E809F;
DWORD fixMouseWheelCallSetCursorPosAddr = 0x0059A0CB;
__declspec(naked) void fixMouseWheelHook() {
	__asm {
		// is mouse wheel
		cmp eax, 522
		je next
		mov eax, dword ptr ds : [edi]
		shr eax, 0x10
		push eax
		movzx eax, word ptr ds : [edi]
		push eax
		call fixMouseWheelCallSetCursorPosAddr
		next :
		jmp[fixMouseWheelRetJmpAddr]
	}
}

// ARRAYS ---- �����̿�ʼ
unsigned char Array_aDefaultQKM[] = {
	42, 0, 0, 0,
	82, 0, 0, 0,
	71, 0, 0, 0,
	73, 0, 0, 0,
	2, 0, 0, 0,
	3, 0, 0, 0,
	4, 0, 0, 0,
	5, 0, 0, 0,
	6, 0, 0, 0,
	30, 0, 0, 0,
	31, 0, 0, 0,
	32, 0, 0, 0,
	33, 0, 0, 0,
	29, 0, 0, 0,
	83, 0, 0, 0,
	79, 0, 0, 0,
	81, 0, 0, 0,
	16, 0, 0, 0,
	17, 0, 0, 0,
	18, 0, 0, 0,
	19, 0, 0, 0,
	20, 0, 0, 0,
	44, 0, 0, 0,
	45, 0, 0, 0,
	46, 0, 0, 0,
	47, 0, 0, 0,
	52, 0, 0, 0
};

// 0x00BE2DB0 confirmed, s_ptShortKeyPos
unsigned char Array_ptShortKeyPos[] = {
	7, 0, 0, 0,
	8, 0, 0, 0,
	42, 0, 0, 0,
	8, 0, 0, 0,
	77, 0, 0, 0,
	8, 0, 0, 0,
	112, 0, 0, 0,
	8, 0, 0, 0,
	147, 0, 0, 0,
	8, 0, 0, 0,
	182, 0, 0, 0,
	8, 0, 0, 0,
	217, 0, 0, 0,
	8, 0, 0, 0,
	252, 0, 0, 0,
	8, 0, 0, 0,
	287, 1, 0, 0,
	8, 0, 0, 0,
	322, 1, 0, 0,
	8, 0, 0, 0,
	357, 1, 0, 0,
	8, 0, 0, 0,
	392, 1, 0, 0,
	8, 0, 0, 0,
	427, 1, 0, 0,
	8, 0, 0, 0,
	7, 0, 0, 0,
	41, 0, 0, 0,
	42, 0, 0, 0,
	41, 0, 0, 0,
	77, 0, 0, 0,
	41, 0, 0, 0,
	112, 0, 0, 0,
	41, 0, 0, 0,
	147, 0, 0, 0,
	41, 0, 0, 0,
	182, 0, 0, 0,
	41, 0, 0, 0,
	217, 0, 0, 0,
	41, 0, 0, 0,
	252, 0, 0, 0,
	41, 0, 0, 0,
	287, 1, 0, 0,
	41, 0, 0, 0,
	322, 1, 0, 0,
	41, 0, 0, 0,
	357, 1, 0, 0,
	41, 0, 0, 0,
	392, 1, 0, 0,
	41, 0, 0, 0,
	427, 1, 0, 0,
	41, 0, 0, 0
};
//Variant of Array_ptShortKeyPos
unsigned char Array_ptShortKeyPos_Fixed_Tooltips[] = {
	7,0,0,0,0,0,0,0,42,0,0,0,0,0,0,0,77,0,0,0,0,0,0,0,112,0,0,0,0,0,0,0,147,0,0,0,0,0,0,0,182,0,0,0,0,0,0,0,217,0,0,0,0,0,0,0,252,0,0,0,0,0,0,0,287,1,0,0,0,0,0,0,322,1,0,0,0,0,0,0,357,1,0,0,0,0,0,0,392,1,0,0,0,0,0,0,427,1,0,0,0,0,0,0,7,0,0,0,33,0,0,0,42,0,0,0,33,0,0,0,77,0,0,0,33,0,0,0,112,0,0,0,33,0,0,0,147,0,0,0,33,0,0,0,182,0,0,0,33,0,0,0,217,0,0,0,33,0,0,0,252,0,0,0,33,0,0,0,287,1,0,0,33,0,0,0,322,1,0,0,33,0,0,0,357,1,0,0,33,0,0,0,392,1,0,0,33,0,0,0,427,1,0,0,33,0,0,0
};// This array will fix the janky offset of the tooltips
// s_aDefaultQKM_0
unsigned char Array_aDefaultQKM_0[] = {
	42, 0, 0, 0,
	82, 0, 0, 0,
	71, 0, 0, 0,
	73, 0, 0, 0, //4
	29, 0, 0, 0,
	83, 0, 0, 0,
	79, 0, 0, 0,
	81, 0, 0, 0, //8
	42, 0, 0, 0,
	82, 0, 0, 0,
	71, 0, 0, 0,
	73, 0, 0, 0, //12
	29, 0, 0, 0,
	83, 0, 0, 0,
	79, 0, 0, 0,
	81, 0, 0, 0, //16
	84, 0, 0, 0,
	85, 0, 0, 0,
	86, 0, 0, 0,
	87, 0, 0, 0, //20 
	88, 0, 0, 0,
	89, 0, 0, 0,
	29, 0, 0, 0,
	29, 0, 0, 0, //24
	29, 0, 0, 0,
	29, 0, 0, 0,
	29, 0, 0, 0,
};

unsigned char Array_Expanded[312] = { 4, 4, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 0, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 1, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 2, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 3, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 5, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 6, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 7, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 8, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 10, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 11, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 12, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 13, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 14, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 15, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 16, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 17, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 23, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 24, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 25, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 26, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	4, 27, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	5, 50, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	5, 51, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	5, 52, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	5, 53, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0 };

unsigned char Array_Expanded_Testing_Cooldown_fix[312] = { 0 };

unsigned char cooldown_Array[124] = { 255, 255, 255, 255, 255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255,255, 255, 255, 255 };


// CODECAVES --- 
DWORD Array_aDefaultQKM_Address = (DWORD)&Array_aDefaultQKM;
DWORD Array_mystery_Address = (DWORD)&Array_Expanded;
DWORD Array_mystery_Address_plus = (DWORD)&Array_Expanded + 1;
DWORD cooldown_Array_Address = (DWORD)&cooldown_Array;
DWORD Array_Expanded_Testing_Cooldown_fix_Address = (DWORD)&Array_Expanded_Testing_Cooldown_fix;

DWORD CompareValidate_Retn = 0x8DD8BD;
_declspec(naked) void CompareValidateFuncKeyMappedInfo_cave()
{
	_asm
	{
		push 0x138;
		push 0x0;
		push eax;
		pushad;
		popad;
		jmp CompareValidate_Retn
			//push 0x8DD8BD;
			//ret;
	}
}

DWORD sub_9FA0CB_cave_retn_1 = 0x9FA0E1;
_declspec(naked) void sub_9FA0CB_cave()
{
	_asm {
		test eax, eax;
		jne label;
		push 0xD4;
		pushad;
		popad;
		// -> ZAllocEx<ZAllocAnonSelector>::Alloc(ZAllocEx<ZAllocAnonSelector>::_s_alloc, 0x44u);
		//push 0x9FA0E1;
		//ret;
		jmp sub_9FA0CB_cave_retn_1
			label :
		push 0x138;
		push 0x0;
		push eax;
		pushad;
		popad;
		// -> memset(this + 0xD20, 0, 0x60u);
		//push 0x8DD8BD;
		//ret;
		jmp CompareValidate_Retn
	}
}
//DWORD sDefaultQuickslotKeyMap_cave_retn = 0x72B7C2;
_declspec(naked) void sDefaultQuickslotKeyMap_cave()
{
	_asm {
		push ebx;
		push esi;
		push edi;
		xor edx, edx;
		mov ebx, ecx;
		call label;
		nop;
		lea edi, dword ptr ds : [ebx + 0x4] ;
		mov ecx, 0x1A;
		mov esi, Array_aDefaultQKM_Address;
		rep movsd;
		lea edi, dword ptr ds : [ebx + 0x6C] ;
		mov ecx, 0x1A;
		mov esi, Array_aDefaultQKM_Address;
		rep movsd;
		pop edi;
		pop esi;
		pop ebx;
		ret;
		// 0xBF8EE8
	label:
		push esi;
		mov esi, ecx;
		lea eax, dword ptr ds : [esi + 0x4] ;
		// -> _DWORD *__fastcall sub_72B7BC(_DWORD *a1)
		push 0x72B7C2;
		ret;
		//jmp sDefaultQuickslotKeyMap_cave_retn
	}
}
_declspec(naked) void DefaultQuickslotKeyMap_cave()
{
	_asm {
		push esi;
		push edi;
		lea eax, dword ptr ds : [ecx + 0x4] ;
		mov esi, Array_aDefaultQKM_Address;
		mov ecx, 0x1A;
		mov edi, eax;
		rep movsd;
		pop edi;
		pop esi;
		ret;
	}
}
_declspec(naked) void Restore_Array_Expanded() //Thank you Max
{
	_asm {
		lea eax, [esi + 0D7Ch]
		push esi
		push edi
		push ecx
		mov esi, [Array_Expanded_Testing_Cooldown_fix_Address]
		mov edi, Array_mystery_Address
		mov ecx, 78
		rep movsd
		pop ecx
		pop edi
		pop esi
		push 0x008CFE03;
		ret;
	}
}
// �����̽���


DWORD fixDateFormatRtnAddr = 0x008EBF65;
__declspec(naked) void fixDateFormat() {
	__asm {
		movzx   ecx, word ptr[ebp - 16h]
		push    ecx
		movzx   ecx, word ptr[ebp - 1Ah]
		push    ecx
		movzx   ecx, word ptr[ebp - 1Ch]
		jmp fixDateFormatRtnAddr
	}
}
DWORD fixDateFormat2RtnAddr = 0x008EBFAF;
__declspec(naked) void fixDateFormat2() {
	__asm {
		movzx   ecx, word ptr[ebp - 16h]
		push    ecx
		movzx   ecx, word ptr[ebp - 1Ah]
		push    ecx
		movzx   ecx, word ptr[ebp - 1Ch]
		jmp fixDateFormat2RtnAddr
	}
}
DWORD fixDateFormat3RtnAddr = 0x008EC328;
__declspec(naked) void fixDateFormat3() {
	__asm {
		movzx   ecx, word ptr[ebp - 1Eh]
		push    ecx
		movzx   ecx, word ptr[ebp - 22h]
		push    ecx
		movzx   ecx, word ptr[ebp - 24h]
		jmp fixDateFormat3RtnAddr
	}
}
DWORD fixDateFormat4RtnAddr = 0x008EBF13;
__declspec(naked) void fixDateFormat4() {
	__asm {
		movzx   ecx, word ptr[ebp - 16h]
		push    ecx
		movzx   ecx, word ptr[ebp - 1Ah]
		push    ecx
		movzx   ecx, word ptr[ebp - 1Ch]
		jmp fixDateFormat4RtnAddr
	}
}

DWORD getItemType2Addr = 0x005CFAC2;
__declspec(naked) void getItemType1() {
	__asm {
		jmp getItemType2Addr
	}
}

DWORD getItemType2ErrRtnAddr = 0x005CFAA8;
DWORD getItemType2RtnAddr = 0x005CFADD;
__declspec(naked) void getItemType2() {
	__asm {
		dec eax
		jz label_eqp
		dec eax
		jz label_use
		dec eax
		jz label_ins
		dec eax
		jz label_etc
		dec eax
		jz label_cash
		jmp getItemType2ErrRtnAddr
	label_cash:
		push 0x159C
		jmp getItemType2RtnAddr
	label_etc:
		push 0x6DD
		jmp getItemType2RtnAddr
	label_ins:
		push 0x0B
		jmp getItemType2RtnAddr
	label_use:
		push 0x6E3
		jmp getItemType2RtnAddr
	label_eqp:
		push 0x6D9
		jmp getItemType2RtnAddr
	}
}

const DWORD back1 = 0x007807A1;
__declspec(naked) void customJumpCapHook1()
{
	__asm {
		cmp eax, Client::jumpCap
		jl label
		push Client::jumpCap
		pop eax
	label:
		mov edx, edi
		jmp[back1]
	}
}


const DWORD back2 = 0x008C42AD;
const DWORD back3 = 0x008C42AF;
__declspec(naked) void customJumpCapHook2()
{
	__asm {
		cmp eax, Client::jumpCap
		jle label
		push Client::jumpCap
		pop edi
		jmp[back3]
		label:
		jmp[back2]
	}
}

const DWORD back4 = 0x0094D947;
__declspec(naked) void customJumpCapHook3()
{
	__asm {
		push Client::jumpCap
		pop ecx
		cmp eax, ecx
		jmp[back4]
	}
}

const DWORD chatTextPosRtn = 0x008DD075;
__declspec(naked) void chatTextPos()
{
	__asm {
		add eax, [edi + 0CFCh]
		cmp[edi + 0D00h], 3
		jz label_type3
		cmp[edi + 0D00h], 2
		jz label_type2

		label_type1 :        // ״̬1 ����
		sub eax, 1
		jmp label_rtn

		label_type2 :        // ״̬2 ���� + ����
		jmp label_rtn

		label_type3 :        // ״̬3 չ��
		sub eax, 2

		label_rtn :
		jmp chatTextPosRtn
	}
}

int curSpeed = 100;
void calcClimbSpeed() {
	int speed = curSpeed;
	speed = speed < 80 ? 80 : speed;
	speed = speed > Client::speedMovementCap ? Client::speedMovementCap : speed;

	double climbingSpeed = Client::climbSpeed;
	climbingSpeed = climbingSpeed <= 1.0 ? 1.0 : climbingSpeed;
	double curClimbSpeed = 3.0 * speed * climbingSpeed / 100;
	Memory::WriteDouble(0x00C1CF80, curClimbSpeed);
}

DWORD calcSpeedHookRtn = 0x0094D942;
__declspec(naked) void calcSpeedHook()
{
	__asm {
		push eax
		mov eax, [ebp - 10h]
		mov curSpeed, eax
		call calcClimbSpeed
		pop eax
		cmp     eax, edi
		jg label_return
		mov     eax, edi

		label_return :
		jmp calcSpeedHookRtn
	}
}

DWORD faceRtn = 0x005C95BF;
DWORD hairRtn = 0x005C958D;
DWORD faceHairCaveRtn = 0x005C9505;
__declspec(naked) void faceHairCave()
{
	__asm {
		cmp  eax, 2
		jz label_face
		cmp  eax, 3
		jz label_hair
		cmp  eax, 4
		jz label_hair
		cmp  eax, 5
		jz label_face
		cmp  eax, 6
		jz label_hair

		jmp faceHairCaveRtn

		label_face:
		jmp faceRtn

		label_hair:
		jmp hairRtn
	}
}

DWORD canSendPkgTimeCaveRtn = 0x00485C32;
__declspec(naked) void canSendPkgTimeCave()
{
	__asm {
		sub eax, [esi + 20A8h]
		cmp eax, 200
		jmp canSendPkgTimeCaveRtn
	}
}

DWORD apDetailBtnRtn = 0x008C4E22;
__declspec(naked) void apDetailBtn()
{
	__asm {
		push    144h
		push    99h
		jmp apDetailBtnRtn
	}
}

int darkCircleX;
int darkCircleY;
constexpr DWORD darkMap1ccRtn = 0x0055BEEF;
__declspec(naked) void darkMap1cc() {
	__asm {
		add edx, darkCircleX
		add ecx, darkCircleY
		jmp darkMap1ccRtn
	}
}
constexpr DWORD darkMap2ccRtn = 0x0055C08B;
__declspec(naked) void darkMap2cc() {
	__asm {
		add eax, darkCircleY
		push eax
		mov eax, [ebp - 3Ch]
		add eax, darkCircleX
		jmp darkMap2ccRtn
	}
}
constexpr DWORD darkMap3ccRtn = 0x0055C1D2;
__declspec(naked) void darkMap3cc() {
	__asm {
		add eax, darkCircleY
		push edi
		push eax
		mov eax, [ebp - 3Ch]
		add eax, darkCircleX
		jmp darkMap3ccRtn
	}
}

unsigned char world_cap_increase_array[] = { 0x81, 0xFE };//129~254