#pragma once

#include<string>
#include "CCPlatformConfig.h"

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
#include <windows.h>
#endif

class StringUtil {
public:
	StringUtil();
	~StringUtil();

	static std::string WStrToUTF8(const wchar_t* src);
	static std::string StrToUTF8(const char* src);
	static bool isUTF8(const char* src);

	static std::string GBKToUTF8(const char* gbk);
	static std::string UTF8ToGBK(const char* utf8);
	static std::string UnicodeToUTF8(const wchar_t* unicode);
};