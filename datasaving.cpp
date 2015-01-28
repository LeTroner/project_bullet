#include "main.h"
#include <fstream>
#include <iostream>

using namespace std;

dataSave::dataSave()
{

};
void dataSave::recording()
{
	variables v;
	variables *vP = &v;
	ofstream recorder("records.txt");
	cout << v.speedOfBullet << endl;
	recorder << vP->surfaceOfBullet << " (m/s)\n";
	recorder << vP->speedOfBullet << " (m^2)\n";
	recorder << vP->weight << " (kg)\n";
	recorder << vP->distance << " (m)\n";
	recorder << vP->impulse << " (kg*m/s)\n";
	recorder << vP->time << " (s)\n";
	recorder << vP->force << " (N)\n";
	recorder << vP->mPa << " (mPa)\n";
	recorder.close();

};
