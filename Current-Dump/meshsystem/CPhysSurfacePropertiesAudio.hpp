#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CPhysSurfacePropertiesAudio {
			 uintptr_t m_reflectivity = 0x0; // float32
			 uintptr_t m_hardnessFactor = 0x4; // float32
			 uintptr_t m_roughnessFactor = 0x8; // float32
			 uintptr_t m_roughThreshold = 0xc; // float32
			 uintptr_t m_hardThreshold = 0x10; // float32
			 uintptr_t m_hardVelocityThreshold = 0x14; // float32
			 uintptr_t m_flStaticImpactVolume = 0x18; // float32
			 uintptr_t m_flOcclusionFactor = 0x1c; // float32
		}
	}
}
