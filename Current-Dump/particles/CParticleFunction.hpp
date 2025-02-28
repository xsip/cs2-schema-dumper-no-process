#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CParticleFunction {
			 uintptr_t m_flOpStrength = 0x8; // CParticleCollectionFloatInput
			 uintptr_t m_nOpEndCapState = 0x168; // ParticleEndcapMode_t
			 uintptr_t m_flOpStartFadeInTime = 0x16c; // float32
			 uintptr_t m_flOpEndFadeInTime = 0x170; // float32
			 uintptr_t m_flOpStartFadeOutTime = 0x174; // float32
			 uintptr_t m_flOpEndFadeOutTime = 0x178; // float32
			 uintptr_t m_flOpFadeOscillatePeriod = 0x17c; // float32
			 uintptr_t m_bNormalizeToStopTime = 0x180; // bool
			 uintptr_t m_flOpTimeOffsetMin = 0x184; // float32
			 uintptr_t m_flOpTimeOffsetMax = 0x188; // float32
			 uintptr_t m_nOpTimeOffsetSeed = 0x18c; // int32
			 uintptr_t m_nOpTimeScaleSeed = 0x190; // int32
			 uintptr_t m_flOpTimeScaleMin = 0x194; // float32
			 uintptr_t m_flOpTimeScaleMax = 0x198; // float32
			 uintptr_t m_bDisableOperator = 0x19e; // bool
			 uintptr_t m_Notes = 0x1a0; // CUtlString
		}
	}
}
