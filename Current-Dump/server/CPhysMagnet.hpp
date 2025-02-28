#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysMagnet {
			 uintptr_t m_OnMagnetAttach = 0x9a8; // CEntityIOOutput
			 uintptr_t m_OnMagnetDetach = 0x9d0; // CEntityIOOutput
			 uintptr_t m_massScale = 0x9f8; // float32
			 uintptr_t m_forceLimit = 0x9fc; // float32
			 uintptr_t m_torqueLimit = 0xa00; // float32
			 uintptr_t m_MagnettedEntities = 0xa08; // CUtlVector< magnetted_objects_t >
			 uintptr_t m_bActive = 0xa20; // bool
			 uintptr_t m_bHasHitSomething = 0xa21; // bool
			 uintptr_t m_flTotalMass = 0xa24; // float32
			 uintptr_t m_flRadius = 0xa28; // float32
			 uintptr_t m_flNextSuckTime = 0xa2c; // GameTime_t
			 uintptr_t m_iMaxObjectsAttached = 0xa30; // int32
		}
	}
}
