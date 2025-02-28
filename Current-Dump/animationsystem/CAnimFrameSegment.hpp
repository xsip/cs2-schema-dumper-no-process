#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimFrameSegment {
			 uintptr_t m_nUniqueFrameIndex = 0x0; // int32
			 uintptr_t m_nLocalElementMasks = 0x4; // uint32
			 uintptr_t m_nLocalChannel = 0x8; // int32
			 uintptr_t m_container = 0x10; // CUtlBinaryBlock
		}
	}
}
