#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CBlend2DUpdateNode {
			 uintptr_t m_items = 0x60; // CUtlVector< BlendItem_t >
			 uintptr_t m_tags = 0x78; // CUtlVector< TagSpan_t >
			 uintptr_t m_paramSpans = 0x90; // CParamSpanUpdater
			 uintptr_t m_nodeItemIndices = 0xa8; // CUtlVector< int32 >
			 uintptr_t m_damping = 0xc0; // CAnimInputDamping
			 uintptr_t m_blendSourceX = 0xd0; // AnimValueSource
			 uintptr_t m_paramX = 0xd4; // CAnimParamHandle
			 uintptr_t m_blendSourceY = 0xd8; // AnimValueSource
			 uintptr_t m_paramY = 0xdc; // CAnimParamHandle
			 uintptr_t m_eBlendMode = 0xe0; // Blend2DMode
			 uintptr_t m_playbackSpeed = 0xe4; // float32
			 uintptr_t m_bLoop = 0xe8; // bool
			 uintptr_t m_bLockBlendOnReset = 0xe9; // bool
			 uintptr_t m_bLockWhenWaning = 0xea; // bool
			 uintptr_t m_bAnimEventsAndTagsOnMostWeightedOnly = 0xeb; // bool
		}
	}
}
