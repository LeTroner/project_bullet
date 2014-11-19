#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class inputCheck
{
	public:
		inputCheck();
		virtual int safeInput()
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
};

class functions: public inputCheck
{
	public:
		functions();
		double bulletInput()
		{
			cout << "Please enter the weight of your bullet in gramms: \n";
			double input = 0;
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

		}
		double distanceInput()
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
		}
			
};

class variables
{
	public:
		variables();

		double bulletWeight();
		double shootDistance();
		double bulletImpulse();
		double travelTime();
		double bulletForce();
		long double bulletPression();

	protected:
		double weightOfBulletG;
		double distanceInM;
		double impulseOfBullet;
		double time;
		double force;

		long double pression;
		long double mPa;

		const double pi = 3.141592654;
		const double speedOfBullet = 750;
		const long double surfaceOfBulletInMeters = pi * 0.001 * 0.001;

};


























#endif // !MAIN_H_INCLUDED
