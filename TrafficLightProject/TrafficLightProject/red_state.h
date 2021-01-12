#pragma once
#include "abstract_trafficlight_color_state.h"
class red_state :
    public abstract_trafficlight_color_state
{
public:
	red_state(traffic_light * traffic_light);
	std::string get_color() const override;
	void next_color() override;
};

