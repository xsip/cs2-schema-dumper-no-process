#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace PhysSoftbodyDesc_t {
			 uintptr_t m_ParticleBoneHash = 0x0; // CUtlVector< uint32 >
			 uintptr_t m_Particles = 0x18; // CUtlVector< RnSoftbodyParticle_t >
			 uintptr_t m_Springs = 0x30; // CUtlVector< RnSoftbodySpring_t >
			 uintptr_t m_Capsules = 0x48; // CUtlVector< RnSoftbodyCapsule_t >
			 uintptr_t m_InitPose = 0x60; // CUtlVector< CTransform >
			 uintptr_t m_ParticleBoneName = 0x78; // CUtlVector< CUtlString >
		}
	}
}
