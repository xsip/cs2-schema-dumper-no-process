#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_INIT_InitialRepulsionVelocity {
			 uintptr_t m_CollisionGroupName = 0x1c8; // char[128]
			 uintptr_t m_nTraceSet = 0x248; // ParticleTraceSet_t
			 uintptr_t m_vecOutputMin = 0x24c; // Vector
			 uintptr_t m_vecOutputMax = 0x258; // Vector
			 uintptr_t m_nControlPointNumber = 0x264; // int32
			 uintptr_t m_bPerParticle = 0x268; // bool
			 uintptr_t m_bTranslate = 0x269; // bool
			 uintptr_t m_bProportional = 0x26a; // bool
			 uintptr_t m_flTraceLength = 0x26c; // float32
			 uintptr_t m_bPerParticleTR = 0x270; // bool
			 uintptr_t m_bInherit = 0x271; // bool
			 uintptr_t m_nChildCP = 0x274; // int32
			 uintptr_t m_nChildGroupID = 0x278; // int32
		}
	}
}
