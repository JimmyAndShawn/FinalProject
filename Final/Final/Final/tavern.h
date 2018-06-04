#include <iostream>
#include <windows.h>
using namespace std;
void tavern()
{
	int i1 = 00;
	int i2 = 00;
	int i3 = 00;
	int inventory[] = { i1, i2, i3 };		//Calls variables
	int userGold = 100;
	int itemBuy = 0;
	int juice = 10;
	int juiceID = 01;
	int crossBow = 70;
	int crossBowID = 02;
	do {
		system("cls");
		cout << "+=------------------Tavern--------------=+" << endl;	//Displays Shop
		cout << "|                    _1_          _2_    |" << endl;
		cout << "|     Item ------  \"Juice\"     CrossBow  |" << endl;
		cout << "|     Gold ------   10 Gp        70 Gp   |" << endl;
		cout << "| Description ---  1d4+1 Hp    1d10 dmg  |" << endl;
		cout << "|                   -2 Ac                |" << endl;
		cout << "+=--------------------------------------=+" << endl;
		cout << "Gold:  " << userGold << endl;
		cout << "Current Inventory :" << endl;	//Shows Current Inventory
		for (int x = 0; x < 3; x++)
		{
			switch (inventory[x])
			{
			case 00:
				cout << "EMPTY" << endl;
				break;
			case 01:
				cout << "\"Juice\" -- 1d4+1 healing (-2 AC)" << endl;
				break;
			case 02:
				cout << "CrossBow -- 1d10 Dmg (3 Bolts)" << endl;
				break;
			default:
				break;
			}
		}
		cout << "What would you like to buy? (-1 to exit) \n>";
		while (!(cin >> itemBuy))					//User Input
		{
			cout << "ERROR!! INVALID INPUT PLEASE TRY AGAIN\n>" << endl;
			cin.clear();
			cin.ignore(100000, '\n');
		}
		if (itemBuy == 2 || itemBuy == 1)
		{
			switch (itemBuy)
			{
			case 1:									//If input is equal to 1 (Rope)
				if (userGold >= juice)					//Checks for correct amount of gold
				{
					if (inventory[0] == 00)			//Checks inventory and subtracts gold if there is room for the item
					{
						inventory[0] = juice;
						userGold = userGold - juice;
					}
					else if (inventory[0] != 00 && inventory[1] == 00)
					{
						inventory[1] = juiceID;
						userGold = userGold - juice;
					}
					else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
					{
						inventory[2] = juiceID;
						userGold = userGold - juice;
					}
					else
					{
						cout << "You do not have enough space" << endl;
						Sleep(2000);
					}
				}
				else
				{
					cout << "You do not have enough gold." << endl;
					Sleep(2000);
				}
				break;
			case 2:									//If Input is equal to 2 (Potion)
				if (userGold >= crossBow)					//Checks to see if player has enough gold
				{
					if (inventory[0] == 00)			//Checks inventory for space and subtracts gold if there is room for the item
					{
						inventory[0] = crossBowID;
						userGold = userGold - crossBow;
					}
					else if (inventory[0] != 00 && inventory[1] == 00)
					{
						inventory[1] = crossBowID;
						userGold = userGold - crossBow;
					}
					else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
					{
						inventory[2] = crossBowID;
						userGold = userGold - crossBow;
					}
					else
					{
						cout << "You do not have enough space" << endl;
						Sleep(2000);
					}
				}
				else
				{
					cout << "You do not have enough gold." << endl;
					Sleep(2000);
				}
				break;
				/*			case 3:									//If input is equal to 3
				if (userGold >= sword)
				{
				if (inventory[0] == 00)
				{
				inventory[0] = swordID;
				userGold = userGold - sword;
				}
				else if (inventory[0] != 00 && inventory[1] == 00)
				{
				inventory[1] = swordID;
				userGold = userGold - sword;
				}
				else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
				{
				inventory[2] = swordID;
				userGold = userGold - sword;
				}
				else
				{
				cout << "You do not have enough space" << endl;
				}
				}
				else
				{
				cout << "You do not have enough gold." << endl;
				}*/
				break;
			default:
				break;
			}
		}
		else if (itemBuy <= -2 || itemBuy >= 2 || itemBuy == 0)
		{
			cout << "ERROR!! INVALID INPUT PLEASE TRY AGAIN!!" << endl;
			Sleep(2000);
		}
	} while (itemBuy != -1);
	i1 = inventory[0];
	i2 = inventory[1];
	i3 = inventory[2];
	//totalGold = userGold;
}