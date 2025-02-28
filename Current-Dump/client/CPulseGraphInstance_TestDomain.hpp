#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulseGraphInstance_TestDomain {
			 uintptr_t m_bIsRunningUnitTests = 0xf8;
			 uintptr_t m_bExplicitTimeStepping = 0xf9;
			 uintptr_t m_bExpectingToDestroyWithYieldedCursors = 0xfa;
			 uintptr_t m_nNextValidateIndex = 0xfc;
			 uintptr_t m_Tracepoints = 0x100;
			 uintptr_t m_bTestYesOrNoPath = 0x118;
		}
	}
}
