

#pragma once
#include "../SchemaLoadingHandler.hpp"

class RenderSystemDx11SchemaLoader : public BaseLoader {

public:
	RenderSystemDx11SchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\amd_ags_x64.dll",
			"game\\bin\\win64\\D3DCOMPILER_47.dll",
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\bin\\win64\\rendersystemdx11.dll";

		return BaseLoader::Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::InstallBindings();
	}
};