// ObserverProject.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "schwein.h"

class Metzger 
{
public:
	void schlachten(void* sender) 
	{
		std::cout << "Messer wetz!" << std::endl;
	}
};

class Spediteur
{
public:
	void fahren(void * ware)
	{
		std::cout << "Wir fahren auf der Autobahn" << std::endl;
	}
};

Metzger metzger;
Spediteur spediteur;

class SchweineMetzgerAdapter: public pig_too_fat_listener
{
public:
	void pig_too_fat(schwein* sender) override
	{
		metzger.schlachten(sender);
	}
};

class SchweineSpediteurAdapter : public pig_too_fat_listener
{
public:
	void pig_too_fat(schwein* sender) override
	{
		spediteur.fahren(sender);
	}
};

int main()
{
	SchweineMetzgerAdapter adapter;
	SchweineSpediteurAdapter spediteur_adapter;
	schwein piggy{"Miss Piggy"};
	//piggy.add_pig_too_fat_listener([](schwein* s) {metzger.schlachten(s); });
	piggy.add_pig_too_fat_listener(&adapter);
	piggy.add_pig_too_fat_listener(&spediteur_adapter);

	for (int i = 0; i < 11; i++)
		piggy.fressen();




	


	
}

