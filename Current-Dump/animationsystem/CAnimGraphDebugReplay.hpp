#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimGraphDebugReplay {
			 uintptr_t m_animGraphFileName = 0x40; // CUtlString
			 uintptr_t m_frameList = 0x48; // CUtlVector< CSmartPtr< CAnimReplayFrame > >
			 uintptr_t m_startIndex = 0x60; // int32
			 uintptr_t m_writeIndex = 0x64; // int32
			 uintptr_t m_frameCount = 0x68; // int32
		}
	}
}
