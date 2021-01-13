// CommandPattern.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "command_factory.h"

int main()
{
	std::string zeile;
	while(true)
	{
		std::cout << "#>";
		std::getline(std::cin, zeile);
		if (zeile == "ende") break;

		command* command = command_factory::create(zeile);
		if( ! command) continue;

		command->execute();
	}
    std::cout << "Hello World!\n";
}

