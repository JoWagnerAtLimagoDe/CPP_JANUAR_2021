#include "red_state.h"

red_state::red_state(traffic_light* traffic_light):abstract_trafficlight_color_state(traffic_light)
{
}

std::string red_state::get_color() const
{
    return "RED";
}

void red_state::next_color()
{
	get_traffic_light()->current = get_traffic_light()->GREEN_STATE;
}
