#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimEncodedFrames {
			 uintptr_t m_fileName = 0x0; // CBufferString
			 uintptr_t m_nFrames = 0x10; // int32
			 uintptr_t m_nFramesPerBlock = 0x14; // int32
			 uintptr_t m_frameblockArray = 0x18; // CUtlVector< CAnimFrameBlockAnim >
			 uintptr_t m_usageDifferences = 0x30; // CAnimEncodeDifference
		}
	}
}
