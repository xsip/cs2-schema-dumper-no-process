#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CCSPlayer_ActionTrackingServices {
			 uintptr_t m_hLastWeaponBeforeC4AutoSwitch = 0x40;
			 uintptr_t m_bIsRescuing = 0x44;
			 uintptr_t m_weaponPurchasesThisMatch = 0x48;
			 uintptr_t m_weaponPurchasesThisRound = 0xa0;
		}
	}
}
