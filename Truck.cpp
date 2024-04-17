//Nejat Abiba
//CIS 1201 800
//April 16th, 2024

#include "Truck.h"
#include <iostream>

Truck::Truck() {
	towingCapacity = 0;
}

Truck::Truck(int towingCapacity) {
	this->towingCapacity = towingCapacity;
}

Truck::Truck(string manufacturer, int year, int towingCapacity) {
	this->Vehicle::Vehicle(manufacturer, year);
	this->towingCapacity = towingCapacity;
}

int Truck::getTowingCapacity() {
	return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) {
	this->towingCapacity = towingCapacity;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << endl;
}