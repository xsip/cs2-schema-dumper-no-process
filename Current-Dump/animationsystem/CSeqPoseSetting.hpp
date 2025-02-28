#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CSeqPoseSetting {
			 uintptr_t m_sPoseParameter = 0x0; // CBufferString
			 uintptr_t m_sAttachment = 0x10; // CBufferString
			 uintptr_t m_sReferenceSequence = 0x20; // CBufferString
			 uintptr_t m_flValue = 0x30; // float32
			 uintptr_t m_bX = 0x34; // bool
			 uintptr_t m_bY = 0x35; // bool
			 uintptr_t m_bZ = 0x36; // bool
			 uintptr_t m_eType = 0x38; // int32
		}
	}
}
