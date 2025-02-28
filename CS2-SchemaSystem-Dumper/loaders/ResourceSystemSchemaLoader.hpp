

#pragma once
#include "../SchemaLoadingHandler.hpp"

class ResourceSystemSchemaLoader : public BaseLoader {

public:
	ResourceSystemSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\bin\\win64\\resourcesystem.dll";

		return BaseLoader::Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::InstallBindings();
	}
};