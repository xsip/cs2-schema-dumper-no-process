#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_CSWeaponBase {
			 uintptr_t m_flFireSequenceStartTime = 0x16dc; // float32
			 uintptr_t m_nFireSequenceStartTimeChange = 0x16e0; // int32
			 uintptr_t m_nFireSequenceStartTimeAck = 0x16e4; // int32
			 uintptr_t m_ePlayerFireEvent = 0x16e8; // PlayerAnimEvent_t
			 uintptr_t m_ePlayerFireEventAttackType = 0x16ec; // WeaponAttackType_t
			 uintptr_t m_seqIdle = 0x16f0; // HSequence
			 uintptr_t m_seqFirePrimary = 0x16f4; // HSequence
			 uintptr_t m_seqFireSecondary = 0x16f8; // HSequence
			 uintptr_t m_thirdPersonFireSequences = 0x1700; // CUtlVector< HSequence >
			 uintptr_t m_hCurrentThirdPersonSequence = 0x1718; // HSequence
			 uintptr_t m_nSilencerBoneIndex = 0x171c; // int32
			 uintptr_t m_thirdPersonSequences = 0x1720; // HSequence[7]
			 uintptr_t m_ClientPreviousWeaponState = 0x1758; // CSWeaponState_t
			 uintptr_t m_iState = 0x175c; // CSWeaponState_t
			 uintptr_t m_flCrosshairDistance = 0x1760; // float32
			 uintptr_t m_iAmmoLastCheck = 0x1764; // int32
			 uintptr_t m_iAlpha = 0x1768; // int32
			 uintptr_t m_iScopeTextureID = 0x176c; // int32
			 uintptr_t m_iCrosshairTextureID = 0x1770; // int32
			 uintptr_t m_flGunAccuracyPositionDeprecated = 0x1774; // float32
			 uintptr_t m_nLastEmptySoundCmdNum = 0x1778; // int32
			 uintptr_t m_nViewModelIndex = 0x177c; // uint32
			 uintptr_t m_bReloadsWithClips = 0x1780; // bool
			 uintptr_t m_flTimeWeaponIdle = 0x1784; // GameTime_t
			 uintptr_t m_bFireOnEmpty = 0x1788; // bool
			 uintptr_t m_OnPlayerPickup = 0x1790; // CEntityIOOutput
			 uintptr_t m_weaponMode = 0x17b8; // CSWeaponMode
			 uintptr_t m_flTurningInaccuracyDelta = 0x17bc; // float32
			 uintptr_t m_vecTurningInaccuracyEyeDirLast = 0x17c0; // Vector
			 uintptr_t m_flTurningInaccuracy = 0x17cc; // float32
			 uintptr_t m_fAccuracyPenalty = 0x17d0; // float32
			 uintptr_t m_flLastAccuracyUpdateTime = 0x17d4; // GameTime_t
			 uintptr_t m_fAccuracySmoothedForZoom = 0x17d8; // float32
			 uintptr_t m_fScopeZoomEndTime = 0x17dc; // GameTime_t
			 uintptr_t m_iRecoilIndex = 0x17e0; // int32
			 uintptr_t m_flRecoilIndex = 0x17e4; // float32
			 uintptr_t m_bBurstMode = 0x17e8; // bool
			 uintptr_t m_flLastBurstModeChangeTime = 0x17ec; // GameTime_t
			 uintptr_t m_nPostponeFireReadyTicks = 0x17f0; // GameTick_t
			 uintptr_t m_flPostponeFireReadyFrac = 0x17f4; // float32
			 uintptr_t m_bInReload = 0x17f8; // bool
			 uintptr_t m_bReloadVisuallyComplete = 0x17f9; // bool
			 uintptr_t m_flDroppedAtTime = 0x17fc; // GameTime_t
			 uintptr_t m_bIsHauledBack = 0x1800; // bool
			 uintptr_t m_bSilencerOn = 0x1801; // bool
			 uintptr_t m_flTimeSilencerSwitchComplete = 0x1804; // GameTime_t
			 uintptr_t m_iOriginalTeamNumber = 0x1808; // int32
			 uintptr_t m_iMostRecentTeamNumber = 0x180c; // int32
			 uintptr_t m_bDroppedNearBuyZone = 0x1810; // bool
			 uintptr_t m_flNextAttackRenderTimeOffset = 0x1814; // float32
			 uintptr_t m_bClearWeaponIdentifyingUGC = 0x18b0; // bool
			 uintptr_t m_bVisualsDataSet = 0x18b1; // bool
			 uintptr_t m_bOldFirstPersonSpectatedState = 0x18b2; // bool
			 uintptr_t m_bUIWeapon = 0x18b3; // bool
			 uintptr_t m_nCustomEconReloadEventId = 0x18b4; // int32
			 uintptr_t m_nextPrevOwnerUseTime = 0x18c0; // GameTime_t
			 uintptr_t m_hPrevOwner = 0x18c4; // CHandle< C_CSPlayerPawn >
			 uintptr_t m_nDropTick = 0x18c8; // GameTick_t
			 uintptr_t m_donated = 0x18ec; // bool
			 uintptr_t m_fLastShotTime = 0x18f0; // GameTime_t
			 uintptr_t m_bWasOwnedByCT = 0x18f4; // bool
			 uintptr_t m_bWasOwnedByTerrorist = 0x18f5; // bool
			 uintptr_t m_gunHeat = 0x18f8; // float32
			 uintptr_t m_smokeAttachments = 0x18fc; // uint32
			 uintptr_t m_lastSmokeTime = 0x1900; // GameTime_t
			 uintptr_t m_flNextClientFireBulletTime = 0x1904; // float32
			 uintptr_t m_flNextClientFireBulletTime_Repredict = 0x1908; // float32
			 uintptr_t m_IronSightController = 0x19e0; // C_IronSightController
			 uintptr_t m_iIronSightMode = 0x1a90; // int32
			 uintptr_t m_flLastLOSTraceFailureTime = 0x1aa0; // GameTime_t
			 uintptr_t m_iNumEmptyAttacks = 0x1aa4; // int32
			 uintptr_t m_flLastMagDropRequestTime = 0x1b00; // GameTime_t
			 uintptr_t m_flWatTickOffset = 0x1b04; // float32
		}
	}
}
