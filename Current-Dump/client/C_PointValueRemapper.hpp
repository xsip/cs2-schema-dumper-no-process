#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_PointValueRemapper {
			 uintptr_t m_bDisabled = 0x568; // bool
			 uintptr_t m_bDisabledOld = 0x569; // bool
			 uintptr_t m_bUpdateOnClient = 0x56a; // bool
			 uintptr_t m_nInputType = 0x56c; // ValueRemapperInputType_t
			 uintptr_t m_hRemapLineStart = 0x570; // CHandle< C_BaseEntity >
			 uintptr_t m_hRemapLineEnd = 0x574; // CHandle< C_BaseEntity >
			 uintptr_t m_flMaximumChangePerSecond = 0x578; // float32
			 uintptr_t m_flDisengageDistance = 0x57c; // float32
			 uintptr_t m_flEngageDistance = 0x580; // float32
			 uintptr_t m_bRequiresUseKey = 0x584; // bool
			 uintptr_t m_nOutputType = 0x588; // ValueRemapperOutputType_t
			 uintptr_t m_hOutputEntities = 0x590; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
			 uintptr_t m_nHapticsType = 0x5a8; // ValueRemapperHapticsType_t
			 uintptr_t m_nMomentumType = 0x5ac; // ValueRemapperMomentumType_t
			 uintptr_t m_flMomentumModifier = 0x5b0; // float32
			 uintptr_t m_flSnapValue = 0x5b4; // float32
			 uintptr_t m_flCurrentMomentum = 0x5b8; // float32
			 uintptr_t m_nRatchetType = 0x5bc; // ValueRemapperRatchetType_t
			 uintptr_t m_flRatchetOffset = 0x5c0; // float32
			 uintptr_t m_flInputOffset = 0x5c4; // float32
			 uintptr_t m_bEngaged = 0x5c8; // bool
			 uintptr_t m_bFirstUpdate = 0x5c9; // bool
			 uintptr_t m_flPreviousValue = 0x5cc; // float32
			 uintptr_t m_flPreviousUpdateTickTime = 0x5d0; // GameTime_t
			 uintptr_t m_vecPreviousTestPoint = 0x5d4; // Vector
		}
	}
}
