#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CLogicPlayerProxy {
			 uintptr_t m_hPlayer = 0x4e0; // CHandle< CBaseEntity >
			 uintptr_t m_PlayerHasAmmo = 0x4e8; // CEntityIOOutput
			 uintptr_t m_PlayerHasNoAmmo = 0x510; // CEntityIOOutput
			 uintptr_t m_PlayerDied = 0x538; // CEntityIOOutput
			 uintptr_t m_RequestedPlayerHealth = 0x560; // CEntityOutputTemplate< int32 >
		}
	}
}
