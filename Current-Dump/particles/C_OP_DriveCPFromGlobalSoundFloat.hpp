#include <Windows.h>


namespace xsip {
	namespace particles {
		namespace C_OP_DriveCPFromGlobalSoundFloat {
			 uintptr_t m_nOutputControlPoint = 0x1c8; // int32
			 uintptr_t m_nOutputField = 0x1cc; // int32
			 uintptr_t m_flInputMin = 0x1d0; // float32
			 uintptr_t m_flInputMax = 0x1d4; // float32
			 uintptr_t m_flOutputMin = 0x1d8; // float32
			 uintptr_t m_flOutputMax = 0x1dc; // float32
			 uintptr_t m_StackName = 0x1e0; // CUtlString
			 uintptr_t m_OperatorName = 0x1e8; // CUtlString
			 uintptr_t m_FieldName = 0x1f0; // CUtlString
		}
	}
}
