#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CPathParticleRope {
			 uintptr_t m_bStartActive = 0x4e8; // bool
			 uintptr_t m_flMaxSimulationTime = 0x4ec; // float32
			 uintptr_t m_iszEffectName = 0x4f0; // CUtlSymbolLarge
			 uintptr_t m_PathNodes_Name = 0x4f8; // CUtlVector< CUtlSymbolLarge >
			 uintptr_t m_flParticleSpacing = 0x510; // float32
			 uintptr_t m_flSlack = 0x514; // float32
			 uintptr_t m_flRadius = 0x518; // float32
			 uintptr_t m_ColorTint = 0x51c; // Color
			 uintptr_t m_nEffectState = 0x520; // int32
			 uintptr_t m_iEffectIndex = 0x528; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
			 uintptr_t m_PathNodes_Position = 0x530; // CNetworkUtlVectorBase< Vector >
			 uintptr_t m_PathNodes_TangentIn = 0x548; // CNetworkUtlVectorBase< Vector >
			 uintptr_t m_PathNodes_TangentOut = 0x560; // CNetworkUtlVectorBase< Vector >
			 uintptr_t m_PathNodes_Color = 0x578; // CNetworkUtlVectorBase< Vector >
			 uintptr_t m_PathNodes_PinEnabled = 0x590; // CNetworkUtlVectorBase< bool >
			 uintptr_t m_PathNodes_RadiusScale = 0x5a8; // CNetworkUtlVectorBase< float32 >
		}
	}
}
