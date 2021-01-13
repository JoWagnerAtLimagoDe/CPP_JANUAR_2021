#pragma once
#include "command.h"
#include "calculator.h"

class add_command :
    public command
{
private:
	double summand_;

public:


	void parse(std::vector<std::string> tokens) override
	{
		summand_ = std::stod(tokens[1]);
	}
	void execute() override
	{
		calculator::get_instance()->add(summand_);
	}
	void undo() override {
		calculator::get_instance()->sub(summand_);
	}


	bool is_query() override
	{
		return false;
	}
};

