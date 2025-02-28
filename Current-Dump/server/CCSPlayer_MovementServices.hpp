#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSPlayer_MovementServices {
			 uintptr_t m_vecLadderNormal = 0x228; // Vector
			 uintptr_t m_nLadderSurfacePropIndex = 0x234; // int32
			 uintptr_t m_flDuckAmount = 0x238; // float32
			 uintptr_t m_flDuckSpeed = 0x23c; // float32
			 uintptr_t m_bDuckOverride = 0x240; // bool
			 uintptr_t m_bDesiresDuck = 0x241; // bool
			 uintptr_t m_flDuckOffset = 0x244; // float32
			 uintptr_t m_nDuckTimeMsecs = 0x248; // uint32
			 uintptr_t m_nDuckJumpTimeMsecs = 0x24c; // uint32
			 uintptr_t m_nJumpTimeMsecs = 0x250; // uint32
			 uintptr_t m_flLastDuckTime = 0x254; // float32
			 uintptr_t m_vecLastPositionAtFullCrouchSpeed = 0x260; // Vector2D
			 uintptr_t m_duckUntilOnGround = 0x268; // bool
			 uintptr_t m_bHasWalkMovedSinceLastJump = 0x269; // bool
			 uintptr_t m_bInStuckTest = 0x26a; // bool
			 uintptr_t m_flStuckCheckTime = 0x278; // float32[64][2]
			 uintptr_t m_nTraceCount = 0x478; // int32
			 uintptr_t m_StuckLast = 0x47c; // int32
			 uintptr_t m_bSpeedCropped = 0x480; // bool
			 uintptr_t m_flGroundMoveEfficiency = 0x484; // float32
			 uintptr_t m_nOldWaterLevel = 0x488; // int32
			 uintptr_t m_flWaterEntryTime = 0x48c; // float32
			 uintptr_t m_vecForward = 0x490; // Vector
			 uintptr_t m_vecLeft = 0x49c; // Vector
			 uintptr_t m_vecUp = 0x4a8; // Vector
			 uintptr_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4b4; // int32
			 uintptr_t m_bMadeFootstepNoise = 0x4b8; // bool
			 uintptr_t m_iFootsteps = 0x4bc; // int32
			 uintptr_t m_bOldJumpPressed = 0x4c0; // bool
			 uintptr_t m_flJumpPressedTime = 0x4c4; // float32
			 uintptr_t m_fStashGrenadeParameterWhen = 0x4c8; // GameTime_t
			 uintptr_t m_nButtonDownMaskPrev = 0x4d0; // uint64
			 uintptr_t m_flOffsetTickCompleteTime = 0x4d8; // float32
			 uintptr_t m_flOffsetTickStashedSpeed = 0x4dc; // float32
			 uintptr_t m_flStamina = 0x4e0; // float32
			 uintptr_t m_flHeightAtJumpStart = 0x4e4; // float32
			 uintptr_t m_flMaxJumpHeightThisJump = 0x4e8; // float32
			 uintptr_t m_flMaxJumpHeightLastJump = 0x4ec; // float32
			 uintptr_t m_flStaminaAtJumpStart = 0x4f0; // float32
			 uintptr_t m_flAccumulatedJumpError = 0x4f4; // float32
		}
	}
}
