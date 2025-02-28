#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixDelayDesc_t {
			 uintptr_t m_feedbackFilter = 0x0; // VMixFilterDesc_t
			 uintptr_t m_bEnableFilter = 0x10; // bool
			 uintptr_t m_flDelay = 0x14; // float32
			 uintptr_t m_flDirectGain = 0x18; // float32
			 uintptr_t m_flDelayGain = 0x1c; // float32
			 uintptr_t m_flFeedbackGain = 0x20; // float32
			 uintptr_t m_flWidth = 0x24; // float32
		}
	}
}
