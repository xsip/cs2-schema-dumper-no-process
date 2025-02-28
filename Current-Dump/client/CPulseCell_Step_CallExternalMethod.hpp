#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulseCell_Step_CallExternalMethod {
			 uintptr_t m_MethodName = 0x48; // CUtlSymbolLarge
			 uintptr_t m_GameBlackboard = 0x50; // CUtlSymbolLarge
			 uintptr_t m_ExpectedArgs = 0x58; // CUtlLeanVector< CPulseRuntimeMethodArg >
			 uintptr_t m_nAsyncCallMode = 0x68; // PulseMethodCallMode_t
			 uintptr_t m_OnFinished = 0x70; // CPulse_ResumePoint
		}
	}
}
