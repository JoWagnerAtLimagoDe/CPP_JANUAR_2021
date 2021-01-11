#pragma once
#include "calculator.h"
namespace vw
{
	namespace math
	{


		class calculator_secure :
			public calculator
		{
		private:
			calculator& calculator_;
		public:


			explicit calculator_secure(calculator& calculator)
				: calculator_(calculator)
			{
			}

			double add(double a, double b) const override;
			double sub(double a, double b) const override;
		};

	}
}