#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ClientPhysics {
			 uintptr_t m_strPhysicsType = 0x210; // CUtlString
			 uintptr_t m_bStartAsleep = 0x218; // bool
			 uintptr_t m_flPlayerWakeRadius = 0x220; // CParticleCollectionFloatInput
			 uintptr_t m_flVehicleWakeRadius = 0x380; // CParticleCollectionFloatInput
			 uintptr_t m_bUseHighQualitySimulation = 0x4e0; // bool
			 uintptr_t m_nMaxParticleCount = 0x4e4; // int32
			 uintptr_t m_bRespectExclusionVolumes = 0x4e8; // bool
			 uintptr_t m_bKillParticles = 0x4e9; // bool
			 uintptr_t m_bDeleteSim = 0x4ea; // bool
			 uintptr_t m_nControlPoint = 0x4ec; // int32
			 uintptr_t m_nColorBlendType = 0x4f0; // ParticleColorBlendType_t
		}
	}
}
