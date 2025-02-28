#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CBlendUpdateNode {
			 uintptr_t m_children = 0x60; // CUtlVector< CAnimUpdateNodeRef >
			 uintptr_t m_sortedOrder = 0x78; // CUtlVector< uint8 >
			 uintptr_t m_targetValues = 0x90; // CUtlVector< float32 >
			 uintptr_t m_blendValueSource = 0xac; // AnimValueSource
			 uintptr_t m_paramIndex = 0xb0; // CAnimParamHandle
			 uintptr_t m_damping = 0xb8; // CAnimInputDamping
			 uintptr_t m_blendKeyType = 0xc8; // BlendKeyType
			 uintptr_t m_bLockBlendOnReset = 0xcc; // bool
			 uintptr_t m_bSyncCycles = 0xcd; // bool
			 uintptr_t m_bLoop = 0xce; // bool
			 uintptr_t m_bLockWhenWaning = 0xcf; // bool
		}
	}
}
