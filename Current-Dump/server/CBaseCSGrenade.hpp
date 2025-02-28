#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseCSGrenade {
			 uintptr_t m_bRedraw = 0xf70;
			 uintptr_t m_bIsHeldByPlayer = 0xf71;
			 uintptr_t m_bPinPulled = 0xf72;
			 uintptr_t m_bJumpThrow = 0xf73;
			 uintptr_t m_bThrowAnimating = 0xf74;
			 uintptr_t m_fThrowTime = 0xf78;
			 uintptr_t m_flThrowStrength = 0xf7c;
			 uintptr_t m_flThrowStrengthApproach = 0xf80;
			 uintptr_t m_fDropTime = 0xf84;
			 uintptr_t m_fPinPullTime = 0xf88;
			 uintptr_t m_bJustPulledPin = 0xf8c;
			 uintptr_t m_nNextHoldTick = 0xf90;
			 uintptr_t m_flNextHoldFrac = 0xf94;
			 uintptr_t m_hSwitchToWeaponAfterThrow = 0xf98;
		}
	}
}
