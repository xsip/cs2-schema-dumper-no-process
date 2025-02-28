#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace CGeneralRandomRotation {
			 uintptr_t m_nFieldOutput = 0x1c8; // ParticleAttributeIndex_t
			 uintptr_t m_flDegrees = 0x1cc; // float32
			 uintptr_t m_flDegreesMin = 0x1d0; // float32
			 uintptr_t m_flDegreesMax = 0x1d4; // float32
			 uintptr_t m_flRotationRandExponent = 0x1d8; // float32
			 uintptr_t m_bRandomlyFlipDirection = 0x1dc; // bool
		}
	}
}
