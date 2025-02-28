#pragma once
#include "../SchemaLoadingHandler.hpp"

class NavSystemSchemaLoader : public BaseLoader {

public:
	NavSystemSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\bin\\win64\\navsystem.dll";

		return BaseLoader::Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::InstallBindings();
	}
};