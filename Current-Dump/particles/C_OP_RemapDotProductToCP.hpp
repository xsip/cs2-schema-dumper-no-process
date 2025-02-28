#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapDotProductToCP {
			 uintptr_t m_nInputCP1 = 0x1c8; // int32
			 uintptr_t m_nInputCP2 = 0x1cc; // int32
			 uintptr_t m_nOutputCP = 0x1d0; // int32
			 uintptr_t m_nOutVectorField = 0x1d4; // int32
			 uintptr_t m_flInputMin = 0x1d8; // CParticleCollectionFloatInput
			 uintptr_t m_flInputMax = 0x338; // CParticleCollectionFloatInput
			 uintptr_t m_flOutputMin = 0x498; // CParticleCollectionFloatInput
			 uintptr_t m_flOutputMax = 0x5f8; // CParticleCollectionFloatInput
		}
	}
}
