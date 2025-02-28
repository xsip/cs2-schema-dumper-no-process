#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CMotorController {
			 uintptr_t m_speed = 0x8; // float32
			 uintptr_t m_maxTorque = 0xc; // float32
			 uintptr_t m_axis = 0x10; // Vector
			 uintptr_t m_inertiaFactor = 0x1c; // float32
		}
	}
}
