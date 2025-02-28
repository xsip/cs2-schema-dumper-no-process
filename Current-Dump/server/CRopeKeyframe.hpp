#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CRopeKeyframe {
			 uintptr_t m_RopeFlags = 0x798; // uint16
			 uintptr_t m_iNextLinkName = 0x7a0; // CUtlSymbolLarge
			 uintptr_t m_Slack = 0x7a8; // int16
			 uintptr_t m_Width = 0x7ac; // float32
			 uintptr_t m_TextureScale = 0x7b0; // float32
			 uintptr_t m_nSegments = 0x7b4; // uint8
			 uintptr_t m_bConstrainBetweenEndpoints = 0x7b5; // bool
			 uintptr_t m_strRopeMaterialModel = 0x7b8; // CUtlSymbolLarge
			 uintptr_t m_iRopeMaterialModelIndex = 0x7c0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_Subdiv = 0x7c8; // uint8
			 uintptr_t m_nChangeCount = 0x7c9; // uint8
			 uintptr_t m_RopeLength = 0x7ca; // int16
			 uintptr_t m_fLockedPoints = 0x7cc; // uint8
			 uintptr_t m_bCreatedFromMapFile = 0x7cd; // bool
			 uintptr_t m_flScrollSpeed = 0x7d0; // float32
			 uintptr_t m_bStartPointValid = 0x7d4; // bool
			 uintptr_t m_bEndPointValid = 0x7d5; // bool
			 uintptr_t m_hStartPoint = 0x7d8; // CHandle< CBaseEntity >
			 uintptr_t m_hEndPoint = 0x7dc; // CHandle< CBaseEntity >
			 uintptr_t m_iStartAttachment = 0x7e0; // AttachmentHandle_t
			 uintptr_t m_iEndAttachment = 0x7e1; // AttachmentHandle_t
		}
	}
}
