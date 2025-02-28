#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_CreateOnModel {
			 uintptr_t m_modelInput = 0x1c8; // CParticleModelInput
			 uintptr_t m_transformInput = 0x228; // CParticleTransformInput
			 uintptr_t m_nForceInModel = 0x290; // int32
			 uintptr_t m_bScaleToVolume = 0x294; // bool
			 uintptr_t m_bEvenDistribution = 0x295; // bool
			 uintptr_t m_nDesiredHitbox = 0x298; // CParticleCollectionFloatInput
			 uintptr_t m_nHitboxValueFromControlPointIndex = 0x3f8; // int32
			 uintptr_t m_vecHitBoxScale = 0x400; // CParticleCollectionVecInput
			 uintptr_t m_flBoneVelocity = 0xa78; // float32
			 uintptr_t m_flMaxBoneVelocity = 0xa7c; // float32
			 uintptr_t m_vecDirectionBias = 0xa80; // CParticleCollectionVecInput
			 uintptr_t m_HitboxSetName = 0x10f8; // char[128]
			 uintptr_t m_bLocalCoords = 0x1178; // bool
			 uintptr_t m_bUseBones = 0x1179; // bool
			 uintptr_t m_bUseMesh = 0x117a; // bool
			 uintptr_t m_flShellSize = 0x1180; // CParticleCollectionFloatInput
		}
	}
}
