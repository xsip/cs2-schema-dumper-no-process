#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CBaseTrailRenderer {
			 uintptr_t m_nOrientationType = 0x2aa8; // ParticleOrientationChoiceList_t
			 uintptr_t m_nOrientationControlPoint = 0x2aac; // int32
			 uintptr_t m_flMinSize = 0x2ab0; // float32
			 uintptr_t m_flMaxSize = 0x2ab4; // float32
			 uintptr_t m_flStartFadeSize = 0x2ab8; // CParticleCollectionRendererFloatInput
			 uintptr_t m_flEndFadeSize = 0x2c18; // CParticleCollectionRendererFloatInput
			 uintptr_t m_bClampV = 0x2d78; // bool
		}
	}
}
