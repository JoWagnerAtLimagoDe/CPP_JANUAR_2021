#pragma once
#include <ostream>
#include <string>
#include <vector>
#include "pig_too_fat_listener.h"
class schwein
{
	std::vector<pig_too_fat_listener* > pig_too_fat_listeners_;
	std::string name_;
	int gewicht_;
	void set_gewicht(int gewicht);

	void fire_pig_too_fat_event();


public:
	explicit schwein(std::string name = "nobody");

	void add_pig_too_fat_listener(pig_too_fat_listener* listener);
	
	void fressen();
	void set_name(const std::string& name);
	std::string get_name() const;
	int get_gewicht() const;


	friend std::ostream& operator<<(std::ostream& os, const schwein& obj)
	{
		return os
			<< "name_: " << obj.name_
			<< " gewicht_: " << obj.gewicht_;
	}
};

