#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CGameSceneNode {
			 uintptr_t m_nodeToWorld = 0x10;
			 uintptr_t m_pOwner = 0x30;
			 uintptr_t m_pParent = 0x38;
			 uintptr_t m_pChild = 0x40;
			 uintptr_t m_pNextSibling = 0x48;
			 uintptr_t m_hParent = 0x78;
			 uintptr_t m_vecOrigin = 0x88;
			 uintptr_t m_angRotation = 0xc0;
			 uintptr_t m_flScale = 0xcc;
			 uintptr_t m_vecAbsOrigin = 0xd0;
			 uintptr_t m_angAbsRotation = 0xdc;
			 uintptr_t m_flAbsScale = 0xe8;
			 uintptr_t m_nParentAttachmentOrBone = 0xec;
			 uintptr_t m_bDebugAbsOriginChanges = 0xee;
			 uintptr_t m_bDormant = 0xef;
			 uintptr_t m_bForceParentToBeNetworked = 0xf0;
			 uintptr_t m_bDirtyHierarchy = 0x0;
			 uintptr_t m_bDirtyBoneMergeInfo = 0x0;
			 uintptr_t m_bNetworkedPositionChanged = 0x0;
			 uintptr_t m_bNetworkedAnglesChanged = 0x0;
			 uintptr_t m_bNetworkedScaleChanged = 0x0;
			 uintptr_t m_bWillBeCallingPostDataUpdate = 0x0;
			 uintptr_t m_bBoneMergeFlex = 0x0;
			 uintptr_t m_nLatchAbsOrigin = 0x0;
			 uintptr_t m_bDirtyBoneMergeBoneToRoot = 0x0;
			 uintptr_t m_nHierarchicalDepth = 0xf3;
			 uintptr_t m_nHierarchyType = 0xf4;
			 uintptr_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xf5;
			 uintptr_t m_name = 0xf8;
			 uintptr_t m_hierarchyAttachName = 0x138;
			 uintptr_t m_flZOffset = 0x13c;
			 uintptr_t m_flClientLocalScale = 0x140;
			 uintptr_t m_vRenderOrigin = 0x144;
		}
	}
}
