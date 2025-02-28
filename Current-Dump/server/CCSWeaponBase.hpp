#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSWeaponBase {
			 uintptr_t m_bRemoveable = 0xda0; // bool
			 uintptr_t m_flFireSequenceStartTime = 0xda8; // float32
			 uintptr_t m_nFireSequenceStartTimeChange = 0xdac; // int32
			 uintptr_t m_nFireSequenceStartTimeAck = 0xdb0; // int32
			 uintptr_t m_ePlayerFireEvent = 0xdb4; // PlayerAnimEvent_t
			 uintptr_t m_ePlayerFireEventAttackType = 0xdb8; // WeaponAttackType_t
			 uintptr_t m_seqIdle = 0xdbc; // HSequence
			 uintptr_t m_seqFirePrimary = 0xdc0; // HSequence
			 uintptr_t m_seqFireSecondary = 0xdc4; // HSequence
			 uintptr_t m_thirdPersonFireSequences = 0xdc8; // CUtlVector< HSequence >
			 uintptr_t m_hCurrentThirdPersonSequence = 0xde0; // HSequence
			 uintptr_t m_nSilencerBoneIndex = 0xde4; // int32
			 uintptr_t m_thirdPersonSequences = 0xde8; // HSequence[7]
			 uintptr_t m_bPlayerAmmoStockOnPickup = 0xe10; // bool
			 uintptr_t m_bRequireUseToTouch = 0xe11; // bool
			 uintptr_t m_iState = 0xe14; // CSWeaponState_t
			 uintptr_t m_flLastTimeInAir = 0xe18; // GameTime_t
			 uintptr_t m_flLastDeployTime = 0xe1c; // GameTime_t
			 uintptr_t m_nLastEmptySoundCmdNum = 0xe20; // int32
			 uintptr_t m_nViewModelIndex = 0xe24; // uint32
			 uintptr_t m_bReloadsWithClips = 0xe28; // bool
			 uintptr_t m_flTimeWeaponIdle = 0xe48; // GameTime_t
			 uintptr_t m_bFireOnEmpty = 0xe4c; // bool
			 uintptr_t m_OnPlayerPickup = 0xe50; // CEntityIOOutput
			 uintptr_t m_weaponMode = 0xe78; // CSWeaponMode
			 uintptr_t m_flTurningInaccuracyDelta = 0xe7c; // float32
			 uintptr_t m_vecTurningInaccuracyEyeDirLast = 0xe80; // Vector
			 uintptr_t m_flTurningInaccuracy = 0xe8c; // float32
			 uintptr_t m_fAccuracyPenalty = 0xe90; // float32
			 uintptr_t m_flLastAccuracyUpdateTime = 0xe94; // GameTime_t
			 uintptr_t m_fAccuracySmoothedForZoom = 0xe98; // float32
			 uintptr_t m_fScopeZoomEndTime = 0xe9c; // GameTime_t
			 uintptr_t m_iRecoilIndex = 0xea0; // int32
			 uintptr_t m_flRecoilIndex = 0xea4; // float32
			 uintptr_t m_bBurstMode = 0xea8; // bool
			 uintptr_t m_nPostponeFireReadyTicks = 0xeac; // GameTick_t
			 uintptr_t m_flPostponeFireReadyFrac = 0xeb0; // float32
			 uintptr_t m_bInReload = 0xeb4; // bool
			 uintptr_t m_bReloadVisuallyComplete = 0xeb5; // bool
			 uintptr_t m_flDroppedAtTime = 0xeb8; // GameTime_t
			 uintptr_t m_bIsHauledBack = 0xebc; // bool
			 uintptr_t m_bSilencerOn = 0xebd; // bool
			 uintptr_t m_flTimeSilencerSwitchComplete = 0xec0; // GameTime_t
			 uintptr_t m_iOriginalTeamNumber = 0xec4; // int32
			 uintptr_t m_iMostRecentTeamNumber = 0xec8; // int32
			 uintptr_t m_bDroppedNearBuyZone = 0xecc; // bool
			 uintptr_t m_flNextAttackRenderTimeOffset = 0xed0; // float32
			 uintptr_t m_bCanBePickedUp = 0xee8; // bool
			 uintptr_t m_bUseCanOverrideNextOwnerTouchTime = 0xee9; // bool
			 uintptr_t m_nextOwnerTouchTime = 0xeec; // GameTime_t
			 uintptr_t m_nextPrevOwnerTouchTime = 0xef0; // GameTime_t
			 uintptr_t m_nextPrevOwnerUseTime = 0xef8; // GameTime_t
			 uintptr_t m_hPrevOwner = 0xefc; // CHandle< CCSPlayerPawn >
			 uintptr_t m_nDropTick = 0xf00; // GameTick_t
			 uintptr_t m_donated = 0xf24; // bool
			 uintptr_t m_fLastShotTime = 0xf28; // GameTime_t
			 uintptr_t m_bWasOwnedByCT = 0xf2c; // bool
			 uintptr_t m_bWasOwnedByTerrorist = 0xf2d; // bool
			 uintptr_t m_bFiredOutOfAmmoEvent = 0xf2e; // bool
			 uintptr_t m_numRemoveUnownedWeaponThink = 0xf30; // int32
			 uintptr_t m_IronSightController = 0xf38; // CIronSightController
			 uintptr_t m_iIronSightMode = 0xf50; // int32
			 uintptr_t m_flLastLOSTraceFailureTime = 0xf54; // GameTime_t
			 uintptr_t m_iNumEmptyAttacks = 0xf58; // int32
			 uintptr_t m_flWatTickOffset = 0xf5c; // float32
		}
	}
}
