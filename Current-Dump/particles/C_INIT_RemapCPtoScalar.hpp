#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_RemapCPtoScalar {
			 uintptr_t m_nCPInput = 0x1c8; // int32
			 uintptr_t m_nFieldOutput = 0x1cc; // ParticleAttributeIndex_t
			 uintptr_t m_nField = 0x1d0; // int32
			 uintptr_t m_flInputMin = 0x1d4; // float32
			 uintptr_t m_flInputMax = 0x1d8; // float32
			 uintptr_t m_flOutputMin = 0x1dc; // float32
			 uintptr_t m_flOutputMax = 0x1e0; // float32
			 uintptr_t m_flStartTime = 0x1e4; // float32
			 uintptr_t m_flEndTime = 0x1e8; // float32
			 uintptr_t m_nSetMethod = 0x1ec; // ParticleSetMethod_t
			 uintptr_t m_flRemapBias = 0x1f0; // float32
		}
	}
}
