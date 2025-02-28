#pragma once
#include <vector>
#include "SchemaLoadingHandler.hpp"

class BaseLoader {
protected:
	const char* mainDll;
	bool dllsLoaded;
	bool bindingsInstalled;
    std::vector<const char*> dllsToLoad;
protected:
    BaseLoader() {
        mainDll = "";
        dllsLoaded = false;
        bindingsInstalled = false;
    };
public:
    inline static const char* basePath = "D:\\SteamLibrary\\steamapps\\common\\Counter-Strike Global Offensive\\";
    virtual inline bool Initialize() = 0;
    virtual inline bool InstallBindings() = 0;
protected:
    inline bool _Initialize() {

        if (dllsLoaded)
            return true;

        return dllsLoaded = SchemaLoadingHandler::LoadNeededDlls(dllsToLoad, mainDll);
    }

    inline bool _InstallBindings() {

        if (bindingsInstalled)
            return true;

        return bindingsInstalled = SchemaLoadingHandler::InstallSchemaBindings(mainDll);

    }
public:
    std::string *GetModuleNameFromPath() {
        std::string* s = new std::string(mainDll);
        std::string delimiter = "\\";
        size_t pos_start = 0, pos_end, delim_len = delimiter.length();
        std::string token;
        std::vector<std::string> res;

        while ((pos_end = s->find(delimiter, pos_start)) != std::string::npos) {
            token = s->substr(pos_start, pos_end - pos_start);
            pos_start = pos_end + delim_len;
            res.push_back(token);
        }

        res.push_back(s->substr(pos_start));
        return new std::string(res[res.size()-1]);
    }
};