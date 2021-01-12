#pragma once

#include "status.h"


class fassade
{
public:
	status* myStateA;
	status* myStateB;
	status* current;

	fassade();


	status* get_my_state_a() const;

	status* get_my_state_b() const;

	status* get_current() const;

	void set_my_state_a(status* my_state_a);

	void set_my_state_b(status* my_state_b);

	void set_current(status* current);

	virtual void drucken() const;
	virtual void wechsle_zu_a();
	virtual void wechsle_zu_b();
};
