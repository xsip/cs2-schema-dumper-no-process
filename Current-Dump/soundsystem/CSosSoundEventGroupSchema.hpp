#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CSosSoundEventGroupSchema {
			 uintptr_t m_name = 0x0; // CUtlString
			 uintptr_t m_nType = 0x8; // SosGroupType_t
			 uintptr_t m_bIsBlocking = 0xc; // bool
			 uintptr_t m_nBlockMaxCount = 0x10; // int32
			 uintptr_t m_bInvertMatch = 0x14; // bool
			 uintptr_t m_matchPattern = 0x18; // CSosGroupMatchPattern
			 uintptr_t m_branchPattern = 0x48; // CSosGroupBranchPattern
			 uintptr_t m_flLifeSpanTime = 0x58; // float32
			 uintptr_t m_vActions = 0xc0; // CSosGroupActionSchema*[4]
		}
	}
}
