#include <Windows.h>


namespace xsip {
	namespace pulse_system {
		namespace CPulseCell_WaitForCursorsWithTagBase {
			 uintptr_t m_nCursorsAllowedToWait = 0x48; // int32
			 uintptr_t m_WaitComplete = 0x50; // CPulse_ResumePoint
		}
	}
}
