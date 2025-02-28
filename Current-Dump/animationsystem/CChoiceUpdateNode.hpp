#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CChoiceUpdateNode {
			 uintptr_t m_children = 0x58; // CUtlVector< CAnimUpdateNodeRef >
			 uintptr_t m_weights = 0x70; // CUtlVector< float32 >
			 uintptr_t m_blendTimes = 0x88; // CUtlVector< float32 >
			 uintptr_t m_choiceMethod = 0xa0; // ChoiceMethod
			 uintptr_t m_choiceChangeMethod = 0xa4; // ChoiceChangeMethod
			 uintptr_t m_blendMethod = 0xa8; // ChoiceBlendMethod
			 uintptr_t m_blendTime = 0xac; // float32
			 uintptr_t m_bCrossFade = 0xb0; // bool
			 uintptr_t m_bResetChosen = 0xb1; // bool
			 uintptr_t m_bDontResetSameSelection = 0xb2; // bool
		}
	}
}
