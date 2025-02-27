#pragma once
#include "SchemaLoader.hpp"

class SceneSystemSchemaLoader : public BaseLoader {

public:
	SceneSystemSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		if (dllsLoaded)
			return true;

		std::vector<const char*> dlls = {
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\bin\\win64\\scenesystem.dll";

		return dllsLoaded = SchemaLoader::LoadNeededDlls(dlls, mainDll);
	}

	inline bool InstallBindings() {
		return bindingsInstalled = SchemaLoader::InstallSchemaBindings(mainDll);
	}
};