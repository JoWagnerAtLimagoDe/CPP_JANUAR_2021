#include "Fassade.h"
#include "status_a.h"
#include "status_b.h"

fassade::fassade() 
{
	myStateA = new status_a(this);
	myStateB = new status_b(this);
	current = myStateA;

}


status* fassade::get_my_state_a() const
{
	return myStateA;
}

status* fassade::get_my_state_b() const
{
	return myStateB;
}

status* fassade::get_current() const
{
	return current;
}

void fassade::set_my_state_a(status* my_state_a)
{
	myStateA = my_state_a;
}

void fassade::set_my_state_b(status* my_state_b)
{
	myStateB = my_state_b;
}

void fassade::set_current(status* current)
{
	this->current = current;
}
void fassade::drucken() const {
	current->drucken();
}
void fassade::wechsle_zu_a() {
	current->wechsle_zu_a();
}
void fassade::wechsle_zu_b() {
	current->wechsle_zu_b();
}