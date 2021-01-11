#pragma once
#include <iostream>
#include "calculator.h"

namespace client {
	using namespace vw::math;
	class calculator_client
	{
	private:
		calculator &calculator_;
		
	public:


		explicit calculator_client(calculator& calculator)
			: calculator_(calculator)
		{
		}

		void run()
		{
			

			std::cout << calculator_.add(3, 4) << "\n";
		}
	};
}

