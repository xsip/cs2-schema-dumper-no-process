#include <Windows.h>


namespace xsip {
	namespace server {
		namespace lerpdata_t {
			 uintptr_t m_hEnt = 0x0; // CHandle< CBaseEntity >
			 uintptr_t m_MoveType = 0x4; // MoveType_t
			 uintptr_t m_flStartTime = 0x8; // GameTime_t
			 uintptr_t m_vecStartOrigin = 0xc; // Vector
			 uintptr_t m_qStartRot = 0x20; // Quaternion
			 uintptr_t m_nFXIndex = 0x30; // ParticleIndex_t
		}
	}
}
