#pragma once
#include <vector>
class AttributedCharacter
{

private:
	static inline std::vector<AttributedCharacter*> myVector;
	
	const char c;
	const bool bold;
	AttributedCharacter(const char c, const bool bold) :c(c),bold(bold)
	{
		myVector.push_back(this);
	}
public:
	static AttributedCharacter * getInstance(char c, bool bold)
	{
		for(auto ac : myVector)
		{
			if (ac->c == c && ac->bold == bold)
				return ac;
		}
		return new AttributedCharacter(c, bold);
	}


	[[nodiscard]] char get_c() const
	{
		return c;
	}

	[[nodiscard]] bool is_bold() const
	{
		return bold;
	}
};

