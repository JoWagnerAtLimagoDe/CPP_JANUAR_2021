#pragma once
#include <string>
class trafficlight_state
{
public:
	virtual std::string get_color() const = 0;
	virtual void next_color() = 0;
	virtual void switch_on() = 0;
	virtual void switch_off() = 0;
};

