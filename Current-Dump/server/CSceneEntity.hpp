#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CSceneEntity {
			 uintptr_t m_iszSceneFile = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_iszResumeSceneFile = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_iszTarget1 = 0x4f8; // CUtlSymbolLarge
			 uintptr_t m_iszTarget2 = 0x500; // CUtlSymbolLarge
			 uintptr_t m_iszTarget3 = 0x508; // CUtlSymbolLarge
			 uintptr_t m_iszTarget4 = 0x510; // CUtlSymbolLarge
			 uintptr_t m_iszTarget5 = 0x518; // CUtlSymbolLarge
			 uintptr_t m_iszTarget6 = 0x520; // CUtlSymbolLarge
			 uintptr_t m_iszTarget7 = 0x528; // CUtlSymbolLarge
			 uintptr_t m_iszTarget8 = 0x530; // CUtlSymbolLarge
			 uintptr_t m_hTarget1 = 0x538; // CHandle< CBaseEntity >
			 uintptr_t m_hTarget2 = 0x53c; // CHandle< CBaseEntity >
			 uintptr_t m_hTarget3 = 0x540; // CHandle< CBaseEntity >
			 uintptr_t m_hTarget4 = 0x544; // CHandle< CBaseEntity >
			 uintptr_t m_hTarget5 = 0x548; // CHandle< CBaseEntity >
			 uintptr_t m_hTarget6 = 0x54c; // CHandle< CBaseEntity >
			 uintptr_t m_hTarget7 = 0x550; // CHandle< CBaseEntity >
			 uintptr_t m_hTarget8 = 0x554; // CHandle< CBaseEntity >
			 uintptr_t m_sTargetAttachment = 0x558; // CUtlSymbolLarge
			 uintptr_t m_bIsPlayingBack = 0x560; // bool
			 uintptr_t m_bPaused = 0x561; // bool
			 uintptr_t m_bMultiplayer = 0x562; // bool
			 uintptr_t m_bAutogenerated = 0x563; // bool
			 uintptr_t m_flForceClientTime = 0x564; // float32
			 uintptr_t m_flCurrentTime = 0x568; // float32
			 uintptr_t m_flFrameTime = 0x56c; // float32
			 uintptr_t m_bCancelAtNextInterrupt = 0x570; // bool
			 uintptr_t m_fPitch = 0x574; // float32
			 uintptr_t m_bAutomated = 0x578; // bool
			 uintptr_t m_nAutomatedAction = 0x57c; // int32
			 uintptr_t m_flAutomationDelay = 0x580; // float32
			 uintptr_t m_flAutomationTime = 0x584; // float32
			 uintptr_t m_hWaitingForThisResumeScene = 0x588; // CHandle< CBaseEntity >
			 uintptr_t m_bWaitingForResumeScene = 0x58c; // bool
			 uintptr_t m_bPausedViaInput = 0x58d; // bool
			 uintptr_t m_bPauseAtNextInterrupt = 0x58e; // bool
			 uintptr_t m_bWaitingForActor = 0x58f; // bool
			 uintptr_t m_bWaitingForInterrupt = 0x590; // bool
			 uintptr_t m_bInterruptedActorsScenes = 0x591; // bool
			 uintptr_t m_bBreakOnNonIdle = 0x592; // bool
			 uintptr_t m_bSceneFinished = 0x593; // bool
			 uintptr_t m_hActorList = 0x598; // CNetworkUtlVectorBase< CHandle< CBaseFlex > >
			 uintptr_t m_hRemoveActorList = 0x5b0; // CUtlVector< CHandle< CBaseEntity > >
			 uintptr_t m_nSceneFlushCounter = 0x5f8; // int32
			 uintptr_t m_nSceneStringIndex = 0x5fc; // uint16
			 uintptr_t m_OnStart = 0x600; // CEntityIOOutput
			 uintptr_t m_OnCompletion = 0x628; // CEntityIOOutput
			 uintptr_t m_OnCanceled = 0x650; // CEntityIOOutput
			 uintptr_t m_OnPaused = 0x678; // CEntityIOOutput
			 uintptr_t m_OnResumed = 0x6a0; // CEntityIOOutput
			 uintptr_t m_OnTrigger = 0x6c8; // CEntityIOOutput[16]
			 uintptr_t m_hInterruptScene = 0x9d8; // CHandle< CSceneEntity >
			 uintptr_t m_nInterruptCount = 0x9dc; // int32
			 uintptr_t m_bSceneMissing = 0x9e0; // bool
			 uintptr_t m_bInterrupted = 0x9e1; // bool
			 uintptr_t m_bCompletedEarly = 0x9e2; // bool
			 uintptr_t m_bInterruptSceneFinished = 0x9e3; // bool
			 uintptr_t m_bRestoring = 0x9e4; // bool
			 uintptr_t m_hNotifySceneCompletion = 0x9e8; // CUtlVector< CHandle< CSceneEntity > >
			 uintptr_t m_hListManagers = 0xa00; // CUtlVector< CHandle< CSceneListManager > >
			 uintptr_t m_iszSoundName = 0xa18; // CUtlSymbolLarge
			 uintptr_t m_iszSequenceName = 0xa20; // CUtlSymbolLarge
			 uintptr_t m_hActor = 0xa28; // CHandle< CBaseFlex >
			 uintptr_t m_hActivator = 0xa2c; // CHandle< CBaseEntity >
			 uintptr_t m_BusyActor = 0xa30; // int32
			 uintptr_t m_iPlayerDeathBehavior = 0xa34; // SceneOnPlayerDeath_t
		}
	}
}
