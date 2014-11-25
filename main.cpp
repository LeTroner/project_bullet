#include "main.h"
#include <iostream>
#include <string>




int main()
{
	variables v;
	variables cObject;
	variables *cP = &cObject;

	

	cP->getBulletWeight();
	cP->getShootDistance();
	cP->getBulletImpulse();
	cP->getTravelTime();
	cP->getBulletForce();
	cP->getBulletPression();
	cP->getBulletMPa();
	cout << cP->setWeightOfBulletG << "setWeight\n";


	

	cin.get();

}
