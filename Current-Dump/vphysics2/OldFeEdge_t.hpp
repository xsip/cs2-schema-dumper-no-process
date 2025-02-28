#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace OldFeEdge_t {
			 uintptr_t m_flK = 0x0; // float32[3]
			 uintptr_t invA = 0xc; // float32
			 uintptr_t t = 0x10; // float32
			 uintptr_t flThetaRelaxed = 0x14; // float32
			 uintptr_t flThetaFactor = 0x18; // float32
			 uintptr_t c01 = 0x1c; // float32
			 uintptr_t c02 = 0x20; // float32
			 uintptr_t c03 = 0x24; // float32
			 uintptr_t c04 = 0x28; // float32
			 uintptr_t flAxialModelDist = 0x2c; // float32
			 uintptr_t flAxialModelWeights = 0x30; // float32[4]
			 uintptr_t m_nNode = 0x40; // uint16[4]
		}
	}
}
