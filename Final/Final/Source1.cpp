using namespace std;
#include <string> 
#include <iostream>
#include "textColorChange.h"
void Felix();
void King();
int main()
{
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
	system("pause");
	return 0;
}