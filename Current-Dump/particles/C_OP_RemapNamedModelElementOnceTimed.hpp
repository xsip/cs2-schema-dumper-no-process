#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RemapNamedModelElementOnceTimed {
			 uintptr_t m_hModel = 0x1c0; // CStrongHandle< InfoForResourceTypeCModel >
			 uintptr_t m_inNames = 0x1c8; // CUtlVector< CUtlString >
			 uintptr_t m_outNames = 0x1e0; // CUtlVector< CUtlString >
			 uintptr_t m_fallbackNames = 0x1f8; // CUtlVector< CUtlString >
			 uintptr_t m_bModelFromRenderer = 0x210; // bool
			 uintptr_t m_bProportional = 0x211; // bool
			 uintptr_t m_nFieldInput = 0x214; // ParticleAttributeIndex_t
			 uintptr_t m_nFieldOutput = 0x218; // ParticleAttributeIndex_t
			 uintptr_t m_flRemapTime = 0x21c; // float32
		}
	}
}
