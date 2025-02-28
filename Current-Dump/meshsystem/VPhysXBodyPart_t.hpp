#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace VPhysXBodyPart_t {
			 uintptr_t m_nFlags = 0x0;
			 uintptr_t m_flMass = 0x4;
			 uintptr_t m_rnShape = 0x8;
			 uintptr_t m_nCollisionAttributeIndex = 0x80;
			 uintptr_t m_nReserved = 0x82;
			 uintptr_t m_flInertiaScale = 0x84;
			 uintptr_t m_flLinearDamping = 0x88;
			 uintptr_t m_flAngularDamping = 0x8c;
			 uintptr_t m_bOverrideMassCenter = 0x90;
			 uintptr_t m_vMassCenterOverride = 0x94;
		}
	}
}
