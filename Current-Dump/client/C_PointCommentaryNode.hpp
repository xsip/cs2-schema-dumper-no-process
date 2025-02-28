#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PointCommentaryNode {
			 uintptr_t m_bActive = 0xf90; // bool
			 uintptr_t m_bWasActive = 0xf91; // bool
			 uintptr_t m_flEndTime = 0xf94; // GameTime_t
			 uintptr_t m_flStartTime = 0xf98; // GameTime_t
			 uintptr_t m_flStartTimeInCommentary = 0xf9c; // float32
			 uintptr_t m_iszCommentaryFile = 0xfa0; // CUtlSymbolLarge
			 uintptr_t m_iszTitle = 0xfa8; // CUtlSymbolLarge
			 uintptr_t m_iszSpeakers = 0xfb0; // CUtlSymbolLarge
			 uintptr_t m_iNodeNumber = 0xfb8; // int32
			 uintptr_t m_iNodeNumberMax = 0xfbc; // int32
			 uintptr_t m_bListenedTo = 0xfc0; // bool
			 uintptr_t m_hViewPosition = 0xfd0; // CHandle< C_BaseEntity >
			 uintptr_t m_bRestartAfterRestore = 0xfd4; // bool
		}
	}
}
