#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace CBoneConstraintPoseSpaceMorph {
			 uintptr_t m_sBoneName = 0x28; // CUtlString
			 uintptr_t m_sAttachmentName = 0x30; // CUtlString
			 uintptr_t m_outputMorph = 0x38; // CUtlVector< CUtlString >
			 uintptr_t m_inputList = 0x50; // CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t >
			 uintptr_t m_bClamp = 0x68; // bool
		}
	}
}
