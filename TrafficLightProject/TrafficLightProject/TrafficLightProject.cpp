// TrafficLightProject.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "traffic_light.h"
int main()
{
	traffic_light t;

	t.switch_on();
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << t.get_color() << std::endl;
		t.next_color();
	}
	t.switch_off();
}

