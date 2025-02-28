#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVoiceContainerEnvelopeAnalyzer {
			 uintptr_t m_mode = 0x50; // EMode_t
			 uintptr_t m_nSamples = 0x54; // int32
			 uintptr_t m_flThreshold = 0x58; // float32
		}
	}
}
