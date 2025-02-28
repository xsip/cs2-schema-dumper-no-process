#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimData {
			 uintptr_t m_name = 0x10; // CBufferString
			 uintptr_t m_animArray = 0x20; // CUtlVector< CAnimDesc >
			 uintptr_t m_decoderArray = 0x38; // CUtlVector< CAnimDecoder >
			 uintptr_t m_nMaxUniqueFrameIndex = 0x50; // int32
			 uintptr_t m_segmentArray = 0x58; // CUtlVector< CAnimFrameSegment >
		}
	}
}
