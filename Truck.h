//Nejat Abiba
//CIS 1201 800
//April 16th, 2024

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck :Vehicle {
	private:
		int towingCapacity;
	public:
		Truck();
		Truck(int);
		Truck(string, int, int);

		int getTowingCapacity();
		void setTowingCapacity(int);
		void displayInfo();

};

#endif