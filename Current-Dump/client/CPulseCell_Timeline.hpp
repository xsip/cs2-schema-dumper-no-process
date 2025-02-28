#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulseCell_Timeline {
			 uintptr_t m_TimelineEvents = 0x48; // CUtlVector< CPulseCell_Timeline::TimelineEvent_t >
			 uintptr_t m_bWaitForChildOutflows = 0x60; // bool
			 uintptr_t m_OnFinished = 0x68; // CPulse_ResumePoint
			 uintptr_t m_OnCanceled = 0x98; // CPulse_ResumePoint
		}
	}
}
