// VisitorPattern.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Firma.h"
#include "lohn_empfaenger.h"
#include "gehalts_empfaenger.h"
#include "print_visitor.h"
#include "reset_arbeitszeit_visitor.h"
#include "statistik_visitor.h"

int main()
{
    firma firma;
	firma.add_mitarbeiter(new lohn_empfaenger("Hinz", 40, 10));
	firma.add_mitarbeiter(new gehalts_empfaenger("Schmidt", 2000));
	firma.add_mitarbeiter(new gehalts_empfaenger("Meier", 2000));
	firma.add_mitarbeiter(new lohn_empfaenger("Kunz", 40, 12));
	firma.add_mitarbeiter(new gehalts_empfaenger("Schulz", 2000));

	//firma.print();
	print_visitor visitor;
	firma.iterate(visitor);

	reset_arbeitszeit_visitor reset_arbeitszeit_visitor;
	firma.iterate(reset_arbeitszeit_visitor);

	firma.iterate(visitor);

	statistik_visitor statistik_visitor;
	firma.iterate(statistik_visitor);
	
	
}


