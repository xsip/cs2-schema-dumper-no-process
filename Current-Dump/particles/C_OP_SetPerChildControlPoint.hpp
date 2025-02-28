#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetPerChildControlPoint {
			 uintptr_t m_nChildGroupID = 0x1c0; // int32
			 uintptr_t m_nFirstControlPoint = 0x1c4; // int32
			 uintptr_t m_nNumControlPoints = 0x1c8; // int32
			 uintptr_t m_nParticleIncrement = 0x1d0; // CParticleCollectionFloatInput
			 uintptr_t m_nFirstSourcePoint = 0x330; // CParticleCollectionFloatInput
			 uintptr_t m_bSetOrientation = 0x490; // bool
			 uintptr_t m_nOrientationField = 0x494; // ParticleAttributeIndex_t
			 uintptr_t m_bNumBasedOnParticleCount = 0x498; // bool
		}
	}
}
