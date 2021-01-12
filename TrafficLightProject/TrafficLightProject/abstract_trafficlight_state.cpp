#include "abstract_trafficlight_state.h"

#include <stdexcept>

abstract_trafficlight_state::abstract_trafficlight_state(traffic_light* traffic_light):traffic_light_((traffic_light))
{
}

traffic_light* abstract_trafficlight_state::get_traffic_light() const
{
	return traffic_light_;
}

std::string abstract_trafficlight_state::get_color() const
{
    throw std::runtime_error{ "Upps" };
}

void abstract_trafficlight_state::next_color()
{
	throw std::runtime_error{ "Upps" };
}

void abstract_trafficlight_state::switch_on()
{
	throw std::runtime_error{ "Upps" };
}
void abstract_trafficlight_state::switch_off()
{
	throw std::runtime_error{ "Upps" };
}
