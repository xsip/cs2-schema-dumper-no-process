#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_TeleportBeam {
			 uintptr_t m_nCPPosition = 0x1c0; // int32
			 uintptr_t m_nCPVelocity = 0x1c4; // int32
			 uintptr_t m_nCPMisc = 0x1c8; // int32
			 uintptr_t m_nCPColor = 0x1cc; // int32
			 uintptr_t m_nCPInvalidColor = 0x1d0; // int32
			 uintptr_t m_nCPExtraArcData = 0x1d4; // int32
			 uintptr_t m_vGravity = 0x1d8; // Vector
			 uintptr_t m_flArcMaxDuration = 0x1e4; // float32
			 uintptr_t m_flSegmentBreak = 0x1e8; // float32
			 uintptr_t m_flArcSpeed = 0x1ec; // float32
			 uintptr_t m_flAlpha = 0x1f0; // float32
		}
	}
}
