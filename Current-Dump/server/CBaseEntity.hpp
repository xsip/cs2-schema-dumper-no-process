#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBaseEntity {
			 uintptr_t m_CBodyComponent = 0x38; // CBodyComponent*
			 uintptr_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
			 uintptr_t m_aThinkFunctions = 0x240; // CUtlVector< thinkfunc_t >
			 uintptr_t m_iCurrentThinkContext = 0x258; // int32
			 uintptr_t m_nLastThinkTick = 0x25c; // GameTick_t
			 uintptr_t m_bDisabledContextThinks = 0x260; // bool
			 uintptr_t m_isSteadyState = 0x270; // CTypedBitVec< 64 >
			 uintptr_t m_lastNetworkChange = 0x278; // float32
			 uintptr_t m_ResponseContexts = 0x288; // CUtlVector< ResponseContext_t >
			 uintptr_t m_iszResponseContext = 0x2a0; // CUtlSymbolLarge
			 uintptr_t m_iHealth = 0x2c8; // int32
			 uintptr_t m_iMaxHealth = 0x2cc; // int32
			 uintptr_t m_lifeState = 0x2d0; // uint8
			 uintptr_t m_flDamageAccumulator = 0x2d4; // float32
			 uintptr_t m_bTakesDamage = 0x2d8; // bool
			 uintptr_t m_nTakeDamageFlags = 0x2e0; // TakeDamageFlags_t
			 uintptr_t m_nPlatformType = 0x2e8; // EntityPlatformTypes_t
			 uintptr_t m_MoveCollide = 0x2ea; // MoveCollide_t
			 uintptr_t m_MoveType = 0x2eb; // MoveType_t
			 uintptr_t m_nActualMoveType = 0x2ec; // MoveType_t
			 uintptr_t m_nWaterTouch = 0x2ed; // uint8
			 uintptr_t m_nSlimeTouch = 0x2ee; // uint8
			 uintptr_t m_bRestoreInHierarchy = 0x2ef; // bool
			 uintptr_t m_target = 0x2f0; // CUtlSymbolLarge
			 uintptr_t m_hDamageFilter = 0x2f8; // CHandle< CBaseFilter >
			 uintptr_t m_iszDamageFilterName = 0x300; // CUtlSymbolLarge
			 uintptr_t m_flMoveDoneTime = 0x308; // float32
			 uintptr_t m_nSubclassID = 0x30c; // CUtlStringToken
			 uintptr_t m_flAnimTime = 0x318; // float32
			 uintptr_t m_flSimulationTime = 0x31c; // float32
			 uintptr_t m_flCreateTime = 0x320; // GameTime_t
			 uintptr_t m_bClientSideRagdoll = 0x324; // bool
			 uintptr_t m_ubInterpolationFrame = 0x325; // uint8
			 uintptr_t m_vPrevVPhysicsUpdatePos = 0x328; // Vector
			 uintptr_t m_iTeamNum = 0x334; // uint8
			 uintptr_t m_iGlobalname = 0x338; // CUtlSymbolLarge
			 uintptr_t m_iSentToClients = 0x340; // int32
			 uintptr_t m_flSpeed = 0x344; // float32
			 uintptr_t m_sUniqueHammerID = 0x348; // CUtlString
			 uintptr_t m_spawnflags = 0x350; // uint32
			 uintptr_t m_nNextThinkTick = 0x354; // GameTick_t
			 uintptr_t m_nSimulationTick = 0x358; // int32
			 uintptr_t m_OnKilled = 0x360; // CEntityIOOutput
			 uintptr_t m_fFlags = 0x388; // uint32
			 uintptr_t m_vecAbsVelocity = 0x38c; // Vector
			 uintptr_t m_vecVelocity = 0x398; // CNetworkVelocityVector
			 uintptr_t m_vecBaseVelocity = 0x3c8; // Vector
			 uintptr_t m_nPushEnumCount = 0x3d4; // int32
			 uintptr_t m_pCollision = 0x3d8; // CCollisionProperty*
			 uintptr_t m_hEffectEntity = 0x3e0; // CHandle< CBaseEntity >
			 uintptr_t m_hOwnerEntity = 0x3e4; // CHandle< CBaseEntity >
			 uintptr_t m_fEffects = 0x3e8; // uint32
			 uintptr_t m_hGroundEntity = 0x3ec; // CHandle< CBaseEntity >
			 uintptr_t m_nGroundBodyIndex = 0x3f0; // int32
			 uintptr_t m_flFriction = 0x3f4; // float32
			 uintptr_t m_flElasticity = 0x3f8; // float32
			 uintptr_t m_flGravityScale = 0x3fc; // float32
			 uintptr_t m_flTimeScale = 0x400; // float32
			 uintptr_t m_flWaterLevel = 0x404; // float32
			 uintptr_t m_bAnimatedEveryTick = 0x408; // bool
			 uintptr_t m_bDisableLowViolence = 0x409; // bool
			 uintptr_t m_nWaterType = 0x40a; // uint8
			 uintptr_t m_iEFlags = 0x40c; // int32
			 uintptr_t m_OnUser1 = 0x410; // CEntityIOOutput
			 uintptr_t m_OnUser2 = 0x438; // CEntityIOOutput
			 uintptr_t m_OnUser3 = 0x460; // CEntityIOOutput
			 uintptr_t m_OnUser4 = 0x488; // CEntityIOOutput
			 uintptr_t m_iInitialTeamNum = 0x4b0; // int32
			 uintptr_t m_flNavIgnoreUntilTime = 0x4b4; // GameTime_t
			 uintptr_t m_vecAngVelocity = 0x4b8; // QAngle
			 uintptr_t m_bNetworkQuantizeOriginAndAngles = 0x4c4; // bool
			 uintptr_t m_bLagCompensate = 0x4c5; // bool
			 uintptr_t m_flOverriddenFriction = 0x4c8; // float32
			 uintptr_t m_pBlocker = 0x4cc; // CHandle< CBaseEntity >
			 uintptr_t m_flLocalTime = 0x4d0; // float32
			 uintptr_t m_flVPhysicsUpdateLocalTime = 0x4d4; // float32
			 uintptr_t m_nBloodType = 0x4d8; // BloodType
		}
	}
}
