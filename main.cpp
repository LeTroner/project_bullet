#include "main.h"
#include <iostream>
#include <string>




int main()
{
	functions f;
	functions *fP = &f;
	variables v;
	variables *cP = &v;

	double gWe = 0;
	double gDi = 0;
	double gImpB = 0;
	double gTime = 0;
	double gForce = 0;
	long double gPres = 0;
	long double gMpa = 0;
	
	fP->getWeight(gWe);
	fP->getDistance(gDi);
	cP->getImpulseOfBullet(gImpB);
	cP->getTime(gTime);
	cP->getForce(gForce);
	cP->getPression(gPres);
	cP->getMPa(gMpa);


	

	cin.get();

}
