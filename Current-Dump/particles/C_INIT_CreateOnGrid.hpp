#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_CreateOnGrid {
			 uintptr_t m_nXCount = 0x1c8; // CParticleCollectionFloatInput
			 uintptr_t m_nYCount = 0x328; // CParticleCollectionFloatInput
			 uintptr_t m_nZCount = 0x488; // CParticleCollectionFloatInput
			 uintptr_t m_nXSpacing = 0x5e8; // CParticleCollectionFloatInput
			 uintptr_t m_nYSpacing = 0x748; // CParticleCollectionFloatInput
			 uintptr_t m_nZSpacing = 0x8a8; // CParticleCollectionFloatInput
			 uintptr_t m_nControlPointNumber = 0xa08; // int32
			 uintptr_t m_bLocalSpace = 0xa0c; // bool
			 uintptr_t m_bCenter = 0xa0d; // bool
			 uintptr_t m_bHollow = 0xa0e; // bool
		}
	}
}
