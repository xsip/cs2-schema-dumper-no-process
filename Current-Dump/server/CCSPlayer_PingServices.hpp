#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayer_PingServices {
			 uintptr_t m_flPlayerPingTokens = 0x40; // GameTime_t[5]
			 uintptr_t m_hPlayerPing = 0x54; // CHandle< CBaseEntity >
		}
	}
}
