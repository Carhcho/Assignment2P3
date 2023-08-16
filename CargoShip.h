#pragma once
#include <string>
#include <iostream>
#include "Ship.h"
using namespace std;

class CargoShip : public Ship
{
public:
	int cargoCapacity = 500;
	CargoShip(string shipName, int year, int capacity);
	void setCargoCapacity(int c);
	int getCargoCapacity();
	virtual void print();
};

