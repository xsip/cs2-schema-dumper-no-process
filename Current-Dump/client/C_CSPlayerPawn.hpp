#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_CSPlayerPawn {
			 uintptr_t m_pBulletServices = 0x1518; // CCSPlayer_BulletServices*
			 uintptr_t m_pHostageServices = 0x1520; // CCSPlayer_HostageServices*
			 uintptr_t m_pBuyServices = 0x1528; // CCSPlayer_BuyServices*
			 uintptr_t m_pGlowServices = 0x1530; // CCSPlayer_GlowServices*
			 uintptr_t m_pActionTrackingServices = 0x1538; // CCSPlayer_ActionTrackingServices*
			 uintptr_t m_pDamageReactServices = 0x1540; // CCSPlayer_DamageReactServices*
			 uintptr_t m_flHealthShotBoostExpirationTime = 0x1548; // GameTime_t
			 uintptr_t m_flLastFiredWeaponTime = 0x154c; // GameTime_t
			 uintptr_t m_bHasFemaleVoice = 0x1550; // bool
			 uintptr_t m_flLandingTimeSeconds = 0x1554; // float32
			 uintptr_t m_flOldFallVelocity = 0x1558; // float32
			 uintptr_t m_szLastPlaceName = 0x155c; // char[18]
			 uintptr_t m_bPrevDefuser = 0x156e; // bool
			 uintptr_t m_bPrevHelmet = 0x156f; // bool
			 uintptr_t m_nPrevArmorVal = 0x1570; // int32
			 uintptr_t m_nPrevGrenadeAmmoCount = 0x1574; // int32
			 uintptr_t m_unPreviousWeaponHash = 0x1578; // uint32
			 uintptr_t m_unWeaponHash = 0x157c; // uint32
			 uintptr_t m_bInBuyZone = 0x1580; // bool
			 uintptr_t m_bPreviouslyInBuyZone = 0x1581; // bool
			 uintptr_t m_aimPunchAngle = 0x1584; // QAngle
			 uintptr_t m_aimPunchAngleVel = 0x1590; // QAngle
			 uintptr_t m_aimPunchTickBase = 0x159c; // int32
			 uintptr_t m_aimPunchTickFraction = 0x15a0; // float32
			 uintptr_t m_aimPunchCache = 0x15a8; // CUtlVector< QAngle >
			 uintptr_t m_bInLanding = 0x15c8; // bool
			 uintptr_t m_flLandingStartTime = 0x15cc; // float32
			 uintptr_t m_bInHostageRescueZone = 0x15d0; // bool
			 uintptr_t m_bInBombZone = 0x15d1; // bool
			 uintptr_t m_bIsBuyMenuOpen = 0x15d2; // bool
			 uintptr_t m_flTimeOfLastInjury = 0x15d4; // GameTime_t
			 uintptr_t m_flNextSprayDecalTime = 0x15d8; // GameTime_t
			 uintptr_t m_iRetakesOffering = 0x1730; // int32
			 uintptr_t m_iRetakesOfferingCard = 0x1734; // int32
			 uintptr_t m_bRetakesHasDefuseKit = 0x1738; // bool
			 uintptr_t m_bRetakesMVPLastRound = 0x1739; // bool
			 uintptr_t m_iRetakesMVPBoostItem = 0x173c; // int32
			 uintptr_t m_RetakesMVPBoostExtraUtility = 0x1740; // loadout_slot_t
			 uintptr_t m_bNeedToReApplyGloves = 0x1760; // bool
			 uintptr_t m_EconGloves = 0x1768; // C_EconItemView
			 uintptr_t m_nEconGlovesChanged = 0x1bb0; // uint8
			 uintptr_t m_bMustSyncRagdollState = 0x1bb1; // bool
			 uintptr_t m_nRagdollDamageBone = 0x1bb4; // int32
			 uintptr_t m_vRagdollDamageForce = 0x1bb8; // Vector
			 uintptr_t m_vRagdollDamagePosition = 0x1bc4; // Vector
			 uintptr_t m_szRagdollDamageWeaponName = 0x1bd0; // char[64]
			 uintptr_t m_bRagdollDamageHeadshot = 0x1c10; // bool
			 uintptr_t m_vRagdollServerOrigin = 0x1c14; // Vector
			 uintptr_t m_bLastHeadBoneTransformIsValid = 0x2290; // bool
			 uintptr_t m_lastLandTime = 0x2294; // GameTime_t
			 uintptr_t m_bOnGroundLastTick = 0x2298; // bool
			 uintptr_t m_qDeathEyeAngles = 0x22b4; // QAngle
			 uintptr_t m_bSkipOneHeadConstraintUpdate = 0x22c0; // bool
			 uintptr_t m_bLeftHanded = 0x22c1; // bool
			 uintptr_t m_fSwitchedHandednessTime = 0x22c4; // GameTime_t
			 uintptr_t m_flViewmodelOffsetX = 0x22c8; // float32
			 uintptr_t m_flViewmodelOffsetY = 0x22cc; // float32
			 uintptr_t m_flViewmodelOffsetZ = 0x22d0; // float32
			 uintptr_t m_flViewmodelFOV = 0x22d4; // float32
			 uintptr_t m_vecPlayerPatchEconIndices = 0x22d8; // uint32[5]
			 uintptr_t m_GunGameImmunityColor = 0x2310; // Color
			 uintptr_t m_vecBulletHitModels = 0x2360; // CUtlVector< C_BulletHitModel* >
			 uintptr_t m_bIsWalking = 0x2378; // bool
			 uintptr_t m_thirdPersonHeading = 0x2380; // QAngle
			 uintptr_t m_flSlopeDropOffset = 0x2398; // float32
			 uintptr_t m_flSlopeDropHeight = 0x23a8; // float32
			 uintptr_t m_vHeadConstraintOffset = 0x23b8; // Vector
			 uintptr_t m_entitySpottedState = 0x23d0; // EntitySpottedState_t
			 uintptr_t m_bIsScoped = 0x23e8; // bool
			 uintptr_t m_bResumeZoom = 0x23e9; // bool
			 uintptr_t m_bIsDefusing = 0x23ea; // bool
			 uintptr_t m_bIsGrabbingHostage = 0x23eb; // bool
			 uintptr_t m_iBlockingUseActionInProgress = 0x23ec; // CSPlayerBlockingUseAction_t
			 uintptr_t m_flEmitSoundTime = 0x23f0; // GameTime_t
			 uintptr_t m_bInNoDefuseArea = 0x23f4; // bool
			 uintptr_t m_nWhichBombZone = 0x23f8; // int32
			 uintptr_t m_iShotsFired = 0x23fc; // int32
			 uintptr_t m_flFlinchStack = 0x2400; // float32
			 uintptr_t m_flVelocityModifier = 0x2404; // float32
			 uintptr_t m_flHitHeading = 0x2408; // float32
			 uintptr_t m_nHitBodyPart = 0x240c; // int32
			 uintptr_t m_bWaitForNoAttack = 0x2410; // bool
			 uintptr_t m_ignoreLadderJumpTime = 0x2414; // float32
			 uintptr_t m_bKilledByHeadshot = 0x2419; // bool
			 uintptr_t m_ArmorValue = 0x241c; // int32
			 uintptr_t m_unCurrentEquipmentValue = 0x2420; // uint16
			 uintptr_t m_unRoundStartEquipmentValue = 0x2422; // uint16
			 uintptr_t m_unFreezetimeEndEquipmentValue = 0x2424; // uint16
			 uintptr_t m_nLastKillerIndex = 0x2428; // CEntityIndex
			 uintptr_t m_bOldIsScoped = 0x242c; // bool
			 uintptr_t m_bHasDeathInfo = 0x242d; // bool
			 uintptr_t m_flDeathInfoTime = 0x2430; // float32
			 uintptr_t m_vecDeathInfoOrigin = 0x2434; // Vector
			 uintptr_t m_grenadeParameterStashTime = 0x2440; // GameTime_t
			 uintptr_t m_bGrenadeParametersStashed = 0x2444; // bool
			 uintptr_t m_angStashedShootAngles = 0x2448; // QAngle
			 uintptr_t m_vecStashedGrenadeThrowPosition = 0x2454; // Vector
			 uintptr_t m_vecStashedVelocity = 0x2460; // Vector
			 uintptr_t m_angShootAngleHistory = 0x246c; // QAngle[2]
			 uintptr_t m_vecThrowPositionHistory = 0x2484; // Vector[2]
			 uintptr_t m_vecVelocityHistory = 0x249c; // Vector[2]
			 uintptr_t m_PredictedDamageTags = 0x24b8; // C_UtlVectorEmbeddedNetworkVar< PredictedDamageTag_t >
			 uintptr_t m_nPrevHighestReceivedDamageTagTick = 0x2508; // GameTick_t
			 uintptr_t m_nHighestAppliedDamageTagTick = 0x250c; // int32
		}
	}
}
