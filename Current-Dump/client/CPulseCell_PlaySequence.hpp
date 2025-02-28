#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulseCell_PlaySequence {
			 uintptr_t m_SequenceName = 0x48; // CUtlString
			 uintptr_t m_PulseAnimEvents = 0x50; // PulseNodeDynamicOutflows_t
			 uintptr_t m_OnFinished = 0x68; // CPulse_ResumePoint
			 uintptr_t m_OnCanceled = 0x98; // CPulse_ResumePoint
		}
	}
}
