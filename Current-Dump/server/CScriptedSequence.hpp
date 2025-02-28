#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CScriptedSequence {
			 uintptr_t m_iszEntry = 0x4e0; // CUtlSymbolLarge
			 uintptr_t m_iszPreIdle = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_iszPlay = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_iszPostIdle = 0x4f8; // CUtlSymbolLarge
			 uintptr_t m_iszModifierToAddOnPlay = 0x500; // CUtlSymbolLarge
			 uintptr_t m_iszNextScript = 0x508; // CUtlSymbolLarge
			 uintptr_t m_iszEntity = 0x510; // CUtlSymbolLarge
			 uintptr_t m_iszSyncGroup = 0x518; // CUtlSymbolLarge
			 uintptr_t m_nMoveTo = 0x520; // ScriptedMoveTo_t
			 uintptr_t m_nMoveToGait = 0x524; // MovementGait_t
			 uintptr_t m_nHeldWeaponBehavior = 0x528; // ScriptedHeldWeaponBehavior_t
			 uintptr_t m_bIsPlayingPreIdle = 0x52c; // bool
			 uintptr_t m_bIsPlayingEntry = 0x52d; // bool
			 uintptr_t m_bIsPlayingAction = 0x52e; // bool
			 uintptr_t m_bIsPlayingPostIdle = 0x52f; // bool
			 uintptr_t m_bDontRotateOther = 0x530; // bool
			 uintptr_t m_bIsRepeatable = 0x531; // bool
			 uintptr_t m_bShouldLeaveCorpse = 0x532; // bool
			 uintptr_t m_bStartOnSpawn = 0x533; // bool
			 uintptr_t m_bDisallowInterrupts = 0x534; // bool
			 uintptr_t m_bCanOverrideNPCState = 0x535; // bool
			 uintptr_t m_bDontTeleportAtEnd = 0x536; // bool
			 uintptr_t m_bHighPriority = 0x537; // bool
			 uintptr_t m_bHideDebugComplaints = 0x538; // bool
			 uintptr_t m_bContinueOnDeath = 0x539; // bool
			 uintptr_t m_bLoopPreIdleSequence = 0x53a; // bool
			 uintptr_t m_bLoopActionSequence = 0x53b; // bool
			 uintptr_t m_bLoopPostIdleSequence = 0x53c; // bool
			 uintptr_t m_bSynchPostIdles = 0x53d; // bool
			 uintptr_t m_bIgnoreLookAt = 0x53e; // bool
			 uintptr_t m_bIgnoreGravity = 0x53f; // bool
			 uintptr_t m_bDisableNPCCollisions = 0x540; // bool
			 uintptr_t m_bKeepAnimgraphLockedPost = 0x541; // bool
			 uintptr_t m_bDontAddModifiers = 0x542; // bool
			 uintptr_t m_flRadius = 0x544; // float32
			 uintptr_t m_flRepeat = 0x548; // float32
			 uintptr_t m_flPlayAnimFadeInTime = 0x54c; // float32
			 uintptr_t m_flMoveInterpTime = 0x550; // float32
			 uintptr_t m_flAngRate = 0x554; // float32
			 uintptr_t m_bWaitUntilMoveCompletesToStartAnimation = 0x558; // bool
			 uintptr_t m_nNotReadySequenceCount = 0x55c; // int32
			 uintptr_t m_startTime = 0x560; // GameTime_t
			 uintptr_t m_bWaitForBeginSequence = 0x564; // bool
			 uintptr_t m_saved_effects = 0x568; // int32
			 uintptr_t m_savedFlags = 0x56c; // int32
			 uintptr_t m_savedCollisionGroup = 0x570; // int32
			 uintptr_t m_bInterruptable = 0x574; // bool
			 uintptr_t m_sequenceStarted = 0x575; // bool
			 uintptr_t m_bPositionRelativeToOtherEntity = 0x576; // bool
			 uintptr_t m_hTargetEnt = 0x578; // CHandle< CBaseEntity >
			 uintptr_t m_hNextCine = 0x57c; // CHandle< CScriptedSequence >
			 uintptr_t m_bThinking = 0x580; // bool
			 uintptr_t m_bInitiatedSelfDelete = 0x581; // bool
			 uintptr_t m_bIsTeleportingDueToMoveTo = 0x582; // bool
			 uintptr_t m_bAllowCustomInterruptConditions = 0x583; // bool
			 uintptr_t m_hForcedTarget = 0x584; // CHandle< CBaseAnimGraph >
			 uintptr_t m_bDontCancelOtherSequences = 0x588; // bool
			 uintptr_t m_bForceSynch = 0x589; // bool
			 uintptr_t m_bPreventUpdateYawOnFinish = 0x58a; // bool
			 uintptr_t m_bEnsureOnNavmeshOnFinish = 0x58b; // bool
			 uintptr_t m_onDeathBehavior = 0x58c; // ScriptedOnDeath_t
			 uintptr_t m_ConflictResponse = 0x590; // ScriptedConflictResponse_t
			 uintptr_t m_OnBeginSequence = 0x598; // CEntityIOOutput
			 uintptr_t m_OnActionStartOrLoop = 0x5c0; // CEntityIOOutput
			 uintptr_t m_OnEndSequence = 0x5e8; // CEntityIOOutput
			 uintptr_t m_OnPostIdleEndSequence = 0x610; // CEntityIOOutput
			 uintptr_t m_OnCancelSequence = 0x638; // CEntityIOOutput
			 uintptr_t m_OnCancelFailedSequence = 0x660; // CEntityIOOutput
			 uintptr_t m_OnScriptEvent = 0x688; // CEntityIOOutput[8]
			 uintptr_t m_matOtherToMain = 0x7d0; // CTransform
			 uintptr_t m_hInteractionMainEntity = 0x7f0; // CHandle< CBaseEntity >
			 uintptr_t m_iPlayerDeathBehavior = 0x7f4; // int32
		}
	}
}
