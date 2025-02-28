#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetVariable {
			 uintptr_t m_variableReference = 0x1c8; // CParticleVariableRef
			 uintptr_t m_transformInput = 0x208; // CParticleTransformInput
			 uintptr_t m_positionOffset = 0x270; // Vector
			 uintptr_t m_rotationOffset = 0x27c; // QAngle
			 uintptr_t m_vecInput = 0x288; // CParticleCollectionVecInput
			 uintptr_t m_floatInput = 0x900; // CParticleCollectionFloatInput
		}
	}
}
