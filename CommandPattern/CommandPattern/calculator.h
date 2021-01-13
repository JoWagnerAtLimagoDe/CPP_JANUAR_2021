#pragma once
#include  <iostream>
class calculator
{
	double memory_;
	calculator():memory_(0){}
	
public:
	static calculator * get_instance()
	{
		static calculator* instance_ = nullptr;
		
		if (instance_ == nullptr)
			instance_ = new calculator();
		
		return instance_;
	}

	double get_memory() const;
	void set_memory(double memory);

	void add(double a)
	{
		memory_ += a;
	}

	void sub(double a)
	{
		memory_ -= a;
	}

	void mult(double a)
	{
		memory_ *= a;
	}

	void div(double a)
	{
		memory_ /= a;
	}

	void clear()
	{
		memory_ = 0;
	}

	void print() const
	{
		std::cout << memory_ << std::endl;
	}

};



inline double calculator::get_memory() const
{
	return memory_;
}

inline void calculator::set_memory(double memory)
{
	memory_ = memory;
}
