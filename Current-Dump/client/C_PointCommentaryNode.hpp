#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PointCommentaryNode {
			 uintptr_t m_bActive = 0xf90;
			 uintptr_t m_bWasActive = 0xf91;
			 uintptr_t m_flEndTime = 0xf94;
			 uintptr_t m_flStartTime = 0xf98;
			 uintptr_t m_flStartTimeInCommentary = 0xf9c;
			 uintptr_t m_iszCommentaryFile = 0xfa0;
			 uintptr_t m_iszTitle = 0xfa8;
			 uintptr_t m_iszSpeakers = 0xfb0;
			 uintptr_t m_iNodeNumber = 0xfb8;
			 uintptr_t m_iNodeNumberMax = 0xfbc;
			 uintptr_t m_bListenedTo = 0xfc0;
			 uintptr_t m_hViewPosition = 0xfd0;
			 uintptr_t m_bRestartAfterRestore = 0xfd4;
		}
	}
}
