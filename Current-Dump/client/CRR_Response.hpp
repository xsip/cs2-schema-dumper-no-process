#include <Windows.h>


namespace xsip {
	namespace client {
		namespace CRR_Response {
			 uintptr_t m_Type = 0x0; // uint8
			 uintptr_t m_szResponseName = 0x1; // char[192]
			 uintptr_t m_szMatchingRule = 0xc1; // char[128]
			 uintptr_t m_Params = 0x148; // ResponseParams
			 uintptr_t m_fMatchScore = 0x168; // float32
			 uintptr_t m_szSpeakerContext = 0x170; // char*
			 uintptr_t m_szWorldContext = 0x178; // char*
			 uintptr_t m_Followup = 0x180; // ResponseFollowup
			 uintptr_t m_recipientFilter = 0x1b2; // CUtlSymbol
			 uintptr_t m_pchCriteriaNames = 0x1b8; // CUtlVector< CUtlSymbol >
			 uintptr_t m_pchCriteriaValues = 0x1d0; // CUtlVector< char* >
		}
	}
}
