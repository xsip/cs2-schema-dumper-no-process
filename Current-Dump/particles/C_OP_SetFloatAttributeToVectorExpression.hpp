#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetFloatAttributeToVectorExpression {
			 uintptr_t m_nExpression = 0x1c0; // VectorFloatExpressionType_t
			 uintptr_t m_vInput1 = 0x1c8; // CPerParticleVecInput
			 uintptr_t m_vInput2 = 0x840; // CPerParticleVecInput
			 uintptr_t m_flOutputRemap = 0xeb8; // CParticleRemapFloatInput
			 uintptr_t m_nOutputField = 0x1018; // ParticleAttributeIndex_t
			 uintptr_t m_nSetMethod = 0x101c; // ParticleSetMethod_t
		}
	}
}
