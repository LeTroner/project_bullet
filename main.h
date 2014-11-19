#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;



class functions
{
	public:
		functions();
		int safeInput();
		double bulletInput();
		double distanceInput();
			
};

class variables
{
	public:
		variables();

		double getBulletWeight();
		double getShootDistance();
		double getBulletImpulse();
		double getTravelTime();
		double getBulletForce();
		long double getBulletPression();
		long double getBulletMPa();

		double setWeightOfBulletG;
		double setDistanceInM;
		double setImpulseOfBullet;
		double setTime;
		double setForce;

		long double setPression;
		long double setMPa;

		const double pi = 3.141592654;
		const double speedOfBullet = 750;
		const long double surfaceOfBulletInMeters = pi * 0.001 * 0.001;

};


























#endif // !MAIN_H_INCLUDED
