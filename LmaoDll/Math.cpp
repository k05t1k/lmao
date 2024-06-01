#include "Math.h"

extern "C" __declspec(dllexport) int Sum(int x, int y)
{
	return x + y;
}

extern "C" __declspec(dllexport) int Div(int x, int y)
{
	return x / y;
}

extern "C" __declspec(dllexport) int Mul(int x, int y)
{
	return x * y;
}

extern "C" __declspec(dllexport) int Sub(int x, int y)
{
	return x * y;
}


