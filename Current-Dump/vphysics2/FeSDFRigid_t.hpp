#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace FeSDFRigid_t {
			 uintptr_t vLocalMin = 0x0; // Vector
			 uintptr_t vLocalMax = 0xc; // Vector
			 uintptr_t flBounciness = 0x18; // float32
			 uintptr_t nNode = 0x1c; // uint16
			 uintptr_t nCollisionMask = 0x1e; // uint16
			 uintptr_t nVertexMapIndex = 0x20; // uint16
			 uintptr_t nFlags = 0x22; // uint16
			 uintptr_t m_Distances = 0x28; // CUtlVector< float32 >
			 uintptr_t m_nWidth = 0x40; // int32
			 uintptr_t m_nHeight = 0x44; // int32
			 uintptr_t m_nDepth = 0x48; // int32
		}
	}
}
