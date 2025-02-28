#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CPlayer_MovementServices_Humanoid {
			 uintptr_t m_flStepSoundTime = 0x1d8; // float32
			 uintptr_t m_flFallVelocity = 0x1dc; // float32
			 uintptr_t m_bInCrouch = 0x1e0; // bool
			 uintptr_t m_nCrouchState = 0x1e4; // uint32
			 uintptr_t m_flCrouchTransitionStartTime = 0x1e8; // GameTime_t
			 uintptr_t m_bDucked = 0x1ec; // bool
			 uintptr_t m_bDucking = 0x1ed; // bool
			 uintptr_t m_bInDuckJump = 0x1ee; // bool
			 uintptr_t m_groundNormal = 0x1f0; // Vector
			 uintptr_t m_flSurfaceFriction = 0x1fc; // float32
			 uintptr_t m_surfaceProps = 0x200; // CUtlStringToken
			 uintptr_t m_nStepside = 0x210; // int32
		}
	}
}
