#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSWeaponBase {
			 uintptr_t m_bRemoveable = 0xda0;
			 uintptr_t m_flFireSequenceStartTime = 0xda8;
			 uintptr_t m_nFireSequenceStartTimeChange = 0xdac;
			 uintptr_t m_nFireSequenceStartTimeAck = 0xdb0;
			 uintptr_t m_ePlayerFireEvent = 0xdb4;
			 uintptr_t m_ePlayerFireEventAttackType = 0xdb8;
			 uintptr_t m_seqIdle = 0xdbc;
			 uintptr_t m_seqFirePrimary = 0xdc0;
			 uintptr_t m_seqFireSecondary = 0xdc4;
			 uintptr_t m_thirdPersonFireSequences = 0xdc8;
			 uintptr_t m_hCurrentThirdPersonSequence = 0xde0;
			 uintptr_t m_nSilencerBoneIndex = 0xde4;
			 uintptr_t m_thirdPersonSequences = 0xde8;
			 uintptr_t m_bPlayerAmmoStockOnPickup = 0xe10;
			 uintptr_t m_bRequireUseToTouch = 0xe11;
			 uintptr_t m_iState = 0xe14;
			 uintptr_t m_flLastTimeInAir = 0xe18;
			 uintptr_t m_flLastDeployTime = 0xe1c;
			 uintptr_t m_nLastEmptySoundCmdNum = 0xe20;
			 uintptr_t m_nViewModelIndex = 0xe24;
			 uintptr_t m_bReloadsWithClips = 0xe28;
			 uintptr_t m_flTimeWeaponIdle = 0xe48;
			 uintptr_t m_bFireOnEmpty = 0xe4c;
			 uintptr_t m_OnPlayerPickup = 0xe50;
			 uintptr_t m_weaponMode = 0xe78;
			 uintptr_t m_flTurningInaccuracyDelta = 0xe7c;
			 uintptr_t m_vecTurningInaccuracyEyeDirLast = 0xe80;
			 uintptr_t m_flTurningInaccuracy = 0xe8c;
			 uintptr_t m_fAccuracyPenalty = 0xe90;
			 uintptr_t m_flLastAccuracyUpdateTime = 0xe94;
			 uintptr_t m_fAccuracySmoothedForZoom = 0xe98;
			 uintptr_t m_fScopeZoomEndTime = 0xe9c;
			 uintptr_t m_iRecoilIndex = 0xea0;
			 uintptr_t m_flRecoilIndex = 0xea4;
			 uintptr_t m_bBurstMode = 0xea8;
			 uintptr_t m_nPostponeFireReadyTicks = 0xeac;
			 uintptr_t m_flPostponeFireReadyFrac = 0xeb0;
			 uintptr_t m_bInReload = 0xeb4;
			 uintptr_t m_bReloadVisuallyComplete = 0xeb5;
			 uintptr_t m_flDroppedAtTime = 0xeb8;
			 uintptr_t m_bIsHauledBack = 0xebc;
			 uintptr_t m_bSilencerOn = 0xebd;
			 uintptr_t m_flTimeSilencerSwitchComplete = 0xec0;
			 uintptr_t m_iOriginalTeamNumber = 0xec4;
			 uintptr_t m_iMostRecentTeamNumber = 0xec8;
			 uintptr_t m_bDroppedNearBuyZone = 0xecc;
			 uintptr_t m_flNextAttackRenderTimeOffset = 0xed0;
			 uintptr_t m_bCanBePickedUp = 0xee8;
			 uintptr_t m_bUseCanOverrideNextOwnerTouchTime = 0xee9;
			 uintptr_t m_nextOwnerTouchTime = 0xeec;
			 uintptr_t m_nextPrevOwnerTouchTime = 0xef0;
			 uintptr_t m_nextPrevOwnerUseTime = 0xef8;
			 uintptr_t m_hPrevOwner = 0xefc;
			 uintptr_t m_nDropTick = 0xf00;
			 uintptr_t m_donated = 0xf24;
			 uintptr_t m_fLastShotTime = 0xf28;
			 uintptr_t m_bWasOwnedByCT = 0xf2c;
			 uintptr_t m_bWasOwnedByTerrorist = 0xf2d;
			 uintptr_t m_bFiredOutOfAmmoEvent = 0xf2e;
			 uintptr_t m_numRemoveUnownedWeaponThink = 0xf30;
			 uintptr_t m_IronSightController = 0xf38;
			 uintptr_t m_iIronSightMode = 0xf50;
			 uintptr_t m_flLastLOSTraceFailureTime = 0xf54;
			 uintptr_t m_iNumEmptyAttacks = 0xf58;
			 uintptr_t m_flWatTickOffset = 0xf5c;
		}
	}
}
