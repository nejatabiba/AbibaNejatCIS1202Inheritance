#include "Car.h"
#include <iostream>

Car::Car(){
	numberOfDoors = 4;
}

Car::Car(int numberOfDoors) {
	this->numberOfDoors = numberOfDoors;
}

Car::Car(string manufacturer, int year, int numberOfDoors) {
	this->Vehicle::Vehicle(manufacturer, year);
	this->numberOfDoors = numberOfDoors;
}

int Car::getNumberOfDoors() {
	return numberOfDoors;
}

void Car::setNumberOfDoors(int numberOfDoors) {
	this->numberOfDoors = numberOfDoors;
}


void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Number of Doors: " << numberOfDoors << endl;

}