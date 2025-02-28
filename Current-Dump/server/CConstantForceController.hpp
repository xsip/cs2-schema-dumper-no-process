#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CConstantForceController {
			 uintptr_t m_linear = 0xc; // Vector
			 uintptr_t m_angular = 0x18; // RotationVector
			 uintptr_t m_linearSave = 0x24; // Vector
			 uintptr_t m_angularSave = 0x30; // RotationVector
		}
	}
}
