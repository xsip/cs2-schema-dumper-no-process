#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_RagdollProp {
			 uintptr_t m_ragPos = 0xf90; // C_NetworkUtlVectorBase< Vector >
			 uintptr_t m_ragAngles = 0xfa8; // C_NetworkUtlVectorBase< QAngle >
			 uintptr_t m_flBlendWeight = 0xfc0; // float32
			 uintptr_t m_hRagdollSource = 0xfc4; // CHandle< C_BaseEntity >
			 uintptr_t m_iEyeAttachment = 0xfc8; // AttachmentHandle_t
			 uintptr_t m_flBlendWeightCurrent = 0xfcc; // float32
			 uintptr_t m_parentPhysicsBoneIndices = 0xfd0; // CUtlVector< int32 >
			 uintptr_t m_worldSpaceBoneComputationOrder = 0xfe8; // CUtlVector< int32 >
		}
	}
}
