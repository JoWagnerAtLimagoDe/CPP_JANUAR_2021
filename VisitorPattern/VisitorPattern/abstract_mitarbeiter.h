#pragma once
#include <iostream>
#include <string>
#include "mitarbeiter_visitor.h"

class abstract_mitarbeiter
{
private:
	std::string name_;

public:
	explicit abstract_mitarbeiter(const std::string name) :name_(name) {}


	std::string get_name() const
	{
		return name_;
	}

	void set_name(const std::string& name)
	{
		name_ = name;
	}


	virtual void ausgabe()
	{
		std::cout << "name_: " << this->name_;
	}

    virtual void accept(mitarbeiter_visitor* visitor)=0;
};

