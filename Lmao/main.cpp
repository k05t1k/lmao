#include <Windows.h>
#include "../LmaoLib/Stream.h"

int main()
{
	std::vector<std::string> lox = { "lol", "kke", "meme" };
	Streaming::FileStream::writeFile("test.txt", lox);
	std::vector<std::string> lines = Streaming::FileStream::readFile(std::ifstream("test.txt"));
	for (int i = 0; i < lines.size(); i++)
	{
		std::cout << lines.at(i) << std::endl;
	}

	HINSTANCE load;
	load = LoadLibrary(L"LmaoDll.dll");
	typedef int (*sum) (int, int);
	typedef int (*div) (int, int);
	typedef int (*mul) (int, int);
	typedef int (*sub) (int, int);

	sum Sum;
	div Div;
	mul Mul;
	sub Sub;

	Sum = (sum)GetProcAddress(load, "Sum");
	Div = (div)GetProcAddress(load, "Div");
	Mul = (mul)GetProcAddress(load, "Mul");
	Sub = (sub)GetProcAddress(load, "Sub");

	int x, y;

	std::cin >> x >> y;

	std::cout << Sum(x, y) << std::endl;
	std::cout << Div(x, y) << std::endl;
	std::cout << Mul(x, y) << std::endl;
	std::cout << Sub(x, y) << std::endl;

	FreeLibrary(load);
}