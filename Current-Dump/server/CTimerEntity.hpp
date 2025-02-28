#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTimerEntity {
			 uintptr_t m_OnTimer = 0x4e0;
			 uintptr_t m_OnTimerHigh = 0x508;
			 uintptr_t m_OnTimerLow = 0x530;
			 uintptr_t m_iDisabled = 0x558;
			 uintptr_t m_flInitialDelay = 0x55c;
			 uintptr_t m_flRefireTime = 0x560;
			 uintptr_t m_bUpDownState = 0x564;
			 uintptr_t m_iUseRandomTime = 0x568;
			 uintptr_t m_bPauseAfterFiring = 0x56c;
			 uintptr_t m_flLowerRandomBound = 0x570;
			 uintptr_t m_flUpperRandomBound = 0x574;
			 uintptr_t m_flRemainingTime = 0x578;
			 uintptr_t m_bPaused = 0x57c;
		}
	}
}
