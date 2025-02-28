#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CLogicBranch {
			 uintptr_t m_bInValue = 0x4e0; // bool
			 uintptr_t m_Listeners = 0x4e8; // CUtlVector< CHandle< CBaseEntity > >
			 uintptr_t m_OnTrue = 0x500; // CEntityIOOutput
			 uintptr_t m_OnFalse = 0x528; // CEntityIOOutput
		}
	}
}
