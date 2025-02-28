#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CTimeline {
			 uintptr_t m_flValues = 0x10;
			 uintptr_t m_nValueCounts = 0x110;
			 uintptr_t m_nBucketCount = 0x210;
			 uintptr_t m_flInterval = 0x214;
			 uintptr_t m_flFinalValue = 0x218;
			 uintptr_t m_nCompressionType = 0x21c;
			 uintptr_t m_bStopped = 0x220;
		}
	}
}
