#include "main.h"
#include <iostream>
using namespace std;


variables::variables()
{}
variables v;
double variables::getBulletWeight()
{
	v.setWeightOfBulletG = functions::bulletInput();
	v.setWeightOfBulletG /= 1000; //this creates kilogramm from gramm
	cout << v.setWeightOfBulletG << "(kg) is the weight of the bullet. \n";
	return v.setWeightOfBulletG;
	
}
double variables::getShootDistance()
{
	return v.setDistanceInM = functions::distanceInput();;
}
double variables::getBulletImpulse()
{
	v.setImpulseOfBullet = v.setWeightOfBulletG * speedOfBullet;
	cout << v.setImpulseOfBullet << "(kg*m/s) is the impulse of the bullet. \n";
	return v.setImpulseOfBullet;
	
}
double variables::getTravelTime()
{
	v.setTime = v.setDistanceInM / speedOfBullet;
	cout << v.setTime << "(s)is the travel time. \n";
	return v.setTime;
}
double variables::getBulletForce()
{
	v.setForce = v.setImpulseOfBullet / v.setTime;
	cout << v.setForce << "(N) is the force of the bullet. \n";
	return v.setForce;
}
long double variables::getBulletPression()
{
	v.setPression = v.setForce / surfaceOfBulletInMeters;
	return v.setPression;
}
long double variables::getBulletMPa()
{
	v.setMPa = v.setPression / 1000000;
	cout << v.setMPa << "(mPa) is the pression of the bullet on a(n) " << surfaceOfBulletInMeters << "(m^2) wall. \n";
	return v.setMPa;
}
