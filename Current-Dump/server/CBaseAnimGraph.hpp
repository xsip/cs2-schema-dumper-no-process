#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseAnimGraph {
			 uintptr_t m_bInitiallyPopulateInterpHistory = 0x808; // bool
			 uintptr_t m_pChoreoServices = 0x810; // IChoreoServices*
			 uintptr_t m_bAnimGraphUpdateEnabled = 0x818; // bool
			 uintptr_t m_flMaxSlopeDistance = 0x81c; // float32
			 uintptr_t m_vLastSlopeCheckPos = 0x820; // Vector
			 uintptr_t m_bAnimationUpdateScheduled = 0x82c; // bool
			 uintptr_t m_vecForce = 0x830; // Vector
			 uintptr_t m_nForceBone = 0x83c; // int32
			 uintptr_t m_RagdollPose = 0x850; // PhysicsRagdollPose_t
			 uintptr_t m_bRagdollClientSide = 0x878; // bool
			 uintptr_t m_nLastDestructiblePartDestroyedAnimgraphSetTick = 0x9a0; // int32
		}
	}
}
