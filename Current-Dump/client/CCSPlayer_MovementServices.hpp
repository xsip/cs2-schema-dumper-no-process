#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CCSPlayer_MovementServices {
			 uintptr_t m_vecLadderNormal = 0x218;
			 uintptr_t m_nLadderSurfacePropIndex = 0x224;
			 uintptr_t m_flDuckAmount = 0x228;
			 uintptr_t m_flDuckSpeed = 0x22c;
			 uintptr_t m_bDuckOverride = 0x230;
			 uintptr_t m_bDesiresDuck = 0x231;
			 uintptr_t m_flDuckOffset = 0x234;
			 uintptr_t m_nDuckTimeMsecs = 0x238;
			 uintptr_t m_nDuckJumpTimeMsecs = 0x23c;
			 uintptr_t m_nJumpTimeMsecs = 0x240;
			 uintptr_t m_flLastDuckTime = 0x244;
			 uintptr_t m_vecLastPositionAtFullCrouchSpeed = 0x250;
			 uintptr_t m_duckUntilOnGround = 0x258;
			 uintptr_t m_bHasWalkMovedSinceLastJump = 0x259;
			 uintptr_t m_bInStuckTest = 0x25a;
			 uintptr_t m_flStuckCheckTime = 0x268;
			 uintptr_t m_nTraceCount = 0x468;
			 uintptr_t m_StuckLast = 0x46c;
			 uintptr_t m_bSpeedCropped = 0x470;
			 uintptr_t m_flGroundMoveEfficiency = 0x474;
			 uintptr_t m_nOldWaterLevel = 0x478;
			 uintptr_t m_flWaterEntryTime = 0x47c;
			 uintptr_t m_vecForward = 0x480;
			 uintptr_t m_vecLeft = 0x48c;
			 uintptr_t m_vecUp = 0x498;
			 uintptr_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4a4;
			 uintptr_t m_bOldJumpPressed = 0x4a8;
			 uintptr_t m_flJumpPressedTime = 0x4ac;
			 uintptr_t m_fStashGrenadeParameterWhen = 0x4b0;
			 uintptr_t m_nButtonDownMaskPrev = 0x4b8;
			 uintptr_t m_flOffsetTickCompleteTime = 0x4c0;
			 uintptr_t m_flOffsetTickStashedSpeed = 0x4c4;
			 uintptr_t m_flStamina = 0x4c8;
			 uintptr_t m_flHeightAtJumpStart = 0x4cc;
			 uintptr_t m_flMaxJumpHeightThisJump = 0x4d0;
			 uintptr_t m_flMaxJumpHeightLastJump = 0x4d4;
			 uintptr_t m_flStaminaAtJumpStart = 0x4d8;
			 uintptr_t m_flAccumulatedJumpError = 0x4dc;
		}
	}
}
