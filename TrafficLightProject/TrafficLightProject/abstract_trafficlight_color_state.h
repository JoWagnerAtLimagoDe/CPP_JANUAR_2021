#pragma once
#include "abstract_trafficlight_state.h"
class abstract_trafficlight_color_state :
    public abstract_trafficlight_state
{
public:

	abstract_trafficlight_color_state(traffic_light* traffic_light);

	void switch_off() override;
};

