#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVSound {
			 uintptr_t m_nRate = 0x0; // int32
			 uintptr_t m_nFormat = 0x4; // CVSoundFormat_t
			 uintptr_t m_nChannels = 0x8; // uint32
			 uintptr_t m_nLoopStart = 0xc; // int32
			 uintptr_t m_nSampleCount = 0x10; // uint32
			 uintptr_t m_flDuration = 0x14; // float32
			 uintptr_t m_Sentences = 0x18; // CUtlVector< CAudioSentence >
			 uintptr_t m_nStreamingSize = 0x30; // uint32
			 uintptr_t m_nSeekTable = 0x38; // CUtlVector< int32 >
			 uintptr_t m_nLoopEnd = 0x50; // int32
			 uintptr_t m_encodedHeader = 0x58; // CUtlBinaryBlock
		}
	}
}
