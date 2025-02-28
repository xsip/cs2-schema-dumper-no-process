#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CLogicGameEventListener {
			 uintptr_t m_OnEventFired = 0x4f0; // CEntityIOOutput
			 uintptr_t m_iszGameEventName = 0x518; // CUtlSymbolLarge
			 uintptr_t m_iszGameEventItem = 0x520; // CUtlSymbolLarge
			 uintptr_t m_bEnabled = 0x528; // bool
			 uintptr_t m_bStartDisabled = 0x529; // bool
		}
	}
}
