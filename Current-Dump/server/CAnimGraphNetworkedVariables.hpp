#include <Windows.h>


namespace xsip {
	namespace server {
		namespace CAnimGraphNetworkedVariables {
			 uintptr_t m_PredNetBoolVariables = 0x8; // CNetworkUtlVectorBase< uint32 >
			 uintptr_t m_PredNetByteVariables = 0x20; // CNetworkUtlVectorBase< uint8 >
			 uintptr_t m_PredNetUInt16Variables = 0x38; // CNetworkUtlVectorBase< uint16 >
			 uintptr_t m_PredNetIntVariables = 0x50; // CNetworkUtlVectorBase< int32 >
			 uintptr_t m_PredNetUInt32Variables = 0x68; // CNetworkUtlVectorBase< uint32 >
			 uintptr_t m_PredNetUInt64Variables = 0x80; // CNetworkUtlVectorBase< uint64 >
			 uintptr_t m_PredNetFloatVariables = 0x98; // CNetworkUtlVectorBase< float32 >
			 uintptr_t m_PredNetVectorVariables = 0xb0; // CNetworkUtlVectorBase< Vector >
			 uintptr_t m_PredNetQuaternionVariables = 0xc8; // CNetworkUtlVectorBase< Quaternion >
			 uintptr_t m_PredNetGlobalSymbolVariables = 0xe0; // CNetworkUtlVectorBase< CGlobalSymbol >
			 uintptr_t m_OwnerOnlyPredNetBoolVariables = 0xf8; // CNetworkUtlVectorBase< uint32 >
			 uintptr_t m_OwnerOnlyPredNetByteVariables = 0x110; // CNetworkUtlVectorBase< uint8 >
			 uintptr_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // CNetworkUtlVectorBase< uint16 >
			 uintptr_t m_OwnerOnlyPredNetIntVariables = 0x140; // CNetworkUtlVectorBase< int32 >
			 uintptr_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // CNetworkUtlVectorBase< uint32 >
			 uintptr_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // CNetworkUtlVectorBase< uint64 >
			 uintptr_t m_OwnerOnlyPredNetFloatVariables = 0x188; // CNetworkUtlVectorBase< float32 >
			 uintptr_t m_OwnerOnlyPredNetVectorVariables = 0x1a0; // CNetworkUtlVectorBase< Vector >
			 uintptr_t m_OwnerOnlyPredNetQuaternionVariables = 0x1b8; // CNetworkUtlVectorBase< Quaternion >
			 uintptr_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1d0; // CNetworkUtlVectorBase< CGlobalSymbol >
			 uintptr_t m_nBoolVariablesCount = 0x1e8; // int32
			 uintptr_t m_nOwnerOnlyBoolVariablesCount = 0x1ec; // int32
			 uintptr_t m_nRandomSeedOffset = 0x1f0; // int32
			 uintptr_t m_flLastTeleportTime = 0x1f4; // float32
		}
	}
}
