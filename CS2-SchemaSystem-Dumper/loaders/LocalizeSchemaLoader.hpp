// D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\localize.dll

#pragma once
#include "../BaseLoader.hpp"

class LocalizeSchemaLoader : public BaseLoader {

public:
	LocalizeSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {


		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll"
		};
		mainDll = "game\\bin\\win64\\localize.dll";

		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};