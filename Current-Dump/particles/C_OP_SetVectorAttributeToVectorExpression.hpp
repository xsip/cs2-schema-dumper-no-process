#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetVectorAttributeToVectorExpression {
			 uintptr_t m_nExpression = 0x1c0; // VectorExpressionType_t
			 uintptr_t m_vInput1 = 0x1c8; // CPerParticleVecInput
			 uintptr_t m_vInput2 = 0x840; // CPerParticleVecInput
			 uintptr_t m_nOutputField = 0xeb8; // ParticleAttributeIndex_t
			 uintptr_t m_nSetMethod = 0xebc; // ParticleSetMethod_t
			 uintptr_t m_bNormalizedOutput = 0xec0; // bool
		}
	}
}
