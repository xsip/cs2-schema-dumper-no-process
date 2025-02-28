#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointTeleport {
			 uintptr_t m_vSaveOrigin = 0x4e0; // Vector
			 uintptr_t m_vSaveAngles = 0x4ec; // QAngle
			 uintptr_t m_bTeleportParentedEntities = 0x4f8; // bool
			 uintptr_t m_bTeleportUseCurrentAngle = 0x4f9; // bool
		}
	}
}
