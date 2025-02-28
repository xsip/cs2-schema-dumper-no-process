#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace FeVertexMapDesc_t {
			 uintptr_t sName = 0x0; // CUtlString
			 uintptr_t nNameHash = 0x8; // uint32
			 uintptr_t nColor = 0xc; // uint32
			 uintptr_t nFlags = 0x10; // uint32
			 uintptr_t nVertexBase = 0x14; // uint16
			 uintptr_t nVertexCount = 0x16; // uint16
			 uintptr_t nMapOffset = 0x18; // uint32
			 uintptr_t nNodeListOffset = 0x1c; // uint32
			 uintptr_t vCenterOfMass = 0x20; // Vector
			 uintptr_t flVolumetricSolveStrength = 0x2c; // float32
			 uintptr_t nScaleSourceNode = 0x30; // int16
			 uintptr_t nNodeListCount = 0x32; // uint16
		}
	}
}
