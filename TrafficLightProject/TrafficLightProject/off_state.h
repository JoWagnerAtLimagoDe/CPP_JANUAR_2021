#pragma once
#include "abstract_trafficlight_state.h"
class off_state :
    public abstract_trafficlight_state
{
public:
	off_state(traffic_light *traffic_light);


	void switch_on() override;
};

