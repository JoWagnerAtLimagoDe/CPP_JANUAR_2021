// FileReader.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <fstream>
#include <iostream>
#include "line_counter.h"
int main()
{
	 line_counter cc{'H'};
	 abstract_fileprocessor& fp = cc;
	 fp.run("MyFile.txt");
}

