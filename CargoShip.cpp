#include "CargoShip.h"

CargoShip::CargoShip(string shipName, int yearBuilt, int capacity)
{
	this->shipName = shipName;
	this->yearBuilt = yearBuilt;
	this->cargoCapacity = capacity;
}

void CargoShip::setCargoCapacity(int c)
{
	cargoCapacity = c;
}

int CargoShip::getCargoCapacity()
{
	return cargoCapacity;
}
//overloading the class method print in Ship to show what was required for this specific class
void CargoShip::print()
{
	cout << "Cargo Ship" << endl;
	cout << "Name: " << getShipName() << endl
		<< "Cargo Capacity: " << cargoCapacity << endl;
}
