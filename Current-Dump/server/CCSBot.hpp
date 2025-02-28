#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CCSBot {
			 uintptr_t m_eyePosition = 0x108;
			 uintptr_t m_name = 0x114;
			 uintptr_t m_combatRange = 0x154;
			 uintptr_t m_isRogue = 0x158;
			 uintptr_t m_rogueTimer = 0x160;
			 uintptr_t m_diedLastRound = 0x17c;
			 uintptr_t m_safeTime = 0x180;
			 uintptr_t m_wasSafe = 0x184;
			 uintptr_t m_blindFire = 0x18c;
			 uintptr_t m_surpriseTimer = 0x190;
			 uintptr_t m_bAllowActive = 0x1a8;
			 uintptr_t m_isFollowing = 0x1a9;
			 uintptr_t m_leader = 0x1ac;
			 uintptr_t m_followTimestamp = 0x1b0;
			 uintptr_t m_allowAutoFollowTime = 0x1b4;
			 uintptr_t m_hurryTimer = 0x1b8;
			 uintptr_t m_alertTimer = 0x1d0;
			 uintptr_t m_sneakTimer = 0x1e8;
			 uintptr_t m_panicTimer = 0x200;
			 uintptr_t m_stateTimestamp = 0x4d0;
			 uintptr_t m_isAttacking = 0x4d4;
			 uintptr_t m_isOpeningDoor = 0x4d5;
			 uintptr_t m_taskEntity = 0x4dc;
			 uintptr_t m_goalPosition = 0x4ec;
			 uintptr_t m_goalEntity = 0x4f8;
			 uintptr_t m_avoid = 0x4fc;
			 uintptr_t m_avoidTimestamp = 0x500;
			 uintptr_t m_isStopping = 0x504;
			 uintptr_t m_hasVisitedEnemySpawn = 0x505;
			 uintptr_t m_stillTimer = 0x508;
			 uintptr_t m_bEyeAnglesUnderPathFinderControl = 0x518;
			 uintptr_t m_pathIndex = 0x5610;
			 uintptr_t m_areaEnteredTimestamp = 0x5614;
			 uintptr_t m_repathTimer = 0x5618;
			 uintptr_t m_avoidFriendTimer = 0x5630;
			 uintptr_t m_isFriendInTheWay = 0x5648;
			 uintptr_t m_politeTimer = 0x5650;
			 uintptr_t m_isWaitingBehindFriend = 0x5668;
			 uintptr_t m_pathLadderEnd = 0x5694;
			 uintptr_t m_mustRunTimer = 0x56e0;
			 uintptr_t m_waitTimer = 0x56f8;
			 uintptr_t m_updateTravelDistanceTimer = 0x5710;
			 uintptr_t m_playerTravelDistance = 0x5728;
			 uintptr_t m_travelDistancePhase = 0x5828;
			 uintptr_t m_hostageEscortCount = 0x59c0;
			 uintptr_t m_hostageEscortCountTimestamp = 0x59c4;
			 uintptr_t m_desiredTeam = 0x59c8;
			 uintptr_t m_hasJoined = 0x59cc;
			 uintptr_t m_isWaitingForHostage = 0x59cd;
			 uintptr_t m_inhibitWaitingForHostageTimer = 0x59d0;
			 uintptr_t m_waitForHostageTimer = 0x59e8;
			 uintptr_t m_noisePosition = 0x5a00;
			 uintptr_t m_noiseTravelDistance = 0x5a0c;
			 uintptr_t m_noiseTimestamp = 0x5a10;
			 uintptr_t m_noiseSource = 0x5a18;
			 uintptr_t m_noiseBendTimer = 0x5a30;
			 uintptr_t m_bentNoisePosition = 0x5a48;
			 uintptr_t m_bendNoisePositionValid = 0x5a54;
			 uintptr_t m_lookAroundStateTimestamp = 0x5a58;
			 uintptr_t m_lookAheadAngle = 0x5a5c;
			 uintptr_t m_forwardAngle = 0x5a60;
			 uintptr_t m_inhibitLookAroundTimestamp = 0x5a64;
			 uintptr_t m_lookAtSpot = 0x5a6c;
			 uintptr_t m_lookAtSpotDuration = 0x5a7c;
			 uintptr_t m_lookAtSpotTimestamp = 0x5a80;
			 uintptr_t m_lookAtSpotAngleTolerance = 0x5a84;
			 uintptr_t m_lookAtSpotClearIfClose = 0x5a88;
			 uintptr_t m_lookAtSpotAttack = 0x5a89;
			 uintptr_t m_lookAtDesc = 0x5a90;
			 uintptr_t m_peripheralTimestamp = 0x5a98;
			 uintptr_t m_approachPointCount = 0x5c20;
			 uintptr_t m_approachPointViewPosition = 0x5c24;
			 uintptr_t m_viewSteadyTimer = 0x5c30;
			 uintptr_t m_tossGrenadeTimer = 0x5c48;
			 uintptr_t m_isAvoidingGrenade = 0x5c68;
			 uintptr_t m_spotCheckTimestamp = 0x5c88;
			 uintptr_t m_checkedHidingSpotCount = 0x6090;
			 uintptr_t m_lookPitch = 0x6094;
			 uintptr_t m_lookPitchVel = 0x6098;
			 uintptr_t m_lookYaw = 0x609c;
			 uintptr_t m_lookYawVel = 0x60a0;
			 uintptr_t m_targetSpot = 0x60a4;
			 uintptr_t m_targetSpotVelocity = 0x60b0;
			 uintptr_t m_targetSpotPredicted = 0x60bc;
			 uintptr_t m_aimError = 0x60c8;
			 uintptr_t m_aimGoal = 0x60d4;
			 uintptr_t m_targetSpotTime = 0x60e0;
			 uintptr_t m_aimFocus = 0x60e4;
			 uintptr_t m_aimFocusInterval = 0x60e8;
			 uintptr_t m_aimFocusNextUpdate = 0x60ec;
			 uintptr_t m_ignoreEnemiesTimer = 0x60f8;
			 uintptr_t m_enemy = 0x6110;
			 uintptr_t m_isEnemyVisible = 0x6114;
			 uintptr_t m_visibleEnemyParts = 0x6115;
			 uintptr_t m_lastEnemyPosition = 0x6118;
			 uintptr_t m_lastSawEnemyTimestamp = 0x6124;
			 uintptr_t m_firstSawEnemyTimestamp = 0x6128;
			 uintptr_t m_currentEnemyAcquireTimestamp = 0x612c;
			 uintptr_t m_enemyDeathTimestamp = 0x6130;
			 uintptr_t m_friendDeathTimestamp = 0x6134;
			 uintptr_t m_isLastEnemyDead = 0x6138;
			 uintptr_t m_nearbyEnemyCount = 0x613c;
			 uintptr_t m_bomber = 0x6348;
			 uintptr_t m_nearbyFriendCount = 0x634c;
			 uintptr_t m_closestVisibleFriend = 0x6350;
			 uintptr_t m_closestVisibleHumanFriend = 0x6354;
			 uintptr_t m_attentionInterval = 0x6358;
			 uintptr_t m_attacker = 0x6368;
			 uintptr_t m_attackedTimestamp = 0x636c;
			 uintptr_t m_burnedByFlamesTimer = 0x6370;
			 uintptr_t m_lastVictimID = 0x6380;
			 uintptr_t m_isAimingAtEnemy = 0x6384;
			 uintptr_t m_isRapidFiring = 0x6385;
			 uintptr_t m_equipTimer = 0x6388;
			 uintptr_t m_zoomTimer = 0x6398;
			 uintptr_t m_fireWeaponTimestamp = 0x63b0;
			 uintptr_t m_lookForWeaponsOnGroundTimer = 0x63b8;
			 uintptr_t m_bIsSleeping = 0x63d0;
			 uintptr_t m_isEnemySniperVisible = 0x63d1;
			 uintptr_t m_sawEnemySniperTimer = 0x63d8;
			 uintptr_t m_enemyQueueIndex = 0x6490;
			 uintptr_t m_enemyQueueCount = 0x6491;
			 uintptr_t m_enemyQueueAttendIndex = 0x6492;
			 uintptr_t m_isStuck = 0x6493;
			 uintptr_t m_stuckTimestamp = 0x6494;
			 uintptr_t m_stuckSpot = 0x6498;
			 uintptr_t m_wiggleTimer = 0x64a8;
			 uintptr_t m_stuckJumpTimer = 0x64c0;
			 uintptr_t m_nextCleanupCheckTimestamp = 0x64d8;
			 uintptr_t m_avgVel = 0x64dc;
			 uintptr_t m_avgVelIndex = 0x6504;
			 uintptr_t m_avgVelCount = 0x6508;
			 uintptr_t m_lastOrigin = 0x650c;
			 uintptr_t m_lastRadioRecievedTimestamp = 0x651c;
			 uintptr_t m_lastRadioSentTimestamp = 0x6520;
			 uintptr_t m_radioSubject = 0x6524;
			 uintptr_t m_radioPosition = 0x6528;
			 uintptr_t m_voiceEndTimestamp = 0x6534;
			 uintptr_t m_lastValidReactionQueueFrame = 0x6540;
		}
	}
}
