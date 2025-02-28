#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulseCell_FireCursors {
			 uintptr_t m_Outflows = 0x48; // CUtlVector< CPulse_OutflowConnection >
			 uintptr_t m_bWaitForChildOutflows = 0x60; // bool
			 uintptr_t m_OnFinished = 0x68; // CPulse_ResumePoint
			 uintptr_t m_OnCanceled = 0x98; // CPulse_ResumePoint
		}
	}
}
