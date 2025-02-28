#include <Windows.h>


namespace xsip {
	namespace client {
		namespace FunctionInfo_t {
			 uintptr_t m_name = 0x8; // CUtlString
			 uintptr_t m_nameToken = 0x10; // CUtlStringToken
			 uintptr_t m_nParamCount = 0x14; // int32
			 uintptr_t m_nIndex = 0x18; // FuseFunctionIndex_t
			 uintptr_t m_bIsPure = 0x1a; // bool
		}
	}
}
