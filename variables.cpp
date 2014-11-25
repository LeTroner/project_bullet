#include "main.h"
#include <iostream>
using namespace std;


variables::variables()
{}
variables v;
variables *vP = &v;
double variables::getBulletWeight()
{
	vP->setWeightOfBulletG = functions::bulletInput();
	vP->setWeightOfBulletG /= 1000; //this creates kilogramm from gramm
	cout << vP->setWeightOfBulletG << "(kg) is the weight of the bullet. \n";
	return vP->setWeightOfBulletG;
	
}
double variables::getShootDistance()
{
	return vP->setDistanceInM = functions::distanceInput();;
}
double variables::getBulletImpulse()
{
	vP->setImpulseOfBullet = vP->setWeightOfBulletG * speedOfBullet;
	cout << vP->setImpulseOfBullet << "(kg*m/s) is the impulse of the bullet. \n";
	return vP->setImpulseOfBullet;
	
}
double variables::getTravelTime()
{
	vP->setTime = vP->setDistanceInM / speedOfBullet;
	cout << vP->setTime << "(s)is the travel time. \n";
	return vP->setTime;
}
double variables::getBulletForce()
{
	vP->setForce = vP->setImpulseOfBullet / vP->setTime;
	cout << vP->setForce << "(N) is the force of the bullet. \n";
	return vP->setForce;
}
long double variables::getBulletPression()
{
	vP->setPression = vP->setForce / surfaceOfBulletInMeters;
	return vP->setPression;
}
long double variables::getBulletMPa()
{
	vP->setMPa = vP->setPression / 1000000;
	cout << vP->setMPa << "(mPa) is the pression of the bullet on a(n) " << surfaceOfBulletInMeters << "(m^2) wall. \n";
	return vP->setMPa;
}
