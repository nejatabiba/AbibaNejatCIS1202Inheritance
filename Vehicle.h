#pragma once
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