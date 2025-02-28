#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPlayer_WeaponServices {
			 uintptr_t m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > >
			 uintptr_t m_hActiveWeapon = 0x58; // CHandle< C_BasePlayerWeapon >
			 uintptr_t m_hLastWeapon = 0x5c; // CHandle< C_BasePlayerWeapon >
			 uintptr_t m_iAmmo = 0x60; // uint16[32]
		}
	}
}
