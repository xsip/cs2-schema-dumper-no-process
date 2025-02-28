#include <Windows.h>


namespace xsip {
	namespace client {
		namespace EntComponentInfo_t {
			 uintptr_t m_pName = 0x0; // char*
			 uintptr_t m_pCPPClassname = 0x8; // char*
			 uintptr_t m_pNetworkDataReferencedDescription = 0x10; // char*
			 uintptr_t m_pNetworkDataReferencedPtrPropDescription = 0x18; // char*
			 uintptr_t m_nRuntimeIndex = 0x20; // int32
			 uintptr_t m_nFlags = 0x24; // uint32
			 uintptr_t m_pBaseClassComponentHelper = 0x60; // CEntityComponentHelper*
		}
	}
}
