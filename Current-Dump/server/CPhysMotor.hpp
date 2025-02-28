#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPhysMotor {
			 uintptr_t m_nameAttach = 0x4e0; // CUtlSymbolLarge
			 uintptr_t m_hAttachedObject = 0x4e8; // CHandle< CBaseEntity >
			 uintptr_t m_spinUp = 0x4ec; // float32
			 uintptr_t m_additionalAcceleration = 0x4f0; // float32
			 uintptr_t m_angularAcceleration = 0x4f4; // float32
			 uintptr_t m_lastTime = 0x4f8; // GameTime_t
			 uintptr_t m_motor = 0x510; // CMotorController
		}
	}
}
