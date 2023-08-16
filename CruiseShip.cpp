#include "CruiseShip.h"

CruiseShip::CruiseShip(string shipName, int yearBuilt, int maxPassengers)
{
	this->shipName = shipName;
	this->yearBuilt = yearBuilt;
	this->MaxOccupancy = maxPassengers;
}

void CruiseShip::setMaxOccupancy(int m)
{
	MaxOccupancy = m;
}

int CruiseShip::getMaxOccupancy()
{
	return MaxOccupancy;
}
//overloading the class method print in Ship to show what was required for this specific class
void CruiseShip::print()
{
	cout << "Cruise Ship" << endl;
	cout << "Name: " << getShipName() << endl
		<< "Maximum Passanger: " << MaxOccupancy << endl;
}
