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

		if (dllsLoaded)
			return true;

		std::vector<const char*> dlls = {
			"game\\bin\\win64\\steam_api64.dll",
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\csgo\\bin\\win64\\matchmaking.dll";

		return dllsLoaded = SchemaLoadingHandler::LoadNeededDlls(dlls, mainDll);
	}

	inline bool InstallBindings() {
		return bindingsInstalled = SchemaLoadingHandler::InstallSchemaBindings(mainDll);
	}
};