//Nejat Abiba
//CIS 1201 800
//April 16th, 2024

#include <iostream>
#include "Validation.h"
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

Vehicle getVehicleInfo();
Car getCarInformation();
Truck getTruckInformation();

int main()
{
    cout << "Vehicle Program" << endl << endl;
    
    cout << "Vehicle:" << endl;
    Vehicle vehicle = getVehicleInfo();
    vehicle.displayInfo();
    cout << endl;

    cout << "Car:" << endl;
    Car car = getCarInformation();
    car.displayInfo();
    cout << endl;

    cout << "Truck:" << endl;
    Truck truck = getTruckInformation();
    truck.displayInfo();
    cout << endl;
}

Vehicle getVehicleInfo() {
    string manufacturer;
    int year;
    
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    year = getIntInput();

    Vehicle vehicle(manufacturer, year);
    return vehicle;
}

Car getCarInformation() {
    string manufacturer;
    int year, numberOfDoors;

    cout << "Vehicle: " << endl <<
        "Enter the manufacturer: ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    year = getIntInput();

    cout << "Enter the number of doors: ";
    numberOfDoors = getIntInput();

    Car car(manufacturer, year, numberOfDoors);
    return car;
}

Truck getTruckInformation() {
    string manufacturer;
    int year, towingCapacity;

    cout << "Vehicle: " << endl <<
        "Enter the manufacturer: ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    year = getIntInput();

    cout << "Enter the towing capacity: ";
    towingCapacity = getIntInput();

    Truck truck(manufacturer, year, towingCapacity);
    return truck;
}