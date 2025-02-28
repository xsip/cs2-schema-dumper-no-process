#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayer_WeaponServices {
			 uintptr_t m_flNextAttack = 0xa8; // GameTime_t
			 uintptr_t m_bIsLookingAtWeapon = 0xac; // bool
			 uintptr_t m_bIsHoldingLookAtWeapon = 0xad; // bool
			 uintptr_t m_hSavedWeapon = 0xb0; // CHandle< CBasePlayerWeapon >
			 uintptr_t m_nTimeToMelee = 0xb4; // int32
			 uintptr_t m_nTimeToSecondary = 0xb8; // int32
			 uintptr_t m_nTimeToPrimary = 0xbc; // int32
			 uintptr_t m_nTimeToSniperRifle = 0xc0; // int32
			 uintptr_t m_bIsBeingGivenItem = 0xc4; // bool
			 uintptr_t m_bIsPickingUpItemWithUse = 0xc5; // bool
			 uintptr_t m_bPickedUpWeapon = 0xc6; // bool
			 uintptr_t m_bDisableAutoDeploy = 0xc7; // bool
			 uintptr_t m_bIsPickingUpGroundWeapon = 0xc8; // bool
			 uintptr_t m_nOldShootPositionHistoryCount = 0xcc; // uint32
			 uintptr_t m_nOldInputHistoryCount = 0x468; // uint32
		}
	}
}
