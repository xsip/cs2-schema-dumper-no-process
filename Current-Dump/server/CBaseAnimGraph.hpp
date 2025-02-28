#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseAnimGraph {
			 uintptr_t m_bInitiallyPopulateInterpHistory = 0x808;
			 uintptr_t m_pChoreoServices = 0x810;
			 uintptr_t m_bAnimGraphUpdateEnabled = 0x818;
			 uintptr_t m_flMaxSlopeDistance = 0x81c;
			 uintptr_t m_vLastSlopeCheckPos = 0x820;
			 uintptr_t m_bAnimationUpdateScheduled = 0x82c;
			 uintptr_t m_vecForce = 0x830;
			 uintptr_t m_nForceBone = 0x83c;
			 uintptr_t m_RagdollPose = 0x850;
			 uintptr_t m_bRagdollClientSide = 0x878;
			 uintptr_t m_nLastDestructiblePartDestroyedAnimgraphSetTick = 0x9a0;
		}
	}
}
