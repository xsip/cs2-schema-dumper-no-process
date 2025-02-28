#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CSeqAutoLayer {
			 uintptr_t m_nLocalReference = 0x0; // int16
			 uintptr_t m_nLocalPose = 0x2; // int16
			 uintptr_t m_flags = 0x4; // CSeqAutoLayerFlag
			 uintptr_t m_start = 0xc; // float32
			 uintptr_t m_peak = 0x10; // float32
			 uintptr_t m_tail = 0x14; // float32
			 uintptr_t m_end = 0x18; // float32
		}
	}
}
