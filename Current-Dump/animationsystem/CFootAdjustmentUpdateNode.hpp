#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CFootAdjustmentUpdateNode {
			 uintptr_t m_clips = 0x70; // CUtlVector< HSequence >
			 uintptr_t m_hBasePoseCacheHandle = 0x88; // CPoseHandle
			 uintptr_t m_facingTarget = 0x8c; // CAnimParamHandle
			 uintptr_t m_flTurnTimeMin = 0x90; // float32
			 uintptr_t m_flTurnTimeMax = 0x94; // float32
			 uintptr_t m_flStepHeightMax = 0x98; // float32
			 uintptr_t m_flStepHeightMaxAngle = 0x9c; // float32
			 uintptr_t m_bResetChild = 0xa0; // bool
			 uintptr_t m_bAnimationDriven = 0xa1; // bool
		}
	}
}
