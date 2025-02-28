#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPlayer_WeaponServices {
			 uintptr_t m_hMyWeapons = 0x40; // CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > >
			 uintptr_t m_hActiveWeapon = 0x58; // CHandle< CBasePlayerWeapon >
			 uintptr_t m_hLastWeapon = 0x5c; // CHandle< CBasePlayerWeapon >
			 uintptr_t m_iAmmo = 0x60; // uint16[32]
			 uintptr_t m_bPreventWeaponPickup = 0xa0; // bool
		}
	}
}
