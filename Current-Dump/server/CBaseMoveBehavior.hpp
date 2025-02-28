#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseMoveBehavior {
			 uintptr_t m_iPositionInterpolator = 0x540;
			 uintptr_t m_iRotationInterpolator = 0x544;
			 uintptr_t m_flAnimStartTime = 0x548;
			 uintptr_t m_flAnimEndTime = 0x54c;
			 uintptr_t m_flAverageSpeedAcrossFrame = 0x550;
			 uintptr_t m_pCurrentKeyFrame = 0x558;
			 uintptr_t m_pTargetKeyFrame = 0x560;
			 uintptr_t m_pPreKeyFrame = 0x568;
			 uintptr_t m_pPostKeyFrame = 0x570;
			 uintptr_t m_flTimeIntoFrame = 0x578;
			 uintptr_t m_iDirection = 0x57c;
		}
	}
}
