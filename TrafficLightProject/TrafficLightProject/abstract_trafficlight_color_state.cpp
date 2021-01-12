#include "abstract_trafficlight_color_state.h"

abstract_trafficlight_color_state::abstract_trafficlight_color_state(traffic_light* traffic_light):abstract_trafficlight_state(traffic_light)
{
}

void abstract_trafficlight_color_state::switch_off()
{
	get_traffic_light()->current = get_traffic_light()->OFF_STATE;
}
