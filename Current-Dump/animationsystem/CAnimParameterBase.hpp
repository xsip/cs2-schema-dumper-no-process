#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimParameterBase {
			 uintptr_t m_name = 0x18; // CGlobalSymbol
			 uintptr_t m_sComment = 0x20; // CUtlString
			 uintptr_t m_group = 0x28; // CUtlString
			 uintptr_t m_id = 0x30; // AnimParamID
			 uintptr_t m_componentName = 0x48; // CUtlString
			 uintptr_t m_bNetworkingRequested = 0x68; // bool
			 uintptr_t m_bIsReferenced = 0x69; // bool
		}
	}
}
