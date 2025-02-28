#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseCSGrenade {
			 uintptr_t m_bRedraw = 0xf70; // bool
			 uintptr_t m_bIsHeldByPlayer = 0xf71; // bool
			 uintptr_t m_bPinPulled = 0xf72; // bool
			 uintptr_t m_bJumpThrow = 0xf73; // bool
			 uintptr_t m_bThrowAnimating = 0xf74; // bool
			 uintptr_t m_fThrowTime = 0xf78; // GameTime_t
			 uintptr_t m_flThrowStrength = 0xf7c; // float32
			 uintptr_t m_flThrowStrengthApproach = 0xf80; // float32
			 uintptr_t m_fDropTime = 0xf84; // GameTime_t
			 uintptr_t m_fPinPullTime = 0xf88; // GameTime_t
			 uintptr_t m_bJustPulledPin = 0xf8c; // bool
			 uintptr_t m_nNextHoldTick = 0xf90; // GameTick_t
			 uintptr_t m_flNextHoldFrac = 0xf94; // float32
			 uintptr_t m_hSwitchToWeaponAfterThrow = 0xf98; // CHandle< CCSWeaponBase >
		}
	}
}
