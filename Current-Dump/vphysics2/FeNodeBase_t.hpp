#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace FeNodeBase_t {
			 uintptr_t nNode = 0x0; // uint16
			 uintptr_t nDummy = 0x2; // uint16[3]
			 uintptr_t nNodeX0 = 0x8; // uint16
			 uintptr_t nNodeX1 = 0xa; // uint16
			 uintptr_t nNodeY0 = 0xc; // uint16
			 uintptr_t nNodeY1 = 0xe; // uint16
			 uintptr_t qAdjust = 0x10; // QuaternionStorage
		}
	}
}
