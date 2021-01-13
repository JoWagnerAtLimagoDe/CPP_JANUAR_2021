#pragma once
#include <string>
#include <vector>

class command
{
public:
	virtual void parse(std::vector<std::string> tokens) = 0;
	virtual void execute()= 0;
	virtual void undo() = 0;
	virtual bool is_query() = 0;

	
};