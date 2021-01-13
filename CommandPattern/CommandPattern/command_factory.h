#pragma once
#include <regex>

#include "add_command.h"
#include "print_command.h"
#include <string>
#include <vector>
class command_factory
{
public:

	static inline command * create(std::string zeile)
	{
		command* retval = nullptr;
		
		auto const re = std::regex{ "\\s" };
		auto const tokens = std::vector<std::string>(
			std::sregex_token_iterator{std::begin(zeile), std::end(zeile), re, -1 },
			std::sregex_token_iterator{}
		);

		if(tokens[0] == "Add")
		{
			retval = new add_command();
			retval->parse(tokens);
			
		}
		else if (tokens[0] == "Print")
		{
			retval = new print_command();
		}
		return retval;
	}
};