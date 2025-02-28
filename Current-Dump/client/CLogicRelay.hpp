#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CLogicRelay {
			 uintptr_t m_OnTrigger = 0x568; // CEntityIOOutput
			 uintptr_t m_OnSpawn = 0x590; // CEntityIOOutput
			 uintptr_t m_bDisabled = 0x5b8; // bool
			 uintptr_t m_bWaitForRefire = 0x5b9; // bool
			 uintptr_t m_bTriggerOnce = 0x5ba; // bool
			 uintptr_t m_bFastRetrigger = 0x5bb; // bool
			 uintptr_t m_bPassthoughCaller = 0x5bc; // bool
		}
	}
}
