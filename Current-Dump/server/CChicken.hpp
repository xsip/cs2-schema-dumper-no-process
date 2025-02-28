#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CChicken {
			 uintptr_t m_AttributeManager = 0xc78; // CAttributeContainer
			 uintptr_t m_updateTimer = 0xf40; // CountdownTimer
			 uintptr_t m_stuckAnchor = 0xf58; // Vector
			 uintptr_t m_stuckTimer = 0xf68; // CountdownTimer
			 uintptr_t m_collisionStuckTimer = 0xf80; // CountdownTimer
			 uintptr_t m_isOnGround = 0xf98; // bool
			 uintptr_t m_vFallVelocity = 0xf9c; // Vector
			 uintptr_t m_desiredActivity = 0xfa8; // ChickenActivity
			 uintptr_t m_currentActivity = 0xfac; // ChickenActivity
			 uintptr_t m_activityTimer = 0xfb0; // CountdownTimer
			 uintptr_t m_turnRate = 0xfc8; // float32
			 uintptr_t m_fleeFrom = 0xfcc; // CHandle< CBaseEntity >
			 uintptr_t m_moveRateThrottleTimer = 0xfd0; // CountdownTimer
			 uintptr_t m_startleTimer = 0xfe8; // CountdownTimer
			 uintptr_t m_vocalizeTimer = 0x1000; // CountdownTimer
			 uintptr_t m_flWhenZombified = 0x1018; // GameTime_t
			 uintptr_t m_jumpedThisFrame = 0x101c; // bool
			 uintptr_t m_leader = 0x1020; // CHandle< CCSPlayerPawn >
			 uintptr_t m_reuseTimer = 0x1038; // CountdownTimer
			 uintptr_t m_hasBeenUsed = 0x1050; // bool
			 uintptr_t m_jumpTimer = 0x1058; // CountdownTimer
			 uintptr_t m_flLastJumpTime = 0x1070; // float32
			 uintptr_t m_bInJump = 0x1074; // bool
			 uintptr_t m_repathTimer = 0x3080; // CountdownTimer
			 uintptr_t m_vecPathGoal = 0x3118; // Vector
			 uintptr_t m_flActiveFollowStartTime = 0x3124; // GameTime_t
			 uintptr_t m_followMinuteTimer = 0x3128; // CountdownTimer
			 uintptr_t m_BlockDirectionTimer = 0x3148; // CountdownTimer
		}
	}
}
