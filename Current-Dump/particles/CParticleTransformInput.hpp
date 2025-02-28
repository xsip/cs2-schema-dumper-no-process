#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CParticleTransformInput {
			 uintptr_t m_nType = 0x10; // ParticleTransformType_t
			 uintptr_t m_NamedValue = 0x18; // CParticleNamedValueRef
			 uintptr_t m_bFollowNamedValue = 0x58; // bool
			 uintptr_t m_bSupportsDisabled = 0x59; // bool
			 uintptr_t m_bUseOrientation = 0x5a; // bool
			 uintptr_t m_nControlPoint = 0x5c; // int32
			 uintptr_t m_nControlPointRangeMax = 0x60; // int32
			 uintptr_t m_flEndCPGrowthTime = 0x64; // float32
		}
	}
}
