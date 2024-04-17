//Nejat Abiba
//CIS 1201 800
//April 16th, 2024

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
	
	private:
		string manufacturer;
		int yearBuilt;
	
	public:
		Vehicle();
		Vehicle(string, int);


		string getManufacturer();
		void setManufacturer(string);

		int getYearBuilt();
		void setYearBuilt(int);
	
		void displayInfo();
};

#endif