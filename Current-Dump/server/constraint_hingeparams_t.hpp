#include <Windows.h>


namespace xsip {
	namespace server {
		namespace constraint_hingeparams_t {
			 uintptr_t worldPosition = 0x0; // Vector
			 uintptr_t worldAxisDirection = 0xc; // Vector
			 uintptr_t hingeAxis = 0x18; // constraint_axislimit_t
			 uintptr_t constraint = 0x28; // constraint_breakableparams_t
		}
	}
}
