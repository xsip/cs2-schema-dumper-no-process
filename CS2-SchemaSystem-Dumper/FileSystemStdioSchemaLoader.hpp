#pragma once
#include "SchemaLoader.hpp"

class FileSystemStdioSchemaLoader : public BaseLoader {

public:
	FileSystemStdioSchemaLoader() :
		BaseLoader() {
		mainDll = "";
		dllsLoaded = false;
		bindingsInstalled = false;
	}

	inline bool Initialize() {

		if (dllsLoaded)
			return true;

		std::vector<const char*> dlls = {
			"D:\\SteamLibrary\\steamapps\\common\\Counter-Strike Global Offensive\\game\\bin\\win64\\steam_api64.dll",
		};
		mainDll = "D:\\SteamLibrary\\steamapps\\common\\Counter-Strike Global Offensive\\game\\bin\\win64\\filesystem_stdio.dll";

		return dllsLoaded = SchemaLoader::LoadNeededDlls(dlls, mainDll);
	}

	inline bool InstallBindings() {
		return bindingsInstalled = SchemaLoader::InstallSchemaBindings(mainDll);
	}
};