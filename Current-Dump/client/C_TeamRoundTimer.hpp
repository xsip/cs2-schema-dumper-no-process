#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_TeamRoundTimer {
			 uintptr_t m_bTimerPaused = 0x568; // bool
			 uintptr_t m_flTimeRemaining = 0x56c; // float32
			 uintptr_t m_flTimerEndTime = 0x570; // GameTime_t
			 uintptr_t m_bIsDisabled = 0x574; // bool
			 uintptr_t m_bShowInHUD = 0x575; // bool
			 uintptr_t m_nTimerLength = 0x578; // int32
			 uintptr_t m_nTimerInitialLength = 0x57c; // int32
			 uintptr_t m_nTimerMaxLength = 0x580; // int32
			 uintptr_t m_bAutoCountdown = 0x584; // bool
			 uintptr_t m_nSetupTimeLength = 0x588; // int32
			 uintptr_t m_nState = 0x58c; // int32
			 uintptr_t m_bStartPaused = 0x590; // bool
			 uintptr_t m_bInCaptureWatchState = 0x591; // bool
			 uintptr_t m_flTotalTime = 0x594; // float32
			 uintptr_t m_bStopWatchTimer = 0x598; // bool
			 uintptr_t m_bFireFinished = 0x599; // bool
			 uintptr_t m_bFire5MinRemain = 0x59a; // bool
			 uintptr_t m_bFire4MinRemain = 0x59b; // bool
			 uintptr_t m_bFire3MinRemain = 0x59c; // bool
			 uintptr_t m_bFire2MinRemain = 0x59d; // bool
			 uintptr_t m_bFire1MinRemain = 0x59e; // bool
			 uintptr_t m_bFire30SecRemain = 0x59f; // bool
			 uintptr_t m_bFire10SecRemain = 0x5a0; // bool
			 uintptr_t m_bFire5SecRemain = 0x5a1; // bool
			 uintptr_t m_bFire4SecRemain = 0x5a2; // bool
			 uintptr_t m_bFire3SecRemain = 0x5a3; // bool
			 uintptr_t m_bFire2SecRemain = 0x5a4; // bool
			 uintptr_t m_bFire1SecRemain = 0x5a5; // bool
			 uintptr_t m_nOldTimerLength = 0x5a8; // int32
			 uintptr_t m_nOldTimerState = 0x5ac; // int32
		}
	}
}
