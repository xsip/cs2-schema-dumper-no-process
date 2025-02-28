#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_MoveToHitbox {
			 uintptr_t m_modelInput = 0x1c0; // CParticleModelInput
			 uintptr_t m_transformInput = 0x220; // CParticleTransformInput
			 uintptr_t m_flLifeTimeLerpStart = 0x28c; // float32
			 uintptr_t m_flLifeTimeLerpEnd = 0x290; // float32
			 uintptr_t m_flPrevPosScale = 0x294; // float32
			 uintptr_t m_HitboxSetName = 0x298; // char[128]
			 uintptr_t m_bUseBones = 0x318; // bool
			 uintptr_t m_nLerpType = 0x31c; // HitboxLerpType_t
			 uintptr_t m_flInterpolation = 0x320; // CPerParticleFloatInput
		}
	}
}
