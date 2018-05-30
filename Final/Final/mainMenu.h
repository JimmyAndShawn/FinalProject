/*#include <cwchar>
#include <windows.h>
#include <iostream>
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

void main(int gStop, int totalGold, int gI1, int gI2, int gI3)
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 40;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	string choice;

	char arrowRight = 16;
	char arrowDown = 31;
	int c;

top:
	//welcoming screen + instructions
	cout << "\n\n\n                           Kingdom Harbinger!" << endl;
	cout << "                   .-                                        _,-. " << endl;
	cout << "	    ______/C_________________________________,.--v/^^ ,/       " << endl;
	cout << "	 ,n#|##|#}{------------------------------ - - - ___-^          " << endl;
	cout << "	,,,```````|/,-,,,^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^               " << endl;
	cout << "                 c/,                                              " << endl;
	Sleep(1000);
	cout << "      	                      " << arrowRight << " [start]" << endl;
	Sleep(1000);
	cout << "\n	                      " << arrowRight << " [info]" << endl;
	Sleep(1000);
	cout << "\n	                      " << arrowRight << " [exit]" << endl;
	Sleep(1000);

	cout << "\n\n\n\n\nInput Answer: ";
	cin >> choice;

	if (choice == "info")
	{
		system("cls");
		Sleep(1000);

		char myStory[] = { "This is a text based story where you'll be traveling along as a Rogue.\n\nYour objective is to complete multiple stages and tasks which will lead \nyou to the end.\n\nYou may survive and also die, different choices lead you into choosing \nif you're going to be a good, bad, or neutral character.\n" };

		for (int x = 0; x < strlen(myStory); x++)
		{
			cout << myStory[x];
			Sleep(50);
		}

		Sleep(1000);
		cout << "\nWould you like to go back to the start screen?" << endl;
		Sleep(1000);
		cout << "\n	1. [yes]" << endl;
		Sleep(1000);
		cout << "\n	2. [no]" << endl;
		Sleep(1000);
		
		cout << "\n\n\n\n\n\nInput Answer: ";
		cin >> choice;
		if (choice != "yes")
		{
			do{
				system("cls");
				cout << "This is a text based story where you'll be traveling along as a Rogue.\n\nYour objective is to complete multiple stages and tasks which will lead \nyou to the end.\n\nYou may survive and also die, different choices lead you into choosing \nif you're going to be a good, bad, or neutral character.\n" << endl;
				cout << "\nWould you like to go back to the start screen?" << endl;
				cout << "\n	1. [yes]" << endl;
				cout << "\n	2. [no]" << endl;
				cout << "\n\n\n\n\n\nInput Answer: ";
				cin >> choice;
			} while (choice != "yes");
		}
		if (choice == "yes")
		{
			gStop = 0;
			system("cls");
			goto top;

		}
	}
	if (choice == "exit")
	{
		return 0;
	}





	if (gI1 > 3 && gI2 > 3 && gI3 > 3)
	{
	totalGold = 100;
	gI1 = 00;
	gI2 = 00;
	gI3 = 00;
	}
}*/