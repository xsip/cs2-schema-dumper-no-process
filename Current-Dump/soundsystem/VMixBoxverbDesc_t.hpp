#include <Windows.h>


namespace xsip {
	namespace soundsystem {
		namespace VMixBoxverbDesc_t {
			 uintptr_t m_flSizeMax = 0x0;
			 uintptr_t m_flSizeMin = 0x4;
			 uintptr_t m_flComplexity = 0x8;
			 uintptr_t m_flDiffusion = 0xc;
			 uintptr_t m_flModDepth = 0x10;
			 uintptr_t m_flModRate = 0x14;
			 uintptr_t m_bParallel = 0x18;
			 uintptr_t m_filterType = 0x1c;
			 uintptr_t m_flWidth = 0x2c;
			 uintptr_t m_flHeight = 0x30;
			 uintptr_t m_flDepth = 0x34;
			 uintptr_t m_flFeedbackScale = 0x38;
			 uintptr_t m_flFeedbackWidth = 0x3c;
			 uintptr_t m_flFeedbackHeight = 0x40;
			 uintptr_t m_flFeedbackDepth = 0x44;
			 uintptr_t m_flOutputGain = 0x48;
			 uintptr_t m_flTaps = 0x4c;
		}
	}
}
