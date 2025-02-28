#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CLogicRelay {
			 uintptr_t m_OnTrigger = 0x4e0; // CEntityIOOutput
			 uintptr_t m_OnSpawn = 0x508; // CEntityIOOutput
			 uintptr_t m_bDisabled = 0x530; // bool
			 uintptr_t m_bWaitForRefire = 0x531; // bool
			 uintptr_t m_bTriggerOnce = 0x532; // bool
			 uintptr_t m_bFastRetrigger = 0x533; // bool
			 uintptr_t m_bPassthoughCaller = 0x534; // bool
		}
	}
}
