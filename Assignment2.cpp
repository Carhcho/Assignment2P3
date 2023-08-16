/******************************************

Assignment 2

In this assignment a class hierarchy is created with three classes. The three classes are described below.

Ship class (include Ship.h and Ship.cpp)

Contains data members for the following
String for name of the ship
Integer for the year the ship was built
Constructor with parameters
Accessors and mutators for the data members
A Virtual print function that displays the ship’s name and the year it was built
CruiseShip (include CuriseShip.h and CruiseShip.cpp) class that is derived from the Ship class.

Contains data members for the following
Integer for the maximum number of passengers
Constructor
Accessor and mutator for the data member
A print function that overrides the print function in the base class. This print function should display only the ship’s name and the maximum number of passengers.
CargoShip (include CargoShip.h and CargpShip.cpp) class that is derived from Ship class.

Contains data members for the following
Integer for the cargo capacity in tonnage
Constructor
Accessor and mutator for the data member
A print function that overrides the print function in the base class. This print function should display only the ship’s name and the cargo capacity.

Main should create an array of Ship pointers. The array should be able to hold six elements. The array elements should be initialized with the addresses of dynamically allocated Ship, CruiseShip, and CargoShip objects. The program should then have two methods that is passed the array of Ship pointers (the array), one method will iterate thru the array calling the print method. The other method will determine which ship is older. The array should have two instances of each of the classes.


Author: Cesar Roncancio

Created : 11/07/2021

Revisions : 11/07/2021 I created the classes cruiseShip and CargoShip derived from Ship, each one with with the overloaded print function so it displays what is needed, and in the main I created the methods print and oldest to fulfill the requirements of printing the contents of the ships array and print the oldest ship.
******************************************/
#include <iostream>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"
using namespace std;
const int SIZE = 6;
void print(Ship* ships[]);
void oldest(Ship* ships[]);

int main() {
	//created an array of ships type Ship
	Ship* ships[SIZE] = {};

	
	ships[0] = new Ship("USS Hornet", 1942);

	ships[1] = new CargoShip("Mayflower", 1620, 102);

	ships[2] = new CruiseShip("Titanic", 1912, 3547);

	ships[3] = new CruiseShip("QE2", 1969, 2092);

	ships[4] = new Ship("Santa Maria", 1942);

	ships[5] = new CargoShip("Cargo INC", 2015, 200);

	print(ships);
	oldest(ships);
	
}
//used a for to go through the ships array and print each ship using their overloaded print class method
void print(Ship* ships[]) {
	for (int i = 0; i < SIZE; i++) {
		ships[i]->print();
	}
}
//used a for to heck each ship in the ships array and compare to the one before to save the position of the oldest and then print the oldest with their class method print
void oldest(Ship* ships[]) {
	int oldest = 0;
	int date = 2021;
	for (int i = 0; i < SIZE; i++) {
		if (ships[i]->getYearBuilt() <= date) {
			oldest = i;
			date = ships[i]->getYearBuilt();
		}
	}
	cout << "\nthe oldest ship in the list is :" << endl;
	ships[oldest]->print();
}