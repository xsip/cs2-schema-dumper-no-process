#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CMovementComponentUpdater {
			 uintptr_t m_motors = 0x30;
			 uintptr_t m_facingDamping = 0x48;
			 uintptr_t m_nDefaultMotorIndex = 0x60;
			 uintptr_t m_flDefaultRunSpeed = 0x64;
			 uintptr_t m_bMoveVarsDisabled = 0x68;
			 uintptr_t m_bNetworkPath = 0x69;
			 uintptr_t m_bNetworkFacing = 0x6a;
			 uintptr_t m_paramHandles = 0x6b;
		}
	}
}
