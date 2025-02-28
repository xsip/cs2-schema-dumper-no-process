#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMultiSource {
			 uintptr_t m_rgEntities = 0x4e0; // CHandle< CBaseEntity >[32]
			 uintptr_t m_rgTriggered = 0x560; // int32[32]
			 uintptr_t m_OnTrigger = 0x5e0; // CEntityIOOutput
			 uintptr_t m_iTotal = 0x608; // int32
			 uintptr_t m_globalstate = 0x610; // CUtlSymbolLarge
		}
	}
}
