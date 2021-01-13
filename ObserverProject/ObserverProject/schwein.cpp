#include "schwein.h"

void schwein::set_name(const std::string& name)
{
	name_ = name;
}

void schwein::set_gewicht(int gewicht)
{
	gewicht_ = gewicht; 
	if (gewicht >= 20)
		fire_pig_too_fat_event();
}

void schwein::fire_pig_too_fat_event()
{
	for(auto listener: pig_too_fat_listeners_)
	{
		listener->pig_too_fat(this);
	}
}

schwein::schwein(std::string name):name_(name), gewicht_(10)
{
}

void schwein::add_pig_too_fat_listener(pig_too_fat_listener* listener)
{
	pig_too_fat_listeners_.push_back(listener);
}

void schwein::fressen()
{
	set_gewicht(get_gewicht() + 1);
}

std::string schwein::get_name() const
{
	return name_;
}

int schwein::get_gewicht() const
{
	return gewicht_;
}
