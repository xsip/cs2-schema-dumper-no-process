#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CAnimAttachment {
			 uintptr_t m_influenceRotations = 0x0; // Quaternion[3]
			 uintptr_t m_influenceOffsets = 0x30; // VectorAligned[3]
			 uintptr_t m_influenceIndices = 0x60; // int32[3]
			 uintptr_t m_influenceWeights = 0x6c; // float32[3]
			 uintptr_t m_numInfluences = 0x78; // uint8
		}
	}
}
