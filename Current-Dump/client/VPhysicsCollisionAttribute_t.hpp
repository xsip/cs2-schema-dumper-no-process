#include <Windows.h>


namespace xsip {
	namespace client {
		namespace VPhysicsCollisionAttribute_t {
			 uintptr_t m_nInteractsAs = 0x8; // uint64
			 uintptr_t m_nInteractsWith = 0x10; // uint64
			 uintptr_t m_nInteractsExclude = 0x18; // uint64
			 uintptr_t m_nEntityId = 0x20; // uint32
			 uintptr_t m_nOwnerId = 0x24; // uint32
			 uintptr_t m_nHierarchyId = 0x28; // uint16
			 uintptr_t m_nCollisionGroup = 0x2a; // uint8
			 uintptr_t m_nCollisionFunctionMask = 0x2b; // uint8
		}
	}
}
