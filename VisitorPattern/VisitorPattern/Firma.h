#pragma once
#include "abstract_mitarbeiter.h"
#include <iostream>
#include <vector>
#include "mitarbeiter_visitor.h"

class firma
{

private:
	std::vector<abstract_mitarbeiter*> mitarbeiters;

public:
	firma() = default;

	void add_mitarbeiter(abstract_mitarbeiter * mitarbeiter)
	{
		mitarbeiters.push_back(mitarbeiter);
	}

	


	void iterate(mitarbeiter_visitor &visitor)
	{
		visitor.init();
		for (auto mitarbeiter : mitarbeiters)
		{
			mitarbeiter->accept(&visitor);
		}
		visitor.dispose();
	}
	
};