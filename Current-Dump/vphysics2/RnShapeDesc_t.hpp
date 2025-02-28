#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace RnShapeDesc_t {
			 uintptr_t m_nCollisionAttributeIndex = 0x0; // uint32
			 uintptr_t m_nSurfacePropertyIndex = 0x4; // uint32
			 uintptr_t m_UserFriendlyName = 0x8; // CUtlString
			 uintptr_t m_bUserFriendlyNameSealed = 0x10; // bool
			 uintptr_t m_bUserFriendlyNameLong = 0x11; // bool
			 uintptr_t m_nToolMaterialHash = 0x14; // uint32
		}
	}
}
