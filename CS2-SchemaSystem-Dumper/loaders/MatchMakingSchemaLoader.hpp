#pragma once
#include "../SchemaLoadingHandler.hpp"

class MatchMakingSchemaLoader : public BaseLoader {

public:
	MatchMakingSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		dllsToLoad = {
			"game\\bin\\win64\\steam_api64.dll",
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\csgo\\bin\\win64\\matchmaking.dll";

		return BaseLoader::Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::InstallBindings();
	}
};