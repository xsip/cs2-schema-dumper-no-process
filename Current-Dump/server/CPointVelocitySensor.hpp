#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointVelocitySensor {
			 uintptr_t m_hTargetEntity = 0x4e0; // CHandle< CBaseEntity >
			 uintptr_t m_vecAxis = 0x4e4; // Vector
			 uintptr_t m_bEnabled = 0x4f0; // bool
			 uintptr_t m_fPrevVelocity = 0x4f4; // float32
			 uintptr_t m_flAvgInterval = 0x4f8; // float32
			 uintptr_t m_Velocity = 0x500; // CEntityOutputTemplate< float32 >
		}
	}
}
