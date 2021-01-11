#pragma once
#include <ostream>
#include <string>

namespace tiere {
	class schwein
	{
	private:
		std::string name_;
		int gewicht_;

	public:


		schwein(const std::string& name = "nobody")
			: name_(name),
			  gewicht_(10)
		{
		}


		std::string get_name() const
		{
			return name_;
		}

		void set_name(const std::string& name)
		{
			name_ = name;
		}

		int get_gewicht() const
		{
			return gewicht_;
		}

		void set_gewicht(int gewicht)
		{
			gewicht_ = gewicht;
		}


		
	};
}

