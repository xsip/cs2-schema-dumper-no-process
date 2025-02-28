#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderBlobs {
			 uintptr_t m_cubeWidth = 0x210; // CParticleCollectionRendererFloatInput
			 uintptr_t m_cutoffRadius = 0x370; // CParticleCollectionRendererFloatInput
			 uintptr_t m_renderRadius = 0x4d0; // CParticleCollectionRendererFloatInput
			 uintptr_t m_nVertexCountKb = 0x630; // uint32
			 uintptr_t m_nIndexCountKb = 0x634; // uint32
			 uintptr_t m_nScaleCP = 0x638; // int32
			 uintptr_t m_MaterialVars = 0x640; // CUtlVector< MaterialVariable_t >
			 uintptr_t m_hMaterial = 0x670; // CStrongHandle< InfoForResourceTypeIMaterial2 >
		}
	}
}
