#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CDecoyProjectile {
			 uintptr_t m_nDecoyShotTick = 0xb58; // int32
			 uintptr_t m_shotsRemaining = 0xb5c; // int32
			 uintptr_t m_fExpireTime = 0xb60; // GameTime_t
			 uintptr_t m_decoyWeaponDefIndex = 0xb70; // uint16
		}
	}
}
