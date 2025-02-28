#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_ContinuousEmitter {
			 uintptr_t m_flEmissionDuration = 0x1c8;
			 uintptr_t m_flStartTime = 0x328;
			 uintptr_t m_flEmitRate = 0x488;
			 uintptr_t m_flEmissionScale = 0x5e8;
			 uintptr_t m_flScalePerParentParticle = 0x5ec;
			 uintptr_t m_bInitFromKilledParentParticles = 0x5f0;
			 uintptr_t m_nEventType = 0x5f4;
			 uintptr_t m_nSnapshotControlPoint = 0x5f8;
			 uintptr_t m_nLimitPerUpdate = 0x5fc;
			 uintptr_t m_bForceEmitOnFirstUpdate = 0x600;
			 uintptr_t m_bForceEmitOnLastUpdate = 0x601;
		}
	}
}
