#include "main.h"
#include <iostream>
using namespace std;


variables::variables()
{}
variables v;
variables *vP = &v;
double variables::getSpeedOfBullet(double gSpoB)
{
	cout << gSpoB << "(m/s) is the speed of the bullet\n";
	vP->setBulletSpeed(gSpoB);
		return 0;
};
long double variables::getSurfaceOfBullet(double gSrfoB)
{
	cout << gSrfoB << "(m^2) is the surface of the bullet\n";
	vP->setBulletSurface(gSrfoB);
	return 0;
};
double functions::getWeight(double gWt)
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
	gIt = vP->weight * vP->speedOfBullet;
	cout << gIt << "(kg*m/s) is the impulse of the bullet. \n";
	vP->setBulletImpulse(gIt);
	return 0;
	
}

double variables::getTime(double gTe)
{
	gTe = vP->distance / vP->speedOfBullet;
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
	gPn = vP->force / vP->surfaceOfBullet;
	vP->setBulletPression(gPn);
	return 0;
}
long double variables::getMPa(long double gMa)
{
	gMa = vP->pression / 1000000;
	cout << gMa << "(mPa) is the pression of the bullet on a(n) " << vP->surfaceOfBullet << "(m^2) wall. \n";
	vP->setBulletMPa(gMa);
	return 0;
}dataSave::dataSave()
{

};
void dataSave::recording()
{
	ofstream recorder("records.txt");
	recorder << vP->surfaceOfBullet << " (m^2)\n";
	recorder << vP->speedOfBullet << " (m/s)\n";
	recorder << vP->weight << " (kg)\n";
	recorder << vP->distance << " (m)\n";
	recorder << vP->impulse << " (kg*m/s)\n";
	recorder << vP->time << " (s)\n";
	recorder << vP->force << " (N)\n";
	recorder << vP->mPa << " (mPa)\n";
	recorder.close();

};
variables::~variables()
{

};
