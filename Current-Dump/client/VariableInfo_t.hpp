#include <Windows.h>


namespace xsip {
	namespace client {
		namespace VariableInfo_t {
			 uintptr_t m_name = 0x0; // CUtlString
			 uintptr_t m_nameToken = 0x8; // CUtlStringToken
			 uintptr_t m_nIndex = 0xc; // FuseVariableIndex_t
			 uintptr_t m_nNumComponents = 0xe; // uint8
			 uintptr_t m_eVarType = 0xf; // FuseVariableType_t
			 uintptr_t m_eAccess = 0x10; // FuseVariableAccess_t
		}
	}
}
