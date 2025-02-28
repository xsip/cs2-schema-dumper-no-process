#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CFists {
			 uintptr_t m_bPlayingUninterruptableAct = 0xf70;
			 uintptr_t m_nUninterruptableActivity = 0xf74;
			 uintptr_t m_bRestorePrevWep = 0xf78;
			 uintptr_t m_hWeaponBeforePrevious = 0xf7c;
			 uintptr_t m_hWeaponPrevious = 0xf80;
			 uintptr_t m_bDelayedHardPunchIncoming = 0xf84;
			 uintptr_t m_bDestroyAfterTaunt = 0xf85;
		}
	}
}
