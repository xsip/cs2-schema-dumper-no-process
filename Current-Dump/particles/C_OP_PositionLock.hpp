#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_PositionLock {
			 uintptr_t m_TransformInput = 0x1c0; // CParticleTransformInput
			 uintptr_t m_flStartTime_min = 0x228; // float32
			 uintptr_t m_flStartTime_max = 0x22c; // float32
			 uintptr_t m_flStartTime_exp = 0x230; // float32
			 uintptr_t m_flEndTime_min = 0x234; // float32
			 uintptr_t m_flEndTime_max = 0x238; // float32
			 uintptr_t m_flEndTime_exp = 0x23c; // float32
			 uintptr_t m_flRange = 0x240; // float32
			 uintptr_t m_flRangeBias = 0x248; // CParticleCollectionFloatInput
			 uintptr_t m_flJumpThreshold = 0x3a8; // float32
			 uintptr_t m_flPrevPosScale = 0x3ac; // float32
			 uintptr_t m_bLockRot = 0x3b0; // bool
			 uintptr_t m_vecScale = 0x3b8; // CParticleCollectionVecInput
			 uintptr_t m_nFieldOutput = 0xa30; // ParticleAttributeIndex_t
			 uintptr_t m_nFieldOutputPrev = 0xa34; // ParticleAttributeIndex_t
		}
	}
}
