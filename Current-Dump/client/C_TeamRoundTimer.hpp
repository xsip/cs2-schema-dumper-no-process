#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_TeamRoundTimer {
			 uintptr_t m_bTimerPaused = 0x568;
			 uintptr_t m_flTimeRemaining = 0x56c;
			 uintptr_t m_flTimerEndTime = 0x570;
			 uintptr_t m_bIsDisabled = 0x574;
			 uintptr_t m_bShowInHUD = 0x575;
			 uintptr_t m_nTimerLength = 0x578;
			 uintptr_t m_nTimerInitialLength = 0x57c;
			 uintptr_t m_nTimerMaxLength = 0x580;
			 uintptr_t m_bAutoCountdown = 0x584;
			 uintptr_t m_nSetupTimeLength = 0x588;
			 uintptr_t m_nState = 0x58c;
			 uintptr_t m_bStartPaused = 0x590;
			 uintptr_t m_bInCaptureWatchState = 0x591;
			 uintptr_t m_flTotalTime = 0x594;
			 uintptr_t m_bStopWatchTimer = 0x598;
			 uintptr_t m_bFireFinished = 0x599;
			 uintptr_t m_bFire5MinRemain = 0x59a;
			 uintptr_t m_bFire4MinRemain = 0x59b;
			 uintptr_t m_bFire3MinRemain = 0x59c;
			 uintptr_t m_bFire2MinRemain = 0x59d;
			 uintptr_t m_bFire1MinRemain = 0x59e;
			 uintptr_t m_bFire30SecRemain = 0x59f;
			 uintptr_t m_bFire10SecRemain = 0x5a0;
			 uintptr_t m_bFire5SecRemain = 0x5a1;
			 uintptr_t m_bFire4SecRemain = 0x5a2;
			 uintptr_t m_bFire3SecRemain = 0x5a3;
			 uintptr_t m_bFire2SecRemain = 0x5a4;
			 uintptr_t m_bFire1SecRemain = 0x5a5;
			 uintptr_t m_nOldTimerLength = 0x5a8;
			 uintptr_t m_nOldTimerState = 0x5ac;
		}
	}
}
