#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixPlateverbDesc_t {
			 uintptr_t m_flPrefilter = 0x0; // float32
			 uintptr_t m_flInputDiffusion1 = 0x4; // float32
			 uintptr_t m_flInputDiffusion2 = 0x8; // float32
			 uintptr_t m_flDecay = 0xc; // float32
			 uintptr_t m_flDamp = 0x10; // float32
			 uintptr_t m_flFeedbackDiffusion1 = 0x14; // float32
			 uintptr_t m_flFeedbackDiffusion2 = 0x18; // float32
		}
	}
}
