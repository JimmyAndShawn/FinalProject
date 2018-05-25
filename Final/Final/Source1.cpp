using namespace std;
#include <string> 
#include <iostream>
#include "textColorChange.h"
#include "shop1.h"
#include "fighting.h"
void fighting();
void shop1(int totalGold, int gI1, int gI2, int gI3);
void Felix();
void King();
int main(int totalGold, int gI1, int gI2, int gI3)
{
	if (gI1 > 3 && gI2 > 3 && gI3 > 3)
	{
		totalGold = 100;
		gI1 = 00;
		gI2 = 00;
		gI3 = 00;
	}
	int pause = 0;
	char myStory[] = { "Old Man Jenkins: \"YOU CAN'T KEEP DOING THIS THE WILL KILL YOU!!\"\n" };
	for (int i = 0; i < strlen(myStory); i++)
	{
		cout << myStory[i];
		Sleep(50);
		switch (i)
		{
		case 43:
			Felix();
			break;
		case 47:
			King();
			break;
		default:
			break;
		}
	}
	int choose;
	char choice[] = { "Would you like to go to the (1) shop or to the (2) training grounds?\n>" };
	for (int i = 0; i < strlen(choice); i++)
	{
		cout << choice[i];
		Sleep(50);
	}
	cin >> choose;
	while (!(cin >> choose))					//User Input
	{
		cout << "ERROR!! INVALID INPUT PLEASE TRY AGAIN\n>" << endl;
		cin.clear();
		cin.ignore(100000, '\n');
	}
		if (choose == 1)
		{
			shop1(totalGold, gI1, gI2, gI3);
		}
		else if (choose == 2)
		{
			fighting();
		}
		else
		{
			char error[] = { "Error!! Try Again." };
			for (int i = 0; i < strlen(error); i++)
			{
				cout << error;
				Sleep(50);
		}
	}
	system("pause");
	return 0;
}