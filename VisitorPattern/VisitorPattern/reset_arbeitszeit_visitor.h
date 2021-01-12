#pragma once
#include "lohn_empfaenger.h"
#include "abstract_mitarbeiter_visitor.h"
class reset_arbeitszeit_visitor :
    public abstract_mitarbeiter_visitor
{
public:

	void visit(lohn_empfaenger& le)  override
	{
		le.set_arbeitszeit(0);
	}
	
};

