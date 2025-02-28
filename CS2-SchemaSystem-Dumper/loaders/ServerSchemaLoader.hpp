#pragma once
#include "../SchemaLoadingHandler.hpp"

class ServerSchemaLoader : public BaseLoader {

public:
	ServerSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\steam_api64.dll",
		};
		mainDll = "game\\csgo\\bin\\win64\\server.dll";

		return BaseLoader::Initialize();

	}

	inline bool InstallBindings() {
		return BaseLoader::InstallBindings();
	}

};