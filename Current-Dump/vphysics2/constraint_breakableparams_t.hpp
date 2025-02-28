#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace constraint_breakableparams_t {
			 uintptr_t strength = 0x0; // float32
			 uintptr_t forceLimit = 0x4; // float32
			 uintptr_t torqueLimit = 0x8; // float32
			 uintptr_t bodyMassScale = 0xc; // float32[2]
			 uintptr_t isActive = 0x14; // bool
		}
	}
}
