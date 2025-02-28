#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_CalculateVectorAttribute {
			 uintptr_t m_vStartValue = 0x1c0; // Vector
			 uintptr_t m_nFieldInput1 = 0x1cc; // ParticleAttributeIndex_t
			 uintptr_t m_flInputScale1 = 0x1d0; // float32
			 uintptr_t m_nFieldInput2 = 0x1d4; // ParticleAttributeIndex_t
			 uintptr_t m_flInputScale2 = 0x1d8; // float32
			 uintptr_t m_nControlPointInput1 = 0x1dc; // ControlPointReference_t
			 uintptr_t m_flControlPointScale1 = 0x1f0; // float32
			 uintptr_t m_nControlPointInput2 = 0x1f4; // ControlPointReference_t
			 uintptr_t m_flControlPointScale2 = 0x208; // float32
			 uintptr_t m_nFieldOutput = 0x20c; // ParticleAttributeIndex_t
			 uintptr_t m_vFinalOutputScale = 0x210; // Vector
		}
	}
}
