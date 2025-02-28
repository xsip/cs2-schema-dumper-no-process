#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_CreationNoise {
			 uintptr_t m_nFieldOutput = 0x1c8; // ParticleAttributeIndex_t
			 uintptr_t m_bAbsVal = 0x1cc; // bool
			 uintptr_t m_bAbsValInv = 0x1cd; // bool
			 uintptr_t m_flOffset = 0x1d0; // float32
			 uintptr_t m_flOutputMin = 0x1d4; // float32
			 uintptr_t m_flOutputMax = 0x1d8; // float32
			 uintptr_t m_flNoiseScale = 0x1dc; // float32
			 uintptr_t m_flNoiseScaleLoc = 0x1e0; // float32
			 uintptr_t m_vecOffsetLoc = 0x1e4; // Vector
			 uintptr_t m_flWorldTimeScale = 0x1f0; // float32
		}
	}
}
