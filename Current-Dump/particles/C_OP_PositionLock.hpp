#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_PositionLock {
			 uintptr_t m_TransformInput = 0x1c0;
			 uintptr_t m_flStartTime_min = 0x228;
			 uintptr_t m_flStartTime_max = 0x22c;
			 uintptr_t m_flStartTime_exp = 0x230;
			 uintptr_t m_flEndTime_min = 0x234;
			 uintptr_t m_flEndTime_max = 0x238;
			 uintptr_t m_flEndTime_exp = 0x23c;
			 uintptr_t m_flRange = 0x240;
			 uintptr_t m_flRangeBias = 0x248;
			 uintptr_t m_flJumpThreshold = 0x3a8;
			 uintptr_t m_flPrevPosScale = 0x3ac;
			 uintptr_t m_bLockRot = 0x3b0;
			 uintptr_t m_vecScale = 0x3b8;
			 uintptr_t m_nFieldOutput = 0xa30;
			 uintptr_t m_nFieldOutputPrev = 0xa34;
		}
	}
}
