#pragma once
#include <fstream>
#include <iostream>
#include <string>
class abstract_fileprocessor
{

public:
	void run(std::string filename) 
	{
		init();
		std::ifstream infile(filename);
		char ch;
		while (infile.get(ch))
		{
			process(ch);
		}
		infile.close();
		dispose();
	}

	virtual void init()
	{
		// Ok
	}

	virtual void process(char c) = 0;

	virtual void dispose()
	{
		// Ok
	}
};

