// CompositePattern.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "datei.h"
#include "verzeichnis.h"


void travers(abstract_node* node)
{
	node->ausgabe();
	for (auto child : node->get_children())
	{
		travers(child);
	}
}
int main()
{
	verzeichnis root{"root"};

	verzeichnis e1_1{ "e1_1" };
	root.append_child(&e1_1);
	
	verzeichnis e1_2{ "e1_2" };
	root.append_child(&e1_2);

	verzeichnis e1_1_1{ "e1_1_1" };
	e1_1.append_child(&e1_1_1);

	verzeichnis e1_1_2{ "e1_1_2" };
	e1_1.append_child(&e1_1_2);

	datei e1_2_1{ "e1_2_1" };
	e1_2.append_child(&e1_2_1);

	datei e1_2_2{ "e1_2_2" };
	e1_2.append_child(&e1_2_2);

	travers(&root);

    std::cout << "Hello World!\n";
}


