#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CSosSoundEventGroupSchema {
			 uintptr_t m_name = 0x0;
			 uintptr_t m_nType = 0x8;
			 uintptr_t m_bIsBlocking = 0xc;
			 uintptr_t m_nBlockMaxCount = 0x10;
			 uintptr_t m_bInvertMatch = 0x14;
			 uintptr_t m_matchPattern = 0x18;
			 uintptr_t m_branchPattern = 0x48;
			 uintptr_t m_flLifeSpanTime = 0x58;
			 uintptr_t m_vActions = 0xc0;
		}
	}
}
