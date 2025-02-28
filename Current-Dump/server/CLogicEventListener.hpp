#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CLogicEventListener {
			 uintptr_t m_strEventName = 0x4f0; // CUtlString
			 uintptr_t m_bIsEnabled = 0x4f8; // bool
			 uintptr_t m_nTeam = 0x4fc; // int32
			 uintptr_t m_OnEventFired = 0x500; // CEntityIOOutput
		}
	}
}
