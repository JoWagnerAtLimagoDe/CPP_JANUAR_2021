#pragma once
#include <ostream>

#include "abstract_node.h"

class datei :public abstract_node
{
public:
	explicit datei(const std::string& label) :abstract_node(label) {};


	void ausgabe() override
	{
		std::cout << "Datei: ";
		abstract_node::ausgabe();
		
	}
};