// FlyWeightDemoProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "AttributedCharacter.h"

int main()
{

	AttributedCharacter *ac = AttributedCharacter::getInstance('A',true);

	AttributedCharacter* ac2 = AttributedCharacter::getInstance('A', true);

	
	std::cout << (ac == ac2) << std::endl;
}


