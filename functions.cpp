#include "main.h"
#include <iostream>
using namespace std;


functions::functions()
{}

int functions::safeInput()
{
		int sInput;
		do
		{
			cin >> sInput;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		} while (cin.fail());
		return sInput;
}

double functions::bulletInput()
{
	
		cout << "Please enter the weight of your bullet in gramms: \n";
		int bInput = 0;
		while (true)
		{
			bInput = safeInput();

			if (bInput <= 0)
			{
				cout << "Add a number which is higher than 0,\n";
				cout <<"to be able to set the weight of the bullet.\n";
			}
			else
			{
				break;
			}



		}
		return bInput;
}

double functions::distanceInput()
{
	cout << "Please enter the distance from where you want to shoot in meters: \n";
	double dInput = 0;
	while (true)
	{
		dInput = safeInput();

		if (dInput < 0)
		{
			cout << "Add a number which is higher than or equal to 0,\n";
			cout << "to be able to set the distance from where you want to shoot. \n";
		}
		else
		{
			break;
		}
	}
	cout << dInput << "(m) is the distance where you are shooting from. \n";
	return dInput;
}
