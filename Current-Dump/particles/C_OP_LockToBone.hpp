#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_LockToBone {
			 uintptr_t m_modelInput = 0x1c0; // CParticleModelInput
			 uintptr_t m_transformInput = 0x220; // CParticleTransformInput
			 uintptr_t m_flLifeTimeFadeStart = 0x288; // float32
			 uintptr_t m_flLifeTimeFadeEnd = 0x28c; // float32
			 uintptr_t m_flJumpThreshold = 0x290; // float32
			 uintptr_t m_flPrevPosScale = 0x294; // float32
			 uintptr_t m_HitboxSetName = 0x298; // char[128]
			 uintptr_t m_bRigid = 0x318; // bool
			 uintptr_t m_bUseBones = 0x319; // bool
			 uintptr_t m_nFieldOutput = 0x31c; // ParticleAttributeIndex_t
			 uintptr_t m_nFieldOutputPrev = 0x320; // ParticleAttributeIndex_t
			 uintptr_t m_nRotationSetType = 0x324; // ParticleRotationLockType_t
			 uintptr_t m_bRigidRotationLock = 0x328; // bool
			 uintptr_t m_vecRotation = 0x330; // CPerParticleVecInput
			 uintptr_t m_flRotLerp = 0x9a8; // CPerParticleFloatInput
		}
	}
}
