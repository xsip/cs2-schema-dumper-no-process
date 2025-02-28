#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFists {
			 uintptr_t m_bPlayingUninterruptableAct = 0xf70; // bool
			 uintptr_t m_nUninterruptableActivity = 0xf74; // PlayerAnimEvent_t
			 uintptr_t m_bRestorePrevWep = 0xf78; // bool
			 uintptr_t m_hWeaponBeforePrevious = 0xf7c; // CHandle< CBasePlayerWeapon >
			 uintptr_t m_hWeaponPrevious = 0xf80; // CHandle< CBasePlayerWeapon >
			 uintptr_t m_bDelayedHardPunchIncoming = 0xf84; // bool
			 uintptr_t m_bDestroyAfterTaunt = 0xf85; // bool
		}
	}
}
