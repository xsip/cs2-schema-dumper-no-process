#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace ScriptInfo_t {
			 uintptr_t m_code = 0x0; // CUtlString
			 uintptr_t m_paramsModified = 0x8; // CUtlVector< CAnimParamHandle >
			 uintptr_t m_proxyReadParams = 0x20; // CUtlVector< int32 >
			 uintptr_t m_proxyWriteParams = 0x38; // CUtlVector< int32 >
			 uintptr_t m_eScriptType = 0x50; // AnimScriptType
		}
	}
}
