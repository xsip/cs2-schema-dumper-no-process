#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSensorGrenadeProjectile {
			 uintptr_t m_fExpireTime = 0xb50; // GameTime_t
			 uintptr_t m_fNextDetectPlayerSound = 0xb54; // GameTime_t
			 uintptr_t m_hDisplayGrenade = 0xb58; // CHandle< CBaseEntity >
		}
	}
}
