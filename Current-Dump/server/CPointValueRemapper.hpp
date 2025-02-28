#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointValueRemapper {
			 uintptr_t m_bDisabled = 0x4e0; // bool
			 uintptr_t m_bUpdateOnClient = 0x4e1; // bool
			 uintptr_t m_nInputType = 0x4e4; // ValueRemapperInputType_t
			 uintptr_t m_iszRemapLineStartName = 0x4e8; // CUtlSymbolLarge
			 uintptr_t m_iszRemapLineEndName = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_hRemapLineStart = 0x4f8; // CHandle< CBaseEntity >
			 uintptr_t m_hRemapLineEnd = 0x4fc; // CHandle< CBaseEntity >
			 uintptr_t m_flMaximumChangePerSecond = 0x500; // float32
			 uintptr_t m_flDisengageDistance = 0x504; // float32
			 uintptr_t m_flEngageDistance = 0x508; // float32
			 uintptr_t m_bRequiresUseKey = 0x50c; // bool
			 uintptr_t m_nOutputType = 0x510; // ValueRemapperOutputType_t
			 uintptr_t m_iszOutputEntityName = 0x518; // CUtlSymbolLarge
			 uintptr_t m_iszOutputEntity2Name = 0x520; // CUtlSymbolLarge
			 uintptr_t m_iszOutputEntity3Name = 0x528; // CUtlSymbolLarge
			 uintptr_t m_iszOutputEntity4Name = 0x530; // CUtlSymbolLarge
			 uintptr_t m_hOutputEntities = 0x538; // CNetworkUtlVectorBase< CHandle< CBaseEntity > >
			 uintptr_t m_nHapticsType = 0x550; // ValueRemapperHapticsType_t
			 uintptr_t m_nMomentumType = 0x554; // ValueRemapperMomentumType_t
			 uintptr_t m_flMomentumModifier = 0x558; // float32
			 uintptr_t m_flSnapValue = 0x55c; // float32
			 uintptr_t m_flCurrentMomentum = 0x560; // float32
			 uintptr_t m_nRatchetType = 0x564; // ValueRemapperRatchetType_t
			 uintptr_t m_flRatchetOffset = 0x568; // float32
			 uintptr_t m_flInputOffset = 0x56c; // float32
			 uintptr_t m_bEngaged = 0x570; // bool
			 uintptr_t m_bFirstUpdate = 0x571; // bool
			 uintptr_t m_flPreviousValue = 0x574; // float32
			 uintptr_t m_flPreviousUpdateTickTime = 0x578; // GameTime_t
			 uintptr_t m_vecPreviousTestPoint = 0x57c; // Vector
			 uintptr_t m_hUsingPlayer = 0x588; // CHandle< CBasePlayerPawn >
			 uintptr_t m_flCustomOutputValue = 0x58c; // float32
			 uintptr_t m_iszSoundEngage = 0x590; // CUtlSymbolLarge
			 uintptr_t m_iszSoundDisengage = 0x598; // CUtlSymbolLarge
			 uintptr_t m_iszSoundReachedValueZero = 0x5a0; // CUtlSymbolLarge
			 uintptr_t m_iszSoundReachedValueOne = 0x5a8; // CUtlSymbolLarge
			 uintptr_t m_iszSoundMovingLoop = 0x5b0; // CUtlSymbolLarge
			 uintptr_t m_Position = 0x5c0; // CEntityOutputTemplate< float32 >
			 uintptr_t m_PositionDelta = 0x5e8; // CEntityOutputTemplate< float32 >
			 uintptr_t m_OnReachedValueZero = 0x610; // CEntityIOOutput
			 uintptr_t m_OnReachedValueOne = 0x638; // CEntityIOOutput
			 uintptr_t m_OnReachedValueCustom = 0x660; // CEntityIOOutput
			 uintptr_t m_OnEngage = 0x688; // CEntityIOOutput
			 uintptr_t m_OnDisengage = 0x6b0; // CEntityIOOutput
		}
	}
}
