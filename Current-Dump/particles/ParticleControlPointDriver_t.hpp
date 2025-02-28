#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace ParticleControlPointDriver_t {
			 uintptr_t m_iControlPoint = 0x0; // int32
			 uintptr_t m_iAttachType = 0x4; // ParticleAttachment_t
			 uintptr_t m_attachmentName = 0x8; // CUtlString
			 uintptr_t m_vecOffset = 0x10; // Vector
			 uintptr_t m_angOffset = 0x1c; // QAngle
			 uintptr_t m_entityName = 0x28; // CUtlString
		}
	}
}
