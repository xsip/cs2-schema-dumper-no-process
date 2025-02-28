#pragma once
#include "../BaseLoader.hpp"

class ImeManagerSchemaLoader: public  BaseLoader {

public:
	ImeManagerSchemaLoader() : BaseLoader() {

		dllsToLoad = {
			"game\\bin\\win64\\tier0.dll"
		};
	
		mainDll = "game\\bin\\win64\\imemanager.dll";
	
	}

	inline bool Initialize() {
		return BaseLoader::_Initialize();
	}

	inline bool InstallBindings() {
		return BaseLoader::_InstallBindings();
	}
};