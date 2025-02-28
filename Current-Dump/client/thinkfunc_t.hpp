#include <Windows.h>


namespace xsip {
	namespace client {
		namespace thinkfunc_t {
			 uintptr_t m_hFn = 0x8; // HSCRIPT
			 uintptr_t m_nContext = 0x10; // CUtlStringToken
			 uintptr_t m_nNextThinkTick = 0x14; // GameTick_t
			 uintptr_t m_nLastThinkTick = 0x18; // GameTick_t
		}
	}
}
