#include "main.h"
#include <iostream>
using namespace std;


functions::functions()
{

}

int functions::safeInput()
{
		int input = 0;
		do
		{
			cin >> input;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		} while (cin.fail());
		return input;
}

double functions::bulletInput()
{
	
		cout << "Please enter the weight of your bullet in gramms: \n";
		int input = 0;
		while (true)
		{
			input = safeInput();

			if (input < 0)
			{
				cout << "Add a number which is higher than 0.\n";
			}
			else
			{
				break;
			}



		}
		return input;
}

double functions::distanceInput()
{
	cout << "Please enter the distance from where you want to shoot in meters: \n";
	double input = 0;
	while (true)
	{
		input = safeInput();

		if (input <= 0)
		{
			cout << "Add a number which is higher than or equal to 0\n";
		}
		else
		{
			break;
		}
	}
	return input;
}
