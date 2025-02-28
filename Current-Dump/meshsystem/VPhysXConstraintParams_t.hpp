#include <Windows.h>


namespace xsip {
	namespace meshsystem {
		namespace VPhysXConstraintParams_t {
			 uintptr_t m_nType = 0x0; // int8
			 uintptr_t m_nTranslateMotion = 0x1; // int8
			 uintptr_t m_nRotateMotion = 0x2; // int8
			 uintptr_t m_nFlags = 0x3; // int8
			 uintptr_t m_anchor = 0x4; // Vector[2]
			 uintptr_t m_axes = 0x1c; // QuaternionStorage[2]
			 uintptr_t m_maxForce = 0x3c; // float32
			 uintptr_t m_maxTorque = 0x40; // float32
			 uintptr_t m_linearLimitValue = 0x44; // float32
			 uintptr_t m_linearLimitRestitution = 0x48; // float32
			 uintptr_t m_linearLimitSpring = 0x4c; // float32
			 uintptr_t m_linearLimitDamping = 0x50; // float32
			 uintptr_t m_twistLowLimitValue = 0x54; // float32
			 uintptr_t m_twistLowLimitRestitution = 0x58; // float32
			 uintptr_t m_twistLowLimitSpring = 0x5c; // float32
			 uintptr_t m_twistLowLimitDamping = 0x60; // float32
			 uintptr_t m_twistHighLimitValue = 0x64; // float32
			 uintptr_t m_twistHighLimitRestitution = 0x68; // float32
			 uintptr_t m_twistHighLimitSpring = 0x6c; // float32
			 uintptr_t m_twistHighLimitDamping = 0x70; // float32
			 uintptr_t m_swing1LimitValue = 0x74; // float32
			 uintptr_t m_swing1LimitRestitution = 0x78; // float32
			 uintptr_t m_swing1LimitSpring = 0x7c; // float32
			 uintptr_t m_swing1LimitDamping = 0x80; // float32
			 uintptr_t m_swing2LimitValue = 0x84; // float32
			 uintptr_t m_swing2LimitRestitution = 0x88; // float32
			 uintptr_t m_swing2LimitSpring = 0x8c; // float32
			 uintptr_t m_swing2LimitDamping = 0x90; // float32
			 uintptr_t m_goalPosition = 0x94; // Vector
			 uintptr_t m_goalOrientation = 0xa0; // QuaternionStorage
			 uintptr_t m_goalAngularVelocity = 0xb0; // Vector
			 uintptr_t m_driveSpringX = 0xbc; // float32
			 uintptr_t m_driveSpringY = 0xc0; // float32
			 uintptr_t m_driveSpringZ = 0xc4; // float32
			 uintptr_t m_driveDampingX = 0xc8; // float32
			 uintptr_t m_driveDampingY = 0xcc; // float32
			 uintptr_t m_driveDampingZ = 0xd0; // float32
			 uintptr_t m_driveSpringTwist = 0xd4; // float32
			 uintptr_t m_driveSpringSwing = 0xd8; // float32
			 uintptr_t m_driveSpringSlerp = 0xdc; // float32
			 uintptr_t m_driveDampingTwist = 0xe0; // float32
			 uintptr_t m_driveDampingSwing = 0xe4; // float32
			 uintptr_t m_driveDampingSlerp = 0xe8; // float32
			 uintptr_t m_solverIterationCount = 0xec; // int32
			 uintptr_t m_projectionLinearTolerance = 0xf0; // float32
			 uintptr_t m_projectionAngularTolerance = 0xf4; // float32
		}
	}
}
