#pragma once

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