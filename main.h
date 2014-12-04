#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class inputCheck
{
public:
	int safeInput();
	
};
class functions: public inputCheck
{
	public:
			functions();
			double bulletInput();
			double distanceInput();

			double getDistance(double gDi);
			double getWeight(double gWe);
			
};

class variables:public functions
{
	public:
		variables();

		void setBulletWeight(double sW)
		{
			weight = sW;
		};
		void setShootDistance(double sD)
		{
			distance = sD;
		};
		void setBulletImpulse(double sImp)
		{
			impulse = sImp;
		};
		void setTravelTime(double sT)
		{
			time = sT;
		};
		void setBulletForce(double sF)
		{
			force = sF;
		};
		void setBulletPression(double sP)
		{
			pression = sP;
		};
		void setBulletMPa(double sMpa)
		{
			mPa = sMpa;
		};

		double getImpulseOfBullet(double gImpB);
		double getTime(double gTime);
		double getForce(double gForce);
		long double getPression(long double gPres);
		long double getMPa(long double gMpa);

private:

	double weight;
	double distance;
	double impulse;
	double time;
	double force;
	double pression;
	double mPa;
		const double pi = 3.141592654;
		const double speedOfBullet = 750;
		const long double surfaceOfBulletInMeters = pi * 0.001 * 0.001;

};


























#endif // !MAIN_H_INCLUDED
