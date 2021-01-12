#pragma once
#include <iostream>
#include "mitarbeiter_visitor.h"
class statistik_visitor :
    public mitarbeiter_visitor
{
private:
	int anzahl_gehaltsempfaenger;
	int anzahl_lohnenpfaenger;
public:
	statistik_visitor()
	{
		anzahl_gehaltsempfaenger = 0;
		anzahl_lohnenpfaenger = 0;
	}


	void init() override
	{
		anzahl_gehaltsempfaenger = 0;
		anzahl_lohnenpfaenger = 0;
	}

	void dispose() override
	{
		print();
	}

	void visit(lohn_empfaenger& le)  override
	{
		anzahl_lohnenpfaenger++;
	}
	void visit(gehalts_empfaenger& ge)  override
	{
		anzahl_gehaltsempfaenger++;
	}


	int get_anzahl_gehaltsempfaenger() const
	{
		return anzahl_gehaltsempfaenger;
	}

	int get_anzahl_lohnenpfaenger() const
	{
		return anzahl_lohnenpfaenger;
	}

	int get_anzahl_gesamt() const
	{
		return anzahl_lohnenpfaenger + anzahl_gehaltsempfaenger;
	}

	void print()
	{
		std::cout << "Anzahl Ge: " << anzahl_gehaltsempfaenger << ", Anzahl Le: " << anzahl_lohnenpfaenger << ", Gesamt: " << get_anzahl_gesamt() << std::endl;
	}
};

