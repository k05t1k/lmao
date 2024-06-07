#include <Windows.h>
#include "../LmaoLib/Stream.h"

int main()
{
	setlocale(LC_ALL, "rus");
	std::vector<std::string> mem = { "lol", "kke", "meme" };
	Streaming::FileStream::writeFile("test.txt", mem);
	std::vector<std::string> lines = Streaming::FileStream::readFile(std::ifstream("test.txt"));
	for (int i = 0; i < lines.size(); i++)
	{
		std::cout << lines.at(i) << std::endl;
	}

	HINSTANCE load;
	load = LoadLibrary(L"LmaoDll.dll");
	typedef bool (*search) (std::string, char);

	search Search;

	Search = (search)GetProcAddress(load, "SearchSymbol");

	std::string word;
	char symbol;

	std::cin >> word >> symbol;

	if (Search(word, symbol))
		std::cout << "����� " << word << " �������� " << symbol << std::endl;
	else
		std::cout << "����� " << word << " �� �������� " << symbol << std::endl;
	

	FreeLibrary(load);
}