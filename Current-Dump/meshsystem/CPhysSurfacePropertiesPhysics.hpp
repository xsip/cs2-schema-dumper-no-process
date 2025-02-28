#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CPhysSurfacePropertiesPhysics {
			 uintptr_t m_friction = 0x0; // float32
			 uintptr_t m_elasticity = 0x4; // float32
			 uintptr_t m_density = 0x8; // float32
			 uintptr_t m_thickness = 0xc; // float32
			 uintptr_t m_softContactFrequency = 0x10; // float32
			 uintptr_t m_softContactDampingRatio = 0x14; // float32
			 uintptr_t m_wheelDrag = 0x18; // float32
			 uintptr_t m_heatConductivity = 0x1c; // float32
			 uintptr_t m_flashpoint = 0x20; // float32
		}
	}
}
