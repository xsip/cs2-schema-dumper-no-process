#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BasePropDoor {
			 uintptr_t m_eDoorState = 0x1238; // DoorState_t
			 uintptr_t m_modelChanged = 0x123c; // bool
			 uintptr_t m_bLocked = 0x123d; // bool
			 uintptr_t m_closedPosition = 0x1240; // Vector
			 uintptr_t m_closedAngles = 0x124c; // QAngle
			 uintptr_t m_hMaster = 0x1258; // CHandle< C_BasePropDoor >
			 uintptr_t m_vWhereToSetLightingOrigin = 0x125c; // Vector
		}
	}
}
