#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace RnBodyDesc_t {
			 uintptr_t m_sDebugName = 0x0; // CUtlString
			 uintptr_t m_vPosition = 0x8; // Vector
			 uintptr_t m_qOrientation = 0x14; // QuaternionStorage
			 uintptr_t m_vLinearVelocity = 0x24; // Vector
			 uintptr_t m_vAngularVelocity = 0x30; // Vector
			 uintptr_t m_vLocalMassCenter = 0x3c; // Vector
			 uintptr_t m_LocalInertiaInv = 0x48; // Vector[3]
			 uintptr_t m_flMassInv = 0x6c; // float32
			 uintptr_t m_flGameMass = 0x70; // float32
			 uintptr_t m_flInertiaScaleInv = 0x74; // float32
			 uintptr_t m_flLinearDamping = 0x78; // float32
			 uintptr_t m_flAngularDamping = 0x7c; // float32
			 uintptr_t m_flLinearDrag = 0x80; // float32
			 uintptr_t m_flAngularDrag = 0x84; // float32
			 uintptr_t m_flLinearBuoyancyDrag = 0x88; // float32
			 uintptr_t m_flAngularBuoyancyDrag = 0x8c; // float32
			 uintptr_t m_vLastAwakeForceAccum = 0x90; // Vector
			 uintptr_t m_vLastAwakeTorqueAccum = 0x9c; // Vector
			 uintptr_t m_flBuoyancyFactor = 0xa8; // float32
			 uintptr_t m_flGravityScale = 0xac; // float32
			 uintptr_t m_flTimeScale = 0xb0; // float32
			 uintptr_t m_nBodyType = 0xb4; // int32
			 uintptr_t m_nGameIndex = 0xb8; // uint32
			 uintptr_t m_nGameFlags = 0xbc; // uint32
			 uintptr_t m_nMinVelocityIterations = 0xc0; // int8
			 uintptr_t m_nMinPositionIterations = 0xc1; // int8
			 uintptr_t m_nMassPriority = 0xc2; // int8
			 uintptr_t m_bEnabled = 0xc3; // bool
			 uintptr_t m_bSleeping = 0xc4; // bool
			 uintptr_t m_bIsContinuousEnabled = 0xc5; // bool
			 uintptr_t m_bDragEnabled = 0xc6; // bool
			 uintptr_t m_bBuoyancyDragEnabled = 0xc7; // bool
			 uintptr_t m_bGravityDisabled = 0xc8; // bool
			 uintptr_t m_bSpeculativeEnabled = 0xc9; // bool
			 uintptr_t m_bHasShadowController = 0xca; // bool
		}
	}
}
