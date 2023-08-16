# Assignment2P3
Assignment2 Programming 3
--------------------------------------------------------------------

In this assignment, a class hierarchy is created with three classes. The three classes are described below.

<br>
Ship class (include Ship.h and Ship.cpp)
<br>
Contains data members for the following <br>
String for name of the ship <br>
Integer for the year the ship was built <br>
Constructor with parameters <br>
Accessors and mutators for the data members <br>
A Virtual print function that displays the ship’s name and the year it was built <br>
CruiseShip (include CuriseShip.h and CruiseShip.cpp) class that is derived from the Ship class. <br>
<br>

Contains data members for the following <br>
Integer for the maximum number of passengers <br>
Constructor <br>
Accessor and mutator for the data member <br>
A print function that overrides the print function in the base class. This print function should display only the ship’s name and the maximum number of passengers. <br>
CargoShip (include CargoShip.h and CargpShip.cpp) class that is derived from Ship class. <br>
<br>

Contains data members for the following <br>
Integer for the cargo capacity in tonnage <br>
Constructor <br>
Accessor and mutator for the data member <br>
A print function that overrides the print function in the base class. This print function should display only the ship’s name and the cargo capacity.
<br>

Main should create an array of Ship pointers. The array should be able to hold six elements. The array elements should be initialized with the addresses of dynamically allocated Ship, CruiseShip, and CargoShip objects. The program should then have two methods that are passed the array of Ship pointers (the array), one method will iterate thru the array calling the print method. The other method will determine which ship is older. The array should have two instances of each of the classes.
<br>

Author: Cesar Roncancio
<br>
Created: 11/07/2021
<br>
Revisions: 11/07/2021 I created the classes cruiseShip and CargoShip derived from Ship, each one with with the overloaded print function so it displays what is needed, and in the main I created the methods print and oldest to fulfill the requirements of printing the contents of the ships array and print the oldest ship.
