#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_BaseEntity {
			 uintptr_t m_CBodyComponent = 0x38; // CBodyComponent*
			 uintptr_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
			 uintptr_t m_nLastThinkTick = 0x320; // GameTick_t
			 uintptr_t m_pGameSceneNode = 0x328; // CGameSceneNode*
			 uintptr_t m_pRenderComponent = 0x330; // CRenderComponent*
			 uintptr_t m_pCollision = 0x338; // CCollisionProperty*
			 uintptr_t m_iMaxHealth = 0x340; // int32
			 uintptr_t m_iHealth = 0x344; // int32
			 uintptr_t m_lifeState = 0x348; // uint8
			 uintptr_t m_bTakesDamage = 0x349; // bool
			 uintptr_t m_nTakeDamageFlags = 0x350; // TakeDamageFlags_t
			 uintptr_t m_nPlatformType = 0x358; // EntityPlatformTypes_t
			 uintptr_t m_ubInterpolationFrame = 0x359; // uint8
			 uintptr_t m_hSceneObjectController = 0x35c; // CHandle< C_BaseEntity >
			 uintptr_t m_nNoInterpolationTick = 0x360; // int32
			 uintptr_t m_nVisibilityNoInterpolationTick = 0x364; // int32
			 uintptr_t m_flProxyRandomValue = 0x368; // float32
			 uintptr_t m_iEFlags = 0x36c; // int32
			 uintptr_t m_nWaterType = 0x370; // uint8
			 uintptr_t m_bInterpolateEvenWithNoModel = 0x371; // bool
			 uintptr_t m_bPredictionEligible = 0x372; // bool
			 uintptr_t m_bApplyLayerMatchIDToModel = 0x373; // bool
			 uintptr_t m_tokLayerMatchID = 0x374; // CUtlStringToken
			 uintptr_t m_nSubclassID = 0x378; // CUtlStringToken
			 uintptr_t m_nSimulationTick = 0x388; // int32
			 uintptr_t m_iCurrentThinkContext = 0x38c; // int32
			 uintptr_t m_aThinkFunctions = 0x390; // CUtlVector< thinkfunc_t >
			 uintptr_t m_bDisabledContextThinks = 0x3a8; // bool
			 uintptr_t m_flAnimTime = 0x3ac; // float32
			 uintptr_t m_flSimulationTime = 0x3b0; // float32
			 uintptr_t m_nSceneObjectOverrideFlags = 0x3b4; // uint8
			 uintptr_t m_bHasSuccessfullyInterpolated = 0x3b5; // bool
			 uintptr_t m_bHasAddedVarsToInterpolation = 0x3b6; // bool
			 uintptr_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3b7; // bool
			 uintptr_t m_nInterpolationLatchDirtyFlags = 0x3b8; // int32[2]
			 uintptr_t m_ListEntry = 0x3c0; // uint16[11]
			 uintptr_t m_flCreateTime = 0x3d8; // GameTime_t
			 uintptr_t m_flSpeed = 0x3dc; // float32
			 uintptr_t m_EntClientFlags = 0x3e0; // uint16
			 uintptr_t m_bClientSideRagdoll = 0x3e2; // bool
			 uintptr_t m_iTeamNum = 0x3e3; // uint8
			 uintptr_t m_spawnflags = 0x3e4; // uint32
			 uintptr_t m_nNextThinkTick = 0x3e8; // GameTick_t
			 uintptr_t m_fFlags = 0x3ec; // uint32
			 uintptr_t m_vecAbsVelocity = 0x3f0; // Vector
			 uintptr_t m_vecVelocity = 0x400; // CNetworkVelocityVector
			 uintptr_t m_vecBaseVelocity = 0x430; // Vector
			 uintptr_t m_hEffectEntity = 0x43c; // CHandle< C_BaseEntity >
			 uintptr_t m_hOwnerEntity = 0x440; // CHandle< C_BaseEntity >
			 uintptr_t m_MoveCollide = 0x444; // MoveCollide_t
			 uintptr_t m_MoveType = 0x445; // MoveType_t
			 uintptr_t m_nActualMoveType = 0x446; // MoveType_t
			 uintptr_t m_flWaterLevel = 0x448; // float32
			 uintptr_t m_fEffects = 0x44c; // uint32
			 uintptr_t m_hGroundEntity = 0x450; // CHandle< C_BaseEntity >
			 uintptr_t m_nGroundBodyIndex = 0x454; // int32
			 uintptr_t m_flFriction = 0x458; // float32
			 uintptr_t m_flElasticity = 0x45c; // float32
			 uintptr_t m_flGravityScale = 0x460; // float32
			 uintptr_t m_flTimeScale = 0x464; // float32
			 uintptr_t m_bAnimatedEveryTick = 0x468; // bool
			 uintptr_t m_flNavIgnoreUntilTime = 0x46c; // GameTime_t
			 uintptr_t m_hThink = 0x470; // uint16
			 uintptr_t m_fBBoxVisFlags = 0x480; // uint8
			 uintptr_t m_bPredictable = 0x481; // bool
			 uintptr_t m_bRenderWithViewModels = 0x482; // bool
			 uintptr_t m_nSplitUserPlayerPredictionSlot = 0x484; // CSplitScreenSlot
			 uintptr_t m_nFirstPredictableCommand = 0x488; // int32
			 uintptr_t m_nLastPredictableCommand = 0x48c; // int32
			 uintptr_t m_hOldMoveParent = 0x490; // CHandle< C_BaseEntity >
			 uintptr_t m_Particles = 0x498; // CParticleProperty
			 uintptr_t m_vecPredictedScriptFloats = 0x4c0; // CUtlVector< float32 >
			 uintptr_t m_vecPredictedScriptFloatIDs = 0x4d8; // CUtlVector< int32 >
			 uintptr_t m_nNextScriptVarRecordID = 0x508; // int32
			 uintptr_t m_vecAngVelocity = 0x518; // QAngle
			 uintptr_t m_DataChangeEventRef = 0x524; // int32
			 uintptr_t m_dependencies = 0x528; // CUtlVector< CEntityHandle >
			 uintptr_t m_nCreationTick = 0x540; // int32
			 uintptr_t m_bAnimTimeChanged = 0x54d; // bool
			 uintptr_t m_bSimulationTimeChanged = 0x54e; // bool
			 uintptr_t m_sUniqueHammerID = 0x558; // CUtlString
			 uintptr_t m_nBloodType = 0x560; // BloodType
		}
	}
}
