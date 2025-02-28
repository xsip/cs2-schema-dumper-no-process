#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CTimeline {
			 uintptr_t m_flValues = 0x10; // float32[64]
			 uintptr_t m_nValueCounts = 0x110; // int32[64]
			 uintptr_t m_nBucketCount = 0x210; // int32
			 uintptr_t m_flInterval = 0x214; // float32
			 uintptr_t m_flFinalValue = 0x218; // float32
			 uintptr_t m_nCompressionType = 0x21c; // TimelineCompression_t
			 uintptr_t m_bStopped = 0x220; // bool
		}
	}
}
