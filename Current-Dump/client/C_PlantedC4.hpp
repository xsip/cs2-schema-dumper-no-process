#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PlantedC4 {
			 uintptr_t m_bBombTicking = 0xf90; // bool
			 uintptr_t m_nBombSite = 0xf94; // int32
			 uintptr_t m_nSourceSoundscapeHash = 0xf98; // int32
			 uintptr_t m_entitySpottedState = 0xfa0; // EntitySpottedState_t
			 uintptr_t m_flNextGlow = 0xfb8; // GameTime_t
			 uintptr_t m_flNextBeep = 0xfbc; // GameTime_t
			 uintptr_t m_flC4Blow = 0xfc0; // GameTime_t
			 uintptr_t m_bCannotBeDefused = 0xfc4; // bool
			 uintptr_t m_bHasExploded = 0xfc5; // bool
			 uintptr_t m_flTimerLength = 0xfc8; // float32
			 uintptr_t m_bBeingDefused = 0xfcc; // bool
			 uintptr_t m_bTriggerWarning = 0xfd0; // float32
			 uintptr_t m_bExplodeWarning = 0xfd4; // float32
			 uintptr_t m_bC4Activated = 0xfd8; // bool
			 uintptr_t m_bTenSecWarning = 0xfd9; // bool
			 uintptr_t m_flDefuseLength = 0xfdc; // float32
			 uintptr_t m_flDefuseCountDown = 0xfe0; // GameTime_t
			 uintptr_t m_bBombDefused = 0xfe4; // bool
			 uintptr_t m_hBombDefuser = 0xfe8; // CHandle< C_CSPlayerPawn >
			 uintptr_t m_hControlPanel = 0xfec; // CHandle< C_BaseEntity >
			 uintptr_t m_AttributeManager = 0xff0; // C_AttributeContainer
			 uintptr_t m_hDefuserMultimeter = 0x1498; // CHandle< C_Multimeter >
			 uintptr_t m_flNextRadarFlashTime = 0x149c; // GameTime_t
			 uintptr_t m_bRadarFlash = 0x14a0; // bool
			 uintptr_t m_pBombDefuser = 0x14a4; // CHandle< C_CSPlayerPawn >
			 uintptr_t m_fLastDefuseTime = 0x14a8; // GameTime_t
			 uintptr_t m_pPredictionOwner = 0x14b0; // CBasePlayerController*
			 uintptr_t m_vecC4ExplodeSpectatePos = 0x14b8; // Vector
			 uintptr_t m_vecC4ExplodeSpectateAng = 0x14c4; // QAngle
			 uintptr_t m_flC4ExplodeSpectateDuration = 0x14d0; // float32
		}
	}
}
