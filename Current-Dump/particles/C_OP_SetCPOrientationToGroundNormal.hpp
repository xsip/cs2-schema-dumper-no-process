#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_SetCPOrientationToGroundNormal {
			 uintptr_t m_flInterpRate = 0x1c0; // float32
			 uintptr_t m_flMaxTraceLength = 0x1c4; // float32
			 uintptr_t m_flTolerance = 0x1c8; // float32
			 uintptr_t m_flTraceOffset = 0x1cc; // float32
			 uintptr_t m_CollisionGroupName = 0x1d0; // char[128]
			 uintptr_t m_nTraceSet = 0x250; // ParticleTraceSet_t
			 uintptr_t m_nInputCP = 0x254; // int32
			 uintptr_t m_nOutputCP = 0x258; // int32
			 uintptr_t m_bIncludeWater = 0x268; // bool
		}
	}
}
