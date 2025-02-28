#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_RenderSimpleModelCollection {
			 uintptr_t m_bCenterOffset = 0x210; // bool
			 uintptr_t m_hModel = 0x218; // CStrongHandle< InfoForResourceTypeCModel >
			 uintptr_t m_modelInput = 0x220; // CParticleModelInput
			 uintptr_t m_fSizeCullScale = 0x280; // CParticleCollectionFloatInput
			 uintptr_t m_bDisableShadows = 0x3e0; // bool
			 uintptr_t m_bDisableMotionBlur = 0x3e1; // bool
			 uintptr_t m_bAcceptsDecals = 0x3e2; // bool
			 uintptr_t m_nAngularVelocityField = 0x3e4; // ParticleAttributeIndex_t
		}
	}
}
