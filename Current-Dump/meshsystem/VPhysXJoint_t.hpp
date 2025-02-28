#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace VPhysXJoint_t {
			 uintptr_t m_nType = 0x0;
			 uintptr_t m_nBody1 = 0x2;
			 uintptr_t m_nBody2 = 0x4;
			 uintptr_t m_nFlags = 0x6;
			 uintptr_t m_Frame1 = 0x10;
			 uintptr_t m_Frame2 = 0x30;
			 uintptr_t m_bEnableCollision = 0x50;
			 uintptr_t m_bEnableLinearLimit = 0x51;
			 uintptr_t m_LinearLimit = 0x54;
			 uintptr_t m_bEnableLinearMotor = 0x5c;
			 uintptr_t m_vLinearTargetVelocity = 0x60;
			 uintptr_t m_flMaxForce = 0x6c;
			 uintptr_t m_bEnableSwingLimit = 0x70;
			 uintptr_t m_SwingLimit = 0x74;
			 uintptr_t m_bEnableTwistLimit = 0x7c;
			 uintptr_t m_TwistLimit = 0x80;
			 uintptr_t m_bEnableAngularMotor = 0x88;
			 uintptr_t m_vAngularTargetVelocity = 0x8c;
			 uintptr_t m_flMaxTorque = 0x98;
			 uintptr_t m_flLinearFrequency = 0x9c;
			 uintptr_t m_flLinearDampingRatio = 0xa0;
			 uintptr_t m_flAngularFrequency = 0xa4;
			 uintptr_t m_flAngularDampingRatio = 0xa8;
			 uintptr_t m_flFriction = 0xac;
			 uintptr_t m_flElasticity = 0xb0;
			 uintptr_t m_flElasticDamping = 0xb4;
			 uintptr_t m_flPlasticity = 0xb8;
		}
	}
}
