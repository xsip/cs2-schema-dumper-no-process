#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetAttributeToScalarExpression {
			 uintptr_t m_nExpression = 0x1c0; // ScalarExpressionType_t
			 uintptr_t m_flInput1 = 0x1c8; // CPerParticleFloatInput
			 uintptr_t m_flInput2 = 0x328; // CPerParticleFloatInput
			 uintptr_t m_flOutputRemap = 0x488; // CParticleRemapFloatInput
			 uintptr_t m_nOutputField = 0x5e8; // ParticleAttributeIndex_t
			 uintptr_t m_nSetMethod = 0x5ec; // ParticleSetMethod_t
		}
	}
}
