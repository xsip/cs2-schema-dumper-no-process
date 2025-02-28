#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CDampedPathAnimMotorUpdater {
			 uintptr_t m_flAnticipationTime = 0x2c; // float32
			 uintptr_t m_flMinSpeedScale = 0x30; // float32
			 uintptr_t m_hAnticipationPosParam = 0x34; // CAnimParamHandle
			 uintptr_t m_hAnticipationHeadingParam = 0x36; // CAnimParamHandle
			 uintptr_t m_flSpringConstant = 0x38; // float32
			 uintptr_t m_flMinSpringTension = 0x3c; // float32
			 uintptr_t m_flMaxSpringTension = 0x40; // float32
		}
	}
}
