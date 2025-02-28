#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_Hostage {
			 uintptr_t m_entitySpottedState = 0x11a8; // EntitySpottedState_t
			 uintptr_t m_leader = 0x11c0; // CHandle< C_BaseEntity >
			 uintptr_t m_reuseTimer = 0x11c8; // CountdownTimer
			 uintptr_t m_vel = 0x11e0; // Vector
			 uintptr_t m_isRescued = 0x11ec; // bool
			 uintptr_t m_jumpedThisFrame = 0x11ed; // bool
			 uintptr_t m_nHostageState = 0x11f0; // int32
			 uintptr_t m_bHandsHaveBeenCut = 0x11f4; // bool
			 uintptr_t m_hHostageGrabber = 0x11f8; // CHandle< C_CSPlayerPawn >
			 uintptr_t m_fLastGrabTime = 0x11fc; // GameTime_t
			 uintptr_t m_vecGrabbedPos = 0x1200; // Vector
			 uintptr_t m_flRescueStartTime = 0x120c; // GameTime_t
			 uintptr_t m_flGrabSuccessTime = 0x1210; // GameTime_t
			 uintptr_t m_flDropStartTime = 0x1214; // GameTime_t
			 uintptr_t m_flDeadOrRescuedTime = 0x1218; // GameTime_t
			 uintptr_t m_blinkTimer = 0x1220; // CountdownTimer
			 uintptr_t m_lookAt = 0x1238; // Vector
			 uintptr_t m_lookAroundTimer = 0x1248; // CountdownTimer
			 uintptr_t m_isInit = 0x1260; // bool
			 uintptr_t m_eyeAttachment = 0x1261; // AttachmentHandle_t
			 uintptr_t m_chestAttachment = 0x1262; // AttachmentHandle_t
			 uintptr_t m_pPredictionOwner = 0x1268; // CBasePlayerController*
			 uintptr_t m_fNewestAlphaThinkTime = 0x1270; // GameTime_t
		}
	}
}
