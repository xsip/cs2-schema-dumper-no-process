#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CScriptedSequence {
			 uintptr_t m_iszEntry = 0x4e0;
			 uintptr_t m_iszPreIdle = 0x4e8;
			 uintptr_t m_iszPlay = 0x4f0;
			 uintptr_t m_iszPostIdle = 0x4f8;
			 uintptr_t m_iszModifierToAddOnPlay = 0x500;
			 uintptr_t m_iszNextScript = 0x508;
			 uintptr_t m_iszEntity = 0x510;
			 uintptr_t m_iszSyncGroup = 0x518;
			 uintptr_t m_nMoveTo = 0x520;
			 uintptr_t m_nMoveToGait = 0x524;
			 uintptr_t m_nHeldWeaponBehavior = 0x528;
			 uintptr_t m_bIsPlayingPreIdle = 0x52c;
			 uintptr_t m_bIsPlayingEntry = 0x52d;
			 uintptr_t m_bIsPlayingAction = 0x52e;
			 uintptr_t m_bIsPlayingPostIdle = 0x52f;
			 uintptr_t m_bDontRotateOther = 0x530;
			 uintptr_t m_bIsRepeatable = 0x531;
			 uintptr_t m_bShouldLeaveCorpse = 0x532;
			 uintptr_t m_bStartOnSpawn = 0x533;
			 uintptr_t m_bDisallowInterrupts = 0x534;
			 uintptr_t m_bCanOverrideNPCState = 0x535;
			 uintptr_t m_bDontTeleportAtEnd = 0x536;
			 uintptr_t m_bHighPriority = 0x537;
			 uintptr_t m_bHideDebugComplaints = 0x538;
			 uintptr_t m_bContinueOnDeath = 0x539;
			 uintptr_t m_bLoopPreIdleSequence = 0x53a;
			 uintptr_t m_bLoopActionSequence = 0x53b;
			 uintptr_t m_bLoopPostIdleSequence = 0x53c;
			 uintptr_t m_bSynchPostIdles = 0x53d;
			 uintptr_t m_bIgnoreLookAt = 0x53e;
			 uintptr_t m_bIgnoreGravity = 0x53f;
			 uintptr_t m_bDisableNPCCollisions = 0x540;
			 uintptr_t m_bKeepAnimgraphLockedPost = 0x541;
			 uintptr_t m_bDontAddModifiers = 0x542;
			 uintptr_t m_flRadius = 0x544;
			 uintptr_t m_flRepeat = 0x548;
			 uintptr_t m_flPlayAnimFadeInTime = 0x54c;
			 uintptr_t m_flMoveInterpTime = 0x550;
			 uintptr_t m_flAngRate = 0x554;
			 uintptr_t m_bWaitUntilMoveCompletesToStartAnimation = 0x558;
			 uintptr_t m_nNotReadySequenceCount = 0x55c;
			 uintptr_t m_startTime = 0x560;
			 uintptr_t m_bWaitForBeginSequence = 0x564;
			 uintptr_t m_saved_effects = 0x568;
			 uintptr_t m_savedFlags = 0x56c;
			 uintptr_t m_savedCollisionGroup = 0x570;
			 uintptr_t m_bInterruptable = 0x574;
			 uintptr_t m_sequenceStarted = 0x575;
			 uintptr_t m_bPositionRelativeToOtherEntity = 0x576;
			 uintptr_t m_hTargetEnt = 0x578;
			 uintptr_t m_hNextCine = 0x57c;
			 uintptr_t m_bThinking = 0x580;
			 uintptr_t m_bInitiatedSelfDelete = 0x581;
			 uintptr_t m_bIsTeleportingDueToMoveTo = 0x582;
			 uintptr_t m_bAllowCustomInterruptConditions = 0x583;
			 uintptr_t m_hForcedTarget = 0x584;
			 uintptr_t m_bDontCancelOtherSequences = 0x588;
			 uintptr_t m_bForceSynch = 0x589;
			 uintptr_t m_bPreventUpdateYawOnFinish = 0x58a;
			 uintptr_t m_bEnsureOnNavmeshOnFinish = 0x58b;
			 uintptr_t m_onDeathBehavior = 0x58c;
			 uintptr_t m_ConflictResponse = 0x590;
			 uintptr_t m_OnBeginSequence = 0x598;
			 uintptr_t m_OnActionStartOrLoop = 0x5c0;
			 uintptr_t m_OnEndSequence = 0x5e8;
			 uintptr_t m_OnPostIdleEndSequence = 0x610;
			 uintptr_t m_OnCancelSequence = 0x638;
			 uintptr_t m_OnCancelFailedSequence = 0x660;
			 uintptr_t m_OnScriptEvent = 0x688;
			 uintptr_t m_matOtherToMain = 0x7d0;
			 uintptr_t m_hInteractionMainEntity = 0x7f0;
			 uintptr_t m_iPlayerDeathBehavior = 0x7f4;
		}
	}
}
