#include "off_state.h"

off_state::off_state(traffic_light* traffic_light):abstract_trafficlight_state(traffic_light)
{
}

void off_state::switch_on()
{
	get_traffic_light()->current = get_traffic_light()->RED_STATE;
}
