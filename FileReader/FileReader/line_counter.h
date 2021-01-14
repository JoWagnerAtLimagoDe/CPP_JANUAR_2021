#pragma once
#include "abstract_fileprocessor.h"

class line_counter :
	public abstract_fileprocessor
{
	int counter = 0;
	char character_to_check_;
public:

	line_counter(char c):character_to_check_(c){}
	
	void process(char c) override
	{
		if(c == character_to_check_) counter++;
	}
	void dispose() override
	{
		std::cout << counter << std::endl;
	}
};

