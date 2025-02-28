#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_RopeKeyframe {
			 uintptr_t m_LinksTouchingSomething = 0xd30; // CBitVec< 10 >
			 uintptr_t m_nLinksTouchingSomething = 0xd34; // int32
			 uintptr_t m_bApplyWind = 0xd38; // bool
			 uintptr_t m_fPrevLockedPoints = 0xd3c; // int32
			 uintptr_t m_iForcePointMoveCounter = 0xd40; // int32
			 uintptr_t m_bPrevEndPointPos = 0xd44; // bool[2]
			 uintptr_t m_vPrevEndPointPos = 0xd48; // Vector[2]
			 uintptr_t m_flCurScroll = 0xd60; // float32
			 uintptr_t m_flScrollSpeed = 0xd64; // float32
			 uintptr_t m_RopeFlags = 0xd68; // uint16
			 uintptr_t m_iRopeMaterialModelIndex = 0xd70; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_LightValues = 0xfe8; // Vector[10]
			 uintptr_t m_nSegments = 0x1060; // uint8
			 uintptr_t m_hStartPoint = 0x1064; // CHandle< C_BaseEntity >
			 uintptr_t m_hEndPoint = 0x1068; // CHandle< C_BaseEntity >
			 uintptr_t m_iStartAttachment = 0x106c; // AttachmentHandle_t
			 uintptr_t m_iEndAttachment = 0x106d; // AttachmentHandle_t
			 uintptr_t m_Subdiv = 0x106e; // uint8
			 uintptr_t m_RopeLength = 0x1070; // int16
			 uintptr_t m_Slack = 0x1072; // int16
			 uintptr_t m_TextureScale = 0x1074; // float32
			 uintptr_t m_fLockedPoints = 0x1078; // uint8
			 uintptr_t m_nChangeCount = 0x1079; // uint8
			 uintptr_t m_Width = 0x107c; // float32
			 uintptr_t m_PhysicsDelegate = 0x1080; // C_RopeKeyframe::CPhysicsDelegate
			 uintptr_t m_hMaterial = 0x1090; // CStrongHandle< InfoForResourceTypeIMaterial2 >
			 uintptr_t m_TextureHeight = 0x1098; // int32
			 uintptr_t m_vecImpulse = 0x109c; // Vector
			 uintptr_t m_vecPreviousImpulse = 0x10a8; // Vector
			 uintptr_t m_flCurrentGustTimer = 0x10b4; // float32
			 uintptr_t m_flCurrentGustLifetime = 0x10b8; // float32
			 uintptr_t m_flTimeToNextGust = 0x10bc; // float32
			 uintptr_t m_vWindDir = 0x10c0; // Vector
			 uintptr_t m_vColorMod = 0x10cc; // Vector
			 uintptr_t m_vCachedEndPointAttachmentPos = 0x10d8; // Vector[2]
			 uintptr_t m_vCachedEndPointAttachmentAngle = 0x10f0; // QAngle[2]
			 uintptr_t m_bConstrainBetweenEndpoints = 0x1108; // bool
			 uintptr_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
			 uintptr_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
			 uintptr_t m_bNewDataThisFrame = 0x0; // bitfield:1
			 uintptr_t m_bPhysicsInitted = 0x0; // bitfield:1
		}
	}
}
