#pragma once 

#include <string>

namespace util
{
	void Print(const std::string& message);
	void Print(const char* format, ...);
};

#define console util::Print