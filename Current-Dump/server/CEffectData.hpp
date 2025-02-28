#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CEffectData {
			 uintptr_t m_vOrigin = 0x8; // Vector
			 uintptr_t m_vStart = 0x14; // Vector
			 uintptr_t m_vNormal = 0x20; // Vector
			 uintptr_t m_vAngles = 0x2c; // QAngle
			 uintptr_t m_hEntity = 0x38; // CEntityHandle
			 uintptr_t m_hOtherEntity = 0x3c; // CEntityHandle
			 uintptr_t m_flScale = 0x40; // float32
			 uintptr_t m_flMagnitude = 0x44; // float32
			 uintptr_t m_flRadius = 0x48; // float32
			 uintptr_t m_nSurfaceProp = 0x4c; // CUtlStringToken
			 uintptr_t m_nEffectIndex = 0x50; // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_nDamageType = 0x58; // uint32
			 uintptr_t m_nPenetrate = 0x5c; // uint8
			 uintptr_t m_nMaterial = 0x5e; // uint16
			 uintptr_t m_nHitBox = 0x60; // uint16
			 uintptr_t m_nColor = 0x62; // uint8
			 uintptr_t m_fFlags = 0x63; // uint8
			 uintptr_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
			 uintptr_t m_nAttachmentName = 0x68; // CUtlStringToken
			 uintptr_t m_iEffectName = 0x6c; // uint16
			 uintptr_t m_nExplosionType = 0x6e; // uint8
		}
	}
}
