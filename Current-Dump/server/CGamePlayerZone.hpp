#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGamePlayerZone {
			 uintptr_t m_OnPlayerInZone = 0x798; // CEntityIOOutput
			 uintptr_t m_OnPlayerOutZone = 0x7c0; // CEntityIOOutput
			 uintptr_t m_PlayersInCount = 0x7e8; // CEntityOutputTemplate< int32 >
			 uintptr_t m_PlayersOutCount = 0x810; // CEntityOutputTemplate< int32 >
		}
	}
}
