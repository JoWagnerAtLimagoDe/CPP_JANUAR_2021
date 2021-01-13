#pragma once
#include "calculator.h"
#include "abstract_command.h"
class print_command :
    public abstract_command
{
public:
	print_command() = default;
	void execute() override
	{
		calculator::get_instance()->print();
	}
};

