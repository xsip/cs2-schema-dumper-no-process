#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayer_ActionTrackingServices {
			 uintptr_t m_hLastWeaponBeforeC4AutoSwitch = 0x200; // CHandle< CBasePlayerWeapon >
			 uintptr_t m_bIsRescuing = 0x22c; // bool
			 uintptr_t m_weaponPurchasesThisMatch = 0x230; // WeaponPurchaseTracker_t
			 uintptr_t m_weaponPurchasesThisRound = 0x288; // WeaponPurchaseTracker_t
		}
	}
}
