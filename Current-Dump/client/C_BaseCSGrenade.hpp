#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BaseCSGrenade {
			 uintptr_t m_bClientPredictDelete = 0x1b20;
			 uintptr_t m_bRedraw = 0x1b21;
			 uintptr_t m_bIsHeldByPlayer = 0x1b22;
			 uintptr_t m_bPinPulled = 0x1b23;
			 uintptr_t m_bJumpThrow = 0x1b24;
			 uintptr_t m_bThrowAnimating = 0x1b25;
			 uintptr_t m_fThrowTime = 0x1b28;
			 uintptr_t m_flThrowStrength = 0x1b2c;
			 uintptr_t m_flThrowStrengthApproach = 0x1b30;
			 uintptr_t m_fDropTime = 0x1b34;
			 uintptr_t m_fPinPullTime = 0x1b38;
			 uintptr_t m_bJustPulledPin = 0x1b3c;
			 uintptr_t m_nNextHoldTick = 0x1b40;
			 uintptr_t m_flNextHoldFrac = 0x1b44;
			 uintptr_t m_hSwitchToWeaponAfterThrow = 0x1b48;
		}
	}
}
