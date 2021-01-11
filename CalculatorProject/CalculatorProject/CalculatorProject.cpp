// CalculatorProject.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "calculator_impl.h"
#include "calculator_logger.h"
#include "calculator_secure.h"
#include "calculator_client.h"

int main()
{
	vw::math::calculator_impl calculator_impl;
	vw::math::calculator_logger calculator_logger{calculator_impl};
	vw::math::calculator_secure calculator_secure{ calculator_logger };

	client::calculator_client client{ calculator_secure };
	client.run();
	return 0;
	
}

