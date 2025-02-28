#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPulseCell_Outflow_ListenForEntityOutput {
			 uintptr_t m_OnFired = 0x48; // SignatureOutflow_Resume
			 uintptr_t m_OnCanceled = 0x78; // CPulse_ResumePoint
			 uintptr_t m_strEntityOutput = 0xa8; // CGlobalSymbol
			 uintptr_t m_strEntityOutputParam = 0xb0; // CUtlString
			 uintptr_t m_bListenUntilCanceled = 0xb8; // bool
		}
	}
}
