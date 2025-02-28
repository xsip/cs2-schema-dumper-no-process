#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_LifespanFromVelocity {
			 uintptr_t m_vecComponentScale = 0x1c8; // Vector
			 uintptr_t m_flTraceOffset = 0x1d4; // float32
			 uintptr_t m_flMaxTraceLength = 0x1d8; // float32
			 uintptr_t m_flTraceTolerance = 0x1dc; // float32
			 uintptr_t m_nMaxPlanes = 0x1e0; // int32
			 uintptr_t m_CollisionGroupName = 0x1e8; // char[128]
			 uintptr_t m_nTraceSet = 0x268; // ParticleTraceSet_t
			 uintptr_t m_bIncludeWater = 0x278; // bool
		}
	}
}
