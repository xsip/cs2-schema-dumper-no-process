#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CPlayerInputAnimMotorUpdater {
			 uintptr_t m_sampleTimes = 0x20; // CUtlVector< float32 >
			 uintptr_t m_flSpringConstant = 0x3c; // float32
			 uintptr_t m_flAnticipationDistance = 0x40; // float32
			 uintptr_t m_hAnticipationPosParam = 0x44; // CAnimParamHandle
			 uintptr_t m_hAnticipationHeadingParam = 0x46; // CAnimParamHandle
			 uintptr_t m_bUseAcceleration = 0x48; // bool
		}
	}
}
