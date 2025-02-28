#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CCSPlayer_WeaponServices {
			 uintptr_t m_flNextAttack = 0xb8;
			 uintptr_t m_bIsLookingAtWeapon = 0xbc;
			 uintptr_t m_bIsHoldingLookAtWeapon = 0xbd;
			 uintptr_t m_nOldShootPositionHistoryCount = 0xc0;
			 uintptr_t m_nOldInputHistoryCount = 0x458;
		}
	}
}
