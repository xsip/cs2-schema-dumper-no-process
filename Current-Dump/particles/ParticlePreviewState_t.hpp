#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace ParticlePreviewState_t {
			 uintptr_t m_previewModel = 0x0; // CUtlString
			 uintptr_t m_nModSpecificData = 0x8; // uint32
			 uintptr_t m_groundType = 0xc; // PetGroundType_t
			 uintptr_t m_sequenceName = 0x10; // CUtlString
			 uintptr_t m_nFireParticleOnSequenceFrame = 0x18; // int32
			 uintptr_t m_hitboxSetName = 0x20; // CUtlString
			 uintptr_t m_materialGroupName = 0x28; // CUtlString
			 uintptr_t m_vecBodyGroups = 0x30; // CUtlVector< ParticlePreviewBodyGroup_t >
			 uintptr_t m_flPlaybackSpeed = 0x48; // float32
			 uintptr_t m_flParticleSimulationRate = 0x4c; // float32
			 uintptr_t m_bShouldDrawHitboxes = 0x50; // bool
			 uintptr_t m_bShouldDrawAttachments = 0x51; // bool
			 uintptr_t m_bShouldDrawAttachmentNames = 0x52; // bool
			 uintptr_t m_bShouldDrawControlPointAxes = 0x53; // bool
			 uintptr_t m_bAnimationNonLooping = 0x54; // bool
			 uintptr_t m_vecPreviewGravity = 0x58; // Vector
		}
	}
}
