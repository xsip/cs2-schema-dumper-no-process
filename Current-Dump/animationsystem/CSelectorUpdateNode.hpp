#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CSelectorUpdateNode {
			 uintptr_t m_children = 0x58; // CUtlVector< CAnimUpdateNodeRef >
			 uintptr_t m_tags = 0x70; // CUtlVector< int8 >
			 uintptr_t m_blendCurve = 0x8c; // CBlendCurve
			 uintptr_t m_flBlendTime = 0x94; // CAnimValue< float32 >
			 uintptr_t m_hParameter = 0x9c; // CAnimParamHandle
			 uintptr_t m_nTagIndex = 0xa0; // int32
			 uintptr_t m_eTagBehavior = 0xa4; // SelectorTagBehavior_t
			 uintptr_t m_bResetOnChange = 0xa8; // bool
			 uintptr_t m_bLockWhenWaning = 0xa9; // bool
			 uintptr_t m_bSyncCyclesOnChange = 0xaa; // bool
		}
	}
}
