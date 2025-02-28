#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CMovementComponentUpdater {
			 uintptr_t m_motors = 0x30; // CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > >
			 uintptr_t m_facingDamping = 0x48; // CAnimInputDamping
			 uintptr_t m_nDefaultMotorIndex = 0x60; // int32
			 uintptr_t m_flDefaultRunSpeed = 0x64; // float32
			 uintptr_t m_bMoveVarsDisabled = 0x68; // bool
			 uintptr_t m_bNetworkPath = 0x69; // bool
			 uintptr_t m_bNetworkFacing = 0x6a; // bool
			 uintptr_t m_paramHandles = 0x6b; // CAnimParamHandle[30]
		}
	}
}
