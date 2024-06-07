#include "meme.h"

bool SearchSymbol(std::string str, char symb)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == symb)
			return true;
	}

	return false;
}
