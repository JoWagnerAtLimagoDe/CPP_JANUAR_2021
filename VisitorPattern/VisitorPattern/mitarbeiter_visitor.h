#pragma once

class gehalts_empfaenger;
class lohn_empfaenger;

class mitarbeiter_visitor
{
public:
	virtual void init() = 0;
	virtual void visit(lohn_empfaenger &le)  = 0;
	virtual void visit(gehalts_empfaenger &ge)  = 0;
	virtual void dispose() = 0;
};

