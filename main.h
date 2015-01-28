#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <iostream>

using namespace std;

class inputCheck
{
public:
	double safeInput();
	
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
	friend class dataSave;
	public:
		variables();
		~variables();
		void setBulletSpeed(double sBSp)
		{
			speedOfBullet = sBSp;
		};
		void setBulletSurface(double sBSurf)
		{
			surfaceOfBullet = sBSurf;
		};
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
		double getSpeedOfBullet(double gSpB);
		long double getSurfaceOfBullet(double gSrfB);
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
		double speedOfBullet;
		long double surfaceOfBullet;
	
	friend void recording();
};

class choose:public variables
{
public:
	choose();
	double bulletChoosing();
	void savingOption();
};

class dataSave: public variables
{
	friend class bulletChoose;
	public:
		dataSave();
		void recording();
};




















#endif // !MAIN_H_INCLUDED
