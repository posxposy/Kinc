#pragma once

namespace Kore {
	enum KeyCode {
		Key_Escape            = 0x00000100,
		Key_Tab               = 0x00000101,
		Key_Backtab           = 0x00000102,
		Key_Backspace         = 0x00000103,
		Key_Return            = 0x00000104,
		Key_Enter             = 0x00000105, //Typically located on the keypad.
		Key_Insert            = 0x00000106,
		Key_Delete            = 0x00000107,
		Key_Pause             = 0x00000108,
		Key_Print             = 0x00000109,
		Key_SysReq            = 0x0000010a,
		Key_Clear             = 0x0000010b,
		Key_Home              = 0x00000110,
		Key_End               = 0x00000111,
		Key_Left              = 0x00000112,
		Key_Up                = 0x00000113,
		Key_Right             = 0x00000114,
		Key_Down              = 0x00000115,
		Key_PageUp            = 0x00000116,
		Key_PageDown          = 0x00000117,
		Key_AltGr             = 0x0000011f,   //On Windows, when the KeyDown event for this key is sent, the Ctrl+Alt modifiers are also set.
		Key_Shift             = 0x00000120,
		Key_Control           = 0x00000121,   //On Mac OS X, this corresponds to the Command keys.
		Key_Meta              = 0x00000122,   //On Mac OS X, this corresponds to the Control keys. On Windows keyboards, this key is mapped to the Windows key.
		Key_Alt               = 0x00000123,
		Key_CapsLock          = 0x00000124,
		Key_NumLock           = 0x00000125,
		Key_ScrollLock        = 0x00000126,
		Key_F1                = 0x00000130     ,
		Key_F2                = 0x00000131     ,
		Key_F3                = 0x00000132     ,
		Key_F4                = 0x00000133     ,
		Key_F5                = 0x00000134     ,
		Key_F6                = 0x00000135     ,
		Key_F7                = 0x00000136     ,
		Key_F8                = 0x00000137     ,
		Key_F9                = 0x00000138     ,
		Key_F10               = 0x00000139     ,
		Key_F11               = 0x0000013a     ,
		Key_F12               = 0x0000013b     ,
		Key_F13               = 0x0000013c     ,
		Key_F14               = 0x0000013d     ,
		Key_F15               = 0x0000013e     ,
		Key_F16               = 0x0000013f     ,
		Key_F17               = 0x00000140     ,
		Key_F18               = 0x00000141     ,
		Key_F19               = 0x00000142     ,
		Key_F20               = 0x00000143     ,
		Key_F21               = 0x00000144     ,
		Key_F22               = 0x00000145     ,
		Key_F23               = 0x00000146     ,
		Key_F24               = 0x00000147     ,
		Key_F25               = 0x00000148     ,
		Key_F26               = 0x00000149     ,
		Key_F27               = 0x0000014a     ,
		Key_F28               = 0x0000014b     ,
		Key_F29               = 0x0000014c     ,
		Key_F30               = 0x0000014d     ,
		Key_F31               = 0x0000014e     ,
		Key_F32               = 0x0000014f     ,
		Key_F33               = 0x00000150     ,
		Key_F34               = 0x00000151     ,
		Key_F35               = 0x00000152     ,
		Key_Super_L           = 0x00000153     ,
		Key_Super_R           = 0x00000154     ,
		Key_Menu              = 0x00000155     ,
		Key_Hyper_L           = 0x00000156     ,
		Key_Hyper_R           = 0x00000157     ,
		Key_Help              = 0x00000158     ,
		Key_Direction_L       = 0x00000159     ,
		Key_Direction_R       = 0x00000160     ,

		Key_GermanLessMore    = 0x00000018,
		Key_Huetchen          = 0x00000019,
		Key_Space             = 0x00000020     ,
		Key_Exclam            = 0x00000021     ,
		Key_QuoteDbl          = 0x00000022     ,
		Key_NumberSign        = 0x00000023    , 
		Key_Dollar            = 0x00000024     ,
		Key_Percent           = 0x00000025     ,
		Key_Ampersand         = 0x00000026     ,
		Key_Apostrophe        = 0x00000027    , 
		Key_ParenLeft         = 0x00000028     ,
		Key_ParenRight        = 0x00000029    , 
		Key_Asterisk          = 0x0000002a     ,
		Key_Plus              = 0x0000002b     ,
		Key_Comma             = 0x0000002c     ,
		Key_Minus             = 0x0000002d     ,
		Key_Period            = 0x0000002e    , 
		Key_Slash             = 0x0000002f     ,
		Key_0                 = 0x00000030     ,
		Key_1                 = 0x00000031     ,
		Key_2                 = 0x00000032     ,
		Key_3                 = 0x00000033     ,
		Key_4                 = 0x00000034     ,
		Key_5                 = 0x00000035     ,
		Key_6                 = 0x00000036     ,
		Key_7                 = 0x00000037     ,
		Key_8                 = 0x00000038     ,
		Key_9                 = 0x00000039     ,
		Key_Colon             = 0x0000003a    , 
		Key_Semicolon         = 0x0000003b     ,
		Key_Less              = 0x0000003c     ,
		Key_Equal             = 0x0000003d     ,
		Key_Greater           = 0x0000003e     ,
		Key_Question          = 0x0000003f     ,
		Key_At                = 0x00000040     ,
		Key_A                 = 0x00000041     ,
		Key_B                 = 0x00000042     ,
		Key_C                 = 0x00000043     ,
		Key_D                 = 0x00000044     ,
		Key_E                 = 0x00000045     ,
		Key_F                 = 0x00000046     ,
		Key_G                 = 0x00000047     ,
		Key_H                 = 0x00000048     ,
		Key_I                 = 0x00000049     ,
		Key_J                 = 0x0000004a     ,
		Key_K                 = 0x0000004b     ,
		Key_L                 = 0x0000004c     ,
		Key_M                 = 0x0000004d     ,
		Key_N                 = 0x0000004e     ,
		Key_O                 = 0x0000004f     ,
		Key_P                 = 0x00000050     ,
		Key_Q                 = 0x00000051     ,
		Key_R                 = 0x00000052     ,
		Key_S                 = 0x00000053     ,
		Key_T                 = 0x00000054     ,
		Key_U                 = 0x00000055     ,
		Key_V                 = 0x00000056     ,
		Key_W                 = 0x00000057     ,
		Key_X                 = 0x00000058     ,
		Key_Y                 = 0x00000059     ,
		Key_Z                 = 0x0000005a     ,
		Key_BracketLeft       = 0x0000005b     ,
		Key_Backslash         = 0x0000005c     ,
		Key_BracketRight      = 0x0000005d     ,
		Key_AsciiCircum       = 0x0000005e     ,
		Key_Underscore        = 0x0000005f     ,
		Key_QuoteLeft         = 0x00000060     ,
		Key_BraceLeft         = 0x0000007b     ,
		Key_Bar               = 0x0000007c     ,
		Key_BraceRight        = 0x0000007d     ,
		Key_AsciiTilde        = 0x0000007e     ,
		Key_nobreakspace      = 0x000000a0    ,
		Key_exclamdown        = 0x000000a1    ,
		Key_cent              = 0x000000a2    ,
		Key_sterling          = 0x000000a3    ,
		Key_currency          = 0x000000a4    ,
		Key_yen               = 0x000000a5    ,
		Key_brokenbar         = 0x000000a6    ,
		Key_section           = 0x000000a7    ,
		Key_diaeresis         = 0x000000a8    ,
		Key_copyright         = 0x000000a9    ,
		Key_ordfeminine       = 0x000000aa    ,
		Key_guillemotleft     = 0x000000ab    ,
		Key_notsign           = 0x000000ac    ,
		Key_hyphen            = 0x000000ad    ,
		Key_registered        = 0x000000ae    ,
		Key_macron            = 0x000000af    ,
		Key_degree            = 0x000000b0    ,
		Key_plusminus         = 0x000000b1    ,
		Key_twosuperior       = 0x000000b2    ,
		Key_threesuperior     = 0x000000b3    ,
		Key_acute             = 0x000000b4    ,
		Key_mu                = 0x000000b5    ,
		Key_paragraph         = 0x000000b6    ,
		Key_periodcentered    = 0x000000b7    ,
		Key_cedilla           = 0x000000b8    ,
		Key_onesuperior       = 0x000000b9    ,
		Key_masculine         = 0x000000ba    ,
		Key_guillemotright    = 0x000000bb    ,
		Key_onequarter        = 0x000000bc    ,
		Key_onehalf           = 0x000000bd    ,
		Key_threequarters     = 0x000000be    ,
		Key_questiondown      = 0x000000bf    ,
		Key_Agrave            = 0x000000c0    ,
		Key_Aacute            = 0x000000c1    ,
		Key_Acircumflex       = 0x000000c2    ,
		Key_Atilde            = 0x000000c3    ,
		Key_Adiaeresis        = 0x000000c4    ,
		Key_Aring             = 0x000000c5    ,
		Key_AE                = 0x000000c6    ,
		Key_Ccedilla          = 0x000000c7    ,
		Key_Egrave            = 0x000000c8    ,
		Key_Eacute            = 0x000000c9    ,
		Key_Ecircumflex       = 0x000000ca    ,
		Key_Ediaeresis        = 0x000000cb    ,
		Key_Igrave            = 0x000000cc    ,
		Key_Iacute            = 0x000000cd    ,
		Key_Icircumflex       = 0x000000ce    ,
		Key_Idiaeresis        = 0x000000cf    ,
		Key_ETH               = 0x000000d0    ,
		Key_Ntilde            = 0x000000d1    ,
		Key_Ograve            = 0x000000d2    ,
		Key_Oacute            = 0x000000d3    ,
		Key_Ocircumflex       = 0x000000d4    ,
		Key_Otilde            = 0x000000d5    ,
		Key_Odiaeresis        = 0x000000d6    ,
		Key_multiply          = 0x000000d7    ,
		Key_Ooblique          = 0x000000d8    ,
		Key_Ugrave            = 0x000000d9    ,
		Key_Uacute            = 0x000000da    ,
		Key_Ucircumflex       = 0x000000db    ,
		Key_Udiaeresis        = 0x000000dc    ,
		Key_Yacute            = 0x000000dd    ,
		Key_THORN             = 0x000000de    ,
		Key_ssharp            = 0x000000df    ,
		Key_division          = 0x000000f7    ,
		Key_ydiaeresis        = 0x000000ff    ,

		Key_Multi_key         = 0x01001120   ,
		Key_Codeinput         = 0x01001137   ,
		Key_SingleCandidate   = 0x0100113c   ,
		Key_MultipleCandidate = 0x0100113d   ,
		Key_PreviousCandidate = 0x0100113e   ,
		Key_Mode_switch       = 0x0100117e   ,
		Key_Kanji             = 0x01001121   ,
		Key_Muhenkan          = 0x01001122   ,
		Key_Henkan            = 0x01001123   ,
		Key_Romaji            = 0x01001124   ,
		Key_Hiragana          = 0x01001125   ,
		Key_Katakana          = 0x01001126   ,
		Key_Hiragana_Katakana = 0x01001127   ,
		Key_Zenkaku           = 0x01001128   ,
		Key_Hankaku           = 0x01001129   ,
		Key_Zenkaku_Hankaku   = 0x0100112a   ,
		Key_Touroku           = 0x0100112b   ,
		Key_Massyo            = 0x0100112c   ,
		Key_Kana_Lock         = 0x0100112d   ,
		Key_Kana_Shift        = 0x0100112e   ,
		Key_Eisu_Shift        = 0x0100112f   ,
		Key_Eisu_toggle       = 0x01001130   ,
		Key_Hangul            = 0x01001131   ,
		Key_Hangul_Start      = 0x01001132   ,
		Key_Hangul_End        = 0x01001133   ,
		Key_Hangul_Hanja      = 0x01001134   ,
		Key_Hangul_Jamo       = 0x01001135   ,
		Key_Hangul_Romaja     = 0x01001136   ,
		Key_Hangul_Jeonja     = 0x01001138   ,
		Key_Hangul_Banja      = 0x01001139   ,
		Key_Hangul_PreHanja   = 0x0100113a   ,
		Key_Hangul_PostHanja  = 0x0100113b   ,
		Key_Hangul_Special    = 0x0100113f   ,
		Key_Dead_Grave        = 0x01001250   ,
		Key_Dead_Acute        = 0x01001251   ,
		Key_Dead_Circumflex   = 0x01001252   ,
		Key_Dead_Tilde        = 0x01001253   ,
		Key_Dead_Macron       = 0x01001254   ,
		Key_Dead_Breve        = 0x01001255   ,
		Key_Dead_Abovedot     = 0x01001256   ,
		Key_Dead_Diaeresis    = 0x01001257   ,
		Key_Dead_Abovering    = 0x01001258   ,
		Key_Dead_Doubleacute  = 0x01001259   ,
		Key_Dead_Caron        = 0x0100125a   ,
		Key_Dead_Cedilla      = 0x0100125b   ,
		Key_Dead_Ogonek       = 0x0100125c   ,
		Key_Dead_Iota         = 0x0100125d   ,
		Key_Dead_Voiced_Sound = 0x0100125e   ,
		Key_Dead_Semivoiced_Sound = 0x0100125f   ,
		Key_Dead_Belowdot     = 0x01001260   ,
		Key_Dead_Hook         = 0x01001261   ,
		Key_Dead_Horn         = 0x01001262   ,
		Key_Back              = 0x01000061   ,
		Key_Forward           = 0x01000062   ,
		Key_Stop              = 0x01000063   ,
		Key_Refresh           = 0x01000064   ,
		Key_VolumeDown        = 0x01000070   ,
		Key_VolumeMute        = 0x01000071   ,
		Key_VolumeUp          = 0x01000072   ,
		Key_BassBoost         = 0x01000073   ,
		Key_BassUp            = 0x01000074   ,
		Key_BassDown          = 0x01000075   ,
		Key_TrebleUp          = 0x01000076   ,
		Key_TrebleDown        = 0x01000077   ,
		Key_MediaPlay         = 0x01000080   ,
		Key_MediaStop         = 0x01000081   ,
		Key_MediaPrevious     = 0x01000082   ,
		Key_MediaNext         = 0x01000083   ,
		Key_MediaRecord       = 0x01000084   ,
		Key_HomePage          = 0x01000090   ,
		Key_Favorites         = 0x01000091   ,
		Key_Search            = 0x01000092   ,
		Key_Standby           = 0x01000093   ,
		Key_OpenUrl           = 0x01000094   ,
		Key_LaunchMail        = 0x010000a0   ,
		Key_LaunchMedia       = 0x010000a1   ,
		Key_Launch0           = 0x010000a2   ,
		Key_Launch1           = 0x010000a3   ,
		Key_Launch2           = 0x010000a4   ,
		Key_Launch3           = 0x010000a5   ,
		Key_Launch4           = 0x010000a6   ,
		Key_Launch5           = 0x010000a7   ,
		Key_Launch6           = 0x010000a8   ,
		Key_Launch7           = 0x010000a9   ,
		Key_Launch8           = 0x010000aa   ,
		Key_Launch9           = 0x010000ab   ,
		Key_LaunchA           = 0x010000ac   ,
		Key_LaunchB           = 0x010000ad   ,
		Key_LaunchC           = 0x010000ae   ,
		Key_LaunchD           = 0x010000af   ,
		Key_LaunchE           = 0x010000b0   ,
		Key_LaunchF           = 0x010000b1   ,
		Key_MonBrightnessUp   = 0x010000b2   ,
		Key_MonBrightnessDown = 0x010000b3   ,
		Key_KeyboardLightOnOff    = 0x010000b4   ,
		Key_KeyboardBrightnessUp  = 0x010000b5   ,
		Key_KeyboardBrightnessDown= 0x010000b6   ,
		Key_PowerOff          = 0x010000b7   ,
		Key_WakeUp            = 0x010000b8   ,
		Key_Eject             = 0x010000b9   ,
		Key_ScreenSaver       = 0x010000ba   ,
		Key_WWW               = 0x010000bb   ,
		Key_Memo              = 0x010000bc   ,
		Key_LightBulb         = 0x010000bd   ,
		Key_Shop              = 0x010000be   ,
		Key_History           = 0x010000bf   ,
		Key_AddFavorite       = 0x010000c0   ,
		Key_HotLinks          = 0x010000c1   ,
		Key_BrightnessAdjust  = 0x010000c2   ,
		Key_Finance           = 0x010000c3   ,
		Key_Community         = 0x010000c4   ,
		Key_AudioRewind       = 0x010000c5   ,
		Key_BackForward       = 0x010000c6   ,
		Key_ApplicationLeft   = 0x010000c7   ,
		Key_ApplicationRight  = 0x010000c8   ,
		Key_Book              = 0x010000c9   ,
		Key_CD                = 0x010000ca   ,
		Key_Calculator        = 0x010000cb   ,
		Key_ToDoList          = 0x010000cc   ,
		Key_ClearGrab         = 0x010000cd   ,
		Key_Close             = 0x010000ce   ,
		Key_Copy              = 0x010000cf   ,
		Key_Cut               = 0x010000d0   ,
		Key_Display           = 0x010000d1   ,
		Key_DOS               = 0x010000d2   ,
		Key_Documents         = 0x010000d3   ,
		Key_Excel             = 0x010000d4   ,
		Key_Explorer          = 0x010000d5,
		Key_Game              = 0x010000d6   ,
		Key_Go                = 0x010000d7   ,
		Key_iTouch            = 0x010000d8   ,
		Key_LogOff            = 0x010000d9   ,
		Key_Market            = 0x010000da   ,
		Key_Meeting           = 0x010000db   ,
		Key_MenuKB            = 0x010000dc   ,
		Key_MenuPB            = 0x010000dd   ,
		Key_MySites           = 0x010000de   ,
		Key_News              = 0x010000df   ,
		Key_OfficeHome        = 0x010000e0   ,
		Key_Option            = 0x010000e1   ,
		Key_Paste             = 0x010000e2   ,
		Key_Phone             = 0x010000e3   ,
		Key_Calendar          = 0x010000e4   ,
		Key_Reply             = 0x010000e5   ,
		Key_Reload            = 0x010000e6   ,
		Key_RotateWindows     = 0x010000e7   ,
		Key_RotationPB        = 0x010000e8   ,
		Key_RotationKB        = 0x010000e9   ,
		Key_Save              = 0x010000ea   ,
		Key_Send              = 0x010000eb   ,
		Key_Spell             = 0x010000ec   ,
		Key_SplitScreen       = 0x010000ed   ,
		Key_Support           = 0x010000ee   ,
		Key_TaskPane          = 0x010000ef   ,
		Key_Terminal          = 0x010000f0   ,
		Key_Tools             = 0x010000f1   ,
		Key_Travel            = 0x010000f2   ,
		Key_Video             = 0x010000f3   ,
		Key_Word              = 0x010000f4   ,
		Key_Xfer              = 0x010000f5   ,
		Key_ZoomIn            = 0x010000f6   ,
		Key_ZoomOut           = 0x010000f7   ,
		Key_Away              = 0x010000f8   ,
		Key_Messenger         = 0x010000f9   ,
		Key_WebCam            = 0x010000fa   ,
		Key_MailForward       = 0x010000fb   ,
		Key_Pictures          = 0x010000fc   ,
		Key_Music             = 0x010000fd   ,
		Key_Battery           = 0x010000fe   ,
		Key_Bluetooth         = 0x010000ff   ,
		Key_WLAN              = 0x01000100   ,
		Key_UWB               = 0x01000101   ,
		Key_AudioForward      = 0x01000102   ,
		Key_AudioRepeat       = 0x01000103   ,
		Key_AudioRandomPlay   = 0x01000104   ,
		Key_Subtitle          = 0x01000105   ,
		Key_AudioCycleTrack   = 0x01000106   ,
		Key_Time              = 0x01000107   ,
		Key_Hibernate         = 0x01000108   ,
		Key_View              = 0x01000109   ,
		Key_TopMenu           = 0x0100010a   ,
		Key_PowerDown         = 0x0100010b   ,
		Key_Suspend           = 0x0100010c   ,
		Key_ContrastAdjust    = 0x0100010d   ,
		Key_MediaLast         = 0x0100ffff   ,
		Key_unknown           = 0x01ffffff   ,
		Key_Call              = 0x01100004   ,
		Key_Context1          = 0x01100000   ,
		Key_Context2          = 0x01100001   ,
		Key_Context3          = 0x01100002   ,
		Key_Context4          = 0x01100003   ,
		Key_Flip              = 0x01100006   ,
		Key_Hangup            = 0x01100005   ,
		Key_No                = 0x01010002   ,
		Key_Select            = 0x01010000   ,
		Key_Yes               = 0x01010001   ,
		Key_Execute           = 0x01020003   ,
		Key_Printer           = 0x01020002   ,
		Key_Play              = 0x01020005   ,
		Key_Sleep             = 0x01020004   ,
		Key_Zoom              = 0x01020006   ,
		Key_Cancel            = 0x01020001,
	};

	class KeyEvent {
	public:
		KeyEvent(int code);
		bool isChar();
		wchar_t tochar();
		int keycode();
	private:
		int code;
	};
}
