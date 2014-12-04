#include "main.h"
#include <iostream>
using namespace std;


variables::variables()
{}
variables v;
variables *vP = &v;
double functions::getWeight(double gWt)//variables::setBulletWeight(double &bW)
{
	gWt = functions::bulletInput();
	gWt /= 1000; //this creates kilogramm from gramm
	cout << gWt << "(kg) is the weight of the bullet. \n";
	vP->setBulletWeight(gWt);
	return 0;
	
}
double functions::getDistance(double gDe)
{
	gDe = functions::distanceInput();
	cout << gDe << "(m) is the distance from where you are shooting. \n";
	vP->setShootDistance(gDe);
	return 0; 
}

double variables::getImpulseOfBullet(double gIt)
{
	gIt = vP->weight * speedOfBullet;
	cout << gIt << "(kg*m/s) is the impulse of the bullet. \n";
	vP->setBulletImpulse(gIt);
	return 0;
	
}

double variables::getTime(double gTe)
{
	gTe = vP->distance / speedOfBullet;
	cout << gTe << "(s)is the travel time. \n";
	vP->setTravelTime(gTe);
	return 0;
}

double variables::getForce(double gFe)
{
	gFe = vP->impulse / vP->time;
	cout << gFe << "(N) is the force of the bullet. \n";
	vP->setBulletForce(gFe);
	return 0;
}

long double variables::getPression(long double gPn)
{
	gPn = vP->force / surfaceOfBulletInMeters;
	vP->setBulletPression(gPn);
	return 0;
}
long double variables::getMPa(long double gMa)
{
	gMa = vP->pression / 1000000;
	cout << gMa << "(mPa) is the pression of the bullet on a(n) " << surfaceOfBulletInMeters << "(m^2) wall. \n";
	vP->setBulletMPa(gMa);
	return 0;
}
