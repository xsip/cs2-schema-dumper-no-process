#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointProximitySensor {
			 uintptr_t m_bDisabled = 0x4e0; // bool
			 uintptr_t m_hTargetEntity = 0x4e4; // CHandle< CBaseEntity >
			 uintptr_t m_Distance = 0x4e8; // CEntityOutputTemplate< float32 >
		}
	}
}
