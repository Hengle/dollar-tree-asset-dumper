#pragma once
#include "headers.hpp"

namespace XAssetDumper {
	void DumpStringTable();
	void DumpLuaFile();
	
	void DumpRawFile();
}

size_t operator"" _g(size_t val);