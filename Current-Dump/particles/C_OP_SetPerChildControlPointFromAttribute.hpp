#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetPerChildControlPointFromAttribute {
			 uintptr_t m_nChildGroupID = 0x1c0; // int32
			 uintptr_t m_nFirstControlPoint = 0x1c4; // int32
			 uintptr_t m_nNumControlPoints = 0x1c8; // int32
			 uintptr_t m_nParticleIncrement = 0x1cc; // int32
			 uintptr_t m_nFirstSourcePoint = 0x1d0; // int32
			 uintptr_t m_bNumBasedOnParticleCount = 0x1d4; // bool
			 uintptr_t m_nAttributeToRead = 0x1d8; // ParticleAttributeIndex_t
			 uintptr_t m_nCPField = 0x1dc; // int32
		}
	}
}
