#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_EconEntity {
			 uintptr_t m_flFlexDelayTime = 0x1130; // float32
			 uintptr_t m_flFlexDelayedWeight = 0x1138; // float32*
			 uintptr_t m_bAttributesInitialized = 0x1140; // bool
			 uintptr_t m_AttributeManager = 0x1148; // C_AttributeContainer
			 uintptr_t m_OriginalOwnerXuidLow = 0x15f0; // uint32
			 uintptr_t m_OriginalOwnerXuidHigh = 0x15f4; // uint32
			 uintptr_t m_nFallbackPaintKit = 0x15f8; // int32
			 uintptr_t m_nFallbackSeed = 0x15fc; // int32
			 uintptr_t m_flFallbackWear = 0x1600; // float32
			 uintptr_t m_nFallbackStatTrak = 0x1604; // int32
			 uintptr_t m_bClientside = 0x1608; // bool
			 uintptr_t m_bParticleSystemsCreated = 0x1609; // bool
			 uintptr_t m_vecAttachedParticles = 0x1610; // CUtlVector< int32 >
			 uintptr_t m_hViewmodelAttachment = 0x1628; // CHandle< CBaseAnimGraph >
			 uintptr_t m_iOldTeam = 0x162c; // int32
			 uintptr_t m_bAttachmentDirty = 0x1630; // bool
			 uintptr_t m_nUnloadedModelIndex = 0x1634; // int32
			 uintptr_t m_iNumOwnerValidationRetries = 0x1638; // int32
			 uintptr_t m_hOldProvidee = 0x1648; // CHandle< C_BaseEntity >
			 uintptr_t m_vecAttachedModels = 0x1650; // CUtlVector< C_EconEntity::AttachedModelData_t >
		}
	}
}
