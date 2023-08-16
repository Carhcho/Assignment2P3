#include "Ship.h"

Ship::Ship(string shipName, int yearBuilt)
{
	this->shipName = shipName;
	this->yearBuilt = yearBuilt;
}

void Ship::setShipName(string n)
{
	shipName = n;
}

void Ship::setYearBuilt(int y)
{
	yearBuilt = y;
}

string Ship::getShipName()
{
	return shipName;
}

int Ship::getYearBuilt()
{
	return yearBuilt;
}

void Ship::print()
{
	cout << "Ship" << endl;
	cout << "Name: " << shipName << endl
		<< "Year Built: " << yearBuilt << endl;
}

Ship::Ship()
{
	this->shipName = shipName;
	this->yearBuilt = yearBuilt;
}
