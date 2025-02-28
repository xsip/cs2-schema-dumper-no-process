#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_MaintainEmitter {
			 uintptr_t m_nParticlesToMaintain = 0x1c8; // CParticleCollectionFloatInput
			 uintptr_t m_flStartTime = 0x328; // float32
			 uintptr_t m_flEmissionDuration = 0x330; // CParticleCollectionFloatInput
			 uintptr_t m_flEmissionRate = 0x490; // float32
			 uintptr_t m_nSnapshotControlPoint = 0x494; // int32
			 uintptr_t m_bEmitInstantaneously = 0x498; // bool
			 uintptr_t m_bFinalEmitOnStop = 0x499; // bool
			 uintptr_t m_flScale = 0x4a0; // CParticleCollectionFloatInput
		}
	}
}
