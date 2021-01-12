#include "green_state.h"

green_state::green_state(traffic_light* traffic_light) :abstract_trafficlight_color_state(traffic_light)
{
}

std::string green_state::get_color() const
{
    return "GREEN";
}

void green_state::next_color()
{
	get_traffic_light()->current = get_traffic_light()->RED_STATE;
}

