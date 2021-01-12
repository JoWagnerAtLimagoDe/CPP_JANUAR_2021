#pragma once
#include <ostream>
#include "abstract_mitarbeiter.h"
#include "mitarbeiter_visitor.h"


class mitarbeiter_visitor;

class gehalts_empfaenger :
    public abstract_mitarbeiter
{
private:
	double gehalt_;
public:
	gehalts_empfaenger(const std::string name, const double gehalt = 0): abstract_mitarbeiter(name),gehalt_(gehalt){}


	double get_gehalt() const
	{
		return gehalt_;
	}

	void set_gehalt(double gehalt)
	{
		gehalt_ = gehalt;
	}

	void ausgabe() override
	{
		std::cout
			<< "Gehaltsempfaenger: "
			<< this->get_name()
			<< " gehalt_: " << this->gehalt_ << std::endl;;
	}
	void accept(mitarbeiter_visitor* visitor)
	{
		visitor->visit(*this);
	}
	
};

