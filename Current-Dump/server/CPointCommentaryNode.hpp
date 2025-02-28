#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointCommentaryNode {
			 uintptr_t m_iszPreCommands = 0x9a8; // CUtlSymbolLarge
			 uintptr_t m_iszPostCommands = 0x9b0; // CUtlSymbolLarge
			 uintptr_t m_iszCommentaryFile = 0x9b8; // CUtlSymbolLarge
			 uintptr_t m_iszViewTarget = 0x9c0; // CUtlSymbolLarge
			 uintptr_t m_hViewTarget = 0x9c8; // CHandle< CBaseEntity >
			 uintptr_t m_hViewTargetAngles = 0x9cc; // CHandle< CBaseEntity >
			 uintptr_t m_iszViewPosition = 0x9d0; // CUtlSymbolLarge
			 uintptr_t m_hViewPosition = 0x9d8; // CHandle< CBaseEntity >
			 uintptr_t m_hViewPositionMover = 0x9dc; // CHandle< CBaseEntity >
			 uintptr_t m_bPreventMovement = 0x9e0; // bool
			 uintptr_t m_bUnderCrosshair = 0x9e1; // bool
			 uintptr_t m_bUnstoppable = 0x9e2; // bool
			 uintptr_t m_flFinishedTime = 0x9e4; // GameTime_t
			 uintptr_t m_vecFinishOrigin = 0x9e8; // Vector
			 uintptr_t m_vecOriginalAngles = 0x9f4; // QAngle
			 uintptr_t m_vecFinishAngles = 0xa00; // QAngle
			 uintptr_t m_bPreventChangesWhileMoving = 0xa0c; // bool
			 uintptr_t m_bDisabled = 0xa0d; // bool
			 uintptr_t m_vecTeleportOrigin = 0xa10; // Vector
			 uintptr_t m_flAbortedPlaybackAt = 0xa1c; // GameTime_t
			 uintptr_t m_pOnCommentaryStarted = 0xa20; // CEntityIOOutput
			 uintptr_t m_pOnCommentaryStopped = 0xa48; // CEntityIOOutput
			 uintptr_t m_bActive = 0xa70; // bool
			 uintptr_t m_flStartTime = 0xa74; // GameTime_t
			 uintptr_t m_flStartTimeInCommentary = 0xa78; // float32
			 uintptr_t m_iszTitle = 0xa80; // CUtlSymbolLarge
			 uintptr_t m_iszSpeakers = 0xa88; // CUtlSymbolLarge
			 uintptr_t m_iNodeNumber = 0xa90; // int32
			 uintptr_t m_iNodeNumberMax = 0xa94; // int32
			 uintptr_t m_bListenedTo = 0xa98; // bool
		}
	}
}
