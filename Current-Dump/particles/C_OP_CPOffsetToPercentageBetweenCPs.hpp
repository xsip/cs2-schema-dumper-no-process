#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_CPOffsetToPercentageBetweenCPs {
			 uintptr_t m_flInputMin = 0x1c0; // float32
			 uintptr_t m_flInputMax = 0x1c4; // float32
			 uintptr_t m_flInputBias = 0x1c8; // float32
			 uintptr_t m_nStartCP = 0x1cc; // int32
			 uintptr_t m_nEndCP = 0x1d0; // int32
			 uintptr_t m_nOffsetCP = 0x1d4; // int32
			 uintptr_t m_nOuputCP = 0x1d8; // int32
			 uintptr_t m_nInputCP = 0x1dc; // int32
			 uintptr_t m_bRadialCheck = 0x1e0; // bool
			 uintptr_t m_bScaleOffset = 0x1e1; // bool
			 uintptr_t m_vecOffset = 0x1e4; // Vector
		}
	}
}
