#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_MoveBetweenPoints {
			 uintptr_t m_flSpeedMin = 0x1c8; // CPerParticleFloatInput
			 uintptr_t m_flSpeedMax = 0x328; // CPerParticleFloatInput
			 uintptr_t m_flEndSpread = 0x488; // CPerParticleFloatInput
			 uintptr_t m_flStartOffset = 0x5e8; // CPerParticleFloatInput
			 uintptr_t m_flEndOffset = 0x748; // CPerParticleFloatInput
			 uintptr_t m_nEndControlPointNumber = 0x8a8; // int32
			 uintptr_t m_bTrailBias = 0x8ac; // bool
		}
	}
}
