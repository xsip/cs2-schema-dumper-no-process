#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCollisionProperty {
			 uintptr_t m_collisionAttribute = 0x10;
			 uintptr_t m_vecMins = 0x40;
			 uintptr_t m_vecMaxs = 0x4c;
			 uintptr_t m_usSolidFlags = 0x5a;
			 uintptr_t m_nSolidType = 0x5b;
			 uintptr_t m_triggerBloat = 0x5c;
			 uintptr_t m_nSurroundType = 0x5d;
			 uintptr_t m_CollisionGroup = 0x5e;
			 uintptr_t m_nEnablePhysics = 0x5f;
			 uintptr_t m_flBoundingRadius = 0x60;
			 uintptr_t m_vecSpecifiedSurroundingMins = 0x64;
			 uintptr_t m_vecSpecifiedSurroundingMaxs = 0x70;
			 uintptr_t m_vecSurroundingMaxs = 0x7c;
			 uintptr_t m_vecSurroundingMins = 0x88;
			 uintptr_t m_vCapsuleCenter1 = 0x94;
			 uintptr_t m_vCapsuleCenter2 = 0xa0;
			 uintptr_t m_flCapsuleRadius = 0xac;
		}
	}
}
