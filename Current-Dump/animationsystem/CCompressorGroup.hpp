#include <Windows.h>


namespace xsip {
	namespace animationsystem {
		namespace CCompressorGroup {
			 uintptr_t m_nTotalElementCount = 0x0; // int32
			 uintptr_t m_szChannelClass = 0x8; // CUtlVector< char* >
			 uintptr_t m_szVariableName = 0x20; // CUtlVector< char* >
			 uintptr_t m_nType = 0x38; // CUtlVector< fieldtype_t >
			 uintptr_t m_nFlags = 0x50; // CUtlVector< int32 >
			 uintptr_t m_szGrouping = 0x68; // CUtlVector< CUtlString >
			 uintptr_t m_nCompressorIndex = 0x80; // CUtlVector< int32 >
			 uintptr_t m_szElementNames = 0x98; // CUtlVector< CUtlVector< char* > >
			 uintptr_t m_nElementUniqueID = 0xb0; // CUtlVector< CUtlVector< int32 > >
			 uintptr_t m_nElementMask = 0xc8; // CUtlVector< uint32 >
			 uintptr_t m_vectorCompressor = 0xf8; // CUtlVector< CCompressor< Vector >* >
			 uintptr_t m_quaternionCompressor = 0x110; // CUtlVector< CCompressor< QuaternionStorage >* >
			 uintptr_t m_intCompressor = 0x128; // CUtlVector< CCompressor< int32 >* >
			 uintptr_t m_boolCompressor = 0x140; // CUtlVector< CCompressor< bool >* >
			 uintptr_t m_colorCompressor = 0x158; // CUtlVector< CCompressor< Color >* >
			 uintptr_t m_vector2DCompressor = 0x170; // CUtlVector< CCompressor< Vector2D >* >
			 uintptr_t m_vector4DCompressor = 0x188; // CUtlVector< CCompressor< Vector4D >* >
		}
	}
}
