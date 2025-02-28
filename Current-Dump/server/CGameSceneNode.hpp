#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGameSceneNode {
			 uintptr_t m_nodeToWorld = 0x10; // CTransform
			 uintptr_t m_pOwner = 0x30; // CEntityInstance*
			 uintptr_t m_pParent = 0x38; // CGameSceneNode*
			 uintptr_t m_pChild = 0x40; // CGameSceneNode*
			 uintptr_t m_pNextSibling = 0x48; // CGameSceneNode*
			 uintptr_t m_hParent = 0x78; // CGameSceneNodeHandle
			 uintptr_t m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
			 uintptr_t m_angRotation = 0xc0; // QAngle
			 uintptr_t m_flScale = 0xcc; // float32
			 uintptr_t m_vecAbsOrigin = 0xd0; // Vector
			 uintptr_t m_angAbsRotation = 0xdc; // QAngle
			 uintptr_t m_flAbsScale = 0xe8; // float32
			 uintptr_t m_nParentAttachmentOrBone = 0xec; // int16
			 uintptr_t m_bDebugAbsOriginChanges = 0xee; // bool
			 uintptr_t m_bDormant = 0xef; // bool
			 uintptr_t m_bForceParentToBeNetworked = 0xf0; // bool
			 uintptr_t m_bDirtyHierarchy = 0x0; // bitfield:1
			 uintptr_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
			 uintptr_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
			 uintptr_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
			 uintptr_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
			 uintptr_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
			 uintptr_t m_bBoneMergeFlex = 0x0; // bitfield:1
			 uintptr_t m_nLatchAbsOrigin = 0x0; // bitfield:2
			 uintptr_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
			 uintptr_t m_nHierarchicalDepth = 0xf3; // uint8
			 uintptr_t m_nHierarchyType = 0xf4; // uint8
			 uintptr_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xf5; // uint8
			 uintptr_t m_name = 0xf8; // CUtlStringToken
			 uintptr_t m_hierarchyAttachName = 0x138; // CUtlStringToken
			 uintptr_t m_flZOffset = 0x13c; // float32
			 uintptr_t m_flClientLocalScale = 0x140; // float32
			 uintptr_t m_vRenderOrigin = 0x144; // Vector
		}
	}
}
