#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPulseCell_TestWaitWithCursorState {
			 uintptr_t m_WakeResume = 0x48; // CPulse_ResumePoint
			 uintptr_t m_WakeCancel = 0x78; // CPulse_ResumePoint
			 uintptr_t m_WakeFail = 0xa8; // CPulse_ResumePoint
		}
	}
}
