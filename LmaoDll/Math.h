#pragma once

extern "C" __declspec(dllexport) int Sum(int, int);
//extern "C" __declspec(dllexport) double Sum(double, double);

extern "C" __declspec(dllexport) int Div(int, int);
//extern "C" __declspec(dllexport) double Div(double, double);

extern "C" __declspec(dllexport) int Mul(int, int);
//extern "C" __declspec(dllexport) double Mul(double, double);

extern "C" __declspec(dllexport) int Sub(int, int);
//extern "C" __declspec(dllexport) double Sub(double, double);

//struct IMath
//{
//	virtual int Sum(int, int) = 0;
//	virtual int Sum(int, int) = 0;
//	virtual int Div(int, int) = 0;
//	virtual int Div(int, int) = 0;
//	virtual int Mul(int, int) = 0;
//	virtual int Mul(int, int) = 0;
//	virtual int Sub(int, int) = 0;
//	virtual int Sub(int, int) = 0;
//};