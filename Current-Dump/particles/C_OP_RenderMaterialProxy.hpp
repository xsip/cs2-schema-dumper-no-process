#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderMaterialProxy {
			 uintptr_t m_nMaterialControlPoint = 0x210; // int32
			 uintptr_t m_nProxyType = 0x214; // MaterialProxyType_t
			 uintptr_t m_MaterialVars = 0x218; // CUtlVector< MaterialVariable_t >
			 uintptr_t m_hOverrideMaterial = 0x230; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_flMaterialOverrideEnabled = 0x238; // CParticleCollectionFloatInput
			 uintptr_t m_vecColorScale = 0x398; // CParticleCollectionVecInput
			 uintptr_t m_flAlpha = 0xa10; // CPerParticleFloatInput
			 uintptr_t m_nColorBlendType = 0xb70; // ParticleColorBlendType_t
		}
	}
}
