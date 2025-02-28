#include <Windows.h>


namespace xsip {
	namespace vphysics2 {
		namespace CFeJiggleBone {
			 uintptr_t m_nFlags = 0x0; // uint32
			 uintptr_t m_flLength = 0x4; // float32
			 uintptr_t m_flTipMass = 0x8; // float32
			 uintptr_t m_flYawStiffness = 0xc; // float32
			 uintptr_t m_flYawDamping = 0x10; // float32
			 uintptr_t m_flPitchStiffness = 0x14; // float32
			 uintptr_t m_flPitchDamping = 0x18; // float32
			 uintptr_t m_flAlongStiffness = 0x1c; // float32
			 uintptr_t m_flAlongDamping = 0x20; // float32
			 uintptr_t m_flAngleLimit = 0x24; // float32
			 uintptr_t m_flMinYaw = 0x28; // float32
			 uintptr_t m_flMaxYaw = 0x2c; // float32
			 uintptr_t m_flYawFriction = 0x30; // float32
			 uintptr_t m_flYawBounce = 0x34; // float32
			 uintptr_t m_flMinPitch = 0x38; // float32
			 uintptr_t m_flMaxPitch = 0x3c; // float32
			 uintptr_t m_flPitchFriction = 0x40; // float32
			 uintptr_t m_flPitchBounce = 0x44; // float32
			 uintptr_t m_flBaseMass = 0x48; // float32
			 uintptr_t m_flBaseStiffness = 0x4c; // float32
			 uintptr_t m_flBaseDamping = 0x50; // float32
			 uintptr_t m_flBaseMinLeft = 0x54; // float32
			 uintptr_t m_flBaseMaxLeft = 0x58; // float32
			 uintptr_t m_flBaseLeftFriction = 0x5c; // float32
			 uintptr_t m_flBaseMinUp = 0x60; // float32
			 uintptr_t m_flBaseMaxUp = 0x64; // float32
			 uintptr_t m_flBaseUpFriction = 0x68; // float32
			 uintptr_t m_flBaseMinForward = 0x6c; // float32
			 uintptr_t m_flBaseMaxForward = 0x70; // float32
			 uintptr_t m_flBaseForwardFriction = 0x74; // float32
			 uintptr_t m_flRadius0 = 0x78; // float32
			 uintptr_t m_flRadius1 = 0x7c; // float32
			 uintptr_t m_vPoint0 = 0x80; // Vector
			 uintptr_t m_vPoint1 = 0x8c; // Vector
			 uintptr_t m_nCollisionMask = 0x98; // uint16
		}
	}
}
