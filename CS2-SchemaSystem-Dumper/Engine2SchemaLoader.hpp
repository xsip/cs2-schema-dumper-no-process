#pragma once
#include "SchemaLoader.hpp"

class Engine2SchemaLoader : public BaseLoader {

public:
	Engine2SchemaLoader() :
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
			"game\\bin\\win64\\steamnetworkingsockets.dll",
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\bin\\win64\\engine2.dll";

		return dllsLoaded = SchemaLoader::LoadNeededDlls(dlls, mainDll);
	}

	inline bool InstallBindings() {
		return bindingsInstalled = SchemaLoader::InstallSchemaBindings(mainDll);
	}
};