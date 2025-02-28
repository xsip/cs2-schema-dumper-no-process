#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CAnimEncodeDifference {
			 uintptr_t m_boneArray = 0x0; // CUtlVector< CAnimBoneDifference >
			 uintptr_t m_morphArray = 0x18; // CUtlVector< CAnimMorphDifference >
			 uintptr_t m_userArray = 0x30; // CUtlVector< CAnimUserDifference >
			 uintptr_t m_bHasRotationBitArray = 0x48; // CUtlVector< uint8 >
			 uintptr_t m_bHasMovementBitArray = 0x60; // CUtlVector< uint8 >
			 uintptr_t m_bHasMorphBitArray = 0x78; // CUtlVector< uint8 >
			 uintptr_t m_bHasUserBitArray = 0x90; // CUtlVector< uint8 >
		}
	}
}
