#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysicsEntitySolver {
			 uintptr_t m_hMovingEntity = 0x4e8; // CHandle< CBaseEntity >
			 uintptr_t m_hPhysicsBlocker = 0x4ec; // CHandle< CBaseEntity >
			 uintptr_t m_separationDuration = 0x4f0; // float32
			 uintptr_t m_cancelTime = 0x4f4; // GameTime_t
		}
	}
}
