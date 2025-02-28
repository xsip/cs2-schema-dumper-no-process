#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CStateMachineUpdateNode {
			 uintptr_t m_stateMachine = 0x68; // CAnimStateMachineUpdater
			 uintptr_t m_stateData = 0xc0; // CUtlVector< CStateNodeStateData >
			 uintptr_t m_transitionData = 0xd8; // CUtlVector< CStateNodeTransitionData >
			 uintptr_t m_bBlockWaningTags = 0xf4; // bool
			 uintptr_t m_bLockStateWhenWaning = 0xf5; // bool
		}
	}
}
