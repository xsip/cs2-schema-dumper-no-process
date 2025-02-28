#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ContinuousEmitter {
			 uintptr_t m_flEmissionDuration = 0x1c8; // CParticleCollectionFloatInput
			 uintptr_t m_flStartTime = 0x328; // CParticleCollectionFloatInput
			 uintptr_t m_flEmitRate = 0x488; // CParticleCollectionFloatInput
			 uintptr_t m_flEmissionScale = 0x5e8; // float32
			 uintptr_t m_flScalePerParentParticle = 0x5ec; // float32
			 uintptr_t m_bInitFromKilledParentParticles = 0x5f0; // bool
			 uintptr_t m_nEventType = 0x5f4; // EventTypeSelection_t
			 uintptr_t m_nSnapshotControlPoint = 0x5f8; // int32
			 uintptr_t m_nLimitPerUpdate = 0x5fc; // int32
			 uintptr_t m_bForceEmitOnFirstUpdate = 0x600; // bool
			 uintptr_t m_bForceEmitOnLastUpdate = 0x601; // bool
		}
	}
}
