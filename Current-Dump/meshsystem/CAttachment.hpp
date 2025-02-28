#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CAttachment {
			 uintptr_t m_name = 0x0; // CUtlString
			 uintptr_t m_influenceNames = 0x8; // CUtlString[3]
			 uintptr_t m_vInfluenceRotations = 0x20; // Quaternion[3]
			 uintptr_t m_vInfluenceOffsets = 0x50; // Vector[3]
			 uintptr_t m_influenceWeights = 0x74; // float32[3]
			 uintptr_t m_bInfluenceRootTransform = 0x80; // bool[3]
			 uintptr_t m_nInfluences = 0x83; // uint8
			 uintptr_t m_bIgnoreRotation = 0x84; // bool
		}
	}
}
