#include <iostream>
#include <string>
#include <windows.h>
#include "Source1.ccp"

int Felix()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "Felix ";
	SetConsoleTextAttribute(hConsole, 7);
	return main();
}
int King()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleActiveScreenBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, 8);
	cout << "King ";
	SetConsoleTextAttribute(hConsole, 7);
	return main();
}