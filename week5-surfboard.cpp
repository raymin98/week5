// week5-surfboard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Week 05 - Programming Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>

//#include<bits/stdc++.h>
using namespace std;
void exit_fun(void)
{
	cout << "Thank You! ";
}
void ShowUsage()
{
	cout << "The user has to select a choice for accessing different functions" << endl;
	cout << "The price of a large surfboard is $200" << endl;
	cout << "The price of a medium surfboard is $190" << endl;
	cout << "The price of a small surfboard is $175" << endl;
	cout << "Please follow the instructions at each stages to get the information" << endl;
}
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotallLarge)
{
	if (iTotalSmall == 0 && iTotalMedium == 0 && iTotallLarge == 0)
	{
		cout << "No purchases made yet." << endl;
		return;
	}
	if (iTotalSmall != 0)
	{
		cout << "The total number of small surfboards is: " << iTotalSmall << endl;
	}
	if (iTotalMedium != 0)
	{
		cout << "The total number of medium surfboards is: " << iTotalMedium << endl;
	}
	if (iTotallLarge != 0)
	{
		cout << "The total number of large surfboards is: " << iTotallLarge << endl;
	}
}
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotallLarge)
{
	if (iTotalSmall == 0 && iTotalMedium == 0 && iTotallLarge == 0)
	{
		cout << "No purchases made yet." << endl;
		return;
	}
	int small = 0;
	int medium = 0;
	int large = 0;
	if (iTotalSmall != 0)
	{
		small = iTotalSmall * 175;
		cout << "The total number of small surfboards is: " << iTotalSmall << "at a total cost of $" << small << endl;
	}
	if (iTotalMedium != 0)
	{
		medium = iTotalMedium * 190;
		cout << "The total number of medium surfboards is: " << iTotalMedium << "at a total cost of $" << medium << endl;
	}
	if (iTotallLarge != 0)
	{
		large = iTotallLarge * 200;
		cout << "The total number of large surfboards is: " << iTotallLarge << "at a total cost of $" << large << endl;
	}
	int total = small + medium + large;
	cout << "Amount due: $" << total << endl;
}
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotallLarge)
{
	cout << "Please enter the quantity and type(S-Small, L-Large, M-Medium)of surfboard you would like to purchase: ";
	int quan;
	char type;
	cin >> quan >> type;
	if (type == 'L' || type == 'l') iTotallLarge += quan;
	else if (type == 'M' || type == 'm') iTotalMedium += quan;
	else iTotalSmall += quan;
}
int main()
{
	for (int i = 0; i < 58; i++)
	{
		cout << "*";
	}
	cout << endl;
	cout << "**Welcome to my johnny Utah's pointBreak Surf Shop**" << endl;
	for (int i = 0; i < 58; i++)
	{
		cout << "*";
	}
	cout << endl << endl << endl << endl;
	cout << "To show program usage press 'S'" << endl << "To purchase a surfboard press 'P'" << endl << "To display current purchases press 'C'" << endl << "To display total amount press 'T'" << endl << "To quit the program press 'Q'" << endl;
	int iTotalSmall = 0, iTotalMedium = 0, iTotallLarge = 0;
	while (1)
	{
		cout << "Please enter selection: ";
		char select;
		cin >> select;
		switch (select)
		{
		case 'S':case 's':
		{
			ShowUsage();
			break;
		}
		case 'P':case 'p':
		{
			MakePurchase(iTotalSmall, iTotalMedium, iTotallLarge);
			break;
		}
		case 'C':case 'c':
		{
			DisplayPurchase(iTotalSmall, iTotalMedium, iTotallLarge);
			break;
		}
		case 'T':case 't':
		{
			DisplayTotal(iTotalSmall, iTotalMedium, iTotallLarge);
			break;
		}
		case 'Q':case 'q':
		{

			atexit(exit_fun);
			exit(10);

		}
		default: break;
		}
		cout << endl;
	}
	return 0;
}