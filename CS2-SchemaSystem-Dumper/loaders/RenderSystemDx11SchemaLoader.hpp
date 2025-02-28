

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

		if (dllsLoaded)
			return true;

		std::vector<const char*> dlls = {
			"game\\bin\\win64\\amd_ags_x64.dll",
			"game\\bin\\win64\\D3DCOMPILER_47.dll",
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\bin\\win64\\rendersystemdx11.dll";

		return dllsLoaded = SchemaLoadingHandler::LoadNeededDlls(dlls, mainDll);
	}

	inline bool InstallBindings() {
		return bindingsInstalled = SchemaLoadingHandler::InstallSchemaBindings(mainDll);
	}
};