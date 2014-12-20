#include "main.h"
#include <iostream>
//#include <string>
#include <cmath>

using namespace std;

variables var;
variables *varP = &var;
bulletChoose::bulletChoose()
{
	
}
double bulletChoose::bulletChoosing()
{
	int chooseNum;
	int speedBullet;
	double diameterBullet;
	double surfaceBullet;
	const double pi = 3.141592654;
	cout << "The program begins, first step, you need to choose from different types of bullet: \n";
	while (true)
	{
		chooseNum = safeInput();

		if (chooseNum > 2 || chooseNum <= 0)
		{
			cout << "Add a number which is higher than 0 and smaller than or equal to 2,\n";
			cout << "to be able to choose the type of the bullet.\n";
		}
		else
		{
			break;
		}

	}
	
	switch (chooseNum)
	{
	case 1:
		cout << "You choosed the first bullet\n";
		speedBullet = 300;
		diameterBullet = 0.03;
		surfaceBullet = pi * pow(diameterBullet, 2);
		varP->getSpeedOfBullet(speedBullet);
		varP->getSurfaceOfBullet(surfaceBullet);
		break;
	case 2:
		cout << "You choosed the second bullet\n";
		speedBullet = 800;
		diameterBullet = 0.0003;
		surfaceBullet = pi * pow(diameterBullet, 2);
		varP->getSpeedOfBullet(speedBullet);
		varP->getSurfaceOfBullet(surfaceBullet);
		break;
	default:
		break;
	}
	return 0;
}
