#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CSosGroupActionMemberCountEnvelopeSchema {
			 uintptr_t m_nBaseCount = 0x18; // int32
			 uintptr_t m_nTargetCount = 0x1c; // int32
			 uintptr_t m_flBaseValue = 0x20; // float32
			 uintptr_t m_flTargetValue = 0x24; // float32
			 uintptr_t m_flAttack = 0x28; // float32
			 uintptr_t m_flDecay = 0x2c; // float32
			 uintptr_t m_resultVarName = 0x30; // CUtlString
			 uintptr_t m_bSaveToGroup = 0x38; // bool
		}
	}
}
