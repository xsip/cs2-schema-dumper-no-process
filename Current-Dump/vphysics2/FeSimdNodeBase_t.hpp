#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace FeSimdNodeBase_t {
			 uintptr_t nNode = 0x0; // uint16[4]
			 uintptr_t nNodeX0 = 0x8; // uint16[4]
			 uintptr_t nNodeX1 = 0x10; // uint16[4]
			 uintptr_t nNodeY0 = 0x18; // uint16[4]
			 uintptr_t nNodeY1 = 0x20; // uint16[4]
			 uintptr_t nDummy = 0x28; // uint16[4]
			 uintptr_t qAdjust = 0x30; // FourQuaternions
		}
	}
}
