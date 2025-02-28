#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CStateUpdateData {
			 uintptr_t m_name = 0x0; // CUtlString
			 uintptr_t m_hScript = 0x8; // AnimScriptHandle
			 uintptr_t m_transitionIndices = 0x10; // CUtlVector< int32 >
			 uintptr_t m_actions = 0x28; // CUtlVector< CStateActionUpdater >
			 uintptr_t m_stateID = 0x40; // AnimStateID
			 uintptr_t m_bIsStartState = 0x0; // bitfield:1
			 uintptr_t m_bIsEndState = 0x0; // bitfield:1
			 uintptr_t m_bIsPassthrough = 0x0; // bitfield:1
		}
	}
}
