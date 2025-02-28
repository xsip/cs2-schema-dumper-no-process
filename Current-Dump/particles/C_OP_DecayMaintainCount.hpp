#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_DecayMaintainCount {
			 uintptr_t m_nParticlesToMaintain = 0x1c0; // int32
			 uintptr_t m_flDecayDelay = 0x1c4; // float32
			 uintptr_t m_nSnapshotControlPoint = 0x1c8; // int32
			 uintptr_t m_bLifespanDecay = 0x1cc; // bool
			 uintptr_t m_flScale = 0x1d0; // CParticleCollectionFloatInput
			 uintptr_t m_bKillNewest = 0x330; // bool
		}
	}
}
