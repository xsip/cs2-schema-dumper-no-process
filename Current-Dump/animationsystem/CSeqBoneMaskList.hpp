#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CSeqBoneMaskList {
			 uintptr_t m_sName = 0x0; // CBufferString
			 uintptr_t m_nLocalBoneArray = 0x10; // CUtlVector< int16 >
			 uintptr_t m_flBoneWeightArray = 0x28; // CUtlVector< float32 >
			 uintptr_t m_flDefaultMorphCtrlWeight = 0x40; // float32
			 uintptr_t m_morphCtrlWeightArray = 0x48; // CUtlVector< CUtlPair< CBufferString, float32 > >
		}
	}
}
