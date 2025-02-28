#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CHostage {
			 uintptr_t m_OnHostageBeginGrab = 0xad8; // CEntityIOOutput
			 uintptr_t m_OnFirstPickedUp = 0xb00; // CEntityIOOutput
			 uintptr_t m_OnDroppedNotRescued = 0xb28; // CEntityIOOutput
			 uintptr_t m_OnRescued = 0xb50; // CEntityIOOutput
			 uintptr_t m_entitySpottedState = 0xb78; // EntitySpottedState_t
			 uintptr_t m_nSpotRules = 0xb90; // int32
			 uintptr_t m_uiHostageSpawnExclusionGroupMask = 0xb94; // uint32
			 uintptr_t m_nHostageSpawnRandomFactor = 0xb98; // uint32
			 uintptr_t m_bRemove = 0xb9c; // bool
			 uintptr_t m_vel = 0xba0; // Vector
			 uintptr_t m_isRescued = 0xbac; // bool
			 uintptr_t m_jumpedThisFrame = 0xbad; // bool
			 uintptr_t m_nHostageState = 0xbb0; // int32
			 uintptr_t m_leader = 0xbb4; // CHandle< CBaseEntity >
			 uintptr_t m_lastLeader = 0xbb8; // CHandle< CCSPlayerPawnBase >
			 uintptr_t m_reuseTimer = 0xbc0; // CountdownTimer
			 uintptr_t m_hasBeenUsed = 0xbd8; // bool
			 uintptr_t m_accel = 0xbdc; // Vector
			 uintptr_t m_isRunning = 0xbe8; // bool
			 uintptr_t m_isCrouching = 0xbe9; // bool
			 uintptr_t m_jumpTimer = 0xbf0; // CountdownTimer
			 uintptr_t m_isWaitingForLeader = 0xc08; // bool
			 uintptr_t m_repathTimer = 0x2c18; // CountdownTimer
			 uintptr_t m_inhibitDoorTimer = 0x2c30; // CountdownTimer
			 uintptr_t m_inhibitObstacleAvoidanceTimer = 0x2cc0; // CountdownTimer
			 uintptr_t m_wiggleTimer = 0x2ce0; // CountdownTimer
			 uintptr_t m_isAdjusted = 0x2cfc; // bool
			 uintptr_t m_bHandsHaveBeenCut = 0x2cfd; // bool
			 uintptr_t m_hHostageGrabber = 0x2d00; // CHandle< CCSPlayerPawn >
			 uintptr_t m_fLastGrabTime = 0x2d04; // GameTime_t
			 uintptr_t m_vecPositionWhenStartedDroppingToGround = 0x2d08; // Vector
			 uintptr_t m_vecGrabbedPos = 0x2d14; // Vector
			 uintptr_t m_flRescueStartTime = 0x2d20; // GameTime_t
			 uintptr_t m_flGrabSuccessTime = 0x2d24; // GameTime_t
			 uintptr_t m_flDropStartTime = 0x2d28; // GameTime_t
			 uintptr_t m_nApproachRewardPayouts = 0x2d2c; // int32
			 uintptr_t m_nPickupEventCount = 0x2d30; // int32
			 uintptr_t m_vecSpawnGroundPos = 0x2d34; // Vector
			 uintptr_t m_vecHostageResetPosition = 0x2d54; // Vector
		}
	}
}
