//Nejat Abiba
//CIS 1201 800
//April 16th, 2024

#ifndef CAR_H
#define CAR_H


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

#endif