#pragma once
#include <string>
#include <iostream>
#include "Ship.h"
using namespace std;

class CruiseShip : public Ship
{
public:
	int MaxOccupancy = 500;
	CruiseShip(string shipName, int year, int maxPassengers);
	void setMaxOccupancy(int m);
	int getMaxOccupancy();
	virtual void print();
};

