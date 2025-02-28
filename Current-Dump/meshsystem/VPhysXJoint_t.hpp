#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace VPhysXJoint_t {
			 uintptr_t m_nType = 0x0; // uint16
			 uintptr_t m_nBody1 = 0x2; // uint16
			 uintptr_t m_nBody2 = 0x4; // uint16
			 uintptr_t m_nFlags = 0x6; // uint16
			 uintptr_t m_Frame1 = 0x10; // CTransform
			 uintptr_t m_Frame2 = 0x30; // CTransform
			 uintptr_t m_bEnableCollision = 0x50; // bool
			 uintptr_t m_bEnableLinearLimit = 0x51; // bool
			 uintptr_t m_LinearLimit = 0x54; // VPhysXRange_t
			 uintptr_t m_bEnableLinearMotor = 0x5c; // bool
			 uintptr_t m_vLinearTargetVelocity = 0x60; // Vector
			 uintptr_t m_flMaxForce = 0x6c; // float32
			 uintptr_t m_bEnableSwingLimit = 0x70; // bool
			 uintptr_t m_SwingLimit = 0x74; // VPhysXRange_t
			 uintptr_t m_bEnableTwistLimit = 0x7c; // bool
			 uintptr_t m_TwistLimit = 0x80; // VPhysXRange_t
			 uintptr_t m_bEnableAngularMotor = 0x88; // bool
			 uintptr_t m_vAngularTargetVelocity = 0x8c; // Vector
			 uintptr_t m_flMaxTorque = 0x98; // float32
			 uintptr_t m_flLinearFrequency = 0x9c; // float32
			 uintptr_t m_flLinearDampingRatio = 0xa0; // float32
			 uintptr_t m_flAngularFrequency = 0xa4; // float32
			 uintptr_t m_flAngularDampingRatio = 0xa8; // float32
			 uintptr_t m_flFriction = 0xac; // float32
			 uintptr_t m_flElasticity = 0xb0; // float32
			 uintptr_t m_flElasticDamping = 0xb4; // float32
			 uintptr_t m_flPlasticity = 0xb8; // float32
		}
	}
}
