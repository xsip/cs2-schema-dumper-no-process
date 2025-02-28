#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysForce {
			 uintptr_t m_nameAttach = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_force = 0x4f0; // float32
			 uintptr_t m_forceTime = 0x4f4; // float32
			 uintptr_t m_attachedObject = 0x4f8; // CHandle< CBaseEntity >
			 uintptr_t m_wasRestored = 0x4fc; // bool
			 uintptr_t m_integrator = 0x500; // CConstantForceController
		}
	}
}
