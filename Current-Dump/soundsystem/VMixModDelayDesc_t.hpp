#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixModDelayDesc_t {
			 uintptr_t m_feedbackFilter = 0x0; // VMixFilterDesc_t
			 uintptr_t m_bPhaseInvert = 0x10; // bool
			 uintptr_t m_flGlideTime = 0x14; // float32
			 uintptr_t m_flDelay = 0x18; // float32
			 uintptr_t m_flOutputGain = 0x1c; // float32
			 uintptr_t m_flFeedbackGain = 0x20; // float32
			 uintptr_t m_flModRate = 0x24; // float32
			 uintptr_t m_flModDepth = 0x28; // float32
			 uintptr_t m_bApplyAntialiasing = 0x2c; // bool
		}
	}
}
