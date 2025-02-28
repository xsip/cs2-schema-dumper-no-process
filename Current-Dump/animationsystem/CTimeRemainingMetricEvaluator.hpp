#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CTimeRemainingMetricEvaluator {
			 uintptr_t m_bMatchByTimeRemaining = 0x50; // bool
			 uintptr_t m_flMaxTimeRemaining = 0x54; // float32
			 uintptr_t m_bFilterByTimeRemaining = 0x58; // bool
			 uintptr_t m_flMinTimeRemaining = 0x5c; // float32
		}
	}
}
