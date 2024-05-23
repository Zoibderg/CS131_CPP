/*
 
 Programmer: Austin Tesch
 Date modified: 05-23-24
 Compiler used:  XCODE v. 15.0
 
 Purpose:
 Three cars drive a 500-mile route. Write a program that inputs the car's make and the number of gallons of fuel used by each car.
 
 After calling a "calcMPG()" function once for each car, have main determine and display which car was the most fuel-efficient and how many miles per gallon it got.
 
 The "calcMPG()" function should be passed the distance driven and the gallons of gas used as arguments, and should return the miles per gallon obtained.
 
 */

#include <iostream>
#include <string>

using namespace std;

double calcMPG(double distance, double gallons);
void inputRequest(string& make, double& gallons, int car_number);

const int DISTANCE = 500;
const int TOTAL_CARS = 3;

int main() {
    string make1, make2, make3;
    double gallons1, gallons2, gallons3;

    // Request input from user
    for (int i = 1; i <= TOTAL_CARS; ++i) {
        // Store make and gallons of fuel
        switch (i) {
            case 1:
                inputRequest(make1, gallons1, i);
                break;
            case 2:
                inputRequest(make2, gallons2, i);
                break;
            case 3:
                inputRequest(make3, gallons3, i);
                break;
        }
    }

    // Calculate MPG
    double mpg1 = calcMPG(DISTANCE, gallons1);
    double mpg2 = calcMPG(DISTANCE, gallons2);
    double mpg3 = calcMPG(DISTANCE, gallons3);

    // Determine the most fuel-efficient make
    double mpg_max = mpg1;
    string most_efficient = make1;

    if (mpg2 > mpg_max) {
        mpg_max = mpg2;
        most_efficient = make2;
    }
    if (mpg3 > mpg_max) {
        mpg_max = mpg3;
        most_efficient = make3;
    }

    // Output results
    for (int i = 1; i <= TOTAL_CARS; ++i) {
        switch (i) {
            case 1:
                cout << "The " << make1 << " achieved " << mpg1 << " miles per gallon." << endl;
                break;
            case 2:
                cout << "The " << make2 << " achieved " << mpg2 << " miles per gallon." << endl;
                break;
            case 3:
                cout << "The " << make3 << " achieved " << mpg3 << " miles per gallon." << endl;
                break;
        }
    }

    cout << "\nThe most efficient car is the " << most_efficient << " getting " << mpg_max << " miles per gallon." << endl;

    return 0;
}

double calcMPG(double distance, double gallons) {
    return distance / gallons;
}

void inputRequest(string& make, double& gallons, int car_number) {
    cout << "Provide the make of car " << car_number << ": " << endl;
    cin >> make;

    cout << "Provide the total amount of fuel used (in gallons) to travel " << DISTANCE << ": " << endl;
    cin >> gallons;
}

