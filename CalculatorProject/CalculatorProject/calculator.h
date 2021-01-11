#pragma once

namespace vw {
	namespace math {
		class calculator
		{
			
		public:
			virtual ~calculator() = default;
			virtual double add(double a, double b) const = 0;
			virtual double sub(double a, double b) const = 0;
		};
	}
}

