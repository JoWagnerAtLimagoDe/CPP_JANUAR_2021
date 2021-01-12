#pragma once
#include "abstract_mitarbeiter_visitor.h"
class print_visitor :
    public abstract_mitarbeiter_visitor
{
public:

	void visit(lohn_empfaenger& le)  override
	{
		le.ausgabe();
	}
	void visit(gehalts_empfaenger& ge)  override
	{
		ge.ausgabe();
	}
};

