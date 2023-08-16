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
