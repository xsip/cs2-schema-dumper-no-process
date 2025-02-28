#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_NoiseEmitter {
			 uintptr_t m_flEmissionDuration = 0x1c8; // float32
			 uintptr_t m_flStartTime = 0x1cc; // float32
			 uintptr_t m_flEmissionScale = 0x1d0; // float32
			 uintptr_t m_nScaleControlPoint = 0x1d4; // int32
			 uintptr_t m_nScaleControlPointField = 0x1d8; // int32
			 uintptr_t m_nWorldNoisePoint = 0x1dc; // int32
			 uintptr_t m_bAbsVal = 0x1e0; // bool
			 uintptr_t m_bAbsValInv = 0x1e1; // bool
			 uintptr_t m_flOffset = 0x1e4; // float32
			 uintptr_t m_flOutputMin = 0x1e8; // float32
			 uintptr_t m_flOutputMax = 0x1ec; // float32
			 uintptr_t m_flNoiseScale = 0x1f0; // float32
			 uintptr_t m_flWorldNoiseScale = 0x1f4; // float32
			 uintptr_t m_vecOffsetLoc = 0x1f8; // Vector
			 uintptr_t m_flWorldTimeScale = 0x204; // float32
		}
	}
}
