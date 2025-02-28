#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace VPhysXBodyPart_t {
			 uintptr_t m_nFlags = 0x0; // uint32
			 uintptr_t m_flMass = 0x4; // float32
			 uintptr_t m_rnShape = 0x8; // VPhysics2ShapeDef_t
			 uintptr_t m_nCollisionAttributeIndex = 0x80; // uint16
			 uintptr_t m_nReserved = 0x82; // uint16
			 uintptr_t m_flInertiaScale = 0x84; // float32
			 uintptr_t m_flLinearDamping = 0x88; // float32
			 uintptr_t m_flAngularDamping = 0x8c; // float32
			 uintptr_t m_bOverrideMassCenter = 0x90; // bool
			 uintptr_t m_vMassCenterOverride = 0x94; // Vector
		}
	}
}
