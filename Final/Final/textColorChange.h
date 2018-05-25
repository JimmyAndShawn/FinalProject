#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void Felix()
{
	HANDLE hConsole;
	char felix[] = { "Felix " };
	for (int i = 0; i < strlen(felix); i++)
	{
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 14);
		cout << felix[i];
		Sleep(50);
	}
	SetConsoleTextAttribute(hConsole, 7);
}
void King()
{
	HANDLE hConsole;
	char king[] = { "King " };
	for (int i = 0; i < strlen(king); i++)
	{
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 8);
		cout << king[i];
		Sleep(50);
	}
	SetConsoleTextAttribute(hConsole, 7);
}