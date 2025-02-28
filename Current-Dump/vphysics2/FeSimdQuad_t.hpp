#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace FeSimdQuad_t {
			 uintptr_t nNode = 0x0; // uint16[4][4]
			 uintptr_t f4Slack = 0x20; // fltx4
			 uintptr_t vShape = 0x30; // FourVectors[4]
			 uintptr_t f4Weights = 0xf0; // fltx4[4]
		}
	}
}
