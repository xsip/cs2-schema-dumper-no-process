#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayer_UseServices {
			 uintptr_t m_hLastKnownUseEntity = 0x40; // CHandle< CBaseEntity >
			 uintptr_t m_flLastUseTimeStamp = 0x44; // GameTime_t
			 uintptr_t m_flTimeLastUsedWindow = 0x48; // GameTime_t
		}
	}
}
