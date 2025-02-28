#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_PinParticleToCP {
			 uintptr_t m_nControlPointNumber = 0x1c0; // int32
			 uintptr_t m_vecOffset = 0x1c8; // CParticleCollectionVecInput
			 uintptr_t m_bOffsetLocal = 0x840; // bool
			 uintptr_t m_nParticleSelection = 0x844; // ParticleSelection_t
			 uintptr_t m_nParticleNumber = 0x848; // CParticleCollectionFloatInput
			 uintptr_t m_nPinBreakType = 0x9a8; // ParticlePinDistance_t
			 uintptr_t m_flBreakDistance = 0x9b0; // CParticleCollectionFloatInput
			 uintptr_t m_flBreakSpeed = 0xb10; // CParticleCollectionFloatInput
			 uintptr_t m_flAge = 0xc70; // CParticleCollectionFloatInput
			 uintptr_t m_nBreakControlPointNumber = 0xdd0; // int32
			 uintptr_t m_nBreakControlPointNumber2 = 0xdd4; // int32
			 uintptr_t m_flBreakValue = 0xdd8; // CParticleCollectionFloatInput
			 uintptr_t m_flInterpolation = 0xf38; // CPerParticleFloatInput
		}
	}
}
