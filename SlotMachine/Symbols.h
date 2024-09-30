#pragma once

#include <vector>
#include <memory>
#include "Symbol.h"

class Symbols
{
	Symbols() = delete;

	static const std::vector<std::shared_ptr<Symbol>> values;

public:
	static const std::shared_ptr<Symbol> At(const int& id)
	{
		return values[id];
	}
};