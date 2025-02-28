#include <Windows.h>


namespace xsip {
	namespace client {
		namespace sndopvarlatchdata_t {
			 uintptr_t m_iszStack = 0x8; // CUtlSymbolLarge
			 uintptr_t m_iszOperator = 0x10; // CUtlSymbolLarge
			 uintptr_t m_iszOpvar = 0x18; // CUtlSymbolLarge
			 uintptr_t m_flVal = 0x20; // float32
			 uintptr_t m_vPos = 0x24; // Vector
		}
	}
}
