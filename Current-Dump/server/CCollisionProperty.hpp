#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCollisionProperty {
			 uintptr_t m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
			 uintptr_t m_vecMins = 0x40; // Vector
			 uintptr_t m_vecMaxs = 0x4c; // Vector
			 uintptr_t m_usSolidFlags = 0x5a; // uint8
			 uintptr_t m_nSolidType = 0x5b; // SolidType_t
			 uintptr_t m_triggerBloat = 0x5c; // uint8
			 uintptr_t m_nSurroundType = 0x5d; // SurroundingBoundsType_t
			 uintptr_t m_CollisionGroup = 0x5e; // uint8
			 uintptr_t m_nEnablePhysics = 0x5f; // uint8
			 uintptr_t m_flBoundingRadius = 0x60; // float32
			 uintptr_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
			 uintptr_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
			 uintptr_t m_vecSurroundingMaxs = 0x7c; // Vector
			 uintptr_t m_vecSurroundingMins = 0x88; // Vector
			 uintptr_t m_vCapsuleCenter1 = 0x94; // Vector
			 uintptr_t m_vCapsuleCenter2 = 0xa0; // Vector
			 uintptr_t m_flCapsuleRadius = 0xac; // float32
		}
	}
}
