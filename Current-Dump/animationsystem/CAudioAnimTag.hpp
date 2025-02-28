#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAudioAnimTag {
			 uintptr_t m_clipName = 0x58; // CUtlString
			 uintptr_t m_attachmentName = 0x60; // CUtlString
			 uintptr_t m_flVolume = 0x68; // float32
			 uintptr_t m_bStopWhenTagEnds = 0x6c; // bool
			 uintptr_t m_bStopWhenGraphEnds = 0x6d; // bool
			 uintptr_t m_bPlayOnServer = 0x6e; // bool
			 uintptr_t m_bPlayOnClient = 0x6f; // bool
		}
	}
}
