/* Final Project: Kingdom Harbringer
Date Began:  05/10/2018				Date End:
<ShawnD Herrick and Jimmy Thai> 's Source File
*/

#include <cwchar>
#include <windows.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include "storyFull.h"
#include "fighting.h"
#pragma warning(disable: 4996)
using namespace std;

void s0(int x);
void s1(int x);
void s2(int x);
void s3A(int x);
void s3B(int x);
void s4A(int x);
void s4B(int x);
void s4C(int x);
void s5A(int x);
void s5B(int x);
void s5C(int x);
void demo();
void tavern();
void fighting();
int main(int tSpeed)
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
	while (choice != "start") {
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
				do {
					system("cls");
					cout << "This is a text based story where you'll be traveling along as a Rogue.\n\nYour objective is to complete multiple stages and tasks which will lead \nyou to the end.\n\nYou may survive and also die, different choices lead you into choosing \nif you're going to be a good, bad, or neutral character.\n" << endl;
					cout << "\nWould you like to go back to the start screen?" << endl;
					cout << "\n	1. [yes]" << endl;
					cout << "\n	2. [no]" << endl;
					cout << "\n\n\n\n\n\n\nInput Answer: ";
					cin >> choice;
				} while (choice != "yes");
			}
			if (choice == "yes")
			{
				system("cls");
				goto top;

			}
		}
		else if (choice == "exit")
		{
			return 0;
		}
		else
		{
			system("cls");
			cout << "\n\n\n                           Kingdom Harbinger!" << endl;
			cout << "                   .-                                        _,-. " << endl;
			cout << "	    ______/C_________________________________,.--v/^^ ,/       " << endl;
			cout << "	 ,n#|##|#}{------------------------------ - - - ___-^          " << endl;
			cout << "	,,,```````|/,-,,,^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^               " << endl;
			cout << "                 c/,                                              " << endl;
			cout << "      	                      " << arrowRight << " [start]" << endl;
			cout << "\n	                      " << arrowRight << " [info]" << endl;
			cout << "\n	                      " << arrowRight << " [exit]" << endl;

			cout << "\n\n\n\n\nInput Answer: ";
			cin >> choice;
		}
	}
textSpeed:
	//Set Text Speed - Start
	char textSpeed[] = { "1. Slow... \n2. Medium... \n3. Fast... \n4. Legit, Unreadable..." };
	system("cls");
	cout << "Choose your text speed \n" << endl;
	for (int i = 0; i < strlen(textSpeed); i++)
	{
		switch (i)
		{
		case 1:
			tSpeed = 100;
			break;
		case 11:
			tSpeed = 50;
			break;
		case 24:
			tSpeed = 25;
			break;
		case 35:
			tSpeed = 0;
			break;
		default:
			break;
		}
		cout << textSpeed[i];
		Sleep(tSpeed);
	}
	cout << "\n" << arrowRight;
	cin >> choice;
	if (choice == "1" || choice == "Slow" || choice == "slow")
	{
		tSpeed = 100;
	}
	else if (choice == "2" || choice == "Medium" || choice == "medium")
	{
		tSpeed = 50;
	}
	else if (choice == "3" || choice == "Fast" || choice == "fast")
	{
		tSpeed = 25;
	}
	else if (choice == "4" || choice == "Unreadable" || choice == "unreadable")
	{
		tSpeed = 0;
	}
	else 
	{
		goto textSpeed;
	}
	//Set Text Speed - End
	s0(tSpeed); 
	s1(tSpeed); 
	s2(tSpeed);
		cout << "\n===(What will you do?)===" << endl;
		Sleep(500);
		/*3A Select Button*/cout << "+------------------------------------------------------------------------+ \n|                        1.  Yes, I’ll do it for the                     | \n+------------------------------------------------------------------------+" << endl;     //3A Select Button
		Sleep(500);
		/*3B Select Button*/cout << "+------------------------------------------------------------------------+ \n|                        2.  No! This is Blackmail!                      | \n+------------------------------------------------------------------------+ \n" << arrowRight;     //3A Select Button
	choice3Aor3B:
		cin >> choice;
		if (choice == "1" || choice == "Yes" || choice == "yes")
		{
			s3A(tSpeed);
			goto choice4Aor4B;
		}
		else if (choice == "2" || choice == "No" || choice == "no")
		{
			s3B(tSpeed);
			goto choice4Cor5B;
		}
		else
		{
			cout << "***TRY AGAIN*** \n" << arrowRight;
			goto choice3Aor3B;
		}
	choice4Aor4B:
		cout << "\n===(What will you do?)===" << endl;
		Sleep(500);
		/*4A Select Button*/cout << "+------------------------------------------------------------------------+ \n|             1.  Go directly towards the forest                        | \n+----------------------------------------------------------------------- +" << endl;     //3A Select Button
		Sleep(500);
		/*4B Select Button*/cout << "+------------------------------------------------------------------------+ \n|             2.   Better go to a shop to buy some items first          | \n+------------------------------------------------------------------------+ \n" << arrowRight;     //3A Select Button
		secondChoice:
		cin >> choice;
		if (choice == "1" || choice == "Forest" || choice == "forest")
		{
			SetConsoleTextAttribute(hConsole, 14);
			char extra[] = { "\nFelix: \"I'm already prepared.. no point in wasting time when something \nthis important is at stake.\"" };
			for (int i = 0; i < strlen(extra); i++)
			{
				cout << extra[i];
				Sleep(tSpeed);
			}
			SetConsoleTextAttribute(hConsole, 7);
			s4A(tSpeed);
			s5A(tSpeed);
			demo();
			goto end;

		}
		else if (choice == "2" || choice == "Shop" || choice == "shop")
		{
			s4B(tSpeed);
			goto choice5Bor5C;
		}
		else
		{
			cout << "***TRY AGAIN*** \n" << arrowRight;
			goto secondChoice;
		}
	choice4Cor5B:
		cout << "\n===(What will you do?)===" << endl;
		Sleep(500);
		/*4C Select Button*/cout << "+------------------------------------------------------------------------+ \n|                    1. Leave town as fast as possible                  | \n +-----------------------------------------------------------------------+" << endl;     //3A Select Button
		Sleep(500);
		/*5B Select Button*/cout << "+------------------------------------------------------------------------+ \n|        2.  Risk hiding out in the Tavern, I have a friend there       | \n+------------------------------------------------------------------------+ \n" << arrowRight;     //3A Select Button
	thirdChoice:
		cin >> choice;
		if (choice == "1" || choice == "Leave" || choice == "leave")
		{
			s4C(tSpeed);
			demo();
			goto end;
		}
		else if (choice == "2" || choice == "Tavern" || choice == "tavern")
		{
			SetConsoleTextAttribute(hConsole, 14);
			char extra[] = { "\nFelix: \"There’s no way I could make it out of the city in time.. I'll just go \nand see my friend, Demitir, at the tavern... \" \n\nFelix decides not to tell his friend that he's wanted for the time being, and \nwith that Felix wearily jogs towards the direction of the Tavern. It wasn't \nlong before the night patrol became much more active." };
			for (int i = 0; i < strlen(extra); i++)
			{
				cout << extra[i];
				Sleep(tSpeed);
				if (i == 125)
				{
					SetConsoleTextAttribute(hConsole, 7);
				}
			}
			s5B(tSpeed);
			s4A(tSpeed);
			s5A(tSpeed);
			demo();
			goto end;

		}
		else
		{
			cout << "***TRY AGAIN*** \n" << arrowRight;
			goto thirdChoice;
		}
	choice5Bor5C:
		cout << "\n===(What will you do?)===" << endl;
		Sleep(500);
		/*5B Select Button*/cout << "+------------------------------------------------------------------------+ \n|                     1. Go to a friend's Tavern                        | \n +-----------------------------------------------------------------------+" << endl;     //3A Select Button
		Sleep(500);
		/*5C Select Button*/cout << "+------------------------------------------------------------------------+ \n|                     2. Try to find an open shop                       | \n+------------------------------------------------------------------------+ \n" << arrowRight;     //3A Select Button
	forthChoice:
		cin >> choice;
		if (choice == "1" || choice == "Tavern" || choice == "tavern")
		{
			SetConsoleTextAttribute(hConsole, 14);
			char extra[] = { "\nFelix: \"There's probably no shops open at this time in the night, but \nmabey Demetri still has his Tavern open.. I'll check there.\" \nFelix sets off towards the direction of his friend's tavern, in high hopes \nthat he could help Felix with a few supplies. \n\nIt wasn't long before Felix reached a small stone building with a sign with \na pint of \"juice\" inscribed on it. Felix stops in front of the old wooden \ndoor, takes a small breath, and enters the building." };
			for (int i = 0; i < strlen(extra); i++)
			{
				cout << extra[i];
				Sleep(tSpeed);
				if (i == 130)
				{
					SetConsoleTextAttribute(hConsole, 7);
				}
			}
			s5B(tSpeed);
			s4A(tSpeed);
			s5A(tSpeed);
			demo();
			goto end;
		}
		else if (choice == "2" || choice == "Shop" || choice == "shop")
		{
			s5C(tSpeed);
			s4A(tSpeed);
			s5A(tSpeed);
			demo();
			goto end;
		}
		else
		{
			cout << "***TRY AGAIN*** \n" << arrowRight;
			goto forthChoice;
		}
	end:
	system("pause");
	return 0;
}