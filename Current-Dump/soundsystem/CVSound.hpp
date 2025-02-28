#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVSound {
			 uintptr_t m_nRate = 0x0;
			 uintptr_t m_nFormat = 0x4;
			 uintptr_t m_nChannels = 0x8;
			 uintptr_t m_nLoopStart = 0xc;
			 uintptr_t m_nSampleCount = 0x10;
			 uintptr_t m_flDuration = 0x14;
			 uintptr_t m_Sentences = 0x18;
			 uintptr_t m_nStreamingSize = 0x30;
			 uintptr_t m_nSeekTable = 0x38;
			 uintptr_t m_nLoopEnd = 0x50;
			 uintptr_t m_encodedHeader = 0x58;
		}
	}
}
