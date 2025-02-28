#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_InstantaneousEmitter {
			 uintptr_t m_nParticlesToEmit = 0x1c8; // CParticleCollectionFloatInput
			 uintptr_t m_flStartTime = 0x328; // CParticleCollectionFloatInput
			 uintptr_t m_flInitFromKilledParentParticles = 0x488; // float32
			 uintptr_t m_nEventType = 0x48c; // EventTypeSelection_t
			 uintptr_t m_flParentParticleScale = 0x490; // CParticleCollectionFloatInput
			 uintptr_t m_nMaxEmittedPerFrame = 0x5f0; // int32
			 uintptr_t m_nSnapshotControlPoint = 0x5f4; // int32
		}
	}
}
