#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_CSWeaponBase {
			 uintptr_t m_flFireSequenceStartTime = 0x16dc;
			 uintptr_t m_nFireSequenceStartTimeChange = 0x16e0;
			 uintptr_t m_nFireSequenceStartTimeAck = 0x16e4;
			 uintptr_t m_ePlayerFireEvent = 0x16e8;
			 uintptr_t m_ePlayerFireEventAttackType = 0x16ec;
			 uintptr_t m_seqIdle = 0x16f0;
			 uintptr_t m_seqFirePrimary = 0x16f4;
			 uintptr_t m_seqFireSecondary = 0x16f8;
			 uintptr_t m_thirdPersonFireSequences = 0x1700;
			 uintptr_t m_hCurrentThirdPersonSequence = 0x1718;
			 uintptr_t m_nSilencerBoneIndex = 0x171c;
			 uintptr_t m_thirdPersonSequences = 0x1720;
			 uintptr_t m_ClientPreviousWeaponState = 0x1758;
			 uintptr_t m_iState = 0x175c;
			 uintptr_t m_flCrosshairDistance = 0x1760;
			 uintptr_t m_iAmmoLastCheck = 0x1764;
			 uintptr_t m_iAlpha = 0x1768;
			 uintptr_t m_iScopeTextureID = 0x176c;
			 uintptr_t m_iCrosshairTextureID = 0x1770;
			 uintptr_t m_flGunAccuracyPositionDeprecated = 0x1774;
			 uintptr_t m_nLastEmptySoundCmdNum = 0x1778;
			 uintptr_t m_nViewModelIndex = 0x177c;
			 uintptr_t m_bReloadsWithClips = 0x1780;
			 uintptr_t m_flTimeWeaponIdle = 0x1784;
			 uintptr_t m_bFireOnEmpty = 0x1788;
			 uintptr_t m_OnPlayerPickup = 0x1790;
			 uintptr_t m_weaponMode = 0x17b8;
			 uintptr_t m_flTurningInaccuracyDelta = 0x17bc;
			 uintptr_t m_vecTurningInaccuracyEyeDirLast = 0x17c0;
			 uintptr_t m_flTurningInaccuracy = 0x17cc;
			 uintptr_t m_fAccuracyPenalty = 0x17d0;
			 uintptr_t m_flLastAccuracyUpdateTime = 0x17d4;
			 uintptr_t m_fAccuracySmoothedForZoom = 0x17d8;
			 uintptr_t m_fScopeZoomEndTime = 0x17dc;
			 uintptr_t m_iRecoilIndex = 0x17e0;
			 uintptr_t m_flRecoilIndex = 0x17e4;
			 uintptr_t m_bBurstMode = 0x17e8;
			 uintptr_t m_flLastBurstModeChangeTime = 0x17ec;
			 uintptr_t m_nPostponeFireReadyTicks = 0x17f0;
			 uintptr_t m_flPostponeFireReadyFrac = 0x17f4;
			 uintptr_t m_bInReload = 0x17f8;
			 uintptr_t m_bReloadVisuallyComplete = 0x17f9;
			 uintptr_t m_flDroppedAtTime = 0x17fc;
			 uintptr_t m_bIsHauledBack = 0x1800;
			 uintptr_t m_bSilencerOn = 0x1801;
			 uintptr_t m_flTimeSilencerSwitchComplete = 0x1804;
			 uintptr_t m_iOriginalTeamNumber = 0x1808;
			 uintptr_t m_iMostRecentTeamNumber = 0x180c;
			 uintptr_t m_bDroppedNearBuyZone = 0x1810;
			 uintptr_t m_flNextAttackRenderTimeOffset = 0x1814;
			 uintptr_t m_bClearWeaponIdentifyingUGC = 0x18b0;
			 uintptr_t m_bVisualsDataSet = 0x18b1;
			 uintptr_t m_bOldFirstPersonSpectatedState = 0x18b2;
			 uintptr_t m_bUIWeapon = 0x18b3;
			 uintptr_t m_nCustomEconReloadEventId = 0x18b4;
			 uintptr_t m_nextPrevOwnerUseTime = 0x18c0;
			 uintptr_t m_hPrevOwner = 0x18c4;
			 uintptr_t m_nDropTick = 0x18c8;
			 uintptr_t m_donated = 0x18ec;
			 uintptr_t m_fLastShotTime = 0x18f0;
			 uintptr_t m_bWasOwnedByCT = 0x18f4;
			 uintptr_t m_bWasOwnedByTerrorist = 0x18f5;
			 uintptr_t m_gunHeat = 0x18f8;
			 uintptr_t m_smokeAttachments = 0x18fc;
			 uintptr_t m_lastSmokeTime = 0x1900;
			 uintptr_t m_flNextClientFireBulletTime = 0x1904;
			 uintptr_t m_flNextClientFireBulletTime_Repredict = 0x1908;
			 uintptr_t m_IronSightController = 0x19e0;
			 uintptr_t m_iIronSightMode = 0x1a90;
			 uintptr_t m_flLastLOSTraceFailureTime = 0x1aa0;
			 uintptr_t m_iNumEmptyAttacks = 0x1aa4;
			 uintptr_t m_flLastMagDropRequestTime = 0x1b00;
			 uintptr_t m_flWatTickOffset = 0x1b04;
		}
	}
}
