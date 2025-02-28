#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixDelayDesc_t {
			 uintptr_t m_feedbackFilter = 0x0;
			 uintptr_t m_bEnableFilter = 0x10;
			 uintptr_t m_flDelay = 0x14;
			 uintptr_t m_flDirectGain = 0x18;
			 uintptr_t m_flDelayGain = 0x1c;
			 uintptr_t m_flFeedbackGain = 0x20;
			 uintptr_t m_flWidth = 0x24;
		}
	}
}
