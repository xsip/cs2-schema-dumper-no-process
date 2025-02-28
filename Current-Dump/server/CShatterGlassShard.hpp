#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CShatterGlassShard {
			 uintptr_t m_hShardHandle = 0x8; // uint32
			 uintptr_t m_vecPanelVertices = 0x10; // CUtlVector< Vector2D >
			 uintptr_t m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
			 uintptr_t m_hModel = 0x30; // CStrongHandle< InfoForResourceTypeCModel >
			 uintptr_t m_hPhysicsEntity = 0x38; // CHandle< CShatterGlassShardPhysics >
			 uintptr_t m_hParentPanel = 0x3c; // CHandle< CFuncShatterglass >
			 uintptr_t m_hParentShard = 0x40; // uint32
			 uintptr_t m_ShatterStressType = 0x44; // ShatterGlassStressType
			 uintptr_t m_vecStressVelocity = 0x48; // Vector
			 uintptr_t m_bCreatedModel = 0x54; // bool
			 uintptr_t m_flLongestEdge = 0x58; // float32
			 uintptr_t m_flShortestEdge = 0x5c; // float32
			 uintptr_t m_flLongestAcross = 0x60; // float32
			 uintptr_t m_flShortestAcross = 0x64; // float32
			 uintptr_t m_flSumOfAllEdges = 0x68; // float32
			 uintptr_t m_flArea = 0x6c; // float32
			 uintptr_t m_nOnFrameEdge = 0x70; // OnFrame
			 uintptr_t m_nSubShardGeneration = 0x74; // int32
			 uintptr_t m_vecAverageVertPosition = 0x78; // Vector2D
			 uintptr_t m_bAverageVertPositionIsValid = 0x80; // bool
			 uintptr_t m_vecPanelSpaceStressPositionA = 0x84; // Vector2D
			 uintptr_t m_vecPanelSpaceStressPositionB = 0x8c; // Vector2D
			 uintptr_t m_bStressPositionAIsValid = 0x94; // bool
			 uintptr_t m_bStressPositionBIsValid = 0x95; // bool
			 uintptr_t m_bFlaggedForRemoval = 0x96; // bool
			 uintptr_t m_flPhysicsEntitySpawnedAtTime = 0x98; // GameTime_t
			 uintptr_t m_hEntityHittingMe = 0x9c; // CHandle< CBaseEntity >
			 uintptr_t m_vecNeighbors = 0xa0; // CUtlVector< uint32 >
		}
	}
}
