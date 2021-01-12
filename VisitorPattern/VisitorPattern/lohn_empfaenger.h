#pragma once
#include <ostream>

#include "abstract_mitarbeiter.h"
class lohn_empfaenger :
    public abstract_mitarbeiter
{
private:
	double arbeitszeit_;
	double stundenlohn_;
public:

	lohn_empfaenger(const std::string name, const double arbeitszeit = 0, const double stundenlohn = 0):abstract_mitarbeiter(name), arbeitszeit_(arbeitszeit),stundenlohn_(stundenlohn){}


	double get_arbeitszeit() const
	{
		return arbeitszeit_;
	}

	void set_arbeitszeit(double arbeitszeit)
	{
		arbeitszeit_ = arbeitszeit;
	}

	double get_stundenlohn() const
	{
		return stundenlohn_;
	}

	void set_stundenlohn(double stundenlohn)
	{
		stundenlohn_ = stundenlohn;
	}


	void ausgabe() override
	{
		std::cout
			<< "Lohnempfaenger: "
			<< this->get_name()
			<< " arbeitszeit_: " << this->arbeitszeit_
			<< " stundenlohn_: " << this->stundenlohn_ << std::endl;;
	}

	void accept(mitarbeiter_visitor* visitor)
	{
		visitor->visit(*this);
	}
};

