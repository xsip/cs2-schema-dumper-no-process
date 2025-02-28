#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMathCounter {
			 uintptr_t m_flMin = 0x4e0;
			 uintptr_t m_flMax = 0x4e4;
			 uintptr_t m_bHitMin = 0x4e8;
			 uintptr_t m_bHitMax = 0x4e9;
			 uintptr_t m_bDisabled = 0x4ea;
			 uintptr_t m_OutValue = 0x4f0;
			 uintptr_t m_OnGetValue = 0x518;
			 uintptr_t m_OnHitMin = 0x540;
			 uintptr_t m_OnHitMax = 0x568;
			 uintptr_t m_OnChangedFromMin = 0x590;
			 uintptr_t m_OnChangedFromMax = 0x5b8;
		}
	}
}
