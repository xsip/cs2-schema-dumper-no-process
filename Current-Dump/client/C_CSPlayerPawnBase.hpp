#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_CSPlayerPawnBase {
			 uintptr_t m_pPingServices = 0x1360; // CCSPlayer_PingServices*
			 uintptr_t m_pViewModelServices = 0x1368; // CPlayer_ViewModelServices*
			 uintptr_t m_fRenderingClipPlane = 0x1370; // float32[4]
			 uintptr_t m_nLastClipPlaneSetupFrame = 0x1380; // int32
			 uintptr_t m_vecLastClipCameraPos = 0x1384; // Vector
			 uintptr_t m_vecLastClipCameraForward = 0x1390; // Vector
			 uintptr_t m_bClipHitStaticWorld = 0x139c; // bool
			 uintptr_t m_bCachedPlaneIsValid = 0x139d; // bool
			 uintptr_t m_pClippingWeapon = 0x13a0; // C_CSWeaponBase*
			 uintptr_t m_previousPlayerState = 0x13a8; // CSPlayerState
			 uintptr_t m_iPlayerState = 0x13ac; // CSPlayerState
			 uintptr_t m_bIsRescuing = 0x13b0; // bool
			 uintptr_t m_fImmuneToGunGameDamageTime = 0x13b4; // GameTime_t
			 uintptr_t m_fImmuneToGunGameDamageTimeLast = 0x13b8; // GameTime_t
			 uintptr_t m_bGunGameImmunity = 0x13bc; // bool
			 uintptr_t m_bHasMovedSinceSpawn = 0x13bd; // bool
			 uintptr_t m_fMolotovUseTime = 0x13c0; // float32
			 uintptr_t m_fMolotovDamageTime = 0x13c4; // float32
			 uintptr_t m_iThrowGrenadeCounter = 0x13c8; // int32
			 uintptr_t m_flLastSpawnTimeIndex = 0x13cc; // GameTime_t
			 uintptr_t m_iProgressBarDuration = 0x13d0; // int32
			 uintptr_t m_flProgressBarStartTime = 0x13d4; // float32
			 uintptr_t m_vecIntroStartEyePosition = 0x13d8; // Vector
			 uintptr_t m_vecIntroStartPlayerForward = 0x13e4; // Vector
			 uintptr_t m_flClientDeathTime = 0x13f0; // GameTime_t
			 uintptr_t m_bScreenTearFrameCaptured = 0x13f4; // bool
			 uintptr_t m_flFlashBangTime = 0x13f8; // float32
			 uintptr_t m_flFlashScreenshotAlpha = 0x13fc; // float32
			 uintptr_t m_flFlashOverlayAlpha = 0x1400; // float32
			 uintptr_t m_bFlashBuildUp = 0x1404; // bool
			 uintptr_t m_bFlashDspHasBeenCleared = 0x1405; // bool
			 uintptr_t m_bFlashScreenshotHasBeenGrabbed = 0x1406; // bool
			 uintptr_t m_flFlashMaxAlpha = 0x1408; // float32
			 uintptr_t m_flFlashDuration = 0x140c; // float32
			 uintptr_t m_iHealthBarRenderMaskIndex = 0x1410; // int32
			 uintptr_t m_flHealthFadeValue = 0x1414; // float32
			 uintptr_t m_flHealthFadeAlpha = 0x1418; // float32
			 uintptr_t m_flDeathCCWeight = 0x1428; // float32
			 uintptr_t m_flPrevRoundEndTime = 0x142c; // float32
			 uintptr_t m_flPrevMatchEndTime = 0x1430; // float32
			 uintptr_t m_angEyeAngles = 0x1438; // QAngle
			 uintptr_t m_fNextThinkPushAway = 0x1450; // float32
			 uintptr_t m_bShouldAutobuyDMWeapons = 0x1454; // bool
			 uintptr_t m_bShouldAutobuyNow = 0x1455; // bool
			 uintptr_t m_iIDEntIndex = 0x1458; // CEntityIndex
			 uintptr_t m_delayTargetIDTimer = 0x1460; // CountdownTimer
			 uintptr_t m_iTargetItemEntIdx = 0x1478; // CEntityIndex
			 uintptr_t m_iOldIDEntIndex = 0x147c; // CEntityIndex
			 uintptr_t m_holdTargetIDTimer = 0x1480; // CountdownTimer
			 uintptr_t m_flCurrentMusicStartTime = 0x149c; // float32
			 uintptr_t m_flMusicRoundStartTime = 0x14a0; // float32
			 uintptr_t m_bDeferStartMusicOnWarmup = 0x14a4; // bool
			 uintptr_t m_cycleLatch = 0x14a8; // int32
			 uintptr_t m_serverIntendedCycle = 0x14ac; // float32
			 uintptr_t m_flLastSmokeOverlayAlpha = 0x14b0; // float32
			 uintptr_t m_flLastSmokeAge = 0x14b4; // float32
			 uintptr_t m_vLastSmokeOverlayColor = 0x14b8; // Vector
			 uintptr_t m_nPlayerSmokedFx = 0x14c4; // ParticleIndex_t
			 uintptr_t m_nPlayerInfernoBodyFx = 0x14c8; // ParticleIndex_t
			 uintptr_t m_nPlayerInfernoFootFx = 0x14cc; // ParticleIndex_t
			 uintptr_t m_flNextMagDropTime = 0x14d0; // float32
			 uintptr_t m_nLastMagDropAttachmentIndex = 0x14d4; // int32
			 uintptr_t m_vecLastAliveLocalVelocity = 0x14d8; // Vector
			 uintptr_t m_bGuardianShouldSprayCustomXMark = 0x1500; // bool
			 uintptr_t m_hOriginalController = 0x1508; // CHandle< CCSPlayerController >
		}
	}
}
