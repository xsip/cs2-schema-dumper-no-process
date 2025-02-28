

#pragma once
#include "../BaseLoader.hpp"

class RenderSystemDx11SchemaLoader : public BaseLoader {

public:
	RenderSystemDx11SchemaLoader() :
		BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\amd_ags_x64.dll",
			"game\\bin\\win64\\D3DCOMPILER_47.dll",
			"game\\bin\\win64\\tier0.dll"
		};

		mainDll = "game\\bin\\win64\\rendersystemdx11.dll";

	}

	inline bool Initialize() {
		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};