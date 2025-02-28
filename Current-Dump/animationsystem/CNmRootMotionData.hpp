#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CNmRootMotionData {
			 uintptr_t m_transforms = 0x0; // CUtlVector< CTransform >
			 uintptr_t m_nNumFrames = 0x18; // int32
			 uintptr_t m_flAverageLinearVelocity = 0x1c; // float32
			 uintptr_t m_flAverageAngularVelocityRadians = 0x20; // float32
			 uintptr_t m_totalDelta = 0x30; // CTransform
		}
	}
}
