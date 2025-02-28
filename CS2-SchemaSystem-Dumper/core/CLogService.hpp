#pragma once


class CLogService {
	const char* serviceName;
	bool loggingEnabled;
public:
	CLogService(const char* _serviceName) {
		serviceName = _serviceName;
		loggingEnabled = true;
	}


	template<typename... params>
	inline void Log(const char* format, params&&... parameters)
	{
		auto withPrefx = std::string("[\033[32;1m"+ std::string(serviceName) +"\033[0m]\t " + std::string(format));
		printf(withPrefx.c_str(), std::forward<params>(parameters)...);
	}
};