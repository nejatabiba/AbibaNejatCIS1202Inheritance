//Nejat Abiba
//CIS 1201 800
//April 16th, 2024

#include <iostream>
#include "Validation.h"
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

Vehicle getVehicleInfo();

int main()
{
    cout << "Vehicle Program" << endl << endl << endl;
    Vehicle vehicle = getVehicleInfo();
    vehicle.displayInfo();

    Car car = getCarInformation();
    car.displayInfo();

    Truck truck = getTruckInformation();
    truck.displayInfo();
}

Vehicle getVehicleInfo() {
    string manufacturer;
    int year;
    
    cout << "Vehicle: " << endl <<
            "Enter the manufacturer: ";
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