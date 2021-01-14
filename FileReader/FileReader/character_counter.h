#pragma once
#include "abstract_fileprocessor.h"
class character_counter :
    public abstract_fileprocessor
{
	int counter = 0;
public:

	void process(char c) override
	{
		counter++;
	}
	void dispose() override
	{
		std::cout << counter << std::endl;
	}
};

