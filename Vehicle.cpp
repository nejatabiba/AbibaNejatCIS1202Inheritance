#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() {
	manufacturer = "";
	yearBuilt = 0;
}

Vehicle::Vehicle(string manufacturerName, int year) {
	cout << "Parents class called with: " << manufacturerName << " " << year << endl;
	
	this->manufacturer = manufacturerName;
	this->yearBuilt = year;
}

string Vehicle::getManufacturer() {
	return manufacturer;
}

void Vehicle::setManufacturer(string manufacturerName) {
	manufacturer = manufacturerName;
}

int Vehicle::getYearBuilt() {
	return yearBuilt;
}

void Vehicle::setYearBuilt(int year) {
	yearBuilt = year;
}

void Vehicle::displayInfo() {
	cout << "Manufacturer: " << manufacturer << endl <<
		"Year: " << yearBuilt << endl;
}