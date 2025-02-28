#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseMoveBehavior {
			 uintptr_t m_iPositionInterpolator = 0x540; // int32
			 uintptr_t m_iRotationInterpolator = 0x544; // int32
			 uintptr_t m_flAnimStartTime = 0x548; // float32
			 uintptr_t m_flAnimEndTime = 0x54c; // float32
			 uintptr_t m_flAverageSpeedAcrossFrame = 0x550; // float32
			 uintptr_t m_pCurrentKeyFrame = 0x558; // CPathKeyFrame*
			 uintptr_t m_pTargetKeyFrame = 0x560; // CPathKeyFrame*
			 uintptr_t m_pPreKeyFrame = 0x568; // CPathKeyFrame*
			 uintptr_t m_pPostKeyFrame = 0x570; // CPathKeyFrame*
			 uintptr_t m_flTimeIntoFrame = 0x578; // float32
			 uintptr_t m_iDirection = 0x57c; // int32
		}
	}
}
