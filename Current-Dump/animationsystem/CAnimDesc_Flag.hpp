#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimDesc_Flag {
			 uintptr_t m_bLooping = 0x0; // bool
			 uintptr_t m_bAllZeros = 0x1; // bool
			 uintptr_t m_bHidden = 0x2; // bool
			 uintptr_t m_bDelta = 0x3; // bool
			 uintptr_t m_bLegacyWorldspace = 0x4; // bool
			 uintptr_t m_bModelDoc = 0x5; // bool
			 uintptr_t m_bImplicitSeqIgnoreDelta = 0x6; // bool
			 uintptr_t m_bAnimGraphAdditive = 0x7; // bool
		}
	}
}
