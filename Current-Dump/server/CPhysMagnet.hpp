#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysMagnet {
			 uintptr_t m_OnMagnetAttach = 0x9a8;
			 uintptr_t m_OnMagnetDetach = 0x9d0;
			 uintptr_t m_massScale = 0x9f8;
			 uintptr_t m_forceLimit = 0x9fc;
			 uintptr_t m_torqueLimit = 0xa00;
			 uintptr_t m_MagnettedEntities = 0xa08;
			 uintptr_t m_bActive = 0xa20;
			 uintptr_t m_bHasHitSomething = 0xa21;
			 uintptr_t m_flTotalMass = 0xa24;
			 uintptr_t m_flRadius = 0xa28;
			 uintptr_t m_flNextSuckTime = 0xa2c;
			 uintptr_t m_iMaxObjectsAttached = 0xa30;
		}
	}
}
