

#pragma once
#include "../SchemaLoadingHandler.hpp"

class NetworkSystemSchemaLoader : public BaseLoader {

public:
	NetworkSystemSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\steam_api64.dll",
			"game\\bin\\win64\\steamnetworkingsockets.dll",
			"game\\bin\\win64\\tier0.dll"

		};
		mainDll = "game\\bin\\win64\\networksystem.dll";

		return BaseLoader::Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::InstallBindings();
	}
};