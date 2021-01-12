#pragma once
#include "trafficlight_state.h"
#include "traffic_light.h"

class abstract_trafficlight_state :
    public trafficlight_state
{

private:
	traffic_light* traffic_light_;
public:

	abstract_trafficlight_state(traffic_light* traffic_light_);


	traffic_light* get_traffic_light() const;
	std::string get_color() const override;
	void next_color() override;
	void switch_on() override;
	void switch_off() override;
};

