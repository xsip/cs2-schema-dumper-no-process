#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_RemapNamedModelElementToScalar {
			 uintptr_t m_hModel = 0x1c8; // CStrongHandle< InfoForResourceTypeCModel >
			 uintptr_t m_names = 0x1d0; // CUtlVector< CUtlString >
			 uintptr_t m_values = 0x1e8; // CUtlVector< float32 >
			 uintptr_t m_nFieldInput = 0x200; // ParticleAttributeIndex_t
			 uintptr_t m_nFieldOutput = 0x204; // ParticleAttributeIndex_t
			 uintptr_t m_nSetMethod = 0x208; // ParticleSetMethod_t
			 uintptr_t m_bModelFromRenderer = 0x20c; // bool
		}
	}
}
