#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayer_WeaponServices {
			 uintptr_t m_flNextAttack = 0xa8;
			 uintptr_t m_bIsLookingAtWeapon = 0xac;
			 uintptr_t m_bIsHoldingLookAtWeapon = 0xad;
			 uintptr_t m_hSavedWeapon = 0xb0;
			 uintptr_t m_nTimeToMelee = 0xb4;
			 uintptr_t m_nTimeToSecondary = 0xb8;
			 uintptr_t m_nTimeToPrimary = 0xbc;
			 uintptr_t m_nTimeToSniperRifle = 0xc0;
			 uintptr_t m_bIsBeingGivenItem = 0xc4;
			 uintptr_t m_bIsPickingUpItemWithUse = 0xc5;
			 uintptr_t m_bPickedUpWeapon = 0xc6;
			 uintptr_t m_bDisableAutoDeploy = 0xc7;
			 uintptr_t m_bIsPickingUpGroundWeapon = 0xc8;
			 uintptr_t m_nOldShootPositionHistoryCount = 0xcc;
			 uintptr_t m_nOldInputHistoryCount = 0x468;
		}
	}
}
