#include "main.h"
#include <iostream>
using namespace std;


variables::variables()
{}
variables v;
double variables::getBulletWeight()
{
	v.setWeightOfBulletG = functions::bulletInput();
	return v.setWeightOfBulletG /= 1000; //this creates kilogramm from gramm
	
}
double variables::getShootDistance()
{
	return v.setDistanceInM = functions::distanceInput();;
}
double variables::getBulletImpulse()
{
	v.setImpulseOfBullet = v.setWeightOfBulletG * speedOfBullet;
	cout << v.setImpulseOfBullet << "impulse of bullet" << endl;
	return v.setImpulseOfBullet;
	
}
double variables::getTravelTime()
{
	v.setTime = v.setDistanceInM / speedOfBullet;
	cout << v.setTime << "travel time" << endl;
	return v.setTime;
}
double variables::getBulletForce()
{
	v.setForce = v.setImpulseOfBullet / v.setTime;
	cout << v.setForce << "force of the bullet" << endl;
	return v.setForce;
}
long double variables::getBulletPression()
{
	v.setPression = v.setForce / surfaceOfBulletInMeters;
	cout << v.setPression << "pression of the bulelt" << endl;
	return v.setPression;
}
long double variables::getBulletMPa()
{
	v.setMPa = v.setPression / 1000000;
	cout << v.setMPa << "mega pascal" << endl;
	return v.setMPa;
}
