#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CBaseAnimGraph {
			 uintptr_t m_bInitiallyPopulateInterpHistory = 0xda0; // bool
			 uintptr_t m_bSuppressAnimEventSounds = 0xda2; // bool
			 uintptr_t m_bAnimGraphUpdateEnabled = 0xdb0; // bool
			 uintptr_t m_flMaxSlopeDistance = 0xdb4; // float32
			 uintptr_t m_vLastSlopeCheckPos = 0xdb8; // Vector
			 uintptr_t m_bAnimationUpdateScheduled = 0xdc4; // bool
			 uintptr_t m_vecForce = 0xdc8; // Vector
			 uintptr_t m_nForceBone = 0xdd4; // int32
			 uintptr_t m_pClientsideRagdoll = 0xdd8; // CBaseAnimGraph*
			 uintptr_t m_bBuiltRagdoll = 0xde0; // bool
			 uintptr_t m_RagdollPose = 0xdf8; // PhysicsRagdollPose_t
			 uintptr_t m_bRagdollClientSide = 0xe40; // bool
			 uintptr_t m_bHasAnimatedMaterialAttributes = 0xe50; // bool
		}
	}
}
