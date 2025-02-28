#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CParticleAnimTag {
			 uintptr_t m_hParticleSystem = 0x58; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_particleSystemName = 0x60; // CUtlString
			 uintptr_t m_configName = 0x68; // CUtlString
			 uintptr_t m_bDetachFromOwner = 0x70; // bool
			 uintptr_t m_bStopWhenTagEnds = 0x71; // bool
			 uintptr_t m_bTagEndStopIsInstant = 0x72; // bool
			 uintptr_t m_attachmentName = 0x78; // CUtlString
			 uintptr_t m_attachmentType = 0x80; // ParticleAttachment_t
			 uintptr_t m_attachmentCP1Name = 0x88; // CUtlString
			 uintptr_t m_attachmentCP1Type = 0x90; // ParticleAttachment_t
		}
	}
}
