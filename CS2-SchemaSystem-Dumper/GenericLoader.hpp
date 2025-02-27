#pragma once
#include "SchemaLoader.hpp"

class GenericLoader: public BaseLoader {
public:
	GenericLoader(const char* _mainDll, std::vector<const char*> dlls) :
		BaseLoader() {
		mainDll = _mainDll;
		dllsToLoad = dlls;
	}

	inline bool Initialize() {

		if (dllsLoaded)
			return true;

		return dllsLoaded = SchemaLoader::LoadNeededDlls(dllsToLoad, mainDll);
	}

	inline bool InstallBindings() {
		if (bindingsInstalled)
			return true;

		return bindingsInstalled = SchemaLoader::InstallSchemaBindings(mainDll);
	}

};