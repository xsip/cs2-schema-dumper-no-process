#pragma once
#include "../SchemaLoadingHandler.hpp"

class HostSchemaLoader : public BaseLoader {

public:
	HostSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll",
		};
		mainDll = "game\\csgo\\bin\\win64\\host.dll";

		return BaseLoader::Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::InstallBindings();
	}
};