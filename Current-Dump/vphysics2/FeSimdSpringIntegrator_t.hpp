#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace FeSimdSpringIntegrator_t {
			 uintptr_t nNode = 0x0; // uint16[4][2]
			 uintptr_t flSpringRestLength = 0x10; // fltx4
			 uintptr_t flSpringConstant = 0x20; // fltx4
			 uintptr_t flSpringDamping = 0x30; // fltx4
			 uintptr_t flNodeWeight0 = 0x40; // fltx4
		}
	}
}
