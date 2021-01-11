#pragma once
#include "calculator.h"
namespace vw {
	namespace math {
		class calculator_impl: public calculator
		{
		public:
			double add(double a, double b) const override;
			double sub(double a, double b) const override;
		};
	}
}

