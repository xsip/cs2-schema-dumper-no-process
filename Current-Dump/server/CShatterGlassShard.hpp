#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CShatterGlassShard {
			 uintptr_t m_hShardHandle = 0x8;
			 uintptr_t m_vecPanelVertices = 0x10;
			 uintptr_t m_vLocalPanelSpaceOrigin = 0x28;
			 uintptr_t m_hModel = 0x30;
			 uintptr_t m_hPhysicsEntity = 0x38;
			 uintptr_t m_hParentPanel = 0x3c;
			 uintptr_t m_hParentShard = 0x40;
			 uintptr_t m_ShatterStressType = 0x44;
			 uintptr_t m_vecStressVelocity = 0x48;
			 uintptr_t m_bCreatedModel = 0x54;
			 uintptr_t m_flLongestEdge = 0x58;
			 uintptr_t m_flShortestEdge = 0x5c;
			 uintptr_t m_flLongestAcross = 0x60;
			 uintptr_t m_flShortestAcross = 0x64;
			 uintptr_t m_flSumOfAllEdges = 0x68;
			 uintptr_t m_flArea = 0x6c;
			 uintptr_t m_nOnFrameEdge = 0x70;
			 uintptr_t m_nSubShardGeneration = 0x74;
			 uintptr_t m_vecAverageVertPosition = 0x78;
			 uintptr_t m_bAverageVertPositionIsValid = 0x80;
			 uintptr_t m_vecPanelSpaceStressPositionA = 0x84;
			 uintptr_t m_vecPanelSpaceStressPositionB = 0x8c;
			 uintptr_t m_bStressPositionAIsValid = 0x94;
			 uintptr_t m_bStressPositionBIsValid = 0x95;
			 uintptr_t m_bFlaggedForRemoval = 0x96;
			 uintptr_t m_flPhysicsEntitySpawnedAtTime = 0x98;
			 uintptr_t m_hEntityHittingMe = 0x9c;
			 uintptr_t m_vecNeighbors = 0xa0;
		}
	}
}
