#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace CVoiceContainerRealtimeFMSineWave {
			 uintptr_t m_flCarrierFrequency = 0xc0; // float32
			 uintptr_t m_flModulatorFrequency = 0xc4; // float32
			 uintptr_t m_flModulatorAmount = 0xc8; // float32
		}
	}
}
