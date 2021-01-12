#pragma once
#include "mitarbeiter_visitor.h"
class abstract_mitarbeiter_visitor :
    public mitarbeiter_visitor
{
public:


	void init() override{}
	void dispose() override{}
	void visit(lohn_empfaenger &le)  override {}
	void visit(gehalts_empfaenger &ge)  override{}
};

