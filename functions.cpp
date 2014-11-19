#include "main.h"
#include <iostream>
using namespace std;


functions::functions()
{}

int functions::safeInput()
{
		int sInput = 0;
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
				cout << "Add a number which is higher than 0.\n";
			}
			else
			{
				break;
			}



		}
		cout << bInput << endl;
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
			cout << "Add a number which is higher than or equal to 0\n";
		}
		else
		{
			break;
		}
	}
	cout << dInput << endl;
	return dInput;
}
