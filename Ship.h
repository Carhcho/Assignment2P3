#pragma once
#include <string>
#include <iostream>
using namespace std;

class Ship
{
public:
	string shipName;
	int yearBuilt = 0;
	Ship(string shipName, int yearBuilt);
	void setShipName(string n);
	void setYearBuilt(int y);
	string getShipName();
	int getYearBuilt();
	virtual void print();
	Ship();
};