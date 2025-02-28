#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGunTarget {
			 uintptr_t m_on = 0x810; // bool
			 uintptr_t m_hTargetEnt = 0x814; // CHandle< CBaseEntity >
			 uintptr_t m_OnDeath = 0x818; // CEntityIOOutput
		}
	}
}
