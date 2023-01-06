#include "util/console.h"

#include <iostream>
#include <varargs.h>

namespace util
{
	void Print(const std::string& message)
	{
		printf("%s", message.c_str());
	}

	void Print(const char* format, ...)
	{
		va_list args;
		va_start(args, format);
		vprintf(format, args);
		va_end(args);
	}
};
