#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPointValueRemapper {
			 uintptr_t m_bDisabled = 0x4e0;
			 uintptr_t m_bUpdateOnClient = 0x4e1;
			 uintptr_t m_nInputType = 0x4e4;
			 uintptr_t m_iszRemapLineStartName = 0x4e8;
			 uintptr_t m_iszRemapLineEndName = 0x4f0;
			 uintptr_t m_hRemapLineStart = 0x4f8;
			 uintptr_t m_hRemapLineEnd = 0x4fc;
			 uintptr_t m_flMaximumChangePerSecond = 0x500;
			 uintptr_t m_flDisengageDistance = 0x504;
			 uintptr_t m_flEngageDistance = 0x508;
			 uintptr_t m_bRequiresUseKey = 0x50c;
			 uintptr_t m_nOutputType = 0x510;
			 uintptr_t m_iszOutputEntityName = 0x518;
			 uintptr_t m_iszOutputEntity2Name = 0x520;
			 uintptr_t m_iszOutputEntity3Name = 0x528;
			 uintptr_t m_iszOutputEntity4Name = 0x530;
			 uintptr_t m_hOutputEntities = 0x538;
			 uintptr_t m_nHapticsType = 0x550;
			 uintptr_t m_nMomentumType = 0x554;
			 uintptr_t m_flMomentumModifier = 0x558;
			 uintptr_t m_flSnapValue = 0x55c;
			 uintptr_t m_flCurrentMomentum = 0x560;
			 uintptr_t m_nRatchetType = 0x564;
			 uintptr_t m_flRatchetOffset = 0x568;
			 uintptr_t m_flInputOffset = 0x56c;
			 uintptr_t m_bEngaged = 0x570;
			 uintptr_t m_bFirstUpdate = 0x571;
			 uintptr_t m_flPreviousValue = 0x574;
			 uintptr_t m_flPreviousUpdateTickTime = 0x578;
			 uintptr_t m_vecPreviousTestPoint = 0x57c;
			 uintptr_t m_hUsingPlayer = 0x588;
			 uintptr_t m_flCustomOutputValue = 0x58c;
			 uintptr_t m_iszSoundEngage = 0x590;
			 uintptr_t m_iszSoundDisengage = 0x598;
			 uintptr_t m_iszSoundReachedValueZero = 0x5a0;
			 uintptr_t m_iszSoundReachedValueOne = 0x5a8;
			 uintptr_t m_iszSoundMovingLoop = 0x5b0;
			 uintptr_t m_Position = 0x5c0;
			 uintptr_t m_PositionDelta = 0x5e8;
			 uintptr_t m_OnReachedValueZero = 0x610;
			 uintptr_t m_OnReachedValueOne = 0x638;
			 uintptr_t m_OnReachedValueCustom = 0x660;
			 uintptr_t m_OnEngage = 0x688;
			 uintptr_t m_OnDisengage = 0x6b0;
		}
	}
}
