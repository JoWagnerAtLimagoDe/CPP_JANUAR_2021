#pragma once
#include "command.h"
#include <vector>
#include "stdexcept"
class abstract_command :
    public command
{
public:


	void parse(std::vector<std::string> tokens) override
	{
		// Is so
	}
	void undo() override
	{
		throw std::runtime_error{ "so ein Quatsch" };
	}
	bool is_query() override
	{
		return true;
	}
};

