#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_DistanceBetweenCPsToCP {
			 uintptr_t m_nStartCP = 0x1c8; // int32
			 uintptr_t m_nEndCP = 0x1cc; // int32
			 uintptr_t m_nOutputCP = 0x1d0; // int32
			 uintptr_t m_nOutputCPField = 0x1d4; // int32
			 uintptr_t m_bSetOnce = 0x1d8; // bool
			 uintptr_t m_flInputMin = 0x1dc; // float32
			 uintptr_t m_flInputMax = 0x1e0; // float32
			 uintptr_t m_flOutputMin = 0x1e4; // float32
			 uintptr_t m_flOutputMax = 0x1e8; // float32
			 uintptr_t m_flMaxTraceLength = 0x1ec; // float32
			 uintptr_t m_flLOSScale = 0x1f0; // float32
			 uintptr_t m_bLOS = 0x1f4; // bool
			 uintptr_t m_CollisionGroupName = 0x1f5; // char[128]
			 uintptr_t m_nTraceSet = 0x278; // ParticleTraceSet_t
			 uintptr_t m_nSetParent = 0x27c; // ParticleParentSetMode_t
		}
	}
}
