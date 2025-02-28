#include <Windows.h>


namespace xsip {
	namespace client {
		namespace C_LocalTempEntity {
			 uintptr_t flags = 0xf88; // int32
			 uintptr_t die = 0xf8c; // GameTime_t
			 uintptr_t m_flFrameMax = 0xf90; // float32
			 uintptr_t x = 0xf94; // float32
			 uintptr_t y = 0xf98; // float32
			 uintptr_t fadeSpeed = 0xf9c; // float32
			 uintptr_t bounceFactor = 0xfa0; // float32
			 uintptr_t hitSound = 0xfa4; // int32
			 uintptr_t priority = 0xfa8; // int32
			 uintptr_t tentOffset = 0xfac; // Vector
			 uintptr_t m_vecTempEntAngVelocity = 0xfb8; // QAngle
			 uintptr_t tempent_renderamt = 0xfc4; // int32
			 uintptr_t m_vecNormal = 0xfc8; // Vector
			 uintptr_t m_flSpriteScale = 0xfd4; // float32
			 uintptr_t m_nFlickerFrame = 0xfd8; // int32
			 uintptr_t m_flFrameRate = 0xfdc; // float32
			 uintptr_t m_flFrame = 0xfe0; // float32
			 uintptr_t m_pszImpactEffect = 0xfe8; // char*
			 uintptr_t m_pszParticleEffect = 0xff0; // char*
			 uintptr_t m_bParticleCollision = 0xff8; // bool
			 uintptr_t m_iLastCollisionFrame = 0xffc; // int32
			 uintptr_t m_vLastCollisionOrigin = 0x1000; // Vector
			 uintptr_t m_vecTempEntVelocity = 0x100c; // Vector
			 uintptr_t m_vecPrevAbsOrigin = 0x1018; // Vector
			 uintptr_t m_vecTempEntAcceleration = 0x1024; // Vector
		}
	}
}
