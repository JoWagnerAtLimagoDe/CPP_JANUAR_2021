#pragma once
#include "abstract_trafficlight_color_state.h"
class green_state :
	public abstract_trafficlight_color_state
{
public:
	green_state(traffic_light* traffic_light);
	std::string get_color() const override;
	void next_color() override;
};

