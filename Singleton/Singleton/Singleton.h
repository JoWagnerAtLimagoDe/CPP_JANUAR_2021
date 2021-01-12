#pragma once

#include <iostream>
class logger
{

private:
	static  inline logger* instance{ nullptr };

	logger() = default;

public:
	static logger * getInstance()
	{
		if(instance == nullptr)
		{
			instance = new logger();
		}
		return instance;
	}

	virtual void log(const char * message)
	{
		std::cout << message << std::endl;
	}
	
};