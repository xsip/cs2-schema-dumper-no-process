#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CHostage {
			 uintptr_t m_OnHostageBeginGrab = 0xad8;
			 uintptr_t m_OnFirstPickedUp = 0xb00;
			 uintptr_t m_OnDroppedNotRescued = 0xb28;
			 uintptr_t m_OnRescued = 0xb50;
			 uintptr_t m_entitySpottedState = 0xb78;
			 uintptr_t m_nSpotRules = 0xb90;
			 uintptr_t m_uiHostageSpawnExclusionGroupMask = 0xb94;
			 uintptr_t m_nHostageSpawnRandomFactor = 0xb98;
			 uintptr_t m_bRemove = 0xb9c;
			 uintptr_t m_vel = 0xba0;
			 uintptr_t m_isRescued = 0xbac;
			 uintptr_t m_jumpedThisFrame = 0xbad;
			 uintptr_t m_nHostageState = 0xbb0;
			 uintptr_t m_leader = 0xbb4;
			 uintptr_t m_lastLeader = 0xbb8;
			 uintptr_t m_reuseTimer = 0xbc0;
			 uintptr_t m_hasBeenUsed = 0xbd8;
			 uintptr_t m_accel = 0xbdc;
			 uintptr_t m_isRunning = 0xbe8;
			 uintptr_t m_isCrouching = 0xbe9;
			 uintptr_t m_jumpTimer = 0xbf0;
			 uintptr_t m_isWaitingForLeader = 0xc08;
			 uintptr_t m_repathTimer = 0x2c18;
			 uintptr_t m_inhibitDoorTimer = 0x2c30;
			 uintptr_t m_inhibitObstacleAvoidanceTimer = 0x2cc0;
			 uintptr_t m_wiggleTimer = 0x2ce0;
			 uintptr_t m_isAdjusted = 0x2cfc;
			 uintptr_t m_bHandsHaveBeenCut = 0x2cfd;
			 uintptr_t m_hHostageGrabber = 0x2d00;
			 uintptr_t m_fLastGrabTime = 0x2d04;
			 uintptr_t m_vecPositionWhenStartedDroppingToGround = 0x2d08;
			 uintptr_t m_vecGrabbedPos = 0x2d14;
			 uintptr_t m_flRescueStartTime = 0x2d20;
			 uintptr_t m_flGrabSuccessTime = 0x2d24;
			 uintptr_t m_flDropStartTime = 0x2d28;
			 uintptr_t m_nApproachRewardPayouts = 0x2d2c;
			 uintptr_t m_nPickupEventCount = 0x2d30;
			 uintptr_t m_vecSpawnGroundPos = 0x2d34;
			 uintptr_t m_vecHostageResetPosition = 0x2d54;
		}
	}
}
