#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderGpuImplicit {
			 uintptr_t m_bUsePerParticleRadius = 0x210; // bool
			 uintptr_t m_nVertexCountKb = 0x214; // uint32
			 uintptr_t m_nIndexCountKb = 0x218; // uint32
			 uintptr_t m_fGridSize = 0x220; // CParticleCollectionRendererFloatInput
			 uintptr_t m_fRadiusScale = 0x380; // CParticleCollectionRendererFloatInput
			 uintptr_t m_fIsosurfaceThreshold = 0x4e0; // CParticleCollectionRendererFloatInput
			 uintptr_t m_nScaleCP = 0x640; // int32
			 uintptr_t m_hMaterial = 0x648; // CStrongHandle< InfoForResourceTypeIMaterial2 >
		}
	}
}
