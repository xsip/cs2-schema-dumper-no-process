#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTimerEntity {
			 uintptr_t m_OnTimer = 0x4e0; // CEntityIOOutput
			 uintptr_t m_OnTimerHigh = 0x508; // CEntityIOOutput
			 uintptr_t m_OnTimerLow = 0x530; // CEntityIOOutput
			 uintptr_t m_iDisabled = 0x558; // int32
			 uintptr_t m_flInitialDelay = 0x55c; // float32
			 uintptr_t m_flRefireTime = 0x560; // float32
			 uintptr_t m_bUpDownState = 0x564; // bool
			 uintptr_t m_iUseRandomTime = 0x568; // int32
			 uintptr_t m_bPauseAfterFiring = 0x56c; // bool
			 uintptr_t m_flLowerRandomBound = 0x570; // float32
			 uintptr_t m_flUpperRandomBound = 0x574; // float32
			 uintptr_t m_flRemainingTime = 0x578; // float32
			 uintptr_t m_bPaused = 0x57c; // bool
		}
	}
}
