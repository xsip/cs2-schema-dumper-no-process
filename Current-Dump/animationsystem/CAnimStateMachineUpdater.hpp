#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimStateMachineUpdater {
			 uintptr_t m_states = 0x8; // CUtlVector< CStateUpdateData >
			 uintptr_t m_transitions = 0x20; // CUtlVector< CTransitionUpdateData >
			 uintptr_t m_startStateIndex = 0x50; // int32
		}
	}
}
