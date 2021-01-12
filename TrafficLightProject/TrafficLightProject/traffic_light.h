#pragma once
#include "trafficlight_state.h"
class traffic_light
{

	friend class red_state;
	friend class green_state;
	friend class off_state;
	friend class abstract_trafficlight_color_state;

	trafficlight_state* RED_STATE;
	trafficlight_state* GREEN_STATE;
	trafficlight_state* OFF_STATE;
	trafficlight_state* current;


public:
	traffic_light();
	virtual std::string get_color() const;
	virtual void next_color();
	virtual void switch_on() ;
	virtual void switch_off() ;
};

