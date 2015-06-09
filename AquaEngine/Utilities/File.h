#pragma once

/////////////////////////////////////////////////////////////////////////////////////////////
///////////////// Tiago Costa, 2014
/////////////////////////////////////////////////////////////////////////////////////////////

#include "..\AquaTypes.h"

namespace aqua
{
	namespace file
	{
		u32 readFile(const char* filename, bool async, char* output);

		size_t getFileSize(const char* filename);
	};
};