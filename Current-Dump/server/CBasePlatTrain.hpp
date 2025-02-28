#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CBasePlatTrain {
			 uintptr_t m_NoiseMoving = 0x810; // CUtlSymbolLarge
			 uintptr_t m_NoiseArrived = 0x818; // CUtlSymbolLarge
			 uintptr_t m_volume = 0x828; // float32
			 uintptr_t m_flTWidth = 0x82c; // float32
			 uintptr_t m_flTLength = 0x830; // float32
		}
	}
}
