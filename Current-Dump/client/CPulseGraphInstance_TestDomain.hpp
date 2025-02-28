#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulseGraphInstance_TestDomain {
			 uintptr_t m_bIsRunningUnitTests = 0xf8; // bool
			 uintptr_t m_bExplicitTimeStepping = 0xf9; // bool
			 uintptr_t m_bExpectingToDestroyWithYieldedCursors = 0xfa; // bool
			 uintptr_t m_nNextValidateIndex = 0xfc; // int32
			 uintptr_t m_Tracepoints = 0x100; // CUtlVector< CUtlString >
			 uintptr_t m_bTestYesOrNoPath = 0x118; // bool
		}
	}
}
