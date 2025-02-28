#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CCSPlayer_MovementServices {
			 uintptr_t m_vecLadderNormal = 0x218; // Vector
			 uintptr_t m_nLadderSurfacePropIndex = 0x224; // int32
			 uintptr_t m_flDuckAmount = 0x228; // float32
			 uintptr_t m_flDuckSpeed = 0x22c; // float32
			 uintptr_t m_bDuckOverride = 0x230; // bool
			 uintptr_t m_bDesiresDuck = 0x231; // bool
			 uintptr_t m_flDuckOffset = 0x234; // float32
			 uintptr_t m_nDuckTimeMsecs = 0x238; // uint32
			 uintptr_t m_nDuckJumpTimeMsecs = 0x23c; // uint32
			 uintptr_t m_nJumpTimeMsecs = 0x240; // uint32
			 uintptr_t m_flLastDuckTime = 0x244; // float32
			 uintptr_t m_vecLastPositionAtFullCrouchSpeed = 0x250; // Vector2D
			 uintptr_t m_duckUntilOnGround = 0x258; // bool
			 uintptr_t m_bHasWalkMovedSinceLastJump = 0x259; // bool
			 uintptr_t m_bInStuckTest = 0x25a; // bool
			 uintptr_t m_flStuckCheckTime = 0x268; // float32[64][2]
			 uintptr_t m_nTraceCount = 0x468; // int32
			 uintptr_t m_StuckLast = 0x46c; // int32
			 uintptr_t m_bSpeedCropped = 0x470; // bool
			 uintptr_t m_flGroundMoveEfficiency = 0x474; // float32
			 uintptr_t m_nOldWaterLevel = 0x478; // int32
			 uintptr_t m_flWaterEntryTime = 0x47c; // float32
			 uintptr_t m_vecForward = 0x480; // Vector
			 uintptr_t m_vecLeft = 0x48c; // Vector
			 uintptr_t m_vecUp = 0x498; // Vector
			 uintptr_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4a4; // int32
			 uintptr_t m_bOldJumpPressed = 0x4a8; // bool
			 uintptr_t m_flJumpPressedTime = 0x4ac; // float32
			 uintptr_t m_fStashGrenadeParameterWhen = 0x4b0; // GameTime_t
			 uintptr_t m_nButtonDownMaskPrev = 0x4b8; // uint64
			 uintptr_t m_flOffsetTickCompleteTime = 0x4c0; // float32
			 uintptr_t m_flOffsetTickStashedSpeed = 0x4c4; // float32
			 uintptr_t m_flStamina = 0x4c8; // float32
			 uintptr_t m_flHeightAtJumpStart = 0x4cc; // float32
			 uintptr_t m_flMaxJumpHeightThisJump = 0x4d0; // float32
			 uintptr_t m_flMaxJumpHeightLastJump = 0x4d4; // float32
			 uintptr_t m_flStaminaAtJumpStart = 0x4d8; // float32
			 uintptr_t m_flAccumulatedJumpError = 0x4dc; // float32
		}
	}
}
