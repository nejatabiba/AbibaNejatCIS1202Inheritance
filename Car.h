#pragma once
#include "Vehicle.h"


class Car:Vehicle {
	private:
		int numberOfDoors;

	public:
		Car();
		Car(int);
		Car(string, int, int);

		int getNumberOfDoors();
		void setNumberOfDoors(int);

		void displayInfo();

};