#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointCommentaryNode {
			 uintptr_t m_iszPreCommands = 0x9a8;
			 uintptr_t m_iszPostCommands = 0x9b0;
			 uintptr_t m_iszCommentaryFile = 0x9b8;
			 uintptr_t m_iszViewTarget = 0x9c0;
			 uintptr_t m_hViewTarget = 0x9c8;
			 uintptr_t m_hViewTargetAngles = 0x9cc;
			 uintptr_t m_iszViewPosition = 0x9d0;
			 uintptr_t m_hViewPosition = 0x9d8;
			 uintptr_t m_hViewPositionMover = 0x9dc;
			 uintptr_t m_bPreventMovement = 0x9e0;
			 uintptr_t m_bUnderCrosshair = 0x9e1;
			 uintptr_t m_bUnstoppable = 0x9e2;
			 uintptr_t m_flFinishedTime = 0x9e4;
			 uintptr_t m_vecFinishOrigin = 0x9e8;
			 uintptr_t m_vecOriginalAngles = 0x9f4;
			 uintptr_t m_vecFinishAngles = 0xa00;
			 uintptr_t m_bPreventChangesWhileMoving = 0xa0c;
			 uintptr_t m_bDisabled = 0xa0d;
			 uintptr_t m_vecTeleportOrigin = 0xa10;
			 uintptr_t m_flAbortedPlaybackAt = 0xa1c;
			 uintptr_t m_pOnCommentaryStarted = 0xa20;
			 uintptr_t m_pOnCommentaryStopped = 0xa48;
			 uintptr_t m_bActive = 0xa70;
			 uintptr_t m_flStartTime = 0xa74;
			 uintptr_t m_flStartTimeInCommentary = 0xa78;
			 uintptr_t m_iszTitle = 0xa80;
			 uintptr_t m_iszSpeakers = 0xa88;
			 uintptr_t m_iNodeNumber = 0xa90;
			 uintptr_t m_iNodeNumberMax = 0xa94;
			 uintptr_t m_bListenedTo = 0xa98;
		}
	}
}
