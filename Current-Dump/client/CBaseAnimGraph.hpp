#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CBaseAnimGraph {
			 uintptr_t m_bInitiallyPopulateInterpHistory = 0xda0;
			 uintptr_t m_bSuppressAnimEventSounds = 0xda2;
			 uintptr_t m_bAnimGraphUpdateEnabled = 0xdb0;
			 uintptr_t m_flMaxSlopeDistance = 0xdb4;
			 uintptr_t m_vLastSlopeCheckPos = 0xdb8;
			 uintptr_t m_bAnimationUpdateScheduled = 0xdc4;
			 uintptr_t m_vecForce = 0xdc8;
			 uintptr_t m_nForceBone = 0xdd4;
			 uintptr_t m_pClientsideRagdoll = 0xdd8;
			 uintptr_t m_bBuiltRagdoll = 0xde0;
			 uintptr_t m_RagdollPose = 0xdf8;
			 uintptr_t m_bRagdollClientSide = 0xe40;
			 uintptr_t m_bHasAnimatedMaterialAttributes = 0xe50;
		}
	}
}
