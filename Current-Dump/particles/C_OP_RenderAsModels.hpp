#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderAsModels {
			 uintptr_t m_ModelList = 0x210; // CUtlVector< ModelReference_t >
			 uintptr_t m_flModelScale = 0x22c; // float32
			 uintptr_t m_bFitToModelSize = 0x230; // bool
			 uintptr_t m_bNonUniformScaling = 0x231; // bool
			 uintptr_t m_nXAxisScalingAttribute = 0x234; // ParticleAttributeIndex_t
			 uintptr_t m_nYAxisScalingAttribute = 0x238; // ParticleAttributeIndex_t
			 uintptr_t m_nZAxisScalingAttribute = 0x23c; // ParticleAttributeIndex_t
			 uintptr_t m_nSizeCullBloat = 0x240; // int32
		}
	}
}
