#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CCSPlayer_WeaponServices {
			 uintptr_t m_flNextAttack = 0xb8; // GameTime_t
			 uintptr_t m_bIsLookingAtWeapon = 0xbc; // bool
			 uintptr_t m_bIsHoldingLookAtWeapon = 0xbd; // bool
			 uintptr_t m_nOldShootPositionHistoryCount = 0xc0; // uint32
			 uintptr_t m_nOldInputHistoryCount = 0x458; // uint32
		}
	}
}
