#include "traffic_light.h"


#include "green_state.h"
#include "red_state.h"
#include "off_state.h"

traffic_light::traffic_light()
{
	RED_STATE = new red_state(this);
	GREEN_STATE = new green_state(this);
	OFF_STATE = new off_state(this);
	current = OFF_STATE;
}

std::string traffic_light::get_color() const
{
	return current->get_color();
}

void traffic_light::next_color()
{
	current->next_color();
}

void traffic_light::switch_on()
{
	current->switch_on();
}
void traffic_light::switch_off()
{
	current->switch_off();
}
