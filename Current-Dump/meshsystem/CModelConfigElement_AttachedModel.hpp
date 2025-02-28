#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CModelConfigElement_AttachedModel {
			 uintptr_t m_InstanceName = 0x48; // CUtlString
			 uintptr_t m_EntityClass = 0x50; // CUtlString
			 uintptr_t m_hModel = 0x58; // CStrongHandle< InfoForResourceTypeCModel >
			 uintptr_t m_vOffset = 0x60; // Vector
			 uintptr_t m_aAngOffset = 0x6c; // QAngle
			 uintptr_t m_AttachmentName = 0x78; // CUtlString
			 uintptr_t m_LocalAttachmentOffsetName = 0x80; // CUtlString
			 uintptr_t m_AttachmentType = 0x88; // ModelConfigAttachmentType_t
			 uintptr_t m_bBoneMergeFlex = 0x8c; // bool
			 uintptr_t m_bUserSpecifiedColor = 0x8d; // bool
			 uintptr_t m_bUserSpecifiedMaterialGroup = 0x8e; // bool
			 uintptr_t m_bAcceptParentMaterialDrivenDecals = 0x8f; // bool
			 uintptr_t m_BodygroupOnOtherModels = 0x90; // CUtlString
			 uintptr_t m_MaterialGroupOnOtherModels = 0x98; // CUtlString
		}
	}
}
